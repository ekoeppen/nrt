#include "include/TCodecChannel.h"

/**
 * Symbol: TCodecChannel::__ct(unsigned long, TSoundDriverInfo const &)
 * Address: 001e4110
 */
TCodecChannel::TCodecChannel(unsigned long, TSoundDriverInfo const &) {
    /*
        1e4110:	e1a0c00d 	mov	ip, sp
        1e4114:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e4118:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e411c:	e1b04000 	movs	r4, r0
        1e4120:	e1a05001 	mov	r5, r1
        1e4124:	1a000003 	bne	1e4138 <TCodecChannel::__ct(unsigned long, TSoundDriverInfo const &)+0x28>
        1e4128:	e3a00f86 	mov	r0, #536	; 0x218
        1e412c:	eb67a981 	bl	1bce738 <$__nw(unsigned int)>
        1e4130:	e1b04000 	movs	r4, r0
        1e4134:	0a000015 	beq	1e4190 <TCodecChannel::__ct(unsigned long, TSoundDriverInfo const &)+0x80>
        1e4138:	e1a01005 	mov	r1, r5
        1e413c:	e1a00004 	mov	r0, r4
        1e4140:	eb666759 	bl	1b7deac <TSoundChannel::$__ct(unsigned long)>
        1e4144:	e2840f7a 	add	r0, r4, #488	; 0x1e8
        1e4148:	e1a06000 	mov	r6, r0
        1e414c:	e3a05000 	mov	r5, #0	; 0x0
        1e4150:	e5c05004 	strb	r5, [r0, #4]	; fField4
        1e4154:	e5805000 	str	r5, [r0]
        1e4158:	e2801008 	add	r1, r0, #8	; 0x8
        1e415c:	eb67c230 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        1e4160:	e5c451fc 	strb	r5, [r4, #508]
        1e4164:	e58451f8 	str	r5, [r4, #504]	; fField504
        1e4168:	e59f0028 	ldr	r0, [pc, #28]	; 1e4198 <TCodecChannel::__ct(unsigned long, TSoundDriverInfo const &)+0x88>	; fField28
        1e416c:	e5840000 	str	r0, [r4]
        1e4170:	e1a00006 	mov	r0, r6
        1e4174:	e58451e0 	str	r5, [r4, #480]	; fField480
        1e4178:	eb67c64e 	bl	1bd5ab8 <TULockingSemaphore::$Init(void)>
        1e417c:	e58451e4 	str	r5, [r4, #484]	; fField484
        1e4180:	e58451f4 	str	r5, [r4, #500]	; fField500
        1e4184:	e5845208 	str	r5, [r4, #520]	; fField520
        1e4188:	e2840f7e 	add	r0, r4, #504	; 0x1f8
        1e418c:	eb67c64b 	bl	1bd5ac0 <TUPort::$Init(void)>
        1e4190:	e1a00004 	mov	r0, r4
        1e4194:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1e4198:	0001ca88 	andeq	ip, r1, r8, lsl #21
    */
}

/**
 * Symbol: TCodecChannel::__dt(void)
 * Address: 001e419c
 */
TCodecChannel::~TCodecChannel(void) {
    /*
        1e419c:	e1a0c00d 	mov	ip, sp
        1e41a0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e41a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e41a8:	e1a04000 	mov	r4, r0
        1e41ac:	e1a05001 	mov	r5, r1
        1e41b0:	e59f0094 	ldr	r0, [pc, #94]	; 1e424c <TCodecChannel::__dt(void)+0xb0>
        1e41b4:	e5840000 	str	r0, [r4]
        1e41b8:	e3a060c6 	mov	r6, #198	; 0xc6
        1e41bc:	e2466c76 	sub	r6, r6, #30208	; 0x7600
        1e41c0:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1e41c4:	e3310000 	teq	r1, #0	; 0x0
        1e41c8:	0a000009 	beq	1e41f4 <TCodecChannel::__dt(void)+0x58>
        1e41cc:	e5917000 	ldr	r7, [r1]
        1e41d0:	e584700c 	str	r7, [r4, #12]	; fField12
        1e41d4:	e1a00004 	mov	r0, r4
        1e41d8:	e3a03001 	mov	r3, #1	; 0x1
        1e41dc:	e1a02006 	mov	r2, r6
        1e41e0:	e594c000 	ldr	ip, [r4]
        1e41e4:	e1a0e00f 	mov	lr, pc
        1e41e8:	e28cf018 	add	pc, ip, #24	; 0x18
        1e41ec:	e1b01007 	movs	r1, r7
        1e41f0:	1afffff5 	bne	1e41cc <TCodecChannel::__dt(void)+0x30>
        1e41f4:	e59411e0 	ldr	r1, [r4, #480]	; fField480
        1e41f8:	e3310000 	teq	r1, #0	; 0x0
        1e41fc:	0a000004 	beq	1e4214 <TCodecChannel::__dt(void)+0x78>
        1e4200:	e1a00004 	mov	r0, r4
        1e4204:	e5916000 	ldr	r6, [r1]
        1e4208:	eb666733 	bl	1b7dedc <TCodecChannel::$ReleaseNode(ChannelNode *)>
        1e420c:	e1b01006 	movs	r1, r6
        1e4210:	1afffffa 	bne	1e4200 <TCodecChannel::__dt(void)+0x64>
        1e4214:	e2840f7e 	add	r0, r4, #504	; 0x1f8
        1e4218:	e3a01000 	mov	r1, #0	; 0x0
        1e421c:	eb67a940 	bl	1bce724 <TUObject::$__dt(void)>
        1e4220:	e2840f7a 	add	r0, r4, #488	; 0x1e8
        1e4224:	e3a01000 	mov	r1, #0	; 0x0
        1e4228:	eb67a93c 	bl	1bce720 <TULockingSemaphore::$__dt(void)>
        1e422c:	e1a00004 	mov	r0, r4
        1e4230:	e3a01000 	mov	r1, #0	; 0x0
        1e4234:	eb665edd 	bl	1b7bdb0 <TSoundChannel::$__dt(void)>
        1e4238:	e3150001 	tst	r5, #1	; 0x1
        1e423c:	11a00004 	movne	r0, r4
        1e4240:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1e4244:	1a67a525 	bne	1bcd6e0 <$__dl(void *)>
        1e4248:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1e424c:	0001ca88 	andeq	ip, r1, r8, lsl #21
    */
}

/**
 * Symbol: TCodecChannel::GetNextNode(void)
 * Address: 001e4250
 */
