#include "DDKIncludes/Frames/objects.h"

/**
 * Symbol: TObjectIterator::__ct(RefVar const &, int)
 * Address: 0031ac44
 */
TObjectIterator::TObjectIterator(RefArg obj, int includeSiblings = false) {
    /*
        31ac44:	e1a0c00d 	mov	ip, sp
        31ac48:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        31ac4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        31ac50:	e1b04000 	movs	r4, r0
        31ac54:	e1a05001 	mov	r5, r1
        31ac58:	e1a06002 	mov	r6, r2
        31ac5c:	1a000005 	bne	31ac78 <TObjectIterator::__ct(RefVar const &, int)+0x34>
        31ac60:	e3a00030 	mov	r0, #48	; 0x30
        31ac64:	eb62ceb3 	bl	1bce738 <$__nw(unsigned int)>
        31ac68:	e1b04000 	movs	r4, r0
        31ac6c:	1a000001 	bne	31ac78 <TObjectIterator::__ct(RefVar const &, int)+0x34>
        31ac70:	e1a00004 	mov	r0, r4
        31ac74:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31ac78:	e3a00002 	mov	r0, #2	; 0x2
        31ac7c:	eb629d32 	bl	1bc214c <$AllocateRefHandle(long)>
        31ac80:	e3a07000 	mov	r7, #0	; 0x0
        31ac84:	e5840004 	str	r0, [r4, #4]	; TObjectIterator
        31ac88:	e5a07004 	str	r7, [r0, #4]!	; TObjectIterator
        31ac8c:	e3a00002 	mov	r0, #2	; 0x2
        31ac90:	eb629d2d 	bl	1bc214c <$AllocateRefHandle(long)>
        31ac94:	e5840008 	str	r0, [r4, #8]	; RefHandle
        31ac98:	e5a07004 	str	r7, [r0, #4]!	; TObjectIterator
        31ac9c:	e3a00002 	mov	r0, #2	; 0x2
        31aca0:	eb629d29 	bl	1bc214c <$AllocateRefHandle(long)>
        31aca4:	e584000c 	str	r0, [r4, #12]	; fTag
        31aca8:	e5a07004 	str	r7, [r0, #4]!	; TObjectIterator
        31acac:	e3a00002 	mov	r0, #2	; 0x2
        31acb0:	eb629d25 	bl	1bc214c <$AllocateRefHandle(long)>
        31acb4:	e584001c 	str	r0, [r4, #28]	; fIndex
        31acb8:	e5a07004 	str	r7, [r0, #4]!	; TObjectIterator
        31acbc:	e59f0030 	ldr	r0, [pc, #30]	; 31acf4 <TObjectIterator::__ct(RefVar const &, int)+0xb0>
        31acc0:	e5840000 	str	r0, [r4]
        31acc4:	e1a00004 	mov	r0, r4
        31acc8:	eb5d190b 	bl	1a610fc <$OnStack(void const *)>
        31accc:	e3300000 	teq	r0, #0	; 0x0
        31acd0:	0a000009 	beq	31acfc <TObjectIterator::__ct(RefVar const &, int)+0xb8>
        31acd4:	e3a00001 	mov	r0, #1	; 0x1
        31acd8:	e5840020 	str	r0, [r4, #32]	; fLength
        31acdc:	e59f0014 	ldr	r0, [pc, #14]	; 31acf8 <TObjectIterator::__ct(RefVar const &, int)+0xb4>
        31ace0:	e584002c 	str	r0, [r4, #44]	; value_var
        31ace4:	e5844028 	str	r4, [r4, #40]	; TObjectIterator
        31ace8:	e2840020 	add	r0, r4, #32	; 0x20
        31acec:	eb6314e2 	bl	1be007c <$AddExceptionHandler>
        31acf0:	ea000002 	b	31ad00 <TObjectIterator::__ct(RefVar const &, int)+0xbc>
        31acf4:	0001e120 	andeq	lr, r1, r0, lsr #2
        31acf8:	01a62100 	moveq	r2, r0, lsl #2
        31acfc:	e584702c 	str	r7, [r4, #44]	; value_var
        31ad00:	e5950000 	ldr	r0, [r5]
        31ad04:	e5900000 	ldr	r0, [r0]
        31ad08:	e3100001 	tst	r0, #1	; 0x1
        31ad0c:	0a000002 	beq	31ad1c <TObjectIterator::__ct(RefVar const &, int)+0xd8>
        31ad10:	eb62a976 	bl	1bc52f0 <$ObjectFlags(long)>
        31ad14:	e3100001 	tst	r0, #1	; 0x1
        31ad18:	1a000003 	bne	31ad2c <TObjectIterator::__ct(RefVar const &, int)+0xe8>
        31ad1c:	e1a01005 	mov	r1, r5
        31ad20:	e3a00fb9 	mov	r0, #740	; 0x2e4
        31ad24:	e2400903 	sub	r0, r0, #49152	; 0xc000
        31ad28:	eb63b5cb 	bl	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        31ad2c:	e5951000 	ldr	r1, [r5]
        31ad30:	e5911000 	ldr	r1, [r1]
        31ad34:	e594000c 	ldr	r0, [r4, #12]	; fTag
        31ad38:	e5801000 	str	r1, [r0]
        31ad3c:	e5846010 	str	r6, [r4, #16]	; fValue
        31ad40:	e5950000 	ldr	r0, [r5]
        31ad44:	e5900000 	ldr	r0, [r0]
        31ad48:	eb62a968 	bl	1bc52f0 <$ObjectFlags(long)>
        31ad4c:	e3100002 	tst	r0, #2	; 0x2
        31ad50:	0a000007 	beq	31ad74 <TObjectIterator::__ct(RefVar const &, int)+0x130>
        31ad54:	e284601c 	add	r6, r4, #28	; 0x1c
        31ad58:	e5950000 	ldr	r0, [r5]
        31ad5c:	e5900000 	ldr	r0, [r0]
        31ad60:	eb62a963 	bl	1bc52f4 <$ObjectPtr(long)>
        31ad64:	e5900008 	ldr	r0, [r0, #8]	; RefHandle
        31ad68:	e5961000 	ldr	r1, [r6]
        31ad6c:	e5810000 	str	r0, [r1]
        31ad70:	ea000002 	b	31ad80 <TObjectIterator::__ct(RefVar const &, int)+0x13c>
        31ad74:	e3a01002 	mov	r1, #2	; 0x2
        31ad78:	e594001c 	ldr	r0, [r4, #28]	; fIndex
        31ad7c:	e5801000 	str	r1, [r0]
        31ad80:	e5950000 	ldr	r0, [r5]
        31ad84:	e5900000 	ldr	r0, [r0]
        31ad88:	eb62a947 	bl	1bc52ac <$Length(long)>
        31ad8c:	e5840018 	str	r0, [r4, #24]	; fIncludeSiblings
        31ad90:	e3e00000 	mvn	r0, #0	; 0x0
        31ad94:	e5840014 	str	r0, [r4, #20]	; fObj
        31ad98:	e1a00004 	mov	r0, r4
        31ad9c:	eb62a951 	bl	1bc52e8 <TObjectIterator::$Next(void)>
        31ada0:	eaffffb2 	b	31ac70 <TObjectIterator::__ct(RefVar const &, int)+0x2c>
    */
}

