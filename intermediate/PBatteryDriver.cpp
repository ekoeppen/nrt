#include "include/PBatteryDriver.h"

/**
 * Symbol: New__14PBatteryDriverSFPc
 * Address: 00385d98
 */
void PBatteryDriver::New() {
    /*
        385d98:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        385d9c:	e1a01000 	mov	r1, r0
        385da0:	ebfffff6 	bl	385d80 <ClassInfo__16TResistiveTabletSFv+0x8c>
        385da4:	eb61267e 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        385da8:	e1100000 	tst	r0, r0
        385dac:	e28dd004 	add	sp, sp, #4	; 0x4
        385db0:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        385db4:	01a0f00e 	moveq	pc, lr
        385db8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385dbc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385dc0:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: PBatteryDriver::Delete(void)
 * Address: 00385dc4
 */
PBatteryDriver::Delete(void) {
    /*
        385dc4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385dc8:	e92d4001 	stmdb	sp!, {r0, lr}
        385dcc:	e28fe004 	add	lr, pc, #4	; 0x4
        385dd0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385dd4:	e28cf00c 	add	pc, ip, #12	; 0xc
        385dd8:	e8bd4001 	ldmia	sp!, {r0, lr}
        385ddc:	ea6132de 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: PBatteryDriver::Init(void)
 * Address: 00385de0
 */
PBatteryDriver::Init(void) {
    /*
        385de0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385de4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385de8:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: PBatteryDriver::WakeUp(void)
 * Address: 00385dec
 */
PBatteryDriver::WakeUp(void) {
    /*
        385dec:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385df0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385df4:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: PBatteryDriver::ShutDown(void)
 * Address: 00385df8
 */
PBatteryDriver::ShutDown(void) {
    /*
        385df8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385dfc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385e00:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: PBatteryDriver::Count(void)
 * Address: 00385e04
 */
PBatteryDriver::Count(void) {
    /*
        385e04:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385e08:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385e0c:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: PBatteryDriver::Status(unsigned long, PowerPlantStatus *)
 * Address: 00385e10
 */
PBatteryDriver::Status(unsigned long, PowerPlantStatus *) {
    /*
        385e10:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385e14:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385e18:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: PBatteryDriver::RawStatus(unsigned long, PowerPlantStatus *)
 * Address: 00385e1c
 */
PBatteryDriver::RawStatus(unsigned long, PowerPlantStatus *) {
    /*
        385e1c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385e20:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385e24:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: PBatteryDriver::StartSleepCharge(void)
 * Address: 00385e28
 */
PBatteryDriver::StartSleepCharge(void) {
    /*
        385e28:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385e2c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385e30:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: PBatteryDriver::SetType(unsigned long, unsigned long)
 * Address: 00385e34
 */
PBatteryDriver::SetType(unsigned long, unsigned long) {
    /*
        385e34:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385e38:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385e3c:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: PBatteryDriver::ReadADCVoltage(unsigned long)
 * Address: 00385e40
 */
PBatteryDriver::ReadADCVoltage(unsigned long) {
    /*
        385e40:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385e44:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385e48:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: PBatteryDriver::ConvertVoltage(unsigned long, unsigned long)
 * Address: 00385e4c
 */
PBatteryDriver::ConvertVoltage(unsigned long, unsigned long) {
    /*
        385e4c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385e50:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385e54:	e28cf034 	add	pc, ip, #52	; 0x34
        385e58:	00000000 	andeq	r0, r0, r0
        385e5c:	00000048 	andeq	r0, r0, r8, asr #32
        385e60:	00000059 	andeq	r0, r0, r9, asr r0
        385e64:	00000064 	andeq	r0, r0, r4, rrx
        385e68:	00000064 	andeq	r0, r0, r4, rrx
        385e6c:	00000098 	muleq	r0, r8, r0
        385e70:	ea5d9e18 	b	1aed6d8 <$Sizeof__20PCirrusBatteryDriverSFv>
        385e7c:	ea5d9e16 	b	1aed6dc <PCirrusBatteryDriver::$New(void)>
        385e80:	ea5d9e16 	b	1aed6e0 <PCirrusBatteryDriver::$Delete(void)>
        385e90:	ea000001 	b	385e9c <ClassInfo__20PCirrusBatteryDriverSFv+0x8>
    */
}

