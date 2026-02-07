#include "include/T32BitFlashRange.h"

/**
 * Symbol: T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)
 * Address: 000c2abc
 */
T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *) {
    /*
         c2abc:	e1a0c00d 	mov	ip, sp
         c2ac0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c2ac4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2ac8:	e1a04000 	mov	r4, r0
         c2acc:	e1a07001 	mov	r7, r1
         c2ad0:	e1a06002 	mov	r6, r2
         c2ad4:	e1a05003 	mov	r5, r3
         c2ad8:	eb669650 	bl	1a68420 <$GetBankControlRegister__20TBankControlRegisterSFv>
         c2adc:	e3e01000 	mvn	r1, #0	; 0x0
         c2ae0:	eb66964d 	bl	1a6841c <TBankControlRegister::$ConfigureFlashBankDataSize(eMemoryLane)>
         c2ae4:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c2ae8:	e0471000 	sub	r1, r7, r0
         c2aec:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c2af0:	e0810000 	add	r0, r1, r0
         c2af4:	e1a0a000 	mov	sl, r0
         c2af8:	e2009003 	and	r9, r0, #3	; 0x3
         c2afc:	e2798004 	rsbs	r8, r9, #4	; 0x4
         c2b00:	03a03000 	moveq	r3, #0	; 0x0
         c2b04:	13a03001 	movne	r3, #1	; 0x1
         c2b08:	e1560008 	cmp	r6, r8
         c2b0c:	9a000003 	bls	c2b20 <T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x64>
         c2b10:	e0461008 	sub	r1, r6, r8
         c2b14:	e0833121 	add	r3, r3, r1, lsr #2
         c2b18:	e3110003 	tst	r1, #3	; 0x3
         c2b1c:	12833001 	addne	r3, r3, #1	; 0x1
         c2b20:	e3c07003 	bic	r7, r0, #3	; 0x3
         c2b24:	e1a02007 	mov	r2, r7
         c2b28:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c2b2c:	e1a01004 	mov	r1, r4
         c2b30:	eb0b0725 	bl	3847cc <TFlashDriver::BeginWrite(TFlashRange &, unsigned long, unsigned long)>
         c2b34:	e3390000 	teq	r9, #0	; 0x0
         c2b38:	0a000026 	beq	c2bd8 <T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x11c>
         c2b3c:	e3150003 	tst	r5, #3	; 0x3
         c2b40:	05950000 	ldreq	r0, [r5]
         c2b44:	0a000001 	beq	c2b50 <T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x94>
         c2b48:	e1a00005 	mov	r0, r5
         c2b4c:	ebfffecf 	bl	c2690 <FetchReallyUnalignedWord(char *)>
         c2b50:	e1a01189 	mov	r1, r9, lsl #3
         c2b54:	e1a01130 	mov	r1, r0, lsr r1
         c2b58:	e3a02000 	mov	r2, #0	; 0x0
         c2b5c:	e3390001 	teq	r9, #1	; 0x1
         c2b60:	03e024ff 	mvneq	r2, #-16777216	; 0xff000000
         c2b64:	0a000005 	beq	c2b80 <T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0xc4>
         c2b68:	e3390002 	teq	r9, #2	; 0x2
         c2b6c:	03a02801 	moveq	r2, #65536	; 0x10000
         c2b70:	02422001 	subeq	r2, r2, #1	; 0x1
         c2b74:	0a000001 	beq	c2b80 <T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0xc4>
         c2b78:	e3390003 	teq	r9, #3	; 0x3
         c2b7c:	03a020ff 	moveq	r2, #255	; 0xff
         c2b80:	e1560008 	cmp	r6, r8
         c2b84:	2a00000a 	bcs	c2bb4 <T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0xf8>
         c2b88:	e3360001 	teq	r6, #1	; 0x1
         c2b8c:	1a000005 	bne	c2ba8 <T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0xec>
         c2b90:	e3380002 	teq	r8, #2	; 0x2
         c2b94:	11a02822 	movne	r2, r2, lsr #16
         c2b98:	11a02802 	movne	r2, r2, lsl #16
         c2b9c:	11a01821 	movne	r1, r1, lsr #16
         c2ba0:	11a01801 	movne	r1, r1, lsl #16
         c2ba4:	1a000001 	bne	c2bb0 <T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0xf4>
         c2ba8:	e3c220ff 	bic	r2, r2, #255	; 0xff
         c2bac:	e3c110ff 	bic	r1, r1, #255	; 0xff
         c2bb0:	e1a08006 	mov	r8, r6
         c2bb4:	e1a03004 	mov	r3, r4
         c2bb8:	e92d0008 	stmdb	sp!, {r3}
         c2bbc:	e1a03007 	mov	r3, r7
         c2bc0:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c2bc4:	eb0b06f1 	bl	384790 <TFlashDriver::Write(unsigned long, unsigned long, unsigned long, TFlashRange &)>
         c2bc8:	e28dd004 	add	sp, sp, #4	; 0x4
         c2bcc:	e0466008 	sub	r6, r6, r8
         c2bd0:	e2877004 	add	r7, r7, #4	; 0x4
         c2bd4:	e0855008 	add	r5, r5, r8
         c2bd8:	e3c68003 	bic	r8, r6, #3	; 0x3
         c2bdc:	e0466008 	sub	r6, r6, r8
         c2be0:	e3580000 	cmp	r8, #0	; 0x0
         c2be4:	9a000011 	bls	c2c30 <T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x174>
         c2be8:	e3150003 	tst	r5, #3	; 0x3
         c2bec:	05950000 	ldreq	r0, [r5]
         c2bf0:	0a000001 	beq	c2bfc <T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x140>
         c2bf4:	e1a00005 	mov	r0, r5
         c2bf8:	ebfffea4 	bl	c2690 <FetchReallyUnalignedWord(char *)>
         c2bfc:	e1a01000 	mov	r1, r0
         c2c00:	e1a03004 	mov	r3, r4
         c2c04:	e92d0008 	stmdb	sp!, {r3}
         c2c08:	e1a03007 	mov	r3, r7
         c2c0c:	e3e02000 	mvn	r2, #0	; 0x0
         c2c10:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c2c14:	eb0b06dd 	bl	384790 <TFlashDriver::Write(unsigned long, unsigned long, unsigned long, TFlashRange &)>
         c2c18:	e28dd004 	add	sp, sp, #4	; 0x4
         c2c1c:	e2488004 	sub	r8, r8, #4	; 0x4
         c2c20:	e2877004 	add	r7, r7, #4	; 0x4
         c2c24:	e2855004 	add	r5, r5, #4	; 0x4
         c2c28:	e3580000 	cmp	r8, #0	; 0x0
         c2c2c:	8affffed 	bhi	c2be8 <T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x12c>
         c2c30:	e3360000 	teq	r6, #0	; 0x0
         c2c34:	0a000010 	beq	c2c7c <T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x1c0>
         c2c38:	e2660004 	rsb	r0, r6, #4	; 0x4
         c2c3c:	e1a00180 	mov	r0, r0, lsl #3
         c2c40:	e3e01000 	mvn	r1, #0	; 0x0
         c2c44:	e1a06011 	mov	r6, r1, lsl r0
         c2c48:	e3150003 	tst	r5, #3	; 0x3
         c2c4c:	05950000 	ldreq	r0, [r5]
         c2c50:	0a000001 	beq	c2c5c <T32BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x1a0>
         c2c54:	e1a00005 	mov	r0, r5
         c2c58:	ebfffe8c 	bl	c2690 <FetchReallyUnalignedWord(char *)>
         c2c5c:	e0001006 	and	r1, r0, r6
         c2c60:	e1a03004 	mov	r3, r4
         c2c64:	e92d0008 	stmdb	sp!, {r3}
         c2c68:	e1a03007 	mov	r3, r7
         c2c6c:	e1a02006 	mov	r2, r6
         c2c70:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c2c74:	eb0b06c5 	bl	384790 <TFlashDriver::Write(unsigned long, unsigned long, unsigned long, TFlashRange &)>
         c2c78:	e28dd004 	add	sp, sp, #4	; 0x4
         c2c7c:	e1a0100a 	mov	r1, sl
         c2c80:	e1a00004 	mov	r0, r4
         c2c84:	e5942000 	ldr	r2, [r4]
         c2c88:	e1a0e00f 	mov	lr, pc
         c2c8c:	e282f008 	add	pc, r2, #8	; 0x8
         c2c90:	e1a02000 	mov	r2, r0
         c2c94:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c2c98:	e1a01004 	mov	r1, r4
         c2c9c:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         c2ca0:	ea0b06cc 	b	3847d8 <TFlashDriver::ReportWriteResult(TFlashRange &, unsigned long)>
    */
}

