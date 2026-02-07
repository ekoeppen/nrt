#include "include/TDynArray.h"

/**
 * Symbol: TDynArray::__ct(int, int)
 * Address: 0025c258
 */
TDynArray::TDynArray(int, int) {
    /*
        25c258:	e1a0c00d 	mov	ip, sp
        25c25c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25c260:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c264:	e1b04000 	movs	r4, r0
        25c268:	e1a06001 	mov	r6, r1
        25c26c:	e1a05002 	mov	r5, r2
        25c270:	1a000003 	bne	25c284 <TDynArray::__ct(int, int)+0x2c>
        25c274:	e3a0000c 	mov	r0, #12	; 0xc
        25c278:	eb65c92e 	bl	1bce738 <$__nw(unsigned int)>
        25c27c:	e1b04000 	movs	r4, r0
        25c280:	0a000005 	beq	25c29c <TDynArray::__ct(int, int)+0x44>
        25c284:	e8840060 	stmia	r4, {r5, r6}
        25c288:	e3350000 	teq	r5, #0	; 0x0
        25c28c:	0a000002 	beq	25c29c <TDynArray::__ct(int, int)+0x44>
        25c290:	e1a00105 	mov	r0, r5, lsl #2
        25c294:	eb65c927 	bl	1bce738 <$__nw(unsigned int)>
        25c298:	e5840008 	str	r0, [r4, #8]	; fField8
        25c29c:	e1a00004 	mov	r0, r4
        25c2a0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDynArray::Resize(int)
 * Address: 0025c2a4
 */
TDynArray::Resize(int) {
    /*
        25c2a4:	e1a0c00d 	mov	ip, sp
        25c2a8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25c2ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        25c2b0:	e1a04000 	mov	r4, r0
        25c2b4:	e1a05001 	mov	r5, r1
        25c2b8:	e3e00000 	mvn	r0, #0	; 0x0
        25c2bc:	e3510000 	cmp	r1, #0	; 0x0
        25c2c0:	da00000b 	ble	25c2f4 <TDynArray::Resize(int)+0x50>
        25c2c4:	e5941000 	ldr	r1, [r4]
        25c2c8:	e3310000 	teq	r1, #0	; 0x0
        25c2cc:	1a000003 	bne	25c2e0 <TDynArray::Resize(int)+0x3c>
        25c2d0:	e3a00000 	mov	r0, #0	; 0x0
        25c2d4:	eb65c917 	bl	1bce738 <$__nw(unsigned int)>
        25c2d8:	e5840008 	str	r0, [r4, #8]	; fField8
        25c2dc:	ea000008 	b	25c304 <TDynArray::Resize(int)+0x60>
        25c2e0:	e5942004 	ldr	r2, [r4, #4]	; fField4
        25c2e4:	e0822005 	add	r2, r2, r5
        25c2e8:	e1520001 	cmp	r2, r1
        25c2ec:	c91ba830 	ldmgtdb	fp, {r4, r5, fp, sp, pc}
        25c2f0:	ea000003 	b	25c304 <TDynArray::Resize(int)+0x60>
        25c2f4:	e2652000 	rsb	r2, r5, #0	; 0x0
        25c2f8:	e5941004 	ldr	r1, [r4, #4]	; fField4
        25c2fc:	e1510002 	cmp	r1, r2
        25c300:	b91ba830 	ldmltdb	fp, {r4, r5, fp, sp, pc}
        25c304:	e5940004 	ldr	r0, [r4, #4]	; fField4
        25c308:	e0800005 	add	r0, r0, r5
        25c30c:	e5a40004 	str	r0, [r4, #4]!	; fField4
        25c310:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

