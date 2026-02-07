#include "include/TZIPInterface.h"

/**
 * Symbol: TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)
 * Address: 00284008
 */
TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char) {
    /*
        284008:	e1a0c00d 	mov	ip, sp
        28400c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        284010:	e24cb004 	sub	fp, ip, #4	; 0x4
        284014:	e1a04000 	mov	r4, r0
        284018:	e1a08001 	mov	r8, r1
        28401c:	e202a0ff 	and	sl, r2, #255	; 0xff
        284020:	e20370ff 	and	r7, r3, #255	; 0xff
        284024:	e3a06000 	mov	r6, #0	; 0x0
        284028:	e56d600c 	strb	r6, [sp, -#12]!
        28402c:	e5c06004 	strb	r6, [r0, #4]	; fField4
        284030:	eb653e67 	bl	1bd39d4 <$GetGlobals>
        284034:	e3a01000 	mov	r1, #0	; 0x0
        284038:	eb64a59c 	bl	1bad6b0 <TForkWorld::$Fork(TForkWorld *)>
        28403c:	e1b05000 	movs	r5, r0
        284040:	1a0000d0 	bne	284388 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x380>
        284044:	e24dd008 	sub	sp, sp, #8	; 0x8
        284048:	e5cd6004 	strb	r6, [sp, #4]	; fField4
        28404c:	e58d6000 	str	r6, [sp]
        284050:	e1a0100d 	mov	r1, sp
        284054:	e59f005c 	ldr	r0, [pc, #5c]	; 2840b8 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0xb0>
        284058:	eb65be58 	bl	1bf39c0 <$OpenAppleTalkPart(unsigned long, TUPort *)>
        28405c:	e1b05000 	movs	r5, r0
        284060:	1a00000f 	bne	2840a4 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x9c>
        284064:	e5940000 	ldr	r0, [r4]
        284068:	e3300000 	teq	r0, #0	; 0x0
        28406c:	13a01001 	movne	r1, #1	; 0x1
        284070:	1b5fbe61 	blne	1a739fc <TZoneList::$__dt(void)>
        284074:	e3a00000 	mov	r0, #0	; 0x0
        284078:	eb5fba2b 	bl	1a7292c <TZoneNameComparer::$__ct(void)>
        28407c:	e3a050a8 	mov	r5, #168	; 0xa8
        284080:	e2455b07 	sub	r5, r5, #7168	; 0x1c00
        284084:	e3300000 	teq	r0, #0	; 0x0
        284088:	0a000005 	beq	2840a4 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x9c>
        28408c:	e1a01000 	mov	r1, r0
        284090:	e3a00000 	mov	r0, #0	; 0x0
        284094:	eb5fba38 	bl	1a7297c <TZoneList::$__ct(TZoneNameComparer *)>
        284098:	e5840000 	str	r0, [r4]
        28409c:	e3300000 	teq	r0, #0	; 0x0
        2840a0:	1a000005 	bne	2840bc <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0xb4>
        2840a4:	e1a0000d 	mov	r0, sp
        2840a8:	e3a01000 	mov	r1, #0	; 0x0
        2840ac:	eb65299c 	bl	1bce724 <TUObject::$__dt(void)>
        2840b0:	e28dd008 	add	sp, sp, #8	; 0x8
        2840b4:	ea0000b3 	b	284388 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x380>
        2840b8:	61747020 	cmnvs	r4, r0, lsr #32
        2840bc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2840c0:	e1a0000d 	mov	r0, sp
        2840c4:	e3a01001 	mov	r1, #1	; 0x1
        2840c8:	eb65be37 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        2840cc:	e1a0200d 	mov	r2, sp
        2840d0:	e1a01008 	mov	r1, r8
        2840d4:	e1a00004 	mov	r0, r4
        2840d8:	eb5fdb12 	bl	1a7ad28 <TZIPInterface::$GetRouterAddress(unsigned long, TAddress &)>
        2840dc:	e1a05000 	mov	r5, r0
        2840e0:	e280cdc3 	add	ip, r0, #12480	; 0x30c0
        2840e4:	e37c0019 	cmn	ip, #25	; 0x19
        2840e8:	03a05cce 	moveq	r5, #52736	; 0xce00
        2840ec:	02455801 	subeq	r5, r5, #65536	; 0x10000
        2840f0:	0a00000c 	beq	284128 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x120>
        2840f4:	e3350000 	teq	r5, #0	; 0x0
        2840f8:	1a00000a 	bne	284128 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x120>
        2840fc:	e3a03000 	mov	r3, #0	; 0x0
        284100:	e1a02008 	mov	r2, r8
        284104:	e3a01000 	mov	r1, #0	; 0x0
        284108:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        28410c:	e28d1020 	add	r1, sp, #32	; 0x20
        284110:	e28d0024 	add	r0, sp, #36	; 0x24
        284114:	e3a02000 	mov	r2, #0	; 0x0
        284118:	eb65be29 	bl	1bf39c4 <TATPInterface::$OpenResponder(unsigned char *, unsigned short, unsigned char, unsigned char, unsigned long, unsigned char)>
        28411c:	e28dd00c 	add	sp, sp, #12	; 0xc
        284120:	e1b05000 	movs	r5, r0
        284124:	0a000004 	beq	28413c <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x134>
        284128:	e28d000c 	add	r0, sp, #12	; 0xc
        28412c:	e3a01000 	mov	r1, #0	; 0x0
        284130:	eb65297b 	bl	1bce724 <TUObject::$__dt(void)>
        284134:	e28dd014 	add	sp, sp, #20	; 0x14
        284138:	ea000092 	b	284388 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x380>
        28413c:	e5dd0014 	ldrb	r0, [sp, #20]
        284140:	e5cd0001 	strb	r0, [sp, #1]
        284144:	e3a00006 	mov	r0, #6	; 0x6
        284148:	e5cd000b 	strb	r0, [sp, #11]
        28414c:	e24dd024 	sub	sp, sp, #36	; 0x24
        284150:	e1a0000d 	mov	r0, sp
        284154:	eb65be16 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        284158:	e1a0000d 	mov	r0, sp
        28415c:	e3a03001 	mov	r3, #1	; 0x1
        284160:	e3a02001 	mov	r2, #1	; 0x1
        284164:	e3a01004 	mov	r1, #4	; 0x4
        284168:	eb65be12 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        28416c:	e1b05000 	movs	r5, r0
        284170:	0a000007 	beq	284194 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x18c>
        284174:	e1a0000d 	mov	r0, sp
        284178:	e3a01000 	mov	r1, #0	; 0x0
        28417c:	eb65be0e 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        284180:	e28d0030 	add	r0, sp, #48	; 0x30
        284184:	e3a01000 	mov	r1, #0	; 0x0
        284188:	eb652965 	bl	1bce724 <TUObject::$__dt(void)>
        28418c:	e28dd038 	add	sp, sp, #56	; 0x38
        284190:	ea00007c 	b	284388 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x380>
        284194:	e24dd008 	sub	sp, sp, #8	; 0x8
        284198:	e28d0008 	add	r0, sp, #8	; 0x8
        28419c:	eb65be09 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        2841a0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2841a4:	e3a00001 	mov	r0, #1	; 0x1
        2841a8:	e58d0000 	str	r0, [sp]
        2841ac:	e28d0008 	add	r0, sp, #8	; 0x8
        2841b0:	eb65be07 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        2841b4:	e1a08000 	mov	r8, r0
        2841b8:	e5c07000 	strb	r7, [r0]
        2841bc:	e5c06001 	strb	r6, [r0, #1]
        2841c0:	e3a00001 	mov	r0, #1	; 0x1
        2841c4:	e5c80003 	strb	r0, [r8, #3]
        2841c8:	e5c86002 	strb	r6, [r8, #2]
        2841cc:	e24dd024 	sub	sp, sp, #36	; 0x24
        2841d0:	e1a0000d 	mov	r0, sp
        2841d4:	eb65bdf6 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        2841d8:	e1a0000d 	mov	r0, sp
        2841dc:	e3a03000 	mov	r3, #0	; 0x0
        2841e0:	e3a02001 	mov	r2, #1	; 0x1
        2841e4:	e3a0108a 	mov	r1, #138	; 0x8a
        2841e8:	e2811c02 	add	r1, r1, #512	; 0x200
        2841ec:	eb65bdf1 	bl	1bf39b8 <TMemoryObject::$Init(unsigned long, unsigned char, unsigned long)>
        2841f0:	e1b05000 	movs	r5, r0
        2841f4:	0a00000a 	beq	284224 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x21c>
        2841f8:	e1a0000d 	mov	r0, sp
        2841fc:	e3a01000 	mov	r1, #0	; 0x0
        284200:	eb65bded 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        284204:	e28d002c 	add	r0, sp, #44	; 0x2c
        284208:	e3a01000 	mov	r1, #0	; 0x0
        28420c:	eb65bdea 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        284210:	e28d005c 	add	r0, sp, #92	; 0x5c
        284214:	e3a01000 	mov	r1, #0	; 0x0
        284218:	eb652941 	bl	1bce724 <TUObject::$__dt(void)>
        28421c:	e28dd064 	add	sp, sp, #100	; 0x64
        284220:	ea000058 	b	284388 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x380>
        284224:	e24dd008 	sub	sp, sp, #8	; 0x8
        284228:	e28d0008 	add	r0, sp, #8	; 0x8
        28422c:	eb65bde5 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        284230:	e58d0004 	str	r0, [sp, #4]	; fField4
        284234:	e28d0008 	add	r0, sp, #8	; 0x8
        284238:	eb65bde5 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
        28423c:	e3a01000 	mov	r1, #0	; 0x0
        284240:	e58d0000 	str	r0, [sp]
        284244:	eb65bde3 	bl	1bf39d8 <TTransactionResponseBuffer::$GetDataPtr(unsigned char)>
        284248:	e1a07000 	mov	r7, r0
        28424c:	e3a00001 	mov	r0, #1	; 0x1
        284250:	e2876004 	add	r6, r7, #4	; 0x4
        284254:	e58d6074 	str	r6, [sp, #116]
        284258:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        28425c:	ea00005e 	b	2843dc <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x3d4>
        284260:	e3a03000 	mov	r3, #0	; 0x0
        284264:	e3a029c2 	mov	r2, #3178496	; 0x308000
        284268:	e2822501 	add	r2, r2, #4194304	; 0x400000
        28426c:	e3a01003 	mov	r1, #3	; 0x3
        284270:	e3a00001 	mov	r0, #1	; 0x1
        284274:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        284278:	e3a03001 	mov	r3, #1	; 0x1
        28427c:	e59d2018 	ldr	r2, [sp, #24]
        284280:	e92d000c 	stmdb	sp!, {r2, r3}
        284284:	e59d304c 	ldr	r3, [sp, #76]
        284288:	e28d2074 	add	r2, sp, #116	; 0x74
        28428c:	e28d008c 	add	r0, sp, #140	; 0x8c
        284290:	e3a01000 	mov	r1, #0	; 0x0
        284294:	eb65bdcc 	bl	1bf39cc <TATPInterface::$SendRequest(unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)>
        284298:	e28dd018 	add	sp, sp, #24	; 0x18
        28429c:	e1b05000 	movs	r5, r0
        2842a0:	1a000050 	bne	2843e8 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x3e0>
        2842a4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2842a8:	eb5ff7a5 	bl	1a82144 <TTransactionResponseBuffer::$Count(void)>
        2842ac:	e3500001 	cmp	r0, #1	; 0x1
        2842b0:	ba000046 	blt	2843d0 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x3c8>
        2842b4:	e5d40004 	ldrb	r0, [r4, #4]	; fField4
        2842b8:	e3300000 	teq	r0, #0	; 0x0
        2842bc:	1a000043 	bne	2843d0 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x3c8>
        2842c0:	e5970002 	ldr	r0, [r7, #2]
        2842c4:	e59d1030 	ldr	r1, [sp, #48]
        2842c8:	e0810820 	add	r0, r1, r0, lsr #16
        2842cc:	e58d0030 	str	r0, [sp, #48]
        2842d0:	e5c80003 	strb	r0, [r8, #3]
        2842d4:	e1a00420 	mov	r0, r0, lsr #8
        2842d8:	e5c80002 	strb	r0, [r8, #2]
        2842dc:	e3a09000 	mov	r9, #0	; 0x0
        2842e0:	e59d6078 	ldr	r6, [sp, #120]
        2842e4:	e5970002 	ldr	r0, [r7, #2]
        2842e8:	e1a00820 	mov	r0, r0, lsr #16
        2842ec:	e3500000 	cmp	r0, #0	; 0x0
        2842f0:	da000032 	ble	2843c0 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x3b8>
        2842f4:	e33a0000 	teq	sl, #0	; 0x0
        2842f8:	0a000004 	beq	284310 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x308>
        2842fc:	e1a01006 	mov	r1, r6
        284300:	e1a00004 	mov	r0, r4
        284304:	eb5fd66b 	bl	1a79cb8 <TZIPInterface::$FilterNonUserZone(TString32 *)>
        284308:	e3300000 	teq	r0, #0	; 0x0
        28430c:	1a000024 	bne	2843a4 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x39c>
        284310:	e5d60000 	ldrb	r0, [r6]
        284314:	e3500020 	cmp	r0, #32	; 0x20
        284318:	c3a05e12 	movgt	r5, #288	; 0x120
        28431c:	c2455a03 	subgt	r5, r5, #12288	; 0x3000
        284320:	ca00000e 	bgt	284360 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x358>
        284324:	e3a00000 	mov	r0, #0	; 0x0
        284328:	eb5fb992 	bl	1a72978 <TString32::$__ct(void)>
        28432c:	e1b05000 	movs	r5, r0
        284330:	1a000002 	bne	284340 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x338>
        284334:	eb657779 	bl	1be2120 <$MemError>
        284338:	e1a05000 	mov	r5, r0
        28433c:	ea000007 	b	284360 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x358>
        284340:	e1a01006 	mov	r1, r6
        284344:	e1a00005 	mov	r0, r5
        284348:	eb6007fc 	bl	1a86340 <TString32::$__as(unsigned char const *)>
        28434c:	e1a01005 	mov	r1, r5
        284350:	e5940000 	ldr	r0, [r4]
        284354:	eb659462 	bl	1be94e4 <CSortedList::$Insert(void *)>
        284358:	e1b05000 	movs	r5, r0
        28435c:	0a000010 	beq	2843a4 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x39c>
        284360:	e28d000c 	add	r0, sp, #12	; 0xc
        284364:	e3a01000 	mov	r1, #0	; 0x0
        284368:	eb65bd93 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        28436c:	e28d0038 	add	r0, sp, #56	; 0x38
        284370:	e3a01000 	mov	r1, #0	; 0x0
        284374:	eb65bd90 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        284378:	e28d0068 	add	r0, sp, #104	; 0x68
        28437c:	e3a01000 	mov	r1, #0	; 0x0
        284380:	eb6528e7 	bl	1bce724 <TUObject::$__dt(void)>
        284384:	e28dd070 	add	sp, sp, #112	; 0x70
        284388:	e5dd0000 	ldrb	r0, [sp]
        28438c:	e3300000 	teq	r0, #0	; 0x0
        284390:	15dd1000 	ldrneb	r1, [sp]
        284394:	128d0004 	addne	r0, sp, #4	; 0x4
        284398:	1b65bd8c 	blne	1bf39d0 <TATPInterface::$CloseResponder(unsigned char)>
        28439c:	e1a00005 	mov	r0, r5
        2843a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2843a4:	e5d61000 	ldrb	r1, [r6]
        2843a8:	e0860001 	add	r0, r6, r1
        2843ac:	e2806001 	add	r6, r0, #1	; 0x1
        2843b0:	e2899001 	add	r9, r9, #1	; 0x1
        2843b4:	e5970002 	ldr	r0, [r7, #2]
        2843b8:	e1590820 	cmp	r9, r0, lsr #16
        2843bc:	baffffcc 	blt	2842f4 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x2ec>
        2843c0:	e5d70000 	ldrb	r0, [r7]
        2843c4:	e3300000 	teq	r0, #0	; 0x0
        2843c8:	13a00000 	movne	r0, #0	; 0x0
        2843cc:	158d0000 	strne	r0, [sp]
        2843d0:	e59d0000 	ldr	r0, [sp]
        2843d4:	e3300000 	teq	r0, #0	; 0x0
        2843d8:	0a000002 	beq	2843e8 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x3e0>
        2843dc:	e5d40004 	ldrb	r0, [r4, #4]	; fField4
        2843e0:	e3300000 	teq	r0, #0	; 0x0
        2843e4:	0affff9d 	beq	284260 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x258>
        2843e8:	e28dd00c 	add	sp, sp, #12	; 0xc
        2843ec:	e1a0000d 	mov	r0, sp
        2843f0:	e3a01000 	mov	r1, #0	; 0x0
        2843f4:	eb65bd70 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        2843f8:	e28dd02c 	add	sp, sp, #44	; 0x2c
        2843fc:	e1a0000d 	mov	r0, sp
        284400:	e3a01000 	mov	r1, #0	; 0x0
        284404:	eb65bd6c 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        284408:	e28dd030 	add	sp, sp, #48	; 0x30
        28440c:	eaffff24 	b	2840a4 <TZIPInterface::GetZoneList(unsigned long, unsigned char, unsigned char)+0x9c>
    */
}

