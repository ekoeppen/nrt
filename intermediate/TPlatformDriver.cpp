#include "include/TPlatformDriver.h"

/**
 * Symbol: New__15TPlatformDriverSFPc
 * Address: 00387df8
 */
void TPlatformDriver::New() {
    /*
        387df8:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        387dfc:	e1a01000 	mov	r1, r0
        387e00:	ebfffff6 	bl	387de0 <ClassInfo__16TVoyagerPlatformSFv+0x8c>
        387e04:	eb611e66 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        387e08:	e1100000 	tst	r0, r0
        387e0c:	e28dd004 	add	sp, sp, #4	; 0x4
        387e10:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        387e14:	01a0f00e 	moveq	pc, lr
        387e18:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387e1c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387e20:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TPlatformDriver::Delete(void)
 * Address: 00387e24
 */
TPlatformDriver::Delete(void) {
    /*
        387e24:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387e28:	e92d4001 	stmdb	sp!, {r0, lr}
        387e2c:	e28fe004 	add	lr, pc, #4	; 0x4
        387e30:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387e34:	e28cf00c 	add	pc, ip, #12	; 0xc
        387e38:	e8bd4001 	ldmia	sp!, {r0, lr}
        387e3c:	ea612ac6 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TPlatformDriver::Init(void)
 * Address: 00387e40
 */
TPlatformDriver::Init(void) {
    /*
        387e40:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387e44:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387e48:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TPlatformDriver::BacklightTrigger(void)
 * Address: 00387e4c
 */
TPlatformDriver::BacklightTrigger(void) {
    /*
        387e4c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387e50:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387e54:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TPlatformDriver::RegisterPowerSwitchInterrupt(void)
 * Address: 00387e58
 */
TPlatformDriver::RegisterPowerSwitchInterrupt(void) {
    /*
        387e58:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387e5c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387e60:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: TPlatformDriver::EnableSysPowerInterrupt(void)
 * Address: 00387e64
 */
TPlatformDriver::EnableSysPowerInterrupt(void) {
    /*
        387e64:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387e68:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387e6c:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: TPlatformDriver::InterruptHandler(void)
 * Address: 00387e70
 */
TPlatformDriver::InterruptHandler(void) {
    /*
        387e70:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387e74:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387e78:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: TPlatformDriver::TimerInterruptHandler(void)
 * Address: 00387e7c
 */
TPlatformDriver::TimerInterruptHandler(void) {
    /*
        387e7c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387e80:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387e84:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: TPlatformDriver::ResetZAPStoreCheck(void)
 * Address: 00387e88
 */
TPlatformDriver::ResetZAPStoreCheck(void) {
    /*
        387e88:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387e8c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387e90:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: TPlatformDriver::PowerOnSubsystem(unsigned long)
 * Address: 00387e94
 */
TPlatformDriver::PowerOnSubsystem(unsigned long) {
    /*
        387e94:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387e98:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387e9c:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: TPlatformDriver::PowerOffSubsystem(unsigned long)
 * Address: 00387ea0
 */
TPlatformDriver::PowerOffSubsystem(unsigned long) {
    /*
        387ea0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387ea4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387ea8:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: TPlatformDriver::PowerOffAllSubsystems(void)
 * Address: 00387eac
 */
TPlatformDriver::PowerOffAllSubsystems(void) {
    /*
        387eac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387eb0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387eb4:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: TPlatformDriver::PauseSystem(void)
 * Address: 00387eb8
 */
TPlatformDriver::PauseSystem(void) {
    /*
        387eb8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387ebc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387ec0:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: TPlatformDriver::PowerOffSystem(void)
 * Address: 00387ec4
 */
TPlatformDriver::PowerOffSystem(void) {
    /*
        387ec4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387ec8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387ecc:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: TPlatformDriver::PowerOnSystem(void)
 * Address: 00387ed0
 */
TPlatformDriver::PowerOnSystem(void) {
    /*
        387ed0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387ed4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387ed8:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: TPlatformDriver::TranslatePowerEvent(unsigned long)
 * Address: 00387edc
 */
TPlatformDriver::TranslatePowerEvent(unsigned long) {
    /*
        387edc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387ee0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387ee4:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: TPlatformDriver::GetPCMCIAPowerSpec(unsigned long, unsigned long *)
 * Address: 00387ee8
 */
TPlatformDriver::GetPCMCIAPowerSpec(unsigned long, unsigned long *) {
    /*
        387ee8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387eec:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387ef0:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: TPlatformDriver::PowerOnDeviceCheck(unsigned char)
 * Address: 00387ef4
 */
TPlatformDriver::PowerOnDeviceCheck(unsigned char) {
    /*
        387ef4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387ef8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387efc:	e28cf04c 	add	pc, ip, #76	; 0x4c
    */
}

/**
 * Symbol: TPlatformDriver::SetSubsystemPower(unsigned long, unsigned long)
 * Address: 00387f00
 */
TPlatformDriver::SetSubsystemPower(unsigned long, unsigned long) {
    /*
        387f00:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387f04:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387f08:	e28cf050 	add	pc, ip, #80	; 0x50
    */
}

/**
 * Symbol: TPlatformDriver::GetSubsystemPower(unsigned long, unsigned long *)
 * Address: 00387f0c
 */
TPlatformDriver::GetSubsystemPower(unsigned long, unsigned long *) {
    /*
        387f0c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        387f10:	e590c008 	ldr	ip, [r0, #8]	; fField8
        387f14:	e28cf054 	add	pc, ip, #84	; 0x54
        387f18:	e1a0000f 	mov	r0, pc
        387f1c:	e1a0f00e 	mov	pc, lr
        387f20:	54507269 	ldrplb	r7, [r0], -#617	; fField617
        387f24:	6e746572 	mrcvs	5, 3, r6, cr4, cr2, {3}
        387f28:	00000000 	andeq	r0, r0, r0
    */
}

