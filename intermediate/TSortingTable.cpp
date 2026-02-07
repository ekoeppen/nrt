#include "include/TSortingTable.h"

/**
 * Symbol: TSortingTable::GetProjectionEntry( const(unsigned short))
 * Address: 002581a8
 */
TSortingTable::GetProjectionEntry( const(unsigned short)) {
    /*
        2581a8:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        2581ac:	e1a02801 	mov	r2, r1, lsl #16
        2581b0:	e1a02822 	mov	r2, r2, lsr #16
        2581b4:	e3520080 	cmp	r2, #128	; 0x80
        2581b8:	b0800102 	addlt	r0, r0, r2, lsl #2
        2581bc:	b2800044 	addlt	r0, r0, #68	; 0x44
        2581c0:	b8bd8030 	ldmltia	sp!, {r4, r5, pc}
        2581c4:	e2801008 	add	r1, r0, #8	; 0x8
        2581c8:	e3a03044 	mov	r3, #68	; 0x44
        2581cc:	e3a0c000 	mov	ip, #0	; 0x0
        2581d0:	e5904006 	ldr	r4, [r0, #6]	; fField6
        2581d4:	e1a04844 	mov	r4, r4, asr #16
        2581d8:	e3540000 	cmp	r4, #0	; 0x0
        2581dc:	da000015 	ble	258238 <TSortingTable::GetProjectionEntry( const(unsigned short))+0x90>
        2581e0:	e591e000 	ldr	lr, [r1]
        2581e4:	e1a0e82e 	mov	lr, lr, lsr #16
        2581e8:	e152000e 	cmp	r2, lr
        2581ec:	a5915002 	ldrge	r5, [r1, #2]
        2581f0:	a1a05825 	movge	r5, r5, lsr #16
        2581f4:	a1550002 	cmpge	r5, r2
        2581f8:	ba000004 	blt	258210 <TSortingTable::GetProjectionEntry( const(unsigned short))+0x68>
        2581fc:	e0800003 	add	r0, r0, r3
        258200:	e5911000 	ldr	r1, [r1]
        258204:	e0421821 	sub	r1, r2, r1, lsr #16
        258208:	e0800101 	add	r0, r0, r1, lsl #2
        25820c:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
        258210:	e5915002 	ldr	r5, [r1, #2]
        258214:	e06ee825 	rsb	lr, lr, r5, lsr #16
        258218:	e28ee001 	add	lr, lr, #1	; 0x1
        25821c:	e083310e 	add	r3, r3, lr, lsl #2
        258220:	e2811004 	add	r1, r1, #4	; 0x4
        258224:	e28cc001 	add	ip, ip, #1	; 0x1
        258228:	e1a0c80c 	mov	ip, ip, lsl #16
        25822c:	e1a0c84c 	mov	ip, ip, asr #16
        258230:	e154000c 	cmp	r4, ip
        258234:	caffffe9 	bgt	2581e0 <TSortingTable::GetProjectionEntry( const(unsigned short))+0x38>
        258238:	e3a0c000 	mov	ip, #0	; 0x0
        25823c:	e5901020 	ldr	r1, [r0, #32]	; fField32
        258240:	e1a01841 	mov	r1, r1, asr #16
        258244:	e2511001 	subs	r1, r1, #1	; 0x1
        258248:	4a00000f 	bmi	25828c <TSortingTable::GetProjectionEntry( const(unsigned short))+0xe4>
        25824c:	e080e003 	add	lr, r0, r3
        258250:	e041000c 	sub	r0, r1, ip
        258254:	e0800fa0 	add	r0, r0, r0, lsr #31
        258258:	e08c00c0 	add	r0, ip, r0, asr #1
        25825c:	e0803080 	add	r3, r0, r0, lsl #1
        258260:	e08e3083 	add	r3, lr, r3, lsl #1
        258264:	e5934000 	ldr	r4, [r3]
        258268:	e1520824 	cmp	r2, r4, lsr #16
        25826c:	c280c001 	addgt	ip, r0, #1	; 0x1
        258270:	ca000003 	bgt	258284 <TSortingTable::GetProjectionEntry( const(unsigned short))+0xdc>
        258274:	b2401001 	sublt	r1, r0, #1	; 0x1
        258278:	ba000001 	blt	258284 <TSortingTable::GetProjectionEntry( const(unsigned short))+0xdc>
        25827c:	e2830002 	add	r0, r3, #2	; 0x2
        258280:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
        258284:	e15c0001 	cmp	ip, r1
        258288:	dafffff0 	ble	258250 <TSortingTable::GetProjectionEntry( const(unsigned short))+0xa8>
        25828c:	e3a00000 	mov	r0, #0	; 0x0
        258290:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: TSortingTable::GetLigatureEntry( const(unsigned short))
 * Address: 00258294
 */
TSortingTable::GetLigatureEntry( const(unsigned short)) {
    /*
        258294:	e1a01801 	mov	r1, r1, lsl #16
        258298:	e1a01821 	mov	r1, r1, lsr #16
        25829c:	e5902024 	ldr	r2, [r0, #36]	; fField36
        2582a0:	e0800842 	add	r0, r0, r2, asr #16
        2582a4:	e2800044 	add	r0, r0, #68	; 0x44
        2582a8:	e5902000 	ldr	r2, [r0]
        2582ac:	e1310822 	teq	r1, r2, lsr #16
        2582b0:	12800008 	addne	r0, r0, #8	; 0x8
        2582b4:	1afffffb 	bne	2582a8 <TSortingTable::GetLigatureEntry( const(unsigned short))+0x14>
        2582b8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSortingTable::ConvertTextToLowestSort( const(unsigned short *, long))
 * Address: 002582bc
 */
TSortingTable::ConvertTextToLowestSort( const(unsigned short *, long)) {
    /*
        2582bc:	e1a0c00d 	mov	ip, sp
        2582c0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2582c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2582c8:	e1a05000 	mov	r5, r0
        2582cc:	e1a04001 	mov	r4, r1
        2582d0:	e2526001 	subs	r6, r2, #1	; 0x1
        2582d4:	491ba8f0 	ldmmidb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2582d8:	e3a07801 	mov	r7, #65536	; 0x10000
        2582dc:	e2477001 	sub	r7, r7, #1	; 0x1
        2582e0:	e5941000 	ldr	r1, [r4]
        2582e4:	e1a01821 	mov	r1, r1, lsr #16
        2582e8:	e1a00005 	mov	r0, r5
        2582ec:	eb654060 	bl	1ba8474 <TSortingTable::$GetProjectionEntry( const(unsigned short))>
        2582f0:	e3300000 	teq	r0, #0	; 0x0
        2582f4:	0a000015 	beq	258350 <TSortingTable::ConvertTextToLowestSort( const(unsigned short *, long))+0x94>
        2582f8:	e595102a 	ldr	r1, [r5, #42]	; fField42
        2582fc:	e5900000 	ldr	r0, [r0]
        258300:	e1a00820 	mov	r0, r0, lsr #16
        258304:	e1500841 	cmp	r0, r1, asr #16
        258308:	aa000005 	bge	258324 <TSortingTable::ConvertTextToLowestSort( const(unsigned short *, long))+0x68>
        25830c:	e5951028 	ldr	r1, [r5, #40]	; fField40
        258310:	e0851841 	add	r1, r5, r1, asr #16
        258314:	e2811044 	add	r1, r1, #68	; 0x44
        258318:	e7910080 	ldr	r0, [r1, r0, lsl #1]
        25831c:	e1a00820 	mov	r0, r0, lsr #16
        258320:	ea000007 	b	258344 <TSortingTable::ConvertTextToLowestSort( const(unsigned short *, long))+0x88>
        258324:	e1300007 	teq	r0, r7
        258328:	1a000008 	bne	258350 <TSortingTable::ConvertTextToLowestSort( const(unsigned short *, long))+0x94>
        25832c:	e5941000 	ldr	r1, [r4]
        258330:	e1a01821 	mov	r1, r1, lsr #16
        258334:	e1a00005 	mov	r0, r5
        258338:	eb65404e 	bl	1ba8478 <TSortingTable::$GetLigatureEntry( const(unsigned short))>
        25833c:	e5900006 	ldr	r0, [r0, #6]	; fField6
        258340:	e1a00820 	mov	r0, r0, lsr #16
        258344:	e5c40001 	strb	r0, [r4, #1]
        258348:	e1a00440 	mov	r0, r0, asr #8
        25834c:	e5c40000 	strb	r0, [r4]
        258350:	e2844002 	add	r4, r4, #2	; 0x2
        258354:	e2566001 	subs	r6, r6, #1	; 0x1
        258358:	5affffe0 	bpl	2582e0 <TSortingTable::ConvertTextToLowestSort( const(unsigned short *, long))+0x24>
        25835c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSortingTable::CalcSize( const(void))
 * Address: 00258360
 */
TSortingTable::CalcSize( const(void)) {
    /*
        258360:	e92d4000 	stmdb	sp!, {lr}
        258364:	e5901020 	ldr	r1, [r0, #32]	; fField32
        258368:	e1a01841 	mov	r1, r1, asr #16
        25836c:	e0812081 	add	r2, r1, r1, lsl #1
        258370:	e1a02082 	mov	r2, r2, lsl #1
        258374:	e5901026 	ldr	r1, [r0, #38]	; fField38
        258378:	e1a01841 	mov	r1, r1, asr #16
        25837c:	e0821181 	add	r1, r2, r1, lsl #3
        258380:	e590202a 	ldr	r2, [r0, #42]	; fField42
        258384:	e1a02842 	mov	r2, r2, asr #16
        258388:	e0811082 	add	r1, r1, r2, lsl #1
        25838c:	e2812044 	add	r2, r1, #68	; 0x44
        258390:	e3a01000 	mov	r1, #0	; 0x0
        258394:	e5903006 	ldr	r3, [r0, #6]	; fField6
        258398:	e1a03843 	mov	r3, r3, asr #16
        25839c:	e3530000 	cmp	r3, #0	; 0x0
        2583a0:	da00000c 	ble	2583d8 <TSortingTable::CalcSize( const(void))+0x78>
        2583a4:	e080c101 	add	ip, r0, r1, lsl #2
        2583a8:	e28cc008 	add	ip, ip, #8	; 0x8
        2583ac:	e59ce002 	ldr	lr, [ip, #2]
        2583b0:	e1a0e82e 	mov	lr, lr, lsr #16
        2583b4:	e59cc000 	ldr	ip, [ip]
        2583b8:	e04ec82c 	sub	ip, lr, ip, lsr #16
        2583bc:	e28cc001 	add	ip, ip, #1	; 0x1
        2583c0:	e082210c 	add	r2, r2, ip, lsl #2
        2583c4:	e2811001 	add	r1, r1, #1	; 0x1
        2583c8:	e1a01801 	mov	r1, r1, lsl #16
        2583cc:	e1a01841 	mov	r1, r1, asr #16
        2583d0:	e1530001 	cmp	r3, r1
        2583d4:	cafffff2 	bgt	2583a4 <TSortingTable::CalcSize( const(void))+0x44>
        2583d8:	e1a00002 	mov	r0, r2
        2583dc:	e8bd8000 	ldmia	sp!, {pc}
    */
}

