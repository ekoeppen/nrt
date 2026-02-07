#include "include/TRecObject.h"

/* VTable Layout:
 * [0] 0x1b5de84
 * [1] 0x1b5dec4
 * [2] 0x1b631a0
 * [3] 0x1b5ce54
 * [4] TResponder::ClassID( const(void))
 * [5] TResponder::DerivedFrom( const(long))
 * [6] 0x38b01c
 * [7] 0x1a9ad64
 * [8] 0x1a90854
 * [9] 0x38b04c
 * [10] 0x1a0633c
 * [11] 0x1baf7c8
 * [12] 0x1baf7cc
 * [13] 0x1baf7d0
 * [14] 0x1bad6a8
 * [15] 0x1bad698
 * [16] 0x1bad6a0
 * [17] 0x1bae70c
 * [18] 0x1bae708
 * [19] 0x1a08420
 * [20] 0x1a08428
 * [21] 0x1bae72c
 * [22] 0x1baf7d4
 * [23] 0x1bae724
 * [24] 0x1bad6ac
 * [25] 0x1bae710
 * [26] 0x1be94d4
 * [27] 0x1be94d0
 * [28] 0x1bea518
 * [29] 0x1be52e4
 * [30] 0x1b031c0
 * [31] 0x1b031c4
 * [32] 0x1a4a564
 * [33] 0x1bc4240
 * [34] 0x1bc52a8
 * [35] 0x1bc52e4
 * [36] 0x1bc6300
 * [37] 0x1b5de90
 * [38] 0x1b19cd4
 * [39] 0x1b231a8
 * [40] 0x1b5ce54
 * [41] 0x1b20040
 * [42] 0x1b5ce20
 * [43] 0x1b62130
 * [44] 0x1b631e0
 * [45] 0x1b60038
 * [46] 0x1b5ef44
 * [47] 0x1b5def0
 * [48] 0x1b5bde0
 * [49] 0x1b610c0
 * [50] 0x1b60040
 * [51] 0x1b64264
 * [52] 0x1b6424c
 * [53] 0x1b6529c
 * [54] 0x1b6427c
 * [55] 0x1b652f0
 * [56] 0x1b64240
 * [57] 0x1b66324
 * [58] 0x1b5bd88
 * [59] 0x1b5ff98
 * [60] 0x1b5ce78
 * [61] 0x1b5ef00
 * [62] 0x1b5ad78
 * [63] 0x1b5ef70
 * [64] 0x1b5bdd4
 * [65] 0x1b5ce70
 * [66] 0x1b60024
 * [67] 0x1b60070
 * [68] 0x1b64208
 * [69] 0x1b5ce3c
 * [70] 0x1b6003c
 * [71] 0x1b5ff9c
 * [72] 0x1b5ef78
 * [73] 0x1b5ff90
 * [74] 0x1b5ef34
 * [75] 0x1b5ff88
 * [76] 0x1b63180
 * [77] 0x1b63194
 * [78] 0x1b6215c
 * [79] 0x1b5ef08
 * [80] 0x1a2d6c0
 * [81] 0x38b08c
 * [82] TTestAgent::GetSizeOf(void)
 * [83] 0x1baf7c8
 * [84] 0x1baf7cc
 * [85] 0x1baf7d0
 * [86] TTestAgent::ForkInit(TForkWorld *)
 * [87] TTestAgent::ForkConstructor(TForkWorld *)
 * [88] 0x1bad6a0
 * [89] 0x1bae70c
 * [90] 0x1bae708
 * [91] TTestAgent::MainConstructor(void)
 * [92] TTestAgent::MainDestructor(void)
 * [93] 0x1bae72c
 * [94] 0x1baf7d4
 * [95] 0x1bae724
 * [96] 0x1bad6ac
 * [97] TTestAgent::MakeFork(void)
 * [98] 0x1be94d4
 * [99] 0x1be94d0
 */

/**
 * Symbol: TRecObject::__ct(void)
 * Address: 0021c984
 */
TRecObject::TRecObject(void) {
    /*
        21c984:	e1a0c00d 	mov	ip, sp
        21c988:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        21c98c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21c990:	e3300000 	teq	r0, #0	; 0x0
        21c994:	1a000003 	bne	21c9a8 <TRecObject::__ct(void)+0x24>
        21c998:	e3a00008 	mov	r0, #8	; 0x8
        21c99c:	eb66c765 	bl	1bce738 <$__nw(unsigned int)>
        21c9a0:	e3300000 	teq	r0, #0	; 0x0
        21c9a4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        21c9a8:	e59f1004 	ldr	r1, [pc, #4]	; 21c9b4 <TRecObject::__ct(void)+0x30>	; fField4
        21c9ac:	e5801000 	str	r1, [r0]
        21c9b0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        21c9b4:	0001adc4 	andeq	sl, r1, r4, asr #27
    */
}

