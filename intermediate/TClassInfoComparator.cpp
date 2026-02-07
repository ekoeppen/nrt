#include "include/TClassInfoComparator.h"

/**
 * Symbol: CompareKeys__20TClassInfoComparatorCFPCvT1
 * Address: 0005c058
 */
void TClassInfoComparator::CompareKeys() {
    /*
         5c058:	e3a00000 	mov	r0, #0	; 0x0
         5c05c:	e591300c 	ldr	r3, [r1, #12]
         5c060:	e1a03823 	mov	r3, r3, lsr #16
         5c064:	e592c00c 	ldr	ip, [r2, #12]
         5c068:	e153082c 	cmp	r3, ip, lsr #16
         5c06c:	ba00000a 	blt	5c09c <CompareKeys__20TClassInfoComparatorCFPCvT1+0x44>
         5c070:	ca00000c 	bgt	5c0a8 <CompareKeys__20TClassInfoComparatorCFPCvT1+0x50>
         5c074:	e591300e 	ldr	r3, [r1, #14]
         5c078:	e1a03823 	mov	r3, r3, lsr #16
         5c07c:	e592c00e 	ldr	ip, [r2, #14]
         5c080:	e153082c 	cmp	r3, ip, lsr #16
         5c084:	ba000004 	blt	5c09c <CompareKeys__20TClassInfoComparatorCFPCvT1+0x44>
         5c088:	ca000006 	bgt	5c0a8 <CompareKeys__20TClassInfoComparatorCFPCvT1+0x50>
         5c08c:	e5911010 	ldr	r1, [r1, #16]
         5c090:	e5922010 	ldr	r2, [r2, #16]
         5c094:	e1510002 	cmp	r1, r2
         5c098:	2a000001 	bcs	5c0a4 <CompareKeys__20TClassInfoComparatorCFPCvT1+0x4c>
         5c09c:	e3e00000 	mvn	r0, #0	; 0x0
         5c0a0:	e1a0f00e 	mov	pc, lr
         5c0a4:	91a0f00e 	movls	pc, lr
         5c0a8:	e3a00001 	mov	r0, #1	; 0x1
         5c0ac:	e1a0f00e 	mov	pc, lr
    */
}

