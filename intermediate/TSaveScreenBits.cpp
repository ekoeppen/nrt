#include "include/TSaveScreenBits.h"

/**
 * Symbol: TSaveScreenBits::__ct(void)
 * Address: 001c60b8
 */
TSaveScreenBits::TSaveScreenBits(void) {
    /*
        1c60b8:	e1a0c00d 	mov	ip, sp
        1c60bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1c60c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c60c4:	e1b04000 	movs	r4, r0
        1c60c8:	1a000003 	bne	1c60dc <TSaveScreenBits::__ct(void)+0x24>
        1c60cc:	e3a0002c 	mov	r0, #44	; 0x2c
        1c60d0:	eb682198 	bl	1bce738 <$__nw(unsigned int)>
        1c60d4:	e1b04000 	movs	r4, r0
        1c60d8:	0a000008 	beq	1c6100 <TSaveScreenBits::__ct(void)+0x48>
        1c60dc:	e3a00000 	mov	r0, #0	; 0x0
        1c60e0:	e5840000 	str	r0, [r4]
        1c60e4:	e3a00001 	mov	r0, #1	; 0x1
        1c60e8:	e584001c 	str	r0, [r4, #28]
        1c60ec:	e59f0014 	ldr	r0, [pc, #14]	; 1c6108 <TSaveScreenBits::__ct(void)+0x50>	; fField14
        1c60f0:	e5840028 	str	r0, [r4, #40]
        1c60f4:	e5844024 	str	r4, [r4, #36]
        1c60f8:	e284001c 	add	r0, r4, #28	; 0x1c
        1c60fc:	eb6867de 	bl	1be007c <$AddExceptionHandler>
        1c6100:	e1a00004 	mov	r0, r4
        1c6104:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1c6108:	01b4d6e4 	moveqs	sp, r4, ror #13
    */
}

/**
 * Symbol: TSaveScreenBits::__dt(void)
 * Address: 001c610c
 */
