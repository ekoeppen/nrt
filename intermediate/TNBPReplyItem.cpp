#include "include/TNBPReplyItem.h"

/**
 * Symbol: TNBPReplyItem::GetLinkId(void)
 * Address: 001278bc
 */
TNBPReplyItem::GetLinkId(void) {
    /*
        1278bc:	e5900000 	ldr	r0, [r0]
        1278c0:	e5d01000 	ldrb	r1, [r0]
        1278c4:	e1a02c01 	mov	r2, r1, lsl #24
        1278c8:	e5d01001 	ldrb	r1, [r0, #1]	; fField1
        1278cc:	e0822801 	add	r2, r2, r1, lsl #16
        1278d0:	e5d01002 	ldrb	r1, [r0, #2]	; fField2
        1278d4:	e0821401 	add	r1, r2, r1, lsl #8
        1278d8:	e5d00003 	ldrb	r0, [r0, #3]	; fField3
        1278dc:	e0810000 	add	r0, r1, r0
        1278e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPReplyItem::GetNetwork(void)
 * Address: 001278e4
 */
TNBPReplyItem::GetNetwork(void) {
    /*
        1278e4:	e5900000 	ldr	r0, [r0]
        1278e8:	e5d01005 	ldrb	r1, [r0, #5]	; fField5
        1278ec:	e5d00004 	ldrb	r0, [r0, #4]	; fField4
        1278f0:	e0810400 	add	r0, r1, r0, lsl #8
        1278f4:	e1a00800 	mov	r0, r0, lsl #16
        1278f8:	e1a00820 	mov	r0, r0, lsr #16
        1278fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPReplyItem::GetNode(void)
 * Address: 00127900
 */
TNBPReplyItem::GetNode(void) {
    /*
        127900:	e5900000 	ldr	r0, [r0]
        127904:	e5d00006 	ldrb	r0, [r0, #6]	; fField6
        127908:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPReplyItem::GetSocket(void)
 * Address: 0012790c
 */
TNBPReplyItem::GetSocket(void) {
    /*
        12790c:	e5900000 	ldr	r0, [r0]
        127910:	e5d00007 	ldrb	r0, [r0, #7]	; fField7
        127914:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNBPReplyItem::GetEnumerator(void)
 * Address: 00127918
 */
TNBPReplyItem::GetEnumerator(void) {
    /*
        127918:	e5900000 	ldr	r0, [r0]
        12791c:	e5d00008 	ldrb	r0, [r0, #8]	; fField8
        127920:	e1a0f00e 	mov	pc, lr
    */
}

