#include "include/TTransactionManager.h"

/**
 * Symbol: TTransactionManager::__ct(void)
 * Address: 00027f2c
 */
TTransactionManager::TTransactionManager(void) {
    /*
         27f2c:	e1a0c00d 	mov	ip, sp
         27f30:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         27f34:	e24cb004 	sub	fp, ip, #4	; 0x4
         27f38:	e3300000 	teq	r0, #0	; 0x0
         27f3c:	1a000003 	bne	27f50 <TTransactionManager::__ct(void)+0x24>
         27f40:	e3a00008 	mov	r0, #8	; 0x8
         27f44:	eb6e99fb 	bl	1bce738 <$__nw(unsigned int)>
         27f48:	e3300000 	teq	r0, #0	; 0x0
         27f4c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         27f50:	e59f100c 	ldr	r1, [pc, #c]	; 27f64 <TTransactionManager::__ct(void)+0x38>
         27f54:	e5801000 	str	r1, [r0]
         27f58:	e3a01000 	mov	r1, #0	; 0x0
         27f5c:	e5801004 	str	r1, [r0, #4]	; fField4
         27f60:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         27f64:	0001ef48 	andeq	lr, r1, r8, asr #30
    */
}

/**
 * Symbol: TTransactionManager::__dt(void)
 * Address: 00027f68
 */
TTransactionManager::~TTransactionManager(void) {
    /*
         27f68:	e59f200c 	ldr	r2, [pc, #c]	; 27f7c <TTransactionManager::__dt(void)+0x14>
         27f6c:	e3110001 	tst	r1, #1	; 0x1
         27f70:	e5802000 	str	r2, [r0]
         27f74:	1a6e95d9 	bne	1bcd6e0 <$__dl(void *)>
         27f78:	e1a0f00e 	mov	pc, lr
         27f7c:	0001ef48 	andeq	lr, r1, r8, asr #30
    */
}

/**
 * Symbol: TTransactionManager::CreateNewTransaction(TCompletion &, TSendRequestMessage *)
 * Address: 00027f80
 */
