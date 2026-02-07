#include "include/TSoundChannel.h"

/**
 * Symbol: TSoundChannel::__ct(unsigned long)
 * Address: 001e36fc
 */
TSoundChannel::TSoundChannel(unsigned long) {
    /*
        1e36fc:	e1a0c00d 	mov	ip, sp
        1e3700:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e3704:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3708:	e1a04001 	mov	r4, r1
        1e370c:	e3300000 	teq	r0, #0	; 0x0
        1e3710:	1a000003 	bne	1e3724 <TSoundChannel::__ct(unsigned long)+0x28>
        1e3714:	e3a00e1e 	mov	r0, #480	; 0x1e0
        1e3718:	eb67ac06 	bl	1bce738 <$__nw(unsigned int)>
        1e371c:	e3300000 	teq	r0, #0	; 0x0
        1e3720:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1e3724:	e3a01000 	mov	r1, #0	; 0x0
        1e3728:	e580101c 	str	r1, [r0, #28]	; fField28
        1e372c:	e5801028 	str	r1, [r0, #40]	; fField40
        1e3730:	e5801020 	str	r1, [r0, #32]	; fField32
        1e3734:	e5801024 	str	r1, [r0, #36]	; fField36
        1e3738:	e59f2020 	ldr	r2, [pc, #20]	; 1e3760 <TSoundChannel::__ct(unsigned long)+0x64>	; fField20
        1e373c:	e5801008 	str	r1, [r0, #8]	; fField8
        1e3740:	e8800014 	stmia	r0, {r2, r4}
        1e3744:	e580100c 	str	r1, [r0, #12]	; fField12
        1e3748:	e5801010 	str	r1, [r0, #16]	; fField16
        1e374c:	e5801014 	str	r1, [r0, #20]	; fField20
        1e3750:	e5801018 	str	r1, [r0, #24]	; fField24
        1e3754:	e3a01001 	mov	r1, #1	; 0x1
        1e3758:	e5c01030 	strb	r1, [r0, #48]	; fField48
        1e375c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1e3760:	0001d0c0 	andeq	sp, r1, r0, asr #1
    */
}

/**
 * Symbol: TSoundChannel::__dt(void)
 * Address: 001e3764
 */
TSoundChannel::~TSoundChannel(void) {
    /*
        1e3764:	e1a0c00d 	mov	ip, sp
        1e3768:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e376c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e3770:	e1a04000 	mov	r4, r0
        1e3774:	e1a05001 	mov	r5, r1
        1e3778:	e59f0080 	ldr	r0, [pc, #80]	; 1e3800 <TSoundChannel::__dt(void)+0x9c>	; fField80
        1e377c:	e5840000 	str	r0, [r4]
        1e3780:	e3a060c6 	mov	r6, #198	; 0xc6
        1e3784:	e2466c76 	sub	r6, r6, #30208	; 0x7600
        1e3788:	e594700c 	ldr	r7, [r4, #12]	; fField12
        1e378c:	e3370000 	teq	r7, #0	; 0x0
        1e3790:	0a00000e 	beq	1e37d0 <TSoundChannel::__dt(void)+0x6c>
        1e3794:	e1a01007 	mov	r1, r7
        1e3798:	e1a00004 	mov	r0, r4
        1e379c:	e5942000 	ldr	r2, [r4]
        1e37a0:	e1a0e00f 	mov	lr, pc
        1e37a4:	e282f020 	add	pc, r2, #32	; 0x20
        1e37a8:	e1a01007 	mov	r1, r7
        1e37ac:	e1a00004 	mov	r0, r4
        1e37b0:	e3a03001 	mov	r3, #1	; 0x1
        1e37b4:	e1a02006 	mov	r2, r6
        1e37b8:	e594c000 	ldr	ip, [r4]
        1e37bc:	e1a0e00f 	mov	lr, pc
        1e37c0:	e28cf018 	add	pc, ip, #24	; 0x18
        1e37c4:	e5977000 	ldr	r7, [r7]
        1e37c8:	e3370000 	teq	r7, #0	; 0x0
        1e37cc:	1afffff0 	bne	1e3794 <TSoundChannel::__dt(void)+0x30>
        1e37d0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1e37d4:	e3300000 	teq	r0, #0	; 0x0
        1e37d8:	0a000003 	beq	1e37ec <TSoundChannel::__dt(void)+0x88>
        1e37dc:	e5906000 	ldr	r6, [r0]
        1e37e0:	eb67a7be 	bl	1bcd6e0 <$__dl(void *)>
        1e37e4:	e1b00006 	movs	r0, r6
        1e37e8:	1afffffb 	bne	1e37dc <TSoundChannel::__dt(void)+0x78>
        1e37ec:	e3150001 	tst	r5, #1	; 0x1
        1e37f0:	11a00004 	movne	r0, r4
        1e37f4:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1e37f8:	1a67a7b8 	bne	1bcd6e0 <$__dl(void *)>
        1e37fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1e3800:	0001d0c0 	andeq	sp, r1, r0, asr #1
    */
}

