#include "include/TCardProcessor.h"

/**
 * Symbol: TCardProcessor::__dt(void)
 * Address: 00051158
 */
TCardProcessor::~TCardProcessor(void) {
    /*
         51158:	e1a0c00d 	mov	ip, sp
         5115c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         51160:	e24cb004 	sub	fp, ip, #4	; 0x4
         51164:	e1a04000 	mov	r4, r0
         51168:	e1a05001 	mov	r5, r1
         5116c:	e59f0038 	ldr	r0, [pc, #38]	; 511ac <TCardProcessor::__dt(void)+0x54>
         51170:	e5840000 	str	r0, [r4]
         51174:	e2840078 	add	r0, r4, #120	; 0x78
         51178:	e3a01000 	mov	r1, #0	; 0x0
         5117c:	eb6df568 	bl	1bce724 <TUObject::$__dt(void)>
         51180:	e2840070 	add	r0, r4, #112	; 0x70
         51184:	e3a01000 	mov	r1, #0	; 0x0
         51188:	eb6df565 	bl	1bce724 <TUObject::$__dt(void)>
         5118c:	e1a00004 	mov	r0, r4
         51190:	e3a01000 	mov	r1, #0	; 0x0
         51194:	eb6e503f 	bl	1be5298 <TAppWorld::$__dt(void)>
         51198:	e3150001 	tst	r5, #1	; 0x1
         5119c:	11a00004 	movne	r0, r4
         511a0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         511a4:	1a6df14d 	bne	1bcd6e0 <$__dl(void *)>
         511a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         511ac:	0001d440 	andeq	sp, r1, r0, asr #8
    */
}

/**
 * Symbol: TCardProcessor::MainConstructor(void)
 * Address: 000511b0
 */
