#include "include/TXMonoSizeFrames.h"

/**
 * Symbol: TXMonoSizeFrames::__ct(void)
 * Address: 0023a8e4
 */
TXMonoSizeFrames::TXMonoSizeFrames(void) {
    /*
        23a8e4:	e1a0c00d 	mov	ip, sp
        23a8e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23a8ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a8f0:	e1b04000 	movs	r4, r0
        23a8f4:	1a000003 	bne	23a908 <TXMonoSizeFrames::__ct(void)+0x24>
        23a8f8:	e3a00030 	mov	r0, #48	; 0x30
        23a8fc:	eb664f8d 	bl	1bce738 <$__nw(unsigned int)>
        23a900:	e1b04000 	movs	r4, r0
        23a904:	0a000007 	beq	23a928 <TXMonoSizeFrames::__ct(void)+0x44>
        23a908:	e1a00004 	mov	r0, r4
        23a90c:	eb654f97 	bl	1b8e770 <TXFrames::$__ct(void)>
        23a910:	e59f0018 	ldr	r0, [pc, #18]	; 23a930 <TXMonoSizeFrames::__ct(void)+0x4c>
        23a914:	e5840000 	str	r0, [r4]
        23a918:	e2840028 	add	r0, r4, #40	; 0x28
        23a91c:	e3a01000 	mov	r1, #0	; 0x0
        23a920:	e5801004 	str	r1, [r0, #4]	; fField4
        23a924:	e5801000 	str	r1, [r0]
        23a928:	e1a00004 	mov	r0, r4
        23a92c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        23a930:	0001e698 	muleq	r1, r8, r6
    */
}

/**
 * Symbol: TXMonoSizeFrames::SetTextBoundsSize(TXLongPoint const &, TXDisplayChanges *, long)
 * Address: 0023a934
 */
TXMonoSizeFrames::SetTextBoundsSize(TXLongPoint const &, TXDisplayChanges *, long) {
    /*
        23a934:	e1a0c00d 	mov	ip, sp
        23a938:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23a93c:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a940:	e1a05000 	mov	r5, r0
        23a944:	e1a04001 	mov	r4, r1
        23a948:	e1a06002 	mov	r6, r2
        23a94c:	e1a01003 	mov	r1, r3
        23a950:	e590002c 	ldr	r0, [r0, #44]	; fField44
        23a954:	e5942004 	ldr	r2, [r4, #4]	; fField4
        23a958:	e1300002 	teq	r0, r2
        23a95c:	05952028 	ldreq	r2, [r5, #40]	; fField40
        23a960:	05940000 	ldreq	r0, [r4]
        23a964:	01320000 	teqeq	r2, r0
        23a968:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        23a96c:	e595c004 	ldr	ip, [r5, #4]	; fField4
        23a970:	e1a0000c 	mov	r0, ip
        23a974:	e5942000 	ldr	r2, [r4]
        23a978:	e59c3000 	ldr	r3, [ip]
        23a97c:	e1a0e00f 	mov	lr, pc
        23a980:	e283f018 	add	pc, r3, #24	; 0x18
        23a984:	e3360000 	teq	r6, #0	; 0x0
        23a988:	0a000007 	beq	23a9ac <TXMonoSizeFrames::SetTextBoundsSize(TXLongPoint const &, TXDisplayChanges *, long)+0x78>
        23a98c:	e595002c 	ldr	r0, [r5, #44]	; fField44
        23a990:	e5941004 	ldr	r1, [r4, #4]	; fField4
        23a994:	e1300001 	teq	r0, r1
        23a998:	03a00002 	moveq	r0, #2	; 0x2
        23a99c:	13a00001 	movne	r0, #1	; 0x1
        23a9a0:	e5961000 	ldr	r1, [r6]
        23a9a4:	e1810000 	orr	r0, r1, r0
        23a9a8:	e5860000 	str	r0, [r6]
        23a9ac:	e2850028 	add	r0, r5, #40	; 0x28
        23a9b0:	e8945000 	ldmia	r4, {ip, lr}
        23a9b4:	e8805000 	stmia	r0, {ip, lr}
        23a9b8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXMonoSizeFrames::GetTextBoundsSize( const(TXLongPoint *, long))
 * Address: 0023a9bc
 */
TXMonoSizeFrames::GetTextBoundsSize( const(TXLongPoint *, long)) {
    /*
        23a9bc:	e2800028 	add	r0, r0, #40	; 0x28
        23a9c0:	e8901008 	ldmia	r0, {r3, ip}
        23a9c4:	e8811008 	stmia	r1, {r3, ip}
        23a9c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXMonoSizeFrames::GetLineFormatWidth( const(long))
 * Address: 0023a9cc
 */
TXMonoSizeFrames::GetLineFormatWidth( const(long)) {
    /*
        23a9cc:	e590002c 	ldr	r0, [r0, #44]	; fField44
        23a9d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXMonoSizeFrames::GetLineMaxWidth( const(long))
 * Address: 0023a9d4
 */
TXMonoSizeFrames::GetLineMaxWidth( const(long)) {
    /*
        23a9d4:	e590002c 	ldr	r0, [r0, #44]	; fField44
        23a9d8:	e1a0f00e 	mov	pc, lr
    */
}

