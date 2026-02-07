#include "include/TPattern.h"

/**
 * Symbol: TPattern::GetFillPattern(RefVar const &, unsigned char)
 * Address: 00198178
 */
TPattern::GetFillPattern(RefVar const &, unsigned char) {
    /*
        198178:	e1a0c00d 	mov	ip, sp
        19817c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        198180:	e24cb004 	sub	fp, ip, #4	; 0x4
        198184:	e20230ff 	and	r3, r2, #255	; 0xff
        198188:	e1a02003 	mov	r2, r3
        19818c:	e591c000 	ldr	ip, [r1]
        198190:	e59cc000 	ldr	ip, [ip]
        198194:	e33c0002 	teq	ip, #2	; 0x2
        198198:	0a000005 	beq	1981b4 <TPattern::GetFillPattern(RefVar const &, unsigned char)+0x3c>
        19819c:	e280c004 	add	ip, r0, #4	; 0x4
        1981a0:	e1a02000 	mov	r2, r0
        1981a4:	e1a00001 	mov	r0, r1
        1981a8:	e1a0100c 	mov	r1, ip
        1981ac:	eb651fa8 	bl	1ae0054 <$GetPattern(RefVar const &, unsigned char *, PixelMap ***, unsigned char)>
        1981b0:	e1a02000 	mov	r2, r0
        1981b4:	e1a00002 	mov	r0, r2
        1981b8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPattern::__dt(void)
 * Address: 001981bc
 */
TPattern::~TPattern(void) {
    /*
        1981bc:	e1a0c00d 	mov	ip, sp
        1981c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1981c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1981c8:	e1a04000 	mov	r4, r0
        1981cc:	e1a05001 	mov	r5, r1
        1981d0:	e5d00004 	ldrb	r0, [r0, #4]
        1981d4:	e3300000 	teq	r0, #0	; 0x0
        1981d8:	0a00000b 	beq	19820c <TPattern::__dt(void)+0x50>
        1981dc:	e5d40005 	ldrb	r0, [r4, #5]	; fField5
        1981e0:	e3300000 	teq	r0, #0	; 0x0
        1981e4:	0a000006 	beq	198204 <TPattern::__dt(void)+0x48>
        1981e8:	eb66dd76 	bl	1b4f7c8 <$GetFgPattern(void)>
        1981ec:	e5941000 	ldr	r1, [r4]
        1981f0:	e1300001 	teq	r0, r1
        1981f4:	1a000002 	bne	198204 <TPattern::__dt(void)+0x48>
        1981f8:	e3a00004 	mov	r0, #4	; 0x4
        1981fc:	eb66dd77 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        198200:	eb66edfa 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        198204:	e5940000 	ldr	r0, [r4]
        198208:	eb66d533 	bl	1b4d6dc <$DisposePattern(PixelMap **)>
        19820c:	e3150001 	tst	r5, #1	; 0x1
        198210:	11a00004 	movne	r0, r4
        198214:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        198218:	1a68d530 	bne	1bcd6e0 <$__dl(void *)>
        19821c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

