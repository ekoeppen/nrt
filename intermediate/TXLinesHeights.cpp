#include "include/TXLinesHeights.h"

/**
 * Symbol: TXLinesHeights::__ct(void)
 * Address: 002390d4
 */
TXLinesHeights::TXLinesHeights(void) {
    /*
        2390d4:	e1a0c00d 	mov	ip, sp
        2390d8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2390dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2390e0:	e1b04000 	movs	r4, r0
        2390e4:	1a000003 	bne	2390f8 <TXLinesHeights::__ct(void)+0x24>
        2390e8:	e3a00020 	mov	r0, #32	; 0x20
        2390ec:	eb665591 	bl	1bce738 <$__nw(unsigned int)>
        2390f0:	e1b04000 	movs	r4, r0
        2390f4:	0a000009 	beq	239120 <TXLinesHeights::__ct(void)+0x4c>
        2390f8:	e1a00004 	mov	r0, r4
        2390fc:	e3a02000 	mov	r2, #0	; 0x0
        239100:	e3a0100c 	mov	r1, #12	; 0xc
        239104:	eb65306f 	bl	1b852c8 <TXArray::$__ct(unsigned char, int)>
        239108:	e59f0018 	ldr	r0, [pc, #18]	; 239128 <TXLinesHeights::__ct(void)+0x54>
        23910c:	e5840000 	str	r0, [r4]
        239110:	e3a00000 	mov	r0, #0	; 0x0
        239114:	e5840018 	str	r0, [r4, #24]	; fField24
        239118:	e3e00000 	mvn	r0, #0	; 0x0
        23911c:	e584001c 	str	r0, [r4, #28]	; fField28
        239120:	e1a00004 	mov	r0, r4
        239124:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        239128:	0001de14 	andeq	sp, r1, r4, lsl lr
    */
}

/**
 * Symbol: TXLinesHeights::FreeData(void)
 * Address: 0023912c
 */
