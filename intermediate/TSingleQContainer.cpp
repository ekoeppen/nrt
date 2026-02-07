#include "DDKIncludes/OS600/SingleQ.h"

/**
 * Symbol: TSingleQContainer::__ct(void)
 * Address: 001e2bbc
 */
TSingleQContainer::TSingleQContainer(ULong offsetToSingleQItem) {
    /*
        1e2bbc:	e3300000 	teq	r0, #0	; 0x0
        1e2bc0:	03a00008 	moveq	r0, #8	; 0x8
        1e2bc4:	0a67aedb 	beq	1bce738 <$__nw(unsigned int)>
        1e2bc8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSingleQContainer::Init(unsigned long)
 * Address: 001e2bcc
 */
void	TSingleQContainer::Init(ULong offsetToSingleQItem) {
    /*
        1e2bcc:	e3a02000 	mov	r2, #0	; 0x0
        1e2bd0:	e5801004 	str	r1, [r0, #4]	; fHead
        1e2bd4:	e5802000 	str	r2, [r0]
        1e2bd8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSingleQContainer::Add(void *)
 * Address: 001e2bdc
 */
void	TSingleQContainer::Add(void* item) {
    /*
        1e2bdc:	e5902004 	ldr	r2, [r0, #4]	; fHead
        1e2be0:	e0821001 	add	r1, r2, r1
        1e2be4:	e5902000 	ldr	r2, [r0]
        1e2be8:	e5812000 	str	r2, [r1]
        1e2bec:	e5801000 	str	r1, [r0]
        1e2bf0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSingleQContainer::Remove(void)
 * Address: 001e2bf4
 */
void*	TSingleQContainer::Remove() {
    /*
        1e2bf4:	e5901000 	ldr	r1, [r0]
        1e2bf8:	e1b02001 	movs	r2, r1
        1e2bfc:	15922000 	ldrne	r2, [r2]
        1e2c00:	15802000 	strne	r2, [r0]
        1e2c04:	e3310000 	teq	r1, #0	; 0x0
        1e2c08:	03a00000 	moveq	r0, #0	; 0x0
        1e2c0c:	15900004 	ldrne	r0, [r0, #4]	; fHead
        1e2c10:	10410000 	subne	r0, r1, r0
        1e2c14:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSingleQContainer::Peek(void)
 * Address: 001e2c18
 */
void*	TSingleQContainer::Peek() {
    /*
        1e2c18:	e5901000 	ldr	r1, [r0]
        1e2c1c:	e3310000 	teq	r1, #0	; 0x0
        1e2c20:	03a00000 	moveq	r0, #0	; 0x0
        1e2c24:	15900004 	ldrne	r0, [r0, #4]	; fHead
        1e2c28:	10410000 	subne	r0, r1, r0
        1e2c2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSingleQContainer::GetNext(void *)
 * Address: 001e2c30
 */
void*	TSingleQContainer::GetNext(void* item) {
    /*
        1e2c30:	e3310000 	teq	r1, #0	; 0x0
        1e2c34:	15900004 	ldrne	r0, [r0, #4]	; fHead
        1e2c38:	10801001 	addne	r1, r0, r1
        1e2c3c:	15911000 	ldrne	r1, [r1]
        1e2c40:	13310000 	teqne	r1, #0	; 0x0
        1e2c44:	03a00000 	moveq	r0, #0	; 0x0
        1e2c48:	10410000 	subne	r0, r1, r0
        1e2c4c:	e1a0f00e 	mov	pc, lr
    */
}

