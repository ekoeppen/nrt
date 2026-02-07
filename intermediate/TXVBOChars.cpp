#include "include/TXVBOChars.h"

/**
 * Symbol: TXVBOChars::__ct(RefVar const &)
 * Address: 0023ebb0
 */
TXVBOChars::TXVBOChars(RefVar const &) {
    /*
        23ebb0:	e1a0c00d 	mov	ip, sp
        23ebb4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23ebb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ebbc:	e1b04000 	movs	r4, r0
        23ebc0:	e1a05001 	mov	r5, r1
        23ebc4:	1a000003 	bne	23ebd8 <TXVBOChars::__ct(RefVar const &)+0x28>
        23ebc8:	e3a00018 	mov	r0, #24	; 0x18
        23ebcc:	eb663ed9 	bl	1bce738 <$__nw(unsigned int)>
        23ebd0:	e1b04000 	movs	r4, r0
        23ebd4:	0a000011 	beq	23ec20 <TXVBOChars::__ct(RefVar const &)+0x70>
        23ebd8:	e1a00004 	mov	r0, r4
        23ebdc:	e3a01c02 	mov	r1, #512	; 0x200
        23ebe0:	eb6521ef 	bl	1b873a4 <TXChunkedChars::$__ct(int)>
        23ebe4:	e3a00002 	mov	r0, #2	; 0x2
        23ebe8:	eb660d57 	bl	1bc214c <$AllocateRefHandle(long)>
        23ebec:	e3a06000 	mov	r6, #0	; 0x0
        23ebf0:	e5840010 	str	r0, [r4, #16]	; fField16
        23ebf4:	e5a06004 	str	r6, [r0, #4]!	; fField4
        23ebf8:	e3a00002 	mov	r0, #2	; 0x2
        23ebfc:	eb660d52 	bl	1bc214c <$AllocateRefHandle(long)>
        23ec00:	e5840014 	str	r0, [r4, #20]
        23ec04:	e5a06004 	str	r6, [r0, #4]!	; fField4
        23ec08:	e59f0018 	ldr	r0, [pc, #18]	; 23ec28 <TXVBOChars::__ct(RefVar const &)+0x78>
        23ec0c:	e5840000 	str	r0, [r4]
        23ec10:	e5951000 	ldr	r1, [r5]
        23ec14:	e5911000 	ldr	r1, [r1]
        23ec18:	e5940014 	ldr	r0, [r4, #20]
        23ec1c:	e5801000 	str	r1, [r0]
        23ec20:	e1a00004 	mov	r0, r4
        23ec24:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        23ec28:	0001afe4 	andeq	sl, r1, r4, ror #31
    */
}

/**
 * Symbol: TXVBOChars::SetCharsVBO(RefVar const &)
 * Address: 0023ec2c
 */