TCodecChannel::GetNextNode(void) {
    /*
        1e4250:	e1a0c00d 	mov	ip, sp
        1e4254:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e4258:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e425c:	e1a04000 	mov	r4, r0
        1e4260:	e590500c 	ldr	r5, [r0, #12]	; fField12
        1e4264:	e3350000 	teq	r5, #0	; 0x0
        1e4268:	0a00001d 	beq	1e42e4 <TCodecChannel::GetNextNode(void)+0x94>
        1e426c:	e5950030 	ldr	r0, [r5, #48]
        1e4270:	e3500000 	cmp	r0, #0	; 0x0
        1e4274:	ca00000e 	bgt	1e42b4 <TCodecChannel::GetNextNode(void)+0x64>
        1e4278:	e5951000 	ldr	r1, [r5]
        1e427c:	e1a06001 	mov	r6, r1
        1e4280:	e1a00004 	mov	r0, r4
        1e4284:	e5942000 	ldr	r2, [r4]
        1e4288:	e1a0e00f 	mov	lr, pc
        1e428c:	e282f01c 	add	pc, r2, #28	; 0x1c
        1e4290:	e1a01005 	mov	r1, r5
        1e4294:	e1a00004 	mov	r0, r4
        1e4298:	e3a03000 	mov	r3, #0	; 0x0
        1e429c:	e3a02000 	mov	r2, #0	; 0x0
        1e42a0:	e594c000 	ldr	ip, [r4]
        1e42a4:	e1a0e00f 	mov	lr, pc
        1e42a8:	e28cf018 	add	pc, ip, #24	; 0x18
        1e42ac:	e1a05006 	mov	r5, r6
        1e42b0:	ea00000b 	b	1e42e4 <TCodecChannel::GetNextNode(void)+0x94>
        1e42b4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1e42b8:	e2400001 	sub	r0, r0, #1	; 0x1
        1e42bc:	e5850030 	str	r0, [r5, #48]
        1e42c0:	e2850010 	add	r0, r5, #16	; 0x10
        1e42c4:	e1a0100d 	mov	r1, sp
        1e42c8:	eb666b1e 	bl	1b7ef48 <$ConvertCodecBlock(SoundBlock *, CodecBlock *)>
        1e42cc:	e1a01005 	mov	r1, r5
        1e42d0:	e1a00004 	mov	r0, r4
        1e42d4:	eb666706 	bl	1b7def4 <TCodecChannel::$GetCodec(ChannelNode *)>
        1e42d8:	e1a0100d 	mov	r1, sp
        1e42dc:	eb66778b 	bl	1b82110 <$SafeCodecReset(TSoundCodec *, CodecBlock *)>
        1e42e0:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1e42e4:	e1a00005 	mov	r0, r5
        1e42e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCodecChannel::SetupNode(ChannelNode *)
 * Address: 001e442c
 */
TCodecChannel::SetupNode(ChannelNode *) {
    /*
        1e442c:	e1a0c00d 	mov	ip, sp
        1e4430:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e4434:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e4438:	e1a05000 	mov	r5, r0
        1e443c:	e1b04001 	movs	r4, r1
        1e4440:	11a01004 	movne	r1, r4
        1e4444:	11a00005 	movne	r0, r5
        1e4448:	1b666ab1 	blne	1b7ef14 <TCodecChannel::$InitNode(ChannelNode *)>
        1e444c:	e5a5400c 	str	r4, [r5, #12]!	; fField12
        1e4450:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCodecChannel::FreeNode(ChannelNode *, long, int)
 * Address: 001e4454
 */
TCodecChannel::FreeNode(ChannelNode *, long, int) {
    /*
        1e4454:	e1a0c00d 	mov	ip, sp
        1e4458:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e445c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e4460:	e1a05000 	mov	r5, r0
        1e4464:	e1a04001 	mov	r4, r1
        1e4468:	e1a07002 	mov	r7, r2
        1e446c:	e1a06003 	mov	r6, r3
        1e4470:	e3a08000 	mov	r8, #0	; 0x0
        1e4474:	eb66669a 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e4478:	e3300000 	teq	r0, #0	; 0x0
        1e447c:	0a000011 	beq	1e44c8 <TCodecChannel::FreeNode(ChannelNode *, long, int)+0x74>
        1e4480:	e5a07040 	str	r7, [r0, #64]!
        1e4484:	e5806004 	str	r6, [r0, #4]	; fField4
        1e4488:	e59501e0 	ldr	r0, [r5, #480]	; fField480
        1e448c:	e3300000 	teq	r0, #0	; 0x0
        1e4490:	0a000008 	beq	1e44b8 <TCodecChannel::FreeNode(ChannelNode *, long, int)+0x64>
        1e4494:	e5901000 	ldr	r1, [r0]
        1e4498:	e3310000 	teq	r1, #0	; 0x0
        1e449c:	0a000003 	beq	1e44b0 <TCodecChannel::FreeNode(ChannelNode *, long, int)+0x5c>
        1e44a0:	e5900000 	ldr	r0, [r0]
        1e44a4:	e5901000 	ldr	r1, [r0]
        1e44a8:	e3310000 	teq	r1, #0	; 0x0
        1e44ac:	1afffffb 	bne	1e44a0 <TCodecChannel::FreeNode(ChannelNode *, long, int)+0x4c>
        1e44b0:	e5804000 	str	r4, [r0]
        1e44b4:	ea000000 	b	1e44bc <TCodecChannel::FreeNode(ChannelNode *, long, int)+0x68>
        1e44b8:	e5a541e0 	str	r4, [r5, #480]!	; fField480
        1e44bc:	e3a00000 	mov	r0, #0	; 0x0
        1e44c0:	e5840000 	str	r0, [r4]
        1e44c4:	ea000005 	b	1e44e0 <TCodecChannel::FreeNode(ChannelNode *, long, int)+0x8c>
        1e44c8:	e1a03006 	mov	r3, r6
        1e44cc:	e1a02007 	mov	r2, r7
        1e44d0:	e1a01004 	mov	r1, r4
        1e44d4:	e1a00005 	mov	r0, r5
        1e44d8:	eb665a13 	bl	1b7ad2c <TSoundChannel::$FreeNode(ChannelNode *, long, int)>
        1e44dc:	e1a08000 	mov	r8, r0
        1e44e0:	e1a00008 	mov	r0, r8
        1e44e4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCodecChannel::ReleaseNode(ChannelNode *)
 * Address: 001e44e8
 */
TCodecChannel::ReleaseNode(ChannelNode *) {
    /*
        1e44e8:	e1a0c00d 	mov	ip, sp
        1e44ec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e44f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e44f4:	e1a05000 	mov	r5, r0
        1e44f8:	e1a04001 	mov	r4, r1
        1e44fc:	e59001e0 	ldr	r0, [r0, #480]	; fField480
        1e4500:	e1300001 	teq	r0, r1
        1e4504:	05940000 	ldreq	r0, [r4]
        1e4508:	058501e0 	streq	r0, [r5, #480]	; fField480
        1e450c:	0a000003 	beq	1e4520 <TCodecChannel::ReleaseNode(ChannelNode *)+0x38>
        1e4510:	e595000c 	ldr	r0, [r5, #12]	; fField12
        1e4514:	e1300004 	teq	r0, r4
        1e4518:	05940000 	ldreq	r0, [r4]
        1e451c:	0585000c 	streq	r0, [r5, #12]	; fField12
        1e4520:	e1a01004 	mov	r1, r4
        1e4524:	e1a00005 	mov	r0, r5
        1e4528:	eb66666d 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e452c:	e1a06000 	mov	r6, r0
        1e4530:	e1a01004 	mov	r1, r4
        1e4534:	e1a00005 	mov	r0, r5
        1e4538:	eb66666d 	bl	1b7def4 <TCodecChannel::$GetCodec(ChannelNode *)>
        1e453c:	e5961044 	ldr	r1, [r6, #68]
        1e4540:	eb6676f6 	bl	1b82120 <$SafeCodecStop(TSoundCodec *, int)>
        1e4544:	e5960008 	ldr	r0, [r6, #8]
        1e4548:	e2500001 	subs	r0, r0, #1	; 0x1
        1e454c:	e5860008 	str	r0, [r6, #8]
        1e4550:	1a000006 	bne	1e4570 <TCodecChannel::ReleaseNode(ChannelNode *)+0x88>
        1e4554:	e1a01004 	mov	r1, r4
        1e4558:	e1a00005 	mov	r0, r5
        1e455c:	eb666a6e 	bl	1b7ef1c <TCodecChannel::$DeleteCodecNodes(ChannelNode *)>
        1e4560:	e1a01004 	mov	r1, r4
        1e4564:	e1a00005 	mov	r0, r5
        1e4568:	e3a02000 	mov	r2, #0	; 0x0
        1e456c:	eb66665d 	bl	1b7dee8 <TCodecChannel::$SetCodecState(ChannelNode *, CodecState *)>
        1e4570:	e1a01004 	mov	r1, r4
        1e4574:	e1a00005 	mov	r0, r5
        1e4578:	eb66665b 	bl	1b7deec <TCodecChannel::$GetRecordState(ChannelNode *)>
        1e457c:	e3300000 	teq	r0, #0	; 0x0
        1e4580:	1b67a456 	blne	1bcd6e0 <$__dl(void *)>
        1e4584:	e1a01004 	mov	r1, r4
        1e4588:	e1a00005 	mov	r0, r5
        1e458c:	e2863040 	add	r3, r6, #64	; 0x40
        1e4590:	e893000c 	ldmia	r3, {r2, r3}
        1e4594:	eb6659e4 	bl	1b7ad2c <TSoundChannel::$FreeNode(ChannelNode *, long, int)>
        1e4598:	e1a04000 	mov	r4, r0
        1e459c:	e5960008 	ldr	r0, [r6, #8]
        1e45a0:	e3300000 	teq	r0, #0	; 0x0
        1e45a4:	01a00006 	moveq	r0, r6
        1e45a8:	0b67a44c 	bleq	1bcd6e0 <$__dl(void *)>
        1e45ac:	e1a00004 	mov	r0, r4
        1e45b0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCodecChannel::Cancel(TUSoundNodeRequest *)
 * Address: 001e45b4
 */
TCodecChannel::Cancel(TUSoundNodeRequest *) {
    /*
        1e45b4:	e3a00000 	mov	r0, #0	; 0x0
        1e45b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCodecChannel::GetCodecState(ChannelNode *)
 * Address: 001e45bc
 */
TCodecChannel::GetCodecState(ChannelNode *) {
    /*
        1e45bc:	e5902014 	ldr	r2, [r0, #20]	; fField20
        1e45c0:	e3120001 	tst	r2, #1	; 0x1
        1e45c4:	02022020 	andeq	r2, r2, #32	; 0x20
        1e45c8:	03320000 	teqeq	r2, #0	; 0x0
        1e45cc:	05900208 	ldreq	r0, [r0, #520]	; fField520
        1e45d0:	01a0f00e 	moveq	pc, lr
        1e45d4:	e1b00001 	movs	r0, r1
        1e45d8:	15b10058 	ldrne	r0, [r1, #88]!
        1e45dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCodecChannel::SetCodecState(ChannelNode *, CodecState *)
 * Address: 001e45e0
 */
TCodecChannel::SetCodecState(ChannelNode *, CodecState *) {
    /*
        1e45e0:	e5903014 	ldr	r3, [r0, #20]	; fField20
        1e45e4:	e3130001 	tst	r3, #1	; 0x1
        1e45e8:	02033020 	andeq	r3, r3, #32	; 0x20
        1e45ec:	03330000 	teqeq	r3, #0	; 0x0
        1e45f0:	15a12058 	strne	r2, [r1, #88]!
        1e45f4:	05a02208 	streq	r2, [r0, #520]!	; fField520
        1e45f8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCodecChannel::GetRecordState(ChannelNode *)
 * Address: 001e45fc
 */
TCodecChannel::GetRecordState(ChannelNode *) {
    /*
        1e45fc:	e3a02000 	mov	r2, #0	; 0x0
        1e4600:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1e4604:	e3100002 	tst	r0, #2	; 0x2
        1e4608:	02000010 	andeq	r0, r0, #16	; 0x10
        1e460c:	03300000 	teqeq	r0, #0	; 0x0
        1e4610:	15b12058 	ldrne	r2, [r1, #88]!
        1e4614:	e1a00002 	mov	r0, r2
        1e4618:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCodecChannel::SetRecordState(ChannelNode *, RecordState *)
 * Address: 001e461c
 */
TCodecChannel::SetRecordState(ChannelNode *, RecordState *) {
    /*
        1e461c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1e4620:	e3100002 	tst	r0, #2	; 0x2
        1e4624:	02000010 	andeq	r0, r0, #16	; 0x10
        1e4628:	03300000 	teqeq	r0, #0	; 0x0
        1e462c:	15a12058 	strne	r2, [r1, #88]!
        1e4630:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCodecChannel::GetCodec(ChannelNode *)
 * Address: 001e4634
 */
TCodecChannel::GetCodec(ChannelNode *) {
    /*
        1e4634:	e5b10058 	ldr	r0, [r1, #88]!
        1e4638:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1e463c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCodecChannel::SetCodec(ChannelNode *, TSoundCodec *)
 * Address: 001e4640
 */
TCodecChannel::SetCodec(ChannelNode *, TSoundCodec *) {
    /*
        1e4640:	e5b10058 	ldr	r0, [r1, #88]!
        1e4644:	e5a02004 	str	r2, [r0, #4]!	; fField4
        1e4648:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCodecChannel::GetNodeRefCount(ChannelNode *)
 * Address: 001e4708
 */
TCodecChannel::GetNodeRefCount(ChannelNode *) {
    /*
        1e4708:	e5b10058 	ldr	r0, [r1, #88]!
        1e470c:	e5900000 	ldr	r0, [r0]
        1e4710:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCodecChannel::SetNodeRefCount(ChannelNode *, long)
 * Address: 001e4714
 */
TCodecChannel::SetNodeRefCount(ChannelNode *, long) {
    /*
        1e4714:	e5b10058 	ldr	r0, [r1, #88]!
        1e4718:	e5802000 	str	r2, [r0]
        1e471c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCodecChannel::Start(TUMsgToken *)
 * Address: 001e4720
 */
TCodecChannel::Start(TUMsgToken *) {
    /*
        1e4720:	e1a0c00d 	mov	ip, sp
        1e4724:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e4728:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e472c:	e1a04000 	mov	r4, r0
        1e4730:	eb66598f 	bl	1b7ad74 <TSoundChannel::$Start(TUMsgToken *)>
        1e4734:	e1b05000 	movs	r5, r0
        1e4738:	1a00002f 	bne	1e47fc <TCodecChannel::Start(TUMsgToken *)+0xdc>
        1e473c:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e4740:	e3100001 	tst	r0, #1	; 0x1
        1e4744:	e2846f7a 	add	r6, r4, #488	; 0x1e8
        1e4748:	0a000004 	beq	1e4760 <TCodecChannel::Start(TUMsgToken *)+0x40>
        1e474c:	e1a00006 	mov	r0, r6
        1e4750:	e3a01000 	mov	r1, #0	; 0x0
        1e4754:	eb67a7fe 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1e4758:	e1a00006 	mov	r0, r6
        1e475c:	eb67d54d 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1e4760:	e1a00006 	mov	r0, r6
        1e4764:	e3a01001 	mov	r1, #1	; 0x1
        1e4768:	eb67a7f9 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1e476c:	e3300000 	teq	r0, #0	; 0x0
        1e4770:	1a000021 	bne	1e47fc <TCodecChannel::Start(TUMsgToken *)+0xdc>
        1e4774:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1e4778:	e3a00000 	mov	r0, #0	; 0x0
        1e477c:	e5cd0008 	strb	r0, [sp, #8]
        1e4780:	e58d0004 	str	r0, [sp, #4]	; fField4
        1e4784:	e58d4000 	str	r4, [sp]
        1e4788:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e478c:	e3c00001 	bic	r0, r0, #1	; 0x1
        1e4790:	e58401e4 	str	r0, [r4, #484]	; fField484
        1e4794:	e59f3068 	ldr	r3, [pc, #68]	; 1e4804 <TCodecChannel::Start(TUMsgToken *)+0xe4>
        1e4798:	e3a0200c 	mov	r2, #12	; 0xc
        1e479c:	e1a0100d 	mov	r1, sp
        1e47a0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1e47a4:	e59f105c 	ldr	r1, [pc, #5c]	; 1e4808 <TCodecChannel::Start(TUMsgToken *)+0xe8>
        1e47a8:	e28d0010 	add	r0, sp, #16	; 0x10
        1e47ac:	e3a03004 	mov	r3, #4	; 0x4
        1e47b0:	e3a02e7d 	mov	r2, #2000	; 0x7d0
        1e47b4:	eb67c4c2 	bl	1bd5ac4 <$Init__6TUTaskFPFPvUlT2_vUlT2PvN22>
        1e47b8:	e28dd00c 	add	sp, sp, #12	; 0xc
        1e47bc:	e1a05000 	mov	r5, r0
        1e47c0:	e1a00006 	mov	r0, r6
        1e47c4:	eb67d533 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1e47c8:	e3350000 	teq	r5, #0	; 0x0
        1e47cc:	1a000002 	bne	1e47dc <TCodecChannel::Start(TUMsgToken *)+0xbc>
        1e47d0:	e28d0004 	add	r0, sp, #4	; 0x4
        1e47d4:	eb67e19a 	bl	1bdce44 <TUTask::$Start(void)>
        1e47d8:	e1a05000 	mov	r5, r0
        1e47dc:	e3350000 	teq	r5, #0	; 0x0
        1e47e0:	159401e4 	ldrne	r0, [r4, #484]	; fField484
        1e47e4:	13800001 	orrne	r0, r0, #1	; 0x1
        1e47e8:	15a401e4 	strne	r0, [r4, #484]!	; fField484
        1e47ec:	e28d0004 	add	r0, sp, #4	; 0x4
        1e47f0:	e3a01000 	mov	r1, #0	; 0x0
        1e47f4:	eb67a7ca 	bl	1bce724 <TUObject::$__dt(void)>
        1e47f8:	e28dd00c 	add	sp, sp, #12	; 0xc
        1e47fc:	e1a00005 	mov	r0, r5
        1e4800:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1e4804:	636f6463 	cmnvs	pc, #1660944384	; 0x63000000
        1e4808:	01b7ef08 	moveqs	lr, r8, lsl #30
    */
}

/**
 * Symbol: MainEventLoop__13TCodecChannelSFPP13TCodecChannel
 * Address: 001e480c
 */
void TCodecChannel::MainEventLoop() {
    /*
        1e480c:	e5900000 	ldr	r0, [r0]
        1e4810:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1e4814:	e3110020 	tst	r1, #32	; 0x20
        1e4818:	1a6669c0 	bne	1b7ef20 <TCodecChannel::$DecompressLoop(void)>
        1e481c:	e3110010 	tst	r1, #16	; 0x10
        1e4820:	1a6669c5 	bne	1b7ef3c <TCodecChannel::$CompressLoop(void)>
        1e4824:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCodecChannel::Pause(TUSoundNodeReply *)
 * Address: 001e4828
 */
TCodecChannel::Pause(TUSoundNodeReply *) {
    /*
        1e4828:	e3a02000 	mov	r2, #0	; 0x0
        1e482c:	e3310000 	teq	r1, #0	; 0x0
        1e4830:	0a00000e 	beq	1e4870 <TCodecChannel::Pause(TUSoundNodeReply *)+0x48>
        1e4834:	e3a0c002 	mov	ip, #2	; 0x2
        1e4838:	e590300c 	ldr	r3, [r0, #12]	; fField12
        1e483c:	e3330000 	teq	r3, #0	; 0x0
        1e4840:	03a03000 	moveq	r3, #0	; 0x0
        1e4844:	02811014 	addeq	r1, r1, #20	; 0x14
        1e4848:	08811008 	stmeqia	r1, {r3, ip}
        1e484c:	02411014 	subeq	r1, r1, #20	; 0x14
        1e4850:	0a000005 	beq	1e486c <TCodecChannel::Pause(TUSoundNodeReply *)+0x44>
        1e4854:	e5933008 	ldr	r3, [r3, #8]
        1e4858:	e2811014 	add	r1, r1, #20	; 0x14
        1e485c:	e8811008 	stmia	r1, {r3, ip}
        1e4860:	e2411014 	sub	r1, r1, #20	; 0x14
        1e4864:	e590300c 	ldr	r3, [r0, #12]	; fField12
        1e4868:	e593300c 	ldr	r3, [r3, #12]	; fField12
        1e486c:	e5a1301c 	str	r3, [r1, #28]!	; fField28
        1e4870:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1e4874:	e3110004 	tst	r1, #4	; 0x4
        1e4878:	0a000004 	beq	1e4890 <TCodecChannel::Pause(TUSoundNodeReply *)+0x68>
        1e487c:	e3110008 	tst	r1, #8	; 0x8
        1e4880:	03811008 	orreq	r1, r1, #8	; 0x8
        1e4884:	13c11008 	bicne	r1, r1, #8	; 0x8
        1e4888:	e5a01014 	str	r1, [r0, #20]!	; fField20
        1e488c:	13a02001 	movne	r2, #1	; 0x1
        1e4890:	e1a00002 	mov	r0, r2
        1e4894:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCodecChannel::Stop(TUSoundNodeReply *, long)
 * Address: 001e4898
 */
TCodecChannel::Stop(TUSoundNodeReply *, long) {
    /*
        1e4898:	e1a0c00d 	mov	ip, sp
        1e489c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e48a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e48a4:	e1a04000 	mov	r4, r0
        1e48a8:	e1a05001 	mov	r5, r1
        1e48ac:	e59001e4 	ldr	r0, [r0, #484]	; fField484
        1e48b0:	e3100001 	tst	r0, #1	; 0x1
        1e48b4:	1a000020 	bne	1e493c <TCodecChannel::Stop(TUSoundNodeReply *, long)+0xa4>
        1e48b8:	e3a06001 	mov	r6, #1	; 0x1
        1e48bc:	e1800006 	orr	r0, r0, r6
        1e48c0:	e58401e4 	str	r0, [r4, #484]	; fField484
        1e48c4:	e1a01005 	mov	r1, r5
        1e48c8:	e5943204 	ldr	r3, [r4, #516]	; fField516
        1e48cc:	e1a00003 	mov	r0, r3
        1e48d0:	e5933000 	ldr	r3, [r3]
        1e48d4:	e1a0e00f 	mov	lr, pc
        1e48d8:	e283f014 	add	pc, r3, #20	; 0x14
        1e48dc:	e2840f7a 	add	r0, r4, #488	; 0x1e8
        1e48e0:	e1a07000 	mov	r7, r0
        1e48e4:	e3a01000 	mov	r1, #0	; 0x0
        1e48e8:	eb67a799 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1e48ec:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e48f0:	e3c00001 	bic	r0, r0, #1	; 0x1
        1e48f4:	e58401e4 	str	r0, [r4, #484]	; fField484
        1e48f8:	e1a00007 	mov	r0, r7
        1e48fc:	eb67d4e5 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1e4900:	e3350000 	teq	r5, #0	; 0x0
        1e4904:	0a00000c 	beq	1e493c <TCodecChannel::Stop(TUSoundNodeReply *, long)+0xa4>
        1e4908:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e490c:	e3100004 	tst	r0, #4	; 0x4
        1e4910:	03a00000 	moveq	r0, #0	; 0x0
        1e4914:	02855014 	addeq	r5, r5, #20	; 0x14
        1e4918:	08850041 	stmeqia	r5, {r0, r6}
        1e491c:	02455014 	subeq	r5, r5, #20	; 0x14
        1e4920:	0a000004 	beq	1e4938 <TCodecChannel::Stop(TUSoundNodeReply *, long)+0xa0>
        1e4924:	e5940210 	ldr	r0, [r4, #528]	; fField528
        1e4928:	e2855014 	add	r5, r5, #20	; 0x14
        1e492c:	e8850041 	stmia	r5, {r0, r6}
        1e4930:	e2455014 	sub	r5, r5, #20	; 0x14
        1e4934:	e5940214 	ldr	r0, [r4, #532]	; fField532
        1e4938:	e5a5001c 	str	r0, [r5, #28]!	; fField28
        1e493c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e4940:	e3c0000c 	bic	r0, r0, #12	; 0xc
        1e4944:	e5a40014 	str	r0, [r4, #20]!	; fField20
        1e4948:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCodecChannel::InitNode(ChannelNode *)
 * Address: 001e494c
 */
TCodecChannel::InitNode(ChannelNode *) {
    /*
        1e494c:	e1a0c00d 	mov	ip, sp
        1e4950:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e4954:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e4958:	e1a05000 	mov	r5, r0
        1e495c:	e1b04001 	movs	r4, r1
        1e4960:	e3a07000 	mov	r7, #0	; 0x0
        1e4964:	0a000050 	beq	1e4aac <TCodecChannel::InitNode(ChannelNode *)+0x160>
        1e4968:	e1a01004 	mov	r1, r4
        1e496c:	e1a00005 	mov	r0, r5
        1e4970:	eb66655b 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e4974:	e1b06000 	movs	r6, r0
        1e4978:	e3a0a000 	mov	sl, #0	; 0x0
        1e497c:	1a00000b 	bne	1e49b0 <TCodecChannel::InitNode(ChannelNode *)+0x64>
        1e4980:	e3a00048 	mov	r0, #72	; 0x48
        1e4984:	eb67a76b 	bl	1bce738 <$__nw(unsigned int)>
        1e4988:	e1b06000 	movs	r6, r0
        1e498c:	0a000010 	beq	1e49d4 <TCodecChannel::InitNode(ChannelNode *)+0x88>
        1e4990:	e1a02006 	mov	r2, r6
        1e4994:	e1a01004 	mov	r1, r4
        1e4998:	e1a00005 	mov	r0, r5
        1e499c:	eb666551 	bl	1b7dee8 <TCodecChannel::$SetCodecState(ChannelNode *, CodecState *)>
        1e49a0:	e586a008 	str	sl, [r6, #8]
        1e49a4:	e586a014 	str	sl, [r6, #20]	; fField20
        1e49a8:	e586a018 	str	sl, [r6, #24]	; fField24
        1e49ac:	e5c6a00c 	strb	sl, [r6, #12]	; fField12
        1e49b0:	e5950014 	ldr	r0, [r5, #20]	; fField20
        1e49b4:	e3100002 	tst	r0, #2	; 0x2
        1e49b8:	02000010 	andeq	r0, r0, #16	; 0x10
        1e49bc:	03300000 	teqeq	r0, #0	; 0x0
        1e49c0:	0a00000a 	beq	1e49f0 <TCodecChannel::InitNode(ChannelNode *)+0xa4>
        1e49c4:	e3a00008 	mov	r0, #8	; 0x8
        1e49c8:	eb67a75a 	bl	1bce738 <$__nw(unsigned int)>
        1e49cc:	e3300000 	teq	r0, #0	; 0x0
        1e49d0:	1a000002 	bne	1e49e0 <TCodecChannel::InitNode(ChannelNode *)+0x94>
        1e49d4:	eb67f5d1 	bl	1be2120 <$MemError>
        1e49d8:	e1a07000 	mov	r7, r0
        1e49dc:	ea000032 	b	1e4aac <TCodecChannel::InitNode(ChannelNode *)+0x160>
        1e49e0:	e1a02000 	mov	r2, r0
        1e49e4:	e1a01004 	mov	r1, r4
        1e49e8:	e1a00005 	mov	r0, r5
        1e49ec:	eb66653f 	bl	1b7def0 <TCodecChannel::$SetRecordState(ChannelNode *, RecordState *)>
        1e49f0:	e1a01004 	mov	r1, r4
        1e49f4:	e1a00005 	mov	r0, r5
        1e49f8:	e3a02000 	mov	r2, #0	; 0x0
        1e49fc:	eb66693f 	bl	1b7ef00 <TCodecChannel::$SetNodeRefCount(ChannelNode *, long)>
        1e4a00:	e5960008 	ldr	r0, [r6, #8]
        1e4a04:	e2800001 	add	r0, r0, #1	; 0x1
        1e4a08:	e2849010 	add	r9, r4, #16	; 0x10
        1e4a0c:	e5860008 	str	r0, [r6, #8]
        1e4a10:	e5992028 	ldr	r2, [r9, #40]
        1e4a14:	e1a08002 	mov	r8, r2
        1e4a18:	e1a01004 	mov	r1, r4
        1e4a1c:	e1a00005 	mov	r0, r5
        1e4a20:	eb666534 	bl	1b7def8 <TCodecChannel::$SetCodec(ChannelNode *, TSoundCodec *)>
        1e4a24:	e3380000 	teq	r8, #0	; 0x0
        1e4a28:	0a00001f 	beq	1e4aac <TCodecChannel::InitNode(ChannelNode *)+0x160>
        1e4a2c:	e5960008 	ldr	r0, [r6, #8]
        1e4a30:	e3300001 	teq	r0, #1	; 0x1
        1e4a34:	1a00000f 	bne	1e4a78 <TCodecChannel::InitNode(ChannelNode *)+0x12c>
        1e4a38:	e599002c 	ldr	r0, [r9, #44]
        1e4a3c:	e5860010 	str	r0, [r6, #16]	; fField16
        1e4a40:	e5990030 	ldr	r0, [r9, #48]
        1e4a44:	e3500002 	cmp	r0, #2	; 0x2
        1e4a48:	3a000001 	bcc	1e4a54 <TCodecChannel::InitNode(ChannelNode *)+0x108>
        1e4a4c:	e3500008 	cmp	r0, #8	; 0x8
        1e4a50:	2a000002 	bcs	1e4a60 <TCodecChannel::InitNode(ChannelNode *)+0x114>
        1e4a54:	e3500002 	cmp	r0, #2	; 0x2
        1e4a58:	33a00002 	movcc	r0, #2	; 0x2
        1e4a5c:	ea000000 	b	1e4a64 <TCodecChannel::InitNode(ChannelNode *)+0x118>
        1e4a60:	e3a00008 	mov	r0, #8	; 0x8
        1e4a64:	e1a01004 	mov	r1, r4
        1e4a68:	e5a60014 	str	r0, [r6, #20]!	; fField20
        1e4a6c:	e5a6a028 	str	sl, [r6, #40]!
        1e4a70:	e1a00005 	mov	r0, r5
        1e4a74:	eb666927 	bl	1b7ef18 <TCodecChannel::$InitCodecNodes(ChannelNode *)>
        1e4a78:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1e4a7c:	e1a0100d 	mov	r1, sp
        1e4a80:	e1a00009 	mov	r0, r9
        1e4a84:	eb66692f 	bl	1b7ef48 <$ConvertCodecBlock(SoundBlock *, CodecBlock *)>
        1e4a88:	e1a0100d 	mov	r1, sp
        1e4a8c:	e1a00008 	mov	r0, r8
        1e4a90:	eb66759e 	bl	1b82110 <$SafeCodecReset(TSoundCodec *, CodecBlock *)>
        1e4a94:	e1b07000 	movs	r7, r0
        1e4a98:	1a000002 	bne	1e4aa8 <TCodecChannel::InitNode(ChannelNode *)+0x15c>
        1e4a9c:	e1a00008 	mov	r0, r8
        1e4aa0:	eb66759d 	bl	1b8211c <$SafeCodecStart(TSoundCodec *)>
        1e4aa4:	e1a07000 	mov	r7, r0
        1e4aa8:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1e4aac:	e1a00007 	mov	r0, r7
        1e4ab0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCodecChannel::InitCodecNodes(ChannelNode *)
 * Address: 001e4ab4
 */
TCodecChannel::InitCodecNodes(ChannelNode *) {
    /*
        1e4ab4:	e1a0c00d 	mov	ip, sp
        1e4ab8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e4abc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e4ac0:	e1a05000 	mov	r5, r0
        1e4ac4:	e1a04001 	mov	r4, r1
        1e4ac8:	e3a0a000 	mov	sl, #0	; 0x0
        1e4acc:	eb666504 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e4ad0:	e1a08000 	mov	r8, r0
        1e4ad4:	e3a00000 	mov	r0, #0	; 0x0
        1e4ad8:	e3a01000 	mov	r1, #0	; 0x0
        1e4adc:	e0882100 	add	r2, r8, r0, lsl #2
        1e4ae0:	e2800001 	add	r0, r0, #1	; 0x1
        1e4ae4:	e3500008 	cmp	r0, #8	; 0x8
        1e4ae8:	e5a2101c 	str	r1, [r2, #28]!	; fField28
        1e4aec:	bafffffa 	blt	1e4adc <TCodecChannel::InitCodecNodes(ChannelNode *)+0x28>
        1e4af0:	e3a07000 	mov	r7, #0	; 0x0
        1e4af4:	e5980014 	ldr	r0, [r8, #20]	; fField20
        1e4af8:	e3500000 	cmp	r0, #0	; 0x0
        1e4afc:	9a00004a 	bls	1e4c2c <TCodecChannel::InitCodecNodes(ChannelNode *)+0x178>
        1e4b00:	e2849010 	add	r9, r4, #16	; 0x10
        1e4b04:	e3a00080 	mov	r0, #128	; 0x80
        1e4b08:	eb67a70a 	bl	1bce738 <$__nw(unsigned int)>
        1e4b0c:	e1b06000 	movs	r6, r0
        1e4b10:	0a000027 	beq	1e4bb4 <TCodecChannel::InitCodecNodes(ChannelNode *)+0x100>
        1e4b14:	e1a00006 	mov	r0, r6
        1e4b18:	eb67fdc6 	bl	1be4238 <TAEvent::$__ct(void)>
        1e4b1c:	e59f0110 	ldr	r0, [pc, #110]	; 1e4c34 <TCodecChannel::InitCodecNodes(ChannelNode *)+0x180>
        1e4b20:	e5860000 	str	r0, [r6]
        1e4b24:	e59f010c 	ldr	r0, [pc, #10c]	; 1e4c38 <TCodecChannel::InitCodecNodes(ChannelNode *)+0x184>
        1e4b28:	e3a01000 	mov	r1, #0	; 0x0
        1e4b2c:	e9860003 	stmib	r6, {r0, r1}
        1e4b30:	e586100c 	str	r1, [r6, #12]	; fField12
        1e4b34:	e5861010 	str	r1, [r6, #16]	; fField16
        1e4b38:	e5861014 	str	r1, [r6, #20]	; fField20
        1e4b3c:	e5861018 	str	r1, [r6, #24]	; fField24
        1e4b40:	e586101c 	str	r1, [r6, #28]	; fField28
        1e4b44:	e5861020 	str	r1, [r6, #32]
        1e4b48:	e59f00ec 	ldr	r0, [pc, #ec]	; 1e4c3c <TCodecChannel::InitCodecNodes(ChannelNode *)+0x188>
        1e4b4c:	e5860024 	str	r0, [r6, #36]	; fField36
        1e4b50:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        1e4b54:	e3a01000 	mov	r1, #0	; 0x0
        1e4b58:	e2866028 	add	r6, r6, #40	; 0x28
        1e4b5c:	e8860003 	stmia	r6, {r0, r1}
        1e4b60:	e5861008 	str	r1, [r6, #8]
        1e4b64:	e586100c 	str	r1, [r6, #12]	; fField12
        1e4b68:	e5860020 	str	r0, [r6, #32]
        1e4b6c:	e5861010 	str	r1, [r6, #16]	; fField16
        1e4b70:	e2466028 	sub	r6, r6, #40	; 0x28
        1e4b74:	e286004c 	add	r0, r6, #76	; 0x4c
        1e4b78:	eb67fdae 	bl	1be4238 <TAEvent::$__ct(void)>
        1e4b7c:	e59f00b0 	ldr	r0, [pc, #b0]	; 1e4c34 <TCodecChannel::InitCodecNodes(ChannelNode *)+0x180>
        1e4b80:	e586004c 	str	r0, [r6, #76]
        1e4b84:	e59f00ac 	ldr	r0, [pc, #ac]	; 1e4c38 <TCodecChannel::InitCodecNodes(ChannelNode *)+0x184>
        1e4b88:	e3a01000 	mov	r1, #0	; 0x0
        1e4b8c:	e2866050 	add	r6, r6, #80	; 0x50
        1e4b90:	e8860003 	stmia	r6, {r0, r1}
        1e4b94:	e5861008 	str	r1, [r6, #8]
        1e4b98:	e586100c 	str	r1, [r6, #12]	; fField12
        1e4b9c:	e5861010 	str	r1, [r6, #16]	; fField16
        1e4ba0:	e5861014 	str	r1, [r6, #20]	; fField20
        1e4ba4:	e5861018 	str	r1, [r6, #24]	; fField24
        1e4ba8:	e2466050 	sub	r6, r6, #80	; 0x50
        1e4bac:	e286006c 	add	r0, r6, #108	; 0x6c
        1e4bb0:	eb67a2bd 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        1e4bb4:	e1a00006 	mov	r0, r6
        1e4bb8:	e0881107 	add	r1, r8, r7, lsl #2
        1e4bbc:	e5a1601c 	str	r6, [r1, #28]!	; fField28
        1e4bc0:	e59f106c 	ldr	r1, [pc, #6c]	; 1e4c34 <TCodecChannel::InitCodecNodes(ChannelNode *)+0x180>
        1e4bc4:	e5861000 	str	r1, [r6]
        1e4bc8:	e59f1068 	ldr	r1, [pc, #68]	; 1e4c38 <TCodecChannel::InitCodecNodes(ChannelNode *)+0x184>
        1e4bcc:	e5861004 	str	r1, [r6, #4]	; fField4
        1e4bd0:	e3a0100d 	mov	r1, #13	; 0xd
        1e4bd4:	e586100c 	str	r1, [r6, #12]	; fField12
        1e4bd8:	e5951200 	ldr	r1, [r5, #512]	; fField512
        1e4bdc:	e280e014 	add	lr, r0, #20	; 0x14
        1e4be0:	e5861008 	str	r1, [r6, #8]
        1e4be4:	e1a06009 	mov	r6, r9
        1e4be8:	e8b6100e 	ldmia	r6!, {r1, r2, r3, ip}
        1e4bec:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        1e4bf0:	e8b6100e 	ldmia	r6!, {r1, r2, r3, ip}
        1e4bf4:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        1e4bf8:	e896104e 	ldmia	r6, {r1, r2, r3, r6, ip}
        1e4bfc:	e88e104e 	stmia	lr, {r1, r2, r3, r6, ip}
        1e4c00:	e5941054 	ldr	r1, [r4, #84]
        1e4c04:	e5801048 	str	r1, [r0, #72]
        1e4c08:	e3a01000 	mov	r1, #0	; 0x0
        1e4c0c:	e5801014 	str	r1, [r0, #20]	; fField20
        1e4c10:	e5941008 	ldr	r1, [r4, #8]
        1e4c14:	e5a01010 	str	r1, [r0, #16]!	; fField16
        1e4c18:	e5a0706c 	str	r7, [r0, #108]!
        1e4c1c:	e2877001 	add	r7, r7, #1	; 0x1
        1e4c20:	e5980014 	ldr	r0, [r8, #20]	; fField20
        1e4c24:	e1500007 	cmp	r0, r7
        1e4c28:	8affffb5 	bhi	1e4b04 <TCodecChannel::InitCodecNodes(ChannelNode *)+0x50>
        1e4c2c:	e1a0000a 	mov	r0, sl
        1e4c30:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1e4c34:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1e4c38:	75736e64 	ldrvcb	r6, [r3, -#3684]!
        1e4c3c:	560a6e85 	strpl	r6, [sl], -r5, lsl #29
    */
}

/**
 * Symbol: TCodecChannel::DeleteCodecNodes(ChannelNode *)
 * Address: 001e4c40
 */
TCodecChannel::DeleteCodecNodes(ChannelNode *) {
    /*
        1e4c40:	e1a0c00d 	mov	ip, sp
        1e4c44:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1e4c48:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e4c4c:	e3a08000 	mov	r8, #0	; 0x0
        1e4c50:	eb6664a3 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e4c54:	e1a05000 	mov	r5, r0
        1e4c58:	e3a04000 	mov	r4, #0	; 0x0
        1e4c5c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1e4c60:	e3500000 	cmp	r0, #0	; 0x0
        1e4c64:	9a000017 	bls	1e4cc8 <TCodecChannel::DeleteCodecNodes(ChannelNode *)+0x88>
        1e4c68:	e3a09000 	mov	r9, #0	; 0x0
        1e4c6c:	e0856104 	add	r6, r5, r4, lsl #2
        1e4c70:	e596701c 	ldr	r7, [r6, #28]	; fField28
        1e4c74:	e5970014 	ldr	r0, [r7, #20]	; fField20
        1e4c78:	e3300000 	teq	r0, #0	; 0x0
        1e4c7c:	0a000004 	beq	1e4c94 <TCodecChannel::DeleteCodecNodes(ChannelNode *)+0x54>
        1e4c80:	eb67b734 	bl	1bd2958 <$free>
        1e4c84:	e5879014 	str	r9, [r7, #20]	; fField20
        1e4c88:	e287006c 	add	r0, r7, #108	; 0x6c
        1e4c8c:	eb67a6ae 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
        1e4c90:	e1a08000 	mov	r8, r0
        1e4c94:	e596701c 	ldr	r7, [r6, #28]	; fField28
        1e4c98:	e3370000 	teq	r7, #0	; 0x0
        1e4c9c:	0a000004 	beq	1e4cb4 <TCodecChannel::DeleteCodecNodes(ChannelNode *)+0x74>
        1e4ca0:	e287006c 	add	r0, r7, #108	; 0x6c
        1e4ca4:	e3a01000 	mov	r1, #0	; 0x0
        1e4ca8:	eb67a698 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1e4cac:	e1a00007 	mov	r0, r7
        1e4cb0:	eb67a28a 	bl	1bcd6e0 <$__dl(void *)>
        1e4cb4:	e2844001 	add	r4, r4, #1	; 0x1
        1e4cb8:	e5a6901c 	str	r9, [r6, #28]!	; fField28
        1e4cbc:	e5950014 	ldr	r0, [r5, #20]	; fField20
        1e4cc0:	e1500004 	cmp	r0, r4
        1e4cc4:	8affffe8 	bhi	1e4c6c <TCodecChannel::DeleteCodecNodes(ChannelNode *)+0x2c>
        1e4cc8:	e1a00008 	mov	r0, r8
        1e4ccc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TCodecChannel::DecompressLoop(void)
 * Address: 001e4cd0
 */
TCodecChannel::DecompressLoop(void) {
    /*
        1e4cd0:	e1a0c00d 	mov	ip, sp
        1e4cd4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e4cd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e4cdc:	e1a04000 	mov	r4, r0
        1e4ce0:	e24dd038 	sub	sp, sp, #56	; 0x38
        1e4ce4:	e3a07000 	mov	r7, #0	; 0x0
        1e4ce8:	e2800f7a 	add	r0, r0, #488	; 0x1e8
        1e4cec:	e1a09000 	mov	r9, r0
        1e4cf0:	e3a01000 	mov	r1, #0	; 0x0
        1e4cf4:	eb67a696 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1e4cf8:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e4cfc:	e3c00002 	bic	r0, r0, #2	; 0x2
        1e4d00:	e58401e4 	str	r0, [r4, #484]	; fField484
        1e4d04:	e59fa004 	ldr	sl, [pc, #4]	; 1e4d10 <TCodecChannel::DecompressLoop(void)+0x40>	; fField4
        1e4d08:	e3a08000 	mov	r8, #0	; 0x0
        1e4d0c:	ea00005a 	b	1e4e7c <TCodecChannel::DecompressLoop(void)+0x1ac>
        1e4d10:	ffffd8db 	swinv	0x00ffd8db
        1e4d14:	e1a06001 	mov	r6, r1
        1e4d18:	e1a00004 	mov	r0, r4
        1e4d1c:	eb666470 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e4d20:	e1a05000 	mov	r5, r0
        1e4d24:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1e4d28:	e3300000 	teq	r0, #0	; 0x0
        1e4d2c:	0a000028 	beq	1e4dd4 <TCodecChannel::DecompressLoop(void)+0x104>
        1e4d30:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e4d34:	e3100001 	tst	r0, #1	; 0x1
        1e4d38:	1a000025 	bne	1e4dd4 <TCodecChannel::DecompressLoop(void)+0x104>
        1e4d3c:	e28dd034 	add	sp, sp, #52	; 0x34
        1e4d40:	e286e044 	add	lr, r6, #68	; 0x44
        1e4d44:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        1e4d48:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        1e4d4c:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        1e4d50:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        1e4d54:	e91e500e 	ldmdb	lr, {r1, r2, r3, ip, lr}
        1e4d58:	e92d500e 	stmdb	sp!, {r1, r2, r3, ip, lr}
        1e4d5c:	e1a0300d 	mov	r3, sp
        1e4d60:	e28d2034 	add	r2, sp, #52	; 0x34
        1e4d64:	e1a01006 	mov	r1, r6
        1e4d68:	e1a00004 	mov	r0, r4
        1e4d6c:	eb66686d 	bl	1b7ef28 <TCodecChannel::$FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)>
        1e4d70:	e3300000 	teq	r0, #0	; 0x0
        1e4d74:	1a000039 	bne	1e4e60 <TCodecChannel::DecompressLoop(void)+0x190>
        1e4d78:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1e4d7c:	e1a06001 	mov	r6, r1
        1e4d80:	e1a00004 	mov	r0, r4
        1e4d84:	eb666456 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e4d88:	e1a05000 	mov	r5, r0
        1e4d8c:	e59d2034 	ldr	r2, [sp, #52]
        1e4d90:	e3320000 	teq	r2, #0	; 0x0
        1e4d94:	0a00000e 	beq	1e4dd4 <TCodecChannel::DecompressLoop(void)+0x104>
        1e4d98:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e4d9c:	e3100001 	tst	r0, #1	; 0x1
        1e4da0:	1a00000b 	bne	1e4dd4 <TCodecChannel::DecompressLoop(void)+0x104>
        1e4da4:	e1a0300d 	mov	r3, sp
        1e4da8:	e1a01006 	mov	r1, r6
        1e4dac:	e1a00004 	mov	r0, r4
        1e4db0:	eb66685f 	bl	1b7ef34 <TCodecChannel::$ScheduleDMA(ChannelNode *, int, SoundBlock *)>
        1e4db4:	e3300000 	teq	r0, #0	; 0x0
        1e4db8:	1a000028 	bne	1e4e60 <TCodecChannel::DecompressLoop(void)+0x190>
        1e4dbc:	e5950018 	ldr	r0, [r5, #24]	; fField24
        1e4dc0:	e2800001 	add	r0, r0, #1	; 0x1
        1e4dc4:	e5850018 	str	r0, [r5, #24]	; fField24
        1e4dc8:	e5951014 	ldr	r1, [r5, #20]	; fField20
        1e4dcc:	e1500001 	cmp	r0, r1
        1e4dd0:	25858018 	strcs	r8, [r5, #24]	; fField24
        1e4dd4:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e4dd8:	e3100002 	tst	r0, #2	; 0x2
        1e4ddc:	1a000008 	bne	1e4e04 <TCodecChannel::DecompressLoop(void)+0x134>
        1e4de0:	e3360000 	teq	r6, #0	; 0x0
        1e4de4:	0a000003 	beq	1e4df8 <TCodecChannel::DecompressLoop(void)+0x128>
        1e4de8:	e59421f4 	ldr	r2, [r4, #500]	; fField500
        1e4dec:	e5951014 	ldr	r1, [r5, #20]	; fField20
        1e4df0:	e1520001 	cmp	r2, r1
        1e4df4:	3a000002 	bcc	1e4e04 <TCodecChannel::DecompressLoop(void)+0x134>
        1e4df8:	e3100001 	tst	r0, #1	; 0x1
        1e4dfc:	01a00004 	moveq	r0, r4
        1e4e00:	0b66684c 	bleq	1b7ef38 <TCodecChannel::$SendStart(void)>
        1e4e04:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e4e08:	e3100002 	tst	r0, #2	; 0x2
        1e4e0c:	0a000015 	beq	1e4e68 <TCodecChannel::DecompressLoop(void)+0x198>
        1e4e10:	e3100001 	tst	r0, #1	; 0x1
        1e4e14:	1a000013 	bne	1e4e68 <TCodecChannel::DecompressLoop(void)+0x198>
        1e4e18:	e59401f4 	ldr	r0, [r4, #500]	; fField500
        1e4e1c:	e3300000 	teq	r0, #0	; 0x0
        1e4e20:	0a00001e 	beq	1e4ea0 <TCodecChannel::DecompressLoop(void)+0x1d0>
        1e4e24:	e24dd004 	sub	sp, sp, #4	; 0x4
        1e4e28:	e1a0100d 	mov	r1, sp
        1e4e2c:	e1a00004 	mov	r0, r4
        1e4e30:	eb66683d 	bl	1b7ef2c <TCodecChannel::$GetBufferTimeout(unsigned long *)>
        1e4e34:	e1a00004 	mov	r0, r4
        1e4e38:	e59d1000 	ldr	r1, [sp]
        1e4e3c:	eb66683b 	bl	1b7ef30 <TCodecChannel::$WaitForNextBuffer(unsigned long)>
        1e4e40:	e28dd004 	add	sp, sp, #4	; 0x4
        1e4e44:	e5941014 	ldr	r1, [r4, #20]	; fField20
        1e4e48:	e3110008 	tst	r1, #8	; 0x8
        1e4e4c:	0a000001 	beq	1e4e58 <TCodecChannel::DecompressLoop(void)+0x188>
        1e4e50:	e130000a 	teq	r0, sl
        1e4e54:	0afffff2 	beq	1e4e24 <TCodecChannel::DecompressLoop(void)+0x154>
        1e4e58:	e3300000 	teq	r0, #0	; 0x0
        1e4e5c:	0a000001 	beq	1e4e68 <TCodecChannel::DecompressLoop(void)+0x198>
        1e4e60:	e3a07001 	mov	r7, #1	; 0x1
        1e4e64:	ea00000d 	b	1e4ea0 <TCodecChannel::DecompressLoop(void)+0x1d0>
        1e4e68:	e3350000 	teq	r5, #0	; 0x0
        1e4e6c:	15d5000c 	ldrneb	r0, [r5, #12]	; fField12
        1e4e70:	13300000 	teqne	r0, #0	; 0x0
        1e4e74:	11a00004 	movne	r0, r4
        1e4e78:	1b666414 	blne	1b7ded0 <TCodecChannel::$GetNextNode(void)>
        1e4e7c:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1e4e80:	e3310000 	teq	r1, #0	; 0x0
        1e4e84:	1a000002 	bne	1e4e94 <TCodecChannel::DecompressLoop(void)+0x1c4>
        1e4e88:	e59401f4 	ldr	r0, [r4, #500]	; fField500
        1e4e8c:	e3500000 	cmp	r0, #0	; 0x0
        1e4e90:	9a000002 	bls	1e4ea0 <TCodecChannel::DecompressLoop(void)+0x1d0>
        1e4e94:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e4e98:	e3100001 	tst	r0, #1	; 0x1
        1e4e9c:	0affff9c 	beq	1e4d14 <TCodecChannel::DecompressLoop(void)+0x44>
        1e4ea0:	e59411e4 	ldr	r1, [r4, #484]	; fField484
        1e4ea4:	e3110001 	tst	r1, #1	; 0x1
        1e4ea8:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        1e4eac:	13300000 	teqne	r0, #0	; 0x0
        1e4eb0:	0a000005 	beq	1e4ecc <TCodecChannel::DecompressLoop(void)+0x1fc>
        1e4eb4:	e5902008 	ldr	r2, [r0, #8]
        1e4eb8:	e5842210 	str	r2, [r4, #528]	; fField528
        1e4ebc:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1e4ec0:	e5840214 	str	r0, [r4, #532]	; fField532
        1e4ec4:	e3810004 	orr	r0, r1, #4	; 0x4
        1e4ec8:	e58401e4 	str	r0, [r4, #484]	; fField484
        1e4ecc:	e1a01007 	mov	r1, r7
        1e4ed0:	e1a00004 	mov	r0, r4
        1e4ed4:	eb66681a 	bl	1b7ef44 <TCodecChannel::$Abort(unsigned char)>
        1e4ed8:	e1a00009 	mov	r0, r9
        1e4edc:	eb67d36d 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1e4ee0:	e58481e4 	str	r8, [r4, #484]	; fField484
        1e4ee4:	e5a481f4 	str	r8, [r4, #500]!	; fField500
        1e4ee8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCodecChannel::GetNodeBuffer(ChannelNode *, void **)
 * Address: 001e4f60
 */
TCodecChannel::GetNodeBuffer(ChannelNode *, void **) {
    /*
        1e4f60:	e1a0c00d 	mov	ip, sp
        1e4f64:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e4f68:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e4f6c:	e1a05000 	mov	r5, r0
        1e4f70:	e1a04002 	mov	r4, r2
        1e4f74:	e3a06000 	mov	r6, #0	; 0x0
        1e4f78:	eb6663d9 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e4f7c:	e5901018 	ldr	r1, [r0, #24]	; fField24
        1e4f80:	e0801101 	add	r1, r0, r1, lsl #2
        1e4f84:	e5b1801c 	ldr	r8, [r1, #28]!	; fField28
        1e4f88:	e5987014 	ldr	r7, [r8, #20]	; fField20
        1e4f8c:	e3370000 	teq	r7, #0	; 0x0
        1e4f90:	1a000010 	bne	1e4fd8 <TCodecChannel::GetNodeBuffer(ChannelNode *, void **)+0x78>
        1e4f94:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1e4f98:	eb67c6f2 	bl	1bd6b68 <$malloc>
        1e4f9c:	e1b07000 	movs	r7, r0
        1e4fa0:	1a000001 	bne	1e4fac <TCodecChannel::GetNodeBuffer(ChannelNode *, void **)+0x4c>
        1e4fa4:	eb67f45d 	bl	1be2120 <$MemError>
        1e4fa8:	ea000009 	b	1e4fd4 <TCodecChannel::GetNodeBuffer(ChannelNode *, void **)+0x74>
        1e4fac:	e5887014 	str	r7, [r8, #20]	; fField20
        1e4fb0:	e288006c 	add	r0, r8, #108	; 0x6c
        1e4fb4:	e1a08000 	mov	r8, r0
        1e4fb8:	e3a01001 	mov	r1, #1	; 0x1
        1e4fbc:	eb67c2b4 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        1e4fc0:	e1b06000 	movs	r6, r0
        1e4fc4:	1a000003 	bne	1e4fd8 <TCodecChannel::GetNodeBuffer(ChannelNode *, void **)+0x78>
        1e4fc8:	e1a00008 	mov	r0, r8
        1e4fcc:	e5b511f8 	ldr	r1, [r5, #504]!	; fField504
        1e4fd0:	eb67db6e 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1e4fd4:	e1a06000 	mov	r6, r0
        1e4fd8:	e3340000 	teq	r4, #0	; 0x0
        1e4fdc:	15847000 	strne	r7, [r4]
        1e4fe0:	e1a00006 	mov	r0, r6
        1e4fe4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)
 * Address: 001e4fe8
 */
TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *) {
    /*
        1e4fe8:	e1a0c00d 	mov	ip, sp
        1e4fec:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e4ff0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e4ff4:	e1a06000 	mov	r6, r0
        1e4ff8:	e1a04001 	mov	r4, r1
        1e4ffc:	e1a05002 	mov	r5, r2
        1e5000:	e1a07003 	mov	r7, r3
        1e5004:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1e5008:	eb6663b5 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e500c:	e1a09000 	mov	r9, r0
        1e5010:	e1a01004 	mov	r1, r4
        1e5014:	e1a00006 	mov	r0, r6
        1e5018:	eb6663b5 	bl	1b7def4 <TCodecChannel::$GetCodec(ChannelNode *)>
        1e501c:	e1a0a000 	mov	sl, r0
        1e5020:	e3a00000 	mov	r0, #0	; 0x0
        1e5024:	e52d0008 	str	r0, [sp, -#8]!
        1e5028:	e28d2004 	add	r2, sp, #4	; 0x4
        1e502c:	e1a01004 	mov	r1, r4
        1e5030:	e1a00006 	mov	r0, r6
        1e5034:	eb6667ba 	bl	1b7ef24 <TCodecChannel::$GetNodeBuffer(ChannelNode *, void **)>
        1e5038:	e1b08000 	movs	r8, r0
        1e503c:	1a000051 	bne	1e5188 <TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x1a0>
        1e5040:	e5990010 	ldr	r0, [r9, #16]	; fField16
        1e5044:	e28d1008 	add	r1, sp, #8	; 0x8
        1e5048:	e5850000 	str	r0, [r5]
        1e504c:	e1a00007 	mov	r0, r7
        1e5050:	eb6667bc 	bl	1b7ef48 <$ConvertCodecBlock(SoundBlock *, CodecBlock *)>
        1e5054:	e28d3008 	add	r3, sp, #8	; 0x8
        1e5058:	e92d0008 	stmdb	sp!, {r3}
        1e505c:	e28d3004 	add	r3, sp, #4	; 0x4
        1e5060:	e1a02005 	mov	r2, r5
        1e5064:	e1a0000a 	mov	r0, sl
        1e5068:	e59d1008 	ldr	r1, [sp, #8]
        1e506c:	eb667428 	bl	1b82114 <$SafeCodecProduce__FP11TSoundCodecPvPUlT3P10CodecBlock>
        1e5070:	e28dd004 	add	sp, sp, #4	; 0x4
        1e5074:	e1b08000 	movs	r8, r0
        1e5078:	1a000042 	bne	1e5188 <TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x1a0>
        1e507c:	e5990010 	ldr	r0, [r9, #16]	; fField16
        1e5080:	e5951000 	ldr	r1, [r5]
        1e5084:	e1500001 	cmp	r0, r1
        1e5088:	8a000003 	bhi	1e509c <TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0xb4>
        1e508c:	e1a0000a 	mov	r0, sl
        1e5090:	eb66637c 	bl	1b7de88 <TSoundCodec::$BufferCompleted(void)>
        1e5094:	e3300000 	teq	r0, #0	; 0x0
        1e5098:	0a000001 	beq	1e50a4 <TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0xbc>
        1e509c:	e3a00001 	mov	r0, #1	; 0x1
        1e50a0:	ea000000 	b	1e50a8 <TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0xc0>
        1e50a4:	e3a00000 	mov	r0, #0	; 0x0
        1e50a8:	e5c9000c 	strb	r0, [r9, #12]	; fField12
        1e50ac:	e5950000 	ldr	r0, [r5]
        1e50b0:	e3300000 	teq	r0, #0	; 0x0
        1e50b4:	1a000029 	bne	1e5160 <TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x178>
        1e50b8:	e1a00006 	mov	r0, r6
        1e50bc:	eb666383 	bl	1b7ded0 <TCodecChannel::$GetNextNode(void)>
        1e50c0:	e1b04000 	movs	r4, r0
        1e50c4:	0a000025 	beq	1e5160 <TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x178>
        1e50c8:	e28d2004 	add	r2, sp, #4	; 0x4
        1e50cc:	e1a01004 	mov	r1, r4
        1e50d0:	e1a00006 	mov	r0, r6
        1e50d4:	eb666792 	bl	1b7ef24 <TCodecChannel::$GetNodeBuffer(ChannelNode *, void **)>
        1e50d8:	e1b08000 	movs	r8, r0
        1e50dc:	1a000029 	bne	1e5188 <TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x1a0>
        1e50e0:	e1a01004 	mov	r1, r4
        1e50e4:	e1a00006 	mov	r0, r6
        1e50e8:	eb66637d 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e50ec:	e1a09000 	mov	r9, r0
        1e50f0:	e1a01004 	mov	r1, r4
        1e50f4:	e1a00006 	mov	r0, r6
        1e50f8:	eb66637d 	bl	1b7def4 <TCodecChannel::$GetCodec(ChannelNode *)>
        1e50fc:	e1a06000 	mov	r6, r0
        1e5100:	e5990010 	ldr	r0, [r9, #16]	; fField16
        1e5104:	e28d3008 	add	r3, sp, #8	; 0x8
        1e5108:	e5850000 	str	r0, [r5]
        1e510c:	e92d0008 	stmdb	sp!, {r3}
        1e5110:	e28d3004 	add	r3, sp, #4	; 0x4
        1e5114:	e1a02005 	mov	r2, r5
        1e5118:	e1a00006 	mov	r0, r6
        1e511c:	e59d1008 	ldr	r1, [sp, #8]
        1e5120:	eb6673fb 	bl	1b82114 <$SafeCodecProduce__FP11TSoundCodecPvPUlT3P10CodecBlock>
        1e5124:	e28dd004 	add	sp, sp, #4	; 0x4
        1e5128:	e1b08000 	movs	r8, r0
        1e512c:	1a000015 	bne	1e5188 <TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x1a0>
        1e5130:	e5990010 	ldr	r0, [r9, #16]	; fField16
        1e5134:	e5951000 	ldr	r1, [r5]
        1e5138:	e1500001 	cmp	r0, r1
        1e513c:	8a000003 	bhi	1e5150 <TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x168>
        1e5140:	e1a00006 	mov	r0, r6
        1e5144:	eb66634f 	bl	1b7de88 <TSoundCodec::$BufferCompleted(void)>
        1e5148:	e3300000 	teq	r0, #0	; 0x0
        1e514c:	0a000001 	beq	1e5158 <TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x170>
        1e5150:	e3a00001 	mov	r0, #1	; 0x1
        1e5154:	ea000000 	b	1e515c <TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x174>
        1e5158:	e3a00000 	mov	r0, #0	; 0x0
        1e515c:	e5c9000c 	strb	r0, [r9, #12]	; fField12
        1e5160:	e5950000 	ldr	r0, [r5]
        1e5164:	e3500000 	cmp	r0, #0	; 0x0
        1e5168:	9a000006 	bls	1e5188 <TCodecChannel::FillDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x1a0>
        1e516c:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1e5170:	e59d0000 	ldr	r0, [sp]
        1e5174:	e0810000 	add	r0, r1, r0
        1e5178:	e1a01007 	mov	r1, r7
        1e517c:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        1e5180:	e28d0008 	add	r0, sp, #8	; 0x8
        1e5184:	eb666770 	bl	1b7ef4c <$ConvertCodecBlock(CodecBlock *, SoundBlock *)>
        1e5188:	e1a00008 	mov	r0, r8
        1e518c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCodecChannel::GetBufferTimeout(unsigned long *)
 * Address: 001e5190
 */
TCodecChannel::GetBufferTimeout(unsigned long *) {
    /*
        1e5190:	e1a0c00d 	mov	ip, sp
        1e5194:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e5198:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e519c:	e1a04001 	mov	r4, r1
        1e51a0:	e3a01000 	mov	r1, #0	; 0x0
        1e51a4:	e5841000 	str	r1, [r4]
        1e51a8:	e59011e0 	ldr	r1, [r0, #480]	; fField480
        1e51ac:	e3310000 	teq	r1, #0	; 0x0
        1e51b0:	0590100c 	ldreq	r1, [r0, #12]	; fField12
        1e51b4:	e3310000 	teq	r1, #0	; 0x0
        1e51b8:	0a00000c 	beq	1e51f0 <TCodecChannel::GetBufferTimeout(unsigned long *)+0x60>
        1e51bc:	eb666348 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e51c0:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1e51c4:	e5b01024 	ldr	r1, [r0, #36]!	; fField36
        1e51c8:	e5b0500c 	ldr	r5, [r0, #12]!	; fField12
        1e51cc:	e3a00ffa 	mov	r0, #1000	; 0x3e8
        1e51d0:	eb6735da 	bl	1bb2940 <$__rt_sdiv>
        1e51d4:	e1a00820 	mov	r0, r0, lsr #16
        1e51d8:	e1a01005 	mov	r1, r5
        1e51dc:	eb6735d9 	bl	1bb2948 <$__rt_udiv>
        1e51e0:	e3a0c066 	mov	ip, #102	; 0x66
        1e51e4:	e28ccc0e 	add	ip, ip, #3584	; 0xe00
        1e51e8:	e000009c 	mul	r0, ip, r0
        1e51ec:	e5840000 	str	r0, [r4]
        1e51f0:	e5940000 	ldr	r0, [r4]
        1e51f4:	e2400e32 	sub	r0, r0, #800	; 0x320
        1e51f8:	e28009c2 	add	r0, r0, #3178496	; 0x308000
        1e51fc:	e2800501 	add	r0, r0, #4194304	; 0x400000
        1e5200:	e5840000 	str	r0, [r4]
        1e5204:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCodecChannel::WaitForNextBuffer(unsigned long)
 * Address: 001e5208
 */
TCodecChannel::WaitForNextBuffer(unsigned long) {
    /*
        1e5208:	e1a0c00d 	mov	ip, sp
        1e520c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e5210:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e5214:	e1a04000 	mov	r4, r0
        1e5218:	e1a05001 	mov	r5, r1
        1e521c:	e24dd024 	sub	sp, sp, #36	; 0x24
        1e5220:	e28d0004 	add	r0, sp, #4	; 0x4
        1e5224:	eb67fc03 	bl	1be4238 <TAEvent::$__ct(void)>
        1e5228:	e59f0148 	ldr	r0, [pc, #148]	; 1e5378 <TCodecChannel::WaitForNextBuffer(unsigned long)+0x170>
        1e522c:	e58d0004 	str	r0, [sp, #4]	; fField4
        1e5230:	e59f0144 	ldr	r0, [pc, #144]	; 1e537c <TCodecChannel::WaitForNextBuffer(unsigned long)+0x174>
        1e5234:	e3a07000 	mov	r7, #0	; 0x0
        1e5238:	e58d0008 	str	r0, [sp, #8]
        1e523c:	e58d700c 	str	r7, [sp, #12]	; fField12
        1e5240:	e58d7010 	str	r7, [sp, #16]	; fField16
        1e5244:	e58d7014 	str	r7, [sp, #20]	; fField20
        1e5248:	e58d7018 	str	r7, [sp, #24]	; fField24
        1e524c:	e58d701c 	str	r7, [sp, #28]	; fField28
        1e5250:	e3a06000 	mov	r6, #0	; 0x0
        1e5254:	e58d7020 	str	r7, [sp, #32]
        1e5258:	e59401f4 	ldr	r0, [r4, #500]	; fField500
        1e525c:	e3500000 	cmp	r0, #0	; 0x0
        1e5260:	9a000042 	bls	1e5370 <TCodecChannel::WaitForNextBuffer(unsigned long)+0x168>
        1e5264:	e24dd014 	sub	sp, sp, #20	; 0x14
        1e5268:	e58d7004 	str	r7, [sp, #4]	; fField4
        1e526c:	e58d7010 	str	r7, [sp, #16]	; fField16
        1e5270:	e58d7008 	str	r7, [sp, #8]
        1e5274:	e3a03000 	mov	r3, #0	; 0x0
        1e5278:	e3a02000 	mov	r2, #0	; 0x0
        1e527c:	e3e01000 	mvn	r1, #0	; 0x0
        1e5280:	e1a00005 	mov	r0, r5
        1e5284:	e58d700c 	str	r7, [sp, #12]	; fField12
        1e5288:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1e528c:	e28d3010 	add	r3, sp, #16	; 0x10
        1e5290:	e28d2014 	add	r2, sp, #20	; 0x14
        1e5294:	e92d000c 	stmdb	sp!, {r2, r3}
        1e5298:	e2840f7e 	add	r0, r4, #504	; 0x1f8
        1e529c:	e28d2030 	add	r2, sp, #48	; 0x30
        1e52a0:	e28d102c 	add	r1, sp, #44	; 0x2c
        1e52a4:	e3a03020 	mov	r3, #32	; 0x20
        1e52a8:	eb67ce62 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
        1e52ac:	e28dd018 	add	sp, sp, #24	; 0x18
        1e52b0:	e1b06000 	movs	r6, r0
        1e52b4:	1a000013 	bne	1e5308 <TCodecChannel::WaitForNextBuffer(unsigned long)+0x100>
        1e52b8:	e59d0000 	ldr	r0, [sp]
        1e52bc:	e3100402 	tst	r0, #33554432	; 0x2000000
        1e52c0:	159d0008 	ldrne	r0, [sp, #8]
        1e52c4:	13300000 	teqne	r0, #0	; 0x0
        1e52c8:	0a000010 	beq	1e5310 <TCodecChannel::WaitForNextBuffer(unsigned long)+0x108>
        1e52cc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1e52d0:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        1e52d4:	e5cd7008 	strb	r7, [sp, #8]
        1e52d8:	e58d0004 	str	r0, [sp, #4]	; fField4
        1e52dc:	e28d0024 	add	r0, sp, #36	; 0x24
        1e52e0:	e58d0000 	str	r0, [sp]
        1e52e4:	e1a0200d 	mov	r2, sp
        1e52e8:	e28d1020 	add	r1, sp, #32	; 0x20
        1e52ec:	e28d0004 	add	r0, sp, #4	; 0x4
        1e52f0:	eb67bdd0 	bl	1bd4a38 <TUSharedMem::$GetSize(unsigned long *, void **)>
        1e52f4:	e1a06000 	mov	r6, r0
        1e52f8:	e28d0004 	add	r0, sp, #4	; 0x4
        1e52fc:	e3a01000 	mov	r1, #0	; 0x0
        1e5300:	eb67a507 	bl	1bce724 <TUObject::$__dt(void)>
        1e5304:	e28dd00c 	add	sp, sp, #12	; 0xc
        1e5308:	e3360000 	teq	r6, #0	; 0x0
        1e530c:	1a000016 	bne	1e536c <TCodecChannel::WaitForNextBuffer(unsigned long)+0x164>
        1e5310:	e59d6024 	ldr	r6, [sp, #36]	; fField36
        1e5314:	e3360000 	teq	r6, #0	; 0x0
        1e5318:	1a000013 	bne	1e536c <TCodecChannel::WaitForNextBuffer(unsigned long)+0x164>
        1e531c:	e59451e0 	ldr	r5, [r4, #480]	; fField480
        1e5320:	e3350000 	teq	r5, #0	; 0x0
        1e5324:	0594500c 	ldreq	r5, [r4, #12]	; fField12
        1e5328:	e3350000 	teq	r5, #0	; 0x0
        1e532c:	0a00000e 	beq	1e536c <TCodecChannel::WaitForNextBuffer(unsigned long)+0x164>
        1e5330:	e59401f4 	ldr	r0, [r4, #500]	; fField500
        1e5334:	e2400001 	sub	r0, r0, #1	; 0x1
        1e5338:	e1a01005 	mov	r1, r5
        1e533c:	e58401f4 	str	r0, [r4, #500]	; fField500
        1e5340:	e1a00004 	mov	r0, r4
        1e5344:	eb6662ec 	bl	1b7defc <TCodecChannel::$GetNodeRefCount(ChannelNode *)>
        1e5348:	e2402001 	sub	r2, r0, #1	; 0x1
        1e534c:	e1a07002 	mov	r7, r2
        1e5350:	e1a01005 	mov	r1, r5
        1e5354:	e1a00004 	mov	r0, r4
        1e5358:	eb6666e8 	bl	1b7ef00 <TCodecChannel::$SetNodeRefCount(ChannelNode *, long)>
        1e535c:	e3370000 	teq	r7, #0	; 0x0
        1e5360:	01a01005 	moveq	r1, r5
        1e5364:	01a00004 	moveq	r0, r4
        1e5368:	0b6662db 	bleq	1b7dedc <TCodecChannel::$ReleaseNode(ChannelNode *)>
        1e536c:	e28dd014 	add	sp, sp, #20	; 0x14
        1e5370:	e1a00006 	mov	r0, r6
        1e5374:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1e5378:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1e537c:	75736e64 	ldrvcb	r6, [r3, -#3684]!
    */
}

/**
 * Symbol: TCodecChannel::ScheduleDMA(ChannelNode *, int, SoundBlock *)
 * Address: 001e5380
 */
TCodecChannel::ScheduleDMA(ChannelNode *, int, SoundBlock *) {
    /*
        1e5380:	e1a0c00d 	mov	ip, sp
        1e5384:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e5388:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e538c:	e1a04000 	mov	r4, r0
        1e5390:	e1a05001 	mov	r5, r1
        1e5394:	e1a08002 	mov	r8, r2
        1e5398:	e1a07003 	mov	r7, r3
        1e539c:	eb6662d0 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e53a0:	e5901018 	ldr	r1, [r0, #24]	; fField24
        1e53a4:	e0800101 	add	r0, r0, r1, lsl #2
        1e53a8:	e5b0601c 	ldr	r6, [r0, #28]!	; fField28
        1e53ac:	e5970010 	ldr	r0, [r7, #16]	; fField16
        1e53b0:	e5860024 	str	r0, [r6, #36]	; fField36
        1e53b4:	e597000c 	ldr	r0, [r7, #12]	; fField12
        1e53b8:	e5860020 	str	r0, [r6, #32]
        1e53bc:	e5970008 	ldr	r0, [r7, #8]
        1e53c0:	e586001c 	str	r0, [r6, #28]	; fField28
        1e53c4:	e5b70008 	ldr	r0, [r7, #8]!
        1e53c8:	e3500000 	cmp	r0, #0	; 0x0
        1e53cc:	b2800007 	addlt	r0, r0, #7	; 0x7
        1e53d0:	e1a001c0 	mov	r0, r0, asr #3
        1e53d4:	e1a01008 	mov	r1, r8
        1e53d8:	eb673558 	bl	1bb2940 <$__rt_sdiv>
        1e53dc:	e5860030 	str	r0, [r6, #48]
        1e53e0:	e59f008c 	ldr	r0, [pc, #8c]	; 1e5474 <TCodecChannel::ScheduleDMA(ChannelNode *, int, SoundBlock *)+0xf4>
        1e53e4:	e286c06c 	add	ip, r6, #108	; 0x6c
        1e53e8:	e590e000 	ldr	lr, [r0]
        1e53ec:	e286004c 	add	r0, r6, #76	; 0x4c
        1e53f0:	e3a01020 	mov	r1, #32	; 0x20
        1e53f4:	e3a02000 	mov	r2, #0	; 0x0
        1e53f8:	e3a03000 	mov	r3, #0	; 0x0
        1e53fc:	e3a07000 	mov	r7, #0	; 0x0
        1e5400:	e3a08000 	mov	r8, #0	; 0x0
        1e5404:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1e5408:	e1a03008 	mov	r3, r8
        1e540c:	e3a02001 	mov	r2, #1	; 0x1
        1e5410:	e1a01007 	mov	r1, r7
        1e5414:	e3a0004c 	mov	r0, #76	; 0x4c
        1e5418:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1e541c:	e1a03006 	mov	r3, r6
        1e5420:	e92d0008 	stmdb	sp!, {r3}
        1e5424:	e1a0000e 	mov	r0, lr
        1e5428:	e3a03000 	mov	r3, #0	; 0x0
        1e542c:	e49c1008 	ldr	r1, [ip], #8
        1e5430:	e59c2000 	ldr	r2, [ip]
        1e5434:	eb67d644 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        1e5438:	e28dd024 	add	sp, sp, #36	; 0x24
        1e543c:	e1b06000 	movs	r6, r0
        1e5440:	1a000009 	bne	1e546c <TCodecChannel::ScheduleDMA(ChannelNode *, int, SoundBlock *)+0xec>
        1e5444:	e59401f4 	ldr	r0, [r4, #500]	; fField500
        1e5448:	e2800001 	add	r0, r0, #1	; 0x1
        1e544c:	e1a01005 	mov	r1, r5
        1e5450:	e58401f4 	str	r0, [r4, #500]	; fField500
        1e5454:	e1a00004 	mov	r0, r4
        1e5458:	eb6662a7 	bl	1b7defc <TCodecChannel::$GetNodeRefCount(ChannelNode *)>
        1e545c:	e2802001 	add	r2, r0, #1	; 0x1
        1e5460:	e1a01005 	mov	r1, r5
        1e5464:	e1a00004 	mov	r0, r4
        1e5468:	eb6666a4 	bl	1b7ef00 <TCodecChannel::$SetNodeRefCount(ChannelNode *, long)>
        1e546c:	e1a00006 	mov	r0, r6
        1e5470:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e5474:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: TCodecChannel::SendStart(void)
 * Address: 001e5478
 */
TCodecChannel::SendStart(void) {
    /*
        1e5478:	e1a0c00d 	mov	ip, sp
        1e547c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e5480:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e5484:	e1a04000 	mov	r4, r0
        1e5488:	e59001e4 	ldr	r0, [r0, #484]	; fField484
        1e548c:	e3100002 	tst	r0, #2	; 0x2
        1e5490:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1e5494:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        1e5498:	e28d0018 	add	r0, sp, #24	; 0x18
        1e549c:	eb67fb65 	bl	1be4238 <TAEvent::$__ct(void)>
        1e54a0:	e59f70a4 	ldr	r7, [pc, #a4]	; 1e554c <TCodecChannel::SendStart(void)+0xd4>
        1e54a4:	e58d7018 	str	r7, [sp, #24]	; fField24
        1e54a8:	e59f60a0 	ldr	r6, [pc, #a0]	; 1e5550 <TCodecChannel::SendStart(void)+0xd8>
        1e54ac:	e3a05000 	mov	r5, #0	; 0x0
        1e54b0:	e58d5020 	str	r5, [sp, #32]
        1e54b4:	e58d601c 	str	r6, [sp, #28]	; fField28
        1e54b8:	e58d5024 	str	r5, [sp, #36]	; fField36
        1e54bc:	e58d5028 	str	r5, [sp, #40]
        1e54c0:	e28d0004 	add	r0, sp, #4	; 0x4
        1e54c4:	eb67fb5b 	bl	1be4238 <TAEvent::$__ct(void)>
        1e54c8:	e58d500c 	str	r5, [sp, #12]	; fField12
        1e54cc:	e58d6008 	str	r6, [sp, #8]
        1e54d0:	e58d7004 	str	r7, [sp, #4]	; fField4
        1e54d4:	e58d5010 	str	r5, [sp, #16]	; fField16
        1e54d8:	e3a00009 	mov	r0, #9	; 0x9
        1e54dc:	e58d0024 	str	r0, [sp, #36]	; fField36
        1e54e0:	e58d5014 	str	r5, [sp, #20]	; fField20
        1e54e4:	e5940200 	ldr	r0, [r4, #512]	; fField512
        1e54e8:	e58d0020 	str	r0, [sp, #32]
        1e54ec:	e58d5028 	str	r5, [sp, #40]
        1e54f0:	e59f005c 	ldr	r0, [pc, #5c]	; 1e5554 <TCodecChannel::SendStart(void)+0xdc>
        1e54f4:	e590c000 	ldr	ip, [r0]
        1e54f8:	e28d0004 	add	r0, sp, #4	; 0x4
        1e54fc:	e3a01014 	mov	r1, #20	; 0x14
        1e5500:	e3a02000 	mov	r2, #0	; 0x0
        1e5504:	e3a0e000 	mov	lr, #0	; 0x0
        1e5508:	e3a03000 	mov	r3, #0	; 0x0
        1e550c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1e5510:	e1a03005 	mov	r3, r5
        1e5514:	e1a0100e 	mov	r1, lr
        1e5518:	e3a00014 	mov	r0, #20	; 0x14
        1e551c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1e5520:	e28d3038 	add	r3, sp, #56	; 0x38
        1e5524:	e92d0008 	stmdb	sp!, {r3}
        1e5528:	e28d3024 	add	r3, sp, #36	; 0x24
        1e552c:	e1a0000c 	mov	r0, ip
        1e5530:	e3a02002 	mov	r2, #2	; 0x2
        1e5534:	e3a01001 	mov	r1, #1	; 0x1
        1e5538:	eb67d603 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        1e553c:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e5540:	e3800002 	orr	r0, r0, #2	; 0x2
        1e5544:	e5a401e4 	str	r0, [r4, #484]!	; fField484
        1e5548:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1e554c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1e5550:	75736e64 	ldrvcb	r6, [r3, -#3684]!
        1e5554:	0c101b10 	ldceq	11, cr1, [r0], -#64
    */
}

/**
 * Symbol: TCodecChannel::CompressLoop(void)
 * Address: 001e5558
 */
TCodecChannel::CompressLoop(void) {
    /*
        1e5558:	e1a0c00d 	mov	ip, sp
        1e555c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e5560:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e5564:	e1a04000 	mov	r4, r0
        1e5568:	e24dd038 	sub	sp, sp, #56	; 0x38
        1e556c:	e3a07000 	mov	r7, #0	; 0x0
        1e5570:	e2800f7a 	add	r0, r0, #488	; 0x1e8
        1e5574:	e1a09000 	mov	r9, r0
        1e5578:	e3a01000 	mov	r1, #0	; 0x0
        1e557c:	eb67a474 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        1e5580:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e5584:	e3c00002 	bic	r0, r0, #2	; 0x2
        1e5588:	e58401e4 	str	r0, [r4, #484]	; fField484
        1e558c:	e3a08000 	mov	r8, #0	; 0x0
        1e5590:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1e5594:	e3310000 	teq	r1, #0	; 0x0
        1e5598:	0a00007b 	beq	1e578c <TCodecChannel::CompressLoop(void)+0x234>
        1e559c:	e1a0a001 	mov	sl, r1
        1e55a0:	e1a00004 	mov	r0, r4
        1e55a4:	eb66624e 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e55a8:	e1a05000 	mov	r5, r0
        1e55ac:	e28dd034 	add	sp, sp, #52	; 0x34
        1e55b0:	e28ae044 	add	lr, sl, #68	; 0x44
        1e55b4:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        1e55b8:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        1e55bc:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        1e55c0:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        1e55c4:	e91e500e 	ldmdb	lr, {r1, r2, r3, ip, lr}
        1e55c8:	e92d500e 	stmdb	sp!, {r1, r2, r3, ip, lr}
        1e55cc:	e3a06000 	mov	r6, #0	; 0x0
        1e55d0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1e55d4:	e3500000 	cmp	r0, #0	; 0x0
        1e55d8:	9a000011 	bls	1e5624 <TCodecChannel::CompressLoop(void)+0xcc>
        1e55dc:	e1a0100a 	mov	r1, sl
        1e55e0:	e1a00004 	mov	r0, r4
        1e55e4:	e3a02000 	mov	r2, #0	; 0x0
        1e55e8:	e5856018 	str	r6, [r5, #24]	; fField24
        1e55ec:	eb66664c 	bl	1b7ef24 <TCodecChannel::$GetNodeBuffer(ChannelNode *, void **)>
        1e55f0:	e3300000 	teq	r0, #0	; 0x0
        1e55f4:	1a000048 	bne	1e571c <TCodecChannel::CompressLoop(void)+0x1c4>
        1e55f8:	e1a0300d 	mov	r3, sp
        1e55fc:	e1a0100a 	mov	r1, sl
        1e5600:	e1a00004 	mov	r0, r4
        1e5604:	e5952010 	ldr	r2, [r5, #16]	; fField16
        1e5608:	eb666649 	bl	1b7ef34 <TCodecChannel::$ScheduleDMA(ChannelNode *, int, SoundBlock *)>
        1e560c:	e3300000 	teq	r0, #0	; 0x0
        1e5610:	1a000041 	bne	1e571c <TCodecChannel::CompressLoop(void)+0x1c4>
        1e5614:	e2866001 	add	r6, r6, #1	; 0x1
        1e5618:	e5950014 	ldr	r0, [r5, #20]	; fField20
        1e561c:	e1500006 	cmp	r0, r6
        1e5620:	8affffed 	bhi	1e55dc <TCodecChannel::CompressLoop(void)+0x84>
        1e5624:	e1a00004 	mov	r0, r4
        1e5628:	e5858018 	str	r8, [r5, #24]	; fField24
        1e562c:	eb666641 	bl	1b7ef38 <TCodecChannel::$SendStart(void)>
        1e5630:	e5940204 	ldr	r0, [r4, #516]	; fField516
        1e5634:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1e5638:	e3811040 	orr	r1, r1, #64	; 0x40
        1e563c:	e5a01014 	str	r1, [r0, #20]!	; fField20
        1e5640:	ea00004b 	b	1e5774 <TCodecChannel::CompressLoop(void)+0x21c>
        1e5644:	e1a00004 	mov	r0, r4
        1e5648:	e3a01000 	mov	r1, #0	; 0x0
        1e564c:	eb666637 	bl	1b7ef30 <TCodecChannel::$WaitForNextBuffer(unsigned long)>
        1e5650:	e3300000 	teq	r0, #0	; 0x0
        1e5654:	1a000030 	bne	1e571c <TCodecChannel::CompressLoop(void)+0x1c4>
        1e5658:	e5940204 	ldr	r0, [r4, #516]	; fField516
        1e565c:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1e5660:	e3110004 	tst	r1, #4	; 0x4
        1e5664:	1590000c 	ldrne	r0, [r0, #12]	; fField12
        1e5668:	13300000 	teqne	r0, #0	; 0x0
        1e566c:	0a00000d 	beq	1e56a8 <TCodecChannel::CompressLoop(void)+0x150>
        1e5670:	e3110008 	tst	r1, #8	; 0x8
        1e5674:	1a00000b 	bne	1e56a8 <TCodecChannel::CompressLoop(void)+0x150>
        1e5678:	e1a0300d 	mov	r3, sp
        1e567c:	e28d2034 	add	r2, sp, #52	; 0x34
        1e5680:	e1a01006 	mov	r1, r6
        1e5684:	e1a00004 	mov	r0, r4
        1e5688:	eb66662c 	bl	1b7ef40 <TCodecChannel::$EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)>
        1e568c:	e3300000 	teq	r0, #0	; 0x0
        1e5690:	1a000021 	bne	1e571c <TCodecChannel::CompressLoop(void)+0x1c4>
        1e5694:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1e5698:	e1a06001 	mov	r6, r1
        1e569c:	e1a00004 	mov	r0, r4
        1e56a0:	eb66620f 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e56a4:	e1a05000 	mov	r5, r0
        1e56a8:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e56ac:	e3100001 	tst	r0, #1	; 0x1
        1e56b0:	0a000007 	beq	1e56d4 <TCodecChannel::CompressLoop(void)+0x17c>
        1e56b4:	e5960008 	ldr	r0, [r6, #8]
        1e56b8:	e5840210 	str	r0, [r4, #528]	; fField528
        1e56bc:	e5b6000c 	ldr	r0, [r6, #12]!	; fField12
        1e56c0:	e5840214 	str	r0, [r4, #532]	; fField532
        1e56c4:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e56c8:	e3800004 	orr	r0, r0, #4	; 0x4
        1e56cc:	e58401e4 	str	r0, [r4, #484]	; fField484
        1e56d0:	ea00002d 	b	1e578c <TCodecChannel::CompressLoop(void)+0x234>
        1e56d4:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1e56d8:	e3300000 	teq	r0, #0	; 0x0
        1e56dc:	0a000017 	beq	1e5740 <TCodecChannel::CompressLoop(void)+0x1e8>
        1e56e0:	e28dd034 	add	sp, sp, #52	; 0x34
        1e56e4:	e286e044 	add	lr, r6, #68	; 0x44
        1e56e8:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        1e56ec:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        1e56f0:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        1e56f4:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        1e56f8:	e91e500e 	ldmdb	lr, {r1, r2, r3, ip, lr}
        1e56fc:	e92d500e 	stmdb	sp!, {r1, r2, r3, ip, lr}
        1e5700:	e1a0300d 	mov	r3, sp
        1e5704:	e1a01006 	mov	r1, r6
        1e5708:	e1a00004 	mov	r0, r4
        1e570c:	e5952010 	ldr	r2, [r5, #16]	; fField16
        1e5710:	eb666607 	bl	1b7ef34 <TCodecChannel::$ScheduleDMA(ChannelNode *, int, SoundBlock *)>
        1e5714:	e3300000 	teq	r0, #0	; 0x0
        1e5718:	0a000001 	beq	1e5724 <TCodecChannel::CompressLoop(void)+0x1cc>
        1e571c:	e3a07001 	mov	r7, #1	; 0x1
        1e5720:	ea000019 	b	1e578c <TCodecChannel::CompressLoop(void)+0x234>
        1e5724:	e5950018 	ldr	r0, [r5, #24]	; fField24
        1e5728:	e2800001 	add	r0, r0, #1	; 0x1
        1e572c:	e5850018 	str	r0, [r5, #24]	; fField24
        1e5730:	e5951014 	ldr	r1, [r5, #20]	; fField20
        1e5734:	e1500001 	cmp	r0, r1
        1e5738:	25858018 	strcs	r8, [r5, #24]	; fField24
        1e573c:	ea000003 	b	1e5750 <TCodecChannel::CompressLoop(void)+0x1f8>
        1e5740:	e5940204 	ldr	r0, [r4, #516]	; fField516
        1e5744:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1e5748:	e3c11040 	bic	r1, r1, #64	; 0x40
        1e574c:	e5a01014 	str	r1, [r0, #20]!	; fField20
        1e5750:	e3350000 	teq	r5, #0	; 0x0
        1e5754:	15d5000c 	ldrneb	r0, [r5, #12]	; fField12
        1e5758:	13300000 	teqne	r0, #0	; 0x0
        1e575c:	0a000004 	beq	1e5774 <TCodecChannel::CompressLoop(void)+0x21c>
        1e5760:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e5764:	e3100001 	tst	r0, #1	; 0x1
        1e5768:	05c5800c 	streqb	r8, [r5, #12]	; fField12
        1e576c:	01a00004 	moveq	r0, r4
        1e5770:	0b6661d6 	bleq	1b7ded0 <TCodecChannel::$GetNextNode(void)>
        1e5774:	e594600c 	ldr	r6, [r4, #12]	; fField12
        1e5778:	e3360000 	teq	r6, #0	; 0x0
        1e577c:	0a000002 	beq	1e578c <TCodecChannel::CompressLoop(void)+0x234>
        1e5780:	e59401e4 	ldr	r0, [r4, #484]	; fField484
        1e5784:	e3100001 	tst	r0, #1	; 0x1
        1e5788:	0affffad 	beq	1e5644 <TCodecChannel::CompressLoop(void)+0xec>
        1e578c:	e3a02000 	mov	r2, #0	; 0x0
        1e5790:	e3a01000 	mov	r1, #0	; 0x0
        1e5794:	e5940204 	ldr	r0, [r4, #516]	; fField516
        1e5798:	e5903000 	ldr	r3, [r0]
        1e579c:	e1a0e00f 	mov	lr, pc
        1e57a0:	e283f014 	add	pc, r3, #20	; 0x14
        1e57a4:	e1a01007 	mov	r1, r7
        1e57a8:	e1a00004 	mov	r0, r4
        1e57ac:	eb6665e4 	bl	1b7ef44 <TCodecChannel::$Abort(unsigned char)>
        1e57b0:	e1a00009 	mov	r0, r9
        1e57b4:	eb67d137 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        1e57b8:	e58481e4 	str	r8, [r4, #484]	; fField484
        1e57bc:	e5a481f4 	str	r8, [r4, #500]!	; fField500
        1e57c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCodecChannel::EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)
 * Address: 001e57c4
 */
TCodecChannel::EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *) {
    /*
        1e57c4:	e1a0c00d 	mov	ip, sp
        1e57c8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1e57cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e57d0:	e1a06000 	mov	r6, r0
        1e57d4:	e1a04001 	mov	r4, r1
        1e57d8:	e1a05002 	mov	r5, r2
        1e57dc:	e1a07003 	mov	r7, r3
        1e57e0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1e57e4:	eb6661be 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e57e8:	e1a09000 	mov	r9, r0
        1e57ec:	e1a01004 	mov	r1, r4
        1e57f0:	e1a00006 	mov	r0, r6
        1e57f4:	eb6661be 	bl	1b7def4 <TCodecChannel::$GetCodec(ChannelNode *)>
        1e57f8:	e1a0a000 	mov	sl, r0
        1e57fc:	e3a00000 	mov	r0, #0	; 0x0
        1e5800:	e52d0008 	str	r0, [sp, -#8]!
        1e5804:	e28d2004 	add	r2, sp, #4	; 0x4
        1e5808:	e1a01004 	mov	r1, r4
        1e580c:	e1a00006 	mov	r0, r6
        1e5810:	eb6665c3 	bl	1b7ef24 <TCodecChannel::$GetNodeBuffer(ChannelNode *, void **)>
        1e5814:	e1b08000 	movs	r8, r0
        1e5818:	1a00005a 	bne	1e5988 <TCodecChannel::EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x1c4>
        1e581c:	e5990010 	ldr	r0, [r9, #16]	; fField16
        1e5820:	e28d1008 	add	r1, sp, #8	; 0x8
        1e5824:	e5850000 	str	r0, [r5]
        1e5828:	e1a00007 	mov	r0, r7
        1e582c:	eb6665c5 	bl	1b7ef48 <$ConvertCodecBlock(SoundBlock *, CodecBlock *)>
        1e5830:	e28d3008 	add	r3, sp, #8	; 0x8
        1e5834:	e92d0008 	stmdb	sp!, {r3}
        1e5838:	e28d3004 	add	r3, sp, #4	; 0x4
        1e583c:	e1a02005 	mov	r2, r5
        1e5840:	e1a0000a 	mov	r0, sl
        1e5844:	e59d1008 	ldr	r1, [sp, #8]
        1e5848:	eb667232 	bl	1b82118 <$SafeCodecConsume__FP11TSoundCodecPCvPUlT3PC10CodecBlock>
        1e584c:	e28dd004 	add	sp, sp, #4	; 0x4
        1e5850:	e1b08000 	movs	r8, r0
        1e5854:	1a00004b 	bne	1e5988 <TCodecChannel::EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x1c4>
        1e5858:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1e585c:	e59d1000 	ldr	r1, [sp]
        1e5860:	e0800001 	add	r0, r0, r1
        1e5864:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        1e5868:	e5991010 	ldr	r1, [r9, #16]	; fField16
        1e586c:	e5950000 	ldr	r0, [r5]
        1e5870:	e1510000 	cmp	r1, r0
        1e5874:	8a000003 	bhi	1e5888 <TCodecChannel::EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0xc4>
        1e5878:	e1a0000a 	mov	r0, sl
        1e587c:	eb666181 	bl	1b7de88 <TSoundCodec::$BufferCompleted(void)>
        1e5880:	e3300000 	teq	r0, #0	; 0x0
        1e5884:	0a000001 	beq	1e5890 <TCodecChannel::EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0xcc>
        1e5888:	e3a00001 	mov	r0, #1	; 0x1
        1e588c:	ea000000 	b	1e5894 <TCodecChannel::EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0xd0>
        1e5890:	e3a00000 	mov	r0, #0	; 0x0
        1e5894:	e5c9000c 	strb	r0, [r9, #12]	; fField12
        1e5898:	e5b90010 	ldr	r0, [r9, #16]!	; fField16
        1e589c:	e5951000 	ldr	r1, [r5]
        1e58a0:	e1500001 	cmp	r0, r1
        1e58a4:	9a000032 	bls	1e5974 <TCodecChannel::EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x1b0>
        1e58a8:	e1a00006 	mov	r0, r6
        1e58ac:	eb666187 	bl	1b7ded0 <TCodecChannel::$GetNextNode(void)>
        1e58b0:	e1b04000 	movs	r4, r0
        1e58b4:	0a00002e 	beq	1e5974 <TCodecChannel::EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x1b0>
        1e58b8:	e1a01004 	mov	r1, r4
        1e58bc:	e1a00006 	mov	r0, r6
        1e58c0:	eb666187 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e58c4:	e1a09000 	mov	r9, r0
        1e58c8:	e1a01004 	mov	r1, r4
        1e58cc:	e1a00006 	mov	r0, r6
        1e58d0:	eb666187 	bl	1b7def4 <TCodecChannel::$GetCodec(ChannelNode *)>
        1e58d4:	e1a06000 	mov	r6, r0
        1e58d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1e58dc:	e5991010 	ldr	r1, [r9, #16]	; fField16
        1e58e0:	e5950000 	ldr	r0, [r5]
        1e58e4:	e0410000 	sub	r0, r1, r0
        1e58e8:	e58d0000 	str	r0, [sp]
        1e58ec:	e59d1008 	ldr	r1, [sp, #8]
        1e58f0:	e5950000 	ldr	r0, [r5]
        1e58f4:	e0811000 	add	r1, r1, r0
        1e58f8:	e58d1008 	str	r1, [sp, #8]
        1e58fc:	e28d300c 	add	r3, sp, #12	; 0xc
        1e5900:	e92d0008 	stmdb	sp!, {r3}
        1e5904:	e28d3008 	add	r3, sp, #8	; 0x8
        1e5908:	e28d2004 	add	r2, sp, #4	; 0x4
        1e590c:	e1a00006 	mov	r0, r6
        1e5910:	eb667200 	bl	1b82118 <$SafeCodecConsume__FP11TSoundCodecPCvPUlT3PC10CodecBlock>
        1e5914:	e28dd004 	add	sp, sp, #4	; 0x4
        1e5918:	e1b08000 	movs	r8, r0
        1e591c:	128dd004 	addne	sp, sp, #4	; 0x4
        1e5920:	1a000018 	bne	1e5988 <TCodecChannel::EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x1c4>
        1e5924:	e594100c 	ldr	r1, [r4, #12]	; fField12
        1e5928:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1e592c:	e0810000 	add	r0, r1, r0
        1e5930:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        1e5934:	e5951000 	ldr	r1, [r5]
        1e5938:	e59d0000 	ldr	r0, [sp]
        1e593c:	e0810000 	add	r0, r1, r0
        1e5940:	e5850000 	str	r0, [r5]
        1e5944:	e5991010 	ldr	r1, [r9, #16]	; fField16
        1e5948:	e1510000 	cmp	r1, r0
        1e594c:	8a000003 	bhi	1e5960 <TCodecChannel::EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x19c>
        1e5950:	e1a00006 	mov	r0, r6
        1e5954:	eb66614b 	bl	1b7de88 <TSoundCodec::$BufferCompleted(void)>
        1e5958:	e3300000 	teq	r0, #0	; 0x0
        1e595c:	0a000001 	beq	1e5968 <TCodecChannel::EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x1a4>
        1e5960:	e3a00001 	mov	r0, #1	; 0x1
        1e5964:	ea000000 	b	1e596c <TCodecChannel::EmptyDMABuffer(ChannelNode *, unsigned long *, SoundBlock *)+0x1a8>
        1e5968:	e3a00000 	mov	r0, #0	; 0x0
        1e596c:	e5c9000c 	strb	r0, [r9, #12]	; fField12
        1e5970:	e28dd004 	add	sp, sp, #4	; 0x4
        1e5974:	e5950000 	ldr	r0, [r5]
        1e5978:	e3500000 	cmp	r0, #0	; 0x0
        1e597c:	81a01007 	movhi	r1, r7
        1e5980:	828d0008 	addhi	r0, sp, #8	; 0x8
        1e5984:	8b666570 	blhi	1b7ef4c <$ConvertCodecBlock(CodecBlock *, SoundBlock *)>
        1e5988:	e1a00008 	mov	r0, r8
        1e598c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCodecChannel::Abort(unsigned char)
 * Address: 001e5990
 */
TCodecChannel::Abort(unsigned char) {
    /*
        1e5990:	e1a0c00d 	mov	ip, sp
        1e5994:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e5998:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e599c:	e1a04000 	mov	r4, r0
        1e59a0:	e31100ff 	tst	r1, #255	; 0xff
        1e59a4:	0a000045 	beq	1e5ac0 <TCodecChannel::Abort(unsigned char)+0x130>
        1e59a8:	e24dd070 	sub	sp, sp, #112	; 0x70
        1e59ac:	e28d0024 	add	r0, sp, #36	; 0x24
        1e59b0:	eb67fa20 	bl	1be4238 <TAEvent::$__ct(void)>
        1e59b4:	e59f60e0 	ldr	r6, [pc, #e0]	; 1e5a9c <TCodecChannel::Abort(unsigned char)+0x10c>
        1e59b8:	e58d6024 	str	r6, [sp, #36]	; fField36
        1e59bc:	e59f70dc 	ldr	r7, [pc, #dc]	; 1e5aa0 <TCodecChannel::Abort(unsigned char)+0x110>
        1e59c0:	e3a05000 	mov	r5, #0	; 0x0
        1e59c4:	e58d502c 	str	r5, [sp, #44]
        1e59c8:	e58d7028 	str	r7, [sp, #40]
        1e59cc:	e58d5030 	str	r5, [sp, #48]
        1e59d0:	e58d5034 	str	r5, [sp, #52]
        1e59d4:	e58d5038 	str	r5, [sp, #56]
        1e59d8:	e58d503c 	str	r5, [sp, #60]
        1e59dc:	e58d5040 	str	r5, [sp, #64]
        1e59e0:	e58d5044 	str	r5, [sp, #68]
        1e59e4:	e59f00b8 	ldr	r0, [pc, #b8]	; 1e5aa4 <TCodecChannel::Abort(unsigned char)+0x114>
        1e59e8:	e58d0048 	str	r0, [sp, #72]
        1e59ec:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        1e59f0:	e58d004c 	str	r0, [sp, #76]
        1e59f4:	e58d5050 	str	r5, [sp, #80]
        1e59f8:	e58d5054 	str	r5, [sp, #84]
        1e59fc:	e58d5058 	str	r5, [sp, #88]
        1e5a00:	e58d006c 	str	r0, [sp, #108]
        1e5a04:	e58d505c 	str	r5, [sp, #92]
        1e5a08:	e28d0004 	add	r0, sp, #4	; 0x4
        1e5a0c:	eb67fa09 	bl	1be4238 <TAEvent::$__ct(void)>
        1e5a10:	e58d500c 	str	r5, [sp, #12]	; fField12
        1e5a14:	e98d00c0 	stmib	sp, {r6, r7}
        1e5a18:	e58d5010 	str	r5, [sp, #16]	; fField16
        1e5a1c:	e58d5014 	str	r5, [sp, #20]	; fField20
        1e5a20:	e58d5018 	str	r5, [sp, #24]	; fField24
        1e5a24:	e58d501c 	str	r5, [sp, #28]	; fField28
        1e5a28:	e3a0000c 	mov	r0, #12	; 0xc
        1e5a2c:	e58d0030 	str	r0, [sp, #48]
        1e5a30:	e58d5020 	str	r5, [sp, #32]
        1e5a34:	e5940200 	ldr	r0, [r4, #512]	; fField512
        1e5a38:	e58d002c 	str	r0, [sp, #44]
        1e5a3c:	e58d5034 	str	r5, [sp, #52]
        1e5a40:	e59f0060 	ldr	r0, [pc, #60]	; 1e5aa8 <TCodecChannel::Abort(unsigned char)+0x118>
        1e5a44:	e590c000 	ldr	ip, [r0]
        1e5a48:	e28d0004 	add	r0, sp, #4	; 0x4
        1e5a4c:	e3a01020 	mov	r1, #32	; 0x20
        1e5a50:	e3a02000 	mov	r2, #0	; 0x0
        1e5a54:	e3a0e000 	mov	lr, #0	; 0x0
        1e5a58:	e3a03000 	mov	r3, #0	; 0x0
        1e5a5c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1e5a60:	e1a03005 	mov	r3, r5
        1e5a64:	e1a0100e 	mov	r1, lr
        1e5a68:	e3a0004c 	mov	r0, #76	; 0x4c
        1e5a6c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1e5a70:	e28d3044 	add	r3, sp, #68	; 0x44
        1e5a74:	e92d0008 	stmdb	sp!, {r3}
        1e5a78:	e28d3024 	add	r3, sp, #36	; 0x24
        1e5a7c:	e1a0000c 	mov	r0, ip
        1e5a80:	e3a02002 	mov	r2, #2	; 0x2
        1e5a84:	e3a01001 	mov	r1, #1	; 0x1
        1e5a88:	eb67d4af 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        1e5a8c:	e28dd024 	add	sp, sp, #36	; 0x24
        1e5a90:	e5bd0010 	ldr	r0, [sp, #16]!	; fField16
        1e5a94:	e28dd060 	add	sp, sp, #96	; 0x60
        1e5a98:	ea000006 	b	1e5ab8 <TCodecChannel::Abort(unsigned char)+0x128>
        1e5a9c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1e5aa0:	75736e64 	ldrvcb	r6, [r3, -#3684]!
        1e5aa4:	560a6e85 	strpl	r6, [sl], -r5, lsl #29
        1e5aa8:	0c101b10 	ldceq	11, cr1, [r0], -#64
        1e5aac:	e1a00004 	mov	r0, r4
        1e5ab0:	e3a01000 	mov	r1, #0	; 0x0
        1e5ab4:	eb66651d 	bl	1b7ef30 <TCodecChannel::$WaitForNextBuffer(unsigned long)>
        1e5ab8:	e3300000 	teq	r0, #0	; 0x0
        1e5abc:	1a000002 	bne	1e5acc <TCodecChannel::Abort(unsigned char)+0x13c>
        1e5ac0:	e59401f4 	ldr	r0, [r4, #500]	; fField500
        1e5ac4:	e3500000 	cmp	r0, #0	; 0x0
        1e5ac8:	8afffff7 	bhi	1e5aac <TCodecChannel::Abort(unsigned char)+0x11c>
        1e5acc:	e594600c 	ldr	r6, [r4, #12]	; fField12
        1e5ad0:	e3360000 	teq	r6, #0	; 0x0
        1e5ad4:	0a00001e 	beq	1e5b54 <TCodecChannel::Abort(unsigned char)+0x1c4>
        1e5ad8:	e3a05ead 	mov	r5, #2768	; 0xad0
        1e5adc:	e2455902 	sub	r5, r5, #32768	; 0x8000
        1e5ae0:	e5960000 	ldr	r0, [r6]
        1e5ae4:	e1a01006 	mov	r1, r6
        1e5ae8:	e584000c 	str	r0, [r4, #12]	; fField12
        1e5aec:	e1a00004 	mov	r0, r4
        1e5af0:	eb6660fb 	bl	1b7dee4 <TCodecChannel::$GetCodecState(ChannelNode *)>
        1e5af4:	e1b08000 	movs	r8, r0
        1e5af8:	0a00000b 	beq	1e5b2c <TCodecChannel::Abort(unsigned char)+0x19c>
        1e5afc:	e3a07000 	mov	r7, #0	; 0x0
        1e5b00:	e5980014 	ldr	r0, [r8, #20]	; fField20
        1e5b04:	e3500000 	cmp	r0, #0	; 0x0
        1e5b08:	9a000007 	bls	1e5b2c <TCodecChannel::Abort(unsigned char)+0x19c>
        1e5b0c:	e0880107 	add	r0, r8, r7, lsl #2
        1e5b10:	e590001c 	ldr	r0, [r0, #28]	; fField28
        1e5b14:	e280006c 	add	r0, r0, #108	; 0x6c
        1e5b18:	eb67a30b 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
        1e5b1c:	e2877001 	add	r7, r7, #1	; 0x1
        1e5b20:	e5980014 	ldr	r0, [r8, #20]	; fField20
        1e5b24:	e1500007 	cmp	r0, r7
        1e5b28:	8afffff7 	bhi	1e5b0c <TCodecChannel::Abort(unsigned char)+0x17c>
        1e5b2c:	e1a01006 	mov	r1, r6
        1e5b30:	e1a00004 	mov	r0, r4
        1e5b34:	e3a03001 	mov	r3, #1	; 0x1
        1e5b38:	e1a02005 	mov	r2, r5
        1e5b3c:	e594c000 	ldr	ip, [r4]
        1e5b40:	e1a0e00f 	mov	lr, pc
        1e5b44:	e28cf018 	add	pc, ip, #24	; 0x18
        1e5b48:	e594600c 	ldr	r6, [r4, #12]	; fField12
        1e5b4c:	e3360000 	teq	r6, #0	; 0x0
        1e5b50:	1affffe2 	bne	1e5ae0 <TCodecChannel::Abort(unsigned char)+0x150>
        1e5b54:	e59411e0 	ldr	r1, [r4, #480]	; fField480
        1e5b58:	e3310000 	teq	r1, #0	; 0x0
        1e5b5c:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1e5b60:	e1a00004 	mov	r0, r4
        1e5b64:	e5915000 	ldr	r5, [r1]
        1e5b68:	eb6660db 	bl	1b7dedc <TCodecChannel::$ReleaseNode(ChannelNode *)>
        1e5b6c:	e1b01005 	movs	r1, r5
        1e5b70:	1afffffa 	bne	1e5b60 <TCodecChannel::Abort(unsigned char)+0x1d0>
        1e5b74:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

