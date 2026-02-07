#include "include/TRTMPTableEntry.h"

/**
 * Symbol: TRTMPTableEntry::__ct(void)
 * Address: 0019bac4
 */
TRTMPTableEntry::TRTMPTableEntry(void) {
    /*
        19bac4:	e1a0c00d 	mov	ip, sp
        19bac8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        19bacc:	e24cb004 	sub	fp, ip, #4	; 0x4
        19bad0:	e1b04000 	movs	r4, r0
        19bad4:	1a000003 	bne	19bae8 <TRTMPTableEntry::__ct(void)+0x24>
        19bad8:	e3a00058 	mov	r0, #88	; 0x58
        19badc:	eb68cb15 	bl	1bce738 <$__nw(unsigned int)>
        19bae0:	e1b04000 	movs	r4, r0
        19bae4:	0a000004 	beq	19bafc <TRTMPTableEntry::__ct(void)+0x38>
        19bae8:	e1a00004 	mov	r0, r4
        19baec:	e3a01001 	mov	r1, #1	; 0x1
        19baf0:	eb695fad 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
        19baf4:	e284001c 	add	r0, r4, #28	; 0x1c
        19baf8:	eb635772 	bl	1a718c8 <TMessageTimer::$__ct(void)>
        19bafc:	e1a00004 	mov	r0, r4
        19bb00:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TRTMPTableEntry::__dt(void)
 * Address: 0019bbf0
 */
TRTMPTableEntry::~TRTMPTableEntry(void) {
    /*
        19bbf0:	e1a0c00d 	mov	ip, sp
        19bbf4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19bbf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        19bbfc:	e1a04000 	mov	r4, r0
        19bc00:	e1a05001 	mov	r5, r1
        19bc04:	e280001c 	add	r0, r0, #28	; 0x1c
        19bc08:	e3a01000 	mov	r1, #0	; 0x0
        19bc0c:	eb68cabf 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        19bc10:	e3150001 	tst	r5, #1	; 0x1
        19bc14:	11a00004 	movne	r0, r4
        19bc18:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        19bc1c:	1a68c6af 	bne	1bcd6e0 <$__dl(void *)>
        19bc20:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TRTMPTableEntry::Init(TLink *)
 * Address: 0019bc24
 */
TRTMPTableEntry::Init(TLink *) {
    /*
        19bc24:	e1a0c00d 	mov	ip, sp
        19bc28:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19bc2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        19bc30:	e1a04000 	mov	r4, r0
        19bc34:	e5801014 	str	r1, [r0, #20]	; fField20
        19bc38:	e5910014 	ldr	r0, [r1, #20]	; fField20
        19bc3c:	e3a03000 	mov	r3, #0	; 0x0
        19bc40:	e5840018 	str	r0, [r4, #24]	; fField24
        19bc44:	e92d0008 	stmdb	sp!, {r3}
        19bc48:	e1a00004 	mov	r0, r4
        19bc4c:	e3a02000 	mov	r2, #0	; 0x0
        19bc50:	e3a01000 	mov	r1, #0	; 0x0
        19bc54:	eb695f61 	bl	1bf39e0 <TAddress::$SetAddress(unsigned long, unsigned short, unsigned char, unsigned char)>
        19bc58:	e28dd004 	add	sp, sp, #4	; 0x4
        19bc5c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        19bc60:	e5900020 	ldr	r0, [r0, #32]
        19bc64:	e5840004 	str	r0, [r4, #4]	; fField4
        19bc68:	e3a00000 	mov	r0, #0	; 0x0
        19bc6c:	e584000c 	str	r0, [r4, #12]	; fField12
        19bc70:	e3a00801 	mov	r0, #65536	; 0x10000
        19bc74:	e2400002 	sub	r0, r0, #2	; 0x2
        19bc78:	e5840010 	str	r0, [r4, #16]	; fField16
        19bc7c:	e284001c 	add	r0, r4, #28	; 0x1c
        19bc80:	e1a05000 	mov	r5, r0
        19bc84:	eb6390e0 	bl	1a8000c <TMessageTimer::$Stop(void)>
        19bc88:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        19bc8c:	e3a02007 	mov	r2, #7	; 0x7
        19bc90:	e3a019e1 	mov	r1, #3686400	; 0x384000
        19bc94:	e5b03020 	ldr	r3, [r0, #32]!
        19bc98:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        19bc9c:	eb68df4c 	bl	1bd39d4 <$GetGlobals>
        19bca0:	eb6931e5 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        19bca4:	e1a01000 	mov	r1, r0
        19bca8:	e1a00005 	mov	r0, r5
        19bcac:	e3a03032 	mov	r3, #50	; 0x32
        19bcb0:	e59f2004 	ldr	r2, [pc, #4]	; 19bcbc <TRTMPTableEntry::Init(TLink *)+0x98>	; fField4
        19bcb4:	eb63803e 	bl	1a7bdb4 <TMessageTimer::$Init(TUPort *, unsigned long, unsigned long, TimeUnits, TimerType, unsigned long)>
        19bcb8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        19bcbc:	72746d70 	rsbvcs	r6, r4, #7168	; 0x1c00
    */
}

/**
 * Symbol: TRTMPTableEntry::DoNonExtended(TRTMPHeader *)
 * Address: 0019bcc0
 */
TRTMPTableEntry::DoNonExtended(TRTMPHeader *) {
    /*
        19bcc0:	e1a0c00d 	mov	ip, sp
        19bcc4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        19bcc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        19bccc:	e1a04000 	mov	r4, r0
        19bcd0:	e1a05001 	mov	r5, r1
        19bcd4:	e5910000 	ldr	r0, [r1]
        19bcd8:	e2001cff 	and	r1, r0, #65280	; 0xff00
        19bcdc:	e3310b02 	teq	r1, #2048	; 0x800
        19bce0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        19bce4:	e1a01820 	mov	r1, r0, lsr #16
        19bce8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        19bcec:	eb6390ac 	bl	1a7ffa4 <TLink::$SetNetwork(unsigned short)>
        19bcf0:	e5950000 	ldr	r0, [r5]
        19bcf4:	e20020ff 	and	r2, r0, #255	; 0xff
        19bcf8:	e1a01820 	mov	r1, r0, lsr #16
        19bcfc:	e1a00004 	mov	r0, r4
        19bd00:	eb6390a4 	bl	1a7ff98 <TAddress::$SetAddress(unsigned short, unsigned char)>
        19bd04:	e284001c 	add	r0, r4, #28	; 0x1c
        19bd08:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        19bd0c:	ea638c8d 	b	1a7ef48 <TMessageTimer::$Reset(void)>
    */
}

/**
 * Symbol: TRTMPTableEntry::DoExtended(TRTMPHeader *, TExtNetworkTuple *)
 * Address: 0019bd10
 */
TRTMPTableEntry::DoExtended(TRTMPHeader *, TExtNetworkTuple *) {
    /*
        19bd10:	e1a0c00d 	mov	ip, sp
        19bd14:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        19bd18:	e24cb004 	sub	fp, ip, #4	; 0x4
        19bd1c:	e1a04000 	mov	r4, r0
        19bd20:	e1a00001 	mov	r0, r1
        19bd24:	e5921000 	ldr	r1, [r2]
        19bd28:	e1a06821 	mov	r6, r1, lsr #16
        19bd2c:	e20130ff 	and	r3, r1, #255	; 0xff
        19bd30:	e1a03403 	mov	r3, r3, lsl #8
        19bd34:	e5922004 	ldr	r2, [r2, #4]	; fField4
        19bd38:	e0835c22 	add	r5, r3, r2, lsr #24
        19bd3c:	e20238ff 	and	r3, r2, #16711680	; 0xff0000
        19bd40:	e3330882 	teq	r3, #8519680	; 0x820000
        19bd44:	05902000 	ldreq	r2, [r0]
        19bd48:	02023cff 	andeq	r3, r2, #65280	; 0xff00
        19bd4c:	03330b02 	teqeq	r3, #2048	; 0x800
        19bd50:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        19bd54:	e3110902 	tst	r1, #32768	; 0x8000
        19bd58:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        19bd5c:	e594100c 	ldr	r1, [r4, #12]	; fField12
        19bd60:	e3310000 	teq	r1, #0	; 0x0
        19bd64:	0a000005 	beq	19bd80 <TRTMPTableEntry::DoExtended(TRTMPHeader *, TExtNetworkTuple *)+0x70>
        19bd68:	e5941014 	ldr	r1, [r4, #20]	; fField20
        19bd6c:	e591101e 	ldr	r1, [r1, #30]
        19bd70:	e1a01821 	mov	r1, r1, lsr #16
        19bd74:	e1510006 	cmp	r1, r6
        19bd78:	21510005 	cmpcs	r1, r5
        19bd7c:	391ba870 	ldmccdb	fp, {r4, r5, r6, fp, sp, pc}
        19bd80:	e5845010 	str	r5, [r4, #16]	; fField16
        19bd84:	e584600c 	str	r6, [r4, #12]	; fField12
        19bd88:	e5900000 	ldr	r0, [r0]
        19bd8c:	e20020ff 	and	r2, r0, #255	; 0xff
        19bd90:	e1a01820 	mov	r1, r0, lsr #16
        19bd94:	e1a00004 	mov	r0, r4
        19bd98:	eb63907e 	bl	1a7ff98 <TAddress::$SetAddress(unsigned short, unsigned char)>
        19bd9c:	e284001c 	add	r0, r4, #28	; 0x1c
        19bda0:	eb638c68 	bl	1a7ef48 <TMessageTimer::$Reset(void)>
        19bda4:	e1a02005 	mov	r2, r5
        19bda8:	e1a01006 	mov	r1, r6
        19bdac:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        19bdb0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        19bdb4:	ea63a952 	b	1a86304 <TLink::$SetNetwork(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TRTMPTableEntry::GleanHeader(TRTMPHeader *, TExtNetworkTuple *)
 * Address: 0019bdb8
 */
TRTMPTableEntry::GleanHeader(TRTMPHeader *, TExtNetworkTuple *) {
    /*
        19bdb8:	e5903014 	ldr	r3, [r0, #20]	; fField20
        19bdbc:	e3330000 	teq	r3, #0	; 0x0
        19bdc0:	01a0f00e 	moveq	pc, lr
        19bdc4:	e5903018 	ldr	r3, [r0, #24]	; fField24
        19bdc8:	e3330001 	teq	r3, #1	; 0x1
        19bdcc:	0a6377ae 	beq	1a79c8c <TRTMPTableEntry::$DoNonExtended(TRTMPHeader *)>
        19bdd0:	e3330002 	teq	r3, #2	; 0x2
        19bdd4:	0a6377a9 	beq	1a79c80 <TRTMPTableEntry::$DoExtended(TRTMPHeader *, TExtNetworkTuple *)>
        19bdd8:	e1a0f00e 	mov	pc, lr
    */
}

