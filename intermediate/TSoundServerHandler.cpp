#include "include/TSoundServerHandler.h"

/**
 * Symbol: TSoundServerHandler::Init(TSoundServer *)
 * Address: 001e7ef0
 */
TSoundServerHandler::Init(TSoundServer *) {
    /*
        1e7ef0:	e5801014 	str	r1, [r0, #20]	; fField20
        1e7ef4:	e59f2004 	ldr	r2, [pc, #4]	; 1e7f00 <TSoundServerHandler::Init(TSoundServer *)+0x10>
        1e7ef8:	e59f1004 	ldr	r1, [pc, #4]	; 1e7f04 <TSoundServerHandler::Init(TSoundServer *)+0x14>
        1e7efc:	ea68056b 	b	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        1e7f00:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1e7f04:	75736e64 	ldrvcb	r6, [r3, -#3684]!
    */
}

/**
 * Symbol: TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 001e7f08
 */
TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        1e7f08:	e1a0c00d 	mov	ip, sp
        1e7f0c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1e7f10:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e7f14:	e1a04000 	mov	r4, r0
        1e7f18:	e1a05001 	mov	r5, r1
        1e7f1c:	e1a06003 	mov	r6, r3
        1e7f20:	e5b3000c 	ldr	r0, [r3, #12]!
        1e7f24:	e3300004 	teq	r0, #4	; 0x4
        1e7f28:	1a000007 	bne	1e7f4c <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x44>
        1e7f2c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e7f30:	e5900070 	ldr	r0, [r0, #112]
        1e7f34:	e2800018 	add	r0, r0, #24	; 0x18
        1e7f38:	e3a01000 	mov	r1, #0	; 0x0
        1e7f3c:	eb0718b0 	bl	3ae204 <Swap>
        1e7f40:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        1e7f44:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        1e7f48:	ea664b83 	b	1b7ad5c <TSoundServer::$ScheduleOutputBuffer(void)>
        1e7f4c:	e3300005 	teq	r0, #5	; 0x5
        1e7f50:	1a000008 	bne	1e7f78 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x70>
        1e7f54:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e7f58:	e5900074 	ldr	r0, [r0, #116]
        1e7f5c:	e2800018 	add	r0, r0, #24	; 0x18
        1e7f60:	e3a01000 	mov	r1, #0	; 0x0
        1e7f64:	eb0718a6 	bl	3ae204 <Swap>
        1e7f68:	e1a01000 	mov	r1, r0
        1e7f6c:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        1e7f70:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        1e7f74:	ea666455 	b	1b810d0 <TSoundServer::$ScheduleInputBuffer(int)>
        1e7f78:	e3700001 	cmn	r0, #1	; 0x1
        1e7f7c:	05b40014 	ldreq	r0, [r4, #20]!	; fField20
        1e7f80:	091b6bf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        1e7f84:	0a67f8e7 	beq	1be6328 <TAppWorld::$AETerminateLoop(void)>
        1e7f88:	e24dd020 	sub	sp, sp, #32	; 0x20
        1e7f8c:	e1a0000d 	mov	r0, sp
        1e7f90:	eb67f0a8 	bl	1be4238 <TAEvent::$__ct(void)>
        1e7f94:	e59f009c 	ldr	r0, [pc, #9c]	; 1e8038 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x130>
        1e7f98:	e58d0000 	str	r0, [sp]
        1e7f9c:	e59f0098 	ldr	r0, [pc, #98]	; 1e803c <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x134>
        1e7fa0:	e3a09000 	mov	r9, #0	; 0x0
        1e7fa4:	e98d0201 	stmib	sp, {r0, r9}
        1e7fa8:	e58d900c 	str	r9, [sp, #12]
        1e7fac:	e58d9010 	str	r9, [sp, #16]
        1e7fb0:	e58d9014 	str	r9, [sp, #20]	; fField20
        1e7fb4:	e58d9018 	str	r9, [sp, #24]
        1e7fb8:	e3a07014 	mov	r7, #20	; 0x14
        1e7fbc:	e58d901c 	str	r9, [sp, #28]
        1e7fc0:	e5960008 	ldr	r0, [r6, #8]
        1e7fc4:	e58d0008 	str	r0, [sp, #8]
        1e7fc8:	e28d1008 	add	r1, sp, #8	; 0x8
        1e7fcc:	e596000c 	ldr	r0, [r6, #12]
        1e7fd0:	e59f8068 	ldr	r8, [pc, #68]	; 1e8040 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x138>
        1e7fd4:	e3500015 	cmp	r0, #21	; 0x15
        1e7fd8:	908ff100 	addls	pc, pc, r0, lsl #2
        1e7fdc:	ea00006d 	b	1e8198 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x290>
        1e7fe0:	ea00006c 	b	1e8198 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x290>
        1e7fe4:	ea000016 	b	1e8044 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x13c>
        1e7fe8:	ea00006a 	b	1e8198 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x290>
        1e7fec:	ea000069 	b	1e8198 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x290>
        1e7ff0:	ea000068 	b	1e8198 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x290>
        1e7ff4:	ea000067 	b	1e8198 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x290>
        1e7ff8:	ea000014 	b	1e8050 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x148>
        1e7ffc:	ea000017 	b	1e8060 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x158>
        1e8000:	ea000022 	b	1e8090 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x188>
        1e8004:	ea000025 	b	1e80a0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x198>
        1e8008:	ea000029 	b	1e80b4 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1ac>
        1e800c:	ea000030 	b	1e80d4 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1cc>
        1e8010:	ea000034 	b	1e80e8 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1e0>
        1e8014:	ea000039 	b	1e8100 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1f8>
        1e8018:	ea000044 	b	1e8130 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x228>
        1e801c:	ea000055 	b	1e8178 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x270>
        1e8020:	ea000046 	b	1e8140 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x238>
        1e8024:	ea000049 	b	1e8150 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x248>
        1e8028:	ea00004d 	b	1e8164 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x25c>
        1e802c:	ea00000f 	b	1e8070 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x168>
        1e8030:	ea000012 	b	1e8080 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x178>
        1e8034:	ea000053 	b	1e8188 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x280>
        1e8038:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1e803c:	75736e64 	ldrvcb	r6, [r3, -#3684]!
        1e8040:	0c101b10 	ldceq	11, cr1, [r0], -#64
        1e8044:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e8048:	eb664b4a 	bl	1b7ad78 <TSoundServer::$StopAll(void)>
        1e804c:	ea00005b 	b	1e81c0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2b8>
        1e8050:	e5b62010 	ldr	r2, [r6, #16]!
        1e8054:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e8058:	eb665fd0 	bl	1b7ffa0 <TSoundServer::$OpenOutputChannel(unsigned long *, unsigned long)>
        1e805c:	ea00004f 	b	1e81a0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x298>
        1e8060:	e5b62010 	ldr	r2, [r6, #16]!
        1e8064:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e8068:	eb665fce 	bl	1b7ffa8 <TSoundServer::$OpenInputChannel(unsigned long *, unsigned long)>
        1e806c:	ea00004b 	b	1e81a0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x298>
        1e8070:	e5b62010 	ldr	r2, [r6, #16]!
        1e8074:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e8078:	eb665fcf 	bl	1b7ffbc <TSoundServer::$OpenCompressorChannel(unsigned long *, unsigned long)>
        1e807c:	ea000047 	b	1e81a0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x298>
        1e8080:	e5b62010 	ldr	r2, [r6, #16]!
        1e8084:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e8088:	eb665fc8 	bl	1b7ffb0 <TSoundServer::$OpenDecompressorChannel(unsigned long *, unsigned long)>
        1e808c:	ea000043 	b	1e81a0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x298>
        1e8090:	e5b61008 	ldr	r1, [r6, #8]!
        1e8094:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e8098:	eb664b1d 	bl	1b7ad14 <TSoundServer::$CloseChannel(unsigned long)>
        1e809c:	ea00003f 	b	1e81a0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x298>
        1e80a0:	e5b61008 	ldr	r1, [r6, #8]!
        1e80a4:	e3a02000 	mov	r2, #0	; 0x0
        1e80a8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e80ac:	eb664b2d 	bl	1b7ad68 <TSoundServer::$StartChannel(unsigned long, TUMsgToken *)>
        1e80b0:	ea00003a 	b	1e81a0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x298>
        1e80b4:	e5b61008 	ldr	r1, [r6, #8]!
        1e80b8:	e1a02005 	mov	r2, r5
        1e80bc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e80c0:	eb664b28 	bl	1b7ad68 <TSoundServer::$StartChannel(unsigned long, TUMsgToken *)>
        1e80c4:	e58d000c 	str	r0, [sp, #12]
        1e80c8:	e3300000 	teq	r0, #0	; 0x0
        1e80cc:	0a00003b 	beq	1e81c0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2b8>
        1e80d0:	ea000033 	b	1e81a4 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x29c>
        1e80d4:	e5b61008 	ldr	r1, [r6, #8]!
        1e80d8:	e1a0200d 	mov	r2, sp
        1e80dc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e80e0:	eb664b18 	bl	1b7ad48 <TSoundServer::$PauseChannel(unsigned long, TUSoundNodeReply *)>
        1e80e4:	ea000003 	b	1e80f8 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1f0>
        1e80e8:	e5b61008 	ldr	r1, [r6, #8]!
        1e80ec:	e1a0200d 	mov	r2, sp
        1e80f0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e80f4:	eb664b20 	bl	1b7ad7c <TSoundServer::$StopChannel(unsigned long, TUSoundNodeReply *)>
        1e80f8:	e58d000c 	str	r0, [sp, #12]
        1e80fc:	ea000009 	b	1e8128 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x220>
        1e8100:	e1a02005 	mov	r2, r5
        1e8104:	e1a01006 	mov	r1, r6
        1e8108:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e810c:	eb664b11 	bl	1b7ad58 <TSoundServer::$ScheduleNode(TUSoundNodeRequest *, TUMsgToken *)>
        1e8110:	e58d000c 	str	r0, [sp, #12]
        1e8114:	e3300000 	teq	r0, #0	; 0x0
        1e8118:	0a000028 	beq	1e81c0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2b8>
        1e811c:	e5b60010 	ldr	r0, [r6, #16]!
        1e8120:	e58d0014 	str	r0, [sp, #20]	; fField20
        1e8124:	e58d9018 	str	r9, [sp, #24]
        1e8128:	e3a07020 	mov	r7, #32	; 0x20
        1e812c:	ea00001c 	b	1e81a4 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x29c>
        1e8130:	e1a01006 	mov	r1, r6
        1e8134:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e8138:	eb664af3 	bl	1b7ad0c <TSoundServer::$CancelNode(TUSoundNodeRequest *)>
        1e813c:	ea000017 	b	1e81a0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x298>
        1e8140:	e5b61010 	ldr	r1, [r6, #16]!
        1e8144:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e8148:	eb6663e2 	bl	1b810d8 <TSoundServer::$SetInputVolume(long)>
        1e814c:	ea000013 	b	1e81a0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x298>
        1e8150:	e5b61008 	ldr	r1, [r6, #8]!
        1e8154:	e5b62008 	ldr	r2, [r6, #8]!
        1e8158:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e815c:	eb6663de 	bl	1b810dc <TSoundServer::$SetInputDevice(unsigned long, long)>
        1e8160:	ea00000e 	b	1e81a0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x298>
        1e8164:	e5b61008 	ldr	r1, [r6, #8]!
        1e8168:	e5b62008 	ldr	r2, [r6, #8]!
        1e816c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e8170:	eb6663da 	bl	1b810e0 <TSoundServer::$SetOutputDevice(unsigned long, long)>
        1e8174:	ea000009 	b	1e81a0 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x298>
        1e8178:	e5b61010 	ldr	r1, [r6, #16]!
        1e817c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1e8180:	eb665f89 	bl	1b7ffac <TSoundServer::$SetOutputVolume(long)>
        1e8184:	e58d000c 	str	r0, [sp, #12]
        1e8188:	e5b80004 	ldr	r0, [r8, #4]!
        1e818c:	eb068414 	bl	3891e4 <PSoundDriver::OutputVolume(void)>
        1e8190:	e58d0010 	str	r0, [sp, #16]
        1e8194:	ea000002 	b	1e81a4 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x29c>
        1e8198:	e3a000ce 	mov	r0, #206	; 0xce
        1e819c:	e2400c76 	sub	r0, r0, #30208	; 0x7600
        1e81a0:	e58d000c 	str	r0, [sp, #12]
        1e81a4:	e1a0200d 	mov	r2, sp
        1e81a8:	e1a01007 	mov	r1, r7
        1e81ac:	e1a00004 	mov	r0, r4
        1e81b0:	eb681542 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
        1e81b4:	e1a00004 	mov	r0, r4
        1e81b8:	eb681124 	bl	1bec650 <TAEventHandler::$ReplyImmed(void)>
        1e81bc:	ea000001 	b	1e81c8 <TSoundServerHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2c0>
        1e81c0:	e1a00004 	mov	r0, r4
        1e81c4:	eb67fc80 	bl	1be73cc <TAEventHandler::$DeferReply(void)>
        1e81c8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSoundServerHandler::__ct(void)
 * Address: 001e99d0
 */
TSoundServerHandler::TSoundServerHandler(void) {
    /*
        1e99d0:	e1a0c00d 	mov	ip, sp
        1e99d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e99d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e99dc:	e1b04000 	movs	r4, r0
        1e99e0:	1a000003 	bne	1e99f4 <TSoundServerHandler::__ct(void)+0x24>
        1e99e4:	e3a00018 	mov	r0, #24	; 0x18
        1e99e8:	eb679352 	bl	1bce738 <$__nw(unsigned int)>
        1e99ec:	e1b04000 	movs	r4, r0
        1e99f0:	0a000005 	beq	1e9a0c <TSoundServerHandler::__ct(void)+0x3c>
        1e99f4:	e1a00004 	mov	r0, r4
        1e99f8:	eb67ea02 	bl	1be4208 <TAEventHandler::$__ct(void)>
        1e99fc:	e59f0010 	ldr	r0, [pc, #10]	; 1e9a14 <TSoundServerHandler::__ct(void)+0x44>
        1e9a00:	e5840000 	str	r0, [r4]
        1e9a04:	e3a00000 	mov	r0, #0	; 0x0
        1e9a08:	e5840014 	str	r0, [r4, #20]	; fField20
        1e9a0c:	e1a00004 	mov	r0, r4
        1e9a10:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1e9a14:	0001ee9c 	muleq	r1, ip, lr
    */
}

