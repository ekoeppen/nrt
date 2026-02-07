#include "include/TIrProbeTool.h"

/**
 * Symbol: TIrProbeTool::__ct(unsigned long)
 * Address: 000f6fe0
 */
TIrProbeTool::TIrProbeTool(unsigned long) {
    /*
         f6fe0:	e1a0c00d 	mov	ip, sp
         f6fe4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f6fe8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f6fec:	e1b04000 	movs	r4, r0
         f6ff0:	e1a05001 	mov	r5, r1
         f6ff4:	1a000004 	bne	f700c <TIrProbeTool::__ct(unsigned long)+0x2c>
         f6ff8:	e3a00f6f 	mov	r0, #444	; 0x1bc
         f6ffc:	e2800b01 	add	r0, r0, #1024	; 0x400
         f7000:	eb6b5dcc 	bl	1bce738 <$__nw(unsigned int)>
         f7004:	e1b04000 	movs	r4, r0
         f7008:	0a000015 	beq	f7064 <TIrProbeTool::__ct(unsigned long)+0x84>
         f700c:	e1a01005 	mov	r1, r5
         f7010:	e1a00004 	mov	r0, r4
         f7014:	eb64492e 	bl	1a094d4 <TAsyncSerTool::$__ct(unsigned long)>
         f7018:	e2840e4b 	add	r0, r4, #1200	; 0x4b0
         f701c:	eb6b1783 	bl	1bbce30 <TCMOSlowIRProtocolType::$__ct(void)>
         f7020:	e28400d8 	add	r0, r4, #216	; 0xd8
         f7024:	e2800b01 	add	r0, r0, #1024	; 0x400
         f7028:	eb6b599f 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         f702c:	e28400ec 	add	r0, r4, #236	; 0xec
         f7030:	e2800b01 	add	r0, r0, #1024	; 0x400
         f7034:	eb6bb47f 	bl	1be4238 <TAEvent::$__ct(void)>
         f7038:	e2840f5d 	add	r0, r4, #372	; 0x174
         f703c:	e2800b01 	add	r0, r0, #1024	; 0x400
         f7040:	eb6bb46f 	bl	1be4204 <CBufferSegment::$__ct(void)>
         f7044:	e2840f67 	add	r0, r4, #412	; 0x19c
         f7048:	e2800b01 	add	r0, r0, #1024	; 0x400
         f704c:	ebfff914 	bl	f54a4 <TIrLAPPutBuffer::__ct(void)>
         f7050:	e59f0014 	ldr	r0, [pc, #14]	; f706c <TIrProbeTool::__ct(unsigned long)+0x8c>
         f7054:	e5840000 	str	r0, [r4]
         f7058:	e3a00000 	mov	r0, #0	; 0x0
         f705c:	e584056c 	str	r0, [r4, #1388]	; fField1388
         f7060:	e58404c8 	str	r0, [r4, #1224]	; fField1224
         f7064:	e1a00004 	mov	r0, r4
         f7068:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f706c:	0001bb5c 	andeq	fp, r1, ip, asr fp
    */
}

/**
 * Symbol: TIrProbeTool::__dt(void)
 * Address: 000f7070
 */
TIrProbeTool::~TIrProbeTool(void) {
    /*
         f7070:	e1a0c00d 	mov	ip, sp
         f7074:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f7078:	e24cb004 	sub	fp, ip, #4	; 0x4
         f707c:	e1a04000 	mov	r4, r0
         f7080:	e1a05001 	mov	r5, r1
         f7084:	e59f0050 	ldr	r0, [pc, #50]	; f70dc <TIrProbeTool::__dt(void)+0x6c>
         f7088:	e5840000 	str	r0, [r4]
         f708c:	e2840f67 	add	r0, r4, #412	; 0x19c
         f7090:	e2800b01 	add	r0, r0, #1024	; 0x400
         f7094:	e3a01000 	mov	r1, #0	; 0x0
         f7098:	ebfff911 	bl	f54e4 <TIrLAPPutBuffer::__dt(void)>
         f709c:	e2840f5d 	add	r0, r4, #372	; 0x174
         f70a0:	e2800b01 	add	r0, r0, #1024	; 0x400
         f70a4:	e3a01000 	mov	r1, #0	; 0x0
         f70a8:	eb6bb46f 	bl	1be426c <CBufferSegment::$__dt(void)>
         f70ac:	e28400d8 	add	r0, r4, #216	; 0xd8
         f70b0:	e2800b01 	add	r0, r0, #1024	; 0x400
         f70b4:	e3a01000 	mov	r1, #0	; 0x0
         f70b8:	eb6b5d94 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         f70bc:	e1a00004 	mov	r0, r4
         f70c0:	e3a01000 	mov	r1, #0	; 0x0
         f70c4:	eb644d11 	bl	1a0a510 <TAsyncSerTool::$__dt(void)>
         f70c8:	e3150001 	tst	r5, #1	; 0x1
         f70cc:	11a00004 	movne	r0, r4
         f70d0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         f70d4:	1a6b5981 	bne	1bcd6e0 <$__dl(void *)>
         f70d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f70dc:	0001bb5c 	andeq	fp, r1, ip, asr fp
    */
}

/**
 * Symbol: TIrProbeTool::AddCurrentOptions(TOptionArray *)
 * Address: 000f70e0
 */