TSaveScreenBits::~TSaveScreenBits(void) {
    /*
        1c610c:	e1a0c00d 	mov	ip, sp
        1c6110:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1c6114:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c6118:	e1a04000 	mov	r4, r0
        1c611c:	e1a05001 	mov	r5, r1
        1c6120:	e5900000 	ldr	r0, [r0]
        1c6124:	e3300000 	teq	r0, #0	; 0x0
        1c6128:	1b686be1 	blne	1be10b4 <$DisposPtr>
        1c612c:	e284001c 	add	r0, r4, #28	; 0x1c
        1c6130:	eb68700b 	bl	1be2164 <$RemoveExceptionHandler>
        1c6134:	e3150001 	tst	r5, #1	; 0x1
        1c6138:	11a00004 	movne	r0, r4
        1c613c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1c6140:	1a681d66 	bne	1bcd6e0 <$__dl(void *)>
        1c6144:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSaveScreenBits::AllocateBuffers(Rect *)
 * Address: 001c6148
 */
TSaveScreenBits::AllocateBuffers(Rect *) {
    /*
        1c6148:	e1a0c00d 	mov	ip, sp
        1c614c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1c6150:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c6154:	e1a05000 	mov	r5, r0
        1c6158:	e1a04001 	mov	r4, r1
        1c615c:	e3a07001 	mov	r7, #1	; 0x1
        1c6160:	e3a08000 	mov	r8, #0	; 0x0
        1c6164:	e52d806c 	str	r8, [sp, -#108]!
        1c6168:	e28d0008 	add	r0, sp, #8	; 0x8
        1c616c:	eb67b200 	bl	1bb2974 <$setjmp>
        1c6170:	e3300000 	teq	r0, #0	; 0x0
        1c6174:	1a000043 	bne	1c6288 <TSaveScreenBits::AllocateBuffers(Rect *)+0x140>
        1c6178:	e1a0000d 	mov	r0, sp
        1c617c:	eb6867be 	bl	1be007c <$AddExceptionHandler>
        1c6180:	e24dd008 	sub	sp, sp, #8	; 0x8
        1c6184:	e59f60f4 	ldr	r6, [pc, #f4]	; 1c6280 <TSaveScreenBits::AllocateBuffers(Rect *)+0x138>
        1c6188:	e3340000 	teq	r4, #0	; 0x0
        1c618c:	1a000010 	bne	1c61d4 <TSaveScreenBits::AllocateBuffers(Rect *)+0x8c>
        1c6190:	e1a0400d 	mov	r4, sp
        1c6194:	e24dd008 	sub	sp, sp, #8	; 0x8
        1c6198:	e286100c 	add	r1, r6, #12	; 0xc
        1c619c:	e8915000 	ldmia	r1, {ip, lr}
        1c61a0:	e88d5000 	stmia	sp, {ip, lr}
        1c61a4:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        1c61a8:	e1a03843 	mov	r3, r3, asr #16
        1c61ac:	e92d0008 	stmdb	sp!, {r3}
        1c61b0:	e59d300a 	ldr	r3, [sp, #10]
        1c61b4:	e1a03843 	mov	r3, r3, asr #16
        1c61b8:	e59d1006 	ldr	r1, [sp, #6]
        1c61bc:	e1a01841 	mov	r1, r1, asr #16
        1c61c0:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        1c61c4:	e1a02842 	mov	r2, r2, asr #16
        1c61c8:	e1a00004 	mov	r0, r4
        1c61cc:	eb663a0e 	bl	1b54a0c <$SetRect__FP4RectlN32>
        1c61d0:	e28dd00c 	add	sp, sp, #12	; 0xc
        1c61d4:	e5960014 	ldr	r0, [r6, #20]	; fField20
        1c61d8:	e20060ff 	and	r6, r0, #255	; 0xff
        1c61dc:	e5941006 	ldr	r1, [r4, #6]
        1c61e0:	e1a01841 	mov	r1, r1, asr #16
        1c61e4:	e5940002 	ldr	r0, [r4, #2]
        1c61e8:	e0410840 	sub	r0, r1, r0, asr #16
        1c61ec:	e280001f 	add	r0, r0, #31	; 0x1f
        1c61f0:	e3c0001f 	bic	r0, r0, #31	; 0x1f
        1c61f4:	e1a001c0 	mov	r0, r0, asr #3
        1c61f8:	e0000096 	mul	r0, r6, r0
        1c61fc:	e5c50005 	strb	r0, [r5, #5]	; fField5
        1c6200:	e1a00440 	mov	r0, r0, asr #8
        1c6204:	e5c50004 	strb	r0, [r5, #4]	; fField4
        1c6208:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1c620c:	e1a00840 	mov	r0, r0, asr #16
        1c6210:	e5941000 	ldr	r1, [r4]
        1c6214:	e0400841 	sub	r0, r0, r1, asr #16
        1c6218:	e5951004 	ldr	r1, [r5, #4]	; fField4
        1c621c:	e1a01841 	mov	r1, r1, asr #16
        1c6220:	e0000091 	mul	r0, r1, r0
        1c6224:	eb686fc5 	bl	1be2140 <$NewPtr>
        1c6228:	e5850000 	str	r0, [r5]
        1c622c:	e3300000 	teq	r0, #0	; 0x0
        1c6230:	1a000005 	bne	1c624c <TSaveScreenBits::AllocateBuffers(Rect *)+0x104>
        1c6234:	e59f0048 	ldr	r0, [pc, #48]	; 1c6284 <TSaveScreenBits::AllocateBuffers(Rect *)+0x13c>
        1c6238:	e5900000 	ldr	r0, [r0]
        1c623c:	e3a02000 	mov	r2, #0	; 0x0
        1c6240:	e3a010e9 	mov	r1, #233	; 0xe9
        1c6244:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        1c6248:	eb6873d3 	bl	1be319c <$Throw>
        1c624c:	e2850008 	add	r0, r5, #8	; 0x8
        1c6250:	e8941008 	ldmia	r4, {r3, ip}
        1c6254:	e8801008 	stmia	r0, {r3, ip}
        1c6258:	e2860101 	add	r0, r6, #1073741824	; 0x40000000
        1c625c:	e5850010 	str	r0, [r5, #16]	; fField16
        1c6260:	e3a00048 	mov	r0, #72	; 0x48
        1c6264:	e5c50015 	strb	r0, [r5, #21]	; fField21
        1c6268:	e5c58014 	strb	r8, [r5, #20]	; fField20
        1c626c:	e5c50017 	strb	r0, [r5, #23]	; fField23
        1c6270:	e5c58016 	strb	r8, [r5, #22]	; fField22
        1c6274:	e5a58018 	str	r8, [r5, #24]!	; fField24
        1c6278:	e28dd008 	add	sp, sp, #8	; 0x8
        1c627c:	ea00000a 	b	1c62ac <TSaveScreenBits::AllocateBuffers(Rect *)+0x164>
        1c6280:	0c107d88 	ldceq	13, cr7, [r0], -#544
        1c6284:	00371318 	eoreqs	r1, r7, r8, lsl r3
        1c6288:	e59d0060 	ldr	r0, [sp, #96]
        1c628c:	e59f1028 	ldr	r1, [pc, #28]	; 1c62bc <TSaveScreenBits::AllocateBuffers(Rect *)+0x174>
        1c6290:	e5911000 	ldr	r1, [r1]
        1c6294:	eb6873be 	bl	1be3194 <$Subexception>
        1c6298:	e3300000 	teq	r0, #0	; 0x0
        1c629c:	13a07000 	movne	r7, #0	; 0x0
        1c62a0:	1a000001 	bne	1c62ac <TSaveScreenBits::AllocateBuffers(Rect *)+0x164>
        1c62a4:	e1a0000d 	mov	r0, sp
        1c62a8:	eb686fa9 	bl	1be2154 <$NextHandler>
        1c62ac:	e1a0000d 	mov	r0, sp
        1c62b0:	eb686b80 	bl	1be10b8 <$ExitHandler>
        1c62b4:	e1a00007 	mov	r0, r7
        1c62b8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1c62bc:	003712a4 	eoreqs	r1, r7, r4, lsr #5
    */
}

/**
 * Symbol: TSaveScreenBits::SaveScreenBits(void)
 * Address: 001c62c0
 */
TSaveScreenBits::SaveScreenBits(void) {
    /*
        1c62c0:	e1a0c00d 	mov	ip, sp
        1c62c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1c62c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c62cc:	e1a04000 	mov	r4, r0
        1c62d0:	e2805008 	add	r5, r0, #8	; 0x8
        1c62d4:	eb662538 	bl	1b4f7bc <$GetCurrentPort(void)>
        1c62d8:	e3a03000 	mov	r3, #0	; 0x0
        1c62dc:	e3a02000 	mov	r2, #0	; 0x0
        1c62e0:	e92d000c 	stmdb	sp!, {r2, r3}
        1c62e4:	e1a03005 	mov	r3, r5
        1c62e8:	e1a02005 	mov	r2, r5
        1c62ec:	e1a01004 	mov	r1, r4
        1c62f0:	eb68a52a 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
        1c62f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSaveScreenBits::RestoreScreenBits(Rect *, Region **)
 * Address: 001c62f8
 */
TSaveScreenBits::RestoreScreenBits(Rect *, Region **) {
    /*
        1c62f8:	e1a0c00d 	mov	ip, sp
        1c62fc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1c6300:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c6304:	e1a05000 	mov	r5, r0
        1c6308:	e1a04001 	mov	r4, r1
        1c630c:	e1a06002 	mov	r6, r2
        1c6310:	e2801008 	add	r1, r0, #8	; 0x8
        1c6314:	e1a07001 	mov	r7, r1
        1c6318:	e5940000 	ldr	r0, [r4]
        1c631c:	eb663186 	bl	1b5293c <$PtInRect(Point, Rect *)>
        1c6320:	e3300000 	teq	r0, #0	; 0x0
        1c6324:	0a000008 	beq	1c634c <TSaveScreenBits::RestoreScreenBits(Rect *, Region **)+0x54>
        1c6328:	e5941004 	ldr	r1, [r4, #4]	; fField4
        1c632c:	e1a01841 	mov	r1, r1, asr #16
        1c6330:	e595000c 	ldr	r0, [r5, #12]	; fField12
        1c6334:	e1510840 	cmp	r1, r0, asr #16
        1c6338:	d5941006 	ldrle	r1, [r4, #6]
        1c633c:	d1a01841 	movle	r1, r1, asr #16
        1c6340:	d595000e 	ldrle	r0, [r5, #14]	; fField14
        1c6344:	d1510840 	cmple	r1, r0, asr #16
        1c6348:	da000003 	ble	1c635c <TSaveScreenBits::RestoreScreenBits(Rect *, Region **)+0x64>
        1c634c:	e1a01007 	mov	r1, r7
        1c6350:	e1a02004 	mov	r2, r4
        1c6354:	e1a00004 	mov	r0, r4
        1c6358:	eb66359b 	bl	1b539cc <$SectRect__FP4RectN21>
        1c635c:	eb662516 	bl	1b4f7bc <$GetCurrentPort(void)>
        1c6360:	e1a01000 	mov	r1, r0
        1c6364:	e1a03006 	mov	r3, r6
        1c6368:	e3a02000 	mov	r2, #0	; 0x0
        1c636c:	e92d000c 	stmdb	sp!, {r2, r3}
        1c6370:	e1a03004 	mov	r3, r4
        1c6374:	e1a02004 	mov	r2, r4
        1c6378:	e1a00005 	mov	r0, r5
        1c637c:	eb68a507 	bl	1bef7a0 <$CopyBits__FP8PixelMapT1P4RectT3lPP6Region>
        1c6380:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

