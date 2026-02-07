#include "include/TATPInterface.h"

/**
 * Symbol: TATPInterface::OpenResponder(unsigned char *, unsigned short, unsigned char, unsigned char, unsigned long, unsigned char, unsigned char)
 * Address: 00027200
 */
TATPInterface::OpenResponder(unsigned char *, unsigned short, unsigned char, unsigned char, unsigned long, unsigned char, unsigned char) {
    /*
         27200:	e1a0c00d 	mov	ip, sp
         27204:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         27208:	e24cb004 	sub	fp, ip, #4	; 0x4
         2720c:	e1a04001 	mov	r4, r1
         27210:	e1a05802 	mov	r5, r2, lsl #16
         27214:	e1a05825 	mov	r5, r5, lsr #16
         27218:	e20360ff 	and	r6, r3, #255	; 0xff
         2721c:	e59bc004 	ldr	ip, [fp, #4]
         27220:	e20c70ff 	and	r7, ip, #255	; 0xff
         27224:	e59b100c 	ldr	r1, [fp, #12]
         27228:	e20180ff 	and	r8, r1, #255	; 0xff
         2722c:	e59b0010 	ldr	r0, [fp, #16]
         27230:	e20090ff 	and	r9, r0, #255	; 0xff
         27234:	e59ba008 	ldr	sl, [fp, #8]
         27238:	e24dd03c 	sub	sp, sp, #60	; 0x3c
         2723c:	e28d0018 	add	r0, sp, #24	; 0x18
         27240:	eb6ef3fc 	bl	1be4238 <TAEvent::$__ct(void)>
         27244:	e59f0098 	ldr	r0, [pc, #98]	; 272e4 <TATPInterface::OpenResponder(unsigned char *, unsigned short, unsigned char, unsigned char, unsigned long, unsigned char, unsigned char)+0xe4>
         27248:	e58d0018 	str	r0, [sp, #24]
         2724c:	e3a00000 	mov	r0, #0	; 0x0
         27250:	e58d0024 	str	r0, [sp, #36]
         27254:	e58d0020 	str	r0, [sp, #32]
         27258:	e59f0088 	ldr	r0, [pc, #88]	; 272e8 <TATPInterface::OpenResponder(unsigned char *, unsigned short, unsigned char, unsigned char, unsigned long, unsigned char, unsigned char)+0xe8>
         2725c:	e58d001c 	str	r0, [sp, #28]
         27260:	e3a00c03 	mov	r0, #768	; 0x300
         27264:	e58d0028 	str	r0, [sp, #40]
         27268:	e1a0000d 	mov	r0, sp
         2726c:	eb6ef3f1 	bl	1be4238 <TAEvent::$__ct(void)>
         27270:	e59f006c 	ldr	r0, [pc, #6c]	; 272e4 <TATPInterface::OpenResponder(unsigned char *, unsigned short, unsigned char, unsigned char, unsigned long, unsigned char, unsigned char)+0xe4>
         27274:	e58d0000 	str	r0, [sp]
         27278:	e3a00000 	mov	r0, #0	; 0x0
         2727c:	e58d000c 	str	r0, [sp, #12]
         27280:	e58d0008 	str	r0, [sp, #8]
         27284:	e5d40000 	ldrb	r0, [r4]
         27288:	e5cd002c 	strb	r0, [sp, #44]
         2728c:	e58da034 	str	sl, [sp, #52]
         27290:	e5cd502f 	strb	r5, [sp, #47]
         27294:	e1a00425 	mov	r0, r5, lsr #8
         27298:	e5cd002e 	strb	r0, [sp, #46]
         2729c:	e5cd6030 	strb	r6, [sp, #48]
         272a0:	e5cd7031 	strb	r7, [sp, #49]
         272a4:	e5cd8038 	strb	r8, [sp, #56]
         272a8:	e1a03009 	mov	r3, r9
         272ac:	e3a02000 	mov	r2, #0	; 0x0
         272b0:	e92d000c 	stmdb	sp!, {r2, r3}
         272b4:	e28d2008 	add	r2, sp, #8	; 0x8
         272b8:	e28d0020 	add	r0, sp, #32	; 0x20
         272bc:	e3a03018 	mov	r3, #24	; 0x18
         272c0:	e3a01024 	mov	r1, #36	; 0x24
         272c4:	eb69677e 	bl	1a810c4 <$ATSendRPCSync__FP17TAppleTalkMessageUlT1T2UcT5>
         272c8:	e28dd008 	add	sp, sp, #8	; 0x8
         272cc:	e3300000 	teq	r0, #0	; 0x0
         272d0:	059d1008 	ldreq	r1, [sp, #8]
         272d4:	03310000 	teqeq	r1, #0	; 0x0
         272d8:	05dd1014 	ldreqb	r1, [sp, #20]
         272dc:	05c41000 	streqb	r1, [r4]
         272e0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         272e4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         272e8:	61747020 	cmnvs	r4, r0, lsr #32
    */
}

