#include "include/TPixelMapCompander.h"

/**
 * Symbol: Sizeof__18TPixelMapCompanderSFv
 * Address: 0018a95c
 */
void TPixelMapCompander::Sizeof() {
    /*
        18a95c:	e3a0004c 	mov	r0, #76	; 0x4c
        18a960:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPixelMapCompander::IsReadOnly(void)
 * Address: 0018a97c
 */
TPixelMapCompander::IsReadOnly(void) {
    /*
        18a97c:	e5d0001c 	ldrb	r0, [r0, #28]	; fField28
        18a980:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPixelMapCompander::New(void)
 * Address: 0018a984
 */
TPixelMapCompander::New(void) {
    /*
        18a984:	e3a01000 	mov	r1, #0	; 0x0
        18a988:	e5801020 	str	r1, [r0, #32]	; fField32
        18a98c:	e5801024 	str	r1, [r0, #36]	; fField36
        18a990:	e5801028 	str	r1, [r0, #40]	; fField40
        18a994:	e5801034 	str	r1, [r0, #52]	; fField52
        18a998:	e5c01048 	strb	r1, [r0, #72]	; fField72
        18a99c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPixelMapCompander::Delete(void)
 * Address: 0018a9a0
 */
TPixelMapCompander::Delete(void) {
    /*
        18a9a0:	ea670b4b 	b	1b4d6d4 <TPixelMapCompander::$DisposeAllocations(void)>
    */
}

/**
 * Symbol: TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)
 * Address: 0018a9a4
 */
TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char) {
    /*
        18a9a4:	e1a0c00d 	mov	ip, sp
        18a9a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        18a9ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        18a9b0:	e1a04000 	mov	r4, r0
        18a9b4:	e99b1001 	ldmib	fp, {r0, ip}
        18a9b8:	e31c00ff 	tst	ip, #255	; 0xff
        18a9bc:	e2844010 	add	r4, r4, #16	; 0x10
        18a9c0:	e8840006 	stmia	r4, {r1, r2}
        18a9c4:	e5843020 	str	r3, [r4, #32]	; fField32
        18a9c8:	e2444010 	sub	r4, r4, #16	; 0x10
        18a9cc:	e5c4001c 	strb	r0, [r4, #28]	; fField28
        18a9d0:	0a000007 	beq	18a9f4 <TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x50>
        18a9d4:	e284302c 	add	r3, r4, #44	; 0x2c
        18a9d8:	e2842028 	add	r2, r4, #40	; 0x28
        18a9dc:	e2841020 	add	r1, r4, #32	; 0x20
        18a9e0:	e2840024 	add	r0, r4, #36	; 0x24
        18a9e4:	eb660724 	bl	1b0c67c <$GetSharedLZObjects(TCompressor **, TDecompressor **, char **, long *)>
        18a9e8:	e3300000 	teq	r0, #0	; 0x0
        18a9ec:	1a000037 	bne	18aad0 <TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x12c>
        18a9f0:	ea00000e 	b	18aa30 <TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x8c>
        18a9f4:	e28f1f1a 	add	r1, pc, #104	; 0x68
        18a9f8:	e28f0f1d 	add	r0, pc, #116	; 0x74
        18a9fc:	eb693462 	bl	1bd7b8c <$NewByName__FPCcT1>
        18aa00:	e5840024 	str	r0, [r4, #36]	; fField36
        18aa04:	e28f1f1d 	add	r1, pc, #116	; 0x74
        18aa08:	e28f0f20 	add	r0, pc, #128	; 0x80
        18aa0c:	eb69345e 	bl	1bd7b8c <$NewByName__FPCcT1>
        18aa10:	e5840020 	str	r0, [r4, #32]	; fField32
        18aa14:	e3a00008 	mov	r0, #8	; 0x8
        18aa18:	e2800b01 	add	r0, r0, #1024	; 0x400
        18aa1c:	e584002c 	str	r0, [r4, #44]	; fField44
        18aa20:	eb695dc6 	bl	1be2140 <$NewPtr>
        18aa24:	e5840028 	str	r0, [r4, #40]	; fField40
        18aa28:	e3a00001 	mov	r0, #1	; 0x1
        18aa2c:	e5c40048 	strb	r0, [r4, #72]	; fField72
        18aa30:	e3a050e9 	mov	r5, #233	; 0xe9
        18aa34:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        18aa38:	e5940024 	ldr	r0, [r4, #36]	; fField36
        18aa3c:	e3300000 	teq	r0, #0	; 0x0
        18aa40:	15941020 	ldrne	r1, [r4, #32]	; fField32
        18aa44:	13310000 	teqne	r1, #0	; 0x0
        18aa48:	15941028 	ldrne	r1, [r4, #40]	; fField40
        18aa4c:	13310000 	teqne	r1, #0	; 0x0
        18aa50:	1a000012 	bne	18aaa0 <TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0xfc>
        18aa54:	e1a00004 	mov	r0, r4
        18aa58:	eb670b1d 	bl	1b4d6d4 <TPixelMapCompander::$DisposeAllocations(void)>
        18aa5c:	e1a00005 	mov	r0, r5
        18aa60:	ea00001a 	b	18aad0 <TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x12c>
        18aa64:	544c5a43 	strplb	r5, [ip], -#2627
        18aa68:	6f6d7072 	swivs	0x006d7072
        18aa6c:	6573736f 	ldrvsb	r7, [r3, -#879]!
        18aa70:	72000000 	andvc	r0, r0, #0	; 0x0
        18aa74:	54436f6d 	strplb	r6, [r3], -#3949
        18aa78:	70726573 	rsbvcs	r6, r2, r3, ror r5
        18aa7c:	736f7200 	cmnvc	pc, #0	; 0x0
        18aa80:	544c5a44 	strplb	r5, [ip], -#2628
        18aa84:	65636f6d 	strvsb	r6, [r3, -#3949]!
        18aa88:	70726573 	rsbvcs	r6, r2, r3, ror r5
        18aa8c:	736f7200 	cmnvc	pc, #0	; 0x0
        18aa90:	54446563 	strplb	r6, [r4], -#1379	; fField1379
        18aa94:	6f6d7072 	swivs	0x006d7072
        18aa98:	6573736f 	ldrvsb	r7, [r3, -#879]!
        18aa9c:	72000000 	andvc	r0, r0, #0	; 0x0
        18aaa0:	e5d41048 	ldrb	r1, [r4, #72]	; fField72
        18aaa4:	e3310000 	teq	r1, #0	; 0x0
        18aaa8:	0a00000a 	beq	18aad8 <TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x134>
        18aaac:	e3a01000 	mov	r1, #0	; 0x0
        18aab0:	eb07fabb 	bl	3895a4 <TCompressor::Init(void *)>
        18aab4:	e3300000 	teq	r0, #0	; 0x0
        18aab8:	1a000004 	bne	18aad0 <TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x12c>
        18aabc:	e3a01000 	mov	r1, #0	; 0x0
        18aac0:	e5940020 	ldr	r0, [r4, #32]	; fField32
        18aac4:	eb07fafc 	bl	3896bc <TDecompressor::Init(void *)>
        18aac8:	e3300000 	teq	r0, #0	; 0x0
        18aacc:	0a000001 	beq	18aad8 <TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x134>
        18aad0:	e24dd004 	sub	sp, sp, #4	; 0x4
        18aad4:	ea00002f 	b	18ab98 <TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x1f4>
        18aad8:	e24dd004 	sub	sp, sp, #4	; 0x4
        18aadc:	e1a0200d 	mov	r2, sp
        18aae0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        18aae4:	e5941030 	ldr	r1, [r4, #48]	; fField48
        18aae8:	eb65c084 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        18aaec:	e3300000 	teq	r0, #0	; 0x0
        18aaf0:	1a000028 	bne	18ab98 <TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x1f4>
        18aaf4:	e59d0000 	ldr	r0, [sp]
        18aaf8:	e3500000 	cmp	r0, #0	; 0x0
        18aafc:	da000013 	ble	18ab50 <TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x1ac>
        18ab00:	eb695d8e 	bl	1be2140 <$NewPtr>
        18ab04:	e5840034 	str	r0, [r4, #52]	; fField52
        18ab08:	e3300000 	teq	r0, #0	; 0x0
        18ab0c:	01a00005 	moveq	r0, r5
        18ab10:	0a000020 	beq	18ab98 <TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x1f4>
        18ab14:	e59d3000 	ldr	r3, [sp]
        18ab18:	e92d0008 	stmdb	sp!, {r3}
        18ab1c:	e1a03000 	mov	r3, r0
        18ab20:	e3a02000 	mov	r2, #0	; 0x0
        18ab24:	e5940010 	ldr	r0, [r4, #16]	; fField16
        18ab28:	e5941030 	ldr	r1, [r4, #48]	; fField48
        18ab2c:	eb65dd83 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        18ab30:	e28dd004 	add	sp, sp, #4	; 0x4
        18ab34:	e5941034 	ldr	r1, [r4, #52]	; fField52
        18ab38:	e5911008 	ldr	r1, [r1, #8]
        18ab3c:	e1a01841 	mov	r1, r1, asr #16
        18ab40:	e1a01141 	mov	r1, r1, asr #2
        18ab44:	e3300000 	teq	r0, #0	; 0x0
        18ab48:	e5841044 	str	r1, [r4, #68]	; fField68
        18ab4c:	1a000011 	bne	18ab98 <TPixelMapCompander::Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)+0x1f4>
        18ab50:	e3e00000 	mvn	r0, #0	; 0x0
        18ab54:	e5840038 	str	r0, [r4, #56]	; fField56
        18ab58:	e2845018 	add	r5, r4, #24	; 0x18
        18ab5c:	e5946010 	ldr	r6, [r4, #16]	; fField16
        18ab60:	e5944014 	ldr	r4, [r4, #20]	; fField20
        18ab64:	e24dd014 	sub	sp, sp, #20	; 0x14
        18ab68:	e1a0000d 	mov	r0, sp
        18ab6c:	eb659315 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        18ab70:	e3a03014 	mov	r3, #20	; 0x14
        18ab74:	e92d0008 	stmdb	sp!, {r3}
        18ab78:	e28d3004 	add	r3, sp, #4	; 0x4
        18ab7c:	e1a01004 	mov	r1, r4
        18ab80:	e1a00006 	mov	r0, r6
        18ab84:	e3a02000 	mov	r2, #0	; 0x0
        18ab88:	eb65dd6c 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        18ab8c:	e5bd1004 	ldr	r1, [sp, #4]!
        18ab90:	e5851000 	str	r1, [r5]
        18ab94:	e28dd014 	add	sp, sp, #20	; 0x14
        18ab98:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPixelMapCompander::BlockSize(void)
 * Address: 0018ab9c
 */
TPixelMapCompander::BlockSize(void) {
    /*
        18ab9c:	e3a00a01 	mov	r0, #4096	; 0x1000
        18aba0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPixelMapCompander::DisposeAllocations(void)
 * Address: 0018aba4
 */
TPixelMapCompander::DisposeAllocations(void) {
    /*
        18aba4:	e1a0c00d 	mov	ip, sp
        18aba8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        18abac:	e24cb004 	sub	fp, ip, #4	; 0x4
        18abb0:	e1a04000 	mov	r4, r0
        18abb4:	e5d00048 	ldrb	r0, [r0, #72]	; fField72
        18abb8:	e3300000 	teq	r0, #0	; 0x0
        18abbc:	0a000009 	beq	18abe8 <TPixelMapCompander::DisposeAllocations(void)+0x44>
        18abc0:	e5940020 	ldr	r0, [r4, #32]	; fField32
        18abc4:	e3300000 	teq	r0, #0	; 0x0
        18abc8:	1b07fab4 	blne	3896a0 <TDecompressor::Delete(void)>
        18abcc:	e5940024 	ldr	r0, [r4, #36]	; fField36
        18abd0:	e3300000 	teq	r0, #0	; 0x0
        18abd4:	1b07fa6b 	blne	389588 <TCompressor::Delete(void)>
        18abd8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        18abdc:	e3300000 	teq	r0, #0	; 0x0
        18abe0:	1b695933 	blne	1be10b4 <$DisposPtr>
        18abe4:	ea000003 	b	18abf8 <TPixelMapCompander::DisposeAllocations(void)+0x54>
        18abe8:	e2842024 	add	r2, r4, #36	; 0x24
        18abec:	e8920005 	ldmia	r2, {r0, r2}
        18abf0:	e5941020 	ldr	r1, [r4, #32]	; fField32
        18abf4:	eb662380 	bl	1b139fc <$ReleaseSharedLZObjects(TCompressor *, TDecompressor *, char *)>
        18abf8:	e5940034 	ldr	r0, [r4, #52]	; fField52
        18abfc:	e3300000 	teq	r0, #0	; 0x0
        18ac00:	1b69592b 	blne	1be10b4 <$DisposPtr>
        18ac04:	e3a00000 	mov	r0, #0	; 0x0
        18ac08:	e5840024 	str	r0, [r4, #36]	; fField36
        18ac0c:	e5840020 	str	r0, [r4, #32]	; fField32
        18ac10:	e5840028 	str	r0, [r4, #40]	; fField40
        18ac14:	e5a40034 	str	r0, [r4, #52]!	; fField52
        18ac18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)
 * Address: 0018ac1c
 */
TPixelMapCompander::Read(unsigned long, char *, long, unsigned long) {
    /*
        18ac1c:	e1a0c00d 	mov	ip, sp
        18ac20:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        18ac24:	e24cb004 	sub	fp, ip, #4	; 0x4
        18ac28:	e1a04000 	mov	r4, r0
        18ac2c:	e1a0c001 	mov	ip, r1
        18ac30:	e1a06002 	mov	r6, r2
        18ac34:	e1a05003 	mov	r5, r3
        18ac38:	e24dd00c 	sub	sp, sp, #12	; 0xc
        18ac3c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        18ac40:	e3a03004 	mov	r3, #4	; 0x4
        18ac44:	e5941018 	ldr	r1, [r4, #24]	; fField24
        18ac48:	e92d0008 	stmdb	sp!, {r3}
        18ac4c:	e1a0252c 	mov	r2, ip, lsr #10
        18ac50:	e1a02102 	mov	r2, r2, lsl #2
        18ac54:	e08d3003 	add	r3, sp, r3
        18ac58:	eb65dd38 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        18ac5c:	e28dd004 	add	sp, sp, #4	; 0x4
        18ac60:	e1b07000 	movs	r7, r0
        18ac64:	1a00008a 	bne	18ae94 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x278>
        18ac68:	e28d2008 	add	r2, sp, #8	; 0x8
        18ac6c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        18ac70:	e59d1000 	ldr	r1, [sp]
        18ac74:	eb65c021 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        18ac78:	e1b07000 	movs	r7, r0
        18ac7c:	1a000084 	bne	18ae94 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x278>
        18ac80:	e59d3008 	ldr	r3, [sp, #8]
        18ac84:	e3330000 	teq	r3, #0	; 0x0
        18ac88:	1a000004 	bne	18aca0 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x84>
        18ac8c:	e1a01005 	mov	r1, r5
        18ac90:	e1a00006 	mov	r0, r6
        18ac94:	eb6954e0 	bl	1be001c <$ZeroBytes>
        18ac98:	e3a00000 	mov	r0, #0	; 0x0
        18ac9c:	ea00007d 	b	18ae98 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x27c>
        18aca0:	e594002c 	ldr	r0, [r4, #44]	; fField44
        18aca4:	e1500003 	cmp	r0, r3
        18aca8:	b3a000e9 	movlt	r0, #233	; 0xe9
        18acac:	b2400b0a 	sublt	r0, r0, #10240	; 0x2800
        18acb0:	ba000078 	blt	18ae98 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x27c>
        18acb4:	e92d0008 	stmdb	sp!, {r3}
        18acb8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        18acbc:	e5943028 	ldr	r3, [r4, #40]	; fField40
        18acc0:	e3a02000 	mov	r2, #0	; 0x0
        18acc4:	e59d1004 	ldr	r1, [sp, #4]
        18acc8:	eb65dd1c 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        18accc:	e28dd004 	add	sp, sp, #4	; 0x4
        18acd0:	e1b07000 	movs	r7, r0
        18acd4:	1a00006e 	bne	18ae94 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x278>
        18acd8:	e59d3008 	ldr	r3, [sp, #8]
        18acdc:	e5942028 	ldr	r2, [r4, #40]	; fField40
        18ace0:	e92d000c 	stmdb	sp!, {r2, r3}
        18ace4:	e1a03005 	mov	r3, r5
        18ace8:	e1a02006 	mov	r2, r6
        18acec:	e28d100c 	add	r1, sp, #12	; 0xc
        18acf0:	e5940020 	ldr	r0, [r4, #32]	; fField32
        18acf4:	eb07fa73 	bl	3896c8 <TDecompressor::Decompress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        18acf8:	e28dd008 	add	sp, sp, #8	; 0x8
        18acfc:	e1a07000 	mov	r7, r0
        18ad00:	e5940034 	ldr	r0, [r4, #52]	; fField52
        18ad04:	e3300000 	teq	r0, #0	; 0x0
        18ad08:	0a000061 	beq	18ae94 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x278>
        18ad0c:	e5909008 	ldr	r9, [r0, #8]
        18ad10:	e1a09849 	mov	r9, r9, asr #16
        18ad14:	e1a08149 	mov	r8, r9, asr #2
        18ad18:	e5848044 	str	r8, [r4, #68]	; fField68
        18ad1c:	e5940038 	ldr	r0, [r4, #56]	; fField56
        18ad20:	e1300005 	teq	r0, r5
        18ad24:	05b4003c 	ldreq	r0, [r4, #60]!	; fField60
        18ad28:	0a00000b 	beq	18ad5c <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x140>
        18ad2c:	e1a01005 	mov	r1, r5
        18ad30:	e1a00009 	mov	r0, r9
        18ad34:	eb689f01 	bl	1bb2940 <$__rt_sdiv>
        18ad38:	e0020099 	mul	r2, r9, r0
        18ad3c:	e0680142 	rsb	r0, r8, r2, asr #2
        18ad40:	e584003c 	str	r0, [r4, #60]	; fField60
        18ad44:	e1b01000 	movs	r1, r0
        18ad48:	e0452002 	sub	r2, r5, r2
        18ad4c:	e5842040 	str	r2, [r4, #64]	; fField64
        18ad50:	03a00000 	moveq	r0, #0	; 0x0
        18ad54:	11a00001 	movne	r0, r1
        18ad58:	e5a45038 	str	r5, [r4, #56]!	; fField56
        18ad5c:	e0861108 	add	r1, r6, r8, lsl #2
        18ad60:	e2500008 	subs	r0, r0, #8	; 0x8
        18ad64:	4a000023 	bmi	18adf8 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x1dc>
        18ad68:	e4963004 	ldr	r3, [r6], #4
        18ad6c:	e5912000 	ldr	r2, [r1]
        18ad70:	e0232002 	eor	r2, r3, r2
        18ad74:	e4812004 	str	r2, [r1], #4
        18ad78:	e4962004 	ldr	r2, [r6], #4
        18ad7c:	e5913000 	ldr	r3, [r1]
        18ad80:	e0222003 	eor	r2, r2, r3
        18ad84:	e4812004 	str	r2, [r1], #4
        18ad88:	e5963000 	ldr	r3, [r6]
        18ad8c:	e2862004 	add	r2, r6, #4	; 0x4
        18ad90:	e591c000 	ldr	ip, [r1]
        18ad94:	e023300c 	eor	r3, r3, ip
        18ad98:	e4813004 	str	r3, [r1], #4
        18ad9c:	e4923004 	ldr	r3, [r2], #4
        18ada0:	e591c000 	ldr	ip, [r1]
        18ada4:	e023300c 	eor	r3, r3, ip
        18ada8:	e4813004 	str	r3, [r1], #4
        18adac:	e492c004 	ldr	ip, [r2], #4
        18adb0:	e5913000 	ldr	r3, [r1]
        18adb4:	e02c3003 	eor	r3, ip, r3
        18adb8:	e4813004 	str	r3, [r1], #4
        18adbc:	e4923004 	ldr	r3, [r2], #4
        18adc0:	e1a06002 	mov	r6, r2
        18adc4:	e5912000 	ldr	r2, [r1]
        18adc8:	e0232002 	eor	r2, r3, r2
        18adcc:	e4812004 	str	r2, [r1], #4
        18add0:	e4962004 	ldr	r2, [r6], #4
        18add4:	e5913000 	ldr	r3, [r1]
        18add8:	e0222003 	eor	r2, r2, r3
        18addc:	e4812004 	str	r2, [r1], #4
        18ade0:	e4963004 	ldr	r3, [r6], #4
        18ade4:	e5912000 	ldr	r2, [r1]
        18ade8:	e0232002 	eor	r2, r3, r2
        18adec:	e2500008 	subs	r0, r0, #8	; 0x8
        18adf0:	e4812004 	str	r2, [r1], #4
        18adf4:	5affffdb 	bpl	18ad68 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x14c>
        18adf8:	e2800008 	add	r0, r0, #8	; 0x8
        18adfc:	e3500007 	cmp	r0, #7	; 0x7
        18ae00:	908ff100 	addls	pc, pc, r0, lsl #2
        18ae04:	ea000022 	b	18ae94 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x278>
        18ae08:	ea000021 	b	18ae94 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x278>
        18ae0c:	ea00001c 	b	18ae84 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x268>
        18ae10:	ea000017 	b	18ae74 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x258>
        18ae14:	ea000012 	b	18ae64 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x248>
        18ae18:	ea00000d 	b	18ae54 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x238>
        18ae1c:	ea000008 	b	18ae44 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x228>
        18ae20:	ea000003 	b	18ae34 <TPixelMapCompander::Read(unsigned long, char *, long, unsigned long)+0x218>
        18ae24:	e4962004 	ldr	r2, [r6], #4
        18ae28:	e5910000 	ldr	r0, [r1]
        18ae2c:	e0220000 	eor	r0, r2, r0
        18ae30:	e4810004 	str	r0, [r1], #4
        18ae34:	e4960004 	ldr	r0, [r6], #4
        18ae38:	e5912000 	ldr	r2, [r1]
        18ae3c:	e0200002 	eor	r0, r0, r2
        18ae40:	e4810004 	str	r0, [r1], #4
        18ae44:	e4962004 	ldr	r2, [r6], #4
        18ae48:	e5910000 	ldr	r0, [r1]
        18ae4c:	e0220000 	eor	r0, r2, r0
        18ae50:	e4810004 	str	r0, [r1], #4
        18ae54:	e4962004 	ldr	r2, [r6], #4
        18ae58:	e5910000 	ldr	r0, [r1]
        18ae5c:	e0220000 	eor	r0, r2, r0
        18ae60:	e4810004 	str	r0, [r1], #4
        18ae64:	e4960004 	ldr	r0, [r6], #4
        18ae68:	e5912000 	ldr	r2, [r1]
        18ae6c:	e0200002 	eor	r0, r0, r2
        18ae70:	e4810004 	str	r0, [r1], #4
        18ae74:	e4962004 	ldr	r2, [r6], #4
        18ae78:	e5910000 	ldr	r0, [r1]
        18ae7c:	e0220000 	eor	r0, r2, r0
        18ae80:	e4810004 	str	r0, [r1], #4
        18ae84:	e5960000 	ldr	r0, [r6]
        18ae88:	e5912000 	ldr	r2, [r1]
        18ae8c:	e0200002 	eor	r0, r0, r2
        18ae90:	e5810000 	str	r0, [r1]
        18ae94:	e1a00007 	mov	r0, r7
        18ae98:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)
 * Address: 0018ae9c
 */
TPixelMapCompander::Write(unsigned long, char *, long, unsigned long) {
    /*
        18ae9c:	e1a0c00d 	mov	ip, sp
        18aea0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        18aea4:	e24cb004 	sub	fp, ip, #4	; 0x4
        18aea8:	e1a04000 	mov	r4, r0
        18aeac:	e1a06002 	mov	r6, r2
        18aeb0:	e1a05003 	mov	r5, r3
        18aeb4:	e59b7004 	ldr	r7, [fp, #4]
        18aeb8:	e24dd008 	sub	sp, sp, #8	; 0x8
        18aebc:	e5900010 	ldr	r0, [r0, #16]	; fField16
        18aec0:	e3a03004 	mov	r3, #4	; 0x4
        18aec4:	e594c018 	ldr	ip, [r4, #24]	; fField24
        18aec8:	e92d0008 	stmdb	sp!, {r3}
        18aecc:	e1a01521 	mov	r1, r1, lsr #10
        18aed0:	e1a02101 	mov	r2, r1, lsl #2
        18aed4:	e08d3003 	add	r3, sp, r3
        18aed8:	e1a0100c 	mov	r1, ip
        18aedc:	eb65dc97 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        18aee0:	e28dd004 	add	sp, sp, #4	; 0x4
        18aee4:	e3300000 	teq	r0, #0	; 0x0
        18aee8:	1a0000c3 	bne	18b1fc <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x360>
        18aeec:	e5940034 	ldr	r0, [r4, #52]	; fField52
        18aef0:	e3300000 	teq	r0, #0	; 0x0
        18aef4:	1a00002e 	bne	18afb4 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x118>
        18aef8:	e3a0002c 	mov	r0, #44	; 0x2c
        18aefc:	eb695c8f 	bl	1be2140 <$NewPtr>
        18af00:	e5840034 	str	r0, [r4, #52]	; fField52
        18af04:	e3300000 	teq	r0, #0	; 0x0
        18af08:	03a000e9 	moveq	r0, #233	; 0xe9
        18af0c:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        18af10:	0a0000b9 	beq	18b1fc <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x360>
        18af14:	e3a0102c 	mov	r1, #44	; 0x2c
        18af18:	e5801000 	str	r1, [r0]
        18af1c:	e5940034 	ldr	r0, [r4, #52]	; fField52
        18af20:	e2800004 	add	r0, r0, #4	; 0x4
        18af24:	e1a01007 	mov	r1, r7
        18af28:	e3a0201c 	mov	r2, #28	; 0x1c
        18af2c:	eb68a6c7 	bl	1bb4a50 <$memcpy>
        18af30:	e5977004 	ldr	r7, [r7, #4]
        18af34:	e1a07847 	mov	r7, r7, asr #16
        18af38:	e1a01005 	mov	r1, r5
        18af3c:	e1a00007 	mov	r0, r7
        18af40:	eb689e7e 	bl	1bb2940 <$__rt_sdiv>
        18af44:	e0000097 	mul	r0, r7, r0
        18af48:	e1a02147 	mov	r2, r7, asr #2
        18af4c:	e5842044 	str	r2, [r4, #68]	; fField68
        18af50:	e5941034 	ldr	r1, [r4, #52]	; fField52
        18af54:	e5913014 	ldr	r3, [r1, #20]	; fField20
        18af58:	e20330ff 	and	r3, r3, #255	; 0xff
        18af5c:	e3330001 	teq	r3, #1	; 0x1
        18af60:	05a1201c 	streq	r2, [r1, #28]!	; fField28
        18af64:	e5845038 	str	r5, [r4, #56]	; fField56
        18af68:	e5942044 	ldr	r2, [r4, #68]	; fField68
        18af6c:	e0621140 	rsb	r1, r2, r0, asr #2
        18af70:	e0450000 	sub	r0, r5, r0
        18af74:	e5840040 	str	r0, [r4, #64]	; fField64
        18af78:	e584103c 	str	r1, [r4, #60]	; fField60
        18af7c:	e3a0202c 	mov	r2, #44	; 0x2c
        18af80:	e5940010 	ldr	r0, [r4, #16]	; fField16
        18af84:	e5941030 	ldr	r1, [r4, #48]	; fField48
        18af88:	eb65ece4 	bl	1b06320 <TStore::$SetObjectSize(unsigned long, long)>
        18af8c:	e3a0302c 	mov	r3, #44	; 0x2c
        18af90:	e92d0008 	stmdb	sp!, {r3}
        18af94:	e3a02000 	mov	r2, #0	; 0x0
        18af98:	e5940010 	ldr	r0, [r4, #16]	; fField16
        18af9c:	e2843030 	add	r3, r4, #48	; 0x30
        18afa0:	e893000a 	ldmia	r3, {r1, r3}
        18afa4:	eb65fd55 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        18afa8:	e28dd004 	add	sp, sp, #4	; 0x4
        18afac:	e3300000 	teq	r0, #0	; 0x0
        18afb0:	1a000091 	bne	18b1fc <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x360>
        18afb4:	e1a00145 	mov	r0, r5, asr #2
        18afb8:	e1a01006 	mov	r1, r6
        18afbc:	e4912004 	ldr	r2, [r1], #4
        18afc0:	e3320000 	teq	r2, #0	; 0x0
        18afc4:	1a000002 	bne	18afd4 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x138>
        18afc8:	e2400001 	sub	r0, r0, #1	; 0x1
        18afcc:	e3500000 	cmp	r0, #0	; 0x0
        18afd0:	cafffff9 	bgt	18afbc <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x120>
        18afd4:	e3300000 	teq	r0, #0	; 0x0
        18afd8:	1a000004 	bne	18aff0 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x154>
        18afdc:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        18afe0:	e3a02000 	mov	r2, #0	; 0x0
        18afe4:	e59d1000 	ldr	r1, [sp]
        18afe8:	eb65eccc 	bl	1b06320 <TStore::$SetObjectSize(unsigned long, long)>
        18afec:	ea000082 	b	18b1fc <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x360>
        18aff0:	e5940038 	ldr	r0, [r4, #56]	; fField56
        18aff4:	e1300005 	teq	r0, r5
        18aff8:	0a00000c 	beq	18b030 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x194>
        18affc:	e5940034 	ldr	r0, [r4, #52]	; fField52
        18b000:	e5909008 	ldr	r9, [r0, #8]
        18b004:	e1a09849 	mov	r9, r9, asr #16
        18b008:	e1a01005 	mov	r1, r5
        18b00c:	e1a00009 	mov	r0, r9
        18b010:	eb689e4a 	bl	1bb2940 <$__rt_sdiv>
        18b014:	e0000099 	mul	r0, r9, r0
        18b018:	e5845038 	str	r5, [r4, #56]	; fField56
        18b01c:	e5942044 	ldr	r2, [r4, #68]	; fField68
        18b020:	e0621140 	rsb	r1, r2, r0, asr #2
        18b024:	e0450000 	sub	r0, r5, r0
        18b028:	e5840040 	str	r0, [r4, #64]	; fField64
        18b02c:	e584103c 	str	r1, [r4, #60]	; fField60
        18b030:	e594003c 	ldr	r0, [r4, #60]	; fField60
        18b034:	e3500000 	cmp	r0, #0	; 0x0
        18b038:	d3a00000 	movle	r0, #0	; 0x0
        18b03c:	da000004 	ble	18b054 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x1b8>
        18b040:	e0862005 	add	r2, r6, r5
        18b044:	e5941040 	ldr	r1, [r4, #64]	; fField64
        18b048:	e0427001 	sub	r7, r2, r1
        18b04c:	e5941044 	ldr	r1, [r4, #68]	; fField68
        18b050:	e0478101 	sub	r8, r7, r1, lsl #2
        18b054:	e2500008 	subs	r0, r0, #8	; 0x8
        18b058:	4a000025 	bmi	18b0f4 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x258>
        18b05c:	e2471004 	sub	r1, r7, #4	; 0x4
        18b060:	e2482004 	sub	r2, r8, #4	; 0x4
        18b064:	e412e004 	ldr	lr, [r2], -#4
        18b068:	e591c000 	ldr	ip, [r1]
        18b06c:	e02ec00c 	eor	ip, lr, ip
        18b070:	e401c004 	str	ip, [r1], -#4
        18b074:	e412c004 	ldr	ip, [r2], -#4
        18b078:	e591e000 	ldr	lr, [r1]
        18b07c:	e02cc00e 	eor	ip, ip, lr
        18b080:	e401c004 	str	ip, [r1], -#4
        18b084:	e412e004 	ldr	lr, [r2], -#4
        18b088:	e591c000 	ldr	ip, [r1]
        18b08c:	e02ec00c 	eor	ip, lr, ip
        18b090:	e401c004 	str	ip, [r1], -#4
        18b094:	e412e004 	ldr	lr, [r2], -#4
        18b098:	e591c000 	ldr	ip, [r1]
        18b09c:	e02ec00c 	eor	ip, lr, ip
        18b0a0:	e401c004 	str	ip, [r1], -#4
        18b0a4:	e412c004 	ldr	ip, [r2], -#4
        18b0a8:	e591e000 	ldr	lr, [r1]
        18b0ac:	e02cc00e 	eor	ip, ip, lr
        18b0b0:	e401c004 	str	ip, [r1], -#4
        18b0b4:	e412c004 	ldr	ip, [r2], -#4
        18b0b8:	e591e000 	ldr	lr, [r1]
        18b0bc:	e02cc00e 	eor	ip, ip, lr
        18b0c0:	e401c004 	str	ip, [r1], -#4
        18b0c4:	e592e000 	ldr	lr, [r2]
        18b0c8:	e591c000 	ldr	ip, [r1]
        18b0cc:	e02ec00c 	eor	ip, lr, ip
        18b0d0:	e401c004 	str	ip, [r1], -#4
        18b0d4:	e1a07001 	mov	r7, r1
        18b0d8:	e2428004 	sub	r8, r2, #4	; 0x4
        18b0dc:	e5982000 	ldr	r2, [r8]
        18b0e0:	e5913000 	ldr	r3, [r1]
        18b0e4:	e0222003 	eor	r2, r2, r3
        18b0e8:	e2500008 	subs	r0, r0, #8	; 0x8
        18b0ec:	e5812000 	str	r2, [r1]
        18b0f0:	5affffd9 	bpl	18b05c <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x1c0>
        18b0f4:	e2800008 	add	r0, r0, #8	; 0x8
        18b0f8:	e3500007 	cmp	r0, #7	; 0x7
        18b0fc:	908ff100 	addls	pc, pc, r0, lsl #2
        18b100:	ea00002f 	b	18b1c4 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x328>
        18b104:	ea00002e 	b	18b1c4 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x328>
        18b108:	ea000028 	b	18b1b0 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x314>
        18b10c:	ea000021 	b	18b198 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x2fc>
        18b110:	ea00001a 	b	18b180 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x2e4>
        18b114:	ea000013 	b	18b168 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x2cc>
        18b118:	ea00000c 	b	18b150 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x2b4>
        18b11c:	ea000005 	b	18b138 <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x29c>
        18b120:	e2470004 	sub	r0, r7, #4	; 0x4
        18b124:	e1a07000 	mov	r7, r0
        18b128:	e5382004 	ldr	r2, [r8, -#4]!
        18b12c:	e5901000 	ldr	r1, [r0]
        18b130:	e0221001 	eor	r1, r2, r1
        18b134:	e5801000 	str	r1, [r0]
        18b138:	e2470004 	sub	r0, r7, #4	; 0x4
        18b13c:	e1a07000 	mov	r7, r0
        18b140:	e5382004 	ldr	r2, [r8, -#4]!
        18b144:	e5901000 	ldr	r1, [r0]
        18b148:	e0221001 	eor	r1, r2, r1
        18b14c:	e5801000 	str	r1, [r0]
        18b150:	e2470004 	sub	r0, r7, #4	; 0x4
        18b154:	e1a07000 	mov	r7, r0
        18b158:	e5381004 	ldr	r1, [r8, -#4]!
        18b15c:	e5902000 	ldr	r2, [r0]
        18b160:	e0211002 	eor	r1, r1, r2
        18b164:	e5801000 	str	r1, [r0]
        18b168:	e2470004 	sub	r0, r7, #4	; 0x4
        18b16c:	e1a07000 	mov	r7, r0
        18b170:	e5381004 	ldr	r1, [r8, -#4]!
        18b174:	e5902000 	ldr	r2, [r0]
        18b178:	e0211002 	eor	r1, r1, r2
        18b17c:	e5801000 	str	r1, [r0]
        18b180:	e2470004 	sub	r0, r7, #4	; 0x4
        18b184:	e1a07000 	mov	r7, r0
        18b188:	e5381004 	ldr	r1, [r8, -#4]!
        18b18c:	e5902000 	ldr	r2, [r0]
        18b190:	e0211002 	eor	r1, r1, r2
        18b194:	e5801000 	str	r1, [r0]
        18b198:	e2470004 	sub	r0, r7, #4	; 0x4
        18b19c:	e1a07000 	mov	r7, r0
        18b1a0:	e5382004 	ldr	r2, [r8, -#4]!
        18b1a4:	e5901000 	ldr	r1, [r0]
        18b1a8:	e0221001 	eor	r1, r2, r1
        18b1ac:	e5801000 	str	r1, [r0]
        18b1b0:	e2470004 	sub	r0, r7, #4	; 0x4
        18b1b4:	e5182004 	ldr	r2, [r8, -#4]
        18b1b8:	e5901000 	ldr	r1, [r0]
        18b1bc:	e0221001 	eor	r1, r2, r1
        18b1c0:	e5801000 	str	r1, [r0]
        18b1c4:	e1a03005 	mov	r3, r5
        18b1c8:	e1a02006 	mov	r2, r6
        18b1cc:	e92d000c 	stmdb	sp!, {r2, r3}
        18b1d0:	e28d100c 	add	r1, sp, #12	; 0xc
        18b1d4:	e2843024 	add	r3, r4, #36	; 0x24
        18b1d8:	e893000d 	ldmia	r3, {r0, r2, r3}
        18b1dc:	eb07f8f3 	bl	3895b0 <TCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        18b1e0:	e28dd008 	add	sp, sp, #8	; 0x8
        18b1e4:	e3300000 	teq	r0, #0	; 0x0
        18b1e8:	1a000003 	bne	18b1fc <TPixelMapCompander::Write(unsigned long, char *, long, unsigned long)+0x360>
        18b1ec:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        18b1f0:	e5b42018 	ldr	r2, [r4, #24]!	; fField24
        18b1f4:	e89d000a 	ldmia	sp, {r1, r3}
        18b1f8:	eb07ee86 	bl	386c18 <TStore::ReplaceObject(unsigned long, char *, long)>
        18b1fc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TPixelMapCompander::DoTransactionAgainst(long, unsigned long)
 * Address: 0018b200
 */
TPixelMapCompander::DoTransactionAgainst(long, unsigned long) {
    /*
        18b200:	e1a0c00d 	mov	ip, sp
        18b204:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        18b208:	e24cb004 	sub	fp, ip, #4	; 0x4
        18b20c:	e1a0c001 	mov	ip, r1
        18b210:	e3a03001 	mov	r3, #1	; 0x1
        18b214:	e92d0008 	stmdb	sp!, {r3}
        18b218:	e2802010 	add	r2, r0, #16	; 0x10
        18b21c:	e8920007 	ldmia	r2, {r0, r1, r2}
        18b220:	e1a0300c 	mov	r3, ip
        18b224:	eb660513 	bl	1b0c678 <$LODefaultDoTransaction__FP6TStoreUlT2lUc>
        18b228:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__18TPixelMapCompanderSFv
 * Address: 00388688
 */
void TPixelMapCompander::ClassInfo() {
    /*
        388688:	e24f0044 	sub	r0, pc, #68	; 0x44
        38868c:	e1a0f00e 	mov	pc, lr
        388690:	e3a00000 	mov	r0, #0	; 0x0
        388694:	e1a0f00e 	mov	pc, lr
        388698:	54506978 	ldrplb	r6, [r0], -#2424	; fField2424
        38869c:	656c4d61 	strvsb	r4, [ip, -#3425]!
        3886a0:	70436f6d 	subvc	r6, r3, sp, ror #30
        3886a4:	70616e64 	rsbvc	r6, r1, r4, ror #28
        3886a8:	65720054 	ldrvsb	r0, [r2, -#84]!
        3886ac:	53746f72 	cmnpl	r4, #456	; 0x1c8
        3886b0:	65436f6d 	strvsb	r6, [r3, -#3949]
        3886b4:	70616e64 	rsbvc	r6, r1, r4, ror #28
        3886b8:	65720054 	ldrvsb	r0, [r2, -#84]!
        3886bc:	4c5a4465 	mrrcmi	4, 6, r4, sl, cr5
        3886c0:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        3886c4:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        3886c8:	6f720000 	swivs	0x00720000
        3886cc:	544c5a43 	strplb	r5, [ip], -#2627
        3886d0:	6f6d7072 	swivs	0x006d7072
        3886d4:	6573736f 	ldrvsb	r7, [r3, -#879]!
        3886d8:	72000000 	andvc	r0, r0, #0	; 0x0
        3886dc:	00000000 	andeq	r0, r0, r0
        3886e0:	eaffffe8 	b	388688 <ClassInfo__18TPixelMapCompanderSFv>
        3886e4:	ea5f2479 	b	1b518d0 <TPixelMapCompander::$New(void)>
        3886e8:	ea5f13f5 	b	1b4d6c4 <TPixelMapCompander::$Delete(void)>
        3886ec:	ea5f204b 	b	1b50820 <TPixelMapCompander::$Init(TStore *, unsigned long, unsigned long, unsigned char, unsigned char)>
        3886f0:	ea5f0fd9 	b	1b4c65c <TPixelMapCompander::$BlockSize(void)>
        3886f4:	ea5f2ca6 	b	1b53994 <TPixelMapCompander::$Read(unsigned long, char *, long, unsigned long)>
        3886f8:	ea5f34e5 	b	1b55a94 <TPixelMapCompander::$Write(unsigned long, char *, long, unsigned long)>
        3886fc:	ea5f13fc 	b	1b4d6f4 <TPixelMapCompander::$DoTransactionAgainst(long, unsigned long)>
        388700:	ea5f205a 	b	1b50870 <TPixelMapCompander::$IsReadOnly(void)>
        388704:	00000000 	andeq	r0, r0, r0
        388708:	00000048 	andeq	r0, r0, r8, asr #32
        38870c:	0000004c 	andeq	r0, r0, ip, asr #32
        388710:	00000057 	andeq	r0, r0, r7, asr r0
        388714:	00000054 	andeq	r0, r0, r4, asr r0
        388718:	00000074 	andeq	r0, r0, r4, ror r0
        38871c:	ea5f4568 	b	1b59cc4 <$Sizeof__7TPinPadSFv>
        388728:	e1a0f00e 	mov	pc, lr
        38872c:	ea5f4567 	b	1b59cd0 <TPinPad::$Delete(void)>
        38873c:	ea000001 	b	388748 <ClassInfo__7TPinPadSFv+0x8>
    */
}

