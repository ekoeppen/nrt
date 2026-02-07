#include "include/T16BitFlashRange.h"

/**
 * Symbol: T16BitFlashRange::DoWrite(unsigned long, unsigned long, char *)
 * Address: 000c2d88
 */
T16BitFlashRange::DoWrite(unsigned long, unsigned long, char *) {
    /*
         c2d88:	e1a0c00d 	mov	ip, sp
         c2d8c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c2d90:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2d94:	e1a04000 	mov	r4, r0
         c2d98:	e1a08001 	mov	r8, r1
         c2d9c:	e1a06002 	mov	r6, r2
         c2da0:	e1a05003 	mov	r5, r3
         c2da4:	eb66959d 	bl	1a68420 <$GetBankControlRegister__20TBankControlRegisterSFv>
         c2da8:	e3e01000 	mvn	r1, #0	; 0x0
         c2dac:	eb66959a 	bl	1a6841c <TBankControlRegister::$ConfigureFlashBankDataSize(eMemoryLane)>
         c2db0:	e24dd004 	sub	sp, sp, #4	; 0x4
         c2db4:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c2db8:	e0480000 	sub	r0, r8, r0
         c2dbc:	e3e01003 	mvn	r1, #3	; 0x3
         c2dc0:	e0010080 	and	r0, r1, r0, lsl #1
         c2dc4:	e5941010 	ldr	r1, [r4, #16]	; fField16
         c2dc8:	e0807001 	add	r7, r0, r1
         c2dcc:	e3a01000 	mov	r1, #0	; 0x0
         c2dd0:	e1a00006 	mov	r0, r6
         c2dd4:	e2188001 	ands	r8, r8, #1	; 0x1
         c2dd8:	e58d7000 	str	r7, [sp]
         c2ddc:	13a01001 	movne	r1, #1	; 0x1
         c2de0:	12400001 	subne	r0, r0, #1	; 0x1
         c2de4:	e08110a0 	add	r1, r1, r0, lsr #1
         c2de8:	e2000001 	and	r0, r0, #1	; 0x1
         c2dec:	e0803001 	add	r3, r0, r1
         c2df0:	e1a02007 	mov	r2, r7
         c2df4:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c2df8:	e1a01004 	mov	r1, r4
         c2dfc:	eb0b0672 	bl	3847cc <TFlashDriver::BeginWrite(TFlashRange &, unsigned long, unsigned long)>
         c2e00:	e594a014 	ldr	sl, [r4, #20]	; fField20
         c2e04:	e24accff 	sub	ip, sl, #65280	; 0xff00
         c2e08:	e33c00ff 	teq	ip, #255	; 0xff
         c2e0c:	13a09010 	movne	r9, #16	; 0x10
         c2e10:	03a09000 	moveq	r9, #0	; 0x0
         c2e14:	e3380000 	teq	r8, #0	; 0x0
         c2e18:	0a00000c 	beq	c2e50 <T16BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0xc8>
         c2e1c:	e3a000ff 	mov	r0, #255	; 0xff
         c2e20:	e1a02910 	mov	r2, r0, lsl r9
         c2e24:	e5d50000 	ldrb	r0, [r5]
         c2e28:	e0021910 	and	r1, r2, r0, lsl r9
         c2e2c:	e1a03004 	mov	r3, r4
         c2e30:	e92d0008 	stmdb	sp!, {r3}
         c2e34:	e1a03007 	mov	r3, r7
         c2e38:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c2e3c:	eb0b0653 	bl	384790 <TFlashDriver::Write(unsigned long, unsigned long, unsigned long, TFlashRange &)>
         c2e40:	e28dd004 	add	sp, sp, #4	; 0x4
         c2e44:	e2466001 	sub	r6, r6, #1	; 0x1
         c2e48:	e2877004 	add	r7, r7, #4	; 0x4
         c2e4c:	e2855001 	add	r5, r5, #1	; 0x1
         c2e50:	e3c68001 	bic	r8, r6, #1	; 0x1
         c2e54:	e0466008 	sub	r6, r6, r8
         c2e58:	e3580000 	cmp	r8, #0	; 0x0
         c2e5c:	9a000019 	bls	c2ec8 <T16BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x140>
         c2e60:	e2051003 	and	r1, r5, #3	; 0x3
         c2e64:	e3c50003 	bic	r0, r5, #3	; 0x3
         c2e68:	e3310003 	teq	r1, #3	; 0x3
         c2e6c:	05d01004 	ldreqb	r1, [r0, #4]	; fField4
         c2e70:	05900000 	ldreq	r0, [r0]
         c2e74:	01810400 	orreq	r0, r1, r0, lsl #8
         c2e78:	0a000003 	beq	c2e8c <T16BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x104>
         c2e7c:	e2611002 	rsb	r1, r1, #2	; 0x2
         c2e80:	e1a01181 	mov	r1, r1, lsl #3
         c2e84:	e5900000 	ldr	r0, [r0]
         c2e88:	e1a00130 	mov	r0, r0, lsr r1
         c2e8c:	e1a00800 	mov	r0, r0, lsl #16
         c2e90:	e1a00820 	mov	r0, r0, lsr #16
         c2e94:	e1a03004 	mov	r3, r4
         c2e98:	e92d0008 	stmdb	sp!, {r3}
         c2e9c:	e1a01910 	mov	r1, r0, lsl r9
         c2ea0:	e1a03007 	mov	r3, r7
         c2ea4:	e1a0200a 	mov	r2, sl
         c2ea8:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c2eac:	eb0b0637 	bl	384790 <TFlashDriver::Write(unsigned long, unsigned long, unsigned long, TFlashRange &)>
         c2eb0:	e28dd004 	add	sp, sp, #4	; 0x4
         c2eb4:	e2488002 	sub	r8, r8, #2	; 0x2
         c2eb8:	e2877004 	add	r7, r7, #4	; 0x4
         c2ebc:	e2855002 	add	r5, r5, #2	; 0x2
         c2ec0:	e3580000 	cmp	r8, #0	; 0x0
         c2ec4:	8affffe5 	bhi	c2e60 <T16BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0xd8>
         c2ec8:	e3360000 	teq	r6, #0	; 0x0
         c2ecc:	0a00000a 	beq	c2efc <T16BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x174>
         c2ed0:	e2890008 	add	r0, r9, #8	; 0x8
         c2ed4:	e5d51000 	ldrb	r1, [r5]
         c2ed8:	e3a020ff 	mov	r2, #255	; 0xff
         c2edc:	e1a02012 	mov	r2, r2, lsl r0
         c2ee0:	e0021011 	and	r1, r2, r1, lsl r0
         c2ee4:	e1a03004 	mov	r3, r4
         c2ee8:	e92d0008 	stmdb	sp!, {r3}
         c2eec:	e1a03007 	mov	r3, r7
         c2ef0:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c2ef4:	eb0b0625 	bl	384790 <TFlashDriver::Write(unsigned long, unsigned long, unsigned long, TFlashRange &)>
         c2ef8:	e28dd004 	add	sp, sp, #4	; 0x4
         c2efc:	e1a00004 	mov	r0, r4
         c2f00:	e59d1000 	ldr	r1, [sp]
         c2f04:	e5942000 	ldr	r2, [r4]
         c2f08:	e1a0e00f 	mov	lr, pc
         c2f0c:	e282f008 	add	pc, r2, #8	; 0x8
         c2f10:	e1a02000 	mov	r2, r0
         c2f14:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c2f18:	e1a01004 	mov	r1, r4
         c2f1c:	eb0b062d 	bl	3847d8 <TFlashDriver::ReportWriteResult(TFlashRange &, unsigned long)>
         c2f20:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: T16BitFlashRange::PrepareForBlockCommand(unsigned long)
 * Address: 000c2f24
 */
T16BitFlashRange::PrepareForBlockCommand(unsigned long) {
    /*
         c2f24:	e1a0c00d 	mov	ip, sp
         c2f28:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c2f2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2f30:	e1a04000 	mov	r4, r0
         c2f34:	e1a05001 	mov	r5, r1
         c2f38:	eb669538 	bl	1a68420 <$GetBankControlRegister__20TBankControlRegisterSFv>
         c2f3c:	e3e01000 	mvn	r1, #0	; 0x0
         c2f40:	eb669535 	bl	1a6841c <TBankControlRegister::$ConfigureFlashBankDataSize(eMemoryLane)>
         c2f44:	e5b41008 	ldr	r1, [r4, #8]!	; fField8
         c2f48:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c2f4c:	e0451001 	sub	r1, r5, r1
         c2f50:	e0800081 	add	r0, r0, r1, lsl #1
         c2f54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: T16BitFlashRange::StartOfBlockWriteVirtualAddress( const(unsigned long))
 * Address: 000c2f58
 */
T16BitFlashRange::StartOfBlockWriteVirtualAddress( const(unsigned long)) {
    /*
         c2f58:	e1a0c00d 	mov	ip, sp
         c2f5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c2f60:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2f64:	e5902010 	ldr	r2, [r0, #16]	; fField16
         c2f68:	e1a05002 	mov	r5, r2
         c2f6c:	e0411002 	sub	r1, r1, r2
         c2f70:	e590003c 	ldr	r0, [r0, #60]	; fField60
         c2f74:	e1a04000 	mov	r4, r0
         c2f78:	e1a00080 	mov	r0, r0, lsl #1
         c2f7c:	eb6bbe71 	bl	1bb2948 <$__rt_udiv>
         c2f80:	e0010490 	mul	r1, r0, r4
         c2f84:	e0850081 	add	r0, r5, r1, lsl #1
         c2f88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: T16BitFlashRange::AdjustVirtualAddresses(long)
 * Address: 000c2f8c
 */
T16BitFlashRange::AdjustVirtualAddresses(long) {
    /*
         c2f8c:	e590200c 	ldr	r2, [r0, #12]	; fField12
         c2f90:	e0822001 	add	r2, r2, r1
         c2f94:	e580200c 	str	r2, [r0, #12]	; fField12
         c2f98:	e5902010 	ldr	r2, [r0, #16]	; fField16
         c2f9c:	e0821081 	add	r1, r2, r1, lsl #1
         c2fa0:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c2fa4:	e1a0f00e 	mov	pc, lr
    */
}

