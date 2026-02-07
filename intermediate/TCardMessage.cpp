#include "include/TCardMessage.h"

/**
 * Symbol: TCardMessage::__ct(void)
 * Address: 0004ed10
 */
TCardMessage::TCardMessage(void) {
    /*
         4ed10:	e1a0c00d 	mov	ip, sp
         4ed14:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4ed18:	e24cb004 	sub	fp, ip, #4	; 0x4
         4ed1c:	e1b04000 	movs	r4, r0
         4ed20:	1a000003 	bne	4ed34 <TCardMessage::__ct(void)+0x24>
         4ed24:	e3a000b8 	mov	r0, #184	; 0xb8
         4ed28:	eb6dfe82 	bl	1bce738 <$__nw(unsigned int)>
         4ed2c:	e1b04000 	movs	r4, r0
         4ed30:	0a00000c 	beq	4ed68 <TCardMessage::__ct(void)+0x58>
         4ed34:	e1a00004 	mov	r0, r4
         4ed38:	eb6e553e 	bl	1be4238 <TAEvent::$__ct(void)>
         4ed3c:	e59f002c 	ldr	r0, [pc, #2c]	; 4ed70 <TCardMessage::__ct(void)+0x60>
         4ed40:	e5840000 	str	r0, [r4]
         4ed44:	e59f0028 	ldr	r0, [pc, #28]	; 4ed74 <TCardMessage::__ct(void)+0x64>	; fField28
         4ed48:	e5840004 	str	r0, [r4, #4]
         4ed4c:	e3a00000 	mov	r0, #0	; 0x0
         4ed50:	e5c4002e 	strb	r0, [r4, #46]
         4ed54:	e5c4002f 	strb	r0, [r4, #47]
         4ed58:	e5840030 	str	r0, [r4, #48]
         4ed5c:	e5840034 	str	r0, [r4, #52]
         4ed60:	e1a00004 	mov	r0, r4
         4ed64:	eb6e06a8 	bl	1bd080c <TCardMessage::$Clear(void)>
         4ed68:	e1a00004 	mov	r0, r4
         4ed6c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         4ed70:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         4ed74:	63647376 	cmnvs	r4, #-671088639	; 0xd8000001
    */
}

/**
 * Symbol: TCardMessage::__dt(void)
 * Address: 0004ed78
 */
TCardMessage::~TCardMessage(void) {
    /*
         4ed78:	e3110001 	tst	r1, #1	; 0x1
         4ed7c:	1a6dfa57 	bne	1bcd6e0 <$__dl(void *)>
         4ed80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardMessage::Clear(void)
 * Address: 0004ed84
 */
TCardMessage::Clear(void) {
    /*
         4ed84:	e3a01000 	mov	r1, #0	; 0x0
         4ed88:	e5801008 	str	r1, [r0, #8]	; fField8
         4ed8c:	e5801010 	str	r1, [r0, #16]	; fField16
         4ed90:	e580100c 	str	r1, [r0, #12]	; fField12
         4ed94:	e580101c 	str	r1, [r0, #28]	; fField28
         4ed98:	e5c0102c 	strb	r1, [r0, #44]	; fField44
         4ed9c:	e3a02001 	mov	r2, #1	; 0x1
         4eda0:	e5c0202d 	strb	r2, [r0, #45]	; fField45
         4eda4:	e5801014 	str	r1, [r0, #20]	; fField20
         4eda8:	e5801018 	str	r1, [r0, #24]	; fField24
         4edac:	e5801020 	str	r1, [r0, #32]	; fField32
         4edb0:	e5801024 	str	r1, [r0, #36]	; fField36
         4edb4:	e5a01028 	str	r1, [r0, #40]!	; fField40
         4edb8:	e2800010 	add	r0, r0, #16	; 0x10
         4edbc:	e3a01080 	mov	r1, #128	; 0x80
         4edc0:	ea6e4495 	b	1be001c <$ZeroBytes>
    */
}

/**
 * Symbol: TCardMessage::MessageStuff(unsigned long, unsigned long, unsigned long)
 * Address: 0004edc4
 */
TCardMessage::MessageStuff(unsigned long, unsigned long, unsigned long) {
    /*
         4edc4:	e1a0c00d 	mov	ip, sp
         4edc8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         4edcc:	e24cb004 	sub	fp, ip, #4	; 0x4
         4edd0:	e1a04000 	mov	r4, r0
         4edd4:	e1a07001 	mov	r7, r1
         4edd8:	e1a06002 	mov	r6, r2
         4eddc:	e1a05003 	mov	r5, r3
         4ede0:	eb6e0689 	bl	1bd080c <TCardMessage::$Clear(void)>
         4ede4:	e5a47008 	str	r7, [r4, #8]!	; fField8
         4ede8:	e9840060 	stmib	r4, {r5, r6}
         4edec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         4edf0:	4e657774 	mcrmi	7, 3, r7, cr5, cr4, {3}
         4edf4:	4f530000 	swimi	0x00530000
         4edf8:	41726d36 	cmnmi	r2, r6, lsr sp
         4edfc:	31300000 	teqcc	r0, r0
         4ee00:	00000000 	andeq	r0, r0, r0
    */
}

