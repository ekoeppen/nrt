#include "include/TXCommand.h"

/* VTable Layout:
 * [0] 0x1b88418
 * [1] 0x1a0427c
 * [2] 0x1a0427c
 * [3] 0x1a0427c
 * [4] 0x1b8b5c0
 * [5] 0x1b8b5c8
 * [6] 0x1b8b5d4
 * [7] 0x1b8b5fc
 * [8] 0x1b8c600
 * [9] 0x1b8b5f0
 * [10] 0x1b8b5f4
 * [11] 0x1b9ce40
 * [12] 0x1b9ce44
 * [13] 0x1b9ce3c
 * [14] 0x1b9ce48
 * [15] 0x1b97bb4
 * [16] 0x1b97bc8
 * [17] 0x1b97bcc
 * [18] TtspsPart::__dt(void)
 * [19] 0x1bc427c
 * [20] 0x1bc631c
 * [21] 0x1bd2978
 * [22] 0x1bcf7b4
 * [23] 0x1bc4234
 * [24] 0x1b831d4
 * [25] 0x1b831f4
 * [26] 0x38c818
 * [27] TtstpPart::Install(PartId const &, SourceType, PartInfo *)
 * [28] TtstpPart::Remove(PartId const &, unsigned long, long)
 * [29] 0x1bd2978
 * [30] 0x1bcf7b4
 * [31] 0x1bd18ec
 */

/**
 * Symbol: TXCommand::__ct(void)
 * Address: 00232d04
 */
TXCommand::TXCommand(void) {
    /*
        232d04:	e1a0c00d 	mov	ip, sp
        232d08:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        232d0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        232d10:	e3300000 	teq	r0, #0	; 0x0
        232d14:	1a000003 	bne	232d28 <TXCommand::__ct(void)+0x24>
        232d18:	e3a00010 	mov	r0, #16	; 0x10
        232d1c:	eb666e85 	bl	1bce738 <$__nw(unsigned int)>
        232d20:	e3300000 	teq	r0, #0	; 0x0
        232d24:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        232d28:	e59f1004 	ldr	r1, [pc, #4]	; 232d34 <TXCommand::__ct(void)+0x30>
        232d2c:	e5801000 	str	r1, [r0]
        232d30:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        232d34:	000213b8 	streqh	r1, [r2], -r8
    */
}

/**
 * Symbol: TXCommand::__dt(void)
 * Address: 00232d38
 */
TXCommand::~TXCommand(void) {
    /*
        232d38:	e59f200c 	ldr	r2, [pc, #c]	; 232d4c <TXCommand::__dt(void)+0x14>
        232d3c:	e3110001 	tst	r1, #1	; 0x1
        232d40:	e5802000 	str	r2, [r0]
        232d44:	1a666a65 	bne	1bcd6e0 <$__dl(void *)>
        232d48:	e1a0f00e 	mov	pc, lr
        232d4c:	000213b8 	streqh	r1, [r2], -r8
    */
}

/**
 * Symbol: TXCommand::ITXCommand(Textension *, int)
 * Address: 00233474
 */
TXCommand::ITXCommand(Textension *, int) {
    /*
        233474:	e9800006 	stmib	r0, {r1, r2}
        233478:	e3a01000 	mov	r1, #0	; 0x0
        23347c:	e5c0100d 	strb	r1, [r0, #13]	; fField13
        233480:	e3a01001 	mov	r1, #1	; 0x1
        233484:	e5c0100c 	strb	r1, [r0, #12]	; fField12
        233488:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXCommand::Execute(int *)
 * Address: 0023380c
 */
TXCommand::Execute(int *) {
    /*
        23380c:	e1a0c00d 	mov	ip, sp
        233810:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        233814:	e24cb004 	sub	fp, ip, #4	; 0x4
        233818:	e1a04000 	mov	r4, r0
        23381c:	e24dd004 	sub	sp, sp, #4	; 0x4
        233820:	e3310000 	teq	r1, #0	; 0x0
        233824:	01a0100d 	moveq	r1, sp
        233828:	e5d4000d 	ldrb	r0, [r4, #13]	; fField13
        23382c:	e3300004 	teq	r0, #4	; 0x4
        233830:	03a00000 	moveq	r0, #0	; 0x0
        233834:	05810000 	streq	r0, [r1]
        233838:	0a000016 	beq	233898 <TXCommand::Execute(int *)+0x8c>
        23383c:	e3300000 	teq	r0, #0	; 0x0
        233840:	1a000009 	bne	23386c <TXCommand::Execute(int *)+0x60>
        233844:	e1a00004 	mov	r0, r4
        233848:	e5942000 	ldr	r2, [r4]
        23384c:	e1a0e00f 	mov	lr, pc
        233850:	e282f004 	add	pc, r2, #4	; 0x4
        233854:	e5d4100c 	ldrb	r1, [r4, #12]	; fField12
        233858:	e3310000 	teq	r1, #0	; 0x0
        23385c:	03a01004 	moveq	r1, #4	; 0x4
        233860:	0a000008 	beq	233888 <TXCommand::Execute(int *)+0x7c>
        233864:	e3a01001 	mov	r1, #1	; 0x1
        233868:	ea000006 	b	233888 <TXCommand::Execute(int *)+0x7c>
        23386c:	e3300001 	teq	r0, #1	; 0x1
        233870:	e1a00004 	mov	r0, r4
        233874:	e5942000 	ldr	r2, [r4]
        233878:	1a000007 	bne	23389c <TXCommand::Execute(int *)+0x90>
        23387c:	e1a0e00f 	mov	lr, pc
        233880:	e282f008 	add	pc, r2, #8	; 0x8
        233884:	e3a01002 	mov	r1, #2	; 0x2
        233888:	e5c4100d 	strb	r1, [r4, #13]	; fField13
        23388c:	e3300000 	teq	r0, #0	; 0x0
        233890:	13a01004 	movne	r1, #4	; 0x4
        233894:	15c4100d 	strneb	r1, [r4, #13]	; fField13
        233898:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        23389c:	e1a0e00f 	mov	lr, pc
        2338a0:	e282f00c 	add	pc, r2, #12	; 0xc
        2338a4:	eaffffee 	b	233864 <TXCommand::Execute(int *)+0x58>
    */
}

