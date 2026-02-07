#include "include/TXRunRange.h"

/**
 * Symbol: TXRunRange::__ct(char)
 * Address: 00245cc4
 */
TXRunRange::TXRunRange(char) {
    /*
        245cc4:	e1a0c00d 	mov	ip, sp
        245cc8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        245ccc:	e24cb004 	sub	fp, ip, #4	; 0x4
        245cd0:	e1b04000 	movs	r4, r0
        245cd4:	e20150ff 	and	r5, r1, #255	; 0xff
        245cd8:	1a000005 	bne	245cf4 <TXRunRange::__ct(char)+0x30>
        245cdc:	e3a00020 	mov	r0, #32	; 0x20
        245ce0:	eb662294 	bl	1bce738 <$__nw(unsigned int)>
        245ce4:	e1b04000 	movs	r4, r0
        245ce8:	1a000001 	bne	245cf4 <TXRunRange::__ct(char)+0x30>
        245cec:	e1a00004 	mov	r0, r4
        245cf0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        245cf4:	e3350002 	teq	r5, #2	; 0x2
        245cf8:	13a01001 	movne	r1, #1	; 0x1
        245cfc:	03a0100a 	moveq	r1, #10	; 0xa
        245d00:	e1a00004 	mov	r0, r4
        245d04:	eb653b46 	bl	1b94a24 <TXObjectRange::$__ct(int)>
        245d08:	e59f0004 	ldr	r0, [pc, #4]	; 245d14 <TXRunRange::__ct(char)+0x50>
        245d0c:	e5840000 	str	r0, [r4]
        245d10:	eafffff5 	b	245cec <TXRunRange::__ct(char)+0x28>
        245d14:	0001afc8 	andeq	sl, r1, r8, asr #31
    */
}

/**
 * Symbol: TXRunRange::__dt(void)
 * Address: 00245d18
 */
TXRunRange::~TXRunRange(void) {
    /*
        245d18:	e1a0c00d 	mov	ip, sp
        245d1c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        245d20:	e24cb004 	sub	fp, ip, #4	; 0x4
        245d24:	e1a04000 	mov	r4, r0
        245d28:	e1a05001 	mov	r5, r1
        245d2c:	e59f0020 	ldr	r0, [pc, #20]	; 245d54 <TXRunRange::__dt(void)+0x3c>
        245d30:	e5840000 	str	r0, [r4]
        245d34:	e1a00004 	mov	r0, r4
        245d38:	e3a01000 	mov	r1, #0	; 0x0
        245d3c:	eb653b39 	bl	1b94a28 <TXObjectRange::$__dt(void)>
        245d40:	e3150001 	tst	r5, #1	; 0x1
        245d44:	11a00004 	movne	r0, r4
        245d48:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        245d4c:	1a661e63 	bne	1bcd6e0 <$__dl(void *)>
        245d50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        245d54:	0001afc8 	andeq	sl, r1, r8, asr #31
    */
}

/**
 * Symbol: TXRunRange::IsTextRun( const(long))
 * Address: 00245d58
 */
TXRunRange::IsTextRun( const(long)) {
    /*
        245d58:	e1a0c00d 	mov	ip, sp
        245d5c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        245d60:	e24cb004 	sub	fp, ip, #4	; 0x4
        245d64:	eb653b35 	bl	1b94a40 <TXObjectRange::$RangeIndexToObject( const(long))>
        245d68:	e1a04000 	mov	r4, r0
        245d6c:	e5901000 	ldr	r1, [r0]
        245d70:	e1a0e00f 	mov	lr, pc
        245d74:	e281f054 	add	pc, r1, #84	; 0x54
        245d78:	e3300000 	teq	r0, #0	; 0x0
        245d7c:	11a00004 	movne	r0, r4
        245d80:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXRunRange::CharToTextRun( const(TXOffset))
 * Address: 00245d84
 */
TXRunRange::CharToTextRun( const(TXOffset)) {
    /*
        245d84:	e1a0c00d 	mov	ip, sp
        245d88:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        245d8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        245d90:	e1a04000 	mov	r4, r0
        245d94:	eb650165 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        245d98:	e1b05000 	movs	r5, r0
        245d9c:	43a00000 	movmi	r0, #0	; 0x0
        245da0:	491ba830 	ldmmidb	fp, {r4, r5, fp, sp, pc}
        245da4:	e1a01005 	mov	r1, r5
        245da8:	e1a00004 	mov	r0, r4
        245dac:	eb654fc7 	bl	1b99cd0 <TXRunRange::$SearchTextRunBackward( const(long))>
        245db0:	e3300000 	teq	r0, #0	; 0x0
        245db4:	02851001 	addeq	r1, r5, #1	; 0x1
        245db8:	01a00004 	moveq	r0, r4
        245dbc:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        245dc0:	0a654fc3 	beq	1b99cd4 <TXRunRange::$SearchTextRunForward( const(long))>
        245dc4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXRunRange::SearchTextRunBackward( const(long))
 * Address: 00245dc8
 */
TXRunRange::SearchTextRunBackward( const(long)) {
    /*
        245dc8:	e1a0c00d 	mov	ip, sp
        245dcc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        245dd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        245dd4:	e1a05000 	mov	r5, r0
        245dd8:	e1b04001 	movs	r4, r1
        245ddc:	4a000006 	bmi	245dfc <TXRunRange::SearchTextRunBackward( const(long))+0x34>
        245de0:	e1a01004 	mov	r1, r4
        245de4:	e1a00005 	mov	r0, r5
        245de8:	eb654fb6 	bl	1b99cc8 <TXRunRange::$IsTextRun( const(long))>
        245dec:	e3300000 	teq	r0, #0	; 0x0
        245df0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        245df4:	e2544001 	subs	r4, r4, #1	; 0x1
        245df8:	5afffff8 	bpl	245de0 <TXRunRange::SearchTextRunBackward( const(long))+0x18>
        245dfc:	e3a00000 	mov	r0, #0	; 0x0
        245e00:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXRunRange::SearchTextRunForward( const(long))
 * Address: 00245e04
 */
TXRunRange::SearchTextRunForward( const(long)) {
    /*
        245e04:	e1a0c00d 	mov	ip, sp
        245e08:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        245e0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        245e10:	e1a05000 	mov	r5, r0
        245e14:	e1a04001 	mov	r4, r1
        245e18:	e5906004 	ldr	r6, [r0, #4]
        245e1c:	e1510006 	cmp	r1, r6
        245e20:	aa000007 	bge	245e44 <TXRunRange::SearchTextRunForward( const(long))+0x40>
        245e24:	e1a01004 	mov	r1, r4
        245e28:	e1a00005 	mov	r0, r5
        245e2c:	eb654fa5 	bl	1b99cc8 <TXRunRange::$IsTextRun( const(long))>
        245e30:	e3300000 	teq	r0, #0	; 0x0
        245e34:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        245e38:	e2844001 	add	r4, r4, #1	; 0x1
        245e3c:	e1540006 	cmp	r4, r6
        245e40:	bafffff7 	blt	245e24 <TXRunRange::SearchTextRunForward( const(long))+0x20>
        245e44:	e3a00000 	mov	r0, #0	; 0x0
        245e48:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

