#include "include/TNoReuseAllocator.h"

/**
 * Symbol: TNoReuseAllocator::Allocate(unsigned long)
 * Address: 00030bcc
 */
TNoReuseAllocator::Allocate(unsigned long) {
    /*
         30bcc:	e3a02000 	mov	r2, #0	; 0x0
         30bd0:	e5903008 	ldr	r3, [r0, #8]	; fField8
         30bd4:	e1530001 	cmp	r3, r1
         30bd8:	3a000004 	bcc	30bf0 <TNoReuseAllocator::Allocate(unsigned long)+0x24>
         30bdc:	e5902004 	ldr	r2, [r0, #4]	; fField4
         30be0:	e082c001 	add	ip, r2, r1
         30be4:	e0431001 	sub	r1, r3, r1
         30be8:	e5a0c004 	str	ip, [r0, #4]!	; fField4
         30bec:	e5801004 	str	r1, [r0, #4]	; fField4
         30bf0:	e1a00002 	mov	r0, r2
         30bf4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNoReuseAllocator::Deallocate(void *)
 * Address: 00030bf8
 */
TNoReuseAllocator::Deallocate(void *) {
    /*
         30bf8:	e1a0f00e 	mov	pc, lr
    */
}

