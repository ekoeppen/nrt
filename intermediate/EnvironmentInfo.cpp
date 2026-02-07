#include "include/EnvironmentInfo.h"

/**
 * Symbol: EnvironmentInfo::Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 0011ddd8
 */
EnvironmentInfo::Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
        11ddd8:	e92d4000 	stmdb	sp!, {lr}
        11dddc:	e59dc008 	ldr	ip, [sp, #8]	; fField8
        11dde0:	e59de004 	ldr	lr, [sp, #4]
        11dde4:	e880400e 	stmia	r0, {r1, r2, r3, lr}
        11dde8:	e580c010 	str	ip, [r0, #16]	; fField16
        11ddec:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: EnvironmentInfo::Domains(unsigned long, unsigned long *, unsigned char *, long *)
 * Address: 0011ddf0
 */
EnvironmentInfo::Domains(unsigned long, unsigned long *, unsigned char *, long *) {
    /*
        11ddf0:	e1a0c00d 	mov	ip, sp
        11ddf4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11ddf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        11ddfc:	e1a0c003 	mov	ip, r3
        11de00:	e59b3004 	ldr	r3, [fp, #4]
        11de04:	e92d0008 	stmdb	sp!, {r3}
        11de08:	e1a0300c 	mov	r3, ip
        11de0c:	e5900000 	ldr	r0, [r0]
        11de10:	eb6ad6ea 	bl	1bd39c0 <$GetEnvDomainName__13MemObjManagerSFUlT1PUlPUcPl>
        11de14:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: EnvironmentInfo::Name(void)
 * Address: 0011de18
 */
EnvironmentInfo::Name(void) {
    /*
        11de18:	e5900000 	ldr	r0, [r0]
        11de1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: EnvironmentInfo::DefaultHeap(void)
 * Address: 0011de20
 */
EnvironmentInfo::DefaultHeap(void) {
    /*
        11de20:	e5900008 	ldr	r0, [r0, #8]	; fField8
        11de24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: EnvironmentInfo::DefaultHeapDomain(void)
 * Address: 0011de28
 */
EnvironmentInfo::DefaultHeapDomain(void) {
    /*
        11de28:	e590000c 	ldr	r0, [r0, #12]	; fField12
        11de2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: EnvironmentInfo::DefaultStackDomain(void)
 * Address: 0011de30
 */
EnvironmentInfo::DefaultStackDomain(void) {
    /*
        11de30:	e5900010 	ldr	r0, [r0, #16]	; fField16
        11de34:	e1a0f00e 	mov	pc, lr
    */
}