/**
 * Symbol: T32BitFlashRange::PrepareForBlockCommand(unsigned long)
 * Address: 000c2ca4
 */
T32BitFlashRange::PrepareForBlockCommand(unsigned long) {
    /*
         c2ca4:	e1a0c00d 	mov	ip, sp
         c2ca8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c2cac:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2cb0:	e1a04000 	mov	r4, r0
         c2cb4:	e1a05001 	mov	r5, r1
         c2cb8:	eb6695d8 	bl	1a68420 <$GetBankControlRegister__20TBankControlRegisterSFv>
         c2cbc:	e3e01000 	mvn	r1, #0	; 0x0
         c2cc0:	eb6695d5 	bl	1a6841c <TBankControlRegister::$ConfigureFlashBankDataSize(eMemoryLane)>
         c2cc4:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c2cc8:	e0450000 	sub	r0, r5, r0
         c2ccc:	e5b41010 	ldr	r1, [r4, #16]!	; fField16
         c2cd0:	e0800001 	add	r0, r0, r1
         c2cd4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: T32BitFlashRange::StartOfBlockWriteVirtualAddress( const(unsigned long))
 * Address: 000c2d40
 */
T32BitFlashRange::StartOfBlockWriteVirtualAddress( const(unsigned long)) {
    /*
         c2d40:	e1a0c00d 	mov	ip, sp
         c2d44:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c2d48:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2d4c:	e5902010 	ldr	r2, [r0, #16]	; fField16
         c2d50:	e1a05002 	mov	r5, r2
         c2d54:	e0411002 	sub	r1, r1, r2
         c2d58:	e590003c 	ldr	r0, [r0, #60]	; fField60
         c2d5c:	e1a04000 	mov	r4, r0
         c2d60:	eb6bbef8 	bl	1bb2948 <$__rt_udiv>
         c2d64:	e0205094 	mla	r0, r4, r0, r5
         c2d68:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: T32BitFlashRange::AdjustVirtualAddresses(long)
 * Address: 000c2d6c
 */
T32BitFlashRange::AdjustVirtualAddresses(long) {
    /*
         c2d6c:	e590200c 	ldr	r2, [r0, #12]	; fField12
         c2d70:	e0822001 	add	r2, r2, r1
         c2d74:	e580200c 	str	r2, [r0, #12]	; fField12
         c2d78:	e5902010 	ldr	r2, [r0, #16]	; fField16
         c2d7c:	e0821001 	add	r1, r2, r1
         c2d80:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c2d84:	e1a0f00e 	mov	pc, lr
    */
}

