#include "include/TROMDomainManager1K.h"

/**
 * Symbol: TROMDomainManager1K::RestrictToInternalWorkingSet(void)
 * Address: 001adbe8
 */
TROMDomainManager1K::RestrictToInternalWorkingSet(void) {
    /*
        1adbe8:	e1a0c00d 	mov	ip, sp
        1adbec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1adbf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1adbf4:	e1a04000 	mov	r4, r0
        1adbf8:	e590105c 	ldr	r1, [r0, #92]	; fField92
        1adbfc:	e5900064 	ldr	r0, [r0, #100]	; fField100
        1adc00:	e1510000 	cmp	r1, r0
        1adc04:	aa000004 	bge	1adc1c <TROMDomainManager1K::RestrictToInternalWorkingSet(void)+0x34>
        1adc08:	e59f0014 	ldr	r0, [pc, #14]	; 1adc24 <TROMDomainManager1K::RestrictToInternalWorkingSet(void)+0x3c>
        1adc0c:	e5900000 	ldr	r0, [r0]
        1adc10:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1adc14:	e3500003 	cmp	r0, #3	; 0x3
        1adc18:	2a000002 	bcs	1adc28 <TROMDomainManager1K::RestrictToInternalWorkingSet(void)+0x40>
        1adc1c:	e3a00001 	mov	r0, #1	; 0x1
        1adc20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1adc24:	0c104f48 	ldceq	15, cr4, [r0], -#288
        1adc28:	e24dd018 	sub	sp, sp, #24	; 0x18
        1adc2c:	e3a00000 	mov	r0, #0	; 0x0
        1adc30:	e59420c4 	ldr	r2, [r4, #196]	; fField196
        1adc34:	e1510002 	cmp	r1, r2
        1adc38:	b58d0014 	strlt	r0, [sp, #20]
        1adc3c:	ba000004 	blt	1adc54 <TROMDomainManager1K::RestrictToInternalWorkingSet(void)+0x6c>
        1adc40:	e59420c8 	ldr	r2, [r4, #200]	; fField200
        1adc44:	e1510002 	cmp	r1, r2
        1adc48:	a59f1058 	ldrge	r1, [pc, #58]	; 1adca8 <TROMDomainManager1K::RestrictToInternalWorkingSet(void)+0xc0>
        1adc4c:	b59f1058 	ldrlt	r1, [pc, #58]	; 1adcac <TROMDomainManager1K::RestrictToInternalWorkingSet(void)+0xc4>
        1adc50:	e58d1014 	str	r1, [sp, #20]
        1adc54:	e58d0010 	str	r0, [sp, #16]	; fField16
        1adc58:	e28d0008 	add	r0, sp, #8	; 0x8
        1adc5c:	eb68975d 	bl	1bd39d8 <$GetGlobalTime>
        1adc60:	e28400bc 	add	r0, r4, #188	; 0xbc
        1adc64:	e24dd008 	sub	sp, sp, #8	; 0x8
        1adc68:	e28d1010 	add	r1, sp, #16	; 0x10
        1adc6c:	e8915000 	ldmia	r1, {ip, lr}
        1adc70:	e88d5000 	stmia	sp, {ip, lr}
        1adc74:	e1a0100d 	mov	r1, sp
        1adc78:	eb68cd07 	bl	1be109c <$CompSub>
        1adc7c:	e28d0008 	add	r0, sp, #8	; 0x8
        1adc80:	e8bd5000 	ldmia	sp!, {ip, lr}
        1adc84:	e8805000 	stmia	r0, {ip, lr}
        1adc88:	e28d1010 	add	r1, sp, #16	; 0x10
        1adc8c:	e1a0000d 	mov	r0, sp
        1adc90:	eb68ccfc 	bl	1be1088 <$CompCompare>
        1adc94:	e3500000 	cmp	r0, #0	; 0x0
        1adc98:	a3a00000 	movge	r0, #0	; 0x0
        1adc9c:	b3a00001 	movlt	r0, #1	; 0x1
        1adca0:	e20000ff 	and	r0, r0, #255	; 0xff
        1adca4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1adca8:	00167f60 	andeqs	r7, r6, r0, ror #30
        1adcac:	00059fd8 	ldreqd	r9, [r5], -r8
    */
}

/**
 * Symbol: TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)
 * Address: 001add00
 */
TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *) {
    /*
        1add00:	e1a0c00d 	mov	ip, sp
        1add04:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1add08:	e24cb004 	sub	fp, ip, #4	; 0x4
        1add0c:	e1a05000 	mov	r5, r0
        1add10:	e1a04001 	mov	r4, r1
        1add14:	e1a06002 	mov	r6, r2
        1add18:	e20390ff 	and	r9, r3, #255	; 0xff
        1add1c:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        1add20:	e24dd05c 	sub	sp, sp, #92	; 0x5c
        1add24:	e28d0048 	add	r0, sp, #72	; 0x48
        1add28:	eb6506a6 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        1add2c:	e28d0034 	add	r0, sp, #52	; 0x34
        1add30:	e1a07000 	mov	r7, r0
        1add34:	eb65a382 	bl	1b16b44 <LOTransactionHandler::$__ct(void)>
        1add38:	e3a08000 	mov	r8, #0	; 0x0
        1add3c:	e88d0050 	stmia	sp, {r4, r6}
        1add40:	e58d8014 	str	r8, [sp, #20]
        1add44:	e58d800c 	str	r8, [sp, #12]	; fField12
        1add48:	e58d8020 	str	r8, [sp, #32]	; fField32
        1add4c:	e58d801c 	str	r8, [sp, #28]	; fField28
        1add50:	e58d8028 	str	r8, [sp, #40]
        1add54:	e5cd8030 	strb	r8, [sp, #48]	; fField48
        1add58:	e1a00004 	mov	r0, r4
        1add5c:	eb65971d 	bl	1b139d8 <$GetStoreClassInfo(TStore const *)>
        1add60:	e59f11fc 	ldr	r1, [pc, #1fc]	; 1adf64 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x264>
        1add64:	eb689304 	bl	1bd297c <TClassInfo::$GetCapability( const(long))>
        1add68:	e3300000 	teq	r0, #0	; 0x0
        1add6c:	0a000005 	beq	1add88 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x88>
        1add70:	e1a01006 	mov	r1, r6
        1add74:	e1a00004 	mov	r0, r4
        1add78:	eb076397 	bl	386bdc <TStore::InSeparateTransaction(unsigned long)>
        1add7c:	e3300000 	teq	r0, #0	; 0x0
        1add80:	11a00007 	movne	r0, r7
        1add84:	1b65a371 	blne	1b16b50 <LOTransactionHandler::$SetAllInTransaction(void)>
        1add88:	e3a03014 	mov	r3, #20	; 0x14
        1add8c:	e92d0008 	stmdb	sp!, {r3}
        1add90:	e28d304c 	add	r3, sp, #76	; 0x4c
        1add94:	e1a01006 	mov	r1, r6
        1add98:	e1a00004 	mov	r0, r4
        1add9c:	e3a02000 	mov	r2, #0	; 0x0
        1adda0:	eb6550e6 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1adda4:	e28dd004 	add	sp, sp, #4	; 0x4
        1adda8:	e1b07000 	movs	r7, r0
        1addac:	1a0000c7 	bne	1ae0d0 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3d0>
        1addb0:	e59d0054 	ldr	r0, [sp, #84]	; fField84
        1addb4:	e3100802 	tst	r0, #131072	; 0x20000
        1addb8:	0a000009 	beq	1adde4 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0xe4>
        1addbc:	e1a0300a 	mov	r3, sl
        1addc0:	e1a02006 	mov	r2, r6
        1addc4:	e1a01004 	mov	r1, r4
        1addc8:	e1a00005 	mov	r0, r5
        1addcc:	eb657e32 	bl	1b0d69c <TROMDomainManager1K::$XIPAddPackage(TStore *, unsigned long, unsigned long *)>
        1addd0:	e1b07000 	movs	r7, r0
        1addd4:	0a0000bd 	beq	1ae0d0 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3d0>
        1addd8:	e287cda2 	add	ip, r7, #10368	; 0x2880
        1adddc:	e37c002c 	cmn	ip, #44	; 0x2c
        1adde0:	1a0000ba 	bne	1ae0d0 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3d0>
        1adde4:	e595005c 	ldr	r0, [r5, #92]	; fField92
        1adde8:	e3300000 	teq	r0, #0	; 0x0
        1addec:	1a000011 	bne	1ade38 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x138>
        1addf0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1addf4:	e28d1004 	add	r1, sp, #4	; 0x4
        1addf8:	e1a00005 	mov	r0, r5
        1addfc:	e3a02002 	mov	r2, #2	; 0x2
        1ade00:	eb6892db 	bl	1bd2974 <TUDomainManager::$Get(unsigned long &, int)>
        1ade04:	e1b07000 	movs	r7, r0
        1ade08:	128dd008 	addne	sp, sp, #8	; 0x8
        1ade0c:	1a0000af 	bne	1ae0d0 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3d0>
        1ade10:	e1a00005 	mov	r0, r5
        1ade14:	e3a01000 	mov	r1, #0	; 0x0
        1ade18:	eb65a344 	bl	1b16b30 <TROMDomainManager1K::$DoAcquireDatabase(unsigned char)>
        1ade1c:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        1ade20:	e1a0100d 	mov	r1, sp
        1ade24:	e1a00005 	mov	r0, r5
        1ade28:	eb6512b6 	bl	1af2908 <TROMDomainManager1K::$AddPage(long *, unsigned long)>
        1ade2c:	e2850004 	add	r0, r5, #4	; 0x4
        1ade30:	eb68af98 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1ade34:	e28dd008 	add	sp, sp, #8	; 0x8
        1ade38:	e59d0054 	ldr	r0, [sp, #84]	; fField84
        1ade3c:	e1a00800 	mov	r0, r0, lsl #16
        1ade40:	e1a00820 	mov	r0, r0, lsr #16
        1ade44:	e3500002 	cmp	r0, #2	; 0x2
        1ade48:	83e07e8a 	mvnhi	r7, #2208	; 0x8a0
        1ade4c:	82477a02 	subhi	r7, r7, #8192	; 0x2000
        1ade50:	8a0000a0 	bhi	1ae0d8 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3d8>
        1ade54:	e28d103c 	add	r1, sp, #60	; 0x3c
        1ade58:	e1a00004 	mov	r0, r4
        1ade5c:	eb654429 	bl	1afef08 <TStore::$IsReadOnly(unsigned char *)>
        1ade60:	e5dd003c 	ldrb	r0, [sp, #60]
        1ade64:	e3300000 	teq	r0, #0	; 0x0
        1ade68:	1a000003 	bne	1ade7c <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x17c>
        1ade6c:	e59d0054 	ldr	r0, [sp, #84]	; fField84
        1ade70:	e3100801 	tst	r0, #65536	; 0x10000
        1ade74:	13a00001 	movne	r0, #1	; 0x1
        1ade78:	1a000000 	bne	1ade80 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x180>
        1ade7c:	e3a00000 	mov	r0, #0	; 0x0
        1ade80:	e5cd003c 	strb	r0, [sp, #60]
        1ade84:	e3390000 	teq	r9, #0	; 0x0
        1ade88:	15cd803c 	strneb	r8, [sp, #60]
        1ade8c:	e59d0048 	ldr	r0, [sp, #72]	; fField72
        1ade90:	e58d0008 	str	r0, [sp, #8]	; fField8
        1ade94:	e59d104c 	ldr	r1, [sp, #76]	; fField76
        1ade98:	e28d2044 	add	r2, sp, #68	; 0x44
        1ade9c:	e1a00004 	mov	r0, r4
        1adea0:	eb653396 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1adea4:	e1b07000 	movs	r7, r0
        1adea8:	1a000088 	bne	1ae0d0 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3d0>
        1adeac:	e59d0044 	ldr	r0, [sp, #68]	; fField68
        1adeb0:	e2800001 	add	r0, r0, #1	; 0x1
        1adeb4:	eb68821f 	bl	1bce738 <$__nw(unsigned int)>
        1adeb8:	e58d0014 	str	r0, [sp, #20]
        1adebc:	eb68d097 	bl	1be2120 <$MemError>
        1adec0:	e1b07000 	movs	r7, r0
        1adec4:	1a000081 	bne	1ae0d0 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3d0>
        1adec8:	e59d3044 	ldr	r3, [sp, #68]	; fField68
        1adecc:	e92d0008 	stmdb	sp!, {r3}
        1aded0:	e1a00004 	mov	r0, r4
        1aded4:	e3a02000 	mov	r2, #0	; 0x0
        1aded8:	e59d1050 	ldr	r1, [sp, #80]	; fField80
        1adedc:	e59d3018 	ldr	r3, [sp, #24]
        1adee0:	eb655096 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1adee4:	e28dd004 	add	sp, sp, #4	; 0x4
        1adee8:	e1b07000 	movs	r7, r0
        1adeec:	1a000077 	bne	1ae0d0 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3d0>
        1adef0:	e59d0044 	ldr	r0, [sp, #68]	; fField68
        1adef4:	e59d1014 	ldr	r1, [sp, #20]
        1adef8:	e7c18000 	strb	r8, [r1, r0]
        1adefc:	e59d0054 	ldr	r0, [sp, #84]	; fField84
        1adf00:	e1a00800 	mov	r0, r0, lsl #16
        1adf04:	e1a00820 	mov	r0, r0, lsr #16
        1adf08:	e3a080ea 	mov	r8, #234	; 0xea
        1adf0c:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        1adf10:	e3300001 	teq	r0, #1	; 0x1
        1adf14:	0a000017 	beq	1adf78 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x278>
        1adf18:	e3300002 	teq	r0, #2	; 0x2
        1adf1c:	11a07008 	movne	r7, r8
        1adf20:	1a00006a 	bne	1ae0d0 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3d0>
        1adf24:	e3a03004 	mov	r3, #4	; 0x4
        1adf28:	e92d0008 	stmdb	sp!, {r3}
        1adf2c:	e28d3044 	add	r3, sp, #68	; 0x44
        1adf30:	e1a01006 	mov	r1, r6
        1adf34:	e1a00004 	mov	r0, r4
        1adf38:	e3a02014 	mov	r2, #20	; 0x14
        1adf3c:	eb65507f 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1adf40:	e28dd004 	add	sp, sp, #4	; 0x4
        1adf44:	e59d1014 	ldr	r1, [sp, #20]
        1adf48:	e28f0f06 	add	r0, pc, #24	; 0x18
        1adf4c:	eb68a70e 	bl	1bd7b8c <$NewByName__FPCcT1>
        1adf50:	e58d000c 	str	r0, [sp, #12]	; fField12
        1adf54:	e3300000 	teq	r0, #0	; 0x0
        1adf58:	1a000042 	bne	1ae068 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x368>
        1adf5c:	e1a07008 	mov	r7, r8
        1adf60:	ea00005c 	b	1ae0d8 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3d8>
        1adf64:	4c4f424a 	mcrrmi	2, 4, r4, pc, cr10
        1adf68:	5453746f 	ldrplb	r7, [r3], -#1135
        1adf6c:	7265436f 	rsbvc	r4, r5, #-1140850687	; 0xbc000001
        1adf70:	6d70616e 	ldfvse	f6, [r0, -#440]!
        1adf74:	64657200 	strvsbt	r7, [r5], -#512	; fField512
        1adf78:	e28d2040 	add	r2, sp, #64	; 0x40
        1adf7c:	e1a00004 	mov	r0, r4
        1adf80:	e59d1048 	ldr	r1, [sp, #72]	; fField72
        1adf84:	eb65335d 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        1adf88:	e1b07000 	movs	r7, r0
        1adf8c:	1a00004f 	bne	1ae0d0 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3d0>
        1adf90:	e59d0040 	ldr	r0, [sp, #64]	; fField64
        1adf94:	e1a00120 	mov	r0, r0, lsr #2
        1adf98:	e1a00500 	mov	r0, r0, lsl #10
        1adf9c:	e58d0040 	str	r0, [sp, #64]	; fField64
        1adfa0:	e28f1f1d 	add	r1, pc, #116	; 0x74
        1adfa4:	e24f0f11 	sub	r0, pc, #68	; 0x44
        1adfa8:	eb68a6f7 	bl	1bd7b8c <$NewByName__FPCcT1>
        1adfac:	e58d000c 	str	r0, [sp, #12]	; fField12
        1adfb0:	e3300000 	teq	r0, #0	; 0x0
        1adfb4:	0affffe8 	beq	1adf5c <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x25c>
        1adfb8:	e1a00005 	mov	r0, r5
        1adfbc:	e3a01004 	mov	r1, #4	; 0x4
        1adfc0:	eb655475 	bl	1b0319c <TROMDomainManager1K::$ReleasePagesFromOurWS(unsigned long)>
        1adfc4:	e59d0014 	ldr	r0, [sp, #20]
        1adfc8:	e28f1f19 	add	r1, pc, #100	; 0x64
        1adfcc:	eb681eb5 	bl	1bb5aa8 <$strcmp>
        1adfd0:	e3300000 	teq	r0, #0	; 0x0
        1adfd4:	0a000005 	beq	1adff0 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x2f0>
        1adfd8:	e59d0014 	ldr	r0, [sp, #20]
        1adfdc:	e28f1f1a 	add	r1, pc, #104	; 0x68
        1adfe0:	eb681eb0 	bl	1bb5aa8 <$strcmp>
        1adfe4:	e3300000 	teq	r0, #0	; 0x0
        1adfe8:	159d3050 	ldrne	r3, [sp, #80]	; fField80
        1adfec:	1a000000 	bne	1adff4 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x2f4>
        1adff0:	e5953050 	ldr	r3, [r5, #80]	; fField80
        1adff4:	e92d0008 	stmdb	sp!, {r3}
        1adff8:	e1a01004 	mov	r1, r4
        1adffc:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        1ae000:	e59d2018 	ldr	r2, [sp, #24]
        1ae004:	e59d3008 	ldr	r3, [sp, #8]	; fField8
        1ae008:	eb658a01 	bl	1b10814 <TStoreCompanderWrapper::$Init(TStore *, char *, unsigned long, unsigned long)>
        1ae00c:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae010:	e1b07000 	movs	r7, r0
        1ae014:	1a00002d 	bne	1ae0d0 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3d0>
        1ae018:	ea000023 	b	1ae0ac <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3ac>
        1ae01c:	5453746f 	ldrplb	r7, [r3], -#1135
        1ae020:	7265436f 	rsbvc	r4, r5, #-1140850687	; 0xbc000001
        1ae024:	6d70616e 	ldfvse	f6, [r0, -#440]!
        1ae028:	64657257 	strvsbt	r7, [r5], -#599	; fField599
        1ae02c:	72617070 	rsbvc	r7, r1, #112	; 0x70
        1ae030:	65720000 	ldrvsb	r0, [r2]!
        1ae034:	544c5a53 	strplb	r5, [ip], -#2643
        1ae038:	746f7265 	strvcbt	r7, [pc], #265	; 1ae040 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x340>
        1ae03c:	4465636f 	strmibt	r6, [r5], -#879	; fField879
        1ae040:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        1ae044:	73736f72 	cmnvc	r3, #456	; 0x1c8
        1ae048:	00000000 	andeq	r0, r0, r0
        1ae04c:	544c5a52 	strplb	r5, [ip], -#2642
        1ae050:	656c6f63 	strvsb	r6, [ip, -#3939]!
        1ae054:	53746f72 	cmnpl	r4, #456	; 0x1c8
        1ae058:	65446563 	strvsb	r6, [r4, -#1379]
        1ae05c:	6f6d7072 	swivs	0x006d7072
        1ae060:	6573736f 	ldrvsb	r7, [r3, -#879]!	; fField879
        1ae064:	72000000 	andvc	r0, r0, #0	; 0x0
        1ae068:	e1a00005 	mov	r0, r5
        1ae06c:	e3a01006 	mov	r1, #6	; 0x6
        1ae070:	eb655449 	bl	1b0319c <TROMDomainManager1K::$ReleasePagesFromOurWS(unsigned long)>
        1ae074:	e3a03001 	mov	r3, #1	; 0x1
        1ae078:	e5dd003c 	ldrb	r0, [sp, #60]
        1ae07c:	e3300000 	teq	r0, #0	; 0x0
        1ae080:	13a02000 	movne	r2, #0	; 0x0
        1ae084:	03a02001 	moveq	r2, #1	; 0x1
        1ae088:	e92d000c 	stmdb	sp!, {r2, r3}
        1ae08c:	e1a02006 	mov	r2, r6
        1ae090:	e1a01004 	mov	r1, r4
        1ae094:	e59d0014 	ldr	r0, [sp, #20]
        1ae098:	e59d3058 	ldr	r3, [sp, #88]	; fField88
        1ae09c:	eb0764c0 	bl	3873a4 <TStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)>
        1ae0a0:	e28dd008 	add	sp, sp, #8	; 0x8
        1ae0a4:	e1b07000 	movs	r7, r0
        1ae0a8:	1a000008 	bne	1ae0d0 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x3d0>
        1ae0ac:	e59d0040 	ldr	r0, [sp, #64]	; fField64
        1ae0b0:	e58d0024 	str	r0, [sp, #36]	; fField36
        1ae0b4:	e1a0100d 	mov	r1, sp
        1ae0b8:	e1a00005 	mov	r0, r5
        1ae0bc:	e3a02000 	mov	r2, #0	; 0x0
        1ae0c0:	eb657961 	bl	1b0c64c <TROMDomainManager1K::$AllocatePackageEntry(PackageChunk *, long *)>
        1ae0c4:	e1a07000 	mov	r7, r0
        1ae0c8:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        1ae0cc:	e58a0000 	str	r0, [sl]
        1ae0d0:	e3370000 	teq	r7, #0	; 0x0
        1ae0d4:	0a00000f 	beq	1ae118 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x418>
        1ae0d8:	e5dd003c 	ldrb	r0, [sp, #60]
        1ae0dc:	e3300000 	teq	r0, #0	; 0x0
        1ae0e0:	0a000006 	beq	1ae100 <TROMDomainManager1K::AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)+0x400>
        1ae0e4:	e3a03000 	mov	r3, #0	; 0x0
        1ae0e8:	e92d0008 	stmdb	sp!, {r3}
        1ae0ec:	e28d2004 	add	r2, sp, #4	; 0x4
        1ae0f0:	e1a00005 	mov	r0, r5
        1ae0f4:	e3a01001 	mov	r1, #1	; 0x1
        1ae0f8:	eb657950 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1ae0fc:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae100:	e59d0014 	ldr	r0, [sp, #20]
        1ae104:	eb687d75 	bl	1bcd6e0 <$__dl(void *)>
        1ae108:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        1ae10c:	e3300000 	teq	r0, #0	; 0x0
        1ae110:	159d000c 	ldrne	r0, [sp, #12]	; fField12
        1ae114:	1b07649b 	blne	387388 <TStoreCompander::Delete(void)>
        1ae118:	e3a00047 	mov	r0, #71	; 0x47
        1ae11c:	eb080014 	bl	3ae174 <GenericSWI>
        1ae120:	e1a00007 	mov	r0, r7
        1ae124:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::DeleteObjectInfo(PackageChunk *, long)
 * Address: 001ae128
 */
TROMDomainManager1K::DeleteObjectInfo(PackageChunk *, long) {
    /*
        1ae128:	e1a0c00d 	mov	ip, sp
        1ae12c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ae130:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ae134:	e1a04001 	mov	r4, r1
        1ae138:	e1a05002 	mov	r5, r2
        1ae13c:	e24dd080 	sub	sp, sp, #128	; 0x80
        1ae140:	e5911000 	ldr	r1, [r1]
        1ae144:	e3310000 	teq	r1, #0	; 0x0
        1ae148:	0a00000c 	beq	1ae180 <TROMDomainManager1K::DeleteObjectInfo(PackageChunk *, long)+0x58>
        1ae14c:	e3350000 	teq	r5, #0	; 0x0
        1ae150:	e3a03000 	mov	r3, #0	; 0x0
        1ae154:	e92d0008 	stmdb	sp!, {r3}
        1ae158:	e1a02004 	mov	r2, r4
        1ae15c:	1a000004 	bne	1ae174 <TROMDomainManager1K::DeleteObjectInfo(PackageChunk *, long)+0x4c>
        1ae160:	e3a01002 	mov	r1, #2	; 0x2
        1ae164:	eb657935 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1ae168:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae16c:	e1a05000 	mov	r5, r0
        1ae170:	ea000002 	b	1ae180 <TROMDomainManager1K::DeleteObjectInfo(PackageChunk *, long)+0x58>
        1ae174:	e3a01001 	mov	r1, #1	; 0x1
        1ae178:	eb657930 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1ae17c:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae180:	e1a0000d 	mov	r0, sp
        1ae184:	e5942014 	ldr	r2, [r4, #20]
        1ae188:	e28f1f0f 	add	r1, pc, #60	; 0x3c
        1ae18c:	eb681e40 	bl	1bb5a94 <$sprintf>
        1ae190:	e1a0100d 	mov	r1, sp
        1ae194:	e28f0f0f 	add	r0, pc, #60	; 0x3c
        1ae198:	e3a02000 	mov	r2, #0	; 0x0
        1ae19c:	eb688596 	bl	1bcf7fc <$ClassInfoByName__FPCcT1Ul>
        1ae1a0:	e1b01000 	movs	r1, r0
        1ae1a4:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        1ae1a8:	1b68bb17 	blne	1bdce0c <TProtocol::$SetType(TClassInfo const *)>
        1ae1ac:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1ae1b0:	eb076474 	bl	387388 <TStoreCompander::Delete(void)>
        1ae1b4:	e5940014 	ldr	r0, [r4, #20]
        1ae1b8:	eb687d48 	bl	1bcd6e0 <$__dl(void *)>
        1ae1bc:	e2840034 	add	r0, r4, #52	; 0x34
        1ae1c0:	eb65a260 	bl	1b16b48 <LOTransactionHandler::$Free(void)>
        1ae1c4:	e1a00005 	mov	r0, r5
        1ae1c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1ae1cc:	2573436c 	ldrcsb	r4, [r3, -#876]!
        1ae1d0:	65616e75 	strvsb	r6, [r1, -#3701]!
        1ae1d4:	70000000 	andvc	r0, r0, r0
        1ae1d8:	5453746f 	ldrplb	r7, [r3], -#1135
        1ae1dc:	7265436f 	rsbvc	r4, r5, #-1140850687	; 0xbc000001
        1ae1e0:	6d70616e 	ldfvse	f6, [r0, -#440]!
        1ae1e4:	64657200 	strvsbt	r7, [r5], -#512	; fField512
    */
}

/**
 * Symbol: TROMDomainManager1K::EndSession(long, unsigned char)
 * Address: 001ae1e8
 */
TROMDomainManager1K::EndSession(long, unsigned char) {
    /*
        1ae1e8:	e1a0c00d 	mov	ip, sp
        1ae1ec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1ae1f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ae1f4:	e1a04000 	mov	r4, r0
        1ae1f8:	e1a05001 	mov	r5, r1
        1ae1fc:	e20220ff 	and	r2, r2, #255	; 0xff
        1ae200:	e5901048 	ldr	r1, [r0, #72]	; fField72
        1ae204:	e5910010 	ldr	r0, [r1, #16]	; fField16
        1ae208:	e5911004 	ldr	r1, [r1, #4]	; fField4
        1ae20c:	e0260195 	mla	r6, r5, r1, r0
        1ae210:	e59400dc 	ldr	r0, [r4, #220]	; fField220
        1ae214:	e5961020 	ldr	r1, [r6, #32]	; fField32
        1ae218:	e1500001 	cmp	r0, r1
        1ae21c:	e1a01005 	mov	r1, r5
        1ae220:	e1a00004 	mov	r0, r4
        1ae224:	991b6870 	ldmlsdb	fp, {r4, r5, r6, fp, sp, lr}
        1ae228:	9a657d1c 	bls	1b0d6a0 <TROMDomainManager1K::$XIPEndSession(long)>
        1ae22c:	eb657901 	bl	1b0c638 <TROMDomainManager1K::$FlushCache(long, unsigned char)>
        1ae230:	e1a02000 	mov	r2, r0
        1ae234:	e1a01006 	mov	r1, r6
        1ae238:	e1a00004 	mov	r0, r4
        1ae23c:	eb658143 	bl	1b0e750 <TROMDomainManager1K::$DeleteObjectInfo(PackageChunk *, long)>
        1ae240:	e1a06000 	mov	r6, r0
        1ae244:	e1a01005 	mov	r1, r5
        1ae248:	e3a02001 	mov	r2, #1	; 0x1
        1ae24c:	e5b40048 	ldr	r0, [r4, #72]!	; fField72
        1ae250:	eb68f8f7 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        1ae254:	e3a00047 	mov	r0, #71	; 0x47
        1ae258:	eb07ffc5 	bl	3ae174 <GenericSWI>
        1ae25c:	e1a00006 	mov	r0, r6
        1ae260:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::FlushCache(long, unsigned char)
 * Address: 001ae264
 */
TROMDomainManager1K::FlushCache(long, unsigned char) {
    /*
        1ae264:	e1a0c00d 	mov	ip, sp
        1ae268:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1ae26c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ae270:	e1a04000 	mov	r4, r0
        1ae274:	e20250ff 	and	r5, r2, #255	; 0xff
        1ae278:	e5900048 	ldr	r0, [r0, #72]	; fField72
        1ae27c:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1ae280:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1ae284:	e0262091 	mla	r6, r1, r0, r2
        1ae288:	e5941040 	ldr	r1, [r4, #64]	; fField64
        1ae28c:	e5960020 	ldr	r0, [r6, #32]	; fField32
        1ae290:	e0402001 	sub	r2, r0, r1
        1ae294:	e1a0a522 	mov	sl, r2, lsr #10
        1ae298:	e5962024 	ldr	r2, [r6, #36]	; fField36
        1ae29c:	e2422001 	sub	r2, r2, #1	; 0x1
        1ae2a0:	e2822b01 	add	r2, r2, #1024	; 0x400
        1ae2a4:	e0800002 	add	r0, r0, r2
        1ae2a8:	e0400001 	sub	r0, r0, r1
        1ae2ac:	e1a09520 	mov	r9, r0, lsr #10
        1ae2b0:	e1a00004 	mov	r0, r4
        1ae2b4:	e3a01000 	mov	r1, #0	; 0x0
        1ae2b8:	eb65a21c 	bl	1b16b30 <TROMDomainManager1K::$DoAcquireDatabase(unsigned char)>
        1ae2bc:	e3350000 	teq	r5, #0	; 0x0
        1ae2c0:	15960000 	ldrne	r0, [r6]
        1ae2c4:	13300000 	teqne	r0, #0	; 0x0
        1ae2c8:	03a00000 	moveq	r0, #0	; 0x0
        1ae2cc:	13a00001 	movne	r0, #1	; 0x1
        1ae2d0:	e5c400da 	strb	r0, [r4, #218]	; fField218
        1ae2d4:	e3a05000 	mov	r5, #0	; 0x0
        1ae2d8:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1ae2dc:	e3500000 	cmp	r0, #0	; 0x0
        1ae2e0:	9a000042 	bls	1ae3f0 <TROMDomainManager1K::FlushCache(long, unsigned char)+0x18c>
        1ae2e4:	e3a02000 	mov	r2, #0	; 0x0
        1ae2e8:	e3a00000 	mov	r0, #0	; 0x0
        1ae2ec:	e3a0e801 	mov	lr, #65536	; 0x10000
        1ae2f0:	e24ee001 	sub	lr, lr, #1	; 0x1
        1ae2f4:	e594104c 	ldr	r1, [r4, #76]	; fField76
        1ae2f8:	e0811205 	add	r1, r1, r5, lsl #4
        1ae2fc:	e3a07001 	mov	r7, #1	; 0x1
        1ae300:	e0813080 	add	r3, r1, r0, lsl #1
        1ae304:	e5933004 	ldr	r3, [r3, #4]	; fField4
        1ae308:	e1a03823 	mov	r3, r3, lsr #16
        1ae30c:	e133000e 	teq	r3, lr
        1ae310:	0a000004 	beq	1ae328 <TROMDomainManager1K::FlushCache(long, unsigned char)+0xc4>
        1ae314:	e0803103 	add	r3, r0, r3, lsl #2
        1ae318:	e153000a 	cmp	r3, sl
        1ae31c:	3a000001 	bcc	1ae328 <TROMDomainManager1K::FlushCache(long, unsigned char)+0xc4>
        1ae320:	e1530009 	cmp	r3, r9
        1ae324:	31822017 	orrcc	r2, r2, r7, lsl r0
        1ae328:	e2800001 	add	r0, r0, #1	; 0x1
        1ae32c:	e3500004 	cmp	r0, #4	; 0x4
        1ae330:	bafffff2 	blt	1ae300 <TROMDomainManager1K::FlushCache(long, unsigned char)+0x9c>
        1ae334:	e3320000 	teq	r2, #0	; 0x0
        1ae338:	0a000028 	beq	1ae3e0 <TROMDomainManager1K::FlushCache(long, unsigned char)+0x17c>
        1ae33c:	e1a01005 	mov	r1, r5
        1ae340:	e1a00004 	mov	r0, r4
        1ae344:	eb652e55 	bl	1af9ca0 <TROMDomainManager1K::$FreeSubPages(long, long)>
        1ae348:	e594104c 	ldr	r1, [r4, #76]	; fField76
        1ae34c:	e0811205 	add	r1, r1, r5, lsl #4
        1ae350:	e1a00004 	mov	r0, r4
        1ae354:	eb653ee0 	bl	1afdedc <TROMDomainManager1K::$IsEmptyPage(PageTableChunk *)>
        1ae358:	e3300000 	teq	r0, #0	; 0x0
        1ae35c:	0a00001f 	beq	1ae3e0 <TROMDomainManager1K::FlushCache(long, unsigned char)+0x17c>
        1ae360:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ae364:	e594004c 	ldr	r0, [r4, #76]	; fField76
        1ae368:	e7900205 	ldr	r0, [r0, r5, lsl #4]	; fField4
        1ae36c:	e1a08005 	mov	r8, r5
        1ae370:	e3a07000 	mov	r7, #0	; 0x0
        1ae374:	e58d0000 	str	r0, [sp]
        1ae378:	e3300000 	teq	r0, #0	; 0x0
        1ae37c:	0a00000a 	beq	1ae3ac <TROMDomainManager1K::FlushCache(long, unsigned char)+0x148>
        1ae380:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ae384:	e3a01000 	mov	r1, #0	; 0x0
        1ae388:	e5cd1004 	strb	r1, [sp, #4]	; fField4
        1ae38c:	e58d0000 	str	r0, [sp]
        1ae390:	e200000f 	and	r0, r0, #15	; 0xf
        1ae394:	e330000c 	teq	r0, #12	; 0xc
        1ae398:	03a07001 	moveq	r7, #1	; 0x1
        1ae39c:	e1a0000d 	mov	r0, sp
        1ae3a0:	e3a01000 	mov	r1, #0	; 0x0
        1ae3a4:	eb6880de 	bl	1bce724 <TUObject::$__dt(void)>
        1ae3a8:	e28dd008 	add	sp, sp, #8	; 0x8
        1ae3ac:	e3370000 	teq	r7, #0	; 0x0
        1ae3b0:	05940060 	ldreq	r0, [r4, #96]	; fField96
        1ae3b4:	02400001 	subeq	r0, r0, #1	; 0x1
        1ae3b8:	05840060 	streq	r0, [r4, #96]	; fField96
        1ae3bc:	e594005c 	ldr	r0, [r4, #92]	; fField92
        1ae3c0:	e2400001 	sub	r0, r0, #1	; 0x1
        1ae3c4:	e1a01008 	mov	r1, r8
        1ae3c8:	e584005c 	str	r0, [r4, #92]	; fField92
        1ae3cc:	e1a00004 	mov	r0, r4
        1ae3d0:	eb651dab 	bl	1af5a84 <TROMDomainManager1K::$ClearTableEntry(long)>
        1ae3d4:	e59d0000 	ldr	r0, [sp]
        1ae3d8:	eb68ae2d 	bl	1bd9c94 <$Release__15TUDomainManagerSFUl>
        1ae3dc:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae3e0:	e2855001 	add	r5, r5, #1	; 0x1
        1ae3e4:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1ae3e8:	e1500005 	cmp	r0, r5
        1ae3ec:	8affffbc 	bhi	1ae2e4 <TROMDomainManager1K::FlushCache(long, unsigned char)+0x80>
        1ae3f0:	e3a00000 	mov	r0, #0	; 0x0
        1ae3f4:	e5965028 	ldr	r5, [r6, #40]
        1ae3f8:	e5c60030 	strb	r0, [r6, #48]	; fField48
        1ae3fc:	e3a00001 	mov	r0, #1	; 0x1
        1ae400:	e5c400da 	strb	r0, [r4, #218]	; fField218
        1ae404:	e2840004 	add	r0, r4, #4	; 0x4
        1ae408:	eb68ae22 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1ae40c:	e1a00005 	mov	r0, r5
        1ae410:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::EndSession(TStore *, unsigned long)
 * Address: 001ae414
 */
TROMDomainManager1K::EndSession(TStore *, unsigned long) {
    /*
        1ae414:	e1a0c00d 	mov	ip, sp
        1ae418:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ae41c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ae420:	e1a04000 	mov	r4, r0
        1ae424:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ae428:	e1a0300d 	mov	r3, sp
        1ae42c:	eb658d21 	bl	1b118b8 <TROMDomainManager1K::$ObjectToIndex(TStore *, unsigned long, long *)>
        1ae430:	e3300000 	teq	r0, #0	; 0x0
        1ae434:	1a000003 	bne	1ae448 <TROMDomainManager1K::EndSession(TStore *, unsigned long)+0x34>
        1ae438:	e1a00004 	mov	r0, r4
        1ae43c:	e3a02001 	mov	r2, #1	; 0x1
        1ae440:	e59d1000 	ldr	r1, [sp]
        1ae444:	eb65787a 	bl	1b0c634 <TROMDomainManager1K::$EndSession(long, unsigned char)>
        1ae448:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::FlushCache(TStore *, unsigned long)
 * Address: 001ae44c
 */
TROMDomainManager1K::FlushCache(TStore *, unsigned long) {
    /*
        1ae44c:	e1a0c00d 	mov	ip, sp
        1ae450:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ae454:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ae458:	e1a04000 	mov	r4, r0
        1ae45c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ae460:	e1a0300d 	mov	r3, sp
        1ae464:	eb658d13 	bl	1b118b8 <TROMDomainManager1K::$ObjectToIndex(TStore *, unsigned long, long *)>
        1ae468:	e3300000 	teq	r0, #0	; 0x0
        1ae46c:	1a000004 	bne	1ae484 <TROMDomainManager1K::FlushCache(TStore *, unsigned long)+0x38>
        1ae470:	e1a00004 	mov	r0, r4
        1ae474:	e3a02001 	mov	r2, #1	; 0x1
        1ae478:	e59d1000 	ldr	r1, [sp]
        1ae47c:	eb65786d 	bl	1b0c638 <TROMDomainManager1K::$FlushCache(long, unsigned char)>
        1ae480:	ea000002 	b	1ae490 <TROMDomainManager1K::FlushCache(TStore *, unsigned long)+0x44>
        1ae484:	e280cda2 	add	ip, r0, #10368	; 0x2880
        1ae488:	e37c0028 	cmn	ip, #40	; 0x28
        1ae48c:	03a00000 	moveq	r0, #0	; 0x0
        1ae490:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::EndSession(unsigned long)
 * Address: 001ae494
 */
TROMDomainManager1K::EndSession(unsigned long) {
    /*
        1ae494:	e1a0c00d 	mov	ip, sp
        1ae498:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ae49c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ae4a0:	e1a04000 	mov	r4, r0
        1ae4a4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ae4a8:	e1a0200d 	mov	r2, sp
        1ae4ac:	eb654af7 	bl	1b01090 <TROMDomainManager1K::$PackageToIndex(unsigned long, long *)>
        1ae4b0:	e3300000 	teq	r0, #0	; 0x0
        1ae4b4:	1a000003 	bne	1ae4c8 <TROMDomainManager1K::EndSession(unsigned long)+0x34>
        1ae4b8:	e1a00004 	mov	r0, r4
        1ae4bc:	e3a02001 	mov	r2, #1	; 0x1
        1ae4c0:	e59d1000 	ldr	r1, [sp]
        1ae4c4:	eb65785a 	bl	1b0c634 <TROMDomainManager1K::$EndSession(long, unsigned char)>
        1ae4c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::FlushCache(unsigned long)
 * Address: 001ae4cc
 */
TROMDomainManager1K::FlushCache(unsigned long) {
    /*
        1ae4cc:	e1a0c00d 	mov	ip, sp
        1ae4d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ae4d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ae4d8:	e1a04000 	mov	r4, r0
        1ae4dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ae4e0:	e1a0200d 	mov	r2, sp
        1ae4e4:	eb654ae9 	bl	1b01090 <TROMDomainManager1K::$PackageToIndex(unsigned long, long *)>
        1ae4e8:	e3300000 	teq	r0, #0	; 0x0
        1ae4ec:	1a000003 	bne	1ae500 <TROMDomainManager1K::FlushCache(unsigned long)+0x34>
        1ae4f0:	e1a00004 	mov	r0, r4
        1ae4f4:	e3a02001 	mov	r2, #1	; 0x1
        1ae4f8:	e59d1000 	ldr	r1, [sp]
        1ae4fc:	eb65784d 	bl	1b0c638 <TROMDomainManager1K::$FlushCache(long, unsigned char)>
        1ae500:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::FlushCacheByBase(unsigned long)
 * Address: 001ae504
 */
TROMDomainManager1K::FlushCacheByBase(unsigned long) {
    /*
        1ae504:	e1a0c00d 	mov	ip, sp
        1ae508:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ae50c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ae510:	e1a04000 	mov	r4, r0
        1ae514:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ae518:	e1a0200d 	mov	r2, sp
        1ae51c:	eb658ce6 	bl	1b118bc <TROMDomainManager1K::$ObjectToIndex(unsigned long, long *)>
        1ae520:	e3300000 	teq	r0, #0	; 0x0
        1ae524:	1a000003 	bne	1ae538 <TROMDomainManager1K::FlushCacheByBase(unsigned long)+0x34>
        1ae528:	e1a00004 	mov	r0, r4
        1ae52c:	e3a02001 	mov	r2, #1	; 0x1
        1ae530:	e59d1000 	ldr	r1, [sp]
        1ae534:	eb65783f 	bl	1b0c638 <TROMDomainManager1K::$FlushCache(long, unsigned char)>
        1ae538:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::InsertPages(PackageChunk *, long, long)
 * Address: 001ae53c
 */
TROMDomainManager1K::InsertPages(PackageChunk *, long, long) {
    /*
        1ae53c:	e1a0c00d 	mov	ip, sp
        1ae540:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1ae544:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ae548:	e1a04001 	mov	r4, r1
        1ae54c:	e1a05002 	mov	r5, r2
        1ae550:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ae554:	e3330000 	teq	r3, #0	; 0x0
        1ae558:	03a00000 	moveq	r0, #0	; 0x0
        1ae55c:	0a000053 	beq	1ae6b0 <TROMDomainManager1K::InsertPages(PackageChunk *, long, long)+0x174>
        1ae560:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1ae564:	e2408001 	sub	r8, r0, #1	; 0x1
        1ae568:	e2988b01 	adds	r8, r8, #1024	; 0x400
        1ae56c:	42488001 	submi	r8, r8, #1	; 0x1
        1ae570:	42888b01 	addmi	r8, r8, #1024	; 0x400
        1ae574:	e1a08548 	mov	r8, r8, asr #10
        1ae578:	e0880003 	add	r0, r8, r3
        1ae57c:	e1550008 	cmp	r5, r8
        1ae580:	c3a000ea 	movgt	r0, #234	; 0xea
        1ae584:	c2400b0a 	subgt	r0, r0, #10240	; 0x2800
        1ae588:	ca000048 	bgt	1ae6b0 <TROMDomainManager1K::InsertPages(PackageChunk *, long, long)+0x174>
        1ae58c:	e0859003 	add	r9, r5, r3
        1ae590:	e1a00100 	mov	r0, r0, lsl #2
        1ae594:	e594a000 	ldr	sl, [r4]
        1ae598:	e58d0000 	str	r0, [sp]
        1ae59c:	eb688065 	bl	1bce738 <$__nw(unsigned int)>
        1ae5a0:	e1a07000 	mov	r7, r0
        1ae5a4:	eb68cedd 	bl	1be2120 <$MemError>
        1ae5a8:	e1b06000 	movs	r6, r0
        1ae5ac:	1a00003b 	bne	1ae6a0 <TROMDomainManager1K::InsertPages(PackageChunk *, long, long)+0x164>
        1ae5b0:	e1a03108 	mov	r3, r8, lsl #2
        1ae5b4:	e92d0008 	stmdb	sp!, {r3}
        1ae5b8:	e1a03007 	mov	r3, r7
        1ae5bc:	e1a0000a 	mov	r0, sl
        1ae5c0:	e3a02000 	mov	r2, #0	; 0x0
        1ae5c4:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1ae5c8:	eb654edc 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1ae5cc:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae5d0:	e1b06000 	movs	r6, r0
        1ae5d4:	1a000031 	bne	1ae6a0 <TROMDomainManager1K::InsertPages(PackageChunk *, long, long)+0x164>
        1ae5d8:	e1350008 	teq	r5, r8
        1ae5dc:	0a000004 	beq	1ae5f4 <TROMDomainManager1K::InsertPages(PackageChunk *, long, long)+0xb8>
        1ae5e0:	e0480005 	sub	r0, r8, r5
        1ae5e4:	e1a02100 	mov	r2, r0, lsl #2
        1ae5e8:	e0871109 	add	r1, r7, r9, lsl #2
        1ae5ec:	e0870105 	add	r0, r7, r5, lsl #2
        1ae5f0:	eb68c257 	bl	1bdef54 <$BlockMove>
        1ae5f4:	e1550009 	cmp	r5, r9
        1ae5f8:	aa000018 	bge	1ae660 <TROMDomainManager1K::InsertPages(PackageChunk *, long, long)+0x124>
        1ae5fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ae600:	e1a0200d 	mov	r2, sp
        1ae604:	e1a0000a 	mov	r0, sl
        1ae608:	e3a01000 	mov	r1, #0	; 0x0
        1ae60c:	eb076166 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        1ae610:	e1b06000 	movs	r6, r0
        1ae614:	1a000009 	bne	1ae640 <TROMDomainManager1K::InsertPages(PackageChunk *, long, long)+0x104>
        1ae618:	e3a03001 	mov	r3, #1	; 0x1
        1ae61c:	e92d0008 	stmdb	sp!, {r3}
        1ae620:	e1a02004 	mov	r2, r4
        1ae624:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        1ae628:	e3a01000 	mov	r1, #0	; 0x0
        1ae62c:	e51b0038 	ldr	r0, [fp, -#56]
        1ae630:	eb657802 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1ae634:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae638:	e1b06000 	movs	r6, r0
        1ae63c:	0a000001 	beq	1ae648 <TROMDomainManager1K::InsertPages(PackageChunk *, long, long)+0x10c>
        1ae640:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae644:	ea000015 	b	1ae6a0 <TROMDomainManager1K::InsertPages(PackageChunk *, long, long)+0x164>
        1ae648:	e59d0000 	ldr	r0, [sp]
        1ae64c:	e7870105 	str	r0, [r7, r5, lsl #2]
        1ae650:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae654:	e2855001 	add	r5, r5, #1	; 0x1
        1ae658:	e1550009 	cmp	r5, r9
        1ae65c:	baffffe6 	blt	1ae5fc <TROMDomainManager1K::InsertPages(PackageChunk *, long, long)+0xc0>
        1ae660:	e3a03002 	mov	r3, #2	; 0x2
        1ae664:	e92d0008 	stmdb	sp!, {r3}
        1ae668:	e5943008 	ldr	r3, [r4, #8]	; fField8
        1ae66c:	e1a02004 	mov	r2, r4
        1ae670:	e3a01000 	mov	r1, #0	; 0x0
        1ae674:	e51b0038 	ldr	r0, [fp, -#56]
        1ae678:	eb6577f0 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1ae67c:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae680:	e1b06000 	movs	r6, r0
        1ae684:	1a000005 	bne	1ae6a0 <TROMDomainManager1K::InsertPages(PackageChunk *, long, long)+0x164>
        1ae688:	e59d3000 	ldr	r3, [sp]
        1ae68c:	e1a02007 	mov	r2, r7
        1ae690:	e1a0000a 	mov	r0, sl
        1ae694:	e5b41008 	ldr	r1, [r4, #8]!	; fField8
        1ae698:	eb07615e 	bl	386c18 <TStore::ReplaceObject(unsigned long, char *, long)>
        1ae69c:	e1a06000 	mov	r6, r0
        1ae6a0:	e3370000 	teq	r7, #0	; 0x0
        1ae6a4:	11a00007 	movne	r0, r7
        1ae6a8:	1b687c0c 	blne	1bcd6e0 <$__dl(void *)>
        1ae6ac:	e1a00006 	mov	r0, r6
        1ae6b0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::RemovePages(PackageChunk *, long, long)
 * Address: 001ae6b4
 */
TROMDomainManager1K::RemovePages(PackageChunk *, long, long) {
    /*
        1ae6b4:	e3330000 	teq	r3, #0	; 0x0
        1ae6b8:	03a00000 	moveq	r0, #0	; 0x0
        1ae6bc:	01a0f00e 	moveq	pc, lr
        1ae6c0:	e1a0c00d 	mov	ip, sp
        1ae6c4:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1ae6c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ae6cc:	e1a04001 	mov	r4, r1
        1ae6d0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ae6d4:	e5910024 	ldr	r0, [r1, #36]	; fField36
        1ae6d8:	e2400001 	sub	r0, r0, #1	; 0x1
        1ae6dc:	e2900b01 	adds	r0, r0, #1024	; 0x400
        1ae6e0:	42400001 	submi	r0, r0, #1	; 0x1
        1ae6e4:	42800b01 	addmi	r0, r0, #1024	; 0x400
        1ae6e8:	e1a00540 	mov	r0, r0, asr #10
        1ae6ec:	e58d0004 	str	r0, [sp, #4]	; fField4
        1ae6f0:	e0500003 	subs	r0, r0, r3
        1ae6f4:	e58d0000 	str	r0, [sp]
        1ae6f8:	e51b2030 	ldr	r2, [fp, -#48]	; fField48
        1ae6fc:	e0827003 	add	r7, r2, r3
        1ae700:	4a000002 	bmi	1ae710 <TROMDomainManager1K::RemovePages(PackageChunk *, long, long)+0x5c>
        1ae704:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1ae708:	e1570000 	cmp	r7, r0
        1ae70c:	da000002 	ble	1ae71c <TROMDomainManager1K::RemovePages(PackageChunk *, long, long)+0x68>
        1ae710:	e3a000ea 	mov	r0, #234	; 0xea
        1ae714:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        1ae718:	ea00004d 	b	1ae854 <TROMDomainManager1K::RemovePages(PackageChunk *, long, long)+0x1a0>
        1ae71c:	e5948000 	ldr	r8, [r4]
        1ae720:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1ae724:	e1a00100 	mov	r0, r0, lsl #2
        1ae728:	e1a09000 	mov	r9, r0
        1ae72c:	eb688001 	bl	1bce738 <$__nw(unsigned int)>
        1ae730:	e1a06000 	mov	r6, r0
        1ae734:	eb68ce79 	bl	1be2120 <$MemError>
        1ae738:	e1b05000 	movs	r5, r0
        1ae73c:	1a000040 	bne	1ae844 <TROMDomainManager1K::RemovePages(PackageChunk *, long, long)+0x190>
        1ae740:	e1a03009 	mov	r3, r9
        1ae744:	e92d0008 	stmdb	sp!, {r3}
        1ae748:	e1a03006 	mov	r3, r6
        1ae74c:	e1a00008 	mov	r0, r8
        1ae750:	e3a02000 	mov	r2, #0	; 0x0
        1ae754:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1ae758:	eb654e78 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1ae75c:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae760:	e1b05000 	movs	r5, r0
        1ae764:	1a000036 	bne	1ae844 <TROMDomainManager1K::RemovePages(PackageChunk *, long, long)+0x190>
        1ae768:	e51b9030 	ldr	r9, [fp, -#48]	; fField48
        1ae76c:	e1590007 	cmp	r9, r7
        1ae770:	aa000012 	bge	1ae7c0 <TROMDomainManager1K::RemovePages(PackageChunk *, long, long)+0x10c>
        1ae774:	e796a109 	ldr	sl, [r6, r9, lsl #2]
        1ae778:	e3a03003 	mov	r3, #3	; 0x3
        1ae77c:	e92d0008 	stmdb	sp!, {r3}
        1ae780:	e1a0300a 	mov	r3, sl
        1ae784:	e1a02004 	mov	r2, r4
        1ae788:	e3a01000 	mov	r1, #0	; 0x0
        1ae78c:	e51b0038 	ldr	r0, [fp, -#56]
        1ae790:	eb6577aa 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1ae794:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae798:	e1b05000 	movs	r5, r0
        1ae79c:	1a000028 	bne	1ae844 <TROMDomainManager1K::RemovePages(PackageChunk *, long, long)+0x190>
        1ae7a0:	e1a0100a 	mov	r1, sl
        1ae7a4:	e1a00008 	mov	r0, r8
        1ae7a8:	eb6520e2 	bl	1af6b38 <TStore::$DeleteObject(unsigned long)>
        1ae7ac:	e1b05000 	movs	r5, r0
        1ae7b0:	1a000023 	bne	1ae844 <TROMDomainManager1K::RemovePages(PackageChunk *, long, long)+0x190>
        1ae7b4:	e2899001 	add	r9, r9, #1	; 0x1
        1ae7b8:	e1590007 	cmp	r9, r7
        1ae7bc:	baffffec 	blt	1ae774 <TROMDomainManager1K::RemovePages(PackageChunk *, long, long)+0xc0>
        1ae7c0:	e3a03002 	mov	r3, #2	; 0x2
        1ae7c4:	e92d0008 	stmdb	sp!, {r3}
        1ae7c8:	e5943008 	ldr	r3, [r4, #8]	; fField8
        1ae7cc:	e1a02004 	mov	r2, r4
        1ae7d0:	e3a01000 	mov	r1, #0	; 0x0
        1ae7d4:	e51b0038 	ldr	r0, [fp, -#56]
        1ae7d8:	eb657798 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1ae7dc:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae7e0:	e1b05000 	movs	r5, r0
        1ae7e4:	1a000016 	bne	1ae844 <TROMDomainManager1K::RemovePages(PackageChunk *, long, long)+0x190>
        1ae7e8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1ae7ec:	e1370000 	teq	r7, r0
        1ae7f0:	0a00000d 	beq	1ae82c <TROMDomainManager1K::RemovePages(PackageChunk *, long, long)+0x178>
        1ae7f4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1ae7f8:	e0400007 	sub	r0, r0, r7
        1ae7fc:	e1a02100 	mov	r2, r0, lsl #2
        1ae800:	e51b9030 	ldr	r9, [fp, -#48]	; fField48
        1ae804:	e0861109 	add	r1, r6, r9, lsl #2
        1ae808:	e0860107 	add	r0, r6, r7, lsl #2
        1ae80c:	eb68c1d0 	bl	1bdef54 <$BlockMove>
        1ae810:	e59d0000 	ldr	r0, [sp]
        1ae814:	e1a03100 	mov	r3, r0, lsl #2
        1ae818:	e1a02006 	mov	r2, r6
        1ae81c:	e1a00008 	mov	r0, r8
        1ae820:	e5b41008 	ldr	r1, [r4, #8]!	; fField8
        1ae824:	eb0760fb 	bl	386c18 <TStore::ReplaceObject(unsigned long, char *, long)>
        1ae828:	ea000004 	b	1ae840 <TROMDomainManager1K::RemovePages(PackageChunk *, long, long)+0x18c>
        1ae82c:	e59d0000 	ldr	r0, [sp]
        1ae830:	e1a02100 	mov	r2, r0, lsl #2
        1ae834:	e1a00008 	mov	r0, r8
        1ae838:	e5b41008 	ldr	r1, [r4, #8]!	; fField8
        1ae83c:	eb655eb7 	bl	1b06320 <TStore::$SetObjectSize(unsigned long, long)>
        1ae840:	e1a05000 	mov	r5, r0
        1ae844:	e3360000 	teq	r6, #0	; 0x0
        1ae848:	11a00006 	movne	r0, r6
        1ae84c:	1b687ba3 	blne	1bcd6e0 <$__dl(void *)>
        1ae850:	e1a00005 	mov	r0, r5
        1ae854:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::MungeObject(PackageChunk *, long, long)
 * Address: 001ae858
 */
TROMDomainManager1K::MungeObject(PackageChunk *, long, long) {
    /*
        1ae858:	e1a0c00d 	mov	ip, sp
        1ae85c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ae860:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ae864:	e1a05000 	mov	r5, r0
        1ae868:	e1a04001 	mov	r4, r1
        1ae86c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ae870:	e5910024 	ldr	r0, [r1, #36]	; fField36
        1ae874:	e0800003 	add	r0, r0, r3
        1ae878:	e1b01002 	movs	r1, r2
        1ae87c:	e58d0000 	str	r0, [sp]
        1ae880:	42611000 	rsbmi	r1, r1, #0	; 0x0
        1ae884:	e1a01b01 	mov	r1, r1, lsl #22
        1ae888:	e1a01b21 	mov	r1, r1, lsr #22
        1ae88c:	42611000 	rsbmi	r1, r1, #0	; 0x0
        1ae890:	e3310000 	teq	r1, #0	; 0x0
        1ae894:	1a00000f 	bne	1ae8d8 <TROMDomainManager1K::MungeObject(PackageChunk *, long, long)+0x80>
        1ae898:	e1b01003 	movs	r1, r3
        1ae89c:	42611000 	rsbmi	r1, r1, #0	; 0x0
        1ae8a0:	e1a01b01 	mov	r1, r1, lsl #22
        1ae8a4:	e1a01b21 	mov	r1, r1, lsr #22
        1ae8a8:	42611000 	rsbmi	r1, r1, #0	; 0x0
        1ae8ac:	e3310000 	teq	r1, #0	; 0x0
        1ae8b0:	1a000008 	bne	1ae8d8 <TROMDomainManager1K::MungeObject(PackageChunk *, long, long)+0x80>
        1ae8b4:	e3530000 	cmp	r3, #0	; 0x0
        1ae8b8:	b2433001 	sublt	r3, r3, #1	; 0x1
        1ae8bc:	b2833b01 	addlt	r3, r3, #1024	; 0x400
        1ae8c0:	e1a03543 	mov	r3, r3, asr #10
        1ae8c4:	e3520000 	cmp	r2, #0	; 0x0
        1ae8c8:	b2422001 	sublt	r2, r2, #1	; 0x1
        1ae8cc:	b2822b01 	addlt	r2, r2, #1024	; 0x400
        1ae8d0:	e1a02542 	mov	r2, r2, asr #10
        1ae8d4:	ea000017 	b	1ae938 <TROMDomainManager1K::MungeObject(PackageChunk *, long, long)+0xe0>
        1ae8d8:	e5941024 	ldr	r1, [r4, #36]	; fField36
        1ae8dc:	e241e001 	sub	lr, r1, #1	; 0x1
        1ae8e0:	e29eeb01 	adds	lr, lr, #1024	; 0x400
        1ae8e4:	424ee001 	submi	lr, lr, #1	; 0x1
        1ae8e8:	428eeb01 	addmi	lr, lr, #1024	; 0x400
        1ae8ec:	e1a0e54e 	mov	lr, lr, asr #10
        1ae8f0:	e240c001 	sub	ip, r0, #1	; 0x1
        1ae8f4:	e29ccb01 	adds	ip, ip, #1024	; 0x400
        1ae8f8:	424cc001 	submi	ip, ip, #1	; 0x1
        1ae8fc:	428ccb01 	addmi	ip, ip, #1024	; 0x400
        1ae900:	e1a0c54c 	mov	ip, ip, asr #10
        1ae904:	e3e0003c 	mvn	r0, #60	; 0x3c
        1ae908:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        1ae90c:	e3530000 	cmp	r3, #0	; 0x0
        1ae910:	ba000003 	blt	1ae924 <TROMDomainManager1K::MungeObject(PackageChunk *, long, long)+0xcc>
        1ae914:	e1310002 	teq	r1, r2
        1ae918:	01a0200e 	moveq	r2, lr
        1ae91c:	0a000004 	beq	1ae934 <TROMDomainManager1K::MungeObject(PackageChunk *, long, long)+0xdc>
        1ae920:	ea000022 	b	1ae9b0 <TROMDomainManager1K::MungeObject(PackageChunk *, long, long)+0x158>
        1ae924:	e0422003 	sub	r2, r2, r3
        1ae928:	e1320001 	teq	r2, r1
        1ae92c:	1a00001f 	bne	1ae9b0 <TROMDomainManager1K::MungeObject(PackageChunk *, long, long)+0x158>
        1ae930:	e1a0200c 	mov	r2, ip
        1ae934:	e04c300e 	sub	r3, ip, lr
        1ae938:	e3530000 	cmp	r3, #0	; 0x0
        1ae93c:	0a00000a 	beq	1ae96c <TROMDomainManager1K::MungeObject(PackageChunk *, long, long)+0x114>
        1ae940:	da000003 	ble	1ae954 <TROMDomainManager1K::MungeObject(PackageChunk *, long, long)+0xfc>
        1ae944:	e1a01004 	mov	r1, r4
        1ae948:	e1a00005 	mov	r0, r5
        1ae94c:	eb65a078 	bl	1b16b34 <TROMDomainManager1K::$InsertPages(PackageChunk *, long, long)>
        1ae950:	ea000003 	b	1ae964 <TROMDomainManager1K::MungeObject(PackageChunk *, long, long)+0x10c>
        1ae954:	e2633000 	rsb	r3, r3, #0	; 0x0
        1ae958:	e1a01004 	mov	r1, r4
        1ae95c:	e1a00005 	mov	r0, r5
        1ae960:	eb65a074 	bl	1b16b38 <TROMDomainManager1K::$RemovePages(PackageChunk *, long, long)>
        1ae964:	e3300000 	teq	r0, #0	; 0x0
        1ae968:	1a000010 	bne	1ae9b0 <TROMDomainManager1K::MungeObject(PackageChunk *, long, long)+0x158>
        1ae96c:	e3a03002 	mov	r3, #2	; 0x2
        1ae970:	e92d0008 	stmdb	sp!, {r3}
        1ae974:	e5943004 	ldr	r3, [r4, #4]	; fField4
        1ae978:	e1a02004 	mov	r2, r4
        1ae97c:	e1a00005 	mov	r0, r5
        1ae980:	e3a01000 	mov	r1, #0	; 0x0
        1ae984:	eb65772d 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1ae988:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae98c:	e3300000 	teq	r0, #0	; 0x0
        1ae990:	1a000006 	bne	1ae9b0 <TROMDomainManager1K::MungeObject(PackageChunk *, long, long)+0x158>
        1ae994:	e3a03004 	mov	r3, #4	; 0x4
        1ae998:	e92d0008 	stmdb	sp!, {r3}
        1ae99c:	e08d3003 	add	r3, sp, r3
        1ae9a0:	e3a02014 	mov	r2, #20	; 0x14
        1ae9a4:	e8940003 	ldmia	r4, {r0, r1}
        1ae9a8:	eb656ed4 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        1ae9ac:	e28dd004 	add	sp, sp, #4	; 0x4
        1ae9b0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)
 * Address: 001ae9b4
 */
TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long) {
    /*
        1ae9b4:	e1a0c00d 	mov	ip, sp
        1ae9b8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1ae9bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ae9c0:	e1a04000 	mov	r4, r0
        1ae9c4:	e1a06001 	mov	r6, r1
        1ae9c8:	e1a01002 	mov	r1, r2
        1ae9cc:	e1a05003 	mov	r5, r3
        1ae9d0:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        1ae9d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ae9d8:	e3a07000 	mov	r7, #0	; 0x0
        1ae9dc:	e1a0200d 	mov	r2, sp
        1ae9e0:	e5867000 	str	r7, [r6]
        1ae9e4:	eb658bb4 	bl	1b118bc <TROMDomainManager1K::$ObjectToIndex(unsigned long, long *)>
        1ae9e8:	e3300000 	teq	r0, #0	; 0x0
        1ae9ec:	1a000013 	bne	1aea40 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x8c>
        1ae9f0:	e3550000 	cmp	r5, #0	; 0x0
        1ae9f4:	b3a000ea 	movlt	r0, #234	; 0xea
        1ae9f8:	b2400b0a 	sublt	r0, r0, #10240	; 0x2800
        1ae9fc:	ba00000f 	blt	1aea40 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x8c>
        1aea00:	e5940048 	ldr	r0, [r4, #72]	; fField72
        1aea04:	e59d1000 	ldr	r1, [sp]
        1aea08:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1aea0c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1aea10:	e0292091 	mla	r9, r1, r0, r2
        1aea14:	e599000c 	ldr	r0, [r9, #12]	; fField12
        1aea18:	eb076270 	bl	3873e0 <TStoreCompander::IsReadOnly(void)>
        1aea1c:	e3300000 	teq	r0, #0	; 0x0
        1aea20:	159f001c 	ldrne	r0, [pc, #1c]	; 1aea44 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x90>
        1aea24:	1a000005 	bne	1aea40 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x8c>
        1aea28:	e1a00004 	mov	r0, r4
        1aea2c:	e3a02001 	mov	r2, #1	; 0x1
        1aea30:	e59d1000 	ldr	r1, [sp]
        1aea34:	eb6576ff 	bl	1b0c638 <TROMDomainManager1K::$FlushCache(long, unsigned char)>
        1aea38:	e3300000 	teq	r0, #0	; 0x0
        1aea3c:	0a000001 	beq	1aea48 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x94>
        1aea40:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1aea44:	ffffd8af 	swinv	0x00ffd8af
        1aea48:	e289903c 	add	r9, r9, #60	; 0x3c
        1aea4c:	e939500e 	ldmdb	r9!, {r1, r2, r3, ip, lr}
        1aea50:	e92d500e 	stmdb	sp!, {r1, r2, r3, ip, lr}
        1aea54:	e939500e 	ldmdb	r9!, {r1, r2, r3, ip, lr}
        1aea58:	e92d500e 	stmdb	sp!, {r1, r2, r3, ip, lr}
        1aea5c:	e939500e 	ldmdb	r9!, {r1, r2, r3, ip, lr}
        1aea60:	e92d500e 	stmdb	sp!, {r1, r2, r3, ip, lr}
        1aea64:	e5940048 	ldr	r0, [r4, #72]	; fField72
        1aea68:	e3a02001 	mov	r2, #1	; 0x1
        1aea6c:	e59d103c 	ldr	r1, [sp, #60]
        1aea70:	eb68f6ef 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        1aea74:	e59d1014 	ldr	r1, [sp, #20]
        1aea78:	e28f0f1a 	add	r0, pc, #104	; 0x68
        1aea7c:	e3a02000 	mov	r2, #0	; 0x0
        1aea80:	eb68835d 	bl	1bcf7fc <$ClassInfoByName__FPCcT1Ul>
        1aea84:	e3300000 	teq	r0, #0	; 0x0
        1aea88:	0a00001a 	beq	1aeaf8 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x144>
        1aea8c:	e3580000 	cmp	r8, #0	; 0x0
        1aea90:	a3e0803c 	mvnge	r8, #60	; 0x3c
        1aea94:	a2488b0a 	subge	r8, r8, #10240	; 0x2800
        1aea98:	aa000037 	bge	1aeb7c <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x1c8>
        1aea9c:	e59d2014 	ldr	r2, [sp, #20]
        1aeaa0:	e28f0f10 	add	r0, pc, #64	; 0x40
        1aeaa4:	e3a01000 	mov	r1, #0	; 0x0
        1aeaa8:	eb68a436 	bl	1bd7b88 <$NewByName__FPCcN21>
        1aeaac:	e1b07000 	movs	r7, r0
        1aeab0:	03a080e9 	moveq	r8, #233	; 0xe9
        1aeab4:	02488b0a 	subeq	r8, r8, #10240	; 0x2800
        1aeab8:	0a00002f 	beq	1aeb7c <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x1c8>
        1aeabc:	e1a00007 	mov	r0, r7
        1aeac0:	eb65834a 	bl	1b0f7f0 <TLrgObjStore::$Init(void)>
        1aeac4:	e1b08000 	movs	r8, r0
        1aeac8:	1a000026 	bne	1aeb68 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x1b4>
        1aeacc:	e1a03005 	mov	r3, r5
        1aead0:	e1a00007 	mov	r0, r7
        1aead4:	e89d0006 	ldmia	sp, {r1, r2}
        1aead8:	eb658b80 	bl	1b118e0 <TLrgObjStore::$Resize(TStore *, unsigned long, unsigned long)>
        1aeadc:	e1b08000 	movs	r8, r0
        1aeae0:	1a000020 	bne	1aeb68 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x1b4>
        1aeae4:	ea000011 	b	1aeb30 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x17c>
        1aeae8:	544c7267 	strplb	r7, [ip], -#615
        1aeaec:	4f626a53 	swimi	0x00626a53
        1aeaf0:	746f7265 	strvcbt	r7, [pc], #265	; 1aeaf8 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x144>
        1aeaf4:	00000000 	andeq	r0, r0, r0
        1aeaf8:	e3580000 	cmp	r8, #0	; 0x0
        1aeafc:	aa000003 	bge	1aeb10 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x15c>
        1aeb00:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        1aeb04:	e1500005 	cmp	r0, r5
        1aeb08:	a1a08005 	movge	r8, r5
        1aeb0c:	b59d8024 	ldrlt	r8, [sp, #36]	; fField36
        1aeb10:	e59d0024 	ldr	r0, [sp, #36]	; fField36
        1aeb14:	e0453000 	sub	r3, r5, r0
        1aeb18:	e1a02008 	mov	r2, r8
        1aeb1c:	e1a0100d 	mov	r1, sp
        1aeb20:	e1a00004 	mov	r0, r4
        1aeb24:	eb65a004 	bl	1b16b3c <TROMDomainManager1K::$MungeObject(PackageChunk *, long, long)>
        1aeb28:	e1b08000 	movs	r8, r0
        1aeb2c:	1a000010 	bne	1aeb74 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x1c0>
        1aeb30:	e58d5024 	str	r5, [sp, #36]	; fField36
        1aeb34:	e28d203c 	add	r2, sp, #60	; 0x3c
        1aeb38:	e1a0100d 	mov	r1, sp
        1aeb3c:	e1a00004 	mov	r0, r4
        1aeb40:	eb6576c1 	bl	1b0c64c <TROMDomainManager1K::$AllocatePackageEntry(PackageChunk *, long *)>
        1aeb44:	e1b08000 	movs	r8, r0
        1aeb48:	1a000006 	bne	1aeb68 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x1b4>
        1aeb4c:	e5940048 	ldr	r0, [r4, #72]	; fField72
        1aeb50:	e59d103c 	ldr	r1, [sp, #60]
        1aeb54:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1aeb58:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1aeb5c:	e0202091 	mla	r0, r1, r0, r2
        1aeb60:	e5900020 	ldr	r0, [r0, #32]	; fField32
        1aeb64:	e5860000 	str	r0, [r6]
        1aeb68:	e3370000 	teq	r7, #0	; 0x0
        1aeb6c:	11a00007 	movne	r0, r7
        1aeb70:	1b657ef9 	blne	1b0e75c <TLrgObjStore::$Delete(void)>
        1aeb74:	e3380000 	teq	r8, #0	; 0x0
        1aeb78:	0a00000a 	beq	1aeba8 <TROMDomainManager1K::ResizeObject(unsigned long *, unsigned long, long, long)+0x1f4>
        1aeb7c:	e3a03000 	mov	r3, #0	; 0x0
        1aeb80:	e92d0008 	stmdb	sp!, {r3}
        1aeb84:	e28d2004 	add	r2, sp, #4	; 0x4
        1aeb88:	e1a00004 	mov	r0, r4
        1aeb8c:	e3a01001 	mov	r1, #1	; 0x1
        1aeb90:	eb6576aa 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1aeb94:	e28dd004 	add	sp, sp, #4	; 0x4
        1aeb98:	e1a02008 	mov	r2, r8
        1aeb9c:	e1a0100d 	mov	r1, sp
        1aeba0:	e1a00004 	mov	r0, r4
        1aeba4:	eb657ee9 	bl	1b0e750 <TROMDomainManager1K::$DeleteObjectInfo(PackageChunk *, long)>
        1aeba8:	e1a00008 	mov	r0, r8
        1aebac:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)
 * Address: 001aebb0
 */
TROMDomainManager1K::DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int) {
    /*
        1aebb0:	e1a0c00d 	mov	ip, sp
        1aebb4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1aebb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aebbc:	e1a05001 	mov	r5, r1
        1aebc0:	e1a04002 	mov	r4, r2
        1aebc4:	e1a06003 	mov	r6, r3
        1aebc8:	e59b7004 	ldr	r7, [fp, #4]	; fField4
        1aebcc:	e592000c 	ldr	r0, [r2, #12]	; fField12
        1aebd0:	e3a02000 	mov	r2, #0	; 0x0
        1aebd4:	eb0761fe 	bl	3873d4 <TStoreCompander::DoTransactionAgainst(long, unsigned long)>
        1aebd8:	e3300000 	teq	r0, #0	; 0x0
        1aebdc:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1aebe0:	e2840034 	add	r0, r4, #52	; 0x34
        1aebe4:	e3350000 	teq	r5, #0	; 0x0
        1aebe8:	1a000004 	bne	1aec00 <TROMDomainManager1K::DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)+0x50>
        1aebec:	e1a03007 	mov	r3, r7
        1aebf0:	e1a01006 	mov	r1, r6
        1aebf4:	e5942000 	ldr	r2, [r4]
        1aebf8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1aebfc:	ea659fd2 	b	1b16b4c <LOTransactionHandler::$AddObjectToTransaction(unsigned long, TStore *, int)>
        1aec00:	e5943008 	ldr	r3, [r4, #8]	; fField8
        1aec04:	e92d0008 	stmdb	sp!, {r3}
        1aec08:	e3350002 	teq	r5, #2	; 0x2
        1aec0c:	e5943004 	ldr	r3, [r4, #4]	; fField4
        1aec10:	13a01000 	movne	r1, #0	; 0x0
        1aec14:	03a01001 	moveq	r1, #1	; 0x1
        1aec18:	e5942000 	ldr	r2, [r4]
        1aec1c:	eb659fcd 	bl	1b16b58 <LOTransactionHandler::$EndTransaction(unsigned char, TStore *, unsigned long, unsigned long)>
        1aec20:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::ObjectToIndex(TStore *, unsigned long, long *)
 * Address: 001aec24
 */
TROMDomainManager1K::ObjectToIndex(TStore *, unsigned long, long *) {
    /*
        1aec24:	e1a0c00d 	mov	ip, sp
        1aec28:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1aec2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aec30:	e1a04000 	mov	r4, r0
        1aec34:	e1a07001 	mov	r7, r1
        1aec38:	e1a06002 	mov	r6, r2
        1aec3c:	e1a05003 	mov	r5, r3
        1aec40:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1aec44:	e5901048 	ldr	r1, [r0, #72]	; fField72
        1aec48:	e1a0000d 	mov	r0, sp
        1aec4c:	eb68d168 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        1aec50:	e3e090a7 	mvn	r9, #167	; 0xa7
        1aec54:	e2499b0a 	sub	r9, r9, #10240	; 0x2800
        1aec58:	e1a0000d 	mov	r0, sp
        1aec5c:	eb68e1e4 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        1aec60:	e1a08000 	mov	r8, r0
        1aec64:	e1a0000d 	mov	r0, sp
        1aec68:	eb68ee42 	bl	1bea578 <CArrayIterator::$More(void)>
        1aec6c:	e3300000 	teq	r0, #0	; 0x0
        1aec70:	0a000010 	beq	1aecb8 <TROMDomainManager1K::ObjectToIndex(TStore *, unsigned long, long *)+0x94>
        1aec74:	e5941048 	ldr	r1, [r4, #72]	; fField72
        1aec78:	e5910010 	ldr	r0, [r1, #16]	; fField16
        1aec7c:	e5911004 	ldr	r1, [r1, #4]	; fField4
        1aec80:	e0200198 	mla	r0, r8, r1, r0
        1aec84:	e5901000 	ldr	r1, [r0]
        1aec88:	e1310007 	teq	r1, r7
        1aec8c:	05900004 	ldreq	r0, [r0, #4]	; fField4
        1aec90:	01300006 	teqeq	r0, r6
        1aec94:	03a09000 	moveq	r9, #0	; 0x0
        1aec98:	05858000 	streq	r8, [r5]
        1aec9c:	e1a0000d 	mov	r0, sp
        1aeca0:	eb68f23d 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        1aeca4:	e1a08000 	mov	r8, r0
        1aeca8:	e1a0000d 	mov	r0, sp
        1aecac:	eb68ee31 	bl	1bea578 <CArrayIterator::$More(void)>
        1aecb0:	e3300000 	teq	r0, #0	; 0x0
        1aecb4:	1affffee 	bne	1aec74 <TROMDomainManager1K::ObjectToIndex(TStore *, unsigned long, long *)+0x50>
        1aecb8:	e1a0000d 	mov	r0, sp
        1aecbc:	e3a01000 	mov	r1, #0	; 0x0
        1aecc0:	eb68d568 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1aecc4:	e1a00009 	mov	r0, r9
        1aecc8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::PackageToIndex(unsigned long, long *)
 * Address: 001aeccc
 */
TROMDomainManager1K::PackageToIndex(unsigned long, long *) {
    /*
        1aeccc:	e1a0c00d 	mov	ip, sp
        1aecd0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1aecd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aecd8:	e1a04000 	mov	r4, r0
        1aecdc:	e1a06001 	mov	r6, r1
        1aece0:	e1a05002 	mov	r5, r2
        1aece4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1aece8:	e5901048 	ldr	r1, [r0, #72]	; fField72
        1aecec:	e1a0000d 	mov	r0, sp
        1aecf0:	eb68d13f 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        1aecf4:	e3e080a7 	mvn	r8, #167	; 0xa7
        1aecf8:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        1aecfc:	e1a0000d 	mov	r0, sp
        1aed00:	eb68e1bb 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        1aed04:	e1a07000 	mov	r7, r0
        1aed08:	e1a0000d 	mov	r0, sp
        1aed0c:	eb68ee19 	bl	1bea578 <CArrayIterator::$More(void)>
        1aed10:	e3300000 	teq	r0, #0	; 0x0
        1aed14:	0a00000e 	beq	1aed54 <TROMDomainManager1K::PackageToIndex(unsigned long, long *)+0x88>
        1aed18:	e5941048 	ldr	r1, [r4, #72]	; fField72
        1aed1c:	e5910010 	ldr	r0, [r1, #16]	; fField16
        1aed20:	e5911004 	ldr	r1, [r1, #4]	; fField4
        1aed24:	e0200197 	mla	r0, r7, r1, r0
        1aed28:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1aed2c:	e1300006 	teq	r0, r6
        1aed30:	03a08000 	moveq	r8, #0	; 0x0
        1aed34:	05857000 	streq	r7, [r5]
        1aed38:	e1a0000d 	mov	r0, sp
        1aed3c:	eb68f216 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        1aed40:	e1a07000 	mov	r7, r0
        1aed44:	e1a0000d 	mov	r0, sp
        1aed48:	eb68ee0a 	bl	1bea578 <CArrayIterator::$More(void)>
        1aed4c:	e3300000 	teq	r0, #0	; 0x0
        1aed50:	1afffff0 	bne	1aed18 <TROMDomainManager1K::PackageToIndex(unsigned long, long *)+0x4c>
        1aed54:	e1a0000d 	mov	r0, sp
        1aed58:	e3a01000 	mov	r1, #0	; 0x0
        1aed5c:	eb68d541 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1aed60:	e1a00008 	mov	r0, r8
        1aed64:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::ObjectToIndex(unsigned long, long *)
 * Address: 001aed68
 */
TROMDomainManager1K::ObjectToIndex(unsigned long, long *) {
    /*
        1aed68:	e1a0c00d 	mov	ip, sp
        1aed6c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1aed70:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aed74:	e1a04000 	mov	r4, r0
        1aed78:	e1a06001 	mov	r6, r1
        1aed7c:	e1a05002 	mov	r5, r2
        1aed80:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1aed84:	e5901048 	ldr	r1, [r0, #72]	; fField72
        1aed88:	e1a0000d 	mov	r0, sp
        1aed8c:	eb68d118 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        1aed90:	e3e080a7 	mvn	r8, #167	; 0xa7
        1aed94:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        1aed98:	e1a0000d 	mov	r0, sp
        1aed9c:	eb68e194 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        1aeda0:	e1a07000 	mov	r7, r0
        1aeda4:	e1a0000d 	mov	r0, sp
        1aeda8:	eb68edf2 	bl	1bea578 <CArrayIterator::$More(void)>
        1aedac:	e3300000 	teq	r0, #0	; 0x0
        1aedb0:	0a00000e 	beq	1aedf0 <TROMDomainManager1K::ObjectToIndex(unsigned long, long *)+0x88>
        1aedb4:	e5941048 	ldr	r1, [r4, #72]	; fField72
        1aedb8:	e5910010 	ldr	r0, [r1, #16]	; fField16
        1aedbc:	e5911004 	ldr	r1, [r1, #4]	; fField4
        1aedc0:	e0200197 	mla	r0, r7, r1, r0
        1aedc4:	e5900020 	ldr	r0, [r0, #32]	; fField32
        1aedc8:	e1300006 	teq	r0, r6
        1aedcc:	03a08000 	moveq	r8, #0	; 0x0
        1aedd0:	05857000 	streq	r7, [r5]
        1aedd4:	e1a0000d 	mov	r0, sp
        1aedd8:	eb68f1ef 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        1aeddc:	e1a07000 	mov	r7, r0
        1aede0:	e1a0000d 	mov	r0, sp
        1aede4:	eb68ede3 	bl	1bea578 <CArrayIterator::$More(void)>
        1aede8:	e3300000 	teq	r0, #0	; 0x0
        1aedec:	1afffff0 	bne	1aedb4 <TROMDomainManager1K::ObjectToIndex(unsigned long, long *)+0x4c>
        1aedf0:	e1a0000d 	mov	r0, sp
        1aedf4:	e3a01000 	mov	r1, #0	; 0x0
        1aedf8:	eb68d51a 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1aedfc:	e1a00008 	mov	r0, r8
        1aee00:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::SetPackageId(TStore *, unsigned long, unsigned long)
 * Address: 001aee04
 */
TROMDomainManager1K::SetPackageId(TStore *, unsigned long, unsigned long) {
    /*
        1aee04:	e1a0c00d 	mov	ip, sp
        1aee08:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1aee0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aee10:	e1a04000 	mov	r4, r0
        1aee14:	e1a05003 	mov	r5, r3
        1aee18:	e24dd004 	sub	sp, sp, #4	; 0x4
        1aee1c:	e1a0300d 	mov	r3, sp
        1aee20:	eb658aa4 	bl	1b118b8 <TROMDomainManager1K::$ObjectToIndex(TStore *, unsigned long, long *)>
        1aee24:	e3300000 	teq	r0, #0	; 0x0
        1aee28:	1a000005 	bne	1aee44 <TROMDomainManager1K::SetPackageId(TStore *, unsigned long, unsigned long)+0x40>
        1aee2c:	e5b41048 	ldr	r1, [r4, #72]!	; fField72
        1aee30:	e59d2000 	ldr	r2, [sp]
        1aee34:	e5913010 	ldr	r3, [r1, #16]	; fField16
        1aee38:	e5911004 	ldr	r1, [r1, #4]	; fField4
        1aee3c:	e0213192 	mla	r1, r2, r1, r3
        1aee40:	e5a1501c 	str	r5, [r1, #28]!	; fField28
        1aee44:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::ClearTableEntry(long)
 * Address: 001aee48
 */
TROMDomainManager1K::ClearTableEntry(long) {
    /*
        1aee48:	e590204c 	ldr	r2, [r0, #76]	; fField76
        1aee4c:	e3320000 	teq	r2, #0	; 0x0
        1aee50:	01a0f00e 	moveq	pc, lr
        1aee54:	e3a03801 	mov	r3, #65536	; 0x10000
        1aee58:	e2433001 	sub	r3, r3, #1	; 0x1
        1aee5c:	e082c201 	add	ip, r2, r1, lsl #4
        1aee60:	e5cc3005 	strb	r3, [ip, #5]
        1aee64:	e3a020ff 	mov	r2, #255	; 0xff
        1aee68:	e5cc2004 	strb	r2, [ip, #4]	; fField4
        1aee6c:	e590c04c 	ldr	ip, [r0, #76]	; fField76
        1aee70:	e08cc201 	add	ip, ip, r1, lsl #4
        1aee74:	e5cc3007 	strb	r3, [ip, #7]
        1aee78:	e5cc2006 	strb	r2, [ip, #6]
        1aee7c:	e590c04c 	ldr	ip, [r0, #76]	; fField76
        1aee80:	e08cc201 	add	ip, ip, r1, lsl #4
        1aee84:	e5cc3009 	strb	r3, [ip, #9]
        1aee88:	e5cc2008 	strb	r2, [ip, #8]	; fField8
        1aee8c:	e590c04c 	ldr	ip, [r0, #76]	; fField76
        1aee90:	e08cc201 	add	ip, ip, r1, lsl #4
        1aee94:	e5cc300b 	strb	r3, [ip, #11]
        1aee98:	e5cc200a 	strb	r2, [ip, #10]
        1aee9c:	e3a02000 	mov	r2, #0	; 0x0
        1aeea0:	e590304c 	ldr	r3, [r0, #76]	; fField76
        1aeea4:	e7832201 	str	r2, [r3, r1, lsl #4]	; fField4
        1aeea8:	e590304c 	ldr	r3, [r0, #76]	; fField76
        1aeeac:	e0833201 	add	r3, r3, r1, lsl #4
        1aeeb0:	e5c3200c 	strb	r2, [r3, #12]	; fField12
        1aeeb4:	e590304c 	ldr	r3, [r0, #76]	; fField76
        1aeeb8:	e0833201 	add	r3, r3, r1, lsl #4
        1aeebc:	e5c3200d 	strb	r2, [r3, #13]
        1aeec0:	e590304c 	ldr	r3, [r0, #76]	; fField76
        1aeec4:	e0833201 	add	r3, r3, r1, lsl #4
        1aeec8:	e5c3200e 	strb	r2, [r3, #14]
        1aeecc:	e590004c 	ldr	r0, [r0, #76]	; fField76
        1aeed0:	e0800201 	add	r0, r0, r1, lsl #4
        1aeed4:	e5c0200f 	strb	r2, [r0, #15]	; fField15
        1aeed8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TROMDomainManager1K::Fault(TProcessorState &)
 * Address: 001aeedc
 */
TROMDomainManager1K::Fault(TProcessorState &) {
    /*
        1aeedc:	e1a0c00d 	mov	ip, sp
        1aeee0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1aeee4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1aeee8:	e1a04000 	mov	r4, r0
        1aeeec:	e1a05001 	mov	r5, r1
        1aeef0:	e5918044 	ldr	r8, [r1, #68]	; fField68
        1aeef4:	e59000dc 	ldr	r0, [r0, #220]	; fField220
        1aeef8:	e1500008 	cmp	r0, r8
        1aeefc:	2a000003 	bcs	1aef10 <TROMDomainManager1K::Fault(TProcessorState &)+0x34>
        1aef00:	e1a01005 	mov	r1, r5
        1aef04:	e1a00004 	mov	r0, r4
        1aef08:	eb6579e5 	bl	1b0d6a4 <TROMDomainManager1K::$XIPFault(TProcessorState &)>
        1aef0c:	ea000041 	b	1af018 <TROMDomainManager1K::Fault(TProcessorState &)+0x13c>
        1aef10:	e59f0048 	ldr	r0, [pc, #48]	; 1aef60 <TROMDomainManager1K::Fault(TProcessorState &)+0x84>	; fField48
        1aef14:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1aef18:	e2811001 	add	r1, r1, #1	; 0x1
        1aef1c:	e5a01004 	str	r1, [r0, #4]!	; fField4
        1aef20:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1aef24:	e0480000 	sub	r0, r8, r0
        1aef28:	e5941044 	ldr	r1, [r4, #68]	; fField68
        1aef2c:	e59f9030 	ldr	r9, [pc, #30]	; 1aef64 <TROMDomainManager1K::Fault(TProcessorState &)+0x88>
        1aef30:	e59f6030 	ldr	r6, [pc, #30]	; 1aef68 <TROMDomainManager1K::Fault(TProcessorState &)+0x8c>
        1aef34:	e1510000 	cmp	r1, r0
        1aef38:	3a000001 	bcc	1aef44 <TROMDomainManager1K::Fault(TProcessorState &)+0x68>
        1aef3c:	e3500000 	cmp	r0, #0	; 0x0
        1aef40:	aa000009 	bge	1aef6c <TROMDomainManager1K::Fault(TProcessorState &)+0x90>
        1aef44:	e3a02000 	mov	r2, #0	; 0x0
        1aef48:	e1a01006 	mov	r1, r6
        1aef4c:	e5990000 	ldr	r0, [r9]
        1aef50:	eb68d091 	bl	1be319c <$Throw>
        1aef54:	e3a000e9 	mov	r0, #233	; 0xe9
        1aef58:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        1aef5c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1aef60:	0c101918 	ldceq	9, cr1, [r0], -#96	; fField96
        1aef64:	003712c4 	eoreqs	r1, r7, r4, asr #5
        1aef68:	ffffd8b3 	swinv	0x00ffd8b3
        1aef6c:	e1a01008 	mov	r1, r8
        1aef70:	e1a00004 	mov	r0, r4
        1aef74:	eb658212 	bl	1b0f7c4 <TROMDomainManager1K::$GetObjectPtr(unsigned long)>
        1aef78:	e1b07000 	movs	r7, r0
        1aef7c:	1a000003 	bne	1aef90 <TROMDomainManager1K::Fault(TProcessorState &)+0xb4>
        1aef80:	e3a02000 	mov	r2, #0	; 0x0
        1aef84:	e1a01006 	mov	r1, r6
        1aef88:	e5990000 	ldr	r0, [r9]
        1aef8c:	eb68d082 	bl	1be319c <$Throw>
        1aef90:	e5b50048 	ldr	r0, [r5, #72]!	; fField72
        1aef94:	e200000f 	and	r0, r0, #15	; 0xf
        1aef98:	e330000d 	teq	r0, #13	; 0xd
        1aef9c:	1330000f 	teqne	r0, #15	; 0xf
        1aefa0:	03a00001 	moveq	r0, #1	; 0x1
        1aefa4:	13a00000 	movne	r0, #0	; 0x0
        1aefa8:	e5c400d8 	strb	r0, [r4, #216]	; fField216
        1aefac:	e597000c 	ldr	r0, [r7, #12]	; fField12
        1aefb0:	eb07610a 	bl	3873e0 <TStoreCompander::IsReadOnly(void)>
        1aefb4:	e3300000 	teq	r0, #0	; 0x0
        1aefb8:	13a00000 	movne	r0, #0	; 0x0
        1aefbc:	03a00001 	moveq	r0, #1	; 0x1
        1aefc0:	e5c400d9 	strb	r0, [r4, #217]	; fField217
        1aefc4:	e59f5054 	ldr	r5, [pc, #54]	; 1af020 <TROMDomainManager1K::Fault(TProcessorState &)+0x144>
        1aefc8:	e5d56000 	ldrb	r6, [r5]
        1aefcc:	e1a00548 	mov	r0, r8, asr #10
        1aefd0:	e1a01500 	mov	r1, r0, lsl #10
        1aefd4:	e1a02007 	mov	r2, r7
        1aefd8:	e1a00004 	mov	r0, r4
        1aefdc:	eb657dda 	bl	1b0e74c <TROMDomainManager1K::$DecompressAndMap(unsigned long, PackageChunk *)>
        1aefe0:	e5d50000 	ldrb	r0, [r5]
        1aefe4:	e3300000 	teq	r0, #0	; 0x0
        1aefe8:	0a000008 	beq	1af010 <TROMDomainManager1K::Fault(TProcessorState &)+0x134>
        1aefec:	e3360000 	teq	r6, #0	; 0x0
        1aeff0:	1a000006 	bne	1af010 <TROMDomainManager1K::Fault(TProcessorState &)+0x134>
        1aeff4:	e5970000 	ldr	r0, [r7]
        1aeff8:	e5850004 	str	r0, [r5, #4]	; fField4
        1aeffc:	e5970004 	ldr	r0, [r7, #4]	; fField4
        1af000:	e5850008 	str	r0, [r5, #8]	; fField8
        1af004:	e5b70020 	ldr	r0, [r7, #32]!	; fField32
        1af008:	e0480000 	sub	r0, r8, r0
        1af00c:	e5a5000c 	str	r0, [r5, #12]!	; fField12
        1af010:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1af014:	eb07fce0 	bl	3ae39c <MonitorFlushSWI>
        1af018:	e3a00000 	mov	r0, #0	; 0x0
        1af01c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1af020:	0c106820 	ldceq	8, cr6, [r0], -#128
    */
}

/**
 * Symbol: TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)
 * Address: 001af024
 */
TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *) {
    /*
        1af024:	e1a0c00d 	mov	ip, sp
        1af028:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1af02c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1af030:	e1a04000 	mov	r4, r0
        1af034:	e1a05001 	mov	r5, r1
        1af038:	e1a07002 	mov	r7, r2
        1af03c:	e3a00000 	mov	r0, #0	; 0x0
        1af040:	e52d0008 	str	r0, [sp, -#8]!	; fField8
        1af044:	e3a00003 	mov	r0, #3	; 0x3
        1af048:	e0008521 	and	r8, r0, r1, lsr #10
        1af04c:	e1a03002 	mov	r3, r2
        1af050:	e28d2004 	add	r2, sp, #4	; 0x4
        1af054:	e1a00004 	mov	r0, r4
        1af058:	eb6581df 	bl	1b0f7dc <TROMDomainManager1K::$GetSubPage(unsigned long, long *, PackageChunk *)>
        1af05c:	e58d0000 	str	r0, [sp]
        1af060:	e1b01000 	movs	r1, r0
        1af064:	e59f60a4 	ldr	r6, [pc, #a4]	; 1af110 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0xec>
        1af068:	13a02000 	movne	r2, #0	; 0x0
        1af06c:	15960000 	ldrne	r0, [r6]
        1af070:	1b68d049 	blne	1be319c <$Throw>
        1af074:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1af078:	e33100ff 	teq	r1, #255	; 0xff
        1af07c:	0a000087 	beq	1af2a0 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0x27c>
        1af080:	e594004c 	ldr	r0, [r4, #76]	; fField76
        1af084:	e790a201 	ldr	sl, [r0, r1, lsl #4]	; fField4
        1af088:	e3a03001 	mov	r3, #1	; 0x1
        1af08c:	e92d0008 	stmdb	sp!, {r3}
        1af090:	e1a02008 	mov	r2, r8
        1af094:	e1a00004 	mov	r0, r4
        1af098:	eb6585f7 	bl	1b1087c <TROMDomainManager1K::$MakePermissions(long, long, unsigned char)>
        1af09c:	e1a02000 	mov	r2, r0
        1af0a0:	e1a0300a 	mov	r3, sl
        1af0a4:	e1a01005 	mov	r1, r5
        1af0a8:	e1a00004 	mov	r0, r4
        1af0ac:	eb68aafe 	bl	1bd9cac <TUDomainManager::$Remember(unsigned long, unsigned long, unsigned long, unsigned char)>
        1af0b0:	e5ad0004 	str	r0, [sp, #4]!	; fField4
        1af0b4:	e3300000 	teq	r0, #0	; 0x0
        1af0b8:	1a000059 	bne	1af224 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0x200>
        1af0bc:	e3a00000 	mov	r0, #0	; 0x0
        1af0c0:	e3a01000 	mov	r1, #0	; 0x0
        1af0c4:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1af0c8:	e52d106c 	str	r1, [sp, -#108]!	; fField108
        1af0cc:	e28d0008 	add	r0, sp, #8	; 0x8
        1af0d0:	eb680e27 	bl	1bb2974 <$setjmp>
        1af0d4:	e3300000 	teq	r0, #0	; 0x0
        1af0d8:	1a00000d 	bne	1af114 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0xf0>
        1af0dc:	e1a0000d 	mov	r0, sp
        1af0e0:	eb68c3e5 	bl	1be007c <$AddExceptionHandler>
        1af0e4:	e5970020 	ldr	r0, [r7, #32]	; fField32
        1af0e8:	e1a03000 	mov	r3, r0
        1af0ec:	e92d0008 	stmdb	sp!, {r3}
        1af0f0:	e0451000 	sub	r1, r5, r0
        1af0f4:	e1a02005 	mov	r2, r5
        1af0f8:	e3a03b01 	mov	r3, #1024	; 0x400
        1af0fc:	e5b7000c 	ldr	r0, [r7, #12]!	; fField12
        1af100:	eb0760ad 	bl	3873bc <TStoreCompander::Read(unsigned long, char *, long, unsigned long)>
        1af104:	e28dd004 	add	sp, sp, #4	; 0x4
        1af108:	e58d0070 	str	r0, [sp, #112]	; fField112
        1af10c:	ea00000f 	b	1af150 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0x12c>
        1af110:	003712b4 	ldreqh	r1, [r7], -r4
        1af114:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        1af118:	e59f1024 	ldr	r1, [pc, #24]	; 1af144 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0x120>
        1af11c:	e5911000 	ldr	r1, [r1]
        1af120:	eb68d01b 	bl	1be3194 <$Subexception>
        1af124:	e3300000 	teq	r0, #0	; 0x0
        1af128:	0a000006 	beq	1af148 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0x124>
        1af12c:	e3a000b5 	mov	r0, #181	; 0xb5
        1af130:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        1af134:	e58d0070 	str	r0, [sp, #112]	; fField112
        1af138:	e59d0064 	ldr	r0, [sp, #100]	; fField100
        1af13c:	e58d006c 	str	r0, [sp, #108]	; fField108
        1af140:	ea000002 	b	1af150 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0x12c>
        1af144:	003712b8 	ldreqh	r1, [r7], -r8
        1af148:	e1a0000d 	mov	r0, sp
        1af14c:	eb68cc00 	bl	1be2154 <$NextHandler>
        1af150:	e1a0000d 	mov	r0, sp
        1af154:	eb68c7d7 	bl	1be10b8 <$ExitHandler>
        1af158:	e28dd06c 	add	sp, sp, #108	; 0x6c
        1af15c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1af160:	e3300000 	teq	r0, #0	; 0x0
        1af164:	0a00002d 	beq	1af220 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0x1fc>
        1af168:	e59d0000 	ldr	r0, [sp]
        1af16c:	e1500005 	cmp	r0, r5
        1af170:	3a000022 	bcc	1af200 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0x1dc>
        1af174:	e2851b01 	add	r1, r5, #1024	; 0x400
        1af178:	e1510000 	cmp	r1, r0
        1af17c:	9a00001f 	bls	1af200 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0x1dc>
        1af180:	e1a00004 	mov	r0, r4
        1af184:	e3a0200f 	mov	r2, #15	; 0xf
        1af188:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1af18c:	eb652ac3 	bl	1af9ca0 <TROMDomainManager1K::$FreeSubPages(long, long)>
        1af190:	e59d9008 	ldr	r9, [sp, #8]	; fField8
        1af194:	e594004c 	ldr	r0, [r4, #76]	; fField76
        1af198:	e7900209 	ldr	r0, [r0, r9, lsl #4]	; fField4
        1af19c:	e3a07000 	mov	r7, #0	; 0x0
        1af1a0:	e3300000 	teq	r0, #0	; 0x0
        1af1a4:	0a00000a 	beq	1af1d4 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0x1b0>
        1af1a8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1af1ac:	e3a01000 	mov	r1, #0	; 0x0
        1af1b0:	e5cd1004 	strb	r1, [sp, #4]	; fField4
        1af1b4:	e58d0000 	str	r0, [sp]
        1af1b8:	e200000f 	and	r0, r0, #15	; 0xf
        1af1bc:	e330000c 	teq	r0, #12	; 0xc
        1af1c0:	03a07001 	moveq	r7, #1	; 0x1
        1af1c4:	e1a0000d 	mov	r0, sp
        1af1c8:	e3a01000 	mov	r1, #0	; 0x0
        1af1cc:	eb687d54 	bl	1bce724 <TUObject::$__dt(void)>
        1af1d0:	e28dd008 	add	sp, sp, #8	; 0x8
        1af1d4:	e3370000 	teq	r7, #0	; 0x0
        1af1d8:	05940060 	ldreq	r0, [r4, #96]	; fField96
        1af1dc:	02400001 	subeq	r0, r0, #1	; 0x1
        1af1e0:	05840060 	streq	r0, [r4, #96]	; fField96
        1af1e4:	e594005c 	ldr	r0, [r4, #92]	; fField92
        1af1e8:	e2400001 	sub	r0, r0, #1	; 0x1
        1af1ec:	e1a01009 	mov	r1, r9
        1af1f0:	e584005c 	str	r0, [r4, #92]	; fField92
        1af1f4:	e1a00004 	mov	r0, r4
        1af1f8:	eb651a21 	bl	1af5a84 <TROMDomainManager1K::$ClearTableEntry(long)>
        1af1fc:	ea000007 	b	1af220 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0x1fc>
        1af200:	e1a00004 	mov	r0, r4
        1af204:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1af208:	eb654fe2 	bl	1b03198 <TROMDomainManager1K::$ReleasePageTableEntry(long)>
        1af20c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1af210:	e3310000 	teq	r1, #0	; 0x0
        1af214:	13a02000 	movne	r2, #0	; 0x0
        1af218:	15960000 	ldrne	r0, [r6]
        1af21c:	1b68cfde 	blne	1be319c <$Throw>
        1af220:	e28dd004 	add	sp, sp, #4	; 0x4
        1af224:	e59d0000 	ldr	r0, [sp]
        1af228:	e3300000 	teq	r0, #0	; 0x0
        1af22c:	1a000013 	bne	1af280 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0x25c>
        1af230:	e1a02008 	mov	r2, r8
        1af234:	e1a00004 	mov	r0, r4
        1af238:	e3a03000 	mov	r3, #0	; 0x0
        1af23c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1af240:	eb65858d 	bl	1b1087c <TROMDomainManager1K::$MakePermissions(long, long, unsigned char)>
        1af244:	e1a02000 	mov	r2, r0
        1af248:	e3a03001 	mov	r3, #1	; 0x1
        1af24c:	e92d0008 	stmdb	sp!, {r3}
        1af250:	e1a0300a 	mov	r3, sl
        1af254:	e1a01005 	mov	r1, r5
        1af258:	e1a00004 	mov	r0, r4
        1af25c:	eb68aa92 	bl	1bd9cac <TUDomainManager::$Remember(unsigned long, unsigned long, unsigned long, unsigned char)>
        1af260:	e5ad0004 	str	r0, [sp, #4]!	; fField4
        1af264:	e3300000 	teq	r0, #0	; 0x0
        1af268:	1a000004 	bne	1af280 <TROMDomainManager1K::DecompressAndMap(unsigned long, PackageChunk *)+0x25c>
        1af26c:	eb680dbe 	bl	1bb296c <$IsDebuggerPresent>
        1af270:	e3300000 	teq	r0, #0	; 0x0
        1af274:	11a00005 	movne	r0, r5
        1af278:	13a01b01 	movne	r1, #1024	; 0x400
        1af27c:	1bfcdd24 	blne	e6714 <InformDebuggerMemoryReloaded(void *, unsigned long)>
        1af280:	e1a00004 	mov	r0, r4
        1af284:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1af288:	eb654fc2 	bl	1b03198 <TROMDomainManager1K::$ReleasePageTableEntry(long)>
        1af28c:	e59d1000 	ldr	r1, [sp]
        1af290:	e3310000 	teq	r1, #0	; 0x0
        1af294:	13a02000 	movne	r2, #0	; 0x0
        1af298:	15960000 	ldrne	r0, [r6]
        1af29c:	1b68cfbe 	blne	1be319c <$Throw>
        1af2a0:	e3a00000 	mov	r0, #0	; 0x0
        1af2a4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::VAddrToPageIndex(unsigned long)
 * Address: 001af2a8
 */
TROMDomainManager1K::VAddrToPageIndex(unsigned long) {
    /*
        1af2a8:	e92d4010 	stmdb	sp!, {r4, lr}
        1af2ac:	e5902040 	ldr	r2, [r0, #64]	; fField64
        1af2b0:	e0411002 	sub	r1, r1, r2
        1af2b4:	e1a0e621 	mov	lr, r1, lsr #12
        1af2b8:	e3a01000 	mov	r1, #0	; 0x0
        1af2bc:	e590c064 	ldr	ip, [r0, #100]	; fField100
        1af2c0:	e35c0000 	cmp	ip, #0	; 0x0
        1af2c4:	9a00000e 	bls	1af304 <TROMDomainManager1K::VAddrToPageIndex(unsigned long)+0x5c>
        1af2c8:	e3a02000 	mov	r2, #0	; 0x0
        1af2cc:	e590304c 	ldr	r3, [r0, #76]	; fField76
        1af2d0:	e0833201 	add	r3, r3, r1, lsl #4
        1af2d4:	e0834082 	add	r4, r3, r2, lsl #1
        1af2d8:	e5944004 	ldr	r4, [r4, #4]	; fField4
        1af2dc:	e1a04824 	mov	r4, r4, lsr #16
        1af2e0:	e134000e 	teq	r4, lr
        1af2e4:	01a00001 	moveq	r0, r1
        1af2e8:	08bd8010 	ldmeqia	sp!, {r4, pc}
        1af2ec:	e2822001 	add	r2, r2, #1	; 0x1
        1af2f0:	e3520004 	cmp	r2, #4	; 0x4
        1af2f4:	3afffff6 	bcc	1af2d4 <TROMDomainManager1K::VAddrToPageIndex(unsigned long)+0x2c>
        1af2f8:	e2811001 	add	r1, r1, #1	; 0x1
        1af2fc:	e15c0001 	cmp	ip, r1
        1af300:	8afffff0 	bhi	1af2c8 <TROMDomainManager1K::VAddrToPageIndex(unsigned long)+0x20>
        1af304:	e3a000ff 	mov	r0, #255	; 0xff
        1af308:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::ReleasePageTableEntry(long)
 * Address: 001af30c
 */
TROMDomainManager1K::ReleasePageTableEntry(long) {
    /*
        1af30c:	e1a0c00d 	mov	ip, sp
        1af310:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1af314:	e24cb004 	sub	fp, ip, #4	; 0x4
        1af318:	e1a04000 	mov	r4, r0
        1af31c:	e1a05001 	mov	r5, r1
        1af320:	e3a01001 	mov	r1, #1	; 0x1
        1af324:	eb659e01 	bl	1b16b30 <TROMDomainManager1K::$DoAcquireDatabase(unsigned char)>
        1af328:	e1a01005 	mov	r1, r5
        1af32c:	e1a00004 	mov	r0, r4
        1af330:	eb656855 	bl	1b0948c <TROMDomainManager1K::$UnrestrictPage(long)>
        1af334:	e2840004 	add	r0, r4, #4	; 0x4
        1af338:	eb68aa56 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1af33c:	e3a00000 	mov	r0, #0	; 0x0
        1af340:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::OKIfDirty(unsigned long)
 * Address: 001af344
 */
TROMDomainManager1K::OKIfDirty(unsigned long) {
    /*
        1af344:	e1a02000 	mov	r2, r0
        1af348:	e5d030cd 	ldrb	r3, [r0, #205]	; fField205
        1af34c:	e3a00001 	mov	r0, #1	; 0x1
        1af350:	e3330000 	teq	r3, #0	; 0x0
        1af354:	01a0f00e 	moveq	pc, lr
        1af358:	e592204c 	ldr	r2, [r2, #76]	; fField76
        1af35c:	e0822201 	add	r2, r2, r1, lsl #4
        1af360:	e3a01000 	mov	r1, #0	; 0x0
        1af364:	e0823001 	add	r3, r2, r1
        1af368:	e5d3300c 	ldrb	r3, [r3, #12]	; fField12
        1af36c:	e3330000 	teq	r3, #0	; 0x0
        1af370:	13a00000 	movne	r0, #0	; 0x0
        1af374:	11a0f00e 	movne	pc, lr
        1af378:	e2811001 	add	r1, r1, #1	; 0x1
        1af37c:	e3510004 	cmp	r1, #4	; 0x4
        1af380:	bafffff7 	blt	1af364 <TROMDomainManager1K::OKIfDirty(unsigned long)+0x20>
        1af384:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TROMDomainManager1K::ValidPage(PageTableChunk *)
 * Address: 001af388
 */
TROMDomainManager1K::ValidPage(PageTableChunk *) {
    /*
        1af388:	e5910000 	ldr	r0, [r1]
        1af38c:	e1b00000 	movs	r0, r0
        1af390:	13a00001 	movne	r0, #1	; 0x1
        1af394:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TROMDomainManager1K::IsEmptyPage(PageTableChunk *)
 * Address: 001af398
 */
TROMDomainManager1K::IsEmptyPage(PageTableChunk *) {
    /*
        1af398:	e1a0c00d 	mov	ip, sp
        1af39c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1af3a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1af3a4:	e1a04001 	mov	r4, r1
        1af3a8:	eb656842 	bl	1b094b8 <TROMDomainManager1K::$ValidPage(PageTableChunk *)>
        1af3ac:	e1b01000 	movs	r1, r0
        1af3b0:	e3a00000 	mov	r0, #0	; 0x0
        1af3b4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1af3b8:	e3a01000 	mov	r1, #0	; 0x0
        1af3bc:	e3a02801 	mov	r2, #65536	; 0x10000
        1af3c0:	e2422001 	sub	r2, r2, #1	; 0x1
        1af3c4:	e0843081 	add	r3, r4, r1, lsl #1
        1af3c8:	e5933004 	ldr	r3, [r3, #4]	; fField4
        1af3cc:	e1320823 	teq	r2, r3, lsr #16
        1af3d0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1af3d4:	e2811001 	add	r1, r1, #1	; 0x1
        1af3d8:	e3510004 	cmp	r1, #4	; 0x4
        1af3dc:	bafffff8 	blt	1af3c4 <TROMDomainManager1K::IsEmptyPage(PageTableChunk *)+0x2c>
        1af3e0:	e3a00001 	mov	r0, #1	; 0x1
        1af3e4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::AddPageTableEntry(long, unsigned long)
 * Address: 001af3e8
 */
TROMDomainManager1K::AddPageTableEntry(long, unsigned long) {
    /*
        1af3e8:	e5903040 	ldr	r3, [r0, #64]	; fField64
        1af3ec:	e0423003 	sub	r3, r2, r3
        1af3f0:	e1a03623 	mov	r3, r3, lsr #12
        1af3f4:	e3a0c003 	mov	ip, #3	; 0x3
        1af3f8:	e00c2522 	and	r2, ip, r2, lsr #10
        1af3fc:	e590c04c 	ldr	ip, [r0, #76]	; fField76
        1af400:	e08c1201 	add	r1, ip, r1, lsl #4
        1af404:	e0811082 	add	r1, r1, r2, lsl #1
        1af408:	e5c13005 	strb	r3, [r1, #5]
        1af40c:	e1a02423 	mov	r2, r3, lsr #8
        1af410:	e5c12004 	strb	r2, [r1, #4]	; fField4
        1af414:	e5901058 	ldr	r1, [r0, #88]	; fField88
        1af418:	e2811001 	add	r1, r1, #1	; 0x1
        1af41c:	e5a01058 	str	r1, [r0, #88]!	; fField88
        1af420:	e3a00000 	mov	r0, #0	; 0x0
        1af424:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TROMDomainManager1K::AddPageTableEntry(long, unsigned short, long)
 * Address: 001af428
 */
TROMDomainManager1K::AddPageTableEntry(long, unsigned short, long) {
    /*
        1af428:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        1af42c:	e1a0c802 	mov	ip, r2, lsl #16
        1af430:	e1a0c82c 	mov	ip, ip, lsr #16
        1af434:	e3a02000 	mov	r2, #0	; 0x0
        1af438:	e1a0e44c 	mov	lr, ip, asr #8
        1af43c:	e2134003 	ands	r4, r3, #3	; 0x3
        1af440:	0a00000e 	beq	1af480 <TROMDomainManager1K::AddPageTableEntry(long, unsigned short, long)+0x58>
        1af444:	e590504c 	ldr	r5, [r0, #76]	; fField76
        1af448:	e0855201 	add	r5, r5, r1, lsl #4
        1af44c:	e0855082 	add	r5, r5, r2, lsl #1
        1af450:	e5c5c005 	strb	ip, [r5, #5]
        1af454:	e5c5e004 	strb	lr, [r5, #4]	; fField4
        1af458:	e3340003 	teq	r4, #3	; 0x3
        1af45c:	13a05000 	movne	r5, #0	; 0x0
        1af460:	03a05001 	moveq	r5, #1	; 0x1
        1af464:	e590404c 	ldr	r4, [r0, #76]	; fField76
        1af468:	e0844201 	add	r4, r4, r1, lsl #4
        1af46c:	e0844002 	add	r4, r4, r2
        1af470:	e5c4500c 	strb	r5, [r4, #12]	; fField12
        1af474:	e5904058 	ldr	r4, [r0, #88]	; fField88
        1af478:	e2844001 	add	r4, r4, #1	; 0x1
        1af47c:	e5804058 	str	r4, [r0, #88]	; fField88
        1af480:	e2822001 	add	r2, r2, #1	; 0x1
        1af484:	e1a03143 	mov	r3, r3, asr #2
        1af488:	e3520004 	cmp	r2, #4	; 0x4
        1af48c:	baffffea 	blt	1af43c <TROMDomainManager1K::AddPageTableEntry(long, unsigned short, long)+0x14>
        1af490:	e3a00000 	mov	r0, #0	; 0x0
        1af494:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::UserRequest(long, void *)
 * Address: 001af498
 */
TROMDomainManager1K::UserRequest(long, void *) {
    /*
        1af498:	e1a0c00d 	mov	ip, sp
        1af49c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1af4a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1af4a4:	e1a04000 	mov	r4, r0
        1af4a8:	e1a00001 	mov	r0, r1
        1af4ac:	e1a07002 	mov	r7, r2
        1af4b0:	e1a05002 	mov	r5, r2
        1af4b4:	e3a06000 	mov	r6, #0	; 0x0
        1af4b8:	e2821008 	add	r1, r2, #8	; 0x8
        1af4bc:	e3a08000 	mov	r8, #0	; 0x0
        1af4c0:	e3500012 	cmp	r0, #18	; 0x12
        1af4c4:	908ff100 	addls	pc, pc, r0, lsl #2
        1af4c8:	ea000014 	b	1af520 <TROMDomainManager1K::UserRequest(long, void *)+0x88>
        1af4cc:	ea000013 	b	1af520 <TROMDomainManager1K::UserRequest(long, void *)+0x88>
        1af4d0:	ea000014 	b	1af528 <TROMDomainManager1K::UserRequest(long, void *)+0x90>
        1af4d4:	ea000020 	b	1af55c <TROMDomainManager1K::UserRequest(long, void *)+0xc4>
        1af4d8:	ea000054 	b	1af630 <TROMDomainManager1K::UserRequest(long, void *)+0x198>
        1af4dc:	ea000060 	b	1af664 <TROMDomainManager1K::UserRequest(long, void *)+0x1cc>
        1af4e0:	ea000064 	b	1af678 <TROMDomainManager1K::UserRequest(long, void *)+0x1e0>
        1af4e4:	ea000074 	b	1af6bc <TROMDomainManager1K::UserRequest(long, void *)+0x224>
        1af4e8:	ea000082 	b	1af6f8 <TROMDomainManager1K::UserRequest(long, void *)+0x260>
        1af4ec:	ea00000b 	b	1af520 <TROMDomainManager1K::UserRequest(long, void *)+0x88>
        1af4f0:	ea000039 	b	1af5dc <TROMDomainManager1K::UserRequest(long, void *)+0x144>
        1af4f4:	ea00008e 	b	1af734 <TROMDomainManager1K::UserRequest(long, void *)+0x29c>
        1af4f8:	ea000096 	b	1af758 <TROMDomainManager1K::UserRequest(long, void *)+0x2c0>
        1af4fc:	ea0000e6 	b	1af89c <TROMDomainManager1K::UserRequest(long, void *)+0x404>
        1af500:	ea00014a 	b	1afa30 <TROMDomainManager1K::UserRequest(long, void *)+0x598>
        1af504:	ea00016c 	b	1afabc <TROMDomainManager1K::UserRequest(long, void *)+0x624>
        1af508:	ea00017c 	b	1afb00 <TROMDomainManager1K::UserRequest(long, void *)+0x668>
        1af50c:	ea00019b 	b	1afb80 <TROMDomainManager1K::UserRequest(long, void *)+0x6e8>
        1af510:	ea0001a8 	b	1afbb8 <TROMDomainManager1K::UserRequest(long, void *)+0x720>
        1af514:	e1a00004 	mov	r0, r4
        1af518:	e5951000 	ldr	r1, [r5]
        1af51c:	eb65785b 	bl	1b0d690 <TROMDomainManager1K::$XIPInvalidateStore(TStore *)>
        1af520:	e1a00006 	mov	r0, r6
        1af524:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1af528:	e1a03001 	mov	r3, r1
        1af52c:	e92d0008 	stmdb	sp!, {r3}
        1af530:	e5d53018 	ldrb	r3, [r5, #24]
        1af534:	e1a00004 	mov	r0, r4
        1af538:	e8950006 	ldmia	r5, {r1, r2}
        1af53c:	eb657443 	bl	1b0c650 <TROMDomainManager1K::$AddPackage(TStore *, unsigned long, unsigned char, unsigned long *)>
        1af540:	e28dd004 	add	sp, sp, #4	; 0x4
        1af544:	e1b06000 	movs	r6, r0
        1af548:	0afffff4 	beq	1af520 <TROMDomainManager1K::UserRequest(long, void *)+0x88>
        1af54c:	e1a00004 	mov	r0, r4
        1af550:	e8950006 	ldmia	r5, {r1, r2}
        1af554:	eb652196 	bl	1af7bb4 <TROMDomainManager1K::$EndSession(TStore *, unsigned long)>
        1af558:	eafffff0 	b	1af520 <TROMDomainManager1K::UserRequest(long, void *)+0x88>
        1af55c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1af560:	e595100c 	ldr	r1, [r5, #12]	; fField12
        1af564:	e3310000 	teq	r1, #0	; 0x0
        1af568:	0a000002 	beq	1af578 <TROMDomainManager1K::UserRequest(long, void *)+0xe0>
        1af56c:	e1a00004 	mov	r0, r4
        1af570:	eb652190 	bl	1af7bb8 <TROMDomainManager1K::$EndSession(unsigned long)>
        1af574:	ea00018c 	b	1afbac <TROMDomainManager1K::UserRequest(long, void *)+0x714>
        1af578:	e5951008 	ldr	r1, [r5, #8]	; fField8
        1af57c:	e3310000 	teq	r1, #0	; 0x0
        1af580:	0a000011 	beq	1af5cc <TROMDomainManager1K::UserRequest(long, void *)+0x134>
        1af584:	e1a0200d 	mov	r2, sp
        1af588:	e1a00004 	mov	r0, r4
        1af58c:	eb6588ca 	bl	1b118bc <TROMDomainManager1K::$ObjectToIndex(unsigned long, long *)>
        1af590:	e1b06000 	movs	r6, r0
        1af594:	1a000185 	bne	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af598:	e5940048 	ldr	r0, [r4, #72]	; fField72
        1af59c:	e59d1000 	ldr	r1, [sp]
        1af5a0:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1af5a4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1af5a8:	e0202091 	mla	r0, r1, r0, r2
        1af5ac:	e5901000 	ldr	r1, [r0]
        1af5b0:	e5851000 	str	r1, [r5]
        1af5b4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1af5b8:	e5a50004 	str	r0, [r5, #4]!	; fField4
        1af5bc:	e1a00004 	mov	r0, r4
        1af5c0:	e3a02001 	mov	r2, #1	; 0x1
        1af5c4:	e59d1000 	ldr	r1, [sp]
        1af5c8:	ea000176 	b	1afba8 <TROMDomainManager1K::UserRequest(long, void *)+0x710>
        1af5cc:	e1a00004 	mov	r0, r4
        1af5d0:	e8950006 	ldmia	r5, {r1, r2}
        1af5d4:	eb652176 	bl	1af7bb4 <TROMDomainManager1K::$EndSession(TStore *, unsigned long)>
        1af5d8:	ea000173 	b	1afbac <TROMDomainManager1K::UserRequest(long, void *)+0x714>
        1af5dc:	e595100c 	ldr	r1, [r5, #12]	; fField12
        1af5e0:	e3310000 	teq	r1, #0	; 0x0
        1af5e4:	0a000002 	beq	1af5f4 <TROMDomainManager1K::UserRequest(long, void *)+0x15c>
        1af5e8:	e1a00004 	mov	r0, r4
        1af5ec:	eb65806c 	bl	1b0f7a4 <TROMDomainManager1K::$FlushCache(unsigned long)>
        1af5f0:	ea000056 	b	1af750 <TROMDomainManager1K::UserRequest(long, void *)+0x2b8>
        1af5f4:	e5951000 	ldr	r1, [r5]
        1af5f8:	e3310000 	teq	r1, #0	; 0x0
        1af5fc:	0a000003 	beq	1af610 <TROMDomainManager1K::UserRequest(long, void *)+0x178>
        1af600:	e1a00004 	mov	r0, r4
        1af604:	e5b52004 	ldr	r2, [r5, #4]!	; fField4
        1af608:	eb658064 	bl	1b0f7a0 <TROMDomainManager1K::$FlushCache(TStore *, unsigned long)>
        1af60c:	ea00004f 	b	1af750 <TROMDomainManager1K::UserRequest(long, void *)+0x2b8>
        1af610:	e5b51008 	ldr	r1, [r5, #8]!	; fField8
        1af614:	e3310000 	teq	r1, #0	; 0x0
        1af618:	03a060ea 	moveq	r6, #234	; 0xea
        1af61c:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
        1af620:	0affffbe 	beq	1af520 <TROMDomainManager1K::UserRequest(long, void *)+0x88>
        1af624:	e1a00004 	mov	r0, r4
        1af628:	eb65805b 	bl	1b0f79c <TROMDomainManager1K::$FlushCacheByBase(unsigned long)>
        1af62c:	ea000047 	b	1af750 <TROMDomainManager1K::UserRequest(long, void *)+0x2b8>
        1af630:	e1a00004 	mov	r0, r4
        1af634:	e3a01000 	mov	r1, #0	; 0x0
        1af638:	eb659d3c 	bl	1b16b30 <TROMDomainManager1K::$DoAcquireDatabase(unsigned char)>
        1af63c:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1af640:	e3300000 	teq	r0, #0	; 0x0
        1af644:	1594005c 	ldrne	r0, [r4, #92]	; fField92
        1af648:	13300000 	teqne	r0, #0	; 0x0
        1af64c:	05878000 	streq	r8, [r7]
        1af650:	15940060 	ldrne	r0, [r4, #96]	; fField96
        1af654:	15870000 	strne	r0, [r7]
        1af658:	e2840004 	add	r0, r4, #4	; 0x4
        1af65c:	eb68a98d 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1af660:	eaffffae 	b	1af520 <TROMDomainManager1K::UserRequest(long, void *)+0x88>
        1af664:	e1a00004 	mov	r0, r4
        1af668:	e8b50006 	ldmia	r5!, {r1, r2}
        1af66c:	e5b53004 	ldr	r3, [r5, #4]!	; fField4
        1af670:	eb655b2c 	bl	1b06328 <TROMDomainManager1K::$SetPackageId(TStore *, unsigned long, unsigned long)>
        1af674:	ea000035 	b	1af750 <TROMDomainManager1K::UserRequest(long, void *)+0x2b8>
        1af678:	e24dd004 	sub	sp, sp, #4	; 0x4
        1af67c:	e1a0200d 	mov	r2, sp
        1af680:	e1a00004 	mov	r0, r4
        1af684:	e595100c 	ldr	r1, [r5, #12]	; fField12
        1af688:	eb654680 	bl	1b01090 <TROMDomainManager1K::$PackageToIndex(unsigned long, long *)>
        1af68c:	e1b06000 	movs	r6, r0
        1af690:	1a000146 	bne	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af694:	e5b40048 	ldr	r0, [r4, #72]!	; fField72
        1af698:	e59d1000 	ldr	r1, [sp]
        1af69c:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1af6a0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1af6a4:	e0202091 	mla	r0, r1, r0, r2
        1af6a8:	e5901000 	ldr	r1, [r0]
        1af6ac:	e5851000 	str	r1, [r5]
        1af6b0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1af6b4:	e5a50004 	str	r0, [r5, #4]!	; fField4
        1af6b8:	ea00013c 	b	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af6bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1af6c0:	e1a0300d 	mov	r3, sp
        1af6c4:	e1a00004 	mov	r0, r4
        1af6c8:	e8950006 	ldmia	r5, {r1, r2}
        1af6cc:	eb658879 	bl	1b118b8 <TROMDomainManager1K::$ObjectToIndex(TStore *, unsigned long, long *)>
        1af6d0:	e1b06000 	movs	r6, r0
        1af6d4:	1a000135 	bne	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af6d8:	e5b40048 	ldr	r0, [r4, #72]!	; fField72
        1af6dc:	e59d1000 	ldr	r1, [sp]
        1af6e0:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1af6e4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1af6e8:	e0202091 	mla	r0, r1, r0, r2
        1af6ec:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1af6f0:	e5a5000c 	str	r0, [r5, #12]!	; fField12
        1af6f4:	ea00012d 	b	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af6f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1af6fc:	e1a0200d 	mov	r2, sp
        1af700:	e1a00004 	mov	r0, r4
        1af704:	e595100c 	ldr	r1, [r5, #12]	; fField12
        1af708:	eb654660 	bl	1b01090 <TROMDomainManager1K::$PackageToIndex(unsigned long, long *)>
        1af70c:	e1b06000 	movs	r6, r0
        1af710:	1a000126 	bne	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af714:	e5b40048 	ldr	r0, [r4, #72]!	; fField72
        1af718:	e59d1000 	ldr	r1, [sp]
        1af71c:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1af720:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1af724:	e0202091 	mla	r0, r1, r0, r2
        1af728:	e5900020 	ldr	r0, [r0, #32]	; fField32
        1af72c:	e5a50008 	str	r0, [r5, #8]!	; fField8
        1af730:	ea00011e 	b	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af734:	e5953014 	ldr	r3, [r5, #20]
        1af738:	e92d0008 	stmdb	sp!, {r3}
        1af73c:	e1a00004 	mov	r0, r4
        1af740:	e5b52008 	ldr	r2, [r5, #8]!	; fField8
        1af744:	e5b53008 	ldr	r3, [r5, #8]!	; fField8
        1af748:	eb6573bb 	bl	1b0c63c <TROMDomainManager1K::$ResizeObject(unsigned long *, unsigned long, long, long)>
        1af74c:	e28dd004 	add	sp, sp, #4	; 0x4
        1af750:	e1a06000 	mov	r6, r0
        1af754:	eaffff71 	b	1af520 <TROMDomainManager1K::UserRequest(long, void *)+0x88>
        1af758:	e24dd004 	sub	sp, sp, #4	; 0x4
        1af75c:	e5951008 	ldr	r1, [r5, #8]	; fField8
        1af760:	e3310000 	teq	r1, #0	; 0x0
        1af764:	0a000014 	beq	1af7bc <TROMDomainManager1K::UserRequest(long, void *)+0x324>
        1af768:	e1a0200d 	mov	r2, sp
        1af76c:	e1a00004 	mov	r0, r4
        1af770:	eb658851 	bl	1b118bc <TROMDomainManager1K::$ObjectToIndex(unsigned long, long *)>
        1af774:	e1b06000 	movs	r6, r0
        1af778:	1a00010c 	bne	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af77c:	e1a00004 	mov	r0, r4
        1af780:	e3a02000 	mov	r2, #0	; 0x0
        1af784:	e59d1000 	ldr	r1, [sp]
        1af788:	eb6573aa 	bl	1b0c638 <TROMDomainManager1K::$FlushCache(long, unsigned char)>
        1af78c:	e5940048 	ldr	r0, [r4, #72]	; fField72
        1af790:	e59d1000 	ldr	r1, [sp]
        1af794:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1af798:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1af79c:	e0222091 	mla	r2, r1, r0, r2
        1af7a0:	e3a03000 	mov	r3, #0	; 0x0
        1af7a4:	e92d0008 	stmdb	sp!, {r3}
        1af7a8:	e1a00004 	mov	r0, r4
        1af7ac:	e3a01001 	mov	r1, #1	; 0x1
        1af7b0:	eb6573a2 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1af7b4:	e5bd1004 	ldr	r1, [sp, #4]!	; fField4
        1af7b8:	ea000058 	b	1af920 <TROMDomainManager1K::UserRequest(long, void *)+0x488>
        1af7bc:	e5950000 	ldr	r0, [r5]
        1af7c0:	e3300000 	teq	r0, #0	; 0x0
        1af7c4:	0a0000f9 	beq	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af7c8:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1af7cc:	e1a0000d 	mov	r0, sp
        1af7d0:	e5941048 	ldr	r1, [r4, #72]	; fField72
        1af7d4:	eb68ce86 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        1af7d8:	e1a0000d 	mov	r0, sp
        1af7dc:	eb68df04 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        1af7e0:	e58d001c 	str	r0, [sp, #28]	; fField28
        1af7e4:	e1a0000d 	mov	r0, sp
        1af7e8:	eb68eb62 	bl	1bea578 <CArrayIterator::$More(void)>
        1af7ec:	e3300000 	teq	r0, #0	; 0x0
        1af7f0:	0a000027 	beq	1af894 <TROMDomainManager1K::UserRequest(long, void *)+0x3fc>
        1af7f4:	e5940048 	ldr	r0, [r4, #72]	; fField72
        1af7f8:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        1af7fc:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1af800:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1af804:	e0272091 	mla	r7, r1, r0, r2
        1af808:	e5970000 	ldr	r0, [r7]
        1af80c:	e5951000 	ldr	r1, [r5]
        1af810:	e1300001 	teq	r0, r1
        1af814:	1a000017 	bne	1af878 <TROMDomainManager1K::UserRequest(long, void *)+0x3e0>
        1af818:	eb659075 	bl	1b139f4 <$IsValidStore(TStore const *)>
        1af81c:	e1b09000 	movs	r9, r0
        1af820:	05878000 	streq	r8, [r7]
        1af824:	e1a00004 	mov	r0, r4
        1af828:	e3a02000 	mov	r2, #0	; 0x0
        1af82c:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        1af830:	eb657380 	bl	1b0c638 <TROMDomainManager1K::$FlushCache(long, unsigned char)>
        1af834:	e3390000 	teq	r9, #0	; 0x0
        1af838:	0a00000a 	beq	1af868 <TROMDomainManager1K::UserRequest(long, void *)+0x3d0>
        1af83c:	e597000c 	ldr	r0, [r7, #12]	; fField12
        1af840:	eb075ee6 	bl	3873e0 <TStoreCompander::IsReadOnly(void)>
        1af844:	e3300000 	teq	r0, #0	; 0x0
        1af848:	1a000006 	bne	1af868 <TROMDomainManager1K::UserRequest(long, void *)+0x3d0>
        1af84c:	e3a03000 	mov	r3, #0	; 0x0
        1af850:	e92d0008 	stmdb	sp!, {r3}
        1af854:	e1a02007 	mov	r2, r7
        1af858:	e1a00004 	mov	r0, r4
        1af85c:	e3a01001 	mov	r1, #1	; 0x1
        1af860:	eb657376 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1af864:	e28dd004 	add	sp, sp, #4	; 0x4
        1af868:	e1a00004 	mov	r0, r4
        1af86c:	e3a02001 	mov	r2, #1	; 0x1
        1af870:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        1af874:	eb65736e 	bl	1b0c634 <TROMDomainManager1K::$EndSession(long, unsigned char)>
        1af878:	e1a0000d 	mov	r0, sp
        1af87c:	eb68ef46 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        1af880:	e58d001c 	str	r0, [sp, #28]	; fField28
        1af884:	e1a0000d 	mov	r0, sp
        1af888:	eb68eb3a 	bl	1bea578 <CArrayIterator::$More(void)>
        1af88c:	e3300000 	teq	r0, #0	; 0x0
        1af890:	1affffd7 	bne	1af7f4 <TROMDomainManager1K::UserRequest(long, void *)+0x35c>
        1af894:	e1a0000d 	mov	r0, sp
        1af898:	ea00005c 	b	1afa10 <TROMDomainManager1K::UserRequest(long, void *)+0x578>
        1af89c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1af8a0:	e5951008 	ldr	r1, [r5, #8]	; fField8
        1af8a4:	e3310000 	teq	r1, #0	; 0x0
        1af8a8:	0a000024 	beq	1af940 <TROMDomainManager1K::UserRequest(long, void *)+0x4a8>
        1af8ac:	e1a0200d 	mov	r2, sp
        1af8b0:	e1a00004 	mov	r0, r4
        1af8b4:	eb658800 	bl	1b118bc <TROMDomainManager1K::$ObjectToIndex(unsigned long, long *)>
        1af8b8:	e1b06000 	movs	r6, r0
        1af8bc:	1a0000bb 	bne	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af8c0:	e5940048 	ldr	r0, [r4, #72]	; fField72
        1af8c4:	e59d1000 	ldr	r1, [sp]
        1af8c8:	e1a02001 	mov	r2, r1
        1af8cc:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1af8d0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1af8d4:	e0253092 	mla	r5, r2, r0, r3
        1af8d8:	e1a00004 	mov	r0, r4
        1af8dc:	e3a02001 	mov	r2, #1	; 0x1
        1af8e0:	eb657354 	bl	1b0c638 <TROMDomainManager1K::$FlushCache(long, unsigned char)>
        1af8e4:	e1a06000 	mov	r6, r0
        1af8e8:	e3350000 	teq	r5, #0	; 0x0
        1af8ec:	0a0000af 	beq	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af8f0:	e3360000 	teq	r6, #0	; 0x0
        1af8f4:	e3a03000 	mov	r3, #0	; 0x0
        1af8f8:	e92d0008 	stmdb	sp!, {r3}
        1af8fc:	e1a02005 	mov	r2, r5
        1af900:	e1a00004 	mov	r0, r4
        1af904:	1a000009 	bne	1af930 <TROMDomainManager1K::UserRequest(long, void *)+0x498>
        1af908:	e3a01002 	mov	r1, #2	; 0x2
        1af90c:	eb65734b 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1af910:	e28dd004 	add	sp, sp, #4	; 0x4
        1af914:	e1b06000 	movs	r6, r0
        1af918:	0a0000a4 	beq	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af91c:	e59d1000 	ldr	r1, [sp]
        1af920:	e1a00004 	mov	r0, r4
        1af924:	e3a02001 	mov	r2, #1	; 0x1
        1af928:	eb657341 	bl	1b0c634 <TROMDomainManager1K::$EndSession(long, unsigned char)>
        1af92c:	ea00009f 	b	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af930:	e3a01001 	mov	r1, #1	; 0x1
        1af934:	eb657341 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1af938:	e28dd004 	add	sp, sp, #4	; 0x4
        1af93c:	eafffff6 	b	1af91c <TROMDomainManager1K::UserRequest(long, void *)+0x484>
        1af940:	e5950000 	ldr	r0, [r5]
        1af944:	e3300000 	teq	r0, #0	; 0x0
        1af948:	0a000098 	beq	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1af94c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1af950:	e1a0000d 	mov	r0, sp
        1af954:	e5941048 	ldr	r1, [r4, #72]	; fField72
        1af958:	eb68ce25 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        1af95c:	e1a0000d 	mov	r0, sp
        1af960:	eb68dea3 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        1af964:	e58d001c 	str	r0, [sp, #28]	; fField28
        1af968:	e1a0000d 	mov	r0, sp
        1af96c:	eb68eb01 	bl	1bea578 <CArrayIterator::$More(void)>
        1af970:	e3300000 	teq	r0, #0	; 0x0
        1af974:	0a000024 	beq	1afa0c <TROMDomainManager1K::UserRequest(long, void *)+0x574>
        1af978:	e5940048 	ldr	r0, [r4, #72]	; fField72
        1af97c:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        1af980:	e1a02001 	mov	r2, r1
        1af984:	e5903010 	ldr	r3, [r0, #16]	; fField16
        1af988:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1af98c:	e0273092 	mla	r7, r2, r0, r3
        1af990:	e5970000 	ldr	r0, [r7]
        1af994:	e5952000 	ldr	r2, [r5]
        1af998:	e1300002 	teq	r0, r2
        1af99c:	1a000013 	bne	1af9f0 <TROMDomainManager1K::UserRequest(long, void *)+0x558>
        1af9a0:	e1a00004 	mov	r0, r4
        1af9a4:	e3a02001 	mov	r2, #1	; 0x1
        1af9a8:	eb657322 	bl	1b0c638 <TROMDomainManager1K::$FlushCache(long, unsigned char)>
        1af9ac:	e3370000 	teq	r7, #0	; 0x0
        1af9b0:	0a00000e 	beq	1af9f0 <TROMDomainManager1K::UserRequest(long, void *)+0x558>
        1af9b4:	e3300000 	teq	r0, #0	; 0x0
        1af9b8:	e3a03000 	mov	r3, #0	; 0x0
        1af9bc:	e92d0008 	stmdb	sp!, {r3}
        1af9c0:	e1a02007 	mov	r2, r7
        1af9c4:	e1a00004 	mov	r0, r4
        1af9c8:	1a000014 	bne	1afa20 <TROMDomainManager1K::UserRequest(long, void *)+0x588>
        1af9cc:	e3a01002 	mov	r1, #2	; 0x2
        1af9d0:	eb65731a 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1af9d4:	e28dd004 	add	sp, sp, #4	; 0x4
        1af9d8:	e3300000 	teq	r0, #0	; 0x0
        1af9dc:	0a000003 	beq	1af9f0 <TROMDomainManager1K::UserRequest(long, void *)+0x558>
        1af9e0:	e1a00004 	mov	r0, r4
        1af9e4:	e3a02001 	mov	r2, #1	; 0x1
        1af9e8:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        1af9ec:	eb657310 	bl	1b0c634 <TROMDomainManager1K::$EndSession(long, unsigned char)>
        1af9f0:	e1a0000d 	mov	r0, sp
        1af9f4:	eb68eee8 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        1af9f8:	e58d001c 	str	r0, [sp, #28]	; fField28
        1af9fc:	e1a0000d 	mov	r0, sp
        1afa00:	eb68eadc 	bl	1bea578 <CArrayIterator::$More(void)>
        1afa04:	e3300000 	teq	r0, #0	; 0x0
        1afa08:	1affffda 	bne	1af978 <TROMDomainManager1K::UserRequest(long, void *)+0x4e0>
        1afa0c:	e1a0000d 	mov	r0, sp
        1afa10:	e3a01000 	mov	r1, #0	; 0x0
        1afa14:	eb68d213 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1afa18:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1afa1c:	ea000063 	b	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1afa20:	e3a01001 	mov	r1, #1	; 0x1
        1afa24:	eb657305 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1afa28:	e28dd004 	add	sp, sp, #4	; 0x4
        1afa2c:	eaffffeb 	b	1af9e0 <TROMDomainManager1K::UserRequest(long, void *)+0x548>
        1afa30:	e24dd004 	sub	sp, sp, #4	; 0x4
        1afa34:	e1a0200d 	mov	r2, sp
        1afa38:	e1a00004 	mov	r0, r4
        1afa3c:	e5951008 	ldr	r1, [r5, #8]	; fField8
        1afa40:	eb65879d 	bl	1b118bc <TROMDomainManager1K::$ObjectToIndex(unsigned long, long *)>
        1afa44:	e1b06000 	movs	r6, r0
        1afa48:	1a000058 	bne	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1afa4c:	e5b40048 	ldr	r0, [r4, #72]!	; fField72
        1afa50:	e59d1000 	ldr	r1, [sp]
        1afa54:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1afa58:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1afa5c:	e0242091 	mla	r4, r1, r0, r2
        1afa60:	e5940000 	ldr	r0, [r4]
        1afa64:	e5850000 	str	r0, [r5]
        1afa68:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1afa6c:	e5850004 	str	r0, [r5, #4]	; fField4
        1afa70:	e594001c 	ldr	r0, [r4, #28]	; fField28
        1afa74:	e585000c 	str	r0, [r5, #12]	; fField12
        1afa78:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1afa7c:	e5850010 	str	r0, [r5, #16]	; fField16
        1afa80:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1afa84:	eb075e55 	bl	3873e0 <TStoreCompander::IsReadOnly(void)>
        1afa88:	e5c50018 	strb	r0, [r5, #24]
        1afa8c:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
        1afa90:	e3300000 	teq	r0, #0	; 0x0
        1afa94:	1a000003 	bne	1afaa8 <TROMDomainManager1K::UserRequest(long, void *)+0x610>
        1afa98:	e2840034 	add	r0, r4, #52	; 0x34
        1afa9c:	eb659c2c 	bl	1b16b54 <LOTransactionHandler::$HasTransaction(void)>
        1afaa0:	e3300000 	teq	r0, #0	; 0x0
        1afaa4:	0a000001 	beq	1afab0 <TROMDomainManager1K::UserRequest(long, void *)+0x618>
        1afaa8:	e3a00001 	mov	r0, #1	; 0x1
        1afaac:	ea000000 	b	1afab4 <TROMDomainManager1K::UserRequest(long, void *)+0x61c>
        1afab0:	e3a00000 	mov	r0, #0	; 0x0
        1afab4:	e5c50019 	strb	r0, [r5, #25]
        1afab8:	ea00003c 	b	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1afabc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1afac0:	e1a0300d 	mov	r3, sp
        1afac4:	e1a00004 	mov	r0, r4
        1afac8:	e8950006 	ldmia	r5, {r1, r2}
        1afacc:	eb658779 	bl	1b118b8 <TROMDomainManager1K::$ObjectToIndex(TStore *, unsigned long, long *)>
        1afad0:	e1b06000 	movs	r6, r0
        1afad4:	1a000035 	bne	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1afad8:	e5b40048 	ldr	r0, [r4, #72]!	; fField72
        1afadc:	e59d1000 	ldr	r1, [sp]
        1afae0:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1afae4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1afae8:	e0202091 	mla	r0, r1, r0, r2
        1afaec:	e5901020 	ldr	r1, [r0, #32]	; fField32
        1afaf0:	e5851008 	str	r1, [r5, #8]	; fField8
        1afaf4:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1afaf8:	e5a50010 	str	r0, [r5, #16]!	; fField16
        1afafc:	ea00002b 	b	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1afb00:	e1a00004 	mov	r0, r4
        1afb04:	e5951008 	ldr	r1, [r5, #8]	; fField8
        1afb08:	eb657f2d 	bl	1b0f7c4 <TROMDomainManager1K::$GetObjectPtr(unsigned long)>
        1afb0c:	e1b04000 	movs	r4, r0
        1afb10:	03a060e8 	moveq	r6, #232	; 0xe8
        1afb14:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
        1afb18:	0afffe80 	beq	1af520 <TROMDomainManager1K::UserRequest(long, void *)+0x88>
        1afb1c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        1afb20:	e5850008 	str	r0, [r5, #8]	; fField8
        1afb24:	e5940000 	ldr	r0, [r4]
        1afb28:	e5850000 	str	r0, [r5]
        1afb2c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1afb30:	e5850004 	str	r0, [r5, #4]	; fField4
        1afb34:	e594001c 	ldr	r0, [r4, #28]	; fField28
        1afb38:	e585000c 	str	r0, [r5, #12]	; fField12
        1afb3c:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1afb40:	e5850010 	str	r0, [r5, #16]	; fField16
        1afb44:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1afb48:	eb075e24 	bl	3873e0 <TStoreCompander::IsReadOnly(void)>
        1afb4c:	e5c50018 	strb	r0, [r5, #24]
        1afb50:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
        1afb54:	e3300000 	teq	r0, #0	; 0x0
        1afb58:	1a000003 	bne	1afb6c <TROMDomainManager1K::UserRequest(long, void *)+0x6d4>
        1afb5c:	e2840034 	add	r0, r4, #52	; 0x34
        1afb60:	eb659bfb 	bl	1b16b54 <LOTransactionHandler::$HasTransaction(void)>
        1afb64:	e3300000 	teq	r0, #0	; 0x0
        1afb68:	0a000001 	beq	1afb74 <TROMDomainManager1K::UserRequest(long, void *)+0x6dc>
        1afb6c:	e3a00001 	mov	r0, #1	; 0x1
        1afb70:	ea000000 	b	1afb78 <TROMDomainManager1K::UserRequest(long, void *)+0x6e0>
        1afb74:	e3a00000 	mov	r0, #0	; 0x0
        1afb78:	e5c50019 	strb	r0, [r5, #25]
        1afb7c:	eafffe67 	b	1af520 <TROMDomainManager1K::UserRequest(long, void *)+0x88>
        1afb80:	e24dd004 	sub	sp, sp, #4	; 0x4
        1afb84:	e1a0200d 	mov	r2, sp
        1afb88:	e1a00004 	mov	r0, r4
        1afb8c:	e5b51008 	ldr	r1, [r5, #8]!	; fField8
        1afb90:	eb658749 	bl	1b118bc <TROMDomainManager1K::$ObjectToIndex(unsigned long, long *)>
        1afb94:	e1b06000 	movs	r6, r0
        1afb98:	1a000004 	bne	1afbb0 <TROMDomainManager1K::UserRequest(long, void *)+0x718>
        1afb9c:	e1a00004 	mov	r0, r4
        1afba0:	e3a02000 	mov	r2, #0	; 0x0
        1afba4:	e59d1000 	ldr	r1, [sp]
        1afba8:	eb6572a1 	bl	1b0c634 <TROMDomainManager1K::$EndSession(long, unsigned char)>
        1afbac:	e1a06000 	mov	r6, r0
        1afbb0:	e28dd004 	add	sp, sp, #4	; 0x4
        1afbb4:	eafffe59 	b	1af520 <TROMDomainManager1K::UserRequest(long, void *)+0x88>
        1afbb8:	e1a00004 	mov	r0, r4
        1afbbc:	e8950006 	ldmia	r5, {r1, r2}
        1afbc0:	eb6576b9 	bl	1b0d6ac <TROMDomainManager1K::$XIPObjectHasMoved(TStore *, unsigned long)>
        1afbc4:	eafffe55 	b	1af520 <TROMDomainManager1K::UserRequest(long, void *)+0x88>
    */
}

/**
 * Symbol: TROMDomainManager1K::GetSourcePage(unsigned long)
 * Address: 001afbc8
 */
TROMDomainManager1K::GetSourcePage(unsigned long) {
    /*
        1afbc8:	e1a0c00d 	mov	ip, sp
        1afbcc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1afbd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1afbd4:	e1a05000 	mov	r5, r0
        1afbd8:	e1a04001 	mov	r4, r1
        1afbdc:	e3e06e8a 	mvn	r6, #2208	; 0x8a0
        1afbe0:	e2466a02 	sub	r6, r6, #8192	; 0x2000
        1afbe4:	e3a00000 	mov	r0, #0	; 0x0
        1afbe8:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1afbec:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1afbf0:	e1a0000d 	mov	r0, sp
        1afbf4:	e5951048 	ldr	r1, [r5, #72]	; fField72
        1afbf8:	eb68cd7d 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        1afbfc:	e1a0000d 	mov	r0, sp
        1afc00:	eb68ddfb 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        1afc04:	e1a07000 	mov	r7, r0
        1afc08:	e1a0000d 	mov	r0, sp
        1afc0c:	eb68ea59 	bl	1bea578 <CArrayIterator::$More(void)>
        1afc10:	e3300000 	teq	r0, #0	; 0x0
        1afc14:	0a000024 	beq	1afcac <TROMDomainManager1K::GetSourcePage(unsigned long)+0xe4>
        1afc18:	e5950048 	ldr	r0, [r5, #72]	; fField72
        1afc1c:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1afc20:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1afc24:	e0201097 	mla	r0, r7, r0, r1
        1afc28:	e5951040 	ldr	r1, [r5, #64]	; fField64
        1afc2c:	e1a03001 	mov	r3, r1
        1afc30:	e5902020 	ldr	r2, [r0, #32]	; fField32
        1afc34:	e0421001 	sub	r1, r2, r1
        1afc38:	e1a01521 	mov	r1, r1, lsr #10
        1afc3c:	e590c024 	ldr	ip, [r0, #36]	; fField36
        1afc40:	e24cc001 	sub	ip, ip, #1	; 0x1
        1afc44:	e28ccb01 	add	ip, ip, #1024	; 0x400
        1afc48:	e082200c 	add	r2, r2, ip
        1afc4c:	e0422003 	sub	r2, r2, r3
        1afc50:	e1a02522 	mov	r2, r2, lsr #10
        1afc54:	e1540001 	cmp	r4, r1
        1afc58:	3a00000c 	bcc	1afc90 <TROMDomainManager1K::GetSourcePage(unsigned long)+0xc8>
        1afc5c:	e1540002 	cmp	r4, r2
        1afc60:	2a00000a 	bcs	1afc90 <TROMDomainManager1K::GetSourcePage(unsigned long)+0xc8>
        1afc64:	e3a03004 	mov	r3, #4	; 0x4
        1afc68:	e92d0008 	stmdb	sp!, {r3}
        1afc6c:	e0441001 	sub	r1, r4, r1
        1afc70:	e1a02101 	mov	r2, r1, lsl #2
        1afc74:	e28d3020 	add	r3, sp, #32	; 0x20
        1afc78:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1afc7c:	e5900000 	ldr	r0, [r0]
        1afc80:	eb65492e 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1afc84:	e28dd004 	add	sp, sp, #4	; 0x4
        1afc88:	e1a06000 	mov	r6, r0
        1afc8c:	ea000006 	b	1afcac <TROMDomainManager1K::GetSourcePage(unsigned long)+0xe4>
        1afc90:	e1a0000d 	mov	r0, sp
        1afc94:	eb68ee40 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        1afc98:	e1a07000 	mov	r7, r0
        1afc9c:	e1a0000d 	mov	r0, sp
        1afca0:	eb68ea34 	bl	1bea578 <CArrayIterator::$More(void)>
        1afca4:	e3300000 	teq	r0, #0	; 0x0
        1afca8:	1affffda 	bne	1afc18 <TROMDomainManager1K::GetSourcePage(unsigned long)+0x50>
        1afcac:	e1a0000d 	mov	r0, sp
        1afcb0:	e3a01000 	mov	r1, #0	; 0x0
        1afcb4:	eb68d16b 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1afcb8:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1afcbc:	e3360000 	teq	r6, #0	; 0x0
        1afcc0:	0a000004 	beq	1afcd8 <TROMDomainManager1K::GetSourcePage(unsigned long)+0x110>
        1afcc4:	e1a01006 	mov	r1, r6
        1afcc8:	e59f0010 	ldr	r0, [pc, #10]	; 1afce0 <TROMDomainManager1K::GetSourcePage(unsigned long)+0x118>
        1afccc:	e5900000 	ldr	r0, [r0]
        1afcd0:	e3a02000 	mov	r2, #0	; 0x0
        1afcd4:	eb68cd30 	bl	1be319c <$Throw>
        1afcd8:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1afcdc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1afce0:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TROMDomainManager1K::__ct(void)
 * Address: 001afce4
 */
TROMDomainManager1K::TROMDomainManager1K(void) {
    /*
        1afce4:	e1a0c00d 	mov	ip, sp
        1afce8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1afcec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1afcf0:	e1b04000 	movs	r4, r0
        1afcf4:	1a000003 	bne	1afd08 <TROMDomainManager1K::__ct(void)+0x24>
        1afcf8:	e3a000e0 	mov	r0, #224	; 0xe0
        1afcfc:	eb687a8d 	bl	1bce738 <$__nw(unsigned int)>
        1afd00:	e1b04000 	movs	r4, r0
        1afd04:	0a00001d 	beq	1afd80 <TROMDomainManager1K::__ct(void)+0x9c>
        1afd08:	e1a00004 	mov	r0, r4
        1afd0c:	eb687667 	bl	1bcd6b0 <TUDomainManager::$__ct(void)>
        1afd10:	e59f0070 	ldr	r0, [pc, #70]	; 1afd88 <TROMDomainManager1K::__ct(void)+0xa4>
        1afd14:	e5840000 	str	r0, [r4]
        1afd18:	e24dd008 	sub	sp, sp, #8	; 0x8
        1afd1c:	e3a05000 	mov	r5, #0	; 0x0
        1afd20:	e5845058 	str	r5, [r4, #88]	; fField88
        1afd24:	e584505c 	str	r5, [r4, #92]	; fField92
        1afd28:	e5845060 	str	r5, [r4, #96]	; fField96
        1afd2c:	e5845054 	str	r5, [r4, #84]	; fField84
        1afd30:	e5845064 	str	r5, [r4, #100]	; fField100
        1afd34:	e5845068 	str	r5, [r4, #104]	; fField104
        1afd38:	eb68abf2 	bl	1bdad08 <$ROMDomainBase(void)>
        1afd3c:	e5840040 	str	r0, [r4, #64]	; fField64
        1afd40:	eb68abf2 	bl	1bdad10 <$ROMDomainSize(void)>
        1afd44:	e5840044 	str	r0, [r4, #68]	; fField68
        1afd48:	eb65723d 	bl	1b0c644 <$GetXIPDomainBase(void)>
        1afd4c:	e58400dc 	str	r0, [r4, #220]	; fField220
        1afd50:	e5845048 	str	r5, [r4, #72]	; fField72
        1afd54:	e584504c 	str	r5, [r4, #76]	; fField76
        1afd58:	e5845050 	str	r5, [r4, #80]	; fField80
        1afd5c:	e58d5004 	str	r5, [sp, #4]	; fField4
        1afd60:	e28410bc 	add	r1, r4, #188	; 0xbc
        1afd64:	e58d5000 	str	r5, [sp]
        1afd68:	e89d5000 	ldmia	sp, {ip, lr}
        1afd6c:	e8815000 	stmia	r1, {ip, lr}
        1afd70:	e5c450cc 	strb	r5, [r4, #204]	; fField204
        1afd74:	e5c450cd 	strb	r5, [r4, #205]	; fField205
        1afd78:	e58450d4 	str	r5, [r4, #212]
        1afd7c:	e28dd008 	add	sp, sp, #8	; 0x8
        1afd80:	e1a00004 	mov	r0, r4
        1afd84:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1afd88:	0001ee80 	andeq	lr, r1, r0, lsl #29
    */
}

/**
 * Symbol: TROMDomainManager1K::GetWorkingSetPage(unsigned long *)
 * Address: 001afd8c
 */
TROMDomainManager1K::GetWorkingSetPage(unsigned long *) {
    /*
        1afd8c:	e1a0c00d 	mov	ip, sp
        1afd90:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1afd94:	e24cb004 	sub	fp, ip, #4	; 0x4
        1afd98:	e1a04000 	mov	r4, r0
        1afd9c:	e3a06000 	mov	r6, #0	; 0x0
        1afda0:	e3a08000 	mov	r8, #0	; 0x0
        1afda4:	e5900060 	ldr	r0, [r0, #96]	; fField96
        1afda8:	e3500001 	cmp	r0, #1	; 0x1
        1afdac:	da000061 	ble	1aff38 <TROMDomainManager1K::GetWorkingSetPage(unsigned long *)+0x1ac>
        1afdb0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1afdb4:	e1a0000d 	mov	r0, sp
        1afdb8:	eb688f06 	bl	1bd39d8 <$GetGlobalTime>
        1afdbc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1afdc0:	e59450b8 	ldr	r5, [r4, #184]	; fField184
        1afdc4:	e0801005 	add	r1, r0, r5
        1afdc8:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1afdcc:	eb680add 	bl	1bb2948 <$__rt_udiv>
        1afdd0:	e2850011 	add	r0, r5, #17	; 0x11
        1afdd4:	e1a05001 	mov	r5, r1
        1afdd8:	e58400b8 	str	r0, [r4, #184]	; fField184
        1afddc:	e28dd008 	add	sp, sp, #8	; 0x8
        1afde0:	e1a0a001 	mov	sl, r1
        1afde4:	e2840004 	add	r0, r4, #4	; 0x4
        1afde8:	e1a09000 	mov	r9, r0
        1afdec:	e3a01000 	mov	r1, #0	; 0x0
        1afdf0:	eb687a57 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1afdf4:	e1a01005 	mov	r1, r5
        1afdf8:	e1a00004 	mov	r0, r4
        1afdfc:	eb655115 	bl	1b04258 <TROMDomainManager1K::$RestrictedPage(long)>
        1afe00:	e3300000 	teq	r0, #0	; 0x0
        1afe04:	1a00001d 	bne	1afe80 <TROMDomainManager1K::GetWorkingSetPage(unsigned long *)+0xf4>
        1afe08:	e594104c 	ldr	r1, [r4, #76]	; fField76
        1afe0c:	e0811205 	add	r1, r1, r5, lsl #4
        1afe10:	e1a00004 	mov	r0, r4
        1afe14:	eb6565a7 	bl	1b094b8 <TROMDomainManager1K::$ValidPage(PageTableChunk *)>
        1afe18:	e3300000 	teq	r0, #0	; 0x0
        1afe1c:	0a000017 	beq	1afe80 <TROMDomainManager1K::GetWorkingSetPage(unsigned long *)+0xf4>
        1afe20:	e3a07000 	mov	r7, #0	; 0x0
        1afe24:	e3350000 	teq	r5, #0	; 0x0
        1afe28:	0a00000a 	beq	1afe58 <TROMDomainManager1K::GetWorkingSetPage(unsigned long *)+0xcc>
        1afe2c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1afe30:	e3a00000 	mov	r0, #0	; 0x0
        1afe34:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        1afe38:	e58d5000 	str	r5, [sp]
        1afe3c:	e205000f 	and	r0, r5, #15	; 0xf
        1afe40:	e330000c 	teq	r0, #12	; 0xc
        1afe44:	03a07001 	moveq	r7, #1	; 0x1
        1afe48:	e1a0000d 	mov	r0, sp
        1afe4c:	e3a01000 	mov	r1, #0	; 0x0
        1afe50:	eb687a33 	bl	1bce724 <TUObject::$__dt(void)>
        1afe54:	e28dd008 	add	sp, sp, #8	; 0x8
        1afe58:	e3370000 	teq	r7, #0	; 0x0
        1afe5c:	1a000007 	bne	1afe80 <TROMDomainManager1K::GetWorkingSetPage(unsigned long *)+0xf4>
        1afe60:	e1a01005 	mov	r1, r5
        1afe64:	e1a00004 	mov	r0, r4
        1afe68:	eb658691 	bl	1b118b4 <TROMDomainManager1K::$OKIfDirty(unsigned long)>
        1afe6c:	e3300000 	teq	r0, #0	; 0x0
        1afe70:	1594004c 	ldrne	r0, [r4, #76]	; fField76
        1afe74:	17908205 	ldrne	r8, [r0, r5, lsl #4]	; fField4
        1afe78:	13a06001 	movne	r6, #1	; 0x1
        1afe7c:	1a000007 	bne	1afea0 <TROMDomainManager1K::GetWorkingSetPage(unsigned long *)+0x114>
        1afe80:	e2855001 	add	r5, r5, #1	; 0x1
        1afe84:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1afe88:	e1500005 	cmp	r0, r5
        1afe8c:	93a05000 	movls	r5, #0	; 0x0
        1afe90:	e135000a 	teq	r5, sl
        1afe94:	1affffd6 	bne	1afdf4 <TROMDomainManager1K::GetWorkingSetPage(unsigned long *)+0x68>
        1afe98:	e3360000 	teq	r6, #0	; 0x0
        1afe9c:	0a00001e 	beq	1aff1c <TROMDomainManager1K::GetWorkingSetPage(unsigned long *)+0x190>
        1afea0:	e1a01005 	mov	r1, r5
        1afea4:	e1a00004 	mov	r0, r4
        1afea8:	e3a0200f 	mov	r2, #15	; 0xf
        1afeac:	eb65277b 	bl	1af9ca0 <TROMDomainManager1K::$FreeSubPages(long, long)>
        1afeb0:	e1a07005 	mov	r7, r5
        1afeb4:	e594004c 	ldr	r0, [r4, #76]	; fField76
        1afeb8:	e7900205 	ldr	r0, [r0, r5, lsl #4]	; fField4
        1afebc:	e3a05000 	mov	r5, #0	; 0x0
        1afec0:	e3300000 	teq	r0, #0	; 0x0
        1afec4:	0a00000a 	beq	1afef4 <TROMDomainManager1K::GetWorkingSetPage(unsigned long *)+0x168>
        1afec8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1afecc:	e3a01000 	mov	r1, #0	; 0x0
        1afed0:	e5cd1004 	strb	r1, [sp, #4]	; fField4
        1afed4:	e58d0000 	str	r0, [sp]
        1afed8:	e200000f 	and	r0, r0, #15	; 0xf
        1afedc:	e330000c 	teq	r0, #12	; 0xc
        1afee0:	03a05001 	moveq	r5, #1	; 0x1
        1afee4:	e1a0000d 	mov	r0, sp
        1afee8:	e3a01000 	mov	r1, #0	; 0x0
        1afeec:	eb687a0c 	bl	1bce724 <TUObject::$__dt(void)>
        1afef0:	e28dd008 	add	sp, sp, #8	; 0x8
        1afef4:	e3350000 	teq	r5, #0	; 0x0
        1afef8:	05940060 	ldreq	r0, [r4, #96]	; fField96
        1afefc:	02400001 	subeq	r0, r0, #1	; 0x1
        1aff00:	05840060 	streq	r0, [r4, #96]	; fField96
        1aff04:	e594005c 	ldr	r0, [r4, #92]	; fField92
        1aff08:	e2400001 	sub	r0, r0, #1	; 0x1
        1aff0c:	e1a01007 	mov	r1, r7
        1aff10:	e584005c 	str	r0, [r4, #92]	; fField92
        1aff14:	e1a00004 	mov	r0, r4
        1aff18:	eb6516d9 	bl	1af5a84 <TROMDomainManager1K::$ClearTableEntry(long)>
        1aff1c:	e1a00009 	mov	r0, r9
        1aff20:	eb68a75c 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1aff24:	e51b102c 	ldr	r1, [fp, -#44]
        1aff28:	e3360000 	teq	r6, #0	; 0x0
        1aff2c:	e5818000 	str	r8, [r1]
        1aff30:	13a00000 	movne	r0, #0	; 0x0
        1aff34:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1aff38:	e3a000e9 	mov	r0, #233	; 0xe9
        1aff3c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        1aff40:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::RestrictPage(long)
 * Address: 001aff44
 */
TROMDomainManager1K::RestrictPage(long) {
    /*
        1aff44:	e59020b0 	ldr	r2, [r0, #176]	; fField176
        1aff48:	e33200ff 	teq	r2, #255	; 0xff
        1aff4c:	15a010b4 	strne	r1, [r0, #180]!	; fField180
        1aff50:	05a010b0 	streq	r1, [r0, #176]!	; fField176
        1aff54:	e3a00000 	mov	r0, #0	; 0x0
        1aff58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TROMDomainManager1K::UnrestrictPage(long)
 * Address: 001aff5c
 */
TROMDomainManager1K::UnrestrictPage(long) {
    /*
        1aff5c:	e3a020ff 	mov	r2, #255	; 0xff
        1aff60:	e59030b0 	ldr	r3, [r0, #176]	; fField176
        1aff64:	e1330001 	teq	r3, r1
        1aff68:	058020b0 	streq	r2, [r0, #176]	; fField176
        1aff6c:	e59030b4 	ldr	r3, [r0, #180]	; fField180
        1aff70:	e1330001 	teq	r3, r1
        1aff74:	05a020b4 	streq	r2, [r0, #180]!	; fField180
        1aff78:	e3a00000 	mov	r0, #0	; 0x0
        1aff7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TROMDomainManager1K::RestrictedPage(long)
 * Address: 001aff80
 */
TROMDomainManager1K::RestrictedPage(long) {
    /*
        1aff80:	e59020b0 	ldr	r2, [r0, #176]	; fField176
        1aff84:	e1320001 	teq	r2, r1
        1aff88:	159000b4 	ldrne	r0, [r0, #180]	; fField180
        1aff8c:	11300001 	teqne	r0, r1
        1aff90:	03a00001 	moveq	r0, #1	; 0x1
        1aff94:	13a00000 	movne	r0, #0	; 0x0
        1aff98:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TROMDomainManager1K::AddPage(long *, unsigned long)
 * Address: 001aff9c
 */
TROMDomainManager1K::AddPage(long *, unsigned long) {
    /*
        1aff9c:	e1a0c00d 	mov	ip, sp
        1affa0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1affa4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1affa8:	e1a04000 	mov	r4, r0
        1affac:	e1a06001 	mov	r6, r1
        1affb0:	e1a05002 	mov	r5, r2
        1affb4:	e3a090e9 	mov	r9, #233	; 0xe9
        1affb8:	e2499b0a 	sub	r9, r9, #10240	; 0x2800
        1affbc:	e3a07000 	mov	r7, #0	; 0x0
        1affc0:	e5900064 	ldr	r0, [r0, #100]	; fField100
        1affc4:	e3500000 	cmp	r0, #0	; 0x0
        1affc8:	da000023 	ble	1b005c <TROMDomainManager1K::AddPage(long *, unsigned long)+0xc0>
        1affcc:	e594004c 	ldr	r0, [r4, #76]	; fField76
        1affd0:	e0801207 	add	r1, r0, r7, lsl #4
        1affd4:	e1a00004 	mov	r0, r4
        1affd8:	eb656536 	bl	1b094b8 <TROMDomainManager1K::$ValidPage(PageTableChunk *)>
        1affdc:	e3300000 	teq	r0, #0	; 0x0
        1affe0:	1a000019 	bne	1b004c <TROMDomainManager1K::AddPage(long *, unsigned long)+0xb0>
        1affe4:	e3a09000 	mov	r9, #0	; 0x0
        1affe8:	e594005c 	ldr	r0, [r4, #92]	; fField92
        1affec:	e2800001 	add	r0, r0, #1	; 0x1
        1afff0:	e3a08000 	mov	r8, #0	; 0x0
        1afff4:	e3350000 	teq	r5, #0	; 0x0
        1afff8:	e584005c 	str	r0, [r4, #92]	; fField92
        1afffc:	0a00000a 	beq	1b002c <TROMDomainManager1K::AddPage(long *, unsigned long)+0x90>
        1b0000:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b0004:	e3a00000 	mov	r0, #0	; 0x0
        1b0008:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        1b000c:	e58d5000 	str	r5, [sp]
        1b0010:	e205000f 	and	r0, r5, #15	; 0xf
        1b0014:	e330000c 	teq	r0, #12	; 0xc
        1b0018:	03a08001 	moveq	r8, #1	; 0x1
        1b001c:	e1a0000d 	mov	r0, sp
        1b0020:	e3a01000 	mov	r1, #0	; 0x0
        1b0024:	eb6879be 	bl	1bce724 <TUObject::$__dt(void)>
        1b0028:	e28dd008 	add	sp, sp, #8	; 0x8
        1b002c:	e3380000 	teq	r8, #0	; 0x0
        1b0030:	05940060 	ldreq	r0, [r4, #96]	; fField96
        1b0034:	02800001 	addeq	r0, r0, #1	; 0x1
        1b0038:	05840060 	streq	r0, [r4, #96]	; fField96
        1b003c:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
        1b0040:	e7805207 	str	r5, [r0, r7, lsl #4]	; fField4
        1b0044:	e5867000 	str	r7, [r6]
        1b0048:	ea000003 	b	1b005c <TROMDomainManager1K::AddPage(long *, unsigned long)+0xc0>
        1b004c:	e2877001 	add	r7, r7, #1	; 0x1
        1b0050:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1b0054:	e1500007 	cmp	r0, r7
        1b0058:	caffffdb 	bgt	1affcc <TROMDomainManager1K::AddPage(long *, unsigned long)+0x30>
        1b005c:	e1a00009 	mov	r0, r9
        1b0060:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::GetObjectPtr(unsigned long)
 * Address: 001b0064
 */
TROMDomainManager1K::GetObjectPtr(unsigned long) {
    /*
        1b0064:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        1b0068:	e5902048 	ldr	r2, [r0, #72]	; fField72
        1b006c:	e5922000 	ldr	r2, [r2]
        1b0070:	e3320000 	teq	r2, #0	; 0x0
        1b0074:	0a000017 	beq	1b00d8 <TROMDomainManager1K::GetObjectPtr(unsigned long)+0x74>
        1b0078:	e2522001 	subs	r2, r2, #1	; 0x1
        1b007c:	e3a0c000 	mov	ip, #0	; 0x0
        1b0080:	4a000014 	bmi	1b00d8 <TROMDomainManager1K::GetObjectPtr(unsigned long)+0x74>
        1b0084:	e5900048 	ldr	r0, [r0, #72]	; fField72
        1b0088:	e5b04004 	ldr	r4, [r0, #4]!	; fField4
        1b008c:	e5b0500c 	ldr	r5, [r0, #12]!	; fField12
        1b0090:	e08c3002 	add	r3, ip, r2
        1b0094:	e0833fa3 	add	r3, r3, r3, lsr #31
        1b0098:	e1a030c3 	mov	r3, r3, asr #1
        1b009c:	e0205493 	mla	r0, r3, r4, r5
        1b00a0:	e590e020 	ldr	lr, [r0, #32]	; fField32
        1b00a4:	e15e0001 	cmp	lr, r1
        1b00a8:	82432001 	subhi	r2, r3, #1	; 0x1
        1b00ac:	8a000007 	bhi	1b00d0 <TROMDomainManager1K::GetObjectPtr(unsigned long)+0x6c>
        1b00b0:	e590c024 	ldr	ip, [r0, #36]	; fField36
        1b00b4:	e08e600c 	add	r6, lr, ip
        1b00b8:	e1560001 	cmp	r6, r1
        1b00bc:	88bd8070 	ldmhiia	sp!, {r4, r5, r6, pc}
        1b00c0:	e33c0000 	teq	ip, #0	; 0x0
        1b00c4:	013e0001 	teqeq	lr, r1
        1b00c8:	08bd8070 	ldmeqia	sp!, {r4, r5, r6, pc}
        1b00cc:	e283c001 	add	ip, r3, #1	; 0x1
        1b00d0:	e152000c 	cmp	r2, ip
        1b00d4:	aaffffed 	bge	1b0090 <TROMDomainManager1K::GetObjectPtr(unsigned long)+0x2c>
        1b00d8:	e3a00000 	mov	r0, #0	; 0x0
        1b00dc:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::SubPageMap(long)
 * Address: 001b00e0
 */
TROMDomainManager1K::SubPageMap(long) {
    /*
        1b00e0:	e92d4010 	stmdb	sp!, {r4, lr}
        1b00e4:	e1a02000 	mov	r2, r0
        1b00e8:	e3a00000 	mov	r0, #0	; 0x0
        1b00ec:	e592204c 	ldr	r2, [r2, #76]	; fField76
        1b00f0:	e0822201 	add	r2, r2, r1, lsl #4
        1b00f4:	e3a01000 	mov	r1, #0	; 0x0
        1b00f8:	e3a0e801 	mov	lr, #65536	; 0x10000
        1b00fc:	e24ee001 	sub	lr, lr, #1	; 0x1
        1b0100:	e3a03001 	mov	r3, #1	; 0x1
        1b0104:	e082c081 	add	ip, r2, r1, lsl #1
        1b0108:	e59c4004 	ldr	r4, [ip, #4]	; fField4
        1b010c:	e13e0824 	teq	lr, r4, lsr #16
        1b0110:	01800113 	orreq	r0, r0, r3, lsl r1
        1b0114:	e2811001 	add	r1, r1, #1	; 0x1
        1b0118:	e3510004 	cmp	r1, #4	; 0x4
        1b011c:	bafffff8 	blt	1b0104 <TROMDomainManager1K::SubPageMap(long)+0x24>
        1b0120:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::Collect(long *, long, long, PageTableChunk *)
 * Address: 001b0124
 */
TROMDomainManager1K::Collect(long *, long, long, PageTableChunk *) {
    /*
        1b0124:	e1a0c00d 	mov	ip, sp
        1b0128:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b012c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b0130:	e1a04000 	mov	r4, r0
        1b0134:	e1a06001 	mov	r6, r1
        1b0138:	e1a05002 	mov	r5, r2
        1b013c:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        1b0140:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b0144:	e0880083 	add	r0, r8, r3, lsl #1
        1b0148:	e5909004 	ldr	r9, [r0, #4]	; fField4
        1b014c:	e1a09829 	mov	r9, r9, lsr #16
        1b0150:	e3a00000 	mov	r0, #0	; 0x0
        1b0154:	e3a07000 	mov	r7, #0	; 0x0
        1b0158:	e5810000 	str	r0, [r1]
        1b015c:	e088a087 	add	sl, r8, r7, lsl #1
        1b0160:	e59a0004 	ldr	r0, [sl, #4]	; fField4
        1b0164:	e1a00820 	mov	r0, r0, lsr #16
        1b0168:	e1300009 	teq	r0, r9
        1b016c:	1a00002a 	bne	1b021c <TROMDomainManager1K::Collect(long *, long, long, PageTableChunk *)+0xf8>
        1b0170:	e3150001 	tst	r5, #1	; 0x1
        1b0174:	e0880007 	add	r0, r8, r7
        1b0178:	0a00001e 	beq	1b01f8 <TROMDomainManager1K::Collect(long *, long, long, PageTableChunk *)+0xd4>
        1b017c:	e58d0000 	str	r0, [sp]
        1b0180:	e5d0000c 	ldrb	r0, [r0, #12]	; fField12
        1b0184:	e3300000 	teq	r0, #0	; 0x0
        1b0188:	0a000013 	beq	1b01dc <TROMDomainManager1K::Collect(long *, long, long, PageTableChunk *)+0xb8>
        1b018c:	e5d400da 	ldrb	r0, [r4, #218]	; fField218
        1b0190:	e3300000 	teq	r0, #0	; 0x0
        1b0194:	0a00000d 	beq	1b01d0 <TROMDomainManager1K::Collect(long *, long, long, PageTableChunk *)+0xac>
        1b0198:	e3a03001 	mov	r3, #1	; 0x1
        1b019c:	e92d0008 	stmdb	sp!, {r3}
        1b01a0:	e5941040 	ldr	r1, [r4, #64]	; fField64
        1b01a4:	e0811609 	add	r1, r1, r9, lsl #12
        1b01a8:	e1a00004 	mov	r0, r4
        1b01ac:	e3a02000 	mov	r2, #0	; 0x0
        1b01b0:	e5983000 	ldr	r3, [r8]
        1b01b4:	eb68a6bc 	bl	1bd9cac <TUDomainManager::$Remember(unsigned long, unsigned long, unsigned long, unsigned char)>
        1b01b8:	e28dd004 	add	sp, sp, #4	; 0x4
        1b01bc:	e5941040 	ldr	r1, [r4, #64]	; fField64
        1b01c0:	e0810609 	add	r0, r1, r9, lsl #12
        1b01c4:	e0801507 	add	r1, r0, r7, lsl #10
        1b01c8:	e1a00004 	mov	r0, r4
        1b01cc:	eb6589d8 	bl	1b12934 <TROMDomainManager1K::$WriteOutPage(unsigned long)>
        1b01d0:	e3a01000 	mov	r1, #0	; 0x0
        1b01d4:	e59d0000 	ldr	r0, [sp]
        1b01d8:	e5c0100c 	strb	r1, [r0, #12]	; fField12
        1b01dc:	e3a000ff 	mov	r0, #255	; 0xff
        1b01e0:	e5ca0005 	strb	r0, [sl, #5]
        1b01e4:	e5ca0004 	strb	r0, [sl, #4]	; fField4
        1b01e8:	e5940058 	ldr	r0, [r4, #88]	; fField88
        1b01ec:	e2400001 	sub	r0, r0, #1	; 0x1
        1b01f0:	e5840058 	str	r0, [r4, #88]	; fField88
        1b01f4:	ea000008 	b	1b021c <TROMDomainManager1K::Collect(long *, long, long, PageTableChunk *)+0xf8>
        1b01f8:	e5d0000c 	ldrb	r0, [r0, #12]	; fField12
        1b01fc:	e3300000 	teq	r0, #0	; 0x0
        1b0200:	e1a00087 	mov	r0, r7, lsl #1
        1b0204:	03a01002 	moveq	r1, #2	; 0x2
        1b0208:	13a01003 	movne	r1, #3	; 0x3
        1b020c:	e1a00011 	mov	r0, r1, lsl r0
        1b0210:	e5961000 	ldr	r1, [r6]
        1b0214:	e1800001 	orr	r0, r0, r1
        1b0218:	e5860000 	str	r0, [r6]
        1b021c:	e1a050c5 	mov	r5, r5, asr #1
        1b0220:	e2877001 	add	r7, r7, #1	; 0x1
        1b0224:	e3570004 	cmp	r7, #4	; 0x4
        1b0228:	baffffcb 	blt	1b015c <TROMDomainManager1K::Collect(long *, long, long, PageTableChunk *)+0x38>
        1b022c:	e3a00000 	mov	r0, #0	; 0x0
        1b0230:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::FreeSubPages(long, long)
 * Address: 001b0234
 */
TROMDomainManager1K::FreeSubPages(long, long) {
    /*
        1b0234:	e1a0c00d 	mov	ip, sp
        1b0238:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b023c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b0240:	e1a04000 	mov	r4, r0
        1b0244:	e1a05002 	mov	r5, r2
        1b0248:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b024c:	e3a0a000 	mov	sl, #0	; 0x0
        1b0250:	e590004c 	ldr	r0, [r0, #76]	; fField76
        1b0254:	e0807201 	add	r7, r0, r1, lsl #4
        1b0258:	e1a09002 	mov	r9, r2
        1b025c:	e3a06000 	mov	r6, #0	; 0x0
        1b0260:	e0870086 	add	r0, r7, r6, lsl #1
        1b0264:	e5908004 	ldr	r8, [r0, #4]	; fField4
        1b0268:	e1a08828 	mov	r8, r8, lsr #16
        1b026c:	e3150001 	tst	r5, #1	; 0x1
        1b0270:	1248ccff 	subne	ip, r8, #65280	; 0xff00
        1b0274:	133c00ff 	teqne	ip, #255	; 0xff
        1b0278:	0a000017 	beq	1b02dc <TROMDomainManager1K::FreeSubPages(long, long)+0xa8>
        1b027c:	e1a03007 	mov	r3, r7
        1b0280:	e92d0008 	stmdb	sp!, {r3}
        1b0284:	e1a03006 	mov	r3, r6
        1b0288:	e1a02009 	mov	r2, r9
        1b028c:	e28d1004 	add	r1, sp, #4	; 0x4
        1b0290:	e1a00004 	mov	r0, r4
        1b0294:	eb6515fb 	bl	1af5a88 <TROMDomainManager1K::$Collect(long *, long, long, PageTableChunk *)>
        1b0298:	e5bd2004 	ldr	r2, [sp, #4]!	; fField4
        1b029c:	e3320000 	teq	r2, #0	; 0x0
        1b02a0:	1a000005 	bne	1b02bc <TROMDomainManager1K::FreeSubPages(long, long)+0x88>
        1b02a4:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1b02a8:	e0801608 	add	r1, r0, r8, lsl #12
        1b02ac:	e1a00004 	mov	r0, r4
        1b02b0:	e5972000 	ldr	r2, [r7]
        1b02b4:	eb68899e 	bl	1bd2934 <TUDomainManager::$Forget(unsigned long, unsigned long)>
        1b02b8:	ea000007 	b	1b02dc <TROMDomainManager1K::FreeSubPages(long, long)+0xa8>
        1b02bc:	e3a03001 	mov	r3, #1	; 0x1
        1b02c0:	e92d0008 	stmdb	sp!, {r3}
        1b02c4:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1b02c8:	e0801608 	add	r1, r0, r8, lsl #12
        1b02cc:	e1a00004 	mov	r0, r4
        1b02d0:	e5973000 	ldr	r3, [r7]
        1b02d4:	eb68a674 	bl	1bd9cac <TUDomainManager::$Remember(unsigned long, unsigned long, unsigned long, unsigned char)>
        1b02d8:	e28dd004 	add	sp, sp, #4	; 0x4
        1b02dc:	e1a050c5 	mov	r5, r5, asr #1
        1b02e0:	e2866001 	add	r6, r6, #1	; 0x1
        1b02e4:	e3560004 	cmp	r6, #4	; 0x4
        1b02e8:	baffffdc 	blt	1b0260 <TROMDomainManager1K::FreeSubPages(long, long)+0x2c>
        1b02ec:	e1a0000a 	mov	r0, sl
        1b02f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::FreeAnySubPages(long *, long)
 * Address: 001b02f4
 */
TROMDomainManager1K::FreeAnySubPages(long *, long) {
    /*
        1b02f4:	e1a0c00d 	mov	ip, sp
        1b02f8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1b02fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b0300:	e1a04000 	mov	r4, r0
        1b0304:	e1a06001 	mov	r6, r1
        1b0308:	e1a05002 	mov	r5, r2
        1b030c:	e3a08000 	mov	r8, #0	; 0x0
        1b0310:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b0314:	e1a0000d 	mov	r0, sp
        1b0318:	eb688dae 	bl	1bd39d8 <$GetGlobalTime>
        1b031c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b0320:	e59470b8 	ldr	r7, [r4, #184]	; fField184
        1b0324:	e0801007 	add	r1, r0, r7
        1b0328:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1b032c:	eb680985 	bl	1bb2948 <$__rt_udiv>
        1b0330:	e2870011 	add	r0, r7, #17	; 0x11
        1b0334:	e1a07001 	mov	r7, r1
        1b0338:	e58400b8 	str	r0, [r4, #184]	; fField184
        1b033c:	e28dd008 	add	sp, sp, #8	; 0x8
        1b0340:	e1a09001 	mov	r9, r1
        1b0344:	e594104c 	ldr	r1, [r4, #76]	; fField76
        1b0348:	e0811207 	add	r1, r1, r7, lsl #4
        1b034c:	e1a00004 	mov	r0, r4
        1b0350:	eb656458 	bl	1b094b8 <TROMDomainManager1K::$ValidPage(PageTableChunk *)>
        1b0354:	e3300000 	teq	r0, #0	; 0x0
        1b0358:	1a000009 	bne	1b0384 <TROMDomainManager1K::FreeAnySubPages(long *, long)+0x90>
        1b035c:	e2877001 	add	r7, r7, #1	; 0x1
        1b0360:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1b0364:	e1500007 	cmp	r0, r7
        1b0368:	93a07000 	movls	r7, #0	; 0x0
        1b036c:	e1370009 	teq	r7, r9
        1b0370:	1afffff3 	bne	1b0344 <TROMDomainManager1K::FreeAnySubPages(long *, long)+0x50>
        1b0374:	e3380000 	teq	r8, #0	; 0x0
        1b0378:	03a000e9 	moveq	r0, #233	; 0xe9
        1b037c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        1b0380:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1b0384:	e1a02005 	mov	r2, r5
        1b0388:	e5867000 	str	r7, [r6]
        1b038c:	e1a01007 	mov	r1, r7
        1b0390:	e1a00004 	mov	r0, r4
        1b0394:	eb652641 	bl	1af9ca0 <TROMDomainManager1K::$FreeSubPages(long, long)>
        1b0398:	e3a00000 	mov	r0, #0	; 0x0
        1b039c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::__dt(void)
 * Address: 001b03a0
 */
TROMDomainManager1K::~TROMDomainManager1K(void) {
    /*
        1b03a0:	e1a0c00d 	mov	ip, sp
        1b03a4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b03a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b03ac:	e1a04000 	mov	r4, r0
        1b03b0:	e1a05001 	mov	r5, r1
        1b03b4:	e59f0038 	ldr	r0, [pc, #38]	; 1b03f4 <TROMDomainManager1K::__dt(void)+0x54>
        1b03b8:	e5840000 	str	r0, [r4]
        1b03bc:	e5940048 	ldr	r0, [r4, #72]	; fField72
        1b03c0:	e3300000 	teq	r0, #0	; 0x0
        1b03c4:	13a01001 	movne	r1, #1	; 0x1
        1b03c8:	1b68cfa5 	blne	1be4264 <CDynamicArray::$__dt(void)>
        1b03cc:	e594004c 	ldr	r0, [r4, #76]	; fField76
        1b03d0:	eb6874c2 	bl	1bcd6e0 <$__dl(void *)>
        1b03d4:	e1a00004 	mov	r0, r4
        1b03d8:	e3a01000 	mov	r1, #0	; 0x0
        1b03dc:	eb6878cc 	bl	1bce714 <TUDomainManager::$__dt(void)>
        1b03e0:	e3150001 	tst	r5, #1	; 0x1
        1b03e4:	11a00004 	movne	r0, r4
        1b03e8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1b03ec:	1a6874bb 	bne	1bcd6e0 <$__dl(void *)>
        1b03f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1b03f4:	0001ee80 	andeq	lr, r1, r0, lsl #29
    */
}

/**
 * Symbol: TROMDomainManager1K::FindSubPage(long *, long)
 * Address: 001b03f8
 */
TROMDomainManager1K::FindSubPage(long *, long) {
    /*
        1b03f8:	e1a0c00d 	mov	ip, sp
        1b03fc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1b0400:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b0404:	e1a04000 	mov	r4, r0
        1b0408:	e1a06001 	mov	r6, r1
        1b040c:	e1a05002 	mov	r5, r2
        1b0410:	e3e09000 	mvn	r9, #0	; 0x0
        1b0414:	e59000ac 	ldr	r0, [r0, #172]
        1b0418:	e2808001 	add	r8, r0, #1	; 0x1
        1b041c:	e3a07000 	mov	r7, #0	; 0x0
        1b0420:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1b0424:	e3500000 	cmp	r0, #0	; 0x0
        1b0428:	9a00001a 	bls	1b0498 <TROMDomainManager1K::FindSubPage(long *, long)+0xa0>
        1b042c:	e594104c 	ldr	r1, [r4, #76]	; fField76
        1b0430:	e0811207 	add	r1, r1, r7, lsl #4
        1b0434:	e1a00004 	mov	r0, r4
        1b0438:	eb65641e 	bl	1b094b8 <TROMDomainManager1K::$ValidPage(PageTableChunk *)>
        1b043c:	e3300000 	teq	r0, #0	; 0x0
        1b0440:	0a00000c 	beq	1b0478 <TROMDomainManager1K::FindSubPage(long *, long)+0x80>
        1b0444:	e1a01007 	mov	r1, r7
        1b0448:	e1a00004 	mov	r0, r4
        1b044c:	eb655fed 	bl	1b08408 <TROMDomainManager1K::$SubPageMap(long)>
        1b0450:	e0000005 	and	r0, r0, r5
        1b0454:	e1300005 	teq	r0, r5
        1b0458:	1a000006 	bne	1b0478 <TROMDomainManager1K::FindSubPage(long *, long)+0x80>
        1b045c:	e0840100 	add	r0, r4, r0, lsl #2
        1b0460:	e590006c 	ldr	r0, [r0, #108]	; fField108
        1b0464:	e1500008 	cmp	r0, r8
        1b0468:	2a000002 	bcs	1b0478 <TROMDomainManager1K::FindSubPage(long *, long)+0x80>
        1b046c:	e1b08000 	movs	r8, r0
        1b0470:	e1a09007 	mov	r9, r7
        1b0474:	0a000003 	beq	1b0488 <TROMDomainManager1K::FindSubPage(long *, long)+0x90>
        1b0478:	e2877001 	add	r7, r7, #1	; 0x1
        1b047c:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1b0480:	e1500007 	cmp	r0, r7
        1b0484:	8affffe8 	bhi	1b042c <TROMDomainManager1K::FindSubPage(long *, long)+0x34>
        1b0488:	e3590000 	cmp	r9, #0	; 0x0
        1b048c:	a3a00000 	movge	r0, #0	; 0x0
        1b0490:	a5869000 	strge	r9, [r6]
        1b0494:	a91babf0 	ldmgedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1b0498:	e3a000e8 	mov	r0, #232	; 0xe8
        1b049c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        1b04a0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)
 * Address: 001b04a4
 */
TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *) {
    /*
        1b04a4:	e1a0c00d 	mov	ip, sp
        1b04a8:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b04ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b04b0:	e1a04000 	mov	r4, r0
        1b04b4:	e1a05001 	mov	r5, r1
        1b04b8:	e1a06002 	mov	r6, r2
        1b04bc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1b04c0:	e3a00003 	mov	r0, #3	; 0x3
        1b04c4:	e000a521 	and	sl, r0, r1, lsr #10
        1b04c8:	e3a07000 	mov	r7, #0	; 0x0
        1b04cc:	e1a00004 	mov	r0, r4
        1b04d0:	e3a01001 	mov	r1, #1	; 0x1
        1b04d4:	eb659995 	bl	1b16b30 <TROMDomainManager1K::$DoAcquireDatabase(unsigned char)>
        1b04d8:	e1a00004 	mov	r0, r4
        1b04dc:	eb654f5c 	bl	1b04254 <TROMDomainManager1K::$RestrictToInternalWorkingSet(void)>
        1b04e0:	e1a01005 	mov	r1, r5
        1b04e4:	e58d0000 	str	r0, [sp]
        1b04e8:	e1a00004 	mov	r0, r4
        1b04ec:	eb6563ef 	bl	1b094b0 <TROMDomainManager1K::$VAddrToPageIndex(unsigned long)>
        1b04f0:	e28490bc 	add	r9, r4, #188	; 0xbc
        1b04f4:	e2848004 	add	r8, r4, #4	; 0x4
        1b04f8:	e58d0008 	str	r0, [sp, #8]	; fField8
        1b04fc:	e33000ff 	teq	r0, #255	; 0xff
        1b0500:	1a000058 	bne	1b0668 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x1c4>
        1b0504:	e3a07001 	mov	r7, #1	; 0x1
        1b0508:	e1a02a17 	mov	r2, r7, lsl sl
        1b050c:	e1a0a002 	mov	sl, r2
        1b0510:	e28d1008 	add	r1, sp, #8	; 0x8
        1b0514:	e1a00004 	mov	r0, r4
        1b0518:	eb6521bb 	bl	1af8c0c <TROMDomainManager1K::$FindSubPage(long *, long)>
        1b051c:	e1b07000 	movs	r7, r0
        1b0520:	0a00004a 	beq	1b0650 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x1ac>
        1b0524:	e59d0000 	ldr	r0, [sp]
        1b0528:	e3300000 	teq	r0, #0	; 0x0
        1b052c:	0a000004 	beq	1b0544 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0xa0>
        1b0530:	e1a0200a 	mov	r2, sl
        1b0534:	e28d1008 	add	r1, sp, #8	; 0x8
        1b0538:	e1a00004 	mov	r0, r4
        1b053c:	eb6525d3 	bl	1af9c90 <TROMDomainManager1K::$FreeAnySubPages(long *, long)>
        1b0540:	e1a07000 	mov	r7, r0
        1b0544:	e3370000 	teq	r7, #0	; 0x0
        1b0548:	0a000040 	beq	1b0650 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x1ac>
        1b054c:	e1a00004 	mov	r0, r4
        1b0550:	eb654f3f 	bl	1b04254 <TROMDomainManager1K::$RestrictToInternalWorkingSet(void)>
        1b0554:	e3300000 	teq	r0, #0	; 0x0
        1b0558:	1a000014 	bne	1b05b0 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x10c>
        1b055c:	e1a00008 	mov	r0, r8
        1b0560:	eb68a5cc 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1b0564:	e28d1004 	add	r1, sp, #4	; 0x4
        1b0568:	e1a00004 	mov	r0, r4
        1b056c:	e3a02001 	mov	r2, #1	; 0x1
        1b0570:	eb6888ff 	bl	1bd2974 <TUDomainManager::$Get(unsigned long &, int)>
        1b0574:	e1a07000 	mov	r7, r0
        1b0578:	e280cd9d 	add	ip, r0, #10048	; 0x2740
        1b057c:	e37c0003 	cmn	ip, #3	; 0x3
        1b0580:	01a00009 	moveq	r0, r9
        1b0584:	0b688d13 	bleq	1bd39d8 <$GetGlobalTime>
        1b0588:	e1a00004 	mov	r0, r4
        1b058c:	e3a01001 	mov	r1, #1	; 0x1
        1b0590:	eb659966 	bl	1b16b30 <TROMDomainManager1K::$DoAcquireDatabase(unsigned char)>
        1b0594:	e3370000 	teq	r7, #0	; 0x0
        1b0598:	1a000004 	bne	1b05b0 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x10c>
        1b059c:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        1b05a0:	e28d1008 	add	r1, sp, #8	; 0x8
        1b05a4:	e1a00004 	mov	r0, r4
        1b05a8:	eb6508d6 	bl	1af2908 <TROMDomainManager1K::$AddPage(long *, unsigned long)>
        1b05ac:	e1a07000 	mov	r7, r0
        1b05b0:	e3370000 	teq	r7, #0	; 0x0
        1b05b4:	0a000025 	beq	1b0650 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x1ac>
        1b05b8:	e1a0200a 	mov	r2, sl
        1b05bc:	e28d1008 	add	r1, sp, #8	; 0x8
        1b05c0:	e1a00004 	mov	r0, r4
        1b05c4:	eb6525b1 	bl	1af9c90 <TROMDomainManager1K::$FreeAnySubPages(long *, long)>
        1b05c8:	e1b07000 	movs	r7, r0
        1b05cc:	0a00001f 	beq	1b0650 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x1ac>
        1b05d0:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b05d4:	e3a00000 	mov	r0, #0	; 0x0
        1b05d8:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b05dc:	e58d0000 	str	r0, [sp]
        1b05e0:	e89d5000 	ldmia	sp, {ip, lr}
        1b05e4:	e8895000 	stmia	r9, {ip, lr}
        1b05e8:	e1a00004 	mov	r0, r4
        1b05ec:	eb654f18 	bl	1b04254 <TROMDomainManager1K::$RestrictToInternalWorkingSet(void)>
        1b05f0:	e3300000 	teq	r0, #0	; 0x0
        1b05f4:	1a000014 	bne	1b064c <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x1a8>
        1b05f8:	e1a00008 	mov	r0, r8
        1b05fc:	eb68a5a5 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1b0600:	e28d100c 	add	r1, sp, #12	; 0xc
        1b0604:	e1a00004 	mov	r0, r4
        1b0608:	e3a02001 	mov	r2, #1	; 0x1
        1b060c:	eb6888d8 	bl	1bd2974 <TUDomainManager::$Get(unsigned long &, int)>
        1b0610:	e1a07000 	mov	r7, r0
        1b0614:	e280cd9d 	add	ip, r0, #10048	; 0x2740
        1b0618:	e37c0003 	cmn	ip, #3	; 0x3
        1b061c:	01a00009 	moveq	r0, r9
        1b0620:	0b688cec 	bleq	1bd39d8 <$GetGlobalTime>
        1b0624:	e1a00004 	mov	r0, r4
        1b0628:	e3a01001 	mov	r1, #1	; 0x1
        1b062c:	eb65993f 	bl	1b16b30 <TROMDomainManager1K::$DoAcquireDatabase(unsigned char)>
        1b0630:	e3370000 	teq	r7, #0	; 0x0
        1b0634:	1a000004 	bne	1b064c <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x1a8>
        1b0638:	e59d200c 	ldr	r2, [sp, #12]	; fField12
        1b063c:	e28d1010 	add	r1, sp, #16	; 0x10
        1b0640:	e1a00004 	mov	r0, r4
        1b0644:	eb6508af 	bl	1af2908 <TROMDomainManager1K::$AddPage(long *, unsigned long)>
        1b0648:	e1a07000 	mov	r7, r0
        1b064c:	e28dd008 	add	sp, sp, #8	; 0x8
        1b0650:	e1a00004 	mov	r0, r4
        1b0654:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1b0658:	eb654eff 	bl	1b0425c <TROMDomainManager1K::$RestrictPage(long)>
        1b065c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        1b0660:	e5860000 	str	r0, [r6]
        1b0664:	ea0000e2 	b	1b09f4 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x550>
        1b0668:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b066c:	e5860000 	str	r0, [r6]
        1b0670:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1b0674:	e0450000 	sub	r0, r5, r0
        1b0678:	e1a00620 	mov	r0, r0, lsr #12
        1b067c:	e594204c 	ldr	r2, [r4, #76]	; fField76
        1b0680:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b0684:	e0822201 	add	r2, r2, r1, lsl #4
        1b0688:	e082208a 	add	r2, r2, sl, lsl #1
        1b068c:	e5922004 	ldr	r2, [r2, #4]	; fField4
        1b0690:	e1300822 	teq	r0, r2, lsr #16
        1b0694:	1a00006a 	bne	1b0844 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x3a0>
        1b0698:	e3a07001 	mov	r7, #1	; 0x1
        1b069c:	e3a09000 	mov	r9, #0	; 0x0
        1b06a0:	e52d906c 	str	r9, [sp, -#108]!	; fField108
        1b06a4:	e28d0008 	add	r0, sp, #8	; 0x8
        1b06a8:	eb6808b1 	bl	1bb2974 <$setjmp>
        1b06ac:	e3300000 	teq	r0, #0	; 0x0
        1b06b0:	1a000002 	bne	1b06c0 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x21c>
        1b06b4:	e1a0000d 	mov	r0, sp
        1b06b8:	eb68be6f 	bl	1be007c <$AddExceptionHandler>
        1b06bc:	ea000008 	b	1b06e4 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x240>
        1b06c0:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        1b06c4:	e59f10c4 	ldr	r1, [pc, #c4]	; 1b0790 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x2ec>
        1b06c8:	e5911000 	ldr	r1, [r1]
        1b06cc:	eb68cab0 	bl	1be3194 <$Subexception>
        1b06d0:	e3300000 	teq	r0, #0	; 0x0
        1b06d4:	13a07000 	movne	r7, #0	; 0x0
        1b06d8:	1a000001 	bne	1b06e4 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x240>
        1b06dc:	e1a0000d 	mov	r0, sp
        1b06e0:	eb68c69b 	bl	1be2154 <$NextHandler>
        1b06e4:	e1a0000d 	mov	r0, sp
        1b06e8:	eb68c272 	bl	1be10b8 <$ExitHandler>
        1b06ec:	e28dd06c 	add	sp, sp, #108	; 0x6c
        1b06f0:	e3370000 	teq	r7, #0	; 0x0
        1b06f4:	1a000026 	bne	1b0794 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x2f0>
        1b06f8:	e1a00004 	mov	r0, r4
        1b06fc:	e3a0200f 	mov	r2, #15	; 0xf
        1b0700:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b0704:	eb652565 	bl	1af9ca0 <TROMDomainManager1K::$FreeSubPages(long, long)>
        1b0708:	e59da00c 	ldr	sl, [sp, #12]	; fField12
        1b070c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        1b0710:	e790020a 	ldr	r0, [r0, sl, lsl #4]	; fField4
        1b0714:	e3a07000 	mov	r7, #0	; 0x0
        1b0718:	e3300000 	teq	r0, #0	; 0x0
        1b071c:	0a000009 	beq	1b0748 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x2a4>
        1b0720:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b0724:	e5cd9004 	strb	r9, [sp, #4]	; fField4
        1b0728:	e58d0000 	str	r0, [sp]
        1b072c:	e200000f 	and	r0, r0, #15	; 0xf
        1b0730:	e330000c 	teq	r0, #12	; 0xc
        1b0734:	03a07001 	moveq	r7, #1	; 0x1
        1b0738:	e1a0000d 	mov	r0, sp
        1b073c:	e3a01000 	mov	r1, #0	; 0x0
        1b0740:	eb6877f7 	bl	1bce724 <TUObject::$__dt(void)>
        1b0744:	e28dd008 	add	sp, sp, #8	; 0x8
        1b0748:	e3370000 	teq	r7, #0	; 0x0
        1b074c:	05940060 	ldreq	r0, [r4, #96]	; fField96
        1b0750:	02400001 	subeq	r0, r0, #1	; 0x1
        1b0754:	05840060 	streq	r0, [r4, #96]	; fField96
        1b0758:	e594005c 	ldr	r0, [r4, #92]	; fField92
        1b075c:	e2400001 	sub	r0, r0, #1	; 0x1
        1b0760:	e1a0100a 	mov	r1, sl
        1b0764:	e584005c 	str	r0, [r4, #92]	; fField92
        1b0768:	e1a00004 	mov	r0, r4
        1b076c:	eb6514c4 	bl	1af5a84 <TROMDomainManager1K::$ClearTableEntry(long)>
        1b0770:	e1a00008 	mov	r0, r8
        1b0774:	eb68a547 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1b0778:	e1a02006 	mov	r2, r6
        1b077c:	e1a01005 	mov	r1, r5
        1b0780:	e1a00004 	mov	r0, r4
        1b0784:	e51b302c 	ldr	r3, [fp, -#44]
        1b0788:	eb657c13 	bl	1b0f7dc <TROMDomainManager1K::$GetSubPage(unsigned long, long *, PackageChunk *)>
        1b078c:	ea000029 	b	1b0838 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x394>
        1b0790:	003712b8 	ldreqh	r1, [r7], -r8
        1b0794:	e5d400d9 	ldrb	r0, [r4, #217]	; fField217
        1b0798:	e3300000 	teq	r0, #0	; 0x0
        1b079c:	0a000018 	beq	1b0804 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x360>
        1b07a0:	e3a07001 	mov	r7, #1	; 0x1
        1b07a4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        1b07a8:	e594104c 	ldr	r1, [r4, #76]	; fField76
        1b07ac:	e0810200 	add	r0, r1, r0, lsl #4
        1b07b0:	e080000a 	add	r0, r0, sl
        1b07b4:	e5c0700c 	strb	r7, [r0, #12]	; fField12
        1b07b8:	e3a03001 	mov	r3, #1	; 0x1
        1b07bc:	e92d0008 	stmdb	sp!, {r3}
        1b07c0:	e1a0200a 	mov	r2, sl
        1b07c4:	e1a00004 	mov	r0, r4
        1b07c8:	e3a03000 	mov	r3, #0	; 0x0
        1b07cc:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        1b07d0:	eb658029 	bl	1b1087c <TROMDomainManager1K::$MakePermissions(long, long, unsigned char)>
        1b07d4:	e1a02000 	mov	r2, r0
        1b07d8:	e594104c 	ldr	r1, [r4, #76]	; fField76
        1b07dc:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        1b07e0:	e7913200 	ldr	r3, [r1, r0, lsl #4]	; fField4
        1b07e4:	e1a01005 	mov	r1, r5
        1b07e8:	e1a00004 	mov	r0, r4
        1b07ec:	eb68a52e 	bl	1bd9cac <TUDomainManager::$Remember(unsigned long, unsigned long, unsigned long, unsigned char)>
        1b07f0:	e28dd004 	add	sp, sp, #4	; 0x4
        1b07f4:	e1a04000 	mov	r4, r0
        1b07f8:	e51b302c 	ldr	r3, [fp, -#44]
        1b07fc:	e5c37030 	strb	r7, [r3, #48]	; fField48
        1b0800:	ea000000 	b	1b0808 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x364>
        1b0804:	e59f4030 	ldr	r4, [pc, #30]	; 1b083c <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x398>
        1b0808:	e3a000ff 	mov	r0, #255	; 0xff
        1b080c:	e5860000 	str	r0, [r6]
        1b0810:	e1a00008 	mov	r0, r8
        1b0814:	eb68a51f 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1b0818:	e3340000 	teq	r4, #0	; 0x0
        1b081c:	0a000004 	beq	1b0834 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x390>
        1b0820:	e1a01004 	mov	r1, r4
        1b0824:	e59f0014 	ldr	r0, [pc, #14]	; 1b0840 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x39c>
        1b0828:	e5900000 	ldr	r0, [r0]
        1b082c:	e3a02000 	mov	r2, #0	; 0x0
        1b0830:	eb68ca59 	bl	1be319c <$Throw>
        1b0834:	e1a00009 	mov	r0, r9
        1b0838:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1b083c:	ffffd8b3 	swinv	0x00ffd8b3
        1b0840:	003712b4 	ldreqh	r1, [r7], -r4
        1b0844:	e1a00004 	mov	r0, r4
        1b0848:	eb654e83 	bl	1b0425c <TROMDomainManager1K::$RestrictPage(long)>
        1b084c:	e1a0200a 	mov	r2, sl
        1b0850:	e1a00004 	mov	r0, r4
        1b0854:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b0858:	eb655ee9 	bl	1b08404 <TROMDomainManager1K::$SubPageFree(long, long)>
        1b085c:	e3300000 	teq	r0, #0	; 0x0
        1b0860:	1a000062 	bne	1b09f0 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x54c>
        1b0864:	e3a06001 	mov	r6, #1	; 0x1
        1b0868:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b086c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        1b0870:	e0800201 	add	r0, r0, r1, lsl #4
        1b0874:	e080008a 	add	r0, r0, sl, lsl #1
        1b0878:	e5902004 	ldr	r2, [r0, #4]	; fField4
        1b087c:	e1a02822 	mov	r2, r2, lsr #16
        1b0880:	e1a00004 	mov	r0, r4
        1b0884:	eb653dc2 	bl	1afff94 <TROMDomainManager1K::$MakeSubPageBitMap(long, unsigned short)>
        1b0888:	e1a02000 	mov	r2, r0
        1b088c:	e1a0a000 	mov	sl, r0
        1b0890:	e1a0100d 	mov	r1, sp
        1b0894:	e1a00004 	mov	r0, r4
        1b0898:	eb6520db 	bl	1af8c0c <TROMDomainManager1K::$FindSubPage(long *, long)>
        1b089c:	e1b07000 	movs	r7, r0
        1b08a0:	0a00004d 	beq	1b09dc <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x538>
        1b08a4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1b08a8:	e3300000 	teq	r0, #0	; 0x0
        1b08ac:	0a000006 	beq	1b08cc <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x428>
        1b08b0:	e1a0200a 	mov	r2, sl
        1b08b4:	e1a00004 	mov	r0, r4
        1b08b8:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b08bc:	eb6524f7 	bl	1af9ca0 <TROMDomainManager1K::$FreeSubPages(long, long)>
        1b08c0:	e1a07000 	mov	r7, r0
        1b08c4:	e3a06000 	mov	r6, #0	; 0x0
        1b08c8:	ea00003f 	b	1b09cc <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x528>
        1b08cc:	e1a00008 	mov	r0, r8
        1b08d0:	eb68a4f0 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1b08d4:	e1a00004 	mov	r0, r4
        1b08d8:	eb654e5d 	bl	1b04254 <TROMDomainManager1K::$RestrictToInternalWorkingSet(void)>
        1b08dc:	e3300000 	teq	r0, #0	; 0x0
        1b08e0:	1a000008 	bne	1b0908 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x464>
        1b08e4:	e28d1008 	add	r1, sp, #8	; 0x8
        1b08e8:	e1a00004 	mov	r0, r4
        1b08ec:	e3a02002 	mov	r2, #2	; 0x2
        1b08f0:	eb68881f 	bl	1bd2974 <TUDomainManager::$Get(unsigned long &, int)>
        1b08f4:	e1a07000 	mov	r7, r0
        1b08f8:	e280cd9d 	add	ip, r0, #10048	; 0x2740
        1b08fc:	e37c0003 	cmn	ip, #3	; 0x3
        1b0900:	01a00009 	moveq	r0, r9
        1b0904:	0b688c33 	bleq	1bd39d8 <$GetGlobalTime>
        1b0908:	e1a00004 	mov	r0, r4
        1b090c:	e3a01001 	mov	r1, #1	; 0x1
        1b0910:	eb659886 	bl	1b16b30 <TROMDomainManager1K::$DoAcquireDatabase(unsigned char)>
        1b0914:	e3370000 	teq	r7, #0	; 0x0
        1b0918:	1a000005 	bne	1b0934 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x490>
        1b091c:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        1b0920:	e1a0100d 	mov	r1, sp
        1b0924:	e1a00004 	mov	r0, r4
        1b0928:	eb6507f6 	bl	1af2908 <TROMDomainManager1K::$AddPage(long *, unsigned long)>
        1b092c:	e1a07000 	mov	r7, r0
        1b0930:	ea000025 	b	1b09cc <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x528>
        1b0934:	e1a0200a 	mov	r2, sl
        1b0938:	e1a00004 	mov	r0, r4
        1b093c:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b0940:	eb6524d6 	bl	1af9ca0 <TROMDomainManager1K::$FreeSubPages(long, long)>
        1b0944:	e1b07000 	movs	r7, r0
        1b0948:	0a000028 	beq	1b09f0 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x54c>
        1b094c:	e24dd008 	sub	sp, sp, #8	; 0x8
        1b0950:	e3a00000 	mov	r0, #0	; 0x0
        1b0954:	e58d0004 	str	r0, [sp, #4]	; fField4
        1b0958:	e58d0000 	str	r0, [sp]
        1b095c:	e89d5000 	ldmia	sp, {ip, lr}
        1b0960:	e8895000 	stmia	r9, {ip, lr}
        1b0964:	e1a00004 	mov	r0, r4
        1b0968:	eb654e39 	bl	1b04254 <TROMDomainManager1K::$RestrictToInternalWorkingSet(void)>
        1b096c:	e3300000 	teq	r0, #0	; 0x0
        1b0970:	1a000014 	bne	1b09c8 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x524>
        1b0974:	e1a00008 	mov	r0, r8
        1b0978:	eb68a4c6 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1b097c:	e28d1010 	add	r1, sp, #16	; 0x10
        1b0980:	e1a00004 	mov	r0, r4
        1b0984:	e3a02002 	mov	r2, #2	; 0x2
        1b0988:	eb6887f9 	bl	1bd2974 <TUDomainManager::$Get(unsigned long &, int)>
        1b098c:	e1a07000 	mov	r7, r0
        1b0990:	e280cd9d 	add	ip, r0, #10048	; 0x2740
        1b0994:	e37c0003 	cmn	ip, #3	; 0x3
        1b0998:	01a00009 	moveq	r0, r9
        1b099c:	0b688c0d 	bleq	1bd39d8 <$GetGlobalTime>
        1b09a0:	e1a00004 	mov	r0, r4
        1b09a4:	e3a01001 	mov	r1, #1	; 0x1
        1b09a8:	eb659860 	bl	1b16b30 <TROMDomainManager1K::$DoAcquireDatabase(unsigned char)>
        1b09ac:	e3370000 	teq	r7, #0	; 0x0
        1b09b0:	1a000004 	bne	1b09c8 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x524>
        1b09b4:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        1b09b8:	e28d1008 	add	r1, sp, #8	; 0x8
        1b09bc:	e1a00004 	mov	r0, r4
        1b09c0:	eb6507d0 	bl	1af2908 <TROMDomainManager1K::$AddPage(long *, unsigned long)>
        1b09c4:	e1a07000 	mov	r7, r0
        1b09c8:	e28dd008 	add	sp, sp, #8	; 0x8
        1b09cc:	e3370000 	teq	r7, #0	; 0x0
        1b09d0:	1a000006 	bne	1b09f0 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x54c>
        1b09d4:	e3360000 	teq	r6, #0	; 0x0
        1b09d8:	0a000004 	beq	1b09f0 <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x54c>
        1b09dc:	e1a0300a 	mov	r3, sl
        1b09e0:	e1a00004 	mov	r0, r4
        1b09e4:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        1b09e8:	e59d2000 	ldr	r2, [sp]
        1b09ec:	eb65565d 	bl	1b06368 <TROMDomainManager1K::$ShuffleSubPages(long, long, long)>
        1b09f0:	e28dd004 	add	sp, sp, #4	; 0x4
        1b09f4:	e3370000 	teq	r7, #0	; 0x0
        1b09f8:	1a000003 	bne	1b0a0c <TROMDomainManager1K::GetSubPage(unsigned long, long *, PackageChunk *)+0x568>
        1b09fc:	e1a02005 	mov	r2, r5
        1b0a00:	e1a00004 	mov	r0, r4
        1b0a04:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        1b0a08:	eb6507c1 	bl	1af2914 <TROMDomainManager1K::$AddPageTableEntry(long, unsigned long)>
        1b0a0c:	e1a00008 	mov	r0, r8
        1b0a10:	eb68a4a0 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1b0a14:	e1a00007 	mov	r0, r7
        1b0a18:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::SubPageFree(long, long)
 * Address: 001b0a1c
 */
TROMDomainManager1K::SubPageFree(long, long) {
    /*
        1b0a1c:	e590004c 	ldr	r0, [r0, #76]	; fField76
        1b0a20:	e0800201 	add	r0, r0, r1, lsl #4
        1b0a24:	e0800082 	add	r0, r0, r2, lsl #1
        1b0a28:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1b0a2c:	e1a00820 	mov	r0, r0, lsr #16
        1b0a30:	e240ccff 	sub	ip, r0, #65280	; 0xff00
        1b0a34:	e33c00ff 	teq	ip, #255	; 0xff
        1b0a38:	13a00000 	movne	r0, #0	; 0x0
        1b0a3c:	03a00001 	moveq	r0, #1	; 0x1
        1b0a40:	e20000ff 	and	r0, r0, #255	; 0xff
        1b0a44:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TROMDomainManager1K::MakeSubPageBitMap(long, unsigned short)
 * Address: 001b0a48
 */
TROMDomainManager1K::MakeSubPageBitMap(long, unsigned short) {
    /*
        1b0a48:	e92d4000 	stmdb	sp!, {lr}
        1b0a4c:	e1a03802 	mov	r3, r2, lsl #16
        1b0a50:	e1a03823 	mov	r3, r3, lsr #16
        1b0a54:	e590004c 	ldr	r0, [r0, #76]	; fField76
        1b0a58:	e0802201 	add	r2, r0, r1, lsl #4
        1b0a5c:	e3a00000 	mov	r0, #0	; 0x0
        1b0a60:	e3a01000 	mov	r1, #0	; 0x0
        1b0a64:	e3a0c001 	mov	ip, #1	; 0x1
        1b0a68:	e082e081 	add	lr, r2, r1, lsl #1
        1b0a6c:	e59ee004 	ldr	lr, [lr, #4]	; fField4
        1b0a70:	e133082e 	teq	r3, lr, lsr #16
        1b0a74:	0180011c 	orreq	r0, r0, ip, lsl r1
        1b0a78:	e2811001 	add	r1, r1, #1	; 0x1
        1b0a7c:	e3510004 	cmp	r1, #4	; 0x4
        1b0a80:	bafffff8 	blt	1b0a68 <TROMDomainManager1K::MakeSubPageBitMap(long, unsigned short)+0x20>
        1b0a84:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::ShuffleSubPages(long, long, long)
 * Address: 001b0a88
 */
TROMDomainManager1K::ShuffleSubPages(long, long, long) {
    /*
        1b0a88:	e1a0c00d 	mov	ip, sp
        1b0a8c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b0a90:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b0a94:	e1a04000 	mov	r4, r0
        1b0a98:	e1a06001 	mov	r6, r1
        1b0a9c:	e1a05002 	mov	r5, r2
        1b0aa0:	e1a07003 	mov	r7, r3
        1b0aa4:	e3a09000 	mov	r9, #0	; 0x0
        1b0aa8:	e3a08000 	mov	r8, #0	; 0x0
        1b0aac:	e3a00000 	mov	r0, #0	; 0x0
        1b0ab0:	e1a01003 	mov	r1, r3
        1b0ab4:	e3a0a003 	mov	sl, #3	; 0x3
        1b0ab8:	e3a0e002 	mov	lr, #2	; 0x2
        1b0abc:	e3a0c000 	mov	ip, #0	; 0x0
        1b0ac0:	e3110001 	tst	r1, #1	; 0x1
        1b0ac4:	0a000015 	beq	1b0b20 <TROMDomainManager1K::ShuffleSubPages(long, long, long)+0x98>
        1b0ac8:	e594204c 	ldr	r2, [r4, #76]	; fField76
        1b0acc:	e0822206 	add	r2, r2, r6, lsl #4
        1b0ad0:	e0823080 	add	r3, r2, r0, lsl #1
        1b0ad4:	e5939004 	ldr	r9, [r3, #4]	; fField4
        1b0ad8:	e1a09829 	mov	r9, r9, lsr #16
        1b0adc:	e0822000 	add	r2, r2, r0
        1b0ae0:	e5d2200c 	ldrb	r2, [r2, #12]	; fField12
        1b0ae4:	e3320000 	teq	r2, #0	; 0x0
        1b0ae8:	e1a02080 	mov	r2, r0, lsl #1
        1b0aec:	01a0221e 	moveq	r2, lr, lsl r2
        1b0af0:	11a0221a 	movne	r2, sl, lsl r2
        1b0af4:	e1828008 	orr	r8, r2, r8
        1b0af8:	e3a020ff 	mov	r2, #255	; 0xff
        1b0afc:	e5c32005 	strb	r2, [r3, #5]
        1b0b00:	e5c32004 	strb	r2, [r3, #4]	; fField4
        1b0b04:	e594204c 	ldr	r2, [r4, #76]	; fField76
        1b0b08:	e0822206 	add	r2, r2, r6, lsl #4
        1b0b0c:	e0822000 	add	r2, r2, r0
        1b0b10:	e5c2c00c 	strb	ip, [r2, #12]	; fField12
        1b0b14:	e5942058 	ldr	r2, [r4, #88]	; fField88
        1b0b18:	e2422001 	sub	r2, r2, #1	; 0x1
        1b0b1c:	e5842058 	str	r2, [r4, #88]	; fField88
        1b0b20:	e1a010c1 	mov	r1, r1, asr #1
        1b0b24:	e2800001 	add	r0, r0, #1	; 0x1
        1b0b28:	e3500004 	cmp	r0, #4	; 0x4
        1b0b2c:	baffffe3 	blt	1b0ac0 <TROMDomainManager1K::ShuffleSubPages(long, long, long)+0x38>
        1b0b30:	eb0787e2 	bl	392ac0 <EnterAtomic>
        1b0b34:	e5941040 	ldr	r1, [r4, #64]	; fField64
        1b0b38:	e0811609 	add	r1, r1, r9, lsl #12
        1b0b3c:	e3a00048 	mov	r0, #72	; 0x48
        1b0b40:	eb07f58b 	bl	3ae174 <GenericSWI>
        1b0b44:	e594004c 	ldr	r0, [r4, #76]	; fField76
        1b0b48:	e7902206 	ldr	r2, [r0, r6, lsl #4]	; fField4
        1b0b4c:	e7901205 	ldr	r1, [r0, r5, lsl #4]	; fField4
        1b0b50:	e1a03007 	mov	r3, r7
        1b0b54:	e1a00004 	mov	r0, r4
        1b0b58:	eb687f3d 	bl	1bd0854 <TUDomainManager::$CopyPhysPg(unsigned long, unsigned long, unsigned long)>
        1b0b5c:	e1a06000 	mov	r6, r0
        1b0b60:	eb0787ed 	bl	392b1c <ExitAtomic>
        1b0b64:	e3360000 	teq	r6, #0	; 0x0
        1b0b68:	1a000015 	bne	1b0bc4 <TROMDomainManager1K::ShuffleSubPages(long, long, long)+0x13c>
        1b0b6c:	e3a03001 	mov	r3, #1	; 0x1
        1b0b70:	e92d0008 	stmdb	sp!, {r3}
        1b0b74:	e5941040 	ldr	r1, [r4, #64]	; fField64
        1b0b78:	e0811609 	add	r1, r1, r9, lsl #12
        1b0b7c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        1b0b80:	e7903205 	ldr	r3, [r0, r5, lsl #4]	; fField4
        1b0b84:	e1a02008 	mov	r2, r8
        1b0b88:	e1a00004 	mov	r0, r4
        1b0b8c:	eb68a446 	bl	1bd9cac <TUDomainManager::$Remember(unsigned long, unsigned long, unsigned long, unsigned char)>
        1b0b90:	e28dd004 	add	sp, sp, #4	; 0x4
        1b0b94:	e1b06000 	movs	r6, r0
        1b0b98:	0a000004 	beq	1b0bb0 <TROMDomainManager1K::ShuffleSubPages(long, long, long)+0x128>
        1b0b9c:	e1a01006 	mov	r1, r6
        1b0ba0:	e59f0024 	ldr	r0, [pc, #24]	; 1b0bcc <TROMDomainManager1K::ShuffleSubPages(long, long, long)+0x144>
        1b0ba4:	e5900000 	ldr	r0, [r0]
        1b0ba8:	e3a02000 	mov	r2, #0	; 0x0
        1b0bac:	eb68c97a 	bl	1be319c <$Throw>
        1b0bb0:	e1a03008 	mov	r3, r8
        1b0bb4:	e1a02009 	mov	r2, r9
        1b0bb8:	e1a01005 	mov	r1, r5
        1b0bbc:	e1a00004 	mov	r0, r4
        1b0bc0:	eb650754 	bl	1af2918 <TROMDomainManager1K::$AddPageTableEntry(long, unsigned short, long)>
        1b0bc4:	e1a00006 	mov	r0, r6
        1b0bc8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1b0bcc:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TROMDomainManager1K::ReleaseRequest(int)
 * Address: 001b0bd0
 */
TROMDomainManager1K::ReleaseRequest(int) {
    /*
        1b0bd0:	e1a0c00d 	mov	ip, sp
        1b0bd4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b0bd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b0bdc:	e1a04000 	mov	r4, r0
        1b0be0:	e1a05001 	mov	r5, r1
        1b0be4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b0be8:	e3a060e9 	mov	r6, #233	; 0xe9
        1b0bec:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
        1b0bf0:	e2800004 	add	r0, r0, #4	; 0x4
        1b0bf4:	e1a07000 	mov	r7, r0
        1b0bf8:	e3a01001 	mov	r1, #1	; 0x1
        1b0bfc:	eb6876d4 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1b0c00:	e3300000 	teq	r0, #0	; 0x0
        1b0c04:	1a00000d 	bne	1b0c40 <TROMDomainManager1K::ReleaseRequest(int)+0x70>
        1b0c08:	e28400bc 	add	r0, r4, #188	; 0xbc
        1b0c0c:	eb688b71 	bl	1bd39d8 <$GetGlobalTime>
        1b0c10:	e1a00007 	mov	r0, r7
        1b0c14:	eb68a41f 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1b0c18:	e3350001 	teq	r5, #1	; 0x1
        1b0c1c:	13350000 	teqne	r5, #0	; 0x0
        1b0c20:	03a00001 	moveq	r0, #1	; 0x1
        1b0c24:	05c400cd 	streqb	r0, [r4, #205]	; fField205
        1b0c28:	e1a0100d 	mov	r1, sp
        1b0c2c:	e1a00004 	mov	r0, r4
        1b0c30:	eb65284a 	bl	1afad60 <TROMDomainManager1K::$GetWorkingSetPage(unsigned long *)>
        1b0c34:	e1b06000 	movs	r6, r0
        1b0c38:	059d0000 	ldreq	r0, [sp]
        1b0c3c:	0b68a414 	bleq	1bd9c94 <$Release__15TUDomainManagerSFUl>
        1b0c40:	e3a00000 	mov	r0, #0	; 0x0
        1b0c44:	e5c400cd 	strb	r0, [r4, #205]	; fField205
        1b0c48:	e1a00006 	mov	r0, r6
        1b0c4c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::MakePermissions(long, long, unsigned char)
 * Address: 001b0c50
 */
TROMDomainManager1K::MakePermissions(long, long, unsigned char) {
    /*
        1b0c50:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        1b0c54:	e1a0c000 	mov	ip, r0
        1b0c58:	e31300ff 	tst	r3, #255	; 0xff
        1b0c5c:	e3a00000 	mov	r0, #0	; 0x0
        1b0c60:	e5bc304c 	ldr	r3, [ip, #76]!	; fField76
        1b0c64:	e0833201 	add	r3, r3, r1, lsl #4
        1b0c68:	e0831082 	add	r1, r3, r2, lsl #1
        1b0c6c:	e591c004 	ldr	ip, [r1, #4]	; fField4
        1b0c70:	e1a0c82c 	mov	ip, ip, lsr #16
        1b0c74:	03e02000 	mvneq	r2, #0	; 0x0
        1b0c78:	e3a01000 	mov	r1, #0	; 0x0
        1b0c7c:	e3a04003 	mov	r4, #3	; 0x3
        1b0c80:	e3a0e002 	mov	lr, #2	; 0x2
        1b0c84:	e0835081 	add	r5, r3, r1, lsl #1
        1b0c88:	e5955004 	ldr	r5, [r5, #4]	; fField4
        1b0c8c:	e13c0825 	teq	ip, r5, lsr #16
        1b0c90:	1a000008 	bne	1b0cb8 <TROMDomainManager1K::MakePermissions(long, long, unsigned char)+0x68>
        1b0c94:	e1310002 	teq	r1, r2
        1b0c98:	0a000006 	beq	1b0cb8 <TROMDomainManager1K::MakePermissions(long, long, unsigned char)+0x68>
        1b0c9c:	e0835001 	add	r5, r3, r1
        1b0ca0:	e5d5500c 	ldrb	r5, [r5, #12]	; fField12
        1b0ca4:	e3350000 	teq	r5, #0	; 0x0
        1b0ca8:	e1a05081 	mov	r5, r1, lsl #1
        1b0cac:	01a0551e 	moveq	r5, lr, lsl r5
        1b0cb0:	11a05514 	movne	r5, r4, lsl r5
        1b0cb4:	e1850000 	orr	r0, r5, r0
        1b0cb8:	e2811001 	add	r1, r1, #1	; 0x1
        1b0cbc:	e3510004 	cmp	r1, #4	; 0x4
        1b0cc0:	baffffef 	blt	1b0c84 <TROMDomainManager1K::MakePermissions(long, long, unsigned char)+0x34>
        1b0cc4:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::WriteOutPage(unsigned long)
 * Address: 001b0cc8
 */
TROMDomainManager1K::WriteOutPage(unsigned long) {
    /*
        1b0cc8:	e1a0c00d 	mov	ip, sp
        1b0ccc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b0cd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b0cd4:	e1a04000 	mov	r4, r0
        1b0cd8:	e1a05001 	mov	r5, r1
        1b0cdc:	eb657ab8 	bl	1b0f7c4 <TROMDomainManager1K::$GetObjectPtr(unsigned long)>
        1b0ce0:	e1b06000 	movs	r6, r0
        1b0ce4:	1a000004 	bne	1b0cfc <TROMDomainManager1K::WriteOutPage(unsigned long)+0x34>
        1b0ce8:	e59f00a4 	ldr	r0, [pc, #a4]	; 1b0d94 <TROMDomainManager1K::WriteOutPage(unsigned long)+0xcc>
        1b0cec:	e5900000 	ldr	r0, [r0]
        1b0cf0:	e3a02000 	mov	r2, #0	; 0x0
        1b0cf4:	e59f109c 	ldr	r1, [pc, #9c]	; 1b0d98 <TROMDomainManager1K::WriteOutPage(unsigned long)+0xd0>
        1b0cf8:	eb68c927 	bl	1be319c <$Throw>
        1b0cfc:	e3a00001 	mov	r0, #1	; 0x1
        1b0d00:	e5c400cc 	strb	r0, [r4, #204]	; fField204
        1b0d04:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b0d08:	e5960020 	ldr	r0, [r6, #32]	; fField32
        1b0d0c:	e0457000 	sub	r7, r5, r0
        1b0d10:	e3a03004 	mov	r3, #4	; 0x4
        1b0d14:	e92d0008 	stmdb	sp!, {r3}
        1b0d18:	e1a00527 	mov	r0, r7, lsr #10
        1b0d1c:	e1a02100 	mov	r2, r0, lsl #2
        1b0d20:	e08d3003 	add	r3, sp, r3
        1b0d24:	e5960000 	ldr	r0, [r6]
        1b0d28:	e5961008 	ldr	r1, [r6, #8]	; fField8
        1b0d2c:	eb654503 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1b0d30:	e28dd004 	add	sp, sp, #4	; 0x4
        1b0d34:	e3300000 	teq	r0, #0	; 0x0
        1b0d38:	1a000011 	bne	1b0d84 <TROMDomainManager1K::WriteOutPage(unsigned long)+0xbc>
        1b0d3c:	e3a03002 	mov	r3, #2	; 0x2
        1b0d40:	e92d0008 	stmdb	sp!, {r3}
        1b0d44:	e1a02006 	mov	r2, r6
        1b0d48:	e1a00004 	mov	r0, r4
        1b0d4c:	e3a01000 	mov	r1, #0	; 0x0
        1b0d50:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        1b0d54:	eb656e39 	bl	1b0c640 <TROMDomainManager1K::$DoTransactionAgainstObject(long, PackageChunk *, unsigned long, int)>
        1b0d58:	e28dd004 	add	sp, sp, #4	; 0x4
        1b0d5c:	e3300000 	teq	r0, #0	; 0x0
        1b0d60:	1a000007 	bne	1b0d84 <TROMDomainManager1K::WriteOutPage(unsigned long)+0xbc>
        1b0d64:	e5963020 	ldr	r3, [r6, #32]	; fField32
        1b0d68:	e92d0008 	stmdb	sp!, {r3}
        1b0d6c:	e1a02005 	mov	r2, r5
        1b0d70:	e1a01007 	mov	r1, r7
        1b0d74:	e3a03b01 	mov	r3, #1024	; 0x400
        1b0d78:	e596000c 	ldr	r0, [r6, #12]	; fField12
        1b0d7c:	eb075991 	bl	3873c8 <TStoreCompander::Write(unsigned long, char *, long, unsigned long)>
        1b0d80:	e28dd004 	add	sp, sp, #4	; 0x4
        1b0d84:	e3a01000 	mov	r1, #0	; 0x0
        1b0d88:	e5c410cc 	strb	r1, [r4, #204]	; fField204
        1b0d8c:	e5a60028 	str	r0, [r6, #40]!
        1b0d90:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1b0d94:	003712b4 	ldreqh	r1, [r7], -r4
        1b0d98:	ffffd8b3 	swinv	0x00ffd8b3
    */
}

/**
 * Symbol: TROMDomainManager1K::ReleasePagesFromOurWS(unsigned long)
 * Address: 001b0e70
 */
TROMDomainManager1K::ReleasePagesFromOurWS(unsigned long) {
    /*
        1b0e70:	e1a0c00d 	mov	ip, sp
        1b0e74:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b0e78:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b0e7c:	e1a05000 	mov	r5, r0
        1b0e80:	e1a04001 	mov	r4, r1
        1b0e84:	e59f603c 	ldr	r6, [pc, #3c]	; 1b0ec8 <TROMDomainManager1K::ReleasePagesFromOurWS(unsigned long)+0x58>
        1b0e88:	e5960000 	ldr	r0, [r6]
        1b0e8c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1b0e90:	e1500001 	cmp	r0, r1
        1b0e94:	291ba870 	ldmcsdb	fp, {r4, r5, r6, fp, sp, pc}
        1b0e98:	e1a00005 	mov	r0, r5
        1b0e9c:	e3a01002 	mov	r1, #2	; 0x2
        1b0ea0:	e5952000 	ldr	r2, [r5]
        1b0ea4:	e1a0e00f 	mov	lr, pc
        1b0ea8:	e282f008 	add	pc, r2, #8	; 0x8
        1b0eac:	e3300000 	teq	r0, #0	; 0x0
        1b0eb0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        1b0eb4:	e5960000 	ldr	r0, [r6]
        1b0eb8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1b0ebc:	e1500004 	cmp	r0, r4
        1b0ec0:	3afffff4 	bcc	1b0e98 <TROMDomainManager1K::ReleasePagesFromOurWS(unsigned long)+0x28>
        1b0ec4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1b0ec8:	0c104f48 	ldceq	15, cr4, [r0], -#288
    */
}

/**
 * Symbol: TROMDomainManager1K::DoAcquireDatabase(unsigned char)
 * Address: 001b1034
 */
TROMDomainManager1K::DoAcquireDatabase(unsigned char) {
    /*
        1b1034:	e1a0c00d 	mov	ip, sp
        1b1038:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1b103c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b1040:	e1a04000 	mov	r4, r0
        1b1044:	e59f5054 	ldr	r5, [pc, #54]	; 1b10a0 <TROMDomainManager1K::DoAcquireDatabase(unsigned char)+0x6c>
        1b1048:	e5950000 	ldr	r0, [r5]
        1b104c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1b1050:	e3500003 	cmp	r0, #3	; 0x3
        1b1054:	2a000005 	bcs	1b1070 <TROMDomainManager1K::DoAcquireDatabase(unsigned char)+0x3c>
        1b1058:	e1a00004 	mov	r0, r4
        1b105c:	eb654c7c 	bl	1b04254 <TROMDomainManager1K::$RestrictToInternalWorkingSet(void)>
        1b1060:	e3300000 	teq	r0, #0	; 0x0
        1b1064:	11a00004 	movne	r0, r4
        1b1068:	13a01003 	movne	r1, #3	; 0x3
        1b106c:	1b65484a 	blne	1b0319c <TROMDomainManager1K::$ReleasePagesFromOurWS(unsigned long)>
        1b1070:	e5950000 	ldr	r0, [r5]
        1b1074:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1b1078:	e3500003 	cmp	r0, #3	; 0x3
        1b107c:	2a000003 	bcs	1b1090 <TROMDomainManager1K::DoAcquireDatabase(unsigned char)+0x5c>
        1b1080:	e1a00004 	mov	r0, r4
        1b1084:	e3a02006 	mov	r2, #6	; 0x6
        1b1088:	e3a01003 	mov	r1, #3	; 0x3
        1b108c:	eb659abc 	bl	1b17b84 <TUDomainManager::$ReleasePagesForFaultHandling(unsigned long, unsigned long)>
        1b1090:	e2840004 	add	r0, r4, #4	; 0x4
        1b1094:	e3a01000 	mov	r1, #0	; 0x0
        1b1098:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1b109c:	ea6875ac 	b	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1b10a0:	0c104f48 	ldceq	15, cr4, [r0], -#288
    */
}

/**
 * Symbol: TROMDomainManager1K::Reset(long, long)
 * Address: 001b14bc
 */
TROMDomainManager1K::Reset(long, long) {
    /*
        1b14bc:	e1a0c00d 	mov	ip, sp
        1b14c0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b14c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b14c8:	e1a04000 	mov	r4, r0
        1b14cc:	e1a06001 	mov	r6, r1
        1b14d0:	e1a05002 	mov	r5, r2
        1b14d4:	e590004c 	ldr	r0, [r0, #76]	; fField76
        1b14d8:	e3300000 	teq	r0, #0	; 0x0
        1b14dc:	1b68851d 	blne	1bd2958 <$free>
        1b14e0:	e5940048 	ldr	r0, [r4, #72]	; fField72
        1b14e4:	e3300000 	teq	r0, #0	; 0x0
        1b14e8:	13a01001 	movne	r1, #1	; 0x1
        1b14ec:	1b68cb5c 	blne	1be4264 <CDynamicArray::$__dt(void)>
        1b14f0:	e3a07000 	mov	r7, #0	; 0x0
        1b14f4:	e5847058 	str	r7, [r4, #88]	; fField88
        1b14f8:	e584705c 	str	r7, [r4, #92]	; fField92
        1b14fc:	e5847060 	str	r7, [r4, #96]	; fField96
        1b1500:	e58470b8 	str	r7, [r4, #184]	; fField184
        1b1504:	e5c470cc 	strb	r7, [r4, #204]	; fField204
        1b1508:	e5c470cd 	strb	r7, [r4, #205]	; fField205
        1b150c:	e0860005 	add	r0, r6, r5
        1b1510:	e5840054 	str	r0, [r4, #84]	; fField84
        1b1514:	e1a00140 	mov	r0, r0, asr #2
        1b1518:	e3a01b01 	mov	r1, #1024	; 0x400
        1b151c:	e3500b01 	cmp	r0, #1024	; 0x400
        1b1520:	a1a00001 	movge	r0, r1
        1b1524:	e5840064 	str	r0, [r4, #100]	; fField100
        1b1528:	e1a06000 	mov	r6, r0
        1b152c:	eb680504 	bl	1bb2944 <$__rt_sdiv10>
        1b1530:	e58400c4 	str	r0, [r4, #196]	; fField196
        1b1534:	e0860fa6 	add	r0, r6, r6, lsr #31
        1b1538:	e1a000c0 	mov	r0, r0, asr #1
        1b153c:	e58400c8 	str	r0, [r4, #200]	; fField200
        1b1540:	e0460145 	sub	r0, r6, r5, asr #2
        1b1544:	e5840068 	str	r0, [r4, #104]	; fField104
        1b1548:	e1a00206 	mov	r0, r6, lsl #4
        1b154c:	eb687479 	bl	1bce738 <$__nw(unsigned int)>
        1b1550:	e584004c 	str	r0, [r4, #76]	; fField76
        1b1554:	eb68c2f1 	bl	1be2120 <$MemError>
        1b1558:	e1b05000 	movs	r5, r0
        1b155c:	1a000026 	bne	1b15fc <TROMDomainManager1K::Reset(long, long)+0x140>
        1b1560:	e3a05000 	mov	r5, #0	; 0x0
        1b1564:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1b1568:	e3500000 	cmp	r0, #0	; 0x0
        1b156c:	da000006 	ble	1b158c <TROMDomainManager1K::Reset(long, long)+0xd0>
        1b1570:	e1a01005 	mov	r1, r5
        1b1574:	e1a00004 	mov	r0, r4
        1b1578:	eb651141 	bl	1af5a84 <TROMDomainManager1K::$ClearTableEntry(long)>
        1b157c:	e2855001 	add	r5, r5, #1	; 0x1
        1b1580:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1b1584:	e1500005 	cmp	r0, r5
        1b1588:	cafffff8 	bgt	1b1570 <TROMDomainManager1K::Reset(long, long)+0xb4>
        1b158c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b1590:	e2842050 	add	r2, r4, #80	; 0x50
        1b1594:	e28410d4 	add	r1, r4, #212	; 0xd4
        1b1598:	e1a0300d 	mov	r3, sp
        1b159c:	e3a00000 	mov	r0, #0	; 0x0
        1b15a0:	eb656c35 	bl	1b0c67c <$GetSharedLZObjects(TCompressor **, TDecompressor **, char **, long *)>
        1b15a4:	e1b05000 	movs	r5, r0
        1b15a8:	1a000012 	bne	1b15f8 <TROMDomainManager1K::Reset(long, long)+0x13c>
        1b15ac:	e3a05000 	mov	r5, #0	; 0x0
        1b15b0:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1b15b4:	e3500000 	cmp	r0, #0	; 0x0
        1b15b8:	da000006 	ble	1b15d8 <TROMDomainManager1K::Reset(long, long)+0x11c>
        1b15bc:	e1a01005 	mov	r1, r5
        1b15c0:	e1a00004 	mov	r0, r4
        1b15c4:	eb65112e 	bl	1af5a84 <TROMDomainManager1K::$ClearTableEntry(long)>
        1b15c8:	e2855001 	add	r5, r5, #1	; 0x1
        1b15cc:	e5940064 	ldr	r0, [r4, #100]	; fField100
        1b15d0:	e1500005 	cmp	r0, r5
        1b15d4:	cafffff8 	bgt	1b15bc <TROMDomainManager1K::Reset(long, long)+0x100>
        1b15d8:	e3a02004 	mov	r2, #4	; 0x4
        1b15dc:	e3a0103c 	mov	r1, #60	; 0x3c
        1b15e0:	e3a00000 	mov	r0, #0	; 0x0
        1b15e4:	eb68c6fa 	bl	1be31d4 <CDynamicArray::$__ct(long, long)>
        1b15e8:	e5840048 	str	r0, [r4, #72]	; fField72
        1b15ec:	eb68c2cb 	bl	1be2120 <$MemError>
        1b15f0:	e1b05000 	movs	r5, r0
        1b15f4:	0a00000a 	beq	1b1624 <TROMDomainManager1K::Reset(long, long)+0x168>
        1b15f8:	e28dd004 	add	sp, sp, #4	; 0x4
        1b15fc:	e3350000 	teq	r5, #0	; 0x0
        1b1600:	0a000005 	beq	1b161c <TROMDomainManager1K::Reset(long, long)+0x160>
        1b1604:	e5940048 	ldr	r0, [r4, #72]	; fField72
        1b1608:	e3300000 	teq	r0, #0	; 0x0
        1b160c:	13a01001 	movne	r1, #1	; 0x1
        1b1610:	1b68cb13 	blne	1be4264 <CDynamicArray::$__dt(void)>
        1b1614:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
        1b1618:	eb687030 	bl	1bcd6e0 <$__dl(void *)>
        1b161c:	e1a00005 	mov	r0, r5
        1b1620:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1b1624:	e3a00001 	mov	r0, #1	; 0x1
        1b1628:	e5840070 	str	r0, [r4, #112]	; fField112
        1b162c:	e584706c 	str	r7, [r4, #108]	; fField108
        1b1630:	e3a01002 	mov	r1, #2	; 0x2
        1b1634:	e2844074 	add	r4, r4, #116	; 0x74
        1b1638:	e8840003 	stmia	r4, {r0, r1}
        1b163c:	e3a02003 	mov	r2, #3	; 0x3
        1b1640:	e3a03004 	mov	r3, #4	; 0x4
        1b1644:	e2844010 	add	r4, r4, #16	; 0x10
        1b1648:	e884000a 	stmia	r4, {r1, r3}
        1b164c:	e9240005 	stmdb	r4!, {r0, r2}
        1b1650:	e2844010 	add	r4, r4, #16	; 0x10
        1b1654:	e8840005 	stmia	r4, {r0, r2}
        1b1658:	e5842008 	str	r2, [r4, #8]	; fField8
        1b165c:	e244408c 	sub	r4, r4, #140	; 0x8c
        1b1660:	e3a02005 	mov	r2, #5	; 0x5
        1b1664:	e584109c 	str	r1, [r4, #156]	; fField156
        1b1668:	e5842098 	str	r2, [r4, #152]	; fField152
        1b166c:	e3a01006 	mov	r1, #6	; 0x6
        1b1670:	e58410a8 	str	r1, [r4, #168]	; fField168
        1b1674:	e28440a0 	add	r4, r4, #160	; 0xa0
        1b1678:	e884000c 	stmia	r4, {r2, r3}
        1b167c:	e584100c 	str	r1, [r4, #12]	; fField12
        1b1680:	e24440a0 	sub	r4, r4, #160	; 0xa0
        1b1684:	e3a01801 	mov	r1, #65536	; 0x10000
        1b1688:	e2411001 	sub	r1, r1, #1	; 0x1
        1b168c:	e58410b4 	str	r1, [r4, #180]	; fField180
        1b1690:	e58410b0 	str	r1, [r4, #176]	; fField176
        1b1694:	e5c400da 	strb	r0, [r4, #218]	; fField218
        1b1698:	e28dd004 	add	sp, sp, #4	; 0x4
        1b169c:	eaffffde 	b	1b161c <TROMDomainManager1K::Reset(long, long)+0x160>
    */
}

/**
 * Symbol: TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)
 * Address: 001b16a0
 */
TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *) {
    /*
        1b16a0:	e1a0c00d 	mov	ip, sp
        1b16a4:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b16a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b16ac:	e3a04000 	mov	r4, #0	; 0x0
        1b16b0:	e3a05000 	mov	r5, #0	; 0x0
        1b16b4:	e52d5008 	str	r5, [sp, -#8]!	; fField8
        1b16b8:	e5902048 	ldr	r2, [r0, #72]	; fField72
        1b16bc:	e5922000 	ldr	r2, [r2]
        1b16c0:	e2523001 	subs	r3, r2, #1	; 0x1
        1b16c4:	e59060dc 	ldr	r6, [r0, #220]	; fField220
        1b16c8:	4a000009 	bmi	1b16f4 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x54>
        1b16cc:	e590c048 	ldr	ip, [r0, #72]	; fField72
        1b16d0:	e59ce010 	ldr	lr, [ip, #16]	; fField16
        1b16d4:	e59cc004 	ldr	ip, [ip, #4]	; fField4
        1b16d8:	e027ec93 	mla	r7, r3, ip, lr
        1b16dc:	e5977020 	ldr	r7, [r7, #32]	; fField32
        1b16e0:	e1570006 	cmp	r7, r6
        1b16e4:	3a000002 	bcc	1b16f4 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x54>
        1b16e8:	e2422001 	sub	r2, r2, #1	; 0x1
        1b16ec:	e2533001 	subs	r3, r3, #1	; 0x1
        1b16f0:	5afffff8 	bpl	1b16d8 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x38>
        1b16f4:	e3520000 	cmp	r2, #0	; 0x0
        1b16f8:	0a000032 	beq	1b17c8 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x128>
        1b16fc:	e3a04000 	mov	r4, #0	; 0x0
        1b1700:	da000038 	ble	1b17e8 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x148>
        1b1704:	e2428001 	sub	r8, r2, #1	; 0x1
        1b1708:	e58d8004 	str	r8, [sp, #4]	; fField4
        1b170c:	e5903048 	ldr	r3, [r0, #72]	; fField72
        1b1710:	e5b36004 	ldr	r6, [r3, #4]!	; fField4
        1b1714:	e5b3700c 	ldr	r7, [r3, #12]!	; fField12
        1b1718:	e591c024 	ldr	ip, [r1, #36]	; fField36
        1b171c:	e0237694 	mla	r3, r4, r6, r7
        1b1720:	e593e024 	ldr	lr, [r3, #36]	; fField36
        1b1724:	e33e0000 	teq	lr, #0	; 0x0
        1b1728:	0a000006 	beq	1b1748 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0xa8>
        1b172c:	e24ee001 	sub	lr, lr, #1	; 0x1
        1b1730:	e29eeb01 	adds	lr, lr, #1024	; 0x400
        1b1734:	424ee001 	submi	lr, lr, #1	; 0x1
        1b1738:	428eeb01 	addmi	lr, lr, #1024	; 0x400
        1b173c:	e1a0e54e 	mov	lr, lr, asr #10
        1b1740:	e1a0e50e 	mov	lr, lr, lsl #10
        1b1744:	ea000000 	b	1b174c <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0xac>
        1b1748:	e3a0eb01 	mov	lr, #1024	; 0x400
        1b174c:	e59d8004 	ldr	r8, [sp, #4]	; fField4
        1b1750:	e1580004 	cmp	r8, r4
        1b1754:	da000005 	ble	1b1770 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0xd0>
        1b1758:	e2848001 	add	r8, r4, #1	; 0x1
        1b175c:	e0287896 	mla	r8, r6, r8, r7
        1b1760:	e5988020 	ldr	r8, [r8, #32]	; fField32
        1b1764:	e5939020 	ldr	r9, [r3, #32]	; fField32
        1b1768:	e0488009 	sub	r8, r8, r9
        1b176c:	ea000004 	b	1b1784 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0xe4>
        1b1770:	e2809040 	add	r9, r0, #64	; 0x40
        1b1774:	e8990300 	ldmia	r9, {r8, r9}
        1b1778:	e593a020 	ldr	sl, [r3, #32]	; fField32
        1b177c:	e04a8008 	sub	r8, sl, r8
        1b1780:	e0498008 	sub	r8, r9, r8
        1b1784:	e048800e 	sub	r8, r8, lr
        1b1788:	e15c0008 	cmp	ip, r8
        1b178c:	3a000003 	bcc	1b17a0 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x100>
        1b1790:	e33c0000 	teq	ip, #0	; 0x0
        1b1794:	0a000007 	beq	1b17b8 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x118>
        1b1798:	e13c0008 	teq	ip, r8
        1b179c:	1a000005 	bne	1b17b8 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x118>
        1b17a0:	e3a02001 	mov	r2, #1	; 0x1
        1b17a4:	e58d2000 	str	r2, [sp]
        1b17a8:	e5b32020 	ldr	r2, [r3, #32]!	; fField32
        1b17ac:	e082500e 	add	r5, r2, lr
        1b17b0:	e2844001 	add	r4, r4, #1	; 0x1
        1b17b4:	ea00000b 	b	1b17e8 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x148>
        1b17b8:	e2844001 	add	r4, r4, #1	; 0x1
        1b17bc:	e1540002 	cmp	r4, r2
        1b17c0:	baffffd5 	blt	1b171c <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x7c>
        1b17c4:	ea000007 	b	1b17e8 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x148>
        1b17c8:	e5902044 	ldr	r2, [r0, #68]	; fField68
        1b17cc:	e5913024 	ldr	r3, [r1, #36]	; fField36
        1b17d0:	e1520003 	cmp	r2, r3
        1b17d4:	3a000003 	bcc	1b17e8 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x148>
        1b17d8:	e3a02001 	mov	r2, #1	; 0x1
        1b17dc:	e58d2000 	str	r2, [sp]
        1b17e0:	e3a04000 	mov	r4, #0	; 0x0
        1b17e4:	e5905040 	ldr	r5, [r0, #64]	; fField64
        1b17e8:	e59d2000 	ldr	r2, [sp]
        1b17ec:	e3320000 	teq	r2, #0	; 0x0
        1b17f0:	0a000006 	beq	1b1810 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x170>
        1b17f4:	e5815020 	str	r5, [r1, #32]	; fField32
        1b17f8:	e5900048 	ldr	r0, [r0, #72]	; fField72
        1b17fc:	e1a02001 	mov	r2, r1
        1b1800:	e1a01004 	mov	r1, r4
        1b1804:	e3a03001 	mov	r3, #1	; 0x1
        1b1808:	eb68df3a 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        1b180c:	ea000001 	b	1b1818 <TROMDomainManager1K::AllocatePackageEntry(PackageChunk *, long *)+0x178>
        1b1810:	e3a000e9 	mov	r0, #233	; 0xe9
        1b1814:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        1b1818:	e51b202c 	ldr	r2, [fp, -#44]
        1b181c:	e3320000 	teq	r2, #0	; 0x0
        1b1820:	151b202c 	ldrne	r2, [fp, -#44]
        1b1824:	15824000 	strne	r4, [r2]
        1b1828:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::XIPMapInPackageSection(unsigned long)
 * Address: 0027987c
 */
TROMDomainManager1K::XIPMapInPackageSection(unsigned long) {
    /*
        27987c:	e1a0c00d 	mov	ip, sp
        279880:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        279884:	e24cb004 	sub	fp, ip, #4	; 0x4
        279888:	e1a05000 	mov	r5, r0
        27988c:	e1a04001 	mov	r4, r1
        279890:	e3a080e8 	mov	r8, #232	; 0xe8
        279894:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        279898:	e24dd020 	sub	sp, sp, #32	; 0x20
        27989c:	e5901048 	ldr	r1, [r0, #72]	; fField72
        2798a0:	e28d0004 	add	r0, sp, #4	; 0x4
        2798a4:	eb65a652 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        2798a8:	e3a00000 	mov	r0, #0	; 0x0
        2798ac:	e58d0000 	str	r0, [sp]
        2798b0:	e1a00624 	mov	r0, r4, lsr #12
        2798b4:	e1a07600 	mov	r7, r0, lsl #12
        2798b8:	e28d0004 	add	r0, sp, #4	; 0x4
        2798bc:	eb65b6cc 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        2798c0:	e1a06000 	mov	r6, r0
        2798c4:	e28d0004 	add	r0, sp, #4	; 0x4
        2798c8:	eb65c32a 	bl	1bea578 <CArrayIterator::$More(void)>
        2798cc:	e3300000 	teq	r0, #0	; 0x0
        2798d0:	0a00005a 	beq	279a40 <TROMDomainManager1K::XIPMapInPackageSection(unsigned long)+0x1c4>
        2798d4:	e5950048 	ldr	r0, [r5, #72]	; fField72
        2798d8:	e5901010 	ldr	r1, [r0, #16]	; fField16
        2798dc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2798e0:	e0261690 	mla	r6, r0, r6, r1
        2798e4:	e5960020 	ldr	r0, [r6, #32]	; fField32
        2798e8:	e1500004 	cmp	r0, r4
        2798ec:	8a00004c 	bhi	279a24 <TROMDomainManager1K::XIPMapInPackageSection(unsigned long)+0x1a8>
        2798f0:	e5961024 	ldr	r1, [r6, #36]	; fField36
        2798f4:	e0801001 	add	r1, r0, r1
        2798f8:	e1510004 	cmp	r1, r4
        2798fc:	9a000048 	bls	279a24 <TROMDomainManager1K::XIPMapInPackageSection(unsigned long)+0x1a8>
        279900:	e24dd010 	sub	sp, sp, #16	; 0x10
        279904:	e0441000 	sub	r1, r4, r0
        279908:	e596002c 	ldr	r0, [r6, #44]
        27990c:	eb64e40d 	bl	1bb2948 <$__rt_udiv>
        279910:	e3a01000 	mov	r1, #0	; 0x0
        279914:	e3a03004 	mov	r3, #4	; 0x4
        279918:	e58d1000 	str	r1, [sp]
        27991c:	e92d0008 	stmdb	sp!, {r3}
        279920:	e1a02100 	mov	r2, r0, lsl #2
        279924:	e28d3014 	add	r3, sp, #20	; 0x14
        279928:	e5960000 	ldr	r0, [r6]
        27992c:	e5961008 	ldr	r1, [r6, #8]	; fField8
        279930:	eb622202 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        279934:	e28dd004 	add	sp, sp, #4	; 0x4
        279938:	e1b08000 	movs	r8, r0
        27993c:	1a000032 	bne	279a0c <TROMDomainManager1K::XIPMapInPackageSection(unsigned long)+0x190>
        279940:	e1a0200d 	mov	r2, sp
        279944:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        279948:	e5960000 	ldr	r0, [r6]
        27994c:	eb6204eb 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        279950:	e1b08000 	movs	r8, r0
        279954:	1a00002c 	bne	279a0c <TROMDomainManager1K::XIPMapInPackageSection(unsigned long)+0x190>
        279958:	e28d3004 	add	r3, sp, #4	; 0x4
        27995c:	e92d0008 	stmdb	sp!, {r3}
        279960:	e28d300c 	add	r3, sp, #12	; 0xc
        279964:	e28d2010 	add	r2, sp, #16	; 0x10
        279968:	e59d1014 	ldr	r1, [sp, #20]
        27996c:	e5960000 	ldr	r0, [r6]
        279970:	eb0434b1 	bl	386c3c <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)>
        279974:	e28dd004 	add	sp, sp, #4	; 0x4
        279978:	e1b08000 	movs	r8, r0
        27997c:	1a000022 	bne	279a0c <TROMDomainManager1K::XIPMapInPackageSection(unsigned long)+0x190>
        279980:	e59d0000 	ldr	r0, [sp]
        279984:	e1a00520 	mov	r0, r0, lsr #10
        279988:	e3a0100c 	mov	r1, #12	; 0xc
        27998c:	e0810180 	add	r0, r1, r0, lsl #3
        279990:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        279994:	e080a001 	add	sl, r0, r1
        279998:	e5960020 	ldr	r0, [r6, #32]	; fField32
        27999c:	e0441000 	sub	r1, r4, r0
        2799a0:	e1a09001 	mov	r9, r1
        2799a4:	e596802c 	ldr	r8, [r6, #44]
        2799a8:	e1a00008 	mov	r0, r8
        2799ac:	eb64e3e5 	bl	1bb2948 <$__rt_udiv>
        2799b0:	e0000098 	mul	r0, r8, r0
        2799b4:	e0490000 	sub	r0, r9, r0
        2799b8:	e1a00620 	mov	r0, r0, lsr #12
        2799bc:	e08a0600 	add	r0, sl, r0, lsl #12
        2799c0:	e3a03001 	mov	r3, #1	; 0x1
        2799c4:	e3a02a01 	mov	r2, #4096	; 0x1000
        2799c8:	e92d000c 	stmdb	sp!, {r2, r3}
        2799cc:	e5b61010 	ldr	r1, [r6, #16]!	; fField16
        2799d0:	e1a03000 	mov	r3, r0
        2799d4:	e5912000 	ldr	r2, [r1]
        2799d8:	e1a01007 	mov	r1, r7
        2799dc:	e1a00005 	mov	r0, r5
        2799e0:	eb66112e 	bl	1bfdea0 <TUDomainManager::$RememberPhysMapRange(unsigned long, unsigned long, unsigned long, unsigned long, unsigned char)>
        2799e4:	e28dd008 	add	sp, sp, #8	; 0x8
        2799e8:	e1b08000 	movs	r8, r0
        2799ec:	1a000006 	bne	279a0c <TROMDomainManager1K::XIPMapInPackageSection(unsigned long)+0x190>
        2799f0:	e1a01007 	mov	r1, r7
        2799f4:	e1a00005 	mov	r0, r5
        2799f8:	e3a030aa 	mov	r3, #170	; 0xaa
        2799fc:	e3a02a01 	mov	r2, #4096	; 0x1000
        279a00:	eb6580ab 	bl	1bd9cb4 <TUDomainManager::$RememberPermMap(unsigned long, unsigned long, Perm)>
        279a04:	e1b08000 	movs	r8, r0
        279a08:	0a000004 	beq	279a20 <TROMDomainManager1K::XIPMapInPackageSection(unsigned long)+0x1a4>
        279a0c:	e28d0014 	add	r0, sp, #20	; 0x14
        279a10:	e3a01000 	mov	r1, #0	; 0x0
        279a14:	eb65aa13 	bl	1be4268 <CArrayIterator::$__dt(void)>
        279a18:	e28dd030 	add	sp, sp, #48	; 0x30
        279a1c:	ea00000b 	b	279a50 <TROMDomainManager1K::XIPMapInPackageSection(unsigned long)+0x1d4>
        279a20:	e28dd010 	add	sp, sp, #16	; 0x10
        279a24:	e28d0004 	add	r0, sp, #4	; 0x4
        279a28:	eb65c6db 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        279a2c:	e1a06000 	mov	r6, r0
        279a30:	e28d0004 	add	r0, sp, #4	; 0x4
        279a34:	eb65c2cf 	bl	1bea578 <CArrayIterator::$More(void)>
        279a38:	e3300000 	teq	r0, #0	; 0x0
        279a3c:	1affffa4 	bne	2798d4 <TROMDomainManager1K::XIPMapInPackageSection(unsigned long)+0x58>
        279a40:	e28d0004 	add	r0, sp, #4	; 0x4
        279a44:	e3a01000 	mov	r1, #0	; 0x0
        279a48:	eb65aa06 	bl	1be4268 <CArrayIterator::$__dt(void)>
        279a4c:	e28dd020 	add	sp, sp, #32	; 0x20
        279a50:	e3380000 	teq	r8, #0	; 0x0
        279a54:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        279a58:	e1a01008 	mov	r1, r8
        279a5c:	e59f000c 	ldr	r0, [pc, #c]	; 279a70 <TROMDomainManager1K::XIPMapInPackageSection(unsigned long)+0x1f4>
        279a60:	e5900000 	ldr	r0, [r0]
        279a64:	e3a02000 	mov	r2, #0	; 0x0
        279a68:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        279a6c:	ea65a5ca 	b	1be319c <$Throw>
        279a70:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TROMDomainManager1K::XIPAllocatePackageEntry(PackageChunk *, long *)
 * Address: 00279bbc
 */
TROMDomainManager1K::XIPAllocatePackageEntry(PackageChunk *, long *) {
    /*
        279bbc:	e1a0c00d 	mov	ip, sp
        279bc0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        279bc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        279bc8:	e1a05000 	mov	r5, r0
        279bcc:	e1a04001 	mov	r4, r1
        279bd0:	e1a06002 	mov	r6, r2
        279bd4:	e3a07000 	mov	r7, #0	; 0x0
        279bd8:	e3a08001 	mov	r8, #1	; 0x1
        279bdc:	e5900048 	ldr	r0, [r0, #72]	; fField72
        279be0:	e1a01000 	mov	r1, r0
        279be4:	e5900000 	ldr	r0, [r0]
        279be8:	e3300000 	teq	r0, #0	; 0x0
        279bec:	0a000036 	beq	279ccc <TROMDomainManager1K::XIPAllocatePackageEntry(PackageChunk *, long *)+0x110>
        279bf0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        279bf4:	e1a0000d 	mov	r0, sp
        279bf8:	eb65a57d 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        279bfc:	e1a0000d 	mov	r0, sp
        279c00:	eb65b5fb 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        279c04:	e1a07000 	mov	r7, r0
        279c08:	e1a0000d 	mov	r0, sp
        279c0c:	eb65c259 	bl	1bea578 <CArrayIterator::$More(void)>
        279c10:	e3300000 	teq	r0, #0	; 0x0
        279c14:	0a000023 	beq	279ca8 <TROMDomainManager1K::XIPAllocatePackageEntry(PackageChunk *, long *)+0xec>
        279c18:	e5951048 	ldr	r1, [r5, #72]	; fField72
        279c1c:	e5910010 	ldr	r0, [r1, #16]	; fField16
        279c20:	e5911004 	ldr	r1, [r1, #4]	; fField4
        279c24:	e0200197 	mla	r0, r7, r1, r0
        279c28:	e5901024 	ldr	r1, [r0, #36]	; fField36
        279c2c:	e2411001 	sub	r1, r1, #1	; 0x1
        279c30:	e2911a01 	adds	r1, r1, #4096	; 0x1000
        279c34:	42411001 	submi	r1, r1, #1	; 0x1
        279c38:	42811a01 	addmi	r1, r1, #4096	; 0x1000
        279c3c:	e1a01641 	mov	r1, r1, asr #12
        279c40:	e1a02601 	mov	r2, r1, lsl #12
        279c44:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
        279c48:	e5940020 	ldr	r0, [r4, #32]	; fField32
        279c4c:	e1510000 	cmp	r1, r0
        279c50:	3a000003 	bcc	279c64 <TROMDomainManager1K::XIPAllocatePackageEntry(PackageChunk *, long *)+0xa8>
        279c54:	e5943024 	ldr	r3, [r4, #36]	; fField36
        279c58:	e0803003 	add	r3, r0, r3
        279c5c:	e1530001 	cmp	r3, r1
        279c60:	8a000005 	bhi	279c7c <TROMDomainManager1K::XIPAllocatePackageEntry(PackageChunk *, long *)+0xc0>
        279c64:	e0812002 	add	r2, r1, r2
        279c68:	e1520000 	cmp	r2, r0
        279c6c:	85943024 	ldrhi	r3, [r4, #36]	; fField36
        279c70:	80803003 	addhi	r3, r0, r3
        279c74:	81530002 	cmphi	r3, r2
        279c78:	9a000001 	bls	279c84 <TROMDomainManager1K::XIPAllocatePackageEntry(PackageChunk *, long *)+0xc8>
        279c7c:	e3a08000 	mov	r8, #0	; 0x0
        279c80:	ea000008 	b	279ca8 <TROMDomainManager1K::XIPAllocatePackageEntry(PackageChunk *, long *)+0xec>
        279c84:	e1510000 	cmp	r1, r0
        279c88:	8a000006 	bhi	279ca8 <TROMDomainManager1K::XIPAllocatePackageEntry(PackageChunk *, long *)+0xec>
        279c8c:	e1a0000d 	mov	r0, sp
        279c90:	eb65c641 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        279c94:	e1a07000 	mov	r7, r0
        279c98:	e1a0000d 	mov	r0, sp
        279c9c:	eb65c235 	bl	1bea578 <CArrayIterator::$More(void)>
        279ca0:	e3300000 	teq	r0, #0	; 0x0
        279ca4:	1affffdb 	bne	279c18 <TROMDomainManager1K::XIPAllocatePackageEntry(PackageChunk *, long *)+0x5c>
        279ca8:	e1a0000d 	mov	r0, sp
        279cac:	e3a01000 	mov	r1, #0	; 0x0
        279cb0:	eb65a96c 	bl	1be4268 <CArrayIterator::$__dt(void)>
        279cb4:	e28dd01c 	add	sp, sp, #28	; 0x1c
        279cb8:	e3380000 	teq	r8, #0	; 0x0
        279cbc:	0a000008 	beq	279ce4 <TROMDomainManager1K::XIPAllocatePackageEntry(PackageChunk *, long *)+0x128>
        279cc0:	e3770001 	cmn	r7, #1	; 0x1
        279cc4:	05950048 	ldreq	r0, [r5, #72]	; fField72
        279cc8:	05907000 	ldreq	r7, [r0]
        279ccc:	e1a02004 	mov	r2, r4
        279cd0:	e1a01007 	mov	r1, r7
        279cd4:	e3a03001 	mov	r3, #1	; 0x1
        279cd8:	e5b50048 	ldr	r0, [r5, #72]!	; fField72
        279cdc:	eb65be05 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        279ce0:	ea000001 	b	279cec <TROMDomainManager1K::XIPAllocatePackageEntry(PackageChunk *, long *)+0x130>
        279ce4:	e3e000ab 	mvn	r0, #171	; 0xab
        279ce8:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        279cec:	e3360000 	teq	r6, #0	; 0x0
        279cf0:	15867000 	strne	r7, [r6]
        279cf4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)
 * Address: 00279cf8
 */
TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *) {
    /*
        279cf8:	e1a0c00d 	mov	ip, sp
        279cfc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        279d00:	e24cb004 	sub	fp, ip, #4	; 0x4
        279d04:	e1a07000 	mov	r7, r0
        279d08:	e1a04001 	mov	r4, r1
        279d0c:	e1a05002 	mov	r5, r2
        279d10:	e1a06003 	mov	r6, r3
        279d14:	e24dd074 	sub	sp, sp, #116	; 0x74
        279d18:	e28d0054 	add	r0, sp, #84	; 0x54
        279d1c:	ebfb9af3 	bl	1608f0 <LargeObjectRoot::__ct(void)>
        279d20:	e28d0048 	add	r0, sp, #72	; 0x48
        279d24:	eb62630d 	bl	1b12960 <XIPParameterBlock::$__ct(void)>
        279d28:	e28d0034 	add	r0, sp, #52	; 0x34
        279d2c:	e1a0a000 	mov	sl, r0
        279d30:	eb627383 	bl	1b16b44 <LOTransactionHandler::$__ct(void)>
        279d34:	e3a09000 	mov	r9, #0	; 0x0
        279d38:	e88d0030 	stmia	sp, {r4, r5}
        279d3c:	e58d9020 	str	r9, [sp, #32]	; fField32
        279d40:	e58d901c 	str	r9, [sp, #28]	; fField28
        279d44:	e58d900c 	str	r9, [sp, #12]	; fField12
        279d48:	e58d9014 	str	r9, [sp, #20]
        279d4c:	e3a03020 	mov	r3, #32	; 0x20
        279d50:	e58d9010 	str	r9, [sp, #16]	; fField16
        279d54:	e92d0008 	stmdb	sp!, {r3}
        279d58:	e28d3058 	add	r3, sp, #88	; 0x58
        279d5c:	e1a01005 	mov	r1, r5
        279d60:	e1a00004 	mov	r0, r4
        279d64:	e3a02000 	mov	r2, #0	; 0x0
        279d68:	eb6220f4 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        279d6c:	e28dd004 	add	sp, sp, #4	; 0x4
        279d70:	e1b08000 	movs	r8, r0
        279d74:	1a00005e 	bne	279ef4 <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x1fc>
        279d78:	e3a03008 	mov	r3, #8	; 0x8
        279d7c:	e92d0008 	stmdb	sp!, {r3}
        279d80:	e59d1060 	ldr	r1, [sp, #96]	; fField96
        279d84:	e28d304c 	add	r3, sp, #76	; 0x4c
        279d88:	e1a00004 	mov	r0, r4
        279d8c:	e3a02000 	mov	r2, #0	; 0x0
        279d90:	eb6220ea 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        279d94:	e28dd004 	add	sp, sp, #4	; 0x4
        279d98:	e1b08000 	movs	r8, r0
        279d9c:	1a000054 	bne	279ef4 <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x1fc>
        279da0:	e59d004c 	ldr	r0, [sp, #76]	; fField76
        279da4:	e58d002c 	str	r0, [sp, #44]
        279da8:	e59d0048 	ldr	r0, [sp, #72]	; fField72
        279dac:	e1a01005 	mov	r1, r5
        279db0:	e58d0020 	str	r0, [sp, #32]	; fField32
        279db4:	e1a00004 	mov	r0, r4
        279db8:	e58d9028 	str	r9, [sp, #40]
        279dbc:	eb043386 	bl	386bdc <TStore::InSeparateTransaction(unsigned long)>
        279dc0:	e3300000 	teq	r0, #0	; 0x0
        279dc4:	11a0000a 	movne	r0, sl
        279dc8:	1b627360 	blne	1b16b50 <LOTransactionHandler::$SetAllInTransaction(void)>
        279dcc:	e5cd9030 	strb	r9, [sp, #48]	; fField48
        279dd0:	e59d0068 	ldr	r0, [sp, #104]	; fField104
        279dd4:	e2400001 	sub	r0, r0, #1	; 0x1
        279dd8:	e2800a01 	add	r0, r0, #4096	; 0x1000
        279ddc:	e1a00620 	mov	r0, r0, lsr #12
        279de0:	e1a00600 	mov	r0, r0, lsl #12
        279de4:	e58d0024 	str	r0, [sp, #36]	; fField36
        279de8:	e59d0020 	ldr	r0, [sp, #32]	; fField32
        279dec:	e5860000 	str	r0, [r6]
        279df0:	e1a00004 	mov	r0, r4
        279df4:	e59d1054 	ldr	r1, [sp, #84]	; fField84
        279df8:	e59d2068 	ldr	r2, [sp, #104]	; fField104
        279dfc:	e59d302c 	ldr	r3, [sp, #44]
        279e00:	eb625240 	bl	1b0e708 <$CheckObjectAlignment__FP6TStoreUlN22>
        279e04:	e1b08000 	movs	r8, r0
        279e08:	1a000039 	bne	279ef4 <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x1fc>
        279e0c:	e59d0054 	ldr	r0, [sp, #84]	; fField84
        279e10:	e58d0008 	str	r0, [sp, #8]	; fField8
        279e14:	e3a00008 	mov	r0, #8	; 0x8
        279e18:	eb655246 	bl	1bce738 <$__nw(unsigned int)>
        279e1c:	e3500000 	cmp	r0, #0	; 0x0
        279e20:	15c09004 	strneb	r9, [r0, #4]	; fField4
        279e24:	15809000 	strne	r9, [r0]
        279e28:	e58d0010 	str	r0, [sp, #16]	; fField16
        279e2c:	1a000002 	bne	279e3c <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x144>
        279e30:	eb65a0ba 	bl	1be2120 <$MemError>
        279e34:	e1a08000 	mov	r8, r0
        279e38:	ea00002d 	b	279ef4 <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x1fc>
        279e3c:	e28d303c 	add	r3, sp, #60	; 0x3c
        279e40:	e92d0008 	stmdb	sp!, {r3}
        279e44:	e28d3044 	add	r3, sp, #68	; 0x44
        279e48:	e28d2048 	add	r2, sp, #72	; 0x48
        279e4c:	e1a01005 	mov	r1, r5
        279e50:	e1a00004 	mov	r0, r4
        279e54:	eb043378 	bl	386c3c <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)>
        279e58:	e28dd004 	add	sp, sp, #4	; 0x4
        279e5c:	e1b08000 	movs	r8, r0
        279e60:	1a000023 	bne	279ef4 <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x1fc>
        279e64:	e59d0044 	ldr	r0, [sp, #68]	; fField68
        279e68:	ebf97e18 	bl	d96d0 <VToP(unsigned long)>
        279e6c:	e58d0044 	str	r0, [sp, #68]	; fField68
        279e70:	e1a01000 	mov	r1, r0
        279e74:	e3a03001 	mov	r3, #1	; 0x1
        279e78:	e92d0008 	stmdb	sp!, {r3}
        279e7c:	e59d0014 	ldr	r0, [sp, #20]
        279e80:	e59d2044 	ldr	r2, [sp, #68]	; fField68
        279e84:	eb656f0c 	bl	1bd5abc <TUPhys::$Init(unsigned long, unsigned long, unsigned char, unsigned char)>
        279e88:	e28dd004 	add	sp, sp, #4	; 0x4
        279e8c:	e1b08000 	movs	r8, r0
        279e90:	1a000017 	bne	279ef4 <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x1fc>
        279e94:	e59d1058 	ldr	r1, [sp, #88]	; fField88
        279e98:	e28d2050 	add	r2, sp, #80	; 0x50
        279e9c:	e1a00004 	mov	r0, r4
        279ea0:	eb620396 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        279ea4:	e1b08000 	movs	r8, r0
        279ea8:	1a000011 	bne	279ef4 <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x1fc>
        279eac:	e59d0050 	ldr	r0, [sp, #80]	; fField80
        279eb0:	e2800001 	add	r0, r0, #1	; 0x1
        279eb4:	eb65521f 	bl	1bce738 <$__nw(unsigned int)>
        279eb8:	e1a0a000 	mov	sl, r0
        279ebc:	eb65a097 	bl	1be2120 <$MemError>
        279ec0:	e1b08000 	movs	r8, r0
        279ec4:	1a00000a 	bne	279ef4 <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x1fc>
        279ec8:	e58da014 	str	sl, [sp, #20]
        279ecc:	e59d3050 	ldr	r3, [sp, #80]	; fField80
        279ed0:	e92d0008 	stmdb	sp!, {r3}
        279ed4:	e1a0300a 	mov	r3, sl
        279ed8:	e1a00004 	mov	r0, r4
        279edc:	e3a02000 	mov	r2, #0	; 0x0
        279ee0:	e59d105c 	ldr	r1, [sp, #92]	; fField92
        279ee4:	eb622095 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        279ee8:	e28dd004 	add	sp, sp, #4	; 0x4
        279eec:	e1b08000 	movs	r8, r0
        279ef0:	0a000001 	beq	279efc <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x204>
        279ef4:	e24dd004 	sub	sp, sp, #4	; 0x4
        279ef8:	ea000019 	b	279f64 <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x26c>
        279efc:	e59d0050 	ldr	r0, [sp, #80]	; fField80
        279f00:	e59d1014 	ldr	r1, [sp, #20]
        279f04:	e7c19000 	strb	r9, [r1, r0]
        279f08:	e59d1014 	ldr	r1, [sp, #20]
        279f0c:	e28f0f25 	add	r0, pc, #148	; 0x94
        279f10:	eb65771d 	bl	1bd7b8c <$NewByName__FPCcT1>
        279f14:	e58d000c 	str	r0, [sp, #12]	; fField12
        279f18:	e3300000 	teq	r0, #0	; 0x0
        279f1c:	03a080ea 	moveq	r8, #234	; 0xea
        279f20:	02488b0a 	subeq	r8, r8, #10240	; 0x2800
        279f24:	024dd004 	subeq	sp, sp, #4	; 0x4
        279f28:	0a00000f 	beq	279f6c <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x274>
        279f2c:	e3a03001 	mov	r3, #1	; 0x1
        279f30:	e3a02001 	mov	r2, #1	; 0x1
        279f34:	e92d000c 	stmdb	sp!, {r2, r3}
        279f38:	e1a02005 	mov	r2, r5
        279f3c:	e1a01004 	mov	r1, r4
        279f40:	e59d0014 	ldr	r0, [sp, #20]
        279f44:	e59d3064 	ldr	r3, [sp, #100]	; fField100
        279f48:	eb043515 	bl	3873a4 <TStoreCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)>
        279f4c:	e28dd004 	add	sp, sp, #4	; 0x4
        279f50:	e1a0200d 	mov	r2, sp
        279f54:	e28d1004 	add	r1, sp, #4	; 0x4
        279f58:	e1a00007 	mov	r0, r7
        279f5c:	eb624dcd 	bl	1b0d698 <TROMDomainManager1K::$XIPAllocatePackageEntry(PackageChunk *, long *)>
        279f60:	e1a08000 	mov	r8, r0
        279f64:	e3380000 	teq	r8, #0	; 0x0
        279f68:	0a00000c 	beq	279fa0 <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x2a8>
        279f6c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        279f70:	eb654dda 	bl	1bcd6e0 <$__dl(void *)>
        279f74:	e59d4014 	ldr	r4, [sp, #20]
        279f78:	e3340000 	teq	r4, #0	; 0x0
        279f7c:	0a000004 	beq	279f94 <TROMDomainManager1K::XIPAddPackage(TStore *, unsigned long, unsigned long *)+0x29c>
        279f80:	e1a00004 	mov	r0, r4
        279f84:	e3a01000 	mov	r1, #0	; 0x0
        279f88:	eb6551e5 	bl	1bce724 <TUObject::$__dt(void)>
        279f8c:	e1a00004 	mov	r0, r4
        279f90:	eb654dd2 	bl	1bcd6e0 <$__dl(void *)>
        279f94:	e59d0018 	ldr	r0, [sp, #24]
        279f98:	eb654dd0 	bl	1bcd6e0 <$__dl(void *)>
        279f9c:	e5869000 	str	r9, [r6]
        279fa0:	e1a00008 	mov	r0, r8
        279fa4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        279fa8:	5453746f 	ldrplb	r7, [r3], -#1135
        279fac:	7265436f 	rsbvc	r4, r5, #-1140850687	; 0xbc000001
        279fb0:	6d70616e 	ldfvse	f6, [r0, -#440]!
        279fb4:	64657200 	strvsbt	r7, [r5], -#512	; fField512
    */
}

/**
 * Symbol: TROMDomainManager1K::XIPEndSession(long)
 * Address: 00279fb8
 */
TROMDomainManager1K::XIPEndSession(long) {
    /*
        279fb8:	e1a0c00d 	mov	ip, sp
        279fbc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        279fc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        279fc4:	e1a04000 	mov	r4, r0
        279fc8:	e1a05001 	mov	r5, r1
        279fcc:	e5901048 	ldr	r1, [r0, #72]	; fField72
        279fd0:	e5910010 	ldr	r0, [r1, #16]	; fField16
        279fd4:	e5911004 	ldr	r1, [r1, #4]	; fField4
        279fd8:	e0260195 	mla	r6, r5, r1, r0
        279fdc:	e5960010 	ldr	r0, [r6, #16]	; fField16
        279fe0:	e5902000 	ldr	r2, [r0]
        279fe4:	e1a00004 	mov	r0, r4
        279fe8:	e2863020 	add	r3, r6, #32	; 0x20
        279fec:	e893000a 	ldmia	r3, {r1, r3}
        279ff0:	eb660fac 	bl	1bfdea8 <TUDomainManager::$ForgetPhysMapRange(unsigned long, unsigned long, unsigned long)>
        279ff4:	e1a08000 	mov	r8, r0
        279ff8:	e5960014 	ldr	r0, [r6, #20]
        279ffc:	eb654db7 	bl	1bcd6e0 <$__dl(void *)>
        27a000:	e5967010 	ldr	r7, [r6, #16]	; fField16
        27a004:	e3370000 	teq	r7, #0	; 0x0
        27a008:	0a000004 	beq	27a020 <TROMDomainManager1K::XIPEndSession(long)+0x68>
        27a00c:	e1a00007 	mov	r0, r7
        27a010:	e3a01000 	mov	r1, #0	; 0x0
        27a014:	eb6551c2 	bl	1bce724 <TUObject::$__dt(void)>
        27a018:	e1a00007 	mov	r0, r7
        27a01c:	eb654daf 	bl	1bcd6e0 <$__dl(void *)>
        27a020:	e5b6000c 	ldr	r0, [r6, #12]!	; fField12
        27a024:	eb654dad 	bl	1bcd6e0 <$__dl(void *)>
        27a028:	e1a01005 	mov	r1, r5
        27a02c:	e3a02001 	mov	r2, #1	; 0x1
        27a030:	e5b40048 	ldr	r0, [r4, #72]!	; fField72
        27a034:	eb65c97e 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        27a038:	e1a00008 	mov	r0, r8
        27a03c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::XIPFault(TProcessorState &)
 * Address: 0027a040
 */
TROMDomainManager1K::XIPFault(TProcessorState &) {
    /*
        27a040:	e1a0c00d 	mov	ip, sp
        27a044:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        27a048:	e24cb004 	sub	fp, ip, #4	; 0x4
        27a04c:	e5911044 	ldr	r1, [r1, #68]	; fField68
        27a050:	e59020dc 	ldr	r2, [r0, #220]	; fField220
        27a054:	e590c044 	ldr	ip, [r0, #68]	; fField68
        27a058:	e082300c 	add	r3, r2, ip
        27a05c:	e1530001 	cmp	r3, r1
        27a060:	9a000001 	bls	27a06c <TROMDomainManager1K::XIPFault(TProcessorState &)+0x2c>
        27a064:	e1520001 	cmp	r2, r1
        27a068:	9a000009 	bls	27a094 <TROMDomainManager1K::XIPFault(TProcessorState &)+0x54>
        27a06c:	e59f0018 	ldr	r0, [pc, #18]	; 27a08c <TROMDomainManager1K::XIPFault(TProcessorState &)+0x4c>
        27a070:	e5900000 	ldr	r0, [r0]
        27a074:	e3a02000 	mov	r2, #0	; 0x0
        27a078:	e59f1010 	ldr	r1, [pc, #10]	; 27a090 <TROMDomainManager1K::XIPFault(TProcessorState &)+0x50>
        27a07c:	eb65a446 	bl	1be319c <$Throw>
        27a080:	e3a000e9 	mov	r0, #233	; 0xe9
        27a084:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        27a088:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        27a08c:	003712c4 	eoreqs	r1, r7, r4, asr #5
        27a090:	ffffd8b3 	swinv	0x00ffd8b3
        27a094:	eb624d7e 	bl	1b0d694 <TROMDomainManager1K::$XIPMapInPackageSection(unsigned long)>
        27a098:	e3a00000 	mov	r0, #0	; 0x0
        27a09c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::XIPObjectHasMoved(TStore *, unsigned long)
 * Address: 0027a154
 */
TROMDomainManager1K::XIPObjectHasMoved(TStore *, unsigned long) {
    /*
        27a154:	e1a0c00d 	mov	ip, sp
        27a158:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        27a15c:	e24cb004 	sub	fp, ip, #4	; 0x4
        27a160:	e1a04000 	mov	r4, r0
        27a164:	e1a05001 	mov	r5, r1
        27a168:	e1a06002 	mov	r6, r2
        27a16c:	e5900048 	ldr	r0, [r0, #72]	; fField72
        27a170:	e1a01000 	mov	r1, r0
        27a174:	e5900000 	ldr	r0, [r0]
        27a178:	e3300000 	teq	r0, #0	; 0x0
        27a17c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        27a180:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        27a184:	e1a0000d 	mov	r0, sp
        27a188:	eb65a419 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        27a18c:	e1a0000d 	mov	r0, sp
        27a190:	eb65b497 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        27a194:	e1a07000 	mov	r7, r0
        27a198:	e1a0000d 	mov	r0, sp
        27a19c:	eb65c0f5 	bl	1bea578 <CArrayIterator::$More(void)>
        27a1a0:	e3300000 	teq	r0, #0	; 0x0
        27a1a4:	0a000028 	beq	27a24c <TROMDomainManager1K::XIPObjectHasMoved(TStore *, unsigned long)+0xf8>
        27a1a8:	e24dd004 	sub	sp, sp, #4	; 0x4
        27a1ac:	e5940048 	ldr	r0, [r4, #72]	; fField72
        27a1b0:	e5901010 	ldr	r1, [r0, #16]	; fField16
        27a1b4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        27a1b8:	e0271790 	mla	r7, r0, r7, r1
        27a1bc:	e3a00000 	mov	r0, #0	; 0x0
        27a1c0:	e58d0000 	str	r0, [sp]
        27a1c4:	e59410dc 	ldr	r1, [r4, #220]	; fField220
        27a1c8:	e5970020 	ldr	r0, [r7, #32]	; fField32
        27a1cc:	e1510000 	cmp	r1, r0
        27a1d0:	8a000015 	bhi	27a22c <TROMDomainManager1K::XIPObjectHasMoved(TStore *, unsigned long)+0xd8>
        27a1d4:	e5942044 	ldr	r2, [r4, #68]	; fField68
        27a1d8:	e0811002 	add	r1, r1, r2
        27a1dc:	e1510000 	cmp	r1, r0
        27a1e0:	9a000011 	bls	27a22c <TROMDomainManager1K::XIPObjectHasMoved(TStore *, unsigned long)+0xd8>
        27a1e4:	e5970000 	ldr	r0, [r7]
        27a1e8:	e1300005 	teq	r0, r5
        27a1ec:	1a00000e 	bne	27a22c <TROMDomainManager1K::XIPObjectHasMoved(TStore *, unsigned long)+0xd8>
        27a1f0:	e1a03006 	mov	r3, r6
        27a1f4:	e1a01005 	mov	r1, r5
        27a1f8:	e1a0000d 	mov	r0, sp
        27a1fc:	e5972008 	ldr	r2, [r7, #8]	; fField8
        27a200:	eb624d28 	bl	1b0d6a8 <$XIPChunkInObject__FPlP6TStoreUlT3>
        27a204:	e3300000 	teq	r0, #0	; 0x0
        27a208:	0a000007 	beq	27a22c <TROMDomainManager1K::XIPObjectHasMoved(TStore *, unsigned long)+0xd8>
        27a20c:	e5970010 	ldr	r0, [r7, #16]	; fField16
        27a210:	e5902000 	ldr	r2, [r0]
        27a214:	e5b70020 	ldr	r0, [r7, #32]!	; fField32
        27a218:	e5b7300c 	ldr	r3, [r7, #12]!	; fField12
        27a21c:	e59dc000 	ldr	ip, [sp]
        27a220:	e021039c 	mla	r1, ip, r3, r0
        27a224:	e1a00004 	mov	r0, r4
        27a228:	eb660f1e 	bl	1bfdea8 <TUDomainManager::$ForgetPhysMapRange(unsigned long, unsigned long, unsigned long)>
        27a22c:	e28dd004 	add	sp, sp, #4	; 0x4
        27a230:	e1a0000d 	mov	r0, sp
        27a234:	eb65c4d8 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        27a238:	e1a07000 	mov	r7, r0
        27a23c:	e1a0000d 	mov	r0, sp
        27a240:	eb65c0cc 	bl	1bea578 <CArrayIterator::$More(void)>
        27a244:	e3300000 	teq	r0, #0	; 0x0
        27a248:	1affffd6 	bne	27a1a8 <TROMDomainManager1K::XIPObjectHasMoved(TStore *, unsigned long)+0x54>
        27a24c:	e1a0000d 	mov	r0, sp
        27a250:	e3a01000 	mov	r1, #0	; 0x0
        27a254:	eb65a803 	bl	1be4268 <CArrayIterator::$__dt(void)>
        27a258:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TROMDomainManager1K::XIPInvalidateStore(TStore *)
 * Address: 0027a25c
 */
TROMDomainManager1K::XIPInvalidateStore(TStore *) {
    /*
        27a25c:	e1a0c00d 	mov	ip, sp
        27a260:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        27a264:	e24cb004 	sub	fp, ip, #4	; 0x4
        27a268:	e1a04000 	mov	r4, r0
        27a26c:	e1a05001 	mov	r5, r1
        27a270:	e5900048 	ldr	r0, [r0, #72]	; fField72
        27a274:	e1a01000 	mov	r1, r0
        27a278:	e5900000 	ldr	r0, [r0]
        27a27c:	e3300000 	teq	r0, #0	; 0x0
        27a280:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        27a284:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        27a288:	e1a0000d 	mov	r0, sp
        27a28c:	e59470dc 	ldr	r7, [r4, #220]	; fField220
        27a290:	eb65a3d7 	bl	1be31f4 <CArrayIterator::$__ct(CDynamicArray *)>
        27a294:	e1a0000d 	mov	r0, sp
        27a298:	eb65b455 	bl	1be73f4 <CArrayIterator::$FirstIndex(void)>
        27a29c:	e1a06000 	mov	r6, r0
        27a2a0:	e1a0000d 	mov	r0, sp
        27a2a4:	eb65c0b3 	bl	1bea578 <CArrayIterator::$More(void)>
        27a2a8:	e3300000 	teq	r0, #0	; 0x0
        27a2ac:	0a000015 	beq	27a308 <TROMDomainManager1K::XIPInvalidateStore(TStore *)+0xac>
        27a2b0:	e5940048 	ldr	r0, [r4, #72]	; fField72
        27a2b4:	e5901010 	ldr	r1, [r0, #16]	; fField16
        27a2b8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        27a2bc:	e0201096 	mla	r0, r6, r0, r1
        27a2c0:	e5901000 	ldr	r1, [r0]
        27a2c4:	e1310005 	teq	r1, r5
        27a2c8:	1a000007 	bne	27a2ec <TROMDomainManager1K::XIPInvalidateStore(TStore *)+0x90>
        27a2cc:	e5901020 	ldr	r1, [r0, #32]	; fField32
        27a2d0:	e1510007 	cmp	r1, r7
        27a2d4:	3a000004 	bcc	27a2ec <TROMDomainManager1K::XIPInvalidateStore(TStore *)+0x90>
        27a2d8:	e5902010 	ldr	r2, [r0, #16]	; fField16
        27a2dc:	e5922000 	ldr	r2, [r2]
        27a2e0:	e5b03024 	ldr	r3, [r0, #36]!	; fField36
        27a2e4:	e1a00004 	mov	r0, r4
        27a2e8:	eb660eee 	bl	1bfdea8 <TUDomainManager::$ForgetPhysMapRange(unsigned long, unsigned long, unsigned long)>
        27a2ec:	e1a0000d 	mov	r0, sp
        27a2f0:	eb65c4a9 	bl	1beb59c <CArrayIterator::$NextIndex(void)>
        27a2f4:	e1a06000 	mov	r6, r0
        27a2f8:	e1a0000d 	mov	r0, sp
        27a2fc:	eb65c09d 	bl	1bea578 <CArrayIterator::$More(void)>
        27a300:	e3300000 	teq	r0, #0	; 0x0
        27a304:	1affffe9 	bne	27a2b0 <TROMDomainManager1K::XIPInvalidateStore(TStore *)+0x54>
        27a308:	e1a0000d 	mov	r0, sp
        27a30c:	e3a01000 	mov	r1, #0	; 0x0
        27a310:	eb65a7d4 	bl	1be4268 <CArrayIterator::$__dt(void)>
        27a314:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

