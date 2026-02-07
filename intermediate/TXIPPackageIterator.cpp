#include "include/TXIPPackageIterator.h"

/**
 * Symbol: TXIPPackageIterator::__ct(CPipe *)
 * Address: 002790e4
 */
TXIPPackageIterator::TXIPPackageIterator(CPipe *) {
    /*
        2790e4:	e1a0c00d 	mov	ip, sp
        2790e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2790ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        2790f0:	e1b04000 	movs	r4, r0
        2790f4:	e1a05001 	mov	r5, r1
        2790f8:	1a000003 	bne	27910c <TXIPPackageIterator::__ct(CPipe *)+0x28>
        2790fc:	e3a00028 	mov	r0, #40	; 0x28
        279100:	eb65558c 	bl	1bce738 <$__nw(unsigned int)>
        279104:	e1b04000 	movs	r4, r0
        279108:	0a000002 	beq	279118 <TXIPPackageIterator::__ct(CPipe *)+0x34>
        27910c:	e1a01005 	mov	r1, r5
        279110:	e1a00004 	mov	r0, r4
        279114:	eb655166 	bl	1bcd6b4 <TPackageIterator::$__ct(CPipe *)>
        279118:	e1a00004 	mov	r0, r4
        27911c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXIPPackageIterator::__ct(void *)
 * Address: 00279120
 */
TXIPPackageIterator::TXIPPackageIterator(*) {
    /*
        279120:	e1a0c00d 	mov	ip, sp
        279124:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        279128:	e24cb004 	sub	fp, ip, #4	; 0x4
        27912c:	e1b04000 	movs	r4, r0
        279130:	e1a05001 	mov	r5, r1
        279134:	1a000003 	bne	279148 <TXIPPackageIterator::__ct(void *)+0x28>
        279138:	e3a00028 	mov	r0, #40	; 0x28
        27913c:	eb65557d 	bl	1bce738 <$__nw(unsigned int)>
        279140:	e1b04000 	movs	r4, r0
        279144:	0a000002 	beq	279154 <TXIPPackageIterator::__ct(void *)+0x34>
        279148:	e1a01005 	mov	r1, r5
        27914c:	e1a00004 	mov	r0, r4
        279150:	eb655158 	bl	1bcd6b8 <TPackageIterator::$__ct(void *)>
        279154:	e1a00004 	mov	r0, r4
        279158:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)
 * Address: 0027915c
 */
TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *) {
    /*
        27915c:	e1a0c00d 	mov	ip, sp
        279160:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        279164:	e24cb004 	sub	fp, ip, #4	; 0x4
        279168:	e1a04000 	mov	r4, r0
        27916c:	e1a05001 	mov	r5, r1
        279170:	e24dd024 	sub	sp, sp, #36	; 0x24
        279174:	eb657a98 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        279178:	e1a08000 	mov	r8, r0
        27917c:	e3a01000 	mov	r1, #0	; 0x0
        279180:	e1a00004 	mov	r0, r4
        279184:	e58d1014 	str	r1, [sp, #20]	; fField20
        279188:	eb657a93 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        27918c:	e2400001 	sub	r0, r0, #1	; 0x1
        279190:	e2800a01 	add	r0, r0, #4096	; 0x1000
        279194:	e1a00620 	mov	r0, r0, lsr #12
        279198:	e1a00100 	mov	r0, r0, lsl #2
        27919c:	eb655565 	bl	1bce738 <$__nw(unsigned int)>
        2791a0:	e3a07000 	mov	r7, #0	; 0x0
        2791a4:	e58d0010 	str	r0, [sp, #16]	; fField16
        2791a8:	e3300000 	teq	r0, #0	; 0x0
        2791ac:	e58d7000 	str	r7, [sp]
        2791b0:	1a000002 	bne	2791c0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x64>
        2791b4:	eb65a3d9 	bl	1be2120 <$MemError>
        2791b8:	e1a06000 	mov	r6, r0
        2791bc:	ea00018b 	b	2797f0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x694>
        2791c0:	e28d2008 	add	r2, sp, #8	; 0x8
        2791c4:	e1a01008 	mov	r1, r8
        2791c8:	e1a00005 	mov	r0, r5
        2791cc:	eb6269f1 	bl	1b13998 <$BestXIPChunk(TStore *, long, long *)>
        2791d0:	e1b06000 	movs	r6, r0
        2791d4:	1a000185 	bne	2797f0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x694>
        2791d8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2791dc:	e0881000 	add	r1, r8, r0
        2791e0:	e2411001 	sub	r1, r1, #1	; 0x1
        2791e4:	eb64e5d7 	bl	1bb2948 <$__rt_udiv>
        2791e8:	e1a01100 	mov	r1, r0, lsl #2
        2791ec:	e58d100c 	str	r1, [sp, #12]	; fField12
        2791f0:	e1a00005 	mov	r0, r5
        2791f4:	e51b2030 	ldr	r2, [fp, -#48]
        2791f8:	eb04366b 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        2791fc:	e1b06000 	movs	r6, r0
        279200:	1a00017a 	bne	2797f0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x694>
        279204:	e51b2030 	ldr	r2, [fp, -#48]
        279208:	e5921000 	ldr	r1, [r2]
        27920c:	e1a00004 	mov	r0, r4
        279210:	e58d1004 	str	r1, [sp, #4]
        279214:	eb657a70 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        279218:	eb6269e9 	bl	1b139c4 <$CalculateVirtualAddressForXIPPackage(unsigned long)>
        27921c:	e1a09000 	mov	r9, r0
        279220:	e3380000 	teq	r8, #0	; 0x0
        279224:	0a000028 	beq	2792cc <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x170>
        279228:	e24dd004 	sub	sp, sp, #4	; 0x4
        27922c:	e1a00008 	mov	r0, r8
        279230:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        279234:	e1510008 	cmp	r1, r8
        279238:	b1a00001 	movlt	r0, r1
        27923c:	e1a0a000 	mov	sl, r0
        279240:	e2400001 	sub	r0, r0, #1	; 0x1
        279244:	e2800a01 	add	r0, r0, #4096	; 0x1000
        279248:	e1a00620 	mov	r0, r0, lsr #12
        27924c:	e1a00600 	mov	r0, r0, lsl #12
        279250:	e1a06000 	mov	r6, r0
        279254:	eb6269e1 	bl	1b139e0 <$HeaderSizeForXIPChunkOfSize(long)>
        279258:	e0801006 	add	r1, r0, r6
        27925c:	e1a0200d 	mov	r2, sp
        279260:	e1a00005 	mov	r0, r5
        279264:	eb043671 	bl	386c30 <TStore::NewXIPObject(long, unsigned long *)>
        279268:	e1b06000 	movs	r6, r0
        27926c:	128dd004 	addne	sp, sp, #4	; 0x4
        279270:	1a00015b 	bne	2797e4 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x688>
        279274:	e24dd00c 	sub	sp, sp, #12	; 0xc
        279278:	e28d3008 	add	r3, sp, #8	; 0x8
        27927c:	e92d0008 	stmdb	sp!, {r3}
        279280:	e28d3004 	add	r3, sp, #4	; 0x4
        279284:	e28d2008 	add	r2, sp, #8	; 0x8
        279288:	e1a00005 	mov	r0, r5
        27928c:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        279290:	eb043669 	bl	386c3c <TStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)>
        279294:	e28dd004 	add	sp, sp, #4	; 0x4
        279298:	e1b06000 	movs	r6, r0
        27929c:	128dd010 	addne	sp, sp, #16	; 0x10
        2792a0:	1a00014f 	bne	2797e4 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x688>
        2792a4:	e058800a 	subs	r8, r8, sl
        2792a8:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2792ac:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        2792b0:	e59d2020 	ldr	r2, [sp, #32]	; fField32
        2792b4:	e7820101 	str	r0, [r2, r1, lsl #2]
        2792b8:	e59d1024 	ldr	r1, [sp, #36]	; fField36
        2792bc:	e2811001 	add	r1, r1, #1	; 0x1
        2792c0:	e58d1024 	str	r1, [sp, #36]	; fField36
        2792c4:	e28dd010 	add	sp, sp, #16	; 0x10
        2792c8:	1affffd6 	bne	279228 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0xcc>
        2792cc:	e24dd05c 	sub	sp, sp, #92	; 0x5c
        2792d0:	e1a01009 	mov	r1, r9
        2792d4:	e59d2064 	ldr	r2, [sp, #100]
        2792d8:	e28d0054 	add	r0, sp, #84	; 0x54
        2792dc:	eb62659e 	bl	1b1295c <XIPParameterBlock::$__ct(unsigned long, unsigned long)>
        2792e0:	e28d0018 	add	r0, sp, #24	; 0x18
        2792e4:	eb6265a2 	bl	1b12974 <TXIPStorePackageWriter::$__ct(void)>
        2792e8:	e3a08000 	mov	r8, #0	; 0x0
        2792ec:	e58d8008 	str	r8, [sp, #8]	; fField8
        2792f0:	e58d8004 	str	r8, [sp, #4]
        2792f4:	e58d800c 	str	r8, [sp, #12]	; fField12
        2792f8:	e58d8010 	str	r8, [sp, #16]	; fField16
        2792fc:	e3a0a000 	mov	sl, #0	; 0x0
        279300:	e1a00004 	mov	r0, r4
        279304:	e58d8014 	str	r8, [sp, #20]	; fField20
        279308:	eb657a31 	bl	1bd7bd4 <TPackageIterator::$PackageName(void)>
        27930c:	e58d000c 	str	r0, [sp, #12]	; fField12
        279310:	e1a00004 	mov	r0, r4
        279314:	eb657a25 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        279318:	e58d0014 	str	r0, [sp, #20]	; fField20
        27931c:	e1a00004 	mov	r0, r4
        279320:	eb657a2d 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        279324:	e58d0004 	str	r0, [sp, #4]
        279328:	e1a00004 	mov	r0, r4
        27932c:	eb625928 	bl	1b0f7d4 <TPackageIterator::$GetRelocationChunkInfo(void)>
        279330:	e1b06000 	movs	r6, r0
        279334:	1a00005d 	bne	2794b0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x354>
        279338:	e28d305c 	add	r3, sp, #92	; 0x5c
        27933c:	e2842010 	add	r2, r4, #16	; 0x10
        279340:	e8920006 	ldmia	r2, {r1, r2}
        279344:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        279348:	e1a00004 	mov	r0, r4
        27934c:	eb657a22 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        279350:	e1a03000 	mov	r3, r0
        279354:	e92d0008 	stmdb	sp!, {r3}
        279358:	e28d3064 	add	r3, sp, #100	; 0x64
        27935c:	e1a01005 	mov	r1, r5
        279360:	e59d207c 	ldr	r2, [sp, #124]
        279364:	e28d0028 	add	r0, sp, #40	; 0x28
        279368:	eb62699e 	bl	1b139e8 <TXIPStorePackageWriter::$Init(TStore *, unsigned long *, XIPParameterBlock *, unsigned long, RelocationHeader *, RelocationEntry *, unsigned long *)>
        27936c:	e28dd010 	add	sp, sp, #16	; 0x10
        279370:	e1b06000 	movs	r6, r0
        279374:	1a00004d 	bne	2794b0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x354>
        279378:	e3a00b01 	mov	r0, #1024	; 0x400
        27937c:	eb6554ed 	bl	1bce738 <$__nw(unsigned int)>
        279380:	e1a07000 	mov	r7, r0
        279384:	eb65a365 	bl	1be2120 <$MemError>
        279388:	e1b06000 	movs	r6, r0
        27938c:	1a000047 	bne	2794b0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x354>
        279390:	e52d806c 	str	r8, [sp, -#108]!
        279394:	e28d0008 	add	r0, sp, #8	; 0x8
        279398:	eb64e575 	bl	1bb2974 <$setjmp>
        27939c:	e3300000 	teq	r0, #0	; 0x0
        2793a0:	1a000005 	bne	2793bc <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x260>
        2793a4:	e1a0000d 	mov	r0, sp
        2793a8:	eb659b33 	bl	1be007c <$AddExceptionHandler>
        2793ac:	eb6096ed 	bl	1a9ef68 <$RealClock(void)>
        2793b0:	e5941008 	ldr	r1, [r4, #8]	; fField8
        2793b4:	e5a10024 	str	r0, [r1, #36]!	; fField36
        2793b8:	ea000006 	b	2793d8 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x27c>
        2793bc:	e59d0060 	ldr	r0, [sp, #96]
        2793c0:	e59f1100 	ldr	r1, [pc, #100]	; 2794c8 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x36c>
        2793c4:	e5911000 	ldr	r1, [r1]
        2793c8:	eb65a771 	bl	1be3194 <$Subexception>
        2793cc:	e3300000 	teq	r0, #0	; 0x0
        2793d0:	01a0000d 	moveq	r0, sp
        2793d4:	0b65a35e 	bleq	1be2154 <$NextHandler>
        2793d8:	e1a0000d 	mov	r0, sp
        2793dc:	eb659f35 	bl	1be10b8 <$ExitHandler>
        2793e0:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2793e4:	e28d0018 	add	r0, sp, #24	; 0x18
        2793e8:	e3a03000 	mov	r3, #0	; 0x0
        2793ec:	e3a02034 	mov	r2, #52	; 0x34
        2793f0:	e5941008 	ldr	r1, [r4, #8]	; fField8
        2793f4:	eb6250a3 	bl	1b0d688 <TXIPStorePackageWriter::$WriteChunk(char *, long, unsigned char)>
        2793f8:	e1b06000 	movs	r6, r0
        2793fc:	1a00002b 	bne	2794b0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x354>
        279400:	e5940008 	ldr	r0, [r4, #8]	; fField8
        279404:	e5900030 	ldr	r0, [r0, #48]
        279408:	e1a02280 	mov	r2, r0, lsl #5
        27940c:	e28d0018 	add	r0, sp, #24	; 0x18
        279410:	e3a03000 	mov	r3, #0	; 0x0
        279414:	e594100c 	ldr	r1, [r4, #12]	; fField12
        279418:	eb62509a 	bl	1b0d688 <TXIPStorePackageWriter::$WriteChunk(char *, long, unsigned char)>
        27941c:	e1b06000 	movs	r6, r0
        279420:	1a000022 	bne	2794b0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x354>
        279424:	e5940008 	ldr	r0, [r4, #8]	; fField8
        279428:	e2800028 	add	r0, r0, #40	; 0x28
        27942c:	e9b00006 	ldmib	r0!, {r1, r2}
        279430:	e3a00034 	mov	r0, #52	; 0x34
        279434:	e0800282 	add	r0, r0, r2, lsl #5
        279438:	e0412000 	sub	r2, r1, r0
        27943c:	e28d0018 	add	r0, sp, #24	; 0x18
        279440:	e3a03000 	mov	r3, #0	; 0x0
        279444:	e5941018 	ldr	r1, [r4, #24]	; fField24
        279448:	eb62508e 	bl	1b0d688 <TXIPStorePackageWriter::$WriteChunk(char *, long, unsigned char)>
        27944c:	e1b06000 	movs	r6, r0
        279450:	1a000016 	bne	2794b0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x354>
        279454:	e5940008 	ldr	r0, [r4, #8]	; fField8
        279458:	e590002c 	ldr	r0, [r0, #44]
        27945c:	e58d0000 	str	r0, [sp]
        279460:	e5941010 	ldr	r1, [r4, #16]	; fField16
        279464:	e3310000 	teq	r1, #0	; 0x0
        279468:	0a00001c 	beq	2794e0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x384>
        27946c:	e28d0018 	add	r0, sp, #24	; 0x18
        279470:	e3a03000 	mov	r3, #0	; 0x0
        279474:	e3a02014 	mov	r2, #20	; 0x14
        279478:	eb625082 	bl	1b0d688 <TXIPStorePackageWriter::$WriteChunk(char *, long, unsigned char)>
        27947c:	e1b06000 	movs	r6, r0
        279480:	1a00000a 	bne	2794b0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x354>
        279484:	e5941014 	ldr	r1, [r4, #20]	; fField20
        279488:	e3310000 	teq	r1, #0	; 0x0
        27948c:	0a00000e 	beq	2794cc <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x370>
        279490:	e5940010 	ldr	r0, [r4, #16]	; fField16
        279494:	e5900004 	ldr	r0, [r0, #4]
        279498:	e2402014 	sub	r2, r0, #20	; 0x14
        27949c:	e28d0018 	add	r0, sp, #24	; 0x18
        2794a0:	e3a03000 	mov	r3, #0	; 0x0
        2794a4:	eb625077 	bl	1b0d688 <TXIPStorePackageWriter::$WriteChunk(char *, long, unsigned char)>
        2794a8:	e1b06000 	movs	r6, r0
        2794ac:	0a000006 	beq	2794cc <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x370>
        2794b0:	e28d0018 	add	r0, sp, #24	; 0x18
        2794b4:	e3a01000 	mov	r1, #0	; 0x0
        2794b8:	e1a0e00f 	mov	lr, pc
        2794bc:	e59df018 	ldr	pc, [sp, #24]	; fField24
        2794c0:	e28dd05c 	add	sp, sp, #92	; 0x5c
        2794c4:	ea0000c6 	b	2797e4 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x688>
        2794c8:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        2794cc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2794d0:	e5900004 	ldr	r0, [r0, #4]
        2794d4:	e59d1000 	ldr	r1, [sp]
        2794d8:	e0800001 	add	r0, r0, r1
        2794dc:	e58d0000 	str	r0, [sp]
        2794e0:	e3a00000 	mov	r0, #0	; 0x0
        2794e4:	e52d0004 	str	r0, [sp, -#4]!
        2794e8:	e1a00004 	mov	r0, r4
        2794ec:	eb6579af 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        2794f0:	e3500000 	cmp	r0, #0	; 0x0
        2794f4:	9a000090 	bls	27973c <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x5e0>
        2794f8:	e24d0098 	sub	r0, sp, #152	; 0x98
        2794fc:	e58d0080 	str	r0, [sp, #128]
        279500:	e59f10c8 	ldr	r1, [pc, #c8]	; 2795d0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x474>
        279504:	e58d107c 	str	r1, [sp, #124]
        279508:	e24d0094 	sub	r0, sp, #148	; 0x94
        27950c:	e58d0078 	str	r0, [sp, #120]
        279510:	e24dd028 	sub	sp, sp, #40	; 0x28
        279514:	e1a0200d 	mov	r2, sp
        279518:	e1a00004 	mov	r0, r4
        27951c:	e59d1028 	ldr	r1, [sp, #40]
        279520:	eb656d38 	bl	1bd4a08 <TPackageIterator::$GetPartInfo(unsigned long, PartInfo *const)>
        279524:	e24dd004 	sub	sp, sp, #4	; 0x4
        279528:	e59d0004 	ldr	r0, [sp, #4]
        27952c:	e3300001 	teq	r0, #1	; 0x1
        279530:	e59d900c 	ldr	r9, [sp, #12]	; fField12
        279534:	05dd0026 	ldreqb	r0, [sp, #38]
        279538:	03300000 	teqeq	r0, #0	; 0x0
        27953c:	13a00000 	movne	r0, #0	; 0x0
        279540:	03a00001 	moveq	r0, #1	; 0x1
        279544:	e20030ff 	and	r3, r0, #255	; 0xff
        279548:	e3390000 	teq	r9, #0	; 0x0
        27954c:	e58d3000 	str	r3, [sp]
        279550:	0a000071 	beq	27971c <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x5c0>
        279554:	e24dd004 	sub	sp, sp, #4	; 0x4
        279558:	e1a00009 	mov	r0, r9
        27955c:	e3a01b01 	mov	r1, #1024	; 0x400
        279560:	e3590b01 	cmp	r9, #1024	; 0x400
        279564:	a1a00001 	movge	r0, r1
        279568:	e1a08000 	mov	r8, r0
        27956c:	e5d40020 	ldrb	r0, [r4, #32]	; fField32
        279570:	e3300000 	teq	r0, #0	; 0x0
        279574:	0a00003d 	beq	279670 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x514>
        279578:	e3a00000 	mov	r0, #0	; 0x0
        27957c:	e52d8004 	str	r8, [sp, -#4]!
        279580:	e52d006c 	str	r0, [sp, -#108]!
        279584:	e59d0120 	ldr	r0, [sp, #288]
        279588:	eb64e4f9 	bl	1bb2974 <$setjmp>
        27958c:	e3300000 	teq	r0, #0	; 0x0
        279590:	1a00000f 	bne	2795d4 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x478>
        279594:	e1a0000d 	mov	r0, sp
        279598:	eb659ab7 	bl	1be007c <$AddExceptionHandler>
        27959c:	e59d00a4 	ldr	r0, [sp, #164]
        2795a0:	e0800008 	add	r0, r0, r8
        2795a4:	e08aa008 	add	sl, sl, r8
        2795a8:	e58d00a4 	str	r0, [sp, #164]
        2795ac:	e28d3070 	add	r3, sp, #112	; 0x70
        2795b0:	e28d206c 	add	r2, sp, #108	; 0x6c
        2795b4:	e1a01007 	mov	r1, r7
        2795b8:	e594c024 	ldr	ip, [r4, #36]	; fField36
        2795bc:	e1a0000c 	mov	r0, ip
        2795c0:	e59cc000 	ldr	ip, [ip]
        2795c4:	e1a0e00f 	mov	lr, pc
        2795c8:	e28cf014 	add	pc, ip, #20	; 0x14
        2795cc:	ea000009 	b	2795f8 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x49c>
        2795d0:	00371324 	eoreqs	r1, r7, r4, lsr #6
        2795d4:	e59d0060 	ldr	r0, [sp, #96]
        2795d8:	e59d111c 	ldr	r1, [sp, #284]
        2795dc:	e5911000 	ldr	r1, [r1]
        2795e0:	eb65a6eb 	bl	1be3194 <$Subexception>
        2795e4:	e3300000 	teq	r0, #0	; 0x0
        2795e8:	159d6064 	ldrne	r6, [sp, #100]
        2795ec:	1a000001 	bne	2795f8 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x49c>
        2795f0:	e1a0000d 	mov	r0, sp
        2795f4:	eb65a2d6 	bl	1be2154 <$NextHandler>
        2795f8:	e1a0000d 	mov	r0, sp
        2795fc:	eb659ead 	bl	1be10b8 <$ExitHandler>
        279600:	e28dd06c 	add	sp, sp, #108	; 0x6c
        279604:	e3360000 	teq	r6, #0	; 0x0
        279608:	0a000005 	beq	279624 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x4c8>
        27960c:	e28d0050 	add	r0, sp, #80	; 0x50
        279610:	e3a01000 	mov	r1, #0	; 0x0
        279614:	e1a0e00f 	mov	lr, pc
        279618:	e59df050 	ldr	pc, [sp, #80]
        27961c:	e28dd094 	add	sp, sp, #148	; 0x94
        279620:	ea00006f 	b	2797e4 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x688>
        279624:	e51b302c 	ldr	r3, [fp, -#44]
        279628:	e3330000 	teq	r3, #0	; 0x0
        27962c:	0a00000d 	beq	279668 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x50c>
        279630:	e51b302c 	ldr	r3, [fp, -#44]
        279634:	e5b3000c 	ldr	r0, [r3, #12]!	; fField12
        279638:	e150000a 	cmp	r0, sl
        27963c:	8a000009 	bhi	279668 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x50c>
        279640:	e59d0038 	ldr	r0, [sp, #56]
        279644:	e58d0040 	str	r0, [sp, #64]
        279648:	e59d0034 	ldr	r0, [sp, #52]
        27964c:	e58d0048 	str	r0, [sp, #72]
        279650:	e28d103c 	add	r1, sp, #60	; 0x3c
        279654:	e51b202c 	ldr	r2, [fp, -#44]
        279658:	e1a00002 	mov	r0, r2
        27965c:	e1a0e00f 	mov	lr, pc
        279660:	e592f000 	ldr	pc, [r2]
        279664:	e3a0a000 	mov	sl, #0	; 0x0
        279668:	e28dd004 	add	sp, sp, #4	; 0x4
        27966c:	ea000019 	b	2796d8 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x57c>
        279670:	e3a00000 	mov	r0, #0	; 0x0
        279674:	e52d006c 	str	r0, [sp, -#108]!
        279678:	e59d0114 	ldr	r0, [sp, #276]
        27967c:	eb64e4bc 	bl	1bb2974 <$setjmp>
        279680:	e3300000 	teq	r0, #0	; 0x0
        279684:	1a000006 	bne	2796a4 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x548>
        279688:	e1a0000d 	mov	r0, sp
        27968c:	eb659a7a 	bl	1be007c <$AddExceptionHandler>
        279690:	e1a02008 	mov	r2, r8
        279694:	e1a01007 	mov	r1, r7
        279698:	e59d0090 	ldr	r0, [sp, #144]
        27969c:	eb65962c 	bl	1bdef54 <$BlockMove>
        2796a0:	ea000007 	b	2796c4 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x568>
        2796a4:	e59d0060 	ldr	r0, [sp, #96]
        2796a8:	e28f1f17 	add	r1, pc, #92	; 0x5c
        2796ac:	eb65a6b8 	bl	1be3194 <$Subexception>
        2796b0:	e3300000 	teq	r0, #0	; 0x0
        2796b4:	159d6064 	ldrne	r6, [sp, #100]
        2796b8:	1a000001 	bne	2796c4 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x568>
        2796bc:	e1a0000d 	mov	r0, sp
        2796c0:	eb65a2a3 	bl	1be2154 <$NextHandler>
        2796c4:	e1a0000d 	mov	r0, sp
        2796c8:	eb659e7a 	bl	1be10b8 <$ExitHandler>
        2796cc:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2796d0:	e3360000 	teq	r6, #0	; 0x0
        2796d4:	1a000006 	bne	2796f4 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x598>
        2796d8:	e1a02008 	mov	r2, r8
        2796dc:	e1a01007 	mov	r1, r7
        2796e0:	e59d3004 	ldr	r3, [sp, #4]
        2796e4:	e28d004c 	add	r0, sp, #76	; 0x4c
        2796e8:	eb624fe6 	bl	1b0d688 <TXIPStorePackageWriter::$WriteChunk(char *, long, unsigned char)>
        2796ec:	e1b06000 	movs	r6, r0
        2796f0:	0a000006 	beq	279710 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x5b4>
        2796f4:	e28d004c 	add	r0, sp, #76	; 0x4c
        2796f8:	e3a01000 	mov	r1, #0	; 0x0
        2796fc:	e1a0e00f 	mov	lr, pc
        279700:	e59df04c 	ldr	pc, [sp, #76]
        279704:	e28dd090 	add	sp, sp, #144	; 0x90
        279708:	ea000035 	b	2797e4 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x688>
        27970c:	00000000 	andeq	r0, r0, r0
        279710:	e0599008 	subs	r9, r9, r8
        279714:	e28dd004 	add	sp, sp, #4	; 0x4
        279718:	1affff8d 	bne	279554 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x3f8>
        27971c:	e5bd002c 	ldr	r0, [sp, #44]!
        279720:	e2800001 	add	r0, r0, #1	; 0x1
        279724:	e58d0000 	str	r0, [sp]
        279728:	e1a00004 	mov	r0, r4
        27972c:	eb65791f 	bl	1bd7bb0 <TPackageIterator::$NumberOfParts(void)>
        279730:	e59d1000 	ldr	r1, [sp]
        279734:	e1500001 	cmp	r0, r1
        279738:	8affff74 	bhi	279510 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x3b4>
        27973c:	e28d001c 	add	r0, sp, #28	; 0x1c
        279740:	eb62581a 	bl	1b0f7b0 <TXIPStorePackageWriter::$Flush(void)>
        279744:	e1b06000 	movs	r6, r0
        279748:	1a000020 	bne	2797d0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x674>
        27974c:	e59d306c 	ldr	r3, [sp, #108]
        279750:	e92d0008 	stmdb	sp!, {r3}
        279754:	e1a00005 	mov	r0, r5
        279758:	e3a02000 	mov	r2, #0	; 0x0
        27975c:	e59d1068 	ldr	r1, [sp, #104]
        279760:	e59d3074 	ldr	r3, [sp, #116]
        279764:	eb624365 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        279768:	e28dd004 	add	sp, sp, #4	; 0x4
        27976c:	e1b06000 	movs	r6, r0
        279770:	1a000016 	bne	2797d0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x674>
        279774:	e1a00004 	mov	r0, r4
        279778:	eb657917 	bl	1bd7bdc <TPackageIterator::$PackageSize(void)>
        27977c:	e51b2030 	ldr	r2, [fp, -#48]
        279780:	e5a20014 	str	r0, [r2, #20]!	; fField20
        279784:	e51b2030 	ldr	r2, [fp, -#48]
        279788:	e2822008 	add	r2, r2, #8	; 0x8
        27978c:	e1a00005 	mov	r0, r5
        279790:	e3a01008 	mov	r1, #8	; 0x8
        279794:	eb043504 	bl	386bac <TStore::NewWithinTransaction(long, unsigned long *)>
        279798:	e1b06000 	movs	r6, r0
        27979c:	1a00000b 	bne	2797d0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x674>
        2797a0:	e3a03008 	mov	r3, #8	; 0x8
        2797a4:	e92d0008 	stmdb	sp!, {r3}
        2797a8:	e51b2030 	ldr	r2, [fp, -#48]
        2797ac:	e28d305c 	add	r3, sp, #92	; 0x5c
        2797b0:	e1a00005 	mov	r0, r5
        2797b4:	e5b21008 	ldr	r1, [r2, #8]!	; fField8
        2797b8:	e3a02000 	mov	r2, #0	; 0x0
        2797bc:	eb62434f 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        2797c0:	e28dd004 	add	sp, sp, #4	; 0x4
        2797c4:	e1b06000 	movs	r6, r0
        2797c8:	028dd004 	addeq	sp, sp, #4	; 0x4
        2797cc:	0affff37 	beq	2794b0 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x354>
        2797d0:	e28d001c 	add	r0, sp, #28	; 0x1c
        2797d4:	e3a01000 	mov	r1, #0	; 0x0
        2797d8:	e1a0e00f 	mov	lr, pc
        2797dc:	e59df01c 	ldr	pc, [sp, #28]
        2797e0:	e28dd060 	add	sp, sp, #96	; 0x60
        2797e4:	e3370000 	teq	r7, #0	; 0x0
        2797e8:	11a00007 	movne	r0, r7
        2797ec:	1b654fbb 	blne	1bcd6e0 <$__dl(void *)>
        2797f0:	e3360000 	teq	r6, #0	; 0x0
        2797f4:	0a000019 	beq	279860 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x704>
        2797f8:	e51b2030 	ldr	r2, [fp, -#48]
        2797fc:	e5b21008 	ldr	r1, [r2, #8]!	; fField8
        279800:	e3310000 	teq	r1, #0	; 0x0
        279804:	11a00005 	movne	r0, r5
        279808:	1b0434ed 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        27980c:	e51b2030 	ldr	r2, [fp, -#48]
        279810:	e5921000 	ldr	r1, [r2]
        279814:	e3310000 	teq	r1, #0	; 0x0
        279818:	11a00005 	movne	r0, r5
        27981c:	1b0434e8 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        279820:	e59d1000 	ldr	r1, [sp]
        279824:	e3310000 	teq	r1, #0	; 0x0
        279828:	11a00005 	movne	r0, r5
        27982c:	1b0434e4 	blne	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        279830:	e3a04000 	mov	r4, #0	; 0x0
        279834:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        279838:	e3510000 	cmp	r1, #0	; 0x0
        27983c:	da000007 	ble	279860 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x704>
        279840:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        279844:	e7901104 	ldr	r1, [r0, r4, lsl #2]
        279848:	e1a00005 	mov	r0, r5
        27984c:	eb0434dc 	bl	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        279850:	e2844001 	add	r4, r4, #1	; 0x1
        279854:	e59d1014 	ldr	r1, [sp, #20]	; fField20
        279858:	e1540001 	cmp	r4, r1
        27985c:	bafffff7 	blt	279840 <TXIPPackageIterator::StoreXIP(TStore *, LargeObjectRoot *, TLOCallback *)+0x6e4>
        279860:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        279864:	eb654f9d 	bl	1bcd6e0 <$__dl(void *)>
        279868:	e1a00006 	mov	r0, r6
        27986c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

