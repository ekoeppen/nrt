#include "include/TCursorArray.h"

/**
 * Symbol: TCursorArray::__ct(void)
 * Address: 000940a4
 */
TCursorArray::TCursorArray(void) {
    /*
         940a4:	e1a0c00d 	mov	ip, sp
         940a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         940ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         940b0:	e1b04000 	movs	r4, r0
         940b4:	1a000003 	bne	940c8 <TCursorArray::__ct(void)+0x24>
         940b8:	e3a00004 	mov	r0, #4	; 0x4
         940bc:	eb6ce99d 	bl	1bce738 <$__nw(unsigned int)>
         940c0:	e1b04000 	movs	r4, r0
         940c4:	0a000008 	beq	940ec <TCursorArray::__ct(void)+0x48>
         940c8:	e3a00002 	mov	r0, #2	; 0x2
         940cc:	eb6cb81e 	bl	1bc214c <$AllocateRefHandle(long)>
         940d0:	e3a01000 	mov	r1, #0	; 0x0
         940d4:	e5840000 	str	r0, [r4]
         940d8:	e5a01004 	str	r1, [r0, #4]!	; fField4
         940dc:	e59f0010 	ldr	r0, [pc, #10]	; 940f4 <TCursorArray::__ct(void)+0x50>
         940e0:	eb6cb814 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         940e4:	e5941000 	ldr	r1, [r4]
         940e8:	e5810000 	str	r0, [r1]
         940ec:	e1a00004 	mov	r0, r4
         940f0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         940f4:	00681f10 	rsbeq	r1, r8, r0, lsl pc
    */
}

/**
 * Symbol: TCursorArray::__dt(void)
 * Address: 000947b8
 */
