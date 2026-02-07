#include "include/TExternalNewtEventListTypeTester.h"

/**
 * Symbol: TExternalNewtEventListTypeTester::SetEventType(unsigned long)
 * Address: 0030baf8
 */
TExternalNewtEventListTypeTester::SetEventType(unsigned long) {
    /*
        30baf8:	e5a01004 	str	r1, [r0, #4]!	; fField4
        30bafc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TExternalNewtEventListTypeTester::TestItem( const(void const *))
 * Address: 0030bb00
 */
TExternalNewtEventListTypeTester::TestItem( const(void const *)) {
    /*
        30bb00:	e5900004 	ldr	r0, [r0, #4]	; fField4
        30bb04:	e5911000 	ldr	r1, [r1]
        30bb08:	e1300001 	teq	r0, r1
        30bb0c:	13e00000 	mvnne	r0, #0	; 0x0
        30bb10:	03a00000 	moveq	r0, #0	; 0x0
        30bb14:	e1a0f00e 	mov	pc, lr
    */
}

