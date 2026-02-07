#include "include/TXRulerBitMapCluster.h"

/* VTable Layout:
 * [0] 0x1b99c80
 * [1] 0x1b98c74
 * [2] 0x38c294
 * [3] 0x1be632c
 * [4] 0x1ba10c0
 * [5] 0x1be52dc
 * [6] 0x1be847c
 * [7] 0x1be633c
 * [8] 0x1a06370
 * [9] 0x1a0636c
 * [10] 0x1beb580
 * [11] 0x1a073c0
 * [12] 0x1bac678
 * [13] 0x1bae728
 * [14] 0x1bb6b44
 * [15] 0x1bb7b88
 * [16] 0x1bb6b7c
 * [17] 0x1bb6b70
 * [18] 0x1be847c
 * [19] 0x1bb9c98
 * [20] 0x38c2c4
 * [21] 0x1be632c
 * [22] 0x1a8a524
 * [23] 0x1a8a51c
 * [24] 0x1be847c
 * [25] 0x1a88474
 * [26] 0x1bb7b80
 * [27] 0x1a8a528
 * [28] 0x1bb6b6c
 * [29] 0x1a99c88
 * [30] 0x1bb7bfc
 * [31] 0x1bb9cf0
 * [32] 0x1bf18a4
 * [33] 0x1aa31bc
 * [34] 0x1a9ef48
 * [35] 0x1bb8c44
 * [36] 0x1bb9cb4
 * [37] 0x1bb6b58
 * [38] 0x1bb7bcc
 * [39] 0x1a9ce4c
 * [40] 0x1bb9cf8
 * [41] 0x1a073d4
 * [42] 0x1a073c4
 * [43] 0x1a08448
 * [44] 0x1a073b4
 * [45] 0x1bb7bec
 * [46] 0x1b95aac
 * [47] 0x1b852e4
 * [48] 0x1b95ab0
 * [49] 0x1b95ad8
 * [50] 0x1b95adc
 * [51] 0x1b95ae0
 * [52] 0x1a0427c
 * [53] 0x1a0427c
 * [54] 0x1b95ac8
 * [55] 0x1b95af0
 * [56] 0x1b8e70c
 * [57] 0x1b95abc
 * [58] 0x1b95ac0
 * [59] 0x1b95ac4
 * [60] 0x1b95af8
 * [61] 0x1b8e710
 * [62] 0x1b8e718
 * [63] 0x1b8e71c
 * [64] 0x1b8e714
 * [65] 0x1b96b00
 * [66] 0x1b96b04
 * [67] 0x1b95ab4
 * [68] 0x1b95ab8
 * [69] 0x1b95acc
 * [70] 0x1b95ad0
 * [71] 0x1b95aec
 * [72] 0x38c2f4
 * [73] 0x1bc427c
 * [74] 0x1bc631c
 * [75] 0x1bd2978
 * [76] 0x1bcf7b4
 * [77] 0x1bc4234
 * [78] 0x1a9ad18
 * [79] 0x1aa000c
 * [80] 0x1a739d4
 * [81] 0x1a74a48
 * [82] 0x1a74a44
 * [83] 0x1a74a38
 * [84] 0x1be847c
 * [85] 0x38c324
 * [86] 0x1be632c
 * [87] 0x1a0630c
 * [88] 0x1a06304
 * [89] 0x1be847c
 * [90] 0x38c354
 * [91] 0x1be632c
 * [92] TTestAgentEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * [93] TTestAgentEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * [94] 0x1b831cc
 * [95] 0x1b13990
 * [96] 0x38c384
 * [97] 0x1be632c
 * [98] 0x1ba10c0
 * [99] 0x1b35ad4
 */

/**
 * Symbol: TXRulerBitMapCluster::__ct(void)
 * Address: 00245110
 */
