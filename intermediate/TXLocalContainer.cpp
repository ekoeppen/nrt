#include "include/TXLocalContainer.h"

/**
 * Symbol: TXLocalContainer::__ct(TXStream *)
 * Address: 0023522c
 */
TXLocalContainer::TXLocalContainer(TXStream *) {
    /*
        23522c:	e1a0c00d 	mov	ip, sp
        235230:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        235234:	e24cb004 	sub	fp, ip, #4	; 0x4
        235238:	e1b04000 	movs	r4, r0
        23523c:	e1a05001 	mov	r5, r1
        235240:	1a000003 	bne	235254 <TXLocalContainer::__ct(TXStream *)+0x28>
        235244:	e3a0003c 	mov	r0, #60	; 0x3c
        235248:	eb66653a 	bl	1bce738 <$__nw(unsigned int)>
        23524c:	e1b04000 	movs	r4, r0
        235250:	0a000004 	beq	235268 <TXLocalContainer::__ct(TXStream *)+0x3c>
        235254:	e1a01005 	mov	r1, r5
        235258:	e1a00004 	mov	r0, r4
        23525c:	eb6554b4 	bl	1b8a534 <TXStdContainer::$__ct(TXStream *)>
        235260:	e59f0008 	ldr	r0, [pc, #8]	; 235270 <TXLocalContainer::__ct(TXStream *)+0x44>
        235264:	e5840000 	str	r0, [r4]
        235268:	e1a00004 	mov	r0, r4
        23526c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        235270:	0001e658 	andeq	lr, r1, r8, asr r6
    */
}

/**
 * Symbol: TXLocalContainer::WriteObjectData(TXAttrObject *, long, unsigned char *)
 * Address: 00235280
 */
