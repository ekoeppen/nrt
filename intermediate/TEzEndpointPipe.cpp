#include "include/TEzEndpointPipe.h"

/**
 * Symbol: TEzEndpointPipe::Abort(void)
 * Address: 000b0444
 */
TEzEndpointPipe::Abort(void) {
    /*
         b0444:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEzEndpointPipe::__ct(unsigned char)
 * Address: 000b0448
 */
TEzEndpointPipe::TEzEndpointPipe(unsigned char) {
    /*
         b0448:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEzEndpointPipe::GetMNPSerialEndpoint(void)
 * Address: 000b044c
 */
TEzEndpointPipe::GetMNPSerialEndpoint(void) {
    /*
         b044c:	e1a0c00d 	mov	ip, sp
         b0450:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b0454:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0458:	e1a04000 	mov	r4, r0
         b045c:	e24dd018 	sub	sp, sp, #24	; 0x18
         b0460:	e1a0000d 	mov	r0, sp
         b0464:	eb6c159e 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b0468:	e1a0000d 	mov	r0, sp
         b046c:	eb6c2202 	bl	1bb8c7c <TOptionArray::$Init(void)>
         b0470:	e584002c 	str	r0, [r4, #44]	; fField44
         b0474:	e3300000 	teq	r0, #0	; 0x0
         b0478:	1a000020 	bne	b0500 <TEzEndpointPipe::GetMNPSerialEndpoint(void)+0xb4>
         b047c:	e1a0000d 	mov	r0, sp
         b0480:	e5941030 	ldr	r1, [r4, #48]	; fField48
         b0484:	eb655bd8 	bl	1a073ec <$EzMNPSerialOptions(TOptionArray *, char **)>
         b0488:	e584002c 	str	r0, [r4, #44]	; fField44
         b048c:	e3300000 	teq	r0, #0	; 0x0
         b0490:	1a00001a 	bne	b0500 <TEzEndpointPipe::GetMNPSerialEndpoint(void)+0xb4>
         b0494:	e2841010 	add	r1, r4, #16	; 0x10
         b0498:	e1a0000d 	mov	r0, sp
         b049c:	e3a02000 	mov	r2, #0	; 0x0
         b04a0:	eb6c1dbe 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
         b04a4:	e584002c 	str	r0, [r4, #44]	; fField44
         b04a8:	e3300000 	teq	r0, #0	; 0x0
         b04ac:	1a000013 	bne	b0500 <TEzEndpointPipe::GetMNPSerialEndpoint(void)+0xb4>
         b04b0:	e3a01001 	mov	r1, #1	; 0x1
         b04b4:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b04b8:	eb655fe5 	bl	1a08454 <TEndpoint::$UseForks(unsigned char)>
         b04bc:	e1a0000d 	mov	r0, sp
         b04c0:	eb6c260d 	bl	1bb9cfc <TOptionArray::$RemoveAllOptions(void)>
         b04c4:	e584002c 	str	r0, [r4, #44]	; fField44
         b04c8:	e3300000 	teq	r0, #0	; 0x0
         b04cc:	1a00000b 	bne	b0500 <TEzEndpointPipe::GetMNPSerialEndpoint(void)+0xb4>
         b04d0:	e1a0000d 	mov	r0, sp
         b04d4:	e5941030 	ldr	r1, [r4, #48]	; fField48
         b04d8:	eb655bc1 	bl	1a073e4 <$EzMNPConnectOptions(TOptionArray *, char **)>
         b04dc:	e584002c 	str	r0, [r4, #44]	; fField44
         b04e0:	e3300000 	teq	r0, #0	; 0x0
         b04e4:	1a000005 	bne	b0500 <TEzEndpointPipe::GetMNPSerialEndpoint(void)+0xb4>
         b04e8:	e1a0200d 	mov	r2, sp
         b04ec:	e3a01000 	mov	r1, #0	; 0x0
         b04f0:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b04f4:	e5943034 	ldr	r3, [r4, #52]	; fField52
         b04f8:	eb6c21c3 	bl	1bb8c0c <TEndpoint::$EasyConnect(unsigned long, TOptionArray *, unsigned long)>
         b04fc:	e584002c 	str	r0, [r4, #44]	; fField44
         b0500:	e1a0000d 	mov	r0, sp
         b0504:	e3a01000 	mov	r1, #0	; 0x0
         b0508:	eb6c1987 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b050c:	e28dd018 	add	sp, sp, #24	; 0x18
         b0510:	e5b4102c 	ldr	r1, [r4, #44]!	; fField44
         b0514:	e3310000 	teq	r1, #0	; 0x0
         b0518:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b051c:	e59f000c 	ldr	r0, [pc, #c]	; b0530 <TEzEndpointPipe::GetMNPSerialEndpoint(void)+0xe4>
         b0520:	e5900000 	ldr	r0, [r0]
         b0524:	e3a02000 	mov	r2, #0	; 0x0
         b0528:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b052c:	ea6ccb1a 	b	1be319c <$Throw>
         b0530:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TEzEndpointPipe::GetSerialEndpoint(void)
 * Address: 000b0534
 */
TEzEndpointPipe::GetSerialEndpoint(void) {
    /*
         b0534:	e1a0c00d 	mov	ip, sp
         b0538:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b053c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0540:	e1a04000 	mov	r4, r0
         b0544:	e24dd018 	sub	sp, sp, #24	; 0x18
         b0548:	e1a0000d 	mov	r0, sp
         b054c:	eb6c1564 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b0550:	e1a0000d 	mov	r0, sp
         b0554:	eb6c21c8 	bl	1bb8c7c <TOptionArray::$Init(void)>
         b0558:	e584002c 	str	r0, [r4, #44]	; fField44
         b055c:	e3300000 	teq	r0, #0	; 0x0
         b0560:	1a000017 	bne	b05c4 <TEzEndpointPipe::GetSerialEndpoint(void)+0x90>
         b0564:	e1a0000d 	mov	r0, sp
         b0568:	e3a03b02 	mov	r3, #2048	; 0x800
         b056c:	e3a02b02 	mov	r2, #2048	; 0x800
         b0570:	e5941030 	ldr	r1, [r4, #48]	; fField48
         b0574:	eb655b9e 	bl	1a073f4 <$EzSerialOptions__FP12TOptionArrayPPclT3>
         b0578:	e584002c 	str	r0, [r4, #44]	; fField44
         b057c:	e3300000 	teq	r0, #0	; 0x0
         b0580:	1a00000f 	bne	b05c4 <TEzEndpointPipe::GetSerialEndpoint(void)+0x90>
         b0584:	e2841010 	add	r1, r4, #16	; 0x10
         b0588:	e1a0000d 	mov	r0, sp
         b058c:	e3a02000 	mov	r2, #0	; 0x0
         b0590:	eb6c1d82 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
         b0594:	e584002c 	str	r0, [r4, #44]	; fField44
         b0598:	e3300000 	teq	r0, #0	; 0x0
         b059c:	1a000008 	bne	b05c4 <TEzEndpointPipe::GetSerialEndpoint(void)+0x90>
         b05a0:	e3a01001 	mov	r1, #1	; 0x1
         b05a4:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b05a8:	eb655fa9 	bl	1a08454 <TEndpoint::$UseForks(unsigned char)>
         b05ac:	e3a02000 	mov	r2, #0	; 0x0
         b05b0:	e3a01000 	mov	r1, #0	; 0x0
         b05b4:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b05b8:	e5943034 	ldr	r3, [r4, #52]	; fField52
         b05bc:	eb6c2192 	bl	1bb8c0c <TEndpoint::$EasyConnect(unsigned long, TOptionArray *, unsigned long)>
         b05c0:	e584002c 	str	r0, [r4, #44]	; fField44
         b05c4:	e1a0000d 	mov	r0, sp
         b05c8:	e3a01000 	mov	r1, #0	; 0x0
         b05cc:	eb6c1956 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b05d0:	e28dd018 	add	sp, sp, #24	; 0x18
         b05d4:	e5b4102c 	ldr	r1, [r4, #44]!	; fField44
         b05d8:	e3310000 	teq	r1, #0	; 0x0
         b05dc:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b05e0:	e59f000c 	ldr	r0, [pc, #c]	; b05f4 <TEzEndpointPipe::GetSerialEndpoint(void)+0xc0>
         b05e4:	e5900000 	ldr	r0, [r0]
         b05e8:	e3a02000 	mov	r2, #0	; 0x0
         b05ec:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b05f0:	ea6ccae9 	b	1be319c <$Throw>
         b05f4:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TEzEndpointPipe::GetADSPEndpoint(void)
 * Address: 000b05f8
 */
TEzEndpointPipe::GetADSPEndpoint(void) {
    /*
         b05f8:	e1a0c00d 	mov	ip, sp
         b05fc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b0600:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0604:	e1a04000 	mov	r4, r0
         b0608:	e24dd018 	sub	sp, sp, #24	; 0x18
         b060c:	e1a0000d 	mov	r0, sp
         b0610:	eb6c1533 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b0614:	e1a0000d 	mov	r0, sp
         b0618:	eb6c2197 	bl	1bb8c7c <TOptionArray::$Init(void)>
         b061c:	e584002c 	str	r0, [r4, #44]	; fField44
         b0620:	e3300000 	teq	r0, #0	; 0x0
         b0624:	1a000041 	bne	b0730 <TEzEndpointPipe::GetADSPEndpoint(void)+0x138>
         b0628:	e1a0000d 	mov	r0, sp
         b062c:	e3a03b02 	mov	r3, #2048	; 0x800
         b0630:	e3a02b02 	mov	r2, #2048	; 0x800
         b0634:	e5941030 	ldr	r1, [r4, #48]	; fField48
         b0638:	eb655b66 	bl	1a073d8 <$EzADSPConnectOptions__FP12TOptionArrayPPclT3>
         b063c:	e584002c 	str	r0, [r4, #44]	; fField44
         b0640:	e3300000 	teq	r0, #0	; 0x0
         b0644:	1a000039 	bne	b0730 <TEzEndpointPipe::GetADSPEndpoint(void)+0x138>
         b0648:	e24dd018 	sub	sp, sp, #24	; 0x18
         b064c:	e1a0000d 	mov	r0, sp
         b0650:	eb6c1523 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b0654:	e1a0000d 	mov	r0, sp
         b0658:	eb6c2187 	bl	1bb8c7c <TOptionArray::$Init(void)>
         b065c:	e584002c 	str	r0, [r4, #44]	; fField44
         b0660:	e3300000 	teq	r0, #0	; 0x0
         b0664:	1a00000b 	bne	b0698 <TEzEndpointPipe::GetADSPEndpoint(void)+0xa0>
         b0668:	e1a0000d 	mov	r0, sp
         b066c:	eb671d56 	bl	1a77bcc <$CMGetOptionsForAppleTalkADSP(TOptionArray *)>
         b0670:	e584002c 	str	r0, [r4, #44]	; fField44
         b0674:	e3300000 	teq	r0, #0	; 0x0
         b0678:	1a000006 	bne	b0698 <TEzEndpointPipe::GetADSPEndpoint(void)+0xa0>
         b067c:	e2841010 	add	r1, r4, #16	; 0x10
         b0680:	e1a0000d 	mov	r0, sp
         b0684:	e3a02000 	mov	r2, #0	; 0x0
         b0688:	eb6c1d44 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
         b068c:	e584002c 	str	r0, [r4, #44]	; fField44
         b0690:	e3300000 	teq	r0, #0	; 0x0
         b0694:	0a000007 	beq	b06b8 <TEzEndpointPipe::GetADSPEndpoint(void)+0xc0>
         b0698:	e1a0000d 	mov	r0, sp
         b069c:	e3a01000 	mov	r1, #0	; 0x0
         b06a0:	eb6c1921 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b06a4:	e28d0018 	add	r0, sp, #24	; 0x18
         b06a8:	e3a01000 	mov	r1, #0	; 0x0
         b06ac:	eb6c191e 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b06b0:	e28dd030 	add	sp, sp, #48	; 0x30
         b06b4:	ea000021 	b	b0740 <TEzEndpointPipe::GetADSPEndpoint(void)+0x148>
         b06b8:	e1a0000d 	mov	r0, sp
         b06bc:	e3a01000 	mov	r1, #0	; 0x0
         b06c0:	eb6c1919 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b06c4:	e28dd018 	add	sp, sp, #24	; 0x18
         b06c8:	e3a01001 	mov	r1, #1	; 0x1
         b06cc:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b06d0:	eb655f5f 	bl	1a08454 <TEndpoint::$UseForks(unsigned char)>
         b06d4:	e3a01000 	mov	r1, #0	; 0x0
         b06d8:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b06dc:	eb6c257b 	bl	1bb9cd0 <TEndpoint::$Open(unsigned long)>
         b06e0:	e584002c 	str	r0, [r4, #44]	; fField44
         b06e4:	e3300000 	teq	r0, #0	; 0x0
         b06e8:	1a000010 	bne	b0730 <TEzEndpointPipe::GetADSPEndpoint(void)+0x138>
         b06ec:	e3a03001 	mov	r3, #1	; 0x1
         b06f0:	e3a02000 	mov	r2, #0	; 0x0
         b06f4:	e3a01000 	mov	r1, #0	; 0x0
         b06f8:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b06fc:	eb655f5a 	bl	1a0846c <TEndpoint::$nBind(TOptionArray *, unsigned long, unsigned char)>
         b0700:	e584002c 	str	r0, [r4, #44]	; fField44
         b0704:	e3300000 	teq	r0, #0	; 0x0
         b0708:	1a000008 	bne	b0730 <TEzEndpointPipe::GetADSPEndpoint(void)+0x138>
         b070c:	e3a03001 	mov	r3, #1	; 0x1
         b0710:	e3a02000 	mov	r2, #0	; 0x0
         b0714:	e92d000c 	stmdb	sp!, {r2, r3}
         b0718:	e28d1008 	add	r1, sp, #8	; 0x8
         b071c:	e3a03000 	mov	r3, #0	; 0x0
         b0720:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b0724:	eb655f51 	bl	1a08470 <TEndpoint::$nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
         b0728:	e28dd008 	add	sp, sp, #8	; 0x8
         b072c:	e584002c 	str	r0, [r4, #44]	; fField44
         b0730:	e1a0000d 	mov	r0, sp
         b0734:	e3a01000 	mov	r1, #0	; 0x0
         b0738:	eb6c18fb 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b073c:	e28dd018 	add	sp, sp, #24	; 0x18
         b0740:	e5b4102c 	ldr	r1, [r4, #44]!	; fField44
         b0744:	e3310000 	teq	r1, #0	; 0x0
         b0748:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b074c:	e59f000c 	ldr	r0, [pc, #c]	; b0760 <TEzEndpointPipe::GetADSPEndpoint(void)+0x168>
         b0750:	e5900000 	ldr	r0, [r0]
         b0754:	e3a02000 	mov	r2, #0	; 0x0
         b0758:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b075c:	ea6cca8e 	b	1be319c <$Throw>
         b0760:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TEzEndpointPipe::GetMNPModemEndpoint(void)
 * Address: 000b0764
 */
TEzEndpointPipe::GetMNPModemEndpoint(void) {
    /*
         b0764:	e1a0c00d 	mov	ip, sp
         b0768:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b076c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0770:	e1a04000 	mov	r4, r0
         b0774:	e24dd018 	sub	sp, sp, #24	; 0x18
         b0778:	e1a0000d 	mov	r0, sp
         b077c:	eb6c14d8 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b0780:	e1a0000d 	mov	r0, sp
         b0784:	eb6c213c 	bl	1bb8c7c <TOptionArray::$Init(void)>
         b0788:	e584002c 	str	r0, [r4, #44]	; fField44
         b078c:	e3300000 	teq	r0, #0	; 0x0
         b0790:	1a00001c 	bne	b0808 <TEzEndpointPipe::GetMNPModemEndpoint(void)+0xa4>
         b0794:	e1a0000d 	mov	r0, sp
         b0798:	e5941030 	ldr	r1, [r4, #48]	; fField48
         b079c:	eb655b11 	bl	1a073e8 <$EzMNPModemOptions(TOptionArray *, char **)>
         b07a0:	e584002c 	str	r0, [r4, #44]	; fField44
         b07a4:	e3300000 	teq	r0, #0	; 0x0
         b07a8:	1a000016 	bne	b0808 <TEzEndpointPipe::GetMNPModemEndpoint(void)+0xa4>
         b07ac:	eb682d81 	bl	1abbdb8 <$UseModemNavigator(void)>
         b07b0:	e3300000 	teq	r0, #0	; 0x0
         b07b4:	0a000004 	beq	b07cc <TEzEndpointPipe::GetMNPModemEndpoint(void)+0x68>
         b07b8:	e1a0000d 	mov	r0, sp
         b07bc:	eb6d0437 	bl	1bf18a0 <$RunModemNavigator(TOptionArray *)>
         b07c0:	e584002c 	str	r0, [r4, #44]	; fField44
         b07c4:	e3300000 	teq	r0, #0	; 0x0
         b07c8:	1a00000e 	bne	b0808 <TEzEndpointPipe::GetMNPModemEndpoint(void)+0xa4>
         b07cc:	e2841010 	add	r1, r4, #16	; 0x10
         b07d0:	e1a0000d 	mov	r0, sp
         b07d4:	e3a02000 	mov	r2, #0	; 0x0
         b07d8:	eb6c1cf0 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
         b07dc:	e584002c 	str	r0, [r4, #44]	; fField44
         b07e0:	e3300000 	teq	r0, #0	; 0x0
         b07e4:	1a000007 	bne	b0808 <TEzEndpointPipe::GetMNPModemEndpoint(void)+0xa4>
         b07e8:	e3a01001 	mov	r1, #1	; 0x1
         b07ec:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b07f0:	eb655f17 	bl	1a08454 <TEndpoint::$UseForks(unsigned char)>
         b07f4:	e1a0000d 	mov	r0, sp
         b07f8:	eb6c253f 	bl	1bb9cfc <TOptionArray::$RemoveAllOptions(void)>
         b07fc:	e584002c 	str	r0, [r4, #44]	; fField44
         b0800:	e3300000 	teq	r0, #0	; 0x0
         b0804:	0a000004 	beq	b081c <TEzEndpointPipe::GetMNPModemEndpoint(void)+0xb8>
         b0808:	e1a0000d 	mov	r0, sp
         b080c:	e3a01000 	mov	r1, #0	; 0x0
         b0810:	eb6c18c5 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b0814:	e28dd018 	add	sp, sp, #24	; 0x18
         b0818:	ea000028 	b	b08c0 <TEzEndpointPipe::GetMNPModemEndpoint(void)+0x15c>
         b081c:	e24ddc01 	sub	sp, sp, #256	; 0x100
         b0820:	e5940030 	ldr	r0, [r4, #48]	; fField48
         b0824:	eb6cc638 	bl	1be210c <$HLock>
         b0828:	e5940030 	ldr	r0, [r4, #48]	; fField48
         b082c:	e5900000 	ldr	r0, [r0]
         b0830:	e1a0100d 	mov	r1, sp
         b0834:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         b0838:	e3a02001 	mov	r2, #1	; 0x1
         b083c:	eb6cdacf 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         b0840:	e5940030 	ldr	r0, [r4, #48]	; fField48
         b0844:	eb6cc632 	bl	1be2114 <$HUnlock>
         b0848:	e24dd014 	sub	sp, sp, #20	; 0x14
         b084c:	e28d0014 	add	r0, sp, #20	; 0x14
         b0850:	eb6c1496 	bl	1bb5ab0 <$strlen>
         b0854:	e1a01000 	mov	r1, r0
         b0858:	e1a05000 	mov	r5, r0
         b085c:	e1a0000d 	mov	r0, sp
         b0860:	eb65528f 	bl	1a052a4 <TCMAPhoneNumber::$__ct(unsigned long)>
         b0864:	e1a03005 	mov	r3, r5
         b0868:	e92d0008 	stmdb	sp!, {r3}
         b086c:	e28d3018 	add	r3, sp, #24	; 0x18
         b0870:	e28d2004 	add	r2, sp, #4	; 0x4
         b0874:	e59d1118 	ldr	r1, [sp, #280]
         b0878:	e28d0f46 	add	r0, sp, #280	; 0x118
         b087c:	eb6c250a 	bl	1bb9cac <TOptionArray::$InsertVarOptionAt(long, TOption *, void *, unsigned long)>
         b0880:	e24dd00c 	sub	sp, sp, #12	; 0xc
         b0884:	e1a0000d 	mov	r0, sp
         b0888:	eb6c2d3e 	bl	1bbbd88 <TCMOIdleTimer::$__ct(void)>
         b088c:	e3a0001e 	mov	r0, #30	; 0x1e
         b0890:	e58d000c 	str	r0, [sp, #12]
         b0894:	e1a0200d 	mov	r2, sp
         b0898:	e59d1124 	ldr	r1, [sp, #292]
         b089c:	e28d0f49 	add	r0, sp, #292	; 0x124
         b08a0:	eb6c24ff 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b08a4:	e584002c 	str	r0, [r4, #44]	; fField44
         b08a8:	e3300000 	teq	r0, #0	; 0x0
         b08ac:	0a00000b 	beq	b08e0 <TEzEndpointPipe::GetMNPModemEndpoint(void)+0x17c>
         b08b0:	e28d0f49 	add	r0, sp, #292	; 0x124
         b08b4:	e3a01000 	mov	r1, #0	; 0x0
         b08b8:	eb6c189b 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b08bc:	e28ddf4f 	add	sp, sp, #316	; 0x13c
         b08c0:	e5b4102c 	ldr	r1, [r4, #44]!	; fField44
         b08c4:	e3310000 	teq	r1, #0	; 0x0
         b08c8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         b08cc:	e59f002c 	ldr	r0, [pc, #2c]	; b0900 <TEzEndpointPipe::GetMNPModemEndpoint(void)+0x19c>
         b08d0:	e5900000 	ldr	r0, [r0]
         b08d4:	e3a02000 	mov	r2, #0	; 0x0
         b08d8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b08dc:	ea6cca2e 	b	1be319c <$Throw>
         b08e0:	e28ddf49 	add	sp, sp, #292	; 0x124
         b08e4:	e1a0200d 	mov	r2, sp
         b08e8:	e3a01000 	mov	r1, #0	; 0x0
         b08ec:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b08f0:	e5943034 	ldr	r3, [r4, #52]	; fField52
         b08f4:	eb6c20c4 	bl	1bb8c0c <TEndpoint::$EasyConnect(unsigned long, TOptionArray *, unsigned long)>
         b08f8:	e584002c 	str	r0, [r4, #44]	; fField44
         b08fc:	eaffffc1 	b	b0808 <TEzEndpointPipe::GetMNPModemEndpoint(void)+0xa4>
         b0900:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TEzEndpointPipe::GetSharpIREndpoint(void)
 * Address: 000b0904
 */
TEzEndpointPipe::GetSharpIREndpoint(void) {
    /*
         b0904:	e1a0c00d 	mov	ip, sp
         b0908:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b090c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0910:	e1a04000 	mov	r4, r0
         b0914:	e24dd018 	sub	sp, sp, #24	; 0x18
         b0918:	e1a0000d 	mov	r0, sp
         b091c:	eb6c1470 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b0920:	e1a0000d 	mov	r0, sp
         b0924:	eb6c20d4 	bl	1bb8c7c <TOptionArray::$Init(void)>
         b0928:	e584002c 	str	r0, [r4, #44]	; fField44
         b092c:	e3300000 	teq	r0, #0	; 0x0
         b0930:	1a000015 	bne	b098c <TEzEndpointPipe::GetSharpIREndpoint(void)+0x88>
         b0934:	e1a0000d 	mov	r0, sp
         b0938:	e5941030 	ldr	r1, [r4, #48]	; fField48
         b093c:	eb655aad 	bl	1a073f8 <$EzSharpIROptions(TOptionArray *, char **)>
         b0940:	e584002c 	str	r0, [r4, #44]	; fField44
         b0944:	e3300000 	teq	r0, #0	; 0x0
         b0948:	1a00000f 	bne	b098c <TEzEndpointPipe::GetSharpIREndpoint(void)+0x88>
         b094c:	e2841010 	add	r1, r4, #16	; 0x10
         b0950:	e1a0000d 	mov	r0, sp
         b0954:	e3a02000 	mov	r2, #0	; 0x0
         b0958:	eb6c1c90 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
         b095c:	e584002c 	str	r0, [r4, #44]	; fField44
         b0960:	e3300000 	teq	r0, #0	; 0x0
         b0964:	1a000008 	bne	b098c <TEzEndpointPipe::GetSharpIREndpoint(void)+0x88>
         b0968:	e3a01001 	mov	r1, #1	; 0x1
         b096c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b0970:	eb655eb7 	bl	1a08454 <TEndpoint::$UseForks(unsigned char)>
         b0974:	e3a02000 	mov	r2, #0	; 0x0
         b0978:	e3a01000 	mov	r1, #0	; 0x0
         b097c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b0980:	e5943034 	ldr	r3, [r4, #52]	; fField52
         b0984:	eb6c20a0 	bl	1bb8c0c <TEndpoint::$EasyConnect(unsigned long, TOptionArray *, unsigned long)>
         b0988:	e584002c 	str	r0, [r4, #44]	; fField44
         b098c:	e1a0000d 	mov	r0, sp
         b0990:	e3a01000 	mov	r1, #0	; 0x0
         b0994:	eb6c1864 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b0998:	e28dd018 	add	sp, sp, #24	; 0x18
         b099c:	e5b4102c 	ldr	r1, [r4, #44]!	; fField44
         b09a0:	e3310000 	teq	r1, #0	; 0x0
         b09a4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b09a8:	e59f000c 	ldr	r0, [pc, #c]	; b09bc <TEzEndpointPipe::GetSharpIREndpoint(void)+0xb8>
         b09ac:	e5900000 	ldr	r0, [r0]
         b09b0:	e3a02000 	mov	r2, #0	; 0x0
         b09b4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b09b8:	ea6cc9f7 	b	1be319c <$Throw>
         b09bc:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TEzEndpointPipe::GetIrDAEndpoint(void)
 * Address: 000b09c0
 */
TEzEndpointPipe::GetIrDAEndpoint(void) {
    /*
         b09c0:	e1a0c00d 	mov	ip, sp
         b09c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b09c8:	e24cb004 	sub	fp, ip, #4	; 0x4
         b09cc:	e1a04000 	mov	r4, r0
         b09d0:	e24dd018 	sub	sp, sp, #24	; 0x18
         b09d4:	e1a0000d 	mov	r0, sp
         b09d8:	eb6c1441 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b09dc:	e1a0000d 	mov	r0, sp
         b09e0:	eb6c20a5 	bl	1bb8c7c <TOptionArray::$Init(void)>
         b09e4:	e584002c 	str	r0, [r4, #44]	; fField44
         b09e8:	e3300000 	teq	r0, #0	; 0x0
         b09ec:	1a000015 	bne	b0a48 <TEzEndpointPipe::GetIrDAEndpoint(void)+0x88>
         b09f0:	e1a0000d 	mov	r0, sp
         b09f4:	e5941030 	ldr	r1, [r4, #48]	; fField48
         b09f8:	eb655a78 	bl	1a073e0 <$EzIrDAOptions(TOptionArray *, char **)>
         b09fc:	e584002c 	str	r0, [r4, #44]	; fField44
         b0a00:	e3300000 	teq	r0, #0	; 0x0
         b0a04:	1a00000f 	bne	b0a48 <TEzEndpointPipe::GetIrDAEndpoint(void)+0x88>
         b0a08:	e2841010 	add	r1, r4, #16	; 0x10
         b0a0c:	e1a0000d 	mov	r0, sp
         b0a10:	e3a02000 	mov	r2, #0	; 0x0
         b0a14:	eb6c1c61 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
         b0a18:	e584002c 	str	r0, [r4, #44]	; fField44
         b0a1c:	e3300000 	teq	r0, #0	; 0x0
         b0a20:	1a000008 	bne	b0a48 <TEzEndpointPipe::GetIrDAEndpoint(void)+0x88>
         b0a24:	e3a01001 	mov	r1, #1	; 0x1
         b0a28:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b0a2c:	eb655e88 	bl	1a08454 <TEndpoint::$UseForks(unsigned char)>
         b0a30:	e3a02000 	mov	r2, #0	; 0x0
         b0a34:	e3a01000 	mov	r1, #0	; 0x0
         b0a38:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b0a3c:	e5943034 	ldr	r3, [r4, #52]	; fField52
         b0a40:	eb6c2071 	bl	1bb8c0c <TEndpoint::$EasyConnect(unsigned long, TOptionArray *, unsigned long)>
         b0a44:	e584002c 	str	r0, [r4, #44]	; fField44
         b0a48:	e1a0000d 	mov	r0, sp
         b0a4c:	e3a01000 	mov	r1, #0	; 0x0
         b0a50:	eb6c1835 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b0a54:	e28dd018 	add	sp, sp, #24	; 0x18
         b0a58:	e5b4102c 	ldr	r1, [r4, #44]!	; fField44
         b0a5c:	e3310000 	teq	r1, #0	; 0x0
         b0a60:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b0a64:	e59f000c 	ldr	r0, [pc, #c]	; b0a78 <TEzEndpointPipe::GetIrDAEndpoint(void)+0xb8>
         b0a68:	e5900000 	ldr	r0, [r0]
         b0a6c:	e3a02000 	mov	r2, #0	; 0x0
         b0a70:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b0a74:	ea6cc9c8 	b	1be319c <$Throw>
         b0a78:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TEzEndpointPipe::BytesAvailable(void)
 * Address: 000b0a7c
 */
TEzEndpointPipe::BytesAvailable(void) {
    /*
         b0a7c:	e1a0c00d 	mov	ip, sp
         b0a80:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b0a84:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0a88:	e1a04000 	mov	r4, r0
         b0a8c:	e3a00000 	mov	r0, #0	; 0x0
         b0a90:	e5941010 	ldr	r1, [r4, #16]	; fField16
         b0a94:	e3310000 	teq	r1, #0	; 0x0
         b0a98:	15941050 	ldrne	r1, [r4, #80]	; fField80
         b0a9c:	13310000 	teqne	r1, #0	; 0x0
         b0aa0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         b0aa4:	e1a00001 	mov	r0, r1
         b0aa8:	eb6c289b 	bl	1bbad1c <TOption::$Reset(void)>
         b0aac:	e5940050 	ldr	r0, [r4, #80]	; fField80
         b0ab0:	e5901008 	ldr	r1, [r0, #8]
         b0ab4:	e3c11cff 	bic	r1, r1, #65280	; 0xff00
         b0ab8:	e3811b01 	orr	r1, r1, #1024	; 0x400
         b0abc:	e3a03001 	mov	r3, #1	; 0x1
         b0ac0:	e5a01008 	str	r1, [r0, #8]!
         b0ac4:	e92d0008 	stmdb	sp!, {r3}
         b0ac8:	e5943034 	ldr	r3, [r4, #52]	; fField52
         b0acc:	e2842038 	add	r2, r4, #56	; 0x38
         b0ad0:	e3a01c05 	mov	r1, #1280	; 0x500
         b0ad4:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b0ad8:	eb655e67 	bl	1a0847c <TEndpoint::$nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)>
         b0adc:	e28dd004 	add	sp, sp, #4	; 0x4
         b0ae0:	e584002c 	str	r0, [r4, #44]	; fField44
         b0ae4:	e1b01000 	movs	r1, r0
         b0ae8:	e59f5034 	ldr	r5, [pc, #34]	; b0b24 <TEzEndpointPipe::BytesAvailable(void)+0xa8>
         b0aec:	13a02000 	movne	r2, #0	; 0x0
         b0af0:	15950000 	ldrne	r0, [r5]
         b0af4:	1b6cc9a8 	blne	1be319c <$Throw>
         b0af8:	e5940050 	ldr	r0, [r4, #80]	; fField80
         b0afc:	e5900008 	ldr	r0, [r0, #8]
         b0b00:	e1a01c00 	mov	r1, r0, lsl #24
         b0b04:	e1b01c41 	movs	r1, r1, asr #24
         b0b08:	e584102c 	str	r1, [r4, #44]	; fField44
         b0b0c:	13a02000 	movne	r2, #0	; 0x0
         b0b10:	15950000 	ldrne	r0, [r5]
         b0b14:	1b6cc9a0 	blne	1be319c <$Throw>
         b0b18:	e5b40050 	ldr	r0, [r4, #80]!	; fField80
         b0b1c:	e590000c 	ldr	r0, [r0, #12]
         b0b20:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         b0b24:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TEzEndpointPipe::__ct(void)
 * Address: 000b0dd0
 */
TEzEndpointPipe::TEzEndpointPipe(void) {
    /*
         b0dd0:	e1a0c00d 	mov	ip, sp
         b0dd4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b0dd8:	e24cb004 	sub	fp, ip, #4	; 0x4
         b0ddc:	e1b04000 	movs	r4, r0
         b0de0:	1a000003 	bne	b0df4 <TEzEndpointPipe::__ct(void)+0x24>
         b0de4:	e3a00058 	mov	r0, #88	; 0x58
         b0de8:	eb6c7652 	bl	1bce738 <$__nw(unsigned int)>
         b0dec:	e1b04000 	movs	r4, r0
         b0df0:	0a00000d 	beq	b0e2c <TEzEndpointPipe::__ct(void)+0x5c>
         b0df4:	e1a00004 	mov	r0, r4
         b0df8:	eb6c133a 	bl	1bb5ae8 <TEndpointPipe::$__ct(void)>
         b0dfc:	e2840038 	add	r0, r4, #56	; 0x38
         b0e00:	eb6c1337 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b0e04:	e59f0028 	ldr	r0, [pc, #28]	; b0e34 <TEzEndpointPipe::__ct(void)+0x64>
         b0e08:	e5840000 	str	r0, [r4]
         b0e0c:	e3a00000 	mov	r0, #0	; 0x0
         b0e10:	e584002c 	str	r0, [r4, #44]	; fField44
         b0e14:	e3a019ca 	mov	r1, #3309568	; 0x328000
         b0e18:	e2811402 	add	r1, r1, #33554432	; 0x2000000
         b0e1c:	e5840010 	str	r0, [r4, #16]	; fField16
         b0e20:	e5841034 	str	r1, [r4, #52]	; fField52
         b0e24:	e5840030 	str	r0, [r4, #48]	; fField48
         b0e28:	e5c40054 	strb	r0, [r4, #84]	; fField84
         b0e2c:	e1a00004 	mov	r0, r4
         b0e30:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b0e34:	0001e0e0 	andeq	lr, r1, r0, ror #1
    */
}

/**
 * Symbol: TEzEndpointPipe::__dt(void)
 * Address: 000b1048
 */
TEzEndpointPipe::~TEzEndpointPipe(void) {
    /*
         b1048:	e1a0c00d 	mov	ip, sp
         b104c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b1050:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1054:	e1a04000 	mov	r4, r0
         b1058:	e1a05001 	mov	r5, r1
         b105c:	e59f003c 	ldr	r0, [pc, #3c]	; b10a0 <TEzEndpointPipe::__dt(void)+0x58>
         b1060:	e5840000 	str	r0, [r4]
         b1064:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b1068:	e3300000 	teq	r0, #0	; 0x0
         b106c:	11a00004 	movne	r0, r4
         b1070:	1b6c2739 	blne	1bbad5c <TEzEndpointPipe::$TearDown(void)>
         b1074:	e2840038 	add	r0, r4, #56	; 0x38
         b1078:	e3a01000 	mov	r1, #0	; 0x0
         b107c:	eb6c16aa 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         b1080:	e1a00004 	mov	r0, r4
         b1084:	e3a01000 	mov	r1, #0	; 0x0
         b1088:	eb6c16a8 	bl	1bb6b30 <TEndpointPipe::$__dt(void)>
         b108c:	e3150001 	tst	r5, #1	; 0x1
         b1090:	11a00004 	movne	r0, r4
         b1094:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         b1098:	1a6c7190 	bne	1bcd6e0 <$__dl(void *)>
         b109c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         b10a0:	0001e0e0 	andeq	lr, r1, r0, ror #1
    */
}

/**
 * Symbol: TEzEndpointPipe::CommonInit(unsigned long)
 * Address: 000b10a4
 */
TEzEndpointPipe::CommonInit(unsigned long) {
    /*
         b10a4:	e1a0c00d 	mov	ip, sp
         b10a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b10ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         b10b0:	e1a04000 	mov	r4, r0
         b10b4:	e5a01034 	str	r1, [r0, #52]!	; fField52
         b10b8:	e2800004 	add	r0, r0, #4	; 0x4
         b10bc:	e1a06000 	mov	r6, r0
         b10c0:	eb6c1eed 	bl	1bb8c7c <TOptionArray::$Init(void)>
         b10c4:	e584002c 	str	r0, [r4, #44]	; fField44
         b10c8:	e1b01000 	movs	r1, r0
         b10cc:	e59f504c 	ldr	r5, [pc, #4c]	; b1120 <TEzEndpointPipe::CommonInit(unsigned long)+0x7c>
         b10d0:	13a02000 	movne	r2, #0	; 0x0
         b10d4:	15950000 	ldrne	r0, [r5]
         b10d8:	1b6cc82f 	blne	1be319c <$Throw>
         b10dc:	e24dd010 	sub	sp, sp, #16	; 0x10
         b10e0:	e1a0000d 	mov	r0, sp
         b10e4:	eb6c2f53 	bl	1bbce38 <TCMOSerialBytesAvailable::$__ct(void)>
         b10e8:	e1a00006 	mov	r0, r6
         b10ec:	e1a0200d 	mov	r2, sp
         b10f0:	e5961000 	ldr	r1, [r6]
         b10f4:	eb6c22ea 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b10f8:	e584002c 	str	r0, [r4, #44]	; fField44
         b10fc:	e1b01000 	movs	r1, r0
         b1100:	13a02000 	movne	r2, #0	; 0x0
         b1104:	15950000 	ldrne	r0, [r5]
         b1108:	1b6cc823 	blne	1be319c <$Throw>
         b110c:	e1a00006 	mov	r0, r6
         b1110:	e3a01000 	mov	r1, #0	; 0x0
         b1114:	eb6c22ee 	bl	1bb9cd4 <TOptionArray::$OptionAt(long)>
         b1118:	e5a40050 	str	r0, [r4, #80]!	; fField80
         b111c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         b1120:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TEzEndpointPipe::Init(RefVar const &, unsigned long)
 * Address: 000b15d4
 */
TEzEndpointPipe::Init(RefVar const &, unsigned long) {
    /*
         b15d4:	e1a0c00d 	mov	ip, sp
         b15d8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         b15dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         b15e0:	e1a06000 	mov	r6, r0
         b15e4:	e1a04001 	mov	r4, r1
         b15e8:	e1a05002 	mov	r5, r2
         b15ec:	e5910000 	ldr	r0, [r1]
         b15f0:	e5900000 	ldr	r0, [r0]
         b15f4:	e59f70c4 	ldr	r7, [pc, #c4]	; b16c0 <TEzEndpointPipe::Init(RefVar const &, unsigned long)+0xec>
         b15f8:	e3300002 	teq	r0, #2	; 0x2
         b15fc:	1a000003 	bne	b1610 <TEzEndpointPipe::Init(RefVar const &, unsigned long)+0x3c>
         b1600:	e3a02000 	mov	r2, #0	; 0x0
         b1604:	e3e01000 	mvn	r1, #0	; 0x0
         b1608:	e5970000 	ldr	r0, [r7]
         b160c:	eb6cc6e2 	bl	1be319c <$Throw>
         b1610:	e59f00ac 	ldr	r0, [pc, #ac]	; b16c4 <TEzEndpointPipe::Init(RefVar const &, unsigned long)+0xf0>
         b1614:	e5900000 	ldr	r0, [r0]
         b1618:	e5901000 	ldr	r1, [r0]
         b161c:	e5940000 	ldr	r0, [r4]
         b1620:	e5900000 	ldr	r0, [r0]
         b1624:	eb6c4b07 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         b1628:	e3300000 	teq	r0, #0	; 0x0
         b162c:	1a000003 	bne	b1640 <TEzEndpointPipe::Init(RefVar const &, unsigned long)+0x6c>
         b1630:	e3a02000 	mov	r2, #0	; 0x0
         b1634:	e3e01000 	mvn	r1, #0	; 0x0
         b1638:	e5970000 	ldr	r0, [r7]
         b163c:	eb6cc6d6 	bl	1be319c <$Throw>
         b1640:	e24dd00c 	sub	sp, sp, #12	; 0xc
         b1644:	e3a00000 	mov	r0, #0	; 0x0
         b1648:	e58d0008 	str	r0, [sp, #8]
         b164c:	e58d0004 	str	r0, [sp, #4]
         b1650:	e58d0000 	str	r0, [sp]
         b1654:	e1a0300d 	mov	r3, sp
         b1658:	e28d2004 	add	r2, sp, #4	; 0x4
         b165c:	e28d1008 	add	r1, sp, #8	; 0x8
         b1660:	e1a00004 	mov	r0, r4
         b1664:	eb65575c 	bl	1a073dc <$EzConvertOptions__FRC6RefVarPP12TOptionArrayN22>
         b1668:	e1a07000 	mov	r7, r0
         b166c:	e3a00000 	mov	r0, #0	; 0x0
         b1670:	e3a04000 	mov	r4, #0	; 0x0
         b1674:	e52d006c 	str	r0, [sp, -#108]!
         b1678:	e28d0008 	add	r0, sp, #8	; 0x8
         b167c:	eb6c04bc 	bl	1bb2974 <$setjmp>
         b1680:	e3300000 	teq	r0, #0	; 0x0
         b1684:	1a00000f 	bne	b16c8 <TEzEndpointPipe::Init(RefVar const &, unsigned long)+0xf4>
         b1688:	e1a0000d 	mov	r0, sp
         b168c:	eb6cba7a 	bl	1be007c <$AddExceptionHandler>
         b1690:	e1a03005 	mov	r3, r5
         b1694:	e1a02007 	mov	r2, r7
         b1698:	e92d000c 	stmdb	sp!, {r2, r3}
         b169c:	e1a00006 	mov	r0, r6
         b16a0:	e59d107c 	ldr	r1, [sp, #124]
         b16a4:	e59d2078 	ldr	r2, [sp, #120]
         b16a8:	e59d3074 	ldr	r3, [sp, #116]
         b16ac:	eb655b57 	bl	1a08410 <TEzEndpointPipe::$Init(TOptionArray *, TOptionArray *, TOptionArray *, unsigned char, unsigned long)>
         b16b0:	e28dd008 	add	sp, sp, #8	; 0x8
         b16b4:	e1a0000d 	mov	r0, sp
         b16b8:	eb6cbe7e 	bl	1be10b8 <$ExitHandler>
         b16bc:	ea000002 	b	b16cc <TEzEndpointPipe::Init(RefVar const &, unsigned long)+0xf8>
         b16c0:	00371324 	eoreqs	r1, r7, r4, lsr #6
         b16c4:	00683b68 	rsbeq	r3, r8, r8, ror #22
         b16c8:	e3a04001 	mov	r4, #1	; 0x1
         b16cc:	e59d0074 	ldr	r0, [sp, #116]
         b16d0:	e3300000 	teq	r0, #0	; 0x0
         b16d4:	13a01001 	movne	r1, #1	; 0x1
         b16d8:	1b6c1513 	blne	1bb6b2c <TOptionArray::$__dt(void)>
         b16dc:	e59d0070 	ldr	r0, [sp, #112]
         b16e0:	e3300000 	teq	r0, #0	; 0x0
         b16e4:	13a01001 	movne	r1, #1	; 0x1
         b16e8:	1b6c150f 	blne	1bb6b2c <TOptionArray::$__dt(void)>
         b16ec:	e59d006c 	ldr	r0, [sp, #108]
         b16f0:	e3300000 	teq	r0, #0	; 0x0
         b16f4:	13a01001 	movne	r1, #1	; 0x1
         b16f8:	1b6c150b 	blne	1bb6b2c <TOptionArray::$__dt(void)>
         b16fc:	e3340000 	teq	r4, #0	; 0x0
         b1700:	11a0000d 	movne	r0, sp
         b1704:	1b6cc292 	blne	1be2154 <$NextHandler>
         b1708:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TEzEndpointPipe::Init(TOptionArray *, TOptionArray *, TOptionArray *, unsigned char, unsigned long)
 * Address: 000b170c
 */
TEzEndpointPipe::Init(TOptionArray *, TOptionArray *, TOptionArray *, unsigned char, unsigned long) {
    /*
         b170c:	e1a0c00d 	mov	ip, sp
         b1710:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         b1714:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1718:	e1a04000 	mov	r4, r0
         b171c:	e1a05001 	mov	r5, r1
         b1720:	e1a07002 	mov	r7, r2
         b1724:	e1a06003 	mov	r6, r3
         b1728:	e99b0101 	ldmib	fp, {r0, r8}
         b172c:	e20090ff 	and	r9, r0, #255	; 0xff
         b1730:	e1a01008 	mov	r1, r8
         b1734:	e1a00004 	mov	r0, r4
         b1738:	eb655724 	bl	1a073d0 <TEzEndpointPipe::$CommonInit(unsigned long)>
         b173c:	e1a00005 	mov	r0, r5
         b1740:	eb6d0056 	bl	1bf18a0 <$RunModemNavigator(TOptionArray *)>
         b1744:	e584002c 	str	r0, [r4, #44]	; fField44
         b1748:	e3300000 	teq	r0, #0	; 0x0
         b174c:	1a000038 	bne	b1834 <TEzEndpointPipe::Init(TOptionArray *, TOptionArray *, TOptionArray *, unsigned char, unsigned long)+0x128>
         b1750:	e2841010 	add	r1, r4, #16	; 0x10
         b1754:	e1a00005 	mov	r0, r5
         b1758:	e3a02000 	mov	r2, #0	; 0x0
         b175c:	eb6c190f 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
         b1760:	e584002c 	str	r0, [r4, #44]	; fField44
         b1764:	e3300000 	teq	r0, #0	; 0x0
         b1768:	1a000031 	bne	b1834 <TEzEndpointPipe::Init(TOptionArray *, TOptionArray *, TOptionArray *, unsigned char, unsigned long)+0x128>
         b176c:	e3a01000 	mov	r1, #0	; 0x0
         b1770:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b1774:	eb6c2155 	bl	1bb9cd0 <TEndpoint::$Open(unsigned long)>
         b1778:	e584002c 	str	r0, [r4, #44]	; fField44
         b177c:	e3300000 	teq	r0, #0	; 0x0
         b1780:	1a000027 	bne	b1824 <TEzEndpointPipe::Init(TOptionArray *, TOptionArray *, TOptionArray *, unsigned char, unsigned long)+0x118>
         b1784:	e1a02008 	mov	r2, r8
         b1788:	e1a01007 	mov	r1, r7
         b178c:	e3a03001 	mov	r3, #1	; 0x1
         b1790:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b1794:	eb655b34 	bl	1a0846c <TEndpoint::$nBind(TOptionArray *, unsigned long, unsigned char)>
         b1798:	e584002c 	str	r0, [r4, #44]	; fField44
         b179c:	e3300000 	teq	r0, #0	; 0x0
         b17a0:	1a00001d 	bne	b181c <TEzEndpointPipe::Init(TOptionArray *, TOptionArray *, TOptionArray *, unsigned char, unsigned long)+0x110>
         b17a4:	e3a03001 	mov	r3, #1	; 0x1
         b17a8:	e1a02008 	mov	r2, r8
         b17ac:	e92d000c 	stmdb	sp!, {r2, r3}
         b17b0:	e1a01006 	mov	r1, r6
         b17b4:	e3a03000 	mov	r3, #0	; 0x0
         b17b8:	e3a02000 	mov	r2, #0	; 0x0
         b17bc:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b17c0:	eb655b2a 	bl	1a08470 <TEndpoint::$nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
         b17c4:	e28dd008 	add	sp, sp, #8	; 0x8
         b17c8:	e584002c 	str	r0, [r4, #44]	; fField44
         b17cc:	e3300000 	teq	r0, #0	; 0x0
         b17d0:	0a000004 	beq	b17e8 <TEzEndpointPipe::Init(TOptionArray *, TOptionArray *, TOptionArray *, unsigned char, unsigned long)+0xdc>
         b17d4:	e3a02001 	mov	r2, #1	; 0x1
         b17d8:	e3a01000 	mov	r1, #0	; 0x0
         b17dc:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b17e0:	eb655f2a 	bl	1a09490 <TEndpoint::$nUnBind(unsigned long, unsigned char)>
         b17e4:	ea000009 	b	b1810 <TEzEndpointPipe::Init(TOptionArray *, TOptionArray *, TOptionArray *, unsigned char, unsigned long)+0x104>
         b17e8:	e3a03000 	mov	r3, #0	; 0x0
         b17ec:	e1a02009 	mov	r2, r9
         b17f0:	e5941034 	ldr	r1, [r4, #52]	; fField52
         b17f4:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         b17f8:	e5941010 	ldr	r1, [r4, #16]	; fField16
         b17fc:	e1a00004 	mov	r0, r4
         b1800:	e3a03b02 	mov	r3, #2048	; 0x800
         b1804:	e3a02b02 	mov	r2, #2048	; 0x800
         b1808:	eb6d35c3 	bl	1bfef1c <TEndpointPipe::$Init(TEndpoint *, long, long, unsigned long, unsigned char, PipeCallBack *)>
         b180c:	e28dd00c 	add	sp, sp, #12	; 0xc
         b1810:	e594002c 	ldr	r0, [r4, #44]	; fField44
         b1814:	e3300000 	teq	r0, #0	; 0x0
         b1818:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         b181c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b1820:	eb6c18dd 	bl	1bb7b9c <TEndpoint::$Close(void)>
         b1824:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b1828:	eb6c18f0 	bl	1bb7bf0 <TEndpoint::$Delete(void)>
         b182c:	e3a00000 	mov	r0, #0	; 0x0
         b1830:	e5840010 	str	r0, [r4, #16]	; fField16
         b1834:	e5b4102c 	ldr	r1, [r4, #44]!	; fField44
         b1838:	e3310000 	teq	r1, #0	; 0x0
         b183c:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         b1840:	e59f000c 	ldr	r0, [pc, #c]	; b1854 <TEzEndpointPipe::Init(TOptionArray *, TOptionArray *, TOptionArray *, unsigned char, unsigned long)+0x148>
         b1844:	e5900000 	ldr	r0, [r0]
         b1848:	e3a02000 	mov	r2, #0	; 0x0
         b184c:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         b1850:	ea6cc651 	b	1be319c <$Throw>
         b1854:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)
 * Address: 000b1858
 */
TEzEndpointPipe::Init(ConnectionType, char **, unsigned long) {
    /*
         b1858:	e1a0c00d 	mov	ip, sp
         b185c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         b1860:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1864:	e1a04000 	mov	r4, r0
         b1868:	e1a05001 	mov	r5, r1
         b186c:	e1a07002 	mov	r7, r2
         b1870:	e1a06003 	mov	r6, r3
         b1874:	e3a00000 	mov	r0, #0	; 0x0
         b1878:	e52d006c 	str	r0, [sp, -#108]!
         b187c:	e28d0008 	add	r0, sp, #8	; 0x8
         b1880:	eb6c043b 	bl	1bb2974 <$setjmp>
         b1884:	e59f8084 	ldr	r8, [pc, #84]	; b1910 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0xb8>	; fField84
         b1888:	e3300000 	teq	r0, #0	; 0x0
         b188c:	1a00003a 	bne	b197c <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x124>
         b1890:	e1a0000d 	mov	r0, sp
         b1894:	eb6cb9f8 	bl	1be007c <$AddExceptionHandler>
         b1898:	e3a09001 	mov	r9, #1	; 0x1
         b189c:	e1a01006 	mov	r1, r6
         b18a0:	e1a00004 	mov	r0, r4
         b18a4:	eb6556c9 	bl	1a073d0 <TEzEndpointPipe::$CommonInit(unsigned long)>
         b18a8:	e5847030 	str	r7, [r4, #48]	; fField48
         b18ac:	e3550006 	cmp	r5, #6	; 0x6
         b18b0:	908ff105 	addls	pc, pc, r5, lsl #2
         b18b4:	ea000007 	b	b18d8 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x80>
         b18b8:	ea000015 	b	b1914 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0xbc>
         b18bc:	ea000017 	b	b1920 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0xc8>
         b18c0:	ea000004 	b	b18d8 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x80>
         b18c4:	ea000023 	b	b1958 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x100>
         b18c8:	ea000025 	b	b1964 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x10c>
         b18cc:	ea000027 	b	b1970 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x118>
         b18d0:	e1a00004 	mov	r0, r4
         b18d4:	eb655aca 	bl	1a08404 <TEzEndpointPipe::$GetIrDAEndpoint(void)>
         b18d8:	e3350004 	teq	r5, #4	; 0x4
         b18dc:	13a00000 	movne	r0, #0	; 0x0
         b18e0:	03a00001 	moveq	r0, #1	; 0x1
         b18e4:	e20020ff 	and	r2, r0, #255	; 0xff
         b18e8:	e3a03000 	mov	r3, #0	; 0x0
         b18ec:	e5941034 	ldr	r1, [r4, #52]	; fField52
         b18f0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         b18f4:	e5941010 	ldr	r1, [r4, #16]	; fField16
         b18f8:	e1a00004 	mov	r0, r4
         b18fc:	e3a03b02 	mov	r3, #2048	; 0x800
         b1900:	e3a02b02 	mov	r2, #2048	; 0x800
         b1904:	eb6d3584 	bl	1bfef1c <TEndpointPipe::$Init(TEndpoint *, long, long, unsigned long, unsigned char, PipeCallBack *)>
         b1908:	e28dd00c 	add	sp, sp, #12	; 0xc
         b190c:	ea000025 	b	b19a8 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x150>
         b1910:	00371324 	eoreqs	r1, r7, r4, lsr #6
         b1914:	e1a00004 	mov	r0, r4
         b1918:	eb6c1ccc 	bl	1bb8c50 <TEzEndpointPipe::$GetSerialEndpoint(void)>
         b191c:	eaffffed 	b	b18d8 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x80>
         b1920:	e59f002c 	ldr	r0, [pc, #2c]	; b1954 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0xfc>
         b1924:	eb6d081d 	bl	1bf39a0 <$OpenAppleTalk(unsigned long)>
         b1928:	e584002c 	str	r0, [r4, #44]	; fField44
         b192c:	e3300000 	teq	r0, #0	; 0x0
         b1930:	0a000003 	beq	b1944 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0xec>
         b1934:	e1a01000 	mov	r1, r0
         b1938:	e3a02000 	mov	r2, #0	; 0x0
         b193c:	e5980000 	ldr	r0, [r8]
         b1940:	eb6cc615 	bl	1be319c <$Throw>
         b1944:	e5c49054 	strb	r9, [r4, #84]	; fField84
         b1948:	e1a00004 	mov	r0, r4
         b194c:	eb6c1cb5 	bl	1bb8c28 <TEzEndpointPipe::$GetADSPEndpoint(void)>
         b1950:	eaffffe0 	b	b18d8 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x80>
         b1954:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
         b1958:	e1a00004 	mov	r0, r4
         b195c:	eb6c1cb5 	bl	1bb8c38 <TEzEndpointPipe::$GetMNPSerialEndpoint(void)>
         b1960:	eaffffdc 	b	b18d8 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x80>
         b1964:	e1a00004 	mov	r0, r4
         b1968:	eb655aa7 	bl	1a0840c <TEzEndpointPipe::$GetSharpIREndpoint(void)>
         b196c:	eaffffd9 	b	b18d8 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x80>
         b1970:	e1a00004 	mov	r0, r4
         b1974:	eb655aa3 	bl	1a08408 <TEzEndpointPipe::$GetMNPModemEndpoint(void)>
         b1978:	eaffffd6 	b	b18d8 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x80>
         b197c:	e59d0060 	ldr	r0, [sp, #96]
         b1980:	e5981000 	ldr	r1, [r8]
         b1984:	eb6cc602 	bl	1be3194 <$Subexception>
         b1988:	e3300000 	teq	r0, #0	; 0x0
         b198c:	0a000008 	beq	b19b4 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x15c>
         b1990:	e1a00004 	mov	r0, r4
         b1994:	eb6c24f0 	bl	1bbad5c <TEzEndpointPipe::$TearDown(void)>
         b1998:	e59d0064 	ldr	r0, [sp, #100]
         b199c:	e5a4002c 	str	r0, [r4, #44]!	; fField44
         b19a0:	e1a0000d 	mov	r0, sp
         b19a4:	eb6cc1ea 	bl	1be2154 <$NextHandler>
         b19a8:	e1a0000d 	mov	r0, sp
         b19ac:	eb6cbdc1 	bl	1be10b8 <$ExitHandler>
         b19b0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         b19b4:	e1a00004 	mov	r0, r4
         b19b8:	eb6c24e7 	bl	1bbad5c <TEzEndpointPipe::$TearDown(void)>
         b19bc:	e3300000 	teq	r0, #0	; 0x0
         b19c0:	03e00000 	mvneq	r0, #0	; 0x0
         b19c4:	e594102c 	ldr	r1, [r4, #44]	; fField44
         b19c8:	e3310000 	teq	r1, #0	; 0x0
         b19cc:	11a00001 	movne	r0, r1
         b19d0:	e584002c 	str	r0, [r4, #44]	; fField44
         b19d4:	e1a0000d 	mov	r0, sp
         b19d8:	eb6cc1dd 	bl	1be2154 <$NextHandler>
         b19dc:	eafffff4 	b	b19b4 <TEzEndpointPipe::Init(ConnectionType, char **, unsigned long)+0x15c>
    */
}

/**
 * Symbol: TEzEndpointPipe::TearDown(void)
 * Address: 000b19e0
 */
TEzEndpointPipe::TearDown(void) {
    /*
         b19e0:	e1a0c00d 	mov	ip, sp
         b19e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b19e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         b19ec:	e1a04000 	mov	r4, r0
         b19f0:	e5900030 	ldr	r0, [r0, #48]	; fField48
         b19f4:	e3a05000 	mov	r5, #0	; 0x0
         b19f8:	e3300000 	teq	r0, #0	; 0x0
         b19fc:	0a000001 	beq	b1a08 <TEzEndpointPipe::TearDown(void)+0x28>
         b1a00:	eb6cbdaa 	bl	1be10b0 <$DisposHandle>
         b1a04:	e5845030 	str	r5, [r4, #48]	; fField48
         b1a08:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b1a0c:	e3300000 	teq	r0, #0	; 0x0
         b1a10:	0a000006 	beq	b1a30 <TEzEndpointPipe::TearDown(void)+0x50>
         b1a14:	eb6c1c7b 	bl	1bb8c08 <TEndpoint::$EasyClose(void)>
         b1a18:	e584002c 	str	r0, [r4, #44]	; fField44
         b1a1c:	e3300000 	teq	r0, #0	; 0x0
         b1a20:	1a00000a 	bne	b1a50 <TEzEndpointPipe::TearDown(void)+0x70>
         b1a24:	e5940010 	ldr	r0, [r4, #16]	; fField16
         b1a28:	eb6c1870 	bl	1bb7bf0 <TEndpoint::$Delete(void)>
         b1a2c:	e5845010 	str	r5, [r4, #16]	; fField16
         b1a30:	e5d40054 	ldrb	r0, [r4, #84]	; fField84
         b1a34:	e3300000 	teq	r0, #0	; 0x0
         b1a38:	0a000004 	beq	b1a50 <TEzEndpointPipe::TearDown(void)+0x70>
         b1a3c:	e59f0014 	ldr	r0, [pc, #14]	; b1a58 <TEzEndpointPipe::TearDown(void)+0x78>
         b1a40:	eb6d07e5 	bl	1bf39dc <$CloseAppleTalk(unsigned long)>
         b1a44:	e584002c 	str	r0, [r4, #44]	; fField44
         b1a48:	e3300000 	teq	r0, #0	; 0x0
         b1a4c:	05c45054 	streqb	r5, [r4, #84]	; fField84
         b1a50:	e5b4002c 	ldr	r0, [r4, #44]!	; fField44
         b1a54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         b1a58:	736c746b 	cmnvc	ip, #1795162112	; 0x6b000000
    */
}

