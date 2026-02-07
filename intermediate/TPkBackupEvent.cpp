#include "include/TPkBackupEvent.h"

/**
 * Symbol: TPkBackupEvent::__ct(long, unsigned long, unsigned char, PartSource const &, unsigned long, unsigned long)
 * Address: 0015c3e4
 */
TPkBackupEvent::TPkBackupEvent(long, unsigned long, unsigned char, PartSource const &, unsigned long, unsigned long) {
    /*
        15c3e4:	e1a0c00d 	mov	ip, sp
        15c3e8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        15c3ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        15c3f0:	e1b04000 	movs	r4, r0
        15c3f4:	e1a06001 	mov	r6, r1
        15c3f8:	e1a05002 	mov	r5, r2
        15c3fc:	e20370ff 	and	r7, r3, #255	; 0xff
        15c400:	e59b800c 	ldr	r8, [fp, #12]
        15c404:	e59b9008 	ldr	r9, [fp, #8]
        15c408:	e59ba004 	ldr	sl, [fp, #4]
        15c40c:	1a000003 	bne	15c420 <TPkBackupEvent::__ct(long, unsigned long, unsigned char, PartSource const &, unsigned long, unsigned long)+0x3c>
        15c410:	e3a00088 	mov	r0, #136	; 0x88
        15c414:	eb69c8c7 	bl	1bce738 <$__nw(unsigned int)>
        15c418:	e1b04000 	movs	r4, r0
        15c41c:	0a00000d 	beq	15c458 <TPkBackupEvent::__ct(long, unsigned long, unsigned char, PartSource const &, unsigned long, unsigned long)+0x74>
        15c420:	e1a00004 	mov	r0, r4
        15c424:	eb664ced 	bl	1aef7e0 <TPkBaseEvent::$__ct(void)>
        15c428:	e5845014 	str	r5, [r4, #20]
        15c42c:	e5846010 	str	r6, [r4, #16]
        15c430:	e2840018 	add	r0, r4, #24	; 0x18
        15c434:	e89a5000 	ldmia	sl, {ip, lr}
        15c438:	e8805000 	stmia	r0, {ip, lr}
        15c43c:	e59f001c 	ldr	r0, [pc, #1c]	; 15c460 <TPkBackupEvent::__ct(long, unsigned long, unsigned char, PartSource const &, unsigned long, unsigned long)+0x7c>
        15c440:	e5840008 	str	r0, [r4, #8]
        15c444:	e3a00000 	mov	r0, #0	; 0x0
        15c448:	e584000c 	str	r0, [r4, #12]
        15c44c:	e5848024 	str	r8, [r4, #36]
        15c450:	e5849020 	str	r9, [r4, #32]
        15c454:	e5c47084 	strb	r7, [r4, #132]
        15c458:	e1a00004 	mov	r0, r4
        15c45c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        15c460:	706b6275 	rsbvc	r6, fp, r5, ror r2
    */
}

