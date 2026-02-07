#include "include/TStackManager.h"

/**
 * Symbol: TStackManager::__ct(void)
 * Address: 001f679c
 */
TStackManager::TStackManager(void) {
    /*
        1f679c:	e1a0c00d 	mov	ip, sp
        1f67a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f67a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f67a8:	e1b04000 	movs	r4, r0
        1f67ac:	1a000003 	bne	1f67c0 <TStackManager::__ct(void)+0x24>
        1f67b0:	e3a000f8 	mov	r0, #248	; 0xf8
        1f67b4:	eb675fdf 	bl	1bce738 <$__nw(unsigned int)>
        1f67b8:	e1b04000 	movs	r4, r0
        1f67bc:	0a000031 	beq	1f6888 <TStackManager::__ct(void)+0xec>
        1f67c0:	e1a00004 	mov	r0, r4
        1f67c4:	eb675bb9 	bl	1bcd6b0 <TUDomainManager::$__ct(void)>
        1f67c8:	e2840044 	add	r0, r4, #68	; 0x44
        1f67cc:	e3a01004 	mov	r1, #4	; 0x4
        1f67d0:	eb675bb9 	bl	1bcd6bc <TDoubleQContainer::$__ct(char *)>
        1f67d4:	e2840058 	add	r0, r4, #88	; 0x58
        1f67d8:	e3a01004 	mov	r1, #4	; 0x4
        1f67dc:	eb675bb6 	bl	1bcd6bc <TDoubleQContainer::$__ct(char *)>
        1f67e0:	e28400b8 	add	r0, r4, #184	; 0xb8
        1f67e4:	e3a01000 	mov	r1, #0	; 0x0
        1f67e8:	eb675bbb 	bl	1bcd6dc <TUMonitor::$__ct(unsigned long)>
        1f67ec:	e28400c4 	add	r0, r4, #196	; 0xc4
        1f67f0:	e3a05000 	mov	r5, #0	; 0x0
        1f67f4:	e5c05004 	strb	r5, [r0, #4]	; fField4
        1f67f8:	e5805000 	str	r5, [r0]
        1f67fc:	e2801008 	add	r1, r0, #8	; 0x8
        1f6800:	eb677887 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        1f6804:	e28400d0 	add	r0, r4, #208	; 0xd0
        1f6808:	e3a01004 	mov	r1, #4	; 0x4
        1f680c:	eb675baa 	bl	1bcd6bc <TDoubleQContainer::$__ct(char *)>
        1f6810:	e28400e4 	add	r0, r4, #228	; 0xe4
        1f6814:	e5c05004 	strb	r5, [r0, #4]	; fField4
        1f6818:	e5805000 	str	r5, [r0]
        1f681c:	e2801008 	add	r1, r0, #8	; 0x8
        1f6820:	eb67787f 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        1f6824:	e59f0064 	ldr	r0, [pc, #64]	; 1f6890 <TStackManager::__ct(void)+0xf4>	; fField64
        1f6828:	e5840000 	str	r0, [r4]
        1f682c:	e3a00001 	mov	r0, #1	; 0x1
        1f6830:	e5840070 	str	r0, [r4, #112]
        1f6834:	e584506c 	str	r5, [r4, #108]
        1f6838:	e3a02002 	mov	r2, #2	; 0x2
        1f683c:	e2844074 	add	r4, r4, #116	; 0x74
        1f6840:	e8840005 	stmia	r4, {r0, r2}
        1f6844:	e3a01003 	mov	r1, #3	; 0x3
        1f6848:	e3a03004 	mov	r3, #4	; 0x4
        1f684c:	e2844008 	add	r4, r4, #8	; 0x8
        1f6850:	e884000f 	stmia	r4, {r0, r1, r2, r3}
        1f6854:	e2844010 	add	r4, r4, #16	; 0x10
        1f6858:	e8840003 	stmia	r4, {r0, r1}
        1f685c:	e3a00005 	mov	r0, #5	; 0x5
        1f6860:	e284400c 	add	r4, r4, #12	; 0xc
        1f6864:	e8840005 	stmia	r4, {r0, r2}
        1f6868:	e5241004 	str	r1, [r4, -#4]!	; fField4
        1f686c:	e284400c 	add	r4, r4, #12	; 0xc
        1f6870:	e8840009 	stmia	r4, {r0, r3}
        1f6874:	e24440a0 	sub	r4, r4, #160	; 0xa0
        1f6878:	e3a00006 	mov	r0, #6	; 0x6
        1f687c:	e58400a8 	str	r0, [r4, #168]
        1f6880:	e58400ac 	str	r0, [r4, #172]
        1f6884:	e5c450c0 	strb	r5, [r4, #192]	; fField192
        1f6888:	e1a00004 	mov	r0, r4
        1f688c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1f6890:	0001d0e4 	andeq	sp, r1, r4, ror #1
    */
}

/**
 * Symbol: TStackManager::__dt(void)
 * Address: 001f6894
 */
TStackManager::~TStackManager(void) {
    /*
        1f6894:	e1a0c00d 	mov	ip, sp
        1f6898:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f689c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f68a0:	e1a04000 	mov	r4, r0
        1f68a4:	e1a05001 	mov	r5, r1
        1f68a8:	e59f0044 	ldr	r0, [pc, #44]	; 1f68f4 <TStackManager::__dt(void)+0x60>
        1f68ac:	e5840000 	str	r0, [r4]
        1f68b0:	e28400e4 	add	r0, r4, #228	; 0xe4
        1f68b4:	e3a01000 	mov	r1, #0	; 0x0
        1f68b8:	eb675f98 	bl	1bce720 <TULockingSemaphore::$__dt(void)>
        1f68bc:	e28400c4 	add	r0, r4, #196	; 0xc4
        1f68c0:	e3a01000 	mov	r1, #0	; 0x0
        1f68c4:	eb675f95 	bl	1bce720 <TULockingSemaphore::$__dt(void)>
        1f68c8:	e28400b8 	add	r0, r4, #184	; 0xb8
        1f68cc:	e3a01000 	mov	r1, #0	; 0x0
        1f68d0:	eb675f96 	bl	1bce730 <TUMonitor::$__dt(void)>
        1f68d4:	e1a00004 	mov	r0, r4
        1f68d8:	e3a01000 	mov	r1, #0	; 0x0
        1f68dc:	eb675f8c 	bl	1bce714 <TUDomainManager::$__dt(void)>
        1f68e0:	e3150001 	tst	r5, #1	; 0x1
        1f68e4:	11a00004 	movne	r0, r4
        1f68e8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1f68ec:	1a675b7b 	bne	1bcd6e0 <$__dl(void *)>
        1f68f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1f68f4:	0001d0e4 	andeq	sp, r1, r4, ror #1
    */
}

/**
 * Symbol: TStackManager::FMNewHeapArea(FM_NewHeapArea_Parms *)
 * Address: 001f68f8
 */