TXLocalContainer::WriteObjectData(TXAttrObject *, long, unsigned char *) {
    /*
        235280:	e1a0c00d 	mov	ip, sp
        235284:	e92dd80f 	stmdb	sp!, {r0, r1, r2, r3, fp, ip, lr, pc}
        235288:	e24cb004 	sub	fp, ip, #4	; 0x4
        23528c:	e24dd008 	sub	sp, sp, #8	; 0x8
        235290:	e51b001c 	ldr	r0, [fp, -#28]
        235294:	e5900004 	ldr	r0, [r0, #4]	; fField4
        235298:	e58d0000 	str	r0, [sp]
        23529c:	e51b0014 	ldr	r0, [fp, -#20]
        2352a0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2352a4:	e28d1004 	add	r1, sp, #4	; 0x4
        2352a8:	e3a02004 	mov	r2, #4	; 0x4
        2352ac:	e59d0000 	ldr	r0, [sp]
        2352b0:	eb65928c 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        2352b4:	e28dd008 	add	sp, sp, #8	; 0x8
        2352b8:	e3300000 	teq	r0, #0	; 0x0
        2352bc:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        2352c0:	e51b0010 	ldr	r0, [fp, -#16]
        2352c4:	e5d00000 	ldrb	r0, [r0]
        2352c8:	e3300000 	teq	r0, #0	; 0x0
        2352cc:	0a000008 	beq	2352f4 <TXLocalContainer::WriteObjectData(TXAttrObject *, long, unsigned char *)+0x74>
        2352d0:	e51b0018 	ldr	r0, [fp, -#24]
        2352d4:	e5901000 	ldr	r1, [r0]
        2352d8:	e1a0e00f 	mov	lr, pc
        2352dc:	e281f010 	add	pc, r1, #16	; 0x10
        2352e0:	e50b0018 	str	r0, [fp, -#24]
        2352e4:	e3300000 	teq	r0, #0	; 0x0
        2352e8:	03a000e9 	moveq	r0, #233	; 0xe9
        2352ec:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        2352f0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2352f4:	e51b001c 	ldr	r0, [fp, -#28]
        2352f8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2352fc:	e24b1018 	sub	r1, fp, #24	; 0x18
        235300:	e3a02004 	mov	r2, #4	; 0x4
        235304:	eb659277 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        235308:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TXLocalContainer::EndWrite(unsigned char, TXContainerImportInfo *)
 * Address: 0023530c
 */
TXLocalContainer::EndWrite(unsigned char, TXContainerImportInfo *) {
    /*
        23530c:	e1a0c00d 	mov	ip, sp
        235310:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        235314:	e24cb004 	sub	fp, ip, #4	; 0x4
        235318:	e1a04000 	mov	r4, r0
        23531c:	e1a05002 	mov	r5, r2
        235320:	e21160ff 	ands	r6, r1, #255	; 0xff
        235324:	0a000003 	beq	235338 <TXLocalContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0x2c>
        235328:	e1a00004 	mov	r0, r4
        23532c:	e5941000 	ldr	r1, [r4]
        235330:	e1a0e00f 	mov	lr, pc
        235334:	e281f03c 	add	pc, r1, #60	; 0x3c
        235338:	e1a02005 	mov	r2, r5
        23533c:	e1a01006 	mov	r1, r6
        235340:	e1a00004 	mov	r0, r4
        235344:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        235348:	ea65547c 	b	1b8a540 <TXStdContainer::$EndWrite(unsigned char, TXContainerImportInfo *)>
    */
}

/**
 * Symbol: TXLocalContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)
 * Address: 0023534c
 */
TXLocalContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *) {
    /*
        23534c:	e1a0c00d 	mov	ip, sp
        235350:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        235354:	e24cb004 	sub	fp, ip, #4	; 0x4
        235358:	e1a05000 	mov	r5, r0
        23535c:	e1a04002 	mov	r4, r2
        235360:	e1a01003 	mov	r1, r3
        235364:	e3a06000 	mov	r6, #0	; 0x0
        235368:	e59b7004 	ldr	r7, [fp, #4]	; fField4
        23536c:	e5826000 	str	r6, [r2]
        235370:	e5836000 	str	r6, [r3]
        235374:	e5900004 	ldr	r0, [r0, #4]	; fField4
        235378:	e3a02004 	mov	r2, #4	; 0x4
        23537c:	eb65925a 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        235380:	e3300000 	teq	r0, #0	; 0x0
        235384:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        235388:	e24dd004 	sub	sp, sp, #4	; 0x4
        23538c:	e1a0100d 	mov	r1, sp
        235390:	e3a02004 	mov	r2, #4	; 0x4
        235394:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
        235398:	eb659253 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        23539c:	e3300000 	teq	r0, #0	; 0x0
        2353a0:	1a000003 	bne	2353b4 <TXLocalContainer::ReadObject(long, TXAttrObject **, long *, unsigned char *)+0x68>
        2353a4:	e59d0000 	ldr	r0, [sp]
        2353a8:	e5840000 	str	r0, [r4]
        2353ac:	e1a00006 	mov	r0, r6
        2353b0:	e5c76000 	strb	r6, [r7]
        2353b4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TXLocalContainer::FreeObjects(unsigned long)
 * Address: 002353b8
 */
TXLocalContainer::FreeObjects(unsigned long) {
    /*
        2353b8:	e1a0c00d 	mov	ip, sp
        2353bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2353c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2353c4:	e1a04000 	mov	r4, r0
        2353c8:	eb65544d 	bl	1b8a504 <TXContainer::$ConvertAndFocusOnValue(unsigned long)>
        2353cc:	e3300000 	teq	r0, #0	; 0x0
        2353d0:	13a00000 	movne	r0, #0	; 0x0
        2353d4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        2353d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2353dc:	e1a0100d 	mov	r1, sp
        2353e0:	e1a00004 	mov	r0, r4
        2353e4:	e5942000 	ldr	r2, [r4]
        2353e8:	e1a0e00f 	mov	lr, pc
        2353ec:	e282f01c 	add	pc, r2, #28	; 0x1c
        2353f0:	e3300000 	teq	r0, #0	; 0x0
        2353f4:	1a000019 	bne	235460 <TXLocalContainer::FreeObjects(unsigned long)+0xa8>
        2353f8:	e3a05000 	mov	r5, #0	; 0x0
        2353fc:	e59d0000 	ldr	r0, [sp]
        235400:	e3500000 	cmp	r0, #0	; 0x0
        235404:	da000015 	ble	235460 <TXLocalContainer::FreeObjects(unsigned long)+0xa8>
        235408:	e24dd00c 	sub	sp, sp, #12	; 0xc
        23540c:	e1a0300d 	mov	r3, sp
        235410:	e92d0008 	stmdb	sp!, {r3}
        235414:	e28d3008 	add	r3, sp, #8	; 0x8
        235418:	e28d200c 	add	r2, sp, #12	; 0xc
        23541c:	e1a01005 	mov	r1, r5
        235420:	e1a00004 	mov	r0, r4
        235424:	e594c000 	ldr	ip, [r4]
        235428:	e1a0e00f 	mov	lr, pc
        23542c:	e28cf02c 	add	pc, ip, #44	; 0x2c
        235430:	e28dd004 	add	sp, sp, #4	; 0x4
        235434:	e3300000 	teq	r0, #0	; 0x0
        235438:	128dd00c 	addne	sp, sp, #12	; 0xc
        23543c:	1a000007 	bne	235460 <TXLocalContainer::FreeObjects(unsigned long)+0xa8>
        235440:	e59d0008 	ldr	r0, [sp, #8]
        235444:	e5901000 	ldr	r1, [r0]
        235448:	e1a0e00f 	mov	lr, pc
        23544c:	e281f004 	add	pc, r1, #4	; 0x4
        235450:	e2855001 	add	r5, r5, #1	; 0x1
        235454:	e5bd000c 	ldr	r0, [sp, #12]!
        235458:	e1550000 	cmp	r5, r0
        23545c:	baffffe9 	blt	235408 <TXLocalContainer::FreeObjects(unsigned long)+0x50>
        235460:	e3a00001 	mov	r0, #1	; 0x1
        235464:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXLocalContainer::FreeObjects(void)
 * Address: 00235468
 */
TXLocalContainer::FreeObjects(void) {
    /*
        235468:	e1a0c00d 	mov	ip, sp
        23546c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        235470:	e24cb004 	sub	fp, ip, #4	; 0x4
        235474:	e1a04000 	mov	r4, r0
        235478:	e59f105c 	ldr	r1, [pc, #5c]	; 2354dc <TXLocalContainer::FreeObjects(void)+0x74>
        23547c:	eb65543a 	bl	1b8a56c <TXLocalContainer::$FreeObjects(unsigned long)>
        235480:	e3300000 	teq	r0, #0	; 0x0
        235484:	1a000010 	bne	2354cc <TXLocalContainer::FreeObjects(void)+0x64>
        235488:	e59f6050 	ldr	r6, [pc, #50]	; 2354e0 <TXLocalContainer::FreeObjects(void)+0x78>
        23548c:	e5960000 	ldr	r0, [r6]
        235490:	e5900004 	ldr	r0, [r0, #4]	; fField4
        235494:	e2505001 	subs	r5, r0, #1	; 0x1
        235498:	4a00000b 	bmi	2354cc <TXLocalContainer::FreeObjects(void)+0x64>
        23549c:	e1a01005 	mov	r1, r5
        2354a0:	e5960000 	ldr	r0, [r6]
        2354a4:	eb655840 	bl	1b8b5ac <TXRegisteredObjects::$GetIndObject( const(int))>
        2354a8:	e5901000 	ldr	r1, [r0]
        2354ac:	e1a0e00f 	mov	lr, pc
        2354b0:	e281f03c 	add	pc, r1, #60	; 0x3c
        2354b4:	e3300000 	teq	r0, #0	; 0x0
        2354b8:	11a01000 	movne	r1, r0
        2354bc:	11a00004 	movne	r0, r4
        2354c0:	1b655429 	blne	1b8a56c <TXLocalContainer::$FreeObjects(unsigned long)>
        2354c4:	e2555001 	subs	r5, r5, #1	; 0x1
        2354c8:	5afffff3 	bpl	23549c <TXLocalContainer::FreeObjects(void)+0x34>
        2354cc:	e1a00004 	mov	r0, r4
        2354d0:	e59f100c 	ldr	r1, [pc, #c]	; 2354e4 <TXLocalContainer::FreeObjects(void)+0x7c>
        2354d4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2354d8:	ea655423 	b	1b8a56c <TXLocalContainer::$FreeObjects(unsigned long)>
        2354dc:	7478726e 	ldrvcbt	r7, [r8], -#622
        2354e0:	0c104d80 	ldceq	13, cr4, [r0], -#512
        2354e4:	7478726c 	ldrvcbt	r7, [r8], -#620
    */
}

