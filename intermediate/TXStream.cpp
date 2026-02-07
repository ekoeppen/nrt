#include "include/TXStream.h"

/**
 * Symbol: TXStream::__ct(void)
 * Address: 00245ec8
 */
TXStream::TXStream(void) {
    /*
        245ec8:	e1a0c00d 	mov	ip, sp
        245ecc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        245ed0:	e24cb004 	sub	fp, ip, #4	; 0x4
        245ed4:	e3300000 	teq	r0, #0	; 0x0
        245ed8:	1a000003 	bne	245eec <TXStream::__ct(void)+0x24>
        245edc:	e3a00008 	mov	r0, #8	; 0x8
        245ee0:	eb662214 	bl	1bce738 <$__nw(unsigned int)>
        245ee4:	e3300000 	teq	r0, #0	; 0x0
        245ee8:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        245eec:	e59f100c 	ldr	r1, [pc, #c]	; 245f00 <TXStream::__ct(void)+0x38>
        245ef0:	e5801000 	str	r1, [r0]
        245ef4:	e3a01000 	mov	r1, #0	; 0x0
        245ef8:	e5801004 	str	r1, [r0, #4]	; fField4
        245efc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        245f00:	00020628 	andeq	r0, r2, r8, lsr #12
    */
}

/**
 * Symbol: TXStream::__dt(void)
 * Address: 00245f04
 */
TXStream::~TXStream(void) {
    /*
        245f04:	e59f200c 	ldr	r2, [pc, #c]	; 245f18 <TXStream::__dt(void)+0x14>
        245f08:	e3110001 	tst	r1, #1	; 0x1
        245f0c:	e5802000 	str	r2, [r0]
        245f10:	1a661df2 	bne	1bcd6e0 <$__dl(void *)>
        245f14:	e1a0f00e 	mov	pc, lr
        245f18:	00020628 	andeq	r0, r2, r8, lsr #12
    */
}

/**
 * Symbol: TXStream::GetPosition( const(void))
 * Address: 0024602c
 */
TXStream::GetPosition( const(void)) {
    /*
        24602c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        246030:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXStream::SetPosition(long)
 * Address: 00246034
 */
TXStream::SetPosition(long) {
    /*
        246034:	e5a01004 	str	r1, [r0, #4]!	; fField4
        246038:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXStream::WriteBytes(void const *, long)
 * Address: 0024603c
 */
TXStream::WriteBytes(void const *, long) {
    /*
        24603c:	e1a0c00d 	mov	ip, sp
        246040:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        246044:	e24cb004 	sub	fp, ip, #4	; 0x4
        246048:	e1a04000 	mov	r4, r0
        24604c:	e1a05002 	mov	r5, r2
        246050:	e5903000 	ldr	r3, [r0]
        246054:	e1a0e00f 	mov	lr, pc
        246058:	e283f010 	add	pc, r3, #16	; 0x10
        24605c:	e3300000 	teq	r0, #0	; 0x0
        246060:	05941004 	ldreq	r1, [r4, #4]	; fField4
        246064:	00811005 	addeq	r1, r1, r5
        246068:	05a41004 	streq	r1, [r4, #4]!	; fField4
        24606c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXStream::ReadBytes(void *, long)
 * Address: 00246070
 */
TXStream::ReadBytes(void *, long) {
    /*
        246070:	e1a0c00d 	mov	ip, sp
        246074:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        246078:	e24cb004 	sub	fp, ip, #4	; 0x4
        24607c:	e1a04000 	mov	r4, r0
        246080:	e1a06001 	mov	r6, r1
        246084:	e1a05002 	mov	r5, r2
        246088:	e24dd004 	sub	sp, sp, #4	; 0x4
        24608c:	e1a0100d 	mov	r1, sp
        246090:	e5902000 	ldr	r2, [r0]
        246094:	e1a0e00f 	mov	lr, pc
        246098:	e282f00c 	add	pc, r2, #12	; 0xc
        24609c:	e3300000 	teq	r0, #0	; 0x0
        2460a0:	1a000014 	bne	2460f8 <TXStream::ReadBytes(void *, long)+0x88>
        2460a4:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2460a8:	e0812005 	add	r2, r1, r5
        2460ac:	e59d0000 	ldr	r0, [sp]
        2460b0:	e1520000 	cmp	r2, r0
        2460b4:	d3a07000 	movle	r7, #0	; 0x0
        2460b8:	c0405001 	subgt	r5, r0, r1
        2460bc:	c3a07001 	movgt	r7, #1	; 0x1
        2460c0:	e1a02005 	mov	r2, r5
        2460c4:	e1a01006 	mov	r1, r6
        2460c8:	e1a00004 	mov	r0, r4
        2460cc:	e5943000 	ldr	r3, [r4]
        2460d0:	e1a0e00f 	mov	lr, pc
        2460d4:	e283f014 	add	pc, r3, #20	; 0x14
        2460d8:	e3300000 	teq	r0, #0	; 0x0
        2460dc:	1a000005 	bne	2460f8 <TXStream::ReadBytes(void *, long)+0x88>
        2460e0:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2460e4:	e0811005 	add	r1, r1, r5
        2460e8:	e3370000 	teq	r7, #0	; 0x0
        2460ec:	e5a41004 	str	r1, [r4, #4]!	; fField4
        2460f0:	13a00002 	movne	r0, #2	; 0x2
        2460f4:	12400c22 	subne	r0, r0, #8704	; 0x2200
        2460f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

