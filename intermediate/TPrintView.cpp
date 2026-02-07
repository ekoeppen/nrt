#include "include/TPrintView.h"

/**
 * Symbol: TPrintView::ClassID( const(void))
 * Address: 00192f90
 */
TPrintView::ClassID( const(void)) {
    /*
        192f90:	e3a0005e 	mov	r0, #94	; 0x5e
        192f94:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPrintView::DerivedFrom( const(long))
 * Address: 00192f98
 */
TPrintView::DerivedFrom( const(long)) {
    /*
        192f98:	e1a0c00d 	mov	ip, sp
        192f9c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        192fa0:	e24cb004 	sub	fp, ip, #4	; 0x4
        192fa4:	e331005e 	teq	r1, #94	; 0x5e
        192fa8:	0a000002 	beq	192fb8 <TPrintView::DerivedFrom( const(long))+0x20>
        192fac:	eb034183 	bl	2635c0 <TView::DerivedFrom( const(long))>
        192fb0:	e3300000 	teq	r0, #0	; 0x0
        192fb4:	0a000001 	beq	192fc0 <TPrintView::DerivedFrom( const(long))+0x28>
        192fb8:	e3a00001 	mov	r0, #1	; 0x1
        192fbc:	ea000000 	b	192fc4 <TPrintView::DerivedFrom( const(long))+0x2c>
        192fc0:	e3a00000 	mov	r0, #0	; 0x0
        192fc4:	e20000ff 	and	r0, r0, #255	; 0xff
        192fc8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPrintView::RealDoCommand(RefVar const &)
 * Address: 00192fcc
 */
TPrintView::RealDoCommand(RefVar const &) {
    /*
        192fcc:	e1a0c00d 	mov	ip, sp
        192fd0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        192fd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        192fd8:	e1a05000 	mov	r5, r0
        192fdc:	e1a04001 	mov	r4, r1
        192fe0:	e24dd008 	sub	sp, sp, #8	; 0x8
        192fe4:	e3a06000 	mov	r6, #0	; 0x0
        192fe8:	e1a0000d 	mov	r0, sp
        192fec:	e3a01b05 	mov	r1, #5120	; 0x1400
        192ff0:	eb690ed8 	bl	1bd6b58 <$LockStack>
        192ff4:	e3a00000 	mov	r0, #0	; 0x0
        192ff8:	e3a07000 	mov	r7, #0	; 0x0
        192ffc:	e52d006c 	str	r0, [sp, -#108]!
        193000:	e28d0008 	add	r0, sp, #8	; 0x8
        193004:	eb687e5a 	bl	1bb2974 <$setjmp>
        193008:	e3300000 	teq	r0, #0	; 0x0
        19300c:	1a000008 	bne	193034 <TPrintView::RealDoCommand(RefVar const &)+0x68>
        193010:	e1a0000d 	mov	r0, sp
        193014:	eb693418 	bl	1be007c <$AddExceptionHandler>
        193018:	e1a01004 	mov	r1, r4
        19301c:	e1a00005 	mov	r0, r5
        193020:	eb64d515 	bl	1ac847c <TPrintView::$ROMRealDoCommand(RefVar const &)>
        193024:	e1a06000 	mov	r6, r0
        193028:	e1a0000d 	mov	r0, sp
        19302c:	eb693821 	bl	1be10b8 <$ExitHandler>
        193030:	ea000000 	b	193038 <TPrintView::RealDoCommand(RefVar const &)+0x6c>
        193034:	e3a07001 	mov	r7, #1	; 0x1
        193038:	e28d006c 	add	r0, sp, #108	; 0x6c
        19303c:	eb692b98 	bl	1bddea4 <$UnlockStack>
        193040:	e3370000 	teq	r7, #0	; 0x0
        193044:	11a0000d 	movne	r0, sp
        193048:	1b693c41 	blne	1be2154 <$NextHandler>
        19304c:	e1a00006 	mov	r0, r6
        193050:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TPrintView::ROMRealDoCommand(RefVar const &)
 * Address: 00193054
 */
TPrintView::ROMRealDoCommand(RefVar const &) {
    /*
        193054:	e1a0c00d 	mov	ip, sp
        193058:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        19305c:	e24cb004 	sub	fp, ip, #4	; 0x4
        193060:	e1a04000 	mov	r4, r0
        193064:	e1a06001 	mov	r6, r1
        193068:	e3a05000 	mov	r5, #0	; 0x0
        19306c:	e1a00001 	mov	r0, r1
        193070:	eb644cb4 	bl	1aa6348 <$CommandID(RefVar const &)>
        193074:	e330002c 	teq	r0, #44	; 0x2c
        193078:	0a000163 	beq	19360c <TPrintView::ROMRealDoCommand(RefVar const &)+0x5b8>
        19307c:	e1a00006 	mov	r0, r6
        193080:	eb644cb0 	bl	1aa6348 <$CommandID(RefVar const &)>
        193084:	e3300038 	teq	r0, #56	; 0x38
        193088:	1a000158 	bne	1935f0 <TPrintView::ROMRealDoCommand(RefVar const &)+0x59c>
        19308c:	e24dd008 	sub	sp, sp, #8	; 0x8
        193090:	e3a05002 	mov	r5, #2	; 0x2
        193094:	e1a00005 	mov	r0, r5
        193098:	eb68bc2b 	bl	1bc214c <$AllocateRefHandle(long)>
        19309c:	e58d0004 	str	r0, [sp, #4]
        1930a0:	e3a00000 	mov	r0, #0	; 0x0
        1930a4:	e58d0000 	str	r0, [sp]
        1930a8:	eb690249 	bl	1bd39d4 <$GetGlobals>
        1930ac:	e3a01000 	mov	r1, #0	; 0x0
        1930b0:	eb68697e 	bl	1bad6b0 <TForkWorld::$Fork(TForkWorld *)>
        1930b4:	e3a07000 	mov	r7, #0	; 0x0
        1930b8:	e58d0000 	str	r0, [sp]
        1930bc:	e3300000 	teq	r0, #0	; 0x0
        1930c0:	0a000004 	beq	1930d8 <TPrintView::ROMRealDoCommand(RefVar const &)+0x84>
        1930c4:	e3a04001 	mov	r4, #1	; 0x1
        1930c8:	e59d0004 	ldr	r0, [sp, #4]
        1930cc:	eb68c03a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1930d0:	e1a00004 	mov	r0, r4
        1930d4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1930d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1930dc:	e59f109c 	ldr	r1, [pc, #9c]	; 193180 <TPrintView::ROMRealDoCommand(RefVar const &)+0x12c>
        1930e0:	e1a00004 	mov	r0, r4
        1930e4:	eb68dd1b 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        1930e8:	eb68bc17 	bl	1bc214c <$AllocateRefHandle(long)>
        1930ec:	e40d0004 	str	r0, [sp], -#4
        1930f0:	e59f108c 	ldr	r1, [pc, #8c]	; 193184 <TPrintView::ROMRealDoCommand(RefVar const &)+0x130>
        1930f4:	e28d0004 	add	r0, sp, #4	; 0x4
        1930f8:	e3a02000 	mov	r2, #0	; 0x0
        1930fc:	eb68c459 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        193100:	eb68bc11 	bl	1bc214c <$AllocateRefHandle(long)>
        193104:	e40d0004 	str	r0, [sp], -#4
        193108:	e28d1004 	add	r1, sp, #4	; 0x4
        19310c:	e59f0074 	ldr	r0, [pc, #74]	; 193188 <TPrintView::ROMRealDoCommand(RefVar const &)+0x134>
        193110:	e5900000 	ldr	r0, [r0]
        193114:	eb68dd0f 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        193118:	eb68bc0b 	bl	1bc214c <$AllocateRefHandle(long)>
        19311c:	e58d0000 	str	r0, [sp]
        193120:	e5900000 	ldr	r0, [r0]
        193124:	e59f8060 	ldr	r8, [pc, #60]	; 19318c <TPrintView::ROMRealDoCommand(RefVar const &)+0x138>
        193128:	e3300002 	teq	r0, #2	; 0x2
        19312c:	1a000004 	bne	193144 <TPrintView::ROMRealDoCommand(RefVar const &)+0xf0>
        193130:	e3a02000 	mov	r2, #0	; 0x0
        193134:	e3e0106c 	mvn	r1, #108	; 0x6c
        193138:	e2411a02 	sub	r1, r1, #8192	; 0x2000
        19313c:	e5980000 	ldr	r0, [r8]
        193140:	eb694015 	bl	1be319c <$Throw>
        193144:	e24dd004 	sub	sp, sp, #4	; 0x4
        193148:	e59f1040 	ldr	r1, [pc, #40]	; 193190 <TPrintView::ROMRealDoCommand(RefVar const &)+0x13c>
        19314c:	e28d000c 	add	r0, sp, #12	; 0xc
        193150:	e3a02000 	mov	r2, #0	; 0x0
        193154:	eb68c443 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        193158:	eb68bbfb 	bl	1bc214c <$AllocateRefHandle(long)>
        19315c:	e1a06000 	mov	r6, r0
        193160:	e5900000 	ldr	r0, [r0]
        193164:	e3300002 	teq	r0, #2	; 0x2
        193168:	0a000009 	beq	193194 <TPrintView::ROMRealDoCommand(RefVar const &)+0x140>
        19316c:	e3100003 	tst	r0, #3	; 0x3
        193170:	01a00140 	moveq	r0, r0, asr #2
        193174:	0a000008 	beq	19319c <TPrintView::ROMRealDoCommand(RefVar const &)+0x148>
        193178:	eb68bbe7 	bl	1bc211c <$_RINTError(long)>
        19317c:	ea000006 	b	19319c <TPrintView::ROMRealDoCommand(RefVar const &)+0x148>
        193180:	00682d60 	rsbeq	r2, r8, r0, ror #26
        193184:	00682348 	rsbeq	r2, r8, r8, asr #6
        193188:	0c101934 	ldceq	9, cr1, [r0], -#208
        19318c:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        193190:	00683c70 	rsbeq	r3, r8, r0, ror ip
        193194:	e3a00902 	mov	r0, #32768	; 0x8000
        193198:	e2400001 	sub	r0, r0, #1	; 0x1
        19319c:	e5840038 	str	r0, [r4, #56]	; fField56
        1931a0:	e1a00005 	mov	r0, r5
        1931a4:	eb68bbe8 	bl	1bc214c <$AllocateRefHandle(long)>
        1931a8:	e58d0000 	str	r0, [sp]
        1931ac:	e1a0200d 	mov	r2, sp
        1931b0:	e59f125c 	ldr	r1, [pc, #25c]	; 193414 <TPrintView::ROMRealDoCommand(RefVar const &)+0x3c0>
        1931b4:	e28d0004 	add	r0, sp, #4	; 0x4
        1931b8:	eb654417 	bl	1ae421c <$SetStatus__FRC6RefVarN21>
        1931bc:	e59d0000 	ldr	r0, [sp]
        1931c0:	eb68bffd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1931c4:	e52d706c 	str	r7, [sp, -#108]!
        1931c8:	e28d0008 	add	r0, sp, #8	; 0x8
        1931cc:	eb687de8 	bl	1bb2974 <$setjmp>
        1931d0:	e3300000 	teq	r0, #0	; 0x0
        1931d4:	1a0000c0 	bne	1934dc <TPrintView::ROMRealDoCommand(RefVar const &)+0x488>
        1931d8:	e1a0000d 	mov	r0, sp
        1931dc:	eb6933a6 	bl	1be007c <$AddExceptionHandler>
        1931e0:	e3a09001 	mov	r9, #1	; 0x1
        1931e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1931e8:	e59f1228 	ldr	r1, [pc, #228]	; 193418 <TPrintView::ROMRealDoCommand(RefVar const &)+0x3c4>
        1931ec:	e28d007c 	add	r0, sp, #124	; 0x7c
        1931f0:	e3a02000 	mov	r2, #0	; 0x0
        1931f4:	eb68c41b 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1931f8:	eb68bbd3 	bl	1bc214c <$AllocateRefHandle(long)>
        1931fc:	e40d0024 	str	r0, [sp], -#36	; fField36
        193200:	e5c47044 	strb	r7, [r4, #68]	; fField68
        193204:	e59f1210 	ldr	r1, [pc, #210]	; 19341c <TPrintView::ROMRealDoCommand(RefVar const &)+0x3c8>
        193208:	e28d0024 	add	r0, sp, #36	; 0x24
        19320c:	e3a02000 	mov	r2, #0	; 0x0
        193210:	eb68c414 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        193214:	eb68bbcc 	bl	1bc214c <$AllocateRefHandle(long)>
        193218:	e58d0000 	str	r0, [sp]
        19321c:	e28d1004 	add	r1, sp, #4	; 0x4
        193220:	e28f0f7e 	add	r0, pc, #504	; 0x1f8
        193224:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        193228:	e3a02001 	mov	r2, #1	; 0x1
        19322c:	eb695054 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        193230:	e1a0000d 	mov	r0, sp
        193234:	eb68bfd2 	bl	1bc3184 <$GetCString(RefVar const &)>
        193238:	e28d1004 	add	r1, sp, #4	; 0x4
        19323c:	eb694c47 	bl	1be6360 <$CompareStringNoCase__FPUsT1>
        193240:	e3300000 	teq	r0, #0	; 0x0
        193244:	05c49044 	streqb	r9, [r4, #68]	; fField68
        193248:	e28d0024 	add	r0, sp, #36	; 0x24
        19324c:	eb66bbb7 	bl	1b42130 <$MakePrinter(RefVar const &)>
        193250:	e5840030 	str	r0, [r4, #48]	; fField48
        193254:	e3300000 	teq	r0, #0	; 0x0
        193258:	03a0001e 	moveq	r0, #30	; 0x1e
        19325c:	02400b2b 	subeq	r0, r0, #44032	; 0xac00
        193260:	058d00a4 	streq	r0, [sp, #164]
        193264:	0a000096 	beq	1934c4 <TPrintView::ROMRealDoCommand(RefVar const &)+0x470>
        193268:	e1a00004 	mov	r0, r4
        19326c:	e5941000 	ldr	r1, [r4]
        193270:	e1a0e00f 	mov	lr, pc
        193274:	e281f07c 	add	pc, r1, #124	; 0x7c
        193278:	e1a00004 	mov	r0, r4
        19327c:	e3a01000 	mov	r1, #0	; 0x0
        193280:	eb68d886 	bl	1bc94a0 <TView::$AddViews(unsigned char)>
        193284:	e5c47045 	strb	r7, [r4, #69]	; fField69
        193288:	e24dd004 	sub	sp, sp, #4	; 0x4
        19328c:	e59f119c 	ldr	r1, [pc, #19c]	; 193430 <TPrintView::ROMRealDoCommand(RefVar const &)+0x3dc>
        193290:	e1a00004 	mov	r0, r4
        193294:	eb68dcaf 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        193298:	eb68bbab 	bl	1bc214c <$AllocateRefHandle(long)>
        19329c:	e58d0000 	str	r0, [sp]
        1932a0:	e5900000 	ldr	r0, [r0]
        1932a4:	e3300002 	teq	r0, #2	; 0x2
        1932a8:	0a00001b 	beq	19331c <TPrintView::ROMRealDoCommand(RefVar const &)+0x2c8>
        1932ac:	e59f1180 	ldr	r1, [pc, #180]	; 193434 <TPrintView::ROMRealDoCommand(RefVar const &)+0x3e0>
        1932b0:	e1a0000d 	mov	r0, sp
        1932b4:	e3a02000 	mov	r2, #0	; 0x0
        1932b8:	eb68c3ea 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1932bc:	e3300002 	teq	r0, #2	; 0x2
        1932c0:	0a000015 	beq	19331c <TPrintView::ROMRealDoCommand(RefVar const &)+0x2c8>
        1932c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1932c8:	e59f1168 	ldr	r1, [pc, #168]	; 193438 <TPrintView::ROMRealDoCommand(RefVar const &)+0x3e4>
        1932cc:	e5911000 	ldr	r1, [r1]
        1932d0:	e5911000 	ldr	r1, [r1]
        1932d4:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1932d8:	e5900000 	ldr	r0, [r0]
        1932dc:	eb68c3df 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        1932e0:	eb68bb99 	bl	1bc214c <$AllocateRefHandle(long)>
        1932e4:	e58d0000 	str	r0, [sp]
        1932e8:	e5900000 	ldr	r0, [r0]
        1932ec:	e3300002 	teq	r0, #2	; 0x2
        1932f0:	0a000006 	beq	193310 <TPrintView::ROMRealDoCommand(RefVar const &)+0x2bc>
        1932f4:	e1a0000d 	mov	r0, sp
        1932f8:	eb68dc97 	bl	1bca55c <$GetView(RefVar const &)>
        1932fc:	e284103c 	add	r1, r4, #60	; 0x3c
        193300:	e2800010 	add	r0, r0, #16	; 0x10
        193304:	e8905000 	ldmia	r0, {ip, lr}
        193308:	e8815000 	stmia	r1, {ip, lr}
        19330c:	e5c49045 	strb	r9, [r4, #69]	; fField69
        193310:	e59d0000 	ldr	r0, [sp]
        193314:	eb68bfa8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193318:	e28dd004 	add	sp, sp, #4	; 0x4
        19331c:	e1a08007 	mov	r8, r7
        193320:	e52d706c 	str	r7, [sp, -#108]!
        193324:	e3a07000 	mov	r7, #0	; 0x0
        193328:	e28d0008 	add	r0, sp, #8	; 0x8
        19332c:	eb687d90 	bl	1bb2974 <$setjmp>
        193330:	e3300000 	teq	r0, #0	; 0x0
        193334:	1a000059 	bne	1934a0 <TPrintView::ROMRealDoCommand(RefVar const &)+0x44c>
        193338:	e1a0000d 	mov	r0, sp
        19333c:	eb69334e 	bl	1be007c <$AddExceptionHandler>
        193340:	e28d1e11 	add	r1, sp, #272	; 0x110
        193344:	e5940030 	ldr	r0, [r4, #48]	; fField48
        193348:	eb66bb83 	bl	1b4215c <TPrinter::$Open(RefVar const &)>
        19334c:	e58d0114 	str	r0, [sp, #276]
        193350:	e59f00e4 	ldr	r0, [pc, #e4]	; 19343c <TPrintView::ROMRealDoCommand(RefVar const &)+0x3e8>
        193354:	e1a09000 	mov	r9, r0
        193358:	eb697113 	bl	1bef7ac <$SetPort(GrafPort *)>
        19335c:	e59d0114 	ldr	r0, [sp, #276]
        193360:	e3300000 	teq	r0, #0	; 0x0
        193364:	1a000049 	bne	193490 <TPrintView::ROMRealDoCommand(RefVar const &)+0x43c>
        193368:	e52d806c 	str	r8, [sp, -#108]!
        19336c:	e3a08000 	mov	r8, #0	; 0x0
        193370:	e28d0008 	add	r0, sp, #8	; 0x8
        193374:	eb687d7e 	bl	1bb2974 <$setjmp>
        193378:	e3300000 	teq	r0, #0	; 0x0
        19337c:	1a000031 	bne	193448 <TPrintView::ROMRealDoCommand(RefVar const &)+0x3f4>
        193380:	e1a0000d 	mov	r0, sp
        193384:	eb69333c 	bl	1be007c <$AddExceptionHandler>
        193388:	e24dd008 	sub	sp, sp, #8	; 0x8
        19338c:	e1a00005 	mov	r0, r5
        193390:	eb68bb6d 	bl	1bc214c <$AllocateRefHandle(long)>
        193394:	e58d0000 	str	r0, [sp]
        193398:	e1a0200d 	mov	r2, sp
        19339c:	e59f109c 	ldr	r1, [pc, #9c]	; 193440 <TPrintView::ROMRealDoCommand(RefVar const &)+0x3ec>
        1933a0:	e28d0f5f 	add	r0, sp, #380	; 0x17c
        1933a4:	eb65439c 	bl	1ae421c <$SetStatus__FRC6RefVarN21>
        1933a8:	e59d0000 	ldr	r0, [sp]
        1933ac:	eb68bf82 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1933b0:	e5940030 	ldr	r0, [r4, #48]	; fField48
        1933b4:	eb66b739 	bl	1b410a0 <TPrinter::$GetPort(void)>
        1933b8:	e5840034 	str	r0, [r4, #52]	; fField52
        1933bc:	eb6970fa 	bl	1bef7ac <$SetPort(GrafPort *)>
        1933c0:	e3a03000 	mov	r3, #0	; 0x0
        1933c4:	e92d0008 	stmdb	sp!, {r3}
        1933c8:	e1a00005 	mov	r0, r5
        1933cc:	eb68bb5e 	bl	1bc214c <$AllocateRefHandle(long)>
        1933d0:	e58d0008 	str	r0, [sp, #8]
        1933d4:	e28d2008 	add	r2, sp, #8	; 0x8
        1933d8:	e59f1064 	ldr	r1, [pc, #64]	; 193444 <TPrintView::ROMRealDoCommand(RefVar const &)+0x3f0>
        1933dc:	e1a00004 	mov	r0, r4
        1933e0:	e3a03001 	mov	r3, #1	; 0x1
        1933e4:	eb68e07d 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        1933e8:	e28dd004 	add	sp, sp, #4	; 0x4
        1933ec:	e59d0004 	ldr	r0, [sp, #4]
        1933f0:	eb68bf71 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1933f4:	e28d1f5f 	add	r1, sp, #380	; 0x17c
        1933f8:	e1a00004 	mov	r0, r4
        1933fc:	eb64d416 	bl	1ac845c <TPrintView::$PrintPages(RefVar const &)>
        193400:	e58d0188 	str	r0, [sp, #392]
        193404:	e28dd008 	add	sp, sp, #8	; 0x8
        193408:	e1a0000d 	mov	r0, sp
        19340c:	eb693729 	bl	1be10b8 <$ExitHandler>
        193410:	ea00000d 	b	19344c <TPrintView::ROMRealDoCommand(RefVar const &)+0x3f8>
        193414:	006825b0 	streqh	r2, [r8], -#80
        193418:	00683fc8 	rsbeq	r3, r8, r8, asr #31
        19341c:	00682ab8 	streqh	r2, [r8], -#168
        193420:	54505350 	ldrplb	r5, [r0], -#848
        193424:	41504472 	cmpmi	r0, r2, ror r4
        193428:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        19342c:	00000000 	andeq	r0, r0, r0
        193430:	00684b00 	rsbeq	r4, r8, r0, lsl #22
        193434:	00684dc0 	rsbeq	r4, r8, r0, asr #27
        193438:	00683fe0 	rsbeq	r3, r8, r0, ror #31
        19343c:	0c1067cc 	ldceq	7, cr6, [r0], -#816
        193440:	00683fa0 	rsbeq	r3, r8, r0, lsr #31
        193444:	006850d0 	ldreqd	r5, [r8]
        193448:	e3a08001 	mov	r8, #1	; 0x1
        19344c:	e24dd004 	sub	sp, sp, #4	; 0x4
        193450:	e1a00009 	mov	r0, r9
        193454:	eb6970d4 	bl	1bef7ac <$SetPort(GrafPort *)>
        193458:	e1a00005 	mov	r0, r5
        19345c:	eb68bb3a 	bl	1bc214c <$AllocateRefHandle(long)>
        193460:	e58d0000 	str	r0, [sp]
        193464:	e1a0200d 	mov	r2, sp
        193468:	e59f102c 	ldr	r1, [pc, #2c]	; 19349c <TPrintView::ROMRealDoCommand(RefVar const &)+0x448>
        19346c:	e28d0f5e 	add	r0, sp, #376	; 0x178
        193470:	eb654369 	bl	1ae421c <$SetStatus__FRC6RefVarN21>
        193474:	e59d0000 	ldr	r0, [sp]
        193478:	eb68bf4f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        19347c:	e28dd004 	add	sp, sp, #4	; 0x4
        193480:	e3380000 	teq	r8, #0	; 0x0
        193484:	11a0000d 	movne	r0, sp
        193488:	1b693b31 	blne	1be2154 <$NextHandler>
        19348c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        193490:	e1a0000d 	mov	r0, sp
        193494:	eb693707 	bl	1be10b8 <$ExitHandler>
        193498:	ea000001 	b	1934a4 <TPrintView::ROMRealDoCommand(RefVar const &)+0x450>
        19349c:	006829b0 	streqh	r2, [r8], -#144
        1934a0:	e3a07001 	mov	r7, #1	; 0x1
        1934a4:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        1934a8:	eb66b2cc 	bl	1b3ffe0 <$DisposePrinter(TPrinter *)>
        1934ac:	e3370000 	teq	r7, #0	; 0x0
        1934b0:	11a0000d 	movne	r0, sp
        1934b4:	1b693b26 	blne	1be2154 <$NextHandler>
        1934b8:	e5bd006c 	ldr	r0, [sp, #108]!
        1934bc:	eb68bf3e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1934c0:	e28dd004 	add	sp, sp, #4	; 0x4
        1934c4:	e59d0000 	ldr	r0, [sp]
        1934c8:	eb68bf3b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1934cc:	e5bd0024 	ldr	r0, [sp, #36]!	; fField36
        1934d0:	eb68bf39 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1934d4:	e28dd004 	add	sp, sp, #4	; 0x4
        1934d8:	ea000014 	b	193530 <TPrintView::ROMRealDoCommand(RefVar const &)+0x4dc>
        1934dc:	e59d0060 	ldr	r0, [sp, #96]
        1934e0:	e5981000 	ldr	r1, [r8]
        1934e4:	eb693f2a 	bl	1be3194 <$Subexception>
        1934e8:	e3300000 	teq	r0, #0	; 0x0
        1934ec:	0a00000d 	beq	193528 <TPrintView::ROMRealDoCommand(RefVar const &)+0x4d4>
        1934f0:	e1a00004 	mov	r0, r4
        1934f4:	e3a01209 	mov	r1, #-1879048192	; 0x90000000
        1934f8:	eb68d7f3 	bl	1bc94cc <TView::$ClearFlags(unsigned long)>
        1934fc:	e59d0060 	ldr	r0, [sp, #96]
        193500:	e59f1018 	ldr	r1, [pc, #18]	; 193520 <TPrintView::ROMRealDoCommand(RefVar const &)+0x4cc>
        193504:	e5911000 	ldr	r1, [r1]
        193508:	eb693f21 	bl	1be3194 <$Subexception>
        19350c:	e3300000 	teq	r0, #0	; 0x0
        193510:	059f000c 	ldreq	r0, [pc, #c]	; 193524 <TPrintView::ROMRealDoCommand(RefVar const &)+0x4d0>
        193514:	159d0064 	ldrne	r0, [sp, #100]
        193518:	e58d007c 	str	r0, [sp, #124]
        19351c:	ea000003 	b	193530 <TPrintView::ROMRealDoCommand(RefVar const &)+0x4dc>
        193520:	00371318 	eoreqs	r1, r7, r8, lsl r3
        193524:	ffff541f 	swinv	0x00ff541f
        193528:	e1a0000d 	mov	r0, sp
        19352c:	eb693b08 	bl	1be2154 <$NextHandler>
        193530:	e1a0000d 	mov	r0, sp
        193534:	eb6936df 	bl	1be10b8 <$ExitHandler>
        193538:	e28dd06c 	add	sp, sp, #108	; 0x6c
        19353c:	e51f0108 	ldr	r0, [pc, #fffffef8]	; 19343c <TPrintView::ROMRealDoCommand(RefVar const &)+0x3e8>
        193540:	eb697099 	bl	1bef7ac <$SetPort(GrafPort *)>
        193544:	e24dd004 	sub	sp, sp, #4	; 0x4
        193548:	e59d0014 	ldr	r0, [sp, #20]
        19354c:	e3300000 	teq	r0, #0	; 0x0
        193550:	11a00100 	movne	r0, r0, lsl #2
        193554:	159d1018 	ldrne	r1, [sp, #24]
        193558:	15810000 	strne	r0, [r1]
        19355c:	e1a00005 	mov	r0, r5
        193560:	eb68baf9 	bl	1bc214c <$AllocateRefHandle(long)>
        193564:	e58d0000 	str	r0, [sp]
        193568:	e1a0200d 	mov	r2, sp
        19356c:	e59f1074 	ldr	r1, [pc, #74]	; 1935e8 <TPrintView::ROMRealDoCommand(RefVar const &)+0x594>
        193570:	e28d0008 	add	r0, sp, #8	; 0x8
        193574:	eb654328 	bl	1ae421c <$SetStatus__FRC6RefVarN21>
        193578:	e59d0000 	ldr	r0, [sp]
        19357c:	eb68bf0e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193580:	e59d0010 	ldr	r0, [sp, #16]
        193584:	e5900000 	ldr	r0, [r0]
        193588:	e3300000 	teq	r0, #0	; 0x0
        19358c:	0a000006 	beq	1935ac <TPrintView::ROMRealDoCommand(RefVar const &)+0x558>
        193590:	e28d2018 	add	r2, sp, #24	; 0x18
        193594:	e59f1050 	ldr	r1, [pc, #50]	; 1935ec <TPrintView::ROMRealDoCommand(RefVar const &)+0x598>
        193598:	e28d0010 	add	r0, sp, #16	; 0x10
        19359c:	eb68cb71 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1935a0:	e28d0010 	add	r0, sp, #16	; 0x10
        1935a4:	e3a01000 	mov	r1, #0	; 0x0
        1935a8:	eb6980f5 	bl	1bf3984 <$PrintObject(RefVar const &, unsigned long)>
        1935ac:	e3a05001 	mov	r5, #1	; 0x1
        1935b0:	e28dd004 	add	sp, sp, #4	; 0x4
        1935b4:	e1a00006 	mov	r0, r6
        1935b8:	eb68beff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1935bc:	e5bd0004 	ldr	r0, [sp, #4]!
        1935c0:	eb68befd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1935c4:	e5bd0004 	ldr	r0, [sp, #4]!
        1935c8:	eb68befb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1935cc:	e5bd0004 	ldr	r0, [sp, #4]!
        1935d0:	eb68bef9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1935d4:	e28dd004 	add	sp, sp, #4	; 0x4
        1935d8:	e59d0004 	ldr	r0, [sp, #4]
        1935dc:	eb68bef6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1935e0:	e28dd008 	add	sp, sp, #8	; 0x8
        1935e4:	ea000009 	b	193610 <TPrintView::ROMRealDoCommand(RefVar const &)+0x5bc>
        1935e8:	00683168 	rsbeq	r3, r8, r8, ror #2
        1935ec:	00682c88 	rsbeq	r2, r8, r8, lsl #25
        1935f0:	e1a00006 	mov	r0, r6
        1935f4:	eb644b53 	bl	1aa6348 <$CommandID(RefVar const &)>
        1935f8:	e3300039 	teq	r0, #57	; 0x39
        1935fc:	1a000003 	bne	193610 <TPrintView::ROMRealDoCommand(RefVar const &)+0x5bc>
        193600:	e5b40030 	ldr	r0, [r4, #48]!	; fField48
        193604:	e3300000 	teq	r0, #0	; 0x0
        193608:	1b66cb3d 	blne	1b46304 <TPrinter::$DoUserAbort(void)>
        19360c:	e3a05001 	mov	r5, #1	; 0x1
        193610:	e1a00005 	mov	r0, r5
        193614:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TPrintView::PrintPages(RefVar const &)
 * Address: 00193618
 */
TPrintView::PrintPages(RefVar const &) {
    /*
        193618:	e1a0c00d 	mov	ip, sp
        19361c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        193620:	e24cb004 	sub	fp, ip, #4	; 0x4
        193624:	e1a04000 	mov	r4, r0
        193628:	e1a05001 	mov	r5, r1
        19362c:	e24dd03c 	sub	sp, sp, #60	; 0x3c
        193630:	e3a00001 	mov	r0, #1	; 0x1
        193634:	e3a01000 	mov	r1, #0	; 0x0
        193638:	e58d0020 	str	r0, [sp, #32]
        19363c:	e3a00000 	mov	r0, #0	; 0x0
        193640:	e58d0018 	str	r0, [sp, #24]
        193644:	e58d101c 	str	r1, [sp, #28]
        193648:	e3a00001 	mov	r0, #1	; 0x1
        19364c:	e5cd0014 	strb	r0, [sp, #20]
        193650:	e3a00002 	mov	r0, #2	; 0x2
        193654:	eb68babc 	bl	1bc214c <$AllocateRefHandle(long)>
        193658:	e58d0010 	str	r0, [sp, #16]
        19365c:	e3a00002 	mov	r0, #2	; 0x2
        193660:	eb68bab9 	bl	1bc214c <$AllocateRefHandle(long)>
        193664:	e58d000c 	str	r0, [sp, #12]
        193668:	e3a00000 	mov	r0, #0	; 0x0
        19366c:	e58d0000 	str	r0, [sp]
        193670:	e5d40044 	ldrb	r0, [r4, #68]	; fField68
        193674:	e3300000 	teq	r0, #0	; 0x0
        193678:	0a0001c3 	beq	193d8c <TPrintView::PrintPages(RefVar const &)+0x774>
        19367c:	e59f10a8 	ldr	r1, [pc, #a8]	; 19372c <TPrintView::PrintPages(RefVar const &)+0x114>
        193680:	e1a00004 	mov	r0, r4
        193684:	eb68dbb3 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        193688:	e59d1010 	ldr	r1, [sp, #16]
        19368c:	e5810000 	str	r0, [r1]
        193690:	e59f1098 	ldr	r1, [pc, #98]	; 193730 <TPrintView::PrintPages(RefVar const &)+0x118>
        193694:	e1a08001 	mov	r8, r1
        193698:	e28d0010 	add	r0, sp, #16	; 0x10
        19369c:	e3a02000 	mov	r2, #0	; 0x0
        1936a0:	eb68c2f0 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1936a4:	eb68baa8 	bl	1bc214c <$AllocateRefHandle(long)>
        1936a8:	e1a06000 	mov	r6, r0
        1936ac:	e5900000 	ldr	r0, [r0]
        1936b0:	e59f707c 	ldr	r7, [pc, #7c]	; 193734 <TPrintView::PrintPages(RefVar const &)+0x11c>
        1936b4:	e3300002 	teq	r0, #2	; 0x2
        1936b8:	1a00001f 	bne	19373c <TPrintView::PrintPages(RefVar const &)+0x124>
        1936bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1936c0:	e59f1070 	ldr	r1, [pc, #70]	; 193738 <TPrintView::PrintPages(RefVar const &)+0x120>
        1936c4:	e28d0014 	add	r0, sp, #20	; 0x14
        1936c8:	e3a02000 	mov	r2, #0	; 0x0
        1936cc:	eb68c2e5 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1936d0:	eb68ba9d 	bl	1bc214c <$AllocateRefHandle(long)>
        1936d4:	e58d0000 	str	r0, [sp]
        1936d8:	e5900000 	ldr	r0, [r0]
        1936dc:	e3300002 	teq	r0, #2	; 0x2
        1936e0:	0a00000b 	beq	193714 <TPrintView::PrintPages(RefVar const &)+0xfc>
        1936e4:	e1a01008 	mov	r1, r8
        1936e8:	e1a0000d 	mov	r0, sp
        1936ec:	e3a02000 	mov	r2, #0	; 0x0
        1936f0:	eb68c2dc 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1936f4:	e5860000 	str	r0, [r6]
        1936f8:	e3300002 	teq	r0, #2	; 0x2
        1936fc:	0a000004 	beq	193714 <TPrintView::PrintPages(RefVar const &)+0xfc>
        193700:	e5971000 	ldr	r1, [r7]
        193704:	e5911000 	ldr	r1, [r1]
        193708:	eb68c2c8 	bl	1bc4230 <$EQRef__FlT1>
        19370c:	e3300000 	teq	r0, #0	; 0x0
        193710:	1a000001 	bne	19371c <TPrintView::PrintPages(RefVar const &)+0x104>
        193714:	e3a00000 	mov	r0, #0	; 0x0
        193718:	e5c40044 	strb	r0, [r4, #68]	; fField68
        19371c:	e59d0000 	ldr	r0, [sp]
        193720:	eb68bea5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193724:	e28dd004 	add	sp, sp, #4	; 0x4
        193728:	ea000008 	b	193750 <TPrintView::PrintPages(RefVar const &)+0x138>
        19372c:	00682688 	rsbeq	r2, r8, r8, lsl #13
        193730:	00684010 	rsbeq	r4, r8, r0, lsl r0
        193734:	00684148 	rsbeq	r4, r8, r8, asr #2
        193738:	00683710 	rsbeq	r3, r8, r0, lsl r7
        19373c:	e5971000 	ldr	r1, [r7]
        193740:	e5911000 	ldr	r1, [r1]
        193744:	eb68c2b9 	bl	1bc4230 <$EQRef__FlT1>
        193748:	e3300000 	teq	r0, #0	; 0x0
        19374c:	05c40044 	streqb	r0, [r4, #68]	; fField68
        193750:	e1a00006 	mov	r0, r6
        193754:	eb68be98 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193758:	ea000188 	b	193d80 <TPrintView::PrintPages(RefVar const &)+0x768>
        19375c:	e3a01000 	mov	r1, #0	; 0x0
        193760:	e3a00000 	mov	r0, #0	; 0x0
        193764:	e24dd068 	sub	sp, sp, #104	; 0x68
        193768:	e92d0003 	stmdb	sp!, {r0, r1}
        19376c:	e28d000c 	add	r0, sp, #12	; 0xc
        193770:	eb687c7f 	bl	1bb2974 <$setjmp>
        193774:	e59f71fc 	ldr	r7, [pc, #1fc]	; 193978 <TPrintView::PrintPages(RefVar const &)+0x360>
        193778:	e3300000 	teq	r0, #0	; 0x0
        19377c:	1a000140 	bne	193c84 <TPrintView::PrintPages(RefVar const &)+0x66c>
        193780:	e28d0004 	add	r0, sp, #4	; 0x4
        193784:	eb69323c 	bl	1be007c <$AddExceptionHandler>
        193788:	e1a00005 	mov	r0, r5
        19378c:	e3a02000 	mov	r2, #0	; 0x0
        193790:	e59d1090 	ldr	r1, [sp, #144]
        193794:	eb64d750 	bl	1ac94dc <$SetPrintProgress__FRC6RefVarlT2>
        193798:	e3a06001 	mov	r6, #1	; 0x1
        19379c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1937a0:	e59f11d4 	ldr	r1, [pc, #1d4]	; 19397c <TPrintView::PrintPages(RefVar const &)+0x364>
        1937a4:	e1a00004 	mov	r0, r4
        1937a8:	eb68db6a 	bl	1bca558 <TView::$GetVar( const(RefVar const &))>
        1937ac:	eb68ba66 	bl	1bc214c <$AllocateRefHandle(long)>
        1937b0:	e58d0000 	str	r0, [sp]
        1937b4:	e5900000 	ldr	r0, [r0]
        1937b8:	e3300002 	teq	r0, #2	; 0x2
        1937bc:	0a00001e 	beq	19383c <TPrintView::PrintPages(RefVar const &)+0x224>
        1937c0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1937c4:	e59f11b4 	ldr	r1, [pc, #1b4]	; 193980 <TPrintView::PrintPages(RefVar const &)+0x368>
        1937c8:	e28d0004 	add	r0, sp, #4	; 0x4
        1937cc:	e3a02000 	mov	r2, #0	; 0x0
        1937d0:	eb68c2a4 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1937d4:	eb68ba5c 	bl	1bc214c <$AllocateRefHandle(long)>
        1937d8:	e58d0000 	str	r0, [sp]
        1937dc:	e5900000 	ldr	r0, [r0]
        1937e0:	e3300002 	teq	r0, #2	; 0x2
        1937e4:	0a000011 	beq	193830 <TPrintView::PrintPages(RefVar const &)+0x218>
        1937e8:	e59f1194 	ldr	r1, [pc, #194]	; 193984 <TPrintView::PrintPages(RefVar const &)+0x36c>
        1937ec:	e1a0000d 	mov	r0, sp
        1937f0:	e3a02000 	mov	r2, #0	; 0x0
        1937f4:	eb68c29b 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        1937f8:	eb68ba53 	bl	1bc214c <$AllocateRefHandle(long)>
        1937fc:	e1a08000 	mov	r8, r0
        193800:	e5900000 	ldr	r0, [r0]
        193804:	e3300002 	teq	r0, #2	; 0x2
        193808:	0a000006 	beq	193828 <TPrintView::PrintPages(RefVar const &)+0x210>
        19380c:	e59f1174 	ldr	r1, [pc, #174]	; 193988 <TPrintView::PrintPages(RefVar const &)+0x370>
        193810:	e5911000 	ldr	r1, [r1]
        193814:	e5911000 	ldr	r1, [r1]
        193818:	eb68c284 	bl	1bc4230 <$EQRef__FlT1>
        19381c:	e3300000 	teq	r0, #0	; 0x0
        193820:	13a06000 	movne	r6, #0	; 0x0
        193824:	03a06001 	moveq	r6, #1	; 0x1
        193828:	e1a00008 	mov	r0, r8
        19382c:	eb68be62 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193830:	e59d0000 	ldr	r0, [sp]
        193834:	eb68be60 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193838:	e28dd004 	add	sp, sp, #4	; 0x4
        19383c:	e1a01006 	mov	r1, r6
        193840:	e5940030 	ldr	r0, [r4, #48]	; fField48
        193844:	eb66cabc 	bl	1b4633c <TPrinter::$SetPortraitOrientation(unsigned char)>
        193848:	e5940030 	ldr	r0, [r4, #48]	; fField48
        19384c:	eb66ba4a 	bl	1b4217c <TPrinter::$OpenPage(void)>
        193850:	e58d0074 	str	r0, [sp, #116]
        193854:	e3300000 	teq	r0, #0	; 0x0
        193858:	1a0000d2 	bne	193ba8 <TPrintView::PrintPages(RefVar const &)+0x590>
        19385c:	e3a08000 	mov	r8, #0	; 0x0
        193860:	e3a00000 	mov	r0, #0	; 0x0
        193864:	e24dd068 	sub	sp, sp, #104	; 0x68
        193868:	e92d0101 	stmdb	sp!, {r0, r8}
        19386c:	e28d000c 	add	r0, sp, #12	; 0xc
        193870:	eb687c3f 	bl	1bb2974 <$setjmp>
        193874:	e3300000 	teq	r0, #0	; 0x0
        193878:	1a0000b3 	bne	193b4c <TPrintView::PrintPages(RefVar const &)+0x534>
        19387c:	e28d0004 	add	r0, sp, #4	; 0x4
        193880:	eb6931fd 	bl	1be007c <$AddExceptionHandler>
        193884:	e1a00004 	mov	r0, r4
        193888:	e3a01000 	mov	r1, #0	; 0x0
        19388c:	e5942000 	ldr	r2, [r4]
        193890:	e1a0e00f 	mov	lr, pc
        193894:	e282f054 	add	pc, r2, #84	; 0x54
        193898:	e3360000 	teq	r6, #0	; 0x0
        19389c:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1938a0:	05901022 	ldreq	r1, [r0, #34]
        1938a4:	01a01841 	moveq	r1, r1, asr #16
        1938a8:	0590001e 	ldreq	r0, [r0, #30]
        1938ac:	01a00840 	moveq	r0, r0, asr #16
        1938b0:	15901020 	ldrne	r1, [r0, #32]
        1938b4:	11a01841 	movne	r1, r1, asr #16
        1938b8:	1590001c 	ldrne	r0, [r0, #28]
        1938bc:	11a00840 	movne	r0, r0, asr #16
        1938c0:	e0410000 	sub	r0, r1, r0
        1938c4:	e3a09000 	mov	r9, #0	; 0x0
        1938c8:	e59f10bc 	ldr	r1, [pc, #bc]	; 19398c <TPrintView::PrintPages(RefVar const &)+0x374>
        1938cc:	e58d111c 	str	r1, [sp, #284]
        1938d0:	e1a01800 	mov	r1, r0, lsl #16
        1938d4:	e58d1118 	str	r1, [sp, #280]
        1938d8:	e59f00b0 	ldr	r0, [pc, #b0]	; 193990 <TPrintView::PrintPages(RefVar const &)+0x378>
        1938dc:	e2841024 	add	r1, r4, #36	; 0x24
        1938e0:	e58d1110 	str	r1, [sp, #272]
        1938e4:	e284103c 	add	r1, r4, #60	; 0x3c
        1938e8:	e58d0114 	str	r0, [sp, #276]
        1938ec:	e58d110c 	str	r1, [sp, #268]
        1938f0:	e1a00005 	mov	r0, r5
        1938f4:	e3a02000 	mov	r2, #0	; 0x0
        1938f8:	e59d111c 	ldr	r1, [sp, #284]
        1938fc:	eb68c259 	bl	1bc4268 <$GetProtoVariable__FRC6RefVarT1Pl>
        193900:	e59d10f0 	ldr	r1, [sp, #240]
        193904:	e5810000 	str	r0, [r1]
        193908:	e24dd008 	sub	sp, sp, #8	; 0x8
        19390c:	e59f1080 	ldr	r1, [pc, #80]	; 193994 <TPrintView::PrintPages(RefVar const &)+0x37c>
        193910:	e5911000 	ldr	r1, [r1]
        193914:	e5911000 	ldr	r1, [r1]
        193918:	eb68c244 	bl	1bc4230 <$EQRef__FlT1>
        19391c:	e3300000 	teq	r0, #0	; 0x0
        193920:	13a0001c 	movne	r0, #28	; 0x1c
        193924:	12400b2b 	subne	r0, r0, #44032	; 0xac00
        193928:	158d00ec 	strne	r0, [sp, #236]
        19392c:	128dd008 	addne	sp, sp, #8	; 0x8
        193930:	1a00007e 	bne	193b30 <TPrintView::PrintPages(RefVar const &)+0x518>
        193934:	e5940034 	ldr	r0, [r4, #52]	; fField52
        193938:	e5900024 	ldr	r0, [r0, #36]	; fField36
        19393c:	e5900000 	ldr	r0, [r0]
        193940:	e2800004 	add	r0, r0, #4	; 0x4
        193944:	e8901008 	ldmia	r0, {r3, ip}
        193948:	e88d1008 	stmia	sp, {r3, ip}
        19394c:	e28d00f0 	add	r0, sp, #240	; 0xf0
        193950:	e89d1008 	ldmia	sp, {r3, ip}
        193954:	e8801008 	stmia	r0, {r3, ip}
        193958:	e3360000 	teq	r6, #0	; 0x0
        19395c:	0a00000d 	beq	193998 <TPrintView::PrintPages(RefVar const &)+0x380>
        193960:	e59d00f6 	ldr	r0, [sp, #246]
        193964:	e5941034 	ldr	r1, [r4, #52]	; fField52
        193968:	e591101c 	ldr	r1, [r1, #28]
        19396c:	e1a01821 	mov	r1, r1, lsr #16
        193970:	e0400001 	sub	r0, r0, r1
        193974:	ea00000c 	b	1939ac <TPrintView::PrintPages(RefVar const &)+0x394>
        193978:	0c1017a0 	ldceq	7, cr1, [r0], -#640
        19397c:	00682d60 	rsbeq	r2, r8, r0, ror #26
        193980:	00683fd8 	ldreqd	r3, [r8], -#248
        193984:	00683b88 	rsbeq	r3, r8, r8, lsl #23
        193988:	00683430 	rsbeq	r3, r8, r0, lsr r4
        19398c:	00684830 	rsbeq	r4, r8, r0, lsr r8
        193990:	00371318 	eoreqs	r1, r7, r8, lsl r3
        193994:	006822b8 	streqh	r2, [r8], -#40
        193998:	e59d10f4 	ldr	r1, [sp, #244]
        19399c:	e5940034 	ldr	r0, [r4, #52]	; fField52
        1939a0:	e590001e 	ldr	r0, [r0, #30]
        1939a4:	e1a00820 	mov	r0, r0, lsr #16
        1939a8:	e0410000 	sub	r0, r1, r0
        1939ac:	e1a00800 	mov	r0, r0, lsl #16
        1939b0:	e59d1120 	ldr	r1, [sp, #288]
        1939b4:	eb6935c1 	bl	1be10c0 <$FixedDivide>
        1939b8:	e1a01000 	mov	r1, r0
        1939bc:	e3a00719 	mov	r0, #6553600	; 0x640000
        1939c0:	eb6935bf 	bl	1be10c4 <$FixedMultiply>
        1939c4:	e2800902 	add	r0, r0, #32768	; 0x8000
        1939c8:	e1a00840 	mov	r0, r0, asr #16
        1939cc:	e1a02800 	mov	r2, r0, lsl #16
        1939d0:	e1a02842 	mov	r2, r2, asr #16
        1939d4:	e58d2110 	str	r2, [sp, #272]
        1939d8:	e042a009 	sub	sl, r2, r9
        1939dc:	e35a0019 	cmp	sl, #25	; 0x19
        1939e0:	da00001f 	ble	193a64 <TPrintView::PrintPages(RefVar const &)+0x44c>
        1939e4:	e5d40044 	ldrb	r0, [r4, #68]	; fField68
        1939e8:	e3300000 	teq	r0, #0	; 0x0
        1939ec:	0a000017 	beq	193a50 <TPrintView::PrintPages(RefVar const &)+0x438>
        1939f0:	e3a00004 	mov	r0, #4	; 0x4
        1939f4:	eb68eb4f 	bl	1bce738 <$__nw(unsigned int)>
        1939f8:	e1b08000 	movs	r8, r0
        1939fc:	0a000005 	beq	193a18 <TPrintView::PrintPages(RefVar const &)+0x400>
        193a00:	e5950000 	ldr	r0, [r5]
        193a04:	e5900000 	ldr	r0, [r0]
        193a08:	eb68b9cf 	bl	1bc214c <$AllocateRefHandle(long)>
        193a0c:	e3a01000 	mov	r1, #0	; 0x0
        193a10:	e5880000 	str	r0, [r8]
        193a14:	e5a01004 	str	r1, [r0, #4]!
        193a18:	e5878000 	str	r8, [r7]
        193a1c:	e3380000 	teq	r8, #0	; 0x0
        193a20:	1a000005 	bne	193a3c <TPrintView::PrintPages(RefVar const &)+0x424>
        193a24:	e59d011c 	ldr	r0, [sp, #284]
        193a28:	e5900000 	ldr	r0, [r0]
        193a2c:	e3a02000 	mov	r2, #0	; 0x0
        193a30:	e3a010e9 	mov	r1, #233	; 0xe9
        193a34:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        193a38:	eb693dd7 	bl	1be319c <$Throw>
        193a3c:	e1a00005 	mov	r0, r5
        193a40:	e3a02000 	mov	r2, #0	; 0x0
        193a44:	e59d110c 	ldr	r1, [sp, #268]
        193a48:	eb64d6a1 	bl	1ac94d4 <$SetFaxPrintProgress__FRC6RefVarlT2>
        193a4c:	ea000004 	b	193a64 <TPrintView::PrintPages(RefVar const &)+0x44c>
        193a50:	e08a0faa 	add	r0, sl, sl, lsr #31
        193a54:	e08920c0 	add	r2, r9, r0, asr #1
        193a58:	e1a00005 	mov	r0, r5
        193a5c:	e59d110c 	ldr	r1, [sp, #268]
        193a60:	eb64d69d 	bl	1ac94dc <$SetPrintProgress__FRC6RefVarlT2>
        193a64:	e5d40045 	ldrb	r0, [r4, #69]	; fField69
        193a68:	e3300000 	teq	r0, #0	; 0x0
        193a6c:	0a00001b 	beq	193ae0 <TPrintView::PrintPages(RefVar const &)+0x4c8>
        193a70:	e24dd004 	sub	sp, sp, #4	; 0x4
        193a74:	e59d011c 	ldr	r0, [sp, #284]
        193a78:	e59f105c 	ldr	r1, [pc, #5c]	; 193adc <TPrintView::PrintPages(RefVar const &)+0x4c4>
        193a7c:	e5911000 	ldr	r1, [r1]
        193a80:	e5911000 	ldr	r1, [r1]
        193a84:	e5900000 	ldr	r0, [r0]
        193a88:	e5900000 	ldr	r0, [r0]
        193a8c:	eb68c1f3 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        193a90:	eb68b9ad 	bl	1bc214c <$AllocateRefHandle(long)>
        193a94:	e58d0000 	str	r0, [sp]
        193a98:	e5900000 	ldr	r0, [r0]
        193a9c:	e3300002 	teq	r0, #2	; 0x2
        193aa0:	0a000005 	beq	193abc <TPrintView::PrintPages(RefVar const &)+0x4a4>
        193aa4:	e1a0000d 	mov	r0, sp
        193aa8:	eb68daab 	bl	1bca55c <$GetView(RefVar const &)>
        193aac:	e2800010 	add	r0, r0, #16	; 0x10
        193ab0:	e59d1118 	ldr	r1, [sp, #280]
        193ab4:	e8905000 	ldmia	r0, {ip, lr}
        193ab8:	e8815000 	stmia	r1, {ip, lr}
        193abc:	e1a00004 	mov	r0, r4
        193ac0:	e3a02001 	mov	r2, #1	; 0x1
        193ac4:	e59d1118 	ldr	r1, [sp, #280]
        193ac8:	eb68da8d 	bl	1bca504 <TView::$Draw(TRect const &, unsigned char)>
        193acc:	e59d0000 	ldr	r0, [sp]
        193ad0:	eb68bdb9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193ad4:	e28dd004 	add	sp, sp, #4	; 0x4
        193ad8:	ea000008 	b	193b00 <TPrintView::PrintPages(RefVar const &)+0x4e8>
        193adc:	00683fe0 	rsbeq	r3, r8, r0, ror #31
        193ae0:	e28d00f0 	add	r0, sp, #240	; 0xf0
        193ae4:	e3e01000 	mvn	r1, #0	; 0x0
        193ae8:	e1a02001 	mov	r2, r1
        193aec:	eb66f353 	bl	1b50840 <$InsetRect__FP4RectlT2>
        193af0:	e28d10f0 	add	r1, sp, #240	; 0xf0
        193af4:	e1a00004 	mov	r0, r4
        193af8:	e3a02001 	mov	r2, #1	; 0x1
        193afc:	eb68da80 	bl	1bca504 <TView::$Draw(TRect const &, unsigned char)>
        193b00:	e35a0019 	cmp	sl, #25	; 0x19
        193b04:	da000004 	ble	193b1c <TPrintView::PrintPages(RefVar const &)+0x504>
        193b08:	e59d2110 	ldr	r2, [sp, #272]
        193b0c:	e1a09002 	mov	r9, r2
        193b10:	e1a00005 	mov	r0, r5
        193b14:	e59d110c 	ldr	r1, [sp, #268]
        193b18:	eb64d66f 	bl	1ac94dc <$SetPrintProgress__FRC6RefVarlT2>
        193b1c:	e28dd008 	add	sp, sp, #8	; 0x8
        193b20:	e5940030 	ldr	r0, [r4, #48]	; fField48
        193b24:	eb66bdb4 	bl	1b431fc <TPrinter::$RepeatPage(void)>
        193b28:	e3300000 	teq	r0, #0	; 0x0
        193b2c:	1affff6f 	bne	1938f0 <TPrintView::PrintPages(RefVar const &)+0x2d8>
        193b30:	e1a00005 	mov	r0, r5
        193b34:	e3a02064 	mov	r2, #100	; 0x64
        193b38:	e59d1104 	ldr	r1, [sp, #260]
        193b3c:	eb64d666 	bl	1ac94dc <$SetPrintProgress__FRC6RefVarlT2>
        193b40:	e28d0004 	add	r0, sp, #4	; 0x4
        193b44:	eb69355b 	bl	1be10b8 <$ExitHandler>
        193b48:	ea000001 	b	193b54 <TPrintView::PrintPages(RefVar const &)+0x53c>
        193b4c:	e3a00001 	mov	r0, #1	; 0x1
        193b50:	e58d0000 	str	r0, [sp]
        193b54:	e5940030 	ldr	r0, [r4, #48]	; fField48
        193b58:	eb66b108 	bl	1b3ff80 <TPrinter::$ClosePage(void)>
        193b5c:	e59d10e4 	ldr	r1, [sp, #228]
        193b60:	e3310000 	teq	r1, #0	; 0x0
        193b64:	058d00e4 	streq	r0, [sp, #228]
        193b68:	e59d0104 	ldr	r0, [sp, #260]
        193b6c:	e2800001 	add	r0, r0, #1	; 0x1
        193b70:	e58d0104 	str	r0, [sp, #260]
        193b74:	e5940038 	ldr	r0, [r4, #56]	; fField56
        193b78:	e2401001 	sub	r1, r0, #1	; 0x1
        193b7c:	e5841038 	str	r1, [r4, #56]	; fField56
        193b80:	e5940030 	ldr	r0, [r4, #48]	; fField48
        193b84:	eb66c9e4 	bl	1b4631c <TPrinter::$FaxEndPage(long)>
        193b88:	e59d10e4 	ldr	r1, [sp, #228]
        193b8c:	e3310000 	teq	r1, #0	; 0x0
        193b90:	058d00e4 	streq	r0, [sp, #228]
        193b94:	e59d0000 	ldr	r0, [sp]
        193b98:	e3300000 	teq	r0, #0	; 0x0
        193b9c:	128d0004 	addne	r0, sp, #4	; 0x4
        193ba0:	1b69396b 	blne	1be2154 <$NextHandler>
        193ba4:	e28dd070 	add	sp, sp, #112	; 0x70
        193ba8:	e59d0074 	ldr	r0, [sp, #116]
        193bac:	e280cc55 	add	ip, r0, #21760	; 0x5500
        193bb0:	e37c00f5 	cmn	ip, #245	; 0xf5
        193bb4:	1a00000d 	bne	193bf0 <TPrintView::PrintPages(RefVar const &)+0x5d8>
        193bb8:	e59d1090 	ldr	r1, [sp, #144]
        193bbc:	e2811001 	add	r1, r1, #1	; 0x1
        193bc0:	e58d1090 	str	r1, [sp, #144]
        193bc4:	e3510003 	cmp	r1, #3	; 0x3
        193bc8:	aa000008 	bge	193bf0 <TPrintView::PrintPages(RefVar const &)+0x5d8>
        193bcc:	e59d0094 	ldr	r0, [sp, #148]
        193bd0:	e2400001 	sub	r0, r0, #1	; 0x1
        193bd4:	e58d0094 	str	r0, [sp, #148]
        193bd8:	e5940038 	ldr	r0, [r4, #56]	; fField56
        193bdc:	e2800001 	add	r0, r0, #1	; 0x1
        193be0:	e5840038 	str	r0, [r4, #56]	; fField56
        193be4:	e3a00000 	mov	r0, #0	; 0x0
        193be8:	e58d0074 	str	r0, [sp, #116]
        193bec:	ea00001d 	b	193c68 <TPrintView::PrintPages(RefVar const &)+0x650>
        193bf0:	e5941038 	ldr	r1, [r4, #56]	; fField56
        193bf4:	e3310000 	teq	r1, #0	; 0x0
        193bf8:	0a00001a 	beq	193c68 <TPrintView::PrintPages(RefVar const &)+0x650>
        193bfc:	e3300000 	teq	r0, #0	; 0x0
        193c00:	1a000018 	bne	193c68 <TPrintView::PrintPages(RefVar const &)+0x650>
        193c04:	e3a01000 	mov	r1, #0	; 0x0
        193c08:	e58d1090 	str	r1, [sp, #144]
        193c0c:	e24dd004 	sub	sp, sp, #4	; 0x4
        193c10:	e5940034 	ldr	r0, [r4, #52]	; fField52
        193c14:	e5906040 	ldr	r6, [r0, #64]
        193c18:	e3a03000 	mov	r3, #0	; 0x0
        193c1c:	e5a01040 	str	r1, [r0, #64]!
        193c20:	e92d0008 	stmdb	sp!, {r3}
        193c24:	e3a00002 	mov	r0, #2	; 0x2
        193c28:	eb68b947 	bl	1bc214c <$AllocateRefHandle(long)>
        193c2c:	e58d0004 	str	r0, [sp, #4]
        193c30:	e28d2004 	add	r2, sp, #4	; 0x4
        193c34:	e59f1044 	ldr	r1, [pc, #44]	; 193c80 <TPrintView::PrintPages(RefVar const &)+0x668>
        193c38:	e1a00004 	mov	r0, r4
        193c3c:	e3a03000 	mov	r3, #0	; 0x0
        193c40:	eb68de66 	bl	1bcb5e0 <TView::$RunScript(RefVar const &, RefVar const &, unsigned char, unsigned char *)>
        193c44:	e28dd004 	add	sp, sp, #4	; 0x4
        193c48:	e2500002 	subs	r0, r0, #2	; 0x2
        193c4c:	13a00001 	movne	r0, #1	; 0x1
        193c50:	e5cd008c 	strb	r0, [sp, #140]
        193c54:	e59d0000 	ldr	r0, [sp]
        193c58:	eb68bd57 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193c5c:	e5940034 	ldr	r0, [r4, #52]	; fField52
        193c60:	e5a06040 	str	r6, [r0, #64]!
        193c64:	e28dd004 	add	sp, sp, #4	; 0x4
        193c68:	e59d0000 	ldr	r0, [sp]
        193c6c:	eb68bd52 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193c70:	e28dd004 	add	sp, sp, #4	; 0x4
        193c74:	e28d0004 	add	r0, sp, #4	; 0x4
        193c78:	eb69350e 	bl	1be10b8 <$ExitHandler>
        193c7c:	ea000002 	b	193c8c <TPrintView::PrintPages(RefVar const &)+0x674>
        193c80:	00684000 	rsbeq	r4, r8, r0
        193c84:	e3a00001 	mov	r0, #1	; 0x1
        193c88:	e58d0000 	str	r0, [sp]
        193c8c:	e5dd0084 	ldrb	r0, [sp, #132]
        193c90:	e3300000 	teq	r0, #0	; 0x0
        193c94:	15940038 	ldrne	r0, [r4, #56]	; fField56
        193c98:	13300000 	teqne	r0, #0	; 0x0
        193c9c:	0a000004 	beq	193cb4 <TPrintView::PrintPages(RefVar const &)+0x69c>
        193ca0:	e59d0070 	ldr	r0, [sp, #112]
        193ca4:	e3300000 	teq	r0, #0	; 0x0
        193ca8:	059d0000 	ldreq	r0, [sp]
        193cac:	03300000 	teqeq	r0, #0	; 0x0
        193cb0:	0a000031 	beq	193d7c <TPrintView::PrintPages(RefVar const &)+0x764>
        193cb4:	e59d0088 	ldr	r0, [sp, #136]
        193cb8:	e3300000 	teq	r0, #0	; 0x0
        193cbc:	0a000003 	beq	193cd0 <TPrintView::PrintPages(RefVar const &)+0x6b8>
        193cc0:	e59d0070 	ldr	r0, [sp, #112]
        193cc4:	e280cdfa 	add	ip, r0, #16000	; 0x3e80
        193cc8:	e37c0009 	cmn	ip, #9	; 0x9
        193ccc:	0a00001b 	beq	193d40 <TPrintView::PrintPages(RefVar const &)+0x728>
        193cd0:	e5940030 	ldr	r0, [r4, #48]	; fField48
        193cd4:	eb66aca1 	bl	1b3ef60 <TPrinter::$Close(void)>
        193cd8:	e59d1070 	ldr	r1, [sp, #112]
        193cdc:	e3310000 	teq	r1, #0	; 0x0
        193ce0:	1a000012 	bne	193d30 <TPrintView::PrintPages(RefVar const &)+0x718>
        193ce4:	e280cc55 	add	ip, r0, #21760	; 0x5500
        193ce8:	e37c00f5 	cmn	ip, #245	; 0xf5
        193cec:	1a000012 	bne	193d3c <TPrintView::PrintPages(RefVar const &)+0x724>
        193cf0:	e59d1088 	ldr	r1, [sp, #136]
        193cf4:	e2811001 	add	r1, r1, #1	; 0x1
        193cf8:	e58d1088 	str	r1, [sp, #136]
        193cfc:	e3510003 	cmp	r1, #3	; 0x3
        193d00:	aa00000a 	bge	193d30 <TPrintView::PrintPages(RefVar const &)+0x718>
        193d04:	e59d0090 	ldr	r0, [sp, #144]
        193d08:	e2400001 	sub	r0, r0, #1	; 0x1
        193d0c:	e58d0090 	str	r0, [sp, #144]
        193d10:	e5940038 	ldr	r0, [r4, #56]	; fField56
        193d14:	e2800001 	add	r0, r0, #1	; 0x1
        193d18:	e5840038 	str	r0, [r4, #56]	; fField56
        193d1c:	e3a00000 	mov	r0, #0	; 0x0
        193d20:	e58d0070 	str	r0, [sp, #112]
        193d24:	e3a00001 	mov	r0, #1	; 0x1
        193d28:	e5cd0084 	strb	r0, [sp, #132]
        193d2c:	ea000003 	b	193d40 <TPrintView::PrintPages(RefVar const &)+0x728>
        193d30:	e59d1070 	ldr	r1, [sp, #112]
        193d34:	e3310000 	teq	r1, #0	; 0x0
        193d38:	1a000000 	bne	193d40 <TPrintView::PrintPages(RefVar const &)+0x728>
        193d3c:	e58d0070 	str	r0, [sp, #112]
        193d40:	e5d40044 	ldrb	r0, [r4, #68]	; fField68
        193d44:	e3300000 	teq	r0, #0	; 0x0
        193d48:	15976000 	ldrne	r6, [r7]
        193d4c:	13360000 	teqne	r6, #0	; 0x0
        193d50:	0a000005 	beq	193d6c <TPrintView::PrintPages(RefVar const &)+0x754>
        193d54:	e5960000 	ldr	r0, [r6]
        193d58:	eb68bd17 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193d5c:	e3a08000 	mov	r8, #0	; 0x0
        193d60:	e1a00006 	mov	r0, r6
        193d64:	eb68e65d 	bl	1bcd6e0 <$__dl(void *)>
        193d68:	e5878000 	str	r8, [r7]
        193d6c:	e59d0000 	ldr	r0, [sp]
        193d70:	e3300000 	teq	r0, #0	; 0x0
        193d74:	128d0004 	addne	r0, sp, #4	; 0x4
        193d78:	1b6938f5 	blne	1be2154 <$NextHandler>
        193d7c:	e28dd070 	add	sp, sp, #112	; 0x70
        193d80:	e59d0000 	ldr	r0, [sp]
        193d84:	e3300000 	teq	r0, #0	; 0x0
        193d88:	1a000004 	bne	193da0 <TPrintView::PrintPages(RefVar const &)+0x788>
        193d8c:	e5dd0014 	ldrb	r0, [sp, #20]
        193d90:	e3300000 	teq	r0, #0	; 0x0
        193d94:	15940038 	ldrne	r0, [r4, #56]	; fField56
        193d98:	13300000 	teqne	r0, #0	; 0x0
        193d9c:	1afffe6e 	bne	19375c <TPrintView::PrintPages(RefVar const &)+0x144>
        193da0:	e59d000c 	ldr	r0, [sp, #12]
        193da4:	e59d4000 	ldr	r4, [sp]
        193da8:	eb68bd03 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193dac:	e59d0010 	ldr	r0, [sp, #16]
        193db0:	eb68bd01 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        193db4:	e1a00004 	mov	r0, r4
        193db8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