TCardProcessor::MainConstructor(void) {
    /*
         511b0:	e1a0c00d 	mov	ip, sp
         511b4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         511b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         511bc:	e1a04000 	mov	r4, r0
         511c0:	eb6d714d 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
         511c4:	e1b05000 	movs	r5, r0
         511c8:	1a00002a 	bne	51278 <TCardProcessor::MainConstructor(void)+0xc8>
         511cc:	e59f00ac 	ldr	r0, [pc, #ac]	; 51280 <TCardProcessor::MainConstructor(void)+0xd0>
         511d0:	e5900000 	ldr	r0, [r0]
         511d4:	e5301014 	ldr	r1, [r0, -#20]!
         511d8:	e59f00a4 	ldr	r0, [pc, #a4]	; 51284 <TCardProcessor::MainConstructor(void)+0xd4>
         511dc:	e5a01008 	str	r1, [r0, #8]!
         511e0:	e3a00000 	mov	r0, #0	; 0x0
         511e4:	eb6ba6d6 	bl	1b3ad44 <TCardProcessorEventHandler::$__ct(void)>
         511e8:	e5840080 	str	r0, [r4, #128]	; fField128
         511ec:	e3300000 	teq	r0, #0	; 0x0
         511f0:	03a050e9 	moveq	r5, #233	; 0xe9
         511f4:	02455b0a 	subeq	r5, r5, #10240	; 0x2800
         511f8:	0a00001e 	beq	51278 <TCardProcessor::MainConstructor(void)+0xc8>
         511fc:	ebfff670 	bl	4ebc4 <TCardProcessorEventHandler::Init(void)>
         51200:	e1b05000 	movs	r5, r0
         51204:	1a00001b 	bne	51278 <TCardProcessor::MainConstructor(void)+0xc8>
         51208:	e24dd018 	sub	sp, sp, #24	; 0x18
         5120c:	e28d0008 	add	r0, sp, #8	; 0x8
         51210:	eb6df11c 	bl	1bcd688 <TUNameServer::$__ct(void)>
         51214:	e3a00000 	mov	r0, #0	; 0x0
         51218:	e58d0004 	str	r0, [sp, #4]
         5121c:	e1a0300d 	mov	r3, sp
         51220:	e92d0008 	stmdb	sp!, {r3}
         51224:	e28d3008 	add	r3, sp, #8	; 0x8
         51228:	e28d000c 	add	r0, sp, #12	; 0xc
         5122c:	e28f2f15 	add	r2, pc, #84	; 0x54
         51230:	e28f1f16 	add	r1, pc, #88	; 0x58
         51234:	eb6e1648 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
         51238:	e28dd004 	add	sp, sp, #4	; 0x4
         5123c:	e1b05000 	movs	r5, r0
         51240:	1a000008 	bne	51268 <TCardProcessor::MainConstructor(void)+0xb8>
         51244:	e2846070 	add	r6, r4, #112	; 0x70
         51248:	e1a00004 	mov	r0, r4
         5124c:	eb6e5c7a 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         51250:	e5901000 	ldr	r1, [r0]
         51254:	e1a00006 	mov	r0, r6
         51258:	eb6dfd7a 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         5125c:	e2840078 	add	r0, r4, #120	; 0x78
         51260:	e59d1004 	ldr	r1, [sp, #4]
         51264:	eb6dfd77 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         51268:	e28d0008 	add	r0, sp, #8	; 0x8
         5126c:	e3a01000 	mov	r1, #0	; 0x0
         51270:	eb6df523 	bl	1bce704 <TUNameServer::$__dt(void)>
         51274:	e28dd018 	add	sp, sp, #24	; 0x18
         51278:	e1a00005 	mov	r0, r5
         5127c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         51280:	0c10105c 	ldceq	0, cr1, [r0], -#368
         51284:	0c100a7c 	ldceq	10, cr0, [r0], -#496
         51288:	5455506f 	ldrplb	r5, [r5], -#111
         5128c:	72740000 	rsbvcs	r0, r4, #0	; 0x0
         51290:	63647376 	cmnvs	r4, #-671088639	; 0xd8000001
         51294:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TCardProcessor::MainDestructor(void)
 * Address: 00051298
 */
TCardProcessor::MainDestructor(void) {
    /*
         51298:	e1a0c00d 	mov	ip, sp
         5129c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         512a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         512a4:	e1a04000 	mov	r4, r0
         512a8:	e5900080 	ldr	r0, [r0, #128]	; fField128
         512ac:	e3300000 	teq	r0, #0	; 0x0
         512b0:	0a000002 	beq	512c0 <TCardProcessor::MainDestructor(void)+0x28>
         512b4:	e3a01001 	mov	r1, #1	; 0x1
         512b8:	e1a0e00f 	mov	lr, pc
         512bc:	e590f000 	ldr	pc, [r0]
         512c0:	e1a00004 	mov	r0, r4
         512c4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         512c8:	ea6d750d 	b	1bae704 <TAppWorld::$MainDestructor(void)>
    */
}

/**
 * Symbol: TCardProcessor::TheMain(void)
 * Address: 000512cc
 */
TCardProcessor::TheMain(void) {
    /*
         512cc:	ea6d7940 	b	1baf7d4 <TAppWorld::$TheMain(void)>
    */
}

/**
 * Symbol: TCardProcessor::MakeFork(void)
 * Address: 000512d0
 */
TCardProcessor::MakeFork(void) {
    /*
         512d0:	e3a00000 	mov	r0, #0	; 0x0
         512d4:	ea6ba699 	b	1b3ad40 <TCardProcessor::$__ct(void)>
    */
}

/**
 * Symbol: TCardProcessor::ForkInit(TForkWorld *)
 * Address: 000512d8
 */
TCardProcessor::ForkInit(TForkWorld *) {
    /*
         512d8:	e1a0c00d 	mov	ip, sp
         512dc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         512e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         512e4:	e1a05000 	mov	r5, r0
         512e8:	e1a04001 	mov	r4, r1
         512ec:	eb6d70ed 	bl	1bad6a8 <TAppWorld::$ForkInit(TForkWorld *)>
         512f0:	e1b06000 	movs	r6, r0
         512f4:	1a000007 	bne	51318 <TCardProcessor::ForkInit(TForkWorld *)+0x40>
         512f8:	e2850070 	add	r0, r5, #112	; 0x70
         512fc:	e5941070 	ldr	r1, [r4, #112]
         51300:	eb6dfd50 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         51304:	e2850078 	add	r0, r5, #120	; 0x78
         51308:	e5941078 	ldr	r1, [r4, #120]	; fField120
         5130c:	eb6dfd4d 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         51310:	e5b40080 	ldr	r0, [r4, #128]!	; fField128
         51314:	e5a50080 	str	r0, [r5, #128]!	; fField128
         51318:	e1a00006 	mov	r0, r6
         5131c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)
 * Address: 0005394c
 */
TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char) {
    /*
         5394c:	e1a0c00d 	mov	ip, sp
         53950:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         53954:	e24cb004 	sub	fp, ip, #4	; 0x4
         53958:	e1a04003 	mov	r4, r3
         5395c:	e3a00000 	mov	r0, #0	; 0x0
         53960:	e52d0004 	str	r0, [sp, -#4]!
         53964:	e5936010 	ldr	r6, [r3, #16]
         53968:	e59f80a0 	ldr	r8, [pc, #a0]	; 53a10 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0xc4>
         5396c:	e5980038 	ldr	r0, [r8, #56]
         53970:	e1560000 	cmp	r6, r0
         53974:	83a000ea 	movhi	r0, #234	; 0xea
         53978:	82400b0a 	subhi	r0, r0, #10240	; 0x2800
         5397c:	858d0000 	strhi	r0, [sp]
         53980:	8a0000cf 	bhi	53cc4 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x378>
         53984:	e59f0088 	ldr	r0, [pc, #88]	; 53a14 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0xc8>
         53988:	e7907106 	ldr	r7, [r0, r6, lsl #2]	; fField2
         5398c:	e59f0084 	ldr	r0, [pc, #84]	; 53a18 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0xcc>
         53990:	e7905106 	ldr	r5, [r0, r6, lsl #2]	; fField2
         53994:	e5940008 	ldr	r0, [r4, #8]
         53998:	e35000fc 	cmp	r0, #252	; 0xfc
         5399c:	0a000069 	beq	53b48 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x1fc>
         539a0:	e3a0a0b5 	mov	sl, #181	; 0xb5
         539a4:	e24aab0a 	sub	sl, sl, #10240	; 0x2800
         539a8:	e3a09000 	mov	r9, #0	; 0x0
         539ac:	ca00001a 	bgt	53a1c <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0xd0>
         539b0:	e3300000 	teq	r0, #0	; 0x0
         539b4:	0a0000c0 	beq	53cbc <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x370>
         539b8:	e33000fa 	teq	r0, #250	; 0xfa
         539bc:	0a000039 	beq	53aa8 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x15c>
         539c0:	e33000fb 	teq	r0, #251	; 0xfb
         539c4:	1a0000bc 	bne	53cbc <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x370>
         539c8:	e5980000 	ldr	r0, [r8]
         539cc:	e5901078 	ldr	r1, [r0, #120]	; fField120
         539d0:	e3310000 	teq	r1, #0	; 0x0
         539d4:	0a0000b8 	beq	53cbc <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x370>
         539d8:	e3a03000 	mov	r3, #0	; 0x0
         539dc:	e3a02000 	mov	r2, #0	; 0x0
         539e0:	e92d000c 	stmdb	sp!, {r2, r3}
         539e4:	e1a01006 	mov	r1, r6
         539e8:	eb6b883c 	bl	1b35ae0 <TCardServer::$CheckCardStatus(unsigned long)>
         539ec:	e1a03000 	mov	r3, r0
         539f0:	e92d0008 	stmdb	sp!, {r3}
         539f4:	e5980000 	ldr	r0, [r8]
         539f8:	e2801078 	add	r1, r0, #120	; 0x78
         539fc:	e1a03006 	mov	r3, r6
         53a00:	e3a02069 	mov	r2, #105	; 0x69
         53a04:	eb6b9484 	bl	1b38c1c <TCardServer::$SendMessage(TUPort *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         53a08:	e5ad000c 	str	r0, [sp, #12]!
         53a0c:	ea0000aa 	b	53cbc <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x370>
         53a10:	0c100a7c 	ldceq	10, cr0, [r0], -#496
         53a14:	0c105fd4 	ldceq	15, cr5, [r0], -#848
         53a18:	0c105fe4 	ldceq	15, cr5, [r0], -#912
         53a1c:	e33000fd 	teq	r0, #253	; 0xfd
         53a20:	0a000072 	beq	53bf0 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x2a4>
         53a24:	e33000fe 	teq	r0, #254	; 0xfe
         53a28:	133000ff 	teqne	r0, #255	; 0xff
         53a2c:	1a0000a2 	bne	53cbc <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x370>
         53a30:	e1a00007 	mov	r0, r7
         53a34:	eb6e2500 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         53a38:	e3a01000 	mov	r1, #0	; 0x0
         53a3c:	eb6af7aa 	bl	1b118ec <$SetCardFaultState__12TCardDomainsSFUl16TCardFaultStates>
         53a40:	eb6af7a2 	bl	1b118d0 <$ReleaseBlockedTask__12TCardDomainsSFv>
         53a44:	e58d0000 	str	r0, [sp]
         53a48:	e595100c 	ldr	r1, [r5, #12]
         53a4c:	e1a03005 	mov	r3, r5
         53a50:	e1a02007 	mov	r2, r7
         53a54:	e5980000 	ldr	r0, [r8]
         53a58:	eb6b8c39 	bl	1b36b44 <TCardServer::$DeactivateCardHandler(TCardHandler *, TCardSocket *, TCardSocketState *)>
         53a5c:	e58d0000 	str	r0, [sp]
         53a60:	e5940008 	ldr	r0, [r4, #8]
         53a64:	e33000fe 	teq	r0, #254	; 0xfe
         53a68:	1a000093 	bne	53cbc <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x370>
         53a6c:	e1a01007 	mov	r1, r7
         53a70:	e5980000 	ldr	r0, [r8]
         53a74:	eb6b9050 	bl	1b37bbc <TCardServer::$InitializePCMCIABus(TCardSocket *)>
         53a78:	e595035c 	ldr	r0, [r5, #860]
         53a7c:	e3300000 	teq	r0, #0	; 0x0
         53a80:	13a01001 	movne	r1, #1	; 0x1
         53a84:	1b6de717 	blne	1bcd6e8 <TCardPCMCIA::$__dt(void)>
         53a88:	e3a00000 	mov	r0, #0	; 0x0
         53a8c:	e585935c 	str	r9, [r5, #860]
         53a90:	e0851100 	add	r1, r5, r0, lsl #2
         53a94:	e2800001 	add	r0, r0, #1	; 0x1
         53a98:	e3500004 	cmp	r0, #4	; 0x4
         53a9c:	e5a191fc 	str	r9, [r1, #508]!
         53aa0:	3afffffa 	bcc	53a90 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x144>
         53aa4:	ea000084 	b	53cbc <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x370>
         53aa8:	e1a00006 	mov	r0, r6
         53aac:	e3a01000 	mov	r1, #0	; 0x0
         53ab0:	eb6e2908 	bl	1bdded8 <$VccOn(int, unsigned char)>
         53ab4:	e52d906c 	str	r9, [sp, -#108]!
         53ab8:	e28d0008 	add	r0, sp, #8	; 0x8
         53abc:	eb6d7bac 	bl	1bb2974 <$setjmp>
         53ac0:	e3300000 	teq	r0, #0	; 0x0
         53ac4:	1a00000f 	bne	53b08 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x1bc>
         53ac8:	e1a0000d 	mov	r0, sp
         53acc:	eb6e316a 	bl	1be007c <$AddExceptionHandler>
         53ad0:	e1a01007 	mov	r1, r7
         53ad4:	e595000c 	ldr	r0, [r5, #12]
         53ad8:	e5952004 	ldr	r2, [r5, #4]
         53adc:	eb0cca45 	bl	3863f8 <TCardHandler::FormatCIS(TCardSocket *, TCardPCMCIA *)>
         53ae0:	e58d006c 	str	r0, [sp, #108]
         53ae4:	e3300000 	teq	r0, #0	; 0x0
         53ae8:	1a00000e 	bne	53b28 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x1dc>
         53aec:	e1a02007 	mov	r2, r7
         53af0:	e5b51004 	ldr	r1, [r5, #4]!
         53af4:	e59f0008 	ldr	r0, [pc, #8]	; 53b04 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x1b8>
         53af8:	eb6ea8f0 	bl	1bfdec0 <TPCMCIA20Parser::$ParsePCCardCIS(TCardPCMCIA *, TCardSocket *)>
         53afc:	e58d006c 	str	r0, [sp, #108]
         53b00:	ea000008 	b	53b28 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x1dc>
         53b04:	0c100a88 	ldceq	10, cr0, [r0], -#544
         53b08:	e59d0060 	ldr	r0, [sp, #96]
         53b0c:	e28f1f0c 	add	r1, pc, #48	; 0x30
         53b10:	eb6e3d9f 	bl	1be3194 <$Subexception>
         53b14:	e3300000 	teq	r0, #0	; 0x0
         53b18:	158da06c 	strne	sl, [sp, #108]
         53b1c:	1a000001 	bne	53b28 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x1dc>
         53b20:	e1a0000d 	mov	r0, sp
         53b24:	eb6e398a 	bl	1be2154 <$NextHandler>
         53b28:	e1a0000d 	mov	r0, sp
         53b2c:	eb6e3561 	bl	1be10b8 <$ExitHandler>
         53b30:	e5bd006c 	ldr	r0, [sp, #108]!
         53b34:	e3300000 	teq	r0, #0	; 0x0
         53b38:	124dd06c 	subne	sp, sp, #108	; 0x6c
         53b3c:	1afffff9 	bne	53b28 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x1dc>
         53b40:	ea000027 	b	53be4 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x298>
         53b44:	00000000 	andeq	r0, r0, r0
         53b48:	e1a00006 	mov	r0, r6
         53b4c:	e3a01000 	mov	r1, #0	; 0x0
         53b50:	eb6e28e0 	bl	1bdded8 <$VccOn(int, unsigned char)>
         53b54:	e595000c 	ldr	r0, [r5, #12]
         53b58:	e3300000 	teq	r0, #0	; 0x0
         53b5c:	0a00001a 	beq	53bcc <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x280>
         53b60:	e595130c 	ldr	r1, [r5, #780]
         53b64:	e3310002 	teq	r1, #2	; 0x2
         53b68:	0a000003 	beq	53b7c <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x230>
         53b6c:	e3300000 	teq	r0, #0	; 0x0
         53b70:	0a000015 	beq	53bcc <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x280>
         53b74:	e3310000 	teq	r1, #0	; 0x0
         53b78:	1a000013 	bne	53bcc <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x280>
         53b7c:	e24dd010 	sub	sp, sp, #16	; 0x10
         53b80:	e1a0000d 	mov	r0, sp
         53b84:	e59f103c 	ldr	r1, [pc, #3c]	; 53bc8 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x27c>
         53b88:	eb6e28c0 	bl	1bdde90 <$TimeFromNow>
         53b8c:	e28d0008 	add	r0, sp, #8	; 0x8
         53b90:	e89d5000 	ldmia	sp, {ip, lr}
         53b94:	e8805000 	stmia	r0, {ip, lr}
         53b98:	e28d3008 	add	r3, sp, #8	; 0x8
         53b9c:	e3a02000 	mov	r2, #0	; 0x0
         53ba0:	e3a01000 	mov	r1, #0	; 0x0
         53ba4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         53ba8:	e5980000 	ldr	r0, [r8]
         53bac:	e2801080 	add	r1, r0, #128	; 0x80
         53bb0:	e1a03006 	mov	r3, r6
         53bb4:	e3a020fc 	mov	r2, #252	; 0xfc
         53bb8:	eb6b9417 	bl	1b38c1c <TCardServer::$SendMessage(TUPort *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *)>
         53bbc:	e28dd00c 	add	sp, sp, #12	; 0xc
         53bc0:	e5ad0010 	str	r0, [sp, #16]!
         53bc4:	ea000006 	b	53be4 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x298>
         53bc8:	00059fd8 	ldreqd	r9, [r5], -r8
         53bcc:	e1a03005 	mov	r3, r5
         53bd0:	e1a02007 	mov	r2, r7
         53bd4:	e1a01006 	mov	r1, r6
         53bd8:	e5980000 	ldr	r0, [r8]
         53bdc:	eb6b8bdb 	bl	1b36b50 <TCardServer::$DoCardRecognition(unsigned long, TCardSocket *, TCardSocketState *)>
         53be0:	ea000033 	b	53cb4 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x368>
         53be4:	e1a00006 	mov	r0, r6
         53be8:	eb6e28b7 	bl	1bddecc <$VccOff(int)>
         53bec:	ea000032 	b	53cbc <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x370>
         53bf0:	e5980000 	ldr	r0, [r8]
         53bf4:	e2800a01 	add	r0, r0, #4096	; 0x1000
         53bf8:	e5900a24 	ldr	r0, [r0, #2596]	; fField2596
         53bfc:	e3300000 	teq	r0, #0	; 0x0
         53c00:	1a00002d 	bne	53cbc <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x370>
         53c04:	e1a00006 	mov	r0, r6
         53c08:	e3a01000 	mov	r1, #0	; 0x0
         53c0c:	eb6e28b1 	bl	1bdded8 <$VccOn(int, unsigned char)>
         53c10:	eb0cfbaa 	bl	392ac0 <EnterAtomic>
         53c14:	e1a02005 	mov	r2, r5
         53c18:	e1a01007 	mov	r1, r7
         53c1c:	e5980000 	ldr	r0, [r8]
         53c20:	eb6b9834 	bl	1b39cf8 <TCardServer::$ResumeSocketAccess(TCardSocket *, TCardSocketState *)>
         53c24:	e58d0000 	str	r0, [sp]
         53c28:	e1a00007 	mov	r0, r7
         53c2c:	eb6e2482 	bl	1bdce3c <TCardSocket::$SocketNumber(void)>
         53c30:	e3a01000 	mov	r1, #0	; 0x0
         53c34:	eb6af72c 	bl	1b118ec <$SetCardFaultState__12TCardDomainsSFUl16TCardFaultStates>
         53c38:	eb0cfbb7 	bl	392b1c <ExitAtomic>
         53c3c:	e595000c 	ldr	r0, [r5, #12]
         53c40:	e3300000 	teq	r0, #0	; 0x0
         53c44:	0a000019 	beq	53cb0 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x364>
         53c48:	e1a00006 	mov	r0, r6
         53c4c:	eb6eeabb 	bl	1c0e740 <$RestoreCardPower(unsigned long)>
         53c50:	e52d906c 	str	r9, [sp, -#108]!
         53c54:	e28d0008 	add	r0, sp, #8	; 0x8
         53c58:	eb6d7b45 	bl	1bb2974 <$setjmp>
         53c5c:	e3300000 	teq	r0, #0	; 0x0
         53c60:	1a000007 	bne	53c84 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x338>
         53c64:	e1a0000d 	mov	r0, sp
         53c68:	eb6e3103 	bl	1be007c <$AddExceptionHandler>
         53c6c:	e1a01007 	mov	r1, r7
         53c70:	e9b5000c 	ldmib	r5!, {r2, r3}
         53c74:	e5950004 	ldr	r0, [r5, #4]
         53c78:	eb0cc9d8 	bl	3863e0 <TCardHandler::ResumeServices(TCardSocket *, TCardPCMCIA *, unsigned long)>
         53c7c:	e58d006c 	str	r0, [sp, #108]
         53c80:	ea000007 	b	53ca4 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x358>
         53c84:	e59d0060 	ldr	r0, [sp, #96]
         53c88:	e24f1f53 	sub	r1, pc, #332	; 0x14c
         53c8c:	eb6e3d40 	bl	1be3194 <$Subexception>
         53c90:	e3300000 	teq	r0, #0	; 0x0
         53c94:	158da06c 	strne	sl, [sp, #108]
         53c98:	1a000001 	bne	53ca4 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x358>
         53c9c:	e1a0000d 	mov	r0, sp
         53ca0:	eb6e392b 	bl	1be2154 <$NextHandler>
         53ca4:	e1a0000d 	mov	r0, sp
         53ca8:	eb6e3502 	bl	1be10b8 <$ExitHandler>
         53cac:	e28dd06c 	add	sp, sp, #108	; 0x6c
         53cb0:	eb6af706 	bl	1b118d0 <$ReleaseBlockedTask__12TCardDomainsSFv>
         53cb4:	e58d0000 	str	r0, [sp]
         53cb8:	eaffffc9 	b	53be4 <TCardProcessor::DoCommand(TUMsgToken *, unsigned long *, TCardMessage *, unsigned char)+0x298>
         53cbc:	e59d0000 	ldr	r0, [sp]
         53cc0:	e5a4000c 	str	r0, [r4, #12]!
         53cc4:	e49d0004 	ldr	r0, [sp], #4
         53cc8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCardProcessor::__ct(void)
 * Address: 00054ca4
 */
TCardProcessor::TCardProcessor(void) {
    /*
         54ca4:	e1a0c00d 	mov	ip, sp
         54ca8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         54cac:	e24cb004 	sub	fp, ip, #4	; 0x4
         54cb0:	e1b04000 	movs	r4, r0
         54cb4:	1a000003 	bne	54cc8 <TCardProcessor::__ct(void)+0x24>
         54cb8:	e3a00084 	mov	r0, #132	; 0x84
         54cbc:	eb6de69d 	bl	1bce738 <$__nw(unsigned int)>
         54cc0:	e1b04000 	movs	r4, r0
         54cc4:	0a00000e 	beq	54d04 <TCardProcessor::__ct(void)+0x60>
         54cc8:	e1a00004 	mov	r0, r4
         54ccc:	eb6e3d5c 	bl	1be4244 <TAppWorld::$__ct(void)>
         54cd0:	e3a05000 	mov	r5, #0	; 0x0
         54cd4:	e5c45074 	strb	r5, [r4, #116]
         54cd8:	e5845070 	str	r5, [r4, #112]
         54cdc:	e5c4507c 	strb	r5, [r4, #124]
         54ce0:	e5845078 	str	r5, [r4, #120]	; fField120
         54ce4:	e59f0020 	ldr	r0, [pc, #20]	; 54d0c <TCardProcessor::__ct(void)+0x68>
         54ce8:	e5840000 	str	r0, [r4]
         54cec:	e2840078 	add	r0, r4, #120	; 0x78
         54cf0:	e1a01005 	mov	r1, r5
         54cf4:	eb6deed3 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         54cf8:	e2840070 	add	r0, r4, #112	; 0x70
         54cfc:	e1a01005 	mov	r1, r5
         54d00:	eb6deed0 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         54d04:	e1a00004 	mov	r0, r4
         54d08:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         54d0c:	0001d440 	andeq	sp, r1, r0, asr #8
    */
}

