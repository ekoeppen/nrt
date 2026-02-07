#include "include/TIASClass.h"

/**
 * Symbol: TIASClass::__ct(void)
 * Address: 000f19c8
 */
TIASClass::TIASClass(void) {
    /*
         f19c8:	e1a0c00d 	mov	ip, sp
         f19cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f19d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f19d4:	e1b04000 	movs	r4, r0
         f19d8:	1a000003 	bne	f19ec <TIASClass::__ct(void)+0x24>
         f19dc:	e3a0001c 	mov	r0, #28	; 0x1c
         f19e0:	eb6b7354 	bl	1bce738 <$__nw(unsigned int)>
         f19e4:	e1b04000 	movs	r4, r0
         f19e8:	0a000001 	beq	f19f4 <TIASClass::__ct(void)+0x2c>
         f19ec:	e1a00004 	mov	r0, r4
         f19f0:	eb6503d5 	bl	1a3294c <TIASNamedList::$__ct(void)>
         f19f4:	e1a00004 	mov	r0, r4
         f19f8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIASClass::__dt(void)
 * Address: 000f19fc
 */
TIASClass::~TIASClass(void) {
    /*
         f19fc:	e1a0c00d 	mov	ip, sp
         f1a00:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f1a04:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1a08:	e1a04000 	mov	r4, r0
         f1a0c:	e1a05001 	mov	r5, r1
         f1a10:	e3a06000 	mov	r6, #0	; 0x0
         f1a14:	e5900000 	ldr	r0, [r0]
         f1a18:	e3500000 	cmp	r0, #0	; 0x0
         f1a1c:	da000009 	ble	f1a48 <TIASClass::__dt(void)+0x4c>
         f1a20:	e1a01006 	mov	r1, r6
         f1a24:	e1a00004 	mov	r0, r4
         f1a28:	eb6bd245 	bl	1be6344 <CList::$At(long)>
         f1a2c:	e3300000 	teq	r0, #0	; 0x0
         f1a30:	13a01001 	movne	r1, #1	; 0x1
         f1a34:	1b6503bf 	blne	1a32938 <TIASAttribute::$__dt(void)>
         f1a38:	e2866001 	add	r6, r6, #1	; 0x1
         f1a3c:	e5940000 	ldr	r0, [r4]
         f1a40:	e1500006 	cmp	r0, r6
         f1a44:	cafffff5 	bgt	f1a20 <TIASClass::__dt(void)+0x24>
         f1a48:	e1a00004 	mov	r0, r4
         f1a4c:	e3a01000 	mov	r1, #0	; 0x0
         f1a50:	eb6503be 	bl	1a32950 <TIASNamedList::$__dt(void)>
         f1a54:	e3150001 	tst	r5, #1	; 0x1
         f1a58:	11a00004 	movne	r0, r4
         f1a5c:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         f1a60:	1a6b6f1e 	bne	1bcd6e0 <$__dl(void *)>
         f1a64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIASClass::Insert(TIASAttribute *)
 * Address: 000f1a68
 */
TIASClass::Insert(TIASAttribute *) {
    /*
         f1a68:	e1a02001 	mov	r2, r1
         f1a6c:	e5901000 	ldr	r1, [r0]
         f1a70:	ea6bde9d 	b	1be94ec <CList::$InsertAt(long, void *)>
    */
}

/**
 * Symbol: TIASClass::FindAttribute(unsigned char const *)
 * Address: 000f1a74
 */
TIASClass::FindAttribute(unsigned char const *) {
    /*
         f1a74:	ea6503b7 	b	1a32958 <TIASNamedList::$Search(unsigned char const *)>
    */
}

