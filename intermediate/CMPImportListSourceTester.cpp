#include "include/CMPImportListSourceTester.h"

/**
 * Symbol: CMPImportListSourceTester::TestItem( const(void const *))
 * Address: 000cf89c
 */
CMPImportListSourceTester::TestItem( const(void const *)) {
    /*
         cf89c:	e5900004 	ldr	r0, [r0, #4]	; fField4
         cf8a0:	e5911004 	ldr	r1, [r1, #4]	; fField4
         cf8a4:	e1500001 	cmp	r0, r1
         cf8a8:	33e00000 	mvncc	r0, #0	; 0x0
         cf8ac:	31a0f00e 	movcc	pc, lr
         cf8b0:	93a00000 	movls	r0, #0	; 0x0
         cf8b4:	83a00001 	movhi	r0, #1	; 0x1
         cf8b8:	e1a0f00e 	mov	pc, lr
    */
}

