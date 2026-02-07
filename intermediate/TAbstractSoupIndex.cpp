#include "include/TAbstractSoupIndex.h"

/* VTable Layout:
 * [0] 0x1a0427c
 * [1] 0x1a0427c
 * [2] 0x1a0427c
 * [3] 0x1a0427c
 * [4] 0x1a0427c
 * [5] 0x38c038
 * [6] 0x1be632c
 * [7] 0x1af2970
 * [8] 0x1af2958
 * [9] 0x1afbdac
 * [10] 0x1b7bdb8
 * [11] 0x1be632c
 * [12] 0x1be6300
 * [13] 0x1c0a554
 * [14] 0x1be847c
 * [15] 0x38c068
 * [16] 0x1be632c
 * [17] 0x1ae94f4
 * [18] 0x1ae94f0
 * [19] 0x1aea510
 * [20] 0x1aca548
 * [21] 0x1bb7b80
 * [22] 0x1bb6b74
 * [23] 0x1bb6b6c
 * [24] 0x1ac73bc
 * [25] 0x1ae4260
 * [26] 0x1bb9cf0
 * [27] 0x1bb7be8
 * [28] 0x1ac94fc
 * [29] 0x1ac9480
 * [30] 0x1bb8c44
 * [31] 0x1bb9cb4
 * [32] 0x1bb6b58
 * [33] 0x1aab5c0
 * [34] 0x1bb9cdc
 * [35] 0x1bb9cf8
 * [36] 0x1ace70c
 * [37] 0x1ac31f8
 * [38] 0x1ad4a34
 * [39] 0x1ac31ec
 * [40] 0x1bb7bec
 * [41] 0x38c0a8
 * [42] 0x1be632c
 * [43] 0x1c0e77c
 * [44] 0x1c0f780
 * [45] 0x1be847c
 * [46] 0x38c0d8
 * [47] 0x1be632c
 * [48] 0x1ba10c0
 * [49] 0x1be52dc
 * [50] 0x1be847c
 * [51] 0x1be633c
 * [52] 0x1beb5dc
 * [53] 0x1b7ad50
 * [54] 0x1beb580
 * [55] 0x1bab5fc
 * [56] 0x1bac678
 * [57] 0x1bae728
 * [58] 0x1abce70
 * [59] 0x1abad44
 * [60] 0x38c108
 * [61] 0x1a3ffb4
 * [62] 0x1a44268
 * [63] 0x1a3ef0c
 * [64] 0x38c144
 * [65] 0x1b88450
 * [66] 0x1b8845c
 * [67] 0x1b88460
 * [68] 0x1b9ef1c
 * [69] 0x1b894a4
 * [70] 0x1b88444
 * [71] 0x1b88454
 * [72] 0x1b88448
 * [73] 0x1b88458
 * [74] 0x1b88438
 * [75] 0x1b8843c
 * [76] 0x1b88430
 * [77] 0x1b8a508
 * [78] 0x1b8a578
 * [79] 0x1b8a57c
 * [80] 0x1b8b580
 * [81] 0x1b8b584
 * [82] 0x1b8b588
 * [83] 0x1b8b58c
 * [84] 0x1b8b594
 * [85] 0x1b8b598
 * [86] 0x1b8b590
 * [87] 0x1b8a518
 * [88] 0x1b8b59c
 * [89] 0x1b8a500
 * [90] 0x1b894f4
 * [91] CValidateBackupPipe::__dt(void)
 * [92] CValidateBackupPipe::ReadSeek(long, int)
 * [93] CValidateBackupPipe::ReadPosition( const(void))
 * [94] CValidateBackupPipe::WriteSeek(long, int)
 * [95] CValidateBackupPipe::WritePosition( const(void))
 * [96] CValidateBackupPipe::ReadChunk(void *, long &, unsigned char &)
 * [97] 0x1b17bbc
 * [98] CValidateBackupPipe::FlushRead(void)
 * [99] CValidateBackupPipe::FlushWrite(void)
 */

/**
 * Symbol: TAbstractSoupIndex::__ct(void)
 * Address: 002e87a4
 */
