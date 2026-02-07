#include "DDKIncludes/CommAPI/CMService.h"

/**
 * Symbol: TUMsgToken::CashMessageToken(unsigned long *, void *, unsigned long, unsigned long, unsigned char)
 * Address: 00259930
 */
long		TUMsgToken::CashMessageToken(ULong* returnSize, void* content, ULong size, ULong offset = 0, Boolean copyDone = true) {
    /*
        259930:	e1a0c00d 	mov	ip, sp
        259934:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        259938:	e24cb004 	sub	fp, ip, #4	; 0x4
        25993c:	e1a04000 	mov	r4, r0
        259940:	e1a0c002 	mov	ip, r2
        259944:	e1a00003 	mov	r0, r3
        259948:	e59b2008 	ldr	r2, [fp, #8]	; TUMsgToken
        25994c:	e20270ff 	and	r7, r2, #255	; 0xff
        259950:	e3a05000 	mov	r5, #0	; 0x0
        259954:	e1a03001 	mov	r3, r1
        259958:	e59b6004 	ldr	r6, [fp, #4]	; TUMsgToken
        25995c:	e5941000 	ldr	r1, [r4]
        259960:	e1a0e001 	mov	lr, r1
        259964:	e5942008 	ldr	r2, [r4, #8]	; TUMsgToken
        259968:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        25996c:	e1a03006 	mov	r3, r6
        259970:	e1a02000 	mov	r2, r0
        259974:	e1a0100c 	mov	r1, ip
        259978:	e1a0000e 	mov	r0, lr
        25997c:	eb05529c 	bl	3ae3f4 <SMemCopyFromSharedSWI>
        259980:	e28dd00c 	add	sp, sp, #12	; 0xc
        259984:	e1b06000 	movs	r6, r0
        259988:	1286cc27 	addne	ip, r6, #9984	; 0x2700
        25998c:	137c0031 	cmnne	ip, #49	; 0x31
        259990:	11a05006 	movne	r5, r6
        259994:	e5940004 	ldr	r0, [r4, #4]	; TUMsgToken
        259998:	e3300000 	teq	r0, #0	; 0x0
        25999c:	1a000001 	bne	2599a8 <TUMsgToken::CashMessageToken(unsigned long *, void *, unsigned long, unsigned long, unsigned char)+0x78>
        2599a0:	e3370000 	teq	r7, #0	; 0x0
        2599a4:	1a000001 	bne	2599b0 <TUMsgToken::CashMessageToken(unsigned long *, void *, unsigned long, unsigned long, unsigned char)+0x80>
        2599a8:	e3350000 	teq	r5, #0	; 0x0
        2599ac:	0a000003 	beq	2599c0 <TUMsgToken::CashMessageToken(unsigned long *, void *, unsigned long, unsigned long, unsigned char)+0x90>
        2599b0:	e1a01005 	mov	r1, r5
        2599b4:	e4940008 	ldr	r0, [r4], #8	; TUMsgToken
        2599b8:	e5942000 	ldr	r2, [r4]
        2599bc:	eb0552b7 	bl	3ae4a0 <SMemMsgMsgDoneSWI>
        2599c0:	e1a00006 	mov	r0, r6
        2599c4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TUMsgToken::GetUserRefCon(unsigned long *)
 * Address: 002599c8
 */
long		TUMsgToken::GetUserRefCon(ULong *refConPtr) {
    /*
        2599c8:	e590200c 	ldr	r2, [r0, #12]	; TUMsgToken
        2599cc:	e3320000 	teq	r2, #0	; 0x0
        2599d0:	05900000 	ldreq	r0, [r0]
        2599d4:	11a00002 	movne	r0, r2
        2599d8:	ea055299 	b	3ae444 <SMemMsgGetUserRefConSWI>
    */
}

/**
 * Symbol: TUMsgToken::ReplyRPC(void *, unsigned long, long)
 * Address: 00259f44
 */
long		TUMsgToken::ReplyRPC(void* content, ULong size, long replyResult = noErr) {
    /*
        259f44:	e1a0c00d 	mov	ip, sp
        259f48:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        259f4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        259f50:	e1a04000 	mov	r4, r0
        259f54:	e1a0c002 	mov	ip, r2
        259f58:	e1a05003 	mov	r5, r3
        259f5c:	e3710001 	cmn	r1, #1	; 0x1
        259f60:	0a000010 	beq	259fa8 <TUMsgToken::ReplyRPC(void *, unsigned long, long)+0x64>
        259f64:	e35c0000 	cmp	ip, #0	; 0x0
        259f68:	9a00000e 	bls	259fa8 <TUMsgToken::ReplyRPC(void *, unsigned long, long)+0x64>
        259f6c:	e5942000 	ldr	r2, [r4]
        259f70:	e5943008 	ldr	r3, [r4, #8]	; TUMsgToken
        259f74:	e92d000c 	stmdb	sp!, {r2, r3}
        259f78:	e1a0200c 	mov	r2, ip
        259f7c:	e3a03000 	mov	r3, #0	; 0x0
        259f80:	e5940004 	ldr	r0, [r4, #4]	; TUMsgToken
        259f84:	eb055114 	bl	3ae3dc <SMemCopyToSharedSWI>
        259f88:	e28dd008 	add	sp, sp, #8	; 0x8
        259f8c:	e1b06000 	movs	r6, r0
        259f90:	0a000004 	beq	259fa8 <TUMsgToken::ReplyRPC(void *, unsigned long, long)+0x64>
        259f94:	e1a01005 	mov	r1, r5
        259f98:	e4940008 	ldr	r0, [r4], #8	; TUMsgToken
        259f9c:	e5942000 	ldr	r2, [r4]
        259fa0:	eb05513e 	bl	3ae4a0 <SMemMsgMsgDoneSWI>
        259fa4:	ea000004 	b	259fbc <TUMsgToken::ReplyRPC(void *, unsigned long, long)+0x78>
        259fa8:	e1a01005 	mov	r1, r5
        259fac:	e4940008 	ldr	r0, [r4], #8	; TUMsgToken
        259fb0:	e5942000 	ldr	r2, [r4]
        259fb4:	eb055139 	bl	3ae4a0 <SMemMsgMsgDoneSWI>
        259fb8:	e1a06000 	mov	r6, r0
        259fbc:	e1a00006 	mov	r0, r6
        259fc0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

