#include "include/PStreamOutRef.h"

/**
 * Symbol: Sizeof__13PStreamOutRefSFv
 * Address: 001fc5d0
 */
void PStreamOutRef::Sizeof() {
    /*
        1fc5d0:	e3a00010 	mov	r0, #16	; 0x10
        1fc5d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStreamOutRef::New(void)
 * Address: 001fc5d8
 */
PStreamOutRef::New(void) {
    /*
        1fc5d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStreamOutRef::Delete(void)
 * Address: 001fc5dc
 */
PStreamOutRef::Delete(void) {
    /*
        1fc5dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStreamOutRef::Translate(void *, PipeCallBack *)
 * Address: 001fc5e0
 */
PStreamOutRef::Translate(void *, PipeCallBack *) {
    /*
        1fc5e0:	e1a0c00d 	mov	ip, sp
        1fc5e4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1fc5e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1fc5ec:	e1a05001 	mov	r5, r1
        1fc5f0:	e1a04002 	mov	r4, r2
        1fc5f4:	e3a00002 	mov	r0, #2	; 0x2
        1fc5f8:	eb6716d3 	bl	1bc214c <$AllocateRefHandle(long)>
        1fc5fc:	e1a06000 	mov	r6, r0
        1fc600:	e3350000 	teq	r5, #0	; 0x0
        1fc604:	0a000025 	beq	1fc6a0 <PStreamOutRef::Translate(void *, PipeCallBack *)+0xc0>
        1fc608:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        1fc60c:	e1a0000d 	mov	r0, sp
        1fc610:	eb66e534 	bl	1bb5ae8 <TEndpointPipe::$__ct(void)>
        1fc614:	e1a03004 	mov	r3, r4
        1fc618:	e5d5200c 	ldrb	r2, [r5, #12]
        1fc61c:	e5951008 	ldr	r1, [r5, #8]
        1fc620:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1fc624:	e28d000c 	add	r0, sp, #12	; 0xc
        1fc628:	e3a03c02 	mov	r3, #512	; 0x200
        1fc62c:	e3a02000 	mov	r2, #0	; 0x0
        1fc630:	e5951004 	ldr	r1, [r5, #4]
        1fc634:	eb680a38 	bl	1bfef1c <TEndpointPipe::$Init(TEndpoint *, long, long, unsigned long, unsigned char, PipeCallBack *)>
        1fc638:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1fc63c:	e28d2028 	add	r2, sp, #40	; 0x28
        1fc640:	e1a01005 	mov	r1, r5
        1fc644:	e1a0000d 	mov	r0, sp
        1fc648:	e3a03000 	mov	r3, #0	; 0x0
        1fc64c:	eb6712a6 	bl	1bc10ec <TObjectWriter::$__ct(RefVar const &, CPipe &, int)>
        1fc650:	e3340000 	teq	r4, #0	; 0x0
        1fc654:	0a000002 	beq	1fc664 <PStreamOutRef::Translate(void *, PipeCallBack *)+0x84>
        1fc658:	e1a0000d 	mov	r0, sp
        1fc65c:	eb672744 	bl	1bc6374 <TObjectWriter::$Size(void)>
        1fc660:	e5a40008 	str	r0, [r4, #8]!
        1fc664:	e1a0000d 	mov	r0, sp
        1fc668:	eb672f83 	bl	1bc847c <TObjectWriter::$Write(void)>
        1fc66c:	e28d0028 	add	r0, sp, #40	; 0x28
        1fc670:	e59d1028 	ldr	r1, [sp, #40]
        1fc674:	e1a0e00f 	mov	lr, pc
        1fc678:	e281f020 	add	pc, r1, #32	; 0x20
        1fc67c:	e1a0000d 	mov	r0, sp
        1fc680:	e3a01000 	mov	r1, #0	; 0x0
        1fc684:	eb614837 	bl	1a4e768 <TObjectWriter::$__dt(void)>
        1fc688:	e28dd028 	add	sp, sp, #40	; 0x28
        1fc68c:	e1a0000d 	mov	r0, sp
        1fc690:	e3a01000 	mov	r1, #0	; 0x0
        1fc694:	e1a0e00f 	mov	lr, pc
        1fc698:	e59df000 	ldr	pc, [sp]
        1fc69c:	e28dd02c 	add	sp, sp, #44	; 0x2c
        1fc6a0:	e5964000 	ldr	r4, [r6]
        1fc6a4:	e1a00006 	mov	r0, r6
        1fc6a8:	eb671ac3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1fc6ac:	e1a00004 	mov	r0, r4
        1fc6b0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__13PStreamOutRefSFv
 * Address: 0038a1f8
 */
void PStreamOutRef::ClassInfo() {
    /*
        38a1f8:	e24f0044 	sub	r0, pc, #68	; 0x44
        38a1fc:	e1a0f00e 	mov	pc, lr
        38a200:	e3a00000 	mov	r0, #0	; 0x0
        38a204:	e1a0f00e 	mov	pc, lr
        38a208:	50537472 	subpls	r7, r3, r2, ror r4
        38a20c:	65616d4f 	strvsb	r6, [r1, -#3407]!
        38a210:	75745265 	ldrvcb	r5, [r4, -#613]!
        38a214:	66005046 	strvs	r5, [r0], -r6, asr #32	; fField32
        38a218:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
        38a21c:	53696e6b 	cmnpl	r9, #1712	; 0x6b0
        38a228:	eafffff2 	b	38a1f8 <ClassInfo__13PStreamOutRefSFv>
        38a22c:	ea607464 	b	1ba73c4 <PStreamOutRef::$New(void)>
        38a230:	ea607048 	b	1ba6358 <PStreamOutRef::$Delete(void)>
        38a234:	ea60787b 	b	1ba8428 <PStreamOutRef::$Translate(void *, PipeCallBack *)>
        38a238:	00000000 	andeq	r0, r0, r0
        38a23c:	00000048 	andeq	r0, r0, r8, asr #32
        38a240:	00000051 	andeq	r0, r0, r1, asr r0
        38a244:	0000005a 	andeq	r0, r0, sl, asr r0
        38a248:	00000058 	andeq	r0, r0, r8, asr r0
        38a24c:	00000068 	andeq	r0, r0, r8, rrx
        38a250:	ea609553 	b	1baf7a4 <$Sizeof__12PStreamInRefSFv>
        38a25c:	ea607454 	b	1ba73b4 <PStreamInRef::$New(void)>
        38a260:	ea607038 	b	1ba6348 <PStreamInRef::$Delete(void)>
        38a270:	ea000001 	b	38a27c <ClassInfo__12PStreamInRefSFv+0x8>
    */
}

