#include "include/TXNewtFontFamilyInfo.h"

/**
 * Symbol: TXNewtFontFamilyInfo::__ct(RefVar const &)
 * Address: 00240158
 */
TXNewtFontFamilyInfo::TXNewtFontFamilyInfo(RefVar const &) {
    /*
        240158:	e1a0c00d 	mov	ip, sp
        24015c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        240160:	e24cb004 	sub	fp, ip, #4	; 0x4
        240164:	e1b04000 	movs	r4, r0
        240168:	e1a05001 	mov	r5, r1
        24016c:	1a000003 	bne	240180 <TXNewtFontFamilyInfo::__ct(RefVar const &)+0x28>
        240170:	e3a00008 	mov	r0, #8	; 0x8
        240174:	eb66396f 	bl	1bce738 <$__nw(unsigned int)>
        240178:	e1b04000 	movs	r4, r0
        24017c:	0a00000c 	beq	2401b4 <TXNewtFontFamilyInfo::__ct(RefVar const &)+0x5c>
        240180:	e1a00004 	mov	r0, r4
        240184:	ebffd091 	bl	2343d0 <TXVirtualObject::__ct(void)>
        240188:	e3a00002 	mov	r0, #2	; 0x2
        24018c:	eb6607ee 	bl	1bc214c <$AllocateRefHandle(long)>
        240190:	e3a01000 	mov	r1, #0	; 0x0
        240194:	e5840004 	str	r0, [r4, #4]	; fField4
        240198:	e5a01004 	str	r1, [r0, #4]!	; fField4
        24019c:	e59f0018 	ldr	r0, [pc, #18]	; 2401bc <TXNewtFontFamilyInfo::__ct(RefVar const &)+0x64>
        2401a0:	e5840000 	str	r0, [r4]
        2401a4:	e5951000 	ldr	r1, [r5]
        2401a8:	e5911000 	ldr	r1, [r1]
        2401ac:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2401b0:	e5801000 	str	r1, [r0]
        2401b4:	e1a00004 	mov	r0, r4
        2401b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2401bc:	0001f064 	andeq	pc, r1, r4, rrx
    */
}

/**
 * Symbol: TXNewtFontFamilyInfo::__dt(void)
 * Address: 002401c0
 */
TXNewtFontFamilyInfo::~TXNewtFontFamilyInfo(void) {
    /*
        2401c0:	e1a0c00d 	mov	ip, sp
        2401c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2401c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2401cc:	e1a04000 	mov	r4, r0
        2401d0:	e1a05001 	mov	r5, r1
        2401d4:	e59f0028 	ldr	r0, [pc, #28]	; 240204 <TXNewtFontFamilyInfo::__dt(void)+0x44>
        2401d8:	e5840000 	str	r0, [r4]
        2401dc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2401e0:	eb660bf5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2401e4:	e1a00004 	mov	r0, r4
        2401e8:	e3a01000 	mov	r1, #0	; 0x0
        2401ec:	ebffd084 	bl	234404 <TXVirtualObject::__dt(void)>
        2401f0:	e3150001 	tst	r5, #1	; 0x1
        2401f4:	11a00004 	movne	r0, r4
        2401f8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2401fc:	1a663537 	bne	1bcd6e0 <$__dl(void *)>
        240200:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        240204:	0001f064 	andeq	pc, r1, r4, rrx
    */
}

