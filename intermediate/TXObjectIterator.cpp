#include "include/TXObjectIterator.h"

/**
 * Symbol: TXObjectIterator::__ct(TXObjectRange const *, long)
 * Address: 00240f60
 */
TXObjectIterator::TXObjectIterator(TXObjectRange const *, long) {
    /*
        240f60:	e1a0c00d 	mov	ip, sp
        240f64:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        240f68:	e24cb004 	sub	fp, ip, #4	; 0x4
        240f6c:	e1b04000 	movs	r4, r0
        240f70:	e1a06001 	mov	r6, r1
        240f74:	e1a05002 	mov	r5, r2
        240f78:	1a000003 	bne	240f8c <TXObjectIterator::__ct(TXObjectRange const *, long)+0x2c>
        240f7c:	e3a00018 	mov	r0, #24	; 0x18
        240f80:	eb6635ec 	bl	1bce738 <$__nw(unsigned int)>
        240f84:	e1b04000 	movs	r4, r0
        240f88:	0a000005 	beq	240fa4 <TXObjectIterator::__ct(TXObjectRange const *, long)+0x44>
        240f8c:	e5846000 	str	r6, [r4]
        240f90:	e5960004 	ldr	r0, [r6, #4]	; fField4
        240f94:	e1a01005 	mov	r1, r5
        240f98:	e5840014 	str	r0, [r4, #20]	; fField20
        240f9c:	e1a00004 	mov	r0, r4
        240fa0:	eb654eb3 	bl	1b94a74 <TXObjectIterator::$SetOffset(long)>
        240fa4:	e1a00004 	mov	r0, r4
        240fa8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectIterator::SetOffset(long)
 * Address: 00241024
 */
TXObjectIterator::SetOffset(long) {
    /*
        241024:	e1a0c00d 	mov	ip, sp
        241028:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        24102c:	e24cb004 	sub	fp, ip, #4	; 0x4
        241030:	e1a04000 	mov	r4, r0
        241034:	e1a05001 	mov	r5, r1
        241038:	e24dd008 	sub	sp, sp, #8	; 0x8
        24103c:	e3a06000 	mov	r6, #0	; 0x0
        241040:	e5801004 	str	r1, [r0, #4]	; fField4
        241044:	e58d1000 	str	r1, [sp]
        241048:	e5cd6004 	strb	r6, [sp, #4]	; fField4
        24104c:	e5900000 	ldr	r0, [r0]
        241050:	e89d0006 	ldmia	sp, {r1, r2}
        241054:	eb6514b5 	bl	1b86330 <TXRanges::$OffsetToRangeIndex( const(TXOffset))>
        241058:	e5840010 	str	r0, [r4, #16]	; fField16
        24105c:	e3500000 	cmp	r0, #0	; 0x0
        241060:	aa000004 	bge	241078 <TXObjectIterator::SetOffset(long)+0x54>
        241064:	e5940014 	ldr	r0, [r4, #20]	; fField20
        241068:	e5840010 	str	r0, [r4, #16]	; fField16
        24106c:	e5846008 	str	r6, [r4, #8]	; fField8
        241070:	e5a4600c 	str	r6, [r4, #12]!	; fField12
        241074:	ea000007 	b	241098 <TXObjectIterator::SetOffset(long)+0x74>
        241078:	e1a01000 	mov	r1, r0
        24107c:	e5940000 	ldr	r0, [r4]
        241080:	eb651092 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        241084:	e5901000 	ldr	r1, [r0]
        241088:	e0411005 	sub	r1, r1, r5
        24108c:	e5841008 	str	r1, [r4, #8]	; fField8
        241090:	e5900004 	ldr	r0, [r0, #4]	; fField4
        241094:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        241098:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXObjectIterator::Next(void)
 * Address: 0024109c
 */
TXObjectIterator::Next(void) {
    /*
        24109c:	e1a0c00d 	mov	ip, sp
        2410a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2410a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2410a8:	e1a04000 	mov	r4, r0
        2410ac:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2410b0:	e2801001 	add	r1, r0, #1	; 0x1
        2410b4:	e5841010 	str	r1, [r4, #16]	; fField16
        2410b8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2410bc:	e1510000 	cmp	r1, r0
        2410c0:	a3a00000 	movge	r0, #0	; 0x0
        2410c4:	a5840008 	strge	r0, [r4, #8]	; fField8
        2410c8:	aa000009 	bge	2410f4 <TXObjectIterator::Next(void)+0x58>
        2410cc:	e9940005 	ldmib	r4, {r0, r2}
        2410d0:	e0800002 	add	r0, r0, r2
        2410d4:	e5840004 	str	r0, [r4, #4]	; fField4
        2410d8:	e5940000 	ldr	r0, [r4]
        2410dc:	eb65107b 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2410e0:	e5942004 	ldr	r2, [r4, #4]	; fField4
        2410e4:	e5901000 	ldr	r1, [r0]
        2410e8:	e0411002 	sub	r1, r1, r2
        2410ec:	e5841008 	str	r1, [r4, #8]	; fField8
        2410f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2410f4:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        2410f8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

