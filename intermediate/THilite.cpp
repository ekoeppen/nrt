#include "include/THilite.h"

/* VTable Layout:
 * [0] 0x1a89480
 * [1] 0x1a8d694
 * [2] 0x1aa52b0
 * [3] 0x1a9ce5c
 * [4] 0x1a92960
 * [5] 0x1a8a540
 * [6] TIrGlue::__dt(void)
 * [7] 0x1a318a0
 * [8] 0x38c580
 * [9] TLoader::GetSizeOf(void)
 * [10] 0x1baf7c8
 * [11] 0x1baf7cc
 * [12] 0x1baf7d0
 * [13] 0x1bad6a8
 * [14] 0x1bad698
 * [15] 0x1bad6a0
 * [16] 0x1bae70c
 * [17] 0x1bae708
 * [18] TLoader::MainConstructor(void)
 * [19] TLoader::MainDestructor(void)
 * [20] 0x1bae72c
 * [21] 0x1b15a84
 * [22] 0x1bae724
 * [23] 0x1bad6ac
 * [24] 0x1bae710
 * [25] 0x1be94d4
 * [26] 0x1be94d0
 * [27] 0x1bea518
 * [28] 0x1be52e4
 * [29] 0x1a0a528
 * [30] 0x1a118e4
 * [31] 0x1a1ad7c
 * [32] 0x1a1bd9c
 * [33] 0x1bc10a4
 * [34] TP3Tool::GetToolName(void)
 * [35] 0x1a27390
 * [36] 0x1a12948
 * [37] 0x1a12934
 * [38] 0x1a273b8
 * [39] 0x1bbffc8
 * [40] 0x1bbffcc
 * [41] 0x1bbffd4
 * [42] 0x1bbffe0
 * [43] 0x1bbffd0
 * [44] 0x1bc003c
 * [45] 0x1a15ab0
 * [46] 0x1bc002c
 * [47] 0x1bbce68
 * [48] 0x1a0e708
 * [49] 0x1a0e740
 * [50] 0x1bbde8c
 * [51] 0x1bc0020
 * [52] 0x1bc001c
 * [53] 0x1bbce54
 * [54] 0x1bbce50
 * [55] 0x1bbffc4
 * [56] 0x1bc0064
 * [57] 0x1bc0060
 * [58] 0x1a24208
 * [59] 0x1a231e8
 * [60] 0x1a2c654
 * [61] 0x1a2c644
 * [62] 0x1bbfff0
 * [63] 0x1bc0038
 * [64] 0x1a28448
 * [65] 0x1a2a538
 * [66] 0x1a2a530
 * [67] 0x1a2a528
 * [68] 0x1a2a520
 * [69] 0x1a294cc
 * [70] 0x1a2a510
 * [71] 0x1a294fc
 * [72] 0x1bc0050
 * [73] 0x1a2631c
 * [74] 0x1bbce5c
 * [75] 0x1bbce58
 * [76] 0x1a2a554
 * [77] 0x1a2a544
 * [78] 0x1a294f0
 * [79] 0x1a294e0
 * [80] 0x1a16b5c
 * [81] 0x1a17b8c
 * [82] 0x1bc0058
 * [83] 0x1a14a10
 * [84] 0x1bc0010
 * [85] 0x1a10858
 * [86] 0x1a118a0
 * [87] 0x1bbffdc
 * [88] 0x1bbffe4
 * [89] 0x1a139e4
 * [90] 0x1bc000c
 * [91] 0x1bc0044
 * [92] 0x1a26374
 * [93] 0x1bc004c
 * [94] 0x1a2b580
 * [95] 0x1a2b5e0
 * [96] 0x1a2b5d4
 * [97] 0x1a2b5c8
 * [98] 0x1a2b5bc
 * [99] 0x1bc10ac
 */

/**
 * Symbol: THilite::__ct(void)
 * Address: 00262b14
 */
THilite::THilite(void) {
    /*
        262b14:	e1a0c00d 	mov	ip, sp
        262b18:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        262b1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        262b20:	e3300000 	teq	r0, #0	; 0x0
        262b24:	1a000003 	bne	262b38 <THilite::__ct(void)+0x24>
        262b28:	e3a0000c 	mov	r0, #12	; 0xc
        262b2c:	eb65af01 	bl	1bce738 <$__nw(unsigned int)>
        262b30:	e3300000 	teq	r0, #0	; 0x0
        262b34:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        262b38:	e59f1004 	ldr	r1, [pc, #4]	; 262b44 <THilite::__ct(void)+0x30>
        262b3c:	e5801000 	str	r1, [r0]
        262b40:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        262b44:	0001fc20 	andeq	pc, r1, r0, lsr #24
    */
}

