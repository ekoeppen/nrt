#include "include/NComparator.h"

/* VTable Layout:
 * [0] 0x1bb18fc
 * [1] 0x1bb2900
 * [2] 0x1bb2904
 * [3] 0x1b35ac4
 * [4] 0x38aab4
 * [5] 0x1baf7c8
 * [6] 0x1baf7cc
 * [7] 0x1baf7d0
 * [8] 0x1bad6a8
 * [9] 0x1bad698
 * [10] 0x1bad6a0
 * [11] 0x1bae70c
 * [12] 0x1bae708
 * [13] 0x1b39cc8
 * [14] TCardServer::MainDestructor(void)
 * [15] 0x1bae72c
 * [16] 0x1baf7d4
 * [17] 0x1bae724
 * [18] 0x1bad6ac
 * [19] 0x1bae710
 * [20] 0x1be94d4
 * [21] 0x1be94d0
 * [22] 0x1bea518
 * [23] 0x1be52e4
 * [24] 0x1b5de88
 * [25] 0x1b5dec4
 * [26] 0x1b631a0
 * [27] 0x1b5ce54
 * [28] 0x1b7deb8
 * [29] 0x1b7ad60
 * [30] 0x1b7ad10
 * [31] 0x1b7ad74
 * [32] 0x1b7ad4c
 * [33] 0x1b7bd8c
 * [34] 0x1b7ad2c
 * [35] 0x1b7debc
 * [36] 0x1b7deb0
 * [37] 0x1a652e8
 * [38] 0x1a68410
 * [39] 0x1a0427c
 * [40] 0x1a0427c
 * [41] 0x1a0427c
 * [42] 0x1a0427c
 * [43] 0x1b0b5cc
 * [44] TMathOpView::ClassID( const(void))
 * [45] TMathOpView::DerivedFrom( const(long))
 * [46] 0x38b1bc
 * [47] 0x1a9ad64
 * [48] 0x1a9085c
 * [49] TMathOpView::Constructor(RefVar const &, TView *)
 * [50] 0x1ae73a8
 * [51] TMathOpView::RealDoCommand(RefVar const &)
 * [52] 0x1ae73ac
 * [53] 0x1bcb5a0
 * [54] 0x1bcb580
 * [55] 0x1bcb5ec
 * [56] 0x1bc94b8
 * [57] 0x1bcc60c
 * [58] 0x1adce2c
 * [59] 0x1bca574
 * [60] 0x1ae73c0
 * [61] 0x1bca554
 * [62] 0x1bcc614
 * [63] 0x1bc94ac
 * [64] 0x1bc94b0
 * [65] 0x1bc94ec
 * [66] 0x1bca578
 * [67] TView::SetCaretOffset(long *, long *)
 * [68] 0x1ae73b8
 * [69] 0x1ae73b4
 * [70] 0x1ae73bc
 * [71] 0x1ae31cc
 * [72] 0x1bcb59c
 * [73] 0x1bcb5a8
 * [74] 0x1adbdf8
 * [75] 0x1bcb5c4
 * [76] 0x1bca57c
 * [77] 0x1bca510
 * [78] 0x1a918f0
 * [79] 0x1ab39e0
 * [80] 0x1ad189c
 * [81] 0x1ab4a18
 * [82] 0x1aad6d0
 * [83] 0x1adbde8
 * [84] 0x1adbdd8
 * [85] TView::DeleteHilited(RefVar const &)
 * [86] 0x1adce0c
 * [87] 0x1ab8c5c
 * [88] 0x1ab39c8
 * [89] 0x1ab39d0
 * [90] 0x1ab39cc
 * [91] 0x1adce00
 * [92] TView::ClickOptions(void)
 * [93] TView::DrawScaledData(TRect const &, TRect const &, TRect *)
 * [94] 0x1aa8428
 * [95] 0x1ab2910
 * [96] 0x1aad6a4
 * [97] 0x1ace730
 * [98] 0x1ace734
 * [99] 0x1ae31c8
 */

/**
 * Symbol: NComparator::__ct(void)
 * Address: 00128648
 */
NComparator::NComparator(void) {
    /*
        128648:	e1a0c00d 	mov	ip, sp
        12864c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        128650:	e24cb004 	sub	fp, ip, #4	; 0x4
        128654:	e3300000 	teq	r0, #0	; 0x0
        128658:	1a000003 	bne	12866c <NComparator::__ct(void)+0x24>
        12865c:	e3a00004 	mov	r0, #4	; 0x4
        128660:	eb6a9834 	bl	1bce738 <$__nw(unsigned int)>
        128664:	e3300000 	teq	r0, #0	; 0x0
        128668:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        12866c:	e59f1004 	ldr	r1, [pc, #4]	; 128678 <NComparator::__ct(void)+0x30>
        128670:	e5801000 	str	r1, [r0]
        128674:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        128678:	0001b144 	andeq	fp, r1, r4, asr #2
    */
}

/**
 * Symbol: NComparator::__dt(void)
 * Address: 0012867c
 */
NComparator::~NComparator(void) {
    /*
        12867c:	e59f200c 	ldr	r2, [pc, #c]	; 128690 <NComparator::__dt(void)+0x14>
        128680:	e3110001 	tst	r1, #1	; 0x1
        128684:	e5802000 	str	r2, [r0]
        128688:	1a6a9414 	bne	1bcd6e0 <$__dl(void *)>
        12868c:	e1a0f00e 	mov	pc, lr
        128690:	0001b144 	andeq	fp, r1, r4, asr #2
    */
}

/**
 * Symbol: NComparator::KeyOf( const(void const *))
 * Address: 00128694
 */
NComparator::KeyOf( const(void const *)) {
    /*
        128694:	e1a00001 	mov	r0, r1
        128698:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CompareKeys__11NComparatorCFPCvT1
 * Address: 0012869c
 */
void NComparator::CompareKeys() {
    /*
        12869c:	e3a00000 	mov	r0, #0	; 0x0
        1286a0:	e1510002 	cmp	r1, r2
        1286a4:	33e00000 	mvncc	r0, #0	; 0x0
        1286a8:	31a0f00e 	movcc	pc, lr
        1286ac:	83a00001 	movhi	r0, #1	; 0x1
        1286b0:	e1a0f00e 	mov	pc, lr
    */
}