TCursorArray::~TCursorArray(void) {
    /*
         947b8:	e1a0c00d 	mov	ip, sp
         947bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         947c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         947c4:	e1a04000 	mov	r4, r0
         947c8:	e1a05001 	mov	r5, r1
         947cc:	e5900000 	ldr	r0, [r0]
         947d0:	eb6cba79 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         947d4:	e3150001 	tst	r5, #1	; 0x1
         947d8:	11a00004 	movne	r0, r4
         947dc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         947e0:	1a6ce3be 	bne	1bcd6e0 <$__dl(void *)>
         947e4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCursorArray::Add(RefVar const &)
 * Address: 00095824
 */
TCursorArray::Add(RefVar const &) {
    /*
         95824:	e1a0c00d 	mov	ip, sp
         95828:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         9582c:	e24cb004 	sub	fp, ip, #4	; 0x4
         95830:	e1a04000 	mov	r4, r0
         95834:	e1a05001 	mov	r5, r1
         95838:	e5900000 	ldr	r0, [r0]
         9583c:	e5900000 	ldr	r0, [r0]
         95840:	eb6cbe99 	bl	1bc52ac <$Length(long)>
         95844:	e1a08000 	mov	r8, r0
         95848:	e3a00002 	mov	r0, #2	; 0x2
         9584c:	eb6cb23e 	bl	1bc214c <$AllocateRefHandle(long)>
         95850:	e1a07000 	mov	r7, r0
         95854:	e3a06000 	mov	r6, #0	; 0x0
         95858:	e3580000 	cmp	r8, #0	; 0x0
         9585c:	9a000013 	bls	958b0 <TCursorArray::Add(RefVar const &)+0x8c>
         95860:	e1a01006 	mov	r1, r6
         95864:	e5940000 	ldr	r0, [r4]
         95868:	e5900000 	ldr	r0, [r0]
         9586c:	eb6cba78 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         95870:	e5870000 	str	r0, [r7]
         95874:	e3300002 	teq	r0, #2	; 0x2
         95878:	1a000009 	bne	958a4 <TCursorArray::Add(RefVar const &)+0x80>
         9587c:	e1a01006 	mov	r1, r6
         95880:	e5950000 	ldr	r0, [r5]
         95884:	e5902000 	ldr	r2, [r0]
         95888:	e5940000 	ldr	r0, [r4]
         9588c:	e5900000 	ldr	r0, [r0]
         95890:	eb6cc2b0 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         95894:	e1a00007 	mov	r0, r7
         95898:	eb6cb647 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9589c:	e1a00006 	mov	r0, r6
         958a0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         958a4:	e2866001 	add	r6, r6, #1	; 0x1
         958a8:	e1560008 	cmp	r6, r8
         958ac:	3affffeb 	bcc	95860 <TCursorArray::Add(RefVar const &)+0x3c>
         958b0:	e1a01005 	mov	r1, r5
         958b4:	e1a00004 	mov	r0, r4
         958b8:	eb6cb21a 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         958bc:	e1a00007 	mov	r0, r7
         958c0:	eb6cb63d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         958c4:	e1a00008 	mov	r0, r8
         958c8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCursorArray::Remove(unsigned long)
 * Address: 000966bc
 */
TCursorArray::Remove(unsigned long) {
    /*
         966bc:	e1a0c00d 	mov	ip, sp
         966c0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         966c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         966c8:	e1a05000 	mov	r5, r0
         966cc:	e1a04001 	mov	r4, r1
         966d0:	e5900000 	ldr	r0, [r0]
         966d4:	e5900000 	ldr	r0, [r0]
         966d8:	eb6cbaf3 	bl	1bc52ac <$Length(long)>
         966dc:	e1a08000 	mov	r8, r0
         966e0:	e1540000 	cmp	r4, r0
         966e4:	291ba9f0 	ldmcsdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         966e8:	e3a00002 	mov	r0, #2	; 0x2
         966ec:	eb6cae96 	bl	1bc214c <$AllocateRefHandle(long)>
         966f0:	e1a07000 	mov	r7, r0
         966f4:	e2846001 	add	r6, r4, #1	; 0x1
         966f8:	e1560008 	cmp	r6, r8
         966fc:	2a000017 	bcs	96760 <TCursorArray::Remove(unsigned long)+0xa4>
         96700:	e1a01006 	mov	r1, r6
         96704:	e5950000 	ldr	r0, [r5]
         96708:	e5900000 	ldr	r0, [r0]
         9670c:	eb6cb6d0 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         96710:	e5870000 	str	r0, [r7]
         96714:	e3300002 	teq	r0, #2	; 0x2
         96718:	0a00000d 	beq	96754 <TCursorArray::Remove(unsigned long)+0x98>
         9671c:	e1a06004 	mov	r6, r4
         96720:	e3a00002 	mov	r0, #2	; 0x2
         96724:	eb6cae88 	bl	1bc214c <$AllocateRefHandle(long)>
         96728:	e1a04000 	mov	r4, r0
         9672c:	e5902000 	ldr	r2, [r0]
         96730:	e5950000 	ldr	r0, [r5]
         96734:	e5900000 	ldr	r0, [r0]
         96738:	e1a01006 	mov	r1, r6
         9673c:	eb6cbf05 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         96740:	e1a00004 	mov	r0, r4
         96744:	eb6cb29c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         96748:	e1a00007 	mov	r0, r7
         9674c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         96750:	ea6cb299 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
         96754:	e2866001 	add	r6, r6, #1	; 0x1
         96758:	e1560008 	cmp	r6, r8
         9675c:	3affffe7 	bcc	96700 <TCursorArray::Remove(unsigned long)+0x44>
         96760:	e1a01004 	mov	r1, r4
         96764:	e1a00005 	mov	r0, r5
         96768:	eb6cbeff 	bl	1bc636c <$SetLength(RefVar const &, long)>
         9676c:	eafffff5 	b	96748 <TCursorArray::Remove(unsigned long)+0x8c>
    */
}

/**
 * Symbol: TCursorArray::Get(unsigned long)
 * Address: 00096cb0
 */
TCursorArray::Get(unsigned long) {
    /*
         96cb0:	e1a0c00d 	mov	ip, sp
         96cb4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         96cb8:	e24cb004 	sub	fp, ip, #4	; 0x4
         96cbc:	e1a05000 	mov	r5, r0
         96cc0:	e1a04001 	mov	r4, r1
         96cc4:	e5900000 	ldr	r0, [r0]
         96cc8:	e5900000 	ldr	r0, [r0]
         96ccc:	eb6cb976 	bl	1bc52ac <$Length(long)>
         96cd0:	e1500004 	cmp	r0, r4
         96cd4:	93a00002 	movls	r0, #2	; 0x2
         96cd8:	991ba830 	ldmlsdb	fp, {r4, r5, fp, sp, pc}
         96cdc:	e1a01004 	mov	r1, r4
         96ce0:	e5950000 	ldr	r0, [r5]
         96ce4:	e5900000 	ldr	r0, [r0]
         96ce8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         96cec:	ea6cb558 	b	1bc4254 <$GetArraySlotRef__FlT1>
    */
}

