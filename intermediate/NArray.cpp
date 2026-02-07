#include "include/NArray.h"

/**
 * Symbol: NArray::__ct(void)
 * Address: 0012583c
 */
NArray::NArray(void) {
    /*
        12583c:	e1a0c00d 	mov	ip, sp
        125840:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        125844:	e24cb004 	sub	fp, ip, #4	; 0x4
        125848:	e3300000 	teq	r0, #0	; 0x0
        12584c:	1a000003 	bne	125860 <NArray::__ct(void)+0x24>
        125850:	e3a00020 	mov	r0, #32	; 0x20
        125854:	eb6aa3b7 	bl	1bce738 <$__nw(unsigned int)>
        125858:	e3300000 	teq	r0, #0	; 0x0
        12585c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        125860:	e59f102c 	ldr	r1, [pc, #2c]	; 125894 <NArray::__ct(void)+0x58>
        125864:	e5801000 	str	r1, [r0]
        125868:	e3a01004 	mov	r1, #4	; 0x4
        12586c:	e580100c 	str	r1, [r0, #12]	; fField12
        125870:	e5801010 	str	r1, [r0, #16]	; fField16
        125874:	e3a01000 	mov	r1, #0	; 0x0
        125878:	e5801004 	str	r1, [r0, #4]	; fField4
        12587c:	e5801008 	str	r1, [r0, #8]	; fField8
        125880:	e5801014 	str	r1, [r0, #20]	; fField20
        125884:	e5801018 	str	r1, [r0, #24]	; fField24
        125888:	e3a01001 	mov	r1, #1	; 0x1
        12588c:	e5c0101c 	strb	r1, [r0, #28]	; fField28
        125890:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        125894:	0001f8f0 	streqd	pc, [r1], -r0
    */
}

/**
 * Symbol: NArray::__dt(void)
 * Address: 00125898
 */
NArray::~NArray(void) {
    /*
        125898:	e1a0c00d 	mov	ip, sp
        12589c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1258a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1258a4:	e1a04000 	mov	r4, r0
        1258a8:	e1a05001 	mov	r5, r1
        1258ac:	e59f002c 	ldr	r0, [pc, #2c]	; 1258e0 <NArray::__dt(void)+0x48>
        1258b0:	e5840000 	str	r0, [r4]
        1258b4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1258b8:	e3300000 	teq	r0, #0	; 0x0
        1258bc:	1b6a3413 	blne	1bb2910 <NIterator::$DeleteArray(void)>
        1258c0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1258c4:	e3300000 	teq	r0, #0	; 0x0
        1258c8:	1b6ab422 	blne	1bd2958 <$free>
        1258cc:	e3150001 	tst	r5, #1	; 0x1
        1258d0:	11a00004 	movne	r0, r4
        1258d4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1258d8:	1a6a9f80 	bne	1bcd6e0 <$__dl(void *)>
        1258dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1258e0:	0001f8f0 	streqd	pc, [r1], -r0
    */
}

/**
 * Symbol: NArray::Contains( const(void const *))
 * Address: 001258e4
 */
