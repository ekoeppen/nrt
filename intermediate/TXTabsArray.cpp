#include "include/TXTabsArray.h"

/**
 * Symbol: TXTabsArray::__ct(void)
 * Address: 002300ec
 */
TXTabsArray::TXTabsArray(void) {
    /*
        2300ec:	e1a0c00d 	mov	ip, sp
        2300f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2300f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2300f8:	e1b04000 	movs	r4, r0
        2300fc:	1a000003 	bne	230110 <TXTabsArray::__ct(void)+0x24>
        230100:	e3a00018 	mov	r0, #24	; 0x18
        230104:	eb66798b 	bl	1bce738 <$__nw(unsigned int)>
        230108:	e1b04000 	movs	r4, r0
        23010c:	0a000005 	beq	230128 <TXTabsArray::__ct(void)+0x3c>
        230110:	e1a00004 	mov	r0, r4
        230114:	e3a02000 	mov	r2, #0	; 0x0
        230118:	e3a01008 	mov	r1, #8	; 0x8
        23011c:	eb655469 	bl	1b852c8 <TXArray::$__ct(unsigned char, int)>
        230120:	e59f0008 	ldr	r0, [pc, #8]	; 230130 <TXTabsArray::__ct(void)+0x44>
        230124:	e5840000 	str	r0, [r4]
        230128:	e1a00004 	mov	r0, r4
        23012c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        230130:	0001b820 	andeq	fp, r1, r0, lsr #16
    */
}

/**
 * Symbol: TXTabsArray::__dt(void)
 * Address: 00230134
 */
TXTabsArray::~TXTabsArray(void) {
    /*
        230134:	e1a0c00d 	mov	ip, sp
        230138:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        23013c:	e24cb004 	sub	fp, ip, #4	; 0x4
        230140:	e1a04000 	mov	r4, r0
        230144:	e1a05001 	mov	r5, r1
        230148:	e59f0020 	ldr	r0, [pc, #20]	; 230170 <TXTabsArray::__dt(void)+0x3c>
        23014c:	e5840000 	str	r0, [r4]
        230150:	e1a00004 	mov	r0, r4
        230154:	e3a01000 	mov	r1, #0	; 0x0
        230158:	eb65545b 	bl	1b852cc <TXArray::$__dt(void)>
        23015c:	e3150001 	tst	r5, #1	; 0x1
        230160:	11a00004 	movne	r0, r4
        230164:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        230168:	1a66755c 	bne	1bcd6e0 <$__dl(void *)>
        23016c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        230170:	0001b820 	andeq	fp, r1, r0, lsr #16
    */
}

/**
 * Symbol: TXTabsArray::InsertTab(TXTab)
 * Address: 00230174
 */
