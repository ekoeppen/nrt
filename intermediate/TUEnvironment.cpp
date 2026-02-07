#include "include/TUEnvironment.h"

/**
 * Symbol: TUEnvironment::Init(void *)
 * Address: 002593c4
 */
TUEnvironment::Init(void *) {
    /*
        2593c4:	e1a0c00d 	mov	ip, sp
        2593c8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2593cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2593d0:	e24dd028 	sub	sp, sp, #40	; 0x28
        2593d4:	e58d100c 	str	r1, [sp, #12]
        2593d8:	e1a0200d 	mov	r2, sp
        2593dc:	e3a03010 	mov	r3, #16	; 0x10
        2593e0:	e3a01002 	mov	r1, #2	; 0x2
        2593e4:	eb65f5de 	bl	1bd6b64 <TUObject::$MakeObject(ObjectTypes, ObjectMessage *, unsigned long)>
        2593e8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUEnvironment::Add(unsigned long, unsigned char, unsigned char, unsigned char)
 * Address: 002593ec
 */
TUEnvironment::Add(unsigned long, unsigned char, unsigned char, unsigned char) {
    /*
        2593ec:	e31200ff 	tst	r2, #255	; 0xff
        2593f0:	e20330ff 	and	r3, r3, #255	; 0xff
        2593f4:	e59dc000 	ldr	ip, [sp]
        2593f8:	e20cc0ff 	and	ip, ip, #255	; 0xff
        2593fc:	03a02000 	moveq	r2, #0	; 0x0
        259400:	13a02004 	movne	r2, #4	; 0x4
        259404:	e3330000 	teq	r3, #0	; 0x0
        259408:	13a03002 	movne	r3, #2	; 0x2
        25940c:	e1822003 	orr	r2, r2, r3
        259410:	e1b0300c 	movs	r3, ip
        259414:	13a03001 	movne	r3, #1	; 0x1
        259418:	e1822003 	orr	r2, r2, r3
        25941c:	e5900000 	ldr	r0, [r0]
        259420:	ea65d8d7 	b	1bcf784 <$AddDomainToEnvironment__FUlN21>
    */
}

/**
 * Symbol: TUEnvironment::Remove(unsigned long)
 * Address: 00259424
 */
TUEnvironment::Remove(unsigned long) {
    /*
        259424:	e5900000 	ldr	r0, [r0]
        259428:	ea66022a 	b	1bd9cd8 <$RemoveDomainFromEnvironment__FUlT1>
    */
}

/**
 * Symbol: TUEnvironment::HasDomain(unsigned long, unsigned char *, unsigned char *)
 * Address: 0025942c
 */
TUEnvironment::HasDomain(unsigned long, unsigned char *, unsigned char *) {
    /*
        25942c:	e5900000 	ldr	r0, [r0]
        259430:	ea65e12c 	b	1bd18e8 <$EnvironmentHasDomain__FUlT1PUcT3>
    */
}

