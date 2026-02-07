#include "include/TIASAttribute.h"

/**
 * Symbol: TIASAttribute::__ct(void)
 * Address: 000f1a78
 */
TIASAttribute::TIASAttribute(void) {
    /*
         f1a78:	e1a0c00d 	mov	ip, sp
         f1a7c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f1a80:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1a84:	e1b04000 	movs	r4, r0
         f1a88:	1a000003 	bne	f1a9c <TIASAttribute::__ct(void)+0x24>
         f1a8c:	e3a0001c 	mov	r0, #28	; 0x1c
         f1a90:	eb6b7328 	bl	1bce738 <$__nw(unsigned int)>
         f1a94:	e1b04000 	movs	r4, r0
         f1a98:	0a000001 	beq	f1aa4 <TIASAttribute::__ct(void)+0x2c>
         f1a9c:	e1a00004 	mov	r0, r4
         f1aa0:	eb6503a9 	bl	1a3294c <TIASNamedList::$__ct(void)>
         f1aa4:	e1a00004 	mov	r0, r4
         f1aa8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIASAttribute::__dt(void)
 * Address: 000f1aac
 */
TIASAttribute::~TIASAttribute(void) {
    /*
         f1aac:	e1a0c00d 	mov	ip, sp
         f1ab0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f1ab4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1ab8:	e1a04000 	mov	r4, r0
         f1abc:	e1a05001 	mov	r5, r1
         f1ac0:	e3a06000 	mov	r6, #0	; 0x0
         f1ac4:	e5900000 	ldr	r0, [r0]
         f1ac8:	e3500000 	cmp	r0, #0	; 0x0
         f1acc:	da000009 	ble	f1af8 <TIASAttribute::__dt(void)+0x4c>
         f1ad0:	e1a01006 	mov	r1, r6
         f1ad4:	e1a00004 	mov	r0, r4
         f1ad8:	eb6bd219 	bl	1be6344 <CList::$At(long)>
         f1adc:	e3300000 	teq	r0, #0	; 0x0
         f1ae0:	13a01001 	movne	r1, #1	; 0x1
         f1ae4:	1b65039d 	blne	1a32960 <TIASElement::$__dt(void)>
         f1ae8:	e2866001 	add	r6, r6, #1	; 0x1
         f1aec:	e5940000 	ldr	r0, [r4]
         f1af0:	e1500006 	cmp	r0, r6
         f1af4:	cafffff5 	bgt	f1ad0 <TIASAttribute::__dt(void)+0x24>
         f1af8:	e1a00004 	mov	r0, r4
         f1afc:	e3a01000 	mov	r1, #0	; 0x0
         f1b00:	eb650392 	bl	1a32950 <TIASNamedList::$__dt(void)>
         f1b04:	e3150001 	tst	r5, #1	; 0x1
         f1b08:	11a00004 	movne	r0, r4
         f1b0c:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         f1b10:	1a6b6ef2 	bne	1bcd6e0 <$__dl(void *)>
         f1b14:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIASAttribute::Insert(TIASElement *)
 * Address: 000f1b18
 */
TIASAttribute::Insert(TIASElement *) {
    /*
         f1b18:	e1a02001 	mov	r2, r1
         f1b1c:	e5901000 	ldr	r1, [r0]
         f1b20:	ea6bde71 	b	1be94ec <CList::$InsertAt(long, void *)>
    */
}

/**
 * Symbol: TIASAttribute::AddInfoToBuffer(CBuffer *)
 * Address: 000f1b24
 */
TIASAttribute::AddInfoToBuffer(CBuffer *) {
    /*
         f1b24:	e1a0c00d 	mov	ip, sp
         f1b28:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         f1b2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1b30:	e1a04000 	mov	r4, r0
         f1b34:	e1a05001 	mov	r5, r1
         f1b38:	e1a02001 	mov	r2, r1
         f1b3c:	e5906000 	ldr	r6, [r0]
         f1b40:	e3a000ff 	mov	r0, #255	; 0xff
         f1b44:	e0001426 	and	r1, r0, r6, lsr #8
         f1b48:	e1a00002 	mov	r0, r2
         f1b4c:	e5922000 	ldr	r2, [r2]
         f1b50:	e1a0e00f 	mov	lr, pc
         f1b54:	e282f01c 	add	pc, r2, #28	; 0x1c
         f1b58:	e20610ff 	and	r1, r6, #255	; 0xff
         f1b5c:	e1a00005 	mov	r0, r5
         f1b60:	e5952000 	ldr	r2, [r5]
         f1b64:	e1a0e00f 	mov	lr, pc
         f1b68:	e282f01c 	add	pc, r2, #28	; 0x1c
         f1b6c:	e3a06000 	mov	r6, #0	; 0x0
         f1b70:	e5940000 	ldr	r0, [r4]
         f1b74:	e3500000 	cmp	r0, #0	; 0x0
         f1b78:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
         f1b7c:	e1a01006 	mov	r1, r6
         f1b80:	e1a00004 	mov	r0, r4
         f1b84:	eb6bd1ee 	bl	1be6344 <CList::$At(long)>
         f1b88:	e1a01005 	mov	r1, r5
         f1b8c:	eb650379 	bl	1a32978 <TIASElement::$AddInfoToBuffer(CBuffer *)>
         f1b90:	e2866001 	add	r6, r6, #1	; 0x1
         f1b94:	e5940000 	ldr	r0, [r4]
         f1b98:	e1500006 	cmp	r0, r6
         f1b9c:	cafffff6 	bgt	f1b7c <TIASAttribute::AddInfoToBuffer(CBuffer *)+0x58>
         f1ba0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIASAttribute::ExtractInfoFromBuffer(CBuffer *)
 * Address: 000f1bfc
 */
TIASAttribute::ExtractInfoFromBuffer(CBuffer *) {
    /*
         f1bfc:	e1a0c00d 	mov	ip, sp
         f1c00:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         f1c04:	e24cb004 	sub	fp, ip, #4	; 0x4
         f1c08:	e1a05000 	mov	r5, r0
         f1c0c:	e1a04001 	mov	r4, r1
         f1c10:	e24dd004 	sub	sp, sp, #4	; 0x4
         f1c14:	e3a0608d 	mov	r6, #141	; 0x8d
         f1c18:	e2466c97 	sub	r6, r6, #38656	; 0x9700
         f1c1c:	e1a03001 	mov	r3, r1
         f1c20:	e1a0100d 	mov	r1, sp
         f1c24:	e1a00003 	mov	r0, r3
         f1c28:	e3a02002 	mov	r2, #2	; 0x2
         f1c2c:	e5933000 	ldr	r3, [r3]
         f1c30:	e1a0e00f 	mov	lr, pc
         f1c34:	e283f014 	add	pc, r3, #20	; 0x14
         f1c38:	e3300002 	teq	r0, #2	; 0x2
         f1c3c:	1a00001c 	bne	f1cb4 <TIASAttribute::ExtractInfoFromBuffer(CBuffer *)+0xb8>
         f1c40:	e5dd1001 	ldrb	r1, [sp, #1]
         f1c44:	e5dd0000 	ldrb	r0, [sp]
         f1c48:	e0818400 	add	r8, r1, r0, lsl #8
         f1c4c:	e3a09000 	mov	r9, #0	; 0x0
         f1c50:	e3580000 	cmp	r8, #0	; 0x0
         f1c54:	9a000016 	bls	f1cb4 <TIASAttribute::ExtractInfoFromBuffer(CBuffer *)+0xb8>
         f1c58:	e3a00000 	mov	r0, #0	; 0x0
         f1c5c:	eb65033e 	bl	1a3295c <TIASElement::$__ct(void)>
         f1c60:	e1b07000 	movs	r7, r0
         f1c64:	03a060a8 	moveq	r6, #168	; 0xa8
         f1c68:	02466b07 	subeq	r6, r6, #7168	; 0x1c00
         f1c6c:	0a000010 	beq	f1cb4 <TIASAttribute::ExtractInfoFromBuffer(CBuffer *)+0xb8>
         f1c70:	e1a01007 	mov	r1, r7
         f1c74:	e1a00005 	mov	r0, r5
         f1c78:	eb65032f 	bl	1a3293c <TIASAttribute::$Insert(TIASElement *)>
         f1c7c:	e1b06000 	movs	r6, r0
         f1c80:	0a000003 	beq	f1c94 <TIASAttribute::ExtractInfoFromBuffer(CBuffer *)+0x98>
         f1c84:	e1a00007 	mov	r0, r7
         f1c88:	e3a01001 	mov	r1, #1	; 0x1
         f1c8c:	eb650333 	bl	1a32960 <TIASElement::$__dt(void)>
         f1c90:	ea000007 	b	f1cb4 <TIASAttribute::ExtractInfoFromBuffer(CBuffer *)+0xb8>
         f1c94:	e1a01004 	mov	r1, r4
         f1c98:	e1a00007 	mov	r0, r7
         f1c9c:	eb650336 	bl	1a3297c <TIASElement::$ExtractInfoFromBuffer(CBuffer *)>
         f1ca0:	e1b06000 	movs	r6, r0
         f1ca4:	1a000002 	bne	f1cb4 <TIASAttribute::ExtractInfoFromBuffer(CBuffer *)+0xb8>
         f1ca8:	e2899001 	add	r9, r9, #1	; 0x1
         f1cac:	e1590008 	cmp	r9, r8
         f1cb0:	3affffe8 	bcc	f1c58 <TIASAttribute::ExtractInfoFromBuffer(CBuffer *)+0x5c>
         f1cb4:	e1a00006 	mov	r0, r6
         f1cb8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

