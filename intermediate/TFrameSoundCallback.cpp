#include "include/TFrameSoundCallback.h"

/**
 * Symbol: TFrameSoundCallback::__ct(void)
 * Address: 000d1ea0
 */
TFrameSoundCallback::TFrameSoundCallback(void) {
    /*
         d1ea0:	e1a0c00d 	mov	ip, sp
         d1ea4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d1ea8:	e24cb004 	sub	fp, ip, #4	; 0x4
         d1eac:	e1b04000 	movs	r4, r0
         d1eb0:	1a000003 	bne	d1ec4 <TFrameSoundCallback::__ct(void)+0x24>
         d1eb4:	e3a00008 	mov	r0, #8	; 0x8
         d1eb8:	eb6bf21e 	bl	1bce738 <$__nw(unsigned int)>
         d1ebc:	e1b04000 	movs	r4, r0
         d1ec0:	0a000005 	beq	d1edc <TFrameSoundCallback::__ct(void)+0x3c>
         d1ec4:	e1a00004 	mov	r0, r4
         d1ec8:	eb6aa7b3 	bl	1b7bd9c <TUSoundCallback::$__ct(void)>
         d1ecc:	e59f0010 	ldr	r0, [pc, #10]	; d1ee4 <TFrameSoundCallback::__ct(void)+0x44>
         d1ed0:	e5840000 	str	r0, [r4]
         d1ed4:	e3a00000 	mov	r0, #0	; 0x0
         d1ed8:	e5840004 	str	r0, [r4, #4]
         d1edc:	e1a00004 	mov	r0, r4
         d1ee0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         d1ee4:	0001ec54 	andeq	lr, r1, r4, asr ip
    */
}

/**
 * Symbol: TFrameSoundCallback::__dt(void)
 * Address: 000d1ee8
 */
TFrameSoundCallback::~TFrameSoundCallback(void) {
    /*
         d1ee8:	e1a0c00d 	mov	ip, sp
         d1eec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         d1ef0:	e24cb004 	sub	fp, ip, #4	; 0x4
         d1ef4:	e1a04000 	mov	r4, r0
         d1ef8:	e1a05001 	mov	r5, r1
         d1efc:	e59f0020 	ldr	r0, [pc, #20]	; d1f24 <TFrameSoundCallback::__dt(void)+0x3c>
         d1f00:	e5840000 	str	r0, [r4]
         d1f04:	e1a00004 	mov	r0, r4
         d1f08:	e3a01000 	mov	r1, #0	; 0x0
         d1f0c:	eb6aa7a8 	bl	1b7bdb4 <TUSoundCallback::$__dt(void)>
         d1f10:	e3150001 	tst	r5, #1	; 0x1
         d1f14:	11a00004 	movne	r0, r4
         d1f18:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         d1f1c:	1a6bedef 	bne	1bcd6e0 <$__dl(void *)>
         d1f20:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         d1f24:	0001ec54 	andeq	lr, r1, r4, asr ip
    */
}

/**
 * Symbol: TFrameSoundCallback::Complete(SoundBlock *, int, long)
 * Address: 000d24bc
 */
