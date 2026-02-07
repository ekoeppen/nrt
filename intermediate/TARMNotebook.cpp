#include "include/TARMNotebook.h"

/**
 * Symbol: TARMNotebook::ClassID( const(void))
 * Address: 00145f78
 */
TARMNotebook::ClassID( const(void)) {
    /*
        145f78:	e3a00046 	mov	r0, #70	; 0x46
        145f7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TARMNotebook::DerivedFrom( const(long))
 * Address: 00145f80
 */
TARMNotebook::DerivedFrom( const(long)) {
    /*
        145f80:	e1a0c00d 	mov	ip, sp
        145f84:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        145f88:	e24cb004 	sub	fp, ip, #4	; 0x4
        145f8c:	e3310046 	teq	r1, #70	; 0x46
        145f90:	0a000002 	beq	145fa0 <TARMNotebook::DerivedFrom( const(long))+0x20>
        145f94:	eb000006 	bl	145fb4 <TNotebook::DerivedFrom( const(long))>
        145f98:	e3300000 	teq	r0, #0	; 0x0
        145f9c:	0a000001 	beq	145fa8 <TARMNotebook::DerivedFrom( const(long))+0x28>
        145fa0:	e3a00001 	mov	r0, #1	; 0x1
        145fa4:	ea000000 	b	145fac <TARMNotebook::DerivedFrom( const(long))+0x2c>
        145fa8:	e3a00000 	mov	r0, #0	; 0x0
        145fac:	e20000ff 	and	r0, r0, #255	; 0xff
        145fb0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

