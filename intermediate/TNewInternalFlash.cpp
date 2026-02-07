#include "include/TNewInternalFlash.h"

/**
 * Symbol: Sizeof__17TNewInternalFlashSFv
 * Address: 0013afa0
 */
void TNewInternalFlash::Sizeof() {
    /*
        13afa0:	e3a0006c 	mov	r0, #108	; 0x6c
        13afa4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::AllocateReservedBlockRange(TFlashRange *&)
 * Address: 0013afe0
 */
TNewInternalFlash::AllocateReservedBlockRange(TFlashRange *&) {
    /*
        13afe0:	e1a0c00d 	mov	ip, sp
        13afe4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        13afe8:	e24cb004 	sub	fp, ip, #4	; 0x4
        13afec:	e1a04000 	mov	r4, r0
        13aff0:	e1a05001 	mov	r5, r1
        13aff4:	e24dd010 	sub	sp, sp, #16	; 0x10
        13aff8:	e3a00203 	mov	r0, #805306368	; 0x30000000
        13affc:	e58d0008 	str	r0, [sp, #8]
        13b000:	e3a0030d 	mov	r0, #872415232	; 0x34000000
        13b004:	e58d0004 	str	r0, [sp, #4]
        13b008:	e3a00000 	mov	r0, #0	; 0x0
        13b00c:	e58d0000 	str	r0, [sp]
        13b010:	e3e01000 	mvn	r1, #0	; 0x0
        13b014:	e5940050 	ldr	r0, [r4, #80]	; fField80
        13b018:	eb64b4ff 	bl	1a6841c <TBankControlRegister::$ConfigureFlashBankDataSize(eMemoryLane)>
        13b01c:	e28d300c 	add	r3, sp, #12	; 0xc
        13b020:	e3a02801 	mov	r2, #65536	; 0x10000
        13b024:	e2422001 	sub	r2, r2, #1	; 0x1
        13b028:	e92d000c 	stmdb	sp!, {r2, r3}
        13b02c:	e28d300c 	add	r3, sp, #12	; 0xc
        13b030:	e28d2010 	add	r2, sp, #16	; 0x10
        13b034:	e28d1008 	add	r1, sp, #8	; 0x8
        13b038:	e1a00004 	mov	r0, r4
        13b03c:	eb64a489 	bl	1a64268 <TNewInternalFlash::$ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)>
        13b040:	e28dd008 	add	sp, sp, #8	; 0x8
        13b044:	e59d100c 	ldr	r1, [sp, #12]
        13b048:	e5851000 	str	r1, [r5]
        13b04c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)
 * Address: 0013b050
 */
TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &) {
    /*
        13b050:	e1a0c00d 	mov	ip, sp
        13b054:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13b058:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13b05c:	e24cb014 	sub	fp, ip, #20	; 0x14
        13b060:	e1a05000 	mov	r5, r0
        13b064:	e1a04003 	mov	r4, r3
        13b068:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        13b06c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        13b070:	e3a01801 	mov	r1, #65536	; 0x10000
        13b074:	e2411001 	sub	r1, r1, #1	; 0x1
        13b078:	e5cd1009 	strb	r1, [sp, #9]
        13b07c:	e3a000ff 	mov	r0, #255	; 0xff
        13b080:	e5cd0008 	strb	r0, [sp, #8]
        13b084:	e5cd100b 	strb	r1, [sp, #11]
        13b088:	e5cd000a 	strb	r0, [sp, #10]
        13b08c:	e3a07000 	mov	r7, #0	; 0x0
        13b090:	e595001c 	ldr	r0, [r5, #28]	; fField28
        13b094:	e595905c 	ldr	r9, [r5, #92]	; fField92
        13b098:	e58d0004 	str	r0, [sp, #4]
        13b09c:	e5951018 	ldr	r1, [r5, #24]	; fField24
        13b0a0:	eb69de28 	bl	1bb2948 <$__rt_udiv>
        13b0a4:	e58d0000 	str	r0, [sp]
        13b0a8:	e2408001 	sub	r8, r0, #1	; 0x1
        13b0ac:	e3a06000 	mov	r6, #0	; 0x0
        13b0b0:	e3500000 	cmp	r0, #0	; 0x0
        13b0b4:	9a000044 	bls	13b1cc <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0x17c>
        13b0b8:	e28d3008 	add	r3, sp, #8	; 0x8
        13b0bc:	e1a01007 	mov	r1, r7
        13b0c0:	e1a00005 	mov	r0, r5
        13b0c4:	e3a02004 	mov	r2, #4	; 0x4
        13b0c8:	eb64a877 	bl	1a652ac <TNewInternalFlash::$ReadPhysical(unsigned long, unsigned long, char *)>
        13b0cc:	e3300000 	teq	r0, #0	; 0x0
        13b0d0:	1a00004e 	bne	13b210 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0x1c0>
        13b0d4:	e59d000a 	ldr	r0, [sp, #10]
        13b0d8:	e1a00820 	mov	r0, r0, lsr #16
        13b0dc:	e33000ff 	teq	r0, #255	; 0xff
        13b0e0:	1a000014 	bne	13b138 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0xe8>
        13b0e4:	e59d0008 	ldr	r0, [sp, #8]
        13b0e8:	e1a00820 	mov	r0, r0, lsr #16
        13b0ec:	e1500008 	cmp	r0, r8
        13b0f0:	3a000006 	bcc	13b110 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0xc0>
        13b0f4:	e5940000 	ldr	r0, [r4]
        13b0f8:	e240ccff 	sub	ip, r0, #65280	; 0xff00
        13b0fc:	e33c00ff 	teq	ip, #255	; 0xff
        13b100:	0a00002a 	beq	13b1b0 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0x160>
        13b104:	e3a00089 	mov	r0, #137	; 0x89
        13b108:	e2400c2a 	sub	r0, r0, #10752	; 0x2a00
        13b10c:	ea00003f 	b	13b210 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0x1c0>
        13b110:	e7991080 	ldr	r1, [r9, r0, lsl #1]
        13b114:	e1a01821 	mov	r1, r1, lsr #16
        13b118:	e241ccff 	sub	ip, r1, #65280	; 0xff00
        13b11c:	e33c00ff 	teq	ip, #255	; 0xff
        13b120:	1afffff7 	bne	13b104 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0xb4>
        13b124:	e0890080 	add	r0, r9, r0, lsl #1
        13b128:	e5c06001 	strb	r6, [r0, #1]
        13b12c:	e1a01426 	mov	r1, r6, lsr #8
        13b130:	e5c01000 	strb	r1, [r0]
        13b134:	ea00001e 	b	13b1b4 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0x164>
        13b138:	e59d000a 	ldr	r0, [sp, #10]
        13b13c:	e3a01801 	mov	r1, #65536	; 0x10000
        13b140:	e2411001 	sub	r1, r1, #1	; 0x1
        13b144:	e1310820 	teq	r1, r0, lsr #16
        13b148:	059d2008 	ldreq	r2, [sp, #8]
        13b14c:	03a00801 	moveq	r0, #65536	; 0x10000
        13b150:	02400001 	subeq	r0, r0, #1	; 0x1
        13b154:	01300822 	teqeq	r0, r2, lsr #16
        13b158:	1a000006 	bne	13b178 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0x128>
        13b15c:	e59b1008 	ldr	r1, [fp, #8]
        13b160:	e5911000 	ldr	r1, [r1]
        13b164:	e1310000 	teq	r1, r0
        13b168:	1affffe5 	bne	13b104 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0xb4>
        13b16c:	e59b1008 	ldr	r1, [fp, #8]
        13b170:	e5816000 	str	r6, [r1]
        13b174:	ea00000e 	b	13b1b4 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0x164>
        13b178:	e59d000a 	ldr	r0, [sp, #10]
        13b17c:	e1a00820 	mov	r0, r0, lsr #16
        13b180:	e330000f 	teq	r0, #15	; 0xf
        13b184:	1a000006 	bne	13b1a4 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0x154>
        13b188:	e59b200c 	ldr	r2, [fp, #12]
        13b18c:	e5920000 	ldr	r0, [r2]
        13b190:	e1300001 	teq	r0, r1
        13b194:	1affffda 	bne	13b104 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0xb4>
        13b198:	e59b200c 	ldr	r2, [fp, #12]
        13b19c:	e5826000 	str	r6, [r2]
        13b1a0:	ea000003 	b	13b1b4 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0x164>
        13b1a4:	e5940000 	ldr	r0, [r4]
        13b1a8:	e1300001 	teq	r0, r1
        13b1ac:	1affffd4 	bne	13b104 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0xb4>
        13b1b0:	e5846000 	str	r6, [r4]
        13b1b4:	e2866001 	add	r6, r6, #1	; 0x1
        13b1b8:	e59d0004 	ldr	r0, [sp, #4]
        13b1bc:	e0877000 	add	r7, r7, r0
        13b1c0:	e59d0000 	ldr	r0, [sp]
        13b1c4:	e1560000 	cmp	r6, r0
        13b1c8:	3affffba 	bcc	13b0b8 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0x68>
        13b1cc:	e3a00000 	mov	r0, #0	; 0x0
        13b1d0:	e3580000 	cmp	r8, #0	; 0x0
        13b1d4:	9a00000c 	bls	13b20c <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0x1bc>
        13b1d8:	e7992080 	ldr	r2, [r9, r0, lsl #1]
        13b1dc:	e1a02822 	mov	r2, r2, lsr #16
        13b1e0:	e3a01801 	mov	r1, #65536	; 0x10000
        13b1e4:	e2411001 	sub	r1, r1, #1	; 0x1
        13b1e8:	e1320001 	teq	r2, r1
        13b1ec:	1a000003 	bne	13b200 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0x1b0>
        13b1f0:	e59a2000 	ldr	r2, [sl]
        13b1f4:	e1320001 	teq	r2, r1
        13b1f8:	1affffc1 	bne	13b104 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0xb4>
        13b1fc:	e58a0000 	str	r0, [sl]
        13b200:	e2800001 	add	r0, r0, #1	; 0x1
        13b204:	e1500008 	cmp	r0, r8
        13b208:	3afffff2 	bcc	13b1d8 <TNewInternalFlash::GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)+0x188>
        13b20c:	e3a00000 	mov	r0, #0	; 0x0
        13b210:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::SetupVirtualMappings(void)
 * Address: 0013b214
 */
TNewInternalFlash::SetupVirtualMappings(void) {
    /*
        13b214:	e1a0c00d 	mov	ip, sp
        13b218:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        13b21c:	e24cb004 	sub	fp, ip, #4	; 0x4
        13b220:	e1a04000 	mov	r4, r0
        13b224:	e590205c 	ldr	r2, [r0, #92]	; fField92
        13b228:	e3a00000 	mov	r0, #0	; 0x0
        13b22c:	e5941060 	ldr	r1, [r4, #96]	; fField96
        13b230:	e2413001 	sub	r3, r1, #1	; 0x1
        13b234:	e3a01801 	mov	r1, #65536	; 0x10000
        13b238:	e2411001 	sub	r1, r1, #1	; 0x1
        13b23c:	e3530000 	cmp	r3, #0	; 0x0
        13b240:	9a000008 	bls	13b268 <TNewInternalFlash::SetupVirtualMappings(void)+0x54>
        13b244:	e3a030ff 	mov	r3, #255	; 0xff
        13b248:	e082c080 	add	ip, r2, r0, lsl #1
        13b24c:	e5cc1001 	strb	r1, [ip, #1]
        13b250:	e5cc3000 	strb	r3, [ip]
        13b254:	e2800001 	add	r0, r0, #1	; 0x1
        13b258:	e594c060 	ldr	ip, [r4, #96]	; fField96
        13b25c:	e24cc001 	sub	ip, ip, #1	; 0x1
        13b260:	e15c0000 	cmp	ip, r0
        13b264:	8afffff7 	bhi	13b248 <TNewInternalFlash::SetupVirtualMappings(void)+0x34>
        13b268:	e24dd010 	sub	sp, sp, #16	; 0x10
        13b26c:	e58d100c 	str	r1, [sp, #12]
        13b270:	e58d1008 	str	r1, [sp, #8]
        13b274:	e58d1004 	str	r1, [sp, #4]
        13b278:	e58d1000 	str	r1, [sp]
        13b27c:	e1a0300d 	mov	r3, sp
        13b280:	e92d0008 	stmdb	sp!, {r3}
        13b284:	e28d3008 	add	r3, sp, #8	; 0x8
        13b288:	e28d200c 	add	r2, sp, #12	; 0xc
        13b28c:	e28d1010 	add	r1, sp, #16	; 0x10
        13b290:	e1a00004 	mov	r0, r4
        13b294:	eb64a7fb 	bl	1a65288 <TNewInternalFlash::$GatherBlockMappingInfo(unsigned long &, unsigned long &, unsigned long &, unsigned long &)>
        13b298:	e28dd004 	add	sp, sp, #4	; 0x4
        13b29c:	e3300000 	teq	r0, #0	; 0x0
        13b2a0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        13b2a4:	e3a00000 	mov	r0, #0	; 0x0
        13b2a8:	e3a02801 	mov	r2, #65536	; 0x10000
        13b2ac:	e2422001 	sub	r2, r2, #1	; 0x1
        13b2b0:	e59d1000 	ldr	r1, [sp]
        13b2b4:	e1310002 	teq	r1, r2
        13b2b8:	13a00008 	movne	r0, #8	; 0x8
        13b2bc:	e3a02801 	mov	r2, #65536	; 0x10000
        13b2c0:	e2422001 	sub	r2, r2, #1	; 0x1
        13b2c4:	e59d1004 	ldr	r1, [sp, #4]
        13b2c8:	e1310002 	teq	r1, r2
        13b2cc:	13800004 	orrne	r0, r0, #4	; 0x4
        13b2d0:	e3a02801 	mov	r2, #65536	; 0x10000
        13b2d4:	e2422001 	sub	r2, r2, #1	; 0x1
        13b2d8:	e59d1008 	ldr	r1, [sp, #8]
        13b2dc:	e1310002 	teq	r1, r2
        13b2e0:	13800002 	orrne	r0, r0, #2	; 0x2
        13b2e4:	e3a02801 	mov	r2, #65536	; 0x10000
        13b2e8:	e2422001 	sub	r2, r2, #1	; 0x1
        13b2ec:	e59d100c 	ldr	r1, [sp, #12]
        13b2f0:	e1310002 	teq	r1, r2
        13b2f4:	13800001 	orrne	r0, r0, #1	; 0x1
        13b2f8:	e59fe05c 	ldr	lr, [pc, #5c]	; 13b35c <TNewInternalFlash::SetupVirtualMappings(void)+0x148>
        13b2fc:	e93e1008 	ldmdb	lr!, {r3, ip}
        13b300:	e92d1008 	stmdb	sp!, {r3, ip}
        13b304:	e93e1008 	ldmdb	lr!, {r3, ip}
        13b308:	e92d1008 	stmdb	sp!, {r3, ip}
        13b30c:	e7dd0000 	ldrb	r0, [sp, r0]
        13b310:	e3300031 	teq	r0, #49	; 0x31
        13b314:	13a00089 	movne	r0, #137	; 0x89
        13b318:	12400c2a 	subne	r0, r0, #10752	; 0x2a00
        13b31c:	1a000019 	bne	13b388 <TNewInternalFlash::SetupVirtualMappings(void)+0x174>
        13b320:	e3a00801 	mov	r0, #65536	; 0x10000
        13b324:	e2400001 	sub	r0, r0, #1	; 0x1
        13b328:	e1310000 	teq	r1, r0
        13b32c:	15841064 	strne	r1, [r4, #100]	; fField100
        13b330:	e3a01801 	mov	r1, #65536	; 0x10000
        13b334:	e2411001 	sub	r1, r1, #1	; 0x1
        13b338:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        13b33c:	e1300001 	teq	r0, r1
        13b340:	0a000006 	beq	13b360 <TNewInternalFlash::SetupVirtualMappings(void)+0x14c>
        13b344:	e594101c 	ldr	r1, [r4, #28]	; fField28
        13b348:	e0010190 	mul	r1, r0, r1
        13b34c:	e1a00004 	mov	r0, r4
        13b350:	eb64a7dc 	bl	1a652c8 <TNewInternalFlash::$SyncErasePhysicalBlock(unsigned long)>
        13b354:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        13b358:	ea000008 	b	13b380 <TNewInternalFlash::SetupVirtualMappings(void)+0x16c>
        13b35c:	00374134 	eoreqs	r4, r7, r4, lsr r1
        13b360:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        13b364:	e1300001 	teq	r0, r1
        13b368:	0a000005 	beq	13b384 <TNewInternalFlash::SetupVirtualMappings(void)+0x170>
        13b36c:	e594101c 	ldr	r1, [r4, #28]	; fField28
        13b370:	e0010190 	mul	r1, r0, r1
        13b374:	e1a00004 	mov	r0, r4
        13b378:	eb64a7d2 	bl	1a652c8 <TNewInternalFlash::$SyncErasePhysicalBlock(unsigned long)>
        13b37c:	e59d0014 	ldr	r0, [sp, #20]	; fField20
        13b380:	e5a40064 	str	r0, [r4, #100]!	; fField100
        13b384:	e3a00000 	mov	r0, #0	; 0x0
        13b388:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::FindRange(unsigned long, TFlashRange *&)
 * Address: 0013b38c
 */
TNewInternalFlash::FindRange(unsigned long, TFlashRange *&) {
    /*
        13b38c:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
        13b390:	e3e04041 	mvn	r4, #65	; 0x41
        13b394:	e2444c29 	sub	r4, r4, #10496	; 0x2900
        13b398:	e5903018 	ldr	r3, [r0, #24]	; fField24
        13b39c:	e1530001 	cmp	r3, r1
        13b3a0:	83a03000 	movhi	r3, #0	; 0x0
        13b3a4:	8590e014 	ldrhi	lr, [r0, #20]	; fField20
        13b3a8:	835e0000 	cmphi	lr, #0	; 0x0
        13b3ac:	9a00000b 	bls	13b3e0 <TNewInternalFlash::FindRange(unsigned long, TFlashRange *&)+0x54>
        13b3b0:	e080c103 	add	ip, r0, r3, lsl #2
        13b3b4:	e59cc038 	ldr	ip, [ip, #56]	; fField56
        13b3b8:	e59c5008 	ldr	r5, [ip, #8]
        13b3bc:	e59c6030 	ldr	r6, [ip, #48]
        13b3c0:	e0855006 	add	r5, r5, r6
        13b3c4:	e1550001 	cmp	r5, r1
        13b3c8:	83a00000 	movhi	r0, #0	; 0x0
        13b3cc:	8582c000 	strhi	ip, [r2]
        13b3d0:	88bd8070 	ldmhiia	sp!, {r4, r5, r6, pc}
        13b3d4:	e2833001 	add	r3, r3, #1	; 0x1
        13b3d8:	e15e0003 	cmp	lr, r3
        13b3dc:	8afffff3 	bhi	13b3b0 <TNewInternalFlash::FindRange(unsigned long, TFlashRange *&)+0x24>
        13b3e0:	e1a00004 	mov	r0, r4
        13b3e4:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::SyncErasePhysicalBlock(unsigned long)
 * Address: 0013b3e8
 */
TNewInternalFlash::SyncErasePhysicalBlock(unsigned long) {
    /*
        13b3e8:	e1a0c00d 	mov	ip, sp
        13b3ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        13b3f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        13b3f4:	e1a04000 	mov	r4, r0
        13b3f8:	e1a05001 	mov	r5, r1
        13b3fc:	e24dd008 	sub	sp, sp, #8	; 0x8
        13b400:	e28d2004 	add	r2, sp, #4	; 0x4
        13b404:	eb64a79d 	bl	1a65280 <TNewInternalFlash::$FindRange(unsigned long, TFlashRange *&)>
        13b408:	e58d0000 	str	r0, [sp]
        13b40c:	e3300000 	teq	r0, #0	; 0x0
        13b410:	1a00000a 	bne	13b440 <TNewInternalFlash::SyncErasePhysicalBlock(unsigned long)+0x58>
        13b414:	e1a0100d 	mov	r1, sp
        13b418:	e1a00004 	mov	r0, r4
        13b41c:	e3a02001 	mov	r2, #1	; 0x1
        13b420:	eb64a79c 	bl	1a65298 <TNewInternalFlash::$InternalCheckEraseCompletion(long &, TNewInternalFlash::eCheckEraseOption)>
        13b424:	e59d0000 	ldr	r0, [sp]
        13b428:	e3300000 	teq	r0, #0	; 0x0
        13b42c:	1a000003 	bne	13b440 <TNewInternalFlash::SyncErasePhysicalBlock(unsigned long)+0x58>
        13b430:	e1a01005 	mov	r1, r5
        13b434:	e5b4201c 	ldr	r2, [r4, #28]!	; fField28
        13b438:	e59d0004 	ldr	r0, [sp, #4]
        13b43c:	eb64abbd 	bl	1a66338 <TFlashRange::$SyncErase(unsigned long, unsigned long)>
        13b440:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)
 * Address: 0013b444
 */
TNewInternalFlash::InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption) {
    /*
        13b444:	e1a0c00d 	mov	ip, sp
        13b448:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        13b44c:	e24cb004 	sub	fp, ip, #4	; 0x4
        13b450:	e1a04000 	mov	r4, r0
        13b454:	eb64a78e 	bl	1a65294 <TNewInternalFlash::$InitializeState(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)>
        13b458:	e3300000 	teq	r0, #0	; 0x0
        13b45c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        13b460:	e24dd008 	sub	sp, sp, #8	; 0x8
        13b464:	e1a0200d 	mov	r2, sp
        13b468:	e28d1004 	add	r1, sp, #4	; 0x4
        13b46c:	e1a00004 	mov	r0, r4
        13b470:	eb64a783 	bl	1a65284 <TNewInternalFlash::$FlashAllowedLocations(unsigned char &, unsigned char &)>
        13b474:	e1b05000 	movs	r5, r0
        13b478:	11a00005 	movne	r0, r5
        13b47c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        13b480:	e24dd00c 	sub	sp, sp, #12	; 0xc
        13b484:	e3a00203 	mov	r0, #805306368	; 0x30000000
        13b488:	e58d0008 	str	r0, [sp, #8]
        13b48c:	e3a0030d 	mov	r0, #872415232	; 0x34000000
        13b490:	e58d0004 	str	r0, [sp, #4]
        13b494:	e3a00000 	mov	r0, #0	; 0x0
        13b498:	e58d0000 	str	r0, [sp]
        13b49c:	e5dd0010 	ldrb	r0, [sp, #16]	; fField16
        13b4a0:	e3300000 	teq	r0, #0	; 0x0
        13b4a4:	0a000006 	beq	13b4c4 <TNewInternalFlash::InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)+0x80>
        13b4a8:	e28d3004 	add	r3, sp, #4	; 0x4
        13b4ac:	e28d2008 	add	r2, sp, #8	; 0x8
        13b4b0:	e1a0100d 	mov	r1, sp
        13b4b4:	e1a00004 	mov	r0, r4
        13b4b8:	eb64a368 	bl	1a64260 <TNewInternalFlash::$ConfigureFlashBank(unsigned long &, unsigned long &, unsigned long &)>
        13b4bc:	e1b05000 	movs	r5, r0
        13b4c0:	1a000009 	bne	13b4ec <TNewInternalFlash::InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)+0xa8>
        13b4c4:	e5dd000c 	ldrb	r0, [sp, #12]
        13b4c8:	e3300000 	teq	r0, #0	; 0x0
        13b4cc:	0a000008 	beq	13b4f4 <TNewInternalFlash::InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)+0xb0>
        13b4d0:	e28d3004 	add	r3, sp, #4	; 0x4
        13b4d4:	e28d2008 	add	r2, sp, #8	; 0x8
        13b4d8:	e1a0100d 	mov	r1, sp
        13b4dc:	e1a00004 	mov	r0, r4
        13b4e0:	eb64a35f 	bl	1a64264 <TNewInternalFlash::$ConfigureIOBank(unsigned long &, unsigned long &, unsigned long &)>
        13b4e4:	e1b05000 	movs	r5, r0
        13b4e8:	0a000001 	beq	13b4f4 <TNewInternalFlash::InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)+0xb0>
        13b4ec:	e1a00005 	mov	r0, r5
        13b4f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        13b4f4:	e59d1000 	ldr	r1, [sp]
        13b4f8:	e5841018 	str	r1, [r4, #24]	; fField24
        13b4fc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        13b500:	e3500000 	cmp	r0, #0	; 0x0
        13b504:	9a000019 	bls	13b570 <TNewInternalFlash::InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)+0x12c>
        13b508:	e594001c 	ldr	r0, [r4, #28]	; fField28
        13b50c:	e0411000 	sub	r1, r1, r0
        13b510:	e5841018 	str	r1, [r4, #24]	; fField24
        13b514:	e5942038 	ldr	r2, [r4, #56]	; fField56
        13b518:	e5921030 	ldr	r1, [r2, #48]
        13b51c:	e0410000 	sub	r0, r1, r0
        13b520:	e5820030 	str	r0, [r2, #48]
        13b524:	e1a00002 	mov	r0, r2
        13b528:	e594101c 	ldr	r1, [r4, #28]	; fField28
        13b52c:	e5922000 	ldr	r2, [r2]
        13b530:	e1a0e00f 	mov	lr, pc
        13b534:	e282f00c 	add	pc, r2, #12	; 0xc
        13b538:	e3a00001 	mov	r0, #1	; 0x1
        13b53c:	e5941014 	ldr	r1, [r4, #20]	; fField20
        13b540:	e3510001 	cmp	r1, #1	; 0x1
        13b544:	9a000009 	bls	13b570 <TNewInternalFlash::InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)+0x12c>
        13b548:	e0841100 	add	r1, r4, r0, lsl #2
        13b54c:	e5911038 	ldr	r1, [r1, #56]	; fField56
        13b550:	e5912008 	ldr	r2, [r1, #8]
        13b554:	e594301c 	ldr	r3, [r4, #28]	; fField28
        13b558:	e0422003 	sub	r2, r2, r3
        13b55c:	e2800001 	add	r0, r0, #1	; 0x1
        13b560:	e5a12008 	str	r2, [r1, #8]!
        13b564:	e5941014 	ldr	r1, [r4, #20]	; fField20
        13b568:	e1510000 	cmp	r1, r0
        13b56c:	8afffff5 	bhi	13b548 <TNewInternalFlash::InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)+0x104>
        13b570:	e594001c 	ldr	r0, [r4, #28]	; fField28
        13b574:	e5941018 	ldr	r1, [r4, #24]	; fField24
        13b578:	eb69dcf2 	bl	1bb2948 <$__rt_udiv>
        13b57c:	e5840060 	str	r0, [r4, #96]	; fField96
        13b580:	e5d41058 	ldrb	r1, [r4, #88]	; fField88
        13b584:	e59f0024 	ldr	r0, [pc, #24]	; 13b5b0 <TNewInternalFlash::InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)+0x16c>	; fField24
        13b588:	e3310000 	teq	r1, #0	; 0x0
        13b58c:	13a01001 	movne	r1, #1	; 0x1
        13b590:	e5801360 	str	r1, [r0, #864]
        13b594:	e594101c 	ldr	r1, [r4, #28]	; fField28
        13b598:	e5942018 	ldr	r2, [r4, #24]	; fField24
        13b59c:	e0421001 	sub	r1, r2, r1
        13b5a0:	e5a0135c 	str	r1, [r0, #860]!
        13b5a4:	e59f0008 	ldr	r0, [pc, #8]	; 13b5b4 <TNewInternalFlash::InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)+0x170>
        13b5a8:	e5804000 	str	r4, [r0]
        13b5ac:	eaffffce 	b	13b4ec <TNewInternalFlash::InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)+0xa8>
        13b5b0:	0c1061c4 	ldfeqs	f6, [r0], -#784
        13b5b4:	0c101568 	ldceq	5, cr1, [r0], -#416
    */
}

/**
 * Symbol: TNewInternalFlash::InitForReservedBlock(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)
 * Address: 0013b5b8
 */
TNewInternalFlash::InitForReservedBlock(TMemoryAllocator *, TNewInternalFlash::eInitHWOption) {
    /*
        13b5b8:	ea64a738 	b	1a652a0 <TNewInternalFlash::$InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)>
    */
}

/**
 * Symbol: TNewInternalFlash::Init(TMemoryAllocator *)
 * Address: 0013b5bc
 */
TNewInternalFlash::Init(TMemoryAllocator *) {
    /*
        13b5bc:	e1a0c00d 	mov	ip, sp
        13b5c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        13b5c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        13b5c8:	e1a04000 	mov	r4, r0
        13b5cc:	e3a02000 	mov	r2, #0	; 0x0
        13b5d0:	eb64a732 	bl	1a652a0 <TNewInternalFlash::$InternalInit(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)>
        13b5d4:	e1b05000 	movs	r5, r0
        13b5d8:	1a000012 	bne	13b628 <TNewInternalFlash::Init(TMemoryAllocator *)+0x6c>
        13b5dc:	e3e00001 	mvn	r0, #1	; 0x1
        13b5e0:	e5941060 	ldr	r1, [r4, #96]	; fField96
        13b5e4:	e0801081 	add	r1, r0, r1, lsl #1
        13b5e8:	e5942010 	ldr	r2, [r4, #16]	; fField16
        13b5ec:	e1a00002 	mov	r0, r2
        13b5f0:	e1a0e00f 	mov	lr, pc
        13b5f4:	e592f000 	ldr	pc, [r2]
        13b5f8:	e3300000 	teq	r0, #0	; 0x0
        13b5fc:	03a000e9 	moveq	r0, #233	; 0xe9
        13b600:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        13b604:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        13b608:	e584005c 	str	r0, [r4, #92]	; fField92
        13b60c:	e1a00004 	mov	r0, r4
        13b610:	eb64a72a 	bl	1a652c0 <TNewInternalFlash::$SetupVirtualMappings(void)>
        13b614:	e1a05000 	mov	r5, r0
        13b618:	e280cda5 	add	ip, r0, #10560	; 0x2940
        13b61c:	e37c0037 	cmn	ip, #55	; 0x37
        13b620:	01a00004 	moveq	r0, r4
        13b624:	0b64a30c 	bleq	1a6425c <TNewInternalFlash::$Clobber(void)>
        13b628:	e1a00005 	mov	r0, r5
        13b62c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &)
 * Address: 0013b630
 */
TNewInternalFlash::FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &) {
    /*
        13b630:	e1a0c00d 	mov	ip, sp
        13b634:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13b638:	e24cb004 	sub	fp, ip, #4	; 0x4
        13b63c:	e1a04000 	mov	r4, r0
        13b640:	e1a07001 	mov	r7, r1
        13b644:	e1a06002 	mov	r6, r2
        13b648:	e1a05003 	mov	r5, r3
        13b64c:	e3a08000 	mov	r8, #0	; 0x0
        13b650:	e59ba004 	ldr	sl, [fp, #4]
        13b654:	e590004c 	ldr	r0, [r0, #76]	; fField76
        13b658:	e3500000 	cmp	r0, #0	; 0x0
        13b65c:	9a00000e 	bls	13b69c <TNewInternalFlash::FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &)+0x6c>
        13b660:	e0840108 	add	r0, r4, r8, lsl #2
        13b664:	e1a0300a 	mov	r3, sl
        13b668:	e1a02005 	mov	r2, r5
        13b66c:	e1a01006 	mov	r1, r6
        13b670:	e5b09020 	ldr	r9, [r0, #32]!
        13b674:	e1a00009 	mov	r0, r9
        13b678:	eb09242f 	bl	38473c <TFlashDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)>
        13b67c:	e3300000 	teq	r0, #0	; 0x0
        13b680:	13a00001 	movne	r0, #1	; 0x1
        13b684:	15879000 	strne	r9, [r7]
        13b688:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13b68c:	e2888001 	add	r8, r8, #1	; 0x1
        13b690:	e594004c 	ldr	r0, [r4, #76]	; fField76
        13b694:	e1500008 	cmp	r0, r8
        13b698:	8afffff0 	bhi	13b660 <TNewInternalFlash::FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &)+0x30>
        13b69c:	e3a00000 	mov	r0, #0	; 0x0
        13b6a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::AvoidConflictWithRexInIOSpace(unsigned char &)
 * Address: 0013b6a4
 */
TNewInternalFlash::AvoidConflictWithRexInIOSpace(unsigned char &) {
    /*
        13b6a4:	e3a00000 	mov	r0, #0	; 0x0
        13b6a8:	e59f2020 	ldr	r2, [pc, #20]	; 13b6d0 <TNewInternalFlash::AvoidConflictWithRexInIOSpace(unsigned char &)+0x2c>	; fField20
        13b6ac:	e3a03000 	mov	r3, #0	; 0x0
        13b6b0:	e082c100 	add	ip, r2, r0, lsl #2
        13b6b4:	e59cc2e8 	ldr	ip, [ip, #744]
        13b6b8:	e33c0201 	teq	ip, #268435456	; 0x10000000
        13b6bc:	05c13000 	streqb	r3, [r1]
        13b6c0:	e2800001 	add	r0, r0, #1	; 0x1
        13b6c4:	e3500004 	cmp	r0, #4	; 0x4
        13b6c8:	3afffff8 	bcc	13b6b0 <TNewInternalFlash::AvoidConflictWithRexInIOSpace(unsigned char &)+0xc>
        13b6cc:	e1a0f00e 	mov	pc, lr
        13b6d0:	0c1061c4 	ldfeqs	f6, [r0], -#784
    */
}

/**
 * Symbol: TNewInternalFlash::FlashAllowedLocations(unsigned char &, unsigned char &)
 * Address: 0013b714
 */
TNewInternalFlash::FlashAllowedLocations(unsigned char &, unsigned char &) {
    /*
        13b714:	e1a0c00d 	mov	ip, sp
        13b718:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        13b71c:	e24cb004 	sub	fp, ip, #4	; 0x4
        13b720:	e1a06000 	mov	r6, r0
        13b724:	e1a05001 	mov	r5, r1
        13b728:	e1a04002 	mov	r4, r2
        13b72c:	e3a08001 	mov	r8, #1	; 0x1
        13b730:	e5c28000 	strb	r8, [r2]
        13b734:	e5c18000 	strb	r8, [r1]
        13b738:	e24dd004 	sub	sp, sp, #4	; 0x4
        13b73c:	e1a0100d 	mov	r1, sp
        13b740:	e59f0088 	ldr	r0, [pc, #88]	; 13b7d0 <TNewInternalFlash::FlashAllowedLocations(unsigned char &, unsigned char &)+0xbc>	; fField88
        13b744:	eb6b1651 	bl	1c01090 <$GetLastRExConfigEntry>
        13b748:	e1b01000 	movs	r1, r0
        13b74c:	e3e00da5 	mvn	r0, #10560	; 0x2940
        13b750:	e3a07000 	mov	r7, #0	; 0x0
        13b754:	0a000017 	beq	13b7b8 <TNewInternalFlash::FlashAllowedLocations(unsigned char &, unsigned char &)+0xa4>
        13b758:	e5912000 	ldr	r2, [r1]
        13b75c:	e3320001 	teq	r2, #1	; 0x1
        13b760:	1a000014 	bne	13b7b8 <TNewInternalFlash::FlashAllowedLocations(unsigned char &, unsigned char &)+0xa4>
        13b764:	e5912004 	ldr	r2, [r1, #4]
        13b768:	e3520002 	cmp	r2, #2	; 0x2
        13b76c:	8a000016 	bhi	13b7cc <TNewInternalFlash::FlashAllowedLocations(unsigned char &, unsigned char &)+0xb8>
        13b770:	e5c47000 	strb	r7, [r4]
        13b774:	e5c57000 	strb	r7, [r5]
        13b778:	e3a02000 	mov	r2, #0	; 0x0
        13b77c:	e5913004 	ldr	r3, [r1, #4]
        13b780:	e3530000 	cmp	r3, #0	; 0x0
        13b784:	9a00000b 	bls	13b7b8 <TNewInternalFlash::FlashAllowedLocations(unsigned char &, unsigned char &)+0xa4>
        13b788:	e0813102 	add	r3, r1, r2, lsl #2
        13b78c:	e5933008 	ldr	r3, [r3, #8]
        13b790:	e3330402 	teq	r3, #33554432	; 0x2000000
        13b794:	05c58000 	streqb	r8, [r5]
        13b798:	0a000002 	beq	13b7a8 <TNewInternalFlash::FlashAllowedLocations(unsigned char &, unsigned char &)+0x94>
        13b79c:	e3330201 	teq	r3, #268435456	; 0x10000000
        13b7a0:	1a000009 	bne	13b7cc <TNewInternalFlash::FlashAllowedLocations(unsigned char &, unsigned char &)+0xb8>
        13b7a4:	e5c48000 	strb	r8, [r4]
        13b7a8:	e2822001 	add	r2, r2, #1	; 0x1
        13b7ac:	e5913004 	ldr	r3, [r1, #4]
        13b7b0:	e1530002 	cmp	r3, r2
        13b7b4:	8afffff3 	bhi	13b788 <TNewInternalFlash::FlashAllowedLocations(unsigned char &, unsigned char &)+0x74>
        13b7b8:	e5d51000 	ldrb	r1, [r5]
        13b7bc:	e3310000 	teq	r1, #0	; 0x0
        13b7c0:	05d41000 	ldreqb	r1, [r4]
        13b7c4:	03310001 	teqeq	r1, #1	; 0x1
        13b7c8:	1a000001 	bne	13b7d4 <TNewInternalFlash::FlashAllowedLocations(unsigned char &, unsigned char &)+0xc0>
        13b7cc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        13b7d0:	666c7361 	strvsbt	r7, [ip], -r1, ror #6
        13b7d4:	e5d40000 	ldrb	r0, [r4]
        13b7d8:	e3300000 	teq	r0, #0	; 0x0
        13b7dc:	11a01004 	movne	r1, r4
        13b7e0:	11a00006 	movne	r0, r6
        13b7e4:	1bffffae 	blne	13b6a4 <TNewInternalFlash::AvoidConflictWithRexInIOSpace(unsigned char &)>
        13b7e8:	e1a00007 	mov	r0, r7
        13b7ec:	eafffff6 	b	13b7cc <TNewInternalFlash::FlashAllowedLocations(unsigned char &, unsigned char &)+0xb8>
    */
}

/**
 * Symbol: TNewInternalFlash::CleanUp(void)
 * Address: 0013b7f0
 */
TNewInternalFlash::CleanUp(void) {
    /*
        13b7f0:	e1a0c00d 	mov	ip, sp
        13b7f4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        13b7f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        13b7fc:	e1a04000 	mov	r4, r0
        13b800:	e5900014 	ldr	r0, [r0, #20]	; fField20
        13b804:	e3a05000 	mov	r5, #0	; 0x0
        13b808:	e3300000 	teq	r0, #0	; 0x0
        13b80c:	0a000016 	beq	13b86c <TNewInternalFlash::CleanUp(void)+0x7c>
        13b810:	e2506001 	subs	r6, r0, #1	; 0x1
        13b814:	4a000013 	bmi	13b868 <TNewInternalFlash::CleanUp(void)+0x78>
        13b818:	e0840106 	add	r0, r4, r6, lsl #2
        13b81c:	e5907038 	ldr	r7, [r0, #56]	; fField56
        13b820:	e5a05038 	str	r5, [r0, #56]!	; fField56
        13b824:	e1a00007 	mov	r0, r7
        13b828:	e5941010 	ldr	r1, [r4, #16]	; fField16
        13b82c:	e1a0e00f 	mov	lr, pc
        13b830:	e597f000 	ldr	pc, [r7]
        13b834:	e1a00007 	mov	r0, r7
        13b838:	e3a01000 	mov	r1, #0	; 0x0
        13b83c:	e5972000 	ldr	r2, [r7]
        13b840:	e1a0e00f 	mov	lr, pc
        13b844:	e282f004 	add	pc, r2, #4	; 0x4
        13b848:	e1a01007 	mov	r1, r7
        13b84c:	e5942010 	ldr	r2, [r4, #16]	; fField16
        13b850:	e1a00002 	mov	r0, r2
        13b854:	e5922000 	ldr	r2, [r2]
        13b858:	e1a0e00f 	mov	lr, pc
        13b85c:	e282f004 	add	pc, r2, #4	; 0x4
        13b860:	e2566001 	subs	r6, r6, #1	; 0x1
        13b864:	5affffeb 	bpl	13b818 <TNewInternalFlash::CleanUp(void)+0x28>
        13b868:	e5845014 	str	r5, [r4, #20]	; fField20
        13b86c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        13b870:	e3300000 	teq	r0, #0	; 0x0
        13b874:	0a000010 	beq	13b8bc <TNewInternalFlash::CleanUp(void)+0xcc>
        13b878:	e2506001 	subs	r6, r0, #1	; 0x1
        13b87c:	4a00000d 	bmi	13b8b8 <TNewInternalFlash::CleanUp(void)+0xc8>
        13b880:	e0840106 	add	r0, r4, r6, lsl #2
        13b884:	e5907020 	ldr	r7, [r0, #32]
        13b888:	e5a05020 	str	r5, [r0, #32]!
        13b88c:	e1a00007 	mov	r0, r7
        13b890:	e5941010 	ldr	r1, [r4, #16]	; fField16
        13b894:	eb0923ab 	bl	384748 <TFlashDriver::CleanUp(TMemoryAllocator &)>
        13b898:	e1a01007 	mov	r1, r7
        13b89c:	e5942010 	ldr	r2, [r4, #16]	; fField16
        13b8a0:	e1a00002 	mov	r0, r2
        13b8a4:	e5922000 	ldr	r2, [r2]
        13b8a8:	e1a0e00f 	mov	lr, pc
        13b8ac:	e282f004 	add	pc, r2, #4	; 0x4
        13b8b0:	e2566001 	subs	r6, r6, #1	; 0x1
        13b8b4:	5afffff1 	bpl	13b880 <TNewInternalFlash::CleanUp(void)+0x90>
        13b8b8:	e584504c 	str	r5, [r4, #76]	; fField76
        13b8bc:	e594105c 	ldr	r1, [r4, #92]	; fField92
        13b8c0:	e3310000 	teq	r1, #0	; 0x0
        13b8c4:	0a000005 	beq	13b8e0 <TNewInternalFlash::CleanUp(void)+0xf0>
        13b8c8:	e5942010 	ldr	r2, [r4, #16]	; fField16
        13b8cc:	e1a00002 	mov	r0, r2
        13b8d0:	e5922000 	ldr	r2, [r2]
        13b8d4:	e1a0e00f 	mov	lr, pc
        13b8d8:	e282f004 	add	pc, r2, #4	; 0x4
        13b8dc:	e584505c 	str	r5, [r4, #92]	; fField92
        13b8e0:	e5940068 	ldr	r0, [r4, #104]	; fField104
        13b8e4:	e3300000 	teq	r0, #0	; 0x0
        13b8e8:	0a000002 	beq	13b8f8 <TNewInternalFlash::CleanUp(void)+0x108>
        13b8ec:	e3a01001 	mov	r1, #1	; 0x1
        13b8f0:	eb6a4b8a 	bl	1bce720 <TULockingSemaphore::$__dt(void)>
        13b8f4:	e5a45068 	str	r5, [r4, #104]!	; fField104
        13b8f8:	e59f0004 	ldr	r0, [pc, #4]	; 13b904 <TNewInternalFlash::CleanUp(void)+0x114>
        13b8fc:	e5805000 	str	r5, [r0]
        13b900:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        13b904:	0c101568 	ldceq	5, cr1, [r0], -#416
    */
}

/**
 * Symbol: TNewInternalFlash::SearchForFlashDrivers(void)
 * Address: 0013b908
 */
TNewInternalFlash::SearchForFlashDrivers(void) {
    /*
        13b908:	e1a0c00d 	mov	ip, sp
        13b90c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        13b910:	e24cb004 	sub	fp, ip, #4	; 0x4
        13b914:	e1a04000 	mov	r4, r0
        13b918:	e3a06003 	mov	r6, #3	; 0x3
        13b91c:	e3a090e9 	mov	r9, #233	; 0xe9
        13b920:	e2499b0a 	sub	r9, r9, #10240	; 0x2800
        13b924:	e59f5094 	ldr	r5, [pc, #94]	; 13b9c0 <TNewInternalFlash::SearchForFlashDrivers(void)+0xb8>
        13b928:	e24dd008 	sub	sp, sp, #8	; 0x8
        13b92c:	e3a00000 	mov	r0, #0	; 0x0
        13b930:	e58d0004 	str	r0, [sp, #4]
        13b934:	e28d3004 	add	r3, sp, #4	; 0x4
        13b938:	e1a0200d 	mov	r2, sp
        13b93c:	e1a00006 	mov	r0, r6
        13b940:	e1a01005 	mov	r1, r5
        13b944:	ebff8d45 	bl	11ee60 <PrimNextRExConfigEntry>
        13b948:	e3300000 	teq	r0, #0	; 0x0
        13b94c:	0a000026 	beq	13b9ec <TNewInternalFlash::SearchForFlashDrivers(void)+0xe4>
        13b950:	e5901000 	ldr	r1, [r0]
        13b954:	e3310001 	teq	r1, #1	; 0x1
        13b958:	1a00001c 	bne	13b9d0 <TNewInternalFlash::SearchForFlashDrivers(void)+0xc8>
        13b95c:	e5b08004 	ldr	r8, [r0, #4]!
        13b960:	e1a00008 	mov	r0, r8
        13b964:	e5947010 	ldr	r7, [r4, #16]	; fField16
        13b968:	eb6a852b 	bl	1bdce1c <TClassInfo::$Size( const(void))>
        13b96c:	e1a01000 	mov	r1, r0
        13b970:	e1a00007 	mov	r0, r7
        13b974:	e1a0e00f 	mov	lr, pc
        13b978:	e597f000 	ldr	pc, [r7]
        13b97c:	e1b07000 	movs	r7, r0
        13b980:	01a00009 	moveq	r0, r9
        13b984:	0a00000c 	beq	13b9bc <TNewInternalFlash::SearchForFlashDrivers(void)+0xb4>
        13b988:	e1a01007 	mov	r1, r7
        13b98c:	e1a00008 	mov	r0, r8
        13b990:	eb6a6c72 	bl	1bd6b60 <TClassInfo::$MakeAt( const(void const *))>
        13b994:	e594104c 	ldr	r1, [r4, #76]	; fField76
        13b998:	e2810001 	add	r0, r1, #1	; 0x1
        13b99c:	e584004c 	str	r0, [r4, #76]	; fField76
        13b9a0:	e0840101 	add	r0, r4, r1, lsl #2
        13b9a4:	e5a07020 	str	r7, [r0, #32]!
        13b9a8:	e1a00007 	mov	r0, r7
        13b9ac:	e5941010 	ldr	r1, [r4, #16]	; fField16
        13b9b0:	eb092367 	bl	384754 <TFlashDriver::Init(TMemoryAllocator &)>
        13b9b4:	e3300000 	teq	r0, #0	; 0x0
        13b9b8:	0a000001 	beq	13b9c4 <TNewInternalFlash::SearchForFlashDrivers(void)+0xbc>
        13b9bc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        13b9c0:	66647276 	undefined
        13b9c4:	e594004c 	ldr	r0, [r4, #76]	; fField76
        13b9c8:	e3300006 	teq	r0, #6	; 0x6
        13b9cc:	0a000009 	beq	13b9f8 <TNewInternalFlash::SearchForFlashDrivers(void)+0xf0>
        13b9d0:	e28d3004 	add	r3, sp, #4	; 0x4
        13b9d4:	e1a0200d 	mov	r2, sp
        13b9d8:	e1a00006 	mov	r0, r6
        13b9dc:	e1a01005 	mov	r1, r5
        13b9e0:	ebff8d1e 	bl	11ee60 <PrimNextRExConfigEntry>
        13b9e4:	e3300000 	teq	r0, #0	; 0x0
        13b9e8:	1affffd8 	bne	13b950 <TNewInternalFlash::SearchForFlashDrivers(void)+0x48>
        13b9ec:	e594004c 	ldr	r0, [r4, #76]	; fField76
        13b9f0:	e3300006 	teq	r0, #6	; 0x6
        13b9f4:	1a000001 	bne	13ba00 <TNewInternalFlash::SearchForFlashDrivers(void)+0xf8>
        13b9f8:	e28dd008 	add	sp, sp, #8	; 0x8
        13b9fc:	ea00001d 	b	13ba78 <TNewInternalFlash::SearchForFlashDrivers(void)+0x170>
        13ba00:	e28dd008 	add	sp, sp, #8	; 0x8
        13ba04:	e2566001 	subs	r6, r6, #1	; 0x1
        13ba08:	5affffc6 	bpl	13b928 <TNewInternalFlash::SearchForFlashDrivers(void)+0x20>
        13ba0c:	e594004c 	ldr	r0, [r4, #76]	; fField76
        13ba10:	e3300000 	teq	r0, #0	; 0x0
        13ba14:	1a000017 	bne	13ba78 <TNewInternalFlash::SearchForFlashDrivers(void)+0x170>
        13ba18:	eb64b27e 	bl	1a68418 <$ClassInfo__19T28F016_SA_SVDriverSFv>
        13ba1c:	e1a05000 	mov	r5, r0
        13ba20:	e5946010 	ldr	r6, [r4, #16]	; fField16
        13ba24:	eb6a84fc 	bl	1bdce1c <TClassInfo::$Size( const(void))>
        13ba28:	e1a01000 	mov	r1, r0
        13ba2c:	e1a00006 	mov	r0, r6
        13ba30:	e1a0e00f 	mov	lr, pc
        13ba34:	e596f000 	ldr	pc, [r6]
        13ba38:	e1b06000 	movs	r6, r0
        13ba3c:	01a00009 	moveq	r0, r9
        13ba40:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        13ba44:	e1a01006 	mov	r1, r6
        13ba48:	e1a00005 	mov	r0, r5
        13ba4c:	eb6a6c43 	bl	1bd6b60 <TClassInfo::$MakeAt( const(void const *))>
        13ba50:	e594104c 	ldr	r1, [r4, #76]	; fField76
        13ba54:	e2810001 	add	r0, r1, #1	; 0x1
        13ba58:	e584004c 	str	r0, [r4, #76]	; fField76
        13ba5c:	e0840101 	add	r0, r4, r1, lsl #2
        13ba60:	e5a06020 	str	r6, [r0, #32]!
        13ba64:	e1a00006 	mov	r0, r6
        13ba68:	e5b41010 	ldr	r1, [r4, #16]!	; fField16
        13ba6c:	eb092338 	bl	384754 <TFlashDriver::Init(TMemoryAllocator &)>
        13ba70:	e3300000 	teq	r0, #0	; 0x0
        13ba74:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        13ba78:	e3a00000 	mov	r0, #0	; 0x0
        13ba7c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: ReadWrite__17TNewInternalFlashFM11TFlashRangeFUlT2Pc_lN22Pc
 * Address: 0013ba80
 */
void TNewInternalFlash::ReadWrite() {
    /*
        13ba80:	e1a0c00d 	mov	ip, sp
        13ba84:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13ba88:	e24cb004 	sub	fp, ip, #4	; 0x4
        13ba8c:	e1a06000 	mov	r6, r0
        13ba90:	e1a07001 	mov	r7, r1
        13ba94:	e1a05002 	mov	r5, r2
        13ba98:	e1b04003 	movs	r4, r3
        13ba9c:	e59b9004 	ldr	r9, [fp, #4]
        13baa0:	0a000018 	beq	13bb08 <ReadWrite__17TNewInternalFlashFM11TFlashRangeFUlT2Pc_lN22Pc+0x88>
        13baa4:	e596001c 	ldr	r0, [r6, #28]	; fField28
        13baa8:	e1a0a000 	mov	sl, r0
        13baac:	e1a08000 	mov	r8, r0
        13bab0:	e1a01005 	mov	r1, r5
        13bab4:	eb69dba3 	bl	1bb2948 <$__rt_udiv>
        13bab8:	e0488001 	sub	r8, r8, r1
        13babc:	e1580004 	cmp	r8, r4
        13bac0:	81a08004 	movhi	r8, r4
        13bac4:	e596205c 	ldr	r2, [r6, #92]	; fField92
        13bac8:	e7920080 	ldr	r0, [r2, r0, lsl #1]
        13bacc:	e1a00820 	mov	r0, r0, lsr #16
        13bad0:	e1a03009 	mov	r3, r9
        13bad4:	e92d0008 	stmdb	sp!, {r3}
        13bad8:	e0221a90 	mla	r2, r0, sl, r1
        13badc:	e1a03008 	mov	r3, r8
        13bae0:	e1a01007 	mov	r1, r7
        13bae4:	e1a00006 	mov	r0, r6
        13bae8:	eb64a5f0 	bl	1a652b0 <$ReadWritePhysical__17TNewInternalFlashFM11TFlashRangeFUlT2Pc_lN22Pc>
        13baec:	e28dd004 	add	sp, sp, #4	; 0x4
        13baf0:	e3300000 	teq	r0, #0	; 0x0
        13baf4:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13baf8:	e0544008 	subs	r4, r4, r8
        13bafc:	e0855008 	add	r5, r5, r8
        13bb00:	e0899008 	add	r9, r9, r8
        13bb04:	1affffe6 	bne	13baa4 <ReadWrite__17TNewInternalFlashFM11TFlashRangeFUlT2Pc_lN22Pc+0x24>
        13bb08:	e3a00000 	mov	r0, #0	; 0x0
        13bb0c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: ReadWritePhysical__17TNewInternalFlashFM11TFlashRangeFUlT2Pc_lN22Pc
 * Address: 0013bb10
 */
void TNewInternalFlash::ReadWritePhysical() {
    /*
        13bb10:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        13bb14:	e1a0c001 	mov	ip, r1
        13bb18:	e3a01000 	mov	r1, #0	; 0x0
        13bb1c:	e3e05041 	mvn	r5, #65	; 0x41
        13bb20:	e2455c29 	sub	r5, r5, #10496	; 0x2900
        13bb24:	e59d7018 	ldr	r7, [sp, #24]	; fField24
        13bb28:	e5904014 	ldr	r4, [r0, #20]	; fField20
        13bb2c:	e1540001 	cmp	r4, r1
        13bb30:	9a00000d 	bls	13bb6c <ReadWritePhysical__17TNewInternalFlashFM11TFlashRangeFUlT2Pc_lN22Pc+0x5c>
        13bb34:	e080e101 	add	lr, r0, r1, lsl #2
        13bb38:	e59ee038 	ldr	lr, [lr, #56]	; fField56
        13bb3c:	e59e6008 	ldr	r6, [lr, #8]
        13bb40:	e59e8030 	ldr	r8, [lr, #48]
        13bb44:	e0866008 	add	r6, r6, r8
        13bb48:	e1560002 	cmp	r6, r2
        13bb4c:	92811001 	addls	r1, r1, #1	; 0x1
        13bb50:	9afffff5 	bls	13bb2c <ReadWritePhysical__17TNewInternalFlashFM11TFlashRangeFUlT2Pc_lN22Pc+0x1c>
        13bb54:	e59e0030 	ldr	r0, [lr, #48]
        13bb58:	e59e1008 	ldr	r1, [lr, #8]
        13bb5c:	e0800001 	add	r0, r0, r1
        13bb60:	e0400002 	sub	r0, r0, r2
        13bb64:	e1530000 	cmp	r3, r0
        13bb68:	9a000001 	bls	13bb74 <ReadWritePhysical__17TNewInternalFlashFM11TFlashRangeFUlT2Pc_lN22Pc+0x64>
        13bb6c:	e1a00005 	mov	r0, r5
        13bb70:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
        13bb74:	e1500003 	cmp	r0, r3
        13bb78:	91a04000 	movls	r4, r0
        13bb7c:	81a04003 	movhi	r4, r3
        13bb80:	e1a03007 	mov	r3, r7
        13bb84:	e1a01002 	mov	r1, r2
        13bb88:	e1a0000e 	mov	r0, lr
        13bb8c:	e1a02004 	mov	r2, r4
        13bb90:	e8bd41f0 	ldmia	sp!, {r4, r5, r6, r7, r8, lr}
        13bb94:	e28cf000 	add	pc, ip, #0	; 0x0
    */
}

/**
 * Symbol: TNewInternalFlash::ReadPhysical(unsigned long, unsigned long, char *)
 * Address: 0013bb98
 */
TNewInternalFlash::ReadPhysical(unsigned long, unsigned long, char *) {
    /*
        13bb98:	e1a0c00d 	mov	ip, sp
        13bb9c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        13bba0:	e24cb004 	sub	fp, ip, #4	; 0x4
        13bba4:	e92d0008 	stmdb	sp!, {r3}
        13bba8:	e1a03002 	mov	r3, r2
        13bbac:	e1a02001 	mov	r2, r1
        13bbb0:	e59f1004 	ldr	r1, [pc, #4]	; 13bbbc <TNewInternalFlash::ReadPhysical(unsigned long, unsigned long, char *)+0x24>
        13bbb4:	eb64a5bd 	bl	1a652b0 <$ReadWritePhysical__17TNewInternalFlashFM11TFlashRangeFUlT2Pc_lN22Pc>
        13bbb8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        13bbbc:	01a66318 	moveq	r6, r8, lsl r3
    */
}

/**
 * Symbol: TNewInternalFlash::WritePhysical(unsigned long, unsigned long, char *)
 * Address: 0013bbc0
 */
TNewInternalFlash::WritePhysical(unsigned long, unsigned long, char *) {
    /*
        13bbc0:	e1a0c00d 	mov	ip, sp
        13bbc4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        13bbc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        13bbcc:	e1a07000 	mov	r7, r0
        13bbd0:	e1a06001 	mov	r6, r1
        13bbd4:	e1a05002 	mov	r5, r2
        13bbd8:	e1a04003 	mov	r4, r3
        13bbdc:	e3a08000 	mov	r8, #0	; 0x0
        13bbe0:	e59f9040 	ldr	r9, [pc, #40]	; 13bc28 <TNewInternalFlash::WritePhysical(unsigned long, unsigned long, char *)+0x68>
        13bbe4:	e1a03004 	mov	r3, r4
        13bbe8:	e92d0008 	stmdb	sp!, {r3}
        13bbec:	e1a03005 	mov	r3, r5
        13bbf0:	e1a02006 	mov	r2, r6
        13bbf4:	e1a01009 	mov	r1, r9
        13bbf8:	e1a00007 	mov	r0, r7
        13bbfc:	eb64a5ab 	bl	1a652b0 <$ReadWritePhysical__17TNewInternalFlashFM11TFlashRangeFUlT2Pc_lN22Pc>
        13bc00:	e28dd004 	add	sp, sp, #4	; 0x4
        13bc04:	e59f1020 	ldr	r1, [pc, #20]	; 13bc2c <TNewInternalFlash::WritePhysical(unsigned long, unsigned long, char *)+0x6c>	; fField20
        13bc08:	e1300001 	teq	r0, r1
        13bc0c:	1a000008 	bne	13bc34 <TNewInternalFlash::WritePhysical(unsigned long, unsigned long, char *)+0x74>
        13bc10:	e2888001 	add	r8, r8, #1	; 0x1
        13bc14:	e3380002 	teq	r8, #2	; 0x2
        13bc18:	1afffff1 	bne	13bbe4 <TNewInternalFlash::WritePhysical(unsigned long, unsigned long, char *)+0x24>
        13bc1c:	e59f000c 	ldr	r0, [pc, #c]	; 13bc30 <TNewInternalFlash::WritePhysical(unsigned long, unsigned long, char *)+0x70>
        13bc20:	eb671527 	bl	1b010c4 <$PowerOffAndReboot(long)>
        13bc24:	eaffffee 	b	13bbe4 <TNewInternalFlash::WritePhysical(unsigned long, unsigned long, char *)+0x24>
        13bc28:	01a6633c 	moveq	r6, ip, lsr r3
        13bc2c:	ffffd6c3 	swinv	0x00ffd6c3
        13bc30:	ffffd8ab 	swinv	0x00ffd8ab
        13bc34:	e1300001 	teq	r0, r1
        13bc38:	0affffe9 	beq	13bbe4 <TNewInternalFlash::WritePhysical(unsigned long, unsigned long, char *)+0x24>
        13bc3c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::Read(unsigned long, unsigned long, char *)
 * Address: 0013bc40
 */
TNewInternalFlash::Read(unsigned long, unsigned long, char *) {
    /*
        13bc40:	e1a0c00d 	mov	ip, sp
        13bc44:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        13bc48:	e24cb004 	sub	fp, ip, #4	; 0x4
        13bc4c:	e1a04000 	mov	r4, r0
        13bc50:	e1a06001 	mov	r6, r1
        13bc54:	e1a05002 	mov	r5, r2
        13bc58:	e1a07003 	mov	r7, r3
        13bc5c:	e24dd004 	sub	sp, sp, #4	; 0x4
        13bc60:	e5901068 	ldr	r1, [r0, #104]	; fField104
        13bc64:	e1a0000d 	mov	r0, sp
        13bc68:	ebfffe99 	bl	13b6d4 <TULockingSemaphoreGrabber::__ct(TULockingSemaphore *)>
        13bc6c:	e1a03007 	mov	r3, r7
        13bc70:	e92d0008 	stmdb	sp!, {r3}
        13bc74:	e1a03005 	mov	r3, r5
        13bc78:	e1a02006 	mov	r2, r6
        13bc7c:	e59f1020 	ldr	r1, [pc, #20]	; 13bca4 <TNewInternalFlash::Read(unsigned long, unsigned long, char *)+0x64>	; fField20
        13bc80:	e1a00004 	mov	r0, r4
        13bc84:	eb64a58a 	bl	1a652b4 <$ReadWrite__17TNewInternalFlashFM11TFlashRangeFUlT2Pc_lN22Pc>
        13bc88:	e1a04000 	mov	r4, r0
        13bc8c:	e5bd0004 	ldr	r0, [sp, #4]!
        13bc90:	e3300000 	teq	r0, #0	; 0x0
        13bc94:	159d0000 	ldrne	r0, [sp]
        13bc98:	1b6a77fe 	blne	1bd9c98 <TULockingSemaphore::$Release(void)>
        13bc9c:	e1a00004 	mov	r0, r4
        13bca0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        13bca4:	01a66318 	moveq	r6, r8, lsl r3
    */
}

/**
 * Symbol: TNewInternalFlash::Write(unsigned long, unsigned long, char *)
 * Address: 0013bca8
 */
TNewInternalFlash::Write(unsigned long, unsigned long, char *) {
    /*
        13bca8:	e1a0c00d 	mov	ip, sp
        13bcac:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        13bcb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        13bcb4:	e1a04000 	mov	r4, r0
        13bcb8:	e1a06001 	mov	r6, r1
        13bcbc:	e1a05002 	mov	r5, r2
        13bcc0:	e1a07003 	mov	r7, r3
        13bcc4:	e24dd004 	sub	sp, sp, #4	; 0x4
        13bcc8:	e5901068 	ldr	r1, [r0, #104]	; fField104
        13bccc:	e1a0000d 	mov	r0, sp
        13bcd0:	ebfffe7f 	bl	13b6d4 <TULockingSemaphoreGrabber::__ct(TULockingSemaphore *)>
        13bcd4:	e1a03007 	mov	r3, r7
        13bcd8:	e92d0008 	stmdb	sp!, {r3}
        13bcdc:	e1a03005 	mov	r3, r5
        13bce0:	e1a02006 	mov	r2, r6
        13bce4:	e59f1020 	ldr	r1, [pc, #20]	; 13bd0c <TNewInternalFlash::Write(unsigned long, unsigned long, char *)+0x64>	; fField20
        13bce8:	e1a00004 	mov	r0, r4
        13bcec:	eb64a570 	bl	1a652b4 <$ReadWrite__17TNewInternalFlashFM11TFlashRangeFUlT2Pc_lN22Pc>
        13bcf0:	e1a04000 	mov	r4, r0
        13bcf4:	e5bd0004 	ldr	r0, [sp, #4]!
        13bcf8:	e3300000 	teq	r0, #0	; 0x0
        13bcfc:	159d0000 	ldrne	r0, [sp]
        13bd00:	1b6a77e4 	blne	1bd9c98 <TULockingSemaphore::$Release(void)>
        13bd04:	e1a00004 	mov	r0, r4
        13bd08:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        13bd0c:	01a6633c 	moveq	r6, ip, lsr r3
    */
}

/**
 * Symbol: TNewInternalFlash::TurnPowerOn(void)
 * Address: 0013bd10
 */
TNewInternalFlash::TurnPowerOn(void) {
    /*
        13bd10:	e1a0c00d 	mov	ip, sp
        13bd14:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        13bd18:	e24cb004 	sub	fp, ip, #4	; 0x4
        13bd1c:	e5d00058 	ldrb	r0, [r0, #88]	; fField88
        13bd20:	e3300000 	teq	r0, #0	; 0x0
        13bd24:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        13bd28:	eb0961b8 	bl	394410 <IsSuperMode>
        13bd2c:	e3300000 	teq	r0, #0	; 0x0
        13bd30:	091b6800 	ldmeqdb	fp, {fp, sp, lr}
        13bd34:	0a67f7e2 	beq	1b39cc4 <$InternalVppOn(void)>
        13bd38:	13a0001d 	movne	r0, #29	; 0x1d
        13bd3c:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        13bd40:	1a6b4e9d 	bne	1c0f7bc <$EarlyIOPowerOn(unsigned long)>
    */
}

/**
 * Symbol: TNewInternalFlash::TurnPowerOff(void)
 * Address: 0013bd9c
 */
TNewInternalFlash::TurnPowerOff(void) {
    /*
        13bd9c:	e1a0c00d 	mov	ip, sp
        13bda0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        13bda4:	e24cb004 	sub	fp, ip, #4	; 0x4
        13bda8:	e5d00058 	ldrb	r0, [r0, #88]	; fField88
        13bdac:	e3300000 	teq	r0, #0	; 0x0
        13bdb0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        13bdb4:	eb096195 	bl	394410 <IsSuperMode>
        13bdb8:	e3300000 	teq	r0, #0	; 0x0
        13bdbc:	091b6800 	ldmeqdb	fp, {fp, sp, lr}
        13bdc0:	0a67f7be 	beq	1b39cc0 <$InternalVppOff(void)>
        13bdc4:	13a0001d 	movne	r0, #29	; 0x1d
        13bdc8:	191b6800 	ldmnedb	fp, {fp, sp, lr}
        13bdcc:	1a6b4e7b 	bne	1c0f7c0 <$EarlyIOPowerOff(unsigned long)>
    */
}

/**
 * Symbol: TNewInternalFlash::Clobber(void)
 * Address: 0013bdd0
 */
TNewInternalFlash::Clobber(void) {
    /*
        13bdd0:	e1a0c00d 	mov	ip, sp
        13bdd4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        13bdd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        13bddc:	e1a04000 	mov	r4, r0
        13bde0:	e24dd004 	sub	sp, sp, #4	; 0x4
        13bde4:	e5901068 	ldr	r1, [r0, #104]	; fField104
        13bde8:	e1a0000d 	mov	r0, sp
        13bdec:	ebfffe38 	bl	13b6d4 <TULockingSemaphoreGrabber::__ct(TULockingSemaphore *)>
        13bdf0:	e1a00004 	mov	r0, r4
        13bdf4:	eb64a528 	bl	1a6529c <TNewInternalFlash::$InternalClobber(void)>
        13bdf8:	e59d0000 	ldr	r0, [sp]
        13bdfc:	e3300000 	teq	r0, #0	; 0x0
        13be00:	159d0000 	ldrne	r0, [sp]
        13be04:	1b6a77a3 	blne	1bd9c98 <TULockingSemaphore::$Release(void)>
        13be08:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::InternalClobber(void)
 * Address: 0013be0c
 */
TNewInternalFlash::InternalClobber(void) {
    /*
        13be0c:	e1a0c00d 	mov	ip, sp
        13be10:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        13be14:	e24cb004 	sub	fp, ip, #4	; 0x4
        13be18:	e1a04000 	mov	r4, r0
        13be1c:	e3a06000 	mov	r6, #0	; 0x0
        13be20:	eb64a52a 	bl	1a652d0 <TNewInternalFlash::$TurnPowerOn(void)>
        13be24:	e3a05000 	mov	r5, #0	; 0x0
        13be28:	e5940014 	ldr	r0, [r4, #20]	; fField20
        13be2c:	e3500000 	cmp	r0, #0	; 0x0
        13be30:	9a00000c 	bls	13be68 <TNewInternalFlash::InternalClobber(void)+0x5c>
        13be34:	e0840105 	add	r0, r4, r5, lsl #2
        13be38:	e5900038 	ldr	r0, [r0, #56]	; fField56
        13be3c:	eb64a52e 	bl	1a652fc <TFlashRange::$EraseRange(void)>
        13be40:	e1b06000 	movs	r6, r0
        13be44:	0a000003 	beq	13be58 <TNewInternalFlash::InternalClobber(void)+0x4c>
        13be48:	e3a02000 	mov	r2, #0	; 0x0
        13be4c:	e3a01000 	mov	r1, #0	; 0x0
        13be50:	e3a00000 	mov	r0, #0	; 0x0
        13be54:	eb6ace4f 	bl	1bef798 <$Reboot(long, unsigned long, unsigned char)>
        13be58:	e2855001 	add	r5, r5, #1	; 0x1
        13be5c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        13be60:	e1500005 	cmp	r0, r5
        13be64:	8afffff2 	bhi	13be34 <TNewInternalFlash::InternalClobber(void)+0x28>
        13be68:	e24dd004 	sub	sp, sp, #4	; 0x4
        13be6c:	e3a00000 	mov	r0, #0	; 0x0
        13be70:	e5cd0001 	strb	r0, [sp, #1]
        13be74:	e5cd0000 	strb	r0, [sp]
        13be78:	e3a010ff 	mov	r1, #255	; 0xff
        13be7c:	e5cd1003 	strb	r1, [sp, #3]
        13be80:	e5cd0002 	strb	r0, [sp, #2]
        13be84:	e3a07000 	mov	r7, #0	; 0x0
        13be88:	e3a05000 	mov	r5, #0	; 0x0
        13be8c:	e5940060 	ldr	r0, [r4, #96]	; fField96
        13be90:	e2400001 	sub	r0, r0, #1	; 0x1
        13be94:	e3500000 	cmp	r0, #0	; 0x0
        13be98:	9a000016 	bls	13bef8 <TNewInternalFlash::InternalClobber(void)+0xec>
        13be9c:	e1a00805 	mov	r0, r5, lsl #16
        13bea0:	e1a00820 	mov	r0, r0, lsr #16
        13bea4:	e5cd0001 	strb	r0, [sp, #1]
        13bea8:	e1a00420 	mov	r0, r0, lsr #8
        13beac:	e5cd0000 	strb	r0, [sp]
        13beb0:	e1a0300d 	mov	r3, sp
        13beb4:	e1a01007 	mov	r1, r7
        13beb8:	e1a00004 	mov	r0, r4
        13bebc:	e3a02004 	mov	r2, #4	; 0x4
        13bec0:	eb64a503 	bl	1a652d4 <TNewInternalFlash::$WritePhysical(unsigned long, unsigned long, char *)>
        13bec4:	e1b06000 	movs	r6, r0
        13bec8:	0a000003 	beq	13bedc <TNewInternalFlash::InternalClobber(void)+0xd0>
        13becc:	e3a02000 	mov	r2, #0	; 0x0
        13bed0:	e3a01000 	mov	r1, #0	; 0x0
        13bed4:	e3a00000 	mov	r0, #0	; 0x0
        13bed8:	eb6ace2e 	bl	1bef798 <$Reboot(long, unsigned long, unsigned char)>
        13bedc:	e2855001 	add	r5, r5, #1	; 0x1
        13bee0:	e594001c 	ldr	r0, [r4, #28]	; fField28
        13bee4:	e0807007 	add	r7, r0, r7
        13bee8:	e5940060 	ldr	r0, [r4, #96]	; fField96
        13beec:	e2400001 	sub	r0, r0, #1	; 0x1
        13bef0:	e1500005 	cmp	r0, r5
        13bef4:	8affffe8 	bhi	13be9c <TNewInternalFlash::InternalClobber(void)+0x90>
        13bef8:	e594005c 	ldr	r0, [r4, #92]	; fField92
        13befc:	e3300000 	teq	r0, #0	; 0x0
        13bf00:	0a000002 	beq	13bf10 <TNewInternalFlash::InternalClobber(void)+0x104>
        13bf04:	e1a00004 	mov	r0, r4
        13bf08:	eb64a4ec 	bl	1a652c0 <TNewInternalFlash::$SetupVirtualMappings(void)>
        13bf0c:	e1a06000 	mov	r6, r0
        13bf10:	e3360000 	teq	r6, #0	; 0x0
        13bf14:	0a000003 	beq	13bf28 <TNewInternalFlash::InternalClobber(void)+0x11c>
        13bf18:	e3a02000 	mov	r2, #0	; 0x0
        13bf1c:	e3a01000 	mov	r1, #0	; 0x0
        13bf20:	e3a00000 	mov	r0, #0	; 0x0
        13bf24:	eb6ace1b 	bl	1bef798 <$Reboot(long, unsigned long, unsigned char)>
        13bf28:	e1a00004 	mov	r0, r4
        13bf2c:	eb64a4e6 	bl	1a652cc <TNewInternalFlash::$TurnPowerOff(void)>
        13bf30:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::New(void)
 * Address: 0013bf34
 */
TNewInternalFlash::New(void) {
    /*
        13bf34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetAttributes(void)
 * Address: 0013bf38
 */
TNewInternalFlash::GetAttributes(void) {
    /*
        13bf38:	e3a01018 	mov	r1, #24	; 0x18
        13bf3c:	e5d00058 	ldrb	r0, [r0, #88]	; fField88
        13bf40:	e3300000 	teq	r0, #0	; 0x0
        13bf44:	13a01008 	movne	r1, #8	; 0x8
        13bf48:	e1a00001 	mov	r0, r1
        13bf4c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetEraseRegionSize(void)
 * Address: 0013bf50
 */
TNewInternalFlash::GetEraseRegionSize(void) {
    /*
        13bf50:	e590001c 	ldr	r0, [r0, #28]	; fField28
        13bf54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetTotalSize(void)
 * Address: 0013bf58
 */
TNewInternalFlash::GetTotalSize(void) {
    /*
        13bf58:	e5901018 	ldr	r1, [r0, #24]	; fField24
        13bf5c:	e590001c 	ldr	r0, [r0, #28]	; fField28
        13bf60:	e0410000 	sub	r0, r1, r0
        13bf64:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::Status(unsigned long)
 * Address: 0013bf68
 */
TNewInternalFlash::Status(unsigned long) {
    /*
        13bf68:	e3a00001 	mov	r0, #1	; 0x1
        13bf6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetWriteProtected(unsigned char *)
 * Address: 0013bf70
 */
TNewInternalFlash::GetWriteProtected(unsigned char *) {
    /*
        13bf70:	e3a00000 	mov	r0, #0	; 0x0
        13bf74:	e5c10000 	strb	r0, [r1]
        13bf78:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::CheckEraseCompletion(long &, TNewInternalFlash::eCheckEraseOption)
 * Address: 0013bf7c
 */
TNewInternalFlash::CheckEraseCompletion(long &, TNewInternalFlash::eCheckEraseOption) {
    /*
        13bf7c:	e1a0c00d 	mov	ip, sp
        13bf80:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        13bf84:	e24cb004 	sub	fp, ip, #4	; 0x4
        13bf88:	e1a04000 	mov	r4, r0
        13bf8c:	e1a05001 	mov	r5, r1
        13bf90:	e1a06002 	mov	r6, r2
        13bf94:	e24dd004 	sub	sp, sp, #4	; 0x4
        13bf98:	e5901068 	ldr	r1, [r0, #104]	; fField104
        13bf9c:	e1a0000d 	mov	r0, sp
        13bfa0:	e3a02000 	mov	r2, #0	; 0x0
        13bfa4:	ebffff66 	bl	13bd44 <TULockingSemaphoreGrabber::__ct(TULockingSemaphore *, TULockingSemaphoreGrabber::eNonBlockOption)>
        13bfa8:	e3a00000 	mov	r0, #0	; 0x0
        13bfac:	e59d1000 	ldr	r1, [sp]
        13bfb0:	e3310000 	teq	r1, #0	; 0x0
        13bfb4:	1a000000 	bne	13bfbc <TNewInternalFlash::CheckEraseCompletion(long &, TNewInternalFlash::eCheckEraseOption)+0x40>
        13bfb8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        13bfbc:	e1a02006 	mov	r2, r6
        13bfc0:	e1a01005 	mov	r1, r5
        13bfc4:	e1a00004 	mov	r0, r4
        13bfc8:	eb64a4b2 	bl	1a65298 <TNewInternalFlash::$InternalCheckEraseCompletion(long &, TNewInternalFlash::eCheckEraseOption)>
        13bfcc:	e1a04000 	mov	r4, r0
        13bfd0:	e59d0000 	ldr	r0, [sp]
        13bfd4:	e3300000 	teq	r0, #0	; 0x0
        13bfd8:	159d0000 	ldrne	r0, [sp]
        13bfdc:	1b6a772d 	blne	1bd9c98 <TULockingSemaphore::$Release(void)>
        13bfe0:	e1a00004 	mov	r0, r4
        13bfe4:	eafffff3 	b	13bfb8 <TNewInternalFlash::CheckEraseCompletion(long &, TNewInternalFlash::eCheckEraseOption)+0x3c>
    */
}

/**
 * Symbol: TNewInternalFlash::InternalCheckEraseCompletion(long &, TNewInternalFlash::eCheckEraseOption)
 * Address: 0013c040
 */
TNewInternalFlash::InternalCheckEraseCompletion(long &, TNewInternalFlash::eCheckEraseOption) {
    /*
        13c040:	e1a0c00d 	mov	ip, sp
        13c044:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        13c048:	e24cb004 	sub	fp, ip, #4	; 0x4
        13c04c:	e1a04000 	mov	r4, r0
        13c050:	e1a05001 	mov	r5, r1
        13c054:	e1a06002 	mov	r6, r2
        13c058:	e5900048 	ldr	r0, [r0, #72]	; fField72
        13c05c:	e5810000 	str	r0, [r1]
        13c060:	e3a09001 	mov	r9, #1	; 0x1
        13c064:	e5940044 	ldr	r0, [r4, #68]	; fField68
        13c068:	e3300000 	teq	r0, #0	; 0x0
        13c06c:	13a08000 	movne	r8, #0	; 0x0
        13c070:	13a070fe 	movne	r7, #254	; 0xfe
        13c074:	12877c47 	addne	r7, r7, #18176	; 0x4700
        13c078:	1a000000 	bne	13c080 <TNewInternalFlash::InternalCheckEraseCompletion(long &, TNewInternalFlash::eCheckEraseOption)+0x40>
        13c07c:	ea000008 	b	13c0a4 <TNewInternalFlash::InternalCheckEraseCompletion(long &, TNewInternalFlash::eCheckEraseOption)+0x64>
        13c080:	e1a01005 	mov	r1, r5
        13c084:	e5940044 	ldr	r0, [r4, #68]	; fField68
        13c088:	eb64a89c 	bl	1a66300 <TFlashRange::$IsEraseComplete(long &)>
        13c08c:	e3300000 	teq	r0, #0	; 0x0
        13c090:	0a000005 	beq	13c0ac <TNewInternalFlash::InternalCheckEraseCompletion(long &, TNewInternalFlash::eCheckEraseOption)+0x6c>
        13c094:	e5848044 	str	r8, [r4, #68]	; fField68
        13c098:	e5950000 	ldr	r0, [r5]
        13c09c:	e3300000 	teq	r0, #0	; 0x0
        13c0a0:	15a40048 	strne	r0, [r4, #72]!	; fField72
        13c0a4:	e1a00009 	mov	r0, r9
        13c0a8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        13c0ac:	e3360000 	teq	r6, #0	; 0x0
        13c0b0:	01a00008 	moveq	r0, r8
        13c0b4:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        13c0b8:	e1a00007 	mov	r0, r7
        13c0bc:	eb6a835a 	bl	1bdce2c <$Sleep(unsigned long)>
        13c0c0:	eaffffee 	b	13c080 <TNewInternalFlash::InternalCheckEraseCompletion(long &, TNewInternalFlash::eCheckEraseOption)+0x40>
    */
}

/**
 * Symbol: TNewInternalFlash::Erase(unsigned long)
 * Address: 0013c10c
 */
TNewInternalFlash::Erase(unsigned long) {
    /*
        13c10c:	e1a0c00d 	mov	ip, sp
        13c110:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13c114:	e24cb004 	sub	fp, ip, #4	; 0x4
        13c118:	e1a04000 	mov	r4, r0
        13c11c:	e1a06001 	mov	r6, r1
        13c120:	e24dd004 	sub	sp, sp, #4	; 0x4
        13c124:	e5901068 	ldr	r1, [r0, #104]	; fField104
        13c128:	e1a0000d 	mov	r0, sp
        13c12c:	ebfffd68 	bl	13b6d4 <TULockingSemaphoreGrabber::__ct(TULockingSemaphore *)>
        13c130:	e24dd004 	sub	sp, sp, #4	; 0x4
        13c134:	e1a0100d 	mov	r1, sp
        13c138:	e1a00004 	mov	r0, r4
        13c13c:	e3a02001 	mov	r2, #1	; 0x1
        13c140:	eb64a454 	bl	1a65298 <TNewInternalFlash::$InternalCheckEraseCompletion(long &, TNewInternalFlash::eCheckEraseOption)>
        13c144:	e3a08000 	mov	r8, #0	; 0x0
        13c148:	e59d0000 	ldr	r0, [sp]
        13c14c:	e59f5194 	ldr	r5, [pc, #194]	; 13c2e8 <TNewInternalFlash::Erase(unsigned long)+0x1dc>
        13c150:	e3300000 	teq	r0, #0	; 0x0
        13c154:	0a000009 	beq	13c180 <TNewInternalFlash::Erase(unsigned long)+0x74>
        13c158:	e594001c 	ldr	r0, [r4, #28]	; fField28
        13c15c:	e5941064 	ldr	r1, [r4, #100]	; fField100
        13c160:	e0010190 	mul	r1, r0, r1
        13c164:	e5848048 	str	r8, [r4, #72]	; fField72
        13c168:	e1a00004 	mov	r0, r4
        13c16c:	eb64a455 	bl	1a652c8 <TNewInternalFlash::$SyncErasePhysicalBlock(unsigned long)>
        13c170:	e58d0000 	str	r0, [sp]
        13c174:	e3300000 	teq	r0, #0	; 0x0
        13c178:	11a00005 	movne	r0, r5
        13c17c:	1b6713d0 	blne	1b010c4 <$PowerOffAndReboot(long)>
        13c180:	e24dd004 	sub	sp, sp, #4	; 0x4
        13c184:	e594001c 	ldr	r0, [r4, #28]	; fField28
        13c188:	e1a0a000 	mov	sl, r0
        13c18c:	e1a01006 	mov	r1, r6
        13c190:	eb69d9ec 	bl	1bb2948 <$__rt_udiv>
        13c194:	e1a07000 	mov	r7, r0
        13c198:	e594005c 	ldr	r0, [r4, #92]	; fField92
        13c19c:	e7909087 	ldr	r9, [r0, r7, lsl #1]
        13c1a0:	e1a09829 	mov	r9, r9, lsr #16
        13c1a4:	e0060a99 	mul	r6, r9, sl
        13c1a8:	e5940064 	ldr	r0, [r4, #100]	; fField100
        13c1ac:	e00a0a90 	mul	sl, r0, sl
        13c1b0:	e1a00807 	mov	r0, r7, lsl #16
        13c1b4:	e1a00820 	mov	r0, r0, lsr #16
        13c1b8:	e5cd0001 	strb	r0, [sp, #1]
        13c1bc:	e1a00420 	mov	r0, r0, lsr #8
        13c1c0:	e5cd0000 	strb	r0, [sp]
        13c1c4:	e3a0000f 	mov	r0, #15	; 0xf
        13c1c8:	e5cd0003 	strb	r0, [sp, #3]
        13c1cc:	e5cd8002 	strb	r8, [sp, #2]
        13c1d0:	e1a0300d 	mov	r3, sp
        13c1d4:	e1a01006 	mov	r1, r6
        13c1d8:	e1a00004 	mov	r0, r4
        13c1dc:	e3a02004 	mov	r2, #4	; 0x4
        13c1e0:	eb64a43b 	bl	1a652d4 <TNewInternalFlash::$WritePhysical(unsigned long, unsigned long, char *)>
        13c1e4:	e58d0004 	str	r0, [sp, #4]
        13c1e8:	e3300000 	teq	r0, #0	; 0x0
        13c1ec:	11a00005 	movne	r0, r5
        13c1f0:	1b6713b3 	blne	1b010c4 <$PowerOffAndReboot(long)>
        13c1f4:	e3a000ff 	mov	r0, #255	; 0xff
        13c1f8:	e5cd0003 	strb	r0, [sp, #3]
        13c1fc:	e5cd8002 	strb	r8, [sp, #2]
        13c200:	e1a0300d 	mov	r3, sp
        13c204:	e1a0100a 	mov	r1, sl
        13c208:	e1a00004 	mov	r0, r4
        13c20c:	e3a02004 	mov	r2, #4	; 0x4
        13c210:	eb64a42f 	bl	1a652d4 <TNewInternalFlash::$WritePhysical(unsigned long, unsigned long, char *)>
        13c214:	e58d0004 	str	r0, [sp, #4]
        13c218:	e3300000 	teq	r0, #0	; 0x0
        13c21c:	11a00005 	movne	r0, r5
        13c220:	1b6713a7 	blne	1b010c4 <$PowerOffAndReboot(long)>
        13c224:	e5cd8003 	strb	r8, [sp, #3]
        13c228:	e5cd8002 	strb	r8, [sp, #2]
        13c22c:	e5cd8001 	strb	r8, [sp, #1]
        13c230:	e5cd8000 	strb	r8, [sp]
        13c234:	e1a0300d 	mov	r3, sp
        13c238:	e1a01006 	mov	r1, r6
        13c23c:	e1a00004 	mov	r0, r4
        13c240:	e3a02004 	mov	r2, #4	; 0x4
        13c244:	eb64a422 	bl	1a652d4 <TNewInternalFlash::$WritePhysical(unsigned long, unsigned long, char *)>
        13c248:	e58d0004 	str	r0, [sp, #4]
        13c24c:	e3300000 	teq	r0, #0	; 0x0
        13c250:	11a00005 	movne	r0, r5
        13c254:	1b67139a 	blne	1b010c4 <$PowerOffAndReboot(long)>
        13c258:	e594105c 	ldr	r1, [r4, #92]	; fField92
        13c25c:	e0811087 	add	r1, r1, r7, lsl #1
        13c260:	e5940064 	ldr	r0, [r4, #100]	; fField100
        13c264:	e5c10001 	strb	r0, [r1, #1]
        13c268:	e1a00440 	mov	r0, r0, asr #8
        13c26c:	e5c10000 	strb	r0, [r1]
        13c270:	e1a00809 	mov	r0, r9, lsl #16
        13c274:	e1a00820 	mov	r0, r0, lsr #16
        13c278:	e5840064 	str	r0, [r4, #100]	; fField100
        13c27c:	e24dd004 	sub	sp, sp, #4	; 0x4
        13c280:	e1a0200d 	mov	r2, sp
        13c284:	e1a01006 	mov	r1, r6
        13c288:	e1a00004 	mov	r0, r4
        13c28c:	eb64a3fb 	bl	1a65280 <TNewInternalFlash::$FindRange(unsigned long, TFlashRange *&)>
        13c290:	e58d0008 	str	r0, [sp, #8]
        13c294:	e3300000 	teq	r0, #0	; 0x0
        13c298:	11a00005 	movne	r0, r5
        13c29c:	1b671388 	blne	1b010c4 <$PowerOffAndReboot(long)>
        13c2a0:	eb67f687 	bl	1b39cc4 <$InternalVppOn(void)>
        13c2a4:	e1a01006 	mov	r1, r6
        13c2a8:	e594201c 	ldr	r2, [r4, #28]	; fField28
        13c2ac:	e59d0000 	ldr	r0, [sp]
        13c2b0:	eb64a81a 	bl	1a66320 <TFlashRange::$StartErase(unsigned long, unsigned long)>
        13c2b4:	e58d0008 	str	r0, [sp, #8]
        13c2b8:	e3300000 	teq	r0, #0	; 0x0
        13c2bc:	11a00005 	movne	r0, r5
        13c2c0:	1b67137f 	blne	1b010c4 <$PowerOffAndReboot(long)>
        13c2c4:	e59d0000 	ldr	r0, [sp]
        13c2c8:	e5a40044 	str	r0, [r4, #68]!	; fField68
        13c2cc:	eb67f67b 	bl	1b39cc0 <$InternalVppOff(void)>
        13c2d0:	e59d000c 	ldr	r0, [sp, #12]
        13c2d4:	e3300000 	teq	r0, #0	; 0x0
        13c2d8:	159d000c 	ldrne	r0, [sp, #12]
        13c2dc:	1b6a766d 	blne	1bd9c98 <TULockingSemaphore::$Release(void)>
        13c2e0:	e1a00008 	mov	r0, r8
        13c2e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13c2e8:	ffffd8ab 	swinv	0x00ffd8ab
    */
}

/**
 * Symbol: TNewInternalFlash::CopyUsingBuffer(unsigned long, unsigned long, unsigned long, void *, unsigned long)
 * Address: 0013c2ec
 */
TNewInternalFlash::CopyUsingBuffer(unsigned long, unsigned long, unsigned long, void *, unsigned long) {
    /*
        13c2ec:	e1a0c00d 	mov	ip, sp
        13c2f0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13c2f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        13c2f8:	e1a07000 	mov	r7, r0
        13c2fc:	e1a06001 	mov	r6, r1
        13c300:	e1a05002 	mov	r5, r2
        13c304:	e1a04003 	mov	r4, r3
        13c308:	e3530000 	cmp	r3, #0	; 0x0
        13c30c:	e59b9008 	ldr	r9, [fp, #8]
        13c310:	e59ba004 	ldr	sl, [fp, #4]
        13c314:	9a000015 	bls	13c370 <TNewInternalFlash::CopyUsingBuffer(unsigned long, unsigned long, unsigned long, void *, unsigned long)+0x84>
        13c318:	e1540009 	cmp	r4, r9
        13c31c:	91a08004 	movls	r8, r4
        13c320:	81a08009 	movhi	r8, r9
        13c324:	e1a0300a 	mov	r3, sl
        13c328:	e1a02008 	mov	r2, r8
        13c32c:	e1a01006 	mov	r1, r6
        13c330:	e1a00007 	mov	r0, r7
        13c334:	eb64a3df 	bl	1a652b8 <TNewInternalFlash::$Read(unsigned long, unsigned long, char *)>
        13c338:	e3300000 	teq	r0, #0	; 0x0
        13c33c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13c340:	e1a0300a 	mov	r3, sl
        13c344:	e1a02008 	mov	r2, r8
        13c348:	e1a01005 	mov	r1, r5
        13c34c:	e1a00007 	mov	r0, r7
        13c350:	eb64a3e0 	bl	1a652d8 <TNewInternalFlash::$Write(unsigned long, unsigned long, char *)>
        13c354:	e3300000 	teq	r0, #0	; 0x0
        13c358:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13c35c:	e0866008 	add	r6, r6, r8
        13c360:	e0855008 	add	r5, r5, r8
        13c364:	e0444008 	sub	r4, r4, r8
        13c368:	e3540000 	cmp	r4, #0	; 0x0
        13c36c:	8affffe9 	bhi	13c318 <TNewInternalFlash::CopyUsingBuffer(unsigned long, unsigned long, unsigned long, void *, unsigned long)+0x2c>
        13c370:	e3a00000 	mov	r0, #0	; 0x0
        13c374:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::Copy(unsigned long, unsigned long, unsigned long)
 * Address: 0013c378
 */
TNewInternalFlash::Copy(unsigned long, unsigned long, unsigned long) {
    /*
        13c378:	e1a0c00d 	mov	ip, sp
        13c37c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        13c380:	e24cb004 	sub	fp, ip, #4	; 0x4
        13c384:	e1a0c002 	mov	ip, r2
        13c388:	e1a0e003 	mov	lr, r3
        13c38c:	e24ddc01 	sub	sp, sp, #256	; 0x100
        13c390:	e3a03c01 	mov	r3, #256	; 0x100
        13c394:	e1a0200d 	mov	r2, sp
        13c398:	e92d000c 	stmdb	sp!, {r2, r3}
        13c39c:	e1a0300e 	mov	r3, lr
        13c3a0:	e1a0200c 	mov	r2, ip
        13c3a4:	eb649fb0 	bl	1a6426c <TNewInternalFlash::$CopyUsingBuffer(unsigned long, unsigned long, unsigned long, void *, unsigned long)>
        13c3a8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::IsVirgin(unsigned long, unsigned long)
 * Address: 0013c3ac
 */
TNewInternalFlash::IsVirgin(unsigned long, unsigned long) {
    /*
        13c3ac:	e1a0c00d 	mov	ip, sp
        13c3b0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13c3b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        13c3b8:	e1a05000 	mov	r5, r0
        13c3bc:	e1a06001 	mov	r6, r1
        13c3c0:	e1a04002 	mov	r4, r2
        13c3c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        13c3c8:	e5901068 	ldr	r1, [r0, #104]	; fField104
        13c3cc:	e1a0000d 	mov	r0, sp
        13c3d0:	ebfffcbf 	bl	13b6d4 <TULockingSemaphoreGrabber::__ct(TULockingSemaphore *)>
        13c3d4:	e595001c 	ldr	r0, [r5, #28]	; fField28
        13c3d8:	e5951018 	ldr	r1, [r5, #24]	; fField24
        13c3dc:	e0410000 	sub	r0, r1, r0
        13c3e0:	e1500006 	cmp	r0, r6
        13c3e4:	8a000005 	bhi	13c400 <TNewInternalFlash::IsVirgin(unsigned long, unsigned long)+0x54>
        13c3e8:	e59d0000 	ldr	r0, [sp]
        13c3ec:	e3300000 	teq	r0, #0	; 0x0
        13c3f0:	159d0000 	ldrne	r0, [sp]
        13c3f4:	1b6a7627 	blne	1bd9c98 <TULockingSemaphore::$Release(void)>
        13c3f8:	e3a00000 	mov	r0, #0	; 0x0
        13c3fc:	ea000034 	b	13c4d4 <TNewInternalFlash::IsVirgin(unsigned long, unsigned long)+0x128>
        13c400:	e3340000 	teq	r4, #0	; 0x0
        13c404:	0a00002c 	beq	13c4bc <TNewInternalFlash::IsVirgin(unsigned long, unsigned long)+0x110>
        13c408:	e595001c 	ldr	r0, [r5, #28]	; fField28
        13c40c:	e1a09000 	mov	r9, r0
        13c410:	e1a07000 	mov	r7, r0
        13c414:	e1a01006 	mov	r1, r6
        13c418:	eb69d94a 	bl	1bb2948 <$__rt_udiv>
        13c41c:	e1a08001 	mov	r8, r1
        13c420:	e0477001 	sub	r7, r7, r1
        13c424:	e1570004 	cmp	r7, r4
        13c428:	81a07004 	movhi	r7, r4
        13c42c:	e24dd004 	sub	sp, sp, #4	; 0x4
        13c430:	e595105c 	ldr	r1, [r5, #92]	; fField92
        13c434:	e7910080 	ldr	r0, [r1, r0, lsl #1]
        13c438:	e1a00820 	mov	r0, r0, lsr #16
        13c43c:	e00a0099 	mul	sl, r9, r0
        13c440:	e1a0200d 	mov	r2, sp
        13c444:	e1a0100a 	mov	r1, sl
        13c448:	e1a00005 	mov	r0, r5
        13c44c:	eb64a38b 	bl	1a65280 <TNewInternalFlash::$FindRange(unsigned long, TFlashRange *&)>
        13c450:	e3300000 	teq	r0, #0	; 0x0
        13c454:	0a000005 	beq	13c470 <TNewInternalFlash::IsVirgin(unsigned long, unsigned long)+0xc4>
        13c458:	e59d0004 	ldr	r0, [sp, #4]
        13c45c:	e3300000 	teq	r0, #0	; 0x0
        13c460:	0a00000f 	beq	13c4a4 <TNewInternalFlash::IsVirgin(unsigned long, unsigned long)+0xf8>
        13c464:	e59d0004 	ldr	r0, [sp, #4]
        13c468:	eb6a760a 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        13c46c:	ea00000c 	b	13c4a4 <TNewInternalFlash::IsVirgin(unsigned long, unsigned long)+0xf8>
        13c470:	e1a09007 	mov	r9, r7
        13c474:	e3380000 	teq	r8, #0	; 0x0
        13c478:	03a08004 	moveq	r8, #4	; 0x4
        13c47c:	02477004 	subeq	r7, r7, #4	; 0x4
        13c480:	e08a1008 	add	r1, sl, r8
        13c484:	e1a02007 	mov	r2, r7
        13c488:	e59d0000 	ldr	r0, [sp]
        13c48c:	eb64a79c 	bl	1a66304 <TFlashRange::$IsVirgin(unsigned long, unsigned long)>
        13c490:	e3300000 	teq	r0, #0	; 0x0
        13c494:	1a000004 	bne	13c4ac <TNewInternalFlash::IsVirgin(unsigned long, unsigned long)+0x100>
        13c498:	e59d0004 	ldr	r0, [sp, #4]
        13c49c:	e3300000 	teq	r0, #0	; 0x0
        13c4a0:	1affffef 	bne	13c464 <TNewInternalFlash::IsVirgin(unsigned long, unsigned long)+0xb8>
        13c4a4:	e3a00000 	mov	r0, #0	; 0x0
        13c4a8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13c4ac:	e0544009 	subs	r4, r4, r9
        13c4b0:	e0866009 	add	r6, r6, r9
        13c4b4:	e28dd004 	add	sp, sp, #4	; 0x4
        13c4b8:	1affffd2 	bne	13c408 <TNewInternalFlash::IsVirgin(unsigned long, unsigned long)+0x5c>
        13c4bc:	e3a04001 	mov	r4, #1	; 0x1
        13c4c0:	e59d0000 	ldr	r0, [sp]
        13c4c4:	e3300000 	teq	r0, #0	; 0x0
        13c4c8:	159d0000 	ldrne	r0, [sp]
        13c4cc:	1b6a75f1 	blne	1bd9c98 <TULockingSemaphore::$Release(void)>
        13c4d0:	e1a00004 	mov	r0, r4
        13c4d4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::Delete(void)
 * Address: 0013c50c
 */
TNewInternalFlash::Delete(void) {
    /*
        13c50c:	ea649f51 	b	1a64258 <TNewInternalFlash::$CleanUp(void)>
    */
}

/**
 * Symbol: TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)
 * Address: 0013c510
 */
TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&) {
    /*
        13c510:	e1a0c00d 	mov	ip, sp
        13c514:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        13c518:	e24cb004 	sub	fp, ip, #4	; 0x4
        13c51c:	e1a05000 	mov	r5, r0
        13c520:	e1a04001 	mov	r4, r1
        13c524:	e1a07002 	mov	r7, r2
        13c528:	e1a06003 	mov	r6, r3
        13c52c:	e24dd070 	sub	sp, sp, #112	; 0x70
        13c530:	e28d3048 	add	r3, sp, #72	; 0x48
        13c534:	e92d0008 	stmdb	sp!, {r3}
        13c538:	e1a02001 	mov	r2, r1
        13c53c:	e28d1070 	add	r1, sp, #112	; 0x70
        13c540:	e3a038ff 	mov	r3, #16711680	; 0xff0000
        13c544:	e28334ff 	add	r3, r3, #-16777216	; 0xff000000
        13c548:	eb649f4b 	bl	1a6427c <TNewInternalFlash::$FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &)>
        13c54c:	e28dd004 	add	sp, sp, #4	; 0x4
        13c550:	e3300000 	teq	r0, #0	; 0x0
        13c554:	0a000013 	beq	13c5a8 <TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)+0x98>
        13c558:	e28d3030 	add	r3, sp, #48	; 0x30
        13c55c:	e92d0008 	stmdb	sp!, {r3}
        13c560:	e1a02004 	mov	r2, r4
        13c564:	e28d106c 	add	r1, sp, #108	; 0x6c
        13c568:	e1a00005 	mov	r0, r5
        13c56c:	e3a03801 	mov	r3, #65536	; 0x10000
        13c570:	e2433001 	sub	r3, r3, #1	; 0x1
        13c574:	eb649f40 	bl	1a6427c <TNewInternalFlash::$FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &)>
        13c578:	e28dd004 	add	sp, sp, #4	; 0x4
        13c57c:	e3300000 	teq	r0, #0	; 0x0
        13c580:	0a000008 	beq	13c5a8 <TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)+0x98>
        13c584:	e28d1068 	add	r1, sp, #104	; 0x68
        13c588:	e8910003 	ldmia	r1, {r0, r1}
        13c58c:	e1310000 	teq	r1, r0
        13c590:	1a000004 	bne	13c5a8 <TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)+0x98>
        13c594:	e28d1030 	add	r1, sp, #48	; 0x30
        13c598:	e28d0048 	add	r0, sp, #72	; 0x48
        13c59c:	ebfffe91 	bl	13bfe8 <__eq__FRC21SFlashChipInformationT1>
        13c5a0:	e3300000 	teq	r0, #0	; 0x0
        13c5a4:	1a00003e 	bne	13c6a4 <TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)+0x194>
        13c5a8:	e28d3048 	add	r3, sp, #72	; 0x48
        13c5ac:	e92d0008 	stmdb	sp!, {r3}
        13c5b0:	e1a02004 	mov	r2, r4
        13c5b4:	e28d1070 	add	r1, sp, #112	; 0x70
        13c5b8:	e1a00005 	mov	r0, r5
        13c5bc:	e3a038ff 	mov	r3, #16711680	; 0xff0000
        13c5c0:	eb649f2d 	bl	1a6427c <TNewInternalFlash::$FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &)>
        13c5c4:	e28dd004 	add	sp, sp, #4	; 0x4
        13c5c8:	e3300000 	teq	r0, #0	; 0x0
        13c5cc:	0a00003f 	beq	13c6d0 <TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)+0x1c0>
        13c5d0:	e28d3030 	add	r3, sp, #48	; 0x30
        13c5d4:	e92d0008 	stmdb	sp!, {r3}
        13c5d8:	e1a02004 	mov	r2, r4
        13c5dc:	e28d106c 	add	r1, sp, #108	; 0x6c
        13c5e0:	e1a00005 	mov	r0, r5
        13c5e4:	e3a030ff 	mov	r3, #255	; 0xff
        13c5e8:	eb649f23 	bl	1a6427c <TNewInternalFlash::$FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &)>
        13c5ec:	e28dd004 	add	sp, sp, #4	; 0x4
        13c5f0:	e3300000 	teq	r0, #0	; 0x0
        13c5f4:	0a000035 	beq	13c6d0 <TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)+0x1c0>
        13c5f8:	e28d3018 	add	r3, sp, #24	; 0x18
        13c5fc:	e92d0008 	stmdb	sp!, {r3}
        13c600:	e1a02004 	mov	r2, r4
        13c604:	e28d1068 	add	r1, sp, #104	; 0x68
        13c608:	e1a00005 	mov	r0, r5
        13c60c:	e3a03cff 	mov	r3, #65280	; 0xff00
        13c610:	eb649f19 	bl	1a6427c <TNewInternalFlash::$FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &)>
        13c614:	e28dd004 	add	sp, sp, #4	; 0x4
        13c618:	e3300000 	teq	r0, #0	; 0x0
        13c61c:	0a00002b 	beq	13c6d0 <TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)+0x1c0>
        13c620:	e1a0300d 	mov	r3, sp
        13c624:	e92d0008 	stmdb	sp!, {r3}
        13c628:	e1a02004 	mov	r2, r4
        13c62c:	e28d1064 	add	r1, sp, #100	; 0x64
        13c630:	e1a00005 	mov	r0, r5
        13c634:	e3a034ff 	mov	r3, #-16777216	; 0xff000000
        13c638:	eb649f0f 	bl	1a6427c <TNewInternalFlash::$FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &)>
        13c63c:	e28dd004 	add	sp, sp, #4	; 0x4
        13c640:	e3300000 	teq	r0, #0	; 0x0
        13c644:	0a000021 	beq	13c6d0 <TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)+0x1c0>
        13c648:	e59d006c 	ldr	r0, [sp, #108]
        13c64c:	e59d1068 	ldr	r1, [sp, #104]	; fField104
        13c650:	e1300001 	teq	r0, r1
        13c654:	059d1064 	ldreq	r1, [sp, #100]	; fField100
        13c658:	01300001 	teqeq	r0, r1
        13c65c:	059d1060 	ldreq	r1, [sp, #96]	; fField96
        13c660:	01300001 	teqeq	r0, r1
        13c664:	1a000019 	bne	13c6d0 <TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)+0x1c0>
        13c668:	e28d1030 	add	r1, sp, #48	; 0x30
        13c66c:	e28d0048 	add	r0, sp, #72	; 0x48
        13c670:	ebfffe5c 	bl	13bfe8 <__eq__FRC21SFlashChipInformationT1>
        13c674:	e3300000 	teq	r0, #0	; 0x0
        13c678:	0a000014 	beq	13c6d0 <TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)+0x1c0>
        13c67c:	e28d1018 	add	r1, sp, #24	; 0x18
        13c680:	e28d0048 	add	r0, sp, #72	; 0x48
        13c684:	ebfffe57 	bl	13bfe8 <__eq__FRC21SFlashChipInformationT1>
        13c688:	e3300000 	teq	r0, #0	; 0x0
        13c68c:	0a00000f 	beq	13c6d0 <TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)+0x1c0>
        13c690:	e1a0100d 	mov	r1, sp
        13c694:	e28d0048 	add	r0, sp, #72	; 0x48
        13c698:	ebfffe52 	bl	13bfe8 <__eq__FRC21SFlashChipInformationT1>
        13c69c:	e3300000 	teq	r0, #0	; 0x0
        13c6a0:	0a00000a 	beq	13c6d0 <TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)+0x1c0>
        13c6a4:	e28d0048 	add	r0, sp, #72	; 0x48
        13c6a8:	e8b01008 	ldmia	r0!, {r3, ip}
        13c6ac:	e8a71008 	stmia	r7!, {r3, ip}
        13c6b0:	e8b01008 	ldmia	r0!, {r3, ip}
        13c6b4:	e8a71008 	stmia	r7!, {r3, ip}
        13c6b8:	e8901008 	ldmia	r0, {r3, ip}
        13c6bc:	e8871008 	stmia	r7, {r3, ip}
        13c6c0:	e59d006c 	ldr	r0, [sp, #108]
        13c6c4:	e5860000 	str	r0, [r6]
        13c6c8:	e3a00001 	mov	r0, #1	; 0x1
        13c6cc:	ea000000 	b	13c6d4 <TNewInternalFlash::CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)+0x1c4>
        13c6d0:	e3a00000 	mov	r0, #0	; 0x0
        13c6d4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::CheckFor2LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&, eMemoryLane)
 * Address: 0013c6d8
 */
TNewInternalFlash::CheckFor2LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&, eMemoryLane) {
    /*
        13c6d8:	e1a0c00d 	mov	ip, sp
        13c6dc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        13c6e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        13c6e4:	e1a05000 	mov	r5, r0
        13c6e8:	e1a04001 	mov	r4, r1
        13c6ec:	e1a07002 	mov	r7, r2
        13c6f0:	e1a06003 	mov	r6, r3
        13c6f4:	e59b8004 	ldr	r8, [fp, #4]
        13c6f8:	e24dd038 	sub	sp, sp, #56	; 0x38
        13c6fc:	e28d3018 	add	r3, sp, #24	; 0x18
        13c700:	e92d0008 	stmdb	sp!, {r3}
        13c704:	e1a03008 	mov	r3, r8
        13c708:	e1a02001 	mov	r2, r1
        13c70c:	e28d1038 	add	r1, sp, #56	; 0x38
        13c710:	e1a00005 	mov	r0, r5
        13c714:	eb649ed8 	bl	1a6427c <TNewInternalFlash::$FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &)>
        13c718:	e28dd004 	add	sp, sp, #4	; 0x4
        13c71c:	e3300000 	teq	r0, #0	; 0x0
        13c720:	1a00001e 	bne	13c7a0 <TNewInternalFlash::CheckFor2LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&, eMemoryLane)+0xc8>
        13c724:	e28d3018 	add	r3, sp, #24	; 0x18
        13c728:	e92d0008 	stmdb	sp!, {r3}
        13c72c:	e3c838ff 	bic	r3, r8, #16711680	; 0xff0000
        13c730:	e3c330ff 	bic	r3, r3, #255	; 0xff
        13c734:	e1a02004 	mov	r2, r4
        13c738:	e28d1038 	add	r1, sp, #56	; 0x38
        13c73c:	e1a00005 	mov	r0, r5
        13c740:	eb649ecd 	bl	1a6427c <TNewInternalFlash::$FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &)>
        13c744:	e28dd004 	add	sp, sp, #4	; 0x4
        13c748:	e3300000 	teq	r0, #0	; 0x0
        13c74c:	0a00001e 	beq	13c7cc <TNewInternalFlash::CheckFor2LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&, eMemoryLane)+0xf4>
        13c750:	e1a0300d 	mov	r3, sp
        13c754:	e92d0008 	stmdb	sp!, {r3}
        13c758:	e3c834ff 	bic	r3, r8, #-16777216	; 0xff000000
        13c75c:	e3c33cff 	bic	r3, r3, #65280	; 0xff00
        13c760:	e1a02004 	mov	r2, r4
        13c764:	e28d1034 	add	r1, sp, #52	; 0x34
        13c768:	e1a00005 	mov	r0, r5
        13c76c:	eb649ec2 	bl	1a6427c <TNewInternalFlash::$FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &)>
        13c770:	e28dd004 	add	sp, sp, #4	; 0x4
        13c774:	e3300000 	teq	r0, #0	; 0x0
        13c778:	0a000013 	beq	13c7cc <TNewInternalFlash::CheckFor2LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&, eMemoryLane)+0xf4>
        13c77c:	e28d1030 	add	r1, sp, #48	; 0x30
        13c780:	e8910003 	ldmia	r1, {r0, r1}
        13c784:	e1310000 	teq	r1, r0
        13c788:	1a00000f 	bne	13c7cc <TNewInternalFlash::CheckFor2LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&, eMemoryLane)+0xf4>
        13c78c:	e1a0100d 	mov	r1, sp
        13c790:	e28d0018 	add	r0, sp, #24	; 0x18
        13c794:	ebfffe13 	bl	13bfe8 <__eq__FRC21SFlashChipInformationT1>
        13c798:	e3300000 	teq	r0, #0	; 0x0
        13c79c:	0a00000a 	beq	13c7cc <TNewInternalFlash::CheckFor2LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&, eMemoryLane)+0xf4>
        13c7a0:	e28d0018 	add	r0, sp, #24	; 0x18
        13c7a4:	e8b01008 	ldmia	r0!, {r3, ip}
        13c7a8:	e8a71008 	stmia	r7!, {r3, ip}
        13c7ac:	e8b01008 	ldmia	r0!, {r3, ip}
        13c7b0:	e8a71008 	stmia	r7!, {r3, ip}
        13c7b4:	e8901008 	ldmia	r0, {r3, ip}
        13c7b8:	e8871008 	stmia	r7, {r3, ip}
        13c7bc:	e59d0034 	ldr	r0, [sp, #52]
        13c7c0:	e5860000 	str	r0, [r6]
        13c7c4:	e3a00001 	mov	r0, #1	; 0x1
        13c7c8:	ea000000 	b	13c7d0 <TNewInternalFlash::CheckFor2LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&, eMemoryLane)+0xf8>
        13c7cc:	e3a00000 	mov	r0, #0	; 0x0
        13c7d0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::AlignAndMapVMRange(unsigned long &, unsigned long, long, unsigned char, Perm)
 * Address: 0013c7d4
 */
TNewInternalFlash::AlignAndMapVMRange(unsigned long &, unsigned long, long, unsigned char, Perm) {
    /*
        13c7d4:	e1a0c00d 	mov	ip, sp
        13c7d8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        13c7dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        13c7e0:	e1a05001 	mov	r5, r1
        13c7e4:	e1a04002 	mov	r4, r2
        13c7e8:	e99b0102 	ldmib	fp, {r1, r8}
        13c7ec:	e20170ff 	and	r7, r1, #255	; 0xff
        13c7f0:	e2431001 	sub	r1, r3, #1	; 0x1
        13c7f4:	e2911601 	adds	r1, r1, #1048576	; 0x100000
        13c7f8:	42411001 	submi	r1, r1, #1	; 0x1
        13c7fc:	42811601 	addmi	r1, r1, #1048576	; 0x100000
        13c800:	e1a01a41 	mov	r1, r1, asr #20
        13c804:	e1a03a01 	mov	r3, r1, lsl #20
        13c808:	e5952000 	ldr	r2, [r5]
        13c80c:	e1a06002 	mov	r6, r2
        13c810:	e0822003 	add	r2, r2, r3
        13c814:	e5852000 	str	r2, [r5]
        13c818:	e5900054 	ldr	r0, [r0, #84]	; fField84
        13c81c:	e3300000 	teq	r0, #0	; 0x0
        13c820:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        13c824:	e1560002 	cmp	r6, r2
        13c828:	291ba9f0 	ldmcsdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        13c82c:	e1a03007 	mov	r3, r7
        13c830:	e92d0008 	stmdb	sp!, {r3}
        13c834:	e1a03008 	mov	r3, r8
        13c838:	e1a01004 	mov	r1, r4
        13c83c:	e1a00006 	mov	r0, r6
        13c840:	e3a02000 	mov	r2, #0	; 0x0
        13c844:	eb007764 	bl	15a5dc <AddNewSecPNJT__FUlN214PermUc>
        13c848:	e28dd004 	add	sp, sp, #4	; 0x4
        13c84c:	e2866601 	add	r6, r6, #1048576	; 0x100000
        13c850:	e2844601 	add	r4, r4, #1048576	; 0x100000
        13c854:	e5950000 	ldr	r0, [r5]
        13c858:	e1560000 	cmp	r6, r0
        13c85c:	3afffff2 	bcc	13c82c <TNewInternalFlash::AlignAndMapVMRange(unsigned long &, unsigned long, long, unsigned char, Perm)+0x58>
        13c860:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::CheckFor1LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&, eMemoryLane)
 * Address: 0013c864
 */
TNewInternalFlash::CheckFor1LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&, eMemoryLane) {
    /*
        13c864:	e1a0c00d 	mov	ip, sp
        13c868:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        13c86c:	e24cb004 	sub	fp, ip, #4	; 0x4
        13c870:	e1a05002 	mov	r5, r2
        13c874:	e1a04003 	mov	r4, r3
        13c878:	e59b2004 	ldr	r2, [fp, #4]
        13c87c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        13c880:	e1a0300d 	mov	r3, sp
        13c884:	e92d0008 	stmdb	sp!, {r3}
        13c888:	e1a03002 	mov	r3, r2
        13c88c:	e1a02001 	mov	r2, r1
        13c890:	e28d101c 	add	r1, sp, #28	; 0x1c
        13c894:	eb649e78 	bl	1a6427c <TNewInternalFlash::$FindDriverAble(TFlashDriver *&, unsigned long, eMemoryLane, SFlashChipInformation &)>
        13c898:	e28dd004 	add	sp, sp, #4	; 0x4
        13c89c:	e3300000 	teq	r0, #0	; 0x0
        13c8a0:	0a000009 	beq	13c8cc <TNewInternalFlash::CheckFor1LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&, eMemoryLane)+0x68>
        13c8a4:	e1a0000d 	mov	r0, sp
        13c8a8:	e8b01008 	ldmia	r0!, {r3, ip}
        13c8ac:	e8a51008 	stmia	r5!, {r3, ip}
        13c8b0:	e8b01008 	ldmia	r0!, {r3, ip}
        13c8b4:	e8a51008 	stmia	r5!, {r3, ip}
        13c8b8:	e8901008 	ldmia	r0, {r3, ip}
        13c8bc:	e8851008 	stmia	r5, {r3, ip}
        13c8c0:	e59d0018 	ldr	r0, [sp, #24]	; fField24
        13c8c4:	e5840000 	str	r0, [r4]
        13c8c8:	e3a00001 	mov	r0, #1	; 0x1
        13c8cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::InitializeState(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)
 * Address: 0013c8d0
 */
TNewInternalFlash::InitializeState(TMemoryAllocator *, TNewInternalFlash::eInitHWOption) {
    /*
        13c8d0:	e1a0c00d 	mov	ip, sp
        13c8d4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        13c8d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        13c8dc:	e1a04000 	mov	r4, r0
        13c8e0:	e1a05002 	mov	r5, r2
        13c8e4:	e3a07000 	mov	r7, #0	; 0x0
        13c8e8:	e5801010 	str	r1, [r0, #16]	; fField16
        13c8ec:	e580704c 	str	r7, [r0, #76]	; fField76
        13c8f0:	e5807014 	str	r7, [r0, #20]	; fField20
        13c8f4:	e580701c 	str	r7, [r0, #28]	; fField28
        13c8f8:	e5807018 	str	r7, [r0, #24]	; fField24
        13c8fc:	e580705c 	str	r7, [r0, #92]	; fField92
        13c900:	e5807060 	str	r7, [r0, #96]	; fField96
        13c904:	e3a00801 	mov	r0, #65536	; 0x10000
        13c908:	e2400001 	sub	r0, r0, #1	; 0x1
        13c90c:	e5840064 	str	r0, [r4, #100]	; fField100
        13c910:	e5847044 	str	r7, [r4, #68]	; fField68
        13c914:	e5847048 	str	r7, [r4, #72]	; fField72
        13c918:	e5c47058 	strb	r7, [r4, #88]	; fField88
        13c91c:	eb095ebb 	bl	394410 <IsSuperMode>
        13c920:	e3300000 	teq	r0, #0	; 0x0
        13c924:	1a000011 	bne	13c970 <TNewInternalFlash::InitializeState(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)+0xa0>
        13c928:	e3a0000c 	mov	r0, #12	; 0xc
        13c92c:	eb6a4781 	bl	1bce738 <$__nw(unsigned int)>
        13c930:	e1b06000 	movs	r6, r0
        13c934:	0a000004 	beq	13c94c <TNewInternalFlash::InitializeState(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)+0x7c>
        13c938:	e5c67004 	strb	r7, [r6, #4]
        13c93c:	e5867000 	str	r7, [r6]
        13c940:	e2861008 	add	r1, r6, #8	; 0x8
        13c944:	e1a00006 	mov	r0, r6
        13c948:	eb6a6035 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        13c94c:	e1b00006 	movs	r0, r6
        13c950:	e5846068 	str	r6, [r4, #104]	; fField104
        13c954:	03a000e9 	moveq	r0, #233	; 0xe9
        13c958:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        13c95c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        13c960:	eb6a6454 	bl	1bd5ab8 <TULockingSemaphore::$Init(void)>
        13c964:	e3300000 	teq	r0, #0	; 0x0
        13c968:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        13c96c:	ea000000 	b	13c974 <TNewInternalFlash::InitializeState(TMemoryAllocator *, TNewInternalFlash::eInitHWOption)+0xa4>
        13c970:	e5847068 	str	r7, [r4, #104]	; fField104
        13c974:	e5845054 	str	r5, [r4, #84]	; fField84
        13c978:	eb64aea8 	bl	1a68420 <$GetBankControlRegister__20TBankControlRegisterSFv>
        13c97c:	e5840050 	str	r0, [r4, #80]	; fField80
        13c980:	e1a00004 	mov	r0, r4
        13c984:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        13c988:	ea64a24b 	b	1a652bc <TNewInternalFlash::$SearchForFlashDrivers(void)>
    */
}

/**
 * Symbol: TNewInternalFlash::GetEraseRegionTime(void)
 * Address: 0013c98c
 */
TNewInternalFlash::GetEraseRegionTime(void) {
    /*
        13c98c:	e3a00000 	mov	r0, #0	; 0x0
        13c990:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::AcknowledgeReset(void)
 * Address: 0013c994
 */
TNewInternalFlash::AcknowledgeReset(void) {
    /*
        13c994:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::SuspendErase(unsigned long, unsigned long, unsigned long)
 * Address: 0013c998
 */
TNewInternalFlash::SuspendErase(unsigned long, unsigned long, unsigned long) {
    /*
        13c998:	e3a00000 	mov	r0, #0	; 0x0
        13c99c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::ResumeErase(unsigned long)
 * Address: 0013c9a0
 */
TNewInternalFlash::ResumeErase(unsigned long) {
    /*
        13c9a0:	e3a00000 	mov	r0, #0	; 0x0
        13c9a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::DeepSleep(unsigned long)
 * Address: 0013c9a8
 */
TNewInternalFlash::DeepSleep(unsigned long) {
    /*
        13c9a8:	e3a00000 	mov	r0, #0	; 0x0
        13c9ac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::Wakeup(unsigned long)
 * Address: 0013c9b0
 */
TNewInternalFlash::Wakeup(unsigned long) {
    /*
        13c9b0:	e3a00000 	mov	r0, #0	; 0x0
        13c9b4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::ResetCard(void)
 * Address: 0013c9b8
 */
TNewInternalFlash::ResetCard(void) {
    /*
        13c9b8:	e3a00000 	mov	r0, #0	; 0x0
        13c9bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetPhysResource(void)
 * Address: 0013c9c0
 */
TNewInternalFlash::GetPhysResource(void) {
    /*
        13c9c0:	e3a00000 	mov	r0, #0	; 0x0
        13c9c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::AddFlashRange(TFlashRange *, unsigned long &, unsigned long &, unsigned long &, unsigned long)
 * Address: 0013c9c8
 */
TNewInternalFlash::AddFlashRange(TFlashRange *, unsigned long &, unsigned long &, unsigned long &, unsigned long) {
    /*
        13c9c8:	e1a0c00d 	mov	ip, sp
        13c9cc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        13c9d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        13c9d4:	e1a04000 	mov	r4, r0
        13c9d8:	e1a05001 	mov	r5, r1
        13c9dc:	e1a01003 	mov	r1, r3
        13c9e0:	e59b7008 	ldr	r7, [fp, #8]
        13c9e4:	e59b8004 	ldr	r8, [fp, #4]
        13c9e8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        13c9ec:	e3500003 	cmp	r0, #3	; 0x3
        13c9f0:	23e00da5 	mvncs	r0, #10560	; 0x2940
        13c9f4:	291ba9f0 	ldmcsdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        13c9f8:	e2803001 	add	r3, r0, #1	; 0x1
        13c9fc:	e5843014 	str	r3, [r4, #20]	; fField20
        13ca00:	e0840100 	add	r0, r4, r0, lsl #2
        13ca04:	e5a05038 	str	r5, [r0, #56]!	; fField56
        13ca08:	e5d40058 	ldrb	r0, [r4, #88]	; fField88
        13ca0c:	e3300000 	teq	r0, #0	; 0x0
        13ca10:	05950020 	ldreq	r0, [r5, #32]
        13ca14:	03300000 	teqeq	r0, #0	; 0x0
        13ca18:	13a00001 	movne	r0, #1	; 0x1
        13ca1c:	03a00000 	moveq	r0, #0	; 0x0
        13ca20:	e5c40058 	strb	r0, [r4, #88]	; fField88
        13ca24:	e5956030 	ldr	r6, [r5, #48]
        13ca28:	e5920000 	ldr	r0, [r2]
        13ca2c:	e0800006 	add	r0, r0, r6
        13ca30:	e3a03002 	mov	r3, #2	; 0x2
        13ca34:	e5820000 	str	r0, [r2]
        13ca38:	e3a02001 	mov	r2, #1	; 0x1
        13ca3c:	e92d000c 	stmdb	sp!, {r2, r3}
        13ca40:	e1a03006 	mov	r3, r6
        13ca44:	e1a02007 	mov	r2, r7
        13ca48:	e1a00004 	mov	r0, r4
        13ca4c:	eb649dfb 	bl	1a64240 <TNewInternalFlash::$AlignAndMapVMRange(unsigned long &, unsigned long, long, unsigned char, Perm)>
        13ca50:	e28dd008 	add	sp, sp, #8	; 0x8
        13ca54:	e3a03003 	mov	r3, #3	; 0x3
        13ca58:	e3a02000 	mov	r2, #0	; 0x0
        13ca5c:	e92d000c 	stmdb	sp!, {r2, r3}
        13ca60:	e3a01004 	mov	r1, #4	; 0x4
        13ca64:	e5950038 	ldr	r0, [r5, #56]	; fField56
        13ca68:	eb69d7b6 	bl	1bb2948 <$__rt_udiv>
        13ca6c:	e0030096 	mul	r3, r6, r0
        13ca70:	e1a02007 	mov	r2, r7
        13ca74:	e1a01008 	mov	r1, r8
        13ca78:	e1a00004 	mov	r0, r4
        13ca7c:	eb649def 	bl	1a64240 <TNewInternalFlash::$AlignAndMapVMRange(unsigned long &, unsigned long, long, unsigned char, Perm)>
        13ca80:	e28dd008 	add	sp, sp, #8	; 0x8
        13ca84:	e595003c 	ldr	r0, [r5, #60]
        13ca88:	e594101c 	ldr	r1, [r4, #28]	; fField28
        13ca8c:	e1510000 	cmp	r1, r0
        13ca90:	35a4001c 	strcc	r0, [r4, #28]!	; fField28
        13ca94:	e1a00005 	mov	r0, r5
        13ca98:	eb64a61f 	bl	1a6631c <TFlashRange::$ResetAllBlocksStatus(void)>
        13ca9c:	e3a00000 	mov	r0, #0	; 0x0
        13caa0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::RegisterClientInfo(unsigned long)
 * Address: 0013caa4
 */
TNewInternalFlash::RegisterClientInfo(unsigned long) {
    /*
        13caa4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetWriteErrorAddress(void)
 * Address: 0013caa8
 */
TNewInternalFlash::GetWriteErrorAddress(void) {
    /*
        13caa8:	e3a00000 	mov	r0, #0	; 0x0
        13caac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetDataOffset(void)
 * Address: 0013cab0
 */
TNewInternalFlash::GetDataOffset(void) {
    /*
        13cab0:	e3a00000 	mov	r0, #0	; 0x0
        13cab4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetGroupSize(void)
 * Address: 0013cab8
 */
TNewInternalFlash::GetGroupSize(void) {
    /*
        13cab8:	e3a00000 	mov	r0, #0	; 0x0
        13cabc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetChipsPerGroup(void)
 * Address: 0013cac0
 */
TNewInternalFlash::GetChipsPerGroup(void) {
    /*
        13cac0:	e3a00000 	mov	r0, #0	; 0x0
        13cac4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetBlocksPerPartition(void)
 * Address: 0013cac8
 */
TNewInternalFlash::GetBlocksPerPartition(void) {
    /*
        13cac8:	e3a00000 	mov	r0, #0	; 0x0
        13cacc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetMaxConcurrentVppOps(void)
 * Address: 0013cad0
 */
TNewInternalFlash::GetMaxConcurrentVppOps(void) {
    /*
        13cad0:	e3a00000 	mov	r0, #0	; 0x0
        13cad4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetEraseRegionCurrent(void)
 * Address: 0013cad8
 */
TNewInternalFlash::GetEraseRegionCurrent(void) {
    /*
        13cad8:	e3a00000 	mov	r0, #0	; 0x0
        13cadc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetWriteRegionCurrent(void)
 * Address: 0013cae0
 */
TNewInternalFlash::GetWriteRegionCurrent(void) {
    /*
        13cae0:	e3a00000 	mov	r0, #0	; 0x0
        13cae4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetWriteAccessTime(void)
 * Address: 0013cae8
 */
TNewInternalFlash::GetWriteAccessTime(void) {
    /*
        13cae8:	e3a00000 	mov	r0, #0	; 0x0
        13caec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::ConfigureIOBank(unsigned long &, unsigned long &, unsigned long &)
 * Address: 0013caf0
 */
TNewInternalFlash::ConfigureIOBank(unsigned long &, unsigned long &, unsigned long &) {
    /*
        13caf0:	e1a0c00d 	mov	ip, sp
        13caf4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13caf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        13cafc:	e1a04000 	mov	r4, r0
        13cb00:	e1a07001 	mov	r7, r1
        13cb04:	e1a06002 	mov	r6, r2
        13cb08:	e1a05003 	mov	r5, r3
        13cb0c:	e5900054 	ldr	r0, [r0, #84]	; fField84
        13cb10:	e3300000 	teq	r0, #0	; 0x0
        13cb14:	0a000007 	beq	13cb38 <TNewInternalFlash::ConfigureIOBank(unsigned long &, unsigned long &, unsigned long &)+0x48>
        13cb18:	e3a03000 	mov	r3, #0	; 0x0
        13cb1c:	e92d0008 	stmdb	sp!, {r3}
        13cb20:	e3a03003 	mov	r3, #3	; 0x3
        13cb24:	e3a02000 	mov	r2, #0	; 0x0
        13cb28:	e3a01201 	mov	r1, #268435456	; 0x10000000
        13cb2c:	e5950000 	ldr	r0, [r5]
        13cb30:	eb0076a9 	bl	15a5dc <AddNewSecPNJT__FUlN214PermUc>
        13cb34:	e28dd004 	add	sp, sp, #4	; 0x4
        13cb38:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        13cb3c:	e28d3018 	add	r3, sp, #24	; 0x18
        13cb40:	e1a0200d 	mov	r2, sp
        13cb44:	e1a00004 	mov	r0, r4
        13cb48:	e5951000 	ldr	r1, [r5]
        13cb4c:	eb649dc0 	bl	1a64254 <TNewInternalFlash::$CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)>
        13cb50:	e3300000 	teq	r0, #0	; 0x0
        13cb54:	0a000026 	beq	13cbf4 <TNewInternalFlash::ConfigureIOBank(unsigned long &, unsigned long &, unsigned long &)+0x104>
        13cb58:	e3a0104c 	mov	r1, #76	; 0x4c
        13cb5c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        13cb60:	e1a0e00f 	mov	lr, pc
        13cb64:	e590f000 	ldr	pc, [r0]
        13cb68:	e3300000 	teq	r0, #0	; 0x0
        13cb6c:	03a000e9 	moveq	r0, #233	; 0xe9
        13cb70:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        13cb74:	0a00001e 	beq	13cbf4 <TNewInternalFlash::ConfigureIOBank(unsigned long &, unsigned long &, unsigned long &)+0x104>
        13cb78:	e1a01000 	mov	r1, r0
        13cb7c:	e3a0004c 	mov	r0, #76	; 0x4c
        13cb80:	eb093f3d 	bl	38c87c <C$$dtorvec$$Limit+0x1f08>
        13cb84:	e1b09000 	movs	r9, r0
        13cb88:	0a000010 	beq	13cbd0 <TNewInternalFlash::ConfigureIOBank(unsigned long &, unsigned long &, unsigned long &)+0xe0>
        13cb8c:	e1a08009 	mov	r8, r9
        13cb90:	e59dc018 	ldr	ip, [sp, #24]	; fField24
        13cb94:	e597e000 	ldr	lr, [r7]
        13cb98:	e596a000 	ldr	sl, [r6]
        13cb9c:	e1a0200d 	mov	r2, sp
        13cba0:	e5950000 	ldr	r0, [r5]
        13cba4:	e3e01000 	mvn	r1, #0	; 0x0
        13cba8:	e5943010 	ldr	r3, [r4, #16]	; fField16
        13cbac:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13cbb0:	e1a0300a 	mov	r3, sl
        13cbb4:	e1a0200e 	mov	r2, lr
        13cbb8:	e1a0100c 	mov	r1, ip
        13cbbc:	e1a00008 	mov	r0, r8
        13cbc0:	eb64ae11 	bl	1a6840c <TFlashRange::$__ct(TFlashDriver *, unsigned long, unsigned long, unsigned long, eMemoryLane, SFlashChipInformation const &, TMemoryAllocator &)>
        13cbc4:	e28dd010 	add	sp, sp, #16	; 0x10
        13cbc8:	e59f0028 	ldr	r0, [pc, #28]	; 13cbf8 <TNewInternalFlash::ConfigureIOBank(unsigned long &, unsigned long &, unsigned long &)+0x108>	; fField28
        13cbcc:	e5880000 	str	r0, [r8]
        13cbd0:	e1a01009 	mov	r1, r9
        13cbd4:	e1a02005 	mov	r2, r5
        13cbd8:	e3a03201 	mov	r3, #268435456	; 0x10000000
        13cbdc:	e92d000c 	stmdb	sp!, {r2, r3}
        13cbe0:	e1a03006 	mov	r3, r6
        13cbe4:	e1a02007 	mov	r2, r7
        13cbe8:	e1a00004 	mov	r0, r4
        13cbec:	eb649d92 	bl	1a6423c <TNewInternalFlash::$AddFlashRange(TFlashRange *, unsigned long &, unsigned long &, unsigned long &, unsigned long)>
        13cbf0:	e28dd008 	add	sp, sp, #8	; 0x8
        13cbf4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13cbf8:	0001e3d4 	ldreqd	lr, [r1], -r4
    */
}

/**
 * Symbol: TNewInternalFlash::GetReadAccessTime(void)
 * Address: 0013cbfc
 */
TNewInternalFlash::GetReadAccessTime(void) {
    /*
        13cbfc:	e3a00000 	mov	r0, #0	; 0x0
        13cc00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetVendorInfo(void)
 * Address: 0013cc04
 */
TNewInternalFlash::GetVendorInfo(void) {
    /*
        13cc04:	e3a00000 	mov	r0, #0	; 0x0
        13cc08:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::GetSocketNumber(void)
 * Address: 0013cc0c
 */
TNewInternalFlash::GetSocketNumber(void) {
    /*
        13cc0c:	e3a00000 	mov	r0, #0	; 0x0
        13cc10:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::VppStatus(void)
 * Address: 0013cc14
 */
TNewInternalFlash::VppStatus(void) {
    /*
        13cc14:	e3a00000 	mov	r0, #0	; 0x0
        13cc18:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::VppRisingTime(void)
 * Address: 0013cc1c
 */
TNewInternalFlash::VppRisingTime(void) {
    /*
        13cc1c:	e3a00000 	mov	r0, #0	; 0x0
        13cc20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::FlashSpecific(unsigned long, void *, unsigned long)
 * Address: 0013cc24
 */
TNewInternalFlash::FlashSpecific(unsigned long, void *, unsigned long) {
    /*
        13cc24:	e3a00000 	mov	r0, #0	; 0x0
        13cc28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)
 * Address: 0013cc2c
 */
TNewInternalFlash::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long) {
    /*
        13cc2c:	e3a00000 	mov	r0, #0	; 0x0
        13cc30:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::SuspendService(void)
 * Address: 0013cc34
 */
TNewInternalFlash::SuspendService(void) {
    /*
        13cc34:	e3a00000 	mov	r0, #0	; 0x0
        13cc38:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long)
 * Address: 0013cc3c
 */
TNewInternalFlash::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long) {
    /*
        13cc3c:	e3a00000 	mov	r0, #0	; 0x0
        13cc40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewInternalFlash::ConfigureFlashBank(unsigned long &, unsigned long &, unsigned long &)
 * Address: 0013cc44
 */
TNewInternalFlash::ConfigureFlashBank(unsigned long &, unsigned long &, unsigned long &) {
    /*
        13cc44:	e1a0c00d 	mov	ip, sp
        13cc48:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13cc4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        13cc50:	e1a04000 	mov	r4, r0
        13cc54:	e1a07001 	mov	r7, r1
        13cc58:	e1a06002 	mov	r6, r2
        13cc5c:	e1a05003 	mov	r5, r3
        13cc60:	e5900054 	ldr	r0, [r0, #84]	; fField84
        13cc64:	e3300000 	teq	r0, #0	; 0x0
        13cc68:	0a000007 	beq	13cc8c <TNewInternalFlash::ConfigureFlashBank(unsigned long &, unsigned long &, unsigned long &)+0x48>
        13cc6c:	e3a03000 	mov	r3, #0	; 0x0
        13cc70:	e92d0008 	stmdb	sp!, {r3}
        13cc74:	e3a03003 	mov	r3, #3	; 0x3
        13cc78:	e3a02000 	mov	r2, #0	; 0x0
        13cc7c:	e3a01402 	mov	r1, #33554432	; 0x2000000
        13cc80:	e3a0030d 	mov	r0, #872415232	; 0x34000000
        13cc84:	eb007654 	bl	15a5dc <AddNewSecPNJT__FUlN214PermUc>
        13cc88:	e28dd004 	add	sp, sp, #4	; 0x4
        13cc8c:	e3e01000 	mvn	r1, #0	; 0x0
        13cc90:	e5940050 	ldr	r0, [r4, #80]	; fField80
        13cc94:	eb64ade0 	bl	1a6841c <TBankControlRegister::$ConfigureFlashBankDataSize(eMemoryLane)>
        13cc98:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        13cc9c:	e28d3018 	add	r3, sp, #24	; 0x18
        13cca0:	e1a0200d 	mov	r2, sp
        13cca4:	e1a00004 	mov	r0, r4
        13cca8:	e3a0130d 	mov	r1, #872415232	; 0x34000000
        13ccac:	eb649d68 	bl	1a64254 <TNewInternalFlash::$CheckFor4LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&)>
        13ccb0:	e3300000 	teq	r0, #0	; 0x0
        13ccb4:	0a000028 	beq	13cd5c <TNewInternalFlash::ConfigureFlashBank(unsigned long &, unsigned long &, unsigned long &)+0x118>
        13ccb8:	e3a0104c 	mov	r1, #76	; 0x4c
        13ccbc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        13ccc0:	e1a0e00f 	mov	lr, pc
        13ccc4:	e590f000 	ldr	pc, [r0]
        13ccc8:	e3300000 	teq	r0, #0	; 0x0
        13cccc:	03a000e9 	moveq	r0, #233	; 0xe9
        13ccd0:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        13ccd4:	0a00001e 	beq	13cd54 <TNewInternalFlash::ConfigureFlashBank(unsigned long &, unsigned long &, unsigned long &)+0x110>
        13ccd8:	e1a01000 	mov	r1, r0
        13ccdc:	e3a0004c 	mov	r0, #76	; 0x4c
        13cce0:	eb093ee5 	bl	38c87c <C$$dtorvec$$Limit+0x1f08>
        13cce4:	e1b09000 	movs	r9, r0
        13cce8:	0a000010 	beq	13cd30 <TNewInternalFlash::ConfigureFlashBank(unsigned long &, unsigned long &, unsigned long &)+0xec>
        13ccec:	e1a08009 	mov	r8, r9
        13ccf0:	e59dc018 	ldr	ip, [sp, #24]	; fField24
        13ccf4:	e597e000 	ldr	lr, [r7]
        13ccf8:	e596a000 	ldr	sl, [r6]
        13ccfc:	e1a0200d 	mov	r2, sp
        13cd00:	e5950000 	ldr	r0, [r5]
        13cd04:	e3e01000 	mvn	r1, #0	; 0x0
        13cd08:	e5943010 	ldr	r3, [r4, #16]	; fField16
        13cd0c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13cd10:	e1a0300a 	mov	r3, sl
        13cd14:	e1a0200e 	mov	r2, lr
        13cd18:	e1a0100c 	mov	r1, ip
        13cd1c:	e1a00008 	mov	r0, r8
        13cd20:	eb64adb9 	bl	1a6840c <TFlashRange::$__ct(TFlashDriver *, unsigned long, unsigned long, unsigned long, eMemoryLane, SFlashChipInformation const &, TMemoryAllocator &)>
        13cd24:	e28dd010 	add	sp, sp, #16	; 0x10
        13cd28:	e59f0028 	ldr	r0, [pc, #28]	; 13cd58 <TNewInternalFlash::ConfigureFlashBank(unsigned long &, unsigned long &, unsigned long &)+0x114>	; fField28
        13cd2c:	e5880000 	str	r0, [r8]
        13cd30:	e1a01009 	mov	r1, r9
        13cd34:	e1a02005 	mov	r2, r5
        13cd38:	e3a03402 	mov	r3, #33554432	; 0x2000000
        13cd3c:	e92d000c 	stmdb	sp!, {r2, r3}
        13cd40:	e1a03006 	mov	r3, r6
        13cd44:	e1a02007 	mov	r2, r7
        13cd48:	e1a00004 	mov	r0, r4
        13cd4c:	eb649d3a 	bl	1a6423c <TNewInternalFlash::$AddFlashRange(TFlashRange *, unsigned long &, unsigned long &, unsigned long &, unsigned long)>
        13cd50:	e28dd008 	add	sp, sp, #8	; 0x8
        13cd54:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13cd58:	0001e3d4 	ldreqd	lr, [r1], -r4
        13cd5c:	e24dd004 	sub	sp, sp, #4	; 0x4
        13cd60:	e1a0300d 	mov	r3, sp
        13cd64:	e3a02801 	mov	r2, #65536	; 0x10000
        13cd68:	e2422001 	sub	r2, r2, #1	; 0x1
        13cd6c:	e92d000c 	stmdb	sp!, {r2, r3}
        13cd70:	e1a03005 	mov	r3, r5
        13cd74:	e1a02006 	mov	r2, r6
        13cd78:	e1a01007 	mov	r1, r7
        13cd7c:	e1a00004 	mov	r0, r4
        13cd80:	eb649d38 	bl	1a64268 <TNewInternalFlash::$ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)>
        13cd84:	e28dd008 	add	sp, sp, #8	; 0x8
        13cd88:	e3300000 	teq	r0, #0	; 0x0
        13cd8c:	1a000025 	bne	13ce28 <TNewInternalFlash::ConfigureFlashBank(unsigned long &, unsigned long &, unsigned long &)+0x1e4>
        13cd90:	e59d1000 	ldr	r1, [sp]
        13cd94:	e3310000 	teq	r1, #0	; 0x0
        13cd98:	03e00da5 	mvneq	r0, #10560	; 0x2940
        13cd9c:	0a000021 	beq	13ce28 <TNewInternalFlash::ConfigureFlashBank(unsigned long &, unsigned long &, unsigned long &)+0x1e4>
        13cda0:	e1a02005 	mov	r2, r5
        13cda4:	e3a03402 	mov	r3, #33554432	; 0x2000000
        13cda8:	e92d000c 	stmdb	sp!, {r2, r3}
        13cdac:	e1a03006 	mov	r3, r6
        13cdb0:	e1a02007 	mov	r2, r7
        13cdb4:	e1a00004 	mov	r0, r4
        13cdb8:	eb649d1f 	bl	1a6423c <TNewInternalFlash::$AddFlashRange(TFlashRange *, unsigned long &, unsigned long &, unsigned long &, unsigned long)>
        13cdbc:	e28dd008 	add	sp, sp, #8	; 0x8
        13cdc0:	e3300000 	teq	r0, #0	; 0x0
        13cdc4:	1a000017 	bne	13ce28 <TNewInternalFlash::ConfigureFlashBank(unsigned long &, unsigned long &, unsigned long &)+0x1e4>
        13cdc8:	e1a0300d 	mov	r3, sp
        13cdcc:	e3a028ff 	mov	r2, #16711680	; 0xff0000
        13cdd0:	e28224ff 	add	r2, r2, #-16777216	; 0xff000000
        13cdd4:	e92d000c 	stmdb	sp!, {r2, r3}
        13cdd8:	e1a03005 	mov	r3, r5
        13cddc:	e1a02006 	mov	r2, r6
        13cde0:	e1a01007 	mov	r1, r7
        13cde4:	e1a00004 	mov	r0, r4
        13cde8:	eb649d1e 	bl	1a64268 <TNewInternalFlash::$ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)>
        13cdec:	e28dd008 	add	sp, sp, #8	; 0x8
        13cdf0:	e3300000 	teq	r0, #0	; 0x0
        13cdf4:	1a00000b 	bne	13ce28 <TNewInternalFlash::ConfigureFlashBank(unsigned long &, unsigned long &, unsigned long &)+0x1e4>
        13cdf8:	e59d1000 	ldr	r1, [sp]
        13cdfc:	e3310000 	teq	r1, #0	; 0x0
        13ce00:	03a00000 	moveq	r0, #0	; 0x0
        13ce04:	0a000007 	beq	13ce28 <TNewInternalFlash::ConfigureFlashBank(unsigned long &, unsigned long &, unsigned long &)+0x1e4>
        13ce08:	e1a02005 	mov	r2, r5
        13ce0c:	e3a03402 	mov	r3, #33554432	; 0x2000000
        13ce10:	e92d000c 	stmdb	sp!, {r2, r3}
        13ce14:	e1a03006 	mov	r3, r6
        13ce18:	e1a02007 	mov	r2, r7
        13ce1c:	e1a00004 	mov	r0, r4
        13ce20:	eb649d05 	bl	1a6423c <TNewInternalFlash::$AddFlashRange(TFlashRange *, unsigned long &, unsigned long &, unsigned long &, unsigned long)>
        13ce24:	e28dd008 	add	sp, sp, #8	; 0x8
        13ce28:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewInternalFlash::ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)
 * Address: 0013ce2c
 */
TNewInternalFlash::ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&) {
    /*
        13ce2c:	e1a0c00d 	mov	ip, sp
        13ce30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13ce34:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13ce38:	e24cb014 	sub	fp, ip, #20	; 0x14
        13ce3c:	e1a04000 	mov	r4, r0
        13ce40:	e1a06001 	mov	r6, r1
        13ce44:	e1a05002 	mov	r5, r2
        13ce48:	e3a00000 	mov	r0, #0	; 0x0
        13ce4c:	e59b8018 	ldr	r8, [fp, #24]	; fField24
        13ce50:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        13ce54:	e5880000 	str	r0, [r8]
        13ce58:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        13ce5c:	e1a0300a 	mov	r3, sl
        13ce60:	e92d0008 	stmdb	sp!, {r3}
        13ce64:	e28d301c 	add	r3, sp, #28	; 0x1c
        13ce68:	e28d2004 	add	r2, sp, #4	; 0x4
        13ce6c:	e1a00004 	mov	r0, r4
        13ce70:	e3a0130d 	mov	r1, #872415232	; 0x34000000
        13ce74:	eb649cf5 	bl	1a64250 <TNewInternalFlash::$CheckFor2LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&, eMemoryLane)>
        13ce78:	e28dd004 	add	sp, sp, #4	; 0x4
        13ce7c:	e3a070e9 	mov	r7, #233	; 0xe9
        13ce80:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
        13ce84:	e3300000 	teq	r0, #0	; 0x0
        13ce88:	0a00001f 	beq	13cf0c <TNewInternalFlash::ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)+0xe0>
        13ce8c:	e3a0104c 	mov	r1, #76	; 0x4c
        13ce90:	e5940010 	ldr	r0, [r4, #16]	; fField16
        13ce94:	e1a0e00f 	mov	lr, pc
        13ce98:	e590f000 	ldr	pc, [r0]
        13ce9c:	e3300000 	teq	r0, #0	; 0x0
        13cea0:	1a000001 	bne	13ceac <TNewInternalFlash::ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)+0x80>
        13cea4:	e1a00007 	mov	r0, r7
        13cea8:	ea000042 	b	13cfb8 <TNewInternalFlash::ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)+0x18c>
        13ceac:	e1a01000 	mov	r1, r0
        13ceb0:	e3a0004c 	mov	r0, #76	; 0x4c
        13ceb4:	eb093e70 	bl	38c87c <C$$dtorvec$$Limit+0x1f08>
        13ceb8:	e1b07000 	movs	r7, r0
        13cebc:	0a00003b 	beq	13cfb0 <TNewInternalFlash::ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)+0x184>
        13cec0:	e1a09007 	mov	r9, r7
        13cec4:	e59dc018 	ldr	ip, [sp, #24]	; fField24
        13cec8:	e596e000 	ldr	lr, [r6]
        13cecc:	e5955000 	ldr	r5, [r5]
        13ced0:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        13ced4:	e1a0100a 	mov	r1, sl
        13ced8:	e1a0200d 	mov	r2, sp
        13cedc:	e5930000 	ldr	r0, [r3]
        13cee0:	e5b43010 	ldr	r3, [r4, #16]!	; fField16
        13cee4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13cee8:	e1a03005 	mov	r3, r5
        13ceec:	e1a0200e 	mov	r2, lr
        13cef0:	e1a0100c 	mov	r1, ip
        13cef4:	e1a00009 	mov	r0, r9
        13cef8:	eb64ad43 	bl	1a6840c <TFlashRange::$__ct(TFlashDriver *, unsigned long, unsigned long, unsigned long, eMemoryLane, SFlashChipInformation const &, TMemoryAllocator &)>
        13cefc:	e28dd010 	add	sp, sp, #16	; 0x10
        13cf00:	e59f0000 	ldr	r0, [pc, #0]	; 13cf08 <TNewInternalFlash::ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)+0xdc>
        13cf04:	ea000028 	b	13cfac <TNewInternalFlash::ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)+0x180>
        13cf08:	0001e3bc 	streqh	lr, [r1], -ip
        13cf0c:	e3ca38ff 	bic	r3, sl, #16711680	; 0xff0000
        13cf10:	e3c330ff 	bic	r3, r3, #255	; 0xff
        13cf14:	e1a0a003 	mov	sl, r3
        13cf18:	e92d0008 	stmdb	sp!, {r3}
        13cf1c:	e28d301c 	add	r3, sp, #28	; 0x1c
        13cf20:	e28d2004 	add	r2, sp, #4	; 0x4
        13cf24:	e1a00004 	mov	r0, r4
        13cf28:	e3a0130d 	mov	r1, #872415232	; 0x34000000
        13cf2c:	eb649cc6 	bl	1a6424c <TNewInternalFlash::$CheckFor1LaneFlash(unsigned long, SFlashChipInformation &, TFlashDriver *&, eMemoryLane)>
        13cf30:	e28dd004 	add	sp, sp, #4	; 0x4
        13cf34:	e3300000 	teq	r0, #0	; 0x0
        13cf38:	0a00001d 	beq	13cfb4 <TNewInternalFlash::ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)+0x188>
        13cf3c:	e3a0104c 	mov	r1, #76	; 0x4c
        13cf40:	e5940010 	ldr	r0, [r4, #16]	; fField16
        13cf44:	e1a0e00f 	mov	lr, pc
        13cf48:	e590f000 	ldr	pc, [r0]
        13cf4c:	e3300000 	teq	r0, #0	; 0x0
        13cf50:	0affffd3 	beq	13cea4 <TNewInternalFlash::ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)+0x78>
        13cf54:	e1a01000 	mov	r1, r0
        13cf58:	e3a0004c 	mov	r0, #76	; 0x4c
        13cf5c:	eb093e46 	bl	38c87c <C$$dtorvec$$Limit+0x1f08>
        13cf60:	e1b07000 	movs	r7, r0
        13cf64:	0a000011 	beq	13cfb0 <TNewInternalFlash::ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)+0x184>
        13cf68:	e1a09007 	mov	r9, r7
        13cf6c:	e59dc018 	ldr	ip, [sp, #24]	; fField24
        13cf70:	e596e000 	ldr	lr, [r6]
        13cf74:	e5955000 	ldr	r5, [r5]
        13cf78:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        13cf7c:	e1a0100a 	mov	r1, sl
        13cf80:	e1a0200d 	mov	r2, sp
        13cf84:	e5930000 	ldr	r0, [r3]
        13cf88:	e5b43010 	ldr	r3, [r4, #16]!	; fField16
        13cf8c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        13cf90:	e1a03005 	mov	r3, r5
        13cf94:	e1a0200e 	mov	r2, lr
        13cf98:	e1a0100c 	mov	r1, ip
        13cf9c:	e1a00009 	mov	r0, r9
        13cfa0:	eb64ad19 	bl	1a6840c <TFlashRange::$__ct(TFlashDriver *, unsigned long, unsigned long, unsigned long, eMemoryLane, SFlashChipInformation const &, TMemoryAllocator &)>
        13cfa4:	e28dd010 	add	sp, sp, #16	; 0x10
        13cfa8:	e59f000c 	ldr	r0, [pc, #c]	; 13cfbc <TNewInternalFlash::ConfigureNot32BitFlashBank(unsigned long &, unsigned long &, unsigned long &, eMemoryLane, TFlashRange *&)+0x190>
        13cfac:	e5890000 	str	r0, [r9]
        13cfb0:	e5887000 	str	r7, [r8]
        13cfb4:	e3a00000 	mov	r0, #0	; 0x0
        13cfb8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13cfbc:	0001dedc 	ldreqd	sp, [r1], -ip
    */
}

/**
 * Symbol: ClassInfo__17TNewInternalFlashSFv
 * Address: 00384654
 */
void TNewInternalFlash::ClassInfo() {
    /*
        384654:	e24f0044 	sub	r0, pc, #68	; 0x44
        384658:	e1a0f00e 	mov	pc, lr
        38465c:	e3a00000 	mov	r0, #0	; 0x0
        384660:	e1a0f00e 	mov	pc, lr
        384664:	544e6577 	strplb	r6, [lr], -#1399
        384668:	496e7465 	stmmidb	lr!, {r0, r2, r5, r6, sl, ip, sp, lr}^
        38466c:	726e616c 	rsbvc	r6, lr, #27	; 0x1b
        384670:	466c6173 	undefined
        384674:	68005446 	stmvsda	r0, {r1, r2, r6, sl, ip, lr}
        384678:	6c617368 	stcvsl	3, cr7, [r1], -#416
        384684:	eafffff2 	b	384654 <ClassInfo__17TNewInternalFlashSFv>
        384688:	eaf6de29 	b	13bf34 <TNewInternalFlash::New(void)>
        38468c:	ea5b7ef8 	b	1a64274 <TNewInternalFlash::$Delete(void)>
        384690:	ea5b8308 	b	1a652b8 <TNewInternalFlash::$Read(unsigned long, unsigned long, char *)>
        384694:	ea5b830f 	b	1a652d8 <TNewInternalFlash::$Write(unsigned long, unsigned long, char *)>
        384698:	ea5b7ef6 	b	1a64278 <TNewInternalFlash::$Erase(unsigned long)>
        38469c:	eaf6e0bd 	b	13c998 <TNewInternalFlash::SuspendErase(unsigned long, unsigned long, unsigned long)>
        3846a0:	eaf6e0be 	b	13c9a0 <TNewInternalFlash::ResumeErase(unsigned long)>
        3846a4:	eaf6e0bf 	b	13c9a8 <TNewInternalFlash::DeepSleep(unsigned long)>
        3846a8:	eaf6e0c0 	b	13c9b0 <TNewInternalFlash::Wakeup(unsigned long)>
        3846ac:	ea5b8304 	b	1a652c4 <TNewInternalFlash::$Status(unsigned long)>
        3846b0:	eaf6e0c0 	b	13c9b8 <TNewInternalFlash::ResetCard(void)>
        3846b4:	eaf6e0b6 	b	13c994 <TNewInternalFlash::AcknowledgeReset(void)>
        3846b8:	eaf6e0c0 	b	13c9c0 <TNewInternalFlash::GetPhysResource(void)>
        3846bc:	eaf6e0f8 	b	13caa4 <TNewInternalFlash::RegisterClientInfo(unsigned long)>
        3846c0:	eaf6de2a 	b	13bf70 <TNewInternalFlash::GetWriteProtected(unsigned char *)>
        3846c4:	eaf6e0f7 	b	13caa8 <TNewInternalFlash::GetWriteErrorAddress(void)>
        3846c8:	eaf6de1a 	b	13bf38 <TNewInternalFlash::GetAttributes(void)>
        3846cc:	eaf6e0f7 	b	13cab0 <TNewInternalFlash::GetDataOffset(void)>
        3846d0:	eaf6de20 	b	13bf58 <TNewInternalFlash::GetTotalSize(void)>
        3846d4:	eaf6e0f7 	b	13cab8 <TNewInternalFlash::GetGroupSize(void)>
        3846d8:	eaf6de1c 	b	13bf50 <TNewInternalFlash::GetEraseRegionSize(void)>
        3846dc:	eaf6e0f7 	b	13cac0 <TNewInternalFlash::GetChipsPerGroup(void)>
        3846e0:	eaf6e0f8 	b	13cac8 <TNewInternalFlash::GetBlocksPerPartition(void)>
        3846e4:	eaf6e0f9 	b	13cad0 <TNewInternalFlash::GetMaxConcurrentVppOps(void)>
        3846e8:	eaf6e0fa 	b	13cad8 <TNewInternalFlash::GetEraseRegionCurrent(void)>
        3846ec:	eaf6e0fb 	b	13cae0 <TNewInternalFlash::GetWriteRegionCurrent(void)>
        3846f0:	eaf6e0a5 	b	13c98c <TNewInternalFlash::GetEraseRegionTime(void)>
        3846f4:	eaf6e0fb 	b	13cae8 <TNewInternalFlash::GetWriteAccessTime(void)>
        3846f8:	eaf6e13f 	b	13cbfc <TNewInternalFlash::GetReadAccessTime(void)>
        3846fc:	eaf6e140 	b	13cc04 <TNewInternalFlash::GetVendorInfo(void)>
        384700:	eaf6e141 	b	13cc0c <TNewInternalFlash::GetSocketNumber(void)>
        384704:	eaf6e142 	b	13cc14 <TNewInternalFlash::VppStatus(void)>
        384708:	eaf6e143 	b	13cc1c <TNewInternalFlash::VppRisingTime(void)>
        38470c:	eaf6e144 	b	13cc24 <TNewInternalFlash::FlashSpecific(unsigned long, void *, unsigned long)>
        384710:	eaf6e145 	b	13cc2c <TNewInternalFlash::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)>
        384714:	eaf6e146 	b	13cc34 <TNewInternalFlash::SuspendService(void)>
        384718:	eaf6e147 	b	13cc3c <TNewInternalFlash::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long)>
        38471c:	ea5b7ed3 	b	1a64270 <TNewInternalFlash::$Copy(unsigned long, unsigned long, unsigned long)>
        384720:	ea5b82e0 	b	1a652a8 <TNewInternalFlash::$IsVirgin(unsigned long, unsigned long)>
        384724:	e1a0000f 	mov	r0, pc
        384728:	e1a0f00e 	mov	pc, lr
        38472c:	54466c61 	strplb	r6, [r6], -#3169
        384730:	73684472 	cmnvc	r8, #1912602624	; 0x72000000
        384734:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        384738:	00000000 	andeq	r0, r0, r0
    */
}

