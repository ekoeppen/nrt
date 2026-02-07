#include "include/TDockerDynArray.h"

/**
 * Symbol: TDockerDynArray::AddAndReplaceZero(unsigned long, long &)
 * Address: 0009266c
 */
TDockerDynArray::AddAndReplaceZero(unsigned long, long &) {
    /*
         9266c:	e1a0c00d 	mov	ip, sp
         92670:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         92674:	e24cb004 	sub	fp, ip, #4	; 0x4
         92678:	e1a04000 	mov	r4, r0
         9267c:	e1a06001 	mov	r6, r1
         92680:	e1a05002 	mov	r5, r2
         92684:	e3a07000 	mov	r7, #0	; 0x0
         92688:	e3a01000 	mov	r1, #0	; 0x0
         9268c:	eb68ba88 	bl	1ac10b4 <TDockerDynArray::$Find(long)>
         92690:	e5850000 	str	r0, [r5]
         92694:	e3500000 	cmp	r0, #0	; 0x0
         92698:	a5941000 	ldrge	r1, [r4]
         9269c:	a5911000 	ldrge	r1, [r1]
         926a0:	a7816100 	strge	r6, [r1, r0, lsl #2]	; fField2
         926a4:	aa000006 	bge	926c4 <TDockerDynArray::AddAndReplaceZero(unsigned long, long &)+0x58>
         926a8:	e1a01006 	mov	r1, r6
         926ac:	e1a00004 	mov	r0, r4
         926b0:	eb68576d 	bl	1aa846c <TDockerDynArray::$Add(unsigned long)>
         926b4:	e1a07000 	mov	r7, r0
         926b8:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         926bc:	e2400001 	sub	r0, r0, #1	; 0x1
         926c0:	e5850000 	str	r0, [r5]
         926c4:	e1a00007 	mov	r0, r7
         926c8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TDockerDynArray::Replace(long, unsigned long)
 * Address: 00092cdc
 */
TDockerDynArray::Replace(long, unsigned long) {
    /*
         92cdc:	e5903004 	ldr	r3, [r0, #4]	; fField4
         92ce0:	e1530001 	cmp	r3, r1
         92ce4:	91a0f00e 	movls	pc, lr
         92ce8:	e5900000 	ldr	r0, [r0]
         92cec:	e5900000 	ldr	r0, [r0]
         92cf0:	e7802101 	str	r2, [r0, r1, lsl #2]	; fField2
         92cf4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDockerDynArray::Find(long)
 * Address: 000932e8
 */
TDockerDynArray::Find(long) {
    /*
         932e8:	e5902000 	ldr	r2, [r0]
         932ec:	e3320000 	teq	r2, #0	; 0x0
         932f0:	15903004 	ldrne	r3, [r0, #4]	; fField4
         932f4:	13530000 	cmpne	r3, #0	; 0x0
         932f8:	0a00000a 	beq	93328 <TDockerDynArray::Find(long)+0x40>
         932fc:	e3a02000 	mov	r2, #0	; 0x0
         93300:	9a000008 	bls	93328 <TDockerDynArray::Find(long)+0x40>
         93304:	e5900000 	ldr	r0, [r0]
         93308:	e5900000 	ldr	r0, [r0]
         9330c:	e790c102 	ldr	ip, [r0, r2, lsl #2]	; fField2
         93310:	e13c0001 	teq	ip, r1
         93314:	01a00002 	moveq	r0, r2
         93318:	01a0f00e 	moveq	pc, lr
         9331c:	e2822001 	add	r2, r2, #1	; 0x1
         93320:	e1530002 	cmp	r3, r2
         93324:	8afffff8 	bhi	9330c <TDockerDynArray::Find(long)+0x24>
         93328:	e3e00000 	mvn	r0, #0	; 0x0
         9332c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TDockerDynArray::__ct(void)
 * Address: 00099f34
 */
TDockerDynArray::TDockerDynArray(void) {
    /*
         99f34:	e1a0c00d 	mov	ip, sp
         99f38:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         99f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         99f40:	e3300000 	teq	r0, #0	; 0x0
         99f44:	1a000003 	bne	99f58 <TDockerDynArray::__ct(void)+0x24>
         99f48:	e3a0000c 	mov	r0, #12	; 0xc
         99f4c:	eb6cd1f9 	bl	1bce738 <$__nw(unsigned int)>
         99f50:	e3300000 	teq	r0, #0	; 0x0
         99f54:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         99f58:	e3a01000 	mov	r1, #0	; 0x0
         99f5c:	e5801000 	str	r1, [r0]
         99f60:	e5801004 	str	r1, [r0, #4]	; fField4
         99f64:	e5801008 	str	r1, [r0, #8]	; fField8
         99f68:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TDockerDynArray::__dt(void)
 * Address: 0009b0f4
 */
TDockerDynArray::~TDockerDynArray(void) {
    /*
         9b0f4:	e1a0c00d 	mov	ip, sp
         9b0f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         9b0fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         9b100:	e1a04000 	mov	r4, r0
         9b104:	e1a05001 	mov	r5, r1
         9b108:	e5900000 	ldr	r0, [r0]
         9b10c:	e3300000 	teq	r0, #0	; 0x0
         9b110:	1b6d17e6 	blne	1be10b0 <$DisposHandle>
         9b114:	e3150001 	tst	r5, #1	; 0x1
         9b118:	11a00004 	movne	r0, r4
         9b11c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         9b120:	1a6cc96e 	bne	1bcd6e0 <$__dl(void *)>
         9b124:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TDockerDynArray::Add(unsigned long)
 * Address: 0009ba80
 */
TDockerDynArray::Add(unsigned long) {
    /*
         9ba80:	e1a0c00d 	mov	ip, sp
         9ba84:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         9ba88:	e24cb004 	sub	fp, ip, #4	; 0x4
         9ba8c:	e1a04000 	mov	r4, r0
         9ba90:	e1a05001 	mov	r5, r1
         9ba94:	e3a06000 	mov	r6, #0	; 0x0
         9ba98:	e5900000 	ldr	r0, [r0]
         9ba9c:	e3300000 	teq	r0, #0	; 0x0
         9baa0:	1a000008 	bne	9bac8 <TDockerDynArray::Add(unsigned long)+0x48>
         9baa4:	e3a0001e 	mov	r0, #30	; 0x1e
         9baa8:	e5840008 	str	r0, [r4, #8]	; fField8
         9baac:	e3a00078 	mov	r0, #120	; 0x78
         9bab0:	eb6d199d 	bl	1be212c <$NewHandle>
         9bab4:	e5840000 	str	r0, [r4]
         9bab8:	e3300000 	teq	r0, #0	; 0x0
         9babc:	03a000e9 	moveq	r0, #233	; 0xe9
         9bac0:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         9bac4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         9bac8:	e5940008 	ldr	r0, [r4, #8]	; fField8
         9bacc:	e5941004 	ldr	r1, [r4, #4]	; fField4
         9bad0:	e1510000 	cmp	r1, r0
         9bad4:	3a000007 	bcc	9baf8 <TDockerDynArray::Add(unsigned long)+0x78>
         9bad8:	e280001e 	add	r0, r0, #30	; 0x1e
         9badc:	e5840008 	str	r0, [r4, #8]	; fField8
         9bae0:	e1a01100 	mov	r1, r0, lsl #2
         9bae4:	e5940000 	ldr	r0, [r4]
         9bae8:	eb6d19a3 	bl	1be217c <$SetHandleSize>
         9baec:	eb6d198b 	bl	1be2120 <$MemError>
         9baf0:	e1b06000 	movs	r6, r0
         9baf4:	1a000006 	bne	9bb14 <TDockerDynArray::Add(unsigned long)+0x94>
         9baf8:	e5940004 	ldr	r0, [r4, #4]	; fField4
         9bafc:	e5941000 	ldr	r1, [r4]
         9bb00:	e5911000 	ldr	r1, [r1]
         9bb04:	e7815100 	str	r5, [r1, r0, lsl #2]	; fField2
         9bb08:	e5940004 	ldr	r0, [r4, #4]	; fField4
         9bb0c:	e2800001 	add	r0, r0, #1	; 0x1
         9bb10:	e5a40004 	str	r0, [r4, #4]!	; fField4
         9bb14:	e1a00006 	mov	r0, r6
         9bb18:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