/**
 * Symbol: TATPInterface::OpenResponder(unsigned char *, unsigned short, unsigned char, unsigned char, unsigned long, unsigned char)
 * Address: 000272ec
 */
TATPInterface::OpenResponder(unsigned char *, unsigned short, unsigned char, unsigned char, unsigned long, unsigned char) {
    /*
         272ec:	e1a0c00d 	mov	ip, sp
         272f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         272f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         272f8:	e1a0e000 	mov	lr, r0
         272fc:	e1a0c001 	mov	ip, r1
         27300:	e1a04802 	mov	r4, r2, lsl #16
         27304:	e1a04824 	mov	r4, r4, lsr #16
         27308:	e20350ff 	and	r5, r3, #255	; 0xff
         2730c:	e99b0043 	ldmib	fp, {r0, r1, r6}
         27310:	e20000ff 	and	r0, r0, #255	; 0xff
         27314:	e20620ff 	and	r2, r6, #255	; 0xff
         27318:	e3a03001 	mov	r3, #1	; 0x1
         2731c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         27320:	e1a03005 	mov	r3, r5
         27324:	e1a02004 	mov	r2, r4
         27328:	e1a0100c 	mov	r1, ip
         2732c:	e1a0000e 	mov	r0, lr
         27330:	eb6973cd 	bl	1a8426c <TATPInterface::$OpenResponder(unsigned char *, unsigned short, unsigned char, unsigned char, unsigned long, unsigned char, unsigned char)>
         27334:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TATPInterface::CloseResponder(unsigned char, unsigned char)
 * Address: 00027338
 */
TATPInterface::CloseResponder(unsigned char, unsigned char) {
    /*
         27338:	e1a0c00d 	mov	ip, sp
         2733c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         27340:	e24cb004 	sub	fp, ip, #4	; 0x4
         27344:	e20150ff 	and	r5, r1, #255	; 0xff
         27348:	e20270ff 	and	r7, r2, #255	; 0xff
         2734c:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         27350:	e28d0014 	add	r0, sp, #20	; 0x14
         27354:	eb6ef3b7 	bl	1be4238 <TAEvent::$__ct(void)>
         27358:	e59f6068 	ldr	r6, [pc, #68]	; 273c8 <TATPInterface::CloseResponder(unsigned char, unsigned char)+0x90>
         2735c:	e3a04000 	mov	r4, #0	; 0x0
         27360:	e58d4020 	str	r4, [sp, #32]
         27364:	e58d6014 	str	r6, [sp, #20]
         27368:	e58d401c 	str	r4, [sp, #28]
         2736c:	e59f0058 	ldr	r0, [pc, #58]	; 273cc <TATPInterface::CloseResponder(unsigned char, unsigned char)+0x94>
         27370:	e58d0018 	str	r0, [sp, #24]
         27374:	e3a00001 	mov	r0, #1	; 0x1
         27378:	e2800c03 	add	r0, r0, #768	; 0x300
         2737c:	e58d0024 	str	r0, [sp, #36]
         27380:	e1a0000d 	mov	r0, sp
         27384:	eb6ef3ab 	bl	1be4238 <TAEvent::$__ct(void)>
         27388:	e58d400c 	str	r4, [sp, #12]
         2738c:	e58d6000 	str	r6, [sp]
         27390:	e58d4008 	str	r4, [sp, #8]
         27394:	e5cd5028 	strb	r5, [sp, #40]
         27398:	e1a03007 	mov	r3, r7
         2739c:	e3a02000 	mov	r2, #0	; 0x0
         273a0:	e92d000c 	stmdb	sp!, {r2, r3}
         273a4:	e28d2008 	add	r2, sp, #8	; 0x8
         273a8:	e28d001c 	add	r0, sp, #28	; 0x1c
         273ac:	e3a03014 	mov	r3, #20	; 0x14
         273b0:	e3a01018 	mov	r1, #24	; 0x18
         273b4:	eb696742 	bl	1a810c4 <$ATSendRPCSync__FP17TAppleTalkMessageUlT1T2UcT5>
         273b8:	e28dd008 	add	sp, sp, #8	; 0x8
         273bc:	e3300000 	teq	r0, #0	; 0x0
         273c0:	059d0008 	ldreq	r0, [sp, #8]
         273c4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         273c8:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         273cc:	61747020 	cmnvs	r4, r0, lsr #32
    */
}

/**
 * Symbol: TATPInterface::CloseResponder(unsigned char)
 * Address: 000273d0
 */
TATPInterface::CloseResponder(unsigned char) {
    /*
         273d0:	e20110ff 	and	r1, r1, #255	; 0xff
         273d4:	e3a02001 	mov	r2, #1	; 0x1
         273d8:	ea696b50 	b	1a82120 <TATPInterface::$CloseResponder(unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TATPInterface::SendRequestAsync(TAsyncEvent *, unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)
 * Address: 000273dc
 */
TATPInterface::SendRequestAsync(TAsyncEvent *, unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char) {
    /*
         273dc:	e1a0c00d 	mov	ip, sp
         273e0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         273e4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         273e8:	e24cb014 	sub	fp, ip, #20	; 0x14
         273ec:	e1a04001 	mov	r4, r1
         273f0:	e20220ff 	and	r2, r2, #255	; 0xff
         273f4:	e59b002c 	ldr	r0, [fp, #44]
         273f8:	e28b8020 	add	r8, fp, #32	; 0x20
         273fc:	e8980102 	ldmia	r8, {r1, r8}
         27400:	e59b301c 	ldr	r3, [fp, #28]
         27404:	e59b9018 	ldr	r9, [fp, #24]
         27408:	e59ba014 	ldr	sl, [fp, #20]
         2740c:	e52d2010 	str	r2, [sp, -#16]!
         27410:	e20320ff 	and	r2, r3, #255	; 0xff
         27414:	e20110ff 	and	r1, r1, #255	; 0xff
         27418:	e20000ff 	and	r0, r0, #255	; 0xff
         2741c:	e3a05000 	mov	r5, #0	; 0x0
         27420:	e3a06000 	mov	r6, #0	; 0x0
         27424:	e58d000c 	str	r0, [sp, #12]
         27428:	e58d1008 	str	r1, [sp, #8]
         2742c:	e58d2004 	str	r2, [sp, #4]
         27430:	e24dd008 	sub	sp, sp, #8	; 0x8
         27434:	e3a00000 	mov	r0, #0	; 0x0
         27438:	e5cd0004 	strb	r0, [sp, #4]
         2743c:	e58d0000 	str	r0, [sp]
         27440:	e1a0000d 	mov	r0, sp
         27444:	eb693583 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
         27448:	e1b07000 	movs	r7, r0
         2744c:	1a00004b 	bne	27580 <TATPInterface::SendRequestAsync(TAsyncEvent *, unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0x1a4>
         27450:	e3a0003c 	mov	r0, #60	; 0x3c
         27454:	eb6e9cb7 	bl	1bce738 <$__nw(unsigned int)>
         27458:	e1b05000 	movs	r5, r0
         2745c:	e59f7148 	ldr	r7, [pc, #148]	; 275ac <TATPInterface::SendRequestAsync(TAsyncEvent *, unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0x1d0>
         27460:	0a00000d 	beq	2749c <TATPInterface::SendRequestAsync(TAsyncEvent *, unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0xc0>
         27464:	e1a00005 	mov	r0, r5
         27468:	eb6ef372 	bl	1be4238 <TAEvent::$__ct(void)>
         2746c:	e3a00000 	mov	r0, #0	; 0x0
         27470:	e585000c 	str	r0, [r5, #12]
         27474:	e5857000 	str	r7, [r5]
         27478:	e5850008 	str	r0, [r5, #8]
         2747c:	e2850018 	add	r0, r5, #24	; 0x18
         27480:	e3a01001 	mov	r1, #1	; 0x1
         27484:	eb6f3148 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         27488:	e59f0120 	ldr	r0, [pc, #120]	; 275b0 <TATPInterface::SendRequestAsync(TAsyncEvent *, unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0x1d4>
         2748c:	e5850004 	str	r0, [r5, #4]
         27490:	e3a00002 	mov	r0, #2	; 0x2
         27494:	e2800c03 	add	r0, r0, #768	; 0x300
         27498:	e5850010 	str	r0, [r5, #16]
         2749c:	e3a00014 	mov	r0, #20	; 0x14
         274a0:	eb6e9ca4 	bl	1bce738 <$__nw(unsigned int)>
         274a4:	e1b06000 	movs	r6, r0
         274a8:	0a000005 	beq	274c4 <TATPInterface::SendRequestAsync(TAsyncEvent *, unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0xe8>
         274ac:	e1a00006 	mov	r0, r6
         274b0:	eb6ef360 	bl	1be4238 <TAEvent::$__ct(void)>
         274b4:	e3a00000 	mov	r0, #0	; 0x0
         274b8:	e586000c 	str	r0, [r6, #12]
         274bc:	e5867000 	str	r7, [r6]
         274c0:	e5860008 	str	r0, [r6, #8]
         274c4:	e3a070a8 	mov	r7, #168	; 0xa8
         274c8:	e2477b07 	sub	r7, r7, #7168	; 0x1c00
         274cc:	e3350000 	teq	r5, #0	; 0x0
         274d0:	13360000 	teqne	r6, #0	; 0x0
         274d4:	0a00002b 	beq	27588 <TATPInterface::SendRequestAsync(TAsyncEvent *, unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0x1ac>
         274d8:	e59d0008 	ldr	r0, [sp, #8]
         274dc:	e5c50014 	strb	r0, [r5, #20]
         274e0:	e2850018 	add	r0, r5, #24	; 0x18
         274e4:	e59b1010 	ldr	r1, [fp, #16]
         274e8:	eb6f3130 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         274ec:	e5859028 	str	r9, [r5, #40]
         274f0:	e585a024 	str	sl, [r5, #36]
         274f4:	e59d200c 	ldr	r2, [sp, #12]
         274f8:	e5c5202c 	strb	r2, [r5, #44]
         274fc:	e5858030 	str	r8, [r5, #48]
         27500:	e59b0028 	ldr	r0, [fp, #40]
         27504:	e5850034 	str	r0, [r5, #52]
         27508:	e59d0014 	ldr	r0, [sp, #20]
         2750c:	e5c50038 	strb	r0, [r5, #56]
         27510:	e59d1010 	ldr	r1, [sp, #16]
         27514:	e5c51015 	strb	r1, [r5, #21]
         27518:	e1a01006 	mov	r1, r6
         2751c:	e5845010 	str	r5, [r4, #16]
         27520:	e1a00004 	mov	r0, r4
         27524:	eb6962a3 	bl	1a7ffb8 <TAsyncEvent::$SetReply(TAppleTalkMessage *)>
         27528:	e1a0c004 	mov	ip, r4
         2752c:	e1a00006 	mov	r0, r6
         27530:	e3a01014 	mov	r1, #20	; 0x14
         27534:	e3a02000 	mov	r2, #0	; 0x0
         27538:	e3a03000 	mov	r3, #0	; 0x0
         2753c:	e3a0e000 	mov	lr, #0	; 0x0
         27540:	e3a04000 	mov	r4, #0	; 0x0
         27544:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         27548:	e1a03004 	mov	r3, r4
         2754c:	e3a02001 	mov	r2, #1	; 0x1
         27550:	e1a0100e 	mov	r1, lr
         27554:	e3a0003c 	mov	r0, #60	; 0x3c
         27558:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         2755c:	e1a03005 	mov	r3, r5
         27560:	e92d0008 	stmdb	sp!, {r3}
         27564:	e28d0024 	add	r0, sp, #36	; 0x24
         27568:	e3a03000 	mov	r3, #0	; 0x0
         2756c:	e49c1008 	ldr	r1, [ip], #8
         27570:	e59c2000 	ldr	r2, [ip]
         27574:	eb6ecdf4 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         27578:	e28dd024 	add	sp, sp, #36	; 0x24
         2757c:	e1a07000 	mov	r7, r0
         27580:	e3370000 	teq	r7, #0	; 0x0
         27584:	0a000003 	beq	27598 <TATPInterface::SendRequestAsync(TAsyncEvent *, unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0x1bc>
         27588:	e1a00005 	mov	r0, r5
         2758c:	eb6e9853 	bl	1bcd6e0 <$__dl(void *)>
         27590:	e1a00006 	mov	r0, r6
         27594:	eb6e9851 	bl	1bcd6e0 <$__dl(void *)>
         27598:	e1a0000d 	mov	r0, sp
         2759c:	e3a01000 	mov	r1, #0	; 0x0
         275a0:	eb6e9c5f 	bl	1bce724 <TUObject::$__dt(void)>
         275a4:	e1a00007 	mov	r0, r7
         275a8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         275ac:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         275b0:	61747020 	cmnvs	r4, r0, lsr #32
    */
}

/**
 * Symbol: TATPInterface::SendRequest(unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)
 * Address: 000275b4
 */
TATPInterface::SendRequest(unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char) {
    /*
         275b4:	e1a0c00d 	mov	ip, sp
         275b8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         275bc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         275c0:	e24cb014 	sub	fp, ip, #20	; 0x14
         275c4:	e20140ff 	and	r4, r1, #255	; 0xff
         275c8:	e59b3018 	ldr	r3, [fp, #24]
         275cc:	e20350ff 	and	r5, r3, #255	; 0xff
         275d0:	e28b901c 	add	r9, fp, #28	; 0x1c
         275d4:	e8990204 	ldmia	r9, {r2, r9}
         275d8:	e20260ff 	and	r6, r2, #255	; 0xff
         275dc:	e59b0028 	ldr	r0, [fp, #40]
         275e0:	e20070ff 	and	r7, r0, #255	; 0xff
         275e4:	e59b8024 	ldr	r8, [fp, #36]
         275e8:	e59ba014 	ldr	sl, [fp, #20]
         275ec:	e24dd054 	sub	sp, sp, #84	; 0x54
         275f0:	e28d0014 	add	r0, sp, #20	; 0x14
         275f4:	eb6ef30f 	bl	1be4238 <TAEvent::$__ct(void)>
         275f8:	e59f00b0 	ldr	r0, [pc, #b0]	; 276b0 <TATPInterface::SendRequest(unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0xfc>
         275fc:	e58d0014 	str	r0, [sp, #20]
         27600:	e3a00000 	mov	r0, #0	; 0x0
         27604:	e58d0020 	str	r0, [sp, #32]
         27608:	e58d001c 	str	r0, [sp, #28]
         2760c:	e28d002c 	add	r0, sp, #44	; 0x2c
         27610:	e3a01001 	mov	r1, #1	; 0x1
         27614:	e58d0050 	str	r0, [sp, #80]
         27618:	eb6f30e3 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         2761c:	e59f0090 	ldr	r0, [pc, #90]	; 276b4 <TATPInterface::SendRequest(unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0x100>
         27620:	e58d0018 	str	r0, [sp, #24]
         27624:	e3a00002 	mov	r0, #2	; 0x2
         27628:	e2800c03 	add	r0, r0, #768	; 0x300
         2762c:	e58d0024 	str	r0, [sp, #36]
         27630:	e1a0000d 	mov	r0, sp
         27634:	eb6ef2ff 	bl	1be4238 <TAEvent::$__ct(void)>
         27638:	e59f0070 	ldr	r0, [pc, #70]	; 276b0 <TATPInterface::SendRequest(unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0xfc>
         2763c:	e58d0000 	str	r0, [sp]
         27640:	e3a00000 	mov	r0, #0	; 0x0
         27644:	e58d000c 	str	r0, [sp, #12]
         27648:	e58d0008 	str	r0, [sp, #8]
         2764c:	e5cd4028 	strb	r4, [sp, #40]
         27650:	e59d0050 	ldr	r0, [sp, #80]
         27654:	e59b100c 	ldr	r1, [fp, #12]
         27658:	eb6f30d4 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         2765c:	e59b3010 	ldr	r3, [fp, #16]
         27660:	e58d3038 	str	r3, [sp, #56]
         27664:	e58da03c 	str	sl, [sp, #60]
         27668:	e5cd5040 	strb	r5, [sp, #64]
         2766c:	e58d8048 	str	r8, [sp, #72]
         27670:	e58d9044 	str	r9, [sp, #68]
         27674:	e5cd704c 	strb	r7, [sp, #76]
         27678:	e5cd6029 	strb	r6, [sp, #41]
         2767c:	e24dd008 	sub	sp, sp, #8	; 0x8
         27680:	e3a00000 	mov	r0, #0	; 0x0
         27684:	e5cd0004 	strb	r0, [sp, #4]
         27688:	e58d0000 	str	r0, [sp]
         2768c:	e1a0000d 	mov	r0, sp
         27690:	eb6934f0 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
         27694:	e1b04000 	movs	r4, r0
         27698:	0a000006 	beq	276b8 <TATPInterface::SendRequest(unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0x104>
         2769c:	e1a0000d 	mov	r0, sp
         276a0:	e3a01000 	mov	r1, #0	; 0x0
         276a4:	eb6e9c1e 	bl	1bce724 <TUObject::$__dt(void)>
         276a8:	e28dd058 	add	sp, sp, #88	; 0x58
         276ac:	ea000026 	b	2774c <TATPInterface::SendRequest(unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0x198>
         276b0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         276b4:	61747020 	cmnvs	r4, r0, lsr #32
         276b8:	eb6eb0c5 	bl	1bd39d4 <$GetGlobals>
         276bc:	eb6e1c27 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
         276c0:	e24dd004 	sub	sp, sp, #4	; 0x4
         276c4:	e28d000c 	add	r0, sp, #12	; 0xc
         276c8:	e3a01014 	mov	r1, #20	; 0x14
         276cc:	e3a02000 	mov	r2, #0	; 0x0
         276d0:	e3a0c000 	mov	ip, #0	; 0x0
         276d4:	e3a0e000 	mov	lr, #0	; 0x0
         276d8:	e3a03000 	mov	r3, #0	; 0x0
         276dc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         276e0:	e1a0300e 	mov	r3, lr
         276e4:	e1a0100c 	mov	r1, ip
         276e8:	e3a0003c 	mov	r0, #60	; 0x3c
         276ec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         276f0:	e28d3040 	add	r3, sp, #64	; 0x40
         276f4:	e92d0008 	stmdb	sp!, {r3}
         276f8:	e28d3024 	add	r3, sp, #36	; 0x24
         276fc:	e28d0028 	add	r0, sp, #40	; 0x28
         27700:	e3a02002 	mov	r2, #2	; 0x2
         27704:	e3a01001 	mov	r1, #1	; 0x1
         27708:	eb6ecd8f 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         2770c:	e28dd024 	add	sp, sp, #36	; 0x24
         27710:	e1b04000 	movs	r4, r0
         27714:	0a000004 	beq	2772c <TATPInterface::SendRequest(unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0x178>
         27718:	e28d0004 	add	r0, sp, #4	; 0x4
         2771c:	e3a01000 	mov	r1, #0	; 0x0
         27720:	eb6e9bff 	bl	1bce724 <TUObject::$__dt(void)>
         27724:	e28dd05c 	add	sp, sp, #92	; 0x5c
         27728:	ea000007 	b	2774c <TATPInterface::SendRequest(unsigned char, TAddress *, unsigned long, unsigned long, unsigned char, unsigned char, unsigned long, unsigned long, unsigned char)+0x198>
         2772c:	eb6eb0a8 	bl	1bd39d4 <$GetGlobals>
         27730:	eb6e0faf 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
         27734:	e59d4014 	ldr	r4, [sp, #20]
         27738:	e28dd004 	add	sp, sp, #4	; 0x4
         2773c:	e1a0000d 	mov	r0, sp
         27740:	e3a01000 	mov	r1, #0	; 0x0
         27744:	eb6e9bf6 	bl	1bce724 <TUObject::$__dt(void)>
         27748:	e28dd058 	add	sp, sp, #88	; 0x58
         2774c:	e1a00004 	mov	r0, r4
         27750:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TATPInterface::WantRequest(unsigned char, unsigned long, unsigned long, unsigned long)
 * Address: 00027754
 */
TATPInterface::WantRequest(unsigned char, unsigned long, unsigned long, unsigned long) {
    /*
         27754:	e1a0c00d 	mov	ip, sp
         27758:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         2775c:	e24cb004 	sub	fp, ip, #4	; 0x4
         27760:	e1a05002 	mov	r5, r2
         27764:	e1a04003 	mov	r4, r3
         27768:	e20170ff 	and	r7, r1, #255	; 0xff
         2776c:	e59b9004 	ldr	r9, [fp, #4]
         27770:	e24dd038 	sub	sp, sp, #56	; 0x38
         27774:	e28d0014 	add	r0, sp, #20	; 0x14
         27778:	eb6ef2ae 	bl	1be4238 <TAEvent::$__ct(void)>
         2777c:	e59f806c 	ldr	r8, [pc, #6c]	; 277f0 <TATPInterface::WantRequest(unsigned char, unsigned long, unsigned long, unsigned long)+0x9c>
         27780:	e3a06000 	mov	r6, #0	; 0x0
         27784:	e58d6020 	str	r6, [sp, #32]
         27788:	e58d8014 	str	r8, [sp, #20]
         2778c:	e58d601c 	str	r6, [sp, #28]
         27790:	e59f005c 	ldr	r0, [pc, #5c]	; 277f4 <TATPInterface::WantRequest(unsigned char, unsigned long, unsigned long, unsigned long)+0xa0>
         27794:	e58d0018 	str	r0, [sp, #24]
         27798:	e3a00fc1 	mov	r0, #772	; 0x304
         2779c:	e58d0024 	str	r0, [sp, #36]
         277a0:	e1a0000d 	mov	r0, sp
         277a4:	eb6ef2a3 	bl	1be4238 <TAEvent::$__ct(void)>
         277a8:	e58d600c 	str	r6, [sp, #12]
         277ac:	e40d8008 	str	r8, [sp], -#8
         277b0:	e58d6010 	str	r6, [sp, #16]
         277b4:	e5cd7030 	strb	r7, [sp, #48]
         277b8:	e58d403c 	str	r4, [sp, #60]
         277bc:	e58d5034 	str	r5, [sp, #52]
         277c0:	e58d9038 	str	r9, [sp, #56]
         277c4:	e5cd6004 	strb	r6, [sp, #4]
         277c8:	e58d6000 	str	r6, [sp]
         277cc:	e1a0000d 	mov	r0, sp
         277d0:	eb6934a0 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
         277d4:	e1b04000 	movs	r4, r0
         277d8:	0a000006 	beq	277f8 <TATPInterface::WantRequest(unsigned char, unsigned long, unsigned long, unsigned long)+0xa4>
         277dc:	e1a0000d 	mov	r0, sp
         277e0:	e3a01000 	mov	r1, #0	; 0x0
         277e4:	eb6e9bce 	bl	1bce724 <TUObject::$__dt(void)>
         277e8:	e28dd040 	add	sp, sp, #64	; 0x40
         277ec:	ea000025 	b	27888 <TATPInterface::WantRequest(unsigned char, unsigned long, unsigned long, unsigned long)+0x134>
         277f0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         277f4:	61747020 	cmnvs	r4, r0, lsr #32
         277f8:	eb6eb075 	bl	1bd39d4 <$GetGlobals>
         277fc:	eb6e1bd7 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
         27800:	e24dd004 	sub	sp, sp, #4	; 0x4
         27804:	e28d000c 	add	r0, sp, #12	; 0xc
         27808:	e3a01014 	mov	r1, #20	; 0x14
         2780c:	e3a02000 	mov	r2, #0	; 0x0
         27810:	e3a0c000 	mov	ip, #0	; 0x0
         27814:	e3a03000 	mov	r3, #0	; 0x0
         27818:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         2781c:	e1a03006 	mov	r3, r6
         27820:	e1a0100c 	mov	r1, ip
         27824:	e3a00024 	mov	r0, #36	; 0x24
         27828:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         2782c:	e28d3040 	add	r3, sp, #64	; 0x40
         27830:	e92d0008 	stmdb	sp!, {r3}
         27834:	e08d3000 	add	r3, sp, r0
         27838:	e28d0028 	add	r0, sp, #40	; 0x28
         2783c:	e3a02002 	mov	r2, #2	; 0x2
         27840:	e3a01001 	mov	r1, #1	; 0x1
         27844:	eb6ecd40 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         27848:	e28dd024 	add	sp, sp, #36	; 0x24
         2784c:	e1b04000 	movs	r4, r0
         27850:	0a000004 	beq	27868 <TATPInterface::WantRequest(unsigned char, unsigned long, unsigned long, unsigned long)+0x114>
         27854:	e28d0004 	add	r0, sp, #4	; 0x4
         27858:	e3a01000 	mov	r1, #0	; 0x0
         2785c:	eb6e9bb0 	bl	1bce724 <TUObject::$__dt(void)>
         27860:	e28dd044 	add	sp, sp, #68	; 0x44
         27864:	ea000007 	b	27888 <TATPInterface::WantRequest(unsigned char, unsigned long, unsigned long, unsigned long)+0x134>
         27868:	eb6eb059 	bl	1bd39d4 <$GetGlobals>
         2786c:	eb6e0f60 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
         27870:	e59d4014 	ldr	r4, [sp, #20]
         27874:	e28dd004 	add	sp, sp, #4	; 0x4
         27878:	e1a0000d 	mov	r0, sp
         2787c:	e3a01000 	mov	r1, #0	; 0x0
         27880:	eb6e9ba7 	bl	1bce724 <TUObject::$__dt(void)>
         27884:	e28dd040 	add	sp, sp, #64	; 0x40
         27888:	e1a00004 	mov	r0, r4
         2788c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TATPInterface::SendResponsesNoFork(TAddress *, unsigned char, unsigned short, unsigned long, unsigned char)
 * Address: 00027890
 */
TATPInterface::SendResponsesNoFork(TAddress *, unsigned char, unsigned short, unsigned long, unsigned char) {
    /*
         27890:	e1a0c00d 	mov	ip, sp
         27894:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         27898:	e24cb004 	sub	fp, ip, #4	; 0x4
         2789c:	e1a04001 	mov	r4, r1
         278a0:	e20250ff 	and	r5, r2, #255	; 0xff
         278a4:	e1a06803 	mov	r6, r3, lsl #16
         278a8:	e1a06826 	mov	r6, r6, lsr #16
         278ac:	e59b0008 	ldr	r0, [fp, #8]
         278b0:	e20080ff 	and	r8, r0, #255	; 0xff
         278b4:	e59ba004 	ldr	sl, [fp, #4]
         278b8:	e24dd044 	sub	sp, sp, #68	; 0x44
         278bc:	e28d0014 	add	r0, sp, #20	; 0x14
         278c0:	eb6ef25c 	bl	1be4238 <TAEvent::$__ct(void)>
         278c4:	e59f9098 	ldr	r9, [pc, #98]	; 27964 <TATPInterface::SendResponsesNoFork(TAddress *, unsigned char, unsigned short, unsigned long, unsigned char)+0xd4>
         278c8:	e3a00000 	mov	r0, #0	; 0x0
         278cc:	e58d0020 	str	r0, [sp, #32]
         278d0:	e58d9014 	str	r9, [sp, #20]
         278d4:	e58d001c 	str	r0, [sp, #28]
         278d8:	e28d0030 	add	r0, sp, #48	; 0x30
         278dc:	e1a07000 	mov	r7, r0
         278e0:	e3a01001 	mov	r1, #1	; 0x1
         278e4:	eb6f3030 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         278e8:	e59f0078 	ldr	r0, [pc, #78]	; 27968 <TATPInterface::SendResponsesNoFork(TAddress *, unsigned char, unsigned short, unsigned long, unsigned char)+0xd8>
         278ec:	e58d0018 	str	r0, [sp, #24]
         278f0:	e3a00005 	mov	r0, #5	; 0x5
         278f4:	e2800c03 	add	r0, r0, #768	; 0x300
         278f8:	e58d0024 	str	r0, [sp, #36]
         278fc:	e1a0000d 	mov	r0, sp
         27900:	eb6ef24c 	bl	1be4238 <TAEvent::$__ct(void)>
         27904:	e3a00000 	mov	r0, #0	; 0x0
         27908:	e58d000c 	str	r0, [sp, #12]
         2790c:	e58d9000 	str	r9, [sp]
         27910:	e58d0008 	str	r0, [sp, #8]
         27914:	e5cd5028 	strb	r5, [sp, #40]
         27918:	e1a00007 	mov	r0, r7
         2791c:	e1a01004 	mov	r1, r4
         27920:	e58d602c 	str	r6, [sp, #44]
         27924:	eb6f3021 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
         27928:	e58da040 	str	sl, [sp, #64]
         2792c:	e5cd803d 	strb	r8, [sp, #61]
         27930:	e24dd008 	sub	sp, sp, #8	; 0x8
         27934:	e3a00000 	mov	r0, #0	; 0x0
         27938:	e5cd0004 	strb	r0, [sp, #4]
         2793c:	e58d0000 	str	r0, [sp]
         27940:	e1a0000d 	mov	r0, sp
         27944:	eb693443 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
         27948:	e1b04000 	movs	r4, r0
         2794c:	0a000006 	beq	2796c <TATPInterface::SendResponsesNoFork(TAddress *, unsigned char, unsigned short, unsigned long, unsigned char)+0xdc>
         27950:	e1a0000d 	mov	r0, sp
         27954:	e3a01000 	mov	r1, #0	; 0x0
         27958:	eb6e9b71 	bl	1bce724 <TUObject::$__dt(void)>
         2795c:	e28dd04c 	add	sp, sp, #76	; 0x4c
         27960:	ea000022 	b	279f0 <TATPInterface::SendResponsesNoFork(TAddress *, unsigned char, unsigned short, unsigned long, unsigned char)+0x160>
         27964:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         27968:	61747020 	cmnvs	r4, r0, lsr #32
         2796c:	e24dd004 	sub	sp, sp, #4	; 0x4
         27970:	e28d000c 	add	r0, sp, #12	; 0xc
         27974:	e3a01014 	mov	r1, #20	; 0x14
         27978:	e3a02000 	mov	r2, #0	; 0x0
         2797c:	e3a0c000 	mov	ip, #0	; 0x0
         27980:	e3a0e000 	mov	lr, #0	; 0x0
         27984:	e3a03000 	mov	r3, #0	; 0x0
         27988:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         2798c:	e1a0300e 	mov	r3, lr
         27990:	e1a0100c 	mov	r1, ip
         27994:	e3a00030 	mov	r0, #48	; 0x30
         27998:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         2799c:	e28d3040 	add	r3, sp, #64	; 0x40
         279a0:	e92d0008 	stmdb	sp!, {r3}
         279a4:	e28d3024 	add	r3, sp, #36	; 0x24
         279a8:	e28d0028 	add	r0, sp, #40	; 0x28
         279ac:	e3a02002 	mov	r2, #2	; 0x2
         279b0:	e3a01001 	mov	r1, #1	; 0x1
         279b4:	eb6ecce4 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         279b8:	e28dd024 	add	sp, sp, #36	; 0x24
         279bc:	e1b04000 	movs	r4, r0
         279c0:	0a000004 	beq	279d8 <TATPInterface::SendResponsesNoFork(TAddress *, unsigned char, unsigned short, unsigned long, unsigned char)+0x148>
         279c4:	e28d0004 	add	r0, sp, #4	; 0x4
         279c8:	e3a01000 	mov	r1, #0	; 0x0
         279cc:	eb6e9b54 	bl	1bce724 <TUObject::$__dt(void)>
         279d0:	e28dd050 	add	sp, sp, #80	; 0x50
         279d4:	ea000005 	b	279f0 <TATPInterface::SendResponsesNoFork(TAddress *, unsigned char, unsigned short, unsigned long, unsigned char)+0x160>
         279d8:	e59d4014 	ldr	r4, [sp, #20]
         279dc:	e28dd004 	add	sp, sp, #4	; 0x4
         279e0:	e1a0000d 	mov	r0, sp
         279e4:	e3a01000 	mov	r1, #0	; 0x0
         279e8:	eb6e9b4d 	bl	1bce724 <TUObject::$__dt(void)>
         279ec:	e28dd04c 	add	sp, sp, #76	; 0x4c
         279f0:	e1a00004 	mov	r0, r4
         279f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TATPInterface::CancelAsync(TAsyncEvent *)
 * Address: 000279f8
 */
TATPInterface::CancelAsync(TAsyncEvent *) {
    /*
         279f8:	e1a00001 	mov	r0, r1
         279fc:	e3a03001 	mov	r3, #1	; 0x1
         27a00:	e3a02002 	mov	r2, #2	; 0x2
         27a04:	e2822c03 	add	r2, r2, #768	; 0x300
         27a08:	e59f1000 	ldr	r1, [pc, #0]	; 27a10 <TATPInterface::CancelAsync(TAsyncEvent *)+0x18>
         27a0c:	ea693c57 	b	1a76b70 <TAsyncEvent::$Cancel(unsigned long, unsigned long, unsigned char)>
         27a10:	61747020 	cmnvs	r4, r0, lsr #32
    */
}

