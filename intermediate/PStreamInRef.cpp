#include "include/PStreamInRef.h"

/**
 * Symbol: Sizeof__12PStreamInRefSFv
 * Address: 001fc4c0
 */
void PStreamInRef::Sizeof() {
    /*
        1fc4c0:	e3a00010 	mov	r0, #16	; 0x10
        1fc4c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStreamInRef::New(void)
 * Address: 001fc4c8
 */
PStreamInRef::New(void) {
    /*
        1fc4c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStreamInRef::Delete(void)
 * Address: 001fc4cc
 */
PStreamInRef::Delete(void) {
    /*
        1fc4cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStreamInRef::Translate(void *, PipeCallBack *)
 * Address: 001fc4d0
 */
PStreamInRef::Translate(void *, PipeCallBack *) {
    /*
        1fc4d0:	e1a0c00d 	mov	ip, sp
        1fc4d4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1fc4d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fc4dc:	e1a04001 	mov	r4, r1
        1fc4e0:	e1a05002 	mov	r5, r2
        1fc4e4:	e3a00002 	mov	r0, #2	; 0x2
        1fc4e8:	eb671717 	bl	1bc214c <$AllocateRefHandle(long)>
        1fc4ec:	e1a06000 	mov	r6, r0
        1fc4f0:	e3a07000 	mov	r7, #0	; 0x0
        1fc4f4:	e3340000 	teq	r4, #0	; 0x0
        1fc4f8:	0a000026 	beq	1fc598 <PStreamInRef::Translate(void *, PipeCallBack *)+0xc8>
        1fc4fc:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        1fc500:	e1a0000d 	mov	r0, sp
        1fc504:	eb66e577 	bl	1bb5ae8 <TEndpointPipe::$__ct(void)>
        1fc508:	e1a03005 	mov	r3, r5
        1fc50c:	e5d4200c 	ldrb	r2, [r4, #12]
        1fc510:	e5941008 	ldr	r1, [r4, #8]
        1fc514:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1fc518:	e28d000c 	add	r0, sp, #12	; 0xc
        1fc51c:	e3a03000 	mov	r3, #0	; 0x0
        1fc520:	e3a02c02 	mov	r2, #512	; 0x200
        1fc524:	e5941004 	ldr	r1, [r4, #4]
        1fc528:	eb680a7b 	bl	1bfef1c <TEndpointPipe::$Init(TEndpoint *, long, long, unsigned long, unsigned char, PipeCallBack *)>
        1fc52c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1fc530:	e1a02004 	mov	r2, r4
        1fc534:	e28d1010 	add	r1, sp, #16	; 0x10
        1fc538:	e1a0000d 	mov	r0, sp
        1fc53c:	eb61488c 	bl	1a4e774 <TObjectReader::$__ct(CPipe &, RefVar const &)>
        1fc540:	e52d706c 	str	r7, [sp, -#108]!
        1fc544:	e28d0008 	add	r0, sp, #8	; 0x8
        1fc548:	eb66d909 	bl	1bb2974 <$setjmp>
        1fc54c:	e3300000 	teq	r0, #0	; 0x0
        1fc550:	1a000015 	bne	1fc5ac <PStreamInRef::Translate(void *, PipeCallBack *)+0xdc>
        1fc554:	e1a0000d 	mov	r0, sp
        1fc558:	eb678ec7 	bl	1be007c <$AddExceptionHandler>
        1fc55c:	e28d006c 	add	r0, sp, #108	; 0x6c
        1fc560:	eb672769 	bl	1bc630c <TObjectReader::$Read(void)>
        1fc564:	e5860000 	str	r0, [r6]
        1fc568:	e1a0000d 	mov	r0, sp
        1fc56c:	eb6792d1 	bl	1be10b8 <$ExitHandler>
        1fc570:	e28dd06c 	add	sp, sp, #108	; 0x6c
        1fc574:	e1a0000d 	mov	r0, sp
        1fc578:	e3a01000 	mov	r1, #0	; 0x0
        1fc57c:	eb61487b 	bl	1a4e770 <TObjectReader::$__dt(void)>
        1fc580:	e28dd010 	add	sp, sp, #16	; 0x10
        1fc584:	e1a0000d 	mov	r0, sp
        1fc588:	e3a01000 	mov	r1, #0	; 0x0
        1fc58c:	e1a0e00f 	mov	lr, pc
        1fc590:	e59df000 	ldr	pc, [sp]
        1fc594:	e28dd02c 	add	sp, sp, #44	; 0x2c
        1fc598:	e5964000 	ldr	r4, [r6]
        1fc59c:	e1a00006 	mov	r0, r6
        1fc5a0:	eb671b05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1fc5a4:	e1a00004 	mov	r0, r4
        1fc5a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1fc5ac:	e28d006c 	add	r0, sp, #108	; 0x6c
        1fc5b0:	e3a01000 	mov	r1, #0	; 0x0
        1fc5b4:	eb61486d 	bl	1a4e770 <TObjectReader::$__dt(void)>
        1fc5b8:	e28d007c 	add	r0, sp, #124	; 0x7c
        1fc5bc:	e3a01000 	mov	r1, #0	; 0x0
        1fc5c0:	eb66e95a 	bl	1bb6b30 <TEndpointPipe::$__dt(void)>
        1fc5c4:	e1a0000d 	mov	r0, sp
        1fc5c8:	eb6796e1 	bl	1be2154 <$NextHandler>
        1fc5cc:	eafffff6 	b	1fc5ac <PStreamInRef::Translate(void *, PipeCallBack *)+0xdc>
    */
}

/**
 * Symbol: ClassInfo__12PStreamInRefSFv
 * Address: 0038a274
 */
void PStreamInRef::ClassInfo() {
    /*
        38a274:	e24f0044 	sub	r0, pc, #68	; 0x44
        38a278:	e1a0f00e 	mov	pc, lr
        38a27c:	e3a00000 	mov	r0, #0	; 0x0
        38a280:	e1a0f00e 	mov	pc, lr
        38a284:	50537472 	subpls	r7, r3, r2, ror r4
        38a288:	65616d49 	strvsb	r6, [r1, -#3401]!
        38a28c:	6e526566 	cdpvs	5, 5, cr6, cr2, cr6, {3}
        38a290:	00504672 	subeqs	r4, r0, r2, ror r6
        38a294:	616d6553 	cmnvs	sp, r3, asr r5
        38a298:	6f757263 	swivs	0x00757263
        38a29c:	65000000 	strvs	r0, [r0]
        38a2a0:	00000000 	andeq	r0, r0, r0
        38a2a4:	eafffff2 	b	38a274 <ClassInfo__12PStreamInRefSFv>
        38a2a8:	ea607441 	b	1ba73b4 <PStreamInRef::$New(void)>
        38a2ac:	ea607025 	b	1ba6348 <PStreamInRef::$Delete(void)>
        38a2b0:	ea607859 	b	1ba841c <PStreamInRef::$Translate(void *, PipeCallBack *)>
        38a2b4:	00000000 	andeq	r0, r0, r0
        38a2b8:	00000048 	andeq	r0, r0, r8, asr #32
        38a2bc:	00000053 	andeq	r0, r0, r3, asr r0
        38a2c0:	0000005a 	andeq	r0, r0, sl, asr r0
        38a2c4:	00000058 	andeq	r0, r0, r8, asr r0
        38a2c8:	00000068 	andeq	r0, r0, r8, rrx
        38a2cc:	ea60953b 	b	1baf7c0 <$Sizeof__14PScriptDataOutSFv>
        38a2d8:	ea60743e 	b	1ba73d8 <PScriptDataOut::$New(void)>
        38a2dc:	ea607022 	b	1ba636c <PScriptDataOut::$Delete(void)>
        38a2ec:	ea000001 	b	38a2f8 <ClassInfo__14PScriptDataOutSFv+0x8>
    */
}

