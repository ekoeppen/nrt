#include "include/TQDScaler.h"

/**
 * Symbol: TQDScaler::__ct(void)
 * Address: 00196018
 */
TQDScaler::TQDScaler(void) {
    /*
        196018:	e1a0c00d 	mov	ip, sp
        19601c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        196020:	e24cb004 	sub	fp, ip, #4	; 0x4
        196024:	e1b04000 	movs	r4, r0
        196028:	1a000003 	bne	19603c <TQDScaler::__ct(void)+0x24>
        19602c:	e3a000c8 	mov	r0, #200	; 0xc8
        196030:	eb68e1c0 	bl	1bce738 <$__nw(unsigned int)>
        196034:	e1b04000 	movs	r4, r0
        196038:	0a000008 	beq	196060 <TQDScaler::__ct(void)+0x48>
        19603c:	e1a00004 	mov	r0, r4
        196040:	e3a020c8 	mov	r2, #200	; 0xc8
        196044:	e3a01000 	mov	r1, #0	; 0x0
        196048:	eb687a82 	bl	1bb4a58 <$memset>
        19604c:	e3a02001 	mov	r2, #1	; 0x1
        196050:	e3a0101c 	mov	r1, #28	; 0x1c
        196054:	e3a00000 	mov	r0, #0	; 0x0
        196058:	eb69345d 	bl	1be31d4 <CDynamicArray::$__ct(long, long)>
        19605c:	e58400c4 	str	r0, [r4, #196]	; fField196
        196060:	e1a00004 	mov	r0, r4
        196064:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TQDScaler::__dt(void)
 * Address: 00196068
 */
TQDScaler::~TQDScaler(void) {
    /*
        196068:	e1a0c00d 	mov	ip, sp
        19606c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        196070:	e24cb004 	sub	fp, ip, #4	; 0x4
        196074:	e1a04000 	mov	r4, r0
        196078:	e1a05001 	mov	r5, r1
        19607c:	e59000c4 	ldr	r0, [r0, #196]	; fField196
        196080:	e3300000 	teq	r0, #0	; 0x0
        196084:	13a01001 	movne	r1, #1	; 0x1
        196088:	1b693875 	blne	1be4264 <CDynamicArray::$__dt(void)>
        19608c:	e1a00004 	mov	r0, r4
        196090:	eb0004b5 	bl	19736c <TQDScaler::Cleanup(void)>
        196094:	e3150001 	tst	r5, #1	; 0x1
        196098:	11a00004 	movne	r0, r4
        19609c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1960a0:	1a68dd8e 	bne	1bcd6e0 <$__dl(void *)>
        1960a4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: GetActualClip__9TQDScalerSFv
 * Address: 001960a8
 */
void TQDScaler::GetActualClip() {
    /*
        1960a8:	e59f0030 	ldr	r0, [pc, #30]	; 1960e0 <GetActualClip__9TQDScalerSFv+0x38>
        1960ac:	e5900000 	ldr	r0, [r0]
        1960b0:	e3300000 	teq	r0, #0	; 0x0
        1960b4:	159000a8 	ldrne	r0, [r0, #168]	; fField168
        1960b8:	11a0f00e 	movne	pc, lr
        1960bc:	e1a0c00d 	mov	ip, sp
        1960c0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1960c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1960c8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1960cc:	e1a0000d 	mov	r0, sp
        1960d0:	eb6965b3 	bl	1bef7a4 <$GetPort(GrafPort **)>
        1960d4:	e49d0004 	ldr	r0, [sp], #4	; fField4
        1960d8:	e5900028 	ldr	r0, [r0, #40]	; fField40
        1960dc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        1960e0:	0c1017a8 	ldceq	7, cr1, [r0], -#672
    */
}

/**
 * Symbol: GetActualVis__9TQDScalerSFv
 * Address: 001960e4
 */
void TQDScaler::GetActualVis() {
    /*
        1960e4:	e59f0034 	ldr	r0, [pc, #34]	; 196120 <GetActualVis__9TQDScalerSFv+0x3c>
        1960e8:	e5900000 	ldr	r0, [r0]
        1960ec:	e3300000 	teq	r0, #0	; 0x0
        1960f0:	159000ac 	ldrne	r0, [r0, #172]	; fField172
        1960f4:	13300000 	teqne	r0, #0	; 0x0
        1960f8:	11a0f00e 	movne	pc, lr
        1960fc:	e1a0c00d 	mov	ip, sp
        196100:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        196104:	e24cb004 	sub	fp, ip, #4	; 0x4
        196108:	e24dd004 	sub	sp, sp, #4	; 0x4
        19610c:	e1a0000d 	mov	r0, sp
        196110:	eb6965a3 	bl	1bef7a4 <$GetPort(GrafPort **)>
        196114:	e49d0004 	ldr	r0, [sp], #4	; fField4
        196118:	e5900024 	ldr	r0, [r0, #36]	; fField36
        19611c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        196120:	0c1017a8 	ldceq	7, cr1, [r0], -#672
    */
}

/**
 * Symbol: ForceScaling__9TQDScalerSFl
 * Address: 00196124
 */
void TQDScaler::ForceScaling() {
    /*
        196124:	e59f1018 	ldr	r1, [pc, #18]	; 196144 <ForceScaling__9TQDScalerSFl+0x20>
        196128:	e5912004 	ldr	r2, [r1, #4]	; fField4
        19612c:	e2023003 	and	r3, r2, #3	; 0x3
        196130:	e3300000 	teq	r0, #0	; 0x0
        196134:	03c20003 	biceq	r0, r2, #3	; 0x3
        196138:	e5a10004 	str	r0, [r1, #4]!	; fField4
        19613c:	e1a00003 	mov	r0, r3
        196140:	e1a0f00e 	mov	pc, lr
        196144:	0c1017a8 	ldceq	7, cr1, [r0], -#672
    */
}

/**
 * Symbol: LowLevelReplaceClip__9TQDScalerSFPP6RegionT1l
 * Address: 00196148
 */
void TQDScaler::LowLevelReplaceClip() {
    /*
        196148:	e1a0c00d 	mov	ip, sp
        19614c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        196150:	e24cb004 	sub	fp, ip, #4	; 0x4
        196154:	e1a06000 	mov	r6, r0
        196158:	e1a04001 	mov	r4, r1
        19615c:	e1a05002 	mov	r5, r2
        196160:	eb651f48 	bl	1adde88 <$GetActualClip__9TQDScalerSFv>
        196164:	e1a07000 	mov	r7, r0
        196168:	e59f805c 	ldr	r8, [pc, #5c]	; 1961cc <LowLevelReplaceClip__9TQDScalerSFPP6RegionT1l+0x84>
        19616c:	e3340000 	teq	r4, #0	; 0x0
        196170:	0a000028 	beq	196218 <LowLevelReplaceClip__9TQDScalerSFPP6RegionT1l+0xd0>
        196174:	e5980000 	ldr	r0, [r8]
        196178:	e3300000 	teq	r0, #0	; 0x0
        19617c:	0a00001e 	beq	1961fc <LowLevelReplaceClip__9TQDScalerSFPP6RegionT1l+0xb4>
        196180:	e1a00004 	mov	r0, r4
        196184:	eb6712ee 	bl	1b5ad44 <$IsWideOpenRgn(Region **)>
        196188:	e3300000 	teq	r0, #0	; 0x0
        19618c:	1a00001a 	bne	1961fc <LowLevelReplaceClip__9TQDScalerSFPP6RegionT1l+0xb4>
        196190:	e1a01007 	mov	r1, r7
        196194:	e1a00004 	mov	r0, r4
        196198:	eb66dd45 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        19619c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1961a0:	eb651b35 	bl	1adce7c <$GetTransformLevel__9TQDScalerSFv>
        1961a4:	e1300005 	teq	r0, r5
        1961a8:	1a000008 	bne	1961d0 <LowLevelReplaceClip__9TQDScalerSFPP6RegionT1l+0x88>
        1961ac:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1961b0:	e598e000 	ldr	lr, [r8]
        1961b4:	e28ee01c 	add	lr, lr, #28	; 0x1c
        1961b8:	e93e100e 	ldmdb	lr!, {r1, r2, r3, ip}
        1961bc:	e92d100e 	stmdb	sp!, {r1, r2, r3, ip}
        1961c0:	e93e100c 	ldmdb	lr!, {r2, r3, ip}
        1961c4:	e92d100c 	stmdb	sp!, {r2, r3, ip}
        1961c8:	ea000005 	b	1961e4 <LowLevelReplaceClip__9TQDScalerSFPP6RegionT1l+0x9c>
        1961cc:	0c1017a8 	ldceq	7, cr1, [r0], -#672
        1961d0:	e5980000 	ldr	r0, [r8]
        1961d4:	e1a02005 	mov	r2, r5
        1961d8:	e5b010c4 	ldr	r1, [r0, #196]!	; fField196
        1961dc:	e1a0000d 	mov	r0, sp
        1961e0:	eb652797 	bl	1ae0044 <$RecalcTransform(TTransform *, CDynamicArray *, long)>
        1961e4:	e28d2010 	add	r2, sp, #16	; 0x10
        1961e8:	e28d1008 	add	r1, sp, #8	; 0x8
        1961ec:	e1a00007 	mov	r0, r7
        1961f0:	eb66edaf 	bl	1b518b4 <$MapRgn__FPP6RegionP4RectT2>
        1961f4:	e1a04007 	mov	r4, r7
        1961f8:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1961fc:	e3340000 	teq	r4, #0	; 0x0
        196200:	0a000004 	beq	196218 <LowLevelReplaceClip__9TQDScalerSFPP6RegionT1l+0xd0>
        196204:	e1a02007 	mov	r2, r7
        196208:	e1a01004 	mov	r1, r4
        19620c:	e1a00006 	mov	r0, r6
        196210:	eb66f5ee 	bl	1b539d0 <$SectRgn__FPP6RegionN21>
        196214:	ea000002 	b	196224 <LowLevelReplaceClip__9TQDScalerSFPP6RegionT1l+0xdc>
        196218:	e1a01007 	mov	r1, r7
        19621c:	e1a00006 	mov	r0, r6
        196220:	eb66dd23 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        196224:	e5980000 	ldr	r0, [r8]
        196228:	e3300000 	teq	r0, #0	; 0x0
        19622c:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        196230:	e59010a0 	ldr	r1, [r0, #160]	; fField160
        196234:	e5900090 	ldr	r0, [r0, #144]	; fField144
        196238:	e5900028 	ldr	r0, [r0, #40]	; fField40
        19623c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        196240:	ea66dd1b 	b	1b4d6b4 <$CopyRgn__FPP6RegionT1>
    */
}

/**
 * Symbol: ReplaceClip__9TQDScalerSFPP6RegionT1l
 * Address: 00196244
 */
void TQDScaler::ReplaceClip() {
    /*
        196244:	e1a0c00d 	mov	ip, sp
        196248:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        19624c:	e24cb004 	sub	fp, ip, #4	; 0x4
        196250:	e1a06000 	mov	r6, r0
        196254:	e1a05001 	mov	r5, r1
        196258:	e1a04002 	mov	r4, r2
        19625c:	e59f7048 	ldr	r7, [pc, #48]	; 1962ac <ReplaceClip__9TQDScalerSFPP6RegionT1l+0x68>
        196260:	e5970000 	ldr	r0, [r7]
        196264:	e3300000 	teq	r0, #0	; 0x0
        196268:	159000b0 	ldrne	r0, [r0, #176]	; fField176
        19626c:	13300000 	teqne	r0, #0	; 0x0
        196270:	0a000008 	beq	196298 <ReplaceClip__9TQDScalerSFPP6RegionT1l+0x54>
        196274:	eb66dd19 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        196278:	e3a08000 	mov	r8, #0	; 0x0
        19627c:	e5970000 	ldr	r0, [r7]
        196280:	e5a080b0 	str	r8, [r0, #176]!	; fField176
        196284:	e5970000 	ldr	r0, [r7]
        196288:	e59000b4 	ldr	r0, [r0, #180]	; fField180
        19628c:	eb66dd13 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        196290:	e5970000 	ldr	r0, [r7]
        196294:	e5a080b4 	str	r8, [r0, #180]!	; fField180
        196298:	e1a02004 	mov	r2, r4
        19629c:	e1a01005 	mov	r1, r5
        1962a0:	e1a00006 	mov	r0, r6
        1962a4:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        1962a8:	ea651ef4 	b	1adde80 <$LowLevelReplaceClip__9TQDScalerSFPP6RegionT1l>
        1962ac:	0c1017a8 	ldceq	7, cr1, [r0], -#672
    */
}

/**
 * Symbol: TQDScaler::SetupScalingPen(unsigned char)
 * Address: 001962b0
 */
TQDScaler::SetupScalingPen(unsigned char) {
    /*
        1962b0:	e31100ff 	tst	r1, #255	; 0xff
        1962b4:	e2802094 	add	r2, r0, #148	; 0x94
        1962b8:	e5903090 	ldr	r3, [r0, #144]	; fField144
        1962bc:	e5933038 	ldr	r3, [r3, #56]	; fField56
        1962c0:	e5823000 	str	r3, [r2]
        1962c4:	11a0f00e 	movne	pc, lr
        1962c8:	e5901096 	ldr	r1, [r0, #150]	; fField150
        1962cc:	e1a01841 	mov	r1, r1, asr #16
        1962d0:	e1a02001 	mov	r2, r1
        1962d4:	e5903000 	ldr	r3, [r0]
        1962d8:	e0020293 	mul	r2, r3, r2
        1962dc:	e2822902 	add	r2, r2, #32768	; 0x8000
        1962e0:	e1a02842 	mov	r2, r2, asr #16
        1962e4:	e1a02802 	mov	r2, r2, lsl #16
        1962e8:	e1a02842 	mov	r2, r2, asr #16
        1962ec:	e3520001 	cmp	r2, #1	; 0x1
        1962f0:	b3a02001 	movlt	r2, #1	; 0x1
        1962f4:	e5903090 	ldr	r3, [r0, #144]	; fField144
        1962f8:	e5c3203b 	strb	r2, [r3, #59]
        1962fc:	e1a02442 	mov	r2, r2, asr #8
        196300:	e5c3203a 	strb	r2, [r3, #58]
        196304:	e5902004 	ldr	r2, [r0, #4]	; fField4
        196308:	e0020291 	mul	r2, r1, r2
        19630c:	e2821902 	add	r1, r2, #32768	; 0x8000
        196310:	e1a01841 	mov	r1, r1, asr #16
        196314:	e1a01801 	mov	r1, r1, lsl #16
        196318:	e1a01841 	mov	r1, r1, asr #16
        19631c:	e3510001 	cmp	r1, #1	; 0x1
        196320:	b3a01001 	movlt	r1, #1	; 0x1
        196324:	e5900090 	ldr	r0, [r0, #144]	; fField144
        196328:	e5c01039 	strb	r1, [r0, #57]	; fField57
        19632c:	e1a01441 	mov	r1, r1, asr #8
        196330:	e5c01038 	strb	r1, [r0, #56]	; fField56
        196334:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TQDScaler::RestoreScalingPen(void)
 * Address: 00196338
 */
TQDScaler::RestoreScalingPen(void) {
    /*
        196338:	e5901090 	ldr	r1, [r0, #144]	; fField144
        19633c:	e5900094 	ldr	r0, [r0, #148]	; fField148
        196340:	e5a10038 	str	r0, [r1, #56]!	; fField56
        196344:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TQDScaler::SetupScalingRegions(void)
 * Address: 00196348
 */
TQDScaler::SetupScalingRegions(void) {
    /*
        196348:	e1a0c00d 	mov	ip, sp
        19634c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        196350:	e24cb004 	sub	fp, ip, #4	; 0x4
        196354:	e1a04000 	mov	r4, r0
        196358:	e59000c0 	ldr	r0, [r0, #192]	; fField192
        19635c:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
        196360:	e58400c0 	str	r0, [r4, #192]	; fField192
        196364:	e5940090 	ldr	r0, [r4, #144]	; fField144
        196368:	e5900028 	ldr	r0, [r0, #40]	; fField40
        19636c:	e5840098 	str	r0, [r4, #152]	; fField152
        196370:	e59410a0 	ldr	r1, [r4, #160]	; fField160
        196374:	eb66e0ed 	bl	1b4e730 <$EqualRgn__FPP6RegionT1>
        196378:	e3300000 	teq	r0, #0	; 0x0
        19637c:	1a000036 	bne	19645c <TQDScaler::SetupScalingRegions(void)+0x114>
        196380:	e5940098 	ldr	r0, [r4, #152]	; fField152
        196384:	eb67126e 	bl	1b5ad44 <$IsWideOpenRgn(Region **)>
        196388:	e3300000 	teq	r0, #0	; 0x0
        19638c:	0a000003 	beq	1963a0 <TQDScaler::SetupScalingRegions(void)+0x58>
        196390:	e59400a0 	ldr	r0, [r4, #160]	; fField160
        196394:	eb67126a 	bl	1b5ad44 <$IsWideOpenRgn(Region **)>
        196398:	e3300000 	teq	r0, #0	; 0x0
        19639c:	1a00002e 	bne	19645c <TQDScaler::SetupScalingRegions(void)+0x114>
        1963a0:	e59460a8 	ldr	r6, [r4, #168]	; fField168
        1963a4:	e5947098 	ldr	r7, [r4, #152]	; fField152
        1963a8:	eb651ab3 	bl	1adce7c <$GetTransformLevel__9TQDScalerSFv>
        1963ac:	e1a05000 	mov	r5, r0
        1963b0:	e59410b0 	ldr	r1, [r4, #176]	; fField176
        1963b4:	e3310000 	teq	r1, #0	; 0x0
        1963b8:	1a000009 	bne	1963e4 <TQDScaler::SetupScalingRegions(void)+0x9c>
        1963bc:	e58450b8 	str	r5, [r4, #184]
        1963c0:	e59400a0 	ldr	r0, [r4, #160]	; fField160
        1963c4:	e58400b0 	str	r0, [r4, #176]	; fField176
        1963c8:	eb66ed3e 	bl	1b518c8 <$NewRgn(void)>
        1963cc:	e58400a0 	str	r0, [r4, #160]	; fField160
        1963d0:	e59400a8 	ldr	r0, [r4, #168]	; fField168
        1963d4:	e58400b4 	str	r0, [r4, #180]	; fField180
        1963d8:	eb66ed3a 	bl	1b518c8 <$NewRgn(void)>
        1963dc:	e58400a8 	str	r0, [r4, #168]	; fField168
        1963e0:	ea000019 	b	19644c <TQDScaler::SetupScalingRegions(void)+0x104>
        1963e4:	e5940098 	ldr	r0, [r4, #152]	; fField152
        1963e8:	e59450b8 	ldr	r5, [r4, #184]
        1963ec:	e59460b4 	ldr	r6, [r4, #180]	; fField180
        1963f0:	eb66e0ce 	bl	1b4e730 <$EqualRgn__FPP6RegionT1>
        1963f4:	e3300000 	teq	r0, #0	; 0x0
        1963f8:	1a000007 	bne	19641c <TQDScaler::SetupScalingRegions(void)+0xd4>
        1963fc:	e5940098 	ldr	r0, [r4, #152]	; fField152
        196400:	eb67124f 	bl	1b5ad44 <$IsWideOpenRgn(Region **)>
        196404:	e3300000 	teq	r0, #0	; 0x0
        196408:	0a00000f 	beq	19644c <TQDScaler::SetupScalingRegions(void)+0x104>
        19640c:	e59400b0 	ldr	r0, [r4, #176]	; fField176
        196410:	eb67124b 	bl	1b5ad44 <$IsWideOpenRgn(Region **)>
        196414:	e3300000 	teq	r0, #0	; 0x0
        196418:	0a00000b 	beq	19644c <TQDScaler::SetupScalingRegions(void)+0x104>
        19641c:	e59400a0 	ldr	r0, [r4, #160]	; fField160
        196420:	eb66dcae 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        196424:	e59400b0 	ldr	r0, [r4, #176]	; fField176
        196428:	e3a07000 	mov	r7, #0	; 0x0
        19642c:	e58400a0 	str	r0, [r4, #160]	; fField160
        196430:	e58470b0 	str	r7, [r4, #176]	; fField176
        196434:	e59400a8 	ldr	r0, [r4, #168]	; fField168
        196438:	eb66dca8 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        19643c:	e59400b4 	ldr	r0, [r4, #180]	; fField180
        196440:	e58470b4 	str	r7, [r4, #180]	; fField180
        196444:	e3a07000 	mov	r7, #0	; 0x0
        196448:	e58400a8 	str	r0, [r4, #168]	; fField168
        19644c:	e1a02005 	mov	r2, r5
        196450:	e1a01007 	mov	r1, r7
        196454:	e1a00006 	mov	r0, r6
        196458:	eb651e88 	bl	1adde80 <$LowLevelReplaceClip__9TQDScalerSFPP6RegionT1l>
        19645c:	e5940090 	ldr	r0, [r4, #144]	; fField144
        196460:	e59410a8 	ldr	r1, [r4, #168]	; fField168
        196464:	e5a01028 	str	r1, [r0, #40]!	; fField40
        196468:	e5940090 	ldr	r0, [r4, #144]	; fField144
        19646c:	e5900024 	ldr	r0, [r0, #36]	; fField36
        196470:	e584009c 	str	r0, [r4, #156]	; fField156
        196474:	e5d410bc 	ldrb	r1, [r4, #188]
        196478:	e3310000 	teq	r1, #0	; 0x0
        19647c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        196480:	e59410a4 	ldr	r1, [r4, #164]	; fField164
        196484:	eb66e0a9 	bl	1b4e730 <$EqualRgn__FPP6RegionT1>
        196488:	e3300000 	teq	r0, #0	; 0x0
        19648c:	1a000019 	bne	1964f8 <TQDScaler::SetupScalingRegions(void)+0x1b0>
        196490:	e594009c 	ldr	r0, [r4, #156]	; fField156
        196494:	e59410a4 	ldr	r1, [r4, #164]	; fField164
        196498:	eb66dc85 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        19649c:	e59410ac 	ldr	r1, [r4, #172]	; fField172
        1964a0:	e3310000 	teq	r1, #0	; 0x0
        1964a4:	1594009c 	ldrne	r0, [r4, #156]	; fField156
        1964a8:	1b66dc81 	blne	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        1964ac:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1964b0:	eb671223 	bl	1b5ad44 <$IsWideOpenRgn(Region **)>
        1964b4:	e3300000 	teq	r0, #0	; 0x0
        1964b8:	1a00000e 	bne	1964f8 <TQDScaler::SetupScalingRegions(void)+0x1b0>
        1964bc:	e59400ac 	ldr	r0, [r4, #172]	; fField172
        1964c0:	e3300000 	teq	r0, #0	; 0x0
        1964c4:	1a000004 	bne	1964dc <TQDScaler::SetupScalingRegions(void)+0x194>
        1964c8:	eb66ecfe 	bl	1b518c8 <$NewRgn(void)>
        1964cc:	e58400ac 	str	r0, [r4, #172]	; fField172
        1964d0:	e1a01000 	mov	r1, r0
        1964d4:	e594009c 	ldr	r0, [r4, #156]	; fField156
        1964d8:	eb66dc75 	bl	1b4d6b4 <$CopyRgn__FPP6RegionT1>
        1964dc:	e3a01000 	mov	r1, #0	; 0x0
        1964e0:	e59400c4 	ldr	r0, [r4, #196]	; fField196
        1964e4:	eb695c6a 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        1964e8:	e2802010 	add	r2, r0, #16	; 0x10
        1964ec:	e2801008 	add	r1, r0, #8	; 0x8
        1964f0:	e59400ac 	ldr	r0, [r4, #172]	; fField172
        1964f4:	eb66ecee 	bl	1b518b4 <$MapRgn__FPP6RegionP4RectT2>
        1964f8:	e59400ac 	ldr	r0, [r4, #172]	; fField172
        1964fc:	e3300000 	teq	r0, #0	; 0x0
        196500:	15b41090 	ldrne	r1, [r4, #144]!	; fField144
        196504:	15a10024 	strne	r0, [r1, #36]!	; fField36
        196508:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TQDScaler::RestoreScalingRegions(void)
 * Address: 0019650c
 */
TQDScaler::RestoreScalingRegions(void) {
    /*
        19650c:	e59010c0 	ldr	r1, [r0, #192]	; fField192
        196510:	e3c11102 	bic	r1, r1, #-2147483648	; 0x80000000
        196514:	e58010c0 	str	r1, [r0, #192]	; fField192
        196518:	e5901098 	ldr	r1, [r0, #152]	; fField152
        19651c:	e5902090 	ldr	r2, [r0, #144]	; fField144
        196520:	e5a21028 	str	r1, [r2, #40]!	; fField40
        196524:	e590109c 	ldr	r1, [r0, #156]	; fField156
        196528:	e5900090 	ldr	r0, [r0, #144]	; fField144
        19652c:	e5a01024 	str	r1, [r0, #36]!	; fField36
        196530:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TQDScaler::TestFeature(long)
 * Address: 00196534
 */
TQDScaler::TestFeature(long) {
    /*
        196534:	e59000c0 	ldr	r0, [r0, #192]	; fField192
        196538:	e0000001 	and	r0, r0, r1
        19653c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: StartScaling__9TQDScalerSFP10TTransformUcl
 * Address: 00196540
 */
void TQDScaler::StartScaling() {
    /*
        196540:	e1a0c00d 	mov	ip, sp
        196544:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        196548:	e24cb004 	sub	fp, ip, #4	; 0x4
        19654c:	e1a05000 	mov	r5, r0
        196550:	e1a04002 	mov	r4, r2
        196554:	e20170ff 	and	r7, r1, #255	; 0xff
        196558:	e59f6068 	ldr	r6, [pc, #68]	; 1965c8 <StartScaling__9TQDScalerSFP10TTransformUcl+0x88>
        19655c:	e5960000 	ldr	r0, [r6]
        196560:	e3300000 	teq	r0, #0	; 0x0
        196564:	1a000012 	bne	1965b4 <StartScaling__9TQDScalerSFP10TTransformUcl+0x74>
        196568:	e3a00000 	mov	r0, #0	; 0x0
        19656c:	eb64f93e 	bl	1ad4a6c <TQDScaler::$__ct(void)>
        196570:	e5860000 	str	r0, [r6]
        196574:	e3300000 	teq	r0, #0	; 0x0
        196578:	159000c4 	ldrne	r0, [r0, #196]	; fField196
        19657c:	13300000 	teqne	r0, #0	; 0x0
        196580:	1a000005 	bne	19659c <StartScaling__9TQDScalerSFP10TTransformUcl+0x5c>
        196584:	e59f0040 	ldr	r0, [pc, #40]	; 1965cc <StartScaling__9TQDScalerSFP10TTransformUcl+0x8c>	; fField40
        196588:	e5900000 	ldr	r0, [r0]
        19658c:	e3a02000 	mov	r2, #0	; 0x0
        196590:	e3a010e9 	mov	r1, #233	; 0xe9
        196594:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        196598:	eb6932ff 	bl	1be319c <$Throw>
        19659c:	e5960000 	ldr	r0, [r6]
        1965a0:	eb000279 	bl	196f8c <TQDScaler::Setup(void)>
        1965a4:	e5960000 	ldr	r0, [r6]
        1965a8:	e5c070bc 	strb	r7, [r0, #188]
        1965ac:	e5960000 	ldr	r0, [r6]
        1965b0:	e5a040c0 	str	r4, [r0, #192]!	; fField192
        1965b4:	e1a01005 	mov	r1, r5
        1965b8:	e3a02000 	mov	r2, #0	; 0x0
        1965bc:	e5960000 	ldr	r0, [r6]
        1965c0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1965c4:	ea64f91e 	b	1ad4a44 <TQDScaler::$UseTransform(TTransform *, unsigned char)>
        1965c8:	0c1017a8 	ldceq	7, cr1, [r0], -#672
        1965cc:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: ReplaceScaling__9TQDScalerSFP10TTransform
 * Address: 00196de8
 */
void TQDScaler::ReplaceScaling() {
    /*
        196de8:	e1a01000 	mov	r1, r0
        196dec:	e59f0008 	ldr	r0, [pc, #8]	; 196dfc <ReplaceScaling__9TQDScalerSFP10TTransform+0x14>
        196df0:	e5900000 	ldr	r0, [r0]
        196df4:	e3a02001 	mov	r2, #1	; 0x1
        196df8:	ea64f711 	b	1ad4a44 <TQDScaler::$UseTransform(TTransform *, unsigned char)>
        196dfc:	0c1017a8 	ldceq	7, cr1, [r0], -#672
    */
}

/**
 * Symbol: TQDScaler::Setup(void)
 * Address: 00196f8c
 */
TQDScaler::Setup(void) {
    /*
        196f8c:	e1a0c00d 	mov	ip, sp
        196f90:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        196f94:	e24cb004 	sub	fp, ip, #4	; 0x4
        196f98:	e1a04000 	mov	r4, r0
        196f9c:	e24dd004 	sub	sp, sp, #4	; 0x4
        196fa0:	e1a0000d 	mov	r0, sp
        196fa4:	eb6961fe 	bl	1bef7a4 <$GetPort(GrafPort **)>
        196fa8:	e49d0004 	ldr	r0, [sp], #4	; fField4
        196fac:	e5840090 	str	r0, [r4, #144]	; fField144
        196fb0:	e5900040 	ldr	r0, [r0, #64]
        196fb4:	e584008c 	str	r0, [r4, #140]	; fField140
        196fb8:	e284501c 	add	r5, r4, #28	; 0x1c
        196fbc:	e3300000 	teq	r0, #0	; 0x0
        196fc0:	0a000009 	beq	196fec <TQDScaler::Setup(void)+0x60>
        196fc4:	e1a0e005 	mov	lr, r5
        196fc8:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        196fcc:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        196fd0:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        196fd4:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        196fd8:	e8b0100e 	ldmia	r0!, {r1, r2, r3, ip}
        196fdc:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        196fe0:	e8901008 	ldmia	r0, {r3, ip}
        196fe4:	e88e1008 	stmia	lr, {r3, ip}
        196fe8:	ea000001 	b	196ff4 <TQDScaler::Setup(void)+0x68>
        196fec:	e1a00005 	mov	r0, r5
        196ff0:	eb66f687 	bl	1b54a14 <$SetStdProcs(QDProcs *)>
        196ff4:	e2840054 	add	r0, r4, #84	; 0x54
        196ff8:	e1a0e000 	mov	lr, r0
        196ffc:	e8b5100e 	ldmia	r5!, {r1, r2, r3, ip}
        197000:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        197004:	e8b5100e 	ldmia	r5!, {r1, r2, r3, ip}
        197008:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        19700c:	e8b5100e 	ldmia	r5!, {r1, r2, r3, ip}
        197010:	e8ae100e 	stmia	lr!, {r1, r2, r3, ip}
        197014:	e8951008 	ldmia	r5, {r3, ip}
        197018:	e88e1008 	stmia	lr, {r3, ip}
        19701c:	e59f108c 	ldr	r1, [pc, #8c]	; 1970b0 <TQDScaler::Setup(void)+0x124>
        197020:	e5841088 	str	r1, [r4, #136]	; fField136
        197024:	e59f1088 	ldr	r1, [pc, #88]	; 1970b4 <TQDScaler::Setup(void)+0x128>	; fField88
        197028:	e5841064 	str	r1, [r4, #100]	; fField100
        19702c:	e59f1084 	ldr	r1, [pc, #84]	; 1970b8 <TQDScaler::Setup(void)+0x12c>	; fField84
        197030:	e584107c 	str	r1, [r4, #124]	; fField124
        197034:	e59f1080 	ldr	r1, [pc, #80]	; 1970bc <TQDScaler::Setup(void)+0x130>
        197038:	e5841084 	str	r1, [r4, #132]	; fField132
        19703c:	e59f107c 	ldr	r1, [pc, #7c]	; 1970c0 <TQDScaler::Setup(void)+0x134>
        197040:	e5841068 	str	r1, [r4, #104]	; fField104
        197044:	e59f1078 	ldr	r1, [pc, #78]	; 1970c4 <TQDScaler::Setup(void)+0x138>
        197048:	e5841054 	str	r1, [r4, #84]	; fField84
        19704c:	e59f1074 	ldr	r1, [pc, #74]	; 1970c8 <TQDScaler::Setup(void)+0x13c>
        197050:	e5841074 	str	r1, [r4, #116]	; fField116
        197054:	e59f1070 	ldr	r1, [pc, #70]	; 1970cc <TQDScaler::Setup(void)+0x140>
        197058:	e5841080 	str	r1, [r4, #128]	; fField128
        19705c:	e59f106c 	ldr	r1, [pc, #6c]	; 1970d0 <TQDScaler::Setup(void)+0x144>
        197060:	e5841058 	str	r1, [r4, #88]	; fField88
        197064:	e59f1068 	ldr	r1, [pc, #68]	; 1970d4 <TQDScaler::Setup(void)+0x148>
        197068:	e584105c 	str	r1, [r4, #92]	; fField92
        19706c:	e59f1064 	ldr	r1, [pc, #64]	; 1970d8 <TQDScaler::Setup(void)+0x14c>
        197070:	e584106c 	str	r1, [r4, #108]	; fField108
        197074:	e5941090 	ldr	r1, [r4, #144]	; fField144
        197078:	e5a10040 	str	r0, [r1, #64]!
        19707c:	eb66ea11 	bl	1b518c8 <$NewRgn(void)>
        197080:	e58400a0 	str	r0, [r4, #160]	; fField160
        197084:	eb66e1cb 	bl	1b4f7b8 <$GetClip(Region **)>
        197088:	eb66ea0e 	bl	1b518c8 <$NewRgn(void)>
        19708c:	e58400a4 	str	r0, [r4, #164]	; fField164
        197090:	eb66ea0c 	bl	1b518c8 <$NewRgn(void)>
        197094:	e58400a8 	str	r0, [r4, #168]	; fField168
        197098:	eb66e1c6 	bl	1b4f7b8 <$GetClip(Region **)>
        19709c:	e3a00000 	mov	r0, #0	; 0x0
        1970a0:	e58400ac 	str	r0, [r4, #172]	; fField172
        1970a4:	e58400b0 	str	r0, [r4, #176]	; fField176
        1970a8:	e5a400b4 	str	r0, [r4, #180]!	; fField180
        1970ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1970b0:	01aa10c4 	moveq	r1, r4, asr #1
        1970b4:	01aa10a8 	moveq	r1, r8, lsr #1
        1970b8:	01aa10b8 	streqh	r1, [sl, r8]!
        1970bc:	01aa10c0 	moveq	r1, r0, asr #1
        1970c0:	01aa10ac 	moveq	r1, ip, lsr #1
        1970c4:	01aa109c 	streqb	r1, [sl, ip]!
        1970c8:	01aa10b4 	streqh	r1, [sl, r4]!
        1970cc:	01aa10bc 	streqh	r1, [sl, ip]!
        1970d0:	01aa10a0 	moveq	r1, r0, lsr #1
        1970d4:	01aa10a4 	moveq	r1, r4, lsr #1
        1970d8:	01aa10b0 	streqh	r1, [sl, r0]!
    */
}

/**
 * Symbol: TQDScaler::UseTransform(TTransform *, unsigned char)
 * Address: 001972a8
 */
TQDScaler::UseTransform(TTransform *, unsigned char) {
    /*
        1972a8:	e1a0c00d 	mov	ip, sp
        1972ac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1972b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1972b4:	e1a04000 	mov	r4, r0
        1972b8:	e1b03001 	movs	r3, r1
        1972bc:	e20220ff 	and	r2, r2, #255	; 0xff
        1972c0:	0a00000b 	beq	1972f4 <TQDScaler::UseTransform(TTransform *, unsigned char)+0x4c>
        1972c4:	e59400c4 	ldr	r0, [r4, #196]	; fField196
        1972c8:	e3320000 	teq	r2, #0	; 0x0
        1972cc:	e5901000 	ldr	r1, [r0]
        1972d0:	0a000004 	beq	1972e8 <TQDScaler::UseTransform(TTransform *, unsigned char)+0x40>
        1972d4:	e2411001 	sub	r1, r1, #1	; 0x1
        1972d8:	e1a02003 	mov	r2, r3
        1972dc:	e3a03001 	mov	r3, #1	; 0x1
        1972e0:	eb6954d9 	bl	1bec64c <CDynamicArray::$ReplaceElementsAt(long, void *, long)>
        1972e4:	ea000002 	b	1972f4 <TQDScaler::UseTransform(TTransform *, unsigned char)+0x4c>
        1972e8:	e1a02003 	mov	r2, r3
        1972ec:	e3a03001 	mov	r3, #1	; 0x1
        1972f0:	eb694880 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        1972f4:	eb6516e0 	bl	1adce7c <$GetTransformLevel__9TQDScalerSFv>
        1972f8:	e1a02000 	mov	r2, r0
        1972fc:	e59410c4 	ldr	r1, [r4, #196]	; fField196
        197300:	e1a00004 	mov	r0, r4
        197304:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        197308:	ea65234d 	b	1ae0044 <$RecalcTransform(TTransform *, CDynamicArray *, long)>
    */
}

/**
 * Symbol: StopScaling__9TQDScalerSFv
 * Address: 0019730c
 */
void TQDScaler::StopScaling() {
    /*
        19730c:	e1a0c00d 	mov	ip, sp
        197310:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        197314:	e24cb004 	sub	fp, ip, #4	; 0x4
        197318:	e59f4048 	ldr	r4, [pc, #48]	; 197368 <StopScaling__9TQDScalerSFv+0x5c>
        19731c:	e5942000 	ldr	r2, [r4]
        197320:	e59200c4 	ldr	r0, [r2, #196]	; fField196
        197324:	e5901000 	ldr	r1, [r0]
        197328:	e2411001 	sub	r1, r1, #1	; 0x1
        19732c:	e3510000 	cmp	r1, #0	; 0x0
        197330:	da000006 	ble	197350 <StopScaling__9TQDScalerSFv+0x44>
        197334:	e3a02001 	mov	r2, #1	; 0x1
        197338:	eb6954bd 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        19733c:	e3a02000 	mov	r2, #0	; 0x0
        197340:	e3a01000 	mov	r1, #0	; 0x0
        197344:	e5940000 	ldr	r0, [r4]
        197348:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        19734c:	ea64f5bc 	b	1ad4a44 <TQDScaler::$UseTransform(TTransform *, unsigned char)>
        197350:	e1b00002 	movs	r0, r2
        197354:	13a01001 	movne	r1, #1	; 0x1
        197358:	1bfffb42 	blne	196068 <TQDScaler::__dt(void)>
        19735c:	e3a00000 	mov	r0, #0	; 0x0
        197360:	e5840000 	str	r0, [r4]
        197364:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        197368:	0c1017a8 	ldceq	7, cr1, [r0], -#672
    */
}

/**
 * Symbol: TQDScaler::Cleanup(void)
 * Address: 0019736c
 */
TQDScaler::Cleanup(void) {
    /*
        19736c:	e1a0c00d 	mov	ip, sp
        197370:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        197374:	e24cb004 	sub	fp, ip, #4	; 0x4
        197378:	e1a04000 	mov	r4, r0
        19737c:	e59000a0 	ldr	r0, [r0, #160]	; fField160
        197380:	eb66d8d6 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        197384:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        197388:	eb66d8d4 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        19738c:	e59400a8 	ldr	r0, [r4, #168]	; fField168
        197390:	eb66d8d2 	bl	1b4d6e0 <$DisposeRgn(Region **)>
        197394:	e59400ac 	ldr	r0, [r4, #172]	; fField172
        197398:	e3300000 	teq	r0, #0	; 0x0
        19739c:	1b66d8cf 	blne	1b4d6e0 <$DisposeRgn(Region **)>
        1973a0:	e59400b0 	ldr	r0, [r4, #176]	; fField176
        1973a4:	e3300000 	teq	r0, #0	; 0x0
        1973a8:	1b66d8cc 	blne	1b4d6e0 <$DisposeRgn(Region **)>
        1973ac:	e59400b4 	ldr	r0, [r4, #180]	; fField180
        1973b0:	e3300000 	teq	r0, #0	; 0x0
        1973b4:	1b66d8c9 	blne	1b4d6e0 <$DisposeRgn(Region **)>
        1973b8:	e2844088 	add	r4, r4, #136	; 0x88
        1973bc:	e9b40003 	ldmib	r4!, {r0, r1}
        1973c0:	e5a10040 	str	r0, [r1, #64]!
        1973c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: GetTransformLevel__9TQDScalerSFv
 * Address: 001973c8
 */
void TQDScaler::GetTransformLevel() {
    /*
        1973c8:	e59f0014 	ldr	r0, [pc, #14]	; 1973e4 <GetTransformLevel__9TQDScalerSFv+0x1c>
        1973cc:	e5900000 	ldr	r0, [r0]
        1973d0:	e3300000 	teq	r0, #0	; 0x0
        1973d4:	03a00000 	moveq	r0, #0	; 0x0
        1973d8:	159000c4 	ldrne	r0, [r0, #196]	; fField196
        1973dc:	15900000 	ldrne	r0, [r0]
        1973e0:	e1a0f00e 	mov	pc, lr
        1973e4:	0c1017a8 	ldceq	7, cr1, [r0], -#672
    */
}

