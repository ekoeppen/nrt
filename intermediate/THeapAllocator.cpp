#include "include/THeapAllocator.h"

/**
 * Symbol: THeapAllocator::Allocate(unsigned long)
 * Address: 00030bfc
 */
THeapAllocator::Allocate(unsigned long) {
    /*
         30bfc:	e1a00001 	mov	r0, r1
         30c00:	ea6e76cc 	b	1bce738 <$__nw(unsigned int)>
    */
}

/**
 * Symbol: THeapAllocator::Deallocate(void *)
 * Address: 00030c04
 */
THeapAllocator::Deallocate(void *) {
    /*
         30c04:	e1a00001 	mov	r0, r1
         30c08:	ea6e72b4 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: GetGlobalAllocator__14THeapAllocatorSFv
 * Address: 00030c0c
 */
void THeapAllocator::GetGlobalAllocator() {
    /*
         30c0c:	e59f0020 	ldr	r0, [pc, #20]	; 30c34 <GetGlobalAllocator__14THeapAllocatorSFv+0x28>
         30c10:	e5901004 	ldr	r1, [r0, #4]	; fField4
         30c14:	e3310000 	teq	r1, #0	; 0x0
         30c18:	11a0f00e 	movne	pc, lr
         30c1c:	e3a01001 	mov	r1, #1	; 0x1
         30c20:	e5801004 	str	r1, [r0, #4]	; fField4
         30c24:	e59f1008 	ldr	r1, [pc, #8]	; 30c34 <GetGlobalAllocator__14THeapAllocatorSFv+0x28>
         30c28:	e59f2008 	ldr	r2, [pc, #8]	; 30c38 <GetGlobalAllocator__14THeapAllocatorSFv+0x2c>
         30c2c:	e5812000 	str	r2, [r1]
         30c30:	e1a0f00e 	mov	pc, lr
         30c34:	0c100884 	ldceq	8, cr0, [r0], -#528
         30c38:	0001d860 	andeq	sp, r1, r0, ror #16
    */
}

