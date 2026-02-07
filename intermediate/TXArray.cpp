#include "include/TXArray.h"

/**
 * Symbol: TXArray::__ct(unsigned char, int)
 * Address: 002306c8
 */
TXArray::TXArray(unsigned char, int) {
    /*
        2306c8:	e1a0c00d 	mov	ip, sp
        2306cc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2306d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2306d4:	e1b04000 	movs	r4, r0
        2306d8:	e1a05002 	mov	r5, r2
        2306dc:	e20160ff 	and	r6, r1, #255	; 0xff
        2306e0:	1a000003 	bne	2306f4 <TXArray::__ct(unsigned char, int)+0x2c>
        2306e4:	e3a00018 	mov	r0, #24	; 0x18
        2306e8:	eb667812 	bl	1bce738 <$__nw(unsigned int)>
        2306ec:	e1b04000 	movs	r4, r0
        2306f0:	0a00000f 	beq	230734 <TXArray::__ct(unsigned char, int)+0x6c>
        2306f4:	e1a00004 	mov	r0, r4
        2306f8:	eb000f34 	bl	2343d0 <TXVirtualObject::__ct(void)>
        2306fc:	e59f0038 	ldr	r0, [pc, #38]	; 23073c <TXArray::__ct(unsigned char, int)+0x74>
        230700:	e5840000 	str	r0, [r4]
        230704:	e5c46008 	strb	r6, [r4, #8]	; fField8
        230708:	e3a00000 	mov	r0, #0	; 0x0
        23070c:	eb66c686 	bl	1be212c <$NewHandle>
        230710:	e584000c 	str	r0, [r4, #12]	; fField12
        230714:	e3a00000 	mov	r0, #0	; 0x0
        230718:	e5840004 	str	r0, [r4, #4]	; fField4
        23071c:	e5840014 	str	r0, [r4, #20]	; fField20
        230720:	e5c40009 	strb	r0, [r4, #9]	; fField9
        230724:	e5845010 	str	r5, [r4, #16]	; fField16
        230728:	e3550000 	cmp	r5, #0	; 0x0
        23072c:	d3a00001 	movle	r0, #1	; 0x1
        230730:	d5840010 	strle	r0, [r4, #16]	; fField16
        230734:	e1a00004 	mov	r0, r4
        230738:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        23073c:	0001fec0 	andeq	pc, r1, r0, asr #29
    */
}

/**
 * Symbol: TXArray::__dt(void)
 * Address: 00230740
 */
TXArray::~TXArray(void) {
    /*
        230740:	e1a0c00d 	mov	ip, sp
        230744:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        230748:	e24cb004 	sub	fp, ip, #4	; 0x4
        23074c:	e1a04000 	mov	r4, r0
        230750:	e1a05001 	mov	r5, r1
        230754:	e59f002c 	ldr	r0, [pc, #2c]	; 230788 <TXArray::__dt(void)+0x48>
        230758:	e5840000 	str	r0, [r4]
        23075c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        230760:	e3300000 	teq	r0, #0	; 0x0
        230764:	1b66c251 	blne	1be10b0 <$DisposHandle>
        230768:	e1a00004 	mov	r0, r4
        23076c:	e3a01000 	mov	r1, #0	; 0x0
        230770:	eb000f23 	bl	234404 <TXVirtualObject::__dt(void)>
        230774:	e3150001 	tst	r5, #1	; 0x1
        230778:	11a00004 	movne	r0, r4
        23077c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        230780:	1a6673d6 	bne	1bcd6e0 <$__dl(void *)>
        230784:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        230788:	0001fec0 	andeq	pc, r1, r0, asr #29
    */
}

/**
 * Symbol: TXArray::Remove(long, long)
 * Address: 0023078c
 */
