#include "include/TXRulerBar.h"

/* VTable Layout:
 * [0] 0x1b97bf8
 * [1] 0x1b98c00
 * [2] 0x1a0427c
 * [3] 0x1a0427c
 * [4] 0x1a0427c
 * [5] 0x1a0427c
 * [6] 0x1b99cc4
 * [7] 0x1b94a58
 * [8] 0x1b94a30
 * [9] 0x1b94a34
 * [10] 0x1b94a50
 * [11] 0x1b94a6c
 * [12] 0x1b94a4c
 * [13] 0x38b0cc
 * [14] 0x1b873ac
 * [15] 0x1b873b4
 * [16] 0x1b873d4
 * [17] 0x1b873dc
 * [18] 0x1b873e0
 * [19] 0x1b873e4
 * [20] 0x1b873d8
 * [21] 0x1b873e8
 * [22] 0x1b873ec
 * [23] 0x1b873f0
 * [24] 0x1b873f4
 * [25] 0x1b873b0
 * [26] 0x1b939a0
 * [27] TXChunkedChars::UnlockChunk(long)
 * [28] 0x1b939a4
 * [29] 0x1b939a8
 * [30] 0x1b939ac
 * [31] 0x1b9ff98
 * [32] 0x1b9ad1c
 * [33] 0x1b9ffe4
 * [34] 0x1be4250
 * [35] 0x1beb5b4
 * [36] 0x1beb584
 * [37] 0x1bed6c8
 * [38] 0x1be840c
 * [39] 0x1be8440
 * [40] 0x1be73a4
 * [41] 0x1beb5e0
 * [42] 0x1beb5f8
 * [43] 0x1be738c
 * [44] 0x1bec65c
 * [45] 0x1be8458
 * [46] 0x1be6348
 * [47] 0x1be8470
 * [48] 0x1bed6a0
 * [49] 0x1beb5cc
 * [50] 0x1be4254
 * [51] 0x1bec61c
 * [52] 0x1bec614
 * [53] 0x1bee77c
 * [54] 0x1bee774
 * [55] 0x1bec60c
 * [56] 0x1bee76c
 * [57] 0x1a0427c
 * [58] 0x1a0427c
 * [59] 0x1bec660
 * [60] 0x1bae76c
 * [61] 0x1bae774
 * [62] 0x1a0427c
 * [63] 0x1a0427c
 * [64] 0x38b110
 * [65] 0x1bec61c
 * [66] 0x1bec614
 * [67] 0x1bee77c
 * [68] 0x1bee774
 * [69] 0x1bec60c
 * [70] 0x1bee76c
 * [71] 0x1ac10bc
 * [72] 0x1ac10c0
 * [73] 0x1bec660
 * [74] 0x1bae76c
 * [75] 0x1bae774
 * [76] 0x1ac214c
 * [77] 0x1ac31b8
 * [78] 0x1be4258
 * [79] 0x1beb5bc
 * [80] 0x1beb58c
 * [81] 0x1bed6d0
 * [82] 0x1be8414
 * [83] 0x1be8444
 * [84] 0x1be73a8
 * [85] 0x1beb5e8
 * [86] 0x1beb5fc
 * [87] 0x1be7394
 * [88] 0x1bec664
 * [89] 0x1be845c
 * [90] 0x1be634c
 * [91] 0x1bea538
 * [92] 0x1bea530
 * [93] 0x1be8404
 * [94] 0x1be73c4
 * [95] 0x1bee740
 * [96] 0x1bee738
 * [97] 0x1be6374
 * [98] 0x1be636c
 * [99] 0x1be7390
 */

/**
 * Symbol: TXRulerBar::__ct(void)
 * Address: 00243bb4
 */
TXRulerBar::TXRulerBar(void) {
    /*
        243bb4:	e1a0c00d 	mov	ip, sp
        243bb8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        243bbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        243bc0:	e3300000 	teq	r0, #0	; 0x0
        243bc4:	1a000003 	bne	243bd8 <TXRulerBar::__ct(void)+0x24>
        243bc8:	e3a00014 	mov	r0, #20	; 0x14
        243bcc:	eb662ad9 	bl	1bce738 <$__nw(unsigned int)>
        243bd0:	e3300000 	teq	r0, #0	; 0x0
        243bd4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        243bd8:	e59f1004 	ldr	r1, [pc, #4]	; 243be4 <TXRulerBar::__ct(void)+0x30>
        243bdc:	e5801000 	str	r1, [r0]
        243be0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        243be4:	0001afb0 	streqh	sl, [r1], -r0
    */
}

/**
 * Symbol: TXRulerBar::IRulerBar(Textension *, TXRuler *)
 * Address: 00243be8
 */
TXRulerBar::IRulerBar(Textension *, TXRuler *) {
    /*
        243be8:	e1a0c00d 	mov	ip, sp
        243bec:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        243bf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        243bf4:	e3a03000 	mov	r3, #0	; 0x0
        243bf8:	e9800006 	stmib	r0, {r1, r2}
        243bfc:	e92d0008 	stmdb	sp!, {r3}
        243c00:	e280000c 	add	r0, r0, #12	; 0xc
        243c04:	e3a02000 	mov	r2, #0	; 0x0
        243c08:	e3a01000 	mov	r1, #0	; 0x0
        243c0c:	eb64437e 	bl	1b54a0c <$SetRect__FP4RectlN32>
        243c10:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerBar::SetBounds(Rect const &)
 * Address: 00243c14
 */
TXRulerBar::SetBounds(Rect const &) {
    /*
        243c14:	e280000c 	add	r0, r0, #12	; 0xc
        243c18:	e8911008 	ldmia	r1, {r3, ip}
        243c1c:	e8801008 	stmia	r0, {r3, ip}
        243c20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXRulerBar::GetBounds( const(Rect *))
 * Address: 00243c24
 */
TXRulerBar::GetBounds( const(Rect *)) {
    /*
        243c24:	e280000c 	add	r0, r0, #12	; 0xc
        243c28:	e8901008 	ldmia	r0, {r3, ip}
        243c2c:	e8811008 	stmia	r1, {r3, ip}
        243c30:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXRulerBar::Activate(unsigned char)
 * Address: 00243c34
 */
TXRulerBar::Activate(unsigned char) {
    /*
        243c34:	e1a0f00e 	mov	pc, lr
    */
}

