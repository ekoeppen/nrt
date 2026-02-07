#include "DDKIncludes/Communications/CommToolProtocol.h"

/**
 * Symbol: TPCommTool::__ct(unsigned long, TCommToolProtocol *, long)
 * Address: 00153000
 */
TPCommTool::TPCommTool(unsigned long, TCommToolProtocol *, long) {
    /*
        153000:	e1a0c00d 	mov	ip, sp
        153004:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        153008:	e24cb004 	sub	fp, ip, #4	; 0x4
        15300c:	e1b04000 	movs	r4, r0
        153010:	e1a06001 	mov	r6, r1
        153014:	e1a05002 	mov	r5, r2
        153018:	e1a07003 	mov	r7, r3
        15301c:	1a000005 	bne	153038 <TPCommTool::__ct(unsigned long, TCommToolProtocol *, long)+0x38>
        153020:	e3a00f9d 	mov	r0, #628	; 0x274
        153024:	eb69edc3 	bl	1bce738 <$__nw(unsigned int)>
        153028:	e1b04000 	movs	r4, r0
        15302c:	1a000001 	bne	153038 <TPCommTool::__ct(unsigned long, TCommToolProtocol *, long)+0x38>
        153030:	e1a00004 	mov	r0, r4
        153034:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        153038:	e1a02007 	mov	r2, r7
        15303c:	e1a01006 	mov	r1, r6
        153040:	e1a00004 	mov	r0, r4
        153044:	eb63699b 	bl	1a2d6b8 <TCommTool::$__ct(unsigned long, long)>
        153048:	e59f0040 	ldr	r0, [pc, #40]	; 153090 <TPCommTool::__ct(unsigned long, TCommToolProtocol *, long)+0x90>
        15304c:	e5840000 	str	r0, [r4]
        153050:	e3a00000 	mov	r0, #0	; 0x0
        153054:	e5840270 	str	r0, [r4, #624]	; fField624
        153058:	e584526c 	str	r5, [r4, #620]	; fField620
        15305c:	e1a00005 	mov	r0, r5
        153060:	eb69f1e4 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
        153064:	e28f1f0a 	add	r1, pc, #40	; 0x28
        153068:	eb6a0244 	bl	1bd3980 <TClassInfo::$GetCapability( const(char const *))>
        15306c:	e3300000 	teq	r0, #0	; 0x0
        153070:	0a000001 	beq	15307c <TPCommTool::__ct(unsigned long, TCommToolProtocol *, long)+0x7c>
        153074:	eb69824c 	bl	1bb39ac <$atol>
        153078:	e5840270 	str	r0, [r4, #624]	; fField624
        15307c:	e594026c 	ldr	r0, [r4, #620]	; fField620
        153080:	eb69f1dc 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
        153084:	eb6a2b96 	bl	1bddee4 <TClassInfo::$Version( const(void))>
        153088:	e5840270 	str	r0, [r4, #624]	; fField624
        15308c:	eaffffe7 	b	153030 <TPCommTool::__ct(unsigned long, TCommToolProtocol *, long)+0x30>
        153090:	0001ab80 	andeq	sl, r1, r0, lsl #23
        153094:	63746976 	cmnvs	r4, #1933312	; 0x1d8000
        153098:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPCommTool::__ct(unsigned long, TCommToolProtocol *)
 * Address: 0015309c
 */
TPCommTool::TPCommTool(unsigned long, TCommToolProtocol *) {
    /*
        15309c:	e1a0c00d 	mov	ip, sp
        1530a0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1530a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1530a8:	e1b04000 	movs	r4, r0
        1530ac:	e1a06001 	mov	r6, r1
        1530b0:	e1a05002 	mov	r5, r2
        1530b4:	1a000005 	bne	1530d0 <TPCommTool::__ct(unsigned long, TCommToolProtocol *)+0x34>
        1530b8:	e3a00f9d 	mov	r0, #628	; 0x274
        1530bc:	eb69ed9d 	bl	1bce738 <$__nw(unsigned int)>
        1530c0:	e1b04000 	movs	r4, r0
        1530c4:	1a000001 	bne	1530d0 <TPCommTool::__ct(unsigned long, TCommToolProtocol *)+0x34>
        1530c8:	e1a00004 	mov	r0, r4
        1530cc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1530d0:	e1a01006 	mov	r1, r6
        1530d4:	e1a00004 	mov	r0, r4
        1530d8:	eb69a759 	bl	1bbce44 <TCommTool::$__ct(unsigned long)>
        1530dc:	e59f0040 	ldr	r0, [pc, #40]	; 153124 <TPCommTool::__ct(unsigned long, TCommToolProtocol *)+0x88>
        1530e0:	e5840000 	str	r0, [r4]
        1530e4:	e3a00000 	mov	r0, #0	; 0x0
        1530e8:	e5840270 	str	r0, [r4, #624]	; fField624
        1530ec:	e584526c 	str	r5, [r4, #620]	; fField620
        1530f0:	e1a00005 	mov	r0, r5
        1530f4:	eb69f1bf 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
        1530f8:	e28f1f0a 	add	r1, pc, #40	; 0x28
        1530fc:	eb6a021f 	bl	1bd3980 <TClassInfo::$GetCapability( const(char const *))>
        153100:	e3300000 	teq	r0, #0	; 0x0
        153104:	0a000001 	beq	153110 <TPCommTool::__ct(unsigned long, TCommToolProtocol *)+0x74>
        153108:	eb698227 	bl	1bb39ac <$atol>
        15310c:	e5840270 	str	r0, [r4, #624]	; fField624
        153110:	e594026c 	ldr	r0, [r4, #620]	; fField620
        153114:	eb69f1b7 	bl	1bcf7f8 <TProtocol::$ClassInfo( const(void))>
        153118:	eb6a2b71 	bl	1bddee4 <TClassInfo::$Version( const(void))>
        15311c:	e5840270 	str	r0, [r4, #624]	; fField624
        153120:	eaffffe8 	b	1530c8 <TPCommTool::__ct(unsigned long, TCommToolProtocol *)+0x2c>
        153124:	0001ab80 	andeq	sl, r1, r0, lsl #23
        153128:	63746976 	cmnvs	r4, #1933312	; 0x1d8000
        15312c:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TPCommTool::DoKillControl(unsigned long)
 * Address: 00153130
 */
TPCommTool::DoKillControl(unsigned long) {
    /*
        153130:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153134:	ea08c0e8 	b	3834dc <TCommToolProtocol::DoKillControl(unsigned long)>
    */
}

/**
 * Symbol: TPCommTool::GetCommEvent(void)
 * Address: 00153138
 */
TPCommTool::GetCommEvent(void) {
    /*
        153138:	e590026c 	ldr	r0, [r0, #620]	; fField620
        15313c:	ea08c0e9 	b	3834e8 <TCommToolProtocol::GetCommEvent(void)>
    */
}

/**
 * Symbol: TPCommTool::DoKillGetCommEvent(void)
 * Address: 00153140
 */
TPCommTool::DoKillGetCommEvent(void) {
    /*
        153140:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153144:	ea08c0ea 	b	3834f4 <TCommToolProtocol::DoKillGetCommEvent(void)>
    */
}

/**
 * Symbol: TPCommTool::PostCommEvent(TCommToolGetEventReply &, long)
 * Address: 00153148
 */
TPCommTool::PostCommEvent(TCommToolGetEventReply &, long) {
    /*
        153148:	e590026c 	ldr	r0, [r0, #620]	; fField620
        15314c:	ea08c0eb 	b	383500 <TCommToolProtocol::PostCommEvent(TCommToolGetEventReply &, long)>
    */
}

/**
 * Symbol: TPCommTool::OpenStart(TOptionArray *)
 * Address: 00153150
 */
TPCommTool::OpenStart(TOptionArray *) {
    /*
        153150:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153154:	ea08c0ec 	b	38350c <TCommToolProtocol::OpenStart(TOptionArray *)>
    */
}

/**
 * Symbol: TPCommTool::OpenComplete(void)
 * Address: 00153158
 */
TPCommTool::OpenComplete(void) {
    /*
        153158:	e590026c 	ldr	r0, [r0, #620]	; fField620
        15315c:	ea08c0ed 	b	383518 <TCommToolProtocol::OpenComplete(void)>
    */
}

/**
 * Symbol: TPCommTool::Close(void)
 * Address: 00153160
 */
TPCommTool::Close(void) {
    /*
        153160:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153164:	ea08c0ee 	b	383524 <TCommToolProtocol::Close(void)>
    */
}

/**
 * Symbol: TPCommTool::CloseComplete(long)
 * Address: 00153168
 */
TPCommTool::CloseComplete(long) {
    /*
        153168:	e590026c 	ldr	r0, [r0, #620]	; fField620
        15316c:	ea08c0ef 	b	383530 <TCommToolProtocol::CloseComplete(long)>
    */
}

/**
 * Symbol: TPCommTool::ConnectStart(void)
 * Address: 00153170
 */
TPCommTool::ConnectStart(void) {
    /*
        153170:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153174:	ea08c0f0 	b	38353c <TCommToolProtocol::ConnectStart(void)>
    */
}

/**
 * Symbol: TPCommTool::ConnectComplete(long)
 * Address: 00153178
 */
TPCommTool::ConnectComplete(long) {
    /*
        153178:	e590026c 	ldr	r0, [r0, #620]	; fField620
        15317c:	ea08c0f1 	b	383548 <TCommToolProtocol::ConnectComplete(long)>
    */
}

/**
 * Symbol: TPCommTool::__dt(void)
 * Address: 00153180
 */
TPCommTool::~TPCommTool(void) {
    /*
        153180:	e1a0c00d 	mov	ip, sp
        153184:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        153188:	e24cb004 	sub	fp, ip, #4	; 0x4
        15318c:	e1a04000 	mov	r4, r0
        153190:	e1a05001 	mov	r5, r1
        153194:	e59f0020 	ldr	r0, [pc, #20]	; 1531bc <TPCommTool::__dt(void)+0x3c>
        153198:	e5840000 	str	r0, [r4]
        15319c:	e1a00004 	mov	r0, r4
        1531a0:	e3a01000 	mov	r1, #0	; 0x0
        1531a4:	eb69a727 	bl	1bbce48 <TCommTool::$__dt(void)>
        1531a8:	e3150001 	tst	r5, #1	; 0x1
        1531ac:	11a00004 	movne	r0, r4
        1531b0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1531b4:	1a69e949 	bne	1bcd6e0 <$__dl(void *)>
        1531b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1531bc:	0001ab80 	andeq	sl, r1, r0, lsl #23
    */
}

/**
 * Symbol: TPCommTool::ListenStart(void)
 * Address: 001531c0
 */
TPCommTool::ListenStart(void) {
    /*
        1531c0:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1531c4:	ea08c0e2 	b	383554 <TCommToolProtocol::ListenStart(void)>
    */
}

/**
 * Symbol: TPCommTool::ListenComplete(long)
 * Address: 001531c8
 */
TPCommTool::ListenComplete(long) {
    /*
        1531c8:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1531cc:	ea08c0e3 	b	383560 <TCommToolProtocol::ListenComplete(long)>
    */
}

/**
 * Symbol: TPCommTool::AcceptStart(void)
 * Address: 001531d0
 */
TPCommTool::AcceptStart(void) {
    /*
        1531d0:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1531d4:	ea08c0e4 	b	38356c <TCommToolProtocol::AcceptStart(void)>
    */
}

/**
 * Symbol: TPCommTool::AcceptComplete(long)
 * Address: 001531d8
 */
TPCommTool::AcceptComplete(long) {
    /*
        1531d8:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1531dc:	ea08c0e5 	b	383578 <TCommToolProtocol::AcceptComplete(long)>
    */
}

/**
 * Symbol: TPCommTool::DisconnectComplete(long)
 * Address: 001531e0
 */
TPCommTool::DisconnectComplete(long) {
    /*
        1531e0:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1531e4:	ea08c0e6 	b	383584 <TCommToolProtocol::DisconnectComplete(long)>
    */
}

/**
 * Symbol: TPCommTool::ReleaseStart(void)
 * Address: 001531e8
 */
TPCommTool::ReleaseStart(void) {
    /*
        1531e8:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1531ec:	ea08c0e7 	b	383590 <TCommToolProtocol::ReleaseStart(void)>
    */
}

/**
 * Symbol: TPCommTool::ReleaseComplete(long)
 * Address: 001531f0
 */
TPCommTool::ReleaseComplete(long) {
    /*
        1531f0:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1531f4:	ea08c0e8 	b	38359c <TCommToolProtocol::ReleaseComplete(long)>
    */
}

/**
 * Symbol: TPCommTool::AddDefaultOptions(TOptionArray *)
 * Address: 001531f8
 */
TPCommTool::AddDefaultOptions(TOptionArray *) {
    /*
        1531f8:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1531fc:	ea08c0f5 	b	3835d8 <TCommToolProtocol::AddDefaultOptions(TOptionArray *)>
    */
}

/**
 * Symbol: TPCommTool::AddCurrentOptions(TOptionArray *)
 * Address: 00153200
 */
TPCommTool::AddCurrentOptions(TOptionArray *) {
    /*
        153200:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153204:	ea08c0f6 	b	3835e4 <TCommToolProtocol::AddCurrentOptions(TOptionArray *)>
    */
}

/**
 * Symbol: TPCommTool::PutBytes(CBufferList *)
 * Address: 00153208
 */
TPCommTool::PutBytes(CBufferList *) {
    /*
        153208:	e590026c 	ldr	r0, [r0, #620]	; fField620
        15320c:	ea08c0f7 	b	3835f0 <TCommToolProtocol::PutBytes(CBufferList *)>
    */
}

/**
 * Symbol: TPCommTool::TaskConstructor(void)
 * Address: 00153210
 */
TPCommTool::TaskConstructor(void) {
    /*
        153210:	e1a0c00d 	mov	ip, sp
        153214:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        153218:	e24cb004 	sub	fp, ip, #4	; 0x4
        15321c:	e1a04000 	mov	r4, r0
        153220:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153224:	e1a01004 	mov	r1, r4
        153228:	eb636502 	bl	1a2c638 <TCommToolProtocol::$ToolInit(TPCommTool *)>
        15322c:	e5b4026c 	ldr	r0, [r4, #620]!	; fField620
        153230:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        153234:	ea08c096 	b	383494 <TCommToolProtocol::TaskConstructor(void)>
    */
}

/**
 * Symbol: TPCommTool::PutFramedBytes(CBufferList *, unsigned char)
 * Address: 00153238
 */
TPCommTool::PutFramedBytes(CBufferList *, unsigned char) {
    /*
        153238:	e20220ff 	and	r2, r2, #255	; 0xff
        15323c:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153240:	ea08c0ed 	b	3835fc <TCommToolProtocol::PutFramedBytes(CBufferList *, unsigned char)>
    */
}

/**
 * Symbol: TPCommTool::PutComplete(long, unsigned long)
 * Address: 00153244
 */
TPCommTool::PutComplete(long, unsigned long) {
    /*
        153244:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153248:	ea08c0ee 	b	383608 <TCommToolProtocol::PutComplete(long, unsigned long)>
    */
}

/**
 * Symbol: TPCommTool::KillPut(void)
 * Address: 0015324c
 */
TPCommTool::KillPut(void) {
    /*
        15324c:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153250:	ea08c0ef 	b	383614 <TCommToolProtocol::KillPut(void)>
    */
}

/**
 * Symbol: TPCommTool::KillPutComplete(long)
 * Address: 00153254
 */
TPCommTool::KillPutComplete(long) {
    /*
        153254:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153258:	ea08c0f0 	b	383620 <TCommToolProtocol::KillPutComplete(long)>
    */
}

/**
 * Symbol: TPCommTool::GetBytes(CBufferList *)
 * Address: 0015325c
 */
TPCommTool::GetBytes(CBufferList *) {
    /*
        15325c:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153260:	ea08c0f1 	b	38362c <TCommToolProtocol::GetBytes(CBufferList *)>
    */
}

/**
 * Symbol: TPCommTool::GetFramedBytes(CBufferList *)
 * Address: 00153264
 */
TPCommTool::GetFramedBytes(CBufferList *) {
    /*
        153264:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153268:	ea08c0f2 	b	383638 <TCommToolProtocol::GetFramedBytes(CBufferList *)>
    */
}

/**
 * Symbol: TPCommTool::GetComplete(long, unsigned char, unsigned long)
 * Address: 0015326c
 */
TPCommTool::GetComplete(long, unsigned char, unsigned long) {
    /*
        15326c:	e20220ff 	and	r2, r2, #255	; 0xff
        153270:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153274:	ea08c0f2 	b	383644 <TCommToolProtocol::GetComplete(long, unsigned char, unsigned long)>
    */
}

/**
 * Symbol: TPCommTool::GetBytesImmediate(CBufferList *, long)
 * Address: 00153278
 */
TPCommTool::GetBytesImmediate(CBufferList *, long) {
    /*
        153278:	e590026c 	ldr	r0, [r0, #620]	; fField620
        15327c:	ea08c0f3 	b	383650 <TCommToolProtocol::GetBytesImmediate(CBufferList *, long)>
    */
}

/**
 * Symbol: TPCommTool::KillGet(void)
 * Address: 00153280
 */
TPCommTool::KillGet(void) {
    /*
        153280:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153284:	ea08c0f4 	b	38365c <TCommToolProtocol::KillGet(void)>
    */
}

/**
 * Symbol: TPCommTool::KillGetComplete(long)
 * Address: 00153288
 */
TPCommTool::KillGetComplete(long) {
    /*
        153288:	e590026c 	ldr	r0, [r0, #620]	; fField620
        15328c:	ea08c0f5 	b	383668 <TCommToolProtocol::KillGetComplete(long)>
    */
}

/**
 * Symbol: TPCommTool::TaskDestructor(void)
 * Address: 00153290
 */
TPCommTool::TaskDestructor(void) {
    /*
        153290:	e1a0c00d 	mov	ip, sp
        153294:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        153298:	e24cb004 	sub	fp, ip, #4	; 0x4
        15329c:	e1a04000 	mov	r4, r0
        1532a0:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1532a4:	eb08c07d 	bl	3834a0 <TCommToolProtocol::TaskDestructor(void)>
        1532a8:	e594026c 	ldr	r0, [r4, #620]	; fField620
        1532ac:	e3300000 	teq	r0, #0	; 0x0
        1532b0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1532b4:	e5941270 	ldr	r1, [r4, #624]	; fField624
        1532b8:	e3510002 	cmp	r1, #2	; 0x2
        1532bc:	b91ba810 	ldmltdb	fp, {r4, fp, sp, pc}
        1532c0:	eb08c06c 	bl	383478 <TCommToolProtocol::Delete(void)>
        1532c4:	e3a00000 	mov	r0, #0	; 0x0
        1532c8:	e5a4026c 	str	r0, [r4, #620]!	; fField620
        1532cc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPCommTool::TerminateConnection(void)
 * Address: 001532d0
 */
TPCommTool::TerminateConnection(void) {
    /*
        1532d0:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1532d4:	ea08c0e6 	b	383674 <TCommToolProtocol::TerminateConnection(void)>
    */
}

/**
 * Symbol: TPCommTool::TerminateComplete(void)
 * Address: 001532d8
 */
TPCommTool::TerminateComplete(void) {
    /*
        1532d8:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1532dc:	ea08c0e7 	b	383680 <TCommToolProtocol::TerminateComplete(void)>
    */
}

/**
 * Symbol: TPCommTool::SetChannelFilter(CommToolRequestType, unsigned char)
 * Address: 001532e0
 */
TPCommTool::SetChannelFilter(CommToolRequestType, unsigned char) {
    /*
        1532e0:	e20220ff 	and	r2, r2, #255	; 0xff
        1532e4:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1532e8:	ea08c0ea 	b	383698 <TCommToolProtocol::SetChannelFilter(int, unsigned char)>
    */
}

/**
 * Symbol: TPCommTool::BindStart(void)
 * Address: 001532ec
 */
TPCommTool::BindStart(void) {
    /*
        1532ec:	e1a0c00d 	mov	ip, sp
        1532f0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1532f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1532f8:	e1a04000 	mov	r4, r0
        1532fc:	e5900270 	ldr	r0, [r0, #624]	; fField624
        153300:	e3500002 	cmp	r0, #2	; 0x2
        153304:	a5b4026c 	ldrge	r0, [r4, #620]!	; fField620
        153308:	a91b6810 	ldmgedb	fp, {r4, fp, sp, lr}
        15330c:	aa6343bc 	bge	1a24204 <TCommToolProtocol::$BindStart(void)>
        153310:	e2842f5e 	add	r2, r4, #376	; 0x178
        153314:	e1a00004 	mov	r0, r4
        153318:	e3a01000 	mov	r1, #0	; 0x0
        15331c:	e5943000 	ldr	r3, [r4]
        153320:	e1a0e00f 	mov	lr, pc
        153324:	e283f09c 	add	pc, r3, #156	; 0x9c
        153328:	e5b4026c 	ldr	r0, [r4, #620]!	; fField620
        15332c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        153330:	ea08c09c 	b	3835a8 <TCommToolProtocol::Bind(void)>
    */
}

/**
 * Symbol: TPCommTool::BindComplete(long)
 * Address: 00153334
 */
TPCommTool::BindComplete(long) {
    /*
        153334:	e5902270 	ldr	r2, [r0, #624]	; fField624
        153338:	e3520002 	cmp	r2, #2	; 0x2
        15333c:	ba633fa9 	blt	1a231e8 <TCommTool::$BindComplete(long)>
        153340:	a590026c 	ldrge	r0, [r0, #620]	; fField620
        153344:	aa633fa5 	bge	1a231e0 <TCommToolProtocol::$BindComplete(long)>
    */
}

/**
 * Symbol: TPCommTool::UnbindStart(void)
 * Address: 00153348
 */
TPCommTool::UnbindStart(void) {
    /*
        153348:	e5901270 	ldr	r1, [r0, #624]	; fField624
        15334c:	e3510002 	cmp	r1, #2	; 0x2
        153350:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153354:	ba08c096 	blt	3835b4 <TCommToolProtocol::Unbind(void)>
        153358:	aa6364bc 	bge	1a2c650 <TCommToolProtocol::$UnbindStart(void)>
    */
}

/**
 * Symbol: TPCommTool::UnbindComplete(long)
 * Address: 0015335c
 */
TPCommTool::UnbindComplete(long) {
    /*
        15335c:	e5902270 	ldr	r2, [r0, #624]	; fField624
        153360:	e3520002 	cmp	r2, #2	; 0x2
        153364:	a590026c 	ldrge	r0, [r0, #620]	; fField620
        153368:	aa08c0d6 	bge	3836c8 <TCommToolProtocol::UnbindComplete(long)>
        15336c:	e3310000 	teq	r1, #0	; 0x0
        153370:	1a6364b3 	bne	1a2c644 <TCommTool::$UnbindComplete(long)>
        153374:	0590026c 	ldreq	r0, [r0, #620]	; fField620
        153378:	0a08c08d 	beq	3835b4 <TCommToolProtocol::Unbind(void)>
    */
}

/**
 * Symbol: TPCommTool::ForwardOptions(void)
 * Address: 0015337c
 */
TPCommTool::ForwardOptions(void) {
    /*
        15337c:	e5901270 	ldr	r1, [r0, #624]	; fField624
        153380:	e3510002 	cmp	r1, #2	; 0x2
        153384:	ba634be6 	blt	1a26324 <TCommTool::$ForwardOptions(void)>
        153388:	a590026c 	ldrge	r0, [r0, #620]	; fField620
        15338c:	aa08c0ee 	bge	38374c <TCommToolProtocol::ForwardOptions(void)>
    */
}

/**
 * Symbol: TPCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 00153390
 */
TPCommTool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        153390:	e590c270 	ldr	ip, [r0, #624]	; fField624
        153394:	e35c0002 	cmp	ip, #2	; 0x2
        153398:	e590026c 	ldr	r0, [r0, #620]	; fField620
        15339c:	ba08c08a 	blt	3835cc <TCommToolProtocol::ProcessOption(TOption *, unsigned long, unsigned long)>
        1533a0:	aa08c0cb 	bge	3836d4 <TCommToolProtocol::ProcessOptionStart(TOption *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TPCommTool::ProcessOptionComplete(unsigned long)
 * Address: 001533a4
 */
TPCommTool::ProcessOptionComplete(unsigned long) {
    /*
        1533a4:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1533a8:	ea08c0cc 	b	3836e0 <TCommToolProtocol::ProcessOptionComplete(unsigned long)>
    */
}

/**
 * Symbol: TPCommTool::GetSizeOf(void)
 * Address: 001533ac
 */
TPCommTool::GetSizeOf(void) {
    /*
        1533ac:	e3a00f9d 	mov	r0, #628	; 0x274
        1533b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPCommTool::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 001533b4
 */
TPCommTool::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        1533b4:	e590c270 	ldr	ip, [r0, #624]	; fField624
        1533b8:	e35c0002 	cmp	ip, #2	; 0x2
        1533bc:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1533c0:	ba08c081 	blt	3835cc <TCommToolProtocol::ProcessOption(TOption *, unsigned long, unsigned long)>
        1533c4:	aa08c0c8 	bge	3836ec <TCommToolProtocol::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TPCommTool::ProcessPutBytesOptionComplete(unsigned long)
 * Address: 001533c8
 */
TPCommTool::ProcessPutBytesOptionComplete(unsigned long) {
    /*
        1533c8:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1533cc:	ea08c0c9 	b	3836f8 <TCommToolProtocol::ProcessPutBytesOptionComplete(unsigned long)>
    */
}

/**
 * Symbol: TPCommTool::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 001533d0
 */
TPCommTool::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
        1533d0:	e590c270 	ldr	ip, [r0, #624]	; fField624
        1533d4:	e35c0002 	cmp	ip, #2	; 0x2
        1533d8:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1533dc:	ba08c07a 	blt	3835cc <TCommToolProtocol::ProcessOption(TOption *, unsigned long, unsigned long)>
        1533e0:	aa08c0c7 	bge	383704 <TCommToolProtocol::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TPCommTool::ProcessGetBytesOptionComplete(unsigned long)
 * Address: 001533e4
 */
TPCommTool::ProcessGetBytesOptionComplete(unsigned long) {
    /*
        1533e4:	e590026c 	ldr	r0, [r0, #620]	; fField620
        1533e8:	ea08c0c8 	b	383710 <TCommToolProtocol::ProcessGetBytesOptionComplete(unsigned long)>
    */
}

/**
 * Symbol: TPCommTool::ResArbRelease(unsigned char *, unsigned char *)
 * Address: 001533ec
 */
TPCommTool::ResArbRelease(unsigned char *, unsigned char *) {
    /*
        1533ec:	e5903270 	ldr	r3, [r0, #624]	; fField624
        1533f0:	e3530002 	cmp	r3, #2	; 0x2
        1533f4:	ba636079 	blt	1a2b5e0 <TCommTool::$ResArbRelease(unsigned char *, unsigned char *)>
        1533f8:	a590026c 	ldrge	r0, [r0, #620]	; fField620
        1533fc:	aa08c0c6 	bge	38371c <TCommToolProtocol::ResArbRelease(unsigned char *, unsigned char *)>
    */
}

/**
 * Symbol: TPCommTool::ResArbReleaseStart(unsigned char *, unsigned char *)
 * Address: 00153400
 */
TPCommTool::ResArbReleaseStart(unsigned char *, unsigned char *) {
    /*
        153400:	e5903270 	ldr	r3, [r0, #624]	; fField624
        153404:	e3530002 	cmp	r3, #2	; 0x2
        153408:	ba636071 	blt	1a2b5d4 <TCommTool::$ResArbReleaseStart(unsigned char *, unsigned char *)>
        15340c:	a590026c 	ldrge	r0, [r0, #620]	; fField620
        153410:	aa08c0c4 	bge	383728 <TCommToolProtocol::ResArbReleaseStart(unsigned char *, unsigned char *)>
    */
}

/**
 * Symbol: TPCommTool::ResArbReleaseComplete(long)
 * Address: 00153414
 */
TPCommTool::ResArbReleaseComplete(long) {
    /*
        153414:	e5902270 	ldr	r2, [r0, #624]	; fField624
        153418:	e3520002 	cmp	r2, #2	; 0x2
        15341c:	ba636069 	blt	1a2b5c8 <TCommTool::$ResArbReleaseComplete(long)>
        153420:	a590026c 	ldrge	r0, [r0, #620]	; fField620
        153424:	aa08c0c2 	bge	383734 <TCommToolProtocol::ResArbReleaseComplete(long)>
    */
}

/**
 * Symbol: TPCommTool::ResArbClaimNotification(unsigned char *, unsigned char *)
 * Address: 00153428
 */
TPCommTool::ResArbClaimNotification(unsigned char *, unsigned char *) {
    /*
        153428:	e5903270 	ldr	r3, [r0, #624]	; fField624
        15342c:	e3530002 	cmp	r3, #2	; 0x2
        153430:	ba636061 	blt	1a2b5bc <TCommTool::$ResArbClaimNotification(unsigned char *, unsigned char *)>
        153434:	a590026c 	ldrge	r0, [r0, #620]	; fField620
        153438:	aa08c0c0 	bge	383740 <TCommToolProtocol::ResArbClaimNotification(unsigned char *, unsigned char *)>
    */
}

/**
 * Symbol: TPCommTool::HandleInternalEvent(void)
 * Address: 0015343c
 */
TPCommTool::HandleInternalEvent(void) {
    /*
        15343c:	e5901270 	ldr	r1, [r0, #624]	; fField624
        153440:	e3510002 	cmp	r1, #2	; 0x2
        153444:	ba634fd1 	blt	1a27390 <TCommTool::$HandleInternalEvent(void)>
        153448:	a590026c 	ldrge	r0, [r0, #620]	; fField620
        15344c:	aa08c0c1 	bge	383758 <TCommToolProtocol::HandleInternalEvent(void)>
    */
}

/**
 * Symbol: TPCommTool::GetToolName(void)
 * Address: 00153450
 */
TPCommTool::GetToolName(void) {
    /*
        153450:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153454:	ea08c014 	b	3834ac <TCommToolProtocol::GetToolName(void)>
    */
}

/**
 * Symbol: TPCommTool::HandleRequest(TUMsgToken &, unsigned long)
 * Address: 00153458
 */
TPCommTool::HandleRequest(TUMsgToken &, unsigned long) {
    /*
        153458:	e590026c 	ldr	r0, [r0, #620]	; fField620
        15345c:	ea08c015 	b	3834b8 <TCommToolProtocol::HandleRequest(TUMsgToken &, unsigned long)>
    */
}

/**
 * Symbol: TPCommTool::HandleReply(unsigned long, unsigned long)
 * Address: 00153460
 */
TPCommTool::HandleReply(unsigned long, unsigned long) {
    /*
        153460:	e590026c 	ldr	r0, [r0, #620]	; fField620
        153464:	ea08c016 	b	3834c4 <TCommToolProtocol::HandleReply(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TPCommTool::DoControl(unsigned long, unsigned long)
 * Address: 00153468
 */
TPCommTool::DoControl(unsigned long, unsigned long) {
    /*
        153468:	e590026c 	ldr	r0, [r0, #620]	; fField620
        15346c:	ea08c017 	b	3834d0 <TCommToolProtocol::DoControl(unsigned long, unsigned long)>
    */
}