TXRulerBitMapCluster::TXRulerBitMapCluster(void) {
    /*
        245110:	e1a0c00d 	mov	ip, sp
        245114:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        245118:	e24cb004 	sub	fp, ip, #4	; 0x4
        24511c:	e3300000 	teq	r0, #0	; 0x0
        245120:	1a000003 	bne	245134 <TXRulerBitMapCluster::__ct(void)+0x24>
        245124:	e3a00024 	mov	r0, #36	; 0x24
        245128:	eb662582 	bl	1bce738 <$__nw(unsigned int)>
        24512c:	e3300000 	teq	r0, #0	; 0x0
        245130:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        245134:	e59f1004 	ldr	r1, [pc, #4]	; 245140 <TXRulerBitMapCluster::__ct(void)+0x30>	; fField4
        245138:	e5801000 	str	r1, [r0]
        24513c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        245140:	0001f09c 	muleq	r1, ip, r0
    */
}

/**
 * Symbol: TXRulerBitMapCluster::IRulerBitMapCluster(int, int, int, int)
 * Address: 00245144
 */
TXRulerBitMapCluster::IRulerBitMapCluster(int, int, int, int) {
    /*
        245144:	e59dc000 	ldr	ip, [sp]
        245148:	e2800018 	add	r0, r0, #24	; 0x18
        24514c:	e880000a 	stmia	r0, {r1, r3}
        245150:	e5802008 	str	r2, [r0, #8]	; fField8
        245154:	e2400018 	sub	r0, r0, #24	; 0x18
        245158:	e0621182 	rsb	r1, r2, r2, lsl #3
        24515c:	e59f2038 	ldr	r2, [pc, #38]	; 24519c <TXRulerBitMapCluster::IRulerBitMapCluster(int, int, int, int)+0x58>
        245160:	e5922000 	ldr	r2, [r2]
        245164:	e0821101 	add	r1, r2, r1, lsl #2
        245168:	e2811008 	add	r1, r1, #8	; 0x8
        24516c:	e5912006 	ldr	r2, [r1, #6]	; fField6
        245170:	e1a02842 	mov	r2, r2, asr #16
        245174:	e5913002 	ldr	r3, [r1, #2]	; fField2
        245178:	e0422843 	sub	r2, r2, r3, asr #16
        24517c:	e580200c 	str	r2, [r0, #12]	; fField12
        245180:	e5912004 	ldr	r2, [r1, #4]	; fField4
        245184:	e1a02842 	mov	r2, r2, asr #16
        245188:	e5911000 	ldr	r1, [r1]
        24518c:	e0421841 	sub	r1, r2, r1, asr #16
        245190:	e280000c 	add	r0, r0, #12	; 0xc
        245194:	e9a01002 	stmib	r0!, {r1, ip}
        245198:	e1a0f00e 	mov	pc, lr
        24519c:	0c104e74 	ldceq	14, cr4, [r0], -#464
    */
}

/**
 * Symbol: TXRulerBitMapCluster::SetTopLeft(int, int)
 * Address: 002451a0
 */
