#include "include/TStoreHashTableIterator.h"

/**
 * Symbol: TStoreHashTableIterator::__ct(TStoreHashTable *)
 * Address: 00353794
 */
TStoreHashTableIterator::TStoreHashTableIterator(TStoreHashTable *) {
    /*
        353794:	e1a0c00d 	mov	ip, sp
        353798:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        35379c:	e24cb004 	sub	fp, ip, #4	; 0x4
        3537a0:	e1b04000 	movs	r4, r0
        3537a4:	e1a05001 	mov	r5, r1
        3537a8:	1a000003 	bne	3537bc <TStoreHashTableIterator::__ct(TStoreHashTable *)+0x28>
        3537ac:	e3a0001c 	mov	r0, #28	; 0x1c
        3537b0:	eb61ebe0 	bl	1bce738 <$__nw(unsigned int)>
        3537b4:	e1b04000 	movs	r4, r0
        3537b8:	0a00000a 	beq	3537e8 <TStoreHashTableIterator::__ct(TStoreHashTable *)+0x54>
        3537bc:	e3e00000 	mvn	r0, #0	; 0x0
        3537c0:	e5840004 	str	r0, [r4, #4]	; fField4
        3537c4:	e3a00000 	mov	r0, #0	; 0x0
        3537c8:	e584000c 	str	r0, [r4, #12]	; fField12
        3537cc:	e5845000 	str	r5, [r4]
        3537d0:	e5840010 	str	r0, [r4, #16]	; fField16
        3537d4:	e5c40015 	strb	r0, [r4, #21]
        3537d8:	e5c40014 	strb	r0, [r4, #20]	; fField20
        3537dc:	e5840018 	str	r0, [r4, #24]	; fField24
        3537e0:	e1a00004 	mov	r0, r4
        3537e4:	eb61c6c0 	bl	1bc52ec <TStoreHashTableIterator::$Next(void)>
        3537e8:	e1a00004 	mov	r0, r4
        3537ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreHashTableIterator::Next(void)
 * Address: 003537f0
 */
TStoreHashTableIterator::Next(void) {
    /*
        3537f0:	e1a0c00d 	mov	ip, sp
        3537f4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        3537f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        3537fc:	e1a04000 	mov	r4, r0
        353800:	e5900018 	ldr	r0, [r0, #24]	; fField24
        353804:	e3300000 	teq	r0, #0	; 0x0
        353808:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        35380c:	e5941010 	ldr	r1, [r4, #16]	; fField16
        353810:	e5940014 	ldr	r0, [r4, #20]	; fField20
        353814:	e0810840 	add	r0, r1, r0, asr #16
        353818:	e2800002 	add	r0, r0, #2	; 0x2
        35381c:	e5840010 	str	r0, [r4, #16]	; fField16
        353820:	e594100c 	ldr	r1, [r4, #12]	; fField12
        353824:	e1500001 	cmp	r0, r1
        353828:	ba00001a 	blt	353898 <TStoreHashTableIterator::Next(void)+0xa8>
        35382c:	e3a06000 	mov	r6, #0	; 0x0
        353830:	e284500c 	add	r5, r4, #12	; 0xc
        353834:	e5846010 	str	r6, [r4, #16]	; fField16
        353838:	e5940004 	ldr	r0, [r4, #4]	; fField4
        35383c:	e2800001 	add	r0, r0, #1	; 0x1
        353840:	e5840004 	str	r0, [r4, #4]	; fField4
        353844:	e3300040 	teq	r0, #64	; 0x40
        353848:	03a00001 	moveq	r0, #1	; 0x1
        35384c:	05a40018 	streq	r0, [r4, #24]!	; fField24
        353850:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        353854:	e1a01000 	mov	r1, r0
        353858:	e5940000 	ldr	r0, [r4]
        35385c:	e0801101 	add	r1, r0, r1, lsl #2
        353860:	e5911004 	ldr	r1, [r1, #4]	; fField4
        353864:	e5841008 	str	r1, [r4, #8]	; fField8
        353868:	e3310000 	teq	r1, #0	; 0x0
        35386c:	0584600c 	streq	r6, [r4, #12]	; fField12
        353870:	0a000004 	beq	353888 <TStoreHashTableIterator::Next(void)+0x98>
        353874:	e1a02005 	mov	r2, r5
        353878:	e5900104 	ldr	r0, [r0, #260]	; fField260
        35387c:	eb5e9d1f 	bl	1afad00 <TStore::$GetObjectSize(unsigned long, long *)>
        353880:	e3300000 	teq	r0, #0	; 0x0
        353884:	1b5ba567 	blne	1a3ce28 <$_OSErr(long)>
        353888:	e284100c 	add	r1, r4, #12	; 0xc
        35388c:	e8910003 	ldmia	r1, {r0, r1}
        353890:	e1510000 	cmp	r1, r0
        353894:	aaffffe6 	bge	353834 <TStoreHashTableIterator::Next(void)+0x44>
        353898:	e3a03002 	mov	r3, #2	; 0x2
        35389c:	e92d0008 	stmdb	sp!, {r3}
        3538a0:	e2843014 	add	r3, r4, #20	; 0x14
        3538a4:	e4940008 	ldr	r0, [r4], #8	; fField8
        3538a8:	e4941008 	ldr	r1, [r4], #8	; fField8
        3538ac:	e5942000 	ldr	r2, [r4]
        3538b0:	e5900104 	ldr	r0, [r0, #260]	; fField260
        3538b4:	eb5eba21 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        3538b8:	e28dd004 	add	sp, sp, #4	; 0x4
        3538bc:	e3300000 	teq	r0, #0	; 0x0
        3538c0:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        3538c4:	1a5ba557 	bne	1a3ce28 <$_OSErr(long)>
        3538c8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreHashTableIterator::GetData(char *, long *)
 * Address: 003538cc
 */
TStoreHashTableIterator::GetData(char *, long *) {
    /*
        3538cc:	e1a0c00d 	mov	ip, sp
        3538d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        3538d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3538d8:	e1a04002 	mov	r4, r2
        3538dc:	e5905014 	ldr	r5, [r0, #20]	; fField20
        3538e0:	e1a05845 	mov	r5, r5, asr #16
        3538e4:	e5922000 	ldr	r2, [r2]
        3538e8:	e1550002 	cmp	r5, r2
        3538ec:	c1a05002 	movgt	r5, r2
        3538f0:	e1a03005 	mov	r3, r5
        3538f4:	e92d0008 	stmdb	sp!, {r3}
        3538f8:	e5902010 	ldr	r2, [r0, #16]	; fField16
        3538fc:	e2822002 	add	r2, r2, #2	; 0x2
        353900:	e590c008 	ldr	ip, [r0, #8]	; fField8
        353904:	e5900000 	ldr	r0, [r0]
        353908:	e5900104 	ldr	r0, [r0, #260]	; fField260
        35390c:	e1a03001 	mov	r3, r1
        353910:	e1a0100c 	mov	r1, ip
        353914:	eb5eba09 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        353918:	e28dd004 	add	sp, sp, #4	; 0x4
        35391c:	e3300000 	teq	r0, #0	; 0x0
        353920:	1b5ba540 	blne	1a3ce28 <$_OSErr(long)>
        353924:	e5845000 	str	r5, [r4]
        353928:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