NArray::Contains( const(void const *)) {
    /*
        1258e4:	e1a0c00d 	mov	ip, sp
        1258e8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1258ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1258f0:	e1a04000 	mov	r4, r0
        1258f4:	e1a06001 	mov	r6, r1
        1258f8:	e24dd008 	sub	sp, sp, #8	; 0x8
        1258fc:	e590100c 	ldr	r1, [r0, #12]	; fField12
        125900:	e1a0000d 	mov	r0, sp
        125904:	eb6a2ff8 	bl	1bb18ec <NBlockComparator::$__ct(long)>
        125908:	e3e08000 	mvn	r8, #0	; 0x0
        12590c:	e3a07000 	mov	r7, #0	; 0x0
        125910:	e5940004 	ldr	r0, [r4, #4]	; fField4
        125914:	e3500000 	cmp	r0, #0	; 0x0
        125918:	da00001c 	ble	125990 <NArray::Contains( const(void const *))+0xac>
        12591c:	e1a01007 	mov	r1, r7
        125920:	e1a00004 	mov	r0, r4
        125924:	e5942000 	ldr	r2, [r4]
        125928:	e1a0e00f 	mov	lr, pc
        12592c:	e282f004 	add	pc, r2, #4	; 0x4
        125930:	e1a01000 	mov	r1, r0
        125934:	e1a0000d 	mov	r0, sp
        125938:	e59d2000 	ldr	r2, [sp]
        12593c:	e1a0e00f 	mov	lr, pc
        125940:	e282f004 	add	pc, r2, #4	; 0x4
        125944:	e1a05000 	mov	r5, r0
        125948:	e1a01006 	mov	r1, r6
        12594c:	e1a0000d 	mov	r0, sp
        125950:	e59d2000 	ldr	r2, [sp]
        125954:	e1a0e00f 	mov	lr, pc
        125958:	e282f004 	add	pc, r2, #4	; 0x4
        12595c:	e1a01000 	mov	r1, r0
        125960:	e1a0000d 	mov	r0, sp
        125964:	e1a02005 	mov	r2, r5
        125968:	e59d3000 	ldr	r3, [sp]
        12596c:	e1a0e00f 	mov	lr, pc
        125970:	e283f008 	add	pc, r3, #8	; 0x8
        125974:	e3300000 	teq	r0, #0	; 0x0
        125978:	01a08007 	moveq	r8, r7
        12597c:	0a000003 	beq	125990 <NArray::Contains( const(void const *))+0xac>
        125980:	e2877001 	add	r7, r7, #1	; 0x1
        125984:	e5940004 	ldr	r0, [r4, #4]	; fField4
        125988:	e1500007 	cmp	r0, r7
        12598c:	caffffe2 	bgt	12591c <NArray::Contains( const(void const *))+0x38>
        125990:	e1a0000d 	mov	r0, sp
        125994:	e3a01000 	mov	r1, #0	; 0x0
        125998:	e1a0e00f 	mov	lr, pc
        12599c:	e59df000 	ldr	pc, [sp]
        1259a0:	e1a00008 	mov	r0, r8
        1259a4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: NArray::Where( const(void const *))
 * Address: 001259a8
 */
NArray::Where( const(void const *)) {
    /*
        1259a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1259ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NArray::Init(long, long, long, unsigned char)
 * Address: 001259b0
 */
NArray::Init(long, long, long, unsigned char) {
    /*
        1259b0:	e92d4000 	stmdb	sp!, {lr}
        1259b4:	e59dc004 	ldr	ip, [sp, #4]	; fField4
        1259b8:	e20cc0ff 	and	ip, ip, #255	; 0xff
        1259bc:	e590e00c 	ldr	lr, [r0, #12]	; fField12
        1259c0:	e35e0000 	cmp	lr, #0	; 0x0
        1259c4:	c590e010 	ldrgt	lr, [r0, #16]	; fField16
        1259c8:	c35e0000 	cmpgt	lr, #0	; 0x0
        1259cc:	c3530000 	cmpgt	r3, #0	; 0x0
        1259d0:	d3a00f52 	movle	r0, #328	; 0x148
        1259d4:	d2400b0e 	suble	r0, r0, #14336	; 0x3800
        1259d8:	d8bd8000 	ldmleia	sp!, {pc}
        1259dc:	e280000c 	add	r0, r0, #12	; 0xc
        1259e0:	e8800006 	stmia	r0, {r1, r2}
        1259e4:	e240000c 	sub	r0, r0, #12	; 0xc
        1259e8:	e5c0c01c 	strb	ip, [r0, #28]	; fField28
        1259ec:	e1a01003 	mov	r1, r3
        1259f0:	e8bd4000 	ldmia	sp!, {lr}
        1259f4:	ea6a2fb9 	b	1bb18e0 <NArray::$SetPhysicalCount(long)>
    */
}

/**
 * Symbol: NArray::At( const(long))
 * Address: 001259f8
 */
NArray::At( const(long)) {
    /*
        1259f8:	e5902004 	ldr	r2, [r0, #4]	; fField4
        1259fc:	e3520000 	cmp	r2, #0	; 0x0
        125a00:	c3710001 	cmngt	r1, #1	; 0x1
        125a04:	c1520001 	cmpgt	r2, r1
        125a08:	d3a00000 	movle	r0, #0	; 0x0
        125a0c:	d1a0f00e 	movle	pc, lr
        125a10:	e5902014 	ldr	r2, [r0, #20]	; fField20
        125a14:	e590000c 	ldr	r0, [r0, #12]	; fField12
        125a18:	e0202091 	mla	r0, r1, r0, r2
        125a1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: NArray::InsertElements(long, long, void const *)
 * Address: 00125a20
 */
NArray::InsertElements(long, long, void const *) {
    /*
        125a20:	e3320000 	teq	r2, #0	; 0x0
        125a24:	03a00000 	moveq	r0, #0	; 0x0
        125a28:	01a0f00e 	moveq	pc, lr
        125a2c:	e3510000 	cmp	r1, #0	; 0x0
        125a30:	a3520000 	cmpge	r2, #0	; 0x0
        125a34:	b3a00f52 	movlt	r0, #328	; 0x148
        125a38:	b2400b0e 	sublt	r0, r0, #14336	; 0x3800
        125a3c:	b1a0f00e 	movlt	pc, lr
        125a40:	e1a0c00d 	mov	ip, sp
        125a44:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        125a48:	e24cb004 	sub	fp, ip, #4	; 0x4
        125a4c:	e1a04000 	mov	r4, r0
        125a50:	e1a06001 	mov	r6, r1
        125a54:	e1a05002 	mov	r5, r2
        125a58:	e1a07003 	mov	r7, r3
        125a5c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        125a60:	e1500001 	cmp	r0, r1
        125a64:	b1a06000 	movlt	r6, r0
        125a68:	e0801005 	add	r1, r0, r5
        125a6c:	e1a00004 	mov	r0, r4
        125a70:	eb6a2f9a 	bl	1bb18e0 <NArray::$SetPhysicalCount(long)>
        125a74:	e1b09000 	movs	r9, r0
        125a78:	1a000019 	bne	125ae4 <NArray::InsertElements(long, long, void const *)+0xc4>
        125a7c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        125a80:	e5941014 	ldr	r1, [r4, #20]	; fField20
        125a84:	e0281096 	mla	r8, r6, r0, r1
        125a88:	e0862005 	add	r2, r6, r5
        125a8c:	e02c1092 	mla	ip, r2, r0, r1
        125a90:	e5942004 	ldr	r2, [r4, #4]	; fField4
        125a94:	e0201092 	mla	r0, r2, r0, r1
        125a98:	e1520006 	cmp	r2, r6
        125a9c:	da000003 	ble	125ab0 <NArray::InsertElements(long, long, void const *)+0x90>
        125aa0:	e0402008 	sub	r2, r0, r8
        125aa4:	e1a01008 	mov	r1, r8
        125aa8:	e1a0000c 	mov	r0, ip
        125aac:	eb6a3be8 	bl	1bb4a54 <$memmove>
        125ab0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        125ab4:	e0020095 	mul	r2, r5, r0
        125ab8:	e1a01007 	mov	r1, r7
        125abc:	e1a00008 	mov	r0, r8
        125ac0:	eb6a3be2 	bl	1bb4a50 <$memcpy>
        125ac4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        125ac8:	e0800005 	add	r0, r0, r5
        125acc:	e5840004 	str	r0, [r4, #4]	; fField4
        125ad0:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        125ad4:	e3300000 	teq	r0, #0	; 0x0
        125ad8:	11a02005 	movne	r2, r5
        125adc:	11a01006 	movne	r1, r6
        125ae0:	1b6a3389 	blne	1bb290c <NIterator::$InsertElements(long, long)>
        125ae4:	e1a00009 	mov	r0, r9
        125ae8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: NArray::RemoveElements(long, long)
 * Address: 00125aec
 */
NArray::RemoveElements(long, long) {
    /*
        125aec:	e1a0c00d 	mov	ip, sp
        125af0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        125af4:	e24cb004 	sub	fp, ip, #4	; 0x4
        125af8:	e1a04000 	mov	r4, r0
        125afc:	e1a06001 	mov	r6, r1
        125b00:	e1b05002 	movs	r5, r2
        125b04:	03a00000 	moveq	r0, #0	; 0x0
        125b08:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        125b0c:	e3560000 	cmp	r6, #0	; 0x0
        125b10:	a3550000 	cmpge	r5, #0	; 0x0
        125b14:	ba000005 	blt	125b30 <NArray::RemoveElements(long, long)+0x44>
        125b18:	e5942004 	ldr	r2, [r4, #4]	; fField4
        125b1c:	e1520006 	cmp	r2, r6
        125b20:	da000002 	ble	125b30 <NArray::RemoveElements(long, long)+0x44>
        125b24:	e0863005 	add	r3, r6, r5
        125b28:	e1530002 	cmp	r3, r2
        125b2c:	da000002 	ble	125b3c <NArray::RemoveElements(long, long)+0x50>
        125b30:	e3a00f52 	mov	r0, #328	; 0x148
        125b34:	e2400b0e 	sub	r0, r0, #14336	; 0x3800
        125b38:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        125b3c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        125b40:	e5941014 	ldr	r1, [r4, #20]	; fField20
        125b44:	e02c1096 	mla	ip, r6, r0, r1
        125b48:	e0231390 	mla	r3, r0, r3, r1
        125b4c:	e0201092 	mla	r0, r2, r0, r1
        125b50:	e1530000 	cmp	r3, r0
        125b54:	2a000003 	bcs	125b68 <NArray::RemoveElements(long, long)+0x7c>
        125b58:	e0402003 	sub	r2, r0, r3
        125b5c:	e1a01003 	mov	r1, r3
        125b60:	e1a0000c 	mov	r0, ip
        125b64:	eb6a3bba 	bl	1bb4a54 <$memmove>
        125b68:	e5940004 	ldr	r0, [r4, #4]	; fField4
        125b6c:	e0401005 	sub	r1, r0, r5
        125b70:	e1a00004 	mov	r0, r4
        125b74:	eb6a2f58 	bl	1bb18dc <NArray::$SetCount(long)>
        125b78:	e1b07000 	movs	r7, r0
        125b7c:	1a000004 	bne	125b94 <NArray::RemoveElements(long, long)+0xa8>
        125b80:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        125b84:	e3300000 	teq	r0, #0	; 0x0
        125b88:	11a02005 	movne	r2, r5
        125b8c:	11a01006 	movne	r1, r6
        125b90:	1b6a335c 	blne	1bb2908 <NIterator::$RemoveElements(long, long)>
        125b94:	e1a00007 	mov	r0, r7
        125b98:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: NArray::SetCount(long)
 * Address: 00125b9c
 */
NArray::SetCount(long) {
    /*
        125b9c:	e1a0c00d 	mov	ip, sp
        125ba0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        125ba4:	e24cb004 	sub	fp, ip, #4	; 0x4
        125ba8:	e1a05000 	mov	r5, r0
        125bac:	e1a04001 	mov	r4, r1
        125bb0:	e3a00000 	mov	r0, #0	; 0x0
        125bb4:	e5951004 	ldr	r1, [r5, #4]	; fField4
        125bb8:	e1310004 	teq	r1, r4
        125bbc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        125bc0:	e1a01004 	mov	r1, r4
        125bc4:	e1a00005 	mov	r0, r5
        125bc8:	eb6a2f44 	bl	1bb18e0 <NArray::$SetPhysicalCount(long)>
        125bcc:	e3300000 	teq	r0, #0	; 0x0
        125bd0:	05a54004 	streq	r4, [r5, #4]!	; fField4
        125bd4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: NArray::SetPhysicalCount(long)
 * Address: 00125bd8
 */
NArray::SetPhysicalCount(long) {
    /*
        125bd8:	e1a0c00d 	mov	ip, sp
        125bdc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        125be0:	e24cb004 	sub	fp, ip, #4	; 0x4
        125be4:	e1a04000 	mov	r4, r0
        125be8:	e3a07000 	mov	r7, #0	; 0x0
        125bec:	e3310000 	teq	r1, #0	; 0x0
        125bf0:	1a00000a 	bne	125c20 <NArray::SetPhysicalCount(long)+0x48>
        125bf4:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
        125bf8:	e3300000 	teq	r0, #0	; 0x0
        125bfc:	0a000007 	beq	125c20 <NArray::SetPhysicalCount(long)+0x48>
        125c00:	e5940014 	ldr	r0, [r4, #20]	; fField20
        125c04:	eb6ab353 	bl	1bd2958 <$free>
        125c08:	eb6af144 	bl	1be2120 <$MemError>
        125c0c:	e1a07000 	mov	r7, r0
        125c10:	e3a00000 	mov	r0, #0	; 0x0
        125c14:	e5840014 	str	r0, [r4, #20]	; fField20
        125c18:	e5a40008 	str	r0, [r4, #8]!	; fField8
        125c1c:	ea000021 	b	125ca8 <NArray::SetPhysicalCount(long)+0xd0>
        125c20:	e5946008 	ldr	r6, [r4, #8]	; fField8
        125c24:	e1560001 	cmp	r6, r1
        125c28:	ba000006 	blt	125c48 <NArray::SetPhysicalCount(long)+0x70>
        125c2c:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
        125c30:	e3300000 	teq	r0, #0	; 0x0
        125c34:	0a00001b 	beq	125ca8 <NArray::SetPhysicalCount(long)+0xd0>
        125c38:	e0460001 	sub	r0, r6, r1
        125c3c:	e5942010 	ldr	r2, [r4, #16]	; fField16
        125c40:	e1500002 	cmp	r0, r2
        125c44:	ba000017 	blt	125ca8 <NArray::SetPhysicalCount(long)+0xd0>
        125c48:	e5940010 	ldr	r0, [r4, #16]	; fField16
        125c4c:	e0801001 	add	r1, r0, r1
        125c50:	e2411001 	sub	r1, r1, #1	; 0x1
        125c54:	e1a05001 	mov	r5, r1
        125c58:	eb6a3338 	bl	1bb2940 <$__rt_sdiv>
        125c5c:	e0455001 	sub	r5, r5, r1
        125c60:	e1560005 	cmp	r6, r5
        125c64:	ba000004 	blt	125c7c <NArray::SetPhysicalCount(long)+0xa4>
        125c68:	e5d4001c 	ldrb	r0, [r4, #28]	; fField28
        125c6c:	e3300000 	teq	r0, #0	; 0x0
        125c70:	0a00000c 	beq	125ca8 <NArray::SetPhysicalCount(long)+0xd0>
        125c74:	e1560005 	cmp	r6, r5
        125c78:	da00000a 	ble	125ca8 <NArray::SetPhysicalCount(long)+0xd0>
        125c7c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        125c80:	e0010095 	mul	r1, r5, r0
        125c84:	e5940014 	ldr	r0, [r4, #20]	; fField20
        125c88:	eb6b3b64 	bl	1bf4a20 <$realloc>
        125c8c:	e3300000 	teq	r0, #0	; 0x0
        125c90:	1a000002 	bne	125ca0 <NArray::SetPhysicalCount(long)+0xc8>
        125c94:	eb6af121 	bl	1be2120 <$MemError>
        125c98:	e1a07000 	mov	r7, r0
        125c9c:	ea000001 	b	125ca8 <NArray::SetPhysicalCount(long)+0xd0>
        125ca0:	e5a45008 	str	r5, [r4, #8]!	; fField8
        125ca4:	e584000c 	str	r0, [r4, #12]	; fField12
        125ca8:	e1a00007 	mov	r0, r7
        125cac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

