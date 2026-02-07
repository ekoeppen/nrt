#include "include/TXOffsetRange.h"

/**
 * Symbol: TXOffsetRange::__ct(TXOffset const &, TXOffset const &)
 * Address: 00233ff8
 */
TXOffsetRange::TXOffsetRange(TXOffset const &, TXOffset const &) {
    /*
        233ff8:	e1a0c00d 	mov	ip, sp
        233ffc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        234000:	e24cb004 	sub	fp, ip, #4	; 0x4
        234004:	e1a05001 	mov	r5, r1
        234008:	e1a04002 	mov	r4, r2
        23400c:	e3300000 	teq	r0, #0	; 0x0
        234010:	1a000003 	bne	234024 <TXOffsetRange::__ct(TXOffset const &, TXOffset const &)+0x2c>
        234014:	e3a00010 	mov	r0, #16	; 0x10
        234018:	eb6669c6 	bl	1bce738 <$__nw(unsigned int)>
        23401c:	e3300000 	teq	r0, #0	; 0x0
        234020:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        234024:	e8951008 	ldmia	r5, {r3, ip}
        234028:	e8801008 	stmia	r0, {r3, ip}
        23402c:	e2801008 	add	r1, r0, #8	; 0x8
        234030:	e8945000 	ldmia	r4, {ip, lr}
        234034:	e8815000 	stmia	r1, {ip, lr}
        234038:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXOffsetRange::__ct(long, long, unsigned char, unsigned char)
 * Address: 0023403c
 */
TXOffsetRange::TXOffsetRange(long, long, unsigned char, unsigned char) {
    /*
        23403c:	e1a0c00d 	mov	ip, sp
        234040:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        234044:	e24cb004 	sub	fp, ip, #4	; 0x4
        234048:	e1a05001 	mov	r5, r1
        23404c:	e1a04002 	mov	r4, r2
        234050:	e20360ff 	and	r6, r3, #255	; 0xff
        234054:	e59b1004 	ldr	r1, [fp, #4]	; fField4
        234058:	e20170ff 	and	r7, r1, #255	; 0xff
        23405c:	e3300000 	teq	r0, #0	; 0x0
        234060:	1a000003 	bne	234074 <TXOffsetRange::__ct(long, long, unsigned char, unsigned char)+0x38>
        234064:	e3a00010 	mov	r0, #16	; 0x10
        234068:	eb6669b2 	bl	1bce738 <$__nw(unsigned int)>
        23406c:	e3300000 	teq	r0, #0	; 0x0
        234070:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        234074:	e5805000 	str	r5, [r0]
        234078:	e5c06004 	strb	r6, [r0, #4]	; fField4
        23407c:	e2801008 	add	r1, r0, #8	; 0x8
        234080:	e5814000 	str	r4, [r1]
        234084:	e5c17004 	strb	r7, [r1, #4]	; fField4
        234088:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXOffsetRange::Set(long, long, unsigned char, unsigned char)
 * Address: 0023408c
 */
TXOffsetRange::Set(long, long, unsigned char, unsigned char) {
    /*
        23408c:	e59dc000 	ldr	ip, [sp]
        234090:	e20cc0ff 	and	ip, ip, #255	; 0xff
        234094:	e5801000 	str	r1, [r0]
        234098:	e5c03004 	strb	r3, [r0, #4]	; fField4
        23409c:	e5a02008 	str	r2, [r0, #8]!	; fField8
        2340a0:	e5c0c004 	strb	ip, [r0, #4]	; fField4
        2340a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXOffsetRange::operator==( const(TXOffsetRange const &))
 * Address: 002340a8
 */
TXOffsetRange::operator==( const(TXOffsetRange const &)) {
    /*
        2340a8:	e1a0c00d 	mov	ip, sp
        2340ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2340b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2340b4:	e1a04000 	mov	r4, r0
        2340b8:	e1a05001 	mov	r5, r1
        2340bc:	ebffffc3 	bl	233fd0 <TXOffset::operator==( const(TXOffset const &))>
        2340c0:	e3300000 	teq	r0, #0	; 0x0
        2340c4:	0a000005 	beq	2340e0 <TXOffsetRange::operator==( const(TXOffsetRange const &))+0x38>
        2340c8:	e2851008 	add	r1, r5, #8	; 0x8
        2340cc:	e2840008 	add	r0, r4, #8	; 0x8
        2340d0:	ebffffbe 	bl	233fd0 <TXOffset::operator==( const(TXOffset const &))>
        2340d4:	e3300000 	teq	r0, #0	; 0x0
        2340d8:	13a00001 	movne	r0, #1	; 0x1
        2340dc:	1a000000 	bne	2340e4 <TXOffsetRange::operator==( const(TXOffsetRange const &))+0x3c>
        2340e0:	e3a00000 	mov	r0, #0	; 0x0
        2340e4:	e20000ff 	and	r0, r0, #255	; 0xff
        2340e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXOffsetRange::Offset(long)
 * Address: 002340ec
 */
TXOffsetRange::Offset(long) {
    /*
        2340ec:	e5902000 	ldr	r2, [r0]
        2340f0:	e0822001 	add	r2, r2, r1
        2340f4:	e5802000 	str	r2, [r0]
        2340f8:	e5902008 	ldr	r2, [r0, #8]	; fField8
        2340fc:	e0821001 	add	r1, r2, r1
        234100:	e5a01008 	str	r1, [r0, #8]!	; fField8
        234104:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXOffsetRange::CheckBounds(void)
 * Address: 0023411c
 */
TXOffsetRange::CheckBounds(void) {
    /*
        23411c:	e5901000 	ldr	r1, [r0]
        234120:	e5902008 	ldr	r2, [r0, #8]	; fField8
        234124:	e1520001 	cmp	r2, r1
        234128:	b5801008 	strlt	r1, [r0, #8]	; fField8
        23412c:	b5802000 	strlt	r2, [r0]
        234130:	e1a0f00e 	mov	pc, lr
    */
}

