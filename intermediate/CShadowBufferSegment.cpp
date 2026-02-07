#include "include/CShadowBufferSegment.h"

/**
 * Symbol: CShadowBufferSegment::__ct(void)
 * Address: 001de9f4
 */
CShadowBufferSegment::CShadowBufferSegment(void) {
    /*
        1de9f4:	e1a0c00d 	mov	ip, sp
        1de9f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1de9fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dea00:	e1b04000 	movs	r4, r0
        1dea04:	1a000003 	bne	1dea18 <CShadowBufferSegment::__ct(void)+0x24>
        1dea08:	e3a0001c 	mov	r0, #28	; 0x1c
        1dea0c:	eb67bf49 	bl	1bce738 <$__nw(unsigned int)>
        1dea10:	e1b04000 	movs	r4, r0
        1dea14:	0a00000d 	beq	1dea50 <CShadowBufferSegment::__ct(void)+0x5c>
        1dea18:	e1a00004 	mov	r0, r4
        1dea1c:	eb681604 	bl	1be4234 <CBuffer::$__ct(void)>
        1dea20:	e3a05000 	mov	r5, #0	; 0x0
        1dea24:	e5c45018 	strb	r5, [r4, #24]
        1dea28:	e5845014 	str	r5, [r4, #20]
        1dea2c:	e59f0024 	ldr	r0, [pc, #24]	; 1dea58 <CShadowBufferSegment::__ct(void)+0x64>
        1dea30:	e5840000 	str	r0, [r4]
        1dea34:	e2840014 	add	r0, r4, #20	; 0x14
        1dea38:	e1a01005 	mov	r1, r5
        1dea3c:	eb67c781 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        1dea40:	e5845010 	str	r5, [r4, #16]	; fField16
        1dea44:	e5845004 	str	r5, [r4, #4]	; fField4
        1dea48:	e5845008 	str	r5, [r4, #8]	; fField8
        1dea4c:	e584500c 	str	r5, [r4, #12]	; fField12
        1dea50:	e1a00004 	mov	r0, r4
        1dea54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1dea58:	0001ef98 	muleq	r1, r8, pc
    */
}

/**
 * Symbol: CShadowBufferSegment::__dt(void)
 * Address: 001dea5c
 */
CShadowBufferSegment::~CShadowBufferSegment(void) {
    /*
        1dea5c:	e1a0c00d 	mov	ip, sp
        1dea60:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1dea64:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dea68:	e1a04000 	mov	r4, r0
        1dea6c:	e1a05001 	mov	r5, r1
        1dea70:	e59f002c 	ldr	r0, [pc, #2c]	; 1deaa4 <CShadowBufferSegment::__dt(void)+0x48>
        1dea74:	e5840000 	str	r0, [r4]
        1dea78:	e2840014 	add	r0, r4, #20	; 0x14
        1dea7c:	e3a01000 	mov	r1, #0	; 0x0
        1dea80:	eb67bf27 	bl	1bce724 <TUObject::$__dt(void)>
        1dea84:	e1a00004 	mov	r0, r4
        1dea88:	e3a01000 	mov	r1, #0	; 0x0
        1dea8c:	eb6819fe 	bl	1be528c <CBuffer::$__dt(void)>
        1dea90:	e3150001 	tst	r5, #1	; 0x1
        1dea94:	11a00004 	movne	r0, r4
        1dea98:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1dea9c:	1a67bb0f 	bne	1bcd6e0 <$__dl(void *)>
        1deaa0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1deaa4:	0001ef98 	muleq	r1, r8, pc
    */
}

/**
 * Symbol: CShadowBufferSegment::CopyOut(unsigned char *, long &)
 * Address: 001deaa8
 */
