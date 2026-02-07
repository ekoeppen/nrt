#include "include/TExtPageTrackerMgr.h"

/**
 * Symbol: TExtPageTrackerMgr::DisposeTracker(unsigned long)
 * Address: 0025dc98
 */
TExtPageTrackerMgr::DisposeTracker(unsigned long) {
    /*
        25dc98:	e1a0c00d 	mov	ip, sp
        25dc9c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        25dca0:	e24cb004 	sub	fp, ip, #4	; 0x4
        25dca4:	e1a04001 	mov	r4, r1
        25dca8:	e24dd004 	sub	sp, sp, #4	; 0x4
        25dcac:	e2800004 	add	r0, r0, #4	; 0x4
        25dcb0:	e1a06000 	mov	r6, r0
        25dcb4:	eb65e7cd 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        25dcb8:	e1b05000 	movs	r5, r0
        25dcbc:	0a000012 	beq	25dd0c <TExtPageTrackerMgr::DisposeTracker(unsigned long)+0x74>
        25dcc0:	e1a00006 	mov	r0, r6
        25dcc4:	e1a01005 	mov	r1, r5
        25dcc8:	eb65d748 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        25dccc:	e1a07000 	mov	r7, r0
        25dcd0:	e1a0200d 	mov	r2, sp
        25dcd4:	e1a01004 	mov	r1, r4
        25dcd8:	e1a00005 	mov	r0, r5
        25dcdc:	eb629952 	bl	1b0422c <TExtPageTracker::$RemoveReferences(unsigned long, unsigned char *)>
        25dce0:	e3300000 	teq	r0, #0	; 0x0
        25dce4:	0a000006 	beq	25dd04 <TExtPageTrackerMgr::DisposeTracker(unsigned long)+0x6c>
        25dce8:	e1a00006 	mov	r0, r6
        25dcec:	e1a01005 	mov	r1, r5
        25dcf0:	eb65effa 	bl	1bd9ce0 <TDoubleQContainer::$RemoveFromQueue(void *)>
        25dcf4:	e1a00005 	mov	r0, r5
        25dcf8:	eb65d316 	bl	1bd2958 <$free>
        25dcfc:	e3a00000 	mov	r0, #0	; 0x0
        25dd00:	ea000003 	b	25dd14 <TExtPageTrackerMgr::DisposeTracker(unsigned long)+0x7c>
        25dd04:	e1b05007 	movs	r5, r7
        25dd08:	1affffec 	bne	25dcc0 <TExtPageTrackerMgr::DisposeTracker(unsigned long)+0x28>
        25dd0c:	e3a000e1 	mov	r0, #225	; 0xe1
        25dd10:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        25dd14:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TExtPageTrackerMgr::Put(TLittlePhys *)
 * Address: 0025dd18
 */
TExtPageTrackerMgr::Put(TLittlePhys *) {
    /*
        25dd18:	e1a0c00d 	mov	ip, sp
        25dd1c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25dd20:	e24cb004 	sub	fp, ip, #4	; 0x4
        25dd24:	e1a04001 	mov	r4, r1
        25dd28:	e2800004 	add	r0, r0, #4	; 0x4
        25dd2c:	e1a06000 	mov	r6, r0
        25dd30:	eb65e7ae 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        25dd34:	e1b05000 	movs	r5, r0
        25dd38:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        25dd3c:	e1a01004 	mov	r1, r4
        25dd40:	e1a00005 	mov	r0, r5
        25dd44:	eb6290ee 	bl	1b02104 <TExtPageTracker::$Put(TLittlePhys *)>
        25dd48:	e3300000 	teq	r0, #0	; 0x0
        25dd4c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        25dd50:	e1a00006 	mov	r0, r6
        25dd54:	e1a01005 	mov	r1, r5
        25dd58:	eb65d724 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        25dd5c:	e1b05000 	movs	r5, r0
        25dd60:	1afffff5 	bne	25dd3c <TExtPageTrackerMgr::Put(TLittlePhys *)+0x24>
        25dd64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TExtPageTrackerMgr::Take(void)
 * Address: 0025dd68
 */
TExtPageTrackerMgr::Take(void) {
    /*
        25dd68:	e1a0c00d 	mov	ip, sp
        25dd6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25dd70:	e24cb004 	sub	fp, ip, #4	; 0x4
        25dd74:	e2800004 	add	r0, r0, #4	; 0x4
        25dd78:	e1a05000 	mov	r5, r0
        25dd7c:	eb65e79b 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        25dd80:	e1b04000 	movs	r4, r0
        25dd84:	0a000008 	beq	25ddac <TExtPageTrackerMgr::Take(void)+0x44>
        25dd88:	e1a00004 	mov	r0, r4
        25dd8c:	eb62a9a3 	bl	1b08420 <TExtPageTracker::$Take(void)>
        25dd90:	e3300000 	teq	r0, #0	; 0x0
        25dd94:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        25dd98:	e1a00005 	mov	r0, r5
        25dd9c:	e1a01004 	mov	r1, r4
        25dda0:	eb65d712 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        25dda4:	e1b04000 	movs	r4, r0
        25dda8:	1afffff6 	bne	25dd88 <TExtPageTrackerMgr::Take(void)+0x20>
        25ddac:	e3a00000 	mov	r0, #0	; 0x0
        25ddb0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TExtPageTrackerMgr::MakeNewTracker(unsigned long, unsigned long, unsigned long)
 * Address: 0025e33c
 */
TExtPageTrackerMgr::MakeNewTracker(unsigned long, unsigned long, unsigned long) {
    /*
        25e33c:	e1a0c00d 	mov	ip, sp
        25e340:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25e344:	e24cb004 	sub	fp, ip, #4	; 0x4
        25e348:	e1a04000 	mov	r4, r0
        25e34c:	e24dd004 	sub	sp, sp, #4	; 0x4
        25e350:	e1a0000d 	mov	r0, sp
        25e354:	eb627aa9 	bl	1afce00 <$Init__15TExtPageTrackerSFPP15TExtPageTrackerUlN22>
        25e358:	e1b05000 	movs	r5, r0
        25e35c:	02840004 	addeq	r0, r4, #4	; 0x4
        25e360:	059d1000 	ldreq	r1, [sp]
        25e364:	0b65c0fe 	bleq	1bce764 <TDoubleQContainer::$Add(void *)>
        25e368:	e1a00005 	mov	r0, r5
        25e36c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TExtPageTrackerMgr::UnHookTracker(unsigned long)
 * Address: 0025e370
 */
TExtPageTrackerMgr::UnHookTracker(unsigned long) {
    /*
        25e370:	e1a0c00d 	mov	ip, sp
        25e374:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        25e378:	e24cb004 	sub	fp, ip, #4	; 0x4
        25e37c:	e1a04000 	mov	r4, r0
        25e380:	e1a05001 	mov	r5, r1
        25e384:	e24dd004 	sub	sp, sp, #4	; 0x4
        25e388:	e2800004 	add	r0, r0, #4	; 0x4
        25e38c:	e1a07000 	mov	r7, r0
        25e390:	eb65e616 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        25e394:	e1b06000 	movs	r6, r0
        25e398:	0a000014 	beq	25e3f0 <TExtPageTrackerMgr::UnHookTracker(unsigned long)+0x80>
        25e39c:	e1a0200d 	mov	r2, sp
        25e3a0:	e1a01005 	mov	r1, r5
        25e3a4:	e1a00006 	mov	r0, r6
        25e3a8:	eb62979f 	bl	1b0422c <TExtPageTracker::$RemoveReferences(unsigned long, unsigned char *)>
        25e3ac:	e3300000 	teq	r0, #0	; 0x0
        25e3b0:	0a000009 	beq	25e3dc <TExtPageTrackerMgr::UnHookTracker(unsigned long)+0x6c>
        25e3b4:	e5dd0000 	ldrb	r0, [sp]
        25e3b8:	e3300000 	teq	r0, #0	; 0x0
        25e3bc:	0a000003 	beq	25e3d0 <TExtPageTrackerMgr::UnHookTracker(unsigned long)+0x60>
        25e3c0:	e3a00001 	mov	r0, #1	; 0x1
        25e3c4:	e5c40000 	strb	r0, [r4]
        25e3c8:	e59f1008 	ldr	r1, [pc, #8]	; 25e3d8 <TExtPageTrackerMgr::UnHookTracker(unsigned long)+0x68>
        25e3cc:	e5c10000 	strb	r0, [r1]
        25e3d0:	e3a00000 	mov	r0, #0	; 0x0
        25e3d4:	ea000007 	b	25e3f8 <TExtPageTrackerMgr::UnHookTracker(unsigned long)+0x88>
        25e3d8:	0c101028 	ldceq	0, cr1, [r0], -#160
        25e3dc:	e1a00007 	mov	r0, r7
        25e3e0:	e1a01006 	mov	r1, r6
        25e3e4:	eb65d581 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        25e3e8:	e1b06000 	movs	r6, r0
        25e3ec:	1affffea 	bne	25e39c <TExtPageTrackerMgr::UnHookTracker(unsigned long)+0x2c>
        25e3f0:	e3a000e1 	mov	r0, #225	; 0xe1
        25e3f4:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        25e3f8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TExtPageTrackerMgr::DoDeferral(void)
 * Address: 0025e3fc
 */
TExtPageTrackerMgr::DoDeferral(void) {
    /*
        25e3fc:	e1a0c00d 	mov	ip, sp
        25e400:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25e404:	e24cb004 	sub	fp, ip, #4	; 0x4
        25e408:	e1a04000 	mov	r4, r0
        25e40c:	e5d00000 	ldrb	r0, [r0]
        25e410:	e3300000 	teq	r0, #0	; 0x0
        25e414:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        25e418:	e2840004 	add	r0, r4, #4	; 0x4
        25e41c:	e1a06000 	mov	r6, r0
        25e420:	eb65e5f2 	bl	1bd7bf0 <TDoubleQContainer::$Peek(void)>
        25e424:	e1b05000 	movs	r5, r0
        25e428:	0a000006 	beq	25e448 <TExtPageTrackerMgr::DoDeferral(void)+0x4c>
        25e42c:	e1a00005 	mov	r0, r5
        25e430:	ebffffa3 	bl	25e2c4 <TExtPageTracker::DoDeferral(void)>
        25e434:	e1a00006 	mov	r0, r6
        25e438:	e1a01005 	mov	r1, r5
        25e43c:	eb65d56b 	bl	1bd39f0 <TDoubleQContainer::$GetNext(void *)>
        25e440:	e1b05000 	movs	r5, r0
        25e444:	1afffff8 	bne	25e42c <TExtPageTrackerMgr::DoDeferral(void)+0x30>
        25e448:	e3a00000 	mov	r0, #0	; 0x0
        25e44c:	e5c40000 	strb	r0, [r4]
        25e450:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

