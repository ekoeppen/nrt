#include "DDKIncludes/OS600/UserSharedMem.h"

/**
 * Symbol: TSharedMem::Init(TEnvironment *)
 * Address: 001dfa54
 */
long		TSharedMem::Init() {
    /*
        1dfa54:	e3a02000 	mov	r2, #0	; 0x0
        1dfa58:	e5802010 	str	r2, [r0, #16]	; fField16
        1dfa5c:	e5802014 	str	r2, [r0, #20]	; fField20
        1dfa60:	e5a0201c 	str	r2, [r0, #28]!	; fField28
        1dfa64:	e5801004 	str	r1, [r0, #4]	; fField4
        1dfa68:	e1a00002 	mov	r0, r2
        1dfa6c:	e1a0f00e 	mov	pc, lr
    */
}

