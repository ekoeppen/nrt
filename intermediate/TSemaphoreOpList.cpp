#include "DDKIncludes/OS600/UserSemaphore.h"

/**
 * Symbol: TSemaphoreOpList::Init(unsigned long, unsigned long *)
 * Address: 001d5078
 */
long		TSemaphoreOpList::Init(ULong numInList, ...) {
    /*
        1d5078:	e1a0c00d 	mov	ip, sp
        1d507c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1d5080:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5084:	e1a04000 	mov	r4, r0
        1d5088:	e1a05001 	mov	r5, r1
        1d508c:	e1a06002 	mov	r6, r2
        1d5090:	e1a00101 	mov	r0, r1, lsl #2
        1d5094:	e1a08000 	mov	r8, r0
        1d5098:	eb67e5a6 	bl	1bce738 <$__nw(unsigned int)>
        1d509c:	e5840010 	str	r0, [r4, #16]	; fField16
        1d50a0:	e1b01000 	movs	r1, r0
        1d50a4:	e3a07000 	mov	r7, #0	; 0x0
        1d50a8:	03e00000 	mvneq	r0, #0	; 0x0
        1d50ac:	05a47014 	streq	r7, [r4, #20]!	; fField20
        1d50b0:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1d50b4:	e1a02008 	mov	r2, r8
        1d50b8:	e1a00006 	mov	r0, r6
        1d50bc:	eb6827a4 	bl	1bdef54 <$BlockMove>
        1d50c0:	e1a00007 	mov	r0, r7
        1d50c4:	e5a45014 	str	r5, [r4, #20]!	; fField20
        1d50c8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSemaphoreOpList::__dt(void)
 * Address: 001d50cc
 */
TSemaphoreOpList::~TSemaphoreOpList(void) {
    /*
        1d50cc:	e1a0c00d 	mov	ip, sp
        1d50d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d50d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d50d8:	e1a04000 	mov	r4, r0
        1d50dc:	e1a05001 	mov	r5, r1
        1d50e0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1d50e4:	e3300000 	teq	r0, #0	; 0x0
        1d50e8:	1b67e17c 	blne	1bcd6e0 <$__dl(void *)>
        1d50ec:	e3150001 	tst	r5, #1	; 0x1
        1d50f0:	11a00004 	movne	r0, r4
        1d50f4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1d50f8:	1a67e178 	bne	1bcd6e0 <$__dl(void *)>
        1d50fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

