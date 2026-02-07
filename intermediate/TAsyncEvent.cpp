#include "include/TAsyncEvent.h"

/**
 * Symbol: TAsyncEvent::__ct(void)
 * Address: 00038ee8
 */
TAsyncEvent::TAsyncEvent(void) {
    /*
         38ee8:	e1a0c00d 	mov	ip, sp
         38eec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         38ef0:	e24cb004 	sub	fp, ip, #4	; 0x4
         38ef4:	e1b04000 	movs	r4, r0
         38ef8:	1a000003 	bne	38f0c <TAsyncEvent::__ct(void)+0x24>
         38efc:	e3a0001c 	mov	r0, #28	; 0x1c
         38f00:	eb6e560c 	bl	1bce738 <$__nw(unsigned int)>
         38f04:	e1b04000 	movs	r4, r0
         38f08:	0a000005 	beq	38f24 <TAsyncEvent::__ct(void)+0x3c>
         38f0c:	e1a00004 	mov	r0, r4
         38f10:	eb6e51e5 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         38f14:	e3a00000 	mov	r0, #0	; 0x0
         38f18:	e5840010 	str	r0, [r4, #16]	; fField16
         38f1c:	e5840014 	str	r0, [r4, #20]	; fField20
         38f20:	e5840018 	str	r0, [r4, #24]	; fField24
         38f24:	e1a00004 	mov	r0, r4
         38f28:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncEvent::__dt(void)
 * Address: 00038f2c
 */
TAsyncEvent::~TAsyncEvent(void) {
    /*
         38f2c:	e1a0c00d 	mov	ip, sp
         38f30:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         38f34:	e24cb004 	sub	fp, ip, #4	; 0x4
         38f38:	e1a04000 	mov	r4, r0
         38f3c:	e1a05001 	mov	r5, r1
         38f40:	eb690364 	bl	1a79cd8 <TAsyncEvent::$Free(void)>
         38f44:	e1a00004 	mov	r0, r4
         38f48:	e3a01000 	mov	r1, #0	; 0x0
         38f4c:	eb6e55ef 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         38f50:	e3150001 	tst	r5, #1	; 0x1
         38f54:	11a00004 	movne	r0, r4
         38f58:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         38f5c:	1a6e51df 	bne	1bcd6e0 <$__dl(void *)>
         38f60:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncEvent::Free(void)
 * Address: 00038f64
 */
TAsyncEvent::Free(void) {
    /*
         38f64:	e1a0c00d 	mov	ip, sp
         38f68:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         38f6c:	e24cb004 	sub	fp, ip, #4	; 0x4
         38f70:	e1a04000 	mov	r4, r0
         38f74:	e5900010 	ldr	r0, [r0, #16]	; fField16
         38f78:	e3a05000 	mov	r5, #0	; 0x0
         38f7c:	e3300000 	teq	r0, #0	; 0x0
         38f80:	0a000001 	beq	38f8c <TAsyncEvent::Free(void)+0x28>
         38f84:	eb6e51d5 	bl	1bcd6e0 <$__dl(void *)>
         38f88:	e5845010 	str	r5, [r4, #16]	; fField16
         38f8c:	e5940014 	ldr	r0, [r4, #20]	; fField20
         38f90:	e3300000 	teq	r0, #0	; 0x0
         38f94:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         38f98:	eb6e51d0 	bl	1bcd6e0 <$__dl(void *)>
         38f9c:	e5a45014 	str	r5, [r4, #20]!	; fField20
         38fa0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncEvent::Init(unsigned long, TAEventHandler *)
 * Address: 00038fa4
 */
TAsyncEvent::Init(unsigned long, TAEventHandler *) {
    /*
         38fa4:	e1a0c00d 	mov	ip, sp
         38fa8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         38fac:	e24cb004 	sub	fp, ip, #4	; 0x4
         38fb0:	e1a04000 	mov	r4, r0
         38fb4:	e1a06001 	mov	r6, r1
         38fb8:	e1a05002 	mov	r5, r2
         38fbc:	e3a01001 	mov	r1, #1	; 0x1
         38fc0:	eb6e72b3 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         38fc4:	e280cc27 	add	ip, r0, #9984	; 0x2700
         38fc8:	e37c0038 	cmn	ip, #56	; 0x38
         38fcc:	13300000 	teqne	r0, #0	; 0x0
         38fd0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         38fd4:	e3350000 	teq	r5, #0	; 0x0
         38fd8:	0a000004 	beq	38ff0 <TAsyncEvent::Init(unsigned long, TAEventHandler *)+0x4c>
         38fdc:	e1a01005 	mov	r1, r5
         38fe0:	e1a00004 	mov	r0, r4
         38fe4:	eb6e8f89 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
         38fe8:	e3300000 	teq	r0, #0	; 0x0
         38fec:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         38ff0:	e1a01006 	mov	r1, r6
         38ff4:	e1a00004 	mov	r0, r4
         38ff8:	eb6e8b64 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
         38ffc:	e3300000 	teq	r0, #0	; 0x0
         39000:	05a46018 	streq	r6, [r4, #24]!	; fField24
         39004:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAsyncEvent::SetReply(TAppleTalkMessage *)
 * Address: 00039008
 */
TAsyncEvent::SetReply(TAppleTalkMessage *) {
    /*
         39008:	e5a01014 	str	r1, [r0, #20]!	; fField20
         3900c:	e3a00001 	mov	r0, #1	; 0x1
         39010:	e5a10008 	str	r0, [r1, #8]!
         39014:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAsyncEvent::Cancel(unsigned long, unsigned long, unsigned char)
 * Address: 00039018
 */
TAsyncEvent::Cancel(unsigned long, unsigned long, unsigned char) {
    /*
         39018:	e1a0c00d 	mov	ip, sp
         3901c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         39020:	e24cb004 	sub	fp, ip, #4	; 0x4
         39024:	e1a04000 	mov	r4, r0
         39028:	e1a06001 	mov	r6, r1
         3902c:	e1a05002 	mov	r5, r2
         39030:	e20390ff 	and	r9, r3, #255	; 0xff
         39034:	e24dd030 	sub	sp, sp, #48	; 0x30
         39038:	e28d0014 	add	r0, sp, #20	; 0x14
         3903c:	eb6eac7d 	bl	1be4238 <TAEvent::$__ct(void)>
         39040:	e59f8064 	ldr	r8, [pc, #64]	; 390ac <TAsyncEvent::Cancel(unsigned long, unsigned long, unsigned char)+0x94>
         39044:	e3a07000 	mov	r7, #0	; 0x0
         39048:	e58d7020 	str	r7, [sp, #32]
         3904c:	e58d8014 	str	r8, [sp, #20]	; fField20
         39050:	e3a00002 	mov	r0, #2	; 0x2
         39054:	e58d0024 	str	r0, [sp, #36]
         39058:	e58d701c 	str	r7, [sp, #28]
         3905c:	e1a0000d 	mov	r0, sp
         39060:	eb6eac74 	bl	1be4238 <TAEvent::$__ct(void)>
         39064:	e58d700c 	str	r7, [sp, #12]
         39068:	e40d8008 	str	r8, [sp], -#8
         3906c:	e58d5030 	str	r5, [sp, #48]
         39070:	e58d6020 	str	r6, [sp, #32]
         39074:	e58d7010 	str	r7, [sp, #16]	; fField16
         39078:	e5940000 	ldr	r0, [r4]
         3907c:	e58d0034 	str	r0, [sp, #52]
         39080:	e5cd7004 	strb	r7, [sp, #4]
         39084:	e58d7000 	str	r7, [sp]
         39088:	e1a0000d 	mov	r0, sp
         3908c:	eb68ee71 	bl	1a74a58 <$AppleTalkPort(TUPort *)>
         39090:	e1b05000 	movs	r5, r0
         39094:	0a000005 	beq	390b0 <TAsyncEvent::Cancel(unsigned long, unsigned long, unsigned char)+0x98>
         39098:	e1a0000d 	mov	r0, sp
         3909c:	e3a01000 	mov	r1, #0	; 0x0
         390a0:	eb6e559f 	bl	1bce724 <TUObject::$__dt(void)>
         390a4:	e28dd008 	add	sp, sp, #8	; 0x8
         390a8:	ea00001a 	b	39118 <TAsyncEvent::Cancel(unsigned long, unsigned long, unsigned char)+0x100>
         390ac:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         390b0:	e24dd004 	sub	sp, sp, #4	; 0x4
         390b4:	e28d000c 	add	r0, sp, #12	; 0xc
         390b8:	e3a01014 	mov	r1, #20	; 0x14
         390bc:	e3a02000 	mov	r2, #0	; 0x0
         390c0:	e3a0c501 	mov	ip, #4194304	; 0x400000
         390c4:	e3a0e001 	mov	lr, #1	; 0x1
         390c8:	e3a03000 	mov	r3, #0	; 0x0
         390cc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         390d0:	e1a0300e 	mov	r3, lr
         390d4:	e1a0100c 	mov	r1, ip
         390d8:	e3a0001c 	mov	r0, #28	; 0x1c
         390dc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         390e0:	e28d3040 	add	r3, sp, #64	; 0x40
         390e4:	e92d0008 	stmdb	sp!, {r3}
         390e8:	e28d3024 	add	r3, sp, #36	; 0x24
         390ec:	e28d0028 	add	r0, sp, #40	; 0x28
         390f0:	e3a02002 	mov	r2, #2	; 0x2
         390f4:	e3a01001 	mov	r1, #1	; 0x1
         390f8:	eb6e8713 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         390fc:	e28dd024 	add	sp, sp, #36	; 0x24
         39100:	e1b05000 	movs	r5, r0
         39104:	0a000005 	beq	39120 <TAsyncEvent::Cancel(unsigned long, unsigned long, unsigned char)+0x108>
         39108:	e28d0004 	add	r0, sp, #4	; 0x4
         3910c:	e3a01000 	mov	r1, #0	; 0x0
         39110:	eb6e5583 	bl	1bce724 <TUObject::$__dt(void)>
         39114:	e28dd00c 	add	sp, sp, #12	; 0xc
         39118:	e1a00005 	mov	r0, r5
         3911c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         39120:	e3390000 	teq	r9, #0	; 0x0
         39124:	0a000002 	beq	39134 <TAsyncEvent::Cancel(unsigned long, unsigned long, unsigned char)+0x11c>
         39128:	e1a00004 	mov	r0, r4
         3912c:	eb6e5586 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
         39130:	e1a05000 	mov	r5, r0
         39134:	e28dd004 	add	sp, sp, #4	; 0x4
         39138:	eaffffd6 	b	39098 <TAsyncEvent::Cancel(unsigned long, unsigned long, unsigned char)+0x80>
    */
}

