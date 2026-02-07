#include "include/TStack.h"

/**
 * Symbol: TStack::Pop(void)
 * Address: 00141498
 */
TStack::Pop(void) {
    /*
        141498:	e1a0c00d 	mov	ip, sp
        14149c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1414a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1414a4:	e1a04000 	mov	r4, r0
        1414a8:	e5900000 	ldr	r0, [r0]
        1414ac:	e2401001 	sub	r1, r0, #1	; 0x1
        1414b0:	e1a00004 	mov	r0, r4
        1414b4:	eb6a93a2 	bl	1be6344 <CList::$At(long)>
        1414b8:	e1a05000 	mov	r5, r0
        1414bc:	e5940000 	ldr	r0, [r4]
        1414c0:	e2401001 	sub	r1, r0, #1	; 0x1
        1414c4:	e1a00004 	mov	r0, r4
        1414c8:	e3a02001 	mov	r2, #1	; 0x1
        1414cc:	eb6aac58 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        1414d0:	e1a00005 	mov	r0, r5
        1414d4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

