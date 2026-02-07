#include "include/TXLongRect.h"

/**
 * Symbol: TXLongRect::Offset(long, long)
 * Address: 00233f24
 */
TXLongRect::Offset(long, long) {
    /*
        233f24:	e5903004 	ldr	r3, [r0, #4]	; fField4
        233f28:	e0833001 	add	r3, r3, r1
        233f2c:	e5803004 	str	r3, [r0, #4]	; fField4
        233f30:	e590300c 	ldr	r3, [r0, #12]	; fField12
        233f34:	e0831001 	add	r1, r3, r1
        233f38:	e580100c 	str	r1, [r0, #12]	; fField12
        233f3c:	e5901000 	ldr	r1, [r0]
        233f40:	e0811002 	add	r1, r1, r2
        233f44:	e5801000 	str	r1, [r0]
        233f48:	e5901008 	ldr	r1, [r0, #8]	; fField8
        233f4c:	e0811002 	add	r1, r1, r2
        233f50:	e5a01008 	str	r1, [r0, #8]!	; fField8
        233f54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXLongRect::Sect( const(TXLongRect const &, TXLongRect *))
 * Address: 00233f58
 */
TXLongRect::Sect( const(TXLongRect const &, TXLongRect *)) {
    /*
        233f58:	e92d4010 	stmdb	sp!, {r4, lr}
        233f5c:	e5903000 	ldr	r3, [r0]
        233f60:	e591c000 	ldr	ip, [r1]
        233f64:	e153000c 	cmp	r3, ip
        233f68:	d1a0300c 	movle	r3, ip
        233f6c:	e5823000 	str	r3, [r2]
        233f70:	e1a04003 	mov	r4, r3
        233f74:	e5903004 	ldr	r3, [r0, #4]	; fField4
        233f78:	e591c004 	ldr	ip, [r1, #4]	; fField4
        233f7c:	e153000c 	cmp	r3, ip
        233f80:	d1a0300c 	movle	r3, ip
        233f84:	e5823004 	str	r3, [r2, #4]	; fField4
        233f88:	e1a0e003 	mov	lr, r3
        233f8c:	e5903008 	ldr	r3, [r0, #8]	; fField8
        233f90:	e591c008 	ldr	ip, [r1, #8]	; fField8
        233f94:	e153000c 	cmp	r3, ip
        233f98:	a1a0300c 	movge	r3, ip
        233f9c:	e5823008 	str	r3, [r2, #8]	; fField8
        233fa0:	e590000c 	ldr	r0, [r0, #12]	; fField12
        233fa4:	e591100c 	ldr	r1, [r1, #12]	; fField12
        233fa8:	e1500001 	cmp	r0, r1
        233fac:	a1a00001 	movge	r0, r1
        233fb0:	e1530004 	cmp	r3, r4
        233fb4:	e5a2000c 	str	r0, [r2, #12]!	; fField12
        233fb8:	da000002 	ble	233fc8 <TXLongRect::Sect( const(TXLongRect const &, TXLongRect *))+0x70>
        233fbc:	e15e0000 	cmp	lr, r0
        233fc0:	b3a00001 	movlt	r0, #1	; 0x1
        233fc4:	b8bd8010 	ldmltia	sp!, {r4, pc}
        233fc8:	e3a00000 	mov	r0, #0	; 0x0
        233fcc:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TXLongRect::IsPointInside( const(TXLongPoint const &))
 * Address: 00234784
 */
TXLongRect::IsPointInside( const(TXLongPoint const &)) {
    /*
        234784:	e5912004 	ldr	r2, [r1, #4]	; fField4
        234788:	e5903004 	ldr	r3, [r0, #4]	; fField4
        23478c:	e1520003 	cmp	r2, r3
        234790:	ba000009 	blt	2347bc <TXLongRect::IsPointInside( const(TXLongPoint const &))+0x38>
        234794:	e590300c 	ldr	r3, [r0, #12]	; fField12
        234798:	e1520003 	cmp	r2, r3
        23479c:	ca000006 	bgt	2347bc <TXLongRect::IsPointInside( const(TXLongPoint const &))+0x38>
        2347a0:	e5911000 	ldr	r1, [r1]
        2347a4:	e5902000 	ldr	r2, [r0]
        2347a8:	e1510002 	cmp	r1, r2
        2347ac:	a5900008 	ldrge	r0, [r0, #8]	; fField8
        2347b0:	a1500001 	cmpge	r0, r1
        2347b4:	a3a00001 	movge	r0, #1	; 0x1
        2347b8:	aa000000 	bge	2347c0 <TXLongRect::IsPointInside( const(TXLongPoint const &))+0x3c>
        2347bc:	e3a00000 	mov	r0, #0	; 0x0
        2347c0:	e20000ff 	and	r0, r0, #255	; 0xff
        2347c4:	e1a0f00e 	mov	pc, lr
    */
}

