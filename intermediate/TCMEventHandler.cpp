#include "include/TCMEventHandler.h"

/**
 * Symbol: TCMEventHandler::Init(unsigned long, unsigned long)
 * Address: 0006bafc
 */
TCMEventHandler::Init(unsigned long, unsigned long) {
    /*
         6bafc:	e1a0c00d 	mov	ip, sp
         6bb00:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         6bb04:	e24cb004 	sub	fp, ip, #4	; 0x4
         6bb08:	e1a04000 	mov	r4, r0
         6bb0c:	e1a06001 	mov	r6, r1
         6bb10:	e1a05002 	mov	r5, r2
         6bb14:	e3a0003c 	mov	r0, #60	; 0x3c
         6bb18:	eb6d8b06 	bl	1bce738 <$__nw(unsigned int)>
         6bb1c:	e1b07000 	movs	r7, r0
         6bb20:	0a000003 	beq	6bb34 <TCMEventHandler::Init(unsigned long, unsigned long)+0x38>
         6bb24:	e2870004 	add	r0, r7, #4	; 0x4
         6bb28:	eb6de1c2 	bl	1be4238 <TAEvent::$__ct(void)>
         6bb2c:	e287001c 	add	r0, r7, #28	; 0x1c
         6bb30:	eb6de1c0 	bl	1be4238 <TAEvent::$__ct(void)>
         6bb34:	e5847014 	str	r7, [r4, #20]	; fField20
         6bb38:	e3370000 	teq	r7, #0	; 0x0
         6bb3c:	03a000e9 	moveq	r0, #233	; 0xe9
         6bb40:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         6bb44:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         6bb48:	eb6d9fa1 	bl	1bd39d4 <$GetGlobals>
         6bb4c:	eb6df23a 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         6bb50:	e5901000 	ldr	r1, [r0]
         6bb54:	e5940014 	ldr	r0, [r4, #20]	; fField20
         6bb58:	eb667654 	bl	1a094b0 <TICHandler::$Init(unsigned long)>
         6bb5c:	e3300000 	teq	r0, #0	; 0x0
         6bb60:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         6bb64:	e1a02005 	mov	r2, r5
         6bb68:	e1a01006 	mov	r1, r6
         6bb6c:	e1a00004 	mov	r0, r4
         6bb70:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         6bb74:	ea6df64d 	b	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0006bb78
 */
TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         6bb78:	e1a0c00d 	mov	ip, sp
         6bb7c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6bb80:	e24cb004 	sub	fp, ip, #4	; 0x4
         6bb84:	e1a04000 	mov	r4, r0
         6bb88:	e1a05001 	mov	r5, r1
         6bb8c:	e1a06003 	mov	r6, r3
         6bb90:	eb6d9f8f 	bl	1bd39d4 <$GetGlobals>
         6bb94:	e3a01010 	mov	r1, #16	; 0x10
         6bb98:	eb6de9e0 	bl	1be6320 <TAppWorld::$AESetReply(unsigned long)>
         6bb9c:	e5960008 	ldr	r0, [r6, #8]	; fField8
         6bba0:	e3500009 	cmp	r0, #9	; 0x9
         6bba4:	908ff100 	addls	pc, pc, r0, lsl #2
         6bba8:	ea00003d 	b	6bca4 <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x12c>
         6bbac:	ea00003c 	b	6bca4 <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x12c>
         6bbb0:	ea000015 	b	6bc0c <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x94>
         6bbb4:	ea000014 	b	6bc0c <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x94>
         6bbb8:	ea000039 	b	6bca4 <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x12c>
         6bbbc:	ea000017 	b	6bc20 <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xa8>
         6bbc0:	ea00001a 	b	6bc30 <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xb8>
         6bbc4:	ea000020 	b	6bc4c <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xd4>
         6bbc8:	ea00002c 	b	6bc80 <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x108>
         6bbcc:	ea00002f 	b	6bc90 <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x118>
         6bbd0:	e5960010 	ldr	r0, [r6, #16]	; fField16
         6bbd4:	e5840018 	str	r0, [r4, #24]	; fField24
         6bbd8:	e1a01000 	mov	r1, r0
         6bbdc:	e3300001 	teq	r0, #1	; 0x1
         6bbe0:	1a000006 	bne	6bc00 <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x88>
         6bbe4:	eb6d9f7a 	bl	1bd39d4 <$GetGlobals>
         6bbe8:	e3a01012 	mov	r1, #18	; 0x12
         6bbec:	eb66762c 	bl	1a094a4 <TCMWorld::$SCPCheck(unsigned long)>
         6bbf0:	e1b05000 	movs	r5, r0
         6bbf4:	03a00001 	moveq	r0, #1	; 0x1
         6bbf8:	0a000011 	beq	6bc44 <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xcc>
         6bbfc:	e5941018 	ldr	r1, [r4, #24]	; fField24
         6bc00:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         6bc04:	eb66762a 	bl	1a094b4 <TICHandler::$Send(unsigned long)>
         6bc08:	ea000023 	b	6bc9c <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x124>
         6bc0c:	e1a02006 	mov	r2, r6
         6bc10:	e1a01005 	mov	r1, r5
         6bc14:	e1a00004 	mov	r0, r4
         6bc18:	eb666de4 	bl	1a073b0 <TCMEventHandler::$StartService(TUMsgToken *, TCMEvent *)>
         6bc1c:	ea00001e 	b	6bc9c <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x124>
         6bc20:	e1a01006 	mov	r1, r6
         6bc24:	e1a00004 	mov	r0, r4
         6bc28:	eb6669c0 	bl	1a06330 <TCMEventHandler::$GetLastDevice(TCMEvent *)>
         6bc2c:	ea00001a 	b	6bc9c <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x124>
         6bc30:	e1a01006 	mov	r1, r6
         6bc34:	e1a00004 	mov	r0, r4
         6bc38:	eb666dd8 	bl	1a073a0 <TCMEventHandler::$SetLastDevice(TCMEvent *)>
         6bc3c:	e1a05000 	mov	r5, r0
         6bc40:	e3a00000 	mov	r0, #0	; 0x0
         6bc44:	e5c4001c 	strb	r0, [r4, #28]
         6bc48:	ea000016 	b	6bca8 <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x130>
         6bc4c:	e1a04006 	mov	r4, r6
         6bc50:	e3a03010 	mov	r3, #16	; 0x10
         6bc54:	e1a02005 	mov	r2, r5
         6bc58:	e92d000c 	stmdb	sp!, {r2, r3}
         6bc5c:	eb6d9f5c 	bl	1bd39d4 <$GetGlobals>
         6bc60:	e5b42010 	ldr	r2, [r4, #16]!	; fField16
         6bc64:	e9b4000a 	ldmib	r4!, {r1, r3}
         6bc68:	eb66760e 	bl	1a094a8 <TCMWorld::$SCPLoad(unsigned long, unsigned long, unsigned long, TUMsgToken *, unsigned long)>
         6bc6c:	e28dd008 	add	sp, sp, #8	; 0x8
         6bc70:	e1a05000 	mov	r5, r0
         6bc74:	eb6d9f56 	bl	1bd39d4 <$GetGlobals>
         6bc78:	eb6de598 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
         6bc7c:	ea000009 	b	6bca8 <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x130>
         6bc80:	e1a01006 	mov	r1, r6
         6bc84:	e1a00004 	mov	r0, r4
         6bc88:	eb666dc5 	bl	1a073a4 <TCMEventHandler::$SetLastPackage(TCMEvent *)>
         6bc8c:	ea000002 	b	6bc9c <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x124>
         6bc90:	e1a01006 	mov	r1, r6
         6bc94:	e1a00004 	mov	r0, r4
         6bc98:	eb6669a5 	bl	1a06334 <TCMEventHandler::$GetLastPackage(TCMEvent *)>
         6bc9c:	e1a05000 	mov	r5, r0
         6bca0:	ea000000 	b	6bca8 <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x130>
         6bca4:	e59f5004 	ldr	r5, [pc, #4]	; 6bcb0 <TCMEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x138>
         6bca8:	e5a6500c 	str	r5, [r6, #12]!	; fField12
         6bcac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         6bcb0:	ffff9a6f 	swinv	0x00ff9a6f
    */
}

/**
 * Symbol: TCMEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0006bcb4
 */
TCMEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         6bcb4:	e1a0c00d 	mov	ip, sp
         6bcb8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         6bcbc:	e24cb004 	sub	fp, ip, #4	; 0x4
         6bcc0:	e1a06000 	mov	r6, r0
         6bcc4:	e1a07001 	mov	r7, r1
         6bcc8:	e1a05002 	mov	r5, r2
         6bccc:	e1a04003 	mov	r4, r3
         6bcd0:	e5930008 	ldr	r0, [r3, #8]	; fField8
         6bcd4:	e3300006 	teq	r0, #6	; 0x6
         6bcd8:	1a000016 	bne	6bd38 <TCMEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x84>
         6bcdc:	eb6d9f3c 	bl	1bd39d4 <$GetGlobals>
         6bce0:	e59000d8 	ldr	r0, [r0, #216]	; fField216
         6bce4:	eb666da7 	bl	1a07388 <TCMSCPAsyncMessage::$ReplyRPC(void)>
         6bce8:	eb6d9f39 	bl	1bd39d4 <$GetGlobals>
         6bcec:	e5b040d8 	ldr	r4, [r0, #216]!	; fField216
         6bcf0:	e3340000 	teq	r4, #0	; 0x0
         6bcf4:	0a000004 	beq	6bd0c <TCMEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)+0x58>
         6bcf8:	e1a00004 	mov	r0, r4
         6bcfc:	e3a01000 	mov	r1, #0	; 0x0
         6bd00:	eb6d8a82 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         6bd04:	e1a00004 	mov	r0, r4
         6bd08:	eb6d8674 	bl	1bcd6e0 <$__dl(void *)>
         6bd0c:	eb6d9f30 	bl	1bd39d4 <$GetGlobals>
         6bd10:	e3a01000 	mov	r1, #0	; 0x0
         6bd14:	e5a010d8 	str	r1, [r0, #216]!	; fField216
         6bd18:	e5d6001c 	ldrb	r0, [r6, #28]
         6bd1c:	e3300000 	teq	r0, #0	; 0x0
         6bd20:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         6bd24:	e5c6101c 	strb	r1, [r6, #28]
         6bd28:	e2866010 	add	r6, r6, #16	; 0x10
         6bd2c:	e9b60003 	ldmib	r6!, {r0, r1}
         6bd30:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         6bd34:	ea6675de 	b	1a094b4 <TICHandler::$Send(unsigned long)>
         6bd38:	eb6d9f25 	bl	1bd39d4 <$GetGlobals>
         6bd3c:	e1a01007 	mov	r1, r7
         6bd40:	eb666986 	bl	1a06360 <TCMWorld::$MatchPendingServiceMessage(TUMsgToken *)>
         6bd44:	e1b06000 	movs	r6, r0
         6bd48:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         6bd4c:	e5967000 	ldr	r7, [r6]
         6bd50:	eb6d9f1f 	bl	1bd39d4 <$GetGlobals>
         6bd54:	e1a01007 	mov	r1, r7
         6bd58:	eb666981 	bl	1a06364 <TCMWorld::$MatchPendingStartInfo(TCMService *)>
         6bd5c:	e1a07000 	mov	r7, r0
         6bd60:	e590002c 	ldr	r0, [r0, #44]	; fField44
         6bd64:	e3300000 	teq	r0, #0	; 0x0
         6bd68:	15961018 	ldrne	r1, [r6, #24]	; fField24
         6bd6c:	15911010 	ldrne	r1, [r1, #16]	; fField16
         6bd70:	15a01010 	strne	r1, [r0, #16]!	; fField16
         6bd74:	e287001c 	add	r0, r7, #28	; 0x1c
         6bd78:	e1a08000 	mov	r8, r0
         6bd7c:	e5961018 	ldr	r1, [r6, #24]	; fField24
         6bd80:	e5911010 	ldr	r1, [r1, #16]	; fField16
         6bd84:	eb6d3bec 	bl	1bbad3c <TServiceInfo::$SetPortId(unsigned long)>
         6bd88:	e1a03008 	mov	r3, r8
         6bd8c:	e5960000 	ldr	r0, [r6]
         6bd90:	e1a01004 	mov	r1, r4
         6bd94:	e5952000 	ldr	r2, [r5]
         6bd98:	eb666962 	bl	1a06328 <TCMService::$DoneStarting(TAEvent *, unsigned long, TServiceInfo *)>
         6bd9c:	e1a01000 	mov	r1, r0
         6bda0:	e1a00007 	mov	r0, r7
         6bda4:	eb66695a 	bl	1a06314 <TStartInfo::$Complete(long)>
         6bda8:	e1b00007 	movs	r0, r7
         6bdac:	13a01001 	movne	r1, #1	; 0x1
         6bdb0:	1b6e1f0c 	blne	1bf39e8 <TStartInfo::$__dt(void)>
         6bdb4:	e1a00006 	mov	r0, r6
         6bdb8:	e3a01001 	mov	r1, #1	; 0x1
         6bdbc:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         6bdc0:	ea66654c 	b	1a052f8 <TAsyncServiceMessage::$__dt(void)>
    */
}

/**
 * Symbol: TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)
 * Address: 0006bdc4
 */
TCMEventHandler::StartService(TUMsgToken *, TCMEvent *) {
    /*
         6bdc4:	e1a0c00d 	mov	ip, sp
         6bdc8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         6bdcc:	e24cb004 	sub	fp, ip, #4	; 0x4
         6bdd0:	e1a05001 	mov	r5, r1
         6bdd4:	e1a06002 	mov	r6, r2
         6bdd8:	e24dd004 	sub	sp, sp, #4	; 0x4
         6bddc:	e3a00000 	mov	r0, #0	; 0x0
         6bde0:	eb6e1eff 	bl	1bf39e4 <TStartInfo::$__ct(void)>
         6bde4:	e1b04000 	movs	r4, r0
         6bde8:	03a050e9 	moveq	r5, #233	; 0xe9
         6bdec:	02455b0a 	subeq	r5, r5, #10240	; 0x2800
         6bdf0:	0a000087 	beq	6c014 <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x250>
         6bdf4:	e1a02006 	mov	r2, r6
         6bdf8:	e1a01005 	mov	r1, r5
         6bdfc:	e1a00004 	mov	r0, r4
         6be00:	eb6e1ef9 	bl	1bf39ec <TStartInfo::$Init(TUMsgToken *, TCMEvent *)>
         6be04:	e1b05000 	movs	r5, r0
         6be08:	1a000081 	bne	6c014 <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x250>
         6be0c:	e24dd020 	sub	sp, sp, #32	; 0x20
         6be10:	e28d0004 	add	r0, sp, #4	; 0x4
         6be14:	e5941004 	ldr	r1, [r4, #4]
         6be18:	eb6d2736 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         6be1c:	e3a00000 	mov	r0, #0	; 0x0
         6be20:	e3a09000 	mov	r9, #0	; 0x0
         6be24:	e3a08000 	mov	r8, #0	; 0x0
         6be28:	e58d0000 	str	r0, [sp]
         6be2c:	e59f00b4 	ldr	r0, [pc, #b4]	; 6bee8 <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x124>
         6be30:	e284701c 	add	r7, r4, #28	; 0x1c
         6be34:	e58d0020 	str	r0, [sp, #32]
         6be38:	e28d0004 	add	r0, sp, #4	; 0x4
         6be3c:	eb6d2f68 	bl	1bb7be4 <TOptionIterator::$CurrentOption(void)>
         6be40:	e1b06000 	movs	r6, r0
         6be44:	0a000060 	beq	6bfcc <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x208>
         6be48:	e28d0004 	add	r0, sp, #4	; 0x4
         6be4c:	eb6d379e 	bl	1bb9ccc <TOptionIterator::$NextOption(void)>
         6be50:	e5960008 	ldr	r0, [r6, #8]	; fField8
         6be54:	e200143f 	and	r1, r0, #1056964608	; 0x3f000000
         6be58:	e3310301 	teq	r1, #67108864	; 0x4000000
         6be5c:	1a000056 	bne	6bfbc <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x1f8>
         6be60:	e2000102 	and	r0, r0, #-2147483648	; 0x80000000
         6be64:	e3300102 	teq	r0, #-2147483648	; 0x80000000
         6be68:	0a000053 	beq	6bfbc <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x1f8>
         6be6c:	e3a09001 	mov	r9, #1	; 0x1
         6be70:	e5960000 	ldr	r0, [r6]
         6be74:	e59fc070 	ldr	ip, [pc, #70]	; 6beec <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x128>
         6be78:	e130000c 	teq	r0, ip
         6be7c:	11a0a000 	movne	sl, r0
         6be80:	0584602c 	streq	r6, [r4, #44]	; fField44
         6be84:	0596a00c 	ldreq	sl, [r6, #12]	; fField12
         6be88:	e594002c 	ldr	r0, [r4, #44]	; fField44
         6be8c:	e3300000 	teq	r0, #0	; 0x0
         6be90:	15900010 	ldrne	r0, [r0, #16]	; fField16
         6be94:	13300000 	teqne	r0, #0	; 0x0
         6be98:	0a000014 	beq	6bef0 <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x12c>
         6be9c:	e1a01000 	mov	r1, r0
         6bea0:	e1a00007 	mov	r0, r7
         6bea4:	eb6d3ba4 	bl	1bbad3c <TServiceInfo::$SetPortId(unsigned long)>
         6bea8:	e594002c 	ldr	r0, [r4, #44]	; fField44
         6beac:	e5b0100c 	ldr	r1, [r0, #12]!	; fField12
         6beb0:	e1a00007 	mov	r0, r7
         6beb4:	eb6d3ba1 	bl	1bbad40 <TServiceInfo::$SetServiceId(unsigned long)>
         6beb8:	e594002c 	ldr	r0, [r4, #44]	; fField44
         6bebc:	e5901008 	ldr	r1, [r0, #8]	; fField8
         6bec0:	e3811102 	orr	r1, r1, #-2147483648	; 0x80000000
         6bec4:	e3a08001 	mov	r8, #1	; 0x1
         6bec8:	e5a01008 	str	r1, [r0, #8]!	; fField8
         6becc:	e1a00004 	mov	r0, r4
         6bed0:	e3a01000 	mov	r1, #0	; 0x0
         6bed4:	eb66690e 	bl	1a06314 <TStartInfo::$Complete(long)>
         6bed8:	e1b00004 	movs	r0, r4
         6bedc:	13a01001 	movne	r1, #1	; 0x1
         6bee0:	1b6e1ec0 	blne	1bf39e8 <TStartInfo::$__dt(void)>
         6bee4:	ea000034 	b	6bfbc <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x1f8>
         6bee8:	0c100b58 	ldceq	11, cr0, [r0], -#352
         6beec:	73696420 	cmnvc	r9, #536870912	; 0x20000000
         6bef0:	e1a0300a 	mov	r3, sl
         6bef4:	e92d0008 	stmdb	sp!, {r3}
         6bef8:	e59d0024 	ldr	r0, [sp, #36]
         6befc:	e5900000 	ldr	r0, [r0]
         6bf00:	e28f1f29 	add	r1, pc, #164	; 0xa4
         6bf04:	e59f30ac 	ldr	r3, [pc, #ac]	; 6bfb8 <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x1f4>
         6bf08:	e3a02000 	mov	r2, #0	; 0x0
         6bf0c:	eb0c6842 	bl	38601c <Satisfy__18TClassInfoRegistryCFPCcT1ClT3>
         6bf10:	e28dd004 	add	sp, sp, #4	; 0x4
         6bf14:	e3300000 	teq	r0, #0	; 0x0
         6bf18:	0a000027 	beq	6bfbc <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x1f8>
         6bf1c:	eb6dab16 	bl	1bd6b7c <TClassInfo::$New( const(void))>
         6bf20:	e3300000 	teq	r0, #0	; 0x0
         6bf24:	03a050e9 	moveq	r5, #233	; 0xe9
         6bf28:	02455b0a 	subeq	r5, r5, #10240	; 0x2800
         6bf2c:	0a000034 	beq	6c004 <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x240>
         6bf30:	e5840018 	str	r0, [r4, #24]	; fField24
         6bf34:	e5961008 	ldr	r1, [r6, #8]	; fField8
         6bf38:	e3811102 	orr	r1, r1, #-2147483648	; 0x80000000
         6bf3c:	e3a08001 	mov	r8, #1	; 0x1
         6bf40:	e1a03007 	mov	r3, r7
         6bf44:	e5a61008 	str	r1, [r6, #8]!	; fField8
         6bf48:	e1a0200a 	mov	r2, sl
         6bf4c:	e5941004 	ldr	r1, [r4, #4]
         6bf50:	eb6e1ea6 	bl	1bf39f0 <TCMService::$Start(TOptionArray *, unsigned long, TServiceInfo *)>
         6bf54:	e1a06000 	mov	r6, r0
         6bf58:	eb6d9e9d 	bl	1bd39d4 <$GetGlobals>
         6bf5c:	eb6de4df 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
         6bf60:	e3360001 	teq	r6, #1	; 0x1
         6bf64:	0a000014 	beq	6bfbc <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x1f8>
         6bf68:	e3360000 	teq	r6, #0	; 0x0
         6bf6c:	1a000003 	bne	6bf80 <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x1bc>
         6bf70:	e594002c 	ldr	r0, [r4, #44]	; fField44
         6bf74:	e3300000 	teq	r0, #0	; 0x0
         6bf78:	15b71004 	ldrne	r1, [r7, #4]!
         6bf7c:	15a01010 	strne	r1, [r0, #16]!	; fField16
         6bf80:	e1a01006 	mov	r1, r6
         6bf84:	e1a00004 	mov	r0, r4
         6bf88:	eb6668e1 	bl	1a06314 <TStartInfo::$Complete(long)>
         6bf8c:	e1b00004 	movs	r0, r4
         6bf90:	13a01001 	movne	r1, #1	; 0x1
         6bf94:	1b6e1e93 	blne	1bf39e8 <TStartInfo::$__dt(void)>
         6bf98:	e28d0004 	add	r0, sp, #4	; 0x4
         6bf9c:	e3a01000 	mov	r1, #0	; 0x0
         6bfa0:	eb6d2ae5 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         6bfa4:	e1a00006 	mov	r0, r6
         6bfa8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         6bfac:	54434d53 	strplb	r4, [r3], -#3411
         6bfb0:	65727669 	ldrvsb	r7, [r2, -#1641]!
         6bfb4:	63650000 	cmnvs	r5, #0	; 0x0
         6bfb8:	73657276 	cmnvc	r5, #1610612743	; 0x60000007
         6bfbc:	e59d0000 	ldr	r0, [sp]
         6bfc0:	e3300000 	teq	r0, #0	; 0x0
         6bfc4:	03390000 	teqeq	r9, #0	; 0x0
         6bfc8:	0affff9a 	beq	6be38 <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x74>
         6bfcc:	e3390000 	teq	r9, #0	; 0x0
         6bfd0:	1a000004 	bne	6bfe8 <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x224>
         6bfd4:	e3e05093 	mvn	r5, #147	; 0x93
         6bfd8:	e2455c65 	sub	r5, r5, #25856	; 0x6500
         6bfdc:	e1b00004 	movs	r0, r4
         6bfe0:	0a000007 	beq	6c004 <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x240>
         6bfe4:	ea000004 	b	6bffc <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x238>
         6bfe8:	e3380000 	teq	r8, #0	; 0x0
         6bfec:	1a000004 	bne	6c004 <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x240>
         6bff0:	e59f5024 	ldr	r5, [pc, #24]	; 6c01c <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x258>	; fField24
         6bff4:	e1b00004 	movs	r0, r4
         6bff8:	0a000001 	beq	6c004 <TCMEventHandler::StartService(TUMsgToken *, TCMEvent *)+0x240>
         6bffc:	e3a01001 	mov	r1, #1	; 0x1
         6c000:	eb6e1e78 	bl	1bf39e8 <TStartInfo::$__dt(void)>
         6c004:	e28d0004 	add	r0, sp, #4	; 0x4
         6c008:	e3a01000 	mov	r1, #0	; 0x0
         6c00c:	eb6d2aca 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         6c010:	e28dd020 	add	sp, sp, #32	; 0x20
         6c014:	e1a00005 	mov	r0, r5
         6c018:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         6c01c:	ffff9a6b 	swinv	0x00ff9a6b
    */
}

/**
 * Symbol: TCMEventHandler::GetLastDevice(TCMEvent *)
 * Address: 0006c020
 */
TCMEventHandler::GetLastDevice(TCMEvent *) {
    /*
         6c020:	e1a0c00d 	mov	ip, sp
         6c024:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6c028:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c02c:	e3a04000 	mov	r4, #0	; 0x0
         6c030:	e1a05001 	mov	r5, r1
         6c034:	eb6d9e66 	bl	1bd39d4 <$GetGlobals>
         6c038:	e3a01028 	mov	r1, #40	; 0x28
         6c03c:	eb6de8b7 	bl	1be6320 <TAppWorld::$AESetReply(unsigned long)>
         6c040:	eb6d9e63 	bl	1bd39d4 <$GetGlobals>
         6c044:	e59000cc 	ldr	r0, [r0, #204]	; fField204
         6c048:	e3300000 	teq	r0, #0	; 0x0
         6c04c:	03a04f9a 	moveq	r4, #616	; 0x268
         6c050:	02444b1a 	subeq	r4, r4, #26624	; 0x6800
         6c054:	0a000004 	beq	6c06c <TCMEventHandler::GetLastDevice(TCMEvent *)+0x4c>
         6c058:	e2855010 	add	r5, r5, #16	; 0x10
         6c05c:	eb6d9e5c 	bl	1bd39d4 <$GetGlobals>
         6c060:	e28000c0 	add	r0, r0, #192	; 0xc0
         6c064:	e890500f 	ldmia	r0, {r0, r1, r2, r3, ip, lr}
         6c068:	e885500f 	stmia	r5, {r0, r1, r2, r3, ip, lr}
         6c06c:	e1a00004 	mov	r0, r4
         6c070:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCMEventHandler::SetLastDevice(TCMEvent *)
 * Address: 0006c074
 */
TCMEventHandler::SetLastDevice(TCMEvent *) {
    /*
         6c074:	e1a0c00d 	mov	ip, sp
         6c078:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6c07c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c080:	e1a04001 	mov	r4, r1
         6c084:	eb6d9e52 	bl	1bd39d4 <$GetGlobals>
         6c088:	e2841010 	add	r1, r4, #16	; 0x10
         6c08c:	eb666cc2 	bl	1a0739c <TCMWorld::$SetDevice(TConnectedDevice *)>
         6c090:	e3a05000 	mov	r5, #0	; 0x0
         6c094:	e5a4500c 	str	r5, [r4, #12]!	; fField12
         6c098:	eb6d9e4d 	bl	1bd39d4 <$GetGlobals>
         6c09c:	e3a01010 	mov	r1, #16	; 0x10
         6c0a0:	eb6de89e 	bl	1be6320 <TAppWorld::$AESetReply(unsigned long)>
         6c0a4:	e1a00005 	mov	r0, r5
         6c0a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCMEventHandler::GetLastPackage(TCMEvent *)
 * Address: 0006c0ac
 */
TCMEventHandler::GetLastPackage(TCMEvent *) {
    /*
         6c0ac:	e1a0c00d 	mov	ip, sp
         6c0b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6c0b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c0b8:	e3a05000 	mov	r5, #0	; 0x0
         6c0bc:	e1a04001 	mov	r4, r1
         6c0c0:	eb6d9e43 	bl	1bd39d4 <$GetGlobals>
         6c0c4:	e3a01018 	mov	r1, #24	; 0x18
         6c0c8:	eb6de894 	bl	1be6320 <TAppWorld::$AESetReply(unsigned long)>
         6c0cc:	eb6d9e40 	bl	1bd39d4 <$GetGlobals>
         6c0d0:	e59000e0 	ldr	r0, [r0, #224]	; fField224
         6c0d4:	e3300000 	teq	r0, #0	; 0x0
         6c0d8:	03a05061 	moveq	r5, #97	; 0x61
         6c0dc:	02455c66 	subeq	r5, r5, #26112	; 0x6600
         6c0e0:	0a000005 	beq	6c0fc <TCMEventHandler::GetLastPackage(TCMEvent *)+0x50>
         6c0e4:	eb6d9e3a 	bl	1bd39d4 <$GetGlobals>
         6c0e8:	e59000e0 	ldr	r0, [r0, #224]	; fField224
         6c0ec:	e5840014 	str	r0, [r4, #20]	; fField20
         6c0f0:	eb6d9e37 	bl	1bd39d4 <$GetGlobals>
         6c0f4:	e59000dc 	ldr	r0, [r0, #220]	; fField220
         6c0f8:	e5a40010 	str	r0, [r4, #16]!	; fField16
         6c0fc:	e1a00005 	mov	r0, r5
         6c100:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCMEventHandler::SetLastPackage(TCMEvent *)
 * Address: 0006c104
 */
TCMEventHandler::SetLastPackage(TCMEvent *) {
    /*
         6c104:	e1a0c00d 	mov	ip, sp
         6c108:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         6c10c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c110:	e1a04001 	mov	r4, r1
         6c114:	e1a05001 	mov	r5, r1
         6c118:	eb6d9e2d 	bl	1bd39d4 <$GetGlobals>
         6c11c:	e5b52010 	ldr	r2, [r5, #16]!	; fField16
         6c120:	e5951004 	ldr	r1, [r5, #4]
         6c124:	eb666c9f 	bl	1a073a8 <TCMWorld::$SetLastPackage(unsigned long, unsigned long)>
         6c128:	e3a05000 	mov	r5, #0	; 0x0
         6c12c:	e5a4500c 	str	r5, [r4, #12]!	; fField12
         6c130:	eb6d9e27 	bl	1bd39d4 <$GetGlobals>
         6c134:	e3a01010 	mov	r1, #16	; 0x10
         6c138:	eb6de878 	bl	1be6320 <TAppWorld::$AESetReply(unsigned long)>
         6c13c:	e1a00005 	mov	r0, r5
         6c140:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCMEventHandler::__ct(void)
 * Address: 0006cb2c
 */
TCMEventHandler::TCMEventHandler(void) {
    /*
         6cb2c:	e1a0c00d 	mov	ip, sp
         6cb30:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6cb34:	e24cb004 	sub	fp, ip, #4	; 0x4
         6cb38:	e1b04000 	movs	r4, r0
         6cb3c:	1a000003 	bne	6cb50 <TCMEventHandler::__ct(void)+0x24>
         6cb40:	e3a00020 	mov	r0, #32	; 0x20
         6cb44:	eb6d86fb 	bl	1bce738 <$__nw(unsigned int)>
         6cb48:	e1b04000 	movs	r4, r0
         6cb4c:	0a000003 	beq	6cb60 <TCMEventHandler::__ct(void)+0x34>
         6cb50:	e1a00004 	mov	r0, r4
         6cb54:	eb6dddab 	bl	1be4208 <TAEventHandler::$__ct(void)>
         6cb58:	e59f0008 	ldr	r0, [pc, #8]	; 6cb68 <TCMEventHandler::__ct(void)+0x3c>	; fField8
         6cb5c:	e5840000 	str	r0, [r4]
         6cb60:	e1a00004 	mov	r0, r4
         6cb64:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         6cb68:	0001df8c 	andeq	sp, r1, ip, lsl #31
    */
}