TXArray::Remove(long, long) {
    /*
        23078c:	e1a0c00d 	mov	ip, sp
        230790:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        230794:	e24cb004 	sub	fp, ip, #4	; 0x4
        230798:	e1a04000 	mov	r4, r0
        23079c:	e1a06001 	mov	r6, r1
        2307a0:	e1a05002 	mov	r5, r2
        2307a4:	e0811002 	add	r1, r1, r2
        2307a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2307ac:	e0407001 	sub	r7, r0, r1
        2307b0:	e3570000 	cmp	r7, #0	; 0x0
        2307b4:	da000006 	ble	2307d4 <TXArray::Remove(long, long)+0x48>
        2307b8:	e1a00004 	mov	r0, r4
        2307bc:	eb6552c3 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2307c0:	e1a02000 	mov	r2, r0
        2307c4:	e1a03007 	mov	r3, r7
        2307c8:	e1a01006 	mov	r1, r6
        2307cc:	e1a00004 	mov	r0, r4
        2307d0:	eb6552c0 	bl	1b852d8 <TXArray::$Stuff(long, void const *, long)>
        2307d4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2307d8:	e0400005 	sub	r0, r0, r5
        2307dc:	e5840004 	str	r0, [r4, #4]	; fField4
        2307e0:	e1a00004 	mov	r0, r4
        2307e4:	eb000237 	bl	2310c8 <TXArray::CheckUnusedCount(void)>
        2307e8:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        2307ec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXArray::Replace(long, long, void const *, long)
 * Address: 002307f0
 */
TXArray::Replace(long, long, void const *, long) {
    /*
        2307f0:	e1a0c00d 	mov	ip, sp
        2307f4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2307f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2307fc:	e1a05000 	mov	r5, r0
        230800:	e1a04001 	mov	r4, r1
        230804:	e1a06003 	mov	r6, r3
        230808:	e59b7004 	ldr	r7, [fp, #4]	; fField4
        23080c:	e0472002 	sub	r2, r7, r2
        230810:	e3520000 	cmp	r2, #0	; 0x0
        230814:	da000008 	ble	23083c <TXArray::Replace(long, long, void const *, long)+0x4c>
        230818:	e1a03004 	mov	r3, r4
        23081c:	e1a00005 	mov	r0, r5
        230820:	e3a01000 	mov	r1, #0	; 0x0
        230824:	eb6552ad 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        230828:	e3300000 	teq	r0, #0	; 0x0
        23082c:	03a000e9 	moveq	r0, #233	; 0xe9
        230830:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        230834:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        230838:	ea000004 	b	230850 <TXArray::Replace(long, long, void const *, long)+0x60>
        23083c:	aa000003 	bge	230850 <TXArray::Replace(long, long, void const *, long)+0x60>
        230840:	e2622000 	rsb	r2, r2, #0	; 0x0
        230844:	e1a01004 	mov	r1, r4
        230848:	e1a00005 	mov	r0, r5
        23084c:	eb6552a4 	bl	1b852e4 <TXArray::$Remove(long, long)>
        230850:	e3360000 	teq	r6, #0	; 0x0
        230854:	0a000004 	beq	23086c <TXArray::Replace(long, long, void const *, long)+0x7c>
        230858:	e1a03007 	mov	r3, r7
        23085c:	e1a02006 	mov	r2, r6
        230860:	e1a01004 	mov	r1, r4
        230864:	e1a00005 	mov	r0, r5
        230868:	eb65529a 	bl	1b852d8 <TXArray::$Stuff(long, void const *, long)>
        23086c:	e3a00000 	mov	r0, #0	; 0x0
        230870:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXArray::SetPhysicalCount(long)
 * Address: 00230874
 */
TXArray::SetPhysicalCount(long) {
    /*
        230874:	e1a0c00d 	mov	ip, sp
        230878:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23087c:	e24cb004 	sub	fp, ip, #4	; 0x4
        230880:	e1a04000 	mov	r4, r0
        230884:	e1a05001 	mov	r5, r1
        230888:	e5900014 	ldr	r0, [r0, #20]	; fField20
        23088c:	e1300001 	teq	r0, r1
        230890:	03a00000 	moveq	r0, #0	; 0x0
        230894:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        230898:	e5d40008 	ldrb	r0, [r4, #8]	; fField8
        23089c:	e0010095 	mul	r1, r5, r0
        2308a0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2308a4:	eb66c634 	bl	1be217c <$SetHandleSize>
        2308a8:	eb66c61c 	bl	1be2120 <$MemError>
        2308ac:	e3300000 	teq	r0, #0	; 0x0
        2308b0:	05a45014 	streq	r5, [r4, #20]!	; fField20
        2308b4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXArray::Reserve(long)
 * Address: 002308b8
 */
TXArray::Reserve(long) {
    /*
        2308b8:	e1a0c00d 	mov	ip, sp
        2308bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2308c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2308c4:	e1a04000 	mov	r4, r0
        2308c8:	e3510000 	cmp	r1, #0	; 0x0
        2308cc:	d3a00000 	movle	r0, #0	; 0x0
        2308d0:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
        2308d4:	e5945004 	ldr	r5, [r4, #4]	; fField4
        2308d8:	e0851001 	add	r1, r5, r1
        2308dc:	e1a00004 	mov	r0, r4
        2308e0:	eb000001 	bl	2308ec <TXArray::SetCount(long)>
        2308e4:	e5a45004 	str	r5, [r4, #4]!	; fField4
        2308e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXArray::SetCount(long)
 * Address: 002308ec
 */
TXArray::SetCount(long) {
    /*
        2308ec:	e1a0c00d 	mov	ip, sp
        2308f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2308f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2308f8:	e3a04000 	mov	r4, #0	; 0x0
        2308fc:	e5902014 	ldr	r2, [r0, #20]	; fField20
        230900:	e1520001 	cmp	r2, r1
        230904:	aa000008 	bge	23092c <TXArray::SetCount(long)+0x40>
        230908:	e5902004 	ldr	r2, [r0, #4]	; fField4
        23090c:	e0412002 	sub	r2, r1, r2
        230910:	e3e03000 	mvn	r3, #0	; 0x0
        230914:	e3a01000 	mov	r1, #0	; 0x0
        230918:	eb655270 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        23091c:	e3300000 	teq	r0, #0	; 0x0
        230920:	03a040e9 	moveq	r4, #233	; 0xe9
        230924:	02444b0a 	subeq	r4, r4, #10240	; 0x2800
        230928:	ea000001 	b	230934 <TXArray::SetCount(long)+0x48>
        23092c:	e5801004 	str	r1, [r0, #4]	; fField4
        230930:	eb0001e4 	bl	2310c8 <TXArray::CheckUnusedCount(void)>
        230934:	e1a00004 	mov	r0, r4
        230938:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXArray::Compact(void)
 * Address: 0023093c
 */
TXArray::Compact(void) {
    /*
        23093c:	e5901004 	ldr	r1, [r0, #4]	; fField4
        230940:	eaffffcb 	b	230874 <TXArray::SetPhysicalCount(long)>
    */
}

/**
 * Symbol: TXArray::Lock(unsigned char)
 * Address: 00230ae0
 */
TXArray::Lock(unsigned char) {
    /*
        230ae0:	e1a0c00d 	mov	ip, sp
        230ae4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        230ae8:	e24cb004 	sub	fp, ip, #4	; 0x4
        230aec:	e1a04000 	mov	r4, r0
        230af0:	e20110ff 	and	r1, r1, #255	; 0xff
        230af4:	e5d00009 	ldrb	r0, [r0, #9]	; fField9
        230af8:	e2802001 	add	r2, r0, #1	; 0x1
        230afc:	e5c42009 	strb	r2, [r4, #9]	; fField9
        230b00:	e3300000 	teq	r0, #0	; 0x0
        230b04:	1a000004 	bne	230b1c <TXArray::Lock(unsigned char)+0x3c>
        230b08:	e3310000 	teq	r1, #0	; 0x0
        230b0c:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        230b10:	1b66c583 	blne	1be2124 <$MoveHHi>
        230b14:	e594000c 	ldr	r0, [r4, #12]	; fField12
        230b18:	eb66c57b 	bl	1be210c <$HLock>
        230b1c:	e1a00004 	mov	r0, r4
        230b20:	e3a01000 	mov	r1, #0	; 0x0
        230b24:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        230b28:	ea6551e8 	b	1b852d0 <TXArray::$GetElementPtr( const(long))>
    */
}

/**
 * Symbol: TXArray::Unlock(void)
 * Address: 00230d60
 */
TXArray::Unlock(void) {
    /*
        230d60:	e5d01009 	ldrb	r1, [r0, #9]	; fField9
        230d64:	e3310000 	teq	r1, #0	; 0x0
        230d68:	01a0f00e 	moveq	pc, lr
        230d6c:	e2411001 	sub	r1, r1, #1	; 0x1
        230d70:	e21110ff 	ands	r1, r1, #255	; 0xff
        230d74:	e5c01009 	strb	r1, [r0, #9]	; fField9
        230d78:	0590000c 	ldreq	r0, [r0, #12]	; fField12
        230d7c:	0a66c4e4 	beq	1be2114 <$HUnlock>
        230d80:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXArray::GetElementPtr( const(long))
 * Address: 00230f74
 */
TXArray::GetElementPtr( const(long)) {
    /*
        230f74:	e590200c 	ldr	r2, [r0, #12]	; fField12
        230f78:	e5923000 	ldr	r3, [r2]
        230f7c:	e5d02008 	ldrb	r2, [r0, #8]	; fField8
        230f80:	e0213192 	mla	r1, r2, r1, r3
        230f84:	e1a00001 	mov	r0, r1
        230f88:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXArray::GetLastElementPtr( const(void))
 * Address: 00230f8c
 */
TXArray::GetLastElementPtr( const(void)) {
    /*
        230f8c:	e5901004 	ldr	r1, [r0, #4]	; fField4
        230f90:	e2411001 	sub	r1, r1, #1	; 0x1
        230f94:	ea6550cd 	b	1b852d0 <TXArray::$GetElementPtr( const(long))>
    */
}

/**
 * Symbol: TXArray::Stuff(long, void const *, long)
 * Address: 00230f98
 */
TXArray::Stuff(long, void const *, long) {
    /*
        230f98:	e1a0c00d 	mov	ip, sp
        230f9c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        230fa0:	e24cb004 	sub	fp, ip, #4	; 0x4
        230fa4:	e1a04000 	mov	r4, r0
        230fa8:	e1a06002 	mov	r6, r2
        230fac:	e1a05003 	mov	r5, r3
        230fb0:	eb6550c6 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        230fb4:	e1a01000 	mov	r1, r0
        230fb8:	e5d40008 	ldrb	r0, [r4, #8]	; fField8
        230fbc:	e0020095 	mul	r2, r5, r0
        230fc0:	e1a00006 	mov	r0, r6
        230fc4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        230fc8:	ea66b7e1 	b	1bdef54 <$BlockMove>
    */
}

/**
 * Symbol: CopyTo__7TXArrayCFlT1Pv
 * Address: 00230fcc
 */
void TXArray::CopyTo() {
    /*
        230fcc:	e1a0c00d 	mov	ip, sp
        230fd0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        230fd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        230fd8:	e1a04000 	mov	r4, r0
        230fdc:	e1a06002 	mov	r6, r2
        230fe0:	e1a05003 	mov	r5, r3
        230fe4:	eb6550b9 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        230fe8:	e5d41008 	ldrb	r1, [r4, #8]	; fField8
        230fec:	e0020196 	mul	r2, r6, r1
        230ff0:	e1a01005 	mov	r1, r5
        230ff4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        230ff8:	ea66b7d5 	b	1bdef54 <$BlockMove>
    */
}

/**
 * Symbol: TXArray::Insert(void const *, long, long)
 * Address: 00230ffc
 */
TXArray::Insert(void const *, long, long) {
    /*
        230ffc:	e1a0c00d 	mov	ip, sp
        231000:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        231004:	e24cb004 	sub	fp, ip, #4	; 0x4
        231008:	e1a04000 	mov	r4, r0
        23100c:	e1a07001 	mov	r7, r1
        231010:	e1a06002 	mov	r6, r2
        231014:	e1a05003 	mov	r5, r3
        231018:	e5909004 	ldr	r9, [r0, #4]	; fField4
        23101c:	e0898002 	add	r8, r9, r2
        231020:	e5900014 	ldr	r0, [r0, #20]	; fField20
        231024:	e1500008 	cmp	r0, r8
        231028:	aa00000f 	bge	23106c <TXArray::Insert(void const *, long, long)+0x70>
        23102c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        231030:	e1500006 	cmp	r0, r6
        231034:	d1a0a008 	movle	sl, r8
        231038:	c080a009 	addgt	sl, r0, r9
        23103c:	e1a0100a 	mov	r1, sl
        231040:	e1a00004 	mov	r0, r4
        231044:	ebfffe0a 	bl	230874 <TXArray::SetPhysicalCount(long)>
        231048:	e3300000 	teq	r0, #0	; 0x0
        23104c:	0a000006 	beq	23106c <TXArray::Insert(void const *, long, long)+0x70>
        231050:	e13a0008 	teq	sl, r8
        231054:	11a01008 	movne	r1, r8
        231058:	11a00004 	movne	r0, r4
        23105c:	1bfffe04 	blne	230874 <TXArray::SetPhysicalCount(long)>
        231060:	e3300000 	teq	r0, #0	; 0x0
        231064:	13a00000 	movne	r0, #0	; 0x0
        231068:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23106c:	e3550000 	cmp	r5, #0	; 0x0
        231070:	e5848004 	str	r8, [r4, #4]	; fField4
        231074:	b1a05009 	movlt	r5, r9
        231078:	e1a01005 	mov	r1, r5
        23107c:	e1a00004 	mov	r0, r4
        231080:	eb655092 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        231084:	e1a08000 	mov	r8, r0
        231088:	e1350009 	teq	r5, r9
        23108c:	0a000004 	beq	2310a4 <TXArray::Insert(void const *, long, long)+0xa8>
        231090:	e0493005 	sub	r3, r9, r5
        231094:	e0851006 	add	r1, r5, r6
        231098:	e1a02008 	mov	r2, r8
        23109c:	e1a00004 	mov	r0, r4
        2310a0:	eb65508c 	bl	1b852d8 <TXArray::$Stuff(long, void const *, long)>
        2310a4:	e3370000 	teq	r7, #0	; 0x0
        2310a8:	0a000004 	beq	2310c0 <TXArray::Insert(void const *, long, long)+0xc4>
        2310ac:	e1a03006 	mov	r3, r6
        2310b0:	e1a02007 	mov	r2, r7
        2310b4:	e1a01005 	mov	r1, r5
        2310b8:	e1a00004 	mov	r0, r4
        2310bc:	eb655085 	bl	1b852d8 <TXArray::$Stuff(long, void const *, long)>
        2310c0:	e1a00008 	mov	r0, r8
        2310c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TXArray::CheckUnusedCount(void)
 * Address: 002310c8
 */
TXArray::CheckUnusedCount(void) {
    /*
        2310c8:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2310cc:	e5902010 	ldr	r2, [r0, #16]	; fField16
        2310d0:	e0811002 	add	r1, r1, r2
        2310d4:	e5902014 	ldr	r2, [r0, #20]	; fField20
        2310d8:	e1520001 	cmp	r2, r1
        2310dc:	cafffde4 	bgt	230874 <TXArray::SetPhysicalCount(long)>
        2310e0:	e1a0f00e 	mov	pc, lr
    */
}

