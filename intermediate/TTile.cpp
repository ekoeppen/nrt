#include "include/TTile.h"

/**
 * Symbol: TTile::__ct(PixelMap *, RefVar const &)
 * Address: 002540c0
 */
TTile::TTile(PixelMap *, RefVar const &) {
    /*
        2540c0:	e1a0c00d 	mov	ip, sp
        2540c4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2540c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2540cc:	e1b04000 	movs	r4, r0
        2540d0:	e1a05001 	mov	r5, r1
        2540d4:	e1a06002 	mov	r6, r2
        2540d8:	1a000003 	bne	2540ec <TTile::__ct(PixelMap *, RefVar const &)+0x2c>
        2540dc:	e3a000c0 	mov	r0, #192	; 0xc0
        2540e0:	eb65e994 	bl	1bce738 <$__nw(unsigned int)>
        2540e4:	e1b04000 	movs	r4, r0
        2540e8:	0a000065 	beq	254284 <TTile::__ct(PixelMap *, RefVar const &)+0x1c4>
        2540ec:	e3a00002 	mov	r0, #2	; 0x2
        2540f0:	eb65b815 	bl	1bc214c <$AllocateRefHandle(long)>
        2540f4:	e58400b8 	str	r0, [r4, #184]	; fField184
        2540f8:	e3a00002 	mov	r0, #2	; 0x2
        2540fc:	eb65b812 	bl	1bc214c <$AllocateRefHandle(long)>
        254100:	e58400bc 	str	r0, [r4, #188]	; fField188
        254104:	e5950004 	ldr	r0, [r5, #4]	; fField4
        254108:	e1a00840 	mov	r0, r0, asr #16
        25410c:	e1a02140 	mov	r2, r0, asr #2
        254110:	e5842000 	str	r2, [r4]
        254114:	e595000c 	ldr	r0, [r5, #12]	; fField12
        254118:	e1a00840 	mov	r0, r0, asr #16
        25411c:	e5951008 	ldr	r1, [r5, #8]	; fField8
        254120:	e0400841 	sub	r0, r0, r1, asr #16
        254124:	e5840004 	str	r0, [r4, #4]	; fField4
        254128:	e5950014 	ldr	r0, [r5, #20]	; fField20
        25412c:	e1a00840 	mov	r0, r0, asr #16
        254130:	e33000c4 	teq	r0, #196	; 0xc4
        254134:	15950016 	ldrne	r0, [r5, #22]
        254138:	11a00840 	movne	r0, r0, asr #16
        25413c:	133000c4 	teqne	r0, #196	; 0xc4
        254140:	03a00024 	moveq	r0, #36	; 0x24
        254144:	13a0001b 	movne	r0, #27	; 0x1b
        254148:	e584000c 	str	r0, [r4, #12]	; fField12
        25414c:	e5951004 	ldr	r1, [r5, #4]	; fField4
        254150:	e1a01841 	mov	r1, r1, asr #16
        254154:	e3a0303f 	mov	r3, #63	; 0x3f
        254158:	e0931181 	adds	r1, r3, r1, lsl #3
        25415c:	4281103f 	addmi	r1, r1, #63	; 0x3f
        254160:	e1a01341 	mov	r1, r1, asr #6
        254164:	e5841008 	str	r1, [r4, #8]	; fField8
        254168:	e2413001 	sub	r3, r1, #1	; 0x1
        25416c:	e0622081 	rsb	r2, r2, r1, lsl #1
        254170:	e3a01002 	mov	r1, #2	; 0x2
        254174:	e0412002 	sub	r2, r1, r2
        254178:	e5842014 	str	r2, [r4, #20]	; fField20
        25417c:	e0411002 	sub	r1, r1, r2
        254180:	e3a08000 	mov	r8, #0	; 0x0
        254184:	e3500000 	cmp	r0, #0	; 0x0
        254188:	e5841018 	str	r1, [r4, #24]	; fField24
        25418c:	e5843010 	str	r3, [r4, #16]	; fField16
        254190:	da00001c 	ble	254208 <TTile::__ct(PixelMap *, RefVar const &)+0x148>
        254194:	e3a0ac02 	mov	sl, #512	; 0x200
        254198:	e3a070a8 	mov	r7, #168	; 0xa8
        25419c:	e2477b07 	sub	r7, r7, #7168	; 0x1c00
        2541a0:	e59f90e4 	ldr	r9, [pc, #e4]	; 25428c <TTile::__ct(PixelMap *, RefVar const &)+0x1cc>
        2541a4:	e1a0000a 	mov	r0, sl
        2541a8:	eb6637e4 	bl	1be2140 <$NewPtr>
        2541ac:	e0841108 	add	r1, r4, r8, lsl #2
        2541b0:	e5a1001c 	str	r0, [r1, #28]!	; fField28
        2541b4:	e3300000 	teq	r0, #0	; 0x0
        2541b8:	1a00000e 	bne	2541f8 <TTile::__ct(PixelMap *, RefVar const &)+0x138>
        2541bc:	e2588001 	subs	r8, r8, #1	; 0x1
        2541c0:	4a000004 	bmi	2541d8 <TTile::__ct(PixelMap *, RefVar const &)+0x118>
        2541c4:	e0840108 	add	r0, r4, r8, lsl #2
        2541c8:	e590001c 	ldr	r0, [r0, #28]	; fField28
        2541cc:	eb6633b8 	bl	1be10b4 <$DisposPtr>
        2541d0:	e2588001 	subs	r8, r8, #1	; 0x1
        2541d4:	5afffffa 	bpl	2541c4 <TTile::__ct(PixelMap *, RefVar const &)+0x104>
        2541d8:	e3a01003 	mov	r1, #3	; 0x3
        2541dc:	e1a00007 	mov	r0, r7
        2541e0:	eb60f9e2 	bl	1a92970 <$ErrorNotify__FlT1>
        2541e4:	e3a02000 	mov	r2, #0	; 0x0
        2541e8:	e3a010e9 	mov	r1, #233	; 0xe9
        2541ec:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2541f0:	e5990000 	ldr	r0, [r9]
        2541f4:	eb663be8 	bl	1be319c <$Throw>
        2541f8:	e2888001 	add	r8, r8, #1	; 0x1
        2541fc:	e594000c 	ldr	r0, [r4, #12]	; fField12
        254200:	e1500008 	cmp	r0, r8
        254204:	caffffe6 	bgt	2541a4 <TTile::__ct(PixelMap *, RefVar const &)+0xe4>
        254208:	e28410b0 	add	r1, r4, #176	; 0xb0
        25420c:	e28400ac 	add	r0, r4, #172	; 0xac
        254210:	e1a02005 	mov	r2, r5
        254214:	eb630203 	bl	1b14a28 <$VAddrToStore(TStore **, unsigned long *, unsigned long)>
        254218:	e3a00000 	mov	r0, #0	; 0x0
        25421c:	e58400b4 	str	r0, [r4, #180]	; fField180
        254220:	e5960000 	ldr	r0, [r6]
        254224:	e5900000 	ldr	r0, [r0]
        254228:	e3300002 	teq	r0, #2	; 0x2
        25422c:	0a000014 	beq	254284 <TTile::__ct(PixelMap *, RefVar const &)+0x1c4>
        254230:	e59f7058 	ldr	r7, [pc, #58]	; 254290 <TTile::__ct(PixelMap *, RefVar const &)+0x1d0>
        254234:	e5971000 	ldr	r1, [r7]
        254238:	e5911000 	ldr	r1, [r1]
        25423c:	eb65c001 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
        254240:	e3300000 	teq	r0, #0	; 0x0
        254244:	0a00000e 	beq	254284 <TTile::__ct(PixelMap *, RefVar const &)+0x1c4>
        254248:	e3a00001 	mov	r0, #1	; 0x1
        25424c:	e58400b4 	str	r0, [r4, #180]	; fField180
        254250:	e28450b8 	add	r5, r4, #184	; 0xb8
        254254:	e5970000 	ldr	r0, [r7]
        254258:	e5901000 	ldr	r1, [r0]
        25425c:	e5960000 	ldr	r0, [r6]
        254260:	e5900000 	ldr	r0, [r0]
        254264:	eb65bffd 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        254268:	e5951000 	ldr	r1, [r5]
        25426c:	e28450bc 	add	r5, r4, #188	; 0xbc
        254270:	e5810000 	str	r0, [r1]
        254274:	e3a00001 	mov	r0, #1	; 0x1
        254278:	eb611ec7 	bl	1a9bd9c <$MakeArray(long)>
        25427c:	e5951000 	ldr	r1, [r5]
        254280:	e5810000 	str	r0, [r1]
        254284:	e1a00004 	mov	r0, r4
        254288:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        25428c:	00371318 	eoreqs	r1, r7, r8, lsl r3
        254290:	00682288 	rsbeq	r2, r8, r8, lsl #5
    */
}

/**
 * Symbol: TTile::__dt(void)
 * Address: 00254294
 */
