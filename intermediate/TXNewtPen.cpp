#include "include/TXNewtPen.h"

/**
 * Symbol: TXNewtPen::__ct(TStrokePublic *)
 * Address: 0024dbb0
 */
TXNewtPen::TXNewtPen(TStrokePublic *) {
    /*
        24dbb0:	e1a0c00d 	mov	ip, sp
        24dbb4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24dbb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        24dbbc:	e1b04000 	movs	r4, r0
        24dbc0:	e1a05001 	mov	r5, r1
        24dbc4:	1a000003 	bne	24dbd8 <TXNewtPen::__ct(TStrokePublic *)+0x28>
        24dbc8:	e3a0000c 	mov	r0, #12	; 0xc
        24dbcc:	eb6602d9 	bl	1bce738 <$__nw(unsigned int)>
        24dbd0:	e1b04000 	movs	r4, r0
        24dbd4:	0a000003 	beq	24dbe8 <TXNewtPen::__ct(TStrokePublic *)+0x38>
        24dbd8:	e1a00004 	mov	r0, r4
        24dbdc:	eb64ee40 	bl	1b894e4 <TXPointingDevice::$__ct(void)>
        24dbe0:	e59f0008 	ldr	r0, [pc, #8]	; 24dbf0 <TXNewtPen::__ct(TStrokePublic *)+0x40>
        24dbe4:	e8840021 	stmia	r4, {r0, r5}
        24dbe8:	e1a00004 	mov	r0, r4
        24dbec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24dbf0:	000213e4 	andeq	r1, r2, r4, ror #7
    */
}

/**
 * Symbol: TXNewtPen::__ct(Point)
 * Address: 0024dbf4
 */
TXNewtPen::TXNewtPen(Point) {
    /*
        24dbf4:	e1a0c00d 	mov	ip, sp
        24dbf8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24dbfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        24dc00:	e1a05001 	mov	r5, r1
        24dc04:	e1b04000 	movs	r4, r0
        24dc08:	1a000003 	bne	24dc1c <TXNewtPen::__ct(Point)+0x28>
        24dc0c:	e3a0000c 	mov	r0, #12	; 0xc
        24dc10:	eb6602c8 	bl	1bce738 <$__nw(unsigned int)>
        24dc14:	e1b04000 	movs	r4, r0
        24dc18:	0a000007 	beq	24dc3c <TXNewtPen::__ct(Point)+0x48>
        24dc1c:	e1a00004 	mov	r0, r4
        24dc20:	eb64ee2f 	bl	1b894e4 <TXPointingDevice::$__ct(void)>
        24dc24:	e59f0018 	ldr	r0, [pc, #18]	; 24dc44 <TXNewtPen::__ct(Point)+0x50>
        24dc28:	e5840000 	str	r0, [r4]
        24dc2c:	e3a00000 	mov	r0, #0	; 0x0
        24dc30:	e5840004 	str	r0, [r4, #4]	; fField4
        24dc34:	e2840008 	add	r0, r4, #8	; 0x8
        24dc38:	e5805000 	str	r5, [r0]
        24dc3c:	e1a00004 	mov	r0, r4
        24dc40:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24dc44:	000213e4 	andeq	r1, r2, r4, ror #7
    */
}

/**
 * Symbol: TXNewtPen::IsStillDown(void)
 * Address: 0024dc48
 */
TXNewtPen::IsStillDown(void) {
    /*
        24dc48:	e1a0c00d 	mov	ip, sp
        24dc4c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        24dc50:	e24cb004 	sub	fp, ip, #4	; 0x4
        24dc54:	e5900004 	ldr	r0, [r0, #4]	; fField4
        24dc58:	e3300000 	teq	r0, #0	; 0x0
        24dc5c:	0a000003 	beq	24dc70 <TXNewtPen::IsStillDown(void)+0x28>
        24dc60:	eb610f0f 	bl	1a918a4 <TStrokePublic::$Done(void)>
        24dc64:	e3300000 	teq	r0, #0	; 0x0
        24dc68:	03a00001 	moveq	r0, #1	; 0x1
        24dc6c:	0a000000 	beq	24dc74 <TXNewtPen::IsStillDown(void)+0x2c>
        24dc70:	e3a00000 	mov	r0, #0	; 0x0
        24dc74:	e20000ff 	and	r0, r0, #255	; 0xff
        24dc78:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtPen::FirstLocation(void)
 * Address: 0024dc7c
 */
TXNewtPen::FirstLocation(void) {
    /*
        24dc7c:	e1a0c00d 	mov	ip, sp
        24dc80:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24dc84:	e24cb004 	sub	fp, ip, #4	; 0x4
        24dc88:	e1a04000 	mov	r4, r0
        24dc8c:	e5910004 	ldr	r0, [r1, #4]	; fField4
        24dc90:	e3300000 	teq	r0, #0	; 0x0
        24dc94:	05910008 	ldreq	r0, [r1, #8]
        24dc98:	05840000 	streq	r0, [r4]
        24dc9c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        24dca0:	e24dd004 	sub	sp, sp, #4	; 0x4
        24dca4:	e1a01000 	mov	r1, r0
        24dca8:	e1a0000d 	mov	r0, sp
        24dcac:	eb611b63 	bl	1a94a40 <TStrokePublic::$FirstPoint(void)>
        24dcb0:	e59d0000 	ldr	r0, [sp]
        24dcb4:	e5840000 	str	r0, [r4]
        24dcb8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtPen::CurrentLocation(void)
 * Address: 0024dcbc
 */
TXNewtPen::CurrentLocation(void) {
    /*
        24dcbc:	e1a0c00d 	mov	ip, sp
        24dcc0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24dcc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        24dcc8:	e1a04000 	mov	r4, r0
        24dccc:	e5910004 	ldr	r0, [r1, #4]	; fField4
        24dcd0:	e3300000 	teq	r0, #0	; 0x0
        24dcd4:	05910008 	ldreq	r0, [r1, #8]
        24dcd8:	05840000 	streq	r0, [r4]
        24dcdc:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        24dce0:	e24dd004 	sub	sp, sp, #4	; 0x4
        24dce4:	e1a01000 	mov	r1, r0
        24dce8:	e1a0000d 	mov	r0, sp
        24dcec:	eb611734 	bl	1a939c4 <TStrokePublic::$FinalPoint(void)>
        24dcf0:	e59d0000 	ldr	r0, [sp]
        24dcf4:	e5840000 	str	r0, [r4]
        24dcf8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtPen::GetDoubleClickTime(void)
 * Address: 0024dcfc
 */
TXNewtPen::GetDoubleClickTime(void) {
    /*
        24dcfc:	e3a00000 	mov	r0, #0	; 0x0
        24dd00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXNewtPen::InkOff(void)
 * Address: 0024dd04
 */
TXNewtPen::InkOff(void) {
    /*
        24dd04:	e5900004 	ldr	r0, [r0, #4]	; fField4
        24dd08:	e3300000 	teq	r0, #0	; 0x0
        24dd0c:	13a01001 	movne	r1, #1	; 0x1
        24dd10:	1a612ff9 	bne	1a99cfc <TStrokePublic::$InkOff(unsigned char)>
        24dd14:	e1a0f00e 	mov	pc, lr
    */
}

