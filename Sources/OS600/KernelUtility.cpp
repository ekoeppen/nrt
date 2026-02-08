/*
	File:		KernelUtility.cpp

	Contains:	Kernel-side utility classes for queue management.

	Copyright:	 1993-1994 by Apple Computer, Inc., all rights reserved.
*/

#ifndef __KERNELUTILITY_H
#include "KernelUtility.h"
#endif

#include <stdlib.h>

/**
 * Symbol: TDoubleQItem::__ct(void)
 * Address: 0009c6dc
 */
TDoubleQItem::TDoubleQItem(void) {
    /*
         9c6dc:	e1a0c00d 	mov	ip, sp
         9c6e0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         9c6e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         9c6e8:	e3300000 	teq	r0, #0	; 0x0
         9c6ec:	1a000003 	bne	9c700 <TDoubleQItem::__ct(void)+0x24>
         9c6f0:	e3a0000c 	mov	r0, #12	; 0xc
         9c6f4:	eb6cc80f 	bl	1bce738 <$__nw(unsigned int)>
         9c6f8:	e3300000 	teq	r0, #0	; 0x0
         9c6fc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         9c700:	e3a01000 	mov	r1, #0	; 0x0
         9c704:	e5801000 	str	r1, [r0]
         9c708:	e5801004 	str	r1, [r0, #4]	; fField4
         9c70c:	e5801008 	str	r1, [r0, #8]	; fField8
         9c710:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
    fNext = NULL;
    fPrev = NULL;
    fOwner = NULL;
}


/**
 * Symbol: TTaskQItem::__ct(void)
 * Address: 003599fc
 */
TTaskQItem::TTaskQItem(void) {
    /*
        3599fc:	e1a0c00d 	mov	ip, sp
        359a00:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        359a04:	e24cb004 	sub	fp, ip, #4	; 0x4
        359a08:	e3300000 	teq	r0, #0	; 0x0
        359a0c:	1a000003 	bne	359a20 <TTaskQItem::__ct(void)+0x24>
        359a10:	e3a00008 	mov	r0, #8	; 0x8
        359a14:	eb61d347 	bl	1bce738 <$__nw(unsigned int)>
        359a18:	e3300000 	teq	r0, #0	; 0x0
        359a1c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        359a20:	e3a01000 	mov	r1, #0	; 0x0
        359a24:	e5801000 	str	r1, [r0]
        359a28:	e5801004 	str	r1, [r0, #4]	; fField4
        359a2c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
    fLink = NULL;
    fOwner = NULL;
}


/**
 * Symbol: TSemaphoreOpList::Init(unsigned long, unsigned long *)
 * Address: 001d5078
 */
long TSemaphoreOpList::Init(ULong numInList, ...) {
    /*
        1d5078:	e1a0c00d 	mov	ip, sp
        1d507c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1d5080:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5084:	e1a04000 	mov	r4, r0
        1d5088:	e1a05001 	mov	r5, r1
        1d508c:	e1a06002 	mov	r6, r2
        1d5090:	e1a00101 	mov	r0, r1, lsl #2
        1d5094:	e1a08000 	mov	r8, r0
        1d5098:	eb67e5a6 	bl	1bce738 <$__nw(unsigned int)>
        1d509c:	e5840010 	str	r0, [r4, #16]	; fField16
        1d50a0:	e1b01000 	movs	r1, r0
        1d50a4:	e3a07000 	mov	r7, #0	; 0x0
        1d50a8:	03e00000 	mvneq	r0, #0	; 0x0
        1d50ac:	05a47014 	streq	r7, [r4, #20]!	; fField20
        1d50b0:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1d50b4:	e1a02008 	mov	r2, r8
        1d50b8:	e1a00006 	mov	r0, r6
        1d50bc:	eb6827a4 	bl	1bdef54 <$BlockMove>
        1d50c0:	e1a00007 	mov	r0, r7
        1d50c4:	e5a45014 	str	r5, [r4, #20]!	; fField20
        1d50c8:	e91ba9f0 	ldmdb	fp, {r4, fp, sp, pc}
    */
	va_list args;
	va_start(args, numInList);
	ULong* opList = va_arg(args, ULong*);
	va_end(args);

	fOps = (ULong*)malloc(numInList * sizeof(ULong));
	if (fOps == NULL) {
		fCount = 0;
		return -1;
	}

	// Assuming BlockMove is like memcpy
	memcpy(fOps, opList, numInList * sizeof(ULong));
	fCount = numInList;
	return 0;
}

/**
 * Symbol: TSemaphoreOpList::__dt(void)
 * Address: 001d50cc
 */
TSemaphoreOpList::~TSemaphoreOpList(void) {
    /*
        1d50cc:	e1a0c00d 	mov	ip, sp
        1d50d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d50d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d50d8:	e1a04000 	mov	r4, r0
        1d50dc:	e1a05001 	mov	r5, r1
        1d50e0:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1d50e4:	e3300000 	teq	r0, #0	; 0x0
        1d50e8:	1b67e17c 	blne	1bcd6e0 <$__dl(void *)>
        1d50ec:	e3150001 	tst	r5, #1	; 0x1
        1d50f0:	11a00004 	movne	r0, r4
        1d50f4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1d50f8:	1a67e178 	bne	1bcd6e0 <$__dl(void *)>
        1d50fc:	e91ba830 	ldmdb	fp, {r4, fp, sp, pc}
    */
	if (fOps) {
		free(fOps);
	}
}


/**
 * Symbol: TSharedMem::Init(TEnvironment *)
 * Address: 001dfa54
 */
long TSharedMem::Init(void* environment) {
    /*
        1dfa54:	e3a02000 	mov	r2, #0	; 0x0
        1dfa58:	e5802010 	str	r2, [r0, #16]	; fField16
        1dfa5c:	e5802014 	str	r2, [r0, #20]	; fField20
        1dfa60:	e5a0201c 	str	r2, [r0, #28]!	; fField28
        1dfa64:	e5801004 	str	r1, [r0, #4]	; fField4
        1dfa68:	e1a00002 	mov	r0, r2
        1dfa6c:	e1a0f00e 	mov	pc, lr
    */
	fField16 = 0;
	fField20 = 0;
	fField28 = 0;
	fField32 = environment; // Offset 28+4 = 32
	return 0;
}
