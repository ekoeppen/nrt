#include "include/TBucketArray.h"

/**
 * Symbol: TBucketArray::__ct(long)
 * Address: 00355710
 */
TBucketArray::TBucketArray(long) {
    /*
        355710:	e1a0c00d 	mov	ip, sp
        355714:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        355718:	e24cb004 	sub	fp, ip, #4	; 0x4
        35571c:	e1a04001 	mov	r4, r1
        355720:	e3300000 	teq	r0, #0	; 0x0
        355724:	1a000003 	bne	355738 <TBucketArray::__ct(long)+0x28>
        355728:	e3a00010 	mov	r0, #16	; 0x10
        35572c:	eb61e401 	bl	1bce738 <$__nw(unsigned int)>
        355730:	e3300000 	teq	r0, #0	; 0x0
        355734:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        355738:	e3a01000 	mov	r1, #0	; 0x0
        35573c:	e5801004 	str	r1, [r0, #4]	; fField4
        355740:	e5804000 	str	r4, [r0]
        355744:	e5801008 	str	r1, [r0, #8]	; fField8
        355748:	e580100c 	str	r1, [r0, #12]	; fField12
        35574c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TBucketArray::__dt(void)
 * Address: 00355750
 */
TBucketArray::~TBucketArray(void) {
    /*
        355750:	e1a0c00d 	mov	ip, sp
        355754:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        355758:	e24cb004 	sub	fp, ip, #4	; 0x4
        35575c:	e1a04000 	mov	r4, r0
        355760:	e1a05001 	mov	r5, r1
        355764:	e3a06000 	mov	r6, #0	; 0x0
        355768:	e2807008 	add	r7, r0, #8	; 0x8
        35576c:	e8970081 	ldmia	r7, {r0, r7}
        355770:	e3500000 	cmp	r0, #0	; 0x0
        355774:	da000005 	ble	355790 <TBucketArray::__dt(void)+0x40>
        355778:	e4970004 	ldr	r0, [r7], #4	; fField4
        35577c:	eb61f475 	bl	1bd2958 <$free>
        355780:	e2866001 	add	r6, r6, #1	; 0x1
        355784:	e5940008 	ldr	r0, [r4, #8]	; fField8
        355788:	e1500006 	cmp	r0, r6
        35578c:	cafffff9 	bgt	355778 <TBucketArray::__dt(void)+0x28>
        355790:	e594000c 	ldr	r0, [r4, #12]	; fField12
        355794:	eb61f46f 	bl	1bd2958 <$free>
        355798:	e3150001 	tst	r5, #1	; 0x1
        35579c:	11a00004 	movne	r0, r4
        3557a0:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        3557a4:	1a61dfcd 	bne	1bcd6e0 <$__dl(void *)>
        3557a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TBucketArray::ElementAt(long)
 * Address: 00355c44
 */
TBucketArray::ElementAt(long) {
    /*
        355c44:	e1a0c00d 	mov	ip, sp
        355c48:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        355c4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        355c50:	e1a05000 	mov	r5, r0
        355c54:	e1b04001 	movs	r4, r1
        355c58:	4a000002 	bmi	355c68 <TBucketArray::ElementAt(long)+0x24>
        355c5c:	e5950004 	ldr	r0, [r5, #4]	; fField4
        355c60:	e1500004 	cmp	r0, r4
        355c64:	ca000005 	bgt	355c80 <TBucketArray::ElementAt(long)+0x3c>
        355c68:	e59f002c 	ldr	r0, [pc, #2c]	; 355c9c <TBucketArray::ElementAt(long)+0x58>
        355c6c:	e5900000 	ldr	r0, [r0]
        355c70:	e3a02000 	mov	r2, #0	; 0x0
        355c74:	e3a010a5 	mov	r1, #165	; 0xa5
        355c78:	e2411cbd 	sub	r1, r1, #48384	; 0xbd00
        355c7c:	eb623546 	bl	1be319c <$Throw>
        355c80:	e1a00344 	mov	r0, r4, asr #6
        355c84:	e595100c 	ldr	r1, [r5, #12]	; fField12
        355c88:	e7910100 	ldr	r0, [r1, r0, lsl #2]
        355c8c:	e204103f 	and	r1, r4, #63	; 0x3f
        355c90:	e5952000 	ldr	r2, [r5]
        355c94:	e0200192 	mla	r0, r2, r1, r0
        355c98:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        355c9c:	00371308 	eoreqs	r1, r7, r8, lsl #6
    */
}

/**
 * Symbol: TBucketArray::SetNumberOfElements(long)
 * Address: 00355ebc
 */
TBucketArray::SetNumberOfElements(long) {
    /*
        355ebc:	e1a0c00d 	mov	ip, sp
        355ec0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        355ec4:	e24cb004 	sub	fp, ip, #4	; 0x4
        355ec8:	e1a04000 	mov	r4, r0
        355ecc:	e1a05001 	mov	r5, r1
        355ed0:	e3a00001 	mov	r0, #1	; 0x1
        355ed4:	e0807341 	add	r7, r0, r1, asr #6
        355ed8:	e5940008 	ldr	r0, [r4, #8]	; fField8
        355edc:	e59f805c 	ldr	r8, [pc, #5c]	; 355f40 <TBucketArray::SetNumberOfElements(long)+0x84>
        355ee0:	e3a060e9 	mov	r6, #233	; 0xe9
        355ee4:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
        355ee8:	e1500007 	cmp	r0, r7
        355eec:	da000014 	ble	355f44 <TBucketArray::SetNumberOfElements(long)+0x88>
        355ef0:	e1a09007 	mov	r9, r7
        355ef4:	da000006 	ble	355f14 <TBucketArray::SetNumberOfElements(long)+0x58>
        355ef8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        355efc:	e7900109 	ldr	r0, [r0, r9, lsl #2]
        355f00:	eb61f294 	bl	1bd2958 <$free>
        355f04:	e2899001 	add	r9, r9, #1	; 0x1
        355f08:	e5940008 	ldr	r0, [r4, #8]	; fField8
        355f0c:	e1500009 	cmp	r0, r9
        355f10:	cafffff8 	bgt	355ef8 <TBucketArray::SetNumberOfElements(long)+0x3c>
        355f14:	e1a01107 	mov	r1, r7, lsl #2
        355f18:	e594000c 	ldr	r0, [r4, #12]	; fField12
        355f1c:	eb627abf 	bl	1bf4a20 <$realloc>
        355f20:	e1b09000 	movs	r9, r0
        355f24:	1a000003 	bne	355f38 <TBucketArray::SetNumberOfElements(long)+0x7c>
        355f28:	e3a02000 	mov	r2, #0	; 0x0
        355f2c:	e1a01006 	mov	r1, r6
        355f30:	e5980000 	ldr	r0, [r8]
        355f34:	eb623498 	bl	1be319c <$Throw>
        355f38:	e584900c 	str	r9, [r4, #12]	; fField12
        355f3c:	ea00001c 	b	355fb4 <TBucketArray::SetNumberOfElements(long)+0xf8>
        355f40:	00371318 	eoreqs	r1, r7, r8, lsl r3
        355f44:	aa00001b 	bge	355fb8 <TBucketArray::SetNumberOfElements(long)+0xfc>
        355f48:	e1a01107 	mov	r1, r7, lsl #2
        355f4c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        355f50:	eb627ab2 	bl	1bf4a20 <$realloc>
        355f54:	e1b09000 	movs	r9, r0
        355f58:	1a000003 	bne	355f6c <TBucketArray::SetNumberOfElements(long)+0xb0>
        355f5c:	e3a02000 	mov	r2, #0	; 0x0
        355f60:	e1a01006 	mov	r1, r6
        355f64:	e5980000 	ldr	r0, [r8]
        355f68:	eb62348b 	bl	1be319c <$Throw>
        355f6c:	e584900c 	str	r9, [r4, #12]	; fField12
        355f70:	e5949008 	ldr	r9, [r4, #8]	; fField8
        355f74:	e1590007 	cmp	r9, r7
        355f78:	aa00000d 	bge	355fb4 <TBucketArray::SetNumberOfElements(long)+0xf8>
        355f7c:	e5940000 	ldr	r0, [r4]
        355f80:	e1a00300 	mov	r0, r0, lsl #6
        355f84:	eb6202f7 	bl	1bd6b68 <$malloc>
        355f88:	e594100c 	ldr	r1, [r4, #12]	; fField12
        355f8c:	e7810109 	str	r0, [r1, r9, lsl #2]
        355f90:	e3300000 	teq	r0, #0	; 0x0
        355f94:	1a000003 	bne	355fa8 <TBucketArray::SetNumberOfElements(long)+0xec>
        355f98:	e3a02000 	mov	r2, #0	; 0x0
        355f9c:	e1a01006 	mov	r1, r6
        355fa0:	e5980000 	ldr	r0, [r8]
        355fa4:	eb62347c 	bl	1be319c <$Throw>
        355fa8:	e2899001 	add	r9, r9, #1	; 0x1
        355fac:	e1590007 	cmp	r9, r7
        355fb0:	bafffff1 	blt	355f7c <TBucketArray::SetNumberOfElements(long)+0xc0>
        355fb4:	e5847008 	str	r7, [r4, #8]	; fField8
        355fb8:	e5a45004 	str	r5, [r4, #4]!	; fField4
        355fbc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

