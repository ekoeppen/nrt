#include "include/TLZCompressor.h"

/**
 * Symbol: Sizeof__13TLZCompressorSFv
 * Address: 000fea54
 */
void TLZCompressor::Sizeof() {
    /*
         fea54:	e3a00038 	mov	r0, #56	; 0x38
         fea58:	e2800b01 	add	r0, r0, #1024	; 0x400
         fea5c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZCompressor::New(void)
 * Address: 000fea60
 */
TLZCompressor::New(void) {
    /*
         fea60:	e1a0c00d 	mov	ip, sp
         fea64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         fea68:	e24cb004 	sub	fp, ip, #4	; 0x4
         fea6c:	e1a04000 	mov	r4, r0
         fea70:	e3a00001 	mov	r0, #1	; 0x1
         fea74:	e5c4042e 	strb	r0, [r4, #1070]	; fField1070
         fea78:	e3a00c02 	mov	r0, #512	; 0x200
         fea7c:	e5840014 	str	r0, [r4, #20]	; fField20
         fea80:	e3a00b0a 	mov	r0, #10240	; 0x2800
         fea84:	eb6b6037 	bl	1bd6b68 <$malloc>
         fea88:	e5840434 	str	r0, [r4, #1076]	; fField1076
         fea8c:	e3300000 	teq	r0, #0	; 0x0
         fea90:	03a00000 	moveq	r0, #0	; 0x0
         fea94:	05c4042e 	streqb	r0, [r4, #1070]	; fField1070
         fea98:	e3a00000 	mov	r0, #0	; 0x0
         fea9c:	eb6a897d 	bl	1ba1098 <Pushpopper::$__ct(void)>
         feaa0:	e5840430 	str	r0, [r4, #1072]	; fField1072
         feaa4:	e1a00004 	mov	r0, r4
         feaa8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLZCompressor::CompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)
 * Address: 000feaac
 */
TLZCompressor::CompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long) {
    /*
         feaac:	e1a0c00d 	mov	ip, sp
         feab0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         feab4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         feab8:	e24cb014 	sub	fp, ip, #20	; 0x14
         feabc:	e1a04000 	mov	r4, r0
         feac0:	e59b9018 	ldr	r9, [fp, #24]
         feac4:	e59ba014 	ldr	sl, [fp, #20]	; fField20
         feac8:	e24dd008 	sub	sp, sp, #8	; 0x8
         feacc:	e1a0700a 	mov	r7, sl
         fead0:	e3a00000 	mov	r0, #0	; 0x0
         fead4:	e3a05000 	mov	r5, #0	; 0x0
         fead8:	e3a01000 	mov	r1, #0	; 0x0
         feadc:	e59b600c 	ldr	r6, [fp, #12]
         feae0:	e3a0200a 	mov	r2, #10	; 0xa
         feae4:	e2844e42 	add	r4, r4, #1056	; 0x420
         feae8:	e9840006 	stmib	r4, {r1, r2}
         feaec:	e2444e42 	sub	r4, r4, #1056	; 0x420
         feaf0:	e5c41010 	strb	r1, [r4, #16]	; fField16
         feaf4:	e3a01000 	mov	r1, #0	; 0x0
         feaf8:	e0842100 	add	r2, r4, r0, lsl #2
         feafc:	e2800001 	add	r0, r0, #1	; 0x1
         feb00:	e3500c01 	cmp	r0, #256	; 0x100
         feb04:	e5a21018 	str	r1, [r2, #24]!
         feb08:	3afffff9 	bcc	feaf4 <TLZCompressor::CompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x48>
         feb0c:	e1a00004 	mov	r0, r4
         feb10:	eb6a99f5 	bl	1ba52ec <TLZCompressor::$talloc(void)>
         feb14:	e1b08000 	movs	r8, r0
         feb18:	028f0f47 	addeq	r0, pc, #284	; 0x11c
         feb1c:	0b6bcb57 	bleq	1bf1880 <$printf>
         feb20:	e3a00000 	mov	r0, #0	; 0x0
         feb24:	e5c80001 	strb	r0, [r8, #1]
         feb28:	e5c80000 	strb	r0, [r8]
         feb2c:	e5c80003 	strb	r0, [r8, #3]
         feb30:	e5c80002 	strb	r0, [r8, #2]
         feb34:	e5c80005 	strb	r0, [r8, #5]
         feb38:	e5c80004 	strb	r0, [r8, #4]
         feb3c:	e588000c 	str	r0, [r8, #12]
         feb40:	e5880008 	str	r0, [r8, #8]
         feb44:	e5880010 	str	r0, [r8, #16]	; fField16
         feb48:	e1a01006 	mov	r1, r6
         feb4c:	e3a02b02 	mov	r2, #2048	; 0x800
         feb50:	e5940430 	ldr	r0, [r4, #1072]	; fField1072
         feb54:	eb6a99d6 	bl	1ba52b4 <Pushpopper::$setupwritebuffer(unsigned char *, long)>
         feb58:	e3a00001 	mov	r0, #1	; 0x1
         feb5c:	e5c4042c 	strb	r0, [r4, #1068]	; fField1068
         feb60:	e3a06000 	mov	r6, #0	; 0x0
         feb64:	e3a02000 	mov	r2, #0	; 0x0
         feb68:	e3a01008 	mov	r1, #8	; 0x8
         feb6c:	e5940430 	ldr	r0, [r4, #1072]	; fField1072
         feb70:	eb6a95bc 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         feb74:	e5d4242c 	ldrb	r2, [r4, #1068]	; fField1068
         feb78:	e3a01008 	mov	r1, #8	; 0x8
         feb7c:	e5940430 	ldr	r0, [r4, #1072]	; fField1072
         feb80:	eb6a95b8 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         feb84:	e3a02000 	mov	r2, #0	; 0x0
         feb88:	e3a01010 	mov	r1, #16	; 0x10
         feb8c:	e5940430 	ldr	r0, [r4, #1072]	; fField1072
         feb90:	eb6a95b4 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         feb94:	e5940430 	ldr	r0, [r4, #1072]	; fField1072
         feb98:	e5900004 	ldr	r0, [r0, #4]
         feb9c:	e1500009 	cmp	r0, r9
         feba0:	8a000057 	bhi	fed04 <TLZCompressor::CompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x258>
         feba4:	e1a03004 	mov	r3, r4
         feba8:	e3a02001 	mov	r2, #1	; 0x1
         febac:	e1a00008 	mov	r0, r8
         febb0:	e5941434 	ldr	r1, [r4, #1076]	; fField1076
         febb4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         febb8:	e28d3010 	add	r3, sp, #16	; 0x10
         febbc:	e92d0008 	stmdb	sp!, {r3}
         febc0:	e28d3018 	add	r3, sp, #24	; 0x18
         febc4:	e1a02009 	mov	r2, r9
         febc8:	e1a01007 	mov	r1, r7
         febcc:	e1a0000a 	mov	r0, sl
         febd0:	eb6a99c7 	bl	1ba52f4 <$treesearch1m5__FPUcT1UlPlT4P6TTNodeT6lP13TLZCompressor>
         febd4:	e28dd014 	add	sp, sp, #20	; 0x14
         febd8:	e59d0004 	ldr	r0, [sp, #4]
         febdc:	e0800006 	add	r0, r0, r6
         febe0:	e0800005 	add	r0, r0, r5
         febe4:	e1500009 	cmp	r0, r9
         febe8:	80490006 	subhi	r0, r9, r6
         febec:	80400005 	subhi	r0, r0, r5
         febf0:	858d0004 	strhi	r0, [sp, #4]
         febf4:	e59d1004 	ldr	r1, [sp, #4]
         febf8:	e3510003 	cmp	r1, #3	; 0x3
         febfc:	ba000017 	blt	fec60 <TLZCompressor::CompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x1b4>
         fec00:	e1a03006 	mov	r3, r6
         fec04:	e1a02007 	mov	r2, r7
         fec08:	e92d000c 	stmdb	sp!, {r2, r3}
         fec0c:	e1a03005 	mov	r3, r5
         fec10:	e1a00004 	mov	r0, r4
         fec14:	e59d2008 	ldr	r2, [sp, #8]
         fec18:	eb6a8934 	bl	1ba10f0 <TLZCompressor::$codeword_gen_bin(long, long, long, unsigned char *, unsigned long)>
         fec1c:	e28dd008 	add	sp, sp, #8	; 0x8
         fec20:	e59d0004 	ldr	r0, [sp, #4]
         fec24:	e0801005 	add	r1, r0, r5
         fec28:	e0816006 	add	r6, r1, r6
         fec2c:	e0877000 	add	r7, r7, r0
         fec30:	e3a05000 	mov	r5, #0	; 0x0
         fec34:	e58d5004 	str	r5, [sp, #4]
         fec38:	ea000018 	b	feca0 <TLZCompressor::CompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x1f4>
         fec3c:	43616e6e 	cmnmi	r1, #1760	; 0x6e0
         fec40:	6f742061 	swivs	0x00742061
         fec44:	6c6c6f63 	stcvsl	15, cr6, [ip], -#396
         fec48:	61746520 	cmnvs	r4, r0, lsr #10
         fec4c:	6d656d6f 	stcvsl	13, cr6, [r5, -#444]!
         fec50:	72792066 	rsbvcs	r2, r9, #102	; 0x66
         fec54:	6f722072 	swivs	0x00722072
         fec58:	6f6f7421 	swivs	0x006f7421
         fec5c:	21210000 	teqcs	r1, r0
         fec60:	e2877001 	add	r7, r7, #1	; 0x1
         fec64:	e2855001 	add	r5, r5, #1	; 0x1
         fec68:	e3a01000 	mov	r1, #0	; 0x0
         fec6c:	e355003f 	cmp	r5, #63	; 0x3f
         fec70:	e58d1004 	str	r1, [sp, #4]
         fec74:	ba000009 	blt	feca0 <TLZCompressor::CompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x1f4>
         fec78:	e1a03006 	mov	r3, r6
         fec7c:	e1a02007 	mov	r2, r7
         fec80:	e92d000c 	stmdb	sp!, {r2, r3}
         fec84:	e1a03005 	mov	r3, r5
         fec88:	e1a00004 	mov	r0, r4
         fec8c:	e59d2008 	ldr	r2, [sp, #8]
         fec90:	eb6a8916 	bl	1ba10f0 <TLZCompressor::$codeword_gen_bin(long, long, long, unsigned char *, unsigned long)>
         fec94:	e28dd008 	add	sp, sp, #8	; 0x8
         fec98:	e286603f 	add	r6, r6, #63	; 0x3f
         fec9c:	e245503f 	sub	r5, r5, #63	; 0x3f
         feca0:	e0860005 	add	r0, r6, r5
         feca4:	e1500009 	cmp	r0, r9
         feca8:	3affffb9 	bcc	feb94 <TLZCompressor::CompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0xe8>
         fecac:	e3550000 	cmp	r5, #0	; 0x0
         fecb0:	da000008 	ble	fecd8 <TLZCompressor::CompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x22c>
         fecb4:	e1a03006 	mov	r3, r6
         fecb8:	e1a02007 	mov	r2, r7
         fecbc:	e92d000c 	stmdb	sp!, {r2, r3}
         fecc0:	e1a03005 	mov	r3, r5
         fecc4:	e1a00004 	mov	r0, r4
         fecc8:	e3a01000 	mov	r1, #0	; 0x0
         feccc:	e59d2008 	ldr	r2, [sp, #8]
         fecd0:	eb6a8906 	bl	1ba10f0 <TLZCompressor::$codeword_gen_bin(long, long, long, unsigned char *, unsigned long)>
         fecd4:	e28dd008 	add	sp, sp, #8	; 0x8
         fecd8:	e5940430 	ldr	r0, [r4, #1072]	; fField1072
         fecdc:	eb6a9136 	bl	1ba31bc <Pushpopper::$flushbits(void)>
         fece0:	e5940430 	ldr	r0, [r4, #1072]	; fField1072
         fece4:	e5900004 	ldr	r0, [r0, #4]
         fece8:	e59b1008 	ldr	r1, [fp, #8]
         fecec:	e5810000 	str	r0, [r1]
         fecf0:	e5b40430 	ldr	r0, [r4, #1072]!	; fField1072
         fecf4:	e5900004 	ldr	r0, [r0, #4]
         fecf8:	e1500009 	cmp	r0, r9
         fecfc:	93a00000 	movls	r0, #0	; 0x0
         fed00:	9a00000b 	bls	fed34 <TLZCompressor::CompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)+0x288>
         fed04:	e59b200c 	ldr	r2, [fp, #12]
         fed08:	e2821004 	add	r1, r2, #4	; 0x4
         fed0c:	e1a02009 	mov	r2, r9
         fed10:	e1a0000a 	mov	r0, sl
         fed14:	eb6a9122 	bl	1ba31a4 <$fast_copy__FPUcT1l>
         fed18:	e3a00001 	mov	r0, #1	; 0x1
         fed1c:	e59b200c 	ldr	r2, [fp, #12]
         fed20:	e5c20000 	strb	r0, [r2]
         fed24:	e2890004 	add	r0, r9, #4	; 0x4
         fed28:	e59b1008 	ldr	r1, [fp, #8]
         fed2c:	e5810000 	str	r0, [r1]
         fed30:	e3e00000 	mvn	r0, #0	; 0x0
         fed34:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLZCompressor::codeword_gen_bin(long, long, long, unsigned char *, unsigned long)
 * Address: 000fed38
 */
TLZCompressor::codeword_gen_bin(long, long, long, unsigned char *, unsigned long) {
    /*
         fed38:	e1a0c00d 	mov	ip, sp
         fed3c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         fed40:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         fed44:	e24cb014 	sub	fp, ip, #20	; 0x14
         fed48:	e1a05000 	mov	r5, r0
         fed4c:	e1a06001 	mov	r6, r1
         fed50:	e1a04003 	mov	r4, r3
         fed54:	e251ce7f 	subs	ip, r1, #2032	; 0x7f0
         fed58:	a35c000d 	cmpge	ip, #13	; 0xd
         fed5c:	e59b8018 	ldr	r8, [fp, #24]
         fed60:	e59ba014 	ldr	sl, [fp, #20]	; fField20
         fed64:	a28f0f30 	addge	r0, pc, #192	; 0xc0
         fed68:	ab6bcac4 	blge	1bf1880 <$printf>
         fed6c:	e3540000 	cmp	r4, #0	; 0x0
         fed70:	da000002 	ble	fed80 <TLZCompressor::codeword_gen_bin(long, long, long, unsigned char *, unsigned long)+0x48>
         fed74:	e354003f 	cmp	r4, #63	; 0x3f
         fed78:	b3a00000 	movlt	r0, #0	; 0x0
         fed7c:	ba000000 	blt	fed84 <TLZCompressor::codeword_gen_bin(long, long, long, unsigned char *, unsigned long)+0x4c>
         fed80:	e3a00001 	mov	r0, #1	; 0x1
         fed84:	e5c5042d 	strb	r0, [r5, #1069]	; fField1069
         fed88:	e3540000 	cmp	r4, #0	; 0x0
         fed8c:	da000017 	ble	fedf0 <TLZCompressor::codeword_gen_bin(long, long, long, unsigned char *, unsigned long)+0xb8>
         fed90:	e3a02000 	mov	r2, #0	; 0x0
         fed94:	e3a01002 	mov	r1, #2	; 0x2
         fed98:	e5950430 	ldr	r0, [r5, #1072]	; fField1072
         fed9c:	eb6a9531 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         feda0:	e1a01004 	mov	r1, r4
         feda4:	e1a00005 	mov	r0, r5
         feda8:	eb6a8cef 	bl	1ba216c <TLZCompressor::$encode_lit_len_bin(long)>
         fedac:	e354003f 	cmp	r4, #63	; 0x3f
         fedb0:	c3a0903f 	movgt	r9, #63	; 0x3f
         fedb4:	d1a09004 	movle	r9, r4
         fedb8:	c3a0003f 	movgt	r0, #63	; 0x3f
         fedbc:	d1a00004 	movle	r0, r4
         fedc0:	e0808008 	add	r8, r0, r8
         fedc4:	e3a07000 	mov	r7, #0	; 0x0
         fedc8:	e3590000 	cmp	r9, #0	; 0x0
         fedcc:	9a000007 	bls	fedf0 <TLZCompressor::codeword_gen_bin(long, long, long, unsigned char *, unsigned long)+0xb8>
         fedd0:	e04a4004 	sub	r4, sl, r4
         fedd4:	e7d42007 	ldrb	r2, [r4, r7]
         fedd8:	e3a01008 	mov	r1, #8	; 0x8
         feddc:	e5950430 	ldr	r0, [r5, #1072]	; fField1072
         fede0:	eb6a9520 	bl	1ba4268 <Pushpopper::$pushbits(long, long)>
         fede4:	e2877001 	add	r7, r7, #1	; 0x1
         fede8:	e1570009 	cmp	r7, r9
         fedec:	3afffff8 	bcc	fedd4 <TLZCompressor::codeword_gen_bin(long, long, long, unsigned char *, unsigned long)+0x9c>
         fedf0:	e3560003 	cmp	r6, #3	; 0x3
         fedf4:	b91baff0 	ldmltdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         fedf8:	e5d5042d 	ldrb	r0, [r5, #1069]	; fField1069
         fedfc:	e3300000 	teq	r0, #0	; 0x0
         fee00:	02466001 	subeq	r6, r6, #1	; 0x1
         fee04:	e3a00001 	mov	r0, #1	; 0x1
         fee08:	e5c5042d 	strb	r0, [r5, #1069]	; fField1069
         fee0c:	e2461002 	sub	r1, r6, #2	; 0x2
         fee10:	e1a00005 	mov	r0, r5
         fee14:	eb6a8cd3 	bl	1ba2168 <TLZCompressor::$encode_copy_length_bin_huff4(long)>
         fee18:	e1a02008 	mov	r2, r8
         fee1c:	e1a00005 	mov	r0, r5
         fee20:	e59b100c 	ldr	r1, [fp, #12]
         fee24:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         fee28:	ea6a8cd0 	b	1ba2170 <TLZCompressor::$encode_offset_bin(long, unsigned long)>
         fee2c:	636f7079 	cmnvs	pc, #121	; 0x79
         fee30:	206c656e 	rsbcs	r6, ip, lr, ror #10
         fee34:	67746820 	ldrvsb	r6, [r4, -r0, lsr #16]!	; fField16
         fee38:	65786365 	ldrvsb	r6, [r8, -#869]!
         fee3c:	65642032 	strvsb	r2, [r4, -#50]!
         fee40:	30343500 	eorccs	r3, r4, r0, lsl #10
    */
}

/**
 * Symbol: TLZCompressor::encode_lit_len_bin(long)
 * Address: 000fee44
 */
TLZCompressor::encode_lit_len_bin(long) {
    /*
         fee44:	e3310001 	teq	r1, #1	; 0x1
         fee48:	05900430 	ldreq	r0, [r0, #1072]	; fField1072
         fee4c:	03a02000 	moveq	r2, #0	; 0x0
         fee50:	03a01001 	moveq	r1, #1	; 0x1
         fee54:	0a000017 	beq	feeb8 <TLZCompressor::encode_lit_len_bin(long)+0x74>
         fee58:	e3a03000 	mov	r3, #0	; 0x0
         fee5c:	e59f2028 	ldr	r2, [pc, #28]	; fee8c <TLZCompressor::encode_lit_len_bin(long)+0x48>
         fee60:	e792c103 	ldr	ip, [r2, r3, lsl #2]
         fee64:	e15c0001 	cmp	ip, r1
         fee68:	32833001 	addcc	r3, r3, #1	; 0x1
         fee6c:	3a000009 	bcc	fee98 <TLZCompressor::encode_lit_len_bin(long)+0x54>
         fee70:	e59f2018 	ldr	r2, [pc, #18]	; fee90 <TLZCompressor::encode_lit_len_bin(long)+0x4c>
         fee74:	e7922103 	ldr	r2, [r2, r3, lsl #2]
         fee78:	e0822001 	add	r2, r2, r1
         fee7c:	e59f1010 	ldr	r1, [pc, #10]	; fee94 <TLZCompressor::encode_lit_len_bin(long)+0x50>
         fee80:	e7911103 	ldr	r1, [r1, r3, lsl #2]
         fee84:	e5900430 	ldr	r0, [r0, #1072]	; fField1072
         fee88:	ea00000a 	b	feeb8 <TLZCompressor::encode_lit_len_bin(long)+0x74>
         fee8c:	00371c58 	eoreqs	r1, r7, r8, asr ip
         fee90:	00371c80 	eoreqs	r1, r7, r0, lsl #25
         fee94:	00371c6c 	eoreqs	r1, r7, ip, ror #24
         fee98:	e3530005 	cmp	r3, #5	; 0x5
         fee9c:	baffffef 	blt	fee60 <TLZCompressor::encode_lit_len_bin(long)+0x1c>
         feea0:	e351003f 	cmp	r1, #63	; 0x3f
         feea4:	b1a0f00e 	movlt	pc, lr
         feea8:	e5900430 	ldr	r0, [r0, #1072]	; fField1072
         feeac:	e3a02b01 	mov	r2, #1024	; 0x400
         feeb0:	e2422001 	sub	r2, r2, #1	; 0x1
         feeb4:	e3a0100a 	mov	r1, #10	; 0xa
         feeb8:	ea6a94ea 	b	1ba4268 <Pushpopper::$pushbits(long, long)>
    */
}

/**
 * Symbol: TLZCompressor::talloc(void)
 * Address: 000feebc
 */
TLZCompressor::talloc(void) {
    /*
         feebc:	e5902014 	ldr	r2, [r0, #20]	; fField20
         feec0:	e2422001 	sub	r2, r2, #1	; 0x1
         feec4:	e5901420 	ldr	r1, [r0, #1056]	; fField1056
         feec8:	e1310002 	teq	r1, r2
         feecc:	03a02001 	moveq	r2, #1	; 0x1
         feed0:	05c02010 	streqb	r2, [r0, #16]	; fField16
         feed4:	e0812101 	add	r2, r1, r1, lsl #2
         feed8:	e5903434 	ldr	r3, [r0, #1076]	; fField1076
         feedc:	e0832102 	add	r2, r3, r2, lsl #2
         feee0:	e2811001 	add	r1, r1, #1	; 0x1
         feee4:	e5801420 	str	r1, [r0, #1056]	; fField1056
         feee8:	e3a01000 	mov	r1, #0	; 0x0
         feeec:	e582100c 	str	r1, [r2, #12]
         feef0:	e5821008 	str	r1, [r2, #8]
         feef4:	e5821010 	str	r1, [r2, #16]	; fField16
         feef8:	e5c21001 	strb	r1, [r2, #1]
         feefc:	e5c21000 	strb	r1, [r2]
         fef00:	e5c21003 	strb	r1, [r2, #3]
         fef04:	e5c21002 	strb	r1, [r2, #2]
         fef08:	e5c21005 	strb	r1, [r2, #5]
         fef0c:	e5c21004 	strb	r1, [r2, #4]
         fef10:	e5901424 	ldr	r1, [r0, #1060]	; fField1060
         fef14:	e2811001 	add	r1, r1, #1	; 0x1
         fef18:	e5a01424 	str	r1, [r0, #1060]!	; fField1060
         fef1c:	e1a00002 	mov	r0, r2
         fef20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZCompressor::encode_copy_length_bin_huff4(long)
 * Address: 000fef24
 */
TLZCompressor::encode_copy_length_bin_huff4(long) {
    /*
         fef24:	e3310000 	teq	r1, #0	; 0x0
         fef28:	05900430 	ldreq	r0, [r0, #1072]	; fField1072
         fef2c:	03a02000 	moveq	r2, #0	; 0x0
         fef30:	0a000003 	beq	fef44 <TLZCompressor::encode_copy_length_bin_huff4(long)+0x20>
         fef34:	e3310001 	teq	r1, #1	; 0x1
         fef38:	1a000003 	bne	fef4c <TLZCompressor::encode_copy_length_bin_huff4(long)+0x28>
         fef3c:	e5900430 	ldr	r0, [r0, #1072]	; fField1072
         fef40:	e3a02001 	mov	r2, #1	; 0x1
         fef44:	e3a01002 	mov	r1, #2	; 0x2
         fef48:	ea000015 	b	fefa4 <TLZCompressor::encode_copy_length_bin_huff4(long)+0x80>
         fef4c:	e3310002 	teq	r1, #2	; 0x2
         fef50:	05900430 	ldreq	r0, [r0, #1072]	; fField1072
         fef54:	03a02004 	moveq	r2, #4	; 0x4
         fef58:	03a01003 	moveq	r1, #3	; 0x3
         fef5c:	0a000010 	beq	fefa4 <TLZCompressor::encode_copy_length_bin_huff4(long)+0x80>
         fef60:	e3310005 	teq	r1, #5	; 0x5
         fef64:	05900430 	ldreq	r0, [r0, #1072]	; fField1072
         fef68:	03a0200c 	moveq	r2, #12	; 0xc
         fef6c:	03a01004 	moveq	r1, #4	; 0x4
         fef70:	0a00000b 	beq	fefa4 <TLZCompressor::encode_copy_length_bin_huff4(long)+0x80>
         fef74:	e3a03000 	mov	r3, #0	; 0x0
         fef78:	e59f2034 	ldr	r2, [pc, #34]	; fefb4 <TLZCompressor::encode_copy_length_bin_huff4(long)+0x90>
         fef7c:	e792c103 	ldr	ip, [r2, r3, lsl #2]
         fef80:	e15c0001 	cmp	ip, r1
         fef84:	32833001 	addcc	r3, r3, #1	; 0x1
         fef88:	3a000006 	bcc	fefa8 <TLZCompressor::encode_copy_length_bin_huff4(long)+0x84>
         fef8c:	e59f2024 	ldr	r2, [pc, #24]	; fefb8 <TLZCompressor::encode_copy_length_bin_huff4(long)+0x94>
         fef90:	e7922103 	ldr	r2, [r2, r3, lsl #2]
         fef94:	e0822001 	add	r2, r2, r1
         fef98:	e59f101c 	ldr	r1, [pc, #1c]	; fefbc <TLZCompressor::encode_copy_length_bin_huff4(long)+0x98>
         fef9c:	e7911103 	ldr	r1, [r1, r3, lsl #2]
         fefa0:	e5900430 	ldr	r0, [r0, #1072]	; fField1072
         fefa4:	ea6a94af 	b	1ba4268 <Pushpopper::$pushbits(long, long)>
         fefa8:	e3530006 	cmp	r3, #6	; 0x6
         fefac:	bafffff2 	blt	fef7c <TLZCompressor::encode_copy_length_bin_huff4(long)+0x58>
         fefb0:	e1a0f00e 	mov	pc, lr
         fefb4:	00371c10 	eoreqs	r1, r7, r0, lsl ip
         fefb8:	00371c28 	eoreqs	r1, r7, r8, lsr #24
         fefbc:	00371c40 	eoreqs	r1, r7, r0, asr #24
    */
}

/**
 * Symbol: TLZCompressor::encode_offset_bin(long, unsigned long)
 * Address: 000fefc0
 */
TLZCompressor::encode_offset_bin(long, unsigned long) {
    /*
         fefc0:	e1a0c00d 	mov	ip, sp
         fefc4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         fefc8:	e24cb004 	sub	fp, ip, #4	; 0x4
         fefcc:	e1a04000 	mov	r4, r0
         fefd0:	e1a06001 	mov	r6, r1
         fefd4:	e1a05002 	mov	r5, r2
         fefd8:	e5900428 	ldr	r0, [r0, #1064]	; fField1064
         fefdc:	e350000a 	cmp	r0, #10	; 0xa
         fefe0:	908ff100 	addls	pc, pc, r0, lsl #2
         fefe4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         fefe8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         fefec:	ea00007c 	b	ff1e4 <TLZCompressor::encode_offset_bin(long, unsigned long)+0x224>
         feff0:	ea00006e 	b	ff1b0 <TLZCompressor::encode_offset_bin(long, unsigned long)+0x1f0>
         feff4:	ea000060 	b	ff17c <TLZCompressor::encode_offset_bin(long, unsigned long)+0x1bc>
         feff8:	ea000052 	b	ff148 <TLZCompressor::encode_offset_bin(long, unsigned long)+0x188>
         feffc:	ea000044 	b	ff114 <TLZCompressor::encode_offset_bin(long, unsigned long)+0x154>
         ff000:	ea000036 	b	ff0e0 <TLZCompressor::encode_offset_bin(long, unsigned long)+0x120>
         ff004:	ea000028 	b	ff0ac <TLZCompressor::encode_offset_bin(long, unsigned long)+0xec>
         ff008:	ea00001a 	b	ff078 <TLZCompressor::encode_offset_bin(long, unsigned long)+0xb8>
         ff00c:	ea00000c 	b	ff044 <TLZCompressor::encode_offset_bin(long, unsigned long)+0x84>
         ff010:	e3560015 	cmp	r6, #21	; 0x15
         ff014:	aa000004 	bge	ff02c <TLZCompressor::encode_offset_bin(long, unsigned long)+0x6c>
         ff018:	e1a01005 	mov	r1, r5
         ff01c:	e1a00006 	mov	r0, r6
         ff020:	e5b42430 	ldr	r2, [r4, #1072]!	; fField1072
         ff024:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ff028:	ea6a8c51 	b	1ba2174 <$encode_offset_case10_bin__FlT1P10Pushpopper>
         ff02c:	e1a01005 	mov	r1, r5
         ff030:	e3a00015 	mov	r0, #21	; 0x15
         ff034:	e5942430 	ldr	r2, [r4, #1072]	; fField1072
         ff038:	eb6a8c4d 	bl	1ba2174 <$encode_offset_case10_bin__FlT1P10Pushpopper>
         ff03c:	e3a00009 	mov	r0, #9	; 0x9
         ff040:	e5840428 	str	r0, [r4, #1064]	; fField1064
         ff044:	e356002a 	cmp	r6, #42	; 0x2a
         ff048:	aa000004 	bge	ff060 <TLZCompressor::encode_offset_bin(long, unsigned long)+0xa0>
         ff04c:	e1a01005 	mov	r1, r5
         ff050:	e1a00006 	mov	r0, r6
         ff054:	e5b42430 	ldr	r2, [r4, #1072]!	; fField1072
         ff058:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ff05c:	ea6a904d 	b	1ba3198 <$encode_offset_case9_bin__FlT1P10Pushpopper>
         ff060:	e1a01005 	mov	r1, r5
         ff064:	e3a0002a 	mov	r0, #42	; 0x2a
         ff068:	e5942430 	ldr	r2, [r4, #1072]	; fField1072
         ff06c:	eb6a9049 	bl	1ba3198 <$encode_offset_case9_bin__FlT1P10Pushpopper>
         ff070:	e3a00008 	mov	r0, #8	; 0x8
         ff074:	e5840428 	str	r0, [r4, #1064]	; fField1064
         ff078:	e3560054 	cmp	r6, #84	; 0x54
         ff07c:	aa000004 	bge	ff094 <TLZCompressor::encode_offset_bin(long, unsigned long)+0xd4>
         ff080:	e1a01005 	mov	r1, r5
         ff084:	e1a00006 	mov	r0, r6
         ff088:	e5b42430 	ldr	r2, [r4, #1072]!	; fField1072
         ff08c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ff090:	ea6a903f 	b	1ba3194 <$encode_offset_case8_bin__FlT1P10Pushpopper>
         ff094:	e1a01005 	mov	r1, r5
         ff098:	e3a00054 	mov	r0, #84	; 0x54
         ff09c:	e5942430 	ldr	r2, [r4, #1072]	; fField1072
         ff0a0:	eb6a903b 	bl	1ba3194 <$encode_offset_case8_bin__FlT1P10Pushpopper>
         ff0a4:	e3a00007 	mov	r0, #7	; 0x7
         ff0a8:	e5840428 	str	r0, [r4, #1064]	; fField1064
         ff0ac:	e35600a8 	cmp	r6, #168	; 0xa8
         ff0b0:	aa000004 	bge	ff0c8 <TLZCompressor::encode_offset_bin(long, unsigned long)+0x108>
         ff0b4:	e1a01005 	mov	r1, r5
         ff0b8:	e1a00006 	mov	r0, r6
         ff0bc:	e5b42430 	ldr	r2, [r4, #1072]!	; fField1072
         ff0c0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ff0c4:	ea6a9031 	b	1ba3190 <$encode_offset_case7_bin__FlT1P10Pushpopper>
         ff0c8:	e1a01005 	mov	r1, r5
         ff0cc:	e3a000a8 	mov	r0, #168	; 0xa8
         ff0d0:	e5942430 	ldr	r2, [r4, #1072]	; fField1072
         ff0d4:	eb6a902d 	bl	1ba3190 <$encode_offset_case7_bin__FlT1P10Pushpopper>
         ff0d8:	e3a00006 	mov	r0, #6	; 0x6
         ff0dc:	e5840428 	str	r0, [r4, #1064]	; fField1064
         ff0e0:	e3560e15 	cmp	r6, #336	; 0x150
         ff0e4:	aa000004 	bge	ff0fc <TLZCompressor::encode_offset_bin(long, unsigned long)+0x13c>
         ff0e8:	e1a01005 	mov	r1, r5
         ff0ec:	e1a00006 	mov	r0, r6
         ff0f0:	e5b42430 	ldr	r2, [r4, #1072]!	; fField1072
         ff0f4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ff0f8:	ea6a9023 	b	1ba318c <$encode_offset_case6_bin__FlT1P10Pushpopper>
         ff0fc:	e1a01005 	mov	r1, r5
         ff100:	e3a00e15 	mov	r0, #336	; 0x150
         ff104:	e5942430 	ldr	r2, [r4, #1072]	; fField1072
         ff108:	eb6a901f 	bl	1ba318c <$encode_offset_case6_bin__FlT1P10Pushpopper>
         ff10c:	e3a00005 	mov	r0, #5	; 0x5
         ff110:	e5840428 	str	r0, [r4, #1064]	; fField1064
         ff114:	e3560e2a 	cmp	r6, #672	; 0x2a0
         ff118:	aa000004 	bge	ff130 <TLZCompressor::encode_offset_bin(long, unsigned long)+0x170>
         ff11c:	e1a01005 	mov	r1, r5
         ff120:	e1a00006 	mov	r0, r6
         ff124:	e5b42430 	ldr	r2, [r4, #1072]!	; fField1072
         ff128:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ff12c:	ea6a9015 	b	1ba3188 <$encode_offset_case5_bin__FlT1P10Pushpopper>
         ff130:	e1a01005 	mov	r1, r5
         ff134:	e3a00e2a 	mov	r0, #672	; 0x2a0
         ff138:	e5942430 	ldr	r2, [r4, #1072]	; fField1072
         ff13c:	eb6a9011 	bl	1ba3188 <$encode_offset_case5_bin__FlT1P10Pushpopper>
         ff140:	e3a00004 	mov	r0, #4	; 0x4
         ff144:	e5840428 	str	r0, [r4, #1064]	; fField1064
         ff148:	e3560d15 	cmp	r6, #1344	; 0x540
         ff14c:	aa000004 	bge	ff164 <TLZCompressor::encode_offset_bin(long, unsigned long)+0x1a4>
         ff150:	e1a01005 	mov	r1, r5
         ff154:	e1a00006 	mov	r0, r6
         ff158:	e5b42430 	ldr	r2, [r4, #1072]!	; fField1072
         ff15c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ff160:	ea6a9007 	b	1ba3184 <$encode_offset_case4_bin__FlT1P10Pushpopper>
         ff164:	e1a01005 	mov	r1, r5
         ff168:	e3a00d15 	mov	r0, #1344	; 0x540
         ff16c:	e5942430 	ldr	r2, [r4, #1072]	; fField1072
         ff170:	eb6a9003 	bl	1ba3184 <$encode_offset_case4_bin__FlT1P10Pushpopper>
         ff174:	e3a00003 	mov	r0, #3	; 0x3
         ff178:	e5840428 	str	r0, [r4, #1064]	; fField1064
         ff17c:	e3560d2a 	cmp	r6, #2688	; 0xa80
         ff180:	aa000004 	bge	ff198 <TLZCompressor::encode_offset_bin(long, unsigned long)+0x1d8>
         ff184:	e1a01005 	mov	r1, r5
         ff188:	e1a00006 	mov	r0, r6
         ff18c:	e5b42430 	ldr	r2, [r4, #1072]!	; fField1072
         ff190:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ff194:	ea6a8ff9 	b	1ba3180 <$encode_offset_case3_bin__FlT1P10Pushpopper>
         ff198:	e1a01005 	mov	r1, r5
         ff19c:	e3a00d2a 	mov	r0, #2688	; 0xa80
         ff1a0:	e5942430 	ldr	r2, [r4, #1072]	; fField1072
         ff1a4:	eb6a8ff5 	bl	1ba3180 <$encode_offset_case3_bin__FlT1P10Pushpopper>
         ff1a8:	e3a00002 	mov	r0, #2	; 0x2
         ff1ac:	e5840428 	str	r0, [r4, #1064]	; fField1064
         ff1b0:	e3560c15 	cmp	r6, #5376	; 0x1500
         ff1b4:	aa000004 	bge	ff1cc <TLZCompressor::encode_offset_bin(long, unsigned long)+0x20c>
         ff1b8:	e1a01005 	mov	r1, r5
         ff1bc:	e1a00006 	mov	r0, r6
         ff1c0:	e5b42430 	ldr	r2, [r4, #1072]!	; fField1072
         ff1c4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ff1c8:	ea6a8beb 	b	1ba217c <$encode_offset_case2_bin__FlT1P10Pushpopper>
         ff1cc:	e1a01005 	mov	r1, r5
         ff1d0:	e3a00c15 	mov	r0, #5376	; 0x1500
         ff1d4:	e5942430 	ldr	r2, [r4, #1072]	; fField1072
         ff1d8:	eb6a8be7 	bl	1ba217c <$encode_offset_case2_bin__FlT1P10Pushpopper>
         ff1dc:	e3a00001 	mov	r0, #1	; 0x1
         ff1e0:	e5840428 	str	r0, [r4, #1064]	; fField1064
         ff1e4:	e3560c2a 	cmp	r6, #10752	; 0x2a00
         ff1e8:	e1a01005 	mov	r1, r5
         ff1ec:	e5b42430 	ldr	r2, [r4, #1072]!	; fField1072
         ff1f0:	a3a00c2a 	movge	r0, #10752	; 0x2a00
         ff1f4:	b1a00006 	movlt	r0, r6
         ff1f8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ff1fc:	ea6a8bdd 	b	1ba2178 <$encode_offset_case1_bin__FlT1P10Pushpopper>
    */
}

/**
 * Symbol: TLZCompressor::Delete(void)
 * Address: 000ff2e4
 */
TLZCompressor::Delete(void) {
    /*
         ff2e4:	e1a0c00d 	mov	ip, sp
         ff2e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ff2ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         ff2f0:	e1a04000 	mov	r4, r0
         ff2f4:	e5900434 	ldr	r0, [r0, #1076]	; fField1076
         ff2f8:	eb6b4d96 	bl	1bd2958 <$free>
         ff2fc:	e5b40430 	ldr	r0, [r4, #1072]!	; fField1072
         ff300:	e3300000 	teq	r0, #0	; 0x0
         ff304:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         ff308:	e3a01001 	mov	r1, #1	; 0x1
         ff30c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         ff310:	e590f000 	ldr	pc, [r0]
    */
}

/**
 * Symbol: TLZCompressor::Init(void *)
 * Address: 000ff494
 */
TLZCompressor::Init(void *) {
    /*
         ff494:	e3a00000 	mov	r0, #0	; 0x0
         ff498:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZCompressor::Finish(void *, unsigned long)
 * Address: 000ff49c
 */
TLZCompressor::Finish(void *, unsigned long) {
    /*
         ff49c:	e3310000 	teq	r1, #0	; 0x0
         ff4a0:	13320000 	teqne	r2, #0	; 0x0
         ff4a4:	1a6a977f 	bne	1ba52a8 <TLZCompressor::$SetHeader(void *, unsigned long)>
         ff4a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)
 * Address: 000ff4ac
 */
TLZCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long) {
    /*
         ff4ac:	e1a0c00d 	mov	ip, sp
         ff4b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ff4b4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ff4b8:	e24cb014 	sub	fp, ip, #20	; 0x14
         ff4bc:	e1a04000 	mov	r4, r0
         ff4c0:	e59b8014 	ldr	r8, [fp, #20]	; fField20
         ff4c4:	e24dd00c 	sub	sp, sp, #12	; 0xc
         ff4c8:	e3a09000 	mov	r9, #0	; 0x0
         ff4cc:	e59b700c 	ldr	r7, [fp, #12]
         ff4d0:	e5d0042e 	ldrb	r0, [r0, #1070]	; fField1070
         ff4d4:	e3300000 	teq	r0, #0	; 0x0
         ff4d8:	03a000e9 	moveq	r0, #233	; 0xe9
         ff4dc:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         ff4e0:	0a00003f 	beq	ff5e4 <TLZCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0x138>
         ff4e4:	e3a06b01 	mov	r6, #1024	; 0x400
         ff4e8:	e3a05004 	mov	r5, #4	; 0x4
         ff4ec:	e3a0a001 	mov	sl, #1	; 0x1
         ff4f0:	e3a01000 	mov	r1, #0	; 0x0
         ff4f4:	e58d1004 	str	r1, [sp, #4]
         ff4f8:	ea000003 	b	ff50c <TLZCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0x60>
         ff4fc:	e59d0000 	ldr	r0, [sp]
         ff500:	e3300000 	teq	r0, #0	; 0x0
         ff504:	13a00000 	movne	r0, #0	; 0x0
         ff508:	1a000000 	bne	ff510 <TLZCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0x64>
         ff50c:	e3a00001 	mov	r0, #1	; 0x1
         ff510:	e58d0000 	str	r0, [sp]
         ff514:	e3a00000 	mov	r0, #0	; 0x0
         ff518:	e5840420 	str	r0, [r4, #1056]	; fField1056
         ff51c:	e59b0018 	ldr	r0, [fp, #24]
         ff520:	e0400009 	sub	r0, r0, r9
         ff524:	e1500006 	cmp	r0, r6
         ff528:	93a01001 	movls	r1, #1	; 0x1
         ff52c:	91a06000 	movls	r6, r0
         ff530:	958d1004 	strls	r1, [sp, #4]
         ff534:	e33a0001 	teq	sl, #1	; 0x1
         ff538:	1a000013 	bne	ff58c <TLZCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0xe0>
         ff53c:	e3560000 	cmp	r6, #0	; 0x0
         ff540:	9a000009 	bls	ff56c <TLZCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0xc0>
         ff544:	e1a03006 	mov	r3, r6
         ff548:	e1a02008 	mov	r2, r8
         ff54c:	e92d000c 	stmdb	sp!, {r2, r3}
         ff550:	e0872005 	add	r2, r7, r5
         ff554:	e28d1010 	add	r1, sp, #16	; 0x10
         ff558:	e1a00004 	mov	r0, r4
         ff55c:	e59b3010 	ldr	r3, [fp, #16]	; fField16
         ff560:	eb6a86e4 	bl	1ba10f8 <TLZCompressor::$CompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)>
         ff564:	e28dd008 	add	sp, sp, #8	; 0x8
         ff568:	ea000001 	b	ff574 <TLZCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0xc8>
         ff56c:	e3a00000 	mov	r0, #0	; 0x0
         ff570:	e58d0008 	str	r0, [sp, #8]
         ff574:	e59d0008 	ldr	r0, [sp, #8]
         ff578:	e2800004 	add	r0, r0, #4	; 0x4
         ff57c:	e2455004 	sub	r5, r5, #4	; 0x4
         ff580:	e3a0a000 	mov	sl, #0	; 0x0
         ff584:	e58d0008 	str	r0, [sp, #8]
         ff588:	ea000008 	b	ff5b0 <TLZCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0x104>
         ff58c:	e1a03006 	mov	r3, r6
         ff590:	e1a02008 	mov	r2, r8
         ff594:	e92d000c 	stmdb	sp!, {r2, r3}
         ff598:	e1a02007 	mov	r2, r7
         ff59c:	e28d1010 	add	r1, sp, #16	; 0x10
         ff5a0:	e1a00004 	mov	r0, r4
         ff5a4:	e59b3010 	ldr	r3, [fp, #16]	; fField16
         ff5a8:	eb6a86d2 	bl	1ba10f8 <TLZCompressor::$CompressBlock(unsigned long *, void *, unsigned long, void *, unsigned long)>
         ff5ac:	e28dd008 	add	sp, sp, #8	; 0x8
         ff5b0:	e0888006 	add	r8, r8, r6
         ff5b4:	e59d0008 	ldr	r0, [sp, #8]
         ff5b8:	e0877000 	add	r7, r7, r0
         ff5bc:	e0855000 	add	r5, r5, r0
         ff5c0:	e0899006 	add	r9, r9, r6
         ff5c4:	e59d1004 	ldr	r1, [sp, #4]
         ff5c8:	e3310000 	teq	r1, #0	; 0x0
         ff5cc:	0affffca 	beq	ff4fc <TLZCompressor::CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0x50>
         ff5d0:	e59b1008 	ldr	r1, [fp, #8]
         ff5d4:	e5815000 	str	r5, [r1]
         ff5d8:	e59b200c 	ldr	r2, [fp, #12]
         ff5dc:	e3a00000 	mov	r0, #0	; 0x0
         ff5e0:	e5825000 	str	r5, [r2]
         ff5e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLZCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long)
 * Address: 000ff5e8
 */
TLZCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long) {
    /*
         ff5e8:	e1a0c00d 	mov	ip, sp
         ff5ec:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ff5f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         ff5f4:	e1a04000 	mov	r4, r0
         ff5f8:	e1a07001 	mov	r7, r1
         ff5fc:	e1a06002 	mov	r6, r2
         ff600:	e1a05003 	mov	r5, r3
         ff604:	e3a01000 	mov	r1, #0	; 0x0
         ff608:	e59b9008 	ldr	r9, [fp, #8]
         ff60c:	e59ba004 	ldr	sl, [fp, #4]
         ff610:	eb6a92fa 	bl	1ba4200 <TLZCompressor::$Init(void *)>
         ff614:	e1b08000 	movs	r8, r0
         ff618:	1a00000d 	bne	ff654 <TLZCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long)+0x6c>
         ff61c:	e1a03009 	mov	r3, r9
         ff620:	e1a0200a 	mov	r2, sl
         ff624:	e92d000c 	stmdb	sp!, {r2, r3}
         ff628:	e1a03005 	mov	r3, r5
         ff62c:	e1a02006 	mov	r2, r6
         ff630:	e1a01007 	mov	r1, r7
         ff634:	e1a00004 	mov	r0, r4
         ff638:	eb6a86af 	bl	1ba10fc <TLZCompressor::$CompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)>
         ff63c:	e28dd008 	add	sp, sp, #8	; 0x8
         ff640:	e1a08000 	mov	r8, r0
         ff644:	e1a00004 	mov	r0, r4
         ff648:	e3a02000 	mov	r2, #0	; 0x0
         ff64c:	e3a01000 	mov	r1, #0	; 0x0
         ff650:	eb6a8ed5 	bl	1ba31ac <TLZCompressor::$Finish(void *, unsigned long)>
         ff654:	e1a00008 	mov	r0, r8
         ff658:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TLZCompressor::EstimatedCompressedSize(void *, unsigned long)
 * Address: 000ff65c
 */
TLZCompressor::EstimatedCompressedSize(void *, unsigned long) {
    /*
         ff65c:	e1a0c00d 	mov	ip, sp
         ff660:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ff664:	e24cb004 	sub	fp, ip, #4	; 0x4
         ff668:	e1a04002 	mov	r4, r2
         ff66c:	eb6a8ee2 	bl	1ba31fc <TLZCompressor::$HeaderSize(void)>
         ff670:	e0800004 	add	r0, r0, r4
         ff674:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TLZCompressor::SetHeader(void *, unsigned long)
 * Address: 000ff678
 */
TLZCompressor::SetHeader(void *, unsigned long) {
    /*
         ff678:	e3520008 	cmp	r2, #8	; 0x8
         ff67c:	33a000ea 	movcc	r0, #234	; 0xea
         ff680:	32400b0a 	subcc	r0, r0, #10240	; 0x2800
         ff684:	31a0f00e 	movcc	pc, lr
         ff688:	e3a00112 	mov	r0, #-2147483644	; 0x80000004
         ff68c:	e5810000 	str	r0, [r1]
         ff690:	e3a00000 	mov	r0, #0	; 0x0
         ff694:	e5a10004 	str	r0, [r1, #4]!
         ff698:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLZCompressor::HeaderSize(void)
 * Address: 000ff69c
 */
TLZCompressor::HeaderSize(void) {
    /*
         ff69c:	e3a00008 	mov	r0, #8	; 0x8
         ff6a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: ClassInfo__13TLZCompressorSFv
 * Address: 0038979c
 */
void TLZCompressor::ClassInfo() {
    /*
        38979c:	e24f0044 	sub	r0, pc, #68	; 0x44
        3897a0:	e1a0f00e 	mov	pc, lr
        3897a4:	e3a00000 	mov	r0, #0	; 0x0
        3897a8:	e1a0f00e 	mov	pc, lr
        3897ac:	544c5a43 	strplb	r5, [ip], -#2627
        3897b0:	6f6d7072 	swivs	0x006d7072
        3897b4:	6573736f 	ldrvsb	r7, [r3, -#879]!
        3897b8:	72005443 	andvc	r5, r0, #1124073472	; 0x43000000
        3897bc:	6f6d7072 	swivs	0x006d7072
        3897c0:	6573736f 	ldrvsb	r7, [r3, -#879]!
        3897c4:	72000000 	andvc	r0, r0, #0	; 0x0
        3897c8:	00000000 	andeq	r0, r0, r0
        3897cc:	eafffff2 	b	38979c <ClassInfo__13TLZCompressorSFv>
        3897d0:	ea606a9b 	b	1ba4244 <TLZCompressor::$New(void)>
        3897d4:	ea60625b 	b	1ba2148 <TLZCompressor::$Delete(void)>
        3897d8:	ea606a88 	b	1ba4200 <TLZCompressor::$Init(void *)>
        3897dc:	ea605e44 	b	1ba10f4 <TLZCompressor::$Compress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        3897e0:	ea60666d 	b	1ba319c <TLZCompressor::$EstimatedCompressedSize(void *, unsigned long)>
        3897e4:	00000000 	andeq	r0, r0, r0
        3897e8:	00000048 	andeq	r0, r0, r8, asr #32
        3897ec:	0000005a 	andeq	r0, r0, sl, asr r0
        3897f0:	0000006a 	andeq	r0, r0, sl, rrx
        3897f4:	00000098 	muleq	r0, r8, r0
        3897f8:	000000b4 	streqh	r0, [r0], -r4
        3897fc:	ea606eb2 	b	1ba52cc <$Sizeof__21TLZCallbackCompressorSFv>
        389808:	ea606a92 	b	1ba4258 <TLZCallbackCompressor::$New(void)>
        38980c:	ea606252 	b	1ba215c <TLZCallbackCompressor::$Delete(void)>
        38981c:	ea000001 	b	389828 <ClassInfo__21TLZCallbackCompressorSFv+0x8>
    */
}

