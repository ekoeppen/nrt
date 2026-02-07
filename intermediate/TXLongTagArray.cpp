#include "include/TXLongTagArray.h"

/**
 * Symbol: TXLongTagArray::__ct(unsigned char, int)
 * Address: 00230944
 */
TXLongTagArray::TXLongTagArray(unsigned char, int) {
    /*
        230944:	e1a0c00d 	mov	ip, sp
        230948:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23094c:	e24cb004 	sub	fp, ip, #4	; 0x4
        230950:	e1b04000 	movs	r4, r0
        230954:	e1a05002 	mov	r5, r2
        230958:	e20160ff 	and	r6, r1, #255	; 0xff
        23095c:	1a000003 	bne	230970 <TXLongTagArray::__ct(unsigned char, int)+0x2c>
        230960:	e3a00018 	mov	r0, #24	; 0x18
        230964:	eb667773 	bl	1bce738 <$__nw(unsigned int)>
        230968:	e1b04000 	movs	r4, r0
        23096c:	0a000005 	beq	230988 <TXLongTagArray::__ct(unsigned char, int)+0x44>
        230970:	e1a02005 	mov	r2, r5
        230974:	e1a01006 	mov	r1, r6
        230978:	e1a00004 	mov	r0, r4
        23097c:	eb655251 	bl	1b852c8 <TXArray::$__ct(unsigned char, int)>
        230980:	e59f0008 	ldr	r0, [pc, #8]	; 230990 <TXLongTagArray::__ct(unsigned char, int)+0x4c>
        230984:	e5840000 	str	r0, [r4]
        230988:	e1a00004 	mov	r0, r4
        23098c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        230990:	0001de2c 	andeq	sp, r1, ip, lsr #28
    */
}

/**
 * Symbol: TXLongTagArray::__dt(void)
 * Address: 00230994
 */
TXLongTagArray::~TXLongTagArray(void) {
    /*
        230994:	e1a0c00d 	mov	ip, sp
        230998:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23099c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2309a0:	e1a04000 	mov	r4, r0
        2309a4:	e1a05001 	mov	r5, r1
        2309a8:	e59f0020 	ldr	r0, [pc, #20]	; 2309d0 <TXLongTagArray::__dt(void)+0x3c>
        2309ac:	e5840000 	str	r0, [r4]
        2309b0:	e1a00004 	mov	r0, r4
        2309b4:	e3a01000 	mov	r1, #0	; 0x0
        2309b8:	eb655243 	bl	1b852cc <TXArray::$__dt(void)>
        2309bc:	e3150001 	tst	r5, #1	; 0x1
        2309c0:	11a00004 	movne	r0, r4
        2309c4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2309c8:	1a667344 	bne	1bcd6e0 <$__dl(void *)>
        2309cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2309d0:	0001de2c 	andeq	sp, r1, ip, lsr #28
    */
}

/**
 * Symbol: TXLongTagArray::Search( const(long, long *))
 * Address: 002309d4
 */
