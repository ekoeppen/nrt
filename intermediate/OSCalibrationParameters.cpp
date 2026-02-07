#include "include/OSCalibrationParameters.h"

/**
 * Symbol: CalculateROMREXCheckSums__23OSCalibrationParametersSFUlT1R11TOSCheckSum
 * Address: 001a71b8
 */
void OSCalibrationParameters::CalculateROMREXCheckSums() {
    /*
        1a71b8:	e1a0c00d 	mov	ip, sp
        1a71bc:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1a71c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a71c4:	e1a04000 	mov	r4, r0
        1a71c8:	e3a09000 	mov	r9, #0	; 0x0
        1a71cc:	e3a07000 	mov	r7, #0	; 0x0
        1a71d0:	e1a02121 	mov	r2, r1, lsr #2
        1a71d4:	e1a0aa20 	mov	sl, r0, lsr #20
        1a71d8:	e1a0aa0a 	mov	sl, sl, lsl #20
        1a71dc:	e0800001 	add	r0, r0, r1
        1a71e0:	e2400001 	sub	r0, r0, #1	; 0x1
        1a71e4:	e2800601 	add	r0, r0, #1048576	; 0x100000
        1a71e8:	e1a08a20 	mov	r8, r0, lsr #20
        1a71ec:	e1a08a08 	mov	r8, r8, lsl #20
        1a71f0:	e3a06101 	mov	r6, #1073741824	; 0x40000000
        1a71f4:	e1a0500a 	mov	r5, sl
        1a71f8:	e15a0008 	cmp	sl, r8
        1a71fc:	e52d2004 	str	r2, [sp, -#4]!	; fField4
        1a7200:	2a00000b 	bcs	1a7234 <CalculateROMREXCheckSums__23OSCalibrationParametersSFUlT1R11TOSCheckSum+0x7c>
        1a7204:	e3a03001 	mov	r3, #1	; 0x1
        1a7208:	e92d0008 	stmdb	sp!, {r3}
        1a720c:	e1a01005 	mov	r1, r5
        1a7210:	e1a00006 	mov	r0, r6
        1a7214:	e3a03002 	mov	r3, #2	; 0x2
        1a7218:	e3a02000 	mov	r2, #0	; 0x0
        1a721c:	ebfeccee 	bl	15a5dc <AddNewSecPNJT__FUlN214PermUc>
        1a7220:	e28dd004 	add	sp, sp, #4	; 0x4
        1a7224:	e2855601 	add	r5, r5, #1048576	; 0x100000
        1a7228:	e2866601 	add	r6, r6, #1048576	; 0x100000
        1a722c:	e1550008 	cmp	r5, r8
        1a7230:	3afffff3 	bcc	1a7204 <CalculateROMREXCheckSums__23OSCalibrationParametersSFUlT1R11TOSCheckSum+0x4c>
        1a7234:	e1a00604 	mov	r0, r4, lsl #12
        1a7238:	e1a00620 	mov	r0, r0, lsr #12
        1a723c:	e2800101 	add	r0, r0, #1073741824	; 0x40000000
        1a7240:	e59d2000 	ldr	r2, [sp]
        1a7244:	e2421001 	sub	r1, r2, #1	; 0x1
        1a7248:	e3320000 	teq	r2, #0	; 0x0
        1a724c:	0a000006 	beq	1a726c <CalculateROMREXCheckSums__23OSCalibrationParametersSFUlT1R11TOSCheckSum+0xb4>
        1a7250:	e4902004 	ldr	r2, [r0], #4	; fField4
        1a7254:	e1a03802 	mov	r3, r2, lsl #16
        1a7258:	e0877823 	add	r7, r7, r3, lsr #16
        1a725c:	e0899822 	add	r9, r9, r2, lsr #16
        1a7260:	e1b02001 	movs	r2, r1
        1a7264:	e2411001 	sub	r1, r1, #1	; 0x1
        1a7268:	1afffff8 	bne	1a7250 <CalculateROMREXCheckSums__23OSCalibrationParametersSFUlT1R11TOSCheckSum+0x98>
        1a726c:	e51b202c 	ldr	r2, [fp, -#44]	; fField44
        1a7270:	e5a27004 	str	r7, [r2, #4]!	; fField4
        1a7274:	e51b202c 	ldr	r2, [fp, -#44]	; fField44
        1a7278:	e26a0101 	rsb	r0, sl, #1073741824	; 0x40000000
        1a727c:	e0805008 	add	r5, r0, r8
        1a7280:	e3a04101 	mov	r4, #1073741824	; 0x40000000
        1a7284:	e3550101 	cmp	r5, #1073741824	; 0x40000000
        1a7288:	e5829000 	str	r9, [r2]
        1a728c:	9a000004 	bls	1a72a4 <CalculateROMREXCheckSums__23OSCalibrationParametersSFUlT1R11TOSCheckSum+0xec>
        1a7290:	e1a00004 	mov	r0, r4
        1a7294:	eb6573e5 	bl	1b04230 <$RemoveSecP(unsigned long)>
        1a7298:	e2844601 	add	r4, r4, #1048576	; 0x100000
        1a729c:	e1540005 	cmp	r4, r5
        1a72a0:	3afffffa 	bcc	1a7290 <CalculateROMREXCheckSums__23OSCalibrationParametersSFUlT1R11TOSCheckSum+0xd8>
        1a72a4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: CalculateROMREXCheckSums__23OSCalibrationParametersSFR16TROMREXCheckSums
 * Address: 001a7840
 */
void OSCalibrationParameters::CalculateROMREXCheckSums() {
    /*
        1a7840:	e1a0c00d 	mov	ip, sp
        1a7844:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1a7848:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a784c:	e1a04000 	mov	r4, r0
        1a7850:	e1a02000 	mov	r2, r0
        1a7854:	e59f1050 	ldr	r1, [pc, #50]	; 1a78ac <CalculateROMREXCheckSums__23OSCalibrationParametersSFR16TROMREXCheckSums+0x6c>
        1a7858:	e3a00000 	mov	r0, #0	; 0x0
        1a785c:	eb62fec9 	bl	1a67388 <$CalculateROMREXCheckSums__23OSCalibrationParametersSFUlT1R11TOSCheckSum>
        1a7860:	e3a05000 	mov	r5, #0	; 0x0
        1a7864:	e3e07000 	mvn	r7, #0	; 0x0
        1a7868:	e59f6040 	ldr	r6, [pc, #40]	; 1a78b0 <CalculateROMREXCheckSums__23OSCalibrationParametersSFR16TROMREXCheckSums+0x70>	; fField40
        1a786c:	e0860105 	add	r0, r6, r5, lsl #2
        1a7870:	e59012e8 	ldr	r1, [r0, #744]
        1a7874:	e3310000 	teq	r1, #0	; 0x0
        1a7878:	00840185 	addeq	r0, r4, r5, lsl #3
        1a787c:	05807008 	streq	r7, [r0, #8]	; fField8
        1a7880:	05a0700c 	streq	r7, [r0, #12]!	; fField12
        1a7884:	0a000004 	beq	1a789c <CalculateROMREXCheckSums__23OSCalibrationParametersSFR16TROMREXCheckSums+0x5c>
        1a7888:	e0842185 	add	r2, r4, r5, lsl #3
        1a788c:	e2822008 	add	r2, r2, #8	; 0x8
        1a7890:	e5911018 	ldr	r1, [r1, #24]	; fField24
        1a7894:	e59002fc 	ldr	r0, [r0, #764]
        1a7898:	eb62feba 	bl	1a67388 <$CalculateROMREXCheckSums__23OSCalibrationParametersSFUlT1R11TOSCheckSum>
        1a789c:	e2855001 	add	r5, r5, #1	; 0x1
        1a78a0:	e3550004 	cmp	r5, #4	; 0x4
        1a78a4:	bafffff0 	blt	1a786c <CalculateROMREXCheckSums__23OSCalibrationParametersSFR16TROMREXCheckSums+0x2c>
        1a78a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1a78ac:	0071fc4c 	rsbeqs	pc, r1, ip, asr #24
        1a78b0:	0c1061c4 	ldfeqs	f6, [r0], -#784
    */
}

/**
 * Symbol: OSCalibrationParameters::SetDefaultValues(void)
 * Address: 001a7d78
 */
OSCalibrationParameters::SetDefaultValues(void) {
    /*
        1a7d78:	e1a0c00d 	mov	ip, sp
        1a7d7c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1a7d80:	e24cb004 	sub	fp, ip, #4	; 0x4
        1a7d84:	e1a04000 	mov	r4, r0
        1a7d88:	e59f10c8 	ldr	r1, [pc, #c8]	; 1a7e58 <OSCalibrationParameters::SetDefaultValues(void)+0xe0>
        1a7d8c:	e5801000 	str	r1, [r0]
        1a7d90:	e59f00c4 	ldr	r0, [pc, #c4]	; 1a7e5c <OSCalibrationParameters::SetDefaultValues(void)+0xe4>
        1a7d94:	e5840004 	str	r0, [r4, #4]	; fField4
        1a7d98:	e3a00f43 	mov	r0, #268	; 0x10c
        1a7d9c:	e3a05000 	mov	r5, #0	; 0x0
        1a7da0:	e2844008 	add	r4, r4, #8	; 0x8
        1a7da4:	e8840021 	stmia	r4, {r0, r5}
        1a7da8:	e5845008 	str	r5, [r4, #8]	; fField8
        1a7dac:	e584500c 	str	r5, [r4, #12]	; fField12
        1a7db0:	e5845010 	str	r5, [r4, #16]	; fField16
        1a7db4:	e5845014 	str	r5, [r4, #20]	; fField20
        1a7db8:	e3a00016 	mov	r0, #22	; 0x16
        1a7dbc:	e2800c39 	add	r0, r0, #14592	; 0x3900
        1a7dc0:	e584001c 	str	r0, [r4, #28]	; fField28
        1a7dc4:	e5845018 	str	r5, [r4, #24]	; fField24
        1a7dc8:	e5845020 	str	r5, [r4, #32]	; fField32
        1a7dcc:	e5845024 	str	r5, [r4, #36]	; fField36
        1a7dd0:	e3a0005a 	mov	r0, #90	; 0x5a
        1a7dd4:	e2800c46 	add	r0, r0, #17920	; 0x4600
        1a7dd8:	e584002c 	str	r0, [r4, #44]	; fField44
        1a7ddc:	e5845028 	str	r5, [r4, #40]	; fField40
        1a7de0:	e3a00902 	mov	r0, #32768	; 0x8000
        1a7de4:	e5840034 	str	r0, [r4, #52]	; fField52
        1a7de8:	e5845030 	str	r5, [r4, #48]	; fField48
        1a7dec:	e3a00c0e 	mov	r0, #3584	; 0xe00
        1a7df0:	e584003c 	str	r0, [r4, #60]	; fField60
        1a7df4:	e5845038 	str	r5, [r4, #56]	; fField56
        1a7df8:	e5840040 	str	r0, [r4, #64]	; fField64
        1a7dfc:	e2844044 	add	r4, r4, #68	; 0x44
        1a7e00:	e8840003 	stmia	r4, {r0, r1}
        1a7e04:	e244404c 	sub	r4, r4, #76	; 0x4c
        1a7e08:	e1a00004 	mov	r0, r4
        1a7e0c:	e3a01054 	mov	r1, #84	; 0x54
        1a7e10:	eb62fd60 	bl	1a67398 <$Checksum__22TReservedBlockAccessorSFPCvl>
        1a7e14:	e5840054 	str	r0, [r4, #84]	; fField84
        1a7e18:	e3e00001 	mvn	r0, #1	; 0x1
        1a7e1c:	e2844058 	add	r4, r4, #88	; 0x58
        1a7e20:	e8840021 	stmia	r4, {r0, r5}
        1a7e24:	e5845008 	str	r5, [r4, #8]	; fField8
        1a7e28:	e2444058 	sub	r4, r4, #88	; 0x58
        1a7e2c:	e2840064 	add	r0, r4, #100	; 0x64
        1a7e30:	ebfffe82 	bl	1a7840 <CalculateROMREXCheckSums__23OSCalibrationParametersSFR16TROMREXCheckSums>
        1a7e34:	e3e01000 	mvn	r1, #0	; 0x0
        1a7e38:	e3a00000 	mov	r0, #0	; 0x0
        1a7e3c:	e584108c 	str	r1, [r4, #140]	; fField140
        1a7e40:	e0842100 	add	r2, r4, r0, lsl #2
        1a7e44:	e2800001 	add	r0, r0, #1	; 0x1
        1a7e48:	e350001f 	cmp	r0, #31	; 0x1f
        1a7e4c:	e5a21090 	str	r1, [r2, #144]!
        1a7e50:	3afffffa 	bcc	1a7e40 <OSCalibrationParameters::SetDefaultValues(void)+0xc8>
        1a7e54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1a7e58:	444c4453 	strmib	r4, [ip], -#1107
        1a7e5c:	4f534344 	swimi	0x00534344
    */
}

