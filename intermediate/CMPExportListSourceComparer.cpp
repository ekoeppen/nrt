#include "include/CMPExportListSourceComparer.h"

/**
 * Symbol: CMPExportListSourceComparer::TestItem( const(void const *))
 * Address: 000d1794
 */
CMPExportListSourceComparer::TestItem( const(void const *)) {
    /*
         d1794:	e5900004 	ldr	r0, [r0, #4]	; fField4
         d1798:	e5900000 	ldr	r0, [r0]
         d179c:	e5911000 	ldr	r1, [r1]
         d17a0:	e1300001 	teq	r0, r1
         d17a4:	13e00000 	mvnne	r0, #0	; 0x0
         d17a8:	03a00000 	moveq	r0, #0	; 0x0
         d17ac:	e1a0f00e 	mov	pc, lr
    */
}