TXLongTagArray::Search( const(long, long *)) {
    /*
        2309d4:	e1a0c00d 	mov	ip, sp
        2309d8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2309dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2309e0:	e1a05000 	mov	r5, r0
        2309e4:	e1a06001 	mov	r6, r1
        2309e8:	e1a04002 	mov	r4, r2
        2309ec:	e3a09000 	mov	r9, #0	; 0x0
        2309f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2309f4:	e2508001 	subs	r8, r0, #1	; 0x1
        2309f8:	e3a07000 	mov	r7, #0	; 0x0
        2309fc:	43e00000 	mvnmi	r0, #0	; 0x0
        230a00:	45840000 	strmi	r0, [r4]
        230a04:	4a000006 	bmi	230a24 <TXLongTagArray::Search( const(long, long *))+0x50>
        230a08:	e1a00005 	mov	r0, r5
        230a0c:	e3a01000 	mov	r1, #0	; 0x0
        230a10:	eb65522e 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        230a14:	e5900000 	ldr	r0, [r0]
        230a18:	e5840000 	str	r0, [r4]
        230a1c:	e1560000 	cmp	r6, r0
        230a20:	ca000001 	bgt	230a2c <TXLongTagArray::Search( const(long, long *))+0x58>
        230a24:	e1a00007 	mov	r0, r7
        230a28:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        230a2c:	e1a00005 	mov	r0, r5
        230a30:	eb655227 	bl	1b852d4 <TXArray::$GetLastElementPtr( const(void))>
        230a34:	e5900000 	ldr	r0, [r0]
        230a38:	e5840000 	str	r0, [r4]
        230a3c:	e1560000 	cmp	r6, r0
        230a40:	c5b50004 	ldrgt	r0, [r5, #4]!	; fField4
        230a44:	c91baff0 	ldmgtdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        230a48:	e0890008 	add	r0, r9, r8
        230a4c:	e1a010c0 	mov	r1, r0, asr #1
        230a50:	e1a07001 	mov	r7, r1
        230a54:	e1a00005 	mov	r0, r5
        230a58:	eb65521c 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        230a5c:	e5900000 	ldr	r0, [r0]
        230a60:	e0401006 	sub	r1, r0, r6
        230a64:	e3510000 	cmp	r1, #0	; 0x0
        230a68:	01a00007 	moveq	r0, r7
        230a6c:	05846000 	streq	r6, [r4]
        230a70:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        230a74:	d2879001 	addle	r9, r7, #1	; 0x1
        230a78:	c2478001 	subgt	r8, r7, #1	; 0x1
        230a7c:	c1a0a007 	movgt	sl, r7
        230a80:	c5840000 	strgt	r0, [r4]
        230a84:	e1580009 	cmp	r8, r9
        230a88:	aaffffee 	bge	230a48 <TXLongTagArray::Search( const(long, long *))+0x74>
        230a8c:	e1a0000a 	mov	r0, sl
        230a90:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXLongTagArray::SearchBigger( const(long))
 * Address: 00230a94
 */
TXLongTagArray::SearchBigger( const(long)) {
    /*
        230a94:	e1a0c00d 	mov	ip, sp
        230a98:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        230a9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        230aa0:	e1a05000 	mov	r5, r0
        230aa4:	e1a04001 	mov	r4, r1
        230aa8:	e24dd004 	sub	sp, sp, #4	; 0x4
        230aac:	e1a0200d 	mov	r2, sp
        230ab0:	eb655211 	bl	1b852fc <TXLongTagArray::$Search( const(long, long *))>
        230ab4:	e5b51004 	ldr	r1, [r5, #4]!	; fField4
        230ab8:	e2411001 	sub	r1, r1, #1	; 0x1
        230abc:	e1500001 	cmp	r0, r1
        230ac0:	c1a00001 	movgt	r0, r1
        230ac4:	ca000004 	bgt	230adc <TXLongTagArray::SearchBigger( const(long))+0x48>
        230ac8:	e59d2000 	ldr	r2, [sp]
        230acc:	e1520004 	cmp	r2, r4
        230ad0:	ca000001 	bgt	230adc <TXLongTagArray::SearchBigger( const(long))+0x48>
        230ad4:	e1500001 	cmp	r0, r1
        230ad8:	b2800001 	addlt	r0, r0, #1	; 0x1
        230adc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXLongTagArray::AddToElements(long, long, long)
 * Address: 00230b2c
 */
TXLongTagArray::AddToElements(long, long, long) {
    /*
        230b2c:	e1a0c00d 	mov	ip, sp
        230b30:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        230b34:	e24cb004 	sub	fp, ip, #4	; 0x4
        230b38:	e1a06000 	mov	r6, r0
        230b3c:	e1b05002 	movs	r5, r2
        230b40:	e1a04003 	mov	r4, r3
        230b44:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        230b48:	e3540000 	cmp	r4, #0	; 0x0
        230b4c:	aa000003 	bge	230b60 <TXLongTagArray::AddToElements(long, long, long)+0x34>
        230b50:	e5960004 	ldr	r0, [r6, #4]	; fField4
        230b54:	e0404001 	sub	r4, r0, r1
        230b58:	e3540000 	cmp	r4, #0	; 0x0
        230b5c:	d91ba870 	ldmledb	fp, {r4, r5, r6, fp, sp, pc}
        230b60:	e1a00006 	mov	r0, r6
        230b64:	eb6551d9 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        230b68:	e5d63008 	ldrb	r3, [r6, #8]
        230b6c:	e3330004 	teq	r3, #4	; 0x4
        230b70:	e1a02004 	mov	r2, r4
        230b74:	e1a01000 	mov	r1, r0
        230b78:	e1a00005 	mov	r0, r5
        230b7c:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        230b80:	1a656252 	bne	1b894d0 <$TXAddToArrayElements(long, char *, char *, int)>
        230b84:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
        230b88:	0a656251 	beq	1b894d4 <$TXAddToLongArray(long, long *, long *)>
    */
}

