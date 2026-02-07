#include "DDKIncludes/OS600/UserDomain.h"

/**
 * Symbol: TUDomain::Init(unsigned long, unsigned long, unsigned long)
 * Address: 00258918
 */
long		TUDomain::Init(TObjectId monitor, VAddr base, ULong size) {
    /*
        258918:	e1a0c00d 	mov	ip, sp
        25891c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        258920:	e24cb004 	sub	fp, ip, #4	; 0x4
        258924:	e24dd028 	sub	sp, sp, #40	; 0x28
        258928:	e58d100c 	str	r1, [sp, #12]
        25892c:	e58d2010 	str	r2, [sp, #16]
        258930:	e58d3014 	str	r3, [sp, #20]
        258934:	e1a0200d 	mov	r2, sp
        258938:	e3a03018 	mov	r3, #24	; 0x18
        25893c:	e3a01003 	mov	r1, #3	; 0x3
        258940:	eb65f887 	bl	1bd6b64 <TUObject::$MakeObject(ObjectTypes, ObjectMessage *, unsigned long)>
        258944:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUDomain::SetFaultMonitor(unsigned long)
 * Address: 00259384
 */
long		TUDomain::SetFaultMonitor(TObjectId monitor) {
    /*
        259384:	e1a0c00d 	mov	ip, sp
        259388:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25938c:	e24cb004 	sub	fp, ip, #4	; 0x4
        259390:	e3a02014 	mov	r2, #20	; 0x14
        259394:	e52d2028 	str	r2, [sp, -#40]!
        259398:	e5900000 	ldr	r0, [r0]
        25939c:	e58d000c 	str	r0, [sp, #12]
        2593a0:	e58d1010 	str	r1, [sp, #16]
        2593a4:	e59f0014 	ldr	r0, [pc, #14]	; 2593c0 <TUDomain::SetFaultMonitor(unsigned long)+0x3c>
        2593a8:	e5900000 	ldr	r0, [r0]
        2593ac:	e1a0200d 	mov	r2, sp
        2593b0:	e3a0100a 	mov	r1, #10	; 0xa
        2593b4:	e5900000 	ldr	r0, [r0]
        2593b8:	eb0553d8 	bl	3ae320 <MonitorDispatchSWI>
        2593bc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2593c0:	0c104f04 	ldceq	15, cr4, [r0], -#16
    */
}

