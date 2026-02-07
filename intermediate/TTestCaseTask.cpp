#include "include/TTestCaseTask.h"

/**
 * Symbol: TTestCaseTask::MainConstructor(void)
 * Address: 0022afe0
 */
TTestCaseTask::MainConstructor(void) {
    /*
        22afe0:	e1a0c00d 	mov	ip, sp
        22afe4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        22afe8:	e24cb004 	sub	fp, ip, #4	; 0x4
        22afec:	e1a04000 	mov	r4, r0
        22aff0:	eb6609c1 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
        22aff4:	e1b06000 	movs	r6, r0
        22aff8:	1a000011 	bne	22b044 <TTestCaseTask::MainConstructor(void)+0x64>
        22affc:	e3a00020 	mov	r0, #32	; 0x20
        22b000:	e5947070 	ldr	r7, [r4, #112]	; fField112
        22b004:	eb668dcb 	bl	1bce738 <$__nw(unsigned int)>
        22b008:	e1b05000 	movs	r5, r0
        22b00c:	0a000005 	beq	22b028 <TTestCaseTask::MainConstructor(void)+0x48>
        22b010:	e1a00005 	mov	r0, r5
        22b014:	eb66e47b 	bl	1be4208 <TAEventHandler::$__ct(void)>
        22b018:	e59f002c 	ldr	r0, [pc, #2c]	; 22b04c <TTestCaseTask::MainConstructor(void)+0x6c>
        22b01c:	e5850000 	str	r0, [r5]
        22b020:	e585401c 	str	r4, [r5, #28]
        22b024:	e5857018 	str	r7, [r5, #24]
        22b028:	e1b00005 	movs	r0, r5
        22b02c:	e5a45078 	str	r5, [r4, #120]!	; fField120
        22b030:	03e06000 	mvneq	r6, #0	; 0x0
        22b034:	0a000002 	beq	22b044 <TTestCaseTask::MainConstructor(void)+0x64>
        22b038:	e59f2010 	ldr	r2, [pc, #10]	; 22b050 <TTestCaseTask::MainConstructor(void)+0x70>
        22b03c:	e59f1010 	ldr	r1, [pc, #10]	; 22b054 <TTestCaseTask::MainConstructor(void)+0x74>
        22b040:	eb66f91a 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        22b044:	e1a00006 	mov	r0, r6
        22b048:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        22b04c:	0001f314 	andeq	pc, r1, r4, lsl r3
        22b050:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        22b054:	7674736b 	ldrvcbt	r7, [r4], -fp, ror #6	; fField6
    */
}

/**
 * Symbol: TTestCaseTask::MainDestructor(void)
 * Address: 0022b058
 */
TTestCaseTask::MainDestructor(void) {
    /*
        22b058:	e1a0c00d 	mov	ip, sp
        22b05c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22b060:	e24cb004 	sub	fp, ip, #4	; 0x4
        22b064:	e1a04000 	mov	r4, r0
        22b068:	e5900074 	ldr	r0, [r0, #116]	; fField116
        22b06c:	e3300000 	teq	r0, #0	; 0x0
        22b070:	13a01001 	movne	r1, #1	; 0x1
        22b074:	1bff6e07 	blne	206898 <TAgentReporter::__dt(void)>
        22b078:	e5940078 	ldr	r0, [r4, #120]	; fField120
        22b07c:	e3300000 	teq	r0, #0	; 0x0
        22b080:	0a000002 	beq	22b090 <TTestCaseTask::MainDestructor(void)+0x38>
        22b084:	e3a01001 	mov	r1, #1	; 0x1
        22b088:	e1a0e00f 	mov	lr, pc
        22b08c:	e590f000 	ldr	pc, [r0]
        22b090:	e5940070 	ldr	r0, [r4, #112]	; fField112
        22b094:	eb669e30 	bl	1bd295c <$FreeInstance(TProtocol *)>
        22b098:	e1a00004 	mov	r0, r4
        22b09c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        22b0a0:	ea660d97 	b	1bae704 <TAppWorld::$MainDestructor(void)>
    */
}

