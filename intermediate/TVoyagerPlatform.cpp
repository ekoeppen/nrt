#include "include/TVoyagerPlatform.h"

/**
 * Symbol: Sizeof__16TVoyagerPlatformSFv
 * Address: 0026c810
 */
void TVoyagerPlatform::Sizeof() {
    /*
        26c810:	e3a00f41 	mov	r0, #260	; 0x104
        26c814:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TVoyagerPlatform::New(void)
 * Address: 0026c818
 */
TVoyagerPlatform::New(void) {
    /*
        26c818:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TVoyagerPlatform::PauseSystem(void)
 * Address: 0026c81c
 */
TVoyagerPlatform::PauseSystem(void) {
    /*
        26c81c:	e3a02811 	mov	r2, #1114112	; 0x110000
        26c820:	e282240f 	add	r2, r2, #251658240	; 0xf000000
        26c824:	e5920000 	ldr	r0, [r2]
        26c828:	e3c01001 	bic	r1, r0, #1	; 0x1
        26c82c:	e5821000 	str	r1, [r2]
        26c830:	e59f1028 	ldr	r1, [pc, #28]	; 26c860 <TVoyagerPlatform::PauseSystem(void)+0x44>	; fField28
        26c834:	e5911000 	ldr	r1, [r1]
        26c838:	e3110001 	tst	r1, #1	; 0x1
        26c83c:	1a000004 	bne	26c854 <TVoyagerPlatform::PauseSystem(void)+0x38>
        26c840:	e3a01b41 	mov	r1, #66560	; 0x10400
        26c844:	e28116f1 	add	r1, r1, #252706816	; 0xf100000
        26c848:	e5913000 	ldr	r3, [r1]
        26c84c:	e3833001 	orr	r3, r3, #1	; 0x1
        26c850:	e5813000 	str	r3, [r1]
        26c854:	e5820000 	str	r0, [r2]
        26c858:	e3a00000 	mov	r0, #0	; 0x0
        26c85c:	e1a0f00e 	mov	pc, lr
        26c860:	000013f4 	streqd	r1, [r0], -r4
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOffSystem(void)
 * Address: 0026c864
 */
TVoyagerPlatform::PowerOffSystem(void) {
    /*
        26c864:	e1a0c00d 	mov	ip, sp
        26c868:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26c86c:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c870:	e1a04000 	mov	r4, r0
        26c874:	e3a00001 	mov	r0, #1	; 0x1
        26c878:	e5c40036 	strb	r0, [r4, #54]	; fField54
        26c87c:	eb5e5e68 	bl	1a04224 <$DebuggerPowerCycleProc>
        26c880:	ebf6b1b0 	bl	18f48 <SaveCPUStateAndStopSystem>
        26c884:	e3a00000 	mov	r0, #0	; 0x0
        26c888:	eb5e5e65 	bl	1a04224 <$DebuggerPowerCycleProc>
        26c88c:	e3a00000 	mov	r0, #0	; 0x0
        26c890:	e5c40036 	strb	r0, [r4, #54]	; fField54
        26c894:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOnSystem(void)
 * Address: 0026c898
 */
TVoyagerPlatform::PowerOnSystem(void) {
    /*
        26c898:	e1a0c00d 	mov	ip, sp
        26c89c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        26c8a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c8a4:	e1a04000 	mov	r4, r0
        26c8a8:	e3a05000 	mov	r5, #0	; 0x0
        26c8ac:	e3a0001f 	mov	r0, #31	; 0x1f
        26c8b0:	eb667b4e 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
        26c8b4:	e3a00020 	mov	r0, #32	; 0x20
        26c8b8:	eb667b4c 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
        26c8bc:	e3a0001c 	mov	r0, #28	; 0x1c
        26c8c0:	eb667b4a 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
        26c8c4:	e3a00a83 	mov	r0, #536576	; 0x83000
        26c8c8:	e28006f1 	add	r0, r0, #252706816	; 0xf100000
        26c8cc:	e5901000 	ldr	r1, [r0]
        26c8d0:	e59f00c8 	ldr	r0, [pc, #c8]	; 26c9a0 <TVoyagerPlatform::PowerOnSystem(void)+0x108>
        26c8d4:	e5900000 	ldr	r0, [r0]
        26c8d8:	e0019000 	and	r9, r1, r0
        26c8dc:	e3a08000 	mov	r8, #0	; 0x0
        26c8e0:	e3a00963 	mov	r0, #1622016	; 0x18c000
        26c8e4:	e280040f 	add	r0, r0, #251658240	; 0xf000000
        26c8e8:	e5848038 	str	r8, [r4, #56]	; fField56
        26c8ec:	e5906000 	ldr	r6, [r0]
        26c8f0:	e219a401 	ands	sl, r9, #16777216	; 0x1000000
        26c8f4:	0a000015 	beq	26c950 <TVoyagerPlatform::PowerOnSystem(void)+0xb8>
        26c8f8:	e5940044 	ldr	r0, [r4, #68]	; fField68
        26c8fc:	e1100006 	tst	r0, r6
        26c900:	0a000004 	beq	26c918 <TVoyagerPlatform::PowerOnSystem(void)+0x80>
        26c904:	ebf73aba 	bl	3b3f4 <SleepChargeSupported(void)>
        26c908:	e3300000 	teq	r0, #0	; 0x0
        26c90c:	03a00008 	moveq	r0, #8	; 0x8
        26c910:	05840038 	streq	r0, [r4, #56]	; fField56
        26c914:	13a05401 	movne	r5, #16777216	; 0x1000000
        26c918:	e5940040 	ldr	r0, [r4, #64]	; fField64
        26c91c:	e1100006 	tst	r0, r6
        26c920:	13a00001 	movne	r0, #1	; 0x1
        26c924:	15c40035 	strneb	r0, [r4, #53]	; fField53
        26c928:	13a00004 	movne	r0, #4	; 0x4
        26c92c:	1a000006 	bne	26c94c <TVoyagerPlatform::PowerOnSystem(void)+0xb4>
        26c930:	e5940048 	ldr	r0, [r4, #72]	; fField72
        26c934:	e1100006 	tst	r0, r6
        26c938:	e3a00005 	mov	r0, #5	; 0x5
        26c93c:	0594104c 	ldreq	r1, [r4, #76]	; fField76
        26c940:	00011006 	andeq	r1, r1, r6
        26c944:	03310000 	teqeq	r1, #0	; 0x0
        26c948:	0a000000 	beq	26c950 <TVoyagerPlatform::PowerOnSystem(void)+0xb8>
        26c94c:	e5840038 	str	r0, [r4, #56]	; fField56
        26c950:	e3a0100f 	mov	r1, #15	; 0xf
        26c954:	e5940014 	ldr	r0, [r4, #20]	; fField20
        26c958:	eb600358 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
        26c95c:	e1a07000 	mov	r7, r0
        26c960:	e2199902 	ands	r9, r9, #32768	; 0x8000
        26c964:	e584803c 	str	r8, [r4, #60]	; fField60
        26c968:	0a00000e 	beq	26c9a8 <TVoyagerPlatform::PowerOnSystem(void)+0x110>
        26c96c:	e5940050 	ldr	r0, [r4, #80]	; fField80
        26c970:	e1100007 	tst	r0, r7
        26c974:	13a00007 	movne	r0, #7	; 0x7
        26c978:	1a000006 	bne	26c998 <TVoyagerPlatform::PowerOnSystem(void)+0x100>
        26c97c:	e5940054 	ldr	r0, [r4, #84]	; fField84
        26c980:	e1100007 	tst	r0, r7
        26c984:	0a000006 	beq	26c9a4 <TVoyagerPlatform::PowerOnSystem(void)+0x10c>
        26c988:	ebf73a99 	bl	3b3f4 <SleepChargeSupported(void)>
        26c98c:	e3300000 	teq	r0, #0	; 0x0
        26c990:	1a000003 	bne	26c9a4 <TVoyagerPlatform::PowerOnSystem(void)+0x10c>
        26c994:	e3a00009 	mov	r0, #9	; 0x9
        26c998:	e584003c 	str	r0, [r4, #60]	; fField60
        26c99c:	ea000001 	b	26c9a8 <TVoyagerPlatform::PowerOnSystem(void)+0x110>
        26c9a0:	0f184800 	swieq	0x00184800
        26c9a4:	e3855902 	orr	r5, r5, #32768	; 0x8000
        26c9a8:	e3150401 	tst	r5, #16777216	; 0x1000000
        26c9ac:	1a000004 	bne	26c9c4 <TVoyagerPlatform::PowerOnSystem(void)+0x12c>
        26c9b0:	e33a0000 	teq	sl, #0	; 0x0
        26c9b4:	0a000009 	beq	26c9e0 <TVoyagerPlatform::PowerOnSystem(void)+0x148>
        26c9b8:	e5940038 	ldr	r0, [r4, #56]	; fField56
        26c9bc:	e3300000 	teq	r0, #0	; 0x0
        26c9c0:	1a000006 	bne	26c9e0 <TVoyagerPlatform::PowerOnSystem(void)+0x148>
        26c9c4:	e59f0068 	ldr	r0, [pc, #68]	; 26ca34 <TVoyagerPlatform::PowerOnSystem(void)+0x19c>	; fField68
        26c9c8:	e5900000 	ldr	r0, [r0]
        26c9cc:	e1c60000 	bic	r0, r6, r0
        26c9d0:	e1a00800 	mov	r0, r0, lsl #16
        26c9d4:	e1b00820 	movs	r0, r0, lsr #16
        26c9d8:	159f1058 	ldrne	r1, [pc, #58]	; 26ca38 <TVoyagerPlatform::PowerOnSystem(void)+0x1a0>
        26c9dc:	15810000 	strne	r0, [r1]
        26c9e0:	e3150902 	tst	r5, #32768	; 0x8000
        26c9e4:	1a000004 	bne	26c9fc <TVoyagerPlatform::PowerOnSystem(void)+0x164>
        26c9e8:	e3390000 	teq	r9, #0	; 0x0
        26c9ec:	0a00000b 	beq	26ca20 <TVoyagerPlatform::PowerOnSystem(void)+0x188>
        26c9f0:	e594003c 	ldr	r0, [r4, #60]	; fField60
        26c9f4:	e3300000 	teq	r0, #0	; 0x0
        26c9f8:	1a000008 	bne	26ca20 <TVoyagerPlatform::PowerOnSystem(void)+0x188>
        26c9fc:	e3a01014 	mov	r1, #20	; 0x14
        26ca00:	e5940014 	ldr	r0, [r4, #20]	; fField20
        26ca04:	eb60032d 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
        26ca08:	e1c70000 	bic	r0, r7, r0
        26ca0c:	e1a02800 	mov	r2, r0, lsl #16
        26ca10:	e1b02822 	movs	r2, r2, lsr #16
        26ca14:	13a01010 	movne	r1, #16	; 0x10
        26ca18:	15b40014 	ldrne	r0, [r4, #20]!	; fField20
        26ca1c:	1b60032b 	blne	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
        26ca20:	e3350000 	teq	r5, #0	; 0x0
        26ca24:	159f0010 	ldrne	r0, [pc, #10]	; 26ca3c <TVoyagerPlatform::PowerOnSystem(void)+0x1a4>
        26ca28:	15805000 	strne	r5, [r0]
        26ca2c:	e1a00008 	mov	r0, r8
        26ca30:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        26ca34:	0f18d800 	swieq	0x0018d800
        26ca38:	0f18c800 	swieq	0x0018c800
        26ca3c:	0f183800 	swieq	0x00183800
    */
}

/**
 * Symbol: TVoyagerPlatform::TranslatePowerEvent(unsigned long)
 * Address: 0026ca40
 */
TVoyagerPlatform::TranslatePowerEvent(unsigned long) {
    /*
        26ca40:	e3110401 	tst	r1, #16777216	; 0x1000000
        26ca44:	15902038 	ldrne	r2, [r0, #56]	; fField56
        26ca48:	13320000 	teqne	r2, #0	; 0x0
        26ca4c:	11a00002 	movne	r0, r2
        26ca50:	11a0f00e 	movne	pc, lr
        26ca54:	e3110902 	tst	r1, #32768	; 0x8000
        26ca58:	1590003c 	ldrne	r0, [r0, #60]	; fField60
        26ca5c:	13300000 	teqne	r0, #0	; 0x0
        26ca60:	11a0f00e 	movne	pc, lr
        26ca64:	e3110502 	tst	r1, #8388608	; 0x800000
        26ca68:	13a00002 	movne	r0, #2	; 0x2
        26ca6c:	11a0f00e 	movne	pc, lr
        26ca70:	e3110004 	tst	r1, #4	; 0x4
        26ca74:	03a00001 	moveq	r0, #1	; 0x1
        26ca78:	13a00003 	movne	r0, #3	; 0x3
        26ca7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TVoyagerPlatform::BacklightTrigger(void)
 * Address: 0026ca80
 */
TVoyagerPlatform::BacklightTrigger(void) {
    /*
        26ca80:	e3a00000 	mov	r0, #0	; 0x0
        26ca84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TVoyagerPlatform::RegisterPowerSwitchInterrupt(void)
 * Address: 0026ca88
 */
TVoyagerPlatform::RegisterPowerSwitchInterrupt(void) {
    /*
        26ca88:	e1a0c00d 	mov	ip, sp
        26ca8c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26ca90:	e24cb004 	sub	fp, ip, #4	; 0x4
        26ca94:	e1a04000 	mov	r4, r0
        26ca98:	e3a05000 	mov	r5, #0	; 0x0
        26ca9c:	e5c05034 	strb	r5, [r0, #52]	; fField52
        26caa0:	e5c05035 	strb	r5, [r0, #53]	; fField53
        26caa4:	e3e03000 	mvn	r3, #0	; 0x0
        26caa8:	e92d0008 	stmdb	sp!, {r3}
        26caac:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26cab0:	e59f3014 	ldr	r3, [pc, #14]	; 26cacc <TVoyagerPlatform::RegisterPowerSwitchInterrupt(void)+0x44>
        26cab4:	e1a02004 	mov	r2, r4
        26cab8:	e3a01000 	mov	r1, #0	; 0x0
        26cabc:	eb60030b 	bl	1a6d6f0 <TGPIOInterface::$RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)>
        26cac0:	e5a40030 	str	r0, [r4, #48]!	; fField48
        26cac4:	e1a00005 	mov	r0, r5
        26cac8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        26cacc:	0019275c 	andeqs	r2, r9, ip, asr r7
    */
}

/**
 * Symbol: TVoyagerPlatform::EnableSysPowerInterrupt(void)
 * Address: 0026cad0
 */
TVoyagerPlatform::EnableSysPowerInterrupt(void) {
    /*
        26cad0:	e1a0c00d 	mov	ip, sp
        26cad4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        26cad8:	e24cb004 	sub	fp, ip, #4	; 0x4
        26cadc:	e5901030 	ldr	r1, [r0, #48]	; fField48
        26cae0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26cae4:	eb600303 	bl	1a6d6f8 <TGPIOInterface::$EnableInterrupt(GPIOIntObject *)>
        26cae8:	e3a00000 	mov	r0, #0	; 0x0
        26caec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::InterruptHandler(void)
 * Address: 0026caf0
 */
TVoyagerPlatform::InterruptHandler(void) {
    /*
        26caf0:	ea668f4b 	b	1c10824 <TVoyagerPlatform::$SamplePowerSwitchStateMachine(void)>
    */
}

/**
 * Symbol: TVoyagerPlatform::TimerInterruptHandler(void)
 * Address: 0026caf4
 */
TVoyagerPlatform::TimerInterruptHandler(void) {
    /*
        26caf4:	e5d01034 	ldrb	r1, [r0, #52]	; fField52
        26caf8:	e3310001 	teq	r1, #1	; 0x1
        26cafc:	03a01002 	moveq	r1, #2	; 0x2
        26cb00:	0a000002 	beq	26cb10 <TVoyagerPlatform::TimerInterruptHandler(void)+0x1c>
        26cb04:	e3310002 	teq	r1, #2	; 0x2
        26cb08:	1a000001 	bne	26cb14 <TVoyagerPlatform::TimerInterruptHandler(void)+0x20>
        26cb0c:	e3a01003 	mov	r1, #3	; 0x3
        26cb10:	e5c01034 	strb	r1, [r0, #52]	; fField52
        26cb14:	ea668f42 	b	1c10824 <TVoyagerPlatform::$SamplePowerSwitchStateMachine(void)>
    */
}

/**
 * Symbol: TVoyagerPlatform::GetPCMCIAPowerSpec(unsigned long, unsigned long *)
 * Address: 0026cb18
 */
TVoyagerPlatform::GetPCMCIAPowerSpec(unsigned long, unsigned long *) {
    /*
        26cb18:	e3a00000 	mov	r0, #0	; 0x0
        26cb1c:	e3310000 	teq	r1, #0	; 0x0
        26cb20:	03a01005 	moveq	r1, #5	; 0x5
        26cb24:	0a000003 	beq	26cb38 <TVoyagerPlatform::GetPCMCIAPowerSpec(unsigned long, unsigned long *)+0x20>
        26cb28:	e3310001 	teq	r1, #1	; 0x1
        26cb2c:	159f000c 	ldrne	r0, [pc, #c]	; 26cb40 <TVoyagerPlatform::GetPCMCIAPowerSpec(unsigned long, unsigned long *)+0x28>
        26cb30:	11a0f00e 	movne	pc, lr
        26cb34:	e3a01007 	mov	r1, #7	; 0x7
        26cb38:	e5821000 	str	r1, [r2]
        26cb3c:	e1a0f00e 	mov	pc, lr
        26cb40:	ffffd8eb 	swinv	0x00ffd8eb
    */
}

/**
 * Symbol: TVoyagerPlatform::Delete(void)
 * Address: 0026cb44
 */
TVoyagerPlatform::Delete(void) {
    /*
        26cb44:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOnDeviceCheck(unsigned char)
 * Address: 0026cb48
 */
TVoyagerPlatform::PowerOnDeviceCheck(unsigned char) {
    /*
        26cb48:	e1a0c00d 	mov	ip, sp
        26cb4c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26cb50:	e24cb004 	sub	fp, ip, #4	; 0x4
        26cb54:	e1a04000 	mov	r4, r0
        26cb58:	e3a01000 	mov	r1, #0	; 0x0
        26cb5c:	eb668f3c 	bl	1c10854 <TVoyagerPlatform::$CheckForKeyboard(unsigned char)>
        26cb60:	e3300000 	teq	r0, #0	; 0x0
        26cb64:	11a00004 	movne	r0, r4
        26cb68:	13a01001 	movne	r1, #1	; 0x1
        26cb6c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        26cb70:	1a668f38 	bne	1c10858 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)>
        26cb74:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::GetMutex(void)
 * Address: 0026cb78
 */
TVoyagerPlatform::GetMutex(void) {
    /*
        26cb78:	e5d01036 	ldrb	r1, [r0, #54]	; fField54
        26cb7c:	e3310000 	teq	r1, #0	; 0x0
        26cb80:	05900058 	ldreq	r0, [r0, #88]	; fField88
        26cb84:	0a6586f2 	beq	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        26cb88:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TVoyagerPlatform::RelMutex(void)
 * Address: 0026cb8c
 */
TVoyagerPlatform::RelMutex(void) {
    /*
        26cb8c:	e5d01036 	ldrb	r1, [r0, #54]	; fField54
        26cb90:	e3310000 	teq	r1, #0	; 0x0
        26cb94:	05900058 	ldreq	r0, [r0, #88]	; fField88
        26cb98:	0a65b43e 	beq	1bd9c98 <TULockingSemaphore::$Release(void)>
        26cb9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TVoyagerPlatform::Sleep(unsigned long)
 * Address: 0026cba0
 */
TVoyagerPlatform::Sleep(unsigned long) {
    /*
        26cba0:	e5d00036 	ldrb	r0, [r0, #54]	; fField54
        26cba4:	e3300000 	teq	r0, #0	; 0x0
        26cba8:	e1a00001 	mov	r0, r1
        26cbac:	0a65c09e 	beq	1bdce2c <$Sleep(unsigned long)>
        26cbb0:	1a6644c4 	bne	1bfdec8 <$ShortTimerDelay(unsigned long)>
    */
}

/**
 * Symbol: TVoyagerPlatform::SamplePowerSwitchStateMachine(void)
 * Address: 0026cbb4
 */
TVoyagerPlatform::SamplePowerSwitchStateMachine(void) {
    /*
        26cbb4:	e1a0c00d 	mov	ip, sp
        26cbb8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26cbbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        26cbc0:	e1a04000 	mov	r4, r0
        26cbc4:	e24dd004 	sub	sp, sp, #4	; 0x4
        26cbc8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26cbcc:	e1a0200d 	mov	r2, sp
        26cbd0:	e3a01000 	mov	r1, #0	; 0x0
        26cbd4:	eb6006cd 	bl	1a6e710 <TGPIOInterface::$ReadGPIOData(unsigned char, unsigned long *)>
        26cbd8:	e59d0000 	ldr	r0, [sp]
        26cbdc:	e3300000 	teq	r0, #0	; 0x0
        26cbe0:	13a00000 	movne	r0, #0	; 0x0
        26cbe4:	03a00001 	moveq	r0, #1	; 0x1
        26cbe8:	e20000ff 	and	r0, r0, #255	; 0xff
        26cbec:	e5d41034 	ldrb	r1, [r4, #52]	; fField52
        26cbf0:	e3a05000 	mov	r5, #0	; 0x0
        26cbf4:	e3310000 	teq	r1, #0	; 0x0
        26cbf8:	13310001 	teqne	r1, #1	; 0x1
        26cbfc:	0a00000a 	beq	26cc2c <TVoyagerPlatform::SamplePowerSwitchStateMachine(void)+0x78>
        26cc00:	e3310002 	teq	r1, #2	; 0x2
        26cc04:	0a000017 	beq	26cc68 <TVoyagerPlatform::SamplePowerSwitchStateMachine(void)+0xb4>
        26cc08:	e3310003 	teq	r1, #3	; 0x3
        26cc0c:	1a000026 	bne	26ccac <TVoyagerPlatform::SamplePowerSwitchStateMachine(void)+0xf8>
        26cc10:	e5c45034 	strb	r5, [r4, #52]	; fField52
        26cc14:	e5940018 	ldr	r0, [r4, #24]	; fField24
        26cc18:	e594102c 	ldr	r1, [r4, #44]	; fField44
        26cc1c:	eb5ff648 	bl	1a6a544 <TIRQTimer::$ResetIRQTimer(IRQTimer *)>
        26cc20:	e59f0000 	ldr	r0, [pc, #0]	; 26cc28 <TVoyagerPlatform::SamplePowerSwitchStateMachine(void)+0x74>
        26cc24:	ea00001f 	b	26cca8 <TVoyagerPlatform::SamplePowerSwitchStateMachine(void)+0xf4>
        26cc28:	626b6c74 	rsbvs	r6, fp, #29696	; 0x7400
        26cc2c:	e3300000 	teq	r0, #0	; 0x0
        26cc30:	0a000007 	beq	26cc54 <TVoyagerPlatform::SamplePowerSwitchStateMachine(void)+0xa0>
        26cc34:	e3a00001 	mov	r0, #1	; 0x1
        26cc38:	e5c40034 	strb	r0, [r4, #52]	; fField52
        26cc3c:	e3a03000 	mov	r3, #0	; 0x0
        26cc40:	e3a02a09 	mov	r2, #36864	; 0x9000
        26cc44:	e2422004 	sub	r2, r2, #4	; 0x4
        26cc48:	e5940018 	ldr	r0, [r4, #24]	; fField24
        26cc4c:	e594102c 	ldr	r1, [r4, #44]	; fField44
        26cc50:	ea00000a 	b	26cc80 <TVoyagerPlatform::SamplePowerSwitchStateMachine(void)+0xcc>
        26cc54:	e5c45034 	strb	r5, [r4, #52]	; fField52
        26cc58:	e5940018 	ldr	r0, [r4, #24]	; fField24
        26cc5c:	e594102c 	ldr	r1, [r4, #44]	; fField44
        26cc60:	eb5ff637 	bl	1a6a544 <TIRQTimer::$ResetIRQTimer(IRQTimer *)>
        26cc64:	ea000010 	b	26ccac <TVoyagerPlatform::SamplePowerSwitchStateMachine(void)+0xf8>
        26cc68:	e3300000 	teq	r0, #0	; 0x0
        26cc6c:	0a000005 	beq	26cc88 <TVoyagerPlatform::SamplePowerSwitchStateMachine(void)+0xd4>
        26cc70:	e3a03000 	mov	r3, #0	; 0x0
        26cc74:	e3a029e1 	mov	r2, #3686400	; 0x384000
        26cc78:	e5940018 	ldr	r0, [r4, #24]	; fField24
        26cc7c:	e594102c 	ldr	r1, [r4, #44]	; fField44
        26cc80:	eb5ff62e 	bl	1a6a540 <TIRQTimer::$SetIRQTimer(IRQTimer *, unsigned long, unsigned long)>
        26cc84:	ea000008 	b	26ccac <TVoyagerPlatform::SamplePowerSwitchStateMachine(void)+0xf8>
        26cc88:	e5c45034 	strb	r5, [r4, #52]	; fField52
        26cc8c:	e5940018 	ldr	r0, [r4, #24]	; fField24
        26cc90:	e594102c 	ldr	r1, [r4, #44]	; fField44
        26cc94:	eb5ff62a 	bl	1a6a544 <TIRQTimer::$ResetIRQTimer(IRQTimer *)>
        26cc98:	e5d40035 	ldrb	r0, [r4, #53]	; fField53
        26cc9c:	e3300000 	teq	r0, #0	; 0x0
        26cca0:	1a000001 	bne	26ccac <TVoyagerPlatform::SamplePowerSwitchStateMachine(void)+0xf8>
        26cca4:	e59f0014 	ldr	r0, [pc, #14]	; 26ccc0 <TVoyagerPlatform::SamplePowerSwitchStateMachine(void)+0x10c>
        26cca8:	eb6686a8 	bl	1c0e750 <$SendPowerSwitchEvent(unsigned long)>
        26ccac:	e5d40034 	ldrb	r0, [r4, #52]	; fField52
        26ccb0:	e3300000 	teq	r0, #0	; 0x0
        26ccb4:	05c45035 	streqb	r5, [r4, #53]	; fField53
        26ccb8:	e1a00005 	mov	r0, r5
        26ccbc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        26ccc0:	706f7772 	rsbvc	r7, pc, r2, ror r7
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOnIC5v(unsigned char)
 * Address: 0026ccc4
 */
TVoyagerPlatform::PowerOnIC5v(unsigned char) {
    /*
        26ccc4:	e1a0c00d 	mov	ip, sp
        26ccc8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26cccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        26ccd0:	e1a04000 	mov	r4, r0
        26ccd4:	e20110ff 	and	r1, r1, #255	; 0xff
        26ccd8:	e5900024 	ldr	r0, [r0, #36]	; fField36
        26ccdc:	e3a02001 	mov	r2, #1	; 0x1
        26cce0:	e1801112 	orr	r1, r0, r2, lsl r1
        26cce4:	e3300000 	teq	r0, #0	; 0x0
        26cce8:	e5841024 	str	r1, [r4, #36]	; fField36
        26ccec:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        26ccf0:	e24dd004 	sub	sp, sp, #4	; 0x4
        26ccf4:	e1a0300d 	mov	r3, sp
        26ccf8:	e3a02001 	mov	r2, #1	; 0x1
        26ccfc:	e3a01023 	mov	r1, #35	; 0x23
        26cd00:	e5940014 	ldr	r0, [r4, #20]	; fField20
        26cd04:	eb600269 	bl	1a6d6b0 <TBIOInterface::$WriteDIOPins(unsigned char, unsigned char, unsigned char *)>
        26cd08:	e1a00004 	mov	r0, r4
        26cd0c:	e3a010fe 	mov	r1, #254	; 0xfe
        26cd10:	e2811c47 	add	r1, r1, #18176	; 0x4700
        26cd14:	eb668ec1 	bl	1c10820 <TVoyagerPlatform::$Sleep(unsigned long)>
        26cd18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOffIC5v(unsigned char)
 * Address: 0026cd1c
 */
TVoyagerPlatform::PowerOffIC5v(unsigned char) {
    /*
        26cd1c:	e1a0c00d 	mov	ip, sp
        26cd20:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        26cd24:	e24cb004 	sub	fp, ip, #4	; 0x4
        26cd28:	e20110ff 	and	r1, r1, #255	; 0xff
        26cd2c:	e3a03001 	mov	r3, #1	; 0x1
        26cd30:	e1e01113 	mvn	r1, r3, lsl r1
        26cd34:	e5902024 	ldr	r2, [r0, #36]	; fField36
        26cd38:	e0121001 	ands	r1, r2, r1
        26cd3c:	e5801024 	str	r1, [r0, #36]	; fField36
        26cd40:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        26cd44:	e24dd004 	sub	sp, sp, #4	; 0x4
        26cd48:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26cd4c:	e1a0300d 	mov	r3, sp
        26cd50:	e3a02000 	mov	r2, #0	; 0x0
        26cd54:	e3a01023 	mov	r1, #35	; 0x23
        26cd58:	eb600254 	bl	1a6d6b0 <TBIOInterface::$WriteDIOPins(unsigned char, unsigned char, unsigned char *)>
        26cd5c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOnSrc5v(unsigned char)
 * Address: 0026cd60
 */
TVoyagerPlatform::PowerOnSrc5v(unsigned char) {
    /*
        26cd60:	e1a0c00d 	mov	ip, sp
        26cd64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26cd68:	e24cb004 	sub	fp, ip, #4	; 0x4
        26cd6c:	e1a04000 	mov	r4, r0
        26cd70:	e20110ff 	and	r1, r1, #255	; 0xff
        26cd74:	e5900020 	ldr	r0, [r0, #32]	; fField32
        26cd78:	e3a02001 	mov	r2, #1	; 0x1
        26cd7c:	e1801112 	orr	r1, r0, r2, lsl r1
        26cd80:	e3300000 	teq	r0, #0	; 0x0
        26cd84:	e5841020 	str	r1, [r4, #32]	; fField32
        26cd88:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        26cd8c:	e24dd004 	sub	sp, sp, #4	; 0x4
        26cd90:	e1a0300d 	mov	r3, sp
        26cd94:	e3a02001 	mov	r2, #1	; 0x1
        26cd98:	e3a01004 	mov	r1, #4	; 0x4
        26cd9c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        26cda0:	eb667e1a 	bl	1c0c610 <TGPIOInterface::$WriteGPIOData(unsigned char, unsigned char, unsigned char *)>
        26cda4:	e1a00004 	mov	r0, r4
        26cda8:	e3a01a09 	mov	r1, #36864	; 0x9000
        26cdac:	e2411004 	sub	r1, r1, #4	; 0x4
        26cdb0:	eb668e9a 	bl	1c10820 <TVoyagerPlatform::$Sleep(unsigned long)>
        26cdb4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOffSrc5v(unsigned char)
 * Address: 0026cdb8
 */
TVoyagerPlatform::PowerOffSrc5v(unsigned char) {
    /*
        26cdb8:	e1a0c00d 	mov	ip, sp
        26cdbc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26cdc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26cdc4:	e1a04000 	mov	r4, r0
        26cdc8:	e20100ff 	and	r0, r1, #255	; 0xff
        26cdcc:	e3a02001 	mov	r2, #1	; 0x1
        26cdd0:	e1e00012 	mvn	r0, r2, lsl r0
        26cdd4:	e5941020 	ldr	r1, [r4, #32]	; fField32
        26cdd8:	e0110000 	ands	r0, r1, r0
        26cddc:	e5840020 	str	r0, [r4, #32]	; fField32
        26cde0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        26cde4:	e24dd004 	sub	sp, sp, #4	; 0x4
        26cde8:	e1a0300d 	mov	r3, sp
        26cdec:	e3a02000 	mov	r2, #0	; 0x0
        26cdf0:	e3a01004 	mov	r1, #4	; 0x4
        26cdf4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        26cdf8:	eb667e04 	bl	1c0c610 <TGPIOInterface::$WriteGPIOData(unsigned char, unsigned char, unsigned char *)>
        26cdfc:	e1a00004 	mov	r0, r4
        26ce00:	e3a01a09 	mov	r1, #36864	; 0x9000
        26ce04:	e2411004 	sub	r1, r1, #4	; 0x4
        26ce08:	eb668e84 	bl	1c10820 <TVoyagerPlatform::$Sleep(unsigned long)>
        26ce0c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOnSrc12v(unsigned char)
 * Address: 0026ce10
 */
TVoyagerPlatform::PowerOnSrc12v(unsigned char) {
    /*
        26ce10:	e1a0c00d 	mov	ip, sp
        26ce14:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26ce18:	e24cb004 	sub	fp, ip, #4	; 0x4
        26ce1c:	e1a04000 	mov	r4, r0
        26ce20:	e20110ff 	and	r1, r1, #255	; 0xff
        26ce24:	e590001c 	ldr	r0, [r0, #28]	; fField28
        26ce28:	e3a02001 	mov	r2, #1	; 0x1
        26ce2c:	e1801112 	orr	r1, r0, r2, lsl r1
        26ce30:	e3300000 	teq	r0, #0	; 0x0
        26ce34:	e584101c 	str	r1, [r4, #28]	; fField28
        26ce38:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        26ce3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        26ce40:	e1a0300d 	mov	r3, sp
        26ce44:	e3a02001 	mov	r2, #1	; 0x1
        26ce48:	e3a01005 	mov	r1, #5	; 0x5
        26ce4c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        26ce50:	eb667dee 	bl	1c0c610 <TGPIOInterface::$WriteGPIOData(unsigned char, unsigned char, unsigned char *)>
        26ce54:	e1a00004 	mov	r0, r4
        26ce58:	e3a010fe 	mov	r1, #254	; 0xfe
        26ce5c:	e2811c47 	add	r1, r1, #18176	; 0x4700
        26ce60:	eb668e6e 	bl	1c10820 <TVoyagerPlatform::$Sleep(unsigned long)>
        26ce64:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::Init(void)
 * Address: 0026ce68
 */
TVoyagerPlatform::Init(void) {
    /*
        26ce68:	e1a0c00d 	mov	ip, sp
        26ce6c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26ce70:	e24cb004 	sub	fp, ip, #4	; 0x4
        26ce74:	e1a04000 	mov	r4, r0
        26ce78:	e3a06000 	mov	r6, #0	; 0x0
        26ce7c:	e5806020 	str	r6, [r0, #32]	; fField32
        26ce80:	e580601c 	str	r6, [r0, #28]	; fField28
        26ce84:	e5806024 	str	r6, [r0, #36]	; fField36
        26ce88:	e5806028 	str	r6, [r0, #40]	; fField40
        26ce8c:	e5c06036 	strb	r6, [r0, #54]	; fField54
        26ce90:	eb667ddd 	bl	1c0c60c <$GetGPIOInterfaceObject(void)>
        26ce94:	e5840010 	str	r0, [r4, #16]	; fField16
        26ce98:	eb5ff59d 	bl	1a6a514 <$GetBIOInterfaceObject(void)>
        26ce9c:	e5840014 	str	r0, [r4, #20]	; fField20
        26cea0:	e5846038 	str	r6, [r4, #56]	; fField56
        26cea4:	e584603c 	str	r6, [r4, #60]	; fField60
        26cea8:	e2841f41 	add	r1, r4, #260	; 0x104
        26ceac:	e1a00004 	mov	r0, r4
        26ceb0:	e3a02000 	mov	r2, #0	; 0x0
        26ceb4:	eb65a726 	bl	1bd6b54 <$LockHeapRange>
        26ceb8:	e2842040 	add	r2, r4, #64	; 0x40
        26cebc:	e3a01000 	mov	r1, #0	; 0x0
        26cec0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        26cec4:	eb600207 	bl	1a6d6e8 <TGPIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26cec8:	e2842044 	add	r2, r4, #68	; 0x44
        26cecc:	e3a01001 	mov	r1, #1	; 0x1
        26ced0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        26ced4:	eb600203 	bl	1a6d6e8 <TGPIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26ced8:	e2842048 	add	r2, r4, #72	; 0x48
        26cedc:	e3a01002 	mov	r1, #2	; 0x2
        26cee0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        26cee4:	eb6001ff 	bl	1a6d6e8 <TGPIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26cee8:	e284204c 	add	r2, r4, #76	; 0x4c
        26ceec:	e3a01003 	mov	r1, #3	; 0x3
        26cef0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        26cef4:	eb6001fb 	bl	1a6d6e8 <TGPIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26cef8:	e2842050 	add	r2, r4, #80	; 0x50
        26cefc:	e3a01020 	mov	r1, #32	; 0x20
        26cf00:	e5940014 	ldr	r0, [r4, #20]	; fField20
        26cf04:	eb6001df 	bl	1a6d688 <TBIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26cf08:	e2842054 	add	r2, r4, #84	; 0x54
        26cf0c:	e3a01025 	mov	r1, #37	; 0x25
        26cf10:	e5940014 	ldr	r0, [r4, #20]	; fField20
        26cf14:	eb6001db 	bl	1a6d688 <TBIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26cf18:	e3a00000 	mov	r0, #0	; 0x0
        26cf1c:	e59f10d8 	ldr	r1, [pc, #d8]	; 26cffc <TVoyagerPlatform::Init(void)+0x194>
        26cf20:	e0842100 	add	r2, r4, r0, lsl #2
        26cf24:	e0813100 	add	r3, r1, r0, lsl #2
        26cf28:	e5933000 	ldr	r3, [r3]
        26cf2c:	e2800001 	add	r0, r0, #1	; 0x1
        26cf30:	e3500021 	cmp	r0, #33	; 0x21
        26cf34:	e5a2305c 	str	r3, [r2, #92]!	; fField92
        26cf38:	bafffff8 	blt	26cf20 <TVoyagerPlatform::Init(void)+0xb8>
        26cf3c:	eb5ff57a 	bl	1a6a52c <$InitIRQTimerObject(void)>
        26cf40:	eb5ff57a 	bl	1a6a530 <$GetIRQTimerObject(void)>
        26cf44:	e5840018 	str	r0, [r4, #24]	; fField24
        26cf48:	e3a0000c 	mov	r0, #12	; 0xc
        26cf4c:	eb6585f9 	bl	1bce738 <$__nw(unsigned int)>
        26cf50:	e1b05000 	movs	r5, r0
        26cf54:	0a000004 	beq	26cf6c <TVoyagerPlatform::Init(void)+0x104>
        26cf58:	e5c56004 	strb	r6, [r5, #4]
        26cf5c:	e5856000 	str	r6, [r5]
        26cf60:	e2851008 	add	r1, r5, #8	; 0x8
        26cf64:	e1a00005 	mov	r0, r5
        26cf68:	eb659ead 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        26cf6c:	e1a00005 	mov	r0, r5
        26cf70:	e5845058 	str	r5, [r4, #88]	; fField88
        26cf74:	eb65a2cf 	bl	1bd5ab8 <TULockingSemaphore::$Init(void)>
        26cf78:	e5940018 	ldr	r0, [r4, #24]	; fField24
        26cf7c:	e1a02004 	mov	r2, r4
        26cf80:	e59f1078 	ldr	r1, [pc, #78]	; 26d000 <TVoyagerPlatform::Init(void)+0x198>
        26cf84:	eb5ff56c 	bl	1a6a53c <TIRQTimer::$AcquireIRQTimer(void (*)(void *, unsigned long), void *)>
        26cf88:	e584002c 	str	r0, [r4, #44]	; fField44
        26cf8c:	e24dd008 	sub	sp, sp, #8	; 0x8
        26cf90:	e1a0000d 	mov	r0, sp
        26cf94:	eb6581cf 	bl	1bcd6d8 <TUGestalt::$__ct(void)>
        26cf98:	e3a00001 	mov	r0, #1	; 0x1
        26cf9c:	e5c400e0 	strb	r0, [r4, #224]	; fField224
        26cfa0:	e5c400e1 	strb	r0, [r4, #225]	; fField225
        26cfa4:	e5c460e2 	strb	r6, [r4, #226]	; fField226
        26cfa8:	e5c460e3 	strb	r6, [r4, #227]	; fField227
        26cfac:	e3a0001d 	mov	r0, #29	; 0x1d
        26cfb0:	e58400e8 	str	r0, [r4, #232]	; fField232
        26cfb4:	e58460f4 	str	r6, [r4, #244]	; fField244
        26cfb8:	e58460f0 	str	r6, [r4, #240]	; fField240
        26cfbc:	e59f0040 	ldr	r0, [pc, #40]	; 26d004 <TVoyagerPlatform::Init(void)+0x19c>	; fField40
        26cfc0:	e58400ec 	str	r0, [r4, #236]	; fField236
        26cfc4:	e5846100 	str	r6, [r4, #256]	; fField256
        26cfc8:	e58460fc 	str	r6, [r4, #252]	; fField252
        26cfcc:	e59f0034 	ldr	r0, [pc, #34]	; 26d008 <TVoyagerPlatform::Init(void)+0x1a0>
        26cfd0:	e58400f8 	str	r0, [r4, #248]	; fField248
        26cfd4:	e28420e0 	add	r2, r4, #224	; 0xe0
        26cfd8:	e1a0000d 	mov	r0, sp
        26cfdc:	e3a03024 	mov	r3, #36	; 0x24
        26cfe0:	e3a01402 	mov	r1, #33554432	; 0x2000000
        26cfe4:	e281100a 	add	r1, r1, #10	; 0xa
        26cfe8:	eb663fa3 	bl	1bfce7c <TUGestalt::$RegisterGestalt(unsigned long, void *, unsigned long)>
        26cfec:	e1a0000d 	mov	r0, sp
        26cff0:	e3a01000 	mov	r1, #0	; 0x0
        26cff4:	eb6585ca 	bl	1bce724 <TUObject::$__dt(void)>
        26cff8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        26cffc:	0037ac40 	eoreqs	sl, r7, r0, asr #24
        26d000:	01c0f7b0 	streqh	pc, [r0, #112]
        26d004:	ffe00625 	swinv	0x00e00625
        26d008:	ffdb1ac1 	swinv	0x00db1ac1
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOffSrc12v(unsigned char)
 * Address: 0026d00c
 */
TVoyagerPlatform::PowerOffSrc12v(unsigned char) {
    /*
        26d00c:	e1a0c00d 	mov	ip, sp
        26d010:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        26d014:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d018:	e20110ff 	and	r1, r1, #255	; 0xff
        26d01c:	e3a03001 	mov	r3, #1	; 0x1
        26d020:	e1e01113 	mvn	r1, r3, lsl r1
        26d024:	e590201c 	ldr	r2, [r0, #28]	; fField28
        26d028:	e0121001 	ands	r1, r2, r1
        26d02c:	e580101c 	str	r1, [r0, #28]	; fField28
        26d030:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        26d034:	e24dd004 	sub	sp, sp, #4	; 0x4
        26d038:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26d03c:	e1a0300d 	mov	r3, sp
        26d040:	e3a02000 	mov	r2, #0	; 0x0
        26d044:	e3a01005 	mov	r1, #5	; 0x5
        26d048:	eb667d70 	bl	1c0c610 <TGPIOInterface::$WriteGPIOData(unsigned char, unsigned char, unsigned char *)>
        26d04c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::SerialPort0LineDriverConfig(unsigned char, unsigned char)
 * Address: 0026d050
 */
TVoyagerPlatform::SerialPort0LineDriverConfig(unsigned char, unsigned char) {
    /*
        26d050:	e1a0c00d 	mov	ip, sp
        26d054:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        26d058:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d05c:	e31100ff 	tst	r1, #255	; 0xff
        26d060:	e20220ff 	and	r2, r2, #255	; 0xff
        26d064:	e3a03001 	mov	r3, #1	; 0x1
        26d068:	e56d3004 	strb	r3, [sp, -#4]!
        26d06c:	12021020 	andne	r1, r2, #32	; 0x20
        26d070:	13310000 	teqne	r1, #0	; 0x0
        26d074:	13a01000 	movne	r1, #0	; 0x0
        26d078:	15cd1000 	strneb	r1, [sp]
        26d07c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        26d080:	e1a0300d 	mov	r3, sp
        26d084:	e5dd2000 	ldrb	r2, [sp]
        26d088:	e3a01006 	mov	r1, #6	; 0x6
        26d08c:	eb667d5f 	bl	1c0c610 <TGPIOInterface::$WriteGPIOData(unsigned char, unsigned char, unsigned char *)>
        26d090:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::SerialPort3LineDriverConfig(unsigned char, unsigned char)
 * Address: 0026d094
 */
TVoyagerPlatform::SerialPort3LineDriverConfig(unsigned char, unsigned char) {
    /*
        26d094:	e1a0c00d 	mov	ip, sp
        26d098:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        26d09c:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d0a0:	e31100ff 	tst	r1, #255	; 0xff
        26d0a4:	e20220ff 	and	r2, r2, #255	; 0xff
        26d0a8:	e3a03000 	mov	r3, #0	; 0x0
        26d0ac:	e56d3004 	strb	r3, [sp, -#4]!
        26d0b0:	0a000002 	beq	26d0c0 <TVoyagerPlatform::SerialPort3LineDriverConfig(unsigned char, unsigned char)+0x2c>
        26d0b4:	e3120020 	tst	r2, #32	; 0x20
        26d0b8:	03a01001 	moveq	r1, #1	; 0x1
        26d0bc:	05cd1000 	streqb	r1, [sp]
        26d0c0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        26d0c4:	e1a0300d 	mov	r3, sp
        26d0c8:	e5dd2000 	ldrb	r2, [sp]
        26d0cc:	e3a01022 	mov	r1, #34	; 0x22
        26d0d0:	eb600176 	bl	1a6d6b0 <TBIOInterface::$WriteDIOPins(unsigned char, unsigned char, unsigned char *)>
        26d0d4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::TurnOnMiltonPwrRegBit(PowerMapEntry *)
 * Address: 0026d0d8
 */
TVoyagerPlatform::TurnOnMiltonPwrRegBit(PowerMapEntry *) {
    /*
        26d0d8:	e1a0c00d 	mov	ip, sp
        26d0dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26d0e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d0e4:	e5d14002 	ldrb	r4, [r1, #2]
        26d0e8:	e3340021 	teq	r4, #33	; 0x21
        26d0ec:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        26d0f0:	eb0496a6 	bl	392b90 <EnterFIQAtomic>
        26d0f4:	e3a00811 	mov	r0, #1114112	; 0x110000
        26d0f8:	e280040f 	add	r0, r0, #251658240	; 0xf000000
        26d0fc:	e3a01001 	mov	r1, #1	; 0x1
        26d100:	e1a02411 	mov	r2, r1, lsl r4
        26d104:	e5901000 	ldr	r1, [r0]
        26d108:	e1821001 	orr	r1, r2, r1
        26d10c:	e5801000 	str	r1, [r0]
        26d110:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        26d114:	ea0496a5 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TVoyagerPlatform::TurnOffMiltonPwrRegBit(PowerMapEntry *)
 * Address: 0026d118
 */
TVoyagerPlatform::TurnOffMiltonPwrRegBit(PowerMapEntry *) {
    /*
        26d118:	e1a0c00d 	mov	ip, sp
        26d11c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26d120:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d124:	e5d14002 	ldrb	r4, [r1, #2]
        26d128:	e3340021 	teq	r4, #33	; 0x21
        26d12c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        26d130:	eb049696 	bl	392b90 <EnterFIQAtomic>
        26d134:	e3a00811 	mov	r0, #1114112	; 0x110000
        26d138:	e280040f 	add	r0, r0, #251658240	; 0xf000000
        26d13c:	e3a01001 	mov	r1, #1	; 0x1
        26d140:	e1e02411 	mvn	r2, r1, lsl r4
        26d144:	e5901000 	ldr	r1, [r0]
        26d148:	e0021001 	and	r1, r2, r1
        26d14c:	e5801000 	str	r1, [r0]
        26d150:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        26d154:	ea049695 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOnDMA(unsigned char)
 * Address: 0026d158
 */
TVoyagerPlatform::PowerOnDMA(unsigned char) {
    /*
        26d158:	e1a0c00d 	mov	ip, sp
        26d15c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26d160:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d164:	e1a04000 	mov	r4, r0
        26d168:	e20150ff 	and	r5, r1, #255	; 0xff
        26d16c:	eb049687 	bl	392b90 <EnterFIQAtomic>
        26d170:	e2452022 	sub	r2, r5, #34	; 0x22
        26d174:	e3a01001 	mov	r1, #1	; 0x1
        26d178:	e5940028 	ldr	r0, [r4, #40]	; fField40
        26d17c:	e1900211 	orrs	r0, r0, r1, lsl r2
        26d180:	e5a40028 	str	r0, [r4, #40]!	; fField40
        26d184:	0a000004 	beq	26d19c <TVoyagerPlatform::PowerOnDMA(unsigned char)+0x44>
        26d188:	e3a00811 	mov	r0, #1114112	; 0x110000
        26d18c:	e280040f 	add	r0, r0, #251658240	; 0xf000000
        26d190:	e5901000 	ldr	r1, [r0]
        26d194:	e3811040 	orr	r1, r1, #64	; 0x40
        26d198:	e5801000 	str	r1, [r0]
        26d19c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        26d1a0:	ea049682 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOffDMA(unsigned char)
 * Address: 0026d1a4
 */
TVoyagerPlatform::PowerOffDMA(unsigned char) {
    /*
        26d1a4:	e1a0c00d 	mov	ip, sp
        26d1a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26d1ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d1b0:	e1a04000 	mov	r4, r0
        26d1b4:	e20150ff 	and	r5, r1, #255	; 0xff
        26d1b8:	eb049674 	bl	392b90 <EnterFIQAtomic>
        26d1bc:	e2452022 	sub	r2, r5, #34	; 0x22
        26d1c0:	e3a01001 	mov	r1, #1	; 0x1
        26d1c4:	e5940028 	ldr	r0, [r4, #40]	; fField40
        26d1c8:	e1d00211 	bics	r0, r0, r1, lsl r2
        26d1cc:	e5a40028 	str	r0, [r4, #40]!	; fField40
        26d1d0:	1a000004 	bne	26d1e8 <TVoyagerPlatform::PowerOffDMA(unsigned char)+0x44>
        26d1d4:	e3a00811 	mov	r0, #1114112	; 0x110000
        26d1d8:	e280040f 	add	r0, r0, #251658240	; 0xf000000
        26d1dc:	e5901000 	ldr	r1, [r0]
        26d1e0:	e3c11040 	bic	r1, r1, #64	; 0x40
        26d1e4:	e5801000 	str	r1, [r0]
        26d1e8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        26d1ec:	ea04966f 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TVoyagerPlatform::ResetZAPStoreCheck(void)
 * Address: 0026d1f0
 */
TVoyagerPlatform::ResetZAPStoreCheck(void) {
    /*
        26d1f0:	e1a0c00d 	mov	ip, sp
        26d1f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26d1f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d1fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        26d200:	e3a04000 	mov	r4, #0	; 0x0
        26d204:	eb667d00 	bl	1c0c60c <$GetGPIOInterfaceObject(void)>
        26d208:	e3300000 	teq	r0, #0	; 0x0
        26d20c:	0a000006 	beq	26d22c <TVoyagerPlatform::ResetZAPStoreCheck(void)+0x3c>
        26d210:	e1a0200d 	mov	r2, sp
        26d214:	e3a01000 	mov	r1, #0	; 0x0
        26d218:	eb60053c 	bl	1a6e710 <TGPIOInterface::$ReadGPIOData(unsigned char, unsigned long *)>
        26d21c:	e3300000 	teq	r0, #0	; 0x0
        26d220:	059d0000 	ldreq	r0, [sp]
        26d224:	03300000 	teqeq	r0, #0	; 0x0
        26d228:	03a04001 	moveq	r4, #1	; 0x1
        26d22c:	e1a00004 	mov	r0, r4
        26d230:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::CheckForKeyboard(unsigned char)
 * Address: 0026d234
 */
TVoyagerPlatform::CheckForKeyboard(unsigned char) {
    /*
        26d234:	e1a0c00d 	mov	ip, sp
        26d238:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        26d23c:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d240:	e1a04000 	mov	r4, r0
        26d244:	e201a0ff 	and	sl, r1, #255	; 0xff
        26d248:	e24dd010 	sub	sp, sp, #16	; 0x10
        26d24c:	e3a08000 	mov	r8, #0	; 0x0
        26d250:	e3a06000 	mov	r6, #0	; 0x0
        26d254:	eb6653ad 	bl	1c02110 <$GetSerialChipRegistry(void)>
        26d258:	e1a05000 	mov	r5, r0
        26d25c:	e3a09000 	mov	r9, #0	; 0x0
        26d260:	e58d9000 	str	r9, [sp]
        26d264:	e58d9004 	str	r9, [sp, #4]
        26d268:	e58d9008 	str	r9, [sp, #8]
        26d26c:	e58d900c 	str	r9, [sp, #12]
        26d270:	e59f109c 	ldr	r1, [pc, #9c]	; 26d314 <TVoyagerPlatform::CheckForKeyboard(unsigned char)+0xe0>
        26d274:	eb045f18 	bl	384edc <PSerialChipRegistry::FindByLocation(unsigned long)>
        26d278:	e3300000 	teq	r0, #0	; 0x0
        26d27c:	0a00005c 	beq	26d3f4 <TVoyagerPlatform::CheckForKeyboard(unsigned char)+0x1c0>
        26d280:	e1a01000 	mov	r1, r0
        26d284:	e1a00005 	mov	r0, r5
        26d288:	eb045f07 	bl	384eac <PSerialChipRegistry::GetChipPtr(unsigned long)>
        26d28c:	e1a05000 	mov	r5, r0
        26d290:	e1a0200d 	mov	r2, sp
        26d294:	e1a01004 	mov	r1, r4
        26d298:	eb045e2d 	bl	384b54 <TSerialChip::InstallChipHandler(void *, SCCChannelInts *)>
        26d29c:	e1b07000 	movs	r7, r0
        26d2a0:	1a000053 	bne	26d3f4 <TVoyagerPlatform::CheckForKeyboard(unsigned char)+0x1c0>
        26d2a4:	e1a00005 	mov	r0, r5
        26d2a8:	e3a01008 	mov	r1, #8	; 0x8
        26d2ac:	eb045e79 	bl	384c98 <TSerialChip::SetSerialMode(unsigned long)>
        26d2b0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        26d2b4:	e1a0000d 	mov	r0, sp
        26d2b8:	eb653acc 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
        26d2bc:	e58d900c 	str	r9, [sp, #12]
        26d2c0:	e3a00008 	mov	r0, #8	; 0x8
        26d2c4:	e58d0014 	str	r0, [sp, #20]	; fField20
        26d2c8:	e3a00d96 	mov	r0, #9600	; 0x2580
        26d2cc:	e58d0018 	str	r0, [sp, #24]	; fField24
        26d2d0:	e58d9010 	str	r9, [sp, #16]	; fField16
        26d2d4:	e1a0100d 	mov	r1, sp
        26d2d8:	e1a00005 	mov	r0, r5
        26d2dc:	eb045e58 	bl	384c44 <TSerialChip::SetIOParms(TCMOSerialIOParms *)>
        26d2e0:	e1a00005 	mov	r0, r5
        26d2e4:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        26d2e8:	eb045e52 	bl	384c38 <TSerialChip::SetSpeed(unsigned long)>
        26d2ec:	e52d9050 	str	r9, [sp, -#80]!	; fField80
        26d2f0:	e28d0008 	add	r0, sp, #8	; 0x8
        26d2f4:	eb65159e 	bl	1bb2974 <$setjmp>
        26d2f8:	e3300000 	teq	r0, #0	; 0x0
        26d2fc:	1a000005 	bne	26d318 <TVoyagerPlatform::CheckForKeyboard(unsigned char)+0xe4>
        26d300:	e1a0000d 	mov	r0, sp
        26d304:	eb65cb5c 	bl	1be007c <$AddExceptionHandler>
        26d308:	e1a00005 	mov	r0, r5
        26d30c:	eb045e3a 	bl	384bfc <TSerialChip::PowerOn(void)>
        26d310:	ea00000a 	b	26d340 <TVoyagerPlatform::CheckForKeyboard(unsigned char)+0x10c>
        26d314:	74626c74 	strvcbt	r6, [r2], -#3188
        26d318:	e59d0060 	ldr	r0, [sp, #96]
        26d31c:	e59f10e0 	ldr	r1, [pc, #e0]	; 26d404 <TVoyagerPlatform::CheckForKeyboard(unsigned char)+0x1d0>
        26d320:	e5911000 	ldr	r1, [r1]
        26d324:	eb65d79a 	bl	1be3194 <$Subexception>
        26d328:	e3300000 	teq	r0, #0	; 0x0
        26d32c:	13a070b5 	movne	r7, #181	; 0xb5
        26d330:	12477b0a 	subne	r7, r7, #10240	; 0x2800
        26d334:	1a000001 	bne	26d340 <TVoyagerPlatform::CheckForKeyboard(unsigned char)+0x10c>
        26d338:	e1a0000d 	mov	r0, sp
        26d33c:	eb65d384 	bl	1be2154 <$NextHandler>
        26d340:	e1a0000d 	mov	r0, sp
        26d344:	eb65cf5b 	bl	1be10b8 <$ExitHandler>
        26d348:	e28dd06c 	add	sp, sp, #108	; 0x6c
        26d34c:	e3370000 	teq	r7, #0	; 0x0
        26d350:	1a000024 	bne	26d3e8 <TVoyagerPlatform::CheckForKeyboard(unsigned char)+0x1b4>
        26d354:	eb04960d 	bl	392b90 <EnterFIQAtomic>
        26d358:	e1a00005 	mov	r0, r5
        26d35c:	eb045e3b 	bl	384c50 <TSerialChip::Reconfigure(void)>
        26d360:	eb049612 	bl	392bb0 <ExitFIQAtomic>
        26d364:	e1a00005 	mov	r0, r5
        26d368:	e3a01072 	mov	r1, #114	; 0x72
        26d36c:	eb045dfe 	bl	384b6c <TSerialChip::PutByte(unsigned char)>
        26d370:	e1a00004 	mov	r0, r4
        26d374:	e3a01ffb 	mov	r1, #1004	; 0x3ec
        26d378:	e2811bb3 	add	r1, r1, #183296	; 0x2cc00
        26d37c:	eb668d27 	bl	1c10820 <TVoyagerPlatform::$Sleep(unsigned long)>
        26d380:	e1a00005 	mov	r0, r5
        26d384:	eb045e04 	bl	384b9c <TSerialChip::RxBufFull(void)>
        26d388:	e3300000 	teq	r0, #0	; 0x0
        26d38c:	0a000013 	beq	26d3e0 <TVoyagerPlatform::CheckForKeyboard(unsigned char)+0x1ac>
        26d390:	e24dd004 	sub	sp, sp, #4	; 0x4
        26d394:	e1a0100d 	mov	r1, sp
        26d398:	e1a00005 	mov	r0, r5
        26d39c:	eb045e46 	bl	384cbc <TSerialChip::GetByteAndStatus(unsigned char *)>
        26d3a0:	e3300000 	teq	r0, #0	; 0x0
        26d3a4:	1a000007 	bne	26d3c8 <TVoyagerPlatform::CheckForKeyboard(unsigned char)+0x194>
        26d3a8:	e5dd0000 	ldrb	r0, [sp]
        26d3ac:	e330008d 	teq	r0, #141	; 0x8d
        26d3b0:	03a08001 	moveq	r8, #1	; 0x1
        26d3b4:	0a000004 	beq	26d3cc <TVoyagerPlatform::CheckForKeyboard(unsigned char)+0x198>
        26d3b8:	e5dd0000 	ldrb	r0, [sp]
        26d3bc:	e33000ff 	teq	r0, #255	; 0xff
        26d3c0:	03a06001 	moveq	r6, #1	; 0x1
        26d3c4:	0a000000 	beq	26d3cc <TVoyagerPlatform::CheckForKeyboard(unsigned char)+0x198>
        26d3c8:	e3a06000 	mov	r6, #0	; 0x0
        26d3cc:	e28dd004 	add	sp, sp, #4	; 0x4
        26d3d0:	e1a00005 	mov	r0, r5
        26d3d4:	eb045df0 	bl	384b9c <TSerialChip::RxBufFull(void)>
        26d3d8:	e3300000 	teq	r0, #0	; 0x0
        26d3dc:	1affffeb 	bne	26d390 <TVoyagerPlatform::CheckForKeyboard(unsigned char)+0x15c>
        26d3e0:	e1a00005 	mov	r0, r5
        26d3e4:	eb045e01 	bl	384bf0 <TSerialChip::PowerOff(void)>
        26d3e8:	e1a01004 	mov	r1, r4
        26d3ec:	e1a00005 	mov	r0, r5
        26d3f0:	eb045dda 	bl	384b60 <TSerialChip::RemoveChipHandler(void *)>
        26d3f4:	e33a0000 	teq	sl, #0	; 0x0
        26d3f8:	01a00008 	moveq	r0, r8
        26d3fc:	11a00006 	movne	r0, r6
        26d400:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        26d404:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TVoyagerPlatform::StartKeyboardDriver(unsigned char)
 * Address: 0026d408
 */
TVoyagerPlatform::StartKeyboardDriver(unsigned char) {
    /*
        26d408:	e1a0c00d 	mov	ip, sp
        26d40c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26d410:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d414:	e20140ff 	and	r4, r1, #255	; 0xff
        26d418:	e24dd018 	sub	sp, sp, #24	; 0x18
        26d41c:	e1a0000d 	mov	r0, sp
        26d420:	eb6521af 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        26d424:	e1a0000d 	mov	r0, sp
        26d428:	eb652e13 	bl	1bb8c7c <TOptionArray::$Init(void)>
        26d42c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        26d430:	e1a0000d 	mov	r0, sp
        26d434:	e3a01303 	mov	r1, #201326592	; 0xc000000
        26d438:	eb6525ba 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        26d43c:	e1a0000d 	mov	r0, sp
        26d440:	e59f1094 	ldr	r1, [pc, #94]	; 26d4dc <TVoyagerPlatform::StartKeyboardDriver(unsigned char)+0xd4>
        26d444:	eb65363a 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
        26d448:	e1a0200d 	mov	r2, sp
        26d44c:	e59d100c 	ldr	r1, [sp, #12]
        26d450:	e28d000c 	add	r0, sp, #12	; 0xc
        26d454:	eb653212 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        26d458:	e24dd008 	sub	sp, sp, #8	; 0x8
        26d45c:	e1a0000d 	mov	r0, sp
        26d460:	eb665b85 	bl	1c0427c <TCMOSerialHWChipLoc::$__ct(void)>
        26d464:	e59f0074 	ldr	r0, [pc, #74]	; 26d4e0 <TVoyagerPlatform::StartKeyboardDriver(unsigned char)+0xd8>
        26d468:	e58d000c 	str	r0, [sp, #12]
        26d46c:	e1a0200d 	mov	r2, sp
        26d470:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        26d474:	e28d0014 	add	r0, sp, #20	; 0x14
        26d478:	eb653209 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        26d47c:	e1a0000d 	mov	r0, sp
        26d480:	eb5f049f 	bl	1a2e704 <TCMOKeyboardConfig::$__ct(void)>
        26d484:	e3a00000 	mov	r0, #0	; 0x0
        26d488:	e58d000c 	str	r0, [sp, #12]
        26d48c:	e5cd4010 	strb	r4, [sp, #16]	; fField16
        26d490:	e1a0200d 	mov	r2, sp
        26d494:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        26d498:	e28d0014 	add	r0, sp, #20	; 0x14
        26d49c:	eb653200 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        26d4a0:	e28dd010 	add	sp, sp, #16	; 0x10
        26d4a4:	e1a0100d 	mov	r1, sp
        26d4a8:	e28d0004 	add	r0, sp, #4	; 0x4
        26d4ac:	e3a02000 	mov	r2, #0	; 0x0
        26d4b0:	eb6529ba 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
        26d4b4:	e3a01000 	mov	r1, #0	; 0x0
        26d4b8:	e59d0000 	ldr	r0, [sp]
        26d4bc:	eb652dd3 	bl	1bb8c10 <TEndpoint::$EasyOpen(unsigned long)>
        26d4c0:	e59d0000 	ldr	r0, [sp]
        26d4c4:	eb6529ca 	bl	1bb7bf4 <TEndpoint::$DeleteLeavingTool(void)>
        26d4c8:	e28dd004 	add	sp, sp, #4	; 0x4
        26d4cc:	e1a0000d 	mov	r0, sp
        26d4d0:	e3a01000 	mov	r1, #0	; 0x0
        26d4d4:	eb652594 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        26d4d8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        26d4dc:	6b796264 	blvs	20c5e74 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0x4b561c>
        26d4e0:	74626c74 	strvcbt	r6, [r2], -#3188
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOnSubsystem(unsigned long)
 * Address: 0026d4e4
 */
TVoyagerPlatform::PowerOnSubsystem(unsigned long) {
    /*
        26d4e4:	e1a0c00d 	mov	ip, sp
        26d4e8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26d4ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d4f0:	e1a04000 	mov	r4, r0
        26d4f4:	e1a05001 	mov	r5, r1
        26d4f8:	eb667c43 	bl	1c0c60c <$GetGPIOInterfaceObject(void)>
        26d4fc:	e5840010 	str	r0, [r4, #16]	; fField16
        26d500:	e24dd004 	sub	sp, sp, #4	; 0x4
        26d504:	e1a0200d 	mov	r2, sp
        26d508:	e20510ff 	and	r1, r5, #255	; 0xff
        26d50c:	e1a06001 	mov	r6, r1
        26d510:	e1a00004 	mov	r0, r4
        26d514:	eb6688b0 	bl	1c0f7dc <TVoyagerPlatform::$GetPowerMapEntry(unsigned char, PowerMapEntry *)>
        26d518:	e1b07000 	movs	r7, r0
        26d51c:	1a00002a 	bne	26d5cc <TVoyagerPlatform::PowerOnSubsystem(unsigned long)+0xe8>
        26d520:	e5dd0001 	ldrb	r0, [sp, #1]
        26d524:	e310002b 	tst	r0, #43	; 0x2b
        26d528:	0a00001f 	beq	26d5ac <TVoyagerPlatform::PowerOnSubsystem(unsigned long)+0xc8>
        26d52c:	e1a00004 	mov	r0, r4
        26d530:	eb668cb8 	bl	1c10818 <TVoyagerPlatform::$GetMutex(void)>
        26d534:	e5dd0001 	ldrb	r0, [sp, #1]
        26d538:	e3100001 	tst	r0, #1	; 0x1
        26d53c:	11a01006 	movne	r1, r6
        26d540:	11a00004 	movne	r0, r4
        26d544:	1b668cb9 	blne	1c10830 <TVoyagerPlatform::$PowerOnSrc5v(unsigned char)>
        26d548:	e5dd0001 	ldrb	r0, [sp, #1]
        26d54c:	e3100002 	tst	r0, #2	; 0x2
        26d550:	11a01006 	movne	r1, r6
        26d554:	11a00004 	movne	r0, r4
        26d558:	1b668cb6 	blne	1c10838 <TVoyagerPlatform::$PowerOnSrc12v(unsigned char)>
        26d55c:	e5dd0001 	ldrb	r0, [sp, #1]
        26d560:	e3100008 	tst	r0, #8	; 0x8
        26d564:	11a01006 	movne	r1, r6
        26d568:	11a00004 	movne	r0, r4
        26d56c:	1b668cad 	blne	1c10828 <TVoyagerPlatform::$PowerOnIC5v(unsigned char)>
        26d570:	e3350001 	teq	r5, #1	; 0x1
        26d574:	1a000004 	bne	26d58c <TVoyagerPlatform::PowerOnSubsystem(unsigned long)+0xa8>
        26d578:	e5dd2001 	ldrb	r2, [sp, #1]
        26d57c:	e1a00004 	mov	r0, r4
        26d580:	e3a01001 	mov	r1, #1	; 0x1
        26d584:	eb668885 	bl	1c0f7a0 <TVoyagerPlatform::$SerialPort0LineDriverConfig(unsigned char, unsigned char)>
        26d588:	ea000005 	b	26d5a4 <TVoyagerPlatform::PowerOnSubsystem(unsigned long)+0xc0>
        26d58c:	e3350003 	teq	r5, #3	; 0x3
        26d590:	1a000003 	bne	26d5a4 <TVoyagerPlatform::PowerOnSubsystem(unsigned long)+0xc0>
        26d594:	e5dd2001 	ldrb	r2, [sp, #1]
        26d598:	e1a00004 	mov	r0, r4
        26d59c:	e3a01001 	mov	r1, #1	; 0x1
        26d5a0:	eb66887f 	bl	1c0f7a4 <TVoyagerPlatform::$SerialPort3LineDriverConfig(unsigned char, unsigned char)>
        26d5a4:	e1a00004 	mov	r0, r4
        26d5a8:	eb668c9b 	bl	1c1081c <TVoyagerPlatform::$RelMutex(void)>
        26d5ac:	e1a0100d 	mov	r1, sp
        26d5b0:	e1a00004 	mov	r0, r4
        26d5b4:	eb668ca1 	bl	1c10840 <TVoyagerPlatform::$TurnOnMiltonPwrRegBit(PowerMapEntry *)>
        26d5b8:	e5dd0001 	ldrb	r0, [sp, #1]
        26d5bc:	e3100010 	tst	r0, #16	; 0x10
        26d5c0:	11a01006 	movne	r1, r6
        26d5c4:	11a00004 	movne	r0, r4
        26d5c8:	1b668c9e 	blne	1c10848 <TVoyagerPlatform::$PowerOnDMA(unsigned char)>
        26d5cc:	e1a00007 	mov	r0, r7
        26d5d0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOffSubsystem(unsigned long)
 * Address: 0026d5d4
 */
TVoyagerPlatform::PowerOffSubsystem(unsigned long) {
    /*
        26d5d4:	e1a0c00d 	mov	ip, sp
        26d5d8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        26d5dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d5e0:	e1a04000 	mov	r4, r0
        26d5e4:	e1a05001 	mov	r5, r1
        26d5e8:	eb667c07 	bl	1c0c60c <$GetGPIOInterfaceObject(void)>
        26d5ec:	e5840010 	str	r0, [r4, #16]	; fField16
        26d5f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        26d5f4:	e1a0200d 	mov	r2, sp
        26d5f8:	e20510ff 	and	r1, r5, #255	; 0xff
        26d5fc:	e1a06001 	mov	r6, r1
        26d600:	e1a00004 	mov	r0, r4
        26d604:	eb668874 	bl	1c0f7dc <TVoyagerPlatform::$GetPowerMapEntry(unsigned char, PowerMapEntry *)>
        26d608:	e1b07000 	movs	r7, r0
        26d60c:	1a00002a 	bne	26d6bc <TVoyagerPlatform::PowerOffSubsystem(unsigned long)+0xe8>
        26d610:	e1a0100d 	mov	r1, sp
        26d614:	e1a00004 	mov	r0, r4
        26d618:	eb668c89 	bl	1c10844 <TVoyagerPlatform::$TurnOffMiltonPwrRegBit(PowerMapEntry *)>
        26d61c:	e5dd0001 	ldrb	r0, [sp, #1]
        26d620:	e3100010 	tst	r0, #16	; 0x10
        26d624:	11a01006 	movne	r1, r6
        26d628:	11a00004 	movne	r0, r4
        26d62c:	1b668c86 	blne	1c1084c <TVoyagerPlatform::$PowerOffDMA(unsigned char)>
        26d630:	e5dd0001 	ldrb	r0, [sp, #1]
        26d634:	e310002b 	tst	r0, #43	; 0x2b
        26d638:	0a00001f 	beq	26d6bc <TVoyagerPlatform::PowerOffSubsystem(unsigned long)+0xe8>
        26d63c:	e1a00004 	mov	r0, r4
        26d640:	eb668c74 	bl	1c10818 <TVoyagerPlatform::$GetMutex(void)>
        26d644:	e3350001 	teq	r5, #1	; 0x1
        26d648:	1a000004 	bne	26d660 <TVoyagerPlatform::PowerOffSubsystem(unsigned long)+0x8c>
        26d64c:	e1a00004 	mov	r0, r4
        26d650:	e3a02000 	mov	r2, #0	; 0x0
        26d654:	e3a01000 	mov	r1, #0	; 0x0
        26d658:	eb668850 	bl	1c0f7a0 <TVoyagerPlatform::$SerialPort0LineDriverConfig(unsigned char, unsigned char)>
        26d65c:	ea000005 	b	26d678 <TVoyagerPlatform::PowerOffSubsystem(unsigned long)+0xa4>
        26d660:	e3350003 	teq	r5, #3	; 0x3
        26d664:	1a000003 	bne	26d678 <TVoyagerPlatform::PowerOffSubsystem(unsigned long)+0xa4>
        26d668:	e1a00004 	mov	r0, r4
        26d66c:	e3a02000 	mov	r2, #0	; 0x0
        26d670:	e3a01000 	mov	r1, #0	; 0x0
        26d674:	eb66884a 	bl	1c0f7a4 <TVoyagerPlatform::$SerialPort3LineDriverConfig(unsigned char, unsigned char)>
        26d678:	e5dd0001 	ldrb	r0, [sp, #1]
        26d67c:	e3100008 	tst	r0, #8	; 0x8
        26d680:	11a01006 	movne	r1, r6
        26d684:	11a00004 	movne	r0, r4
        26d688:	1b668c67 	blne	1c1082c <TVoyagerPlatform::$PowerOffIC5v(unsigned char)>
        26d68c:	e5dd0001 	ldrb	r0, [sp, #1]
        26d690:	e3100002 	tst	r0, #2	; 0x2
        26d694:	11a01006 	movne	r1, r6
        26d698:	11a00004 	movne	r0, r4
        26d69c:	1b668c66 	blne	1c1083c <TVoyagerPlatform::$PowerOffSrc12v(unsigned char)>
        26d6a0:	e5dd0001 	ldrb	r0, [sp, #1]
        26d6a4:	e3100001 	tst	r0, #1	; 0x1
        26d6a8:	11a01006 	movne	r1, r6
        26d6ac:	11a00004 	movne	r0, r4
        26d6b0:	1b668c5f 	blne	1c10834 <TVoyagerPlatform::$PowerOffSrc5v(unsigned char)>
        26d6b4:	e1a00004 	mov	r0, r4
        26d6b8:	eb668c57 	bl	1c1081c <TVoyagerPlatform::$RelMutex(void)>
        26d6bc:	e1a00007 	mov	r0, r7
        26d6c0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::GetPowerMapEntry(unsigned char, PowerMapEntry *)
 * Address: 0026d6c4
 */
TVoyagerPlatform::GetPowerMapEntry(unsigned char, PowerMapEntry *) {
    /*
        26d6c4:	e92d4000 	stmdb	sp!, {lr}
        26d6c8:	e201c0ff 	and	ip, r1, #255	; 0xff
        26d6cc:	e3a030e8 	mov	r3, #232	; 0xe8
        26d6d0:	e2433b0a 	sub	r3, r3, #10240	; 0x2800
        26d6d4:	e3a01000 	mov	r1, #0	; 0x0
        26d6d8:	e5d0e05c 	ldrb	lr, [r0, #92]	; fField92
        26d6dc:	e33e0000 	teq	lr, #0	; 0x0
        26d6e0:	0a00000d 	beq	26d71c <TVoyagerPlatform::GetPowerMapEntry(unsigned char, PowerMapEntry *)+0x58>
        26d6e4:	e080e101 	add	lr, r0, r1, lsl #2
        26d6e8:	e5dee05c 	ldrb	lr, [lr, #92]	; fField92
        26d6ec:	e13e000c 	teq	lr, ip
        26d6f0:	1a000004 	bne	26d708 <TVoyagerPlatform::GetPowerMapEntry(unsigned char, PowerMapEntry *)+0x44>
        26d6f4:	e3a03000 	mov	r3, #0	; 0x0
        26d6f8:	e0800101 	add	r0, r0, r1, lsl #2
        26d6fc:	e590005c 	ldr	r0, [r0, #92]	; fField92
        26d700:	e5820000 	str	r0, [r2]
        26d704:	ea000004 	b	26d71c <TVoyagerPlatform::GetPowerMapEntry(unsigned char, PowerMapEntry *)+0x58>
        26d708:	e2811001 	add	r1, r1, #1	; 0x1
        26d70c:	e080e101 	add	lr, r0, r1, lsl #2
        26d710:	e5dee05c 	ldrb	lr, [lr, #92]	; fField92
        26d714:	e33e0000 	teq	lr, #0	; 0x0
        26d718:	1afffff1 	bne	26d6e4 <TVoyagerPlatform::GetPowerMapEntry(unsigned char, PowerMapEntry *)+0x20>
        26d71c:	e1a00003 	mov	r0, r3
        26d720:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::SetSubsystemPower(unsigned long, unsigned long)
 * Address: 0026d724
 */
TVoyagerPlatform::SetSubsystemPower(unsigned long, unsigned long) {
    /*
        26d724:	e92d4000 	stmdb	sp!, {lr}
        26d728:	e3a0c0e8 	mov	ip, #232	; 0xe8
        26d72c:	e24ccb0a 	sub	ip, ip, #10240	; 0x2800
        26d730:	e3a03000 	mov	r3, #0	; 0x0
        26d734:	e5d0e05c 	ldrb	lr, [r0, #92]	; fField92
        26d738:	e33e0000 	teq	lr, #0	; 0x0
        26d73c:	0a00000b 	beq	26d770 <TVoyagerPlatform::SetSubsystemPower(unsigned long, unsigned long)+0x4c>
        26d740:	e080e103 	add	lr, r0, r3, lsl #2
        26d744:	e5dee05c 	ldrb	lr, [lr, #92]	; fField92
        26d748:	e13e0001 	teq	lr, r1
        26d74c:	03a0c000 	moveq	ip, #0	; 0x0
        26d750:	00800103 	addeq	r0, r0, r3, lsl #2
        26d754:	05c0205d 	streqb	r2, [r0, #93]	; fField93
        26d758:	0a000004 	beq	26d770 <TVoyagerPlatform::SetSubsystemPower(unsigned long, unsigned long)+0x4c>
        26d75c:	e2833001 	add	r3, r3, #1	; 0x1
        26d760:	e080e103 	add	lr, r0, r3, lsl #2
        26d764:	e5dee05c 	ldrb	lr, [lr, #92]	; fField92
        26d768:	e33e0000 	teq	lr, #0	; 0x0
        26d76c:	1afffff3 	bne	26d740 <TVoyagerPlatform::SetSubsystemPower(unsigned long, unsigned long)+0x1c>
        26d770:	e1a0000c 	mov	r0, ip
        26d774:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::GetSubsystemPower(unsigned long, unsigned long *)
 * Address: 0026d778
 */
TVoyagerPlatform::GetSubsystemPower(unsigned long, unsigned long *) {
    /*
        26d778:	e1a0c00d 	mov	ip, sp
        26d77c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26d780:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d784:	e1a04002 	mov	r4, r2
        26d788:	e24dd004 	sub	sp, sp, #4	; 0x4
        26d78c:	e1a0200d 	mov	r2, sp
        26d790:	e20110ff 	and	r1, r1, #255	; 0xff
        26d794:	eb668810 	bl	1c0f7dc <TVoyagerPlatform::$GetPowerMapEntry(unsigned char, PowerMapEntry *)>
        26d798:	e3300000 	teq	r0, #0	; 0x0
        26d79c:	05dd1001 	ldreqb	r1, [sp, #1]
        26d7a0:	05841000 	streq	r1, [r4]
        26d7a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TVoyagerPlatform::PowerOffAllSubsystems(void)
 * Address: 0026d7a8
 */
TVoyagerPlatform::PowerOffAllSubsystems(void) {
    /*
        26d7a8:	e1a0c00d 	mov	ip, sp
        26d7ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26d7b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26d7b4:	e1a04000 	mov	r4, r0
        26d7b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        26d7bc:	eb0494bf 	bl	392ac0 <EnterAtomic>
        26d7c0:	e3a05000 	mov	r5, #0	; 0x0
        26d7c4:	e3a00811 	mov	r0, #1114112	; 0x110000
        26d7c8:	e280040f 	add	r0, r0, #251658240	; 0xf000000
        26d7cc:	e5845028 	str	r5, [r4, #40]	; fField40
        26d7d0:	e5901000 	ldr	r1, [r0]
        26d7d4:	e3c11040 	bic	r1, r1, #64	; 0x40
        26d7d8:	e5801000 	str	r1, [r0]
        26d7dc:	e1a00004 	mov	r0, r4
        26d7e0:	e3a02000 	mov	r2, #0	; 0x0
        26d7e4:	e3a01000 	mov	r1, #0	; 0x0
        26d7e8:	eb6687ec 	bl	1c0f7a0 <TVoyagerPlatform::$SerialPort0LineDriverConfig(unsigned char, unsigned char)>
        26d7ec:	e1a00004 	mov	r0, r4
        26d7f0:	e3a02000 	mov	r2, #0	; 0x0
        26d7f4:	e3a01000 	mov	r1, #0	; 0x0
        26d7f8:	eb6687e9 	bl	1c0f7a4 <TVoyagerPlatform::$SerialPort3LineDriverConfig(unsigned char, unsigned char)>
        26d7fc:	e5845024 	str	r5, [r4, #36]	; fField36
        26d800:	e1a0300d 	mov	r3, sp
        26d804:	e3a02000 	mov	r2, #0	; 0x0
        26d808:	e3a01023 	mov	r1, #35	; 0x23
        26d80c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        26d810:	eb5fffa6 	bl	1a6d6b0 <TBIOInterface::$WriteDIOPins(unsigned char, unsigned char, unsigned char *)>
        26d814:	e584501c 	str	r5, [r4, #28]	; fField28
        26d818:	e1a0300d 	mov	r3, sp
        26d81c:	e3a02000 	mov	r2, #0	; 0x0
        26d820:	e3a01005 	mov	r1, #5	; 0x5
        26d824:	e5940010 	ldr	r0, [r4, #16]	; fField16
        26d828:	eb667b78 	bl	1c0c610 <TGPIOInterface::$WriteGPIOData(unsigned char, unsigned char, unsigned char *)>
        26d82c:	e5845020 	str	r5, [r4, #32]	; fField32
        26d830:	e1a0300d 	mov	r3, sp
        26d834:	e3a02000 	mov	r2, #0	; 0x0
        26d838:	e3a01004 	mov	r1, #4	; 0x4
        26d83c:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
        26d840:	eb667b72 	bl	1c0c610 <TGPIOInterface::$WriteGPIOData(unsigned char, unsigned char, unsigned char *)>
        26d844:	eb0494b4 	bl	392b1c <ExitAtomic>
        26d848:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__16TVoyagerPlatformSFv
 * Address: 00387d54
 */
void TVoyagerPlatform::ClassInfo() {
    /*
        387d54:	e24f0044 	sub	r0, pc, #68	; 0x44
        387d58:	e1a0f00e 	mov	pc, lr
        387d5c:	e3a00000 	mov	r0, #0	; 0x0
        387d60:	e1a0f00e 	mov	pc, lr
        387d64:	54566f79 	ldrplb	r6, [r6], -#3961
        387d68:	61676572 	cmnvs	r7, r2, ror r5
        387d6c:	506c6174 	rsbpl	r6, ip, r4, ror r1
        387d70:	666f726d 	strvsbt	r7, [pc], -sp, ror #4
        387d74:	0054506c 	subeqs	r5, r4, ip, rrx
        387d78:	6174666f 	cmnvs	r4, pc, ror #12
        387d7c:	726d4472 	rsbvc	r4, sp, #1912602624	; 0x72000000
        387d80:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        387d8c:	eafffff0 	b	387d54 <ClassInfo__16TVoyagerPlatformSFv>
        387d90:	ea621e8c 	b	1c0f7c8 <TVoyagerPlatform::$New(void)>
        387d94:	ea621e8c 	b	1c0f7cc <TVoyagerPlatform::$Delete(void)>
        387d98:	ea621e8c 	b	1c0f7d0 <TVoyagerPlatform::$Init(void)>
        387d9c:	ea621e96 	b	1c0f7fc <TVoyagerPlatform::$BacklightTrigger(void)>
        387da0:	ea622296 	b	1c10800 <TVoyagerPlatform::$RegisterPowerSwitchInterrupt(void)>
        387da4:	ea622296 	b	1c10804 <TVoyagerPlatform::$EnableSysPowerInterrupt(void)>
        387da8:	ea622296 	b	1c10808 <TVoyagerPlatform::$InterruptHandler(void)>
        387dac:	ea622296 	b	1c1080c <TVoyagerPlatform::$TimerInterruptHandler(void)>
        387db0:	ea6222a6 	b	1c10850 <TVoyagerPlatform::$ResetZAPStoreCheck(void)>
        387db4:	ea621e86 	b	1c0f7d4 <TVoyagerPlatform::$PowerOnSubsystem(unsigned long)>
        387db8:	ea621e86 	b	1c0f7d8 <TVoyagerPlatform::$PowerOffSubsystem(unsigned long)>
        387dbc:	ea621e89 	b	1c0f7e8 <TVoyagerPlatform::$PowerOffAllSubsystems(void)>
        387dc0:	ea621e89 	b	1c0f7ec <TVoyagerPlatform::$PauseSystem(void)>
        387dc4:	ea621e89 	b	1c0f7f0 <TVoyagerPlatform::$PowerOffSystem(void)>
        387dc8:	ea621e89 	b	1c0f7f4 <TVoyagerPlatform::$PowerOnSystem(void)>
        387dcc:	ea621e89 	b	1c0f7f8 <TVoyagerPlatform::$TranslatePowerEvent(unsigned long)>
        387dd0:	ea62228e 	b	1c10810 <TVoyagerPlatform::$GetPCMCIAPowerSpec(unsigned long, unsigned long *)>
        387dd4:	ea62228e 	b	1c10814 <TVoyagerPlatform::$PowerOnDeviceCheck(unsigned char)>
        387dd8:	ea621e80 	b	1c0f7e0 <TVoyagerPlatform::$SetSubsystemPower(unsigned long, unsigned long)>
        387ddc:	ea621e80 	b	1c0f7e4 <TVoyagerPlatform::$GetSubsystemPower(unsigned long, unsigned long *)>
        387de0:	e1a0000f 	mov	r0, pc
        387de4:	e1a0f00e 	mov	pc, lr
        387de8:	54506c61 	ldrplb	r6, [r0], -#3169	; fField3169
        387dec:	74666f72 	strvcbt	r6, [r6], -#3954
        387df0:	6d447269 	sfmvs	f7, 2, [r4, -#420]
        387df4:	76657200 	strvcbt	r7, [r5], -r0, lsl #4
    */
}