/**
 * Symbol: TZIPInterface::FilterNonUserZone(TString32 *)
 * Address: 00284410
 */
TZIPInterface::FilterNonUserZone(TString32 *) {
    /*
        284410:	e1a0c00d 	mov	ip, sp
        284414:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        284418:	e24cb004 	sub	fp, ip, #4	; 0x4
        28441c:	e1a04001 	mov	r4, r1
        284420:	e24dd024 	sub	sp, sp, #36	; 0x24
        284424:	e1a0000d 	mov	r0, sp
        284428:	e28f1f04 	add	r1, pc, #16	; 0x10
        28442c:	eb5fb950 	bl	1a72974 <TString32::$__ct(unsigned char const *)>
        284430:	e1a0100d 	mov	r1, sp
        284434:	e1a00004 	mov	r0, r4
        284438:	eb5feef0 	bl	1a80000 <TString32::$StartsWith( const(TString32 const &))>
        28443c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        284440:	0d536563 	ldceql	5, cr6, [r3, -#396]
        284444:	75726974 	ldrvcb	r6, [r2, -#2420]!
        284448:	795a6f6e 	ldmvcdb	sl, {r1, r2, r3, r5, r6, r8, r9, sl, fp, sp, lr}^
        28444c:	655f0000 	ldrvsb	r0, [pc, #0]	; 284454 <TZIPInterface::ZoneList(void)+0x4>
    */
}

