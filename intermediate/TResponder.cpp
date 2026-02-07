#include "include/TResponder.h"

/**
 * Symbol: TResponder::ClassID( const(void))
 * Address: 001a9354
 */
TResponder::ClassID( const(void)) {
    /*
        1a9354:	e3a00041 	mov	r0, #65	; 0x41
        1a9358:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TResponder::DerivedFrom( const(long))
 * Address: 001a935c
 */
TResponder::DerivedFrom( const(long)) {
    /*
        1a935c:	e1a0c00d 	mov	ip, sp
        1a9360:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1a9364:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a9368:	e3310041 	teq	r1, #65	; 0x41
        1a936c:	0a000002 	beq	1a937c <TResponder::DerivedFrom( const(long))+0x20>
        1a9370:	ebfe6908 	bl	143798 <TxObject::DerivedFrom( const(long))>
        1a9374:	e3300000 	teq	r0, #0	; 0x0
        1a9378:	0a000001 	beq	1a9384 <TResponder::DerivedFrom( const(long))+0x28>
        1a937c:	e3a00001 	mov	r0, #1	; 0x1
        1a9380:	ea000000 	b	1a9388 <TResponder::DerivedFrom( const(long))+0x2c>
        1a9384:	e3a00000 	mov	r0, #0	; 0x0
        1a9388:	e20000ff 	and	r0, r0, #255	; 0xff
        1a938c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TResponder::DoCommand(RefVar const &)
 * Address: 001a9390
 */
TResponder::DoCommand(RefVar const &) {
    /*
        1a9390:	e3a00000 	mov	r0, #0	; 0x0
        1a9394:	e1a0f00e 	mov	pc, lr
    */
}

