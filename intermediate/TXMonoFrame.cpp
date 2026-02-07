#include "include/TXMonoFrame.h"

/**
 * Symbol: TXMonoFrame::__ct(void)
 * Address: 0023a9dc
 */
TXMonoFrame::TXMonoFrame(void) {
    /*
        23a9dc:	e1a0c00d 	mov	ip, sp
        23a9e0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        23a9e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        23a9e8:	e1b04000 	movs	r4, r0
        23a9ec:	1a000003 	bne	23aa00 <TXMonoFrame::__ct(void)+0x24>
        23a9f0:	e3a00030 	mov	r0, #48	; 0x30
        23a9f4:	eb664f4f 	bl	1bce738 <$__nw(unsigned int)>
        23a9f8:	e1b04000 	movs	r4, r0
        23a9fc:	0a000006 	beq	23aa1c <TXMonoFrame::__ct(void)+0x40>
        23aa00:	e1a00004 	mov	r0, r4
        23aa04:	eb65536d 	bl	1b8f7c0 <TXMonoSizeFrames::$__ct(void)>
        23aa08:	e59f0014 	ldr	r0, [pc, #14]	; 23aa24 <TXMonoFrame::__ct(void)+0x48>
        23aa0c:	e5840000 	str	r0, [r4]
        23aa10:	e3a00000 	mov	r0, #0	; 0x0
        23aa14:	eb654f43 	bl	1b8e728 <TXMonoFrameFormatter::$__ct(void)>
        23aa18:	e5840004 	str	r0, [r4, #4]	; fField4
        23aa1c:	e1a00004 	mov	r0, r4
        23aa20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        23aa24:	0001b7e4 	andeq	fp, r1, r4, ror #15
    */
}

/**
 * Symbol: TXMonoFrame::PointToNearestFrame( const(TXLongPoint const &))
 * Address: 0023aa28
 */
