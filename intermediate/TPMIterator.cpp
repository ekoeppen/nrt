#include "include/TPMIterator.h"

/**
 * Symbol: TPMIterator::__ct(void)
 * Address: 0015bfc4
 */
TPMIterator::TPMIterator(void) {
    /*
        15bfc4:	e1a0c00d 	mov	ip, sp
        15bfc8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        15bfcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        15bfd0:	e3300000 	teq	r0, #0	; 0x0
        15bfd4:	1a000003 	bne	15bfe8 <TPMIterator::__ct(void)+0x24>
        15bfd8:	e3a00064 	mov	r0, #100	; 0x64
        15bfdc:	eb69c9d5 	bl	1bce738 <$__nw(unsigned int)>
        15bfe0:	e3300000 	teq	r0, #0	; 0x0
        15bfe4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        15bfe8:	e3a01000 	mov	r1, #0	; 0x0
        15bfec:	e5801000 	str	r1, [r0]
        15bff0:	e5801060 	str	r1, [r0, #96]	; fField96
        15bff4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPMIterator::NextPackage(void)
 * Address: 0015bff8
 */
TPMIterator::NextPackage(void) {
    /*
        15bff8:	e1a0c00d 	mov	ip, sp
        15bffc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        15c000:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c004:	e1a04000 	mov	r4, r0
        15c008:	eb69ead9 	bl	1bd6b74 <TPMIterator::$More(void)>
        15c00c:	e3300000 	teq	r0, #0	; 0x0
        15c010:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        15c014:	e5940000 	ldr	r0, [r4]
        15c018:	e2800001 	add	r0, r0, #1	; 0x1
        15c01c:	e5840000 	str	r0, [r4]
        15c020:	e2843058 	add	r3, r4, #88	; 0x58
        15c024:	e284205c 	add	r2, r4, #92	; 0x5c
        15c028:	e1a01004 	mov	r1, r4
        15c02c:	e2840050 	add	r0, r4, #80	; 0x50
        15c030:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15c034:	e284304c 	add	r3, r4, #76	; 0x4c
        15c038:	e92d0008 	stmdb	sp!, {r3}
        15c03c:	e2843008 	add	r3, r4, #8	; 0x8
        15c040:	e2842004 	add	r2, r4, #4	; 0x4
        15c044:	e284100c 	add	r1, r4, #12	; 0xc
        15c048:	e3e00000 	mvn	r0, #0	; 0x0
        15c04c:	eb66626f 	bl	1af4a10 <$cGetPackageBackupInfo__FUlPUsPUlT3PlP10SourceTypeT5N23>
        15c050:	e28dd014 	add	sp, sp, #20	; 0x14
        15c054:	e3300000 	teq	r0, #0	; 0x0
        15c058:	13e00000 	mvnne	r0, #0	; 0x0
        15c05c:	15840000 	strne	r0, [r4]
        15c060:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPMIterator::__dt(void)
 * Address: 0015c064
 */
TPMIterator::~TPMIterator(void) {
    /*
        15c064:	e3110001 	tst	r1, #1	; 0x1
        15c068:	1a69c59c 	bne	1bcd6e0 <$__dl(void *)>
        15c06c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPMIterator::Init(void)
 * Address: 0015c070
 */
TPMIterator::Init(void) {
    /*
        15c070:	e1a0c00d 	mov	ip, sp
        15c074:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        15c078:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c07c:	e1a04000 	mov	r4, r0
        15c080:	e3a00000 	mov	r0, #0	; 0x0
        15c084:	e5840000 	str	r0, [r4]
        15c088:	eb69de51 	bl	1bd39d4 <$GetGlobals>
        15c08c:	eb6949b3 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
        15c090:	e59f0044 	ldr	r0, [pc, #44]	; 15c0dc <TPMIterator::Init(void)+0x6c>
        15c094:	e5900000 	ldr	r0, [r0]
        15c098:	e3a01000 	mov	r1, #0	; 0x0
        15c09c:	eb69c9ac 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        15c0a0:	eb69de4b 	bl	1bd39d4 <$GetGlobals>
        15c0a4:	eb693d52 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
        15c0a8:	e2843058 	add	r3, r4, #88	; 0x58
        15c0ac:	e284205c 	add	r2, r4, #92	; 0x5c
        15c0b0:	e1a01004 	mov	r1, r4
        15c0b4:	e2840050 	add	r0, r4, #80	; 0x50
        15c0b8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        15c0bc:	e284304c 	add	r3, r4, #76	; 0x4c
        15c0c0:	e92d0008 	stmdb	sp!, {r3}
        15c0c4:	e2843008 	add	r3, r4, #8	; 0x8
        15c0c8:	e2842004 	add	r2, r4, #4	; 0x4
        15c0cc:	e284100c 	add	r1, r4, #12	; 0xc
        15c0d0:	e3e00000 	mvn	r0, #0	; 0x0
        15c0d4:	eb66624d 	bl	1af4a10 <$cGetPackageBackupInfo__FUlPUsPUlT3PlP10SourceTypeT5N23>
        15c0d8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        15c0dc:	0c1016dc 	ldceq	6, cr1, [r0], -#880
    */
}

/**
 * Symbol: TPMIterator::Done(void)
 * Address: 0015c0e0
 */
TPMIterator::Done(void) {
    /*
        15c0e0:	e59f0004 	ldr	r0, [pc, #4]	; 15c0ec <TPMIterator::Done(void)+0xc>	; fField4
        15c0e4:	e5900000 	ldr	r0, [r0]
        15c0e8:	ea69f6ea 	b	1bd9c98 <TULockingSemaphore::$Release(void)>
        15c0ec:	0c1016dc 	ldceq	6, cr1, [r0], -#880
    */
}

/**
 * Symbol: TPMIterator::PackageSize(void)
 * Address: 0015c0f0
 */
TPMIterator::PackageSize(void) {
    /*
        15c0f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        15c0f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPMIterator::PackageId(void)
 * Address: 0015c0f8
 */
TPMIterator::PackageId(void) {
    /*
        15c0f8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        15c0fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPMIterator::PackageName(void)
 * Address: 0015c100
 */
TPMIterator::PackageName(void) {
    /*
        15c100:	e280000c 	add	r0, r0, #12	; 0xc
        15c104:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPMIterator::IsCopyProtected(void)
 * Address: 0015c108
 */
TPMIterator::IsCopyProtected(void) {
    /*
        15c108:	e590005c 	ldr	r0, [r0, #92]	; fField92
        15c10c:	e2100101 	ands	r0, r0, #1073741824	; 0x40000000
        15c110:	13a00001 	movne	r0, #1	; 0x1
        15c114:	e20000ff 	and	r0, r0, #255	; 0xff
        15c118:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPMIterator::More(void)
 * Address: 0015c11c
 */
TPMIterator::More(void) {
    /*
        15c11c:	e5901000 	ldr	r1, [r0]
        15c120:	e3710001 	cmn	r1, #1	; 0x1
        15c124:	15900004 	ldrne	r0, [r0, #4]	; fField4
        15c128:	13300000 	teqne	r0, #0	; 0x0
        15c12c:	03a00000 	moveq	r0, #0	; 0x0
        15c130:	13a00001 	movne	r0, #1	; 0x1
        15c134:	e20000ff 	and	r0, r0, #255	; 0xff
        15c138:	e1a0f00e 	mov	pc, lr
    */
}

