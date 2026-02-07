#include "include/TFlashTracker.h"

/**
 * Symbol: TFlashTracker::__ct(void)
 * Address: 000cadbc
 */
TFlashTracker::TFlashTracker(void) {
    /*
         cadbc:	e1a0c00d 	mov	ip, sp
         cadc0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         cadc4:	e24cb004 	sub	fp, ip, #4	; 0x4
         cadc8:	e1b04000 	movs	r4, r0
         cadcc:	1a000003 	bne	cade0 <TFlashTracker::__ct(void)+0x24>
         cadd0:	e3a00014 	mov	r0, #20	; 0x14
         cadd4:	eb6c0e57 	bl	1bce738 <$__nw(unsigned int)>
         cadd8:	e1b04000 	movs	r4, r0
         caddc:	0a000006 	beq	cadfc <TFlashTracker::__ct(void)+0x40>
         cade0:	e3a00000 	mov	r0, #0	; 0x0
         cade4:	e5840000 	str	r0, [r4]
         cade8:	e5840004 	str	r0, [r4, #4]	; fField4
         cadec:	e5840008 	str	r0, [r4, #8]	; fField8
         cadf0:	e1a00004 	mov	r0, r4
         cadf4:	e3a01080 	mov	r1, #128	; 0x80
         cadf8:	eb68c3fa 	bl	1afbde8 <TFlashTracker::$Init(unsigned long)>
         cadfc:	e1a00004 	mov	r0, r4
         cae00:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashTracker::__dt(void)
 * Address: 000cae04
 */
TFlashTracker::~TFlashTracker(void) {
    /*
         cae04:	e1a0c00d 	mov	ip, sp
         cae08:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         cae0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         cae10:	e1a04000 	mov	r4, r0
         cae14:	e1a05001 	mov	r5, r1
         cae18:	eb68ab37 	bl	1af5afc <TFlashTracker::$Deinit(void)>
         cae1c:	e3150001 	tst	r5, #1	; 0x1
         cae20:	11a00004 	movne	r0, r4
         cae24:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         cae28:	1a6c0a2c 	bne	1bcd6e0 <$__dl(void *)>
         cae2c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashTracker::Init(unsigned long)
 * Address: 000cae30
 */
TFlashTracker::Init(unsigned long) {
    /*
         cae30:	e1a0c00d 	mov	ip, sp
         cae34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         cae38:	e24cb004 	sub	fp, ip, #4	; 0x4
         cae3c:	e1a04000 	mov	r4, r0
         cae40:	e1a05001 	mov	r5, r1
         cae44:	eb68ab2c 	bl	1af5afc <TFlashTracker::$Deinit(void)>
         cae48:	e3a00000 	mov	r0, #0	; 0x0
         cae4c:	e5c4000c 	strb	r0, [r4, #12]	; fField12
         cae50:	e5840010 	str	r0, [r4, #16]	; fField16
         cae54:	e5845000 	str	r5, [r4]
         cae58:	e1a00105 	mov	r0, r5, lsl #2
         cae5c:	eb6c2f41 	bl	1bd6b68 <$malloc>
         cae60:	e5a40008 	str	r0, [r4, #8]!	; fField8
         cae64:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         cae68:	ea6c5cac 	b	1be2120 <$MemError>
    */
}

/**
 * Symbol: TFlashTracker::Deinit(void)
 * Address: 000cae6c
 */
TFlashTracker::Deinit(void) {
    /*
         cae6c:	e1a0c00d 	mov	ip, sp
         cae70:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         cae74:	e24cb004 	sub	fp, ip, #4	; 0x4
         cae78:	e1a04000 	mov	r4, r0
         cae7c:	e5900008 	ldr	r0, [r0, #8]	; fField8
         cae80:	eb6c1eb4 	bl	1bd2958 <$free>
         cae84:	e3a00000 	mov	r0, #0	; 0x0
         cae88:	e5a40008 	str	r0, [r4, #8]!	; fField8
         cae8c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashTracker::Add(unsigned long)
 * Address: 000cae90
 */
TFlashTracker::Add(unsigned long) {
    /*
         cae90:	e5d0200c 	ldrb	r2, [r0, #12]	; fField12
         cae94:	e3320000 	teq	r2, #0	; 0x0
         cae98:	11a0f00e 	movne	pc, lr
         cae9c:	e5903004 	ldr	r3, [r0, #4]	; fField4
         caea0:	e2832001 	add	r2, r3, #1	; 0x1
         caea4:	e5802004 	str	r2, [r0, #4]	; fField4
         caea8:	e5902008 	ldr	r2, [r0, #8]	; fField8
         caeac:	e7821103 	str	r1, [r2, r3, lsl #2]	; fField2
         caeb0:	e5901004 	ldr	r1, [r0, #4]	; fField4
         caeb4:	e5902000 	ldr	r2, [r0]
         caeb8:	e1510002 	cmp	r1, r2
         caebc:	23a01001 	movcs	r1, #1	; 0x1
         caec0:	25c0100c 	strcsb	r1, [r0, #12]	; fField12
         caec4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashTracker::Remove(unsigned long)
 * Address: 000caec8
 */
TFlashTracker::Remove(unsigned long) {
    /*
         caec8:	e3a02000 	mov	r2, #0	; 0x0
         caecc:	e5903004 	ldr	r3, [r0, #4]	; fField4
         caed0:	e3530000 	cmp	r3, #0	; 0x0
         caed4:	91a0f00e 	movls	pc, lr
         caed8:	e5900008 	ldr	r0, [r0, #8]	; fField8
         caedc:	e790c102 	ldr	ip, [r0, r2, lsl #2]	; fField2
         caee0:	e13c0001 	teq	ip, r1
         caee4:	03e01000 	mvneq	r1, #0	; 0x0
         caee8:	07801102 	streq	r1, [r0, r2, lsl #2]	; fField2
         caeec:	01a0f00e 	moveq	pc, lr
         caef0:	e2822001 	add	r2, r2, #1	; 0x1
         caef4:	e1530002 	cmp	r3, r2
         caef8:	8afffff7 	bhi	caedc <TFlashTracker::Remove(unsigned long)+0x14>
         caefc:	e1a0f00e 	mov	pc, lr
    */
}