/**
 * Symbol: TObjectIterator::__dt(void)
 * Address: 0031ae00
 */
TObjectIterator::~TObjectIterator() {
    /*
        31ae00:	e1a0c00d 	mov	ip, sp
        31ae04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31ae08:	e24cb004 	sub	fp, ip, #4	; 0x4
        31ae0c:	e1a04000 	mov	r4, r0
        31ae10:	e1a05001 	mov	r5, r1
        31ae14:	e59f0044 	ldr	r0, [pc, #44]	; 31ae60 <TObjectIterator::__dt(void)+0x60>	; value_var
        31ae18:	e5840000 	str	r0, [r4]
        31ae1c:	e594002c 	ldr	r0, [r4, #44]	; value_var
        31ae20:	e3300000 	teq	r0, #0	; 0x0
        31ae24:	12840020 	addne	r0, r4, #32	; 0x20
        31ae28:	1b631ccd 	blne	1be2164 <$RemoveExceptionHandler>
        31ae2c:	e594001c 	ldr	r0, [r4, #28]	; fIndex
        31ae30:	eb62a0e1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31ae34:	e594000c 	ldr	r0, [r4, #12]	; fTag
        31ae38:	eb62a0df 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31ae3c:	e5940008 	ldr	r0, [r4, #8]	; RefHandle
        31ae40:	eb62a0dd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31ae44:	e5940004 	ldr	r0, [r4, #4]	; TObjectIterator
        31ae48:	eb62a0db 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31ae4c:	e3150001 	tst	r5, #1	; 0x1
        31ae50:	11a00004 	movne	r0, r4
        31ae54:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        31ae58:	1a62ca20 	bne	1bcd6e0 <$__dl(void *)>
        31ae5c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        31ae60:	0001e120 	andeq	lr, r1, r0, lsr #2
    */
}

