#include "DDKIncludes/UtilityClasses/ArrayIterator.h"

/**
 * Symbol: CDynamicArray::__ct(void)
 * Address: 000a1668
 */
CDynamicArray::CDynamicArray(Size elementSize, ArrayIndex chunkSize) {
    /*
         a1668:	e1a0c00d 	mov	ip, sp
         a166c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         a1670:	e24cb004 	sub	fp, ip, #4	; 0x4
         a1674:	e3300000 	teq	r0, #0	; 0x0
         a1678:	1a000003 	bne	a168c <CDynamicArray::__ct(void)+0x24>
         a167c:	e3a00018 	mov	r0, #24	; 0x18
         a1680:	eb6cb42c 	bl	1bce738 <$__nw(unsigned int)>
         a1684:	e3300000 	teq	r0, #0	; 0x0
         a1688:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         a168c:	e3a01000 	mov	r1, #0	; 0x0
         a1690:	e5801010 	str	r1, [r0, #16]	; fField16
         a1694:	e3a02004 	mov	r2, #4	; 0x4
         a1698:	e580100c 	str	r1, [r0, #12]	; fField12
         a169c:	e5802008 	str	r2, [r0, #8]	; fSize
         a16a0:	e8800006 	stmia	r0, {r1, r2}
         a16a4:	e5801014 	str	r1, [r0, #20]	; fField20
         a16a8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CDynamicArray::__ct(long, long)
 * Address: 000a16ac
 */
CDynamicArray::CDynamicArray(Size elementSize, ArrayIndex chunkSize) {
    /*
         a16ac:	e1a0c00d 	mov	ip, sp
         a16b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a16b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         a16b8:	e1a05001 	mov	r5, r1
         a16bc:	e1a04002 	mov	r4, r2
         a16c0:	e3300000 	teq	r0, #0	; 0x0
         a16c4:	1a000003 	bne	a16d8 <CDynamicArray::__ct(long, long)+0x2c>
         a16c8:	e3a00018 	mov	r0, #24	; 0x18
         a16cc:	eb6cb419 	bl	1bce738 <$__nw(unsigned int)>
         a16d0:	e3300000 	teq	r0, #0	; 0x0
         a16d4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         a16d8:	e3a01000 	mov	r1, #0	; 0x0
         a16dc:	e5801010 	str	r1, [r0, #16]	; fField16
         a16e0:	e580100c 	str	r1, [r0, #12]	; fField12
         a16e4:	e5804008 	str	r4, [r0, #8]	; fSize
         a16e8:	e5805004 	str	r5, [r0, #4]	; CDynamicArray
         a16ec:	e5801000 	str	r1, [r0]
         a16f0:	e5801014 	str	r1, [r0, #20]	; fField20
         a16f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CDynamicArray::SetElementCount(long)
 * Address: 000a16f8
 */
NewtonErr	CDynamicArray::SetElementCount(ArrayIndex theSize);		// like SetArraySize, but sets logical size, too {
    /*
         a16f8:	e1a0c00d 	mov	ip, sp
         a16fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a1700:	e24cb004 	sub	fp, ip, #4	; 0x4
         a1704:	e1a04000 	mov	r4, r0
         a1708:	e1a05001 	mov	r5, r1
         a170c:	eb6d2fe7 	bl	1bed6b0 <CDynamicArray::$SetArraySize(long)>
         a1710:	e3300000 	teq	r0, #0	; 0x0
         a1714:	05845000 	streq	r5, [r4]
         a1718:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CDynamicArray::__dt(void)
 * Address: 000a171c
 */
CDynamicArray::~CDynamicArray() {
    /*
         a171c:	e1a0c00d 	mov	ip, sp
         a1720:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         a1724:	e24cb004 	sub	fp, ip, #4	; 0x4
         a1728:	e1a04000 	mov	r4, r0
         a172c:	e1a05001 	mov	r5, r1
         a1730:	e5900014 	ldr	r0, [r0, #20]	; fField20
         a1734:	e3300000 	teq	r0, #0	; 0x0
         a1738:	1b6d1726 	blne	1be73d8 <CArrayIterator::$DeleteArray(void)>
         a173c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         a1740:	e3300000 	teq	r0, #0	; 0x0
         a1744:	1b6cfe5a 	blne	1be10b4 <$DisposPtr>
         a1748:	e3150001 	tst	r5, #1	; 0x1
         a174c:	11a00004 	movne	r0, r4
         a1750:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         a1754:	1a6cafe1 	bne	1bcd6e0 <$__dl(void *)>
         a1758:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CDynamicArray::SafeElementPtrAt(long)
 * Address: 000a175c
 */
void*		CDynamicArray::SafeElementPtrAt(ArrayIndex index) {
    /*
         a175c:	e5902000 	ldr	r2, [r0]
         a1760:	e3520000 	cmp	r2, #0	; 0x0
         a1764:	c3710001 	cmngt	r1, #1	; 0x1
         a1768:	da000005 	ble	a1784 <CDynamicArray::SafeElementPtrAt(long)+0x28>
         a176c:	e1510002 	cmp	r1, r2
         a1770:	aa000003 	bge	a1784 <CDynamicArray::SafeElementPtrAt(long)+0x28>
         a1774:	e5902010 	ldr	r2, [r0, #16]	; fField16
         a1778:	e5900004 	ldr	r0, [r0, #4]	; CDynamicArray
         a177c:	e0202091 	mla	r0, r1, r0, r2
         a1780:	e1a0f00e 	mov	pc, lr
         a1784:	e3a00000 	mov	r0, #0	; 0x0
         a1788:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CDynamicArray::RemoveElementsAt(long, long)
 * Address: 000a178c
 */
NewtonErr	CDynamicArray::RemoveElementsAt(ArrayIndex index, ArrayIndex count) {
    /*
         a178c:	e1a0c00d 	mov	ip, sp
         a1790:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a1794:	e24cb004 	sub	fp, ip, #4	; 0x4
         a1798:	e1a04000 	mov	r4, r0
         a179c:	e1a06001 	mov	r6, r1
         a17a0:	e1a05002 	mov	r5, r2
         a17a4:	e3a07000 	mov	r7, #0	; 0x0
         a17a8:	e5900000 	ldr	r0, [r0]
         a17ac:	e3300000 	teq	r0, #0	; 0x0
         a17b0:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         a17b4:	e3550000 	cmp	r5, #0	; 0x0
         a17b8:	da000019 	ble	a1824 <CDynamicArray::RemoveElementsAt(long, long)+0x98>
         a17bc:	e5941004 	ldr	r1, [r4, #4]	; CDynamicArray
         a17c0:	e5942010 	ldr	r2, [r4, #16]	; fField16
         a17c4:	e02c2196 	mla	ip, r6, r1, r2
         a17c8:	e0863005 	add	r3, r6, r5
         a17cc:	e0232391 	mla	r3, r1, r3, r2
         a17d0:	e0202091 	mla	r0, r1, r0, r2
         a17d4:	e1530000 	cmp	r3, r0
         a17d8:	2a000003 	bcs	a17ec <CDynamicArray::RemoveElementsAt(long, long)+0x60>
         a17dc:	e0402003 	sub	r2, r0, r3
         a17e0:	e1a0100c 	mov	r1, ip
         a17e4:	e1a00003 	mov	r0, r3
         a17e8:	eb6cf5d9 	bl	1bdef54 <$BlockMove>
         a17ec:	e5940000 	ldr	r0, [r4]
         a17f0:	e0401005 	sub	r1, r0, r5
         a17f4:	e1a00004 	mov	r0, r4
         a17f8:	eb6d2fac 	bl	1bed6b0 <CDynamicArray::$SetArraySize(long)>
         a17fc:	e1b07000 	movs	r7, r0
         a1800:	1a000007 	bne	a1824 <CDynamicArray::RemoveElementsAt(long, long)+0x98>
         a1804:	e5940000 	ldr	r0, [r4]
         a1808:	e0400005 	sub	r0, r0, r5
         a180c:	e5840000 	str	r0, [r4]
         a1810:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         a1814:	e3300000 	teq	r0, #0	; 0x0
         a1818:	11a02005 	movne	r2, r5
         a181c:	11a01006 	movne	r1, r6
         a1820:	1b6d2b84 	blne	1bec638 <CArrayIterator::$RemoveElementsAt(long, long)>
         a1824:	e1a00007 	mov	r0, r7
         a1828:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: CDynamicArray::GetElementsAt(long, void *, long)
 * Address: 000a182c
 */
NewtonErr	CDynamicArray::GetElementsAt(ArrayIndex index, void* elemPtr, ArrayIndex count) {
    /*
         a182c:	e1a0c00d 	mov	ip, sp
         a1830:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         a1834:	e24cb004 	sub	fp, ip, #4	; 0x4
         a1838:	e1a0c002 	mov	ip, r2
         a183c:	e3530000 	cmp	r3, #0	; 0x0
         a1840:	da000005 	ble	a185c <CDynamicArray::GetElementsAt(long, void *, long)+0x30>
         a1844:	e590e004 	ldr	lr, [r0, #4]	; CDynamicArray
         a1848:	e0020e93 	mul	r2, r3, lr
         a184c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         a1850:	e0200e91 	mla	r0, r1, lr, r0
         a1854:	e1a0100c 	mov	r1, ip
         a1858:	eb6cf5bd 	bl	1bdef54 <$BlockMove>
         a185c:	e3a00000 	mov	r0, #0	; 0x0
         a1860:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CDynamicArray::InsertElementsBefore(long, void *, long)
 * Address: 000a1864
 */
NewtonErr	CDynamicArray::InsertElementsBefore(ArrayIndex startHere, void* elemPtr, ArrayIndex count) {
    /*
         a1864:	e1a0c00d 	mov	ip, sp
         a1868:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         a186c:	e24cb004 	sub	fp, ip, #4	; 0x4
         a1870:	e1a04000 	mov	r4, r0
         a1874:	e1a06001 	mov	r6, r1
         a1878:	e1a07002 	mov	r7, r2
         a187c:	e1a05003 	mov	r5, r3
         a1880:	e3a09000 	mov	r9, #0	; 0x0
         a1884:	e5900000 	ldr	r0, [r0]
         a1888:	e1510000 	cmp	r1, r0
         a188c:	c1a06000 	movgt	r6, r0
         a1890:	e3550000 	cmp	r5, #0	; 0x0
         a1894:	da00001f 	ble	a1918 <CDynamicArray::InsertElementsBefore(long, void *, long)+0xb4>
         a1898:	e0801005 	add	r1, r0, r5
         a189c:	e1a00004 	mov	r0, r4
         a18a0:	eb6d2f82 	bl	1bed6b0 <CDynamicArray::$SetArraySize(long)>
         a18a4:	e1b09000 	movs	r9, r0
         a18a8:	1a00001a 	bne	a1918 <CDynamicArray::InsertElementsBefore(long, void *, long)+0xb4>
         a18ac:	e5940004 	ldr	r0, [r4, #4]	; CDynamicArray
         a18b0:	e5941010 	ldr	r1, [r4, #16]	; fField16
         a18b4:	e0281096 	mla	r8, r6, r0, r1
         a18b8:	e0862005 	add	r2, r6, r5
         a18bc:	e02c1092 	mla	ip, r2, r0, r1
         a18c0:	e5942000 	ldr	r2, [r4]
         a18c4:	e1a03002 	mov	r3, r2
         a18c8:	e0201093 	mla	r0, r3, r0, r1
         a18cc:	e1560002 	cmp	r6, r2
         a18d0:	aa000003 	bge	a18e4 <CDynamicArray::InsertElementsBefore(long, void *, long)+0x80>
         a18d4:	e0402008 	sub	r2, r0, r8
         a18d8:	e1a0100c 	mov	r1, ip
         a18dc:	e1a00008 	mov	r0, r8
         a18e0:	eb6cf59b 	bl	1bdef54 <$BlockMove>
         a18e4:	e5940004 	ldr	r0, [r4, #4]	; CDynamicArray
         a18e8:	e0020095 	mul	r2, r5, r0
         a18ec:	e1a01008 	mov	r1, r8
         a18f0:	e1a00007 	mov	r0, r7
         a18f4:	eb6cf596 	bl	1bdef54 <$BlockMove>
         a18f8:	e5940000 	ldr	r0, [r4]
         a18fc:	e0800005 	add	r0, r0, r5
         a1900:	e5840000 	str	r0, [r4]
         a1904:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         a1908:	e3300000 	teq	r0, #0	; 0x0
         a190c:	11a02005 	movne	r2, r5
         a1910:	11a01006 	movne	r1, r6
         a1914:	1b6d1ef8 	blne	1be94fc <CArrayIterator::$InsertElementsBefore(long, long)>
         a1918:	e1a00009 	mov	r0, r9
         a191c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: CDynamicArray::ReplaceElementsAt(long, void *, long)
 * Address: 000a1920
 */
NewtonErr	CDynamicArray::ReplaceElementsAt(ArrayIndex index, void* elemPtr, ArrayIndex count) {
    /*
         a1920:	e1a0c00d 	mov	ip, sp
         a1924:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         a1928:	e24cb004 	sub	fp, ip, #4	; 0x4
         a192c:	e1a0c002 	mov	ip, r2
         a1930:	e3530000 	cmp	r3, #0	; 0x0
         a1934:	da000005 	ble	a1950 <CDynamicArray::ReplaceElementsAt(long, void *, long)+0x30>
         a1938:	e590e004 	ldr	lr, [r0, #4]	; CDynamicArray
         a193c:	e0020e93 	mul	r2, r3, lr
         a1940:	e5900010 	ldr	r0, [r0, #16]	; fField16
         a1944:	e021019e 	mla	r1, lr, r1, r0
         a1948:	e1a0000c 	mov	r0, ip
         a194c:	eb6cf580 	bl	1bdef54 <$BlockMove>
         a1950:	e3a00000 	mov	r0, #0	; 0x0
         a1954:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CDynamicArray::Merge(CDynamicArray *)
 * Address: 000a1958
 */
NewtonErr	CDynamicArray::Merge(CDynamicArray* aDynamicArray) {
    /*
         a1958:	e1a0c00d 	mov	ip, sp
         a195c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         a1960:	e24cb004 	sub	fp, ip, #4	; 0x4
         a1964:	e59f3034 	ldr	r3, [pc, #34]	; a19a0 <CDynamicArray::Merge(CDynamicArray *)+0x48>
         a1968:	e590c004 	ldr	ip, [r0, #4]	; CDynamicArray
         a196c:	e5912004 	ldr	r2, [r1, #4]	; CDynamicArray
         a1970:	e13c0002 	teq	ip, r2
         a1974:	1a00000b 	bne	a19a8 <CDynamicArray::Merge(CDynamicArray *)+0x50>
         a1978:	e5913000 	ldr	r3, [r1]
         a197c:	e3530000 	cmp	r3, #0	; 0x0
         a1980:	da000007 	ble	a19a4 <CDynamicArray::Merge(CDynamicArray *)+0x4c>
         a1984:	e5911010 	ldr	r1, [r1, #16]	; fField16
         a1988:	e3a02000 	mov	r2, #0	; 0x0
         a198c:	e0812002 	add	r2, r1, r2
         a1990:	e5901000 	ldr	r1, [r0]
         a1994:	eb6d1ed7 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
         a1998:	e1a03000 	mov	r3, r0
         a199c:	ea000001 	b	a19a8 <CDynamicArray::Merge(CDynamicArray *)+0x50>
         a19a0:	ffffc947 	swinv	0x00ffc947
         a19a4:	e3a03000 	mov	r3, #0	; 0x0
         a19a8:	e1a00003 	mov	r0, r3
         a19ac:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: CDynamicArray::SetArraySize(long)
 * Address: 000a19b0
 */
NewtonErr	CDynamicArray::SetArraySize(ArrayIndex theSize) {
    /*
         a19b0:	e1a0c00d 	mov	ip, sp
         a19b4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         a19b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         a19bc:	e1a04000 	mov	r4, r0
         a19c0:	e3a06000 	mov	r6, #0	; 0x0
         a19c4:	e3310000 	teq	r1, #0	; 0x0
         a19c8:	1a000009 	bne	a19f4 <CDynamicArray::SetArraySize(long)+0x44>
         a19cc:	e5940010 	ldr	r0, [r4, #16]	; fField16
         a19d0:	e3300000 	teq	r0, #0	; 0x0
         a19d4:	0a000021 	beq	a1a60 <CDynamicArray::SetArraySize(long)+0xb0>
         a19d8:	eb6cfdb5 	bl	1be10b4 <$DisposPtr>
         a19dc:	eb6d01cf 	bl	1be2120 <$MemError>
         a19e0:	e1a06000 	mov	r6, r0
         a19e4:	e3a00000 	mov	r0, #0	; 0x0
         a19e8:	e5840010 	str	r0, [r4, #16]	; fField16
         a19ec:	e5a4000c 	str	r0, [r4, #12]!	; fField12
         a19f0:	ea00001a 	b	a1a60 <CDynamicArray::SetArraySize(long)+0xb0>
         a19f4:	e594700c 	ldr	r7, [r4, #12]	; fField12
         a19f8:	e1570001 	cmp	r7, r1
         a19fc:	ba000003 	blt	a1a10 <CDynamicArray::SetArraySize(long)+0x60>
         a1a00:	e0470001 	sub	r0, r7, r1
         a1a04:	e5942008 	ldr	r2, [r4, #8]	; fSize
         a1a08:	e1500002 	cmp	r0, r2
         a1a0c:	ba000013 	blt	a1a60 <CDynamicArray::SetArraySize(long)+0xb0>
         a1a10:	e5940008 	ldr	r0, [r4, #8]	; fSize
         a1a14:	e3300000 	teq	r0, #0	; 0x0
         a1a18:	0a000004 	beq	a1a30 <CDynamicArray::SetArraySize(long)+0x80>
         a1a1c:	e0801001 	add	r1, r0, r1
         a1a20:	e1a05001 	mov	r5, r1
         a1a24:	eb6c43c5 	bl	1bb2940 <$__rt_sdiv>
         a1a28:	e0455001 	sub	r5, r5, r1
         a1a2c:	ea000000 	b	a1a34 <CDynamicArray::SetArraySize(long)+0x84>
         a1a30:	e1a05001 	mov	r5, r1
         a1a34:	e1370005 	teq	r7, r5
         a1a38:	0a000008 	beq	a1a60 <CDynamicArray::SetArraySize(long)+0xb0>
         a1a3c:	e5940004 	ldr	r0, [r4, #4]	; CDynamicArray
         a1a40:	e0010095 	mul	r1, r5, r0
         a1a44:	e5940010 	ldr	r0, [r4, #16]	; fField16
         a1a48:	eb6d01c4 	bl	1be2160 <$ReallocPtr>
         a1a4c:	e1a07000 	mov	r7, r0
         a1a50:	eb6d01b2 	bl	1be2120 <$MemError>
         a1a54:	e1b06000 	movs	r6, r0
         a1a58:	02844008 	addeq	r4, r4, #8	; 0x8
         a1a5c:	09a400a0 	stmeqib	r4!, {r5, r7}
         a1a60:	e1a00006 	mov	r0, r6
         a1a64:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

