#include "include/TKDomain.h"

/**
 * Symbol: TKDomain::InitWithDomainNumber(unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 000af040
 */
TKDomain::InitWithDomainNumber(unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
         af040:	e1a0c00d 	mov	ip, sp
         af044:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         af048:	e24cb004 	sub	fp, ip, #4	; 0x4
         af04c:	e1a04000 	mov	r4, r0
         af050:	e1a05001 	mov	r5, r1
         af054:	e1a01002 	mov	r1, r2
         af058:	e59b8004 	ldr	r8, [fp, #4]
         af05c:	e2800014 	add	r0, r0, #20	; 0x14
         af060:	e880000c 	stmia	r0, {r2, r3}
         af064:	e2400014 	sub	r0, r0, #20	; 0x14
         af068:	e0820003 	add	r0, r2, r3
         af06c:	e2402001 	sub	r2, r0, #1	; 0x1
         af070:	e3a060b1 	mov	r6, #177	; 0xb1
         af074:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
         af078:	e1510002 	cmp	r1, r2
         af07c:	8a000009 	bhi	af0a8 <TKDomain::InitWithDomainNumber(unsigned long, unsigned long, unsigned long, unsigned long)+0x68>
         af080:	e1b00601 	movs	r0, r1, lsl #12
         af084:	01a00603 	moveq	r0, r3, lsl #12
         af088:	01a00620 	moveq	r0, r0, lsr #12
         af08c:	03300000 	teqeq	r0, #0	; 0x0
         af090:	1a000004 	bne	af0a8 <TKDomain::InitWithDomainNumber(unsigned long, unsigned long, unsigned long, unsigned long)+0x68>
         af094:	e59f7014 	ldr	r7, [pc, #14]	; af0b0 <TKDomain::InitWithDomainNumber(unsigned long, unsigned long, unsigned long, unsigned long)+0x70>
         af098:	e5970000 	ldr	r0, [r7]
         af09c:	eb6922ba 	bl	1af7b8c <TMemArchManager::$DomainRangeIsFree(unsigned long, unsigned long)>
         af0a0:	e3300000 	teq	r0, #0	; 0x0
         af0a4:	1a000002 	bne	af0b4 <TKDomain::InitWithDomainNumber(unsigned long, unsigned long, unsigned long, unsigned long)+0x74>
         af0a8:	e1a00006 	mov	r0, r6
         af0ac:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         af0b0:	0c100d00 	ldceq	13, cr0, [r0]
         af0b4:	e1a02008 	mov	r2, r8
         af0b8:	e1a01004 	mov	r1, r4
         af0bc:	e5970000 	ldr	r0, [r7]
         af0c0:	eb690a0c 	bl	1af18f8 <TMemArchManager::$AddDomainWithDomainNumber(TKDomain *, long)>
         af0c4:	e1a06000 	mov	r6, r0
         af0c8:	e1a01005 	mov	r1, r5
         af0cc:	e1a00004 	mov	r0, r4
         af0d0:	eb695c8a 	bl	1b06300 <TKDomain::$SetFaultMonitor(unsigned long)>
         af0d4:	e1a00006 	mov	r0, r6
         af0d8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TKDomain::Init(unsigned long, unsigned long, unsigned long)
 * Address: 000af0dc
 */
TKDomain::Init(unsigned long, unsigned long, unsigned long) {
    /*
         af0dc:	e1a0c00d 	mov	ip, sp
         af0e0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         af0e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         af0e8:	e1a05000 	mov	r5, r0
         af0ec:	e1a07001 	mov	r7, r1
         af0f0:	e1a04002 	mov	r4, r2
         af0f4:	e1a06003 	mov	r6, r3
         af0f8:	e2800014 	add	r0, r0, #20	; 0x14
         af0fc:	e880000c 	stmia	r0, {r2, r3}
         af100:	e2400014 	sub	r0, r0, #20	; 0x14
         af104:	e0820003 	add	r0, r2, r3
         af108:	e2402001 	sub	r2, r0, #1	; 0x1
         af10c:	e3a080b1 	mov	r8, #177	; 0xb1
         af110:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
         af114:	e1540002 	cmp	r4, r2
         af118:	8a00000a 	bhi	af148 <TKDomain::Init(unsigned long, unsigned long, unsigned long)+0x6c>
         af11c:	e1b00604 	movs	r0, r4, lsl #12
         af120:	01a00606 	moveq	r0, r6, lsl #12
         af124:	01a00620 	moveq	r0, r0, lsr #12
         af128:	03300000 	teqeq	r0, #0	; 0x0
         af12c:	1a000005 	bne	af148 <TKDomain::Init(unsigned long, unsigned long, unsigned long)+0x6c>
         af130:	e1a01004 	mov	r1, r4
         af134:	e59f9014 	ldr	r9, [pc, #14]	; af150 <TKDomain::Init(unsigned long, unsigned long, unsigned long)+0x74>
         af138:	e5990000 	ldr	r0, [r9]
         af13c:	eb692292 	bl	1af7b8c <TMemArchManager::$DomainRangeIsFree(unsigned long, unsigned long)>
         af140:	e3300000 	teq	r0, #0	; 0x0
         af144:	1a000002 	bne	af154 <TKDomain::Init(unsigned long, unsigned long, unsigned long)+0x78>
         af148:	e1a00008 	mov	r0, r8
         af14c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         af150:	0c100d00 	ldceq	13, cr0, [r0]
         af154:	e1a01005 	mov	r1, r5
         af158:	e5990000 	ldr	r0, [r9]
         af15c:	eb6909e4 	bl	1af18f4 <TMemArchManager::$AddDomain(TKDomain *)>
         af160:	e1a08000 	mov	r8, r0
         af164:	e1a01006 	mov	r1, r6
         af168:	e1a00004 	mov	r0, r4
         af16c:	e595201c 	ldr	r2, [r5, #28]	; fField28
         af170:	eb693739 	bl	1afce5c <$InitDomainPrimaryTable__FUlN21>
         af174:	e1a01007 	mov	r1, r7
         af178:	e1a00005 	mov	r0, r5
         af17c:	eb695c5f 	bl	1b06300 <TKDomain::$SetFaultMonitor(unsigned long)>
         af180:	e1a00008 	mov	r0, r8
         af184:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TKDomain::SetFaultMonitor(unsigned long)
 * Address: 000af188
 */
TKDomain::SetFaultMonitor(unsigned long) {
    /*
         af188:	e1a0c00d 	mov	ip, sp
         af18c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         af190:	e24cb004 	sub	fp, ip, #4	; 0x4
         af194:	e5801010 	str	r1, [r0, #16]	; fField16
         af198:	e1a02001 	mov	r2, r1
         af19c:	e5901000 	ldr	r1, [r0]
         af1a0:	e590001c 	ldr	r0, [r0, #28]	; fField28
         af1a4:	eb6ca6ad 	bl	1bd8c60 <$RegisterFaultMonitor__FUlN21>
         af1a8:	e3a00000 	mov	r0, #0	; 0x0
         af1ac:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TKDomain::Intersects(unsigned long, unsigned long)
 * Address: 000af1b0
 */
TKDomain::Intersects(unsigned long, unsigned long) {
    /*
         af1b0:	e5903014 	ldr	r3, [r0, #20]	; fField20
         af1b4:	e1530002 	cmp	r3, r2
         af1b8:	2a000004 	bcs	af1d0 <TKDomain::Intersects(unsigned long, unsigned long)+0x20>
         af1bc:	e5900018 	ldr	r0, [r0, #24]	; fField24
         af1c0:	e0830000 	add	r0, r3, r0
         af1c4:	e1500001 	cmp	r0, r1
         af1c8:	83a00001 	movhi	r0, #1	; 0x1
         af1cc:	81a0f00e 	movhi	pc, lr
         af1d0:	e3a00000 	mov	r0, #0	; 0x0
         af1d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TKDomain::__ct(void)
 * Address: 000af51c
 */
TKDomain::TKDomain(void) {
    /*
         af51c:	e1a0c00d 	mov	ip, sp
         af520:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         af524:	e24cb004 	sub	fp, ip, #4	; 0x4
         af528:	e3300000 	teq	r0, #0	; 0x0
         af52c:	1a000003 	bne	af540 <TKDomain::__ct(void)+0x24>
         af530:	e3a00024 	mov	r0, #36	; 0x24
         af534:	eb6c7c7f 	bl	1bce738 <$__nw(unsigned int)>
         af538:	e3300000 	teq	r0, #0	; 0x0
         af53c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         af540:	e3a01000 	mov	r1, #0	; 0x0
         af544:	e5801014 	str	r1, [r0, #20]	; fField20
         af548:	e5801018 	str	r1, [r0, #24]	; fField24
         af54c:	e3e02000 	mvn	r2, #0	; 0x0
         af550:	e5801010 	str	r1, [r0, #16]	; fField16
         af554:	e580201c 	str	r2, [r0, #28]	; fField28
         af558:	e5801020 	str	r1, [r0, #32]	; fField32
         af55c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TKDomain::__dt(void)
 * Address: 000af560
 */
TKDomain::~TKDomain(void) {
    /*
         af560:	e1a0c00d 	mov	ip, sp
         af564:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         af568:	e24cb004 	sub	fp, ip, #4	; 0x4
         af56c:	e1a04000 	mov	r4, r0
         af570:	e1a05001 	mov	r5, r1
         af574:	e590001c 	ldr	r0, [r0, #28]	; fField28
         af578:	eb691d79 	bl	1af6b64 <$DeregisterFaultMonitorByDomainNumber(unsigned long)>
         af57c:	e2841014 	add	r1, r4, #20	; 0x14
         af580:	e8910003 	ldmia	r1, {r0, r1}
         af584:	eb69153a 	bl	1af4a74 <$ClearDomainPrimaryTable__FUlT1>
         af588:	e1a01004 	mov	r1, r4
         af58c:	e59f0018 	ldr	r0, [pc, #18]	; af5ac <TKDomain::__dt(void)+0x4c>
         af590:	e5900000 	ldr	r0, [r0]
         af594:	eb694f18 	bl	1b031fc <TMemArchManager::$RemoveDomain(TKDomain *)>
         af598:	e3150001 	tst	r5, #1	; 0x1
         af59c:	11a00004 	movne	r0, r4
         af5a0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         af5a4:	1a6c784d 	bne	1bcd6e0 <$__dl(void *)>
         af5a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         af5ac:	0c100d00 	ldceq	13, cr0, [r0]
    */
}