TIrProbeTool::AddCurrentOptions(TOptionArray *) {
    /*
         f70e0:	e1a0c00d 	mov	ip, sp
         f70e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f70e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f70ec:	e1a05000 	mov	r5, r0
         f70f0:	e1a04001 	mov	r4, r1
         f70f4:	e2802e4b 	add	r2, r0, #1200	; 0x4b0
         f70f8:	e5911000 	ldr	r1, [r1]
         f70fc:	e1a00004 	mov	r0, r4
         f7100:	eb6b0ae7 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         f7104:	e3300000 	teq	r0, #0	; 0x0
         f7108:	01a01004 	moveq	r1, r4
         f710c:	01a00005 	moveq	r0, r5
         f7110:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         f7114:	0a64511a 	beq	1a0b584 <TAsyncSerTool::$AddCurrentOptions(TOptionArray *)>
         f7118:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrProbeTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 000f711c
 */
TIrProbeTool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         f711c:	e59fc030 	ldr	ip, [pc, #30]	; f7154 <TIrProbeTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x38>
         f7120:	e132000c 	teq	r2, ip
         f7124:	1a64a3c9 	bne	1a20050 <TAsyncSerTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
         f7128:	e3330c01 	teq	r3, #256	; 0x100
         f712c:	13330c02 	teqne	r3, #512	; 0x200
         f7130:	03e00002 	mvneq	r0, #2	; 0x2
         f7134:	01a0f00e 	moveq	pc, lr
         f7138:	e3330b01 	teq	r3, #1024	; 0x400
         f713c:	13e00000 	mvnne	r0, #0	; 0x0
         f7140:	11a0f00e 	movne	pc, lr
         f7144:	e2802e4b 	add	r2, r0, #1200	; 0x4b0
         f7148:	e1a00001 	mov	r0, r1
         f714c:	e1a01002 	mov	r1, r2
         f7150:	ea6b029e 	b	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         f7154:	69727074 	ldmvsdb	r2!, {r2, r4, r5, r6, ip, sp, lr}^
    */
}

/**
 * Symbol: TIrProbeTool::OpenStart(TOptionArray *)
 * Address: 000f7158
 */
TIrProbeTool::OpenStart(TOptionArray *) {
    /*
         f7158:	ea6b23b5 	b	1bc0034 <TCommTool::$OpenStart(TOptionArray *)>
    */
}

/**
 * Symbol: TIrProbeTool::ConnectStart(void)
 * Address: 000f715c
 */
TIrProbeTool::ConnectStart(void) {
    /*
         f715c:	e1a0c00d 	mov	ip, sp
         f7160:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f7164:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7168:	e1a04000 	mov	r4, r0
         f716c:	e5901000 	ldr	r1, [r0]
         f7170:	e1a0e00f 	mov	lr, pc
         f7174:	e281fe15 	add	pc, r1, #336	; 0x150
         f7178:	e3300000 	teq	r0, #0	; 0x0
         f717c:	01a00004 	moveq	r0, r4
         f7180:	03a01006 	moveq	r1, #6	; 0x6
         f7184:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         f7188:	0a64fe69 	beq	1a36b34 <TIrProbeTool::$NextState(unsigned long)>
         f718c:	e1a01000 	mov	r1, r0
         f7190:	e1a00004 	mov	r0, r4
         f7194:	e5942000 	ldr	r2, [r4]
         f7198:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f719c:	e282f054 	add	pc, r2, #84	; 0x54
    */
}

/**
 * Symbol: TIrProbeTool::ListenStart(void)
 * Address: 000f71a0
 */
TIrProbeTool::ListenStart(void) {
    /*
         f71a0:	e1a0c00d 	mov	ip, sp
         f71a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f71a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f71ac:	e1a04000 	mov	r4, r0
         f71b0:	e5901000 	ldr	r1, [r0]
         f71b4:	e1a0e00f 	mov	lr, pc
         f71b8:	e281fe15 	add	pc, r1, #336	; 0x150
         f71bc:	e3300000 	teq	r0, #0	; 0x0
         f71c0:	01a00004 	moveq	r0, r4
         f71c4:	03a01000 	moveq	r1, #0	; 0x0
         f71c8:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         f71cc:	0a64fe58 	beq	1a36b34 <TIrProbeTool::$NextState(unsigned long)>
         f71d0:	e1a01000 	mov	r1, r0
         f71d4:	e1a00004 	mov	r0, r4
         f71d8:	e5942000 	ldr	r2, [r4]
         f71dc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f71e0:	e282f05c 	add	pc, r2, #92	; 0x5c
    */
}

/**
 * Symbol: TIrProbeTool::TerminateConnection(void)
 * Address: 000f71e4
 */
TIrProbeTool::TerminateConnection(void) {
    /*
         f71e4:	e1a0c00d 	mov	ip, sp
         f71e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f71ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         f71f0:	e1a04000 	mov	r4, r0
         f71f4:	eb64fe43 	bl	1a36b08 <TIrProbeTool::$StopTimer(void)>
         f71f8:	e1a00004 	mov	r0, r4
         f71fc:	eb64fe47 	bl	1a36b20 <TIrProbeTool::$StopReceive(void)>
         f7200:	e1a00004 	mov	r0, r4
         f7204:	eb64fe42 	bl	1a36b14 <TIrProbeTool::$StopTransmit(void)>
         f7208:	e1a00004 	mov	r0, r4
         f720c:	e5941000 	ldr	r1, [r4]
         f7210:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f7214:	e281ff47 	add	pc, r1, #284	; 0x11c
    */
}

/**
 * Symbol: TIrProbeTool::TerminateComplete(void)
 * Address: 000f7218
 */
TIrProbeTool::TerminateComplete(void) {
    /*
         f7218:	ea6492e6 	b	1a1bdb8 <TSerTool::$TerminateComplete(void)>
    */
}

/**
 * Symbol: TIrProbeTool::StartTimer(unsigned long, int)
 * Address: 000f721c
 */
TIrProbeTool::StartTimer(unsigned long, int) {
    /*
         f721c:	e1a0c00d 	mov	ip, sp
         f7220:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f7224:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7228:	e1a04000 	mov	r4, r0
         f722c:	e58024f8 	str	r2, [r0, #1272]	; fField1272
         f7230:	e24dd010 	sub	sp, sp, #16	; 0x10
         f7234:	e1a0000d 	mov	r0, sp
         f7238:	eb6b9b14 	bl	1bdde90 <$TimeFromNow>
         f723c:	e28d0008 	add	r0, sp, #8	; 0x8
         f7240:	e89d5000 	ldmia	sp, {ip, lr}
         f7244:	e8805000 	stmia	r0, {ip, lr}
         f7248:	e284c08c 	add	ip, r4, #140	; 0x8c
         f724c:	e284e0d8 	add	lr, r4, #216	; 0xd8
         f7250:	e28eeb01 	add	lr, lr, #1024	; 0x400
         f7254:	e28440ec 	add	r4, r4, #236	; 0xec
         f7258:	e2844b01 	add	r4, r4, #1024	; 0x400
         f725c:	e3a02000 	mov	r2, #0	; 0x0
         f7260:	e28d3008 	add	r3, sp, #8	; 0x8
         f7264:	e3a05000 	mov	r5, #0	; 0x0
         f7268:	e3a01000 	mov	r1, #0	; 0x0
         f726c:	e3a00001 	mov	r0, #1	; 0x1
         f7270:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         f7274:	e1a03005 	mov	r3, r5
         f7278:	e3a02010 	mov	r2, #16	; 0x10
         f727c:	e92d000c 	stmdb	sp!, {r2, r3}
         f7280:	e1a03004 	mov	r3, r4
         f7284:	e1a0000c 	mov	r0, ip
         f7288:	e3a02000 	mov	r2, #0	; 0x0
         f728c:	e59e1000 	ldr	r1, [lr]
         f7290:	eb6b8eac 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
         f7294:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrProbeTool::StopTimer(void)
 * Address: 000f7298
 */
TIrProbeTool::StopTimer(void) {
    /*
         f7298:	e1a0c00d 	mov	ip, sp
         f729c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f72a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f72a4:	e1a04000 	mov	r4, r0
         f72a8:	e59004f8 	ldr	r0, [r0, #1272]	; fField1272
         f72ac:	e3300000 	teq	r0, #0	; 0x0
         f72b0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         f72b4:	e28400d8 	add	r0, r4, #216	; 0xd8
         f72b8:	e2800b01 	add	r0, r0, #1024	; 0x400
         f72bc:	eb6b5d22 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
         f72c0:	e3a00000 	mov	r0, #0	; 0x0
         f72c4:	e5a404f8 	str	r0, [r4, #1272]!	; fField1272
         f72c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrProbeTool::HandleRequest(TUMsgToken &, unsigned long)
 * Address: 000f72cc
 */
TIrProbeTool::HandleRequest(TUMsgToken &, unsigned long) {
    /*
         f72cc:	e5913000 	ldr	r3, [r1]
         f72d0:	e590c4e8 	ldr	ip, [r0, #1256]	; fField1256
         f72d4:	e13c0003 	teq	ip, r3
         f72d8:	1a646d9c 	bne	1a12950 <TSerTool::$HandleRequest(TUMsgToken &, unsigned long)>
         f72dc:	e3a02000 	mov	r2, #0	; 0x0
         f72e0:	e59014f8 	ldr	r1, [r0, #1272]	; fField1272
         f72e4:	e58024f8 	str	r2, [r0, #1272]	; fField1272
         f72e8:	ea64fe0e 	b	1a36b28 <TIrProbeTool::$TimerComplete(unsigned long)>
    */
}

/**
 * Symbol: TIrProbeTool::GetToolName(void)
 * Address: 000f72ec
 */
TIrProbeTool::GetToolName(void) {
    /*
         f72ec:	e28f0f00 	add	r0, pc, #0	; 0x0
         f72f0:	e1a0f00e 	mov	pc, lr
         f72f4:	49725072 	ldmmidb	r2!, {r1, r4, r5, r6, ip, lr}^
         f72f8:	6f626500 	swivs	0x00626500
    */
}

/**
 * Symbol: TIrProbeTool::StartTransmit(void)
 * Address: 000f72fc
 */
TIrProbeTool::StartTransmit(void) {
    /*
         f72fc:	e1a0c00d 	mov	ip, sp
         f7300:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f7304:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7308:	e1a04000 	mov	r4, r0
         f730c:	e590030c 	ldr	r0, [r0, #780]	; fField780
         f7310:	e3100040 	tst	r0, #64	; 0x40
         f7314:	13a01001 	movne	r1, #1	; 0x1
         f7318:	15940304 	ldrne	r0, [r4, #772]	; fField772
         f731c:	1b0a366f 	blne	384ce0 <TSerialChip::ConfigureForOutput(unsigned char)>
         f7320:	e1a00004 	mov	r0, r4
         f7324:	eb646546 	bl	1a10844 <TAsyncSerTool::$FlushOutputBytes(void)>
         f7328:	e59404c8 	ldr	r0, [r4, #1224]	; fField1224
         f732c:	e3300001 	teq	r0, #1	; 0x1
         f7330:	1a000005 	bne	f734c <TIrProbeTool::StartTransmit(void)+0x50>
         f7334:	e2841f67 	add	r1, r4, #412	; 0x19c
         f7338:	e2811b01 	add	r1, r1, #1024	; 0x400
         f733c:	e3a0200a 	mov	r2, #10	; 0xa
         f7340:	e594056c 	ldr	r0, [r4, #1388]	; fField1388
         f7344:	eb65021e 	bl	1a37bc4 <TIrSIR::$StartTransmit(TIrLAPPutBuffer *, unsigned long)>
         f7348:	ea000007 	b	f736c <TIrProbeTool::StartTransmit(void)+0x70>
         f734c:	e3a00000 	mov	r0, #0	; 0x0
         f7350:	e5840550 	str	r0, [r4, #1360]	; fField1360
         f7354:	e594154c 	ldr	r1, [r4, #1356]	; fField1356
         f7358:	e2811005 	add	r1, r1, #5	; 0x5
         f735c:	e58404fc 	str	r0, [r4, #1276]	; fField1276
         f7360:	e584154c 	str	r1, [r4, #1356]	; fField1356
         f7364:	e594153c 	ldr	r1, [r4, #1340]	; fField1340
         f7368:	e5c10004 	strb	r0, [r1, #4]
         f736c:	e1a00004 	mov	r0, r4
         f7370:	e5941000 	ldr	r1, [r4]
         f7374:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f7378:	e281fe17 	add	pc, r1, #368	; 0x170
    */
}

/**
 * Symbol: TIrProbeTool::StopTransmit(void)
 * Address: 000f737c
 */
TIrProbeTool::StopTransmit(void) {
    /*
         f737c:	e5901498 	ldr	r1, [r0, #1176]	; fField1176
         f7380:	e3c11202 	bic	r1, r1, #536870912	; 0x20000000
         f7384:	e5801498 	str	r1, [r0, #1176]	; fField1176
         f7388:	e590130c 	ldr	r1, [r0, #780]	; fField780
         f738c:	e3110040 	tst	r1, #64	; 0x40
         f7390:	15900304 	ldrne	r0, [r0, #772]	; fField772
         f7394:	13a01000 	movne	r1, #0	; 0x0
         f7398:	1a0a3650 	bne	384ce0 <TSerialChip::ConfigureForOutput(unsigned char)>
         f739c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrProbeTool::DoOutput(void)
 * Address: 000f73a0
 */
TIrProbeTool::DoOutput(void) {
    /*
         f73a0:	e1a0c00d 	mov	ip, sp
         f73a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f73a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f73ac:	e1a04000 	mov	r4, r0
         f73b0:	e59004c8 	ldr	r0, [r0, #1224]	; fField1224
         f73b4:	e3300001 	teq	r0, #1	; 0x1
         f73b8:	1a000002 	bne	f73c8 <TIrProbeTool::DoOutput(void)+0x28>
         f73bc:	e594056c 	ldr	r0, [r4, #1388]	; fField1388
         f73c0:	eb650200 	bl	1a37bc8 <TIrSIR::$FillOutputBuffer(void)>
         f73c4:	ea000001 	b	f73d0 <TIrProbeTool::DoOutput(void)+0x30>
         f73c8:	e1a00004 	mov	r0, r4
         f73cc:	eb64fddb 	bl	1a36b40 <TIrProbeTool::$SharpFillOutputBuffer(void)>
         f73d0:	e3300001 	teq	r0, #1	; 0x1
         f73d4:	1a000006 	bne	f73f4 <TIrProbeTool::DoOutput(void)+0x54>
         f73d8:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
         f73dc:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
         f73e0:	e5840498 	str	r0, [r4, #1176]	; fField1176
         f73e4:	e1a00004 	mov	r0, r4
         f73e8:	e3a01001 	mov	r1, #1	; 0x1
         f73ec:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f73f0:	ea645cd7 	b	1a0e754 <TAsyncSerTool::$ContinueOutputST(unsigned char)>
         f73f4:	e1a00004 	mov	r0, r4
         f73f8:	eb64fdc5 	bl	1a36b14 <TIrProbeTool::$StopTransmit(void)>
         f73fc:	e1a00004 	mov	r0, r4
         f7400:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f7404:	ea64fdc8 	b	1a36b2c <TIrProbeTool::$OutputComplete(void)>
    */
}

/**
 * Symbol: TIrProbeTool::StartReceive(void)
 * Address: 000f7408
 */
TIrProbeTool::StartReceive(void) {
    /*
         f7408:	e1a0c00d 	mov	ip, sp
         f740c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f7410:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7414:	e1a04000 	mov	r4, r0
         f7418:	eb646508 	bl	1a10840 <TAsyncSerTool::$FlushInputBytes(void)>
         f741c:	e3a05000 	mov	r5, #0	; 0x0
         f7420:	e59404c8 	ldr	r0, [r4, #1224]	; fField1224
         f7424:	e3300001 	teq	r0, #1	; 0x1
         f7428:	13a00002 	movne	r0, #2	; 0x2
         f742c:	158404cc 	strne	r0, [r4, #1228]	; fField1228
         f7430:	058454cc 	streq	r5, [r4, #1228]	; fField1228
         f7434:	e2841f5d 	add	r1, r4, #372	; 0x174
         f7438:	e2811b01 	add	r1, r1, #1024	; 0x400
         f743c:	e3a03000 	mov	r3, #0	; 0x0
         f7440:	e3a0207f 	mov	r2, #127	; 0x7f
         f7444:	e594056c 	ldr	r0, [r4, #1388]	; fField1388
         f7448:	eb6501e0 	bl	1a37bd0 <TIrSIR::$StartReceive(CBufferSegment *, unsigned char, unsigned char)>
         f744c:	e5845540 	str	r5, [r4, #1344]	; fField1344
         f7450:	e1a00004 	mov	r0, r4
         f7454:	e5941000 	ldr	r1, [r4]
         f7458:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f745c:	e281ff5e 	add	pc, r1, #376	; 0x178
    */
}

/**
 * Symbol: TIrProbeTool::StopReceive(void)
 * Address: 000f7460
 */
TIrProbeTool::StopReceive(void) {
    /*
         f7460:	e5901498 	ldr	r1, [r0, #1176]	; fField1176
         f7464:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
         f7468:	e5a01498 	str	r1, [r0, #1176]!	; fField1176
         f746c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrProbeTool::DoInput(void)
 * Address: 000f7470
 */
TIrProbeTool::DoInput(void) {
    /*
         f7470:	e1a0c00d 	mov	ip, sp
         f7474:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f7478:	e24cb004 	sub	fp, ip, #4	; 0x4
         f747c:	e1a04000 	mov	r4, r0
         f7480:	e5900498 	ldr	r0, [r0, #1176]	; fField1176
         f7484:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
         f7488:	e5840498 	str	r0, [r4, #1176]	; fField1176
         f748c:	e1a00004 	mov	r0, r4
         f7490:	eb64ab1d 	bl	1a2210c <TAsyncSerTool::$SyncInputBuffer(void)>
         f7494:	e59404cc 	ldr	r0, [r4, #1228]	; fField1228
         f7498:	e3300000 	teq	r0, #0	; 0x0
         f749c:	1a000017 	bne	f7500 <TIrProbeTool::DoInput(void)+0x90>
         f74a0:	e2840feb 	add	r0, r4, #940	; 0x3ac
         f74a4:	eb6c3ba0 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
         f74a8:	e3500000 	cmp	r0, #0	; 0x0
         f74ac:	9a000013 	bls	f7500 <TIrProbeTool::DoInput(void)+0x90>
         f74b0:	e24dd010 	sub	sp, sp, #16	; 0x10
         f74b4:	e1a0000d 	mov	r0, sp
         f74b8:	ebffbb34 	bl	e6190 <THMOSerIRLinkConfig::__ct(void)>
         f74bc:	e3a00003 	mov	r0, #3	; 0x3
         f74c0:	e5cd000c 	strb	r0, [sp, #12]
         f74c4:	e3a05001 	mov	r5, #1	; 0x1
         f74c8:	e5cd500d 	strb	r5, [sp, #13]
         f74cc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         f74d0:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         f74d4:	e3800b01 	orr	r0, r0, #1024	; 0x400
         f74d8:	e58d0008 	str	r0, [sp, #8]	; fField8
         f74dc:	e1a0100d 	mov	r1, sp
         f74e0:	e5940304 	ldr	r0, [r4, #772]	; fField772
         f74e4:	eb0a35e8 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
         f74e8:	e5dd000e 	ldrb	r0, [sp, #14]
         f74ec:	e3100001 	tst	r0, #1	; 0x1
         f74f0:	03a00002 	moveq	r0, #2	; 0x2
         f74f4:	058404cc 	streq	r0, [r4, #1228]	; fField1228
         f74f8:	158454cc 	strne	r5, [r4, #1228]	; fField1228
         f74fc:	e28dd010 	add	sp, sp, #16	; 0x10
         f7500:	e59404cc 	ldr	r0, [r4, #1228]	; fField1228
         f7504:	e3300001 	teq	r0, #1	; 0x1
         f7508:	1a000002 	bne	f7518 <TIrProbeTool::DoInput(void)+0xa8>
         f750c:	e594056c 	ldr	r0, [r4, #1388]	; fField1388
         f7510:	eb6501af 	bl	1a37bd4 <TIrSIR::$EmptyInputBuffer(void)>
         f7514:	ea000001 	b	f7520 <TIrProbeTool::DoInput(void)+0xb0>
         f7518:	e1a00004 	mov	r0, r4
         f751c:	eb64fd88 	bl	1a36b44 <TIrProbeTool::$SharpEmptyInputBuffer(void)>
         f7520:	e3300001 	teq	r0, #1	; 0x1
         f7524:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f7528:	e1a00004 	mov	r0, r4
         f752c:	eb64fd7b 	bl	1a36b20 <TIrProbeTool::$StopReceive(void)>
         f7530:	e1a00004 	mov	r0, r4
         f7534:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         f7538:	ea64fd7c 	b	1a36b30 <TIrProbeTool::$InputComplete(void)>
    */
}

/**
 * Symbol: TIrProbeTool::TimerComplete(unsigned long)
 * Address: 000f753c
 */
TIrProbeTool::TimerComplete(unsigned long) {
    /*
         f753c:	ea64fd7c 	b	1a36b34 <TIrProbeTool::$NextState(unsigned long)>
    */
}

/**
 * Symbol: TIrProbeTool::OutputComplete(void)
 * Address: 000f7540
 */
TIrProbeTool::OutputComplete(void) {
    /*
         f7540:	e59014c4 	ldr	r1, [r0, #1220]	; fField1220
         f7544:	e3310000 	teq	r1, #0	; 0x0
         f7548:	03a01005 	moveq	r1, #5	; 0x5
         f754c:	0a000005 	beq	f7568 <TIrProbeTool::OutputComplete(void)+0x28>
         f7550:	e3310001 	teq	r1, #1	; 0x1
         f7554:	03a01008 	moveq	r1, #8	; 0x8
         f7558:	0a000002 	beq	f7568 <TIrProbeTool::OutputComplete(void)+0x28>
         f755c:	e3310002 	teq	r1, #2	; 0x2
         f7560:	11a0f00e 	movne	pc, lr
         f7564:	e3a0100e 	mov	r1, #14	; 0xe
         f7568:	ea64fd71 	b	1a36b34 <TIrProbeTool::$NextState(unsigned long)>
    */
}

/**
 * Symbol: TIrProbeTool::InputComplete(void)
 * Address: 000f756c
 */
TIrProbeTool::InputComplete(void) {
    /*
         f756c:	e59014c4 	ldr	r1, [r0, #1220]	; fField1220
         f7570:	e3310000 	teq	r1, #0	; 0x0
         f7574:	0a000005 	beq	f7590 <TIrProbeTool::InputComplete(void)+0x24>
         f7578:	e3310001 	teq	r1, #1	; 0x1
         f757c:	0a000008 	beq	f75a4 <TIrProbeTool::InputComplete(void)+0x38>
         f7580:	e3310002 	teq	r1, #2	; 0x2
         f7584:	03a01010 	moveq	r1, #16	; 0x10
         f7588:	0a000009 	beq	f75b4 <TIrProbeTool::InputComplete(void)+0x48>
         f758c:	e1a0f00e 	mov	pc, lr
         f7590:	e59014cc 	ldr	r1, [r0, #1228]	; fField1228
         f7594:	e3310001 	teq	r1, #1	; 0x1
         f7598:	13a01003 	movne	r1, #3	; 0x3
         f759c:	03a01004 	moveq	r1, #4	; 0x4
         f75a0:	ea000003 	b	f75b4 <TIrProbeTool::InputComplete(void)+0x48>
         f75a4:	e59014cc 	ldr	r1, [r0, #1228]	; fField1228
         f75a8:	e3310001 	teq	r1, #1	; 0x1
         f75ac:	13a0100a 	movne	r1, #10	; 0xa
         f75b0:	03a0100b 	moveq	r1, #11	; 0xb
         f75b4:	ea64fd5e 	b	1a36b34 <TIrProbeTool::$NextState(unsigned long)>
    */
}

/**
 * Symbol: TIrProbeTool::NextState(unsigned long)
 * Address: 000f75b8
 */
TIrProbeTool::NextState(unsigned long) {
    /*
         f75b8:	e1a0c00d 	mov	ip, sp
         f75bc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         f75c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f75c4:	e1a04000 	mov	r4, r0
         f75c8:	e1a00001 	mov	r0, r1
         f75cc:	e3a09008 	mov	r9, #8	; 0x8
         f75d0:	e3a08004 	mov	r8, #4	; 0x4
         f75d4:	e59f60bc 	ldr	r6, [pc, #bc]	; f7698 <TIrProbeTool::NextState(unsigned long)+0xe0>
         f75d8:	e3e05e47 	mvn	r5, #1136	; 0x470
         f75dc:	e2455a09 	sub	r5, r5, #36864	; 0x9000
         f75e0:	e59f10b4 	ldr	r1, [pc, #b4]	; f769c <TIrProbeTool::NextState(unsigned long)+0xe4>
         f75e4:	e3a0a0c7 	mov	sl, #199	; 0xc7
         f75e8:	e28aac03 	add	sl, sl, #768	; 0x300
         f75ec:	e3a07001 	mov	r7, #1	; 0x1
         f75f0:	e3500011 	cmp	r0, #17	; 0x11
         f75f4:	908ff100 	addls	pc, pc, r0, lsl #2
         f75f8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f75fc:	ea00001a 	b	f766c <TIrProbeTool::NextState(unsigned long)+0xb4>
         f7600:	ea000020 	b	f7688 <TIrProbeTool::NextState(unsigned long)+0xd0>
         f7604:	ea000053 	b	f7758 <TIrProbeTool::NextState(unsigned long)+0x1a0>
         f7608:	ea000031 	b	f76d4 <TIrProbeTool::NextState(unsigned long)+0x11c>
         f760c:	ea000023 	b	f76a0 <TIrProbeTool::NextState(unsigned long)+0xe8>
         f7610:	ea00002d 	b	f76cc <TIrProbeTool::NextState(unsigned long)+0x114>
         f7614:	ea00005a 	b	f7784 <TIrProbeTool::NextState(unsigned long)+0x1cc>
         f7618:	ea00005f 	b	f779c <TIrProbeTool::NextState(unsigned long)+0x1e4>
         f761c:	ea00008e 	b	f785c <TIrProbeTool::NextState(unsigned long)+0x2a4>
         f7620:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f7624:	ea000095 	b	f7880 <TIrProbeTool::NextState(unsigned long)+0x2c8>
         f7628:	ea0000a3 	b	f78bc <TIrProbeTool::NextState(unsigned long)+0x304>
         f762c:	ea0000e7 	b	f79d0 <TIrProbeTool::NextState(unsigned long)+0x418>
         f7630:	ea000064 	b	f77c8 <TIrProbeTool::NextState(unsigned long)+0x210>
         f7634:	ea00008b 	b	f7868 <TIrProbeTool::NextState(unsigned long)+0x2b0>
         f7638:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f763c:	ea0000b3 	b	f7910 <TIrProbeTool::NextState(unsigned long)+0x358>
         f7640:	e1a00004 	mov	r0, r4
         f7644:	eb64fd35 	bl	1a36b20 <TIrProbeTool::$StopReceive(void)>
         f7648:	e59404d0 	ldr	r0, [r4, #1232]	; fField1232
         f764c:	e2800001 	add	r0, r0, #1	; 0x1
         f7650:	e58404d0 	str	r0, [r4, #1232]	; fField1232
         f7654:	e130000a 	teq	r0, sl
         f7658:	1a0000ea 	bne	f7a08 <TIrProbeTool::NextState(unsigned long)+0x450>
         f765c:	e1a00004 	mov	r0, r4
         f7660:	e1a01005 	mov	r1, r5
         f7664:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f7668:	ea6b2688 	b	1bc1090 <TCommTool::$StartAbort(long)>
         f766c:	e3a05000 	mov	r5, #0	; 0x0
         f7670:	e5845568 	str	r5, [r4, #1384]	; fField1384
         f7674:	e58454d0 	str	r5, [r4, #1232]	; fField1232
         f7678:	e1a00004 	mov	r0, r4
         f767c:	e3a01001 	mov	r1, #1	; 0x1
         f7680:	eb64fd35 	bl	1a36b5c <TIrProbeTool::$SwitchIrLink(unsigned long)>
         f7684:	e58454c4 	str	r5, [r4, #1220]	; fField1220
         f7688:	e1a00004 	mov	r0, r4
         f768c:	e3a02002 	mov	r2, #2	; 0x2
         f7690:	e1a01006 	mov	r1, r6
         f7694:	ea000075 	b	f7870 <TIrProbeTool::NextState(unsigned long)+0x2b8>
         f7698:	001c1f38 	andeqs	r1, ip, r8, lsr pc
         f769c:	00059fd8 	ldreqd	r9, [r5], -r8
         f76a0:	e1a00004 	mov	r0, r4
         f76a4:	eb64fd17 	bl	1a36b08 <TIrProbeTool::$StopTimer(void)>
         f76a8:	e1a00004 	mov	r0, r4
         f76ac:	e3a02001 	mov	r2, #1	; 0x1
         f76b0:	e3e01000 	mvn	r1, #0	; 0x0
         f76b4:	eb64fd1f 	bl	1a36b38 <TIrProbeTool::$RecdIrDATestFrame(unsigned long, unsigned char)>
         f76b8:	e3300000 	teq	r0, #0	; 0x0
         f76bc:	159414fc 	ldrne	r1, [r4, #1276]	; fField1276
         f76c0:	11a00004 	movne	r0, r4
         f76c4:	13a02000 	movne	r2, #0	; 0x0
         f76c8:	1a00003c 	bne	f77c0 <TIrProbeTool::NextState(unsigned long)+0x208>
         f76cc:	e58494bc 	str	r9, [r4, #1212]	; fField1212
         f76d0:	ea00001b 	b	f7744 <TIrProbeTool::NextState(unsigned long)+0x18c>
         f76d4:	e1a00004 	mov	r0, r4
         f76d8:	eb64fd0a 	bl	1a36b08 <TIrProbeTool::$StopTimer(void)>
         f76dc:	e594053c 	ldr	r0, [r4, #1340]	; fField1340
         f76e0:	e5d01000 	ldrb	r1, [r0]
         f76e4:	e3310096 	teq	r1, #150	; 0x96
         f76e8:	1a000003 	bne	f76fc <TIrProbeTool::NextState(unsigned long)+0x144>
         f76ec:	e5d00002 	ldrb	r0, [r0, #2]
         f76f0:	e3300005 	teq	r0, #5	; 0x5
         f76f4:	1a00000d 	bne	f7730 <TIrProbeTool::NextState(unsigned long)+0x178>
         f76f8:	ea000006 	b	f7718 <TIrProbeTool::NextState(unsigned long)+0x160>
         f76fc:	e3310090 	teq	r1, #144	; 0x90
         f7700:	05d01001 	ldreqb	r1, [r0, #1]
         f7704:	03310085 	teqeq	r1, #133	; 0x85
         f7708:	1a000008 	bne	f7730 <TIrProbeTool::NextState(unsigned long)+0x178>
         f770c:	e5d00002 	ldrb	r0, [r0, #2]
         f7710:	e3100008 	tst	r0, #8	; 0x8
         f7714:	1a000002 	bne	f7724 <TIrProbeTool::NextState(unsigned long)+0x16c>
         f7718:	e5940568 	ldr	r0, [r4, #1384]	; fField1384
         f771c:	e2800001 	add	r0, r0, #1	; 0x1
         f7720:	e5840568 	str	r0, [r4, #1384]	; fField1384
         f7724:	e5940568 	ldr	r0, [r4, #1384]	; fField1384
         f7728:	e3500002 	cmp	r0, #2	; 0x2
         f772c:	2a000002 	bcs	f773c <TIrProbeTool::NextState(unsigned long)+0x184>
         f7730:	e1a00004 	mov	r0, r4
         f7734:	e3a01001 	mov	r1, #1	; 0x1
         f7738:	ea000073 	b	f790c <TIrProbeTool::NextState(unsigned long)+0x354>
         f773c:	e3a00007 	mov	r0, #7	; 0x7
         f7740:	e58404bc 	str	r0, [r4, #1212]	; fField1212
         f7744:	e1a00004 	mov	r0, r4
         f7748:	e3a01000 	mov	r1, #0	; 0x0
         f774c:	e5942000 	ldr	r2, [r4]
         f7750:	e282205c 	add	r2, r2, #92	; 0x5c
         f7754:	ea00008d 	b	f7990 <TIrProbeTool::NextState(unsigned long)+0x3d8>
         f7758:	e59404d0 	ldr	r0, [r4, #1232]	; fField1232
         f775c:	e2800001 	add	r0, r0, #1	; 0x1
         f7760:	e58404d0 	str	r0, [r4, #1232]	; fField1232
         f7764:	e33000f0 	teq	r0, #240	; 0xf0
         f7768:	e1a00004 	mov	r0, r4
         f776c:	13a02002 	movne	r2, #2	; 0x2
         f7770:	11a01006 	movne	r1, r6
         f7774:	191b6ff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f7778:	1a64fce1 	bne	1a36b04 <TIrProbeTool::$StartTimer(unsigned long, int)>
         f777c:	eb64fce7 	bl	1a36b20 <TIrProbeTool::$StopReceive(void)>
         f7780:	eaffffb5 	b	f765c <TIrProbeTool::NextState(unsigned long)+0xa4>
         f7784:	e3a00000 	mov	r0, #0	; 0x0
         f7788:	e58404d0 	str	r0, [r4, #1232]	; fField1232
         f778c:	e5840564 	str	r0, [r4, #1380]	; fField1380
         f7790:	e5840554 	str	r0, [r4, #1364]	; fField1364
         f7794:	e5847560 	str	r7, [r4, #1376]	; fField1376
         f7798:	e584855c 	str	r8, [r4, #1372]	; fField1372
         f779c:	e58474c4 	str	r7, [r4, #1220]	; fField1220
         f77a0:	e1a00004 	mov	r0, r4
         f77a4:	e3a01001 	mov	r1, #1	; 0x1
         f77a8:	eb64fceb 	bl	1a36b5c <TIrProbeTool::$SwitchIrLink(unsigned long)>
         f77ac:	e3a00000 	mov	r0, #0	; 0x0
         f77b0:	e5840558 	str	r0, [r4, #1368]	; fField1368
         f77b4:	e1a00004 	mov	r0, r4
         f77b8:	e3a02001 	mov	r2, #1	; 0x1
         f77bc:	e3e01000 	mvn	r1, #0	; 0x0
         f77c0:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f77c4:	ea64fcdc 	b	1a36b3c <TIrProbeTool::$SendIrDATestFrame(unsigned long, unsigned char)>
         f77c8:	e3a00002 	mov	r0, #2	; 0x2
         f77cc:	e58404c4 	str	r0, [r4, #1220]	; fField1220
         f77d0:	e1a00004 	mov	r0, r4
         f77d4:	e3a01002 	mov	r1, #2	; 0x2
         f77d8:	eb64fcdf 	bl	1a36b5c <TIrProbeTool::$SwitchIrLink(unsigned long)>
         f77dc:	e3a05000 	mov	r5, #0	; 0x0
         f77e0:	e5845554 	str	r5, [r4, #1364]	; fField1364
         f77e4:	e594053c 	ldr	r0, [r4, #1340]	; fField1340
         f77e8:	e2800005 	add	r0, r0, #5	; 0x5
         f77ec:	e3a02003 	mov	r2, #3	; 0x3
         f77f0:	e5941564 	ldr	r1, [r4, #1380]	; fField1380
         f77f4:	e3310002 	teq	r1, #2	; 0x2
         f77f8:	0a00000b 	beq	f782c <TIrProbeTool::NextState(unsigned long)+0x274>
         f77fc:	e3a01090 	mov	r1, #144	; 0x90
         f7800:	e5c01000 	strb	r1, [r0]
         f7804:	e3a01085 	mov	r1, #133	; 0x85
         f7808:	e5c01001 	strb	r1, [r0, #1]
         f780c:	e3a0300f 	mov	r3, #15	; 0xf
         f7810:	e5c03002 	strb	r3, [r0, #2]
         f7814:	e5c02003 	strb	r2, [r0, #3]
         f7818:	e584854c 	str	r8, [r4, #1356]	; fField1356
         f781c:	e5940564 	ldr	r0, [r4, #1380]	; fField1380
         f7820:	e2800001 	add	r0, r0, #1	; 0x1
         f7824:	e5840564 	str	r0, [r4, #1380]	; fField1380
         f7828:	ea000007 	b	f784c <TIrProbeTool::NextState(unsigned long)+0x294>
         f782c:	e3a01096 	mov	r1, #150	; 0x96
         f7830:	e5c01000 	strb	r1, [r0]
         f7834:	e3a01082 	mov	r1, #130	; 0x82
         f7838:	e5c01001 	strb	r1, [r0, #1]
         f783c:	e3a01005 	mov	r1, #5	; 0x5
         f7840:	e5c01002 	strb	r1, [r0, #2]
         f7844:	e584254c 	str	r2, [r4, #1356]	; fField1356
         f7848:	e5845564 	str	r5, [r4, #1380]	; fField1380
         f784c:	e5c414d4 	strb	r1, [r4, #1236]	; fField1236
         f7850:	e1a00004 	mov	r0, r4
         f7854:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f7858:	ea64fcac 	b	1a36b10 <TIrProbeTool::$StartTransmit(void)>
         f785c:	e1a00004 	mov	r0, r4
         f7860:	e3a0200c 	mov	r2, #12	; 0xc
         f7864:	ea000001 	b	f7870 <TIrProbeTool::NextState(unsigned long)+0x2b8>
         f7868:	e1a00004 	mov	r0, r4
         f786c:	e3a02011 	mov	r2, #17	; 0x11
         f7870:	eb64fca3 	bl	1a36b04 <TIrProbeTool::$StartTimer(unsigned long, int)>
         f7874:	e1a00004 	mov	r0, r4
         f7878:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f787c:	ea64fca6 	b	1a36b1c <TIrProbeTool::$StartReceive(void)>
         f7880:	e594053c 	ldr	r0, [r4, #1340]	; fField1340
         f7884:	e5d01000 	ldrb	r1, [r0]
         f7888:	e3310090 	teq	r1, #144	; 0x90
         f788c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f7890:	e5d01001 	ldrb	r1, [r0, #1]
         f7894:	e33100ff 	teq	r1, #255	; 0xff
         f7898:	15d00002 	ldrneb	r0, [r0, #2]
         f789c:	133000ff 	teqne	r0, #255	; 0xff
         f78a0:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f78a4:	e1a00004 	mov	r0, r4
         f78a8:	eb64fc96 	bl	1a36b08 <TIrProbeTool::$StopTimer(void)>
         f78ac:	e2844e56 	add	r4, r4, #1376	; 0x560
         f78b0:	e8040180 	stmda	r4, {r7, r8}
         f78b4:	e2444e56 	sub	r4, r4, #1376	; 0x560
         f78b8:	ea00003a 	b	f79a8 <TIrProbeTool::NextState(unsigned long)+0x3f0>
         f78bc:	e1a00004 	mov	r0, r4
         f78c0:	eb64fc90 	bl	1a36b08 <TIrProbeTool::$StopTimer(void)>
         f78c4:	e5941570 	ldr	r1, [r4, #1392]	; fField1392
         f78c8:	e1a00004 	mov	r0, r4
         f78cc:	e3a02000 	mov	r2, #0	; 0x0
         f78d0:	eb64fc98 	bl	1a36b38 <TIrProbeTool::$RecdIrDATestFrame(unsigned long, unsigned char)>
         f78d4:	e3300000 	teq	r0, #0	; 0x0
         f78d8:	158494bc 	strne	r9, [r4, #1212]	; fField1212
         f78dc:	1a000027 	bne	f7980 <TIrProbeTool::NextState(unsigned long)+0x3c8>
         f78e0:	e5940554 	ldr	r0, [r4, #1364]	; fField1364
         f78e4:	e2800001 	add	r0, r0, #1	; 0x1
         f78e8:	e5840554 	str	r0, [r4, #1364]	; fField1364
         f78ec:	e594155c 	ldr	r1, [r4, #1372]	; fField1372
         f78f0:	e1300001 	teq	r0, r1
         f78f4:	0a000002 	beq	f7904 <TIrProbeTool::NextState(unsigned long)+0x34c>
         f78f8:	e1a00004 	mov	r0, r4
         f78fc:	e3a01007 	mov	r1, #7	; 0x7
         f7900:	ea000001 	b	f790c <TIrProbeTool::NextState(unsigned long)+0x354>
         f7904:	e1a00004 	mov	r0, r4
         f7908:	e3a0100d 	mov	r1, #13	; 0xd
         f790c:	eaffff2c 	b	f75c4 <TIrProbeTool::NextState(unsigned long)+0xc>
         f7910:	e1a00004 	mov	r0, r4
         f7914:	eb64fc7b 	bl	1a36b08 <TIrProbeTool::$StopTimer(void)>
         f7918:	e594053c 	ldr	r0, [r4, #1340]	; fField1340
         f791c:	e5d01000 	ldrb	r1, [r0]
         f7920:	e3310096 	teq	r1, #150	; 0x96
         f7924:	1a00000b 	bne	f7958 <TIrProbeTool::NextState(unsigned long)+0x3a0>
         f7928:	e5d00002 	ldrb	r0, [r0, #2]
         f792c:	e3300016 	teq	r0, #22	; 0x16
         f7930:	058474bc 	streq	r7, [r4, #1212]	; fField1212
         f7934:	058474c0 	streq	r7, [r4, #1216]	; fField1216
         f7938:	0a000010 	beq	f7980 <TIrProbeTool::NextState(unsigned long)+0x3c8>
         f793c:	e5940558 	ldr	r0, [r4, #1368]	; fField1368
         f7940:	e2801001 	add	r1, r0, #1	; 0x1
         f7944:	e5841558 	str	r1, [r4, #1368]	; fField1368
         f7948:	e5940560 	ldr	r0, [r4, #1376]	; fField1376
         f794c:	e1310000 	teq	r1, r0
         f7950:	0affffe8 	beq	f78f8 <TIrProbeTool::NextState(unsigned long)+0x340>
         f7954:	eaffffea 	b	f7904 <TIrProbeTool::NextState(unsigned long)+0x34c>
         f7958:	e5d01001 	ldrb	r1, [r0, #1]
         f795c:	e3310086 	teq	r1, #134	; 0x86
         f7960:	1a00000c 	bne	f7998 <TIrProbeTool::NextState(unsigned long)+0x3e0>
         f7964:	e5d414d4 	ldrb	r1, [r4, #1236]	; fField1236
         f7968:	e3310005 	teq	r1, #5	; 0x5
         f796c:	0affffe4 	beq	f7904 <TIrProbeTool::NextState(unsigned long)+0x34c>
         f7970:	e5d01002 	ldrb	r1, [r0, #2]
         f7974:	e58414bc 	str	r1, [r4, #1212]	; fField1212
         f7978:	e5d00003 	ldrb	r0, [r0, #3]
         f797c:	e58404c0 	str	r0, [r4, #1216]	; fField1216
         f7980:	e1a00004 	mov	r0, r4
         f7984:	e3a01000 	mov	r1, #0	; 0x0
         f7988:	e5942000 	ldr	r2, [r4]
         f798c:	e2822054 	add	r2, r2, #84	; 0x54
         f7990:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         f7994:	e282f000 	add	pc, r2, #0	; 0x0
         f7998:	e33100ff 	teq	r1, #255	; 0xff
         f799c:	15d00002 	ldrneb	r0, [r0, #2]
         f79a0:	133000ff 	teqne	r0, #255	; 0xff
         f79a4:	1a000002 	bne	f79b4 <TIrProbeTool::NextState(unsigned long)+0x3fc>
         f79a8:	e3a00000 	mov	r0, #0	; 0x0
         f79ac:	e5840564 	str	r0, [r4, #1380]	; fField1380
         f79b0:	eaffffd3 	b	f7904 <TIrProbeTool::NextState(unsigned long)+0x34c>
         f79b4:	e5940558 	ldr	r0, [r4, #1368]	; fField1368
         f79b8:	e2800001 	add	r0, r0, #1	; 0x1
         f79bc:	e5840558 	str	r0, [r4, #1368]	; fField1368
         f79c0:	e5941560 	ldr	r1, [r4, #1376]	; fField1376
         f79c4:	e1300001 	teq	r0, r1
         f79c8:	0affffca 	beq	f78f8 <TIrProbeTool::NextState(unsigned long)+0x340>
         f79cc:	eaffffcc 	b	f7904 <TIrProbeTool::NextState(unsigned long)+0x34c>
         f79d0:	e1a00004 	mov	r0, r4
         f79d4:	eb64fc51 	bl	1a36b20 <TIrProbeTool::$StopReceive(void)>
         f79d8:	e59404d0 	ldr	r0, [r4, #1232]	; fField1232
         f79dc:	e2800001 	add	r0, r0, #1	; 0x1
         f79e0:	e58404d0 	str	r0, [r4, #1232]	; fField1232
         f79e4:	e130000a 	teq	r0, sl
         f79e8:	0affff1b 	beq	f765c <TIrProbeTool::NextState(unsigned long)+0xa4>
         f79ec:	e5940554 	ldr	r0, [r4, #1364]	; fField1364
         f79f0:	e2801001 	add	r1, r0, #1	; 0x1
         f79f4:	e5841554 	str	r1, [r4, #1364]	; fField1364
         f79f8:	e594055c 	ldr	r0, [r4, #1372]	; fField1372
         f79fc:	e1310000 	teq	r1, r0
         f7a00:	0affffbf 	beq	f7904 <TIrProbeTool::NextState(unsigned long)+0x34c>
         f7a04:	eaffffbb 	b	f78f8 <TIrProbeTool::NextState(unsigned long)+0x340>
         f7a08:	e5940558 	ldr	r0, [r4, #1368]	; fField1368
         f7a0c:	e2801001 	add	r1, r0, #1	; 0x1
         f7a10:	e5841558 	str	r1, [r4, #1368]	; fField1368
         f7a14:	e5940560 	ldr	r0, [r4, #1376]	; fField1376
         f7a18:	e1310000 	teq	r1, r0
         f7a1c:	0affffb5 	beq	f78f8 <TIrProbeTool::NextState(unsigned long)+0x340>
         f7a20:	eaffffb7 	b	f7904 <TIrProbeTool::NextState(unsigned long)+0x34c>
    */
}

/**
 * Symbol: TIrProbeTool::TaskConstructor(void)
 * Address: 000f7a24
 */
TIrProbeTool::TaskConstructor(void) {
    /*
         f7a24:	e1a0c00d 	mov	ip, sp
         f7a28:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         f7a2c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7a30:	e1a04000 	mov	r4, r0
         f7a34:	eb648ccc 	bl	1a1ad6c <TAsyncSerTool::$TaskConstructor(void)>
         f7a38:	e1b05000 	movs	r5, r0
         f7a3c:	1a000034 	bne	f7b14 <TIrProbeTool::TaskConstructor(void)+0xf0>
         f7a40:	e3a08000 	mov	r8, #0	; 0x0
         f7a44:	e58484bc 	str	r8, [r4, #1212]	; fField1212
         f7a48:	e3a00002 	mov	r0, #2	; 0x2
         f7a4c:	e5840300 	str	r0, [r4, #768]	; fField768
         f7a50:	e3e00000 	mvn	r0, #0	; 0x0
         f7a54:	e584027c 	str	r0, [r4, #636]	; fField636
         f7a58:	e58484c0 	str	r8, [r4, #1216]	; fField1216
         f7a5c:	e5840270 	str	r0, [r4, #624]	; fField624
         f7a60:	e1a00004 	mov	r0, r4
         f7a64:	e3a01a09 	mov	r1, #36864	; 0x9000
         f7a68:	e2411004 	sub	r1, r1, #4	; 0x4
         f7a6c:	eb64a592 	bl	1a210bc <TAsyncSerTool::$SetInputSendForIntDelay(unsigned long)>
         f7a70:	e28470fc 	add	r7, r4, #252	; 0xfc
         f7a74:	e2877b01 	add	r7, r7, #1024	; 0x400
         f7a78:	e584753c 	str	r7, [r4, #1340]	; fField1340
         f7a7c:	e2842fe1 	add	r2, r4, #900	; 0x384
         f7a80:	e2841feb 	add	r1, r4, #940	; 0x3ac
         f7a84:	e3a00000 	mov	r0, #0	; 0x0
         f7a88:	eb650045 	bl	1a37ba4 <TIrSIR::$__ct(TCircleBuf *, TCircleBuf *)>
         f7a8c:	e584056c 	str	r0, [r4, #1388]	; fField1388
         f7a90:	e3300000 	teq	r0, #0	; 0x0
         f7a94:	0a00001c 	beq	f7b0c <TIrProbeTool::TaskConstructor(void)+0xe8>
         f7a98:	e28400d8 	add	r0, r4, #216	; 0xd8
         f7a9c:	e2800b01 	add	r0, r0, #1024	; 0x400
         f7aa0:	e1a06000 	mov	r6, r0
         f7aa4:	e3a01001 	mov	r1, #1	; 0x1
         f7aa8:	eb6b77f9 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         f7aac:	e1b05000 	movs	r5, r0
         f7ab0:	1a000017 	bne	f7b14 <TIrProbeTool::TaskConstructor(void)+0xf0>
         f7ab4:	e5960000 	ldr	r0, [r6]
         f7ab8:	e58404e8 	str	r0, [r4, #1256]	; fField1256
         f7abc:	e59f0044 	ldr	r0, [pc, #44]	; f7b08 <TIrProbeTool::TaskConstructor(void)+0xe4>
         f7ac0:	e2844e4f 	add	r4, r4, #1264	; 0x4f0
         f7ac4:	e8840101 	stmia	r4, {r0, r8}
         f7ac8:	e3e03000 	mvn	r3, #0	; 0x0
         f7acc:	e3a02000 	mov	r2, #0	; 0x0
         f7ad0:	e5848008 	str	r8, [r4, #8]	; fField8
         f7ad4:	e2444e4f 	sub	r4, r4, #1264	; 0x4f0
         f7ad8:	e92d000c 	stmdb	sp!, {r2, r3}
         f7adc:	e1a01007 	mov	r1, r7
         f7ae0:	e2840f5d 	add	r0, r4, #372	; 0x174
         f7ae4:	e2800b01 	add	r0, r0, #1024	; 0x400
         f7ae8:	e3a03000 	mov	r3, #0	; 0x0
         f7aec:	e3a02040 	mov	r2, #64	; 0x40
         f7af0:	eb6bc66d 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         f7af4:	e28dd008 	add	sp, sp, #8	; 0x8
         f7af8:	e1b05000 	movs	r5, r0
         f7afc:	01a00008 	moveq	r0, r8
         f7b00:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         f7b04:	ea000002 	b	f7b14 <TIrProbeTool::TaskConstructor(void)+0xf0>
         f7b08:	736c6972 	cmnvc	ip, #1867776	; 0x1c8000
         f7b0c:	e3a050a8 	mov	r5, #168	; 0xa8
         f7b10:	e2455b07 	sub	r5, r5, #7168	; 0x1c00
         f7b14:	e1a00004 	mov	r0, r4
         f7b18:	e5941000 	ldr	r1, [r4]
         f7b1c:	e1a0e00f 	mov	lr, pc
         f7b20:	e281f00c 	add	pc, r1, #12	; 0xc
         f7b24:	e1a00005 	mov	r0, r5
         f7b28:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TIrProbeTool::RecdIrDATestFrame(unsigned long, unsigned char)
 * Address: 000f7b2c
 */
TIrProbeTool::RecdIrDATestFrame(unsigned long, unsigned char) {
    /*
         f7b2c:	e20230ff 	and	r3, r2, #255	; 0xff
         f7b30:	e590256c 	ldr	r2, [r0, #1388]	; fField1388
         f7b34:	e5d2c026 	ldrb	ip, [r2, #38]
         f7b38:	e38330fe 	orr	r3, r3, #254	; 0xfe
         f7b3c:	e13c0003 	teq	ip, r3
         f7b40:	05d22027 	ldreqb	r2, [r2, #39]
         f7b44:	033200f3 	teqeq	r2, #243	; 0xf3
         f7b48:	05900500 	ldreq	r0, [r0, #1280]	; fField1280
         f7b4c:	01300001 	teqeq	r0, r1
         f7b50:	13a00000 	movne	r0, #0	; 0x0
         f7b54:	03a00001 	moveq	r0, #1	; 0x1
         f7b58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrProbeTool::SendIrDATestFrame(unsigned long, unsigned char)
 * Address: 000f7b5c
 */
TIrProbeTool::SendIrDATestFrame(unsigned long, unsigned char) {
    /*
         f7b5c:	e1a0c00d 	mov	ip, sp
         f7b60:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f7b64:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7b68:	e1a04000 	mov	r4, r0
         f7b6c:	e20200ff 	and	r0, r2, #255	; 0xff
         f7b70:	e59f2050 	ldr	r2, [pc, #50]	; f7bc8 <TIrProbeTool::SendIrDATestFrame(unsigned long, unsigned char)+0x6c>
         f7b74:	e38000fe 	orr	r0, r0, #254	; 0xfe
         f7b78:	e5842570 	str	r2, [r4, #1392]	; fField1392
         f7b7c:	e594253c 	ldr	r2, [r4, #1340]	; fField1340
         f7b80:	e5c20002 	strb	r0, [r2, #2]
         f7b84:	e3a000f3 	mov	r0, #243	; 0xf3
         f7b88:	e594253c 	ldr	r2, [r4, #1340]	; fField1340
         f7b8c:	e5c20003 	strb	r0, [r2, #3]
         f7b90:	e5940570 	ldr	r0, [r4, #1392]	; fField1392
         f7b94:	e2844c05 	add	r4, r4, #1280	; 0x500
         f7b98:	e8840003 	stmia	r4, {r0, r1}
         f7b9c:	e2444c05 	sub	r4, r4, #1280	; 0x500
         f7ba0:	e594053c 	ldr	r0, [r4, #1340]	; fField1340
         f7ba4:	e2801002 	add	r1, r0, #2	; 0x2
         f7ba8:	e2840f67 	add	r0, r4, #412	; 0x19c
         f7bac:	e2800b01 	add	r0, r0, #1024	; 0x400
         f7bb0:	e3a03001 	mov	r3, #1	; 0x1
         f7bb4:	e3a0200a 	mov	r2, #10	; 0xa
         f7bb8:	eb64f3a9 	bl	1a34a64 <TIrLAPPutBuffer::$SetControlBuffer(unsigned char *, unsigned long, unsigned char)>
         f7bbc:	e1a00004 	mov	r0, r4
         f7bc0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         f7bc4:	ea64fbd1 	b	1a36b10 <TIrProbeTool::$StartTransmit(void)>
         f7bc8:	70726265 	rsbvcs	r6, r2, r5, ror #4
    */
}

/**
 * Symbol: TIrProbeTool::SharpFillOutputBuffer(void)
 * Address: 000f7bcc
 */
TIrProbeTool::SharpFillOutputBuffer(void) {
    /*
         f7bcc:	e1a0c00d 	mov	ip, sp
         f7bd0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f7bd4:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7bd8:	e1a04000 	mov	r4, r0
         f7bdc:	e3a00000 	mov	r0, #0	; 0x0
         f7be0:	e2842e55 	add	r2, r4, #1360	; 0x550
         f7be4:	e8120006 	ldmda	r2, {r1, r2}
         f7be8:	e1520001 	cmp	r2, r1
         f7bec:	291ba830 	ldmcsdb	fp, {r4, r5, fp, sp, pc}
         f7bf0:	2a00000d 	bcs	f7c2c <TIrProbeTool::SharpFillOutputBuffer(void)+0x60>
         f7bf4:	e2845fe1 	add	r5, r4, #900	; 0x384
         f7bf8:	e594053c 	ldr	r0, [r4, #1340]	; fField1340
         f7bfc:	e5941550 	ldr	r1, [r4, #1360]	; fField1360
         f7c00:	e7d01001 	ldrb	r1, [r0, r1]
         f7c04:	e1a00005 	mov	r0, r5
         f7c08:	eb6c4217 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         f7c0c:	e3300000 	teq	r0, #0	; 0x0
         f7c10:	1a000005 	bne	f7c2c <TIrProbeTool::SharpFillOutputBuffer(void)+0x60>
         f7c14:	e5940550 	ldr	r0, [r4, #1360]	; fField1360
         f7c18:	e2800001 	add	r0, r0, #1	; 0x1
         f7c1c:	e5840550 	str	r0, [r4, #1360]	; fField1360
         f7c20:	e594154c 	ldr	r1, [r4, #1356]	; fField1356
         f7c24:	e1500001 	cmp	r0, r1
         f7c28:	3afffff2 	bcc	f7bf8 <TIrProbeTool::SharpFillOutputBuffer(void)+0x2c>
         f7c2c:	e3a00001 	mov	r0, #1	; 0x1
         f7c30:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrProbeTool::SharpEmptyInputBuffer(void)
 * Address: 000f7c34
 */
TIrProbeTool::SharpEmptyInputBuffer(void) {
    /*
         f7c34:	e1a0c00d 	mov	ip, sp
         f7c38:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         f7c3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7c40:	e1a04000 	mov	r4, r0
         f7c44:	e24dd008 	sub	sp, sp, #8	; 0x8
         f7c48:	e2809feb 	add	r9, r0, #940	; 0x3ac
         f7c4c:	e3a08001 	mov	r8, #1	; 0x1
         f7c50:	e3a07002 	mov	r7, #2	; 0x2
         f7c54:	e3a06004 	mov	r6, #4	; 0x4
         f7c58:	e3a05000 	mov	r5, #0	; 0x0
         f7c5c:	e1a00009 	mov	r0, r9
         f7c60:	e1a0200d 	mov	r2, sp
         f7c64:	e28d1004 	add	r1, sp, #4	; 0x4
         f7c68:	eb6c39bf 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
         f7c6c:	e3300002 	teq	r0, #2	; 0x2
         f7c70:	1a000009 	bne	f7c9c <TIrProbeTool::SharpEmptyInputBuffer(void)+0x68>
         f7c74:	e5940540 	ldr	r0, [r4, #1344]	; fField1344
         f7c78:	e3300002 	teq	r0, #2	; 0x2
         f7c7c:	1a000004 	bne	f7c94 <TIrProbeTool::SharpEmptyInputBuffer(void)+0x60>
         f7c80:	e2844d15 	add	r4, r4, #1344	; 0x540
         f7c84:	e9b40003 	ldmib	r4!, {r0, r1}
         f7c88:	e1500001 	cmp	r0, r1
         f7c8c:	21a00005 	movcs	r0, r5
         f7c90:	2a000000 	bcs	f7c98 <TIrProbeTool::SharpEmptyInputBuffer(void)+0x64>
         f7c94:	e1a00008 	mov	r0, r8
         f7c98:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         f7c9c:	e3300001 	teq	r0, #1	; 0x1
         f7ca0:	1a000005 	bne	f7cbc <TIrProbeTool::SharpEmptyInputBuffer(void)+0x88>
         f7ca4:	e59404c8 	ldr	r0, [r4, #1224]	; fField1224
         f7ca8:	e3300002 	teq	r0, #2	; 0x2
         f7cac:	0affffea 	beq	f7c5c <TIrProbeTool::SharpEmptyInputBuffer(void)+0x28>
         f7cb0:	e59d0000 	ldr	r0, [sp]
         f7cb4:	e3300040 	teq	r0, #64	; 0x40
         f7cb8:	1affffe7 	bne	f7c5c <TIrProbeTool::SharpEmptyInputBuffer(void)+0x28>
         f7cbc:	e5940540 	ldr	r0, [r4, #1344]	; fField1344
         f7cc0:	e3300000 	teq	r0, #0	; 0x0
         f7cc4:	0a000004 	beq	f7cdc <TIrProbeTool::SharpEmptyInputBuffer(void)+0xa8>
         f7cc8:	e3300001 	teq	r0, #1	; 0x1
         f7ccc:	0a000008 	beq	f7cf4 <TIrProbeTool::SharpEmptyInputBuffer(void)+0xc0>
         f7cd0:	e3300002 	teq	r0, #2	; 0x2
         f7cd4:	1affffe0 	bne	f7c5c <TIrProbeTool::SharpEmptyInputBuffer(void)+0x28>
         f7cd8:	ea00000c 	b	f7d10 <TIrProbeTool::SharpEmptyInputBuffer(void)+0xdc>
         f7cdc:	e5dd0004 	ldrb	r0, [sp, #4]
         f7ce0:	e3300000 	teq	r0, #0	; 0x0
         f7ce4:	1affffdc 	bne	f7c5c <TIrProbeTool::SharpEmptyInputBuffer(void)+0x28>
         f7ce8:	e5845544 	str	r5, [r4, #1348]	; fField1348
         f7cec:	e5848540 	str	r8, [r4, #1344]	; fField1344
         f7cf0:	eaffffd9 	b	f7c5c <TIrProbeTool::SharpEmptyInputBuffer(void)+0x28>
         f7cf4:	e5dd0004 	ldrb	r0, [sp, #4]
         f7cf8:	e3300096 	teq	r0, #150	; 0x96
         f7cfc:	15dd0004 	ldrneb	r0, [sp, #4]
         f7d00:	13300090 	teqne	r0, #144	; 0x90
         f7d04:	1a000012 	bne	f7d54 <TIrProbeTool::SharpEmptyInputBuffer(void)+0x120>
         f7d08:	e5846548 	str	r6, [r4, #1352]	; fField1352
         f7d0c:	e5847540 	str	r7, [r4, #1344]	; fField1344
         f7d10:	e5940544 	ldr	r0, [r4, #1348]	; fField1348
         f7d14:	e3500040 	cmp	r0, #64	; 0x40
         f7d18:	2affffcf 	bcs	f7c5c <TIrProbeTool::SharpEmptyInputBuffer(void)+0x28>
         f7d1c:	e5940544 	ldr	r0, [r4, #1348]	; fField1348
         f7d20:	e3300001 	teq	r0, #1	; 0x1
         f7d24:	1a000004 	bne	f7d3c <TIrProbeTool::SharpEmptyInputBuffer(void)+0x108>
         f7d28:	e5dd1004 	ldrb	r1, [sp, #4]
         f7d2c:	e3310082 	teq	r1, #130	; 0x82
         f7d30:	13a01004 	movne	r1, #4	; 0x4
         f7d34:	03a01003 	moveq	r1, #3	; 0x3
         f7d38:	e5841548 	str	r1, [r4, #1352]	; fField1352
         f7d3c:	e5dd2004 	ldrb	r2, [sp, #4]
         f7d40:	e2801001 	add	r1, r0, #1	; 0x1
         f7d44:	e5841544 	str	r1, [r4, #1348]	; fField1348
         f7d48:	e594153c 	ldr	r1, [r4, #1340]	; fField1340
         f7d4c:	e7c12000 	strb	r2, [r1, r0]
         f7d50:	eaffffc1 	b	f7c5c <TIrProbeTool::SharpEmptyInputBuffer(void)+0x28>
         f7d54:	e5dd0004 	ldrb	r0, [sp, #4]
         f7d58:	e3300000 	teq	r0, #0	; 0x0
         f7d5c:	0affffbe 	beq	f7c5c <TIrProbeTool::SharpEmptyInputBuffer(void)+0x28>
         f7d60:	e5845540 	str	r5, [r4, #1344]	; fField1344
         f7d64:	eaffffbc 	b	f7c5c <TIrProbeTool::SharpEmptyInputBuffer(void)+0x28>
    */
}

/**
 * Symbol: TIrProbeTool::TaskDestructor(void)
 * Address: 000f7d68
 */
TIrProbeTool::TaskDestructor(void) {
    /*
         f7d68:	e1a0c00d 	mov	ip, sp
         f7d6c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f7d70:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7d74:	e1a04000 	mov	r4, r0
         f7d78:	eb649003 	bl	1a1bd8c <TAsyncSerTool::$TaskDestructor(void)>
         f7d7c:	e594056c 	ldr	r0, [r4, #1388]	; fField1388
         f7d80:	e3300000 	teq	r0, #0	; 0x0
         f7d84:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         f7d88:	e3a01001 	mov	r1, #1	; 0x1
         f7d8c:	e1a0e00f 	mov	lr, pc
         f7d90:	e590f000 	ldr	pc, [r0]
         f7d94:	e3a00000 	mov	r0, #0	; 0x0
         f7d98:	e5a4056c 	str	r0, [r4, #1388]!	; fField1388
         f7d9c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrProbeTool::GetSizeOf(void)
 * Address: 000f7da0
 */
TIrProbeTool::GetSizeOf(void) {
    /*
         f7da0:	e3a00f6f 	mov	r0, #444	; 0x1bc
         f7da4:	e2800b01 	add	r0, r0, #1024	; 0x400
         f7da8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrProbeTool::AllocateBuffers(void)
 * Address: 000f7dac
 */
TIrProbeTool::AllocateBuffers(void) {
    /*
         f7dac:	ea644e02 	b	1a0b5bc <TAsyncSerTool::$AllocateBuffers(void)>
    */
}

/**
 * Symbol: TIrProbeTool::SetSerialChipSelect(TCMOSerialHardware *)
 * Address: 000f7db0
 */
TIrProbeTool::SetSerialChipSelect(TCMOSerialHardware *) {
    /*
         f7db0:	e1a0c00d 	mov	ip, sp
         f7db4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f7db8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7dbc:	e1a04000 	mov	r4, r0
         f7dc0:	e1a05001 	mov	r5, r1
         f7dc4:	eb64a4bf 	bl	1a210c8 <TSerTool::$SetSerialChipSelect(TCMOSerialHardware *)>
         f7dc8:	e5941300 	ldr	r1, [r4, #768]	; fField768
         f7dcc:	e3310000 	teq	r1, #0	; 0x0
         f7dd0:	03a01002 	moveq	r1, #2	; 0x2
         f7dd4:	05a51014 	streq	r1, [r5, #20]!
         f7dd8:	05a41300 	streq	r1, [r4, #768]!	; fField768
         f7ddc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrProbeTool::SwitchIrLink(unsigned long)
 * Address: 000f7de0
 */
TIrProbeTool::SwitchIrLink(unsigned long) {
    /*
         f7de0:	e1a0c00d 	mov	ip, sp
         f7de4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f7de8:	e24cb004 	sub	fp, ip, #4	; 0x4
         f7dec:	e1a04000 	mov	r4, r0
         f7df0:	e1a05001 	mov	r5, r1
         f7df4:	e59004c8 	ldr	r0, [r0, #1224]	; fField1224
         f7df8:	e1300001 	teq	r0, r1
         f7dfc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f7e00:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         f7e04:	e28d001c 	add	r0, sp, #28	; 0x1c
         f7e08:	ebffb8e0 	bl	e6190 <THMOSerIRLinkConfig::__ct(void)>
         f7e0c:	e1a0000d 	mov	r0, sp
         f7e10:	eb6b0ff6 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
         f7e14:	e3a01001 	mov	r1, #1	; 0x1
         f7e18:	e3a00000 	mov	r0, #0	; 0x0
         f7e1c:	e3350001 	teq	r5, #1	; 0x1
         f7e20:	1a000004 	bne	f7e38 <TIrProbeTool::SwitchIrLink(unsigned long)+0x58>
         f7e24:	e58d0010 	str	r0, [sp, #16]
         f7e28:	e3a00002 	mov	r0, #2	; 0x2
         f7e2c:	e5cd0028 	strb	r0, [sp, #40]
         f7e30:	e5cd1029 	strb	r1, [sp, #41]
         f7e34:	ea000001 	b	f7e40 <TIrProbeTool::SwitchIrLink(unsigned long)+0x60>
         f7e38:	e58d1010 	str	r1, [sp, #16]
         f7e3c:	e5cd0028 	strb	r0, [sp, #40]
         f7e40:	e59d0024 	ldr	r0, [sp, #36]
         f7e44:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         f7e48:	e3800c02 	orr	r0, r0, #512	; 0x200
         f7e4c:	e58d0024 	str	r0, [sp, #36]
         f7e50:	e28d101c 	add	r1, sp, #28	; 0x1c
         f7e54:	e5940304 	ldr	r0, [r4, #772]	; fField772
         f7e58:	eb0a338b 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
         f7e5c:	e1a0100d 	mov	r1, sp
         f7e60:	e1a00004 	mov	r0, r4
         f7e64:	eb648793 	bl	1a19cb8 <TSerTool::$SetIOParms(TCMOSerialIOParms *)>
         f7e68:	e5a454c8 	str	r5, [r4, #1224]!	; fField1224
         f7e6c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrProbeTool::AddDefaultOptions(TOptionArray *)
 * Address: 000f7e70
 */
TIrProbeTool::AddDefaultOptions(TOptionArray *) {
    /*
         f7e70:	ea644dc7 	b	1a0b594 <TAsyncSerTool::$AddDefaultOptions(TOptionArray *)>
    */
}

