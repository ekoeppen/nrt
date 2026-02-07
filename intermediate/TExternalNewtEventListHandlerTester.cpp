#include "include/TExternalNewtEventListHandlerTester.h"

/**
 * Symbol: TExternalNewtEventListHandlerTester::SetEventHandler(TExternalNewtEventHandler *)
 * Address: 0030bb18
 */
TExternalNewtEventListHandlerTester::SetEventHandler(TExternalNewtEventHandler *) {
    /*
        30bb18:	e5a01004 	str	r1, [r0, #4]!	; fField4
        30bb1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TExternalNewtEventListHandlerTester::TestItem( const(void const *))
 * Address: 0030bb6c
 */
TExternalNewtEventListHandlerTester::TestItem( const(void const *)) {
    /*
        30bb6c:	e5911004 	ldr	r1, [r1, #4]	; fField4
        30bb70:	e5900004 	ldr	r0, [r0, #4]	; fField4
        30bb74:	e1310000 	teq	r1, r0
        30bb78:	13e00000 	mvnne	r0, #0	; 0x0
        30bb7c:	03a00000 	moveq	r0, #0	; 0x0
        30bb80:	e1a0f00e 	mov	pc, lr
    */
}

