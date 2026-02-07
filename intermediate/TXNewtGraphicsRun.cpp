#include "include/TXNewtGraphicsRun.h"

/**
 * Symbol: TXNewtGraphicsRun::__ct(void)
 * Address: 0023ded4
 */
TXNewtGraphicsRun::TXNewtGraphicsRun(void) {
    /*
        23ded4:	e1a0c00d 	mov	ip, sp
        23ded8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23dedc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23dee0:	e1b04000 	movs	r4, r0
        23dee4:	1a000003 	bne	23def8 <TXNewtGraphicsRun::__ct(void)+0x24>
        23dee8:	e3a00014 	mov	r0, #20	; 0x14
        23deec:	eb664211 	bl	1bce738 <$__nw(unsigned int)>
        23def0:	e1b04000 	movs	r4, r0
        23def4:	0a000008 	beq	23df1c <TXNewtGraphicsRun::__ct(void)+0x48>
        23def8:	e1a00004 	mov	r0, r4
        23defc:	eb65463a 	bl	1b8f7ec <TXGraphicsRun::$__ct(void)>
        23df00:	e3a00002 	mov	r0, #2	; 0x2
        23df04:	eb661090 	bl	1bc214c <$AllocateRefHandle(long)>
        23df08:	e3a01000 	mov	r1, #0	; 0x0
        23df0c:	e5840010 	str	r0, [r4, #16]	; fField16
        23df10:	e5a01004 	str	r1, [r0, #4]!	; fField4
        23df14:	e59f0008 	ldr	r0, [pc, #8]	; 23df24 <TXNewtGraphicsRun::__ct(void)+0x50>
        23df18:	e5840000 	str	r0, [r4]
        23df1c:	e1a00004 	mov	r0, r4
        23df20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        23df24:	0001ea14 	andeq	lr, r1, r4, lsl sl
    */
}

/**
 * Symbol: TXNewtGraphicsRun::CreateNew( const(void))
 * Address: 0023df28
 */
TXNewtGraphicsRun::CreateNew( const(void)) {
    /*
        23df28:	e3a00000 	mov	r0, #0	; 0x0
        23df2c:	ea654e71 	b	1b918f8 <TXNewtGraphicsRun::$__ct(void)>
    */
}

/**
 * Symbol: TXNewtGraphicsRun::SetNSObject(RefVar const &)
 * Address: 0023df30
 */
