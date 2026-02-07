#include "include/SDirEnt.h"

/**
 * Symbol: SDirEnt::IsValid(TFlashStore *)
 * Address: 000c4f48
 */
SDirEnt::IsValid(TFlashStore *) {
    /*
         c4f48:	e5902000 	ldr	r2, [r0]
         c4f4c:	e3d230ff 	bics	r3, r2, #255	; 0xff
         c4f50:	e3a00000 	mov	r0, #0	; 0x0
         c4f54:	13e034ff 	mvnne	r3, #-16777216	; 0xff000000
         c4f58:	11330422 	teqne	r3, r2, lsr #8
         c4f5c:	01a0f00e 	moveq	pc, lr
         c4f60:	e5b13048 	ldr	r3, [r1, #72]!
         c4f64:	e3a01001 	mov	r1, #1	; 0x1
         c4f68:	e0033001 	and	r3, r3, r1
         c4f6c:	e1a02e02 	mov	r2, r2, lsl #28
         c4f70:	e1330fa2 	teq	r3, r2, lsr #31
         c4f74:	01a00001 	moveq	r0, r1
         c4f78:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: IsValidMigratedObjectInfo__7SDirEntSFlT1
 * Address: 000c4f7c
 */
void SDirEnt::IsValidMigratedObjectInfo() {
    /*
         c4f7c:	e250cdff 	subs	ip, r0, #16320	; 0x3fc0
         c4f80:	a35c003f 	cmpge	ip, #63	; 0x3f
         c4f84:	d3a0cb01 	movle	ip, #1024	; 0x400
         c4f88:	d24cc001 	suble	ip, ip, #1	; 0x1
         c4f8c:	d151000c 	cmple	r1, ip
         c4f90:	c3a00000 	movgt	r0, #0	; 0x0
         c4f94:	d3a00001 	movle	r0, #1	; 0x1
         c4f98:	e20000ff 	and	r0, r0, #255	; 0xff
         c4f9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: SDirEnt::SetMigratedObjectInfo(long, long)
 * Address: 000c4fa0
 */
SDirEnt::SetMigratedObjectInfo(long, long) {
    /*
         c4fa0:	e1811702 	orr	r1, r1, r2, lsl #14
         c4fa4:	e5902000 	ldr	r2, [r0]
         c4fa8:	e20220ff 	and	r2, r2, #255	; 0xff
         c4fac:	e1821401 	orr	r1, r2, r1, lsl #8
         c4fb0:	e5801000 	str	r1, [r0]
         c4fb4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: GetMigratedObjectInfo__7SDirEntCFPlT1
 * Address: 000c4fb8
 */
void SDirEnt::GetMigratedObjectInfo() {
    /*
         c4fb8:	e5900000 	ldr	r0, [r0]
         c4fbc:	e1a00420 	mov	r0, r0, lsr #8
         c4fc0:	e1a03740 	mov	r3, r0, asr #14
         c4fc4:	e1a00900 	mov	r0, r0, lsl #18
         c4fc8:	e1a00920 	mov	r0, r0, lsr #18
         c4fcc:	e5823000 	str	r3, [r2]
         c4fd0:	e5810000 	str	r0, [r1]
         c4fd4:	e1a0f00e 	mov	pc, lr
    */
}

