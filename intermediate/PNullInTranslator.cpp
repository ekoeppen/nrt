#include "include/PNullInTranslator.h"

/**
 * Symbol: Sizeof__17PNullInTranslatorSFv
 * Address: 001470d0
 */
void PNullInTranslator::Sizeof() {
    /*
        1470d0:	e3a00010 	mov	r0, #16	; 0x10
        1470d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullInTranslator::New(void)
 * Address: 001470d8
 */
PNullInTranslator::New(void) {
    /*
        1470d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullInTranslator::Delete(void)
 * Address: 001470dc
 */
PNullInTranslator::Delete(void) {
    /*
        1470dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullInTranslator::Init(void *)
 * Address: 001470e0
 */
PNullInTranslator::Init(void *) {
    /*
        1470e0:	e3a00000 	mov	r0, #0	; 0x0
        1470e4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullInTranslator::Idle(void)
 * Address: 001470e8
 */
PNullInTranslator::Idle(void) {
    /*
        1470e8:	e3a00000 	mov	r0, #0	; 0x0
        1470ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullInTranslator::FrameAvailable(void)
 * Address: 001470f0
 */
PNullInTranslator::FrameAvailable(void) {
    /*
        1470f0:	e3a00000 	mov	r0, #0	; 0x0
        1470f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullInTranslator::ProduceFrame(int)
 * Address: 001470f8
 */
PNullInTranslator::ProduceFrame(int) {
    /*
        1470f8:	e3a00002 	mov	r0, #2	; 0x2
        1470fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__17PNullInTranslatorSFv
 * Address: 003843dc
 */
void PNullInTranslator::ClassInfo() {
    /*
        3843dc:	e24f0044 	sub	r0, pc, #68	; 0x44
        3843e0:	e1a0f00e 	mov	pc, lr
        3843e4:	e3a00000 	mov	r0, #0	; 0x0
        3843e8:	e1a0f00e 	mov	pc, lr
        3843ec:	504e756c 	subpl	r7, lr, ip, ror #10
        3843f0:	6c496e54 	mcrrvs	14, 5, r6, r9, cr4
        3843f4:	72616e73 	rsbvc	r6, r1, #1840	; 0x730
        3843f8:	6c61746f 	stcvsl	4, cr7, [r1], -#444
        3843fc:	72005049 	andvc	r5, r0, #73	; 0x49
        384400:	6e547261 	cdpvs	2, 5, cr7, cr4, cr1, {3}
        384404:	6e736c61 	cdpvs	12, 7, cr6, cr3, cr1, {3}
        384408:	746f7200 	strvcbt	r7, [pc], #200	; 384410 <ClassInfo__17PNullInTranslatorSFv+0x34>
        384414:	eafffff0 	b	3843dc <ClassInfo__17PNullInTranslatorSFv>
        384418:	eaf70b2e 	b	1470d8 <PNullInTranslator::New(void)>
        38441c:	eaf70b2e 	b	1470dc <PNullInTranslator::Delete(void)>
        384420:	eaf70b2e 	b	1470e0 <PNullInTranslator::Init(void *)>
        384424:	eaf70b2f 	b	1470e8 <PNullInTranslator::Idle(void)>
        384428:	eaf70b30 	b	1470f0 <PNullInTranslator::FrameAvailable(void)>
        38442c:	eaf70b31 	b	1470f8 <PNullInTranslator::ProduceFrame(int)>
        384430:	00000000 	andeq	r0, r0, r0
        384434:	00000048 	andeq	r0, r0, r8, asr #32
        384438:	00000057 	andeq	r0, r0, r7, asr r0
        38443c:	00000062 	andeq	r0, r0, r2, rrx
        384440:	00000060 	andeq	r0, r0, r0, rrx
        384444:	00000098 	muleq	r0, r8, r0
        384448:	eaf70b2c 	b	147100 <Sizeof__18PNullOutTranslatorSFv>
        384454:	eaf70b2b 	b	147108 <PNullOutTranslator::New(void)>
        384458:	eaf70b33 	b	14712c <PNullOutTranslator::Delete(void)>
        384468:	ea000001 	b	384474 <ClassInfo__18PNullOutTranslatorSFv+0x8>
    */
}

