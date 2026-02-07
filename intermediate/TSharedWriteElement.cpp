#include "include/TSharedWriteElement.h"

/**
 * Symbol: TSharedWriteElement::Init(unsigned long, unsigned long, unsigned long)
 * Address: 002776d0
 */
TSharedWriteElement::Init(unsigned long, unsigned long, unsigned long) {
    /*
        2776d0:	e5a0200c 	str	r2, [r0, #12]!	; fField12
        2776d4:	e2800008 	add	r0, r0, #8	; 0x8
        2776d8:	e9a0000a 	stmib	r0!, {r1, r3}
        2776dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSharedWriteElement::Destroy(void)
 * Address: 002776e0
 */
TSharedWriteElement::Destroy(void) {
    /*
        2776e0:	ea601e1b 	b	1a7ef54 <TSharedWriteElement::$Reset(void)>
    */
}

/**
 * Symbol: TSharedWriteElement::StreamOut(unsigned long *, unsigned char *, unsigned long)
 * Address: 002776e4
 */
TSharedWriteElement::StreamOut(unsigned long *, unsigned char *, unsigned long) {
    /*
        2776e4:	e1a0c00d 	mov	ip, sp
        2776e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2776ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2776f0:	e1a0c002 	mov	ip, r2
        2776f4:	e1a0e003 	mov	lr, r3
        2776f8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2776fc:	e3a03000 	mov	r3, #0	; 0x0
        277700:	e5902018 	ldr	r2, [r0, #24]	; fField24
        277704:	e5cd3004 	strb	r3, [sp, #4]
        277708:	e2803020 	add	r3, r0, #32	; 0x20
        27770c:	e58d2000 	str	r2, [sp]
        277710:	e5b0201c 	ldr	r2, [r0, #28]!	; fField28
        277714:	e92d000c 	stmdb	sp!, {r2, r3}
        277718:	e1a0300e 	mov	r3, lr
        27771c:	e1a0200c 	mov	r2, ip
        277720:	e28d0008 	add	r0, sp, #8	; 0x8
        277724:	eb656444 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        277728:	e28dd008 	add	sp, sp, #8	; 0x8
        27772c:	e1a04000 	mov	r4, r0
        277730:	e1a0000d 	mov	r0, sp
        277734:	e3a01000 	mov	r1, #0	; 0x0
        277738:	eb655bf9 	bl	1bce724 <TUObject::$__dt(void)>
        27773c:	e1a00004 	mov	r0, r4
        277740:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSharedWriteElement::__ct(void)
 * Address: 002779ec
 */
TSharedWriteElement::TSharedWriteElement(void) {
    /*
        2779ec:	e1a0c00d 	mov	ip, sp
        2779f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2779f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2779f8:	e1b04000 	movs	r4, r0
        2779fc:	1a000003 	bne	277a10 <TSharedWriteElement::__ct(void)+0x24>
        277a00:	e3a00030 	mov	r0, #48	; 0x30
        277a04:	eb655b4b 	bl	1bce738 <$__nw(unsigned int)>
        277a08:	e1b04000 	movs	r4, r0
        277a0c:	0a00000a 	beq	277a3c <TSharedWriteElement::__ct(void)+0x50>
        277a10:	e1a00004 	mov	r0, r4
        277a14:	eb5fe7b2 	bl	1a718e4 <TWriteElement::$__ct(void)>
        277a18:	e3a00000 	mov	r0, #0	; 0x0
        277a1c:	e5840020 	str	r0, [r4, #32]
        277a20:	e584002c 	str	r0, [r4, #44]
        277a24:	e5840024 	str	r0, [r4, #36]
        277a28:	e5840028 	str	r0, [r4, #40]
        277a2c:	e59f0010 	ldr	r0, [pc, #10]	; 277a44 <TSharedWriteElement::__ct(void)+0x58>
        277a30:	e5840000 	str	r0, [r4]
        277a34:	e1a00004 	mov	r0, r4
        277a38:	eb601d45 	bl	1a7ef54 <TSharedWriteElement::$Reset(void)>
        277a3c:	e1a00004 	mov	r0, r4
        277a40:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        277a44:	0001ee8c 	andeq	lr, r1, ip, lsl #29
    */
}

/**
 * Symbol: TSharedWriteElement::__dt(void)
 * Address: 00277a48
 */
TSharedWriteElement::~TSharedWriteElement(void) {
    /*
        277a48:	e1a0c00d 	mov	ip, sp
        277a4c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        277a50:	e24cb004 	sub	fp, ip, #4	; 0x4
        277a54:	e1a04000 	mov	r4, r0
        277a58:	e1a05001 	mov	r5, r1
        277a5c:	e59f0020 	ldr	r0, [pc, #20]	; 277a84 <TSharedWriteElement::__dt(void)+0x3c>
        277a60:	e5840000 	str	r0, [r4]
        277a64:	e1a00004 	mov	r0, r4
        277a68:	e3a01000 	mov	r1, #0	; 0x0
        277a6c:	eb5fefcc 	bl	1a739a4 <TWriteElement::$__dt(void)>
        277a70:	e3150001 	tst	r5, #1	; 0x1
        277a74:	11a00004 	movne	r0, r4
        277a78:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        277a7c:	1a655717 	bne	1bcd6e0 <$__dl(void *)>
        277a80:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        277a84:	0001ee8c 	andeq	lr, r1, ip, lsl #29
    */
}

/**
 * Symbol: TSharedWriteElement::Reset(void)
 * Address: 00277a88
 */
TSharedWriteElement::Reset(void) {
    /*
        277a88:	e3a01000 	mov	r1, #0	; 0x0
        277a8c:	e5801018 	str	r1, [r0, #24]	; fField24
        277a90:	e580101c 	str	r1, [r0, #28]	; fField28
        277a94:	ea601d2c 	b	1a7ef4c <TWriteElement::$Reset(void)>
    */
}

