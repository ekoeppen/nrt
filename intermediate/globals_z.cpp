#include "Newton.h"

/**
 * Symbol: ZeroPhysSubPage
 * Address: 00018d94
 */
void globals::ZeroPhysSubPage() {
    /*
         18d94:	e92d00f0 	stmdb	sp!, {r4, r5, r6, r7}
         18d98:	ee101f10 	mrc	15, 0, r1, cr0, cr0, {0}
         18d9c:	e201300f 	and	r3, r1, #15	; 0xf
         18da0:	e3c1100f 	bic	r1, r1, #15	; 0xf
         18da4:	e2211441 	eor	r1, r1, #1090519040	; 0x41000000
         18da8:	e2211701 	eor	r1, r1, #262144	; 0x40000
         18dac:	e2311c71 	eors	r1, r1, #28928	; 0x7100
         18db0:	13530002 	cmpne	r3, #2	; 0x2
         18db4:	e3a02b01 	mov	r2, #1024	; 0x400
         18db8:	e3a04000 	mov	r4, #0	; 0x0
         18dbc:	e3a05000 	mov	r5, #0	; 0x0
         18dc0:	e3a06000 	mov	r6, #0	; 0x0
         18dc4:	e3a07000 	mov	r7, #0	; 0x0
         18dc8:	e3a01c11 	mov	r1, #4352	; 0x1100
         18dcc:	e38110b0 	orr	r1, r1, #176	; 0xb0
         18dd0:	e3813005 	orr	r3, r1, #5	; 0x5
         18dd4:	a3833008 	orrge	r3, r3, #8	; 0x8
         18dd8:	ee011f11 	mcr	15, 0, r1, cr1, cr1, {0}
         18ddc:	e8a000f0 	stmia	r0!, {r4, r5, r6, r7}
         18de0:	e2522010 	subs	r2, r2, #16	; 0x10
         18de4:	1afffffc 	bne	18ddc <ZeroPhysSubPage+0x48>
         18de8:	ee013f11 	mcr	15, 0, r3, cr1, cr1, {0}
         18dec:	e8bd00f0 	ldmia	sp!, {r4, r5, r6, r7}
         18df0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ZapSend
 * Address: 0003d818
 */
void globals::ZapSend() {
    /*
         3d818:	e1a0c00d 	mov	ip, sp
         3d81c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         3d820:	e24cb004 	sub	fp, ip, #4	; 0x4
         3d824:	e1a04001 	mov	r4, r1
         3d828:	e1a05002 	mov	r5, r2
         3d82c:	e24dd040 	sub	sp, sp, #64	; 0x40
         3d830:	e1a0000d 	mov	r0, sp
         3d834:	eb6a333e 	bl	1aca534 <TBeamer::$__ct(RefVar const &)>
         3d838:	e1a0000d 	mov	r0, sp
         3d83c:	e3a01000 	mov	r1, #0	; 0x0
         3d840:	eb6a2b01 	bl	1ac844c <TBeamer::$Open(unsigned char)>
         3d844:	e1b06000 	movs	r6, r0
         3d848:	e3a07002 	mov	r7, #2	; 0x2
         3d84c:	0a00001e 	beq	3d8cc <ZapSend+0xb4>
         3d850:	e24dd00c 	sub	sp, sp, #12	; 0xc
         3d854:	e3a00002 	mov	r0, #2	; 0x2
         3d858:	eb6e123b 	bl	1bc214c <$AllocateRefHandle(long)>
         3d85c:	e58d0008 	str	r0, [sp, #8]
         3d860:	e1a00007 	mov	r0, r7
         3d864:	eb6e1238 	bl	1bc214c <$AllocateRefHandle(long)>
         3d868:	e58d0000 	str	r0, [sp]
         3d86c:	e1a0300d 	mov	r3, sp
         3d870:	e1a02005 	mov	r2, r5
         3d874:	e59f111c 	ldr	r1, [pc, #11c]	; 3d998 <ZapSend+0x180>
         3d878:	e1a00004 	mov	r0, r4
         3d87c:	eb6f09f1 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3d880:	e59d1008 	ldr	r1, [sp, #8]
         3d884:	e5810000 	str	r0, [r1]
         3d888:	e59d0000 	ldr	r0, [sp]
         3d88c:	eb6e164a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3d890:	e1a00106 	mov	r0, r6, lsl #2
         3d894:	eb6e122c 	bl	1bc214c <$AllocateRefHandle(long)>
         3d898:	e58d0004 	str	r0, [sp, #4]
         3d89c:	e28d3004 	add	r3, sp, #4	; 0x4
         3d8a0:	e28d2008 	add	r2, sp, #8	; 0x8
         3d8a4:	e59f10f0 	ldr	r1, [pc, #f0]	; 3d99c <ZapSend+0x184>
         3d8a8:	e1a00004 	mov	r0, r4
         3d8ac:	eb6f09e5 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3d8b0:	e59d0004 	ldr	r0, [sp, #4]
         3d8b4:	eb6e1640 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3d8b8:	e59d0008 	ldr	r0, [sp, #8]
         3d8bc:	eb6e163e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3d8c0:	e28dd00c 	add	sp, sp, #12	; 0xc
         3d8c4:	e3360000 	teq	r6, #0	; 0x0
         3d8c8:	1a000003 	bne	3d8dc <ZapSend+0xc4>
         3d8cc:	e1a01005 	mov	r1, r5
         3d8d0:	e1a0000d 	mov	r0, sp
         3d8d4:	eb6a2efd 	bl	1ac94d0 <TBeamer::$Send(RefVar const &)>
         3d8d8:	e1a06000 	mov	r6, r0
         3d8dc:	e24dd008 	sub	sp, sp, #8	; 0x8
         3d8e0:	e28d0008 	add	r0, sp, #8	; 0x8
         3d8e4:	eb6a1a51 	bl	1ac4230 <TBeamer::$Close(void)>
         3d8e8:	e1a00007 	mov	r0, r7
         3d8ec:	eb6e1216 	bl	1bc214c <$AllocateRefHandle(long)>
         3d8f0:	e58d0000 	str	r0, [sp]
         3d8f4:	e1a0300d 	mov	r3, sp
         3d8f8:	e92d0008 	stmdb	sp!, {r3}
         3d8fc:	e59f309c 	ldr	r3, [pc, #9c]	; 3d9a0 <ZapSend+0x188>
         3d900:	e59f209c 	ldr	r2, [pc, #9c]	; 3d9a4 <ZapSend+0x18c>
         3d904:	e1a05002 	mov	r5, r2
         3d908:	e59f1098 	ldr	r1, [pc, #98]	; 3d9a8 <ZapSend+0x190>
         3d90c:	e1a00004 	mov	r0, r4
         3d910:	eb6f09cd 	bl	1c0004c <$NSSend__FRC6RefVarN41>
         3d914:	e5bd0004 	ldr	r0, [sp, #4]!
         3d918:	eb6e1627 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3d91c:	e1a00007 	mov	r0, r7
         3d920:	eb6e1209 	bl	1bc214c <$AllocateRefHandle(long)>
         3d924:	e58d0004 	str	r0, [sp, #4]
         3d928:	e28d3004 	add	r3, sp, #4	; 0x4
         3d92c:	e1a02005 	mov	r2, r5
         3d930:	e59f1074 	ldr	r1, [pc, #74]	; 3d9ac <ZapSend+0x194>
         3d934:	e1a00004 	mov	r0, r4
         3d938:	eb6f09c2 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3d93c:	e59d0004 	ldr	r0, [sp, #4]
         3d940:	eb6e161d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3d944:	e3360000 	teq	r6, #0	; 0x0
         3d948:	0a00000a 	beq	3d978 <ZapSend+0x160>
         3d94c:	e24dd004 	sub	sp, sp, #4	; 0x4
         3d950:	e1a00106 	mov	r0, r6, lsl #2
         3d954:	eb6e11fc 	bl	1bc214c <$AllocateRefHandle(long)>
         3d958:	e58d0000 	str	r0, [sp]
         3d95c:	e1a0200d 	mov	r2, sp
         3d960:	e59f1048 	ldr	r1, [pc, #48]	; 3d9b0 <ZapSend+0x198>
         3d964:	e1a00004 	mov	r0, r4
         3d968:	eb6f09b5 	bl	1c00044 <$NSSend__FRC6RefVarN21>
         3d96c:	e59d0000 	ldr	r0, [sp]
         3d970:	eb6e1611 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3d974:	e28dd004 	add	sp, sp, #4	; 0x4
         3d978:	e3360000 	teq	r6, #0	; 0x0
         3d97c:	03a04002 	moveq	r4, #2	; 0x2
         3d980:	11a04106 	movne	r4, r6, lsl #2
         3d984:	e28d0008 	add	r0, sp, #8	; 0x8
         3d988:	e3a01000 	mov	r1, #0	; 0x0
         3d98c:	eb6a32ee 	bl	1aca54c <TBeamer::$__dt(void)>
         3d990:	e1a00004 	mov	r0, r4
         3d994:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         3d998:	00682048 	rsbeq	r2, r8, r8, asr #32
         3d99c:	00682038 	rsbeq	r2, r8, r8, lsr r0
         3d9a0:	00685138 	rsbeq	r5, r8, r8, lsr r1
         3d9a4:	00683168 	rsbeq	r3, r8, r8, ror #2
         3d9a8:	006845c8 	rsbeq	r4, r8, r8, asr #11
         3d9ac:	006845c0 	rsbeq	r4, r8, r0, asr #11
         3d9b0:	00683070 	rsbeq	r3, r8, r0, ror r0
    */
}

/**
 * Symbol: ZapReceive
 * Address: 0003d9b4
 */
void globals::ZapReceive() {
    /*
         3d9b4:	e1a0c00d 	mov	ip, sp
         3d9b8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         3d9bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         3d9c0:	e1a04001 	mov	r4, r1
         3d9c4:	e24dd040 	sub	sp, sp, #64	; 0x40
         3d9c8:	e1a0000d 	mov	r0, sp
         3d9cc:	eb6a32d8 	bl	1aca534 <TBeamer::$__ct(RefVar const &)>
         3d9d0:	e1a0000d 	mov	r0, sp
         3d9d4:	e3a01001 	mov	r1, #1	; 0x1
         3d9d8:	eb6a2a9b 	bl	1ac844c <TBeamer::$Open(unsigned char)>
         3d9dc:	e1b05000 	movs	r5, r0
         3d9e0:	1a000002 	bne	3d9f0 <ZapReceive+0x3c>
         3d9e4:	e1a0000d 	mov	r0, sp
         3d9e8:	eb6a2ea8 	bl	1ac9490 <TBeamer::$Receive(void)>
         3d9ec:	e1a05000 	mov	r5, r0
         3d9f0:	e24dd008 	sub	sp, sp, #8	; 0x8
         3d9f4:	e28d0008 	add	r0, sp, #8	; 0x8
         3d9f8:	eb6a1a0c 	bl	1ac4230 <TBeamer::$Close(void)>
         3d9fc:	e3a07002 	mov	r7, #2	; 0x2
         3da00:	e1a00007 	mov	r0, r7
         3da04:	eb6e11d0 	bl	1bc214c <$AllocateRefHandle(long)>
         3da08:	e58d0000 	str	r0, [sp]
         3da0c:	e1a0300d 	mov	r3, sp
         3da10:	e92d0008 	stmdb	sp!, {r3}
         3da14:	e59f3094 	ldr	r3, [pc, #94]	; 3dab0 <ZapReceive+0xfc>
         3da18:	e59f2094 	ldr	r2, [pc, #94]	; 3dab4 <ZapReceive+0x100>
         3da1c:	e1a06002 	mov	r6, r2
         3da20:	e59f1090 	ldr	r1, [pc, #90]	; 3dab8 <ZapReceive+0x104>
         3da24:	e1a00004 	mov	r0, r4
         3da28:	eb6f0987 	bl	1c0004c <$NSSend__FRC6RefVarN41>
         3da2c:	e5bd0004 	ldr	r0, [sp, #4]!
         3da30:	eb6e15e1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3da34:	e1a00007 	mov	r0, r7
         3da38:	eb6e11c3 	bl	1bc214c <$AllocateRefHandle(long)>
         3da3c:	e58d0004 	str	r0, [sp, #4]
         3da40:	e28d3004 	add	r3, sp, #4	; 0x4
         3da44:	e1a02006 	mov	r2, r6
         3da48:	e59f106c 	ldr	r1, [pc, #6c]	; 3dabc <ZapReceive+0x108>
         3da4c:	e1a00004 	mov	r0, r4
         3da50:	eb6f097c 	bl	1c00048 <$NSSend__FRC6RefVarN31>
         3da54:	e59d0004 	ldr	r0, [sp, #4]
         3da58:	eb6e15d7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3da5c:	e3350000 	teq	r5, #0	; 0x0
         3da60:	0a00000a 	beq	3da90 <ZapReceive+0xdc>
         3da64:	e24dd004 	sub	sp, sp, #4	; 0x4
         3da68:	e1a00105 	mov	r0, r5, lsl #2
         3da6c:	eb6e11b6 	bl	1bc214c <$AllocateRefHandle(long)>
         3da70:	e58d0000 	str	r0, [sp]
         3da74:	e1a0200d 	mov	r2, sp
         3da78:	e59f1040 	ldr	r1, [pc, #40]	; 3dac0 <ZapReceive+0x10c>
         3da7c:	e1a00004 	mov	r0, r4
         3da80:	eb6f096f 	bl	1c00044 <$NSSend__FRC6RefVarN21>
         3da84:	e59d0000 	ldr	r0, [sp]
         3da88:	eb6e15cb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3da8c:	e28dd004 	add	sp, sp, #4	; 0x4
         3da90:	e3350000 	teq	r5, #0	; 0x0
         3da94:	03a04002 	moveq	r4, #2	; 0x2
         3da98:	11a04105 	movne	r4, r5, lsl #2
         3da9c:	e28d0008 	add	r0, sp, #8	; 0x8
         3daa0:	e3a01000 	mov	r1, #0	; 0x0
         3daa4:	eb6a32a8 	bl	1aca54c <TBeamer::$__dt(void)>
         3daa8:	e1a00004 	mov	r0, r4
         3daac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         3dab0:	00685138 	rsbeq	r5, r8, r8, lsr r1
         3dab4:	00683168 	rsbeq	r3, r8, r8, ror #2
         3dab8:	006845c8 	rsbeq	r4, r8, r8, asr #11
         3dabc:	006845c0 	rsbeq	r4, r8, r0, asr #11
         3dac0:	00683070 	rsbeq	r3, r8, r0, ror r0
    */
}

/**
 * Symbol: ZapCancel
 * Address: 0003dac4
 */
void globals::ZapCancel() {
    /*
         3dac4:	e1a0c00d 	mov	ip, sp
         3dac8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         3dacc:	e24cb004 	sub	fp, ip, #4	; 0x4
         3dad0:	e5910000 	ldr	r0, [r1]
         3dad4:	e5900000 	ldr	r0, [r0]
         3dad8:	eb698940 	bl	1a9ffe0 <$RefToAddress(long)>
         3dadc:	e3300000 	teq	r0, #0	; 0x0
         3dae0:	13a01001 	movne	r1, #1	; 0x1
         3dae4:	1b6f050a 	blne	1bfef14 <TEndpoint::$nAbort(unsigned char)>
         3dae8:	e3a00002 	mov	r0, #2	; 0x2
         3daec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ZapInternalStoreCheck(void)
 * Address: 00113cbc
 */
ZapInternalStoreCheck(void) {
    /*
        113cbc:	e59f02bc 	ldr	r0, [pc, #2bc]	; 113f80 <ZapInternalStoreCheck(void)+0x2c4>
        113cc0:	e5900000 	ldr	r0, [r0]
        113cc4:	e3100701 	tst	r0, #262144	; 0x40000
        113cc8:	1a00a202 	bne	13c4d8 <ClobberInternalFlash(void)>
        113ccc:	e1a0c00d 	mov	ip, sp
        113cd0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        113cd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        113cd8:	eb6bea9a 	bl	1c0e748 <$UserWantsColdBoot(void)>
        113cdc:	e3300000 	teq	r0, #0	; 0x0
        113ce0:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        113ce4:	eb68f2cc 	bl	1b5081c <$InitScreen(void)>
        113ce8:	e24dd008 	sub	sp, sp, #8	; 0x8
        113cec:	e3a08000 	mov	r8, #0	; 0x0
        113cf0:	e5cd8004 	strb	r8, [sp, #4]
        113cf4:	e58d8000 	str	r8, [sp]
        113cf8:	e1a0000d 	mov	r0, sp
        113cfc:	eb6b076f 	bl	1bd5ac0 <TUPort::$Init(void)>
        113d00:	eb679c13 	bl	1afad54 <$GetTabletCalibrationDataSWI(void)>
        113d04:	e1a0000d 	mov	r0, sp
        113d08:	eb675a09 	bl	1aea534 <$StartInker(TUPort *)>
        113d0c:	e24dd004 	sub	sp, sp, #4	; 0x4
        113d10:	e59f626c 	ldr	r6, [pc, #26c]	; 113f84 <ZapInternalStoreCheck(void)+0x2c8>
        113d14:	e5960064 	ldr	r0, [r6, #100]
        113d18:	e59f7264 	ldr	r7, [pc, #264]	; 113f84 <ZapInternalStoreCheck(void)+0x2c8>
        113d1c:	e3300000 	teq	r0, #0	; 0x0
        113d20:	1a000003 	bne	113d34 <ZapInternalStoreCheck(void)+0x78>
        113d24:	e3a00001 	mov	r0, #1	; 0x1
        113d28:	e5860064 	str	r0, [r6, #100]
        113d2c:	e1a00007 	mov	r0, r7
        113d30:	eb6a30bb 	bl	1ba0024 <TErasePersistentDataAlert::$__ct(void)>
        113d34:	e59f024c 	ldr	r0, [pc, #24c]	; 113f88 <ZapInternalStoreCheck(void)+0x2cc>
        113d38:	e5900000 	ldr	r0, [r0]
        113d3c:	e5900000 	ldr	r0, [r0]
        113d40:	eb6ab905 	bl	1bc215c <$BinaryData(long)>
        113d44:	e1a04000 	mov	r4, r0
        113d48:	e59f023c 	ldr	r0, [pc, #23c]	; 113f8c <ZapInternalStoreCheck(void)+0x2d0>
        113d4c:	e5900000 	ldr	r0, [r0]
        113d50:	e5900000 	ldr	r0, [r0]
        113d54:	eb6ab900 	bl	1bc215c <$BinaryData(long)>
        113d58:	e1a05000 	mov	r5, r0
        113d5c:	e59f022c 	ldr	r0, [pc, #22c]	; 113f90 <ZapInternalStoreCheck(void)+0x2d4>
        113d60:	e5900000 	ldr	r0, [r0]
        113d64:	e5900000 	ldr	r0, [r0]
        113d68:	eb6ab8fb 	bl	1bc215c <$BinaryData(long)>
        113d6c:	e1a01000 	mov	r1, r0
        113d70:	e1a00007 	mov	r0, r7
        113d74:	e1a02005 	mov	r2, r5
        113d78:	e1a03004 	mov	r3, r4
        113d7c:	eb6a30bb 	bl	1ba0070 <TErasePersistentDataAlert::$Init(unsigned short *, unsigned short *, unsigned short *)>
        113d80:	e1a0100d 	mov	r1, sp
        113d84:	e1a00006 	mov	r0, r6
        113d88:	eb6bb4cd 	bl	1c010c4 <TAlertDialog::$Alert(unsigned long *)>
        113d8c:	e3300000 	teq	r0, #0	; 0x0
        113d90:	059d0000 	ldreq	r0, [sp]
        113d94:	03300001 	teqeq	r0, #1	; 0x1
        113d98:	1a00006f 	bne	113f5c <ZapInternalStoreCheck(void)+0x2a0>
        113d9c:	e59f01f0 	ldr	r0, [pc, #1f0]	; 113f94 <ZapInternalStoreCheck(void)+0x2d8>
        113da0:	e5900000 	ldr	r0, [r0]
        113da4:	e5900000 	ldr	r0, [r0]
        113da8:	eb6ab8eb 	bl	1bc215c <$BinaryData(long)>
        113dac:	e1a05000 	mov	r5, r0
        113db0:	e59f01e0 	ldr	r0, [pc, #1e0]	; 113f98 <ZapInternalStoreCheck(void)+0x2dc>
        113db4:	e5900000 	ldr	r0, [r0]
        113db8:	e5900000 	ldr	r0, [r0]
        113dbc:	eb6ab8e6 	bl	1bc215c <$BinaryData(long)>
        113dc0:	e1a04000 	mov	r4, r0
        113dc4:	e59f01d0 	ldr	r0, [pc, #1d0]	; 113f9c <ZapInternalStoreCheck(void)+0x2e0>
        113dc8:	e5900000 	ldr	r0, [r0]
        113dcc:	e5900000 	ldr	r0, [r0]
        113dd0:	eb6ab8e1 	bl	1bc215c <$BinaryData(long)>
        113dd4:	e1a01000 	mov	r1, r0
        113dd8:	e1a00007 	mov	r0, r7
        113ddc:	e1a02004 	mov	r2, r4
        113de0:	e1a03005 	mov	r3, r5
        113de4:	eb6a30a1 	bl	1ba0070 <TErasePersistentDataAlert::$Init(unsigned short *, unsigned short *, unsigned short *)>
        113de8:	e1a0100d 	mov	r1, sp
        113dec:	e1a00006 	mov	r0, r6
        113df0:	eb6bb4b3 	bl	1c010c4 <TAlertDialog::$Alert(unsigned long *)>
        113df4:	e3300000 	teq	r0, #0	; 0x0
        113df8:	059d0000 	ldreq	r0, [sp]
        113dfc:	03300001 	teqeq	r0, #1	; 0x1
        113e00:	1a000055 	bne	113f5c <ZapInternalStoreCheck(void)+0x2a0>
        113e04:	e59f0194 	ldr	r0, [pc, #194]	; 113fa0 <ZapInternalStoreCheck(void)+0x2e4>
        113e08:	e5a08138 	str	r8, [r0, #312]!
        113e0c:	e24dd008 	sub	sp, sp, #8	; 0x8
        113e10:	e59f018c 	ldr	r0, [pc, #18c]	; 113fa4 <ZapInternalStoreCheck(void)+0x2e8>
        113e14:	e5900000 	ldr	r0, [r0]
        113e18:	e5901000 	ldr	r1, [r0]
        113e1c:	e59f4184 	ldr	r4, [pc, #184]	; 113fa8 <ZapInternalStoreCheck(void)+0x2ec>
        113e20:	e5940000 	ldr	r0, [r4]
        113e24:	e5900000 	ldr	r0, [r0]
        113e28:	eb6ac10c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        113e2c:	e3100003 	tst	r0, #3	; 0x3
        113e30:	01a00140 	moveq	r0, r0, asr #2
        113e34:	0a000000 	beq	113e3c <ZapInternalStoreCheck(void)+0x180>
        113e38:	eb6ab8b7 	bl	1bc211c <$_RINTError(long)>
        113e3c:	e5cd0001 	strb	r0, [sp, #1]
        113e40:	e1a00440 	mov	r0, r0, asr #8
        113e44:	e5cd0000 	strb	r0, [sp]
        113e48:	e59f015c 	ldr	r0, [pc, #15c]	; 113fac <ZapInternalStoreCheck(void)+0x2f0>
        113e4c:	e5900000 	ldr	r0, [r0]
        113e50:	e5901000 	ldr	r1, [r0]
        113e54:	e5940000 	ldr	r0, [r4]
        113e58:	e5900000 	ldr	r0, [r0]
        113e5c:	eb6ac0ff 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        113e60:	e3100003 	tst	r0, #3	; 0x3
        113e64:	01a00140 	moveq	r0, r0, asr #2
        113e68:	0a000000 	beq	113e70 <ZapInternalStoreCheck(void)+0x1b4>
        113e6c:	eb6ab8aa 	bl	1bc211c <$_RINTError(long)>
        113e70:	e5cd0003 	strb	r0, [sp, #3]
        113e74:	e1a00440 	mov	r0, r0, asr #8
        113e78:	e5cd0002 	strb	r0, [sp, #2]
        113e7c:	e59f012c 	ldr	r0, [pc, #12c]	; 113fb0 <ZapInternalStoreCheck(void)+0x2f4>
        113e80:	e5900000 	ldr	r0, [r0]
        113e84:	e5901000 	ldr	r1, [r0]
        113e88:	e5940000 	ldr	r0, [r4]
        113e8c:	e5900000 	ldr	r0, [r0]
        113e90:	eb6ac0f2 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        113e94:	e3100003 	tst	r0, #3	; 0x3
        113e98:	01a00140 	moveq	r0, r0, asr #2
        113e9c:	0a000000 	beq	113ea4 <ZapInternalStoreCheck(void)+0x1e8>
        113ea0:	eb6ab89d 	bl	1bc211c <$_RINTError(long)>
        113ea4:	e5cd0005 	strb	r0, [sp, #5]
        113ea8:	e1a00440 	mov	r0, r0, asr #8
        113eac:	e5cd0004 	strb	r0, [sp, #4]
        113eb0:	e59f00fc 	ldr	r0, [pc, #fc]	; 113fb4 <ZapInternalStoreCheck(void)+0x2f8>
        113eb4:	e5900000 	ldr	r0, [r0]
        113eb8:	e5901000 	ldr	r1, [r0]
        113ebc:	e5940000 	ldr	r0, [r4]
        113ec0:	e5900000 	ldr	r0, [r0]
        113ec4:	eb6ac0e5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        113ec8:	e3100003 	tst	r0, #3	; 0x3
        113ecc:	01a00140 	moveq	r0, r0, asr #2
        113ed0:	0a000000 	beq	113ed8 <ZapInternalStoreCheck(void)+0x21c>
        113ed4:	eb6ab890 	bl	1bc211c <$_RINTError(long)>
        113ed8:	e5cd0007 	strb	r0, [sp, #7]
        113edc:	e1a00440 	mov	r0, r0, asr #8
        113ee0:	e5cd0006 	strb	r0, [sp, #6]
        113ee4:	e59f40cc 	ldr	r4, [pc, #cc]	; 113fb8 <ZapInternalStoreCheck(void)+0x2fc>
        113ee8:	e5940000 	ldr	r0, [r4]
        113eec:	e5900000 	ldr	r0, [r0]
        113ef0:	eb6ab899 	bl	1bc215c <$BinaryData(long)>
        113ef4:	e1a03000 	mov	r3, r0
        113ef8:	e92d0008 	stmdb	sp!, {r3}
        113efc:	e5940000 	ldr	r0, [r4]
        113f00:	e5900000 	ldr	r0, [r0]
        113f04:	eb6ab894 	bl	1bc215c <$BinaryData(long)>
        113f08:	e1a04000 	mov	r4, r0
        113f0c:	e59f00a8 	ldr	r0, [pc, #a8]	; 113fbc <ZapInternalStoreCheck(void)+0x300>
        113f10:	e5900000 	ldr	r0, [r0]
        113f14:	e5900000 	ldr	r0, [r0]
        113f18:	eb6ab88f 	bl	1bc215c <$BinaryData(long)>
        113f1c:	e1a02000 	mov	r2, r0
        113f20:	e28d1004 	add	r1, sp, #4	; 0x4
        113f24:	e1a00007 	mov	r0, r7
        113f28:	e1a03004 	mov	r3, r4
        113f2c:	eb691b80 	bl	1b5ad34 <TErasePersistentDataAlert::$Init(Rect *, unsigned short *, unsigned short *, unsigned short *)>
        113f30:	e28dd004 	add	sp, sp, #4	; 0x4
        113f34:	e1a00006 	mov	r0, r6
        113f38:	eb678b0e 	bl	1af6b78 <TAlertDialog::$DisplayAlert(void)>
        113f3c:	eb00a165 	bl	13c4d8 <ClobberInternalFlash(void)>
        113f40:	e1a00006 	mov	r0, r6
        113f44:	eb67bca8 	bl	1b031ec <TAlertDialog::$RemoveAlert(void)>
        113f48:	e3a02000 	mov	r2, #0	; 0x0
        113f4c:	e59f106c 	ldr	r1, [pc, #6c]	; 113fc0 <ZapInternalStoreCheck(void)+0x304>
        113f50:	e3a00000 	mov	r0, #0	; 0x0
        113f54:	eb6b6e0f 	bl	1bef798 <$Reboot(long, unsigned long, unsigned char)>
        113f58:	e28dd008 	add	sp, sp, #8	; 0x8
        113f5c:	e3a02000 	mov	r2, #0	; 0x0
        113f60:	e3a01000 	mov	r1, #0	; 0x0
        113f64:	e3a00000 	mov	r0, #0	; 0x0
        113f68:	eb6b6e0a 	bl	1bef798 <$Reboot(long, unsigned long, unsigned char)>
        113f6c:	e28dd004 	add	sp, sp, #4	; 0x4
        113f70:	e1a0000d 	mov	r0, sp
        113f74:	e3a01000 	mov	r1, #0	; 0x0
        113f78:	eb6ae9e9 	bl	1bce724 <TUObject::$__dt(void)>
        113f7c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        113f80:	000013fc 	streqd	r1, [r0], -ip
        113f84:	0c1010e8 	ldceq	0, cr1, [r0], -#928
        113f88:	00681428 	rsbeq	r1, r8, r8, lsr #8
        113f8c:	0067ff38 	rsbeq	pc, r7, r8, lsr pc
        113f90:	00681048 	rsbeq	r1, r8, r8, asr #32
        113f94:	00680db8 	streqh	r0, [r8], -#216
        113f98:	00681aa0 	rsbeq	r1, r8, r0, lsr #21
        113f9c:	00680960 	rsbeq	r0, r8, r0, ror #18
        113fa0:	0c1061c4 	ldfeqs	f6, [r0], -#784
        113fa4:	00684bc8 	rsbeq	r4, r8, r8, asr #23
        113fa8:	006807f8 	streqd	r0, [r8], -#120
        113fac:	006834e0 	rsbeq	r3, r8, r0, ror #9
        113fb0:	00682188 	rsbeq	r2, r8, r8, lsl #3
        113fb4:	00684360 	rsbeq	r4, r8, r0, ror #6
        113fb8:	006819d0 	ldreqd	r1, [r8], -#144
        113fbc:	00680b08 	rsbeq	r0, r8, r8, lsl #22
        113fc0:	424c5447 	submi	r5, ip, #1191182336	; 0x47000000
    */
}

/**
 * Symbol: ZeroPhysPage(unsigned long)
 * Address: 0011f000
 */
ZeroPhysPage(unsigned long) {
    /*
        11f000:	e1a0c00d 	mov	ip, sp
        11f004:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11f008:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f00c:	e1a04000 	mov	r4, r0
        11f010:	ebfbe75f 	bl	18d94 <ZeroPhysSubPage>
        11f014:	e2840b01 	add	r0, r4, #1024	; 0x400
        11f018:	ebfbe75d 	bl	18d94 <ZeroPhysSubPage>
        11f01c:	e2840b02 	add	r0, r4, #2048	; 0x800
        11f020:	ebfbe75b 	bl	18d94 <ZeroPhysSubPage>
        11f024:	e2840b03 	add	r0, r4, #3072	; 0xc00
        11f028:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        11f02c:	eafbe758 	b	18d94 <ZeroPhysSubPage>
    */
}

/**
 * Symbol: ZapHeap
 * Address: 00142844
 */
void globals::ZapHeap() {
    /*
        142844:	e1a0c00d 	mov	ip, sp
        142848:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14284c:	e24cb004 	sub	fp, ip, #4	; 0x4
        142850:	e20240ff 	and	r4, r2, #255	; 0xff
        142854:	e59fc018 	ldr	ip, [pc, #18]	; 142874 <ZapHeap+0x30>
        142858:	e131000c 	teq	r1, ip
        14285c:	1a000001 	bne	142868 <ZapHeap+0x24>
        142860:	e3300000 	teq	r0, #0	; 0x0
        142864:	1a000003 	bne	142878 <ZapHeap+0x34>
        142868:	e3a000ea 	mov	r0, #234	; 0xea
        14286c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        142870:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        142874:	2d3e3c2d 	ldccs	12, cr3, [lr, -#180]!
        142878:	e24dd008 	sub	sp, sp, #8	; 0x8
        14287c:	e1a0200d 	mov	r2, sp
        142880:	e28d1004 	add	r1, sp, #4	; 0x4
        142884:	eb6a4454 	bl	1bd39dc <$GetHeapAreaInfo>
        142888:	e1a05000 	mov	r5, r0
        14288c:	e3340000 	teq	r4, #0	; 0x0
        142890:	0a000005 	beq	1428ac <ZapHeap+0x68>
        142894:	e59d0004 	ldr	r0, [sp, #4]
        142898:	e2400001 	sub	r0, r0, #1	; 0x1
        14289c:	e2800a01 	add	r0, r0, #4096	; 0x1000
        1428a0:	e1a00620 	mov	r0, r0, lsr #12
        1428a4:	e1a00600 	mov	r0, r0, lsl #12
        1428a8:	e58d0004 	str	r0, [sp, #4]
        1428ac:	e3350000 	teq	r5, #0	; 0x0
        1428b0:	1a000022 	bne	142940 <ZapHeap+0xfc>
        1428b4:	e3340000 	teq	r4, #0	; 0x0
        1428b8:	03a04b01 	moveq	r4, #1024	; 0x400
        1428bc:	13a04a01 	movne	r4, #4096	; 0x1000
        1428c0:	e59d0004 	ldr	r0, [sp, #4]
        1428c4:	e0801004 	add	r1, r0, r4
        1428c8:	eb6a653d 	bl	1bdbdc4 <$SetHeapLimits>
        1428cc:	e1a05000 	mov	r5, r0
        1428d0:	e59d0004 	ldr	r0, [sp, #4]
        1428d4:	e0801004 	add	r1, r0, r4
        1428d8:	e3a02000 	mov	r2, #0	; 0x0
        1428dc:	eb6a509c 	bl	1bd6b54 <$LockHeapRange>
        1428e0:	e59d0004 	ldr	r0, [sp, #4]
        1428e4:	e0801004 	add	r1, r0, r4
        1428e8:	eb6a6d6c 	bl	1bddea0 <$UnlockHeapRange>
        1428ec:	eb6a79fe 	bl	1be10ec <$GetHeap>
        1428f0:	e1a06000 	mov	r6, r0
        1428f4:	e59d0004 	ldr	r0, [sp, #4]
        1428f8:	e59d1000 	ldr	r1, [sp]
        1428fc:	e0411000 	sub	r1, r1, r0
        142900:	e1a02004 	mov	r2, r4
        142904:	eb6a75af 	bl	1bdffc8 <$NewHeap>
        142908:	e1a04000 	mov	r4, r0
        14290c:	e1a00006 	mov	r0, r6
        142910:	eb6a821a 	bl	1be3180 <$SetHeap>
        142914:	e3340000 	teq	r4, #0	; 0x0
        142918:	0a000007 	beq	14293c <ZapHeap+0xf8>
        14291c:	e1a00004 	mov	r0, r4
        142920:	eb6a75af 	bl	1bdffe4 <$SetHeapIsVMBacked>
        142924:	e1a02004 	mov	r2, r4
        142928:	e59f1008 	ldr	r1, [pc, #8]	; 142938 <ZapHeap+0xf4>
        14292c:	e1a00004 	mov	r0, r4
        142930:	eb6a652f 	bl	1bdbdf4 <$SetRemoveRoutine>
        142934:	ea000001 	b	142940 <ZapHeap+0xfc>
        142938:	01b78c44 	moveqs	r8, r4, asr #24
        14293c:	e3e0506b 	mvn	r5, #107	; 0x6b
        142940:	e1a00005 	mov	r0, r5
        142944:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ZoomView
 * Address: 00164c88
 */
void globals::ZoomView() {
    /*
        164c88:	e1a0c00d 	mov	ip, sp
        164c8c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        164c90:	e24cb004 	sub	fp, ip, #4	; 0x4
        164c94:	e1a04000 	mov	r4, r0
        164c98:	e1a06002 	mov	r6, r2
        164c9c:	e1a05003 	mov	r5, r3
        164ca0:	e59b7004 	ldr	r7, [fp, #4]
        164ca4:	e24dd010 	sub	sp, sp, #16	; 0x10
        164ca8:	eb69962c 	bl	1bca560 <$GetView__FRC6RefVarT1>
        164cac:	e2800010 	add	r0, r0, #16	; 0x10
        164cb0:	e28d1008 	add	r1, sp, #8	; 0x8
        164cb4:	e8905000 	ldmia	r0, {ip, lr}
        164cb8:	e8815000 	stmia	r1, {ip, lr}
        164cbc:	e1a01006 	mov	r1, r6
        164cc0:	e1a00004 	mov	r0, r4
        164cc4:	eb699625 	bl	1bca560 <$GetView__FRC6RefVarT1>
        164cc8:	e2800010 	add	r0, r0, #16	; 0x10
        164ccc:	e8905000 	ldmia	r0, {ip, lr}
        164cd0:	e88d5000 	stmia	sp, {ip, lr}
        164cd4:	e5970000 	ldr	r0, [r7]
        164cd8:	e5900000 	ldr	r0, [r0]
        164cdc:	e2504002 	subs	r4, r0, #2	; 0x2
        164ce0:	13a04001 	movne	r4, #1	; 0x1
        164ce4:	e5950000 	ldr	r0, [r5]
        164ce8:	e5900000 	ldr	r0, [r0]
        164cec:	e3100003 	tst	r0, #3	; 0x3
        164cf0:	01a00140 	moveq	r0, r0, asr #2
        164cf4:	0a000000 	beq	164cfc <ZoomView+0x74>
        164cf8:	eb697507 	bl	1bc211c <$_RINTError(long)>
        164cfc:	e1a02000 	mov	r2, r0
        164d00:	e1a0100d 	mov	r1, sp
        164d04:	e28d0008 	add	r0, sp, #8	; 0x8
        164d08:	e1a03004 	mov	r3, r4
        164d0c:	eb67c363 	bl	1b55aa0 <$ZoomRect__FP4RectT1lUc>
        164d10:	e3a0001a 	mov	r0, #26	; 0x1a
        164d14:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: ZapLargeObject(TStoreWrapper *, unsigned long, long, void *)
 * Address: 002dfab0
 */
ZapLargeObject(TStoreWrapper *, unsigned long, long, void *) {
    /*
        2dfab0:	e1a0c00d 	mov	ip, sp
        2dfab4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2dfab8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dfabc:	eb5d9602 	bl	1a452cc <$DeleteLargeBinary(TStoreWrapper *, unsigned long)>
        2dfac0:	e3a00000 	mov	r0, #0	; 0x0
        2dfac4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ZapLargeBinaries(TStoreWrapper *, unsigned long)
 * Address: 002dfac8
 */
ZapLargeBinaries(TStoreWrapper *, unsigned long) {
    /*
        2dfac8:	e1a0c00d 	mov	ip, sp
        2dfacc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2dfad0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dfad4:	e24ddf96 	sub	sp, sp, #600	; 0x258
        2dfad8:	e1a02001 	mov	r2, r1
        2dfadc:	e1a01000 	mov	r1, r0
        2dfae0:	e1a0000d 	mov	r0, sp
        2dfae4:	e3a03000 	mov	r3, #0	; 0x0
        2dfae8:	eb5d70bc 	bl	1a3bde0 <TStoreObjectReader::$__ct(TStoreWrapper *, unsigned long, CDynamicArray **)>
        2dfaec:	e3a00000 	mov	r0, #0	; 0x0
        2dfaf0:	e52d006c 	str	r0, [sp, -#108]!
        2dfaf4:	e28d0008 	add	r0, sp, #8	; 0x8
        2dfaf8:	eb634b9d 	bl	1bb2974 <$setjmp>
        2dfafc:	e3300000 	teq	r0, #0	; 0x0
        2dfb00:	1a00000d 	bne	2dfb3c <ZapLargeBinaries(TStoreWrapper *, unsigned long)+0x74>
        2dfb04:	e1a0000d 	mov	r0, sp
        2dfb08:	eb64015b 	bl	1be007c <$AddExceptionHandler>
        2dfb0c:	e59f1024 	ldr	r1, [pc, #24]	; 2dfb38 <ZapLargeBinaries(TStoreWrapper *, unsigned long)+0x70>
        2dfb10:	e28d006c 	add	r0, sp, #108	; 0x6c
        2dfb14:	e3a02000 	mov	r2, #0	; 0x0
        2dfb18:	eb5da675 	bl	1a494f4 <TStoreObjectReader::$EachLargeObjectDo(unsigned char (*)(TStoreWrapper *, unsigned long, long, void *), void *)>
        2dfb1c:	e1a0000d 	mov	r0, sp
        2dfb20:	eb640564 	bl	1be10b8 <$ExitHandler>
        2dfb24:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2dfb28:	e1a0000d 	mov	r0, sp
        2dfb2c:	e3a01000 	mov	r1, #0	; 0x0
        2dfb30:	eb5d74b5 	bl	1a3ce0c <TStoreObjectReader::$__dt(void)>
        2dfb34:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2dfb38:	002dfab0 	streqh	pc, [sp], -r0
        2dfb3c:	e28d006c 	add	r0, sp, #108	; 0x6c
        2dfb40:	e3a01000 	mov	r1, #0	; 0x0
        2dfb44:	eb5d74b0 	bl	1a3ce0c <TStoreObjectReader::$__dt(void)>
        2dfb48:	e1a0000d 	mov	r0, sp
        2dfb4c:	eb640980 	bl	1be2154 <$NextHandler>
        2dfb50:	eafffff9 	b	2dfb3c <ZapLargeBinaries(TStoreWrapper *, unsigned long)+0x74>
    */
}

/**
 * Symbol: ZeroBytes
 * Address: 0031139c
 */
void globals::ZeroBytes() {
    /*
        31139c:	e3a02000 	mov	r2, #0	; 0x0
        3113a0:	ea6336f2 	b	1bdef70 <$FillLongs>
    */
}

/**
 * Symbol: ZoomRect__FP4RectT1lUc
 * Address: 003404e0
 */
void globals::ZoomRect() {
    /*
        3404e0:	e1a0c00d 	mov	ip, sp
        3404e4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3404e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        3404ec:	e1a05000 	mov	r5, r0
        3404f0:	e1a04001 	mov	r4, r1
        3404f4:	e1a06002 	mov	r6, r2
        3404f8:	e20370ff 	and	r7, r3, #255	; 0xff
        3404fc:	e24dd024 	sub	sp, sp, #36	; 0x24
        340500:	e1a0000d 	mov	r0, sp
        340504:	eb62bca6 	bl	1bef7a4 <$GetPort(GrafPort **)>
        340508:	eb6044ee 	bl	1b518c8 <$NewRgn(void)>
        34050c:	e1a09000 	mov	r9, r0
        340510:	eb603ca8 	bl	1b4f7b8 <$GetClip(Region **)>
        340514:	e59d0000 	ldr	r0, [sp]
        340518:	e5900024 	ldr	r0, [r0, #36]
        34051c:	eb604d2e 	bl	1b539dc <$SetClip(Region **)>
        340520:	e59f005c 	ldr	r0, [pc, #5c]	; 340584 <ZoomRect__FP4RectT1lUc+0xa4>
        340524:	e5900008 	ldr	r0, [r0, #8]
        340528:	eb604d30 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        34052c:	e3a0000e 	mov	r0, #14	; 0xe
        340530:	eb6048fa 	bl	1b52920 <$PenMode(long)>
        340534:	e3560005 	cmp	r6, #5	; 0x5
        340538:	b3a06005 	movlt	r6, #5	; 0x5
        34053c:	e1b00007 	movs	r0, r7
        340540:	e3a07055 	mov	r7, #85	; 0x55
        340544:	e2877cd5 	add	r7, r7, #54528	; 0xd500
        340548:	0a00000f 	beq	34058c <ZoomRect__FP4RectT1lUc+0xac>
        34054c:	e1a08007 	mov	r8, r7
        340550:	e256a002 	subs	sl, r6, #2	; 0x2
        340554:	4a000005 	bmi	340570 <ZoomRect__FP4RectT1lUc+0x90>
        340558:	e1a00008 	mov	r0, r8
        34055c:	e1a01007 	mov	r1, r7
        340560:	eb6282d7 	bl	1be10c4 <$FixedMultiply>
        340564:	e1a08000 	mov	r8, r0
        340568:	e25aa001 	subs	sl, sl, #1	; 0x1
        34056c:	5afffff9 	bpl	340558 <ZoomRect__FP4RectT1lUc+0x78>
        340570:	e59f7010 	ldr	r7, [pc, #10]	; 340588 <ZoomRect__FP4RectT1lUc+0xa8>
        340574:	e28d001c 	add	r0, sp, #28	; 0x1c
        340578:	e8951008 	ldmia	r5, {r3, ip}
        34057c:	e8801008 	stmia	r0, {r3, ip}
        340580:	ea000005 	b	34059c <ZoomRect__FP4RectT1lUc+0xbc>
        340584:	0c107d74 	ldceq	13, cr7, [r0], -#464
        340588:	00013333 	andeq	r3, r1, r3, lsr r3
        34058c:	e3a08801 	mov	r8, #65536	; 0x10000
        340590:	e28d001c 	add	r0, sp, #28	; 0x1c
        340594:	e8941008 	ldmia	r4, {r3, ip}
        340598:	e8801008 	stmia	r0, {r3, ip}
        34059c:	e28d000c 	add	r0, sp, #12	; 0xc
        3405a0:	e28d101c 	add	r1, sp, #28	; 0x1c
        3405a4:	e8911008 	ldmia	r1, {r3, ip}
        3405a8:	e8801008 	stmia	r0, {r3, ip}
        3405ac:	e28d1014 	add	r1, sp, #20	; 0x14
        3405b0:	e8905000 	ldmia	r0, {ip, lr}
        3405b4:	e8815000 	stmia	r1, {ip, lr}
        3405b8:	e28d001c 	add	r0, sp, #28	; 0x1c
        3405bc:	eb603c76 	bl	1b4f79c <$FrameRect(Rect *)>
        3405c0:	e3560000 	cmp	r6, #0	; 0x0
        3405c4:	ba000041 	blt	3406d0 <ZoomRect__FP4RectT1lUc+0x1f0>
        3405c8:	e1a02008 	mov	r2, r8
        3405cc:	e5941000 	ldr	r1, [r4]
        3405d0:	e1a01841 	mov	r1, r1, asr #16
        3405d4:	e5950000 	ldr	r0, [r5]
        3405d8:	e1a00840 	mov	r0, r0, asr #16
        3405dc:	eb6027d7 	bl	1b4a540 <$FixStep__FlN21>
        3405e0:	e5cd0005 	strb	r0, [sp, #5]
        3405e4:	e1a00440 	mov	r0, r0, asr #8
        3405e8:	e5cd0004 	strb	r0, [sp, #4]
        3405ec:	e5941002 	ldr	r1, [r4, #2]
        3405f0:	e1a01841 	mov	r1, r1, asr #16
        3405f4:	e5950002 	ldr	r0, [r5, #2]
        3405f8:	e1a00840 	mov	r0, r0, asr #16
        3405fc:	e1a02008 	mov	r2, r8
        340600:	eb6027ce 	bl	1b4a540 <$FixStep__FlN21>
        340604:	e5cd0007 	strb	r0, [sp, #7]
        340608:	e1a00440 	mov	r0, r0, asr #8
        34060c:	e5cd0006 	strb	r0, [sp, #6]
        340610:	e5941004 	ldr	r1, [r4, #4]
        340614:	e1a01841 	mov	r1, r1, asr #16
        340618:	e5950004 	ldr	r0, [r5, #4]
        34061c:	e1a00840 	mov	r0, r0, asr #16
        340620:	e1a02008 	mov	r2, r8
        340624:	eb6027c5 	bl	1b4a540 <$FixStep__FlN21>
        340628:	e5cd0009 	strb	r0, [sp, #9]
        34062c:	e1a00440 	mov	r0, r0, asr #8
        340630:	e5cd0008 	strb	r0, [sp, #8]
        340634:	e5941006 	ldr	r1, [r4, #6]
        340638:	e1a01841 	mov	r1, r1, asr #16
        34063c:	e5950006 	ldr	r0, [r5, #6]
        340640:	e1a00840 	mov	r0, r0, asr #16
        340644:	e1a02008 	mov	r2, r8
        340648:	eb6027bc 	bl	1b4a540 <$FixStep__FlN21>
        34064c:	e5cd000b 	strb	r0, [sp, #11]
        340650:	e1a00440 	mov	r0, r0, asr #8
        340654:	e5cd000a 	strb	r0, [sp, #10]
        340658:	e3a00a1e 	mov	r0, #122880	; 0x1e000
        34065c:	eb6271f2 	bl	1bdce2c <$Sleep(unsigned long)>
        340660:	e3a01000 	mov	r1, #0	; 0x0
        340664:	e3a00000 	mov	r0, #0	; 0x0
        340668:	eb602fea 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        34066c:	e28d0004 	add	r0, sp, #4	; 0x4
        340670:	eb603c49 	bl	1b4f79c <$FrameRect(Rect *)>
        340674:	e28d001c 	add	r0, sp, #28	; 0x1c
        340678:	eb603c47 	bl	1b4f79c <$FrameRect(Rect *)>
        34067c:	e3a01000 	mov	r1, #0	; 0x0
        340680:	e3a00000 	mov	r0, #0	; 0x0
        340684:	eb602fe5 	bl	1b4c620 <$StopDrawing(PixelMap *, Rect *)>
        340688:	e28d001c 	add	r0, sp, #28	; 0x1c
        34068c:	e28d1014 	add	r1, sp, #20	; 0x14
        340690:	e8915000 	ldmia	r1, {ip, lr}
        340694:	e8805000 	stmia	r0, {ip, lr}
        340698:	e28d0014 	add	r0, sp, #20	; 0x14
        34069c:	e28d100c 	add	r1, sp, #12	; 0xc
        3406a0:	e8915000 	ldmia	r1, {ip, lr}
        3406a4:	e8805000 	stmia	r0, {ip, lr}
        3406a8:	e28d100c 	add	r1, sp, #12	; 0xc
        3406ac:	e28d0004 	add	r0, sp, #4	; 0x4
        3406b0:	e8905000 	ldmia	r0, {ip, lr}
        3406b4:	e8815000 	stmia	r1, {ip, lr}
        3406b8:	e1a01007 	mov	r1, r7
        3406bc:	e1a00008 	mov	r0, r8
        3406c0:	eb62827f 	bl	1be10c4 <$FixedMultiply>
        3406c4:	e1a08000 	mov	r8, r0
        3406c8:	e2566001 	subs	r6, r6, #1	; 0x1
        3406cc:	5affffbd 	bpl	3405c8 <ZoomRect__FP4RectT1lUc+0xe8>
        3406d0:	e3a00a1e 	mov	r0, #122880	; 0x1e000
        3406d4:	eb6271d4 	bl	1bdce2c <$Sleep(unsigned long)>
        3406d8:	e28d001c 	add	r0, sp, #28	; 0x1c
        3406dc:	eb603c2e 	bl	1b4f79c <$FrameRect(Rect *)>
        3406e0:	e3a00a1e 	mov	r0, #122880	; 0x1e000
        3406e4:	eb6271d0 	bl	1bdce2c <$Sleep(unsigned long)>
        3406e8:	e28d0014 	add	r0, sp, #20	; 0x14
        3406ec:	eb603c2a 	bl	1b4f79c <$FrameRect(Rect *)>
        3406f0:	e3a00a1e 	mov	r0, #122880	; 0x1e000
        3406f4:	eb6271cc 	bl	1bdce2c <$Sleep(unsigned long)>
        3406f8:	e28d000c 	add	r0, sp, #12	; 0xc
        3406fc:	eb603c26 	bl	1b4f79c <$FrameRect(Rect *)>
        340700:	eb604887 	bl	1b52924 <$PenNormal(void)>
        340704:	e1a00009 	mov	r0, r9
        340708:	eb604cb3 	bl	1b539dc <$SetClip(Region **)>
        34070c:	e1a00009 	mov	r0, r9
        340710:	eb6033f2 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        340714:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

