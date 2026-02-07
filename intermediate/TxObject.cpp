#include "include/TxObject.h"

/**
 * Symbol: TxObject::__dt(void)
 * Address: 00143778
 */
TxObject::~TxObject(void) {
    /*
        143778:	e59f200c 	ldr	r2, [pc, #c]	; 14378c <TxObject::__dt(void)+0x14>
        14377c:	e3110001 	tst	r1, #1	; 0x1
        143780:	e5802000 	str	r2, [r0]
        143784:	1a65132c 	bne	1a8843c <$__dl__8TxObjectSFPv>
        143788:	e1a0f00e 	mov	pc, lr
        14378c:	00020640 	andeq	r0, r2, r0, asr #12
    */
}

/**
 * Symbol: TxObject::ClassID( const(void))
 * Address: 00143790
 */
TxObject::ClassID( const(void)) {
    /*
        143790:	e3a00040 	mov	r0, #64	; 0x40
        143794:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TxObject::DerivedFrom( const(long))
 * Address: 00143798
 */
TxObject::DerivedFrom( const(long)) {
    /*
        143798:	e3310040 	teq	r1, #64	; 0x40
        14379c:	13a00000 	movne	r0, #0	; 0x0
        1437a0:	03a00001 	moveq	r0, #1	; 0x1
        1437a4:	e20000ff 	and	r0, r0, #255	; 0xff
        1437a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TxObject::Key( const(void))
 * Address: 001437ac
 */
TxObject::Key( const(void)) {
    /*
        1437ac:	e3a00000 	mov	r0, #0	; 0x0
        1437b0:	e1a0f00e 	mov	pc, lr
    */
}

