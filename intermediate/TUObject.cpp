#include "DDKIncludes/OS600/UserObjects.h"

/**
 * Symbol: TUObject::MakeObject(ObjectTypes, ObjectMessage *, unsigned long)
 * Address: 002595b4
 */
long		TUObject::MakeObject(ObjectTypes objectType, ObjectMessage* msg, ULong msgSize) {
    /*
        2595b4:	e1a0c00d 	mov	ip, sp
        2595b8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2595bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2595c0:	e1a05000 	mov	r5, r0
        2595c4:	e1a04002 	mov	r4, r2
        2595c8:	e5d00004 	ldrb	r0, [r0, #4]	; fId
        2595cc:	e3300000 	teq	r0, #0	; 0x0
        2595d0:	13a000c8 	movne	r0, #200	; 0xc8
        2595d4:	12400b0a 	subne	r0, r0, #10240	; 0x2800
        2595d8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        2595dc:	e5841008 	str	r1, [r4, #8]
        2595e0:	e5843000 	str	r3, [r4]
        2595e4:	e59f0034 	ldr	r0, [pc, #34]	; 259620 <TUObject::MakeObject(ObjectTypes, ObjectMessage *, unsigned long)+0x6c>
        2595e8:	e5900000 	ldr	r0, [r0]
        2595ec:	e1a02004 	mov	r2, r4
        2595f0:	e3a06000 	mov	r6, #0	; 0x0
        2595f4:	e1a01006 	mov	r1, r6
        2595f8:	e5900000 	ldr	r0, [r0]
        2595fc:	eb055347 	bl	3ae320 <MonitorDispatchSWI>
        259600:	e3300000 	teq	r0, #0	; 0x0
        259604:	15856000 	strne	r6, [r5]
        259608:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        25960c:	e5941000 	ldr	r1, [r4]
        259610:	e5851000 	str	r1, [r5]
        259614:	e3a01001 	mov	r1, #1	; 0x1
        259618:	e5c51004 	strb	r1, [r5, #4]	; fId
        25961c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        259620:	0c104f04 	ldceq	15, cr4, [r0], -#16
    */
}

/**
 * Symbol: TUObject::CopyObject(unsigned long const)
 * Address: 00259624
 */
void		TUObject::CopyObject(const TUObject& copy)	{ CopyObject(copy.fId); } {
    /*
        259624:	e1a0c00d 	mov	ip, sp
        259628:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25962c:	e24cb004 	sub	fp, ip, #4	; 0x4
        259630:	e1a04000 	mov	r4, r0
        259634:	e1a05001 	mov	r5, r1
        259638:	e5900000 	ldr	r0, [r0]
        25963c:	e1300001 	teq	r0, r1
        259640:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        259644:	e1a00004 	mov	r0, r4
        259648:	eb65e094 	bl	1bd18a0 <TUObject::$DestroyObject(void)>
        25964c:	e3a00000 	mov	r0, #0	; 0x0
        259650:	e5c40004 	strb	r0, [r4, #4]	; fId
        259654:	e5845000 	str	r5, [r4]
        259658:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUObject::DestroyObject(void)
 * Address: 0025965c
 */
void		TUObject::DestroyObject() {
    /*
        25965c:	e1a0c00d 	mov	ip, sp
        259660:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        259664:	e24cb004 	sub	fp, ip, #4	; 0x4
        259668:	e1a04000 	mov	r4, r0
        25966c:	e5900000 	ldr	r0, [r0]
        259670:	e3300000 	teq	r0, #0	; 0x0
        259674:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        259678:	e5d40004 	ldrb	r0, [r4, #4]	; fId
        25967c:	e3300000 	teq	r0, #0	; 0x0
        259680:	0a00000a 	beq	2596b0 <TUObject::DestroyObject(void)+0x54>
        259684:	e3a0000c 	mov	r0, #12	; 0xc
        259688:	e52d0028 	str	r0, [sp, -#40]!
        25968c:	e5940000 	ldr	r0, [r4]
        259690:	e58d0008 	str	r0, [sp, #8]
        259694:	e59f0024 	ldr	r0, [pc, #24]	; 2596c0 <TUObject::DestroyObject(void)+0x64>
        259698:	e5900000 	ldr	r0, [r0]
        25969c:	e1a0200d 	mov	r2, sp
        2596a0:	e3a01001 	mov	r1, #1	; 0x1
        2596a4:	e5900000 	ldr	r0, [r0]
        2596a8:	eb05531c 	bl	3ae320 <MonitorDispatchSWI>
        2596ac:	e28dd028 	add	sp, sp, #40	; 0x28
        2596b0:	e3a00000 	mov	r0, #0	; 0x0
        2596b4:	e5c40004 	strb	r0, [r4, #4]	; fId
        2596b8:	e5840000 	str	r0, [r4]
        2596bc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2596c0:	0c104f04 	ldceq	15, cr4, [r0], -#16
    */
}

/**
 * Symbol: TUObject::__dt(void)
 * Address: 002596c4
 */
TUObject::~TUObject() {
    /*
        2596c4:	e1a0c00d 	mov	ip, sp
        2596c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2596cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2596d0:	e1a04000 	mov	r4, r0
        2596d4:	e1a05001 	mov	r5, r1
        2596d8:	eb65e070 	bl	1bd18a0 <TUObject::$DestroyObject(void)>
        2596dc:	e3150001 	tst	r5, #1	; 0x1
        2596e0:	11a00004 	movne	r0, r4
        2596e4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2596e8:	1a65cffc 	bne	1bcd6e0 <$__dl(void *)>
        2596ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

