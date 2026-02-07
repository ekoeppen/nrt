#include "include/TNumberParser.h"

/**
 * Symbol: TNumberParser::__ct(void)
 * Address: 001473a4
 */
TNumberParser::TNumberParser(void) {
    /*
        1473a4:	e1a0c00d 	mov	ip, sp
        1473a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1473ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1473b0:	e1b04000 	movs	r4, r0
        1473b4:	1a000003 	bne	1473c8 <TNumberParser::__ct(void)+0x24>
        1473b8:	e3a00028 	mov	r0, #40	; 0x28
        1473bc:	eb6a1cdd 	bl	1bce738 <$__nw(unsigned int)>
        1473c0:	e1b04000 	movs	r4, r0
        1473c4:	0a000001 	beq	1473d0 <TNumberParser::__ct(void)+0x2c>
        1473c8:	e1a00004 	mov	r0, r4
        1473cc:	eb65631c 	bl	1aa0044 <TNumberParser::$Reset(void)>
        1473d0:	e1a00004 	mov	r0, r4
        1473d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNumberParser::Reset(void)
 * Address: 001473d8
 */
TNumberParser::Reset(void) {
    /*
        1473d8:	e1a0c00d 	mov	ip, sp
        1473dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1473e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1473e4:	e1a04000 	mov	r4, r0
        1473e8:	ee008188 	mvfd	f0, #0.0
        1473ec:	ed808100 	stfd	f0, [r0]
        1473f0:	ed808102 	stfd	f0, [r0, #8]
        1473f4:	e3a05000 	mov	r5, #0	; 0x0
        1473f8:	e5805010 	str	r5, [r0, #16]	; fField16
        1473fc:	e5c05014 	strb	r5, [r0, #20]
        147400:	e5c05018 	strb	r5, [r0, #24]
        147404:	e3a01000 	mov	r1, #0	; 0x0
        147408:	eb656b46 	bl	1aa2128 <TNumberParser::$SetNumberType(TNumberType)>
        14740c:	e1a00004 	mov	r0, r4
        147410:	e3a01001 	mov	r1, #1	; 0x1
        147414:	eb656b4a 	bl	1aa2144 <TNumberParser::$SetSign(unsigned char)>
        147418:	e5a45024 	str	r5, [r4, #36]!	; fField36
        14741c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNumberParser::StringToNumber(unsigned short const *, unsigned long *, unsigned long)
 * Address: 00147420
 */
TNumberParser::StringToNumber(unsigned short const *, unsigned long *, unsigned long) {
    /*
        147420:	e1a0c00d 	mov	ip, sp
        147424:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        147428:	e24cb004 	sub	fp, ip, #4	; 0x4
        14742c:	ed2dc203 	sfm	f4, 1, [sp, -#12]!
        147430:	e1a04000 	mov	r4, r0
        147434:	e1b06001 	movs	r6, r1
        147438:	e1a07002 	mov	r7, r2
        14743c:	e1a05003 	mov	r5, r3
        147440:	ee00c188 	mvfd	f4, #0.0
        147444:	e3a00000 	mov	r0, #0	; 0x0
        147448:	e5820000 	str	r0, [r2]
        14744c:	0a000016 	beq	1474ac <TNumberParser::StringToNumber(unsigned short const *, unsigned long *, unsigned long)+0x8c>
        147450:	e3550000 	cmp	r5, #0	; 0x0
        147454:	9a000014 	bls	1474ac <TNumberParser::StringToNumber(unsigned short const *, unsigned long *, unsigned long)+0x8c>
        147458:	e1a00004 	mov	r0, r4
        14745c:	eb6562f8 	bl	1aa0044 <TNumberParser::$Reset(void)>
        147460:	e1a03005 	mov	r3, r5
        147464:	e92d0008 	stmdb	sp!, {r3}
        147468:	e59f0048 	ldr	r0, [pc, #48]	; 1474b8 <TNumberParser::StringToNumber(unsigned short const *, unsigned long *, unsigned long)+0x98>
        14746c:	e5900000 	ldr	r0, [r0]
        147470:	e1a03007 	mov	r3, r7
        147474:	e1a02006 	mov	r2, r6
        147478:	e1a01004 	mov	r1, r4
        14747c:	eb65567e 	bl	1a9ce7c <$ParseString(AirusAParmBlock **, void *, unsigned short const *, unsigned long *, unsigned long)>
        147480:	e28dd004 	add	sp, sp, #4	; 0x4
        147484:	e3700001 	cmn	r0, #1	; 0x1
        147488:	0a000007 	beq	1474ac <TNumberParser::StringToNumber(unsigned short const *, unsigned long *, unsigned long)+0x8c>
        14748c:	ed949102 	ldfd	f1, [r4, #8]
        147490:	ed948100 	ldfd	f0, [r4]
        147494:	ee014180 	adfd	f4, f1, f0
        147498:	eed4f118 	cmfe	f4, #0.0
        14749c:	da000002 	ble	1474ac <TNumberParser::StringToNumber(unsigned short const *, unsigned long *, unsigned long)+0x8c>
        1474a0:	e5d40020 	ldrb	r0, [r4, #32]	; fField32
        1474a4:	e3300000 	teq	r0, #0	; 0x0
        1474a8:	0e10c184 	mnfeqd	f4, f4
        1474ac:	ee008184 	mvfd	f0, f4
        1474b0:	ed1bc20a 	lfm	f4, 1, [fp, -#40]
        1474b4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1474b8:	0c100f98 	ldceq	15, cr0, [r0], -#608
    */
}

/**
 * Symbol: TNumberParser::SetInteger(char *)
 * Address: 001474bc
 */
TNumberParser::SetInteger(char *) {
    /*
        1474bc:	e1a0c00d 	mov	ip, sp
        1474c0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1474c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1474c8:	e1a04000 	mov	r4, r0
        1474cc:	e1b00001 	movs	r0, r1
        1474d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1474d4:	0a000002 	beq	1474e4 <TNumberParser::SetInteger(char *)+0x28>
        1474d8:	e1a0100d 	mov	r1, sp
        1474dc:	eb69b978 	bl	1bb5ac4 <$strtod>
        1474e0:	ed848100 	stfd	f0, [r4]
        1474e4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNumberParser::SetDecimal(char *)
 * Address: 001474e8
 */
TNumberParser::SetDecimal(char *) {
    /*
        1474e8:	e3310000 	teq	r1, #0	; 0x0
        1474ec:	01a0f00e 	moveq	pc, lr
        1474f0:	e1a0c00d 	mov	ip, sp
        1474f4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1474f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1474fc:	e1a05000 	mov	r5, r0
        147500:	e1a04001 	mov	r4, r1
        147504:	e1a00001 	mov	r0, r1
        147508:	eb69b968 	bl	1bb5ab0 <$strlen>
        14750c:	e5850010 	str	r0, [r5, #16]	; fField16
        147510:	e1a00004 	mov	r0, r4
        147514:	eb65e29a 	bl	1abff84 <$DecimalStrToDouble(char *)>
        147518:	ed858102 	stfd	f0, [r5, #8]
        14751c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNumberParser::SetPrefix(char *)
 * Address: 00147520
 */
TNumberParser::SetPrefix(char *) {
    /*
        147520:	e2800014 	add	r0, r0, #20	; 0x14
        147524:	e3a02003 	mov	r2, #3	; 0x3
        147528:	ea69b963 	b	1bb5abc <$strncpy>
    */
}

/**
 * Symbol: TNumberParser::SetSuffix(char *)
 * Address: 0014752c
 */
TNumberParser::SetSuffix(char *) {
    /*
        14752c:	e2800018 	add	r0, r0, #24	; 0x18
        147530:	e3a02003 	mov	r2, #3	; 0x3
        147534:	ea69b960 	b	1bb5abc <$strncpy>
    */
}

/**
 * Symbol: TNumberParser::SetSign(unsigned char)
 * Address: 00147538
 */
TNumberParser::SetSign(unsigned char) {
    /*
        147538:	e5c01020 	strb	r1, [r0, #32]	; fField32
        14753c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNumberParser::SetNumberType(TNumberType)
 * Address: 00147540
 */
TNumberParser::SetNumberType(TNumberType) {
    /*
        147540:	e5a0101c 	str	r1, [r0, #28]!	; fField28
        147544:	e1a0f00e 	mov	pc, lr
    */
}

