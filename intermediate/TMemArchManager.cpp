#include "include/TMemArchManager.h"

/**
 * Symbol: TMemArchManager::__ct(void)
 * Address: 000af1d8
 */
TMemArchManager::TMemArchManager(void) {
    /*
         af1d8:	e1a0c00d 	mov	ip, sp
         af1dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         af1e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         af1e4:	e1b04000 	movs	r4, r0
         af1e8:	1a000003 	bne	af1fc <TMemArchManager::__ct(void)+0x24>
         af1ec:	e3a0000c 	mov	r0, #12	; 0xc
         af1f0:	eb6c7d50 	bl	1bce738 <$__nw(unsigned int)>
         af1f4:	e1b04000 	movs	r4, r0
         af1f8:	0a000004 	beq	af210 <TMemArchManager::__ct(void)+0x38>
         af1fc:	e3a00000 	mov	r0, #0	; 0x0
         af200:	e5840000 	str	r0, [r4]
         af204:	e5840004 	str	r0, [r4, #4]	; fField4
         af208:	eb691a35 	bl	1af5ae4 <$DefaultDCR(void)>
         af20c:	e5840008 	str	r0, [r4, #8]
         af210:	e1a00004 	mov	r0, r4
         af214:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMemArchManager::AddEnvironment(TEnvironment *)
 * Address: 000af218
 */
TMemArchManager::AddEnvironment(TEnvironment *) {
    /*
         af218:	e1a0c00d 	mov	ip, sp
         af21c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         af220:	e24cb004 	sub	fp, ip, #4	; 0x4
         af224:	e1a05000 	mov	r5, r0
         af228:	e1a04001 	mov	r4, r1
         af22c:	eb691a2c 	bl	1af5ae4 <$DefaultDCR(void)>
         af230:	e5840010 	str	r0, [r4, #16]
         af234:	e5950000 	ldr	r0, [r5]
         af238:	e5840028 	str	r0, [r4, #40]
         af23c:	e5854000 	str	r4, [r5]
         af240:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMemArchManager::RemoveEnvironment(TEnvironment *)
 * Address: 000af280
 */
TMemArchManager::RemoveEnvironment(TEnvironment *) {
    /*
         af280:	e3a03000 	mov	r3, #0	; 0x0
         af284:	e5902000 	ldr	r2, [r0]
         af288:	e3320000 	teq	r2, #0	; 0x0
         af28c:	01a0f00e 	moveq	pc, lr
         af290:	e92d4010 	stmdb	sp!, {r4, lr}
         af294:	e3a0e000 	mov	lr, #0	; 0x0
         af298:	e3a0c001 	mov	ip, #1	; 0x1
         af29c:	e1320001 	teq	r2, r1
         af2a0:	1a000005 	bne	af2bc <TMemArchManager::RemoveEnvironment(TEnvironment *)+0x3c>
         af2a4:	e3330000 	teq	r3, #0	; 0x0
         af2a8:	e5924028 	ldr	r4, [r2, #40]
         af2ac:	15834028 	strne	r4, [r3, #40]
         af2b0:	05804000 	streq	r4, [r0]
         af2b4:	e5c2c024 	strb	ip, [r2, #36]
         af2b8:	e582e028 	str	lr, [r2, #40]
         af2bc:	e3320000 	teq	r2, #0	; 0x0
         af2c0:	1afffff5 	bne	af29c <TMemArchManager::RemoveEnvironment(TEnvironment *)+0x1c>
         af2c4:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TMemArchManager::AddDomainWithDomainNumber(TKDomain *, long)
 * Address: 000af2c8
 */
TMemArchManager::AddDomainWithDomainNumber(TKDomain *, long) {
    /*
         af2c8:	e1a0c00d 	mov	ip, sp
         af2cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         af2d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         af2d4:	e1a05000 	mov	r5, r0
         af2d8:	e1a04001 	mov	r4, r1
         af2dc:	e1a01002 	mov	r1, r2
         af2e0:	e2800008 	add	r0, r0, #8	; 0x8
         af2e4:	eb692e92 	bl	1afad34 <$GetSpecificDomainFromDCR(unsigned long &, long)>
         af2e8:	e584001c 	str	r0, [r4, #28]
         af2ec:	e3500000 	cmp	r0, #0	; 0x0
         af2f0:	b3a000ea 	movlt	r0, #234	; 0xea
         af2f4:	b2400b0a 	sublt	r0, r0, #10240	; 0x2800
         af2f8:	b91ba830 	ldmltdb	fp, {r4, r5, fp, sp, pc}
         af2fc:	e5950004 	ldr	r0, [r5, #4]	; fField4
         af300:	e5840020 	str	r0, [r4, #32]
         af304:	e3a00000 	mov	r0, #0	; 0x0
         af308:	e5a54004 	str	r4, [r5, #4]!	; fField4
         af30c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMemArchManager::AddDomain(TKDomain *)
 * Address: 000af310
 */
TMemArchManager::AddDomain(TKDomain *) {
    /*
         af310:	e1a0c00d 	mov	ip, sp
         af314:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         af318:	e24cb004 	sub	fp, ip, #4	; 0x4
         af31c:	e1a05000 	mov	r5, r0
         af320:	e1a04001 	mov	r4, r1
         af324:	e2800008 	add	r0, r0, #8	; 0x8
         af328:	eb69433d 	bl	1b00024 <$NextAvailDomainInDCR(unsigned long &)>
         af32c:	e584001c 	str	r0, [r4, #28]
         af330:	e3500000 	cmp	r0, #0	; 0x0
         af334:	b3a00e8b 	movlt	r0, #2224	; 0x8b0
         af338:	b2400a03 	sublt	r0, r0, #12288	; 0x3000
         af33c:	b91ba830 	ldmltdb	fp, {r4, r5, fp, sp, pc}
         af340:	e5950004 	ldr	r0, [r5, #4]	; fField4
         af344:	e5840020 	str	r0, [r4, #32]
         af348:	e3a00000 	mov	r0, #0	; 0x0
         af34c:	e5a54004 	str	r4, [r5, #4]!	; fField4
         af350:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMemArchManager::RemoveDomain(TKDomain *)
 * Address: 000af354
 */
TMemArchManager::RemoveDomain(TKDomain *) {
    /*
         af354:	e3a03000 	mov	r3, #0	; 0x0
         af358:	e5902004 	ldr	r2, [r0, #4]	; fField4
         af35c:	e3320000 	teq	r2, #0	; 0x0
         af360:	01a0f00e 	moveq	pc, lr
         af364:	e92d4010 	stmdb	sp!, {r4, lr}
         af368:	e3a0e000 	mov	lr, #0	; 0x0
         af36c:	e3e0c000 	mvn	ip, #0	; 0x0
         af370:	e1320001 	teq	r2, r1
         af374:	1a000007 	bne	af398 <TMemArchManager::RemoveDomain(TKDomain *)+0x44>
         af378:	e3330000 	teq	r3, #0	; 0x0
         af37c:	15924020 	ldrne	r4, [r2, #32]
         af380:	15a34020 	strne	r4, [r3, #32]!
         af384:	05923020 	ldreq	r3, [r2, #32]
         af388:	05803004 	streq	r3, [r0, #4]	; fField4
         af38c:	e282201c 	add	r2, r2, #28	; 0x1c
         af390:	e8825000 	stmia	r2, {ip, lr}
         af394:	e242201c 	sub	r2, r2, #28	; 0x1c
         af398:	e1a03002 	mov	r3, r2
         af39c:	e5922020 	ldr	r2, [r2, #32]
         af3a0:	e3320000 	teq	r2, #0	; 0x0
         af3a4:	1afffff1 	bne	af370 <TMemArchManager::RemoveDomain(TKDomain *)+0x1c>
         af3a8:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TMemArchManager::DomainRangeIsFree(unsigned long, unsigned long)
 * Address: 000af3ac
 */
TMemArchManager::DomainRangeIsFree(unsigned long, unsigned long) {
    /*
         af3ac:	e1a0c00d 	mov	ip, sp
         af3b0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         af3b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         af3b8:	e1a05001 	mov	r5, r1
         af3bc:	e1a04002 	mov	r4, r2
         af3c0:	e5b06004 	ldr	r6, [r0, #4]!	; fField4
         af3c4:	e3360000 	teq	r6, #0	; 0x0
         af3c8:	0a000009 	beq	af3f4 <TMemArchManager::DomainRangeIsFree(unsigned long, unsigned long)+0x48>
         af3cc:	e1a02004 	mov	r2, r4
         af3d0:	e1a01005 	mov	r1, r5
         af3d4:	e1a00006 	mov	r0, r6
         af3d8:	eb693abd 	bl	1afded4 <TKDomain::$Intersects(unsigned long, unsigned long)>
         af3dc:	e3300000 	teq	r0, #0	; 0x0
         af3e0:	13a00000 	movne	r0, #0	; 0x0
         af3e4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         af3e8:	e5966020 	ldr	r6, [r6, #32]
         af3ec:	e3360000 	teq	r6, #0	; 0x0
         af3f0:	1afffff5 	bne	af3cc <TMemArchManager::DomainRangeIsFree(unsigned long, unsigned long)+0x20>
         af3f4:	e3a00001 	mov	r0, #1	; 0x1
         af3f8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

