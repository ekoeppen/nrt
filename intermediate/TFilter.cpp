#include "include/TFilter.h"

/**
 * Symbol: TFilter::__ct(void)
 * Address: 001a9398
 */
TFilter::TFilter(void) {
    /*
        1a9398:	e3300000 	teq	r0, #0	; 0x0
        1a939c:	03a00008 	moveq	r0, #8	; 0x8
        1a93a0:	0a6894e4 	beq	1bce738 <$__nw(unsigned int)>
        1a93a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFilter::__dt(void)
 * Address: 001a93a8
 */
TFilter::~TFilter(void) {
    /*
        1a93a8:	e3110001 	tst	r1, #1	; 0x1
        1a93ac:	1a6890cb 	bne	1bcd6e0 <$__dl(void *)>
        1a93b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFilter::Init(unsigned char, unsigned char, unsigned short, unsigned long)
 * Address: 001a9904
 */
TFilter::Init(unsigned char, unsigned char, unsigned short, unsigned long) {
    /*
        1a9904:	e1a03803 	mov	r3, r3, lsl #16
        1a9908:	e1a03823 	mov	r3, r3, lsr #16
        1a990c:	e59dc000 	ldr	ip, [sp]
        1a9910:	e5c01000 	strb	r1, [r0]
        1a9914:	e5c02001 	strb	r2, [r0, #1]	; fField1
        1a9918:	e5c03003 	strb	r3, [r0, #3]	; fField3
        1a991c:	e1a01423 	mov	r1, r3, lsr #8
        1a9920:	e5c01002 	strb	r1, [r0, #2]	; fField2
        1a9924:	e5a0c004 	str	ip, [r0, #4]!	; fField4
        1a9928:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFilter::Pass(TAddress const &)
 * Address: 001aa080
 */
TFilter::Pass(TAddress const &) {
    /*
        1aa080:	e5d03000 	ldrb	r3, [r0]
        1aa084:	e3a02000 	mov	r2, #0	; 0x0
        1aa088:	e3330000 	teq	r3, #0	; 0x0
        1aa08c:	15d1c00b 	ldrneb	ip, [r1, #11]
        1aa090:	113c0003 	teqne	ip, r3
        1aa094:	1a00000f 	bne	1aa0d8 <TFilter::Pass(TAddress const &)+0x58>
        1aa098:	e5d03001 	ldrb	r3, [r0, #1]	; fField1
        1aa09c:	e3330000 	teq	r3, #0	; 0x0
        1aa0a0:	15d1c00a 	ldrneb	ip, [r1, #10]
        1aa0a4:	113c0003 	teqne	ip, r3
        1aa0a8:	1a00000a 	bne	1aa0d8 <TFilter::Pass(TAddress const &)+0x58>
        1aa0ac:	e5903002 	ldr	r3, [r0, #2]	; fField2
        1aa0b0:	e1b03823 	movs	r3, r3, lsr #16
        1aa0b4:	1591c008 	ldrne	ip, [r1, #8]
        1aa0b8:	1133082c 	teqne	r3, ip, lsr #16
        1aa0bc:	1a000005 	bne	1aa0d8 <TFilter::Pass(TAddress const &)+0x58>
        1aa0c0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1aa0c4:	e3300000 	teq	r0, #0	; 0x0
        1aa0c8:	15911004 	ldrne	r1, [r1, #4]	; fField4
        1aa0cc:	11310000 	teqne	r1, r0
        1aa0d0:	03a00001 	moveq	r0, #1	; 0x1
        1aa0d4:	01a0f00e 	moveq	pc, lr
        1aa0d8:	e1a00002 	mov	r0, r2
        1aa0dc:	e1a0f00e 	mov	pc, lr
    */
}

