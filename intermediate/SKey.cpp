#include "include/SKey.h"

/**
 * Symbol: SKey::Set(unsigned int, void *)
 * Address: 002e6344
 */
SKey::Set(unsigned int, void *) {
    /*
        2e6344:	e1a0c00d 	mov	ip, sp
        2e6348:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2e634c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6350:	e1a05000 	mov	r5, r0
        2e6354:	e1a04001 	mov	r4, r1
        2e6358:	e1a06002 	mov	r6, r2
        2e635c:	e351004e 	cmp	r1, #78	; 0x4e
        2e6360:	83a0404e 	movhi	r4, #78	; 0x4e
        2e6364:	e1a01804 	mov	r1, r4, lsl #16
        2e6368:	e1a01841 	mov	r1, r1, asr #16
        2e636c:	e1a00005 	mov	r0, r5
        2e6370:	eb5deb5e 	bl	1a610f0 <SKey::$SetSize(short)>
        2e6374:	e2850002 	add	r0, r5, #2	; 0x2
        2e6378:	e1a02004 	mov	r2, r4
        2e637c:	e1a01006 	mov	r1, r6
        2e6380:	eb6339b2 	bl	1bb4a50 <$memcpy>
        2e6384:	e1a00005 	mov	r0, r5
        2e6388:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: SKey::operator=(SKey const &)
 * Address: 002e638c
 */
SKey::operator=(SKey const &) {
    /*
        2e638c:	e1a0c00d 	mov	ip, sp
        2e6390:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2e6394:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e6398:	e1a04000 	mov	r4, r0
        2e639c:	e3a02050 	mov	r2, #80	; 0x50
        2e63a0:	eb6339aa 	bl	1bb4a50 <$memcpy>
        2e63a4:	e1a00004 	mov	r0, r4
        2e63a8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: SKey::SetMissingKey(int)
 * Address: 002e63ac
 */
SKey::SetMissingKey(int) {
    /*
        2e63ac:	e5902000 	ldr	r2, [r0]
        2e63b0:	e1a02822 	mov	r2, r2, lsr #16
        2e63b4:	e1a02442 	mov	r2, r2, asr #8
        2e63b8:	e20220ff 	and	r2, r2, #255	; 0xff
        2e63bc:	e3a03001 	mov	r3, #1	; 0x1
        2e63c0:	e1821113 	orr	r1, r2, r3, lsl r1
        2e63c4:	ea5d905c 	b	1a4a53c <SKey::$SetFlags(unsigned char)>
    */
}

/**
 * Symbol: SKey::SetSize(short)
 * Address: 002e6e34
 */
SKey::SetSize(short) {
    /*
        2e6e34:	e1a01801 	mov	r1, r1, lsl #16
        2e6e38:	e1a01841 	mov	r1, r1, asr #16
        2e6e3c:	e5902000 	ldr	r2, [r0]
        2e6e40:	e1a02822 	mov	r2, r2, lsr #16
        2e6e44:	e1a02442 	mov	r2, r2, asr #8
        2e6e48:	e1811402 	orr	r1, r1, r2, lsl #8
        2e6e4c:	e5c01001 	strb	r1, [r0, #1]	; fField1
        2e6e50:	e1a01441 	mov	r1, r1, asr #8
        2e6e54:	e5c01000 	strb	r1, [r0]
        2e6e58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: SKey::operator=(long)
 * Address: 002e96c0
 */
SKey::operator=(long) {
    /*
        2e96c0:	e1a0c00d 	mov	ip, sp
        2e96c4:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
        2e96c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e96cc:	e51b0014 	ldr	r0, [fp, -#20]
        2e96d0:	e1a01000 	mov	r1, r0
        2e96d4:	e3100003 	tst	r0, #3	; 0x3
        2e96d8:	0a000003 	beq	2e96ec <SKey::operator=(long)+0x2c>
        2e96dc:	e24b1010 	sub	r1, fp, #16	; 0x10
        2e96e0:	e3a02004 	mov	r2, #4	; 0x4
        2e96e4:	eb632cd9 	bl	1bb4a50 <$memcpy>
        2e96e8:	ea000001 	b	2e96f4 <SKey::operator=(long)+0x34>
        2e96ec:	e51b0010 	ldr	r0, [fp, -#16]
        2e96f0:	e5810000 	str	r0, [r1]
        2e96f4:	e51b0014 	ldr	r0, [fp, -#20]
        2e96f8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: SKey::operator long( const(void))
 * Address: 002e9d48
 */
SKey::operator long( const(void)) {
    /*
        2e9d48:	e1a0c00d 	mov	ip, sp
        2e9d4c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2e9d50:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e9d54:	e1a01000 	mov	r1, r0
        2e9d58:	e3100003 	tst	r0, #3	; 0x3
        2e9d5c:	05900000 	ldreq	r0, [r0]
        2e9d60:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2e9d64:	e24dd004 	sub	sp, sp, #4	; 0x4
        2e9d68:	e1a0000d 	mov	r0, sp
        2e9d6c:	e3a02004 	mov	r2, #4	; 0x4
        2e9d70:	eb632b36 	bl	1bb4a50 <$memcpy>
        2e9d74:	e49d0004 	ldr	r0, [sp], #4
        2e9d78:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: SKey::operator=(unsigned short)
 * Address: 002ea054
 */
SKey::operator=(unsigned short) {
    /*
        2ea054:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ea058:	e5cd1001 	strb	r1, [sp, #1]	; fField1
        2ea05c:	e1a01421 	mov	r1, r1, lsr #8
        2ea060:	e5cd1000 	strb	r1, [sp]
        2ea064:	e1a01000 	mov	r1, r0
        2ea068:	e3100001 	tst	r0, #1	; 0x1
        2ea06c:	0a000004 	beq	2ea084 <SKey::operator=(unsigned short)+0x30>
        2ea070:	e5dd2001 	ldrb	r2, [sp, #1]	; fField1
        2ea074:	e5c12001 	strb	r2, [r1, #1]	; fField1
        2ea078:	e5dd2000 	ldrb	r2, [sp]
        2ea07c:	e5c12000 	strb	r2, [r1]
        2ea080:	ea000003 	b	2ea094 <SKey::operator=(unsigned short)+0x40>
        2ea084:	e59d1002 	ldr	r1, [sp, #2]
        2ea088:	e5c01001 	strb	r1, [r0, #1]	; fField1
        2ea08c:	e1a01441 	mov	r1, r1, asr #8
        2ea090:	e5c01000 	strb	r1, [r0]
        2ea094:	e28dd004 	add	sp, sp, #4	; 0x4
        2ea098:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: SKey::operator unsigned short( const(void))
 * Address: 002ea67c
 */
SKey::operator unsigned short( const(void)) {
    /*
        2ea67c:	e1a0c00d 	mov	ip, sp
        2ea680:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2ea684:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ea688:	e1a01000 	mov	r1, r0
        2ea68c:	e3100001 	tst	r0, #1	; 0x1
        2ea690:	05900000 	ldreq	r0, [r0]
        2ea694:	01a00820 	moveq	r0, r0, lsr #16
        2ea698:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2ea69c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ea6a0:	e1a0000d 	mov	r0, sp
        2ea6a4:	e3a02002 	mov	r2, #2	; 0x2
        2ea6a8:	eb6328e8 	bl	1bb4a50 <$memcpy>
        2ea6ac:	e59d0000 	ldr	r0, [sp]
        2ea6b0:	e1a00820 	mov	r0, r0, lsr #16
        2ea6b4:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: SKey::operator=(double const)
 * Address: 002eaba0
 */
SKey::operator=(double const) {
    /*
        2eaba0:	e1a0c00d 	mov	ip, sp
        2eaba4:	e92dd807 	stmdb	sp!, {r0, r1, r2, fp, ip, lr, pc}
        2eaba8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eabac:	e51b0018 	ldr	r0, [fp, -#24]
        2eabb0:	e1a01000 	mov	r1, r0
        2eabb4:	e3100003 	tst	r0, #3	; 0x3
        2eabb8:	0a000003 	beq	2eabcc <SKey::operator=(double const)+0x2c>
        2eabbc:	e24b1014 	sub	r1, fp, #20	; 0x14
        2eabc0:	e3a02008 	mov	r2, #8	; 0x8
        2eabc4:	eb6327a1 	bl	1bb4a50 <$memcpy>
        2eabc8:	ea000001 	b	2eabd4 <SKey::operator=(double const)+0x34>
        2eabcc:	ed1b8105 	ldfd	f0, [fp, -#20]
        2eabd0:	ed818100 	stfd	f0, [r1]
        2eabd4:	e51b0018 	ldr	r0, [fp, -#24]
        2eabd8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: SKey::operator double( const(void))
 * Address: 002eadec
 */
SKey::operator double( const(void)) {
    /*
        2eadec:	e1a0c00d 	mov	ip, sp
        2eadf0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2eadf4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eadf8:	e1a01000 	mov	r1, r0
        2eadfc:	e3100003 	tst	r0, #3	; 0x3
        2eae00:	0d908100 	ldfeqd	f0, [r0]
        2eae04:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2eae08:	e24dd008 	sub	sp, sp, #8	; 0x8
        2eae0c:	e1a0000d 	mov	r0, sp
        2eae10:	e3a02008 	mov	r2, #8	; 0x8
        2eae14:	eb63270d 	bl	1bb4a50 <$memcpy>
        2eae18:	ecbd8102 	ldfd	f0, [sp], #8
        2eae1c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: SKey::Equals( const(SKey const &))
 * Address: 002eb320
 */
SKey::Equals( const(SKey const &)) {
    /*
        2eb320:	e1a0c00d 	mov	ip, sp
        2eb324:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2eb328:	e24cb004 	sub	fp, ip, #4	; 0x4
        2eb32c:	e590c000 	ldr	ip, [r0]
        2eb330:	e1a0c84c 	mov	ip, ip, asr #16
        2eb334:	e20c30ff 	and	r3, ip, #255	; 0xff
        2eb338:	e5912000 	ldr	r2, [r1]
        2eb33c:	e1a02842 	mov	r2, r2, asr #16
        2eb340:	e20240ff 	and	r4, r2, #255	; 0xff
        2eb344:	e1330004 	teq	r3, r4
        2eb348:	1a00000c 	bne	2eb380 <SKey::Equals( const(SKey const &))+0x60>
        2eb34c:	e1a0c44c 	mov	ip, ip, asr #8
        2eb350:	e20cc0ff 	and	ip, ip, #255	; 0xff
        2eb354:	e1a02442 	mov	r2, r2, asr #8
        2eb358:	e20220ff 	and	r2, r2, #255	; 0xff
        2eb35c:	e13c0002 	teq	ip, r2
        2eb360:	1a000006 	bne	2eb380 <SKey::Equals( const(SKey const &))+0x60>
        2eb364:	e1a02003 	mov	r2, r3
        2eb368:	e2811002 	add	r1, r1, #2	; 0x2
        2eb36c:	e2800002 	add	r0, r0, #2	; 0x2
        2eb370:	eb6325b5 	bl	1bb4a4c <$memcmp>
        2eb374:	e3300000 	teq	r0, #0	; 0x0
        2eb378:	03a00001 	moveq	r0, #1	; 0x1
        2eb37c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2eb380:	e3a00000 	mov	r0, #0	; 0x0
        2eb384:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: SKey::SetFlags(unsigned char)
 * Address: 002ebca0
 */
SKey::SetFlags(unsigned char) {
    /*
        2ebca0:	e20110ff 	and	r1, r1, #255	; 0xff
        2ebca4:	e5902000 	ldr	r2, [r0]
        2ebca8:	e1a02402 	mov	r2, r2, lsl #8
        2ebcac:	e1a02c22 	mov	r2, r2, lsr #24
        2ebcb0:	e1821401 	orr	r1, r2, r1, lsl #8
        2ebcb4:	e5c01001 	strb	r1, [r0, #1]	; fField1
        2ebcb8:	e1a01441 	mov	r1, r1, asr #8
        2ebcbc:	e5c01000 	strb	r1, [r0]
        2ebcc0:	e1a0f00e 	mov	pc, lr
    */
}

