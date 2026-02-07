#include "DDKIncludes/Bootstrap/MemoryLanes.h"

/**
 * Symbol: SBankInfo::NormalRAMSize(void)
 * Address: 003135b8
 */
ULong SBankInfo::NormalRAMSize( void ) {
    /*
        3135b8:	e5901010 	ldr	r1, [r0, #16]	; mUnknown_3
        3135bc:	e3310004 	teq	r1, #4	; 0x4
        3135c0:	13a00000 	movne	r0, #0	; 0x0
        3135c4:	05900004 	ldreq	r0, [r0, #4]	; mUnknown_1
        3135c8:	e1a0f00e 	mov	pc, lr
    */
}