/**
 * Symbol: THilite::__dt(void)
 * Address: 00262b48
 */
THilite::~THilite(void) {
    /*
        262b48:	e59f200c 	ldr	r2, [pc, #c]	; 262b5c <THilite::__dt(void)+0x14>
        262b4c:	e3110001 	tst	r1, #1	; 0x1
        262b50:	e5802000 	str	r2, [r0]
        262b54:	1a65aae1 	bne	1bcd6e0 <$__dl(void *)>
        262b58:	e1a0f00e 	mov	pc, lr
        262b5c:	0001fc20 	andeq	pc, r1, r0, lsr #24
    */
}

/**
 * Symbol: THilite::Area(void)
 * Address: 00262b60
 */
THilite::Area(void) {
    /*
        262b60:	e1a0c00d 	mov	ip, sp
        262b64:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        262b68:	e24cb004 	sub	fp, ip, #4	; 0x4
        262b6c:	e1a04000 	mov	r4, r0
        262b70:	e1a05001 	mov	r5, r1
        262b74:	e24dd014 	sub	sp, sp, #20	; 0x14
        262b78:	e1a0000d 	mov	r0, sp
        262b7c:	eb609217 	bl	1a873e0 <TRegionVar::$__ct(void)>
        262b80:	e2851004 	add	r1, r5, #4	; 0x4
        262b84:	e59d0000 	ldr	r0, [sp]
        262b88:	eb63c383 	bl	1b5399c <$RectRgn(Region **, Rect *)>
        262b8c:	e1a0100d 	mov	r1, sp
        262b90:	e1a00004 	mov	r0, r4
        262b94:	eb609622 	bl	1a88424 <TRegion::$__ct(TRegionVar &)>
        262b98:	e1a0000d 	mov	r0, sp
        262b9c:	e3a01000 	mov	r1, #0	; 0x0
        262ba0:	eb609627 	bl	1a88444 <TRegionVar::$__dt(void)>
        262ba4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: THilite::Clone(void)
 * Address: 00262ba8
 */
THilite::Clone(void) {
    /*
        262ba8:	e1a0c00d 	mov	ip, sp
        262bac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        262bb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        262bb4:	e1a04000 	mov	r4, r0
        262bb8:	e3a00000 	mov	r0, #0	; 0x0
        262bbc:	eb609617 	bl	1a88420 <THilite::$__ct(void)>
        262bc0:	e1a05000 	mov	r5, r0
        262bc4:	e1a01004 	mov	r1, r4
        262bc8:	eb60aee0 	bl	1a8e750 <THilite::$CopyFrom(THilite *)>
        262bcc:	e1a00005 	mov	r0, r5
        262bd0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: THilite::CopyFrom(THilite *)
 * Address: 00262bd4
 */
THilite::CopyFrom(THilite *) {
    /*
        262bd4:	e2800004 	add	r0, r0, #4	; 0x4
        262bd8:	e2811004 	add	r1, r1, #4	; 0x4
        262bdc:	e8911008 	ldmia	r1, {r3, ip}
        262be0:	e8801008 	stmia	r0, {r3, ip}
        262be4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: THilite::UpdateBounds(void)
 * Address: 00262be8
 */
THilite::UpdateBounds(void) {
    /*
        262be8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: THilite::Overlaps(TRect const &)
 * Address: 00262bec
 */
THilite::Overlaps(TRect const &) {
    /*
        262bec:	e2800004 	add	r0, r0, #4	; 0x4
        262bf0:	ea60e898 	b	1a9ce58 <TRect::$Overlaps( const(TRect const &))>
    */
}

/**
 * Symbol: THilite::Encloses(TPoint const &)
 * Address: 00262bf4
 */
THilite::Encloses(TPoint const &) {
    /*
        262bf4:	e2800004 	add	r0, r0, #4	; 0x4
        262bf8:	e5911000 	ldr	r1, [r1]
        262bfc:	e52d1004 	str	r1, [sp, -#4]!
        262c00:	e1a01000 	mov	r1, r0
        262c04:	e49d0004 	ldr	r0, [sp], #4
        262c08:	ea63bf4b 	b	1b5293c <$PtInRect(Point, Rect *)>
    */
}

