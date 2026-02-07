#include "DDKIncludes/HAL/HALOptions.h"

/**
 * Symbol: TCardSocket::__ct(unsigned long)
 * Address: 00054d9c
 */
TCardSocket::TCardSocket(ULong socketNumber=0);				// Constructor with socket number {
    /*
         54d9c:	e1a0c00d 	mov	ip, sp
         54da0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         54da4:	e24cb004 	sub	fp, ip, #4	; 0x4
         54da8:	e1a04001 	mov	r4, r1
         54dac:	e3300000 	teq	r0, #0	; 0x0
         54db0:	1a000003 	bne	54dc4 <TCardSocket::__ct(unsigned long)+0x28>
         54db4:	e3a00084 	mov	r0, #132	; 0x84
         54db8:	eb6de65e 	bl	1bce738 <$__nw(unsigned int)>
         54dbc:	e3300000 	teq	r0, #0	; 0x0
         54dc0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         54dc4:	e3a01000 	mov	r1, #0	; 0x0
         54dc8:	e5c01008 	strb	r1, [r0, #8]	; TCardSocket
         54dcc:	e5801004 	str	r1, [r0, #4]	; TCardSocket
         54dd0:	e580400c 	str	r4, [r0, #12]	; TxBEmptyIntHandler
         54dd4:	e5902010 	ldr	r2, [r0, #16]	; ExtStsIntHandler
         54dd8:	e3c23102 	bic	r3, r2, #-2147483648	; 0x80000000
         54ddc:	e1a02fa3 	mov	r2, r3, lsr #31
         54de0:	e3c33201 	bic	r3, r3, #268435456	; 0x10000000
         54de4:	e1833e02 	orr	r3, r3, r2, lsl #28
         54de8:	e1a02183 	mov	r2, r3, lsl #3
         54dec:	e1a02fa2 	mov	r2, r2, lsr #31
         54df0:	e3c33202 	bic	r3, r3, #536870912	; 0x20000000
         54df4:	e1833e82 	orr	r3, r3, r2, lsl #29
         54df8:	e1a02103 	mov	r2, r3, lsl #2
         54dfc:	e1a02fa2 	mov	r2, r2, lsr #31
         54e00:	e3c33101 	bic	r3, r3, #1073741824	; 0x40000000
         54e04:	e1832f02 	orr	r2, r3, r2, lsl #30
         54e08:	e580107c 	str	r1, [r0, #124]	; fField124
         54e0c:	e5802010 	str	r2, [r0, #16]	; ExtStsIntHandler
         54e10:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::Init(void)
 * Address: 00054e14
 */
NewtonErr			TCardSocket::Init(TCardSocket* theCardSocket, TCardHandler* theCardHandler, UByte* baseRegAddr) {
    /*
         54e14:	e1a0c00d 	mov	ip, sp
         54e18:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         54e1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         54e20:	e1a04000 	mov	r4, r0
         54e24:	e590000c 	ldr	r0, [r0, #12]	; TxBEmptyIntHandler
         54e28:	e1a06000 	mov	r6, r0
         54e2c:	eb6e2001 	bl	1bdce38 <$SocketDomain__12TCardDomainsSFUl>
         54e30:	e5840000 	str	r0, [r4]
         54e34:	e59f0090 	ldr	r0, [pc, #90]	; 54ecc <TCardSocket::Init(void)+0xb8>
         54e38:	e7900106 	ldr	r0, [r0, r6, lsl #2]	; fField2
         54e3c:	e2805303 	add	r5, r0, #201326592	; 0xc000000
         54e40:	e5845080 	str	r5, [r4, #128]	; fField128
         54e44:	e24dd008 	sub	sp, sp, #8	; 0x8
         54e48:	e3a0a000 	mov	sl, #0	; 0x0
         54e4c:	e5cda004 	strb	sl, [sp, #4]	; TCardSocket
         54e50:	e3a03000 	mov	r3, #0	; 0x0
         54e54:	e58da000 	str	sl, [sp]
         54e58:	e92d0008 	stmdb	sp!, {r3}
         54e5c:	e59f906c 	ldr	r9, [pc, #6c]	; 54ed0 <TCardSocket::Init(void)+0xbc>
         54e60:	e7990106 	ldr	r0, [r9, r6, lsl #2]	; fField2
         54e64:	e2801303 	add	r1, r0, #201326592	; 0xc000000
         54e68:	e28d0004 	add	r0, sp, #4	; 0x4
         54e6c:	e3a02301 	mov	r2, #67108864	; 0x4000000
         54e70:	eb6e0311 	bl	1bd5abc <TUPhys::$Init(unsigned long, unsigned long, unsigned char, unsigned char)>
         54e74:	e28dd004 	add	sp, sp, #4	; 0x4
         54e78:	e1b07000 	movs	r7, r0
         54e7c:	1a00000d 	bne	54eb8 <TCardSocket::Init(void)+0xa4>
         54e80:	e1a01005 	mov	r1, r5
         54e84:	e59d2000 	ldr	r2, [sp]
         54e88:	e3a03000 	mov	r3, #0	; 0x0
         54e8c:	e5940000 	ldr	r0, [r4]
         54e90:	eb6e138a 	bl	1bd9cc0 <$RememberPhysMap__15TUDomainManagerSFUlN21Uc>
         54e94:	e1b07000 	movs	r7, r0
         54e98:	1a000006 	bne	54eb8 <TCardSocket::Init(void)+0xa4>
         54e9c:	e1a01005 	mov	r1, r5
         54ea0:	e3a03003 	mov	r3, #3	; 0x3
         54ea4:	e3a02301 	mov	r2, #67108864	; 0x4000000
         54ea8:	e5940000 	ldr	r0, [r4]
         54eac:	eb6e1381 	bl	1bd9cb8 <$RememberPermMap__15TUDomainManagerSFUlN214Perm>
         54eb0:	e1b07000 	movs	r7, r0
         54eb4:	0a000006 	beq	54ed4 <TCardSocket::Init(void)+0xc0>
         54eb8:	e1a0000d 	mov	r0, sp
         54ebc:	e3a01000 	mov	r1, #0	; 0x0
         54ec0:	eb6de617 	bl	1bce724 <TUObject::$__dt(void)>
         54ec4:	e28dd008 	add	sp, sp, #8	; 0x8
         54ec8:	ea00005d 	b	55044 <TCardSocket::Init(void)+0x230>
         54ecc:	0c101188 	ldfeqs	f1, [r0], -#544
         54ed0:	0c101178 	ldfeqs	f1, [r0], -#480
         54ed4:	e3a07a01 	mov	r7, #4096	; 0x1000
         54ed8:	e287740f 	add	r7, r7, #251658240	; 0xf000000
         54edc:	e3a00a01 	mov	r0, #4096	; 0x1000
         54ee0:	e1a08610 	mov	r8, r0, lsl r6
         54ee4:	e5970000 	ldr	r0, [r7]
         54ee8:	e1800008 	orr	r0, r0, r8
         54eec:	e5870000 	str	r0, [r7]
         54ef0:	e1a00004 	mov	r0, r4
         54ef4:	eb6b9795 	bl	1b3ad50 <TCardSocket::$GetChipInfo(void)>
         54ef8:	e3300000 	teq	r0, #0	; 0x0
         54efc:	1a000007 	bne	54f20 <TCardSocket::Init(void)+0x10c>
         54f00:	e5970000 	ldr	r0, [r7]
         54f04:	e1c00008 	bic	r0, r0, r8
         54f08:	e5870000 	str	r0, [r7]
         54f0c:	e1a0000d 	mov	r0, sp
         54f10:	eb6e02f8 	bl	1bd5af8 <TUPhys::$Invalidate(void)>
         54f14:	e3a070e8 	mov	r7, #232	; 0xe8
         54f18:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
         54f1c:	eaffffe5 	b	54eb8 <TCardSocket::Init(void)+0xa4>
         54f20:	e1a0000d 	mov	r0, sp
         54f24:	e3a01000 	mov	r1, #0	; 0x0
         54f28:	eb6de5fd 	bl	1bce724 <TUObject::$__dt(void)>
         54f2c:	e28dd008 	add	sp, sp, #8	; 0x8
         54f30:	e3a00000 	mov	r0, #0	; 0x0
         54f34:	e0841100 	add	r1, r4, r0, lsl #2
         54f38:	e581a014 	str	sl, [r1, #20]	; RxCAvailIntHandler
         54f3c:	e2800001 	add	r0, r0, #1	; 0x1
         54f40:	e350000d 	cmp	r0, #13	; 0xd
         54f44:	e5a1a048 	str	sl, [r1, #72]!
         54f48:	3afffff9 	bcc	54f34 <TCardSocket::Init(void)+0x120>
         54f4c:	e3a03000 	mov	r3, #0	; 0x0
         54f50:	e92d0008 	stmdb	sp!, {r3}
         54f54:	e7991106 	ldr	r1, [r9, r6, lsl #2]	; fField2
         54f58:	e2840004 	add	r0, r4, #4	; 0x4
         54f5c:	e3a02303 	mov	r2, #201326592	; 0xc000000
         54f60:	eb6e02d5 	bl	1bd5abc <TUPhys::$Init(unsigned long, unsigned long, unsigned char, unsigned char)>
         54f64:	e28dd004 	add	sp, sp, #4	; 0x4
         54f68:	e1b07000 	movs	r7, r0
         54f6c:	1a000034 	bne	55044 <TCardSocket::Init(void)+0x230>
         54f70:	e1a00004 	mov	r0, r4
         54f74:	eb6b9fbe 	bl	1b3ce74 <TCardSocket::$ResetInterrupts(void)>
         54f78:	e1a00004 	mov	r0, r4
         54f7c:	e3a01002 	mov	r1, #2	; 0x2
         54f80:	eb6df24d 	bl	1bd18bc <TCardSocket::$DisableSocketInterrupt(TSocketInt)>
         54f84:	e1a00004 	mov	r0, r4
         54f88:	e3a01002 	mov	r1, #2	; 0x2
         54f8c:	eb6dee25 	bl	1bd0828 <TCardSocket::$ClearSocketInterrupt(TSocketInt)>
         54f90:	e3a00045 	mov	r0, #69	; 0x45
         54f94:	e2800b07 	add	r0, r0, #7168	; 0x1c00
         54f98:	e2851b0a 	add	r1, r5, #10240	; 0x2800
         54f9c:	e5810000 	str	r0, [r1]
         54fa0:	e3a000c1 	mov	r0, #193	; 0xc1
         54fa4:	e2800c31 	add	r0, r0, #12544	; 0x3100
         54fa8:	e2851b0b 	add	r1, r5, #11264	; 0x2c00
         54fac:	e5810000 	str	r0, [r1]
         54fb0:	e3a01fda 	mov	r1, #872	; 0x368
         54fb4:	e2850a02 	add	r0, r5, #8192	; 0x2000
         54fb8:	e5801000 	str	r1, [r0]
         54fbc:	e2850901 	add	r0, r5, #16384	; 0x4000
         54fc0:	e580a000 	str	sl, [r0]
         54fc4:	e3a010d2 	mov	r1, #210	; 0xd2
         54fc8:	e2811b02 	add	r1, r1, #2048	; 0x800
         54fcc:	e2850b09 	add	r0, r5, #9216	; 0x2400
         54fd0:	e5801000 	str	r1, [r0]
         54fd4:	e3360000 	teq	r6, #0	; 0x0
         54fd8:	1a000002 	bne	54fe8 <TCardSocket::Init(void)+0x1d4>
         54fdc:	eb684d09 	bl	1a68408 <$GetHighSpeedClock(void)>
         54fe0:	e59f1064 	ldr	r1, [pc, #64]	; 5504c <TCardSocket::Init(void)+0x238>
         54fe4:	e5a10004 	str	r0, [r1, #4]!	; TCardSocket
         54fe8:	e3a00c7f 	mov	r0, #32512	; 0x7f00
         54fec:	e2851a03 	add	r1, r5, #12288	; 0x3000
         54ff0:	e5810000 	str	r0, [r1]
         54ff4:	e2851b0e 	add	r1, r5, #14336	; 0x3800
         54ff8:	e5810000 	str	r0, [r1]
         54ffc:	e3a00000 	mov	r0, #0	; 0x0
         55000:	e2851b0d 	add	r1, r5, #13312	; 0x3400
         55004:	e5810000 	str	r0, [r1]
         55008:	e2851b0f 	add	r1, r5, #15360	; 0x3c00
         5500c:	e5810000 	str	r0, [r1]
         55010:	e59f0038 	ldr	r0, [pc, #38]	; 55050 <TCardSocket::Init(void)+0x23c>
         55014:	e7d01006 	ldrb	r1, [r0, r6]
         55018:	e3e03000 	mvn	r3, #0	; 0x0
         5501c:	e92d0008 	stmdb	sp!, {r3}
         55020:	e59f302c 	ldr	r3, [pc, #2c]	; 55054 <TCardSocket::Init(void)+0x240>	; fField2
         55024:	e1a02004 	mov	r2, r4
         55028:	e59f0028 	ldr	r0, [pc, #28]	; 55058 <TCardSocket::Init(void)+0x244>	; TCardSocket
         5502c:	e5900000 	ldr	r0, [r0]
         55030:	eb6861ae 	bl	1a6d6f0 <TGPIOInterface::$RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)>
         55034:	e28dd004 	add	sp, sp, #4	; 0x4
         55038:	e584007c 	str	r0, [r4, #124]	; fField124
         5503c:	e1a00004 	mov	r0, r4
         55040:	eb6df222 	bl	1bd18d0 <TCardSocket::$EnableSocketAbort(void)>
         55044:	e1a00007 	mov	r0, r7
         55048:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         5504c:	0c100ac0 	ldceq	10, cr0, [r0], -#768
         55050:	0c100ae4 	ldceq	10, cr0, [r0], -#912
         55054:	01b3ce70 	moveqs	ip, r0, ror lr
         55058:	0c100f6c 	ldceq	15, cr0, [r0], -#432
    */
}

