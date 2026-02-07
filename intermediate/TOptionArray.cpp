#include "DDKIncludes/CommAPI/CommManagerInterface.h"

/**
 * Symbol: TOptionArray::__ct(void)
 * Address: 0014b06c
 */
TOptionArray::TOptionArray() {
    /*
        14b06c:	e1a0c00d 	mov	ip, sp
        14b070:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14b074:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b078:	e1b04000 	movs	r4, r0
        14b07c:	1a000003 	bne	14b090 <TOptionArray::__ct(void)+0x24>
        14b080:	e3a00018 	mov	r0, #24	; 0x18
        14b084:	eb6a0dab 	bl	1bce738 <$__nw(unsigned int)>
        14b088:	e1b04000 	movs	r4, r0
        14b08c:	0a00000a 	beq	14b0bc <TOptionArray::__ct(void)+0x50>
        14b090:	e3a05000 	mov	r5, #0	; 0x0
        14b094:	e5c45010 	strb	r5, [r4, #16]	; fPreviousLink
        14b098:	e584500c 	str	r5, [r4, #12]	; TOptionArray
        14b09c:	e5845004 	str	r5, [r4, #4]	; TOptionArray
        14b0a0:	e5845008 	str	r5, [r4, #8]	; TOptionArray
        14b0a4:	e5845000 	str	r5, [r4]
        14b0a8:	e5c45014 	strb	r5, [r4, #20]	; fNextLink
        14b0ac:	e284000c 	add	r0, r4, #12	; 0xc
        14b0b0:	e1a01005 	mov	r1, r5
        14b0b4:	eb6a15e3 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        14b0b8:	e5c45015 	strb	r5, [r4, #21]	; fField21
        14b0bc:	e1a00004 	mov	r0, r4
        14b0c0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::__dt(void)
 * Address: 0014b0c4
 */
TOptionArray::~TOptionArray() {
    /*
        14b0c4:	e1a0c00d 	mov	ip, sp
        14b0c8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14b0cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b0d0:	e1a04000 	mov	r4, r0
        14b0d4:	e1a05001 	mov	r5, r1
        14b0d8:	e5900008 	ldr	r0, [r0, #8]	; TOptionArray
        14b0dc:	e3300000 	teq	r0, #0	; 0x0
        14b0e0:	1b62ec8d 	blne	1a0631c <TOptionIterator::$DeleteArray(void)>
        14b0e4:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b0e8:	e3300000 	teq	r0, #0	; 0x0
        14b0ec:	1b6a57f0 	blne	1be10b4 <$DisposPtr>
        14b0f0:	e284000c 	add	r0, r4, #12	; 0xc
        14b0f4:	e3a01000 	mov	r1, #0	; 0x0
        14b0f8:	eb6a0d89 	bl	1bce724 <TUObject::$__dt(void)>
        14b0fc:	e3150001 	tst	r5, #1	; 0x1
        14b100:	11a00004 	movne	r0, r4
        14b104:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        14b108:	1a6a0974 	bne	1bcd6e0 <$__dl(void *)>
        14b10c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::Init(void)
 * Address: 0014b110
 */
NewtonErr	TOptionArray::Init(TSubArrayOption* array) {
    /*
        14b110:	e1a0c00d 	mov	ip, sp
        14b114:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14b118:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b11c:	e1a04000 	mov	r4, r0
        14b120:	e3a00000 	mov	r0, #0	; 0x0
        14b124:	eb6a5c05 	bl	1be2140 <$NewPtr>
        14b128:	e5a40004 	str	r0, [r4, #4]!	; TOptionArray
        14b12c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        14b130:	ea6a5bfa 	b	1be2120 <$MemError>
    */
}

/**
 * Symbol: TOptionArray::Init(unsigned long)
 * Address: 0014b134
 */
NewtonErr	TOptionArray::Init(TSubArrayOption* array) {
    /*
        14b134:	e1a0c00d 	mov	ip, sp
        14b138:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14b13c:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b140:	e1a04000 	mov	r4, r0
        14b144:	e1a00001 	mov	r0, r1
        14b148:	eb6a5bfc 	bl	1be2140 <$NewPtr>
        14b14c:	e5a40004 	str	r0, [r4, #4]!	; TOptionArray
        14b150:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        14b154:	ea6a5bf1 	b	1be2120 <$MemError>
    */
}

/**
 * Symbol: TOptionArray::Init(unsigned long, unsigned long)
 * Address: 0014b158
 */
NewtonErr	TOptionArray::Init(TSubArrayOption* array) {
    /*
        14b158:	e1a0c00d 	mov	ip, sp
        14b15c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14b160:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b164:	e1a04000 	mov	r4, r0
        14b168:	e1a05001 	mov	r5, r1
        14b16c:	eb69b298 	bl	1bb7bd4 <TOptionArray::$CopyFromShared(unsigned long, unsigned long)>
        14b170:	e1b06000 	movs	r6, r0
        14b174:	1a000004 	bne	14b18c <TOptionArray::Init(unsigned long, unsigned long)+0x34>
        14b178:	e284000c 	add	r0, r4, #12	; 0xc
        14b17c:	e1a01005 	mov	r1, r5
        14b180:	eb6a15b0 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        14b184:	e3a00001 	mov	r0, #1	; 0x1
        14b188:	e5c40015 	strb	r0, [r4, #21]	; fField21
        14b18c:	e1a00006 	mov	r0, r6
        14b190:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::Init(TSubArrayOption *)
 * Address: 0014b194
 */
NewtonErr	TOptionArray::Init(TSubArrayOption* array) {
    /*
        14b194:	e1a0c00d 	mov	ip, sp
        14b198:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14b19c:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b1a0:	e1a05000 	mov	r5, r0
        14b1a4:	e1a04001 	mov	r4, r1
        14b1a8:	e591000c 	ldr	r0, [r1, #12]	; TOptionArray
        14b1ac:	e5850000 	str	r0, [r5]
        14b1b0:	e5910004 	ldr	r0, [r1, #4]	; TOptionArray
        14b1b4:	e2400004 	sub	r0, r0, #4	; 0x4
        14b1b8:	e1a06000 	mov	r6, r0
        14b1bc:	eb6a5bdf 	bl	1be2140 <$NewPtr>
        14b1c0:	e5a50004 	str	r0, [r5, #4]!	; TOptionArray
        14b1c4:	e3300000 	teq	r0, #0	; 0x0
        14b1c8:	0a000005 	beq	14b1e4 <TOptionArray::Init(TSubArrayOption *)+0x50>
        14b1cc:	e2843010 	add	r3, r4, #16	; 0x10
        14b1d0:	e1a01000 	mov	r1, r0
        14b1d4:	e1a02006 	mov	r2, r6
        14b1d8:	e1a00003 	mov	r0, r3
        14b1dc:	eb6a4f5c 	bl	1bdef54 <$BlockMove>
        14b1e0:	e3a07000 	mov	r7, #0	; 0x0
        14b1e4:	e1a00007 	mov	r0, r7
        14b1e8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::Reset(void)
 * Address: 0014b1ec
 */
void		TOptionArray::Reset() {
    /*
        14b1ec:	e1a0c00d 	mov	ip, sp
        14b1f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14b1f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b1f8:	e1a04000 	mov	r4, r0
        14b1fc:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        14b200:	e1a01000 	mov	r1, r0
        14b204:	e1a0000d 	mov	r0, sp
        14b208:	eb69aa3a 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
        14b20c:	e1a0000d 	mov	r0, sp
        14b210:	eb69b681 	bl	1bb8c1c <TOptionIterator::$FirstOption(void)>
        14b214:	e3300000 	teq	r0, #0	; 0x0
        14b218:	0a000004 	beq	14b230 <TOptionArray::Reset(void)+0x44>
        14b21c:	eb69bebe 	bl	1bbad1c <TOption::$Reset(void)>
        14b220:	e1a0000d 	mov	r0, sp
        14b224:	eb69baa8 	bl	1bb9ccc <TOptionIterator::$NextOption(void)>
        14b228:	e3300000 	teq	r0, #0	; 0x0
        14b22c:	1afffffa 	bne	14b21c <TOptionArray::Reset(void)+0x30>
        14b230:	e5d40014 	ldrb	r0, [r4, #20]	; fNextLink
        14b234:	e3300000 	teq	r0, #0	; 0x0
        14b238:	11a00004 	movne	r0, r4
        14b23c:	1b69bec9 	blne	1bbad68 <TOptionArray::$UnShare(void)>
        14b240:	e1a0000d 	mov	r0, sp
        14b244:	e3a01000 	mov	r1, #0	; 0x0
        14b248:	eb69ae3b 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
        14b24c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::CopyOptionAt(long, TOption *)
 * Address: 0014b268
 */
NewtonErr	TOptionArray::CopyOptionAt(ArrayIndex index, TOption* copy) {
    /*
        14b268:	e1a0c00d 	mov	ip, sp
        14b26c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14b270:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b274:	e1a04002 	mov	r4, r2
        14b278:	eb69ba95 	bl	1bb9cd4 <TOptionArray::$OptionAt(long)>
        14b27c:	e3300000 	teq	r0, #0	; 0x0
        14b280:	0a00000a 	beq	14b2b0 <TOptionArray::CopyOptionAt(long, TOption *)+0x48>
        14b284:	e5901004 	ldr	r1, [r0, #4]	; TOptionArray
        14b288:	e5942004 	ldr	r2, [r4, #4]	; TOptionArray
        14b28c:	e1510002 	cmp	r1, r2
        14b290:	c3e05006 	mvngt	r5, #6	; 0x6
        14b294:	ca000000 	bgt	14b29c <TOptionArray::CopyOptionAt(long, TOption *)+0x34>
        14b298:	b5841004 	strlt	r1, [r4, #4]	; TOptionArray
        14b29c:	e5941004 	ldr	r1, [r4, #4]	; TOptionArray
        14b2a0:	e281200c 	add	r2, r1, #12	; 0xc
        14b2a4:	e1a01004 	mov	r1, r4
        14b2a8:	eb6a4f29 	bl	1bdef54 <$BlockMove>
        14b2ac:	ea000000 	b	14b2b4 <TOptionArray::CopyOptionAt(long, TOption *)+0x4c>
        14b2b0:	e3e05005 	mvn	r5, #5	; 0x5
        14b2b4:	e1a00005 	mov	r0, r5
        14b2b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::OptionAt(long)
 * Address: 0014b2bc
 */
TOption*	TOptionArray::OptionAt(ArrayIndex index) {
    /*
        14b2bc:	e5900004 	ldr	r0, [r0, #4]	; TOptionArray
        14b2c0:	e3a02000 	mov	r2, #0	; 0x0
        14b2c4:	e3510000 	cmp	r1, #0	; 0x0
        14b2c8:	d1a0f00e 	movle	pc, lr
        14b2cc:	e5903004 	ldr	r3, [r0, #4]	; TOptionArray
        14b2d0:	e283300f 	add	r3, r3, #15	; 0xf
        14b2d4:	e3c33003 	bic	r3, r3, #3	; 0x3
        14b2d8:	e0800003 	add	r0, r0, r3
        14b2dc:	e2822001 	add	r2, r2, #1	; 0x1
        14b2e0:	e1520001 	cmp	r2, r1
        14b2e4:	bafffff8 	blt	14b2cc <TOptionArray::OptionAt(long)+0x10>
        14b2e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TOptionArray::RemoveOptionAt(long)
 * Address: 0014b2ec
 */
void					TOptionArray::RemoveOptionAt(ArrayIndex theIndex) {
    /*
        14b2ec:	e1a0c00d 	mov	ip, sp
        14b2f0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14b2f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b2f8:	e1a04000 	mov	r4, r0
        14b2fc:	e1a05001 	mov	r5, r1
        14b300:	e5d00014 	ldrb	r0, [r0, #20]	; fNextLink
        14b304:	e3300000 	teq	r0, #0	; 0x0
        14b308:	11a00004 	movne	r0, r4
        14b30c:	1b69be95 	blne	1bbad68 <TOptionArray::$UnShare(void)>
        14b310:	e3a0a000 	mov	sl, #0	; 0x0
        14b314:	e5940000 	ldr	r0, [r4]
        14b318:	e3300000 	teq	r0, #0	; 0x0
        14b31c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        14b320:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b324:	e1a06000 	mov	r6, r0
        14b328:	e3a01000 	mov	r1, #0	; 0x0
        14b32c:	e3550000 	cmp	r5, #0	; 0x0
        14b330:	da000006 	ble	14b350 <TOptionArray::RemoveOptionAt(long)+0x64>
        14b334:	e5962004 	ldr	r2, [r6, #4]	; TOptionArray
        14b338:	e282200f 	add	r2, r2, #15	; 0xf
        14b33c:	e3c22003 	bic	r2, r2, #3	; 0x3
        14b340:	e0866002 	add	r6, r6, r2
        14b344:	e2811001 	add	r1, r1, #1	; 0x1
        14b348:	e1510005 	cmp	r1, r5
        14b34c:	bafffff8 	blt	14b334 <TOptionArray::RemoveOptionAt(long)+0x48>
        14b350:	e5961004 	ldr	r1, [r6, #4]	; TOptionArray
        14b354:	e281100f 	add	r1, r1, #15	; 0xf
        14b358:	e3c18003 	bic	r8, r1, #3	; 0x3
        14b35c:	e0867008 	add	r7, r6, r8
        14b360:	eb6a5764 	bl	1be10f8 <$GetPtrSize>
        14b364:	e1a09000 	mov	r9, r0
        14b368:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b36c:	e0800009 	add	r0, r0, r9
        14b370:	e1570000 	cmp	r7, r0
        14b374:	2a000003 	bcs	14b388 <TOptionArray::RemoveOptionAt(long)+0x9c>
        14b378:	e0402007 	sub	r2, r0, r7
        14b37c:	e1a01006 	mov	r1, r6
        14b380:	e1a00007 	mov	r0, r7
        14b384:	eb6a4ef2 	bl	1bdef54 <$BlockMove>
        14b388:	e0491008 	sub	r1, r9, r8
        14b38c:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b390:	eb6a5b72 	bl	1be2160 <$ReallocPtr>
        14b394:	e3300000 	teq	r0, #0	; 0x0
        14b398:	1a000002 	bne	14b3a8 <TOptionArray::RemoveOptionAt(long)+0xbc>
        14b39c:	eb6a5b5f 	bl	1be2120 <$MemError>
        14b3a0:	e1a0a000 	mov	sl, r0
        14b3a4:	ea000007 	b	14b3c8 <TOptionArray::RemoveOptionAt(long)+0xdc>
        14b3a8:	e5840004 	str	r0, [r4, #4]	; TOptionArray
        14b3ac:	e5940000 	ldr	r0, [r4]
        14b3b0:	e2400001 	sub	r0, r0, #1	; 0x1
        14b3b4:	e5840000 	str	r0, [r4]
        14b3b8:	e5b40008 	ldr	r0, [r4, #8]!	; TOptionArray
        14b3bc:	e3300000 	teq	r0, #0	; 0x0
        14b3c0:	11a01005 	movne	r1, r5
        14b3c4:	1b69be51 	blne	1bbad10 <TOptionIterator::$RemoveOptionAt(long)>
        14b3c8:	e1a0000a 	mov	r0, sl
        14b3cc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::InsertOptionAt(long, TOption *)
 * Address: 0014b3d0
 */
{ return TOptionArray::InsertOptionAt(fCount, opt); } {
    /*
        14b3d0:	e1a0c00d 	mov	ip, sp
        14b3d4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14b3d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b3dc:	e1a04000 	mov	r4, r0
        14b3e0:	e1a05001 	mov	r5, r1
        14b3e4:	e1a06002 	mov	r6, r2
        14b3e8:	e5d00014 	ldrb	r0, [r0, #20]	; fNextLink
        14b3ec:	e3300000 	teq	r0, #0	; 0x0
        14b3f0:	11a00004 	movne	r0, r4
        14b3f4:	1b69be5b 	blne	1bbad68 <TOptionArray::$UnShare(void)>
        14b3f8:	e3a0a000 	mov	sl, #0	; 0x0
        14b3fc:	e5940000 	ldr	r0, [r4]
        14b400:	e1550000 	cmp	r5, r0
        14b404:	c1a05000 	movgt	r5, r0
        14b408:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b40c:	eb6a5739 	bl	1be10f8 <$GetPtrSize>
        14b410:	e1a09000 	mov	r9, r0
        14b414:	e5960004 	ldr	r0, [r6, #4]	; TOptionArray
        14b418:	e280000f 	add	r0, r0, #15	; 0xf
        14b41c:	e3c08003 	bic	r8, r0, #3	; 0x3
        14b420:	e0891008 	add	r1, r9, r8
        14b424:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b428:	eb6a5b4c 	bl	1be2160 <$ReallocPtr>
        14b42c:	e3300000 	teq	r0, #0	; 0x0
        14b430:	1a000002 	bne	14b440 <TOptionArray::InsertOptionAt(long, TOption *)+0x70>
        14b434:	eb6a5b39 	bl	1be2120 <$MemError>
        14b438:	e1a0a000 	mov	sl, r0
        14b43c:	ea000020 	b	14b4c4 <TOptionArray::InsertOptionAt(long, TOption *)+0xf4>
        14b440:	e5840004 	str	r0, [r4, #4]	; TOptionArray
        14b444:	e5941000 	ldr	r1, [r4]
        14b448:	e1550001 	cmp	r5, r1
        14b44c:	aa000010 	bge	14b494 <TOptionArray::InsertOptionAt(long, TOption *)+0xc4>
        14b450:	e1a07000 	mov	r7, r0
        14b454:	e3a01000 	mov	r1, #0	; 0x0
        14b458:	e3550000 	cmp	r5, #0	; 0x0
        14b45c:	da000006 	ble	14b47c <TOptionArray::InsertOptionAt(long, TOption *)+0xac>
        14b460:	e5972004 	ldr	r2, [r7, #4]	; TOptionArray
        14b464:	e282200f 	add	r2, r2, #15	; 0xf
        14b468:	e3c22003 	bic	r2, r2, #3	; 0x3
        14b46c:	e0877002 	add	r7, r7, r2
        14b470:	e2811001 	add	r1, r1, #1	; 0x1
        14b474:	e1510005 	cmp	r1, r5
        14b478:	bafffff8 	blt	14b460 <TOptionArray::InsertOptionAt(long, TOption *)+0x90>
        14b47c:	e0871008 	add	r1, r7, r8
        14b480:	e0800009 	add	r0, r0, r9
        14b484:	e0402007 	sub	r2, r0, r7
        14b488:	e1a00007 	mov	r0, r7
        14b48c:	eb6a4eb0 	bl	1bdef54 <$BlockMove>
        14b490:	ea000000 	b	14b498 <TOptionArray::InsertOptionAt(long, TOption *)+0xc8>
        14b494:	e0807009 	add	r7, r0, r9
        14b498:	e1a02008 	mov	r2, r8
        14b49c:	e1a01007 	mov	r1, r7
        14b4a0:	e1a00006 	mov	r0, r6
        14b4a4:	eb6a4eaa 	bl	1bdef54 <$BlockMove>
        14b4a8:	e5940000 	ldr	r0, [r4]
        14b4ac:	e2800001 	add	r0, r0, #1	; 0x1
        14b4b0:	e5840000 	str	r0, [r4]
        14b4b4:	e5b40008 	ldr	r0, [r4, #8]!	; TOptionArray
        14b4b8:	e3300000 	teq	r0, #0	; 0x0
        14b4bc:	11a01005 	movne	r1, r5
        14b4c0:	1b62eba3 	blne	1a06354 <TOptionIterator::$InsertOptionAt(long)>
        14b4c4:	e1a0000a 	mov	r0, sl
        14b4c8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::Merge(TOptionArray *)
 * Address: 0014b4cc
 */
NewtonErr	TOptionArray::Merge(TOptionArray* optionArray) {
    /*
        14b4cc:	e1a0c00d 	mov	ip, sp
        14b4d0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        14b4d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b4d8:	e1a04000 	mov	r4, r0
        14b4dc:	e1a05001 	mov	r5, r1
        14b4e0:	e5d00014 	ldrb	r0, [r0, #20]	; fNextLink
        14b4e4:	e3300000 	teq	r0, #0	; 0x0
        14b4e8:	11a00004 	movne	r0, r4
        14b4ec:	1b69be1d 	blne	1bbad68 <TOptionArray::$UnShare(void)>
        14b4f0:	e3a08000 	mov	r8, #0	; 0x0
        14b4f4:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b4f8:	eb6a56fe 	bl	1be10f8 <$GetPtrSize>
        14b4fc:	e1a06000 	mov	r6, r0
        14b500:	e5950004 	ldr	r0, [r5, #4]	; TOptionArray
        14b504:	eb6a56fb 	bl	1be10f8 <$GetPtrSize>
        14b508:	e1a07000 	mov	r7, r0
        14b50c:	e0861000 	add	r1, r6, r0
        14b510:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b514:	eb6a5b11 	bl	1be2160 <$ReallocPtr>
        14b518:	e3300000 	teq	r0, #0	; 0x0
        14b51c:	1a000002 	bne	14b52c <TOptionArray::Merge(TOptionArray *)+0x60>
        14b520:	eb6a5afe 	bl	1be2120 <$MemError>
        14b524:	e1a08000 	mov	r8, r0
        14b528:	ea000008 	b	14b550 <TOptionArray::Merge(TOptionArray *)+0x84>
        14b52c:	e5840004 	str	r0, [r4, #4]	; TOptionArray
        14b530:	e0801006 	add	r1, r0, r6
        14b534:	e1a02007 	mov	r2, r7
        14b538:	e5950004 	ldr	r0, [r5, #4]	; TOptionArray
        14b53c:	eb6a4e84 	bl	1bdef54 <$BlockMove>
        14b540:	e5940000 	ldr	r0, [r4]
        14b544:	e5951000 	ldr	r1, [r5]
        14b548:	e0800001 	add	r0, r0, r1
        14b54c:	e5840000 	str	r0, [r4]
        14b550:	e1a00008 	mov	r0, r8
        14b554:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::RemoveAllOptions(void)
 * Address: 0014b558
 */
NewtonErr	TOptionArray::RemoveAllOptions(void) {
    /*
        14b558:	e1a0c00d 	mov	ip, sp
        14b55c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14b560:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b564:	e1a04000 	mov	r4, r0
        14b568:	e3a05000 	mov	r5, #0	; 0x0
        14b56c:	e5d00014 	ldrb	r0, [r0, #20]	; fNextLink
        14b570:	e3300000 	teq	r0, #0	; 0x0
        14b574:	0a000003 	beq	14b588 <TOptionArray::RemoveAllOptions(void)+0x30>
        14b578:	e1a00004 	mov	r0, r4
        14b57c:	eb69bdf9 	bl	1bbad68 <TOptionArray::$UnShare(void)>
        14b580:	e1b05000 	movs	r5, r0
        14b584:	1a00000a 	bne	14b5b4 <TOptionArray::RemoveAllOptions(void)+0x5c>
        14b588:	e3a01000 	mov	r1, #0	; 0x0
        14b58c:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b590:	eb6a5af2 	bl	1be2160 <$ReallocPtr>
        14b594:	e3300000 	teq	r0, #0	; 0x0
        14b598:	1a000002 	bne	14b5a8 <TOptionArray::RemoveAllOptions(void)+0x50>
        14b59c:	eb6a5adf 	bl	1be2120 <$MemError>
        14b5a0:	e1a05000 	mov	r5, r0
        14b5a4:	ea000002 	b	14b5b4 <TOptionArray::RemoveAllOptions(void)+0x5c>
        14b5a8:	e5840004 	str	r0, [r4, #4]	; TOptionArray
        14b5ac:	e3a00000 	mov	r0, #0	; 0x0
        14b5b0:	e5840000 	str	r0, [r4]
        14b5b4:	e1a00005 	mov	r0, r5
        14b5b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::CopyFromShared(unsigned long, unsigned long)
 * Address: 0014b5bc
 */
NewtonErr	TOptionArray::CopyFromShared(TObjectId sharedId, ULong count) {
    /*
        14b5bc:	e1a0c00d 	mov	ip, sp
        14b5c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14b5c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b5c8:	e1a04000 	mov	r4, r0
        14b5cc:	e5802000 	str	r2, [r0]
        14b5d0:	e24dd010 	sub	sp, sp, #16	; 0x10
        14b5d4:	e3a00000 	mov	r0, #0	; 0x0
        14b5d8:	e5cd000c 	strb	r0, [sp, #12]	; TOptionArray
        14b5dc:	e58d1008 	str	r1, [sp, #8]	; TOptionArray
        14b5e0:	e28d1004 	add	r1, sp, #4	; 0x4
        14b5e4:	e28d0008 	add	r0, sp, #8	; 0x8
        14b5e8:	e3a02000 	mov	r2, #0	; 0x0
        14b5ec:	eb6a2511 	bl	1bd4a38 <TUSharedMem::$GetSize(unsigned long *, void **)>
        14b5f0:	e1b05000 	movs	r5, r0
        14b5f4:	0a000004 	beq	14b60c <TOptionArray::CopyFromShared(unsigned long, unsigned long)+0x50>
        14b5f8:	e28d0008 	add	r0, sp, #8	; 0x8
        14b5fc:	e3a01000 	mov	r1, #0	; 0x0
        14b600:	eb6a0c47 	bl	1bce724 <TUObject::$__dt(void)>
        14b604:	e1a00005 	mov	r0, r5
        14b608:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        14b60c:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b610:	e59d1004 	ldr	r1, [sp, #4]	; TOptionArray
        14b614:	eb6a5ad1 	bl	1be2160 <$ReallocPtr>
        14b618:	e3300000 	teq	r0, #0	; 0x0
        14b61c:	1a000001 	bne	14b628 <TOptionArray::CopyFromShared(unsigned long, unsigned long)+0x6c>
        14b620:	eb6a5abe 	bl	1be2120 <$MemError>
        14b624:	ea000009 	b	14b650 <TOptionArray::CopyFromShared(unsigned long, unsigned long)+0x94>
        14b628:	e3a03000 	mov	r3, #0	; 0x0
        14b62c:	e3a02000 	mov	r2, #0	; 0x0
        14b630:	e5a40004 	str	r0, [r4, #4]!	; TOptionArray
        14b634:	e92d000c 	stmdb	sp!, {r2, r3}
        14b638:	e1a02000 	mov	r2, r0
        14b63c:	e59d300c 	ldr	r3, [sp, #12]	; TOptionArray
        14b640:	e28d1008 	add	r1, sp, #8	; 0x8
        14b644:	e28d0010 	add	r0, sp, #16	; 0x10
        14b648:	eb6a147b 	bl	1bd083c <TUSharedMem::$CopyFromShared(unsigned long *, void *, unsigned long, unsigned long, TUMsgToken *)>
        14b64c:	e28dd008 	add	sp, sp, #8	; 0x8
        14b650:	e1a05000 	mov	r5, r0
        14b654:	eaffffe7 	b	14b5f8 <TOptionArray::CopyFromShared(unsigned long, unsigned long)+0x3c>
    */
}

/**
 * Symbol: TOptionArray::CopyToShared(unsigned long)
 * Address: 0014b658
 */
NewtonErr	TOptionArray::CopyToShared(TObjectId sharedId) {
    /*
        14b658:	e1a0c00d 	mov	ip, sp
        14b65c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        14b660:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b664:	e1a04000 	mov	r4, r0
        14b668:	e24dd008 	sub	sp, sp, #8	; 0x8
        14b66c:	e3a00000 	mov	r0, #0	; 0x0
        14b670:	e5cd0004 	strb	r0, [sp, #4]	; TOptionArray
        14b674:	e58d1000 	str	r1, [sp]
        14b678:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b67c:	eb6a569d 	bl	1be10f8 <$GetPtrSize>
        14b680:	e1a02000 	mov	r2, r0
        14b684:	e3a03000 	mov	r3, #0	; 0x0
        14b688:	e92d0008 	stmdb	sp!, {r3}
        14b68c:	e28d0004 	add	r0, sp, #4	; 0x4
        14b690:	e5b41004 	ldr	r1, [r4, #4]!	; TOptionArray
        14b694:	eb6a1471 	bl	1bd0860 <TUSharedMem::$CopyToShared(void *, unsigned long, unsigned long, TUMsgToken *)>
        14b698:	e28dd004 	add	sp, sp, #4	; 0x4
        14b69c:	e1a04000 	mov	r4, r0
        14b6a0:	e1a0000d 	mov	r0, sp
        14b6a4:	e3a01000 	mov	r1, #0	; 0x0
        14b6a8:	eb6a0c1d 	bl	1bce724 <TUObject::$__dt(void)>
        14b6ac:	e1a00004 	mov	r0, r4
        14b6b0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::MakeShared(unsigned long)
 * Address: 0014b6b4
 */
NewtonErr	TOptionArray::MakeShared(ULong permissions = kSMemReadOnly) {
    /*
        14b6b4:	e1a0c00d 	mov	ip, sp
        14b6b8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        14b6bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b6c0:	e1a04000 	mov	r4, r0
        14b6c4:	e1a05001 	mov	r5, r1
        14b6c8:	e3a00000 	mov	r0, #0	; 0x0
        14b6cc:	e5d41014 	ldrb	r1, [r4, #20]	; fNextLink
        14b6d0:	e3310000 	teq	r1, #0	; 0x0
        14b6d4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        14b6d8:	e284000c 	add	r0, r4, #12	; 0xc
        14b6dc:	e1a06000 	mov	r6, r0
        14b6e0:	eb6a24e5 	bl	1bd4a7c <TUSharedMem::$Init(void)>
        14b6e4:	e3300000 	teq	r0, #0	; 0x0
        14b6e8:	1a000006 	bne	14b708 <TOptionArray::MakeShared(unsigned long)+0x54>
        14b6ec:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b6f0:	eb6a5680 	bl	1be10f8 <$GetPtrSize>
        14b6f4:	e1a02000 	mov	r2, r0
        14b6f8:	e1a00006 	mov	r0, r6
        14b6fc:	e1a03005 	mov	r3, r5
        14b700:	e5941004 	ldr	r1, [r4, #4]	; TOptionArray
        14b704:	eb6a3d98 	bl	1bdad6c <TUSharedMem::$SetBuffer(void *, unsigned long, unsigned long)>
        14b708:	e3300000 	teq	r0, #0	; 0x0
        14b70c:	03a01001 	moveq	r1, #1	; 0x1
        14b710:	05c41014 	streqb	r1, [r4, #20]	; fNextLink
        14b714:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::InsertVarOptionAt(long, TOption *, void *, unsigned long)
 * Address: 0014b718
 */
{ return TOptionArray::InsertVarOptionAt(fCount, opt, varData, varLen); } {
    /*
        14b718:	e1a0c00d 	mov	ip, sp
        14b71c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        14b720:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        14b724:	e24cb014 	sub	fp, ip, #20	; 0x14
        14b728:	e1a04000 	mov	r4, r0
        14b72c:	e1a05001 	mov	r5, r1
        14b730:	e1a06002 	mov	r6, r2
        14b734:	e59ba014 	ldr	sl, [fp, #20]	; fNextLink
        14b738:	e5d00014 	ldrb	r0, [r0, #20]	; fNextLink
        14b73c:	e3300000 	teq	r0, #0	; 0x0
        14b740:	11a00004 	movne	r0, r4
        14b744:	1b69bd87 	blne	1bbad68 <TOptionArray::$UnShare(void)>
        14b748:	e3a09000 	mov	r9, #0	; 0x0
        14b74c:	e5940000 	ldr	r0, [r4]
        14b750:	e1550000 	cmp	r5, r0
        14b754:	c1a05000 	movgt	r5, r0
        14b758:	e24dd004 	sub	sp, sp, #4	; 0x4
        14b75c:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b760:	eb6a5664 	bl	1be10f8 <$GetPtrSize>
        14b764:	e1a08000 	mov	r8, r0
        14b768:	e5960004 	ldr	r0, [r6, #4]	; TOptionArray
        14b76c:	e280000f 	add	r0, r0, #15	; 0xf
        14b770:	e3c01003 	bic	r1, r0, #3	; 0x3
        14b774:	e58d1000 	str	r1, [sp]
        14b778:	e0881001 	add	r1, r8, r1
        14b77c:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b780:	eb6a5a76 	bl	1be2160 <$ReallocPtr>
        14b784:	e3300000 	teq	r0, #0	; 0x0
        14b788:	1a000002 	bne	14b798 <TOptionArray::InsertVarOptionAt(long, TOption *, void *, unsigned long)+0x80>
        14b78c:	eb6a5a63 	bl	1be2120 <$MemError>
        14b790:	e1a09000 	mov	r9, r0
        14b794:	ea000028 	b	14b83c <TOptionArray::InsertVarOptionAt(long, TOption *, void *, unsigned long)+0x124>
        14b798:	e5840004 	str	r0, [r4, #4]	; TOptionArray
        14b79c:	e5941000 	ldr	r1, [r4]
        14b7a0:	e1550001 	cmp	r5, r1
        14b7a4:	aa000011 	bge	14b7f0 <TOptionArray::InsertVarOptionAt(long, TOption *, void *, unsigned long)+0xd8>
        14b7a8:	e1a07000 	mov	r7, r0
        14b7ac:	e3a01000 	mov	r1, #0	; 0x0
        14b7b0:	e3550000 	cmp	r5, #0	; 0x0
        14b7b4:	da000006 	ble	14b7d4 <TOptionArray::InsertVarOptionAt(long, TOption *, void *, unsigned long)+0xbc>
        14b7b8:	e5972004 	ldr	r2, [r7, #4]	; TOptionArray
        14b7bc:	e282200f 	add	r2, r2, #15	; 0xf
        14b7c0:	e3c22003 	bic	r2, r2, #3	; 0x3
        14b7c4:	e0877002 	add	r7, r7, r2
        14b7c8:	e2811001 	add	r1, r1, #1	; 0x1
        14b7cc:	e1510005 	cmp	r1, r5
        14b7d0:	bafffff8 	blt	14b7b8 <TOptionArray::InsertVarOptionAt(long, TOption *, void *, unsigned long)+0xa0>
        14b7d4:	e59d1000 	ldr	r1, [sp]
        14b7d8:	e0871001 	add	r1, r7, r1
        14b7dc:	e0800008 	add	r0, r0, r8
        14b7e0:	e0402007 	sub	r2, r0, r7
        14b7e4:	e1a00007 	mov	r0, r7
        14b7e8:	eb6a4dd9 	bl	1bdef54 <$BlockMove>
        14b7ec:	ea000000 	b	14b7f4 <TOptionArray::InsertVarOptionAt(long, TOption *, void *, unsigned long)+0xdc>
        14b7f0:	e0807008 	add	r7, r0, r8
        14b7f4:	e5960004 	ldr	r0, [r6, #4]	; TOptionArray
        14b7f8:	e040800a 	sub	r8, r0, sl
        14b7fc:	e288200c 	add	r2, r8, #12	; 0xc
        14b800:	e1a01007 	mov	r1, r7
        14b804:	e1a00006 	mov	r0, r6
        14b808:	eb6a4dd1 	bl	1bdef54 <$BlockMove>
        14b80c:	e0870008 	add	r0, r7, r8
        14b810:	e280100c 	add	r1, r0, #12	; 0xc
        14b814:	e1a0200a 	mov	r2, sl
        14b818:	e59b0010 	ldr	r0, [fp, #16]	; fPreviousLink
        14b81c:	eb6a4dcc 	bl	1bdef54 <$BlockMove>
        14b820:	e5940000 	ldr	r0, [r4]
        14b824:	e2800001 	add	r0, r0, #1	; 0x1
        14b828:	e5840000 	str	r0, [r4]
        14b82c:	e5b40008 	ldr	r0, [r4, #8]!	; TOptionArray
        14b830:	e3300000 	teq	r0, #0	; 0x0
        14b834:	11a01005 	movne	r1, r5
        14b838:	1b62eac5 	blne	1a06354 <TOptionIterator::$InsertOptionAt(long)>
        14b83c:	e1a00009 	mov	r0, r9
        14b840:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::InsertSubArrayAt(long, TOptionArray *)
 * Address: 0014b85c
 */
{ return TOptionArray::InsertSubArrayAt(fCount, subArray); } {
    /*
        14b85c:	e1a0c00d 	mov	ip, sp
        14b860:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        14b864:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b868:	e1a05000 	mov	r5, r0
        14b86c:	e1a06001 	mov	r6, r1
        14b870:	e1a04002 	mov	r4, r2
        14b874:	e5d00014 	ldrb	r0, [r0, #20]	; fNextLink
        14b878:	e3300000 	teq	r0, #0	; 0x0
        14b87c:	11a00005 	movne	r0, r5
        14b880:	1b69bd38 	blne	1bbad68 <TOptionArray::$UnShare(void)>
        14b884:	e24dd010 	sub	sp, sp, #16	; 0x10
        14b888:	e5940004 	ldr	r0, [r4, #4]	; TOptionArray
        14b88c:	eb6a5619 	bl	1be10f8 <$GetPtrSize>
        14b890:	e1a07000 	mov	r7, r0
        14b894:	e1a01000 	mov	r1, r0
        14b898:	e1a0000d 	mov	r0, sp
        14b89c:	e5942000 	ldr	r2, [r4]
        14b8a0:	ebfffddb 	bl	14b014 <TSubArrayOption::__ct(unsigned long, long)>
        14b8a4:	e1a03007 	mov	r3, r7
        14b8a8:	e92d0008 	stmdb	sp!, {r3}
        14b8ac:	e28d2004 	add	r2, sp, #4	; 0x4
        14b8b0:	e1a01006 	mov	r1, r6
        14b8b4:	e1a00005 	mov	r0, r5
        14b8b8:	e5b43004 	ldr	r3, [r4, #4]!	; TOptionArray
        14b8bc:	eb69b8fa 	bl	1bb9cac <TOptionArray::$InsertVarOptionAt(long, TOption *, void *, unsigned long)>
        14b8c0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::ShadowCopyBack(void)
 * Address: 0014b8c4
 */
NewtonErr	TOptionArray::ShadowCopyBack(void) {
    /*
        14b8c4:	e1a0c00d 	mov	ip, sp
        14b8c8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        14b8cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b8d0:	e3a01000 	mov	r1, #0	; 0x0
        14b8d4:	e5d02015 	ldrb	r2, [r0, #21]	; fField21
        14b8d8:	e3320000 	teq	r2, #0	; 0x0
        14b8dc:	0a000002 	beq	14b8ec <TOptionArray::ShadowCopyBack(void)+0x28>
        14b8e0:	e590100c 	ldr	r1, [r0, #12]	; TOptionArray
        14b8e4:	eb69b0bc 	bl	1bb7bdc <TOptionArray::$CopyToShared(unsigned long)>
        14b8e8:	e1a01000 	mov	r1, r0
        14b8ec:	e1a00001 	mov	r0, r1
        14b8f0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TOptionArray::UnShare(void)
 * Address: 0014b8f4
 */
NewtonErr	TOptionArray::UnShare() {
    /*
        14b8f4:	e1a0c00d 	mov	ip, sp
        14b8f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        14b8fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        14b900:	e1a04000 	mov	r4, r0
        14b904:	e3a05000 	mov	r5, #0	; 0x0
        14b908:	e5d00014 	ldrb	r0, [r0, #20]	; fNextLink
        14b90c:	e3300000 	teq	r0, #0	; 0x0
        14b910:	0a000003 	beq	14b924 <TOptionArray::UnShare(void)+0x30>
        14b914:	e284000c 	add	r0, r4, #12	; 0xc
        14b918:	eb6a17e0 	bl	1bd18a0 <TUObject::$DestroyObject(void)>
        14b91c:	e3a00000 	mov	r0, #0	; 0x0
        14b920:	e5c40014 	strb	r0, [r4, #20]	; fNextLink
        14b924:	e1a00005 	mov	r0, r5
        14b928:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

