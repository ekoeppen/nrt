#include "include/TXVirtualObject.h"

/* VTable Layout:
 * [0] TXVirtualObject::__dt(void)
 * [1] 0x1bb18f0
 * [2] 0x1bb2900
 * [3] 0x1bb18f4
 * [4] 0x1a54a58
 * [5] 0x1a56b00
 * [6] 0x1a54a5c
 * [7] 0x1a56b04
 * [8] 0x1a652e8
 * [9] 0x38bbb0
 * [10] 0x1a6632c
 * [11] 0x1a652e0
 * [12] 0x1a652f0
 * [13] 0x1a66310
 * [14] 0x1a652e8
 * [15] 0x38bbe0
 * [16] 0x1a66330
 * [17] 0x1a652e4
 * [18] 0x1a652f4
 * [19] 0x1a66314
 * [20] 0x38bc10
 * [21] 0x1a9ad08
 * [22] 0x1a9ffe8
 * [23] 0x1bd2978
 * [24] 0x1bcf7b4
 * [25] 0x1a9297c
 * [26] 0x38bc40
 * [27] 0x1b37bc8
 * [28] 0x1b38c00
 * [29] 0x1bd2978
 * [30] 0x1bcf7b4
 * [31] 0x1bd18ec
 * [32] 0x1ab4a5c
 * [33] 0x1ab4a58
 * [34] 0x1aad698
 * [35] 0x1ab4a1c
 * [36] 0x1aab598
 * [37] 0x1ab18e0
 * [38] 0x1abad6c
 * [39] 0x1ab9ce4
 * [40] 0x1ab9ce0
 * [41] 0x1abbd98
 * [42] 0x1abad34
 * [43] 0x1abbde4
 * [44] 0x1aa8470
 * [45] 0x1aa948c
 * [46] 0x1aae718
 * [47] 0x1aab5ac
 * [48] 0x1ab4a04
 * [49] 0x1ab2934
 * [50] 0x1aac660
 * [51] 0x38bc70
 * [52] 0x1bc427c
 * [53] 0x1bc631c
 * [54] 0x1bd2978
 * [55] 0x1bcf7b4
 * [56] 0x1bc4234
 * [57] 0x1ab5aa0
 * [58] 0x1ab8c70
 * [59] 0x1a77bec
 * [60] 0x38bca0
 * [61] 0x1a8d68c
 * [62] 0x1aa52b0
 * [63] 0x1a9ce5c
 * [64] 0x1a92960
 * [65] 0x1a8a540
 * [66] 0x38bcd0
 * [67] 0x1a9ad0c
 * [68] 0x1a9ffec
 * [69] 0x1bd2978
 * [70] 0x1bcf7b4
 * [71] 0x1a93980
 * [72] 0x1ab4a5c
 * [73] 0x1ab4a58
 * [74] 0x1aad698
 * [75] 0x1ab4a20
 * [76] 0x1aab598
 * [77] 0x1ab18e0
 * [78] 0x1abad6c
 * [79] 0x1ab9ce4
 * [80] 0x1ab9ce0
 * [81] 0x1abbd98
 * [82] 0x1abad34
 * [83] 0x1abbde4
 * [84] 0x1aa8470
 * [85] 0x1aa948c
 * [86] 0x1aae718
 * [87] 0x1aab5ac
 * [88] 0x1ab4a08
 * [89] 0x1ab2934
 * [90] 0x1aac660
 * [91] 0x38bd00
 * [92] 0x1bc427c
 * [93] 0x1bc631c
 * [94] 0x1ae4200
 * [95] 0x1ad4a7c
 * [96] 0x1bc4234
 * [97] 0x1a9ad14
 * [98] 0x1aa0008
 * [99] 0x38bd8c
 */

/**
 * Symbol: TXVirtualObject::__ct(void)
 * Address: 002343d0
 */
TXVirtualObject::TXVirtualObject(void) {
    /*
        2343d0:	e1a0c00d 	mov	ip, sp
        2343d4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2343d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2343dc:	e3300000 	teq	r0, #0	; 0x0
        2343e0:	1a000003 	bne	2343f4 <TXVirtualObject::__ct(void)+0x24>
        2343e4:	e3a00004 	mov	r0, #4	; 0x4
        2343e8:	eb6668d2 	bl	1bce738 <$__nw(unsigned int)>
        2343ec:	e3300000 	teq	r0, #0	; 0x0
        2343f0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2343f4:	e59f1004 	ldr	r1, [pc, #4]	; 234400 <TXVirtualObject::__ct(void)+0x30>
        2343f8:	e5801000 	str	r1, [r0]
        2343fc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        234400:	0001e39c 	muleq	r1, ip, r3
    */
}

/**
 * Symbol: TXVirtualObject::__dt(void)
 * Address: 00234404
 */
TXVirtualObject::~TXVirtualObject(void) {
    /*
        234404:	e59f200c 	ldr	r2, [pc, #c]	; 234418 <TXVirtualObject::__dt(void)+0x14>
        234408:	e3110001 	tst	r1, #1	; 0x1
        23440c:	e5802000 	str	r2, [r0]
        234410:	1a6664b2 	bne	1bcd6e0 <$__dl(void *)>
        234414:	e1a0f00e 	mov	pc, lr
        234418:	0001e39c 	muleq	r1, ip, r3
    */
}