TFrameSoundCallback::Complete(SoundBlock *, int, long) {
    /*
         d24bc:	e1a0c00d 	mov	ip, sp
         d24c0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         d24c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         d24c8:	e1a07000 	mov	r7, r0
         d24cc:	e1a04001 	mov	r4, r1
         d24d0:	e1a06002 	mov	r6, r2
         d24d4:	e1a05003 	mov	r5, r3
         d24d8:	e24dd004 	sub	sp, sp, #4	; 0x4
         d24dc:	e5910024 	ldr	r0, [r1, #36]
         d24e0:	e5900000 	ldr	r0, [r0]
         d24e4:	e5900000 	ldr	r0, [r0]
         d24e8:	eb6bbf17 	bl	1bc214c <$AllocateRefHandle(long)>
         d24ec:	e58d0000 	str	r0, [sp]
         d24f0:	e3a09000 	mov	r9, #0	; 0x0
         d24f4:	e5948024 	ldr	r8, [r4, #36]
         d24f8:	e3380000 	teq	r8, #0	; 0x0
         d24fc:	0a000003 	beq	d2510 <TFrameSoundCallback::Complete(SoundBlock *, int, long)+0x54>
         d2500:	e5980000 	ldr	r0, [r8]
         d2504:	eb6bc32c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d2508:	e1a00008 	mov	r0, r8
         d250c:	eb6bec73 	bl	1bcd6e0 <$__dl(void *)>
         d2510:	e59f10c0 	ldr	r1, [pc, #c0]	; d25d8 <TFrameSoundCallback::Complete(SoundBlock *, int, long)+0x11c>
         d2514:	e1a0000d 	mov	r0, sp
         d2518:	e3a02000 	mov	r2, #0	; 0x0
         d251c:	eb6bc751 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2520:	eb6bd7d2 	bl	1bc8470 <$UnlockRef(long)>
         d2524:	e1a01004 	mov	r1, r4
         d2528:	e5b70004 	ldr	r0, [r7, #4]!
         d252c:	eb6abef3 	bl	1b82100 <TFrameSoundChannel::$DeleteCodec(SoundBlock *)>
         d2530:	e52d906c 	str	r9, [sp, -#108]!
         d2534:	e28d0008 	add	r0, sp, #8	; 0x8
         d2538:	eb6b810d 	bl	1bb2974 <$setjmp>
         d253c:	e3300000 	teq	r0, #0	; 0x0
         d2540:	1a00001f 	bne	d25c4 <TFrameSoundCallback::Complete(SoundBlock *, int, long)+0x108>
         d2544:	e1a0000d 	mov	r0, sp
         d2548:	eb6c36cb 	bl	1be007c <$AddExceptionHandler>
         d254c:	e59f1088 	ldr	r1, [pc, #88]	; d25dc <TFrameSoundCallback::Complete(SoundBlock *, int, long)+0x120>
         d2550:	e1a07001 	mov	r7, r1
         d2554:	e28d006c 	add	r0, sp, #108	; 0x6c
         d2558:	e3a02000 	mov	r2, #0	; 0x0
         d255c:	eb6bc741 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
         d2560:	eb6bbef9 	bl	1bc214c <$AllocateRefHandle(long)>
         d2564:	e1a04000 	mov	r4, r0
         d2568:	e24dd008 	sub	sp, sp, #8	; 0x8
         d256c:	e5900000 	ldr	r0, [r0]
         d2570:	e3300002 	teq	r0, #2	; 0x2
         d2574:	0a00000f 	beq	d25b8 <TFrameSoundCallback::Complete(SoundBlock *, int, long)+0xfc>
         d2578:	e1a00105 	mov	r0, r5, lsl #2
         d257c:	eb6bbef2 	bl	1bc214c <$AllocateRefHandle(long)>
         d2580:	e58d0000 	str	r0, [sp]
         d2584:	e1a0500d 	mov	r5, sp
         d2588:	e1a00106 	mov	r0, r6, lsl #2
         d258c:	eb6bbeee 	bl	1bc214c <$AllocateRefHandle(long)>
         d2590:	e58d0004 	str	r0, [sp, #4]
         d2594:	e28d2004 	add	r2, sp, #4	; 0x4
         d2598:	e1a01007 	mov	r1, r7
         d259c:	e28d0074 	add	r0, sp, #116	; 0x74
         d25a0:	e1a03005 	mov	r3, r5
         d25a4:	eb6cc2f5 	bl	1c03180 <$NSSendProto__FRC6RefVarN31>
         d25a8:	e59d0000 	ldr	r0, [sp]
         d25ac:	eb6bc302 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d25b0:	e59d0004 	ldr	r0, [sp, #4]
         d25b4:	eb6bc300 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d25b8:	e28dd008 	add	sp, sp, #8	; 0x8
         d25bc:	e1a00004 	mov	r0, r4
         d25c0:	eb6bc2fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d25c4:	e1a0000d 	mov	r0, sp
         d25c8:	eb6c3aba 	bl	1be10b8 <$ExitHandler>
         d25cc:	e5bd006c 	ldr	r0, [sp, #108]!
         d25d0:	eb6bc2f9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         d25d4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         d25d8:	00684410 	rsbeq	r4, r8, r0, lsl r4
         d25dc:	00682288 	rsbeq	r2, r8, r8, lsl #5
    */
}

