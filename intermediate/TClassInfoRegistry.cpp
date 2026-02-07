#include "include/TClassInfoRegistry.h"

/**
 * Symbol: New__18TClassInfoRegistrySFPCc
 * Address: 00385f68
 */
void TClassInfoRegistry::New() {
    /*
        385f68:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        385f6c:	e1a01000 	mov	r1, r0
        385f70:	ebfffff5 	bl	385f4c <ClassInfo__20PCirrusBatteryDriverSFv+0xb8>
        385f74:	eb61260a 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        385f78:	e1100000 	tst	r0, r0
        385f7c:	e28dd004 	add	sp, sp, #4	; 0x4
        385f80:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        385f84:	01a0f00e 	moveq	pc, lr
        385f88:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TClassInfoRegistry::Delete(void)
 * Address: 00385f8c
 */
TClassInfoRegistry::Delete(void) {
    /*
        385f8c:	e92d4000 	stmdb	sp!, {lr}
        385f90:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        385f94:	e3a0c001 	mov	ip, #1	; 0x1
        385f98:	ebffffd9 	bl	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
        385f9c:	e8bd4000 	ldmia	sp!, {lr}
        385fa0:	ea612e3d 	b	1bd189c <TProtocol::$DestroyMonitor(void)>
    */
}

/**
 * Symbol: TClassInfoRegistry::Register(TClassInfo const *, unsigned long)
 * Address: 00385fa4
 */
TClassInfoRegistry::Register(TClassInfo const *, unsigned long) {
    /*
        385fa4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        385fa8:	e3a0c002 	mov	ip, #2	; 0x2
        385fac:	eaffffd4 	b	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
    */
}

/**
 * Symbol: TClassInfoRegistry::DeRegister(TClassInfo const *, unsigned char)
 * Address: 00385fb0
 */
TClassInfoRegistry::DeRegister(TClassInfo const *, unsigned char) {
    /*
        385fb0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        385fb4:	e3a0c003 	mov	ip, #3	; 0x3
        385fb8:	eaffffd1 	b	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
    */
}

/**
 * Symbol: TClassInfoRegistry::IsRegistered( const(TClassInfo const *, unsigned char))
 * Address: 00385fbc
 */
TClassInfoRegistry::IsRegistered( const(TClassInfo const *, unsigned char)) {
    /*
        385fbc:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        385fc0:	e3a0c004 	mov	ip, #4	; 0x4
        385fc4:	eaffffce 	b	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
    */
}

/**
 * Symbol: Satisfy__18TClassInfoRegistryCFPCcT1Ul
 * Address: 00385fc8
 */
void TClassInfoRegistry::Satisfy() {
    /*
        385fc8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        385fcc:	e3a0c005 	mov	ip, #5	; 0x5
        385fd0:	eaffffcb 	b	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
    */
}

/**
 * Symbol: TClassInfoRegistry::Seed( const(void))
 * Address: 00385fd4
 */
TClassInfoRegistry::Seed( const(void)) {
    /*
        385fd4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        385fd8:	e3a0c006 	mov	ip, #6	; 0x6
        385fdc:	eaffffc8 	b	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
    */
}

/**
 * Symbol: TClassInfoRegistry::First( const(long, unsigned long *))
 * Address: 00385fe0
 */
TClassInfoRegistry::First( const(long, unsigned long *)) {
    /*
        385fe0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        385fe4:	e3a0c007 	mov	ip, #7	; 0x7
        385fe8:	eaffffc5 	b	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
    */
}

/**
 * Symbol: TClassInfoRegistry::Next( const(long, TClassInfo const *, unsigned long *))
 * Address: 00385fec
 */
TClassInfoRegistry::Next( const(long, TClassInfo const *, unsigned long *)) {
    /*
        385fec:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        385ff0:	e3a0c008 	mov	ip, #8	; 0x8
        385ff4:	eaffffc2 	b	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
    */
}

/**
 * Symbol: Find__18TClassInfoRegistryCFPCcT1iPUl
 * Address: 00385ff8
 */
void TClassInfoRegistry::Find() {
    /*
        385ff8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        385ffc:	e3a0c009 	mov	ip, #9	; 0x9
        386000:	eaffffbf 	b	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
    */
}

/**
 * Symbol: Satisfy__18TClassInfoRegistryCFPCcN21
 * Address: 00386004
 */
void TClassInfoRegistry::Satisfy() {
    /*
        386004:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386008:	e3a0c00a 	mov	ip, #10	; 0xa
        38600c:	eaffffbc 	b	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
    */
}

/**
 * Symbol: Satisfy__18TClassInfoRegistryCFPCcN31
 * Address: 00386010
 */
void TClassInfoRegistry::Satisfy() {
    /*
        386010:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386014:	e3a0c00b 	mov	ip, #11	; 0xb
        386018:	eaffffb9 	b	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
    */
}

/**
 * Symbol: Satisfy__18TClassInfoRegistryCFPCcT1ClT3
 * Address: 0038601c
 */
void TClassInfoRegistry::Satisfy() {
    /*
        38601c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386020:	e3a0c00c 	mov	ip, #12	; 0xc
        386024:	eaffffb6 	b	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
    */
}

/**
 * Symbol: TClassInfoRegistry::UpdateInstanceCount(TClassInfo const *, long)
 * Address: 00386028
 */
TClassInfoRegistry::UpdateInstanceCount(TClassInfo const *, long) {
    /*
        386028:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        38602c:	e3a0c00d 	mov	ip, #13	; 0xd
        386030:	eaffffb3 	b	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
    */
}

/**
 * Symbol: TClassInfoRegistry::GetInstanceCount(TClassInfo const *)
 * Address: 00386034
 */
TClassInfoRegistry::GetInstanceCount(TClassInfo const *) {
    /*
        386034:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        386038:	e3a0c00e 	mov	ip, #14	; 0xe
        38603c:	eaffffb0 	b	385f04 <ClassInfo__20PCirrusBatteryDriverSFv+0x70>
        386040:	00000000 	andeq	r0, r0, r0
        386044:	00000048 	andeq	r0, r0, r8, asr #32
        386048:	0000005b 	andeq	r0, r0, fp, asr r0
        38604c:	0000006a 	andeq	r0, r0, sl, rrx
        386050:	00000068 	andeq	r0, r0, r8, rrx
        386054:	000000a8 	andeq	r0, r0, r8, lsr #1
        386058:	ea5e00c7 	b	1b0637c <$Sizeof__22TClassInfoRegistryImplSFv>
        386064:	ea5de7e1 	b	1affff0 <TClassInfoRegistryImpl::$New(void)>
        386068:	ea5dc2a8 	b	1af6b10 <TClassInfoRegistryImpl::$Delete(void)>
        386078:	ea000001 	b	386084 <ClassInfo__22TClassInfoRegistryImplSFv+0x8>
    */
}

