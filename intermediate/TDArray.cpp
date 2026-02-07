#include "include/TDArray.h"

/**
 * Symbol: TDArray::__ct(void)
 * Address: 0020c764
 */
TDArray::TDArray(void) {
    /*
        20c764:	e1a0c00d 	mov	ip, sp
        20c768:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        20c76c:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c770:	e1b04000 	movs	r4, r0
        20c774:	1a000003 	bne	20c788 <TDArray::__ct(void)+0x24>
        20c778:	e3a00020 	mov	r0, #32	; 0x20
        20c77c:	eb6707ed 	bl	1bce738 <$__nw(unsigned int)>
        20c780:	e1b04000 	movs	r4, r0
        20c784:	0a000003 	beq	20c798 <TDArray::__ct(void)+0x34>
        20c788:	e1a00004 	mov	r0, r4
        20c78c:	ebfff1c1 	bl	208e98 <TArray::__ct(void)>
        20c790:	e59f0008 	ldr	r0, [pc, #8]	; 20c7a0 <TDArray::__ct(void)+0x3c>	; fField8
        20c794:	e5840000 	str	r0, [r4]
        20c798:	e1a00004 	mov	r0, r4
        20c79c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        20c7a0:	0001fb8c 	andeq	pc, r1, ip, lsl #23
    */
}

/**
 * Symbol: Make__7TDArraySFUlT1
 * Address: 0020c7a4
 */
