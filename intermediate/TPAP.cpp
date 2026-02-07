#include "include/TPAP.h"

/**
 * Symbol: TPAP::__ct(void)
 * Address: 00150ce4
 */
TPAP::TPAP(void) {
    /*
        150ce4:	e1a0c00d 	mov	ip, sp
        150ce8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        150cec:	e24cb004 	sub	fp, ip, #4	; 0x4
        150cf0:	e1b04000 	movs	r4, r0
        150cf4:	1a000003 	bne	150d08 <TPAP::__ct(void)+0x24>
        150cf8:	e3a00018 	mov	r0, #24	; 0x18
        150cfc:	eb69f68d 	bl	1bce738 <$__nw(unsigned int)>
        150d00:	e1b04000 	movs	r4, r0
        150d04:	0a000003 	beq	150d18 <TPAP::__ct(void)+0x34>
        150d08:	e1a00004 	mov	r0, r4
        150d0c:	eb6482e7 	bl	1a718b0 <TStackObject::$__ct(void)>
        150d10:	e59f0008 	ldr	r0, [pc, #8]	; 150d20 <TPAP::__ct(void)+0x3c>
        150d14:	e5840000 	str	r0, [r4]
        150d18:	e1a00004 	mov	r0, r4
        150d1c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        150d20:	0001f608 	andeq	pc, r1, r8, lsl #12
    */
}

/**
 * Symbol: TPAP::Init(void)
 * Address: 001527ec
 */
TPAP::Init(void) {
    /*
        1527ec:	e59f2004 	ldr	r2, [pc, #4]	; 1527f8 <TPAP::Init(void)+0xc>
        1527f0:	e59f1004 	ldr	r1, [pc, #4]	; 1527fc <TPAP::Init(void)+0x10>
        1527f4:	ea64a56b 	b	1a7bda8 <TStackObject::$Init(unsigned long, unsigned long)>
        1527f8:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1527fc:	70617020 	rsbvc	r7, r1, r0, lsr #32
    */
}

/**
 * Symbol: TPAP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)
 * Address: 00152800
 */
TPAP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *) {
    /*
        152800:	e1a01003 	mov	r1, r3
        152804:	e5932010 	ldr	r2, [r3, #16]
        152808:	e3320c06 	teq	r2, #1536	; 0x600
        15280c:	0a649d37 	beq	1a79cf0 <TPAP::$GetConnectionId(TGetConnectionIdMessage *)>
        152810:	13a00f99 	movne	r0, #612	; 0x264
        152814:	12400b0d 	subne	r0, r0, #13312	; 0x3400
        152818:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPAP::GetConnectionId(TGetConnectionIdMessage *)
 * Address: 0015281c
 */
TPAP::GetConnectionId(TGetConnectionIdMessage *) {
    /*
        15281c:	e1a0c00d 	mov	ip, sp
        152820:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        152824:	e24cb004 	sub	fp, ip, #4	; 0x4
        152828:	e59f002c 	ldr	r0, [pc, #2c]	; 15285c <TPAP::GetConnectionId(TGetConnectionIdMessage *)+0x40>
        15282c:	e5d02000 	ldrb	r2, [r0]
        152830:	e33200ff 	teq	r2, #255	; 0xff
        152834:	12822001 	addne	r2, r2, #1	; 0x1
        152838:	03a02001 	moveq	r2, #1	; 0x1
        15283c:	e5c02000 	strb	r2, [r0]
        152840:	e5d00000 	ldrb	r0, [r0]
        152844:	e5c10014 	strb	r0, [r1, #20]	; fField20
        152848:	eb6a0461 	bl	1bd39d4 <$GetGlobals>
        15284c:	e3a01018 	mov	r1, #24	; 0x18
        152850:	eb6a4eb2 	bl	1be6320 <TAppWorld::$AESetReply(unsigned long)>
        152854:	e3a00000 	mov	r0, #0	; 0x0
        152858:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        15285c:	0c1016ac 	ldceq	6, cr1, [r0], -#688
    */
}

/**
 * Symbol: TPAP::ATLKAttachLink(TAppleTalkMessage *)
 * Address: 00152860
 */
TPAP::ATLKAttachLink(TAppleTalkMessage *) {
    /*
        152860:	e3a00000 	mov	r0, #0	; 0x0
        152864:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPAP::ATLKDetachLink(TAppleTalkMessage *)
 * Address: 00152868
 */
TPAP::ATLKDetachLink(TAppleTalkMessage *) {
    /*
        152868:	e3a00000 	mov	r0, #0	; 0x0
        15286c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPAP::ATLKOpen(TAppleTalkMessage *)
 * Address: 00152870
 */
TPAP::ATLKOpen(TAppleTalkMessage *) {
    /*
        152870:	e3a01000 	mov	r1, #0	; 0x0
        152874:	e5902014 	ldr	r2, [r0, #20]	; fField20
        152878:	e2822001 	add	r2, r2, #1	; 0x1
        15287c:	e5a02014 	str	r2, [r0, #20]!	; fField20
        152880:	e1a00001 	mov	r0, r1
        152884:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPAP::ATLKClose(TAppleTalkMessage *)
 * Address: 00152888
 */
TPAP::ATLKClose(TAppleTalkMessage *) {
    /*
        152888:	e3a01000 	mov	r1, #0	; 0x0
        15288c:	e5902014 	ldr	r2, [r0, #20]	; fField20
        152890:	e2422001 	sub	r2, r2, #1	; 0x1
        152894:	e5a02014 	str	r2, [r0, #20]!	; fField20
        152898:	e1a00001 	mov	r0, r1
        15289c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPAP::ATLKShutDown(TAppleTalkMessage *)
 * Address: 001528a0
 */
TPAP::ATLKShutDown(TAppleTalkMessage *) {
    /*
        1528a0:	e3a00000 	mov	r0, #0	; 0x0
        1528a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPAP::ATLKSocketClosed(TAppleTalkMessage *)
 * Address: 001528a8
 */
TPAP::ATLKSocketClosed(TAppleTalkMessage *) {
    /*
        1528a8:	e3a00000 	mov	r0, #0	; 0x0
        1528ac:	e1a0f00e 	mov	pc, lr
    */
}

