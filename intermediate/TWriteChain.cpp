#include "include/TWriteChain.h"

/**
 * Symbol: TWriteChain::__ct(void)
 * Address: 00277744
 */
TWriteChain::TWriteChain(void) {
    /*
        277744:	e1a0c00d 	mov	ip, sp
        277748:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        27774c:	e24cb004 	sub	fp, ip, #4	; 0x4
        277750:	e3300000 	teq	r0, #0	; 0x0
        277754:	1a000003 	bne	277768 <TWriteChain::__ct(void)+0x24>
        277758:	e3a0000c 	mov	r0, #12	; 0xc
        27775c:	eb655bf5 	bl	1bce738 <$__nw(unsigned int)>
        277760:	e3300000 	teq	r0, #0	; 0x0
        277764:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        277768:	e3a01000 	mov	r1, #0	; 0x0
        27776c:	e5801004 	str	r1, [r0, #4]	; fField4
        277770:	e5801008 	str	r1, [r0, #8]	; fField8
        277774:	e5c01000 	strb	r1, [r0]
        277778:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TWriteChain::Add(TWriteElement *)
 * Address: 0027777c
 */
TWriteChain::Add(TWriteElement *) {
    /*
        27777c:	e5902004 	ldr	r2, [r0, #4]	; fField4
        277780:	e3320000 	teq	r2, #0	; 0x0
        277784:	15812010 	strne	r2, [r1, #16]
        277788:	05801008 	streq	r1, [r0, #8]	; fField8
        27778c:	e5801004 	str	r1, [r0, #4]	; fField4
        277790:	e5a10014 	str	r0, [r1, #20]!
        277794:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWriteChain::RemoveFirst(void)
 * Address: 00277798
 */
TWriteChain::RemoveFirst(void) {
    /*
        277798:	e5901004 	ldr	r1, [r0, #4]	; fField4
        27779c:	e3310000 	teq	r1, #0	; 0x0
        2777a0:	15911010 	ldrne	r1, [r1, #16]
        2777a4:	15a01004 	strne	r1, [r0, #4]!	; fField4
        2777a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWriteChain::Remove(TWriteElement *)
 * Address: 002777ac
 */
TWriteChain::Remove(TWriteElement *) {
    /*
        2777ac:	e3a03000 	mov	r3, #0	; 0x0
        2777b0:	e5902004 	ldr	r2, [r0, #4]	; fField4
        2777b4:	e3320000 	teq	r2, #0	; 0x0
        2777b8:	01a0f00e 	moveq	pc, lr
        2777bc:	e1320001 	teq	r2, r1
        2777c0:	1a00000a 	bne	2777f0 <TWriteChain::Remove(TWriteElement *)+0x44>
        2777c4:	e3330000 	teq	r3, #0	; 0x0
        2777c8:	05b21010 	ldreq	r1, [r2, #16]!
        2777cc:	05801004 	streq	r1, [r0, #4]	; fField4
        2777d0:	05a01008 	streq	r1, [r0, #8]!	; fField8
        2777d4:	01a0f00e 	moveq	pc, lr
        2777d8:	e5921010 	ldr	r1, [r2, #16]
        2777dc:	e5831010 	str	r1, [r3, #16]
        2777e0:	e5901008 	ldr	r1, [r0, #8]	; fField8
        2777e4:	e1310002 	teq	r1, r2
        2777e8:	05a03008 	streq	r3, [r0, #8]!	; fField8
        2777ec:	e1a0f00e 	mov	pc, lr
        2777f0:	e1a03002 	mov	r3, r2
        2777f4:	e5922010 	ldr	r2, [r2, #16]
        2777f8:	e3320000 	teq	r2, #0	; 0x0
        2777fc:	1affffee 	bne	2777bc <TWriteChain::Remove(TWriteElement *)+0x10>
        277800:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWriteChain::AddToEnd(TWriteElement *)
 * Address: 00277818
 */
TWriteChain::AddToEnd(TWriteElement *) {
    /*
        277818:	e5902004 	ldr	r2, [r0, #4]	; fField4
        27781c:	e3320000 	teq	r2, #0	; 0x0
        277820:	15902008 	ldrne	r2, [r0, #8]	; fField8
        277824:	15a21010 	strne	r1, [r2, #16]!
        277828:	e5801008 	str	r1, [r0, #8]	; fField8
        27782c:	05801004 	streq	r1, [r0, #4]	; fField4
        277830:	e5a10014 	str	r0, [r1, #20]!
        277834:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWriteChain::Reset(void)
 * Address: 00277838
 */
TWriteChain::Reset(void) {
    /*
        277838:	e1a0c00d 	mov	ip, sp
        27783c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        277840:	e24cb004 	sub	fp, ip, #4	; 0x4
        277844:	e1a04000 	mov	r4, r0
        277848:	e5905004 	ldr	r5, [r0, #4]	; fField4
        27784c:	e3350000 	teq	r5, #0	; 0x0
        277850:	0a000006 	beq	277870 <TWriteChain::Reset(void)+0x38>
        277854:	e1a00005 	mov	r0, r5
        277858:	e5951000 	ldr	r1, [r5]
        27785c:	e1a0e00f 	mov	lr, pc
        277860:	e281f004 	add	pc, r1, #4	; 0x4
        277864:	e5955010 	ldr	r5, [r5, #16]
        277868:	e3350000 	teq	r5, #0	; 0x0
        27786c:	1afffff8 	bne	277854 <TWriteChain::Reset(void)+0x1c>
        277870:	e1a00004 	mov	r0, r4
        277874:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        277878:	ea6004eb 	b	1a78c2c <TWriteChain::$Destroy(void)>
    */
}

/**
 * Symbol: TWriteChain::Destroy(void)
 * Address: 0027787c
 */
TWriteChain::Destroy(void) {
    /*
        27787c:	e3a01000 	mov	r1, #0	; 0x0
        277880:	e5801008 	str	r1, [r0, #8]	; fField8
        277884:	e5a01004 	str	r1, [r0, #4]!	; fField4
        277888:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TWriteChain::StreamOut(unsigned char *, unsigned long)
 * Address: 0027788c
 */
TWriteChain::StreamOut(unsigned char *, unsigned long) {
    /*
        27788c:	e1a0c00d 	mov	ip, sp
        277890:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        277894:	e24cb004 	sub	fp, ip, #4	; 0x4
        277898:	e1a04002 	mov	r4, r2
        27789c:	e3a02000 	mov	r2, #0	; 0x0
        2778a0:	e3a07000 	mov	r7, #0	; 0x0
        2778a4:	e1a06001 	mov	r6, r1
        2778a8:	e5b05004 	ldr	r5, [r0, #4]!	; fField4
        2778ac:	e3350000 	teq	r5, #0	; 0x0
        2778b0:	0a000018 	beq	277918 <TWriteChain::StreamOut(unsigned char *, unsigned long)+0x8c>
        2778b4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2778b8:	e1a00005 	mov	r0, r5
        2778bc:	e5951000 	ldr	r1, [r5]
        2778c0:	e1a0e00f 	mov	lr, pc
        2778c4:	e281f008 	add	pc, r1, #8	; 0x8
        2778c8:	e1b02000 	movs	r2, r0
        2778cc:	1a000008 	bne	2778f4 <TWriteChain::StreamOut(unsigned char *, unsigned long)+0x68>
        2778d0:	e0443007 	sub	r3, r4, r7
        2778d4:	e1a02006 	mov	r2, r6
        2778d8:	e1a0100d 	mov	r1, sp
        2778dc:	e1a00005 	mov	r0, r5
        2778e0:	e595c000 	ldr	ip, [r5]
        2778e4:	e1a0e00f 	mov	lr, pc
        2778e8:	e28cf00c 	add	pc, ip, #12	; 0xc
        2778ec:	e1b02000 	movs	r2, r0
        2778f0:	0a000001 	beq	2778fc <TWriteChain::StreamOut(unsigned char *, unsigned long)+0x70>
        2778f4:	e28dd004 	add	sp, sp, #4	; 0x4
        2778f8:	ea000006 	b	277918 <TWriteChain::StreamOut(unsigned char *, unsigned long)+0x8c>
        2778fc:	e59d0000 	ldr	r0, [sp]
        277900:	e0877000 	add	r7, r7, r0
        277904:	e0866000 	add	r6, r6, r0
        277908:	e5955010 	ldr	r5, [r5, #16]
        27790c:	e28dd004 	add	sp, sp, #4	; 0x4
        277910:	e3350000 	teq	r5, #0	; 0x0
        277914:	1affffe6 	bne	2778b4 <TWriteChain::StreamOut(unsigned char *, unsigned long)+0x28>
        277918:	e1a00002 	mov	r0, r2
        27791c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TWriteChain::Length(void)
 * Address: 00277920
 */
TWriteChain::Length(void) {
    /*
        277920:	e1a01000 	mov	r1, r0
        277924:	e3a00000 	mov	r0, #0	; 0x0
        277928:	e5911004 	ldr	r1, [r1, #4]	; fField4
        27792c:	e3310000 	teq	r1, #0	; 0x0
        277930:	01a0f00e 	moveq	pc, lr
        277934:	e591200c 	ldr	r2, [r1, #12]
        277938:	e0820000 	add	r0, r2, r0
        27793c:	e5911010 	ldr	r1, [r1, #16]
        277940:	e3310000 	teq	r1, #0	; 0x0
        277944:	1afffffa 	bne	277934 <TWriteChain::Length(void)+0x14>
        277948:	e1a0f00e 	mov	pc, lr
    */
}

