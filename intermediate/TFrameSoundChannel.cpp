#include "include/TFrameSoundChannel.h"

/**
 * Symbol: TFrameSoundChannel::InitCodec(SoundBlock *)
 * Address: 000d1f28
 */
TFrameSoundChannel::InitCodec(SoundBlock *) {
    /*
         d1f28:	e1a0c00d 	mov	ip, sp
         d1f2c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         d1f30:	e24cb004 	sub	fp, ip, #4	; 0x4
         d1f34:	e1a04000 	mov	r4, r0
         d1f38:	e1a05001 	mov	r5, r1
         d1f3c:	e3a06000 	mov	r6, #0	; 0x0
         d1f40:	e5910028 	ldr	r0, [r1, #40]
         d1f44:	e3300000 	teq	r0, #0	; 0x0
         d1f48:	0a000019 	beq	d1fb4 <TFrameSoundChannel::InitCodec(SoundBlock *)+0x8c>
         d1f4c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         d1f50:	e594103c 	ldr	r1, [r4, #60]	; fField60
         d1f54:	e1300001 	teq	r0, r1
         d1f58:	13a00000 	movne	r0, #0	; 0x0
         d1f5c:	03a00001 	moveq	r0, #1	; 0x1
         d1f60:	e20070ff 	and	r7, r0, #255	; 0xff
         d1f64:	e1a0100d 	mov	r1, sp
         d1f68:	e1a00005 	mov	r0, r5
         d1f6c:	eb6ab3f5 	bl	1b7ef48 <$ConvertCodecBlock(SoundBlock *, CodecBlock *)>
         d1f70:	e3370000 	teq	r7, #0	; 0x0
         d1f74:	15d4005c 	ldrneb	r0, [r4, #92]	; fField92
         d1f78:	13300000 	teqne	r0, #0	; 0x0
         d1f7c:	0a000006 	beq	d1f9c <TFrameSoundChannel::InitCodec(SoundBlock *)+0x74>
         d1f80:	e594004c 	ldr	r0, [r4, #76]	; fField76
         d1f84:	e58d000c 	str	r0, [sp, #12]
         d1f88:	e5940050 	ldr	r0, [r4, #80]	; fField80
         d1f8c:	e58d0010 	str	r0, [sp, #16]
         d1f90:	e5b40054 	ldr	r0, [r4, #84]!	; fField84
         d1f94:	e58d0014 	str	r0, [sp, #20]
         d1f98:	ea000011 	b	d1fe4 <TFrameSoundChannel::InitCodec(SoundBlock *)+0xbc>
         d1f9c:	e1a0100d 	mov	r1, sp
         d1fa0:	e5950028 	ldr	r0, [r5, #40]
         d1fa4:	eb6ac056 	bl	1b82104 <$SafeCodecInit(TSoundCodec *, CodecBlock *)>
         d1fa8:	e1b06000 	movs	r6, r0
         d1fac:	0a000002 	beq	d1fbc <TFrameSoundChannel::InitCodec(SoundBlock *)+0x94>
         d1fb0:	e28dd01c 	add	sp, sp, #28	; 0x1c
         d1fb4:	e1a00006 	mov	r0, r6
         d1fb8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         d1fbc:	e3370000 	teq	r7, #0	; 0x0
         d1fc0:	0a000007 	beq	d1fe4 <TFrameSoundChannel::InitCodec(SoundBlock *)+0xbc>
         d1fc4:	e2840040 	add	r0, r4, #64	; 0x40
         d1fc8:	e1a0e00d 	mov	lr, sp
         d1fcc:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
         d1fd0:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
         d1fd4:	e89e100c 	ldmia	lr, {r2, r3, ip}
         d1fd8:	e880100c 	stmia	r0, {r2, r3, ip}
         d1fdc:	e3a00001 	mov	r0, #1	; 0x1
         d1fe0:	e5c4005c 	strb	r0, [r4, #92]	; fField92
         d1fe4:	e1a01005 	mov	r1, r5
         d1fe8:	e1a0000d 	mov	r0, sp
         d1fec:	eb6ab3d6 	bl	1b7ef4c <$ConvertCodecBlock(CodecBlock *, SoundBlock *)>
         d1ff0:	eaffffee 	b	d1fb0 <TFrameSoundChannel::InitCodec(SoundBlock *)+0x88>
    */
}

/**
 * Symbol: TFrameSoundChannel::DeleteCodec(SoundBlock *)
 * Address: 000d1ff4
 */
