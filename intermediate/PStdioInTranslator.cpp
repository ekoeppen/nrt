#include "include/PStdioInTranslator.h"

/**
 * Symbol: Sizeof__18PStdioInTranslatorSFv
 * Address: 001f9744
 */
void PStdioInTranslator::Sizeof() {
    /*
        1f9744:	e3a00020 	mov	r0, #32	; 0x20
        1f9748:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStdioInTranslator::New(void)
 * Address: 001f974c
 */
PStdioInTranslator::New(void) {
    /*
        1f974c:	e3a01000 	mov	r1, #0	; 0x0
        1f9750:	e5801010 	str	r1, [r0, #16]	; fField16
        1f9754:	e5801018 	str	r1, [r0, #24]	; fField24
        1f9758:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStdioInTranslator::Delete(void)
 * Address: 001f975c
 */
PStdioInTranslator::Delete(void) {
    /*
        1f975c:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1f9760:	e3300000 	teq	r0, #0	; 0x0
        1f9764:	1a67647b 	bne	1bd2958 <$free>
        1f9768:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStdioInTranslator::Init(void *)
 * Address: 001f976c
 */
PStdioInTranslator::Init(void *) {
    /*
        1f976c:	e1a0c00d 	mov	ip, sp
        1f9770:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1f9774:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f9778:	e1a04000 	mov	r4, r0
        1f977c:	e1a00001 	mov	r0, r1
        1f9780:	e5911000 	ldr	r1, [r1]
        1f9784:	e5841010 	str	r1, [r4, #16]	; fField16
        1f9788:	e5901004 	ldr	r1, [r0, #4]
        1f978c:	e5841014 	str	r1, [r4, #20]	; fField20
        1f9790:	e5900008 	ldr	r0, [r0, #8]
        1f9794:	e584001c 	str	r0, [r4, #28]	; fField28
        1f9798:	eb6774f2 	bl	1bd6b68 <$malloc>
        1f979c:	e5a40018 	str	r0, [r4, #24]!	; fField24
        1f97a0:	e3300000 	teq	r0, #0	; 0x0
        1f97a4:	13a00000 	movne	r0, #0	; 0x0
        1f97a8:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        1f97ac:	0a67a25b 	beq	1be2120 <$MemError>
        1f97b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PStdioInTranslator::Idle(void)
 * Address: 001f97b4
 */
PStdioInTranslator::Idle(void) {
    /*
        1f97b4:	e3a00000 	mov	r0, #0	; 0x0
        1f97b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PStdioInTranslator::FrameAvailable(void)
 * Address: 001f97bc
 */
PStdioInTranslator::FrameAvailable(void) {
    /*
        1f97bc:	e1a0c00d 	mov	ip, sp
        1f97c0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1f97c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f97c8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1f97cc:	e3300000 	teq	r0, #0	; 0x0
        1f97d0:	0a000003 	beq	1f97e4 <PStdioInTranslator::FrameAvailable(void)+0x28>
        1f97d4:	eb67dc1f 	bl	1bf0858 <$feof>
        1f97d8:	e3300000 	teq	r0, #0	; 0x0
        1f97dc:	03a00001 	moveq	r0, #1	; 0x1
        1f97e0:	0a000000 	beq	1f97e8 <PStdioInTranslator::FrameAvailable(void)+0x2c>
        1f97e4:	e3a00000 	mov	r0, #0	; 0x0
        1f97e8:	e20000ff 	and	r0, r0, #255	; 0xff
        1f97ec:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: PStdioInTranslator::ProduceFrame(int)
 * Address: 001f97f0
 */
PStdioInTranslator::ProduceFrame(int) {
    /*
        1f97f0:	e1a0c00d 	mov	ip, sp
        1f97f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1f97f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1f97fc:	e1a04000 	mov	r4, r0
        1f9800:	e3a00002 	mov	r0, #2	; 0x2
        1f9804:	eb672250 	bl	1bc214c <$AllocateRefHandle(long)>
        1f9808:	e1a05000 	mov	r5, r0
        1f980c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1f9810:	e5942010 	ldr	r2, [r4, #16]	; fField16
        1f9814:	e3320000 	teq	r2, #0	; 0x0
        1f9818:	0a00000d 	beq	1f9854 <PStdioInTranslator::ProduceFrame(int)+0x64>
        1f981c:	e2841018 	add	r1, r4, #24	; 0x18
        1f9820:	e8910003 	ldmia	r1, {r0, r1}
        1f9824:	eb055808 	bl	34f84c <fgets>
        1f9828:	e3300000 	teq	r0, #0	; 0x0
        1f982c:	0a000008 	beq	1f9854 <PStdioInTranslator::ProduceFrame(int)+0x64>
        1f9830:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        1f9834:	eb672ea5 	bl	1bc52d0 <$MakeString(char const *)>
        1f9838:	eb672243 	bl	1bc214c <$AllocateRefHandle(long)>
        1f983c:	e58d0000 	str	r0, [sp]
        1f9840:	e1a0000d 	mov	r0, sp
        1f9844:	eb672eac 	bl	1bc52fc <$ParseString(RefVar const &)>
        1f9848:	e5850000 	str	r0, [r5]
        1f984c:	e59d0000 	ldr	r0, [sp]
        1f9850:	eb672659 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1f9854:	e5954000 	ldr	r4, [r5]
        1f9858:	e1a00005 	mov	r0, r5
        1f985c:	eb672656 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1f9860:	e1a00004 	mov	r0, r4
        1f9864:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__18PStdioInTranslatorSFv
 * Address: 00384518
 */
void PStdioInTranslator::ClassInfo() {
    /*
        384518:	e24f0044 	sub	r0, pc, #68	; 0x44
        38451c:	e1a0f00e 	mov	pc, lr
        384520:	e3a00000 	mov	r0, #0	; 0x0
        384524:	e1a0f00e 	mov	pc, lr
        384528:	50537464 	subpls	r7, r3, r4, ror #8
        38452c:	696f496e 	stmvsdb	pc!, {r1, r2, r3, r5, r6, r8, fp, lr}^
        384530:	5472616e 	ldrplbt	r6, [r2], -#366
        384534:	736c6174 	cmnvc	ip, #29	; 0x1d
        384538:	6f720050 	swivs	0x00720050
        38453c:	496e5472 	stmmidb	lr!, {r1, r4, r5, r6, sl, ip, lr}^
        384540:	616e736c 	cmnvs	lr, ip, ror #6
        384544:	61746f72 	cmnvs	r4, r2, ror pc
        384550:	eafffff0 	b	384518 <ClassInfo__18PStdioInTranslatorSFv>
        384554:	eaf9d47c 	b	1f974c <PStdioInTranslator::New(void)>
        384558:	eaf9d47f 	b	1f975c <PStdioInTranslator::Delete(void)>
        38455c:	eaf9d482 	b	1f976c <PStdioInTranslator::Init(void *)>
        384560:	eaf9d493 	b	1f97b4 <PStdioInTranslator::Idle(void)>
        384564:	eaf9d494 	b	1f97bc <PStdioInTranslator::FrameAvailable(void)>
        384568:	eaf9d4a0 	b	1f97f0 <PStdioInTranslator::ProduceFrame(int)>
        38456c:	00000000 	andeq	r0, r0, r0
        384570:	00000048 	andeq	r0, r0, r8, asr #32
        384574:	00000058 	andeq	r0, r0, r8, asr r0
        384578:	00000063 	andeq	r0, r0, r3, rrx
        38457c:	00000060 	andeq	r0, r0, r0, rrx
        384580:	00000098 	muleq	r0, r8, r0
        384584:	eaf9d4b7 	b	1f9868 <Sizeof__19PStdioOutTranslatorSFv>
        384590:	eaf9d4b6 	b	1f9870 <PStdioOutTranslator::New(void)>
        384594:	eaf9d4d6 	b	1f98f4 <PStdioOutTranslator::Delete(void)>
        3845a4:	ea000001 	b	3845b0 <ClassInfo__19PStdioOutTranslatorSFv+0x8>
    */
}

