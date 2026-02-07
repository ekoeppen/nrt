#include "include/TGPIOInterface.h"

/**
 * Symbol: TGPIOInterface::MapFunctionToBit(unsigned char, unsigned char *)
 * Address: 0026bcac
 */
TGPIOInterface::MapFunctionToBit(unsigned char, unsigned char *) {
    /*
        26bcac:	e20130ff 	and	r3, r1, #255	; 0xff
        26bcb0:	e3e01000 	mvn	r1, #0	; 0x0
        26bcb4:	e3530010 	cmp	r3, #16	; 0x10
        26bcb8:	aa000007 	bge	26bcdc <TGPIOInterface::MapFunctionToBit(unsigned char, unsigned char *)+0x30>
        26bcbc:	e0833103 	add	r3, r3, r3, lsl #2
        26bcc0:	e5900000 	ldr	r0, [r0]
        26bcc4:	e0800183 	add	r0, r0, r3, lsl #3
        26bcc8:	e590300c 	ldr	r3, [r0, #12]	; fField12
        26bccc:	e3330000 	teq	r3, #0	; 0x0
        26bcd0:	15900008 	ldrne	r0, [r0, #8]	; fField8
        26bcd4:	15c20000 	strneb	r0, [r2]
        26bcd8:	13a01000 	movne	r1, #0	; 0x0
        26bcdc:	e1a00001 	mov	r0, r1
        26bce0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGPIOInterface::MapFunctionToBitMask(unsigned char, unsigned long *)
 * Address: 0026bce4
 */
TGPIOInterface::MapFunctionToBitMask(unsigned char, unsigned long *) {
    /*
        26bce4:	e20130ff 	and	r3, r1, #255	; 0xff
        26bce8:	e3e01000 	mvn	r1, #0	; 0x0
        26bcec:	e3530010 	cmp	r3, #16	; 0x10
        26bcf0:	aa000006 	bge	26bd10 <TGPIOInterface::MapFunctionToBitMask(unsigned char, unsigned long *)+0x2c>
        26bcf4:	e0833103 	add	r3, r3, r3, lsl #2
        26bcf8:	e5900000 	ldr	r0, [r0]
        26bcfc:	e0800183 	add	r0, r0, r3, lsl #3
        26bd00:	e590000c 	ldr	r0, [r0, #12]	; fField12
        26bd04:	e5820000 	str	r0, [r2]
        26bd08:	e3300000 	teq	r0, #0	; 0x0
        26bd0c:	13a01000 	movne	r1, #0	; 0x0
        26bd10:	e1a00001 	mov	r0, r1
        26bd14:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGPIOInterface::SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long)
 * Address: 0026bd18
 */
TGPIOInterface::SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long) {
    /*
        26bd18:	e1a0c00d 	mov	ip, sp
        26bd1c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        26bd20:	e24cb004 	sub	fp, ip, #4	; 0x4
        26bd24:	e1a04000 	mov	r4, r0
        26bd28:	e1a07001 	mov	r7, r1
        26bd2c:	e1a06002 	mov	r6, r2
        26bd30:	e1a05003 	mov	r5, r3
        26bd34:	e591800a 	ldr	r8, [r1, #10]
        26bd38:	e1a08828 	mov	r8, r8, lsr #16
        26bd3c:	eb049b5f 	bl	392ac0 <EnterAtomic>
        26bd40:	e3760001 	cmn	r6, #1	; 0x1
        26bd44:	0a000016 	beq	26bda4 <TGPIOInterface::SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long)+0x8c>
        26bd48:	e3160001 	tst	r6, #1	; 0x1
        26bd4c:	0a000003 	beq	26bd60 <TGPIOInterface::SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long)+0x48>
        26bd50:	e5940010 	ldr	r0, [r4, #16]	; fField16
        26bd54:	e5901000 	ldr	r1, [r0]
        26bd58:	e1811008 	orr	r1, r1, r8
        26bd5c:	e5801000 	str	r1, [r0]
        26bd60:	e3160002 	tst	r6, #2	; 0x2
        26bd64:	0a000004 	beq	26bd7c <TGPIOInterface::SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long)+0x64>
        26bd68:	e5940014 	ldr	r0, [r4, #20]	; fField20
        26bd6c:	e1a01000 	mov	r1, r0
        26bd70:	e5900000 	ldr	r0, [r0]
        26bd74:	e1800008 	orr	r0, r0, r8
        26bd78:	e5810000 	str	r0, [r1]
        26bd7c:	e3160008 	tst	r6, #8	; 0x8
        26bd80:	0a000003 	beq	26bd94 <TGPIOInterface::SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long)+0x7c>
        26bd84:	e594001c 	ldr	r0, [r4, #28]	; fField28
        26bd88:	e5901000 	ldr	r1, [r0]
        26bd8c:	e1811008 	orr	r1, r1, r8
        26bd90:	e5801000 	str	r1, [r0]
        26bd94:	e5d70008 	ldrb	r0, [r7, #8]	; fField8
        26bd98:	e206100b 	and	r1, r6, #11	; 0xb
        26bd9c:	e1800001 	orr	r0, r0, r1
        26bda0:	e5c70008 	strb	r0, [r7, #8]	; fField8
        26bda4:	e3750001 	cmn	r5, #1	; 0x1
        26bda8:	0a000015 	beq	26be04 <TGPIOInterface::SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long)+0xec>
        26bdac:	e3150001 	tst	r5, #1	; 0x1
        26bdb0:	0a000003 	beq	26bdc4 <TGPIOInterface::SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long)+0xac>
        26bdb4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        26bdb8:	e5901000 	ldr	r1, [r0]
        26bdbc:	e1c11008 	bic	r1, r1, r8
        26bdc0:	e5801000 	str	r1, [r0]
        26bdc4:	e3150002 	tst	r5, #2	; 0x2
        26bdc8:	0a000003 	beq	26bddc <TGPIOInterface::SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long)+0xc4>
        26bdcc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        26bdd0:	e5901000 	ldr	r1, [r0]
        26bdd4:	e1c11008 	bic	r1, r1, r8
        26bdd8:	e5801000 	str	r1, [r0]
        26bddc:	e3150008 	tst	r5, #8	; 0x8
        26bde0:	0a000003 	beq	26bdf4 <TGPIOInterface::SetAndClearInterruptFlags(GPIOIntObject *, unsigned long, unsigned long)+0xdc>
        26bde4:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        26bde8:	e5901000 	ldr	r1, [r0]
        26bdec:	e1c11008 	bic	r1, r1, r8
        26bdf0:	e5801000 	str	r1, [r0]
        26bdf4:	e5d70008 	ldrb	r0, [r7, #8]	; fField8
        26bdf8:	e205100b 	and	r1, r5, #11	; 0xb
        26bdfc:	e1c00001 	bic	r0, r0, r1
        26be00:	e5c70008 	strb	r0, [r7, #8]	; fField8
        26be04:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        26be08:	ea049b43 	b	392b1c <ExitAtomic>
    */
}

/**
 * Symbol: TGPIOInterface::GetInterruptFlags(GPIOIntObject *)
 * Address: 0026be0c
 */
TGPIOInterface::GetInterruptFlags(GPIOIntObject *) {
    /*
        26be0c:	e5d10008 	ldrb	r0, [r1, #8]	; fField8
        26be10:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGPIOInterface::MainGPIOInterrupt(void)
 * Address: 0026be14
 */
TGPIOInterface::MainGPIOInterrupt(void) {
    /*
        26be14:	e1a0c00d 	mov	ip, sp
        26be18:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        26be1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        26be20:	e1a04000 	mov	r4, r0
        26be24:	e5900004 	ldr	r0, [r0, #4]	; fField4
        26be28:	e5901000 	ldr	r1, [r0]
        26be2c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        26be30:	e5900000 	ldr	r0, [r0]
        26be34:	e0115000 	ands	r5, r1, r0
        26be38:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        26be3c:	e3a08001 	mov	r8, #1	; 0x1
        26be40:	e594000c 	ldr	r0, [r4, #12]	; fField12
        26be44:	e5805000 	str	r5, [r0]
        26be48:	e3a06000 	mov	r6, #0	; 0x0
        26be4c:	e1a07618 	mov	r7, r8, lsl r6
        26be50:	e1170005 	tst	r7, r5
        26be54:	0a00000e 	beq	26be94 <TGPIOInterface::MainGPIOInterrupt(void)+0x80>
        26be58:	e0860086 	add	r0, r6, r6, lsl #1
        26be5c:	e0840100 	add	r0, r4, r0, lsl #2
        26be60:	e5901024 	ldr	r1, [r0, #36]
        26be64:	e3310000 	teq	r1, #0	; 0x0
        26be68:	0a000005 	beq	26be84 <TGPIOInterface::MainGPIOInterrupt(void)+0x70>
        26be6c:	e5900028 	ldr	r0, [r0, #40]
        26be70:	e1a0e00f 	mov	lr, pc
        26be74:	e1a0f001 	mov	pc, r1
        26be78:	e1d55007 	bics	r5, r5, r7
        26be7c:	0a000007 	beq	26bea0 <TGPIOInterface::MainGPIOInterrupt(void)+0x8c>
        26be80:	ea000003 	b	26be94 <TGPIOInterface::MainGPIOInterrupt(void)+0x80>
        26be84:	e5940008 	ldr	r0, [r4, #8]	; fField8
        26be88:	e5901000 	ldr	r1, [r0]
        26be8c:	e1c11006 	bic	r1, r1, r6
        26be90:	e5801000 	str	r1, [r0]
        26be94:	e2866001 	add	r6, r6, #1	; 0x1
        26be98:	e356000d 	cmp	r6, #13	; 0xd
        26be9c:	3affffea 	bcc	26be4c <TGPIOInterface::MainGPIOInterrupt(void)+0x38>
        26bea0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        26bea4:	e5900000 	ldr	r0, [r0]
        26bea8:	e5941008 	ldr	r1, [r4, #8]	; fField8
        26beac:	e0105001 	ands	r5, r0, r1
        26beb0:	1affffe2 	bne	26be40 <TGPIOInterface::MainGPIOInterrupt(void)+0x2c>
        26beb4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TGPIOInterface::WriteGPIODir(unsigned char, unsigned char, unsigned char *)
 * Address: 0026beb8
 */
TGPIOInterface::WriteGPIODir(unsigned char, unsigned char, unsigned char *) {
    /*
        26beb8:	e1a0c00d 	mov	ip, sp
        26bebc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26bec0:	e24cb004 	sub	fp, ip, #4	; 0x4
        26bec4:	e1a04003 	mov	r4, r3
        26bec8:	e20110ff 	and	r1, r1, #255	; 0xff
        26becc:	e20260ff 	and	r6, r2, #255	; 0xff
        26bed0:	e24dd004 	sub	sp, sp, #4	; 0x4
        26bed4:	e1a0200d 	mov	r2, sp
        26bed8:	eb600602 	bl	1a6d6e8 <TGPIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26bedc:	e1a05000 	mov	r5, r0
        26bee0:	e3700001 	cmn	r0, #1	; 0x1
        26bee4:	1a000001 	bne	26bef0 <TGPIOInterface::WriteGPIODir(unsigned char, unsigned char, unsigned char *)+0x38>
        26bee8:	e1a00005 	mov	r0, r5
        26beec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        26bef0:	eb049af2 	bl	392ac0 <EnterAtomic>
        26bef4:	e59f102c 	ldr	r1, [pc, #2c]	; 26bf28 <TGPIOInterface::WriteGPIODir(unsigned char, unsigned char, unsigned char *)+0x70>
        26bef8:	e5910000 	ldr	r0, [r1]
        26befc:	e3360000 	teq	r6, #0	; 0x0
        26bf00:	e59d2000 	ldr	r2, [sp]
        26bf04:	01c02002 	biceq	r2, r0, r2
        26bf08:	11802002 	orrne	r2, r0, r2
        26bf0c:	e1320000 	teq	r2, r0
        26bf10:	03a00000 	moveq	r0, #0	; 0x0
        26bf14:	15812000 	strne	r2, [r1]
        26bf18:	13a00001 	movne	r0, #1	; 0x1
        26bf1c:	e5c40000 	strb	r0, [r4]
        26bf20:	eb049afd 	bl	392b1c <ExitAtomic>
        26bf24:	eaffffef 	b	26bee8 <TGPIOInterface::WriteGPIODir(unsigned char, unsigned char, unsigned char *)+0x30>
        26bf28:	0f18e800 	swieq	0x0018e800
    */
}

/**
 * Symbol: TGPIOInterface::WriteGPIOPolarity(unsigned char, unsigned char, unsigned char *)
 * Address: 0026bf2c
 */
TGPIOInterface::WriteGPIOPolarity(unsigned char, unsigned char, unsigned char *) {
    /*
        26bf2c:	e1a0c00d 	mov	ip, sp
        26bf30:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26bf34:	e24cb004 	sub	fp, ip, #4	; 0x4
        26bf38:	e1a04003 	mov	r4, r3
        26bf3c:	e20110ff 	and	r1, r1, #255	; 0xff
        26bf40:	e20260ff 	and	r6, r2, #255	; 0xff
        26bf44:	e24dd004 	sub	sp, sp, #4	; 0x4
        26bf48:	e1a0200d 	mov	r2, sp
        26bf4c:	eb6005e5 	bl	1a6d6e8 <TGPIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26bf50:	e1a05000 	mov	r5, r0
        26bf54:	e3700001 	cmn	r0, #1	; 0x1
        26bf58:	1a000001 	bne	26bf64 <TGPIOInterface::WriteGPIOPolarity(unsigned char, unsigned char, unsigned char *)+0x38>
        26bf5c:	e1a00005 	mov	r0, r5
        26bf60:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        26bf64:	eb049ad5 	bl	392ac0 <EnterAtomic>
        26bf68:	e3a01a8e 	mov	r1, #581632	; 0x8e000
        26bf6c:	e28116f1 	add	r1, r1, #252706816	; 0xf100000
        26bf70:	e5910000 	ldr	r0, [r1]
        26bf74:	e3360000 	teq	r6, #0	; 0x0
        26bf78:	e59d2000 	ldr	r2, [sp]
        26bf7c:	01c02002 	biceq	r2, r0, r2
        26bf80:	11802002 	orrne	r2, r0, r2
        26bf84:	e1320000 	teq	r2, r0
        26bf88:	03a00000 	moveq	r0, #0	; 0x0
        26bf8c:	15812000 	strne	r2, [r1]
        26bf90:	13a00001 	movne	r0, #1	; 0x1
        26bf94:	e5c40000 	strb	r0, [r4]
        26bf98:	eb049adf 	bl	392b1c <ExitAtomic>
        26bf9c:	eaffffee 	b	26bf5c <TGPIOInterface::WriteGPIOPolarity(unsigned char, unsigned char, unsigned char *)+0x30>
    */
}

/**
 * Symbol: TGPIOInterface::WriteGPIOPullup(unsigned char, unsigned char, unsigned char *)
 * Address: 0026bfa0
 */
TGPIOInterface::WriteGPIOPullup(unsigned char, unsigned char, unsigned char *) {
    /*
        26bfa0:	e1a0c00d 	mov	ip, sp
        26bfa4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26bfa8:	e24cb004 	sub	fp, ip, #4	; 0x4
        26bfac:	e1a04003 	mov	r4, r3
        26bfb0:	e20110ff 	and	r1, r1, #255	; 0xff
        26bfb4:	e20260ff 	and	r6, r2, #255	; 0xff
        26bfb8:	e24dd004 	sub	sp, sp, #4	; 0x4
        26bfbc:	e1a0200d 	mov	r2, sp
        26bfc0:	eb6005c8 	bl	1a6d6e8 <TGPIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26bfc4:	e1a05000 	mov	r5, r0
        26bfc8:	e3700001 	cmn	r0, #1	; 0x1
        26bfcc:	1a000001 	bne	26bfd8 <TGPIOInterface::WriteGPIOPullup(unsigned char, unsigned char, unsigned char *)+0x38>
        26bfd0:	e1a00005 	mov	r0, r5
        26bfd4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        26bfd8:	eb049ab8 	bl	392ac0 <EnterAtomic>
        26bfdc:	e59f102c 	ldr	r1, [pc, #2c]	; 26c010 <TGPIOInterface::WriteGPIOPullup(unsigned char, unsigned char, unsigned char *)+0x70>
        26bfe0:	e5910000 	ldr	r0, [r1]
        26bfe4:	e3360000 	teq	r6, #0	; 0x0
        26bfe8:	e59d2000 	ldr	r2, [sp]
        26bfec:	01802002 	orreq	r2, r0, r2
        26bff0:	11c02002 	bicne	r2, r0, r2
        26bff4:	e1320000 	teq	r2, r0
        26bff8:	03a00000 	moveq	r0, #0	; 0x0
        26bffc:	15812000 	strne	r2, [r1]
        26c000:	13a00001 	movne	r0, #1	; 0x1
        26c004:	e5c40000 	strb	r0, [r4]
        26c008:	eb049ac3 	bl	392b1c <ExitAtomic>
        26c00c:	eaffffef 	b	26bfd0 <TGPIOInterface::WriteGPIOPullup(unsigned char, unsigned char, unsigned char *)+0x30>
        26c010:	0f18dc00 	swieq	0x0018dc00
    */
}

/**
 * Symbol: TGPIOInterface::WriteGPIOData(unsigned char, unsigned char, unsigned char *)
 * Address: 0026c014
 */
TGPIOInterface::WriteGPIOData(unsigned char, unsigned char, unsigned char *) {
    /*
        26c014:	e1a0c00d 	mov	ip, sp
        26c018:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26c01c:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c020:	e1a04003 	mov	r4, r3
        26c024:	e20110ff 	and	r1, r1, #255	; 0xff
        26c028:	e20260ff 	and	r6, r2, #255	; 0xff
        26c02c:	e24dd004 	sub	sp, sp, #4	; 0x4
        26c030:	e1a0200d 	mov	r2, sp
        26c034:	eb6005ab 	bl	1a6d6e8 <TGPIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26c038:	e1a05000 	mov	r5, r0
        26c03c:	e3700001 	cmn	r0, #1	; 0x1
        26c040:	1a000001 	bne	26c04c <TGPIOInterface::WriteGPIOData(unsigned char, unsigned char, unsigned char *)+0x38>
        26c044:	e1a00005 	mov	r0, r5
        26c048:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        26c04c:	eb049a9b 	bl	392ac0 <EnterAtomic>
        26c050:	e59f102c 	ldr	r1, [pc, #2c]	; 26c084 <TGPIOInterface::WriteGPIOData(unsigned char, unsigned char, unsigned char *)+0x70>
        26c054:	e5910000 	ldr	r0, [r1]
        26c058:	e3360000 	teq	r6, #0	; 0x0
        26c05c:	e59d2000 	ldr	r2, [sp]
        26c060:	01c02002 	biceq	r2, r0, r2
        26c064:	11802002 	orrne	r2, r0, r2
        26c068:	e1320000 	teq	r2, r0
        26c06c:	03a00000 	moveq	r0, #0	; 0x0
        26c070:	15812000 	strne	r2, [r1]
        26c074:	13a00001 	movne	r0, #1	; 0x1
        26c078:	e5c40000 	strb	r0, [r4]
        26c07c:	eb049aa6 	bl	392b1c <ExitAtomic>
        26c080:	eaffffef 	b	26c044 <TGPIOInterface::WriteGPIOData(unsigned char, unsigned char, unsigned char *)+0x30>
        26c084:	0f18ec00 	swieq	0x0018ec00
    */
}

/**
 * Symbol: TGPIOInterface::ReadGPIOData(unsigned char, unsigned long *)
 * Address: 0026c088
 */
TGPIOInterface::ReadGPIOData(unsigned char, unsigned long *) {
    /*
        26c088:	e1a0c00d 	mov	ip, sp
        26c08c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26c090:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c094:	e1a05000 	mov	r5, r0
        26c098:	e1a04002 	mov	r4, r2
        26c09c:	e20110ff 	and	r1, r1, #255	; 0xff
        26c0a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        26c0a4:	e1a0200d 	mov	r2, sp
        26c0a8:	eb60058e 	bl	1a6d6e8 <TGPIOInterface::$MapFunctionToBitMask(unsigned char, unsigned long *)>
        26c0ac:	e3700001 	cmn	r0, #1	; 0x1
        26c0b0:	0a000005 	beq	26c0cc <TGPIOInterface::ReadGPIOData(unsigned char, unsigned long *)+0x44>
        26c0b4:	e5b51018 	ldr	r1, [r5, #24]!	; fField24
        26c0b8:	e5911000 	ldr	r1, [r1]
        26c0bc:	e5841000 	str	r1, [r4]
        26c0c0:	e59d2000 	ldr	r2, [sp]
        26c0c4:	e0011002 	and	r1, r1, r2
        26c0c8:	e5841000 	str	r1, [r4]
        26c0cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TGPIOInterface::Init(void)
 * Address: 0026c0d0
 */
TGPIOInterface::Init(void) {
    /*
        26c0d0:	e1a0c00d 	mov	ip, sp
        26c0d4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        26c0d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c0dc:	e1a04000 	mov	r4, r0
        26c0e0:	e24dd004 	sub	sp, sp, #4	; 0x4
        26c0e4:	e59f01a8 	ldr	r0, [pc, #1a8]	; 26c294 <TGPIOInterface::Init(void)+0x1c4>
        26c0e8:	e3a05000 	mov	r5, #0	; 0x0
        26c0ec:	e5804000 	str	r4, [r0]
        26c0f0:	e3a01000 	mov	r1, #0	; 0x0
        26c0f4:	e3a03001 	mov	r3, #1	; 0x1
        26c0f8:	e5845020 	str	r5, [r4, #32]	; fField32
        26c0fc:	e0810081 	add	r0, r1, r1, lsl #1
        26c100:	e0840100 	add	r0, r4, r0, lsl #2
        26c104:	e5805024 	str	r5, [r0, #36]
        26c108:	e5805028 	str	r5, [r0, #40]
        26c10c:	e5c0502c 	strb	r5, [r0, #44]
        26c110:	e5c0102d 	strb	r1, [r0, #45]
        26c114:	e1a02113 	mov	r2, r3, lsl r1
        26c118:	e5c0202f 	strb	r2, [r0, #47]
        26c11c:	e1a02422 	mov	r2, r2, lsr #8
        26c120:	e5c0202e 	strb	r2, [r0, #46]
        26c124:	e2810001 	add	r0, r1, #1	; 0x1
        26c128:	e20010ff 	and	r1, r0, #255	; 0xff
        26c12c:	e351000d 	cmp	r1, #13	; 0xd
        26c130:	bafffff1 	blt	26c0fc <TGPIOInterface::Init(void)+0x2c>
        26c134:	e3a00963 	mov	r0, #1622016	; 0x18c000
        26c138:	e280040f 	add	r0, r0, #251658240	; 0xf000000
        26c13c:	e5840004 	str	r0, [r4, #4]	; fField4
        26c140:	e2800b01 	add	r0, r0, #1024	; 0x400
        26c144:	e5840008 	str	r0, [r4, #8]	; fField8
        26c148:	e59f0148 	ldr	r0, [pc, #148]	; 26c298 <TGPIOInterface::Init(void)+0x1c8>
        26c14c:	e584000c 	str	r0, [r4, #12]	; fField12
        26c150:	e2800b01 	add	r0, r0, #1024	; 0x400
        26c154:	e5840010 	str	r0, [r4, #16]	; fField16
        26c158:	e3a00a8d 	mov	r0, #577536	; 0x8d000
        26c15c:	e28006f1 	add	r0, r0, #252706816	; 0xf100000
        26c160:	e5840014 	str	r0, [r4, #20]	; fField20
        26c164:	e2800b01 	add	r0, r0, #1024	; 0x400
        26c168:	e5840018 	str	r0, [r4, #24]	; fField24
        26c16c:	e59f0128 	ldr	r0, [pc, #128]	; 26c29c <TGPIOInterface::Init(void)+0x1cc>
        26c170:	e1a0100d 	mov	r1, sp
        26c174:	e584001c 	str	r0, [r4, #28]	; fField28
        26c178:	e59f0120 	ldr	r0, [pc, #120]	; 26c2a0 <TGPIOInterface::Init(void)+0x1d0>
        26c17c:	eb6653c3 	bl	1c01090 <$GetLastRExConfigEntry>
        26c180:	e5840000 	str	r0, [r4]
        26c184:	e1a08000 	mov	r8, r0
        26c188:	e3a02000 	mov	r2, #0	; 0x0
        26c18c:	e1a0c002 	mov	ip, r2
        26c190:	e1a0e002 	mov	lr, r2
        26c194:	e1a06002 	mov	r6, r2
        26c198:	e1a07002 	mov	r7, r2
        26c19c:	e1a09002 	mov	r9, r2
        26c1a0:	e3a03000 	mov	r3, #0	; 0x0
        26c1a4:	e0830103 	add	r0, r3, r3, lsl #2
        26c1a8:	e0880180 	add	r0, r8, r0, lsl #3
        26c1ac:	e590100c 	ldr	r1, [r0, #12]	; fField12
        26c1b0:	e3310000 	teq	r1, #0	; 0x0
        26c1b4:	0a00001e 	beq	26c234 <TGPIOInterface::Init(void)+0x164>
        26c1b8:	e590a010 	ldr	sl, [r0, #16]	; fField16
        26c1bc:	e33a0000 	teq	sl, #0	; 0x0
        26c1c0:	11899001 	orrne	r9, r9, r1
        26c1c4:	11a09809 	movne	r9, r9, lsl #16
        26c1c8:	11a09829 	movne	r9, r9, lsr #16
        26c1cc:	e590a014 	ldr	sl, [r0, #20]	; fField20
        26c1d0:	e33a0000 	teq	sl, #0	; 0x0
        26c1d4:	11877001 	orrne	r7, r7, r1
        26c1d8:	11a07807 	movne	r7, r7, lsl #16
        26c1dc:	11a07827 	movne	r7, r7, lsr #16
        26c1e0:	e590a018 	ldr	sl, [r0, #24]	; fField24
        26c1e4:	e33a0000 	teq	sl, #0	; 0x0
        26c1e8:	11866001 	orrne	r6, r6, r1
        26c1ec:	11a06806 	movne	r6, r6, lsl #16
        26c1f0:	11a06826 	movne	r6, r6, lsr #16
        26c1f4:	e590a028 	ldr	sl, [r0, #40]
        26c1f8:	e33a0000 	teq	sl, #0	; 0x0
        26c1fc:	118ee001 	orrne	lr, lr, r1
        26c200:	11a0e80e 	movne	lr, lr, lsl #16
        26c204:	11a0e82e 	movne	lr, lr, lsr #16
        26c208:	e590a020 	ldr	sl, [r0, #32]	; fField32
        26c20c:	e33a0000 	teq	sl, #0	; 0x0
        26c210:	118cc001 	orrne	ip, ip, r1
        26c214:	11a0c80c 	movne	ip, ip, lsl #16
        26c218:	11a0c82c 	movne	ip, ip, lsr #16
        26c21c:	e590a024 	ldr	sl, [r0, #36]
        26c220:	e33a0000 	teq	sl, #0	; 0x0
        26c224:	11821001 	orrne	r1, r2, r1
        26c228:	11a02801 	movne	r2, r1, lsl #16
        26c22c:	11a02822 	movne	r2, r2, lsr #16
        26c230:	e590001c 	ldr	r0, [r0, #28]	; fField28
        26c234:	e2830001 	add	r0, r3, #1	; 0x1
        26c238:	e20030ff 	and	r3, r0, #255	; 0xff
        26c23c:	e3530010 	cmp	r3, #16	; 0x10
        26c240:	baffffd7 	blt	26c1a4 <TGPIOInterface::Init(void)+0xd4>
        26c244:	e59f1058 	ldr	r1, [pc, #58]	; 26c2a4 <TGPIOInterface::Init(void)+0x1d4>
        26c248:	e5819000 	str	r9, [r1]
        26c24c:	e3a01a8e 	mov	r1, #581632	; 0x8e000
        26c250:	e28116f1 	add	r1, r1, #252706816	; 0xf100000
        26c254:	e5817000 	str	r7, [r1]
        26c258:	e1e00006 	mvn	r0, r6
        26c25c:	e59f1044 	ldr	r1, [pc, #44]	; 26c2a8 <TGPIOInterface::Init(void)+0x1d8>
        26c260:	e5810000 	str	r0, [r1]
        26c264:	e59f1040 	ldr	r1, [pc, #40]	; 26c2ac <TGPIOInterface::Init(void)+0x1dc>
        26c268:	e581e000 	str	lr, [r1]
        26c26c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        26c270:	e580c000 	str	ip, [r0]
        26c274:	e5940014 	ldr	r0, [r4, #20]	; fField20
        26c278:	e5802000 	str	r2, [r0]
        26c27c:	e1a00005 	mov	r0, r5
        26c280:	e594101c 	ldr	r1, [r4, #28]	; fField28
        26c284:	e5815000 	str	r5, [r1]
        26c288:	e5b41008 	ldr	r1, [r4, #8]!	; fField8
        26c28c:	e5810000 	str	r0, [r1]
        26c290:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        26c294:	0c100f6c 	ldceq	15, cr0, [r0], -#432
        26c298:	0f18c800 	swieq	0x0018c800
        26c29c:	0f18d800 	swieq	0x0018d800
        26c2a0:	6770696f 	ldrvsb	r6, [r0, -pc, ror #18]!
        26c2a4:	0f18e800 	swieq	0x0018e800
        26c2a8:	0f18dc00 	swieq	0x0018dc00
        26c2ac:	0f18ec00 	swieq	0x0018ec00
    */
}

/**
 * Symbol: TGPIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)
 * Address: 0026c2b0
 */
TGPIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long) {
    /*
        26c2b0:	e1a0c00d 	mov	ip, sp
        26c2b4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        26c2b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c2bc:	e1a04000 	mov	r4, r0
        26c2c0:	e1a06002 	mov	r6, r2
        26c2c4:	e1a05003 	mov	r5, r3
        26c2c8:	e20110ff 	and	r1, r1, #255	; 0xff
        26c2cc:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        26c2d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        26c2d4:	e1a0200d 	mov	r2, sp
        26c2d8:	eb600501 	bl	1a6d6e4 <TGPIOInterface::$MapFunctionToBit(unsigned char, unsigned char *)>
        26c2dc:	e3700001 	cmn	r0, #1	; 0x1
        26c2e0:	1a000000 	bne	26c2e8 <TGPIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)+0x38>
        26c2e4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        26c2e8:	e5dd0000 	ldrb	r0, [sp]
        26c2ec:	e0800080 	add	r0, r0, r0, lsl #1
        26c2f0:	e0840100 	add	r0, r4, r0, lsl #2
        26c2f4:	e2807024 	add	r7, r0, #36	; 0x24
        26c2f8:	e3780001 	cmn	r8, #1	; 0x1
        26c2fc:	e8870060 	stmia	r7, {r5, r6}
        26c300:	0a000004 	beq	26c318 <TGPIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)+0x68>
        26c304:	e1a02008 	mov	r2, r8
        26c308:	e1a01007 	mov	r1, r7
        26c30c:	e1a00004 	mov	r0, r4
        26c310:	eb6008fa 	bl	1a6e700 <TGPIOInterface::$SetInterruptFlags(GPIOIntObject *, unsigned long)>
        26c314:	ea00001b 	b	26c388 <TGPIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)+0xd8>
        26c318:	e3a00000 	mov	r0, #0	; 0x0
        26c31c:	e5c70008 	strb	r0, [r7, #8]	; fField8
        26c320:	e5dd0000 	ldrb	r0, [sp]
        26c324:	e0800100 	add	r0, r0, r0, lsl #2
        26c328:	e5941000 	ldr	r1, [r4]
        26c32c:	e0810180 	add	r0, r1, r0, lsl #3
        26c330:	e5900020 	ldr	r0, [r0, #32]	; fField32
        26c334:	e3300000 	teq	r0, #0	; 0x0
        26c338:	13a00001 	movne	r0, #1	; 0x1
        26c33c:	15c70008 	strneb	r0, [r7, #8]	; fField8
        26c340:	e5dd0000 	ldrb	r0, [sp]
        26c344:	e0800100 	add	r0, r0, r0, lsl #2
        26c348:	e5941000 	ldr	r1, [r4]
        26c34c:	e0810180 	add	r0, r1, r0, lsl #3
        26c350:	e5900024 	ldr	r0, [r0, #36]
        26c354:	e3300000 	teq	r0, #0	; 0x0
        26c358:	15d70008 	ldrneb	r0, [r7, #8]	; fField8
        26c35c:	13800002 	orrne	r0, r0, #2	; 0x2
        26c360:	15c70008 	strneb	r0, [r7, #8]	; fField8
        26c364:	e5dd0000 	ldrb	r0, [sp]
        26c368:	e0800100 	add	r0, r0, r0, lsl #2
        26c36c:	e5941000 	ldr	r1, [r4]
        26c370:	e0810180 	add	r0, r1, r0, lsl #3
        26c374:	e590001c 	ldr	r0, [r0, #28]	; fField28
        26c378:	e3300000 	teq	r0, #0	; 0x0
        26c37c:	15d70008 	ldrneb	r0, [r7, #8]	; fField8
        26c380:	13800008 	orrne	r0, r0, #8	; 0x8
        26c384:	15c70008 	strneb	r0, [r7, #8]	; fField8
        26c388:	e5940020 	ldr	r0, [r4, #32]	; fField32
        26c38c:	e3300000 	teq	r0, #0	; 0x0
        26c390:	1a000007 	bne	26c3b4 <TGPIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)+0x104>
        26c394:	e59f2020 	ldr	r2, [pc, #20]	; 26c3bc <TGPIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)+0x10c>	; fField20
        26c398:	e1a01004 	mov	r1, r4
        26c39c:	e3a03001 	mov	r3, #1	; 0x1
        26c3a0:	e2833b01 	add	r3, r3, #1024	; 0x400
        26c3a4:	e3a00401 	mov	r0, #16777216	; 0x1000000
        26c3a8:	eb65b22f 	bl	1bd8c6c <$RegisterInterrupt(unsigned long, void *, long (*)(void *), void *)>
        26c3ac:	e5a40020 	str	r0, [r4, #32]!	; fField32
        26c3b0:	eb667857 	bl	1c0a514 <$QuickEnableInterrupt>
        26c3b4:	e1a00007 	mov	r0, r7
        26c3b8:	eaffffc9 	b	26c2e4 <TGPIOInterface::RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)+0x34>
        26c3bc:	01a6e704 	moveq	lr, r4, lsl #14
    */
}

/**
 * Symbol: TGPIOInterface::DeregisterInterrupt(GPIOIntObject *)
 * Address: 0026c3c0
 */
TGPIOInterface::DeregisterInterrupt(GPIOIntObject *) {
    /*
        26c3c0:	e1a0c00d 	mov	ip, sp
        26c3c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        26c3c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c3cc:	e1a04001 	mov	r4, r1
        26c3d0:	e3a02000 	mov	r2, #0	; 0x0
        26c3d4:	eb6008c9 	bl	1a6e700 <TGPIOInterface::$SetInterruptFlags(GPIOIntObject *, unsigned long)>
        26c3d8:	e3a00000 	mov	r0, #0	; 0x0
        26c3dc:	e5840000 	str	r0, [r4]
        26c3e0:	e5a40004 	str	r0, [r4, #4]!	; fField4
        26c3e4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TGPIOInterface::ClearInterrupt(GPIOIntObject *)
 * Address: 0026c3e8
 */
TGPIOInterface::ClearInterrupt(GPIOIntObject *) {
    /*
        26c3e8:	e590000c 	ldr	r0, [r0, #12]	; fField12
        26c3ec:	e591100a 	ldr	r1, [r1, #10]
        26c3f0:	e1a01821 	mov	r1, r1, lsr #16
        26c3f4:	e5801000 	str	r1, [r0]
        26c3f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TGPIOInterface::EnableInterrupt(GPIOIntObject *)
 * Address: 0026c3fc
 */
TGPIOInterface::EnableInterrupt(GPIOIntObject *) {
    /*
        26c3fc:	e1a0c00d 	mov	ip, sp
        26c400:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26c404:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c408:	e1a04000 	mov	r4, r0
        26c40c:	e5d16008 	ldrb	r6, [r1, #8]	; fField8
        26c410:	e591500a 	ldr	r5, [r1, #10]
        26c414:	e1a05825 	mov	r5, r5, lsr #16
        26c418:	eb0499a8 	bl	392ac0 <EnterAtomic>
        26c41c:	e3160008 	tst	r6, #8	; 0x8
        26c420:	0a000003 	beq	26c434 <TGPIOInterface::EnableInterrupt(GPIOIntObject *)+0x38>
        26c424:	e594001c 	ldr	r0, [r4, #28]	; fField28
        26c428:	e5901000 	ldr	r1, [r0]
        26c42c:	e1811005 	orr	r1, r1, r5
        26c430:	e5801000 	str	r1, [r0]
        26c434:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        26c438:	e5901000 	ldr	r1, [r0]
        26c43c:	e1811005 	orr	r1, r1, r5
        26c440:	e5801000 	str	r1, [r0]
        26c444:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        26c448:	ea0499b3 	b	392b1c <ExitAtomic>
    */
}

/**
 * Symbol: TGPIOInterface::DisableInterrupt(GPIOIntObject *)
 * Address: 0026c44c
 */
TGPIOInterface::DisableInterrupt(GPIOIntObject *) {
    /*
        26c44c:	e1a0c00d 	mov	ip, sp
        26c450:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        26c454:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c458:	e1a05000 	mov	r5, r0
        26c45c:	e1a04001 	mov	r4, r1
        26c460:	eb049996 	bl	392ac0 <EnterAtomic>
        26c464:	e595001c 	ldr	r0, [r5, #28]	; fField28
        26c468:	e5901000 	ldr	r1, [r0]
        26c46c:	e594200a 	ldr	r2, [r4, #10]
        26c470:	e1e02822 	mvn	r2, r2, lsr #16
        26c474:	e0011002 	and	r1, r1, r2
        26c478:	e5801000 	str	r1, [r0]
        26c47c:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        26c480:	e5901000 	ldr	r1, [r0]
        26c484:	e594200a 	ldr	r2, [r4, #10]
        26c488:	e1e02822 	mvn	r2, r2, lsr #16
        26c48c:	e0011002 	and	r1, r1, r2
        26c490:	e5801000 	str	r1, [r0]
        26c494:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        26c498:	ea04999f 	b	392b1c <ExitAtomic>
    */
}

/**
 * Symbol: TGPIOInterface::SetInterruptFlags(GPIOIntObject *, unsigned long)
 * Address: 0026c49c
 */
TGPIOInterface::SetInterruptFlags(GPIOIntObject *, unsigned long) {
    /*
        26c49c:	e1a0c00d 	mov	ip, sp
        26c4a0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        26c4a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        26c4a8:	e1a05000 	mov	r5, r0
        26c4ac:	e1a04002 	mov	r4, r2
        26c4b0:	e5c12008 	strb	r2, [r1, #8]	; fField8
        26c4b4:	e591600a 	ldr	r6, [r1, #10]
        26c4b8:	e1a06826 	mov	r6, r6, lsr #16
        26c4bc:	e3720001 	cmn	r2, #1	; 0x1
        26c4c0:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        26c4c4:	eb04997d 	bl	392ac0 <EnterAtomic>
        26c4c8:	e3140004 	tst	r4, #4	; 0x4
        26c4cc:	e5950008 	ldr	r0, [r5, #8]	; fField8
        26c4d0:	e1a01000 	mov	r1, r0
        26c4d4:	15900000 	ldrne	r0, [r0]
        26c4d8:	11800006 	orrne	r0, r0, r6
        26c4dc:	15810000 	strne	r0, [r1]
        26c4e0:	1a000002 	bne	26c4f0 <TGPIOInterface::SetInterruptFlags(GPIOIntObject *, unsigned long)+0x54>
        26c4e4:	e5911000 	ldr	r1, [r1]
        26c4e8:	e1c11006 	bic	r1, r1, r6
        26c4ec:	e5801000 	str	r1, [r0]
        26c4f0:	e3140008 	tst	r4, #8	; 0x8
        26c4f4:	e5b5001c 	ldr	r0, [r5, #28]!	; fField28
        26c4f8:	e5901000 	ldr	r1, [r0]
        26c4fc:	01c11006 	biceq	r1, r1, r6
        26c500:	11811006 	orrne	r1, r1, r6
        26c504:	e5801000 	str	r1, [r0]
        26c508:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        26c50c:	ea049982 	b	392b1c <ExitAtomic>
    */
}