/**
 * Symbol: TZIPInterface::ZoneList(void)
 * Address: 00284450
 */
TZIPInterface::ZoneList(void) {
    /*
        284450:	e5900000 	ldr	r0, [r0]
        284454:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZIPInterface::__ct(void)
 * Address: 002845b8
 */
TZIPInterface::TZIPInterface(void) {
    /*
        2845b8:	e1a0c00d 	mov	ip, sp
        2845bc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2845c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2845c4:	e3300000 	teq	r0, #0	; 0x0
        2845c8:	1a000003 	bne	2845dc <TZIPInterface::__ct(void)+0x24>
        2845cc:	e3a00008 	mov	r0, #8	; 0x8
        2845d0:	eb652858 	bl	1bce738 <$__nw(unsigned int)>
        2845d4:	e3300000 	teq	r0, #0	; 0x0
        2845d8:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2845dc:	e3a01000 	mov	r1, #0	; 0x0
        2845e0:	e5c01004 	strb	r1, [r0, #4]	; fField4
        2845e4:	e5801000 	str	r1, [r0]
        2845e8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TZIPInterface::__dt(void)
 * Address: 002845ec
 */
TZIPInterface::~TZIPInterface(void) {
    /*
        2845ec:	e1a0c00d 	mov	ip, sp
        2845f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2845f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2845f8:	e1a04000 	mov	r4, r0
        2845fc:	e1a05001 	mov	r5, r1
        284600:	e5900000 	ldr	r0, [r0]
        284604:	e3300000 	teq	r0, #0	; 0x0
        284608:	13a01001 	movne	r1, #1	; 0x1
        28460c:	1b5fbcfa 	blne	1a739fc <TZoneList::$__dt(void)>
        284610:	e3150001 	tst	r5, #1	; 0x1
        284614:	11a00004 	movne	r0, r4
        284618:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        28461c:	1a65242f 	bne	1bcd6e0 <$__dl(void *)>
        284620:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TZIPInterface::Close(void)
 * Address: 00284624
 */
TZIPInterface::Close(void) {
    /*
        284624:	ea5ff6b6 	b	1a82104 <TZIPInterface::$Cancel(void)>
    */
}

/**
 * Symbol: TZIPInterface::Cancel(void)
 * Address: 00284628
 */
TZIPInterface::Cancel(void) {
    /*
        284628:	e3a01001 	mov	r1, #1	; 0x1
        28462c:	e5c01004 	strb	r1, [r0, #4]	; fField4
        284630:	e3a00000 	mov	r0, #0	; 0x0
        284634:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZIPInterface::GetRouterAddress(unsigned long, TAddress &)
 * Address: 00284638
 */
TZIPInterface::GetRouterAddress(unsigned long, TAddress &) {
    /*
        284638:	e1a0c00d 	mov	ip, sp
        28463c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        284640:	e24cb004 	sub	fp, ip, #4	; 0x4
        284644:	e1a05001 	mov	r5, r1
        284648:	e1a04002 	mov	r4, r2
        28464c:	e24dd038 	sub	sp, sp, #56	; 0x38
        284650:	e28d0020 	add	r0, sp, #32	; 0x20
        284654:	eb657ef7 	bl	1be4238 <TAEvent::$__ct(void)>
        284658:	e59f005c 	ldr	r0, [pc, #5c]	; 2846bc <TZIPInterface::GetRouterAddress(unsigned long, TAddress &)+0x84>
        28465c:	e58d0020 	str	r0, [sp, #32]
        284660:	e3a00000 	mov	r0, #0	; 0x0
        284664:	e58d002c 	str	r0, [sp, #44]
        284668:	e58d0028 	str	r0, [sp, #40]
        28466c:	e59f004c 	ldr	r0, [pc, #4c]	; 2846c0 <TZIPInterface::GetRouterAddress(unsigned long, TAddress &)+0x88>	; fField4
        284670:	e58d0024 	str	r0, [sp, #36]
        284674:	e3a00001 	mov	r0, #1	; 0x1
        284678:	e2800c01 	add	r0, r0, #256	; 0x100
        28467c:	e58d0030 	str	r0, [sp, #48]
        284680:	e1a0000d 	mov	r0, sp
        284684:	eb5fb8ad 	bl	1a72940 <TGetRouterAddressReply::$__ct(void)>
        284688:	e3a03001 	mov	r3, #1	; 0x1
        28468c:	e3a02000 	mov	r2, #0	; 0x0
        284690:	e58d5034 	str	r5, [sp, #52]
        284694:	e92d000c 	stmdb	sp!, {r2, r3}
        284698:	e28d2008 	add	r2, sp, #8	; 0x8
        28469c:	e28d0028 	add	r0, sp, #40	; 0x28
        2846a0:	e3a03020 	mov	r3, #32	; 0x20
        2846a4:	e3a01018 	mov	r1, #24	; 0x18
        2846a8:	eb5ff285 	bl	1a810c4 <$ATSendRPCSync__FP17TAppleTalkMessageUlT1T2UcT5>
        2846ac:	e28dd008 	add	sp, sp, #8	; 0x8
        2846b0:	e3300000 	teq	r0, #0	; 0x0
        2846b4:	0a000002 	beq	2846c4 <TZIPInterface::GetRouterAddress(unsigned long, TAddress &)+0x8c>
        2846b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2846bc:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        2846c0:	72746d70 	rsbvcs	r6, r4, #7168	; 0x1c00
        2846c4:	e59d0008 	ldr	r0, [sp, #8]
        2846c8:	e3300000 	teq	r0, #0	; 0x0
        2846cc:	1a000002 	bne	2846dc <TZIPInterface::GetRouterAddress(unsigned long, TAddress &)+0xa4>
        2846d0:	e28d1014 	add	r1, sp, #20	; 0x14
        2846d4:	e1a00004 	mov	r0, r4
        2846d8:	eb65bcb4 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        2846dc:	e59d0008 	ldr	r0, [sp, #8]
        2846e0:	eafffff4 	b	2846b8 <TZIPInterface::GetRouterAddress(unsigned long, TAddress &)+0x80>
    */
}

/**
 * Symbol: TZIPInterface::HaveZones(unsigned long)
 * Address: 002846e4
 */
TZIPInterface::HaveZones(unsigned long) {
    /*
        2846e4:	e1a0c00d 	mov	ip, sp
        2846e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2846ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2846f0:	e1a05000 	mov	r5, r0
        2846f4:	e1a04001 	mov	r4, r1
        2846f8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2846fc:	e1a0000d 	mov	r0, sp
        284700:	e3a01001 	mov	r1, #1	; 0x1
        284704:	eb65bca8 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        284708:	e1a0200d 	mov	r2, sp
        28470c:	e1a01004 	mov	r1, r4
        284710:	e1a00005 	mov	r0, r5
        284714:	eb5fd983 	bl	1a7ad28 <TZIPInterface::$GetRouterAddress(unsigned long, TAddress &)>
        284718:	e3300000 	teq	r0, #0	; 0x0
        28471c:	13a00000 	movne	r0, #0	; 0x0
        284720:	03a00001 	moveq	r0, #1	; 0x1
        284724:	e20000ff 	and	r0, r0, #255	; 0xff
        284728:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TZIPInterface::GetZoneList(unsigned long, unsigned char)
 * Address: 0028472c
 */
TZIPInterface::GetZoneList(unsigned long, unsigned char) {
    /*
        28472c:	e20220ff 	and	r2, r2, #255	; 0xff
        284730:	e3a03008 	mov	r3, #8	; 0x8
        284734:	ea5fd984 	b	1a7ad4c <TZIPInterface::$GetZoneList(unsigned long, unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TZIPInterface::GetLocalZoneList(unsigned long)
 * Address: 00284738
 */
TZIPInterface::GetLocalZoneList(unsigned long) {
    /*
        284738:	e3a03009 	mov	r3, #9	; 0x9
        28473c:	e3a02000 	mov	r2, #0	; 0x0
        284740:	ea5fd981 	b	1a7ad4c <TZIPInterface::$GetZoneList(unsigned long, unsigned char, unsigned char)>
    */
}