TXLinesHeights::FreeData(void) {
    /*
        23912c:	e1a0c00d 	mov	ip, sp
        239130:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        239134:	e24cb004 	sub	fp, ip, #4	; 0x4
        239138:	e1a04000 	mov	r4, r0
        23913c:	e3a01000 	mov	r1, #0	; 0x0
        239140:	ebffdde9 	bl	2308ec <TXArray::SetCount(long)>
        239144:	e3a00000 	mov	r0, #0	; 0x0
        239148:	e5840018 	str	r0, [r4, #24]	; fField24
        23914c:	e3e00000 	mvn	r0, #0	; 0x0
        239150:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        239154:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TXLinesHeights::Concat(long, long, TXLineHeightGroup const *)
 * Address: 00239158
 */
TXLinesHeights::Concat(long, long, TXLineHeightGroup const *) {
    /*
        239158:	e1a0c00d 	mov	ip, sp
        23915c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        239160:	e24cb004 	sub	fp, ip, #4	; 0x4
        239164:	e1a04000 	mov	r4, r0
        239168:	e1a07001 	mov	r7, r1
        23916c:	e1a06002 	mov	r6, r2
        239170:	e1b05003 	movs	r5, r3
        239174:	e3a09000 	mov	r9, #0	; 0x0
        239178:	e3a08001 	mov	r8, #1	; 0x1
        23917c:	0a000014 	beq	2391d4 <TXLinesHeights::Concat(long, long, TXLineHeightGroup const *)+0x7c>
        239180:	e1a02005 	mov	r2, r5
        239184:	e1a01007 	mov	r1, r7
        239188:	e1a00004 	mov	r0, r4
        23918c:	eb655150 	bl	1b8d6d4 <TXLinesHeights::$EqualGroup( const(long, TXLineHeightGroup const &))>
        239190:	e3300000 	teq	r0, #0	; 0x0
        239194:	1a000006 	bne	2391b4 <TXLinesHeights::Concat(long, long, TXLineHeightGroup const *)+0x5c>
        239198:	e1a07006 	mov	r7, r6
        23919c:	e1a02005 	mov	r2, r5
        2391a0:	e1a01006 	mov	r1, r6
        2391a4:	e1a00004 	mov	r0, r4
        2391a8:	eb655149 	bl	1b8d6d4 <TXLinesHeights::$EqualGroup( const(long, TXLineHeightGroup const &))>
        2391ac:	e3300000 	teq	r0, #0	; 0x0
        2391b0:	0a00001a 	beq	239220 <TXLinesHeights::Concat(long, long, TXLineHeightGroup const *)+0xc8>
        2391b4:	e1a01007 	mov	r1, r7
        2391b8:	e1a00004 	mov	r0, r4
        2391bc:	eb653043 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2391c0:	e5901000 	ldr	r1, [r0]
        2391c4:	e5952000 	ldr	r2, [r5]
        2391c8:	e0811002 	add	r1, r1, r2
        2391cc:	e5801000 	str	r1, [r0]
        2391d0:	ea000010 	b	239218 <TXLinesHeights::Concat(long, long, TXLineHeightGroup const *)+0xc0>
        2391d4:	e1a02006 	mov	r2, r6
        2391d8:	e1a01007 	mov	r1, r7
        2391dc:	e1a00004 	mov	r0, r4
        2391e0:	eb65513c 	bl	1b8d6d8 <$EqualGroup__14TXLinesHeightsCFlT1>
        2391e4:	e3300000 	teq	r0, #0	; 0x0
        2391e8:	0a00000c 	beq	239220 <TXLinesHeights::Concat(long, long, TXLineHeightGroup const *)+0xc8>
        2391ec:	e1a01007 	mov	r1, r7
        2391f0:	e1a00004 	mov	r0, r4
        2391f4:	eb653035 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2391f8:	e1a05000 	mov	r5, r0
        2391fc:	e1a01006 	mov	r1, r6
        239200:	e1a00004 	mov	r0, r4
        239204:	eb653031 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        239208:	e5901000 	ldr	r1, [r0]
        23920c:	e5950000 	ldr	r0, [r5]
        239210:	e0810000 	add	r0, r1, r0
        239214:	e5850000 	str	r0, [r5]
        239218:	e1a00008 	mov	r0, r8
        23921c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        239220:	e1a00009 	mov	r0, r9
        239224:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TXLinesHeights::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)
 * Address: 00239228
 */
TXLinesHeights::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *) {
    /*
        239228:	e1a0c00d 	mov	ip, sp
        23922c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        239230:	e24cb004 	sub	fp, ip, #4	; 0x4
        239234:	e24dd004 	sub	sp, sp, #4	; 0x4
        239238:	e1a0200d 	mov	r2, sp
        23923c:	e24b1030 	sub	r1, fp, #48	; 0x30
        239240:	e51b0038 	ldr	r0, [fp, -#56]
        239244:	eb65511d 	bl	1b8d6c0 <$LineToHeightGroup__14TXLinesHeightsCFPlT1>
        239248:	e1a04000 	mov	r4, r0
        23924c:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        239250:	e51b0034 	ldr	r0, [fp, -#52]
        239254:	e3a06000 	mov	r6, #0	; 0x0
        239258:	e5901000 	ldr	r1, [r0]
        23925c:	e1320001 	teq	r2, r1
        239260:	05941008 	ldreq	r1, [r4, #8]	; fField8
        239264:	05902004 	ldreq	r2, [r0, #4]	; fField4
        239268:	01310002 	teqeq	r1, r2
        23926c:	01a00006 	moveq	r0, r6
        239270:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        239274:	e3a01001 	mov	r1, #1	; 0x1
        239278:	e52d100c 	str	r1, [sp, -#12]!
        23927c:	e5901000 	ldr	r1, [r0]
        239280:	e58d1004 	str	r1, [sp, #4]	; fField4
        239284:	e5900004 	ldr	r0, [r0, #4]	; fField4
        239288:	e58d0008 	str	r0, [sp, #8]	; fField8
        23928c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        239290:	e0412000 	sub	r2, r1, r0
        239294:	e51b0038 	ldr	r0, [fp, -#56]
        239298:	e5901018 	ldr	r1, [r0, #24]	; fField24
        23929c:	e0821001 	add	r1, r2, r1
        2392a0:	e5a01018 	str	r1, [r0, #24]!	; fField24
        2392a4:	e5941000 	ldr	r1, [r4]
        2392a8:	e1a07001 	mov	r7, r1
        2392ac:	e3310001 	teq	r1, #1	; 0x1
        2392b0:	1a00001c 	bne	239328 <TXLinesHeights::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0x100>
        2392b4:	e59d000c 	ldr	r0, [sp, #12]
        2392b8:	e2407001 	sub	r7, r0, #1	; 0x1
        2392bc:	e2805001 	add	r5, r0, #1	; 0x1
        2392c0:	e1a0300d 	mov	r3, sp
        2392c4:	e1a02005 	mov	r2, r5
        2392c8:	e1a01007 	mov	r1, r7
        2392cc:	e51b0038 	ldr	r0, [fp, -#56]
        2392d0:	eb655101 	bl	1b8d6dc <TXLinesHeights::$Concat(long, long, TXLineHeightGroup const *)>
        2392d4:	e3300000 	teq	r0, #0	; 0x0
        2392d8:	0a00000e 	beq	239318 <TXLinesHeights::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0xf0>
        2392dc:	e51b0038 	ldr	r0, [fp, -#56]
        2392e0:	e1a04000 	mov	r4, r0
        2392e4:	e1a02005 	mov	r2, r5
        2392e8:	e1a01007 	mov	r1, r7
        2392ec:	e3a03000 	mov	r3, #0	; 0x0
        2392f0:	eb6550f9 	bl	1b8d6dc <TXLinesHeights::$Concat(long, long, TXLineHeightGroup const *)>
        2392f4:	e3300000 	teq	r0, #0	; 0x0
        2392f8:	03a02001 	moveq	r2, #1	; 0x1
        2392fc:	13a02002 	movne	r2, #2	; 0x2
        239300:	e1a00004 	mov	r0, r4
        239304:	e59d100c 	ldr	r1, [sp, #12]
        239308:	e5943000 	ldr	r3, [r4]
        23930c:	e1a0e00f 	mov	lr, pc
        239310:	e283f004 	add	pc, r3, #4	; 0x4
        239314:	ea000001 	b	239320 <TXLinesHeights::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0xf8>
        239318:	e89d1009 	ldmia	sp, {r0, r3, ip}
        23931c:	e8841009 	stmia	r4, {r0, r3, ip}
        239320:	e1a00006 	mov	r0, r6
        239324:	ea00001b 	b	239398 <TXLinesHeights::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0x170>
        239328:	e51b0030 	ldr	r0, [fp, -#48]
        23932c:	e3500000 	cmp	r0, #0	; 0x0
        239330:	03a02000 	moveq	r2, #0	; 0x0
        239334:	13a02001 	movne	r2, #1	; 0x1
        239338:	e59d300c 	ldr	r3, [sp, #12]
        23933c:	e0825003 	add	r5, r2, r3
        239340:	12472001 	subne	r2, r7, #1	; 0x1
        239344:	11320000 	teqne	r2, r0
        239348:	1a000013 	bne	23939c <TXLinesHeights::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0x174>
        23934c:	e2410001 	sub	r0, r1, #1	; 0x1
        239350:	e2451001 	sub	r1, r5, #1	; 0x1
        239354:	e1a0300d 	mov	r3, sp
        239358:	e1a02005 	mov	r2, r5
        23935c:	e5840000 	str	r0, [r4]
        239360:	e51b0038 	ldr	r0, [fp, -#56]
        239364:	eb6550dc 	bl	1b8d6dc <TXLinesHeights::$Concat(long, long, TXLineHeightGroup const *)>
        239368:	e3300000 	teq	r0, #0	; 0x0
        23936c:	1affffeb 	bne	239320 <TXLinesHeights::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0xf8>
        239370:	e1a03005 	mov	r3, r5
        239374:	e1a0100d 	mov	r1, sp
        239378:	e3a02001 	mov	r2, #1	; 0x1
        23937c:	e51b0038 	ldr	r0, [fp, -#56]
        239380:	eb652fd6 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        239384:	e3300000 	teq	r0, #0	; 0x0
        239388:	13a00000 	movne	r0, #0	; 0x0
        23938c:	1a000001 	bne	239398 <TXLinesHeights::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0x170>
        239390:	e3a000e9 	mov	r0, #233	; 0xe9
        239394:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        239398:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        23939c:	e5948008 	ldr	r8, [r4, #8]	; fField8
        2393a0:	e5949004 	ldr	r9, [r4, #4]	; fField4
        2393a4:	e594a000 	ldr	sl, [r4]
        2393a8:	e1a03005 	mov	r3, r5
        2393ac:	e5840000 	str	r0, [r4]
        2393b0:	e3a02002 	mov	r2, #2	; 0x2
        2393b4:	e3a01000 	mov	r1, #0	; 0x0
        2393b8:	e51b0038 	ldr	r0, [fp, -#56]
        2393bc:	eb652fc7 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        2393c0:	e3300000 	teq	r0, #0	; 0x0
        2393c4:	0afffff1 	beq	239390 <TXLinesHeights::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0x168>
        2393c8:	e1a01000 	mov	r1, r0
        2393cc:	e280000c 	add	r0, r0, #12	; 0xc
        2393d0:	e89d5008 	ldmia	sp, {r3, ip, lr}
        2393d4:	e8815008 	stmia	r1, {r3, ip, lr}
        2393d8:	e5808008 	str	r8, [r0, #8]	; fField8
        2393dc:	e5809004 	str	r9, [r0, #4]	; fField4
        2393e0:	e580a000 	str	sl, [r0]
        2393e4:	e51b1030 	ldr	r1, [fp, -#48]
        2393e8:	e0471001 	sub	r1, r7, r1
        2393ec:	e2411001 	sub	r1, r1, #1	; 0x1
        2393f0:	e5801000 	str	r1, [r0]
        2393f4:	eaffffc9 	b	239320 <TXLinesHeights::SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)+0xf8>
    */
}

/**
 * Symbol: TXLinesHeights::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)
 * Address: 002393f8
 */
TXLinesHeights::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long) {
    /*
        2393f8:	e1a0c00d 	mov	ip, sp
        2393fc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        239400:	e24cb004 	sub	fp, ip, #4	; 0x4
        239404:	e1a04000 	mov	r4, r0
        239408:	e1a06001 	mov	r6, r1
        23940c:	e1a07002 	mov	r7, r2
        239410:	e1a05003 	mov	r5, r3
        239414:	e590001c 	ldr	r0, [r0, #28]	; fField28
        239418:	e2900001 	adds	r0, r0, #1	; 0x1
        23941c:	e584001c 	str	r0, [r4, #28]	; fField28
        239420:	1a000011 	bne	23946c <TXLinesHeights::InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)+0x74>
        239424:	e1a00004 	mov	r0, r4
        239428:	e3a03000 	mov	r3, #0	; 0x0
        23942c:	e3a02001 	mov	r2, #1	; 0x1
        239430:	e3a01000 	mov	r1, #0	; 0x0
        239434:	eb652fa9 	bl	1b852e0 <TXArray::$Insert(void const *, long, long)>
        239438:	e3300000 	teq	r0, #0	; 0x0
        23943c:	03a000e9 	moveq	r0, #233	; 0xe9
        239440:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        239444:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        239448:	e3a01001 	mov	r1, #1	; 0x1
        23944c:	e5801000 	str	r1, [r0]
        239450:	e5961004 	ldr	r1, [r6, #4]	; fField4
        239454:	e5801008 	str	r1, [r0, #8]	; fField8
        239458:	e5961000 	ldr	r1, [r6]
        23945c:	e5a01004 	str	r1, [r0, #4]!	; fField4
        239460:	e3a00000 	mov	r0, #0	; 0x0
        239464:	e5a41018 	str	r1, [r4, #24]!	; fField24
        239468:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        23946c:	e3550000 	cmp	r5, #0	; 0x0
        239470:	b1a05000 	movlt	r5, r0
        239474:	e24dd004 	sub	sp, sp, #4	; 0x4
        239478:	e1300005 	teq	r0, r5
        23947c:	13a00000 	movne	r0, #0	; 0x0
        239480:	03a00001 	moveq	r0, #1	; 0x1
        239484:	e0450000 	sub	r0, r5, r0
        239488:	e58d0000 	str	r0, [sp]
        23948c:	e1a0100d 	mov	r1, sp
        239490:	e1a00004 	mov	r0, r4
        239494:	e3a02000 	mov	r2, #0	; 0x0
        239498:	eb655088 	bl	1b8d6c0 <$LineToHeightGroup__14TXLinesHeightsCFPlT1>
        23949c:	e5901000 	ldr	r1, [r0]
        2394a0:	e2811001 	add	r1, r1, #1	; 0x1
        2394a4:	e5801000 	str	r1, [r0]
        2394a8:	e5941018 	ldr	r1, [r4, #24]	; fField24
        2394ac:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2394b0:	e0810000 	add	r0, r1, r0
        2394b4:	e1a03007 	mov	r3, r7
        2394b8:	e1a02005 	mov	r2, r5
        2394bc:	e1a01006 	mov	r1, r6
        2394c0:	e5840018 	str	r0, [r4, #24]	; fField24
        2394c4:	e1a00004 	mov	r0, r4
        2394c8:	eb655084 	bl	1b8d6e0 <TXLinesHeights::$SetLineHeightInfo(TXLineHeightInfo const &, long, TXFormatReflowLines *)>
        2394cc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXLinesHeights::InsertLineHeightInfo(TXLineHeightInfo const &, long)
 * Address: 002394d0
 */
TXLinesHeights::InsertLineHeightInfo(TXLineHeightInfo const &, long) {
    /*
        2394d0:	e1a03002 	mov	r3, r2
        2394d4:	e3a02000 	mov	r2, #0	; 0x0
        2394d8:	ea655081 	b	1b8d6e4 <TXLinesHeights::$InsertLine(TXLineHeightInfo const &, TXFormatReflowLines *, long)>
    */
}

/**
 * Symbol: TXLinesHeights::RemoveLines(long, long, TXFormatReflowLines *)
 * Address: 002394dc
 */
TXLinesHeights::RemoveLines(long, long, TXFormatReflowLines *) {
    /*
        2394dc:	e1a0c00d 	mov	ip, sp
        2394e0:	e92dd81f 	stmdb	sp!, {r0, r1, r2, r3, r4, fp, ip, lr, pc}
        2394e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2394e8:	e51b101c 	ldr	r1, [fp, -#28]	; fField28
        2394ec:	e3310000 	teq	r1, #0	; 0x0
        2394f0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2394f4:	e51b0020 	ldr	r0, [fp, -#32]
        2394f8:	e590201c 	ldr	r2, [r0, #28]	; fField28
        2394fc:	e0521001 	subs	r1, r2, r1
        239500:	e5a0101c 	str	r1, [r0, #28]!	; fField28
        239504:	5a000006 	bpl	239524 <TXLinesHeights::RemoveLines(long, long, TXFormatReflowLines *)+0x48>
        239508:	e3a01000 	mov	r1, #0	; 0x0
        23950c:	e51b0020 	ldr	r0, [fp, -#32]
        239510:	ebffdcf5 	bl	2308ec <TXArray::SetCount(long)>
        239514:	e3a01000 	mov	r1, #0	; 0x0
        239518:	e51b0020 	ldr	r0, [fp, -#32]
        23951c:	e5a01018 	str	r1, [r0, #24]!	; fField24
        239520:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        239524:	e24dd004 	sub	sp, sp, #4	; 0x4
        239528:	e1a0200d 	mov	r2, sp
        23952c:	e24b1018 	sub	r1, fp, #24	; 0x18
        239530:	e51b0020 	ldr	r0, [fp, -#32]
        239534:	eb655061 	bl	1b8d6c0 <$LineToHeightGroup__14TXLinesHeightsCFPlT1>
        239538:	e51b1018 	ldr	r1, [fp, -#24]	; fField24
        23953c:	e3310000 	teq	r1, #0	; 0x0
        239540:	0a00000a 	beq	239570 <TXLinesHeights::RemoveLines(long, long, TXFormatReflowLines *)+0x94>
        239544:	e51b301c 	ldr	r3, [fp, -#28]	; fField28
        239548:	e5902000 	ldr	r2, [r0]
        23954c:	e0421001 	sub	r1, r2, r1
        239550:	e1530001 	cmp	r3, r1
        239554:	b1a01003 	movlt	r1, r3
        239558:	e0422001 	sub	r2, r2, r1
        23955c:	e5802000 	str	r2, [r0]
        239560:	e59d2000 	ldr	r2, [sp]
        239564:	e2822001 	add	r2, r2, #1	; 0x1
        239568:	e58d2000 	str	r2, [sp]
        23956c:	ea000000 	b	239574 <TXLinesHeights::RemoveLines(long, long, TXFormatReflowLines *)+0x98>
        239570:	e3a01000 	mov	r1, #0	; 0x0
        239574:	e3a04000 	mov	r4, #0	; 0x0
        239578:	e51b201c 	ldr	r2, [fp, -#28]	; fField28
        23957c:	e3320000 	teq	r2, #0	; 0x0
        239580:	0a000028 	beq	239628 <TXLinesHeights::RemoveLines(long, long, TXFormatReflowLines *)+0x14c>
        239584:	e3310000 	teq	r1, #0	; 0x0
        239588:	1a000007 	bne	2395ac <TXLinesHeights::RemoveLines(long, long, TXFormatReflowLines *)+0xd0>
        23958c:	e51b201c 	ldr	r2, [fp, -#28]	; fField28
        239590:	e5903000 	ldr	r3, [r0]
        239594:	e1520003 	cmp	r2, r3
        239598:	b1a01002 	movlt	r1, r2
        23959c:	b0432002 	sublt	r2, r3, r2
        2395a0:	b5802000 	strlt	r2, [r0]
        2395a4:	a1a01003 	movge	r1, r3
        2395a8:	a2844001 	addge	r4, r4, #1	; 0x1
        2395ac:	e51b201c 	ldr	r2, [fp, -#28]	; fField28
        2395b0:	e0422001 	sub	r2, r2, r1
        2395b4:	e50b201c 	str	r2, [fp, -#28]	; fField28
        2395b8:	e51b2020 	ldr	r2, [fp, -#32]
        2395bc:	e592c018 	ldr	ip, [r2, #24]	; fField24
        2395c0:	e5903004 	ldr	r3, [r0, #4]	; fField4
        2395c4:	e0030391 	mul	r3, r1, r3
        2395c8:	e04c1003 	sub	r1, ip, r3
        2395cc:	e280000c 	add	r0, r0, #12	; 0xc
        2395d0:	e5a21018 	str	r1, [r2, #24]!	; fField24
        2395d4:	e3a01000 	mov	r1, #0	; 0x0
        2395d8:	e51b201c 	ldr	r2, [fp, -#28]	; fField28
        2395dc:	e3320000 	teq	r2, #0	; 0x0
        2395e0:	1affffe7 	bne	239584 <TXLinesHeights::RemoveLines(long, long, TXFormatReflowLines *)+0xa8>
        2395e4:	e3340000 	teq	r4, #0	; 0x0
        2395e8:	0a00000e 	beq	239628 <TXLinesHeights::RemoveLines(long, long, TXFormatReflowLines *)+0x14c>
        2395ec:	e59d0000 	ldr	r0, [sp]
        2395f0:	e0802004 	add	r2, r0, r4
        2395f4:	e2401001 	sub	r1, r0, #1	; 0x1
        2395f8:	e3a03000 	mov	r3, #0	; 0x0
        2395fc:	e51b0020 	ldr	r0, [fp, -#32]
        239600:	eb655035 	bl	1b8d6dc <TXLinesHeights::$Concat(long, long, TXLineHeightGroup const *)>
        239604:	e3300000 	teq	r0, #0	; 0x0
        239608:	12844001 	addne	r4, r4, #1	; 0x1
        23960c:	e1a02004 	mov	r2, r4
        239610:	e51b3020 	ldr	r3, [fp, -#32]
        239614:	e1a00003 	mov	r0, r3
        239618:	e59d1000 	ldr	r1, [sp]
        23961c:	e5933000 	ldr	r3, [r3]
        239620:	e1a0e00f 	mov	lr, pc
        239624:	e283f004 	add	pc, r3, #4	; 0x4
        239628:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: LineToHeightGroup__14TXLinesHeightsCFPlT1
 * Address: 00239684
 */
void TXLinesHeights::LineToHeightGroup() {
    /*
        239684:	e1a0c00d 	mov	ip, sp
        239688:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        23968c:	e24cb004 	sub	fp, ip, #4	; 0x4
        239690:	e1a05001 	mov	r5, r1
        239694:	e1a04002 	mov	r4, r2
        239698:	e3a01000 	mov	r1, #0	; 0x0
        23969c:	eb652f0b 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        2396a0:	e1a01000 	mov	r1, r0
        2396a4:	e1a06000 	mov	r6, r0
        2396a8:	e5962000 	ldr	r2, [r6]
        2396ac:	e5950000 	ldr	r0, [r5]
        2396b0:	e1520000 	cmp	r2, r0
        2396b4:	d0400002 	suble	r0, r0, r2
        2396b8:	d286600c 	addle	r6, r6, #12	; 0xc
        2396bc:	d5850000 	strle	r0, [r5]
        2396c0:	dafffff8 	ble	2396a8 <LineToHeightGroup__14TXLinesHeightsCFPlT1+0x24>
        2396c4:	e3340000 	teq	r4, #0	; 0x0
        2396c8:	0a000003 	beq	2396dc <LineToHeightGroup__14TXLinesHeightsCFPlT1+0x58>
        2396cc:	e0461001 	sub	r1, r6, r1
        2396d0:	e3a0000c 	mov	r0, #12	; 0xc
        2396d4:	eb65e499 	bl	1bb2940 <$__rt_sdiv>
        2396d8:	e5840000 	str	r0, [r4]
        2396dc:	e1a00006 	mov	r0, r6
        2396e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXLinesHeights::HeightToCountLines( const(TXLineHeightGroup const &, long, long *))
 * Address: 0023992c
 */
TXLinesHeights::HeightToCountLines( const(TXLineHeightGroup const &, long, long *)) {
    /*
        23992c:	e1a0c00d 	mov	ip, sp
        239930:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        239934:	e24cb004 	sub	fp, ip, #4	; 0x4
        239938:	e1a04003 	mov	r4, r3
        23993c:	e5910000 	ldr	r0, [r1]
        239940:	e0400002 	sub	r0, r0, r2
        239944:	e5b15004 	ldr	r5, [r1, #4]!	; fField4
        239948:	e0010095 	mul	r1, r5, r0
        23994c:	e5936000 	ldr	r6, [r3]
        239950:	e1560001 	cmp	r6, r1
        239954:	aa000004 	bge	23996c <TXLinesHeights::HeightToCountLines( const(TXLineHeightGroup const &, long, long *))+0x40>
        239958:	e0860005 	add	r0, r6, r5
        23995c:	e2401001 	sub	r1, r0, #1	; 0x1
        239960:	e1a00005 	mov	r0, r5
        239964:	eb65e3f5 	bl	1bb2940 <$__rt_sdiv>
        239968:	e0010095 	mul	r1, r5, r0
        23996c:	e0461001 	sub	r1, r6, r1
        239970:	e5841000 	str	r1, [r4]
        239974:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PixelToLine__14TXLinesHeightsCFPllPP17TXLineHeightGroupT1
 * Address: 00239b4c
 */
void TXLinesHeights::PixelToLine() {
    /*
        239b4c:	e1a0c00d 	mov	ip, sp
        239b50:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        239b54:	e24cb004 	sub	fp, ip, #4	; 0x4
        239b58:	e1a06000 	mov	r6, r0
        239b5c:	e1a05001 	mov	r5, r1
        239b60:	e1a04002 	mov	r4, r2
        239b64:	e1a07003 	mov	r7, r3
        239b68:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        239b6c:	e24dd008 	sub	sp, sp, #8	; 0x8
        239b70:	e58d2004 	str	r2, [sp, #4]	; fField4
        239b74:	e28d1004 	add	r1, sp, #4	; 0x4
        239b78:	e3a02000 	mov	r2, #0	; 0x0
        239b7c:	eb654ecf 	bl	1b8d6c0 <$LineToHeightGroup__14TXLinesHeightsCFPlT1>
        239b80:	e1a08000 	mov	r8, r0
        239b84:	e5950000 	ldr	r0, [r5]
        239b88:	e58d0000 	str	r0, [sp]
        239b8c:	e3300000 	teq	r0, #0	; 0x0
        239b90:	059d0004 	ldreq	r0, [sp, #4]	; fField4
        239b94:	0a000027 	beq	239c38 <PixelToLine__14TXLinesHeightsCFPllPP17TXLineHeightGroupT1+0xec>
        239b98:	e248800c 	sub	r8, r8, #12	; 0xc
        239b9c:	e288100c 	add	r1, r8, #12	; 0xc
        239ba0:	e1a08001 	mov	r8, r1
        239ba4:	e1a0300d 	mov	r3, sp
        239ba8:	e1a00006 	mov	r0, r6
        239bac:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        239bb0:	eb654ec3 	bl	1b8d6c4 <TXLinesHeights::$HeightToCountLines( const(TXLineHeightGroup const &, long, long *))>
        239bb4:	e0844000 	add	r4, r4, r0
        239bb8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        239bbc:	e0800001 	add	r0, r0, r1
        239bc0:	e3a01000 	mov	r1, #0	; 0x0
        239bc4:	e58d1004 	str	r1, [sp, #4]	; fField4
        239bc8:	e59d1000 	ldr	r1, [sp]
        239bcc:	e3510000 	cmp	r1, #0	; 0x0
        239bd0:	da000002 	ble	239be0 <PixelToLine__14TXLinesHeightsCFPllPP17TXLineHeightGroupT1+0x94>
        239bd4:	e596101c 	ldr	r1, [r6, #28]	; fField28
        239bd8:	e1510004 	cmp	r1, r4
        239bdc:	aaffffee 	bge	239b9c <PixelToLine__14TXLinesHeightsCFPllPP17TXLineHeightGroupT1+0x50>
        239be0:	e59d1000 	ldr	r1, [sp]
        239be4:	e3510000 	cmp	r1, #0	; 0x0
        239be8:	aa000007 	bge	239c0c <PixelToLine__14TXLinesHeightsCFPllPP17TXLineHeightGroupT1+0xc0>
        239bec:	e5982004 	ldr	r2, [r8, #4]	; fField4
        239bf0:	e0821001 	add	r1, r2, r1
        239bf4:	e5952000 	ldr	r2, [r5]
        239bf8:	e0421001 	sub	r1, r2, r1
        239bfc:	e2400001 	sub	r0, r0, #1	; 0x1
        239c00:	e2444001 	sub	r4, r4, #1	; 0x1
        239c04:	e5851000 	str	r1, [r5]
        239c08:	ea00000a 	b	239c38 <PixelToLine__14TXLinesHeightsCFPllPP17TXLineHeightGroupT1+0xec>
        239c0c:	1a000004 	bne	239c24 <PixelToLine__14TXLinesHeightsCFPllPP17TXLineHeightGroupT1+0xd8>
        239c10:	e5981000 	ldr	r1, [r8]
        239c14:	e1300001 	teq	r0, r1
        239c18:	03a00000 	moveq	r0, #0	; 0x0
        239c1c:	0288800c 	addeq	r8, r8, #12	; 0xc
        239c20:	ea000004 	b	239c38 <PixelToLine__14TXLinesHeightsCFPllPP17TXLineHeightGroupT1+0xec>
        239c24:	e5b6201c 	ldr	r2, [r6, #28]!	; fField28
        239c28:	e1520004 	cmp	r2, r4
        239c2c:	b5952000 	ldrlt	r2, [r5]
        239c30:	b0421001 	sublt	r1, r2, r1
        239c34:	b5851000 	strlt	r1, [r5]
        239c38:	e3370000 	teq	r7, #0	; 0x0
        239c3c:	15878000 	strne	r8, [r7]
        239c40:	15890000 	strne	r0, [r9]
        239c44:	e1a00004 	mov	r0, r4
        239c48:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: GetLinesHeight__14TXLinesHeightsCFlT1
 * Address: 00239c4c
 */
void TXLinesHeights::GetLinesHeight() {
    /*
        239c4c:	e1a0c00d 	mov	ip, sp
        239c50:	e92dd877 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, fp, ip, lr, pc}
        239c54:	e24cb004 	sub	fp, ip, #4	; 0x4
        239c58:	e51b0024 	ldr	r0, [fp, -#36]
        239c5c:	e590201c 	ldr	r2, [r0, #28]	; fField28
        239c60:	e3520000 	cmp	r2, #0	; 0x0
        239c64:	b3a00000 	movlt	r0, #0	; 0x0
        239c68:	b91ba870 	ldmltdb	fp, {r4, r5, r6, fp, sp, pc}
        239c6c:	e51b1020 	ldr	r1, [fp, -#32]
        239c70:	e3310000 	teq	r1, #0	; 0x0
        239c74:	051b301c 	ldreq	r3, [fp, -#28]	; fField28
        239c78:	01320003 	teqeq	r2, r3
        239c7c:	05900018 	ldreq	r0, [r0, #24]	; fField24
        239c80:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        239c84:	e51b201c 	ldr	r2, [fp, -#28]	; fField28
        239c88:	e1310002 	teq	r1, r2
        239c8c:	13a01000 	movne	r1, #0	; 0x0
        239c90:	03a01001 	moveq	r1, #1	; 0x1
        239c94:	e20160ff 	and	r6, r1, #255	; 0xff
        239c98:	e24b1020 	sub	r1, fp, #32	; 0x20
        239c9c:	e3a02000 	mov	r2, #0	; 0x0
        239ca0:	eb654e86 	bl	1b8d6c0 <$LineToHeightGroup__14TXLinesHeightsCFPlT1>
        239ca4:	e1a04000 	mov	r4, r0
        239ca8:	e3360000 	teq	r6, #0	; 0x0
        239cac:	e5b05004 	ldr	r5, [r0, #4]!	; fField4
        239cb0:	11a00005 	movne	r0, r5
        239cb4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        239cb8:	e24b101c 	sub	r1, fp, #28	; 0x1c
        239cbc:	e3a02000 	mov	r2, #0	; 0x0
        239cc0:	e51b0024 	ldr	r0, [fp, -#36]
        239cc4:	eb654e7d 	bl	1b8d6c0 <$LineToHeightGroup__14TXLinesHeightsCFPlT1>
        239cc8:	e1a01000 	mov	r1, r0
        239ccc:	e1340000 	teq	r4, r0
        239cd0:	1a000005 	bne	239cec <GetLinesHeight__14TXLinesHeightsCFlT1+0xa0>
        239cd4:	e24b1020 	sub	r1, fp, #32	; 0x20
        239cd8:	e8910003 	ldmia	r1, {r0, r1}
        239cdc:	e0410000 	sub	r0, r1, r0
        239ce0:	e2800001 	add	r0, r0, #1	; 0x1
        239ce4:	e0000095 	mul	r0, r5, r0
        239ce8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        239cec:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        239cf0:	e2802001 	add	r2, r0, #1	; 0x1
        239cf4:	e5910004 	ldr	r0, [r1, #4]	; fField4
        239cf8:	e0020290 	mul	r2, r0, r2
        239cfc:	e5940000 	ldr	r0, [r4]
        239d00:	e51b3020 	ldr	r3, [fp, -#32]
        239d04:	e0400003 	sub	r0, r0, r3
        239d08:	e0202095 	mla	r0, r5, r0, r2
        239d0c:	e284200c 	add	r2, r4, #12	; 0xc
        239d10:	e1520001 	cmp	r2, r1
        239d14:	291ba870 	ldmcsdb	fp, {r4, r5, r6, fp, sp, pc}
        239d18:	e492c004 	ldr	ip, [r2], #4	; fField4
        239d1c:	e4923008 	ldr	r3, [r2], #8	; fField8
        239d20:	e020039c 	mla	r0, ip, r3, r0
        239d24:	e1520001 	cmp	r2, r1
        239d28:	3afffffa 	bcc	239d18 <GetLinesHeight__14TXLinesHeightsCFlT1+0xcc>
        239d2c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXLinesHeights::GetLineHeightInfo( const(long, TXLineHeightInfo *))
 * Address: 00239d30
 */
TXLinesHeights::GetLineHeightInfo( const(long, TXLineHeightInfo *)) {
    /*
        239d30:	e1a0c00d 	mov	ip, sp
        239d34:	e92dd807 	stmdb	sp!, {r0, r1, r2, fp, ip, lr, pc}
        239d38:	e24cb004 	sub	fp, ip, #4	; 0x4
        239d3c:	e24b1014 	sub	r1, fp, #20	; 0x14
        239d40:	e3a02000 	mov	r2, #0	; 0x0
        239d44:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        239d48:	eb654e5c 	bl	1b8d6c0 <$LineToHeightGroup__14TXLinesHeightsCFPlT1>
        239d4c:	e5901004 	ldr	r1, [r0, #4]	; fField4
        239d50:	e51b2010 	ldr	r2, [fp, -#16]
        239d54:	e5821000 	str	r1, [r2]
        239d58:	e5b01008 	ldr	r1, [r0, #8]!	; fField8
        239d5c:	e51b0010 	ldr	r0, [fp, -#16]
        239d60:	e5a01004 	str	r1, [r0, #4]!	; fField4
        239d64:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXLinesHeights::EqualGroup( const(long, TXLineHeightGroup const &))
 * Address: 00239d68
 */
TXLinesHeights::EqualGroup( const(long, TXLineHeightGroup const &)) {
    /*
        239d68:	e1a0c00d 	mov	ip, sp
        239d6c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        239d70:	e24cb004 	sub	fp, ip, #4	; 0x4
        239d74:	e1a04002 	mov	r4, r2
        239d78:	e3510000 	cmp	r1, #0	; 0x0
        239d7c:	ba00000d 	blt	239db8 <TXLinesHeights::EqualGroup( const(long, TXLineHeightGroup const &))+0x50>
        239d80:	e5902004 	ldr	r2, [r0, #4]	; fField4
        239d84:	e1520001 	cmp	r2, r1
        239d88:	da00000a 	ble	239db8 <TXLinesHeights::EqualGroup( const(long, TXLineHeightGroup const &))+0x50>
        239d8c:	eb652d4f 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        239d90:	e5941004 	ldr	r1, [r4, #4]	; fField4
        239d94:	e5902004 	ldr	r2, [r0, #4]	; fField4
        239d98:	e1310002 	teq	r1, r2
        239d9c:	05b41008 	ldreq	r1, [r4, #8]!	; fField8
        239da0:	05900008 	ldreq	r0, [r0, #8]	; fField8
        239da4:	01310000 	teqeq	r1, r0
        239da8:	13a00000 	movne	r0, #0	; 0x0
        239dac:	03a00001 	moveq	r0, #1	; 0x1
        239db0:	e20000ff 	and	r0, r0, #255	; 0xff
        239db4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        239db8:	e3a00000 	mov	r0, #0	; 0x0
        239dbc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: EqualGroup__14TXLinesHeightsCFlT1
 * Address: 00239dc0
 */
void TXLinesHeights::EqualGroup() {
    /*
        239dc0:	e1a0c00d 	mov	ip, sp
        239dc4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        239dc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        239dcc:	e1a04000 	mov	r4, r0
        239dd0:	e1a05001 	mov	r5, r1
        239dd4:	e1b01002 	movs	r1, r2
        239dd8:	4a000009 	bmi	239e04 <EqualGroup__14TXLinesHeightsCFlT1+0x44>
        239ddc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        239de0:	e1500001 	cmp	r0, r1
        239de4:	da000006 	ble	239e04 <EqualGroup__14TXLinesHeightsCFlT1+0x44>
        239de8:	e1a00004 	mov	r0, r4
        239dec:	eb652d37 	bl	1b852d0 <TXArray::$GetElementPtr( const(long))>
        239df0:	e1a02000 	mov	r2, r0
        239df4:	e1a01005 	mov	r1, r5
        239df8:	e1a00004 	mov	r0, r4
        239dfc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        239e00:	ea654e33 	b	1b8d6d4 <TXLinesHeights::$EqualGroup( const(long, TXLineHeightGroup const &))>
        239e04:	e3a00000 	mov	r0, #0	; 0x0
        239e08:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

