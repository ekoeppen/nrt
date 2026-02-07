#include "include/TStartInfo.h"

/**
 * Symbol: TStartInfo::__ct(void)
 * Address: 0006c8f4
 */
TStartInfo::TStartInfo(void) {
    /*
         6c8f4:	e1a0c00d 	mov	ip, sp
         6c8f8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         6c8fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c900:	e3300000 	teq	r0, #0	; 0x0
         6c904:	1a000003 	bne	6c918 <TStartInfo::__ct(void)+0x24>
         6c908:	e3a00030 	mov	r0, #48	; 0x30
         6c90c:	eb6d8789 	bl	1bce738 <$__nw(unsigned int)>
         6c910:	e3300000 	teq	r0, #0	; 0x0
         6c914:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         6c918:	e3a01000 	mov	r1, #0	; 0x0
         6c91c:	e5801008 	str	r1, [r0, #8]	; fField8
         6c920:	e5801014 	str	r1, [r0, #20]	; fField20
         6c924:	e580100c 	str	r1, [r0, #12]	; fField12
         6c928:	e5801010 	str	r1, [r0, #16]	; fField16
         6c92c:	e5c01000 	strb	r1, [r0]
         6c930:	e5801018 	str	r1, [r0, #24]	; fField24
         6c934:	e580102c 	str	r1, [r0, #44]	; fField44
         6c938:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TStartInfo::__dt(void)
 * Address: 0006c93c
 */
TStartInfo::~TStartInfo(void) {
    /*
         6c93c:	e1a0c00d 	mov	ip, sp
         6c940:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6c944:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c948:	e1a04000 	mov	r4, r0
         6c94c:	e1a05001 	mov	r5, r1
         6c950:	e5900018 	ldr	r0, [r0, #24]	; fField24
         6c954:	e3300000 	teq	r0, #0	; 0x0
         6c958:	0a000002 	beq	6c968 <TStartInfo::__dt(void)+0x2c>
         6c95c:	eb66666d 	bl	1a06318 <TCMService::$Delete(void)>
         6c960:	e3a00000 	mov	r0, #0	; 0x0
         6c964:	e5840018 	str	r0, [r4, #24]	; fField24
         6c968:	e5d40000 	ldrb	r0, [r4]
         6c96c:	e3300000 	teq	r0, #0	; 0x0
         6c970:	15940004 	ldrne	r0, [r4, #4]	; fField4
         6c974:	13300000 	teqne	r0, #0	; 0x0
         6c978:	13a01001 	movne	r1, #1	; 0x1
         6c97c:	1b6d286a 	blne	1bb6b2c <TOptionArray::$__dt(void)>
         6c980:	eb6d9c13 	bl	1bd39d4 <$GetGlobals>
         6c984:	e28000a8 	add	r0, r0, #168	; 0xa8
         6c988:	e1a01004 	mov	r1, r4
         6c98c:	eb6dff25 	bl	1bec628 <CList::$Remove(void *)>
         6c990:	e3150001 	tst	r5, #1	; 0x1
         6c994:	11a00004 	movne	r0, r4
         6c998:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         6c99c:	1a6d834f 	bne	1bcd6e0 <$__dl(void *)>
         6c9a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStartInfo::Init(TUMsgToken *, TCMEvent *)
 * Address: 0006c9a4
 */
TStartInfo::Init(TUMsgToken *, TCMEvent *) {
    /*
         6c9a4:	e1a0c00d 	mov	ip, sp
         6c9a8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         6c9ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c9b0:	e1a04000 	mov	r4, r0
         6c9b4:	e1a06001 	mov	r6, r1
         6c9b8:	e1a05002 	mov	r5, r2
         6c9bc:	e3a07000 	mov	r7, #0	; 0x0
         6c9c0:	e5920008 	ldr	r0, [r2, #8]	; fField8
         6c9c4:	e3300001 	teq	r0, #1	; 0x1
         6c9c8:	1a00000e 	bne	6ca08 <TStartInfo::Init(TUMsgToken *, TCMEvent *)+0x64>
         6c9cc:	e3a00000 	mov	r0, #0	; 0x0
         6c9d0:	eb6d2443 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         6c9d4:	e5840004 	str	r0, [r4, #4]	; fField4
         6c9d8:	e3300000 	teq	r0, #0	; 0x0
         6c9dc:	03a070e9 	moveq	r7, #233	; 0xe9
         6c9e0:	02477b0a 	subeq	r7, r7, #10240	; 0x2800
         6c9e4:	0a000010 	beq	6ca2c <TStartInfo::Init(TUMsgToken *, TCMEvent *)+0x88>
         6c9e8:	e285500c 	add	r5, r5, #12	; 0xc
         6c9ec:	e9b50006 	ldmib	r5!, {r1, r2}
         6c9f0:	eb6d2c77 	bl	1bb7bd4 <TOptionArray::$CopyFromShared(unsigned long, unsigned long)>
         6c9f4:	e1b07000 	movs	r7, r0
         6c9f8:	03a00001 	moveq	r0, #1	; 0x1
         6c9fc:	05c40000 	streqb	r0, [r4]
         6ca00:	0a000002 	beq	6ca10 <TStartInfo::Init(TUMsgToken *, TCMEvent *)+0x6c>
         6ca04:	ea000008 	b	6ca2c <TStartInfo::Init(TUMsgToken *, TCMEvent *)+0x88>
         6ca08:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
         6ca0c:	e5840004 	str	r0, [r4, #4]	; fField4
         6ca10:	e2840008 	add	r0, r4, #8	; 0x8
         6ca14:	e8965048 	ldmia	r6, {r3, r6, ip, lr}
         6ca18:	e8805048 	stmia	r0, {r3, r6, ip, lr}
         6ca1c:	eb6d9bec 	bl	1bd39d4 <$GetGlobals>
         6ca20:	e1a02004 	mov	r2, r4
         6ca24:	e5b010a8 	ldr	r1, [r0, #168]!
         6ca28:	eb6df2af 	bl	1be94ec <CList::$InsertAt(long, void *)>
         6ca2c:	e1a00007 	mov	r0, r7
         6ca30:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TStartInfo::Complete(long)
 * Address: 0006ca34
 */
TStartInfo::Complete(long) {
    /*
         6ca34:	e1a0c00d 	mov	ip, sp
         6ca38:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6ca3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6ca40:	e1a04000 	mov	r4, r0
         6ca44:	e5801028 	str	r1, [r0, #40]	; fField40
         6ca48:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         6ca4c:	e1a0000d 	mov	r0, sp
         6ca50:	eb6dddf8 	bl	1be4238 <TAEvent::$__ct(void)>
         6ca54:	e5940028 	ldr	r0, [r4, #40]	; fField40
         6ca58:	e58d000c 	str	r0, [sp, #12]	; fField12
         6ca5c:	e28d1010 	add	r1, sp, #16	; 0x10
         6ca60:	e284001c 	add	r0, r4, #28	; 0x1c
         6ca64:	e8905008 	ldmia	r0, {r3, ip, lr}
         6ca68:	e8815008 	stmia	r1, {r3, ip, lr}
         6ca6c:	e2840008 	add	r0, r4, #8	; 0x8
         6ca70:	e1a0100d 	mov	r1, sp
         6ca74:	e3a03000 	mov	r3, #0	; 0x0
         6ca78:	e3a0201c 	mov	r2, #28	; 0x1c
         6ca7c:	eb6db49a 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
         6ca80:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