/**
 * Symbol: TTestCaseTask::MakeFork(void)
 * Address: 0022b0a4
 */
TTestCaseTask::MakeFork(void) {
    /*
        22b0a4:	e1a0c00d 	mov	ip, sp
        22b0a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        22b0ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        22b0b0:	e3a00faa 	mov	r0, #680	; 0x2a8
        22b0b4:	eb668d9f 	bl	1bce738 <$__nw(unsigned int)>
        22b0b8:	e1b04000 	movs	r4, r0
        22b0bc:	0a000003 	beq	22b0d0 <TTestCaseTask::MakeFork(void)+0x2c>
        22b0c0:	e1a00004 	mov	r0, r4
        22b0c4:	eb66e45e 	bl	1be4244 <TAppWorld::$__ct(void)>
        22b0c8:	e59f0008 	ldr	r0, [pc, #8]	; 22b0d8 <TTestCaseTask::MakeFork(void)+0x34>
        22b0cc:	e5840000 	str	r0, [r4]
        22b0d0:	e1a00004 	mov	r0, r4
        22b0d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        22b0d8:	0001d134 	andeq	sp, r1, r4, lsr r1
    */
}

/**
 * Symbol: TTestCaseTask::Init2(unsigned long, TClassInfo *, TAgentReporter *, char *, char *)
 * Address: 0022b0dc
 */
