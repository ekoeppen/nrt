#include "include/TBeamerCallback.h"

/**
 * Symbol: TBeamerCallback::Status(long, long)
 * Address: 0003daf0
 */
TBeamerCallback::Status(long, long) {
    /*
         3daf0:	e1a0c00d 	mov	ip, sp
         3daf4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3daf8:	e24cb004 	sub	fp, ip, #4	; 0x4
         3dafc:	e1a04000 	mov	r4, r0
         3db00:	e3e03000 	mvn	r3, #0	; 0x0
         3db04:	e5905010 	ldr	r5, [r0, #16]
         3db08:	e3350000 	teq	r5, #0	; 0x0
         3db0c:	0a000008 	beq	3db34 <TBeamerCallback::Status(long, long)+0x44>
         3db10:	e5940004 	ldr	r0, [r4, #4]	; fField4
         3db14:	e3500000 	cmp	r0, #0	; 0x0
         3db18:	da00000f 	ble	3db5c <TBeamerCallback::Status(long, long)+0x6c>
         3db1c:	e3510000 	cmp	r1, #0	; 0x0
         3db20:	a081c181 	addge	ip, r1, r1, lsl #3
         3db24:	a08c1201 	addge	r1, ip, r1, lsl #4
         3db28:	a1a01101 	movge	r1, r1, lsl #2
         3db2c:	aa000008 	bge	3db54 <TBeamerCallback::Status(long, long)+0x64>
         3db30:	ea000009 	b	3db5c <TBeamerCallback::Status(long, long)+0x6c>
         3db34:	e5940008 	ldr	r0, [r4, #8]	; fField8
         3db38:	e3500000 	cmp	r0, #0	; 0x0
         3db3c:	da000006 	ble	3db5c <TBeamerCallback::Status(long, long)+0x6c>
         3db40:	e3520000 	cmp	r2, #0	; 0x0
         3db44:	ba000004 	blt	3db5c <TBeamerCallback::Status(long, long)+0x6c>
         3db48:	e0821182 	add	r1, r2, r2, lsl #3
         3db4c:	e0811202 	add	r1, r1, r2, lsl #4
         3db50:	e1a01101 	mov	r1, r1, lsl #2
         3db54:	eb6dd379 	bl	1bb2940 <$__rt_sdiv>
         3db58:	e1a03000 	mov	r3, r0
         3db5c:	e1a02005 	mov	r2, r5
         3db60:	e1a01003 	mov	r1, r3
         3db64:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
         3db68:	eb6a326d 	bl	1aca524 <TBeamer::$UpdateProgress(long, int)>
         3db6c:	e3a00001 	mov	r0, #1	; 0x1
         3db70:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