TXTabsArray::InsertTab(TXTab) {
    /*
        230174:	e1a0c00d 	mov	ip, sp
        230178:	e92dd807 	stmdb	sp!, {r0, r1, r2, fp, ip, lr, pc}
        23017c:	e24cb004 	sub	fp, ip, #4	; 0x4
        230180:	e24dd004 	sub	sp, sp, #4	; 0x4
        230184:	e1a0200d 	mov	r2, sp
        230188:	e24b1018 	sub	r1, fp, #24	; 0x18
        23018c:	e8910003 	ldmia	r1, {r0, r1}
        230190:	eb655448 	bl	1b852b8 <TXTabsArray::$SearchTab( const(int, long *))>
        230194:	e24b1014 	sub	r1, fp, #20	; 0x14
        230198:	e59d3000 	ldr	r3, [sp]
        23019c:	e3a02001 	mov	r2, #1	; 0x1
        2301a0:	e51b0018 	ldr	r0, [fp, -#24]
        2301a4:	eb65544d 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        2301a8:	e3300000 	teq	r0, #0	; 0x0
        2301ac:	03a000e9 	moveq	r0, #233	; 0xe9
        2301b0:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        2301b4:	13a00000 	movne	r0, #0	; 0x0
        2301b8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXTabsArray::RemoveTab(long)
 * Address: 002301bc
 */
TXTabsArray::RemoveTab(long) {
    /*
        2301bc:	e3a02001 	mov	r2, #1	; 0x1
        2301c0:	e5903000 	ldr	r3, [r0]
        2301c4:	e283f004 	add	pc, r3, #4	; 0x4
    */
}

/**
 * Symbol: TXTabsArray::SearchTab( const(int, long *))
 * Address: 002301c8
 */
TXTabsArray::SearchTab( const(int, long *)) {
    /*
        2301c8:	e1a0c00d 	mov	ip, sp
        2301cc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2301d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2301d4:	e1a06000 	mov	r6, r0
        2301d8:	e1a05001 	mov	r5, r1
        2301dc:	e1a04002 	mov	r4, r2
        2301e0:	e3a07000 	mov	r7, #0	; 0x0
        2301e4:	e5908004 	ldr	r8, [r0, #4]	; fField4
        2301e8:	e3580000 	cmp	r8, #0	; 0x0
        2301ec:	e5827000 	str	r7, [r2]
        2301f0:	da00000d 	ble	23022c <TXTabsArray::SearchTab( const(int, long *))+0x64>
        2301f4:	e1a00006 	mov	r0, r6
        2301f8:	e5941000 	ldr	r1, [r4]
        2301fc:	eb655433 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        230200:	e5900000 	ldr	r0, [r0]
        230204:	e1350000 	teq	r5, r0
        230208:	03a00001 	moveq	r0, #1	; 0x1
        23020c:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        230210:	e1500005 	cmp	r0, r5
        230214:	ca000004 	bgt	23022c <TXTabsArray::SearchTab( const(int, long *))+0x64>
        230218:	e5940000 	ldr	r0, [r4]
        23021c:	e2800001 	add	r0, r0, #1	; 0x1
        230220:	e5840000 	str	r0, [r4]
        230224:	e1500008 	cmp	r0, r8
        230228:	bafffff1 	blt	2301f4 <TXTabsArray::SearchTab( const(int, long *))+0x2c>
        23022c:	e1a00007 	mov	r0, r7
        230230:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXTabsArray::WidthToTab( const(long))
 * Address: 00230288
 */
TXTabsArray::WidthToTab( const(long)) {
    /*
        230288:	e1a0c00d 	mov	ip, sp
        23028c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        230290:	e24cb004 	sub	fp, ip, #4	; 0x4
        230294:	e1a05000 	mov	r5, r0
        230298:	e1a04001 	mov	r4, r1
        23029c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2302a0:	e2820902 	add	r0, r2, #32768	; 0x8000
        2302a4:	e1a00840 	mov	r0, r0, asr #16
        2302a8:	e1a06800 	mov	r6, r0, lsl #16
        2302ac:	e1a06846 	mov	r6, r6, asr #16
        2302b0:	e1a00001 	mov	r0, r1
        2302b4:	e3a01000 	mov	r1, #0	; 0x0
        2302b8:	eb655404 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2302bc:	e1a01000 	mov	r1, r0
        2302c0:	e3a02000 	mov	r2, #0	; 0x0
        2302c4:	e5b43004 	ldr	r3, [r4, #4]!	; fField4
        2302c8:	e3530000 	cmp	r3, #0	; 0x0
        2302cc:	da000013 	ble	230320 <TXTabsArray::WidthToTab( const(long))+0x98>
        2302d0:	e5910000 	ldr	r0, [r1]
        2302d4:	e1560000 	cmp	r6, r0
        2302d8:	aa00000c 	bge	230310 <TXTabsArray::WidthToTab( const(long))+0x88>
        2302dc:	e8911008 	ldmia	r1, {r3, ip}
        2302e0:	e88d1008 	stmia	sp, {r3, ip}
        2302e4:	e58d0000 	str	r0, [sp]
        2302e8:	e1b00005 	movs	r0, r5
        2302ec:	1a000003 	bne	230300 <TXTabsArray::WidthToTab( const(long))+0x78>
        2302f0:	e3a00008 	mov	r0, #8	; 0x8
        2302f4:	eb66790f 	bl	1bce738 <$__nw(unsigned int)>
        2302f8:	e3300000 	teq	r0, #0	; 0x0
        2302fc:	0a000017 	beq	230360 <TXTabsArray::WidthToTab( const(long))+0xd8>
        230300:	e1a0100d 	mov	r1, sp
        230304:	e3a02006 	mov	r2, #6	; 0x6
        230308:	eb6611d0 	bl	1bb4a50 <$memcpy>
        23030c:	ea000013 	b	230360 <TXTabsArray::WidthToTab( const(long))+0xd8>
        230310:	e2822001 	add	r2, r2, #1	; 0x1
        230314:	e2811008 	add	r1, r1, #8	; 0x8
        230318:	e1520003 	cmp	r2, r3
        23031c:	baffffeb 	blt	2302d0 <TXTabsArray::WidthToTab( const(long))+0x48>
        230320:	e1a01006 	mov	r1, r6
        230324:	e59f0038 	ldr	r0, [pc, #38]	; 230364 <TXTabsArray::WidthToTab( const(long))+0xdc>
        230328:	e5900000 	ldr	r0, [r0]
        23032c:	e1a04000 	mov	r4, r0
        230330:	eb660982 	bl	1bb2940 <$__rt_sdiv>
        230334:	e2800001 	add	r0, r0, #1	; 0x1
        230338:	e0000094 	mul	r0, r4, r0
        23033c:	e58d0000 	str	r0, [sp]
        230340:	e3a00000 	mov	r0, #0	; 0x0
        230344:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        230348:	e1b00005 	movs	r0, r5
        23034c:	1affffeb 	bne	230300 <TXTabsArray::WidthToTab( const(long))+0x78>
        230350:	e3a00008 	mov	r0, #8	; 0x8
        230354:	eb6678f7 	bl	1bce738 <$__nw(unsigned int)>
        230358:	e3300000 	teq	r0, #0	; 0x0
        23035c:	1affffe7 	bne	230300 <TXTabsArray::WidthToTab( const(long))+0x78>
        230360:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        230364:	0c104d7c 	ldceq	13, cr4, [r0], -#496
    */
}

/**
 * Symbol: TXTabsArray::IsEqual( const(TXTabsArray const *))
 * Address: 00230368
 */
TXTabsArray::IsEqual( const(TXTabsArray const *)) {
    /*
        230368:	e1a0c00d 	mov	ip, sp
        23036c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        230370:	e24cb004 	sub	fp, ip, #4	; 0x4
        230374:	e1a05000 	mov	r5, r0
        230378:	e1a04001 	mov	r4, r1
        23037c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        230380:	e5911004 	ldr	r1, [r1, #4]	; fField4
        230384:	e3a07000 	mov	r7, #0	; 0x0
        230388:	e1310000 	teq	r1, r0
        23038c:	11a00007 	movne	r0, r7
        230390:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        230394:	e2506001 	subs	r6, r0, #1	; 0x1
        230398:	4a00001e 	bmi	230418 <TXTabsArray::IsEqual( const(TXTabsArray const *))+0xb0>
        23039c:	e24dd020 	sub	sp, sp, #32	; 0x20
        2303a0:	e1a02006 	mov	r2, r6
        2303a4:	e1a01005 	mov	r1, r5
        2303a8:	e1a0000d 	mov	r0, sp
        2303ac:	eb6553c4 	bl	1b852c4 <TXTabsArray::$GetIndTab( const(long))>
        2303b0:	e1a0100d 	mov	r1, sp
        2303b4:	e28d0018 	add	r0, sp, #24	; 0x18
        2303b8:	e3a02006 	mov	r2, #6	; 0x6
        2303bc:	eb6611a3 	bl	1bb4a50 <$memcpy>
        2303c0:	e1a02006 	mov	r2, r6
        2303c4:	e1a01004 	mov	r1, r4
        2303c8:	e28d0008 	add	r0, sp, #8	; 0x8
        2303cc:	eb6553bc 	bl	1b852c4 <TXTabsArray::$GetIndTab( const(long))>
        2303d0:	e28d1008 	add	r1, sp, #8	; 0x8
        2303d4:	e28d0010 	add	r0, sp, #16	; 0x10
        2303d8:	e3a02006 	mov	r2, #6	; 0x6
        2303dc:	eb66119b 	bl	1bb4a50 <$memcpy>
        2303e0:	e59d0010 	ldr	r0, [sp, #16]
        2303e4:	e59d1018 	ldr	r1, [sp, #24]
        2303e8:	e1310000 	teq	r1, r0
        2303ec:	05dd001c 	ldreqb	r0, [sp, #28]
        2303f0:	05dd1014 	ldreqb	r1, [sp, #20]
        2303f4:	01300001 	teqeq	r0, r1
        2303f8:	05dd101d 	ldreqb	r1, [sp, #29]
        2303fc:	05dd0015 	ldreqb	r0, [sp, #21]
        230400:	01310000 	teqeq	r1, r0
        230404:	11a00007 	movne	r0, r7
        230408:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23040c:	e28dd020 	add	sp, sp, #32	; 0x20
        230410:	e2566001 	subs	r6, r6, #1	; 0x1
        230414:	5affffe0 	bpl	23039c <TXTabsArray::IsEqual( const(TXTabsArray const *))+0x34>
        230418:	e3a00001 	mov	r0, #1	; 0x1
        23041c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXTabsArray::GetIndTab( const(long))
 * Address: 00230420
 */
TXTabsArray::GetIndTab( const(long)) {
    /*
        230420:	e1a0c00d 	mov	ip, sp
        230424:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        230428:	e24cb004 	sub	fp, ip, #4	; 0x4
        23042c:	e1a04000 	mov	r4, r0
        230430:	e1a00001 	mov	r0, r1
        230434:	e1a01002 	mov	r1, r2
        230438:	eb6553a4 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        23043c:	e1a05000 	mov	r5, r0
        230440:	e3340000 	teq	r4, #0	; 0x0
        230444:	1a000003 	bne	230458 <TXTabsArray::GetIndTab( const(long))+0x38>
        230448:	e3a00008 	mov	r0, #8	; 0x8
        23044c:	eb6678b9 	bl	1bce738 <$__nw(unsigned int)>
        230450:	e1b04000 	movs	r4, r0
        230454:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        230458:	e1a01005 	mov	r1, r5
        23045c:	e1a00004 	mov	r0, r4
        230460:	e3a02006 	mov	r2, #6	; 0x6
        230464:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        230468:	ea661178 	b	1bb4a50 <$memcpy>
    */
}

