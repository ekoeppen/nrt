#include "include/TResistiveTablet.h"

/**
 * Symbol: Sizeof__16TResistiveTabletSFv
 * Address: 0005ac60
 */
void TResistiveTablet::Sizeof() {
    /*
         5ac60:	e3a000b4 	mov	r0, #180	; 0xb4
         5ac64:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::New(void)
 * Address: 0005ac68
 */
TResistiveTablet::New(void) {
    /*
         5ac68:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::SetTabletCalibration(Calibration const &)
 * Address: 0005ac6c
 */
TResistiveTablet::SetTabletCalibration(Calibration const &) {
    /*
         5ac6c:	e2800080 	add	r0, r0, #128	; 0x80
         5ac70:	e8b1100c 	ldmia	r1!, {r2, r3, ip}
         5ac74:	e8a0100c 	stmia	r0!, {r2, r3, ip}
         5ac78:	e8911008 	ldmia	r1, {r3, ip}
         5ac7c:	e8801008 	stmia	r0, {r3, ip}
         5ac80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::SetDoingCalibration(unsigned char, unsigned long *)
 * Address: 0005ac84
 */
TResistiveTablet::SetDoingCalibration(unsigned char, unsigned long *) {
    /*
         5ac84:	e5c0107c 	strb	r1, [r0, #124]	; fField124
         5ac88:	e3320000 	teq	r2, #0	; 0x0
         5ac8c:	01a0f00e 	moveq	pc, lr
         5ac90:	e3a00001 	mov	r0, #1	; 0x1
         5ac94:	e5820000 	str	r0, [r2]
         5ac98:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::GetTabletResolution(long *, long *)
 * Address: 0005ac9c
 */
TResistiveTablet::GetTabletResolution(long *, long *) {
    /*
         5ac9c:	e3a00632 	mov	r0, #52428800	; 0x3200000
         5aca0:	e5820000 	str	r0, [r2]
         5aca4:	e5810000 	str	r0, [r1]
         5aca8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::TabSetOrientation(long)
 * Address: 0005acac
 */
TResistiveTablet::TabSetOrientation(long) {
    /*
         5acac:	e5a010a4 	str	r1, [r0, #164]!	; fField164
         5acb0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::GetTabletState(void)
 * Address: 0005acb4
 */
TResistiveTablet::GetTabletState(void) {
    /*
         5acb4:	e590001c 	ldr	r0, [r0, #28]	; fField28
         5acb8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::GetFingerInputState(unsigned char *)
 * Address: 0005acbc
 */
TResistiveTablet::GetFingerInputState(unsigned char *) {
    /*
         5acbc:	e3a00f4e 	mov	r0, #312	; 0x138
         5acc0:	e2400b37 	sub	r0, r0, #56320	; 0xdc00
         5acc4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::SetFingerInputState(unsigned char)
 * Address: 0005acc8
 */
TResistiveTablet::SetFingerInputState(unsigned char) {
    /*
         5acc8:	e3a00f4e 	mov	r0, #312	; 0x138
         5accc:	e2400b37 	sub	r0, r0, #56320	; 0xdc00
         5acd0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::RecalibrateTabletAfterRotate(void)
 * Address: 0005acd4
 */
TResistiveTablet::RecalibrateTabletAfterRotate(void) {
    /*
         5acd4:	e3a00000 	mov	r0, #0	; 0x0
         5acd8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::TabletNeedsRecalibration(void)
 * Address: 0005acdc
 */
TResistiveTablet::TabletNeedsRecalibration(void) {
    /*
         5acdc:	e59f001c 	ldr	r0, [pc, #1c]	; 5ad00 <TResistiveTablet::TabletNeedsRecalibration(void)+0x24>
         5ace0:	e5900138 	ldr	r0, [r0, #312]	; fField312
         5ace4:	e2400044 	sub	r0, r0, #68	; 0x44
         5ace8:	e2800afd 	add	r0, r0, #1036288	; 0xfd000
         5acec:	e28005e3 	add	r0, r0, #952107008	; 0x38c00000
         5acf0:	e2900102 	adds	r0, r0, #-2147483648	; 0x80000000
         5acf4:	13a00001 	movne	r0, #1	; 0x1
         5acf8:	e20000ff 	and	r0, r0, #255	; 0xff
         5acfc:	e1a0f00e 	mov	pc, lr
         5ad00:	0c1061c4 	ldfeqs	f6, [r0], -#784
    */
}

/**
 * Symbol: TResistiveTablet::StartBypassTablet(void)
 * Address: 0005ad04
 */
TResistiveTablet::StartBypassTablet(void) {
    /*
         5ad04:	e1a0c00d 	mov	ip, sp
         5ad08:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5ad0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ad10:	e1a04000 	mov	r4, r0
         5ad14:	e3a05000 	mov	r5, #0	; 0x0
         5ad18:	eb0cdf68 	bl	392ac0 <EnterAtomic>
         5ad1c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         5ad20:	e3300000 	teq	r0, #0	; 0x0
         5ad24:	13300008 	teqne	r0, #8	; 0x8
         5ad28:	13e05000 	mvnne	r5, #0	; 0x0
         5ad2c:	1a000003 	bne	5ad40 <TResistiveTablet::StartBypassTablet(void)+0x3c>
         5ad30:	e3a00008 	mov	r0, #8	; 0x8
         5ad34:	e584001c 	str	r0, [r4, #28]	; fField28
         5ad38:	e1a00004 	mov	r0, r4
         5ad3c:	eb6a4633 	bl	1aec610 <TResistiveTablet::$SetNextState(void)>
         5ad40:	eb0cdf75 	bl	392b1c <ExitAtomic>
         5ad44:	e1a00005 	mov	r0, r5
         5ad48:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TResistiveTablet::Delete(void)
 * Address: 0005ad4c
 */
TResistiveTablet::Delete(void) {
    /*
         5ad4c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::StopBypassTablet(void)
 * Address: 0005ad50
 */
TResistiveTablet::StopBypassTablet(void) {
    /*
         5ad50:	e1a0c00d 	mov	ip, sp
         5ad54:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5ad58:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ad5c:	e1a04000 	mov	r4, r0
         5ad60:	e3a05000 	mov	r5, #0	; 0x0
         5ad64:	eb0cdf55 	bl	392ac0 <EnterAtomic>
         5ad68:	e594001c 	ldr	r0, [r4, #28]	; fField28
         5ad6c:	e3300008 	teq	r0, #8	; 0x8
         5ad70:	13e05000 	mvnne	r5, #0	; 0x0
         5ad74:	1a000001 	bne	5ad80 <TResistiveTablet::StopBypassTablet(void)+0x30>
         5ad78:	e1a00004 	mov	r0, r4
         5ad7c:	eb6a4216 	bl	1aeb5dc <TResistiveTablet::$PenUp(void)>
         5ad80:	eb0cdf65 	bl	392b1c <ExitAtomic>
         5ad84:	e1a00005 	mov	r0, r5
         5ad88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TResistiveTablet::ReturnTabletToConsciousness(unsigned long, unsigned long, unsigned long)
 * Address: 0005ad8c
 */
TResistiveTablet::ReturnTabletToConsciousness(unsigned long, unsigned long, unsigned long) {
    /*
         5ad8c:	ea6a4a50 	b	1aed6d4 <TResistiveTablet::$WakeUp(void)>
    */
}

/**
 * Symbol: TResistiveTablet::TabPenEntry(void)
 * Address: 0005ad90
 */
TResistiveTablet::TabPenEntry(void) {
    /*
         5ad90:	e1a0c00d 	mov	ip, sp
         5ad94:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5ad98:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ad9c:	e1a04000 	mov	r4, r0
         5ada0:	e59f0050 	ldr	r0, [pc, #50]	; 5adf8 <TResistiveTablet::TabPenEntry(void)+0x68>
         5ada4:	e5900000 	ldr	r0, [r0]
         5ada8:	e3a05000 	mov	r5, #0	; 0x0
         5adac:	e2844074 	add	r4, r4, #116	; 0x74
         5adb0:	e8840021 	stmia	r4, {r0, r5}
         5adb4:	e2444074 	sub	r4, r4, #116	; 0x74
         5adb8:	e59400b0 	ldr	r0, [r4, #176]	; fField176
         5adbc:	eb6839b4 	bl	1a69494 <TADC::$ClearADCPenWait(void)>
         5adc0:	e3a00000 	mov	r0, #0	; 0x0
         5adc4:	eb6e9ccf 	bl	1c02108 <$TBCWakeUpInkerFromInterrupt(unsigned long)>
         5adc8:	e59410a8 	ldr	r1, [r4, #168]	; fField168
         5adcc:	e59f0028 	ldr	r0, [pc, #28]	; 5adfc <TResistiveTablet::TabPenEntry(void)+0x6c>	; fField28
         5add0:	eb684a32 	bl	1a6d6a0 <TBIOInterface::$DisableInterrupt(KeynesIntObject *)>
         5add4:	e59f0024 	ldr	r0, [pc, #24]	; 5ae00 <TResistiveTablet::TabPenEntry(void)+0x70>	; fField24
         5add8:	e5900000 	ldr	r0, [r0]
         5addc:	e5840064 	str	r0, [r4, #100]	; fField100
         5ade0:	e3a00005 	mov	r0, #5	; 0x5
         5ade4:	e584001c 	str	r0, [r4, #28]	; fField28
         5ade8:	e1a00004 	mov	r0, r4
         5adec:	eb6a4607 	bl	1aec610 <TResistiveTablet::$SetNextState(void)>
         5adf0:	e1a00005 	mov	r0, r5
         5adf4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5adf8:	0f181800 	swieq	0x00181800
         5adfc:	0c100e98 	ldceq	14, cr0, [r0], -#608
         5ae00:	0c100b30 	ldceq	11, cr0, [r0], -#192
    */
}

/**
 * Symbol: TResistiveTablet::PenUp(void)
 * Address: 0005ae04
 */
TResistiveTablet::PenUp(void) {
    /*
         5ae04:	e1a0c00d 	mov	ip, sp
         5ae08:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5ae0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ae10:	e1a04000 	mov	r4, r0
         5ae14:	e59f0030 	ldr	r0, [pc, #30]	; 5ae4c <TResistiveTablet::PenUp(void)+0x48>
         5ae18:	e5d00004 	ldrb	r0, [r0, #4]	; fField4
         5ae1c:	e3300000 	teq	r0, #0	; 0x0
         5ae20:	11a00004 	movne	r0, r4
         5ae24:	1b6a5257 	blne	1aef788 <TResistiveTablet::$EnablePenDownInt(void)>
         5ae28:	e3a00000 	mov	r0, #0	; 0x0
         5ae2c:	e584001c 	str	r0, [r4, #28]	; fField28
         5ae30:	e3a00001 	mov	r0, #1	; 0x1
         5ae34:	e5c4002c 	strb	r0, [r4, #44]	; fField44
         5ae38:	e3a00b2d 	mov	r0, #46080	; 0xb400
         5ae3c:	e5840064 	str	r0, [r4, #100]	; fField100
         5ae40:	e59f0008 	ldr	r0, [pc, #8]	; 5ae50 <TResistiveTablet::PenUp(void)+0x4c>
         5ae44:	e5a40048 	str	r0, [r4, #72]!	; fField72
         5ae48:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         5ae4c:	0c100b30 	ldceq	11, cr0, [r0], -#192
         5ae50:	0001869f 	muleq	r1, pc, r6
    */
}

/**
 * Symbol: TResistiveTablet::SetNextState(void)
 * Address: 0005ae54
 */
TResistiveTablet::SetNextState(void) {
    /*
         5ae54:	e1a0c00d 	mov	ip, sp
         5ae58:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5ae5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ae60:	e1a04000 	mov	r4, r0
         5ae64:	e590001c 	ldr	r0, [r0, #28]	; fField28
         5ae68:	e59f2058 	ldr	r2, [pc, #58]	; 5aec8 <TResistiveTablet::SetNextState(void)+0x74>
         5ae6c:	e59f1058 	ldr	r1, [pc, #58]	; 5aecc <TResistiveTablet::SetNextState(void)+0x78>
         5ae70:	e3500009 	cmp	r0, #9	; 0x9
         5ae74:	908ff100 	addls	pc, pc, r0, lsl #2
         5ae78:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         5ae7c:	ea000029 	b	5af28 <TResistiveTablet::SetNextState(void)+0xd4>
         5ae80:	ea000009 	b	5aeac <TResistiveTablet::SetNextState(void)+0x58>
         5ae84:	ea000011 	b	5aed0 <TResistiveTablet::SetNextState(void)+0x7c>
         5ae88:	ea000017 	b	5aeec <TResistiveTablet::SetNextState(void)+0x98>
         5ae8c:	ea00001d 	b	5af08 <TResistiveTablet::SetNextState(void)+0xb4>
         5ae90:	ea000027 	b	5af34 <TResistiveTablet::SetNextState(void)+0xe0>
         5ae94:	ea00002b 	b	5af48 <TResistiveTablet::SetNextState(void)+0xf4>
         5ae98:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         5ae9c:	eaffffff 	b	5aea0 <TResistiveTablet::SetNextState(void)+0x4c>
         5aea0:	e5b400b0 	ldr	r0, [r4, #176]!	; fField176
         5aea4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5aea8:	ea68397a 	b	1a69498 <TADC::$Discharge(void)>
         5aeac:	e1a03004 	mov	r3, r4
         5aeb0:	e92d0008 	stmdb	sp!, {r3}
         5aeb4:	e1a03002 	mov	r3, r2
         5aeb8:	e5b400b0 	ldr	r0, [r4, #176]!	; fField176
         5aebc:	e5b1200c 	ldr	r2, [r1, #12]!
         5aec0:	e3a01003 	mov	r1, #3	; 0x3
         5aec4:	ea000015 	b	5af20 <TResistiveTablet::SetNextState(void)+0xcc>
         5aec8:	01aef790 	streqb	pc, [lr, r0]!
         5aecc:	0c100b30 	ldceq	11, cr0, [r0], -#192
         5aed0:	e1a03004 	mov	r3, r4
         5aed4:	e92d0008 	stmdb	sp!, {r3}
         5aed8:	e1a03002 	mov	r3, r2
         5aedc:	e5b400b0 	ldr	r0, [r4, #176]!	; fField176
         5aee0:	e5b12008 	ldr	r2, [r1, #8]!
         5aee4:	e3a01001 	mov	r1, #1	; 0x1
         5aee8:	ea00000c 	b	5af20 <TResistiveTablet::SetNextState(void)+0xcc>
         5aeec:	e1a03004 	mov	r3, r4
         5aef0:	e92d0008 	stmdb	sp!, {r3}
         5aef4:	e1a03002 	mov	r3, r2
         5aef8:	e5b400b0 	ldr	r0, [r4, #176]!	; fField176
         5aefc:	e5b12008 	ldr	r2, [r1, #8]!
         5af00:	e3a01002 	mov	r1, #2	; 0x2
         5af04:	ea000005 	b	5af20 <TResistiveTablet::SetNextState(void)+0xcc>
         5af08:	e1a03004 	mov	r3, r4
         5af0c:	e92d0008 	stmdb	sp!, {r3}
         5af10:	e1a03002 	mov	r3, r2
         5af14:	e5b400b0 	ldr	r0, [r4, #176]!	; fField176
         5af18:	e5b1200c 	ldr	r2, [r1, #12]!
         5af1c:	e3a01004 	mov	r1, #4	; 0x4
         5af20:	eb6ec5bb 	bl	1c0c614 <TADC::$GetSample(ADCMuxType, unsigned long, void (*)(void *, long, unsigned long), void *)>
         5af24:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         5af28:	e1a00004 	mov	r0, r4
         5af2c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5af30:	ea6a5214 	b	1aef788 <TResistiveTablet::$EnablePenDownInt(void)>
         5af34:	e59400b0 	ldr	r0, [r4, #176]	; fField176
         5af38:	eb683956 	bl	1a69498 <TADC::$Discharge(void)>
         5af3c:	e5941064 	ldr	r1, [r4, #100]	; fField100
         5af40:	e1a00004 	mov	r0, r4
         5af44:	ea000003 	b	5af58 <TResistiveTablet::SetNextState(void)+0x104>
         5af48:	e59400b0 	ldr	r0, [r4, #176]	; fField176
         5af4c:	eb683951 	bl	1a69498 <TADC::$Discharge(void)>
         5af50:	e1a00004 	mov	r0, r4
         5af54:	e3a01b12 	mov	r1, #18432	; 0x4800
         5af58:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5af5c:	ea6a45ac 	b	1aec614 <TResistiveTablet::$SetNextTime(unsigned long)>
    */
}

/**
 * Symbol: TResistiveTablet::SetNextTime(unsigned long)
 * Address: 0005af60
 */
TResistiveTablet::SetNextTime(unsigned long) {
    /*
         5af60:	e59f2034 	ldr	r2, [pc, #34]	; 5af9c <TResistiveTablet::SetNextTime(unsigned long)+0x3c>
         5af64:	e5922000 	ldr	r2, [r2]
         5af68:	e5903074 	ldr	r3, [r0, #116]	; fField116
         5af6c:	e0422003 	sub	r2, r2, r3
         5af70:	e0412002 	sub	r2, r1, r2
         5af74:	e3a03066 	mov	r3, #102	; 0x66
         5af78:	e2833c0e 	add	r3, r3, #3584	; 0xe00
         5af7c:	e1520003 	cmp	r2, r3
         5af80:	31a02003 	movcc	r2, r3
         5af84:	e1520001 	cmp	r2, r1
         5af88:	81a02003 	movhi	r2, r3
         5af8c:	e3a01001 	mov	r1, #1	; 0x1
         5af90:	e580101c 	str	r1, [r0, #28]	; fField28
         5af94:	e1a01002 	mov	r1, r2
         5af98:	ea6a51f9 	b	1aef784 <TResistiveTablet::$SetUpTabTimer(unsigned long)>
         5af9c:	0f181800 	swieq	0x00181800
    */
}

/**
 * Symbol: TResistiveTablet::HandleSample(void)
 * Address: 0005afa0
 */
TResistiveTablet::HandleSample(void) {
    /*
         5afa0:	e1a0c00d 	mov	ip, sp
         5afa4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         5afa8:	e24cb004 	sub	fp, ip, #4	; 0x4
         5afac:	e1a04000 	mov	r4, r0
         5afb0:	eb6a3d66 	bl	1aea550 <TResistiveTablet::$ConvertSample(void)>
         5afb4:	e1a05000 	mov	r5, r0
         5afb8:	e3a00006 	mov	r0, #6	; 0x6
         5afbc:	e335000f 	teq	r5, #15	; 0xf
         5afc0:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         5afc4:	e205100f 	and	r1, r5, #15	; 0xf
         5afc8:	e3a07000 	mov	r7, #0	; 0x0
         5afcc:	e3a06005 	mov	r6, #5	; 0x5
         5afd0:	e331000e 	teq	r1, #14	; 0xe
         5afd4:	1a00000b 	bne	5b008 <TResistiveTablet::HandleSample(void)+0x68>
         5afd8:	e5d4002c 	ldrb	r0, [r4, #44]	; fField44
         5afdc:	e3300000 	teq	r0, #0	; 0x0
         5afe0:	1a000004 	bne	5aff8 <TResistiveTablet::HandleSample(void)+0x58>
         5afe4:	e1a00005 	mov	r0, r5
         5afe8:	e3a01000 	mov	r1, #0	; 0x0
         5afec:	eb6e9c44 	bl	1c02104 <$TBCInsertTabletSample__FUlT1>
         5aff0:	e3300000 	teq	r0, #0	; 0x0
         5aff4:	1a000019 	bne	5b060 <TResistiveTablet::HandleSample(void)+0xc0>
         5aff8:	e1a00004 	mov	r0, r4
         5affc:	eb6a4176 	bl	1aeb5dc <TResistiveTablet::$PenUp(void)>
         5b000:	e1a00007 	mov	r0, r7
         5b004:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         5b008:	e3510007 	cmp	r1, #7	; 0x7
         5b00c:	891ba8f0 	ldmhidb	fp, {r4, r5, r6, r7, fp, sp, pc}
         5b010:	e5d4002c 	ldrb	r0, [r4, #44]	; fField44
         5b014:	e3300000 	teq	r0, #0	; 0x0
         5b018:	0a00000a 	beq	5b048 <TResistiveTablet::HandleSample(void)+0xa8>
         5b01c:	e3a01000 	mov	r1, #0	; 0x0
         5b020:	e3a0000d 	mov	r0, #13	; 0xd
         5b024:	eb6e9c36 	bl	1c02104 <$TBCInsertTabletSample__FUlT1>
         5b028:	e3300000 	teq	r0, #0	; 0x0
         5b02c:	1a000002 	bne	5b03c <TResistiveTablet::HandleSample(void)+0x9c>
         5b030:	e1a00004 	mov	r0, r4
         5b034:	eb6a3d46 	bl	1aea554 <TResistiveTablet::$D2Detect(void)>
         5b038:	e5c4702c 	strb	r7, [r4, #44]	; fField44
         5b03c:	e3a00b2d 	mov	r0, #46080	; 0xb400
         5b040:	e5a40064 	str	r0, [r4, #100]!	; fField100
         5b044:	ea000005 	b	5b060 <TResistiveTablet::HandleSample(void)+0xc0>
         5b048:	e1a00004 	mov	r0, r4
         5b04c:	eb6a3d40 	bl	1aea554 <TResistiveTablet::$D2Detect(void)>
         5b050:	e3300000 	teq	r0, #0	; 0x0
         5b054:	11a00005 	movne	r0, r5
         5b058:	13a01000 	movne	r1, #0	; 0x0
         5b05c:	1b6e9c28 	blne	1c02104 <$TBCInsertTabletSample__FUlT1>
         5b060:	e1a00006 	mov	r0, r6
         5b064:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TResistiveTablet::ConvertSample(void)
 * Address: 0005b068
 */
TResistiveTablet::ConvertSample(void) {
    /*
         5b068:	e92d4010 	stmdb	sp!, {r4, lr}
         5b06c:	e5901078 	ldr	r1, [r0, #120]	; fField120
         5b070:	e281e001 	add	lr, r1, #1	; 0x1
         5b074:	e580e078 	str	lr, [r0, #120]	; fField120
         5b078:	e590203c 	ldr	r2, [r0, #60]	; fField60
         5b07c:	e1a03002 	mov	r3, r2
         5b080:	e5901040 	ldr	r1, [r0, #64]	; fField64
         5b084:	e1510002 	cmp	r1, r2
         5b088:	81a02001 	movhi	r2, r1
         5b08c:	81a01003 	movhi	r1, r3
         5b090:	e59f3020 	ldr	r3, [pc, #20]	; 5b0b8 <TResistiveTablet::ConvertSample(void)+0x50>	; fField20
         5b094:	e3a0c00f 	mov	ip, #15	; 0xf
         5b098:	e5934018 	ldr	r4, [r3, #24]	; fField24
         5b09c:	e1510004 	cmp	r1, r4
         5b0a0:	3a000005 	bcc	5b0bc <TResistiveTablet::ConvertSample(void)+0x54>
         5b0a4:	e5b30020 	ldr	r0, [r3, #32]!
         5b0a8:	e15e0000 	cmp	lr, r0
         5b0ac:	83a0000e 	movhi	r0, #14	; 0xe
         5b0b0:	88bd8010 	ldmhiia	sp!, {r4, pc}
         5b0b4:	ea000004 	b	5b0cc <TResistiveTablet::ConvertSample(void)+0x64>
         5b0b8:	0c100b30 	ldceq	11, cr0, [r0], -#192
         5b0bc:	e0421001 	sub	r1, r2, r1
         5b0c0:	e5b3201c 	ldr	r2, [r3, #28]!	; fField28
         5b0c4:	e1510002 	cmp	r1, r2
         5b0c8:	9a000001 	bls	5b0d4 <TResistiveTablet::ConvertSample(void)+0x6c>
         5b0cc:	e1a0000c 	mov	r0, ip
         5b0d0:	e8bd8010 	ldmia	sp!, {r4, pc}
         5b0d4:	e5d0107c 	ldrb	r1, [r0, #124]	; fField124
         5b0d8:	e3310000 	teq	r1, #0	; 0x0
         5b0dc:	0a000009 	beq	5b108 <TResistiveTablet::ConvertSample(void)+0xa0>
         5b0e0:	e5901034 	ldr	r1, [r0, #52]	; fField52
         5b0e4:	e1a01801 	mov	r1, r1, lsl #16
         5b0e8:	e1a01821 	mov	r1, r1, lsr #16
         5b0ec:	e3c1100f 	bic	r1, r1, #15	; 0xf
         5b0f0:	e5900030 	ldr	r0, [r0, #48]	; fField48
         5b0f4:	e1a00800 	mov	r0, r0, lsl #16
         5b0f8:	e1a00820 	mov	r0, r0, lsr #16
         5b0fc:	e3c0000f 	bic	r0, r0, #15	; 0xf
         5b100:	e1810700 	orr	r0, r1, r0, lsl #14
         5b104:	ea00002d 	b	5b1c0 <TResistiveTablet::ConvertSample(void)+0x158>
         5b108:	e5901030 	ldr	r1, [r0, #48]	; fField48
         5b10c:	e1a01241 	mov	r1, r1, asr #4
         5b110:	e5902080 	ldr	r2, [r0, #128]	; fField128
         5b114:	e0010192 	mul	r1, r2, r1
         5b118:	e5902088 	ldr	r2, [r0, #136]	; fField136
         5b11c:	e0811002 	add	r1, r1, r2
         5b120:	e5902034 	ldr	r2, [r0, #52]	; fField52
         5b124:	e1a03242 	mov	r3, r2, asr #4
         5b128:	e5902084 	ldr	r2, [r0, #132]	; fField132
         5b12c:	e0030392 	mul	r3, r2, r3
         5b130:	e590208c 	ldr	r2, [r0, #140]	; fField140
         5b134:	e0833002 	add	r3, r3, r2
         5b138:	e59020a4 	ldr	r2, [r0, #164]	; fField164
         5b13c:	e2522001 	subs	r2, r2, #1	; 0x1
         5b140:	42822004 	addmi	r2, r2, #4	; 0x4
         5b144:	e3320002 	teq	r2, #2	; 0x2
         5b148:	13320003 	teqne	r2, #3	; 0x3
         5b14c:	0590c09c 	ldreq	ip, [r0, #156]	; fField156
         5b150:	004c1001 	subeq	r1, ip, r1
         5b154:	e3320001 	teq	r2, #1	; 0x1
         5b158:	13320002 	teqne	r2, #2	; 0x2
         5b15c:	0590c0a0 	ldreq	ip, [r0, #160]	; fField160
         5b160:	004c3003 	subeq	r3, ip, r3
         5b164:	e590c094 	ldr	ip, [r0, #148]	; fField148
         5b168:	e15c0001 	cmp	ip, r1
         5b16c:	ca000002 	bgt	5b17c <TResistiveTablet::ConvertSample(void)+0x114>
         5b170:	e590c09c 	ldr	ip, [r0, #156]	; fField156
         5b174:	e15c0001 	cmp	ip, r1
         5b178:	aa000000 	bge	5b180 <TResistiveTablet::ConvertSample(void)+0x118>
         5b17c:	e1a0100c 	mov	r1, ip
         5b180:	e5900098 	ldr	r0, [r0, #152]	; fField152
         5b184:	e1500003 	cmp	r0, r3
         5b188:	c1a03000 	movgt	r3, r0
         5b18c:	e3320001 	teq	r2, #1	; 0x1
         5b190:	13320003 	teqne	r2, #3	; 0x3
         5b194:	01a00001 	moveq	r0, r1
         5b198:	01a01003 	moveq	r1, r3
         5b19c:	01a03000 	moveq	r3, r0
         5b1a0:	e3c1033e 	bic	r0, r1, #-134217728	; 0xf8000000
         5b1a4:	e3c00c1f 	bic	r0, r0, #7936	; 0x1f00
         5b1a8:	e3c000ff 	bic	r0, r0, #255	; 0xff
         5b1ac:	e3c3133e 	bic	r1, r3, #-134217728	; 0xf8000000
         5b1b0:	e3c11c1f 	bic	r1, r1, #7936	; 0x1f00
         5b1b4:	e3c110ff 	bic	r1, r1, #255	; 0xff
         5b1b8:	e1a00280 	mov	r0, r0, lsl #5
         5b1bc:	e18004c1 	orr	r0, r0, r1, asr #9
         5b1c0:	e3800004 	orr	r0, r0, #4	; 0x4
         5b1c4:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TResistiveTablet::Init(Rect const &)
 * Address: 0005b1c8
 */
TResistiveTablet::Init(Rect const &) {
    /*
         5b1c8:	e1a0c00d 	mov	ip, sp
         5b1cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5b1d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         5b1d4:	e1a04000 	mov	r4, r0
         5b1d8:	e1a05001 	mov	r5, r1
         5b1dc:	e28010b4 	add	r1, r0, #180	; 0xb4
         5b1e0:	e3a02000 	mov	r2, #0	; 0x0
         5b1e4:	eb6dee5a 	bl	1bd6b54 <$LockHeapRange>
         5b1e8:	e1a00004 	mov	r0, r4
         5b1ec:	eb6a5166 	bl	1aef78c <TResistiveTablet::$DumpRegs(void)>
         5b1f0:	eb683498 	bl	1a68458 <$InitADC(void)>
         5b1f4:	eb6ec507 	bl	1c0c618 <$GetADCObject(void)>
         5b1f8:	e58400b0 	str	r0, [r4, #176]	; fField176
         5b1fc:	e5950002 	ldr	r0, [r5, #2]
         5b200:	e1a00820 	mov	r0, r0, lsr #16
         5b204:	e1a00800 	mov	r0, r0, lsl #16
         5b208:	e5840098 	str	r0, [r4, #152]	; fField152
         5b20c:	e5950000 	ldr	r0, [r5]
         5b210:	e1a00820 	mov	r0, r0, lsr #16
         5b214:	e1a00800 	mov	r0, r0, lsl #16
         5b218:	e5840094 	str	r0, [r4, #148]	; fField148
         5b21c:	e5950006 	ldr	r0, [r5, #6]
         5b220:	e1a00820 	mov	r0, r0, lsr #16
         5b224:	e2400001 	sub	r0, r0, #1	; 0x1
         5b228:	e1a00800 	mov	r0, r0, lsl #16
         5b22c:	e58400a0 	str	r0, [r4, #160]	; fField160
         5b230:	e5950004 	ldr	r0, [r5, #4]	; fField4
         5b234:	e1a00820 	mov	r0, r0, lsr #16
         5b238:	e2400001 	sub	r0, r0, #1	; 0x1
         5b23c:	e1a00800 	mov	r0, r0, lsl #16
         5b240:	e584009c 	str	r0, [r4, #156]	; fField156
         5b244:	e3e0005b 	mvn	r0, #91	; 0x5b
         5b248:	e2400a02 	sub	r0, r0, #8192	; 0x2000
         5b24c:	e5840080 	str	r0, [r4, #128]	; fField128
         5b250:	e3a00f7b 	mov	r0, #492	; 0x1ec
         5b254:	e2800b05 	add	r0, r0, #5120	; 0x1400
         5b258:	e5840084 	str	r0, [r4, #132]	; fField132
         5b25c:	e59f00c0 	ldr	r0, [pc, #c0]	; 5b324 <TResistiveTablet::Init(Rect const &)+0x15c>
         5b260:	e5840088 	str	r0, [r4, #136]	; fField136
         5b264:	e3a00fc5 	mov	r0, #788	; 0x314
         5b268:	e2400946 	sub	r0, r0, #1146880	; 0x118000
         5b26c:	e584008c 	str	r0, [r4, #140]	; fField140
         5b270:	e3a000df 	mov	r0, #223	; 0xdf
         5b274:	e2800c25 	add	r0, r0, #9472	; 0x2500
         5b278:	e5840018 	str	r0, [r4, #24]	; fField24
         5b27c:	e3a000c8 	mov	r0, #200	; 0xc8
         5b280:	e5c40090 	strb	r0, [r4, #144]	; fField144
         5b284:	e3a000e6 	mov	r0, #230	; 0xe6
         5b288:	e5c40091 	strb	r0, [r4, #145]	; fField145
         5b28c:	e3a00faf 	mov	r0, #700	; 0x2bc
         5b290:	e5840024 	str	r0, [r4, #36]	; fField36
         5b294:	e3a00ffa 	mov	r0, #1000	; 0x3e8
         5b298:	e3a05000 	mov	r5, #0	; 0x0
         5b29c:	e5840028 	str	r0, [r4, #40]	; fField40
         5b2a0:	e5845014 	str	r5, [r4, #20]	; fField20
         5b2a4:	e5845078 	str	r5, [r4, #120]	; fField120
         5b2a8:	e5c4507c 	strb	r5, [r4, #124]	; fField124
         5b2ac:	e1a00004 	mov	r0, r4
         5b2b0:	e3a01002 	mov	r1, #2	; 0x2
         5b2b4:	eb6a48fc 	bl	1aed6ac <TResistiveTablet::$TabSetOrientation(long)>
         5b2b8:	eb0cde00 	bl	392ac0 <EnterAtomic>
         5b2bc:	eb683c94 	bl	1a6a514 <$GetBIOInterfaceObject(void)>
         5b2c0:	e3a03002 	mov	r3, #2	; 0x2
         5b2c4:	e58400ac 	str	r0, [r4, #172]	; fField172
         5b2c8:	e92d0008 	stmdb	sp!, {r3}
         5b2cc:	e59f3054 	ldr	r3, [pc, #54]	; 5b328 <TResistiveTablet::Init(Rect const &)+0x160>
         5b2d0:	e1a02004 	mov	r2, r4
         5b2d4:	e59f0050 	ldr	r0, [pc, #50]	; 5b32c <TResistiveTablet::Init(Rect const &)+0x164>
         5b2d8:	e3a01009 	mov	r1, #9	; 0x9
         5b2dc:	eb6848ec 	bl	1a6d694 <TBIOInterface::$RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)>
         5b2e0:	e28dd004 	add	sp, sp, #4	; 0x4
         5b2e4:	e58400a8 	str	r0, [r4, #168]	; fField168
         5b2e8:	e1a00004 	mov	r0, r4
         5b2ec:	eb6a40ba 	bl	1aeb5dc <TResistiveTablet::$PenUp(void)>
         5b2f0:	e59f2038 	ldr	r2, [pc, #38]	; 5b330 <TResistiveTablet::Init(Rect const &)+0x168>
         5b2f4:	e1a01004 	mov	r1, r4
         5b2f8:	e3a03002 	mov	r3, #2	; 0x2
         5b2fc:	e3a00201 	mov	r0, #268435456	; 0x10000000
         5b300:	eb6df659 	bl	1bd8c6c <$RegisterInterrupt(unsigned long, void *, long (*)(void *), void *)>
         5b304:	e5840010 	str	r0, [r4, #16]	; fField16
         5b308:	eb0cde03 	bl	392b1c <ExitAtomic>
         5b30c:	e3a00006 	mov	r0, #6	; 0x6
         5b310:	e584001c 	str	r0, [r4, #28]	; fField28
         5b314:	e1a00004 	mov	r0, r4
         5b318:	eb6a44bc 	bl	1aec610 <TResistiveTablet::$SetNextState(void)>
         5b31c:	e1a00005 	mov	r0, r5
         5b320:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5b324:	01f5f6b0 	ldreqh	pc, [r5, #96]!
         5b328:	01aed6a4 	moveq	sp, r4, lsr #13
         5b32c:	0c100e98 	ldceq	14, cr0, [r0], -#608
         5b330:	01aef780 	moveq	pc, r0, lsl #15
    */
}

/**
 * Symbol: TResistiveTablet::D2Detect(void)
 * Address: 0005b334
 */
TResistiveTablet::D2Detect(void) {
    /*
         5b334:	e1a0c00d 	mov	ip, sp
         5b338:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         5b33c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5b340:	e1a04000 	mov	r4, r0
         5b344:	e3a00001 	mov	r0, #1	; 0x1
         5b348:	e59f10b0 	ldr	r1, [pc, #b0]	; 5b400 <TResistiveTablet::D2Detect(void)+0xcc>
         5b34c:	e5d11024 	ldrb	r1, [r1, #36]	; fField36
         5b350:	e3310000 	teq	r1, #0	; 0x0
         5b354:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         5b358:	e5941048 	ldr	r1, [r4, #72]	; fField72
         5b35c:	e59f70a0 	ldr	r7, [pc, #a0]	; 5b404 <TResistiveTablet::D2Detect(void)+0xd0>
         5b360:	e1310007 	teq	r1, r7
         5b364:	0a000033 	beq	5b438 <TResistiveTablet::D2Detect(void)+0x104>
         5b368:	e5942030 	ldr	r2, [r4, #48]	; fField48
         5b36c:	e0416222 	sub	r6, r1, r2, lsr #4
         5b370:	e5941034 	ldr	r1, [r4, #52]	; fField52
         5b374:	e594204c 	ldr	r2, [r4, #76]	; fField76
         5b378:	e042e221 	sub	lr, r2, r1, lsr #4
         5b37c:	e5941050 	ldr	r1, [r4, #80]	; fField80
         5b380:	e0412006 	sub	r2, r1, r6
         5b384:	e3520000 	cmp	r2, #0	; 0x0
         5b388:	d2622000 	rsble	r2, r2, #0	; 0x0
         5b38c:	e5941054 	ldr	r1, [r4, #84]	; fField84
         5b390:	e041100e 	sub	r1, r1, lr
         5b394:	e3510000 	cmp	r1, #0	; 0x0
         5b398:	d2611000 	rsble	r1, r1, #0	; 0x0
         5b39c:	e3a05000 	mov	r5, #0	; 0x0
         5b3a0:	e5943058 	ldr	r3, [r4, #88]	; fField88
         5b3a4:	e1330007 	teq	r3, r7
         5b3a8:	0a000016 	beq	5b408 <TResistiveTablet::D2Detect(void)+0xd4>
         5b3ac:	e3530064 	cmp	r3, #100	; 0x64
         5b3b0:	d3a03064 	movle	r3, #100	; 0x64
         5b3b4:	e1520083 	cmp	r2, r3, lsl #1
         5b3b8:	ca000004 	bgt	5b3d0 <TResistiveTablet::D2Detect(void)+0x9c>
         5b3bc:	e594305c 	ldr	r3, [r4, #92]	; fField92
         5b3c0:	e3530064 	cmp	r3, #100	; 0x64
         5b3c4:	d3a03064 	movle	r3, #100	; 0x64
         5b3c8:	e1510083 	cmp	r1, r3, lsl #1
         5b3cc:	da000010 	ble	5b414 <TResistiveTablet::D2Detect(void)+0xe0>
         5b3d0:	e5d4002d 	ldrb	r0, [r4, #45]	; fField45
         5b3d4:	e3500004 	cmp	r0, #4	; 0x4
         5b3d8:	b2800001 	addlt	r0, r0, #1	; 0x1
         5b3dc:	b5c4002d 	strltb	r0, [r4, #45]	; fField45
         5b3e0:	ba000004 	blt	5b3f8 <TResistiveTablet::D2Detect(void)+0xc4>
         5b3e4:	e3a01000 	mov	r1, #0	; 0x0
         5b3e8:	e3a0000e 	mov	r0, #14	; 0xe
         5b3ec:	eb6e9b44 	bl	1c02104 <$TBCInsertTabletSample__FUlT1>
         5b3f0:	e1a00004 	mov	r0, r4
         5b3f4:	eb6a4078 	bl	1aeb5dc <TResistiveTablet::$PenUp(void)>
         5b3f8:	e1a00005 	mov	r0, r5
         5b3fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         5b400:	0c100b30 	ldceq	11, cr0, [r0], -#192
         5b404:	0001869f 	muleq	r1, pc, r6
         5b408:	e3520064 	cmp	r2, #100	; 0x64
         5b40c:	d3510064 	cmple	r1, #100	; 0x64
         5b410:	c3a00000 	movgt	r0, #0	; 0x0
         5b414:	e2822001 	add	r2, r2, #1	; 0x1
         5b418:	e2811001 	add	r1, r1, #1	; 0x1
         5b41c:	e584105c 	str	r1, [r4, #92]	; fField92
         5b420:	e5842058 	str	r2, [r4, #88]	; fField88
         5b424:	e5c4502d 	strb	r5, [r4, #45]	; fField45
         5b428:	e2844050 	add	r4, r4, #80	; 0x50
         5b42c:	e8844040 	stmia	r4, {r6, lr}
         5b430:	e2444050 	sub	r4, r4, #80	; 0x50
         5b434:	ea000001 	b	5b440 <TResistiveTablet::D2Detect(void)+0x10c>
         5b438:	e3a00000 	mov	r0, #0	; 0x0
         5b43c:	e5847058 	str	r7, [r4, #88]	; fField88
         5b440:	e5941030 	ldr	r1, [r4, #48]	; fField48
         5b444:	e1a01221 	mov	r1, r1, lsr #4
         5b448:	e5841048 	str	r1, [r4, #72]	; fField72
         5b44c:	e5941034 	ldr	r1, [r4, #52]	; fField52
         5b450:	e1a01221 	mov	r1, r1, lsr #4
         5b454:	e5a4104c 	str	r1, [r4, #76]!	; fField76
         5b458:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TResistiveTablet::DoACMODInterrupt(void)
 * Address: 0005b45c
 */
TResistiveTablet::DoACMODInterrupt(void) {
    /*
         5b45c:	e1a0c00d 	mov	ip, sp
         5b460:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5b464:	e24cb004 	sub	fp, ip, #4	; 0x4
         5b468:	e1a04000 	mov	r4, r0
         5b46c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         5b470:	eb6e8679 	bl	1bfce5c <$ClearInterrupt>
         5b474:	e5940010 	ldr	r0, [r4, #16]	; fField16
         5b478:	eb6e8678 	bl	1bfce60 <$DisableInterrupt>
         5b47c:	e1a05000 	mov	r5, r0
         5b480:	e5940014 	ldr	r0, [r4, #20]	; fField20
         5b484:	e3300000 	teq	r0, #0	; 0x0
         5b488:	1a000009 	bne	5b4b4 <TResistiveTablet::DoACMODInterrupt(void)+0x58>
         5b48c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         5b490:	e3300001 	teq	r0, #1	; 0x1
         5b494:	059f0014 	ldreq	r0, [pc, #14]	; 5b4b0 <TResistiveTablet::DoACMODInterrupt(void)+0x54>
         5b498:	05900000 	ldreq	r0, [r0]
         5b49c:	05840074 	streq	r0, [r4, #116]	; fField116
         5b4a0:	e3350000 	teq	r5, #0	; 0x0
         5b4a4:	01a00004 	moveq	r0, r4
         5b4a8:	0b6a4458 	bleq	1aec610 <TResistiveTablet::$SetNextState(void)>
         5b4ac:	ea000006 	b	5b4cc <TResistiveTablet::DoACMODInterrupt(void)+0x70>
         5b4b0:	0f182400 	swieq	0x00182400
         5b4b4:	e2400001 	sub	r0, r0, #1	; 0x1
         5b4b8:	e5840014 	str	r0, [r4, #20]	; fField20
         5b4bc:	e3a01002 	mov	r1, #2	; 0x2
         5b4c0:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         5b4c4:	eb6e8243 	bl	1bfbdd8 <$EnableInterrupt>
         5b4c8:	e1a05000 	mov	r5, r0
         5b4cc:	e1a00005 	mov	r0, r5
         5b4d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TResistiveTablet::SetUpTabTimer(unsigned long)
 * Address: 0005b4d4
 */
TResistiveTablet::SetUpTabTimer(unsigned long) {
    /*
         5b4d4:	e3a02000 	mov	r2, #0	; 0x0
         5b4d8:	e5903018 	ldr	r3, [r0, #24]	; fField24
         5b4dc:	e1530001 	cmp	r3, r1
         5b4e0:	2a000003 	bcs	5b4f4 <TResistiveTablet::SetUpTabTimer(unsigned long)+0x20>
         5b4e4:	e0411003 	sub	r1, r1, r3
         5b4e8:	e2822001 	add	r2, r2, #1	; 0x1
         5b4ec:	e1530001 	cmp	r3, r1
         5b4f0:	3afffffb 	bcc	5b4e4 <TResistiveTablet::SetUpTabTimer(unsigned long)+0x10>
         5b4f4:	e5802014 	str	r2, [r0, #20]	; fField20
         5b4f8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         5b4fc:	e3a01002 	mov	r1, #2	; 0x2
         5b500:	ea6e8234 	b	1bfbdd8 <$EnableInterrupt>
    */
}

/**
 * Symbol: TResistiveTablet::EnablePenDownInt(void)
 * Address: 0005b504
 */
TResistiveTablet::EnablePenDownInt(void) {
    /*
         5b504:	e1a0c00d 	mov	ip, sp
         5b508:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5b50c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5b510:	e1a04000 	mov	r4, r0
         5b514:	e59010a8 	ldr	r1, [r0, #168]	; fField168
         5b518:	e59000ac 	ldr	r0, [r0, #172]	; fField172
         5b51c:	eb68485f 	bl	1a6d6a0 <TBIOInterface::$DisableInterrupt(KeynesIntObject *)>
         5b520:	e59400b0 	ldr	r0, [r4, #176]	; fField176
         5b524:	eb6837d9 	bl	1a69490 <TADC::$PrimeADCPenWait(void)>
         5b528:	e59400ac 	ldr	r0, [r4, #172]	; fField172
         5b52c:	e59410a8 	ldr	r1, [r4, #168]	; fField168
         5b530:	eb684858 	bl	1a6d698 <TBIOInterface::$ClearInterrupt(KeynesIntObject *)>
         5b534:	e5b410a8 	ldr	r1, [r4, #168]!	; fField168
         5b538:	e5940004 	ldr	r0, [r4, #4]	; fField4
         5b53c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5b540:	ea684855 	b	1a6d69c <TBIOInterface::$EnableInterrupt(KeynesIntObject *)>
    */
}

/**
 * Symbol: TResistiveTablet::DumpRegs(void)
 * Address: 0005b544
 */
TResistiveTablet::DumpRegs(void) {
    /*
         5b544:	e1a0c00d 	mov	ip, sp
         5b548:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5b54c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5b550:	e3a00912 	mov	r0, #294912	; 0x48000
         5b554:	e280040f 	add	r0, r0, #251658240	; 0xf000000
         5b558:	e5900000 	ldr	r0, [r0]
         5b55c:	e3a00a4a 	mov	r0, #303104	; 0x4a000
         5b560:	e280040f 	add	r0, r0, #251658240	; 0xf000000
         5b564:	e5900000 	ldr	r0, [r0]
         5b568:	e59f0024 	ldr	r0, [pc, #24]	; 5b594 <TResistiveTablet::DumpRegs(void)+0x50>	; fField24
         5b56c:	e1a04000 	mov	r4, r0
         5b570:	e3a01013 	mov	r1, #19	; 0x13
         5b574:	eb684851 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         5b578:	e1a00004 	mov	r0, r4
         5b57c:	e3a01012 	mov	r1, #18	; 0x12
         5b580:	eb68484e 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         5b584:	e1a00004 	mov	r0, r4
         5b588:	e3a01011 	mov	r1, #17	; 0x11
         5b58c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5b590:	ea68484a 	b	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         5b594:	0c100e98 	ldceq	14, cr0, [r0], -#608
    */
}

/**
 * Symbol: TResistiveTablet::SampleResult(long, unsigned long)
 * Address: 0005b598
 */
TResistiveTablet::SampleResult(long, unsigned long) {
    /*
         5b598:	e1a0c00d 	mov	ip, sp
         5b59c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5b5a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         5b5a4:	e1a04000 	mov	r4, r0
         5b5a8:	e3310000 	teq	r1, #0	; 0x0
         5b5ac:	1a00001a 	bne	5b61c <TResistiveTablet::SampleResult(long, unsigned long)+0x84>
         5b5b0:	e594001c 	ldr	r0, [r4, #28]	; fField28
         5b5b4:	e3300001 	teq	r0, #1	; 0x1
         5b5b8:	03a00002 	moveq	r0, #2	; 0x2
         5b5bc:	0584203c 	streq	r2, [r4, #60]	; fField60
         5b5c0:	0a000013 	beq	5b614 <TResistiveTablet::SampleResult(long, unsigned long)+0x7c>
         5b5c4:	e3300002 	teq	r0, #2	; 0x2
         5b5c8:	03a00003 	moveq	r0, #3	; 0x3
         5b5cc:	05842030 	streq	r2, [r4, #48]	; fField48
         5b5d0:	0a00000f 	beq	5b614 <TResistiveTablet::SampleResult(long, unsigned long)+0x7c>
         5b5d4:	e3300003 	teq	r0, #3	; 0x3
         5b5d8:	0a00000b 	beq	5b60c <TResistiveTablet::SampleResult(long, unsigned long)+0x74>
         5b5dc:	e3300004 	teq	r0, #4	; 0x4
         5b5e0:	1a00000d 	bne	5b61c <TResistiveTablet::SampleResult(long, unsigned long)+0x84>
         5b5e4:	e5842040 	str	r2, [r4, #64]	; fField64
         5b5e8:	e594103c 	ldr	r1, [r4, #60]	; fField60
         5b5ec:	e0820001 	add	r0, r2, r1
         5b5f0:	e1a000a0 	mov	r0, r0, lsr #1
         5b5f4:	e1a00220 	mov	r0, r0, lsr #4
         5b5f8:	e5840038 	str	r0, [r4, #56]	; fField56
         5b5fc:	e1a00004 	mov	r0, r4
         5b600:	eb6a3fe9 	bl	1aeb5ac <TResistiveTablet::$HandleSample(void)>
         5b604:	e584001c 	str	r0, [r4, #28]	; fField28
         5b608:	ea000005 	b	5b624 <TResistiveTablet::SampleResult(long, unsigned long)+0x8c>
         5b60c:	e3a00004 	mov	r0, #4	; 0x4
         5b610:	e5842034 	str	r2, [r4, #52]	; fField52
         5b614:	e584001c 	str	r0, [r4, #28]	; fField28
         5b618:	ea000004 	b	5b630 <TResistiveTablet::SampleResult(long, unsigned long)+0x98>
         5b61c:	e1a00004 	mov	r0, r4
         5b620:	eb6a505b 	bl	1aef794 <TResistiveTablet::$ErrorPenUp(void)>
         5b624:	e594001c 	ldr	r0, [r4, #28]	; fField28
         5b628:	e3300009 	teq	r0, #9	; 0x9
         5b62c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         5b630:	e1a00004 	mov	r0, r4
         5b634:	e3a01000 	mov	r1, #0	; 0x0
         5b638:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5b63c:	ea6a5050 	b	1aef784 <TResistiveTablet::$SetUpTabTimer(unsigned long)>
    */
}

/**
 * Symbol: TResistiveTablet::ErrorPenUp(void)
 * Address: 0005b640
 */
TResistiveTablet::ErrorPenUp(void) {
    /*
         5b640:	e1a0c00d 	mov	ip, sp
         5b644:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5b648:	e24cb004 	sub	fp, ip, #4	; 0x4
         5b64c:	e1a04000 	mov	r4, r0
         5b650:	e3a00a0e 	mov	r0, #57344	; 0xe000
         5b654:	e3a01000 	mov	r1, #0	; 0x0
         5b658:	e584003c 	str	r0, [r4, #60]	; fField60
         5b65c:	e5841030 	str	r1, [r4, #48]	; fField48
         5b660:	e5840040 	str	r0, [r4, #64]	; fField64
         5b664:	e3a00c0e 	mov	r0, #3584	; 0xe00
         5b668:	e5840038 	str	r0, [r4, #56]	; fField56
         5b66c:	e5841034 	str	r1, [r4, #52]	; fField52
         5b670:	e1a00004 	mov	r0, r4
         5b674:	eb6a3fcc 	bl	1aeb5ac <TResistiveTablet::$HandleSample(void)>
         5b678:	e5a4001c 	str	r0, [r4, #28]!	; fField28
         5b67c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TResistiveTablet::WakeUp(void)
 * Address: 0005b680
 */
TResistiveTablet::WakeUp(void) {
    /*
         5b680:	e1a0c00d 	mov	ip, sp
         5b684:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5b688:	e24cb004 	sub	fp, ip, #4	; 0x4
         5b68c:	e1a04000 	mov	r4, r0
         5b690:	eb0cdd0a 	bl	392ac0 <EnterAtomic>
         5b694:	e594001c 	ldr	r0, [r4, #28]	; fField28
         5b698:	e3300009 	teq	r0, #9	; 0x9
         5b69c:	1a000005 	bne	5b6b8 <TResistiveTablet::WakeUp(void)+0x38>
         5b6a0:	e59400b0 	ldr	r0, [r4, #176]	; fField176
         5b6a4:	eb683778 	bl	1a6948c <TADC::$WakeUp(void)>
         5b6a8:	e3a00000 	mov	r0, #0	; 0x0
         5b6ac:	e584001c 	str	r0, [r4, #28]	; fField28
         5b6b0:	e1a00004 	mov	r0, r4
         5b6b4:	eb6a43d5 	bl	1aec610 <TResistiveTablet::$SetNextState(void)>
         5b6b8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         5b6bc:	ea0cdd16 	b	392b1c <ExitAtomic>
    */
}

/**
 * Symbol: TResistiveTablet::ShutDown(void)
 * Address: 0005b6c0
 */
TResistiveTablet::ShutDown(void) {
    /*
         5b6c0:	e1a0c00d 	mov	ip, sp
         5b6c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5b6c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         5b6cc:	e1a04000 	mov	r4, r0
         5b6d0:	e590001c 	ldr	r0, [r0, #28]	; fField28
         5b6d4:	e3300009 	teq	r0, #9	; 0x9
         5b6d8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         5b6dc:	eb0cdcf7 	bl	392ac0 <EnterAtomic>
         5b6e0:	e1a00004 	mov	r0, r4
         5b6e4:	eb6a502a 	bl	1aef794 <TResistiveTablet::$ErrorPenUp(void)>
         5b6e8:	e3a05009 	mov	r5, #9	; 0x9
         5b6ec:	e584501c 	str	r5, [r4, #28]	; fField28
         5b6f0:	eb0cdd09 	bl	392b1c <ExitAtomic>
         5b6f4:	e59400b0 	ldr	r0, [r4, #176]	; fField176
         5b6f8:	eb683762 	bl	1a69488 <TADC::$ShutDown(void)>
         5b6fc:	e584501c 	str	r5, [r4, #28]	; fField28
         5b700:	e1a00004 	mov	r0, r4
         5b704:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5b708:	ea6a43c0 	b	1aec610 <TResistiveTablet::$SetNextState(void)>
    */
}

/**
 * Symbol: TResistiveTablet::TabletIdle(void)
 * Address: 0005b70c
 */
TResistiveTablet::TabletIdle(void) {
    /*
         5b70c:	e3a00000 	mov	r0, #0	; 0x0
         5b710:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::GetSampleRate(void)
 * Address: 0005b714
 */
TResistiveTablet::GetSampleRate(void) {
    /*
         5b714:	e5900064 	ldr	r0, [r0, #100]	; fField100
         5b718:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::SetSampleRate(unsigned long)
 * Address: 0005b71c
 */
TResistiveTablet::SetSampleRate(unsigned long) {
    /*
         5b71c:	e5a01064 	str	r1, [r0, #100]!	; fField100
         5b720:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResistiveTablet::GetTabletCalibration(Calibration *)
 * Address: 0005b724
 */
TResistiveTablet::GetTabletCalibration(Calibration *) {
    /*
         5b724:	e1a02001 	mov	r2, r1
         5b728:	e2801080 	add	r1, r0, #128	; 0x80
         5b72c:	e8b11009 	ldmia	r1!, {r0, r3, ip}
         5b730:	e8a21009 	stmia	r2!, {r0, r3, ip}
         5b734:	e8911008 	ldmia	r1, {r3, ip}
         5b738:	e8821008 	stmia	r2, {r3, ip}
         5b73c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__16TResistiveTabletSFv
 * Address: 00385cf4
 */
void TResistiveTablet::ClassInfo() {
    /*
        385cf4:	e24f0044 	sub	r0, pc, #68	; 0x44
        385cf8:	e1a0f00e 	mov	pc, lr
        385cfc:	e3a00000 	mov	r0, #0	; 0x0
        385d00:	e1a0f00e 	mov	pc, lr
        385d04:	54526573 	ldrplb	r6, [r2], -#1395
        385d08:	69737469 	ldmvsdb	r3!, {r0, r3, r5, r6, sl, ip, sp, lr}^
        385d0c:	76655461 	strvcbt	r5, [r5], -r1, ror #8
        385d10:	626c6574 	rsbvs	r6, ip, #486539264	; 0x1d000000
        385d14:	00545461 	subeqs	r5, r4, r1, ror #8
        385d18:	626c6574 	rsbvs	r6, ip, #486539264	; 0x1d000000
        385d1c:	44726976 	ldrmibt	r6, [r2], -#2422
        385d20:	65720000 	ldrvsb	r0, [r2]!
        385d24:	00000000 	andeq	r0, r0, r0
        385d28:	eafffff1 	b	385cf4 <ClassInfo__16TResistiveTabletSFv>
        385d2c:	ea5d9629 	b	1aeb5d8 <TResistiveTablet::$New(void)>
        385d30:	ea5d9209 	b	1aea55c <TResistiveTablet::$Delete(void)>
        385d34:	ea5d9620 	b	1aeb5bc <TResistiveTablet::$Init(Rect const &)>
        385d38:	ea5d9e65 	b	1aed6d4 <TResistiveTablet::$WakeUp(void)>
        385d3c:	ea5d9a3d 	b	1aec638 <TResistiveTablet::$ShutDown(void)>
        385d40:	ea5d9e5f 	b	1aed6c4 <TResistiveTablet::$TabletIdle(void)>
        385d44:	ea5d920b 	b	1aea578 <TResistiveTablet::$GetSampleRate(void)>
        385d48:	ea5d9a33 	b	1aec61c <TResistiveTablet::$SetSampleRate(unsigned long)>
        385d4c:	ea5d960d 	b	1aeb588 <TResistiveTablet::$GetTabletCalibration(Calibration *)>
        385d50:	ea5d9a34 	b	1aec628 <TResistiveTablet::$SetTabletCalibration(Calibration const &)>
        385d54:	ea5d9627 	b	1aeb5f8 <TResistiveTablet::$SetDoingCalibration(unsigned char, unsigned long *)>
        385d58:	ea5d960e 	b	1aeb598 <TResistiveTablet::$GetTabletResolution(long *, long *)>
        385d5c:	ea5d9e52 	b	1aed6ac <TResistiveTablet::$TabSetOrientation(long)>
        385d60:	ea5d960f 	b	1aeb5a4 <TResistiveTablet::$GetTabletState(void)>
        385d64:	ea5d9200 	b	1aea56c <TResistiveTablet::$GetFingerInputState(unsigned char *)>
        385d68:	ea5d9a25 	b	1aec604 <TResistiveTablet::$SetFingerInputState(unsigned char)>
        385d6c:	ea5d961d 	b	1aeb5e8 <TResistiveTablet::$RecalibrateTabletAfterRotate(void)>
        385d70:	ea5da688 	b	1aef798 <TResistiveTablet::$TabletNeedsRecalibration(void)>
        385d74:	ea5d9a32 	b	1aec644 <TResistiveTablet::$StartBypassTablet(void)>
        385d78:	ea5d9a34 	b	1aec650 <TResistiveTablet::$StopBypassTablet(void)>
        385d7c:	ea5d961b 	b	1aeb5f0 <TResistiveTablet::$ReturnTabletToConsciousness(unsigned long, unsigned long, unsigned long)>
        385d80:	e1a0000f 	mov	r0, pc
        385d84:	e1a0f00e 	mov	pc, lr
        385d88:	50426174 	subpl	r6, r2, r4, ror r1
        385d8c:	74657279 	strvcbt	r7, [r5], -#633
        385d90:	44726976 	ldrmibt	r6, [r2], -#2422
        385d94:	65720000 	ldrvsb	r0, [r2]!
    */
}