void TDArray::Make() {
    /*
        20c7a4:	e1a0c00d 	mov	ip, sp
        20c7a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        20c7ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c7b0:	e1a05000 	mov	r5, r0
        20c7b4:	e1a04001 	mov	r4, r1
        20c7b8:	e3a00000 	mov	r0, #0	; 0x0
        20c7bc:	ebffffe8 	bl	20c764 <TDArray::__ct(void)>
        20c7c0:	e1b06000 	movs	r6, r0
        20c7c4:	0a00000b 	beq	20c7f8 <Make__7TDArraySFUlT1+0x54>
        20c7c8:	e3a00000 	mov	r0, #0	; 0x0
        20c7cc:	e1a02004 	mov	r2, r4
        20c7d0:	e1a01005 	mov	r1, r5
        20c7d4:	e586001c 	str	r0, [r6, #28]	; fField28
        20c7d8:	e1a00006 	mov	r0, r6
        20c7dc:	eb654df7 	bl	1b5ffc0 <TArray::$IArray(unsigned long, unsigned long)>
        20c7e0:	e3300000 	teq	r0, #0	; 0x0
        20c7e4:	0a000003 	beq	20c7f8 <Make__7TDArraySFUlT1+0x54>
        20c7e8:	e1a00006 	mov	r0, r6
        20c7ec:	e1a0e00f 	mov	lr, pc
        20c7f0:	e596f000 	ldr	pc, [r6]
        20c7f4:	e3a06000 	mov	r6, #0	; 0x0
        20c7f8:	e1a00006 	mov	r0, r6
        20c7fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDArray::IDArray(unsigned long, unsigned long)
 * Address: 0020c800
 */
TDArray::IDArray(unsigned long, unsigned long) {
    /*
        20c800:	e1a0c00d 	mov	ip, sp
        20c804:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        20c808:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c80c:	e1a04000 	mov	r4, r0
        20c810:	eb654dea 	bl	1b5ffc0 <TArray::$IArray(unsigned long, unsigned long)>
        20c814:	e1a05000 	mov	r5, r0
        20c818:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        20c81c:	e59f1008 	ldr	r1, [pc, #8]	; 20c82c <TDArray::IDArray(unsigned long, unsigned long)+0x2c>	; fField8
        20c820:	eb658399 	bl	1b6d68c <$NameHandle(char **, unsigned long)>
        20c824:	e1a00005 	mov	r0, r5
        20c828:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        20c82c:	64447461 	strvsb	r7, [r4], -#1121
    */
}

/**
 * Symbol: TDArray::Delete(unsigned long)
 * Address: 0020c830
 */
TDArray::Delete(unsigned long) {
    /*
        20c830:	e3a02001 	mov	r2, #1	; 0x1
        20c834:	e5903000 	ldr	r3, [r0]
        20c838:	e283f044 	add	pc, r3, #68	; 0x44
    */
}

/**
 * Symbol: TDArray::DeleteEntries(unsigned long, unsigned long)
 * Address: 0020c83c
 */
TDArray::DeleteEntries(unsigned long, unsigned long) {
    /*
        20c83c:	e1a0c00d 	mov	ip, sp
        20c840:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        20c844:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c848:	e1a04000 	mov	r4, r0
        20c84c:	e1a05001 	mov	r5, r1
        20c850:	e1b06002 	movs	r6, r2
        20c854:	03a00000 	moveq	r0, #0	; 0x0
        20c858:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        20c85c:	e3550000 	cmp	r5, #0	; 0x0
        20c860:	3a000002 	bcc	20c870 <TDArray::DeleteEntries(unsigned long, unsigned long)+0x34>
        20c864:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20c868:	e1500005 	cmp	r0, r5
        20c86c:	8a000001 	bhi	20c878 <TDArray::DeleteEntries(unsigned long, unsigned long)+0x3c>
        20c870:	e3e00000 	mvn	r0, #0	; 0x0
        20c874:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        20c878:	e0851006 	add	r1, r5, r6
        20c87c:	e1510000 	cmp	r1, r0
        20c880:	20406005 	subcs	r6, r0, r5
        20c884:	e1a01005 	mov	r1, r5
        20c888:	e1a00004 	mov	r0, r4
        20c88c:	e5942000 	ldr	r2, [r4]
        20c890:	e1a0e00f 	mov	lr, pc
        20c894:	e282f01c 	add	pc, r2, #28	; 0x1c
        20c898:	e1b08000 	movs	r8, r0
        20c89c:	0a000013 	beq	20c8f0 <TDArray::DeleteEntries(unsigned long, unsigned long)+0xb4>
        20c8a0:	e0851006 	add	r1, r5, r6
        20c8a4:	e1a07001 	mov	r7, r1
        20c8a8:	e1a00004 	mov	r0, r4
        20c8ac:	e5942000 	ldr	r2, [r4]
        20c8b0:	e1a0e00f 	mov	lr, pc
        20c8b4:	e282f01c 	add	pc, r2, #28	; 0x1c
        20c8b8:	e3300000 	teq	r0, #0	; 0x0
        20c8bc:	0a000005 	beq	20c8d8 <TDArray::DeleteEntries(unsigned long, unsigned long)+0x9c>
        20c8c0:	e594100c 	ldr	r1, [r4, #12]	; fField12
        20c8c4:	e0412007 	sub	r2, r1, r7
        20c8c8:	e5941008 	ldr	r1, [r4, #8]	; fField8
        20c8cc:	e0020291 	mul	r2, r1, r2
        20c8d0:	e1a01008 	mov	r1, r8
        20c8d4:	eb657f62 	bl	1b6c664 <$MoveBlock__FPcT1l>
        20c8d8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20c8dc:	e0400006 	sub	r0, r0, r6
        20c8e0:	e584000c 	str	r0, [r4, #12]	; fField12
        20c8e4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        20c8e8:	e0800006 	add	r0, r0, r6
        20c8ec:	e5a40010 	str	r0, [r4, #16]!	; fField16
        20c8f0:	e1a00005 	mov	r0, r5
        20c8f4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TDArray::Insert(unsigned long)
 * Address: 0020c8f8
 */
TDArray::Insert(unsigned long) {
    /*
        20c8f8:	e1a0c00d 	mov	ip, sp
        20c8fc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        20c900:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c904:	e1a04000 	mov	r4, r0
        20c908:	e1a05001 	mov	r5, r1
        20c90c:	e2816001 	add	r6, r1, #1	; 0x1
        20c910:	e5902000 	ldr	r2, [r0]
        20c914:	e1a0e00f 	mov	lr, pc
        20c918:	e282f01c 	add	pc, r2, #28	; 0x1c
        20c91c:	e1a07000 	mov	r7, r0
        20c920:	e1a00004 	mov	r0, r4
        20c924:	e5941000 	ldr	r1, [r4]
        20c928:	e1a0e00f 	mov	lr, pc
        20c92c:	e281f014 	add	pc, r1, #20	; 0x14
        20c930:	e3700001 	cmn	r0, #1	; 0x1
        20c934:	03e00000 	mvneq	r0, #0	; 0x0
        20c938:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        20c93c:	e3370000 	teq	r7, #0	; 0x0
        20c940:	0a000012 	beq	20c990 <TDArray::Insert(unsigned long)+0x98>
        20c944:	e1a01005 	mov	r1, r5
        20c948:	e1a00004 	mov	r0, r4
        20c94c:	e5942000 	ldr	r2, [r4]
        20c950:	e1a0e00f 	mov	lr, pc
        20c954:	e282f01c 	add	pc, r2, #28	; 0x1c
        20c958:	e1a07000 	mov	r7, r0
        20c95c:	e1a01006 	mov	r1, r6
        20c960:	e1a00004 	mov	r0, r4
        20c964:	e5942000 	ldr	r2, [r4]
        20c968:	e1a0e00f 	mov	lr, pc
        20c96c:	e282f01c 	add	pc, r2, #28	; 0x1c
        20c970:	e2844004 	add	r4, r4, #4	; 0x4
        20c974:	e9b40006 	ldmib	r4!, {r1, r2}
        20c978:	e0423006 	sub	r3, r2, r6
        20c97c:	e0020193 	mul	r2, r3, r1
        20c980:	e1a01000 	mov	r1, r0
        20c984:	e1a00007 	mov	r0, r7
        20c988:	eb657f35 	bl	1b6c664 <$MoveBlock__FPcT1l>
        20c98c:	ea000001 	b	20c998 <TDArray::Insert(unsigned long)+0xa0>
        20c990:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        20c994:	e2405001 	sub	r5, r0, #1	; 0x1
        20c998:	e1a00005 	mov	r0, r5
        20c99c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TDArray::InsertEntry(unsigned long, char *)
 * Address: 0020c9a0
 */
TDArray::InsertEntry(unsigned long, char *) {
    /*
        20c9a0:	e1a0c00d 	mov	ip, sp
        20c9a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        20c9a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        20c9ac:	e1a04000 	mov	r4, r0
        20c9b0:	e1a05002 	mov	r5, r2
        20c9b4:	e5902000 	ldr	r2, [r0]
        20c9b8:	e1a0e00f 	mov	lr, pc
        20c9bc:	e282f048 	add	pc, r2, #72	; 0x48
        20c9c0:	e1a06000 	mov	r6, r0
        20c9c4:	e3700001 	cmn	r0, #1	; 0x1
        20c9c8:	0a000008 	beq	20c9f0 <TDArray::InsertEntry(unsigned long, char *)+0x50>
        20c9cc:	e1a01006 	mov	r1, r6
        20c9d0:	e1a00004 	mov	r0, r4
        20c9d4:	e5942000 	ldr	r2, [r4]
        20c9d8:	e1a0e00f 	mov	lr, pc
        20c9dc:	e282f01c 	add	pc, r2, #28	; 0x1c
        20c9e0:	e1a01000 	mov	r1, r0
        20c9e4:	e1a00005 	mov	r0, r5
        20c9e8:	e5b42008 	ldr	r2, [r4, #8]!	; fField8
        20c9ec:	eb657f1c 	bl	1b6c664 <$MoveBlock__FPcT1l>
        20c9f0:	e1a00006 	mov	r0, r6
        20c9f4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TDArray::InsertEntries(unsigned long, char *, unsigned long)
 * Address: 0020c9f8
 */
TDArray::InsertEntries(unsigned long, char *, unsigned long) {
    /*
        20c9f8:	e1a0c00d 	mov	ip, sp
        20c9fc:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        20ca00:	e24cb004 	sub	fp, ip, #4	; 0x4
        20ca04:	e1a04000 	mov	r4, r0
        20ca08:	e1a05001 	mov	r5, r1
        20ca0c:	e1a06003 	mov	r6, r3
        20ca10:	e5902000 	ldr	r2, [r0]
        20ca14:	e1a0e00f 	mov	lr, pc
        20ca18:	e282f01c 	add	pc, r2, #28	; 0x1c
        20ca1c:	e1a08000 	mov	r8, r0
        20ca20:	e0851006 	add	r1, r5, r6
        20ca24:	e1a00004 	mov	r0, r4
        20ca28:	e5942000 	ldr	r2, [r4]
        20ca2c:	e1a0e00f 	mov	lr, pc
        20ca30:	e282f01c 	add	pc, r2, #28	; 0x1c
        20ca34:	e1a0a000 	mov	sl, r0
        20ca38:	e5940008 	ldr	r0, [r4, #8]	; fField8
        20ca3c:	e0070096 	mul	r7, r6, r0
        20ca40:	e594100c 	ldr	r1, [r4, #12]	; fField12
        20ca44:	e0412005 	sub	r2, r1, r5
        20ca48:	e0090290 	mul	r9, r0, r2
        20ca4c:	e5942014 	ldr	r2, [r4, #20]	; fField20
        20ca50:	e0811002 	add	r1, r1, r2
        20ca54:	e0217190 	mla	r1, r0, r1, r7
        20ca58:	e594001c 	ldr	r0, [r4, #28]	; fField28
        20ca5c:	eb658314 	bl	1b6d6b4 <$ResizeHandle(char **, long)>
        20ca60:	e3300000 	teq	r0, #0	; 0x0
        20ca64:	1a00000e 	bne	20caa4 <TDArray::InsertEntries(unsigned long, char *, unsigned long)+0xac>
        20ca68:	e1a02009 	mov	r2, r9
        20ca6c:	e1a0100a 	mov	r1, sl
        20ca70:	e1a00008 	mov	r0, r8
        20ca74:	eb657efa 	bl	1b6c664 <$MoveBlock__FPcT1l>
        20ca78:	e1a02007 	mov	r2, r7
        20ca7c:	e1a01008 	mov	r1, r8
        20ca80:	e51b0030 	ldr	r0, [fp, -#48]
        20ca84:	eb657ef6 	bl	1b6c664 <$MoveBlock__FPcT1l>
        20ca88:	e594000c 	ldr	r0, [r4, #12]	; fField12
        20ca8c:	e0800006 	add	r0, r0, r6
        20ca90:	e584000c 	str	r0, [r4, #12]	; fField12
        20ca94:	e5940004 	ldr	r0, [r4, #4]	; fField4
        20ca98:	e3800001 	orr	r0, r0, #1	; 0x1
        20ca9c:	e5a40004 	str	r0, [r4, #4]!	; fField4
        20caa0:	ea000000 	b	20caa8 <TDArray::InsertEntries(unsigned long, char *, unsigned long)+0xb0>
        20caa4:	e3e05000 	mvn	r5, #0	; 0x0
        20caa8:	e1a00005 	mov	r0, r5
        20caac:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

