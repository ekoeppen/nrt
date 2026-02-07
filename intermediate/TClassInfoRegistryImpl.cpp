#include "include/TClassInfoRegistryImpl.h"

/**
 * Symbol: Sizeof__22TClassInfoRegistryImplSFv
 * Address: 0005b74c
 */
void TClassInfoRegistryImpl::Sizeof() {
    /*
         5b74c:	e3a00020 	mov	r0, #32	; 0x20
         5b750:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::InvalidateSatisfyCache(void)
 * Address: 0005b754
 */
TClassInfoRegistryImpl::InvalidateSatisfyCache(void) {
    /*
         5b754:	e3a01000 	mov	r1, #0	; 0x0
         5b758:	e3a02000 	mov	r2, #0	; 0x0
         5b75c:	e590301c 	ldr	r3, [r0, #28]	; fField28
         5b760:	e7832101 	str	r2, [r3, r1, lsl #2]
         5b764:	e2811001 	add	r1, r1, #1	; 0x1
         5b768:	e3510004 	cmp	r1, #4	; 0x4
         5b76c:	bafffffa 	blt	5b75c <TClassInfoRegistryImpl::InvalidateSatisfyCache(void)+0x8>
         5b770:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::Satisfy( const(TClassInfo const *))
 * Address: 0005b91c
 */
TClassInfoRegistryImpl::Satisfy( const(TClassInfo const *)) {
    /*
         5b91c:	e1a0c00d 	mov	ip, sp
         5b920:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         5b924:	e24cb004 	sub	fp, ip, #4	; 0x4
         5b928:	e1a04000 	mov	r4, r0
         5b92c:	e1a05001 	mov	r5, r1
         5b930:	e3a09000 	mov	r9, #0	; 0x0
         5b934:	e3a00000 	mov	r0, #0	; 0x0
         5b938:	e52d006c 	str	r0, [sp, -#108]!
         5b93c:	e28d0008 	add	r0, sp, #8	; 0x8
         5b940:	eb6d5c0b 	bl	1bb2974 <$setjmp>
         5b944:	e3300000 	teq	r0, #0	; 0x0
         5b948:	1a000051 	bne	5ba94 <TClassInfoRegistryImpl::Satisfy( const(TClassInfo const *))+0x178>
         5b94c:	e1a0000d 	mov	r0, sp
         5b950:	eb6e11c9 	bl	1be007c <$AddExceptionHandler>
         5b954:	e1a00005 	mov	r0, r5
         5b958:	eb6de864 	bl	1bd5af0 <TClassInfo::$InterfaceName( const(void))>
         5b95c:	e1a0a000 	mov	sl, r0
         5b960:	e1a00005 	mov	r0, r5
         5b964:	eb6de442 	bl	1bd4a74 <TClassInfo::$ImplementationName( const(void))>
         5b968:	e1a08000 	mov	r8, r0
         5b96c:	e1a00005 	mov	r0, r5
         5b970:	eb6e095b 	bl	1bddee4 <TClassInfo::$Version( const(void))>
         5b974:	e1a06000 	mov	r6, r0
         5b978:	e24dd014 	sub	sp, sp, #20	; 0x14
         5b97c:	e1a0100a 	mov	r1, sl
         5b980:	e1a00004 	mov	r0, r4
         5b984:	eb00022e 	bl	5c244 <TClassInfoRegistryImpl::HashString( const(char const *))>
         5b988:	e5cd000d 	strb	r0, [sp, #13]
         5b98c:	e1a00440 	mov	r0, r0, asr #8
         5b990:	e5cd000c 	strb	r0, [sp, #12]
         5b994:	e1a01008 	mov	r1, r8
         5b998:	e1a00004 	mov	r0, r4
         5b99c:	eb000228 	bl	5c244 <TClassInfoRegistryImpl::HashString( const(char const *))>
         5b9a0:	e5cd000f 	strb	r0, [sp, #15]
         5b9a4:	e1a00440 	mov	r0, r0, asr #8
         5b9a8:	e5cd000e 	strb	r0, [sp, #14]
         5b9ac:	e3e00000 	mvn	r0, #0	; 0x0
         5b9b0:	e58d0010 	str	r0, [sp, #16]	; fField16
         5b9b4:	e1a0100d 	mov	r1, sp
         5b9b8:	e5942010 	ldr	r2, [r4, #16]	; fField16
         5b9bc:	e1a00002 	mov	r0, r2
         5b9c0:	e5922000 	ldr	r2, [r2]
         5b9c4:	e1a0e00f 	mov	lr, pc
         5b9c8:	e282f00c 	add	pc, r2, #12	; 0xc
         5b9cc:	e2405001 	sub	r5, r0, #1	; 0x1
         5b9d0:	e1a03006 	mov	r3, r6
         5b9d4:	e59d200e 	ldr	r2, [sp, #14]
         5b9d8:	e1a02822 	mov	r2, r2, lsr #16
         5b9dc:	e92d000c 	stmdb	sp!, {r2, r3}
         5b9e0:	e1a01005 	mov	r1, r5
         5b9e4:	e5942010 	ldr	r2, [r4, #16]	; fField16
         5b9e8:	e1a00002 	mov	r0, r2
         5b9ec:	e5922000 	ldr	r2, [r2]
         5b9f0:	e1a0e00f 	mov	lr, pc
         5b9f4:	e282f004 	add	pc, r2, #4	; 0x4
         5b9f8:	e1a07000 	mov	r7, r0
         5b9fc:	e59d2014 	ldr	r2, [sp, #20]	; fField20
         5ba00:	e1a02822 	mov	r2, r2, lsr #16
         5ba04:	e3a03001 	mov	r3, #1	; 0x1
         5ba08:	e3a01001 	mov	r1, #1	; 0x1
         5ba0c:	ebffff58 	bl	5b774 <SatisfiesHash(SProtocolEntry const *, unsigned char, unsigned short const, unsigned short const, unsigned short const, unsigned long const)>
         5ba10:	e28dd008 	add	sp, sp, #8	; 0x8
         5ba14:	e3300000 	teq	r0, #0	; 0x0
         5ba18:	0a00001b 	beq	5ba8c <TClassInfoRegistryImpl::Satisfy( const(TClassInfo const *))+0x170>
         5ba1c:	e1a03006 	mov	r3, r6
         5ba20:	e1a02008 	mov	r2, r8
         5ba24:	e1a0100a 	mov	r1, sl
         5ba28:	e5970000 	ldr	r0, [r7]
         5ba2c:	eb6dfcb8 	bl	1bdad14 <$Satisfies__FPC10TClassInfoPCcT2Ul>
         5ba30:	e3300000 	teq	r0, #0	; 0x0
         5ba34:	11a09007 	movne	r9, r7
         5ba38:	1a000013 	bne	5ba8c <TClassInfoRegistryImpl::Satisfy( const(TClassInfo const *))+0x170>
         5ba3c:	e2455001 	sub	r5, r5, #1	; 0x1
         5ba40:	e1a03006 	mov	r3, r6
         5ba44:	e59d200e 	ldr	r2, [sp, #14]
         5ba48:	e1a02822 	mov	r2, r2, lsr #16
         5ba4c:	e92d000c 	stmdb	sp!, {r2, r3}
         5ba50:	e1a01005 	mov	r1, r5
         5ba54:	e5942010 	ldr	r2, [r4, #16]	; fField16
         5ba58:	e1a00002 	mov	r0, r2
         5ba5c:	e5922000 	ldr	r2, [r2]
         5ba60:	e1a0e00f 	mov	lr, pc
         5ba64:	e282f004 	add	pc, r2, #4	; 0x4
         5ba68:	e1a07000 	mov	r7, r0
         5ba6c:	e59d2014 	ldr	r2, [sp, #20]	; fField20
         5ba70:	e1a02822 	mov	r2, r2, lsr #16
         5ba74:	e3a03001 	mov	r3, #1	; 0x1
         5ba78:	e3a01001 	mov	r1, #1	; 0x1
         5ba7c:	ebffff3c 	bl	5b774 <SatisfiesHash(SProtocolEntry const *, unsigned char, unsigned short const, unsigned short const, unsigned short const, unsigned long const)>
         5ba80:	e28dd008 	add	sp, sp, #8	; 0x8
         5ba84:	e3300000 	teq	r0, #0	; 0x0
         5ba88:	1affffe3 	bne	5ba1c <TClassInfoRegistryImpl::Satisfy( const(TClassInfo const *))+0x100>
         5ba8c:	e28dd014 	add	sp, sp, #20	; 0x14
         5ba90:	ea000006 	b	5bab0 <TClassInfoRegistryImpl::Satisfy( const(TClassInfo const *))+0x194>
         5ba94:	e59d0060 	ldr	r0, [sp, #96]
         5ba98:	e59f1020 	ldr	r1, [pc, #20]	; 5bac0 <TClassInfoRegistryImpl::Satisfy( const(TClassInfo const *))+0x1a4>	; fField20
         5ba9c:	e5911000 	ldr	r1, [r1]
         5baa0:	eb6e1dbb 	bl	1be3194 <$Subexception>
         5baa4:	e3300000 	teq	r0, #0	; 0x0
         5baa8:	01a0000d 	moveq	r0, sp
         5baac:	0b6e19a8 	bleq	1be2154 <$NextHandler>
         5bab0:	e1a0000d 	mov	r0, sp
         5bab4:	eb6e157f 	bl	1be10b8 <$ExitHandler>
         5bab8:	e1a00009 	mov	r0, r9
         5babc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         5bac0:	003712b8 	ldreqh	r1, [r7], -r8
    */
}

/**
 * Symbol: Satisfy__22TClassInfoRegistryImplCFPCcT1Ul
 * Address: 0005bac4
 */
void TClassInfoRegistryImpl::Satisfy() {
    /*
         5bac4:	e1a0c00d 	mov	ip, sp
         5bac8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         5bacc:	e24cb004 	sub	fp, ip, #4	; 0x4
         5bad0:	e1a04000 	mov	r4, r0
         5bad4:	e1b06001 	movs	r6, r1
         5bad8:	e1a05002 	mov	r5, r2
         5badc:	e1a07003 	mov	r7, r3
         5bae0:	13350000 	teqne	r5, #0	; 0x0
         5bae4:	0a000030 	beq	5bbac <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0xe8>
         5bae8:	e3370000 	teq	r7, #0	; 0x0
         5baec:	1a00002e 	bne	5bbac <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0xe8>
         5baf0:	e3a08000 	mov	r8, #0	; 0x0
         5baf4:	e3a00000 	mov	r0, #0	; 0x0
         5baf8:	e52d006c 	str	r0, [sp, -#108]!
         5bafc:	e28d0008 	add	r0, sp, #8	; 0x8
         5bb00:	eb6d5b9b 	bl	1bb2974 <$setjmp>
         5bb04:	e3300000 	teq	r0, #0	; 0x0
         5bb08:	1a00001a 	bne	5bb78 <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0xb4>
         5bb0c:	e1a0000d 	mov	r0, sp
         5bb10:	eb6e1159 	bl	1be007c <$AddExceptionHandler>
         5bb14:	e3a09000 	mov	r9, #0	; 0x0
         5bb18:	e594001c 	ldr	r0, [r4, #28]	; fField28
         5bb1c:	e790a109 	ldr	sl, [r0, r9, lsl #2]
         5bb20:	e33a0000 	teq	sl, #0	; 0x0
         5bb24:	0a00000d 	beq	5bb60 <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0x9c>
         5bb28:	e1a0000a 	mov	r0, sl
         5bb2c:	eb6de7ef 	bl	1bd5af0 <TClassInfo::$InterfaceName( const(void))>
         5bb30:	e1a01000 	mov	r1, r0
         5bb34:	e1a00006 	mov	r0, r6
         5bb38:	eb6d67da 	bl	1bb5aa8 <$strcmp>
         5bb3c:	e3300000 	teq	r0, #0	; 0x0
         5bb40:	1a000006 	bne	5bb60 <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0x9c>
         5bb44:	e1a0000a 	mov	r0, sl
         5bb48:	eb6de3c9 	bl	1bd4a74 <TClassInfo::$ImplementationName( const(void))>
         5bb4c:	e1a01000 	mov	r1, r0
         5bb50:	e1a00005 	mov	r0, r5
         5bb54:	eb6d67d3 	bl	1bb5aa8 <$strcmp>
         5bb58:	e3300000 	teq	r0, #0	; 0x0
         5bb5c:	01a0800a 	moveq	r8, sl
         5bb60:	e2899001 	add	r9, r9, #1	; 0x1
         5bb64:	e3590004 	cmp	r9, #4	; 0x4
         5bb68:	2a000009 	bcs	5bb94 <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0xd0>
         5bb6c:	e3380000 	teq	r8, #0	; 0x0
         5bb70:	0affffe8 	beq	5bb18 <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0x54>
         5bb74:	ea000006 	b	5bb94 <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0xd0>
         5bb78:	e59d0060 	ldr	r0, [sp, #96]
         5bb7c:	e59f11c0 	ldr	r1, [pc, #1c0]	; 5bd44 <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0x280>
         5bb80:	e5911000 	ldr	r1, [r1]
         5bb84:	eb6e1d82 	bl	1be3194 <$Subexception>
         5bb88:	e3300000 	teq	r0, #0	; 0x0
         5bb8c:	01a0000d 	moveq	r0, sp
         5bb90:	0b6e196f 	bleq	1be2154 <$NextHandler>
         5bb94:	e1a0000d 	mov	r0, sp
         5bb98:	eb6e1546 	bl	1be10b8 <$ExitHandler>
         5bb9c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         5bba0:	e3380000 	teq	r8, #0	; 0x0
         5bba4:	11a00008 	movne	r0, r8
         5bba8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         5bbac:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         5bbb0:	e3a08000 	mov	r8, #0	; 0x0
         5bbb4:	e3a01000 	mov	r1, #0	; 0x0
         5bbb8:	e58d1014 	str	r1, [sp, #20]	; fField20
         5bbbc:	e58d8018 	str	r8, [sp, #24]	; fField24
         5bbc0:	e1a01006 	mov	r1, r6
         5bbc4:	e1a00004 	mov	r0, r4
         5bbc8:	eb00019d 	bl	5c244 <TClassInfoRegistryImpl::HashString( const(char const *))>
         5bbcc:	e5cd000d 	strb	r0, [sp, #13]
         5bbd0:	e1a00440 	mov	r0, r0, asr #8
         5bbd4:	e5cd000c 	strb	r0, [sp, #12]
         5bbd8:	e1a01005 	mov	r1, r5
         5bbdc:	e1a00004 	mov	r0, r4
         5bbe0:	eb000197 	bl	5c244 <TClassInfoRegistryImpl::HashString( const(char const *))>
         5bbe4:	e5cd000f 	strb	r0, [sp, #15]
         5bbe8:	e1a00440 	mov	r0, r0, asr #8
         5bbec:	e5cd000e 	strb	r0, [sp, #14]
         5bbf0:	e3e00000 	mvn	r0, #0	; 0x0
         5bbf4:	e3360000 	teq	r6, #0	; 0x0
         5bbf8:	e58d0010 	str	r0, [sp, #16]	; fField16
         5bbfc:	13a01001 	movne	r1, #1	; 0x1
         5bc00:	158d1014 	strne	r1, [sp, #20]	; fField20
         5bc04:	e3350000 	teq	r5, #0	; 0x0
         5bc08:	13a03001 	movne	r3, #1	; 0x1
         5bc0c:	158d3018 	strne	r3, [sp, #24]	; fField24
         5bc10:	e1a0100d 	mov	r1, sp
         5bc14:	e5942010 	ldr	r2, [r4, #16]	; fField16
         5bc18:	e1a00002 	mov	r0, r2
         5bc1c:	e5922000 	ldr	r2, [r2]
         5bc20:	e1a0e00f 	mov	lr, pc
         5bc24:	e282f00c 	add	pc, r2, #12	; 0xc
         5bc28:	e2409001 	sub	r9, r0, #1	; 0x1
         5bc2c:	e1a03007 	mov	r3, r7
         5bc30:	e59d200e 	ldr	r2, [sp, #14]
         5bc34:	e1a02822 	mov	r2, r2, lsr #16
         5bc38:	e92d000c 	stmdb	sp!, {r2, r3}
         5bc3c:	e1a01009 	mov	r1, r9
         5bc40:	e5942010 	ldr	r2, [r4, #16]	; fField16
         5bc44:	e1a00002 	mov	r0, r2
         5bc48:	e5922000 	ldr	r2, [r2]
         5bc4c:	e1a0e00f 	mov	lr, pc
         5bc50:	e282f004 	add	pc, r2, #4	; 0x4
         5bc54:	e1a0a000 	mov	sl, r0
         5bc58:	e59d2014 	ldr	r2, [sp, #20]	; fField20
         5bc5c:	e1a02822 	mov	r2, r2, lsr #16
         5bc60:	e28d301c 	add	r3, sp, #28	; 0x1c
         5bc64:	e893000a 	ldmia	r3, {r1, r3}
         5bc68:	ebfffec1 	bl	5b774 <SatisfiesHash(SProtocolEntry const *, unsigned char, unsigned short const, unsigned short const, unsigned short const, unsigned long const)>
         5bc6c:	e28dd008 	add	sp, sp, #8	; 0x8
         5bc70:	e3300000 	teq	r0, #0	; 0x0
         5bc74:	0a000030 	beq	5bd3c <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0x278>
         5bc78:	e1a03007 	mov	r3, r7
         5bc7c:	e1a02005 	mov	r2, r5
         5bc80:	e1a01006 	mov	r1, r6
         5bc84:	e59a0000 	ldr	r0, [sl]
         5bc88:	eb6dfc21 	bl	1bdad14 <$Satisfies__FPC10TClassInfoPCcT2Ul>
         5bc8c:	e3300000 	teq	r0, #0	; 0x0
         5bc90:	11a0800a 	movne	r8, sl
         5bc94:	1a000013 	bne	5bce8 <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0x224>
         5bc98:	e2499001 	sub	r9, r9, #1	; 0x1
         5bc9c:	e1a03007 	mov	r3, r7
         5bca0:	e59d200e 	ldr	r2, [sp, #14]
         5bca4:	e1a02822 	mov	r2, r2, lsr #16
         5bca8:	e92d000c 	stmdb	sp!, {r2, r3}
         5bcac:	e1a01009 	mov	r1, r9
         5bcb0:	e5942010 	ldr	r2, [r4, #16]	; fField16
         5bcb4:	e1a00002 	mov	r0, r2
         5bcb8:	e5922000 	ldr	r2, [r2]
         5bcbc:	e1a0e00f 	mov	lr, pc
         5bcc0:	e282f004 	add	pc, r2, #4	; 0x4
         5bcc4:	e1a0a000 	mov	sl, r0
         5bcc8:	e59d2014 	ldr	r2, [sp, #20]	; fField20
         5bccc:	e1a02822 	mov	r2, r2, lsr #16
         5bcd0:	e28d301c 	add	r3, sp, #28	; 0x1c
         5bcd4:	e893000a 	ldmia	r3, {r1, r3}
         5bcd8:	ebfffea5 	bl	5b774 <SatisfiesHash(SProtocolEntry const *, unsigned char, unsigned short const, unsigned short const, unsigned short const, unsigned long const)>
         5bcdc:	e28dd008 	add	sp, sp, #8	; 0x8
         5bce0:	e3300000 	teq	r0, #0	; 0x0
         5bce4:	1affffe3 	bne	5bc78 <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0x1b4>
         5bce8:	e3380000 	teq	r8, #0	; 0x0
         5bcec:	0a000012 	beq	5bd3c <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0x278>
         5bcf0:	e3360000 	teq	r6, #0	; 0x0
         5bcf4:	13350000 	teqne	r5, #0	; 0x0
         5bcf8:	0a00000c 	beq	5bd30 <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0x26c>
         5bcfc:	e3370000 	teq	r7, #0	; 0x0
         5bd00:	1a00000a 	bne	5bd30 <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0x26c>
         5bd04:	e3a00003 	mov	r0, #3	; 0x3
         5bd08:	e594101c 	ldr	r1, [r4, #28]	; fField28
         5bd0c:	e0812100 	add	r2, r1, r0, lsl #2
         5bd10:	e5122004 	ldr	r2, [r2, -#4]	; fField4
         5bd14:	e7812100 	str	r2, [r1, r0, lsl #2]
         5bd18:	e2400001 	sub	r0, r0, #1	; 0x1
         5bd1c:	e3500000 	cmp	r0, #0	; 0x0
         5bd20:	8afffff8 	bhi	5bd08 <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0x244>
         5bd24:	e5980000 	ldr	r0, [r8]
         5bd28:	e5b4101c 	ldr	r1, [r4, #28]!	; fField28
         5bd2c:	e5810000 	str	r0, [r1]
         5bd30:	e3380000 	teq	r8, #0	; 0x0
         5bd34:	15980000 	ldrne	r0, [r8]
         5bd38:	1a000000 	bne	5bd40 <Satisfy__22TClassInfoRegistryImplCFPCcT1Ul+0x27c>
         5bd3c:	e3a00000 	mov	r0, #0	; 0x0
         5bd40:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         5bd44:	003712b8 	ldreqh	r1, [r7], -r8
    */
}

/**
 * Symbol: Satisfy__22TClassInfoRegistryImplCFPCcN21
 * Address: 0005bd48
 */
void TClassInfoRegistryImpl::Satisfy() {
    /*
         5bd48:	e1a0c00d 	mov	ip, sp
         5bd4c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         5bd50:	e24cb004 	sub	fp, ip, #4	; 0x4
         5bd54:	e1a0c003 	mov	ip, r3
         5bd58:	e3a03000 	mov	r3, #0	; 0x0
         5bd5c:	e92d0008 	stmdb	sp!, {r3}
         5bd60:	e1a0300c 	mov	r3, ip
         5bd64:	eb6ae340 	bl	1b14a6c <$Satisfy__22TClassInfoRegistryImplCFPCcN31>
         5bd68:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: Satisfy__22TClassInfoRegistryImplCFPCcN31
 * Address: 0005bd6c
 */
void TClassInfoRegistryImpl::Satisfy() {
    /*
         5bd6c:	e1a0c00d 	mov	ip, sp
         5bd70:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         5bd74:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         5bd78:	e24cb014 	sub	fp, ip, #20	; 0x14
         5bd7c:	e1a04000 	mov	r4, r0
         5bd80:	e1a06001 	mov	r6, r1
         5bd84:	e1a05002 	mov	r5, r2
         5bd88:	e24dd018 	sub	sp, sp, #24	; 0x18
         5bd8c:	e3a00000 	mov	r0, #0	; 0x0
         5bd90:	e3a0a000 	mov	sl, #0	; 0x0
         5bd94:	e3a09000 	mov	r9, #0	; 0x0
         5bd98:	e58d0014 	str	r0, [sp, #20]	; fField20
         5bd9c:	e1a00004 	mov	r0, r4
         5bda0:	eb000127 	bl	5c244 <TClassInfoRegistryImpl::HashString( const(char const *))>
         5bda4:	e5cd000d 	strb	r0, [sp, #13]
         5bda8:	e1a00440 	mov	r0, r0, asr #8
         5bdac:	e5cd000c 	strb	r0, [sp, #12]
         5bdb0:	e1a01005 	mov	r1, r5
         5bdb4:	e1a00004 	mov	r0, r4
         5bdb8:	eb000121 	bl	5c244 <TClassInfoRegistryImpl::HashString( const(char const *))>
         5bdbc:	e5cd000f 	strb	r0, [sp, #15]
         5bdc0:	e1a00440 	mov	r0, r0, asr #8
         5bdc4:	e5cd000e 	strb	r0, [sp, #14]
         5bdc8:	e3e00000 	mvn	r0, #0	; 0x0
         5bdcc:	e3360000 	teq	r6, #0	; 0x0
         5bdd0:	e58d0010 	str	r0, [sp, #16]	; fField16
         5bdd4:	13a09001 	movne	r9, #1	; 0x1
         5bdd8:	e3350000 	teq	r5, #0	; 0x0
         5bddc:	13a0a001 	movne	sl, #1	; 0x1
         5bde0:	e1a0100d 	mov	r1, sp
         5bde4:	e5942010 	ldr	r2, [r4, #16]	; fField16
         5bde8:	e1a00002 	mov	r0, r2
         5bdec:	e5922000 	ldr	r2, [r2]
         5bdf0:	e1a0e00f 	mov	lr, pc
         5bdf4:	e282f00c 	add	pc, r2, #12	; 0xc
         5bdf8:	e2408001 	sub	r8, r0, #1	; 0x1
         5bdfc:	e3a03000 	mov	r3, #0	; 0x0
         5be00:	e59d200e 	ldr	r2, [sp, #14]
         5be04:	e1a02822 	mov	r2, r2, lsr #16
         5be08:	e92d000c 	stmdb	sp!, {r2, r3}
         5be0c:	e1a01008 	mov	r1, r8
         5be10:	e5942010 	ldr	r2, [r4, #16]	; fField16
         5be14:	e1a00002 	mov	r0, r2
         5be18:	e5922000 	ldr	r2, [r2]
         5be1c:	e1a0e00f 	mov	lr, pc
         5be20:	e282f004 	add	pc, r2, #4	; 0x4
         5be24:	e1a07000 	mov	r7, r0
         5be28:	e59d2014 	ldr	r2, [sp, #20]	; fField20
         5be2c:	e1a02822 	mov	r2, r2, lsr #16
         5be30:	e1a0300a 	mov	r3, sl
         5be34:	e1a01009 	mov	r1, r9
         5be38:	ebfffe4d 	bl	5b774 <SatisfiesHash(SProtocolEntry const *, unsigned char, unsigned short const, unsigned short const, unsigned short const, unsigned long const)>
         5be3c:	e28dd008 	add	sp, sp, #8	; 0x8
         5be40:	e3300000 	teq	r0, #0	; 0x0
         5be44:	0a00002a 	beq	5bef4 <Satisfy__22TClassInfoRegistryImplCFPCcN31+0x188>
         5be48:	e1a02005 	mov	r2, r5
         5be4c:	e1a01006 	mov	r1, r6
         5be50:	e3a03000 	mov	r3, #0	; 0x0
         5be54:	e5970000 	ldr	r0, [r7]
         5be58:	eb6dfbad 	bl	1bdad14 <$Satisfies__FPC10TClassInfoPCcT2Ul>
         5be5c:	e3300000 	teq	r0, #0	; 0x0
         5be60:	0a00000a 	beq	5be90 <Satisfy__22TClassInfoRegistryImplCFPCcN31+0x124>
         5be64:	e59b1010 	ldr	r1, [fp, #16]	; fField16
         5be68:	e3310000 	teq	r1, #0	; 0x0
         5be6c:	0a000005 	beq	5be88 <Satisfy__22TClassInfoRegistryImplCFPCcN31+0x11c>
         5be70:	e1a00007 	mov	r0, r7
         5be74:	e28b2010 	add	r2, fp, #16	; 0x10
         5be78:	e8920006 	ldmia	r2, {r1, r2}
         5be7c:	eb6ae2f8 	bl	1b14a64 <$SatisifiesCapabilities__FP14SProtocolEntryPCcT2>
         5be80:	e3300000 	teq	r0, #0	; 0x0
         5be84:	0a000001 	beq	5be90 <Satisfy__22TClassInfoRegistryImplCFPCcN31+0x124>
         5be88:	e58d7014 	str	r7, [sp, #20]	; fField20
         5be8c:	ea000013 	b	5bee0 <Satisfy__22TClassInfoRegistryImplCFPCcN31+0x174>
         5be90:	e2488001 	sub	r8, r8, #1	; 0x1
         5be94:	e3a03000 	mov	r3, #0	; 0x0
         5be98:	e59d200e 	ldr	r2, [sp, #14]
         5be9c:	e1a02822 	mov	r2, r2, lsr #16
         5bea0:	e92d000c 	stmdb	sp!, {r2, r3}
         5bea4:	e1a01008 	mov	r1, r8
         5bea8:	e5942010 	ldr	r2, [r4, #16]	; fField16
         5beac:	e1a00002 	mov	r0, r2
         5beb0:	e5922000 	ldr	r2, [r2]
         5beb4:	e1a0e00f 	mov	lr, pc
         5beb8:	e282f004 	add	pc, r2, #4	; 0x4
         5bebc:	e1a07000 	mov	r7, r0
         5bec0:	e59d2014 	ldr	r2, [sp, #20]	; fField20
         5bec4:	e1a02822 	mov	r2, r2, lsr #16
         5bec8:	e1a0300a 	mov	r3, sl
         5becc:	e1a01009 	mov	r1, r9
         5bed0:	ebfffe27 	bl	5b774 <SatisfiesHash(SProtocolEntry const *, unsigned char, unsigned short const, unsigned short const, unsigned short const, unsigned long const)>
         5bed4:	e28dd008 	add	sp, sp, #8	; 0x8
         5bed8:	e3300000 	teq	r0, #0	; 0x0
         5bedc:	1affffd9 	bne	5be48 <Satisfy__22TClassInfoRegistryImplCFPCcN31+0xdc>
         5bee0:	e59d0014 	ldr	r0, [sp, #20]	; fField20
         5bee4:	e3300000 	teq	r0, #0	; 0x0
         5bee8:	159d0014 	ldrne	r0, [sp, #20]	; fField20
         5beec:	15900000 	ldrne	r0, [r0]
         5bef0:	1a000000 	bne	5bef8 <Satisfy__22TClassInfoRegistryImplCFPCcN31+0x18c>
         5bef4:	e3a00000 	mov	r0, #0	; 0x0
         5bef8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: Satisfy__22TClassInfoRegistryImplCFPCcT1ClT3
 * Address: 0005befc
 */
void TClassInfoRegistryImpl::Satisfy() {
    /*
         5befc:	e1a0c00d 	mov	ip, sp
         5bf00:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         5bf04:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         5bf08:	e24cb014 	sub	fp, ip, #20	; 0x14
         5bf0c:	e24dd010 	sub	sp, sp, #16	; 0x10
         5bf10:	e59b0010 	ldr	r0, [fp, #16]	; fField16
         5bf14:	e3300000 	teq	r0, #0	; 0x0
         5bf18:	1a000003 	bne	5bf2c <Satisfy__22TClassInfoRegistryImplCFPCcT1ClT3+0x30>
         5bf1c:	e3a03000 	mov	r3, #0	; 0x0
         5bf20:	e92d0008 	stmdb	sp!, {r3}
         5bf24:	e99b0007 	ldmib	fp, {r0, r1, r2}
         5bf28:	ea000011 	b	5bf74 <Satisfy__22TClassInfoRegistryImplCFPCcT1ClT3+0x78>
         5bf2c:	e3a00000 	mov	r0, #0	; 0x0
         5bf30:	e5cd000c 	strb	r0, [sp, #12]
         5bf34:	e5cd0004 	strb	r0, [sp, #4]	; fField4
         5bf38:	e28d1008 	add	r1, sp, #8	; 0x8
         5bf3c:	e28b0010 	add	r0, fp, #16	; 0x10
         5bf40:	e3a02004 	mov	r2, #4	; 0x4
         5bf44:	eb6e0c02 	bl	1bdef54 <$BlockMove>
         5bf48:	e1a0100d 	mov	r1, sp
         5bf4c:	e28b0014 	add	r0, fp, #20	; 0x14
         5bf50:	e3a02004 	mov	r2, #4	; 0x4
         5bf54:	eb6e0bfe 	bl	1bdef54 <$BlockMove>
         5bf58:	e59b0014 	ldr	r0, [fp, #20]	; fField20
         5bf5c:	e3300000 	teq	r0, #0	; 0x0
         5bf60:	11a0300d 	movne	r3, sp
         5bf64:	03a03000 	moveq	r3, #0	; 0x0
         5bf68:	e92d0008 	stmdb	sp!, {r3}
         5bf6c:	e28d300c 	add	r3, sp, #12	; 0xc
         5bf70:	e99b0007 	ldmib	fp, {r0, r1, r2}
         5bf74:	eb6ae2bc 	bl	1b14a6c <$Satisfy__22TClassInfoRegistryImplCFPCcN31>
         5bf78:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::First( const(long, unsigned long *))
 * Address: 0005bf7c
 */
TClassInfoRegistryImpl::First( const(long, unsigned long *)) {
    /*
         5bf7c:	e1a0c00d 	mov	ip, sp
         5bf80:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5bf84:	e24cb004 	sub	fp, ip, #4	; 0x4
         5bf88:	e1a04002 	mov	r4, r2
         5bf8c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         5bf90:	e1a02000 	mov	r2, r0
         5bf94:	e5b01004 	ldr	r1, [r0, #4]!	; fField4
         5bf98:	e3a00000 	mov	r0, #0	; 0x0
         5bf9c:	e3310000 	teq	r1, #0	; 0x0
         5bfa0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         5bfa4:	e1a00002 	mov	r0, r2
         5bfa8:	e3a01000 	mov	r1, #0	; 0x0
         5bfac:	e5922000 	ldr	r2, [r2]
         5bfb0:	e1a0e00f 	mov	lr, pc
         5bfb4:	e282f004 	add	pc, r2, #4	; 0x4
         5bfb8:	e3340000 	teq	r4, #0	; 0x0
         5bfbc:	15901004 	ldrne	r1, [r0, #4]	; fField4
         5bfc0:	15841000 	strne	r1, [r4]
         5bfc4:	e5900000 	ldr	r0, [r0]
         5bfc8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::Next( const(long, TClassInfo const *, unsigned long *))
 * Address: 0005bfcc
 */
TClassInfoRegistryImpl::Next( const(long, TClassInfo const *, unsigned long *)) {
    /*
         5bfcc:	e1a0c00d 	mov	ip, sp
         5bfd0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         5bfd4:	e24cb004 	sub	fp, ip, #4	; 0x4
         5bfd8:	e1a05002 	mov	r5, r2
         5bfdc:	e1a04003 	mov	r4, r3
         5bfe0:	e3310000 	teq	r1, #0	; 0x0
         5bfe4:	15902014 	ldrne	r2, [r0, #20]	; fField20
         5bfe8:	11320001 	teqne	r2, r1
         5bfec:	1a000017 	bne	5c050 <TClassInfoRegistryImpl::Next( const(long, TClassInfo const *, unsigned long *))+0x84>
         5bff0:	e3a07000 	mov	r7, #0	; 0x0
         5bff4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         5bff8:	e3a01000 	mov	r1, #0	; 0x0
         5bffc:	e8900044 	ldmia	r0, {r2, r6}
         5c000:	e1a0e00f 	mov	lr, pc
         5c004:	e282f004 	add	pc, r2, #4	; 0x4
         5c008:	e3a01000 	mov	r1, #0	; 0x0
         5c00c:	e3560000 	cmp	r6, #0	; 0x0
         5c010:	9a00000e 	bls	5c050 <TClassInfoRegistryImpl::Next( const(long, TClassInfo const *, unsigned long *))+0x84>
         5c014:	ea000006 	b	5c034 <TClassInfoRegistryImpl::Next( const(long, TClassInfo const *, unsigned long *))+0x68>
         5c018:	e3370000 	teq	r7, #0	; 0x0
         5c01c:	0a000004 	beq	5c034 <TClassInfoRegistryImpl::Next( const(long, TClassInfo const *, unsigned long *))+0x68>
         5c020:	e3340000 	teq	r4, #0	; 0x0
         5c024:	15901004 	ldrne	r1, [r0, #4]	; fField4
         5c028:	15841000 	strne	r1, [r4]
         5c02c:	e5900000 	ldr	r0, [r0]
         5c030:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         5c034:	e5902000 	ldr	r2, [r0]
         5c038:	e1320005 	teq	r2, r5
         5c03c:	03a07001 	moveq	r7, #1	; 0x1
         5c040:	e2800014 	add	r0, r0, #20	; 0x14
         5c044:	e2811001 	add	r1, r1, #1	; 0x1
         5c048:	e1510006 	cmp	r1, r6
         5c04c:	3afffff1 	bcc	5c018 <TClassInfoRegistryImpl::Next( const(long, TClassInfo const *, unsigned long *))+0x4c>
         5c050:	e3a00000 	mov	r0, #0	; 0x0
         5c054:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::Seed( const(void))
 * Address: 0005c0b0
 */
TClassInfoRegistryImpl::Seed( const(void)) {
    /*
         5c0b0:	e5900014 	ldr	r0, [r0, #20]	; fField20
         5c0b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Find__22TClassInfoRegistryImplCFPCcT1iPUl
 * Address: 0005c0b8
 */
void TClassInfoRegistryImpl::Find() {
    /*
         5c0b8:	e1a0c00d 	mov	ip, sp
         5c0bc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         5c0c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c0c4:	e1a06001 	mov	r6, r1
         5c0c8:	e1a05002 	mov	r5, r2
         5c0cc:	e1a04003 	mov	r4, r3
         5c0d0:	e59ba004 	ldr	sl, [fp, #4]	; fField4
         5c0d4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         5c0d8:	e3a01000 	mov	r1, #0	; 0x0
         5c0dc:	e8900104 	ldmia	r0, {r2, r8}
         5c0e0:	e1a0e00f 	mov	lr, pc
         5c0e4:	e282f004 	add	pc, r2, #4	; 0x4
         5c0e8:	e1a07000 	mov	r7, r0
         5c0ec:	e3a09000 	mov	r9, #0	; 0x0
         5c0f0:	e3580000 	cmp	r8, #0	; 0x0
         5c0f4:	9a000012 	bls	5c144 <Find__22TClassInfoRegistryImplCFPCcT1iPUl+0x8c>
         5c0f8:	e1a02005 	mov	r2, r5
         5c0fc:	e1a01006 	mov	r1, r6
         5c100:	e3a03000 	mov	r3, #0	; 0x0
         5c104:	e5970000 	ldr	r0, [r7]
         5c108:	eb6dfb01 	bl	1bdad14 <$Satisfies__FPC10TClassInfoPCcT2Ul>
         5c10c:	e3300000 	teq	r0, #0	; 0x0
         5c110:	0a000007 	beq	5c134 <Find__22TClassInfoRegistryImplCFPCcT1iPUl+0x7c>
         5c114:	e1b00004 	movs	r0, r4
         5c118:	e2444001 	sub	r4, r4, #1	; 0x1
         5c11c:	1a000004 	bne	5c134 <Find__22TClassInfoRegistryImplCFPCcT1iPUl+0x7c>
         5c120:	e33a0000 	teq	sl, #0	; 0x0
         5c124:	15970004 	ldrne	r0, [r7, #4]	; fField4
         5c128:	158a0000 	strne	r0, [sl]
         5c12c:	e5970000 	ldr	r0, [r7]
         5c130:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         5c134:	e2877014 	add	r7, r7, #20	; 0x14
         5c138:	e2899001 	add	r9, r9, #1	; 0x1
         5c13c:	e1590008 	cmp	r9, r8
         5c140:	3affffec 	bcc	5c0f8 <Find__22TClassInfoRegistryImplCFPCcT1iPUl+0x40>
         5c144:	e3a00000 	mov	r0, #0	; 0x0
         5c148:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::UpdateInstanceCount(TClassInfo const *, long)
 * Address: 0005c14c
 */
TClassInfoRegistryImpl::UpdateInstanceCount(TClassInfo const *, long) {
    /*
         5c14c:	e1a0c00d 	mov	ip, sp
         5c150:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5c154:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c158:	e1a04002 	mov	r4, r2
         5c15c:	eb6a6ea5 	bl	1af7bf8 <TClassInfoRegistryImpl::$Find( const(TClassInfo const *))>
         5c160:	e3300000 	teq	r0, #0	; 0x0
         5c164:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         5c168:	e590100a 	ldr	r1, [r0, #10]	; fField10
         5c16c:	e1a01821 	mov	r1, r1, lsr #16
         5c170:	e0811004 	add	r1, r1, r4
         5c174:	e5c0100b 	strb	r1, [r0, #11]	; fField11
         5c178:	e1a01441 	mov	r1, r1, asr #8
         5c17c:	e5c0100a 	strb	r1, [r0, #10]	; fField10
         5c180:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::GetInstanceCount(TClassInfo const *)
 * Address: 0005c184
 */
TClassInfoRegistryImpl::GetInstanceCount(TClassInfo const *) {
    /*
         5c184:	e1a0c00d 	mov	ip, sp
         5c188:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         5c18c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c190:	eb6a6e98 	bl	1af7bf8 <TClassInfoRegistryImpl::$Find( const(TClassInfo const *))>
         5c194:	e3300000 	teq	r0, #0	; 0x0
         5c198:	03a00000 	moveq	r0, #0	; 0x0
         5c19c:	1590000a 	ldrne	r0, [r0, #10]	; fField10
         5c1a0:	11a00840 	movne	r0, r0, asr #16
         5c1a4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::New(void)
 * Address: 0005c1a8
 */
TClassInfoRegistryImpl::New(void) {
    /*
         5c1a8:	e1a0c00d 	mov	ip, sp
         5c1ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5c1b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c1b4:	e1a04000 	mov	r4, r0
         5c1b8:	e3a00004 	mov	r0, #4	; 0x4
         5c1bc:	eb6dc95d 	bl	1bce738 <$__nw(unsigned int)>
         5c1c0:	e1b05000 	movs	r5, r0
         5c1c4:	0a000003 	beq	5c1d8 <TClassInfoRegistryImpl::New(void)+0x30>
         5c1c8:	e1a00005 	mov	r0, r5
         5c1cc:	eb6d55c9 	bl	1bb18f8 <NComparator::$__ct(void)>
         5c1d0:	e59f0054 	ldr	r0, [pc, #54]	; 5c22c <TClassInfoRegistryImpl::New(void)+0x84>
         5c1d4:	e5850000 	str	r0, [r5]
         5c1d8:	e3a00000 	mov	r0, #0	; 0x0
         5c1dc:	e5845018 	str	r5, [r4, #24]	; fField24
         5c1e0:	eb6d59cb 	bl	1bb2914 <NSortedArray::$__ct(void)>
         5c1e4:	e3a03000 	mov	r3, #0	; 0x0
         5c1e8:	e3a02068 	mov	r2, #104	; 0x68
         5c1ec:	e5840010 	str	r0, [r4, #16]	; fField16
         5c1f0:	e92d000c 	stmdb	sp!, {r2, r3}
         5c1f4:	e3a030a0 	mov	r3, #160	; 0xa0
         5c1f8:	e3a02014 	mov	r2, #20	; 0x14
         5c1fc:	e5941018 	ldr	r1, [r4, #24]	; fField24
         5c200:	eb6d59c5 	bl	1bb291c <NSortedArray::$Init(NComparator *, long, long, long, unsigned char)>
         5c204:	e28dd008 	add	sp, sp, #8	; 0x8
         5c208:	e3a00001 	mov	r0, #1	; 0x1
         5c20c:	e5840014 	str	r0, [r4, #20]	; fField20
         5c210:	e3a00010 	mov	r0, #16	; 0x10
         5c214:	eb6e17c9 	bl	1be2140 <$NewPtr>
         5c218:	e584001c 	str	r0, [r4, #28]	; fField28
         5c21c:	e1a00004 	mov	r0, r4
         5c220:	ebfffd4b 	bl	5b754 <TClassInfoRegistryImpl::InvalidateSatisfyCache(void)>
         5c224:	e1a00004 	mov	r0, r4
         5c228:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5c22c:	0001efdc 	ldreqd	lr, [r1], -ip
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::Delete(void)
 * Address: 0005c230
 */
TClassInfoRegistryImpl::Delete(void) {
    /*
         5c230:	e5900010 	ldr	r0, [r0, #16]	; fField16
         5c234:	e3300000 	teq	r0, #0	; 0x0
         5c238:	01a0f00e 	moveq	pc, lr
         5c23c:	e3a01001 	mov	r1, #1	; 0x1
         5c240:	e590f000 	ldr	pc, [r0]
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::HashString( const(char const *))
 * Address: 0005c244
 */
TClassInfoRegistryImpl::HashString( const(char const *)) {
    /*
         5c244:	e3a02000 	mov	r2, #0	; 0x0
         5c248:	e3310000 	teq	r1, #0	; 0x0
         5c24c:	03a00801 	moveq	r0, #65536	; 0x10000
         5c250:	02400001 	subeq	r0, r0, #1	; 0x1
         5c254:	01a0f00e 	moveq	pc, lr
         5c258:	e3a00000 	mov	r0, #0	; 0x0
         5c25c:	e5d13000 	ldrb	r3, [r1]
         5c260:	e3330000 	teq	r3, #0	; 0x0
         5c264:	0a000007 	beq	5c288 <TClassInfoRegistryImpl::HashString( const(char const *))+0x44>
         5c268:	e1a033a2 	mov	r3, r2, lsr #7
         5c26c:	e1832c82 	orr	r2, r3, r2, lsl #25
         5c270:	e7d13000 	ldrb	r3, [r1, r0]
         5c274:	e0222003 	eor	r2, r2, r3
         5c278:	e2800001 	add	r0, r0, #1	; 0x1
         5c27c:	e7d13000 	ldrb	r3, [r1, r0]
         5c280:	e3330000 	teq	r3, #0	; 0x0
         5c284:	1afffff7 	bne	5c268 <TClassInfoRegistryImpl::HashString( const(char const *))+0x24>
         5c288:	e59f000c 	ldr	r0, [pc, #c]	; 5c29c <TClassInfoRegistryImpl::HashString( const(char const *))+0x58>
         5c28c:	e0000092 	mul	r0, r2, r0
         5c290:	e1a00800 	mov	r0, r0, lsl #16
         5c294:	e1a00820 	mov	r0, r0, lsr #16
         5c298:	e1a0f00e 	mov	pc, lr
         5c29c:	9e3779b9 	mrcls	9, 1, r7, cr7, cr9, {5}
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::Register(TClassInfo const *, unsigned long)
 * Address: 0005c2a0
 */
TClassInfoRegistryImpl::Register(TClassInfo const *, unsigned long) {
    /*
         5c2a0:	e1a0c00d 	mov	ip, sp
         5c2a4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         5c2a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c2ac:	e1a05000 	mov	r5, r0
         5c2b0:	e1b04001 	movs	r4, r1
         5c2b4:	e1a06002 	mov	r6, r2
         5c2b8:	e3a00000 	mov	r0, #0	; 0x0
         5c2bc:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         5c2c0:	0a000054 	beq	5c418 <TClassInfoRegistryImpl::Register(TClassInfo const *, unsigned long)+0x178>
         5c2c4:	e3a07000 	mov	r7, #0	; 0x0
         5c2c8:	e52d706c 	str	r7, [sp, -#108]!
         5c2cc:	e28d0008 	add	r0, sp, #8	; 0x8
         5c2d0:	eb6d59a7 	bl	1bb2974 <$setjmp>
         5c2d4:	e3300000 	teq	r0, #0	; 0x0
         5c2d8:	1a00003f 	bne	5c3dc <TClassInfoRegistryImpl::Register(TClassInfo const *, unsigned long)+0x13c>
         5c2dc:	e1a0000d 	mov	r0, sp
         5c2e0:	eb6e0f65 	bl	1be007c <$AddExceptionHandler>
         5c2e4:	e1a00004 	mov	r0, r4
         5c2e8:	eb6de1e1 	bl	1bd4a74 <TClassInfo::$ImplementationName( const(void))>
         5c2ec:	eb6d65ef 	bl	1bb5ab0 <$strlen>
         5c2f0:	e1a00004 	mov	r0, r4
         5c2f4:	eb6de5fd 	bl	1bd5af0 <TClassInfo::$InterfaceName( const(void))>
         5c2f8:	eb6d65ec 	bl	1bb5ab0 <$strlen>
         5c2fc:	e1a00004 	mov	r0, r4
         5c300:	eb6e02c4 	bl	1bdce18 <TClassInfo::$Signature( const(void))>
         5c304:	eb6d65e9 	bl	1bb5ab0 <$strlen>
         5c308:	e1a01004 	mov	r1, r4
         5c30c:	e1a00005 	mov	r0, r5
         5c310:	eb6a6e38 	bl	1af7bf8 <TClassInfoRegistryImpl::$Find( const(TClassInfo const *))>
         5c314:	e3500000 	cmp	r0, #0	; 0x0
         5c318:	1a000024 	bne	5c3b0 <TClassInfoRegistryImpl::Register(TClassInfo const *, unsigned long)+0x110>
         5c31c:	e1a00005 	mov	r0, r5
         5c320:	ebfffd0b 	bl	5b754 <TClassInfoRegistryImpl::InvalidateSatisfyCache(void)>
         5c324:	e24dd008 	sub	sp, sp, #8	; 0x8
         5c328:	e92d00d0 	stmdb	sp!, {r4, r6, r7}
         5c32c:	e1a00004 	mov	r0, r4
         5c330:	eb6de5ee 	bl	1bd5af0 <TClassInfo::$InterfaceName( const(void))>
         5c334:	e1a01000 	mov	r1, r0
         5c338:	e1a00005 	mov	r0, r5
         5c33c:	ebffffc0 	bl	5c244 <TClassInfoRegistryImpl::HashString( const(char const *))>
         5c340:	e5cd000d 	strb	r0, [sp, #13]
         5c344:	e1a00440 	mov	r0, r0, asr #8
         5c348:	e5cd000c 	strb	r0, [sp, #12]
         5c34c:	e1a00004 	mov	r0, r4
         5c350:	eb6de1c7 	bl	1bd4a74 <TClassInfo::$ImplementationName( const(void))>
         5c354:	e1a01000 	mov	r1, r0
         5c358:	e1a00005 	mov	r0, r5
         5c35c:	ebffffb8 	bl	5c244 <TClassInfoRegistryImpl::HashString( const(char const *))>
         5c360:	e5cd000f 	strb	r0, [sp, #15]
         5c364:	e1a00440 	mov	r0, r0, asr #8
         5c368:	e5cd000e 	strb	r0, [sp, #14]
         5c36c:	e1a00004 	mov	r0, r4
         5c370:	eb6e06db 	bl	1bddee4 <TClassInfo::$Version( const(void))>
         5c374:	e58d0010 	str	r0, [sp, #16]	; fField16
         5c378:	e1a0100d 	mov	r1, sp
         5c37c:	e5952010 	ldr	r2, [r5, #16]	; fField16
         5c380:	e1a00002 	mov	r0, r2
         5c384:	e5922000 	ldr	r2, [r2]
         5c388:	e1a0e00f 	mov	lr, pc
         5c38c:	e282f00c 	add	pc, r2, #12	; 0xc
         5c390:	e1a01000 	mov	r1, r0
         5c394:	e1a0300d 	mov	r3, sp
         5c398:	e3a02001 	mov	r2, #1	; 0x1
         5c39c:	e5950010 	ldr	r0, [r5, #16]	; fField16
         5c3a0:	eb6d554b 	bl	1bb18d4 <NArray::$InsertElements(long, long, void const *)>
         5c3a4:	e58d0080 	str	r0, [sp, #128]
         5c3a8:	e28dd014 	add	sp, sp, #20	; 0x14
         5c3ac:	ea000006 	b	5c3cc <TClassInfoRegistryImpl::Register(TClassInfo const *, unsigned long)+0x12c>
         5c3b0:	0a000005 	beq	5c3cc <TClassInfoRegistryImpl::Register(TClassInfo const *, unsigned long)+0x12c>
         5c3b4:	e5901008 	ldr	r1, [r0, #8]
         5c3b8:	e1a01821 	mov	r1, r1, lsr #16
         5c3bc:	e2811001 	add	r1, r1, #1	; 0x1
         5c3c0:	e5c01009 	strb	r1, [r0, #9]
         5c3c4:	e1a01441 	mov	r1, r1, asr #8
         5c3c8:	e5c01008 	strb	r1, [r0, #8]
         5c3cc:	e5950014 	ldr	r0, [r5, #20]	; fField20
         5c3d0:	e2800001 	add	r0, r0, #1	; 0x1
         5c3d4:	e5a50014 	str	r0, [r5, #20]!	; fField20
         5c3d8:	ea000009 	b	5c404 <TClassInfoRegistryImpl::Register(TClassInfo const *, unsigned long)+0x164>
         5c3dc:	e59d0060 	ldr	r0, [sp, #96]
         5c3e0:	e59f102c 	ldr	r1, [pc, #2c]	; 5c414 <TClassInfoRegistryImpl::Register(TClassInfo const *, unsigned long)+0x174>
         5c3e4:	e5911000 	ldr	r1, [r1]
         5c3e8:	eb6e1b69 	bl	1be3194 <$Subexception>
         5c3ec:	e3300000 	teq	r0, #0	; 0x0
         5c3f0:	13e00000 	mvnne	r0, #0	; 0x0
         5c3f4:	158d006c 	strne	r0, [sp, #108]
         5c3f8:	1a000001 	bne	5c404 <TClassInfoRegistryImpl::Register(TClassInfo const *, unsigned long)+0x164>
         5c3fc:	e1a0000d 	mov	r0, sp
         5c400:	eb6e1753 	bl	1be2154 <$NextHandler>
         5c404:	e1a0000d 	mov	r0, sp
         5c408:	eb6e132a 	bl	1be10b8 <$ExitHandler>
         5c40c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         5c410:	ea000002 	b	5c420 <TClassInfoRegistryImpl::Register(TClassInfo const *, unsigned long)+0x180>
         5c414:	003712b4 	ldreqh	r1, [r7], -r4
         5c418:	e3e00000 	mvn	r0, #0	; 0x0
         5c41c:	e58d0000 	str	r0, [sp]
         5c420:	e49d0004 	ldr	r0, [sp], #4	; fField4
         5c424:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::DeRegister(TClassInfo const *, unsigned char)
 * Address: 0005c428
 */
TClassInfoRegistryImpl::DeRegister(TClassInfo const *, unsigned char) {
    /*
         5c428:	e1a0c00d 	mov	ip, sp
         5c42c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5c430:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c434:	e1a04000 	mov	r4, r0
         5c438:	e1a05001 	mov	r5, r1
         5c43c:	e20260ff 	and	r6, r2, #255	; 0xff
         5c440:	e3a00000 	mov	r0, #0	; 0x0
         5c444:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         5c448:	e52d006c 	str	r0, [sp, -#108]!
         5c44c:	e28d0008 	add	r0, sp, #8	; 0x8
         5c450:	eb6d5947 	bl	1bb2974 <$setjmp>
         5c454:	e3300000 	teq	r0, #0	; 0x0
         5c458:	1a000026 	bne	5c4f8 <TClassInfoRegistryImpl::DeRegister(TClassInfo const *, unsigned char)+0xd0>
         5c45c:	e1a0000d 	mov	r0, sp
         5c460:	eb6e0f05 	bl	1be007c <$AddExceptionHandler>
         5c464:	e3360000 	teq	r6, #0	; 0x0
         5c468:	e1a01005 	mov	r1, r5
         5c46c:	e1a00004 	mov	r0, r4
         5c470:	0a000001 	beq	5c47c <TClassInfoRegistryImpl::DeRegister(TClassInfo const *, unsigned char)+0x54>
         5c474:	eb6a6ddf 	bl	1af7bf8 <TClassInfoRegistryImpl::$Find( const(TClassInfo const *))>
         5c478:	ea000000 	b	5c480 <TClassInfoRegistryImpl::DeRegister(TClassInfo const *, unsigned char)+0x58>
         5c47c:	eb6aa382 	bl	1b0528c <TClassInfoRegistryImpl::$Satisfy( const(TClassInfo const *))>
         5c480:	e1b05000 	movs	r5, r0
         5c484:	0a000021 	beq	5c510 <TClassInfoRegistryImpl::DeRegister(TClassInfo const *, unsigned char)+0xe8>
         5c488:	e5950008 	ldr	r0, [r5, #8]
         5c48c:	e1a00840 	mov	r0, r0, asr #16
         5c490:	e3500000 	cmp	r0, #0	; 0x0
         5c494:	da000003 	ble	5c4a8 <TClassInfoRegistryImpl::DeRegister(TClassInfo const *, unsigned char)+0x80>
         5c498:	e2400001 	sub	r0, r0, #1	; 0x1
         5c49c:	e5c50009 	strb	r0, [r5, #9]
         5c4a0:	e1a00440 	mov	r0, r0, asr #8
         5c4a4:	e5c50008 	strb	r0, [r5, #8]
         5c4a8:	e5950008 	ldr	r0, [r5, #8]
         5c4ac:	e1b00840 	movs	r0, r0, asr #16
         5c4b0:	1a00001c 	bne	5c528 <TClassInfoRegistryImpl::DeRegister(TClassInfo const *, unsigned char)+0x100>
         5c4b4:	e1a00004 	mov	r0, r4
         5c4b8:	ebfffca5 	bl	5b754 <TClassInfoRegistryImpl::InvalidateSatisfyCache(void)>
         5c4bc:	e1a01005 	mov	r1, r5
         5c4c0:	e5942010 	ldr	r2, [r4, #16]	; fField16
         5c4c4:	e1a00002 	mov	r0, r2
         5c4c8:	e5922000 	ldr	r2, [r2]
         5c4cc:	e1a0e00f 	mov	lr, pc
         5c4d0:	e282f008 	add	pc, r2, #8	; 0x8
         5c4d4:	e1a01000 	mov	r1, r0
         5c4d8:	e3a02001 	mov	r2, #1	; 0x1
         5c4dc:	e5940010 	ldr	r0, [r4, #16]	; fField16
         5c4e0:	eb6d54fc 	bl	1bb18d8 <NArray::$RemoveElements(long, long)>
         5c4e4:	e58d006c 	str	r0, [sp, #108]
         5c4e8:	e5940014 	ldr	r0, [r4, #20]	; fField20
         5c4ec:	e2800001 	add	r0, r0, #1	; 0x1
         5c4f0:	e5a40014 	str	r0, [r4, #20]!	; fField20
         5c4f4:	ea00000b 	b	5c528 <TClassInfoRegistryImpl::DeRegister(TClassInfo const *, unsigned char)+0x100>
         5c4f8:	e59d0060 	ldr	r0, [sp, #96]
         5c4fc:	e59f1018 	ldr	r1, [pc, #18]	; 5c51c <TClassInfoRegistryImpl::DeRegister(TClassInfo const *, unsigned char)+0xf4>
         5c500:	e5911000 	ldr	r1, [r1]
         5c504:	eb6e1b22 	bl	1be3194 <$Subexception>
         5c508:	e3300000 	teq	r0, #0	; 0x0
         5c50c:	0a000003 	beq	5c520 <TClassInfoRegistryImpl::DeRegister(TClassInfo const *, unsigned char)+0xf8>
         5c510:	e3e00000 	mvn	r0, #0	; 0x0
         5c514:	e58d006c 	str	r0, [sp, #108]
         5c518:	ea000002 	b	5c528 <TClassInfoRegistryImpl::DeRegister(TClassInfo const *, unsigned char)+0x100>
         5c51c:	003712b4 	ldreqh	r1, [r7], -r4
         5c520:	e1a0000d 	mov	r0, sp
         5c524:	eb6e170a 	bl	1be2154 <$NextHandler>
         5c528:	e1a0000d 	mov	r0, sp
         5c52c:	eb6e12e1 	bl	1be10b8 <$ExitHandler>
         5c530:	e5bd006c 	ldr	r0, [sp, #108]!
         5c534:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::IsRegistered( const(TClassInfo const *, unsigned char))
 * Address: 0005c538
 */
TClassInfoRegistryImpl::IsRegistered( const(TClassInfo const *, unsigned char)) {
    /*
         5c538:	e1a0c00d 	mov	ip, sp
         5c53c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         5c540:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c544:	e31200ff 	tst	r2, #255	; 0xff
         5c548:	0a000001 	beq	5c554 <TClassInfoRegistryImpl::IsRegistered( const(TClassInfo const *, unsigned char))+0x1c>
         5c54c:	eb6a6da9 	bl	1af7bf8 <TClassInfoRegistryImpl::$Find( const(TClassInfo const *))>
         5c550:	ea000000 	b	5c558 <TClassInfoRegistryImpl::IsRegistered( const(TClassInfo const *, unsigned char))+0x20>
         5c554:	eb6aa34c 	bl	1b0528c <TClassInfoRegistryImpl::$Satisfy( const(TClassInfo const *))>
         5c558:	e1b00000 	movs	r0, r0
         5c55c:	13a00001 	movne	r0, #1	; 0x1
         5c560:	e20000ff 	and	r0, r0, #255	; 0xff
         5c564:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TClassInfoRegistryImpl::Find( const(TClassInfo const *))
 * Address: 0005c568
 */
TClassInfoRegistryImpl::Find( const(TClassInfo const *)) {
    /*
         5c568:	e1a0c00d 	mov	ip, sp
         5c56c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5c570:	e24cb004 	sub	fp, ip, #4	; 0x4
         5c574:	e1a04001 	mov	r4, r1
         5c578:	e5900010 	ldr	r0, [r0, #16]	; fField16
         5c57c:	e3a01000 	mov	r1, #0	; 0x0
         5c580:	e8900024 	ldmia	r0, {r2, r5}
         5c584:	e1a0e00f 	mov	lr, pc
         5c588:	e282f004 	add	pc, r2, #4	; 0x4
         5c58c:	e3a01000 	mov	r1, #0	; 0x0
         5c590:	e3550000 	cmp	r5, #0	; 0x0
         5c594:	9a000006 	bls	5c5b4 <TClassInfoRegistryImpl::Find( const(TClassInfo const *))+0x4c>
         5c598:	e5902000 	ldr	r2, [r0]
         5c59c:	e1320004 	teq	r2, r4
         5c5a0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         5c5a4:	e2800014 	add	r0, r0, #20	; 0x14
         5c5a8:	e2811001 	add	r1, r1, #1	; 0x1
         5c5ac:	e1510005 	cmp	r1, r5
         5c5b0:	3afffff8 	bcc	5c598 <TClassInfoRegistryImpl::Find( const(TClassInfo const *))+0x30>
         5c5b4:	e3a00000 	mov	r0, #0	; 0x0
         5c5b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__22TClassInfoRegistryImplSFv
 * Address: 0038607c
 */
void TClassInfoRegistryImpl::ClassInfo() {
    /*
        38607c:	e24f0044 	sub	r0, pc, #68	; 0x44
        386080:	e1a0f00e 	mov	pc, lr
        386084:	e3a00000 	mov	r0, #0	; 0x0
        386088:	e1a0f00e 	mov	pc, lr
        38608c:	54436c61 	strplb	r6, [r3], -#3169
        386090:	7373496e 	cmnvc	r3, #1802240	; 0x1b8000
        386094:	666f5265 	strvsbt	r5, [pc], -r5, ror #4	; fField4
        386098:	67697374 	undefined
        38609c:	7279496d 	rsbvcs	r4, r9, #1785856	; 0x1b4000
        3860a0:	706c0054 	rsbvc	r0, ip, r4, asr r0
        3860a4:	436c6173 	cmnmi	ip, #-1073741796	; 0xc000001c
        3860a8:	73496e66 	cmpvc	r9, #1632	; 0x660
        3860ac:	6f526567 	swivs	0x00526567
        3860b0:	69737472 	ldmvsdb	r3!, {r1, r4, r5, r6, sl, ip, sp, lr}^
        3860b4:	79000000 	stmvcdb	r0, {}
        3860b8:	00000000 	andeq	r0, r0, r0
        3860bc:	eaffffee 	b	38607c <ClassInfo__22TClassInfoRegistryImplSFv>
        3860c0:	ea5de7ca 	b	1affff0 <TClassInfoRegistryImpl::$New(void)>
        3860c4:	ea5dc291 	b	1af6b10 <TClassInfoRegistryImpl::$Delete(void)>
        3860c8:	ea5df42c 	b	1b03180 <TClassInfoRegistryImpl::$Register(TClassInfo const *, unsigned long)>
        3860cc:	ea5dc2a3 	b	1af6b60 <TClassInfoRegistryImpl::$DeRegister(TClassInfo const *, unsigned char)>
        3860d0:	ea5de38e 	b	1afef10 <TClassInfoRegistryImpl::$IsRegistered( const(TClassInfo const *, unsigned char))>
        3860d4:	ea5dfc6d 	b	1b05290 <$Satisfy__22TClassInfoRegistryImplCFPCcT1Ul>
        3860d8:	ea5dfc75 	b	1b052b4 <TClassInfoRegistryImpl::$Seed( const(void))>
        3860dc:	ea5dcacf 	b	1af8c20 <TClassInfoRegistryImpl::$First( const(long, unsigned long *))>
        3860e0:	ea5de7ce 	b	1b00020 <TClassInfoRegistryImpl::$Next( const(long, TClassInfo const *, unsigned long *))>
        3860e4:	ea5dc6c4 	b	1af7bfc <$Find__22TClassInfoRegistryImplCFPCcT1iPUl>
        3860e8:	ea5e3a5e 	b	1b14a68 <$Satisfy__22TClassInfoRegistryImplCFPCcN21>
        3860ec:	ea5e3a5e 	b	1b14a6c <$Satisfy__22TClassInfoRegistryImplCFPCcN31>
        3860f0:	ea5e3a5e 	b	1b14a70 <$Satisfy__22TClassInfoRegistryImplCFPCcT1ClT3>
        3860f4:	ea5e3a5e 	b	1b14a74 <TClassInfoRegistryImpl::$UpdateInstanceCount(TClassInfo const *, long)>
        3860f8:	ea5e25af 	b	1b0f7bc <TClassInfoRegistryImpl::$GetInstanceCount(TClassInfo const *)>
        3860fc:	e1110001 	tst	r1, r1
        386100:	4a00000c 	bmi	386138 <ClassInfo__22TClassInfoRegistryImplSFv+0xbc>
        386104:	e3510013 	cmp	r1, #19	; 0x13
        386108:	aa00000a 	bge	386138 <ClassInfo__22TClassInfoRegistryImplSFv+0xbc>
        38610c:	e92d4004 	stmdb	sp!, {r2, lr}
        386110:	e5900004 	ldr	r0, [r0, #4]	; fField4
        386114:	e28fc024 	add	ip, pc, #36	; 0x24
        386118:	e08cc181 	add	ip, ip, r1, lsl #3
        38611c:	e1a0e00f 	mov	lr, pc
        386120:	e1a0f00c 	mov	pc, ip
        386124:	e28dd020 	add	sp, sp, #32	; 0x20
        386128:	e8bd4004 	ldmia	sp!, {r2, lr}
        38612c:	e5820000 	str	r0, [r2]
        386130:	e3a00000 	mov	r0, #0	; 0x0
        386134:	e1a0f00e 	mov	pc, lr
        386138:	e3e00000 	mvn	r0, #0	; 0x0
        38613c:	e1a0f00e 	mov	pc, lr
        386140:	ea00001c 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        386144:	ea5de7a9 	b	1affff0 <TClassInfoRegistryImpl::$New(void)>
        386148:	ea00001a 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        38614c:	ea5dc26f 	b	1af6b10 <TClassInfoRegistryImpl::$Delete(void)>
        386150:	ea000018 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        386154:	ea5df409 	b	1b03180 <TClassInfoRegistryImpl::$Register(TClassInfo const *, unsigned long)>
        386158:	ea000016 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        38615c:	ea5dc27f 	b	1af6b60 <TClassInfoRegistryImpl::$DeRegister(TClassInfo const *, unsigned char)>
        386160:	ea000014 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        386164:	ea5de369 	b	1afef10 <TClassInfoRegistryImpl::$IsRegistered( const(TClassInfo const *, unsigned char))>
        386168:	ea000012 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        38616c:	ea5dfc47 	b	1b05290 <$Satisfy__22TClassInfoRegistryImplCFPCcT1Ul>
        386170:	ea000010 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        386174:	ea5dfc4e 	b	1b052b4 <TClassInfoRegistryImpl::$Seed( const(void))>
        386178:	ea00000e 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        38617c:	ea5dcaa7 	b	1af8c20 <TClassInfoRegistryImpl::$First( const(long, unsigned long *))>
        386180:	ea00000c 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        386184:	ea5de7a5 	b	1b00020 <TClassInfoRegistryImpl::$Next( const(long, TClassInfo const *, unsigned long *))>
        386188:	ea00000a 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        38618c:	ea5dc69a 	b	1af7bfc <$Find__22TClassInfoRegistryImplCFPCcT1iPUl>
        386190:	ea000008 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        386194:	ea5e3a33 	b	1b14a68 <$Satisfy__22TClassInfoRegistryImplCFPCcN21>
        386198:	ea000006 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        38619c:	ea5e3a32 	b	1b14a6c <$Satisfy__22TClassInfoRegistryImplCFPCcN31>
        3861a0:	ea000004 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        3861a4:	ea5e3a31 	b	1b14a70 <$Satisfy__22TClassInfoRegistryImplCFPCcT1ClT3>
        3861a8:	ea000002 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        3861ac:	ea5e3a30 	b	1b14a74 <TClassInfoRegistryImpl::$UpdateInstanceCount(TClassInfo const *, long)>
        3861b0:	ea000000 	b	3861b8 <ClassInfo__22TClassInfoRegistryImplSFv+0x13c>
        3861b4:	ea5e2580 	b	1b0f7bc <TClassInfoRegistryImpl::$GetInstanceCount(TClassInfo const *)>
        3861b8:	e3a03008 	mov	r3, #8	; 0x8
        3861bc:	e04dd103 	sub	sp, sp, r3, lsl #2
        3861c0:	e2822010 	add	r2, r2, #16	; 0x10
        3861c4:	ea000001 	b	3861d0 <ClassInfo__22TClassInfoRegistryImplSFv+0x154>
        3861c8:	e7921103 	ldr	r1, [r2, r3, lsl #2]
        3861cc:	e78d1103 	str	r1, [sp, r3, lsl #2]
        3861d0:	e2533001 	subs	r3, r3, #1	; 0x1
        3861d4:	5afffffb 	bpl	3861c8 <ClassInfo__22TClassInfoRegistryImplSFv+0x14c>
        3861d8:	e242200c 	sub	r2, r2, #12	; 0xc
        3861dc:	e892000e 	ldmia	r2, {r1, r2, r3}
        3861e0:	e28cf004 	add	pc, ip, #4	; 0x4
        3861e4:	e1a0000f 	mov	r0, pc
        3861e8:	e1a0f00e 	mov	pc, lr
        3861ec:	54537461 	ldrplb	r7, [r3], -#1121
        3861f0:	72747570 	rsbvcs	r7, r4, #469762048	; 0x1c000000
        3861f4:	44726976 	ldrmibt	r6, [r2], -#2422
        3861f8:	65720000 	ldrvsb	r0, [r2]!
    */
}

