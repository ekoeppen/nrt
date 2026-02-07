#include "DDKIncludes/OS600/UserSemaphore.h"

/**
 * Symbol: TSemaphoreGroup::Init(unsigned long)
 * Address: 001d4e5c
 */
long		TSemaphoreGroup::Init(ULong num = 1) {
    /*
        1d4e5c:	e1a0c00d 	mov	ip, sp
        1d4e60:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1d4e64:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d4e68:	e1a04000 	mov	r4, r0
        1d4e6c:	e1a05001 	mov	r5, r1
        1d4e70:	e3a06000 	mov	r6, #0	; 0x0
        1d4e74:	e5806018 	str	r6, [r0, #24]
        1d4e78:	e59f3024 	ldr	r3, [pc, #24]	; 1d4ea4 <TSemaphoreGroup::Init(unsigned long)+0x48>
        1d4e7c:	e3a02028 	mov	r2, #40	; 0x28
        1d4e80:	e3a00000 	mov	r0, #0	; 0x0
        1d4e84:	eb60bcf9 	bl	1a04270 <$__nw_v__FPvUiT2PFPv_v>
        1d4e88:	e5840010 	str	r0, [r4, #16]	; fField16
        1d4e8c:	e3300000 	teq	r0, #0	; 0x0
        1d4e90:	03e00000 	mvneq	r0, #0	; 0x0
        1d4e94:	05a46014 	streq	r6, [r4, #20]!	; fField20
        1d4e98:	11a00006 	movne	r0, r6
        1d4e9c:	15a45014 	strne	r5, [r4, #20]!	; fField20
        1d4ea0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1d4ea4:	01aef7b4 	streqh	pc, [lr, r4]!
    */
}

/**
 * Symbol: TSemaphoreGroup::__dt(void)
 * Address: 001d4ea8
 */
TSemaphoreGroup::~TSemaphoreGroup(void) {
    /*
        1d4ea8:	e1a0c00d 	mov	ip, sp
        1d4eac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d4eb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d4eb4:	e1a04000 	mov	r4, r0
        1d4eb8:	e1a05001 	mov	r5, r1
        1d4ebc:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1d4ec0:	e3300000 	teq	r0, #0	; 0x0
        1d4ec4:	159f2018 	ldrne	r2, [pc, #18]	; 1d4ee4 <TSemaphoreGroup::__dt(void)+0x3c>
        1d4ec8:	13a01028 	movne	r1, #40	; 0x28
        1d4ecc:	1b60bce8 	blne	1a04274 <$__dl_v(void *, unsigned int, void (*)(void *, int))>
        1d4ed0:	e3150001 	tst	r5, #1	; 0x1
        1d4ed4:	11a00004 	movne	r0, r4
        1d4ed8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1d4edc:	1a67e1ff 	bne	1bcd6e0 <$__dl(void *)>
        1d4ee0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1d4ee4:	01af0858 	moveq	r0, r8, asr r8
    */
}

/**
 * Symbol: TSemaphoreGroup::UnWindOp(TSemaphoreOpList *, long)
 * Address: 001d4ee8
 */
