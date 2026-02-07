#include "include/TTabletDriver.h"

/**
 * Symbol: New__13TTabletDriverSFPc
 * Address: 00385b8c
 */
void TTabletDriver::New() {
    /*
        385b8c:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        385b90:	e1a01000 	mov	r1, r0
        385b94:	ebfffff6 	bl	385b74 <TExternalNewtEventHandler::HandleEvent(TExternalNewtEvent *)+0xc>
        385b98:	eb612701 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        385b9c:	e1100000 	tst	r0, r0
        385ba0:	e28dd004 	add	sp, sp, #4	; 0x4
        385ba4:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        385ba8:	01a0f00e 	moveq	pc, lr
        385bac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385bb0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385bb4:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TTabletDriver::Delete(void)
 * Address: 00385bb8
 */
TTabletDriver::Delete(void) {
    /*
        385bb8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385bbc:	e92d4001 	stmdb	sp!, {r0, lr}
        385bc0:	e28fe004 	add	lr, pc, #4	; 0x4
        385bc4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385bc8:	e28cf00c 	add	pc, ip, #12	; 0xc
        385bcc:	e8bd4001 	ldmia	sp!, {r0, lr}
        385bd0:	ea613361 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TTabletDriver::Init(Rect const &)
 * Address: 00385bd4
 */
TTabletDriver::Init(Rect const &) {
    /*
        385bd4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385bd8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385bdc:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TTabletDriver::WakeUp(void)
 * Address: 00385be0
 */
TTabletDriver::WakeUp(void) {
    /*
        385be0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385be4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385be8:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TTabletDriver::ShutDown(void)
 * Address: 00385bec
 */
TTabletDriver::ShutDown(void) {
    /*
        385bec:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385bf0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385bf4:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TTabletDriver::TabletIdle(void)
 * Address: 00385bf8
 */
TTabletDriver::TabletIdle(void) {
    /*
        385bf8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385bfc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c00:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TTabletDriver::GetSampleRate(void)
 * Address: 00385c04
 */
TTabletDriver::GetSampleRate(void) {
    /*
        385c04:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385c08:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c0c:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TTabletDriver::SetSampleRate(unsigned long)
 * Address: 00385c10
 */
TTabletDriver::SetSampleRate(unsigned long) {
    /*
        385c10:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385c14:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c18:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TTabletDriver::GetTabletCalibration(Calibration *)
 * Address: 00385c1c
 */
TTabletDriver::GetTabletCalibration(Calibration *) {
    /*
        385c1c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385c20:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c24:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TTabletDriver::SetTabletCalibration(Calibration const &)
 * Address: 00385c28
 */
TTabletDriver::SetTabletCalibration(Calibration const &) {
    /*
        385c28:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385c2c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c30:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TTabletDriver::SetDoingCalibration(unsigned char, unsigned long *)
 * Address: 00385c34
 */
TTabletDriver::SetDoingCalibration(unsigned char, unsigned long *) {
    /*
        385c34:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385c38:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c3c:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: TTabletDriver::GetTabletResolution(long *, long *)
 * Address: 00385c40
 */
TTabletDriver::GetTabletResolution(long *, long *) {
    /*
        385c40:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385c44:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c48:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: TTabletDriver::TabSetOrientation(long)
 * Address: 00385c4c
 */
TTabletDriver::TabSetOrientation(long) {
    /*
        385c4c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385c50:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c54:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: TTabletDriver::GetTabletState(void)
 * Address: 00385c58
 */
TTabletDriver::GetTabletState(void) {
    /*
        385c58:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385c5c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c60:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: TTabletDriver::GetFingerInputState(unsigned char *)
 * Address: 00385c64
 */
TTabletDriver::GetFingerInputState(unsigned char *) {
    /*
        385c64:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385c68:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c6c:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: TTabletDriver::SetFingerInputState(unsigned char)
 * Address: 00385c70
 */
TTabletDriver::SetFingerInputState(unsigned char) {
    /*
        385c70:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385c74:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c78:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: TTabletDriver::RecalibrateTabletAfterRotate(void)
 * Address: 00385c7c
 */
TTabletDriver::RecalibrateTabletAfterRotate(void) {
    /*
        385c7c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385c80:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c84:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: TTabletDriver::TabletNeedsRecalibration(void)
 * Address: 00385c88
 */
TTabletDriver::TabletNeedsRecalibration(void) {
    /*
        385c88:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385c8c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c90:	e28cf04c 	add	pc, ip, #76	; 0x4c
    */
}

/**
 * Symbol: TTabletDriver::StartBypassTablet(void)
 * Address: 00385c94
 */
TTabletDriver::StartBypassTablet(void) {
    /*
        385c94:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385c98:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385c9c:	e28cf050 	add	pc, ip, #80	; 0x50
    */
}

/**
 * Symbol: TTabletDriver::StopBypassTablet(void)
 * Address: 00385ca0
 */
TTabletDriver::StopBypassTablet(void) {
    /*
        385ca0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385ca4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385ca8:	e28cf054 	add	pc, ip, #84	; 0x54
    */
}

/**
 * Symbol: TTabletDriver::ReturnTabletToConsciousness(unsigned long, unsigned long, unsigned long)
 * Address: 00385cac
 */
TTabletDriver::ReturnTabletToConsciousness(unsigned long, unsigned long, unsigned long) {
    /*
        385cac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385cb0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385cb4:	e28cf058 	add	pc, ip, #88	; 0x58
        385cb8:	00000000 	andeq	r0, r0, r0
        385cbc:	00000048 	andeq	r0, r0, r8, asr #32
        385cc0:	00000055 	andeq	r0, r0, r5, asr r0
        385cc4:	0000005f 	andeq	r0, r0, pc, asr r0
        385cc8:	0000005c 	andeq	r0, r0, ip, asr r0
        385ccc:	000000b4 	streqh	r0, [r0], -r4
        385cd0:	ea5d9a59 	b	1aec63c <$Sizeof__16TResistiveTabletSFv>
        385cdc:	ea5d963d 	b	1aeb5d8 <TResistiveTablet::$New(void)>
        385ce0:	ea5d921d 	b	1aea55c <TResistiveTablet::$Delete(void)>
        385cf0:	ea000001 	b	385cfc <ClassInfo__16TResistiveTabletSFv+0x8>
    */
}

