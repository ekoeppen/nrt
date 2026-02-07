#include "include/TPageTracker.h"

/**
 * Symbol: TPageTracker::Take(void)
 * Address: 0025dc14
 */
TPageTracker::Take(void) {
    /*
        25dc14:	e1a0c00d 	mov	ip, sp
        25dc18:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25dc1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25dc20:	e1a04000 	mov	r4, r0
        25dc24:	e3a05000 	mov	r5, #0	; 0x0
        25dc28:	eb04d3a4 	bl	392ac0 <EnterAtomic>
        25dc2c:	e1a00004 	mov	r0, r4
        25dc30:	eb628d19 	bl	1b0109c <TSingleQContainer::$Peek(void)>
        25dc34:	e3300000 	teq	r0, #0	; 0x0
        25dc38:	0a000005 	beq	25dc54 <TPageTracker::Take(void)+0x40>
        25dc3c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        25dc40:	e2400001 	sub	r0, r0, #1	; 0x1
        25dc44:	e5840008 	str	r0, [r4, #8]	; fField8
        25dc48:	e1a00004 	mov	r0, r4
        25dc4c:	eb629565 	bl	1b031e8 <TSingleQContainer::$Remove(void)>
        25dc50:	e1a05000 	mov	r5, r0
        25dc54:	eb04d3b0 	bl	392b1c <ExitAtomic>
        25dc58:	e1a00005 	mov	r0, r5
        25dc5c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPageTracker::Put(TLittlePhys *)
 * Address: 0025dc60
 */
TPageTracker::Put(TLittlePhys *) {
    /*
        25dc60:	e1a0c00d 	mov	ip, sp
        25dc64:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25dc68:	e24cb004 	sub	fp, ip, #4	; 0x4
        25dc6c:	e1a04000 	mov	r4, r0
        25dc70:	e1a05001 	mov	r5, r1
        25dc74:	eb04d391 	bl	392ac0 <EnterAtomic>
        25dc78:	e1a01005 	mov	r1, r5
        25dc7c:	e1a00004 	mov	r0, r4
        25dc80:	eb624f13 	bl	1af18d4 <TSingleQContainer::$Add(void *)>
        25dc84:	e5940008 	ldr	r0, [r4, #8]	; fField8
        25dc88:	e2800001 	add	r0, r0, #1	; 0x1
        25dc8c:	e5a40008 	str	r0, [r4, #8]!	; fField8
        25dc90:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        25dc94:	ea04d3a0 	b	392b1c <ExitAtomic>
    */
}