/**
 * Symbol: TObjectIterator::Next(void)
 * Address: 0031ae64
 */
int			TObjectIterator::Next(void) {
    /*
        31ae64:	e1a0c00d 	mov	ip, sp
        31ae68:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        31ae6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        31ae70:	e1a04000 	mov	r4, r0
        31ae74:	e280000c 	add	r0, r0, #12	; 0xc
        31ae78:	e1a07000 	mov	r7, r0
        31ae7c:	e5900000 	ldr	r0, [r0]
        31ae80:	e5900000 	ldr	r0, [r0]
        31ae84:	eb62a908 	bl	1bc52ac <$Length(long)>
        31ae88:	e5941018 	ldr	r1, [r4, #24]	; fIncludeSiblings
        31ae8c:	e1510000 	cmp	r1, r0
        31ae90:	d5941014 	ldrle	r1, [r4, #20]	; fObj
        31ae94:	d2811001 	addle	r1, r1, #1	; 0x1
        31ae98:	d5841014 	strle	r1, [r4, #20]	; fObj
        31ae9c:	e5840018 	str	r0, [r4, #24]	; fIncludeSiblings
        31aea0:	e1a02000 	mov	r2, r0
        31aea4:	e5941014 	ldr	r1, [r4, #20]	; fObj
        31aea8:	e2845004 	add	r5, r4, #4	; 0x4
        31aeac:	e2846008 	add	r6, r4, #8	; 0x8
        31aeb0:	e284001c 	add	r0, r4, #28	; 0x1c
        31aeb4:	e1510002 	cmp	r1, r2
        31aeb8:	ba000029 	blt	31af64 <TObjectIterator::Next(void)+0x100>
        31aebc:	e3a08000 	mov	r8, #0	; 0x0
        31aec0:	e5941010 	ldr	r1, [r4, #16]	; fValue
        31aec4:	e3310000 	teq	r1, #0	; 0x0
        31aec8:	15900000 	ldrne	r0, [r0]
        31aecc:	15900000 	ldrne	r0, [r0]
        31aed0:	13300002 	teqne	r0, #2	; 0x2
        31aed4:	0a00001b 	beq	31af48 <TObjectIterator::Next(void)+0xe4>
        31aed8:	e24dd004 	sub	sp, sp, #4	; 0x4
        31aedc:	e59f0054 	ldr	r0, [pc, #54]	; 31af38 <TObjectIterator::Next(void)+0xd4>
        31aee0:	e5900000 	ldr	r0, [r0]
        31aee4:	e5901000 	ldr	r1, [r0]
        31aee8:	e5970000 	ldr	r0, [r7]
        31aeec:	e5900000 	ldr	r0, [r0]
        31aef0:	eb62a4da 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        31aef4:	eb629c94 	bl	1bc214c <$AllocateRefHandle(long)>
        31aef8:	e58d0000 	str	r0, [sp]
        31aefc:	e5900000 	ldr	r0, [r0]
        31af00:	e3300002 	teq	r0, #2	; 0x2
        31af04:	0a00000c 	beq	31af3c <TObjectIterator::Next(void)+0xd8>
        31af08:	e1a0100d 	mov	r1, sp
        31af0c:	e1a00004 	mov	r0, r4
        31af10:	eb62ad0c 	bl	1bc6348 <TObjectIterator::$Reset(RefVar const &)>
        31af14:	e1a00004 	mov	r0, r4
        31af18:	eb62a0af 	bl	1bc31dc <TObjectIterator::$Done(void)>
        31af1c:	e3300000 	teq	r0, #0	; 0x0
        31af20:	13a04000 	movne	r4, #0	; 0x0
        31af24:	03a04001 	moveq	r4, #1	; 0x1
        31af28:	e59d0000 	ldr	r0, [sp]
        31af2c:	eb62a0a2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31af30:	e1a00004 	mov	r0, r4
        31af34:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        31af38:	00685390 	streqb	r5, [r8], -#48	; tag_var
        31af3c:	e59d0000 	ldr	r0, [sp]
        31af40:	eb62a09d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31af44:	e28dd004 	add	sp, sp, #4	; 0x4
        31af48:	e3a00002 	mov	r0, #2	; 0x2
        31af4c:	e5961000 	ldr	r1, [r6]
        31af50:	e5810000 	str	r0, [r1]
        31af54:	e5951000 	ldr	r1, [r5]
        31af58:	e5810000 	str	r0, [r1]
        31af5c:	e1a00008 	mov	r0, r8
        31af60:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        31af64:	e5902000 	ldr	r2, [r0]
        31af68:	e5922000 	ldr	r2, [r2]
        31af6c:	e3320002 	teq	r2, #2	; 0x2
        31af70:	01a00101 	moveq	r0, r1, lsl #2
        31af74:	0a000001 	beq	31af80 <TObjectIterator::Next(void)+0x11c>
        31af78:	e3a02000 	mov	r2, #0	; 0x0
        31af7c:	eb5c9416 	bl	1a3ffdc <$GetTag(RefVar const &, long, long *)>
        31af80:	e5951000 	ldr	r1, [r5]
        31af84:	e5810000 	str	r0, [r1]
        31af88:	e5970000 	ldr	r0, [r7]
        31af8c:	e5900000 	ldr	r0, [r0]
        31af90:	e5b41014 	ldr	r1, [r4, #20]!	; fObj
        31af94:	eb62a4ae 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        31af98:	e5961000 	ldr	r1, [r6]
        31af9c:	e5810000 	str	r0, [r1]
        31afa0:	e3a00001 	mov	r0, #1	; 0x1
        31afa4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectIterator::Done(void)
 * Address: 0031afa8
 */
int			TObjectIterator::Done(void) {
    /*
        31afa8:	e1a0c00d 	mov	ip, sp
        31afac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31afb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        31afb4:	e1a04000 	mov	r4, r0
        31afb8:	e280000c 	add	r0, r0, #12	; 0xc
        31afbc:	e1a05000 	mov	r5, r0
        31afc0:	e5900000 	ldr	r0, [r0]
        31afc4:	e5900000 	ldr	r0, [r0]
        31afc8:	eb62a8b7 	bl	1bc52ac <$Length(long)>
        31afcc:	e5840018 	str	r0, [r4, #24]	; fIncludeSiblings
        31afd0:	e5941010 	ldr	r1, [r4, #16]	; fValue
        31afd4:	e3310000 	teq	r1, #0	; 0x0
        31afd8:	1594101c 	ldrne	r1, [r4, #28]	; fIndex
        31afdc:	15911000 	ldrne	r1, [r1]
        31afe0:	13310002 	teqne	r1, #2	; 0x2
        31afe4:	e5b41014 	ldr	r1, [r4, #20]!	; fObj
        31afe8:	0a00000b 	beq	31b01c <TObjectIterator::Done(void)+0x74>
        31afec:	e1510000 	cmp	r1, r0
        31aff0:	ba00000d 	blt	31b02c <TObjectIterator::Done(void)+0x84>
        31aff4:	e59f001c 	ldr	r0, [pc, #1c]	; 31b018 <TObjectIterator::Done(void)+0x70>
        31aff8:	e5900000 	ldr	r0, [r0]
        31affc:	e5901000 	ldr	r1, [r0]
        31b000:	e5950000 	ldr	r0, [r5]
        31b004:	e5900000 	ldr	r0, [r0]
        31b008:	eb62a494 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        31b00c:	e3300002 	teq	r0, #2	; 0x2
        31b010:	1a000005 	bne	31b02c <TObjectIterator::Done(void)+0x84>
        31b014:	ea000002 	b	31b024 <TObjectIterator::Done(void)+0x7c>
        31b018:	00685390 	streqb	r5, [r8], -#48	; tag_var
        31b01c:	e1510000 	cmp	r1, r0
        31b020:	ba000001 	blt	31b02c <TObjectIterator::Done(void)+0x84>
        31b024:	e3a00001 	mov	r0, #1	; 0x1
        31b028:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        31b02c:	e3a00000 	mov	r0, #0	; 0x0
        31b030:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectIterator::Reset(void)
 * Address: 0031b034
 */
void		TObjectIterator::Reset(RefArg newObj) {
    /*
        31b034:	e3e01000 	mvn	r1, #0	; 0x0
        31b038:	e5801014 	str	r1, [r0, #20]	; fObj
        31b03c:	ea62a8a9 	b	1bc52e8 <TObjectIterator::$Next(void)>
    */
}

/**
 * Symbol: TObjectIterator::Reset(RefVar const &)
 * Address: 0031b040
 */
void		TObjectIterator::Reset(RefArg newObj) {
    /*
        31b040:	e1a0c00d 	mov	ip, sp
        31b044:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        31b048:	e24cb004 	sub	fp, ip, #4	; 0x4
        31b04c:	e1a04000 	mov	r4, r0
        31b050:	e1a05001 	mov	r5, r1
        31b054:	e5911000 	ldr	r1, [r1]
        31b058:	e5911000 	ldr	r1, [r1]
        31b05c:	e590000c 	ldr	r0, [r0, #12]	; fTag
        31b060:	e5801000 	str	r1, [r0]
        31b064:	e5950000 	ldr	r0, [r5]
        31b068:	e5900000 	ldr	r0, [r0]
        31b06c:	eb62a89f 	bl	1bc52f0 <$ObjectFlags(long)>
        31b070:	e3100002 	tst	r0, #2	; 0x2
        31b074:	e284601c 	add	r6, r4, #28	; 0x1c
        31b078:	03a00002 	moveq	r0, #2	; 0x2
        31b07c:	0a000003 	beq	31b090 <TObjectIterator::Reset(RefVar const &)+0x50>
        31b080:	e5950000 	ldr	r0, [r5]
        31b084:	e5900000 	ldr	r0, [r0]
        31b088:	eb62a899 	bl	1bc52f4 <$ObjectPtr(long)>
        31b08c:	e5900008 	ldr	r0, [r0, #8]	; RefHandle
        31b090:	e5961000 	ldr	r1, [r6]
        31b094:	e5810000 	str	r0, [r1]
        31b098:	e5950000 	ldr	r0, [r5]
        31b09c:	e5900000 	ldr	r0, [r0]
        31b0a0:	eb62a881 	bl	1bc52ac <$Length(long)>
        31b0a4:	e5840018 	str	r0, [r4, #24]	; fIncludeSiblings
        31b0a8:	e3e00000 	mvn	r0, #0	; 0x0
        31b0ac:	e5840014 	str	r0, [r4, #20]	; fObj
        31b0b0:	e1a00004 	mov	r0, r4
        31b0b4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        31b0b8:	ea62a88a 	b	1bc52e8 <TObjectIterator::$Next(void)>
    */
}

/**
 * Symbol: TObjectIterator::Tag(void)
 * Address: 0031c9d8
 */
Ref			TObjectIterator::Tag(void) {
    /*
        31c9d8:	e5900004 	ldr	r0, [r0, #4]	; TObjectIterator
        31c9dc:	e5900000 	ldr	r0, [r0]
        31c9e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TObjectIterator::Value(void)
 * Address: 0031c9e4
 */
Ref			TObjectIterator::Value(void) {
    /*
        31c9e4:	e5900008 	ldr	r0, [r0, #8]	; RefHandle
        31c9e8:	e5900000 	ldr	r0, [r0]
        31c9ec:	e1a0f00e 	mov	pc, lr
    */
}

