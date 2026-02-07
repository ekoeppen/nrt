#include "include/CMPImportListSourceComparer.h"

/**
 * Symbol: CMPImportListSourceComparer::TestItem( const(void const *))
 * Address: 000cf878
 */
CMPImportListSourceComparer::TestItem( const(void const *)) {
    /*
         cf878:	e5900004 	ldr	r0, [r0, #4]	; fField4
         cf87c:	e5900004 	ldr	r0, [r0, #4]	; fField4
         cf880:	e5911004 	ldr	r1, [r1, #4]	; fField4
         cf884:	e1500001 	cmp	r0, r1
         cf888:	33e00000 	mvncc	r0, #0	; 0x0
         cf88c:	31a0f00e 	movcc	pc, lr
         cf890:	93a00000 	movls	r0, #0	; 0x0
         cf894:	83a00001 	movhi	r0, #1	; 0x1
         cf898:	e1a0f00e 	mov	pc, lr
    */
}

