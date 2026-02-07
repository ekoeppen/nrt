#include "include/SysEventItemComparer.h"

/**
 * Symbol: SysEventItemComparer::TestItem( const(void const *))
 * Address: 00130f6c
 */
SysEventItemComparer::TestItem( const(void const *)) {
    /*
        130f6c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        130f70:	e5900000 	ldr	r0, [r0]
        130f74:	e5911000 	ldr	r1, [r1]
        130f78:	e1500001 	cmp	r0, r1
        130f7c:	33e00000 	mvncc	r0, #0	; 0x0
        130f80:	31a0f00e 	movcc	pc, lr
        130f84:	93a00000 	movls	r0, #0	; 0x0
        130f88:	83a00001 	movhi	r0, #1	; 0x1
        130f8c:	e1a0f00e 	mov	pc, lr
    */
}