/**
 * Symbol: TCardSocket::RegisterSocketInterrupt(TSocketInt, long (*)(void *, TCardSocket *), void *)
 * Address: 0005505c
 */
NewtonErr	TCardSocket::RegisterSocketInterrupt(TSocketInt intType, IntProcPtr intProc, void *intProcObj);		// Register ready/IRQ interrupt proc {
    /*
         5505c:	e1a0c00d 	mov	ip, sp
         55060:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         55064:	e24cb004 	sub	fp, ip, #4	; 0x4
         55068:	e1a05000 	mov	r5, r0
         5506c:	e1a04001 	mov	r4, r1
         55070:	e1a07002 	mov	r7, r2
         55074:	e1a06003 	mov	r6, r3
         55078:	e3a08000 	mov	r8, #0	; 0x0
         5507c:	e351000d 	cmp	r1, #13	; 0xd
         55080:	2a000009 	bcs	550ac <TCardSocket::RegisterSocketInterrupt(TSocketInt, long (*)(void *, TCardSocket *), void *)+0x50>
         55084:	e1a01004 	mov	r1, r4
         55088:	e1a00005 	mov	r0, r5
         5508c:	eb6df20a 	bl	1bd18bc <TCardSocket::$DisableSocketInterrupt(TSocketInt)>
         55090:	e1a01004 	mov	r1, r4
         55094:	e1a00005 	mov	r0, r5
         55098:	eb6dede2 	bl	1bd0828 <TCardSocket::$ClearSocketInterrupt(TSocketInt)>
         5509c:	e0850104 	add	r0, r5, r4, lsl #2
         550a0:	e5a07014 	str	r7, [r0, #20]!	; RxCAvailIntHandler
         550a4:	e5806034 	str	r6, [r0, #52]
         550a8:	ea000001 	b	550b4 <TCardSocket::RegisterSocketInterrupt(TSocketInt, long (*)(void *, TCardSocket *), void *)+0x58>
         550ac:	e3a080ea 	mov	r8, #234	; 0xea
         550b0:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
         550b4:	e1a00008 	mov	r0, r8
         550b8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::DeregisterSocketInterrupt(TSocketInt)
 * Address: 000550bc
 */
void		TCardSocket::DeregisterSocketInterrupt(TSocketInt intType);	// Deregister interrupt {
    /*
         550bc:	e1a0c00d 	mov	ip, sp
         550c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         550c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         550c8:	e1a05000 	mov	r5, r0
         550cc:	e1a04001 	mov	r4, r1
         550d0:	eb6df1f9 	bl	1bd18bc <TCardSocket::$DisableSocketInterrupt(TSocketInt)>
         550d4:	e1a01004 	mov	r1, r4
         550d8:	e1a00005 	mov	r0, r5
         550dc:	eb6dedd1 	bl	1bd0828 <TCardSocket::$ClearSocketInterrupt(TSocketInt)>
         550e0:	e3a00000 	mov	r0, #0	; 0x0
         550e4:	e0851104 	add	r1, r5, r4, lsl #2
         550e8:	e5810014 	str	r0, [r1, #20]	; RxCAvailIntHandler
         550ec:	e5a10048 	str	r0, [r1, #72]!
         550f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::EnableSocketInterrupt(TSocketInt)
 * Address: 000550f4
 */
void		TCardSocket::EnableSocketInterrupt(TSocketInt intType);		// Enable interrupt {
    /*
         550f4:	e1a0c00d 	mov	ip, sp
         550f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         550fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         55100:	e3710001 	cmn	r1, #1	; 0x1
         55104:	1a00000c 	bne	5513c <TCardSocket::EnableSocketInterrupt(TSocketInt)+0x48>
         55108:	e59f5050 	ldr	r5, [pc, #50]	; 55160 <TCardSocket::EnableSocketInterrupt(TSocketInt)+0x6c>
         5510c:	e5950000 	ldr	r0, [r5]
         55110:	eb6e9f51 	bl	1bfce5c <$ClearInterrupt>
         55114:	e59f4048 	ldr	r4, [pc, #48]	; 55164 <TCardSocket::EnableSocketInterrupt(TSocketInt)+0x70>
         55118:	e5940000 	ldr	r0, [r4]
         5511c:	eb6e9f4e 	bl	1bfce5c <$ClearInterrupt>
         55120:	e3a01001 	mov	r1, #1	; 0x1
         55124:	e5950000 	ldr	r0, [r5]
         55128:	eb6e9b2a 	bl	1bfbdd8 <$EnableInterrupt>
         5512c:	e3a01001 	mov	r1, #1	; 0x1
         55130:	e5940000 	ldr	r0, [r4]
         55134:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         55138:	ea6e9b26 	b	1bfbdd8 <$EnableInterrupt>
         5513c:	e3310003 	teq	r1, #3	; 0x3
         55140:	1a000009 	bne	5516c <TCardSocket::EnableSocketInterrupt(TSocketInt)+0x78>
         55144:	e5b0107c 	ldr	r1, [r0, #124]!	; fField124
         55148:	e3310000 	teq	r1, #0	; 0x0
         5514c:	159f0014 	ldrne	r0, [pc, #14]	; 55168 <TCardSocket::EnableSocketInterrupt(TSocketInt)+0x74>
         55150:	15900000 	ldrne	r0, [r0]
         55154:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         55158:	1a686166 	bne	1a6d6f8 <TGPIOInterface::$EnableInterrupt(GPIOIntObject *)>
         5515c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         55160:	0c100e70 	ldceq	14, cr0, [r0], -#448
         55164:	0c100e74 	ldceq	14, cr0, [r0], -#464
         55168:	0c100f6c 	ldceq	15, cr0, [r0], -#432
         5516c:	e351000d 	cmp	r1, #13	; 0xd
         55170:	291ba830 	ldmcsdb	fp, {r4, r5, fp, sp, pc}
         55174:	e5b04080 	ldr	r4, [r0, #128]!	; fField128
         55178:	23e05000 	mvncs	r5, #0	; 0x0
         5517c:	359f0028 	ldrcc	r0, [pc, #28]	; 551ac <TCardSocket::EnableSocketInterrupt(TSocketInt)+0xb8>	; TCardSocket
         55180:	37905081 	ldrcc	r5, [r0, r1, lsl #1]	; fField1
         55184:	31a05825 	movcc	r5, r5, lsr #16
         55188:	eb0cf64c 	bl	392ac0 <EnterAtomic>
         5518c:	e2840b02 	add	r0, r4, #2048	; 0x800
         55190:	e5805000 	str	r5, [r0]
         55194:	e2840b01 	add	r0, r4, #1024	; 0x400
         55198:	e5901000 	ldr	r1, [r0]
         5519c:	e1811005 	orr	r1, r1, r5
         551a0:	e5801000 	str	r1, [r0]
         551a4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         551a8:	ea0cf65b 	b	392b1c <ExitAtomic>
         551ac:	0c100ac8 	ldceq	10, cr0, [r0], -#800
    */
}

/**
 * Symbol: TCardSocket::DisableSocketInterrupt(TSocketInt)
 * Address: 000551b0
 */
void		TCardSocket::DisableSocketInterrupt(TSocketInt intType);		// Disable interrupt {
    /*
         551b0:	e1a0c00d 	mov	ip, sp
         551b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         551b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         551bc:	e1a05000 	mov	r5, r0
         551c0:	e1a04001 	mov	r4, r1
         551c4:	e3310003 	teq	r1, #3	; 0x3
         551c8:	1a000007 	bne	551ec <TCardSocket::DisableSocketInterrupt(TSocketInt)+0x3c>
         551cc:	e5b5107c 	ldr	r1, [r5, #124]!	; fField124
         551d0:	e3310000 	teq	r1, #0	; 0x0
         551d4:	159f000c 	ldrne	r0, [pc, #c]	; 551e8 <TCardSocket::DisableSocketInterrupt(TSocketInt)+0x38>
         551d8:	15900000 	ldrne	r0, [r0]
         551dc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         551e0:	1a686145 	bne	1a6d6fc <TGPIOInterface::$DisableInterrupt(GPIOIntObject *)>
         551e4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         551e8:	0c100f6c 	ldceq	15, cr0, [r0], -#432
         551ec:	e354000d 	cmp	r4, #13	; 0xd
         551f0:	291ba830 	ldmcsdb	fp, {r4, r5, fp, sp, pc}
         551f4:	eb0cf631 	bl	392ac0 <EnterAtomic>
         551f8:	e5b50080 	ldr	r0, [r5, #128]!	; fField128
         551fc:	e59f1018 	ldr	r1, [pc, #18]	; 5521c <TCardSocket::DisableSocketInterrupt(TSocketInt)+0x6c>
         55200:	e7911084 	ldr	r1, [r1, r4, lsl #1]	; fField1
         55204:	e1a01821 	mov	r1, r1, lsr #16
         55208:	e5b02400 	ldr	r2, [r0, #1024]!
         5520c:	e1c21001 	bic	r1, r2, r1
         55210:	e5801000 	str	r1, [r0]
         55214:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         55218:	ea0cf63f 	b	392b1c <ExitAtomic>
         5521c:	0c100ac8 	ldceq	10, cr0, [r0], -#800
    */
}

/**
 * Symbol: TCardSocket::ClearSocketInterrupt(TSocketInt)
 * Address: 00055220
 */
void		TCardSocket::ClearSocketInterrupt(TSocketInt intType);		// Clear interrupt {
    /*
         55220:	e3310003 	teq	r1, #3	; 0x3
         55224:	1a000006 	bne	55244 <TCardSocket::ClearSocketInterrupt(TSocketInt)+0x24>
         55228:	e5b0107c 	ldr	r1, [r0, #124]!	; fField124
         5522c:	e3310000 	teq	r1, #0	; 0x0
         55230:	159f0008 	ldrne	r0, [pc, #8]	; 55240 <TCardSocket::ClearSocketInterrupt(TSocketInt)+0x20>	; TCardSocket
         55234:	15900000 	ldrne	r0, [r0]
         55238:	1a68612d 	bne	1a6d6f4 <TGPIOInterface::$ClearInterrupt(GPIOIntObject *)>
         5523c:	e1a0f00e 	mov	pc, lr
         55240:	0c100f6c 	ldceq	15, cr0, [r0], -#432
         55244:	e351000d 	cmp	r1, #13	; 0xd
         55248:	21a0f00e 	movcs	pc, lr
         5524c:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55250:	e59f200c 	ldr	r2, [pc, #c]	; 55264 <TCardSocket::ClearSocketInterrupt(TSocketInt)+0x44>
         55254:	e7921081 	ldr	r1, [r2, r1, lsl #1]	; fField1
         55258:	e1a01821 	mov	r1, r1, lsr #16
         5525c:	e5a01800 	str	r1, [r0, #2048]!	; fField2048
         55260:	e1a0f00e 	mov	pc, lr
         55264:	0c100ac8 	ldceq	10, cr0, [r0], -#800
    */
}

/**
 * Symbol: TCardSocket::SetSocketInterruptFlags(TSocketInt, TSocketIntFlags)
 * Address: 00055268
 */
