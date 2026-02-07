#include "include/TUSoundCallback.h"

/* VTable Layout:
 * [0] 0x1b7bdb4
 * [1] 0x1a0427c
 * [2] 0x1a4b584
 * [3] 0x1a4b588
 * [4] 0x1a4b58c
 * [5] 0x1a4b590
 * [6] 0x1a4b594
 * [7] 0x1ab4a5c
 * [8] 0x1ab4a58
 * [9] 0x1aad698
 * [10] 0x1ab4a1c
 * [11] 0x1aab598
 * [12] 0x1ab18e0
 * [13] 0x1abad6c
 * [14] 0x1ab9ce4
 * [15] 0x1ab9ce0
 * [16] 0x1abbd9c
 * [17] 0x1abad38
 * [18] 0x1abbde8
 * [19] 0x1aa8470
 * [20] 0x1aa948c
 * [21] 0x1aae718
 * [22] 0x1aab5b0
 * [23] 0x1ab4a00
 * [24] 0x1ab2934
 * [25] 0x1aac660
 * [26] 0x1ab4a5c
 * [27] 0x1ab4a58
 * [28] 0x1aad698
 * [29] 0x1ab4a1c
 * [30] 0x1aab598
 * [31] 0x1ab18e0
 * [32] 0x1abad6c
 * [33] 0x1ab9ce4
 * [34] 0x1ab9ce0
 * [35] 0x1adef28
 * [36] 0x1adef24
 * [37] 0x1adef34
 * [38] 0x1aa8470
 * [39] 0x1adde9c
 * [40] 0x1aae718
 * [41] 0x1addea4
 * [42] 0x1adef00
 * [43] 0x1addef0
 * [44] 0x1addeac
 * [45] 0x38bb50
 * [46] 0x1b86340
 * [47] 0x1b84248
 * [48] 0x1b8424c
 * [49] 0x1b84250
 * [50] TXAttrObject::GetCountReferences(void)
 * [51] 0x1b84254
 * [52] 0x1b86348
 * [53] 0x1b8426c
 * [54] 0x1b84264
 * [55] 0x1b84274
 * [56] 0x1b84268
 * [57] 0x1b84278
 * [58] 0x1b852a0
 * [59] 0x1b852a4
 * [60] 0x1b8634c
 * [61] 0x1b86374
 * [62] 0x1b86378
 * [63] 0x1b84260
 * [64] 0x1b84258
 * [65] 0x1b8427c
 * [66] 0x1b85280
 * [67] 0x1b85284
 * [68] 0x1b8528c
 * [69] 0x1b85290
 * [70] 0x1b85288
 * [71] 0x1b8a508
 * [72] 0x1b92940
 * [73] 0x1b92948
 * [74] 0x1b92944
 * [75] 0x1b8a50c
 * [76] 0x1b8a510
 * [77] 0x1b9294c
 * [78] 0x1b92950
 * [79] 0x1b92958
 * [80] 0x1b9295c
 * [81] 0x1b92960
 * [82] 0x1b92964
 * [83] 0x1b8a500
 * [84] 0x1b894f4
 * [85] 0x38bb80
 * [86] 0x1b852e4
 * [87] 0x1b95ab0
 * [88] 0x1b95ad8
 * [89] 0x1b95adc
 * [90] 0x1b95ae0
 * [91] 0x1b96b10
 * [92] 0x1b96b14
 * [93] 0x1b95ac8
 * [94] 0x1b95af0
 * [95] 0x1b96b0c
 * [96] 0x1b95abc
 * [97] 0x1b95ac0
 * [98] 0x1b95ac4
 * [99] 0x1b95af8
 */

/**
 * Symbol: TUSoundCallback::__ct(void)
 * Address: 0025abec
 */
TUSoundCallback::TUSoundCallback(void) {
    /*
        25abec:	e1a0c00d 	mov	ip, sp
        25abf0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25abf4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25abf8:	e3300000 	teq	r0, #0	; 0x0
        25abfc:	1a000003 	bne	25ac10 <TUSoundCallback::__ct(void)+0x24>
        25ac00:	e3a00004 	mov	r0, #4	; 0x4
        25ac04:	eb65cecb 	bl	1bce738 <$__nw(unsigned int)>
        25ac08:	e3300000 	teq	r0, #0	; 0x0
        25ac0c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        25ac10:	e59f1004 	ldr	r1, [pc, #4]	; 25ac1c <TUSoundCallback::__ct(void)+0x30>
        25ac14:	e5801000 	str	r1, [r0]
        25ac18:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        25ac1c:	0001e1c8 	andeq	lr, r1, r8, asr #3
    */
}

/**
 * Symbol: TUSoundCallback::__dt(void)
 * Address: 0025ac20
 */
TUSoundCallback::~TUSoundCallback(void) {
    /*
        25ac20:	e59f200c 	ldr	r2, [pc, #c]	; 25ac34 <TUSoundCallback::__dt(void)+0x14>
        25ac24:	e3110001 	tst	r1, #1	; 0x1
        25ac28:	e5802000 	str	r2, [r0]
        25ac2c:	1a65caab 	bne	1bcd6e0 <$__dl(void *)>
        25ac30:	e1a0f00e 	mov	pc, lr
        25ac34:	0001e1c8 	andeq	lr, r1, r8, asr #3
    */
}

