#include "include/HiliteLoop.h"

/**
 * Symbol: HiliteLoop::__ct(TView *)
 * Address: 00262e90
 */
HiliteLoop::HiliteLoop(TView *) {
    /*
        262e90:	e1a0c00d 	mov	ip, sp
        262e94:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        262e98:	e24cb004 	sub	fp, ip, #4	; 0x4
        262e9c:	e1b04000 	movs	r4, r0
        262ea0:	e1a05001 	mov	r5, r1
        262ea4:	1a000005 	bne	262ec0 <HiliteLoop::__ct(TView *)+0x30>
        262ea8:	e3a00014 	mov	r0, #20	; 0x14
        262eac:	eb65ae21 	bl	1bce738 <$__nw(unsigned int)>
        262eb0:	e1b04000 	movs	r4, r0
        262eb4:	1a000001 	bne	262ec0 <HiliteLoop::__ct(TView *)+0x30>
        262eb8:	e1a00004 	mov	r0, r4
        262ebc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        262ec0:	e3a00002 	mov	r0, #2	; 0x2
        262ec4:	eb657ca0 	bl	1bc214c <$AllocateRefHandle(long)>
        262ec8:	e3a06000 	mov	r6, #0	; 0x0
        262ecc:	e5840000 	str	r0, [r4]
        262ed0:	e5a06004 	str	r6, [r0, #4]!	; fField4
        262ed4:	e3a00002 	mov	r0, #2	; 0x2
        262ed8:	eb657c9b 	bl	1bc214c <$AllocateRefHandle(long)>
        262edc:	e584000c 	str	r0, [r4, #12]
        262ee0:	e5a06004 	str	r6, [r0, #4]!	; fField4
        262ee4:	e59f1034 	ldr	r1, [pc, #34]	; 262f20 <HiliteLoop::__ct(TView *)+0x90>
        262ee8:	e5911000 	ldr	r1, [r1]
        262eec:	e5911000 	ldr	r1, [r1]
        262ef0:	e5950024 	ldr	r0, [r5, #36]
        262ef4:	e5900000 	ldr	r0, [r0]
        262ef8:	eb6584d8 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        262efc:	e5941000 	ldr	r1, [r4]
        262f00:	e5810000 	str	r0, [r1]
        262f04:	e5846004 	str	r6, [r4, #4]	; fField4
        262f08:	e5940000 	ldr	r0, [r4]
        262f0c:	e5900000 	ldr	r0, [r0]
        262f10:	e3300002 	teq	r0, #2	; 0x2
        262f14:	0a000002 	beq	262f24 <HiliteLoop::__ct(TView *)+0x94>
        262f18:	eb6588e3 	bl	1bc52ac <$Length(long)>
        262f1c:	ea000001 	b	262f28 <HiliteLoop::__ct(TView *)+0x98>
        262f20:	00683110 	rsbeq	r3, r8, r0, lsl r1
        262f24:	e3a00000 	mov	r0, #0	; 0x0
        262f28:	e5840008 	str	r0, [r4, #8]
        262f2c:	eaffffe1 	b	262eb8 <HiliteLoop::__ct(TView *)+0x28>
    */
}

/**
 * Symbol: HiliteLoop::__dt(void)
 * Address: 00262f30
 */
HiliteLoop::~HiliteLoop(void) {
    /*
        262f30:	e1a0c00d 	mov	ip, sp
        262f34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        262f38:	e24cb004 	sub	fp, ip, #4	; 0x4
        262f3c:	e1a04000 	mov	r4, r0
        262f40:	e1a05001 	mov	r5, r1
        262f44:	e590000c 	ldr	r0, [r0, #12]
        262f48:	eb65809b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        262f4c:	e5940000 	ldr	r0, [r4]
        262f50:	eb658099 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        262f54:	e3150001 	tst	r5, #1	; 0x1
        262f58:	11a00004 	movne	r0, r4
        262f5c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        262f60:	1a65a9de 	bne	1bcd6e0 <$__dl(void *)>
        262f64:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: HiliteLoop::Next(void)
 * Address: 00262f68
 */
HiliteLoop::Next(void) {
    /*
        262f68:	e1a0c00d 	mov	ip, sp
        262f6c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        262f70:	e24cb004 	sub	fp, ip, #4	; 0x4
        262f74:	e1a04000 	mov	r4, r0
        262f78:	e3a06000 	mov	r6, #0	; 0x0
        262f7c:	e280000c 	add	r0, r0, #12	; 0xc
        262f80:	e1a05000 	mov	r5, r0
        262f84:	e3a01002 	mov	r1, #2	; 0x2
        262f88:	e5900000 	ldr	r0, [r0]
        262f8c:	e5801000 	str	r1, [r0]
        262f90:	e5940008 	ldr	r0, [r4, #8]
        262f94:	e5941004 	ldr	r1, [r4, #4]	; fField4
        262f98:	e1510000 	cmp	r1, r0
        262f9c:	aa000012 	bge	262fec <HiliteLoop::Next(void)+0x84>
        262fa0:	e5940000 	ldr	r0, [r4]
        262fa4:	e5900000 	ldr	r0, [r0]
        262fa8:	eb6588bf 	bl	1bc52ac <$Length(long)>
        262fac:	e3500000 	cmp	r0, #0	; 0x0
        262fb0:	da00000d 	ble	262fec <HiliteLoop::Next(void)+0x84>
        262fb4:	e3a06001 	mov	r6, #1	; 0x1
        262fb8:	e1a07005 	mov	r7, r5
        262fbc:	e5941004 	ldr	r1, [r4, #4]	; fField4
        262fc0:	e0810006 	add	r0, r1, r6
        262fc4:	e5840004 	str	r0, [r4, #4]	; fField4
        262fc8:	e5940000 	ldr	r0, [r4]
        262fcc:	e5900000 	ldr	r0, [r0]
        262fd0:	eb65849f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        262fd4:	e5971000 	ldr	r1, [r7]
        262fd8:	e5810000 	str	r0, [r1]
        262fdc:	e5950000 	ldr	r0, [r5]
        262fe0:	e5900000 	ldr	r0, [r0]
        262fe4:	eb60f3fd 	bl	1a9ffe0 <$RefToAddress(long)>
        262fe8:	e5a40010 	str	r0, [r4, #16]!
        262fec:	e1a00006 	mov	r0, r6
        262ff0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

