#include "include/TFrameRelocationGenerator.h"

/**
 * Symbol: TFrameRelocationGenerator::__ct(void)
 * Address: 000d17b0
 */
TFrameRelocationGenerator::TFrameRelocationGenerator(void) {
    /*
         d17b0:	e1a0c00d 	mov	ip, sp
         d17b4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         d17b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         d17bc:	e3300000 	teq	r0, #0	; 0x0
         d17c0:	1a000003 	bne	d17d4 <TFrameRelocationGenerator::__ct(void)+0x24>
         d17c4:	e3a00018 	mov	r0, #24	; 0x18
         d17c8:	eb6bf3da 	bl	1bce738 <$__nw(unsigned int)>
         d17cc:	e3300000 	teq	r0, #0	; 0x0
         d17d0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         d17d4:	e3a01000 	mov	r1, #0	; 0x0
         d17d8:	e5c01017 	strb	r1, [r0, #23]	; fField23
         d17dc:	e5c01014 	strb	r1, [r0, #20]	; fField20
         d17e0:	e3e02000 	mvn	r2, #0	; 0x0
         d17e4:	e5801008 	str	r1, [r0, #8]	; fField8
         d17e8:	e5802004 	str	r2, [r0, #4]	; fField4
         d17ec:	e5801000 	str	r1, [r0]
         d17f0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TFrameRelocationGenerator::__ct(int)
 * Address: 000d17f4
 */
TFrameRelocationGenerator::TFrameRelocationGenerator(int) {
    /*
         d17f4:	e1a0c00d 	mov	ip, sp
         d17f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d17fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         d1800:	e1a04001 	mov	r4, r1
         d1804:	e3300000 	teq	r0, #0	; 0x0
         d1808:	1a000003 	bne	d181c <TFrameRelocationGenerator::__ct(int)+0x28>
         d180c:	e3a00018 	mov	r0, #24	; 0x18
         d1810:	eb6bf3c8 	bl	1bce738 <$__nw(unsigned int)>
         d1814:	e3300000 	teq	r0, #0	; 0x0
         d1818:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         d181c:	e1b01004 	movs	r1, r4
         d1820:	13a01001 	movne	r1, #1	; 0x1
         d1824:	e5c01017 	strb	r1, [r0, #23]	; fField23
         d1828:	e3a01000 	mov	r1, #0	; 0x0
         d182c:	e5c01014 	strb	r1, [r0, #20]	; fField20
         d1830:	e3e02000 	mvn	r2, #0	; 0x0
         d1834:	e5801008 	str	r1, [r0, #8]	; fField8
         d1838:	e5802004 	str	r2, [r0, #4]	; fField4
         d183c:	e5801000 	str	r1, [r0]
         d1840:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFrameRelocationGenerator::Update(long, char *, long, unsigned char)
 * Address: 000d1844
 */
TFrameRelocationGenerator::Update(long, char *, long, unsigned char) {
    /*
         d1844:	e92d43f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, lr}
         d1848:	e59dc01c 	ldr	ip, [sp, #28]
         d184c:	e31c00ff 	tst	ip, #255	; 0xff
         d1850:	e3a06000 	mov	r6, #0	; 0x0
         d1854:	05806010 	streq	r6, [r0, #16]	; fField16
         d1858:	05c06014 	streqb	r6, [r0, #20]	; fField20
         d185c:	08bd83f0 	ldmeqia	sp!, {r4, r5, r6, r7, r8, r9, pc}
         d1860:	e5d0c014 	ldrb	ip, [r0, #20]	; fField20
         d1864:	e3a0e001 	mov	lr, #1	; 0x1
         d1868:	e3a05003 	mov	r5, #3	; 0x3
         d186c:	e3a04007 	mov	r4, #7	; 0x7
         d1870:	e33c0000 	teq	ip, #0	; 0x0
         d1874:	1a000038 	bne	d195c <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0x118>
         d1878:	e5c0e014 	strb	lr, [r0, #20]	; fField20
         d187c:	e1a0c002 	mov	ip, r2
         d1880:	e5801004 	str	r1, [r0, #4]	; fField4
         d1884:	e5927000 	ldr	r7, [r2]
         d1888:	e2177001 	ands	r7, r7, #1	; 0x1
         d188c:	13a07001 	movne	r7, #1	; 0x1
         d1890:	e5c07015 	strb	r7, [r0, #21]	; fField21
         d1894:	e21770ff 	ands	r7, r7, #255	; 0xff
         d1898:	0a000006 	beq	d18b8 <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0x74>
         d189c:	e3a08010 	mov	r8, #16	; 0x10
         d18a0:	e59c9000 	ldr	r9, [ip]
         d18a4:	e1380429 	teq	r8, r9, lsr #8
         d18a8:	1a000002 	bne	d18b8 <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0x74>
         d18ac:	e3330004 	teq	r3, #4	; 0x4
         d18b0:	1a000002 	bne	d18c0 <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0x7c>
         d18b4:	e3a0e002 	mov	lr, #2	; 0x2
         d18b8:	e5c0e017 	strb	lr, [r0, #23]	; fField23
         d18bc:	ea000005 	b	d18d8 <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0x94>
         d18c0:	e59ce004 	ldr	lr, [ip, #4]	; fField4
         d18c4:	e21ee001 	ands	lr, lr, #1	; 0x1
         d18c8:	13a0e001 	movne	lr, #1	; 0x1
         d18cc:	e5c0e017 	strb	lr, [r0, #23]	; fField23
         d18d0:	e31e00ff 	tst	lr, #255	; 0xff
         d18d4:	0a000003 	beq	d18e8 <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0xa4>
         d18d8:	e59ce000 	ldr	lr, [ip]
         d18dc:	e085e42e 	add	lr, r5, lr, lsr #8
         d18e0:	e3cee003 	bic	lr, lr, #3	; 0x3
         d18e4:	ea000002 	b	d18f4 <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0xb0>
         d18e8:	e59ce000 	ldr	lr, [ip]
         d18ec:	e084e42e 	add	lr, r4, lr, lsr #8
         d18f0:	e3cee007 	bic	lr, lr, #7	; 0x7
         d18f4:	e580e010 	str	lr, [r0, #16]	; fField16
         d18f8:	e3370000 	teq	r7, #0	; 0x0
         d18fc:	e580e00c 	str	lr, [r0, #12]	; fField12
         d1900:	0a00000a 	beq	d1930 <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0xec>
         d1904:	e5d0e017 	ldrb	lr, [r0, #23]	; fField23
         d1908:	e33e0000 	teq	lr, #0	; 0x0
         d190c:	e59ce000 	ldr	lr, [ip]
         d1910:	0084e42e 	addeq	lr, r4, lr, lsr #8
         d1914:	03cee007 	biceq	lr, lr, #7	; 0x7
         d1918:	1085e42e 	addne	lr, r5, lr, lsr #8
         d191c:	13cee003 	bicne	lr, lr, #3	; 0x3
         d1920:	e59cc000 	ldr	ip, [ip]
         d1924:	e13e042c 	teq	lr, ip, lsr #8
         d1928:	13a0c001 	movne	ip, #1	; 0x1
         d192c:	1a000000 	bne	d1934 <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0xf0>
         d1930:	e3a0c000 	mov	ip, #0	; 0x0
         d1934:	e5c0c016 	strb	ip, [r0, #22]	; fField22
         d1938:	e5d0c017 	ldrb	ip, [r0, #23]	; fField23
         d193c:	e33c0000 	teq	ip, #0	; 0x0
         d1940:	13a0c001 	movne	ip, #1	; 0x1
         d1944:	e590e000 	ldr	lr, [r0]
         d1948:	e3cee040 	bic	lr, lr, #64	; 0x40
         d194c:	e20cc001 	and	ip, ip, #1	; 0x1
         d1950:	e18ec30c 	orr	ip, lr, ip, lsl #6
         d1954:	e3cccd3e 	bic	ip, ip, #3968	; 0xf80
         d1958:	ea00000d 	b	d1994 <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0x150>
         d195c:	e5d0c017 	ldrb	ip, [r0, #23]	; fField23
         d1960:	e33c0002 	teq	ip, #2	; 0x2
         d1964:	1a00000b 	bne	d1998 <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0x154>
         d1968:	e592c000 	ldr	ip, [r2]
         d196c:	e31c0001 	tst	ip, #1	; 0x1
         d1970:	15c0e017 	strneb	lr, [r0, #23]	; fField23
         d1974:	05c06017 	streqb	r6, [r0, #23]	; fField23
         d1978:	e5d0c017 	ldrb	ip, [r0, #23]	; fField23
         d197c:	e33c0000 	teq	ip, #0	; 0x0
         d1980:	13a0c001 	movne	ip, #1	; 0x1
         d1984:	e590e000 	ldr	lr, [r0]
         d1988:	e3cee040 	bic	lr, lr, #64	; 0x40
         d198c:	e20cc001 	and	ip, ip, #1	; 0x1
         d1990:	e18ec30c 	orr	ip, lr, ip, lsl #6
         d1994:	e580c000 	str	ip, [r0]
         d1998:	e081c003 	add	ip, r1, r3
         d199c:	e580c008 	str	ip, [r0, #8]	; fField8
         d19a0:	e590c010 	ldr	ip, [r0, #16]	; fField16
         d19a4:	e15c0003 	cmp	ip, r3
         d19a8:	c04c1003 	subgt	r1, ip, r3
         d19ac:	c5a01010 	strgt	r1, [r0, #16]!	; fField16
         d19b0:	c8bd83f0 	ldmgtia	sp!, {r4, r5, r6, r7, r8, r9, pc}
         d19b4:	e590e004 	ldr	lr, [r0, #4]	; fField4
         d19b8:	e37e0001 	cmn	lr, #1	; 0x1
         d19bc:	008c1001 	addeq	r1, ip, r1
         d19c0:	05801004 	streq	r1, [r0, #4]	; fField4
         d19c4:	e08c1002 	add	r1, ip, r2
         d19c8:	e043300c 	sub	r3, r3, ip
         d19cc:	e3530000 	cmp	r3, #0	; 0x0
         d19d0:	da00000d 	ble	d1a0c <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0x1c8>
         d19d4:	e5d02017 	ldrb	r2, [r0, #23]	; fField23
         d19d8:	e3320000 	teq	r2, #0	; 0x0
         d19dc:	e591c000 	ldr	ip, [r1]
         d19e0:	0084c42c 	addeq	ip, r4, ip, lsr #8
         d19e4:	03ccc007 	biceq	ip, ip, #7	; 0x7
         d19e8:	1085c42c 	addne	ip, r5, ip, lsr #8
         d19ec:	13ccc003 	bicne	ip, ip, #3	; 0x3
         d19f0:	e580c00c 	str	ip, [r0, #12]	; fField12
         d19f4:	e15c0003 	cmp	ip, r3
         d19f8:	ca000003 	bgt	d1a0c <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0x1c8>
         d19fc:	e043300c 	sub	r3, r3, ip
         d1a00:	e08c1001 	add	r1, ip, r1
         d1a04:	e3530000 	cmp	r3, #0	; 0x0
         d1a08:	cafffff2 	bgt	d19d8 <TFrameRelocationGenerator::Update(long, char *, long, unsigned char)+0x194>
         d1a0c:	e3330000 	teq	r3, #0	; 0x0
         d1a10:	05a06010 	streq	r6, [r0, #16]!	; fField16
         d1a14:	08bd83f0 	ldmeqia	sp!, {r4, r5, r6, r7, r8, r9, pc}
         d1a18:	e590200c 	ldr	r2, [r0, #12]	; fField12
         d1a1c:	e0423003 	sub	r3, r2, r3
         d1a20:	e5803010 	str	r3, [r0, #16]	; fField16
         d1a24:	e5913000 	ldr	r3, [r1]
         d1a28:	e2133001 	ands	r3, r3, #1	; 0x1
         d1a2c:	13a03001 	movne	r3, #1	; 0x1
         d1a30:	e5c03015 	strb	r3, [r0, #21]	; fField21
         d1a34:	e31300ff 	tst	r3, #255	; 0xff
         d1a38:	15911000 	ldrne	r1, [r1]
         d1a3c:	11320421 	teqne	r2, r1, lsr #8
         d1a40:	03a01000 	moveq	r1, #0	; 0x0
         d1a44:	13a01001 	movne	r1, #1	; 0x1
         d1a48:	e5c01016 	strb	r1, [r0, #22]	; fField22
         d1a4c:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
    */
}

/**
 * Symbol: TFrameRelocationGenerator::GetHeader(FrameRelocationHeader *)
 * Address: 000d1a50
 */
TFrameRelocationGenerator::GetHeader(FrameRelocationHeader *) {
    /*
         d1a50:	e5902000 	ldr	r2, [r0]
         d1a54:	e5812000 	str	r2, [r1]
         d1a58:	e5902004 	ldr	r2, [r0, #4]	; fField4
         d1a5c:	e3720001 	cmn	r2, #1	; 0x1
         d1a60:	1a000006 	bne	d1a80 <TFrameRelocationGenerator::GetHeader(FrameRelocationHeader *)+0x30>
         d1a64:	e5902008 	ldr	r2, [r0, #8]	; fField8
         d1a68:	e5802004 	str	r2, [r0, #4]	; fField4
         d1a6c:	e5902010 	ldr	r2, [r0, #16]	; fField16
         d1a70:	e3520000 	cmp	r2, #0	; 0x0
         d1a74:	c5912000 	ldrgt	r2, [r1]
         d1a78:	c3c22080 	bicgt	r2, r2, #128	; 0x80
         d1a7c:	c5812000 	strgt	r2, [r1]
         d1a80:	e5902004 	ldr	r2, [r0, #4]	; fField4
         d1a84:	e1a02122 	mov	r2, r2, lsr #2
         d1a88:	e5913000 	ldr	r3, [r1]
         d1a8c:	e1a03503 	mov	r3, r3, lsl #10
         d1a90:	e1a03523 	mov	r3, r3, lsr #10
         d1a94:	e1833b02 	orr	r3, r3, r2, lsl #22
         d1a98:	e5813000 	str	r3, [r1]
         d1a9c:	e5902008 	ldr	r2, [r0, #8]	; fField8
         d1aa0:	e1a02122 	mov	r2, r2, lsr #2
         d1aa4:	e3c33603 	bic	r3, r3, #3145728	; 0x300000
         d1aa8:	e3c33aff 	bic	r3, r3, #1044480	; 0xff000
         d1aac:	e1a02b02 	mov	r2, r2, lsl #22
         d1ab0:	e1a02b22 	mov	r2, r2, lsr #22
         d1ab4:	e1832602 	orr	r2, r3, r2, lsl #12
         d1ab8:	e5812000 	str	r2, [r1]
         d1abc:	e3e01000 	mvn	r1, #0	; 0x0
         d1ac0:	e3a02000 	mov	r2, #0	; 0x0
         d1ac4:	e9800006 	stmib	r0, {r1, r2}
         d1ac8:	e5802000 	str	r2, [r0]
         d1acc:	e5d01017 	ldrb	r1, [r0, #23]	; fField23
         d1ad0:	e3310000 	teq	r1, #0	; 0x0
         d1ad4:	13a01001 	movne	r1, #1	; 0x1
         d1ad8:	e2011001 	and	r1, r1, #1	; 0x1
         d1adc:	e1821301 	orr	r1, r2, r1, lsl #6
         d1ae0:	e5801000 	str	r1, [r0]
         d1ae4:	e5902010 	ldr	r2, [r0, #16]	; fField16
         d1ae8:	e3320000 	teq	r2, #0	; 0x0
         d1aec:	0a000012 	beq	d1b3c <TFrameRelocationGenerator::GetHeader(FrameRelocationHeader *)+0xec>
         d1af0:	e3811b02 	orr	r1, r1, #2048	; 0x800
         d1af4:	e5801000 	str	r1, [r0]
         d1af8:	e590300c 	ldr	r3, [r0, #12]	; fField12
         d1afc:	e0432002 	sub	r2, r3, r2
         d1b00:	e1a02122 	mov	r2, r2, lsr #2
         d1b04:	e3520003 	cmp	r2, #3	; 0x3
         d1b08:	c3a02003 	movgt	r2, #3	; 0x3
         d1b0c:	e3c11c06 	bic	r1, r1, #1536	; 0x600
         d1b10:	e2022003 	and	r2, r2, #3	; 0x3
         d1b14:	e1812482 	orr	r2, r1, r2, lsl #9
         d1b18:	e5d01015 	ldrb	r1, [r0, #21]	; fField21
         d1b1c:	e3c22c01 	bic	r2, r2, #256	; 0x100
         d1b20:	e2011001 	and	r1, r1, #1	; 0x1
         d1b24:	e1821401 	orr	r1, r2, r1, lsl #8
         d1b28:	e5d02016 	ldrb	r2, [r0, #22]	; fField22
         d1b2c:	e3c11080 	bic	r1, r1, #128	; 0x80
         d1b30:	e2022001 	and	r2, r2, #1	; 0x1
         d1b34:	e1811382 	orr	r1, r1, r2, lsl #7
         d1b38:	ea000000 	b	d1b40 <TFrameRelocationGenerator::GetHeader(FrameRelocationHeader *)+0xf0>
         d1b3c:	e3c11d3e 	bic	r1, r1, #3968	; 0xf80
         d1b40:	e5801000 	str	r1, [r0]
         d1b44:	e1a0f00e 	mov	pc, lr
    */
}

