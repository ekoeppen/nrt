#include "include/Pushpopper.h"

/* VTable Layout:
 * [0] 0x1ba10a0
 * [1] 0x1b5de90
 * [2] 0x1b5dec0
 * [3] 0x1b631a8
 * [4] 0x1b5ce54
 * [5] 0x1b5ffd4
 * [6] 0x1b5ce20
 * [7] 0x1b62130
 * [8] 0x1b631dc
 * [9] 0x1b60034
 * [10] 0x1b5ef40
 * [11] 0x1b5def0
 * [12] 0x1b5bddc
 * [13] 0x1b610b8
 * [14] 0x1b60040
 * [15] 0x1b64260
 * [16] 0x1b64244
 * [17] 0x1b65294
 * [18] 0x1b64278
 * [19] 0x1b6a558
 * [20] 0x1b64240
 * [21] 0x1b66324
 * [22] TClipboard::ClassID( const(void))
 * [23] TClipboard::DerivedFrom( const(long))
 * [24] 0x1ad4a70
 * [25] 0x1a9ad64
 * [26] 0x1a9085c
 * [27] 0x1abef08
 * [28] 0x1ae73a8
 * [29] 0x1a9ef6c
 * [30] 0x1ae73ac
 * [31] 0x1bcb5a0
 * [32] 0x1bcb580
 * [33] 0x1bcb5ec
 * [34] 0x1bc94b8
 * [35] 0x1bcc60c
 * [36] 0x1adce2c
 * [37] 0x1bca574
 * [38] 0x1ae73c0
 * [39] 0x1bca554
 * [40] 0x1bcc614
 * [41] 0x1bc94ac
 * [42] 0x1bc94b0
 * [43] 0x1bc94ec
 * [44] 0x1bca578
 * [45] TView::SetCaretOffset(long *, long *)
 * [46] 0x1ae73b8
 * [47] 0x1ae73b4
 * [48] 0x1ae73bc
 * [49] 0x1ae31cc
 * [50] 0x1bcb59c
 * [51] 0x1bcb5a8
 * [52] 0x1adbdf8
 * [53] 0x1bcb5c4
 * [54] 0x1bca57c
 * [55] 0x1bca510
 * [56] 0x1bca50c
 * [57] 0x1ab39e0
 * [58] 0x1ad189c
 * [59] 0x1ab4a18
 * [60] 0x1aad6d0
 * [61] 0x1adbde8
 * [62] 0x1adbdd8
 * [63] TView::DeleteHilited(RefVar const &)
 * [64] 0x1adce0c
 * [65] 0x1ab8c5c
 * [66] 0x1ab39c8
 * [67] 0x1ab39d0
 * [68] 0x1ab39cc
 * [69] 0x1adce00
 * [70] TView::ClickOptions(void)
 * [71] TView::DrawScaledData(TRect const &, TRect const &, TRect *)
 * [72] 0x1aa8428
 * [73] 0x1ab2900
 * [74] 0x1aad6a4
 * [75] 0x1ace730
 * [76] 0x1abef18
 * [77] 0x1ae31c8
 * [78] 0x1abef2c
 * [79] 0x1aae70c
 * [80] 0x1aad6e4
 * [81] 0x1aad6f8
 * [82] 0x1ace748
 * [83] 0x1acd698
 * [84] 0x1c010f4
 * [85] 0x1bcb5b0
 * [86] 0x1bcb5ac
 * [87] 0x1bcb5bc
 * [88] 0x1adce18
 * [89] 0x1abef1c
 * [90] 0x1aad6b0
 * [91] 0x1ab39a4
 * [92] 0x1ab18a8
 * [93] 0x1b5de94
 * [94] 0x1b5ded8
 * [95] 0x1b631ac
 * [96] 0x1b5ce58
 * [97] 0x1b5ffe4
 * [98] 0x1b5ad5c
 * [99] 0x1b5ad70
 */

/**
 * Symbol: Pushpopper::__ct(void)
 * Address: 0033f0f8
 */
Pushpopper::Pushpopper(void) {
    /*
        33f0f8:	e1a0c00d 	mov	ip, sp
        33f0fc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        33f100:	e24cb004 	sub	fp, ip, #4	; 0x4
        33f104:	e3300000 	teq	r0, #0	; 0x0
        33f108:	1a000003 	bne	33f11c <Pushpopper::__ct(void)+0x24>
        33f10c:	e3a00018 	mov	r0, #24	; 0x18
        33f110:	eb623d88 	bl	1bce738 <$__nw(unsigned int)>
        33f114:	e3300000 	teq	r0, #0	; 0x0
        33f118:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        33f11c:	e59f1004 	ldr	r1, [pc, #4]	; 33f128 <Pushpopper::__ct(void)+0x30>	; fField4
        33f120:	e5801000 	str	r1, [r0]
        33f124:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        33f128:	0001a6bc 	streqh	sl, [r1], -ip
    */
}

