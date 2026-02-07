#include "DDKIncludes/OS600/UserPorts.h"

/**
 * Symbol: TUAsyncMessage::GetResult(unsigned long *, unsigned long *, unsigned long *, unsigned long *)
 * Address: 002599dc
 */
long		TUAsyncMessage::GetResult(TObjectId* sentbyId = nil, TObjectId* replymemId = nil, ULong* msgType = nil, ULong* signature = nil) {
    /*
        2599dc:	e1a0c00d 	mov	ip, sp
        2599e0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2599e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2599e8:	e1a0c002 	mov	ip, r2
        2599ec:	e1a02003 	mov	r2, r3
        2599f0:	e59be004 	ldr	lr, [fp, #4]	; TUAsyncMessage
        2599f4:	e1a0300e 	mov	r3, lr
        2599f8:	e92d000c 	stmdb	sp!, {r2, r3}
        2599fc:	e1a0300c 	mov	r3, ip
        259a00:	e1a02001 	mov	r2, r1
        259a04:	e3a01000 	mov	r1, #0	; 0x0
        259a08:	e5900000 	ldr	r0, [r0]
        259a0c:	eb055291 	bl	3ae458 <SMemMsgCheckForDoneSWI>
        259a10:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUAsyncMessage::BlockTillDone(unsigned long *, unsigned long *, unsigned long *, unsigned long *)
 * Address: 00259a14
 */
long		TUAsyncMessage::BlockTillDone(TObjectId* sentbyId = nil, TObjectId* replymemId = nil, ULong* msgType = nil, ULong* signature = nil) {
    /*
        259a14:	e1a0c00d 	mov	ip, sp
        259a18:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        259a1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        259a20:	e1a0c002 	mov	ip, r2
        259a24:	e1a02003 	mov	r2, r3
        259a28:	e59be004 	ldr	lr, [fp, #4]	; TUAsyncMessage
        259a2c:	e1a0300e 	mov	r3, lr
        259a30:	e92d000c 	stmdb	sp!, {r2, r3}
        259a34:	e1a0300c 	mov	r3, ip
        259a38:	e1a02001 	mov	r2, r1
        259a3c:	e3a01002 	mov	r1, #2	; 0x2
        259a40:	e5900000 	ldr	r0, [r0]
        259a44:	eb055283 	bl	3ae458 <SMemMsgCheckForDoneSWI>
        259a48:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUAsyncMessage::Abort(void)
 * Address: 00259a4c
 */
long		TUAsyncMessage::Abort(TUMsgToken* token, ULong* msgType) {
    /*
        259a4c:	e1a0c00d 	mov	ip, sp
        259a50:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        259a54:	e24cb004 	sub	fp, ip, #4	; 0x4
        259a58:	e3a02000 	mov	r2, #0	; 0x0
        259a5c:	e3a03000 	mov	r3, #0	; 0x0
        259a60:	e92d000c 	stmdb	sp!, {r2, r3}
        259a64:	e1a03002 	mov	r3, r2
        259a68:	e3a01001 	mov	r1, #1	; 0x1
        259a6c:	e5900000 	ldr	r0, [r0]
        259a70:	eb055278 	bl	3ae458 <SMemMsgCheckForDoneSWI>
        259a74:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUAsyncMessage::Abort(TUMsgToken *, unsigned long *)
 * Address: 00259a78
 */
long		TUAsyncMessage::Abort(TUMsgToken* token, ULong* msgType) {
    /*
        259a78:	e1a0c00d 	mov	ip, sp
        259a7c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        259a80:	e24cb004 	sub	fp, ip, #4	; 0x4
        259a84:	e5903000 	ldr	r3, [r0]
        259a88:	e581300c 	str	r3, [r1, #12]	; fReplyId
        259a8c:	e281c004 	add	ip, r1, #4	; 0x4
        259a90:	e2813008 	add	r3, r1, #8	; 0x8
        259a94:	e92d000c 	stmdb	sp!, {r2, r3}
        259a98:	e1a0300c 	mov	r3, ip
        259a9c:	e1a02001 	mov	r2, r1
        259aa0:	e3a01001 	mov	r1, #1	; 0x1
        259aa4:	e5900000 	ldr	r0, [r0]
        259aa8:	eb05526a 	bl	3ae458 <SMemMsgCheckForDoneSWI>
        259aac:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUAsyncMessage::__ct(void)
 * Address: 00259fe4
 */
TUAsyncMessage::TUAsyncMessage(TObjectId sMemMsg, TObjectId replyMem) {
    /*
        259fe4:	e1a0c00d 	mov	ip, sp
        259fe8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        259fec:	e24cb004 	sub	fp, ip, #4	; 0x4
        259ff0:	e3300000 	teq	r0, #0	; 0x0
        259ff4:	1a000003 	bne	25a008 <TUAsyncMessage::__ct(void)+0x24>
        259ff8:	e3a00010 	mov	r0, #16	; 0x10
        259ffc:	eb65d1cd 	bl	1bce738 <$__nw(unsigned int)>
        25a000:	e3300000 	teq	r0, #0	; 0x0
        25a004:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        25a008:	e3a01000 	mov	r1, #0	; 0x0
        25a00c:	e5c01004 	strb	r1, [r0, #4]	; TUAsyncMessage
        25a010:	e5801000 	str	r1, [r0]
        25a014:	e5c0100c 	strb	r1, [r0, #12]	; fReplyId
        25a018:	e5801008 	str	r1, [r0, #8]	; fMsgId
        25a01c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TUAsyncMessage::__ct(TUAsyncMessage const &)
 * Address: 0025a020
 */
TUAsyncMessage::TUAsyncMessage(TObjectId sMemMsg, TObjectId replyMem) {
    /*
        25a020:	e1a0c00d 	mov	ip, sp
        25a024:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25a028:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a02c:	e1b04000 	movs	r4, r0
        25a030:	e1a05001 	mov	r5, r1
        25a034:	1a000003 	bne	25a048 <TUAsyncMessage::__ct(TUAsyncMessage const &)+0x28>
        25a038:	e3a00010 	mov	r0, #16	; 0x10
        25a03c:	eb65d1bd 	bl	1bce738 <$__nw(unsigned int)>
        25a040:	e1b04000 	movs	r4, r0
        25a044:	0a00000a 	beq	25a074 <TUAsyncMessage::__ct(TUAsyncMessage const &)+0x54>
        25a048:	e3a00000 	mov	r0, #0	; 0x0
        25a04c:	e5c40004 	strb	r0, [r4, #4]	; TUAsyncMessage
        25a050:	e5840000 	str	r0, [r4]
        25a054:	e5c4000c 	strb	r0, [r4, #12]	; fReplyId
        25a058:	e5840008 	str	r0, [r4, #8]	; fMsgId
        25a05c:	e1a00004 	mov	r0, r4
        25a060:	e5951000 	ldr	r1, [r5]
        25a064:	eb65d9f7 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25a068:	e2840008 	add	r0, r4, #8	; 0x8
        25a06c:	e5951008 	ldr	r1, [r5, #8]	; fMsgId
        25a070:	eb65d9f4 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25a074:	e1a00004 	mov	r0, r4
        25a078:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TUAsyncMessage::__ct(unsigned long, unsigned long)
 * Address: 0025a07c
 */
TUAsyncMessage::TUAsyncMessage(TObjectId sMemMsg, TObjectId replyMem) {
    /*
        25a07c:	e1a0c00d 	mov	ip, sp
        25a080:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25a084:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a088:	e1b04000 	movs	r4, r0
        25a08c:	e1a06001 	mov	r6, r1
        25a090:	e1a05002 	mov	r5, r2
        25a094:	1a000003 	bne	25a0a8 <TUAsyncMessage::__ct(unsigned long, unsigned long)+0x2c>
        25a098:	e3a00010 	mov	r0, #16	; 0x10
        25a09c:	eb65d1a5 	bl	1bce738 <$__nw(unsigned int)>
        25a0a0:	e1b04000 	movs	r4, r0
        25a0a4:	0a00000a 	beq	25a0d4 <TUAsyncMessage::__ct(unsigned long, unsigned long)+0x58>
        25a0a8:	e3a00000 	mov	r0, #0	; 0x0
        25a0ac:	e5c40004 	strb	r0, [r4, #4]	; TUAsyncMessage
        25a0b0:	e5840000 	str	r0, [r4]
        25a0b4:	e5c4000c 	strb	r0, [r4, #12]	; fReplyId
        25a0b8:	e1a01006 	mov	r1, r6
        25a0bc:	e5840008 	str	r0, [r4, #8]	; fMsgId
        25a0c0:	e1a00004 	mov	r0, r4
        25a0c4:	eb65d9df 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25a0c8:	e2840008 	add	r0, r4, #8	; 0x8
        25a0cc:	e1a01005 	mov	r1, r5
        25a0d0:	eb65d9dc 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25a0d4:	e1a00004 	mov	r0, r4
        25a0d8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TUAsyncMessage::operator=(TUMsgToken const &)
 * Address: 0025a0dc
 */
TUAsyncMessage::operator=(TUMsgToken const &) {
    /*
        25a0dc:	e1a0c00d 	mov	ip, sp
        25a0e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25a0e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a0e8:	e1a05000 	mov	r5, r0
        25a0ec:	e1a04001 	mov	r4, r1
        25a0f0:	e591000c 	ldr	r0, [r1, #12]	; fReplyId
        25a0f4:	e3300000 	teq	r0, #0	; 0x0
        25a0f8:	11a01000 	movne	r1, r0
        25a0fc:	11a00005 	movne	r0, r5
        25a100:	1a000004 	bne	25a118 <TUAsyncMessage::operator=(TUMsgToken const &)+0x3c>
        25a104:	e1a00005 	mov	r0, r5
        25a108:	e5941000 	ldr	r1, [r4]
        25a10c:	eb65d9cd 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25a110:	e2850008 	add	r0, r5, #8	; 0x8
        25a114:	e5b41004 	ldr	r1, [r4, #4]!	; TUAsyncMessage
        25a118:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        25a11c:	ea65d9c9 	b	1bd0848 <TUObject::$CopyObject(unsigned long const)>
    */
}

/**
 * Symbol: TUAsyncMessage::__dt(void)
 * Address: 0025a120
 */
TUAsyncMessage::~TUAsyncMessage() {
    /*
        25a120:	e1a0c00d 	mov	ip, sp
        25a124:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        25a128:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a12c:	e1a04000 	mov	r4, r0
        25a130:	e1a05001 	mov	r5, r1
        25a134:	e3a06000 	mov	r6, #0	; 0x0
        25a138:	e1a01006 	mov	r1, r6
        25a13c:	eb65d9c1 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25a140:	e2840008 	add	r0, r4, #8	; 0x8
        25a144:	e1a07000 	mov	r7, r0
        25a148:	e1a01006 	mov	r1, r6
        25a14c:	eb65d9bd 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25a150:	e1a00007 	mov	r0, r7
        25a154:	e3a01000 	mov	r1, #0	; 0x0
        25a158:	eb65d171 	bl	1bce724 <TUObject::$__dt(void)>
        25a15c:	e1a00004 	mov	r0, r4
        25a160:	e3a01000 	mov	r1, #0	; 0x0
        25a164:	eb65d16e 	bl	1bce724 <TUObject::$__dt(void)>
        25a168:	e3150001 	tst	r5, #1	; 0x1
        25a16c:	11a00004 	movne	r0, r4
        25a170:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        25a174:	1a65cd59 	bne	1bcd6e0 <$__dl(void *)>
        25a178:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TUAsyncMessage::Init(unsigned char)
 * Address: 0025a17c
 */
long		TUAsyncMessage::Init(Boolean forSendRPC = true) {
    /*
        25a17c:	e1a0c00d 	mov	ip, sp
        25a180:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25a184:	e24cb004 	sub	fp, ip, #4	; 0x4
        25a188:	e1a04000 	mov	r4, r0
        25a18c:	e20160ff 	and	r6, r1, #255	; 0xff
        25a190:	eb65ee40 	bl	1bd5a98 <TUSharedMemMsg::$Init(void)>
        25a194:	e1b05000 	movs	r5, r0
        25a198:	1a000007 	bne	25a1bc <TUAsyncMessage::Init(unsigned char)+0x40>
        25a19c:	e3360000 	teq	r6, #0	; 0x0
        25a1a0:	0a000005 	beq	25a1bc <TUAsyncMessage::Init(unsigned char)+0x40>
        25a1a4:	e2840008 	add	r0, r4, #8	; 0x8
        25a1a8:	eb65ea33 	bl	1bd4a7c <TUSharedMem::$Init(void)>
        25a1ac:	e1b05000 	movs	r5, r0
        25a1b0:	13a01000 	movne	r1, #0	; 0x0
        25a1b4:	11a00004 	movne	r0, r4
        25a1b8:	1b65d9a2 	blne	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        25a1bc:	e1a00005 	mov	r0, r5
        25a1c0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TUAsyncMessage::SetCollectorPort(unsigned long)
 * Address: 0025a1c4
 */
long		TUAsyncMessage::SetCollectorPort(TObjectId portId) {
    /*
        25a1c4:	ea660700 	b	1bdbdcc <TUSharedMemMsg::$SetMsgAvailPort(unsigned long)>
    */
}

