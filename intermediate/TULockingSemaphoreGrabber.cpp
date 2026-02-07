#include "include/TULockingSemaphoreGrabber.h"

/**
 * Symbol: TULockingSemaphoreGrabber::DoAquire(TULockingSemaphore *)
 * Address: 0013afa8
 */
TULockingSemaphoreGrabber::DoAquire(TULockingSemaphore *) {
    /*
        13afa8:	e1a0c00d 	mov	ip, sp
        13afac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        13afb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        13afb4:	e1a05000 	mov	r5, r0
        13afb8:	e1a04001 	mov	r4, r1
        13afbc:	e5900000 	ldr	r0, [r0]
        13afc0:	e3300000 	teq	r0, #0	; 0x0
        13afc4:	1b6a7b33 	blne	1bd9c98 <TULockingSemaphore::$Release(void)>
        13afc8:	e5854000 	str	r4, [r5]
        13afcc:	e1b00004 	movs	r0, r4
        13afd0:	13a01000 	movne	r1, #0	; 0x0
        13afd4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        13afd8:	1a6a4ddd 	bne	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        13afdc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TULockingSemaphoreGrabber::__ct(TULockingSemaphore *)
 * Address: 0013b6d4
 */
TULockingSemaphoreGrabber::TULockingSemaphoreGrabber(TULockingSemaphore *) {
    /*
        13b6d4:	e1a0c00d 	mov	ip, sp
        13b6d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        13b6dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        13b6e0:	e1b04000 	movs	r4, r0
        13b6e4:	e1a05001 	mov	r5, r1
        13b6e8:	1a000003 	bne	13b6fc <TULockingSemaphoreGrabber::__ct(TULockingSemaphore *)+0x28>
        13b6ec:	e3a00004 	mov	r0, #4	; 0x4
        13b6f0:	eb6a4c10 	bl	1bce738 <$__nw(unsigned int)>
        13b6f4:	e1b04000 	movs	r4, r0
        13b6f8:	0a000003 	beq	13b70c <TULockingSemaphoreGrabber::__ct(TULockingSemaphore *)+0x38>
        13b6fc:	e1b00005 	movs	r0, r5
        13b700:	e5845000 	str	r5, [r4]
        13b704:	13a01000 	movne	r1, #0	; 0x0
        13b708:	1b6a4c11 	blne	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        13b70c:	e1a00004 	mov	r0, r4
        13b710:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TULockingSemaphoreGrabber::__ct(TULockingSemaphore *, TULockingSemaphoreGrabber::eNonBlockOption)
 * Address: 0013bd44
 */
TULockingSemaphoreGrabber::TULockingSemaphoreGrabber(TULockingSemaphore *, TULockingSemaphoreGrabber::eNonBlockOption) {
    /*
        13bd44:	e1a0c00d 	mov	ip, sp
        13bd48:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        13bd4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        13bd50:	e1b04000 	movs	r4, r0
        13bd54:	e1a05001 	mov	r5, r1
        13bd58:	1a000003 	bne	13bd6c <TULockingSemaphoreGrabber::__ct(TULockingSemaphore *, TULockingSemaphoreGrabber::eNonBlockOption)+0x28>
        13bd5c:	e3a00004 	mov	r0, #4	; 0x4
        13bd60:	eb6a4a74 	bl	1bce738 <$__nw(unsigned int)>
        13bd64:	e1b04000 	movs	r4, r0
        13bd68:	0a000009 	beq	13bd94 <TULockingSemaphoreGrabber::__ct(TULockingSemaphore *, TULockingSemaphoreGrabber::eNonBlockOption)+0x50>
        13bd6c:	e3350000 	teq	r5, #0	; 0x0
        13bd70:	0a000005 	beq	13bd8c <TULockingSemaphoreGrabber::__ct(TULockingSemaphore *, TULockingSemaphoreGrabber::eNonBlockOption)+0x48>
        13bd74:	e1a00005 	mov	r0, r5
        13bd78:	e3a01001 	mov	r1, #1	; 0x1
        13bd7c:	eb6a4a74 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        13bd80:	e3300000 	teq	r0, #0	; 0x0
        13bd84:	05845000 	streq	r5, [r4]
        13bd88:	0a000001 	beq	13bd94 <TULockingSemaphoreGrabber::__ct(TULockingSemaphore *, TULockingSemaphoreGrabber::eNonBlockOption)+0x50>
        13bd8c:	e3a00000 	mov	r0, #0	; 0x0
        13bd90:	e5840000 	str	r0, [r4]
        13bd94:	e1a00004 	mov	r0, r4
        13bd98:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