/**
 * Symbol: Pushpopper::__dt(void)
 * Address: 0033f12c
 */
Pushpopper::~Pushpopper(void) {
    /*
        33f12c:	e59f200c 	ldr	r2, [pc, #c]	; 33f140 <Pushpopper::__dt(void)+0x14>
        33f130:	e3110001 	tst	r1, #1	; 0x1
        33f134:	e5802000 	str	r2, [r0]
        33f138:	1a623968 	bne	1bcd6e0 <$__dl(void *)>
        33f13c:	e1a0f00e 	mov	pc, lr
        33f140:	0001a6bc 	streqh	sl, [r1], -ip
    */
}

/**
 * Symbol: Pushpopper::setupreadbuffer(unsigned char *, long)
 * Address: 0033f144
 */
Pushpopper::setupreadbuffer(unsigned char *, long) {
    /*
        33f144:	e5801010 	str	r1, [r0, #16]	; fField16
        33f148:	e3a01000 	mov	r1, #0	; 0x0
        33f14c:	e580100c 	str	r1, [r0, #12]	; fField12
        33f150:	e5802008 	str	r2, [r0, #8]	; fField8
        33f154:	e5801004 	str	r1, [r0, #4]	; fField4
        33f158:	e5a01014 	str	r1, [r0, #20]!	; fField20
        33f15c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Pushpopper::setupwritebuffer(unsigned char *, long)
 * Address: 0033f160
 */
Pushpopper::setupwritebuffer(unsigned char *, long) {
    /*
        33f160:	e5801010 	str	r1, [r0, #16]	; fField16
        33f164:	e3a01000 	mov	r1, #0	; 0x0
        33f168:	e580100c 	str	r1, [r0, #12]	; fField12
        33f16c:	e5802008 	str	r2, [r0, #8]	; fField8
        33f170:	e5801004 	str	r1, [r0, #4]	; fField4
        33f174:	e3a01020 	mov	r1, #32	; 0x20
        33f178:	e5a01014 	str	r1, [r0, #20]!	; fField20
        33f17c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Pushpopper::restorebits(long)
 * Address: 0033f180
 */
Pushpopper::restorebits(long) {
    /*
        33f180:	e5902014 	ldr	r2, [r0, #20]	; fField20
        33f184:	e0821001 	add	r1, r2, r1
        33f188:	e5a01014 	str	r1, [r0, #20]!	; fField20
        33f18c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Pushpopper::popbits(long)
 * Address: 0033f190
 */
Pushpopper::popbits(long) {
    /*
        33f190:	e5902014 	ldr	r2, [r0, #20]	; fField20
        33f194:	e3520017 	cmp	r2, #23	; 0x17
        33f198:	aa00000d 	bge	33f1d4 <Pushpopper::popbits(long)+0x44>
        33f19c:	e5903010 	ldr	r3, [r0, #16]	; fField16
        33f1a0:	e4d32001 	ldrb	r2, [r3], #1
        33f1a4:	e5803010 	str	r3, [r0, #16]	; fField16
        33f1a8:	e590300c 	ldr	r3, [r0, #12]	; fField12
        33f1ac:	e1822403 	orr	r2, r2, r3, lsl #8
        33f1b0:	e580200c 	str	r2, [r0, #12]	; fField12
        33f1b4:	e5902004 	ldr	r2, [r0, #4]	; fField4
        33f1b8:	e2822001 	add	r2, r2, #1	; 0x1
        33f1bc:	e5802004 	str	r2, [r0, #4]	; fField4
        33f1c0:	e5902014 	ldr	r2, [r0, #20]	; fField20
        33f1c4:	e2822008 	add	r2, r2, #8	; 0x8
        33f1c8:	e5802014 	str	r2, [r0, #20]	; fField20
        33f1cc:	e3520017 	cmp	r2, #23	; 0x17
        33f1d0:	bafffff1 	blt	33f19c <Pushpopper::popbits(long)+0xc>
        33f1d4:	e5902014 	ldr	r2, [r0, #20]	; fField20
        33f1d8:	e0422001 	sub	r2, r2, r1
        33f1dc:	e5802014 	str	r2, [r0, #20]	; fField20
        33f1e0:	e590000c 	ldr	r0, [r0, #12]	; fField12
        33f1e4:	e1a00230 	mov	r0, r0, lsr r2
        33f1e8:	e2612020 	rsb	r2, r1, #32	; 0x20
        33f1ec:	e3e01000 	mvn	r1, #0	; 0x0
        33f1f0:	e0000231 	and	r0, r0, r1, lsr r2
        33f1f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Pushpopper::popString(unsigned char *, long)
 * Address: 0033f1f8
 */
Pushpopper::popString(unsigned char *, long) {
    /*
        33f1f8:	e92d4010 	stmdb	sp!, {r4, lr}
        33f1fc:	e5903014 	ldr	r3, [r0, #20]	; fField20
        33f200:	e590c00c 	ldr	ip, [r0, #12]	; fField12
        33f204:	ea000002 	b	33f214 <Pushpopper::popString(unsigned char *, long)+0x1c>
        33f208:	e2433008 	sub	r3, r3, #8	; 0x8
        33f20c:	e1a0e33c 	mov	lr, ip, lsr r3
        33f210:	e4c1e001 	strb	lr, [r1], #1
        33f214:	e3530008 	cmp	r3, #8	; 0x8
        33f218:	ba000002 	blt	33f228 <Pushpopper::popString(unsigned char *, long)+0x30>
        33f21c:	e1b0e002 	movs	lr, r2
        33f220:	e2422001 	sub	r2, r2, #1	; 0x1
        33f224:	1afffff7 	bne	33f208 <Pushpopper::popString(unsigned char *, long)+0x10>
        33f228:	e3520000 	cmp	r2, #0	; 0x0
        33f22c:	da00000c 	ble	33f264 <Pushpopper::popString(unsigned char *, long)+0x6c>
        33f230:	e5904004 	ldr	r4, [r0, #4]	; fField4
        33f234:	e0844002 	add	r4, r4, r2
        33f238:	e590e010 	ldr	lr, [r0, #16]	; fField16
        33f23c:	e5804004 	str	r4, [r0, #4]	; fField4
        33f240:	e4de4001 	ldrb	r4, [lr], #1
        33f244:	e184c40c 	orr	ip, r4, ip, lsl #8
        33f248:	e1a0433c 	mov	r4, ip, lsr r3
        33f24c:	e4c14001 	strb	r4, [r1], #1
        33f250:	e2522001 	subs	r2, r2, #1	; 0x1
        33f254:	1afffff9 	bne	33f240 <Pushpopper::popString(unsigned char *, long)+0x48>
        33f258:	e280000c 	add	r0, r0, #12	; 0xc
        33f25c:	e8805000 	stmia	r0, {ip, lr}
        33f260:	e240000c 	sub	r0, r0, #12	; 0xc
        33f264:	e5a03014 	str	r3, [r0, #20]!	; fField20
        33f268:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: Pushpopper::popFewBits(long)
 * Address: 0033f26c
 */
Pushpopper::popFewBits(long) {
    /*
        33f26c:	e92d4000 	stmdb	sp!, {lr}
        33f270:	e5902014 	ldr	r2, [r0, #20]	; fField20
        33f274:	e0522001 	subs	r2, r2, r1
        33f278:	e590300c 	ldr	r3, [r0, #12]	; fField12
        33f27c:	5a000009 	bpl	33f2a8 <Pushpopper::popFewBits(long)+0x3c>
        33f280:	e590c004 	ldr	ip, [r0, #4]	; fField4
        33f284:	e28cc001 	add	ip, ip, #1	; 0x1
        33f288:	e580c004 	str	ip, [r0, #4]	; fField4
        33f28c:	e590e010 	ldr	lr, [r0, #16]	; fField16
        33f290:	e4dec001 	ldrb	ip, [lr], #1
        33f294:	e18c3403 	orr	r3, ip, r3, lsl #8
        33f298:	e2822008 	add	r2, r2, #8	; 0x8
        33f29c:	e280000c 	add	r0, r0, #12	; 0xc
        33f2a0:	e8804008 	stmia	r0, {r3, lr}
        33f2a4:	e240000c 	sub	r0, r0, #12	; 0xc
        33f2a8:	e5a02014 	str	r2, [r0, #20]!	; fField20
        33f2ac:	e1a00233 	mov	r0, r3, lsr r2
        33f2b0:	e2611020 	rsb	r1, r1, #32	; 0x20
        33f2b4:	e3e02000 	mvn	r2, #0	; 0x0
        33f2b8:	e0000132 	and	r0, r0, r2, lsr r1
        33f2bc:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: Pushpopper::pushbits(long, long)
 * Address: 0033f2c0
 */
Pushpopper::pushbits(long, long) {
    /*
        33f2c0:	e1a0c00d 	mov	ip, sp
        33f2c4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        33f2c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        33f2cc:	e1a04000 	mov	r4, r0
        33f2d0:	e1b05001 	movs	r5, r1
        33f2d4:	e1a06002 	mov	r6, r2
        33f2d8:	4a000006 	bmi	33f2f8 <Pushpopper::pushbits(long, long)+0x38>
        33f2dc:	e3550014 	cmp	r5, #20	; 0x14
        33f2e0:	ca000004 	bgt	33f2f8 <Pushpopper::pushbits(long, long)+0x38>
        33f2e4:	e3560000 	cmp	r6, #0	; 0x0
        33f2e8:	ba000002 	blt	33f2f8 <Pushpopper::pushbits(long, long)+0x38>
        33f2ec:	e3a00001 	mov	r0, #1	; 0x1
        33f2f0:	e1560510 	cmp	r6, r0, lsl r5
        33f2f4:	ba000003 	blt	33f308 <Pushpopper::pushbits(long, long)+0x48>
        33f2f8:	e1a02006 	mov	r2, r6
        33f2fc:	e1a01005 	mov	r1, r5
        33f300:	e28f0f20 	add	r0, pc, #128	; 0x80
        33f304:	eb62c95d 	bl	1bf1880 <$printf>
        33f308:	e5940014 	ldr	r0, [r4, #20]	; fField20
        33f30c:	e3500017 	cmp	r0, #23	; 0x17
        33f310:	aa000015 	bge	33f36c <Pushpopper::pushbits(long, long)+0xac>
        33f314:	e594000c 	ldr	r0, [r4, #12]	; fField12
        33f318:	e1a01c20 	mov	r1, r0, lsr #24
        33f31c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        33f320:	e4c01001 	strb	r1, [r0], #1
        33f324:	e5840010 	str	r0, [r4, #16]	; fField16
        33f328:	e594000c 	ldr	r0, [r4, #12]	; fField12
        33f32c:	e1a00400 	mov	r0, r0, lsl #8
        33f330:	e584000c 	str	r0, [r4, #12]	; fField12
        33f334:	e5940004 	ldr	r0, [r4, #4]	; fField4
        33f338:	e2800001 	add	r0, r0, #1	; 0x1
        33f33c:	e5840004 	str	r0, [r4, #4]	; fField4
        33f340:	e1a01000 	mov	r1, r0
        33f344:	e5942014 	ldr	r2, [r4, #20]	; fField20
        33f348:	e2822008 	add	r2, r2, #8	; 0x8
        33f34c:	e5842014 	str	r2, [r4, #20]	; fField20
        33f350:	e5942008 	ldr	r2, [r4, #8]	; fField8
        33f354:	e1500002 	cmp	r0, r2
        33f358:	c28f0f16 	addgt	r0, pc, #88	; 0x58
        33f35c:	cb62c947 	blgt	1bf1880 <$printf>
        33f360:	e5940014 	ldr	r0, [r4, #20]	; fField20
        33f364:	e3500017 	cmp	r0, #23	; 0x17
        33f368:	baffffe9 	blt	33f314 <Pushpopper::pushbits(long, long)+0x54>
        33f36c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        33f370:	e0400005 	sub	r0, r0, r5
        33f374:	e5840014 	str	r0, [r4, #20]	; fField20
        33f378:	e594100c 	ldr	r1, [r4, #12]	; fField12
        33f37c:	e1810016 	orr	r0, r1, r6, lsl r0
        33f380:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        33f384:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        33f388:	4e4f5445 	cdpmi	4, 4, cr5, cr15, cr5, {2}
        33f38c:	3a207075 	bcc	b5b568 <ROM$$Size+0x43b91c>
        33f390:	73686269 	cmnvc	r8, #-1879048186	; 0x90000006
        33f394:	74732825 	ldrvcbt	r2, [r3], -#2085
        33f398:	642c2564 	strvst	r2, [ip], -#1380
        33f39c:	29206172 	stmcsdb	r0!, {r1, r4, r5, r6, r8, sp, lr}
        33f3a0:	67756d65 	ldrvsb	r6, [r5, -r5, ror #26]!
        33f3a4:	6e742069 	cdpvs	0, 7, cr2, cr4, cr9, {3}
        33f3a8:	73206f75 	teqvc	r0, #468	; 0x1d4
        33f3ac:	74206f66 	strvct	r6, [r0], -#3942
        33f3b0:	2072616e 	rsbcss	r6, r2, lr, ror #2
        33f3b4:	67650000 	strvsb	r0, [r5, -r0]!
        33f3b8:	4e4f5445 	cdpmi	4, 4, cr5, cr15, cr5, {2}
        33f3bc:	3a206279 	bcc	b57da8 <ROM$$Size+0x43815c>
        33f3c0:	7465636f 	strvcbt	r6, [r5], -#879
        33f3c4:	756e743d 	strvcb	r7, [lr, -#1085]!
        33f3c8:	2564206f 	strcsb	r2, [r4, -#111]!	; fField111
        33f3cc:	76657266 	strvcbt	r7, [r5], -r6, ror #4	; fField4
        33f3d0:	6c6f7720 	stcvsl	7, cr7, [pc], -#128
        33f3d4:	696e2070 	stmvsdb	lr!, {r4, r5, r6, sp}^
        33f3d8:	75736862 	ldrvcb	r6, [r3, -#2146]!
        33f3dc:	69747328 	ldmvsdb	r4!, {r3, r5, r8, r9, ip, sp, lr}^
        33f3e0:	29000000 	stmcsdb	r0, {}
    */
}

/**
 * Symbol: Pushpopper::flushbits(void)
 * Address: 0033f3e4
 */
Pushpopper::flushbits(void) {
    /*
        33f3e4:	e1a0c00d 	mov	ip, sp
        33f3e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        33f3ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        33f3f0:	e1a04000 	mov	r4, r0
        33f3f4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        33f3f8:	e3500020 	cmp	r0, #32	; 0x20
        33f3fc:	a91ba810 	ldmgedb	fp, {r4, fp, sp, pc}
        33f400:	e594000c 	ldr	r0, [r4, #12]	; fField12
        33f404:	e1a00c20 	mov	r0, r0, lsr #24
        33f408:	e5941010 	ldr	r1, [r4, #16]	; fField16
        33f40c:	e4c10001 	strb	r0, [r1], #1
        33f410:	e5841010 	str	r1, [r4, #16]	; fField16
        33f414:	e594000c 	ldr	r0, [r4, #12]	; fField12
        33f418:	e1a00400 	mov	r0, r0, lsl #8
        33f41c:	e584000c 	str	r0, [r4, #12]	; fField12
        33f420:	e5940004 	ldr	r0, [r4, #4]	; fField4
        33f424:	e2800001 	add	r0, r0, #1	; 0x1
        33f428:	e5840004 	str	r0, [r4, #4]	; fField4
        33f42c:	e1a01000 	mov	r1, r0
        33f430:	e5942014 	ldr	r2, [r4, #20]	; fField20
        33f434:	e2822008 	add	r2, r2, #8	; 0x8
        33f438:	e5842014 	str	r2, [r4, #20]	; fField20
        33f43c:	e5942008 	ldr	r2, [r4, #8]	; fField8
        33f440:	e1500002 	cmp	r0, r2
        33f444:	c28f0f04 	addgt	r0, pc, #16	; 0x10
        33f448:	cb62c90c 	blgt	1bf1880 <$printf>
        33f44c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        33f450:	e3500020 	cmp	r0, #32	; 0x20
        33f454:	baffffe9 	blt	33f400 <Pushpopper::flushbits(void)+0x1c>
        33f458:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        33f45c:	4e4f5445 	cdpmi	4, 4, cr5, cr15, cr5, {2}
        33f460:	3a206279 	bcc	b57e4c <ROM$$Size+0x438200>
        33f464:	7465636f 	strvcbt	r6, [r5], -#879
        33f468:	756e743d 	strvcb	r7, [lr, -#1085]!
        33f46c:	2564206f 	strcsb	r2, [r4, -#111]!	; fField111
        33f470:	76657266 	strvcbt	r7, [r5], -r6, ror #4	; fField4
        33f474:	6c6f7720 	stcvsl	7, cr7, [pc], -#128
        33f478:	696e2070 	stmvsdb	lr!, {r4, r5, r6, sp}^
        33f47c:	75736862 	ldrvcb	r6, [r3, -#2146]!
        33f480:	69747328 	ldmvsdb	r4!, {r3, r5, r8, r9, ip, sp, lr}^
        33f484:	29000000 	stmcsdb	r0, {}
    */
}