TTestCaseTask::Init2(unsigned long, TClassInfo *, TAgentReporter *, char *, char *) {
    /*
        22b0dc:	e1a0c00d 	mov	ip, sp
        22b0e0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        22b0e4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        22b0e8:	e24cb014 	sub	fp, ip, #20	; 0x14
        22b0ec:	e1a04000 	mov	r4, r0
        22b0f0:	e1a05003 	mov	r5, r3
        22b0f4:	e3a08000 	mov	r8, #0	; 0x0
        22b0f8:	e59b9018 	ldr	r9, [fp, #24]
        22b0fc:	e59ba014 	ldr	sl, [fp, #20]
        22b100:	e5803074 	str	r3, [r0, #116]	; fField116
        22b104:	e1a00002 	mov	r0, r2
        22b108:	e1a07002 	mov	r7, r2
        22b10c:	eb66b6ca 	bl	1bd8c3c <TClassInfo::$Register( const(void))>
        22b110:	e1a00007 	mov	r0, r7
        22b114:	eb66a656 	bl	1bd4a74 <TClassInfo::$ImplementationName( const(void))>
        22b118:	e1a06000 	mov	r6, r0
        22b11c:	e1a00007 	mov	r0, r7
        22b120:	eb66aa72 	bl	1bd5af0 <TClassInfo::$InterfaceName( const(void))>
        22b124:	e1a01006 	mov	r1, r6
        22b128:	eb66b297 	bl	1bd7b8c <$NewByName__FPCcT1>
        22b12c:	e5840070 	str	r0, [r4, #112]	; fField112
        22b130:	e1a00007 	mov	r0, r7
        22b134:	eb6695d0 	bl	1bd087c <TClassInfo::$DeRegister( const(void))>
        22b138:	e2850060 	add	r0, r5, #96	; 0x60
        22b13c:	e1a01009 	mov	r1, r9
        22b140:	eb662a59 	bl	1bb5aac <$strcpy>
        22b144:	e2842d0a 	add	r2, r4, #640	; 0x280
        22b148:	e2841fa9 	add	r1, r4, #676	; 0x2a4
        22b14c:	e1a00004 	mov	r0, r4
        22b150:	eb656018 	bl	1b831b8 <TTestCaseTask::$GetAgrcArgv(short *, char **)>
        22b154:	e584a27c 	str	sl, [r4, #636]	; fField636
        22b158:	e59402a4 	ldr	r0, [r4, #676]	; fField676
        22b15c:	e1a00820 	mov	r0, r0, lsr #16
        22b160:	e2800001 	add	r0, r0, #1	; 0x1
        22b164:	e5c402a5 	strb	r0, [r4, #677]	; fField677
        22b168:	e1a00440 	mov	r0, r0, asr #8
        22b16c:	e5c402a4 	strb	r0, [r4, #676]	; fField676
        22b170:	e1a00004 	mov	r0, r4
        22b174:	e3a03e77 	mov	r3, #1904	; 0x770
        22b178:	e2833a01 	add	r3, r3, #4096	; 0x1000
        22b17c:	e3a02001 	mov	r2, #1	; 0x1
        22b180:	e59b1008 	ldr	r1, [fp, #8]
        22b184:	eb66f8d2 	bl	1be94d4 <TAppWorld::$Init(unsigned long, unsigned char, unsigned long)>
        22b188:	e1a00008 	mov	r0, r8
        22b18c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TTestCaseTask::GetSizeOf(void)
 * Address: 0022b190
 */
TTestCaseTask::GetSizeOf(void) {
    /*
        22b190:	e3a00faa 	mov	r0, #680	; 0x2a8
        22b194:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTestCaseTask::GetAgrcArgv(short *, char **)
 * Address: 0022b198
 */
TTestCaseTask::GetAgrcArgv(short *, char **) {
    /*
        22b198:	e1a0c00d 	mov	ip, sp
        22b19c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        22b1a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        22b1a4:	e1a05001 	mov	r5, r1
        22b1a8:	e1a04002 	mov	r4, r2
        22b1ac:	e3a08000 	mov	r8, #0	; 0x0
        22b1b0:	e5900074 	ldr	r0, [r0, #116]	; fField116
        22b1b4:	e2807060 	add	r7, r0, #96	; 0x60
        22b1b8:	e3a06000 	mov	r6, #0	; 0x0
        22b1bc:	e1a00007 	mov	r0, r7
        22b1c0:	eb662a3a 	bl	1bb5ab0 <$strlen>
        22b1c4:	e1a01800 	mov	r1, r0, lsl #16
        22b1c8:	e1a01841 	mov	r1, r1, asr #16
        22b1cc:	e3a03000 	mov	r3, #0	; 0x0
        22b1d0:	ea000025 	b	22b26c <TTestCaseTask::GetAgrcArgv(short *, char **)+0xd4>
        22b1d4:	e7d70006 	ldrb	r0, [r7, r6]
        22b1d8:	e3300020 	teq	r0, #32	; 0x20
        22b1dc:	1a000005 	bne	22b1f8 <TTestCaseTask::GetAgrcArgv(short *, char **)+0x60>
        22b1e0:	e2860001 	add	r0, r6, #1	; 0x1
        22b1e4:	e1a06800 	mov	r6, r0, lsl #16
        22b1e8:	e1a06846 	mov	r6, r6, asr #16
        22b1ec:	e7d70006 	ldrb	r0, [r7, r6]
        22b1f0:	e3300020 	teq	r0, #32	; 0x20
        22b1f4:	0afffff9 	beq	22b1e0 <TTestCaseTask::GetAgrcArgv(short *, char **)+0x48>
        22b1f8:	e1560001 	cmp	r6, r1
        22b1fc:	aa00001e 	bge	22b27c <TTestCaseTask::GetAgrcArgv(short *, char **)+0xe4>
        22b200:	e7d70006 	ldrb	r0, [r7, r6]
        22b204:	e3300027 	teq	r0, #39	; 0x27
        22b208:	13300022 	teqne	r0, #34	; 0x22
        22b20c:	02862001 	addeq	r2, r6, #1	; 0x1
        22b210:	01a02802 	moveq	r2, r2, lsl #16
        22b214:	01a02842 	moveq	r2, r2, asr #16
        22b218:	01a06002 	moveq	r6, r2
        22b21c:	11a02006 	movne	r2, r6
        22b220:	13a00020 	movne	r0, #32	; 0x20
        22b224:	ea000002 	b	22b234 <TTestCaseTask::GetAgrcArgv(short *, char **)+0x9c>
        22b228:	e286c001 	add	ip, r6, #1	; 0x1
        22b22c:	e1a0680c 	mov	r6, ip, lsl #16
        22b230:	e1a06846 	mov	r6, r6, asr #16
        22b234:	e7d7c006 	ldrb	ip, [r7, r6]
        22b238:	e13c0000 	teq	ip, r0
        22b23c:	0a000001 	beq	22b248 <TTestCaseTask::GetAgrcArgv(short *, char **)+0xb0>
        22b240:	e1560001 	cmp	r6, r1
        22b244:	dafffff7 	ble	22b228 <TTestCaseTask::GetAgrcArgv(short *, char **)+0x90>
        22b248:	e7c73006 	strb	r3, [r7, r6]
        22b24c:	e0870002 	add	r0, r7, r2
        22b250:	e7840108 	str	r0, [r4, r8, lsl #2]
        22b254:	e2880001 	add	r0, r8, #1	; 0x1
        22b258:	e1a08800 	mov	r8, r0, lsl #16
        22b25c:	e1a08848 	mov	r8, r8, asr #16
        22b260:	e2860001 	add	r0, r6, #1	; 0x1
        22b264:	e1a06800 	mov	r6, r0, lsl #16
        22b268:	e1a06846 	mov	r6, r6, asr #16
        22b26c:	e1560001 	cmp	r6, r1
        22b270:	ca000001 	bgt	22b27c <TTestCaseTask::GetAgrcArgv(short *, char **)+0xe4>
        22b274:	e358000a 	cmp	r8, #10	; 0xa
        22b278:	baffffd5 	blt	22b1d4 <TTestCaseTask::GetAgrcArgv(short *, char **)+0x3c>
        22b27c:	e5c58001 	strb	r8, [r5, #1]
        22b280:	e1a00448 	mov	r0, r8, asr #8
        22b284:	e5c50000 	strb	r0, [r5]
        22b288:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TTestCaseTask::AEHandlerProc(TTestCaseTaskEvent *)
 * Address: 0022b28c
 */
TTestCaseTask::AEHandlerProc(TTestCaseTaskEvent *) {
    /*
        22b28c:	e1a0c00d 	mov	ip, sp
        22b290:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        22b294:	e24cb004 	sub	fp, ip, #4	; 0x4
        22b298:	e1a04000 	mov	r4, r0
        22b29c:	e3a05000 	mov	r5, #0	; 0x0
        22b2a0:	e5b10008 	ldr	r0, [r1, #8]!
        22b2a4:	e3300001 	teq	r0, #1	; 0x1
        22b2a8:	0a000003 	beq	22b2bc <TTestCaseTask::AEHandlerProc(TTestCaseTaskEvent *)+0x30>
        22b2ac:	e3300002 	teq	r0, #2	; 0x2
        22b2b0:	01a00004 	moveq	r0, r4
        22b2b4:	0b66ec1b 	bleq	1be6328 <TAppWorld::$AETerminateLoop(void)>
        22b2b8:	ea000030 	b	22b380 <TTestCaseTask::AEHandlerProc(TTestCaseTaskEvent *)+0xf4>
        22b2bc:	e3a01005 	mov	r1, #5	; 0x5
        22b2c0:	e5940074 	ldr	r0, [r4, #116]	; fField116
        22b2c4:	e594227c 	ldr	r2, [r4, #636]	; fField636
        22b2c8:	eb655b9f 	bl	1b8214c <TAgentReporter::$AgentReportStatus(long, char *)>
        22b2cc:	e5943074 	ldr	r3, [r4, #116]	; fField116
        22b2d0:	e2842f9f 	add	r2, r4, #636	; 0x27c
        22b2d4:	e59412a4 	ldr	r1, [r4, #676]	; fField676
        22b2d8:	e1a01841 	mov	r1, r1, asr #16
        22b2dc:	e5940070 	ldr	r0, [r4, #112]	; fField112
        22b2e0:	eb057826 	bl	389380 <TTestCase::Init(short, char **, TTestReporter *)>
        22b2e4:	e5940070 	ldr	r0, [r4, #112]	; fField112
        22b2e8:	eb6563c9 	bl	1b84214 <TTestCase::$Setup(void)>
        22b2ec:	e1b05000 	movs	r5, r0
        22b2f0:	0a00000a 	beq	22b320 <TTestCaseTask::AEHandlerProc(TTestCaseTaskEvent *)+0x94>
        22b2f4:	e1a03005 	mov	r3, r5
        22b2f8:	e5940074 	ldr	r0, [r4, #116]	; fField116
        22b2fc:	e28f2f01 	add	r2, pc, #4	; 0x4
        22b300:	e28f1f02 	add	r1, pc, #8	; 0x8
        22b304:	ea000018 	b	22b36c <TTestCaseTask::AEHandlerProc(TTestCaseTaskEvent *)+0xe0>
        22b308:	53657475 	cmnpl	r5, #1962934272	; 0x75000000
        22b30c:	70000000 	andvc	r0, r0, r0
        22b310:	54657374 	strplbt	r7, [r5], -#884
        22b314:	20636173 	rsbcs	r6, r3, r3, ror r1
        22b318:	65206572 	strvs	r6, [r0, -#1394]!
        22b31c:	726f7200 	rsbvc	r7, pc, #0	; 0x0
        22b320:	e5940070 	ldr	r0, [r4, #112]	; fField112
        22b324:	eb655f95 	bl	1b83180 <TTestCase::$Execute(void)>
        22b328:	e1b05000 	movs	r5, r0
        22b32c:	0a000006 	beq	22b34c <TTestCaseTask::AEHandlerProc(TTestCaseTaskEvent *)+0xc0>
        22b330:	e1a03005 	mov	r3, r5
        22b334:	e5940074 	ldr	r0, [r4, #116]	; fField116
        22b338:	e28f2f01 	add	r2, pc, #4	; 0x4
        22b33c:	e24f1f0d 	sub	r1, pc, #52	; 0x34
        22b340:	ea000009 	b	22b36c <TTestCaseTask::AEHandlerProc(TTestCaseTaskEvent *)+0xe0>
        22b344:	45786563 	ldrmib	r6, [r8, -#1379]!
        22b348:	75746500 	ldrvcb	r6, [r4, -#1280]!	; fField1280
        22b34c:	e5940070 	ldr	r0, [r4, #112]	; fField112
        22b350:	eb655b7f 	bl	1b82154 <TTestCase::$Cleanup(void)>
        22b354:	e1b05000 	movs	r5, r0
        22b358:	0a000004 	beq	22b370 <TTestCaseTask::AEHandlerProc(TTestCaseTaskEvent *)+0xe4>
        22b35c:	e1a03005 	mov	r3, r5
        22b360:	e5940074 	ldr	r0, [r4, #116]	; fField116
        22b364:	e28f2f07 	add	r2, pc, #28	; 0x1c
        22b368:	e24f1f18 	sub	r1, pc, #96	; 0x60
        22b36c:	eb655b75 	bl	1b82148 <TAgentReporter::$AgentReportError(char *, char *, long)>
        22b370:	e3a01006 	mov	r1, #6	; 0x6
        22b374:	e5b40074 	ldr	r0, [r4, #116]!	; fField116
        22b378:	e5b42208 	ldr	r2, [r4, #520]!	; fField520
        22b37c:	eb655b72 	bl	1b8214c <TAgentReporter::$AgentReportStatus(long, char *)>
        22b380:	e1a00005 	mov	r0, r5
        22b384:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        22b388:	436c6561 	cmnmi	ip, #406847488	; 0x18400000
        22b38c:	6e757000 	cdpvs	0, 7, cr7, cr5, cr0, {0}
    */
}

