#include "include/TListLoop.h"

/**
 * Symbol: TListLoop::__ct(CList *)
 * Address: 00141380
 */
TListLoop::TListLoop(CList *) {
    /*
        141380:	e1a0c00d 	mov	ip, sp
        141384:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        141388:	e24cb004 	sub	fp, ip, #4	; 0x4
        14138c:	e1b04000 	movs	r4, r0
        141390:	e1a05001 	mov	r5, r1
        141394:	1a000003 	bne	1413a8 <TListLoop::__ct(CList *)+0x28>
        141398:	e3a0000c 	mov	r0, #12	; 0xc
        14139c:	eb6a34e5 	bl	1bce738 <$__nw(unsigned int)>
        1413a0:	e1b04000 	movs	r4, r0
        1413a4:	0a000002 	beq	1413b4 <TListLoop::__ct(CList *)+0x34>
        1413a8:	e5845000 	str	r5, [r4]
        1413ac:	e1a00004 	mov	r0, r4
        1413b0:	eb657b26 	bl	1aa0050 <TListLoop::$Reset(void)>
        1413b4:	e1a00004 	mov	r0, r4
        1413b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TListLoop::Reset(void)
 * Address: 001413bc
 */
TListLoop::Reset(void) {
    /*
        1413bc:	e3e01000 	mvn	r1, #0	; 0x0
        1413c0:	e5801004 	str	r1, [r0, #4]	; fField4
        1413c4:	e5901000 	ldr	r1, [r0]
        1413c8:	e5911000 	ldr	r1, [r1]
        1413cc:	e5a01008 	str	r1, [r0, #8]!	; fField8
        1413d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TListLoop::Next(void)
 * Address: 001413d4
 */
TListLoop::Next(void) {
    /*
        1413d4:	e5901004 	ldr	r1, [r0, #4]	; fField4
        1413d8:	e2811001 	add	r1, r1, #1	; 0x1
        1413dc:	e5801004 	str	r1, [r0, #4]	; fField4
        1413e0:	ea6538f5 	b	1a8f7bc <TListLoop::$Current(void)>
    */
}

/**
 * Symbol: TListLoop::Current(void)
 * Address: 001413e4
 */
TListLoop::Current(void) {
    /*
        1413e4:	e9900006 	ldmib	r0, {r1, r2}
        1413e8:	e1510002 	cmp	r1, r2
        1413ec:	a3a00000 	movge	r0, #0	; 0x0
        1413f0:	b5900000 	ldrlt	r0, [r0]
        1413f4:	ba6a93d2 	blt	1be6344 <CList::$At(long)>
        1413f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TListLoop::RemoveCurrent(void)
 * Address: 001413fc
 */
TListLoop::RemoveCurrent(void) {
    /*
        1413fc:	e1a0c00d 	mov	ip, sp
        141400:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        141404:	e24cb004 	sub	fp, ip, #4	; 0x4
        141408:	e1a04000 	mov	r4, r0
        14140c:	e5900000 	ldr	r0, [r0]
        141410:	e3a02001 	mov	r2, #1	; 0x1
        141414:	e5941004 	ldr	r1, [r4, #4]	; fField4
        141418:	eb6aac85 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        14141c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        141420:	e2400001 	sub	r0, r0, #1	; 0x1
        141424:	e5840004 	str	r0, [r4, #4]	; fField4
        141428:	e5940008 	ldr	r0, [r4, #8]	; fField8
        14142c:	e2400001 	sub	r0, r0, #1	; 0x1
        141430:	e5a40008 	str	r0, [r4, #8]!	; fField8
        141434:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