/**
 * Symbol: TSoundChannel::Schedule(TUSoundNodeRequest *, TUMsgToken *)
 * Address: 001e42ec
 */
TSoundChannel::Schedule(TUSoundNodeRequest *, TUMsgToken *) {
    /*
        1e42ec:	e1a0c00d 	mov	ip, sp
        1e42f0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e42f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e42f8:	e1a04000 	mov	r4, r0
        1e42fc:	e1a05001 	mov	r5, r1
        1e4300:	e1a06002 	mov	r6, r2
        1e4304:	e3a00000 	mov	r0, #0	; 0x0
        1e4308:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1e430c:	e5910020 	ldr	r0, [r1, #32]	; fField32
        1e4310:	e3300000 	teq	r0, #0	; 0x0
        1e4314:	13300006 	teqne	r0, #6	; 0x6
        1e4318:	13300001 	teqne	r0, #1	; 0x1
        1e431c:	159f7084 	ldrne	r7, [pc, #84]	; 1e43a8 <TSoundChannel::Schedule(TUSoundNodeRequest *, TUMsgToken *)+0xbc>
        1e4320:	1a00003f 	bne	1e4424 <TSoundChannel::Schedule(TUSoundNodeRequest *, TUMsgToken *)+0x138>
        1e4324:	e1a0100d 	mov	r1, sp
        1e4328:	e1a00004 	mov	r0, r4
        1e432c:	eb665a84 	bl	1b7ad44 <TSoundChannel::$MakeNode(ChannelNode **)>
        1e4330:	e1b07000 	movs	r7, r0
        1e4334:	1a00002a 	bne	1e43e4 <TSoundChannel::Schedule(TUSoundNodeRequest *, TUMsgToken *)+0xf8>
        1e4338:	e59d0000 	ldr	r0, [sp]
        1e433c:	e2800044 	add	r0, r0, #68	; 0x44
        1e4340:	e896500c 	ldmia	r6, {r2, r3, ip, lr}
        1e4344:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        1e4348:	e5951010 	ldr	r1, [r5, #16]	; fField16
        1e434c:	e59d0000 	ldr	r0, [sp]
        1e4350:	e3a06000 	mov	r6, #0	; 0x0
        1e4354:	e5a01008 	str	r1, [r0, #8]!	; fField8
        1e4358:	e59d0000 	ldr	r0, [sp]
        1e435c:	e5a0600c 	str	r6, [r0, #12]!	; fField12
        1e4360:	e59d0000 	ldr	r0, [sp]
        1e4364:	e5a06058 	str	r6, [r0, #88]!
        1e4368:	e59d0000 	ldr	r0, [sp]
        1e436c:	e2800010 	add	r0, r0, #16	; 0x10
        1e4370:	e285e014 	add	lr, r5, #20	; 0x14
        1e4374:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        1e4378:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        1e437c:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        1e4380:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        1e4384:	e89e500e 	ldmia	lr, {r1, r2, r3, ip, lr}
        1e4388:	e880500e 	stmia	r0, {r1, r2, r3, ip, lr}
        1e438c:	e5b51048 	ldr	r1, [r5, #72]!	; fField72
        1e4390:	e59d0000 	ldr	r0, [sp]
        1e4394:	e5a01054 	str	r1, [r0, #84]!
        1e4398:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1e439c:	e3300000 	teq	r0, #0	; 0x0
        1e43a0:	0a000008 	beq	1e43c8 <TSoundChannel::Schedule(TUSoundNodeRequest *, TUMsgToken *)+0xdc>
        1e43a4:	ea000001 	b	1e43b0 <TSoundChannel::Schedule(TUSoundNodeRequest *, TUMsgToken *)+0xc4>
        1e43a8:	ffff8ac7 	swinv	0x00ff8ac7
        1e43ac:	e1a00001 	mov	r0, r1
        1e43b0:	e5901000 	ldr	r1, [r0]
        1e43b4:	e3310000 	teq	r1, #0	; 0x0
        1e43b8:	1afffffb 	bne	1e43ac <TSoundChannel::Schedule(TUSoundNodeRequest *, TUMsgToken *)+0xc0>
        1e43bc:	e59d1000 	ldr	r1, [sp]
        1e43c0:	e5801000 	str	r1, [r0]
        1e43c4:	ea000004 	b	1e43dc <TSoundChannel::Schedule(TUSoundNodeRequest *, TUMsgToken *)+0xf0>
        1e43c8:	e1a00004 	mov	r0, r4
        1e43cc:	e59d1000 	ldr	r1, [sp]
        1e43d0:	e5942000 	ldr	r2, [r4]
        1e43d4:	e1a0e00f 	mov	lr, pc
        1e43d8:	e282f01c 	add	pc, r2, #28	; 0x1c
        1e43dc:	e59d0000 	ldr	r0, [sp]
        1e43e0:	e5806000 	str	r6, [r0]
        1e43e4:	e3370000 	teq	r7, #0	; 0x0
        1e43e8:	159d1000 	ldrne	r1, [sp]
        1e43ec:	13310000 	teqne	r1, #0	; 0x0
        1e43f0:	0a00000b 	beq	1e4424 <TSoundChannel::Schedule(TUSoundNodeRequest *, TUMsgToken *)+0x138>
        1e43f4:	e1a00004 	mov	r0, r4
        1e43f8:	e5942000 	ldr	r2, [r4]
        1e43fc:	e1a0e00f 	mov	lr, pc
        1e4400:	e282f020 	add	pc, r2, #32	; 0x20
        1e4404:	e1a00004 	mov	r0, r4
        1e4408:	e3a03001 	mov	r3, #1	; 0x1
        1e440c:	e3a02ead 	mov	r2, #2768	; 0xad0
        1e4410:	e2422902 	sub	r2, r2, #32768	; 0x8000
        1e4414:	e59d1000 	ldr	r1, [sp]
        1e4418:	e594c000 	ldr	ip, [r4]
        1e441c:	e1a0e00f 	mov	lr, pc
        1e4420:	e28cf018 	add	pc, ip, #24	; 0x18
        1e4424:	e1a00007 	mov	r0, r7
        1e4428:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundChannel::Cancel(TUSoundNodeRequest *)
 * Address: 001e464c
 */
TSoundChannel::Cancel(TUSoundNodeRequest *) {
    /*
        1e464c:	e1a0c00d 	mov	ip, sp
        1e4650:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1e4654:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e4658:	e1a04000 	mov	r4, r0
        1e465c:	e3a07000 	mov	r7, #0	; 0x0
        1e4660:	e3a06000 	mov	r6, #0	; 0x0
        1e4664:	e590500c 	ldr	r5, [r0, #12]	; fField12
        1e4668:	e3350000 	teq	r5, #0	; 0x0
        1e466c:	0a000021 	beq	1e46f8 <TSoundChannel::Cancel(TUSoundNodeRequest *)+0xac>
        1e4670:	e5b10010 	ldr	r0, [r1, #16]!	; fField16
        1e4674:	e5951008 	ldr	r1, [r5, #8]	; fField8
        1e4678:	e1310000 	teq	r1, r0
        1e467c:	0a000004 	beq	1e4694 <TSoundChannel::Cancel(TUSoundNodeRequest *)+0x48>
        1e4680:	e1a06005 	mov	r6, r5
        1e4684:	e5955000 	ldr	r5, [r5]
        1e4688:	e3350000 	teq	r5, #0	; 0x0
        1e468c:	1afffff8 	bne	1e4674 <TSoundChannel::Cancel(TUSoundNodeRequest *)+0x28>
        1e4690:	ea000018 	b	1e46f8 <TSoundChannel::Cancel(TUSoundNodeRequest *)+0xac>
        1e4694:	e3350000 	teq	r5, #0	; 0x0
        1e4698:	0a000016 	beq	1e46f8 <TSoundChannel::Cancel(TUSoundNodeRequest *)+0xac>
        1e469c:	e1a01005 	mov	r1, r5
        1e46a0:	e1a00004 	mov	r0, r4
        1e46a4:	e5942000 	ldr	r2, [r4]
        1e46a8:	e1a0e00f 	mov	lr, pc
        1e46ac:	e282f020 	add	pc, r2, #32	; 0x20
        1e46b0:	e3360000 	teq	r6, #0	; 0x0
        1e46b4:	15950000 	ldrne	r0, [r5]
        1e46b8:	15860000 	strne	r0, [r6]
        1e46bc:	1a000004 	bne	1e46d4 <TSoundChannel::Cancel(TUSoundNodeRequest *)+0x88>
        1e46c0:	e1a00004 	mov	r0, r4
        1e46c4:	e5951000 	ldr	r1, [r5]
        1e46c8:	e5942000 	ldr	r2, [r4]
        1e46cc:	e1a0e00f 	mov	lr, pc
        1e46d0:	e282f01c 	add	pc, r2, #28	; 0x1c
        1e46d4:	e1a01005 	mov	r1, r5
        1e46d8:	e1a00004 	mov	r0, r4
        1e46dc:	e3a03001 	mov	r3, #1	; 0x1
        1e46e0:	e3a020c5 	mov	r2, #197	; 0xc5
        1e46e4:	e2422c76 	sub	r2, r2, #30208	; 0x7600
        1e46e8:	e594c000 	ldr	ip, [r4]
        1e46ec:	e1a0e00f 	mov	lr, pc
        1e46f0:	e28cf018 	add	pc, ip, #24	; 0x18
        1e46f4:	ea000001 	b	1e4700 <TSoundChannel::Cancel(TUSoundNodeRequest *)+0xb4>
        1e46f8:	e3a07fb2 	mov	r7, #712	; 0x2c8
        1e46fc:	e2477b1e 	sub	r7, r7, #30720	; 0x7800
        1e4700:	e1a00007 	mov	r0, r7
        1e4704:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundChannel::Start(TUMsgToken *)
 * Address: 001e4eec
 */
TSoundChannel::Start(TUMsgToken *) {
    /*
        1e4eec:	e92d4000 	stmdb	sp!, {lr}
        1e4ef0:	e3a02000 	mov	r2, #0	; 0x0
        1e4ef4:	e590300c 	ldr	r3, [r0, #12]	; fField12
        1e4ef8:	e3330000 	teq	r3, #0	; 0x0
        1e4efc:	0a000013 	beq	1e4f50 <TSoundChannel::Start(TUMsgToken *)+0x64>
        1e4f00:	e5903014 	ldr	r3, [r0, #20]	; fField20
        1e4f04:	e3130004 	tst	r3, #4	; 0x4
        1e4f08:	1a00000b 	bne	1e4f3c <TSoundChannel::Start(TUMsgToken *)+0x50>
        1e4f0c:	e3833004 	orr	r3, r3, #4	; 0x4
        1e4f10:	e3310000 	teq	r1, #0	; 0x0
        1e4f14:	e5803014 	str	r3, [r0, #20]	; fField20
        1e4f18:	0a000007 	beq	1e4f3c <TSoundChannel::Start(TUMsgToken *)+0x50>
        1e4f1c:	e280e01c 	add	lr, r0, #28	; 0x1c
        1e4f20:	e8b11008 	ldmia	r1!, {r3, ip}
        1e4f24:	e8ae1008 	stmia	lr!, {r3, ip}
        1e4f28:	e8911008 	ldmia	r1, {r3, ip}
        1e4f2c:	e88e1008 	stmia	lr, {r3, ip}
        1e4f30:	e3a01001 	mov	r1, #1	; 0x1
        1e4f34:	e5801018 	str	r1, [r0, #24]	; fField24
        1e4f38:	e5c01030 	strb	r1, [r0, #48]	; fField48
        1e4f3c:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1e4f40:	e3110008 	tst	r1, #8	; 0x8
        1e4f44:	13c11008 	bicne	r1, r1, #8	; 0x8
        1e4f48:	15a01014 	strne	r1, [r0, #20]!	; fField20
        1e4f4c:	ea000001 	b	1e4f58 <TSoundChannel::Start(TUMsgToken *)+0x6c>
        1e4f50:	e3a02fb2 	mov	r2, #712	; 0x2c8
        1e4f54:	e2422b1e 	sub	r2, r2, #30720	; 0x7800
        1e4f58:	e1a00002 	mov	r0, r2
        1e4f5c:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TSoundChannel::Pause(TUSoundNodeReply *)
 * Address: 001e5b78
 */
TSoundChannel::Pause(TUSoundNodeReply *) {
    /*
        1e5b78:	e3a02000 	mov	r2, #0	; 0x0
        1e5b7c:	e3310000 	teq	r1, #0	; 0x0
        1e5b80:	0a00000e 	beq	1e5bc0 <TSoundChannel::Pause(TUSoundNodeReply *)+0x48>
        1e5b84:	e3a0c002 	mov	ip, #2	; 0x2
        1e5b88:	e590300c 	ldr	r3, [r0, #12]	; fField12
        1e5b8c:	e3330000 	teq	r3, #0	; 0x0
        1e5b90:	03a03000 	moveq	r3, #0	; 0x0
        1e5b94:	02811014 	addeq	r1, r1, #20	; 0x14
        1e5b98:	08811008 	stmeqia	r1, {r3, ip}
        1e5b9c:	02411014 	subeq	r1, r1, #20	; 0x14
        1e5ba0:	0a000005 	beq	1e5bbc <TSoundChannel::Pause(TUSoundNodeReply *)+0x44>
        1e5ba4:	e5933008 	ldr	r3, [r3, #8]	; fField8
        1e5ba8:	e2811014 	add	r1, r1, #20	; 0x14
        1e5bac:	e8811008 	stmia	r1, {r3, ip}
        1e5bb0:	e2411014 	sub	r1, r1, #20	; 0x14
        1e5bb4:	e590300c 	ldr	r3, [r0, #12]	; fField12
        1e5bb8:	e593300c 	ldr	r3, [r3, #12]	; fField12
        1e5bbc:	e5a1301c 	str	r3, [r1, #28]!	; fField28
        1e5bc0:	e590100c 	ldr	r1, [r0, #12]	; fField12
        1e5bc4:	e3310000 	teq	r1, #0	; 0x0
        1e5bc8:	0a000005 	beq	1e5be4 <TSoundChannel::Pause(TUSoundNodeReply *)+0x6c>
        1e5bcc:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1e5bd0:	e3110008 	tst	r1, #8	; 0x8
        1e5bd4:	03811008 	orreq	r1, r1, #8	; 0x8
        1e5bd8:	13c11008 	bicne	r1, r1, #8	; 0x8
        1e5bdc:	e5a01014 	str	r1, [r0, #20]!	; fField20
        1e5be0:	13a02001 	movne	r2, #1	; 0x1
        1e5be4:	e1a00002 	mov	r0, r2
        1e5be8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSoundChannel::Stop(TUSoundNodeReply *, long)
 * Address: 001e5e80
 */
TSoundChannel::Stop(TUSoundNodeReply *, long) {
    /*
        1e5e80:	e1a0c00d 	mov	ip, sp
        1e5e84:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e5e88:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e5e8c:	e1a04000 	mov	r4, r0
        1e5e90:	e1a05002 	mov	r5, r2
        1e5e94:	e3a07000 	mov	r7, #0	; 0x0
        1e5e98:	e3310000 	teq	r1, #0	; 0x0
        1e5e9c:	0a00000d 	beq	1e5ed8 <TSoundChannel::Stop(TUSoundNodeReply *, long)+0x58>
        1e5ea0:	e3a00001 	mov	r0, #1	; 0x1
        1e5ea4:	e594200c 	ldr	r2, [r4, #12]	; fField12
        1e5ea8:	e3320000 	teq	r2, #0	; 0x0
        1e5eac:	0a000006 	beq	1e5ecc <TSoundChannel::Stop(TUSoundNodeReply *, long)+0x4c>
        1e5eb0:	e5922008 	ldr	r2, [r2, #8]	; fField8
        1e5eb4:	e5810018 	str	r0, [r1, #24]	; fField24
        1e5eb8:	e5812014 	str	r2, [r1, #20]	; fField20
        1e5ebc:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1e5ec0:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1e5ec4:	e5a1001c 	str	r0, [r1, #28]!	; fField28
        1e5ec8:	ea000002 	b	1e5ed8 <TSoundChannel::Stop(TUSoundNodeReply *, long)+0x58>
        1e5ecc:	e5810018 	str	r0, [r1, #24]	; fField24
        1e5ed0:	e5817014 	str	r7, [r1, #20]	; fField20
        1e5ed4:	e5a1701c 	str	r7, [r1, #28]!	; fField28
        1e5ed8:	e594600c 	ldr	r6, [r4, #12]	; fField12
        1e5edc:	e3360000 	teq	r6, #0	; 0x0
        1e5ee0:	0a00000e 	beq	1e5f20 <TSoundChannel::Stop(TUSoundNodeReply *, long)+0xa0>
        1e5ee4:	e5968000 	ldr	r8, [r6]
        1e5ee8:	e1a01006 	mov	r1, r6
        1e5eec:	e1a00004 	mov	r0, r4
        1e5ef0:	e5942000 	ldr	r2, [r4]
        1e5ef4:	e1a0e00f 	mov	lr, pc
        1e5ef8:	e282f020 	add	pc, r2, #32	; 0x20
        1e5efc:	e1a02005 	mov	r2, r5
        1e5f00:	e1a01006 	mov	r1, r6
        1e5f04:	e1a00004 	mov	r0, r4
        1e5f08:	e3a03001 	mov	r3, #1	; 0x1
        1e5f0c:	e594c000 	ldr	ip, [r4]
        1e5f10:	e1a0e00f 	mov	lr, pc
        1e5f14:	e28cf018 	add	pc, ip, #24	; 0x18
        1e5f18:	e1b06008 	movs	r6, r8
        1e5f1c:	1afffff0 	bne	1e5ee4 <TSoundChannel::Stop(TUSoundNodeReply *, long)+0x64>
        1e5f20:	e584700c 	str	r7, [r4, #12]	; fField12
        1e5f24:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e5f28:	e3c0000c 	bic	r0, r0, #12	; 0xc
        1e5f2c:	e5a40014 	str	r0, [r4, #20]!	; fField20
        1e5f30:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundChannel::MakeNode(ChannelNode **)
 * Address: 001e5f34
 */
TSoundChannel::MakeNode(ChannelNode **) {
    /*
        1e5f34:	e1a0c00d 	mov	ip, sp
        1e5f38:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1e5f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e5f40:	e1a04001 	mov	r4, r1
        1e5f44:	e3a05000 	mov	r5, #0	; 0x0
        1e5f48:	e3a06000 	mov	r6, #0	; 0x0
        1e5f4c:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1e5f50:	e3310000 	teq	r1, #0	; 0x0
        1e5f54:	0a000004 	beq	1e5f6c <TSoundChannel::MakeNode(ChannelNode **)+0x38>
        1e5f58:	e5841000 	str	r1, [r4]
        1e5f5c:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1e5f60:	e5911000 	ldr	r1, [r1]
        1e5f64:	e5a01010 	str	r1, [r0, #16]!	; fField16
        1e5f68:	ea00000c 	b	1e5fa0 <TSoundChannel::MakeNode(ChannelNode **)+0x6c>
        1e5f6c:	e3a0005c 	mov	r0, #92	; 0x5c
        1e5f70:	eb67a1f0 	bl	1bce738 <$__nw(unsigned int)>
        1e5f74:	e3500000 	cmp	r0, #0	; 0x0
        1e5f78:	0a000003 	beq	1e5f8c <TSoundChannel::MakeNode(ChannelNode **)+0x58>
        1e5f7c:	e5806044 	str	r6, [r0, #68]	; fField68
        1e5f80:	e5806050 	str	r6, [r0, #80]	; fField80
        1e5f84:	e5806048 	str	r6, [r0, #72]	; fField72
        1e5f88:	e580604c 	str	r6, [r0, #76]	; fField76
        1e5f8c:	e5840000 	str	r0, [r4]
        1e5f90:	1a000002 	bne	1e5fa0 <TSoundChannel::MakeNode(ChannelNode **)+0x6c>
        1e5f94:	eb67f061 	bl	1be2120 <$MemError>
        1e5f98:	e1a05000 	mov	r5, r0
        1e5f9c:	ea000003 	b	1e5fb0 <TSoundChannel::MakeNode(ChannelNode **)+0x7c>
        1e5fa0:	e5940000 	ldr	r0, [r4]
        1e5fa4:	e5806000 	str	r6, [r0]
        1e5fa8:	e5940000 	ldr	r0, [r4]
        1e5fac:	e5a06004 	str	r6, [r0, #4]!	; fField4
        1e5fb0:	e1a00005 	mov	r0, r5
        1e5fb4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundChannel::FreeNode(ChannelNode *, long, int)
 * Address: 001e5fb8
 */
TSoundChannel::FreeNode(ChannelNode *, long, int) {
    /*
        1e5fb8:	e1a0c00d 	mov	ip, sp
        1e5fbc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1e5fc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e5fc4:	e1a04000 	mov	r4, r0
        1e5fc8:	e1a05001 	mov	r5, r1
        1e5fcc:	e1a07002 	mov	r7, r2
        1e5fd0:	e1a06003 	mov	r6, r3
        1e5fd4:	e24dd020 	sub	sp, sp, #32	; 0x20
        1e5fd8:	e1a0000d 	mov	r0, sp
        1e5fdc:	eb67f895 	bl	1be4238 <TAEvent::$__ct(void)>
        1e5fe0:	e59f0088 	ldr	r0, [pc, #88]	; 1e6070 <TSoundChannel::FreeNode(ChannelNode *, long, int)+0xb8>
        1e5fe4:	e58d0000 	str	r0, [sp]
        1e5fe8:	e59f0084 	ldr	r0, [pc, #84]	; 1e6074 <TSoundChannel::FreeNode(ChannelNode *, long, int)+0xbc>
        1e5fec:	e3a08000 	mov	r8, #0	; 0x0
        1e5ff0:	e98d0101 	stmib	sp, {r0, r8}
        1e5ff4:	e58d8010 	str	r8, [sp, #16]	; fField16
        1e5ff8:	e58d8014 	str	r8, [sp, #20]	; fField20
        1e5ffc:	e58d8018 	str	r8, [sp, #24]	; fField24
        1e6000:	e58d700c 	str	r7, [sp, #12]	; fField12
        1e6004:	e58d801c 	str	r8, [sp, #28]	; fField28
        1e6008:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1e600c:	e58d0008 	str	r0, [sp, #8]	; fField8
        1e6010:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1e6014:	e58d0014 	str	r0, [sp, #20]	; fField20
        1e6018:	e58d6018 	str	r6, [sp, #24]	; fField24
        1e601c:	e595000c 	ldr	r0, [r5, #12]	; fField12
        1e6020:	e58d001c 	str	r0, [sp, #28]	; fField28
        1e6024:	e2850044 	add	r0, r5, #68	; 0x44
        1e6028:	e1a0100d 	mov	r1, sp
        1e602c:	e3a03000 	mov	r3, #0	; 0x0
        1e6030:	e3a02020 	mov	r2, #32	; 0x20
        1e6034:	eb67cf2c 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        1e6038:	e1a06000 	mov	r6, r0
        1e603c:	e3a00000 	mov	r0, #0	; 0x0
        1e6040:	e5941010 	ldr	r1, [r4, #16]	; fField16
        1e6044:	e1b02001 	movs	r2, r1
        1e6048:	0a000005 	beq	1e6064 <TSoundChannel::FreeNode(ChannelNode *, long, int)+0xac>
        1e604c:	e2800001 	add	r0, r0, #1	; 0x1
        1e6050:	e5911000 	ldr	r1, [r1]
        1e6054:	e3310000 	teq	r1, #0	; 0x0
        1e6058:	1afffffb 	bne	1e604c <TSoundChannel::FreeNode(ChannelNode *, long, int)+0x94>
        1e605c:	e3500002 	cmp	r0, #2	; 0x2
        1e6060:	aa000004 	bge	1e6078 <TSoundChannel::FreeNode(ChannelNode *, long, int)+0xc0>
        1e6064:	e5852000 	str	r2, [r5]
        1e6068:	e5845010 	str	r5, [r4, #16]	; fField16
        1e606c:	ea000003 	b	1e6080 <TSoundChannel::FreeNode(ChannelNode *, long, int)+0xc8>
        1e6070:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1e6074:	75736e64 	ldrvcb	r6, [r3, -#3684]!
        1e6078:	e1a00005 	mov	r0, r5
        1e607c:	eb679d97 	bl	1bcd6e0 <$__dl(void *)>
        1e6080:	e594000c 	ldr	r0, [r4, #12]	; fField12
        1e6084:	e3300000 	teq	r0, #0	; 0x0
        1e6088:	05940014 	ldreq	r0, [r4, #20]	; fField20
        1e608c:	02001040 	andeq	r1, r0, #64	; 0x40
        1e6090:	03310000 	teqeq	r1, #0	; 0x0
        1e6094:	1a00000b 	bne	1e60c8 <TSoundChannel::FreeNode(ChannelNode *, long, int)+0x110>
        1e6098:	e3c0000c 	bic	r0, r0, #12	; 0xc
        1e609c:	e5840014 	str	r0, [r4, #20]	; fField20
        1e60a0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1e60a4:	e3300000 	teq	r0, #0	; 0x0
        1e60a8:	0a000006 	beq	1e60c8 <TSoundChannel::FreeNode(ChannelNode *, long, int)+0x110>
        1e60ac:	e284001c 	add	r0, r4, #28	; 0x1c
        1e60b0:	e1a0100d 	mov	r1, sp
        1e60b4:	e3a03000 	mov	r3, #0	; 0x0
        1e60b8:	e3a02014 	mov	r2, #20	; 0x14
        1e60bc:	eb67cf0a 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        1e60c0:	e1a06000 	mov	r6, r0
        1e60c4:	e5a48018 	str	r8, [r4, #24]!	; fField24
        1e60c8:	e1a00006 	mov	r0, r6
        1e60cc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundChannel::CleanupNode(ChannelNode *)
 * Address: 001e60d0
 */
TSoundChannel::CleanupNode(ChannelNode *) {
    /*
        1e60d0:	e5910004 	ldr	r0, [r1, #4]	; fField4
        1e60d4:	e3100001 	tst	r0, #1	; 0x1
        1e60d8:	01a0f00e 	moveq	pc, lr
        1e60dc:	e3c00001 	bic	r0, r0, #1	; 0x1
        1e60e0:	e5a10004 	str	r0, [r1, #4]!	; fField4
        1e60e4:	e59f000c 	ldr	r0, [pc, #c]	; 1e60f8 <TSoundChannel::CleanupNode(ChannelNode *)+0x28>
        1e60e8:	e5901000 	ldr	r1, [r0]
        1e60ec:	e2411001 	sub	r1, r1, #1	; 0x1
        1e60f0:	e5801000 	str	r1, [r0]
        1e60f4:	e1a0f00e 	mov	pc, lr
        1e60f8:	0c101b1c 	ldceq	11, cr1, [r0], -#112
    */
}

