#include "include/TXPageFormatter.h"

/**
 * Symbol: TXPageFormatter::__ct(void)
 * Address: 00242704
 */
TXPageFormatter::TXPageFormatter(void) {
    /*
        242704:	e1a0c00d 	mov	ip, sp
        242708:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        24270c:	e24cb004 	sub	fp, ip, #4	; 0x4
        242710:	e1b04000 	movs	r4, r0
        242714:	1a000003 	bne	242728 <TXPageFormatter::__ct(void)+0x24>
        242718:	e3a00034 	mov	r0, #52	; 0x34
        24271c:	eb663005 	bl	1bce738 <$__nw(unsigned int)>
        242720:	e1b04000 	movs	r4, r0
        242724:	0a000005 	beq	242740 <TXPageFormatter::__ct(void)+0x3c>
        242728:	e1a00004 	mov	r0, r4
        24272c:	eb654cdd 	bl	1b95aa8 <TXMultiFrameFormatter::$__ct(void)>
        242730:	e59f0010 	ldr	r0, [pc, #10]	; 242748 <TXPageFormatter::__ct(void)+0x44>
        242734:	e5840000 	str	r0, [r4]
        242738:	e3a00000 	mov	r0, #0	; 0x0
        24273c:	e5840030 	str	r0, [r4, #48]	; fField48
        242740:	e1a00004 	mov	r0, r4
        242744:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        242748:	0001e31c 	andeq	lr, r1, ip, lsl r3
    */
}

/**
 * Symbol: TXPageFormatter::Format(void)
 * Address: 0024274c
 */
TXPageFormatter::Format(void) {
    /*
        24274c:	e1a0c00d 	mov	ip, sp
        242750:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        242754:	e24cb004 	sub	fp, ip, #4	; 0x4
        242758:	e1a04000 	mov	r4, r0
        24275c:	e5900024 	ldr	r0, [r0, #36]
        242760:	e3a01001 	mov	r1, #1	; 0x1
        242764:	e5902000 	ldr	r2, [r0]
        242768:	e1a0e00f 	mov	lr, pc
        24276c:	e282f008 	add	pc, r2, #8	; 0x8
        242770:	e594001c 	ldr	r0, [r4, #28]	; fField28
        242774:	e2806001 	add	r6, r0, #1	; 0x1
        242778:	e3a05000 	mov	r5, #0	; 0x0
        24277c:	e3560000 	cmp	r6, #0	; 0x0
        242780:	da000023 	ble	242814 <TXPageFormatter::Format(void)+0xc8>
        242784:	e24dd008 	sub	sp, sp, #8	; 0x8
        242788:	e5940030 	ldr	r0, [r4, #48]	; fField48
        24278c:	e3a03000 	mov	r3, #0	; 0x0
        242790:	e58d0004 	str	r0, [sp, #4]
        242794:	e92d0008 	stmdb	sp!, {r3}
        242798:	e1a02005 	mov	r2, r5
        24279c:	e28d1008 	add	r1, sp, #8	; 0x8
        2427a0:	e1a00004 	mov	r0, r4
        2427a4:	eb652bc7 	bl	1b8d6c8 <$PixelToLine__14TXLinesHeightsCFPllPP17TXLineHeightGroupT1>
        2427a8:	e5ad0004 	str	r0, [sp, #4]!
        2427ac:	e1300005 	teq	r0, r5
        2427b0:	1a000004 	bne	2427c8 <TXPageFormatter::Format(void)+0x7c>
        2427b4:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2427b8:	e58d0004 	str	r0, [sp, #4]
        2427bc:	e59d0000 	ldr	r0, [sp]
        2427c0:	e2800001 	add	r0, r0, #1	; 0x1
        2427c4:	e58d0000 	str	r0, [sp]
        2427c8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2427cc:	e3300000 	teq	r0, #0	; 0x0
        2427d0:	0a000004 	beq	2427e8 <TXPageFormatter::Format(void)+0x9c>
        2427d4:	e28d3004 	add	r3, sp, #4	; 0x4
        2427d8:	e1a0200d 	mov	r2, sp
        2427dc:	e1a01005 	mov	r1, r5
        2427e0:	e1a00004 	mov	r0, r4
        2427e4:	eb654cc4 	bl	1b95afc <TXMultiFrameFormatter::$CheckFrameBreaks(long, long *, long *)>
        2427e8:	e1a00004 	mov	r0, r4
        2427ec:	e59d1004 	ldr	r1, [sp, #4]
        2427f0:	e59d2000 	ldr	r2, [sp]
        2427f4:	e5943000 	ldr	r3, [r4]
        2427f8:	e1a0e00f 	mov	lr, pc
        2427fc:	e283f064 	add	pc, r3, #100	; 0x64
        242800:	e3300000 	teq	r0, #0	; 0x0
        242804:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        242808:	e49d5008 	ldr	r5, [sp], #8
        24280c:	e1550006 	cmp	r5, r6
        242810:	baffffdb 	blt	242784 <TXPageFormatter::Format(void)+0x38>
        242814:	e3a00000 	mov	r0, #0	; 0x0
        242818:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXPageFormatter::SetFrameHeight(long, long)
 * Address: 0024281c
 */
TXPageFormatter::SetFrameHeight(long, long) {
    /*
        24281c:	e5a02030 	str	r2, [r0, #48]!	; fField48
        242820:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXPageFormatter::GetFrameHeight( const(long))
 * Address: 00242824
 */
TXPageFormatter::GetFrameHeight( const(long)) {
    /*
        242824:	e5900030 	ldr	r0, [r0, #48]	; fField48
        242828:	e1a0f00e 	mov	pc, lr
    */
}