TXNewtGraphicsRun::SetNSObject(RefVar const &) {
    /*
        23df30:	e5911000 	ldr	r1, [r1]
        23df34:	e5911000 	ldr	r1, [r1]
        23df38:	e5900010 	ldr	r0, [r0, #16]	; fField16
        23df3c:	e5801000 	str	r1, [r0]
        23df40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXNewtGraphicsRun::Assign(TXAttrObject const *)
 * Address: 0023df44
 */
TXNewtGraphicsRun::Assign(TXAttrObject const *) {
    /*
        23df44:	e1310000 	teq	r1, r0
        23df48:	01a0f00e 	moveq	pc, lr
        23df4c:	e1a0c00d 	mov	ip, sp
        23df50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23df54:	e24cb004 	sub	fp, ip, #4	; 0x4
        23df58:	e1a04000 	mov	r4, r0
        23df5c:	e1a05001 	mov	r5, r1
        23df60:	eb656f51 	bl	1b99cac <TXRun::$Assign(TXAttrObject const *)>
        23df64:	e5951010 	ldr	r1, [r5, #16]	; fField16
        23df68:	e5911000 	ldr	r1, [r1]
        23df6c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        23df70:	e5801000 	str	r1, [r0]
        23df74:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtGraphicsRun::GetClassId( const(void))
 * Address: 0023df78
 */
TXNewtGraphicsRun::GetClassId( const(void)) {
    /*
        23df78:	e59f0000 	ldr	r0, [pc, #0]	; 23df80 <TXNewtGraphicsRun::GetClassId( const(void))+0x8>
        23df7c:	e1a0f00e 	mov	pc, lr
        23df80:	67726166 	ldrvsb	r6, [r2, -r6, ror #2]!
    */
}

/**
 * Symbol: TXNewtGraphicsRun::GetPublicType( const(void))
 * Address: 0023df84
 */
TXNewtGraphicsRun::GetPublicType( const(void)) {
    /*
        23df84:	e59f0000 	ldr	r0, [pc, #0]	; 23df8c <TXNewtGraphicsRun::GetPublicType( const(void))+0x8>
        23df88:	e1a0f00e 	mov	pc, lr
        23df8c:	73686170 	cmnvc	r8, #28	; 0x1c
    */
}

/**
 * Symbol: TXNewtGraphicsRun::GetObjFlags( const(void))
 * Address: 0023df90
 */
TXNewtGraphicsRun::GetObjFlags( const(void)) {
    /*
        23df90:	e1a0c00d 	mov	ip, sp
        23df94:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        23df98:	e24cb004 	sub	fp, ip, #4	; 0x4
        23df9c:	eb654614 	bl	1b8f7f4 <TXGraphicsRun::$GetObjFlags( const(void))>
        23dfa0:	e3c00001 	bic	r0, r0, #1	; 0x1
        23dfa4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtGraphicsRun::GetAttributeFlags( const(unsigned long))
 * Address: 0023dfa8
 */
TXNewtGraphicsRun::GetAttributeFlags( const(unsigned long)) {
    /*
        23dfa8:	e1a0c00d 	mov	ip, sp
        23dfac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23dfb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        23dfb4:	e59fc014 	ldr	ip, [pc, #14]	; 23dfd0 <TXNewtGraphicsRun::GetAttributeFlags( const(unsigned long))+0x28>
        23dfb8:	e131000c 	teq	r1, ip
        23dfbc:	13a04000 	movne	r4, #0	; 0x0
        23dfc0:	03a04003 	moveq	r4, #3	; 0x3
        23dfc4:	eb6520e3 	bl	1b86358 <TXAttrObject::$GetAttributeFlags( const(unsigned long))>
        23dfc8:	e1800004 	orr	r0, r0, r4
        23dfcc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        23dfd0:	67726166 	ldrvsb	r6, [r2, -r6, ror #2]!
    */
}

/**
 * Symbol: TXNewtGraphicsRun::GetDimensions(int *, int *)
 * Address: 0023dfd4
 */
TXNewtGraphicsRun::GetDimensions(int *, int *) {
    /*
        23dfd4:	e1a0c00d 	mov	ip, sp
        23dfd8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23dfdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23dfe0:	e1a05001 	mov	r5, r1
        23dfe4:	e1a04002 	mov	r4, r2
        23dfe8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        23dfec:	e5900000 	ldr	r0, [r0]
        23dff0:	e3300002 	teq	r0, #2	; 0x2
        23dff4:	0a000022 	beq	23e084 <TXNewtGraphicsRun::GetDimensions(int *, int *)+0xb0>
        23dff8:	e24dd004 	sub	sp, sp, #4	; 0x4
        23dffc:	e59f1070 	ldr	r1, [pc, #70]	; 23e074 <TXNewtGraphicsRun::GetDimensions(int *, int *)+0xa0>
        23e000:	e5911000 	ldr	r1, [r1]
        23e004:	e5911000 	ldr	r1, [r1]
        23e008:	eb661894 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e00c:	eb66104e 	bl	1bc214c <$AllocateRefHandle(long)>
        23e010:	e58d0000 	str	r0, [sp]
        23e014:	e5900000 	ldr	r0, [r0]
        23e018:	e3300002 	teq	r0, #2	; 0x2
        23e01c:	0a000015 	beq	23e078 <TXNewtGraphicsRun::GetDimensions(int *, int *)+0xa4>
        23e020:	e24dd008 	sub	sp, sp, #8	; 0x8
        23e024:	e1a0100d 	mov	r1, sp
        23e028:	e28d0008 	add	r0, sp, #8	; 0x8
        23e02c:	eb625672 	bl	1ad39fc <$ShapeBounds(RefVar const &, TRect *)>
        23e030:	e59d1006 	ldr	r1, [sp, #6]
        23e034:	e59d0002 	ldr	r0, [sp, #2]
        23e038:	e0410000 	sub	r0, r1, r0
        23e03c:	e1a00800 	mov	r0, r0, lsl #16
        23e040:	e1a00840 	mov	r0, r0, asr #16
        23e044:	e2800004 	add	r0, r0, #4	; 0x4
        23e048:	e5850000 	str	r0, [r5]
        23e04c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        23e050:	e59d0000 	ldr	r0, [sp]
        23e054:	e0410000 	sub	r0, r1, r0
        23e058:	e1a00800 	mov	r0, r0, lsl #16
        23e05c:	e1a00840 	mov	r0, r0, asr #16
        23e060:	e2800004 	add	r0, r0, #4	; 0x4
        23e064:	e5840000 	str	r0, [r4]
        23e068:	e59d0008 	ldr	r0, [sp, #8]
        23e06c:	eb661452 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e070:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        23e074:	00684600 	rsbeq	r4, r8, r0, lsl #12
        23e078:	e59d0000 	ldr	r0, [sp]
        23e07c:	eb66144e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e080:	e28dd004 	add	sp, sp, #4	; 0x4
        23e084:	e3a00010 	mov	r0, #16	; 0x10
        23e088:	e5850000 	str	r0, [r5]
        23e08c:	e5840000 	str	r0, [r4]
        23e090:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXNewtGraphicsRun::DrawContent(Rect const &)
 * Address: 0023e094
 */
TXNewtGraphicsRun::DrawContent(Rect const &) {
    /*
        23e094:	e1a0c00d 	mov	ip, sp
        23e098:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23e09c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23e0a0:	e1a04001 	mov	r4, r1
        23e0a4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        23e0a8:	e5900000 	ldr	r0, [r0]
        23e0ac:	e3300002 	teq	r0, #2	; 0x2
        23e0b0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        23e0b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        23e0b8:	e59f10a4 	ldr	r1, [pc, #a4]	; 23e164 <TXNewtGraphicsRun::DrawContent(Rect const &)+0xd0>
        23e0bc:	e5911000 	ldr	r1, [r1]
        23e0c0:	e5911000 	ldr	r1, [r1]
        23e0c4:	eb661865 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        23e0c8:	eb66101f 	bl	1bc214c <$AllocateRefHandle(long)>
        23e0cc:	e58d0000 	str	r0, [sp]
        23e0d0:	e5900000 	ldr	r0, [r0]
        23e0d4:	e3300002 	teq	r0, #2	; 0x2
        23e0d8:	0a00001e 	beq	23e158 <TXNewtGraphicsRun::DrawContent(Rect const &)+0xc4>
        23e0dc:	e24dd008 	sub	sp, sp, #8	; 0x8
        23e0e0:	e1a0100d 	mov	r1, sp
        23e0e4:	e28d0008 	add	r0, sp, #8	; 0x8
        23e0e8:	eb625643 	bl	1ad39fc <$ShapeBounds(RefVar const &, TRect *)>
        23e0ec:	e24dd008 	sub	sp, sp, #8	; 0x8
        23e0f0:	e5940002 	ldr	r0, [r4, #2]
        23e0f4:	e1a00820 	mov	r0, r0, lsr #16
        23e0f8:	e59d1008 	ldr	r1, [sp, #8]
        23e0fc:	e0400001 	sub	r0, r0, r1
        23e100:	e2800002 	add	r0, r0, #2	; 0x2
        23e104:	e5cd0007 	strb	r0, [sp, #7]
        23e108:	e1a00440 	mov	r0, r0, asr #8
        23e10c:	e5cd0006 	strb	r0, [sp, #6]
        23e110:	e5940000 	ldr	r0, [r4]
        23e114:	e1a00820 	mov	r0, r0, lsr #16
        23e118:	e59d100a 	ldr	r1, [sp, #10]
        23e11c:	e0400001 	sub	r0, r0, r1
        23e120:	e2800002 	add	r0, r0, #2	; 0x2
        23e124:	e5cd0005 	strb	r0, [sp, #5]
        23e128:	e1a00440 	mov	r0, r0, asr #8
        23e12c:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        23e130:	e3a00002 	mov	r0, #2	; 0x2
        23e134:	eb661004 	bl	1bc214c <$AllocateRefHandle(long)>
        23e138:	e58d0000 	str	r0, [sp]
        23e13c:	e1a0100d 	mov	r1, sp
        23e140:	e28d2004 	add	r2, sp, #4	; 0x4
        23e144:	e28d0010 	add	r0, sp, #16	; 0x10
        23e148:	ebfa859e 	bl	df7c8 <DrawShape__FRC6RefVarT1RC6TPoint>
        23e14c:	e59d0000 	ldr	r0, [sp]
        23e150:	eb661419 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e154:	e28dd010 	add	sp, sp, #16	; 0x10
        23e158:	e59d0000 	ldr	r0, [sp]
        23e15c:	eb661416 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23e160:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        23e164:	00684600 	rsbeq	r4, r8, r0, lsl #12
    */
}

/**
 * Symbol: TXNewtGraphicsRun::GetNSObject( const(void))
 * Address: 0023e168
 */
TXNewtGraphicsRun::GetNSObject( const(void)) {
    /*
        23e168:	e5900010 	ldr	r0, [r0, #16]	; fField16
        23e16c:	e5900000 	ldr	r0, [r0]
        23e170:	e1a0f00e 	mov	pc, lr
    */
}

