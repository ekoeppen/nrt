#include "include/TXMonoFrameFormatter.h"

/**
 * Symbol: TXMonoFrameFormatter::__ct(void)
 * Address: 00239868
 */
TXMonoFrameFormatter::TXMonoFrameFormatter(void) {
    /*
        239868:	e1a0c00d 	mov	ip, sp
        23986c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        239870:	e24cb004 	sub	fp, ip, #4	; 0x4
        239874:	e1b04000 	movs	r4, r0
        239878:	1a000003 	bne	23988c <TXMonoFrameFormatter::__ct(void)+0x24>
        23987c:	e3a00024 	mov	r0, #36	; 0x24
        239880:	eb6653ac 	bl	1bce738 <$__nw(unsigned int)>
        239884:	e1b04000 	movs	r4, r0
        239888:	0a000003 	beq	23989c <TXMonoFrameFormatter::__ct(void)+0x34>
        23988c:	e1a00004 	mov	r0, r4
        239890:	eb654f99 	bl	1b8d6fc <TXFrameFormatter::$__ct(void)>
        239894:	e59f0008 	ldr	r0, [pc, #8]	; 2398a4 <TXMonoFrameFormatter::__ct(void)+0x3c>
        239898:	e5840000 	str	r0, [r4]
        23989c:	e1a00004 	mov	r0, r4
        2398a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2398a4:	0001f010 	andeq	pc, r1, r0, lsl r0
    */
}

/**
 * Symbol: TXMonoFrameFormatter::CatchFrame(long)
 * Address: 002398a8
 */
TXMonoFrameFormatter::CatchFrame(long) {
    /*
        2398a8:	e1a0c00d 	mov	ip, sp
        2398ac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2398b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2398b4:	e5b04018 	ldr	r4, [r0, #24]!	; fField24
        2398b8:	e59f0008 	ldr	r0, [pc, #8]	; 2398c8 <TXMonoFrameFormatter::CatchFrame(long)+0x20>
        2398bc:	eb6553a3 	bl	1b8e750 <TXFramesEditInfo::$CatchFrame(long)>
        2398c0:	e5a0400c 	str	r4, [r0, #12]!	; fField12
        2398c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2398c8:	0c104d98 	ldceq	13, cr4, [r0], -#608
    */
}

/**
 * Symbol: TXMonoFrameFormatter::GetNextFrameEditInfo(void)
 * Address: 002398cc
 */
TXMonoFrameFormatter::GetNextFrameEditInfo(void) {
    /*
        2398cc:	e1a0c00d 	mov	ip, sp
        2398d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2398d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2398d8:	e1a04000 	mov	r4, r0
        2398dc:	e59f001c 	ldr	r0, [pc, #1c]	; 239900 <TXMonoFrameFormatter::GetNextFrameEditInfo(void)+0x34>
        2398e0:	eb65539c 	bl	1b8e758 <TXFramesEditInfo::$GetNext(void)>
        2398e4:	e3300000 	teq	r0, #0	; 0x0
        2398e8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2398ec:	e5b41018 	ldr	r1, [r4, #24]!	; fField24
        2398f0:	e590200c 	ldr	r2, [r0, #12]	; fField12
        2398f4:	e0411002 	sub	r1, r1, r2
        2398f8:	e580100c 	str	r1, [r0, #12]	; fField12
        2398fc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        239900:	0c104d98 	ldceq	13, cr4, [r0], -#608
    */
}

/**
 * Symbol: TXMonoFrameFormatter::SetFrameHeight(long, long)
 * Address: 00239904
 */
TXMonoFrameFormatter::SetFrameHeight(long, long) {
    /*
        239904:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXMonoFrameFormatter::GetFrameHeight( const(long))
 * Address: 00239908
 */
TXMonoFrameFormatter::GetFrameHeight( const(long)) {
    /*
        239908:	e3a00902 	mov	r0, #32768	; 0x8000
        23990c:	e2400001 	sub	r0, r0, #1	; 0x1
        239910:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXMonoFrameFormatter::GetFrameTextHeight( const(long))
 * Address: 00239914
 */
TXMonoFrameFormatter::GetFrameTextHeight( const(long)) {
    /*
        239914:	e5900018 	ldr	r0, [r0, #24]	; fField24
        239918:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXMonoFrameFormatter::ForceOverflow(long)
 * Address: 0023991c
 */
TXMonoFrameFormatter::ForceOverflow(long) {
    /*
        23991c:	e3a00000 	mov	r0, #0	; 0x0
        239920:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXMonoFrameFormatter::GetCountFrames( const(void))
 * Address: 00239924
 */
TXMonoFrameFormatter::GetCountFrames( const(void)) {
    /*
        239924:	e3a00001 	mov	r0, #1	; 0x1
        239928:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXMonoFrameFormatter::GetFrameLineRange( const(long, TXOffsetPair *))
 * Address: 00239978
 */
TXMonoFrameFormatter::GetFrameLineRange( const(long, TXOffsetPair *)) {
    /*
        239978:	e3a01000 	mov	r1, #0	; 0x0
        23997c:	e5821000 	str	r1, [r2]
        239980:	e590001c 	ldr	r0, [r0, #28]	; fField28
        239984:	e5a20004 	str	r0, [r2, #4]!
        239988:	e3500000 	cmp	r0, #0	; 0x0
        23998c:	b3a00000 	movlt	r0, #0	; 0x0
        239990:	a3a00001 	movge	r0, #1	; 0x1
        239994:	e20000ff 	and	r0, r0, #255	; 0xff
        239998:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXMonoFrameFormatter::LineToFrame( const(TXOffset))
 * Address: 0023999c
 */
TXMonoFrameFormatter::LineToFrame( const(TXOffset)) {
    /*
        23999c:	e1a0c00d 	mov	ip, sp
        2399a0:	e92dd807 	stmdb	sp!, {r0, r1, r2, fp, ip, lr, pc}
        2399a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2399a8:	e3a00000 	mov	r0, #0	; 0x0
        2399ac:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

