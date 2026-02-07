#include "include/TZippyDecompressor.h"

/**
 * Symbol: Sizeof__18TZippyDecompressorSFv
 * Address: 00284ee8
 */
void TZippyDecompressor::Sizeof() {
    /*
        284ee8:	e3a00094 	mov	r0, #148	; 0x94
        284eec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyDecompressor::New(void)
 * Address: 00284ef0
 */
TZippyDecompressor::New(void) {
    /*
        284ef0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyDecompressor::Decompress(unsigned long *, void *, unsigned long, void *, unsigned long)
 * Address: 00284ef4
 */
TZippyDecompressor::Decompress(unsigned long *, void *, unsigned long, void *, unsigned long) {
    /*
        284ef4:	e1a0c00d 	mov	ip, sp
        284ef8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        284efc:	e24cb004 	sub	fp, ip, #4	; 0x4
        284f00:	e1a0c002 	mov	ip, r2
        284f04:	e1a0e003 	mov	lr, r3
        284f08:	e99b000c 	ldmib	fp, {r2, r3}
        284f0c:	e92d000c 	stmdb	sp!, {r2, r3}
        284f10:	e1a0300e 	mov	r3, lr
        284f14:	e1a0200c 	mov	r2, ip
        284f18:	eb649177 	bl	1ba94fc <TZippyDecompressor::$DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)>
        284f1c:	e3a00000 	mov	r0, #0	; 0x0
        284f20:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TZippyDecompressor::Delete(void)
 * Address: 00284f3c
 */
TZippyDecompressor::Delete(void) {
    /*
        284f3c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyDecompressor::Finish(void *, unsigned long)
 * Address: 00284f40
 */
TZippyDecompressor::Finish(void *, unsigned long) {
    /*
        284f40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyDecompressor::DecompressedLength(void *, unsigned long)
 * Address: 00284f44
 */
TZippyDecompressor::DecompressedLength(void *, unsigned long) {
    /*
        284f44:	e3a00b01 	mov	r0, #1024	; 0x400
        284f48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyDecompressor::HeaderSize(void)
 * Address: 00284f4c
 */
TZippyDecompressor::HeaderSize(void) {
    /*
        284f4c:	e3a00008 	mov	r0, #8	; 0x8
        284f50:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyDecompressor::Init(void *)
 * Address: 00284f54
 */
TZippyDecompressor::Init(void *) {
    /*
        284f54:	e3a00000 	mov	r0, #0	; 0x0
        284f58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyDecompressor::InitCache(void)
 * Address: 00284f5c
 */
TZippyDecompressor::InitCache(void) {
    /*
        284f5c:	e3a03000 	mov	r3, #0	; 0x0
        284f60:	e3a01000 	mov	r1, #0	; 0x0
        284f64:	e3e0c000 	mvn	ip, #0	; 0x0
        284f68:	e5803010 	str	r3, [r0, #16]	; fField16
        284f6c:	e0802101 	add	r2, r0, r1, lsl #2
        284f70:	e2811001 	add	r1, r1, #1	; 0x1
        284f74:	e5a2c014 	str	ip, [r2, #20]!
        284f78:	e5823040 	str	r3, [r2, #64]
        284f7c:	e3510010 	cmp	r1, #16	; 0x10
        284f80:	bafffff9 	blt	284f6c <TZippyDecompressor::InitCache(void)+0x10>
        284f84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)
 * Address: 00284f88
 */
TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *) {
    /*
        284f88:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        284f8c:	e1a0c000 	mov	ip, r0
        284f90:	e59de014 	ldr	lr, [sp, #20]
        284f94:	e24dd008 	sub	sp, sp, #8	; 0x8
        284f98:	e3a04000 	mov	r4, #0	; 0x0
        284f9c:	e5910000 	ldr	r0, [r1]
        284fa0:	e1500003 	cmp	r0, r3
        284fa4:	3a000010 	bcc	284fec <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x64>
        284fa8:	e5925000 	ldr	r5, [r2]
        284fac:	e3350007 	teq	r5, #7	; 0x7
        284fb0:	1a000001 	bne	284fbc <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x34>
        284fb4:	e1a00004 	mov	r0, r4
        284fb8:	ea0000cb 	b	2852ec <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x364>
        284fbc:	e1500003 	cmp	r0, r3
        284fc0:	9a000001 	bls	284fcc <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x44>
        284fc4:	e3350000 	teq	r5, #0	; 0x0
        284fc8:	0afffff9 	beq	284fb4 <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x2c>
        284fcc:	e5d00000 	ldrb	r0, [r0]
        284fd0:	e20530ff 	and	r3, r5, #255	; 0xff
        284fd4:	e1a00310 	mov	r0, r0, lsl r3
        284fd8:	e20030ff 	and	r3, r0, #255	; 0xff
        284fdc:	e20350c0 	and	r5, r3, #192	; 0xc0
        284fe0:	e33500c0 	teq	r5, #192	; 0xc0
        284fe4:	0afffff2 	beq	284fb4 <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x2c>
        284fe8:	ea00000a 	b	285018 <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x90>
        284fec:	e5d00000 	ldrb	r0, [r0]
        284ff0:	e5cd0000 	strb	r0, [sp]
        284ff4:	e5910000 	ldr	r0, [r1]
        284ff8:	e5d00001 	ldrb	r0, [r0, #1]	; fField1
        284ffc:	e5cd0001 	strb	r0, [sp, #1]	; fField1
        285000:	e59d3000 	ldr	r3, [sp]
        285004:	e5920000 	ldr	r0, [r2]
        285008:	e1a00013 	mov	r0, r3, lsl r0
        28500c:	e58d0000 	str	r0, [sp]
        285010:	e5dd3000 	ldrb	r3, [sp]
        285014:	e20350c0 	and	r5, r3, #192	; 0xc0
        285018:	e3a00001 	mov	r0, #1	; 0x1
        28501c:	e3350000 	teq	r5, #0	; 0x0
        285020:	1a00000f 	bne	285064 <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0xdc>
        285024:	e5923000 	ldr	r3, [r2]
        285028:	e2833002 	add	r3, r3, #2	; 0x2
        28502c:	e5823000 	str	r3, [r2]
        285030:	e3530007 	cmp	r3, #7	; 0x7
        285034:	da000008 	ble	28505c <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0xd4>
        285038:	e5913000 	ldr	r3, [r1]
        28503c:	e2833001 	add	r3, r3, #1	; 0x1
        285040:	e5813000 	str	r3, [r1]
        285044:	e5921000 	ldr	r1, [r2]
        285048:	e3510000 	cmp	r1, #0	; 0x0
        28504c:	b2611000 	rsblt	r1, r1, #0	; 0x0
        285050:	e2011007 	and	r1, r1, #7	; 0x7
        285054:	b2611000 	rsblt	r1, r1, #0	; 0x0
        285058:	e5821000 	str	r1, [r2]
        28505c:	e58e4000 	str	r4, [lr]
        285060:	ea0000a1 	b	2852ec <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x364>
        285064:	e3a0400f 	mov	r4, #15	; 0xf
        285068:	e3350080 	teq	r5, #128	; 0x80
        28506c:	1a000016 	bne	2850cc <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x144>
        285070:	e5925000 	ldr	r5, [r2]
        285074:	e2855006 	add	r5, r5, #6	; 0x6
        285078:	e5825000 	str	r5, [r2]
        28507c:	e3550007 	cmp	r5, #7	; 0x7
        285080:	da000008 	ble	2850a8 <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x120>
        285084:	e5915000 	ldr	r5, [r1]
        285088:	e2855001 	add	r5, r5, #1	; 0x1
        28508c:	e5815000 	str	r5, [r1]
        285090:	e5921000 	ldr	r1, [r2]
        285094:	e3510000 	cmp	r1, #0	; 0x0
        285098:	b2611000 	rsblt	r1, r1, #0	; 0x0
        28509c:	e2011007 	and	r1, r1, #7	; 0x7
        2850a0:	b2611000 	rsblt	r1, r1, #0	; 0x0
        2850a4:	e5821000 	str	r1, [r2]
        2850a8:	e0041143 	and	r1, r4, r3, asr #2
        2850ac:	e20110ff 	and	r1, r1, #255	; 0xff
        2850b0:	e59c2010 	ldr	r2, [ip, #16]	; fField16
        2850b4:	e2822001 	add	r2, r2, #1	; 0x1
        2850b8:	e58c2010 	str	r2, [ip, #16]	; fField16
        2850bc:	e08c1101 	add	r1, ip, r1, lsl #2
        2850c0:	e5812014 	str	r2, [r1, #20]
        2850c4:	e5911054 	ldr	r1, [r1, #84]
        2850c8:	ea000028 	b	285170 <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x1e8>
        2850cc:	e3350040 	teq	r5, #64	; 0x40
        2850d0:	1a000028 	bne	285178 <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x1f0>
        2850d4:	e5915000 	ldr	r5, [r1]
        2850d8:	e5d55000 	ldrb	r5, [r5]
        2850dc:	e5cd5000 	strb	r5, [sp]
        2850e0:	e5915000 	ldr	r5, [r1]
        2850e4:	e5d55001 	ldrb	r5, [r5, #1]	; fField1
        2850e8:	e5cd5001 	strb	r5, [sp, #1]	; fField1
        2850ec:	e5915000 	ldr	r5, [r1]
        2850f0:	e5d55002 	ldrb	r5, [r5, #2]
        2850f4:	e5cd5002 	strb	r5, [sp, #2]
        2850f8:	e5925000 	ldr	r5, [r2]
        2850fc:	e2656007 	rsb	r6, r5, #7	; 0x7
        285100:	e2866005 	add	r6, r6, #5	; 0x5
        285104:	e59d7000 	ldr	r7, [sp]
        285108:	e1a06637 	mov	r6, r7, lsr r6
        28510c:	e1a06906 	mov	r6, r6, lsl #18
        285110:	e1a06926 	mov	r6, r6, lsr #18
        285114:	e3c66007 	bic	r6, r6, #7	; 0x7
        285118:	e2955011 	adds	r5, r5, #17	; 0x11
        28511c:	42655000 	rsbmi	r5, r5, #0	; 0x0
        285120:	e2055007 	and	r5, r5, #7	; 0x7
        285124:	42655000 	rsbmi	r5, r5, #0	; 0x0
        285128:	e5825000 	str	r5, [r2]
        28512c:	e3350000 	teq	r5, #0	; 0x0
        285130:	e5912000 	ldr	r2, [r1]
        285134:	12822002 	addne	r2, r2, #2	; 0x2
        285138:	02822003 	addeq	r2, r2, #3	; 0x3
        28513c:	e5812000 	str	r2, [r1]
        285140:	e0041143 	and	r1, r4, r3, asr #2
        285144:	e20120ff 	and	r2, r1, #255	; 0xff
        285148:	e59c1010 	ldr	r1, [ip, #16]	; fField16
        28514c:	e2811001 	add	r1, r1, #1	; 0x1
        285150:	e58c1010 	str	r1, [ip, #16]	; fField16
        285154:	e08c2102 	add	r2, ip, r2, lsl #2
        285158:	e5821014 	str	r1, [r2, #20]
        28515c:	e5921054 	ldr	r1, [r2, #84]
        285160:	e3c11b0f 	bic	r1, r1, #15360	; 0x3c00
        285164:	e3c11ffe 	bic	r1, r1, #1016	; 0x3f8
        285168:	e1811006 	orr	r1, r1, r6
        28516c:	e5a21054 	str	r1, [r2, #84]!
        285170:	e58e1000 	str	r1, [lr]
        285174:	ea00005c 	b	2852ec <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x364>
        285178:	e33500c0 	teq	r5, #192	; 0xc0
        28517c:	1a00005a 	bne	2852ec <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x364>
        285180:	e24dd008 	sub	sp, sp, #8	; 0x8
        285184:	e5923000 	ldr	r3, [r2]
        285188:	e2833002 	add	r3, r3, #2	; 0x2
        28518c:	e5914000 	ldr	r4, [r1]
        285190:	e5d44000 	ldrb	r4, [r4]
        285194:	e5cd4008 	strb	r4, [sp, #8]
        285198:	e5914000 	ldr	r4, [r1]
        28519c:	e5d44001 	ldrb	r4, [r4, #1]	; fField1
        2851a0:	e5cd4009 	strb	r4, [sp, #9]
        2851a4:	e5914000 	ldr	r4, [r1]
        2851a8:	e5d44002 	ldrb	r4, [r4, #2]
        2851ac:	e5cd400a 	strb	r4, [sp, #10]
        2851b0:	e5914000 	ldr	r4, [r1]
        2851b4:	e5d44003 	ldrb	r4, [r4, #3]
        2851b8:	e5cd400b 	strb	r4, [sp, #11]
        2851bc:	e59d4008 	ldr	r4, [sp, #8]
        2851c0:	e1a04314 	mov	r4, r4, lsl r3
        2851c4:	e58d4008 	str	r4, [sp, #8]
        2851c8:	e5924000 	ldr	r4, [r2]
        2851cc:	e3340007 	teq	r4, #7	; 0x7
        2851d0:	1a000010 	bne	285218 <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x290>
        2851d4:	e5913000 	ldr	r3, [r1]
        2851d8:	e5d33002 	ldrb	r3, [r3, #2]
        2851dc:	e5cd3000 	strb	r3, [sp]
        2851e0:	e5913000 	ldr	r3, [r1]
        2851e4:	e5d33003 	ldrb	r3, [r3, #3]
        2851e8:	e5cd3001 	strb	r3, [sp, #1]	; fField1
        2851ec:	e5913000 	ldr	r3, [r1]
        2851f0:	e5d33004 	ldrb	r3, [r3, #4]
        2851f4:	e5cd3002 	strb	r3, [sp, #2]
        2851f8:	e5913000 	ldr	r3, [r1]
        2851fc:	e5d33005 	ldrb	r3, [r3, #5]
        285200:	e5cd3003 	strb	r3, [sp, #3]
        285204:	e59d3000 	ldr	r3, [sp]
        285208:	e1a033a3 	mov	r3, r3, lsr #7
        28520c:	e58d3000 	str	r3, [sp]
        285210:	e5820000 	str	r0, [r2]
        285214:	ea000019 	b	285280 <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x2f8>
        285218:	e5914000 	ldr	r4, [r1]
        28521c:	e5d44001 	ldrb	r4, [r4, #1]	; fField1
        285220:	e5cd4000 	strb	r4, [sp]
        285224:	e5914000 	ldr	r4, [r1]
        285228:	e5d44002 	ldrb	r4, [r4, #2]
        28522c:	e5cd4001 	strb	r4, [sp, #1]	; fField1
        285230:	e5914000 	ldr	r4, [r1]
        285234:	e5d44003 	ldrb	r4, [r4, #3]
        285238:	e5cd4002 	strb	r4, [sp, #2]
        28523c:	e5914000 	ldr	r4, [r1]
        285240:	e5d44004 	ldrb	r4, [r4, #4]
        285244:	e5cd4003 	strb	r4, [sp, #3]
        285248:	e2633008 	rsb	r3, r3, #8	; 0x8
        28524c:	e59d4000 	ldr	r4, [sp]
        285250:	e1a03334 	mov	r3, r4, lsr r3
        285254:	e58d3000 	str	r3, [sp]
        285258:	e5923000 	ldr	r3, [r2]
        28525c:	e2933002 	adds	r3, r3, #2	; 0x2
        285260:	42633000 	rsbmi	r3, r3, #0	; 0x0
        285264:	e2033007 	and	r3, r3, #7	; 0x7
        285268:	42633000 	rsbmi	r3, r3, #0	; 0x0
        28526c:	e5823000 	str	r3, [r2]
        285270:	e3330000 	teq	r3, #0	; 0x0
        285274:	15912000 	ldrne	r2, [r1]
        285278:	12822004 	addne	r2, r2, #4	; 0x4
        28527c:	1a000001 	bne	285288 <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x300>
        285280:	e5912000 	ldr	r2, [r1]
        285284:	e2822005 	add	r2, r2, #5	; 0x5
        285288:	e5812000 	str	r2, [r1]
        28528c:	e5dd1002 	ldrb	r1, [sp, #2]
        285290:	e5cd100a 	strb	r1, [sp, #10]
        285294:	e5dd1003 	ldrb	r1, [sp, #3]
        285298:	e5cd100b 	strb	r1, [sp, #11]
        28529c:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        2852a0:	e59d2008 	ldr	r2, [sp, #8]
        2852a4:	e59c1010 	ldr	r1, [ip, #16]	; fField16
        2852a8:	e2811001 	add	r1, r1, #1	; 0x1
        2852ac:	e58c1010 	str	r1, [ip, #16]	; fField16
        2852b0:	e3a01000 	mov	r1, #0	; 0x0
        2852b4:	e08c4101 	add	r4, ip, r1, lsl #2
        2852b8:	e5944014 	ldr	r4, [r4, #20]
        2852bc:	e1540003 	cmp	r4, r3
        2852c0:	b1a05001 	movlt	r5, r1
        2852c4:	b1a03004 	movlt	r3, r4
        2852c8:	e2811001 	add	r1, r1, #1	; 0x1
        2852cc:	e3510010 	cmp	r1, #16	; 0x10
        2852d0:	bafffff7 	blt	2852b4 <TZippyDecompressor::ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)+0x32c>
        2852d4:	e08c1105 	add	r1, ip, r5, lsl #2
        2852d8:	e5812054 	str	r2, [r1, #84]
        2852dc:	e5bc3010 	ldr	r3, [ip, #16]!	; fField16
        2852e0:	e5a13014 	str	r3, [r1, #20]!
        2852e4:	e58e2000 	str	r2, [lr]
        2852e8:	e28dd008 	add	sp, sp, #8	; 0x8
        2852ec:	e28dd008 	add	sp, sp, #8	; 0x8
        2852f0:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: TZippyDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)
 * Address: 002852f4
 */
TZippyDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long) {
    /*
        2852f4:	e1a0c00d 	mov	ip, sp
        2852f8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2852fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        285300:	e1a04000 	mov	r4, r0
        285304:	e1a05001 	mov	r5, r1
        285308:	e1a06003 	mov	r6, r3
        28530c:	e1a0a002 	mov	sl, r2
        285310:	e59b0004 	ldr	r0, [fp, #4]
        285314:	e2801008 	add	r1, r0, #8	; 0x8
        285318:	e52d1004 	str	r1, [sp, -#4]!
        28531c:	e3a09000 	mov	r9, #0	; 0x0
        285320:	e5901004 	ldr	r1, [r0, #4]
        285324:	e3310801 	teq	r1, #65536	; 0x10000
        285328:	1a000026 	bne	2853c8 <TZippyDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0xd4>
        28532c:	e24dd008 	sub	sp, sp, #8	; 0x8
        285330:	e3a01000 	mov	r1, #0	; 0x0
        285334:	e3a07000 	mov	r7, #0	; 0x0
        285338:	e58d1004 	str	r1, [sp, #4]
        28533c:	e5901000 	ldr	r1, [r0]
        285340:	e0800001 	add	r0, r0, r1
        285344:	e2408001 	sub	r8, r0, #1	; 0x1
        285348:	e1a00004 	mov	r0, r4
        28534c:	eb649487 	bl	1baa570 <TZippyDecompressor::$InitCache(void)>
        285350:	e1a0300d 	mov	r3, sp
        285354:	e92d0008 	stmdb	sp!, {r3}
        285358:	e1a03008 	mov	r3, r8
        28535c:	e28d2008 	add	r2, sp, #8	; 0x8
        285360:	e28d100c 	add	r1, sp, #12	; 0xc
        285364:	e1a00004 	mov	r0, r4
        285368:	eb64946c 	bl	1baa520 <TZippyDecompressor::$ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)>
        28536c:	e28dd004 	add	sp, sp, #4	; 0x4
        285370:	e3300000 	teq	r0, #0	; 0x0
        285374:	0a000010 	beq	2853bc <TZippyDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0xc8>
        285378:	e2877004 	add	r7, r7, #4	; 0x4
        28537c:	e1570006 	cmp	r7, r6
        285380:	83a00fa7 	movhi	r0, #668	; 0x29c
        285384:	82400902 	subhi	r0, r0, #32768	; 0x8000
        285388:	8a00000d 	bhi	2853c4 <TZippyDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0xd0>
        28538c:	e59d0000 	ldr	r0, [sp]
        285390:	e1a0300d 	mov	r3, sp
        285394:	e48a0004 	str	r0, [sl], #4
        285398:	e92d0008 	stmdb	sp!, {r3}
        28539c:	e1a03008 	mov	r3, r8
        2853a0:	e28d2008 	add	r2, sp, #8	; 0x8
        2853a4:	e28d100c 	add	r1, sp, #12	; 0xc
        2853a8:	e1a00004 	mov	r0, r4
        2853ac:	eb64945b 	bl	1baa520 <TZippyDecompressor::$ExpandValue(unsigned char **, long *, unsigned char *, unsigned long *)>
        2853b0:	e28dd004 	add	sp, sp, #4	; 0x4
        2853b4:	e3300000 	teq	r0, #0	; 0x0
        2853b8:	1affffee 	bne	285378 <TZippyDecompressor::DecompressChunk(unsigned long *, void *, unsigned long, void *, unsigned long)+0x84>
        2853bc:	e1a00009 	mov	r0, r9
        2853c0:	e5857000 	str	r7, [r5]
        2853c4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2853c8:	e5900000 	ldr	r0, [r0]
        2853cc:	e2403008 	sub	r3, r0, #8	; 0x8
        2853d0:	e1a01002 	mov	r1, r2
        2853d4:	e5853000 	str	r3, [r5]
        2853d8:	e1a02003 	mov	r2, r3
        2853dc:	e59d0000 	ldr	r0, [sp]
        2853e0:	eb64776f 	bl	1ba31a4 <$fast_copy__FPUcT1l>
        2853e4:	e1a00009 	mov	r0, r9
        2853e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__18TZippyDecompressorSFv
 * Address: 00389ac8
 */
void TZippyDecompressor::ClassInfo() {
    /*
        389ac8:	e24f0044 	sub	r0, pc, #68	; 0x44
        389acc:	e1a0f00e 	mov	pc, lr
        389ad0:	e3a00000 	mov	r0, #0	; 0x0
        389ad4:	e1a0f00e 	mov	pc, lr
        389ad8:	545a6970 	ldrplb	r6, [sl], -#2416
        389adc:	70794465 	rsbvcs	r4, r9, r5, ror #8
        389ae0:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        389ae4:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        389ae8:	6f720054 	swivs	0x00720054
        389aec:	4465636f 	strmibt	r6, [r5], -#879
        389af0:	6d707265 	lfmvs	f7, 2, [r0, -#404]!
        389af4:	73736f72 	cmnvc	r3, #456	; 0x1c8
        389b00:	eafffff0 	b	389ac8 <ClassInfo__18TZippyDecompressorSFv>
        389b04:	ea6086a8 	b	1bab5ac <TZippyDecompressor::$New(void)>
        389b08:	ea608281 	b	1baa514 <TZippyDecompressor::$Delete(void)>
        389b0c:	ea60869c 	b	1bab584 <TZippyDecompressor::$Init(void *)>
        389b10:	ea60827a 	b	1baa500 <TZippyDecompressor::$Decompress(unsigned long *, void *, unsigned long, void *, unsigned long)>
        389b14:	00000000 	andeq	r0, r0, r0
        389b18:	00000048 	andeq	r0, r0, r8, asr #32
        389b1c:	00000057 	andeq	r0, r0, r7, asr r0
        389b20:	00000067 	andeq	r0, r0, r7, rrx
        389b24:	00000064 	andeq	r0, r0, r4, rrx
        389b28:	00000080 	andeq	r0, r0, r0, lsl #1
        389b2c:	ea606de3 	b	1ba52c0 <$Sizeof__18TUnicodeCompressorSFv>
        389b38:	ea6069c3 	b	1ba424c <TUnicodeCompressor::$New(void)>
        389b3c:	ea606183 	b	1ba2150 <TUnicodeCompressor::$Delete(void)>
        389b4c:	ea000001 	b	389b58 <ClassInfo__18TUnicodeCompressorSFv+0x8>
    */
}

