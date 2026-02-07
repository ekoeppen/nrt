#include "include/TCMSCPAsyncMessage.h"

/**
 * Symbol: TCMSCPAsyncMessage::__ct(void)
 * Address: 0006c144
 */
TCMSCPAsyncMessage::TCMSCPAsyncMessage(void) {
    /*
         6c144:	e1a0c00d 	mov	ip, sp
         6c148:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6c14c:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c150:	e1b04000 	movs	r4, r0
         6c154:	1a000003 	bne	6c168 <TCMSCPAsyncMessage::__ct(void)+0x24>
         6c158:	e3a00064 	mov	r0, #100	; 0x64
         6c15c:	eb6d8975 	bl	1bce738 <$__nw(unsigned int)>
         6c160:	e1b04000 	movs	r4, r0
         6c164:	0a00000b 	beq	6c198 <TCMSCPAsyncMessage::__ct(void)+0x54>
         6c168:	e1a00004 	mov	r0, r4
         6c16c:	eb6d854e 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         6c170:	e2840010 	add	r0, r4, #16	; 0x10
         6c174:	eb6de02f 	bl	1be4238 <TAEvent::$__ct(void)>
         6c178:	e2840030 	add	r0, r4, #48	; 0x30
         6c17c:	eb6de02d 	bl	1be4238 <TAEvent::$__ct(void)>
         6c180:	e3a00000 	mov	r0, #0	; 0x0
         6c184:	e5840054 	str	r0, [r4, #84]
         6c188:	e5840060 	str	r0, [r4, #96]
         6c18c:	e5840058 	str	r0, [r4, #88]
         6c190:	e584005c 	str	r0, [r4, #92]
         6c194:	e5c40050 	strb	r0, [r4, #80]	; fField80
         6c198:	e1a00004 	mov	r0, r4
         6c19c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCMSCPAsyncMessage::Init(unsigned long, TAEventHandler *)
 * Address: 0006c1a0
 */
TCMSCPAsyncMessage::Init(unsigned long, TAEventHandler *) {
    /*
         6c1a0:	e1a0c00d 	mov	ip, sp
         6c1a4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6c1a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c1ac:	e1a04000 	mov	r4, r0
         6c1b0:	e1a06001 	mov	r6, r1
         6c1b4:	e1a05002 	mov	r5, r2
         6c1b8:	e3a01001 	mov	r1, #1	; 0x1
         6c1bc:	eb6da634 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         6c1c0:	e3300000 	teq	r0, #0	; 0x0
         6c1c4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         6c1c8:	e1a01006 	mov	r1, r6
         6c1cc:	e1a00004 	mov	r0, r4
         6c1d0:	eb6dbeee 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
         6c1d4:	e3300000 	teq	r0, #0	; 0x0
         6c1d8:	01a01005 	moveq	r1, r5
         6c1dc:	01a00004 	moveq	r0, r4
         6c1e0:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         6c1e4:	0a6dc309 	beq	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
         6c1e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCMSCPAsyncMessage::SendRPC(TUPort *)
 * Address: 0006c28c
 */
TCMSCPAsyncMessage::SendRPC(TUPort *) {
    /*
         6c28c:	e1a0c00d 	mov	ip, sp
         6c290:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         6c294:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c298:	e1a0c000 	mov	ip, r0
         6c29c:	e1a0e001 	mov	lr, r1
         6c2a0:	e2804010 	add	r4, r0, #16	; 0x10
         6c2a4:	e2800030 	add	r0, r0, #48	; 0x30
         6c2a8:	e3a01020 	mov	r1, #32	; 0x20
         6c2ac:	e3a02000 	mov	r2, #0	; 0x0
         6c2b0:	e3a03000 	mov	r3, #0	; 0x0
         6c2b4:	e3a05000 	mov	r5, #0	; 0x0
         6c2b8:	e3a06000 	mov	r6, #0	; 0x0
         6c2bc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         6c2c0:	e1a03006 	mov	r3, r6
         6c2c4:	e3a02001 	mov	r2, #1	; 0x1
         6c2c8:	e1a01005 	mov	r1, r5
         6c2cc:	e3a00020 	mov	r0, #32	; 0x20
         6c2d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         6c2d4:	e1a03004 	mov	r3, r4
         6c2d8:	e92d0008 	stmdb	sp!, {r3}
         6c2dc:	e1a0000e 	mov	r0, lr
         6c2e0:	e3a03000 	mov	r3, #0	; 0x0
         6c2e4:	e49c1008 	ldr	r1, [ip], #8
         6c2e8:	e59c2000 	ldr	r2, [ip]
         6c2ec:	eb6dba96 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         6c2f0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCMSCPAsyncMessage::SetToken(TUMsgToken *)
 * Address: 0006c2f4
 */
TCMSCPAsyncMessage::SetToken(TUMsgToken *) {
    /*
         6c2f4:	e3310000 	teq	r1, #0	; 0x0
         6c2f8:	01a0f00e 	moveq	pc, lr
         6c2fc:	e2802054 	add	r2, r0, #84	; 0x54
         6c300:	e8b11008 	ldmia	r1!, {r3, ip}
         6c304:	e8a21008 	stmia	r2!, {r3, ip}
         6c308:	e8911008 	ldmia	r1, {r3, ip}
         6c30c:	e8821008 	stmia	r2, {r3, ip}
         6c310:	e3a01001 	mov	r1, #1	; 0x1
         6c314:	e5c01050 	strb	r1, [r0, #80]	; fField80
         6c318:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCMSCPAsyncMessage::ReplyRPC(void)
 * Address: 0006c31c
 */
TCMSCPAsyncMessage::ReplyRPC(void) {
    /*
         6c31c:	e1a0c00d 	mov	ip, sp
         6c320:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         6c324:	e24cb004 	sub	fp, ip, #4	; 0x4
         6c328:	e3a01000 	mov	r1, #0	; 0x0
         6c32c:	e5d02050 	ldrb	r2, [r0, #80]	; fField80
         6c330:	e3320000 	teq	r2, #0	; 0x0
         6c334:	0a000005 	beq	6c350 <TCMSCPAsyncMessage::ReplyRPC(void)+0x34>
         6c338:	e2801030 	add	r1, r0, #48	; 0x30
         6c33c:	e2800054 	add	r0, r0, #84	; 0x54
         6c340:	e3a03000 	mov	r3, #0	; 0x0
         6c344:	e3a02020 	mov	r2, #32	; 0x20
         6c348:	eb6db667 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
         6c34c:	e1a01000 	mov	r1, r0
         6c350:	e1a00001 	mov	r0, r1
         6c354:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

