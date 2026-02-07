#include "DDKIncludes/UtilityClasses/BufferList.h"

/* VTable Layout:
 * [0] 0x1be424c
 * [1] 0x1a0427c
 * [2] 0x1a0427c
 * [3] 0x1a0427c
 * [4] 0x1a0427c
 * [5] 0x1a0427c
 * [6] 0x1a0427c
 * [7] 0x1a0427c
 * [8] 0x1a0427c
 * [9] 0x1a0427c
 * [10] 0x1a0427c
 * [11] 0x1a0427c
 * [12] 0x1a0427c
 * [13] 0x1af0854
 * [14] 0x1b0215c
 * [15] 0x1b02158
 * [16] 0x1b0a520
 * [17] 0x1b0a518
 * [18] 0x1b0214c
 * [19] 0x1b0a50c
 * [20] 0x1af8c30
 * [21] 0x1af8c34
 * [22] 0x1b04240
 * [23] 0x1bae770
 * [24] 0x1bae778
 * [25] 0x1b0007c
 * [26] 0x1b0845c
 * [27] 0x1a3bdf8
 * [28] 0x1bec61c
 * [29] 0x1bec614
 * [30] 0x1bee77c
 * [31] 0x1bee774
 * [32] 0x1bec60c
 * [33] 0x1bee76c
 * [34] 0x1a3ef7c
 * [35] 0x1a3ff84
 * [36] 0x1a4318c
 * [37] 0x1bae76c
 * [38] 0x1bae774
 * [39] 0x1a42124
 * [40] 0x1a4425c
 * [41] 0x1ba10a0
 * [42] 0x1b5de90
 * [43] 0x1b5dec0
 * [44] 0x1b631a8
 * [45] 0x1b5ce54
 * [46] 0x1b5ffd4
 * [47] 0x1b5ce20
 * [48] 0x1b62130
 * [49] 0x1b631dc
 * [50] 0x1b60034
 * [51] 0x1b5ef40
 * [52] 0x1b5def0
 * [53] 0x1b5bddc
 * [54] 0x1b610b8
 * [55] 0x1b60040
 * [56] 0x1b64260
 * [57] 0x1b64244
 * [58] 0x1b65294
 * [59] 0x1b64278
 * [60] 0x1b6a558
 * [61] 0x1b64240
 * [62] 0x1b66324
 * [63] TClipboard::ClassID( const(void))
 * [64] TClipboard::DerivedFrom( const(long))
 * [65] 0x1ad4a70
 * [66] 0x1a9ad64
 * [67] 0x1a9085c
 * [68] 0x1abef08
 * [69] 0x1ae73a8
 * [70] 0x1a9ef6c
 * [71] 0x1ae73ac
 * [72] 0x1bcb5a0
 * [73] 0x1bcb580
 * [74] 0x1bcb5ec
 * [75] 0x1bc94b8
 * [76] 0x1bcc60c
 * [77] 0x1adce2c
 * [78] 0x1bca574
 * [79] 0x1ae73c0
 * [80] 0x1bca554
 * [81] 0x1bcc614
 * [82] 0x1bc94ac
 * [83] 0x1bc94b0
 * [84] 0x1bc94ec
 * [85] 0x1bca578
 * [86] TView::SetCaretOffset(long *, long *)
 * [87] 0x1ae73b8
 * [88] 0x1ae73b4
 * [89] 0x1ae73bc
 * [90] 0x1ae31cc
 * [91] 0x1bcb59c
 * [92] 0x1bcb5a8
 * [93] 0x1adbdf8
 * [94] 0x1bcb5c4
 * [95] 0x1bca57c
 * [96] 0x1bca510
 * [97] 0x1bca50c
 * [98] 0x1ab39e0
 * [99] 0x1ad189c
 */

/**
 * Symbol: CMinBuffer::__ct(void)
 * Address: 0011f2d4
 */
CMinBuffer::CMinBuffer(void) {
    /*
        11f2d4:	e1a0c00d 	mov	ip, sp
        11f2d8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11f2dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f2e0:	e3300000 	teq	r0, #0	; 0x0
        11f2e4:	1a000003 	bne	11f2f8 <CMinBuffer::__ct(void)+0x24>
        11f2e8:	e3a00004 	mov	r0, #4	; 0x4
        11f2ec:	eb6abd11 	bl	1bce738 <$__nw(unsigned int)>
        11f2f0:	e3300000 	teq	r0, #0	; 0x0
        11f2f4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        11f2f8:	e59f1004 	ldr	r1, [pc, #4]	; 11f304 <CMinBuffer::__ct(void)+0x30>	; CMinBuffer
        11f2fc:	e5801000 	str	r1, [r0]
        11f300:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        11f304:	0001a618 	andeq	sl, r1, r8, lsl r6
    */
}

/**
 * Symbol: CMinBuffer::__dt(void)
 * Address: 0011f308
 */
CMinBuffer::~CMinBuffer(void) {
    /*
        11f308:	e59f200c 	ldr	r2, [pc, #c]	; 11f31c <CMinBuffer::__dt(void)+0x14>
        11f30c:	e3110001 	tst	r1, #1	; 0x1
        11f310:	e5802000 	str	r2, [r0]
        11f314:	1a6ab8f1 	bne	1bcd6e0 <$__dl(void *)>
        11f318:	e1a0f00e 	mov	pc, lr
        11f31c:	0001a618 	andeq	sl, r1, r8, lsl r6
    */
}

