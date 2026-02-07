#include "include/TXChars.h"

/* VTable Layout:
 * [0] 0x1b8739c
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
 * [11] 0x1b873a0
 * [12] 0x38c5b0
 * [13] 0x1b86340
 * [14] 0x1b86344
 * [15] 0x1a0427c
 * [16] TXAttrObject::Reference(void)
 * [17] TXAttrObject::GetCountReferences(void)
 * [18] 0x1a0427c
 * [19] 0x1b86348
 * [20] 0x1b8636c
 * [21] 0x1b86370
 * [22] 0x1a0427c
 * [23] 0x1b86350
 * [24] 0x1b86354
 * [25] 0x1a0427c
 * [26] 0x1a0427c
 * [27] 0x1b8634c
 * [28] 0x1b86374
 * [29] 0x1b86378
 * [30] 0x1b86364
 * [31] 0x1b86358
 * [32] 0x1b8635c
 * [33] 0x1a0427c
 * [34] 0x1a0427c
 * [35] 0x1a0427c
 * [36] 0x1a0427c
 * [37] 0x1a0427c
 * [38] 0x1bb0870
 * [39] 0x1bae758
 * [40] 0x1bae750
 * [41] 0x1bb0804
 * [42] 0x1baf7fc
 * [43] 0x1bae748
 * [44] 0x1baf7f4
 * [45] 0x1bad688
 * [46] 0x1bad690
 * [47] 0x1baf784
 * [48] 0x1bae770
 * [49] 0x1bae778
 * [50] 0x1ba73dc
 * [51] 0x1ba843c
 * [52] 0x1bb0874
 * [53] 0x1bae758
 * [54] 0x1bae750
 * [55] 0x1bb0804
 * [56] 0x1baf7fc
 * [57] 0x1bae748
 * [58] 0x1baf7f4
 * [59] 0x1bad688
 * [60] 0x1bad690
 * [61] 0x1baf784
 * [62] 0x1bae770
 * [63] 0x1bae778
 * [64] 0x1ba73dc
 * [65] 0x1ba843c
 * [66] 0x38c5e0
 * [67] 0x1aed6cc
 * [68] 0x38c610
 * [69] 0x1a06340
 * [70] 0x1baf7c8
 * [71] 0x1baf7cc
 * [72] 0x1baf7d0
 * [73] 0x1bad6a8
 * [74] 0x1bad698
 * [75] 0x1bad6a0
 * [76] 0x1bae70c
 * [77] 0x1bae708
 * [78] 0x1a08424
 * [79] 0x1a0842c
 * [80] 0x1bae72c
 * [81] 0x1baf7d4
 * [82] 0x1bae724
 * [83] 0x1bad6ac
 * [84] 0x1bae710
 * [85] 0x1be94d4
 * [86] 0x1be94d0
 * [87] 0x1bea518
 * [88] 0x1be52e4
 * [89] 0x1a0a52c
 * [90] 0x1a118e8
 * [91] 0x1a1bd80
 * [92] 0x1a1bda0
 * [93] 0x1bc10a4
 * [94] TFaxTool::GetToolName(void)
 * [95] 0x1a27390
 * [96] 0x1a1294c
 * [97] 0x1a12938
 * [98] 0x1a273b8
 * [99] 0x1bbffc8
 */

/**
 * Symbol: TXChars::__ct(void)
 * Address: 002315e8
 */
TXChars::TXChars(void) {
    /*
        2315e8:	e1a0c00d 	mov	ip, sp
        2315ec:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2315f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2315f4:	e3300000 	teq	r0, #0	; 0x0
        2315f8:	1a000003 	bne	23160c <TXChars::__ct(void)+0x24>
        2315fc:	e3a00004 	mov	r0, #4	; 0x4
        231600:	eb66744c 	bl	1bce738 <$__nw(unsigned int)>
        231604:	e3300000 	teq	r0, #0	; 0x0
        231608:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        23160c:	e59f1004 	ldr	r1, [pc, #4]	; 231618 <TXChars::__ct(void)+0x30>
        231610:	e5801000 	str	r1, [r0]
        231614:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        231618:	0001fec8 	andeq	pc, r1, r8, asr #29
    */
}

/**
 * Symbol: TXChars::__dt(void)
 * Address: 0023161c
 */
TXChars::~TXChars(void) {
    /*
        23161c:	e59f200c 	ldr	r2, [pc, #c]	; 231630 <TXChars::__dt(void)+0x14>
        231620:	e3110001 	tst	r1, #1	; 0x1
        231624:	e5802000 	str	r2, [r0]
        231628:	1a66702c 	bne	1bcd6e0 <$__dl(void *)>
        23162c:	e1a0f00e 	mov	pc, lr
        231630:	0001fec8 	andeq	pc, r1, r8, asr #29
    */
}

/**
 * Symbol: TXChars::Compact(void)
 * Address: 0023227c
 */
TXChars::Compact(void) {
    /*
        23227c:	e1a0f00e 	mov	pc, lr
    */
}

