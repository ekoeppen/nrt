#include "include/TUnicodeCompressor.h"

/**
 * Symbol: Sizeof__18TUnicodeCompressorSFv
 * Address: 00256c74
 */
void TUnicodeCompressor::Sizeof() {
    /*
        256c74:	e3a00f69 	mov	r0, #420	; 0x1a4
        256c78:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnicodeCompressor::New(void)
 * Address: 00256c7c
 */
TUnicodeCompressor::New(void) {
    /*
        256c7c:	e3a01000 	mov	r1, #0	; 0x0
        256c80:	e5801098 	str	r1, [r0, #152]	; fField152
        256c84:	e5c010a0 	strb	r1, [r0, #160]	; fField160
        256c88:	e580109c 	str	r1, [r0, #156]	; fField156
        256c8c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnicodeCompressor::Delete(void)
 * Address: 00256ecc
 */
TUnicodeCompressor::Delete(void) {
    /*
        256ecc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnicodeCompressor::Init(void *)
 * Address: 00256ed0
 */
TUnicodeCompressor::Init(void *) {
    /*
        256ed0:	e3a00000 	mov	r0, #0	; 0x0
        256ed4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnicodeCompressor::Reset(void)
 * Address: 00256ed8
 */
TUnicodeCompressor::Reset(void) {
    /*
        256ed8:	e3a01000 	mov	r1, #0	; 0x0
        256edc:	e5801098 	str	r1, [r0, #152]	; fField152
        256ee0:	e5c010a0 	strb	r1, [r0, #160]	; fField160
        256ee4:	e5a0109c 	str	r1, [r0, #156]!	; fField156
        256ee8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUnicodeCompressor::WriteRun(void)
 * Address: 00256eec
 */
TUnicodeCompressor::WriteRun(void) {
    /*
        256eec:	e1a0c00d 	mov	ip, sp
        256ef0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        256ef4:	e24cb004 	sub	fp, ip, #4	; 0x4
        256ef8:	e1a04000 	mov	r4, r0
        256efc:	e3a08000 	mov	r8, #0	; 0x0
        256f00:	e590009c 	ldr	r0, [r0, #156]	; fField156
        256f04:	e3300000 	teq	r0, #0	; 0x0
        256f08:	0a00003d 	beq	257004 <TUnicodeCompressor::WriteRun(void)+0x118>
        256f0c:	e5d400a0 	ldrb	r0, [r4, #160]	; fField160
        256f10:	e20050ff 	and	r5, r0, #255	; 0xff
        256f14:	e3a07000 	mov	r7, #0	; 0x0
        256f18:	e5942098 	ldr	r2, [r4, #152]	; fField152
        256f1c:	e2846018 	add	r6, r4, #24	; 0x18
        256f20:	e3520080 	cmp	r2, #128	; 0x80
        256f24:	3a000005 	bcc	256f40 <TUnicodeCompressor::WriteRun(void)+0x54>
        256f28:	e1a01006 	mov	r1, r6
        256f2c:	e3a03000 	mov	r3, #0	; 0x0
        256f30:	e5940014 	ldr	r0, [r4, #20]	; fField20
        256f34:	e1a0e00f 	mov	lr, pc
        256f38:	e594f010 	ldr	pc, [r4, #16]	; fField16
        256f3c:	e5847098 	str	r7, [r4, #152]	; fField152
        256f40:	e5940098 	ldr	r0, [r4, #152]	; fField152
        256f44:	e2801001 	add	r1, r0, #1	; 0x1
        256f48:	e5841098 	str	r1, [r4, #152]	; fField152
        256f4c:	e0800004 	add	r0, r0, r4
        256f50:	e5c05018 	strb	r5, [r0, #24]
        256f54:	e594009c 	ldr	r0, [r4, #156]	; fField156
        256f58:	e20050ff 	and	r5, r0, #255	; 0xff
        256f5c:	e5942098 	ldr	r2, [r4, #152]	; fField152
        256f60:	e3520080 	cmp	r2, #128	; 0x80
        256f64:	3a000005 	bcc	256f80 <TUnicodeCompressor::WriteRun(void)+0x94>
        256f68:	e1a01006 	mov	r1, r6
        256f6c:	e3a03000 	mov	r3, #0	; 0x0
        256f70:	e5940014 	ldr	r0, [r4, #20]	; fField20
        256f74:	e1a0e00f 	mov	lr, pc
        256f78:	e594f010 	ldr	pc, [r4, #16]	; fField16
        256f7c:	e5847098 	str	r7, [r4, #152]	; fField152
        256f80:	e5940098 	ldr	r0, [r4, #152]	; fField152
        256f84:	e2801001 	add	r1, r0, #1	; 0x1
        256f88:	e5841098 	str	r1, [r4, #152]	; fField152
        256f8c:	e0800004 	add	r0, r0, r4
        256f90:	e5c05018 	strb	r5, [r0, #24]
        256f94:	e3a05000 	mov	r5, #0	; 0x0
        256f98:	e594009c 	ldr	r0, [r4, #156]	; fField156
        256f9c:	e3500000 	cmp	r0, #0	; 0x0
        256fa0:	9a000016 	bls	257000 <TUnicodeCompressor::WriteRun(void)+0x114>
        256fa4:	e0840005 	add	r0, r4, r5
        256fa8:	e5d000a1 	ldrb	r0, [r0, #161]	; fField161
        256fac:	e20080ff 	and	r8, r0, #255	; 0xff
        256fb0:	e3a09000 	mov	r9, #0	; 0x0
        256fb4:	e5942098 	ldr	r2, [r4, #152]	; fField152
        256fb8:	e3520080 	cmp	r2, #128	; 0x80
        256fbc:	3a000005 	bcc	256fd8 <TUnicodeCompressor::WriteRun(void)+0xec>
        256fc0:	e1a01006 	mov	r1, r6
        256fc4:	e3a03000 	mov	r3, #0	; 0x0
        256fc8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        256fcc:	e1a0e00f 	mov	lr, pc
        256fd0:	e594f010 	ldr	pc, [r4, #16]	; fField16
        256fd4:	e5847098 	str	r7, [r4, #152]	; fField152
        256fd8:	e5940098 	ldr	r0, [r4, #152]	; fField152
        256fdc:	e2801001 	add	r1, r0, #1	; 0x1
        256fe0:	e5841098 	str	r1, [r4, #152]	; fField152
        256fe4:	e0800004 	add	r0, r0, r4
        256fe8:	e5c08018 	strb	r8, [r0, #24]
        256fec:	e1a08009 	mov	r8, r9
        256ff0:	e2855001 	add	r5, r5, #1	; 0x1
        256ff4:	e594009c 	ldr	r0, [r4, #156]	; fField156
        256ff8:	e1500005 	cmp	r0, r5
        256ffc:	8affffe8 	bhi	256fa4 <TUnicodeCompressor::WriteRun(void)+0xb8>
        257000:	e5a4709c 	str	r7, [r4, #156]!	; fField156
        257004:	e1a00008 	mov	r0, r8
        257008:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TUnicodeCompressor::WriteChunk(void *, long)
 * Address: 0025700c
 */
TUnicodeCompressor::WriteChunk(void *, long) {
    /*
        25700c:	e1a0c00d 	mov	ip, sp
        257010:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        257014:	e24cb004 	sub	fp, ip, #4	; 0x4
        257018:	e1a04000 	mov	r4, r0
        25701c:	e1a05002 	mov	r5, r2
        257020:	e24dd008 	sub	sp, sp, #8	; 0x8
        257024:	e1a09001 	mov	r9, r1
        257028:	e3a07000 	mov	r7, #0	; 0x0
        25702c:	e3a08000 	mov	r8, #0	; 0x0
        257030:	e3120001 	tst	r2, #1	; 0x1
        257034:	13a000ea 	movne	r0, #234	; 0xea
        257038:	12400b0a 	subne	r0, r0, #10240	; 0x2800
        25703c:	1a000055 	bne	257198 <TUnicodeCompressor::WriteChunk(void *, long)+0x18c>
        257040:	e1a050a5 	mov	r5, r5, lsr #1
        257044:	e3550000 	cmp	r5, #0	; 0x0
        257048:	da000051 	ble	257194 <TUnicodeCompressor::WriteChunk(void *, long)+0x188>
        25704c:	e59f1068 	ldr	r1, [pc, #68]	; 2570bc <TUnicodeCompressor::WriteChunk(void *, long)+0xb0>
        257050:	e58d1004 	str	r1, [sp, #4]
        257054:	e2841018 	add	r1, r4, #24	; 0x18
        257058:	e58d1000 	str	r1, [sp]
        25705c:	e5990000 	ldr	r0, [r9]
        257060:	e1a00820 	mov	r0, r0, lsr #16
        257064:	e2899002 	add	r9, r9, #2	; 0x2
        257068:	e1a01440 	mov	r1, r0, asr #8
        25706c:	e201a0ff 	and	sl, r1, #255	; 0xff
        257070:	e20060ff 	and	r6, r0, #255	; 0xff
        257074:	e594009c 	ldr	r0, [r4, #156]	; fField156
        257078:	e3500000 	cmp	r0, #0	; 0x0
        25707c:	9a000013 	bls	2570d0 <TUnicodeCompressor::WriteChunk(void *, long)+0xc4>
        257080:	e5d410a0 	ldrb	r1, [r4, #160]	; fField160
        257084:	e131000a 	teq	r1, sl
        257088:	1a00000c 	bne	2570c0 <TUnicodeCompressor::WriteChunk(void *, long)+0xb4>
        25708c:	e2801001 	add	r1, r0, #1	; 0x1
        257090:	e584109c 	str	r1, [r4, #156]	; fField156
        257094:	e0800004 	add	r0, r0, r4
        257098:	e5c060a1 	strb	r6, [r0, #161]	; fField161
        25709c:	e594009c 	ldr	r0, [r4, #156]	; fField156
        2570a0:	e35000ff 	cmp	r0, #255	; 0xff
        2570a4:	3a000037 	bcc	257188 <TUnicodeCompressor::WriteChunk(void *, long)+0x17c>
        2570a8:	e1a00004 	mov	r0, r4
        2570ac:	eb653c99 	bl	1ba6318 <TUnicodeCompressor::$WriteRun(void)>
        2570b0:	e1b08000 	movs	r8, r0
        2570b4:	1a000036 	bne	257194 <TUnicodeCompressor::WriteChunk(void *, long)+0x188>
        2570b8:	ea000032 	b	257188 <TUnicodeCompressor::WriteChunk(void *, long)+0x17c>
        2570bc:	0037ac18 	eoreqs	sl, r7, r8, lsl ip
        2570c0:	e1a00004 	mov	r0, r4
        2570c4:	eb653c93 	bl	1ba6318 <TUnicodeCompressor::$WriteRun(void)>
        2570c8:	e1b08000 	movs	r8, r0
        2570cc:	1a000030 	bne	257194 <TUnicodeCompressor::WriteChunk(void *, long)+0x188>
        2570d0:	e59d1004 	ldr	r1, [sp, #4]
        2570d4:	e7d111ca 	ldrb	r1, [r1, sl, asr #3]
        2570d8:	e20a0007 	and	r0, sl, #7	; 0x7
        2570dc:	e3a02080 	mov	r2, #128	; 0x80
        2570e0:	e0010032 	and	r0, r1, r2, lsr r0
        2570e4:	e31000ff 	tst	r0, #255	; 0xff
        2570e8:	0a000004 	beq	257100 <TUnicodeCompressor::WriteChunk(void *, long)+0xf4>
        2570ec:	e5c460a1 	strb	r6, [r4, #161]	; fField161
        2570f0:	e3a00001 	mov	r0, #1	; 0x1
        2570f4:	e584009c 	str	r0, [r4, #156]	; fField156
        2570f8:	e5c4a0a0 	strb	sl, [r4, #160]	; fField160
        2570fc:	ea000021 	b	257188 <TUnicodeCompressor::WriteChunk(void *, long)+0x17c>
        257100:	e1a0800a 	mov	r8, sl
        257104:	e3a00000 	mov	r0, #0	; 0x0
        257108:	e52d0004 	str	r0, [sp, -#4]!
        25710c:	e5942098 	ldr	r2, [r4, #152]	; fField152
        257110:	e3520080 	cmp	r2, #128	; 0x80
        257114:	3a000006 	bcc	257134 <TUnicodeCompressor::WriteChunk(void *, long)+0x128>
        257118:	e3a0a000 	mov	sl, #0	; 0x0
        25711c:	e3a03000 	mov	r3, #0	; 0x0
        257120:	e59d1004 	ldr	r1, [sp, #4]
        257124:	e5940014 	ldr	r0, [r4, #20]	; fField20
        257128:	e1a0e00f 	mov	lr, pc
        25712c:	e594f010 	ldr	pc, [r4, #16]	; fField16
        257130:	e584a098 	str	sl, [r4, #152]	; fField152
        257134:	e5940098 	ldr	r0, [r4, #152]	; fField152
        257138:	e2801001 	add	r1, r0, #1	; 0x1
        25713c:	e5841098 	str	r1, [r4, #152]	; fField152
        257140:	e0800004 	add	r0, r0, r4
        257144:	e5c08018 	strb	r8, [r0, #24]
        257148:	e49d8004 	ldr	r8, [sp], #4
        25714c:	e5942098 	ldr	r2, [r4, #152]	; fField152
        257150:	e3520080 	cmp	r2, #128	; 0x80
        257154:	3a000006 	bcc	257174 <TUnicodeCompressor::WriteChunk(void *, long)+0x168>
        257158:	e3a0a000 	mov	sl, #0	; 0x0
        25715c:	e3a03000 	mov	r3, #0	; 0x0
        257160:	e59d1000 	ldr	r1, [sp]
        257164:	e5940014 	ldr	r0, [r4, #20]	; fField20
        257168:	e1a0e00f 	mov	lr, pc
        25716c:	e594f010 	ldr	pc, [r4, #16]	; fField16
        257170:	e584a098 	str	sl, [r4, #152]	; fField152
        257174:	e5940098 	ldr	r0, [r4, #152]	; fField152
        257178:	e2801001 	add	r1, r0, #1	; 0x1
        25717c:	e5841098 	str	r1, [r4, #152]	; fField152
        257180:	e0800004 	add	r0, r0, r4
        257184:	e5c06018 	strb	r6, [r0, #24]
        257188:	e2877001 	add	r7, r7, #1	; 0x1
        25718c:	e1570005 	cmp	r7, r5
        257190:	baffffb1 	blt	25705c <TUnicodeCompressor::WriteChunk(void *, long)+0x50>
        257194:	e1a00008 	mov	r0, r8
        257198:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TUnicodeCompressor::Flush(void)
 * Address: 0025719c
 */
TUnicodeCompressor::Flush(void) {
    /*
        25719c:	e1a0c00d 	mov	ip, sp
        2571a0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2571a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2571a8:	e1a04000 	mov	r4, r0
        2571ac:	eb653c59 	bl	1ba6318 <TUnicodeCompressor::$WriteRun(void)>
        2571b0:	e3300000 	teq	r0, #0	; 0x0
        2571b4:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2571b8:	e2841018 	add	r1, r4, #24	; 0x18
        2571bc:	e3a03001 	mov	r3, #1	; 0x1
        2571c0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2571c4:	e5942098 	ldr	r2, [r4, #152]	; fField152
        2571c8:	e1a0e00f 	mov	lr, pc
        2571cc:	e594f010 	ldr	pc, [r4, #16]	; fField16
        2571d0:	e3a01000 	mov	r1, #0	; 0x0
        2571d4:	e5a41098 	str	r1, [r4, #152]!	; fField152
        2571d8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__18TUnicodeCompressorSFv
 * Address: 00389b50
 */
void TUnicodeCompressor::ClassInfo() {
    /*
        389b50:	e24f0044 	sub	r0, pc, #68	; 0x44
        389b54:	e1a0f00e 	mov	pc, lr
        389b58:	e3a00000 	mov	r0, #0	; 0x0
        389b5c:	e1a0f00e 	mov	pc, lr
        389b60:	54556e69 	ldrplb	r6, [r5], -#3689
        389b64:	636f6465 	cmnvs	pc, #1694498816	; 0x65000000
        389b68:	436f6d70 	cmnmi	pc, #7168	; 0x1c00
        389b6c:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        389b70:	6f720054 	swivs	0x00720054
        389b74:	43616c6c 	cmnmi	r1, #27648	; 0x6c00
        389b78:	6261636b 	rsbvs	r6, r1, #-1409286143	; 0xac000001
        389b7c:	436f6d70 	cmnmi	pc, #7168	; 0x1c00
        389b80:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        389b84:	6f720000 	swivs	0x00720000
        389b88:	00000000 	andeq	r0, r0, r0
        389b8c:	eaffffef 	b	389b50 <ClassInfo__18TUnicodeCompressorSFv>
        389b90:	ea6069ad 	b	1ba424c <TUnicodeCompressor::$New(void)>
        389b94:	ea60616d 	b	1ba2150 <TUnicodeCompressor::$Delete(void)>
        389b98:	ea60699a 	b	1ba4208 <TUnicodeCompressor::$Init(void *)>
        389b9c:	ea606dba 	b	1ba528c <TUnicodeCompressor::$Reset(void)>
        389ba0:	ea6071d9 	b	1ba630c <TUnicodeCompressor::$WriteChunk(void *, long)>
        389ba4:	ea606581 	b	1ba31b0 <TUnicodeCompressor::$Flush(void)>
        389ba8:	00000000 	andeq	r0, r0, r0
        389bac:	00000048 	andeq	r0, r0, r8, asr #32
        389bb0:	00000059 	andeq	r0, r0, r9, asr r0
        389bb4:	0000006b 	andeq	r0, r0, fp, rrx
        389bb8:	00000068 	andeq	r0, r0, r8, rrx
        389bbc:	00000080 	andeq	r0, r0, r0, lsl #1
        389bc0:	ea606dbf 	b	1ba52c4 <$Sizeof__20TUnicodeDecompressorSFv>
        389bcc:	ea60699f 	b	1ba4250 <TUnicodeDecompressor::$New(void)>
        389bd0:	ea60615f 	b	1ba2154 <TUnicodeDecompressor::$Delete(void)>
        389be0:	ea000001 	b	389bec <ClassInfo__20TUnicodeDecompressorSFv+0x8>
    */
}

