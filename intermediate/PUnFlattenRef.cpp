#include "include/PUnFlattenRef.h"

/**
 * Symbol: Sizeof__13PUnFlattenRefSFv
 * Address: 002569bc
 */
void PUnFlattenRef::Sizeof() {
    /*
        2569bc:	e3a00010 	mov	r0, #16	; 0x10
        2569c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PUnFlattenRef::New(void)
 * Address: 002569c4
 */
PUnFlattenRef::New(void) {
    /*
        2569c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PUnFlattenRef::Delete(void)
 * Address: 002569c8
 */
PUnFlattenRef::Delete(void) {
    /*
        2569c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PUnFlattenRef::Translate(void *, PipeCallBack *)
 * Address: 002569cc
 */
PUnFlattenRef::Translate(void *, PipeCallBack *) {
    /*
        2569cc:	e1a0c00d 	mov	ip, sp
        2569d0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2569d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2569d8:	e1a04001 	mov	r4, r1
        2569dc:	e1a05002 	mov	r5, r2
        2569e0:	e3a00002 	mov	r0, #2	; 0x2
        2569e4:	eb65add8 	bl	1bc214c <$AllocateRefHandle(long)>
        2569e8:	e1a06000 	mov	r6, r0
        2569ec:	e3a07000 	mov	r7, #0	; 0x0
        2569f0:	e3340000 	teq	r4, #0	; 0x0
        2569f4:	0a000026 	beq	256a94 <PUnFlattenRef::Translate(void *, PipeCallBack *)+0xc8>
        2569f8:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        2569fc:	e1a0000d 	mov	r0, sp
        256a00:	eb65678f 	bl	1bb0844 <CRefPipe::$__ct(void)>
        256a04:	e1a02005 	mov	r2, r5
        256a08:	e1a01004 	mov	r1, r4
        256a0c:	e1a0000d 	mov	r0, sp
        256a10:	eb653e58 	bl	1ba6378 <CRefPipe::$InitSource(RefVar const &, PipeCallBack *)>
        256a14:	e24dd010 	sub	sp, sp, #16	; 0x10
        256a18:	e2842004 	add	r2, r4, #4	; 0x4
        256a1c:	e28d1010 	add	r1, sp, #16	; 0x10
        256a20:	e1a0000d 	mov	r0, sp
        256a24:	eb5fdf52 	bl	1a4e774 <TObjectReader::$__ct(CPipe &, RefVar const &)>
        256a28:	e5d40008 	ldrb	r0, [r4, #8]
        256a2c:	e3300000 	teq	r0, #0	; 0x0
        256a30:	11a0000d 	movne	r0, sp
        256a34:	13a01000 	movne	r1, #0	; 0x0
        256a38:	1b66df3f 	blne	1c0e73c <TObjectReader::$SetAllowFunctions(unsigned char)>
        256a3c:	e52d706c 	str	r7, [sp, -#108]!
        256a40:	e28d0008 	add	r0, sp, #8	; 0x8
        256a44:	eb656fca 	bl	1bb2974 <$setjmp>
        256a48:	e3300000 	teq	r0, #0	; 0x0
        256a4c:	1a000015 	bne	256aa8 <PUnFlattenRef::Translate(void *, PipeCallBack *)+0xdc>
        256a50:	e1a0000d 	mov	r0, sp
        256a54:	eb662588 	bl	1be007c <$AddExceptionHandler>
        256a58:	e28d006c 	add	r0, sp, #108	; 0x6c
        256a5c:	eb65be2a 	bl	1bc630c <TObjectReader::$Read(void)>
        256a60:	e5860000 	str	r0, [r6]
        256a64:	e1a0000d 	mov	r0, sp
        256a68:	eb662992 	bl	1be10b8 <$ExitHandler>
        256a6c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        256a70:	e1a0000d 	mov	r0, sp
        256a74:	e3a01000 	mov	r1, #0	; 0x0
        256a78:	eb5fdf3c 	bl	1a4e770 <TObjectReader::$__dt(void)>
        256a7c:	e28dd010 	add	sp, sp, #16	; 0x10
        256a80:	e1a0000d 	mov	r0, sp
        256a84:	e3a01000 	mov	r1, #0	; 0x0
        256a88:	e1a0e00f 	mov	lr, pc
        256a8c:	e59df000 	ldr	pc, [sp]
        256a90:	e28dd01c 	add	sp, sp, #28	; 0x1c
        256a94:	e5964000 	ldr	r4, [r6]
        256a98:	e1a00006 	mov	r0, r6
        256a9c:	eb65b1c6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        256aa0:	e1a00004 	mov	r0, r4
        256aa4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        256aa8:	e28d006c 	add	r0, sp, #108	; 0x6c
        256aac:	e3a01000 	mov	r1, #0	; 0x0
        256ab0:	eb5fdf2e 	bl	1a4e770 <TObjectReader::$__dt(void)>
        256ab4:	e28d007c 	add	r0, sp, #124	; 0x7c
        256ab8:	e3a01000 	mov	r1, #0	; 0x0
        256abc:	eb65676c 	bl	1bb0874 <CRefPipe::$__dt(void)>
        256ac0:	e1a0000d 	mov	r0, sp
        256ac4:	eb662da2 	bl	1be2154 <$NextHandler>
        256ac8:	eafffff6 	b	256aa8 <PUnFlattenRef::Translate(void *, PipeCallBack *)+0xdc>
    */
}

/**
 * Symbol: ClassInfo__13PUnFlattenRefSFv
 * Address: 0038a17c
 */
void PUnFlattenRef::ClassInfo() {
    /*
        38a17c:	e24f0044 	sub	r0, pc, #68	; 0x44
        38a180:	e1a0f00e 	mov	pc, lr
        38a184:	e3a00000 	mov	r0, #0	; 0x0
        38a188:	e1a0f00e 	mov	pc, lr
        38a18c:	50556e46 	subpls	r6, r5, r6, asr #28
        38a190:	6c617474 	stcvsl	4, cr7, [r1], -#464
        38a194:	656e5265 	strvsb	r5, [lr, -#613]!
        38a198:	66005046 	strvs	r5, [r0], -r6, asr #32	; fField32
        38a19c:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
        38a1a0:	536f7572 	cmnpl	pc, #478150656	; 0x1c800000
        38a1a4:	63650000 	cmnvs	r5, #0	; 0x0
        38a1a8:	00000000 	andeq	r0, r0, r0
        38a1ac:	eafffff2 	b	38a17c <ClassInfo__13PUnFlattenRefSFv>
        38a1b0:	ea607485 	b	1ba73cc <PUnFlattenRef::$New(void)>
        38a1b4:	ea607069 	b	1ba6360 <PUnFlattenRef::$Delete(void)>
        38a1b8:	ea60789c 	b	1ba8430 <PUnFlattenRef::$Translate(void *, PipeCallBack *)>
        38a1bc:	00000000 	andeq	r0, r0, r0
        38a1c0:	00000048 	andeq	r0, r0, r8, asr #32
        38a1c4:	00000052 	andeq	r0, r0, r2, asr r0
        38a1c8:	00000059 	andeq	r0, r0, r9, asr r0
        38a1cc:	00000058 	andeq	r0, r0, r8, asr r0
        38a1d0:	00000068 	andeq	r0, r0, r8, rrx
        38a1d4:	ea609575 	b	1baf7b0 <$Sizeof__13PStreamOutRefSFv>
        38a1e0:	ea607477 	b	1ba73c4 <PStreamOutRef::$New(void)>
        38a1e4:	ea60705b 	b	1ba6358 <PStreamOutRef::$Delete(void)>
        38a1f4:	ea000001 	b	38a200 <ClassInfo__13PStreamOutRefSFv+0x8>
    */
}