TXRulerBitMapCluster::SetTopLeft(int, int) {
    /*
        2451a0:	e9a00006 	stmib	r0!, {r1, r2}
        2451a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: CalcDimensions__20TXRulerBitMapClusterCFPiT1
 * Address: 002451a8
 */
void TXRulerBitMapCluster::CalcDimensions() {
    /*
        2451a8:	e92d4000 	stmdb	sp!, {lr}
        2451ac:	e590301c 	ldr	r3, [r0, #28]	; fField28
        2451b0:	e243e001 	sub	lr, r3, #1	; 0x1
        2451b4:	e590c014 	ldr	ip, [r0, #20]	; fField20
        2451b8:	e00c0c9e 	mul	ip, lr, ip
        2451bc:	e590e00c 	ldr	lr, [r0, #12]	; fField12
        2451c0:	e023c39e 	mla	r3, lr, r3, ip
        2451c4:	e5813000 	str	r3, [r1]
        2451c8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2451cc:	e5820000 	str	r0, [r2]
        2451d0:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TXRulerBitMapCluster::CalcBitMapRect( const(int, Rect *))
 * Address: 002451d4
 */
TXRulerBitMapCluster::CalcBitMapRect( const(int, Rect *)) {
    /*
        2451d4:	e5903004 	ldr	r3, [r0, #4]	; fField4
        2451d8:	e5c23001 	strb	r3, [r2, #1]
        2451dc:	e1a03443 	mov	r3, r3, asr #8
        2451e0:	e5c23000 	strb	r3, [r2]
        2451e4:	e5903014 	ldr	r3, [r0, #20]	; fField20
        2451e8:	e590c00c 	ldr	ip, [r0, #12]	; fField12
        2451ec:	e08cc003 	add	ip, ip, r3
        2451f0:	e5903018 	ldr	r3, [r0, #24]	; fField24
        2451f4:	e0411003 	sub	r1, r1, r3
        2451f8:	e0030c91 	mul	r3, r1, ip
        2451fc:	e5901008 	ldr	r1, [r0, #8]	; fField8
        245200:	e0831001 	add	r1, r3, r1
        245204:	e5c21003 	strb	r1, [r2, #3]
        245208:	e1a01441 	mov	r1, r1, asr #8
        24520c:	e5c21002 	strb	r1, [r2, #2]	; fField2
        245210:	e5903010 	ldr	r3, [r0, #16]	; fField16
        245214:	e5921000 	ldr	r1, [r2]
        245218:	e1a01821 	mov	r1, r1, lsr #16
        24521c:	e0831001 	add	r1, r3, r1
        245220:	e5c21005 	strb	r1, [r2, #5]
        245224:	e1a01441 	mov	r1, r1, asr #8
        245228:	e5c21004 	strb	r1, [r2, #4]	; fField4
        24522c:	e5921002 	ldr	r1, [r2, #2]	; fField2
        245230:	e1a01821 	mov	r1, r1, lsr #16
        245234:	e590000c 	ldr	r0, [r0, #12]	; fField12
        245238:	e0810000 	add	r0, r1, r0
        24523c:	e5c20007 	strb	r0, [r2, #7]
        245240:	e1a00440 	mov	r0, r0, asr #8
        245244:	e5c20006 	strb	r0, [r2, #6]	; fField6
        245248:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXRulerBitMapCluster::CalcDragBitMapRect( const(int, Rect *))
 * Address: 0024524c
 */
TXRulerBitMapCluster::CalcDragBitMapRect( const(int, Rect *)) {
    /*
        24524c:	e1a0c00d 	mov	ip, sp
        245250:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        245254:	e24cb004 	sub	fp, ip, #4	; 0x4
        245258:	e1a05001 	mov	r5, r1
        24525c:	e1a04002 	mov	r4, r2
        245260:	eb654e84 	bl	1b98c78 <TXRulerBitMapCluster::$CalcBitMapRect( const(int, Rect *))>
        245264:	e0650185 	rsb	r0, r5, r5, lsl #3
        245268:	e59f10ac 	ldr	r1, [pc, #ac]	; 24531c <TXRulerBitMapCluster::CalcDragBitMapRect( const(int, Rect *))+0xd0>
        24526c:	e5911000 	ldr	r1, [r1]
        245270:	e0810100 	add	r0, r1, r0, lsl #2
        245274:	e2800008 	add	r0, r0, #8	; 0x8
        245278:	e5901004 	ldr	r1, [r0, #4]	; fField4
        24527c:	e1a01841 	mov	r1, r1, asr #16
        245280:	e5902000 	ldr	r2, [r0]
        245284:	e0411842 	sub	r1, r1, r2, asr #16
        245288:	e5902006 	ldr	r2, [r0, #6]	; fField6
        24528c:	e1a02842 	mov	r2, r2, asr #16
        245290:	e5900002 	ldr	r0, [r0, #2]	; fField2
        245294:	e0420840 	sub	r0, r2, r0, asr #16
        245298:	e5942004 	ldr	r2, [r4, #4]	; fField4
        24529c:	e5943000 	ldr	r3, [r4]
        2452a0:	e1a03843 	mov	r3, r3, asr #16
        2452a4:	e063c842 	rsb	ip, r3, r2, asr #16
        2452a8:	e594e006 	ldr	lr, [r4, #6]	; fField6
        2452ac:	e5942002 	ldr	r2, [r4, #2]	; fField2
        2452b0:	e1a02842 	mov	r2, r2, asr #16
        2452b4:	e062e84e 	rsb	lr, r2, lr, asr #16
        2452b8:	e04cc001 	sub	ip, ip, r1
        2452bc:	e08ccfac 	add	ip, ip, ip, lsr #31
        2452c0:	e08330cc 	add	r3, r3, ip, asr #1
        2452c4:	e5c43001 	strb	r3, [r4, #1]
        2452c8:	e1a03443 	mov	r3, r3, asr #8
        2452cc:	e5c43000 	strb	r3, [r4]
        2452d0:	e04e3000 	sub	r3, lr, r0
        2452d4:	e0833fa3 	add	r3, r3, r3, lsr #31
        2452d8:	e08220c3 	add	r2, r2, r3, asr #1
        2452dc:	e5c42003 	strb	r2, [r4, #3]
        2452e0:	e1a02442 	mov	r2, r2, asr #8
        2452e4:	e5c42002 	strb	r2, [r4, #2]	; fField2
        2452e8:	e5942000 	ldr	r2, [r4]
        2452ec:	e1a02822 	mov	r2, r2, lsr #16
        2452f0:	e0821001 	add	r1, r2, r1
        2452f4:	e5c41005 	strb	r1, [r4, #5]
        2452f8:	e1a01441 	mov	r1, r1, asr #8
        2452fc:	e5c41004 	strb	r1, [r4, #4]	; fField4
        245300:	e5941002 	ldr	r1, [r4, #2]	; fField2
        245304:	e1a01821 	mov	r1, r1, lsr #16
        245308:	e0810000 	add	r0, r1, r0
        24530c:	e5c40007 	strb	r0, [r4, #7]
        245310:	e1a00440 	mov	r0, r0, asr #8
        245314:	e5c40006 	strb	r0, [r4, #6]	; fField6
        245318:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        24531c:	0c104e74 	ldceq	14, cr4, [r0], -#464
    */
}

/**
 * Symbol: TXRulerBitMapCluster::Draw(TXRuler const *)
 * Address: 00245320
 */
TXRulerBitMapCluster::Draw(TXRuler const *) {
    /*
        245320:	e1a0c00d 	mov	ip, sp
        245324:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        245328:	e24cb004 	sub	fp, ip, #4	; 0x4
        24532c:	e1a04000 	mov	r4, r0
        245330:	e280501c 	add	r5, r0, #28	; 0x1c
        245334:	e8950021 	ldmia	r5, {r0, r5}
        245338:	e0856000 	add	r6, r5, r0
        24533c:	e59f8070 	ldr	r8, [pc, #70]	; 2453b4 <TXRulerBitMapCluster::Draw(TXRuler const *)+0x94>
        245340:	e1550006 	cmp	r5, r6
        245344:	a91ba9f0 	ldmgedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        245348:	e24dd008 	sub	sp, sp, #8	; 0x8
        24534c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        245350:	e0451000 	sub	r1, r5, r0
        245354:	e5940018 	ldr	r0, [r4, #24]	; fField24
        245358:	e0811000 	add	r1, r1, r0
        24535c:	e1a0200d 	mov	r2, sp
        245360:	e1a00004 	mov	r0, r4
        245364:	eb654e43 	bl	1b98c78 <TXRulerBitMapCluster::$CalcBitMapRect( const(int, Rect *))>
        245368:	e24dd004 	sub	sp, sp, #4	; 0x4
        24536c:	e0650185 	rsb	r0, r5, r5, lsl #3
        245370:	e5981000 	ldr	r1, [r8]
        245374:	e0817100 	add	r7, r1, r0, lsl #2
        245378:	e1a0000d 	mov	r0, sp
        24537c:	eb66a908 	bl	1bef7a4 <$GetPort(GrafPort **)>
        245380:	e3a03000 	mov	r3, #0	; 0x0
        245384:	e3a02000 	mov	r2, #0	; 0x0
        245388:	e92d000c 	stmdb	sp!, {r2, r3}
        24538c:	e2872008 	add	r2, r7, #8	; 0x8
        245390:	e28d300c 	add	r3, sp, #12	; 0xc
        245394:	e1a00007 	mov	r0, r7
        245398:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        24539c:	eb66a8ff 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
        2453a0:	e28dd014 	add	sp, sp, #20	; 0x14
        2453a4:	e2855001 	add	r5, r5, #1	; 0x1
        2453a8:	e1550006 	cmp	r5, r6
        2453ac:	baffffe5 	blt	245348 <TXRulerBitMapCluster::Draw(TXRuler const *)+0x28>
        2453b0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2453b4:	0c104e74 	ldceq	14, cr4, [r0], -#464
    */
}

/**
 * Symbol: TXRulerBitMapCluster::InvertBitMap( const(int))
 * Address: 002453b8
 */
TXRulerBitMapCluster::InvertBitMap( const(int)) {
    /*
        2453b8:	e1a0c00d 	mov	ip, sp
        2453bc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2453c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2453c4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2453c8:	e1a0200d 	mov	r2, sp
        2453cc:	eb654e29 	bl	1b98c78 <TXRulerBitMapCluster::$CalcBitMapRect( const(int, Rect *))>
        2453d0:	e1a0000d 	mov	r0, sp
        2453d4:	e3a02002 	mov	r2, #2	; 0x2
        2453d8:	e3a01002 	mov	r1, #2	; 0x2
        2453dc:	eb642d17 	bl	1b50840 <$InsetRect__FP4RectlT2>
        2453e0:	e1a0000d 	mov	r0, sp
        2453e4:	eb642d1e 	bl	1b50864 <$InvertRect(Rect *)>
        2453e8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXRulerBitMapCluster::PointToBitMapIndex( const(Point))
 * Address: 002453ec
 */
TXRulerBitMapCluster::PointToBitMapIndex( const(Point)) {
    /*
        2453ec:	e1a0c00d 	mov	ip, sp
        2453f0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2453f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2453f8:	e1a04001 	mov	r4, r1
        2453fc:	e1a05000 	mov	r5, r0
        245400:	e3a09902 	mov	r9, #32768	; 0x8000
        245404:	e2499001 	sub	r9, r9, #1	; 0x1
        245408:	e3e08000 	mvn	r8, #0	; 0x0
        24540c:	e5906018 	ldr	r6, [r0, #24]	; fField24
        245410:	e590001c 	ldr	r0, [r0, #28]	; fField28
        245414:	e0867000 	add	r7, r6, r0
        245418:	e1560007 	cmp	r6, r7
        24541c:	aa000012 	bge	24546c <TXRulerBitMapCluster::PointToBitMapIndex( const(Point))+0x80>
        245420:	e24dd008 	sub	sp, sp, #8	; 0x8
        245424:	e1a0200d 	mov	r2, sp
        245428:	e1a01006 	mov	r1, r6
        24542c:	e1a00005 	mov	r0, r5
        245430:	eb654e10 	bl	1b98c78 <TXRulerBitMapCluster::$CalcBitMapRect( const(int, Rect *))>
        245434:	e1a0100d 	mov	r1, sp
        245438:	e1a00004 	mov	r0, r4
        24543c:	ebfff77f 	bl	243240 <TXRulerRange::ValidateRulerRange(long, long)+0x108>
        245440:	e3500000 	cmp	r0, #0	; 0x0
        245444:	01a00006 	moveq	r0, r6
        245448:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        24544c:	da000002 	ble	24545c <TXRulerBitMapCluster::PointToBitMapIndex( const(Point))+0x70>
        245450:	e1500009 	cmp	r0, r9
        245454:	b1a09000 	movlt	r9, r0
        245458:	b1a08006 	movlt	r8, r6
        24545c:	e28dd008 	add	sp, sp, #8	; 0x8
        245460:	e2866001 	add	r6, r6, #1	; 0x1
        245464:	e1560007 	cmp	r6, r7
        245468:	baffffec 	blt	245420 <TXRulerBitMapCluster::PointToBitMapIndex( const(Point))+0x34>
        24546c:	e1a00008 	mov	r0, r8
        245470:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

