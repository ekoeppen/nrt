#include "include/TNewtWorld.h"

/**
 * Symbol: TNewtWorld::GetSizeOf(void)
 * Address: 0030ca00
 */
TNewtWorld::GetSizeOf(void) {
    /*
        30ca00:	e3a00094 	mov	r0, #148	; 0x94
        30ca04:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewtWorld::MakeFork(void)
 * Address: 0030caa4
 */
TNewtWorld::MakeFork(void) {
    /*
        30caa4:	e1a0c00d 	mov	ip, sp
        30caa8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        30caac:	e24cb004 	sub	fp, ip, #4	; 0x4
        30cab0:	e3a00094 	mov	r0, #148	; 0x94
        30cab4:	eb63071f 	bl	1bce738 <$__nw(unsigned int)>
        30cab8:	e1b04000 	movs	r4, r0
        30cabc:	0a000003 	beq	30cad0 <TNewtWorld::MakeFork(void)+0x2c>
        30cac0:	e1a00004 	mov	r0, r4
        30cac4:	eb635dde 	bl	1be4244 <TAppWorld::$__ct(void)>
        30cac8:	e59f0008 	ldr	r0, [pc, #8]	; 30cad8 <TNewtWorld::MakeFork(void)+0x34>
        30cacc:	e5840000 	str	r0, [r4]
        30cad0:	e1a00004 	mov	r0, r4
        30cad4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        30cad8:	0001ab2c 	andeq	sl, r1, ip, lsr #22
    */
}

/**
 * Symbol: TNewtWorld::ForkInit(TForkWorld *)
 * Address: 0030cadc
 */
TNewtWorld::ForkInit(TForkWorld *) {
    /*
        30cadc:	e1a0c00d 	mov	ip, sp
        30cae0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        30cae4:	e24cb004 	sub	fp, ip, #4	; 0x4
        30cae8:	e1a05000 	mov	r5, r0
        30caec:	e1a04001 	mov	r4, r1
        30caf0:	eb6282ec 	bl	1bad6a8 <TAppWorld::$ForkInit(TForkWorld *)>
        30caf4:	e3300000 	teq	r0, #0	; 0x0
        30caf8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        30cafc:	e5941070 	ldr	r1, [r4, #112]	; fField112
        30cb00:	e5851070 	str	r1, [r5, #112]	; fField112
        30cb04:	e5941074 	ldr	r1, [r4, #116]	; fField116
        30cb08:	e5851074 	str	r1, [r5, #116]	; fField116
        30cb0c:	e5b41078 	ldr	r1, [r4, #120]!	; fField120
        30cb10:	e5a51078 	str	r1, [r5, #120]!	; fField120
        30cb14:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNewtWorld::TheMain(void)
 * Address: 0030cb68
 */
TNewtWorld::TheMain(void) {
    /*
        30cb68:	e1a0c00d 	mov	ip, sp
        30cb6c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        30cb70:	e24cb004 	sub	fp, ip, #4	; 0x4
        30cb74:	e1a04000 	mov	r4, r0
        30cb78:	e24dd008 	sub	sp, sp, #8	; 0x8
        30cb7c:	e1a0000d 	mov	r0, sp
        30cb80:	e3a01a01 	mov	r1, #4096	; 0x1000
        30cb84:	eb6327f3 	bl	1bd6b58 <$LockStack>
        30cb88:	e1a00004 	mov	r0, r4
        30cb8c:	eb628b10 	bl	1baf7d4 <TAppWorld::$TheMain(void)>
        30cb90:	e1a0000d 	mov	r0, sp
        30cb94:	eb6344c2 	bl	1bddea4 <$UnlockStack>
        30cb98:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNewtWorld::ForkConstructor(TForkWorld *)
 * Address: 0030cb9c
 */
TNewtWorld::ForkConstructor(TForkWorld *) {
    /*
        30cb9c:	e1a0c00d 	mov	ip, sp
        30cba0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        30cba4:	e24cb004 	sub	fp, ip, #4	; 0x4
        30cba8:	e59f5030 	ldr	r5, [pc, #30]	; 30cbe0 <TNewtWorld::ForkConstructor(TForkWorld *)+0x44>
        30cbac:	e280207c 	add	r2, r0, #124	; 0x7c
        30cbb0:	e5954008 	ldr	r4, [r5, #8]
        30cbb4:	e5852008 	str	r2, [r5, #8]
        30cbb8:	eb6282b6 	bl	1bad698 <TAppWorld::$ForkConstructor(TForkWorld *)>
        30cbbc:	e3300000 	teq	r0, #0	; 0x0
        30cbc0:	1a000004 	bne	30cbd8 <TNewtWorld::ForkConstructor(TForkWorld *)+0x3c>
        30cbc4:	e1a00004 	mov	r0, r4
        30cbc8:	eb5d23b3 	bl	1a55a9c <$InitForkGlobalsForFrames(NewtGlobals *)>
        30cbcc:	e3300000 	teq	r0, #0	; 0x0
        30cbd0:	01a00004 	moveq	r0, r4
        30cbd4:	0b610b07 	bleq	1b4f7f8 <$InitForkGlobalsForQD(NewtGlobals *)>
        30cbd8:	e5a54008 	str	r4, [r5, #8]!
        30cbdc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        30cbe0:	0c1054a8 	ldceq	4, cr5, [r0], -#672
    */
}

/**
 * Symbol: TNewtWorld::ForkDestructor(void)
 * Address: 0030cbe4
 */
TNewtWorld::ForkDestructor(void) {
    /*
        30cbe4:	e1a0c00d 	mov	ip, sp
        30cbe8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        30cbec:	e24cb004 	sub	fp, ip, #4	; 0x4
        30cbf0:	e1a04000 	mov	r4, r0
        30cbf4:	eb627a7e 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
        30cbf8:	e284007c 	add	r0, r4, #124	; 0x7c
        30cbfc:	e1a05000 	mov	r5, r0
        30cc00:	eb5d174e 	bl	1a52940 <$DestroyForkGlobalsForFrames(NewtGlobals *)>
        30cc04:	e1a00005 	mov	r0, r5
        30cc08:	eb6102ae 	bl	1b4d6c8 <$DestroyForkGlobalsForQD(NewtGlobals *)>
        30cc0c:	e1a00004 	mov	r0, r4
        30cc10:	eb6286d2 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
        30cc14:	e1a00004 	mov	r0, r4
        30cc18:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        30cc1c:	ea62829f 	b	1bad6a0 <TAppWorld::$ForkDestructor(void)>
    */
}

/**
 * Symbol: TNewtWorld::ForkSwitch(unsigned char)
 * Address: 0030cc20
 */
TNewtWorld::ForkSwitch(unsigned char) {
    /*
        30cc20:	e21110ff 	ands	r1, r1, #255	; 0xff
        30cc24:	1280007c 	addne	r0, r0, #124	; 0x7c
        30cc28:	159f2008 	ldrne	r2, [pc, #8]	; 30cc38 <TNewtWorld::ForkSwitch(unsigned char)+0x18>
        30cc2c:	15a20008 	strne	r0, [r2, #8]!
        30cc30:	e1a00001 	mov	r0, r1
        30cc34:	ea5d2be9 	b	1a57be0 <$SwitchFramesForkGlobals(unsigned char)>
        30cc38:	0c1054a8 	ldceq	4, cr5, [r0], -#672
    */
}

/**
 * Symbol: TNewtWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0030cc3c
 */
TNewtWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        30cc3c:	e1a0c00d 	mov	ip, sp
        30cc40:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        30cc44:	e24cb004 	sub	fp, ip, #4	; 0x4
        30cc48:	e1a07000 	mov	r7, r0
        30cc4c:	e1a06001 	mov	r6, r1
        30cc50:	e1a05002 	mov	r5, r2
        30cc54:	e1a04003 	mov	r4, r3
        30cc58:	e3a08000 	mov	r8, #0	; 0x0
        30cc5c:	e59ba004 	ldr	sl, [fp, #4]
        30cc60:	eb63bc57 	bl	1bfbdc4 <$IncrementCurrentStackPos(void)>
        30cc64:	e59f0068 	ldr	r0, [pc, #68]	; 30ccd4 <TNewtWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x98>
        30cc68:	eb638acf 	bl	1bef7ac <$SetPort(GrafPort *)>
        30cc6c:	e1a09000 	mov	r9, r0
        30cc70:	e3a00000 	mov	r0, #0	; 0x0
        30cc74:	e52d006c 	str	r0, [sp, -#108]!
        30cc78:	e28d0008 	add	r0, sp, #8	; 0x8
        30cc7c:	eb62973c 	bl	1bb2974 <$setjmp>
        30cc80:	e3300000 	teq	r0, #0	; 0x0
        30cc84:	e1a0000d 	mov	r0, sp
        30cc88:	1a000012 	bne	30ccd8 <TNewtWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x9c>
        30cc8c:	eb634cfa 	bl	1be007c <$AddExceptionHandler>
        30cc90:	e3a00059 	mov	r0, #89	; 0x59
        30cc94:	e2400a02 	sub	r0, r0, #8192	; 0x2000
        30cc98:	eb5e5116 	bl	1aa10f8 <$SetActionDescription(long)>
        30cc9c:	e3a00036 	mov	r0, #54	; 0x36
        30cca0:	eb5edd57 	bl	1ac4204 <$BusyBoxSend(long)>
        30cca4:	e1a0300a 	mov	r3, sl
        30cca8:	e92d0008 	stmdb	sp!, {r3}
        30ccac:	e1a03004 	mov	r3, r4
        30ccb0:	e1a02005 	mov	r2, r5
        30ccb4:	e1a01006 	mov	r1, r6
        30ccb8:	e1a00007 	mov	r0, r7
        30ccbc:	eb636188 	bl	1be52e4 <TAppWorld::$AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)>
        30ccc0:	e28dd004 	add	sp, sp, #4	; 0x4
        30ccc4:	e1a08000 	mov	r8, r0
        30ccc8:	eb5f69c7 	bl	1ae73ec <$RunDelayedActionProcs(void)>
        30cccc:	eb60fa41 	bl	1b4b5d8 <$ReleaseScreenLock(void)>
        30ccd0:	ea000008 	b	30ccf8 <TNewtWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0xbc>
        30ccd4:	0c1067cc 	ldceq	7, cr6, [r0], -#816
        30ccd8:	e2800060 	add	r0, r0, #96	; 0x60
        30ccdc:	e1a04000 	mov	r4, r0
        30cce0:	eb639b2b 	bl	1bf3994 <$ExceptionNotify(Exception *)>
        30cce4:	e1a01004 	mov	r1, r4
        30cce8:	e59f0034 	ldr	r0, [pc, #34]	; 30cd24 <TNewtWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0xe8>
        30ccec:	e5900000 	ldr	r0, [r0]
        30ccf0:	eb01f47f 	bl	389ef4 <POutTranslator::ExceptionNotify(Exception *)>
        30ccf4:	eb5f69bb 	bl	1ae73e8 <$CheckForDeferredActions(void)>
        30ccf8:	e1a0000d 	mov	r0, sp
        30ccfc:	eb6350ed 	bl	1be10b8 <$ExitHandler>
        30cd00:	e28dd06c 	add	sp, sp, #108	; 0x6c
        30cd04:	e3a00035 	mov	r0, #53	; 0x35
        30cd08:	eb5edd3d 	bl	1ac4204 <$BusyBoxSend(long)>
        30cd0c:	e1a00009 	mov	r0, r9
        30cd10:	eb638aa5 	bl	1bef7ac <$SetPort(GrafPort *)>
        30cd14:	eb63bc2b 	bl	1bfbdc8 <$DecrementCurrentStackPos(void)>
        30cd18:	eb63bc2b 	bl	1bfbdcc <$ClearRefHandles(void)>
        30cd1c:	e1a00008 	mov	r0, r8
        30cd20:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        30cd24:	0c101820 	ldceq	8, cr1, [r0], -#128
    */
}

/**
 * Symbol: TNewtWorld::PreMain(void)
 * Address: 0030cd28
 */
TNewtWorld::PreMain(void) {
    /*
        30cd28:	e1a0c00d 	mov	ip, sp
        30cd2c:	e92ddff1 	stmdb	sp!, {r0, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        30cd30:	e24cb004 	sub	fp, ip, #4	; 0x4
        30cd34:	e24dd00c 	sub	sp, sp, #12	; 0xc
        30cd38:	e3a04000 	mov	r4, #0	; 0x0
        30cd3c:	e59f0244 	ldr	r0, [pc, #244]	; 30cf88 <TNewtWorld::PreMain(void)+0x260>
        30cd40:	e1a0a000 	mov	sl, r0
        30cd44:	eb5ed92c 	bl	1ac31fc <StrokeCentral::$BlockStrokes(void)>
        30cd48:	e59f023c 	ldr	r0, [pc, #23c]	; 30cf8c <TNewtWorld::PreMain(void)+0x264>
        30cd4c:	eb631b21 	bl	1bd39d8 <$GetGlobalTime>
        30cd50:	eb600ec1 	bl	1b1085c <$LoadHighROMFramesPackages(void)>
        30cd54:	eb62dd44 	bl	1bc426c <$GetStores(void)>
        30cd58:	eb62d4fb 	bl	1bc214c <$AllocateRefHandle(long)>
        30cd5c:	e1a06000 	mov	r6, r0
        30cd60:	e5900000 	ldr	r0, [r0]
        30cd64:	e3a07000 	mov	r7, #0	; 0x0
        30cd68:	e1a01007 	mov	r1, r7
        30cd6c:	eb62dd38 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        30cd70:	eb62d4f5 	bl	1bc214c <$AllocateRefHandle(long)>
        30cd74:	e58d0004 	str	r0, [sp, #4]
        30cd78:	e28d0004 	add	r0, sp, #4	; 0x4
        30cd7c:	e59f120c 	ldr	r1, [pc, #20c]	; 30cf90 <TNewtWorld::PreMain(void)+0x268>
        30cd80:	eb62e99b 	bl	1bc73f4 <$StoreGetSoup>
        30cd84:	eb62d4f0 	bl	1bc214c <$AllocateRefHandle(long)>
        30cd88:	e58d0000 	str	r0, [sp]
        30cd8c:	e1a0000d 	mov	r0, sp
        30cd90:	e59f21fc 	ldr	r2, [pc, #1fc]	; 30cf94 <TNewtWorld::PreMain(void)+0x26c>
        30cd94:	e59f11fc 	ldr	r1, [pc, #1fc]	; 30cf98 <TNewtWorld::PreMain(void)+0x270>
        30cd98:	eb62e98a 	bl	1bc73c8 <$SoupSetInfo__FRC6RefVarN21>
        30cd9c:	e59d0000 	ldr	r0, [sp]
        30cda0:	eb62d905 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30cda4:	e59d0004 	ldr	r0, [sp, #4]
        30cda8:	eb62d903 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30cdac:	e1a00006 	mov	r0, r6
        30cdb0:	eb62d901 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30cdb4:	e59f71e0 	ldr	r7, [pc, #1e0]	; 30cf9c <TNewtWorld::PreMain(void)+0x274>
        30cdb8:	e5970004 	ldr	r0, [r7, #4]
        30cdbc:	e5901000 	ldr	r1, [r0]
        30cdc0:	e1a0e00f 	mov	lr, pc
        30cdc4:	e281f018 	add	pc, r1, #24	; 0x18
        30cdc8:	e24dd010 	sub	sp, sp, #16	; 0x10
        30cdcc:	e28d0008 	add	r0, sp, #8	; 0x8
        30cdd0:	eb630240 	bl	1bcd6d8 <TUGestalt::$__ct(void)>
        30cdd4:	e1a0200d 	mov	r2, sp
        30cdd8:	e28d0008 	add	r0, sp, #8	; 0x8
        30cddc:	e3a03008 	mov	r3, #8	; 0x8
        30cde0:	e3a01401 	mov	r1, #16777216	; 0x1000000
        30cde4:	e2811004 	add	r1, r1, #4	; 0x4
        30cde8:	eb6316df 	bl	1bd296c <TUGestalt::$Gestalt(unsigned long, void *, unsigned long)>
        30cdec:	e1a08000 	mov	r8, r0
        30cdf0:	e3a06000 	mov	r6, #0	; 0x0
        30cdf4:	e59d0000 	ldr	r0, [sp]
        30cdf8:	e280cd9d 	add	ip, r0, #10048	; 0x2740
        30cdfc:	e37c0023 	cmn	ip, #35	; 0x23
        30ce00:	1a00000c 	bne	30ce38 <TNewtWorld::PreMain(void)+0x110>
        30ce04:	e3a06001 	mov	r6, #1	; 0x1
        30ce08:	e59f0190 	ldr	r0, [pc, #190]	; 30cfa0 <TNewtWorld::PreMain(void)+0x278>
        30ce0c:	eb5e273c 	bl	1a96b04 <$GetPreference(RefVar const &)>
        30ce10:	eb62d4cd 	bl	1bc214c <$AllocateRefHandle(long)>
        30ce14:	e1a05000 	mov	r5, r0
        30ce18:	e59f0184 	ldr	r0, [pc, #184]	; 30cfa4 <TNewtWorld::PreMain(void)+0x27c>
        30ce1c:	e5900000 	ldr	r0, [r0]
        30ce20:	e5901000 	ldr	r1, [r0]
        30ce24:	e5950000 	ldr	r0, [r5]
        30ce28:	eb62dd00 	bl	1bc4230 <$EQRef__FlT1>
        30ce2c:	e3300000 	teq	r0, #0	; 0x0
        30ce30:	13a09001 	movne	r9, #1	; 0x1
        30ce34:	1a000000 	bne	30ce3c <TNewtWorld::PreMain(void)+0x114>
        30ce38:	e3a09000 	mov	r9, #0	; 0x0
        30ce3c:	e3360000 	teq	r6, #0	; 0x0
        30ce40:	11a00005 	movne	r0, r5
        30ce44:	1b62d8dc 	blne	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30ce48:	e20900ff 	and	r0, r9, #255	; 0xff
        30ce4c:	e3380000 	teq	r8, #0	; 0x0
        30ce50:	1a000006 	bne	30ce70 <TNewtWorld::PreMain(void)+0x148>
        30ce54:	e59d1000 	ldr	r1, [sp]
        30ce58:	e3310000 	teq	r1, #0	; 0x0
        30ce5c:	0a000003 	beq	30ce70 <TNewtWorld::PreMain(void)+0x148>
        30ce60:	e3300000 	teq	r0, #0	; 0x0
        30ce64:	03a01003 	moveq	r1, #3	; 0x3
        30ce68:	059d0000 	ldreq	r0, [sp]
        30ce6c:	0b5e16bf 	bleq	1a92970 <$ErrorNotify__FlT1>
        30ce70:	ebf73272 	bl	d9840 <ResetRebootReason>
        30ce74:	e28d0008 	add	r0, sp, #8	; 0x8
        30ce78:	e3a01000 	mov	r1, #0	; 0x0
        30ce7c:	eb630628 	bl	1bce724 <TUObject::$__dt(void)>
        30ce80:	e3a06000 	mov	r6, #0	; 0x0
        30ce84:	e28dd010 	add	sp, sp, #16	; 0x10
        30ce88:	eb62dcf7 	bl	1bc426c <$GetStores(void)>
        30ce8c:	eb62d4ae 	bl	1bc214c <$AllocateRefHandle(long)>
        30ce90:	e1a05000 	mov	r5, r0
        30ce94:	e5900000 	ldr	r0, [r0]
        30ce98:	e1a01006 	mov	r1, r6
        30ce9c:	eb62dcec 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        30cea0:	eb62d4a9 	bl	1bc214c <$AllocateRefHandle(long)>
        30cea4:	e58d0008 	str	r0, [sp, #8]
        30cea8:	e28d1008 	add	r1, sp, #8	; 0x8
        30ceac:	e59f00f4 	ldr	r0, [pc, #f4]	; 30cfa8 <TNewtWorld::PreMain(void)+0x280>
        30ceb0:	eb63cc5a 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
        30ceb4:	e59d0008 	ldr	r0, [sp, #8]
        30ceb8:	eb62d8bf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30cebc:	e1a00005 	mov	r0, r5
        30cec0:	eb62d8bd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30cec4:	e597000c 	ldr	r0, [r7, #12]	; fField12
        30cec8:	eb5e4825 	bl	1a9ef64 <TNewtCardEventHandler::$ReadyToAcceptCardEvents(void)>
        30cecc:	e28f1f36 	add	r1, pc, #216	; 0xd8
        30ced0:	e28f0f36 	add	r0, pc, #216	; 0xd8
        30ced4:	eb638e62 	bl	1bf0864 <$fopen>
        30ced8:	e1b05000 	movs	r5, r0
        30cedc:	0a000053 	beq	30d030 <TNewtWorld::PreMain(void)+0x308>
        30cee0:	e1a00005 	mov	r0, r5
        30cee4:	eb638e64 	bl	1bf087c <$getc>
        30cee8:	e3700001 	cmn	r0, #1	; 0x1
        30ceec:	13300000 	teqne	r0, #0	; 0x0
        30cef0:	e1a00005 	mov	r0, r5
        30cef4:	0a00004a 	beq	30d024 <TNewtWorld::PreMain(void)+0x2fc>
        30cef8:	eb638e55 	bl	1bf0854 <$fclose>
        30cefc:	e59f20bc 	ldr	r2, [pc, #bc]	; 30cfc0 <TNewtWorld::PreMain(void)+0x298>
        30cf00:	e1a04002 	mov	r4, r2
        30cf04:	e28f1f2e 	add	r1, pc, #184	; 0xb8
        30cf08:	e28f0f2e 	add	r0, pc, #184	; 0xb8
        30cf0c:	eb010cdc 	bl	350284 <freopen>
        30cf10:	e59f10bc 	ldr	r1, [pc, #bc]	; 30cfd4 <TNewtWorld::PreMain(void)+0x2ac>
        30cf14:	e1a00004 	mov	r0, r4
        30cf18:	e3a03010 	mov	r3, #16	; 0x10
        30cf1c:	e3a02c02 	mov	r2, #512	; 0x200
        30cf20:	eb639258 	bl	1bf1888 <$setvbuf>
        30cf24:	e28f1f2b 	add	r1, pc, #172	; 0xac
        30cf28:	e28f0f30 	add	r0, pc, #192	; 0xc0
        30cf2c:	eb632b16 	bl	1bd7b8c <$NewByName__FPCcT1>
        30cf30:	e59f50c8 	ldr	r5, [pc, #c8]	; 30d000 <TNewtWorld::PreMain(void)+0x2d8>
        30cf34:	e5850000 	str	r0, [r5]
        30cf38:	e59f10c4 	ldr	r1, [pc, #c4]	; 30d004 <TNewtWorld::PreMain(void)+0x2dc>
        30cf3c:	eb634c29 	bl	1bdffe8 <$SetPtrName>
        30cf40:	e28f0f30 	add	r0, pc, #192	; 0xc0
        30cf44:	e52d0008 	str	r0, [sp, -#8]!
        30cf48:	e3a00010 	mov	r0, #16	; 0x10
        30cf4c:	e58d0004 	str	r0, [sp, #4]
        30cf50:	e1a0100d 	mov	r1, sp
        30cf54:	e5950000 	ldr	r0, [r5]
        30cf58:	eb626908 	bl	1ba7380 <POutTranslator::$Init(void *)>
        30cf5c:	e1a04000 	mov	r4, r0
        30cf60:	e59f00b4 	ldr	r0, [pc, #b4]	; 30d01c <TNewtWorld::PreMain(void)+0x2f4>
        30cf64:	e5901000 	ldr	r1, [r0]
        30cf68:	e59f20b0 	ldr	r2, [pc, #b0]	; 30d020 <TNewtWorld::PreMain(void)+0x2f8>
        30cf6c:	e5821000 	str	r1, [r2]
        30cf70:	e5951000 	ldr	r1, [r5]
        30cf74:	e5801000 	str	r1, [r0]
        30cf78:	e28f0f0c 	add	r0, pc, #48	; 0x30
        30cf7c:	eb62e0dd 	bl	1bc52f8 <$ParseFile(char *)>
        30cf80:	e28dd008 	add	sp, sp, #8	; 0x8
        30cf84:	ea000027 	b	30d028 <TNewtWorld::PreMain(void)+0x300>
        30cf88:	0c1018cc 	ldceq	8, cr1, [r0], -#816
        30cf8c:	0c104c4c 	ldceq	12, cr4, [r0], -#304
        30cf90:	00681580 	rsbeq	r1, r8, r0, lsl #11
        30cf94:	00683218 	rsbeq	r3, r8, r8, lsl r2
        30cf98:	00682d20 	rsbeq	r2, r8, r0, lsr #26
        30cf9c:	0c1054a8 	ldceq	4, cr5, [r0], -#672
        30cfa0:	006820e8 	rsbeq	r2, r8, r8, ror #1
        30cfa4:	006845d8 	ldreqd	r4, [r8], -#88
        30cfa8:	00681d60 	rsbeq	r1, r8, r0, ror #26
        30cfac:	72000000 	andvc	r0, r0, #0	; 0x0
        30cfb0:	626f6f74 	rsbvs	r6, pc, #464	; 0x1d0
        30cfb4:	54657374 	strplbt	r7, [r5], -#884
        30cfb8:	53637269 	cmnpl	r3, #-1879048186	; 0x90000006
        30cfbc:	70740000 	rsbvcs	r0, r4, r0
        30cfc0:	0c105744 	ldceq	7, cr5, [r0], -#272
        30cfc4:	77000000 	strvc	r0, [r0, -r0]
        30cfc8:	626f6f74 	rsbvs	r6, pc, #464	; 0x1d0
        30cfcc:	434f7574 	cmpmi	pc, #486539264	; 0x1d000000
        30cfd0:	70757400 	rsbvcs	r7, r5, r0, lsl #8
        30cfd4:	0c107bb4 	ldceq	11, cr7, [r0], -#720
        30cfd8:	5048616d 	subpl	r6, r8, sp, ror #2
        30cfdc:	6d65724f 	sfmvs	f7, 2, [r5, -#316]!
        30cfe0:	75745472 	ldrvcb	r5, [r4, -#1138]!	; fField1138
        30cfe4:	616e736c 	cmnvs	lr, ip, ror #6
        30cfe8:	61746f72 	cmnvs	r4, r2, ror pc
        30cfec:	00000000 	andeq	r0, r0, r0
        30cff0:	504f7574 	subpl	r7, pc, r4, ror r5
        30cff4:	5472616e 	ldrplbt	r6, [r2], -#366
        30cff8:	736c6174 	cmnvc	ip, #29	; 0x1d
        30cffc:	6f720000 	swivs	0x00720000
        30d000:	0c105514 	ldceq	5, cr5, [r0], -#80
        30d004:	626f6f74 	rsbvs	r6, pc, #464	; 0x1d0
        30d008:	626f6f74 	rsbvs	r6, pc, #464	; 0x1d0
        30d00c:	53637269 	cmnpl	r3, #-1879048186	; 0x90000006
        30d010:	70744f75 	rsbvcs	r4, r4, r5, ror pc
        30d014:	74707574 	ldrvcbt	r7, [r0], -#1396
        30d018:	00000000 	andeq	r0, r0, r0
        30d01c:	0c101820 	ldceq	8, cr1, [r0], -#128
        30d020:	0c105518 	ldceq	5, cr5, [r0], -#96
        30d024:	eb638e0a 	bl	1bf0854 <$fclose>
        30d028:	e3340000 	teq	r4, #0	; 0x0
        30d02c:	1a000017 	bne	30d090 <TNewtWorld::PreMain(void)+0x368>
        30d030:	e24dd034 	sub	sp, sp, #52	; 0x34
        30d034:	e59f107c 	ldr	r1, [pc, #7c]	; 30d0b8 <TNewtWorld::PreMain(void)+0x390>
        30d038:	e28d000c 	add	r0, sp, #12	; 0xc
        30d03c:	eb630190 	bl	1bcd684 <TSystemEvent::$__ct(unsigned long)>
        30d040:	e5cd601c 	strb	r6, [sp, #28]
        30d044:	e58d6018 	str	r6, [sp, #24]	; fField24
        30d048:	e28d0020 	add	r0, sp, #32	; 0x20
        30d04c:	eb602298 	bl	1b15ab4 <TSysEventRequest::$__ct(void)>
        30d050:	e1a0000d 	mov	r0, sp
        30d054:	e59f105c 	ldr	r1, [pc, #5c]	; 30d0b8 <TNewtWorld::PreMain(void)+0x390>
        30d058:	eb628df3 	bl	1bb082c <TAESystemEvent::$__ct(unsigned long)>
        30d05c:	e28d000c 	add	r0, sp, #12	; 0xc
        30d060:	eb632290 	bl	1bd5aa8 <TSendSystemEvent::$Init(void)>
        30d064:	e1a0100d 	mov	r1, sp
        30d068:	e28d000c 	add	r0, sp, #12	; 0xc
        30d06c:	e3a0200c 	mov	r2, #12	; 0xc
        30d070:	eb633737 	bl	1bdad54 <TSendSystemEvent::$SendSystemEvent(void *, unsigned long)>
        30d074:	e28d0018 	add	r0, sp, #24	; 0x18
        30d078:	e3a01000 	mov	r1, #0	; 0x0
        30d07c:	eb6305a8 	bl	1bce724 <TUObject::$__dt(void)>
        30d080:	e28d000c 	add	r0, sp, #12	; 0xc
        30d084:	e3a01000 	mov	r1, #0	; 0x0
        30d088:	eb6305a5 	bl	1bce724 <TUObject::$__dt(void)>
        30d08c:	e28dd034 	add	sp, sp, #52	; 0x34
        30d090:	e3a00001 	mov	r0, #1	; 0x1
        30d094:	e5a70068 	str	r0, [r7, #104]!
        30d098:	e1a0000a 	mov	r0, sl
        30d09c:	eb5ef51f 	bl	1aca520 <StrokeCentral::$UnblockStrokes(void)>
        30d0a0:	e51b002c 	ldr	r0, [fp, -#44]
        30d0a4:	e5900078 	ldr	r0, [r0, #120]	; fField120
        30d0a8:	e3a01001 	mov	r1, #1	; 0x1
        30d0ac:	eb5f68d2 	bl	1ae73fc <TNewtEventHandler::$SetWakeupTime(unsigned long)>
        30d0b0:	e1a00004 	mov	r0, r4
        30d0b4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        30d0b8:	616c6976 	cmnvs	ip, r6, ror r9
    */
}

/**
 * Symbol: TNewtWorld::MainConstructor(void)
 * Address: 0030d20c
 */
TNewtWorld::MainConstructor(void) {
    /*
        30d20c:	e1a0c00d 	mov	ip, sp
        30d210:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        30d214:	e24cb004 	sub	fp, ip, #4	; 0x4
        30d218:	e1a04000 	mov	r4, r0
        30d21c:	e280007c 	add	r0, r0, #124	; 0x7c
        30d220:	e59f62c0 	ldr	r6, [pc, #2c0]	; 30d4e8 <TNewtWorld::MainConstructor(void)+0x2dc>
        30d224:	e5860008 	str	r0, [r6, #8]
        30d228:	e1a00004 	mov	r0, r4
        30d22c:	eb628132 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
        30d230:	e3300000 	teq	r0, #0	; 0x0
        30d234:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        30d238:	e3a00008 	mov	r0, #8	; 0x8
        30d23c:	eb63053d 	bl	1bce738 <$__nw(unsigned int)>
        30d240:	e3a05000 	mov	r5, #0	; 0x0
        30d244:	e3500000 	cmp	r0, #0	; 0x0
        30d248:	15c05004 	strneb	r5, [r0, #4]
        30d24c:	15805000 	strne	r5, [r0]
        30d250:	e5840070 	str	r0, [r4, #112]	; fField112
        30d254:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
        30d258:	0a6353b0 	beq	1be2120 <$MemError>
        30d25c:	e5845074 	str	r5, [r4, #116]	; fField116
        30d260:	eb63220c 	bl	1bd5a98 <TUSharedMemMsg::$Init(void)>
        30d264:	e3300000 	teq	r0, #0	; 0x0
        30d268:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        30d26c:	e59f0278 	ldr	r0, [pc, #278]	; 30d4ec <TNewtWorld::MainConstructor(void)+0x2e0>
        30d270:	eb63f4b5 	bl	1c0a54c <$NewName__15TURealTimeAlarmSFPUl>
        30d274:	eb625be9 	bl	1ba4220 <$InitializeCompression(void)>
        30d278:	eb5ccb62 	bl	1a40008 <$InitObjects(void)>
        30d27c:	eb62643e 	bl	1ba637c <$InitTranslators(void)>
        30d280:	eb5eec67 	bl	1ac8424 <$NTKInit(void)>
        30d284:	eb5ee852 	bl	1ac73d4 <$InitREPIn(void)>
        30d288:	e59f1260 	ldr	r1, [pc, #260]	; 30d4f0 <TNewtWorld::MainConstructor(void)+0x2e4>
        30d28c:	e5810000 	str	r0, [r1]
        30d290:	eb5ee850 	bl	1ac73d8 <$InitREPOut(void)>
        30d294:	e59f1258 	ldr	r1, [pc, #258]	; 30d4f4 <TNewtWorld::MainConstructor(void)+0x2e8>
        30d298:	e5810000 	str	r0, [r1]
        30d29c:	eb5f5bed 	bl	1ae4258 <$ResetREPIdler(void)>
        30d2a0:	eb62e424 	bl	1bc6338 <$REPInit(void)>
        30d2a4:	eb625bdf 	bl	1ba4228 <$InitUnicode(void)>
        30d2a8:	eb5ccb51 	bl	1a3fff4 <$InitExternal(void)>
        30d2ac:	eb610d53 	bl	1b50800 <$InitGraf(void)>
        30d2b0:	eb61094f 	bl	1b4f7f4 <$InitFonts(void)>
        30d2b4:	e1a00004 	mov	r0, r4
        30d2b8:	eb636c5f 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        30d2bc:	e5860000 	str	r0, [r6]
        30d2c0:	e3a00000 	mov	r0, #0	; 0x0
        30d2c4:	eb5f6846 	bl	1ae73e4 <TNewtEventHandler::$__ct(void)>
        30d2c8:	e5840078 	str	r0, [r4, #120]	; fField120
        30d2cc:	e59f2224 	ldr	r2, [pc, #224]	; 30d4f8 <TNewtWorld::MainConstructor(void)+0x2ec>
        30d2d0:	e59f1224 	ldr	r1, [pc, #224]	; 30d4fc <TNewtWorld::MainConstructor(void)+0x2f0>
        30d2d4:	eb637075 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        30d2d8:	e3a03000 	mov	r3, #0	; 0x0
        30d2dc:	e3a02000 	mov	r2, #0	; 0x0
        30d2e0:	e3a01000 	mov	r1, #0	; 0x0
        30d2e4:	e5b40078 	ldr	r0, [r4, #120]!	; fField120
        30d2e8:	eb6280f9 	bl	1bad6d4 <TAEventHandler::$InitIdler(unsigned long, unsigned long, unsigned char)>
        30d2ec:	e3a0003c 	mov	r0, #60	; 0x3c
        30d2f0:	eb5df06c 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        30d2f4:	e1b04000 	movs	r4, r0
        30d2f8:	0a00001d 	beq	30d374 <TNewtWorld::MainConstructor(void)+0x168>
        30d2fc:	e59f01fc 	ldr	r0, [pc, #1fc]	; 30d500 <TNewtWorld::MainConstructor(void)+0x2f4>
        30d300:	e5840000 	str	r0, [r4]
        30d304:	e3a00002 	mov	r0, #2	; 0x2
        30d308:	eb62d38f 	bl	1bc214c <$AllocateRefHandle(long)>
        30d30c:	e584000c 	str	r0, [r4, #12]	; fField12
        30d310:	e5a05004 	str	r5, [r0, #4]!
        30d314:	e3a00002 	mov	r0, #2	; 0x2
        30d318:	eb62d38b 	bl	1bc214c <$AllocateRefHandle(long)>
        30d31c:	e5840010 	str	r0, [r4, #16]	; fField16
        30d320:	e5a05004 	str	r5, [r0, #4]!
        30d324:	e3a00002 	mov	r0, #2	; 0x2
        30d328:	eb62d387 	bl	1bc214c <$AllocateRefHandle(long)>
        30d32c:	e5840018 	str	r0, [r4, #24]	; fField24
        30d330:	e5a05004 	str	r5, [r0, #4]!
        30d334:	e2840020 	add	r0, r4, #32	; 0x20
        30d338:	eb635bbe 	bl	1be4238 <TAEvent::$__ct(void)>
        30d33c:	e3a00002 	mov	r0, #2	; 0x2
        30d340:	eb62d381 	bl	1bc214c <$AllocateRefHandle(long)>
        30d344:	e5840030 	str	r0, [r4, #48]	; fField48
        30d348:	e5a05004 	str	r5, [r0, #4]!
        30d34c:	e3a00002 	mov	r0, #2	; 0x2
        30d350:	eb62d37d 	bl	1bc214c <$AllocateRefHandle(long)>
        30d354:	e5840034 	str	r0, [r4, #52]	; fField52
        30d358:	e5a05004 	str	r5, [r0, #4]!
        30d35c:	e3a00002 	mov	r0, #2	; 0x2
        30d360:	eb62d379 	bl	1bc214c <$AllocateRefHandle(long)>
        30d364:	e5840038 	str	r0, [r4, #56]	; fField56
        30d368:	e5a05004 	str	r5, [r0, #4]!
        30d36c:	e59f0190 	ldr	r0, [pc, #190]	; 30d504 <TNewtWorld::MainConstructor(void)+0x2f8>
        30d370:	e5840000 	str	r0, [r4]
        30d374:	e5a64004 	str	r4, [r6, #4]!
        30d378:	e1a00004 	mov	r0, r4
        30d37c:	e5941000 	ldr	r1, [r4]
        30d380:	e1a0e00f 	mov	lr, pc
        30d384:	e281f014 	add	pc, r1, #20	; 0x14
        30d388:	e3a0003c 	mov	r0, #60	; 0x3c
        30d38c:	eb6304e9 	bl	1bce738 <$__nw(unsigned int)>
        30d390:	e1b04000 	movs	r4, r0
        30d394:	0a000003 	beq	30d3a8 <TNewtWorld::MainConstructor(void)+0x19c>
        30d398:	e1a00004 	mov	r0, r4
        30d39c:	eb6300b7 	bl	1bcd680 <TPartHandler::$__ct(void)>
        30d3a0:	e59f0160 	ldr	r0, [pc, #160]	; 30d508 <TNewtWorld::MainConstructor(void)+0x2fc>
        30d3a4:	e5840000 	str	r0, [r4]
        30d3a8:	e1a00004 	mov	r0, r4
        30d3ac:	e59f1158 	ldr	r1, [pc, #158]	; 30d50c <TNewtWorld::MainConstructor(void)+0x300>
        30d3b0:	eb6321b2 	bl	1bd5a80 <TPartHandler::$Init(unsigned long)>
        30d3b4:	e3a00038 	mov	r0, #56	; 0x38
        30d3b8:	eb6304de 	bl	1bce738 <$__nw(unsigned int)>
        30d3bc:	e1b04000 	movs	r4, r0
        30d3c0:	0a000003 	beq	30d3d4 <TNewtWorld::MainConstructor(void)+0x1c8>
        30d3c4:	e1a00004 	mov	r0, r4
        30d3c8:	eb6300ac 	bl	1bcd680 <TPartHandler::$__ct(void)>
        30d3cc:	e59f013c 	ldr	r0, [pc, #13c]	; 30d510 <TNewtWorld::MainConstructor(void)+0x304>
        30d3d0:	e5840000 	str	r0, [r4]
        30d3d4:	e1a00004 	mov	r0, r4
        30d3d8:	e59f1134 	ldr	r1, [pc, #134]	; 30d514 <TNewtWorld::MainConstructor(void)+0x308>
        30d3dc:	eb6321a7 	bl	1bd5a80 <TPartHandler::$Init(unsigned long)>
        30d3e0:	e3a00038 	mov	r0, #56	; 0x38
        30d3e4:	eb6304d3 	bl	1bce738 <$__nw(unsigned int)>
        30d3e8:	e1b04000 	movs	r4, r0
        30d3ec:	0a000003 	beq	30d400 <TNewtWorld::MainConstructor(void)+0x1f4>
        30d3f0:	e1a00004 	mov	r0, r4
        30d3f4:	eb6300a1 	bl	1bcd680 <TPartHandler::$__ct(void)>
        30d3f8:	e59f0118 	ldr	r0, [pc, #118]	; 30d518 <TNewtWorld::MainConstructor(void)+0x30c>
        30d3fc:	e5840000 	str	r0, [r4]
        30d400:	e1a00004 	mov	r0, r4
        30d404:	e59f1110 	ldr	r1, [pc, #110]	; 30d51c <TNewtWorld::MainConstructor(void)+0x310>
        30d408:	eb63219c 	bl	1bd5a80 <TPartHandler::$Init(unsigned long)>
        30d40c:	e3a0003c 	mov	r0, #60	; 0x3c
        30d410:	eb6304c8 	bl	1bce738 <$__nw(unsigned int)>
        30d414:	e1b04000 	movs	r4, r0
        30d418:	e59f6100 	ldr	r6, [pc, #100]	; 30d520 <TNewtWorld::MainConstructor(void)+0x314>
        30d41c:	0a000002 	beq	30d42c <TNewtWorld::MainConstructor(void)+0x220>
        30d420:	e1a00004 	mov	r0, r4
        30d424:	eb630095 	bl	1bcd680 <TPartHandler::$__ct(void)>
        30d428:	e5846000 	str	r6, [r4]
        30d42c:	e1a00004 	mov	r0, r4
        30d430:	e59f10ec 	ldr	r1, [pc, #ec]	; 30d524 <TNewtWorld::MainConstructor(void)+0x318>
        30d434:	eb632191 	bl	1bd5a80 <TPartHandler::$Init(unsigned long)>
        30d438:	e3a0003c 	mov	r0, #60	; 0x3c
        30d43c:	eb6304bd 	bl	1bce738 <$__nw(unsigned int)>
        30d440:	e1b04000 	movs	r4, r0
        30d444:	0a000003 	beq	30d458 <TNewtWorld::MainConstructor(void)+0x24c>
        30d448:	e1a00004 	mov	r0, r4
        30d44c:	eb63008b 	bl	1bcd680 <TPartHandler::$__ct(void)>
        30d450:	e59f00d0 	ldr	r0, [pc, #d0]	; 30d528 <TNewtWorld::MainConstructor(void)+0x31c>
        30d454:	e5840000 	str	r0, [r4]
        30d458:	e1a00004 	mov	r0, r4
        30d45c:	e59f10c8 	ldr	r1, [pc, #c8]	; 30d52c <TNewtWorld::MainConstructor(void)+0x320>
        30d460:	eb632186 	bl	1bd5a80 <TPartHandler::$Init(unsigned long)>
        30d464:	eb5e29c8 	bl	1a97b8c <$HandleCardEvents(void)>
        30d468:	eb61d755 	bl	1b831c4 <$HandleTestAgentEvent(void)>
        30d46c:	e24dd004 	sub	sp, sp, #4	; 0x4
        30d470:	e3a00002 	mov	r0, #2	; 0x2
        30d474:	eb62d334 	bl	1bc214c <$AllocateRefHandle(long)>
        30d478:	e58d0000 	str	r0, [sp]
        30d47c:	e1a0000d 	mov	r0, sp
        30d480:	eb5f2dea 	bl	1ad8c30 <$FMinimumBatteryCheck>
        30d484:	e59d0000 	ldr	r0, [sp]
        30d488:	eb62d74b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30d48c:	e28dd004 	add	sp, sp, #4	; 0x4
        30d490:	e59f0098 	ldr	r0, [pc, #98]	; 30d530 <TNewtWorld::MainConstructor(void)+0x324>
        30d494:	eb5e259a 	bl	1a96b04 <$GetPreference(RefVar const &)>
        30d498:	eb62d32b 	bl	1bc214c <$AllocateRefHandle(long)>
        30d49c:	e1a04000 	mov	r4, r0
        30d4a0:	e59f008c 	ldr	r0, [pc, #8c]	; 30d534 <TNewtWorld::MainConstructor(void)+0x328>
        30d4a4:	e5900000 	ldr	r0, [r0]
        30d4a8:	e5901000 	ldr	r1, [r0]
        30d4ac:	e5940000 	ldr	r0, [r4]
        30d4b0:	eb62db5e 	bl	1bc4230 <$EQRef__FlT1>
        30d4b4:	e3300000 	teq	r0, #0	; 0x0
        30d4b8:	13a06000 	movne	r6, #0	; 0x0
        30d4bc:	03a06001 	moveq	r6, #1	; 0x1
        30d4c0:	e1a00004 	mov	r0, r4
        30d4c4:	eb62d73c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        30d4c8:	e3360000 	teq	r6, #0	; 0x0
        30d4cc:	1b5e3629 	blne	1a9ad78 <$LoadInkerCalibration(void)>
        30d4d0:	eb5f006b 	bl	1acd684 <$AllocateEarlyStuff(void)>
        30d4d4:	e3a01000 	mov	r1, #0	; 0x0
        30d4d8:	e3a00000 	mov	r0, #0	; 0x0
        30d4dc:	eb60fc4d 	bl	1b4c618 <$StartDrawing(PixelMap *, Rect *)>
        30d4e0:	e1a00005 	mov	r0, r5
        30d4e4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        30d4e8:	0c1054a8 	ldceq	4, cr5, [r0], -#672
        30d4ec:	0c10551c 	ldceq	5, cr5, [r0], -#112	; fField112
        30d4f0:	0c10181c 	ldceq	8, cr1, [r0], -#112	; fField112
        30d4f4:	0c101820 	ldceq	8, cr1, [r0], -#128
        30d4f8:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        30d4fc:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        30d500:	0001add4 	ldreqd	sl, [r1], -r4
        30d504:	0001b964 	andeq	fp, r1, r4, ror #18
        30d508:	0001e508 	andeq	lr, r1, r8, lsl #10
        30d50c:	666f726d 	strvsbt	r7, [pc], -sp, ror #4
        30d510:	0001e3ec 	andeq	lr, r1, ip, ror #7
        30d514:	626f6f6b 	rsbvs	r6, pc, #428	; 0x1ac
        30d518:	0001e4a4 	andeq	lr, r1, r4, lsr #9
        30d51c:	64696374 	strvsbt	r6, [r9], -#884
        30d520:	0001f1bc 	streqh	pc, [r1], -ip
        30d524:	6175746f 	cmnvs	r5, pc, ror #8
        30d528:	0001e468 	andeq	lr, r1, r8, ror #8
        30d52c:	636f6d6d 	cmnvs	pc, #6976	; 0x1b40
        30d530:	006820e8 	rsbeq	r2, r8, r8, ror #1
        30d534:	006845d8 	ldreqd	r4, [r8], -#88
    */
}

