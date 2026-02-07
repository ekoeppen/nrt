#include "DDKIncludes/Packages/PartHandler.h"

/**
 * Symbol: TPartEventHandler::__ct(TPartHandler *)
 * Address: 00182044
 */
TPartEventHandler::TPartEventHandler(TPartHandler *) {
    /*
        182044:	e1a0c00d 	mov	ip, sp
        182048:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        18204c:	e24cb004 	sub	fp, ip, #4	; 0x4
        182050:	e1b04000 	movs	r4, r0
        182054:	e1a05001 	mov	r5, r1
        182058:	1a000003 	bne	18206c <TPartEventHandler::__ct(TPartHandler *)+0x28>
        18205c:	e3a00018 	mov	r0, #24	; 0x18
        182060:	eb6931b4 	bl	1bce738 <$__nw(unsigned int)>
        182064:	e1b04000 	movs	r4, r0
        182068:	0a000004 	beq	182080 <TPartEventHandler::__ct(TPartHandler *)+0x3c>
        18206c:	e1a00004 	mov	r0, r4
        182070:	eb698864 	bl	1be4208 <TAEventHandler::$__ct(void)>
        182074:	e59f000c 	ldr	r0, [pc, #c]	; 182088 <TPartEventHandler::__ct(TPartHandler *)+0x44>
        182078:	e5840000 	str	r0, [r4]
        18207c:	e5845014 	str	r5, [r4, #20]	; fField20
        182080:	e1a00004 	mov	r0, r4
        182084:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        182088:	0001e93c 	andeq	lr, r1, ip, lsr r9
    */
}

/**
 * Symbol: TPartEventHandler::AETestEvent(TAEvent *)
 * Address: 0018208c
 */
TPartEventHandler::AETestEvent(TAEvent *) {
    /*
        18208c:	e5912008 	ldr	r2, [r1, #8]
        182090:	e59fc034 	ldr	ip, [pc, #34]	; 1820cc <TPartEventHandler::AETestEvent(TAEvent *)+0x40>
        182094:	e132000c 	teq	r2, ip
        182098:	159fc030 	ldrne	ip, [pc, #30]	; 1820d0 <TPartEventHandler::AETestEvent(TAEvent *)+0x44>
        18209c:	1132000c 	teqne	r2, ip
        1820a0:	0a000016 	beq	182100 <TPartEventHandler::AETestEvent(TAEvent *)+0x74>
        1820a4:	e3a03001 	mov	r3, #1	; 0x1
        1820a8:	e59fc024 	ldr	ip, [pc, #24]	; 1820d4 <TPartEventHandler::AETestEvent(TAEvent *)+0x48>
        1820ac:	e132000c 	teq	r2, ip
        1820b0:	1a000008 	bne	1820d8 <TPartEventHandler::AETestEvent(TAEvent *)+0x4c>
        1820b4:	e591101c 	ldr	r1, [r1, #28]
        1820b8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1820bc:	e5900004 	ldr	r0, [r0, #4]	; TPartEventHandler
        1820c0:	e1310000 	teq	r1, r0
        1820c4:	1a00000d 	bne	182100 <TPartEventHandler::AETestEvent(TAEvent *)+0x74>
        1820c8:	ea000009 	b	1820f4 <TPartEventHandler::AETestEvent(TAEvent *)+0x68>
        1820cc:	706b626c 	rsbvc	r6, fp, ip, ror #4
        1820d0:	706b6275 	rsbvc	r6, fp, r5, ror r2
        1820d4:	70727469 	rsbvcs	r7, r2, r9, ror #8
        1820d8:	e59fc01c 	ldr	ip, [pc, #1c]	; 1820fc <TPartEventHandler::AETestEvent(TAEvent *)+0x70>
        1820dc:	e132000c 	teq	r2, ip
        1820e0:	0591101c 	ldreq	r1, [r1, #28]
        1820e4:	05900014 	ldreq	r0, [r0, #20]	; fField20
        1820e8:	05900004 	ldreq	r0, [r0, #4]	; TPartEventHandler
        1820ec:	01310000 	teqeq	r1, r0
        1820f0:	1a000002 	bne	182100 <TPartEventHandler::AETestEvent(TAEvent *)+0x74>
        1820f4:	e1a00003 	mov	r0, r3
        1820f8:	e1a0f00e 	mov	pc, lr
        1820fc:	70727472 	rsbvcs	r7, r2, r2, ror r4
        182100:	e3a00000 	mov	r0, #0	; 0x0
        182104:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPartEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00182108
 */
TPartEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        182108:	e5921000 	ldr	r1, [r2]
        18210c:	e3510010 	cmp	r1, #16	; 0x10
        182110:	31a0f00e 	movcc	pc, lr
        182114:	e5931008 	ldr	r1, [r3, #8]
        182118:	e59fc01c 	ldr	ip, [pc, #1c]	; 18213c <TPartEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x34>
        18211c:	e131000c 	teq	r1, ip
        182120:	0a000007 	beq	182144 <TPartEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x3c>
        182124:	e59fc014 	ldr	ip, [pc, #14]	; 182140 <TPartEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x38>
        182128:	e131000c 	teq	r1, ip
        18212c:	05900014 	ldreq	r0, [r0, #20]	; fField20
        182130:	01a01003 	moveq	r1, r3
        182134:	0a695ee2 	beq	1bd9cc4 <TPartHandler::$Remove(TPkPartRemoveEvent *)>
        182138:	e1a0f00e 	mov	pc, lr
        18213c:	70727469 	rsbvcs	r7, r2, r9, ror #8
        182140:	70727472 	rsbvcs	r7, r2, r2, ror r4
        182144:	e1a01003 	mov	r1, r3
        182148:	e2832094 	add	r2, r3, #148	; 0x94
        18214c:	e583202c 	str	r2, [r3, #44]
        182150:	e5d3203a 	ldrb	r2, [r3, #58]
        182154:	e3320000 	teq	r2, #0	; 0x0
        182158:	028f2f03 	addeq	r2, pc, #12	; 0xc
        18215c:	128120d4 	addne	r2, r1, #212	; 0xd4
        182160:	e5812030 	str	r2, [r1, #48]
        182164:	e5900014 	ldr	r0, [r0, #20]	; fField20
        182168:	ea694e5d 	b	1bd5ae4 <TPartHandler::$Install(TPkPartInstallEvent *)>
        18216c:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPartEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00182170
 */
TPartEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        182170:	e1a0f00e 	mov	pc, lr
    */
}