/**
 * Symbol: TRecObject::__dt(void)
 * Address: 0021c9b8
 */
TRecObject::~TRecObject(void) {
    /*
        21c9b8:	e59f200c 	ldr	r2, [pc, #c]	; 21c9cc <TRecObject::__dt(void)+0x14>
        21c9bc:	e3110001 	tst	r1, #1	; 0x1
        21c9c0:	e5802000 	str	r2, [r0]
        21c9c4:	1a66c345 	bne	1bcd6e0 <$__dl(void *)>
        21c9c8:	e1a0f00e 	mov	pc, lr
        21c9cc:	0001adc4 	andeq	sl, r1, r4, asr #27
    */
}

/**
 * Symbol: TRecObject::SetFlags(unsigned long)
 * Address: 0021c9d0
 */
TRecObject::SetFlags(unsigned long) {
    /*
        21c9d0:	e5902004 	ldr	r2, [r0, #4]	; fField4
        21c9d4:	e1821001 	orr	r1, r2, r1
        21c9d8:	e5a01004 	str	r1, [r0, #4]!	; fField4
        21c9dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecObject::UnsetFlags(unsigned long)
 * Address: 0021c9e0
 */
TRecObject::UnsetFlags(unsigned long) {
    /*
        21c9e0:	e5902004 	ldr	r2, [r0, #4]	; fField4
        21c9e4:	e1c21001 	bic	r1, r2, r1
        21c9e8:	e5a01004 	str	r1, [r0, #4]!	; fField4
        21c9ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecObject::TestFlags(unsigned long)
 * Address: 0021c9f0
 */
TRecObject::TestFlags(unsigned long) {
    /*
        21c9f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        21c9f4:	e0100001 	ands	r0, r0, r1
        21c9f8:	13a00001 	movne	r0, #1	; 0x1
        21c9fc:	e20000ff 	and	r0, r0, #255	; 0xff
        21ca00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecObject::DumpObject(char *)
 * Address: 0021ca04
 */
TRecObject::DumpObject(char *) {
    /*
        21ca04:	e1a0c00d 	mov	ip, sp
        21ca08:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        21ca0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        21ca10:	e1a04000 	mov	r4, r0
        21ca14:	e1a00001 	mov	r0, r1
        21ca18:	eb653f12 	bl	1b6c668 <$Msg__4TMsgSFPc>
        21ca1c:	e1a05000 	mov	r5, r0
        21ca20:	e1a01000 	mov	r1, r0
        21ca24:	e1a00004 	mov	r0, r4
        21ca28:	e5942000 	ldr	r2, [r4]
        21ca2c:	e1a0e00f 	mov	lr, pc
        21ca30:	e282f004 	add	pc, r2, #4	; 0x4
        21ca34:	e1a00005 	mov	r0, r5
        21ca38:	eb654310 	bl	1b6d680 <TMsg::$MsgPrintf(void)>
        21ca3c:	e1a00005 	mov	r0, r5
        21ca40:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        21ca44:	ea653ad6 	b	1b6b5a4 <TMsg::$Dispose(void)>
    */
}

/**
 * Symbol: TRecObject::Dump(TMsg *)
 * Address: 0021ca48
 */
TRecObject::Dump(TMsg *) {
    /*
        21ca48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecObject::SizeInBytes(void)
 * Address: 0021ca4c
 */
TRecObject::SizeInBytes(void) {
    /*
        21ca4c:	ea6711a9 	b	1be10f8 <$GetPtrSize>
    */
}

/**
 * Symbol: TRecObject::Dispose(void)
 * Address: 0021ca50
 */
TRecObject::Dispose(void) {
    /*
        21ca50:	e3300000 	teq	r0, #0	; 0x0
        21ca54:	13a01001 	movne	r1, #1	; 0x1
        21ca58:	1affffd6 	bne	21c9b8 <TRecObject::__dt(void)>
        21ca5c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TRecObject::CopyInto(TRecObject *)
 * Address: 0021ca60
 */
TRecObject::CopyInto(TRecObject *) {
    /*
        21ca60:	e5900004 	ldr	r0, [r0, #4]	; fField4
        21ca64:	e5a10004 	str	r0, [r1, #4]!	; fField4
        21ca68:	e3a00000 	mov	r0, #0	; 0x0
        21ca6c:	e1a0f00e 	mov	pc, lr
    */
}

