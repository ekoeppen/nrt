#include "include/TWRecDomain.h"

/**
 * Symbol: Make__11TWRecDomainSFP11TController
 * Address: 0026d84c
 */
void TWRecDomain::Make() {
    /*
        26d84c:	e1a0c00d 	mov	ip, sp
        26d850:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26d854:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d858:	e1a04000 	mov	r4, r0
        26d85c:	e3a00028 	mov	r0, #40	; 0x28
        26d860:	eb6583b4 	bl	1bce738 <$__nw(unsigned int)>
        26d864:	e1b05000 	movs	r5, r0
        26d868:	0a000003 	beq	26d87c <Make__11TWRecDomainSFP11TController+0x30>
        26d86c:	e1a00005 	mov	r0, r5
        26d870:	eb63b534 	bl	1b5ad48 <TDomain::$__ct(void)>
        26d874:	e59f0038 	ldr	r0, [pc, #38]	; 26d8b4 <Make__11TWRecDomainSFP11TController+0x68>
        26d878:	e5850000 	str	r0, [r5]
        26d87c:	e3350000 	teq	r5, #0	; 0x0
        26d880:	0a000023 	beq	26d914 <Make__11TWRecDomainSFP11TController+0xc8>
        26d884:	e3a00000 	mov	r0, #0	; 0x0
        26d888:	e52d006c 	str	r0, [sp, -#108]!
        26d88c:	e28d0008 	add	r0, sp, #8	; 0x8
        26d890:	eb651437 	bl	1bb2974 <$setjmp>
        26d894:	e3300000 	teq	r0, #0	; 0x0
        26d898:	1a000006 	bne	26d8b8 <Make__11TWRecDomainSFP11TController+0x6c>
        26d89c:	e1a0000d 	mov	r0, sp
        26d8a0:	eb65c9f5 	bl	1be007c <$AddExceptionHandler>
        26d8a4:	e1a01004 	mov	r1, r4
        26d8a8:	e1a00005 	mov	r0, r5
        26d8ac:	eb63de82 	bl	1b652bc <TWRecDomain::$IWRecDomain(TController *)>
        26d8b0:	ea000014 	b	26d908 <Make__11TWRecDomainSFP11TController+0xbc>
        26d8b4:	0001b74c 	andeq	fp, r1, ip, asr #14
        26d8b8:	e59d0060 	ldr	r0, [sp, #96]
        26d8bc:	e28f1f0d 	add	r1, pc, #52	; 0x34
        26d8c0:	eb65d633 	bl	1be3194 <$Subexception>
        26d8c4:	e3300000 	teq	r0, #0	; 0x0
        26d8c8:	0a00000c 	beq	26d900 <Make__11TWRecDomainSFP11TController+0xb4>
        26d8cc:	e59f0028 	ldr	r0, [pc, #28]	; 26d8fc <Make__11TWRecDomainSFP11TController+0xb0>
        26d8d0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        26d8d4:	eb65d629 	bl	1be3180 <$SetHeap>
        26d8d8:	e5950024 	ldr	r0, [r5, #36]	; fField36
        26d8dc:	e3300000 	teq	r0, #0	; 0x0
        26d8e0:	1b63da5a 	blne	1b64250 <TWRecognizer::$Delete(void)>
        26d8e4:	e1a00005 	mov	r0, r5
        26d8e8:	e1a0e00f 	mov	lr, pc
        26d8ec:	e595f000 	ldr	pc, [r5]
        26d8f0:	e3a05000 	mov	r5, #0	; 0x0
        26d8f4:	ea000003 	b	26d908 <Make__11TWRecDomainSFP11TController+0xbc>
        26d8f8:	00000000 	andeq	r0, r0, r0
        26d8fc:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26d900:	e1a0000d 	mov	r0, sp
        26d904:	eb65d212 	bl	1be2154 <$NextHandler>
        26d908:	e1a0000d 	mov	r0, sp
        26d90c:	eb65cde9 	bl	1be10b8 <$ExitHandler>
        26d910:	e28dd06c 	add	sp, sp, #108	; 0x6c
        26d914:	e1a00005 	mov	r0, r5
        26d918:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TWRecDomain::IWRecDomain(TController *)
 * Address: 0026d91c
 */
TWRecDomain::IWRecDomain(TController *) {
    /*
        26d91c:	e1a0c00d 	mov	ip, sp
        26d920:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26d924:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d928:	e1a04000 	mov	r4, r0
        26d92c:	e1a05001 	mov	r5, r1
        26d930:	e28f3f2b 	add	r3, pc, #172	; 0xac
        26d934:	e59f20c0 	ldr	r2, [pc, #c0]	; 26d9fc <TWRecDomain::IWRecDomain(TController *)+0xe0>
        26d938:	eb63c9ae 	bl	1b5fff8 <TDomain::$IDomain(TController *, unsigned long, char *)>
        26d93c:	e3a07000 	mov	r7, #0	; 0x0
        26d940:	e5847024 	str	r7, [r4, #36]	; fField36
        26d944:	eb65cde8 	bl	1be10ec <$GetHeap>
        26d948:	e59f60b0 	ldr	r6, [pc, #b0]	; 26da00 <TWRecDomain::IWRecDomain(TController *)+0xe4>
        26d94c:	e5860008 	str	r0, [r6, #8]	; fField8
        26d950:	e59f20ac 	ldr	r2, [pc, #ac]	; 26da04 <TWRecDomain::IWRecDomain(TController *)+0xe8>
        26d954:	e3a03000 	mov	r3, #0	; 0x0
        26d958:	e3a01bdd 	mov	r1, #226304	; 0x37400
        26d95c:	e3a00000 	mov	r0, #0	; 0x0
        26d960:	eb65d1f9 	bl	1be214c <$NewVMHeap>
        26d964:	e3300000 	teq	r0, #0	; 0x0
        26d968:	15867004 	strne	r7, [r6, #4]
        26d96c:	e28f0f25 	add	r0, pc, #148	; 0x94
        26d970:	e3a01000 	mov	r1, #0	; 0x0
        26d974:	eb65a884 	bl	1bd7b8c <$NewByName__FPCcT1>
        26d978:	e1b07000 	movs	r7, r0
        26d97c:	1a000004 	bne	26d994 <TWRecDomain::IWRecDomain(TController *)+0x78>
        26d980:	e59f0090 	ldr	r0, [pc, #90]	; 26da18 <TWRecDomain::IWRecDomain(TController *)+0xfc>
        26d984:	e5900000 	ldr	r0, [r0]
        26d988:	e3a02000 	mov	r2, #0	; 0x0
        26d98c:	e3a01000 	mov	r1, #0	; 0x0
        26d990:	eb65d601 	bl	1be319c <$Throw>
        26d994:	e5874010 	str	r4, [r7, #16]
        26d998:	e5847024 	str	r7, [r4, #36]	; fField36
        26d99c:	e5960004 	ldr	r0, [r6, #4]
        26d9a0:	eb65d5f6 	bl	1be3180 <$SetHeap>
        26d9a4:	e1a00007 	mov	r0, r7
        26d9a8:	eb63de48 	bl	1b652d0 <TWRecognizer::$Initialize(void)>
        26d9ac:	e5b60008 	ldr	r0, [r6, #8]!	; fField8
        26d9b0:	eb65d5f2 	bl	1be3180 <$SetHeap>
        26d9b4:	e1a00004 	mov	r0, r4
        26d9b8:	e3a01102 	mov	r1, #-2147483648	; 0x80000000
        26d9bc:	eb63d1ec 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        26d9c0:	e1a00004 	mov	r0, r4
        26d9c4:	e59f1050 	ldr	r1, [pc, #50]	; 26da1c <TWRecDomain::IWRecDomain(TController *)+0x100>
        26d9c8:	eb63b4eb 	bl	1b5ad7c <TDomain::$AddPieceType(unsigned long)>
        26d9cc:	e3a00078 	mov	r0, #120	; 0x78
        26d9d0:	e5840018 	str	r0, [r4, #24]	; fField24
        26d9d4:	e1a01004 	mov	r1, r4
        26d9d8:	e1a00005 	mov	r0, r5
        26d9dc:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        26d9e0:	ea63d1cf 	b	1b62124 <TController::$RegisterDomain(TDomain *)>
        26d9e4:	50726f74 	rsbpls	r6, r2, r4, ror pc
        26d9e8:	6f636f6c 	swivs	0x00636f6c
        26d9ec:	2d626173 	stfcse	f6, [r2, -#460]!
        26d9f0:	65642057 	strvsb	r2, [r4, -#87]!	; fField87
        26d9f4:	6f72642d 	swivs	0x0072642d
        26d9f8:	72656300 	rsbvc	r6, r5, #0	; 0x0
        26d9fc:	57524543 	ldrplb	r4, [r2, -r3, asr #10]
        26da00:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26da04:	0c104f7c 	ldceq	15, cr4, [r0], -#496
        26da08:	54575265 	ldrplb	r5, [r7], -#613
        26da0c:	636f676e 	cmnvs	pc, #28835840	; 0x1b80000
        26da10:	697a6572 	ldmvsdb	sl!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        26da14:	00000000 	andeq	r0, r0, r0
        26da18:	003712b4 	ldreqh	r1, [r7], -r4
        26da1c:	5354524b 	cmppl	r4, #-1342177276	; 0xb0000004
    */
}

/**
 * Symbol: TWRecDomain::VerifyWordSymbols(unsigned short *)
 * Address: 0026da20
 */
TWRecDomain::VerifyWordSymbols(unsigned short *) {
    /*
        26da20:	e1a0c00d 	mov	ip, sp
        26da24:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26da28:	e24cb004 	sub	fp, ip, #4	; 0x4
        26da2c:	e1a04000 	mov	r4, r0
        26da30:	e1a05001 	mov	r5, r1
        26da34:	e3a00000 	mov	r0, #0	; 0x0
        26da38:	e52d0004 	str	r0, [sp, -#4]!
        26da3c:	e52d006c 	str	r0, [sp, -#108]!
        26da40:	e28d0008 	add	r0, sp, #8	; 0x8
        26da44:	eb6513ca 	bl	1bb2974 <$setjmp>
        26da48:	e59f6030 	ldr	r6, [pc, #30]	; 26da80 <TWRecDomain::VerifyWordSymbols(unsigned short *)+0x60>
        26da4c:	e3300000 	teq	r0, #0	; 0x0
        26da50:	1a00000b 	bne	26da84 <TWRecDomain::VerifyWordSymbols(unsigned short *)+0x64>
        26da54:	e1a0000d 	mov	r0, sp
        26da58:	eb65c987 	bl	1be007c <$AddExceptionHandler>
        26da5c:	e5960004 	ldr	r0, [r6, #4]
        26da60:	eb65d5c6 	bl	1be3180 <$SetHeap>
        26da64:	e1a01005 	mov	r1, r5
        26da68:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        26da6c:	eb63e23b 	bl	1b66360 <TWRecognizer::$VerifyWordSymbols(unsigned short *)>
        26da70:	e58d006c 	str	r0, [sp, #108]
        26da74:	e5b60008 	ldr	r0, [r6, #8]!	; fField8
        26da78:	eb65d5c0 	bl	1be3180 <$SetHeap>
        26da7c:	ea00000d 	b	26dab8 <TWRecDomain::VerifyWordSymbols(unsigned short *)+0x98>
        26da80:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26da84:	e59d0060 	ldr	r0, [sp, #96]
        26da88:	e28f1f07 	add	r1, pc, #28	; 0x1c
        26da8c:	eb65d5c0 	bl	1be3194 <$Subexception>
        26da90:	e3300000 	teq	r0, #0	; 0x0
        26da94:	0a000005 	beq	26dab0 <TWRecDomain::VerifyWordSymbols(unsigned short *)+0x90>
        26da98:	e5b60008 	ldr	r0, [r6, #8]!	; fField8
        26da9c:	eb65d5b7 	bl	1be3180 <$SetHeap>
        26daa0:	e1a00004 	mov	r0, r4
        26daa4:	eb63f2aa 	bl	1b6a554 <TWRecDomain::$SignalMemoryError(void)>
        26daa8:	ea000002 	b	26dab8 <TWRecDomain::VerifyWordSymbols(unsigned short *)+0x98>
        26daac:	00000000 	andeq	r0, r0, r0
        26dab0:	e1a0000d 	mov	r0, sp
        26dab4:	eb65d1a6 	bl	1be2154 <$NextHandler>
        26dab8:	e1a0000d 	mov	r0, sp
        26dabc:	eb65cd7d 	bl	1be10b8 <$ExitHandler>
        26dac0:	e5bd006c 	ldr	r0, [sp, #108]!
        26dac4:	e20000ff 	and	r0, r0, #255	; 0xff
        26dac8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TWRecDomain::UnitInfoFreePtr(char *)
 * Address: 0026dacc
 */
TWRecDomain::UnitInfoFreePtr(char *) {
    /*
        26dacc:	e1a0c00d 	mov	ip, sp
        26dad0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26dad4:	e24cb004 	sub	fp, ip, #4	; 0x4
        26dad8:	e1a04000 	mov	r4, r0
        26dadc:	e1a05001 	mov	r5, r1
        26dae0:	e3a00000 	mov	r0, #0	; 0x0
        26dae4:	e52d006c 	str	r0, [sp, -#108]!
        26dae8:	e28d0008 	add	r0, sp, #8	; 0x8
        26daec:	eb6513a0 	bl	1bb2974 <$setjmp>
        26daf0:	e59f602c 	ldr	r6, [pc, #2c]	; 26db24 <TWRecDomain::UnitInfoFreePtr(char *)+0x58>
        26daf4:	e3300000 	teq	r0, #0	; 0x0
        26daf8:	1a00000a 	bne	26db28 <TWRecDomain::UnitInfoFreePtr(char *)+0x5c>
        26dafc:	e1a0000d 	mov	r0, sp
        26db00:	eb65c95d 	bl	1be007c <$AddExceptionHandler>
        26db04:	e5960004 	ldr	r0, [r6, #4]
        26db08:	eb65d59c 	bl	1be3180 <$SetHeap>
        26db0c:	e1a01005 	mov	r1, r5
        26db10:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        26db14:	eb63e20c 	bl	1b6634c <TWRecognizer::$UnitInfoFreePtr(char *)>
        26db18:	e5b60008 	ldr	r0, [r6, #8]!	; fField8
        26db1c:	eb65d597 	bl	1be3180 <$SetHeap>
        26db20:	ea00000d 	b	26db5c <TWRecDomain::UnitInfoFreePtr(char *)+0x90>
        26db24:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26db28:	e59d0060 	ldr	r0, [sp, #96]
        26db2c:	e28f1f07 	add	r1, pc, #28	; 0x1c
        26db30:	eb65d597 	bl	1be3194 <$Subexception>
        26db34:	e3300000 	teq	r0, #0	; 0x0
        26db38:	0a000005 	beq	26db54 <TWRecDomain::UnitInfoFreePtr(char *)+0x88>
        26db3c:	e5b60008 	ldr	r0, [r6, #8]!	; fField8
        26db40:	eb65d58e 	bl	1be3180 <$SetHeap>
        26db44:	e1a00004 	mov	r0, r4
        26db48:	eb63f281 	bl	1b6a554 <TWRecDomain::$SignalMemoryError(void)>
        26db4c:	ea000002 	b	26db5c <TWRecDomain::UnitInfoFreePtr(char *)+0x90>
        26db50:	00000000 	andeq	r0, r0, r0
        26db54:	e1a0000d 	mov	r0, sp
        26db58:	eb65d17d 	bl	1be2154 <$NextHandler>
        26db5c:	e1a0000d 	mov	r0, sp
        26db60:	eb65cd54 	bl	1be10b8 <$ExitHandler>
        26db64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TWRecDomain::UnitConfidence(TSIUnit *)
 * Address: 0026db68
 */
TWRecDomain::UnitConfidence(TSIUnit *) {
    /*
        26db68:	e1a0c00d 	mov	ip, sp
        26db6c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26db70:	e24cb004 	sub	fp, ip, #4	; 0x4
        26db74:	e1a04000 	mov	r4, r0
        26db78:	e3a00002 	mov	r0, #2	; 0x2
        26db7c:	e1a06001 	mov	r6, r1
        26db80:	e52d0004 	str	r0, [sp, -#4]!
        26db84:	e3a00000 	mov	r0, #0	; 0x0
        26db88:	e52d006c 	str	r0, [sp, -#108]!
        26db8c:	e28d0008 	add	r0, sp, #8	; 0x8
        26db90:	eb651377 	bl	1bb2974 <$setjmp>
        26db94:	e59f5030 	ldr	r5, [pc, #30]	; 26dbcc <TWRecDomain::UnitConfidence(TSIUnit *)+0x64>
        26db98:	e3300000 	teq	r0, #0	; 0x0
        26db9c:	1a00000b 	bne	26dbd0 <TWRecDomain::UnitConfidence(TSIUnit *)+0x68>
        26dba0:	e1a0000d 	mov	r0, sp
        26dba4:	eb65c934 	bl	1be007c <$AddExceptionHandler>
        26dba8:	e5950004 	ldr	r0, [r5, #4]
        26dbac:	eb65d573 	bl	1be3180 <$SetHeap>
        26dbb0:	e1a01006 	mov	r1, r6
        26dbb4:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        26dbb8:	eb63e1e1 	bl	1b66344 <TWRecognizer::$UnitConfidence(TWRecUnit *)>
        26dbbc:	e58d006c 	str	r0, [sp, #108]
        26dbc0:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        26dbc4:	eb65d56d 	bl	1be3180 <$SetHeap>
        26dbc8:	ea00000d 	b	26dc04 <TWRecDomain::UnitConfidence(TSIUnit *)+0x9c>
        26dbcc:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26dbd0:	e59d0060 	ldr	r0, [sp, #96]
        26dbd4:	e28f1f07 	add	r1, pc, #28	; 0x1c
        26dbd8:	eb65d56d 	bl	1be3194 <$Subexception>
        26dbdc:	e3300000 	teq	r0, #0	; 0x0
        26dbe0:	0a000005 	beq	26dbfc <TWRecDomain::UnitConfidence(TSIUnit *)+0x94>
        26dbe4:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        26dbe8:	eb65d564 	bl	1be3180 <$SetHeap>
        26dbec:	e1a00004 	mov	r0, r4
        26dbf0:	eb63f257 	bl	1b6a554 <TWRecDomain::$SignalMemoryError(void)>
        26dbf4:	ea000002 	b	26dc04 <TWRecDomain::UnitConfidence(TSIUnit *)+0x9c>
        26dbf8:	00000000 	andeq	r0, r0, r0
        26dbfc:	e1a0000d 	mov	r0, sp
        26dc00:	eb65d153 	bl	1be2154 <$NextHandler>
        26dc04:	e1a0000d 	mov	r0, sp
        26dc08:	eb65cd2a 	bl	1be10b8 <$ExitHandler>
        26dc0c:	e5bd006c 	ldr	r0, [sp, #108]!
        26dc10:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TWRecDomain::Sleep(void)
 * Address: 0026dc14
 */
TWRecDomain::Sleep(void) {
    /*
        26dc14:	e1a0c00d 	mov	ip, sp
        26dc18:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26dc1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        26dc20:	e1a04000 	mov	r4, r0
        26dc24:	e3a06000 	mov	r6, #0	; 0x0
        26dc28:	e52d606c 	str	r6, [sp, -#108]!
        26dc2c:	e28d0008 	add	r0, sp, #8	; 0x8
        26dc30:	eb65134f 	bl	1bb2974 <$setjmp>
        26dc34:	e59f5044 	ldr	r5, [pc, #44]	; 26dc80 <TWRecDomain::Sleep(void)+0x6c>
        26dc38:	e3300000 	teq	r0, #0	; 0x0
        26dc3c:	1a000010 	bne	26dc84 <TWRecDomain::Sleep(void)+0x70>
        26dc40:	e1a0000d 	mov	r0, sp
        26dc44:	eb65c90c 	bl	1be007c <$AddExceptionHandler>
        26dc48:	e5950004 	ldr	r0, [r5, #4]
        26dc4c:	eb65d54b 	bl	1be3180 <$SetHeap>
        26dc50:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        26dc54:	eb63e1b5 	bl	1b66330 <TWRecognizer::$Sleep(void)>
        26dc58:	e5950008 	ldr	r0, [r5, #8]	; fField8
        26dc5c:	eb65d547 	bl	1be3180 <$SetHeap>
        26dc60:	e9950003 	ldmib	r5, {r0, r1}
        26dc64:	e1300001 	teq	r0, r1
        26dc68:	0a000002 	beq	26dc78 <TWRecDomain::Sleep(void)+0x64>
        26dc6c:	eb65cd0d 	bl	1be10a8 <$DestroyVMHeap>
        26dc70:	e3300000 	teq	r0, #0	; 0x0
        26dc74:	1a00000f 	bne	26dcb8 <TWRecDomain::Sleep(void)+0xa4>
        26dc78:	e5a56004 	str	r6, [r5, #4]!
        26dc7c:	ea00000d 	b	26dcb8 <TWRecDomain::Sleep(void)+0xa4>
        26dc80:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26dc84:	e59d0060 	ldr	r0, [sp, #96]
        26dc88:	e28f1f07 	add	r1, pc, #28	; 0x1c
        26dc8c:	eb65d540 	bl	1be3194 <$Subexception>
        26dc90:	e3300000 	teq	r0, #0	; 0x0
        26dc94:	0a000005 	beq	26dcb0 <TWRecDomain::Sleep(void)+0x9c>
        26dc98:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        26dc9c:	eb65d537 	bl	1be3180 <$SetHeap>
        26dca0:	e1a00004 	mov	r0, r4
        26dca4:	eb63f22a 	bl	1b6a554 <TWRecDomain::$SignalMemoryError(void)>
        26dca8:	ea000002 	b	26dcb8 <TWRecDomain::Sleep(void)+0xa4>
        26dcac:	00000000 	andeq	r0, r0, r0
        26dcb0:	e1a0000d 	mov	r0, sp
        26dcb4:	eb65d126 	bl	1be2154 <$NextHandler>
        26dcb8:	e1a0000d 	mov	r0, sp
        26dcbc:	eb65ccfd 	bl	1be10b8 <$ExitHandler>
        26dcc0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TWRecDomain::WakeUp(void)
 * Address: 0026dcc4
 */
TWRecDomain::WakeUp(void) {
    /*
        26dcc4:	e1a0c00d 	mov	ip, sp
        26dcc8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26dccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        26dcd0:	e1a04000 	mov	r4, r0
        26dcd4:	e3a00000 	mov	r0, #0	; 0x0
        26dcd8:	e52d006c 	str	r0, [sp, -#108]!
        26dcdc:	e28d0008 	add	r0, sp, #8	; 0x8
        26dce0:	eb651323 	bl	1bb2974 <$setjmp>
        26dce4:	e59f505c 	ldr	r5, [pc, #5c]	; 26dd48 <TWRecDomain::WakeUp(void)+0x84>
        26dce8:	e3300000 	teq	r0, #0	; 0x0
        26dcec:	1a000017 	bne	26dd50 <TWRecDomain::WakeUp(void)+0x8c>
        26dcf0:	e1a0000d 	mov	r0, sp
        26dcf4:	eb65c8e0 	bl	1be007c <$AddExceptionHandler>
        26dcf8:	e5950004 	ldr	r0, [r5, #4]
        26dcfc:	e3300000 	teq	r0, #0	; 0x0
        26dd00:	15951008 	ldrne	r1, [r5, #8]	; fField8
        26dd04:	11300001 	teqne	r0, r1
        26dd08:	1a000007 	bne	26dd2c <TWRecDomain::WakeUp(void)+0x68>
        26dd0c:	e59f2038 	ldr	r2, [pc, #38]	; 26dd4c <TWRecDomain::WakeUp(void)+0x88>
        26dd10:	e3a03000 	mov	r3, #0	; 0x0
        26dd14:	e3a01bdd 	mov	r1, #226304	; 0x37400
        26dd18:	e3a00000 	mov	r0, #0	; 0x0
        26dd1c:	eb65d10a 	bl	1be214c <$NewVMHeap>
        26dd20:	e3300000 	teq	r0, #0	; 0x0
        26dd24:	15950008 	ldrne	r0, [r5, #8]	; fField8
        26dd28:	15850004 	strne	r0, [r5, #4]
        26dd2c:	e5950004 	ldr	r0, [r5, #4]
        26dd30:	eb65d512 	bl	1be3180 <$SetHeap>
        26dd34:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        26dd38:	eb63e18a 	bl	1b66368 <TWRecognizer::$WakeUp(void)>
        26dd3c:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        26dd40:	eb65d50e 	bl	1be3180 <$SetHeap>
        26dd44:	ea00000e 	b	26dd84 <TWRecDomain::WakeUp(void)+0xc0>
        26dd48:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26dd4c:	0c104f7c 	ldceq	15, cr4, [r0], -#496
        26dd50:	e59d0060 	ldr	r0, [sp, #96]
        26dd54:	e28f1f07 	add	r1, pc, #28	; 0x1c
        26dd58:	eb65d50d 	bl	1be3194 <$Subexception>
        26dd5c:	e3300000 	teq	r0, #0	; 0x0
        26dd60:	0a000005 	beq	26dd7c <TWRecDomain::WakeUp(void)+0xb8>
        26dd64:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        26dd68:	eb65d504 	bl	1be3180 <$SetHeap>
        26dd6c:	e1a00004 	mov	r0, r4
        26dd70:	eb63f1f7 	bl	1b6a554 <TWRecDomain::$SignalMemoryError(void)>
        26dd74:	ea000002 	b	26dd84 <TWRecDomain::WakeUp(void)+0xc0>
        26dd78:	00000000 	andeq	r0, r0, r0
        26dd7c:	e1a0000d 	mov	r0, sp
        26dd80:	eb65d0f3 	bl	1be2154 <$NextHandler>
        26dd84:	e1a0000d 	mov	r0, sp
        26dd88:	eb65ccca 	bl	1be10b8 <$ExitHandler>
        26dd8c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TWRecDomain::SignalMemoryError(void)
 * Address: 0026dd90
 */
TWRecDomain::SignalMemoryError(void) {
    /*
        26dd90:	e1a0c00d 	mov	ip, sp
        26dd94:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        26dd98:	e24cb004 	sub	fp, ip, #4	; 0x4
        26dd9c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        26dda0:	eb63d4fc 	bl	1b63198 <TController::$SignalMemoryError(void)>
        26dda4:	e59f000c 	ldr	r0, [pc, #c]	; 26ddb8 <TWRecDomain::SignalMemoryError(void)+0x28>
        26dda8:	e5901000 	ldr	r1, [r0]
        26ddac:	e2811001 	add	r1, r1, #1	; 0x1
        26ddb0:	e5801000 	str	r1, [r0]
        26ddb4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        26ddb8:	0c104f78 	ldceq	15, cr4, [r0], -#480
    */
}

/**
 * Symbol: TWRecDomain::Dispose(void)
 * Address: 0026df2c
 */
TWRecDomain::Dispose(void) {
    /*
        26df2c:	e1a0c00d 	mov	ip, sp
        26df30:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26df34:	e24cb004 	sub	fp, ip, #4	; 0x4
        26df38:	e1a04000 	mov	r4, r0
        26df3c:	e59f501c 	ldr	r5, [pc, #1c]	; 26df60 <TWRecDomain::Dispose(void)+0x34>
        26df40:	e5950008 	ldr	r0, [r5, #8]	; fField8
        26df44:	eb65d48d 	bl	1be3180 <$SetHeap>
        26df48:	e5b50004 	ldr	r0, [r5, #4]!
        26df4c:	e3300000 	teq	r0, #0	; 0x0
        26df50:	1b65cc54 	blne	1be10a8 <$DestroyVMHeap>
        26df54:	e1a00004 	mov	r0, r4
        26df58:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        26df5c:	ea63bfce 	b	1b5de9c <TDomain::$Dispose(void)>
        26df60:	0c104f78 	ldceq	15, cr4, [r0], -#480
    */
}

/**
 * Symbol: TWRecDomain::Classify(TUnit *)
 * Address: 0026e0a8
 */
TWRecDomain::Classify(TUnit *) {
    /*
        26e0a8:	e1a0c00d 	mov	ip, sp
        26e0ac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26e0b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e0b4:	e1a04000 	mov	r4, r0
        26e0b8:	e1a05001 	mov	r5, r1
        26e0bc:	e1a06001 	mov	r6, r1
        26e0c0:	e3a00000 	mov	r0, #0	; 0x0
        26e0c4:	e52d006c 	str	r0, [sp, -#108]!
        26e0c8:	e28d0008 	add	r0, sp, #8	; 0x8
        26e0cc:	eb651228 	bl	1bb2974 <$setjmp>
        26e0d0:	e59f707c 	ldr	r7, [pc, #7c]	; 26e154 <TWRecDomain::Classify(TUnit *)+0xac>
        26e0d4:	e3300000 	teq	r0, #0	; 0x0
        26e0d8:	1a00001e 	bne	26e158 <TWRecDomain::Classify(TUnit *)+0xb0>
        26e0dc:	e1a0000d 	mov	r0, sp
        26e0e0:	eb65c7e5 	bl	1be007c <$AddExceptionHandler>
        26e0e4:	e5970004 	ldr	r0, [r7, #4]
        26e0e8:	eb65d424 	bl	1be3180 <$SetHeap>
        26e0ec:	e1a01006 	mov	r1, r6
        26e0f0:	e5940024 	ldr	r0, [r4, #36]	; fField36
        26e0f4:	eb63d84f 	bl	1b64238 <TWRecognizer::$Classify(TWRecUnit *)>
        26e0f8:	e5b70008 	ldr	r0, [r7, #8]!	; fField8
        26e0fc:	eb65d41f 	bl	1be3180 <$SetHeap>
        26e100:	e1a00006 	mov	r0, r6
        26e104:	e5961000 	ldr	r1, [r6]
        26e108:	e1a0e00f 	mov	lr, pc
        26e10c:	e281f020 	add	pc, r1, #32	; 0x20
        26e110:	e3300000 	teq	r0, #0	; 0x0
        26e114:	1a000006 	bne	26e134 <TWRecDomain::Classify(TUnit *)+0x8c>
        26e118:	e1a00006 	mov	r0, r6
        26e11c:	e3a01501 	mov	r1, #4194304	; 0x400000
        26e120:	eb63d013 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        26e124:	e1a00006 	mov	r0, r6
        26e128:	e5961000 	ldr	r1, [r6]
        26e12c:	e1a0e00f 	mov	lr, pc
        26e130:	e281f060 	add	pc, r1, #96	; 0x60
        26e134:	e1a00005 	mov	r0, r5
        26e138:	e3a01682 	mov	r1, #136314880	; 0x8200000
        26e13c:	eb63d429 	bl	1b631e8 <TRecObject::$TestFlags(unsigned long)>
        26e140:	e3300000 	teq	r0, #0	; 0x0
        26e144:	01a01006 	moveq	r1, r6
        26e148:	05b40008 	ldreq	r0, [r4, #8]!	; fField8
        26e14c:	0b63cbe1 	bleq	1b610d8 <TController::$NewClassification(TUnit *)>
        26e150:	ea000010 	b	26e198 <TWRecDomain::Classify(TUnit *)+0xf0>
        26e154:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26e158:	e59d0060 	ldr	r0, [sp, #96]
        26e15c:	e28f1f0a 	add	r1, pc, #40	; 0x28
        26e160:	eb65d40b 	bl	1be3194 <$Subexception>
        26e164:	e3300000 	teq	r0, #0	; 0x0
        26e168:	0a000008 	beq	26e190 <TWRecDomain::Classify(TUnit *)+0xe8>
        26e16c:	e5b70008 	ldr	r0, [r7, #8]!	; fField8
        26e170:	eb65d402 	bl	1be3180 <$SetHeap>
        26e174:	e1a00004 	mov	r0, r4
        26e178:	eb63f0f5 	bl	1b6a554 <TWRecDomain::$SignalMemoryError(void)>
        26e17c:	e1a00006 	mov	r0, r6
        26e180:	e3a01501 	mov	r1, #4194304	; 0x400000
        26e184:	eb63cffa 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        26e188:	ea000002 	b	26e198 <TWRecDomain::Classify(TUnit *)+0xf0>
        26e18c:	00000000 	andeq	r0, r0, r0
        26e190:	e1a0000d 	mov	r0, sp
        26e194:	eb65cfee 	bl	1be2154 <$NextHandler>
        26e198:	e1a0000d 	mov	r0, sp
        26e19c:	eb65cbc5 	bl	1be10b8 <$ExitHandler>
        26e1a0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TWRecDomain::Reclassify(TUnit *)
 * Address: 0026e308
 */
TWRecDomain::Reclassify(TUnit *) {
    /*
        26e308:	e1a0c00d 	mov	ip, sp
        26e30c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26e310:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e314:	e1a04000 	mov	r4, r0
        26e318:	e1a05001 	mov	r5, r1
        26e31c:	e1a00001 	mov	r0, r1
        26e320:	e5911000 	ldr	r1, [r1]
        26e324:	e1a0e00f 	mov	lr, pc
        26e328:	e281f020 	add	pc, r1, #32	; 0x20
        26e32c:	e2506001 	subs	r6, r0, #1	; 0x1
        26e330:	4a000006 	bmi	26e350 <TWRecDomain::Reclassify(TUnit *)+0x48>
        26e334:	e1a01006 	mov	r1, r6
        26e338:	e1a00005 	mov	r0, r5
        26e33c:	e5952000 	ldr	r2, [r5]
        26e340:	e1a0e00f 	mov	lr, pc
        26e344:	e282f070 	add	pc, r2, #112	; 0x70
        26e348:	e2566001 	subs	r6, r6, #1	; 0x1
        26e34c:	5afffff8 	bpl	26e334 <TWRecDomain::Reclassify(TUnit *)+0x2c>
        26e350:	e3a00000 	mov	r0, #0	; 0x0
        26e354:	e52d006c 	str	r0, [sp, -#108]!
        26e358:	e28d0008 	add	r0, sp, #8	; 0x8
        26e35c:	eb651184 	bl	1bb2974 <$setjmp>
        26e360:	e59f602c 	ldr	r6, [pc, #2c]	; 26e394 <TWRecDomain::Reclassify(TUnit *)+0x8c>
        26e364:	e3300000 	teq	r0, #0	; 0x0
        26e368:	1a00000a 	bne	26e398 <TWRecDomain::Reclassify(TUnit *)+0x90>
        26e36c:	e1a0000d 	mov	r0, sp
        26e370:	eb65c741 	bl	1be007c <$AddExceptionHandler>
        26e374:	e5960004 	ldr	r0, [r6, #4]
        26e378:	eb65d380 	bl	1be3180 <$SetHeap>
        26e37c:	e1a01005 	mov	r1, r5
        26e380:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        26e384:	eb63dbdc 	bl	1b652fc <TWRecognizer::$Reclassify(TWRecUnit *)>
        26e388:	e5b60008 	ldr	r0, [r6, #8]!	; fField8
        26e38c:	eb65d37b 	bl	1be3180 <$SetHeap>
        26e390:	ea000010 	b	26e3d8 <TWRecDomain::Reclassify(TUnit *)+0xd0>
        26e394:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26e398:	e59d0060 	ldr	r0, [sp, #96]
        26e39c:	e28f1f0a 	add	r1, pc, #40	; 0x28
        26e3a0:	eb65d37b 	bl	1be3194 <$Subexception>
        26e3a4:	e3300000 	teq	r0, #0	; 0x0
        26e3a8:	0a000008 	beq	26e3d0 <TWRecDomain::Reclassify(TUnit *)+0xc8>
        26e3ac:	e5b60008 	ldr	r0, [r6, #8]!	; fField8
        26e3b0:	eb65d372 	bl	1be3180 <$SetHeap>
        26e3b4:	e1a00004 	mov	r0, r4
        26e3b8:	eb63f065 	bl	1b6a554 <TWRecDomain::$SignalMemoryError(void)>
        26e3bc:	e1a00005 	mov	r0, r5
        26e3c0:	e3a01501 	mov	r1, #4194304	; 0x400000
        26e3c4:	eb63cf6a 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        26e3c8:	ea000002 	b	26e3d8 <TWRecDomain::Reclassify(TUnit *)+0xd0>
        26e3cc:	00000000 	andeq	r0, r0, r0
        26e3d0:	e1a0000d 	mov	r0, sp
        26e3d4:	eb65cf5e 	bl	1be2154 <$NextHandler>
        26e3d8:	e1a0000d 	mov	r0, sp
        26e3dc:	eb65cb35 	bl	1be10b8 <$ExitHandler>
        26e3e0:	e28dd06c 	add	sp, sp, #108	; 0x6c
        26e3e4:	e1a00005 	mov	r0, r5
        26e3e8:	e5951000 	ldr	r1, [r5]
        26e3ec:	e1a0e00f 	mov	lr, pc
        26e3f0:	e281f020 	add	pc, r1, #32	; 0x20
        26e3f4:	e3300000 	teq	r0, #0	; 0x0
        26e3f8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        26e3fc:	e1a00005 	mov	r0, r5
        26e400:	e3a01501 	mov	r1, #4194304	; 0x400000
        26e404:	eb63cf5a 	bl	1b62174 <TRecObject::$SetFlags(unsigned long)>
        26e408:	e1a00005 	mov	r0, r5
        26e40c:	e5951000 	ldr	r1, [r5]
        26e410:	e1a0e00f 	mov	lr, pc
        26e414:	e281f060 	add	pc, r1, #96	; 0x60
        26e418:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TWRecDomain::Group(TUnit *, dInfoRec *)
 * Address: 0026e478
 */
TWRecDomain::Group(TUnit *, dInfoRec *) {
    /*
        26e478:	e1a0c00d 	mov	ip, sp
        26e47c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26e480:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e484:	e1a04000 	mov	r4, r0
        26e488:	e1a05001 	mov	r5, r1
        26e48c:	e3a00000 	mov	r0, #0	; 0x0
        26e490:	e52d006c 	str	r0, [sp, -#108]!
        26e494:	e28d0008 	add	r0, sp, #8	; 0x8
        26e498:	eb651135 	bl	1bb2974 <$setjmp>
        26e49c:	e3a07001 	mov	r7, #1	; 0x1
        26e4a0:	e59f602c 	ldr	r6, [pc, #2c]	; 26e4d4 <TWRecDomain::Group(TUnit *, dInfoRec *)+0x5c>
        26e4a4:	e3300000 	teq	r0, #0	; 0x0
        26e4a8:	1a00000a 	bne	26e4d8 <TWRecDomain::Group(TUnit *, dInfoRec *)+0x60>
        26e4ac:	e1a0000d 	mov	r0, sp
        26e4b0:	eb65c6f1 	bl	1be007c <$AddExceptionHandler>
        26e4b4:	e5960004 	ldr	r0, [r6, #4]
        26e4b8:	eb65d330 	bl	1be3180 <$SetHeap>
        26e4bc:	e1a01005 	mov	r1, r5
        26e4c0:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        26e4c4:	eb63db76 	bl	1b652a4 <TWRecognizer::$Group(TStrokeUnit *)>
        26e4c8:	e5b60008 	ldr	r0, [r6, #8]!	; fField8
        26e4cc:	eb65d32b 	bl	1be3180 <$SetHeap>
        26e4d0:	ea00000d 	b	26e50c <TWRecDomain::Group(TUnit *, dInfoRec *)+0x94>
        26e4d4:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26e4d8:	e59d0060 	ldr	r0, [sp, #96]
        26e4dc:	e28f1f07 	add	r1, pc, #28	; 0x1c
        26e4e0:	eb65d32b 	bl	1be3194 <$Subexception>
        26e4e4:	e3300000 	teq	r0, #0	; 0x0
        26e4e8:	0a000005 	beq	26e504 <TWRecDomain::Group(TUnit *, dInfoRec *)+0x8c>
        26e4ec:	e5b60008 	ldr	r0, [r6, #8]!	; fField8
        26e4f0:	eb65d322 	bl	1be3180 <$SetHeap>
        26e4f4:	e1a00004 	mov	r0, r4
        26e4f8:	eb63f015 	bl	1b6a554 <TWRecDomain::$SignalMemoryError(void)>
        26e4fc:	ea000002 	b	26e50c <TWRecDomain::Group(TUnit *, dInfoRec *)+0x94>
        26e500:	00000000 	andeq	r0, r0, r0
        26e504:	e1a0000d 	mov	r0, sp
        26e508:	eb65cf11 	bl	1be2154 <$NextHandler>
        26e50c:	e1a0000d 	mov	r0, sp
        26e510:	eb65cae8 	bl	1be10b8 <$ExitHandler>
        26e514:	e1a00007 	mov	r0, r7
        26e518:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)
 * Address: 0026e57c
 */
TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long) {
    /*
        26e57c:	e1a0c00d 	mov	ip, sp
        26e580:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        26e584:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e588:	e1a04000 	mov	r4, r0
        26e58c:	e1a06001 	mov	r6, r1
        26e590:	e1a05002 	mov	r5, r2
        26e594:	e3a00000 	mov	r0, #0	; 0x0
        26e598:	e1b07003 	movs	r7, r3
        26e59c:	e52d0004 	str	r0, [sp, -#4]!
        26e5a0:	11a00007 	movne	r0, r7
        26e5a4:	1b63f824 	blne	1b6c63c <$LockHandle(char **)>
        26e5a8:	e3a00000 	mov	r0, #0	; 0x0
        26e5ac:	e52d006c 	str	r0, [sp, -#108]!
        26e5b0:	e28d0008 	add	r0, sp, #8	; 0x8
        26e5b4:	eb6510ee 	bl	1bb2974 <$setjmp>
        26e5b8:	e59f8044 	ldr	r8, [pc, #44]	; 26e604 <TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x88>
        26e5bc:	e3300000 	teq	r0, #0	; 0x0
        26e5c0:	1a000022 	bne	26e650 <TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xd4>
        26e5c4:	e1a0000d 	mov	r0, sp
        26e5c8:	eb65c6ab 	bl	1be007c <$AddExceptionHandler>
        26e5cc:	e5980004 	ldr	r0, [r8, #4]
        26e5d0:	eb65d2ea 	bl	1be3180 <$SetHeap>
        26e5d4:	e3360000 	teq	r6, #0	; 0x0
        26e5d8:	0a00000a 	beq	26e608 <TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x8c>
        26e5dc:	e3360001 	teq	r6, #1	; 0x1
        26e5e0:	0a00000c 	beq	26e618 <TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x9c>
        26e5e4:	e3360002 	teq	r6, #2	; 0x2
        26e5e8:	0a00000e 	beq	26e628 <TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xac>
        26e5ec:	e3360003 	teq	r6, #3	; 0x3
        26e5f0:	1a000011 	bne	26e63c <TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xc0>
        26e5f4:	e1a01007 	mov	r1, r7
        26e5f8:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        26e5fc:	eb63d709 	bl	1b64228 <TWRecognizer::$AreaInfoFreeDependents(char **)>
        26e600:	ea00000f 	b	26e644 <TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xc8>
        26e604:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26e608:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        26e60c:	eb63d706 	bl	1b6422c <TWRecognizer::$AreaInfoGetSize(void)>
        26e610:	e5850000 	str	r0, [r5]
        26e614:	ea00000a 	b	26e644 <TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xc8>
        26e618:	e1a01007 	mov	r1, r7
        26e61c:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        26e620:	eb63d6ff 	bl	1b64224 <TWRecognizer::$AreaInfoFillDefaults(char **)>
        26e624:	ea000006 	b	26e644 <TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xc8>
        26e628:	e3350000 	teq	r5, #0	; 0x0
        26e62c:	13350001 	teqne	r5, #1	; 0x1
        26e630:	13350002 	teqne	r5, #2	; 0x2
        26e634:	13350003 	teqne	r5, #3	; 0x3
        26e638:	0a000001 	beq	26e644 <TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0xc8>
        26e63c:	e3e00000 	mvn	r0, #0	; 0x0
        26e640:	e58d006c 	str	r0, [sp, #108]
        26e644:	e5b80008 	ldr	r0, [r8, #8]!	; fField8
        26e648:	eb65d2cc 	bl	1be3180 <$SetHeap>
        26e64c:	ea00000e 	b	26e68c <TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x110>
        26e650:	e59d0060 	ldr	r0, [sp, #96]
        26e654:	e28f1f09 	add	r1, pc, #36	; 0x24
        26e658:	eb65d2cd 	bl	1be3194 <$Subexception>
        26e65c:	e3300000 	teq	r0, #0	; 0x0
        26e660:	0a000007 	beq	26e684 <TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x108>
        26e664:	e5b80008 	ldr	r0, [r8, #8]!	; fField8
        26e668:	eb65d2c4 	bl	1be3180 <$SetHeap>
        26e66c:	e1a00004 	mov	r0, r4
        26e670:	eb63efb7 	bl	1b6a554 <TWRecDomain::$SignalMemoryError(void)>
        26e674:	e3e00000 	mvn	r0, #0	; 0x0
        26e678:	e58d006c 	str	r0, [sp, #108]
        26e67c:	ea000002 	b	26e68c <TWRecDomain::DomainParameter(unsigned long, unsigned long, unsigned long)+0x110>
        26e680:	00000000 	andeq	r0, r0, r0
        26e684:	e1a0000d 	mov	r0, sp
        26e688:	eb65ceb1 	bl	1be2154 <$NextHandler>
        26e68c:	e1a0000d 	mov	r0, sp
        26e690:	eb65ca88 	bl	1be10b8 <$ExitHandler>
        26e694:	e28dd06c 	add	sp, sp, #108	; 0x6c
        26e698:	e3370000 	teq	r7, #0	; 0x0
        26e69c:	11a00007 	movne	r0, r7
        26e6a0:	1b64001a 	blne	1b6e710 <$UnlockHandle(char **)>
        26e6a4:	e49d0004 	ldr	r0, [sp], #4
        26e6a8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TWRecDomain::ConfigureArea(RefVar const &, unsigned long)
 * Address: 0026e6ac
 */
TWRecDomain::ConfigureArea(RefVar const &, unsigned long) {
    /*
        26e6ac:	e1a0c00d 	mov	ip, sp
        26e6b0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26e6b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e6b8:	e1a04000 	mov	r4, r0
        26e6bc:	e1a05001 	mov	r5, r1
        26e6c0:	e1b06002 	movs	r6, r2
        26e6c4:	11a00006 	movne	r0, r6
        26e6c8:	1b63f7db 	blne	1b6c63c <$LockHandle(char **)>
        26e6cc:	e3a00000 	mov	r0, #0	; 0x0
        26e6d0:	e52d006c 	str	r0, [sp, -#108]!
        26e6d4:	e28d0008 	add	r0, sp, #8	; 0x8
        26e6d8:	eb6510a5 	bl	1bb2974 <$setjmp>
        26e6dc:	e59f7030 	ldr	r7, [pc, #30]	; 26e714 <TWRecDomain::ConfigureArea(RefVar const &, unsigned long)+0x68>
        26e6e0:	e3300000 	teq	r0, #0	; 0x0
        26e6e4:	1a00000b 	bne	26e718 <TWRecDomain::ConfigureArea(RefVar const &, unsigned long)+0x6c>
        26e6e8:	e1a0000d 	mov	r0, sp
        26e6ec:	eb65c662 	bl	1be007c <$AddExceptionHandler>
        26e6f0:	e5970004 	ldr	r0, [r7, #4]
        26e6f4:	eb65d2a1 	bl	1be3180 <$SetHeap>
        26e6f8:	e1a02005 	mov	r2, r5
        26e6fc:	e1a01006 	mov	r1, r6
        26e700:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        26e704:	eb63d6c5 	bl	1b64220 <TWRecognizer::$AreaInfoConfigure(char **, RefVar const &)>
        26e708:	e5b70008 	ldr	r0, [r7, #8]!	; fField8
        26e70c:	eb65d29b 	bl	1be3180 <$SetHeap>
        26e710:	ea00000d 	b	26e74c <TWRecDomain::ConfigureArea(RefVar const &, unsigned long)+0xa0>
        26e714:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26e718:	e59d0060 	ldr	r0, [sp, #96]
        26e71c:	e28f1f07 	add	r1, pc, #28	; 0x1c
        26e720:	eb65d29b 	bl	1be3194 <$Subexception>
        26e724:	e3300000 	teq	r0, #0	; 0x0
        26e728:	0a000005 	beq	26e744 <TWRecDomain::ConfigureArea(RefVar const &, unsigned long)+0x98>
        26e72c:	e5b70008 	ldr	r0, [r7, #8]!	; fField8
        26e730:	eb65d292 	bl	1be3180 <$SetHeap>
        26e734:	e1a00004 	mov	r0, r4
        26e738:	eb63ef85 	bl	1b6a554 <TWRecDomain::$SignalMemoryError(void)>
        26e73c:	ea000002 	b	26e74c <TWRecDomain::ConfigureArea(RefVar const &, unsigned long)+0xa0>
        26e740:	00000000 	andeq	r0, r0, r0
        26e744:	e1a0000d 	mov	r0, sp
        26e748:	eb65ce81 	bl	1be2154 <$NextHandler>
        26e74c:	e1a0000d 	mov	r0, sp
        26e750:	eb65ca58 	bl	1be10b8 <$ExitHandler>
        26e754:	e28dd06c 	add	sp, sp, #108	; 0x6c
        26e758:	e3360000 	teq	r6, #0	; 0x0
        26e75c:	11a00006 	movne	r0, r6
        26e760:	1b63ffea 	blne	1b6e710 <$UnlockHandle(char **)>
        26e764:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TWRecDomain::SetParameters(char **)
 * Address: 0026e768
 */
TWRecDomain::SetParameters(char **) {
    /*
        26e768:	e1a0c00d 	mov	ip, sp
        26e76c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26e770:	e24cb004 	sub	fp, ip, #4	; 0x4
        26e774:	e1a04000 	mov	r4, r0
        26e778:	e1a05001 	mov	r5, r1
        26e77c:	e3a07000 	mov	r7, #0	; 0x0
        26e780:	e3a00000 	mov	r0, #0	; 0x0
        26e784:	e52d006c 	str	r0, [sp, -#108]!
        26e788:	e28d0008 	add	r0, sp, #8	; 0x8
        26e78c:	eb651078 	bl	1bb2974 <$setjmp>
        26e790:	e59f602c 	ldr	r6, [pc, #2c]	; 26e7c4 <TWRecDomain::SetParameters(char **)+0x5c>
        26e794:	e3300000 	teq	r0, #0	; 0x0
        26e798:	1a00000a 	bne	26e7c8 <TWRecDomain::SetParameters(char **)+0x60>
        26e79c:	e1a0000d 	mov	r0, sp
        26e7a0:	eb65c635 	bl	1be007c <$AddExceptionHandler>
        26e7a4:	e5960004 	ldr	r0, [r6, #4]
        26e7a8:	eb65d274 	bl	1be3180 <$SetHeap>
        26e7ac:	e1a01005 	mov	r1, r5
        26e7b0:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        26e7b4:	eb63d69d 	bl	1b64230 <TWRecognizer::$AreaInfoSetParameters(char **)>
        26e7b8:	e5b60008 	ldr	r0, [r6, #8]!	; fField8
        26e7bc:	eb65d26f 	bl	1be3180 <$SetHeap>
        26e7c0:	ea00000e 	b	26e800 <TWRecDomain::SetParameters(char **)+0x98>
        26e7c4:	0c104f78 	ldceq	15, cr4, [r0], -#480
        26e7c8:	e59d0060 	ldr	r0, [sp, #96]
        26e7cc:	e28f1f08 	add	r1, pc, #32	; 0x20
        26e7d0:	eb65d26f 	bl	1be3194 <$Subexception>
        26e7d4:	e3300000 	teq	r0, #0	; 0x0
        26e7d8:	0a000006 	beq	26e7f8 <TWRecDomain::SetParameters(char **)+0x90>
        26e7dc:	e5b60008 	ldr	r0, [r6, #8]!	; fField8
        26e7e0:	eb65d266 	bl	1be3180 <$SetHeap>
        26e7e4:	e1a00004 	mov	r0, r4
        26e7e8:	eb63ef59 	bl	1b6a554 <TWRecDomain::$SignalMemoryError(void)>
        26e7ec:	e3a07001 	mov	r7, #1	; 0x1
        26e7f0:	ea000002 	b	26e800 <TWRecDomain::SetParameters(char **)+0x98>
        26e7f4:	00000000 	andeq	r0, r0, r0
        26e7f8:	e1a0000d 	mov	r0, sp
        26e7fc:	eb65ce54 	bl	1be2154 <$NextHandler>
        26e800:	e1a0000d 	mov	r0, sp
        26e804:	eb65ca2b 	bl	1be10b8 <$ExitHandler>
        26e808:	e1a00007 	mov	r0, r7
        26e80c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

