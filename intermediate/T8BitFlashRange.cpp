#include "include/T8BitFlashRange.h"

/**
 * Symbol: T8BitFlashRange::PrepareForBlockCommand(unsigned long)
 * Address: 000c2fa8
 */
T8BitFlashRange::PrepareForBlockCommand(unsigned long) {
    /*
         c2fa8:	e1a0c00d 	mov	ip, sp
         c2fac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c2fb0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2fb4:	e1a04000 	mov	r4, r0
         c2fb8:	e1a05001 	mov	r5, r1
         c2fbc:	eb669517 	bl	1a68420 <$GetBankControlRegister__20TBankControlRegisterSFv>
         c2fc0:	e3e01000 	mvn	r1, #0	; 0x0
         c2fc4:	eb669514 	bl	1a6841c <TBankControlRegister::$ConfigureFlashBankDataSize(eMemoryLane)>
         c2fc8:	e5b41008 	ldr	r1, [r4, #8]!	; fField8
         c2fcc:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c2fd0:	e0451001 	sub	r1, r5, r1
         c2fd4:	e0800101 	add	r0, r0, r1, lsl #2
         c2fd8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: T8BitFlashRange::StartOfBlockWriteVirtualAddress( const(unsigned long))
 * Address: 000c2fdc
 */
T8BitFlashRange::StartOfBlockWriteVirtualAddress( const(unsigned long)) {
    /*
         c2fdc:	e1a0c00d 	mov	ip, sp
         c2fe0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c2fe4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c2fe8:	e5902010 	ldr	r2, [r0, #16]	; fField16
         c2fec:	e1a05002 	mov	r5, r2
         c2ff0:	e0411002 	sub	r1, r1, r2
         c2ff4:	e590003c 	ldr	r0, [r0, #60]	; fField60
         c2ff8:	e1a04000 	mov	r4, r0
         c2ffc:	e1a00100 	mov	r0, r0, lsl #2
         c3000:	eb6bbe50 	bl	1bb2948 <$__rt_udiv>
         c3004:	e0010490 	mul	r1, r0, r4
         c3008:	e0850101 	add	r0, r5, r1, lsl #2
         c300c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: T8BitFlashRange::AdjustVirtualAddresses(long)
 * Address: 000c3010
 */
T8BitFlashRange::AdjustVirtualAddresses(long) {
    /*
         c3010:	e590200c 	ldr	r2, [r0, #12]	; fField12
         c3014:	e0822001 	add	r2, r2, r1
         c3018:	e580200c 	str	r2, [r0, #12]	; fField12
         c301c:	e5902010 	ldr	r2, [r0, #16]	; fField16
         c3020:	e0821101 	add	r1, r2, r1, lsl #2
         c3024:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c3028:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: T8BitFlashRange::DoWrite(unsigned long, unsigned long, char *)
 * Address: 000c302c
 */
T8BitFlashRange::DoWrite(unsigned long, unsigned long, char *) {
    /*
         c302c:	e1a0c00d 	mov	ip, sp
         c3030:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c3034:	e24cb004 	sub	fp, ip, #4	; 0x4
         c3038:	e1a04000 	mov	r4, r0
         c303c:	e1a07001 	mov	r7, r1
         c3040:	e1a05002 	mov	r5, r2
         c3044:	e1a06003 	mov	r6, r3
         c3048:	eb6694f4 	bl	1a68420 <$GetBankControlRegister__20TBankControlRegisterSFv>
         c304c:	e3e01000 	mvn	r1, #0	; 0x0
         c3050:	eb6694f1 	bl	1a6841c <TBankControlRegister::$ConfigureFlashBankDataSize(eMemoryLane)>
         c3054:	e5940008 	ldr	r0, [r4, #8]	; fField8
         c3058:	e0471000 	sub	r1, r7, r0
         c305c:	e3e00003 	mvn	r0, #3	; 0x3
         c3060:	e0000101 	and	r0, r0, r1, lsl #2
         c3064:	e5941010 	ldr	r1, [r4, #16]	; fField16
         c3068:	e0809001 	add	r9, r0, r1
         c306c:	e1a0a009 	mov	sl, r9
         c3070:	e1a03005 	mov	r3, r5
         c3074:	e1a02009 	mov	r2, r9
         c3078:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c307c:	e1a01004 	mov	r1, r4
         c3080:	eb0b05d1 	bl	3847cc <TFlashDriver::BeginWrite(TFlashRange &, unsigned long, unsigned long)>
         c3084:	e5948014 	ldr	r8, [r4, #20]	; fField20
         c3088:	e33800ff 	teq	r8, #255	; 0xff
         c308c:	03a07000 	moveq	r7, #0	; 0x0
         c3090:	0a000005 	beq	c30ac <T8BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x80>
         c3094:	e3380cff 	teq	r8, #65280	; 0xff00
         c3098:	03a07008 	moveq	r7, #8	; 0x8
         c309c:	0a000002 	beq	c30ac <T8BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x80>
         c30a0:	e33808ff 	teq	r8, #16711680	; 0xff0000
         c30a4:	13a07018 	movne	r7, #24	; 0x18
         c30a8:	03a07010 	moveq	r7, #16	; 0x10
         c30ac:	e3550000 	cmp	r5, #0	; 0x0
         c30b0:	9a00000d 	bls	c30ec <T8BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0xc0>
         c30b4:	e5d60000 	ldrb	r0, [r6]
         c30b8:	e0081710 	and	r1, r8, r0, lsl r7
         c30bc:	e1a03004 	mov	r3, r4
         c30c0:	e92d0008 	stmdb	sp!, {r3}
         c30c4:	e1a03009 	mov	r3, r9
         c30c8:	e1a02008 	mov	r2, r8
         c30cc:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c30d0:	eb0b05ae 	bl	384790 <TFlashDriver::Write(unsigned long, unsigned long, unsigned long, TFlashRange &)>
         c30d4:	e28dd004 	add	sp, sp, #4	; 0x4
         c30d8:	e2455001 	sub	r5, r5, #1	; 0x1
         c30dc:	e2899004 	add	r9, r9, #4	; 0x4
         c30e0:	e2866001 	add	r6, r6, #1	; 0x1
         c30e4:	e3550000 	cmp	r5, #0	; 0x0
         c30e8:	8afffff1 	bhi	c30b4 <T8BitFlashRange::DoWrite(unsigned long, unsigned long, char *)+0x88>
         c30ec:	e1a0100a 	mov	r1, sl
         c30f0:	e1a00004 	mov	r0, r4
         c30f4:	e5942000 	ldr	r2, [r4]
         c30f8:	e1a0e00f 	mov	lr, pc
         c30fc:	e282f008 	add	pc, r2, #8	; 0x8
         c3100:	e1a02000 	mov	r2, r0
         c3104:	e5940004 	ldr	r0, [r4, #4]	; fField4
         c3108:	e1a01004 	mov	r1, r4
         c310c:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         c3110:	ea0b05b0 	b	3847d8 <TFlashDriver::ReportWriteResult(TFlashRange &, unsigned long)>
    */
}

