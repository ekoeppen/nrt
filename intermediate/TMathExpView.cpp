#include "include/TMathExpView.h"

/**
 * Symbol: TMathExpView::ClassID( const(void))
 * Address: 0011bb38
 */
TMathExpView::ClassID( const(void)) {
    /*
        11bb38:	e3a00054 	mov	r0, #84	; 0x54
        11bb3c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMathExpView::DerivedFrom( const(long))
 * Address: 0011bb40
 */
TMathExpView::DerivedFrom( const(long)) {
    /*
        11bb40:	e1a0c00d 	mov	ip, sp
        11bb44:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11bb48:	e24cb004 	sub	fp, ip, #4	; 0x4
        11bb4c:	e3310054 	teq	r1, #84	; 0x54
        11bb50:	0a000002 	beq	11bb60 <TMathExpView::DerivedFrom( const(long))+0x20>
        11bb54:	ebfd5da4 	bl	731ec <TContainerView::DerivedFrom( const(long))>
        11bb58:	e3300000 	teq	r0, #0	; 0x0
        11bb5c:	0a000001 	beq	11bb68 <TMathExpView::DerivedFrom( const(long))+0x28>
        11bb60:	e3a00001 	mov	r0, #1	; 0x1
        11bb64:	ea000000 	b	11bb6c <TMathExpView::DerivedFrom( const(long))+0x2c>
        11bb68:	e3a00000 	mov	r0, #0	; 0x0
        11bb6c:	e20000ff 	and	r0, r0, #255	; 0xff
        11bb70:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TMathExpView::Constructor(RefVar const &, TView *)
 * Address: 0011beac
 */
TMathExpView::Constructor(RefVar const &, TView *) {
    /*
        11beac:	e1a0c00d 	mov	ip, sp
        11beb0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11beb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11beb8:	e1a04000 	mov	r4, r0
        11bebc:	eb65c601 	bl	1a8d6c8 <TContainerView::$Constructor(RefVar const &, TView *)>
        11bec0:	e24dd004 	sub	sp, sp, #4	; 0x4
        11bec4:	e5940024 	ldr	r0, [r4, #36]	; fField36
        11bec8:	e5900000 	ldr	r0, [r0]
        11becc:	eb6a989e 	bl	1bc214c <$AllocateRefHandle(long)>
        11bed0:	e58d0000 	str	r0, [sp]
        11bed4:	e59f10a8 	ldr	r1, [pc, #a8]	; 11bf84 <TMathExpView::Constructor(RefVar const &, TView *)+0xd8>
        11bed8:	e1a0000d 	mov	r0, sp
        11bedc:	e3a03000 	mov	r3, #0	; 0x0
        11bee0:	e3a02000 	mov	r2, #0	; 0x0
        11bee4:	eb6aa0e2 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        11bee8:	eb6a9897 	bl	1bc214c <$AllocateRefHandle(long)>
        11beec:	e1a05000 	mov	r5, r0
        11bef0:	e2846038 	add	r6, r4, #56	; 0x38
        11bef4:	e59f008c 	ldr	r0, [pc, #8c]	; 11bf88 <TMathExpView::Constructor(RefVar const &, TView *)+0xdc>	; fField8
        11bef8:	e5900000 	ldr	r0, [r0]
        11befc:	e5901000 	ldr	r1, [r0]
        11bf00:	e5950000 	ldr	r0, [r5]
        11bf04:	eb6aa0d5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        11bf08:	e5961000 	ldr	r1, [r6]
        11bf0c:	e5810000 	str	r0, [r1]
        11bf10:	e59f0074 	ldr	r0, [pc, #74]	; 11bf8c <TMathExpView::Constructor(RefVar const &, TView *)+0xe0>
        11bf14:	e5900000 	ldr	r0, [r0]
        11bf18:	e5901000 	ldr	r1, [r0]
        11bf1c:	e5950000 	ldr	r0, [r5]
        11bf20:	eb6aa0ce 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        11bf24:	e3100003 	tst	r0, #3	; 0x3
        11bf28:	01a00140 	moveq	r0, r0, asr #2
        11bf2c:	0a000000 	beq	11bf34 <TMathExpView::Constructor(RefVar const &, TView *)+0x88>
        11bf30:	eb6a9879 	bl	1bc211c <$_RINTError(long)>
        11bf34:	e584003c 	str	r0, [r4, #60]
        11bf38:	e59f0050 	ldr	r0, [pc, #50]	; 11bf90 <TMathExpView::Constructor(RefVar const &, TView *)+0xe4>
        11bf3c:	e5900000 	ldr	r0, [r0]
        11bf40:	e5901000 	ldr	r1, [r0]
        11bf44:	e5950000 	ldr	r0, [r5]
        11bf48:	eb6aa0c4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        11bf4c:	e3100003 	tst	r0, #3	; 0x3
        11bf50:	01a00140 	moveq	r0, r0, asr #2
        11bf54:	0a000000 	beq	11bf5c <TMathExpView::Constructor(RefVar const &, TView *)+0xb0>
        11bf58:	eb6a986f 	bl	1bc211c <$_RINTError(long)>
        11bf5c:	e5840040 	str	r0, [r4, #64]
        11bf60:	e3a00010 	mov	r0, #16	; 0x10
        11bf64:	e5840030 	str	r0, [r4, #48]
        11bf68:	e3a00003 	mov	r0, #3	; 0x3
        11bf6c:	e5a40034 	str	r0, [r4, #52]!
        11bf70:	e1a00005 	mov	r0, r5
        11bf74:	eb6a9c90 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        11bf78:	e59d0000 	ldr	r0, [sp]
        11bf7c:	eb6a9c8e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        11bf80:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        11bf84:	00684fc8 	rsbeq	r4, r8, r8, asr #31
        11bf88:	00682d30 	rsbeq	r2, r8, r0, lsr sp
        11bf8c:	00682d28 	rsbeq	r2, r8, r8, lsr #26
        11bf90:	006846a8 	rsbeq	r4, r8, r8, lsr #13
    */
}

/**
 * Symbol: TMathExpView::PreDraw(TRect &)
 * Address: 0011bf94
 */
TMathExpView::PreDraw(TRect &) {
    /*
        11bf94:	ea6abd85 	b	1bcb5b0 <TView::$PreDraw(TRect &)>
    */
}

/**
 * Symbol: TMathExpView::RealDoCommand(RefVar const &)
 * Address: 0011bf98
 */
TMathExpView::RealDoCommand(RefVar const &) {
    /*
        11bf98:	e1a0c00d 	mov	ip, sp
        11bf9c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11bfa0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11bfa4:	e1a04000 	mov	r4, r0
        11bfa8:	e1a05001 	mov	r5, r1
        11bfac:	e1a00001 	mov	r0, r1
        11bfb0:	eb6628e4 	bl	1aa6348 <$CommandID(RefVar const &)>
        11bfb4:	e330000b 	teq	r0, #11	; 0xb
        11bfb8:	0a000005 	beq	11bfd4 <TMathExpView::RealDoCommand(RefVar const &)+0x3c>
        11bfbc:	e330001f 	teq	r0, #31	; 0x1f
        11bfc0:	05940008 	ldreq	r0, [r4, #8]	; fField8
        11bfc4:	02000002 	andeq	r0, r0, #2	; 0x2
        11bfc8:	03300000 	teqeq	r0, #0	; 0x0
        11bfcc:	03a00001 	moveq	r0, #1	; 0x1
        11bfd0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        11bfd4:	e1a01005 	mov	r1, r5
        11bfd8:	e1a00004 	mov	r0, r4
        11bfdc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        11bfe0:	ea660fe9 	b	1a9ff8c <TContainerView::$RealDoCommand(RefVar const &)>
    */
}

/**
 * Symbol: TMathExpView::RealDraw(TRect &)
 * Address: 0011bfe4
 */
TMathExpView::RealDraw(TRect &) {
    /*
        11bfe4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMathExpView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)
 * Address: 0011bfe8
 */
TMathExpView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char) {
    /*
        11bfe8:	e1a0c00d 	mov	ip, sp
        11bfec:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        11bff0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11bff4:	e1a04000 	mov	r4, r0
        11bff8:	e1a00003 	mov	r0, r3
        11bffc:	e59b3004 	ldr	r3, [fp, #4]
        11c000:	e24dd004 	sub	sp, sp, #4	; 0x4
        11c004:	e20350ff 	and	r5, r3, #255	; 0xff
        11c008:	e1a03005 	mov	r3, r5
        11c00c:	e92d0008 	stmdb	sp!, {r3}
        11c010:	e1a03000 	mov	r3, r0
        11c014:	e1a00004 	mov	r0, r4
        11c018:	eb65eef3 	bl	1a97bec <TContainerView::$HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)>
        11c01c:	e28dd004 	add	sp, sp, #4	; 0x4
        11c020:	e1a0a000 	mov	sl, r0
        11c024:	e3350000 	teq	r5, #0	; 0x0
        11c028:	133a0000 	teqne	sl, #0	; 0x0
        11c02c:	0a000038 	beq	11c114 <TMathExpView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x12c>
        11c030:	e3a00002 	mov	r0, #2	; 0x2
        11c034:	eb6a9844 	bl	1bc214c <$AllocateRefHandle(long)>
        11c038:	e1a06000 	mov	r6, r0
        11c03c:	e3a05000 	mov	r5, #0	; 0x0
        11c040:	e5947020 	ldr	r7, [r4, #32]	; fField32
        11c044:	e5970000 	ldr	r0, [r7]
        11c048:	e3500000 	cmp	r0, #0	; 0x0
        11c04c:	da00002e 	ble	11c10c <TMathExpView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x124>
        11c050:	e59f00c4 	ldr	r0, [pc, #c4]	; 11c11c <TMathExpView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x134>
        11c054:	e58d0000 	str	r0, [sp]
        11c058:	e1a01805 	mov	r1, r5, lsl #16
        11c05c:	e1a01841 	mov	r1, r1, asr #16
        11c060:	e1a00007 	mov	r0, r7
        11c064:	eb6b28b6 	bl	1be6344 <CList::$At(long)>
        11c068:	e1a08000 	mov	r8, r0
        11c06c:	eb6ab51d 	bl	1bc94e8 <TView::$DataFrame(void)>
        11c070:	eb6a9835 	bl	1bc214c <$AllocateRefHandle(long)>
        11c074:	e1a09000 	mov	r9, r0
        11c078:	e59f00a0 	ldr	r0, [pc, #a0]	; 11c120 <TMathExpView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x138>
        11c07c:	e5900000 	ldr	r0, [r0]
        11c080:	e5901000 	ldr	r1, [r0]
        11c084:	e5990000 	ldr	r0, [r9]
        11c088:	eb6aa074 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        11c08c:	e5860000 	str	r0, [r6]
        11c090:	e1a00009 	mov	r0, r9
        11c094:	eb6a9c48 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        11c098:	e5960000 	ldr	r0, [r6]
        11c09c:	e3300002 	teq	r0, #2	; 0x2
        11c0a0:	0a000015 	beq	11c0fc <TMathExpView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x114>
        11c0a4:	e3100003 	tst	r0, #3	; 0x3
        11c0a8:	01a00140 	moveq	r0, r0, asr #2
        11c0ac:	0a000000 	beq	11c0b4 <TMathExpView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0xcc>
        11c0b0:	eb6a9819 	bl	1bc211c <$_RINTError(long)>
        11c0b4:	e3300000 	teq	r0, #0	; 0x0
        11c0b8:	0a00000f 	beq	11c0fc <TMathExpView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x114>
        11c0bc:	e5b82004 	ldr	r2, [r8, #4]!
        11c0c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        11c0c4:	e59d0004 	ldr	r0, [sp, #4]
        11c0c8:	e1a01004 	mov	r1, r4
        11c0cc:	e5908000 	ldr	r8, [r0]
        11c0d0:	e3a0003f 	mov	r0, #63	; 0x3f
        11c0d4:	eb662899 	bl	1aa6340 <$MakeCommand(unsigned long, TResponder *, long)>
        11c0d8:	eb6a981b 	bl	1bc214c <$AllocateRefHandle(long)>
        11c0dc:	e58d0000 	str	r0, [sp]
        11c0e0:	e1a0100d 	mov	r1, sp
        11c0e4:	e1a00008 	mov	r0, r8
        11c0e8:	eb65d1d2 	bl	1a90838 <TApplication::$DispatchCommand(RefVar const &)>
        11c0ec:	e59d0000 	ldr	r0, [sp]
        11c0f0:	eb6a9c31 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        11c0f4:	e28dd004 	add	sp, sp, #4	; 0x4
        11c0f8:	e2455001 	sub	r5, r5, #1	; 0x1
        11c0fc:	e2855001 	add	r5, r5, #1	; 0x1
        11c100:	e5970000 	ldr	r0, [r7]
        11c104:	e1500005 	cmp	r0, r5
        11c108:	caffffd2 	bgt	11c058 <TMathExpView::HandleScrub(TRect const &, long, TUnitPublic *, unsigned char)+0x70>
        11c10c:	e1a00006 	mov	r0, r6
        11c110:	eb6a9c29 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        11c114:	e1a0000a 	mov	r0, sl
        11c118:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11c11c:	0c1054ac 	ldceq	4, cr5, [r0], -#688
        11c120:	00683318 	rsbeq	r3, r8, r8, lsl r3
    */
}

/**
 * Symbol: TMathExpView::GetContext(void)
 * Address: 0011c124
 */
TMathExpView::GetContext(void) {
    /*
        11c124:	e5901000 	ldr	r1, [r0]
        11c128:	e281ff59 	add	pc, r1, #356	; 0x164
    */
}