NewtonErr	TCardSocket::SetSocketInterruptFlags(TSocketInt intType, TSocketIntFlags flags);			// Set interrupt flags {
    /*
         55268:	e1a0c00d 	mov	ip, sp
         5526c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         55270:	e24cb004 	sub	fp, ip, #4	; 0x4
         55274:	e1a04002 	mov	r4, r2
         55278:	e3a07000 	mov	r7, #0	; 0x0
         5527c:	e351000d 	cmp	r1, #13	; 0xd
         55280:	2a000024 	bcs	55318 <TCardSocket::SetSocketInterruptFlags(TSocketInt, TSocketIntFlags)+0xb0>
         55284:	e5b06080 	ldr	r6, [r0, #128]!	; fField128
         55288:	e59f0084 	ldr	r0, [pc, #84]	; 55314 <TCardSocket::SetSocketInterruptFlags(TSocketInt, TSocketIntFlags)+0xac>
         5528c:	e7905081 	ldr	r5, [r0, r1, lsl #1]	; fField1
         55290:	e1a05825 	mov	r5, r5, lsr #16
         55294:	eb0cf609 	bl	392ac0 <EnterAtomic>
         55298:	e2142004 	ands	r2, r4, #4	; 0x4
         5529c:	11a02005 	movne	r2, r5
         552a0:	e2861b03 	add	r1, r6, #3072	; 0xc00
         552a4:	e5913000 	ldr	r3, [r1]
         552a8:	e1e00005 	mvn	r0, r5
         552ac:	e0033000 	and	r3, r3, r0
         552b0:	e1832002 	orr	r2, r3, r2
         552b4:	e5812000 	str	r2, [r1]
         552b8:	e2142008 	ands	r2, r4, #8	; 0x8
         552bc:	11a02005 	movne	r2, r5
         552c0:	e2861b06 	add	r1, r6, #6144	; 0x1800
         552c4:	e5913000 	ldr	r3, [r1]
         552c8:	e0033000 	and	r3, r3, r0
         552cc:	e1832002 	orr	r2, r3, r2
         552d0:	e5812000 	str	r2, [r1]
         552d4:	e2142001 	ands	r2, r4, #1	; 0x1
         552d8:	11a02005 	movne	r2, r5
         552dc:	e2861a01 	add	r1, r6, #4096	; 0x1000
         552e0:	e5913000 	ldr	r3, [r1]
         552e4:	e0033000 	and	r3, r3, r0
         552e8:	e1832002 	orr	r2, r3, r2
         552ec:	e5812000 	str	r2, [r1]
         552f0:	e2141002 	ands	r1, r4, #2	; 0x2
         552f4:	11a01005 	movne	r1, r5
         552f8:	e2862b05 	add	r2, r6, #5120	; 0x1400
         552fc:	e5923000 	ldr	r3, [r2]
         55300:	e0030000 	and	r0, r3, r0
         55304:	e1800001 	orr	r0, r0, r1
         55308:	e5820000 	str	r0, [r2]
         5530c:	eb0cf602 	bl	392b1c <ExitAtomic>
         55310:	ea000002 	b	55320 <TCardSocket::SetSocketInterruptFlags(TSocketInt, TSocketIntFlags)+0xb8>
         55314:	0c100ac8 	ldceq	10, cr0, [r0], -#800
         55318:	e3a070ea 	mov	r7, #234	; 0xea
         5531c:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
         55320:	e1a00007 	mov	r0, r7
         55324:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::InterruptDispatcher(unsigned long)
 * Address: 00055328
 */
TCardSocket::InterruptDispatcher(unsigned long) {
    /*
         55328:	e1a0c00d 	mov	ip, sp
         5532c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         55330:	e24cb004 	sub	fp, ip, #4	; 0x4
         55334:	e1a04000 	mov	r4, r0
         55338:	e24dd004 	sub	sp, sp, #4	; 0x4
         5533c:	e3a00000 	mov	r0, #0	; 0x0
         55340:	e5945080 	ldr	r5, [r4, #128]	; fField128
         55344:	e5957c00 	ldr	r7, [r5, #3072]
         55348:	e3310801 	teq	r1, #65536	; 0x10000
         5534c:	11e07007 	mvnne	r7, r7
         55350:	e5952000 	ldr	r2, [r5]
         55354:	e2851b01 	add	r1, r5, #1024	; 0x400
         55358:	e1a0a001 	mov	sl, r1
         5535c:	e5911000 	ldr	r1, [r1]
         55360:	e0022001 	and	r2, r2, r1
         55364:	e3a06000 	mov	r6, #0	; 0x0
         55368:	e59f900c 	ldr	r9, [pc, #c]	; 5537c <TCardSocket::InterruptDispatcher(unsigned long)+0x54>
         5536c:	e2851b02 	add	r1, r5, #2048	; 0x800
         55370:	e58d1000 	str	r1, [sp]
         55374:	e59f8004 	ldr	r8, [pc, #4]	; 55380 <TCardSocket::InterruptDispatcher(unsigned long)+0x58>	; TCardSocket
         55378:	ea00001f 	b	553fc <TCardSocket::InterruptDispatcher(unsigned long)+0xd4>
         5537c:	0c100ae8 	ldceq	10, cr0, [r0], -#928
         55380:	0c100ac8 	ldceq	10, cr0, [r0], -#800
         55384:	e7993086 	ldr	r3, [r9, r6, lsl #1]	; fField1
         55388:	e1a03823 	mov	r3, r3, lsr #16
         5538c:	e0021003 	and	r1, r2, r3
         55390:	e1110007 	tst	r1, r7
         55394:	0a000015 	beq	553f0 <TCardSocket::InterruptDispatcher(unsigned long)+0xc8>
         55398:	e59d1000 	ldr	r1, [sp]
         5539c:	e5813000 	str	r3, [r1]
         553a0:	e3a01000 	mov	r1, #0	; 0x0
         553a4:	e798c081 	ldr	ip, [r8, r1, lsl #1]	; fField1
         553a8:	e1a0c82c 	mov	ip, ip, lsr #16
         553ac:	e11c0003 	tst	ip, r3
         553b0:	1084c101 	addne	ip, r4, r1, lsl #2
         553b4:	159cc014 	ldrne	ip, [ip, #20]	; RxCAvailIntHandler
         553b8:	133c0000 	teqne	ip, #0	; 0x0
         553bc:	0a000008 	beq	553e4 <TCardSocket::InterruptDispatcher(unsigned long)+0xbc>
         553c0:	e0842101 	add	r2, r4, r1, lsl #2
         553c4:	e1a01004 	mov	r1, r4
         553c8:	e5920048 	ldr	r0, [r2, #72]
         553cc:	e1a0e00f 	mov	lr, pc
         553d0:	e592f014 	ldr	pc, [r2, #20]	; RxCAvailIntHandler
         553d4:	e5952000 	ldr	r2, [r5]
         553d8:	e59a1000 	ldr	r1, [sl]
         553dc:	e0022001 	and	r2, r2, r1
         553e0:	ea000002 	b	553f0 <TCardSocket::InterruptDispatcher(unsigned long)+0xc8>
         553e4:	e2811001 	add	r1, r1, #1	; 0x1
         553e8:	e351000d 	cmp	r1, #13	; 0xd
         553ec:	3affffec 	bcc	553a4 <TCardSocket::InterruptDispatcher(unsigned long)+0x7c>
         553f0:	e2866001 	add	r6, r6, #1	; 0x1
         553f4:	e356000d 	cmp	r6, #13	; 0xd
         553f8:	2a000001 	bcs	55404 <TCardSocket::InterruptDispatcher(unsigned long)+0xdc>
         553fc:	e3320000 	teq	r2, #0	; 0x0
         55400:	1affffdf 	bne	55384 <TCardSocket::InterruptDispatcher(unsigned long)+0x5c>
         55404:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::CardLockIntHandler(void)
 * Address: 00055408
 */
TCardSocket::CardLockIntHandler(void) {
    /*
         55408:	e1a01000 	mov	r1, r0
         5540c:	e3a00000 	mov	r0, #0	; 0x0
         55410:	e5912020 	ldr	r2, [r1, #32]	; TCardSocket
         55414:	e3320000 	teq	r2, #0	; 0x0
         55418:	15910054 	ldrne	r0, [r1, #84]
         5541c:	1282f000 	addne	pc, r2, #0	; 0x0
         55420:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::SocketDomain(void)
 * Address: 00055424
 */
TObjectId	TCardSocket::SocketDomain(void);					// Get socket domain {
    /*
         55424:	e5900000 	ldr	r0, [r0]
         55428:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::SocketPhysResource(void)
 * Address: 0005542c
 */
TObjectId	TCardSocket::SocketPhysResource(void);			// Get socket physical resource {
    /*
         5542c:	e5900004 	ldr	r0, [r0, #4]	; TCardSocket
         55430:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::__dt(void)
 * Address: 00055434
 */
TCardSocket::~TCardSocket(void);								// Destructor {
    /*
         55434:	e1a0c00d 	mov	ip, sp
         55438:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5543c:	e24cb004 	sub	fp, ip, #4	; 0x4
         55440:	e1a04000 	mov	r4, r0
         55444:	e1a05001 	mov	r5, r1
         55448:	e2800004 	add	r0, r0, #4	; 0x4
         5544c:	e3a01000 	mov	r1, #0	; 0x0
         55450:	eb6de4b3 	bl	1bce724 <TUObject::$__dt(void)>
         55454:	e3150001 	tst	r5, #1	; 0x1
         55458:	11a00004 	movne	r0, r4
         5545c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         55460:	1a6de09e 	bne	1bcd6e0 <$__dl(void *)>
         55464:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::SocketNumber(void)
 * Address: 00055468
 */
ULong		TCardSocket::SocketNumber(void);					// Get socket number {
    /*
         55468:	e590000c 	ldr	r0, [r0, #12]	; TxBEmptyIntHandler
         5546c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::SocketBaseAddr(void)
 * Address: 00055470
 */
ULong		TCardSocket::SocketBaseAddr(void);				// Get socket base address {
    /*
         55470:	e590000c 	ldr	r0, [r0, #12]	; TxBEmptyIntHandler
         55474:	e59f1004 	ldr	r1, [pc, #4]	; 55480 <TCardSocket::SocketBaseAddr(void)+0x10>	; TCardSocket
         55478:	e7910100 	ldr	r0, [r1, r0, lsl #2]	; fField2
         5547c:	e1a0f00e 	mov	pc, lr
         55480:	0c101188 	ldfeqs	f1, [r0], -#544
    */
}

/**
 * Symbol: TCardSocket::AttributeMemBaseAddr(void)
 * Address: 00055484
 */
ULong		TCardSocket::AttributeMemBaseAddr(void);			// Get attribute memory base address {
    /*
         55484:	e590000c 	ldr	r0, [r0, #12]	; TxBEmptyIntHandler
         55488:	e59f1004 	ldr	r1, [pc, #4]	; 55494 <TCardSocket::AttributeMemBaseAddr(void)+0x10>	; TCardSocket
         5548c:	e7910100 	ldr	r0, [r1, r0, lsl #2]	; fField2
         55490:	e1a0f00e 	mov	pc, lr
         55494:	0c101188 	ldfeqs	f1, [r0], -#544
    */
}

/**
 * Symbol: TCardSocket::CommonMemBaseAddr(void)
 * Address: 00055498
 */
ULong		TCardSocket::CommonMemBaseAddr(void);			// Get common memory base address {
    /*
         55498:	e590000c 	ldr	r0, [r0, #12]	; TxBEmptyIntHandler
         5549c:	e59f1008 	ldr	r1, [pc, #8]	; 554ac <TCardSocket::CommonMemBaseAddr(void)+0x14>	; TCardSocket
         554a0:	e7910100 	ldr	r0, [r1, r0, lsl #2]	; fField2
         554a4:	e2800302 	add	r0, r0, #134217728	; 0x8000000
         554a8:	e1a0f00e 	mov	pc, lr
         554ac:	0c101188 	ldfeqs	f1, [r0], -#544
    */
}

/**
 * Symbol: TCardSocket::IOBaseAddr(void)
 * Address: 000554b0
 */
ULong		TCardSocket::IOBaseAddr(void);					// Get IO base address {
    /*
         554b0:	e590000c 	ldr	r0, [r0, #12]	; TxBEmptyIntHandler
         554b4:	e59f1008 	ldr	r1, [pc, #8]	; 554c4 <TCardSocket::IOBaseAddr(void)+0x14>	; TCardSocket
         554b8:	e7910100 	ldr	r0, [r1, r0, lsl #2]	; fField2
         554bc:	e2800301 	add	r0, r0, #67108864	; 0x4000000
         554c0:	e1a0f00e 	mov	pc, lr
         554c4:	0c101188 	ldfeqs	f1, [r0], -#544
    */
}

/**
 * Symbol: TCardSocket::SetDefaultConfig(void)
 * Address: 000554c8
 */