TXVBOChars::SetCharsVBO(RefVar const &) {
    /*
        23ec2c:	e1a0c00d 	mov	ip, sp
        23ec30:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23ec34:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ec38:	e1a04001 	mov	r4, r1
        23ec3c:	e24dd004 	sub	sp, sp, #4	; 0x4
        23ec40:	e5942000 	ldr	r2, [r4]
        23ec44:	e5922000 	ldr	r2, [r2]
        23ec48:	e5901010 	ldr	r1, [r0, #16]	; fField16
        23ec4c:	e2805014 	add	r5, r0, #20	; 0x14
        23ec50:	e3a00002 	mov	r0, #2	; 0x2
        23ec54:	e5812000 	str	r2, [r1]
        23ec58:	eb660d3b 	bl	1bc214c <$AllocateRefHandle(long)>
        23ec5c:	e58d0000 	str	r0, [sp]
        23ec60:	e1a0000d 	mov	r0, sp
        23ec64:	e1a01004 	mov	r1, r4
        23ec68:	eb60199f 	bl	1a452ec <$FGetBinaryStore>
        23ec6c:	e5951000 	ldr	r1, [r5]
        23ec70:	e5810000 	str	r0, [r1]
        23ec74:	e59d0000 	ldr	r0, [sp]
        23ec78:	eb66114f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23ec7c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXVBOChars::GetCharsVBO(void)
 * Address: 0023ed64
 */
TXVBOChars::GetCharsVBO(void) {
    /*
        23ed64:	e1a0c00d 	mov	ip, sp
        23ed68:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23ed6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ed70:	e1a04000 	mov	r4, r0
        23ed74:	e2800010 	add	r0, r0, #16	; 0x10
        23ed78:	e1a05000 	mov	r5, r0
        23ed7c:	e5900000 	ldr	r0, [r0]
        23ed80:	e5900000 	ldr	r0, [r0]
        23ed84:	e3300002 	teq	r0, #2	; 0x2
        23ed88:	1a00001b 	bne	23edfc <TXVBOChars::GetCharsVBO(void)+0x98>
        23ed8c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        23ed90:	e28f0f1c 	add	r0, pc, #112	; 0x70
        23ed94:	eb66194d 	bl	1bc52d0 <$MakeString(char const *)>
        23ed98:	eb660ceb 	bl	1bc214c <$AllocateRefHandle(long)>
        23ed9c:	e1a06005 	mov	r6, r5
        23eda0:	e58d0008 	str	r0, [sp, #8]
        23eda4:	e3a00002 	mov	r0, #2	; 0x2
        23eda8:	eb660ce7 	bl	1bc214c <$AllocateRefHandle(long)>
        23edac:	e58d0000 	str	r0, [sp]
        23edb0:	e1a0300d 	mov	r3, sp
        23edb4:	e92d0008 	stmdb	sp!, {r3}
        23edb8:	e3a00000 	mov	r0, #0	; 0x0
        23edbc:	eb660ce2 	bl	1bc214c <$AllocateRefHandle(long)>
        23edc0:	e58d0008 	str	r0, [sp, #8]
        23edc4:	e28d2008 	add	r2, sp, #8	; 0x8
        23edc8:	e2840014 	add	r0, r4, #20	; 0x14
        23edcc:	e28d300c 	add	r3, sp, #12	; 0xc
        23edd0:	e59f1044 	ldr	r1, [pc, #44]	; 23ee1c <TXVBOChars::GetCharsVBO(void)+0xb8>
        23edd4:	eb601936 	bl	1a452b4 <$FLBAllocCompressed>
        23edd8:	e5961000 	ldr	r1, [r6]
        23eddc:	e5810000 	str	r0, [r1]
        23ede0:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        23ede4:	eb6610f4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23ede8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        23edec:	eb6610f2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23edf0:	e59d0008 	ldr	r0, [sp, #8]
        23edf4:	eb6610f0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23edf8:	e28dd00c 	add	sp, sp, #12	; 0xc
        23edfc:	e5950000 	ldr	r0, [r5]
        23ee00:	e5900000 	ldr	r0, [r0]
        23ee04:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        23ee08:	544c5a53 	strplb	r5, [ip], -#2643
        23ee0c:	746f7265 	strvcbt	r7, [pc], #265	; 23ee14 <TXVBOChars::GetCharsVBO(void)+0xb0>
        23ee10:	436f6d70 	cmnmi	pc, #7168	; 0x1c00
        23ee14:	616e6465 	cmnvs	lr, r5, ror #8
        23ee18:	72000000 	andvc	r0, r0, #0	; 0x0
        23ee1c:	00684ac0 	rsbeq	r4, r8, r0, asr #21
    */
}

/**
 * Symbol: TXVBOChars::GetChunkPtr(long, unsigned char, unsigned char)
 * Address: 0023ee20
 */
TXVBOChars::GetChunkPtr(long, unsigned char, unsigned char) {
    /*
        23ee20:	e1a0c00d 	mov	ip, sp
        23ee24:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23ee28:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ee2c:	e1a04001 	mov	r4, r1
        23ee30:	e5900010 	ldr	r0, [r0, #16]	; fField16
        23ee34:	e5900000 	ldr	r0, [r0]
        23ee38:	eb660cc7 	bl	1bc215c <$BinaryData(long)>
        23ee3c:	e0800504 	add	r0, r0, r4, lsl #10
        23ee40:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXVBOChars::AllocateChunks(long, long)
 * Address: 0023ee44
 */
TXVBOChars::AllocateChunks(long, long) {
    /*
        23ee44:	e1a0c00d 	mov	ip, sp
        23ee48:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        23ee4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ee50:	e1a06000 	mov	r6, r0
        23ee54:	e1a05001 	mov	r5, r1
        23ee58:	e1a04002 	mov	r4, r2
        23ee5c:	e3520001 	cmp	r2, #1	; 0x1
        23ee60:	c3a00033 	movgt	r0, #51	; 0x33
        23ee64:	cb6214e6 	blgt	1ac4204 <$BusyBoxSend(long)>
        23ee68:	e3a07000 	mov	r7, #0	; 0x0
        23ee6c:	e52d706c 	str	r7, [sp, -#108]!
        23ee70:	e28d0008 	add	r0, sp, #8	; 0x8
        23ee74:	eb65cebe 	bl	1bb2974 <$setjmp>
        23ee78:	e3300000 	teq	r0, #0	; 0x0
        23ee7c:	e1a0000d 	mov	r0, sp
        23ee80:	1a000010 	bne	23eec8 <TXVBOChars::AllocateChunks(long, long)+0x84>
        23ee84:	eb66847c 	bl	1be007c <$AddExceptionHandler>
        23ee88:	e24dd004 	sub	sp, sp, #4	; 0x4
        23ee8c:	e1a00006 	mov	r0, r6
        23ee90:	eb6552c1 	bl	1b9399c <TXVBOChars::$GetCharsVBO(void)>
        23ee94:	eb660cac 	bl	1bc214c <$AllocateRefHandle(long)>
        23ee98:	e58d0000 	str	r0, [sp]
        23ee9c:	e1a0000d 	mov	r0, sp
        23eea0:	e1a02504 	mov	r2, r4, lsl #10
        23eea4:	e1a01505 	mov	r1, r5, lsl #10
        23eea8:	eb608892 	bl	1a610f8 <$MungeLargeBinary__FRC6RefVarlT2>
        23eeac:	e59d0000 	ldr	r0, [sp]
        23eeb0:	eb6610c1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        23eeb4:	e28dd004 	add	sp, sp, #4	; 0x4
        23eeb8:	e1a0000d 	mov	r0, sp
        23eebc:	eb66887d 	bl	1be10b8 <$ExitHandler>
        23eec0:	e1a00007 	mov	r0, r7
        23eec4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23eec8:	e2800060 	add	r0, r0, #96	; 0x60
        23eecc:	eb6294ea 	bl	1ae427c <$GetExceptionErr(Exception *)>
        23eed0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXVBOChars::RemoveChunks(long, long)
 * Address: 0023eed4
 */
TXVBOChars::RemoveChunks(long, long) {
    /*
        23eed4:	e1a0c00d 	mov	ip, sp
        23eed8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23eedc:	e24cb004 	sub	fp, ip, #4	; 0x4
        23eee0:	e1a06000 	mov	r6, r0
        23eee4:	e1a05001 	mov	r5, r1
        23eee8:	e1a04002 	mov	r4, r2
        23eeec:	e3520001 	cmp	r2, #1	; 0x1
        23eef0:	c3a00033 	movgt	r0, #51	; 0x33
        23eef4:	cb6214c2 	blgt	1ac4204 <$BusyBoxSend(long)>
        23eef8:	e3a00000 	mov	r0, #0	; 0x0
        23eefc:	e52d006c 	str	r0, [sp, -#108]!
        23ef00:	e28d0008 	add	r0, sp, #8	; 0x8
        23ef04:	eb65ce9a 	bl	1bb2974 <$setjmp>
        23ef08:	e3300000 	teq	r0, #0	; 0x0
        23ef0c:	1a000006 	bne	23ef2c <TXVBOChars::RemoveChunks(long, long)+0x58>
        23ef10:	e1a0000d 	mov	r0, sp
        23ef14:	eb668458 	bl	1be007c <$AddExceptionHandler>
        23ef18:	e1a00504 	mov	r0, r4, lsl #10
        23ef1c:	e2602000 	rsb	r2, r0, #0	; 0x0
        23ef20:	e1a01505 	mov	r1, r5, lsl #10
        23ef24:	e2860010 	add	r0, r6, #16	; 0x10
        23ef28:	eb608872 	bl	1a610f8 <$MungeLargeBinary__FRC6RefVarlT2>
        23ef2c:	e1a0000d 	mov	r0, sp
        23ef30:	eb668860 	bl	1be10b8 <$ExitHandler>
        23ef34:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXVBOChars::MungeChunk(long, long, long, TXTextDescriptor *, long)
 * Address: 0023ef38
 */
TXVBOChars::MungeChunk(long, long, long, TXTextDescriptor *, long) {
    /*
        23ef38:	e1a0c00d 	mov	ip, sp
        23ef3c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        23ef40:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ef44:	e1a06000 	mov	r6, r0
        23ef48:	e1a05001 	mov	r5, r1
        23ef4c:	e1a00002 	mov	r0, r2
        23ef50:	e1a04003 	mov	r4, r3
        23ef54:	e99b0104 	ldmib	fp, {r2, r8}
        23ef58:	e1a03008 	mov	r3, r8
        23ef5c:	e92d000c 	stmdb	sp!, {r2, r3}
        23ef60:	e1a03004 	mov	r3, r4
        23ef64:	e1a02000 	mov	r2, r0
        23ef68:	e1a00006 	mov	r0, r6
        23ef6c:	eb652116 	bl	1b873cc <TXChunkedChars::$MungeChunk(long, long, long, TXTextDescriptor *, long)>
        23ef70:	e28dd008 	add	sp, sp, #8	; 0x8
        23ef74:	e1b09000 	movs	r9, r0
        23ef78:	1a000010 	bne	23efc0 <TXVBOChars::MungeChunk(long, long, long, TXTextDescriptor *, long)+0x88>
        23ef7c:	e1580004 	cmp	r8, r4
        23ef80:	aa00000e 	bge	23efc0 <TXVBOChars::MungeChunk(long, long, long, TXTextDescriptor *, long)+0x88>
        23ef84:	e1a01005 	mov	r1, r5
        23ef88:	e1a00006 	mov	r0, r6
        23ef8c:	e3a03000 	mov	r3, #0	; 0x0
        23ef90:	e3a02000 	mov	r2, #0	; 0x0
        23ef94:	e596c000 	ldr	ip, [r6]
        23ef98:	e1a0e00f 	mov	lr, pc
        23ef9c:	e28cf034 	add	pc, ip, #52	; 0x34
        23efa0:	e1a07000 	mov	r7, r0
        23efa4:	e1a01005 	mov	r1, r5
        23efa8:	e5b60008 	ldr	r0, [r6, #8]!
        23efac:	eb651cd9 	bl	1b86318 <TXRanges::$GetRangeLen( const(long))>
        23efb0:	e0870080 	add	r0, r7, r0, lsl #1
        23efb4:	e0441008 	sub	r1, r4, r8
        23efb8:	e1a01081 	mov	r1, r1, lsl #1
        23efbc:	eb668416 	bl	1be001c <$ZeroBytes>
        23efc0:	e1a00009 	mov	r0, r9
        23efc4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

