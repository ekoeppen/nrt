#include "include/TPixelObj.h"

/**
 * Symbol: TPixelObj::__ct(void)
 * Address: 0003e7b8
 */
TPixelObj::TPixelObj(void) {
    /*
         3e7b8:	e1a0c00d 	mov	ip, sp
         3e7bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         3e7c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         3e7c4:	e1b04000 	movs	r4, r0
         3e7c8:	1a000003 	bne	3e7dc <TPixelObj::__ct(void)+0x24>
         3e7cc:	e3a00034 	mov	r0, #52	; 0x34
         3e7d0:	eb6e3fd8 	bl	1bce738 <$__nw(unsigned int)>
         3e7d4:	e1b04000 	movs	r4, r0
         3e7d8:	0a000009 	beq	3e804 <TPixelObj::__ct(void)+0x4c>
         3e7dc:	e3a00002 	mov	r0, #2	; 0x2
         3e7e0:	eb6e0e59 	bl	1bc214c <$AllocateRefHandle(long)>
         3e7e4:	e5840000 	str	r0, [r4]
         3e7e8:	e3a00001 	mov	r0, #1	; 0x1
         3e7ec:	e584002c 	str	r0, [r4, #44]	; fField44
         3e7f0:	e3a00000 	mov	r0, #0	; 0x0
         3e7f4:	e5840028 	str	r0, [r4, #40]	; fField40
         3e7f8:	e5c40030 	strb	r0, [r4, #48]	; fField48
         3e7fc:	e2840004 	add	r0, r4, #4	; 0x4
         3e800:	e5840020 	str	r0, [r4, #32]	; fField32
         3e804:	e1a00004 	mov	r0, r4
         3e808:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPixelObj::__dt(void)
 * Address: 0003e80c
 */
TPixelObj::~TPixelObj(void) {
    /*
         3e80c:	e1a0c00d 	mov	ip, sp
         3e810:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3e814:	e24cb004 	sub	fp, ip, #4	; 0x4
         3e818:	e1a04000 	mov	r4, r0
         3e81c:	e1a05001 	mov	r5, r1
         3e820:	e5900028 	ldr	r0, [r0, #40]	; fField40
         3e824:	e3300000 	teq	r0, #0	; 0x0
         3e828:	1b6e8a21 	blne	1be10b4 <$DisposPtr>
         3e82c:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
         3e830:	e3300000 	teq	r0, #0	; 0x0
         3e834:	15940000 	ldrne	r0, [r4]
         3e838:	15900000 	ldrne	r0, [r0]
         3e83c:	1b6e270b 	blne	1bc8470 <$UnlockRef(long)>
         3e840:	e5940000 	ldr	r0, [r4]
         3e844:	eb6e125c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3e848:	e3150001 	tst	r5, #1	; 0x1
         3e84c:	11a00004 	movne	r0, r4
         3e850:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         3e854:	1a6e3ba1 	bne	1bcd6e0 <$__dl(void *)>
         3e858:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TPixelObj::Init(RefVar const &)
 * Address: 0003f614
 */
TPixelObj::Init(RefVar const &) {
    /*
         3f614:	e1a0c00d 	mov	ip, sp
         3f618:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         3f61c:	e24cb004 	sub	fp, ip, #4	; 0x4
         3f620:	e1a04000 	mov	r4, r0
         3f624:	e1a05001 	mov	r5, r1
         3f628:	e5910000 	ldr	r0, [r1]
         3f62c:	e5900000 	ldr	r0, [r0]
         3f630:	e5941000 	ldr	r1, [r4]
         3f634:	e5810000 	str	r0, [r1]
         3f638:	e59f1090 	ldr	r1, [pc, #90]	; 3f6d0 <TPixelObj::Init(RefVar const &)+0xbc>
         3f63c:	e1a00005 	mov	r0, r5
         3f640:	eb6e1712 	bl	1bc5290 <$IsInstance__FRC6RefVarT1>
         3f644:	e3300000 	teq	r0, #0	; 0x0
         3f648:	0a000005 	beq	3f664 <TPixelObj::Init(RefVar const &)+0x50>
         3f64c:	e59f0080 	ldr	r0, [pc, #80]	; 3f6d4 <TPixelObj::Init(RefVar const &)+0xc0>
         3f650:	e5900000 	ldr	r0, [r0]
         3f654:	e3a02000 	mov	r2, #0	; 0x0
         3f658:	e3e01062 	mvn	r1, #98	; 0x62
         3f65c:	e2411c22 	sub	r1, r1, #8704	; 0x2200
         3f660:	eb6e8ecd 	bl	1be319c <$Throw>
         3f664:	e1a00005 	mov	r0, r5
         3f668:	eb6ed0c8 	bl	1bf3990 <$IsFrame(RefVar const &)>
         3f66c:	e3300000 	teq	r0, #0	; 0x0
         3f670:	0a000026 	beq	3f710 <TPixelObj::Init(RefVar const &)+0xfc>
         3f674:	e59f105c 	ldr	r1, [pc, #5c]	; 3f6d8 <TPixelObj::Init(RefVar const &)+0xc4>
         3f678:	e1a00005 	mov	r0, r5
         3f67c:	eb6e1703 	bl	1bc5290 <$IsInstance__FRC6RefVarT1>
         3f680:	e3300000 	teq	r0, #0	; 0x0
         3f684:	0a00001d 	beq	3f700 <TPixelObj::Init(RefVar const &)+0xec>
         3f688:	e59f004c 	ldr	r0, [pc, #4c]	; 3f6dc <TPixelObj::Init(RefVar const &)+0xc8>
         3f68c:	e5900000 	ldr	r0, [r0]
         3f690:	e5901000 	ldr	r1, [r0]
         3f694:	e5950000 	ldr	r0, [r5]
         3f698:	e5900000 	ldr	r0, [r0]
         3f69c:	eb6e12ef 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         3f6a0:	eb6e0aa9 	bl	1bc214c <$AllocateRefHandle(long)>
         3f6a4:	e1a06000 	mov	r6, r0
         3f6a8:	e5900000 	ldr	r0, [r0]
         3f6ac:	e3300002 	teq	r0, #2	; 0x2
         3f6b0:	1a00000b 	bne	3f6e4 <TPixelObj::Init(RefVar const &)+0xd0>
         3f6b4:	e59f0024 	ldr	r0, [pc, #24]	; 3f6e0 <TPixelObj::Init(RefVar const &)+0xcc>
         3f6b8:	e5900000 	ldr	r0, [r0]
         3f6bc:	e5901000 	ldr	r1, [r0]
         3f6c0:	e5950000 	ldr	r0, [r5]
         3f6c4:	e5900000 	ldr	r0, [r0]
         3f6c8:	eb6e12e4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         3f6cc:	ea000006 	b	3f6ec <TPixelObj::Init(RefVar const &)+0xd8>
         3f6d0:	00683ec0 	rsbeq	r3, r8, r0, asr #29
         3f6d4:	003712e0 	eoreqs	r1, r7, r0, ror #5
         3f6d8:	006820c8 	rsbeq	r2, r8, r8, asr #1
         3f6dc:	00682500 	rsbeq	r2, r8, r0, lsl #10
         3f6e0:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         3f6e4:	e1a00004 	mov	r0, r4
         3f6e8:	eb6a823c 	bl	1adffe0 <TPixelObj::$GetFramBitmap(void)>
         3f6ec:	e5941000 	ldr	r1, [r4]
         3f6f0:	e5810000 	str	r0, [r1]
         3f6f4:	e1a00006 	mov	r0, r6
         3f6f8:	eb6e0eaf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         3f6fc:	ea000003 	b	3f710 <TPixelObj::Init(RefVar const &)+0xfc>
         3f700:	e1a00004 	mov	r0, r4
         3f704:	eb6a8235 	bl	1adffe0 <TPixelObj::$GetFramBitmap(void)>
         3f708:	e5941000 	ldr	r1, [r4]
         3f70c:	e5810000 	str	r0, [r1]
         3f710:	e5940000 	ldr	r0, [r4]
         3f714:	e5900000 	ldr	r0, [r0]
         3f718:	eb6e16e5 	bl	1bc52b4 <$LockRef(long)>
         3f71c:	e3a00001 	mov	r0, #1	; 0x1
         3f720:	e5c40030 	strb	r0, [r4, #48]	; fField48
         3f724:	e59f101c 	ldr	r1, [pc, #1c]	; 3f748 <TPixelObj::Init(RefVar const &)+0x134>
         3f728:	e1a00004 	mov	r0, r4
         3f72c:	eb6e16d7 	bl	1bc5290 <$IsInstance__FRC6RefVarT1>
         3f730:	e3300000 	teq	r0, #0	; 0x0
         3f734:	e5940000 	ldr	r0, [r4]
         3f738:	e5900000 	ldr	r0, [r0]
         3f73c:	0a000002 	beq	3f74c <TPixelObj::Init(RefVar const &)+0x138>
         3f740:	eb6e0a85 	bl	1bc215c <$BinaryData(long)>
         3f744:	ea000004 	b	3f75c <TPixelObj::Init(RefVar const &)+0x148>
         3f748:	00683ee0 	rsbeq	r3, r8, r0, ror #29
         3f74c:	eb6e0a82 	bl	1bc215c <$BinaryData(long)>
         3f750:	e1a01000 	mov	r1, r0
         3f754:	e1a00004 	mov	r0, r4
         3f758:	eb6a8221 	bl	1adffe4 <TPixelObj::$FramBitMapToPixMap(FramBitmap const &)>
         3f75c:	e5a40020 	str	r0, [r4, #32]!	; fField32
         3f760:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TPixelObj::Init(RefVar const &, unsigned char)
 * Address: 00040f28
 */
TPixelObj::Init(RefVar const &, unsigned char) {
    /*
         40f28:	e1a0c00d 	mov	ip, sp
         40f2c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         40f30:	e24cb004 	sub	fp, ip, #4	; 0x4
         40f34:	e1a04000 	mov	r4, r0
         40f38:	e1a05001 	mov	r5, r1
         40f3c:	e20270ff 	and	r7, r2, #255	; 0xff
         40f40:	e3a06000 	mov	r6, #0	; 0x0
         40f44:	e5910000 	ldr	r0, [r1]
         40f48:	e5900000 	ldr	r0, [r0]
         40f4c:	e5941000 	ldr	r1, [r4]
         40f50:	e5810000 	str	r0, [r1]
         40f54:	e3a00000 	mov	r0, #0	; 0x0
         40f58:	e5840024 	str	r0, [r4, #36]	; fField36
         40f5c:	e59f1090 	ldr	r1, [pc, #90]	; 40ff4 <TPixelObj::Init(RefVar const &, unsigned char)+0xcc>
         40f60:	e1a00005 	mov	r0, r5
         40f64:	eb6e10c9 	bl	1bc5290 <$IsInstance__FRC6RefVarT1>
         40f68:	e3300000 	teq	r0, #0	; 0x0
         40f6c:	0a000005 	beq	40f88 <TPixelObj::Init(RefVar const &, unsigned char)+0x60>
         40f70:	e59f0080 	ldr	r0, [pc, #80]	; 40ff8 <TPixelObj::Init(RefVar const &, unsigned char)+0xd0>
         40f74:	e5900000 	ldr	r0, [r0]
         40f78:	e3a02000 	mov	r2, #0	; 0x0
         40f7c:	e3e01062 	mvn	r1, #98	; 0x62
         40f80:	e2411c22 	sub	r1, r1, #8704	; 0x2200
         40f84:	eb6e8884 	bl	1be319c <$Throw>
         40f88:	e24dd004 	sub	sp, sp, #4	; 0x4
         40f8c:	e59f0068 	ldr	r0, [pc, #68]	; 40ffc <TPixelObj::Init(RefVar const &, unsigned char)+0xd4>
         40f90:	e5900000 	ldr	r0, [r0]
         40f94:	e5901000 	ldr	r1, [r0]
         40f98:	e5950000 	ldr	r0, [r5]
         40f9c:	e5900000 	ldr	r0, [r0]
         40fa0:	eb6e0cae 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         40fa4:	eb6e0468 	bl	1bc214c <$AllocateRefHandle(long)>
         40fa8:	e58d0000 	str	r0, [sp]
         40fac:	e5900000 	ldr	r0, [r0]
         40fb0:	e3300002 	teq	r0, #2	; 0x2
         40fb4:	0a000003 	beq	40fc8 <TPixelObj::Init(RefVar const &, unsigned char)+0xa0>
         40fb8:	e59f1040 	ldr	r1, [pc, #40]	; 41000 <TPixelObj::Init(RefVar const &, unsigned char)+0xd8>	; fField40
         40fbc:	e1a0000d 	mov	r0, sp
         40fc0:	eb6e10b2 	bl	1bc5290 <$IsInstance__FRC6RefVarT1>
         40fc4:	e20060ff 	and	r6, r0, #255	; 0xff
         40fc8:	e5940000 	ldr	r0, [r4]
         40fcc:	e5900000 	ldr	r0, [r0]
         40fd0:	eb6e10b7 	bl	1bc52b4 <$LockRef(long)>
         40fd4:	e3a00001 	mov	r0, #1	; 0x1
         40fd8:	e5c40030 	strb	r0, [r4, #48]	; fField48
         40fdc:	e3360000 	teq	r6, #0	; 0x0
         40fe0:	0a000007 	beq	41004 <TPixelObj::Init(RefVar const &, unsigned char)+0xdc>
         40fe4:	e59d0000 	ldr	r0, [sp]
         40fe8:	e5900000 	ldr	r0, [r0]
         40fec:	eb6e045a 	bl	1bc215c <$BinaryData(long)>
         40ff0:	ea000028 	b	41098 <TPixelObj::Init(RefVar const &, unsigned char)+0x170>
         40ff4:	00683ec0 	rsbeq	r3, r8, r0, asr #29
         40ff8:	003712e0 	eoreqs	r1, r7, r0, ror #5
         40ffc:	006827a0 	rsbeq	r2, r8, r0, lsr #15
         41000:	00683ee0 	rsbeq	r3, r8, r0, ror #29
         41004:	e59f009c 	ldr	r0, [pc, #9c]	; 410a8 <TPixelObj::Init(RefVar const &, unsigned char)+0x180>
         41008:	e5900000 	ldr	r0, [r0]
         4100c:	e5901000 	ldr	r1, [r0]
         41010:	e5950000 	ldr	r0, [r5]
         41014:	e5900000 	ldr	r0, [r0]
         41018:	eb6e0c90 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         4101c:	e59d1000 	ldr	r1, [sp]
         41020:	e5810000 	str	r0, [r1]
         41024:	e3300002 	teq	r0, #2	; 0x2
         41028:	0a00000d 	beq	41064 <TPixelObj::Init(RefVar const &, unsigned char)+0x13c>
         4102c:	e24dd004 	sub	sp, sp, #4	; 0x4
         41030:	e28d1004 	add	r1, sp, #4	; 0x4
         41034:	e1a0000d 	mov	r0, sp
         41038:	eb6e0026 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         4103c:	e1a0000d 	mov	r0, sp
         41040:	eb6e0433 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         41044:	e1a01000 	mov	r1, r0
         41048:	e1a00004 	mov	r0, r4
         4104c:	eb6a7be4 	bl	1adffe4 <TPixelObj::$FramBitMapToPixMap(FramBitmap const &)>
         41050:	e5840024 	str	r0, [r4, #36]	; fField36
         41054:	e1a0000d 	mov	r0, sp
         41058:	e3a01000 	mov	r1, #0	; 0x0
         4105c:	eb6e0427 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         41060:	e28dd004 	add	sp, sp, #4	; 0x4
         41064:	e3370000 	teq	r7, #0	; 0x0
         41068:	1a000002 	bne	41078 <TPixelObj::Init(RefVar const &, unsigned char)+0x150>
         4106c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         41070:	e3300000 	teq	r0, #0	; 0x0
         41074:	1a000008 	bne	4109c <TPixelObj::Init(RefVar const &, unsigned char)+0x174>
         41078:	e1a00004 	mov	r0, r4
         4107c:	eb6a7bd7 	bl	1adffe0 <TPixelObj::$GetFramBitmap(void)>
         41080:	e5940000 	ldr	r0, [r4]
         41084:	e5900000 	ldr	r0, [r0]
         41088:	eb6e0433 	bl	1bc215c <$BinaryData(long)>
         4108c:	e1a01000 	mov	r1, r0
         41090:	e1a00004 	mov	r0, r4
         41094:	eb6a7bd2 	bl	1adffe4 <TPixelObj::$FramBitMapToPixMap(FramBitmap const &)>
         41098:	e5a40020 	str	r0, [r4, #32]!	; fField32
         4109c:	e59d0000 	ldr	r0, [sp]
         410a0:	eb6e0845 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         410a4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         410a8:	006837b0 	streqh	r3, [r8], -#112
    */
}

/**
 * Symbol: TPixelObj::GetFramBitmap(void)
 * Address: 000410ac
 */
TPixelObj::GetFramBitmap(void) {
    /*
         410ac:	e1a0c00d 	mov	ip, sp
         410b0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         410b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         410b8:	e1a04000 	mov	r4, r0
         410bc:	e24dd008 	sub	sp, sp, #8	; 0x8
         410c0:	e3a00002 	mov	r0, #2	; 0x2
         410c4:	eb6e0420 	bl	1bc214c <$AllocateRefHandle(long)>
         410c8:	e1a05000 	mov	r5, r0
         410cc:	e3a00002 	mov	r0, #2	; 0x2
         410d0:	eb6e041d 	bl	1bc214c <$AllocateRefHandle(long)>
         410d4:	e58d0004 	str	r0, [sp, #4]
         410d8:	e59f0044 	ldr	r0, [pc, #44]	; 41124 <TPixelObj::GetFramBitmap(void)+0x78>	; fField44
         410dc:	e5900000 	ldr	r0, [r0]
         410e0:	e5901000 	ldr	r1, [r0]
         410e4:	e5940000 	ldr	r0, [r4]
         410e8:	e5900000 	ldr	r0, [r0]
         410ec:	eb6e0c5b 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         410f0:	eb6e0415 	bl	1bc214c <$AllocateRefHandle(long)>
         410f4:	e58d0000 	str	r0, [sp]
         410f8:	e5900000 	ldr	r0, [r0]
         410fc:	e3300002 	teq	r0, #2	; 0x2
         41100:	1a000009 	bne	4112c <TPixelObj::GetFramBitmap(void)+0x80>
         41104:	e59f001c 	ldr	r0, [pc, #1c]	; 41128 <TPixelObj::GetFramBitmap(void)+0x7c>
         41108:	e5900000 	ldr	r0, [r0]
         4110c:	e5901000 	ldr	r1, [r0]
         41110:	e5940000 	ldr	r0, [r4]
         41114:	e5900000 	ldr	r0, [r0]
         41118:	eb6e0c50 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         4111c:	e5850000 	str	r0, [r5]
         41120:	ea0000bf 	b	41424 <TPixelObj::GetFramBitmap(void)+0x378>
         41124:	00682500 	rsbeq	r2, r8, r0, lsl #10
         41128:	006820d8 	ldreqd	r2, [r8], -#8
         4112c:	e24dd004 	sub	sp, sp, #4	; 0x4
         41130:	e1a0000d 	mov	r0, sp
         41134:	eb6eb99a 	bl	1bef7a4 <$GetPort(GrafPort **)>
         41138:	e59d0000 	ldr	r0, [sp]
         4113c:	e5900010 	ldr	r0, [r0, #16]
         41140:	e20070ff 	and	r7, r0, #255	; 0xff
         41144:	e28d0004 	add	r0, sp, #4	; 0x4
         41148:	eb6eca0f 	bl	1bf398c <$IsArray(RefVar const &)>
         4114c:	e59fa0a4 	ldr	sl, [pc, #a4]	; 411f8 <TPixelObj::GetFramBitmap(void)+0x14c>
         41150:	e59f90a4 	ldr	r9, [pc, #a4]	; 411fc <TPixelObj::GetFramBitmap(void)+0x150>
         41154:	e3300000 	teq	r0, #0	; 0x0
         41158:	0a00004f 	beq	4129c <TPixelObj::GetFramBitmap(void)+0x1f0>
         4115c:	e3a06902 	mov	r6, #32768	; 0x8000
         41160:	e2466001 	sub	r6, r6, #1	; 0x1
         41164:	e3a08000 	mov	r8, #0	; 0x0
         41168:	e24dd030 	sub	sp, sp, #48	; 0x30
         4116c:	e28d1034 	add	r1, sp, #52	; 0x34
         41170:	e1a0000d 	mov	r0, sp
         41174:	e3a02000 	mov	r2, #0	; 0x0
         41178:	eb6dffdc 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
         4117c:	e1a0000d 	mov	r0, sp
         41180:	eb6e0815 	bl	1bc31dc <TObjectIterator::$Done(void)>
         41184:	e3300000 	teq	r0, #0	; 0x0
         41188:	1a00003d 	bne	41284 <TPixelObj::GetFramBitmap(void)+0x1d8>
         4118c:	e59a0000 	ldr	r0, [sl]
         41190:	e5901000 	ldr	r1, [r0]
         41194:	e59d0008 	ldr	r0, [sp, #8]
         41198:	e5900000 	ldr	r0, [r0]
         4119c:	eb6e0c2f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         411a0:	e3100003 	tst	r0, #3	; 0x3
         411a4:	01a00140 	moveq	r0, r0, asr #2
         411a8:	0a000000 	beq	411b0 <TPixelObj::GetFramBitmap(void)+0x104>
         411ac:	eb6e03da 	bl	1bc211c <$_RINTError(long)>
         411b0:	e1300007 	teq	r0, r7
         411b4:	1a000012 	bne	41204 <TPixelObj::GetFramBitmap(void)+0x158>
         411b8:	e584002c 	str	r0, [r4, #44]	; fField44
         411bc:	e5990000 	ldr	r0, [r9]
         411c0:	e5901000 	ldr	r1, [r0]
         411c4:	e59d0008 	ldr	r0, [sp, #8]
         411c8:	e5900000 	ldr	r0, [r0]
         411cc:	eb6e0c23 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         411d0:	e5850000 	str	r0, [r5]
         411d4:	e59f0024 	ldr	r0, [pc, #24]	; 41200 <TPixelObj::GetFramBitmap(void)+0x154>
         411d8:	e5900000 	ldr	r0, [r0]
         411dc:	e5901000 	ldr	r1, [r0]
         411e0:	e59d0008 	ldr	r0, [sp, #8]
         411e4:	e5900000 	ldr	r0, [r0]
         411e8:	eb6e0c1c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         411ec:	e59d1038 	ldr	r1, [sp, #56]
         411f0:	e5810000 	str	r0, [r1]
         411f4:	ea000022 	b	41284 <TPixelObj::GetFramBitmap(void)+0x1d8>
         411f8:	006820c0 	rsbeq	r2, r8, r0, asr #1
         411fc:	00682350 	rsbeq	r2, r8, r0, asr r3
         41200:	00682508 	rsbeq	r2, r8, r8, lsl #10
         41204:	e1570000 	cmp	r7, r0
         41208:	b1500006 	cmplt	r0, r6
         4120c:	b1a06000 	movlt	r6, r0
         41210:	ba000006 	blt	41230 <TPixelObj::GetFramBitmap(void)+0x184>
         41214:	e246cc7f 	sub	ip, r6, #32512	; 0x7f00
         41218:	e33c00ff 	teq	ip, #255	; 0xff
         4121c:	1a000012 	bne	4126c <TPixelObj::GetFramBitmap(void)+0x1c0>
         41220:	e1570000 	cmp	r7, r0
         41224:	c1500008 	cmpgt	r0, r8
         41228:	da00000f 	ble	4126c <TPixelObj::GetFramBitmap(void)+0x1c0>
         4122c:	e1a08000 	mov	r8, r0
         41230:	e584002c 	str	r0, [r4, #44]	; fField44
         41234:	e5990000 	ldr	r0, [r9]
         41238:	e5901000 	ldr	r1, [r0]
         4123c:	e59d0008 	ldr	r0, [sp, #8]
         41240:	e5900000 	ldr	r0, [r0]
         41244:	eb6e0c05 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         41248:	e5850000 	str	r0, [r5]
         4124c:	e51f0054 	ldr	r0, [pc, #ffffffac]	; 41200 <TPixelObj::GetFramBitmap(void)+0x154>
         41250:	e5900000 	ldr	r0, [r0]
         41254:	e5901000 	ldr	r1, [r0]
         41258:	e59d0008 	ldr	r0, [sp, #8]
         4125c:	e5900000 	ldr	r0, [r0]
         41260:	eb6e0bfe 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         41264:	e59d1038 	ldr	r1, [sp, #56]
         41268:	e5810000 	str	r0, [r1]
         4126c:	e1a0000d 	mov	r0, sp
         41270:	eb6e101c 	bl	1bc52e8 <TObjectIterator::$Next(void)>
         41274:	e1a0000d 	mov	r0, sp
         41278:	eb6e07d7 	bl	1bc31dc <TObjectIterator::$Done(void)>
         4127c:	e3300000 	teq	r0, #0	; 0x0
         41280:	0affffc1 	beq	4118c <TPixelObj::GetFramBitmap(void)+0xe0>
         41284:	e1a0000d 	mov	r0, sp
         41288:	e3a01000 	mov	r1, #0	; 0x0
         4128c:	e1a0e00f 	mov	lr, pc
         41290:	e59df000 	ldr	pc, [sp]
         41294:	e28dd030 	add	sp, sp, #48	; 0x30
         41298:	ea000017 	b	412fc <TPixelObj::GetFramBitmap(void)+0x250>
         4129c:	e59a0000 	ldr	r0, [sl]
         412a0:	e5901000 	ldr	r1, [r0]
         412a4:	e59d0004 	ldr	r0, [sp, #4]
         412a8:	e5900000 	ldr	r0, [r0]
         412ac:	eb6e0beb 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         412b0:	e3100003 	tst	r0, #3	; 0x3
         412b4:	01a00140 	moveq	r0, r0, asr #2
         412b8:	0a000000 	beq	412c0 <TPixelObj::GetFramBitmap(void)+0x214>
         412bc:	eb6e0396 	bl	1bc211c <$_RINTError(long)>
         412c0:	e584002c 	str	r0, [r4, #44]	; fField44
         412c4:	e5990000 	ldr	r0, [r9]
         412c8:	e5901000 	ldr	r1, [r0]
         412cc:	e59d0004 	ldr	r0, [sp, #4]
         412d0:	e5900000 	ldr	r0, [r0]
         412d4:	eb6e0be1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         412d8:	e5850000 	str	r0, [r5]
         412dc:	e51f00e4 	ldr	r0, [pc, #ffffff1c]	; 41200 <TPixelObj::GetFramBitmap(void)+0x154>
         412e0:	e5900000 	ldr	r0, [r0]
         412e4:	e5901000 	ldr	r1, [r0]
         412e8:	e59d0004 	ldr	r0, [sp, #4]
         412ec:	e5900000 	ldr	r0, [r0]
         412f0:	eb6e0bda 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         412f4:	e59d1008 	ldr	r1, [sp, #8]
         412f8:	e5810000 	str	r0, [r1]
         412fc:	e594002c 	ldr	r0, [r4, #44]	; fField44
         41300:	e3500001 	cmp	r0, #1	; 0x1
         41304:	da000045 	ble	41420 <TPixelObj::GetFramBitmap(void)+0x374>
         41308:	e59d0008 	ldr	r0, [sp, #8]
         4130c:	e5900000 	ldr	r0, [r0]
         41310:	e3300002 	teq	r0, #2	; 0x2
         41314:	0a000041 	beq	41420 <TPixelObj::GetFramBitmap(void)+0x374>
         41318:	e24dd004 	sub	sp, sp, #4	; 0x4
         4131c:	e28d100c 	add	r1, sp, #12	; 0xc
         41320:	e1a0000d 	mov	r0, sp
         41324:	eb6dff6b 	bl	1bc10d8 <TObjectPtr::$__ct(RefVar const &)>
         41328:	e59d000c 	ldr	r0, [sp, #12]
         4132c:	e5900000 	ldr	r0, [r0]
         41330:	eb6e0fdd 	bl	1bc52ac <$Length(long)>
         41334:	e1a07000 	mov	r7, r0
         41338:	e3a00001 	mov	r0, #1	; 0x1
         4133c:	e594102c 	ldr	r1, [r4, #44]	; fField44
         41340:	e1a00110 	mov	r0, r0, lsl r1
         41344:	e1a06000 	mov	r6, r0
         41348:	eb6e837c 	bl	1be2140 <$NewPtr>
         4134c:	e5840028 	str	r0, [r4, #40]	; fField40
         41350:	e3300000 	teq	r0, #0	; 0x0
         41354:	0a00002d 	beq	41410 <TPixelObj::GetFramBitmap(void)+0x364>
         41358:	e1a08000 	mov	r8, r0
         4135c:	e3570000 	cmp	r7, #0	; 0x0
         41360:	b2877007 	addlt	r7, r7, #7	; 0x7
         41364:	e1a071c7 	mov	r7, r7, asr #3
         41368:	e1570006 	cmp	r7, r6
         4136c:	81a07006 	movhi	r7, r6
         41370:	eb6c3914 	bl	1b4f7c8 <$GetFgPattern(void)>
         41374:	e5900000 	ldr	r0, [r0]
         41378:	eb6f2ca2 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
         4137c:	e1a01000 	mov	r1, r0
         41380:	e3a00000 	mov	r0, #0	; 0x0
         41384:	e3560000 	cmp	r6, #0	; 0x0
         41388:	9a000004 	bls	413a0 <TPixelObj::GetFramBitmap(void)+0x2f4>
         4138c:	e5d12000 	ldrb	r2, [r1]
         41390:	e7c82000 	strb	r2, [r8, r0]
         41394:	e2800001 	add	r0, r0, #1	; 0x1
         41398:	e1500006 	cmp	r0, r6
         4139c:	3afffffa 	bcc	4138c <TPixelObj::GetFramBitmap(void)+0x2e0>
         413a0:	e1a0000d 	mov	r0, sp
         413a4:	eb6e035a 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
         413a8:	e1a09000 	mov	r9, r0
         413ac:	e3a06000 	mov	r6, #0	; 0x0
         413b0:	e3570000 	cmp	r7, #0	; 0x0
         413b4:	9a000015 	bls	41410 <TPixelObj::GetFramBitmap(void)+0x364>
         413b8:	e5b90002 	ldr	r0, [r9, #2]!
         413bc:	e1a00820 	mov	r0, r0, lsr #16
         413c0:	e1a00800 	mov	r0, r0, lsl #16
         413c4:	e1a00820 	mov	r0, r0, lsr #16
         413c8:	e5b91002 	ldr	r1, [r9, #2]!
         413cc:	e1a01821 	mov	r1, r1, lsr #16
         413d0:	e1a01801 	mov	r1, r1, lsl #16
         413d4:	e1a01821 	mov	r1, r1, lsr #16
         413d8:	e5b92002 	ldr	r2, [r9, #2]!
         413dc:	e1a02822 	mov	r2, r2, lsr #16
         413e0:	e2899002 	add	r9, r9, #2	; 0x2
         413e4:	e1a02802 	mov	r2, r2, lsl #16
         413e8:	e1a02822 	mov	r2, r2, lsr #16
         413ec:	e594302c 	ldr	r3, [r4, #44]	; fField44
         413f0:	e1a0c003 	mov	ip, r3
         413f4:	e92d0008 	stmdb	sp!, {r3}
         413f8:	eb6c51b3 	bl	1b55acc <$RGBtoGray__FUlN21lT4>
         413fc:	e28dd004 	add	sp, sp, #4	; 0x4
         41400:	e7c80006 	strb	r0, [r8, r6]
         41404:	e2866001 	add	r6, r6, #1	; 0x1
         41408:	e1560007 	cmp	r6, r7
         4140c:	3affffe9 	bcc	413b8 <TPixelObj::GetFramBitmap(void)+0x30c>
         41410:	e1a0000d 	mov	r0, sp
         41414:	e3a01000 	mov	r1, #0	; 0x0
         41418:	eb6e0338 	bl	1bc2100 <TObjectPtr::$__dt(void)>
         4141c:	e28dd004 	add	sp, sp, #4	; 0x4
         41420:	e28dd004 	add	sp, sp, #4	; 0x4
         41424:	e5954000 	ldr	r4, [r5]
         41428:	e59d0000 	ldr	r0, [sp]
         4142c:	eb6e0762 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         41430:	e59d0004 	ldr	r0, [sp, #4]
         41434:	eb6e0760 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         41438:	e1a00005 	mov	r0, r5
         4143c:	eb6e075e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         41440:	e1a00004 	mov	r0, r4
         41444:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPixelObj::FramBitMapToPixMap(FramBitmap const &)
 * Address: 00041448
 */
TPixelObj::FramBitMapToPixMap(FramBitmap const &) {
    /*
         41448:	e2812010 	add	r2, r1, #16	; 0x10
         4144c:	e5903020 	ldr	r3, [r0, #32]	; fField32
         41450:	e5832000 	str	r2, [r3]
         41454:	e5913004 	ldr	r3, [r1, #4]
         41458:	e1a03823 	mov	r3, r3, lsr #16
         4145c:	e5902020 	ldr	r2, [r0, #32]	; fField32
         41460:	e5c23005 	strb	r3, [r2, #5]
         41464:	e1a03443 	mov	r3, r3, asr #8
         41468:	e5c23004 	strb	r3, [r2, #4]
         4146c:	e5902020 	ldr	r2, [r0, #32]	; fField32
         41470:	e2822008 	add	r2, r2, #8	; 0x8
         41474:	e2811008 	add	r1, r1, #8	; 0x8
         41478:	e8911008 	ldmia	r1, {r3, ip}
         4147c:	e8821008 	stmia	r2, {r3, ip}
         41480:	e590102c 	ldr	r1, [r0, #44]	; fField44
         41484:	e2812101 	add	r2, r1, #1073741824	; 0x40000000
         41488:	e5901020 	ldr	r1, [r0, #32]	; fField32
         4148c:	e3a03048 	mov	r3, #72	; 0x48
         41490:	e5a12010 	str	r2, [r1, #16]!
         41494:	e5902020 	ldr	r2, [r0, #32]	; fField32
         41498:	e5c23015 	strb	r3, [r2, #21]
         4149c:	e3a01000 	mov	r1, #0	; 0x0
         414a0:	e5c21014 	strb	r1, [r2, #20]
         414a4:	e5902020 	ldr	r2, [r0, #32]	; fField32
         414a8:	e5c23017 	strb	r3, [r2, #23]
         414ac:	e5c21016 	strb	r1, [r2, #22]
         414b0:	e5901028 	ldr	r1, [r0, #40]	; fField40
         414b4:	e5902020 	ldr	r2, [r0, #32]	; fField32
         414b8:	e5a21018 	str	r1, [r2, #24]!
         414bc:	e5901028 	ldr	r1, [r0, #40]	; fField40
         414c0:	e3310000 	teq	r1, #0	; 0x0
         414c4:	0a000003 	beq	414d8 <TPixelObj::FramBitMapToPixMap(FramBitmap const &)+0x90>
         414c8:	e5901020 	ldr	r1, [r0, #32]	; fField32
         414cc:	e5b12010 	ldr	r2, [r1, #16]!
         414d0:	e3822302 	orr	r2, r2, #134217728	; 0x8000000
         414d4:	e5812000 	str	r2, [r1]
         414d8:	e5900020 	ldr	r0, [r0, #32]	; fField32
         414dc:	e1a0f00e 	mov	pc, lr
    */
}