TCardSocket::SetDefaultConfig(void) {
    /*
         554c8:	e1a0c00d 	mov	ip, sp
         554cc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         554d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         554d4:	e1a04000 	mov	r4, r0
         554d8:	eb6e1a31 	bl	1bdbda4 <TCardSocket::$SetDefaultSpeeds(void)>
         554dc:	e1a00004 	mov	r0, r4
         554e0:	eb6e1610 	bl	1bdad28 <TCardSocket::$SelectMemoryInterface(void)>
         554e4:	e1a00004 	mov	r0, r4
         554e8:	e3a01004 	mov	r1, #4	; 0x4
         554ec:	eb6ee48b 	bl	1c0e720 <TCardSocket::$SetRdWrQueueControl(unsigned long)>
         554f0:	e1a00004 	mov	r0, r4
         554f4:	e3a01008 	mov	r1, #8	; 0x8
         554f8:	eb6ee488 	bl	1c0e720 <TCardSocket::$SetRdWrQueueControl(unsigned long)>
         554fc:	e1a00004 	mov	r0, r4
         55500:	e3a01001 	mov	r1, #1	; 0x1
         55504:	eb6ecbbd 	bl	1c08400 <TCardSocket::$SelectVoltageLevel(TSocketPowerLevels)>
         55508:	e1a00004 	mov	r0, r4
         5550c:	e3a01b07 	mov	r1, #7168	; 0x1c00
         55510:	eb6ee483 	bl	1c0e724 <TCardSocket::$SetPullupControl(unsigned long)>
         55514:	e1a00004 	mov	r0, r4
         55518:	e3a0100a 	mov	r1, #10	; 0xa
         5551c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         55520:	ea6e1a1c 	b	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
    */
}

/**
 * Symbol: TCardSocket::ResetInterrupts(void)
 * Address: 00055524
 */
