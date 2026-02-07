#include "include/PUnFlattenPtr.h"

/**
 * Symbol: Sizeof__13PUnFlattenPtrSFv
 * Address: 00256908
 */
void PUnFlattenPtr::Sizeof() {
    /*
        256908:	e3a00010 	mov	r0, #16	; 0x10
        25690c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PUnFlattenPtr::New(void)
 * Address: 00256910
 */
PUnFlattenPtr::New(void) {
    /*
        256910:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PUnFlattenPtr::Delete(void)
 * Address: 00256914
 */
PUnFlattenPtr::Delete(void) {
    /*
        256914:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PUnFlattenPtr::Translate(void *, PipeCallBack *)
 * Address: 00256918
 */
PUnFlattenPtr::Translate(void *, PipeCallBack *) {
    /*
        256918:	e1a0c00d 	mov	ip, sp
        25691c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        256920:	e24cb004 	sub	fp, ip, #4	; 0x4
        256924:	e1a04001 	mov	r4, r1
        256928:	e1a05002 	mov	r5, r2
        25692c:	e3a00002 	mov	r0, #2	; 0x2
        256930:	eb65ae05 	bl	1bc214c <$AllocateRefHandle(long)>
        256934:	e1a06000 	mov	r6, r0
        256938:	e3340000 	teq	r4, #0	; 0x0
        25693c:	0a000019 	beq	2569a8 <PUnFlattenPtr::Translate(void *, PipeCallBack *)+0x90>
        256940:	e24dd018 	sub	sp, sp, #24	; 0x18
        256944:	e1a0000d 	mov	r0, sp
        256948:	eb6567bc 	bl	1bb0840 <CPtrPipe::$__ct(void)>
        25694c:	e1a03005 	mov	r3, r5
        256950:	e92d0008 	stmdb	sp!, {r3}
        256954:	e28d0004 	add	r0, sp, #4	; 0x4
        256958:	e3a03000 	mov	r3, #0	; 0x0
        25695c:	e8940006 	ldmia	r4, {r1, r2}
        256960:	eb654287 	bl	1ba7384 <CPtrPipe::$Init(void *, long, unsigned char, PipeCallBack *)>
        256964:	e24dd00c 	sub	sp, sp, #12	; 0xc
        256968:	e2842008 	add	r2, r4, #8	; 0x8
        25696c:	e28d1010 	add	r1, sp, #16	; 0x10
        256970:	e1a0000d 	mov	r0, sp
        256974:	eb5fdf7e 	bl	1a4e774 <TObjectReader::$__ct(CPipe &, RefVar const &)>
        256978:	e1a0000d 	mov	r0, sp
        25697c:	eb65be62 	bl	1bc630c <TObjectReader::$Read(void)>
        256980:	e5860000 	str	r0, [r6]
        256984:	e1a0000d 	mov	r0, sp
        256988:	e3a01000 	mov	r1, #0	; 0x0
        25698c:	eb5fdf77 	bl	1a4e770 <TObjectReader::$__dt(void)>
        256990:	e28dd010 	add	sp, sp, #16	; 0x10
        256994:	e1a0000d 	mov	r0, sp
        256998:	e3a01000 	mov	r1, #0	; 0x0
        25699c:	e1a0e00f 	mov	lr, pc
        2569a0:	e59df000 	ldr	pc, [sp]
        2569a4:	e28dd018 	add	sp, sp, #24	; 0x18
        2569a8:	e5964000 	ldr	r4, [r6]
        2569ac:	e1a00006 	mov	r0, r6
        2569b0:	eb65b201 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2569b4:	e1a00004 	mov	r0, r4
        2569b8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__13PUnFlattenPtrSFv
 * Address: 0038a088
 */
void PUnFlattenPtr::ClassInfo() {
    /*
        38a088:	e24f0044 	sub	r0, pc, #68	; 0x44
        38a08c:	e1a0f00e 	mov	pc, lr
        38a090:	e3a00000 	mov	r0, #0	; 0x0
        38a094:	e1a0f00e 	mov	pc, lr
        38a098:	50556e46 	subpls	r6, r5, r6, asr #28
        38a09c:	6c617474 	stcvsl	4, cr7, [r1], -#464
        38a0a0:	656e5074 	strvsb	r5, [lr, -#116]!
        38a0a4:	72005046 	andvc	r5, r0, #70	; 0x46
        38a0a8:	72616d65 	rsbvc	r6, r1, #6464	; 0x1940
        38a0ac:	536f7572 	cmnpl	pc, #478150656	; 0x1c800000
        38a0b0:	63650000 	cmnvs	r5, #0	; 0x0
        38a0b4:	00000000 	andeq	r0, r0, r0
        38a0b8:	eafffff2 	b	38a088 <ClassInfo__13PUnFlattenPtrSFv>
        38a0bc:	ea6074c1 	b	1ba73c8 <PUnFlattenPtr::$New(void)>
        38a0c0:	ea6070a5 	b	1ba635c <PUnFlattenPtr::$Delete(void)>
        38a0c4:	ea6078d8 	b	1ba842c <PUnFlattenPtr::$Translate(void *, PipeCallBack *)>
        38a0c8:	00000000 	andeq	r0, r0, r0
        38a0cc:	00000048 	andeq	r0, r0, r8, asr #32
        38a0d0:	00000050 	andeq	r0, r0, r0, asr r0
        38a0d4:	00000057 	andeq	r0, r0, r7, asr r0
        38a0d8:	00000054 	andeq	r0, r0, r4, asr r0
        38a0dc:	00000064 	andeq	r0, r0, r4, rrx
        38a0e0:	ea6095ae 	b	1baf7a0 <$Sizeof__11PFlattenRefSFv>
        38a0ec:	ea6074ae 	b	1ba73ac <PFlattenRef::$New(void)>
        38a0f0:	ea607092 	b	1ba6340 <PFlattenRef::$Delete(void)>
        38a100:	ea000001 	b	38a10c <ClassInfo__11PFlattenRefSFv+0x8>
    */
}

