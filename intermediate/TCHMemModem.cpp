#include "include/TCHMemModem.h"

/**
 * Symbol: TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)
 * Address: 00047ca0
 */
TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long) {
    /*
         47ca0:	e1a0c00d 	mov	ip, sp
         47ca4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         47ca8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         47cac:	e24cb014 	sub	fp, ip, #20	; 0x14
         47cb0:	e1a06000 	mov	r6, r0
         47cb4:	e1a04002 	mov	r4, r2
         47cb8:	e1a05003 	mov	r5, r3
         47cbc:	e3e07f41 	mvn	r7, #260	; 0x104
         47cc0:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
         47cc4:	e3a00000 	mov	r0, #0	; 0x0
         47cc8:	e52d0008 	str	r0, [sp, -#8]!	; fField8
         47ccc:	e1a00002 	mov	r0, r2
         47cd0:	eb6f1686 	bl	1c0d6f0 <TCardPCMCIA::$GetNumOfCISs(void)>
         47cd4:	e3500000 	cmp	r0, #0	; 0x0
         47cd8:	9a0000b9 	bls	47fc4 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x324>
         47cdc:	ea000007 	b	47d00 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x60>
         47ce0:	e59d0000 	ldr	r0, [sp]
         47ce4:	e3500000 	cmp	r0, #0	; 0x0
         47ce8:	9a000004 	bls	47d00 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x60>
         47cec:	e1a00004 	mov	r0, r4
         47cf0:	e59d1000 	ldr	r1, [sp]
         47cf4:	eb6f167e 	bl	1c0d6f4 <TCardPCMCIA::$GetCardCIS(unsigned long const)>
         47cf8:	e1b04000 	movs	r4, r0
         47cfc:	0a0000b0 	beq	47fc4 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x324>
         47d00:	e3a00000 	mov	r0, #0	; 0x0
         47d04:	e3350000 	teq	r5, #0	; 0x0
         47d08:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         47d0c:	15940008 	ldrne	r0, [r4, #8]	; fField8
         47d10:	13300000 	teqne	r0, #0	; 0x0
         47d14:	0a00001f 	beq	47d98 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0xf8>
         47d18:	e3a00008 	mov	r0, #8	; 0x8
         47d1c:	eb6e1a85 	bl	1bce738 <$__nw(unsigned int)>
         47d20:	e3500000 	cmp	r0, #0	; 0x0
         47d24:	13a01000 	movne	r1, #0	; 0x0
         47d28:	15c01004 	strneb	r1, [r0, #4]	; fField4
         47d2c:	15801000 	strne	r1, [r0]
         47d30:	e58d0000 	str	r0, [sp]
         47d34:	0a000098 	beq	47f9c <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x2fc>
         47d38:	e59b0008 	ldr	r0, [fp, #8]	; fField8
         47d3c:	eb6e22bb 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         47d40:	e1a07000 	mov	r7, r0
         47d44:	e59b0008 	ldr	r0, [fp, #8]	; fField8
         47d48:	eb6e1e98 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         47d4c:	e0472000 	sub	r2, r7, r0
         47d50:	e5940008 	ldr	r0, [r4, #8]	; fField8
         47d54:	e2400001 	sub	r0, r0, #1	; 0x1
         47d58:	e2800601 	add	r0, r0, #1048576	; 0x100000
         47d5c:	e1a00a20 	mov	r0, r0, lsr #20
         47d60:	e1a00a00 	mov	r0, r0, lsl #20
         47d64:	e3a03000 	mov	r3, #0	; 0x0
         47d68:	e92d0008 	stmdb	sp!, {r3}
         47d6c:	e1a03000 	mov	r3, r0
         47d70:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         47d74:	e59b0008 	ldr	r0, [fp, #8]	; fField8
         47d78:	eb6e22b9 	bl	1bd0864 <TCardSocket::$CreateSocketPhys(TUPhys *, unsigned long, unsigned long, unsigned char)>
         47d7c:	e28dd004 	add	sp, sp, #4	; 0x4
         47d80:	e1b07000 	movs	r7, r0
         47d84:	1a000084 	bne	47f9c <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x2fc>
         47d88:	e5960038 	ldr	r0, [r6, #56]	; fField56
         47d8c:	e59d2000 	ldr	r2, [sp]
         47d90:	e5901000 	ldr	r1, [r0]
         47d94:	eb6e85d4 	bl	1be94ec <CList::$InsertAt(long, void *)>
         47d98:	e3a08000 	mov	r8, #0	; 0x0
         47d9c:	e5d40027 	ldrb	r0, [r4, #39]
         47da0:	e3500000 	cmp	r0, #0	; 0x0
         47da4:	9a000079 	bls	47f90 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x2f0>
         47da8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         47dac:	e20010ff 	and	r1, r0, #255	; 0xff
         47db0:	e58d1008 	str	r1, [sp, #8]	; fField8
         47db4:	e1a01008 	mov	r1, r8
         47db8:	e1a00004 	mov	r0, r4
         47dbc:	eb6e2ef1 	bl	1bd3988 <TCardPCMCIA::$GetCardDevice(unsigned long const)>
         47dc0:	e1b09000 	movs	r9, r0
         47dc4:	0a00006d 	beq	47f80 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x2e0>
         47dc8:	e5990010 	ldr	r0, [r9, #16]	; fField16
         47dcc:	e3100101 	tst	r0, #1073741824	; 0x40000000
         47dd0:	1a00006a 	bne	47f80 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x2e0>
         47dd4:	e5d90014 	ldrb	r0, [r9, #20]	; fField20
         47dd8:	e3300001 	teq	r0, #1	; 0x1
         47ddc:	13300002 	teqne	r0, #2	; 0x2
         47de0:	059fa018 	ldreq	sl, [pc, #18]	; 47e00 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x160>
         47de4:	0a000008 	beq	47e0c <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x16c>
         47de8:	e3300005 	teq	r0, #5	; 0x5
         47dec:	0a000005 	beq	47e08 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x168>
         47df0:	e3300006 	teq	r0, #6	; 0x6
         47df4:	059fa008 	ldreq	sl, [pc, #8]	; 47e04 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x164>	; fField8
         47df8:	0a000003 	beq	47e0c <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x16c>
         47dfc:	ea00005f 	b	47f80 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x2e0>
         47e00:	726f6d20 	rsbvc	r6, pc, #2048	; 0x800
         47e04:	7372616d 	cmnvc	r2, #1073741851	; 0x4000001b
         47e08:	e59fa0ec 	ldr	sl, [pc, #ec]	; 47efc <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x25c>
         47e0c:	e3a07000 	mov	r7, #0	; 0x0
         47e10:	e3350000 	teq	r5, #0	; 0x0
         47e14:	0a000060 	beq	47f9c <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x2fc>
         47e18:	e3a00000 	mov	r0, #0	; 0x0
         47e1c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         47e20:	e59fc0d4 	ldr	ip, [pc, #d4]	; 47efc <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x25c>
         47e24:	e13a000c 	teq	sl, ip
         47e28:	1a000018 	bne	47e90 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x1f0>
         47e2c:	e1a03008 	mov	r3, r8
         47e30:	e59b2014 	ldr	r2, [fp, #20]	; fField20
         47e34:	e28f1f31 	add	r1, pc, #196	; 0xc4
         47e38:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         47e3c:	e28d300c 	add	r3, sp, #12	; 0xc
         47e40:	e1a02004 	mov	r2, r4
         47e44:	e1a00006 	mov	r0, r6
         47e48:	e59b1008 	ldr	r1, [fp, #8]	; fField8
         47e4c:	eb6bcfcd 	bl	1b3bd88 <TCHMemModem::$NewFlashDriver(TCardSocket *, TCardPCMCIA *, TFlash **, char *, unsigned long, unsigned long)>
         47e50:	e28dd00c 	add	sp, sp, #12	; 0xc
         47e54:	e1b07000 	movs	r7, r0
         47e58:	0a00000c 	beq	47e90 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x1f0>
         47e5c:	e1a03008 	mov	r3, r8
         47e60:	e59b2014 	ldr	r2, [fp, #20]	; fField20
         47e64:	e28f1f29 	add	r1, pc, #164	; 0xa4
         47e68:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         47e6c:	e28d300c 	add	r3, sp, #12	; 0xc
         47e70:	e1a02004 	mov	r2, r4
         47e74:	e1a00006 	mov	r0, r6
         47e78:	e59b1008 	ldr	r1, [fp, #8]	; fField8
         47e7c:	eb6bcfc1 	bl	1b3bd88 <TCHMemModem::$NewFlashDriver(TCardSocket *, TCardPCMCIA *, TFlash **, char *, unsigned long, unsigned long)>
         47e80:	e28dd00c 	add	sp, sp, #12	; 0xc
         47e84:	e1b07000 	movs	r7, r0
         47e88:	128dd008 	addne	sp, sp, #8	; 0x8
         47e8c:	1a00004c 	bne	47fc4 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x324>
         47e90:	e24dd004 	sub	sp, sp, #4	; 0x4
         47e94:	e5990000 	ldr	r0, [r9]
         47e98:	e594100c 	ldr	r1, [r4, #12]	; fField12
         47e9c:	e1510000 	cmp	r1, r0
         47ea0:	85992004 	ldrhi	r2, [r9, #4]	; fField4
         47ea4:	80822000 	addhi	r2, r2, r0
         47ea8:	81520001 	cmphi	r2, r1
         47eac:	81a00001 	movhi	r0, r1
         47eb0:	8a000004 	bhi	47ec8 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x228>
         47eb4:	e5941000 	ldr	r1, [r4]
         47eb8:	e3110102 	tst	r1, #-2147483648	; 0x80000000
         47ebc:	12011101 	andne	r1, r1, #1073741824	; 0x40000000
         47ec0:	13310000 	teqne	r1, #0	; 0x0
         47ec4:	13a00080 	movne	r0, #128	; 0x80
         47ec8:	e2400001 	sub	r0, r0, #1	; 0x1
         47ecc:	e2800a01 	add	r0, r0, #4096	; 0x1000
         47ed0:	e1a02620 	mov	r2, r0, lsr #12
         47ed4:	e1a02602 	mov	r2, r2, lsl #12
         47ed8:	e3a00000 	mov	r0, #0	; 0x0
         47edc:	e58d2000 	str	r2, [sp]
         47ee0:	eb6bcb9e 	bl	1b3ad60 <TCHDeviceInfo::$__ct(void)>
         47ee4:	e3300000 	teq	r0, #0	; 0x0
         47ee8:	1a00000b 	bne	47f1c <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x27c>
         47eec:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         47ef0:	eb0cf96a 	bl	3864a0 <TFlash::Delete(void)>
         47ef4:	e28dd00c 	add	sp, sp, #12	; 0xc
         47ef8:	ea000031 	b	47fc4 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x324>
         47efc:	666c7368 	strvsbt	r7, [ip], -r8, ror #6
         47f00:	54466c61 	strplb	r6, [r6], -#3169
         47f04:	73685365 	cmnvc	r8, #-1811939327	; 0x94000001
         47f08:	72696573 	rsbvc	r6, r9, #482344960	; 0x1cc00000
         47f0c:	32000000 	andcc	r0, r0, #0	; 0x0
         47f10:	54466c61 	strplb	r6, [r6], -#3169
         47f14:	7368414d 	cmnvc	r8, #1073741843	; 0x40000013
         47f18:	44000000 	strmi	r0, [r0]
         47f1c:	e59d1010 	ldr	r1, [sp, #16]	; fField16
         47f20:	e5c01014 	strb	r1, [r0, #20]	; fField20
         47f24:	e5c08015 	strb	r8, [r0, #21]	; fField21
         47f28:	e3a01001 	mov	r1, #1	; 0x1
         47f2c:	e5c01016 	strb	r1, [r0, #22]	; fField22
         47f30:	e580a004 	str	sl, [r0, #4]	; fField4
         47f34:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         47f38:	e5801000 	str	r1, [r0]
         47f3c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         47f40:	e5801008 	str	r1, [r0, #8]	; fField8
         47f44:	e59d2000 	ldr	r2, [sp]
         47f48:	e580200c 	str	r2, [r0, #12]	; fField12
         47f4c:	e5991004 	ldr	r1, [r9, #4]	; fField4
         47f50:	e59d2000 	ldr	r2, [sp]
         47f54:	e5993000 	ldr	r3, [r9]
         47f58:	e0422003 	sub	r2, r2, r3
         47f5c:	e0411002 	sub	r1, r1, r2
         47f60:	e5801010 	str	r1, [r0, #16]	; fField16
         47f64:	e1a02000 	mov	r2, r0
         47f68:	e5951000 	ldr	r1, [r5]
         47f6c:	e1a00005 	mov	r0, r5
         47f70:	eb6e855d 	bl	1be94ec <CList::$InsertAt(long, void *)>
         47f74:	e3a01001 	mov	r1, #1	; 0x1
         47f78:	e5c61036 	strb	r1, [r6, #54]	; fField54
         47f7c:	e28dd008 	add	sp, sp, #8	; 0x8
         47f80:	e2888001 	add	r8, r8, #1	; 0x1
         47f84:	e5d40027 	ldrb	r0, [r4, #39]
         47f88:	e1500008 	cmp	r0, r8
         47f8c:	8affff88 	bhi	47db4 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x114>
         47f90:	e3350000 	teq	r5, #0	; 0x0
         47f94:	03370000 	teqeq	r7, #0	; 0x0
         47f98:	1a000001 	bne	47fa4 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x304>
         47f9c:	e28dd004 	add	sp, sp, #4	; 0x4
         47fa0:	ea000007 	b	47fc4 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x324>
         47fa4:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         47fa8:	e2800001 	add	r0, r0, #1	; 0x1
         47fac:	e58d0000 	str	r0, [sp]
         47fb0:	e1a00004 	mov	r0, r4
         47fb4:	eb6f15cd 	bl	1c0d6f0 <TCardPCMCIA::$GetNumOfCISs(void)>
         47fb8:	e59d1000 	ldr	r1, [sp]
         47fbc:	e1500001 	cmp	r0, r1
         47fc0:	8affff46 	bhi	47ce0 <TCHMemModem::CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x40>
         47fc4:	e1a00007 	mov	r0, r7
         47fc8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::NewFlashDriver(TCardSocket *, TCardPCMCIA *, TFlash **, char *, unsigned long, unsigned long)
 * Address: 00047fcc
 */
TCHMemModem::NewFlashDriver(TCardSocket *, TCardPCMCIA *, TFlash **, char *, unsigned long, unsigned long) {
    /*
         47fcc:	e1a0c00d 	mov	ip, sp
         47fd0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         47fd4:	e24cb004 	sub	fp, ip, #4	; 0x4
         47fd8:	e1a06001 	mov	r6, r1
         47fdc:	e1a05002 	mov	r5, r2
         47fe0:	e1a04003 	mov	r4, r3
         47fe4:	e99b0301 	ldmib	fp, {r0, r8, r9}
         47fe8:	eb0cf921 	bl	386474 <New__6TFlashSFPc>
         47fec:	e1b07000 	movs	r7, r0
         47ff0:	03a050e9 	moveq	r5, #233	; 0xe9
         47ff4:	02455b0a 	subeq	r5, r5, #10240	; 0x2800
         47ff8:	0a000017 	beq	4805c <TCHMemModem::NewFlashDriver(TCardSocket *, TCardPCMCIA *, TFlash **, char *, unsigned long, unsigned long)+0x90>
         47ffc:	e3340000 	teq	r4, #0	; 0x0
         48000:	0a000008 	beq	48028 <TCHMemModem::NewFlashDriver(TCardSocket *, TCardPCMCIA *, TFlash **, char *, unsigned long, unsigned long)+0x5c>
         48004:	e1a03009 	mov	r3, r9
         48008:	e92d0008 	stmdb	sp!, {r3}
         4800c:	e1a03008 	mov	r3, r8
         48010:	e1a02005 	mov	r2, r5
         48014:	e1a01006 	mov	r1, r6
         48018:	e1a00007 	mov	r0, r7
         4801c:	eb0cf986 	bl	38663c <TFlash::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)>
         48020:	e28dd004 	add	sp, sp, #4	; 0x4
         48024:	ea000004 	b	4803c <TCHMemModem::NewFlashDriver(TCardSocket *, TCardPCMCIA *, TFlash **, char *, unsigned long, unsigned long)+0x70>
         48028:	e1a03005 	mov	r3, r5
         4802c:	e1a02006 	mov	r2, r6
         48030:	e1a00007 	mov	r0, r7
         48034:	e3a01000 	mov	r1, #0	; 0x0
         48038:	eb0cf97c 	bl	386630 <TFlash::FlashSpecific(unsigned long, void *, unsigned long)>
         4803c:	e1b05000 	movs	r5, r0
         48040:	1a000001 	bne	4804c <TCHMemModem::NewFlashDriver(TCardSocket *, TCardPCMCIA *, TFlash **, char *, unsigned long, unsigned long)+0x80>
         48044:	e3340000 	teq	r4, #0	; 0x0
         48048:	1a000002 	bne	48058 <TCHMemModem::NewFlashDriver(TCardSocket *, TCardPCMCIA *, TFlash **, char *, unsigned long, unsigned long)+0x8c>
         4804c:	e1a00007 	mov	r0, r7
         48050:	eb0cf912 	bl	3864a0 <TFlash::Delete(void)>
         48054:	ea000000 	b	4805c <TCHMemModem::NewFlashDriver(TCardSocket *, TCardPCMCIA *, TFlash **, char *, unsigned long, unsigned long)+0x90>
         48058:	e5847000 	str	r7, [r4]
         4805c:	e1a00005 	mov	r0, r5
         48060:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)
 * Address: 00048064
 */
TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long) {
    /*
         48064:	e1a0c00d 	mov	ip, sp
         48068:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         4806c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         48070:	e24cb014 	sub	fp, ip, #20	; 0x14
         48074:	e1a06000 	mov	r6, r0
         48078:	e1a05001 	mov	r5, r1
         4807c:	e1a04002 	mov	r4, r2
         48080:	e3e00f41 	mvn	r0, #260	; 0x104
         48084:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         48088:	e3a09000 	mov	r9, #0	; 0x0
         4808c:	e52d0008 	str	r0, [sp, -#8]!	; fField8
         48090:	e1a00002 	mov	r0, r2
         48094:	eb6f1595 	bl	1c0d6f0 <TCardPCMCIA::$GetNumOfCISs(void)>
         48098:	e3500000 	cmp	r0, #0	; 0x0
         4809c:	859f1008 	ldrhi	r1, [pc, #8]	; 480ac <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x48>	; fField8
         480a0:	858d1004 	strhi	r1, [sp, #4]	; fField4
         480a4:	8a000008 	bhi	480cc <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x68>
         480a8:	ea000094 	b	48300 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x29c>
         480ac:	00366e14 	eoreqs	r6, r6, r4, lsl lr
         480b0:	e3590000 	cmp	r9, #0	; 0x0
         480b4:	9a000004 	bls	480cc <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x68>
         480b8:	e1a01009 	mov	r1, r9
         480bc:	e1a00004 	mov	r0, r4
         480c0:	eb6f158b 	bl	1c0d6f4 <TCardPCMCIA::$GetCardCIS(unsigned long const)>
         480c4:	e1b04000 	movs	r4, r0
         480c8:	0a00008c 	beq	48300 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x29c>
         480cc:	e3a0a000 	mov	sl, #0	; 0x0
         480d0:	e3a07000 	mov	r7, #0	; 0x0
         480d4:	e1a00004 	mov	r0, r4
         480d8:	eb6f1988 	bl	1c0e700 <TCardPCMCIA::$GetNumOfCardFunctions(void)>
         480dc:	e3500000 	cmp	r0, #0	; 0x0
         480e0:	9a000010 	bls	48128 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0xc4>
         480e4:	e1a01007 	mov	r1, r7
         480e8:	e1a00004 	mov	r0, r4
         480ec:	eb6f1984 	bl	1c0e704 <TCardPCMCIA::$GetCardFunction(unsigned long const)>
         480f0:	e1b0a000 	movs	sl, r0
         480f4:	0a000003 	beq	48108 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0xa4>
         480f8:	e5da0000 	ldrb	r0, [sl]
         480fc:	e3300002 	teq	r0, #2	; 0x2
         48100:	0a000006 	beq	48120 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0xbc>
         48104:	e3a0a000 	mov	sl, #0	; 0x0
         48108:	e2877001 	add	r7, r7, #1	; 0x1
         4810c:	e1a00004 	mov	r0, r4
         48110:	eb6f197a 	bl	1c0e700 <TCardPCMCIA::$GetNumOfCardFunctions(void)>
         48114:	e1500007 	cmp	r0, r7
         48118:	8afffff1 	bhi	480e4 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x80>
         4811c:	ea000001 	b	48128 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0xc4>
         48120:	e33a0000 	teq	sl, #0	; 0x0
         48124:	1a000007 	bne	48148 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0xe4>
         48128:	e1a00004 	mov	r0, r4
         4812c:	eb6e2e1a 	bl	1bd399c <TCardPCMCIA::$GetCardV1String4( const(void))>
         48130:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         48134:	e5911000 	ldr	r1, [r1]
         48138:	e3a02004 	mov	r2, #4	; 0x4
         4813c:	eb6db65d 	bl	1bb5ab8 <$strncmp>
         48140:	e3300000 	teq	r0, #0	; 0x0
         48144:	1a000068 	bne	482ec <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x288>
         48148:	e59b0010 	ldr	r0, [fp, #16]	; fField16
         4814c:	e3300000 	teq	r0, #0	; 0x0
         48150:	03a00000 	moveq	r0, #0	; 0x0
         48154:	0a000028 	beq	481fc <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x198>
         48158:	e3a07000 	mov	r7, #0	; 0x0
         4815c:	e5d40028 	ldrb	r0, [r4, #40]
         48160:	e3500000 	cmp	r0, #0	; 0x0
         48164:	9a000065 	bls	48300 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x29c>
         48168:	e1a01007 	mov	r1, r7
         4816c:	e1a00004 	mov	r0, r4
         48170:	eb6e2e03 	bl	1bd3984 <TCardPCMCIA::$GetCardConfiguration(unsigned long const)>
         48174:	e1b08000 	movs	r8, r0
         48178:	0a000006 	beq	48198 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x134>
         4817c:	e59800a8 	ldr	r0, [r8, #168]
         48180:	e3300ffe 	teq	r0, #1016	; 0x3f8
         48184:	13300fbe 	teqne	r0, #760	; 0x2f8
         48188:	13300ffa 	teqne	r0, #1000	; 0x3e8
         4818c:	13300fba 	teqne	r0, #744	; 0x2e8
         48190:	13300000 	teqne	r0, #0	; 0x0
         48194:	0a000004 	beq	481ac <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x148>
         48198:	e2877001 	add	r7, r7, #1	; 0x1
         4819c:	e5d40028 	ldrb	r0, [r4, #40]
         481a0:	e1500007 	cmp	r0, r7
         481a4:	8affffef 	bhi	48168 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x104>
         481a8:	ea000054 	b	48300 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x29c>
         481ac:	e3380000 	teq	r8, #0	; 0x0
         481b0:	0a000052 	beq	48300 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x29c>
         481b4:	e3a00d09 	mov	r0, #576	; 0x240
         481b8:	e280093d 	add	r0, r0, #999424	; 0xf4000
         481bc:	e598114c 	ldr	r1, [r8, #332]
         481c0:	eb6da9e0 	bl	1bb2948 <$__rt_udiv>
         481c4:	e2801f7d 	add	r1, r0, #500	; 0x1f4
         481c8:	e3a00fe2 	mov	r0, #904	; 0x388
         481cc:	e2800a01 	add	r0, r0, #4096	; 0x1000
         481d0:	e1510000 	cmp	r1, r0
         481d4:	31a01000 	movcc	r1, r0
         481d8:	e3a00064 	mov	r0, #100	; 0x64
         481dc:	eb6da9d9 	bl	1bb2948 <$__rt_udiv>
         481e0:	e5860040 	str	r0, [r6, #64]	; fField64
         481e4:	e3a00000 	mov	r0, #0	; 0x0
         481e8:	eb6bcadc 	bl	1b3ad60 <TCHDeviceInfo::$__ct(void)>
         481ec:	e1b07000 	movs	r7, r0
         481f0:	1a000003 	bne	48204 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x1a0>
         481f4:	e3a000e9 	mov	r0, #233	; 0xe9
         481f8:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         481fc:	e58d0000 	str	r0, [sp]
         48200:	ea00003e 	b	48300 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x29c>
         48204:	e5c79014 	strb	r9, [r7, #20]	; fField20
         48208:	e59f00d0 	ldr	r0, [pc, #d0]	; 482e0 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x27c>
         4820c:	e5870004 	str	r0, [r7, #4]	; fField4
         48210:	e3a00002 	mov	r0, #2	; 0x2
         48214:	e5c70016 	strb	r0, [r7, #22]	; fField22
         48218:	e5d80155 	ldrb	r0, [r8, #341]
         4821c:	e5c70017 	strb	r0, [r7, #23]
         48220:	e1a00005 	mov	r0, r5
         48224:	eb6e3a36 	bl	1bd6b04 <TCardSocket::$IOBaseAddr(void)>
         48228:	e59810a8 	ldr	r1, [r8, #168]
         4822c:	e0800001 	add	r0, r0, r1
         48230:	e587001c 	str	r0, [r7, #28]
         48234:	e5d80157 	ldrb	r0, [r8, #343]
         48238:	e5c7002f 	strb	r0, [r7, #47]
         4823c:	e1a00005 	mov	r0, r5
         48240:	eb6e1d5a 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         48244:	e5941010 	ldr	r1, [r4, #16]	; fField16
         48248:	e0800001 	add	r0, r0, r1
         4824c:	e5870018 	str	r0, [r7, #24]
         48250:	e3a00000 	mov	r0, #0	; 0x0
         48254:	e587a024 	str	sl, [r7, #36]
         48258:	e5c70015 	strb	r0, [r7, #21]	; fField21
         4825c:	e1a00005 	mov	r0, r5
         48260:	eb6e52f5 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         48264:	e28001c5 	add	r0, r0, #1073741873	; 0x40000031
         48268:	e2400be3 	sub	r0, r0, #232448	; 0x38c00
         4826c:	e24006c9 	sub	r0, r0, #210763776	; 0xc900000
         48270:	e2800101 	add	r0, r0, #1073741824	; 0x40000000
         48274:	e5870020 	str	r0, [r7, #32]
         48278:	e1a02007 	mov	r2, r7
         4827c:	e59b0010 	ldr	r0, [fp, #16]	; fField16
         48280:	e5901000 	ldr	r1, [r0]
         48284:	e59b0010 	ldr	r0, [fp, #16]	; fField16
         48288:	eb6e8497 	bl	1be94ec <CList::$InsertAt(long, void *)>
         4828c:	e1a02007 	mov	r2, r7
         48290:	e1a01004 	mov	r1, r4
         48294:	e1a00006 	mov	r0, r6
         48298:	eb6bcebd 	bl	1b3bd94 <TCHMemModem::$SaveSerialChipInfo(TCardPCMCIA *, TCHDeviceInfo *)>
         4829c:	e1a02007 	mov	r2, r7
         482a0:	e1a01005 	mov	r1, r5
         482a4:	e1a00006 	mov	r0, r6
         482a8:	eb6bceb8 	bl	1b3bd90 <TCHMemModem::$AllocateSerialDriver(TCardSocket *, TCHDeviceInfo *)>
         482ac:	e58d0000 	str	r0, [sp]
         482b0:	e3300000 	teq	r0, #0	; 0x0
         482b4:	0a00000a 	beq	482e4 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x280>
         482b8:	e59b0010 	ldr	r0, [fp, #16]	; fField16
         482bc:	e5900000 	ldr	r0, [r0]
         482c0:	e2401001 	sub	r1, r0, #1	; 0x1
         482c4:	e3a02001 	mov	r2, #1	; 0x1
         482c8:	e59b0010 	ldr	r0, [fp, #16]	; fField16
         482cc:	eb6e90d8 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         482d0:	e1a00007 	mov	r0, r7
         482d4:	e3a01001 	mov	r1, #1	; 0x1
         482d8:	eb6bcaa1 	bl	1b3ad64 <TCHDeviceInfo::$__dt(void)>
         482dc:	ea000007 	b	48300 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x29c>
         482e0:	636f6d6d 	cmnvs	pc, #6976	; 0x1b40
         482e4:	e3a00001 	mov	r0, #1	; 0x1
         482e8:	e5c60037 	strb	r0, [r6, #55]	; fField55
         482ec:	e2899001 	add	r9, r9, #1	; 0x1
         482f0:	e1a00004 	mov	r0, r4
         482f4:	eb6f14fd 	bl	1c0d6f0 <TCardPCMCIA::$GetNumOfCISs(void)>
         482f8:	e1500009 	cmp	r0, r9
         482fc:	8affff6b 	bhi	480b0 <TCHMemModem::CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)+0x4c>
         48300:	e49d0008 	ldr	r0, [sp], #8	; fField8
         48304:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::AllocateSerialDriver(TCardSocket *, TCHDeviceInfo *)
 * Address: 00048308
 */
TCHMemModem::AllocateSerialDriver(TCardSocket *, TCHDeviceInfo *) {
    /*
         48308:	e1a0c00d 	mov	ip, sp
         4830c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         48310:	e24cb004 	sub	fp, ip, #4	; 0x4
         48314:	e1a06000 	mov	r6, r0
         48318:	e1a05001 	mov	r5, r1
         4831c:	e1a04002 	mov	r4, r2
         48320:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         48324:	e1a0000d 	mov	r0, sp
         48328:	eb686bad 	bl	1a631e4 <THMOSerialPCMCIAHardware::$__ct(void)>
         4832c:	e58d500c 	str	r5, [sp, #12]	; fField12
         48330:	e58d6010 	str	r6, [sp, #16]	; fField16
         48334:	e594001c 	ldr	r0, [r4, #28]
         48338:	e58d0014 	str	r0, [sp, #20]	; fField20
         4833c:	e5940020 	ldr	r0, [r4, #32]
         48340:	e58d0018 	str	r0, [sp, #24]
         48344:	e28f1f09 	add	r1, pc, #36	; 0x24
         48348:	e28f0f0d 	add	r0, pc, #52	; 0x34
         4834c:	eb6e3e0e 	bl	1bd7b8c <$NewByName__FPCcT1>
         48350:	e3300000 	teq	r0, #0	; 0x0
         48354:	03a000e9 	moveq	r0, #233	; 0xe9
         48358:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         4835c:	0a000002 	beq	4836c <TCHMemModem::AllocateSerialDriver(TCardSocket *, TCHDeviceInfo *)+0x64>
         48360:	e1a0100d 	mov	r1, sp
         48364:	e5a40008 	str	r0, [r4, #8]!	; fField8
         48368:	eb0cf244 	bl	384c80 <TSerialChip::InitByOption(TOption *)>
         4836c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         48370:	54536572 	ldrplb	r6, [r3], -#1394
         48374:	69616c43 	stmvsdb	r1!, {r0, r1, r6, sl, fp, sp, lr}^
         48378:	68697031 	stmvsda	r9!, {r0, r4, r5, ip, sp, lr}^
         4837c:	36343530 	undefined
         48380:	00000000 	andeq	r0, r0, r0
         48384:	54536572 	ldrplb	r6, [r3], -#1394
         48388:	69616c43 	stmvsdb	r1!, {r0, r1, r6, sl, fp, sp, lr}^
         4838c:	68697000 	stmvsda	r9!, {ip, sp, lr}^
    */
}

/**
 * Symbol: TCHMemModem::SaveSerialChipInfo(TCardPCMCIA *, TCHDeviceInfo *)
 * Address: 00048390
 */
TCHMemModem::SaveSerialChipInfo(TCardPCMCIA *, TCHDeviceInfo *) {
    /*
         48390:	e1a0c00d 	mov	ip, sp
         48394:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         48398:	e24cb004 	sub	fp, ip, #4	; 0x4
         4839c:	e1a05001 	mov	r5, r1
         483a0:	e1a04002 	mov	r4, r2
         483a4:	e3a0a000 	mov	sl, #0	; 0x0
         483a8:	e3a09000 	mov	r9, #0	; 0x0
         483ac:	e3a080ff 	mov	r8, #255	; 0xff
         483b0:	e5927024 	ldr	r7, [r2, #36]
         483b4:	e3370000 	teq	r7, #0	; 0x0
         483b8:	0a000014 	beq	48410 <TCHMemModem::SaveSerialChipInfo(TCardPCMCIA *, TCHDeviceInfo *)+0x80>
         483bc:	e3a06000 	mov	r6, #0	; 0x0
         483c0:	e1a00007 	mov	r0, r7
         483c4:	eb6f14c6 	bl	1c0d6e4 <TCardFunction::$GetNumOfFuncExts(void)>
         483c8:	e3500000 	cmp	r0, #0	; 0x0
         483cc:	9a00000f 	bls	48410 <TCHMemModem::SaveSerialChipInfo(TCardPCMCIA *, TCHDeviceInfo *)+0x80>
         483d0:	e1a01006 	mov	r1, r6
         483d4:	e1a00007 	mov	r0, r7
         483d8:	eb6f14c2 	bl	1c0d6e8 <TCardFunction::$GetFuncExt(unsigned long const)>
         483dc:	e5f01001 	ldrb	r1, [r0, #1]!	; fField1
         483e0:	e3310000 	teq	r1, #0	; 0x0
         483e4:	1a000004 	bne	483fc <TCHMemModem::SaveSerialChipInfo(TCardPCMCIA *, TCHDeviceInfo *)+0x6c>
         483e8:	e5d01001 	ldrb	r1, [r0, #1]	; fField1
         483ec:	e201801f 	and	r8, r1, #31	; 0x1f
         483f0:	e5d0a002 	ldrb	sl, [r0, #2]	; fField2
         483f4:	e5d09003 	ldrb	r9, [r0, #3]	; fField3
         483f8:	ea000004 	b	48410 <TCHMemModem::SaveSerialChipInfo(TCardPCMCIA *, TCHDeviceInfo *)+0x80>
         483fc:	e2866001 	add	r6, r6, #1	; 0x1
         48400:	e1a00007 	mov	r0, r7
         48404:	eb6f14b6 	bl	1c0d6e4 <TCardFunction::$GetNumOfFuncExts(void)>
         48408:	e1500006 	cmp	r0, r6
         4840c:	8affffef 	bhi	483d0 <TCHMemModem::SaveSerialChipInfo(TCardPCMCIA *, TCHDeviceInfo *)+0x40>
         48410:	e5c4a02c 	strb	sl, [r4, #44]
         48414:	e5c4902d 	strb	r9, [r4, #45]
         48418:	e5c4802e 	strb	r8, [r4, #46]
         4841c:	e5950018 	ldr	r0, [r5, #24]
         48420:	e1a00820 	mov	r0, r0, lsr #16
         48424:	e5c40029 	strb	r0, [r4, #41]
         48428:	e1a00440 	mov	r0, r0, asr #8
         4842c:	e5c40028 	strb	r0, [r4, #40]
         48430:	e595001a 	ldr	r0, [r5, #26]
         48434:	e1a00820 	mov	r0, r0, lsr #16
         48438:	e5c4002b 	strb	r0, [r4, #43]
         4843c:	e1a00440 	mov	r0, r0, asr #8
         48440:	e5c4002a 	strb	r0, [r4, #42]
         48444:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::SetBusAccess(TCardSocket *, TCardPCMCIA *)
 * Address: 00048448
 */
TCHMemModem::SetBusAccess(TCardSocket *, TCardPCMCIA *) {
    /*
         48448:	e1a0c00d 	mov	ip, sp
         4844c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         48450:	e24cb004 	sub	fp, ip, #4	; 0x4
         48454:	e1a05000 	mov	r5, r0
         48458:	e1a04001 	mov	r4, r1
         4845c:	e1a06002 	mov	r6, r2
         48460:	e1a00001 	mov	r0, r1
         48464:	eb6e2d50 	bl	1bd39ac <TCardSocket::$GetControl(void)>
         48468:	e3c00010 	bic	r0, r0, #16	; 0x10
         4846c:	e5961000 	ldr	r1, [r6]
         48470:	e2111402 	ands	r1, r1, #33554432	; 0x2000000
         48474:	13a01010 	movne	r1, #16	; 0x10
         48478:	e1801001 	orr	r1, r0, r1
         4847c:	e1a00004 	mov	r0, r4
         48480:	eb6e4e44 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         48484:	e5d50037 	ldrb	r0, [r5, #55]	; fField55
         48488:	e3300000 	teq	r0, #0	; 0x0
         4848c:	11a00004 	movne	r0, r4
         48490:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         48494:	1a6e4a22 	bne	1bdad24 <TCardSocket::$SelectIOInterface(void)>
         48498:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::SuspendServices(void)
 * Address: 0004849c
 */
TCHMemModem::SuspendServices(void) {
    /*
         4849c:	e1a0c00d 	mov	ip, sp
         484a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         484a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         484a8:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         484ac:	e3a04000 	mov	r4, #0	; 0x0
         484b0:	e5b0103c 	ldr	r1, [r0, #60]!	; fField60
         484b4:	e1a0000d 	mov	r0, sp
         484b8:	eb6e6b49 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         484bc:	e1a0000d 	mov	r0, sp
         484c0:	eb6e7bcc 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         484c4:	e1b01000 	movs	r1, r0
         484c8:	0a00000b 	beq	484fc <TCHMemModem::SuspendServices(void)+0x60>
         484cc:	e5910008 	ldr	r0, [r1, #8]	; fField8
         484d0:	e3300000 	teq	r0, #0	; 0x0
         484d4:	0a000004 	beq	484ec <TCHMemModem::SuspendServices(void)+0x50>
         484d8:	e5d11016 	ldrb	r1, [r1, #22]	; fField22
         484dc:	e3310001 	teq	r1, #1	; 0x1
         484e0:	1a000001 	bne	484ec <TCHMemModem::SuspendServices(void)+0x50>
         484e4:	eb0cf857 	bl	386648 <TFlash::SuspendService(void)>
         484e8:	e1a04000 	mov	r4, r0
         484ec:	e1a0000d 	mov	r0, sp
         484f0:	eb6e8c2a 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         484f4:	e1b01000 	movs	r1, r0
         484f8:	1afffff3 	bne	484cc <TCHMemModem::SuspendServices(void)+0x30>
         484fc:	e1a0000d 	mov	r0, sp
         48500:	e3a01000 	mov	r1, #0	; 0x0
         48504:	eb6e6f57 	bl	1be4268 <CArrayIterator::$__dt(void)>
         48508:	e1a00004 	mov	r0, r4
         4850c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::ResumeServices(TCardSocket *, TCardPCMCIA *, unsigned long)
 * Address: 00048510
 */
TCHMemModem::ResumeServices(TCardSocket *, TCardPCMCIA *, unsigned long) {
    /*
         48510:	e1a0c00d 	mov	ip, sp
         48514:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         48518:	e24cb004 	sub	fp, ip, #4	; 0x4
         4851c:	e1a04000 	mov	r4, r0
         48520:	e1a05001 	mov	r5, r1
         48524:	e1a06002 	mov	r6, r2
         48528:	e1a07003 	mov	r7, r3
         4852c:	e3a09000 	mov	r9, #0	; 0x0
         48530:	eb6bce18 	bl	1b3bd98 <TCHMemModem::$SetBusAccess(TCardSocket *, TCardPCMCIA *)>
         48534:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         48538:	e1a0000d 	mov	r0, sp
         4853c:	e594103c 	ldr	r1, [r4, #60]	; fField60
         48540:	eb6e6b27 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         48544:	e1a0000d 	mov	r0, sp
         48548:	eb6e7baa 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         4854c:	e1b08000 	movs	r8, r0
         48550:	e3a0a000 	mov	sl, #0	; 0x0
         48554:	0a000018 	beq	485bc <TCHMemModem::ResumeServices(TCardSocket *, TCardPCMCIA *, unsigned long)+0xac>
         48558:	e5980008 	ldr	r0, [r8, #8]	; fField8
         4855c:	e3300000 	teq	r0, #0	; 0x0
         48560:	0a000011 	beq	485ac <TCHMemModem::ResumeServices(TCardSocket *, TCardPCMCIA *, unsigned long)+0x9c>
         48564:	e5d81016 	ldrb	r1, [r8, #22]	; fField22
         48568:	e3310001 	teq	r1, #1	; 0x1
         4856c:	1a000004 	bne	48584 <TCHMemModem::ResumeServices(TCardSocket *, TCardPCMCIA *, unsigned long)+0x74>
         48570:	e1a03007 	mov	r3, r7
         48574:	e1a02006 	mov	r2, r6
         48578:	e1a01005 	mov	r1, r5
         4857c:	eb0cf834 	bl	386654 <TFlash::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long)>
         48580:	ea000008 	b	485a8 <TCHMemModem::ResumeServices(TCardSocket *, TCardPCMCIA *, unsigned long)+0x98>
         48584:	e5d41035 	ldrb	r1, [r4, #53]	; fField53
         48588:	e3310000 	teq	r1, #0	; 0x0
         4858c:	0a000006 	beq	485ac <TCHMemModem::ResumeServices(TCardSocket *, TCardPCMCIA *, unsigned long)+0x9c>
         48590:	eb0cf168 	bl	384b38 <TSerialChip::Delete(void)>
         48594:	e588a008 	str	sl, [r8, #8]	; fField8
         48598:	e1a02008 	mov	r2, r8
         4859c:	e1a01005 	mov	r1, r5
         485a0:	e1a00004 	mov	r0, r4
         485a4:	eb6bcdf9 	bl	1b3bd90 <TCHMemModem::$AllocateSerialDriver(TCardSocket *, TCHDeviceInfo *)>
         485a8:	e1a09000 	mov	r9, r0
         485ac:	e1a0000d 	mov	r0, sp
         485b0:	eb6e8bfa 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         485b4:	e1b08000 	movs	r8, r0
         485b8:	1affffe6 	bne	48558 <TCHMemModem::ResumeServices(TCardSocket *, TCardPCMCIA *, unsigned long)+0x48>
         485bc:	e1a0000d 	mov	r0, sp
         485c0:	e3a01000 	mov	r1, #0	; 0x0
         485c4:	eb6e6f27 	bl	1be4268 <CArrayIterator::$__dt(void)>
         485c8:	e1a00009 	mov	r0, r9
         485cc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::EmergencyShutdown(void)
 * Address: 000485d0
 */
TCHMemModem::EmergencyShutdown(void) {
    /*
         485d0:	e1a0c00d 	mov	ip, sp
         485d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         485d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         485dc:	e1a04000 	mov	r4, r0
         485e0:	e3a00001 	mov	r0, #1	; 0x1
         485e4:	e5c40035 	strb	r0, [r4, #53]	; fField53
         485e8:	e594003c 	ldr	r0, [r4, #60]	; fField60
         485ec:	e5900000 	ldr	r0, [r0]
         485f0:	e2505001 	subs	r5, r0, #1	; 0x1
         485f4:	4a00000e 	bmi	48634 <TCHMemModem::EmergencyShutdown(void)+0x64>
         485f8:	e1a01005 	mov	r1, r5
         485fc:	e594003c 	ldr	r0, [r4, #60]	; fField60
         48600:	eb6e774f 	bl	1be6344 <CList::$At(long)>
         48604:	e1a01000 	mov	r1, r0
         48608:	e5900008 	ldr	r0, [r0, #8]	; fField8
         4860c:	e3300000 	teq	r0, #0	; 0x0
         48610:	0a000005 	beq	4862c <TCHMemModem::EmergencyShutdown(void)+0x5c>
         48614:	e5d11016 	ldrb	r1, [r1, #22]	; fField22
         48618:	e3310001 	teq	r1, #1	; 0x1
         4861c:	1a000001 	bne	48628 <TCHMemModem::EmergencyShutdown(void)+0x58>
         48620:	eb0cf808 	bl	386648 <TFlash::SuspendService(void)>
         48624:	ea000000 	b	4862c <TCHMemModem::EmergencyShutdown(void)+0x5c>
         48628:	eb0cf18e 	bl	384c68 <TSerialChip::CardRemoved(void)>
         4862c:	e2555001 	subs	r5, r5, #1	; 0x1
         48630:	5afffff0 	bpl	485f8 <TCHMemModem::EmergencyShutdown(void)+0x28>
         48634:	e3a00000 	mov	r0, #0	; 0x0
         48638:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::WriteTuple(unsigned char *, unsigned char *, unsigned long, unsigned char)
 * Address: 0004863c
 */
TCHMemModem::WriteTuple(unsigned char *, unsigned char *, unsigned long, unsigned char) {
    /*
         4863c:	e1a0c00d 	mov	ip, sp
         48640:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         48644:	e24cb004 	sub	fp, ip, #4	; 0x4
         48648:	e1a05001 	mov	r5, r1
         4864c:	e1a06002 	mov	r6, r2
         48650:	e1a04003 	mov	r4, r3
         48654:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         48658:	e21080ff 	ands	r8, r0, #255	; 0xff
         4865c:	13a08001 	movne	r8, #1	; 0x1
         48660:	e3a07000 	mov	r7, #0	; 0x0
         48664:	e3540000 	cmp	r4, #0	; 0x0
         48668:	9a000006 	bls	48688 <TCHMemModem::WriteTuple(unsigned char *, unsigned char *, unsigned long, unsigned char)+0x4c>
         4866c:	e0850817 	add	r0, r5, r7, lsl r8
         48670:	e2200003 	eor	r0, r0, #3	; 0x3
         48674:	e7d61007 	ldrb	r1, [r6, r7]
         48678:	eb6e1c57 	bl	1bcf7dc <$CardAttrMemWriteByte(void *, unsigned char)>
         4867c:	e2877001 	add	r7, r7, #1	; 0x1
         48680:	e1570004 	cmp	r7, r4
         48684:	3afffff8 	bcc	4866c <TCHMemModem::WriteTuple(unsigned char *, unsigned char *, unsigned long, unsigned char)+0x30>
         48688:	e0850814 	add	r0, r5, r4, lsl r8
         4868c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: Sizeof__11TCHMemModemSFv
 * Address: 00048690
 */
void TCHMemModem::Sizeof() {
    /*
         48690:	e3a00044 	mov	r0, #68	; 0x44
         48694:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)
 * Address: 00048698
 */
TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *) {
    /*
         48698:	e1a0c00d 	mov	ip, sp
         4869c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         486a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         486a4:	e1a04000 	mov	r4, r0
         486a8:	e1a06001 	mov	r6, r1
         486ac:	e1a05002 	mov	r5, r2
         486b0:	e3a00000 	mov	r0, #0	; 0x0
         486b4:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         486b8:	e1a00002 	mov	r0, r2
         486bc:	e3a01000 	mov	r1, #0	; 0x0
         486c0:	eb6e2cb0 	bl	1bd3988 <TCardPCMCIA::$GetCardDevice(unsigned long const)>
         486c4:	e5951000 	ldr	r1, [r5]
         486c8:	e3110101 	tst	r1, #1073741824	; 0x40000000
         486cc:	0a000002 	beq	486dc <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0x44>
         486d0:	e5d01014 	ldrb	r1, [r0, #20]	; fField20
         486d4:	e3310006 	teq	r1, #6	; 0x6
         486d8:	0a000001 	beq	486e4 <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0x4c>
         486dc:	e49d0004 	ldr	r0, [sp], #4	; fField4
         486e0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         486e4:	e5900004 	ldr	r0, [r0, #4]	; fField4
         486e8:	e3a01001 	mov	r1, #1	; 0x1
         486ec:	e3500901 	cmp	r0, #16384	; 0x4000
         486f0:	91a004a0 	movls	r0, r0, lsr #9
         486f4:	92400001 	subls	r0, r0, #1	; 0x1
         486f8:	91a00180 	movls	r0, r0, lsl #3
         486fc:	9a00001b 	bls	48770 <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0xd8>
         48700:	e3500801 	cmp	r0, #65536	; 0x10000
         48704:	91a005a0 	movls	r0, r0, lsr #11
         48708:	92400001 	subls	r0, r0, #1	; 0x1
         4870c:	9a00000e 	bls	4874c <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0xb4>
         48710:	e3500701 	cmp	r0, #262144	; 0x40000
         48714:	91a006a0 	movls	r0, r0, lsr #13
         48718:	92401001 	subls	r1, r0, #1	; 0x1
         4871c:	93a00002 	movls	r0, #2	; 0x2
         48720:	9a000011 	bls	4876c <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0xd4>
         48724:	e3500601 	cmp	r0, #1048576	; 0x100000
         48728:	91a007a0 	movls	r0, r0, lsr #15
         4872c:	92401001 	subls	r1, r0, #1	; 0x1
         48730:	93a00003 	movls	r0, #3	; 0x3
         48734:	9a00000c 	bls	4876c <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0xd4>
         48738:	e3500501 	cmp	r0, #4194304	; 0x400000
         4873c:	8a000004 	bhi	48754 <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0xbc>
         48740:	e1a008a0 	mov	r0, r0, lsr #17
         48744:	e2400001 	sub	r0, r0, #1	; 0x1
         48748:	e3a01004 	mov	r1, #4	; 0x4
         4874c:	e0810180 	add	r0, r1, r0, lsl #3
         48750:	ea000006 	b	48770 <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0xd8>
         48754:	e3500401 	cmp	r0, #16777216	; 0x1000000
         48758:	81a00aa0 	movhi	r0, r0, lsr #21
         4875c:	91a009a0 	movls	r0, r0, lsr #19
         48760:	e2401001 	sub	r1, r0, #1	; 0x1
         48764:	83a00006 	movhi	r0, #6	; 0x6
         48768:	93a00005 	movls	r0, #5	; 0x5
         4876c:	e0800181 	add	r0, r0, r1, lsl #3
         48770:	e59f7084 	ldr	r7, [pc, #84]	; 487fc <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0x164>
         48774:	e5c70003 	strb	r0, [r7, #3]	; fField3
         48778:	e3a00000 	mov	r0, #0	; 0x0
         4877c:	e52d006c 	str	r0, [sp, -#108]!
         48780:	e28d0008 	add	r0, sp, #8	; 0x8
         48784:	eb6da87a 	bl	1bb2974 <$setjmp>
         48788:	e3300000 	teq	r0, #0	; 0x0
         4878c:	1a000041 	bne	48898 <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0x200>
         48790:	e1a0000d 	mov	r0, sp
         48794:	eb6e5e38 	bl	1be007c <$AddExceptionHandler>
         48798:	e5950000 	ldr	r0, [r5]
         4879c:	e3100102 	tst	r0, #-2147483648	; 0x80000000
         487a0:	e59f5058 	ldr	r5, [pc, #58]	; 48800 <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0x168>
         487a4:	e1a00006 	mov	r0, r6
         487a8:	1a000016 	bne	48808 <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0x170>
         487ac:	eb6e1bff 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         487b0:	e1a01000 	mov	r1, r0
         487b4:	e3a03001 	mov	r3, #1	; 0x1
         487b8:	e92d0008 	stmdb	sp!, {r3}
         487bc:	e1a02007 	mov	r2, r7
         487c0:	e1a00004 	mov	r0, r4
         487c4:	e3a03005 	mov	r3, #5	; 0x5
         487c8:	eb6bcd76 	bl	1b3bda8 <TCHMemModem::$WriteTuple(unsigned char *, unsigned char *, unsigned long, unsigned char)>
         487cc:	e28dd004 	add	sp, sp, #4	; 0x4
         487d0:	e1a01000 	mov	r1, r0
         487d4:	e3a03001 	mov	r3, #1	; 0x1
         487d8:	e92d0008 	stmdb	sp!, {r3}
         487dc:	e59f2020 	ldr	r2, [pc, #20]	; 48804 <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0x16c>	; fField20
         487e0:	e1a00004 	mov	r0, r4
         487e4:	e3a03002 	mov	r3, #2	; 0x2
         487e8:	eb6bcd6e 	bl	1b3bda8 <TCHMemModem::$WriteTuple(unsigned char *, unsigned char *, unsigned long, unsigned char)>
         487ec:	e28dd004 	add	sp, sp, #4	; 0x4
         487f0:	e1a01000 	mov	r1, r0
         487f4:	e3a03001 	mov	r3, #1	; 0x1
         487f8:	ea00001d 	b	48874 <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0x1dc>
         487fc:	0c1008e8 	ldceq	8, cr0, [r0], -#928
         48800:	0c1008f4 	ldceq	8, cr0, [r0], -#976
         48804:	0c1008f0 	ldceq	8, cr0, [r0], -#960
         48808:	eb6e2008 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         4880c:	e1a01000 	mov	r1, r0
         48810:	e3a03000 	mov	r3, #0	; 0x0
         48814:	e92d0008 	stmdb	sp!, {r3}
         48818:	e59f2070 	ldr	r2, [pc, #70]	; 48890 <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0x1f8>
         4881c:	e1a00004 	mov	r0, r4
         48820:	e3a03005 	mov	r3, #5	; 0x5
         48824:	eb6bcd5f 	bl	1b3bda8 <TCHMemModem::$WriteTuple(unsigned char *, unsigned char *, unsigned long, unsigned char)>
         48828:	e28dd004 	add	sp, sp, #4	; 0x4
         4882c:	e1a01000 	mov	r1, r0
         48830:	e3a03000 	mov	r3, #0	; 0x0
         48834:	e92d0008 	stmdb	sp!, {r3}
         48838:	e1a02007 	mov	r2, r7
         4883c:	e1a00004 	mov	r0, r4
         48840:	e3a03005 	mov	r3, #5	; 0x5
         48844:	eb6bcd57 	bl	1b3bda8 <TCHMemModem::$WriteTuple(unsigned char *, unsigned char *, unsigned long, unsigned char)>
         48848:	e28dd004 	add	sp, sp, #4	; 0x4
         4884c:	e1a01000 	mov	r1, r0
         48850:	e3a03000 	mov	r3, #0	; 0x0
         48854:	e92d0008 	stmdb	sp!, {r3}
         48858:	e59f2034 	ldr	r2, [pc, #34]	; 48894 <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0x1fc>
         4885c:	e1a00004 	mov	r0, r4
         48860:	e3a03013 	mov	r3, #19	; 0x13
         48864:	eb6bcd4f 	bl	1b3bda8 <TCHMemModem::$WriteTuple(unsigned char *, unsigned char *, unsigned long, unsigned char)>
         48868:	e28dd004 	add	sp, sp, #4	; 0x4
         4886c:	e1a01000 	mov	r1, r0
         48870:	e3a03000 	mov	r3, #0	; 0x0
         48874:	e92d0008 	stmdb	sp!, {r3}
         48878:	e1a02005 	mov	r2, r5
         4887c:	e1a00004 	mov	r0, r4
         48880:	e3a03001 	mov	r3, #1	; 0x1
         48884:	eb6bcd47 	bl	1b3bda8 <TCHMemModem::$WriteTuple(unsigned char *, unsigned char *, unsigned long, unsigned char)>
         48888:	e28dd004 	add	sp, sp, #4	; 0x4
         4888c:	ea00000b 	b	488c0 <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0x228>
         48890:	0c1008f8 	ldceq	8, cr0, [r0], -#992
         48894:	0c100900 	ldceq	9, cr0, [r0]
         48898:	e59d0060 	ldr	r0, [sp, #96]
         4889c:	e28f1f0b 	add	r1, pc, #44	; 0x2c
         488a0:	eb6e6a3b 	bl	1be3194 <$Subexception>
         488a4:	e3300000 	teq	r0, #0	; 0x0
         488a8:	13a000b5 	movne	r0, #181	; 0xb5
         488ac:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         488b0:	158d006c 	strne	r0, [sp, #108]
         488b4:	1a000001 	bne	488c0 <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0x228>
         488b8:	e1a0000d 	mov	r0, sp
         488bc:	eb6e6624 	bl	1be2154 <$NextHandler>
         488c0:	e1a0000d 	mov	r0, sp
         488c4:	eb6e61fb 	bl	1be10b8 <$ExitHandler>
         488c8:	e28dd06c 	add	sp, sp, #108	; 0x6c
         488cc:	eaffff82 	b	486dc <TCHMemModem::FormatCIS(TCardSocket *, TCardPCMCIA *)+0x44>
         488d0:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TCHMemModem::CardStatus(void)
 * Address: 000488d4
 */
TCHMemModem::CardStatus(void) {
    /*
         488d4:	e1a0c00d 	mov	ip, sp
         488d8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         488dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         488e0:	e1a04000 	mov	r4, r0
         488e4:	e3a05003 	mov	r5, #3	; 0x3
         488e8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         488ec:	eb6e3887 	bl	1bd6b10 <TCardSocket::$IsIOInteface(void)>
         488f0:	e3300000 	teq	r0, #0	; 0x0
         488f4:	13a08000 	movne	r8, #0	; 0x0
         488f8:	13a06000 	movne	r6, #0	; 0x0
         488fc:	13a07000 	movne	r7, #0	; 0x0
         48900:	1a000018 	bne	48968 <TCHMemModem::CardStatus(void)+0x94>
         48904:	e5940010 	ldr	r0, [r4, #16]	; fField16
         48908:	eb6e514b 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         4890c:	e1a06000 	mov	r6, r0
         48910:	e3a01000 	mov	r1, #0	; 0x0
         48914:	eb6e556f 	bl	1bdded8 <$VccOn(int, unsigned char)>
         48918:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         4891c:	eb6e303b 	bl	1bd4a10 <TCardSocket::$GetPCPins(void)>
         48920:	e2001018 	and	r1, r0, #24	; 0x18
         48924:	e1a051a1 	mov	r5, r1, lsr #3
         48928:	e3100020 	tst	r0, #32	; 0x20
         4892c:	13855004 	orrne	r5, r5, #4	; 0x4
         48930:	e3100004 	tst	r0, #4	; 0x4
         48934:	03855008 	orreq	r5, r5, #8	; 0x8
         48938:	e1a00006 	mov	r0, r6
         4893c:	ea000023 	b	489d0 <TCHMemModem::CardStatus(void)+0xfc>
         48940:	e1a01007 	mov	r1, r7
         48944:	eb6e767e 	bl	1be6344 <CList::$At(long)>
         48948:	e5d01016 	ldrb	r1, [r0, #22]	; fField22
         4894c:	e3310001 	teq	r1, #1	; 0x1
         48950:	15d0602f 	ldrneb	r6, [r0, #47]
         48954:	13360000 	teqne	r6, #0	; 0x0
         48958:	15900018 	ldrne	r0, [r0, #24]
         4895c:	12800004 	addne	r0, r0, #4	; 0x4
         48960:	12208003 	eorne	r8, r0, #3	; 0x3
         48964:	e2877001 	add	r7, r7, #1	; 0x1
         48968:	e594003c 	ldr	r0, [r4, #60]	; fField60
         4896c:	e5901000 	ldr	r1, [r0]
         48970:	e1510007 	cmp	r1, r7
         48974:	9a000001 	bls	48980 <TCHMemModem::CardStatus(void)+0xac>
         48978:	e3360000 	teq	r6, #0	; 0x0
         4897c:	0affffef 	beq	48940 <TCHMemModem::CardStatus(void)+0x6c>
         48980:	e3360000 	teq	r6, #0	; 0x0
         48984:	0a000012 	beq	489d4 <TCHMemModem::CardStatus(void)+0x100>
         48988:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         4898c:	eb6e512a 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         48990:	e1a04000 	mov	r4, r0
         48994:	e3a01000 	mov	r1, #0	; 0x0
         48998:	eb6e554e 	bl	1bdded8 <$VccOn(int, unsigned char)>
         4899c:	e5d80000 	ldrb	r0, [r8]
         489a0:	e3160001 	tst	r6, #1	; 0x1
         489a4:	1200100c 	andne	r1, r0, #12	; 0xc
         489a8:	11a05121 	movne	r5, r1, lsr #2
         489ac:	e3160002 	tst	r6, #2	; 0x2
         489b0:	12001001 	andne	r1, r0, #1	; 0x1
         489b4:	13310000 	teqne	r1, #0	; 0x0
         489b8:	13855004 	orrne	r5, r5, #4	; 0x4
         489bc:	e3160004 	tst	r6, #4	; 0x4
         489c0:	0a000001 	beq	489cc <TCHMemModem::CardStatus(void)+0xf8>
         489c4:	e3100002 	tst	r0, #2	; 0x2
         489c8:	03855008 	orreq	r5, r5, #8	; 0x8
         489cc:	e1a00004 	mov	r0, r4
         489d0:	eb6e553d 	bl	1bddecc <$VccOff(int)>
         489d4:	e1a00005 	mov	r0, r5
         489d8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::CardIdString(TCardPCMCIA *)
 * Address: 000489dc
 */
TCHMemModem::CardIdString(TCardPCMCIA *) {
    /*
         489dc:	e1a0c00d 	mov	ip, sp
         489e0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         489e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         489e8:	e1a05000 	mov	r5, r0
         489ec:	e1b04001 	movs	r4, r1
         489f0:	e3a09000 	mov	r9, #0	; 0x0
         489f4:	e5c09014 	strb	r9, [r0, #20]	; fField20
         489f8:	e2806014 	add	r6, r0, #20	; 0x14
         489fc:	0a000030 	beq	48ac4 <TCHMemModem::CardIdString(TCardPCMCIA *)+0xe8>
         48a00:	e1a00004 	mov	r0, r4
         48a04:	eb6e2be0 	bl	1bd398c <TCardPCMCIA::$GetCardManufacturer( const(void))>
         48a08:	e1a07000 	mov	r7, r0
         48a0c:	e1a00004 	mov	r0, r4
         48a10:	eb6e2bdf 	bl	1bd3994 <TCardPCMCIA::$GetCardProduct( const(void))>
         48a14:	e1a08000 	mov	r8, r0
         48a18:	e1a00006 	mov	r0, r6
         48a1c:	e1a01007 	mov	r1, r7
         48a20:	e3a0201f 	mov	r2, #31	; 0x1f
         48a24:	eb6db424 	bl	1bb5abc <$strncpy>
         48a28:	e1a00007 	mov	r0, r7
         48a2c:	eb6db41f 	bl	1bb5ab0 <$strlen>
         48a30:	e260701f 	rsb	r7, r0, #31	; 0x1f
         48a34:	e3570000 	cmp	r7, #0	; 0x0
         48a38:	da000020 	ble	48ac0 <TCHMemModem::CardIdString(TCardPCMCIA *)+0xe4>
         48a3c:	e1a00006 	mov	r0, r6
         48a40:	e1a02007 	mov	r2, r7
         48a44:	e1a01008 	mov	r1, r8
         48a48:	eb6db419 	bl	1bb5ab4 <$strncat>
         48a4c:	e1a00008 	mov	r0, r8
         48a50:	eb6db416 	bl	1bb5ab0 <$strlen>
         48a54:	e0477000 	sub	r7, r7, r0
         48a58:	e595003c 	ldr	r0, [r5, #60]	; fField60
         48a5c:	e5901000 	ldr	r1, [r0]
         48a60:	e2411001 	sub	r1, r1, #1	; 0x1
         48a64:	eb6e7636 	bl	1be6344 <CList::$At(long)>
         48a68:	e3300000 	teq	r0, #0	; 0x0
         48a6c:	0a000013 	beq	48ac0 <TCHMemModem::CardIdString(TCardPCMCIA *)+0xe4>
         48a70:	e3570000 	cmp	r7, #0	; 0x0
         48a74:	da000011 	ble	48ac0 <TCHMemModem::CardIdString(TCardPCMCIA *)+0xe4>
         48a78:	e5d01016 	ldrb	r1, [r0, #22]	; fField22
         48a7c:	e3310001 	teq	r1, #1	; 0x1
         48a80:	1a00000e 	bne	48ac0 <TCHMemModem::CardIdString(TCardPCMCIA *)+0xe4>
         48a84:	e24ddc01 	sub	sp, sp, #256	; 0x100
         48a88:	e5d01015 	ldrb	r1, [r0, #21]	; fField21
         48a8c:	e1a00004 	mov	r0, r4
         48a90:	eb6e2bbc 	bl	1bd3988 <TCardPCMCIA::$GetCardDevice(unsigned long const)>
         48a94:	e5901004 	ldr	r1, [r0, #4]	; fField4
         48a98:	e1a03521 	mov	r3, r1, lsr #10
         48a9c:	e5b02008 	ldr	r2, [r0, #8]!	; fField8
         48aa0:	e1a0000d 	mov	r0, sp
         48aa4:	e28f1f08 	add	r1, pc, #32	; 0x20
         48aa8:	eb6db3f9 	bl	1bb5a94 <$sprintf>
         48aac:	e1a00006 	mov	r0, r6
         48ab0:	e1a02007 	mov	r2, r7
         48ab4:	e1a0100d 	mov	r1, sp
         48ab8:	eb6db3fd 	bl	1bb5ab4 <$strncat>
         48abc:	e28ddc01 	add	sp, sp, #256	; 0x100
         48ac0:	e5c59033 	strb	r9, [r5, #51]	; fField51
         48ac4:	e1a00006 	mov	r0, r6
         48ac8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         48acc:	2564206e 	strcsb	r2, [r4, -#110]!
         48ad0:	73202564 	teqvc	r0, #419430400	; 0x19000000
         48ad4:	4b206279 	blmi	8614c0 <ROM$$Size+0x141874>
         48ad8:	74657300 	strvcbt	r7, [r5], -#768	; fField768
    */
}

/**
 * Symbol: TCHMemModem::GetNumberOfDevice(void)
 * Address: 00048adc
 */
TCHMemModem::GetNumberOfDevice(void) {
    /*
         48adc:	e590003c 	ldr	r0, [r0, #60]	; fField60
         48ae0:	e5900000 	ldr	r0, [r0]
         48ae4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCHMemModem::GetDeviceInfo(unsigned long, unsigned long *, unsigned long *, void **, unsigned long *, unsigned long *)
 * Address: 00048ae8
 */
TCHMemModem::GetDeviceInfo(unsigned long, unsigned long *, unsigned long *, void **, unsigned long *, unsigned long *) {
    /*
         48ae8:	e1a0c00d 	mov	ip, sp
         48aec:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         48af0:	e24cb004 	sub	fp, ip, #4	; 0x4
         48af4:	e1a05002 	mov	r5, r2
         48af8:	e1a04003 	mov	r4, r3
         48afc:	e59b600c 	ldr	r6, [fp, #12]	; fField12
         48b00:	e59b7008 	ldr	r7, [fp, #8]	; fField8
         48b04:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         48b08:	e590003c 	ldr	r0, [r0, #60]	; fField60
         48b0c:	e5902000 	ldr	r2, [r0]
         48b10:	e1520001 	cmp	r2, r1
         48b14:	991ba9f0 	ldmlsdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         48b18:	eb6e7609 	bl	1be6344 <CList::$At(long)>
         48b1c:	e3300000 	teq	r0, #0	; 0x0
         48b20:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         48b24:	e5901004 	ldr	r1, [r0, #4]	; fField4
         48b28:	e5851000 	str	r1, [r5]
         48b2c:	e5901000 	ldr	r1, [r0]
         48b30:	e3310000 	teq	r1, #0	; 0x0
         48b34:	03a01000 	moveq	r1, #0	; 0x0
         48b38:	15911000 	ldrne	r1, [r1]
         48b3c:	e5841000 	str	r1, [r4]
         48b40:	e5901008 	ldr	r1, [r0, #8]	; fField8
         48b44:	e5881000 	str	r1, [r8]
         48b48:	e590100c 	ldr	r1, [r0, #12]	; fField12
         48b4c:	e5871000 	str	r1, [r7]
         48b50:	e5900010 	ldr	r0, [r0, #16]	; fField16
         48b54:	e5860000 	str	r0, [r6]
         48b58:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::SetCardServerPort(unsigned long)
 * Address: 00048b5c
 */
TCHMemModem::SetCardServerPort(unsigned long) {
    /*
         48b5c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCHMemModem::GetRemovableHandler(void)
 * Address: 00048b60
 */
TCHMemModem::GetRemovableHandler(void) {
    /*
         48b60:	e5d00034 	ldrb	r0, [r0, #52]	; fField52
         48b64:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCHMemModem::SetRemovableHandler(unsigned char)
 * Address: 00048b68
 */
TCHMemModem::SetRemovableHandler(unsigned char) {
    /*
         48b68:	e5c01034 	strb	r1, [r0, #52]	; fField52
         48b6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)
 * Address: 00048b70
 */
TCHMemModem::CardSpecific(unsigned long, void *, unsigned long) {
    /*
         48b70:	e1a0c00d 	mov	ip, sp
         48b74:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         48b78:	e24cb004 	sub	fp, ip, #4	; 0x4
         48b7c:	e1a04000 	mov	r4, r0
         48b80:	e1a08001 	mov	r8, r1
         48b84:	e1a05002 	mov	r5, r2
         48b88:	e3a07000 	mov	r7, #0	; 0x0
         48b8c:	e3a06000 	mov	r6, #0	; 0x0
         48b90:	e3310009 	teq	r1, #9	; 0x9
         48b94:	1a000009 	bne	48bc0 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x50>
         48b98:	e5856000 	str	r6, [r5]
         48b9c:	e1a01003 	mov	r1, r3
         48ba0:	e5b4003c 	ldr	r0, [r4, #60]!	; fField60
         48ba4:	eb6e75e6 	bl	1be6344 <CList::$At(long)>
         48ba8:	e5901008 	ldr	r1, [r0, #8]	; fField8
         48bac:	e3310000 	teq	r1, #0	; 0x0
         48bb0:	15900020 	ldrne	r0, [r0, #32]
         48bb4:	15850000 	strne	r0, [r5]
         48bb8:	e1a00006 	mov	r0, r6
         48bbc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         48bc0:	e1a09003 	mov	r9, r3
         48bc4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         48bc8:	e1a0000d 	mov	r0, sp
         48bcc:	e594103c 	ldr	r1, [r4, #60]	; fField60
         48bd0:	eb6e6983 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         48bd4:	e1a0000d 	mov	r0, sp
         48bd8:	eb6e7a06 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         48bdc:	e1b06000 	movs	r6, r0
         48be0:	0a00000c 	beq	48c18 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0xa8>
         48be4:	e3390000 	teq	r9, #0	; 0x0
         48be8:	0a000003 	beq	48bfc <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x8c>
         48bec:	e5960008 	ldr	r0, [r6, #8]	; fField8
         48bf0:	e1300009 	teq	r0, r9
         48bf4:	0a000007 	beq	48c18 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0xa8>
         48bf8:	ea000002 	b	48c08 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x98>
         48bfc:	e5d60016 	ldrb	r0, [r6, #22]	; fField22
         48c00:	e3300002 	teq	r0, #2	; 0x2
         48c04:	0a000003 	beq	48c18 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0xa8>
         48c08:	e1a0000d 	mov	r0, sp
         48c0c:	eb6e8a63 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         48c10:	e1b06000 	movs	r6, r0
         48c14:	1afffff2 	bne	48be4 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x74>
         48c18:	e1a0000d 	mov	r0, sp
         48c1c:	e3a01000 	mov	r1, #0	; 0x0
         48c20:	eb6e6d90 	bl	1be4268 <CArrayIterator::$__dt(void)>
         48c24:	e28dd01c 	add	sp, sp, #28	; 0x1c
         48c28:	e59f003c 	ldr	r0, [pc, #3c]	; 48c6c <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0xfc>	; fField3
         48c2c:	e3360000 	teq	r6, #0	; 0x0
         48c30:	0a00006a 	beq	48de0 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x270>
         48c34:	e358000a 	cmp	r8, #10	; 0xa
         48c38:	0a000063 	beq	48dcc <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x25c>
         48c3c:	ca00000b 	bgt	48c70 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x100>
         48c40:	e3380000 	teq	r8, #0	; 0x0
         48c44:	0a000013 	beq	48c98 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x128>
         48c48:	e3380001 	teq	r8, #1	; 0x1
         48c4c:	0a000030 	beq	48d14 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x1a4>
         48c50:	e3380002 	teq	r8, #2	; 0x2
         48c54:	1a000061 	bne	48de0 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x270>
         48c58:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         48c5c:	eb6e5076 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         48c60:	e3a01000 	mov	r1, #0	; 0x0
         48c64:	eb6e5499 	bl	1bdded0 <$VccOff(int, unsigned long)>
         48c68:	ea00005d 	b	48de4 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x274>
         48c6c:	ffffd8eb 	swinv	0x00ffd8eb
         48c70:	e338000b 	teq	r8, #11	; 0xb
         48c74:	0a00005c 	beq	48dec <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x27c>
         48c78:	e338000c 	teq	r8, #12	; 0xc
         48c7c:	1a000057 	bne	48de0 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x270>
         48c80:	e3350000 	teq	r5, #0	; 0x0
         48c84:	e3a01004 	mov	r1, #4	; 0x4
         48c88:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         48c8c:	0a00005a 	beq	48dfc <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x28c>
         48c90:	eb6e2310 	bl	1bd18d8 <TCardSocket::$EnableSocketInterrupt(TSocketInt)>
         48c94:	ea000052 	b	48de4 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x274>
         48c98:	e5950008 	ldr	r0, [r5, #8]	; fField8
         48c9c:	e2000cff 	and	r0, r0, #65280	; 0xff00
         48ca0:	e5951000 	ldr	r1, [r5]
         48ca4:	e59fc064 	ldr	ip, [pc, #64]	; 48d10 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x1a0>	; fField64
         48ca8:	e131000c 	teq	r1, ip
         48cac:	13e07003 	mvnne	r7, #3	; 0x3
         48cb0:	1a00004b 	bne	48de4 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x274>
         48cb4:	e3300b01 	teq	r0, #1024	; 0x400
         48cb8:	13e07000 	mvnne	r7, #0	; 0x0
         48cbc:	1a000048 	bne	48de4 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x274>
         48cc0:	e5d6002c 	ldrb	r0, [r6, #44]
         48cc4:	e3300000 	teq	r0, #0	; 0x0
         48cc8:	15c50016 	strneb	r0, [r5, #22]	; fField22
         48ccc:	e5d6002d 	ldrb	r0, [r6, #45]
         48cd0:	e3300000 	teq	r0, #0	; 0x0
         48cd4:	15c50017 	strneb	r0, [r5, #23]
         48cd8:	e5d6002e 	ldrb	r0, [r6, #46]
         48cdc:	e33000ff 	teq	r0, #255	; 0xff
         48ce0:	15c50018 	strneb	r0, [r5, #24]
         48ce4:	e5960028 	ldr	r0, [r6, #40]
         48ce8:	e1a00820 	mov	r0, r0, lsr #16
         48cec:	e5c5001d 	strb	r0, [r5, #29]
         48cf0:	e1a00440 	mov	r0, r0, asr #8
         48cf4:	e5c5001c 	strb	r0, [r5, #28]
         48cf8:	e596002a 	ldr	r0, [r6, #42]
         48cfc:	e1a00820 	mov	r0, r0, lsr #16
         48d00:	e5c5001f 	strb	r0, [r5, #31]
         48d04:	e1a00440 	mov	r0, r0, asr #8
         48d08:	e5c5001e 	strb	r0, [r5, #30]
         48d0c:	ea000034 	b	48de4 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x274>
         48d10:	73657273 	cmnvc	r5, #805306375	; 0x30000007
         48d14:	e5940010 	ldr	r0, [r4, #16]	; fField16
         48d18:	eb6e5047 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         48d1c:	e3a01000 	mov	r1, #0	; 0x0
         48d20:	eb6e546c 	bl	1bdded8 <$VccOn(int, unsigned char)>
         48d24:	e5960018 	ldr	r0, [r6, #24]
         48d28:	e220a003 	eor	sl, r0, #3	; 0x3
         48d2c:	e2800002 	add	r0, r0, #2	; 0x2
         48d30:	e2209003 	eor	r9, r0, #3	; 0x3
         48d34:	e5940010 	ldr	r0, [r4, #16]	; fField16
         48d38:	eb6e3bab 	bl	1bd7bec <TCardSocket::$PCMCIAReset(void)>
         48d3c:	e3a08000 	mov	r8, #0	; 0x0
         48d40:	e59f507c 	ldr	r5, [pc, #7c]	; 48dc4 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x254>
         48d44:	e2888001 	add	r8, r8, #1	; 0x1
         48d48:	e1a00005 	mov	r0, r5
         48d4c:	eb6e5036 	bl	1bdce2c <$Sleep(unsigned long)>
         48d50:	e5940040 	ldr	r0, [r4, #64]	; fField64
         48d54:	e1500008 	cmp	r0, r8
         48d58:	3a000003 	bcc	48d6c <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x1fc>
         48d5c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         48d60:	eb6e376e 	bl	1bd6b20 <TCardSocket::$IsReady(void)>
         48d64:	e3300000 	teq	r0, #0	; 0x0
         48d68:	0afffff5 	beq	48d44 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x1d4>
         48d6c:	e5940040 	ldr	r0, [r4, #64]	; fField64
         48d70:	e1500008 	cmp	r0, r8
         48d74:	8a000006 	bhi	48d94 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x224>
         48d78:	e3e01005 	mvn	r1, #5	; 0x5
         48d7c:	e2411c29 	sub	r1, r1, #10496	; 0x2900
         48d80:	e1a07001 	mov	r7, r1
         48d84:	e59f003c 	ldr	r0, [pc, #3c]	; 48dc8 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x258>	; fField3
         48d88:	e5900000 	ldr	r0, [r0]
         48d8c:	e3a02000 	mov	r2, #0	; 0x0
         48d90:	eb6e6901 	bl	1be319c <$Throw>
         48d94:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         48d98:	eb6e47e1 	bl	1bdad24 <TCardSocket::$SelectIOInterface(void)>
         48d9c:	e5d60017 	ldrb	r0, [r6, #23]
         48da0:	e3800040 	orr	r0, r0, #64	; 0x40
         48da4:	e5ca0000 	strb	r0, [sl]
         48da8:	e5d90000 	ldrb	r0, [r9]
         48dac:	e3800008 	orr	r0, r0, #8	; 0x8
         48db0:	e5c90000 	strb	r0, [r9]
         48db4:	e3a000cc 	mov	r0, #204	; 0xcc
         48db8:	e2800b07 	add	r0, r0, #7168	; 0x1c00
         48dbc:	eb6e501a 	bl	1bdce2c <$Sleep(unsigned long)>
         48dc0:	ea000007 	b	48de4 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x274>
         48dc4:	00059fd8 	ldreqd	r9, [r5], -r8
         48dc8:	003712b4 	ldreqh	r1, [r7], -r4
         48dcc:	e1a03009 	mov	r3, r9
         48dd0:	e1a02005 	mov	r2, r5
         48dd4:	e3a01004 	mov	r1, #4	; 0x4
         48dd8:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         48ddc:	eb6e43a8 	bl	1bd9c84 <TCardSocket::$RegisterSocketInterrupt(TSocketInt, long (*)(void *, TCardSocket *), void *)>
         48de0:	e1a07000 	mov	r7, r0
         48de4:	e1a00007 	mov	r0, r7
         48de8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         48dec:	e3a01004 	mov	r1, #4	; 0x4
         48df0:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         48df4:	eb6e22a4 	bl	1bd188c <TCardSocket::$DeregisterSocketInterrupt(TSocketInt)>
         48df8:	eafffff9 	b	48de4 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x274>
         48dfc:	eb6e22ae 	bl	1bd18bc <TCardSocket::$DisableSocketInterrupt(TSocketInt)>
         48e00:	eafffff7 	b	48de4 <TCHMemModem::CardSpecific(unsigned long, void *, unsigned long)+0x274>
    */
}

/**
 * Symbol: TCHMemModem::New(void)
 * Address: 00048e04
 */
TCHMemModem::New(void) {
    /*
         48e04:	e1a0c00d 	mov	ip, sp
         48e08:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         48e0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         48e10:	e1a04000 	mov	r4, r0
         48e14:	e3a00000 	mov	r0, #0	; 0x0
         48e18:	eb6e6d03 	bl	1be422c <CList::$__ct(void)>
         48e1c:	e584003c 	str	r0, [r4, #60]	; fField60
         48e20:	e3a00000 	mov	r0, #0	; 0x0
         48e24:	eb6e6d00 	bl	1be422c <CList::$__ct(void)>
         48e28:	e3a05000 	mov	r5, #0	; 0x0
         48e2c:	e5840038 	str	r0, [r4, #56]	; fField56
         48e30:	e5c45034 	strb	r5, [r4, #52]	; fField52
         48e34:	e594103c 	ldr	r1, [r4, #60]	; fField60
         48e38:	e3310000 	teq	r1, #0	; 0x0
         48e3c:	13300000 	teqne	r0, #0	; 0x0
         48e40:	e1a00004 	mov	r0, r4
         48e44:	1a000002 	bne	48e54 <TCHMemModem::New(void)+0x50>
         48e48:	eb6bc7c7 	bl	1b3ad6c <TCHMemModem::$Delete(void)>
         48e4c:	e1a00005 	mov	r0, r5
         48e50:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         48e54:	eb6bc7c5 	bl	1b3ad70 <TCHMemModem::$Clear(void)>
         48e58:	e1a00004 	mov	r0, r4
         48e5c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::Delete(void)
 * Address: 00048e60
 */
TCHMemModem::Delete(void) {
    /*
         48e60:	e1a0c00d 	mov	ip, sp
         48e64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         48e68:	e24cb004 	sub	fp, ip, #4	; 0x4
         48e6c:	e1a04000 	mov	r4, r0
         48e70:	eb6bc7be 	bl	1b3ad70 <TCHMemModem::$Clear(void)>
         48e74:	e594003c 	ldr	r0, [r4, #60]	; fField60
         48e78:	e3300000 	teq	r0, #0	; 0x0
         48e7c:	13a01001 	movne	r1, #1	; 0x1
         48e80:	1b6e70ff 	blne	1be5284 <CList::$__dt(void)>
         48e84:	e5b40038 	ldr	r0, [r4, #56]!	; fField56
         48e88:	e3300000 	teq	r0, #0	; 0x0
         48e8c:	13a01001 	movne	r1, #1	; 0x1
         48e90:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         48e94:	1a6e70fa 	bne	1be5284 <CList::$__dt(void)>
         48e98:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::Clear(void)
 * Address: 00048e9c
 */
TCHMemModem::Clear(void) {
    /*
         48e9c:	e1a0c00d 	mov	ip, sp
         48ea0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         48ea4:	e24cb004 	sub	fp, ip, #4	; 0x4
         48ea8:	e1a04000 	mov	r4, r0
         48eac:	e590003c 	ldr	r0, [r0, #60]	; fField60
         48eb0:	e5901000 	ldr	r1, [r0]
         48eb4:	e2411001 	sub	r1, r1, #1	; 0x1
         48eb8:	eb6e7521 	bl	1be6344 <CList::$At(long)>
         48ebc:	e3300000 	teq	r0, #0	; 0x0
         48ec0:	0a00000d 	beq	48efc <TCHMemModem::Clear(void)+0x60>
         48ec4:	e3300000 	teq	r0, #0	; 0x0
         48ec8:	13a01001 	movne	r1, #1	; 0x1
         48ecc:	1b6bc7a4 	blne	1b3ad64 <TCHDeviceInfo::$__dt(void)>
         48ed0:	e594003c 	ldr	r0, [r4, #60]	; fField60
         48ed4:	e5901000 	ldr	r1, [r0]
         48ed8:	e2411001 	sub	r1, r1, #1	; 0x1
         48edc:	e3a02001 	mov	r2, #1	; 0x1
         48ee0:	eb6e8dd3 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         48ee4:	e594003c 	ldr	r0, [r4, #60]	; fField60
         48ee8:	e5901000 	ldr	r1, [r0]
         48eec:	e2411001 	sub	r1, r1, #1	; 0x1
         48ef0:	eb6e7513 	bl	1be6344 <CList::$At(long)>
         48ef4:	e3300000 	teq	r0, #0	; 0x0
         48ef8:	1afffff1 	bne	48ec4 <TCHMemModem::Clear(void)+0x28>
         48efc:	e3a01000 	mov	r1, #0	; 0x0
         48f00:	e5841010 	str	r1, [r4, #16]	; fField16
         48f04:	e5841040 	str	r1, [r4, #64]	; fField64
         48f08:	e5c41035 	strb	r1, [r4, #53]	; fField53
         48f0c:	e5c41036 	strb	r1, [r4, #54]	; fField54
         48f10:	e5c41037 	strb	r1, [r4, #55]	; fField55
         48f14:	e3a00000 	mov	r0, #0	; 0x0
         48f18:	e0842000 	add	r2, r4, r0
         48f1c:	e5c21014 	strb	r1, [r2, #20]	; fField20
         48f20:	e2800001 	add	r0, r0, #1	; 0x1
         48f24:	e3500020 	cmp	r0, #32	; 0x20
         48f28:	3afffffa 	bcc	48f18 <TCHMemModem::Clear(void)+0x7c>
         48f2c:	e5940038 	ldr	r0, [r4, #56]	; fField56
         48f30:	e5901000 	ldr	r1, [r0]
         48f34:	e2411001 	sub	r1, r1, #1	; 0x1
         48f38:	eb6e7501 	bl	1be6344 <CList::$At(long)>
         48f3c:	e1b05000 	movs	r5, r0
         48f40:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         48f44:	e5940038 	ldr	r0, [r4, #56]	; fField56
         48f48:	e5901000 	ldr	r1, [r0]
         48f4c:	e2411001 	sub	r1, r1, #1	; 0x1
         48f50:	e3a02001 	mov	r2, #1	; 0x1
         48f54:	eb6e8db6 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         48f58:	e3350000 	teq	r5, #0	; 0x0
         48f5c:	0a000004 	beq	48f74 <TCHMemModem::Clear(void)+0xd8>
         48f60:	e1a00005 	mov	r0, r5
         48f64:	e3a01000 	mov	r1, #0	; 0x0
         48f68:	eb6e15ed 	bl	1bce724 <TUObject::$__dt(void)>
         48f6c:	e1a00005 	mov	r0, r5
         48f70:	eb6e11da 	bl	1bcd6e0 <$__dl(void *)>
         48f74:	e5940038 	ldr	r0, [r4, #56]	; fField56
         48f78:	e5901000 	ldr	r1, [r0]
         48f7c:	e2411001 	sub	r1, r1, #1	; 0x1
         48f80:	eb6e74ef 	bl	1be6344 <CList::$At(long)>
         48f84:	e1b05000 	movs	r5, r0
         48f88:	1affffed 	bne	48f44 <TCHMemModem::Clear(void)+0xa8>
         48f8c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)
 * Address: 00048f90
 */
TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *) {
    /*
         48f90:	e1a0c00d 	mov	ip, sp
         48f94:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         48f98:	e24cb004 	sub	fp, ip, #4	; 0x4
         48f9c:	e1a06000 	mov	r6, r0
         48fa0:	e1a05001 	mov	r5, r1
         48fa4:	e1b04002 	movs	r4, r2
         48fa8:	e3e08f41 	mvn	r8, #260	; 0x104
         48fac:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
         48fb0:	13350000 	teqne	r5, #0	; 0x0
         48fb4:	0a0000c6 	beq	492d4 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x344>
         48fb8:	e1a00005 	mov	r0, r5
         48fbc:	eb6e36dd 	bl	1bd6b38 <TCardSocket::$IsWriteProtected(void)>
         48fc0:	e3300000 	teq	r0, #0	; 0x0
         48fc4:	13e0800f 	mvnne	r8, #15	; 0xf
         48fc8:	12488c29 	subne	r8, r8, #10496	; 0x2900
         48fcc:	1a0000c0 	bne	492d4 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x344>
         48fd0:	e24dd008 	sub	sp, sp, #8	; 0x8
         48fd4:	e3a00000 	mov	r0, #0	; 0x0
         48fd8:	e58d0004 	str	r0, [sp, #4]	; fField4
         48fdc:	e58d0000 	str	r0, [sp]
         48fe0:	e1a00005 	mov	r0, r5
         48fe4:	eb6e19f1 	bl	1bcf7b0 <TCardSocket::$AttributeMemBaseAddr(void)>
         48fe8:	e1a09000 	mov	r9, r0
         48fec:	e1a00005 	mov	r0, r5
         48ff0:	eb6e1e0e 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         48ff4:	e1a07000 	mov	r7, r0
         48ff8:	e24dd004 	sub	sp, sp, #4	; 0x4
         48ffc:	e1a00005 	mov	r0, r5
         49000:	eb6e2a68 	bl	1bd39a8 <TCardSocket::$GetCommonMemSpeed(void)>
         49004:	e58d0000 	str	r0, [sp]
         49008:	e1a00005 	mov	r0, r5
         4900c:	e3a01f96 	mov	r1, #600	; 0x258
         49010:	eb6e4b5f 	bl	1bdbd94 <TCardSocket::$SetCommonMemSpeed(unsigned long)>
         49014:	e3a00000 	mov	r0, #0	; 0x0
         49018:	e52d006c 	str	r0, [sp, -#108]!
         4901c:	e28d0008 	add	r0, sp, #8	; 0x8
         49020:	eb6da653 	bl	1bb2974 <$setjmp>
         49024:	e3300000 	teq	r0, #0	; 0x0
         49028:	1a00005a 	bne	49198 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x208>
         4902c:	e1a0000d 	mov	r0, sp
         49030:	eb6e5c11 	bl	1be007c <$AddExceptionHandler>
         49034:	e24dd008 	sub	sp, sp, #8	; 0x8
         49038:	e229a003 	eor	sl, r9, #3	; 0x3
         4903c:	e2890004 	add	r0, r9, #4	; 0x4
         49040:	e2209003 	eor	r9, r0, #3	; 0x3
         49044:	e1a0000a 	mov	r0, sl
         49048:	eb6e19e1 	bl	1bcf7d4 <$CardAttrMemReadByte(void *)>
         4904c:	e58d0004 	str	r0, [sp, #4]	; fField4
         49050:	e1a00009 	mov	r0, r9
         49054:	eb6e19de 	bl	1bcf7d4 <$CardAttrMemReadByte(void *)>
         49058:	e58d0000 	str	r0, [sp]
         4905c:	e1a0000a 	mov	r0, sl
         49060:	e3a0105a 	mov	r1, #90	; 0x5a
         49064:	eb6e19dc 	bl	1bcf7dc <$CardAttrMemWriteByte(void *, unsigned char)>
         49068:	e1a00009 	mov	r0, r9
         4906c:	e3a010a5 	mov	r1, #165	; 0xa5
         49070:	eb6e19d9 	bl	1bcf7dc <$CardAttrMemWriteByte(void *, unsigned char)>
         49074:	e24dd004 	sub	sp, sp, #4	; 0x4
         49078:	e1a0000a 	mov	r0, sl
         4907c:	eb6e19d4 	bl	1bcf7d4 <$CardAttrMemReadByte(void *)>
         49080:	e58d0000 	str	r0, [sp]
         49084:	e1a00009 	mov	r0, r9
         49088:	eb6e19d1 	bl	1bcf7d4 <$CardAttrMemReadByte(void *)>
         4908c:	e59d1000 	ldr	r1, [sp]
         49090:	e331005a 	teq	r1, #90	; 0x5a
         49094:	033000a5 	teqeq	r0, #165	; 0xa5
         49098:	13a00001 	movne	r0, #1	; 0x1
         4909c:	03a00000 	moveq	r0, #0	; 0x0
         490a0:	e58d007c 	str	r0, [sp, #124]
         490a4:	e1a0000a 	mov	r0, sl
         490a8:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         490ac:	eb6e19ca 	bl	1bcf7dc <$CardAttrMemWriteByte(void *, unsigned char)>
         490b0:	e1a00009 	mov	r0, r9
         490b4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         490b8:	eb6e19c7 	bl	1bcf7dc <$CardAttrMemWriteByte(void *, unsigned char)>
         490bc:	e24dd004 	sub	sp, sp, #4	; 0x4
         490c0:	e5970000 	ldr	r0, [r7]
         490c4:	e58d0000 	str	r0, [sp]
         490c8:	e59fc018 	ldr	ip, [pc, #18]	; 490e8 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x158>
         490cc:	e587c000 	str	ip, [r7]
         490d0:	e3a01000 	mov	r1, #0	; 0x0
         490d4:	e59f3010 	ldr	r3, [pc, #10]	; 490ec <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x15c>
         490d8:	e59f2010 	ldr	r2, [pc, #10]	; 490f0 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x160>
         490dc:	e2870b01 	add	r0, r7, #1024	; 0x400
         490e0:	e287e301 	add	lr, r7, #67108864	; 0x4000000
         490e4:	ea000023 	b	49178 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x1e8>
         490e8:	7a65726f 	bvc	19a5aac <ROM$$Size+0x1285e60>
         490ec:	aa55cc33 	bge	15bc1c0 <ROM$$Size+0xe9c574>
         490f0:	55aa33cc 	strpl	r3, [sl, #972]!
         490f4:	e5909000 	ldr	r9, [r0]
         490f8:	e5803000 	str	r3, [r0]
         490fc:	e590a000 	ldr	sl, [r0]
         49100:	e13a0003 	teq	sl, r3
         49104:	1a00000d 	bne	49140 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x1b0>
         49108:	e3510000 	cmp	r1, #0	; 0x0
         4910c:	1a000004 	bne	49124 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x194>
         49110:	e5802000 	str	r2, [r0]
         49114:	e590a000 	ldr	sl, [r0]
         49118:	e13a0002 	teq	sl, r2
         4911c:	1a000007 	bne	49140 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x1b0>
         49120:	ea000000 	b	49128 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x198>
         49124:	1a000006 	bne	49144 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x1b4>
         49128:	e5800000 	str	r0, [r0]
         4912c:	e590a000 	ldr	sl, [r0]
         49130:	e13a0000 	teq	sl, r0
         49134:	0597a000 	ldreq	sl, [r7]
         49138:	013a000c 	teqeq	sl, ip
         4913c:	0a000000 	beq	49144 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x1b4>
         49140:	e3a01001 	mov	r1, #1	; 0x1
         49144:	e5809000 	str	r9, [r0]
         49148:	e3310000 	teq	r1, #0	; 0x0
         4914c:	1a000009 	bne	49178 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x1e8>
         49150:	e59d0084 	ldr	r0, [sp, #132]
         49154:	e3300000 	teq	r0, #0	; 0x0
         49158:	03a00b01 	moveq	r0, #1024	; 0x400
         4915c:	058d0084 	streq	r0, [sp, #132]
         49160:	e59d0084 	ldr	r0, [sp, #132]
         49164:	e3500601 	cmp	r0, #1048576	; 0x100000
         49168:	22800601 	addcs	r0, r0, #1048576	; 0x100000
         4916c:	31a00080 	movcc	r0, r0, lsl #1
         49170:	e58d0084 	str	r0, [sp, #132]
         49174:	e0870000 	add	r0, r7, r0
         49178:	e150000e 	cmp	r0, lr
         4917c:	2a000001 	bcs	49188 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x1f8>
         49180:	e3310000 	teq	r1, #0	; 0x0
         49184:	0affffda 	beq	490f4 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x164>
         49188:	e59d0000 	ldr	r0, [sp]
         4918c:	e5870000 	str	r0, [r7]
         49190:	e28dd010 	add	sp, sp, #16	; 0x10
         49194:	ea000005 	b	491b0 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x220>
         49198:	e59d0060 	ldr	r0, [sp, #96]
         4919c:	e28f1f2b 	add	r1, pc, #172	; 0xac
         491a0:	eb6e67fb 	bl	1be3194 <$Subexception>
         491a4:	e3300000 	teq	r0, #0	; 0x0
         491a8:	01a0000d 	moveq	r0, sp
         491ac:	0b6e63e8 	bleq	1be2154 <$NextHandler>
         491b0:	e1a0000d 	mov	r0, sp
         491b4:	eb6e5fbf 	bl	1be10b8 <$ExitHandler>
         491b8:	e1a00005 	mov	r0, r5
         491bc:	e5bd106c 	ldr	r1, [sp, #108]!
         491c0:	eb6e4af3 	bl	1bdbd94 <TCardSocket::$SetCommonMemSpeed(unsigned long)>
         491c4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         491c8:	e3500000 	cmp	r0, #0	; 0x0
         491cc:	9a000021 	bls	49258 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x2c8>
         491d0:	e1a00004 	mov	r0, r4
         491d4:	eb6e1d8b 	bl	1bd0808 <TCardPCMCIA::$Clear(void)>
         491d8:	e3a0c0fa 	mov	ip, #250	; 0xfa
         491dc:	e3a03000 	mov	r3, #0	; 0x0
         491e0:	e3a02006 	mov	r2, #6	; 0x6
         491e4:	e3a01000 	mov	r1, #0	; 0x0
         491e8:	e3a00000 	mov	r0, #0	; 0x0
         491ec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         491f0:	e92d0008 	stmdb	sp!, {r3}
         491f4:	e1a0100c 	mov	r1, ip
         491f8:	e59d201c 	ldr	r2, [sp, #28]
         491fc:	e59f3050 	ldr	r3, [pc, #50]	; 49254 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x2c4>
         49200:	eb6e0d15 	bl	1bcc65c <TCardDevice::$__ct(unsigned long, unsigned long, unsigned long, unsigned char, unsigned char, unsigned char, unsigned char, unsigned long)>
         49204:	e28dd014 	add	sp, sp, #20	; 0x14
         49208:	e3300000 	teq	r0, #0	; 0x0
         4920c:	0a000029 	beq	492b8 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x328>
         49210:	e1a01000 	mov	r1, r0
         49214:	e1a00004 	mov	r0, r4
         49218:	eb6e1555 	bl	1bce774 <TCardPCMCIA::$AddCardDevice(TCardDevice *)>
         4921c:	e5d40027 	ldrb	r0, [r4, #39]
         49220:	e2800001 	add	r0, r0, #1	; 0x1
         49224:	e5c40027 	strb	r0, [r4, #39]
         49228:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         4922c:	e5840008 	str	r0, [r4, #8]	; fField8
         49230:	e5940000 	ldr	r0, [r4]
         49234:	e3c01102 	bic	r1, r0, #-2147483648	; 0x80000000
         49238:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         4923c:	e1810f80 	orr	r0, r1, r0, lsl #31
         49240:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
         49244:	e3a08000 	mov	r8, #0	; 0x0
         49248:	e5840000 	str	r0, [r4]
         4924c:	ea000019 	b	492b8 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x328>
         49250:	00000000 	andeq	r0, r0, r0
         49254:	004c4b40 	subeq	r4, ip, r0, asr #22
         49258:	e5940000 	ldr	r0, [r4]
         4925c:	e3800401 	orr	r0, r0, #16777216	; 0x1000000
         49260:	e3a03000 	mov	r3, #0	; 0x0
         49264:	e3a02000 	mov	r2, #0	; 0x0
         49268:	e5840000 	str	r0, [r4]
         4926c:	e28f1f1a 	add	r1, pc, #104	; 0x68
         49270:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         49274:	e1a02004 	mov	r2, r4
         49278:	e1a01005 	mov	r1, r5
         4927c:	e1a00006 	mov	r0, r6
         49280:	eb6bcac0 	bl	1b3bd88 <TCHMemModem::$NewFlashDriver(TCardSocket *, TCardPCMCIA *, TFlash **, char *, unsigned long, unsigned long)>
         49284:	e28dd00c 	add	sp, sp, #12	; 0xc
         49288:	e1b08000 	movs	r8, r0
         4928c:	0a000009 	beq	492b8 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x328>
         49290:	e3a03000 	mov	r3, #0	; 0x0
         49294:	e3a02000 	mov	r2, #0	; 0x0
         49298:	e28f1f13 	add	r1, pc, #76	; 0x4c
         4929c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         492a0:	e1a02004 	mov	r2, r4
         492a4:	e1a01005 	mov	r1, r5
         492a8:	e1a00006 	mov	r0, r6
         492ac:	eb6bcab5 	bl	1b3bd88 <TCHMemModem::$NewFlashDriver(TCardSocket *, TCardPCMCIA *, TFlash **, char *, unsigned long, unsigned long)>
         492b0:	e28dd00c 	add	sp, sp, #12	; 0xc
         492b4:	e1a08000 	mov	r8, r0
         492b8:	e28dd00c 	add	sp, sp, #12	; 0xc
         492bc:	e3380000 	teq	r8, #0	; 0x0
         492c0:	1a000003 	bne	492d4 <TCHMemModem::ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)+0x344>
         492c4:	e1a02004 	mov	r2, r4
         492c8:	e1a01005 	mov	r1, r5
         492cc:	e1a00006 	mov	r0, r6
         492d0:	eb6bcab0 	bl	1b3bd98 <TCHMemModem::$SetBusAccess(TCardSocket *, TCardPCMCIA *)>
         492d4:	e1a00008 	mov	r0, r8
         492d8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         492dc:	54466c61 	strplb	r6, [r6], -#3169
         492e0:	73685365 	cmnvc	r8, #-1811939327	; 0x94000001
         492e4:	72696573 	rsbvc	r6, r9, #482344960	; 0x1cc00000
         492e8:	32000000 	andcc	r0, r0, #0	; 0x0
         492ec:	54466c61 	strplb	r6, [r6], -#3169
         492f0:	7368414d 	cmnvc	r8, #1073741843	; 0x40000013
         492f4:	44000000 	strmi	r0, [r0]
    */
}

/**
 * Symbol: TCHMemModem::RecognizeCard(TCardSocket *, TCardPCMCIA *)
 * Address: 000492f8
 */
TCHMemModem::RecognizeCard(TCardSocket *, TCardPCMCIA *) {
    /*
         492f8:	e1a0c00d 	mov	ip, sp
         492fc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         49300:	e24cb004 	sub	fp, ip, #4	; 0x4
         49304:	e1a06000 	mov	r6, r0
         49308:	e1a05001 	mov	r5, r1
         4930c:	e1a04002 	mov	r4, r2
         49310:	e3a03000 	mov	r3, #0	; 0x0
         49314:	e92d0008 	stmdb	sp!, {r3}
         49318:	eb6bca99 	bl	1b3bd84 <TCHMemModem::$CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)>
         4931c:	e28dd004 	add	sp, sp, #4	; 0x4
         49320:	e1b07000 	movs	r7, r0
         49324:	0a000008 	beq	4934c <TCHMemModem::RecognizeCard(TCardSocket *, TCardPCMCIA *)+0x54>
         49328:	e3a03000 	mov	r3, #0	; 0x0
         4932c:	e92d0008 	stmdb	sp!, {r3}
         49330:	e1a02004 	mov	r2, r4
         49334:	e1a01005 	mov	r1, r5
         49338:	e1a00006 	mov	r0, r6
         4933c:	eb6bca92 	bl	1b3bd8c <TCHMemModem::$CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)>
         49340:	e28dd004 	add	sp, sp, #4	; 0x4
         49344:	e1b07000 	movs	r7, r0
         49348:	1a000003 	bne	4935c <TCHMemModem::RecognizeCard(TCardSocket *, TCardPCMCIA *)+0x64>
         4934c:	e1a02004 	mov	r2, r4
         49350:	e1a01005 	mov	r1, r5
         49354:	e1a00006 	mov	r0, r6
         49358:	eb6bca8e 	bl	1b3bd98 <TCHMemModem::$SetBusAccess(TCardSocket *, TCardPCMCIA *)>
         4935c:	e1a00007 	mov	r0, r7
         49360:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::InstallServices(TCardSocket *, TCardPCMCIA *, unsigned long)
 * Address: 00049364
 */
TCHMemModem::InstallServices(TCardSocket *, TCardPCMCIA *, unsigned long) {
    /*
         49364:	e1a0c00d 	mov	ip, sp
         49368:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         4936c:	e24cb004 	sub	fp, ip, #4	; 0x4
         49370:	e1a04000 	mov	r4, r0
         49374:	e1a05001 	mov	r5, r1
         49378:	e1a06002 	mov	r6, r2
         4937c:	e1a07003 	mov	r7, r3
         49380:	eb6bc67a 	bl	1b3ad70 <TCHMemModem::$Clear(void)>
         49384:	e1a03007 	mov	r3, r7
         49388:	e5845010 	str	r5, [r4, #16]	; fField16
         4938c:	e92d0008 	stmdb	sp!, {r3}
         49390:	e1a02006 	mov	r2, r6
         49394:	e1a01005 	mov	r1, r5
         49398:	e594303c 	ldr	r3, [r4, #60]	; fField60
         4939c:	e1a00004 	mov	r0, r4
         493a0:	eb6bca77 	bl	1b3bd84 <TCHMemModem::$CheckNSetupMemoryDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)>
         493a4:	e28dd004 	add	sp, sp, #4	; 0x4
         493a8:	e1b08000 	movs	r8, r0
         493ac:	e3e00f41 	mvn	r0, #260	; 0x104
         493b0:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         493b4:	11380000 	teqne	r8, r0
         493b8:	1a000016 	bne	49418 <TCHMemModem::InstallServices(TCardSocket *, TCardPCMCIA *, unsigned long)+0xb4>
         493bc:	e1a09008 	mov	r9, r8
         493c0:	e1a03007 	mov	r3, r7
         493c4:	e92d0008 	stmdb	sp!, {r3}
         493c8:	e1a02006 	mov	r2, r6
         493cc:	e1a01005 	mov	r1, r5
         493d0:	e594303c 	ldr	r3, [r4, #60]	; fField60
         493d4:	e1a00004 	mov	r0, r4
         493d8:	eb6bca6b 	bl	1b3bd8c <TCHMemModem::$CheckNSetupModemDevice(TCardSocket *, TCardPCMCIA *, CList *, unsigned long)>
         493dc:	e28dd004 	add	sp, sp, #4	; 0x4
         493e0:	e1b08000 	movs	r8, r0
         493e4:	0a000005 	beq	49400 <TCHMemModem::InstallServices(TCardSocket *, TCardPCMCIA *, unsigned long)+0x9c>
         493e8:	e3e00f41 	mvn	r0, #260	; 0x104
         493ec:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         493f0:	e1380000 	teq	r8, r0
         493f4:	1a000007 	bne	49418 <TCHMemModem::InstallServices(TCardSocket *, TCardPCMCIA *, unsigned long)+0xb4>
         493f8:	e1390000 	teq	r9, r0
         493fc:	0a000007 	beq	49420 <TCHMemModem::InstallServices(TCardSocket *, TCardPCMCIA *, unsigned long)+0xbc>
         49400:	e3a08000 	mov	r8, #0	; 0x0
         49404:	e1a02006 	mov	r2, r6
         49408:	e1a01005 	mov	r1, r5
         4940c:	e1a00004 	mov	r0, r4
         49410:	eb6bca60 	bl	1b3bd98 <TCHMemModem::$SetBusAccess(TCardSocket *, TCardPCMCIA *)>
         49414:	ea000003 	b	49428 <TCHMemModem::InstallServices(TCardSocket *, TCardPCMCIA *, unsigned long)+0xc4>
         49418:	e3380000 	teq	r8, #0	; 0x0
         4941c:	0a000001 	beq	49428 <TCHMemModem::InstallServices(TCardSocket *, TCardPCMCIA *, unsigned long)+0xc4>
         49420:	e1a00004 	mov	r0, r4
         49424:	eb6bca55 	bl	1b3bd80 <TCHMemModem::$RemoveServices(void)>
         49428:	e1a00008 	mov	r0, r8
         4942c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TCHMemModem::RemoveServices(void)
 * Address: 00049430
 */
TCHMemModem::RemoveServices(void) {
    /*
         49430:	e1a0c00d 	mov	ip, sp
         49434:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         49438:	e24cb004 	sub	fp, ip, #4	; 0x4
         4943c:	eb6bc64b 	bl	1b3ad70 <TCHMemModem::$Clear(void)>
         49440:	e3a00000 	mov	r0, #0	; 0x0
         49444:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__11TCHMemModemSFv
 * Address: 00386770
 */
void TCHMemModem::ClassInfo() {
    /*
        386770:	e24f0044 	sub	r0, pc, #68	; 0x44
        386774:	e1a0f00e 	mov	pc, lr
        386778:	e3a00000 	mov	r0, #0	; 0x0
        38677c:	e1a0f00e 	mov	pc, lr
        386780:	5443484d 	strplb	r4, [r3], -#2125
        386784:	656d4d6f 	strvsb	r4, [sp, -#3439]!
        386788:	64656d00 	strvsbt	r6, [r5], -#3328
        38678c:	54436172 	strplb	r6, [r3], -#370
        386790:	6448616e 	strvsb	r6, [r8], -#366
        386794:	646c6572 	strvsbt	r6, [ip], -#1394
        3867a0:	eafffff2 	b	386770 <ClassInfo__11TCHMemModemSFv>
        3867a4:	ea5ed16f 	b	1b3ad68 <TCHMemModem::$New(void)>
        3867a8:	ea5ed16f 	b	1b3ad6c <TCHMemModem::$Delete(void)>
        3867ac:	ea5ed171 	b	1b3ad78 <TCHMemModem::$RecognizeCard(TCardSocket *, TCardPCMCIA *)>
        3867b0:	ea5ed16f 	b	1b3ad74 <TCHMemModem::$ParseUnrecognizedCard(TCardSocket *, TCardPCMCIA *)>
        3867b4:	ea5ed170 	b	1b3ad7c <TCHMemModem::$InstallServices(TCardSocket *, TCardPCMCIA *, unsigned long)>
        3867b8:	ea5ed570 	b	1b3bd80 <TCHMemModem::$RemoveServices(void)>
        3867bc:	ea5ed576 	b	1b3bd9c <TCHMemModem::$SuspendServices(void)>
        3867c0:	ea5ed576 	b	1b3bda0 <TCHMemModem::$ResumeServices(TCardSocket *, TCardPCMCIA *, unsigned long)>
        3867c4:	ea5ed576 	b	1b3bda4 <TCHMemModem::$EmergencyShutdown(void)>
        3867c8:	ea5ed577 	b	1b3bdac <TCHMemModem::$FormatCIS(TCardSocket *, TCardPCMCIA *)>
        3867cc:	ea5ed578 	b	1b3bdb4 <TCHMemModem::$CardIdString(TCardPCMCIA *)>
        3867d0:	ea5ed576 	b	1b3bdb0 <TCHMemModem::$CardStatus(void)>
        3867d4:	ea5ed577 	b	1b3bdb8 <TCHMemModem::$GetNumberOfDevice(void)>
        3867d8:	ea5ed577 	b	1b3bdbc <TCHMemModem::$GetDeviceInfo(unsigned long, unsigned long *, unsigned long *, void **, unsigned long *, unsigned long *)>
        3867dc:	ea5ed577 	b	1b3bdc0 <TCHMemModem::$SetCardServerPort(unsigned long)>
        3867e0:	ea5ed578 	b	1b3bdc8 <TCHMemModem::$SetRemovableHandler(unsigned char)>
        3867e4:	ea5ed576 	b	1b3bdc4 <TCHMemModem::$GetRemovableHandler(void)>
        3867e8:	ea5ed577 	b	1b3bdcc <TCHMemModem::$CardSpecific(unsigned long, void *, unsigned long)>
        3867ec:	00000000 	andeq	r0, r0, r0
        3867f0:	00000048 	andeq	r0, r0, r8, asr #32
        3867f4:	00000052 	andeq	r0, r0, r2, asr r0
        3867f8:	00000055 	andeq	r0, r0, r5, asr r0
        3867fc:	00000054 	andeq	r0, r0, r4, asr r0
        386800:	000000f4 	streqd	r0, [r0], -r4
        386804:	eaf4f2c7 	b	c3328 <Sizeof__13TFlashSeries2SFv>
        386810:	ea5eddac 	b	1b3dec8 <TFlashSeries2::$New(void)>
        386814:	eaf4f475 	b	c39f0 <TFlashSeries2::Delete(void)>
        386824:	ea000001 	b	386830 <ClassInfo__13TFlashSeries2SFv+0x8>
    */
}