TTransactionManager::CreateNewTransaction(TCompletion &, TSendRequestMessage *) {
    /*
         27f80:	e1a0c00d 	mov	ip, sp
         27f84:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         27f88:	e24cb004 	sub	fp, ip, #4	; 0x4
         27f8c:	e1a04000 	mov	r4, r0
         27f90:	e1a06001 	mov	r6, r1
         27f94:	e1a05002 	mov	r5, r2
         27f98:	e3a00000 	mov	r0, #0	; 0x0
         27f9c:	eb692644 	bl	1a718b4 <TTransaction::$__ct(void)>
         27fa0:	e1b07000 	movs	r7, r0
         27fa4:	03a00000 	moveq	r0, #0	; 0x0
         27fa8:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         27fac:	e5d5002c 	ldrb	r0, [r5, #44]
         27fb0:	e3500000 	cmp	r0, #0	; 0x0
         27fb4:	ca000002 	bgt	27fc4 <TTransactionManager::CreateNewTransaction(TCompletion &, TSendRequestMessage *)+0x44>
         27fb8:	e5950030 	ldr	r0, [r5, #48]
         27fbc:	e3500000 	cmp	r0, #0	; 0x0
         27fc0:	9a000003 	bls	27fd4 <TTransactionManager::CreateNewTransaction(TCompletion &, TSendRequestMessage *)+0x54>
         27fc4:	e5940004 	ldr	r0, [r4, #4]	; fField4
         27fc8:	e3300000 	teq	r0, #0	; 0x0
         27fcc:	15870130 	strne	r0, [r7, #304]	; fField304
         27fd0:	e5847004 	str	r7, [r4, #4]	; fField4
         27fd4:	e1a00004 	mov	r0, r4
         27fd8:	eb694740 	bl	1a79ce0 <TTransactionManager::$GenerateTID(void)>
         27fdc:	e1a02000 	mov	r2, r0
         27fe0:	e1a03005 	mov	r3, r5
         27fe4:	e1a01006 	mov	r1, r6
         27fe8:	e1a00007 	mov	r0, r7
         27fec:	eb694f6e 	bl	1a7bdac <TTransaction::$Init(TCompletion &, unsigned short, TSendRequestMessage *)>
         27ff0:	e1a00007 	mov	r0, r7
         27ff4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTransactionManager::Remove(unsigned short)
 * Address: 00027ff8
 */
TTransactionManager::Remove(unsigned short) {
    /*
         27ff8:	e1a0c00d 	mov	ip, sp
         27ffc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         28000:	e24cb004 	sub	fp, ip, #4	; 0x4
         28004:	e1a0c801 	mov	ip, r1, lsl #16
         28008:	e1a0c82c 	mov	ip, ip, lsr #16
         2800c:	e3a03000 	mov	r3, #0	; 0x0
         28010:	e3a02000 	mov	r2, #0	; 0x0
         28014:	e5901004 	ldr	r1, [r0, #4]	; fField4
         28018:	e3310000 	teq	r1, #0	; 0x0
         2801c:	0a000014 	beq	28074 <TTransactionManager::Remove(unsigned short)+0x7c>
         28020:	e591e0dc 	ldr	lr, [r1, #220]	; fField220
         28024:	e1a0e80e 	mov	lr, lr, lsl #16
         28028:	e1a0e82e 	mov	lr, lr, lsr #16
         2802c:	e13e000c 	teq	lr, ip
         28030:	1a00000b 	bne	28064 <TTransactionManager::Remove(unsigned short)+0x6c>
         28034:	e3320000 	teq	r2, #0	; 0x0
         28038:	15910130 	ldrne	r0, [r1, #304]	; fField304
         2803c:	15a20130 	strne	r0, [r2, #304]!	; fField304
         28040:	05912130 	ldreq	r2, [r1, #304]	; fField304
         28044:	05a02004 	streq	r2, [r0, #4]!	; fField4
         28048:	e1b00001 	movs	r0, r1
         2804c:	0a000002 	beq	2805c <TTransactionManager::Remove(unsigned short)+0x64>
         28050:	e3a01001 	mov	r1, #1	; 0x1
         28054:	e1a0e00f 	mov	lr, pc
         28058:	e590f000 	ldr	pc, [r0]
         2805c:	e3a03001 	mov	r3, #1	; 0x1
         28060:	ea000003 	b	28074 <TTransactionManager::Remove(unsigned short)+0x7c>
         28064:	e1a02001 	mov	r2, r1
         28068:	e5911130 	ldr	r1, [r1, #304]	; fField304
         2806c:	e3310000 	teq	r1, #0	; 0x0
         28070:	1affffea 	bne	28020 <TTransactionManager::Remove(unsigned short)+0x28>
         28074:	e1a00003 	mov	r0, r3
         28078:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TTransactionManager::GetTransaction(unsigned short)
 * Address: 0002807c
 */
TTransactionManager::GetTransaction(unsigned short) {
    /*
         2807c:	e1a01801 	mov	r1, r1, lsl #16
         28080:	e1a01821 	mov	r1, r1, lsr #16
         28084:	e5900004 	ldr	r0, [r0, #4]	; fField4
         28088:	e3300000 	teq	r0, #0	; 0x0
         2808c:	0a000007 	beq	280b0 <TTransactionManager::GetTransaction(unsigned short)+0x34>
         28090:	e59020dc 	ldr	r2, [r0, #220]	; fField220
         28094:	e1a02802 	mov	r2, r2, lsl #16
         28098:	e1a02822 	mov	r2, r2, lsr #16
         2809c:	e1320001 	teq	r2, r1
         280a0:	01a0f00e 	moveq	pc, lr
         280a4:	e5900130 	ldr	r0, [r0, #304]	; fField304
         280a8:	e3300000 	teq	r0, #0	; 0x0
         280ac:	1afffff7 	bne	28090 <TTransactionManager::GetTransaction(unsigned short)+0x14>
         280b0:	e3a00000 	mov	r0, #0	; 0x0
         280b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTransactionManager::GetTransactionByCompletionId(unsigned long)
 * Address: 000280b8
 */
TTransactionManager::GetTransactionByCompletionId(unsigned long) {
    /*
         280b8:	e5900004 	ldr	r0, [r0, #4]	; fField4
         280bc:	e3300000 	teq	r0, #0	; 0x0
         280c0:	0a000005 	beq	280dc <TTransactionManager::GetTransactionByCompletionId(unsigned long)+0x24>
         280c4:	e59020f8 	ldr	r2, [r0, #248]	; fField248
         280c8:	e1320001 	teq	r2, r1
         280cc:	01a0f00e 	moveq	pc, lr
         280d0:	e5900130 	ldr	r0, [r0, #304]	; fField304
         280d4:	e3300000 	teq	r0, #0	; 0x0
         280d8:	1afffff9 	bne	280c4 <TTransactionManager::GetTransactionByCompletionId(unsigned long)+0xc>
         280dc:	e3a00000 	mov	r0, #0	; 0x0
         280e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTransactionManager::GenerateTID(void)
 * Address: 000280e4
 */
TTransactionManager::GenerateTID(void) {
    /*
         280e4:	e92d4000 	stmdb	sp!, {lr}
         280e8:	e1a01000 	mov	r1, r0
         280ec:	e59fc05c 	ldr	ip, [pc, #5c]	; 28150 <TTransactionManager::GenerateTID(void)+0x6c>
         280f0:	e59c0000 	ldr	r0, [ip]
         280f4:	e1a00820 	mov	r0, r0, lsr #16
         280f8:	e5b13004 	ldr	r3, [r1, #4]!	; fField4
         280fc:	e3a02000 	mov	r2, #0	; 0x0
         28100:	e2800001 	add	r0, r0, #1	; 0x1
         28104:	e1a00800 	mov	r0, r0, lsl #16
         28108:	e1a00820 	mov	r0, r0, lsr #16
         2810c:	e1b01003 	movs	r1, r3
         28110:	0a000008 	beq	28138 <TTransactionManager::GenerateTID(void)+0x54>
         28114:	e591e0dc 	ldr	lr, [r1, #220]	; fField220
         28118:	e1a0e80e 	mov	lr, lr, lsl #16
         2811c:	e1a0e82e 	mov	lr, lr, lsr #16
         28120:	e13e0000 	teq	lr, r0
         28124:	03a02001 	moveq	r2, #1	; 0x1
         28128:	0a000002 	beq	28138 <TTransactionManager::GenerateTID(void)+0x54>
         2812c:	e5911130 	ldr	r1, [r1, #304]	; fField304
         28130:	e3310000 	teq	r1, #0	; 0x0
         28134:	1afffff6 	bne	28114 <TTransactionManager::GenerateTID(void)+0x30>
         28138:	e3320000 	teq	r2, #0	; 0x0
         2813c:	1affffee 	bne	280fc <TTransactionManager::GenerateTID(void)+0x18>
         28140:	e5cc0001 	strb	r0, [ip, #1]
         28144:	e1a01440 	mov	r1, r0, asr #8
         28148:	e5cc1000 	strb	r1, [ip]
         2814c:	e8bd8000 	ldmia	sp!, {pc}
         28150:	0c10080c 	ldceq	8, cr0, [r0], -#48
    */
}

/**
 * Symbol: TTransactionManager::Validate(TSendRequestMessage *)
 * Address: 0002817c
 */
TTransactionManager::Validate(TSendRequestMessage *) {
    /*
         2817c:	e3a00000 	mov	r0, #0	; 0x0
         28180:	e5d1102c 	ldrb	r1, [r1, #44]
         28184:	e3510008 	cmp	r1, #8	; 0x8
         28188:	c3a00fb1 	movgt	r0, #708	; 0x2c4
         2818c:	c2400b0d 	subgt	r0, r0, #13312	; 0x3400
         28190:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTransactionManager::SendRequest(TTransaction *, TATP *, unsigned char)
 * Address: 00028194
 */
TTransactionManager::SendRequest(TTransaction *, TATP *, unsigned char) {
    /*
         28194:	e1a0c00d 	mov	ip, sp
         28198:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         2819c:	e24cb004 	sub	fp, ip, #4	; 0x4
         281a0:	e1a04001 	mov	r4, r1
         281a4:	e1a05002 	mov	r5, r2
         281a8:	e20370ff 	and	r7, r3, #255	; 0xff
         281ac:	e24dd054 	sub	sp, sp, #84	; 0x54
         281b0:	e28d0048 	add	r0, sp, #72	; 0x48
         281b4:	eb6925bc 	bl	1a718ac <TWriteChain::$__ct(void)>
         281b8:	e28d0030 	add	r0, sp, #48	; 0x30
         281bc:	eb6925c8 	bl	1a718e4 <TWriteElement::$__ct(void)>
         281c0:	e1a0000d 	mov	r0, sp
         281c4:	eb6929da 	bl	1a72934 <TSharedWriteElement::$__ct(void)>
         281c8:	e1a0300d 	mov	r3, sp
         281cc:	e28d2030 	add	r2, sp, #48	; 0x30
         281d0:	e28d1048 	add	r1, sp, #72	; 0x48
         281d4:	e1a00004 	mov	r0, r4
         281d8:	eb695737 	bl	1a7debc <TTransaction::$PrepareRequestPacket(TWriteChain *, TWriteElement *, TSharedWriteElement *)>
         281dc:	e1b06000 	movs	r6, r0
         281e0:	e3a08000 	mov	r8, #0	; 0x0
         281e4:	0a00000c 	beq	2821c <TTransactionManager::SendRequest(TTransaction *, TATP *, unsigned char)+0x88>
         281e8:	e1a0000d 	mov	r0, sp
         281ec:	e3a01000 	mov	r1, #0	; 0x0
         281f0:	e1a0e00f 	mov	lr, pc
         281f4:	e59df000 	ldr	pc, [sp]
         281f8:	e28d0030 	add	r0, sp, #48	; 0x30
         281fc:	e3a01000 	mov	r1, #0	; 0x0
         28200:	e1a0e00f 	mov	lr, pc
         28204:	e59df030 	ldr	pc, [sp, #48]
         28208:	e28d0048 	add	r0, sp, #72	; 0x48
         2820c:	eb694286 	bl	1a78c2c <TWriteChain::$Destroy(void)>
         28210:	e28dd054 	add	sp, sp, #84	; 0x54
         28214:	e1a00006 	mov	r0, r6
         28218:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         2821c:	e24dd030 	sub	sp, sp, #48	; 0x30
         28220:	e1a0000d 	mov	r0, sp
         28224:	eb6ef003 	bl	1be4238 <TAEvent::$__ct(void)>
         28228:	e59f009c 	ldr	r0, [pc, #9c]	; 282cc <TTransactionManager::SendRequest(TTransaction *, TATP *, unsigned char)+0x138>
         2822c:	e58d0000 	str	r0, [sp]
         28230:	e58d800c 	str	r8, [sp, #12]
         28234:	e58d8008 	str	r8, [sp, #8]
         28238:	e28d0014 	add	r0, sp, #20	; 0x14
         2823c:	e1a08000 	mov	r8, r0
         28240:	e3a01001 	mov	r1, #1	; 0x1
         28244:	eb6f2dd8 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         28248:	e3a00003 	mov	r0, #3	; 0x3
         2824c:	e5cd0020 	strb	r0, [sp, #32]
         28250:	e28410e0 	add	r1, r4, #224	; 0xe0
         28254:	e1a00008 	mov	r0, r8
         28258:	eb6f2dd4 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         2825c:	e28d0078 	add	r0, sp, #120	; 0x78
         28260:	e58d002c 	str	r0, [sp, #44]
         28264:	e1a0100d 	mov	r1, sp
         28268:	e1a00005 	mov	r0, r5
         2826c:	eb696383 	bl	1a81080 <TATP::$Write(TAppleTalkMessage *)>
         28270:	e59400dc 	ldr	r0, [r4, #220]	; fField220
         28274:	e1a00400 	mov	r0, r0, lsl #8
         28278:	e1b00c20 	movs	r0, r0, lsr #24
         2827c:	05940004 	ldreq	r0, [r4, #4]	; fField4
         28280:	03300000 	teqeq	r0, #0	; 0x0
         28284:	0a000011 	beq	282d0 <TTransactionManager::SendRequest(TTransaction *, TATP *, unsigned char)+0x13c>
         28288:	e1a01007 	mov	r1, r7
         2828c:	e1a00004 	mov	r0, r4
         28290:	eb695f5c 	bl	1a80008 <TTransaction::$StartTimer(unsigned char)>
         28294:	e1b06000 	movs	r6, r0
         28298:	0a00000c 	beq	282d0 <TTransactionManager::SendRequest(TTransaction *, TATP *, unsigned char)+0x13c>
         2829c:	e28d0030 	add	r0, sp, #48	; 0x30
         282a0:	e3a01000 	mov	r1, #0	; 0x0
         282a4:	e1a0e00f 	mov	lr, pc
         282a8:	e59df030 	ldr	pc, [sp, #48]
         282ac:	e28d0060 	add	r0, sp, #96	; 0x60
         282b0:	e3a01000 	mov	r1, #0	; 0x0
         282b4:	e1a0e00f 	mov	lr, pc
         282b8:	e59df060 	ldr	pc, [sp, #96]
         282bc:	e28d0078 	add	r0, sp, #120	; 0x78
         282c0:	eb694259 	bl	1a78c2c <TWriteChain::$Destroy(void)>
         282c4:	e28dd084 	add	sp, sp, #132	; 0x84
         282c8:	eaffffd1 	b	28214 <TTransactionManager::SendRequest(TTransaction *, TATP *, unsigned char)+0x80>
         282cc:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         282d0:	e28dd030 	add	sp, sp, #48	; 0x30
         282d4:	eaffffc3 	b	281e8 <TTransactionManager::SendRequest(TTransaction *, TATP *, unsigned char)+0x54>
    */
}

/**
 * Symbol: TTransactionManager::SendRelease(TTransaction *, TATP *)
 * Address: 000282d8
 */
TTransactionManager::SendRelease(TTransaction *, TATP *) {
    /*
         282d8:	e1a0c00d 	mov	ip, sp
         282dc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         282e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         282e4:	e1a04001 	mov	r4, r1
         282e8:	e1a05002 	mov	r5, r2
         282ec:	e24dd004 	sub	sp, sp, #4	; 0x4
         282f0:	e1a0000d 	mov	r0, sp
         282f4:	eb692564 	bl	1a7188c <TATPHeader::$__ct(void)>
         282f8:	e59400dc 	ldr	r0, [r4, #220]	; fField220
         282fc:	e1a00800 	mov	r0, r0, lsl #16
         28300:	e1a00820 	mov	r0, r0, lsr #16
         28304:	e59d1000 	ldr	r1, [sp]
         28308:	e3811103 	orr	r1, r1, #-1073741824	; 0xc0000000
         2830c:	e58d1000 	str	r1, [sp]
         28310:	e3c11302 	bic	r1, r1, #134217728	; 0x8000000
         28314:	e58d1000 	str	r1, [sp]
         28318:	e1a01201 	mov	r1, r1, lsl #4
         2831c:	e1a01fa1 	mov	r1, r1, lsr #31
         28320:	e59d2000 	ldr	r2, [sp]
         28324:	e3c22201 	bic	r2, r2, #268435456	; 0x10000000
         28328:	e1821e01 	orr	r1, r2, r1, lsl #28
         2832c:	e58d1000 	str	r1, [sp]
         28330:	e1a01181 	mov	r1, r1, lsl #3
         28334:	e1a01fa1 	mov	r1, r1, lsr #31
         28338:	e59d2000 	ldr	r2, [sp]
         2833c:	e3c22202 	bic	r2, r2, #536870912	; 0x20000000
         28340:	e1821e81 	orr	r1, r2, r1, lsl #29
         28344:	e58d1000 	str	r1, [sp]
         28348:	e3c11407 	bic	r1, r1, #117440512	; 0x7000000
         2834c:	e58d1000 	str	r1, [sp]
         28350:	e3c118ff 	bic	r1, r1, #16711680	; 0xff0000
         28354:	e58d1000 	str	r1, [sp]
         28358:	e1a01821 	mov	r1, r1, lsr #16
         2835c:	e1a01801 	mov	r1, r1, lsl #16
         28360:	e1a00800 	mov	r0, r0, lsl #16
         28364:	e1810820 	orr	r0, r1, r0, lsr #16
         28368:	e40d0024 	str	r0, [sp], -#36
         2836c:	e28d0018 	add	r0, sp, #24	; 0x18
         28370:	eb69254d 	bl	1a718ac <TWriteChain::$__ct(void)>
         28374:	e1a0000d 	mov	r0, sp
         28378:	eb692559 	bl	1a718e4 <TWriteElement::$__ct(void)>
         2837c:	e28d1024 	add	r1, sp, #36	; 0x24
         28380:	e1a0000d 	mov	r0, sp
         28384:	e3a03002 	mov	r3, #2	; 0x2
         28388:	e3a02004 	mov	r2, #4	; 0x4
         2838c:	eb694e8a 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
         28390:	e1a0100d 	mov	r1, sp
         28394:	e28d0018 	add	r0, sp, #24	; 0x18
         28398:	eb6931a0 	bl	1a74a20 <TWriteChain::$Add(TWriteElement *)>
         2839c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         283a0:	e3a00000 	mov	r0, #0	; 0x0
         283a4:	e58d0018 	str	r0, [sp, #24]
         283a8:	e1a0000d 	mov	r0, sp
         283ac:	eb69254c 	bl	1a718e4 <TWriteElement::$__ct(void)>
         283b0:	e28d1018 	add	r1, sp, #24	; 0x18
         283b4:	e1a0000d 	mov	r0, sp
         283b8:	e3a03002 	mov	r3, #2	; 0x2
         283bc:	e3a02004 	mov	r2, #4	; 0x4
         283c0:	eb694e7d 	bl	1a7bdbc <TWriteElement::$Init(void *, unsigned long, unsigned char)>
         283c4:	e1a0100d 	mov	r1, sp
         283c8:	e28d0034 	add	r0, sp, #52	; 0x34
         283cc:	eb693195 	bl	1a74a28 <TWriteChain::$AddToEnd(TWriteElement *)>
         283d0:	e24dd030 	sub	sp, sp, #48	; 0x30
         283d4:	e1a0000d 	mov	r0, sp
         283d8:	eb6eef96 	bl	1be4238 <TAEvent::$__ct(void)>
         283dc:	e59f007c 	ldr	r0, [pc, #7c]	; 28460 <TTransactionManager::SendRelease(TTransaction *, TATP *)+0x188>
         283e0:	e3a07000 	mov	r7, #0	; 0x0
         283e4:	e58d0000 	str	r0, [sp]
         283e8:	e58d700c 	str	r7, [sp, #12]
         283ec:	e58d7008 	str	r7, [sp, #8]
         283f0:	e28d0014 	add	r0, sp, #20	; 0x14
         283f4:	e1a06000 	mov	r6, r0
         283f8:	e3a01001 	mov	r1, #1	; 0x1
         283fc:	eb6f2d6a 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         28400:	e3a00003 	mov	r0, #3	; 0x3
         28404:	e5cd0020 	strb	r0, [sp, #32]
         28408:	e28410e0 	add	r1, r4, #224	; 0xe0
         2840c:	e1a00006 	mov	r0, r6
         28410:	eb6f2d66 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         28414:	e28d0064 	add	r0, sp, #100	; 0x64
         28418:	e58d002c 	str	r0, [sp, #44]
         2841c:	e1a0100d 	mov	r1, sp
         28420:	e1a00005 	mov	r0, r5
         28424:	eb696315 	bl	1a81080 <TATP::$Write(TAppleTalkMessage *)>
         28428:	e28dd030 	add	sp, sp, #48	; 0x30
         2842c:	e1a0000d 	mov	r0, sp
         28430:	e3a01000 	mov	r1, #0	; 0x0
         28434:	e1a0e00f 	mov	lr, pc
         28438:	e59df000 	ldr	pc, [sp]
         2843c:	e28dd01c 	add	sp, sp, #28	; 0x1c
         28440:	e1a0000d 	mov	r0, sp
         28444:	e3a01000 	mov	r1, #0	; 0x0
         28448:	e1a0e00f 	mov	lr, pc
         2844c:	e59df000 	ldr	pc, [sp]
         28450:	e28d0018 	add	r0, sp, #24	; 0x18
         28454:	eb6941f4 	bl	1a78c2c <TWriteChain::$Destroy(void)>
         28458:	e1a00007 	mov	r0, r7
         2845c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         28460:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
    */
}

/**
 * Symbol: TTransactionManager::TransactionRequest(TUMsgToken *, TSendRequestMessage *, TATP *)
 * Address: 00028464
 */
TTransactionManager::TransactionRequest(TUMsgToken *, TSendRequestMessage *, TATP *) {
    /*
         28464:	e1a0c00d 	mov	ip, sp
         28468:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         2846c:	e24cb004 	sub	fp, ip, #4	; 0x4
         28470:	e1a05000 	mov	r5, r0
         28474:	e1a07001 	mov	r7, r1
         28478:	e1a04002 	mov	r4, r2
         2847c:	e1a06003 	mov	r6, r3
         28480:	e1a01002 	mov	r1, r2
         28484:	eb695ef7 	bl	1a80068 <TTransactionManager::$Validate(TSendRequestMessage *)>
         28488:	e1b08000 	movs	r8, r0
         2848c:	1a00001f 	bne	28510 <TTransactionManager::TransactionRequest(TUMsgToken *, TSendRequestMessage *, TATP *)+0xac>
         28490:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         28494:	e1a01007 	mov	r1, r7
         28498:	e1a0000d 	mov	r0, sp
         2849c:	eb692500 	bl	1a718a4 <TCompletion::$__ct(TUMsgToken *)>
         284a0:	e1a02004 	mov	r2, r4
         284a4:	e1a0100d 	mov	r1, sp
         284a8:	e1a00005 	mov	r0, r5
         284ac:	eb6941d8 	bl	1a78c14 <TTransactionManager::$CreateNewTransaction(TCompletion &, TSendRequestMessage *)>
         284b0:	e1b07000 	movs	r7, r0
         284b4:	03a080a8 	moveq	r8, #168	; 0xa8
         284b8:	02488b07 	subeq	r8, r8, #7168	; 0x1c00
         284bc:	0a000012 	beq	2850c <TTransactionManager::TransactionRequest(TUMsgToken *, TSendRequestMessage *, TATP *)+0xa8>
         284c0:	e1a02006 	mov	r2, r6
         284c4:	e1a01007 	mov	r1, r7
         284c8:	e1a00005 	mov	r0, r5
         284cc:	e3a03000 	mov	r3, #0	; 0x0
         284d0:	eb695eaa 	bl	1a7ff80 <TTransactionManager::$SendRequest(TTransaction *, TATP *, unsigned char)>
         284d4:	e1b08000 	movs	r8, r0
         284d8:	1a00000b 	bne	2850c <TTransactionManager::TransactionRequest(TUMsgToken *, TSendRequestMessage *, TATP *)+0xa8>
         284dc:	e5d4002c 	ldrb	r0, [r4, #44]
         284e0:	e3300000 	teq	r0, #0	; 0x0
         284e4:	05b40030 	ldreq	r0, [r4, #48]!
         284e8:	03300000 	teqeq	r0, #0	; 0x0
         284ec:	1a000004 	bne	28504 <TTransactionManager::TransactionRequest(TUMsgToken *, TSendRequestMessage *, TATP *)+0xa0>
         284f0:	e1a00007 	mov	r0, r7
         284f4:	e3a01001 	mov	r1, #1	; 0x1
         284f8:	e1a0e00f 	mov	lr, pc
         284fc:	e597f000 	ldr	pc, [r7]
         28500:	ea000001 	b	2850c <TTransactionManager::TransactionRequest(TUMsgToken *, TSendRequestMessage *, TATP *)+0xa8>
         28504:	eb6ead32 	bl	1bd39d4 <$GetGlobals>
         28508:	eb6ef374 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
         2850c:	e28dd01c 	add	sp, sp, #28	; 0x1c
         28510:	e1a00008 	mov	r0, r8
         28514:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TTransactionManager::TransactionRequestAgain(TSendRequestAgainMessage *, TATP *)
 * Address: 00028518
 */
TTransactionManager::TransactionRequestAgain(TSendRequestAgainMessage *, TATP *) {
    /*
         28518:	e1a0c00d 	mov	ip, sp
         2851c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         28520:	e24cb004 	sub	fp, ip, #4	; 0x4
         28524:	e1a04000 	mov	r4, r0
         28528:	e1a06001 	mov	r6, r1
         2852c:	e1a05002 	mov	r5, r2
         28530:	e3a07000 	mov	r7, #0	; 0x0
         28534:	eb6ead26 	bl	1bd39d4 <$GetGlobals>
         28538:	eb6ef368 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
         2853c:	e5b60014 	ldr	r0, [r6, #20]!
         28540:	e1a01800 	mov	r1, r0, lsl #16
         28544:	e1a01821 	mov	r1, r1, lsr #16
         28548:	e1a00004 	mov	r0, r4
         2854c:	eb6949fb 	bl	1a7ad40 <TTransactionManager::$GetTransaction(unsigned short)>
         28550:	e1b01000 	movs	r1, r0
         28554:	0a000004 	beq	2856c <TTransactionManager::TransactionRequestAgain(TSendRequestAgainMessage *, TATP *)+0x54>
         28558:	e1a02005 	mov	r2, r5
         2855c:	e1a00004 	mov	r0, r4
         28560:	e3a03000 	mov	r3, #0	; 0x0
         28564:	eb695e85 	bl	1a7ff80 <TTransactionManager::$SendRequest(TTransaction *, TATP *, unsigned char)>
         28568:	e1a07000 	mov	r7, r0
         2856c:	e1a00007 	mov	r0, r7
         28570:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTransactionManager::HandleRequestRetryTimer(TTimerMessage *)
 * Address: 00028574
 */
TTransactionManager::HandleRequestRetryTimer(TTimerMessage *) {
    /*
         28574:	e1a0c00d 	mov	ip, sp
         28578:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         2857c:	e24cb004 	sub	fp, ip, #4	; 0x4
         28580:	e1a04000 	mov	r4, r0
         28584:	e5b1001c 	ldr	r0, [r1, #28]!
         28588:	e1a01800 	mov	r1, r0, lsl #16
         2858c:	e1a01821 	mov	r1, r1, lsr #16
         28590:	e1a00004 	mov	r0, r4
         28594:	eb6949e9 	bl	1a7ad40 <TTransactionManager::$GetTransaction(unsigned short)>
         28598:	e1b05000 	movs	r5, r0
         2859c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         285a0:	e5950004 	ldr	r0, [r5, #4]	; fField4
         285a4:	e3300000 	teq	r0, #0	; 0x0
         285a8:	e1a00005 	mov	r0, r5
         285ac:	1a00000a 	bne	285dc <TTransactionManager::HandleRequestRetryTimer(TTimerMessage *)+0x68>
         285b0:	eb695e97 	bl	1a80014 <TTransaction::$StopTimer(void)>
         285b4:	e1a00005 	mov	r0, r5
         285b8:	e3a010c1 	mov	r1, #193	; 0xc1
         285bc:	e2411c32 	sub	r1, r1, #12800	; 0x3200
         285c0:	eb693d85 	bl	1a77bdc <TTransaction::$Complete(long)>
         285c4:	e5b500dc 	ldr	r0, [r5, #220]!	; fField220
         285c8:	e1a01800 	mov	r1, r0, lsl #16
         285cc:	e1a01821 	mov	r1, r1, lsr #16
         285d0:	e1a00004 	mov	r0, r4
         285d4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         285d8:	ea695a53 	b	1a7ef2c <TTransactionManager::$Remove(unsigned short)>
         285dc:	eb69418e 	bl	1a78c1c <TTransaction::$DecrementRetries(void)>
         285e0:	e1a00005 	mov	r0, r5
         285e4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         285e8:	ea693118 	b	1a74a50 <TTransaction::$Again(void)>
    */
}

/**
 * Symbol: TTransactionManager::HandleResponse(unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *)
 * Address: 000285ec
 */
TTransactionManager::HandleResponse(unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *) {
    /*
         285ec:	e1a0c00d 	mov	ip, sp
         285f0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         285f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         285f8:	e1a04000 	mov	r4, r0
         285fc:	e1a01801 	mov	r1, r1, lsl #16
         28600:	e1a01821 	mov	r1, r1, lsr #16
         28604:	e20270ff 	and	r7, r2, #255	; 0xff
         28608:	e20320ff 	and	r2, r3, #255	; 0xff
         2860c:	e99b0401 	ldmib	fp, {r0, sl}
         28610:	e59b8010 	ldr	r8, [fp, #16]
         28614:	e59b900c 	ldr	r9, [fp, #12]
         28618:	e20000ff 	and	r0, r0, #255	; 0xff
         2861c:	e3a06000 	mov	r6, #0	; 0x0
         28620:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         28624:	e52d2004 	str	r2, [sp, -#4]!	; fField4
         28628:	e1a00004 	mov	r0, r4
         2862c:	eb6949c3 	bl	1a7ad40 <TTransactionManager::$GetTransaction(unsigned short)>
         28630:	e1b05000 	movs	r5, r0
         28634:	0a000031 	beq	28700 <TTransactionManager::HandleResponse(unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *)+0x114>
         28638:	e1a01007 	mov	r1, r7
         2863c:	e1a00005 	mov	r0, r5
         28640:	eb694599 	bl	1a79cac <TTransaction::$ExpectingThisResponse(unsigned char)>
         28644:	e3300000 	teq	r0, #0	; 0x0
         28648:	0a00002c 	beq	28700 <TTransactionManager::HandleResponse(unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *)+0x114>
         2864c:	e59d0000 	ldr	r0, [sp]
         28650:	e3300000 	teq	r0, #0	; 0x0
         28654:	11a01007 	movne	r1, r7
         28658:	11a00005 	movne	r0, r5
         2865c:	1b693d50 	blne	1a77ba4 <TTransaction::$ClearHigherBits(unsigned char)>
         28660:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         28664:	e3300000 	teq	r0, #0	; 0x0
         28668:	0a000006 	beq	28688 <TTransactionManager::HandleResponse(unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *)+0x9c>
         2866c:	e1a02008 	mov	r2, r8
         28670:	e1a01005 	mov	r1, r5
         28674:	e1a00004 	mov	r0, r4
         28678:	e3a03001 	mov	r3, #1	; 0x1
         2867c:	eb695e3f 	bl	1a7ff80 <TTransactionManager::$SendRequest(TTransaction *, TATP *, unsigned char)>
         28680:	e1b06000 	movs	r6, r0
         28684:	1a00001d 	bne	28700 <TTransactionManager::HandleResponse(unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *)+0x114>
         28688:	e1a0300a 	mov	r3, sl
         2868c:	e1a02009 	mov	r2, r9
         28690:	e1a01007 	mov	r1, r7
         28694:	e1a00005 	mov	r0, r5
         28698:	eb694159 	bl	1a78c04 <TTransaction::$CopyResponse(unsigned char, unsigned long, unsigned char *)>
         2869c:	e1b06000 	movs	r6, r0
         286a0:	059500dc 	ldreq	r0, [r5, #220]	; fField220
         286a4:	020008ff 	andeq	r0, r0, #16711680	; 0xff0000
         286a8:	03300000 	teqeq	r0, #0	; 0x0
         286ac:	1a000013 	bne	28700 <TTransactionManager::HandleResponse(unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *)+0x114>
         286b0:	e1a00005 	mov	r0, r5
         286b4:	eb695e56 	bl	1a80014 <TTransaction::$StopTimer(void)>
         286b8:	e59500dc 	ldr	r0, [r5, #220]	; fField220
         286bc:	e1a00100 	mov	r0, r0, lsl #2
         286c0:	e1b00fa0 	movs	r0, r0, lsr #31
         286c4:	0a000005 	beq	286e0 <TTransactionManager::HandleResponse(unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *)+0xf4>
         286c8:	e1a02008 	mov	r2, r8
         286cc:	e1a01005 	mov	r1, r5
         286d0:	e1a00004 	mov	r0, r4
         286d4:	eb695a28 	bl	1a7ef7c <TTransactionManager::$SendRelease(TTransaction *, TATP *)>
         286d8:	e1b06000 	movs	r6, r0
         286dc:	1a000007 	bne	28700 <TTransactionManager::HandleResponse(unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *)+0x114>
         286e0:	e1a00005 	mov	r0, r5
         286e4:	e3a01000 	mov	r1, #0	; 0x0
         286e8:	eb693d3b 	bl	1a77bdc <TTransaction::$Complete(long)>
         286ec:	e5b500dc 	ldr	r0, [r5, #220]!	; fField220
         286f0:	e1a01800 	mov	r1, r0, lsl #16
         286f4:	e1a01821 	mov	r1, r1, lsr #16
         286f8:	e1a00004 	mov	r0, r4
         286fc:	eb695a0a 	bl	1a7ef2c <TTransactionManager::$Remove(unsigned short)>
         28700:	e1a00006 	mov	r0, r6
         28704:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TTransactionManager::CancelTransaction(unsigned long)
 * Address: 00028708
 */
TTransactionManager::CancelTransaction(unsigned long) {
    /*
         28708:	e1a0c00d 	mov	ip, sp
         2870c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         28710:	e24cb004 	sub	fp, ip, #4	; 0x4
         28714:	e1a04000 	mov	r4, r0
         28718:	eb694989 	bl	1a7ad44 <TTransactionManager::$GetTransactionByCompletionId(unsigned long)>
         2871c:	e1b05000 	movs	r5, r0
         28720:	0a00000a 	beq	28750 <TTransactionManager::CancelTransaction(unsigned long)+0x48>
         28724:	e1a00005 	mov	r0, r5
         28728:	eb695e39 	bl	1a80014 <TTransaction::$StopTimer(void)>
         2872c:	e1a00005 	mov	r0, r5
         28730:	e3a0101d 	mov	r1, #29	; 0x1d
         28734:	e2411c2f 	sub	r1, r1, #12032	; 0x2f00
         28738:	eb693d27 	bl	1a77bdc <TTransaction::$Complete(long)>
         2873c:	e5b500dc 	ldr	r0, [r5, #220]!	; fField220
         28740:	e1a01800 	mov	r1, r0, lsl #16
         28744:	e1a01821 	mov	r1, r1, lsr #16
         28748:	e1a00004 	mov	r0, r4
         2874c:	eb6959f6 	bl	1a7ef2c <TTransactionManager::$Remove(unsigned short)>
         28750:	e3a00000 	mov	r0, #0	; 0x0
         28754:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

