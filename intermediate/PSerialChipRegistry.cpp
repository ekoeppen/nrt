#include "include/PSerialChipRegistry.h"

/**
 * Symbol: New__19PSerialChipRegistrySFPc
 * Address: 00384e34
 */
void PSerialChipRegistry::New() {
    /*
        384e34:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        384e38:	e1a01000 	mov	r1, r0
        384e3c:	ebfffff5 	bl	384e18 <ClassInfo__19PTheSerChipRegistrySFv+0x78>
        384e40:	eb612a57 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        384e44:	e1100000 	tst	r0, r0
        384e48:	e28dd004 	add	sp, sp, #4	; 0x4
        384e4c:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        384e50:	01a0f00e 	moveq	pc, lr
        384e54:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384e58:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384e5c:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: PSerialChipRegistry::Init(void)
 * Address: 00384e60
 */
PSerialChipRegistry::Init(void) {
    /*
        384e60:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384e64:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384e68:	e28cf00c 	add	pc, ip, #12	; 0xc
    */
}

/**
 * Symbol: PSerialChipRegistry::Delete(void)
 * Address: 00384e6c
 */
PSerialChipRegistry::Delete(void) {
    /*
        384e6c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384e70:	e92d4001 	stmdb	sp!, {r0, lr}
        384e74:	e28fe004 	add	lr, pc, #4	; 0x4
        384e78:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384e7c:	e28cf010 	add	pc, ip, #16	; 0x10
        384e80:	e8bd4001 	ldmia	sp!, {r0, lr}
        384e84:	ea6136b4 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: PSerialChipRegistry::Register(TSerialChip *, unsigned long)
 * Address: 00384e88
 */
PSerialChipRegistry::Register(TSerialChip *, unsigned long) {
    /*
        384e88:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384e8c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384e90:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: PSerialChipRegistry::UnRegister(TSerialChip *)
 * Address: 00384e94
 */
PSerialChipRegistry::UnRegister(TSerialChip *) {
    /*
        384e94:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384e98:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384e9c:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: PSerialChipRegistry::SetDefaultChip(unsigned long, unsigned long *, unsigned char)
 * Address: 00384ea0
 */
PSerialChipRegistry::SetDefaultChip(unsigned long, unsigned long *, unsigned char) {
    /*
        384ea0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384ea4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384ea8:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: PSerialChipRegistry::GetChipPtr(unsigned long)
 * Address: 00384eac
 */
PSerialChipRegistry::GetChipPtr(unsigned long) {
    /*
        384eac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384eb0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384eb4:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: PSerialChipRegistry::GetChipLocation(unsigned long)
 * Address: 00384eb8
 */
PSerialChipRegistry::GetChipLocation(unsigned long) {
    /*
        384eb8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384ebc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384ec0:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: PSerialChipRegistry::FindByChip(TSerialChip *)
 * Address: 00384ec4
 */
PSerialChipRegistry::FindByChip(TSerialChip *) {
    /*
        384ec4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384ec8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384ecc:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: PSerialChipRegistry::FindByOption(TCMOSerialChipSpec *)
 * Address: 00384ed0
 */
PSerialChipRegistry::FindByOption(TCMOSerialChipSpec *) {
    /*
        384ed0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384ed4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384ed8:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: PSerialChipRegistry::FindByLocation(unsigned long)
 * Address: 00384edc
 */
PSerialChipRegistry::FindByLocation(unsigned long) {
    /*
        384edc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384ee0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384ee4:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: PSerialChipRegistry::ClaimSerialChip(unsigned long, unsigned char, unsigned long)
 * Address: 00384ee8
 */
PSerialChipRegistry::ClaimSerialChip(unsigned long, unsigned char, unsigned long) {
    /*
        384ee8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384eec:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384ef0:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: PSerialChipRegistry::GetDefaultChip(unsigned long, unsigned long *)
 * Address: 00384ef4
 */
PSerialChipRegistry::GetDefaultChip(unsigned long, unsigned long *) {
    /*
        384ef4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        384ef8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        384efc:	e28cf038 	add	pc, ip, #56	; 0x38
        384f00:	00000000 	andeq	r0, r0, r0
        384f04:	00000048 	andeq	r0, r0, r8, asr #32
        384f08:	00000054 	andeq	r0, r0, r4, asr r0
        384f0c:	00000061 	andeq	r0, r0, r1, rrx
        384f10:	00000060 	andeq	r0, r0, r0, rrx
        384f14:	00000090 	muleq	r0, r0, r0
        384f18:	ea5b78a8 	b	1a631c0 <$Sizeof__15TAsyncDebugLinkSFv>
        384f24:	ea5b7897 	b	1a63188 <TAsyncDebugLink::$New(void)>
        384f28:	ea5b7483 	b	1a6213c <TAsyncDebugLink::$Delete(void)>
        384f38:	ea000001 	b	384f44 <ClassInfo__15TAsyncDebugLinkSFv+0x8>
    */
}

