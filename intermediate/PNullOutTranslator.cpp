#include "include/PNullOutTranslator.h"

/**
 * Symbol: Sizeof__18PNullOutTranslatorSFv
 * Address: 00147100
 */
void PNullOutTranslator::Sizeof() {
    /*
        147100:	e3a00014 	mov	r0, #20	; 0x14
        147104:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullOutTranslator::New(void)
 * Address: 00147108
 */
PNullOutTranslator::New(void) {
    /*
        147108:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullOutTranslator::EnterBreakLoop(int)
 * Address: 0014710c
 */
PNullOutTranslator::EnterBreakLoop(int) {
    /*
        14710c:	e3a01001 	mov	r1, #1	; 0x1
        147110:	e5a01010 	str	r1, [r0, #16]!	; fField16
        147114:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullOutTranslator::ExitBreakLoop(void)
 * Address: 00147118
 */
PNullOutTranslator::ExitBreakLoop(void) {
    /*
        147118:	e3a01000 	mov	r1, #0	; 0x0
        14711c:	e5a01010 	str	r1, [r0, #16]!	; fField16
        147120:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullOutTranslator::StackTrace(void *)
 * Address: 00147124
 */
PNullOutTranslator::StackTrace(void *) {
    /*
        147124:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullOutTranslator::ExceptionNotify(Exception *)
 * Address: 00147128
 */
PNullOutTranslator::ExceptionNotify(Exception *) {
    /*
        147128:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullOutTranslator::Delete(void)
 * Address: 0014712c
 */
PNullOutTranslator::Delete(void) {
    /*
        14712c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullOutTranslator::Init(void *)
 * Address: 00147130
 */
PNullOutTranslator::Init(void *) {
    /*
        147130:	e3a01000 	mov	r1, #0	; 0x0
        147134:	e5a01010 	str	r1, [r0, #16]!	; fField16
        147138:	e1a00001 	mov	r0, r1
        14713c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullOutTranslator::Idle(void)
 * Address: 00147140
 */
PNullOutTranslator::Idle(void) {
    /*
        147140:	e5900010 	ldr	r0, [r0, #16]	; fField16
        147144:	e3300000 	teq	r0, #0	; 0x0
        147148:	159f0014 	ldrne	r0, [pc, #14]	; 147164 <PNullOutTranslator::Idle(void)+0x24>
        14714c:	15900000 	ldrne	r0, [r0]
        147150:	13300000 	teqne	r0, #0	; 0x0
        147154:	13a01001 	movne	r1, #1	; 0x1
        147158:	15c01000 	strneb	r1, [r0]
        14715c:	e3a00000 	mov	r0, #0	; 0x0
        147160:	e1a0f00e 	mov	pc, lr
        147164:	0c105178 	ldfeqs	f5, [r0], -#480
    */
}

/**
 * Symbol: PNullOutTranslator::ConsumeFrame(RefVar const &, int, int)
 * Address: 00147168
 */
PNullOutTranslator::ConsumeFrame(RefVar const &, int, int) {
    /*
        147168:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullOutTranslator::Prompt(int)
 * Address: 0014716c
 */
PNullOutTranslator::Prompt(int) {
    /*
        14716c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullOutTranslator::Flush(void)
 * Address: 00147170
 */
PNullOutTranslator::Flush(void) {
    /*
        147170:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullOutTranslator::Print(char const *,...)
 * Address: 00147174
 */
PNullOutTranslator::Print(char const *,...) {
    /*
        147174:	e3a00000 	mov	r0, #0	; 0x0
        147178:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PNullOutTranslator::Putc(int)
 * Address: 0014717c
 */
PNullOutTranslator::Putc(int) {
    /*
        14717c:	e3a00000 	mov	r0, #0	; 0x0
        147180:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__18PNullOutTranslatorSFv
 * Address: 0038446c
 */
void PNullOutTranslator::ClassInfo() {
    /*
        38446c:	e24f0044 	sub	r0, pc, #68	; 0x44
        384470:	e1a0f00e 	mov	pc, lr
        384474:	e3a00000 	mov	r0, #0	; 0x0
        384478:	e1a0f00e 	mov	pc, lr
        38447c:	504e756c 	subpl	r7, lr, ip, ror #10
        384480:	6c4f7574 	mcrrvs	5, 7, r7, pc, cr4
        384484:	5472616e 	ldrplbt	r6, [r2], -#366
        384488:	736c6174 	cmnvc	ip, #29	; 0x1d
        38448c:	6f720050 	swivs	0x00720050
        384490:	4f757454 	swimi	0x00757454
        384494:	72616e73 	rsbvc	r6, r1, #1840	; 0x730
        384498:	6c61746f 	stcvsl	4, cr7, [r1], -#444
        38449c:	72000000 	andvc	r0, r0, #0	; 0x0
        3844a0:	00000000 	andeq	r0, r0, r0
        3844a4:	eafffff0 	b	38446c <ClassInfo__18PNullOutTranslatorSFv>
        3844a8:	eaf70b16 	b	147108 <PNullOutTranslator::New(void)>
        3844ac:	eaf70b1e 	b	14712c <PNullOutTranslator::Delete(void)>
        3844b0:	eaf70b1e 	b	147130 <PNullOutTranslator::Init(void *)>
        3844b4:	eaf70b21 	b	147140 <PNullOutTranslator::Idle(void)>
        3844b8:	eaf70b2a 	b	147168 <PNullOutTranslator::ConsumeFrame(RefVar const &, int, int)>
        3844bc:	eaf70b2b 	b	147170 <PNullOutTranslator::Flush(void)>
        3844c0:	eaf70b29 	b	14716c <PNullOutTranslator::Prompt(int)>
        3844c4:	eaf70b2a 	b	147174 <PNullOutTranslator::Print(char const *,...)>
        3844c8:	eaf70b2b 	b	14717c <PNullOutTranslator::Putc(int)>
        3844cc:	eaf70b0e 	b	14710c <PNullOutTranslator::EnterBreakLoop(int)>
        3844d0:	eaf70b10 	b	147118 <PNullOutTranslator::ExitBreakLoop(void)>
        3844d4:	eaf70b12 	b	147124 <PNullOutTranslator::StackTrace(void *)>
        3844d8:	eaf70b12 	b	147128 <PNullOutTranslator::ExceptionNotify(Exception *)>
        3844dc:	00000000 	andeq	r0, r0, r0
        3844e0:	00000048 	andeq	r0, r0, r8, asr #32
        3844e4:	00000057 	andeq	r0, r0, r7, asr r0
        3844e8:	00000061 	andeq	r0, r0, r1, rrx
        3844ec:	00000060 	andeq	r0, r0, r0, rrx
        3844f0:	0000007c 	andeq	r0, r0, ip, ror r0
        3844f4:	eaf9d492 	b	1f9744 <Sizeof__18PStdioInTranslatorSFv>
        384500:	eaf9d491 	b	1f974c <PStdioInTranslator::New(void)>
        384504:	eaf9d494 	b	1f975c <PStdioInTranslator::Delete(void)>
        384514:	ea000001 	b	384520 <ClassInfo__18PStdioInTranslatorSFv+0x8>
    */
}

