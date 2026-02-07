#include "include/TNotebook.h"

/**
 * Symbol: TNotebook::DerivedFrom( const(long))
 * Address: 00145fb4
 */
TNotebook::DerivedFrom( const(long)) {
    /*
        145fb4:	e1a0c00d 	mov	ip, sp
        145fb8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        145fbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        145fc0:	e3310044 	teq	r1, #68	; 0x44
        145fc4:	0a000002 	beq	145fd4 <TNotebook::DerivedFrom( const(long))+0x20>
        145fc8:	ebfbb6b8 	bl	33ab0 <TApplication::DerivedFrom( const(long))>
        145fcc:	e3300000 	teq	r0, #0	; 0x0
        145fd0:	0a000001 	beq	145fdc <TNotebook::DerivedFrom( const(long))+0x28>
        145fd4:	e3a00001 	mov	r0, #1	; 0x1
        145fd8:	ea000000 	b	145fe0 <TNotebook::DerivedFrom( const(long))+0x2c>
        145fdc:	e3a00000 	mov	r0, #0	; 0x0
        145fe0:	e20000ff 	and	r0, r0, #255	; 0xff
        145fe4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        145fe8:	4e657774 	mcrmi	7, 3, r7, cr5, cr4, {3}
        145fec:	6f6e2000 	swivs	0x006e2000
        145ff0:	a9313939 	ldmgedb	r1!, {r0, r3, r4, r5, r8, fp, ip, sp}
        145ff4:	332d3139 	teqcc	sp, #1073741838	; 0x4000000e
        145ff8:	39370000 	ldmccdb	r7!, {}
        145ffc:	4170706c 	cmnmi	r0, ip, rrx
        146000:	6520436f 	strvs	r4, [r0, -#879]!	; fField879
        146004:	6d707574 	ldcvsl	5, cr7, [r0, -#464]!
        146008:	65722c20 	ldrvsb	r2, [r2, -#3104]!
        14600c:	496e632e 	stmmidb	lr!, {r1, r2, r3, r5, r8, r9, sp, lr}^
        146010:	00000000 	andeq	r0, r0, r0
        146014:	416c6c20 	cmnmi	ip, r0, lsr #24
        146018:	72696768 	rsbvc	r6, r9, #27262976	; 0x1a00000
        14601c:	74732072 	ldrvcbt	r2, [r3], -#114
        146020:	65736572 	ldrvsb	r6, [r3, -#1394]!
        146024:	7665642e 	strvcbt	r6, [r5], -lr, lsr #8
        146028:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TNotebook::DrawSplashScreen(void)
 * Address: 0014602c
 */
TNotebook::DrawSplashScreen(void) {
    /*
        14602c:	e1a0c00d 	mov	ip, sp
        146030:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        146034:	e24cb004 	sub	fp, ip, #4	; 0x4
        146038:	e24dd018 	sub	sp, sp, #24	; 0x18
        14603c:	e59f73b4 	ldr	r7, [pc, #3b4]	; 1463f8 <TNotebook::DrawSplashScreen(void)+0x3cc>
        146040:	e5970000 	ldr	r0, [r7]
        146044:	e1a01800 	mov	r1, r0, lsl #16
        146048:	e1a01841 	mov	r1, r1, asr #16
        14604c:	e59f63a8 	ldr	r6, [pc, #3a8]	; 1463fc <TNotebook::DrawSplashScreen(void)+0x3d0>
        146050:	e5960000 	ldr	r0, [r6]
        146054:	e1a00800 	mov	r0, r0, lsl #16
        146058:	e1a00840 	mov	r0, r0, asr #16
        14605c:	e3a08000 	mov	r8, #0	; 0x0
        146060:	e5cd8001 	strb	r8, [sp, #1]
        146064:	e5cd8000 	strb	r8, [sp]
        146068:	e5cd8003 	strb	r8, [sp, #3]
        14606c:	e5cd8002 	strb	r8, [sp, #2]
        146070:	e5cd1005 	strb	r1, [sp, #5]
        146074:	e1a01441 	mov	r1, r1, asr #8
        146078:	e5cd1004 	strb	r1, [sp, #4]	; fField4
        14607c:	e5cd0007 	strb	r0, [sp, #7]
        146080:	e1a00440 	mov	r0, r0, asr #8
        146084:	e5cd0006 	strb	r0, [sp, #6]
        146088:	e28d1010 	add	r1, sp, #16	; 0x10
        14608c:	e89d5000 	ldmia	sp, {ip, lr}
        146090:	e8815000 	stmia	r1, {ip, lr}
        146094:	e28d0010 	add	r0, sp, #16	; 0x10
        146098:	eb68321c 	bl	1b52910 <$PaintRect(Rect *)>
        14609c:	e5970000 	ldr	r0, [r7]
        1460a0:	e240008c 	sub	r0, r0, #140	; 0x8c
        1460a4:	e1a01800 	mov	r1, r0, lsl #16
        1460a8:	e1a01841 	mov	r1, r1, asr #16
        1460ac:	e5960000 	ldr	r0, [r6]
        1460b0:	e1a00800 	mov	r0, r0, lsl #16
        1460b4:	e1a00840 	mov	r0, r0, asr #16
        1460b8:	e5cd8009 	strb	r8, [sp, #9]
        1460bc:	e5cd8008 	strb	r8, [sp, #8]
        1460c0:	e5cd800b 	strb	r8, [sp, #11]
        1460c4:	e5cd800a 	strb	r8, [sp, #10]
        1460c8:	e5cd100d 	strb	r1, [sp, #13]
        1460cc:	e1a01441 	mov	r1, r1, asr #8
        1460d0:	e5cd100c 	strb	r1, [sp, #12]
        1460d4:	e5cd000f 	strb	r0, [sp, #15]
        1460d8:	e1a00440 	mov	r0, r0, asr #8
        1460dc:	e5cd000e 	strb	r0, [sp, #14]
        1460e0:	e28d0010 	add	r0, sp, #16	; 0x10
        1460e4:	e28d1008 	add	r1, sp, #8	; 0x8
        1460e8:	e8915000 	ldmia	r1, {ip, lr}
        1460ec:	e8805000 	stmia	r0, {ip, lr}
        1460f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1460f4:	e1a0000d 	mov	r0, sp
        1460f8:	e28d2014 	add	r2, sp, #20	; 0x14
        1460fc:	e8920006 	ldmia	r2, {r1, r2}
        146100:	eb663e60 	bl	1ad5a88 <$DrawSplashGraphic(unsigned char *, TRect)>
        146104:	e1a05000 	mov	r5, r0
        146108:	e5dd0000 	ldrb	r0, [sp]
        14610c:	e3300000 	teq	r0, #0	; 0x0
        146110:	1a000004 	bne	146128 <TNotebook::DrawSplashScreen(void)+0xfc>
        146114:	e28d1014 	add	r1, sp, #20	; 0x14
        146118:	e59f02e0 	ldr	r0, [pc, #2e0]	; 146400 <TNotebook::DrawSplashScreen(void)+0x3d4>
        14611c:	e3a03000 	mov	r3, #0	; 0x0
        146120:	e3a02006 	mov	r2, #6	; 0x6
        146124:	eb6531fe 	bl	1a92924 <$DrawPicture(RefVar const &, TRect const &, unsigned long, long)>
        146128:	e24ddf87 	sub	sp, sp, #540	; 0x21c
        14612c:	e28d401c 	add	r4, sp, #28	; 0x1c
        146130:	e1a0000d 	mov	r0, sp
        146134:	e3a0101c 	mov	r1, #28	; 0x1c
        146138:	eb6a67b7 	bl	1be001c <$ZeroBytes>
        14613c:	e3a00902 	mov	r0, #32768	; 0x8000
        146140:	e58d0004 	str	r0, [sp, #4]	; fField4
        146144:	e5960000 	ldr	r0, [r6]
        146148:	e1a00800 	mov	r0, r0, lsl #16
        14614c:	e58d0008 	str	r0, [sp, #8]
        146150:	e3a00003 	mov	r0, #3	; 0x3
        146154:	e58d0010 	str	r0, [sp, #16]
        146158:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        14615c:	e3a00002 	mov	r0, #2	; 0x2
        146160:	eb69eff9 	bl	1bc214c <$AllocateRefHandle(long)>
        146164:	e58d000c 	str	r0, [sp, #12]
        146168:	e5a08004 	str	r8, [r0, #4]!	; fField4
        14616c:	e58d8028 	str	r8, [sp, #40]	; fField40
        146170:	e28d000c 	add	r0, sp, #12	; 0xc
        146174:	e58d0008 	str	r0, [sp, #8]
        146178:	e59f0284 	ldr	r0, [pc, #284]	; 146404 <TNotebook::DrawSplashScreen(void)+0x3d8>
        14617c:	e8905000 	ldmia	r0, {ip, lr}
        146180:	e88d5000 	stmia	sp, {ip, lr}
        146184:	e28d100c 	add	r1, sp, #12	; 0xc
        146188:	e59f0278 	ldr	r0, [pc, #278]	; 146408 <TNotebook::DrawSplashScreen(void)+0x3dc>
        14618c:	eb6a0cd4 	bl	1bc94e4 <$CreateTextStyleRecord(RefVar const &, StyleRecord *)>
        146190:	e5970000 	ldr	r0, [r7]
        146194:	e240008c 	sub	r0, r0, #140	; 0x8c
        146198:	e1a08800 	mov	r8, r0, lsl #16
        14619c:	e1a08848 	mov	r8, r8, asr #16
        1461a0:	e248001e 	sub	r0, r8, #30	; 0x1e
        1461a4:	e1a06800 	mov	r6, r0, lsl #16
        1461a8:	e1a06846 	mov	r6, r6, asr #16
        1461ac:	e3350000 	teq	r5, #0	; 0x0
        1461b0:	0a000049 	beq	1462dc <TNotebook::DrawSplashScreen(void)+0x2b0>
        1461b4:	e1a01004 	mov	r1, r4
        1461b8:	e1a00005 	mov	r0, r5
        1461bc:	eb65efcf 	bl	1ac2100 <TSplashScreenInfo::$GetText(unsigned short *)>
        1461c0:	e3300000 	teq	r0, #0	; 0x0
        1461c4:	0a000042 	beq	1462d4 <TNotebook::DrawSplashScreen(void)+0x2a8>
        1461c8:	e1a00806 	mov	r0, r6, lsl #16
        1461cc:	e3a03000 	mov	r3, #0	; 0x0
        1461d0:	e58d0004 	str	r0, [sp, #4]	; fField4
        1461d4:	e28d202c 	add	r2, sp, #44	; 0x2c
        1461d8:	e92d000c 	stmdb	sp!, {r2, r3}
        1461dc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1461e0:	e28d0010 	add	r0, sp, #16	; 0x10
        1461e4:	e8905000 	ldmia	r0, {ip, lr}
        1461e8:	e88d5000 	stmia	sp, {ip, lr}
        1461ec:	e1a00004 	mov	r0, r4
        1461f0:	eb6aa15a 	bl	1bee760 <$Ustrlen>
        1461f4:	e1a01000 	mov	r1, r0
        1461f8:	e28d2018 	add	r2, sp, #24	; 0x18
        1461fc:	e1a00004 	mov	r0, r4
        146200:	e3a03000 	mov	r3, #0	; 0x0
        146204:	eb682142 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        146208:	e28dd010 	add	sp, sp, #16	; 0x10
        14620c:	e1a00004 	mov	r0, r4
        146210:	eb6aa152 	bl	1bee760 <$Ustrlen>
        146214:	e0840080 	add	r0, r4, r0, lsl #1
        146218:	e2804002 	add	r4, r0, #2	; 0x2
        14621c:	e5940000 	ldr	r0, [r4]
        146220:	e1b00820 	movs	r0, r0, lsr #16
        146224:	0a00002a 	beq	1462d4 <TNotebook::DrawSplashScreen(void)+0x2a8>
        146228:	e3a0080a 	mov	r0, #655360	; 0xa0000
        14622c:	e0800806 	add	r0, r0, r6, lsl #16
        146230:	e3a03000 	mov	r3, #0	; 0x0
        146234:	e58d0004 	str	r0, [sp, #4]	; fField4
        146238:	e28d202c 	add	r2, sp, #44	; 0x2c
        14623c:	e92d000c 	stmdb	sp!, {r2, r3}
        146240:	e24dd008 	sub	sp, sp, #8	; 0x8
        146244:	e28d1010 	add	r1, sp, #16	; 0x10
        146248:	e8915000 	ldmia	r1, {ip, lr}
        14624c:	e88d5000 	stmia	sp, {ip, lr}
        146250:	e1a00004 	mov	r0, r4
        146254:	eb6aa141 	bl	1bee760 <$Ustrlen>
        146258:	e1a01000 	mov	r1, r0
        14625c:	e28d2018 	add	r2, sp, #24	; 0x18
        146260:	e1a00004 	mov	r0, r4
        146264:	e3a03000 	mov	r3, #0	; 0x0
        146268:	eb682129 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        14626c:	e28dd010 	add	sp, sp, #16	; 0x10
        146270:	e1a00004 	mov	r0, r4
        146274:	eb6aa139 	bl	1bee760 <$Ustrlen>
        146278:	e0840080 	add	r0, r4, r0, lsl #1
        14627c:	e2804002 	add	r4, r0, #2	; 0x2
        146280:	e5940000 	ldr	r0, [r4]
        146284:	e1b00820 	movs	r0, r0, lsr #16
        146288:	0a000011 	beq	1462d4 <TNotebook::DrawSplashScreen(void)+0x2a8>
        14628c:	e3a00705 	mov	r0, #1310720	; 0x140000
        146290:	e0800806 	add	r0, r0, r6, lsl #16
        146294:	e3a03000 	mov	r3, #0	; 0x0
        146298:	e58d0004 	str	r0, [sp, #4]	; fField4
        14629c:	e28d202c 	add	r2, sp, #44	; 0x2c
        1462a0:	e92d000c 	stmdb	sp!, {r2, r3}
        1462a4:	e24dd008 	sub	sp, sp, #8	; 0x8
        1462a8:	e28d1010 	add	r1, sp, #16	; 0x10
        1462ac:	e8915000 	ldmia	r1, {ip, lr}
        1462b0:	e88d5000 	stmia	sp, {ip, lr}
        1462b4:	e1a00004 	mov	r0, r4
        1462b8:	eb6aa128 	bl	1bee760 <$Ustrlen>
        1462bc:	e1a01000 	mov	r1, r0
        1462c0:	e28d2018 	add	r2, sp, #24	; 0x18
        1462c4:	e1a00004 	mov	r0, r4
        1462c8:	e3a03000 	mov	r3, #0	; 0x0
        1462cc:	eb682110 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        1462d0:	e28dd010 	add	sp, sp, #16	; 0x10
        1462d4:	e1a00005 	mov	r0, r5
        1462d8:	eb663de9 	bl	1ad5a84 <TSplashScreenInfo::$Delete(void)>
        1462dc:	e28d4048 	add	r4, sp, #72	; 0x48
        1462e0:	e59f1124 	ldr	r1, [pc, #124]	; 14640c <TNotebook::DrawSplashScreen(void)+0x3e0>
        1462e4:	e911500a 	ldmdb	r1, {r1, r3, ip, lr}
        1462e8:	e92d500a 	stmdb	sp!, {r1, r3, ip, lr}
        1462ec:	e3a06001 	mov	r6, #1	; 0x1
        1462f0:	e1a01004 	mov	r1, r4
        1462f4:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        1462f8:	e3a02001 	mov	r2, #1	; 0x1
        1462fc:	e59d0000 	ldr	r0, [sp]
        146300:	eb6a841f 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        146304:	e24dd044 	sub	sp, sp, #68	; 0x44
        146308:	e28d003c 	add	r0, sp, #60	; 0x3c
        14630c:	eb6a1cf1 	bl	1bcd6d8 <TUGestalt::$__ct(void)>
        146310:	e1a0200d 	mov	r2, sp
        146314:	e28d003c 	add	r0, sp, #60	; 0x3c
        146318:	e3a0303c 	mov	r3, #60	; 0x3c
        14631c:	e3a01401 	mov	r1, #16777216	; 0x1000000
        146320:	e2811003 	add	r1, r1, #3	; 0x3
        146324:	eb6a3190 	bl	1bd296c <TUGestalt::$Gestalt(unsigned long, void *, unsigned long)>
        146328:	e3300000 	teq	r0, #0	; 0x0
        14632c:	1a000004 	bne	146344 <TNotebook::DrawSplashScreen(void)+0x318>
        146330:	e1a00004 	mov	r0, r4
        146334:	eb6aa109 	bl	1bee760 <$Ustrlen>
        146338:	e0841080 	add	r1, r4, r0, lsl #1
        14633c:	e1a0000d 	mov	r0, sp
        146340:	eb657be9 	bl	1aa52ec <$VersionString(TGestaltSystemInfo *, unsigned short *)>
        146344:	e3a07004 	mov	r7, #4	; 0x4
        146348:	e3a05001 	mov	r5, #1	; 0x1
        14634c:	e0850105 	add	r0, r5, r5, lsl #2
        146350:	e0880080 	add	r0, r8, r0, lsl #1
        146354:	e1a00800 	mov	r0, r0, lsl #16
        146358:	e3a03000 	mov	r3, #0	; 0x0
        14635c:	e58d0058 	str	r0, [sp, #88]
        146360:	e28d2080 	add	r2, sp, #128	; 0x80
        146364:	e92d000c 	stmdb	sp!, {r2, r3}
        146368:	e24dd008 	sub	sp, sp, #8	; 0x8
        14636c:	e28d1064 	add	r1, sp, #100	; 0x64
        146370:	e8915000 	ldmia	r1, {ip, lr}
        146374:	e88d5000 	stmia	sp, {ip, lr}
        146378:	e1a00004 	mov	r0, r4
        14637c:	eb6aa0f7 	bl	1bee760 <$Ustrlen>
        146380:	e1a01000 	mov	r1, r0
        146384:	e28d206c 	add	r2, sp, #108	; 0x6c
        146388:	e1a00004 	mov	r0, r4
        14638c:	e3a03000 	mov	r3, #0	; 0x0
        146390:	eb6820df 	bl	1b4e714 <$DrawTextOnce(void *, long, StyleRecord **, short *, FPoint, TextOptions *, TextBoundsInfo *)>
        146394:	e28dd010 	add	sp, sp, #16	; 0x10
        146398:	e1550007 	cmp	r5, r7
        14639c:	aa000007 	bge	1463c0 <TNotebook::DrawSplashScreen(void)+0x394>
        1463a0:	e1a00006 	mov	r0, r6
        1463a4:	e2866001 	add	r6, r6, #1	; 0x1
        1463a8:	e28d1044 	add	r1, sp, #68	; 0x44
        1463ac:	e7910100 	ldr	r0, [r1, r0, lsl #2]
        1463b0:	e1a01004 	mov	r1, r4
        1463b4:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        1463b8:	e3a02001 	mov	r2, #1	; 0x1
        1463bc:	eb6a83f0 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        1463c0:	e2855001 	add	r5, r5, #1	; 0x1
        1463c4:	e1550007 	cmp	r5, r7
        1463c8:	daffffdf 	ble	14634c <TNotebook::DrawSplashScreen(void)+0x320>
        1463cc:	e28d003c 	add	r0, sp, #60	; 0x3c
        1463d0:	e3a01000 	mov	r1, #0	; 0x0
        1463d4:	eb6a20d2 	bl	1bce724 <TUObject::$__dt(void)>
        1463d8:	e28dd054 	add	sp, sp, #84	; 0x54
        1463dc:	e59d0028 	ldr	r0, [sp, #40]	; fField40
        1463e0:	e3300000 	teq	r0, #0	; 0x0
        1463e4:	159d0028 	ldrne	r0, [sp, #40]	; fField40
        1463e8:	1b681cbb 	blne	1b4d6dc <$DisposePattern(PixelMap **)>
        1463ec:	e59d000c 	ldr	r0, [sp, #12]
        1463f0:	eb69f371 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1463f4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1463f8:	0c104c5c 	ldceq	12, cr4, [r0], -#368
        1463fc:	0c104c58 	ldceq	12, cr4, [r0], -#352
        146400:	00681808 	rsbeq	r1, r8, r8, lsl #16
        146404:	00374134 	eoreqs	r4, r7, r4, lsr r1
        146408:	00681538 	rsbeq	r1, r8, r8, lsr r5
        14640c:	0037414c 	eoreqs	r4, r7, ip, asr #2
    */
}

/**
 * Symbol: TNotebook::Run(void)
 * Address: 00146410
 */
TNotebook::Run(void) {
    /*
        146410:	e1a0c00d 	mov	ip, sp
        146414:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        146418:	e24cb004 	sub	fp, ip, #4	; 0x4
        14641c:	e1a04000 	mov	r4, r0
        146420:	e3a0600a 	mov	r6, #10	; 0xa
        146424:	e59f5048 	ldr	r5, [pc, #48]	; 146474 <TNotebook::Run(void)+0x64>
        146428:	e1a00004 	mov	r0, r4
        14642c:	e5941000 	ldr	r1, [r4]
        146430:	e1a0e00f 	mov	lr, pc
        146434:	e281f01c 	add	pc, r1, #28	; 0x1c
        146438:	e5950000 	ldr	r0, [r5]
        14643c:	eb655a70 	bl	1a9ce04 <TRootView::$NeedsUpdate(void)>
        146440:	e3300000 	teq	r0, #0	; 0x0
        146444:	13a01000 	movne	r1, #0	; 0x0
        146448:	15950000 	ldrne	r0, [r5]
        14644c:	1b657b94 	blne	1aa52a4 <TRootView::$Update(TRect *)>
        146450:	e2566001 	subs	r6, r6, #1	; 0x1
        146454:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        146458:	e1a00004 	mov	r0, r4
        14645c:	e5941000 	ldr	r1, [r4]
        146460:	e1a0e00f 	mov	lr, pc
        146464:	e281f028 	add	pc, r1, #40	; 0x28
        146468:	e3300000 	teq	r0, #0	; 0x0
        14646c:	1affffed 	bne	146428 <TNotebook::Run(void)+0x18>
        146470:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        146474:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TNotebook::Idle(void)
 * Address: 00146478
 */
TNotebook::Idle(void) {
    /*
        146478:	e1a0c00d 	mov	ip, sp
        14647c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        146480:	e24cb004 	sub	fp, ip, #4	; 0x4
        146484:	e1a04000 	mov	r4, r0
        146488:	e24dd008 	sub	sp, sp, #8	; 0x8
        14648c:	eb6549f7 	bl	1a98c70 <TApplication::$Idle(void)>
        146490:	e59f0030 	ldr	r0, [pc, #30]	; 1464c8 <TNotebook::Idle(void)+0x50>
        146494:	e1a05000 	mov	r5, r0
        146498:	eb65b966 	bl	1ab4a38 <TRecognitionManager::$Idle(void)>
        14649c:	e2840004 	add	r0, r4, #4	; 0x4
        1464a0:	e59f1024 	ldr	r1, [pc, #24]	; 1464cc <TNotebook::Idle(void)+0x54>
        1464a4:	e5911000 	ldr	r1, [r1]
        1464a8:	eb654df9 	bl	1a99c94 <TRootView::$IdleViews(void)>
        1464ac:	e1a01005 	mov	r1, r5
        1464b0:	e1a0000d 	mov	r0, sp
        1464b4:	eb65c1a3 	bl	1ab6b48 <TRecognitionManager::$NextIdle(void)>
        1464b8:	e1a0100d 	mov	r1, sp
        1464bc:	e1a00004 	mov	r0, r4
        1464c0:	eb657b7e 	bl	1aa52c0 <TApplication::$UpdateNextIdleTime(TTime const &)>
        1464c4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1464c8:	0c106e88 	ldceq	14, cr6, [r0], -#544
        1464cc:	0c101934 	ldceq	9, cr1, [r0], -#208
    */
}

/**
 * Symbol: TNotebook::NeedsIdle(void)
 * Address: 001464d0
 */
TNotebook::NeedsIdle(void) {
    /*
        1464d0:	e1a0c00d 	mov	ip, sp
        1464d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1464d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1464dc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1464e0:	e2800004 	add	r0, r0, #4	; 0x4
        1464e4:	e1a04000 	mov	r4, r0
        1464e8:	e59f1034 	ldr	r1, [pc, #34]	; 146524 <TNotebook::NeedsIdle(void)+0x54>
        1464ec:	eb6a6ae5 	bl	1be1088 <$CompCompare>
        1464f0:	e3300000 	teq	r0, #0	; 0x0
        1464f4:	0a000007 	beq	146518 <TNotebook::NeedsIdle(void)+0x48>
        1464f8:	e1a0000d 	mov	r0, sp
        1464fc:	eb6a3535 	bl	1bd39d8 <$GetGlobalTime>
        146500:	e1a0100d 	mov	r1, sp
        146504:	e1a00004 	mov	r0, r4
        146508:	eb6a6ade 	bl	1be1088 <$CompCompare>
        14650c:	e3500000 	cmp	r0, #0	; 0x0
        146510:	b3a00001 	movlt	r0, #1	; 0x1
        146514:	ba000000 	blt	14651c <TNotebook::NeedsIdle(void)+0x4c>
        146518:	e3a00000 	mov	r0, #0	; 0x0
        14651c:	e20000ff 	and	r0, r0, #255	; 0xff
        146520:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        146524:	0c101690 	ldceq	6, cr1, [r0], -#576
    */
}

/**
 * Symbol: TNotebook::Constructor(void)
 * Address: 001467f8
 */
TNotebook::Constructor(void) {
    /*
        1467f8:	e1a0c00d 	mov	ip, sp
        1467fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        146800:	e24cb004 	sub	fp, ip, #4	; 0x4
        146804:	eb651bac 	bl	1a8d6bc <TApplication::$Constructor(void)>
        146808:	e3a000a0 	mov	r0, #160	; 0xa0
        14680c:	eb650b25 	bl	1a894a8 <$__nw__8TxObjectSFUi>
        146810:	e1b04000 	movs	r4, r0
        146814:	0a000022 	beq	1468a4 <TNotebook::Constructor(void)+0xac>
        146818:	e59f00a0 	ldr	r0, [pc, #a0]	; 1468c0 <TNotebook::Constructor(void)+0xc8>
        14681c:	e5840000 	str	r0, [r4]
        146820:	e3a00002 	mov	r0, #2	; 0x2
        146824:	eb69ee48 	bl	1bc214c <$AllocateRefHandle(long)>
        146828:	e3a05000 	mov	r5, #0	; 0x0
        14682c:	e5840024 	str	r0, [r4, #36]	; fField36
        146830:	e5a05004 	str	r5, [r0, #4]!	; fField4
        146834:	e59f0088 	ldr	r0, [pc, #88]	; 1468c4 <TNotebook::Constructor(void)+0xcc>
        146838:	e5840000 	str	r0, [r4]
        14683c:	e3a00002 	mov	r0, #2	; 0x2
        146840:	eb69ee41 	bl	1bc214c <$AllocateRefHandle(long)>
        146844:	e5840054 	str	r0, [r4, #84]
        146848:	e5a05004 	str	r5, [r0, #4]!	; fField4
        14684c:	e3a00002 	mov	r0, #2	; 0x2
        146850:	eb69ee3d 	bl	1bc214c <$AllocateRefHandle(long)>
        146854:	e5840058 	str	r0, [r4, #88]
        146858:	e5a05004 	str	r5, [r0, #4]!	; fField4
        14685c:	e3a00002 	mov	r0, #2	; 0x2
        146860:	eb69ee39 	bl	1bc214c <$AllocateRefHandle(long)>
        146864:	e5840060 	str	r0, [r4, #96]
        146868:	e5a05004 	str	r5, [r0, #4]!	; fField4
        14686c:	e3a00002 	mov	r0, #2	; 0x2
        146870:	eb69ee35 	bl	1bc214c <$AllocateRefHandle(long)>
        146874:	e584007c 	str	r0, [r4, #124]
        146878:	e5a05004 	str	r5, [r0, #4]!	; fField4
        14687c:	e3a00002 	mov	r0, #2	; 0x2
        146880:	eb69ee31 	bl	1bc214c <$AllocateRefHandle(long)>
        146884:	e5840098 	str	r0, [r4, #152]
        146888:	e5a05004 	str	r5, [r0, #4]!	; fField4
        14688c:	e3a00002 	mov	r0, #2	; 0x2
        146890:	eb69ee2d 	bl	1bc214c <$AllocateRefHandle(long)>
        146894:	e584009c 	str	r0, [r4, #156]
        146898:	e5a05004 	str	r5, [r0, #4]!	; fField4
        14689c:	e59f0024 	ldr	r0, [pc, #24]	; 1468c8 <TNotebook::Constructor(void)+0xd0>
        1468a0:	e5840000 	str	r0, [r4]
        1468a4:	e1a00004 	mov	r0, r4
        1468a8:	e59f101c 	ldr	r1, [pc, #1c]	; 1468cc <TNotebook::Constructor(void)+0xd4>
        1468ac:	e5814000 	str	r4, [r1]
        1468b0:	e59f1018 	ldr	r1, [pc, #18]	; 1468d0 <TNotebook::Constructor(void)+0xd8>
        1468b4:	eb651b8b 	bl	1a8d6e8 <TRootView::$Constructor(RefVar const &)>
        1468b8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1468bc:	ea654d02 	b	1a99ccc <$InitLibrarian(void)>
        1468c0:	0001add4 	ldreqd	sl, [r1], -r4
        1468c4:	0001f750 	andeq	pc, r1, r0, asr r7
        1468c8:	00020ffc 	streqd	r0, [r2], -ip
        1468cc:	0c101934 	ldceq	9, cr1, [r0], -#208
        1468d0:	006819b0 	streqh	r1, [r8], -#144
    */
}

/**
 * Symbol: TNotebook::Quit(void)
 * Address: 00146b1c
 */
TNotebook::Quit(void) {
    /*
        146b1c:	e59f0000 	ldr	r0, [pc, #0]	; 146b24 <TNotebook::Quit(void)+0x8>
        146b20:	ea681adf 	b	1b4d6a4 <$ClosePort(GrafPort *)>
        146b24:	0c1067cc 	ldceq	7, cr6, [r0], -#816
    */
}

/**
 * Symbol: TNotebook::InitToolbox(void)
 * Address: 00146b28
 */
TNotebook::InitToolbox(void) {
    /*
        146b28:	e1a0c00d 	mov	ip, sp
        146b2c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        146b30:	e24cb004 	sub	fp, ip, #4	; 0x4
        146b34:	e1a04000 	mov	r4, r0
        146b38:	eb654c6a 	bl	1a99ce8 <TApplication::$InitToolbox(void)>
        146b3c:	e1a00004 	mov	r0, r4
        146b40:	e5941000 	ldr	r1, [r4]
        146b44:	e1a0e00f 	mov	lr, pc
        146b48:	e281f02c 	add	pc, r1, #44	; 0x2c
        146b4c:	eb654c63 	bl	1a99ce0 <$InitScriptGlobals(void)>
        146b50:	e1a00004 	mov	r0, r4
        146b54:	eb654c59 	bl	1a99cc0 <TNotebook::$InitInker(void)>
        146b58:	e59f0030 	ldr	r0, [pc, #30]	; 146b90 <TNotebook::InitToolbox(void)+0x68>
        146b5c:	eb653fe8 	bl	1a96b04 <$GetPreference(RefVar const &)>
        146b60:	eb69ed79 	bl	1bc214c <$AllocateRefHandle(long)>
        146b64:	e1a05000 	mov	r5, r0
        146b68:	e24dd004 	sub	sp, sp, #4	; 0x4
        146b6c:	e5900000 	ldr	r0, [r0]
        146b70:	e3300002 	teq	r0, #2	; 0x2
        146b74:	0a000006 	beq	146b94 <TNotebook::InitToolbox(void)+0x6c>
        146b78:	e3100003 	tst	r0, #3	; 0x3
        146b7c:	01a00140 	moveq	r0, r0, asr #2
        146b80:	0a000000 	beq	146b88 <TNotebook::InitToolbox(void)+0x60>
        146b84:	eb69ed64 	bl	1bc211c <$_RINTError(long)>
        146b88:	eb660a52 	bl	1ac94d8 <$SetOrientation(long)>
        146b8c:	ea000007 	b	146bb0 <TNotebook::InitToolbox(void)+0x88>
        146b90:	00684480 	rsbeq	r4, r8, r0, lsl #9
        146b94:	e24dd004 	sub	sp, sp, #4	; 0x4
        146b98:	e1a0100d 	mov	r1, sp
        146b9c:	e3a00004 	mov	r0, #4	; 0x4
        146ba0:	eb6aab3c 	bl	1bf1898 <$GetGrafInfo(long, void *)>
        146ba4:	e59d0000 	ldr	r0, [sp]
        146ba8:	eb660a4a 	bl	1ac94d8 <$SetOrientation(long)>
        146bac:	e28dd004 	add	sp, sp, #4	; 0x4
        146bb0:	e1a00004 	mov	r0, r4
        146bb4:	eb652f62 	bl	1a92944 <TNotebook::$DrawSplashScreen(void)>
        146bb8:	e3a04002 	mov	r4, #2	; 0x2
        146bbc:	e1a00004 	mov	r0, r4
        146bc0:	eb69ed61 	bl	1bc214c <$AllocateRefHandle(long)>
        146bc4:	e58d0000 	str	r0, [sp]
        146bc8:	e1a0000d 	mov	r0, sp
        146bcc:	e59f1070 	ldr	r1, [pc, #70]	; 146c44 <TNotebook::InitToolbox(void)+0x11c>
        146bd0:	eb65fdd6 	bl	1ac6330 <$FPlaySoundIrregardless>
        146bd4:	e59d0000 	ldr	r0, [sp]
        146bd8:	eb69f177 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146bdc:	eb67e944 	bl	1b410f4 <$InitPrintDrivers(void)>
        146be0:	eb682302 	bl	1b4f7f0 <$InitFontLoader(void)>
        146be4:	eb654c36 	bl	1a99cc4 <$InitInternationalUtils(void)>
        146be8:	e59f0058 	ldr	r0, [pc, #58]	; 146c48 <TNotebook::InitToolbox(void)+0x120>
        146bec:	e3a01002 	mov	r1, #2	; 0x2
        146bf0:	eb65b79a 	bl	1ab4a60 <TRecognitionManager::$Init(unsigned char)>
        146bf4:	eb65651e 	bl	1aa0074 <$RunInitScripts(void)>
        146bf8:	e24dd008 	sub	sp, sp, #8	; 0x8
        146bfc:	e1a00004 	mov	r0, r4
        146c00:	eb69ed51 	bl	1bc214c <$AllocateRefHandle(long)>
        146c04:	e58d0000 	str	r0, [sp]
        146c08:	e1a0400d 	mov	r4, sp
        146c0c:	e59f0038 	ldr	r0, [pc, #38]	; 146c4c <TNotebook::InitToolbox(void)+0x124>
        146c10:	e5900000 	ldr	r0, [r0]
        146c14:	eb69ed4c 	bl	1bc214c <$AllocateRefHandle(long)>
        146c18:	e58d0004 	str	r0, [sp, #4]	; fField4
        146c1c:	e28d0004 	add	r0, sp, #4	; 0x4
        146c20:	e1a01004 	mov	r1, r4
        146c24:	eb63cc25 	bl	1a39cc0 <$InitDarkStar__FRC6RefVarT1>
        146c28:	e59d0000 	ldr	r0, [sp]
        146c2c:	eb69f162 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146c30:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        146c34:	eb69f160 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146c38:	e1a00005 	mov	r0, r5
        146c3c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        146c40:	ea69f15d 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
        146c44:	00680210 	rsbeq	r0, r8, r0, lsl r2
        146c48:	0c106e88 	ldceq	14, cr6, [r0], -#544
        146c4c:	0c10544c 	ldceq	4, cr5, [r0], -#304
    */
}

/**
 * Symbol: TNotebook::InitOffscreenBitmaps(void)
 * Address: 00146c50
 */
TNotebook::InitOffscreenBitmaps(void) {
    /*
        146c50:	e1a0c00d 	mov	ip, sp
        146c54:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        146c58:	e24cb004 	sub	fp, ip, #4	; 0x4
        146c5c:	e59f003c 	ldr	r0, [pc, #3c]	; 146ca0 <TNotebook::InitOffscreenBitmaps(void)+0x50>
        146c60:	e1a04000 	mov	r4, r0
        146c64:	e59f1038 	ldr	r1, [pc, #38]	; 146ca4 <TNotebook::InitOffscreenBitmaps(void)+0x54>
        146c68:	e5911000 	ldr	r1, [r1]
        146c6c:	e5b1e00c 	ldr	lr, [r1, #12]!
        146c70:	e3a0c007 	mov	ip, #7	; 0x7
        146c74:	e8be000e 	ldmia	lr!, {r1, r2, r3}
        146c78:	e8a0000e 	stmia	r0!, {r1, r2, r3}
        146c7c:	e25cc001 	subs	ip, ip, #1	; 0x1
        146c80:	1afffffb 	bne	146c74 <TNotebook::InitOffscreenBitmaps(void)+0x24>
        146c84:	eb682b0f 	bl	1b518c8 <$NewRgn(void)>
        146c88:	e5840024 	str	r0, [r4, #36]	; fField36
        146c8c:	eb682b0d 	bl	1b518c8 <$NewRgn(void)>
        146c90:	e5840028 	str	r0, [r4, #40]	; fField40
        146c94:	e1a00004 	mov	r0, r4
        146c98:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        146c9c:	ea6826da 	b	1b5080c <$InitPortRgns(GrafPort *)>
        146ca0:	0c1067cc 	ldceq	7, cr6, [r0], -#816
        146ca4:	0c1054b0 	ldceq	4, cr5, [r0], -#704
    */
}

/**
 * Symbol: TNotebook::InitInker(void)
 * Address: 00146ca8
 */
TNotebook::InitInker(void) {
    /*
        146ca8:	e59f0004 	ldr	r0, [pc, #4]	; 146cb4 <TNotebook::InitInker(void)+0xc>	; fField4
        146cac:	e5900000 	ldr	r0, [r0]
        146cb0:	ea668e1f 	b	1aea534 <$StartInker(TUPort *)>
        146cb4:	0c1054a8 	ldceq	4, cr5, [r0], -#672
    */
}