TSemaphoreGroup::UnWindOp(TSemaphoreOpList *, long) {
    /*
        1d4ee8:	e92d4000 	stmdb	sp!, {lr}
        1d4eec:	e2522001 	subs	r2, r2, #1	; 0x1
        1d4ef0:	48bd8000 	ldmmiia	sp!, {pc}
        1d4ef4:	e5913010 	ldr	r3, [r1, #16]	; fField16
        1d4ef8:	e793c102 	ldr	ip, [r3, r2, lsl #2]
        1d4efc:	e1a0382c 	mov	r3, ip, lsr #16
        1d4f00:	e1a0c80c 	mov	ip, ip, lsl #16
        1d4f04:	e1a0c84c 	mov	ip, ip, asr #16
        1d4f08:	e590e014 	ldr	lr, [r0, #20]	; fField20
        1d4f0c:	e15e0003 	cmp	lr, r3
        1d4f10:	3a000005 	bcc	1d4f2c <TSemaphoreGroup::UnWindOp(TSemaphoreOpList *, long)+0x44>
        1d4f14:	e0833103 	add	r3, r3, r3, lsl #2
        1d4f18:	e590e010 	ldr	lr, [r0, #16]	; fField16
        1d4f1c:	e08e3183 	add	r3, lr, r3, lsl #3
        1d4f20:	e5b3e014 	ldr	lr, [r3, #20]!	; fField20
        1d4f24:	e04ec00c 	sub	ip, lr, ip
        1d4f28:	e583c000 	str	ip, [r3]
        1d4f2c:	e2522001 	subs	r2, r2, #1	; 0x1
        1d4f30:	5affffef 	bpl	1d4ef4 <TSemaphoreGroup::UnWindOp(TSemaphoreOpList *, long)+0xc>
        1d4f34:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)
 * Address: 001d4f38
 */
long		TSemaphoreGroup::SemOp(TUSemaphoreOpList* semListObj, SemFlags flags = kWaitOnBlock) {
    /*
        1d4f38:	e1a0c00d 	mov	ip, sp
        1d4f3c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1d4f40:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d4f44:	e1a05000 	mov	r5, r0
        1d4f48:	e1a04001 	mov	r4, r1
        1d4f4c:	e3a07000 	mov	r7, #0	; 0x0
        1d4f50:	e3a06000 	mov	r6, #0	; 0x0
        1d4f54:	e5910014 	ldr	r0, [r1, #20]	; fField20
        1d4f58:	e3500000 	cmp	r0, #0	; 0x0
        1d4f5c:	9a000028 	bls	1d5004 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0xcc>
        1d4f60:	e59f804c 	ldr	r8, [pc, #4c]	; 1d4fb4 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0x7c>
        1d4f64:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d4f68:	e7900106 	ldr	r0, [r0, r6, lsl #2]
        1d4f6c:	e1a01820 	mov	r1, r0, lsr #16
        1d4f70:	e1a00800 	mov	r0, r0, lsl #16
        1d4f74:	e1a00840 	mov	r0, r0, asr #16
        1d4f78:	e595c014 	ldr	ip, [r5, #20]	; fField20
        1d4f7c:	e15c0001 	cmp	ip, r1
        1d4f80:	3a00001b 	bcc	1d4ff4 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0xbc>
        1d4f84:	e595c010 	ldr	ip, [r5, #16]	; fField16
        1d4f88:	e0811101 	add	r1, r1, r1, lsl #2
        1d4f8c:	e08cc181 	add	ip, ip, r1, lsl #3
        1d4f90:	e3500000 	cmp	r0, #0	; 0x0
        1d4f94:	1a000007 	bne	1d4fb8 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0x80>
        1d4f98:	e59c0014 	ldr	r0, [ip, #20]	; fField20
        1d4f9c:	e3300000 	teq	r0, #0	; 0x0
        1d4fa0:	0a000013 	beq	1d4ff4 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0xbc>
        1d4fa4:	e1a01003 	mov	r1, r3
        1d4fa8:	e1a0000c 	mov	r0, ip
        1d4fac:	eb647a86 	bl	1af39cc <TSemaphore::$BlockOnZero(TTask *, SemFlags)>
        1d4fb0:	ea000008 	b	1d4fd8 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0xa0>
        1d4fb4:	ffffd8d7 	swinv	0x00ffd8d7
        1d4fb8:	e59c1014 	ldr	r1, [ip, #20]	; fField20
        1d4fbc:	e0810000 	add	r0, r1, r0
        1d4fc0:	ca00000a 	bgt	1d4ff0 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0xb8>
        1d4fc4:	e3500000 	cmp	r0, #0	; 0x0
        1d4fc8:	aa000008 	bge	1d4ff0 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0xb8>
        1d4fcc:	e1a01003 	mov	r1, r3
        1d4fd0:	e1a0000c 	mov	r0, ip
        1d4fd4:	eb647a7b 	bl	1af39c8 <TSemaphore::$BlockOnInc(TTask *, SemFlags)>
        1d4fd8:	e1a02006 	mov	r2, r6
        1d4fdc:	e1a01004 	mov	r1, r4
        1d4fe0:	e1a00005 	mov	r0, r5
        1d4fe4:	eb64d12a 	bl	1b09494 <TSemaphoreGroup::$UnWindOp(TSemaphoreOpList *, long)>
        1d4fe8:	e1a07008 	mov	r7, r8
        1d4fec:	ea00001f 	b	1d5070 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0x138>
        1d4ff0:	e5ac0014 	str	r0, [ip, #20]!	; fField20
        1d4ff4:	e2866001 	add	r6, r6, #1	; 0x1
        1d4ff8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1d4ffc:	e1500006 	cmp	r0, r6
        1d5000:	8affffd7 	bhi	1d4f64 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0x2c>
        1d5004:	e3a06000 	mov	r6, #0	; 0x0
        1d5008:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1d500c:	e3500000 	cmp	r0, #0	; 0x0
        1d5010:	9a000016 	bls	1d5070 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0x138>
        1d5014:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d5018:	e7901106 	ldr	r1, [r0, r6, lsl #2]
        1d501c:	e1a00821 	mov	r0, r1, lsr #16
        1d5020:	e1a01801 	mov	r1, r1, lsl #16
        1d5024:	e1a01841 	mov	r1, r1, asr #16
        1d5028:	e5952014 	ldr	r2, [r5, #20]	; fField20
        1d502c:	e1520000 	cmp	r2, r0
        1d5030:	3a00000a 	bcc	1d5060 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0x128>
        1d5034:	e0800100 	add	r0, r0, r0, lsl #2
        1d5038:	e5952010 	ldr	r2, [r5, #16]	; fField16
        1d503c:	e0820180 	add	r0, r2, r0, lsl #3
        1d5040:	e3510000 	cmp	r1, #0	; 0x0
        1d5044:	da000001 	ble	1d5050 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0x118>
        1d5048:	eb64d124 	bl	1b094e0 <TSemaphore::$WakeTasksOnInc(void)>
        1d504c:	ea000003 	b	1d5060 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0x128>
        1d5050:	aa000002 	bge	1d5060 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0x128>
        1d5054:	e5901014 	ldr	r1, [r0, #20]	; fField20
        1d5058:	e3310000 	teq	r1, #0	; 0x0
        1d505c:	0b64d120 	bleq	1b094e4 <TSemaphore::$WakeTasksOnZero(void)>
        1d5060:	e2866001 	add	r6, r6, #1	; 0x1
        1d5064:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1d5068:	e1500006 	cmp	r0, r6
        1d506c:	8affffe8 	bhi	1d5014 <TSemaphoreGroup::SemOp(TSemaphoreOpList *, SemFlags, TTask *)+0xdc>
        1d5070:	e1a00007 	mov	r0, r7
        1d5074:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