CShadowBufferSegment::CopyOut(unsigned char *, long &) {
    /*
        1deaa8:	e1a0c00d 	mov	ip, sp
        1deaac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1deab0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1deab4:	e1a04000 	mov	r4, r0
        1deab8:	e1a05002 	mov	r5, r2
        1deabc:	e5922000 	ldr	r2, [r2]
        1deac0:	e5903000 	ldr	r3, [r0]
        1deac4:	e1a0e00f 	mov	lr, pc
        1deac8:	e283f014 	add	pc, r3, #20	; 0x14
        1deacc:	e5951000 	ldr	r1, [r5]
        1dead0:	e0410000 	sub	r0, r1, r0
        1dead4:	e5850000 	str	r0, [r5]
        1dead8:	e2844004 	add	r4, r4, #4	; 0x4
        1deadc:	e9b40003 	ldmib	r4!, {r0, r1}
        1deae0:	e1300001 	teq	r0, r1
        1deae4:	13a00000 	movne	r0, #0	; 0x0
        1deae8:	03e00000 	mvneq	r0, #0	; 0x0
        1deaec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowBufferSegment::Put(int)
 * Address: 001deaf0
 */
CShadowBufferSegment::Put(int) {
    /*
        1deaf0:	e2803008 	add	r3, r0, #8	; 0x8
        1deaf4:	e893000c 	ldmia	r3, {r2, r3}
        1deaf8:	e1520003 	cmp	r2, r3
        1deafc:	b2823001 	addlt	r3, r2, #1	; 0x1
        1deb00:	b5803008 	strlt	r3, [r0, #8]	; fField8
        1deb04:	ba6715da 	blt	1ba4274 <CShadowBufferSegment::$PutByteAt(int, long)>
        1deb08:	a3e00000 	mvnge	r0, #0	; 0x0
        1deb0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowBufferSegment::Putn(unsigned char const *, long)
 * Address: 001deb10
 */
CShadowBufferSegment::Putn(unsigned char const *, long) {
    /*
        1deb10:	e1a0c00d 	mov	ip, sp
        1deb14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1deb18:	e24cb004 	sub	fp, ip, #4	; 0x4
        1deb1c:	e1a05000 	mov	r5, r0
        1deb20:	e1a04002 	mov	r4, r2
        1deb24:	e2802008 	add	r2, r0, #8	; 0x8
        1deb28:	e8920005 	ldmia	r2, {r0, r2}
        1deb2c:	e0422000 	sub	r2, r2, r0
        1deb30:	e1540002 	cmp	r4, r2
        1deb34:	b1a02004 	movlt	r2, r4
        1deb38:	e1a04002 	mov	r4, r2
        1deb3c:	e3a03000 	mov	r3, #0	; 0x0
        1deb40:	e92d0008 	stmdb	sp!, {r3}
        1deb44:	e1a03000 	mov	r3, r0
        1deb48:	e2850014 	add	r0, r5, #20	; 0x14
        1deb4c:	eb67c743 	bl	1bd0860 <TUSharedMem::$CopyToShared(void *, unsigned long, unsigned long, TUMsgToken *)>
        1deb50:	e5950008 	ldr	r0, [r5, #8]	; fField8
        1deb54:	e0800004 	add	r0, r0, r4
        1deb58:	e5a50008 	str	r0, [r5, #8]!	; fField8
        1deb5c:	e1a00004 	mov	r0, r4
        1deb60:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowBufferSegment::CopyIn(unsigned char const *, long &)
 * Address: 001deb64
 */
CShadowBufferSegment::CopyIn(unsigned char const *, long &) {
    /*
        1deb64:	e1a0c00d 	mov	ip, sp
        1deb68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1deb6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1deb70:	e1a04000 	mov	r4, r0
        1deb74:	e1a05002 	mov	r5, r2
        1deb78:	e5922000 	ldr	r2, [r2]
        1deb7c:	e5903000 	ldr	r3, [r0]
        1deb80:	e1a0e00f 	mov	lr, pc
        1deb84:	e283f020 	add	pc, r3, #32	; 0x20
        1deb88:	e5951000 	ldr	r1, [r5]
        1deb8c:	e0410000 	sub	r0, r1, r0
        1deb90:	e5850000 	str	r0, [r5]
        1deb94:	e2844004 	add	r4, r4, #4	; 0x4
        1deb98:	e9b40003 	ldmib	r4!, {r0, r1}
        1deb9c:	e1300001 	teq	r0, r1
        1deba0:	13a00000 	movne	r0, #0	; 0x0
        1deba4:	03e00000 	mvneq	r0, #0	; 0x0
        1deba8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowBufferSegment::Reset(void)
 * Address: 001debac
 */
CShadowBufferSegment::Reset(void) {
    /*
        1debac:	e3a01000 	mov	r1, #0	; 0x0
        1debb0:	e5801008 	str	r1, [r0, #8]	; fField8
        1debb4:	e5801004 	str	r1, [r0, #4]	; fField4
        1debb8:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1debbc:	e5a0100c 	str	r1, [r0, #12]!	; fField12
        1debc0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowBufferSegment::Hide(long, int)
 * Address: 001debc4
 */
CShadowBufferSegment::Hide(long, int) {
    /*
        1debc4:	e1a03000 	mov	r3, r0
        1debc8:	e1b00001 	movs	r0, r1
        1debcc:	e3a0c000 	mov	ip, #0	; 0x0
        1debd0:	01a0000c 	moveq	r0, ip
        1debd4:	01a0f00e 	moveq	pc, lr
        1debd8:	e3720001 	cmn	r2, #1	; 0x1
        1debdc:	0a00000f 	beq	1dec20 <CShadowBufferSegment::Hide(long, int)+0x5c>
        1debe0:	e3320001 	teq	r2, #1	; 0x1
        1debe4:	13a00000 	movne	r0, #0	; 0x0
        1debe8:	11a0f00e 	movne	pc, lr
        1debec:	e593100c 	ldr	r1, [r3, #12]	; fField12
        1debf0:	e0511000 	subs	r1, r1, r0
        1debf4:	e583100c 	str	r1, [r3, #12]	; fField12
        1debf8:	40810000 	addmi	r0, r1, r0
        1debfc:	4583c00c 	strmi	ip, [r3, #12]	; fField12
        1dec00:	4a000004 	bmi	1dec18 <CShadowBufferSegment::Hide(long, int)+0x54>
        1dec04:	e5932010 	ldr	r2, [r3, #16]	; fField16
        1dec08:	e1510002 	cmp	r1, r2
        1dec0c:	c0411002 	subgt	r1, r1, r2
        1dec10:	c0810000 	addgt	r0, r1, r0
        1dec14:	c583200c 	strgt	r2, [r3, #12]	; fField12
        1dec18:	e593100c 	ldr	r1, [r3, #12]	; fField12
        1dec1c:	ea00000b 	b	1dec50 <CShadowBufferSegment::Hide(long, int)+0x8c>
        1dec20:	e5931004 	ldr	r1, [r3, #4]	; fField4
        1dec24:	e0911000 	adds	r1, r1, r0
        1dec28:	e5831004 	str	r1, [r3, #4]	; fField4
        1dec2c:	40400001 	submi	r0, r0, r1
        1dec30:	4583c004 	strmi	ip, [r3, #4]	; fField4
        1dec34:	4a000004 	bmi	1dec4c <CShadowBufferSegment::Hide(long, int)+0x88>
        1dec38:	e5932010 	ldr	r2, [r3, #16]	; fField16
        1dec3c:	e1510002 	cmp	r1, r2
        1dec40:	c0411002 	subgt	r1, r1, r2
        1dec44:	c0400001 	subgt	r0, r0, r1
        1dec48:	c5832004 	strgt	r2, [r3, #4]	; fField4
        1dec4c:	e5931004 	ldr	r1, [r3, #4]	; fField4
        1dec50:	e5a31008 	str	r1, [r3, #8]!	; fField8
        1dec54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowBufferSegment::Seek(long, int)
 * Address: 001dec58
 */
CShadowBufferSegment::Seek(long, int) {
    /*
        1dec58:	e3310000 	teq	r1, #0	; 0x0
        1dec5c:	e5903004 	ldr	r3, [r0, #4]	; fField4
        1dec60:	1a000006 	bne	1dec80 <CShadowBufferSegment::Seek(long, int)+0x28>
        1dec64:	e3720001 	cmn	r2, #1	; 0x1
        1dec68:	05803008 	streq	r3, [r0, #8]	; fField8
        1dec6c:	0a000015 	beq	1decc8 <CShadowBufferSegment::Seek(long, int)+0x70>
        1dec70:	e3320001 	teq	r2, #1	; 0x1
        1dec74:	0590100c 	ldreq	r1, [r0, #12]	; fField12
        1dec78:	0a000011 	beq	1decc4 <CShadowBufferSegment::Seek(long, int)+0x6c>
        1dec7c:	ea000011 	b	1decc8 <CShadowBufferSegment::Seek(long, int)+0x70>
        1dec80:	e3720001 	cmn	r2, #1	; 0x1
        1dec84:	00831001 	addeq	r1, r3, r1
        1dec88:	0a000007 	beq	1decac <CShadowBufferSegment::Seek(long, int)+0x54>
        1dec8c:	e3320000 	teq	r2, #0	; 0x0
        1dec90:	05902008 	ldreq	r2, [r0, #8]	; fField8
        1dec94:	00821001 	addeq	r1, r2, r1
        1dec98:	0a000003 	beq	1decac <CShadowBufferSegment::Seek(long, int)+0x54>
        1dec9c:	e3320001 	teq	r2, #1	; 0x1
        1deca0:	0590200c 	ldreq	r2, [r0, #12]	; fField12
        1deca4:	00421001 	subeq	r1, r2, r1
        1deca8:	15901008 	ldrne	r1, [r0, #8]	; fField8
        1decac:	e1a02003 	mov	r2, r3
        1decb0:	e1530001 	cmp	r3, r1
        1decb4:	e590c00c 	ldr	ip, [r0, #12]	; fField12
        1decb8:	c1a01002 	movgt	r1, r2
        1decbc:	e151000c 	cmp	r1, ip
        1decc0:	a1a0100c 	movge	r1, ip
        1decc4:	e5801008 	str	r1, [r0, #8]	; fField8
        1decc8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        1deccc:	e0400003 	sub	r0, r0, r3
        1decd0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowBufferSegment::Position( const(void))
 * Address: 001decd4
 */
CShadowBufferSegment::Position( const(void)) {
    /*
        1decd4:	e9900003 	ldmib	r0, {r0, r1}
        1decd8:	e0410000 	sub	r0, r1, r0
        1decdc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowBufferSegment::GetSize( const(void))
 * Address: 001dece0
 */
CShadowBufferSegment::GetSize( const(void)) {
    /*
        1dece0:	e590100c 	ldr	r1, [r0, #12]	; fField12
        1dece4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        1dece8:	e0410000 	sub	r0, r1, r0
        1decec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowBufferSegment::AtEOF( const(void))
 * Address: 001decf0
 */
CShadowBufferSegment::AtEOF( const(void)) {
    /*
        1decf0:	e5901008 	ldr	r1, [r0, #8]	; fField8
        1decf4:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1decf8:	e1310000 	teq	r1, r0
        1decfc:	13a00000 	movne	r0, #0	; 0x0
        1ded00:	03a00001 	moveq	r0, #1	; 0x1
        1ded04:	e20000ff 	and	r0, r0, #255	; 0xff
        1ded08:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowBufferSegment::Init(unsigned long, long, long)
 * Address: 001ded0c
 */
CShadowBufferSegment::Init(unsigned long, long, long) {
    /*
        1ded0c:	e1a0c00d 	mov	ip, sp
        1ded10:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1ded14:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ded18:	e1a04000 	mov	r4, r0
        1ded1c:	e1a06002 	mov	r6, r2
        1ded20:	e1a05003 	mov	r5, r3
        1ded24:	e2800014 	add	r0, r0, #20	; 0x14
        1ded28:	e1a07000 	mov	r7, r0
        1ded2c:	eb67c6c5 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        1ded30:	e2841010 	add	r1, r4, #16	; 0x10
        1ded34:	e1a00007 	mov	r0, r7
        1ded38:	e3a02000 	mov	r2, #0	; 0x0
        1ded3c:	eb67d73d 	bl	1bd4a38 <TUSharedMem::$GetSize(unsigned long *, void **)>
        1ded40:	e5846008 	str	r6, [r4, #8]	; fField8
        1ded44:	e3550000 	cmp	r5, #0	; 0x0
        1ded48:	e5846004 	str	r6, [r4, #4]	; fField4
        1ded4c:	a0861005 	addge	r1, r6, r5
        1ded50:	b5941010 	ldrlt	r1, [r4, #16]	; fField16
        1ded54:	e5a4100c 	str	r1, [r4, #12]!	; fField12
        1ded58:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowBufferSegment::GetByteAt(long)
 * Address: 001ded5c
 */
CShadowBufferSegment::GetByteAt(long) {
    /*
        1ded5c:	e1a0c00d 	mov	ip, sp
        1ded60:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1ded64:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ded68:	e3a02000 	mov	r2, #0	; 0x0
        1ded6c:	e3a03000 	mov	r3, #0	; 0x0
        1ded70:	e52d2008 	str	r2, [sp, -#8]!	; fField8
        1ded74:	e1a02001 	mov	r2, r1
        1ded78:	e92d000c 	stmdb	sp!, {r2, r3}
        1ded7c:	e2800014 	add	r0, r0, #20	; 0x14
        1ded80:	e28d200c 	add	r2, sp, #12	; 0xc
        1ded84:	e28d1008 	add	r1, sp, #8	; 0x8
        1ded88:	e3a03001 	mov	r3, #1	; 0x1
        1ded8c:	eb67c6aa 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        1ded90:	e28dd008 	add	sp, sp, #8	; 0x8
        1ded94:	e5dd0004 	ldrb	r0, [sp, #4]	; fField4
        1ded98:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CShadowBufferSegment::PutByteAt(int, long)
 * Address: 001ded9c
 */
CShadowBufferSegment::PutByteAt(int, long) {
    /*
        1ded9c:	e1a0c00d 	mov	ip, sp
        1deda0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1deda4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1deda8:	e1a04001 	mov	r4, r1
        1dedac:	e56d1004 	strb	r1, [sp, -#4]!	; fField4
        1dedb0:	e3a03000 	mov	r3, #0	; 0x0
        1dedb4:	e92d0008 	stmdb	sp!, {r3}
        1dedb8:	e2800014 	add	r0, r0, #20	; 0x14
        1dedbc:	e1a03002 	mov	r3, r2
        1dedc0:	e28d1004 	add	r1, sp, #4	; 0x4
        1dedc4:	e3a02001 	mov	r2, #1	; 0x1
        1dedc8:	eb67c6a4 	bl	1bd0860 <TUSharedMem::$CopyToShared(void *, unsigned long, unsigned long, TUMsgToken *)>
        1dedcc:	e28dd004 	add	sp, sp, #4	; 0x4
        1dedd0:	e3300000 	teq	r0, #0	; 0x0
        1dedd4:	13e00000 	mvnne	r0, #0	; 0x0
        1dedd8:	01a00004 	moveq	r0, r4
        1deddc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: CShadowBufferSegment::Peek(void)
 * Address: 001dede0
 */
CShadowBufferSegment::Peek(void) {
    /*
        1dede0:	e2802008 	add	r2, r0, #8	; 0x8
        1dede4:	e8920006 	ldmia	r2, {r1, r2}
        1dede8:	e1510002 	cmp	r1, r2
        1dedec:	ba6710fe 	blt	1ba31ec <CShadowBufferSegment::$GetByteAt(long)>
        1dedf0:	a3e00000 	mvnge	r0, #0	; 0x0
        1dedf4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowBufferSegment::Next(void)
 * Address: 001dedf8
 */
CShadowBufferSegment::Next(void) {
    /*
        1dedf8:	e2802008 	add	r2, r0, #8	; 0x8
        1dedfc:	e8920006 	ldmia	r2, {r1, r2}
        1dee00:	e1510002 	cmp	r1, r2
        1dee04:	b2811001 	addlt	r1, r1, #1	; 0x1
        1dee08:	b5801008 	strlt	r1, [r0, #8]	; fField8
        1dee0c:	ba6710f6 	blt	1ba31ec <CShadowBufferSegment::$GetByteAt(long)>
        1dee10:	a3e00000 	mvnge	r0, #0	; 0x0
        1dee14:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowBufferSegment::Skip(void)
 * Address: 001dee18
 */
CShadowBufferSegment::Skip(void) {
    /*
        1dee18:	e2802008 	add	r2, r0, #8	; 0x8
        1dee1c:	e8920006 	ldmia	r2, {r1, r2}
        1dee20:	e1510002 	cmp	r1, r2
        1dee24:	b2812001 	addlt	r2, r1, #1	; 0x1
        1dee28:	b5a02008 	strlt	r2, [r0, #8]!	; fField8
        1dee2c:	b1a00001 	movlt	r0, r1
        1dee30:	a3e00000 	mvnge	r0, #0	; 0x0
        1dee34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowBufferSegment::Get(void)
 * Address: 001dee38
 */
CShadowBufferSegment::Get(void) {
    /*
        1dee38:	e2802008 	add	r2, r0, #8	; 0x8
        1dee3c:	e8920006 	ldmia	r2, {r1, r2}
        1dee40:	e1510002 	cmp	r1, r2
        1dee44:	b2812001 	addlt	r2, r1, #1	; 0x1
        1dee48:	b5802008 	strlt	r2, [r0, #8]	; fField8
        1dee4c:	ba6710e6 	blt	1ba31ec <CShadowBufferSegment::$GetByteAt(long)>
        1dee50:	a3e00000 	mvnge	r0, #0	; 0x0
        1dee54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CShadowBufferSegment::Getn(unsigned char *, long)
 * Address: 001dee58
 */
CShadowBufferSegment::Getn(unsigned char *, long) {
    /*
        1dee58:	e1a0c00d 	mov	ip, sp
        1dee5c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1dee60:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dee64:	e1a04000 	mov	r4, r0
        1dee68:	e24dd004 	sub	sp, sp, #4	; 0x4
        1dee6c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1dee70:	e5943008 	ldr	r3, [r4, #8]	; fField8
        1dee74:	e0400003 	sub	r0, r0, r3
        1dee78:	e1520000 	cmp	r2, r0
        1dee7c:	b1a00002 	movlt	r0, r2
        1dee80:	e58d0000 	str	r0, [sp]
        1dee84:	e1a0c000 	mov	ip, r0
        1dee88:	e3a03000 	mov	r3, #0	; 0x0
        1dee8c:	e5942008 	ldr	r2, [r4, #8]	; fField8
        1dee90:	e92d000c 	stmdb	sp!, {r2, r3}
        1dee94:	e2840014 	add	r0, r4, #20	; 0x14
        1dee98:	e1a0300c 	mov	r3, ip
        1dee9c:	e1a02001 	mov	r2, r1
        1deea0:	e28d1008 	add	r1, sp, #8	; 0x8
        1deea4:	eb67c664 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        1deea8:	e5941008 	ldr	r1, [r4, #8]	; fField8
        1deeac:	e5bd0008 	ldr	r0, [sp, #8]!	; fField8
        1deeb0:	e0810000 	add	r0, r1, r0
        1deeb4:	e5a40008 	str	r0, [r4, #8]!	; fField8
        1deeb8:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1deebc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

