#include "include/PHammerInTranslator.h"

/**
 * Symbol: Sizeof__19PHammerInTranslatorSFv
 * Address: 000e6754
 */
void PHammerInTranslator::Sizeof() {
    /*
         e6754:	e3a00024 	mov	r0, #36	; 0x24
         e6758:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PHammerInTranslator::New(void)
 * Address: 000e675c
 */
PHammerInTranslator::New(void) {
    /*
         e675c:	e3a01000 	mov	r1, #0	; 0x0
         e6760:	e5801010 	str	r1, [r0, #16]	; fField16
         e6764:	e5801014 	str	r1, [r0, #20]	; fField20
         e6768:	e5801018 	str	r1, [r0, #24]	; fField24
         e676c:	e580101c 	str	r1, [r0, #28]	; fField28
         e6770:	e5801020 	str	r1, [r0, #32]	; fField32
         e6774:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PHammerInTranslator::Delete(void)
 * Address: 000e6778
 */
PHammerInTranslator::Delete(void) {
    /*
         e6778:	e1a0c00d 	mov	ip, sp
         e677c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         e6780:	e24cb004 	sub	fp, ip, #4	; 0x4
         e6784:	e1a04000 	mov	r4, r0
         e6788:	e5900010 	ldr	r0, [r0, #16]	; fField16
         e678c:	e3300000 	teq	r0, #0	; 0x0
         e6790:	1b6c282f 	blne	1bf0854 <$fclose>
         e6794:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         e6798:	e3300000 	teq	r0, #0	; 0x0
         e679c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         e67a0:	1a6bb06c 	bne	1bd2958 <$free>
         e67a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PHammerInTranslator::Init(void *)
 * Address: 000e67a8
 */
PHammerInTranslator::Init(void *) {
    /*
         e67a8:	e1a0c00d 	mov	ip, sp
         e67ac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         e67b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         e67b4:	e1a04000 	mov	r4, r0
         e67b8:	e3a05000 	mov	r5, #0	; 0x0
         e67bc:	e1a06001 	mov	r6, r1
         e67c0:	e5b10004 	ldr	r0, [r1, #4]!
         e67c4:	e5840018 	str	r0, [r4, #24]	; fField24
         e67c8:	eb6bc0e6 	bl	1bd6b68 <$malloc>
         e67cc:	e5840014 	str	r0, [r4, #20]	; fField20
         e67d0:	e3300000 	teq	r0, #0	; 0x0
         e67d4:	0a00000b 	beq	e6808 <PHammerInTranslator::Init(void *)+0x60>
         e67d8:	e59f1020 	ldr	r1, [pc, #20]	; e6800 <PHammerInTranslator::Init(void *)+0x58>	; fField20
         e67dc:	eb6be601 	bl	1bdffe8 <$SetPtrName>
         e67e0:	e5960000 	ldr	r0, [r6]
         e67e4:	e28f1f06 	add	r1, pc, #24	; 0x18
         e67e8:	eb6c281d 	bl	1bf0864 <$fopen>
         e67ec:	e5840010 	str	r0, [r4, #16]	; fField16
         e67f0:	e3300000 	teq	r0, #0	; 0x0
         e67f4:	1284101c 	addne	r1, r4, #28	; 0x1c
         e67f8:	1b08ca22 	blne	319088 <set_input_notify>
         e67fc:	ea000003 	b	e6810 <PHammerInTranslator::Init(void *)+0x68>
         e6800:	52455062 	subpl	r5, r5, #98	; 0x62
         e6804:	72000000 	andvc	r0, r0, #0	; 0x0
         e6808:	eb6bee44 	bl	1be2120 <$MemError>
         e680c:	e1a05000 	mov	r5, r0
         e6810:	e1a00005 	mov	r0, r5
         e6814:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PHammerInTranslator::Idle(void)
 * Address: 000e6818
 */
PHammerInTranslator::Idle(void) {
    /*
         e6818:	e59f0000 	ldr	r0, [pc, #0]	; e6820 <PHammerInTranslator::Idle(void)+0x8>
         e681c:	e1a0f00e 	mov	pc, lr
         e6820:	000e0f9c 	muleq	lr, ip, pc
    */
}

/**
 * Symbol: PHammerInTranslator::FrameAvailable(void)
 * Address: 000e6824
 */
PHammerInTranslator::FrameAvailable(void) {
    /*
         e6824:	e3a01000 	mov	r1, #0	; 0x0
         e6828:	e5902010 	ldr	r2, [r0, #16]	; fField16
         e682c:	e3320000 	teq	r2, #0	; 0x0
         e6830:	0a000004 	beq	e6848 <PHammerInTranslator::FrameAvailable(void)+0x24>
         e6834:	e590101c 	ldr	r1, [r0, #28]	; fField28
         e6838:	e5900020 	ldr	r0, [r0, #32]	; fField32
         e683c:	e0510000 	subs	r0, r1, r0
         e6840:	13a00001 	movne	r0, #1	; 0x1
         e6844:	e20010ff 	and	r1, r0, #255	; 0xff
         e6848:	e1a00001 	mov	r0, r1
         e684c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PHammerInTranslator::ProduceFrame(int)
 * Address: 000e6850
 */
PHammerInTranslator::ProduceFrame(int) {
    /*
         e6850:	e1a0c00d 	mov	ip, sp
         e6854:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         e6858:	e24cb004 	sub	fp, ip, #4	; 0x4
         e685c:	e1a04000 	mov	r4, r0
         e6860:	e3a00002 	mov	r0, #2	; 0x2
         e6864:	eb6b6e38 	bl	1bc214c <$AllocateRefHandle(long)>
         e6868:	e1a05000 	mov	r5, r0
         e686c:	e5942010 	ldr	r2, [r4, #16]	; fField16
         e6870:	e3320000 	teq	r2, #0	; 0x0
         e6874:	0a000011 	beq	e68c0 <PHammerInTranslator::ProduceFrame(int)+0x70>
         e6878:	e2841014 	add	r1, r4, #20	; 0x14
         e687c:	e8910003 	ldmia	r1, {r0, r1}
         e6880:	eb09a3f1 	bl	34f84c <fgets>
         e6884:	e3300000 	teq	r0, #0	; 0x0
         e6888:	0a00000c 	beq	e68c0 <PHammerInTranslator::ProduceFrame(int)+0x70>
         e688c:	e24dd004 	sub	sp, sp, #4	; 0x4
         e6890:	e594001c 	ldr	r0, [r4, #28]	; fField28
         e6894:	e5840020 	str	r0, [r4, #32]	; fField32
         e6898:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         e689c:	eb6b7a8b 	bl	1bc52d0 <$MakeString(char const *)>
         e68a0:	eb6b6e29 	bl	1bc214c <$AllocateRefHandle(long)>
         e68a4:	e58d0000 	str	r0, [sp]
         e68a8:	e1a0000d 	mov	r0, sp
         e68ac:	eb6b7a92 	bl	1bc52fc <$ParseString(RefVar const &)>
         e68b0:	e5850000 	str	r0, [r5]
         e68b4:	e59d0000 	ldr	r0, [sp]
         e68b8:	eb6b723f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         e68bc:	e28dd004 	add	sp, sp, #4	; 0x4
         e68c0:	e5954000 	ldr	r4, [r5]
         e68c4:	e1a00005 	mov	r0, r5
         e68c8:	eb6b723b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         e68cc:	e1a00004 	mov	r0, r4
         e68d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__19PHammerInTranslatorSFv
 * Address: 0038429c
 */
void PHammerInTranslator::ClassInfo() {
    /*
        38429c:	e24f0044 	sub	r0, pc, #68	; 0x44
        3842a0:	e1a0f00e 	mov	pc, lr
        3842a4:	e3a00000 	mov	r0, #0	; 0x0
        3842a8:	e1a0f00e 	mov	pc, lr
        3842ac:	5048616d 	subpl	r6, r8, sp, ror #2
        3842b0:	6d657249 	sfmvs	f7, 2, [r5, -#292]!
        3842b4:	6e547261 	cdpvs	2, 5, cr7, cr4, cr1, {3}
        3842b8:	6e736c61 	cdpvs	12, 7, cr6, cr3, cr1, {3}
        3842bc:	746f7200 	strvcbt	r7, [pc], #200	; 3842c4 <ClassInfo__19PHammerInTranslatorSFv+0x28>
        3842c0:	50496e54 	subpl	r6, r9, r4, asr lr
        3842c4:	72616e73 	rsbvc	r6, r1, #1840	; 0x730
        3842c8:	6c61746f 	stcvsl	4, cr7, [r1], -#444
        3842cc:	72000000 	andvc	r0, r0, #0	; 0x0
        3842d0:	00000000 	andeq	r0, r0, r0
        3842d4:	eafffff0 	b	38429c <ClassInfo__19PHammerInTranslatorSFv>
        3842d8:	eaf5891f 	b	e675c <PHammerInTranslator::New(void)>
        3842dc:	eaf58925 	b	e6778 <PHammerInTranslator::Delete(void)>
        3842e0:	eaf58930 	b	e67a8 <PHammerInTranslator::Init(void *)>
        3842e4:	eaf5894b 	b	e6818 <PHammerInTranslator::Idle(void)>
        3842e8:	eaf5894d 	b	e6824 <PHammerInTranslator::FrameAvailable(void)>
        3842ec:	eaf58957 	b	e6850 <PHammerInTranslator::ProduceFrame(int)>
        3842f0:	00000000 	andeq	r0, r0, r0
        3842f4:	00000048 	andeq	r0, r0, r8, asr #32
        3842f8:	00000059 	andeq	r0, r0, r9, asr r0
        3842fc:	00000064 	andeq	r0, r0, r4, rrx
        384300:	00000064 	andeq	r0, r0, r4, rrx
        384304:	0000009c 	muleq	r0, ip, r0
        384308:	eaf58971 	b	e68d4 <Sizeof__20PHammerOutTranslatorSFv>
        384314:	eaf58970 	b	e68dc <PHammerOutTranslator::New(void)>
        384318:	eaf58991 	b	e6964 <PHammerOutTranslator::Delete(void)>
        384328:	ea000001 	b	384334 <ClassInfo__20PHammerOutTranslatorSFv+0x8>
    */
}