TTile::~TTile(void) {
    /*
        254294:	e1a0c00d 	mov	ip, sp
        254298:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25429c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2542a0:	e1a04000 	mov	r4, r0
        2542a4:	e1a05001 	mov	r5, r1
        2542a8:	e590001c 	ldr	r0, [r0, #28]	; fField28
        2542ac:	e3300000 	teq	r0, #0	; 0x0
        2542b0:	0a00000a 	beq	2542e0 <TTile::__dt(void)+0x4c>
        2542b4:	e3a06000 	mov	r6, #0	; 0x0
        2542b8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2542bc:	e3500000 	cmp	r0, #0	; 0x0
        2542c0:	da000006 	ble	2542e0 <TTile::__dt(void)+0x4c>
        2542c4:	e0840106 	add	r0, r4, r6, lsl #2
        2542c8:	e590001c 	ldr	r0, [r0, #28]	; fField28
        2542cc:	eb663378 	bl	1be10b4 <$DisposPtr>
        2542d0:	e2866001 	add	r6, r6, #1	; 0x1
        2542d4:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2542d8:	e1500006 	cmp	r0, r6
        2542dc:	cafffff8 	bgt	2542c4 <TTile::__dt(void)+0x30>
        2542e0:	e59400bc 	ldr	r0, [r4, #188]	; fField188
        2542e4:	eb65bbb4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2542e8:	e59400b8 	ldr	r0, [r4, #184]	; fField184
        2542ec:	eb65bbb2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2542f0:	e3150001 	tst	r5, #1	; 0x1
        2542f4:	11a00004 	movne	r0, r4
        2542f8:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        2542fc:	1a65e4f7 	bne	1bcd6e0 <$__dl(void *)>
        254300:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TTile::TileBuffer(unsigned char *)
 * Address: 00254304
 */
TTile::TileBuffer(unsigned char *) {
    /*
        254304:	e1a0c00d 	mov	ip, sp
        254308:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        25430c:	e24cb004 	sub	fp, ip, #4	; 0x4
        254310:	e1a04000 	mov	r4, r0
        254314:	e5902004 	ldr	r2, [r0, #4]	; fField4
        254318:	e3520040 	cmp	r2, #64	; 0x40
        25431c:	a3a07040 	movge	r7, #64	; 0x40
        254320:	b1a07002 	movlt	r7, r2
        254324:	e5943000 	ldr	r3, [r4]
        254328:	e0000793 	mul	r0, r3, r7
        25432c:	e2522040 	subs	r2, r2, #64	; 0x40
        254330:	e5842004 	str	r2, [r4, #4]	; fField4
        254334:	43a02000 	movmi	r2, #0	; 0x0
        254338:	45842004 	strmi	r2, [r4, #4]	; fField4
        25433c:	e3a02001 	mov	r2, #1	; 0x1
        254340:	e1a06001 	mov	r6, r1
        254344:	e3300000 	teq	r0, #0	; 0x0
        254348:	0a000006 	beq	254368 <TTile::TileBuffer(unsigned char *)+0x64>
        25434c:	e4913004 	ldr	r3, [r1], #4	; fField4
        254350:	e3330000 	teq	r3, #0	; 0x0
        254354:	1a000011 	bne	2543a0 <TTile::TileBuffer(unsigned char *)+0x9c>
        254358:	e2500001 	subs	r0, r0, #1	; 0x1
        25435c:	1afffffa 	bne	25434c <TTile::TileBuffer(unsigned char *)+0x48>
        254360:	e3320000 	teq	r2, #0	; 0x0
        254364:	0a00000d 	beq	2543a0 <TTile::TileBuffer(unsigned char *)+0x9c>
        254368:	e3a05000 	mov	r5, #0	; 0x0
        25436c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        254370:	e3500000 	cmp	r0, #0	; 0x0
        254374:	d91ba8f0 	ldmledb	fp, {r4, r5, r6, r7, fp, sp, pc}
        254378:	e3a06c02 	mov	r6, #512	; 0x200
        25437c:	e0840105 	add	r0, r4, r5, lsl #2
        254380:	e590001c 	ldr	r0, [r0, #28]	; fField28
        254384:	e1a01006 	mov	r1, r6
        254388:	eb662f23 	bl	1be001c <$ZeroBytes>
        25438c:	e2855001 	add	r5, r5, #1	; 0x1
        254390:	e5940008 	ldr	r0, [r4, #8]	; fField8
        254394:	e1500005 	cmp	r0, r5
        254398:	cafffff7 	bgt	25437c <TTile::TileBuffer(unsigned char *)+0x78>
        25439c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2543a0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2543a4:	e1a00100 	mov	r0, r0, lsl #2
        2543a8:	eb65e8e2 	bl	1bce738 <$__nw(unsigned int)>
        2543ac:	e1b05000 	movs	r5, r0
        2543b0:	1a000009 	bne	2543dc <TTile::TileBuffer(unsigned char *)+0xd8>
        2543b4:	e3a01003 	mov	r1, #3	; 0x3
        2543b8:	e3a000a8 	mov	r0, #168	; 0xa8
        2543bc:	e2400b07 	sub	r0, r0, #7168	; 0x1c00
        2543c0:	eb60f96a 	bl	1a92970 <$ErrorNotify__FlT1>
        2543c4:	e59f00cc 	ldr	r0, [pc, #cc]	; 254498 <TTile::TileBuffer(unsigned char *)+0x194>
        2543c8:	e5900000 	ldr	r0, [r0]
        2543cc:	e3a02000 	mov	r2, #0	; 0x0
        2543d0:	e3a010e9 	mov	r1, #233	; 0xe9
        2543d4:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2543d8:	eb663b6f 	bl	1be319c <$Throw>
        2543dc:	e3a00000 	mov	r0, #0	; 0x0
        2543e0:	e5941008 	ldr	r1, [r4, #8]	; fField8
        2543e4:	e3510000 	cmp	r1, #0	; 0x0
        2543e8:	da000006 	ble	254408 <TTile::TileBuffer(unsigned char *)+0x104>
        2543ec:	e0841100 	add	r1, r4, r0, lsl #2
        2543f0:	e591101c 	ldr	r1, [r1, #28]	; fField28
        2543f4:	e7851100 	str	r1, [r5, r0, lsl #2]
        2543f8:	e2800001 	add	r0, r0, #1	; 0x1
        2543fc:	e5941008 	ldr	r1, [r4, #8]	; fField8
        254400:	e1510000 	cmp	r1, r0
        254404:	cafffff8 	bgt	2543ec <TTile::TileBuffer(unsigned char *)+0xe8>
        254408:	e3370000 	teq	r7, #0	; 0x0
        25440c:	0a00001b 	beq	254480 <TTile::TileBuffer(unsigned char *)+0x17c>
        254410:	e3a00000 	mov	r0, #0	; 0x0
        254414:	e5941010 	ldr	r1, [r4, #16]	; fField16
        254418:	e3510000 	cmp	r1, #0	; 0x0
        25441c:	da00000a 	ble	25444c <TTile::TileBuffer(unsigned char *)+0x148>
        254420:	e7951100 	ldr	r1, [r5, r0, lsl #2]
        254424:	e3a02002 	mov	r2, #2	; 0x2
        254428:	e4963004 	ldr	r3, [r6], #4	; fField4
        25442c:	e2522001 	subs	r2, r2, #1	; 0x1
        254430:	e4813004 	str	r3, [r1], #4	; fField4
        254434:	1afffffb 	bne	254428 <TTile::TileBuffer(unsigned char *)+0x124>
        254438:	e7851100 	str	r1, [r5, r0, lsl #2]
        25443c:	e2800001 	add	r0, r0, #1	; 0x1
        254440:	e5941010 	ldr	r1, [r4, #16]	; fField16
        254444:	e1510000 	cmp	r1, r0
        254448:	cafffff4 	bgt	254420 <TTile::TileBuffer(unsigned char *)+0x11c>
        25444c:	e7951100 	ldr	r1, [r5, r0, lsl #2]
        254450:	e5942014 	ldr	r2, [r4, #20]	; fField20
        254454:	e3320000 	teq	r2, #0	; 0x0
        254458:	0a000003 	beq	25446c <TTile::TileBuffer(unsigned char *)+0x168>
        25445c:	e4963004 	ldr	r3, [r6], #4	; fField4
        254460:	e2522001 	subs	r2, r2, #1	; 0x1
        254464:	e4813004 	str	r3, [r1], #4	; fField4
        254468:	1afffffb 	bne	25445c <TTile::TileBuffer(unsigned char *)+0x158>
        25446c:	e5942018 	ldr	r2, [r4, #24]	; fField24
        254470:	e0811102 	add	r1, r1, r2, lsl #2
        254474:	e7851100 	str	r1, [r5, r0, lsl #2]
        254478:	e2577001 	subs	r7, r7, #1	; 0x1
        25447c:	1affffe3 	bne	254410 <TTile::TileBuffer(unsigned char *)+0x10c>
        254480:	e1a00005 	mov	r0, r5
        254484:	eb65e495 	bl	1bcd6e0 <$__dl(void *)>
        254488:	e28440a8 	add	r4, r4, #168	; 0xa8
        25448c:	e9b40003 	ldmib	r4!, {r0, r1}
        254490:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        254494:	ea62dc57 	b	1b0b5f8 <$FlushLargeObject(TStore *, unsigned long)>
        254498:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TTile::Untile(PixelMap *)
 * Address: 0025449c
 */
TTile::Untile(PixelMap *) {
    /*
        25449c:	e1a0c00d 	mov	ip, sp
        2544a0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2544a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2544a8:	e1a04000 	mov	r4, r0
        2544ac:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        2544b0:	e591000c 	ldr	r0, [r1, #12]	; fField12
        2544b4:	e1a00840 	mov	r0, r0, asr #16
        2544b8:	e5912008 	ldr	r2, [r1, #8]	; fField8
        2544bc:	e0505842 	subs	r5, r0, r2, asr #16
        2544c0:	4285503f 	addmi	r5, r5, #63	; 0x3f
        2544c4:	e1a05345 	mov	r5, r5, asr #6
        2544c8:	e58d5000 	str	r5, [sp]
        2544cc:	e5910004 	ldr	r0, [r1, #4]	; fField4
        2544d0:	e1a00840 	mov	r0, r0, asr #16
        2544d4:	e1a03300 	mov	r3, r0, lsl #6
        2544d8:	e58d300c 	str	r3, [sp, #12]	; fField12
        2544dc:	e3a0303f 	mov	r3, #63	; 0x3f
        2544e0:	e0937180 	adds	r7, r3, r0, lsl #3
        2544e4:	4287703f 	addmi	r7, r7, #63	; 0x3f
        2544e8:	e1a07347 	mov	r7, r7, asr #6
        2544ec:	e1a02140 	mov	r2, r0, asr #2
        2544f0:	e1a00307 	mov	r0, r7, lsl #6
        2544f4:	e98d0005 	stmib	sp, {r0, r2}
        2544f8:	e1a00001 	mov	r0, r1
        2544fc:	eb66e041 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        254500:	e1a0a000 	mov	sl, r0
        254504:	e1a09000 	mov	r9, r0
        254508:	e28410ac 	add	r1, r4, #172	; 0xac
        25450c:	e8910003 	ldmia	r1, {r0, r1}
        254510:	eb62dc38 	bl	1b0b5f8 <$FlushLargeObject(TStore *, unsigned long)>
        254514:	e2456001 	sub	r6, r5, #1	; 0x1
        254518:	e3350000 	teq	r5, #0	; 0x0
        25451c:	0a000050 	beq	254664 <TTile::Untile(PixelMap *)+0x1c8>
        254520:	e59d0000 	ldr	r0, [sp]
        254524:	e1a01800 	mov	r1, r0, lsl #16
        254528:	e58d1018 	str	r1, [sp, #24]	; fField24
        25452c:	e28410bc 	add	r1, r4, #188	; 0xbc
        254530:	e28400b8 	add	r0, r4, #184	; 0xb8
        254534:	e58d0010 	str	r0, [sp, #16]	; fField16
        254538:	e58d1014 	str	r1, [sp, #20]	; fField20
        25453c:	e3a01000 	mov	r1, #0	; 0x0
        254540:	e3a00000 	mov	r0, #0	; 0x0
        254544:	e59d5004 	ldr	r5, [sp, #4]	; fField4
        254548:	e3350000 	teq	r5, #0	; 0x0
        25454c:	0a000012 	beq	25459c <TTile::Untile(PixelMap *)+0x100>
        254550:	e0842101 	add	r2, r4, r1, lsl #2
        254554:	e592201c 	ldr	r2, [r2, #28]	; fField28
        254558:	e0823100 	add	r3, r2, r0, lsl #2
        25455c:	e3a02002 	mov	r2, #2	; 0x2
        254560:	e49ac004 	ldr	ip, [sl], #4	; fField4
        254564:	e2522001 	subs	r2, r2, #1	; 0x1
        254568:	e483c004 	str	ip, [r3], #4	; fField4
        25456c:	1afffffb 	bne	254560 <TTile::Untile(PixelMap *)+0xc4>
        254570:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        254574:	e0800002 	add	r0, r0, r2
        254578:	e3500080 	cmp	r0, #128	; 0x80
        25457c:	ba000004 	blt	254594 <TTile::Untile(PixelMap *)+0xf8>
        254580:	e2811001 	add	r1, r1, #1	; 0x1
        254584:	e1510007 	cmp	r1, r7
        254588:	a3a01000 	movge	r1, #0	; 0x0
        25458c:	a2800002 	addge	r0, r0, #2	; 0x2
        254590:	e2400080 	sub	r0, r0, #128	; 0x80
        254594:	e2555001 	subs	r5, r5, #1	; 0x1
        254598:	1affffec 	bne	254550 <TTile::Untile(PixelMap *)+0xb4>
        25459c:	e1a08009 	mov	r8, r9
        2545a0:	e3570000 	cmp	r7, #0	; 0x0
        2545a4:	da000008 	ble	2545cc <TTile::Untile(PixelMap *)+0x130>
        2545a8:	e0840105 	add	r0, r4, r5, lsl #2
        2545ac:	e590001c 	ldr	r0, [r0, #28]	; fField28
        2545b0:	e3a02c02 	mov	r2, #512	; 0x200
        2545b4:	e1a01008 	mov	r1, r8
        2545b8:	eb662a65 	bl	1bdef54 <$BlockMove>
        2545bc:	e2888c02 	add	r8, r8, #512	; 0x200
        2545c0:	e2855001 	add	r5, r5, #1	; 0x1
        2545c4:	e1550007 	cmp	r5, r7
        2545c8:	bafffff6 	blt	2545a8 <TTile::Untile(PixelMap *)+0x10c>
        2545cc:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2545d0:	e0899000 	add	r9, r9, r0
        2545d4:	e28410ac 	add	r1, r4, #172	; 0xac
        2545d8:	e8910003 	ldmia	r1, {r0, r1}
        2545dc:	eb62dc05 	bl	1b0b5f8 <$FlushLargeObject(TStore *, unsigned long)>
        2545e0:	e59400b4 	ldr	r0, [r4, #180]	; fField180
        2545e4:	e3300000 	teq	r0, #0	; 0x0
        2545e8:	0a00001a 	beq	254658 <TTile::Untile(PixelMap *)+0x1bc>
        2545ec:	e3160003 	tst	r6, #3	; 0x3
        2545f0:	1a000018 	bne	254658 <TTile::Untile(PixelMap *)+0x1bc>
        2545f4:	e59d0000 	ldr	r0, [sp]
        2545f8:	e0400006 	sub	r0, r0, r6
        2545fc:	e1a00800 	mov	r0, r0, lsl #16
        254600:	e59d1018 	ldr	r1, [sp, #24]	; fField24
        254604:	eb6632ad 	bl	1be10c0 <$FixedDivide>
        254608:	e3a01832 	mov	r1, #3276800	; 0x320000
        25460c:	eb6632ac 	bl	1be10c4 <$FixedMultiply>
        254610:	e28009ca 	add	r0, r0, #3309568	; 0x328000
        254614:	e1a00840 	mov	r0, r0, asr #16
        254618:	e1a00800 	mov	r0, r0, lsl #16
        25461c:	e1a00840 	mov	r0, r0, asr #16
        254620:	e1a00100 	mov	r0, r0, lsl #2
        254624:	e59d8014 	ldr	r8, [sp, #20]	; fField20
        254628:	eb65b6c7 	bl	1bc214c <$AllocateRefHandle(long)>
        25462c:	e1a05000 	mov	r5, r0
        254630:	e3a01000 	mov	r1, #0	; 0x0
        254634:	e5902000 	ldr	r2, [r0]
        254638:	e5980000 	ldr	r0, [r8]
        25463c:	e5900000 	ldr	r0, [r0]
        254640:	eb65c744 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        254644:	e1a00005 	mov	r0, r5
        254648:	eb65badb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        25464c:	e28d1010 	add	r1, sp, #16	; 0x10
        254650:	e8910003 	ldmia	r1, {r0, r1}
        254654:	eb66ae6a 	bl	1c00004 <$NSCall__FRC6RefVarT1>
        254658:	e1b00006 	movs	r0, r6
        25465c:	e2466001 	sub	r6, r6, #1	; 0x1
        254660:	1affffb5 	bne	25453c <TTile::Untile(PixelMap *)+0xa0>
        254664:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TTile::RotateTilesR(PixelMap *, PixelMap *)
 * Address: 00254668
 */
TTile::RotateTilesR(PixelMap *, PixelMap *) {
    /*
        254668:	e1a0c00d 	mov	ip, sp
        25466c:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        254670:	e24cb004 	sub	fp, ip, #4	; 0x4
        254674:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        254678:	e5910004 	ldr	r0, [r1, #4]	; fField4
        25467c:	e1a00840 	mov	r0, r0, asr #16
        254680:	e1a00300 	mov	r0, r0, lsl #6
        254684:	e58d0020 	str	r0, [sp, #32]
        254688:	e51b002c 	ldr	r0, [fp, -#44]
        25468c:	e5902004 	ldr	r2, [r0, #4]	; fField4
        254690:	e1a02842 	mov	r2, r2, asr #16
        254694:	e3a0003f 	mov	r0, #63	; 0x3f
        254698:	e0900182 	adds	r0, r0, r2, lsl #3
        25469c:	4280003f 	addmi	r0, r0, #63	; 0x3f
        2546a0:	e1a00340 	mov	r0, r0, asr #6
        2546a4:	e1a00480 	mov	r0, r0, lsl #9
        2546a8:	e58d001c 	str	r0, [sp, #28]	; fField28
        2546ac:	e51b0034 	ldr	r0, [fp, -#52]
        2546b0:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        2546b4:	e1b00002 	movs	r0, r2
        2546b8:	4282203f 	addmi	r2, r2, #63	; 0x3f
        2546bc:	e1a02342 	mov	r2, r2, asr #6
        2546c0:	e58d2018 	str	r2, [sp, #24]	; fField24
        2546c4:	e0400302 	sub	r0, r0, r2, lsl #6
        2546c8:	e58d0014 	str	r0, [sp, #20]	; fField20
        2546cc:	e1a00001 	mov	r0, r1
        2546d0:	eb66dfcc 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        2546d4:	e58d000c 	str	r0, [sp, #12]	; fField12
        2546d8:	e51b002c 	ldr	r0, [fp, -#44]
        2546dc:	eb66dfc9 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        2546e0:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        2546e4:	e0800001 	add	r0, r0, r1
        2546e8:	e58d0008 	str	r0, [sp, #8]	; fField8
        2546ec:	eb6404f3 	bl	1b55ac0 <$QDPatchpoint(void)>
        2546f0:	e59d2018 	ldr	r2, [sp, #24]	; fField24
        2546f4:	e58d2028 	str	r2, [sp, #40]
        2546f8:	e51b0034 	ldr	r0, [fp, -#52]
        2546fc:	e28010b8 	add	r1, r0, #184	; 0xb8
        254700:	e58d1038 	str	r1, [sp, #56]
        254704:	e28010bc 	add	r1, r0, #188	; 0xbc
        254708:	e3320000 	teq	r2, #0	; 0x0
        25470c:	e58d1034 	str	r1, [sp, #52]
        254710:	0a000087 	beq	254934 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x2cc>
        254714:	e59d2018 	ldr	r2, [sp, #24]	; fField24
        254718:	e1a01802 	mov	r1, r2, lsl #16
        25471c:	e58d1030 	str	r1, [sp, #48]
        254720:	e51b0034 	ldr	r0, [fp, -#52]
        254724:	e59000b4 	ldr	r0, [r0, #180]	; fField180
        254728:	e3300000 	teq	r0, #0	; 0x0
        25472c:	0a00001c 	beq	2547a4 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x13c>
        254730:	e59d0028 	ldr	r0, [sp, #40]
        254734:	e3100003 	tst	r0, #3	; 0x3
        254738:	1a000019 	bne	2547a4 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x13c>
        25473c:	e59d0028 	ldr	r0, [sp, #40]
        254740:	e59d2018 	ldr	r2, [sp, #24]	; fField24
        254744:	e0420000 	sub	r0, r2, r0
        254748:	e1a00800 	mov	r0, r0, lsl #16
        25474c:	e59d1030 	ldr	r1, [sp, #48]
        254750:	eb66325a 	bl	1be10c0 <$FixedDivide>
        254754:	e3a01832 	mov	r1, #3276800	; 0x320000
        254758:	eb663259 	bl	1be10c4 <$FixedMultiply>
        25475c:	e2800902 	add	r0, r0, #32768	; 0x8000
        254760:	e1a00840 	mov	r0, r0, asr #16
        254764:	e1a00800 	mov	r0, r0, lsl #16
        254768:	e1a00840 	mov	r0, r0, asr #16
        25476c:	e1a00100 	mov	r0, r0, lsl #2
        254770:	e59d5034 	ldr	r5, [sp, #52]
        254774:	eb65b674 	bl	1bc214c <$AllocateRefHandle(long)>
        254778:	e1a04000 	mov	r4, r0
        25477c:	e3a01000 	mov	r1, #0	; 0x0
        254780:	e5902000 	ldr	r2, [r0]
        254784:	e5950000 	ldr	r0, [r5]
        254788:	e5900000 	ldr	r0, [r0]
        25478c:	eb65c6f1 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        254790:	e1a00004 	mov	r0, r4
        254794:	eb65ba88 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        254798:	e59d0038 	ldr	r0, [sp, #56]
        25479c:	e59d1034 	ldr	r1, [sp, #52]
        2547a0:	eb66ae17 	bl	1c00004 <$NSCall__FRC6RefVarT1>
        2547a4:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2547a8:	e51b0034 	ldr	r0, [fp, -#52]
        2547ac:	eb6400b2 	bl	1b54a7c <TTile::$TileBuffer(unsigned char *)>
        2547b0:	e59d0020 	ldr	r0, [sp, #32]
        2547b4:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        2547b8:	e0811000 	add	r1, r1, r0
        2547bc:	e58d100c 	str	r1, [sp, #12]	; fField12
        2547c0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2547c4:	e2400c02 	sub	r0, r0, #512	; 0x200
        2547c8:	e58d0008 	str	r0, [sp, #8]	; fField8
        2547cc:	e2800007 	add	r0, r0, #7	; 0x7
        2547d0:	e3a01000 	mov	r1, #0	; 0x0
        2547d4:	e58d0004 	str	r0, [sp, #4]	; fField4
        2547d8:	e58d1024 	str	r1, [sp, #36]
        2547dc:	e51b0034 	ldr	r0, [fp, -#52]
        2547e0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2547e4:	e3500000 	cmp	r0, #0	; 0x0
        2547e8:	da00004d 	ble	254924 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x2bc>
        2547ec:	e51b0034 	ldr	r0, [fp, -#52]
        2547f0:	e59d1024 	ldr	r1, [sp, #36]
        2547f4:	e0800101 	add	r0, r0, r1, lsl #2
        2547f8:	e5b0101c 	ldr	r1, [r0, #28]!	; fField28
        2547fc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        254800:	e3a02008 	mov	r2, #8	; 0x8
        254804:	e58d0000 	str	r0, [sp]
        254808:	e58d2010 	str	r2, [sp, #16]	; fField16
        25480c:	e3a08002 	mov	r8, #2	; 0x2
        254810:	e5917000 	ldr	r7, [r1]
        254814:	e2812008 	add	r2, r1, #8	; 0x8
        254818:	e4926008 	ldr	r6, [r2], #8	; fField8
        25481c:	e4925008 	ldr	r5, [r2], #8	; fField8
        254820:	e4924008 	ldr	r4, [r2], #8	; fField8
        254824:	e492e008 	ldr	lr, [r2], #8	; fField8
        254828:	e492c008 	ldr	ip, [r2], #8	; fField8
        25482c:	e4923008 	ldr	r3, [r2], #8	; fField8
        254830:	e5922000 	ldr	r2, [r2]
        254834:	e3370000 	teq	r7, #0	; 0x0
        254838:	03360000 	teqeq	r6, #0	; 0x0
        25483c:	03350000 	teqeq	r5, #0	; 0x0
        254840:	03340000 	teqeq	r4, #0	; 0x0
        254844:	033e0000 	teqeq	lr, #0	; 0x0
        254848:	033c0000 	teqeq	ip, #0	; 0x0
        25484c:	03330000 	teqeq	r3, #0	; 0x0
        254850:	03320000 	teqeq	r2, #0	; 0x0
        254854:	0a00001b 	beq	2548c8 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x260>
        254858:	e3a09020 	mov	r9, #32	; 0x20
        25485c:	e1a0afa2 	mov	sl, r2, lsr #31
        254860:	e1a02082 	mov	r2, r2, lsl #1
        254864:	e1a0a08a 	mov	sl, sl, lsl #1
        254868:	e18aafa3 	orr	sl, sl, r3, lsr #31
        25486c:	e1a03083 	mov	r3, r3, lsl #1
        254870:	e1a0a08a 	mov	sl, sl, lsl #1
        254874:	e18aafac 	orr	sl, sl, ip, lsr #31
        254878:	e1a0c08c 	mov	ip, ip, lsl #1
        25487c:	e1a0a08a 	mov	sl, sl, lsl #1
        254880:	e18aafae 	orr	sl, sl, lr, lsr #31
        254884:	e1a0e08e 	mov	lr, lr, lsl #1
        254888:	e1a0a08a 	mov	sl, sl, lsl #1
        25488c:	e18aafa4 	orr	sl, sl, r4, lsr #31
        254890:	e1a04084 	mov	r4, r4, lsl #1
        254894:	e1a0a08a 	mov	sl, sl, lsl #1
        254898:	e18aafa5 	orr	sl, sl, r5, lsr #31
        25489c:	e1a05085 	mov	r5, r5, lsl #1
        2548a0:	e1a0a08a 	mov	sl, sl, lsl #1
        2548a4:	e18aafa6 	orr	sl, sl, r6, lsr #31
        2548a8:	e1a06086 	mov	r6, r6, lsl #1
        2548ac:	e1a0a08a 	mov	sl, sl, lsl #1
        2548b0:	e18aafa7 	orr	sl, sl, r7, lsr #31
        2548b4:	e1a07087 	mov	r7, r7, lsl #1
        2548b8:	e4c0a008 	strb	sl, [r0], #8	; fField8
        2548bc:	e2599001 	subs	r9, r9, #1	; 0x1
        2548c0:	1affffe5 	bne	25485c <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x1f4>
        2548c4:	ea000000 	b	2548cc <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x264>
        2548c8:	e2800c01 	add	r0, r0, #256	; 0x100
        2548cc:	e2811004 	add	r1, r1, #4	; 0x4
        2548d0:	e2588001 	subs	r8, r8, #1	; 0x1
        2548d4:	1affffcd 	bne	254810 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x1a8>
        2548d8:	e2811038 	add	r1, r1, #56	; 0x38
        2548dc:	e59d0000 	ldr	r0, [sp]
        2548e0:	e2400001 	sub	r0, r0, #1	; 0x1
        2548e4:	e58d0000 	str	r0, [sp]
        2548e8:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        2548ec:	e2522001 	subs	r2, r2, #1	; 0x1
        2548f0:	e58d2010 	str	r2, [sp, #16]	; fField16
        2548f4:	1affffc4 	bne	25480c <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x1a4>
        2548f8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2548fc:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        254900:	e0800001 	add	r0, r0, r1
        254904:	e58d0004 	str	r0, [sp, #4]	; fField4
        254908:	e59d1024 	ldr	r1, [sp, #36]
        25490c:	e2811001 	add	r1, r1, #1	; 0x1
        254910:	e58d1024 	str	r1, [sp, #36]
        254914:	e51b0034 	ldr	r0, [fp, -#52]
        254918:	e5900008 	ldr	r0, [r0, #8]	; fField8
        25491c:	e1500001 	cmp	r0, r1
        254920:	caffffb1 	bgt	2547ec <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x184>
        254924:	e59d0028 	ldr	r0, [sp, #40]
        254928:	e2500001 	subs	r0, r0, #1	; 0x1
        25492c:	e58d0028 	str	r0, [sp, #40]
        254930:	1affff7a 	bne	254720 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0xb8>
        254934:	eb640461 	bl	1b55ac0 <$QDPatchpoint(void)>
        254938:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        25493c:	e3300000 	teq	r0, #0	; 0x0
        254940:	0a000070 	beq	254b08 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x4a0>
        254944:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        254948:	e51b0034 	ldr	r0, [fp, -#52]
        25494c:	eb64004a 	bl	1b54a7c <TTile::$TileBuffer(unsigned char *)>
        254950:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        254954:	e280027f 	add	r0, r0, #-268435449	; 0xf0000007
        254958:	e2400c02 	sub	r0, r0, #512	; 0x200
        25495c:	e2800201 	add	r0, r0, #268435456	; 0x10000000
        254960:	e58d0004 	str	r0, [sp, #4]	; fField4
        254964:	e3a00000 	mov	r0, #0	; 0x0
        254968:	e58d0024 	str	r0, [sp, #36]
        25496c:	e51b0034 	ldr	r0, [fp, -#52]
        254970:	e5900008 	ldr	r0, [r0, #8]	; fField8
        254974:	e3500000 	cmp	r0, #0	; 0x0
        254978:	da000062 	ble	254b08 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x4a0>
        25497c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        254980:	e1a021c0 	mov	r2, r0, asr #3
        254984:	e58d202c 	str	r2, [sp, #44]
        254988:	e51b1034 	ldr	r1, [fp, -#52]
        25498c:	e59d0024 	ldr	r0, [sp, #36]
        254990:	e0810100 	add	r0, r1, r0, lsl #2
        254994:	e5b0101c 	ldr	r1, [r0, #28]!	; fField28
        254998:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        25499c:	e58d0000 	str	r0, [sp]
        2549a0:	e59d202c 	ldr	r2, [sp, #44]
        2549a4:	e58d2010 	str	r2, [sp, #16]	; fField16
        2549a8:	e3320000 	teq	r2, #0	; 0x0
        2549ac:	0a000049 	beq	254ad8 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x470>
        2549b0:	e3a08008 	mov	r8, #8	; 0x8
        2549b4:	e5d16000 	ldrb	r6, [r1]
        2549b8:	e2812008 	add	r2, r1, #8	; 0x8
        2549bc:	e4d24008 	ldrb	r4, [r2], #8	; fField8
        2549c0:	e4d27008 	ldrb	r7, [r2], #8	; fField8
        2549c4:	e4d25008 	ldrb	r5, [r2], #8	; fField8
        2549c8:	e4d2e008 	ldrb	lr, [r2], #8	; fField8
        2549cc:	e4d2c008 	ldrb	ip, [r2], #8	; fField8
        2549d0:	e4d23008 	ldrb	r3, [r2], #8	; fField8
        2549d4:	e5d22000 	ldrb	r2, [r2]
        2549d8:	e3360000 	teq	r6, #0	; 0x0
        2549dc:	03340000 	teqeq	r4, #0	; 0x0
        2549e0:	03370000 	teqeq	r7, #0	; 0x0
        2549e4:	03350000 	teqeq	r5, #0	; 0x0
        2549e8:	033e0000 	teqeq	lr, #0	; 0x0
        2549ec:	033c0000 	teqeq	ip, #0	; 0x0
        2549f0:	03330000 	teqeq	r3, #0	; 0x0
        2549f4:	03320000 	teqeq	r2, #0	; 0x0
        2549f8:	0a00002a 	beq	254aa8 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x440>
        2549fc:	e3a09008 	mov	r9, #8	; 0x8
        254a00:	e1a0a3c2 	mov	sl, r2, asr #7
        254a04:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254a08:	e1a02082 	mov	r2, r2, lsl #1
        254a0c:	e20220ff 	and	r2, r2, #255	; 0xff
        254a10:	e1a0a08a 	mov	sl, sl, lsl #1
        254a14:	e18aa3c3 	orr	sl, sl, r3, asr #7
        254a18:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254a1c:	e1a03083 	mov	r3, r3, lsl #1
        254a20:	e20330ff 	and	r3, r3, #255	; 0xff
        254a24:	e1a0a08a 	mov	sl, sl, lsl #1
        254a28:	e18aa3cc 	orr	sl, sl, ip, asr #7
        254a2c:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254a30:	e1a0c08c 	mov	ip, ip, lsl #1
        254a34:	e20cc0ff 	and	ip, ip, #255	; 0xff
        254a38:	e1a0a08a 	mov	sl, sl, lsl #1
        254a3c:	e18aa3ce 	orr	sl, sl, lr, asr #7
        254a40:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254a44:	e1a0e08e 	mov	lr, lr, lsl #1
        254a48:	e20ee0ff 	and	lr, lr, #255	; 0xff
        254a4c:	e1a0a08a 	mov	sl, sl, lsl #1
        254a50:	e18aa3c5 	orr	sl, sl, r5, asr #7
        254a54:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254a58:	e1a05085 	mov	r5, r5, lsl #1
        254a5c:	e20550ff 	and	r5, r5, #255	; 0xff
        254a60:	e1a0a08a 	mov	sl, sl, lsl #1
        254a64:	e18aa3c7 	orr	sl, sl, r7, asr #7
        254a68:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254a6c:	e1a07087 	mov	r7, r7, lsl #1
        254a70:	e20770ff 	and	r7, r7, #255	; 0xff
        254a74:	e1a0a08a 	mov	sl, sl, lsl #1
        254a78:	e18aa3c4 	orr	sl, sl, r4, asr #7
        254a7c:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254a80:	e1a04084 	mov	r4, r4, lsl #1
        254a84:	e20440ff 	and	r4, r4, #255	; 0xff
        254a88:	e1a0a08a 	mov	sl, sl, lsl #1
        254a8c:	e18aa3c6 	orr	sl, sl, r6, asr #7
        254a90:	e1a06086 	mov	r6, r6, lsl #1
        254a94:	e20660ff 	and	r6, r6, #255	; 0xff
        254a98:	e4c0a008 	strb	sl, [r0], #8	; fField8
        254a9c:	e2599001 	subs	r9, r9, #1	; 0x1
        254aa0:	1affffd6 	bne	254a00 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x398>
        254aa4:	ea000000 	b	254aac <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x444>
        254aa8:	e2800040 	add	r0, r0, #64	; 0x40
        254aac:	e2811001 	add	r1, r1, #1	; 0x1
        254ab0:	e2588001 	subs	r8, r8, #1	; 0x1
        254ab4:	1affffbe 	bne	2549b4 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x34c>
        254ab8:	e2811038 	add	r1, r1, #56	; 0x38
        254abc:	e59d0000 	ldr	r0, [sp]
        254ac0:	e2400001 	sub	r0, r0, #1	; 0x1
        254ac4:	e58d0000 	str	r0, [sp]
        254ac8:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        254acc:	e2522001 	subs	r2, r2, #1	; 0x1
        254ad0:	e58d2010 	str	r2, [sp, #16]	; fField16
        254ad4:	1affffb5 	bne	2549b0 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x348>
        254ad8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        254adc:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        254ae0:	e0800001 	add	r0, r0, r1
        254ae4:	e58d0004 	str	r0, [sp, #4]	; fField4
        254ae8:	e59d0024 	ldr	r0, [sp, #36]
        254aec:	e2800001 	add	r0, r0, #1	; 0x1
        254af0:	e58d0024 	str	r0, [sp, #36]
        254af4:	e51b0034 	ldr	r0, [fp, -#52]
        254af8:	e5900008 	ldr	r0, [r0, #8]	; fField8
        254afc:	e59d1024 	ldr	r1, [sp, #36]
        254b00:	e1500001 	cmp	r0, r1
        254b04:	caffff9f 	bgt	254988 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x320>
        254b08:	eb6403ec 	bl	1b55ac0 <$QDPatchpoint(void)>
        254b0c:	e51b0034 	ldr	r0, [fp, -#52]
        254b10:	e59000b4 	ldr	r0, [r0, #180]	; fField180
        254b14:	e3300000 	teq	r0, #0	; 0x0
        254b18:	0a00000d 	beq	254b54 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x4ec>
        254b1c:	e3a000c8 	mov	r0, #200	; 0xc8
        254b20:	e59d5034 	ldr	r5, [sp, #52]
        254b24:	eb65b588 	bl	1bc214c <$AllocateRefHandle(long)>
        254b28:	e1a04000 	mov	r4, r0
        254b2c:	e3a01000 	mov	r1, #0	; 0x0
        254b30:	e5902000 	ldr	r2, [r0]
        254b34:	e5950000 	ldr	r0, [r5]
        254b38:	e5900000 	ldr	r0, [r0]
        254b3c:	eb65c605 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        254b40:	e1a00004 	mov	r0, r4
        254b44:	eb65b99c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        254b48:	e59d0038 	ldr	r0, [sp, #56]
        254b4c:	e59d1034 	ldr	r1, [sp, #52]
        254b50:	eb66ad2b 	bl	1c00004 <$NSCall__FRC6RefVarT1>
        254b54:	e51b0034 	ldr	r0, [fp, -#52]
        254b58:	e51b102c 	ldr	r1, [fp, -#44]
        254b5c:	eb6403cb 	bl	1b55a90 <TTile::$Untile(PixelMap *)>
        254b60:	e51b0034 	ldr	r0, [fp, -#52]
        254b64:	e59000b4 	ldr	r0, [r0, #180]	; fField180
        254b68:	e3300000 	teq	r0, #0	; 0x0
        254b6c:	0a00000d 	beq	254ba8 <TTile::RotateTilesR(PixelMap *, PixelMap *)+0x540>
        254b70:	e3a00e19 	mov	r0, #400	; 0x190
        254b74:	e59d5034 	ldr	r5, [sp, #52]
        254b78:	eb65b573 	bl	1bc214c <$AllocateRefHandle(long)>
        254b7c:	e1a04000 	mov	r4, r0
        254b80:	e3a01000 	mov	r1, #0	; 0x0
        254b84:	e5902000 	ldr	r2, [r0]
        254b88:	e5950000 	ldr	r0, [r5]
        254b8c:	e5900000 	ldr	r0, [r0]
        254b90:	eb65c5f0 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        254b94:	e1a00004 	mov	r0, r4
        254b98:	eb65b987 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        254b9c:	e59d0038 	ldr	r0, [sp, #56]
        254ba0:	e59d1034 	ldr	r1, [sp, #52]
        254ba4:	eb66ad16 	bl	1c00004 <$NSCall__FRC6RefVarT1>
        254ba8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TTile::RotateTilesL(PixelMap *, PixelMap *)
 * Address: 00254bac
 */
TTile::RotateTilesL(PixelMap *, PixelMap *) {
    /*
        254bac:	e1a0c00d 	mov	ip, sp
        254bb0:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        254bb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        254bb8:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        254bbc:	e5910004 	ldr	r0, [r1, #4]	; fField4
        254bc0:	e1a00840 	mov	r0, r0, asr #16
        254bc4:	e1a00300 	mov	r0, r0, lsl #6
        254bc8:	e58d0020 	str	r0, [sp, #32]
        254bcc:	e51b002c 	ldr	r0, [fp, -#44]
        254bd0:	e5902004 	ldr	r2, [r0, #4]	; fField4
        254bd4:	e1a02842 	mov	r2, r2, asr #16
        254bd8:	e3a0003f 	mov	r0, #63	; 0x3f
        254bdc:	e0900182 	adds	r0, r0, r2, lsl #3
        254be0:	4280003f 	addmi	r0, r0, #63	; 0x3f
        254be4:	e1a00340 	mov	r0, r0, asr #6
        254be8:	e1a02480 	mov	r2, r0, lsl #9
        254bec:	e58d201c 	str	r2, [sp, #28]	; fField28
        254bf0:	e51b0034 	ldr	r0, [fp, -#52]
        254bf4:	e5b02004 	ldr	r2, [r0, #4]!	; fField4
        254bf8:	e1b00002 	movs	r0, r2
        254bfc:	4282203f 	addmi	r2, r2, #63	; 0x3f
        254c00:	e1a02342 	mov	r2, r2, asr #6
        254c04:	e58d2018 	str	r2, [sp, #24]	; fField24
        254c08:	e0400302 	sub	r0, r0, r2, lsl #6
        254c0c:	e58d0014 	str	r0, [sp, #20]	; fField20
        254c10:	e1a00001 	mov	r0, r1
        254c14:	eb66de7b 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        254c18:	e58d0000 	str	r0, [sp]
        254c1c:	e51b002c 	ldr	r0, [fp, -#44]
        254c20:	eb66de78 	bl	1c0c608 <$GetPixelMapBits(PixelMap *)>
        254c24:	e51b1034 	ldr	r1, [fp, -#52]
        254c28:	e5911008 	ldr	r1, [r1, #8]	; fField8
        254c2c:	e2411001 	sub	r1, r1, #1	; 0x1
        254c30:	e59d201c 	ldr	r2, [sp, #28]	; fField28
        254c34:	e0200192 	mla	r0, r2, r1, r0
        254c38:	e2400c02 	sub	r0, r0, #512	; 0x200
        254c3c:	e58d000c 	str	r0, [sp, #12]	; fField12
        254c40:	eb64039e 	bl	1b55ac0 <$QDPatchpoint(void)>
        254c44:	e59d2018 	ldr	r2, [sp, #24]	; fField24
        254c48:	e58d2028 	str	r2, [sp, #40]
        254c4c:	e51b0034 	ldr	r0, [fp, -#52]
        254c50:	e28010b8 	add	r1, r0, #184	; 0xb8
        254c54:	e58d1038 	str	r1, [sp, #56]
        254c58:	e28010bc 	add	r1, r0, #188	; 0xbc
        254c5c:	e3320000 	teq	r2, #0	; 0x0
        254c60:	e58d1034 	str	r1, [sp, #52]
        254c64:	0a000087 	beq	254e88 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x2dc>
        254c68:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        254c6c:	e1a01800 	mov	r1, r0, lsl #16
        254c70:	e58d1030 	str	r1, [sp, #48]
        254c74:	e51b0034 	ldr	r0, [fp, -#52]
        254c78:	e59000b4 	ldr	r0, [r0, #180]	; fField180
        254c7c:	e3300000 	teq	r0, #0	; 0x0
        254c80:	0a00001c 	beq	254cf8 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x14c>
        254c84:	e59d2028 	ldr	r2, [sp, #40]
        254c88:	e3120003 	tst	r2, #3	; 0x3
        254c8c:	1a000019 	bne	254cf8 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x14c>
        254c90:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        254c94:	e59d2028 	ldr	r2, [sp, #40]
        254c98:	e0400002 	sub	r0, r0, r2
        254c9c:	e1a00800 	mov	r0, r0, lsl #16
        254ca0:	e59d1030 	ldr	r1, [sp, #48]
        254ca4:	eb663105 	bl	1be10c0 <$FixedDivide>
        254ca8:	e3a01832 	mov	r1, #3276800	; 0x320000
        254cac:	eb663104 	bl	1be10c4 <$FixedMultiply>
        254cb0:	e2800902 	add	r0, r0, #32768	; 0x8000
        254cb4:	e1a00840 	mov	r0, r0, asr #16
        254cb8:	e1a00800 	mov	r0, r0, lsl #16
        254cbc:	e1a00840 	mov	r0, r0, asr #16
        254cc0:	e1a00100 	mov	r0, r0, lsl #2
        254cc4:	e59d5034 	ldr	r5, [sp, #52]
        254cc8:	eb65b51f 	bl	1bc214c <$AllocateRefHandle(long)>
        254ccc:	e1a04000 	mov	r4, r0
        254cd0:	e3a01000 	mov	r1, #0	; 0x0
        254cd4:	e5902000 	ldr	r2, [r0]
        254cd8:	e5950000 	ldr	r0, [r5]
        254cdc:	e5900000 	ldr	r0, [r0]
        254ce0:	eb65c59c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        254ce4:	e1a00004 	mov	r0, r4
        254ce8:	eb65b933 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        254cec:	e59d0038 	ldr	r0, [sp, #56]
        254cf0:	e59d1034 	ldr	r1, [sp, #52]
        254cf4:	eb66acc2 	bl	1c00004 <$NSCall__FRC6RefVarT1>
        254cf8:	e59d1000 	ldr	r1, [sp]
        254cfc:	e51b0034 	ldr	r0, [fp, -#52]
        254d00:	eb63ff5d 	bl	1b54a7c <TTile::$TileBuffer(unsigned char *)>
        254d04:	e59d0020 	ldr	r0, [sp, #32]
        254d08:	e59d1000 	ldr	r1, [sp]
        254d0c:	e0811000 	add	r1, r1, r0
        254d10:	e58d1000 	str	r1, [sp]
        254d14:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        254d18:	e2800c02 	add	r0, r0, #512	; 0x200
        254d1c:	e58d000c 	str	r0, [sp, #12]	; fField12
        254d20:	e2800f7e 	add	r0, r0, #504	; 0x1f8
        254d24:	e3a01000 	mov	r1, #0	; 0x0
        254d28:	e58d0008 	str	r0, [sp, #8]	; fField8
        254d2c:	e58d1024 	str	r1, [sp, #36]
        254d30:	e51b0034 	ldr	r0, [fp, -#52]
        254d34:	e5900008 	ldr	r0, [r0, #8]	; fField8
        254d38:	e3500000 	cmp	r0, #0	; 0x0
        254d3c:	da00004d 	ble	254e78 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x2cc>
        254d40:	e51b0034 	ldr	r0, [fp, -#52]
        254d44:	e59d1024 	ldr	r1, [sp, #36]
        254d48:	e0800101 	add	r0, r0, r1, lsl #2
        254d4c:	e5b0101c 	ldr	r1, [r0, #28]!	; fField28
        254d50:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        254d54:	e3a02008 	mov	r2, #8	; 0x8
        254d58:	e58d0004 	str	r0, [sp, #4]	; fField4
        254d5c:	e58d2010 	str	r2, [sp, #16]	; fField16
        254d60:	e3a08002 	mov	r8, #2	; 0x2
        254d64:	e5917000 	ldr	r7, [r1]
        254d68:	e2812008 	add	r2, r1, #8	; 0x8
        254d6c:	e4926008 	ldr	r6, [r2], #8	; fField8
        254d70:	e4925008 	ldr	r5, [r2], #8	; fField8
        254d74:	e4924008 	ldr	r4, [r2], #8	; fField8
        254d78:	e492e008 	ldr	lr, [r2], #8	; fField8
        254d7c:	e492c008 	ldr	ip, [r2], #8	; fField8
        254d80:	e4923008 	ldr	r3, [r2], #8	; fField8
        254d84:	e5922000 	ldr	r2, [r2]
        254d88:	e3370000 	teq	r7, #0	; 0x0
        254d8c:	03360000 	teqeq	r6, #0	; 0x0
        254d90:	03350000 	teqeq	r5, #0	; 0x0
        254d94:	03340000 	teqeq	r4, #0	; 0x0
        254d98:	033e0000 	teqeq	lr, #0	; 0x0
        254d9c:	033c0000 	teqeq	ip, #0	; 0x0
        254da0:	03330000 	teqeq	r3, #0	; 0x0
        254da4:	03320000 	teqeq	r2, #0	; 0x0
        254da8:	0a00001b 	beq	254e1c <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x270>
        254dac:	e3a09020 	mov	r9, #32	; 0x20
        254db0:	e1a0afa7 	mov	sl, r7, lsr #31
        254db4:	e1a07087 	mov	r7, r7, lsl #1
        254db8:	e1a0a08a 	mov	sl, sl, lsl #1
        254dbc:	e18aafa6 	orr	sl, sl, r6, lsr #31
        254dc0:	e1a06086 	mov	r6, r6, lsl #1
        254dc4:	e1a0a08a 	mov	sl, sl, lsl #1
        254dc8:	e18aafa5 	orr	sl, sl, r5, lsr #31
        254dcc:	e1a05085 	mov	r5, r5, lsl #1
        254dd0:	e1a0a08a 	mov	sl, sl, lsl #1
        254dd4:	e18aafa4 	orr	sl, sl, r4, lsr #31
        254dd8:	e1a04084 	mov	r4, r4, lsl #1
        254ddc:	e1a0a08a 	mov	sl, sl, lsl #1
        254de0:	e18aafae 	orr	sl, sl, lr, lsr #31
        254de4:	e1a0e08e 	mov	lr, lr, lsl #1
        254de8:	e1a0a08a 	mov	sl, sl, lsl #1
        254dec:	e18aafac 	orr	sl, sl, ip, lsr #31
        254df0:	e1a0c08c 	mov	ip, ip, lsl #1
        254df4:	e1a0a08a 	mov	sl, sl, lsl #1
        254df8:	e18aafa3 	orr	sl, sl, r3, lsr #31
        254dfc:	e1a03083 	mov	r3, r3, lsl #1
        254e00:	e1a0a08a 	mov	sl, sl, lsl #1
        254e04:	e18aafa2 	orr	sl, sl, r2, lsr #31
        254e08:	e1a02082 	mov	r2, r2, lsl #1
        254e0c:	e440a008 	strb	sl, [r0], -#8	; fField8
        254e10:	e2599001 	subs	r9, r9, #1	; 0x1
        254e14:	1affffe5 	bne	254db0 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x204>
        254e18:	ea000000 	b	254e20 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x274>
        254e1c:	e2400c01 	sub	r0, r0, #256	; 0x100
        254e20:	e2811004 	add	r1, r1, #4	; 0x4
        254e24:	e2588001 	subs	r8, r8, #1	; 0x1
        254e28:	1affffcd 	bne	254d64 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x1b8>
        254e2c:	e2811038 	add	r1, r1, #56	; 0x38
        254e30:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        254e34:	e2800001 	add	r0, r0, #1	; 0x1
        254e38:	e58d0004 	str	r0, [sp, #4]	; fField4
        254e3c:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        254e40:	e2522001 	subs	r2, r2, #1	; 0x1
        254e44:	e58d2010 	str	r2, [sp, #16]	; fField16
        254e48:	1affffc4 	bne	254d60 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x1b4>
        254e4c:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        254e50:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        254e54:	e0400001 	sub	r0, r0, r1
        254e58:	e58d0008 	str	r0, [sp, #8]	; fField8
        254e5c:	e59d1024 	ldr	r1, [sp, #36]
        254e60:	e2811001 	add	r1, r1, #1	; 0x1
        254e64:	e58d1024 	str	r1, [sp, #36]
        254e68:	e51b0034 	ldr	r0, [fp, -#52]
        254e6c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        254e70:	e1500001 	cmp	r0, r1
        254e74:	caffffb1 	bgt	254d40 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x194>
        254e78:	e59d2028 	ldr	r2, [sp, #40]
        254e7c:	e2522001 	subs	r2, r2, #1	; 0x1
        254e80:	e58d2028 	str	r2, [sp, #40]
        254e84:	1affff7a 	bne	254c74 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0xc8>
        254e88:	eb64030c 	bl	1b55ac0 <$QDPatchpoint(void)>
        254e8c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        254e90:	e3300000 	teq	r0, #0	; 0x0
        254e94:	0a00006e 	beq	255054 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x4a8>
        254e98:	e59d1000 	ldr	r1, [sp]
        254e9c:	e51b0034 	ldr	r0, [fp, -#52]
        254ea0:	eb63fef5 	bl	1b54a7c <TTile::$TileBuffer(unsigned char *)>
        254ea4:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        254ea8:	e2800ffe 	add	r0, r0, #1016	; 0x3f8
        254eac:	e58d0008 	str	r0, [sp, #8]	; fField8
        254eb0:	e3a00000 	mov	r0, #0	; 0x0
        254eb4:	e58d0024 	str	r0, [sp, #36]
        254eb8:	e51b0034 	ldr	r0, [fp, -#52]
        254ebc:	e5900008 	ldr	r0, [r0, #8]	; fField8
        254ec0:	e3500000 	cmp	r0, #0	; 0x0
        254ec4:	da000062 	ble	255054 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x4a8>
        254ec8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        254ecc:	e1a021c0 	mov	r2, r0, asr #3
        254ed0:	e58d202c 	str	r2, [sp, #44]
        254ed4:	e51b1034 	ldr	r1, [fp, -#52]
        254ed8:	e59d0024 	ldr	r0, [sp, #36]
        254edc:	e0810100 	add	r0, r1, r0, lsl #2
        254ee0:	e5b0101c 	ldr	r1, [r0, #28]!	; fField28
        254ee4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        254ee8:	e58d0004 	str	r0, [sp, #4]	; fField4
        254eec:	e59d202c 	ldr	r2, [sp, #44]
        254ef0:	e58d2010 	str	r2, [sp, #16]	; fField16
        254ef4:	e3320000 	teq	r2, #0	; 0x0
        254ef8:	0a000049 	beq	255024 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x478>
        254efc:	e3a08008 	mov	r8, #8	; 0x8
        254f00:	e5d16000 	ldrb	r6, [r1]
        254f04:	e2812008 	add	r2, r1, #8	; 0x8
        254f08:	e4d25008 	ldrb	r5, [r2], #8	; fField8
        254f0c:	e4d24008 	ldrb	r4, [r2], #8	; fField8
        254f10:	e4d2e008 	ldrb	lr, [r2], #8	; fField8
        254f14:	e4d2c008 	ldrb	ip, [r2], #8	; fField8
        254f18:	e4d27008 	ldrb	r7, [r2], #8	; fField8
        254f1c:	e4d23008 	ldrb	r3, [r2], #8	; fField8
        254f20:	e5d22000 	ldrb	r2, [r2]
        254f24:	e3360000 	teq	r6, #0	; 0x0
        254f28:	03350000 	teqeq	r5, #0	; 0x0
        254f2c:	03340000 	teqeq	r4, #0	; 0x0
        254f30:	033e0000 	teqeq	lr, #0	; 0x0
        254f34:	033c0000 	teqeq	ip, #0	; 0x0
        254f38:	03370000 	teqeq	r7, #0	; 0x0
        254f3c:	03330000 	teqeq	r3, #0	; 0x0
        254f40:	03320000 	teqeq	r2, #0	; 0x0
        254f44:	0a00002a 	beq	254ff4 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x448>
        254f48:	e3a09008 	mov	r9, #8	; 0x8
        254f4c:	e1a0a3c2 	mov	sl, r2, asr #7
        254f50:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254f54:	e1a02082 	mov	r2, r2, lsl #1
        254f58:	e20220ff 	and	r2, r2, #255	; 0xff
        254f5c:	e1a0a08a 	mov	sl, sl, lsl #1
        254f60:	e18aa3c3 	orr	sl, sl, r3, asr #7
        254f64:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254f68:	e1a03083 	mov	r3, r3, lsl #1
        254f6c:	e20330ff 	and	r3, r3, #255	; 0xff
        254f70:	e1a0a08a 	mov	sl, sl, lsl #1
        254f74:	e18aa3c7 	orr	sl, sl, r7, asr #7
        254f78:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254f7c:	e1a07087 	mov	r7, r7, lsl #1
        254f80:	e20770ff 	and	r7, r7, #255	; 0xff
        254f84:	e1a0a08a 	mov	sl, sl, lsl #1
        254f88:	e18aa3cc 	orr	sl, sl, ip, asr #7
        254f8c:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254f90:	e1a0c08c 	mov	ip, ip, lsl #1
        254f94:	e20cc0ff 	and	ip, ip, #255	; 0xff
        254f98:	e1a0a08a 	mov	sl, sl, lsl #1
        254f9c:	e18aa3ce 	orr	sl, sl, lr, asr #7
        254fa0:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254fa4:	e1a0e08e 	mov	lr, lr, lsl #1
        254fa8:	e20ee0ff 	and	lr, lr, #255	; 0xff
        254fac:	e1a0a08a 	mov	sl, sl, lsl #1
        254fb0:	e18aa3c4 	orr	sl, sl, r4, asr #7
        254fb4:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254fb8:	e1a04084 	mov	r4, r4, lsl #1
        254fbc:	e20440ff 	and	r4, r4, #255	; 0xff
        254fc0:	e1a0a08a 	mov	sl, sl, lsl #1
        254fc4:	e18aa3c5 	orr	sl, sl, r5, asr #7
        254fc8:	e20aa0ff 	and	sl, sl, #255	; 0xff
        254fcc:	e1a05085 	mov	r5, r5, lsl #1
        254fd0:	e20550ff 	and	r5, r5, #255	; 0xff
        254fd4:	e1a0a08a 	mov	sl, sl, lsl #1
        254fd8:	e18aa3c6 	orr	sl, sl, r6, asr #7
        254fdc:	e1a06086 	mov	r6, r6, lsl #1
        254fe0:	e20660ff 	and	r6, r6, #255	; 0xff
        254fe4:	e4c0a008 	strb	sl, [r0], #8	; fField8
        254fe8:	e2599001 	subs	r9, r9, #1	; 0x1
        254fec:	1affffd6 	bne	254f4c <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x3a0>
        254ff0:	ea000000 	b	254ff8 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x44c>
        254ff4:	e2400040 	sub	r0, r0, #64	; 0x40
        254ff8:	e2811001 	add	r1, r1, #1	; 0x1
        254ffc:	e2588001 	subs	r8, r8, #1	; 0x1
        255000:	1affffbe 	bne	254f00 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x354>
        255004:	e2811038 	add	r1, r1, #56	; 0x38
        255008:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        25500c:	e2800001 	add	r0, r0, #1	; 0x1
        255010:	e58d0004 	str	r0, [sp, #4]	; fField4
        255014:	e59d2010 	ldr	r2, [sp, #16]	; fField16
        255018:	e2522001 	subs	r2, r2, #1	; 0x1
        25501c:	e58d2010 	str	r2, [sp, #16]	; fField16
        255020:	1affffb5 	bne	254efc <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x350>
        255024:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        255028:	e59d101c 	ldr	r1, [sp, #28]	; fField28
        25502c:	e0400001 	sub	r0, r0, r1
        255030:	e58d0008 	str	r0, [sp, #8]	; fField8
        255034:	e59d0024 	ldr	r0, [sp, #36]
        255038:	e2800001 	add	r0, r0, #1	; 0x1
        25503c:	e58d0024 	str	r0, [sp, #36]
        255040:	e51b0034 	ldr	r0, [fp, -#52]
        255044:	e5900008 	ldr	r0, [r0, #8]	; fField8
        255048:	e59d1024 	ldr	r1, [sp, #36]
        25504c:	e1500001 	cmp	r0, r1
        255050:	caffff9f 	bgt	254ed4 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x328>
        255054:	eb640299 	bl	1b55ac0 <$QDPatchpoint(void)>
        255058:	e51b0034 	ldr	r0, [fp, -#52]
        25505c:	e59000b4 	ldr	r0, [r0, #180]	; fField180
        255060:	e3300000 	teq	r0, #0	; 0x0
        255064:	0a00000d 	beq	2550a0 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x4f4>
        255068:	e3a000c8 	mov	r0, #200	; 0xc8
        25506c:	e59d5034 	ldr	r5, [sp, #52]
        255070:	eb65b435 	bl	1bc214c <$AllocateRefHandle(long)>
        255074:	e1a04000 	mov	r4, r0
        255078:	e3a01000 	mov	r1, #0	; 0x0
        25507c:	e5902000 	ldr	r2, [r0]
        255080:	e5950000 	ldr	r0, [r5]
        255084:	e5900000 	ldr	r0, [r0]
        255088:	eb65c4b2 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        25508c:	e1a00004 	mov	r0, r4
        255090:	eb65b849 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        255094:	e59d0038 	ldr	r0, [sp, #56]
        255098:	e59d1034 	ldr	r1, [sp, #52]
        25509c:	eb66abd8 	bl	1c00004 <$NSCall__FRC6RefVarT1>
        2550a0:	e51b0034 	ldr	r0, [fp, -#52]
        2550a4:	e51b102c 	ldr	r1, [fp, -#44]
        2550a8:	eb640278 	bl	1b55a90 <TTile::$Untile(PixelMap *)>
        2550ac:	e51b0034 	ldr	r0, [fp, -#52]
        2550b0:	e59000b4 	ldr	r0, [r0, #180]	; fField180
        2550b4:	e3300000 	teq	r0, #0	; 0x0
        2550b8:	0a00000d 	beq	2550f4 <TTile::RotateTilesL(PixelMap *, PixelMap *)+0x548>
        2550bc:	e3a00e19 	mov	r0, #400	; 0x190
        2550c0:	e59d5034 	ldr	r5, [sp, #52]
        2550c4:	eb65b420 	bl	1bc214c <$AllocateRefHandle(long)>
        2550c8:	e1a04000 	mov	r4, r0
        2550cc:	e3a01000 	mov	r1, #0	; 0x0
        2550d0:	e5902000 	ldr	r2, [r0]
        2550d4:	e5950000 	ldr	r0, [r5]
        2550d8:	e5900000 	ldr	r0, [r0]
        2550dc:	eb65c49d 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2550e0:	e1a00004 	mov	r0, r4
        2550e4:	eb65b834 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2550e8:	e59d0038 	ldr	r0, [sp, #56]
        2550ec:	e59d1034 	ldr	r1, [sp, #52]
        2550f0:	eb66abc3 	bl	1c00004 <$NSCall__FRC6RefVarT1>
        2550f4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

