#include "include/TNBPName.h"

/**
 * Symbol: TNBPName::__ct(void)
 * Address: 00127278
 */
TNBPName::TNBPName(void) {
    /*
        127278:	e1a0c00d 	mov	ip, sp
        12727c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        127280:	e24cb004 	sub	fp, ip, #4	; 0x4
        127284:	e1b04000 	movs	r4, r0
        127288:	1a000003 	bne	12729c <TNBPName::__ct(void)+0x24>
        12728c:	e3a00078 	mov	r0, #120	; 0x78
        127290:	eb6a9d28 	bl	1bce738 <$__nw(unsigned int)>
        127294:	e1b04000 	movs	r4, r0
        127298:	0a000008 	beq	1272c0 <TNBPName::__ct(void)+0x48>
        12729c:	e1a00004 	mov	r0, r4
        1272a0:	e3a01001 	mov	r1, #1	; 0x1
        1272a4:	eb6b31c0 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        1272a8:	e284000c 	add	r0, r4, #12	; 0xc
        1272ac:	eb652db1 	bl	1a72978 <TString32::$__ct(void)>
        1272b0:	e2840030 	add	r0, r4, #48	; 0x30
        1272b4:	eb652daf 	bl	1a72978 <TString32::$__ct(void)>
        1272b8:	e2840054 	add	r0, r4, #84	; 0x54
        1272bc:	eb652dad 	bl	1a72978 <TString32::$__ct(void)>
        1272c0:	e1a00004 	mov	r0, r4
        1272c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNBPName::Set(TAddress &, TNBPString &, TNBPString &, TNBPString &)
 * Address: 001272c8
 */
TNBPName::Set(TAddress &, TNBPString &, TNBPString &, TNBPString &) {
    /*
        1272c8:	e1a0c00d 	mov	ip, sp
        1272cc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1272d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1272d4:	e1a04000 	mov	r4, r0
        1272d8:	e1a06002 	mov	r6, r2
        1272dc:	e1a05003 	mov	r5, r3
        1272e0:	e59b7004 	ldr	r7, [fp, #4]
        1272e4:	eb6b31b1 	bl	1bf39b0 <TAddress::$__as(TAddress const &)>
        1272e8:	e284000c 	add	r0, r4, #12	; 0xc
        1272ec:	e1a01006 	mov	r1, r6
        1272f0:	eb652964 	bl	1a71888 <TString32::$__as(TString32 const &)>
        1272f4:	e2840030 	add	r0, r4, #48	; 0x30
        1272f8:	e1a01005 	mov	r1, r5
        1272fc:	eb652961 	bl	1a71888 <TString32::$__as(TString32 const &)>
        127300:	e2840054 	add	r0, r4, #84	; 0x54
        127304:	e1a01007 	mov	r1, r7
        127308:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        12730c:	ea65295d 	b	1a71888 <TString32::$__as(TString32 const &)>
    */
}

