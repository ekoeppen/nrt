#include "include/StoreObjectHeader.h"

/**
 * Symbol: StoreObjectHeader::GetHintsHandlerId(void)
 * Address: 002dc72c
 */
StoreObjectHeader::GetHintsHandlerId(void) {
    /*
        2dc72c:	e5d0000d 	ldrb	r0, [r0, #13]	; fField13
        2dc730:	e2001002 	and	r1, r0, #2	; 0x2
        2dc734:	e1a010a1 	mov	r1, r1, lsr #1
        2dc738:	e2000008 	and	r0, r0, #8	; 0x8
        2dc73c:	e1810140 	orr	r0, r1, r0, asr #2
        2dc740:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: StoreObjectHeader::SetHintsHandlerId(int)
 * Address: 002dce70
 */
StoreObjectHeader::SetHintsHandlerId(int) {
    /*
        2dce70:	e5d0300d 	ldrb	r3, [r0, #13]	; fField13
        2dce74:	e2012001 	and	r2, r1, #1	; 0x1
        2dce78:	e1832082 	orr	r2, r3, r2, lsl #1
        2dce7c:	e5c0200d 	strb	r2, [r0, #13]	; fField13
        2dce80:	e5d0200d 	ldrb	r2, [r0, #13]	; fField13
        2dce84:	e2011002 	and	r1, r1, #2	; 0x2
        2dce88:	e1821101 	orr	r1, r2, r1, lsl #2
        2dce8c:	e5c0100d 	strb	r1, [r0, #13]	; fField13
        2dce90:	e1a0f00e 	mov	pc, lr
    */
}

