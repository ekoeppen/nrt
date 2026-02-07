#include "DDKIncludes/CommAPI/OptionArray.h"

/**
 * Symbol: TOptionIterator::AppendToList(TOptionIterator *)
 * Address: 0014aa8c
 */
TOptionIterator::AppendToList(TOptionIterator *) {
    /*
        14aa8c:	e3310000 	teq	r1, #0	; 0x0
        14aa90:	01a0f00e 	moveq	pc, lr
        14aa94:	e5912018 	ldr	r2, [r1, #24]	; fIsShared
        14aa98:	e2800014 	add	r0, r0, #20	; 0x14
        14aa9c:	e8800006 	stmia	r0, {r1, r2}
        14aaa0:	e2400014 	sub	r0, r0, #20	; 0x14
        14aaa4:	e5a20014 	str	r0, [r2, #20]!	; fSharedMemoryObject
        14aaa8:	e5a10018 	str	r0, [r1, #24]!	; fIsShared
        14aaac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOptionIterator::RemoveFromList(void)
 * Address: 0014aab0
 */
TOptionIterator::RemoveFromList(void) {
    /*
        14aab0:	e5901018 	ldr	r1, [r0, #24]	; fIsShared
        14aab4:	e1310000 	teq	r1, r0
        14aab8:	11a02001 	movne	r2, r1
        14aabc:	03a02000 	moveq	r2, #0	; 0x0
        14aac0:	e5903014 	ldr	r3, [r0, #20]	; fSharedMemoryObject
        14aac4:	e5a13014 	str	r3, [r1, #20]!	; fSharedMemoryObject
        14aac8:	e5901018 	ldr	r1, [r0, #24]	; fIsShared
        14aacc:	e5903014 	ldr	r3, [r0, #20]	; fSharedMemoryObject
        14aad0:	e5a31018 	str	r1, [r3, #24]!	; fIsShared
        14aad4:	e5800018 	str	r0, [r0, #24]	; fIsShared
        14aad8:	e5800014 	str	r0, [r0, #20]	; fSharedMemoryObject
        14aadc:	e1a00002 	mov	r0, r2
        14aae0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOptionIterator::__ct(void)
 * Address: 0014aae4
 */
TOptionIterator::TOptionIterator(TOptionArray* itsOptionArray) {
    /*
        14aae4:	e1a0c00d 	mov	ip, sp
        14aae8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        14aaec:	e24cb004 	sub	fp, ip, #4	; 0x4
        14aaf0:	e3300000 	teq	r0, #0	; 0x0
        14aaf4:	1a000003 	bne	14ab08 <TOptionIterator::__ct(void)+0x24>
        14aaf8:	e3a0001c 	mov	r0, #28	; 0x1c
        14aafc:	eb6a0f0d 	bl	1bce738 <$__nw(unsigned int)>
        14ab00:	e3300000 	teq	r0, #0	; 0x0
        14ab04:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        14ab08:	e5800018 	str	r0, [r0, #24]	; fIsShared
        14ab0c:	e5800014 	str	r0, [r0, #20]	; fSharedMemoryObject
        14ab10:	e3e01000 	mvn	r1, #0	; 0x0
        14ab14:	e580100c 	str	r1, [r0, #12]	; fArrayBlock
        14ab18:	e5801008 	str	r1, [r0, #8]	; fCount
        14ab1c:	e5801004 	str	r1, [r0, #4]	; TOptionIterator
        14ab20:	e3a01000 	mov	r1, #0	; 0x0
        14ab24:	e5801000 	str	r1, [r0]
        14ab28:	e5801010 	str	r1, [r0, #16]	; fIterator
        14ab2c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TOptionIterator::__ct(TOptionArray *)
 * Address: 0014ab30
 */
TOptionIterator::TOptionIterator(TOptionArray* itsOptionArray) {
    /*
        14ab30:	e1a0c00d 	mov	ip, sp
        14ab34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14ab38:	e24cb004 	sub	fp, ip, #4	; 0x4
        14ab3c:	e1b04000 	movs	r4, r0
        14ab40:	e1a05001 	mov	r5, r1
        14ab44:	1a000003 	bne	14ab58 <TOptionIterator::__ct(TOptionArray *)+0x28>
        14ab48:	e3a0001c 	mov	r0, #28	; 0x1c
        14ab4c:	eb6a0ef9 	bl	1bce738 <$__nw(unsigned int)>
        14ab50:	e1b04000 	movs	r4, r0
        14ab54:	0a000005 	beq	14ab70 <TOptionIterator::__ct(TOptionArray *)+0x40>
        14ab58:	e5950000 	ldr	r0, [r5]
        14ab5c:	e2403001 	sub	r3, r0, #1	; 0x1
        14ab60:	e1a01005 	mov	r1, r5
        14ab64:	e1a00004 	mov	r0, r4
        14ab68:	e3a02000 	mov	r2, #0	; 0x0
        14ab6c:	eb69bc46 	bl	1bb9c8c <TOptionIterator::$Init(TOptionArray *, long, long)>
        14ab70:	e1a00004 	mov	r0, r4
        14ab74:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionIterator::__ct(TOptionArray *, long, long)
 * Address: 0014ab78
 */
TOptionIterator::TOptionIterator(TOptionArray* itsOptionArray) {
    /*
        14ab78:	e1a0c00d 	mov	ip, sp
        14ab7c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14ab80:	e24cb004 	sub	fp, ip, #4	; 0x4
        14ab84:	e1b04000 	movs	r4, r0
        14ab88:	e1a06001 	mov	r6, r1
        14ab8c:	e1a05002 	mov	r5, r2
        14ab90:	e1a07003 	mov	r7, r3
        14ab94:	1a000003 	bne	14aba8 <TOptionIterator::__ct(TOptionArray *, long, long)+0x30>
        14ab98:	e3a0001c 	mov	r0, #28	; 0x1c
        14ab9c:	eb6a0ee5 	bl	1bce738 <$__nw(unsigned int)>
        14aba0:	e1b04000 	movs	r4, r0
        14aba4:	0a000004 	beq	14abbc <TOptionIterator::__ct(TOptionArray *, long, long)+0x44>
        14aba8:	e1a03007 	mov	r3, r7
        14abac:	e1a02005 	mov	r2, r5
        14abb0:	e1a01006 	mov	r1, r6
        14abb4:	e1a00004 	mov	r0, r4
        14abb8:	eb69bc33 	bl	1bb9c8c <TOptionIterator::$Init(TOptionArray *, long, long)>
        14abbc:	e1a00004 	mov	r0, r4
        14abc0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionIterator::__dt(void)
 * Address: 0014abc4
 */
TOptionIterator::~TOptionIterator() {
    /*
        14abc4:	e1a0c00d 	mov	ip, sp
        14abc8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14abcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        14abd0:	e1a04000 	mov	r4, r0
        14abd4:	e1a05001 	mov	r5, r1
        14abd8:	e5900000 	ldr	r0, [r0]
        14abdc:	e3300000 	teq	r0, #0	; 0x0
        14abe0:	0a000003 	beq	14abf4 <TOptionIterator::__dt(void)+0x30>
        14abe4:	e1a00004 	mov	r0, r4
        14abe8:	eb62f1e5 	bl	1a07384 <TOptionIterator::$RemoveFromList(void)>
        14abec:	e5941000 	ldr	r1, [r4]
        14abf0:	e5a10008 	str	r0, [r1, #8]!	; fCount
        14abf4:	e3150001 	tst	r5, #1	; 0x1
        14abf8:	11a00004 	movne	r0, r4
        14abfc:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        14ac00:	1a6a0ab6 	bne	1bcd6e0 <$__dl(void *)>
        14ac04:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionIterator::Init(TOptionArray *, long, long)
 * Address: 0014ac08
 */
TOptionIterator::Init(TOptionArray *, long, long) {
    /*
        14ac08:	e1a0c00d 	mov	ip, sp
        14ac0c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14ac10:	e24cb004 	sub	fp, ip, #4	; 0x4
        14ac14:	e1a04000 	mov	r4, r0
        14ac18:	e1a06002 	mov	r6, r2
        14ac1c:	e1a05003 	mov	r5, r3
        14ac20:	e5800018 	str	r0, [r0, #24]	; fIsShared
        14ac24:	e5800014 	str	r0, [r0, #20]	; fSharedMemoryObject
        14ac28:	e5801000 	str	r1, [r0]
        14ac2c:	e3a00000 	mov	r0, #0	; 0x0
        14ac30:	e5840010 	str	r0, [r4, #16]	; fIterator
        14ac34:	e5911008 	ldr	r1, [r1, #8]	; fCount
        14ac38:	e1a00004 	mov	r0, r4
        14ac3c:	eb62edb3 	bl	1a06310 <TOptionIterator::$AppendToList(TOptionIterator *)>
        14ac40:	e5941000 	ldr	r1, [r4]
        14ac44:	e1a02005 	mov	r2, r5
        14ac48:	e5a10008 	str	r0, [r1, #8]!	; fCount
        14ac4c:	e1a01006 	mov	r1, r6
        14ac50:	e1a00004 	mov	r0, r4
        14ac54:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        14ac58:	ea69bc10 	b	1bb9ca0 <TOptionIterator::$InitBounds(long, long)>
    */
}

/**
 * Symbol: TOptionIterator::InitBounds(long, long)
 * Address: 0014ac5c
 */
void		TOptionIterator::InitBounds(ArrayIndex itsLowBound, ArrayIndex itsHighBound) {
    /*
        14ac5c:	e5903000 	ldr	r3, [r0]
        14ac60:	e5933000 	ldr	r3, [r3]
        14ac64:	e3a0c000 	mov	ip, #0	; 0x0
        14ac68:	e3530000 	cmp	r3, #0	; 0x0
        14ac6c:	da000005 	ble	14ac88 <TOptionIterator::InitBounds(long, long)+0x2c>
        14ac70:	e2433001 	sub	r3, r3, #1	; 0x1
        14ac74:	e3520000 	cmp	r2, #0	; 0x0
        14ac78:	b1a0200c 	movlt	r2, ip
        14ac7c:	e1520003 	cmp	r2, r3
        14ac80:	a1a02003 	movge	r2, r3
        14ac84:	ea000000 	b	14ac8c <TOptionIterator::InitBounds(long, long)+0x30>
        14ac88:	e3e02000 	mvn	r2, #0	; 0x0
        14ac8c:	e580200c 	str	r2, [r0, #12]	; fArrayBlock
        14ac90:	e3720001 	cmn	r2, #1	; 0x1
        14ac94:	da000004 	ble	14acac <TOptionIterator::InitBounds(long, long)+0x50>
        14ac98:	e3510000 	cmp	r1, #0	; 0x0
        14ac9c:	b1a0100c 	movlt	r1, ip
        14aca0:	e1510002 	cmp	r1, r2
        14aca4:	a1a01002 	movge	r1, r2
        14aca8:	ea000000 	b	14acb0 <TOptionIterator::InitBounds(long, long)+0x54>
        14acac:	e3e01000 	mvn	r1, #0	; 0x0
        14acb0:	e5801008 	str	r1, [r0, #8]	; fCount
        14acb4:	ea69c017 	b	1bbad18 <TOptionIterator::$Reset(void)>
    */
}

/**
 * Symbol: TOptionIterator::ResetBounds(void)
 * Address: 0014acb8
 */
void		TOptionIterator::ResetBounds(void) {
    /*
        14acb8:	e5901000 	ldr	r1, [r0]
        14acbc:	e5911000 	ldr	r1, [r1]
        14acc0:	e3510000 	cmp	r1, #0	; 0x0
        14acc4:	d3e01000 	mvnle	r1, #0	; 0x0
        14acc8:	c2411001 	subgt	r1, r1, #1	; 0x1
        14accc:	e580100c 	str	r1, [r0, #12]	; fArrayBlock
        14acd0:	e3710001 	cmn	r1, #1	; 0x1
        14acd4:	d3e01000 	mvnle	r1, #0	; 0x0
        14acd8:	c3a01000 	movgt	r1, #0	; 0x0
        14acdc:	e5801008 	str	r1, [r0, #8]	; fCount
        14ace0:	ea69c00c 	b	1bbad18 <TOptionIterator::$Reset(void)>
    */
}

/**
 * Symbol: TOptionIterator::More(void)
 * Address: 0014ace4
 */
Boolean		TOptionIterator::More(void) {
    /*
        14ace4:	e5901000 	ldr	r1, [r0]
        14ace8:	e3310000 	teq	r1, #0	; 0x0
        14acec:	15900004 	ldrne	r0, [r0, #4]	; TOptionIterator
        14acf0:	13700001 	cmnne	r0, #1	; 0x1
        14acf4:	03a00000 	moveq	r0, #0	; 0x0
        14acf8:	13a00001 	movne	r0, #1	; 0x1
        14acfc:	e20000ff 	and	r0, r0, #255	; 0xff
        14ad00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOptionIterator::Reset(void)
 * Address: 0014ad0c
 */
void		TOptionIterator::Reset(void) {
    /*
        14ad0c:	e5901008 	ldr	r1, [r0, #8]	; fCount
        14ad10:	e5801004 	str	r1, [r0, #4]	; TOptionIterator
        14ad14:	e3710001 	cmn	r1, #1	; 0x1
        14ad18:	d3a01000 	movle	r1, #0	; 0x0
        14ad1c:	c5901000 	ldrgt	r1, [r0]
        14ad20:	c5911004 	ldrgt	r1, [r1, #4]	; TOptionIterator
        14ad24:	e5a01010 	str	r1, [r0, #16]!	; fIterator
        14ad28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOptionIterator::DeleteArray(void)
 * Address: 0014ad2c
 */
TOptionIterator::DeleteArray(void) {
    /*
        14ad2c:	e1a0c00d 	mov	ip, sp
        14ad30:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14ad34:	e24cb004 	sub	fp, ip, #4	; 0x4
        14ad38:	e1a04000 	mov	r4, r0
        14ad3c:	e5900018 	ldr	r0, [r0, #24]	; fIsShared
        14ad40:	e5941000 	ldr	r1, [r4]
        14ad44:	e5911008 	ldr	r1, [r1, #8]	; fCount
        14ad48:	e1300001 	teq	r0, r1
        14ad4c:	1b62ed72 	blne	1a0631c <TOptionIterator::$DeleteArray(void)>
        14ad50:	e3a00000 	mov	r0, #0	; 0x0
        14ad54:	e5840000 	str	r0, [r4]
        14ad58:	e5a40010 	str	r0, [r4, #16]!	; fIterator
        14ad5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionIterator::Advance(void)
 * Address: 0014ad60
 */
void		TOptionIterator::Advance(void) {
    /*
        14ad60:	e5901004 	ldr	r1, [r0, #4]	; TOptionIterator
        14ad64:	e590200c 	ldr	r2, [r0, #12]	; fArrayBlock
        14ad68:	e1510002 	cmp	r1, r2
        14ad6c:	a3e01000 	mvnge	r1, #0	; 0x0
        14ad70:	a5801004 	strge	r1, [r0, #4]	; TOptionIterator
        14ad74:	a3a01000 	movge	r1, #0	; 0x0
        14ad78:	aa000006 	bge	14ad98 <TOptionIterator::Advance(void)+0x38>
        14ad7c:	e2811001 	add	r1, r1, #1	; 0x1
        14ad80:	e5801004 	str	r1, [r0, #4]	; TOptionIterator
        14ad84:	e5902010 	ldr	r2, [r0, #16]	; fIterator
        14ad88:	e5921004 	ldr	r1, [r2, #4]	; TOptionIterator
        14ad8c:	e281100f 	add	r1, r1, #15	; 0xf
        14ad90:	e3c11003 	bic	r1, r1, #3	; 0x3
        14ad94:	e0821001 	add	r1, r2, r1
        14ad98:	e5a01010 	str	r1, [r0, #16]!	; fIterator
        14ad9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOptionIterator::RemoveOptionAt(long)
 * Address: 0014ada0
 */
TOptionIterator::RemoveOptionAt(long) {
    /*
        14ada0:	e92d4000 	stmdb	sp!, {lr}
        14ada4:	e5902008 	ldr	r2, [r0, #8]	; fCount
        14ada8:	e1520001 	cmp	r2, r1
        14adac:	c2422001 	subgt	r2, r2, #1	; 0x1
        14adb0:	c5802008 	strgt	r2, [r0, #8]	; fCount
        14adb4:	e590200c 	ldr	r2, [r0, #12]	; fArrayBlock
        14adb8:	e1520001 	cmp	r2, r1
        14adbc:	a2422001 	subge	r2, r2, #1	; 0x1
        14adc0:	a580200c 	strge	r2, [r0, #12]	; fArrayBlock
        14adc4:	e5902004 	ldr	r2, [r0, #4]	; TOptionIterator
        14adc8:	e1520001 	cmp	r2, r1
        14adcc:	a2422001 	subge	r2, r2, #1	; 0x1
        14add0:	a5802004 	strge	r2, [r0, #4]	; TOptionIterator
        14add4:	e5903004 	ldr	r3, [r0, #4]	; TOptionIterator
        14add8:	e3730001 	cmn	r3, #1	; 0x1
        14addc:	da00000e 	ble	14ae1c <TOptionIterator::RemoveOptionAt(long)+0x7c>
        14ade0:	e5902000 	ldr	r2, [r0]
        14ade4:	e5922004 	ldr	r2, [r2, #4]	; TOptionIterator
        14ade8:	e5802010 	str	r2, [r0, #16]	; fIterator
        14adec:	e3a02000 	mov	r2, #0	; 0x0
        14adf0:	e3530000 	cmp	r3, #0	; 0x0
        14adf4:	da000008 	ble	14ae1c <TOptionIterator::RemoveOptionAt(long)+0x7c>
        14adf8:	e590e010 	ldr	lr, [r0, #16]	; fIterator
        14adfc:	e59ec004 	ldr	ip, [lr, #4]	; TOptionIterator
        14ae00:	e28cc00f 	add	ip, ip, #15	; 0xf
        14ae04:	e3ccc003 	bic	ip, ip, #3	; 0x3
        14ae08:	e08ec00c 	add	ip, lr, ip
        14ae0c:	e2822001 	add	r2, r2, #1	; 0x1
        14ae10:	e1530002 	cmp	r3, r2
        14ae14:	e580c010 	str	ip, [r0, #16]	; fIterator
        14ae18:	cafffff6 	bgt	14adf8 <TOptionIterator::RemoveOptionAt(long)+0x58>
        14ae1c:	e5902000 	ldr	r2, [r0]
        14ae20:	e3320000 	teq	r2, #0	; 0x0
        14ae24:	15900018 	ldrne	r0, [r0, #24]	; fIsShared
        14ae28:	15922008 	ldrne	r2, [r2, #8]	; fCount
        14ae2c:	11300002 	teqne	r0, r2
        14ae30:	18bd4000 	ldmneia	sp!, {lr}
        14ae34:	1a69bfb5 	bne	1bbad10 <TOptionIterator::$RemoveOptionAt(long)>
        14ae38:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TOptionIterator::InsertOptionAt(long)
 * Address: 0014ae3c
 */
TOptionIterator::InsertOptionAt(long) {
    /*
        14ae3c:	e92d4000 	stmdb	sp!, {lr}
        14ae40:	e5902008 	ldr	r2, [r0, #8]	; fCount
        14ae44:	e1520001 	cmp	r2, r1
        14ae48:	a2822001 	addge	r2, r2, #1	; 0x1
        14ae4c:	a5802008 	strge	r2, [r0, #8]	; fCount
        14ae50:	e590200c 	ldr	r2, [r0, #12]	; fArrayBlock
        14ae54:	e1520001 	cmp	r2, r1
        14ae58:	a2822001 	addge	r2, r2, #1	; 0x1
        14ae5c:	a580200c 	strge	r2, [r0, #12]	; fArrayBlock
        14ae60:	e5902004 	ldr	r2, [r0, #4]	; TOptionIterator
        14ae64:	e1520001 	cmp	r2, r1
        14ae68:	a2822001 	addge	r2, r2, #1	; 0x1
        14ae6c:	a5802004 	strge	r2, [r0, #4]	; TOptionIterator
        14ae70:	e5903004 	ldr	r3, [r0, #4]	; TOptionIterator
        14ae74:	e3730001 	cmn	r3, #1	; 0x1
        14ae78:	da00000e 	ble	14aeb8 <TOptionIterator::InsertOptionAt(long)+0x7c>
        14ae7c:	e5902000 	ldr	r2, [r0]
        14ae80:	e5922004 	ldr	r2, [r2, #4]	; TOptionIterator
        14ae84:	e5802010 	str	r2, [r0, #16]	; fIterator
        14ae88:	e3a02000 	mov	r2, #0	; 0x0
        14ae8c:	e3530000 	cmp	r3, #0	; 0x0
        14ae90:	da000008 	ble	14aeb8 <TOptionIterator::InsertOptionAt(long)+0x7c>
        14ae94:	e590e010 	ldr	lr, [r0, #16]	; fIterator
        14ae98:	e59ec004 	ldr	ip, [lr, #4]	; TOptionIterator
        14ae9c:	e28cc00f 	add	ip, ip, #15	; 0xf
        14aea0:	e3ccc003 	bic	ip, ip, #3	; 0x3
        14aea4:	e08ec00c 	add	ip, lr, ip
        14aea8:	e2822001 	add	r2, r2, #1	; 0x1
        14aeac:	e1530002 	cmp	r3, r2
        14aeb0:	e580c010 	str	ip, [r0, #16]	; fIterator
        14aeb4:	cafffff6 	bgt	14ae94 <TOptionIterator::InsertOptionAt(long)+0x58>
        14aeb8:	e5902000 	ldr	r2, [r0]
        14aebc:	e3320000 	teq	r2, #0	; 0x0
        14aec0:	15900018 	ldrne	r0, [r0, #24]	; fIsShared
        14aec4:	15922008 	ldrne	r2, [r2, #8]	; fCount
        14aec8:	11300002 	teqne	r0, r2
        14aecc:	18bd4000 	ldmneia	sp!, {lr}
        14aed0:	1a62ed1f 	bne	1a06354 <TOptionIterator::$InsertOptionAt(long)>
        14aed4:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TOptionIterator::CurrentIndex(void)
 * Address: 0014aed8
 */
ArrayIndex	TOptionIterator::CurrentIndex(void) {
    /*
        14aed8:	e5901000 	ldr	r1, [r0]
        14aedc:	e3310000 	teq	r1, #0	; 0x0
        14aee0:	03e00000 	mvneq	r0, #0	; 0x0
        14aee4:	15900004 	ldrne	r0, [r0, #4]	; TOptionIterator
        14aee8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOptionIterator::FirstIndex(void)
 * Address: 0014aeec
 */
ArrayIndex	TOptionIterator::FirstIndex(void) {
    /*
        14aeec:	e1a0c00d 	mov	ip, sp
        14aef0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14aef4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14aef8:	e1a04000 	mov	r4, r0
        14aefc:	eb69bf85 	bl	1bbad18 <TOptionIterator::$Reset(void)>
        14af00:	e1a00004 	mov	r0, r4
        14af04:	eb69bb6d 	bl	1bb9cc0 <TOptionIterator::$More(void)>
        14af08:	e3300000 	teq	r0, #0	; 0x0
        14af0c:	03e00000 	mvneq	r0, #0	; 0x0
        14af10:	15b40004 	ldrne	r0, [r4, #4]!	; TOptionIterator
        14af14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionIterator::NextIndex(void)
 * Address: 0014af18
 */
ArrayIndex	TOptionIterator::NextIndex(void) {
    /*
        14af18:	e1a0c00d 	mov	ip, sp
        14af1c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14af20:	e24cb004 	sub	fp, ip, #4	; 0x4
        14af24:	e1a04000 	mov	r4, r0
        14af28:	eb69af0e 	bl	1bb6b68 <TOptionIterator::$Advance(void)>
        14af2c:	e1a00004 	mov	r0, r4
        14af30:	eb69bb62 	bl	1bb9cc0 <TOptionIterator::$More(void)>
        14af34:	e3300000 	teq	r0, #0	; 0x0
        14af38:	03e00000 	mvneq	r0, #0	; 0x0
        14af3c:	15b40004 	ldrne	r0, [r4, #4]!	; TOptionIterator
        14af40:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionIterator::CurrentOption(void)
 * Address: 0014af44
 */
TOption*	TOptionIterator::CurrentOption(void) {
    /*
        14af44:	e5901000 	ldr	r1, [r0]
        14af48:	e3310000 	teq	r1, #0	; 0x0
        14af4c:	03a00000 	moveq	r0, #0	; 0x0
        14af50:	15900010 	ldrne	r0, [r0, #16]	; fIterator
        14af54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOptionIterator::FindOption(unsigned long)
 * Address: 0014af58
 */
TOption*	TOptionIterator::FindOption(ULong label) {
    /*
        14af58:	e1a0c00d 	mov	ip, sp
        14af5c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14af60:	e24cb004 	sub	fp, ip, #4	; 0x4
        14af64:	e1a04000 	mov	r4, r0
        14af68:	e1a05001 	mov	r5, r1
        14af6c:	e3a07000 	mov	r7, #0	; 0x0
        14af70:	eb69b729 	bl	1bb8c1c <TOptionIterator::$FirstOption(void)>
        14af74:	e1a06000 	mov	r6, r0
        14af78:	e1a00004 	mov	r0, r4
        14af7c:	eb69bb4f 	bl	1bb9cc0 <TOptionIterator::$More(void)>
        14af80:	e3300000 	teq	r0, #0	; 0x0
        14af84:	0a00000d 	beq	14afc0 <TOptionIterator::FindOption(unsigned long)+0x68>
        14af88:	e5960000 	ldr	r0, [r6]
        14af8c:	e1300005 	teq	r0, r5
        14af90:	0a000008 	beq	14afb8 <TOptionIterator::FindOption(unsigned long)+0x60>
        14af94:	e1a00004 	mov	r0, r4
        14af98:	eb69bb4b 	bl	1bb9ccc <TOptionIterator::$NextOption(void)>
        14af9c:	e1a06000 	mov	r6, r0
        14afa0:	e1a00004 	mov	r0, r4
        14afa4:	eb69bb45 	bl	1bb9cc0 <TOptionIterator::$More(void)>
        14afa8:	e3300000 	teq	r0, #0	; 0x0
        14afac:	1afffff5 	bne	14af88 <TOptionIterator::FindOption(unsigned long)+0x30>
        14afb0:	e3370000 	teq	r7, #0	; 0x0
        14afb4:	0a000001 	beq	14afc0 <TOptionIterator::FindOption(unsigned long)+0x68>
        14afb8:	e1a00006 	mov	r0, r6
        14afbc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        14afc0:	e3a00000 	mov	r0, #0	; 0x0
        14afc4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionIterator::FirstOption(void)
 * Address: 0014afdc
 */
TOption*	TOptionIterator::FirstOption(void) {
    /*
        14afdc:	e1a0c00d 	mov	ip, sp
        14afe0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14afe4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14afe8:	e1a04000 	mov	r4, r0
        14afec:	eb69b709 	bl	1bb8c18 <TOptionIterator::$FirstIndex(void)>
        14aff0:	e5b40010 	ldr	r0, [r4, #16]!	; fIterator
        14aff4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionIterator::NextOption(void)
 * Address: 0014aff8
 */
TOption*	TOptionIterator::NextOption(void) {
    /*
        14aff8:	e1a0c00d 	mov	ip, sp
        14affc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14b000:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b004:	e1a04000 	mov	r4, r0
        14b008:	eb69bb2e 	bl	1bb9cc8 <TOptionIterator::$NextIndex(void)>
        14b00c:	e5b40010 	ldr	r0, [r4, #16]!	; fIterator
        14b010:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

