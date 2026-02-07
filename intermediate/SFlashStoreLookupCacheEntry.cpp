#include "include/SFlashStoreLookupCacheEntry.h"

/**
 * Symbol: SFlashStoreLookupCacheEntry::Matches(unsigned long, int)
 * Address: 000c4aa4
 */
SFlashStoreLookupCacheEntry::Matches(unsigned long, int) {
    /*
         c4aa4:	e3a0c000 	mov	ip, #0	; 0x0
         c4aa8:	e5903000 	ldr	r3, [r0]
         c4aac:	e1330001 	teq	r3, r1
         c4ab0:	1a000014 	bne	c4b08 <SFlashStoreLookupCacheEntry::Matches(unsigned long, int)+0x64>
         c4ab4:	e5b01008 	ldr	r1, [r0, #8]!	; fField8
         c4ab8:	e3a00001 	mov	r0, #1	; 0x1
         c4abc:	e1310002 	teq	r1, r2
         c4ac0:	01a0f00e 	moveq	pc, lr
         c4ac4:	e3320000 	teq	r2, #0	; 0x0
         c4ac8:	1a00000e 	bne	c4b08 <SFlashStoreLookupCacheEntry::Matches(unsigned long, int)+0x64>
         c4acc:	e2411003 	sub	r1, r1, #3	; 0x3
         c4ad0:	e351000a 	cmp	r1, #10	; 0xa
         c4ad4:	908ff101 	addls	pc, pc, r1, lsl #2
         c4ad8:	ea00000a 	b	c4b08 <SFlashStoreLookupCacheEntry::Matches(unsigned long, int)+0x64>
         c4adc:	e1a0f00e 	mov	pc, lr
         c4ae0:	e1a0f00e 	mov	pc, lr
         c4ae4:	ea000007 	b	c4b08 <SFlashStoreLookupCacheEntry::Matches(unsigned long, int)+0x64>
         c4ae8:	e1a0f00e 	mov	pc, lr
         c4aec:	ea000005 	b	c4b08 <SFlashStoreLookupCacheEntry::Matches(unsigned long, int)+0x64>
         c4af0:	ea000004 	b	c4b08 <SFlashStoreLookupCacheEntry::Matches(unsigned long, int)+0x64>
         c4af4:	ea000003 	b	c4b08 <SFlashStoreLookupCacheEntry::Matches(unsigned long, int)+0x64>
         c4af8:	e1a0f00e 	mov	pc, lr
         c4afc:	e1a0f00e 	mov	pc, lr
         c4b00:	ea000000 	b	c4b08 <SFlashStoreLookupCacheEntry::Matches(unsigned long, int)+0x64>
         c4b04:	e1a0f00e 	mov	pc, lr
         c4b08:	e1a0000c 	mov	r0, ip
         c4b0c:	e1a0f00e 	mov	pc, lr
    */
}