TStackManager::FMNewHeapArea(FM_NewHeapArea_Parms *) {
    /*
        1f68f8:	e1a0c00d 	mov	ip, sp
        1f68fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f6900:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f6904:	e1a04001 	mov	r4, r1
        1f6908:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1f690c:	e5911000 	ldr	r1, [r1]
        1f6910:	e58d1004 	str	r1, [sp, #4]	; fField4
        1f6914:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1f6918:	e58d1008 	str	r1, [sp, #8]
        1f691c:	e5941008 	ldr	r1, [r4, #8]
        1f6920:	e58d100c 	str	r1, [sp, #12]
        1f6924:	e3a01000 	mov	r1, #0	; 0x0
        1f6928:	e58d1010 	str	r1, [sp, #16]
        1f692c:	e1a0200d 	mov	r2, sp
        1f6930:	e28d1004 	add	r1, sp, #4	; 0x4
        1f6934:	eb6408c7 	bl	1af8c58 <TStackManager::$FMNewStack(FM_NewStack_Parms *, TStackInfo **)>
        1f6938:	e3300000 	teq	r0, #0	; 0x0
        1f693c:	1a000016 	bne	1f699c <TStackManager::FMNewHeapArea(FM_NewHeapArea_Parms *)+0xa4>
        1f6940:	e59d1000 	ldr	r1, [sp]
        1f6944:	e594200c 	ldr	r2, [r4, #12]
        1f6948:	e5913020 	ldr	r3, [r1, #32]
        1f694c:	e1832002 	orr	r2, r3, r2
        1f6950:	e5a12020 	str	r2, [r1, #32]!
        1f6954:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1f6958:	e3310000 	teq	r1, #0	; 0x0
        1f695c:	059d1000 	ldreq	r1, [sp]
        1f6960:	05912004 	ldreq	r2, [r1, #4]	; fField4
        1f6964:	05a12018 	streq	r2, [r1, #24]!	; fField24
        1f6968:	159d2000 	ldrne	r2, [sp]
        1f696c:	15a21018 	strne	r1, [r2, #24]!	; fField24
        1f6970:	e59d1000 	ldr	r1, [sp]
        1f6974:	e5912018 	ldr	r2, [r1, #24]	; fField24
        1f6978:	e5943008 	ldr	r3, [r4, #8]
        1f697c:	e0822003 	add	r2, r2, r3
        1f6980:	e5a1201c 	str	r2, [r1, #28]!	; fField28
        1f6984:	e59d1000 	ldr	r1, [sp]
        1f6988:	e5911018 	ldr	r1, [r1, #24]	; fField24
        1f698c:	e5841010 	str	r1, [r4, #16]
        1f6990:	e59d1000 	ldr	r1, [sp]
        1f6994:	e591101c 	ldr	r1, [r1, #28]	; fField28
        1f6998:	e5a41014 	str	r1, [r4, #20]!
        1f699c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::CheckRange(TStackInfo *, unsigned long)
 * Address: 001f69a0
 */
TStackManager::CheckRange(TStackInfo *, unsigned long) {
    /*
        1f69a0:	e5913000 	ldr	r3, [r1]
        1f69a4:	e59f0014 	ldr	r0, [pc, #14]	; 1f69c0 <TStackManager::CheckRange(TStackInfo *, unsigned long)+0x20>
        1f69a8:	e1520003 	cmp	r2, r3
        1f69ac:	21a0f00e 	movcs	pc, lr
        1f69b0:	e5911004 	ldr	r1, [r1, #4]	; fField4
        1f69b4:	e1510002 	cmp	r1, r2
        1f69b8:	93a00000 	movls	r0, #0	; 0x0
        1f69bc:	e1a0f00e 	mov	pc, lr
        1f69c0:	ffffd823 	swinv	0x00ffd823
    */
}

/**
 * Symbol: TStackManager::ValidateHeapLimitsParms(FM_SetHeapLimits_Parms *)
 * Address: 001f69c4
 */
TStackManager::ValidateHeapLimitsParms(FM_SetHeapLimits_Parms *) {
    /*
        1f69c4:	e1a0c00d 	mov	ip, sp
        1f69c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f69cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f69d0:	e1a05000 	mov	r5, r0
        1f69d4:	e1a04001 	mov	r4, r1
        1f69d8:	e5911000 	ldr	r1, [r1]
        1f69dc:	eb6410d6 	bl	1afad3c <TStackManager::$GetStackInfo(unsigned long)>
        1f69e0:	e1b06000 	movs	r6, r0
        1f69e4:	059f002c 	ldreq	r0, [pc, #2c]	; 1f6a18 <TStackManager::ValidateHeapLimitsParms(FM_SetHeapLimits_Parms *)+0x54>	; fField2
        1f69e8:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1f69ec:	e1a01006 	mov	r1, r6
        1f69f0:	e1a00005 	mov	r0, r5
        1f69f4:	e5942000 	ldr	r2, [r4]
        1f69f8:	eb63f810 	bl	1af4a40 <TStackManager::$CheckRange(TStackInfo *, unsigned long)>
        1f69fc:	e3300000 	teq	r0, #0	; 0x0
        1f6a00:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        1f6a04:	e1a01006 	mov	r1, r6
        1f6a08:	e1a00005 	mov	r0, r5
        1f6a0c:	e5b42004 	ldr	r2, [r4, #4]!	; fField4
        1f6a10:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1f6a14:	ea63f809 	b	1af4a40 <TStackManager::$CheckRange(TStackInfo *, unsigned long)>
        1f6a18:	ffffd823 	swinv	0x00ffd823
    */
}

/**
 * Symbol: TStackManager::FMSetHeapLimits(FM_SetHeapLimits_Parms *)
 * Address: 001f6a1c
 */
TStackManager::FMSetHeapLimits(FM_SetHeapLimits_Parms *) {
    /*
        1f6a1c:	e1a0c00d 	mov	ip, sp
        1f6a20:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1f6a24:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f6a28:	e1a05000 	mov	r5, r0
        1f6a2c:	e1a04001 	mov	r4, r1
        1f6a30:	eb64804b 	bl	1b16b64 <TStackManager::$ValidateHeapLimitsParms(FM_SetHeapLimits_Parms *)>
        1f6a34:	e3300000 	teq	r0, #0	; 0x0
        1f6a38:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1f6a3c:	e1a00005 	mov	r0, r5
        1f6a40:	e5941000 	ldr	r1, [r4]
        1f6a44:	eb6410bc 	bl	1afad3c <TStackManager::$GetStackInfo(unsigned long)>
        1f6a48:	e1a06000 	mov	r6, r0
        1f6a4c:	e2850004 	add	r0, r5, #4	; 0x4
        1f6a50:	e1a07000 	mov	r7, r0
        1f6a54:	e3a01000 	mov	r1, #0	; 0x0
        1f6a58:	eb675f3d 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f6a5c:	e5940000 	ldr	r0, [r4]
        1f6a60:	e5860018 	str	r0, [r6, #24]	; fField24
        1f6a64:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1f6a68:	e3a03000 	mov	r3, #0	; 0x0
        1f6a6c:	e3a02000 	mov	r2, #0	; 0x0
        1f6a70:	e586001c 	str	r0, [r6, #28]	; fField28
        1f6a74:	e92d000c 	stmdb	sp!, {r2, r3}
        1f6a78:	e5940000 	ldr	r0, [r4]
        1f6a7c:	e2402b01 	sub	r2, r0, #1024	; 0x400
        1f6a80:	e1a01006 	mov	r1, r6
        1f6a84:	e1a00005 	mov	r0, r5
        1f6a88:	e3a03001 	mov	r3, #1	; 0x1
        1f6a8c:	eb640c85 	bl	1af9ca8 <TStackManager::$FreeSubPagesBelow(TStackInfo *, unsigned long, unsigned char, unsigned long *, unsigned char)>
        1f6a90:	e28dd008 	add	sp, sp, #8	; 0x8
        1f6a94:	e3a03000 	mov	r3, #0	; 0x0
        1f6a98:	e3a02000 	mov	r2, #0	; 0x0
        1f6a9c:	e92d000c 	stmdb	sp!, {r2, r3}
        1f6aa0:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        1f6aa4:	e2402001 	sub	r2, r0, #1	; 0x1
        1f6aa8:	e2822b01 	add	r2, r2, #1024	; 0x400
        1f6aac:	e1a01006 	mov	r1, r6
        1f6ab0:	e1a00005 	mov	r0, r5
        1f6ab4:	e3a03001 	mov	r3, #1	; 0x1
        1f6ab8:	eb640c79 	bl	1af9ca4 <TStackManager::$FreeSubPagesAbove(TStackInfo *, unsigned long, unsigned char, unsigned long *, unsigned char)>
        1f6abc:	e28dd008 	add	sp, sp, #8	; 0x8
        1f6ac0:	e1a00007 	mov	r0, r7
        1f6ac4:	eb678c73 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f6ac8:	e3a00000 	mov	r0, #0	; 0x0
        1f6acc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::FMFreeHeapRange(FM_SetHeapLimits_Parms *)
 * Address: 001f6ad0
 */
TStackManager::FMFreeHeapRange(FM_SetHeapLimits_Parms *) {
    /*
        1f6ad0:	e1a0c00d 	mov	ip, sp
        1f6ad4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f6ad8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f6adc:	e1a05000 	mov	r5, r0
        1f6ae0:	e1a04001 	mov	r4, r1
        1f6ae4:	eb64801e 	bl	1b16b64 <TStackManager::$ValidateHeapLimitsParms(FM_SetHeapLimits_Parms *)>
        1f6ae8:	e3300000 	teq	r0, #0	; 0x0
        1f6aec:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1f6af0:	e1a00005 	mov	r0, r5
        1f6af4:	e5941000 	ldr	r1, [r4]
        1f6af8:	eb64108f 	bl	1afad3c <TStackManager::$GetStackInfo(unsigned long)>
        1f6afc:	e3a03000 	mov	r3, #0	; 0x0
        1f6b00:	e3a02000 	mov	r2, #0	; 0x0
        1f6b04:	e3a01001 	mov	r1, #1	; 0x1
        1f6b08:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1f6b0c:	e1a01000 	mov	r1, r0
        1f6b10:	e1a00005 	mov	r0, r5
        1f6b14:	e894000c 	ldmia	r4, {r2, r3}
        1f6b18:	eb640c63 	bl	1af9cac <TStackManager::$FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)>
        1f6b1c:	e3a00000 	mov	r0, #0	; 0x0
        1f6b20:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::FMLockHeapRange(FM_LockHeapRange_Parms *)
 * Address: 001f6b24
 */
TStackManager::FMLockHeapRange(FM_LockHeapRange_Parms *) {
    /*
        1f6b24:	e1a0c00d 	mov	ip, sp
        1f6b28:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1f6b2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f6b30:	e1a04000 	mov	r4, r0
        1f6b34:	e1a05001 	mov	r5, r1
        1f6b38:	e24dd064 	sub	sp, sp, #100	; 0x64
        1f6b3c:	eb648008 	bl	1b16b64 <TStackManager::$ValidateHeapLimitsParms(FM_SetHeapLimits_Parms *)>
        1f6b40:	e1b0a000 	movs	sl, r0
        1f6b44:	1a000032 	bne	1f6c14 <TStackManager::FMLockHeapRange(FM_LockHeapRange_Parms *)+0xf0>
        1f6b48:	e1a00004 	mov	r0, r4
        1f6b4c:	e5951000 	ldr	r1, [r5]
        1f6b50:	eb641079 	bl	1afad3c <TStackManager::$GetStackInfo(unsigned long)>
        1f6b54:	e1a07000 	mov	r7, r0
        1f6b58:	e5950000 	ldr	r0, [r5]
        1f6b5c:	e1a00520 	mov	r0, r0, lsr #10
        1f6b60:	e1a09500 	mov	r9, r0, lsl #10
        1f6b64:	e5950004 	ldr	r0, [r5, #4]	; fField4
        1f6b68:	e1a00520 	mov	r0, r0, lsr #10
        1f6b6c:	e1a08500 	mov	r8, r0, lsl #10
        1f6b70:	e3a01001 	mov	r1, #1	; 0x1
        1f6b74:	e5c410c0 	strb	r1, [r4, #192]	; fField192
        1f6b78:	e1a06009 	mov	r6, r9
        1f6b7c:	e1590008 	cmp	r9, r8
        1f6b80:	e584d040 	str	sp, [r4, #64]	; fField64
        1f6b84:	8a000010 	bhi	1f6bcc <TStackManager::FMLockHeapRange(FM_LockHeapRange_Parms *)+0xa8>
        1f6b88:	e1a01007 	mov	r1, r7
        1f6b8c:	e1a00004 	mov	r0, r4
        1f6b90:	e58d6044 	str	r6, [sp, #68]
        1f6b94:	eb6435ad 	bl	1b04250 <TStackManager::$ResolveFault(TStackInfo *)>
        1f6b98:	e1b0a000 	movs	sl, r0
        1f6b9c:	0a000007 	beq	1f6bc0 <TStackManager::FMLockHeapRange(FM_LockHeapRange_Parms *)+0x9c>
        1f6ba0:	e1360009 	teq	r6, r9
        1f6ba4:	0a00001a 	beq	1f6c14 <TStackManager::FMLockHeapRange(FM_LockHeapRange_Parms *)+0xf0>
        1f6ba8:	e2463b01 	sub	r3, r6, #1024	; 0x400
        1f6bac:	e1a02009 	mov	r2, r9
        1f6bb0:	e1a01007 	mov	r1, r7
        1f6bb4:	e1a00004 	mov	r0, r4
        1f6bb8:	eb64462f 	bl	1b0847c <TStackManager::$UnlockSubPagesBetween(TStackInfo *, unsigned long, unsigned long)>
        1f6bbc:	ea000014 	b	1f6c14 <TStackManager::FMLockHeapRange(FM_LockHeapRange_Parms *)+0xf0>
        1f6bc0:	e2866b01 	add	r6, r6, #1024	; 0x400
        1f6bc4:	e1560008 	cmp	r6, r8
        1f6bc8:	9affffee 	bls	1f6b88 <TStackManager::FMLockHeapRange(FM_LockHeapRange_Parms *)+0x64>
        1f6bcc:	e5d50008 	ldrb	r0, [r5, #8]
        1f6bd0:	e3300000 	teq	r0, #0	; 0x0
        1f6bd4:	0a00000e 	beq	1f6c14 <TStackManager::FMLockHeapRange(FM_LockHeapRange_Parms *)+0xf0>
        1f6bd8:	e3a01001 	mov	r1, #1	; 0x1
        1f6bdc:	e1590008 	cmp	r9, r8
        1f6be0:	8a00000b 	bhi	1f6c14 <TStackManager::FMLockHeapRange(FM_LockHeapRange_Parms *)+0xf0>
        1f6be4:	e5970014 	ldr	r0, [r7, #20]
        1f6be8:	e0490000 	sub	r0, r9, r0
        1f6bec:	e1a00520 	mov	r0, r0, lsr #10
        1f6bf0:	e1a02120 	mov	r2, r0, lsr #2
        1f6bf4:	e5973010 	ldr	r3, [r7, #16]
        1f6bf8:	e7932102 	ldr	r2, [r3, r2, lsl #2]	; fField2
        1f6bfc:	e2000003 	and	r0, r0, #3	; 0x3
        1f6c00:	e0820000 	add	r0, r2, r0
        1f6c04:	e5c0102c 	strb	r1, [r0, #44]
        1f6c08:	e2899b01 	add	r9, r9, #1024	; 0x400
        1f6c0c:	e1590008 	cmp	r9, r8
        1f6c10:	9afffff3 	bls	1f6be4 <TStackManager::FMLockHeapRange(FM_LockHeapRange_Parms *)+0xc0>
        1f6c14:	e3a00000 	mov	r0, #0	; 0x0
        1f6c18:	e5c400c0 	strb	r0, [r4, #192]	; fField192
        1f6c1c:	e1a0000a 	mov	r0, sl
        1f6c20:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::FMUnlockHeapRange(FM_SetHeapLimits_Parms *)
 * Address: 001f6c24
 */
TStackManager::FMUnlockHeapRange(FM_SetHeapLimits_Parms *) {
    /*
        1f6c24:	e1a0c00d 	mov	ip, sp
        1f6c28:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f6c2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f6c30:	e1a05000 	mov	r5, r0
        1f6c34:	e1a04001 	mov	r4, r1
        1f6c38:	eb647fc9 	bl	1b16b64 <TStackManager::$ValidateHeapLimitsParms(FM_SetHeapLimits_Parms *)>
        1f6c3c:	e1b06000 	movs	r6, r0
        1f6c40:	1a000006 	bne	1f6c60 <TStackManager::FMUnlockHeapRange(FM_SetHeapLimits_Parms *)+0x3c>
        1f6c44:	e1a00005 	mov	r0, r5
        1f6c48:	e5941000 	ldr	r1, [r4]
        1f6c4c:	eb64103a 	bl	1afad3c <TStackManager::$GetStackInfo(unsigned long)>
        1f6c50:	e1a01000 	mov	r1, r0
        1f6c54:	e1a00005 	mov	r0, r5
        1f6c58:	e894000c 	ldmia	r4, {r2, r3}
        1f6c5c:	eb644606 	bl	1b0847c <TStackManager::$UnlockSubPagesBetween(TStackInfo *, unsigned long, unsigned long)>
        1f6c60:	e1a00006 	mov	r0, r6
        1f6c64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::FMNewHeapDomain(FM_NewHeapDomain_Parms *)
 * Address: 001f6c68
 */
TStackManager::FMNewHeapDomain(FM_NewHeapDomain_Parms *) {
    /*
        1f6c68:	e1a0c00d 	mov	ip, sp
        1f6c6c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1f6c70:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f6c74:	e1a04000 	mov	r4, r0
        1f6c78:	e1a05001 	mov	r5, r1
        1f6c7c:	e3a00000 	mov	r0, #0	; 0x0
        1f6c80:	eb63e2d2 	bl	1aef7d0 <THeapDomain::$__ct(void)>
        1f6c84:	e1b06000 	movs	r6, r0
        1f6c88:	03a070e9 	moveq	r7, #233	; 0xe9
        1f6c8c:	02477b0a 	subeq	r7, r7, #10240	; 0x2800
        1f6c90:	0a000019 	beq	1f6cfc <TStackManager::FMNewHeapDomain(FM_NewHeapDomain_Parms *)+0x94>
        1f6c94:	e1a01004 	mov	r1, r4
        1f6c98:	e1a00006 	mov	r0, r6
        1f6c9c:	e895000c 	ldmia	r5, {r2, r3}
        1f6ca0:	eb641448 	bl	1afbdc8 <THeapDomain::$Init(TStackManager *, unsigned long, unsigned long)>
        1f6ca4:	e1b07000 	movs	r7, r0
        1f6ca8:	0a000003 	beq	1f6cbc <TStackManager::FMNewHeapDomain(FM_NewHeapDomain_Parms *)+0x54>
        1f6cac:	e1a00006 	mov	r0, r6
        1f6cb0:	e3a01001 	mov	r1, #1	; 0x1
        1f6cb4:	eb000816 	bl	1f8d14 <THeapDomain::__dt(void)>
        1f6cb8:	ea00000f 	b	1f6cfc <TStackManager::FMNewHeapDomain(FM_NewHeapDomain_Parms *)+0x94>
        1f6cbc:	e5960000 	ldr	r0, [r6]
        1f6cc0:	e5a50008 	str	r0, [r5, #8]!
        1f6cc4:	e2840004 	add	r0, r4, #4	; 0x4
        1f6cc8:	e1a05000 	mov	r5, r0
        1f6ccc:	e3a01000 	mov	r1, #0	; 0x0
        1f6cd0:	eb675e9f 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f6cd4:	e28400d0 	add	r0, r4, #208	; 0xd0
        1f6cd8:	e1a01006 	mov	r1, r6
        1f6cdc:	eb675ea0 	bl	1bce764 <TDoubleQContainer::$Add(void *)>
        1f6ce0:	e59400f0 	ldr	r0, [r4, #240]	; fField240
        1f6ce4:	e3300000 	teq	r0, #0	; 0x0
        1f6ce8:	03a00000 	moveq	r0, #0	; 0x0
        1f6cec:	05a460f0 	streq	r6, [r4, #240]!	; fField240
        1f6cf0:	05840004 	streq	r0, [r4, #4]	; fField4
        1f6cf4:	e1a00005 	mov	r0, r5
        1f6cf8:	eb678be6 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f6cfc:	e1a00007 	mov	r0, r7
        1f6d00:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::FMAddPageMappingToDomain(FM_AddPageMappingToDomain_Parms *)
 * Address: 001f6d04
 */
TStackManager::FMAddPageMappingToDomain(FM_AddPageMappingToDomain_Parms *) {
    /*
        1f6d04:	e1a0c00d 	mov	ip, sp
        1f6d08:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1f6d0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f6d10:	e1a04000 	mov	r4, r0
        1f6d14:	e1a07001 	mov	r7, r1
        1f6d18:	e5911004 	ldr	r1, [r1, #4]	; fField4
        1f6d1c:	eb641006 	bl	1afad3c <TStackManager::$GetStackInfo(unsigned long)>
        1f6d20:	e1b05000 	movs	r5, r0
        1f6d24:	0a000003 	beq	1f6d38 <TStackManager::FMAddPageMappingToDomain(FM_AddPageMappingToDomain_Parms *)+0x34>
        1f6d28:	e5951024 	ldr	r1, [r5, #36]
        1f6d2c:	e5970000 	ldr	r0, [r7]
        1f6d30:	e1310000 	teq	r1, r0
        1f6d34:	0a000002 	beq	1f6d44 <TStackManager::FMAddPageMappingToDomain(FM_AddPageMappingToDomain_Parms *)+0x40>
        1f6d38:	e59f9000 	ldr	r9, [pc, #0]	; 1f6d40 <TStackManager::FMAddPageMappingToDomain(FM_AddPageMappingToDomain_Parms *)+0x3c>
        1f6d3c:	ea000035 	b	1f6e18 <TStackManager::FMAddPageMappingToDomain(FM_AddPageMappingToDomain_Parms *)+0x114>
        1f6d40:	ffffd823 	swinv	0x00ffd823
        1f6d44:	e3a03001 	mov	r3, #1	; 0x1
        1f6d48:	e92d0008 	stmdb	sp!, {r3}
        1f6d4c:	e3a02000 	mov	r2, #0	; 0x0
        1f6d50:	e997000a 	ldmib	r7, {r1, r3}
        1f6d54:	eb678bd5 	bl	1bd9cb0 <$Remember__15TUDomainManagerSFUlN31Uc>
        1f6d58:	e28dd004 	add	sp, sp, #4	; 0x4
        1f6d5c:	e1b09000 	movs	r9, r0
        1f6d60:	1a00002c 	bne	1f6e18 <TStackManager::FMAddPageMappingToDomain(FM_AddPageMappingToDomain_Parms *)+0x114>
        1f6d64:	e1a00004 	mov	r0, r4
        1f6d68:	e5971008 	ldr	r1, [r7, #8]
        1f6d6c:	eb63f30a 	bl	1af399c <TStackManager::$AllocNewPage(unsigned long)>
        1f6d70:	e1b06000 	movs	r6, r0
        1f6d74:	03a090e9 	moveq	r9, #233	; 0xe9
        1f6d78:	02499b0a 	subeq	r9, r9, #10240	; 0x2800
        1f6d7c:	0a000025 	beq	1f6e18 <TStackManager::FMAddPageMappingToDomain(FM_AddPageMappingToDomain_Parms *)+0x114>
        1f6d80:	e2840004 	add	r0, r4, #4	; 0x4
        1f6d84:	e1a0a000 	mov	sl, r0
        1f6d88:	e3a01000 	mov	r1, #0	; 0x0
        1f6d8c:	eb675e70 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f6d90:	e5b70004 	ldr	r0, [r7, #4]!	; fField4
        1f6d94:	e5951014 	ldr	r1, [r5, #20]
        1f6d98:	e0400001 	sub	r0, r0, r1
        1f6d9c:	e1a08620 	mov	r8, r0, lsr #12
        1f6da0:	e5950010 	ldr	r0, [r5, #16]
        1f6da4:	e7806108 	str	r6, [r0, r8, lsl #2]	; fField2
        1f6da8:	e5950020 	ldr	r0, [r5, #32]
        1f6dac:	e3100001 	tst	r0, #1	; 0x1
        1f6db0:	03a00001 	moveq	r0, #1	; 0x1
        1f6db4:	13a00000 	movne	r0, #0	; 0x0
        1f6db8:	e5961030 	ldr	r1, [r6, #48]
        1f6dbc:	e3c11302 	bic	r1, r1, #134217728	; 0x8000000
        1f6dc0:	e2000001 	and	r0, r0, #1	; 0x1
        1f6dc4:	e1810d80 	orr	r0, r1, r0, lsl #27
        1f6dc8:	e3a07000 	mov	r7, #0	; 0x0
        1f6dcc:	e5860030 	str	r0, [r6, #48]
        1f6dd0:	e1a03007 	mov	r3, r7
        1f6dd4:	e92d0008 	stmdb	sp!, {r3}
        1f6dd8:	e1a03006 	mov	r3, r6
        1f6ddc:	e1a02008 	mov	r2, r8
        1f6de0:	e1a01005 	mov	r1, r5
        1f6de4:	e1a00004 	mov	r0, r4
        1f6de8:	eb643d58 	bl	1b06350 <TStackManager::$SetSubPageInfo(TStackInfo *, unsigned long, TStackPage *, unsigned long)>
        1f6dec:	e28dd004 	add	sp, sp, #4	; 0x4
        1f6df0:	e2877001 	add	r7, r7, #1	; 0x1
        1f6df4:	e3570004 	cmp	r7, #4	; 0x4
        1f6df8:	3afffff4 	bcc	1f6dd0 <TStackManager::FMAddPageMappingToDomain(FM_AddPageMappingToDomain_Parms *)+0xcc>
        1f6dfc:	e1a03006 	mov	r3, r6
        1f6e00:	e1a02008 	mov	r2, r8
        1f6e04:	e1a01005 	mov	r1, r5
        1f6e08:	e1a00004 	mov	r0, r4
        1f6e0c:	eb6430e7 	bl	1b031b0 <TStackManager::$RememberMappings(TStackInfo *, unsigned long, TStackPage *)>
        1f6e10:	e1a0000a 	mov	r0, sl
        1f6e14:	eb678b9f 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f6e18:	e1a00009 	mov	r0, r9
        1f6e1c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::FMSetRemoveRoutine(FM_SetRemoveRoutine_Parms *)
 * Address: 001f6e20
 */
TStackManager::FMSetRemoveRoutine(FM_SetRemoveRoutine_Parms *) {
    /*
        1f6e20:	e1a0c00d 	mov	ip, sp
        1f6e24:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f6e28:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f6e2c:	e1a04001 	mov	r4, r1
        1f6e30:	e3a05000 	mov	r5, #0	; 0x0
        1f6e34:	e5911000 	ldr	r1, [r1]
        1f6e38:	eb640fbf 	bl	1afad3c <TStackManager::$GetStackInfo(unsigned long)>
        1f6e3c:	e3300000 	teq	r0, #0	; 0x0
        1f6e40:	059f5014 	ldreq	r5, [pc, #14]	; 1f6e5c <TStackManager::FMSetRemoveRoutine(FM_SetRemoveRoutine_Parms *)+0x3c>
        1f6e44:	0a000002 	beq	1f6e54 <TStackManager::FMSetRemoveRoutine(FM_SetRemoveRoutine_Parms *)+0x34>
        1f6e48:	e9b40006 	ldmib	r4!, {r1, r2}
        1f6e4c:	e2800024 	add	r0, r0, #36	; 0x24
        1f6e50:	e9a00006 	stmib	r0!, {r1, r2}
        1f6e54:	e1a00005 	mov	r0, r5
        1f6e58:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1f6e5c:	ffffd823 	swinv	0x00ffd823
    */
}

/**
 * Symbol: TStackManager::Init(void)
 * Address: 001f6e60
 */
TStackManager::Init(void) {
    /*
        1f6e60:	e1a0c00d 	mov	ip, sp
        1f6e64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f6e68:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f6e6c:	e1a04000 	mov	r4, r0
        1f6e70:	e3a00000 	mov	r0, #0	; 0x0
        1f6e74:	e58400f0 	str	r0, [r4, #240]	; fField240
        1f6e78:	e3a03b01 	mov	r3, #1024	; 0x400
        1f6e7c:	e3a02b01 	mov	r2, #1024	; 0x400
        1f6e80:	e58400f4 	str	r0, [r4, #244]	; fField244
        1f6e84:	e92d000c 	stmdb	sp!, {r2, r3}
        1f6e88:	e1a00004 	mov	r0, r4
        1f6e8c:	e59f3064 	ldr	r3, [pc, #64]	; 1f6ef8 <TStackManager::Init(void)+0x98>	; fField64
        1f6e90:	e243200a 	sub	r2, r3, #10	; 0xa
        1f6e94:	e3a01000 	mov	r1, #0	; 0x0
        1f6e98:	eb677aff 	bl	1bd5a9c <TUDomainManager::$Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)>
        1f6e9c:	e28dd008 	add	sp, sp, #8	; 0x8
        1f6ea0:	e3300000 	teq	r0, #0	; 0x0
        1f6ea4:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1f6ea8:	e3a03000 	mov	r3, #0	; 0x0
        1f6eac:	e59f2048 	ldr	r2, [pc, #48]	; 1f6efc <TStackManager::Init(void)+0x9c>
        1f6eb0:	e3a01000 	mov	r1, #0	; 0x0
        1f6eb4:	e3a00000 	mov	r0, #0	; 0x0
        1f6eb8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1f6ebc:	e28400b8 	add	r0, r4, #184	; 0xb8
        1f6ec0:	e1a03004 	mov	r3, r4
        1f6ec4:	e59f1034 	ldr	r1, [pc, #34]	; 1f6f00 <TStackManager::Init(void)+0xa0>
        1f6ec8:	e3a02ffa 	mov	r2, #1000	; 0x3e8
        1f6ecc:	eb677b02 	bl	1bd5adc <$Init__9TUMonitorFPFPvUlT1_vUlPvT2UcT2T5>
        1f6ed0:	e28dd010 	add	sp, sp, #16	; 0x10
        1f6ed4:	e3300000 	teq	r0, #0	; 0x0
        1f6ed8:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        1f6edc:	e28400c4 	add	r0, r4, #196	; 0xc4
        1f6ee0:	eb677af4 	bl	1bd5ab8 <TULockingSemaphore::$Init(void)>
        1f6ee4:	e3300000 	teq	r0, #0	; 0x0
        1f6ee8:	028400e4 	addeq	r0, r4, #228	; 0xe4
        1f6eec:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        1f6ef0:	0a677af0 	beq	1bd5ab8 <TULockingSemaphore::$Init(void)>
        1f6ef4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1f6ef8:	53544b50 	cmppl	r4, #81920	; 0x14000
        1f6efc:	53544b55 	cmppl	r4, #87040	; 0x15400
        1f6f00:	01b05288 	moveqs	r5, r8, lsl #5
    */
}

/**
 * Symbol: TStackManager::FMGetHeapAreaInfo(FM_GetHeapAreaInfo_Parms *)
 * Address: 001f6f04
 */
TStackManager::FMGetHeapAreaInfo(FM_GetHeapAreaInfo_Parms *) {
    /*
        1f6f04:	e1a0c00d 	mov	ip, sp
        1f6f08:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f6f0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f6f10:	e1a04001 	mov	r4, r1
        1f6f14:	e3a05000 	mov	r5, #0	; 0x0
        1f6f18:	e5911000 	ldr	r1, [r1]
        1f6f1c:	eb640f86 	bl	1afad3c <TStackManager::$GetStackInfo(unsigned long)>
        1f6f20:	e3300000 	teq	r0, #0	; 0x0
        1f6f24:	059f5018 	ldreq	r5, [pc, #18]	; 1f6f44 <TStackManager::FMGetHeapAreaInfo(FM_GetHeapAreaInfo_Parms *)+0x40>
        1f6f28:	0a000003 	beq	1f6f3c <TStackManager::FMGetHeapAreaInfo(FM_GetHeapAreaInfo_Parms *)+0x38>
        1f6f2c:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1f6f30:	e5841004 	str	r1, [r4, #4]	; fField4
        1f6f34:	e5900000 	ldr	r0, [r0]
        1f6f38:	e5a40008 	str	r0, [r4, #8]!
        1f6f3c:	e1a00005 	mov	r0, r5
        1f6f40:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1f6f44:	ffffd823 	swinv	0x00ffd823
    */
}

/**
 * Symbol: TStackManager::FMGetSystemReleaseable(FM_GetSystemReleaseable_Parms *)
 * Address: 001f6f48
 */
TStackManager::FMGetSystemReleaseable(FM_GetSystemReleaseable_Parms *) {
    /*
        1f6f48:	e1a0c00d 	mov	ip, sp
        1f6f4c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1f6f50:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f6f54:	e1a05000 	mov	r5, r0
        1f6f58:	e1a04001 	mov	r4, r1
        1f6f5c:	e1a03001 	mov	r3, r1
        1f6f60:	e3a02000 	mov	r2, #0	; 0x0
        1f6f64:	e3a01002 	mov	r1, #2	; 0x2
        1f6f68:	e590c000 	ldr	ip, [r0]
        1f6f6c:	e1a0e00f 	mov	lr, pc
        1f6f70:	e28cf00c 	add	pc, ip, #12	; 0xc
        1f6f74:	e1a07000 	mov	r7, r0
        1f6f78:	e2850004 	add	r0, r5, #4	; 0x4
        1f6f7c:	e1a06000 	mov	r6, r0
        1f6f80:	e3a01000 	mov	r1, #0	; 0x0
        1f6f84:	eb675df2 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f6f88:	e3a00000 	mov	r0, #0	; 0x0
        1f6f8c:	e5840004 	str	r0, [r4, #4]	; fField4
        1f6f90:	e5840008 	str	r0, [r4, #8]
        1f6f94:	e2850058 	add	r0, r5, #88	; 0x58
        1f6f98:	e1a08000 	mov	r8, r0
        1f6f9c:	eb678313 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        1f6fa0:	e1b01000 	movs	r1, r0
        1f6fa4:	0a000012 	beq	1f6ff4 <TStackManager::FMGetSystemReleaseable(FM_GetSystemReleaseable_Parms *)+0xac>
        1f6fa8:	e5940008 	ldr	r0, [r4, #8]
        1f6fac:	e2800001 	add	r0, r0, #1	; 0x1
        1f6fb0:	e5840008 	str	r0, [r4, #8]
        1f6fb4:	e3a00000 	mov	r0, #0	; 0x0
        1f6fb8:	e0812100 	add	r2, r1, r0, lsl #2
        1f6fbc:	e5922010 	ldr	r2, [r2, #16]
        1f6fc0:	e3320000 	teq	r2, #0	; 0x0
        1f6fc4:	1592200c 	ldrne	r2, [r2, #12]
        1f6fc8:	13320000 	teqne	r2, #0	; 0x0
        1f6fcc:	15942004 	ldrne	r2, [r4, #4]	; fField4
        1f6fd0:	12822b01 	addne	r2, r2, #1024	; 0x400
        1f6fd4:	15842004 	strne	r2, [r4, #4]	; fField4
        1f6fd8:	e2800001 	add	r0, r0, #1	; 0x1
        1f6fdc:	e3500004 	cmp	r0, #4	; 0x4
        1f6fe0:	bafffff4 	blt	1f6fb8 <TStackManager::FMGetSystemReleaseable(FM_GetSystemReleaseable_Parms *)+0x70>
        1f6fe4:	e1a00008 	mov	r0, r8
        1f6fe8:	eb677280 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        1f6fec:	e1b01000 	movs	r1, r0
        1f6ff0:	1affffec 	bne	1f6fa8 <TStackManager::FMGetSystemReleaseable(FM_GetSystemReleaseable_Parms *)+0x60>
        1f6ff4:	e2850044 	add	r0, r5, #68	; 0x44
        1f6ff8:	e1a05000 	mov	r5, r0
        1f6ffc:	eb6782fb 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        1f7000:	e1b01000 	movs	r1, r0
        1f7004:	0a000012 	beq	1f7054 <TStackManager::FMGetSystemReleaseable(FM_GetSystemReleaseable_Parms *)+0x10c>
        1f7008:	e5940008 	ldr	r0, [r4, #8]
        1f700c:	e2800001 	add	r0, r0, #1	; 0x1
        1f7010:	e5840008 	str	r0, [r4, #8]
        1f7014:	e3a00000 	mov	r0, #0	; 0x0
        1f7018:	e0812100 	add	r2, r1, r0, lsl #2
        1f701c:	e5922010 	ldr	r2, [r2, #16]
        1f7020:	e3320000 	teq	r2, #0	; 0x0
        1f7024:	1592200c 	ldrne	r2, [r2, #12]
        1f7028:	13320000 	teqne	r2, #0	; 0x0
        1f702c:	15942004 	ldrne	r2, [r4, #4]	; fField4
        1f7030:	12822b01 	addne	r2, r2, #1024	; 0x400
        1f7034:	15842004 	strne	r2, [r4, #4]	; fField4
        1f7038:	e2800001 	add	r0, r0, #1	; 0x1
        1f703c:	e3500004 	cmp	r0, #4	; 0x4
        1f7040:	bafffff4 	blt	1f7018 <TStackManager::FMGetSystemReleaseable(FM_GetSystemReleaseable_Parms *)+0xd0>
        1f7044:	e1a00005 	mov	r0, r5
        1f7048:	eb677268 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        1f704c:	e1b01000 	movs	r1, r0
        1f7050:	1affffec 	bne	1f7008 <TStackManager::FMGetSystemReleaseable(FM_GetSystemReleaseable_Parms *)+0xc0>
        1f7054:	e1a00006 	mov	r0, r6
        1f7058:	eb678b0e 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f705c:	e1a00007 	mov	r0, r7
        1f7060:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::UnlockSubPagesBetween(TStackInfo *, unsigned long, unsigned long)
 * Address: 001f7064
 */
TStackManager::UnlockSubPagesBetween(TStackInfo *, unsigned long, unsigned long) {
    /*
        1f7064:	e92d47f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, lr}
        1f7068:	e1520003 	cmp	r2, r3
        1f706c:	81a00002 	movhi	r0, r2
        1f7070:	81a02003 	movhi	r2, r3
        1f7074:	81a03000 	movhi	r3, r0
        1f7078:	e5910014 	ldr	r0, [r1, #20]
        1f707c:	e0422000 	sub	r2, r2, r0
        1f7080:	e1a02522 	mov	r2, r2, lsr #10
        1f7084:	e1a05122 	mov	r5, r2, lsr #2
        1f7088:	e2029003 	and	r9, r2, #3	; 0x3
        1f708c:	e0430000 	sub	r0, r3, r0
        1f7090:	e1a00520 	mov	r0, r0, lsr #10
        1f7094:	e1a04120 	mov	r4, r0, lsr #2
        1f7098:	e2007003 	and	r7, r0, #3	; 0x3
        1f709c:	e3a0e003 	mov	lr, #3	; 0x3
        1f70a0:	e1a02005 	mov	r2, r5
        1f70a4:	e3a00000 	mov	r0, #0	; 0x0
        1f70a8:	e1550004 	cmp	r5, r4
        1f70ac:	88bd87f0 	ldmhiia	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
        1f70b0:	e5913010 	ldr	r3, [r1, #16]
        1f70b4:	e793c102 	ldr	ip, [r3, r2, lsl #2]	; fField2
        1f70b8:	e33c0000 	teq	ip, #0	; 0x0
        1f70bc:	0a000017 	beq	1f7120 <TStackManager::UnlockSubPagesBetween(TStackInfo *, unsigned long, unsigned long)+0xbc>
        1f70c0:	e1320005 	teq	r2, r5
        1f70c4:	13a03000 	movne	r3, #0	; 0x0
        1f70c8:	01a03009 	moveq	r3, r9
        1f70cc:	e1320004 	teq	r2, r4
        1f70d0:	01a0e007 	moveq	lr, r7
        1f70d4:	e153000e 	cmp	r3, lr
        1f70d8:	8a000010 	bhi	1f7120 <TStackManager::UnlockSubPagesBetween(TStackInfo *, unsigned long, unsigned long)+0xbc>
        1f70dc:	e08c6103 	add	r6, ip, r3, lsl #2
        1f70e0:	e5966010 	ldr	r6, [r6, #16]
        1f70e4:	e1360001 	teq	r6, r1
        1f70e8:	008c6083 	addeq	r6, ip, r3, lsl #1
        1f70ec:	05966020 	ldreq	r6, [r6, #32]
        1f70f0:	01a06826 	moveq	r6, r6, lsr #16
        1f70f4:	01360002 	teqeq	r6, r2
        1f70f8:	1a000005 	bne	1f7114 <TStackManager::UnlockSubPagesBetween(TStackInfo *, unsigned long, unsigned long)+0xb0>
        1f70fc:	e08c6003 	add	r6, ip, r3
        1f7100:	e5d6a028 	ldrb	sl, [r6, #40]
        1f7104:	e24aa001 	sub	sl, sl, #1	; 0x1
        1f7108:	e21aa0ff 	ands	sl, sl, #255	; 0xff
        1f710c:	e5c6a028 	strb	sl, [r6, #40]
        1f7110:	05c6002c 	streqb	r0, [r6, #44]
        1f7114:	e2833001 	add	r3, r3, #1	; 0x1
        1f7118:	e153000e 	cmp	r3, lr
        1f711c:	9affffee 	bls	1f70dc <TStackManager::UnlockSubPagesBetween(TStackInfo *, unsigned long, unsigned long)+0x78>
        1f7120:	e2822001 	add	r2, r2, #1	; 0x1
        1f7124:	e1520004 	cmp	r2, r4
        1f7128:	9affffe0 	bls	1f70b0 <TStackManager::UnlockSubPagesBetween(TStackInfo *, unsigned long, unsigned long)+0x4c>
        1f712c:	e8bd87f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, sl, pc}
    */
}

/**
 * Symbol: TStackManager::FreeSubPagesBelow(TStackInfo *, unsigned long, unsigned char, unsigned long *, unsigned char)
 * Address: 001f7130
 */
TStackManager::FreeSubPagesBelow(TStackInfo *, unsigned long, unsigned char, unsigned long *, unsigned char) {
    /*
        1f7130:	e1a0c00d 	mov	ip, sp
        1f7134:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f7138:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f713c:	e1a0c001 	mov	ip, r1
        1f7140:	e1a0e002 	mov	lr, r2
        1f7144:	e20310ff 	and	r1, r3, #255	; 0xff
        1f7148:	e99b0014 	ldmib	fp, {r2, r4}
        1f714c:	e20430ff 	and	r3, r4, #255	; 0xff
        1f7150:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1f7154:	e1a0200e 	mov	r2, lr
        1f7158:	e59c3004 	ldr	r3, [ip, #4]	; fField4
        1f715c:	e1a0100c 	mov	r1, ip
        1f7160:	eb640ad1 	bl	1af9cac <TStackManager::$FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)>
        1f7164:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::FreeSubPagesAbove(TStackInfo *, unsigned long, unsigned char, unsigned long *, unsigned char)
 * Address: 001f7168
 */
TStackManager::FreeSubPagesAbove(TStackInfo *, unsigned long, unsigned char, unsigned long *, unsigned char) {
    /*
        1f7168:	e1a0c00d 	mov	ip, sp
        1f716c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f7170:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f7174:	e1a0c001 	mov	ip, r1
        1f7178:	e1a0e002 	mov	lr, r2
        1f717c:	e20310ff 	and	r1, r3, #255	; 0xff
        1f7180:	e99b0014 	ldmib	fp, {r2, r4}
        1f7184:	e20430ff 	and	r3, r4, #255	; 0xff
        1f7188:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1f718c:	e59c1000 	ldr	r1, [ip]
        1f7190:	e2413001 	sub	r3, r1, #1	; 0x1
        1f7194:	e1a0200e 	mov	r2, lr
        1f7198:	e1a0100c 	mov	r1, ip
        1f719c:	eb640ac2 	bl	1af9cac <TStackManager::$FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)>
        1f71a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)
 * Address: 001f71a4
 */
TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char) {
    /*
        1f71a4:	e1a0c00d 	mov	ip, sp
        1f71a8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1f71ac:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1f71b0:	e24cb014 	sub	fp, ip, #20	; 0x14
        1f71b4:	e1a05000 	mov	r5, r0
        1f71b8:	e1a04001 	mov	r4, r1
        1f71bc:	e1a07002 	mov	r7, r2
        1f71c0:	e1a06003 	mov	r6, r3
        1f71c4:	e59b1014 	ldr	r1, [fp, #20]
        1f71c8:	e201a0ff 	and	sl, r1, #255	; 0xff
        1f71cc:	e59b001c 	ldr	r0, [fp, #28]	; fField28
        1f71d0:	e20000ff 	and	r0, r0, #255	; 0xff
        1f71d4:	e3a09000 	mov	r9, #0	; 0x0
        1f71d8:	e1a01004 	mov	r1, r4
        1f71dc:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1f71e0:	e24dd020 	sub	sp, sp, #32	; 0x20
        1f71e4:	e1a00005 	mov	r0, r5
        1f71e8:	eb63f614 	bl	1af4a40 <TStackManager::$CheckRange(TStackInfo *, unsigned long)>
        1f71ec:	e3300000 	teq	r0, #0	; 0x0
        1f71f0:	1a000005 	bne	1f720c <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x68>
        1f71f4:	e1a02006 	mov	r2, r6
        1f71f8:	e1a01004 	mov	r1, r4
        1f71fc:	e1a00005 	mov	r0, r5
        1f7200:	eb63f60e 	bl	1af4a40 <TStackManager::$CheckRange(TStackInfo *, unsigned long)>
        1f7204:	e3300000 	teq	r0, #0	; 0x0
        1f7208:	0a000000 	beq	1f7210 <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x6c>
        1f720c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1f7210:	e1570006 	cmp	r7, r6
        1f7214:	81a00007 	movhi	r0, r7
        1f7218:	81a07006 	movhi	r7, r6
        1f721c:	81a06000 	movhi	r6, r0
        1f7220:	e5940014 	ldr	r0, [r4, #20]
        1f7224:	e0471000 	sub	r1, r7, r0
        1f7228:	e1a01521 	mov	r1, r1, lsr #10
        1f722c:	e1a02121 	mov	r2, r1, lsr #2
        1f7230:	e2018003 	and	r8, r1, #3	; 0x3
        1f7234:	e0460000 	sub	r0, r6, r0
        1f7238:	e1a00520 	mov	r0, r0, lsr #10
        1f723c:	e1a01120 	mov	r1, r0, lsr #2
        1f7240:	e2000003 	and	r0, r0, #3	; 0x3
        1f7244:	e58d0010 	str	r0, [sp, #16]
        1f7248:	e58d1014 	str	r1, [sp, #20]
        1f724c:	e58d8018 	str	r8, [sp, #24]	; fField24
        1f7250:	e3a00003 	mov	r0, #3	; 0x3
        1f7254:	e58d000c 	str	r0, [sp, #12]
        1f7258:	e58d201c 	str	r2, [sp, #28]	; fField28
        1f725c:	e59d601c 	ldr	r6, [sp, #28]	; fField28
        1f7260:	e1560001 	cmp	r6, r1
        1f7264:	8a000054 	bhi	1f73bc <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x218>
        1f7268:	e5940010 	ldr	r0, [r4, #16]
        1f726c:	e7907106 	ldr	r7, [r0, r6, lsl #2]	; fField2
        1f7270:	e3370000 	teq	r7, #0	; 0x0
        1f7274:	0a00004c 	beq	1f73ac <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x208>
        1f7278:	e1a01007 	mov	r1, r7
        1f727c:	e1a00005 	mov	r0, r5
        1f7280:	eb63f5ef 	bl	1af4a44 <TStackManager::$CheckRestrictedPage(TStackPage *)>
        1f7284:	e3300000 	teq	r0, #0	; 0x0
        1f7288:	1a000047 	bne	1f73ac <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x208>
        1f728c:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        1f7290:	e1360000 	teq	r6, r0
        1f7294:	13a08000 	movne	r8, #0	; 0x0
        1f7298:	059d8018 	ldreq	r8, [sp, #24]	; fField24
        1f729c:	e59d0014 	ldr	r0, [sp, #20]
        1f72a0:	e1360000 	teq	r6, r0
        1f72a4:	059d0010 	ldreq	r0, [sp, #16]
        1f72a8:	058d000c 	streq	r0, [sp, #12]
        1f72ac:	e59d000c 	ldr	r0, [sp, #12]
        1f72b0:	e1580000 	cmp	r8, r0
        1f72b4:	8a00001d 	bhi	1f7330 <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x18c>
        1f72b8:	e0870108 	add	r0, r7, r8, lsl #2
        1f72bc:	e5900010 	ldr	r0, [r0, #16]
        1f72c0:	e1300004 	teq	r0, r4
        1f72c4:	00870088 	addeq	r0, r7, r8, lsl #1
        1f72c8:	05900020 	ldreq	r0, [r0, #32]
        1f72cc:	01a00820 	moveq	r0, r0, lsr #16
        1f72d0:	01300006 	teqeq	r0, r6
        1f72d4:	1a000011 	bne	1f7320 <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x17c>
        1f72d8:	e59d0020 	ldr	r0, [sp, #32]
        1f72dc:	e3300000 	teq	r0, #0	; 0x0
        1f72e0:	1a000003 	bne	1f72f4 <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x150>
        1f72e4:	e0870008 	add	r0, r7, r8
        1f72e8:	e5d00028 	ldrb	r0, [r0, #40]
        1f72ec:	e3300000 	teq	r0, #0	; 0x0
        1f72f0:	1a00000a 	bne	1f7320 <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x17c>
        1f72f4:	e2899b01 	add	r9, r9, #1024	; 0x400
        1f72f8:	e33a0000 	teq	sl, #0	; 0x0
        1f72fc:	0a000007 	beq	1f7320 <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x17c>
        1f7300:	e1a03008 	mov	r3, r8
        1f7304:	e92d0008 	stmdb	sp!, {r3}
        1f7308:	e1a03007 	mov	r3, r7
        1f730c:	e1a00005 	mov	r0, r5
        1f7310:	e3a02000 	mov	r2, #0	; 0x0
        1f7314:	e3a01000 	mov	r1, #0	; 0x0
        1f7318:	eb643c0c 	bl	1b06350 <TStackManager::$SetSubPageInfo(TStackInfo *, unsigned long, TStackPage *, unsigned long)>
        1f731c:	e28dd004 	add	sp, sp, #4	; 0x4
        1f7320:	e2888001 	add	r8, r8, #1	; 0x1
        1f7324:	e59d000c 	ldr	r0, [sp, #12]
        1f7328:	e1580000 	cmp	r8, r0
        1f732c:	9affffe1 	bls	1f72b8 <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x114>
        1f7330:	e1a0300d 	mov	r3, sp
        1f7334:	e28d2004 	add	r2, sp, #4	; 0x4
        1f7338:	e28d1008 	add	r1, sp, #8	; 0x8
        1f733c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1f7340:	e1a03007 	mov	r3, r7
        1f7344:	e1a02006 	mov	r2, r6
        1f7348:	e1a01004 	mov	r1, r4
        1f734c:	e1a00005 	mov	r0, r5
        1f7350:	eb63f9e0 	bl	1af5ad8 <TStackManager::$CountMatches(TStackInfo *, unsigned long, TStackPage *, unsigned long *, unsigned char *, unsigned char *)>
        1f7354:	e28dd00c 	add	sp, sp, #12	; 0xc
        1f7358:	e3300000 	teq	r0, #0	; 0x0
        1f735c:	1a00000b 	bne	1f7390 <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x1ec>
        1f7360:	e33a0000 	teq	sl, #0	; 0x0
        1f7364:	0a000010 	beq	1f73ac <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x208>
        1f7368:	e5940014 	ldr	r0, [r4, #20]
        1f736c:	e0803606 	add	r3, r0, r6, lsl #12
        1f7370:	e1a02007 	mov	r2, r7
        1f7374:	e1a01004 	mov	r1, r4
        1f7378:	e1a00005 	mov	r0, r5
        1f737c:	eb64063b 	bl	1af8c70 <TStackManager::$ForgetMappings(TStackInfo *, TStackPage *, unsigned long)>
        1f7380:	e3a01000 	mov	r1, #0	; 0x0
        1f7384:	e5940010 	ldr	r0, [r4, #16]
        1f7388:	e7801106 	str	r1, [r0, r6, lsl #2]	; fField2
        1f738c:	ea000006 	b	1f73ac <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x208>
        1f7390:	e33a0000 	teq	sl, #0	; 0x0
        1f7394:	0a000004 	beq	1f73ac <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x208>
        1f7398:	e1a03007 	mov	r3, r7
        1f739c:	e1a02006 	mov	r2, r6
        1f73a0:	e1a01004 	mov	r1, r4
        1f73a4:	e1a00005 	mov	r0, r5
        1f73a8:	eb642f80 	bl	1b031b0 <TStackManager::$RememberMappings(TStackInfo *, unsigned long, TStackPage *)>
        1f73ac:	e2866001 	add	r6, r6, #1	; 0x1
        1f73b0:	e59d0014 	ldr	r0, [sp, #20]
        1f73b4:	e1560000 	cmp	r6, r0
        1f73b8:	9affffaa 	bls	1f7268 <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0xc4>
        1f73bc:	e59b0018 	ldr	r0, [fp, #24]	; fField24
        1f73c0:	e3300000 	teq	r0, #0	; 0x0
        1f73c4:	159b0018 	ldrne	r0, [fp, #24]	; fField24
        1f73c8:	15809000 	strne	r9, [r0]
        1f73cc:	e3a00000 	mov	r0, #0	; 0x0
        1f73d0:	eaffff8d 	b	1f720c <TStackManager::FreeSubPagesBetween(TStackInfo *, unsigned long, unsigned long, unsigned char, unsigned long *, unsigned char)+0x68>
    */
}

/**
 * Symbol: TStackManager::FindOrAllocPage_ReturnUnLockedOnNoPage(TStackInfo *, unsigned long, unsigned long)
 * Address: 001f73d4
 */
TStackManager::FindOrAllocPage_ReturnUnLockedOnNoPage(TStackInfo *, unsigned long, unsigned long) {
    /*
        1f73d4:	e1a0c00d 	mov	ip, sp
        1f73d8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1f73dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f73e0:	e1a05000 	mov	r5, r0
        1f73e4:	e1a04001 	mov	r4, r1
        1f73e8:	e1a06002 	mov	r6, r2
        1f73ec:	e1a07003 	mov	r7, r3
        1f73f0:	e5910014 	ldr	r0, [r1, #20]
        1f73f4:	e080a602 	add	sl, r0, r2, lsl #12
        1f73f8:	e1a00005 	mov	r0, r5
        1f73fc:	eb640a36 	bl	1af9cdc <TStackManager::$GetMatchingPage(TStackInfo *, unsigned long, unsigned long)>
        1f7400:	e1b08000 	movs	r8, r0
        1f7404:	e2859004 	add	r9, r5, #4	; 0x4
        1f7408:	e1a00009 	mov	r0, r9
        1f740c:	1a000020 	bne	1f7494 <TStackManager::FindOrAllocPage_ReturnUnLockedOnNoPage(TStackInfo *, unsigned long, unsigned long)+0xc0>
        1f7410:	eb678a20 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f7414:	e1a00005 	mov	r0, r5
        1f7418:	e3a01000 	mov	r1, #0	; 0x0
        1f741c:	eb63f15e 	bl	1af399c <TStackManager::$AllocNewPage(unsigned long)>
        1f7420:	e1b08000 	movs	r8, r0
        1f7424:	0a000009 	beq	1f7450 <TStackManager::FindOrAllocPage_ReturnUnLockedOnNoPage(TStackInfo *, unsigned long, unsigned long)+0x7c>
        1f7428:	e3a03001 	mov	r3, #1	; 0x1
        1f742c:	e92d0008 	stmdb	sp!, {r3}
        1f7430:	e5940024 	ldr	r0, [r4, #36]
        1f7434:	e1a0100a 	mov	r1, sl
        1f7438:	e3a02000 	mov	r2, #0	; 0x0
        1f743c:	e5983000 	ldr	r3, [r8]
        1f7440:	eb678a1a 	bl	1bd9cb0 <$Remember__15TUDomainManagerSFUlN31Uc>
        1f7444:	e28dd004 	add	sp, sp, #4	; 0x4
        1f7448:	e3300000 	teq	r0, #0	; 0x0
        1f744c:	0a000001 	beq	1f7458 <TStackManager::FindOrAllocPage_ReturnUnLockedOnNoPage(TStackInfo *, unsigned long, unsigned long)+0x84>
        1f7450:	e3a00000 	mov	r0, #0	; 0x0
        1f7454:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1f7458:	e1a00009 	mov	r0, r9
        1f745c:	e3a01000 	mov	r1, #0	; 0x0
        1f7460:	eb675cbb 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f7464:	e2850044 	add	r0, r5, #68	; 0x44
        1f7468:	e1a01008 	mov	r1, r8
        1f746c:	eb675cbc 	bl	1bce764 <TDoubleQContainer::$Add(void *)>
        1f7470:	e1a03008 	mov	r3, r8
        1f7474:	e92d0008 	stmdb	sp!, {r3}
        1f7478:	e1a03007 	mov	r3, r7
        1f747c:	e1a02006 	mov	r2, r6
        1f7480:	e1a01004 	mov	r1, r4
        1f7484:	e1a00005 	mov	r0, r5
        1f7488:	eb647dba 	bl	1b16b78 <TStackManager::$PageMatchFound(TStackInfo *, unsigned long, unsigned long, TStackPage *)>
        1f748c:	e28dd004 	add	sp, sp, #4	; 0x4
        1f7490:	ea000013 	b	1f74e4 <TStackManager::FindOrAllocPage_ReturnUnLockedOnNoPage(TStackInfo *, unsigned long, unsigned long)+0x110>
        1f7494:	eb6789ff 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f7498:	e3a03001 	mov	r3, #1	; 0x1
        1f749c:	e92d0008 	stmdb	sp!, {r3}
        1f74a0:	e5940024 	ldr	r0, [r4, #36]
        1f74a4:	e1a0100a 	mov	r1, sl
        1f74a8:	e3a02000 	mov	r2, #0	; 0x0
        1f74ac:	e5983000 	ldr	r3, [r8]
        1f74b0:	eb6789fe 	bl	1bd9cb0 <$Remember__15TUDomainManagerSFUlN31Uc>
        1f74b4:	e28dd004 	add	sp, sp, #4	; 0x4
        1f74b8:	e3300000 	teq	r0, #0	; 0x0
        1f74bc:	0a000005 	beq	1f74d8 <TStackManager::FindOrAllocPage_ReturnUnLockedOnNoPage(TStackInfo *, unsigned long, unsigned long)+0x104>
        1f74c0:	e1a03008 	mov	r3, r8
        1f74c4:	e1a02006 	mov	r2, r6
        1f74c8:	e1a01004 	mov	r1, r4
        1f74cc:	e1a00005 	mov	r0, r5
        1f74d0:	eb6405e7 	bl	1af8c74 <TStackManager::$ForgetMappings(TStackInfo *, unsigned long, TStackPage *)>
        1f74d4:	eaffffdd 	b	1f7450 <TStackManager::FindOrAllocPage_ReturnUnLockedOnNoPage(TStackInfo *, unsigned long, unsigned long)+0x7c>
        1f74d8:	e1a00009 	mov	r0, r9
        1f74dc:	e3a01000 	mov	r1, #0	; 0x0
        1f74e0:	eb675c9b 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f74e4:	e1a00008 	mov	r0, r8
        1f74e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::RemoveOwnerFromPage(TStackInfo *, unsigned long, TStackPage *)
 * Address: 001f74ec
 */
TStackManager::RemoveOwnerFromPage(TStackInfo *, unsigned long, TStackPage *) {
    /*
        1f74ec:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        1f74f0:	e3a0c000 	mov	ip, #0	; 0x0
        1f74f4:	e3a00000 	mov	r0, #0	; 0x0
        1f74f8:	e083410c 	add	r4, r3, ip, lsl #2
        1f74fc:	e594e010 	ldr	lr, [r4, #16]
        1f7500:	e13e0001 	teq	lr, r1
        1f7504:	0083e08c 	addeq	lr, r3, ip, lsl #1
        1f7508:	059e5020 	ldreq	r5, [lr, #32]
        1f750c:	01a05825 	moveq	r5, r5, lsr #16
        1f7510:	01350002 	teqeq	r5, r2
        1f7514:	1a000005 	bne	1f7530 <TStackManager::RemoveOwnerFromPage(TStackInfo *, unsigned long, TStackPage *)+0x44>
        1f7518:	e5a40010 	str	r0, [r4, #16]!
        1f751c:	e5ce0021 	strb	r0, [lr, #33]
        1f7520:	e5ce0020 	strb	r0, [lr, #32]
        1f7524:	e083e00c 	add	lr, r3, ip
        1f7528:	e5ce0028 	strb	r0, [lr, #40]
        1f752c:	e5ce002c 	strb	r0, [lr, #44]
        1f7530:	e28cc001 	add	ip, ip, #1	; 0x1
        1f7534:	e35c0004 	cmp	ip, #4	; 0x4
        1f7538:	baffffee 	blt	1f74f8 <TStackManager::RemoveOwnerFromPage(TStackInfo *, unsigned long, TStackPage *)+0xc>
        1f753c:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)
 * Address: 001f7540
 */
TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *) {
    /*
        1f7540:	e1a0c00d 	mov	ip, sp
        1f7544:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1f7548:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f754c:	e1a05000 	mov	r5, r0
        1f7550:	e1a04001 	mov	r4, r1
        1f7554:	e24dd008 	sub	sp, sp, #8	; 0x8
        1f7558:	e5912014 	ldr	r2, [r1, #20]
        1f755c:	e5916010 	ldr	r6, [r1, #16]
        1f7560:	e9910480 	ldmib	r1, {r7, sl}
        1f7564:	e591800c 	ldr	r8, [r1, #12]
        1f7568:	e58d2004 	str	r2, [sp, #4]	; fField4
        1f756c:	e591201c 	ldr	r2, [r1, #28]	; fField28
        1f7570:	e5919018 	ldr	r9, [r1, #24]	; fField24
        1f7574:	e58d2000 	str	r2, [sp]
        1f7578:	e5d40026 	ldrb	r0, [r4, #38]
        1f757c:	e3300000 	teq	r0, #0	; 0x0
        1f7580:	1a000003 	bne	1f7594 <TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)+0x54>
        1f7584:	e1a02008 	mov	r2, r8
        1f7588:	e1a00005 	mov	r0, r5
        1f758c:	e3a01001 	mov	r1, #1	; 0x1
        1f7590:	eb643b66 	bl	1b06330 <TStackManager::$SetRestrictedPage(unsigned long, TStackPage *)>
        1f7594:	e1a02006 	mov	r2, r6
        1f7598:	e1a01008 	mov	r1, r8
        1f759c:	e1a00005 	mov	r0, r5
        1f75a0:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        1f75a4:	eb63f946 	bl	1af5ac4 <TStackManager::$CopyPageState(TStackPage *, TStackPage *, unsigned long)>
        1f75a8:	e5d40024 	ldrb	r0, [r4, #36]
        1f75ac:	e3300000 	teq	r0, #0	; 0x0
        1f75b0:	0a000001 	beq	1f75bc <TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)+0x7c>
        1f75b4:	eb066d75 	bl	392b90 <EnterFIQAtomic>
        1f75b8:	ea000002 	b	1f75c8 <TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)+0x88>
        1f75bc:	e5d40025 	ldrb	r0, [r4, #37]
        1f75c0:	e3300000 	teq	r0, #0	; 0x0
        1f75c4:	1b066d3d 	blne	392ac0 <EnterAtomic>
        1f75c8:	e1a03006 	mov	r3, r6
        1f75cc:	e1a0200a 	mov	r2, sl
        1f75d0:	e1a01007 	mov	r1, r7
        1f75d4:	e1a00005 	mov	r0, r5
        1f75d8:	eb647d62 	bl	1b16b68 <TStackManager::$RemoveOwnerFromPage(TStackInfo *, unsigned long, TStackPage *)>
        1f75dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f75e0:	e5970014 	ldr	r0, [r7, #20]
        1f75e4:	e080160a 	add	r1, r0, sl, lsl #12
        1f75e8:	e58d1000 	str	r1, [sp]
        1f75ec:	e5970024 	ldr	r0, [r7, #36]
        1f75f0:	e5962000 	ldr	r2, [r6]
        1f75f4:	eb676cd0 	bl	1bd293c <$ForgetMapping__FUlN21>
        1f75f8:	e1a01006 	mov	r1, r6
        1f75fc:	e1a00005 	mov	r0, r5
        1f7600:	eb6447a6 	bl	1b094a0 <TStackManager::$UpdatePageState(TStackPage *)>
        1f7604:	e24dd008 	sub	sp, sp, #8	; 0x8
        1f7608:	e28d1004 	add	r1, sp, #4	; 0x4
        1f760c:	e5980000 	ldr	r0, [r8]
        1f7610:	eb677500 	bl	1bd4a18 <$GetPhys(unsigned long, TPhys *&)>
        1f7614:	e3300000 	teq	r0, #0	; 0x0
        1f7618:	0a000013 	beq	1f766c <TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)+0x12c>
        1f761c:	e1a0100d 	mov	r1, sp
        1f7620:	e5960000 	ldr	r0, [r6]
        1f7624:	eb6774fb 	bl	1bd4a18 <$GetPhys(unsigned long, TPhys *&)>
        1f7628:	e3300000 	teq	r0, #0	; 0x0
        1f762c:	0a00000e 	beq	1f766c <TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)+0x12c>
        1f7630:	e5d40024 	ldrb	r0, [r4, #36]
        1f7634:	e3300000 	teq	r0, #0	; 0x0
        1f7638:	e59d0000 	ldr	r0, [sp]
        1f763c:	e5900010 	ldr	r0, [r0, #16]
        1f7640:	e1a00620 	mov	r0, r0, lsr #12
        1f7644:	e1a01600 	mov	r1, r0, lsl #12
        1f7648:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1f764c:	e5900010 	ldr	r0, [r0, #16]
        1f7650:	e1a00620 	mov	r0, r0, lsr #12
        1f7654:	e1a00600 	mov	r0, r0, lsl #12
        1f7658:	e59d2010 	ldr	r2, [sp, #16]
        1f765c:	0a000001 	beq	1f7668 <TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)+0x128>
        1f7660:	eb647920 	bl	1b15ae8 <$CopyPhysicalPageDuringFIQAtomic__FUlN21>
        1f7664:	ea000000 	b	1f766c <TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)+0x12c>
        1f7668:	eb63f916 	bl	1af5ac8 <$CopyPhysicalPage__FUlN21>
        1f766c:	e5970010 	ldr	r0, [r7, #16]
        1f7670:	e780810a 	str	r8, [r0, sl, lsl #2]	; fField2
        1f7674:	e5970020 	ldr	r0, [r7, #32]
        1f7678:	e3100001 	tst	r0, #1	; 0x1
        1f767c:	03a00001 	moveq	r0, #1	; 0x1
        1f7680:	13a00000 	movne	r0, #0	; 0x0
        1f7684:	e20030ff 	and	r3, r0, #255	; 0xff
        1f7688:	e92d0008 	stmdb	sp!, {r3}
        1f768c:	e1a03008 	mov	r3, r8
        1f7690:	e1a0200a 	mov	r2, sl
        1f7694:	e1a01007 	mov	r1, r7
        1f7698:	e1a00005 	mov	r0, r5
        1f769c:	eb63f0d2 	bl	1af39ec <TStackManager::$BuildPerms(TStackInfo *, unsigned long, TStackPage *)>
        1f76a0:	e20020ff 	and	r2, r0, #255	; 0xff
        1f76a4:	e5b70024 	ldr	r0, [r7, #36]!
        1f76a8:	e59d100c 	ldr	r1, [sp, #12]
        1f76ac:	e1a01621 	mov	r1, r1, lsr #12
        1f76b0:	e1a01601 	mov	r1, r1, lsl #12
        1f76b4:	e5983000 	ldr	r3, [r8]
        1f76b8:	eb642ebb 	bl	1b031ac <$RememberMapping__FUlN31Uc>
        1f76bc:	e28dd004 	add	sp, sp, #4	; 0x4
        1f76c0:	e5d40026 	ldrb	r0, [r4, #38]
        1f76c4:	e3300000 	teq	r0, #0	; 0x0
        1f76c8:	0a00000f 	beq	1f770c <TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)+0x1cc>
        1f76cc:	e5d40024 	ldrb	r0, [r4, #36]
        1f76d0:	e3300000 	teq	r0, #0	; 0x0
        1f76d4:	0a000001 	beq	1f76e0 <TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)+0x1a0>
        1f76d8:	eb066d34 	bl	392bb0 <ExitFIQAtomic>
        1f76dc:	ea000002 	b	1f76ec <TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)+0x1ac>
        1f76e0:	e5d40025 	ldrb	r0, [r4, #37]
        1f76e4:	e3300000 	teq	r0, #0	; 0x0
        1f76e8:	1b066d0b 	blne	392b1c <ExitAtomic>
        1f76ec:	e5943020 	ldr	r3, [r4, #32]
        1f76f0:	e92d0008 	stmdb	sp!, {r3}
        1f76f4:	e1a03006 	mov	r3, r6
        1f76f8:	e1a01009 	mov	r1, r9
        1f76fc:	e1a00005 	mov	r0, r5
        1f7700:	e59d2010 	ldr	r2, [sp, #16]
        1f7704:	eb643b11 	bl	1b06350 <TStackManager::$SetSubPageInfo(TStackInfo *, unsigned long, TStackPage *, unsigned long)>
        1f7708:	e28dd004 	add	sp, sp, #4	; 0x4
        1f770c:	e5990014 	ldr	r0, [r9, #20]
        1f7710:	e59d200c 	ldr	r2, [sp, #12]
        1f7714:	e0807602 	add	r7, r0, r2, lsl #12
        1f7718:	e5990020 	ldr	r0, [r9, #32]
        1f771c:	e3100001 	tst	r0, #1	; 0x1
        1f7720:	03a00001 	moveq	r0, #1	; 0x1
        1f7724:	13a00000 	movne	r0, #0	; 0x0
        1f7728:	e20030ff 	and	r3, r0, #255	; 0xff
        1f772c:	e92d0008 	stmdb	sp!, {r3}
        1f7730:	e1a03006 	mov	r3, r6
        1f7734:	e1a01009 	mov	r1, r9
        1f7738:	e1a00005 	mov	r0, r5
        1f773c:	e59d2010 	ldr	r2, [sp, #16]
        1f7740:	eb63f0a9 	bl	1af39ec <TStackManager::$BuildPerms(TStackInfo *, unsigned long, TStackPage *)>
        1f7744:	e20020ff 	and	r2, r0, #255	; 0xff
        1f7748:	e1a01627 	mov	r1, r7, lsr #12
        1f774c:	e1a01601 	mov	r1, r1, lsl #12
        1f7750:	e5b90024 	ldr	r0, [r9, #36]!
        1f7754:	e5963000 	ldr	r3, [r6]
        1f7758:	eb642e93 	bl	1b031ac <$RememberMapping__FUlN31Uc>
        1f775c:	e28dd004 	add	sp, sp, #4	; 0x4
        1f7760:	e5d40026 	ldrb	r0, [r4, #38]
        1f7764:	e3300000 	teq	r0, #0	; 0x0
        1f7768:	1a000007 	bne	1f778c <TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)+0x24c>
        1f776c:	e5d40024 	ldrb	r0, [r4, #36]
        1f7770:	e3300000 	teq	r0, #0	; 0x0
        1f7774:	0a000001 	beq	1f7780 <TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)+0x240>
        1f7778:	eb066d0c 	bl	392bb0 <ExitFIQAtomic>
        1f777c:	ea000002 	b	1f778c <TStackManager::CopyPagesAfterStackCollided(TCopyPageAfterStackCollisionParams *)+0x24c>
        1f7780:	e5d40025 	ldrb	r0, [r4, #37]
        1f7784:	e3300000 	teq	r0, #0	; 0x0
        1f7788:	1b066ce3 	blne	392b1c <ExitAtomic>
        1f778c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::SafeUserRequestEntry(long, void *)
 * Address: 001f779c
 */
TStackManager::SafeUserRequestEntry(long, void *) {
    /*
        1f779c:	e1a0c00d 	mov	ip, sp
        1f77a0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1f77a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f77a8:	e1a04000 	mov	r4, r0
        1f77ac:	e1a06001 	mov	r6, r1
        1f77b0:	e1a05002 	mov	r5, r2
        1f77b4:	e24dd018 	sub	sp, sp, #24	; 0x18
        1f77b8:	e3a07000 	mov	r7, #0	; 0x0
        1f77bc:	e59f0074 	ldr	r0, [pc, #74]	; 1f7838 <TStackManager::SafeUserRequestEntry(long, void *)+0x9c>
        1f77c0:	e5900000 	ldr	r0, [r0]
        1f77c4:	eb67ae6d 	bl	1be3180 <$SetHeap>
        1f77c8:	e1a0100d 	mov	r1, sp
        1f77cc:	e1a00005 	mov	r0, r5
        1f77d0:	e3a02018 	mov	r2, #24	; 0x18
        1f77d4:	eb679dde 	bl	1bdef54 <$BlockMove>
        1f77d8:	e28400c4 	add	r0, r4, #196	; 0xc4
        1f77dc:	e1a08000 	mov	r8, r0
        1f77e0:	e3a01000 	mov	r1, #0	; 0x0
        1f77e4:	eb675bda 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f77e8:	e356000c 	cmp	r6, #12	; 0xc
        1f77ec:	908ff106 	addls	pc, pc, r6, lsl #2
        1f77f0:	ea000051 	b	1f793c <TStackManager::SafeUserRequestEntry(long, void *)+0x1a0>
        1f77f4:	ea000050 	b	1f793c <TStackManager::SafeUserRequestEntry(long, void *)+0x1a0>
        1f77f8:	ea00000f 	b	1f783c <TStackManager::SafeUserRequestEntry(long, void *)+0xa0>
        1f77fc:	ea000014 	b	1f7854 <TStackManager::SafeUserRequestEntry(long, void *)+0xb8>
        1f7800:	ea00001a 	b	1f7870 <TStackManager::SafeUserRequestEntry(long, void *)+0xd4>
        1f7804:	ea00001e 	b	1f7884 <TStackManager::SafeUserRequestEntry(long, void *)+0xe8>
        1f7808:	ea000024 	b	1f78a0 <TStackManager::SafeUserRequestEntry(long, void *)+0x104>
        1f780c:	ea000028 	b	1f78b4 <TStackManager::SafeUserRequestEntry(long, void *)+0x118>
        1f7810:	ea00002c 	b	1f78c8 <TStackManager::SafeUserRequestEntry(long, void *)+0x12c>
        1f7814:	ea000032 	b	1f78e4 <TStackManager::SafeUserRequestEntry(long, void *)+0x148>
        1f7818:	ea000036 	b	1f78f8 <TStackManager::SafeUserRequestEntry(long, void *)+0x15c>
        1f781c:	ea00003a 	b	1f790c <TStackManager::SafeUserRequestEntry(long, void *)+0x170>
        1f7820:	ea00003e 	b	1f7920 <TStackManager::SafeUserRequestEntry(long, void *)+0x184>
        1f7824:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f7828:	e28d1004 	add	r1, sp, #4	; 0x4
        1f782c:	e1a00004 	mov	r0, r4
        1f7830:	eb640504 	bl	1af8c48 <TStackManager::$FMGetSystemReleaseable(FM_GetSystemReleaseable_Parms *)>
        1f7834:	ea00003d 	b	1f7930 <TStackManager::SafeUserRequestEntry(long, void *)+0x194>
        1f7838:	0c104c08 	ldceq	12, cr4, [r0], -#32
        1f783c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f7840:	e1a0200d 	mov	r2, sp
        1f7844:	e28d1004 	add	r1, sp, #4	; 0x4
        1f7848:	e1a00004 	mov	r0, r4
        1f784c:	eb640501 	bl	1af8c58 <TStackManager::$FMNewStack(FM_NewStack_Parms *, TStackInfo **)>
        1f7850:	ea000003 	b	1f7864 <TStackManager::SafeUserRequestEntry(long, void *)+0xc8>
        1f7854:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f7858:	e28d1004 	add	r1, sp, #4	; 0x4
        1f785c:	e1a00004 	mov	r0, r4
        1f7860:	eb6404fa 	bl	1af8c50 <TStackManager::$FMNewHeapArea(FM_NewHeapArea_Parms *)>
        1f7864:	e1a04000 	mov	r4, r0
        1f7868:	e3a07018 	mov	r7, #24	; 0x18
        1f786c:	ea000035 	b	1f7948 <TStackManager::SafeUserRequestEntry(long, void *)+0x1ac>
        1f7870:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f7874:	e28d1004 	add	r1, sp, #4	; 0x4
        1f7878:	e1a00004 	mov	r0, r4
        1f787c:	eb6404f6 	bl	1af8c5c <TStackManager::$FMSetHeapLimits(FM_SetHeapLimits_Parms *)>
        1f7880:	ea000014 	b	1f78d8 <TStackManager::SafeUserRequestEntry(long, void *)+0x13c>
        1f7884:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f7888:	e28d1004 	add	r1, sp, #4	; 0x4
        1f788c:	e1a00004 	mov	r0, r4
        1f7890:	eb6404e9 	bl	1af8c3c <TStackManager::$FMFree(FM_Free_Parms *)>
        1f7894:	e1a04000 	mov	r4, r0
        1f7898:	e3a07004 	mov	r7, #4	; 0x4
        1f789c:	ea000029 	b	1f7948 <TStackManager::SafeUserRequestEntry(long, void *)+0x1ac>
        1f78a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f78a4:	e28d1004 	add	r1, sp, #4	; 0x4
        1f78a8:	e1a00004 	mov	r0, r4
        1f78ac:	eb6404e3 	bl	1af8c40 <TStackManager::$FMFreeHeapRange(FM_SetHeapLimits_Parms *)>
        1f78b0:	ea000008 	b	1f78d8 <TStackManager::SafeUserRequestEntry(long, void *)+0x13c>
        1f78b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f78b8:	e28d1004 	add	r1, sp, #4	; 0x4
        1f78bc:	e1a00004 	mov	r0, r4
        1f78c0:	eb6404e1 	bl	1af8c4c <TStackManager::$FMLockHeapRange(FM_LockHeapRange_Parms *)>
        1f78c4:	ea000019 	b	1f7930 <TStackManager::SafeUserRequestEntry(long, void *)+0x194>
        1f78c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f78cc:	e28d1004 	add	r1, sp, #4	; 0x4
        1f78d0:	e1a00004 	mov	r0, r4
        1f78d4:	eb6404e2 	bl	1af8c64 <TStackManager::$FMUnlockHeapRange(FM_SetHeapLimits_Parms *)>
        1f78d8:	e1a04000 	mov	r4, r0
        1f78dc:	e3a07008 	mov	r7, #8	; 0x8
        1f78e0:	ea000018 	b	1f7948 <TStackManager::SafeUserRequestEntry(long, void *)+0x1ac>
        1f78e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f78e8:	e28d1004 	add	r1, sp, #4	; 0x4
        1f78ec:	e1a00004 	mov	r0, r4
        1f78f0:	eb6404d7 	bl	1af8c54 <TStackManager::$FMNewHeapDomain(FM_NewHeapDomain_Parms *)>
        1f78f4:	ea00000d 	b	1f7930 <TStackManager::SafeUserRequestEntry(long, void *)+0x194>
        1f78f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f78fc:	e28d1004 	add	r1, sp, #4	; 0x4
        1f7900:	e1a00004 	mov	r0, r4
        1f7904:	eb6404cb 	bl	1af8c38 <TStackManager::$FMAddPageMappingToDomain(FM_AddPageMappingToDomain_Parms *)>
        1f7908:	ea000008 	b	1f7930 <TStackManager::SafeUserRequestEntry(long, void *)+0x194>
        1f790c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f7910:	e28d1004 	add	r1, sp, #4	; 0x4
        1f7914:	e1a00004 	mov	r0, r4
        1f7918:	eb6404d0 	bl	1af8c60 <TStackManager::$FMSetRemoveRoutine(FM_SetRemoveRoutine_Parms *)>
        1f791c:	ea000003 	b	1f7930 <TStackManager::SafeUserRequestEntry(long, void *)+0x194>
        1f7920:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f7924:	e28d1004 	add	r1, sp, #4	; 0x4
        1f7928:	e1a00004 	mov	r0, r4
        1f792c:	eb6404c4 	bl	1af8c44 <TStackManager::$FMGetHeapAreaInfo(FM_GetHeapAreaInfo_Parms *)>
        1f7930:	e1a04000 	mov	r4, r0
        1f7934:	e3a0700c 	mov	r7, #12	; 0xc
        1f7938:	ea000002 	b	1f7948 <TStackManager::SafeUserRequestEntry(long, void *)+0x1ac>
        1f793c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f7940:	e3a040d2 	mov	r4, #210	; 0xd2
        1f7944:	e2444b0a 	sub	r4, r4, #10240	; 0x2800
        1f7948:	e28dd004 	add	sp, sp, #4	; 0x4
        1f794c:	e1a00008 	mov	r0, r8
        1f7950:	eb6788d0 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f7954:	e1a02007 	mov	r2, r7
        1f7958:	e1a01005 	mov	r1, r5
        1f795c:	e1a0000d 	mov	r0, sp
        1f7960:	eb679d7b 	bl	1bdef54 <$BlockMove>
        1f7964:	e1a00004 	mov	r0, r4
        1f7968:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::ResolveFault(TStackInfo *)
 * Address: 001f7978
 */
TStackManager::ResolveFault(TStackInfo *) {
    /*
        1f7978:	e1a0c00d 	mov	ip, sp
        1f797c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1f7980:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f7984:	e1a04000 	mov	r4, r0
        1f7988:	e1a05001 	mov	r5, r1
        1f798c:	e24dd028 	sub	sp, sp, #40	; 0x28
        1f7990:	e3a0a000 	mov	sl, #0	; 0x0
        1f7994:	e3a00000 	mov	r0, #0	; 0x0
        1f7998:	e5cd000c 	strb	r0, [sp, #12]
        1f799c:	e5cd0008 	strb	r0, [sp, #8]
        1f79a0:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        1f79a4:	e5cd0000 	strb	r0, [sp]
        1f79a8:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1f79ac:	e5900044 	ldr	r0, [r0, #68]
        1f79b0:	e595201c 	ldr	r2, [r5, #28]	; fField28
        1f79b4:	e1500002 	cmp	r0, r2
        1f79b8:	23a00024 	movcs	r0, #36	; 0x24
        1f79bc:	22400b0a 	subcs	r0, r0, #10240	; 0x2800
        1f79c0:	2a0000ad 	bcs	1f7c7c <TStackManager::ResolveFault(TStackInfo *)+0x304>
        1f79c4:	e5952018 	ldr	r2, [r5, #24]	; fField24
        1f79c8:	e1500002 	cmp	r0, r2
        1f79cc:	33a00025 	movcc	r0, #37	; 0x25
        1f79d0:	32400b0a 	subcc	r0, r0, #10240	; 0x2800
        1f79d4:	3a0000a8 	bcc	1f7c7c <TStackManager::ResolveFault(TStackInfo *)+0x304>
        1f79d8:	e5951014 	ldr	r1, [r5, #20]
        1f79dc:	e0400001 	sub	r0, r0, r1
        1f79e0:	e1a00520 	mov	r0, r0, lsr #10
        1f79e4:	e1a07120 	mov	r7, r0, lsr #2
        1f79e8:	e2008003 	and	r8, r0, #3	; 0x3
        1f79ec:	e2840004 	add	r0, r4, #4	; 0x4
        1f79f0:	e3a01000 	mov	r1, #0	; 0x0
        1f79f4:	e58d0024 	str	r0, [sp, #36]
        1f79f8:	eb675b55 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f79fc:	e5950010 	ldr	r0, [r5, #16]
        1f7a00:	e7906107 	ldr	r6, [r0, r7, lsl #2]	; fField2
        1f7a04:	e3360000 	teq	r6, #0	; 0x0
        1f7a08:	1a00000b 	bne	1f7a3c <TStackManager::ResolveFault(TStackInfo *)+0xc4>
        1f7a0c:	e3a00001 	mov	r0, #1	; 0x1
        1f7a10:	e1a03810 	mov	r3, r0, lsl r8
        1f7a14:	e1a02007 	mov	r2, r7
        1f7a18:	e1a01005 	mov	r1, r5
        1f7a1c:	e1a00004 	mov	r0, r4
        1f7a20:	eb640477 	bl	1af8c04 <TStackManager::$FindOrAllocPage_ReturnUnLockedOnNoPage(TStackInfo *, unsigned long, unsigned long)>
        1f7a24:	e1b06000 	movs	r6, r0
        1f7a28:	03a0a004 	moveq	sl, #4	; 0x4
        1f7a2c:	0a000085 	beq	1f7c48 <TStackManager::ResolveFault(TStackInfo *)+0x2d0>
        1f7a30:	e5950010 	ldr	r0, [r5, #16]
        1f7a34:	e7806107 	str	r6, [r0, r7, lsl #2]	; fField2
        1f7a38:	ea000013 	b	1f7a8c <TStackManager::ResolveFault(TStackInfo *)+0x114>
        1f7a3c:	e0860108 	add	r0, r6, r8, lsl #2
        1f7a40:	e5b09010 	ldr	r9, [r0, #16]!
        1f7a44:	e0860088 	add	r0, r6, r8, lsl #1
        1f7a48:	e5902020 	ldr	r2, [r0, #32]
        1f7a4c:	e1a02822 	mov	r2, r2, lsr #16
        1f7a50:	e1390005 	teq	r9, r5
        1f7a54:	e58d2020 	str	r2, [sp, #32]
        1f7a58:	059d2020 	ldreq	r2, [sp, #32]
        1f7a5c:	01320007 	teqeq	r2, r7
        1f7a60:	0a000009 	beq	1f7a8c <TStackManager::ResolveFault(TStackInfo *)+0x114>
        1f7a64:	e3390000 	teq	r9, #0	; 0x0
        1f7a68:	1a00001a 	bne	1f7ad8 <TStackManager::ResolveFault(TStackInfo *)+0x160>
        1f7a6c:	e1a03008 	mov	r3, r8
        1f7a70:	e92d0008 	stmdb	sp!, {r3}
        1f7a74:	e1a03006 	mov	r3, r6
        1f7a78:	e1a02007 	mov	r2, r7
        1f7a7c:	e1a01005 	mov	r1, r5
        1f7a80:	e1a00004 	mov	r0, r4
        1f7a84:	eb643a31 	bl	1b06350 <TStackManager::$SetSubPageInfo(TStackInfo *, unsigned long, TStackPage *, unsigned long)>
        1f7a88:	e28dd004 	add	sp, sp, #4	; 0x4
        1f7a8c:	e1a02006 	mov	r2, r6
        1f7a90:	e1a00004 	mov	r0, r4
        1f7a94:	e3a01000 	mov	r1, #0	; 0x0
        1f7a98:	eb643a24 	bl	1b06330 <TStackManager::$SetRestrictedPage(unsigned long, TStackPage *)>
        1f7a9c:	e1a03006 	mov	r3, r6
        1f7aa0:	e1a02007 	mov	r2, r7
        1f7aa4:	e1a01005 	mov	r1, r5
        1f7aa8:	e1a00004 	mov	r0, r4
        1f7aac:	eb642dbf 	bl	1b031b0 <TStackManager::$RememberMappings(TStackInfo *, unsigned long, TStackPage *)>
        1f7ab0:	e59d0024 	ldr	r0, [sp, #36]
        1f7ab4:	eb678877 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f7ab8:	e5d400c0 	ldrb	r0, [r4, #192]	; fField192
        1f7abc:	e3300000 	teq	r0, #0	; 0x0
        1f7ac0:	0a000064 	beq	1f7c58 <TStackManager::ResolveFault(TStackInfo *)+0x2e0>
        1f7ac4:	e0860008 	add	r0, r6, r8
        1f7ac8:	e5d01028 	ldrb	r1, [r0, #40]
        1f7acc:	e2811001 	add	r1, r1, #1	; 0x1
        1f7ad0:	e5c01028 	strb	r1, [r0, #40]
        1f7ad4:	ea00005f 	b	1f7c58 <TStackManager::ResolveFault(TStackInfo *)+0x2e0>
        1f7ad8:	e28d3004 	add	r3, sp, #4	; 0x4
        1f7adc:	e28d2008 	add	r2, sp, #8	; 0x8
        1f7ae0:	e28d1010 	add	r1, sp, #16	; 0x10
        1f7ae4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1f7ae8:	e1a03006 	mov	r3, r6
        1f7aec:	e1a02007 	mov	r2, r7
        1f7af0:	e1a01005 	mov	r1, r5
        1f7af4:	e1a00004 	mov	r0, r4
        1f7af8:	eb63f7f6 	bl	1af5ad8 <TStackManager::$CountMatches(TStackInfo *, unsigned long, TStackPage *, unsigned long *, unsigned char *, unsigned char *)>
        1f7afc:	e28dd00c 	add	sp, sp, #12	; 0xc
        1f7b00:	e58d0018 	str	r0, [sp, #24]	; fField24
        1f7b04:	e1a0300d 	mov	r3, sp
        1f7b08:	e28d200c 	add	r2, sp, #12	; 0xc
        1f7b0c:	e28d1014 	add	r1, sp, #20	; 0x14
        1f7b10:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1f7b14:	e1a03006 	mov	r3, r6
        1f7b18:	e1a01009 	mov	r1, r9
        1f7b1c:	e1a00004 	mov	r0, r4
        1f7b20:	e59d202c 	ldr	r2, [sp, #44]
        1f7b24:	eb63f7eb 	bl	1af5ad8 <TStackManager::$CountMatches(TStackInfo *, unsigned long, TStackPage *, unsigned long *, unsigned char *, unsigned char *)>
        1f7b28:	e28dd00c 	add	sp, sp, #12	; 0xc
        1f7b2c:	e58d001c 	str	r0, [sp, #28]	; fField28
        1f7b30:	e52d6018 	str	r6, [sp, -#24]!	; fField24
        1f7b34:	e52d4010 	str	r4, [sp, -#16]!
        1f7b38:	e5dd002c 	ldrb	r0, [sp, #44]
        1f7b3c:	e3300000 	teq	r0, #0	; 0x0
        1f7b40:	15dd0028 	ldrneb	r0, [sp, #40]
        1f7b44:	13300000 	teqne	r0, #0	; 0x0
        1f7b48:	03a00000 	moveq	r0, #0	; 0x0
        1f7b4c:	13a00001 	movne	r0, #1	; 0x1
        1f7b50:	e5cd0024 	strb	r0, [sp, #36]
        1f7b54:	e1a02006 	mov	r2, r6
        1f7b58:	e1a00004 	mov	r0, r4
        1f7b5c:	e3a01000 	mov	r1, #0	; 0x0
        1f7b60:	e58d8020 	str	r8, [sp, #32]
        1f7b64:	eb6439f1 	bl	1b06330 <TStackManager::$SetRestrictedPage(unsigned long, TStackPage *)>
        1f7b68:	e5dd0030 	ldrb	r0, [sp, #48]
        1f7b6c:	e31000ff 	tst	r0, #255	; 0xff
        1f7b70:	e5dd002c 	ldrb	r0, [sp, #44]
        1f7b74:	0a000003 	beq	1f7b88 <TStackManager::ResolveFault(TStackInfo *)+0x210>
        1f7b78:	e3300000 	teq	r0, #0	; 0x0
        1f7b7c:	13a00004 	movne	r0, #4	; 0x4
        1f7b80:	e2800005 	add	r0, r0, #5	; 0x5
        1f7b84:	ea000000 	b	1f7b8c <TStackManager::ResolveFault(TStackInfo *)+0x214>
        1f7b88:	e3a00000 	mov	r0, #0	; 0x0
        1f7b8c:	e59d1040 	ldr	r1, [sp, #64]	; fField64
        1f7b90:	e0802001 	add	r2, r0, r1
        1f7b94:	e5dd0034 	ldrb	r0, [sp, #52]
        1f7b98:	e31000ff 	tst	r0, #255	; 0xff
        1f7b9c:	e5dd0028 	ldrb	r0, [sp, #40]
        1f7ba0:	0a000003 	beq	1f7bb4 <TStackManager::ResolveFault(TStackInfo *)+0x23c>
        1f7ba4:	e3300000 	teq	r0, #0	; 0x0
        1f7ba8:	13a00004 	movne	r0, #4	; 0x4
        1f7bac:	e2800005 	add	r0, r0, #5	; 0x5
        1f7bb0:	ea000000 	b	1f7bb8 <TStackManager::ResolveFault(TStackInfo *)+0x240>
        1f7bb4:	e3a00000 	mov	r0, #0	; 0x0
        1f7bb8:	e59d1044 	ldr	r1, [sp, #68]
        1f7bbc:	e0800001 	add	r0, r0, r1
        1f7bc0:	e1520000 	cmp	r2, r0
        1f7bc4:	3a000013 	bcc	1f7c18 <TStackManager::ResolveFault(TStackInfo *)+0x2a0>
        1f7bc8:	e1a01009 	mov	r1, r9
        1f7bcc:	e1a00004 	mov	r0, r4
        1f7bd0:	e59d2048 	ldr	r2, [sp, #72]
        1f7bd4:	e59d303c 	ldr	r3, [sp, #60]
        1f7bd8:	eb640409 	bl	1af8c04 <TStackManager::$FindOrAllocPage_ReturnUnLockedOnNoPage(TStackInfo *, unsigned long, unsigned long)>
        1f7bdc:	e3300000 	teq	r0, #0	; 0x0
        1f7be0:	0a000016 	beq	1f7c40 <TStackManager::ResolveFault(TStackInfo *)+0x2c8>
        1f7be4:	e5dd1034 	ldrb	r1, [sp, #52]
        1f7be8:	e5cd1025 	strb	r1, [sp, #37]
        1f7bec:	e58d9004 	str	r9, [sp, #4]	; fField4
        1f7bf0:	e59d2048 	ldr	r2, [sp, #72]
        1f7bf4:	e58d000c 	str	r0, [sp, #12]
        1f7bf8:	e58d2008 	str	r2, [sp, #8]
        1f7bfc:	e59d003c 	ldr	r0, [sp, #60]
        1f7c00:	e58d0014 	str	r0, [sp, #20]
        1f7c04:	e3a00001 	mov	r0, #1	; 0x1
        1f7c08:	e5cd0026 	strb	r0, [sp, #38]
        1f7c0c:	e58d5018 	str	r5, [sp, #24]	; fField24
        1f7c10:	e58d701c 	str	r7, [sp, #28]	; fField28
        1f7c14:	ea000028 	b	1f7cbc <TStackManager::ResolveFault(TStackInfo *)+0x344>
        1f7c18:	e3a00001 	mov	r0, #1	; 0x1
        1f7c1c:	e1a01810 	mov	r1, r0, lsl r8
        1f7c20:	e59d0038 	ldr	r0, [sp, #56]
        1f7c24:	e1813000 	orr	r3, r1, r0
        1f7c28:	e1a02007 	mov	r2, r7
        1f7c2c:	e1a01005 	mov	r1, r5
        1f7c30:	e1a00004 	mov	r0, r4
        1f7c34:	eb6403f2 	bl	1af8c04 <TStackManager::$FindOrAllocPage_ReturnUnLockedOnNoPage(TStackInfo *, unsigned long, unsigned long)>
        1f7c38:	e1b06000 	movs	r6, r0
        1f7c3c:	1a00000f 	bne	1f7c80 <TStackManager::ResolveFault(TStackInfo *)+0x308>
        1f7c40:	e3a0a004 	mov	sl, #4	; 0x4
        1f7c44:	e28dd028 	add	sp, sp, #40	; 0x28
        1f7c48:	e5b50020 	ldr	r0, [r5, #32]!
        1f7c4c:	e3100004 	tst	r0, #4	; 0x4
        1f7c50:	13a0a0e9 	movne	sl, #233	; 0xe9
        1f7c54:	124aab0a 	subne	sl, sl, #10240	; 0x2800
        1f7c58:	e1a00004 	mov	r0, r4
        1f7c5c:	e3a02000 	mov	r2, #0	; 0x0
        1f7c60:	e3a01000 	mov	r1, #0	; 0x0
        1f7c64:	eb6439b1 	bl	1b06330 <TStackManager::$SetRestrictedPage(unsigned long, TStackPage *)>
        1f7c68:	e1a00004 	mov	r0, r4
        1f7c6c:	e3a02000 	mov	r2, #0	; 0x0
        1f7c70:	e3a01001 	mov	r1, #1	; 0x1
        1f7c74:	eb6439ad 	bl	1b06330 <TStackManager::$SetRestrictedPage(unsigned long, TStackPage *)>
        1f7c78:	e1a0000a 	mov	r0, sl
        1f7c7c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1f7c80:	e1a02006 	mov	r2, r6
        1f7c84:	e1a00004 	mov	r0, r4
        1f7c88:	e3a01001 	mov	r1, #1	; 0x1
        1f7c8c:	eb6439a7 	bl	1b06330 <TStackManager::$SetRestrictedPage(unsigned long, TStackPage *)>
        1f7c90:	e5dd0030 	ldrb	r0, [sp, #48]
        1f7c94:	e5cd0025 	strb	r0, [sp, #37]
        1f7c98:	e98d00a0 	stmib	sp, {r5, r7}
        1f7c9c:	e58d600c 	str	r6, [sp, #12]
        1f7ca0:	e59d0038 	ldr	r0, [sp, #56]
        1f7ca4:	e58d0014 	str	r0, [sp, #20]
        1f7ca8:	e3a00000 	mov	r0, #0	; 0x0
        1f7cac:	e5cd0026 	strb	r0, [sp, #38]
        1f7cb0:	e58d9018 	str	r9, [sp, #24]	; fField24
        1f7cb4:	e59d2048 	ldr	r2, [sp, #72]
        1f7cb8:	e58d201c 	str	r2, [sp, #28]	; fField28
        1f7cbc:	e1a0000d 	mov	r0, sp
        1f7cc0:	eb647bab 	bl	1b16b74 <$CopyPageAfterCollisionSWI(TCopyPageAfterStackCollisionParams &)>
        1f7cc4:	e28dd028 	add	sp, sp, #40	; 0x28
        1f7cc8:	eaffff78 	b	1f7ab0 <TStackManager::ResolveFault(TStackInfo *)+0x138>
    */
}

/**
 * Symbol: TStackManager::ReleaseRequest(int)
 * Address: 001f7ccc
 */
TStackManager::ReleaseRequest(int) {
    /*
        1f7ccc:	e3a03000 	mov	r3, #0	; 0x0
        1f7cd0:	e3a02001 	mov	r2, #1	; 0x1
        1f7cd4:	e590c000 	ldr	ip, [r0]
        1f7cd8:	e28cf00c 	add	pc, ip, #12	; 0xc
    */
}

/**
 * Symbol: TStackManager::ReleasePagesInOneStack(THeapDomain *, TUEnvironment, TStackInfo *, unsigned char)
 * Address: 001f7cdc
 */
TStackManager::ReleasePagesInOneStack(THeapDomain *, TUEnvironment, TStackInfo *, unsigned char) {
    /*
        1f7cdc:	e1a0c00d 	mov	ip, sp
        1f7ce0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1f7ce4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f7ce8:	e1a05000 	mov	r5, r0
        1f7cec:	e1a06001 	mov	r6, r1
        1f7cf0:	e1a04003 	mov	r4, r3
        1f7cf4:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        1f7cf8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1f7cfc:	e20070ff 	and	r7, r0, #255	; 0xff
        1f7d00:	e3a00000 	mov	r0, #0	; 0x0
        1f7d04:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        1f7d08:	e5920000 	ldr	r0, [r2]
        1f7d0c:	e3a08000 	mov	r8, #0	; 0x0
        1f7d10:	e58d0000 	str	r0, [sp]
        1f7d14:	eb677353 	bl	1bd4a68 <$HoldSchedule(void)>
        1f7d18:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f7d1c:	e1a0200d 	mov	r2, sp
        1f7d20:	e3a00003 	mov	r0, #3	; 0x3
        1f7d24:	e594100c 	ldr	r1, [r4, #12]
        1f7d28:	eb63f762 	bl	1af5ab8 <$ConvertIdToObj(KernelTypes, unsigned long, void *)>
        1f7d2c:	e3300000 	teq	r0, #0	; 0x0
        1f7d30:	1a000014 	bne	1f7d88 <TStackManager::ReleasePagesInOneStack(THeapDomain *, TUEnvironment, TStackInfo *, unsigned char)+0xac>
        1f7d34:	e59d0000 	ldr	r0, [sp]
        1f7d38:	e1a01004 	mov	r1, r4
        1f7d3c:	e5b02044 	ldr	r2, [r0, #68]!
        1f7d40:	e1a00005 	mov	r0, r5
        1f7d44:	eb63f33d 	bl	1af4a40 <TStackManager::$CheckRange(TStackInfo *, unsigned long)>
        1f7d48:	e3300000 	teq	r0, #0	; 0x0
        1f7d4c:	1a00000d 	bne	1f7d88 <TStackManager::ReleasePagesInOneStack(THeapDomain *, TUEnvironment, TStackInfo *, unsigned char)+0xac>
        1f7d50:	e3a00000 	mov	r0, #0	; 0x0
        1f7d54:	e3a03000 	mov	r3, #0	; 0x0
        1f7d58:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1f7d5c:	e1a0200d 	mov	r2, sp
        1f7d60:	e92d000c 	stmdb	sp!, {r2, r3}
        1f7d64:	e59d000c 	ldr	r0, [sp, #12]
        1f7d68:	e5900044 	ldr	r0, [r0, #68]
        1f7d6c:	e2402b01 	sub	r2, r0, #1024	; 0x400
        1f7d70:	e1a03007 	mov	r3, r7
        1f7d74:	e1a01004 	mov	r1, r4
        1f7d78:	e1a00005 	mov	r0, r5
        1f7d7c:	eb6407c9 	bl	1af9ca8 <TStackManager::$FreeSubPagesBelow(TStackInfo *, unsigned long, unsigned char, unsigned long *, unsigned char)>
        1f7d80:	e5bd8008 	ldr	r8, [sp, #8]!
        1f7d84:	e28dd004 	add	sp, sp, #4	; 0x4
        1f7d88:	eb675e87 	bl	1bcf7ac <$AllowSchedule(void)>
        1f7d8c:	e5940028 	ldr	r0, [r4, #40]
        1f7d90:	e3300000 	teq	r0, #0	; 0x0
        1f7d94:	0a000043 	beq	1f7ea8 <TStackManager::ReleasePagesInOneStack(THeapDomain *, TUEnvironment, TStackInfo *, unsigned char)+0x1cc>
        1f7d98:	e24dd008 	sub	sp, sp, #8	; 0x8
        1f7d9c:	e1a0300d 	mov	r3, sp
        1f7da0:	e28d2004 	add	r2, sp, #4	; 0x4
        1f7da4:	e28d000c 	add	r0, sp, #12	; 0xc
        1f7da8:	e5961000 	ldr	r1, [r6]
        1f7dac:	eb67732b 	bl	1bd4a60 <TUEnvironment::$HasDomain(unsigned long, unsigned char *, unsigned char *)>
        1f7db0:	e5dd0000 	ldrb	r0, [sp]
        1f7db4:	e3300000 	teq	r0, #0	; 0x0
        1f7db8:	1a000006 	bne	1f7dd8 <TStackManager::ReleasePagesInOneStack(THeapDomain *, TUEnvironment, TStackInfo *, unsigned char)+0xfc>
        1f7dbc:	e3a03000 	mov	r3, #0	; 0x0
        1f7dc0:	e92d0008 	stmdb	sp!, {r3}
        1f7dc4:	e28d0010 	add	r0, sp, #16	; 0x10
        1f7dc8:	e3a02001 	mov	r2, #1	; 0x1
        1f7dcc:	e5961000 	ldr	r1, [r6]
        1f7dd0:	eb675a62 	bl	1bce760 <TUEnvironment::$Add(unsigned long, unsigned char, unsigned char, unsigned char)>
        1f7dd4:	e28dd004 	add	sp, sp, #4	; 0x4
        1f7dd8:	eb677322 	bl	1bd4a68 <$HoldSchedule(void)>
        1f7ddc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1f7de0:	e1a03007 	mov	r3, r7
        1f7de4:	e594c028 	ldr	ip, [r4, #40]
        1f7de8:	e33c0000 	teq	ip, #0	; 0x0
        1f7dec:	0a000005 	beq	1f7e08 <TStackManager::ReleasePagesInOneStack(THeapDomain *, TUEnvironment, TStackInfo *, unsigned char)+0x12c>
        1f7df0:	e1a0200d 	mov	r2, sp
        1f7df4:	e28d1004 	add	r1, sp, #4	; 0x4
        1f7df8:	e594002c 	ldr	r0, [r4, #44]
        1f7dfc:	e1a0e00f 	mov	lr, pc
        1f7e00:	e1a0f00c 	mov	pc, ip
        1f7e04:	ea000000 	b	1f7e0c <TStackManager::ReleasePagesInOneStack(THeapDomain *, TUEnvironment, TStackInfo *, unsigned char)+0x130>
        1f7e08:	e3a00000 	mov	r0, #0	; 0x0
        1f7e0c:	e20060ff 	and	r6, r0, #255	; 0xff
        1f7e10:	eb675e65 	bl	1bcf7ac <$AllowSchedule(void)>
        1f7e14:	e3360000 	teq	r6, #0	; 0x0
        1f7e18:	0a000021 	beq	1f7ea4 <TStackManager::ReleasePagesInOneStack(THeapDomain *, TUEnvironment, TStackInfo *, unsigned char)+0x1c8>
        1f7e1c:	e3370000 	teq	r7, #0	; 0x0
        1f7e20:	0a000003 	beq	1f7e34 <TStackManager::ReleasePagesInOneStack(THeapDomain *, TUEnvironment, TStackInfo *, unsigned char)+0x158>
        1f7e24:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1f7e28:	e5840018 	str	r0, [r4, #24]	; fField24
        1f7e2c:	e59d0000 	ldr	r0, [sp]
        1f7e30:	e584001c 	str	r0, [r4, #28]	; fField28
        1f7e34:	e3a00000 	mov	r0, #0	; 0x0
        1f7e38:	e3a03000 	mov	r3, #0	; 0x0
        1f7e3c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1f7e40:	e1a0200d 	mov	r2, sp
        1f7e44:	e92d000c 	stmdb	sp!, {r2, r3}
        1f7e48:	e59d0010 	ldr	r0, [sp, #16]
        1f7e4c:	e2402b01 	sub	r2, r0, #1024	; 0x400
        1f7e50:	e1a03007 	mov	r3, r7
        1f7e54:	e1a01004 	mov	r1, r4
        1f7e58:	e1a00005 	mov	r0, r5
        1f7e5c:	eb640791 	bl	1af9ca8 <TStackManager::$FreeSubPagesBelow(TStackInfo *, unsigned long, unsigned char, unsigned long *, unsigned char)>
        1f7e60:	e5bd0008 	ldr	r0, [sp, #8]!
        1f7e64:	e0886000 	add	r6, r8, r0
        1f7e68:	e3a00000 	mov	r0, #0	; 0x0
        1f7e6c:	e3a03000 	mov	r3, #0	; 0x0
        1f7e70:	e58d0000 	str	r0, [sp]
        1f7e74:	e1a0200d 	mov	r2, sp
        1f7e78:	e92d000c 	stmdb	sp!, {r2, r3}
        1f7e7c:	e59d000c 	ldr	r0, [sp, #12]
        1f7e80:	e2402001 	sub	r2, r0, #1	; 0x1
        1f7e84:	e2822b01 	add	r2, r2, #1024	; 0x400
        1f7e88:	e1a03007 	mov	r3, r7
        1f7e8c:	e1a01004 	mov	r1, r4
        1f7e90:	e1a00005 	mov	r0, r5
        1f7e94:	eb640782 	bl	1af9ca4 <TStackManager::$FreeSubPagesAbove(TStackInfo *, unsigned long, unsigned char, unsigned long *, unsigned char)>
        1f7e98:	e5bd0008 	ldr	r0, [sp, #8]!
        1f7e9c:	e0868000 	add	r8, r6, r0
        1f7ea0:	e28dd004 	add	sp, sp, #4	; 0x4
        1f7ea4:	e28dd010 	add	sp, sp, #16	; 0x10
        1f7ea8:	e28d0004 	add	r0, sp, #4	; 0x4
        1f7eac:	e3a01000 	mov	r1, #0	; 0x0
        1f7eb0:	eb675a1b 	bl	1bce724 <TUObject::$__dt(void)>
        1f7eb4:	e1a00008 	mov	r0, r8
        1f7eb8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::GatherFreePages(TDoubleQContainer &, unsigned char)
 * Address: 001f7ebc
 */
TStackManager::GatherFreePages(TDoubleQContainer &, unsigned char) {
    /*
        1f7ebc:	e1a0c00d 	mov	ip, sp
        1f7ec0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1f7ec4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f7ec8:	e1a04000 	mov	r4, r0
        1f7ecc:	e1a05001 	mov	r5, r1
        1f7ed0:	e202a0ff 	and	sl, r2, #255	; 0xff
        1f7ed4:	e3a07000 	mov	r7, #0	; 0x0
        1f7ed8:	e2800044 	add	r0, r0, #68	; 0x44
        1f7edc:	e1a08000 	mov	r8, r0
        1f7ee0:	eb677f42 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        1f7ee4:	e1b06000 	movs	r6, r0
        1f7ee8:	0a000017 	beq	1f7f4c <TStackManager::GatherFreePages(TDoubleQContainer &, unsigned char)+0x90>
        1f7eec:	e1a00008 	mov	r0, r8
        1f7ef0:	e1a01006 	mov	r1, r6
        1f7ef4:	eb676ebd 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        1f7ef8:	e1a09000 	mov	r9, r0
        1f7efc:	e5960030 	ldr	r0, [r6, #48]
        1f7f00:	e1a00e20 	mov	r0, r0, lsr #28
        1f7f04:	e330000f 	teq	r0, #15	; 0xf
        1f7f08:	1a00000d 	bne	1f7f44 <TStackManager::GatherFreePages(TDoubleQContainer &, unsigned char)+0x88>
        1f7f0c:	e1a01006 	mov	r1, r6
        1f7f10:	e1a00004 	mov	r0, r4
        1f7f14:	eb63f2ca 	bl	1af4a44 <TStackManager::$CheckRestrictedPage(TStackPage *)>
        1f7f18:	e3300000 	teq	r0, #0	; 0x0
        1f7f1c:	1a000008 	bne	1f7f44 <TStackManager::GatherFreePages(TDoubleQContainer &, unsigned char)+0x88>
        1f7f20:	e33a0000 	teq	sl, #0	; 0x0
        1f7f24:	0a000005 	beq	1f7f40 <TStackManager::GatherFreePages(TDoubleQContainer &, unsigned char)+0x84>
        1f7f28:	e1a00008 	mov	r0, r8
        1f7f2c:	e1a01006 	mov	r1, r6
        1f7f30:	eb67876a 	bl	1bd9ce0 <TDoubleQContainer::$RemoveFromQueue(void *)>
        1f7f34:	e1a01006 	mov	r1, r6
        1f7f38:	e1a00005 	mov	r0, r5
        1f7f3c:	eb675a08 	bl	1bce764 <TDoubleQContainer::$Add(void *)>
        1f7f40:	e2877a01 	add	r7, r7, #4096	; 0x1000
        1f7f44:	e1b06009 	movs	r6, r9
        1f7f48:	1affffe7 	bne	1f7eec <TStackManager::GatherFreePages(TDoubleQContainer &, unsigned char)+0x30>
        1f7f4c:	e1a00007 	mov	r0, r7
        1f7f50:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::RoundRobinPageRelease(TUEnvironment, unsigned char)
 * Address: 001f7f54
 */
TStackManager::RoundRobinPageRelease(TUEnvironment, unsigned char) {
    /*
        1f7f54:	e1a0c00d 	mov	ip, sp
        1f7f58:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1f7f5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f7f60:	e1a04000 	mov	r4, r0
        1f7f64:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1f7f68:	e20230ff 	and	r3, r2, #255	; 0xff
        1f7f6c:	e3a00000 	mov	r0, #0	; 0x0
        1f7f70:	e58d3008 	str	r3, [sp, #8]
        1f7f74:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        1f7f78:	e5910000 	ldr	r0, [r1]
        1f7f7c:	e40d0004 	str	r0, [sp], -#4	; fField4
        1f7f80:	e59400f0 	ldr	r0, [r4, #240]	; fField240
        1f7f84:	e1a05000 	mov	r5, r0
        1f7f88:	e58d0000 	str	r0, [sp]
        1f7f8c:	e59460f4 	ldr	r6, [r4, #244]	; fField244
        1f7f90:	e1a07006 	mov	r7, r6
        1f7f94:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1f7f98:	e1500006 	cmp	r0, r6
        1f7f9c:	93a07000 	movls	r7, #0	; 0x0
        1f7fa0:	e59d0000 	ldr	r0, [sp]
        1f7fa4:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1f7fa8:	e790a107 	ldr	sl, [r0, r7, lsl #2]	; fField2
        1f7fac:	e28490d0 	add	r9, r4, #208	; 0xd0
        1f7fb0:	e2866001 	add	r6, r6, #1	; 0x1
        1f7fb4:	e5950018 	ldr	r0, [r5, #24]	; fField24
        1f7fb8:	e1500006 	cmp	r0, r6
        1f7fbc:	8a000008 	bhi	1f7fe4 <TStackManager::RoundRobinPageRelease(TUEnvironment, unsigned char)+0x90>
        1f7fc0:	e1a00009 	mov	r0, r9
        1f7fc4:	e1a01005 	mov	r1, r5
        1f7fc8:	eb676e88 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        1f7fcc:	e1b05000 	movs	r5, r0
        1f7fd0:	1a000002 	bne	1f7fe0 <TStackManager::RoundRobinPageRelease(TUEnvironment, unsigned char)+0x8c>
        1f7fd4:	e1a00009 	mov	r0, r9
        1f7fd8:	eb677f04 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        1f7fdc:	e1a05000 	mov	r5, r0
        1f7fe0:	e3a06000 	mov	r6, #0	; 0x0
        1f7fe4:	e595001c 	ldr	r0, [r5, #28]	; fField28
        1f7fe8:	e7908106 	ldr	r8, [r0, r6, lsl #2]	; fField2
        1f7fec:	e3380000 	teq	r8, #0	; 0x0
        1f7ff0:	1138000a 	teqne	r8, sl
        1f7ff4:	0a00000c 	beq	1f802c <TStackManager::RoundRobinPageRelease(TUEnvironment, unsigned char)+0xd8>
        1f7ff8:	e59d300c 	ldr	r3, [sp, #12]
        1f7ffc:	e92d0008 	stmdb	sp!, {r3}
        1f8000:	e1a03008 	mov	r3, r8
        1f8004:	e28d2008 	add	r2, sp, #8	; 0x8
        1f8008:	e1a01005 	mov	r1, r5
        1f800c:	e1a00004 	mov	r0, r4
        1f8010:	eb642858 	bl	1b02178 <TStackManager::$ReleasePagesInOneStack(THeapDomain *, TUEnvironment, TStackInfo *, unsigned char)>
        1f8014:	e28dd004 	add	sp, sp, #4	; 0x4
        1f8018:	e3300000 	teq	r0, #0	; 0x0
        1f801c:	128440ec 	addne	r4, r4, #236	; 0xec
        1f8020:	19a40060 	stmneib	r4!, {r5, r6}
        1f8024:	11a04000 	movne	r4, r0
        1f8028:	1a000005 	bne	1f8044 <TStackManager::RoundRobinPageRelease(TUEnvironment, unsigned char)+0xf0>
        1f802c:	e59d0000 	ldr	r0, [sp]
        1f8030:	e1350000 	teq	r5, r0
        1f8034:	01360007 	teqeq	r6, r7
        1f8038:	11a0a008 	movne	sl, r8
        1f803c:	1affffdb 	bne	1f7fb0 <TStackManager::RoundRobinPageRelease(TUEnvironment, unsigned char)+0x5c>
        1f8040:	e3a04000 	mov	r4, #0	; 0x0
        1f8044:	e28d0004 	add	r0, sp, #4	; 0x4
        1f8048:	e3a01000 	mov	r1, #0	; 0x0
        1f804c:	eb6759b4 	bl	1bce724 <TUObject::$__dt(void)>
        1f8050:	e1a00004 	mov	r0, r4
        1f8054:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)
 * Address: 001f8058
 */
TStackManager::ReleaseRequest(int, unsigned char, unsigned long *) {
    /*
        1f8058:	e1a0c00d 	mov	ip, sp
        1f805c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1f8060:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8064:	e1a04000 	mov	r4, r0
        1f8068:	e20260ff 	and	r6, r2, #255	; 0xff
        1f806c:	e24dd018 	sub	sp, sp, #24	; 0x18
        1f8070:	e3a0a000 	mov	sl, #0	; 0x0
        1f8074:	e3a00000 	mov	r0, #0	; 0x0
        1f8078:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        1f807c:	e3a08000 	mov	r8, #0	; 0x0
        1f8080:	e58d0000 	str	r0, [sp]
        1f8084:	e59f0134 	ldr	r0, [pc, #134]	; 1f81c0 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0x168>
        1f8088:	e5900000 	ldr	r0, [r0]
        1f808c:	eb67ac3b 	bl	1be3180 <$SetHeap>
        1f8090:	e28d0008 	add	r0, sp, #8	; 0x8
        1f8094:	eb676e4a 	bl	1bd39c4 <$GetEnvironment(unsigned long *)>
        1f8098:	e59d1008 	ldr	r1, [sp, #8]
        1f809c:	e1a0000d 	mov	r0, sp
        1f80a0:	eb6761e8 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        1f80a4:	e28400e4 	add	r0, r4, #228	; 0xe4
        1f80a8:	e3a01000 	mov	r1, #0	; 0x0
        1f80ac:	e58d0014 	str	r0, [sp, #20]
        1f80b0:	eb6759a7 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f80b4:	e2840004 	add	r0, r4, #4	; 0x4
        1f80b8:	e3a01000 	mov	r1, #0	; 0x0
        1f80bc:	e58d0010 	str	r0, [sp, #16]
        1f80c0:	eb6759a3 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f80c4:	e51b1034 	ldr	r1, [fp, -#52]
        1f80c8:	e3310002 	teq	r1, #2	; 0x2
        1f80cc:	1a000020 	bne	1f8154 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0xfc>
        1f80d0:	e28400d0 	add	r0, r4, #208	; 0xd0
        1f80d4:	e58d000c 	str	r0, [sp, #12]
        1f80d8:	eb677ec4 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        1f80dc:	e1b05000 	movs	r5, r0
        1f80e0:	0a00001b 	beq	1f8154 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0xfc>
        1f80e4:	e3a07000 	mov	r7, #0	; 0x0
        1f80e8:	e5950018 	ldr	r0, [r5, #24]	; fField24
        1f80ec:	e3500000 	cmp	r0, #0	; 0x0
        1f80f0:	9a000012 	bls	1f8140 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0xe8>
        1f80f4:	e595001c 	ldr	r0, [r5, #28]	; fField28
        1f80f8:	e7909107 	ldr	r9, [r0, r7, lsl #2]	; fField2
        1f80fc:	e3390000 	teq	r9, #0	; 0x0
        1f8100:	1139000a 	teqne	r9, sl
        1f8104:	0a000008 	beq	1f812c <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0xd4>
        1f8108:	e1a03006 	mov	r3, r6
        1f810c:	e92d0008 	stmdb	sp!, {r3}
        1f8110:	e1a03009 	mov	r3, r9
        1f8114:	e28d2004 	add	r2, sp, #4	; 0x4
        1f8118:	e1a01005 	mov	r1, r5
        1f811c:	e1a00004 	mov	r0, r4
        1f8120:	eb642814 	bl	1b02178 <TStackManager::$ReleasePagesInOneStack(THeapDomain *, TUEnvironment, TStackInfo *, unsigned char)>
        1f8124:	e28dd004 	add	sp, sp, #4	; 0x4
        1f8128:	e0808008 	add	r8, r0, r8
        1f812c:	e1a0a009 	mov	sl, r9
        1f8130:	e2877001 	add	r7, r7, #1	; 0x1
        1f8134:	e5950018 	ldr	r0, [r5, #24]	; fField24
        1f8138:	e1500007 	cmp	r0, r7
        1f813c:	8affffec 	bhi	1f80f4 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0x9c>
        1f8140:	e1a01005 	mov	r1, r5
        1f8144:	e59d000c 	ldr	r0, [sp, #12]
        1f8148:	eb676e28 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        1f814c:	e1b05000 	movs	r5, r0
        1f8150:	1affffe3 	bne	1f80e4 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0x8c>
        1f8154:	e24dd014 	sub	sp, sp, #20	; 0x14
        1f8158:	e1a0000d 	mov	r0, sp
        1f815c:	e3a01004 	mov	r1, #4	; 0x4
        1f8160:	eb675555 	bl	1bcd6bc <TDoubleQContainer::$__ct(char *)>
        1f8164:	e1a02006 	mov	r2, r6
        1f8168:	e1a0100d 	mov	r1, sp
        1f816c:	e1a00004 	mov	r0, r4
        1f8170:	eb6406ce 	bl	1af9cb0 <TStackManager::$GatherFreePages(TDoubleQContainer &, unsigned char)>
        1f8174:	e0805008 	add	r5, r0, r8
        1f8178:	e1a0000d 	mov	r0, sp
        1f817c:	eb677e9b 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        1f8180:	e3300000 	teq	r0, #0	; 0x0
        1f8184:	0a00000e 	beq	1f81c4 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0x16c>
        1f8188:	e59d0024 	ldr	r0, [sp, #36]
        1f818c:	eb6786c1 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f8190:	e1a0000d 	mov	r0, sp
        1f8194:	eb6786cc 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        1f8198:	e3300000 	teq	r0, #0	; 0x0
        1f819c:	0a00002c 	beq	1f8254 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0x1fc>
        1f81a0:	e3300000 	teq	r0, #0	; 0x0
        1f81a4:	13a01001 	movne	r1, #1	; 0x1
        1f81a8:	1b63e1ac 	blne	1af0860 <TStackPage::$__dt(void)>
        1f81ac:	e1a0000d 	mov	r0, sp
        1f81b0:	eb6786c5 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        1f81b4:	e3300000 	teq	r0, #0	; 0x0
        1f81b8:	1afffff8 	bne	1f81a0 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0x148>
        1f81bc:	ea000024 	b	1f8254 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0x1fc>
        1f81c0:	0c104c08 	ldceq	12, cr4, [r0], -#32
        1f81c4:	e51b1034 	ldr	r1, [fp, -#52]
        1f81c8:	e3310001 	teq	r1, #1	; 0x1
        1f81cc:	1a00000f 	bne	1f8210 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0x1b8>
        1f81d0:	e1a02006 	mov	r2, r6
        1f81d4:	e28d1014 	add	r1, sp, #20	; 0x14
        1f81d8:	e1a00004 	mov	r0, r4
        1f81dc:	eb643022 	bl	1b0426c <TStackManager::$RoundRobinPageRelease(TUEnvironment, unsigned char)>
        1f81e0:	e1a07000 	mov	r7, r0
        1f81e4:	e0855000 	add	r5, r5, r0
        1f81e8:	e1a02006 	mov	r2, r6
        1f81ec:	e1a0100d 	mov	r1, sp
        1f81f0:	e1a00004 	mov	r0, r4
        1f81f4:	eb6406ad 	bl	1af9cb0 <TStackManager::$GatherFreePages(TDoubleQContainer &, unsigned char)>
        1f81f8:	e3370000 	teq	r7, #0	; 0x0
        1f81fc:	0a000003 	beq	1f8210 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0x1b8>
        1f8200:	e1a0000d 	mov	r0, sp
        1f8204:	eb677e79 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        1f8208:	e3300000 	teq	r0, #0	; 0x0
        1f820c:	0affffef 	beq	1f81d0 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0x178>
        1f8210:	e59d0024 	ldr	r0, [sp, #36]
        1f8214:	eb67869f 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f8218:	e1a0000d 	mov	r0, sp
        1f821c:	eb677e73 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        1f8220:	e3300000 	teq	r0, #0	; 0x0
        1f8224:	0a00000a 	beq	1f8254 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0x1fc>
        1f8228:	e1a0000d 	mov	r0, sp
        1f822c:	eb6786a6 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        1f8230:	e3300000 	teq	r0, #0	; 0x0
        1f8234:	0a000006 	beq	1f8254 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0x1fc>
        1f8238:	e3300000 	teq	r0, #0	; 0x0
        1f823c:	13a01001 	movne	r1, #1	; 0x1
        1f8240:	1b63e186 	blne	1af0860 <TStackPage::$__dt(void)>
        1f8244:	e1a0000d 	mov	r0, sp
        1f8248:	eb67869f 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        1f824c:	e3300000 	teq	r0, #0	; 0x0
        1f8250:	1afffff8 	bne	1f8238 <TStackManager::ReleaseRequest(int, unsigned char, unsigned long *)+0x1e0>
        1f8254:	e3350000 	teq	r5, #0	; 0x0
        1f8258:	13a04000 	movne	r4, #0	; 0x0
        1f825c:	03a040e9 	moveq	r4, #233	; 0xe9
        1f8260:	02444b0a 	subeq	r4, r4, #10240	; 0x2800
        1f8264:	e59d0028 	ldr	r0, [sp, #40]
        1f8268:	eb67868a 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f826c:	e51b302c 	ldr	r3, [fp, -#44]
        1f8270:	e3330000 	teq	r3, #0	; 0x0
        1f8274:	151b302c 	ldrne	r3, [fp, -#44]
        1f8278:	15835000 	strne	r5, [r3]
        1f827c:	e28d0014 	add	r0, sp, #20	; 0x14
        1f8280:	e3a01000 	mov	r1, #0	; 0x0
        1f8284:	eb675926 	bl	1bce724 <TUObject::$__dt(void)>
        1f8288:	e1a00004 	mov	r0, r4
        1f828c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::UpdatePageState(TStackPage *)
 * Address: 001f8290
 */
TStackManager::UpdatePageState(TStackPage *) {
    /*
        1f8290:	e1a0c00d 	mov	ip, sp
        1f8294:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f8298:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f829c:	e1a04001 	mov	r4, r1
        1f82a0:	e3a01000 	mov	r1, #0	; 0x0
        1f82a4:	e3a02000 	mov	r2, #0	; 0x0
        1f82a8:	e3a03001 	mov	r3, #1	; 0x1
        1f82ac:	e084c102 	add	ip, r4, r2, lsl #2
        1f82b0:	e59cc010 	ldr	ip, [ip, #16]
        1f82b4:	e33c0000 	teq	ip, #0	; 0x0
        1f82b8:	01811213 	orreq	r1, r1, r3, lsl r2
        1f82bc:	e2822001 	add	r2, r2, #1	; 0x1
        1f82c0:	e3520004 	cmp	r2, #4	; 0x4
        1f82c4:	bafffff8 	blt	1f82ac <TStackManager::UpdatePageState(TStackPage *)+0x1c>
        1f82c8:	e5942030 	ldr	r2, [r4, #48]
        1f82cc:	e3c2320f 	bic	r3, r2, #-268435456	; 0xf0000000
        1f82d0:	e1832e01 	orr	r2, r3, r1, lsl #28
        1f82d4:	e2806058 	add	r6, r0, #88	; 0x58
        1f82d8:	e2805044 	add	r5, r0, #68	; 0x44
        1f82dc:	e3310000 	teq	r1, #0	; 0x0
        1f82e0:	e5842030 	str	r2, [r4, #48]
        1f82e4:	e594000c 	ldr	r0, [r4, #12]
        1f82e8:	1a000006 	bne	1f8308 <TStackManager::UpdatePageState(TStackPage *)+0x78>
        1f82ec:	e1300006 	teq	r0, r6
        1f82f0:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1f82f4:	e1a00005 	mov	r0, r5
        1f82f8:	e1a01004 	mov	r1, r4
        1f82fc:	eb678677 	bl	1bd9ce0 <TDoubleQContainer::$RemoveFromQueue(void *)>
        1f8300:	e1a00006 	mov	r0, r6
        1f8304:	ea000005 	b	1f8320 <TStackManager::UpdatePageState(TStackPage *)+0x90>
        1f8308:	e1300005 	teq	r0, r5
        1f830c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1f8310:	e1a00006 	mov	r0, r6
        1f8314:	e1a01004 	mov	r1, r4
        1f8318:	eb678670 	bl	1bd9ce0 <TDoubleQContainer::$RemoveFromQueue(void *)>
        1f831c:	e1a00005 	mov	r0, r5
        1f8320:	e1a01004 	mov	r1, r4
        1f8324:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1f8328:	ea67590d 	b	1bce764 <TDoubleQContainer::$Add(void *)>
    */
}

/**
 * Symbol: TStackManager::CopyPageState(TStackPage *, TStackPage *, unsigned long)
 * Address: 001f832c
 */
TStackManager::CopyPageState(TStackPage *, TStackPage *, unsigned long) {
    /*
        1f832c:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        1f8330:	e3a0c000 	mov	ip, #0	; 0x0
        1f8334:	e3130001 	tst	r3, #1	; 0x1
        1f8338:	0a000010 	beq	1f8380 <TStackManager::CopyPageState(TStackPage *, TStackPage *, unsigned long)+0x54>
        1f833c:	e082e10c 	add	lr, r2, ip, lsl #2
        1f8340:	e59ee010 	ldr	lr, [lr, #16]
        1f8344:	e081410c 	add	r4, r1, ip, lsl #2
        1f8348:	e5a4e010 	str	lr, [r4, #16]!
        1f834c:	e082e08c 	add	lr, r2, ip, lsl #1
        1f8350:	e59ee020 	ldr	lr, [lr, #32]
        1f8354:	e1a0e82e 	mov	lr, lr, lsr #16
        1f8358:	e081408c 	add	r4, r1, ip, lsl #1
        1f835c:	e5c4e021 	strb	lr, [r4, #33]
        1f8360:	e1a0e44e 	mov	lr, lr, asr #8
        1f8364:	e5c4e020 	strb	lr, [r4, #32]
        1f8368:	e082400c 	add	r4, r2, ip
        1f836c:	e5d45028 	ldrb	r5, [r4, #40]
        1f8370:	e081e00c 	add	lr, r1, ip
        1f8374:	e5ce5028 	strb	r5, [lr, #40]
        1f8378:	e5d4402c 	ldrb	r4, [r4, #44]
        1f837c:	e5ce402c 	strb	r4, [lr, #44]
        1f8380:	e1a030a3 	mov	r3, r3, lsr #1
        1f8384:	e28cc001 	add	ip, ip, #1	; 0x1
        1f8388:	e35c0004 	cmp	ip, #4	; 0x4
        1f838c:	baffffe8 	blt	1f8334 <TStackManager::CopyPageState(TStackPage *, TStackPage *, unsigned long)+0x8>
        1f8390:	e8bd4030 	ldmia	sp!, {r4, r5, lr}
        1f8394:	ea644441 	b	1b094a0 <TStackManager::$UpdatePageState(TStackPage *)>
    */
}

/**
 * Symbol: TStackManager::BuildPerms(TStackInfo *, unsigned long, TStackPage *)
 * Address: 001f8398
 */
TStackManager::BuildPerms(TStackInfo *, unsigned long, TStackPage *) {
    /*
        1f8398:	e92d4000 	stmdb	sp!, {lr}
        1f839c:	e3a00000 	mov	r0, #0	; 0x0
        1f83a0:	e3a0c003 	mov	ip, #3	; 0x3
        1f83a4:	e1a00100 	mov	r0, r0, lsl #2
        1f83a8:	e083e10c 	add	lr, r3, ip, lsl #2
        1f83ac:	e59ee010 	ldr	lr, [lr, #16]
        1f83b0:	e13e0001 	teq	lr, r1
        1f83b4:	0083e08c 	addeq	lr, r3, ip, lsl #1
        1f83b8:	059ee020 	ldreq	lr, [lr, #32]
        1f83bc:	01a0e82e 	moveq	lr, lr, lsr #16
        1f83c0:	013e0002 	teqeq	lr, r2
        1f83c4:	1a000003 	bne	1f83d8 <TStackManager::BuildPerms(TStackInfo *, unsigned long, TStackPage *)+0x40>
        1f83c8:	e591e020 	ldr	lr, [r1, #32]
        1f83cc:	e31e0002 	tst	lr, #2	; 0x2
        1f83d0:	03800003 	orreq	r0, r0, #3	; 0x3
        1f83d4:	13800002 	orrne	r0, r0, #2	; 0x2
        1f83d8:	e25cc001 	subs	ip, ip, #1	; 0x1
        1f83dc:	5afffff0 	bpl	1f83a4 <TStackManager::BuildPerms(TStackInfo *, unsigned long, TStackPage *)+0xc>
        1f83e0:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TStackManager::Fault(TProcessorState &)
 * Address: 001f83e4
 */
TStackManager::Fault(TProcessorState &) {
    /*
        1f83e4:	e1a0c00d 	mov	ip, sp
        1f83e8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f83ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f83f0:	e1a04000 	mov	r4, r0
        1f83f4:	e1a05001 	mov	r5, r1
        1f83f8:	e59f0088 	ldr	r0, [pc, #88]	; 1f8488 <TStackManager::Fault(TProcessorState &)+0xa4>
        1f83fc:	e5900000 	ldr	r0, [r0]
        1f8400:	eb67ab5e 	bl	1be3180 <$SetHeap>
        1f8404:	e28400c4 	add	r0, r4, #196	; 0xc4
        1f8408:	e1a06000 	mov	r6, r0
        1f840c:	e3a01000 	mov	r1, #0	; 0x0
        1f8410:	eb6758cf 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f8414:	e1a00005 	mov	r0, r5
        1f8418:	e5845040 	str	r5, [r4, #64]	; fField64
        1f841c:	e595105c 	ldr	r1, [r5, #92]
        1f8420:	e3110402 	tst	r1, #33554432	; 0x2000000
        1f8424:	e3a05025 	mov	r5, #37	; 0x25
        1f8428:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        1f842c:	0a000016 	beq	1f848c <TStackManager::Fault(TProcessorState &)+0xa8>
        1f8430:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f8434:	e1a0200d 	mov	r2, sp
        1f8438:	e5b01058 	ldr	r1, [r0, #88]!
        1f843c:	e3a00003 	mov	r0, #3	; 0x3
        1f8440:	eb63f59c 	bl	1af5ab8 <$ConvertIdToObj(KernelTypes, unsigned long, void *)>
        1f8444:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1f8448:	e5b02050 	ldr	r2, [r0, #80]!
        1f844c:	e59d0000 	ldr	r0, [sp]
        1f8450:	e1a01000 	mov	r1, r0
        1f8454:	e5903088 	ldr	r3, [r0, #136]
        1f8458:	e0432002 	sub	r2, r3, r2
        1f845c:	e59000ac 	ldr	r0, [r0, #172]
        1f8460:	e1520000 	cmp	r2, r0
        1f8464:	85a120ac 	strhi	r2, [r1, #172]!
        1f8468:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1f846c:	e5b01044 	ldr	r1, [r0, #68]!
        1f8470:	e1a00004 	mov	r0, r4
        1f8474:	eb640a30 	bl	1afad3c <TStackManager::$GetStackInfo(unsigned long)>
        1f8478:	e3300000 	teq	r0, #0	; 0x0
        1f847c:	e28dd004 	add	sp, sp, #4	; 0x4
        1f8480:	0a000018 	beq	1f84e8 <TStackManager::Fault(TProcessorState &)+0x104>
        1f8484:	ea000005 	b	1f84a0 <TStackManager::Fault(TProcessorState &)+0xbc>
        1f8488:	0c104c08 	ldceq	12, cr4, [r0], -#32
        1f848c:	e5b01044 	ldr	r1, [r0, #68]!
        1f8490:	e1a00004 	mov	r0, r4
        1f8494:	eb640a28 	bl	1afad3c <TStackManager::$GetStackInfo(unsigned long)>
        1f8498:	e3300000 	teq	r0, #0	; 0x0
        1f849c:	0a000011 	beq	1f84e8 <TStackManager::Fault(TProcessorState &)+0x104>
        1f84a0:	e5901020 	ldr	r1, [r0, #32]
        1f84a4:	e3110002 	tst	r1, #2	; 0x2
        1f84a8:	0a00000a 	beq	1f84d8 <TStackManager::Fault(TProcessorState &)+0xf4>
        1f84ac:	e5941040 	ldr	r1, [r4, #64]	; fField64
        1f84b0:	e3a0201e 	mov	r2, #30	; 0x1e
        1f84b4:	e5913048 	ldr	r3, [r1, #72]
        1f84b8:	e00231a3 	and	r3, r2, r3, lsr #3
        1f84bc:	e3a02003 	mov	r2, #3	; 0x3
        1f84c0:	e1a02312 	mov	r2, r2, lsl r3
        1f84c4:	e5911060 	ldr	r1, [r1, #96]
        1f84c8:	e0021001 	and	r1, r2, r1
        1f84cc:	e1310002 	teq	r1, r2
        1f84d0:	159f5048 	ldrne	r5, [pc, #48]	; 1f8520 <TStackManager::Fault(TProcessorState &)+0x13c>
        1f84d4:	1a000003 	bne	1f84e8 <TStackManager::Fault(TProcessorState &)+0x104>
        1f84d8:	e1a01000 	mov	r1, r0
        1f84dc:	e1a00004 	mov	r0, r4
        1f84e0:	eb642f5a 	bl	1b04250 <TStackManager::$ResolveFault(TStackInfo *)>
        1f84e4:	e1a05000 	mov	r5, r0
        1f84e8:	e5b40040 	ldr	r0, [r4, #64]!	; fField64
        1f84ec:	e5b04034 	ldr	r4, [r0, #52]!
        1f84f0:	e1a00006 	mov	r0, r6
        1f84f4:	eb6785e7 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f84f8:	e3350000 	teq	r5, #0	; 0x0
        1f84fc:	0a00000d 	beq	1f8538 <TStackManager::Fault(TProcessorState &)+0x154>
        1f8500:	e3350004 	teq	r5, #4	; 0x4
        1f8504:	1a000006 	bne	1f8524 <TStackManager::Fault(TProcessorState &)+0x140>
        1f8508:	e3a02000 	mov	r2, #0	; 0x0
        1f850c:	e3a01000 	mov	r1, #0	; 0x0
        1f8510:	e3a000a5 	mov	r0, #165	; 0xa5
        1f8514:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        1f8518:	eb67dc9e 	bl	1bef798 <$Reboot(long, unsigned long, unsigned char)>
        1f851c:	ea000005 	b	1f8538 <TStackManager::Fault(TProcessorState &)+0x154>
        1f8520:	ffffd8b3 	swinv	0x00ffd8b3
        1f8524:	e1a01004 	mov	r1, r4
        1f8528:	e59f0010 	ldr	r0, [pc, #10]	; 1f8540 <TStackManager::Fault(TProcessorState &)+0x15c>
        1f852c:	e5900000 	ldr	r0, [r0]
        1f8530:	e3a02000 	mov	r2, #0	; 0x0
        1f8534:	eb67ab18 	bl	1be319c <$Throw>
        1f8538:	e1a00005 	mov	r0, r5
        1f853c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1f8540:	003712b8 	ldreqh	r1, [r7], -r8
    */
}

/**
 * Symbol: TStackManager::RememberMappings(TStackInfo *, unsigned long, TStackPage *)
 * Address: 001f8544
 */
TStackManager::RememberMappings(TStackInfo *, unsigned long, TStackPage *) {
    /*
        1f8544:	e1a0c00d 	mov	ip, sp
        1f8548:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f854c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8550:	e1a04001 	mov	r4, r1
        1f8554:	e1a05003 	mov	r5, r3
        1f8558:	e5911014 	ldr	r1, [r1, #20]
        1f855c:	e0816602 	add	r6, r1, r2, lsl #12
        1f8560:	e5941020 	ldr	r1, [r4, #32]
        1f8564:	e3110001 	tst	r1, #1	; 0x1
        1f8568:	03a01001 	moveq	r1, #1	; 0x1
        1f856c:	13a01000 	movne	r1, #0	; 0x0
        1f8570:	e20130ff 	and	r3, r1, #255	; 0xff
        1f8574:	e92d0008 	stmdb	sp!, {r3}
        1f8578:	e1a03005 	mov	r3, r5
        1f857c:	e1a01004 	mov	r1, r4
        1f8580:	eb63ed19 	bl	1af39ec <TStackManager::$BuildPerms(TStackInfo *, unsigned long, TStackPage *)>
        1f8584:	e1a02000 	mov	r2, r0
        1f8588:	e5b40024 	ldr	r0, [r4, #36]!
        1f858c:	e1a01006 	mov	r1, r6
        1f8590:	e5953000 	ldr	r3, [r5]
        1f8594:	eb6785c5 	bl	1bd9cb0 <$Remember__15TUDomainManagerSFUlN31Uc>
        1f8598:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::ForgetMappings(TStackInfo *, TStackPage *, unsigned long)
 * Address: 001f859c
 */
TStackManager::ForgetMappings(TStackInfo *, TStackPage *, unsigned long) {
    /*
        1f859c:	e5b10024 	ldr	r0, [r1, #36]!
        1f85a0:	e5922000 	ldr	r2, [r2]
        1f85a4:	e1a01003 	mov	r1, r3
        1f85a8:	ea6768e2 	b	1bd2938 <$Forget__15TUDomainManagerSFUlN21>
    */
}

/**
 * Symbol: TStackManager::ForgetMappings(TStackInfo *, unsigned long, TStackPage *)
 * Address: 001f85ac
 */
TStackManager::ForgetMappings(TStackInfo *, unsigned long, TStackPage *) {
    /*
        1f85ac:	e1a0c00d 	mov	ip, sp
        1f85b0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1f85b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f85b8:	e1a07000 	mov	r7, r0
        1f85bc:	e1a05001 	mov	r5, r1
        1f85c0:	e1a06002 	mov	r6, r2
        1f85c4:	e1a04003 	mov	r4, r3
        1f85c8:	eb647966 	bl	1b16b68 <TStackManager::$RemoveOwnerFromPage(TStackInfo *, unsigned long, TStackPage *)>
        1f85cc:	e5950014 	ldr	r0, [r5, #20]
        1f85d0:	e0801606 	add	r1, r0, r6, lsl #12
        1f85d4:	e5b50024 	ldr	r0, [r5, #36]!
        1f85d8:	e5942000 	ldr	r2, [r4]
        1f85dc:	eb6768d5 	bl	1bd2938 <$Forget__15TUDomainManagerSFUlN21>
        1f85e0:	e1a01004 	mov	r1, r4
        1f85e4:	e1a00007 	mov	r0, r7
        1f85e8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1f85ec:	ea6443ab 	b	1b094a0 <TStackManager::$UpdatePageState(TStackPage *)>
    */
}

/**
 * Symbol: TStackManager::SetSubPageInfo(TStackInfo *, unsigned long, TStackPage *, unsigned long)
 * Address: 001f85f0
 */
TStackManager::SetSubPageInfo(TStackInfo *, unsigned long, TStackPage *, unsigned long) {
    /*
        1f85f0:	e92d4000 	stmdb	sp!, {lr}
        1f85f4:	e59dc004 	ldr	ip, [sp, #4]	; fField4
        1f85f8:	e083e10c 	add	lr, r3, ip, lsl #2
        1f85fc:	e5ae1010 	str	r1, [lr, #16]!
        1f8600:	e083108c 	add	r1, r3, ip, lsl #1
        1f8604:	e5c12021 	strb	r2, [r1, #33]
        1f8608:	e1a02422 	mov	r2, r2, lsr #8
        1f860c:	e5c12020 	strb	r2, [r1, #32]
        1f8610:	e3a01000 	mov	r1, #0	; 0x0
        1f8614:	e083200c 	add	r2, r3, ip
        1f8618:	e5c21028 	strb	r1, [r2, #40]
        1f861c:	e5c2102c 	strb	r1, [r2, #44]
        1f8620:	e1a01003 	mov	r1, r3
        1f8624:	e8bd4000 	ldmia	sp!, {lr}
        1f8628:	ea64439c 	b	1b094a0 <TStackManager::$UpdatePageState(TStackPage *)>
    */
}

/**
 * Symbol: TStackManager::PageMatchFound(TStackInfo *, unsigned long, unsigned long, TStackPage *)
 * Address: 001f862c
 */
TStackManager::PageMatchFound(TStackInfo *, unsigned long, unsigned long, TStackPage *) {
    /*
        1f862c:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        1f8630:	e1a04002 	mov	r4, r2
        1f8634:	e3a0c000 	mov	ip, #0	; 0x0
        1f8638:	e3a02000 	mov	r2, #0	; 0x0
        1f863c:	e1a04804 	mov	r4, r4, lsl #16
        1f8640:	e1a04824 	mov	r4, r4, lsr #16
        1f8644:	e1a05424 	mov	r5, r4, lsr #8
        1f8648:	e59de010 	ldr	lr, [sp, #16]
        1f864c:	e3130001 	tst	r3, #1	; 0x1
        1f8650:	0a000007 	beq	1f8674 <TStackManager::PageMatchFound(TStackInfo *, unsigned long, unsigned long, TStackPage *)+0x48>
        1f8654:	e08e610c 	add	r6, lr, ip, lsl #2
        1f8658:	e5a61010 	str	r1, [r6, #16]!
        1f865c:	e08e608c 	add	r6, lr, ip, lsl #1
        1f8660:	e5c64021 	strb	r4, [r6, #33]
        1f8664:	e5c65020 	strb	r5, [r6, #32]
        1f8668:	e08e600c 	add	r6, lr, ip
        1f866c:	e5c62028 	strb	r2, [r6, #40]
        1f8670:	e5c6202c 	strb	r2, [r6, #44]
        1f8674:	e1a030a3 	mov	r3, r3, lsr #1
        1f8678:	e28cc001 	add	ip, ip, #1	; 0x1
        1f867c:	e35c0004 	cmp	ip, #4	; 0x4
        1f8680:	3afffff1 	bcc	1f864c <TStackManager::PageMatchFound(TStackInfo *, unsigned long, unsigned long, TStackPage *)+0x20>
        1f8684:	e5911020 	ldr	r1, [r1, #32]
        1f8688:	e3110001 	tst	r1, #1	; 0x1
        1f868c:	03a01001 	moveq	r1, #1	; 0x1
        1f8690:	13a01000 	movne	r1, #0	; 0x0
        1f8694:	e59e2030 	ldr	r2, [lr, #48]
        1f8698:	e3c22302 	bic	r2, r2, #134217728	; 0x8000000
        1f869c:	e2011001 	and	r1, r1, #1	; 0x1
        1f86a0:	e1821d81 	orr	r1, r2, r1, lsl #27
        1f86a4:	e58e1030 	str	r1, [lr, #48]
        1f86a8:	e1a0100e 	mov	r1, lr
        1f86ac:	e8bd4070 	ldmia	sp!, {r4, r5, r6, lr}
        1f86b0:	ea64437a 	b	1b094a0 <TStackManager::$UpdatePageState(TStackPage *)>
    */
}

/**
 * Symbol: TStackManager::GetMatchingPage(TStackInfo *, unsigned long, unsigned long)
 * Address: 001f86b4
 */
TStackManager::GetMatchingPage(TStackInfo *, unsigned long, unsigned long) {
    /*
        1f86b4:	e1a0c00d 	mov	ip, sp
        1f86b8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1f86bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f86c0:	e1a04000 	mov	r4, r0
        1f86c4:	e1a06001 	mov	r6, r1
        1f86c8:	e1a07002 	mov	r7, r2
        1f86cc:	e1a05003 	mov	r5, r3
        1f86d0:	e3a08000 	mov	r8, #0	; 0x0
        1f86d4:	e59000ac 	ldr	r0, [r0, #172]
        1f86d8:	e2809001 	add	r9, r0, #1	; 0x1
        1f86dc:	e2840044 	add	r0, r4, #68	; 0x44
        1f86e0:	e1a0a000 	mov	sl, r0
        1f86e4:	eb677d41 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        1f86e8:	e1b01000 	movs	r1, r0
        1f86ec:	0a000023 	beq	1f8780 <TStackManager::GetMatchingPage(TStackInfo *, unsigned long, unsigned long)+0xcc>
        1f86f0:	e3a0200f 	mov	r2, #15	; 0xf
        1f86f4:	e5910030 	ldr	r0, [r1, #48]
        1f86f8:	e1320e20 	teq	r2, r0, lsr #28
        1f86fc:	0a000007 	beq	1f8720 <TStackManager::GetMatchingPage(TStackInfo *, unsigned long, unsigned long)+0x6c>
        1f8700:	e5962020 	ldr	r2, [r6, #32]
        1f8704:	e3120001 	tst	r2, #1	; 0x1
        1f8708:	03a02001 	moveq	r2, #1	; 0x1
        1f870c:	13a02000 	movne	r2, #0	; 0x0
        1f8710:	e20220ff 	and	r2, r2, #255	; 0xff
        1f8714:	e1a03200 	mov	r3, r0, lsl #4
        1f8718:	e0322fa3 	eors	r2, r2, r3, lsr #31
        1f871c:	1a000009 	bne	1f8748 <TStackManager::GetMatchingPage(TStackInfo *, unsigned long, unsigned long)+0x94>
        1f8720:	e0050e20 	and	r0, r5, r0, lsr #28
        1f8724:	e1300005 	teq	r0, r5
        1f8728:	1a000006 	bne	1f8748 <TStackManager::GetMatchingPage(TStackInfo *, unsigned long, unsigned long)+0x94>
        1f872c:	e0840100 	add	r0, r4, r0, lsl #2
        1f8730:	e590006c 	ldr	r0, [r0, #108]
        1f8734:	e1500009 	cmp	r0, r9
        1f8738:	2a000002 	bcs	1f8748 <TStackManager::GetMatchingPage(TStackInfo *, unsigned long, unsigned long)+0x94>
        1f873c:	e1b09000 	movs	r9, r0
        1f8740:	e1a08001 	mov	r8, r1
        1f8744:	0a000003 	beq	1f8758 <TStackManager::GetMatchingPage(TStackInfo *, unsigned long, unsigned long)+0xa4>
        1f8748:	e1a0000a 	mov	r0, sl
        1f874c:	eb676ca7 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        1f8750:	e1b01000 	movs	r1, r0
        1f8754:	1affffe5 	bne	1f86f0 <TStackManager::GetMatchingPage(TStackInfo *, unsigned long, unsigned long)+0x3c>
        1f8758:	e3380000 	teq	r8, #0	; 0x0
        1f875c:	0a000007 	beq	1f8780 <TStackManager::GetMatchingPage(TStackInfo *, unsigned long, unsigned long)+0xcc>
        1f8760:	e1a03008 	mov	r3, r8
        1f8764:	e92d0008 	stmdb	sp!, {r3}
        1f8768:	e1a03005 	mov	r3, r5
        1f876c:	e1a02007 	mov	r2, r7
        1f8770:	e1a01006 	mov	r1, r6
        1f8774:	e1a00004 	mov	r0, r4
        1f8778:	eb6478fe 	bl	1b16b78 <TStackManager::$PageMatchFound(TStackInfo *, unsigned long, unsigned long, TStackPage *)>
        1f877c:	e28dd004 	add	sp, sp, #4	; 0x4
        1f8780:	e1a00008 	mov	r0, r8
        1f8784:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::AllocNewPage(unsigned long)
 * Address: 001f8788
 */
TStackManager::AllocNewPage(unsigned long) {
    /*
        1f8788:	e1a0c00d 	mov	ip, sp
        1f878c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1f8790:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8794:	e1a05000 	mov	r5, r0
        1f8798:	e1a04001 	mov	r4, r1
        1f879c:	e3a00000 	mov	r0, #0	; 0x0
        1f87a0:	eb63dc05 	bl	1aef7bc <TStackPage::$__ct(void)>
        1f87a4:	e1b06000 	movs	r6, r0
        1f87a8:	e3a07000 	mov	r7, #0	; 0x0
        1f87ac:	0a000009 	beq	1f87d8 <TStackManager::AllocNewPage(unsigned long)+0x50>
        1f87b0:	e1a02004 	mov	r2, r4
        1f87b4:	e1a01005 	mov	r1, r5
        1f87b8:	e1a00006 	mov	r0, r6
        1f87bc:	eb640d7e 	bl	1afbdbc <TStackPage::$Init(TUDomainManager *, unsigned long)>
        1f87c0:	e3300000 	teq	r0, #0	; 0x0
        1f87c4:	01a00006 	moveq	r0, r6
        1f87c8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1f87cc:	e1a00006 	mov	r0, r6
        1f87d0:	e3a01001 	mov	r1, #1	; 0x1
        1f87d4:	eb63e021 	bl	1af0860 <TStackPage::$__dt(void)>
        1f87d8:	e1a00007 	mov	r0, r7
        1f87dc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::CountMatches(TStackInfo *, unsigned long, TStackPage *, unsigned long *, unsigned char *, unsigned char *)
 * Address: 001f87e0
 */
TStackManager::CountMatches(TStackInfo *, unsigned long, TStackPage *, unsigned long *, unsigned char *, unsigned char *) {
    /*
        1f87e0:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        1f87e4:	e3a00000 	mov	r0, #0	; 0x0
        1f87e8:	e3a0c000 	mov	ip, #0	; 0x0
        1f87ec:	e28d7018 	add	r7, sp, #24	; 0x18
        1f87f0:	e8970090 	ldmia	r7, {r4, r7}
        1f87f4:	e59d5020 	ldr	r5, [sp, #32]
        1f87f8:	e584c000 	str	ip, [r4]
        1f87fc:	e5c7c000 	strb	ip, [r7]
        1f8800:	e5c5c000 	strb	ip, [r5]
        1f8804:	e3a0e001 	mov	lr, #1	; 0x1
        1f8808:	e083610c 	add	r6, r3, ip, lsl #2
        1f880c:	e5966010 	ldr	r6, [r6, #16]
        1f8810:	e1360001 	teq	r6, r1
        1f8814:	0083608c 	addeq	r6, r3, ip, lsl #1
        1f8818:	05966020 	ldreq	r6, [r6, #32]
        1f881c:	01a06826 	moveq	r6, r6, lsr #16
        1f8820:	01360002 	teqeq	r6, r2
        1f8824:	1a00000a 	bne	1f8854 <TStackManager::CountMatches(TStackInfo *, unsigned long, TStackPage *, unsigned long *, unsigned char *, unsigned char *)+0x74>
        1f8828:	e5948000 	ldr	r8, [r4]
        1f882c:	e1886c1e 	orr	r6, r8, lr, lsl ip
        1f8830:	e2800001 	add	r0, r0, #1	; 0x1
        1f8834:	e5846000 	str	r6, [r4]
        1f8838:	e083600c 	add	r6, r3, ip
        1f883c:	e5d68028 	ldrb	r8, [r6, #40]
        1f8840:	e3380000 	teq	r8, #0	; 0x0
        1f8844:	15c7e000 	strneb	lr, [r7]
        1f8848:	15d6602c 	ldrneb	r6, [r6, #44]
        1f884c:	13360000 	teqne	r6, #0	; 0x0
        1f8850:	15c5e000 	strneb	lr, [r5]
        1f8854:	e28cc001 	add	ip, ip, #1	; 0x1
        1f8858:	e35c0004 	cmp	ip, #4	; 0x4
        1f885c:	3affffe9 	bcc	1f8808 <TStackManager::CountMatches(TStackInfo *, unsigned long, TStackPage *, unsigned long *, unsigned char *, unsigned char *)+0x28>
        1f8860:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: TStackManager::SetRestrictedPage(unsigned long, TStackPage *)
 * Address: 001f8864
 */
TStackManager::SetRestrictedPage(unsigned long, TStackPage *) {
    /*
        1f8864:	e0800101 	add	r0, r0, r1, lsl #2
        1f8868:	e5a020b0 	str	r2, [r0, #176]!	; fField176
        1f886c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStackManager::CheckRestrictedPage(TStackPage *)
 * Address: 001f8870
 */
TStackManager::CheckRestrictedPage(TStackPage *) {
    /*
        1f8870:	e3a02001 	mov	r2, #1	; 0x1
        1f8874:	e59030b0 	ldr	r3, [r0, #176]	; fField176
        1f8878:	e1330001 	teq	r3, r1
        1f887c:	159000b4 	ldrne	r0, [r0, #180]	; fField180
        1f8880:	11300001 	teqne	r0, r1
        1f8884:	01a00002 	moveq	r0, r2
        1f8888:	13a00000 	movne	r0, #0	; 0x0
        1f888c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStackManager::GetStackInfo(unsigned long)
 * Address: 001f8890
 */
TStackManager::GetStackInfo(unsigned long) {
    /*
        1f8890:	e1a0c00d 	mov	ip, sp
        1f8894:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f8898:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f889c:	e1a04001 	mov	r4, r1
        1f88a0:	e3a01000 	mov	r1, #0	; 0x0
        1f88a4:	e28000d0 	add	r0, r0, #208	; 0xd0
        1f88a8:	e1a06000 	mov	r6, r0
        1f88ac:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        1f88b0:	eb677cce 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        1f88b4:	e1b05000 	movs	r5, r0
        1f88b8:	0a00000a 	beq	1f88e8 <TStackManager::GetStackInfo(unsigned long)+0x58>
        1f88bc:	e1a0200d 	mov	r2, sp
        1f88c0:	e1a01004 	mov	r1, r4
        1f88c4:	e1a00005 	mov	r0, r5
        1f88c8:	eb64091a 	bl	1afad38 <THeapDomain::$GetStackInfo(unsigned long, TStackInfo **)>
        1f88cc:	e3300000 	teq	r0, #0	; 0x0
        1f88d0:	0a000004 	beq	1f88e8 <TStackManager::GetStackInfo(unsigned long)+0x58>
        1f88d4:	e1a00006 	mov	r0, r6
        1f88d8:	e1a01005 	mov	r1, r5
        1f88dc:	eb676c43 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        1f88e0:	e1b05000 	movs	r5, r0
        1f88e4:	1afffff4 	bne	1f88bc <TStackManager::GetStackInfo(unsigned long)+0x2c>
        1f88e8:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1f88ec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::GetMatchingDomain(unsigned long)
 * Address: 001f8b3c
 */
TStackManager::GetMatchingDomain(unsigned long) {
    /*
        1f8b3c:	e1a0c00d 	mov	ip, sp
        1f8b40:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f8b44:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8b48:	e1a04001 	mov	r4, r1
        1f8b4c:	e28000d0 	add	r0, r0, #208	; 0xd0
        1f8b50:	e1a05000 	mov	r5, r0
        1f8b54:	eb677c25 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        1f8b58:	e1b01000 	movs	r1, r0
        1f8b5c:	0a000007 	beq	1f8b80 <TStackManager::GetMatchingDomain(unsigned long)+0x44>
        1f8b60:	e5910000 	ldr	r0, [r1]
        1f8b64:	e1300004 	teq	r0, r4
        1f8b68:	01a00001 	moveq	r0, r1
        1f8b6c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1f8b70:	e1a00005 	mov	r0, r5
        1f8b74:	eb676b9d 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        1f8b78:	e1b01000 	movs	r1, r0
        1f8b7c:	1afffff7 	bne	1f8b60 <TStackManager::GetMatchingDomain(unsigned long)+0x24>
        1f8b80:	e3a00000 	mov	r0, #0	; 0x0
        1f8b84:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::GetDomainForAddress(unsigned long)
 * Address: 001f8e48
 */
TStackManager::GetDomainForAddress(unsigned long) {
    /*
        1f8e48:	e1a0c00d 	mov	ip, sp
        1f8e4c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1f8e50:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8e54:	e1a04001 	mov	r4, r1
        1f8e58:	e3a01000 	mov	r1, #0	; 0x0
        1f8e5c:	e28000d0 	add	r0, r0, #208	; 0xd0
        1f8e60:	e1a06000 	mov	r6, r0
        1f8e64:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        1f8e68:	eb677b60 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        1f8e6c:	e1b05000 	movs	r5, r0
        1f8e70:	0a00000b 	beq	1f8ea4 <TStackManager::GetDomainForAddress(unsigned long)+0x5c>
        1f8e74:	e1a0200d 	mov	r2, sp
        1f8e78:	e1a01004 	mov	r1, r4
        1f8e7c:	e1a00005 	mov	r0, r5
        1f8e80:	eb6407ac 	bl	1afad38 <THeapDomain::$GetStackInfo(unsigned long, TStackInfo **)>
        1f8e84:	e3300000 	teq	r0, #0	; 0x0
        1f8e88:	01a00005 	moveq	r0, r5
        1f8e8c:	0a000005 	beq	1f8ea8 <TStackManager::GetDomainForAddress(unsigned long)+0x60>
        1f8e90:	e1a00006 	mov	r0, r6
        1f8e94:	e1a01005 	mov	r1, r5
        1f8e98:	eb676ad4 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        1f8e9c:	e1b05000 	movs	r5, r0
        1f8ea0:	1afffff3 	bne	1f8e74 <TStackManager::GetDomainForAddress(unsigned long)+0x2c>
        1f8ea4:	e3a00000 	mov	r0, #0	; 0x0
        1f8ea8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)
 * Address: 001f8eac
 */
TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **) {
    /*
        1f8eac:	e1a0c00d 	mov	ip, sp
        1f8eb0:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1f8eb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f8eb8:	e1a04001 	mov	r4, r1
        1f8ebc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1f8ec0:	e5911000 	ldr	r1, [r1]
        1f8ec4:	e51b0034 	ldr	r0, [fp, -#52]
        1f8ec8:	eb640382 	bl	1af9cd8 <TStackManager::$GetMatchingDomain(unsigned long)>
        1f8ecc:	e1b05000 	movs	r5, r0
        1f8ed0:	03a07022 	moveq	r7, #34	; 0x22
        1f8ed4:	02477b0a 	subeq	r7, r7, #10240	; 0x2800
        1f8ed8:	0a000089 	beq	1f9104 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x258>
        1f8edc:	e3a07b21 	mov	r7, #33792	; 0x8400
        1f8ee0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1f8ee4:	e59f8090 	ldr	r8, [pc, #90]	; 1f8f7c <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0xd0>
        1f8ee8:	e3300000 	teq	r0, #0	; 0x0
        1f8eec:	0a000024 	beq	1f8f84 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0xd8>
        1f8ef0:	e2401b03 	sub	r1, r0, #3072	; 0xc00
        1f8ef4:	e1a06001 	mov	r6, r1
        1f8ef8:	e51b0034 	ldr	r0, [fp, -#52]
        1f8efc:	eb640372 	bl	1af9ccc <TStackManager::$GetDomainForAddress(unsigned long)>
        1f8f00:	e1300005 	teq	r0, r5
        1f8f04:	159f7074 	ldrne	r7, [pc, #74]	; 1f8f80 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0xd4>
        1f8f08:	1a00007d 	bne	1f9104 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x258>
        1f8f0c:	e5950010 	ldr	r0, [r5, #16]
        1f8f10:	e0461000 	sub	r1, r6, r0
        1f8f14:	e1a09001 	mov	r9, r1
        1f8f18:	e3a00b21 	mov	r0, #33792	; 0x8400
        1f8f1c:	eb66e689 	bl	1bb2948 <$__rt_udiv>
        1f8f20:	e0800280 	add	r0, r0, r0, lsl #5
        1f8f24:	e0490500 	sub	r0, r9, r0, lsl #10
        1f8f28:	e5941008 	ldr	r1, [r4, #8]
        1f8f2c:	e0810000 	add	r0, r1, r0
        1f8f30:	e2800b03 	add	r0, r0, #3072	; 0xc00
        1f8f34:	e5840008 	str	r0, [r4, #8]
        1f8f38:	e3500b21 	cmp	r0, #33792	; 0x8400
        1f8f3c:	35847008 	strcc	r7, [r4, #8]
        1f8f40:	e5940008 	ldr	r0, [r4, #8]
        1f8f44:	e2401001 	sub	r1, r0, #1	; 0x1
        1f8f48:	e3a00b21 	mov	r0, #33792	; 0x8400
        1f8f4c:	eb66e67d 	bl	1bb2948 <$__rt_udiv>
        1f8f50:	e2807001 	add	r7, r0, #1	; 0x1
        1f8f54:	e5950010 	ldr	r0, [r5, #16]
        1f8f58:	e0461000 	sub	r1, r6, r0
        1f8f5c:	e3a00b21 	mov	r0, #33792	; 0x8400
        1f8f60:	eb66e678 	bl	1bb2948 <$__rt_udiv>
        1f8f64:	e1a01000 	mov	r1, r0
        1f8f68:	e0802007 	add	r2, r0, r7
        1f8f6c:	e5950018 	ldr	r0, [r5, #24]	; fField24
        1f8f70:	e1500002 	cmp	r0, r2
        1f8f74:	3a000027 	bcc	1f9018 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x16c>
        1f8f78:	ea00000d 	b	1f8fb4 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x108>
        1f8f7c:	ffffd827 	swinv	0x00ffd827
        1f8f80:	ffffd823 	swinv	0x00ffd823
        1f8f84:	e5940008 	ldr	r0, [r4, #8]
        1f8f88:	e2800b03 	add	r0, r0, #3072	; 0xc00
        1f8f8c:	e5840008 	str	r0, [r4, #8]
        1f8f90:	e3500b21 	cmp	r0, #33792	; 0x8400
        1f8f94:	35847008 	strcc	r7, [r4, #8]
        1f8f98:	e5940008 	ldr	r0, [r4, #8]
        1f8f9c:	e2401001 	sub	r1, r0, #1	; 0x1
        1f8fa0:	e3a00b21 	mov	r0, #33792	; 0x8400
        1f8fa4:	eb66e667 	bl	1bb2948 <$__rt_udiv>
        1f8fa8:	e2807001 	add	r7, r0, #1	; 0x1
        1f8fac:	e3a01000 	mov	r1, #0	; 0x0
        1f8fb0:	e5952018 	ldr	r2, [r5, #24]	; fField24
        1f8fb4:	e3e06000 	mvn	r6, #0	; 0x0
        1f8fb8:	e3a00000 	mov	r0, #0	; 0x0
        1f8fbc:	e1510002 	cmp	r1, r2
        1f8fc0:	3595301c 	ldrcc	r3, [r5, #28]	; fField28
        1f8fc4:	3a000002 	bcc	1f8fd4 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x128>
        1f8fc8:	ea000010 	b	1f9010 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x164>
        1f8fcc:	e3760001 	cmn	r6, #1	; 0x1
        1f8fd0:	1a000004 	bne	1f8fe8 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x13c>
        1f8fd4:	e793c101 	ldr	ip, [r3, r1, lsl #2]	; fField2
        1f8fd8:	e33c0000 	teq	ip, #0	; 0x0
        1f8fdc:	01a06001 	moveq	r6, r1
        1f8fe0:	03a00001 	moveq	r0, #1	; 0x1
        1f8fe4:	ea000004 	b	1f8ffc <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x150>
        1f8fe8:	e793c101 	ldr	ip, [r3, r1, lsl #2]	; fField2
        1f8fec:	e33c0000 	teq	ip, #0	; 0x0
        1f8ff0:	13e06000 	mvnne	r6, #0	; 0x0
        1f8ff4:	13a00000 	movne	r0, #0	; 0x0
        1f8ff8:	02800001 	addeq	r0, r0, #1	; 0x1
        1f8ffc:	e1300007 	teq	r0, r7
        1f9000:	0a000002 	beq	1f9010 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x164>
        1f9004:	e2811001 	add	r1, r1, #1	; 0x1
        1f9008:	e1510002 	cmp	r1, r2
        1f900c:	3affffee 	bcc	1f8fcc <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x120>
        1f9010:	e1300007 	teq	r0, r7
        1f9014:	0a000001 	beq	1f9020 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x174>
        1f9018:	e1a07008 	mov	r7, r8
        1f901c:	ea000038 	b	1f9104 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x258>
        1f9020:	e086a007 	add	sl, r6, r7
        1f9024:	e08a128a 	add	r1, sl, sl, lsl #5
        1f9028:	e5950010 	ldr	r0, [r5, #16]
        1f902c:	e0809501 	add	r9, r0, r1, lsl #10
        1f9030:	e0870287 	add	r0, r7, r7, lsl #5
        1f9034:	e0490500 	sub	r0, r9, r0, lsl #10
        1f9038:	e2802b03 	add	r2, r0, #3072	; 0xc00
        1f903c:	e3a00000 	mov	r0, #0	; 0x0
        1f9040:	e58d2000 	str	r2, [sp]
        1f9044:	eb63d9db 	bl	1aef7b8 <TStackInfo::$__ct(void)>
        1f9048:	e1b08000 	movs	r8, r0
        1f904c:	03a070e9 	moveq	r7, #233	; 0xe9
        1f9050:	02477b0a 	subeq	r7, r7, #10240	; 0x2800
        1f9054:	0a00002a 	beq	1f9104 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x258>
        1f9058:	e1b00006 	movs	r0, r6
        1f905c:	e5951010 	ldr	r1, [r5, #16]
        1f9060:	42800003 	addmi	r0, r0, #3	; 0x3
        1f9064:	e1a00140 	mov	r0, r0, asr #2
        1f9068:	e0810600 	add	r0, r1, r0, lsl #12
        1f906c:	e0800786 	add	r0, r0, r6, lsl #15
        1f9070:	e1a02000 	mov	r2, r0
        1f9074:	e5953000 	ldr	r3, [r5]
        1f9078:	e594100c 	ldr	r1, [r4, #12]
        1f907c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1f9080:	e0490000 	sub	r0, r9, r0
        1f9084:	e1a00620 	mov	r0, r0, lsr #12
        1f9088:	e2803001 	add	r3, r0, #1	; 0x1
        1f908c:	e1a01009 	mov	r1, r9
        1f9090:	e1a00008 	mov	r0, r8
        1f9094:	e59d200c 	ldr	r2, [sp, #12]
        1f9098:	eb640b46 	bl	1afbdb8 <TStackInfo::$Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)>
        1f909c:	e28dd00c 	add	sp, sp, #12	; 0xc
        1f90a0:	e1b07000 	movs	r7, r0
        1f90a4:	0a000003 	beq	1f90b8 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x20c>
        1f90a8:	e1a00008 	mov	r0, r8
        1f90ac:	e3a01001 	mov	r1, #1	; 0x1
        1f90b0:	eb63dde9 	bl	1af085c <TStackInfo::$__dt(void)>
        1f90b4:	ea000012 	b	1f9104 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x258>
        1f90b8:	e51b0034 	ldr	r0, [fp, -#52]
        1f90bc:	e2800004 	add	r0, r0, #4	; 0x4
        1f90c0:	e3a01000 	mov	r1, #0	; 0x0
        1f90c4:	e58d0004 	str	r0, [sp, #4]	; fField4
        1f90c8:	eb6755a1 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f90cc:	e15a0006 	cmp	sl, r6
        1f90d0:	9a000004 	bls	1f90e8 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x23c>
        1f90d4:	e595001c 	ldr	r0, [r5, #28]	; fField28
        1f90d8:	e7808106 	str	r8, [r0, r6, lsl #2]	; fField2
        1f90dc:	e2866001 	add	r6, r6, #1	; 0x1
        1f90e0:	e15a0006 	cmp	sl, r6
        1f90e4:	8afffffa 	bhi	1f90d4 <TStackManager::FMNewStack(FM_NewStack_Parms *, TStackInfo **)+0x228>
        1f90e8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1f90ec:	eb6782e9 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f90f0:	e51b202c 	ldr	r2, [fp, -#44]
        1f90f4:	e5828000 	str	r8, [r2]
        1f90f8:	e5849010 	str	r9, [r4, #16]
        1f90fc:	e59d2000 	ldr	r2, [sp]
        1f9100:	e5a42014 	str	r2, [r4, #20]!
        1f9104:	e1a00007 	mov	r0, r7
        1f9108:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TStackManager::FMFree(FM_Free_Parms *)
 * Address: 001f910c
 */
TStackManager::FMFree(FM_Free_Parms *) {
    /*
        1f910c:	e1a0c00d 	mov	ip, sp
        1f9110:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1f9114:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9118:	e1a04000 	mov	r4, r0
        1f911c:	e1a05001 	mov	r5, r1
        1f9120:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f9124:	e28000e4 	add	r0, r0, #228	; 0xe4
        1f9128:	e1a08000 	mov	r8, r0
        1f912c:	e3a01000 	mov	r1, #0	; 0x0
        1f9130:	eb675587 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f9134:	e1a00004 	mov	r0, r4
        1f9138:	e5951000 	ldr	r1, [r5]
        1f913c:	eb6402e2 	bl	1af9ccc <TStackManager::$GetDomainForAddress(unsigned long)>
        1f9140:	e1b07000 	movs	r7, r0
        1f9144:	03a06022 	moveq	r6, #34	; 0x22
        1f9148:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
        1f914c:	0a000030 	beq	1f9214 <TStackManager::FMFree(FM_Free_Parms *)+0x108>
        1f9150:	e1a0200d 	mov	r2, sp
        1f9154:	e1a00007 	mov	r0, r7
        1f9158:	e5951000 	ldr	r1, [r5]
        1f915c:	eb6406f5 	bl	1afad38 <THeapDomain::$GetStackInfo(unsigned long, TStackInfo **)>
        1f9160:	e1b06000 	movs	r6, r0
        1f9164:	1a00002a 	bne	1f9214 <TStackManager::FMFree(FM_Free_Parms *)+0x108>
        1f9168:	e59d0000 	ldr	r0, [sp]
        1f916c:	e3300000 	teq	r0, #0	; 0x0
        1f9170:	03a06026 	moveq	r6, #38	; 0x26
        1f9174:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
        1f9178:	0a000025 	beq	1f9214 <TStackManager::FMFree(FM_Free_Parms *)+0x108>
        1f917c:	e5900000 	ldr	r0, [r0]
        1f9180:	e2401001 	sub	r1, r0, #1	; 0x1
        1f9184:	e5970010 	ldr	r0, [r7, #16]
        1f9188:	e0411000 	sub	r1, r1, r0
        1f918c:	e3a00b21 	mov	r0, #33792	; 0x8400
        1f9190:	eb66e5ec 	bl	1bb2948 <$__rt_udiv>
        1f9194:	e1a05000 	mov	r5, r0
        1f9198:	e2840004 	add	r0, r4, #4	; 0x4
        1f919c:	e1a09000 	mov	r9, r0
        1f91a0:	e3a01000 	mov	r1, #0	; 0x0
        1f91a4:	eb67556a 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1f91a8:	e3a03001 	mov	r3, #1	; 0x1
        1f91ac:	e3a02000 	mov	r2, #0	; 0x0
        1f91b0:	e92d000c 	stmdb	sp!, {r2, r3}
        1f91b4:	e59d1008 	ldr	r1, [sp, #8]
        1f91b8:	e5910000 	ldr	r0, [r1]
        1f91bc:	e2402001 	sub	r2, r0, #1	; 0x1
        1f91c0:	e1a00004 	mov	r0, r4
        1f91c4:	eb6402b7 	bl	1af9ca8 <TStackManager::$FreeSubPagesBelow(TStackInfo *, unsigned long, unsigned char, unsigned long *, unsigned char)>
        1f91c8:	e28dd008 	add	sp, sp, #8	; 0x8
        1f91cc:	e3550000 	cmp	r5, #0	; 0x0
        1f91d0:	3a000009 	bcc	1f91fc <TStackManager::FMFree(FM_Free_Parms *)+0xf0>
        1f91d4:	e3a01000 	mov	r1, #0	; 0x0
        1f91d8:	e597001c 	ldr	r0, [r7, #28]	; fField28
        1f91dc:	e7903105 	ldr	r3, [r0, r5, lsl #2]	; fField2
        1f91e0:	e59d2000 	ldr	r2, [sp]
        1f91e4:	e1330002 	teq	r3, r2
        1f91e8:	1a000003 	bne	1f91fc <TStackManager::FMFree(FM_Free_Parms *)+0xf0>
        1f91ec:	e7801105 	str	r1, [r0, r5, lsl #2]	; fField2
        1f91f0:	e2455001 	sub	r5, r5, #1	; 0x1
        1f91f4:	e3550000 	cmp	r5, #0	; 0x0
        1f91f8:	2afffff6 	bcs	1f91d8 <TStackManager::FMFree(FM_Free_Parms *)+0xcc>
        1f91fc:	e1a00009 	mov	r0, r9
        1f9200:	eb6782a4 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f9204:	e59d0000 	ldr	r0, [sp]
        1f9208:	e3300000 	teq	r0, #0	; 0x0
        1f920c:	13a01001 	movne	r1, #1	; 0x1
        1f9210:	1b63dd91 	blne	1af085c <TStackInfo::$__dt(void)>
        1f9214:	e1a00008 	mov	r0, r8
        1f9218:	eb67829e 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1f921c:	e1a00006 	mov	r0, r6
        1f9220:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

