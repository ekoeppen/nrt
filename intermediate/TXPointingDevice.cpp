#include "include/TXPointingDevice.h"

/* VTable Layout:
 * [0] 0x1a0427c
 * [1] 0x1a0427c
 * [2] 0x1a0427c
 * [3] 0x1a0427c
 * [4] 0x1a0427c
 * [5] 0x1a0427c
 * [6] 0x1be4278
 * [7] 0x1beb5c4
 * [8] 0x1beb594
 * [9] 0x1bed6d8
 * [10] 0x1be841c
 * [11] 0x1be844c
 * [12] 0x1be73b0
 * [13] 0x1beb5f0
 * [14] 0x1bec604
 * [15] 0x1be739c
 * [16] 0x1bec670
 * [17] 0x1be8464
 * [18] 0x1be6354
 * [19] 0x1bea53c
 * [20] 0x1bea534
 * [21] 0x1be8408
 * [22] 0x1be73c8
 * [23] 0x1bee744
 * [24] 0x1bee73c
 * [25] 0x1be6378
 * [26] 0x1be6370
 * [27] 0x38be7c
 * [28] 0x1be632c
 * [29] 0x1b35ad8
 * [30] 0x1b35ad0
 * [31] 0x1b37b8c
 * [32] 0x1a0a51c
 * [33] 0x1a0b5b4
 * [34] 0x1be6300
 * [35] 0x1a0b5b0
 * [36] 0x1a12974
 * [37] 0x1a15aa8
 * [38] 0x1a0427c
 * [39] TFaxToolInterface::AcceptSession(TOptionArray *, unsigned char)
 * [40] 0x1a0427c
 * [41] 0x1a0e710
 * [42] 0x1a0427c
 * [43] 0x1a0b5d0
 * [44] 0x1a0427c
 * [45] 0x1a10824
 * [46] 0x1a0427c
 * [47] 0x1a16b4c
 * [48] 0x1a294c4
 * [49] 0x1a0427c
 * [50] TFaxToolInterface::GetBand(unsigned char *, unsigned long, unsigned char)
 * [51] 0x1a0427c
 * [52] TFaxToolInterface::ConfirmReceivedPage(unsigned char, unsigned char)
 * [53] 0x1a0427c
 * [54] 0x1a0e74c
 * [55] 0x1a2948c
 * [56] 0x1a16b18
 * [57] 0x1a0f7c8
 * [58] 0x1a1399c
 * [59] 0x1a0d6fc
 * [60] 0x1b5de90
 * [61] 0x1b673b8
 * [62] 0x1b673f0
 * [63] 0x1b5ce54
 * [64] 0x1b673d4
 * [65] 0x1b5ce20
 * [66] 0x1b62130
 * [67] 0x1b631e0
 * [68] 0x1b673dc
 * [69] 0x1b5ef44
 * [70] 0x1b5def0
 * [71] 0x1b5bde0
 * [72] 0x1b610c0
 * [73] 0x1b60040
 * [74] 0x1b673b4
 * [75] 0x1b6424c
 * [76] 0x1b6529c
 * [77] 0x1b6427c
 * [78] 0x1b652f0
 * [79] 0x1b673a8
 * [80] 0x1b673e8
 * [81] 0x1b5bd88
 * [82] 0x1b5ff98
 * [83] 0x1b5ce78
 * [84] 0x1b5ef00
 * [85] 0x1b673a0
 * [86] 0x1b673d0
 * [87] 0x1b5bdd4
 * [88] 0x1b5ce70
 * [89] 0x1b60024
 * [90] 0x1b60070
 * [91] 0x1b64208
 * [92] 0x1b5ce3c
 * [93] 0x1b6003c
 * [94] 0x1b5ff9c
 * [95] 0x1b5ef78
 * [96] 0x1b5ff90
 * [97] 0x1b5ef34
 * [98] 0x1b5ff88
 * [99] 0x1b63180
 */

/**
 * Symbol: TXPointingDevice::__ct(void)
 * Address: 00234384
 */
TXPointingDevice::TXPointingDevice(void) {
    /*
        234384:	e1a0c00d 	mov	ip, sp
        234388:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        23438c:	e24cb004 	sub	fp, ip, #4	; 0x4
        234390:	e3300000 	teq	r0, #0	; 0x0
        234394:	1a000003 	bne	2343a8 <TXPointingDevice::__ct(void)+0x24>
        234398:	e3a00004 	mov	r0, #4	; 0x4
        23439c:	eb6668e5 	bl	1bce738 <$__nw(unsigned int)>
        2343a0:	e3300000 	teq	r0, #0	; 0x0
        2343a4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2343a8:	e59f1004 	ldr	r1, [pc, #4]	; 2343b4 <TXPointingDevice::__ct(void)+0x30>
        2343ac:	e5801000 	str	r1, [r0]
        2343b0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2343b4:	0001e718 	andeq	lr, r1, r8, lsl r7
    */
}

/**
 * Symbol: TXPointingDevice::__dt(void)
 * Address: 002343b8
 */
TXPointingDevice::~TXPointingDevice(void) {
    /*
        2343b8:	e59f200c 	ldr	r2, [pc, #c]	; 2343cc <TXPointingDevice::__dt(void)+0x14>
        2343bc:	e3110001 	tst	r1, #1	; 0x1
        2343c0:	e5802000 	str	r2, [r0]
        2343c4:	1a6664c5 	bne	1bcd6e0 <$__dl(void *)>
        2343c8:	e1a0f00e 	mov	pc, lr
        2343cc:	0001e718 	andeq	lr, r1, r8, lsl r7
    */
}

