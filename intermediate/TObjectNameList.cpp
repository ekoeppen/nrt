#include "include/TObjectNameList.h"

/**
 * Symbol: TObjectNameList::Add(char *, char *, unsigned long, unsigned long)
 * Address: 0012f100
 */
TObjectNameList::Add(char *, char *, unsigned long, unsigned long) {
    /*
        12f100:	e1a0c00d 	mov	ip, sp
        12f104:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        12f108:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f10c:	e1a04000 	mov	r4, r0
        12f110:	e1a06001 	mov	r6, r1
        12f114:	e1a05002 	mov	r5, r2
        12f118:	e1a07003 	mov	r7, r3
        12f11c:	e3a00018 	mov	r0, #24	; 0x18
        12f120:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        12f124:	eb6a7d83 	bl	1bce738 <$__nw(unsigned int)>
        12f128:	e1a01000 	mov	r1, r0
        12f12c:	e3a00000 	mov	r0, #0	; 0x0
        12f130:	e3510000 	cmp	r1, #0	; 0x0
        12f134:	0a000003 	beq	12f148 <TObjectNameList::Add(char *, char *, unsigned long, unsigned long)+0x48>
        12f138:	e5810000 	str	r0, [r1]
        12f13c:	e581000c 	str	r0, [r1, #12]
        12f140:	e5810010 	str	r0, [r1, #16]	; fField16
        12f144:	e5810014 	str	r0, [r1, #20]
        12f148:	e1a08001 	mov	r8, r1
        12f14c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        12f150:	e5885010 	str	r5, [r8, #16]	; fField16
        12f154:	e588600c 	str	r6, [r8, #12]
        12f158:	e9880280 	stmib	r8, {r7, r9}
        12f15c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        12f160:	e5880000 	str	r0, [r8]
        12f164:	e5848010 	str	r8, [r4, #16]	; fField16
        12f168:	e3a0a000 	mov	sl, #0	; 0x0
        12f16c:	e5947000 	ldr	r7, [r4]
        12f170:	e3370000 	teq	r7, #0	; 0x0
        12f174:	0a000027 	beq	12f218 <TObjectNameList::Add(char *, char *, unsigned long, unsigned long)+0x118>
        12f178:	e1a01006 	mov	r1, r6
        12f17c:	e5970014 	ldr	r0, [r7, #20]
        12f180:	eb6a1a48 	bl	1bb5aa8 <$strcmp>
        12f184:	e3300000 	teq	r0, #0	; 0x0
        12f188:	1a00001e 	bne	12f208 <TObjectNameList::Add(char *, char *, unsigned long, unsigned long)+0x108>
        12f18c:	e1a01005 	mov	r1, r5
        12f190:	e5970018 	ldr	r0, [r7, #24]
        12f194:	eb6a1a43 	bl	1bb5aa8 <$strcmp>
        12f198:	e3300000 	teq	r0, #0	; 0x0
        12f19c:	1a000019 	bne	12f208 <TObjectNameList::Add(char *, char *, unsigned long, unsigned long)+0x108>
        12f1a0:	e24dd00c 	sub	sp, sp, #12	; 0xc
        12f1a4:	e1a0000d 	mov	r0, sp
        12f1a8:	eb678de9 	bl	1b12954 <TNameServerReply::$__ct(void)>
        12f1ac:	e5980004 	ldr	r0, [r8, #4]	; fField4
        12f1b0:	e58d0000 	str	r0, [sp]
        12f1b4:	e5980008 	ldr	r0, [r8, #8]
        12f1b8:	e58d0004 	str	r0, [sp, #4]	; fField4
        12f1bc:	e2870004 	add	r0, r7, #4	; 0x4
        12f1c0:	e1a0100d 	mov	r1, sp
        12f1c4:	e3a03000 	mov	r3, #0	; 0x0
        12f1c8:	e3a0200c 	mov	r2, #12	; 0xc
        12f1cc:	eb6aaac6 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        12f1d0:	e33a0000 	teq	sl, #0	; 0x0
        12f1d4:	e5970000 	ldr	r0, [r7]
        12f1d8:	05840000 	streq	r0, [r4]
        12f1dc:	158a0000 	strne	r0, [sl]
        12f1e0:	e1a09007 	mov	r9, r7
        12f1e4:	e5977000 	ldr	r7, [r7]
        12f1e8:	e5990014 	ldr	r0, [r9, #20]
        12f1ec:	eb6a793b 	bl	1bcd6e0 <$__dl(void *)>
        12f1f0:	e5990018 	ldr	r0, [r9, #24]
        12f1f4:	eb6a7939 	bl	1bcd6e0 <$__dl(void *)>
        12f1f8:	e1a00009 	mov	r0, r9
        12f1fc:	eb6a7937 	bl	1bcd6e0 <$__dl(void *)>
        12f200:	e28dd00c 	add	sp, sp, #12	; 0xc
        12f204:	ea000001 	b	12f210 <TObjectNameList::Add(char *, char *, unsigned long, unsigned long)+0x110>
        12f208:	e1a0a007 	mov	sl, r7
        12f20c:	e5977000 	ldr	r7, [r7]
        12f210:	e3370000 	teq	r7, #0	; 0x0
        12f214:	1affffd7 	bne	12f178 <TObjectNameList::Add(char *, char *, unsigned long, unsigned long)+0x78>
        12f218:	e3a00001 	mov	r0, #1	; 0x1
        12f21c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectNameList::Remove(char *, char *)
 * Address: 0012f56c
 */
TObjectNameList::Remove(char *, char *) {
    /*
        12f56c:	e1a0c00d 	mov	ip, sp
        12f570:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        12f574:	e24cb004 	sub	fp, ip, #4	; 0x4
        12f578:	e1a04000 	mov	r4, r0
        12f57c:	e1a05001 	mov	r5, r1
        12f580:	e1a06002 	mov	r6, r2
        12f584:	e3a07000 	mov	r7, #0	; 0x0
        12f588:	e5908010 	ldr	r8, [r0, #16]	; fField16
        12f58c:	e3380000 	teq	r8, #0	; 0x0
        12f590:	0a000046 	beq	12f6b0 <TObjectNameList::Remove(char *, char *)+0x144>
        12f594:	e1a01005 	mov	r1, r5
        12f598:	e598000c 	ldr	r0, [r8, #12]
        12f59c:	eb6a1941 	bl	1bb5aa8 <$strcmp>
        12f5a0:	e3300000 	teq	r0, #0	; 0x0
        12f5a4:	1a00003d 	bne	12f6a0 <TObjectNameList::Remove(char *, char *)+0x134>
        12f5a8:	e3370000 	teq	r7, #0	; 0x0
        12f5ac:	e5980000 	ldr	r0, [r8]
        12f5b0:	05840010 	streq	r0, [r4, #16]	; fField16
        12f5b4:	15870000 	strne	r0, [r7]
        12f5b8:	e5980014 	ldr	r0, [r8, #20]
        12f5bc:	e3300000 	teq	r0, #0	; 0x0
        12f5c0:	0a000006 	beq	12f5e0 <TObjectNameList::Remove(char *, char *)+0x74>
        12f5c4:	e5901000 	ldr	r1, [r0]
        12f5c8:	e3110001 	tst	r1, #1	; 0x1
        12f5cc:	13811002 	orrne	r1, r1, #2	; 0x2
        12f5d0:	15801000 	strne	r1, [r0]
        12f5d4:	1a000001 	bne	12f5e0 <TObjectNameList::Remove(char *, char *)+0x74>
        12f5d8:	e3a01001 	mov	r1, #1	; 0x1
        12f5dc:	eb679937 	bl	1b15ac0 <TResArbitrationInfo::$__dt(void)>
        12f5e0:	e3a09000 	mov	r9, #0	; 0x0
        12f5e4:	e5947004 	ldr	r7, [r4, #4]	; fField4
        12f5e8:	e3370000 	teq	r7, #0	; 0x0
        12f5ec:	0a000023 	beq	12f680 <TObjectNameList::Remove(char *, char *)+0x114>
        12f5f0:	e1a01005 	mov	r1, r5
        12f5f4:	e5970014 	ldr	r0, [r7, #20]
        12f5f8:	eb6a192a 	bl	1bb5aa8 <$strcmp>
        12f5fc:	e3300000 	teq	r0, #0	; 0x0
        12f600:	1a00001a 	bne	12f670 <TObjectNameList::Remove(char *, char *)+0x104>
        12f604:	e1a01006 	mov	r1, r6
        12f608:	e5970018 	ldr	r0, [r7, #24]
        12f60c:	eb6a1925 	bl	1bb5aa8 <$strcmp>
        12f610:	e3300000 	teq	r0, #0	; 0x0
        12f614:	1a000015 	bne	12f670 <TObjectNameList::Remove(char *, char *)+0x104>
        12f618:	e24dd00c 	sub	sp, sp, #12	; 0xc
        12f61c:	e1a0000d 	mov	r0, sp
        12f620:	eb678ccb 	bl	1b12954 <TNameServerReply::$__ct(void)>
        12f624:	e2870004 	add	r0, r7, #4	; 0x4
        12f628:	e1a0100d 	mov	r1, sp
        12f62c:	e3a03000 	mov	r3, #0	; 0x0
        12f630:	e3a0200c 	mov	r2, #12	; 0xc
        12f634:	eb6aa9ac 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
        12f638:	e3390000 	teq	r9, #0	; 0x0
        12f63c:	e5970000 	ldr	r0, [r7]
        12f640:	05840004 	streq	r0, [r4, #4]	; fField4
        12f644:	15890000 	strne	r0, [r9]
        12f648:	e1a0a007 	mov	sl, r7
        12f64c:	e5977000 	ldr	r7, [r7]
        12f650:	e59a0014 	ldr	r0, [sl, #20]
        12f654:	eb6a7821 	bl	1bcd6e0 <$__dl(void *)>
        12f658:	e59a0018 	ldr	r0, [sl, #24]
        12f65c:	eb6a781f 	bl	1bcd6e0 <$__dl(void *)>
        12f660:	e1a0000a 	mov	r0, sl
        12f664:	eb6a781d 	bl	1bcd6e0 <$__dl(void *)>
        12f668:	e28dd00c 	add	sp, sp, #12	; 0xc
        12f66c:	ea000001 	b	12f678 <TObjectNameList::Remove(char *, char *)+0x10c>
        12f670:	e1a09007 	mov	r9, r7
        12f674:	e5977000 	ldr	r7, [r7]
        12f678:	e3370000 	teq	r7, #0	; 0x0
        12f67c:	1affffdb 	bne	12f5f0 <TObjectNameList::Remove(char *, char *)+0x84>
        12f680:	e598000c 	ldr	r0, [r8, #12]
        12f684:	eb6a7815 	bl	1bcd6e0 <$__dl(void *)>
        12f688:	e5980010 	ldr	r0, [r8, #16]	; fField16
        12f68c:	eb6a7813 	bl	1bcd6e0 <$__dl(void *)>
        12f690:	e1a00008 	mov	r0, r8
        12f694:	eb6a7811 	bl	1bcd6e0 <$__dl(void *)>
        12f698:	e3a00001 	mov	r0, #1	; 0x1
        12f69c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        12f6a0:	e1a07008 	mov	r7, r8
        12f6a4:	e5988000 	ldr	r8, [r8]
        12f6a8:	e3380000 	teq	r8, #0	; 0x0
        12f6ac:	1affffb8 	bne	12f594 <TObjectNameList::Remove(char *, char *)+0x28>
        12f6b0:	e3a00000 	mov	r0, #0	; 0x0
        12f6b4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectNameList::Lookup(char *, char *, unsigned long *, unsigned long *, TObjectNameEntry **)
 * Address: 0012fef8
 */
TObjectNameList::Lookup(char *, char *, unsigned long *, unsigned long *, TObjectNameEntry **) {
    /*
        12fef8:	e1a0c00d 	mov	ip, sp
        12fefc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        12ff00:	e24cb004 	sub	fp, ip, #4	; 0x4
        12ff04:	e1a06001 	mov	r6, r1
        12ff08:	e1a05002 	mov	r5, r2
        12ff0c:	e1a04003 	mov	r4, r3
        12ff10:	e59b8008 	ldr	r8, [fp, #8]
        12ff14:	e59b9004 	ldr	r9, [fp, #4]	; fField4
        12ff18:	e5b07010 	ldr	r7, [r0, #16]!	; fField16
        12ff1c:	e3370000 	teq	r7, #0	; 0x0
        12ff20:	0a000014 	beq	12ff78 <TObjectNameList::Lookup(char *, char *, unsigned long *, unsigned long *, TObjectNameEntry **)+0x80>
        12ff24:	e1a01006 	mov	r1, r6
        12ff28:	e597000c 	ldr	r0, [r7, #12]
        12ff2c:	eb6a16dd 	bl	1bb5aa8 <$strcmp>
        12ff30:	e3300000 	teq	r0, #0	; 0x0
        12ff34:	1a00000c 	bne	12ff6c <TObjectNameList::Lookup(char *, char *, unsigned long *, unsigned long *, TObjectNameEntry **)+0x74>
        12ff38:	e1a01005 	mov	r1, r5
        12ff3c:	e5970010 	ldr	r0, [r7, #16]	; fField16
        12ff40:	eb6a16d8 	bl	1bb5aa8 <$strcmp>
        12ff44:	e3300000 	teq	r0, #0	; 0x0
        12ff48:	1a000007 	bne	12ff6c <TObjectNameList::Lookup(char *, char *, unsigned long *, unsigned long *, TObjectNameEntry **)+0x74>
        12ff4c:	e5970004 	ldr	r0, [r7, #4]	; fField4
        12ff50:	e5840000 	str	r0, [r4]
        12ff54:	e5970008 	ldr	r0, [r7, #8]
        12ff58:	e3380000 	teq	r8, #0	; 0x0
        12ff5c:	e5890000 	str	r0, [r9]
        12ff60:	15887000 	strne	r7, [r8]
        12ff64:	e3a00001 	mov	r0, #1	; 0x1
        12ff68:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        12ff6c:	e5977000 	ldr	r7, [r7]
        12ff70:	e3370000 	teq	r7, #0	; 0x0
        12ff74:	1affffea 	bne	12ff24 <TObjectNameList::Lookup(char *, char *, unsigned long *, unsigned long *, TObjectNameEntry **)+0x2c>
        12ff78:	e3a00000 	mov	r0, #0	; 0x0
        12ff7c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