TXMonoFrame::PointToNearestFrame( const(TXLongPoint const &)) {
    /*
        23aa28:	e3a00000 	mov	r0, #0	; 0x0
        23aa2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXMonoFrame::SectFrames( const(Rect const &, TXSectFrames *))
 * Address: 0023aa30
 */
TXMonoFrame::SectFrames( const(Rect const &, TXSectFrames *)) {
    /*
        23aa30:	e1a0c00d 	mov	ip, sp
        23aa34:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        23aa38:	e24cb004 	sub	fp, ip, #4	; 0x4
        23aa3c:	e1a00002 	mov	r0, r2
        23aa40:	e3a03001 	mov	r3, #1	; 0x1
        23aa44:	e92d0008 	stmdb	sp!, {r3}
        23aa48:	e3a03000 	mov	r3, #0	; 0x0
        23aa4c:	e3a02001 	mov	r2, #1	; 0x1
        23aa50:	e3a01000 	mov	r1, #0	; 0x0
        23aa54:	eb654f42 	bl	1b8e764 <TXSectFrames::$SetUniform(long, long, long, long)>
        23aa58:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXMonoFrame::SetTextBoundsSize(TXLongPoint const &, TXDisplayChanges *, long)
 * Address: 0023aa5c
 */
TXMonoFrame::SetTextBoundsSize(TXLongPoint const &, TXDisplayChanges *, long) {
    /*
        23aa5c:	e1a0c00d 	mov	ip, sp
        23aa60:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        23aa64:	e24cb004 	sub	fp, ip, #4	; 0x4
        23aa68:	e24dd008 	sub	sp, sp, #8	; 0x8
        23aa6c:	e591c004 	ldr	ip, [r1, #4]	; fField4
        23aa70:	e58dc004 	str	ip, [sp, #4]	; fField4
        23aa74:	e591c000 	ldr	ip, [r1]
        23aa78:	e58dc000 	str	ip, [sp]
        23aa7c:	e591c000 	ldr	ip, [r1]
        23aa80:	e33c0000 	teq	ip, #0	; 0x0
        23aa84:	1a000003 	bne	23aa98 <TXMonoFrame::SetTextBoundsSize(TXLongPoint const &, TXDisplayChanges *, long)+0x3c>
        23aa88:	e5911004 	ldr	r1, [r1, #4]	; fField4
        23aa8c:	e58d1004 	str	r1, [sp, #4]	; fField4
        23aa90:	e3a01101 	mov	r1, #1073741824	; 0x40000000
        23aa94:	e58d1000 	str	r1, [sp]
        23aa98:	e1a0100d 	mov	r1, sp
        23aa9c:	eb655348 	bl	1b8f7c4 <TXMonoSizeFrames::$SetTextBoundsSize(TXLongPoint const &, TXDisplayChanges *, long)>
        23aaa0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXMonoFrame::GetTotalHeight( const(void))
 * Address: 0023aaa4
 */
TXMonoFrame::GetTotalHeight( const(void)) {
    /*
        23aaa4:	e1a0c00d 	mov	ip, sp
        23aaa8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23aaac:	e24cb004 	sub	fp, ip, #4	; 0x4
        23aab0:	e1a04000 	mov	r4, r0
        23aab4:	e24dd008 	sub	sp, sp, #8	; 0x8
        23aab8:	e1a0100d 	mov	r1, sp
        23aabc:	e5902000 	ldr	r2, [r0]
        23aac0:	e1a0e00f 	mov	lr, pc
        23aac4:	e282f018 	add	pc, r2, #24	; 0x18
        23aac8:	e24dd010 	sub	sp, sp, #16	; 0x10
        23aacc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        23aad0:	e5900018 	ldr	r0, [r0, #24]
        23aad4:	e59d2014 	ldr	r2, [sp, #20]
        23aad8:	e1a02842 	mov	r2, r2, asr #16
        23aadc:	e59d1010 	ldr	r1, [sp, #16]
        23aae0:	e0821841 	add	r1, r2, r1, asr #16
        23aae4:	e0805001 	add	r5, r0, r1
        23aae8:	e1a0200d 	mov	r2, sp
        23aaec:	e1a00004 	mov	r0, r4
        23aaf0:	e3a01000 	mov	r1, #0	; 0x0
        23aaf4:	eb655323 	bl	1b8f788 <TXFrames::$GetAbsFrameBounds( const(long, TXLongRect *))>
        23aaf8:	e59d0008 	ldr	r0, [sp, #8]
        23aafc:	e59d1000 	ldr	r1, [sp]
        23ab00:	e0400001 	sub	r0, r0, r1
        23ab04:	e3500101 	cmp	r0, #1073741824	; 0x40000000
        23ab08:	aa000001 	bge	23ab14 <TXMonoFrame::GetTotalHeight( const(void))+0x70>
        23ab0c:	e1550000 	cmp	r5, r0
        23ab10:	da000000 	ble	23ab18 <TXMonoFrame::GetTotalHeight( const(void))+0x74>
        23ab14:	e1a00005 	mov	r0, r5
        23ab18:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXMonoFrame::GetTotalWidth( const(void))
 * Address: 0023ab1c
 */
TXMonoFrame::GetTotalWidth( const(void)) {
    /*
        23ab1c:	e1a0c00d 	mov	ip, sp
        23ab20:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        23ab24:	e24cb004 	sub	fp, ip, #4	; 0x4
        23ab28:	e24dd010 	sub	sp, sp, #16	; 0x10
        23ab2c:	e1a0200d 	mov	r2, sp
        23ab30:	e3a01000 	mov	r1, #0	; 0x0
        23ab34:	eb655313 	bl	1b8f788 <TXFrames::$GetAbsFrameBounds( const(long, TXLongRect *))>
        23ab38:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        23ab3c:	e59d100c 	ldr	r1, [sp, #12]
        23ab40:	e0410000 	sub	r0, r1, r0
        23ab44:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