TCardSocket::ResetInterrupts(void) {
    /*
         55524:	e1a0c00d 	mov	ip, sp
         55528:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5552c:	e24cb004 	sub	fp, ip, #4	; 0x4
         55530:	e5b04080 	ldr	r4, [r0, #128]!	; fField128
         55534:	eb0cf561 	bl	392ac0 <EnterAtomic>
         55538:	e2840b01 	add	r0, r4, #1024	; 0x400
         5553c:	e5903000 	ldr	r3, [r0]
         55540:	e3a01902 	mov	r1, #32768	; 0x8000
         55544:	e241100d 	sub	r1, r1, #13	; 0xd
         55548:	e3a0200c 	mov	r2, #12	; 0xc
         5554c:	e2422902 	sub	r2, r2, #32768	; 0x8000
         55550:	e0032002 	and	r2, r3, r2
         55554:	e5802000 	str	r2, [r0]
         55558:	e2840b03 	add	r0, r4, #3072	; 0xc00
         5555c:	e3a02b01 	mov	r2, #1024	; 0x400
         55560:	e5802000 	str	r2, [r0]
         55564:	e2840b05 	add	r0, r4, #5120	; 0x1400
         55568:	e3a0200d 	mov	r2, #13	; 0xd
         5556c:	e2822b01 	add	r2, r2, #1024	; 0x400
         55570:	e5802000 	str	r2, [r0]
         55574:	e2840a01 	add	r0, r4, #4096	; 0x1000
         55578:	e3a02c7a 	mov	r2, #31232	; 0x7a00
         5557c:	e5802000 	str	r2, [r0]
         55580:	e2840b02 	add	r0, r4, #2048	; 0x800
         55584:	e5801000 	str	r1, [r0]
         55588:	eb0cf563 	bl	392b1c <ExitAtomic>
         5558c:	e3a00000 	mov	r0, #0	; 0x0
         55590:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::EnableSocketAbort(void)
 * Address: 00055594
 */
TCardSocket::EnableSocketAbort(void) {
    /*
         55594:	e3a00010 	mov	r0, #16	; 0x10
         55598:	e59f1018 	ldr	r1, [pc, #18]	; 555b8 <TCardSocket::EnableSocketAbort(void)+0x24>
         5559c:	e5810000 	str	r0, [r1]
         555a0:	e59f0014 	ldr	r0, [pc, #14]	; 555bc <TCardSocket::EnableSocketAbort(void)+0x28>
         555a4:	e5902000 	ldr	r2, [r0]
         555a8:	e3e01010 	mvn	r1, #16	; 0x10
         555ac:	e0021001 	and	r1, r2, r1
         555b0:	e5801000 	str	r1, [r0]
         555b4:	e1a0f00e 	mov	pc, lr
         555b8:	0f240400 	swieq	0x00240400
         555bc:	0f240800 	swieq	0x00240800
    */
}

/**
 * Symbol: TCardSocket::SetCardServerPort(unsigned long)
 * Address: 000555c0
 */
TCardSocket::SetCardServerPort(unsigned long) {
    /*
         555c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::DisableSocketAbort(void)
 * Address: 000555c4
 */
TCardSocket::DisableSocketAbort(void) {
    /*
         555c4:	e59f0010 	ldr	r0, [pc, #10]	; 555dc <TCardSocket::DisableSocketAbort(void)+0x18>
         555c8:	e5901000 	ldr	r1, [r0]
         555cc:	e3a02010 	mov	r2, #16	; 0x10
         555d0:	e1811002 	orr	r1, r1, r2
         555d4:	e5801000 	str	r1, [r0]
         555d8:	e1a0f00e 	mov	pc, lr
         555dc:	0f240800 	swieq	0x00240800
    */
}

/**
 * Symbol: TCardSocket::EnableBus(void)
 * Address: 000555e0
 */
TCardSocket::EnableBus(void) {
    /*
         555e0:	e5900080 	ldr	r0, [r0, #128]	; fField128
         555e4:	e2800b09 	add	r0, r0, #9216	; 0x2400
         555e8:	e5902000 	ldr	r2, [r0]
         555ec:	e3a01b01 	mov	r1, #1024	; 0x400
         555f0:	e1821001 	orr	r1, r2, r1
         555f4:	e5801000 	str	r1, [r0]
         555f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::DisableBus(void)
 * Address: 000555fc
 */
TCardSocket::DisableBus(void) {
    /*
         555fc:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55600:	e2800b09 	add	r0, r0, #9216	; 0x2400
         55604:	e5902000 	ldr	r2, [r0]
         55608:	e3e01b01 	mvn	r1, #1024	; 0x400
         5560c:	e0021001 	and	r1, r2, r1
         55610:	e5801000 	str	r1, [r0]
         55614:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::PCMCIAReset(void)
 * Address: 00055618
 */
void		TCardSocket::PCMCIAReset(void);					// PCMCIA bus reset {
    /*
         55618:	e5901080 	ldr	r1, [r0, #128]	; fField128
         5561c:	e2811b09 	add	r1, r1, #9216	; 0x2400
         55620:	e5913000 	ldr	r3, [r1]
         55624:	e3a02a01 	mov	r2, #4096	; 0x1000
         55628:	e1832002 	orr	r2, r3, r2
         5562c:	e5812000 	str	r2, [r1]
         55630:	e59f1030 	ldr	r1, [pc, #30]	; 55668 <TCardSocket::PCMCIAReset(void)+0x50>
         55634:	e5913000 	ldr	r3, [r1]
         55638:	e3a02050 	mov	r2, #80	; 0x50
         5563c:	e591c000 	ldr	ip, [r1]
         55640:	e04cc003 	sub	ip, ip, r3
         55644:	e15c0002 	cmp	ip, r2
         55648:	3afffffb 	bcc	5563c <TCardSocket::PCMCIAReset(void)+0x24>
         5564c:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55650:	e2800b09 	add	r0, r0, #9216	; 0x2400
         55654:	e5901000 	ldr	r1, [r0]
         55658:	e3e02a01 	mvn	r2, #4096	; 0x1000
         5565c:	e0011002 	and	r1, r1, r2
         55660:	e5801000 	str	r1, [r0]
         55664:	e1a0f00e 	mov	pc, lr
         55668:	0f181800 	swieq	0x00181800
    */
}

/**
 * Symbol: TCardSocket::SelectPCMCIABus(void)
 * Address: 0005566c
 */
TCardSocket::SelectPCMCIABus(void) {
    /*
         5566c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::DeselectPCMCIABus(void)
 * Address: 00055670
 */
TCardSocket::DeselectPCMCIABus(void) {
    /*
         55670:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::SelectMemoryInterface(void)
 * Address: 00055674
 */
void		TCardSocket::SelectMemoryInterface(void);		// Select PCMCIA memory interface {
    /*
         55674:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55678:	e2800b09 	add	r0, r0, #9216	; 0x2400
         5567c:	e5902000 	ldr	r2, [r0]
         55680:	e3e01c01 	mvn	r1, #256	; 0x100
         55684:	e0021001 	and	r1, r2, r1
         55688:	e5801000 	str	r1, [r0]
         5568c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::SelectIOInterface(void)
 * Address: 00055690
 */
void		TCardSocket::SelectIOInterface(void);			// Select PCMCIA IO interface {
    /*
         55690:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55694:	e2800b09 	add	r0, r0, #9216	; 0x2400
         55698:	e5902000 	ldr	r2, [r0]
         5569c:	e3a01c01 	mov	r1, #256	; 0x100
         556a0:	e1821001 	orr	r1, r2, r1
         556a4:	e5801000 	str	r1, [r0]
         556a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::SetAttributeMemSpeed(unsigned long)
 * Address: 000556ac
 */
void		TCardSocket::SetAttributeMemSpeed(TNanoSecond speed);	// Set attribute memory wait speed {
    /*
         556ac:	e1a0c00d 	mov	ip, sp
         556b0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         556b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         556b8:	e1a04000 	mov	r4, r0
         556bc:	eb6b916f 	bl	1b39c80 <TCardSocket::$ConvertWaitCount(unsigned long)>
         556c0:	e5b41080 	ldr	r1, [r4, #128]!	; fField128
         556c4:	e2811a03 	add	r1, r1, #12288	; 0x3000
         556c8:	e5912000 	ldr	r2, [r1]
         556cc:	e3e0303f 	mvn	r3, #63	; 0x3f
         556d0:	e0022003 	and	r2, r2, r3
         556d4:	e1820000 	orr	r0, r2, r0
         556d8:	e5810000 	str	r0, [r1]
         556dc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::SetCommonMemSpeed(unsigned long)
 * Address: 000556e0
 */
void		TCardSocket::SetCommonMemSpeed(TNanoSecond speed);		// Set common memory wait speed {
    /*
         556e0:	e1a0c00d 	mov	ip, sp
         556e4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         556e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         556ec:	e1a04000 	mov	r4, r0
         556f0:	eb6b9162 	bl	1b39c80 <TCardSocket::$ConvertWaitCount(unsigned long)>
         556f4:	e5b41080 	ldr	r1, [r4, #128]!	; fField128
         556f8:	e2811a03 	add	r1, r1, #12288	; 0x3000
         556fc:	e5912000 	ldr	r2, [r1]
         55700:	e3e0303f 	mvn	r3, #63	; 0x3f
         55704:	e0022003 	and	r2, r2, r3
         55708:	e1820000 	orr	r0, r2, r0
         5570c:	e5810000 	str	r0, [r1]
         55710:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::GetChipInfo(void)
 * Address: 00055714
 */
TCardSocket::GetChipInfo(void) {
    /*
         55714:	e1a0c00d 	mov	ip, sp
         55718:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         5571c:	e24cb004 	sub	fp, ip, #4	; 0x4
         55720:	e1a04000 	mov	r4, r0
         55724:	e3a00000 	mov	r0, #0	; 0x0
         55728:	e52d0004 	str	r0, [sp, -#4]!	; TCardSocket
         5572c:	e52d006c 	str	r0, [sp, -#108]!
         55730:	e28d0008 	add	r0, sp, #8	; 0x8
         55734:	eb6d748e 	bl	1bb2974 <$setjmp>
         55738:	e3300000 	teq	r0, #0	; 0x0
         5573c:	1a000023 	bne	557d0 <TCardSocket::GetChipInfo(void)+0xbc>
         55740:	e1a0000d 	mov	r0, sp
         55744:	eb6e2a4c 	bl	1be007c <$AddExceptionHandler>
         55748:	e5945080 	ldr	r5, [r4, #128]	; fField128
         5574c:	e2850a03 	add	r0, r5, #12288	; 0x3000
         55750:	e2851b0e 	add	r1, r5, #14336	; 0x3800
         55754:	e3a0c0a5 	mov	ip, #165	; 0xa5
         55758:	e28ccca5 	add	ip, ip, #42240	; 0xa500
         5575c:	e3a0305a 	mov	r3, #90	; 0x5a
         55760:	e2833c5a 	add	r3, r3, #23040	; 0x5a00
         55764:	e3a0e801 	mov	lr, #65536	; 0x10000
         55768:	e24ee001 	sub	lr, lr, #1	; 0x1
         5576c:	e5907000 	ldr	r7, [r0]
         55770:	e5916000 	ldr	r6, [r1]
         55774:	e3a02001 	mov	r2, #1	; 0x1
         55778:	e580c000 	str	ip, [r0]
         5577c:	e5813000 	str	r3, [r1]
         55780:	e5908000 	ldr	r8, [r0]
         55784:	e008800e 	and	r8, r8, lr
         55788:	e138000c 	teq	r8, ip
         5578c:	13a02000 	movne	r2, #0	; 0x0
         55790:	e5803000 	str	r3, [r0]
         55794:	e581c000 	str	ip, [r1]
         55798:	e590c000 	ldr	ip, [r0]
         5579c:	e00cc00e 	and	ip, ip, lr
         557a0:	e13c0003 	teq	ip, r3
         557a4:	13a02000 	movne	r2, #0	; 0x0
         557a8:	e5807000 	str	r7, [r0]
         557ac:	e5816000 	str	r6, [r1]
         557b0:	e3320000 	teq	r2, #0	; 0x0
         557b4:	0a00000b 	beq	557e8 <TCardSocket::GetChipInfo(void)+0xd4>
         557b8:	e3a000fc 	mov	r0, #252	; 0xfc
         557bc:	e2851b11 	add	r1, r5, #17408	; 0x4400
         557c0:	e5911000 	ldr	r1, [r1]
         557c4:	e0010000 	and	r0, r1, r0
         557c8:	e58d006c 	str	r0, [sp, #108]
         557cc:	ea000005 	b	557e8 <TCardSocket::GetChipInfo(void)+0xd4>
         557d0:	e59d0060 	ldr	r0, [sp, #96]
         557d4:	e28f1f0d 	add	r1, pc, #52	; 0x34
         557d8:	eb6e366d 	bl	1be3194 <$Subexception>
         557dc:	e3300000 	teq	r0, #0	; 0x0
         557e0:	01a0000d 	moveq	r0, sp
         557e4:	0b6e325a 	bleq	1be2154 <$NextHandler>
         557e8:	e1a0000d 	mov	r0, sp
         557ec:	eb6e2e31 	bl	1be10b8 <$ExitHandler>
         557f0:	e28dd06c 	add	sp, sp, #108	; 0x6c
         557f4:	e5b4000c 	ldr	r0, [r4, #12]!	; TxBEmptyIntHandler
         557f8:	e3300000 	teq	r0, #0	; 0x0
         557fc:	059d0000 	ldreq	r0, [sp]
         55800:	059f100c 	ldreq	r1, [pc, #c]	; 55814 <TCardSocket::GetChipInfo(void)+0x100>
         55804:	05810000 	streq	r0, [r1]
         55808:	e49d0004 	ldr	r0, [sp], #4	; TCardSocket
         5580c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         55810:	00000000 	andeq	r0, r0, r0
         55814:	0c100ac0 	ldceq	10, cr0, [r0], -#768
    */
}

/**
 * Symbol: TCardSocket::SetIOSpeed(unsigned long)
 * Address: 00055818
 */
void		TCardSocket::SetIOSpeed(TNanoSecond speed);				// Set IO wait speed {
    /*
         55818:	e1a0c00d 	mov	ip, sp
         5581c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         55820:	e24cb004 	sub	fp, ip, #4	; 0x4
         55824:	e1a04000 	mov	r4, r0
         55828:	eb6b9114 	bl	1b39c80 <TCardSocket::$ConvertWaitCount(unsigned long)>
         5582c:	e5b41080 	ldr	r1, [r4, #128]!	; fField128
         55830:	e2811b0e 	add	r1, r1, #14336	; 0x3800
         55834:	e5912000 	ldr	r2, [r1]
         55838:	e3e0303f 	mvn	r3, #63	; 0x3f
         5583c:	e0022003 	and	r2, r2, r3
         55840:	e1820000 	orr	r0, r2, r0
         55844:	e5810000 	str	r0, [r1]
         55848:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::SetWatchTimer(unsigned long)
 * Address: 0005584c
 */
void		TCardSocket::SetWatchTimer(TNanoSecond time);			// Set system to card watch dog timer {
    /*
         5584c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::SetDMAWatchTimer(unsigned long)
 * Address: 00055850
 */
void		TCardSocket::SetDMAWatchTimer(TNanoSecond time);			// Set DMA to card watch dog timer {
    /*
         55850:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::SetBusTimer(unsigned long)
 * Address: 00055854
 */
void		TCardSocket::SetBusTimer(TNanoSecond time);				// Set bus timer {
    /*
         55854:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::GetCommonMemSpeed(void)
 * Address: 00055858
 */
TNanoSecond	TCardSocket::GetCommonMemSpeed(void);					// Get common memory wait speed {
    /*
         55858:	e5900080 	ldr	r0, [r0, #128]	; fField128
         5585c:	e2800a03 	add	r0, r0, #12288	; 0x3000
         55860:	e5900000 	ldr	r0, [r0]
         55864:	e3a0103f 	mov	r1, #63	; 0x3f
         55868:	e0000001 	and	r0, r0, r1
         5586c:	e2801002 	add	r1, r0, #2	; 0x2
         55870:	e59f000c 	ldr	r0, [pc, #c]	; 55884 <TCardSocket::GetCommonMemSpeed(void)+0x2c>
         55874:	e5900004 	ldr	r0, [r0, #4]	; TCardSocket
         55878:	e0010190 	mul	r1, r0, r1
         5587c:	e3a00ffa 	mov	r0, #1000	; 0x3e8
         55880:	ea6d7430 	b	1bb2948 <$__rt_udiv>
         55884:	0c100ac0 	ldceq	10, cr0, [r0], -#768
    */
}

/**
 * Symbol: TCardSocket::ConvertWaitCount(unsigned long)
 * Address: 00055888
 */
TCardSocket::ConvertWaitCount(unsigned long) {
    /*
         55888:	e1a0c00d 	mov	ip, sp
         5588c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55890:	e24cb004 	sub	fp, ip, #4	; 0x4
         55894:	e1a00001 	mov	r0, r1
         55898:	e59f104c 	ldr	r1, [pc, #4c]	; 558ec <TCardSocket::ConvertWaitCount(unsigned long)+0x64>	; TCardSocket
         5589c:	e5b13004 	ldr	r3, [r1, #4]!	; TCardSocket
         558a0:	e1a02083 	mov	r2, r3, lsl #1
         558a4:	e080c080 	add	ip, r0, r0, lsl #1
         558a8:	e06c0380 	rsb	r0, ip, r0, lsl #7
         558ac:	e1a00180 	mov	r0, r0, lsl #3
         558b0:	e1500002 	cmp	r0, r2
         558b4:	31a00002 	movcc	r0, r2
         558b8:	e0400002 	sub	r0, r0, r2
         558bc:	e0800003 	add	r0, r0, r3
         558c0:	e2401001 	sub	r1, r0, #1	; 0x1
         558c4:	e1a00003 	mov	r0, r3
         558c8:	eb6d741e 	bl	1bb2948 <$__rt_udiv>
         558cc:	e3a02000 	mov	r2, #0	; 0x0
         558d0:	e3a0103f 	mov	r1, #63	; 0x3f
         558d4:	e3500000 	cmp	r0, #0	; 0x0
         558d8:	31a00002 	movcc	r0, r2
         558dc:	391ba800 	ldmccdb	fp, {fp, sp, pc}
         558e0:	e350003f 	cmp	r0, #63	; 0x3f
         558e4:	81a00001 	movhi	r0, r1
         558e8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         558ec:	0c100ac0 	ldceq	10, cr0, [r0], -#768
    */
}

/**
 * Symbol: TCardSocket::SetDefaultSpeeds(void)
 * Address: 000558f0
 */
void		TCardSocket::SetDefaultSpeeds(void);						// Set default speeds and timeouts {
    /*
         558f0:	e1a0c00d 	mov	ip, sp
         558f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         558f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         558fc:	e1a04000 	mov	r4, r0
         55900:	e3a01f4b 	mov	r1, #300	; 0x12c
         55904:	e1a05001 	mov	r5, r1
         55908:	eb6e1515 	bl	1bdad64 <TCardSocket::$SetAttributeMemSpeed(unsigned long)>
         5590c:	e1a01005 	mov	r1, r5
         55910:	e1a00004 	mov	r0, r4
         55914:	eb6e191e 	bl	1bdbd94 <TCardSocket::$SetCommonMemSpeed(unsigned long)>
         55918:	e1a01005 	mov	r1, r5
         5591c:	e1a00004 	mov	r0, r4
         55920:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         55924:	ea6e1927 	b	1bdbdc8 <TCardSocket::$SetIOSpeed(unsigned long)>
    */
}

/**
 * Symbol: TCardSocket::SetControl(unsigned long)
 * Address: 00055928
 */
void		TCardSocket::SetControl(ULong control);			// Set control {
    /*
         55928:	e92d4010 	stmdb	sp!, {r4, lr}
         5592c:	e2013d32 	and	r3, r1, #3200	; 0xc80
         55930:	e3110020 	tst	r1, #32	; 0x20
         55934:	03833020 	orreq	r3, r3, #32	; 0x20
         55938:	e3110002 	tst	r1, #2	; 0x2
         5593c:	13833c01 	orrne	r3, r3, #256	; 0x100
         55940:	e3a02000 	mov	r2, #0	; 0x0
         55944:	e3110802 	tst	r1, #131072	; 0x20000
         55948:	03a02b02 	moveq	r2, #2048	; 0x800
         5594c:	e3110010 	tst	r1, #16	; 0x10
         55950:	03822080 	orreq	r2, r2, #128	; 0x80
         55954:	e3110801 	tst	r1, #65536	; 0x10000
         55958:	13822c02 	orrne	r2, r2, #512	; 0x200
         5595c:	e2011a0f 	and	r1, r1, #61440	; 0xf000
         55960:	e3110902 	tst	r1, #32768	; 0x8000
         55964:	03811a02 	orreq	r1, r1, #8192	; 0x2000
         55968:	e3110901 	tst	r1, #16384	; 0x4000
         5596c:	03811a01 	orreq	r1, r1, #4096	; 0x1000
         55970:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55974:	e280ca02 	add	ip, r0, #8192	; 0x2000
         55978:	e59c4000 	ldr	r4, [ip]
         5597c:	e3e0eeda 	mvn	lr, #3488	; 0xda0
         55980:	e004e00e 	and	lr, r4, lr
         55984:	e18e3003 	orr	r3, lr, r3
         55988:	e58c3000 	str	r3, [ip]
         5598c:	e2803b09 	add	r3, r0, #9216	; 0x2400
         55990:	e593c000 	ldr	ip, [r3]
         55994:	e3e0ed2a 	mvn	lr, #2688	; 0xa80
         55998:	e00cc00e 	and	ip, ip, lr
         5599c:	e18c2002 	orr	r2, ip, r2
         559a0:	e5832000 	str	r2, [r3]
         559a4:	e2800b0b 	add	r0, r0, #11264	; 0x2c00
         559a8:	e5903000 	ldr	r3, [r0]
         559ac:	e3e02a0f 	mvn	r2, #61440	; 0xf000
         559b0:	e0032002 	and	r2, r3, r2
         559b4:	e1821001 	orr	r1, r2, r1
         559b8:	e5801000 	str	r1, [r0]
         559bc:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TCardSocket::SetRdWrQueueControl(unsigned long)
 * Address: 000559c0
 */
void		TCardSocket::SetRdWrQueueControl(ULong control);	// Set read/write prefetch/queue control {
    /*
         559c0:	e5900080 	ldr	r0, [r0, #128]	; fField128
         559c4:	e2800a02 	add	r0, r0, #8192	; 0x2000
         559c8:	e201101f 	and	r1, r1, #31	; 0x1f
         559cc:	e5902000 	ldr	r2, [r0]
         559d0:	e3e0301f 	mvn	r3, #31	; 0x1f
         559d4:	e0022003 	and	r2, r2, r3
         559d8:	e1821001 	orr	r1, r2, r1
         559dc:	e5801000 	str	r1, [r0]
         559e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::EnableSocketAccess(void)
 * Address: 000559e4
 */
TCardSocket::EnableSocketAccess(void) {
    /*
         559e4:	e1a0c00d 	mov	ip, sp
         559e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         559ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         559f0:	e1a04000 	mov	r4, r0
         559f4:	e590100c 	ldr	r1, [r0, #12]	; TxBEmptyIntHandler
         559f8:	e59f0030 	ldr	r0, [pc, #30]	; 55a30 <TCardSocket::EnableSocketAccess(void)+0x4c>
         559fc:	e7905101 	ldr	r5, [r0, r1, lsl #2]	; fField2
         55a00:	e1a01005 	mov	r1, r5
         55a04:	e3a03000 	mov	r3, #0	; 0x0
         55a08:	e8940005 	ldmia	r4, {r0, r2}
         55a0c:	eb6e10ab 	bl	1bd9cc0 <$RememberPhysMap__15TUDomainManagerSFUlN21Uc>
         55a10:	e3300000 	teq	r0, #0	; 0x0
         55a14:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         55a18:	e1a01005 	mov	r1, r5
         55a1c:	e3a03003 	mov	r3, #3	; 0x3
         55a20:	e3a02303 	mov	r2, #201326592	; 0xc000000
         55a24:	e5940000 	ldr	r0, [r4]
         55a28:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         55a2c:	ea6e10a1 	b	1bd9cb8 <$RememberPermMap__15TUDomainManagerSFUlN214Perm>
         55a30:	0c101188 	ldfeqs	f1, [r0], -#544
    */
}

/**
 * Symbol: TCardSocket::SetPullupControl(unsigned long)
 * Address: 00055a34
 */
void		TCardSocket::SetPullupControl(ULong control);	// Set pullups control {
    /*
         55a34:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55a38:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         55a3c:	e2011b1f 	and	r1, r1, #31744	; 0x7c00
         55a40:	e5902000 	ldr	r2, [r0]
         55a44:	e3e03b1f 	mvn	r3, #31744	; 0x7c00
         55a48:	e0022003 	and	r2, r2, r3
         55a4c:	e1821001 	orr	r1, r2, r1
         55a50:	e5801000 	str	r1, [r0]
         55a54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::Do16BitWrite(unsigned long, unsigned long)
 * Address: 00055a58
 */
void		TCardSocket::Do16BitWrite(ULong addr, ULong data);	// Write 16 bit data (data at low 16-bit) {
    /*
         55a58:	e1a02802 	mov	r2, r2, lsl #16
         55a5c:	e3110003 	tst	r1, #3	; 0x3
         55a60:	05812000 	streq	r2, [r1]
         55a64:	01a0f00e 	moveq	pc, lr
         55a68:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55a6c:	e2800a02 	add	r0, r0, #8192	; 0x2000
         55a70:	e5903000 	ldr	r3, [r0]
         55a74:	e3c3ce12 	bic	ip, r3, #288	; 0x120
         55a78:	e38ccb02 	orr	ip, ip, #2048	; 0x800
         55a7c:	e580c000 	str	ip, [r0]
         55a80:	e3c11003 	bic	r1, r1, #3	; 0x3
         55a84:	e5812000 	str	r2, [r1]
         55a88:	e24dd004 	sub	sp, sp, #4	; 0x4
         55a8c:	e5901000 	ldr	r1, [r0]
         55a90:	e58d1000 	str	r1, [sp]
         55a94:	e5803000 	str	r3, [r0]
         55a98:	e28dd004 	add	sp, sp, #4	; 0x4
         55a9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::Do16BitRead(unsigned long)
 * Address: 00055aa0
 */
ULong		TCardSocket::Do16BitRead(ULong addr);				// Do 16-bit read (data returns at low 16-bit) {
    /*
         55aa0:	e3110003 	tst	r1, #3	; 0x3
         55aa4:	05911000 	ldreq	r1, [r1]
         55aa8:	0a000008 	beq	55ad0 <TCardSocket::Do16BitRead(unsigned long)+0x30>
         55aac:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55ab0:	e2800a02 	add	r0, r0, #8192	; 0x2000
         55ab4:	e5902000 	ldr	r2, [r0]
         55ab8:	e3c23e12 	bic	r3, r2, #288	; 0x120
         55abc:	e3833b02 	orr	r3, r3, #2048	; 0x800
         55ac0:	e5803000 	str	r3, [r0]
         55ac4:	e3c11003 	bic	r1, r1, #3	; 0x3
         55ac8:	e5911000 	ldr	r1, [r1]
         55acc:	e5802000 	str	r2, [r0]
         55ad0:	e1a00821 	mov	r0, r1, lsr #16
         55ad4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::VccOn(void)
 * Address: 00055ad8
 */
TCardSocket::VccOn(void) {
    /*
         55ad8:	e1a0c00d 	mov	ip, sp
         55adc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         55ae0:	e24cb004 	sub	fp, ip, #4	; 0x4
         55ae4:	e1a04000 	mov	r4, r0
         55ae8:	e590000c 	ldr	r0, [r0, #12]	; TxBEmptyIntHandler
         55aec:	e2800010 	add	r0, r0, #16	; 0x10
         55af0:	eb6ed6be 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
         55af4:	e5940080 	ldr	r0, [r4, #128]	; fField128
         55af8:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         55afc:	e5902000 	ldr	r2, [r0]
         55b00:	e3a01020 	mov	r1, #32	; 0x20
         55b04:	e1821001 	orr	r1, r2, r1
         55b08:	e5801000 	str	r1, [r0]
         55b0c:	e5940010 	ldr	r0, [r4, #16]	; ExtStsIntHandler
         55b10:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
         55b14:	e5a40010 	str	r0, [r4, #16]!	; ExtStsIntHandler
         55b18:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::VccOff(void)
 * Address: 00055b1c
 */
TCardSocket::VccOff(void) {
    /*
         55b1c:	e5901010 	ldr	r1, [r0, #16]	; ExtStsIntHandler
         55b20:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
         55b24:	e5801010 	str	r1, [r0, #16]	; ExtStsIntHandler
         55b28:	e5901080 	ldr	r1, [r0, #128]	; fField128
         55b2c:	e2811b0a 	add	r1, r1, #10240	; 0x2800
         55b30:	e5913000 	ldr	r3, [r1]
         55b34:	e3e02020 	mvn	r2, #32	; 0x20
         55b38:	e0032002 	and	r2, r3, r2
         55b3c:	e5812000 	str	r2, [r1]
         55b40:	e590000c 	ldr	r0, [r0, #12]	; TxBEmptyIntHandler
         55b44:	e2800010 	add	r0, r0, #16	; 0x10
         55b48:	ea6ed6a7 	b	1c0b5ec <$IOPowerOff(unsigned long)>
    */
}

/**
 * Symbol: TCardSocket::VppOn(void)
 * Address: 00055b4c
 */
TCardSocket::VppOn(void) {
    /*
         55b4c:	e1a0c00d 	mov	ip, sp
         55b50:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         55b54:	e24cb004 	sub	fp, ip, #4	; 0x4
         55b58:	e1a04000 	mov	r4, r0
         55b5c:	e590000c 	ldr	r0, [r0, #12]	; TxBEmptyIntHandler
         55b60:	e2800014 	add	r0, r0, #20	; 0x14
         55b64:	eb6ed6a1 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
         55b68:	e5940010 	ldr	r0, [r4, #16]	; ExtStsIntHandler
         55b6c:	e3801201 	orr	r1, r0, #268435456	; 0x10000000
         55b70:	e1a00181 	mov	r0, r1, lsl #3
         55b74:	e1a00fa0 	mov	r0, r0, lsr #31
         55b78:	e3c11202 	bic	r1, r1, #536870912	; 0x20000000
         55b7c:	e1810e80 	orr	r0, r1, r0, lsl #29
         55b80:	e5a40010 	str	r0, [r4, #16]!	; ExtStsIntHandler
         55b84:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::VppOff(void)
 * Address: 00055b88
 */
TCardSocket::VppOff(void) {
    /*
         55b88:	e5901010 	ldr	r1, [r0, #16]	; ExtStsIntHandler
         55b8c:	e3c12201 	bic	r2, r1, #268435456	; 0x10000000
         55b90:	e1a01182 	mov	r1, r2, lsl #3
         55b94:	e1a01fa1 	mov	r1, r1, lsr #31
         55b98:	e3c22202 	bic	r2, r2, #536870912	; 0x20000000
         55b9c:	e1821e81 	orr	r1, r2, r1, lsl #29
         55ba0:	e5801010 	str	r1, [r0, #16]	; ExtStsIntHandler
         55ba4:	e590000c 	ldr	r0, [r0, #12]	; TxBEmptyIntHandler
         55ba8:	e2800014 	add	r0, r0, #20	; 0x14
         55bac:	ea6ed68e 	b	1c0b5ec <$IOPowerOff(unsigned long)>
    */
}

/**
 * Symbol: TCardSocket::Vpp1On(void)
 * Address: 00055bb0
 */
TCardSocket::Vpp1On(void) {
    /*
         55bb0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::Vpp1Off(void)
 * Address: 00055bb4
 */
TCardSocket::Vpp1Off(void) {
    /*
         55bb4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::Vpp2On(void)
 * Address: 00055bb8
 */
TCardSocket::Vpp2On(void) {
    /*
         55bb8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::DisableSocketAccess(void)
 * Address: 00055bbc
 */
TCardSocket::DisableSocketAccess(void) {
    /*
         55bbc:	e2800004 	add	r0, r0, #4	; 0x4
         55bc0:	ea6dffcc 	b	1bd5af8 <TUPhys::$Invalidate(void)>
    */
}

/**
 * Symbol: TCardSocket::Vpp2Off(void)
 * Address: 00055bc4
 */
TCardSocket::Vpp2Off(void) {
    /*
         55bc4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::GetControl(void)
 * Address: 00055bc8
 */
ULong		TCardSocket::GetControl(void);					// Get control {
    /*
         55bc8:	e5b02080 	ldr	r2, [r0, #128]!	; fField128
         55bcc:	e1a03002 	mov	r3, r2
         55bd0:	e2820a02 	add	r0, r2, #8192	; 0x2000
         55bd4:	e5901000 	ldr	r1, [r0]
         55bd8:	e2010d32 	and	r0, r1, #3200	; 0xc80
         55bdc:	e3110020 	tst	r1, #32	; 0x20
         55be0:	03800020 	orreq	r0, r0, #32	; 0x20
         55be4:	e3110c01 	tst	r1, #256	; 0x100
         55be8:	13800002 	orrne	r0, r0, #2	; 0x2
         55bec:	e2821b09 	add	r1, r2, #9216	; 0x2400
         55bf0:	e5911000 	ldr	r1, [r1]
         55bf4:	e3110b02 	tst	r1, #2048	; 0x800
         55bf8:	03800802 	orreq	r0, r0, #131072	; 0x20000
         55bfc:	e3110080 	tst	r1, #128	; 0x80
         55c00:	03800010 	orreq	r0, r0, #16	; 0x10
         55c04:	e3110c02 	tst	r1, #512	; 0x200
         55c08:	13800801 	orrne	r0, r0, #65536	; 0x10000
         55c0c:	e3800008 	orr	r0, r0, #8	; 0x8
         55c10:	e2831b0b 	add	r1, r3, #11264	; 0x2c00
         55c14:	e5911000 	ldr	r1, [r1]
         55c18:	e2011a0f 	and	r1, r1, #61440	; 0xf000
         55c1c:	e1810000 	orr	r0, r1, r0
         55c20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::GetPCPins(void)
 * Address: 00055c24
 */
ULong		TCardSocket::GetPCPins(void);					// Get pin states {
    /*
         55c24:	e1a0c00d 	mov	ip, sp
         55c28:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         55c2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         55c30:	e24dd004 	sub	sp, sp, #4	; 0x4
         55c34:	e5901080 	ldr	r1, [r0, #128]	; fField128
         55c38:	e2811b07 	add	r1, r1, #7168	; 0x1c00
         55c3c:	e5911000 	ldr	r1, [r1]
         55c40:	e58d1000 	str	r1, [sp]
         55c44:	e2014b1e 	and	r4, r1, #30720	; 0x7800
         55c48:	e3110020 	tst	r1, #32	; 0x20
         55c4c:	13844b01 	orrne	r4, r4, #1024	; 0x400
         55c50:	e3110010 	tst	r1, #16	; 0x10
         55c54:	13844c02 	orrne	r4, r4, #512	; 0x200
         55c58:	e3110b01 	tst	r1, #1024	; 0x400
         55c5c:	13844004 	orrne	r4, r4, #4	; 0x4
         55c60:	e3110002 	tst	r1, #2	; 0x2
         55c64:	13844010 	orrne	r4, r4, #16	; 0x10
         55c68:	e3110001 	tst	r1, #1	; 0x1
         55c6c:	13844008 	orrne	r4, r4, #8	; 0x8
         55c70:	e3110c02 	tst	r1, #512	; 0x200
         55c74:	13844020 	orrne	r4, r4, #32	; 0x20
         55c78:	e3110004 	tst	r1, #4	; 0x4
         55c7c:	03844002 	orreq	r4, r4, #2	; 0x2
         55c80:	e3110008 	tst	r1, #8	; 0x8
         55c84:	03844001 	orreq	r4, r4, #1	; 0x1
         55c88:	e5b0100c 	ldr	r1, [r0, #12]!	; TxBEmptyIntHandler
         55c8c:	e59f0024 	ldr	r0, [pc, #24]	; 55cb8 <TCardSocket::GetPCPins(void)+0x94>	; RxCSpecialIntHandler
         55c90:	e7d01001 	ldrb	r1, [r0, r1]
         55c94:	e1a0200d 	mov	r2, sp
         55c98:	e59f001c 	ldr	r0, [pc, #1c]	; 55cbc <TCardSocket::GetPCPins(void)+0x98>	; fField1
         55c9c:	e5900000 	ldr	r0, [r0]
         55ca0:	eb68629a 	bl	1a6e710 <TGPIOInterface::$ReadGPIOData(unsigned char, unsigned long *)>
         55ca4:	e59d0000 	ldr	r0, [sp]
         55ca8:	e3300000 	teq	r0, #0	; 0x0
         55cac:	03844080 	orreq	r4, r4, #128	; 0x80
         55cb0:	e1a00004 	mov	r0, r4
         55cb4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         55cb8:	0c100ae4 	ldceq	10, cr0, [r0], -#912
         55cbc:	0c100f6c 	ldceq	15, cr0, [r0], -#432
    */
}

/**
 * Symbol: TCardSocket::GetVPCPins(void)
 * Address: 00055cc0
 */
ULong		TCardSocket::GetVPCPins();						// Get Voyager PCPins (Direct read, no conversion) {
    /*
         55cc0:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55cc4:	e2800b07 	add	r0, r0, #7168	; 0x1c00
         55cc8:	e5900000 	ldr	r0, [r0]
         55ccc:	e1a00880 	mov	r0, r0, lsl #17
         55cd0:	e1a008a0 	mov	r0, r0, lsr #17
         55cd4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::IsPCMCIABus(void)
 * Address: 00055cd8
 */
TCardSocket::IsPCMCIABus(void) {
    /*
         55cd8:	e3a00001 	mov	r0, #1	; 0x1
         55cdc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::IsPCMCIABusEnable(void)
 * Address: 00055ce0
 */
Boolean		TCardSocket::IsPCMCIABusEnable(void);			// Is PCMCIA bus enabled {
    /*
         55ce0:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55ce4:	e2800b09 	add	r0, r0, #9216	; 0x2400
         55ce8:	e5900000 	ldr	r0, [r0]
         55cec:	e3a01b01 	mov	r1, #1024	; 0x400
         55cf0:	e0100001 	ands	r0, r0, r1
         55cf4:	13a00001 	movne	r0, #1	; 0x1
         55cf8:	e20000ff 	and	r0, r0, #255	; 0xff
         55cfc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::IsIOInteface(void)
 * Address: 00055d00
 */
Boolean		TCardSocket::IsIOInteface(void);					// Is PCMCIA IO interface selected {
    /*
         55d00:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55d04:	e2800b09 	add	r0, r0, #9216	; 0x2400
         55d08:	e5900000 	ldr	r0, [r0]
         55d0c:	e3a01c01 	mov	r1, #256	; 0x100
         55d10:	e0100001 	ands	r0, r0, r1
         55d14:	13a00001 	movne	r0, #1	; 0x1
         55d18:	e20000ff 	and	r0, r0, #255	; 0xff
         55d1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::MakeSocketAccessible(unsigned long, unsigned long)
 * Address: 00055d20
 */
TCardSocket::MakeSocketAccessible(unsigned long, unsigned long) {
    /*
         55d20:	e1a0c00d 	mov	ip, sp
         55d24:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55d28:	e24cb004 	sub	fp, ip, #4	; 0x4
         55d2c:	e3a03000 	mov	r3, #0	; 0x0
         55d30:	e3320000 	teq	r2, #0	; 0x0
         55d34:	0a000003 	beq	55d48 <TCardSocket::MakeSocketAccessible(unsigned long, unsigned long)+0x28>
         55d38:	e2800004 	add	r0, r0, #4	; 0x4
         55d3c:	e3a03002 	mov	r3, #2	; 0x2
         55d40:	eb6e9c4b 	bl	1bfce74 <TUPhys::$ChangeVirtualMapping(unsigned long, unsigned long, EPhysChangeType)>
         55d44:	e1a03000 	mov	r3, r0
         55d48:	e1a00003 	mov	r0, r3
         55d4c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::IsCardDetected(void)
 * Address: 00055d50
 */
Boolean		TCardSocket::IsCardDetected(void);				// Is card deteced {
    /*
         55d50:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55d54:	e2800b07 	add	r0, r0, #7168	; 0x1c00
         55d58:	e5900000 	ldr	r0, [r0]
         55d5c:	e310000c 	tst	r0, #12	; 0xc
         55d60:	13a00000 	movne	r0, #0	; 0x0
         55d64:	03a00001 	moveq	r0, #1	; 0x1
         55d68:	e20000ff 	and	r0, r0, #255	; 0xff
         55d6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::IsReady(void)
 * Address: 00055d70
 */
Boolean		TCardSocket::IsReady(void);						// Is ready				(memory interface only) {
    /*
         55d70:	e1a0c00d 	mov	ip, sp
         55d74:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55d78:	e24cb004 	sub	fp, ip, #4	; 0x4
         55d7c:	eb6dfb23 	bl	1bd4a10 <TCardSocket::$GetPCPins(void)>
         55d80:	e2100004 	ands	r0, r0, #4	; 0x4
         55d84:	13a00001 	movne	r0, #1	; 0x1
         55d88:	e20000ff 	and	r0, r0, #255	; 0xff
         55d8c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::IsIRQ(void)
 * Address: 00055d90
 */
Boolean		TCardSocket::IsIRQ(void);						// Is IRQ high			(io interface only) {
    /*
         55d90:	e1a0c00d 	mov	ip, sp
         55d94:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55d98:	e24cb004 	sub	fp, ip, #4	; 0x4
         55d9c:	eb6e035f 	bl	1bd6b20 <TCardSocket::$IsReady(void)>
         55da0:	e3300000 	teq	r0, #0	; 0x0
         55da4:	13a00000 	movne	r0, #0	; 0x0
         55da8:	03a00001 	moveq	r0, #1	; 0x1
         55dac:	e20000ff 	and	r0, r0, #255	; 0xff
         55db0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::IsStatusChanged(void)
 * Address: 00055db4
 */
Boolean		TCardSocket::IsStatusChanged(void);				// Is status changed	(io interface only) {
    /*
         55db4:	e1a0c00d 	mov	ip, sp
         55db8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55dbc:	e24cb004 	sub	fp, ip, #4	; 0x4
         55dc0:	eb6dfb12 	bl	1bd4a10 <TCardSocket::$GetPCPins(void)>
         55dc4:	e2100008 	ands	r0, r0, #8	; 0x8
         55dc8:	13a00001 	movne	r0, #1	; 0x1
         55dcc:	e20000ff 	and	r0, r0, #255	; 0xff
         55dd0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::IsWriteProtected(void)
 * Address: 00055dd4
 */
Boolean		TCardSocket::IsWriteProtected(void);				// Is write protected	(memory interface only) {
    /*
         55dd4:	e1a0c00d 	mov	ip, sp
         55dd8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55ddc:	e24cb004 	sub	fp, ip, #4	; 0x4
         55de0:	eb6dfb0a 	bl	1bd4a10 <TCardSocket::$GetPCPins(void)>
         55de4:	e2100020 	ands	r0, r0, #32	; 0x20
         55de8:	13a00001 	movne	r0, #1	; 0x1
         55dec:	e20000ff 	and	r0, r0, #255	; 0xff
         55df0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::IsVccOn(void)
 * Address: 00055df4
 */
TCardSocket::IsVccOn(void) {
    /*
         55df4:	e5900080 	ldr	r0, [r0, #128]	; fField128
         55df8:	e2800b0a 	add	r0, r0, #10240	; 0x2800
         55dfc:	e5900000 	ldr	r0, [r0]
         55e00:	e3a01020 	mov	r1, #32	; 0x20
         55e04:	e0100001 	ands	r0, r0, r1
         55e08:	13a00001 	movne	r0, #1	; 0x1
         55e0c:	e20000ff 	and	r0, r0, #255	; 0xff
         55e10:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::IsVppOn(void)
 * Address: 00055e14
 */
TCardSocket::IsVppOn(void) {
    /*
         55e14:	e5b01080 	ldr	r1, [r0, #128]!	; fField128
         55e18:	e2810b0a 	add	r0, r1, #10240	; 0x2800
         55e1c:	e5900000 	ldr	r0, [r0]
         55e20:	e3a02020 	mov	r2, #32	; 0x20
         55e24:	e0000002 	and	r0, r0, r2
         55e28:	e2811b0b 	add	r1, r1, #11264	; 0x2c00
         55e2c:	e5911000 	ldr	r1, [r1]
         55e30:	e3a02004 	mov	r2, #4	; 0x4
         55e34:	e0011002 	and	r1, r1, r2
         55e38:	e3300000 	teq	r0, #0	; 0x0
         55e3c:	13310000 	teqne	r1, #0	; 0x0
         55e40:	03a00000 	moveq	r0, #0	; 0x0
         55e44:	13a00001 	movne	r0, #1	; 0x1
         55e48:	e20000ff 	and	r0, r0, #255	; 0xff
         55e4c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::VccRisingTime(void)
 * Address: 00055e50
 */
TNanoSecond	TCardSocket::VccRisingTime(void);				// Vcc rising time {
    /*
         55e50:	e59f0000 	ldr	r0, [pc, #0]	; 55e58 <TCardSocket::VccRisingTime(void)+0x8>
         55e54:	e1a0f00e 	mov	pc, lr
         55e58:	0bebc200 	bleq	ffb46660 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdf35e08>
    */
}

/**
 * Symbol: TCardSocket::MakeSocketInaccessible(unsigned long, unsigned long)
 * Address: 00055e5c
 */
TCardSocket::MakeSocketInaccessible(unsigned long, unsigned long) {
    /*
         55e5c:	e1a0c00d 	mov	ip, sp
         55e60:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55e64:	e24cb004 	sub	fp, ip, #4	; 0x4
         55e68:	e3a03000 	mov	r3, #0	; 0x0
         55e6c:	e3320000 	teq	r2, #0	; 0x0
         55e70:	0a000003 	beq	55e84 <TCardSocket::MakeSocketInaccessible(unsigned long, unsigned long)+0x28>
         55e74:	e2800004 	add	r0, r0, #4	; 0x4
         55e78:	e3a03001 	mov	r3, #1	; 0x1
         55e7c:	eb6e9bfc 	bl	1bfce74 <TUPhys::$ChangeVirtualMapping(unsigned long, unsigned long, EPhysChangeType)>
         55e80:	e1a03000 	mov	r3, r0
         55e84:	e1a00003 	mov	r0, r3
         55e88:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::VppRisingTime(void)
 * Address: 00055e8c
 */
TNanoSecond	TCardSocket::VppRisingTime(void);				// Vpp rising time {
    /*
         55e8c:	e1a0c00d 	mov	ip, sp
         55e90:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55e94:	e24cb004 	sub	fp, ip, #4	; 0x4
         55e98:	eb6ec964 	bl	1c08430 <TCardSocket::$VppVoltageSpec(void)>
         55e9c:	e2100002 	ands	r0, r0, #2	; 0x2
         55ea0:	159f0000 	ldrne	r0, [pc, #0]	; 55ea8 <TCardSocket::VppRisingTime(void)+0x1c>
         55ea4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         55ea8:	02faf080 	rsceqs	pc, sl, #128	; 0x80
    */
}

/**
 * Symbol: TCardSocket::VccMaxCurrent(void)
 * Address: 00055eac
 */
TNanoAmp	TCardSocket::VccMaxCurrent(void);				// Vcc max current supply {
    /*
         55eac:	e59f0000 	ldr	r0, [pc, #0]	; 55eb4 <TCardSocket::VccMaxCurrent(void)+0x8>
         55eb0:	e1a0f00e 	mov	pc, lr
         55eb4:	0bebc200 	bleq	ffb466bc <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfdf35e64>
    */
}

/**
 * Symbol: TCardSocket::VppMaxCurrent(void)
 * Address: 00055eb8
 */
TNanoAmp	TCardSocket::VppMaxCurrent(void);				// Vpp (Vpp1 + Vpp2) max current supply {
    /*
         55eb8:	e59f0000 	ldr	r0, [pc, #0]	; 55ec0 <TCardSocket::VppMaxCurrent(void)+0x8>
         55ebc:	e1a0f00e 	mov	pc, lr
         55ec0:	02faf080 	rsceqs	pc, sl, #128	; 0x80
    */
}

/**
 * Symbol: TCardSocket::Vpp1MaxCurrent(void)
 * Address: 00055ec4
 */
TNanoAmp	TCardSocket::Vpp1MaxCurrent(void);				// Vpp 1 max current supply {
    /*
         55ec4:	e1a0c00d 	mov	ip, sp
         55ec8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55ecc:	e24cb004 	sub	fp, ip, #4	; 0x4
         55ed0:	eb6e240b 	bl	1bdef04 <TCardSocket::$VppMaxCurrent(void)>
         55ed4:	e1a000a0 	mov	r0, r0, lsr #1
         55ed8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::Vpp2MaxCurrent(void)
 * Address: 00055edc
 */
TNanoAmp	TCardSocket::Vpp2MaxCurrent(void);				// Vpp 2 max current supply {
    /*
         55edc:	e1a0c00d 	mov	ip, sp
         55ee0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55ee4:	e24cb004 	sub	fp, ip, #4	; 0x4
         55ee8:	eb6e2405 	bl	1bdef04 <TCardSocket::$VppMaxCurrent(void)>
         55eec:	e1a000a0 	mov	r0, r0, lsr #1
         55ef0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::VccMaxVoltage(void)
 * Address: 00055ef4
 */
TMicroVolt	TCardSocket::VccMaxVoltage(void);				// Vcc max voltage supply (use VccVoltageSpec() in 2.0) {
    /*
         55ef4:	e1a0c00d 	mov	ip, sp
         55ef8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55efc:	e24cb004 	sub	fp, ip, #4	; 0x4
         55f00:	eb6ec946 	bl	1c08420 <TCardSocket::$VccVoltageSpec(void)>
         55f04:	e3100002 	tst	r0, #2	; 0x2
         55f08:	13a00078 	movne	r0, #120	; 0x78
         55f0c:	1a000004 	bne	55f24 <TCardSocket::VccMaxVoltage(void)+0x30>
         55f10:	e3100001 	tst	r0, #1	; 0x1
         55f14:	13a00032 	movne	r0, #50	; 0x32
         55f18:	1a000001 	bne	55f24 <TCardSocket::VccMaxVoltage(void)+0x30>
         55f1c:	e2100004 	ands	r0, r0, #4	; 0x4
         55f20:	13a00021 	movne	r0, #33	; 0x21
         55f24:	e3a0ce6a 	mov	ip, #1696	; 0x6a0
         55f28:	e28cc906 	add	ip, ip, #98304	; 0x18000
         55f2c:	e000009c 	mul	r0, ip, r0
         55f30:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::VccMinVoltage(void)
 * Address: 00055f34
 */
TMicroVolt	TCardSocket::VccMinVoltage(void);				// Vcc min voltage supply (use VccVoltageSpec() in 2.0) {
    /*
         55f34:	e1a0c00d 	mov	ip, sp
         55f38:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         55f40:	eb6ec936 	bl	1c08420 <TCardSocket::$VccVoltageSpec(void)>
         55f44:	e3100004 	tst	r0, #4	; 0x4
         55f48:	13a00021 	movne	r0, #33	; 0x21
         55f4c:	1a000004 	bne	55f64 <TCardSocket::VccMinVoltage(void)+0x30>
         55f50:	e3100001 	tst	r0, #1	; 0x1
         55f54:	13a00032 	movne	r0, #50	; 0x32
         55f58:	1a000001 	bne	55f64 <TCardSocket::VccMinVoltage(void)+0x30>
         55f5c:	e2100002 	ands	r0, r0, #2	; 0x2
         55f60:	13a00078 	movne	r0, #120	; 0x78
         55f64:	e3a0ce6a 	mov	ip, #1696	; 0x6a0
         55f68:	e28cc906 	add	ip, ip, #98304	; 0x18000
         55f6c:	e000009c 	mul	r0, ip, r0
         55f70:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::VppMaxVoltage(void)
 * Address: 00055f74
 */
TMicroVolt	TCardSocket::VppMaxVoltage(void);				// Vpp max voltage supply (use VppVoltageSpec() in 2.0) {
    /*
         55f74:	e1a0c00d 	mov	ip, sp
         55f78:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55f7c:	e24cb004 	sub	fp, ip, #4	; 0x4
         55f80:	eb6ec92a 	bl	1c08430 <TCardSocket::$VppVoltageSpec(void)>
         55f84:	e3100002 	tst	r0, #2	; 0x2
         55f88:	13a00078 	movne	r0, #120	; 0x78
         55f8c:	1a000004 	bne	55fa4 <TCardSocket::VppMaxVoltage(void)+0x30>
         55f90:	e3100001 	tst	r0, #1	; 0x1
         55f94:	13a00032 	movne	r0, #50	; 0x32
         55f98:	1a000001 	bne	55fa4 <TCardSocket::VppMaxVoltage(void)+0x30>
         55f9c:	e2100004 	ands	r0, r0, #4	; 0x4
         55fa0:	13a00021 	movne	r0, #33	; 0x21
         55fa4:	e3a0ce6a 	mov	ip, #1696	; 0x6a0
         55fa8:	e28cc906 	add	ip, ip, #98304	; 0x18000
         55fac:	e000009c 	mul	r0, ip, r0
         55fb0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::VppMinVoltage(void)
 * Address: 00055fb4
 */
TMicroVolt	TCardSocket::VppMinVoltage(void);				// Vpp min voltage supply (use VppVoltageSpec() in 2.0) {
    /*
         55fb4:	e1a0c00d 	mov	ip, sp
         55fb8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         55fbc:	e24cb004 	sub	fp, ip, #4	; 0x4
         55fc0:	eb6ec91a 	bl	1c08430 <TCardSocket::$VppVoltageSpec(void)>
         55fc4:	e3100004 	tst	r0, #4	; 0x4
         55fc8:	13a00021 	movne	r0, #33	; 0x21
         55fcc:	1a000004 	bne	55fe4 <TCardSocket::VppMinVoltage(void)+0x30>
         55fd0:	e3100001 	tst	r0, #1	; 0x1
         55fd4:	13a00032 	movne	r0, #50	; 0x32
         55fd8:	1a000001 	bne	55fe4 <TCardSocket::VppMinVoltage(void)+0x30>
         55fdc:	e2100002 	ands	r0, r0, #2	; 0x2
         55fe0:	13a00078 	movne	r0, #120	; 0x78
         55fe4:	e3a0ce6a 	mov	ip, #1696	; 0x6a0
         55fe8:	e28cc906 	add	ip, ip, #98304	; 0x18000
         55fec:	e000009c 	mul	r0, ip, r0
         55ff0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::CreateSocketPhys(TUPhys *, unsigned long, unsigned long, unsigned char)
 * Address: 00055ff4
 */
NewtonErr	TCardSocket::CreateSocketPhys(TUPhys* phys, ULong cardOffset, ULong size, Boolean readOnly=false);	// Create socket physical resource {
    /*
         55ff4:	e1a0c00d 	mov	ip, sp
         55ff8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         55ffc:	e24cb004 	sub	fp, ip, #4	; 0x4
         56000:	e1a0c003 	mov	ip, r3
         56004:	e59b3004 	ldr	r3, [fp, #4]	; TCardSocket
         56008:	e203e0ff 	and	lr, r3, #255	; 0xff
         5600c:	e3a03000 	mov	r3, #0	; 0x0
         56010:	e92d0008 	stmdb	sp!, {r3}
         56014:	e5b0300c 	ldr	r3, [r0, #12]!	; TxBEmptyIntHandler
         56018:	e59f001c 	ldr	r0, [pc, #1c]	; 5603c <TCardSocket::CreateSocketPhys(TUPhys *, unsigned long, unsigned long, unsigned char)+0x48>	; fField1
         5601c:	e7900103 	ldr	r0, [r0, r3, lsl #2]	; fField2
         56020:	e0804002 	add	r4, r0, r2
         56024:	e1a0300e 	mov	r3, lr
         56028:	e1a0200c 	mov	r2, ip
         5602c:	e1a00001 	mov	r0, r1
         56030:	e1a01004 	mov	r1, r4
         56034:	eb6dfea0 	bl	1bd5abc <TUPhys::$Init(unsigned long, unsigned long, unsigned char, unsigned char)>
         56038:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         5603c:	0c101178 	ldfeqs	f1, [r0], -#480
    */
}

/**
 * Symbol: TCardSocket::Version(void)
 * Address: 00056040
 */
ULong		TCardSocket::Version(void);						// TCardSocket version {
    /*
         56040:	e3a00c02 	mov	r0, #512	; 0x200
         56044:	e2800802 	add	r0, r0, #131072	; 0x20000
         56048:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::VccVoltageSpec(void)
 * Address: 0005604c
 */
ULong		TCardSocket::VccVoltageSpec(void);				// Vcc power specs (return kPCMCIAVoltageSpecs) {
    /*
         5604c:	e1a0c00d 	mov	ip, sp
         56050:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         56054:	e24cb004 	sub	fp, ip, #4	; 0x4
         56058:	e24dd004 	sub	sp, sp, #4	; 0x4
         5605c:	eb6edd98 	bl	1c0d6c4 <$GetPlatformDriver(void)>
         56060:	e1a0200d 	mov	r2, sp
         56064:	e3a01000 	mov	r1, #0	; 0x0
         56068:	eb0cc79e 	bl	387ee8 <TPlatformDriver::GetPCMCIAPowerSpec(unsigned long, unsigned long *)>
         5606c:	e49d0004 	ldr	r0, [sp], #4	; TCardSocket
         56070:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::VppVoltageSpec(void)
 * Address: 00056074
 */
ULong		TCardSocket::VppVoltageSpec(void);				// Vpp power specs (return kPCMCIAVoltageSpecs) {
    /*
         56074:	e1a0c00d 	mov	ip, sp
         56078:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         5607c:	e24cb004 	sub	fp, ip, #4	; 0x4
         56080:	e24dd004 	sub	sp, sp, #4	; 0x4
         56084:	eb6edd8e 	bl	1c0d6c4 <$GetPlatformDriver(void)>
         56088:	e1a0200d 	mov	r2, sp
         5608c:	e3a01001 	mov	r1, #1	; 0x1
         56090:	eb0cc794 	bl	387ee8 <TPlatformDriver::GetPCMCIAPowerSpec(unsigned long, unsigned long *)>
         56094:	e49d0004 	ldr	r0, [sp], #4	; TCardSocket
         56098:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::SelectVoltageLevel(TSocketPowerLevels)
 * Address: 0005609c
 */
NewtonErr	TCardSocket::SelectVoltageLevel(TSocketPowerLevels powerLevel) {
    /*
         5609c:	e1a0c00d 	mov	ip, sp
         560a0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         560a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         560a8:	e1a04000 	mov	r4, r0
         560ac:	e3510011 	cmp	r1, #17	; 0x11
         560b0:	0a00000d 	beq	560ec <TCardSocket::SelectVoltageLevel(TSocketPowerLevels)+0x50>
         560b4:	ca000007 	bgt	560d8 <TCardSocket::SelectVoltageLevel(TSocketPowerLevels)+0x3c>
         560b8:	e3310001 	teq	r1, #1	; 0x1
         560bc:	03a06001 	moveq	r6, #1	; 0x1
         560c0:	0a000002 	beq	560d0 <TCardSocket::SelectVoltageLevel(TSocketPowerLevels)+0x34>
         560c4:	e3310003 	teq	r1, #3	; 0x3
         560c8:	1a000015 	bne	56124 <TCardSocket::SelectVoltageLevel(TSocketPowerLevels)+0x88>
         560cc:	e3a06002 	mov	r6, #2	; 0x2
         560d0:	e3a05003 	mov	r5, #3	; 0x3
         560d4:	ea00000a 	b	56104 <TCardSocket::SelectVoltageLevel(TSocketPowerLevels)+0x68>
         560d8:	e3310012 	teq	r1, #18	; 0x12
         560dc:	0a000004 	beq	560f4 <TCardSocket::SelectVoltageLevel(TSocketPowerLevels)+0x58>
         560e0:	e3310013 	teq	r1, #19	; 0x13
         560e4:	1a00000e 	bne	56124 <TCardSocket::SelectVoltageLevel(TSocketPowerLevels)+0x88>
         560e8:	ea000003 	b	560fc <TCardSocket::SelectVoltageLevel(TSocketPowerLevels)+0x60>
         560ec:	e3310012 	teq	r1, #18	; 0x12
         560f0:	1a000001 	bne	560fc <TCardSocket::SelectVoltageLevel(TSocketPowerLevels)+0x60>
         560f4:	e3a06004 	mov	r6, #4	; 0x4
         560f8:	ea000000 	b	56100 <TCardSocket::SelectVoltageLevel(TSocketPowerLevels)+0x64>
         560fc:	e3a06000 	mov	r6, #0	; 0x0
         56100:	e3a05004 	mov	r5, #4	; 0x4
         56104:	eb0cf26d 	bl	392ac0 <EnterAtomic>
         56108:	e5b40080 	ldr	r0, [r4, #128]!	; fField128
         5610c:	e2800b0b 	add	r0, r0, #11264	; 0x2c00
         56110:	e5901000 	ldr	r1, [r0]
         56114:	e1c11005 	bic	r1, r1, r5
         56118:	e1811006 	orr	r1, r1, r6
         5611c:	e5801000 	str	r1, [r0]
         56120:	eb0cf27d 	bl	392b1c <ExitAtomic>
         56124:	e3a00000 	mov	r0, #0	; 0x0
         56128:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCardSocket::InterruptState(TSocketInt)
 * Address: 000a1650
 */
TCardSocket::InterruptState(TSocketInt) {
    /*
         a1650:	e3e00000 	mvn	r0, #0	; 0x0
         a1654:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCardSocket::RequestPower(TSocketPowerLevels, unsigned long)
 * Address: 000a1658
 */
TCardSocket::RequestPower(TSocketPowerLevels, unsigned long) {
    /*
         a1658:	e3a00000 	mov	r0, #0	; 0x0
         a165c:	e1a0f00e 	mov	pc, lr
    */
}