TAbstractSoupIndex::TAbstractSoupIndex(void) {
    /*
        2e87a4:	e1a0c00d 	mov	ip, sp
        2e87a8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2e87ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e87b0:	e3300000 	teq	r0, #0	; 0x0
        2e87b4:	1a000003 	bne	2e87c8 <TAbstractSoupIndex::__ct(void)+0x24>
        2e87b8:	e3a00004 	mov	r0, #4	; 0x4
        2e87bc:	eb6397dd 	bl	1bce738 <$__nw(unsigned int)>
        2e87c0:	e3300000 	teq	r0, #0	; 0x0
        2e87c4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2e87c8:	e59f1004 	ldr	r1, [pc, #4]	; 2e87d4 <TAbstractSoupIndex::__ct(void)+0x30>
        2e87cc:	e5801000 	str	r1, [r0]
        2e87d0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2e87d4:	0001eaac 	andeq	lr, r1, ip, lsr #21
    */
}

/**
 * Symbol: TAbstractSoupIndex::FindPrior(SKey *, SKey *, SKey *, unsigned char, unsigned char)
 * Address: 002e9a24
 */
TAbstractSoupIndex::FindPrior(SKey *, SKey *, SKey *, unsigned char, unsigned char) {
    /*
        2e9a24:	e1a0c00d 	mov	ip, sp
        2e9a28:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2e9a2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9a30:	e1a06000 	mov	r6, r0
        2e9a34:	e1a05002 	mov	r5, r2
        2e9a38:	e1a04003 	mov	r4, r3
        2e9a3c:	e59b2004 	ldr	r2, [fp, #4]
        2e9a40:	e20230ff 	and	r3, r2, #255	; 0xff
        2e9a44:	e59b0008 	ldr	r0, [fp, #8]
        2e9a48:	e20070ff 	and	r7, r0, #255	; 0xff
        2e9a4c:	e92d0008 	stmdb	sp!, {r3}
        2e9a50:	e1a03004 	mov	r3, r4
        2e9a54:	e1a02005 	mov	r2, r5
        2e9a58:	e1a00006 	mov	r0, r6
        2e9a5c:	e1a0e00f 	mov	lr, pc
        2e9a60:	e596f000 	ldr	pc, [r6]
        2e9a64:	e28dd004 	add	sp, sp, #4	; 0x4
        2e9a68:	e3300000 	teq	r0, #0	; 0x0
        2e9a6c:	1a00002d 	bne	2e9b28 <TAbstractSoupIndex::FindPrior(SKey *, SKey *, SKey *, unsigned char, unsigned char)+0x104>
        2e9a70:	e3370000 	teq	r7, #0	; 0x0
        2e9a74:	0a00000a 	beq	2e9aa4 <TAbstractSoupIndex::FindPrior(SKey *, SKey *, SKey *, unsigned char, unsigned char)+0x80>
        2e9a78:	e1a03004 	mov	r3, r4
        2e9a7c:	e1a02005 	mov	r2, r5
        2e9a80:	e92d000c 	stmdb	sp!, {r2, r3}
        2e9a84:	e1a02004 	mov	r2, r4
        2e9a88:	e1a01005 	mov	r1, r5
        2e9a8c:	e1a00006 	mov	r0, r6
        2e9a90:	e3a03000 	mov	r3, #0	; 0x0
        2e9a94:	e596c000 	ldr	ip, [r6]
        2e9a98:	e1a0e00f 	mov	lr, pc
        2e9a9c:	e28cf010 	add	pc, ip, #16	; 0x10
        2e9aa0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2e9aa4:	e1a03004 	mov	r3, r4
        2e9aa8:	e1a02005 	mov	r2, r5
        2e9aac:	e92d000c 	stmdb	sp!, {r2, r3}
        2e9ab0:	e1a02004 	mov	r2, r4
        2e9ab4:	e1a01005 	mov	r1, r5
        2e9ab8:	e1a00006 	mov	r0, r6
        2e9abc:	e3a03001 	mov	r3, #1	; 0x1
        2e9ac0:	e596c000 	ldr	ip, [r6]
        2e9ac4:	e1a0e00f 	mov	lr, pc
        2e9ac8:	e28cf00c 	add	pc, ip, #12	; 0xc
        2e9acc:	e28dd008 	add	sp, sp, #8	; 0x8
        2e9ad0:	e3300003 	teq	r0, #3	; 0x3
        2e9ad4:	1a000006 	bne	2e9af4 <TAbstractSoupIndex::FindPrior(SKey *, SKey *, SKey *, unsigned char, unsigned char)+0xd0>
        2e9ad8:	e1a02004 	mov	r2, r4
        2e9adc:	e1a01005 	mov	r1, r5
        2e9ae0:	e1a00006 	mov	r0, r6
        2e9ae4:	e5963000 	ldr	r3, [r6]
        2e9ae8:	e1a0e00f 	mov	lr, pc
        2e9aec:	e283f008 	add	pc, r3, #8	; 0x8
        2e9af0:	ea00000a 	b	2e9b20 <TAbstractSoupIndex::FindPrior(SKey *, SKey *, SKey *, unsigned char, unsigned char)+0xfc>
        2e9af4:	e1a03004 	mov	r3, r4
        2e9af8:	e1a02005 	mov	r2, r5
        2e9afc:	e92d000c 	stmdb	sp!, {r2, r3}
        2e9b00:	e1a02004 	mov	r2, r4
        2e9b04:	e1a01005 	mov	r1, r5
        2e9b08:	e1a00006 	mov	r0, r6
        2e9b0c:	e3a03000 	mov	r3, #0	; 0x0
        2e9b10:	e596c000 	ldr	ip, [r6]
        2e9b14:	e1a0e00f 	mov	lr, pc
        2e9b18:	e28cf010 	add	pc, ip, #16	; 0x10
        2e9b1c:	e28dd008 	add	sp, sp, #8	; 0x8
        2e9b20:	e3a00000 	mov	r0, #0	; 0x0
        2e9b24:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2e9b28:	e3300002 	teq	r0, #2	; 0x2
        2e9b2c:	1a00000d 	bne	2e9b68 <TAbstractSoupIndex::FindPrior(SKey *, SKey *, SKey *, unsigned char, unsigned char)+0x144>
        2e9b30:	e1a03004 	mov	r3, r4
        2e9b34:	e1a02005 	mov	r2, r5
        2e9b38:	e92d000c 	stmdb	sp!, {r2, r3}
        2e9b3c:	e1a02004 	mov	r2, r4
        2e9b40:	e1a01005 	mov	r1, r5
        2e9b44:	e1a00006 	mov	r0, r6
        2e9b48:	e3a03000 	mov	r3, #0	; 0x0
        2e9b4c:	e596c000 	ldr	ip, [r6]
        2e9b50:	e1a0e00f 	mov	lr, pc
        2e9b54:	e28cf010 	add	pc, ip, #16	; 0x10
        2e9b58:	e28dd008 	add	sp, sp, #8	; 0x8
        2e9b5c:	e3300000 	teq	r0, #0	; 0x0
        2e9b60:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2e9b64:	ea000009 	b	2e9b90 <TAbstractSoupIndex::FindPrior(SKey *, SKey *, SKey *, unsigned char, unsigned char)+0x16c>
        2e9b68:	e3300003 	teq	r0, #3	; 0x3
        2e9b6c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2e9b70:	e1a02004 	mov	r2, r4
        2e9b74:	e1a01005 	mov	r1, r5
        2e9b78:	e1a00006 	mov	r0, r6
        2e9b7c:	e5963000 	ldr	r3, [r6]
        2e9b80:	e1a0e00f 	mov	lr, pc
        2e9b84:	e283f008 	add	pc, r3, #8	; 0x8
        2e9b88:	e3300000 	teq	r0, #0	; 0x0
        2e9b8c:	1a000001 	bne	2e9b98 <TAbstractSoupIndex::FindPrior(SKey *, SKey *, SKey *, unsigned char, unsigned char)+0x174>
        2e9b90:	e3a00002 	mov	r0, #2	; 0x2
        2e9b94:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2e9b98:	e3300002 	teq	r0, #2	; 0x2
        2e9b9c:	03a00003 	moveq	r0, #3	; 0x3
        2e9ba0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