TFrameSoundChannel::DeleteCodec(SoundBlock *) {
    /*
         d1ff4:	e1a0c00d 	mov	ip, sp
         d1ff8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d1ffc:	e24cb004 	sub	fp, ip, #4	; 0x4
         d2000:	e1a04001 	mov	r4, r1
         d2004:	e3a02000 	mov	r2, #0	; 0x0
         d2008:	e5911028 	ldr	r1, [r1, #40]
         d200c:	e590003c 	ldr	r0, [r0, #60]	; fField60
         d2010:	e1300001 	teq	r0, r1
         d2014:	0a000002 	beq	d2024 <TFrameSoundChannel::DeleteCodec(SoundBlock *)+0x30>
         d2018:	e1a00001 	mov	r0, r1
         d201c:	eb6ac039 	bl	1b82108 <$SafeCodecDelete(TSoundCodec *)>
         d2020:	e1a02000 	mov	r2, r0
         d2024:	e3a00000 	mov	r0, #0	; 0x0
         d2028:	e5a40028 	str	r0, [r4, #40]!
         d202c:	e1a00002 	mov	r0, r2
         d2030:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFrameSoundChannel::__ct(void)
 * Address: 000d25e0
 */
TFrameSoundChannel::TFrameSoundChannel(void) {
    /*
         d25e0:	e1a0c00d 	mov	ip, sp
         d25e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         d25e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         d25ec:	e1b04000 	movs	r4, r0
         d25f0:	1a000003 	bne	d2604 <TFrameSoundChannel::__ct(void)+0x24>
         d25f4:	e3a0006c 	mov	r0, #108	; 0x6c
         d25f8:	eb6bf04e 	bl	1bce738 <$__nw(unsigned int)>
         d25fc:	e1b04000 	movs	r4, r0
         d2600:	0a00000d 	beq	d263c <TFrameSoundChannel::__ct(void)+0x5c>
         d2604:	e1a00004 	mov	r0, r4
         d2608:	eb6ce3e0 	bl	1c0b590 <TUSoundChannel::$__ct(void)>
         d260c:	e3a00002 	mov	r0, #2	; 0x2
         d2610:	eb6bbecd 	bl	1bc214c <$AllocateRefHandle(long)>
         d2614:	e3a05000 	mov	r5, #0	; 0x0
         d2618:	e5840060 	str	r0, [r4, #96]	; fField96
         d261c:	e5a05004 	str	r5, [r0, #4]!	; fField4
         d2620:	e2840064 	add	r0, r4, #100	; 0x64
         d2624:	eb6aa5df 	bl	1b7bda8 <TFrameSoundCallback::$__ct(void)>
         d2628:	e59f0014 	ldr	r0, [pc, #14]	; d2644 <TFrameSoundChannel::__ct(void)+0x64>
         d262c:	e5840000 	str	r0, [r4]
         d2630:	e584503c 	str	r5, [r4, #60]	; fField60
         d2634:	e5c4505c 	strb	r5, [r4, #92]	; fField92
         d2638:	e5844068 	str	r4, [r4, #104]
         d263c:	e1a00004 	mov	r0, r4
         d2640:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         d2644:	0001ead4 	ldreqd	lr, [r1], -r4
    */
}

/**
 * Symbol: TFrameSoundChannel::__dt(void)
 * Address: 000d2648
 */
TFrameSoundChannel::~TFrameSoundChannel(void) {
    /*
         d2648:	e1a0c00d 	mov	ip, sp
         d264c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         d2650:	e24cb004 	sub	fp, ip, #4	; 0x4
         d2654:	e1a04000 	mov	r4, r0
         d2658:	e1a05001 	mov	r5, r1
         d265c:	e59f0034 	ldr	r0, [pc, #34]	; d2698 <TFrameSoundChannel::__dt(void)+0x50>
         d2660:	e5840000 	str	r0, [r4]
         d2664:	e2840064 	add	r0, r4, #100	; 0x64
         d2668:	e3a01000 	mov	r1, #0	; 0x0
         d266c:	eb6aa5d2 	bl	1b7bdbc <TFrameSoundCallback::$__dt(void)>
         d2670:	e5940060 	ldr	r0, [r4, #96]	; fField96
         d2674:	eb6bc2d0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2678:	e1a00004 	mov	r0, r4
         d267c:	e3a01000 	mov	r1, #0	; 0x0
         d2680:	eb6ce3c4 	bl	1c0b598 <TUSoundChannel::$__dt(void)>
         d2684:	e3150001 	tst	r5, #1	; 0x1
         d2688:	11a00004 	movne	r0, r4
         d268c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         d2690:	1a6bec12 	bne	1bcd6e0 <$__dl(void *)>
         d2694:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         d2698:	0001ead4 	ldreqd	lr, [r1], -r4
    */
}

/**
 * Symbol: TFrameSoundChannel::Open(int, int)
 * Address: 000d269c
 */
TFrameSoundChannel::Open(int, int) {
    /*
         d269c:	e1a0c00d 	mov	ip, sp
         d26a0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         d26a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         d26a8:	e1a04000 	mov	r4, r0
         d26ac:	eb6cdfb0 	bl	1c0a574 <TUSoundChannel::$Open(int, int)>
         d26b0:	e1a05000 	mov	r5, r0
         d26b4:	e2840060 	add	r0, r4, #96	; 0x60
         d26b8:	e1a06000 	mov	r6, r0
         d26bc:	eb6bcaf6 	bl	1bc529c <$IsString(RefVar const &)>
         d26c0:	e3300000 	teq	r0, #0	; 0x0
         d26c4:	0a00000b 	beq	d26f8 <TFrameSoundChannel::Open(int, int)+0x5c>
         d26c8:	e24dd080 	sub	sp, sp, #128	; 0x80
         d26cc:	e1a00006 	mov	r0, r6
         d26d0:	eb6bc2ab 	bl	1bc3184 <$GetCString(RefVar const &)>
         d26d4:	e1a0100d 	mov	r1, sp
         d26d8:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         d26dc:	e3a02001 	mov	r2, #1	; 0x1
         d26e0:	eb6c5326 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         d26e4:	e1a0100d 	mov	r1, sp
         d26e8:	e28f0f04 	add	r0, pc, #16	; 0x10
         d26ec:	eb6c1526 	bl	1bd7b8c <$NewByName__FPCcT1>
         d26f0:	e5a4003c 	str	r0, [r4, #60]!	; fField60
         d26f4:	e28dd080 	add	sp, sp, #128	; 0x80
         d26f8:	e1a00005 	mov	r0, r5
         d26fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         d2700:	54536f75 	ldrplb	r6, [r3], -#3957
         d2704:	6e64436f 	cdpvs	3, 6, cr4, cr4, cr15, {3}
         d2708:	64656300 	strvsbt	r6, [r5], -#768	; fField768
    */
}

/**
 * Symbol: TFrameSoundChannel::Close(void)
 * Address: 000d270c
 */
TFrameSoundChannel::Close(void) {
    /*
         d270c:	e1a0c00d 	mov	ip, sp
         d2710:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d2714:	e24cb004 	sub	fp, ip, #4	; 0x4
         d2718:	e1a04000 	mov	r4, r0
         d271c:	eb6cdf8f 	bl	1c0a560 <TUSoundChannel::$Close(void)>
         d2720:	e594103c 	ldr	r1, [r4, #60]	; fField60
         d2724:	e3310000 	teq	r1, #0	; 0x0
         d2728:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         d272c:	e1a00001 	mov	r0, r1
         d2730:	eb6abe74 	bl	1b82108 <$SafeCodecDelete(TSoundCodec *)>
         d2734:	e3a01000 	mov	r1, #0	; 0x0
         d2738:	e584103c 	str	r1, [r4, #60]	; fField60
         d273c:	e5c4105c 	strb	r1, [r4, #92]	; fField92
         d2740:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFrameSoundChannel::Schedule(RefVar const &)
 * Address: 000d2744
 */
TFrameSoundChannel::Schedule(RefVar const &) {
    /*
         d2744:	e1a0c00d 	mov	ip, sp
         d2748:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d274c:	e24cb004 	sub	fp, ip, #4	; 0x4
         d2750:	e1a04000 	mov	r4, r0
         d2754:	e24dd034 	sub	sp, sp, #52	; 0x34
         d2758:	e1a0200d 	mov	r2, sp
         d275c:	eb6aa16f 	bl	1b7ad20 <TFrameSoundChannel::$Convert(RefVar const &, SoundBlock *)>
         d2760:	e2842064 	add	r2, r4, #100	; 0x64
         d2764:	e1a0100d 	mov	r1, sp
         d2768:	e1a00004 	mov	r0, r4
         d276c:	eb6cdf82 	bl	1c0a57c <TUSoundChannel::$Schedule(SoundBlock *, TUSoundCallback *)>
         d2770:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)
 * Address: 000d2774
 */
TFrameSoundChannel::Convert(RefVar const &, SoundBlock *) {
    /*
         d2774:	e1a0c00d 	mov	ip, sp
         d2778:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         d277c:	e24cb004 	sub	fp, ip, #4	; 0x4
         d2780:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
         d2784:	e1a06000 	mov	r6, r0
         d2788:	e1a05001 	mov	r5, r1
         d278c:	e1a04002 	mov	r4, r2
         d2790:	e24dd008 	sub	sp, sp, #8	; 0x8
         d2794:	e3a00002 	mov	r0, #2	; 0x2
         d2798:	eb6bbe6b 	bl	1bc214c <$AllocateRefHandle(long)>
         d279c:	e58d0004 	str	r0, [sp, #4]	; fField4
         d27a0:	e3a00002 	mov	r0, #2	; 0x2
         d27a4:	eb6bbe68 	bl	1bc214c <$AllocateRefHandle(long)>
         d27a8:	e58d0000 	str	r0, [sp]
         d27ac:	e1a00005 	mov	r0, r5
         d27b0:	eb6aa58e 	bl	1b7bdf0 <$ConvertToSoundFrame(RefVar const &)>
         d27b4:	e59d1000 	ldr	r1, [sp]
         d27b8:	e3a07000 	mov	r7, #0	; 0x0
         d27bc:	e5810000 	str	r0, [r1]
         d27c0:	e5847024 	str	r7, [r4, #36]
         d27c4:	e59f1054 	ldr	r1, [pc, #54]	; d2820 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0xac>
         d27c8:	e1a0000d 	mov	r0, sp
         d27cc:	e3a02000 	mov	r2, #0	; 0x0
         d27d0:	eb6bc6a4 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d27d4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         d27d8:	e5810000 	str	r0, [r1]
         d27dc:	e5847028 	str	r7, [r4, #40]
         d27e0:	e59f003c 	ldr	r0, [pc, #3c]	; d2824 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0xb0>
         d27e4:	e5900000 	ldr	r0, [r0]
         d27e8:	e5901000 	ldr	r1, [r0]
         d27ec:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         d27f0:	e5900000 	ldr	r0, [r0]
         d27f4:	eb6bc68d 	bl	1bc4230 <$EQRef__FlT1>
         d27f8:	e59f5028 	ldr	r5, [pc, #28]	; d2828 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0xb4>
         d27fc:	e59f9028 	ldr	r9, [pc, #28]	; d282c <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0xb8>
         d2800:	e59f8028 	ldr	r8, [pc, #28]	; d2830 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0xbc>
         d2804:	e3300000 	teq	r0, #0	; 0x0
         d2808:	0a000009 	beq	d2834 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0xc0>
         d280c:	e1a02004 	mov	r2, r4
         d2810:	e1a0100d 	mov	r1, sp
         d2814:	e1a00006 	mov	r0, r6
         d2818:	eb6aba36 	bl	1b810f8 <TFrameSoundChannel::$OpenCodec(RefVar const &, SoundBlock *)>
         d281c:	ea00000c 	b	d2854 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0xe0>
         d2820:	006846e0 	rsbeq	r4, r8, r0, ror #13
         d2824:	006824d0 	ldreqd	r2, [r8], -#64
         d2828:	ffff8ac7 	swinv	0x00ff8ac7
         d282c:	00371308 	eoreqs	r1, r7, r8, lsl #6
         d2830:	00684410 	rsbeq	r4, r8, r0, lsl r4
         d2834:	e59f00d8 	ldr	r0, [pc, #d8]	; d2914 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x1a0>
         d2838:	e5900000 	ldr	r0, [r0]
         d283c:	e5901000 	ldr	r1, [r0]
         d2840:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         d2844:	e5900000 	ldr	r0, [r0]
         d2848:	eb6bc678 	bl	1bc4230 <$EQRef__FlT1>
         d284c:	e3300000 	teq	r0, #0	; 0x0
         d2850:	0a00009e 	beq	d2ad0 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x35c>
         d2854:	e59f10bc 	ldr	r1, [pc, #bc]	; d2918 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x1a4>
         d2858:	e1a0000d 	mov	r0, sp
         d285c:	e3a02000 	mov	r2, #0	; 0x0
         d2860:	eb6bc680 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2864:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         d2868:	e5810000 	str	r0, [r1]
         d286c:	e1a01000 	mov	r1, r0
         d2870:	e3300002 	teq	r0, #2	; 0x2
         d2874:	0584700c 	streq	r7, [r4, #12]
         d2878:	0a00000d 	beq	d28b4 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x140>
         d287c:	e1a00001 	mov	r0, r1
         d2880:	e3110003 	tst	r1, #3	; 0x3
         d2884:	01a00140 	moveq	r0, r0, asr #2
         d2888:	0a000000 	beq	d2890 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x11c>
         d288c:	eb6bbe22 	bl	1bc211c <$_RINTError(long)>
         d2890:	e584000c 	str	r0, [r4, #12]
         d2894:	e3300000 	teq	r0, #0	; 0x0
         d2898:	13300006 	teqne	r0, #6	; 0x6
         d289c:	13300001 	teqne	r0, #1	; 0x1
         d28a0:	0a000003 	beq	d28b4 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x140>
         d28a4:	e3a02000 	mov	r2, #0	; 0x0
         d28a8:	e1a01005 	mov	r1, r5
         d28ac:	e5990000 	ldr	r0, [r9]
         d28b0:	eb6c4239 	bl	1be319c <$Throw>
         d28b4:	e59f1060 	ldr	r1, [pc, #60]	; d291c <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x1a8>	; fField60
         d28b8:	e1a0000d 	mov	r0, sp
         d28bc:	e3a02000 	mov	r2, #0	; 0x0
         d28c0:	eb6bc668 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d28c4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         d28c8:	e5810000 	str	r0, [r1]
         d28cc:	e3300002 	teq	r0, #2	; 0x2
         d28d0:	0a00003a 	beq	d29c0 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x24c>
         d28d4:	e3100003 	tst	r0, #3	; 0x3
         d28d8:	01a00140 	moveq	r0, r0, asr #2
         d28dc:	0a000000 	beq	d28e4 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x170>
         d28e0:	eb6bbe0d 	bl	1bc211c <$_RINTError(long)>
         d28e4:	e3300008 	teq	r0, #8	; 0x8
         d28e8:	0a000007 	beq	d290c <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x198>
         d28ec:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         d28f0:	e5900000 	ldr	r0, [r0]
         d28f4:	e3100003 	tst	r0, #3	; 0x3
         d28f8:	01a00140 	moveq	r0, r0, asr #2
         d28fc:	0a000000 	beq	d2904 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x190>
         d2900:	eb6bbe05 	bl	1bc211c <$_RINTError(long)>
         d2904:	e3300001 	teq	r0, #1	; 0x1
         d2908:	1a000008 	bne	d2930 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x1bc>
         d290c:	e3a00008 	mov	r0, #8	; 0x8
         d2910:	ea000017 	b	d2974 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x200>
         d2914:	00684698 	streqb	r4, [r8], -#104
         d2918:	00682558 	rsbeq	r2, r8, r8, asr r5
         d291c:	006827d0 	ldreqd	r2, [r8], -#112
         d2920:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         d2924:	eb6bc224 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2928:	e28dd008 	add	sp, sp, #8	; 0x8
         d292c:	ea00008c 	b	d2b64 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x3f0>
         d2930:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         d2934:	e5900000 	ldr	r0, [r0]
         d2938:	e3100003 	tst	r0, #3	; 0x3
         d293c:	01a00140 	moveq	r0, r0, asr #2
         d2940:	0a000000 	beq	d2948 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x1d4>
         d2944:	eb6bbdf4 	bl	1bc211c <$_RINTError(long)>
         d2948:	e3300010 	teq	r0, #16	; 0x10
         d294c:	0a000007 	beq	d2970 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x1fc>
         d2950:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         d2954:	e5900000 	ldr	r0, [r0]
         d2958:	e3100003 	tst	r0, #3	; 0x3
         d295c:	01a00140 	moveq	r0, r0, asr #2
         d2960:	0a000000 	beq	d2968 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x1f4>
         d2964:	eb6bbdec 	bl	1bc211c <$_RINTError(long)>
         d2968:	e3300002 	teq	r0, #2	; 0x2
         d296c:	1a000057 	bne	d2ad0 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x35c>
         d2970:	e3a00010 	mov	r0, #16	; 0x10
         d2974:	e1a01008 	mov	r1, r8
         d2978:	e5840008 	str	r0, [r4, #8]
         d297c:	e1a0000d 	mov	r0, sp
         d2980:	e3a02000 	mov	r2, #0	; 0x0
         d2984:	eb6bc637 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2988:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         d298c:	e5810000 	str	r0, [r1]
         d2990:	eb6bca47 	bl	1bc52b4 <$LockRef(long)>
         d2994:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         d2998:	e5900000 	ldr	r0, [r0]
         d299c:	eb6bbdee 	bl	1bc215c <$BinaryData(long)>
         d29a0:	e5840000 	str	r0, [r4]
         d29a4:	e5940028 	ldr	r0, [r4, #40]
         d29a8:	e3300000 	teq	r0, #0	; 0x0
         d29ac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         d29b0:	e5900000 	ldr	r0, [r0]
         d29b4:	0a000005 	beq	d29d0 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x25c>
         d29b8:	eb6bca3b 	bl	1bc52ac <$Length(long)>
         d29bc:	ea00000a 	b	d29ec <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x278>
         d29c0:	e594000c 	ldr	r0, [r4, #12]
         d29c4:	e3300000 	teq	r0, #0	; 0x0
         d29c8:	1affffe8 	bne	d2970 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x1fc>
         d29cc:	eaffffce 	b	d290c <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x198>
         d29d0:	eb6bca35 	bl	1bc52ac <$Length(long)>
         d29d4:	e1a01000 	mov	r1, r0
         d29d8:	e5940008 	ldr	r0, [r4, #8]
         d29dc:	e3500000 	cmp	r0, #0	; 0x0
         d29e0:	b2800007 	addlt	r0, r0, #7	; 0x7
         d29e4:	e1a001c0 	mov	r0, r0, asr #3
         d29e8:	eb6b7fd4 	bl	1bb2940 <$__rt_sdiv>
         d29ec:	e5840004 	str	r0, [r4, #4]	; fField4
         d29f0:	e59f1068 	ldr	r1, [pc, #68]	; d2a60 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x2ec>
         d29f4:	e1a0000d 	mov	r0, sp
         d29f8:	e3a02000 	mov	r2, #0	; 0x0
         d29fc:	eb6bc619 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2a00:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         d2a04:	e5810000 	str	r0, [r1]
         d2a08:	e2001003 	and	r1, r0, #3	; 0x3
         d2a0c:	e3510000 	cmp	r1, #0	; 0x0
         d2a10:	1a000003 	bne	d2a24 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x2b0>
         d2a14:	01a00140 	moveq	r0, r0, asr #2
         d2a18:	0a000000 	beq	d2a20 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x2ac>
         d2a1c:	eb6bbdbe 	bl	1bc211c <$_RINTError(long)>
         d2a20:	e5840004 	str	r0, [r4, #4]	; fField4
         d2a24:	e59f1038 	ldr	r1, [pc, #38]	; d2a64 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x2f0>
         d2a28:	e1a0000d 	mov	r0, sp
         d2a2c:	e3a02000 	mov	r2, #0	; 0x0
         d2a30:	eb6bc60c 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2a34:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         d2a38:	e5810000 	str	r0, [r1]
         d2a3c:	eb6bca14 	bl	1bc5294 <$ISREAL(long)>
         d2a40:	ed9fc108 	ldfd	f4, [pc, #32]
         d2a44:	e3300000 	teq	r0, #0	; 0x0
         d2a48:	0a000008 	beq	d2a70 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x2fc>
         d2a4c:	e28d0004 	add	r0, sp, #4	; 0x4
         d2a50:	eb6bbdc3 	bl	1bc2164 <$CDouble(RefVar const &)>
         d2a54:	ee100184 	mufd	f0, f0, f4
         d2a58:	ee100170 	fixz	r0, f0
         d2a5c:	ea000017 	b	d2ac0 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x34c>
         d2a60:	00683500 	rsbeq	r3, r8, r0, lsl #10
         d2a64:	00684420 	rsbeq	r4, r8, r0, lsr #8
         d2a68:	40f00000 	rscmis	r0, r0, r0
         d2a6c:	00000000 	andeq	r0, r0, r0
         d2a70:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         d2a74:	e5900000 	ldr	r0, [r0]
         d2a78:	e2001003 	and	r1, r0, #3	; 0x3
         d2a7c:	e3510000 	cmp	r1, #0	; 0x0
         d2a80:	1a000004 	bne	d2a98 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x324>
         d2a84:	01a00140 	moveq	r0, r0, asr #2
         d2a88:	0a000000 	beq	d2a90 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x31c>
         d2a8c:	eb6bbda2 	bl	1bc211c <$_RINTError(long)>
         d2a90:	e1a00800 	mov	r0, r0, lsl #16
         d2a94:	ea000009 	b	d2ac0 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x34c>
         d2a98:	e28d0004 	add	r0, sp, #4	; 0x4
         d2a9c:	eb6cca07 	bl	1c052c0 <$IsBinary(RefVar const &)>
         d2aa0:	e3300000 	teq	r0, #0	; 0x0
         d2aa4:	059f0030 	ldreq	r0, [pc, #30]	; d2adc <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x368>
         d2aa8:	05840010 	streq	r0, [r4, #16]
         d2aac:	0a00000b 	beq	d2ae0 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x36c>
         d2ab0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         d2ab4:	e5900000 	ldr	r0, [r0]
         d2ab8:	eb6bbda7 	bl	1bc215c <$BinaryData(long)>
         d2abc:	e5900000 	ldr	r0, [r0]
         d2ac0:	e5840010 	str	r0, [r4, #16]
         d2ac4:	e5940010 	ldr	r0, [r4, #16]
         d2ac8:	e3500000 	cmp	r0, #0	; 0x0
         d2acc:	ca000003 	bgt	d2ae0 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x36c>
         d2ad0:	e59d0000 	ldr	r0, [sp]
         d2ad4:	eb6bc1b8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2ad8:	eaffff90 	b	d2920 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x1ac>
         d2adc:	560a6e85 	strpl	r6, [sl], -r5, lsl #29
         d2ae0:	e3a00004 	mov	r0, #4	; 0x4
         d2ae4:	eb6bef13 	bl	1bce738 <$__nw(unsigned int)>
         d2ae8:	e1b05000 	movs	r5, r0
         d2aec:	0a000004 	beq	d2b04 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x390>
         d2af0:	e59d0000 	ldr	r0, [sp]
         d2af4:	e5900000 	ldr	r0, [r0]
         d2af8:	eb6bbd93 	bl	1bc214c <$AllocateRefHandle(long)>
         d2afc:	e5850000 	str	r0, [r5]
         d2b00:	e5a07004 	str	r7, [r0, #4]!	; fField4
         d2b04:	e5845024 	str	r5, [r4, #36]
         d2b08:	eb6c3d84 	bl	1be2120 <$MemError>
         d2b0c:	e1b05000 	movs	r5, r0
         d2b10:	1a000072 	bne	d2ce0 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x56c>
         d2b14:	e59f1030 	ldr	r1, [pc, #30]	; d2b4c <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x3d8>
         d2b18:	e1a0000d 	mov	r0, sp
         d2b1c:	e3a02000 	mov	r2, #0	; 0x0
         d2b20:	eb6bc5d0 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2b24:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         d2b28:	e5810000 	str	r0, [r1]
         d2b2c:	e3300002 	teq	r0, #2	; 0x2
         d2b30:	0a00002b 	beq	d2be4 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x470>
         d2b34:	e3100003 	tst	r0, #3	; 0x3
         d2b38:	01a00140 	moveq	r0, r0, asr #2
         d2b3c:	0a000000 	beq	d2b44 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x3d0>
         d2b40:	eb6bbd75 	bl	1bc211c <$_RINTError(long)>
         d2b44:	e5840018 	str	r0, [r4, #24]
         d2b48:	ea000026 	b	d2be8 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x474>
         d2b4c:	00684800 	rsbeq	r4, r8, r0, lsl #16
         d2b50:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         d2b54:	eb6bc198 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2b58:	e28dd008 	add	sp, sp, #8	; 0x8
         d2b5c:	e3350000 	teq	r5, #0	; 0x0
         d2b60:	0a000065 	beq	d2cfc <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x588>
         d2b64:	e1a01004 	mov	r1, r4
         d2b68:	e1a00006 	mov	r0, r6
         d2b6c:	eb6abd63 	bl	1b82100 <TFrameSoundChannel::$DeleteCodec(SoundBlock *)>
         d2b70:	e5940024 	ldr	r0, [r4, #36]
         d2b74:	e3300000 	teq	r0, #0	; 0x0
         d2b78:	0a000013 	beq	d2bcc <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x458>
         d2b7c:	e24dd004 	sub	sp, sp, #4	; 0x4
         d2b80:	e5900000 	ldr	r0, [r0]
         d2b84:	e5900000 	ldr	r0, [r0]
         d2b88:	eb6bbd6f 	bl	1bc214c <$AllocateRefHandle(long)>
         d2b8c:	e1a01008 	mov	r1, r8
         d2b90:	e58d0000 	str	r0, [sp]
         d2b94:	e1a0000d 	mov	r0, sp
         d2b98:	e3a02000 	mov	r2, #0	; 0x0
         d2b9c:	eb6bc5b1 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2ba0:	eb6bd632 	bl	1bc8470 <$UnlockRef(long)>
         d2ba4:	e5944024 	ldr	r4, [r4, #36]
         d2ba8:	e3340000 	teq	r4, #0	; 0x0
         d2bac:	0a000003 	beq	d2bc0 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x44c>
         d2bb0:	e5940000 	ldr	r0, [r4]
         d2bb4:	eb6bc180 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2bb8:	e1a00004 	mov	r0, r4
         d2bbc:	eb6beac7 	bl	1bcd6e0 <$__dl(void *)>
         d2bc0:	e59d0000 	ldr	r0, [sp]
         d2bc4:	eb6bc17c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2bc8:	e28dd004 	add	sp, sp, #4	; 0x4
         d2bcc:	e1a01005 	mov	r1, r5
         d2bd0:	e3a02000 	mov	r2, #0	; 0x0
         d2bd4:	e5990000 	ldr	r0, [r9]
         d2bd8:	ed1bc20c 	lfm	f4, 1, [fp, -#48]
         d2bdc:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         d2be0:	ea6c416d 	b	1be319c <$Throw>
         d2be4:	e5847018 	str	r7, [r4, #24]
         d2be8:	e59f1070 	ldr	r1, [pc, #70]	; d2c60 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x4ec>
         d2bec:	e1a0000d 	mov	r0, sp
         d2bf0:	e3a02000 	mov	r2, #0	; 0x0
         d2bf4:	eb6bc59b 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2bf8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         d2bfc:	e5810000 	str	r0, [r1]
         d2c00:	e3300002 	teq	r0, #2	; 0x2
         d2c04:	05940004 	ldreq	r0, [r4, #4]	; fField4
         d2c08:	0a000003 	beq	d2c1c <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x4a8>
         d2c0c:	e3100003 	tst	r0, #3	; 0x3
         d2c10:	01a00140 	moveq	r0, r0, asr #2
         d2c14:	0a000000 	beq	d2c1c <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x4a8>
         d2c18:	eb6bbd3f 	bl	1bc211c <$_RINTError(long)>
         d2c1c:	e584001c 	str	r0, [r4, #28]
         d2c20:	e59f103c 	ldr	r1, [pc, #3c]	; d2c64 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x4f0>
         d2c24:	e1a0000d 	mov	r0, sp
         d2c28:	e3a02000 	mov	r2, #0	; 0x0
         d2c2c:	eb6bc58d 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2c30:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         d2c34:	e5810000 	str	r0, [r1]
         d2c38:	e1a01000 	mov	r1, r0
         d2c3c:	e3300002 	teq	r0, #2	; 0x2
         d2c40:	0a000008 	beq	d2c68 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x4f4>
         d2c44:	e1a00001 	mov	r0, r1
         d2c48:	e3110003 	tst	r1, #3	; 0x3
         d2c4c:	01a00140 	moveq	r0, r0, asr #2
         d2c50:	0a000000 	beq	d2c58 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x4e4>
         d2c54:	eb6bbd30 	bl	1bc211c <$_RINTError(long)>
         d2c58:	e5840020 	str	r0, [r4, #32]
         d2c5c:	ea000002 	b	d2c6c <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x4f8>
         d2c60:	00682668 	rsbeq	r2, r8, r8, ror #12
         d2c64:	00683690 	streqb	r3, [r8], -#96	; fField96
         d2c68:	e5847020 	str	r7, [r4, #32]
         d2c6c:	e59f1030 	ldr	r1, [pc, #30]	; d2ca4 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x530>
         d2c70:	e1a0000d 	mov	r0, sp
         d2c74:	e3a02000 	mov	r2, #0	; 0x0
         d2c78:	eb6bc57a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2c7c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         d2c80:	e5810000 	str	r0, [r1]
         d2c84:	e2001003 	and	r1, r0, #3	; 0x3
         d2c88:	e3510000 	cmp	r1, #0	; 0x0
         d2c8c:	1a000005 	bne	d2ca8 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x534>
         d2c90:	01a00140 	moveq	r0, r0, asr #2
         d2c94:	0a000000 	beq	d2c9c <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x528>
         d2c98:	eb6bbd1f 	bl	1bc211c <$_RINTError(long)>
         d2c9c:	eb6838fb 	bl	1ae1090 <$VolumeToDecibels(long)>
         d2ca0:	ea000008 	b	d2cc8 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x554>
         d2ca4:	00685130 	rsbeq	r5, r8, r0, lsr r1
         d2ca8:	eb6bc979 	bl	1bc5294 <$ISREAL(long)>
         d2cac:	e3300000 	teq	r0, #0	; 0x0
         d2cb0:	03e00102 	mvneq	r0, #-2147483648	; 0x80000000
         d2cb4:	0a000003 	beq	d2cc8 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x554>
         d2cb8:	e28d0004 	add	r0, sp, #4	; 0x4
         d2cbc:	eb6bbd28 	bl	1bc2164 <$CDouble(RefVar const &)>
         d2cc0:	ee100184 	mufd	f0, f0, f4
         d2cc4:	ee100170 	fixz	r0, f0
         d2cc8:	e5840014 	str	r0, [r4, #20]
         d2ccc:	e1a01004 	mov	r1, r4
         d2cd0:	e1a00006 	mov	r0, r6
         d2cd4:	eb6ab908 	bl	1b810fc <TFrameSoundChannel::$InitCodec(SoundBlock *)>
         d2cd8:	e1b05000 	movs	r5, r0
         d2cdc:	0a000002 	beq	d2cec <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x578>
         d2ce0:	e59d0000 	ldr	r0, [sp]
         d2ce4:	eb6bc134 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2ce8:	eaffff98 	b	d2b50 <TFrameSoundChannel::Convert(RefVar const &, SoundBlock *)+0x3dc>
         d2cec:	e59d0000 	ldr	r0, [sp]
         d2cf0:	eb6bc131 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2cf4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         d2cf8:	eb6bc12f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2cfc:	ed1bc20c 	lfm	f4, 1, [fp, -#48]
         d2d00:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)
 * Address: 000d2d04
 */
TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *) {
    /*
         d2d04:	e1a0c00d 	mov	ip, sp
         d2d08:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         d2d0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         d2d10:	e1a05000 	mov	r5, r0
         d2d14:	e1a06001 	mov	r6, r1
         d2d18:	e1a04002 	mov	r4, r2
         d2d1c:	e24dd084 	sub	sp, sp, #132	; 0x84
         d2d20:	e3a00002 	mov	r0, #2	; 0x2
         d2d24:	eb6bbd08 	bl	1bc214c <$AllocateRefHandle(long)>
         d2d28:	e58d0000 	str	r0, [sp]
         d2d2c:	e59f102c 	ldr	r1, [pc, #2c]	; d2d60 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0x5c>
         d2d30:	e1a00006 	mov	r0, r6
         d2d34:	e3a02000 	mov	r2, #0	; 0x0
         d2d38:	eb6bc54a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2d3c:	e59d1000 	ldr	r1, [sp]
         d2d40:	e5810000 	str	r0, [r1]
         d2d44:	e2001003 	and	r1, r0, #3	; 0x3
         d2d48:	e3510000 	cmp	r1, #0	; 0x0
         d2d4c:	1a000004 	bne	d2d64 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0x60>
         d2d50:	01a00140 	moveq	r0, r0, asr #2
         d2d54:	0a000003 	beq	d2d68 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0x64>
         d2d58:	eb6bbcef 	bl	1bc211c <$_RINTError(long)>
         d2d5c:	ea000001 	b	d2d68 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0x64>
         d2d60:	00682208 	rsbeq	r2, r8, r8, lsl #4
         d2d64:	e3a00000 	mov	r0, #0	; 0x0
         d2d68:	e584002c 	str	r0, [r4, #44]
         d2d6c:	e59f102c 	ldr	r1, [pc, #2c]	; d2da0 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0x9c>
         d2d70:	e1a00006 	mov	r0, r6
         d2d74:	e3a02000 	mov	r2, #0	; 0x0
         d2d78:	eb6bc53a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2d7c:	e59d1000 	ldr	r1, [sp]
         d2d80:	e5810000 	str	r0, [r1]
         d2d84:	e2001003 	and	r1, r0, #3	; 0x3
         d2d88:	e3510000 	cmp	r1, #0	; 0x0
         d2d8c:	1a000004 	bne	d2da4 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0xa0>
         d2d90:	01a00140 	moveq	r0, r0, asr #2
         d2d94:	0a000003 	beq	d2da8 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0xa4>
         d2d98:	eb6bbcdf 	bl	1bc211c <$_RINTError(long)>
         d2d9c:	ea000001 	b	d2da8 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0xa4>
         d2da0:	00682200 	rsbeq	r2, r8, r0, lsl #4
         d2da4:	e3a00000 	mov	r0, #0	; 0x0
         d2da8:	e5840030 	str	r0, [r4, #48]
         d2dac:	e59f10dc 	ldr	r1, [pc, #dc]	; d2e90 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0x18c>
         d2db0:	e1a00006 	mov	r0, r6
         d2db4:	e3a02000 	mov	r2, #0	; 0x0
         d2db8:	eb6bc52a 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2dbc:	e59d1000 	ldr	r1, [sp]
         d2dc0:	e5810000 	str	r0, [r1]
         d2dc4:	e1a0000d 	mov	r0, sp
         d2dc8:	eb6bc933 	bl	1bc529c <$IsString(RefVar const &)>
         d2dcc:	e3a07000 	mov	r7, #0	; 0x0
         d2dd0:	e3300000 	teq	r0, #0	; 0x0
         d2dd4:	0a000032 	beq	d2ea4 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0x1a0>
         d2dd8:	e1a0000d 	mov	r0, sp
         d2ddc:	eb6bc0e8 	bl	1bc3184 <$GetCString(RefVar const &)>
         d2de0:	e28d1004 	add	r1, sp, #4	; 0x4
         d2de4:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
         d2de8:	e3a02001 	mov	r2, #1	; 0x1
         d2dec:	eb6c5163 	bl	1be7380 <$ConvertFromUnicode__FPCUsPvlT3>
         d2df0:	e1a0000d 	mov	r0, sp
         d2df4:	eb6bc928 	bl	1bc529c <$IsString(RefVar const &)>
         d2df8:	e24dd004 	sub	sp, sp, #4	; 0x4
         d2dfc:	e3300000 	teq	r0, #0	; 0x0
         d2e00:	0a000014 	beq	d2e58 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0x154>
         d2e04:	e2850060 	add	r0, r5, #96	; 0x60
         d2e08:	e1a06000 	mov	r6, r0
         d2e0c:	eb6bc922 	bl	1bc529c <$IsString(RefVar const &)>
         d2e10:	e3300000 	teq	r0, #0	; 0x0
         d2e14:	0a00000f 	beq	d2e58 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0x154>
         d2e18:	e3a00002 	mov	r0, #2	; 0x2
         d2e1c:	eb6bbcca 	bl	1bc214c <$AllocateRefHandle(long)>
         d2e20:	e58d0000 	str	r0, [sp]
         d2e24:	e1a0000d 	mov	r0, sp
         d2e28:	e1a02006 	mov	r2, r6
         d2e2c:	e28d1004 	add	r1, sp, #4	; 0x4
         d2e30:	eb6c7ab1 	bl	1bf18fc <$FStrEqual__FRC6RefVarN21>
         d2e34:	e2500002 	subs	r0, r0, #2	; 0x2
         d2e38:	13a00001 	movne	r0, #1	; 0x1
         d2e3c:	e20060ff 	and	r6, r0, #255	; 0xff
         d2e40:	e59d0000 	ldr	r0, [sp]
         d2e44:	eb6bc0dc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2e48:	e3360000 	teq	r6, #0	; 0x0
         d2e4c:	15b5003c 	ldrne	r0, [r5, #60]!	; fField60
         d2e50:	15a40028 	strne	r0, [r4, #40]!
         d2e54:	1a000018 	bne	d2ebc <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0x1b8>
         d2e58:	e28d1008 	add	r1, sp, #8	; 0x8
         d2e5c:	e28f0f0c 	add	r0, pc, #48	; 0x30
         d2e60:	eb6c1349 	bl	1bd7b8c <$NewByName__FPCcT1>
         d2e64:	e5a40028 	str	r0, [r4, #40]!
         d2e68:	e3300000 	teq	r0, #0	; 0x0
         d2e6c:	1a000012 	bne	d2ebc <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0x1b8>
         d2e70:	eb6c3caa 	bl	1be2120 <$MemError>
         d2e74:	e3300000 	teq	r0, #0	; 0x0
         d2e78:	059f0020 	ldreq	r0, [pc, #20]	; d2ea0 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0x19c>
         d2e7c:	e1a04000 	mov	r4, r0
         d2e80:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         d2e84:	eb6bc0cc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2e88:	e1a00004 	mov	r0, r4
         d2e8c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         d2e90:	006824d8 	ldreqd	r2, [r8], -#72
         d2e94:	54536f75 	ldrplb	r6, [r3], -#3957
         d2e98:	6e64436f 	cdpvs	3, 6, cr4, cr4, cr15, {3}
         d2e9c:	64656300 	strvsbt	r6, [r5], -#768	; fField768
         d2ea0:	ffff8ac7 	swinv	0x00ff8ac7
         d2ea4:	e3a040ee 	mov	r4, #238	; 0xee
         d2ea8:	e2444cbe 	sub	r4, r4, #48640	; 0xbe00
         d2eac:	e59d0000 	ldr	r0, [sp]
         d2eb0:	eb6bc0c1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2eb4:	e1a00004 	mov	r0, r4
         d2eb8:	ea000002 	b	d2ec8 <TFrameSoundChannel::OpenCodec(RefVar const &, SoundBlock *)+0x1c4>
         d2ebc:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         d2ec0:	eb6bc0bd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2ec4:	e1a00007 	mov	r0, r7
         d2ec8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

