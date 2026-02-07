#include "include/TFlashStore.h"

/**
 * Symbol: TFlashStore::VppOn(void)
 * Address: 000c0cf0
 */
TFlashStore::VppOn(void) {
    /*
         c0cf0:	e1a0c00d 	mov	ip, sp
         c0cf4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c0cf8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0cfc:	e1a04000 	mov	r4, r0
         c0d00:	e5d0003e 	ldrb	r0, [r0, #62]	; fField62
         c0d04:	e3300000 	teq	r0, #0	; 0x0
         c0d08:	0a000003 	beq	c0d1c <TFlashStore::VppOn(void)+0x2c>
         c0d0c:	e3a01000 	mov	r1, #0	; 0x0
         c0d10:	e594001c 	ldr	r0, [r4, #28]	; fField28
         c0d14:	eb6c7881 	bl	1bdef20 <$VppOn(int, unsigned char)>
         c0d18:	ea000005 	b	c0d34 <TFlashStore::VppOn(void)+0x44>
         c0d1c:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         c0d20:	e3300000 	teq	r0, #0	; 0x0
         c0d24:	0a00000b 	beq	c0d58 <TFlashStore::VppOn(void)+0x68>
         c0d28:	e3a01000 	mov	r1, #0	; 0x0
         c0d2c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         c0d30:	eb6c7468 	bl	1bdded8 <$VccOn(int, unsigned char)>
         c0d34:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         c0d38:	e3300000 	teq	r0, #0	; 0x0
         c0d3c:	15b40010 	ldrne	r0, [r4, #16]!	; fField16
         c0d40:	13300000 	teqne	r0, #0	; 0x0
         c0d44:	0a000003 	beq	c0d58 <TFlashStore::VppOn(void)+0x68>
         c0d48:	e3a03000 	mov	r3, #0	; 0x0
         c0d4c:	e3a02000 	mov	r2, #0	; 0x0
         c0d50:	e3a01001 	mov	r1, #1	; 0x1
         c0d54:	eb0b1635 	bl	386630 <TFlash::FlashSpecific(unsigned long, void *, unsigned long)>
         c0d58:	e3a00000 	mov	r0, #0	; 0x0
         c0d5c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::VppOff(void)
 * Address: 000c0d60
 */
TFlashStore::VppOff(void) {
    /*
         c0d60:	e1a0c00d 	mov	ip, sp
         c0d64:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         c0d68:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0d6c:	e5d0103e 	ldrb	r1, [r0, #62]	; fField62
         c0d70:	e3310000 	teq	r1, #0	; 0x0
         c0d74:	0a000002 	beq	c0d84 <TFlashStore::VppOff(void)+0x24>
         c0d78:	e590001c 	ldr	r0, [r0, #28]	; fField28
         c0d7c:	eb6c7864 	bl	1bdef14 <$VppOff(int)>
         c0d80:	ea000003 	b	c0d94 <TFlashStore::VppOff(void)+0x34>
         c0d84:	e5d01015 	ldrb	r1, [r0, #21]	; fField21
         c0d88:	e3310000 	teq	r1, #0	; 0x0
         c0d8c:	1590001c 	ldrne	r0, [r0, #28]	; fField28
         c0d90:	1b6c744d 	blne	1bddecc <$VccOff(int)>
         c0d94:	e3a00000 	mov	r0, #0	; 0x0
         c0d98:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::EraseStatus(unsigned long)
 * Address: 000c0d9c
 */
TFlashStore::EraseStatus(unsigned long) {
    /*
         c0d9c:	e1a0c00d 	mov	ip, sp
         c0da0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         c0da4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0da8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         c0dac:	eb0b15d7 	bl	386510 <TFlash::Status(unsigned long)>
         c0db0:	e3300001 	teq	r0, #1	; 0x1
         c0db4:	03a00000 	moveq	r0, #0	; 0x0
         c0db8:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         c0dbc:	e3300003 	teq	r0, #3	; 0x3
         c0dc0:	03a0008d 	moveq	r0, #141	; 0x8d
         c0dc4:	02400c2a 	subeq	r0, r0, #10752	; 0x2a00
         c0dc8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::WaitForEraseDone(void)
 * Address: 000c0dcc
 */
TFlashStore::WaitForEraseDone(void) {
    /*
         c0dcc:	e1a0c00d 	mov	ip, sp
         c0dd0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c0dd4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0dd8:	e1a04000 	mov	r4, r0
         c0ddc:	e5d0003c 	ldrb	r0, [r0, #60]	; fField60
         c0de0:	e3a05000 	mov	r5, #0	; 0x0
         c0de4:	e3300000 	teq	r0, #0	; 0x0
         c0de8:	01a00005 	moveq	r0, r5
         c0dec:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         c0df0:	e3a0608d 	mov	r6, #141	; 0x8d
         c0df4:	e2466c2a 	sub	r6, r6, #10752	; 0x2a00
         c0df8:	e5941040 	ldr	r1, [r4, #64]	; fField64
         c0dfc:	e1a00004 	mov	r0, r4
         c0e00:	eb68db75 	bl	1af7bdc <TFlashStore::$EraseStatus(unsigned long)>
         c0e04:	e1300006 	teq	r0, r6
         c0e08:	0afffffa 	beq	c0df8 <TFlashStore::WaitForEraseDone(void)+0x2c>
         c0e0c:	e5c4503c 	strb	r5, [r4, #60]	; fField60
         c0e10:	e5941040 	ldr	r1, [r4, #64]	; fField64
         c0e14:	e1a00004 	mov	r0, r4
         c0e18:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         c0e1c:	ea68db6e 	b	1af7bdc <TFlashStore::$EraseStatus(unsigned long)>
    */
}

/**
 * Symbol: TFlashStore::Zap(unsigned long, unsigned long)
 * Address: 000c0e20
 */
TFlashStore::Zap(unsigned long, unsigned long) {
    /*
         c0e20:	e1a0c00d 	mov	ip, sp
         c0e24:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c0e28:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0e2c:	e1a05000 	mov	r5, r0
         c0e30:	e1a06001 	mov	r6, r1
         c0e34:	e1a04002 	mov	r4, r2
         c0e38:	e3a07000 	mov	r7, #0	; 0x0
         c0e3c:	e5d0003d 	ldrb	r0, [r0, #61]	; fField61
         c0e40:	e3300000 	teq	r0, #0	; 0x0
         c0e44:	0a000025 	beq	c0ee0 <TFlashStore::Zap(unsigned long, unsigned long)+0xc0>
         c0e48:	e3a00000 	mov	r0, #0	; 0x0
         c0e4c:	e56d0004 	strb	r0, [sp, -#4]!	; fField4
         c0e50:	e24d9064 	sub	r9, sp, #100	; 0x64
         c0e54:	e3a0a001 	mov	sl, #1	; 0x1
         c0e58:	e59f8038 	ldr	r8, [pc, #38]	; c0e98 <TFlashStore::Zap(unsigned long, unsigned long)+0x78>
         c0e5c:	e3a00000 	mov	r0, #0	; 0x0
         c0e60:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         c0e64:	e1a00009 	mov	r0, r9
         c0e68:	eb6bc6c1 	bl	1bb2974 <$setjmp>
         c0e6c:	e3300000 	teq	r0, #0	; 0x0
         c0e70:	1a000009 	bne	c0e9c <TFlashStore::Zap(unsigned long, unsigned long)+0x7c>
         c0e74:	e1a0000d 	mov	r0, sp
         c0e78:	eb6c7c7f 	bl	1be007c <$AddExceptionHandler>
         c0e7c:	e1a02004 	mov	r2, r4
         c0e80:	e1a01006 	mov	r1, r6
         c0e84:	e5950088 	ldr	r0, [r5, #136]	; fField136
         c0e88:	e5953048 	ldr	r3, [r5, #72]	; fField72
         c0e8c:	eb69110e 	bl	1b052cc <TStoreDriver::$Set(unsigned long, unsigned long, unsigned long)>
         c0e90:	e5cda06c 	strb	sl, [sp, #108]	; fField108
         c0e94:	ea00000b 	b	c0ec8 <TFlashStore::Zap(unsigned long, unsigned long)+0xa8>
         c0e98:	003712b4 	ldreqh	r1, [r7], -r4
         c0e9c:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c0ea0:	e5981000 	ldr	r1, [r8]
         c0ea4:	eb6c88ba 	bl	1be3194 <$Subexception>
         c0ea8:	e3300000 	teq	r0, #0	; 0x0
         c0eac:	0a000003 	beq	c0ec0 <TFlashStore::Zap(unsigned long, unsigned long)+0xa0>
         c0eb0:	e1a00005 	mov	r0, r5
         c0eb4:	e3a01000 	mov	r1, #0	; 0x0
         c0eb8:	eb691100 	bl	1b052c0 <TFlashStore::$SendAlertMgrWPBitch(int)>
         c0ebc:	ea000001 	b	c0ec8 <TFlashStore::Zap(unsigned long, unsigned long)+0xa8>
         c0ec0:	e1a0000d 	mov	r0, sp
         c0ec4:	eb6c84a2 	bl	1be2154 <$NextHandler>
         c0ec8:	e1a0000d 	mov	r0, sp
         c0ecc:	eb6c8079 	bl	1be10b8 <$ExitHandler>
         c0ed0:	e5fd006c 	ldrb	r0, [sp, #108]!	; fField108
         c0ed4:	e3300000 	teq	r0, #0	; 0x0
         c0ed8:	0affffdf 	beq	c0e5c <TFlashStore::Zap(unsigned long, unsigned long)+0x3c>
         c0edc:	ea00000a 	b	c0f0c <TFlashStore::Zap(unsigned long, unsigned long)+0xec>
         c0ee0:	e3540004 	cmp	r4, #4	; 0x4
         c0ee4:	8a00000a 	bhi	c0f14 <TFlashStore::Zap(unsigned long, unsigned long)+0xf4>
         c0ee8:	e24dd004 	sub	sp, sp, #4	; 0x4
         c0eec:	e5950048 	ldr	r0, [r5, #72]	; fField72
         c0ef0:	e1a03004 	mov	r3, r4
         c0ef4:	e58d0000 	str	r0, [sp]
         c0ef8:	e1a0200d 	mov	r2, sp
         c0efc:	e1a01006 	mov	r1, r6
         c0f00:	e1a00005 	mov	r0, r5
         c0f04:	eb68caad 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
         c0f08:	e1a07000 	mov	r7, r0
         c0f0c:	e28dd004 	add	sp, sp, #4	; 0x4
         c0f10:	ea00001b 	b	c0f84 <TFlashStore::Zap(unsigned long, unsigned long)+0x164>
         c0f14:	e24dd040 	sub	sp, sp, #64	; 0x40
         c0f18:	e5950048 	ldr	r0, [r5, #72]	; fField72
         c0f1c:	e20010ff 	and	r1, r0, #255	; 0xff
         c0f20:	e1a0000d 	mov	r0, sp
         c0f24:	e3a02040 	mov	r2, #64	; 0x40
         c0f28:	eb6bceca 	bl	1bb4a58 <$memset>
         c0f2c:	e3540040 	cmp	r4, #64	; 0x40
         c0f30:	3a00000a 	bcc	c0f60 <TFlashStore::Zap(unsigned long, unsigned long)+0x140>
         c0f34:	e1a0200d 	mov	r2, sp
         c0f38:	e1a01006 	mov	r1, r6
         c0f3c:	e1a00005 	mov	r0, r5
         c0f40:	e3a03040 	mov	r3, #64	; 0x40
         c0f44:	eb68ca9d 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
         c0f48:	e1b07000 	movs	r7, r0
         c0f4c:	1a00000b 	bne	c0f80 <TFlashStore::Zap(unsigned long, unsigned long)+0x160>
         c0f50:	e2444040 	sub	r4, r4, #64	; 0x40
         c0f54:	e2866040 	add	r6, r6, #64	; 0x40
         c0f58:	e3540040 	cmp	r4, #64	; 0x40
         c0f5c:	2afffff4 	bcs	c0f34 <TFlashStore::Zap(unsigned long, unsigned long)+0x114>
         c0f60:	e3540000 	cmp	r4, #0	; 0x0
         c0f64:	9a000005 	bls	c0f80 <TFlashStore::Zap(unsigned long, unsigned long)+0x160>
         c0f68:	e1a03004 	mov	r3, r4
         c0f6c:	e1a0200d 	mov	r2, sp
         c0f70:	e1a01006 	mov	r1, r6
         c0f74:	e1a00005 	mov	r0, r5
         c0f78:	eb68ca90 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
         c0f7c:	e1a07000 	mov	r7, r0
         c0f80:	e28dd040 	add	sp, sp, #64	; 0x40
         c0f84:	e1a00007 	mov	r0, r7
         c0f88:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)
 * Address: 000c0f8c
 */
TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long) {
    /*
         c0f8c:	e1a0c00d 	mov	ip, sp
         c0f90:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c0f94:	e24cb004 	sub	fp, ip, #4	; 0x4
         c0f98:	e1a04000 	mov	r4, r0
         c0f9c:	e3a06000 	mov	r6, #0	; 0x0
         c0fa0:	e3a07000 	mov	r7, #0	; 0x0
         c0fa4:	e590006c 	ldr	r0, [r0, #108]	; fField108
         c0fa8:	e2811003 	add	r1, r1, #3	; 0x3
         c0fac:	e3c11003 	bic	r1, r1, #3	; 0x3
         c0fb0:	e0810100 	add	r0, r1, r0, lsl #2
         c0fb4:	e2805010 	add	r5, r0, #16	; 0x10
         c0fb8:	e3720001 	cmn	r2, #1	; 0x1
         c0fbc:	0a00000c 	beq	c0ff4 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x68>
         c0fc0:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c0fc4:	e1a01132 	mov	r1, r2, lsr r1
         c0fc8:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c0fcc:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c0fd0:	e1a09000 	mov	r9, r0
         c0fd4:	eb68f7db 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c0fd8:	e3300000 	teq	r0, #0	; 0x0
         c0fdc:	1a000004 	bne	c0ff4 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x68>
         c0fe0:	e1a00009 	mov	r0, r9
         c0fe4:	eb68ca6e 	bl	1af39a4 <TFlashBlock::$Avail(void)>
         c0fe8:	e1500005 	cmp	r0, r5
         c0fec:	25a49028 	strcs	r9, [r4, #40]!	; fField40
         c0ff0:	2a0000bd 	bcs	c12ec <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x360>
         c0ff4:	e3a06000 	mov	r6, #0	; 0x0
         c0ff8:	e1a00004 	mov	r0, r4
         c0ffc:	eb6918fc 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c1000:	e3500000 	cmp	r0, #0	; 0x0
         c1004:	9a00002d 	bls	c10c0 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x134>
         c1008:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c100c:	e1a01136 	mov	r1, r6, lsr r1
         c1010:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c1014:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c1018:	e1a09000 	mov	r9, r0
         c101c:	eb68f7c9 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c1020:	e3300000 	teq	r0, #0	; 0x0
         c1024:	0a000003 	beq	c1038 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0xac>
         c1028:	e3370000 	teq	r7, #0	; 0x0
         c102c:	01a07009 	moveq	r7, r9
         c1030:	01a08006 	moveq	r8, r6
         c1034:	ea000005 	b	c1050 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0xc4>
         c1038:	e1a00009 	mov	r0, r9
         c103c:	eb68ca58 	bl	1af39a4 <TFlashBlock::$Avail(void)>
         c1040:	e1500005 	cmp	r0, r5
         c1044:	23a06000 	movcs	r6, #0	; 0x0
         c1048:	25a49028 	strcs	r9, [r4, #40]!	; fField40
         c104c:	2a0000a6 	bcs	c12ec <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x360>
         c1050:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c1054:	e0806006 	add	r6, r0, r6
         c1058:	e1a00004 	mov	r0, r4
         c105c:	eb6918e4 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c1060:	e1500006 	cmp	r0, r6
         c1064:	8affffe7 	bhi	c1008 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x7c>
         c1068:	e3370000 	teq	r7, #0	; 0x0
         c106c:	0a000013 	beq	c10c0 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x134>
         c1070:	e1a00004 	mov	r0, r4
         c1074:	eb68dee7 	bl	1af8c18 <TFlashStore::$FindUnusedPhysicalBlock(void)>
         c1078:	e1a01000 	mov	r1, r0
         c107c:	e1a05000 	mov	r5, r0
         c1080:	e1a00004 	mov	r0, r4
         c1084:	eb68f395 	bl	1afdee0 <TFlashStore::$IsErased(unsigned long)>
         c1088:	e3300000 	teq	r0, #0	; 0x0
         c108c:	1a000004 	bne	c10a4 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x118>
         c1090:	e1a01005 	mov	r1, r5
         c1094:	e1a00004 	mov	r0, r4
         c1098:	eb691cde 	bl	1b08418 <TFlashStore::$SyncErase(unsigned long)>
         c109c:	e1b06000 	movs	r6, r0
         c10a0:	1a000091 	bne	c12ec <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x360>
         c10a4:	e1a02008 	mov	r2, r8
         c10a8:	e1a01005 	mov	r1, r5
         c10ac:	e1a00004 	mov	r0, r4
         c10b0:	eb68ca46 	bl	1af39d0 <TFlashStore::$BringVirginBlockOnline(unsigned long, unsigned long)>
         c10b4:	e1b06000 	movs	r6, r0
         c10b8:	05a47028 	streq	r7, [r4, #40]!	; fField40
         c10bc:	ea00008a 	b	c12ec <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x360>
         c10c0:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c10c4:	e3300000 	teq	r0, #0	; 0x0
         c10c8:	0a000030 	beq	c1190 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x204>
         c10cc:	e59f00a8 	ldr	r0, [pc, #a8]	; c117c <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x1f0>
         c10d0:	e5901000 	ldr	r1, [r0]
         c10d4:	e2811017 	add	r1, r1, #23	; 0x17
         c10d8:	e5801000 	str	r1, [r0]
         c10dc:	e5940054 	ldr	r0, [r4, #84]	; fField84
         c10e0:	eb6bc618 	bl	1bb2948 <$__rt_udiv>
         c10e4:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c10e8:	e1a02000 	mov	r2, r0
         c10ec:	e0080192 	mul	r8, r2, r1
         c10f0:	e0807008 	add	r7, r0, r8
         c10f4:	e1a00004 	mov	r0, r4
         c10f8:	eb6918bd 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c10fc:	e1500007 	cmp	r0, r7
         c1100:	93a07000 	movls	r7, #0	; 0x0
         c1104:	e1370008 	teq	r7, r8
         c1108:	059f0070 	ldreq	r0, [pc, #70]	; c1180 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x1f4>
         c110c:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         c1110:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c1114:	e1a01137 	mov	r1, r7, lsr r1
         c1118:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c111c:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c1120:	eb6924ff 	bl	1b0a524 <TFlashBlock::$Yield(void)>
         c1124:	e1500005 	cmp	r0, r5
         c1128:	3a000015 	bcc	c1184 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x1f8>
         c112c:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c1130:	e1a01137 	mov	r1, r7, lsr r1
         c1134:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c1138:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c113c:	eb68d252 	bl	1af5a8c <TFlashBlock::$CompactInPlace(void)>
         c1140:	e1b06000 	movs	r6, r0
         c1144:	1a000068 	bne	c12ec <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x360>
         c1148:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c114c:	e1a01137 	mov	r1, r7, lsr r1
         c1150:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c1154:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c1158:	eb68ca11 	bl	1af39a4 <TFlashBlock::$Avail(void)>
         c115c:	e1500005 	cmp	r0, r5
         c1160:	3a000007 	bcc	c1184 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x1f8>
         c1164:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c1168:	e1a01137 	mov	r1, r7, lsr r1
         c116c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c1170:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c1174:	e5a40028 	str	r0, [r4, #40]!	; fField40
         c1178:	ea00005b 	b	c12ec <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x360>
         c117c:	0c100dd4 	ldceq	13, cr0, [r0], -#848
         c1180:	ffffd687 	swinv	0x00ffd687
         c1184:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c1188:	e0807007 	add	r7, r0, r7
         c118c:	eaffffd8 	b	c10f4 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x168>
         c1190:	e3a00013 	mov	r0, #19	; 0x13
         c1194:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         c1198:	e24dd004 	sub	sp, sp, #4	; 0x4
         c119c:	e3a09000 	mov	r9, #0	; 0x0
         c11a0:	e3a08000 	mov	r8, #0	; 0x0
         c11a4:	e3e07000 	mvn	r7, #0	; 0x0
         c11a8:	e1a00004 	mov	r0, r4
         c11ac:	eb68de99 	bl	1af8c18 <TFlashStore::$FindUnusedPhysicalBlock(void)>
         c11b0:	e3a06000 	mov	r6, #0	; 0x0
         c11b4:	e58d0000 	str	r0, [sp]
         c11b8:	e1a00004 	mov	r0, r4
         c11bc:	eb69188c 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c11c0:	e3500000 	cmp	r0, #0	; 0x0
         c11c4:	9a000018 	bls	c122c <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x2a0>
         c11c8:	e5940058 	ldr	r0, [r4, #88]	; fField88
         c11cc:	e1a00036 	mov	r0, r6, lsr r0
         c11d0:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c11d4:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         c11d8:	eb6924d1 	bl	1b0a524 <TFlashBlock::$Yield(void)>
         c11dc:	e1a0a000 	mov	sl, r0
         c11e0:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c11e4:	e1a01136 	mov	r1, r6, lsr r1
         c11e8:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c11ec:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c11f0:	e1a0100a 	mov	r1, sl
         c11f4:	eb68da72 	bl	1af7bc4 <TFlashBlock::$EraseHeuristic(unsigned long)>
         c11f8:	e1500008 	cmp	r0, r8
         c11fc:	a1a07006 	movge	r7, r6
         c1200:	a1a08000 	movge	r8, r0
         c1204:	e15a0005 	cmp	sl, r5
         c1208:	23a09001 	movcs	r9, #1	; 0x1
         c120c:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c1210:	e0806006 	add	r6, r0, r6
         c1214:	e1a00004 	mov	r0, r4
         c1218:	eb691875 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c121c:	e1500006 	cmp	r0, r6
         c1220:	8affffe8 	bhi	c11c8 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x23c>
         c1224:	e3390000 	teq	r9, #0	; 0x0
         c1228:	1a000001 	bne	c1234 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x2a8>
         c122c:	e28dd004 	add	sp, sp, #4	; 0x4
         c1230:	ea00002b 	b	c12e4 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x358>
         c1234:	e1a00004 	mov	r0, r4
         c1238:	e59d1000 	ldr	r1, [sp]
         c123c:	eb68f327 	bl	1afdee0 <TFlashStore::$IsErased(unsigned long)>
         c1240:	e3300000 	teq	r0, #0	; 0x0
         c1244:	1a000006 	bne	c1264 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x2d8>
         c1248:	e1a00004 	mov	r0, r4
         c124c:	e59d1000 	ldr	r1, [sp]
         c1250:	eb691c70 	bl	1b08418 <TFlashStore::$SyncErase(unsigned long)>
         c1254:	e1b06000 	movs	r6, r0
         c1258:	0a000001 	beq	c1264 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x2d8>
         c125c:	e28dd008 	add	sp, sp, #8	; 0x8
         c1260:	ea000021 	b	c12ec <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x360>
         c1264:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c1268:	e1a01137 	mov	r1, r7, lsr r1
         c126c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c1270:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c1274:	e59d1000 	ldr	r1, [sp]
         c1278:	eb68d205 	bl	1af5a94 <TFlashBlock::$CompactInto(unsigned long)>
         c127c:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c1280:	e1a01137 	mov	r1, r7, lsr r1
         c1284:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c1288:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c128c:	eb6a2081 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
         c1290:	e3300000 	teq	r0, #0	; 0x0
         c1294:	1a00000d 	bne	c12d0 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x344>
         c1298:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c129c:	e1a01137 	mov	r1, r7, lsr r1
         c12a0:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c12a4:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c12a8:	eb68c9bd 	bl	1af39a4 <TFlashBlock::$Avail(void)>
         c12ac:	e1500005 	cmp	r0, r5
         c12b0:	3a000006 	bcc	c12d0 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x344>
         c12b4:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c12b8:	e1a01137 	mov	r1, r7, lsr r1
         c12bc:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c12c0:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c12c4:	e3a06000 	mov	r6, #0	; 0x0
         c12c8:	e5a40028 	str	r0, [r4, #40]!	; fField40
         c12cc:	eaffffe2 	b	c125c <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x2d0>
         c12d0:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
         c12d4:	e2401001 	sub	r1, r0, #1	; 0x1
         c12d8:	e3300000 	teq	r0, #0	; 0x0
         c12dc:	e58d1000 	str	r1, [sp]
         c12e0:	1affffac 	bne	c1198 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x20c>
         c12e4:	e51f616c 	ldr	r6, [pc, #fffffe94]	; c1180 <TFlashStore::ChooseWorkingBlock(unsigned long, unsigned long)+0x1f4>
         c12e8:	e28dd004 	add	sp, sp, #4	; 0x4
         c12ec:	e1a00006 	mov	r0, r6
         c12f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::VccOn(void)
 * Address: 000c12f4
 */
TFlashStore::VccOn(void) {
    /*
         c12f4:	e1a0c00d 	mov	ip, sp
         c12f8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c12fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         c1300:	e1a04000 	mov	r4, r0
         c1304:	e5d00015 	ldrb	r0, [r0, #21]	; fField21
         c1308:	e3300000 	teq	r0, #0	; 0x0
         c130c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         c1310:	e3a01000 	mov	r1, #0	; 0x0
         c1314:	e594001c 	ldr	r0, [r4, #28]	; fField28
         c1318:	eb6c72ee 	bl	1bdded8 <$VccOn(int, unsigned char)>
         c131c:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         c1320:	e3300000 	teq	r0, #0	; 0x0
         c1324:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         c1328:	e3a03000 	mov	r3, #0	; 0x0
         c132c:	e3a02000 	mov	r2, #0	; 0x0
         c1330:	e3a01001 	mov	r1, #1	; 0x1
         c1334:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         c1338:	ea0b14bc 	b	386630 <TFlash::FlashSpecific(unsigned long, void *, unsigned long)>
    */
}

/**
 * Symbol: TFlashStore::VccOff(void)
 * Address: 000c133c
 */
TFlashStore::VccOff(void) {
    /*
         c133c:	e5d01015 	ldrb	r1, [r0, #21]	; fField21
         c1340:	e3310000 	teq	r1, #0	; 0x0
         c1344:	1590001c 	ldrne	r0, [r0, #28]	; fField28
         c1348:	1a6c72df 	bne	1bddecc <$VccOff(int)>
         c134c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::IsErased(unsigned long)
 * Address: 000c1350
 */
TFlashStore::IsErased(unsigned long) {
    /*
         c1350:	e590305c 	ldr	r3, [r0, #92]	; fField92
         c1354:	e1c11003 	bic	r1, r1, r3
         c1358:	e3a03000 	mov	r3, #0	; 0x0
         c135c:	e5902050 	ldr	r2, [r0, #80]	; fField80
         c1360:	ea68f2df 	b	1afdee4 <TFlashStore::$IsErased(unsigned long, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TFlashStore::IsErased(unsigned long, unsigned long, unsigned long)
 * Address: 000c1364
 */
TFlashStore::IsErased(unsigned long, unsigned long, unsigned long) {
    /*
         c1364:	e92d4010 	stmdb	sp!, {r4, lr}
         c1368:	e5d0e03d 	ldrb	lr, [r0, #61]	; fField61
         c136c:	e3a0c000 	mov	ip, #0	; 0x0
         c1370:	e33e0000 	teq	lr, #0	; 0x0
         c1374:	1a000011 	bne	c13c0 <TFlashStore::IsErased(unsigned long, unsigned long, unsigned long)+0x5c>
         c1378:	e5d0e097 	ldrb	lr, [r0, #151]	; fField151
         c137c:	e33e0000 	teq	lr, #0	; 0x0
         c1380:	15900010 	ldrne	r0, [r0, #16]	; fField16
         c1384:	18bd4010 	ldmneia	sp!, {r4, lr}
         c1388:	1a0b14b7 	bne	38666c <TFlash::IsVirgin(unsigned long, unsigned long)>
         c138c:	e590e018 	ldr	lr, [r0, #24]	; fField24
         c1390:	e08e1001 	add	r1, lr, r1
         c1394:	e590004c 	ldr	r0, [r0, #76]	; fField76
         c1398:	e200e0ff 	and	lr, r0, #255	; 0xff
         c139c:	e3a00000 	mov	r0, #0	; 0x0
         c13a0:	e3320000 	teq	r2, #0	; 0x0
         c13a4:	0a00000a 	beq	c13d4 <TFlashStore::IsErased(unsigned long, unsigned long, unsigned long)+0x70>
         c13a8:	e5d14000 	ldrb	r4, [r1]
         c13ac:	e134000e 	teq	r4, lr
         c13b0:	0a000004 	beq	c13c8 <TFlashStore::IsErased(unsigned long, unsigned long, unsigned long)+0x64>
         c13b4:	e2800001 	add	r0, r0, #1	; 0x1
         c13b8:	e1500003 	cmp	r0, r3
         c13bc:	9a000001 	bls	c13c8 <TFlashStore::IsErased(unsigned long, unsigned long, unsigned long)+0x64>
         c13c0:	e1a0000c 	mov	r0, ip
         c13c4:	e8bd8010 	ldmia	sp!, {r4, pc}
         c13c8:	e2811001 	add	r1, r1, #1	; 0x1
         c13cc:	e2522001 	subs	r2, r2, #1	; 0x1
         c13d0:	1afffff4 	bne	c13a8 <TFlashStore::IsErased(unsigned long, unsigned long, unsigned long)+0x44>
         c13d4:	e3a00001 	mov	r0, #1	; 0x1
         c13d8:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TFlashStore::SyncErase(unsigned long)
 * Address: 000c13dc
 */
TFlashStore::SyncErase(unsigned long) {
    /*
         c13dc:	e1a0c00d 	mov	ip, sp
         c13e0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c13e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c13e8:	e1a04000 	mov	r4, r0
         c13ec:	e1a05001 	mov	r5, r1
         c13f0:	e3a00000 	mov	r0, #0	; 0x0
         c13f4:	e3a07003 	mov	r7, #3	; 0x3
         c13f8:	e3a0a000 	mov	sl, #0	; 0x0
         c13fc:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         c1400:	e24d8064 	sub	r8, sp, #100	; 0x64
         c1404:	e3a090b5 	mov	r9, #181	; 0xb5
         c1408:	e2499b0a 	sub	r9, r9, #10240	; 0x2800
         c140c:	e59f603c 	ldr	r6, [pc, #3c]	; c1450 <TFlashStore::SyncErase(unsigned long)+0x74>
         c1410:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c1414:	e3300000 	teq	r0, #0	; 0x0
         c1418:	0a00001a 	beq	c1488 <TFlashStore::SyncErase(unsigned long)+0xac>
         c141c:	e1a00008 	mov	r0, r8
         c1420:	e52da06c 	str	sl, [sp, -#108]!	; fField108
         c1424:	eb6bc552 	bl	1bb2974 <$setjmp>
         c1428:	e3300000 	teq	r0, #0	; 0x0
         c142c:	1a000008 	bne	c1454 <TFlashStore::SyncErase(unsigned long)+0x78>
         c1430:	e1a0000d 	mov	r0, sp
         c1434:	eb6c7b10 	bl	1be007c <$AddExceptionHandler>
         c1438:	e1a01005 	mov	r1, r5
         c143c:	e5940088 	ldr	r0, [r4, #136]	; fField136
         c1440:	e5942050 	ldr	r2, [r4, #80]	; fField80
         c1444:	e594304c 	ldr	r3, [r4, #76]	; fField76
         c1448:	eb690f9f 	bl	1b052cc <TStoreDriver::$Set(unsigned long, unsigned long, unsigned long)>
         c144c:	ea000008 	b	c1474 <TFlashStore::SyncErase(unsigned long)+0x98>
         c1450:	00059fd8 	ldreqd	r9, [r5], -r8
         c1454:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c1458:	e28f1f09 	add	r1, pc, #36	; 0x24
         c145c:	eb6c874c 	bl	1be3194 <$Subexception>
         c1460:	e3300000 	teq	r0, #0	; 0x0
         c1464:	158d906c 	strne	r9, [sp, #108]	; fField108
         c1468:	1a000001 	bne	c1474 <TFlashStore::SyncErase(unsigned long)+0x98>
         c146c:	e1a0000d 	mov	r0, sp
         c1470:	eb6c8337 	bl	1be2154 <$NextHandler>
         c1474:	e1a0000d 	mov	r0, sp
         c1478:	eb6c7f0e 	bl	1be10b8 <$ExitHandler>
         c147c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c1480:	ea00000f 	b	c14c4 <TFlashStore::SyncErase(unsigned long)+0xe8>
         c1484:	00000000 	andeq	r0, r0, r0
         c1488:	e1a00004 	mov	r0, r4
         c148c:	eb692012 	bl	1b094dc <TFlashStore::$WaitForEraseDone(void)>
         c1490:	e58d0000 	str	r0, [sp]
         c1494:	e3300000 	teq	r0, #0	; 0x0
         c1498:	1a000003 	bne	c14ac <TFlashStore::SyncErase(unsigned long)+0xd0>
         c149c:	e1a01005 	mov	r1, r5
         c14a0:	e1a00004 	mov	r0, r4
         c14a4:	eb6917cb 	bl	1b073d8 <TFlashStore::$StartErase(unsigned long)>
         c14a8:	e58d0000 	str	r0, [sp]
         c14ac:	e59d0000 	ldr	r0, [sp]
         c14b0:	e3300000 	teq	r0, #0	; 0x0
         c14b4:	1a000002 	bne	c14c4 <TFlashStore::SyncErase(unsigned long)+0xe8>
         c14b8:	e1a00004 	mov	r0, r4
         c14bc:	eb692006 	bl	1b094dc <TFlashStore::$WaitForEraseDone(void)>
         c14c0:	e58d0000 	str	r0, [sp]
         c14c4:	e59d0000 	ldr	r0, [sp]
         c14c8:	e3300000 	teq	r0, #0	; 0x0
         c14cc:	0a000009 	beq	c14f8 <TFlashStore::SyncErase(unsigned long)+0x11c>
         c14d0:	e1a00006 	mov	r0, r6
         c14d4:	eb6c6e54 	bl	1bdce2c <$Sleep(unsigned long)>
         c14d8:	e1a00004 	mov	r0, r4
         c14dc:	eb68f69a 	bl	1afef4c <TFlashStore::$IsWriteProtected(void)>
         c14e0:	e3300000 	teq	r0, #0	; 0x0
         c14e4:	11a00004 	movne	r0, r4
         c14e8:	13a01000 	movne	r1, #0	; 0x0
         c14ec:	1b690f73 	blne	1b052c0 <TFlashStore::$SendAlertMgrWPBitch(int)>
         c14f0:	e2577001 	subs	r7, r7, #1	; 0x1
         c14f4:	5affffc5 	bpl	c1410 <TFlashStore::SyncErase(unsigned long)+0x34>
         c14f8:	e49d0004 	ldr	r0, [sp], #4	; fField4
         c14fc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::StartErase(unsigned long)
 * Address: 000c1500
 */
TFlashStore::StartErase(unsigned long) {
    /*
         c1500:	e3a02001 	mov	r2, #1	; 0x1
         c1504:	e5801040 	str	r1, [r0, #64]	; fField64
         c1508:	e5c0203c 	strb	r2, [r0, #60]	; fField60
         c150c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         c1510:	ea0b13ef 	b	3864d4 <TFlash::Erase(unsigned long)>
    */
}

/**
 * Symbol: TFlashStore::NextLogEntry(unsigned long, unsigned long *, unsigned long, void *)
 * Address: 000c2120
 */
TFlashStore::NextLogEntry(unsigned long, unsigned long *, unsigned long, void *) {
    /*
         c2120:	e1a0c00d 	mov	ip, sp
         c2124:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         c2128:	e24cb004 	sub	fp, ip, #4	; 0x4
         c212c:	e1a05000 	mov	r5, r0
         c2130:	e1b04001 	movs	r4, r1
         c2134:	e1a07002 	mov	r7, r2
         c2138:	e1a06003 	mov	r6, r3
         c213c:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         c2140:	12844004 	addne	r4, r4, #4	; 0x4
         c2144:	1a000005 	bne	c2160 <TFlashStore::NextLogEntry(unsigned long, unsigned long *, unsigned long, void *)+0x40>
         c2148:	e5951050 	ldr	r1, [r5, #80]	; fField80
         c214c:	e5d5003d 	ldrb	r0, [r5, #61]	; fField61
         c2150:	e3300000 	teq	r0, #0	; 0x0
         c2154:	03a00b01 	moveq	r0, #1024	; 0x400
         c2158:	13a00c01 	movne	r0, #256	; 0x100
         c215c:	e0414000 	sub	r4, r1, r0
         c2160:	e3a09020 	mov	r9, #32	; 0x20
         c2164:	e5950050 	ldr	r0, [r5, #80]	; fField80
         c2168:	e2401020 	sub	r1, r0, #32	; 0x20
         c216c:	e595005c 	ldr	r0, [r5, #92]	; fField92
         c2170:	e0000004 	and	r0, r0, r4
         c2174:	e1510000 	cmp	r1, r0
         c2178:	9a00001f 	bls	c21fc <TFlashStore::NextLogEntry(unsigned long, unsigned long *, unsigned long, void *)+0xdc>
         c217c:	e24dd020 	sub	sp, sp, #32	; 0x20
         c2180:	e3380000 	teq	r8, #0	; 0x0
         c2184:	0a000004 	beq	c219c <TFlashStore::NextLogEntry(unsigned long, unsigned long *, unsigned long, void *)+0x7c>
         c2188:	e0881004 	add	r1, r8, r4
         c218c:	e1a0000d 	mov	r0, sp
         c2190:	e3a02020 	mov	r2, #32	; 0x20
         c2194:	eb6bca2d 	bl	1bb4a50 <$memcpy>
         c2198:	ea000004 	b	c21b0 <TFlashStore::NextLogEntry(unsigned long, unsigned long *, unsigned long, void *)+0x90>
         c219c:	e1a03009 	mov	r3, r9
         c21a0:	e1a0200d 	mov	r2, sp
         c21a4:	e1a01004 	mov	r1, r4
         c21a8:	e1a00005 	mov	r0, r5
         c21ac:	eb68c601 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c21b0:	e1a01004 	mov	r1, r4
         c21b4:	e1a0000d 	mov	r0, sp
         c21b8:	eb68f35e 	bl	1afef38 <SFlashLogEntry::$IsValid(unsigned long)>
         c21bc:	e3300000 	teq	r0, #0	; 0x0
         c21c0:	0a000005 	beq	c21dc <TFlashStore::NextLogEntry(unsigned long, unsigned long *, unsigned long, void *)+0xbc>
         c21c4:	e3360000 	teq	r6, #0	; 0x0
         c21c8:	159d000c 	ldrne	r0, [sp, #12]
         c21cc:	11300006 	teqne	r0, r6
         c21d0:	03a00000 	moveq	r0, #0	; 0x0
         c21d4:	05874000 	streq	r4, [r7]
         c21d8:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c21dc:	e28dd020 	add	sp, sp, #32	; 0x20
         c21e0:	e2844004 	add	r4, r4, #4	; 0x4
         c21e4:	e5950050 	ldr	r0, [r5, #80]	; fField80
         c21e8:	e2401020 	sub	r1, r0, #32	; 0x20
         c21ec:	e595005c 	ldr	r0, [r5, #92]	; fField92
         c21f0:	e0000004 	and	r0, r0, r4
         c21f4:	e1510000 	cmp	r1, r0
         c21f8:	8affffdf 	bhi	c217c <TFlashStore::NextLogEntry(unsigned long, unsigned long *, unsigned long, void *)+0x5c>
         c21fc:	e5950050 	ldr	r0, [r5, #80]	; fField80
         c2200:	e1a01000 	mov	r1, r0
         c2204:	e0802004 	add	r2, r0, r4
         c2208:	e2423001 	sub	r3, r2, #1	; 0x1
         c220c:	e2402001 	sub	r2, r0, #1	; 0x1
         c2210:	e1c34002 	bic	r4, r3, r2
         c2214:	e5952054 	ldr	r2, [r5, #84]	; fField84
         c2218:	e0000092 	mul	r0, r2, r0
         c221c:	e1500004 	cmp	r0, r4
         c2220:	93a0008e 	movls	r0, #142	; 0x8e
         c2224:	92400c2a 	subls	r0, r0, #10752	; 0x2a00
         c2228:	991babf0 	ldmlsdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c222c:	e5d5003d 	ldrb	r0, [r5, #61]	; fField61
         c2230:	e3300000 	teq	r0, #0	; 0x0
         c2234:	03a00b01 	moveq	r0, #1024	; 0x400
         c2238:	13a00c01 	movne	r0, #256	; 0x100
         c223c:	e0410000 	sub	r0, r1, r0
         c2240:	e0804004 	add	r4, r0, r4
         c2244:	eaffffc6 	b	c2164 <TFlashStore::NextLogEntry(unsigned long, unsigned long *, unsigned long, void *)+0x44>
    */
}

/**
 * Symbol: TFlashStore::AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)
 * Address: 000c2248
 */
TFlashStore::AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *) {
    /*
         c2248:	e1a0c00d 	mov	ip, sp
         c224c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         c2250:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c2254:	e24cb014 	sub	fp, ip, #20	; 0x14
         c2258:	e1a04000 	mov	r4, r0
         c225c:	e1a06002 	mov	r6, r2
         c2260:	e1a05003 	mov	r5, r3
         c2264:	e28ba014 	add	sl, fp, #20	; 0x14
         c2268:	e89a0480 	ldmia	sl, {r7, sl}
         c226c:	e5902050 	ldr	r2, [r0, #80]	; fField80
         c2270:	e1a03002 	mov	r3, r2
         c2274:	e5d0003d 	ldrb	r0, [r0, #61]	; fField61
         c2278:	e1b01000 	movs	r1, r0
         c227c:	03a00b01 	moveq	r0, #1024	; 0x400
         c2280:	13a00c01 	movne	r0, #256	; 0x100
         c2284:	e0433000 	sub	r3, r3, r0
         c2288:	e594005c 	ldr	r0, [r4, #92]	; fField92
         c228c:	e000c007 	and	ip, r0, r7
         c2290:	e153000c 	cmp	r3, ip
         c2294:	8a000002 	bhi	c22a4 <TFlashStore::AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)+0x5c>
         c2298:	e2469004 	sub	r9, r6, #4	; 0x4
         c229c:	e2858004 	add	r8, r5, #4	; 0x4
         c22a0:	ea000006 	b	c22c0 <TFlashStore::AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)+0x78>
         c22a4:	e1c70000 	bic	r0, r7, r0
         c22a8:	e0820000 	add	r0, r2, r0
         c22ac:	e3310000 	teq	r1, #0	; 0x0
         c22b0:	03a01b01 	moveq	r1, #1024	; 0x400
         c22b4:	13a01c01 	movne	r1, #256	; 0x100
         c22b8:	e0407001 	sub	r7, r0, r1
         c22bc:	eafffff5 	b	c2298 <TFlashStore::AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)+0x50>
         c22c0:	e594005c 	ldr	r0, [r4, #92]	; fField92
         c22c4:	e0801007 	add	r1, r0, r7
         c22c8:	e1c12000 	bic	r2, r1, r0
         c22cc:	e1a03006 	mov	r3, r6
         c22d0:	e1a01007 	mov	r1, r7
         c22d4:	e1a00004 	mov	r0, r4
         c22d8:	eb68da4a 	bl	1af8c08 <TFlashStore::$FindPhysWritable(unsigned long, unsigned long, unsigned long)>
         c22dc:	e1b07000 	movs	r7, r0
         c22e0:	03a00091 	moveq	r0, #145	; 0x91
         c22e4:	02400c2a 	subeq	r0, r0, #10752	; 0x2a00
         c22e8:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         c22ec:	e2270319 	eor	r0, r7, #1677721600	; 0x64000000
         c22f0:	e2200879 	eor	r0, r0, #7929856	; 0x790000
         c22f4:	e2200c65 	eor	r0, r0, #25856	; 0x6500
         c22f8:	e2200072 	eor	r0, r0, #114	; 0x72
         c22fc:	e5850000 	str	r0, [r5]
         c2300:	e1e00007 	mvn	r0, r7
         c2304:	e2200466 	eor	r0, r0, #1711276032	; 0x66000000
         c2308:	e220086f 	eor	r0, r0, #7274496	; 0x6f0000
         c230c:	e2200c6f 	eor	r0, r0, #28416	; 0x6f00
         c2310:	e2200021 	eor	r0, r0, #33	; 0x21
         c2314:	e5850004 	str	r0, [r5, #4]	; fField4
         c2318:	e59f0078 	ldr	r0, [pc, #78]	; c2398 <TFlashStore::AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)+0x150>
         c231c:	e5850008 	str	r0, [r5, #8]	; fField8
         c2320:	e59b1008 	ldr	r1, [fp, #8]	; fField8
         c2324:	e1a00004 	mov	r0, r4
         c2328:	e285500c 	add	r5, r5, #12	; 0xc
         c232c:	e8850042 	stmia	r5, {r1, r6}
         c2330:	e245500c 	sub	r5, r5, #12	; 0xc
         c2334:	eb68f73b 	bl	1b00028 <TFlashStore::$NextLSN(void)>
         c2338:	e5850014 	str	r0, [r5, #20]	; fField20
         c233c:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c2340:	e1a03009 	mov	r3, r9
         c2344:	e1a02008 	mov	r2, r8
         c2348:	e2871004 	add	r1, r7, #4	; 0x4
         c234c:	e585001c 	str	r0, [r5, #28]	; fField28
         c2350:	e1a00004 	mov	r0, r4
         c2354:	eb68c599 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
         c2358:	e3300000 	teq	r0, #0	; 0x0
         c235c:	1a000004 	bne	c2374 <TFlashStore::AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)+0x12c>
         c2360:	e1a02005 	mov	r2, r5
         c2364:	e1a01007 	mov	r1, r7
         c2368:	e1a00004 	mov	r0, r4
         c236c:	e3a03004 	mov	r3, #4	; 0x4
         c2370:	eb68c592 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
         c2374:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c2378:	e37c0031 	cmn	ip, #49	; 0x31
         c237c:	1a000006 	bne	c239c <TFlashStore::AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)+0x154>
         c2380:	e1a01007 	mov	r1, r7
         c2384:	e1a00004 	mov	r0, r4
         c2388:	eb692068 	bl	1b0a530 <TFlashStore::$ZapLogEntry(unsigned long)>
         c238c:	e3300000 	teq	r0, #0	; 0x0
         c2390:	0affffca 	beq	c22c0 <TFlashStore::AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)+0x78>
         c2394:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         c2398:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         c239c:	e33a0000 	teq	sl, #0	; 0x0
         c23a0:	158a7000 	strne	r7, [sl]
         c23a4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::ZapLogEntry(unsigned long)
 * Address: 000c23a8
 */
TFlashStore::ZapLogEntry(unsigned long) {
    /*
         c23a8:	e3a02004 	mov	r2, #4	; 0x4
         c23ac:	ea69205d 	b	1b0a528 <TFlashStore::$Zap(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: Sizeof__11TFlashStoreSFv
 * Address: 000c4a9c
 */
void TFlashStore::Sizeof() {
    /*
         c4a9c:	e3a000f0 	mov	r0, #240	; 0xf0
         c4aa0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::NotifyCompact(TFlashBlock *)
 * Address: 000c4fe8
 */
TFlashStore::NotifyCompact(TFlashBlock *) {
    /*
         c4fe8:	e1a0c00d 	mov	ip, sp
         c4fec:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c4ff0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c4ff4:	e1a04000 	mov	r4, r0
         c4ff8:	e1a05001 	mov	r5, r1
         c4ffc:	e590607c 	ldr	r6, [r0, #124]	; fField124
         c5000:	e3360000 	teq	r6, #0	; 0x0
         c5004:	0a00001f 	beq	c5088 <TFlashStore::NotifyCompact(TFlashBlock *)+0xa0>
         c5008:	e59f7088 	ldr	r7, [pc, #88]	; c5098 <TFlashStore::NotifyCompact(TFlashBlock *)+0xb0>	; fField88
         c500c:	e1a01004 	mov	r1, r4
         c5010:	e1a00006 	mov	r0, r6
         c5014:	eb68e7c9 	bl	1afef40 <SObject::$IsValid(TFlashStore *)>
         c5018:	e3300000 	teq	r0, #0	; 0x0
         c501c:	0a000016 	beq	c507c <TFlashStore::NotifyCompact(TFlashBlock *)+0x94>
         c5020:	e5962008 	ldr	r2, [r6, #8]	; fField8
         c5024:	e5951004 	ldr	r1, [r5, #4]	; fField4
         c5028:	e594005c 	ldr	r0, [r4, #92]	; fField92
         c502c:	e1e00000 	mvn	r0, r0
         c5030:	e0002002 	and	r2, r0, r2
         c5034:	e0000001 	and	r0, r0, r1
         c5038:	e1320000 	teq	r2, r0
         c503c:	1a00000e 	bne	c507c <TFlashStore::NotifyCompact(TFlashBlock *)+0x94>
         c5040:	e3a03000 	mov	r3, #0	; 0x0
         c5044:	e92d0008 	stmdb	sp!, {r3}
         c5048:	e5960004 	ldr	r0, [r6, #4]	; fField4
         c504c:	e1a00800 	mov	r0, r0, lsl #16
         c5050:	e5961010 	ldr	r1, [r6, #16]	; fField16
         c5054:	e591104c 	ldr	r1, [r1, #76]	; fField76
         c5058:	e0210c20 	eor	r0, r1, r0, lsr #24
         c505c:	e20000ff 	and	r0, r0, #255	; 0xff
         c5060:	e7d72000 	ldrb	r2, [r7, r0]
         c5064:	e5960000 	ldr	r0, [r6]
         c5068:	e3c0120f 	bic	r1, r0, #-268435456	; 0xf0000000
         c506c:	e1a03006 	mov	r3, r6
         c5070:	e1a00005 	mov	r0, r5
         c5074:	eb68e7bc 	bl	1afef6c <TFlashBlock::$Lookup(unsigned long, int, TObjRef &, long *)>
         c5078:	e28dd004 	add	sp, sp, #4	; 0x4
         c507c:	e5966014 	ldr	r6, [r6, #20]	; fField20
         c5080:	e3360000 	teq	r6, #0	; 0x0
         c5084:	1affffe0 	bne	c500c <TFlashStore::NotifyCompact(TFlashBlock *)+0x24>
         c5088:	e59400a0 	ldr	r0, [r4, #160]	; fField160
         c508c:	e2800001 	add	r0, r0, #1	; 0x1
         c5090:	e5a400a0 	str	r0, [r4, #160]!	; fField160
         c5094:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c5098:	0037143c 	eoreqs	r1, r7, ip, lsr r4
    */
}

/**
 * Symbol: TFlashStore::Translate(unsigned long)
 * Address: 000c50d0
 */
TFlashStore::Translate(unsigned long) {
    /*
         c50d0:	e5902058 	ldr	r2, [r0, #88]	; fField88
         c50d4:	e1a02231 	mov	r2, r1, lsr r2
         c50d8:	e590302c 	ldr	r3, [r0, #44]	; fField44
         c50dc:	e7932102 	ldr	r2, [r3, r2, lsl #2]
         c50e0:	e5922008 	ldr	r2, [r2, #8]	; fField8
         c50e4:	e590005c 	ldr	r0, [r0, #92]	; fField92
         c50e8:	e0000001 	and	r0, r0, r1
         c50ec:	e0820000 	add	r0, r2, r0
         c50f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::ExchangeBlock(unsigned long, TFlashBlock *)
 * Address: 000c50f4
 */
TFlashStore::ExchangeBlock(unsigned long, TFlashBlock *) {
    /*
         c50f4:	e590302c 	ldr	r3, [r0, #44]	; fField44
         c50f8:	e5900058 	ldr	r0, [r0, #88]	; fField88
         c50fc:	e1a01031 	mov	r1, r1, lsr r0
         c5100:	e7930101 	ldr	r0, [r3, r1, lsl #2]
         c5104:	e7832101 	str	r2, [r3, r1, lsl #2]
         c5108:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::StoreCapacity(void)
 * Address: 000c510c
 */
TFlashStore::StoreCapacity(void) {
    /*
         c510c:	e5d0203d 	ldrb	r2, [r0, #61]	; fField61
         c5110:	e2801050 	add	r1, r0, #80	; 0x50
         c5114:	e8910003 	ldmia	r1, {r0, r1}
         c5118:	e0030091 	mul	r3, r1, r0
         c511c:	e3320000 	teq	r2, #0	; 0x0
         c5120:	00430000 	subeq	r0, r3, r0
         c5124:	11a00003 	movne	r0, r3
         c5128:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::NextLSN(void)
 * Address: 000c512c
 */
TFlashStore::NextLSN(void) {
    /*
         c512c:	e5901020 	ldr	r1, [r0, #32]	; fField32
         c5130:	e2811001 	add	r1, r1, #1	; 0x1
         c5134:	e5a01020 	str	r1, [r0, #32]!	; fField32
         c5138:	e1a00001 	mov	r0, r1
         c513c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::Add(TObjRef *)
 * Address: 000c5174
 */
TFlashStore::Add(TObjRef *) {
    /*
         c5174:	e590207c 	ldr	r2, [r0, #124]	; fField124
         c5178:	e5812014 	str	r2, [r1, #20]	; fField20
         c517c:	e3a02000 	mov	r2, #0	; 0x0
         c5180:	e5812018 	str	r2, [r1, #24]	; fField24
         c5184:	e590207c 	ldr	r2, [r0, #124]	; fField124
         c5188:	e3320000 	teq	r2, #0	; 0x0
         c518c:	15a21018 	strne	r1, [r2, #24]!	; fField24
         c5190:	e580107c 	str	r1, [r0, #124]	; fField124
         c5194:	e5902080 	ldr	r2, [r0, #128]	; fField128
         c5198:	e3320000 	teq	r2, #0	; 0x0
         c519c:	05a01080 	streq	r1, [r0, #128]!	; fField128
         c51a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::Remove(TObjRef *)
 * Address: 000c51a4
 */
TFlashStore::Remove(TObjRef *) {
    /*
         c51a4:	e5912018 	ldr	r2, [r1, #24]	; fField24
         c51a8:	e3320000 	teq	r2, #0	; 0x0
         c51ac:	05912014 	ldreq	r2, [r1, #20]	; fField20
         c51b0:	0580207c 	streq	r2, [r0, #124]	; fField124
         c51b4:	15913014 	ldrne	r3, [r1, #20]	; fField20
         c51b8:	15a23014 	strne	r3, [r2, #20]!	; fField20
         c51bc:	e5912014 	ldr	r2, [r1, #20]	; fField20
         c51c0:	e3320000 	teq	r2, #0	; 0x0
         c51c4:	05911018 	ldreq	r1, [r1, #24]	; fField24
         c51c8:	05a01080 	streq	r1, [r0, #128]!	; fField128
         c51cc:	15b10018 	ldrne	r0, [r1, #24]!	; fField24
         c51d0:	15a20018 	strne	r0, [r2, #24]!	; fField24
         c51d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::New(void)
 * Address: 000c51d8
 */
TFlashStore::New(void) {
    /*
         c51d8:	e3a01000 	mov	r1, #0	; 0x0
         c51dc:	e580102c 	str	r1, [r0, #44]	; fField44
         c51e0:	e5801024 	str	r1, [r0, #36]	; fField36
         c51e4:	e5801030 	str	r1, [r0, #48]	; fField48
         c51e8:	e5801034 	str	r1, [r0, #52]	; fField52
         c51ec:	e5801084 	str	r1, [r0, #132]	; fField132
         c51f0:	e5801074 	str	r1, [r0, #116]	; fField116
         c51f4:	e5801010 	str	r1, [r0, #16]	; fField16
         c51f8:	e3e01000 	mvn	r1, #0	; 0x0
         c51fc:	e580101c 	str	r1, [r0, #28]	; fField28
         c5200:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::NewObject(char *, long, unsigned long *)
 * Address: 000c5204
 */
TFlashStore::NewObject(char *, long, unsigned long *) {
    /*
         c5204:	e1a0c00d 	mov	ip, sp
         c5208:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         c520c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c5210:	e1a04000 	mov	r4, r0
         c5214:	e1a07001 	mov	r7, r1
         c5218:	e1a05002 	mov	r5, r2
         c521c:	e1a06003 	mov	r6, r3
         c5220:	e3a08000 	mov	r8, #0	; 0x0
         c5224:	e2120102 	ands	r0, r2, #-2147483648	; 0x80000000
         c5228:	13a00001 	movne	r0, #1	; 0x1
         c522c:	e5c40095 	strb	r0, [r4, #149]	; fField149
         c5230:	e3c55102 	bic	r5, r5, #-2147483648	; 0x80000000
         c5234:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c5238:	e2400b01 	sub	r0, r0, #1024	; 0x400
         c523c:	e1500005 	cmp	r0, r5
         c5240:	33a00082 	movcc	r0, #130	; 0x82
         c5244:	32400c2a 	subcc	r0, r0, #10752	; 0x2a00
         c5248:	391babf0 	ldmccdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c524c:	e1a00004 	mov	r0, r4
         c5250:	eb69109f 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         c5254:	e3a09000 	mov	r9, #0	; 0x0
         c5258:	e52d906c 	str	r9, [sp, -#108]!	; fField108
         c525c:	e28d0008 	add	r0, sp, #8	; 0x8
         c5260:	eb6bb5c3 	bl	1bb2974 <$setjmp>
         c5264:	e3300000 	teq	r0, #0	; 0x0
         c5268:	1a00005f 	bne	c53ec <TFlashStore::NewObject(char *, long, unsigned long *)+0x1e8>
         c526c:	e1a0000d 	mov	r0, sp
         c5270:	eb6c6b81 	bl	1be007c <$AddExceptionHandler>
         c5274:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         c5278:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c527c:	e59d1000 	ldr	r1, [sp]
         c5280:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c5284:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c5288:	e1810000 	orr	r0, r1, r0
         c528c:	e58d0000 	str	r0, [sp]
         c5290:	e58d4010 	str	r4, [sp, #16]	; fField16
         c5294:	e1a00004 	mov	r0, r4
         c5298:	e1a0100d 	mov	r1, sp
         c529c:	eb68b187 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c52a0:	e1a00004 	mov	r0, r4
         c52a4:	eb68e729 	bl	1afef50 <TFlashStore::$LockStore(void)>
         c52a8:	e3a03001 	mov	r3, #1	; 0x1
         c52ac:	e92d0008 	stmdb	sp!, {r3}
         c52b0:	e1a00004 	mov	r0, r4
         c52b4:	e3a02000 	mov	r2, #0	; 0x0
         c52b8:	e3e01000 	mvn	r1, #0	; 0x0
         c52bc:	eb6918b8 	bl	1b0b5a4 <TFlashStore::$SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)>
         c52c0:	e28dd004 	add	sp, sp, #4	; 0x4
         c52c4:	e1a08000 	mov	r8, r0
         c52c8:	e3360000 	teq	r6, #0	; 0x0
         c52cc:	0a00003f 	beq	c53d0 <TFlashStore::NewObject(char *, long, unsigned long *)+0x1cc>
         c52d0:	e3580000 	cmp	r8, #0	; 0x0
         c52d4:	e5869000 	str	r9, [r6]
         c52d8:	1a000015 	bne	c5334 <TFlashStore::NewObject(char *, long, unsigned long *)+0x130>
         c52dc:	e5d40095 	ldrb	r0, [r4, #149]	; fField149
         c52e0:	e3300000 	teq	r0, #0	; 0x0
         c52e4:	1a000013 	bne	c5338 <TFlashStore::NewObject(char *, long, unsigned long *)+0x134>
         c52e8:	e1a00004 	mov	r0, r4
         c52ec:	eb68b9ad 	bl	1af39a8 <TFlashStore::$Avail(void)>
         c52f0:	e1a08000 	mov	r8, r0
         c52f4:	e1a00004 	mov	r0, r4
         c52f8:	eb00152d 	bl	ca7b4 <TFlashStore::InternalStoreSlop(void)>
         c52fc:	e1580000 	cmp	r8, r0
         c5300:	2a00000c 	bcs	c5338 <TFlashStore::NewObject(char *, long, unsigned long *)+0x134>
         c5304:	e1a00004 	mov	r0, r4
         c5308:	eb001247 	bl	c9c2c <TFlashStore::GC(void)>
         c530c:	e1a00004 	mov	r0, r4
         c5310:	eb68b9a4 	bl	1af39a8 <TFlashStore::$Avail(void)>
         c5314:	e1a08000 	mov	r8, r0
         c5318:	e1a00004 	mov	r0, r4
         c531c:	eb001524 	bl	ca7b4 <TFlashStore::InternalStoreSlop(void)>
         c5320:	e1580000 	cmp	r8, r0
         c5324:	359f8004 	ldrcc	r8, [pc, #4]	; c5330 <TFlashStore::NewObject(char *, long, unsigned long *)+0x12c>	; fField4
         c5328:	3a000028 	bcc	c53d0 <TFlashStore::NewObject(char *, long, unsigned long *)+0x1cc>
         c532c:	ea000001 	b	c5338 <TFlashStore::NewObject(char *, long, unsigned long *)+0x134>
         c5330:	ffffd687 	swinv	0x00ffd687
         c5334:	1a000025 	bne	c53d0 <TFlashStore::NewObject(char *, long, unsigned long *)+0x1cc>
         c5338:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c533c:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c5340:	e2811001 	add	r1, r1, #1	; 0x1
         c5344:	e3a03000 	mov	r3, #0	; 0x0
         c5348:	e3a02000 	mov	r2, #0	; 0x0
         c534c:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c5350:	e1a0100d 	mov	r1, sp
         c5354:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         c5358:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c535c:	e3300000 	teq	r0, #0	; 0x0
         c5360:	03a0200a 	moveq	r2, #10	; 0xa
         c5364:	13a02003 	movne	r2, #3	; 0x3
         c5368:	e1a03005 	mov	r3, r5
         c536c:	e1a00004 	mov	r0, r4
         c5370:	e3e01000 	mvn	r1, #0	; 0x0
         c5374:	eb69147d 	bl	1b0a570 <TFlashStore::$AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)>
         c5378:	e28dd00c 	add	sp, sp, #12	; 0xc
         c537c:	e1b08000 	movs	r8, r0
         c5380:	1a00000d 	bne	c53bc <TFlashStore::NewObject(char *, long, unsigned long *)+0x1b8>
         c5384:	e3370000 	teq	r7, #0	; 0x0
         c5388:	0a000006 	beq	c53a8 <TFlashStore::NewObject(char *, long, unsigned long *)+0x1a4>
         c538c:	e1a03005 	mov	r3, r5
         c5390:	e1a01007 	mov	r1, r7
         c5394:	e1a0000d 	mov	r0, sp
         c5398:	e3a02000 	mov	r2, #0	; 0x0
         c539c:	eb691458 	bl	1b0a504 <TObjRef::$Write(void *, unsigned long, unsigned long)>
         c53a0:	e1b08000 	movs	r8, r0
         c53a4:	1a000004 	bne	c53bc <TFlashStore::NewObject(char *, long, unsigned long *)+0x1b8>
         c53a8:	e59d0000 	ldr	r0, [sp]
         c53ac:	e3c0120f 	bic	r1, r0, #-268435456	; 0xf0000000
         c53b0:	e5861000 	str	r1, [r6]
         c53b4:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c53b8:	eb68b143 	bl	1af18cc <TFlashTracker::$Add(unsigned long)>
         c53bc:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c53c0:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c53c4:	e3310000 	teq	r1, #0	; 0x0
         c53c8:	12411001 	subne	r1, r1, #1	; 0x1
         c53cc:	15a01010 	strne	r1, [r0, #16]!	; fField16
         c53d0:	e1a00004 	mov	r0, r4
         c53d4:	eb690c23 	bl	1b08468 <TFlashStore::$UnlockStore(void)>
         c53d8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         c53dc:	e1a0100d 	mov	r1, sp
         c53e0:	eb68f779 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c53e4:	e28dd01c 	add	sp, sp, #28	; 0x1c
         c53e8:	ea00000b 	b	c541c <TFlashStore::NewObject(char *, long, unsigned long *)+0x218>
         c53ec:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c53f0:	e59f1040 	ldr	r1, [pc, #40]	; c5438 <TFlashStore::NewObject(char *, long, unsigned long *)+0x234>	; fField40
         c53f4:	e5911000 	ldr	r1, [r1]
         c53f8:	eb6c7765 	bl	1be3194 <$Subexception>
         c53fc:	e3300000 	teq	r0, #0	; 0x0
         c5400:	0a000003 	beq	c5414 <TFlashStore::NewObject(char *, long, unsigned long *)+0x210>
         c5404:	e1a00004 	mov	r0, r4
         c5408:	eb69102e 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c540c:	e5849080 	str	r9, [r4, #128]	; fField128
         c5410:	e584907c 	str	r9, [r4, #124]	; fField124
         c5414:	e1a0000d 	mov	r0, sp
         c5418:	eb6c734d 	bl	1be2154 <$NextHandler>
         c541c:	e1a0000d 	mov	r0, sp
         c5420:	eb6c6f24 	bl	1be10b8 <$ExitHandler>
         c5424:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c5428:	e1a00004 	mov	r0, r4
         c542c:	eb691025 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c5430:	e1a00008 	mov	r0, r8
         c5434:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c5438:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::NewObject(long, unsigned long *)
 * Address: 000c543c
 */
TFlashStore::NewObject(long, unsigned long *) {
    /*
         c543c:	e1a03002 	mov	r3, r2
         c5440:	e1a02001 	mov	r2, r1
         c5444:	e3a01000 	mov	r1, #0	; 0x0
         c5448:	ea691447 	b	1b0a56c <TFlashStore::$NewObject(char *, long, unsigned long *)>
    */
}

/**
 * Symbol: TFlashStore::EraseObject(unsigned long)
 * Address: 000c544c
 */
TFlashStore::EraseObject(unsigned long) {
    /*
         c544c:	e3a00000 	mov	r0, #0	; 0x0
         c5450:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)
 * Address: 000c5454
 */
TFlashStore::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char) {
    /*
         c5454:	e1a0c00d 	mov	ip, sp
         c5458:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         c545c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c5460:	e24cb014 	sub	fp, ip, #20	; 0x14
         c5464:	e1a04000 	mov	r4, r0
         c5468:	e1a06001 	mov	r6, r1
         c546c:	e1a05003 	mov	r5, r3
         c5470:	e59b1018 	ldr	r1, [fp, #24]	; fField24
         c5474:	e20120ff 	and	r2, r1, #255	; 0xff
         c5478:	e59b001c 	ldr	r0, [fp, #28]	; fField28
         c547c:	e59ba014 	ldr	sl, [fp, #20]	; fField20
         c5480:	e20090ff 	and	r9, r0, #255	; 0xff
         c5484:	e3760001 	cmn	r6, #1	; 0x1
         c5488:	e52d2004 	str	r2, [sp, -#4]!	; fField4
         c548c:	13a00000 	movne	r0, #0	; 0x0
         c5490:	03a00001 	moveq	r0, #1	; 0x1
         c5494:	e20080ff 	and	r8, r0, #255	; 0xff
         c5498:	e3390000 	teq	r9, #0	; 0x0
         c549c:	01a07005 	moveq	r7, r5
         c54a0:	12857a01 	addne	r7, r5, #4096	; 0x1000
         c54a4:	e5940028 	ldr	r0, [r4, #40]	; fField40
         c54a8:	e3300000 	teq	r0, #0	; 0x0
         c54ac:	1a000011 	bne	c54f8 <TFlashStore::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0xa4>
         c54b0:	e1a01007 	mov	r1, r7
         c54b4:	e1a00004 	mov	r0, r4
         c54b8:	e3e02000 	mvn	r2, #0	; 0x0
         c54bc:	eb68bd62 	bl	1af4a4c <TFlashStore::$ChooseWorkingBlock(unsigned long, unsigned long)>
         c54c0:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c54c4:	e37c0039 	cmn	ip, #57	; 0x39
         c54c8:	1a000008 	bne	c54f0 <TFlashStore::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x9c>
         c54cc:	e5d4103d 	ldrb	r1, [r4, #61]	; fField61
         c54d0:	e3310000 	teq	r1, #0	; 0x0
         c54d4:	0a000035 	beq	c55b0 <TFlashStore::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x15c>
         c54d8:	e1a00004 	mov	r0, r4
         c54dc:	eb0011d2 	bl	c9c2c <TFlashStore::GC(void)>
         c54e0:	e1a01007 	mov	r1, r7
         c54e4:	e1a00004 	mov	r0, r4
         c54e8:	e3e02000 	mvn	r2, #0	; 0x0
         c54ec:	eb68bd56 	bl	1af4a4c <TFlashStore::$ChooseWorkingBlock(unsigned long, unsigned long)>
         c54f0:	e3300000 	teq	r0, #0	; 0x0
         c54f4:	1a00002d 	bne	c55b0 <TFlashStore::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x15c>
         c54f8:	e3380000 	teq	r8, #0	; 0x0
         c54fc:	0a000002 	beq	c550c <TFlashStore::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0xb8>
         c5500:	e5940028 	ldr	r0, [r4, #40]	; fField40
         c5504:	eb68eace 	bl	1b00044 <TFlashBlock::$NextPSSID(void)>
         c5508:	e1a06000 	mov	r6, r0
         c550c:	e1a03009 	mov	r3, r9
         c5510:	e1a0100a 	mov	r1, sl
         c5514:	e59d2000 	ldr	r2, [sp]
         c5518:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         c551c:	e1a03005 	mov	r3, r5
         c5520:	e5940028 	ldr	r0, [r4, #40]	; fField40
         c5524:	e1a01006 	mov	r1, r6
         c5528:	e59b200c 	ldr	r2, [fp, #12]
         c552c:	eb691402 	bl	1b0a53c <TFlashBlock::$AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)>
         c5530:	e28dd00c 	add	sp, sp, #12	; 0xc
         c5534:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c5538:	e37c002f 	cmn	ip, #47	; 0x2f
         c553c:	0a000009 	beq	c5568 <TFlashStore::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x114>
         c5540:	e3300000 	teq	r0, #0	; 0x0
         c5544:	1a000019 	bne	c55b0 <TFlashStore::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x15c>
         c5548:	e1a0100a 	mov	r1, sl
         c554c:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c5550:	eb68b0e0 	bl	1af18d8 <TFlashStoreLookupCache::$Add(TObjRef &)>
         c5554:	e3380000 	teq	r8, #0	; 0x0
         c5558:	15b40028 	ldrne	r0, [r4, #40]!	; fField40
         c555c:	1b690fd0 	blne	1b094a4 <TFlashBlock::$UseNextPSSID(void)>
         c5560:	e3a00000 	mov	r0, #0	; 0x0
         c5564:	ea000011 	b	c55b0 <TFlashStore::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x15c>
         c5568:	e1a01007 	mov	r1, r7
         c556c:	e1a00004 	mov	r0, r4
         c5570:	e3e02000 	mvn	r2, #0	; 0x0
         c5574:	eb68bd34 	bl	1af4a4c <TFlashStore::$ChooseWorkingBlock(unsigned long, unsigned long)>
         c5578:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c557c:	e37c0039 	cmn	ip, #57	; 0x39
         c5580:	1a000008 	bne	c55a8 <TFlashStore::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x154>
         c5584:	e5d4103d 	ldrb	r1, [r4, #61]	; fField61
         c5588:	e3310000 	teq	r1, #0	; 0x0
         c558c:	0a000007 	beq	c55b0 <TFlashStore::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x15c>
         c5590:	e1a00004 	mov	r0, r4
         c5594:	eb0011a4 	bl	c9c2c <TFlashStore::GC(void)>
         c5598:	e1a01007 	mov	r1, r7
         c559c:	e1a00004 	mov	r0, r4
         c55a0:	e3e02000 	mvn	r2, #0	; 0x0
         c55a4:	eb68bd28 	bl	1af4a4c <TFlashStore::$ChooseWorkingBlock(unsigned long, unsigned long)>
         c55a8:	e3300000 	teq	r0, #0	; 0x0
         c55ac:	0affffbc 	beq	c54a4 <TFlashStore::AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)+0x50>
         c55b0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::DeleteObject(unsigned long)
 * Address: 000c55b4
 */
TFlashStore::DeleteObject(unsigned long) {
    /*
         c55b4:	e1a0c00d 	mov	ip, sp
         c55b8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c55bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         c55c0:	e1a04000 	mov	r4, r0
         c55c4:	e1a05001 	mov	r5, r1
         c55c8:	e3a06000 	mov	r6, #0	; 0x0
         c55cc:	e3710001 	cmn	r1, #1	; 0x1
         c55d0:	01a00006 	moveq	r0, r6
         c55d4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         c55d8:	e24dd004 	sub	sp, sp, #4	; 0x4
         c55dc:	e1a00004 	mov	r0, r4
         c55e0:	eb690fbb 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         c55e4:	e52d606c 	str	r6, [sp, -#108]!	; fField108
         c55e8:	e28d0008 	add	r0, sp, #8	; 0x8
         c55ec:	eb6bb4e0 	bl	1bb2974 <$setjmp>
         c55f0:	e3300000 	teq	r0, #0	; 0x0
         c55f4:	1a000093 	bne	c5848 <TFlashStore::DeleteObject(unsigned long)+0x294>
         c55f8:	e1a0000d 	mov	r0, sp
         c55fc:	eb6c6a9e 	bl	1be007c <$AddExceptionHandler>
         c5600:	e24dd038 	sub	sp, sp, #56	; 0x38
         c5604:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c5608:	e59d101c 	ldr	r1, [sp, #28]	; fField28
         c560c:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c5610:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c5614:	e1810000 	orr	r0, r1, r0
         c5618:	e58d001c 	str	r0, [sp, #28]	; fField28
         c561c:	e58d402c 	str	r4, [sp, #44]	; fField44
         c5620:	e1a00004 	mov	r0, r4
         c5624:	e28d101c 	add	r1, sp, #28	; 0x1c
         c5628:	eb68b0a4 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c562c:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c5630:	e59d1000 	ldr	r1, [sp]
         c5634:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c5638:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c563c:	e1810000 	orr	r0, r1, r0
         c5640:	e58d0000 	str	r0, [sp]
         c5644:	e58d4010 	str	r4, [sp, #16]	; fField16
         c5648:	e1a00004 	mov	r0, r4
         c564c:	e1a0100d 	mov	r1, sp
         c5650:	eb68b09a 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c5654:	e1a00004 	mov	r0, r4
         c5658:	eb68e63c 	bl	1afef50 <TFlashStore::$LockStore(void)>
         c565c:	e3a03001 	mov	r3, #1	; 0x1
         c5660:	e92d0008 	stmdb	sp!, {r3}
         c5664:	e28d2020 	add	r2, sp, #32	; 0x20
         c5668:	e1a01005 	mov	r1, r5
         c566c:	e1a00004 	mov	r0, r4
         c5670:	eb6917cb 	bl	1b0b5a4 <TFlashStore::$SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)>
         c5674:	e28dd004 	add	sp, sp, #4	; 0x4
         c5678:	e58d00a4 	str	r0, [sp, #164]
         c567c:	e3300000 	teq	r0, #0	; 0x0
         c5680:	1a000062 	bne	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c5684:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c5688:	e1a00800 	mov	r0, r0, lsl #16
         c568c:	e59d102c 	ldr	r1, [sp, #44]	; fField44
         c5690:	e591104c 	ldr	r1, [r1, #76]	; fField76
         c5694:	e0210c20 	eor	r0, r1, r0, lsr #24
         c5698:	e20010ff 	and	r1, r0, #255	; 0xff
         c569c:	e59f0080 	ldr	r0, [pc, #80]	; c5724 <TFlashStore::DeleteObject(unsigned long)+0x170>	; fField80
         c56a0:	e7d00001 	ldrb	r0, [r0, r1]
         c56a4:	e2400003 	sub	r0, r0, #3	; 0x3
         c56a8:	e3a06002 	mov	r6, #2	; 0x2
         c56ac:	e350000a 	cmp	r0, #10	; 0xa
         c56b0:	908ff100 	addls	pc, pc, r0, lsl #2
         c56b4:	ea000055 	b	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c56b8:	ea00001a 	b	c5728 <TFlashStore::DeleteObject(unsigned long)+0x174>
         c56bc:	ea000036 	b	c579c <TFlashStore::DeleteObject(unsigned long)+0x1e8>
         c56c0:	ea000052 	b	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c56c4:	ea000005 	b	c56e0 <TFlashStore::DeleteObject(unsigned long)+0x12c>
         c56c8:	ea000050 	b	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c56cc:	ea00004f 	b	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c56d0:	ea00004e 	b	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c56d4:	ea000013 	b	c5728 <TFlashStore::DeleteObject(unsigned long)+0x174>
         c56d8:	ea00002f 	b	c579c <TFlashStore::DeleteObject(unsigned long)+0x1e8>
         c56dc:	ea00004b 	b	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c56e0:	e1a0100d 	mov	r1, sp
         c56e4:	e28d001c 	add	r0, sp, #28	; 0x1c
         c56e8:	eb68cd48 	bl	1af8c10 <TObjRef::$FindSuperceeded(TObjRef &)>
         c56ec:	e58d00a4 	str	r0, [sp, #164]
         c56f0:	e3300000 	teq	r0, #0	; 0x0
         c56f4:	1a000045 	bne	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c56f8:	e28d001c 	add	r0, sp, #28	; 0x1c
         c56fc:	eb68c506 	bl	1af6b1c <TObjRef::$Delete(void)>
         c5700:	e58d00a4 	str	r0, [sp, #164]
         c5704:	e3300000 	teq	r0, #0	; 0x0
         c5708:	1a000040 	bne	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c570c:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c5710:	e3300000 	teq	r0, #0	; 0x0
         c5714:	03a0100e 	moveq	r1, #14	; 0xe
         c5718:	13a01007 	movne	r1, #7	; 0x7
         c571c:	e1a0000d 	mov	r0, sp
         c5720:	ea00001a 	b	c5790 <TFlashStore::DeleteObject(unsigned long)+0x1dc>
         c5724:	0037143c 	eoreqs	r1, r7, ip, lsr r4
         c5728:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c572c:	e1a00e80 	mov	r0, r0, lsl #29
         c5730:	e1360f20 	teq	r6, r0, lsr #30
         c5734:	0a000010 	beq	c577c <TFlashStore::DeleteObject(unsigned long)+0x1c8>
         c5738:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c573c:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c5740:	e2811001 	add	r1, r1, #1	; 0x1
         c5744:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c5748:	e28d001c 	add	r0, sp, #28	; 0x1c
         c574c:	eb68c4f2 	bl	1af6b1c <TObjRef::$Delete(void)>
         c5750:	e58d00a4 	str	r0, [sp, #164]
         c5754:	e3300000 	teq	r0, #0	; 0x0
         c5758:	1a00002c 	bne	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c575c:	e1a01005 	mov	r1, r5
         c5760:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c5764:	eb68f69c 	bl	1b031dc <TFlashTracker::$Remove(unsigned long)>
         c5768:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c576c:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c5770:	e3310000 	teq	r1, #0	; 0x0
         c5774:	0a000025 	beq	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c5778:	ea000022 	b	c5808 <TFlashStore::DeleteObject(unsigned long)+0x254>
         c577c:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c5780:	e3300000 	teq	r0, #0	; 0x0
         c5784:	03a0100e 	moveq	r1, #14	; 0xe
         c5788:	13a01007 	movne	r1, #7	; 0x7
         c578c:	e28d001c 	add	r0, sp, #28	; 0x1c
         c5790:	eb6902ea 	bl	1b06340 <TObjRef::$SetState(int)>
         c5794:	e58d00a4 	str	r0, [sp, #164]
         c5798:	ea00001c 	b	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c579c:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c57a0:	e1a00e80 	mov	r0, r0, lsl #29
         c57a4:	e1360f20 	teq	r6, r0, lsr #30
         c57a8:	0a000006 	beq	c57c8 <TFlashStore::DeleteObject(unsigned long)+0x214>
         c57ac:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c57b0:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c57b4:	e2811001 	add	r1, r1, #1	; 0x1
         c57b8:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c57bc:	e1a01005 	mov	r1, r5
         c57c0:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c57c4:	eb68b040 	bl	1af18cc <TFlashTracker::$Add(unsigned long)>
         c57c8:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c57cc:	e3300000 	teq	r0, #0	; 0x0
         c57d0:	03a0100e 	moveq	r1, #14	; 0xe
         c57d4:	13a01007 	movne	r1, #7	; 0x7
         c57d8:	e28d001c 	add	r0, sp, #28	; 0x1c
         c57dc:	eb6902d7 	bl	1b06340 <TObjRef::$SetState(int)>
         c57e0:	e58d00a4 	str	r0, [sp, #164]
         c57e4:	e3300000 	teq	r0, #0	; 0x0
         c57e8:	1a000008 	bne	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c57ec:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c57f0:	e1a00e80 	mov	r0, r0, lsl #29
         c57f4:	e1360f20 	teq	r6, r0, lsr #30
         c57f8:	15940084 	ldrne	r0, [r4, #132]	; fField132
         c57fc:	15901010 	ldrne	r1, [r0, #16]	; fField16
         c5800:	13310000 	teqne	r1, #0	; 0x0
         c5804:	0a000001 	beq	c5810 <TFlashStore::DeleteObject(unsigned long)+0x25c>
         c5808:	e2411001 	sub	r1, r1, #1	; 0x1
         c580c:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c5810:	e1a01005 	mov	r1, r5
         c5814:	e3a02000 	mov	r2, #0	; 0x0
         c5818:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c581c:	eb68cd11 	bl	1af8c68 <TFlashStoreLookupCache::$Forget(unsigned long, int)>
         c5820:	e1a00004 	mov	r0, r4
         c5824:	eb690b0f 	bl	1b08468 <TFlashStore::$UnlockStore(void)>
         c5828:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         c582c:	e1a0100d 	mov	r1, sp
         c5830:	eb68f665 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c5834:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         c5838:	e28d101c 	add	r1, sp, #28	; 0x1c
         c583c:	eb68f662 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c5840:	e28dd038 	add	sp, sp, #56	; 0x38
         c5844:	ea00000b 	b	c5878 <TFlashStore::DeleteObject(unsigned long)+0x2c4>
         c5848:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c584c:	e59f1040 	ldr	r1, [pc, #40]	; c5894 <TFlashStore::DeleteObject(unsigned long)+0x2e0>	; fField40
         c5850:	e5911000 	ldr	r1, [r1]
         c5854:	eb6c764e 	bl	1be3194 <$Subexception>
         c5858:	e3300000 	teq	r0, #0	; 0x0
         c585c:	0a000003 	beq	c5870 <TFlashStore::DeleteObject(unsigned long)+0x2bc>
         c5860:	e1a00004 	mov	r0, r4
         c5864:	eb690f17 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c5868:	e5846080 	str	r6, [r4, #128]	; fField128
         c586c:	e584607c 	str	r6, [r4, #124]	; fField124
         c5870:	e1a0000d 	mov	r0, sp
         c5874:	eb6c7236 	bl	1be2154 <$NextHandler>
         c5878:	e1a0000d 	mov	r0, sp
         c587c:	eb6c6e0d 	bl	1be10b8 <$ExitHandler>
         c5880:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c5884:	e1a00004 	mov	r0, r4
         c5888:	eb690f0e 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c588c:	e49d0004 	ldr	r0, [sp], #4	; fField4
         c5890:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         c5894:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::SetObjectSize(unsigned long, long)
 * Address: 000c5898
 */
TFlashStore::SetObjectSize(unsigned long, long) {
    /*
         c5898:	e1a0c00d 	mov	ip, sp
         c589c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         c58a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c58a4:	e1a04000 	mov	r4, r0
         c58a8:	e1a05001 	mov	r5, r1
         c58ac:	e1a06002 	mov	r6, r2
         c58b0:	e24dd004 	sub	sp, sp, #4	; 0x4
         c58b4:	e2110102 	ands	r0, r1, #-2147483648	; 0x80000000
         c58b8:	13a00001 	movne	r0, #1	; 0x1
         c58bc:	e5c40095 	strb	r0, [r4, #149]	; fField149
         c58c0:	e3c55102 	bic	r5, r5, #-2147483648	; 0x80000000
         c58c4:	e1a00004 	mov	r0, r4
         c58c8:	eb690f01 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         c58cc:	e3a07000 	mov	r7, #0	; 0x0
         c58d0:	e52d706c 	str	r7, [sp, -#108]!	; fField108
         c58d4:	e28d0008 	add	r0, sp, #8	; 0x8
         c58d8:	eb6bb425 	bl	1bb2974 <$setjmp>
         c58dc:	e3300000 	teq	r0, #0	; 0x0
         c58e0:	1a00012f 	bne	c5da4 <TFlashStore::SetObjectSize(unsigned long, long)+0x50c>
         c58e4:	e1a0000d 	mov	r0, sp
         c58e8:	eb6c69e3 	bl	1be007c <$AddExceptionHandler>
         c58ec:	e24dd038 	sub	sp, sp, #56	; 0x38
         c58f0:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c58f4:	e59d101c 	ldr	r1, [sp, #28]	; fField28
         c58f8:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c58fc:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c5900:	e1810000 	orr	r0, r1, r0
         c5904:	e58d001c 	str	r0, [sp, #28]	; fField28
         c5908:	e58d402c 	str	r4, [sp, #44]	; fField44
         c590c:	e1a00004 	mov	r0, r4
         c5910:	e28d101c 	add	r1, sp, #28	; 0x1c
         c5914:	eb68afe9 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c5918:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c591c:	e59d1000 	ldr	r1, [sp]
         c5920:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c5924:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c5928:	e1810000 	orr	r0, r1, r0
         c592c:	e58d0000 	str	r0, [sp]
         c5930:	e58d4010 	str	r4, [sp, #16]	; fField16
         c5934:	e1a00004 	mov	r0, r4
         c5938:	e1a0100d 	mov	r1, sp
         c593c:	eb68afdf 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c5940:	e1a07006 	mov	r7, r6
         c5944:	e1a00004 	mov	r0, r4
         c5948:	eb68e580 	bl	1afef50 <TFlashStore::$LockStore(void)>
         c594c:	e3a03001 	mov	r3, #1	; 0x1
         c5950:	e92d0008 	stmdb	sp!, {r3}
         c5954:	e28d2020 	add	r2, sp, #32	; 0x20
         c5958:	e1a01005 	mov	r1, r5
         c595c:	e1a00004 	mov	r0, r4
         c5960:	eb69170f 	bl	1b0b5a4 <TFlashStore::$SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)>
         c5964:	e28dd004 	add	sp, sp, #4	; 0x4
         c5968:	e58d00a4 	str	r0, [sp, #164]
         c596c:	e5d40095 	ldrb	r0, [r4, #149]	; fField149
         c5970:	e3300000 	teq	r0, #0	; 0x0
         c5974:	1a00000a 	bne	c59a4 <TFlashStore::SetObjectSize(unsigned long, long)+0x10c>
         c5978:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c597c:	e1560820 	cmp	r6, r0, lsr #16
         c5980:	9a000007 	bls	c59a4 <TFlashStore::SetObjectSize(unsigned long, long)+0x10c>
         c5984:	e1a00004 	mov	r0, r4
         c5988:	eb68b806 	bl	1af39a8 <TFlashStore::$Avail(void)>
         c598c:	e1a08000 	mov	r8, r0
         c5990:	e1a00004 	mov	r0, r4
         c5994:	eb001386 	bl	ca7b4 <TFlashStore::InternalStoreSlop(void)>
         c5998:	e1580000 	cmp	r8, r0
         c599c:	359f00a4 	ldrcc	r0, [pc, #a4]	; c5a48 <TFlashStore::SetObjectSize(unsigned long, long)+0x1b0>
         c59a0:	358d00a4 	strcc	r0, [sp, #164]
         c59a4:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c59a8:	e1a00e80 	mov	r0, r0, lsl #29
         c59ac:	e3a09002 	mov	r9, #2	; 0x2
         c59b0:	e1390f20 	teq	r9, r0, lsr #30
         c59b4:	13a01001 	movne	r1, #1	; 0x1
         c59b8:	03a01000 	moveq	r1, #0	; 0x0
         c59bc:	e20180ff 	and	r8, r1, #255	; 0xff
         c59c0:	e59d00a4 	ldr	r0, [sp, #164]
         c59c4:	e3300000 	teq	r0, #0	; 0x0
         c59c8:	1a0000eb 	bne	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c59cc:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c59d0:	e1a00820 	mov	r0, r0, lsr #16
         c59d4:	e1300006 	teq	r0, r6
         c59d8:	0a0000e7 	beq	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c59dc:	e59d1020 	ldr	r1, [sp, #32]	; fField32
         c59e0:	e1a01801 	mov	r1, r1, lsl #16
         c59e4:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         c59e8:	e590004c 	ldr	r0, [r0, #76]	; fField76
         c59ec:	e0200c21 	eor	r0, r0, r1, lsr #24
         c59f0:	e20010ff 	and	r1, r0, #255	; 0xff
         c59f4:	e59f0050 	ldr	r0, [pc, #50]	; c5a4c <TFlashStore::SetObjectSize(unsigned long, long)+0x1b4>
         c59f8:	e7d00001 	ldrb	r0, [r0, r1]
         c59fc:	e59f604c 	ldr	r6, [pc, #4c]	; c5a50 <TFlashStore::SetObjectSize(unsigned long, long)+0x1b8>	; fField4
         c5a00:	e350000e 	cmp	r0, #14	; 0xe
         c5a04:	908ff100 	addls	pc, pc, r0, lsl #2
         c5a08:	ea0000db 	b	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5a0c:	ea0000da 	b	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5a10:	ea0000d9 	b	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5a14:	ea0000d8 	b	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5a18:	ea00000d 	b	c5a54 <TFlashStore::SetObjectSize(unsigned long, long)+0x1bc>
         c5a1c:	ea00004e 	b	c5b5c <TFlashStore::SetObjectSize(unsigned long, long)+0x2c4>
         c5a20:	ea0000d5 	b	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5a24:	ea000093 	b	c5c78 <TFlashStore::SetObjectSize(unsigned long, long)+0x3e0>
         c5a28:	ea0000d3 	b	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5a2c:	ea0000d2 	b	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5a30:	ea0000d1 	b	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5a34:	ea000006 	b	c5a54 <TFlashStore::SetObjectSize(unsigned long, long)+0x1bc>
         c5a38:	ea000047 	b	c5b5c <TFlashStore::SetObjectSize(unsigned long, long)+0x2c4>
         c5a3c:	ea0000ce 	b	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5a40:	ea00008c 	b	c5c78 <TFlashStore::SetObjectSize(unsigned long, long)+0x3e0>
         c5a44:	ea0000cc 	b	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5a48:	ffffd687 	swinv	0x00ffd687
         c5a4c:	0037143c 	eoreqs	r1, r7, ip, lsr r4
         c5a50:	ffffd68f 	swinv	0x00ffd68f
         c5a54:	e3380000 	teq	r8, #0	; 0x0
         c5a58:	0a000003 	beq	c5a6c <TFlashStore::SetObjectSize(unsigned long, long)+0x1d4>
         c5a5c:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c5a60:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c5a64:	e2811001 	add	r1, r1, #1	; 0x1
         c5a68:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c5a6c:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c5a70:	e1a00e80 	mov	r0, r0, lsl #29
         c5a74:	e1390f20 	teq	r9, r0, lsr #30
         c5a78:	13a00000 	movne	r0, #0	; 0x0
         c5a7c:	03a00001 	moveq	r0, #1	; 0x1
         c5a80:	e20030ff 	and	r3, r0, #255	; 0xff
         c5a84:	e92d0008 	stmdb	sp!, {r3}
         c5a88:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c5a8c:	e3300000 	teq	r0, #0	; 0x0
         c5a90:	03a01009 	moveq	r1, #9	; 0x9
         c5a94:	13a01002 	movne	r1, #2	; 0x2
         c5a98:	e28d3004 	add	r3, sp, #4	; 0x4
         c5a9c:	e1a02007 	mov	r2, r7
         c5aa0:	e28d0020 	add	r0, sp, #32	; 0x20
         c5aa4:	eb020b06 	bl	1486c4 <TObjRef::CloneEmpty(int, unsigned long, TObjRef &, unsigned char)>
         c5aa8:	e28dd004 	add	sp, sp, #4	; 0x4
         c5aac:	e58d00a4 	str	r0, [sp, #164]
         c5ab0:	e3300000 	teq	r0, #0	; 0x0
         c5ab4:	1a000009 	bne	c5ae0 <TFlashStore::SetObjectSize(unsigned long, long)+0x248>
         c5ab8:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c5abc:	e1a00820 	mov	r0, r0, lsr #16
         c5ac0:	e1500007 	cmp	r0, r7
         c5ac4:	21a03007 	movcs	r3, r7
         c5ac8:	31a03000 	movcc	r3, r0
         c5acc:	e1a0100d 	mov	r1, sp
         c5ad0:	e28d001c 	add	r0, sp, #28	; 0x1c
         c5ad4:	e3a02000 	mov	r2, #0	; 0x0
         c5ad8:	eb68bffd 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
         c5adc:	e58d00a4 	str	r0, [sp, #164]
         c5ae0:	e59d00a4 	ldr	r0, [sp, #164]
         c5ae4:	e1300006 	teq	r0, r6
         c5ae8:	1a000002 	bne	c5af8 <TFlashStore::SetObjectSize(unsigned long, long)+0x260>
         c5aec:	e1a0000d 	mov	r0, sp
         c5af0:	eb68c409 	bl	1af6b1c <TObjRef::$Delete(void)>
         c5af4:	eaffffdc 	b	c5a6c <TFlashStore::SetObjectSize(unsigned long, long)+0x1d4>
         c5af8:	e59d00a4 	ldr	r0, [sp, #164]
         c5afc:	e3300000 	teq	r0, #0	; 0x0
         c5b00:	1a00009d 	bne	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5b04:	e28d001c 	add	r0, sp, #28	; 0x1c
         c5b08:	eb68c403 	bl	1af6b1c <TObjRef::$Delete(void)>
         c5b0c:	e58d00a4 	str	r0, [sp, #164]
         c5b10:	e3300000 	teq	r0, #0	; 0x0
         c5b14:	1a000098 	bne	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5b18:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c5b1c:	e3300000 	teq	r0, #0	; 0x0
         c5b20:	03a0100a 	moveq	r1, #10	; 0xa
         c5b24:	13a01003 	movne	r1, #3	; 0x3
         c5b28:	e1a0000d 	mov	r0, sp
         c5b2c:	eb690203 	bl	1b06340 <TObjRef::$SetState(int)>
         c5b30:	e58d00a4 	str	r0, [sp, #164]
         c5b34:	e3300000 	teq	r0, #0	; 0x0
         c5b38:	1a00008f 	bne	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5b3c:	e3380000 	teq	r8, #0	; 0x0
         c5b40:	15940084 	ldrne	r0, [r4, #132]	; fField132
         c5b44:	15901010 	ldrne	r1, [r0, #16]	; fField16
         c5b48:	13310000 	teqne	r1, #0	; 0x0
         c5b4c:	0a000087 	beq	c5d70 <TFlashStore::SetObjectSize(unsigned long, long)+0x4d8>
         c5b50:	e2411001 	sub	r1, r1, #1	; 0x1
         c5b54:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c5b58:	ea000084 	b	c5d70 <TFlashStore::SetObjectSize(unsigned long, long)+0x4d8>
         c5b5c:	e3380000 	teq	r8, #0	; 0x0
         c5b60:	0a000006 	beq	c5b80 <TFlashStore::SetObjectSize(unsigned long, long)+0x2e8>
         c5b64:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c5b68:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c5b6c:	e2811001 	add	r1, r1, #1	; 0x1
         c5b70:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c5b74:	e1a01005 	mov	r1, r5
         c5b78:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c5b7c:	eb68af52 	bl	1af18cc <TFlashTracker::$Add(unsigned long)>
         c5b80:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c5b84:	e1a00e80 	mov	r0, r0, lsl #29
         c5b88:	e1390f20 	teq	r9, r0, lsr #30
         c5b8c:	13a00000 	movne	r0, #0	; 0x0
         c5b90:	03a00001 	moveq	r0, #1	; 0x1
         c5b94:	e20030ff 	and	r3, r0, #255	; 0xff
         c5b98:	e92d0008 	stmdb	sp!, {r3}
         c5b9c:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c5ba0:	e3300000 	teq	r0, #0	; 0x0
         c5ba4:	03a01008 	moveq	r1, #8	; 0x8
         c5ba8:	13a01001 	movne	r1, #1	; 0x1
         c5bac:	e28d3004 	add	r3, sp, #4	; 0x4
         c5bb0:	e1a02007 	mov	r2, r7
         c5bb4:	e28d0020 	add	r0, sp, #32	; 0x20
         c5bb8:	eb020ac1 	bl	1486c4 <TObjRef::CloneEmpty(int, unsigned long, TObjRef &, unsigned char)>
         c5bbc:	e28dd004 	add	sp, sp, #4	; 0x4
         c5bc0:	e58d00a4 	str	r0, [sp, #164]
         c5bc4:	e3300000 	teq	r0, #0	; 0x0
         c5bc8:	1a000009 	bne	c5bf4 <TFlashStore::SetObjectSize(unsigned long, long)+0x35c>
         c5bcc:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c5bd0:	e1a00820 	mov	r0, r0, lsr #16
         c5bd4:	e1500007 	cmp	r0, r7
         c5bd8:	21a03007 	movcs	r3, r7
         c5bdc:	31a03000 	movcc	r3, r0
         c5be0:	e1a0100d 	mov	r1, sp
         c5be4:	e28d001c 	add	r0, sp, #28	; 0x1c
         c5be8:	e3a02000 	mov	r2, #0	; 0x0
         c5bec:	eb68bfb8 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
         c5bf0:	e58d00a4 	str	r0, [sp, #164]
         c5bf4:	e59d00a4 	ldr	r0, [sp, #164]
         c5bf8:	e1300006 	teq	r0, r6
         c5bfc:	1a000002 	bne	c5c0c <TFlashStore::SetObjectSize(unsigned long, long)+0x374>
         c5c00:	e1a0000d 	mov	r0, sp
         c5c04:	eb68c3c4 	bl	1af6b1c <TObjRef::$Delete(void)>
         c5c08:	eaffffdc 	b	c5b80 <TFlashStore::SetObjectSize(unsigned long, long)+0x2e8>
         c5c0c:	e59d00a4 	ldr	r0, [sp, #164]
         c5c10:	e3300000 	teq	r0, #0	; 0x0
         c5c14:	1a000058 	bne	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5c18:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c5c1c:	e3300000 	teq	r0, #0	; 0x0
         c5c20:	03a0100c 	moveq	r1, #12	; 0xc
         c5c24:	13a01005 	movne	r1, #5	; 0x5
         c5c28:	e28d001c 	add	r0, sp, #28	; 0x1c
         c5c2c:	eb6901c3 	bl	1b06340 <TObjRef::$SetState(int)>
         c5c30:	e58d00a4 	str	r0, [sp, #164]
         c5c34:	e3300000 	teq	r0, #0	; 0x0
         c5c38:	1a00004f 	bne	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5c3c:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c5c40:	e3300000 	teq	r0, #0	; 0x0
         c5c44:	03a0100d 	moveq	r1, #13	; 0xd
         c5c48:	13a01006 	movne	r1, #6	; 0x6
         c5c4c:	e1a0000d 	mov	r0, sp
         c5c50:	eb6901ba 	bl	1b06340 <TObjRef::$SetState(int)>
         c5c54:	e58d00a4 	str	r0, [sp, #164]
         c5c58:	e3300000 	teq	r0, #0	; 0x0
         c5c5c:	1a000046 	bne	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5c60:	e3380000 	teq	r8, #0	; 0x0
         c5c64:	15940084 	ldrne	r0, [r4, #132]	; fField132
         c5c68:	15901010 	ldrne	r1, [r0, #16]	; fField16
         c5c6c:	13310000 	teqne	r1, #0	; 0x0
         c5c70:	1affffb6 	bne	c5b50 <TFlashStore::SetObjectSize(unsigned long, long)+0x2b8>
         c5c74:	ea00003d 	b	c5d70 <TFlashStore::SetObjectSize(unsigned long, long)+0x4d8>
         c5c78:	e3380000 	teq	r8, #0	; 0x0
         c5c7c:	0a000003 	beq	c5c90 <TFlashStore::SetObjectSize(unsigned long, long)+0x3f8>
         c5c80:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c5c84:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c5c88:	e2811001 	add	r1, r1, #1	; 0x1
         c5c8c:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c5c90:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c5c94:	e1a00e80 	mov	r0, r0, lsl #29
         c5c98:	e1390f20 	teq	r9, r0, lsr #30
         c5c9c:	13a00000 	movne	r0, #0	; 0x0
         c5ca0:	03a00001 	moveq	r0, #1	; 0x1
         c5ca4:	e20030ff 	and	r3, r0, #255	; 0xff
         c5ca8:	e92d0008 	stmdb	sp!, {r3}
         c5cac:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c5cb0:	e3300000 	teq	r0, #0	; 0x0
         c5cb4:	03a01008 	moveq	r1, #8	; 0x8
         c5cb8:	13a01001 	movne	r1, #1	; 0x1
         c5cbc:	e28d3004 	add	r3, sp, #4	; 0x4
         c5cc0:	e1a02007 	mov	r2, r7
         c5cc4:	e28d0020 	add	r0, sp, #32	; 0x20
         c5cc8:	eb020a7d 	bl	1486c4 <TObjRef::CloneEmpty(int, unsigned long, TObjRef &, unsigned char)>
         c5ccc:	e28dd004 	add	sp, sp, #4	; 0x4
         c5cd0:	e58d00a4 	str	r0, [sp, #164]
         c5cd4:	e3300000 	teq	r0, #0	; 0x0
         c5cd8:	1a00000e 	bne	c5d18 <TFlashStore::SetObjectSize(unsigned long, long)+0x480>
         c5cdc:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c5ce0:	e1a00820 	mov	r0, r0, lsr #16
         c5ce4:	e1500007 	cmp	r0, r7
         c5ce8:	21a03007 	movcs	r3, r7
         c5cec:	31a03000 	movcc	r3, r0
         c5cf0:	e1a0100d 	mov	r1, sp
         c5cf4:	e28d001c 	add	r0, sp, #28	; 0x1c
         c5cf8:	e3a02000 	mov	r2, #0	; 0x0
         c5cfc:	eb68bf74 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
         c5d00:	e58d00a4 	str	r0, [sp, #164]
         c5d04:	e1300006 	teq	r0, r6
         c5d08:	1a000002 	bne	c5d18 <TFlashStore::SetObjectSize(unsigned long, long)+0x480>
         c5d0c:	e1a0000d 	mov	r0, sp
         c5d10:	eb68c381 	bl	1af6b1c <TObjRef::$Delete(void)>
         c5d14:	eaffffdd 	b	c5c90 <TFlashStore::SetObjectSize(unsigned long, long)+0x3f8>
         c5d18:	e59d00a4 	ldr	r0, [sp, #164]
         c5d1c:	e3300000 	teq	r0, #0	; 0x0
         c5d20:	1a000015 	bne	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5d24:	e28d001c 	add	r0, sp, #28	; 0x1c
         c5d28:	eb68c37b 	bl	1af6b1c <TObjRef::$Delete(void)>
         c5d2c:	e58d00a4 	str	r0, [sp, #164]
         c5d30:	e3300000 	teq	r0, #0	; 0x0
         c5d34:	1a000010 	bne	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5d38:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c5d3c:	e3300000 	teq	r0, #0	; 0x0
         c5d40:	03a0100d 	moveq	r1, #13	; 0xd
         c5d44:	13a01006 	movne	r1, #6	; 0x6
         c5d48:	e1a0000d 	mov	r0, sp
         c5d4c:	eb69017b 	bl	1b06340 <TObjRef::$SetState(int)>
         c5d50:	e58d00a4 	str	r0, [sp, #164]
         c5d54:	e3300000 	teq	r0, #0	; 0x0
         c5d58:	1a000007 	bne	c5d7c <TFlashStore::SetObjectSize(unsigned long, long)+0x4e4>
         c5d5c:	e3380000 	teq	r8, #0	; 0x0
         c5d60:	15940084 	ldrne	r0, [r4, #132]	; fField132
         c5d64:	15901010 	ldrne	r1, [r0, #16]	; fField16
         c5d68:	13310000 	teqne	r1, #0	; 0x0
         c5d6c:	1affff77 	bne	c5b50 <TFlashStore::SetObjectSize(unsigned long, long)+0x2b8>
         c5d70:	e1a0100d 	mov	r1, sp
         c5d74:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c5d78:	eb68bb25 	bl	1af4a14 <TFlashStoreLookupCache::$Change(TObjRef &)>
         c5d7c:	e1a00004 	mov	r0, r4
         c5d80:	eb6909b8 	bl	1b08468 <TFlashStore::$UnlockStore(void)>
         c5d84:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         c5d88:	e1a0100d 	mov	r1, sp
         c5d8c:	eb68f50e 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c5d90:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         c5d94:	e28d101c 	add	r1, sp, #28	; 0x1c
         c5d98:	eb68f50b 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c5d9c:	e28dd038 	add	sp, sp, #56	; 0x38
         c5da0:	ea00000b 	b	c5dd4 <TFlashStore::SetObjectSize(unsigned long, long)+0x53c>
         c5da4:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c5da8:	e59f1040 	ldr	r1, [pc, #40]	; c5df0 <TFlashStore::SetObjectSize(unsigned long, long)+0x558>	; fField40
         c5dac:	e5911000 	ldr	r1, [r1]
         c5db0:	eb6c74f7 	bl	1be3194 <$Subexception>
         c5db4:	e3300000 	teq	r0, #0	; 0x0
         c5db8:	0a000003 	beq	c5dcc <TFlashStore::SetObjectSize(unsigned long, long)+0x534>
         c5dbc:	e1a00004 	mov	r0, r4
         c5dc0:	eb690dc0 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c5dc4:	e5847080 	str	r7, [r4, #128]	; fField128
         c5dc8:	e584707c 	str	r7, [r4, #124]	; fField124
         c5dcc:	e1a0000d 	mov	r0, sp
         c5dd0:	eb6c70df 	bl	1be2154 <$NextHandler>
         c5dd4:	e1a0000d 	mov	r0, sp
         c5dd8:	eb6c6cb6 	bl	1be10b8 <$ExitHandler>
         c5ddc:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c5de0:	e1a00004 	mov	r0, r4
         c5de4:	eb690db7 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c5de8:	e49d0004 	ldr	r0, [sp], #4	; fField4
         c5dec:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c5df0:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::GetObjectSize(unsigned long, long *)
 * Address: 000c5df4
 */
TFlashStore::GetObjectSize(unsigned long, long *) {
    /*
         c5df4:	e1a0c00d 	mov	ip, sp
         c5df8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c5dfc:	e24cb004 	sub	fp, ip, #4	; 0x4
         c5e00:	e1a04000 	mov	r4, r0
         c5e04:	e1a06001 	mov	r6, r1
         c5e08:	e1a05002 	mov	r5, r2
         c5e0c:	e24dd004 	sub	sp, sp, #4	; 0x4
         c5e10:	eb690daa 	bl	1b094c0 <TFlashStore::$VccOn(void)>
         c5e14:	e3a07000 	mov	r7, #0	; 0x0
         c5e18:	e52d706c 	str	r7, [sp, -#108]!	; fField108
         c5e1c:	e28d0008 	add	r0, sp, #8	; 0x8
         c5e20:	eb6bb2d3 	bl	1bb2974 <$setjmp>
         c5e24:	e3300000 	teq	r0, #0	; 0x0
         c5e28:	1a00001b 	bne	c5e9c <TFlashStore::GetObjectSize(unsigned long, long *)+0xa8>
         c5e2c:	e1a0000d 	mov	r0, sp
         c5e30:	eb6c6891 	bl	1be007c <$AddExceptionHandler>
         c5e34:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         c5e38:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c5e3c:	e59d1000 	ldr	r1, [sp]
         c5e40:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c5e44:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c5e48:	e1810000 	orr	r0, r1, r0
         c5e4c:	e58d0000 	str	r0, [sp]
         c5e50:	e58d4010 	str	r4, [sp, #16]	; fField16
         c5e54:	e1a00004 	mov	r0, r4
         c5e58:	e1a0100d 	mov	r1, sp
         c5e5c:	eb68ae97 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c5e60:	e1a0200d 	mov	r2, sp
         c5e64:	e1a01006 	mov	r1, r6
         c5e68:	e1a00004 	mov	r0, r4
         c5e6c:	e5857000 	str	r7, [r5]
         c5e70:	eb69013a 	bl	1b06360 <TFlashStore::$SetupForRead(unsigned long, TObjRef *)>
         c5e74:	e58d0088 	str	r0, [sp, #136]	; fField136
         c5e78:	e3300000 	teq	r0, #0	; 0x0
         c5e7c:	059d0004 	ldreq	r0, [sp, #4]	; fField4
         c5e80:	01a00820 	moveq	r0, r0, lsr #16
         c5e84:	05850000 	streq	r0, [r5]
         c5e88:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         c5e8c:	e1a0100d 	mov	r1, sp
         c5e90:	eb68f4cd 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c5e94:	e28dd01c 	add	sp, sp, #28	; 0x1c
         c5e98:	ea00000b 	b	c5ecc <TFlashStore::GetObjectSize(unsigned long, long *)+0xd8>
         c5e9c:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c5ea0:	e59f1040 	ldr	r1, [pc, #40]	; c5ee8 <TFlashStore::GetObjectSize(unsigned long, long *)+0xf4>	; fField40
         c5ea4:	e5911000 	ldr	r1, [r1]
         c5ea8:	eb6c74b9 	bl	1be3194 <$Subexception>
         c5eac:	e3300000 	teq	r0, #0	; 0x0
         c5eb0:	0a000003 	beq	c5ec4 <TFlashStore::GetObjectSize(unsigned long, long *)+0xd0>
         c5eb4:	e5847080 	str	r7, [r4, #128]	; fField128
         c5eb8:	e584707c 	str	r7, [r4, #124]	; fField124
         c5ebc:	e1a00004 	mov	r0, r4
         c5ec0:	eb690d7d 	bl	1b094bc <TFlashStore::$VccOff(void)>
         c5ec4:	e1a0000d 	mov	r0, sp
         c5ec8:	eb6c70a1 	bl	1be2154 <$NextHandler>
         c5ecc:	e1a0000d 	mov	r0, sp
         c5ed0:	eb6c6c78 	bl	1be10b8 <$ExitHandler>
         c5ed4:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c5ed8:	e1a00004 	mov	r0, r4
         c5edc:	eb690d76 	bl	1b094bc <TFlashStore::$VccOff(void)>
         c5ee0:	e49d0004 	ldr	r0, [sp], #4	; fField4
         c5ee4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c5ee8:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::Write(unsigned long, long, char *, long)
 * Address: 000c5eec
 */
TFlashStore::Write(unsigned long, long, char *, long) {
    /*
         c5eec:	e1a0c00d 	mov	ip, sp
         c5ef0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c5ef4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c5ef8:	e1a04000 	mov	r4, r0
         c5efc:	e1a07001 	mov	r7, r1
         c5f00:	e1a05002 	mov	r5, r2
         c5f04:	e1a06003 	mov	r6, r3
         c5f08:	e59b9004 	ldr	r9, [fp, #4]	; fField4
         c5f0c:	e24dd004 	sub	sp, sp, #4	; 0x4
         c5f10:	eb690d6f 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         c5f14:	e3a08000 	mov	r8, #0	; 0x0
         c5f18:	e52d806c 	str	r8, [sp, -#108]!	; fField108
         c5f1c:	e28d0008 	add	r0, sp, #8	; 0x8
         c5f20:	eb6bb293 	bl	1bb2974 <$setjmp>
         c5f24:	e3300000 	teq	r0, #0	; 0x0
         c5f28:	1a00023d 	bne	c6824 <TFlashStore::Write(unsigned long, long, char *, long)+0x938>
         c5f2c:	e1a0000d 	mov	r0, sp
         c5f30:	eb6c6851 	bl	1be007c <$AddExceptionHandler>
         c5f34:	e24dd054 	sub	sp, sp, #84	; 0x54
         c5f38:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c5f3c:	e59d1038 	ldr	r1, [sp, #56]	; fField56
         c5f40:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c5f44:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c5f48:	e1810000 	orr	r0, r1, r0
         c5f4c:	e58d0038 	str	r0, [sp, #56]	; fField56
         c5f50:	e58d4048 	str	r4, [sp, #72]	; fField72
         c5f54:	e1a00004 	mov	r0, r4
         c5f58:	e28d1038 	add	r1, sp, #56	; 0x38
         c5f5c:	eb68ae57 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c5f60:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c5f64:	e59d101c 	ldr	r1, [sp, #28]	; fField28
         c5f68:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c5f6c:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c5f70:	e1810000 	orr	r0, r1, r0
         c5f74:	e58d001c 	str	r0, [sp, #28]	; fField28
         c5f78:	e58d402c 	str	r4, [sp, #44]	; fField44
         c5f7c:	e1a00004 	mov	r0, r4
         c5f80:	e28d101c 	add	r1, sp, #28	; 0x1c
         c5f84:	eb68ae4d 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c5f88:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c5f8c:	e59d1000 	ldr	r1, [sp]
         c5f90:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c5f94:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c5f98:	e1810000 	orr	r0, r1, r0
         c5f9c:	e58d0000 	str	r0, [sp]
         c5fa0:	e58d4010 	str	r4, [sp, #16]	; fField16
         c5fa4:	e1a00004 	mov	r0, r4
         c5fa8:	e1a0100d 	mov	r1, sp
         c5fac:	eb68ae43 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c5fb0:	e1a00004 	mov	r0, r4
         c5fb4:	eb68e3e5 	bl	1afef50 <TFlashStore::$LockStore(void)>
         c5fb8:	e3a03001 	mov	r3, #1	; 0x1
         c5fbc:	e92d0008 	stmdb	sp!, {r3}
         c5fc0:	e28d203c 	add	r2, sp, #60	; 0x3c
         c5fc4:	e1a01007 	mov	r1, r7
         c5fc8:	e1a00004 	mov	r0, r4
         c5fcc:	eb691574 	bl	1b0b5a4 <TFlashStore::$SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)>
         c5fd0:	e28dd004 	add	sp, sp, #4	; 0x4
         c5fd4:	e0858009 	add	r8, r5, r9
         c5fd8:	e58d00c0 	str	r0, [sp, #192]
         c5fdc:	e3300000 	teq	r0, #0	; 0x0
         c5fe0:	1a000007 	bne	c6004 <TFlashStore::Write(unsigned long, long, char *, long)+0x118>
         c5fe4:	e59d003c 	ldr	r0, [sp, #60]	; fField60
         c5fe8:	e1a00820 	mov	r0, r0, lsr #16
         c5fec:	e1500005 	cmp	r0, r5
         c5ff0:	21500009 	cmpcs	r0, r9
         c5ff4:	21500008 	cmpcs	r0, r8
         c5ff8:	33a00fa6 	movcc	r0, #664	; 0x298
         c5ffc:	32400b0b 	subcc	r0, r0, #11264	; 0x2c00
         c6000:	358d00c0 	strcc	r0, [sp, #192]
         c6004:	e59d003c 	ldr	r0, [sp, #60]	; fField60
         c6008:	e2000006 	and	r0, r0, #6	; 0x6
         c600c:	e3300004 	teq	r0, #4	; 0x4
         c6010:	13a00001 	movne	r0, #1	; 0x1
         c6014:	03a00000 	moveq	r0, #0	; 0x0
         c6018:	e200a0ff 	and	sl, r0, #255	; 0xff
         c601c:	e59d00c0 	ldr	r0, [sp, #192]
         c6020:	e3300000 	teq	r0, #0	; 0x0
         c6024:	1a0001f1 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6028:	e59d103c 	ldr	r1, [sp, #60]	; fField60
         c602c:	e1a01801 	mov	r1, r1, lsl #16
         c6030:	e59d0048 	ldr	r0, [sp, #72]	; fField72
         c6034:	e590004c 	ldr	r0, [r0, #76]	; fField76
         c6038:	e0200c21 	eor	r0, r0, r1, lsr #24
         c603c:	e20000ff 	and	r0, r0, #255	; 0xff
         c6040:	e59f1048 	ldr	r1, [pc, #48]	; c6090 <TFlashStore::Write(unsigned long, long, char *, long)+0x1a4>	; fField48
         c6044:	e7d10000 	ldrb	r0, [r1, r0]
         c6048:	e350000e 	cmp	r0, #14	; 0xe
         c604c:	908ff100 	addls	pc, pc, r0, lsl #2
         c6050:	ea0001e6 	b	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6054:	ea0001e5 	b	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6058:	ea0001e4 	b	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c605c:	ea0001e3 	b	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6060:	ea00000b 	b	c6094 <TFlashStore::Write(unsigned long, long, char *, long)+0x1a8>
         c6064:	ea00000f 	b	c60a8 <TFlashStore::Write(unsigned long, long, char *, long)+0x1bc>
         c6068:	ea00005f 	b	c61ec <TFlashStore::Write(unsigned long, long, char *, long)+0x300>
         c606c:	ea000008 	b	c6094 <TFlashStore::Write(unsigned long, long, char *, long)+0x1a8>
         c6070:	ea0001de 	b	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6074:	ea0001dd 	b	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6078:	ea0001dc 	b	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c607c:	ea000067 	b	c6220 <TFlashStore::Write(unsigned long, long, char *, long)+0x334>
         c6080:	ea0000c2 	b	c6390 <TFlashStore::Write(unsigned long, long, char *, long)+0x4a4>
         c6084:	ea00011d 	b	c6500 <TFlashStore::Write(unsigned long, long, char *, long)+0x614>
         c6088:	ea00017a 	b	c6678 <TFlashStore::Write(unsigned long, long, char *, long)+0x78c>
         c608c:	ea0001d7 	b	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6090:	0037143c 	eoreqs	r1, r7, ip, lsr r4
         c6094:	e1a03009 	mov	r3, r9
         c6098:	e1a02005 	mov	r2, r5
         c609c:	e1a01006 	mov	r1, r6
         c60a0:	e28d0038 	add	r0, sp, #56	; 0x38
         c60a4:	ea00005a 	b	c6214 <TFlashStore::Write(unsigned long, long, char *, long)+0x328>
         c60a8:	e33a0000 	teq	sl, #0	; 0x0
         c60ac:	0a000006 	beq	c60cc <TFlashStore::Write(unsigned long, long, char *, long)+0x1e0>
         c60b0:	e1a01007 	mov	r1, r7
         c60b4:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c60b8:	eb68ae03 	bl	1af18cc <TFlashTracker::$Add(unsigned long)>
         c60bc:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c60c0:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c60c4:	e2811001 	add	r1, r1, #1	; 0x1
         c60c8:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c60cc:	e59d003c 	ldr	r0, [sp, #60]	; fField60
         c60d0:	e2000006 	and	r0, r0, #6	; 0x6
         c60d4:	e3300004 	teq	r0, #4	; 0x4
         c60d8:	13a00000 	movne	r0, #0	; 0x0
         c60dc:	03a00001 	moveq	r0, #1	; 0x1
         c60e0:	e20030ff 	and	r3, r0, #255	; 0xff
         c60e4:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c60e8:	e3300000 	teq	r0, #0	; 0x0
         c60ec:	03a01008 	moveq	r1, #8	; 0x8
         c60f0:	13a01001 	movne	r1, #1	; 0x1
         c60f4:	e28d201c 	add	r2, sp, #28	; 0x1c
         c60f8:	e28d0038 	add	r0, sp, #56	; 0x38
         c60fc:	eb020981 	bl	148708 <TObjRef::CloneEmpty(int, TObjRef &, unsigned char)>
         c6100:	e58d00c0 	str	r0, [sp, #192]
         c6104:	e3300000 	teq	r0, #0	; 0x0
         c6108:	1a0001b8 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c610c:	e3550000 	cmp	r5, #0	; 0x0
         c6110:	da000007 	ble	c6134 <TFlashStore::Write(unsigned long, long, char *, long)+0x248>
         c6114:	e1a03005 	mov	r3, r5
         c6118:	e28d101c 	add	r1, sp, #28	; 0x1c
         c611c:	e28d0038 	add	r0, sp, #56	; 0x38
         c6120:	e3a02000 	mov	r2, #0	; 0x0
         c6124:	eb68be6a 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
         c6128:	e58d00c0 	str	r0, [sp, #192]
         c612c:	e3300000 	teq	r0, #0	; 0x0
         c6130:	1a0001ae 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6134:	e1a03009 	mov	r3, r9
         c6138:	e1a02005 	mov	r2, r5
         c613c:	e1a01006 	mov	r1, r6
         c6140:	e28d001c 	add	r0, sp, #28	; 0x1c
         c6144:	eb6910ee 	bl	1b0a504 <TObjRef::$Write(void *, unsigned long, unsigned long)>
         c6148:	e58d00c0 	str	r0, [sp, #192]
         c614c:	e3300000 	teq	r0, #0	; 0x0
         c6150:	1a0001a6 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6154:	e59d003c 	ldr	r0, [sp, #60]	; fField60
         c6158:	e1a00820 	mov	r0, r0, lsr #16
         c615c:	e1500008 	cmp	r0, r8
         c6160:	9a000007 	bls	c6184 <TFlashStore::Write(unsigned long, long, char *, long)+0x298>
         c6164:	e0403008 	sub	r3, r0, r8
         c6168:	e1a02008 	mov	r2, r8
         c616c:	e28d101c 	add	r1, sp, #28	; 0x1c
         c6170:	e28d0038 	add	r0, sp, #56	; 0x38
         c6174:	eb68be56 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
         c6178:	e58d00c0 	str	r0, [sp, #192]
         c617c:	e3300000 	teq	r0, #0	; 0x0
         c6180:	1a00019a 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6184:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c6188:	e3300000 	teq	r0, #0	; 0x0
         c618c:	03a0100c 	moveq	r1, #12	; 0xc
         c6190:	13a01005 	movne	r1, #5	; 0x5
         c6194:	e28d0038 	add	r0, sp, #56	; 0x38
         c6198:	eb690068 	bl	1b06340 <TObjRef::$SetState(int)>
         c619c:	e58d00c0 	str	r0, [sp, #192]
         c61a0:	e3300000 	teq	r0, #0	; 0x0
         c61a4:	1a000191 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c61a8:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c61ac:	e3300000 	teq	r0, #0	; 0x0
         c61b0:	03a0100d 	moveq	r1, #13	; 0xd
         c61b4:	13a01006 	movne	r1, #6	; 0x6
         c61b8:	e28d001c 	add	r0, sp, #28	; 0x1c
         c61bc:	eb69005f 	bl	1b06340 <TObjRef::$SetState(int)>
         c61c0:	e58d00c0 	str	r0, [sp, #192]
         c61c4:	e3300000 	teq	r0, #0	; 0x0
         c61c8:	1a000188 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c61cc:	e33a0000 	teq	sl, #0	; 0x0
         c61d0:	15940084 	ldrne	r0, [r4, #132]	; fField132
         c61d4:	15901010 	ldrne	r1, [r0, #16]	; fField16
         c61d8:	13310000 	teqne	r1, #0	; 0x0
         c61dc:	1a000180 	bne	c67e4 <TFlashStore::Write(unsigned long, long, char *, long)+0x8f8>
         c61e0:	e28d101c 	add	r1, sp, #28	; 0x1c
         c61e4:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c61e8:	ea000120 	b	c6670 <TFlashStore::Write(unsigned long, long, char *, long)+0x784>
         c61ec:	e28d101c 	add	r1, sp, #28	; 0x1c
         c61f0:	e28d0038 	add	r0, sp, #56	; 0x38
         c61f4:	eb68ca86 	bl	1af8c14 <TObjRef::$FindSuperceeder(TObjRef &)>
         c61f8:	e58d00c0 	str	r0, [sp, #192]
         c61fc:	e3300000 	teq	r0, #0	; 0x0
         c6200:	1a00017a 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6204:	e1a03009 	mov	r3, r9
         c6208:	e1a02005 	mov	r2, r5
         c620c:	e1a01006 	mov	r1, r6
         c6210:	e28d001c 	add	r0, sp, #28	; 0x1c
         c6214:	eb6910ba 	bl	1b0a504 <TObjRef::$Write(void *, unsigned long, unsigned long)>
         c6218:	e58d00c0 	str	r0, [sp, #192]
         c621c:	ea000173 	b	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6220:	e59d0040 	ldr	r0, [sp, #64]	; fField64
         c6224:	e0800005 	add	r0, r0, r5
         c6228:	e2801008 	add	r1, r0, #8	; 0x8
         c622c:	e1a02009 	mov	r2, r9
         c6230:	e1a00004 	mov	r0, r4
         c6234:	eb000e5e 	bl	c9bb4 <TFlashStore::IsRangeVirgin(unsigned long, unsigned long)>
         c6238:	e3300000 	teq	r0, #0	; 0x0
         c623c:	1affff94 	bne	c6094 <TFlashStore::Write(unsigned long, long, char *, long)+0x1a8>
         c6240:	e33a0000 	teq	sl, #0	; 0x0
         c6244:	1a000001 	bne	c6250 <TFlashStore::Write(unsigned long, long, char *, long)+0x364>
         c6248:	e3a07002 	mov	r7, #2	; 0x2
         c624c:	ea000004 	b	c6264 <TFlashStore::Write(unsigned long, long, char *, long)+0x378>
         c6250:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c6254:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c6258:	e2811001 	add	r1, r1, #1	; 0x1
         c625c:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c6260:	eafffff8 	b	c6248 <TFlashStore::Write(unsigned long, long, char *, long)+0x35c>
         c6264:	e59d003c 	ldr	r0, [sp, #60]	; fField60
         c6268:	e1a00e80 	mov	r0, r0, lsl #29
         c626c:	e1370f20 	teq	r7, r0, lsr #30
         c6270:	13a00000 	movne	r0, #0	; 0x0
         c6274:	03a00001 	moveq	r0, #1	; 0x1
         c6278:	e20030ff 	and	r3, r0, #255	; 0xff
         c627c:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c6280:	e3300000 	teq	r0, #0	; 0x0
         c6284:	03a01009 	moveq	r1, #9	; 0x9
         c6288:	13a01002 	movne	r1, #2	; 0x2
         c628c:	e28d201c 	add	r2, sp, #28	; 0x1c
         c6290:	e28d0038 	add	r0, sp, #56	; 0x38
         c6294:	eb02091b 	bl	148708 <TObjRef::CloneEmpty(int, TObjRef &, unsigned char)>
         c6298:	e58d00c0 	str	r0, [sp, #192]
         c629c:	e3300000 	teq	r0, #0	; 0x0
         c62a0:	1a000023 	bne	c6334 <TFlashStore::Write(unsigned long, long, char *, long)+0x448>
         c62a4:	e3550000 	cmp	r5, #0	; 0x0
         c62a8:	da000007 	ble	c62cc <TFlashStore::Write(unsigned long, long, char *, long)+0x3e0>
         c62ac:	e1a03005 	mov	r3, r5
         c62b0:	e28d101c 	add	r1, sp, #28	; 0x1c
         c62b4:	e28d0038 	add	r0, sp, #56	; 0x38
         c62b8:	e3a02000 	mov	r2, #0	; 0x0
         c62bc:	eb68be04 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
         c62c0:	e58d00c0 	str	r0, [sp, #192]
         c62c4:	e3300000 	teq	r0, #0	; 0x0
         c62c8:	1a000005 	bne	c62e4 <TFlashStore::Write(unsigned long, long, char *, long)+0x3f8>
         c62cc:	e1a03009 	mov	r3, r9
         c62d0:	e1a02005 	mov	r2, r5
         c62d4:	e1a01006 	mov	r1, r6
         c62d8:	e28d001c 	add	r0, sp, #28	; 0x1c
         c62dc:	eb691088 	bl	1b0a504 <TObjRef::$Write(void *, unsigned long, unsigned long)>
         c62e0:	e58d00c0 	str	r0, [sp, #192]
         c62e4:	e59d00c0 	ldr	r0, [sp, #192]
         c62e8:	e3300000 	teq	r0, #0	; 0x0
         c62ec:	1a000009 	bne	c6318 <TFlashStore::Write(unsigned long, long, char *, long)+0x42c>
         c62f0:	e59d003c 	ldr	r0, [sp, #60]	; fField60
         c62f4:	e1a00820 	mov	r0, r0, lsr #16
         c62f8:	e1500008 	cmp	r0, r8
         c62fc:	9a00000c 	bls	c6334 <TFlashStore::Write(unsigned long, long, char *, long)+0x448>
         c6300:	e0403008 	sub	r3, r0, r8
         c6304:	e1a02008 	mov	r2, r8
         c6308:	e28d101c 	add	r1, sp, #28	; 0x1c
         c630c:	e28d0038 	add	r0, sp, #56	; 0x38
         c6310:	eb68bdef 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
         c6314:	e58d00c0 	str	r0, [sp, #192]
         c6318:	e59d00c0 	ldr	r0, [sp, #192]
         c631c:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c6320:	e37c0031 	cmn	ip, #49	; 0x31
         c6324:	1a000002 	bne	c6334 <TFlashStore::Write(unsigned long, long, char *, long)+0x448>
         c6328:	e28d001c 	add	r0, sp, #28	; 0x1c
         c632c:	eb68c1fa 	bl	1af6b1c <TObjRef::$Delete(void)>
         c6330:	eaffffcb 	b	c6264 <TFlashStore::Write(unsigned long, long, char *, long)+0x378>
         c6334:	e59d00c0 	ldr	r0, [sp, #192]
         c6338:	e3300000 	teq	r0, #0	; 0x0
         c633c:	1a00012b 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6340:	e28d0038 	add	r0, sp, #56	; 0x38
         c6344:	eb68c1f4 	bl	1af6b1c <TObjRef::$Delete(void)>
         c6348:	e58d00c0 	str	r0, [sp, #192]
         c634c:	e3300000 	teq	r0, #0	; 0x0
         c6350:	1a000126 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6354:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c6358:	e3300000 	teq	r0, #0	; 0x0
         c635c:	03a0100a 	moveq	r1, #10	; 0xa
         c6360:	13a01003 	movne	r1, #3	; 0x3
         c6364:	e28d001c 	add	r0, sp, #28	; 0x1c
         c6368:	eb68fff4 	bl	1b06340 <TObjRef::$SetState(int)>
         c636c:	e58d00c0 	str	r0, [sp, #192]
         c6370:	e3300000 	teq	r0, #0	; 0x0
         c6374:	1a00011d 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6378:	e33a0000 	teq	sl, #0	; 0x0
         c637c:	15940084 	ldrne	r0, [r4, #132]	; fField132
         c6380:	15901010 	ldrne	r1, [r0, #16]	; fField16
         c6384:	13310000 	teqne	r1, #0	; 0x0
         c6388:	0affff94 	beq	c61e0 <TFlashStore::Write(unsigned long, long, char *, long)+0x2f4>
         c638c:	ea000114 	b	c67e4 <TFlashStore::Write(unsigned long, long, char *, long)+0x8f8>
         c6390:	e33a0000 	teq	sl, #0	; 0x0
         c6394:	1a000001 	bne	c63a0 <TFlashStore::Write(unsigned long, long, char *, long)+0x4b4>
         c6398:	e3a07002 	mov	r7, #2	; 0x2
         c639c:	ea000007 	b	c63c0 <TFlashStore::Write(unsigned long, long, char *, long)+0x4d4>
         c63a0:	e1a01007 	mov	r1, r7
         c63a4:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c63a8:	eb68ad47 	bl	1af18cc <TFlashTracker::$Add(unsigned long)>
         c63ac:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c63b0:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c63b4:	e2811001 	add	r1, r1, #1	; 0x1
         c63b8:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c63bc:	eafffff5 	b	c6398 <TFlashStore::Write(unsigned long, long, char *, long)+0x4ac>
         c63c0:	e59d003c 	ldr	r0, [sp, #60]	; fField60
         c63c4:	e1a00e80 	mov	r0, r0, lsl #29
         c63c8:	e1370f20 	teq	r7, r0, lsr #30
         c63cc:	13a00000 	movne	r0, #0	; 0x0
         c63d0:	03a00001 	moveq	r0, #1	; 0x1
         c63d4:	e20030ff 	and	r3, r0, #255	; 0xff
         c63d8:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c63dc:	e3300000 	teq	r0, #0	; 0x0
         c63e0:	03a01008 	moveq	r1, #8	; 0x8
         c63e4:	13a01001 	movne	r1, #1	; 0x1
         c63e8:	e28d201c 	add	r2, sp, #28	; 0x1c
         c63ec:	e28d0038 	add	r0, sp, #56	; 0x38
         c63f0:	eb0208c4 	bl	148708 <TObjRef::CloneEmpty(int, TObjRef &, unsigned char)>
         c63f4:	e58d00c0 	str	r0, [sp, #192]
         c63f8:	e3300000 	teq	r0, #0	; 0x0
         c63fc:	1a000024 	bne	c6494 <TFlashStore::Write(unsigned long, long, char *, long)+0x5a8>
         c6400:	e3550000 	cmp	r5, #0	; 0x0
         c6404:	da000007 	ble	c6428 <TFlashStore::Write(unsigned long, long, char *, long)+0x53c>
         c6408:	e1a03005 	mov	r3, r5
         c640c:	e28d101c 	add	r1, sp, #28	; 0x1c
         c6410:	e28d0038 	add	r0, sp, #56	; 0x38
         c6414:	e3a02000 	mov	r2, #0	; 0x0
         c6418:	eb68bdad 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
         c641c:	e58d00c0 	str	r0, [sp, #192]
         c6420:	e3300000 	teq	r0, #0	; 0x0
         c6424:	1a000005 	bne	c6440 <TFlashStore::Write(unsigned long, long, char *, long)+0x554>
         c6428:	e1a03009 	mov	r3, r9
         c642c:	e1a02005 	mov	r2, r5
         c6430:	e1a01006 	mov	r1, r6
         c6434:	e28d001c 	add	r0, sp, #28	; 0x1c
         c6438:	eb691031 	bl	1b0a504 <TObjRef::$Write(void *, unsigned long, unsigned long)>
         c643c:	e58d00c0 	str	r0, [sp, #192]
         c6440:	e59d00c0 	ldr	r0, [sp, #192]
         c6444:	e3300000 	teq	r0, #0	; 0x0
         c6448:	1a00000a 	bne	c6478 <TFlashStore::Write(unsigned long, long, char *, long)+0x58c>
         c644c:	e59d003c 	ldr	r0, [sp, #60]	; fField60
         c6450:	e1a00820 	mov	r0, r0, lsr #16
         c6454:	e1a01000 	mov	r1, r0
         c6458:	e1500008 	cmp	r0, r8
         c645c:	9a00000c 	bls	c6494 <TFlashStore::Write(unsigned long, long, char *, long)+0x5a8>
         c6460:	e0413008 	sub	r3, r1, r8
         c6464:	e1a02008 	mov	r2, r8
         c6468:	e28d101c 	add	r1, sp, #28	; 0x1c
         c646c:	e28d0038 	add	r0, sp, #56	; 0x38
         c6470:	eb68bd97 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
         c6474:	e58d00c0 	str	r0, [sp, #192]
         c6478:	e59d00c0 	ldr	r0, [sp, #192]
         c647c:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c6480:	e37c0031 	cmn	ip, #49	; 0x31
         c6484:	1a000002 	bne	c6494 <TFlashStore::Write(unsigned long, long, char *, long)+0x5a8>
         c6488:	e28d001c 	add	r0, sp, #28	; 0x1c
         c648c:	eb68c1a2 	bl	1af6b1c <TObjRef::$Delete(void)>
         c6490:	eaffffca 	b	c63c0 <TFlashStore::Write(unsigned long, long, char *, long)+0x4d4>
         c6494:	e59d00c0 	ldr	r0, [sp, #192]
         c6498:	e3300000 	teq	r0, #0	; 0x0
         c649c:	1a0000d3 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c64a0:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c64a4:	e3300000 	teq	r0, #0	; 0x0
         c64a8:	03a0100c 	moveq	r1, #12	; 0xc
         c64ac:	13a01005 	movne	r1, #5	; 0x5
         c64b0:	e28d0038 	add	r0, sp, #56	; 0x38
         c64b4:	eb68ffa1 	bl	1b06340 <TObjRef::$SetState(int)>
         c64b8:	e58d00c0 	str	r0, [sp, #192]
         c64bc:	e3300000 	teq	r0, #0	; 0x0
         c64c0:	1a0000ca 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c64c4:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c64c8:	e3300000 	teq	r0, #0	; 0x0
         c64cc:	03a0100d 	moveq	r1, #13	; 0xd
         c64d0:	13a01006 	movne	r1, #6	; 0x6
         c64d4:	e28d001c 	add	r0, sp, #28	; 0x1c
         c64d8:	eb68ff98 	bl	1b06340 <TObjRef::$SetState(int)>
         c64dc:	e58d00c0 	str	r0, [sp, #192]
         c64e0:	e3300000 	teq	r0, #0	; 0x0
         c64e4:	1a0000c1 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c64e8:	e33a0000 	teq	sl, #0	; 0x0
         c64ec:	15940084 	ldrne	r0, [r4, #132]	; fField132
         c64f0:	15901010 	ldrne	r1, [r0, #16]	; fField16
         c64f4:	13310000 	teqne	r1, #0	; 0x0
         c64f8:	0affff38 	beq	c61e0 <TFlashStore::Write(unsigned long, long, char *, long)+0x2f4>
         c64fc:	ea0000b8 	b	c67e4 <TFlashStore::Write(unsigned long, long, char *, long)+0x8f8>
         c6500:	e28d101c 	add	r1, sp, #28	; 0x1c
         c6504:	e28d0038 	add	r0, sp, #56	; 0x38
         c6508:	eb68c9c1 	bl	1af8c14 <TObjRef::$FindSuperceeder(TObjRef &)>
         c650c:	e58d00c0 	str	r0, [sp, #192]
         c6510:	e3300000 	teq	r0, #0	; 0x0
         c6514:	1a0000b5 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6518:	e33a0000 	teq	sl, #0	; 0x0
         c651c:	1a000001 	bne	c6528 <TFlashStore::Write(unsigned long, long, char *, long)+0x63c>
         c6520:	e3a07002 	mov	r7, #2	; 0x2
         c6524:	ea000004 	b	c653c <TFlashStore::Write(unsigned long, long, char *, long)+0x650>
         c6528:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c652c:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c6530:	e2811001 	add	r1, r1, #1	; 0x1
         c6534:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c6538:	eafffff8 	b	c6520 <TFlashStore::Write(unsigned long, long, char *, long)+0x634>
         c653c:	e59d003c 	ldr	r0, [sp, #60]	; fField60
         c6540:	e1a00e80 	mov	r0, r0, lsl #29
         c6544:	e1370f20 	teq	r7, r0, lsr #30
         c6548:	13a00000 	movne	r0, #0	; 0x0
         c654c:	03a00001 	moveq	r0, #1	; 0x1
         c6550:	e20030ff 	and	r3, r0, #255	; 0xff
         c6554:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c6558:	e3300000 	teq	r0, #0	; 0x0
         c655c:	03a01008 	moveq	r1, #8	; 0x8
         c6560:	13a01001 	movne	r1, #1	; 0x1
         c6564:	e1a0200d 	mov	r2, sp
         c6568:	e28d001c 	add	r0, sp, #28	; 0x1c
         c656c:	eb020865 	bl	148708 <TObjRef::CloneEmpty(int, TObjRef &, unsigned char)>
         c6570:	e58d00c0 	str	r0, [sp, #192]
         c6574:	e3300000 	teq	r0, #0	; 0x0
         c6578:	1a000023 	bne	c660c <TFlashStore::Write(unsigned long, long, char *, long)+0x720>
         c657c:	e3550000 	cmp	r5, #0	; 0x0
         c6580:	da000007 	ble	c65a4 <TFlashStore::Write(unsigned long, long, char *, long)+0x6b8>
         c6584:	e1a03005 	mov	r3, r5
         c6588:	e1a0100d 	mov	r1, sp
         c658c:	e28d001c 	add	r0, sp, #28	; 0x1c
         c6590:	e3a02000 	mov	r2, #0	; 0x0
         c6594:	eb68bd4e 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
         c6598:	e58d00c0 	str	r0, [sp, #192]
         c659c:	e3300000 	teq	r0, #0	; 0x0
         c65a0:	1a000005 	bne	c65bc <TFlashStore::Write(unsigned long, long, char *, long)+0x6d0>
         c65a4:	e1a03009 	mov	r3, r9
         c65a8:	e1a02005 	mov	r2, r5
         c65ac:	e1a01006 	mov	r1, r6
         c65b0:	e1a0000d 	mov	r0, sp
         c65b4:	eb690fd2 	bl	1b0a504 <TObjRef::$Write(void *, unsigned long, unsigned long)>
         c65b8:	e58d00c0 	str	r0, [sp, #192]
         c65bc:	e59d00c0 	ldr	r0, [sp, #192]
         c65c0:	e3300000 	teq	r0, #0	; 0x0
         c65c4:	1a000009 	bne	c65f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x704>
         c65c8:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c65cc:	e1a00820 	mov	r0, r0, lsr #16
         c65d0:	e1500008 	cmp	r0, r8
         c65d4:	9a00000c 	bls	c660c <TFlashStore::Write(unsigned long, long, char *, long)+0x720>
         c65d8:	e0403008 	sub	r3, r0, r8
         c65dc:	e1a02008 	mov	r2, r8
         c65e0:	e1a0100d 	mov	r1, sp
         c65e4:	e28d001c 	add	r0, sp, #28	; 0x1c
         c65e8:	eb68bd39 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
         c65ec:	e58d00c0 	str	r0, [sp, #192]
         c65f0:	e59d00c0 	ldr	r0, [sp, #192]
         c65f4:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c65f8:	e37c0031 	cmn	ip, #49	; 0x31
         c65fc:	1a000002 	bne	c660c <TFlashStore::Write(unsigned long, long, char *, long)+0x720>
         c6600:	e1a0000d 	mov	r0, sp
         c6604:	eb68c144 	bl	1af6b1c <TObjRef::$Delete(void)>
         c6608:	eaffffcb 	b	c653c <TFlashStore::Write(unsigned long, long, char *, long)+0x650>
         c660c:	e59d00c0 	ldr	r0, [sp, #192]
         c6610:	e3300000 	teq	r0, #0	; 0x0
         c6614:	1a000075 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6618:	e28d001c 	add	r0, sp, #28	; 0x1c
         c661c:	eb68c13e 	bl	1af6b1c <TObjRef::$Delete(void)>
         c6620:	e58d00c0 	str	r0, [sp, #192]
         c6624:	e3300000 	teq	r0, #0	; 0x0
         c6628:	1a000070 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c662c:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c6630:	e3300000 	teq	r0, #0	; 0x0
         c6634:	03a0100d 	moveq	r1, #13	; 0xd
         c6638:	13a01006 	movne	r1, #6	; 0x6
         c663c:	e1a0000d 	mov	r0, sp
         c6640:	eb68ff3e 	bl	1b06340 <TObjRef::$SetState(int)>
         c6644:	e58d00c0 	str	r0, [sp, #192]
         c6648:	e3300000 	teq	r0, #0	; 0x0
         c664c:	1a000067 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6650:	e33a0000 	teq	sl, #0	; 0x0
         c6654:	15940084 	ldrne	r0, [r4, #132]	; fField132
         c6658:	15901010 	ldrne	r1, [r0, #16]	; fField16
         c665c:	13310000 	teqne	r1, #0	; 0x0
         c6660:	12411001 	subne	r1, r1, #1	; 0x1
         c6664:	15a01010 	strne	r1, [r0, #16]!	; fField16
         c6668:	e1a0100d 	mov	r1, sp
         c666c:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c6670:	eb68b8e7 	bl	1af4a14 <TFlashStoreLookupCache::$Change(TObjRef &)>
         c6674:	ea00005d 	b	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6678:	e59d0040 	ldr	r0, [sp, #64]	; fField64
         c667c:	e0800005 	add	r0, r0, r5
         c6680:	e2801008 	add	r1, r0, #8	; 0x8
         c6684:	e1a02009 	mov	r2, r9
         c6688:	e1a00004 	mov	r0, r4
         c668c:	eb000d48 	bl	c9bb4 <TFlashStore::IsRangeVirgin(unsigned long, unsigned long)>
         c6690:	e3300000 	teq	r0, #0	; 0x0
         c6694:	1afffe7e 	bne	c6094 <TFlashStore::Write(unsigned long, long, char *, long)+0x1a8>
         c6698:	e33a0000 	teq	sl, #0	; 0x0
         c669c:	1a000001 	bne	c66a8 <TFlashStore::Write(unsigned long, long, char *, long)+0x7bc>
         c66a0:	e3a07002 	mov	r7, #2	; 0x2
         c66a4:	ea000004 	b	c66bc <TFlashStore::Write(unsigned long, long, char *, long)+0x7d0>
         c66a8:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c66ac:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c66b0:	e2811001 	add	r1, r1, #1	; 0x1
         c66b4:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c66b8:	eafffff8 	b	c66a0 <TFlashStore::Write(unsigned long, long, char *, long)+0x7b4>
         c66bc:	e59d003c 	ldr	r0, [sp, #60]	; fField60
         c66c0:	e1a00e80 	mov	r0, r0, lsl #29
         c66c4:	e1370f20 	teq	r7, r0, lsr #30
         c66c8:	13a00000 	movne	r0, #0	; 0x0
         c66cc:	03a00001 	moveq	r0, #1	; 0x1
         c66d0:	e20030ff 	and	r3, r0, #255	; 0xff
         c66d4:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c66d8:	e3300000 	teq	r0, #0	; 0x0
         c66dc:	03a01008 	moveq	r1, #8	; 0x8
         c66e0:	13a01001 	movne	r1, #1	; 0x1
         c66e4:	e28d201c 	add	r2, sp, #28	; 0x1c
         c66e8:	e28d0038 	add	r0, sp, #56	; 0x38
         c66ec:	eb020805 	bl	148708 <TObjRef::CloneEmpty(int, TObjRef &, unsigned char)>
         c66f0:	e58d00c0 	str	r0, [sp, #192]
         c66f4:	e3300000 	teq	r0, #0	; 0x0
         c66f8:	1a000023 	bne	c678c <TFlashStore::Write(unsigned long, long, char *, long)+0x8a0>
         c66fc:	e3550000 	cmp	r5, #0	; 0x0
         c6700:	da000007 	ble	c6724 <TFlashStore::Write(unsigned long, long, char *, long)+0x838>
         c6704:	e1a03005 	mov	r3, r5
         c6708:	e28d101c 	add	r1, sp, #28	; 0x1c
         c670c:	e28d0038 	add	r0, sp, #56	; 0x38
         c6710:	e3a02000 	mov	r2, #0	; 0x0
         c6714:	eb68bcee 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
         c6718:	e58d00c0 	str	r0, [sp, #192]
         c671c:	e3300000 	teq	r0, #0	; 0x0
         c6720:	1a000005 	bne	c673c <TFlashStore::Write(unsigned long, long, char *, long)+0x850>
         c6724:	e1a03009 	mov	r3, r9
         c6728:	e1a02005 	mov	r2, r5
         c672c:	e1a01006 	mov	r1, r6
         c6730:	e28d001c 	add	r0, sp, #28	; 0x1c
         c6734:	eb690f72 	bl	1b0a504 <TObjRef::$Write(void *, unsigned long, unsigned long)>
         c6738:	e58d00c0 	str	r0, [sp, #192]
         c673c:	e59d00c0 	ldr	r0, [sp, #192]
         c6740:	e3300000 	teq	r0, #0	; 0x0
         c6744:	1a000009 	bne	c6770 <TFlashStore::Write(unsigned long, long, char *, long)+0x884>
         c6748:	e59d003c 	ldr	r0, [sp, #60]	; fField60
         c674c:	e1a00820 	mov	r0, r0, lsr #16
         c6750:	e1500008 	cmp	r0, r8
         c6754:	9a00000c 	bls	c678c <TFlashStore::Write(unsigned long, long, char *, long)+0x8a0>
         c6758:	e0403008 	sub	r3, r0, r8
         c675c:	e1a02008 	mov	r2, r8
         c6760:	e28d101c 	add	r1, sp, #28	; 0x1c
         c6764:	e28d0038 	add	r0, sp, #56	; 0x38
         c6768:	eb68bcd9 	bl	1af5ad4 <TObjRef::$CopyTo(TObjRef &, unsigned long, unsigned long)>
         c676c:	e58d00c0 	str	r0, [sp, #192]
         c6770:	e59d00c0 	ldr	r0, [sp, #192]
         c6774:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c6778:	e37c0031 	cmn	ip, #49	; 0x31
         c677c:	1a000002 	bne	c678c <TFlashStore::Write(unsigned long, long, char *, long)+0x8a0>
         c6780:	e28d001c 	add	r0, sp, #28	; 0x1c
         c6784:	eb68c0e4 	bl	1af6b1c <TObjRef::$Delete(void)>
         c6788:	eaffffcb 	b	c66bc <TFlashStore::Write(unsigned long, long, char *, long)+0x7d0>
         c678c:	e59d00c0 	ldr	r0, [sp, #192]
         c6790:	e3300000 	teq	r0, #0	; 0x0
         c6794:	1a000015 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c6798:	e28d0038 	add	r0, sp, #56	; 0x38
         c679c:	eb68c0de 	bl	1af6b1c <TObjRef::$Delete(void)>
         c67a0:	e58d00c0 	str	r0, [sp, #192]
         c67a4:	e3300000 	teq	r0, #0	; 0x0
         c67a8:	1a000010 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c67ac:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c67b0:	e3300000 	teq	r0, #0	; 0x0
         c67b4:	03a0100d 	moveq	r1, #13	; 0xd
         c67b8:	13a01006 	movne	r1, #6	; 0x6
         c67bc:	e28d001c 	add	r0, sp, #28	; 0x1c
         c67c0:	eb68fede 	bl	1b06340 <TObjRef::$SetState(int)>
         c67c4:	e58d00c0 	str	r0, [sp, #192]
         c67c8:	e3300000 	teq	r0, #0	; 0x0
         c67cc:	1a000007 	bne	c67f0 <TFlashStore::Write(unsigned long, long, char *, long)+0x904>
         c67d0:	e33a0000 	teq	sl, #0	; 0x0
         c67d4:	15940084 	ldrne	r0, [r4, #132]	; fField132
         c67d8:	15901010 	ldrne	r1, [r0, #16]	; fField16
         c67dc:	13310000 	teqne	r1, #0	; 0x0
         c67e0:	0afffe7e 	beq	c61e0 <TFlashStore::Write(unsigned long, long, char *, long)+0x2f4>
         c67e4:	e2411001 	sub	r1, r1, #1	; 0x1
         c67e8:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c67ec:	eafffe7b 	b	c61e0 <TFlashStore::Write(unsigned long, long, char *, long)+0x2f4>
         c67f0:	e1a00004 	mov	r0, r4
         c67f4:	eb69071b 	bl	1b08468 <TFlashStore::$UnlockStore(void)>
         c67f8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         c67fc:	e1a0100d 	mov	r1, sp
         c6800:	eb68f271 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c6804:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         c6808:	e28d101c 	add	r1, sp, #28	; 0x1c
         c680c:	eb68f26e 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c6810:	e59d0048 	ldr	r0, [sp, #72]	; fField72
         c6814:	e28d1038 	add	r1, sp, #56	; 0x38
         c6818:	eb68f26b 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c681c:	e28dd054 	add	sp, sp, #84	; 0x54
         c6820:	ea00000b 	b	c6854 <TFlashStore::Write(unsigned long, long, char *, long)+0x968>
         c6824:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c6828:	e59f1040 	ldr	r1, [pc, #40]	; c6870 <TFlashStore::Write(unsigned long, long, char *, long)+0x984>	; fField40
         c682c:	e5911000 	ldr	r1, [r1]
         c6830:	eb6c7257 	bl	1be3194 <$Subexception>
         c6834:	e3300000 	teq	r0, #0	; 0x0
         c6838:	0a000003 	beq	c684c <TFlashStore::Write(unsigned long, long, char *, long)+0x960>
         c683c:	e1a00004 	mov	r0, r4
         c6840:	eb690b20 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c6844:	e5848080 	str	r8, [r4, #128]	; fField128
         c6848:	e584807c 	str	r8, [r4, #124]	; fField124
         c684c:	e1a0000d 	mov	r0, sp
         c6850:	eb6c6e3f 	bl	1be2154 <$NextHandler>
         c6854:	e1a0000d 	mov	r0, sp
         c6858:	eb6c6a16 	bl	1be10b8 <$ExitHandler>
         c685c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c6860:	e1a00004 	mov	r0, r4
         c6864:	eb690b17 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c6868:	e49d0004 	ldr	r0, [sp], #4	; fField4
         c686c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         c6870:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::ReplaceObject(TObjRef &, TObjRef &, char *, long, int, int, int)
 * Address: 000c6874
 */
TFlashStore::ReplaceObject(TObjRef &, TObjRef &, char *, long, int, int, int) {
    /*
         c6874:	e1a0c00d 	mov	ip, sp
         c6878:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         c687c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c6880:	e24cb014 	sub	fp, ip, #20	; 0x14
         c6884:	e1a06000 	mov	r6, r0
         c6888:	e1a05001 	mov	r5, r1
         c688c:	e1a04002 	mov	r4, r2
         c6890:	e28ba018 	add	sl, fp, #24	; 0x18
         c6894:	e89a0500 	ldmia	sl, {r8, sl}
         c6898:	e59b9014 	ldr	r9, [fp, #20]	; fField20
         c689c:	e3a03000 	mov	r3, #0	; 0x0
         c68a0:	e92d0008 	stmdb	sp!, {r3}
         c68a4:	e5950004 	ldr	r0, [r5, #4]	; fField4
         c68a8:	e2000006 	and	r0, r0, #6	; 0x6
         c68ac:	e3300004 	teq	r0, #4	; 0x4
         c68b0:	13a00000 	movne	r0, #0	; 0x0
         c68b4:	03a00001 	moveq	r0, #1	; 0x1
         c68b8:	e20030ff 	and	r3, r0, #255	; 0xff
         c68bc:	e1a02004 	mov	r2, r4
         c68c0:	e92d000c 	stmdb	sp!, {r2, r3}
         c68c4:	e5950000 	ldr	r0, [r5]
         c68c8:	e3c0120f 	bic	r1, r0, #-268435456	; 0xf0000000
         c68cc:	e1a03009 	mov	r3, r9
         c68d0:	e1a0200a 	mov	r2, sl
         c68d4:	e1a00006 	mov	r0, r6
         c68d8:	eb690f24 	bl	1b0a570 <TFlashStore::$AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)>
         c68dc:	e28dd00c 	add	sp, sp, #12	; 0xc
         c68e0:	e1b07000 	movs	r7, r0
         c68e4:	1a000005 	bne	c6900 <TFlashStore::ReplaceObject(TObjRef &, TObjRef &, char *, long, int, int, int)+0x8c>
         c68e8:	e1a03009 	mov	r3, r9
         c68ec:	e1a00004 	mov	r0, r4
         c68f0:	e3a02000 	mov	r2, #0	; 0x0
         c68f4:	e59b1010 	ldr	r1, [fp, #16]	; fField16
         c68f8:	eb690f01 	bl	1b0a504 <TObjRef::$Write(void *, unsigned long, unsigned long)>
         c68fc:	e1a07000 	mov	r7, r0
         c6900:	e287cda5 	add	ip, r7, #10560	; 0x2940
         c6904:	e37c0031 	cmn	ip, #49	; 0x31
         c6908:	1a000002 	bne	c6918 <TFlashStore::ReplaceObject(TObjRef &, TObjRef &, char *, long, int, int, int)+0xa4>
         c690c:	e1a00004 	mov	r0, r4
         c6910:	eb68c081 	bl	1af6b1c <TObjRef::$Delete(void)>
         c6914:	eaffffe0 	b	c689c <TFlashStore::ReplaceObject(TObjRef &, TObjRef &, char *, long, int, int, int)+0x28>
         c6918:	e3370000 	teq	r7, #0	; 0x0
         c691c:	1a000010 	bne	c6964 <TFlashStore::ReplaceObject(TObjRef &, TObjRef &, char *, long, int, int, int)+0xf0>
         c6920:	e3380000 	teq	r8, #0	; 0x0
         c6924:	1a000002 	bne	c6934 <TFlashStore::ReplaceObject(TObjRef &, TObjRef &, char *, long, int, int, int)+0xc0>
         c6928:	e1a00005 	mov	r0, r5
         c692c:	eb68c07a 	bl	1af6b1c <TObjRef::$Delete(void)>
         c6930:	ea000002 	b	c6940 <TFlashStore::ReplaceObject(TObjRef &, TObjRef &, char *, long, int, int, int)+0xcc>
         c6934:	e1a01008 	mov	r1, r8
         c6938:	e1a00005 	mov	r0, r5
         c693c:	eb68fe7f 	bl	1b06340 <TObjRef::$SetState(int)>
         c6940:	e1b07000 	movs	r7, r0
         c6944:	1a000006 	bne	c6964 <TFlashStore::ReplaceObject(TObjRef &, TObjRef &, char *, long, int, int, int)+0xf0>
         c6948:	e1a00004 	mov	r0, r4
         c694c:	e59b1020 	ldr	r1, [fp, #32]	; fField32
         c6950:	eb68fe7a 	bl	1b06340 <TObjRef::$SetState(int)>
         c6954:	e1b07000 	movs	r7, r0
         c6958:	01a01004 	moveq	r1, r4
         c695c:	05b60034 	ldreq	r0, [r6, #52]!	; fField52
         c6960:	0b68b82b 	bleq	1af4a14 <TFlashStoreLookupCache::$Change(TObjRef &)>
         c6964:	e1a00007 	mov	r0, r7
         c6968:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::ReplaceObject(unsigned long, char *, long)
 * Address: 000c696c
 */
TFlashStore::ReplaceObject(unsigned long, char *, long) {
    /*
         c696c:	e1a0c00d 	mov	ip, sp
         c6970:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         c6974:	e24cb004 	sub	fp, ip, #4	; 0x4
         c6978:	e1a04000 	mov	r4, r0
         c697c:	e1a07001 	mov	r7, r1
         c6980:	e1a06002 	mov	r6, r2
         c6984:	e1a05003 	mov	r5, r3
         c6988:	eb690ad1 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         c698c:	e3a09000 	mov	r9, #0	; 0x0
         c6990:	e52d906c 	str	r9, [sp, -#108]!	; fField108
         c6994:	e28d0008 	add	r0, sp, #8	; 0x8
         c6998:	eb6baff5 	bl	1bb2974 <$setjmp>
         c699c:	e3300000 	teq	r0, #0	; 0x0
         c69a0:	1a00007f 	bne	c6ba4 <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x238>
         c69a4:	e1a0000d 	mov	r0, sp
         c69a8:	eb6c65b3 	bl	1be007c <$AddExceptionHandler>
         c69ac:	e24dd038 	sub	sp, sp, #56	; 0x38
         c69b0:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c69b4:	e59d101c 	ldr	r1, [sp, #28]	; fField28
         c69b8:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c69bc:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c69c0:	e1810000 	orr	r0, r1, r0
         c69c4:	e58d001c 	str	r0, [sp, #28]	; fField28
         c69c8:	e58d402c 	str	r4, [sp, #44]	; fField44
         c69cc:	e1a00004 	mov	r0, r4
         c69d0:	e28d101c 	add	r1, sp, #28	; 0x1c
         c69d4:	eb68abb9 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c69d8:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c69dc:	e59d1000 	ldr	r1, [sp]
         c69e0:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c69e4:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c69e8:	e1810000 	orr	r0, r1, r0
         c69ec:	e58d0000 	str	r0, [sp]
         c69f0:	e58d4010 	str	r4, [sp, #16]	; fField16
         c69f4:	e1a00004 	mov	r0, r4
         c69f8:	e1a0100d 	mov	r1, sp
         c69fc:	eb68abaf 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c6a00:	e1a00004 	mov	r0, r4
         c6a04:	eb68e151 	bl	1afef50 <TFlashStore::$LockStore(void)>
         c6a08:	e3a03001 	mov	r3, #1	; 0x1
         c6a0c:	e92d0008 	stmdb	sp!, {r3}
         c6a10:	e28d2020 	add	r2, sp, #32	; 0x20
         c6a14:	e1a01007 	mov	r1, r7
         c6a18:	e1a00004 	mov	r0, r4
         c6a1c:	eb6912e0 	bl	1b0b5a4 <TFlashStore::$SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)>
         c6a20:	e28dd004 	add	sp, sp, #4	; 0x4
         c6a24:	e1b08000 	movs	r8, r0
         c6a28:	1a000053 	bne	c6b7c <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x210>
         c6a2c:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c6a30:	e2000006 	and	r0, r0, #6	; 0x6
         c6a34:	e3300004 	teq	r0, #4	; 0x4
         c6a38:	13a00001 	movne	r0, #1	; 0x1
         c6a3c:	03a00000 	moveq	r0, #0	; 0x0
         c6a40:	e21090ff 	ands	r9, r0, #255	; 0xff
         c6a44:	0a000003 	beq	c6a58 <TFlashStore::ReplaceObject(unsigned long, char *, long)+0xec>
         c6a48:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c6a4c:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c6a50:	e2811001 	add	r1, r1, #1	; 0x1
         c6a54:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c6a58:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c6a5c:	e1a00800 	mov	r0, r0, lsl #16
         c6a60:	e59d102c 	ldr	r1, [sp, #44]	; fField44
         c6a64:	e591104c 	ldr	r1, [r1, #76]	; fField76
         c6a68:	e0210c20 	eor	r0, r1, r0, lsr #24
         c6a6c:	e20010ff 	and	r1, r0, #255	; 0xff
         c6a70:	e59f0058 	ldr	r0, [pc, #58]	; c6ad0 <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x164>
         c6a74:	e7d00001 	ldrb	r0, [r0, r1]
         c6a78:	e2400003 	sub	r0, r0, #3	; 0x3
         c6a7c:	e350000a 	cmp	r0, #10	; 0xa
         c6a80:	908ff100 	addls	pc, pc, r0, lsl #2
         c6a84:	ea000034 	b	c6b5c <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x1f0>
         c6a88:	ea000011 	b	c6ad4 <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x168>
         c6a8c:	ea00001b 	b	c6b00 <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x194>
         c6a90:	ea000031 	b	c6b5c <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x1f0>
         c6a94:	ea000005 	b	c6ab0 <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x144>
         c6a98:	ea00002f 	b	c6b5c <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x1f0>
         c6a9c:	ea00002e 	b	c6b5c <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x1f0>
         c6aa0:	ea00002d 	b	c6b5c <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x1f0>
         c6aa4:	ea00000a 	b	c6ad4 <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x168>
         c6aa8:	ea000014 	b	c6b00 <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x194>
         c6aac:	ea00002a 	b	c6b5c <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x1f0>
         c6ab0:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c6ab4:	e3500000 	cmp	r0, #0	; 0x0
         c6ab8:	03a0300d 	moveq	r3, #13	; 0xd
         c6abc:	13a03006 	movne	r3, #6	; 0x6
         c6ac0:	e92d0008 	stmdb	sp!, {r3}
         c6ac4:	03a03008 	moveq	r3, #8	; 0x8
         c6ac8:	13a03001 	movne	r3, #1	; 0x1
         c6acc:	ea000007 	b	c6af0 <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x184>
         c6ad0:	0037143c 	eoreqs	r1, r7, ip, lsr r4
         c6ad4:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c6ad8:	e3500000 	cmp	r0, #0	; 0x0
         c6adc:	03a0300a 	moveq	r3, #10	; 0xa
         c6ae0:	13a03003 	movne	r3, #3	; 0x3
         c6ae4:	e92d0008 	stmdb	sp!, {r3}
         c6ae8:	03a03009 	moveq	r3, #9	; 0x9
         c6aec:	13a03002 	movne	r3, #2	; 0x2
         c6af0:	e3a02000 	mov	r2, #0	; 0x0
         c6af4:	e1a01005 	mov	r1, r5
         c6af8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         c6afc:	ea00000f 	b	c6b40 <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x1d4>
         c6b00:	e3390000 	teq	r9, #0	; 0x0
         c6b04:	11a01007 	movne	r1, r7
         c6b08:	15940084 	ldrne	r0, [r4, #132]	; fField132
         c6b0c:	1b68ab6e 	blne	1af18cc <TFlashTracker::$Add(unsigned long)>
         c6b10:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c6b14:	e3500000 	cmp	r0, #0	; 0x0
         c6b18:	03a0300d 	moveq	r3, #13	; 0xd
         c6b1c:	13a03006 	movne	r3, #6	; 0x6
         c6b20:	e92d0008 	stmdb	sp!, {r3}
         c6b24:	03a03008 	moveq	r3, #8	; 0x8
         c6b28:	13a03001 	movne	r3, #1	; 0x1
         c6b2c:	e92d0008 	stmdb	sp!, {r3}
         c6b30:	03a0300c 	moveq	r3, #12	; 0xc
         c6b34:	13a03005 	movne	r3, #5	; 0x5
         c6b38:	e1a02005 	mov	r2, r5
         c6b3c:	e92d000c 	stmdb	sp!, {r2, r3}
         c6b40:	e1a03006 	mov	r3, r6
         c6b44:	e28d2010 	add	r2, sp, #16	; 0x10
         c6b48:	e28d102c 	add	r1, sp, #44	; 0x2c
         c6b4c:	e1a00004 	mov	r0, r4
         c6b50:	eb690e87 	bl	1b0a574 <TFlashStore::$ReplaceObject(TObjRef &, TObjRef &, char *, long, int, int, int)>
         c6b54:	e28dd010 	add	sp, sp, #16	; 0x10
         c6b58:	e1a08000 	mov	r8, r0
         c6b5c:	e3380000 	teq	r8, #0	; 0x0
         c6b60:	1a000005 	bne	c6b7c <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x210>
         c6b64:	e3390000 	teq	r9, #0	; 0x0
         c6b68:	15940084 	ldrne	r0, [r4, #132]	; fField132
         c6b6c:	15901010 	ldrne	r1, [r0, #16]	; fField16
         c6b70:	13310000 	teqne	r1, #0	; 0x0
         c6b74:	12411001 	subne	r1, r1, #1	; 0x1
         c6b78:	15a01010 	strne	r1, [r0, #16]!	; fField16
         c6b7c:	e1a00004 	mov	r0, r4
         c6b80:	eb690638 	bl	1b08468 <TFlashStore::$UnlockStore(void)>
         c6b84:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         c6b88:	e1a0100d 	mov	r1, sp
         c6b8c:	eb68f18e 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c6b90:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         c6b94:	e28d101c 	add	r1, sp, #28	; 0x1c
         c6b98:	eb68f18b 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c6b9c:	e28dd038 	add	sp, sp, #56	; 0x38
         c6ba0:	ea00000b 	b	c6bd4 <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x268>
         c6ba4:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c6ba8:	e59f1040 	ldr	r1, [pc, #40]	; c6bf0 <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x284>	; fField40
         c6bac:	e5911000 	ldr	r1, [r1]
         c6bb0:	eb6c7177 	bl	1be3194 <$Subexception>
         c6bb4:	e3300000 	teq	r0, #0	; 0x0
         c6bb8:	0a000003 	beq	c6bcc <TFlashStore::ReplaceObject(unsigned long, char *, long)+0x260>
         c6bbc:	e1a00004 	mov	r0, r4
         c6bc0:	eb690a40 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c6bc4:	e5849080 	str	r9, [r4, #128]	; fField128
         c6bc8:	e584907c 	str	r9, [r4, #124]	; fField124
         c6bcc:	e1a0000d 	mov	r0, sp
         c6bd0:	eb6c6d5f 	bl	1be2154 <$NextHandler>
         c6bd4:	e1a0000d 	mov	r0, sp
         c6bd8:	eb6c6936 	bl	1be10b8 <$ExitHandler>
         c6bdc:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c6be0:	e1a00004 	mov	r0, r4
         c6be4:	eb690a37 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c6be8:	e1a00008 	mov	r0, r8
         c6bec:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c6bf0:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)
 * Address: 000c6bf4
 */
TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *) {
    /*
         c6bf4:	e1a0c00d 	mov	ip, sp
         c6bf8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c6bfc:	e24cb004 	sub	fp, ip, #4	; 0x4
         c6c00:	e1a04000 	mov	r4, r0
         c6c04:	e1a09001 	mov	r9, r1
         c6c08:	e1a05002 	mov	r5, r2
         c6c0c:	e3a07000 	mov	r7, #0	; 0x0
         c6c10:	e3a06000 	mov	r6, #0	; 0x0
         c6c14:	e59b000c 	ldr	r0, [fp, #12]
         c6c18:	e99b0102 	ldmib	fp, {r1, r8}
         c6c1c:	e52d6004 	str	r6, [sp, -#4]!	; fField4
         c6c20:	e584101c 	str	r1, [r4, #28]	; fField28
         c6c24:	e2081001 	and	r1, r8, #1	; 0x1
         c6c28:	e3310001 	teq	r1, #1	; 0x1
         c6c2c:	13a01000 	movne	r1, #0	; 0x0
         c6c30:	03a01001 	moveq	r1, #1	; 0x1
         c6c34:	e5c41015 	strb	r1, [r4, #21]	; fField21
         c6c38:	e2081010 	and	r1, r8, #16	; 0x10
         c6c3c:	e3310010 	teq	r1, #16	; 0x10
         c6c40:	13a01000 	movne	r1, #0	; 0x0
         c6c44:	03a01001 	moveq	r1, #1	; 0x1
         c6c48:	e5c41097 	strb	r1, [r4, #151]	; fField151
         c6c4c:	e5d41015 	ldrb	r1, [r4, #21]	; fField21
         c6c50:	e3e0a000 	mvn	sl, #0	; 0x0
         c6c54:	e3310000 	teq	r1, #0	; 0x0
         c6c58:	0a000005 	beq	c6c74 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x80>
         c6c5c:	e1a07000 	mov	r7, r0
         c6c60:	e3500000 	cmp	r0, #0	; 0x0
         c6c64:	03a06000 	moveq	r6, #0	; 0x0
         c6c68:	1597602c 	ldrne	r6, [r7, #44]	; fField44
         c6c6c:	15975014 	ldrne	r5, [r7, #20]	; fField20
         c6c70:	ea000003 	b	c6c84 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x90>
         c6c74:	e5d41097 	ldrb	r1, [r4, #151]	; fField151
         c6c78:	e3310000 	teq	r1, #0	; 0x0
         c6c7c:	11a06000 	movne	r6, r0
         c6c80:	1584a01c 	strne	sl, [r4, #28]	; fField28
         c6c84:	e1a00004 	mov	r0, r4
         c6c88:	eb690a0c 	bl	1b094c0 <TFlashStore::$VccOn(void)>
         c6c8c:	e3360000 	teq	r6, #0	; 0x0
         c6c90:	11a00006 	movne	r0, r6
         c6c94:	1b0afe23 	blne	386528 <TFlash::AcknowledgeReset(void)>
         c6c98:	e3a00000 	mov	r0, #0	; 0x0
         c6c9c:	e5840020 	str	r0, [r4, #32]	; fField32
         c6ca0:	e5840024 	str	r0, [r4, #36]	; fField36
         c6ca4:	e5840028 	str	r0, [r4, #40]	; fField40
         c6ca8:	e584002c 	str	r0, [r4, #44]	; fField44
         c6cac:	e5840030 	str	r0, [r4, #48]	; fField48
         c6cb0:	e5840034 	str	r0, [r4, #52]	; fField52
         c6cb4:	e5840038 	str	r0, [r4, #56]	; fField56
         c6cb8:	e5840044 	str	r0, [r4, #68]	; fField68
         c6cbc:	e5c4003c 	strb	r0, [r4, #60]	; fField60
         c6cc0:	e5840040 	str	r0, [r4, #64]	; fField64
         c6cc4:	e5840074 	str	r0, [r4, #116]	; fField116
         c6cc8:	e584007c 	str	r0, [r4, #124]	; fField124
         c6ccc:	e5840080 	str	r0, [r4, #128]	; fField128
         c6cd0:	e5c40016 	strb	r0, [r4, #22]	; fField22
         c6cd4:	e5c40017 	strb	r0, [r4, #23]	; fField23
         c6cd8:	e5c40090 	strb	r0, [r4, #144]	; fField144
         c6cdc:	e5c40092 	strb	r0, [r4, #146]	; fField146
         c6ce0:	e5c40094 	strb	r0, [r4, #148]	; fField148
         c6ce4:	e5c40096 	strb	r0, [r4, #150]	; fField150
         c6ce8:	e58400d4 	str	r0, [r4, #212]	; fField212
         c6cec:	e1a00006 	mov	r0, r6
         c6cf0:	e1b01007 	movs	r1, r7
         c6cf4:	e5846010 	str	r6, [r4, #16]	; fField16
         c6cf8:	15971028 	ldrne	r1, [r7, #40]	; fField40
         c6cfc:	e5841078 	str	r1, [r4, #120]	; fField120
         c6d00:	e5d41015 	ldrb	r1, [r4, #21]	; fField21
         c6d04:	e3310000 	teq	r1, #0	; 0x0
         c6d08:	0a00002a 	beq	c6db8 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x1c4>
         c6d0c:	e5971030 	ldr	r1, [r7, #48]	; fField48
         c6d10:	e59fc00c 	ldr	ip, [pc, #c]	; c6d24 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x130>
         c6d14:	e131000c 	teq	r1, ip
         c6d18:	0a000002 	beq	c6d28 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x134>
         c6d1c:	e3a01001 	mov	r1, #1	; 0x1
         c6d20:	ea000001 	b	c6d2c <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x138>
         c6d24:	666c7368 	strvsbt	r7, [ip], -r8, ror #6
         c6d28:	e3a01000 	mov	r1, #0	; 0x0
         c6d2c:	e5c4103d 	strb	r1, [r4, #61]	; fField61
         c6d30:	e31100ff 	tst	r1, #255	; 0xff
         c6d34:	1a000003 	bne	c6d48 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x154>
         c6d38:	eb0afe09 	bl	386564 <TFlash::GetAttributes(void)>
         c6d3c:	e3100010 	tst	r0, #16	; 0x10
         c6d40:	03a00001 	moveq	r0, #1	; 0x1
         c6d44:	0a000000 	beq	c6d4c <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x158>
         c6d48:	e3a00000 	mov	r0, #0	; 0x0
         c6d4c:	e5c4003e 	strb	r0, [r4, #62]	; fField62
         c6d50:	e2080008 	and	r0, r8, #8	; 0x8
         c6d54:	e3300008 	teq	r0, #8	; 0x8
         c6d58:	13a00000 	movne	r0, #0	; 0x0
         c6d5c:	03a00001 	moveq	r0, #1	; 0x1
         c6d60:	e5c40091 	strb	r0, [r4, #145]	; fField145
         c6d64:	e3370000 	teq	r7, #0	; 0x0
         c6d68:	0a000004 	beq	c6d80 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x18c>
         c6d6c:	e5970030 	ldr	r0, [r7, #48]	; fField48
         c6d70:	e59fc03c 	ldr	ip, [pc, #3c]	; c6db4 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x1c0>
         c6d74:	e130000c 	teq	r0, ip
         c6d78:	03a00001 	moveq	r0, #1	; 0x1
         c6d7c:	0a000000 	beq	c6d84 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x190>
         c6d80:	e3a00000 	mov	r0, #0	; 0x0
         c6d84:	e5c4003f 	strb	r0, [r4, #63]	; fField63
         c6d88:	e3a08000 	mov	r8, #0	; 0x0
         c6d8c:	e5849018 	str	r9, [r4, #24]	; fField24
         c6d90:	e5c48014 	strb	r8, [r4, #20]	; fField20
         c6d94:	e3360000 	teq	r6, #0	; 0x0
         c6d98:	e2844048 	add	r4, r4, #72	; 0x48
         c6d9c:	e8840500 	stmia	r4, {r8, sl}
         c6da0:	e2444048 	sub	r4, r4, #72	; 0x48
         c6da4:	0a000007 	beq	c6dc8 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x1d4>
         c6da8:	e1a00006 	mov	r0, r6
         c6dac:	eb0afdf8 	bl	386594 <TFlash::GetEraseRegionSize(void)>
         c6db0:	ea000009 	b	c6ddc <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x1e8>
         c6db4:	726f6d20 	rsbvc	r6, pc, #2048	; 0x800
         c6db8:	e5d41097 	ldrb	r1, [r4, #151]	; fField151
         c6dbc:	e3310000 	teq	r1, #0	; 0x0
         c6dc0:	1affffd8 	bne	c6d28 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x134>
         c6dc4:	eaffffd4 	b	c6d1c <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x128>
         c6dc8:	e5d41091 	ldrb	r1, [r4, #145]	; fField145
         c6dcc:	e59f00c0 	ldr	r0, [pc, #c0]	; c6e94 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x2a0>
         c6dd0:	e3310000 	teq	r1, #0	; 0x0
         c6dd4:	05900004 	ldreq	r0, [r0, #4]	; fField4
         c6dd8:	15900000 	ldrne	r0, [r0]
         c6ddc:	e5840050 	str	r0, [r4, #80]	; fField80
         c6de0:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c6de4:	eb68b708 	bl	1af4a0c <$CeilLog2(unsigned long)>
         c6de8:	e5840058 	str	r0, [r4, #88]	; fField88
         c6dec:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c6df0:	e2401001 	sub	r1, r0, #1	; 0x1
         c6df4:	e3a03010 	mov	r3, #16	; 0x10
         c6df8:	e584306c 	str	r3, [r4, #108]	; fField108
         c6dfc:	e1a035a0 	mov	r3, r0, lsr #11
         c6e00:	e1a02120 	mov	r2, r0, lsr #2
         c6e04:	e5842064 	str	r2, [r4, #100]	; fField100
         c6e08:	e1a02122 	mov	r2, r2, lsr #2
         c6e0c:	e3a08000 	mov	r8, #0	; 0x0
         c6e10:	e584105c 	str	r1, [r4, #92]	; fField92
         c6e14:	e5842068 	str	r2, [r4, #104]	; fField104
         c6e18:	e5843070 	str	r3, [r4, #112]	; fField112
         c6e1c:	e5848088 	str	r8, [r4, #136]	; fField136
         c6e20:	e3a02001 	mov	r2, #1	; 0x1
         c6e24:	e58420ec 	str	r2, [r4, #236]	; fField236
         c6e28:	e584808c 	str	r8, [r4, #140]	; fField140
         c6e2c:	e5d4203d 	ldrb	r2, [r4, #61]	; fField61
         c6e30:	e59f8060 	ldr	r8, [pc, #60]	; c6e98 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x2a4>	; fField60
         c6e34:	e3320000 	teq	r2, #0	; 0x0
         c6e38:	0a000058 	beq	c6fa0 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x3ac>
         c6e3c:	e5d4c091 	ldrb	ip, [r4, #145]	; fField145
         c6e40:	e59f2054 	ldr	r2, [pc, #54]	; c6e9c <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x2a8>
         c6e44:	e2823034 	add	r3, r2, #52	; 0x34
         c6e48:	e33c0000 	teq	ip, #0	; 0x0
         c6e4c:	0a000013 	beq	c6ea0 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x2ac>
         c6e50:	e3a00002 	mov	r0, #2	; 0x2
         c6e54:	e584208c 	str	r2, [r4, #140]	; fField140
         c6e58:	e5843088 	str	r3, [r4, #136]	; fField136
         c6e5c:	eb6ce88e 	bl	1c0109c <$InternalStoreInfo>
         c6e60:	e1a0a000 	mov	sl, r0
         c6e64:	e1a03000 	mov	r3, r0
         c6e68:	e92d0008 	stmdb	sp!, {r3}
         c6e6c:	e3a00003 	mov	r0, #3	; 0x3
         c6e70:	eb6ce889 	bl	1c0109c <$InternalStoreInfo>
         c6e74:	e1a03000 	mov	r3, r0
         c6e78:	e1a02005 	mov	r2, r5
         c6e7c:	e1a01009 	mov	r1, r9
         c6e80:	e5940088 	ldr	r0, [r4, #136]	; fField136
         c6e84:	eb68d3d3 	bl	1afbdd8 <TStoreDriver::$Init(char *, unsigned long, char *, unsigned long)>
         c6e88:	e28dd004 	add	sp, sp, #4	; 0x4
         c6e8c:	e085500a 	add	r5, r5, sl
         c6e90:	ea00003c 	b	c6f88 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x394>
         c6e94:	0c100dd8 	ldceq	13, cr0, [r0], -#864
         c6e98:	003712b4 	ldreqh	r1, [r7], -r4
         c6e9c:	0c106324 	ldceq	3, cr6, [r0], -#144	; fField144
         c6ea0:	e5d4c015 	ldrb	ip, [r4, #21]	; fField21
         c6ea4:	e33c0000 	teq	ip, #0	; 0x0
         c6ea8:	1a000008 	bne	c6ed0 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x2dc>
         c6eac:	e1a00003 	mov	r0, r3
         c6eb0:	e5843088 	str	r3, [r4, #136]	; fField136
         c6eb4:	e3a03000 	mov	r3, #0	; 0x0
         c6eb8:	e584208c 	str	r2, [r4, #140]	; fField140
         c6ebc:	e92d0008 	stmdb	sp!, {r3}
         c6ec0:	e1a02005 	mov	r2, r5
         c6ec4:	e1a01009 	mov	r1, r9
         c6ec8:	eb68d3c2 	bl	1afbdd8 <TStoreDriver::$Init(char *, unsigned long, char *, unsigned long)>
         c6ecc:	ea00002c 	b	c6f84 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x390>
         c6ed0:	e0802005 	add	r2, r0, r5
         c6ed4:	e2422001 	sub	r2, r2, #1	; 0x1
         c6ed8:	e1c21001 	bic	r1, r2, r1
         c6edc:	e0415000 	sub	r5, r1, r0
         c6ee0:	e5940018 	ldr	r0, [r4, #24]	; fField24
         c6ee4:	e0800005 	add	r0, r0, r5
         c6ee8:	e584008c 	str	r0, [r4, #140]	; fField140
         c6eec:	eb68dbf5 	bl	1afdec8 <SCompactState::$InProgress(void)>
         c6ef0:	e3300000 	teq	r0, #0	; 0x0
         c6ef4:	028400a4 	addeq	r0, r4, #164	; 0xa4
         c6ef8:	1594008c 	ldrne	r0, [r4, #140]	; fField140
         c6efc:	12800034 	addne	r0, r0, #52	; 0x34
         c6f00:	e24d9068 	sub	r9, sp, #104	; 0x68
         c6f04:	e3a0a000 	mov	sl, #0	; 0x0
         c6f08:	e5840088 	str	r0, [r4, #136]	; fField136
         c6f0c:	e1a00009 	mov	r0, r9
         c6f10:	e52da070 	str	sl, [sp, -#112]!	; fField112
         c6f14:	eb6bae96 	bl	1bb2974 <$setjmp>
         c6f18:	e3300000 	teq	r0, #0	; 0x0
         c6f1c:	1a00000a 	bne	c6f4c <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x358>
         c6f20:	e1a0000d 	mov	r0, sp
         c6f24:	eb6c6454 	bl	1be007c <$AddExceptionHandler>
         c6f28:	e3a03000 	mov	r3, #0	; 0x0
         c6f2c:	e92d0008 	stmdb	sp!, {r3}
         c6f30:	e1a02005 	mov	r2, r5
         c6f34:	e5940088 	ldr	r0, [r4, #136]	; fField136
         c6f38:	e5941018 	ldr	r1, [r4, #24]	; fField24
         c6f3c:	eb68d3a5 	bl	1afbdd8 <TStoreDriver::$Init(char *, unsigned long, char *, unsigned long)>
         c6f40:	e28dd004 	add	sp, sp, #4	; 0x4
         c6f44:	e5cda06c 	strb	sl, [sp, #108]	; fField108
         c6f48:	ea000008 	b	c6f70 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x37c>
         c6f4c:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c6f50:	e5981000 	ldr	r1, [r8]
         c6f54:	eb6c708e 	bl	1be3194 <$Subexception>
         c6f58:	e3300000 	teq	r0, #0	; 0x0
         c6f5c:	13a00001 	movne	r0, #1	; 0x1
         c6f60:	15cd006c 	strneb	r0, [sp, #108]	; fField108
         c6f64:	1a000001 	bne	c6f70 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x37c>
         c6f68:	e1a0000d 	mov	r0, sp
         c6f6c:	eb6c6c78 	bl	1be2154 <$NextHandler>
         c6f70:	e1a0000d 	mov	r0, sp
         c6f74:	eb6c684f 	bl	1be10b8 <$ExitHandler>
         c6f78:	e5fd006c 	ldrb	r0, [sp, #108]!	; fField108
         c6f7c:	e3300000 	teq	r0, #0	; 0x0
         c6f80:	1a00000c 	bne	c6fb8 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x3c4>
         c6f84:	e28dd004 	add	sp, sp, #4	; 0x4
         c6f88:	e594008c 	ldr	r0, [r4, #140]	; fField140
         c6f8c:	eb68dbcd 	bl	1afdec8 <SCompactState::$InProgress(void)>
         c6f90:	e3300000 	teq	r0, #0	; 0x0
         c6f94:	13a02001 	movne	r2, #1	; 0x1
         c6f98:	15c42017 	strneb	r2, [r4, #23]	; fField23
         c6f9c:	15c42092 	strneb	r2, [r4, #146]	; fField146
         c6fa0:	e3360000 	teq	r6, #0	; 0x0
         c6fa4:	0a000008 	beq	c6fcc <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x3d8>
         c6fa8:	e1a00006 	mov	r0, r6
         c6fac:	eb0afd72 	bl	38657c <TFlash::GetTotalSize(void)>
         c6fb0:	e1a01000 	mov	r1, r0
         c6fb4:	ea000005 	b	c6fd0 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x3dc>
         c6fb8:	e1a00004 	mov	r0, r4
         c6fbc:	e3a01000 	mov	r1, #0	; 0x0
         c6fc0:	eb68f8be 	bl	1b052c0 <TFlashStore::$SendAlertMgrWPBitch(int)>
         c6fc4:	e28dd004 	add	sp, sp, #4	; 0x4
         c6fc8:	eaffffcf 	b	c6f0c <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x318>
         c6fcc:	e1a01005 	mov	r1, r5
         c6fd0:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c6fd4:	eb6bae5b 	bl	1bb2948 <$__rt_udiv>
         c6fd8:	e5840054 	str	r0, [r4, #84]	; fField84
         c6fdc:	eb68b68a 	bl	1af4a0c <$CeilLog2(unsigned long)>
         c6fe0:	e260001c 	rsb	r0, r0, #28	; 0x1c
         c6fe4:	e5840060 	str	r0, [r4, #96]	; fField96
         c6fe8:	e5940054 	ldr	r0, [r4, #84]	; fField84
         c6fec:	e0800080 	add	r0, r0, r0, lsl #1
         c6ff0:	e1a00180 	mov	r0, r0, lsl #3
         c6ff4:	eb6c3edb 	bl	1bd6b68 <$malloc>
         c6ff8:	e5840024 	str	r0, [r4, #36]	; fField36
         c6ffc:	e3300000 	teq	r0, #0	; 0x0
         c7000:	0a000037 	beq	c70e4 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x4f0>
         c7004:	e3a05000 	mov	r5, #0	; 0x0
         c7008:	e5940054 	ldr	r0, [r4, #84]	; fField84
         c700c:	e3500000 	cmp	r0, #0	; 0x0
         c7010:	9a00000a 	bls	c7040 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x44c>
         c7014:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c7018:	e0020095 	mul	r2, r5, r0
         c701c:	e0851085 	add	r1, r5, r5, lsl #1
         c7020:	e5940024 	ldr	r0, [r4, #36]	; fField36
         c7024:	e0800181 	add	r0, r0, r1, lsl #3
         c7028:	e1a01004 	mov	r1, r4
         c702c:	eb68d774 	bl	1afce04 <TFlashPhysBlock::$Init(TFlashStore *, unsigned long)>
         c7030:	e2855001 	add	r5, r5, #1	; 0x1
         c7034:	e5940054 	ldr	r0, [r4, #84]	; fField84
         c7038:	e1500005 	cmp	r0, r5
         c703c:	8afffff4 	bhi	c7014 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x420>
         c7040:	e3a00010 	mov	r0, #16	; 0x10
         c7044:	eb6c1dbb 	bl	1bce738 <$__nw(unsigned int)>
         c7048:	e5840034 	str	r0, [r4, #52]	; fField52
         c704c:	e3300000 	teq	r0, #0	; 0x0
         c7050:	0a000004 	beq	c7068 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x474>
         c7054:	e3a01040 	mov	r1, #64	; 0x40
         c7058:	eb68d774 	bl	1afce30 <TFlashStoreLookupCache::$Init(unsigned long)>
         c705c:	e58d0000 	str	r0, [sp]
         c7060:	e3300000 	teq	r0, #0	; 0x0
         c7064:	1a000061 	bne	c71f0 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x5fc>
         c7068:	e5940054 	ldr	r0, [r4, #84]	; fField84
         c706c:	e1a00100 	mov	r0, r0, lsl #2
         c7070:	eb6c3ebc 	bl	1bd6b68 <$malloc>
         c7074:	e584002c 	str	r0, [r4, #44]	; fField44
         c7078:	e3300000 	teq	r0, #0	; 0x0
         c707c:	0a000018 	beq	c70e4 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x4f0>
         c7080:	e5940054 	ldr	r0, [r4, #84]	; fField84
         c7084:	e1a00280 	mov	r0, r0, lsl #5
         c7088:	eb6c6c2d 	bl	1be2144 <$NewPtrClear>
         c708c:	e5840030 	str	r0, [r4, #48]	; fField48
         c7090:	e3300000 	teq	r0, #0	; 0x0
         c7094:	0a000012 	beq	c70e4 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x4f0>
         c7098:	e3a00000 	mov	r0, #0	; 0x0
         c709c:	e5941054 	ldr	r1, [r4, #84]	; fField84
         c70a0:	e3510000 	cmp	r1, #0	; 0x0
         c70a4:	9a000007 	bls	c70c8 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x4d4>
         c70a8:	e5941030 	ldr	r1, [r4, #48]	; fField48
         c70ac:	e0812280 	add	r2, r1, r0, lsl #5
         c70b0:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c70b4:	e7812100 	str	r2, [r1, r0, lsl #2]
         c70b8:	e2800001 	add	r0, r0, #1	; 0x1
         c70bc:	e5941054 	ldr	r1, [r4, #84]	; fField84
         c70c0:	e1510000 	cmp	r1, r0
         c70c4:	8afffff7 	bhi	c70a8 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x4b4>
         c70c8:	e1a00004 	mov	r0, r4
         c70cc:	eb68d760 	bl	1afce54 <TFlashStore::$InitBlocks(void)>
         c70d0:	e3a00000 	mov	r0, #0	; 0x0
         c70d4:	eb68a1c3 	bl	1aef7e8 <TFlashTracker::$__ct(void)>
         c70d8:	e5840084 	str	r0, [r4, #132]	; fField132
         c70dc:	e3300000 	teq	r0, #0	; 0x0
         c70e0:	1a000002 	bne	c70f0 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x4fc>
         c70e4:	eb6c6c0d 	bl	1be2120 <$MemError>
         c70e8:	e58d0000 	str	r0, [sp]
         c70ec:	ea00003f 	b	c71f0 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x5fc>
         c70f0:	e3a01080 	mov	r1, #128	; 0x80
         c70f4:	eb68d33b 	bl	1afbde8 <TFlashTracker::$Init(unsigned long)>
         c70f8:	e58d0000 	str	r0, [sp]
         c70fc:	e3300000 	teq	r0, #0	; 0x0
         c7100:	1a00003a 	bne	c71f0 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x5fc>
         c7104:	e5d40092 	ldrb	r0, [r4, #146]	; fField146
         c7108:	e3300000 	teq	r0, #0	; 0x0
         c710c:	1a00002d 	bne	c71c8 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x5d4>
         c7110:	e3a0a000 	mov	sl, #0	; 0x0
         c7114:	e52da06c 	str	sl, [sp, -#108]!	; fField108
         c7118:	e28d0008 	add	r0, sp, #8	; 0x8
         c711c:	eb6bae14 	bl	1bb2974 <$setjmp>
         c7120:	e3300000 	teq	r0, #0	; 0x0
         c7124:	1a00001a 	bne	c7194 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x5a0>
         c7128:	e1a0000d 	mov	r0, sp
         c712c:	eb6c63d2 	bl	1be007c <$AddExceptionHandler>
         c7130:	e3a05001 	mov	r5, #1	; 0x1
         c7134:	e59d006c 	ldr	r0, [sp, #108]	; fField108
         c7138:	e3300000 	teq	r0, #0	; 0x0
         c713c:	1a000002 	bne	c714c <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x558>
         c7140:	e1a00004 	mov	r0, r4
         c7144:	eb68e39c 	bl	1afffbc <TFlashStore::$Mount(void)>
         c7148:	e58d006c 	str	r0, [sp, #108]	; fField108
         c714c:	e3a06089 	mov	r6, #137	; 0x89
         c7150:	e2466c2a 	sub	r6, r6, #10752	; 0x2a00
         c7154:	e59d006c 	ldr	r0, [sp, #108]	; fField108
         c7158:	e1300006 	teq	r0, r6
         c715c:	05c45090 	streqb	r5, [r4, #144]	; fField144
         c7160:	03a00000 	moveq	r0, #0	; 0x0
         c7164:	058d006c 	streq	r0, [sp, #108]	; fField108
         c7168:	0a000001 	beq	c7174 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x580>
         c716c:	e3300000 	teq	r0, #0	; 0x0
         c7170:	1a000011 	bne	c71bc <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x5c8>
         c7174:	e1a00004 	mov	r0, r4
         c7178:	e3a01000 	mov	r1, #0	; 0x0
         c717c:	eb68ebfb 	bl	1b02170 <TFlashStore::$RecoveryCheck(unsigned char)>
         c7180:	e58d006c 	str	r0, [sp, #108]	; fField108
         c7184:	e1300006 	teq	r0, r6
         c7188:	05c45090 	streqb	r5, [r4, #144]	; fField144
         c718c:	0a000005 	beq	c71a8 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x5b4>
         c7190:	ea000009 	b	c71bc <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x5c8>
         c7194:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c7198:	e5981000 	ldr	r1, [r8]
         c719c:	eb6c6ffc 	bl	1be3194 <$Subexception>
         c71a0:	e3300000 	teq	r0, #0	; 0x0
         c71a4:	0a000002 	beq	c71b4 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x5c0>
         c71a8:	e3a00000 	mov	r0, #0	; 0x0
         c71ac:	e58d006c 	str	r0, [sp, #108]	; fField108
         c71b0:	ea000001 	b	c71bc <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x5c8>
         c71b4:	e1a0000d 	mov	r0, sp
         c71b8:	eb6c6be5 	bl	1be2154 <$NextHandler>
         c71bc:	e1a0000d 	mov	r0, sp
         c71c0:	eb6c67bc 	bl	1be10b8 <$ExitHandler>
         c71c4:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c71c8:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         c71cc:	e3300000 	teq	r0, #0	; 0x0
         c71d0:	0a000006 	beq	c71f0 <TFlashStore::Init(void *, unsigned long, unsigned long, int, unsigned long, void *)+0x5fc>
         c71d4:	e3a08000 	mov	r8, #0	; 0x0
         c71d8:	e5c480e5 	strb	r8, [r4, #229]	; fField229
         c71dc:	e5b70010 	ldr	r0, [r7, #16]!	; fField16
         c71e0:	e58400d8 	str	r0, [r4, #216]	; fField216
         c71e4:	e5c480e4 	strb	r8, [r4, #228]	; fField228
         c71e8:	e594001c 	ldr	r0, [r4, #28]	; fField28
         c71ec:	e58400e8 	str	r0, [r4, #232]	; fField232
         c71f0:	e1a00004 	mov	r0, r4
         c71f4:	eb6908b0 	bl	1b094bc <TFlashStore::$VccOff(void)>
         c71f8:	e49d0004 	ldr	r0, [sp], #4	; fField4
         c71fc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::Read(unsigned long, long, char *, long)
 * Address: 000c7200
 */
TFlashStore::Read(unsigned long, long, char *, long) {
    /*
         c7200:	e1a0c00d 	mov	ip, sp
         c7204:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         c7208:	e24cb004 	sub	fp, ip, #4	; 0x4
         c720c:	e1a04000 	mov	r4, r0
         c7210:	e1a07001 	mov	r7, r1
         c7214:	e1a05002 	mov	r5, r2
         c7218:	e1a06003 	mov	r6, r3
         c721c:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         c7220:	e24dd004 	sub	sp, sp, #4	; 0x4
         c7224:	eb6908a5 	bl	1b094c0 <TFlashStore::$VccOn(void)>
         c7228:	e3a09000 	mov	r9, #0	; 0x0
         c722c:	e52d906c 	str	r9, [sp, -#108]!	; fField108
         c7230:	e28d0008 	add	r0, sp, #8	; 0x8
         c7234:	eb6badce 	bl	1bb2974 <$setjmp>
         c7238:	e3300000 	teq	r0, #0	; 0x0
         c723c:	1a000033 	bne	c7310 <TFlashStore::Read(unsigned long, long, char *, long)+0x110>
         c7240:	e1a0000d 	mov	r0, sp
         c7244:	eb6c638c 	bl	1be007c <$AddExceptionHandler>
         c7248:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         c724c:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c7250:	e59d1000 	ldr	r1, [sp]
         c7254:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c7258:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c725c:	e1810000 	orr	r0, r1, r0
         c7260:	e58d0000 	str	r0, [sp]
         c7264:	e58d4010 	str	r4, [sp, #16]	; fField16
         c7268:	e1a00004 	mov	r0, r4
         c726c:	e1a0100d 	mov	r1, sp
         c7270:	eb68a992 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c7274:	e1a0200d 	mov	r2, sp
         c7278:	e1a01007 	mov	r1, r7
         c727c:	e1a00004 	mov	r0, r4
         c7280:	eb68fc36 	bl	1b06360 <TFlashStore::$SetupForRead(unsigned long, TObjRef *)>
         c7284:	e58d0088 	str	r0, [sp, #136]	; fField136
         c7288:	e3300000 	teq	r0, #0	; 0x0
         c728c:	1a00001a 	bne	c72fc <TFlashStore::Read(unsigned long, long, char *, long)+0xfc>
         c7290:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         c7294:	e1a00820 	mov	r0, r0, lsr #16
         c7298:	e3a07fa6 	mov	r7, #664	; 0x298
         c729c:	e2477b0b 	sub	r7, r7, #11264	; 0x2c00
         c72a0:	e3550000 	cmp	r5, #0	; 0x0
         c72a4:	ba00000c 	blt	c72dc <TFlashStore::Read(unsigned long, long, char *, long)+0xdc>
         c72a8:	e1550000 	cmp	r5, r0
         c72ac:	8a00000a 	bhi	c72dc <TFlashStore::Read(unsigned long, long, char *, long)+0xdc>
         c72b0:	e0851008 	add	r1, r5, r8
         c72b4:	e1510000 	cmp	r1, r0
         c72b8:	9a000009 	bls	c72e4 <TFlashStore::Read(unsigned long, long, char *, long)+0xe4>
         c72bc:	e0403005 	sub	r3, r0, r5
         c72c0:	e1a02005 	mov	r2, r5
         c72c4:	e1a01006 	mov	r1, r6
         c72c8:	e1a0000d 	mov	r0, sp
         c72cc:	eb68eb9c 	bl	1b02144 <TObjRef::$Read(void *, unsigned long, unsigned long)>
         c72d0:	e58d0088 	str	r0, [sp, #136]	; fField136
         c72d4:	e3300000 	teq	r0, #0	; 0x0
         c72d8:	1a000007 	bne	c72fc <TFlashStore::Read(unsigned long, long, char *, long)+0xfc>
         c72dc:	e58d7088 	str	r7, [sp, #136]	; fField136
         c72e0:	ea000005 	b	c72fc <TFlashStore::Read(unsigned long, long, char *, long)+0xfc>
         c72e4:	e1a03008 	mov	r3, r8
         c72e8:	e1a02005 	mov	r2, r5
         c72ec:	e1a01006 	mov	r1, r6
         c72f0:	e1a0000d 	mov	r0, sp
         c72f4:	eb68eb92 	bl	1b02144 <TObjRef::$Read(void *, unsigned long, unsigned long)>
         c72f8:	e58d0088 	str	r0, [sp, #136]	; fField136
         c72fc:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         c7300:	e1a0100d 	mov	r1, sp
         c7304:	eb68efb0 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c7308:	e28dd01c 	add	sp, sp, #28	; 0x1c
         c730c:	ea00000b 	b	c7340 <TFlashStore::Read(unsigned long, long, char *, long)+0x140>
         c7310:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c7314:	e59f1040 	ldr	r1, [pc, #40]	; c735c <TFlashStore::Read(unsigned long, long, char *, long)+0x15c>	; fField40
         c7318:	e5911000 	ldr	r1, [r1]
         c731c:	eb6c6f9c 	bl	1be3194 <$Subexception>
         c7320:	e3300000 	teq	r0, #0	; 0x0
         c7324:	0a000003 	beq	c7338 <TFlashStore::Read(unsigned long, long, char *, long)+0x138>
         c7328:	e1a00004 	mov	r0, r4
         c732c:	eb690862 	bl	1b094bc <TFlashStore::$VccOff(void)>
         c7330:	e5849080 	str	r9, [r4, #128]	; fField128
         c7334:	e584907c 	str	r9, [r4, #124]	; fField124
         c7338:	e1a0000d 	mov	r0, sp
         c733c:	eb6c6b84 	bl	1be2154 <$NextHandler>
         c7340:	e1a0000d 	mov	r0, sp
         c7344:	eb6c675b 	bl	1be10b8 <$ExitHandler>
         c7348:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c734c:	e1a00004 	mov	r0, r4
         c7350:	eb690859 	bl	1b094bc <TFlashStore::$VccOff(void)>
         c7354:	e49d0004 	ldr	r0, [sp], #4	; fField4
         c7358:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c735c:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::IsSameStore(void *, unsigned long)
 * Address: 000c7360
 */
TFlashStore::IsSameStore(void *, unsigned long) {
    /*
         c7360:	e1a0c00d 	mov	ip, sp
         c7364:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         c7368:	e24cb004 	sub	fp, ip, #4	; 0x4
         c736c:	e1a04000 	mov	r4, r0
         c7370:	e1a05001 	mov	r5, r1
         c7374:	e3a00001 	mov	r0, #1	; 0x1
         c7378:	e56d0004 	strb	r0, [sp, -#4]!	; fField4
         c737c:	e1a00004 	mov	r0, r4
         c7380:	eb69084e 	bl	1b094c0 <TFlashStore::$VccOn(void)>
         c7384:	e5d40094 	ldrb	r0, [r4, #148]	; fField148
         c7388:	e3300000 	teq	r0, #0	; 0x0
         c738c:	1a000035 	bne	c7468 <TFlashStore::IsSameStore(void *, unsigned long)+0x108>
         c7390:	e3a07000 	mov	r7, #0	; 0x0
         c7394:	e52d706c 	str	r7, [sp, -#108]!	; fField108
         c7398:	e28d0008 	add	r0, sp, #8	; 0x8
         c739c:	eb6bad74 	bl	1bb2974 <$setjmp>
         c73a0:	e3300000 	teq	r0, #0	; 0x0
         c73a4:	1a000023 	bne	c7438 <TFlashStore::IsSameStore(void *, unsigned long)+0xd8>
         c73a8:	e1a0000d 	mov	r0, sp
         c73ac:	eb6c6332 	bl	1be007c <$AddExceptionHandler>
         c73b0:	e3a00000 	mov	r0, #0	; 0x0
         c73b4:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         c73b8:	e59f6074 	ldr	r6, [pc, #74]	; c7434 <TFlashStore::IsSameStore(void *, unsigned long)+0xd4>
         c73bc:	e3a0808e 	mov	r8, #142	; 0x8e
         c73c0:	e2488c2a 	sub	r8, r8, #10752	; 0x2a00
         c73c4:	e1a03005 	mov	r3, r5
         c73c8:	e92d0008 	stmdb	sp!, {r3}
         c73cc:	e28d2004 	add	r2, sp, #4	; 0x4
         c73d0:	e1a00004 	mov	r0, r4
         c73d4:	e1a03006 	mov	r3, r6
         c73d8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         c73dc:	eb690c5e 	bl	1b0a55c <TFlashStore::$NextLogEntry(unsigned long, unsigned long *, unsigned long, void *)>
         c73e0:	e28dd004 	add	sp, sp, #4	; 0x4
         c73e4:	e1300008 	teq	r0, r8
         c73e8:	0a00000f 	beq	c742c <TFlashStore::IsSameStore(void *, unsigned long)+0xcc>
         c73ec:	e59d0000 	ldr	r0, [sp]
         c73f0:	e0850000 	add	r0, r5, r0
         c73f4:	e5901028 	ldr	r1, [r0, #40]	; fField40
         c73f8:	e5942058 	ldr	r2, [r4, #88]	; fField88
         c73fc:	e1a01231 	mov	r1, r1, lsr r2
         c7400:	e594202c 	ldr	r2, [r4, #44]	; fField44
         c7404:	e7921101 	ldr	r1, [r2, r1, lsl #2]
         c7408:	e3310000 	teq	r1, #0	; 0x0
         c740c:	1591101c 	ldrne	r1, [r1, #28]	; fField28
         c7410:	13310000 	teqne	r1, #0	; 0x0
         c7414:	12802034 	addne	r2, r0, #52	; 0x34
         c7418:	18920005 	ldmneia	r2, {r0, r2}
         c741c:	10220000 	eorne	r0, r2, r0
         c7420:	11310000 	teqne	r1, r0
         c7424:	0affffe6 	beq	c73c4 <TFlashStore::IsSameStore(void *, unsigned long)+0x64>
         c7428:	e5cd7070 	strb	r7, [sp, #112]	; fField112
         c742c:	e28dd004 	add	sp, sp, #4	; 0x4
         c7430:	ea000009 	b	c745c <TFlashStore::IsSameStore(void *, unsigned long)+0xfc>
         c7434:	66626c6b 	strvsbt	r6, [r2], -fp, ror #24	; fField24
         c7438:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c743c:	e59f1034 	ldr	r1, [pc, #34]	; c7478 <TFlashStore::IsSameStore(void *, unsigned long)+0x118>
         c7440:	e5911000 	ldr	r1, [r1]
         c7444:	eb6c6f52 	bl	1be3194 <$Subexception>
         c7448:	e3300000 	teq	r0, #0	; 0x0
         c744c:	15cd706c 	strneb	r7, [sp, #108]	; fField108
         c7450:	1a000001 	bne	c745c <TFlashStore::IsSameStore(void *, unsigned long)+0xfc>
         c7454:	e1a0000d 	mov	r0, sp
         c7458:	eb6c6b3d 	bl	1be2154 <$NextHandler>
         c745c:	e1a0000d 	mov	r0, sp
         c7460:	eb6c6714 	bl	1be10b8 <$ExitHandler>
         c7464:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c7468:	e1a00004 	mov	r0, r4
         c746c:	eb690812 	bl	1b094bc <TFlashStore::$VccOff(void)>
         c7470:	e4dd0004 	ldrb	r0, [sp], #4	; fField4
         c7474:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         c7478:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::Lookup(unsigned long, int, TObjRef &)
 * Address: 000c747c
 */
TFlashStore::Lookup(unsigned long, int, TObjRef &) {
    /*
         c747c:	e1a0c00d 	mov	ip, sp
         c7480:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c7484:	e24cb004 	sub	fp, ip, #4	; 0x4
         c7488:	e1a04000 	mov	r4, r0
         c748c:	e1a07001 	mov	r7, r1
         c7490:	e1a05002 	mov	r5, r2
         c7494:	e1a06003 	mov	r6, r3
         c7498:	e5900034 	ldr	r0, [r0, #52]	; fField52
         c749c:	eb68deb5 	bl	1afef78 <TFlashStoreLookupCache::$Lookup(unsigned long, int)>
         c74a0:	e3700001 	cmn	r0, #1	; 0x1
         c74a4:	0a000005 	beq	c74c0 <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0x44>
         c74a8:	e1a02000 	mov	r2, r0
         c74ac:	e1a00006 	mov	r0, r6
         c74b0:	e3e01000 	mvn	r1, #0	; 0x0
         c74b4:	eb68f785 	bl	1b052d0 <TObjRef::$Set(unsigned long, unsigned long)>
         c74b8:	e3a00000 	mov	r0, #0	; 0x0
         c74bc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         c74c0:	e5941060 	ldr	r1, [r4, #96]	; fField96
         c74c4:	e1a01137 	mov	r1, r7, lsr r1
         c74c8:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c74cc:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c74d0:	e1a09000 	mov	r9, r0
         c74d4:	eb68de9b 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c74d8:	e3a01092 	mov	r1, #146	; 0x92
         c74dc:	e2411c2a 	sub	r1, r1, #10752	; 0x2a00
         c74e0:	e3300000 	teq	r0, #0	; 0x0
         c74e4:	11a00001 	movne	r0, r1
         c74e8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         c74ec:	e24dd004 	sub	sp, sp, #4	; 0x4
         c74f0:	e1a0300d 	mov	r3, sp
         c74f4:	e92d0008 	stmdb	sp!, {r3}
         c74f8:	e1a03006 	mov	r3, r6
         c74fc:	e1a02005 	mov	r2, r5
         c7500:	e1a01007 	mov	r1, r7
         c7504:	e1a00009 	mov	r0, r9
         c7508:	eb68de97 	bl	1afef6c <TFlashBlock::$Lookup(unsigned long, int, TObjRef &, long *)>
         c750c:	e28dd004 	add	sp, sp, #4	; 0x4
         c7510:	e1a08000 	mov	r8, r0
         c7514:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c7518:	e37c002e 	cmn	ip, #46	; 0x2e
         c751c:	1a000016 	bne	c757c <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0x100>
         c7520:	e59d0000 	ldr	r0, [sp]
         c7524:	e3500000 	cmp	r0, #0	; 0x0
         c7528:	ba00001e 	blt	c75a8 <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0x12c>
         c752c:	e3550000 	cmp	r5, #0	; 0x0
         c7530:	da000002 	ble	c7540 <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0xc4>
         c7534:	e3350004 	teq	r5, #4	; 0x4
         c7538:	1335000b 	teqne	r5, #11	; 0xb
         c753c:	1a000019 	bne	c75a8 <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0x12c>
         c7540:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c7544:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         c7548:	e1a0a000 	mov	sl, r0
         c754c:	eb68de7d 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c7550:	e3300000 	teq	r0, #0	; 0x0
         c7554:	1a000008 	bne	c757c <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0x100>
         c7558:	e3a03000 	mov	r3, #0	; 0x0
         c755c:	e92d0008 	stmdb	sp!, {r3}
         c7560:	e1a03006 	mov	r3, r6
         c7564:	e1a02005 	mov	r2, r5
         c7568:	e1a01007 	mov	r1, r7
         c756c:	e1a0000a 	mov	r0, sl
         c7570:	eb68de7d 	bl	1afef6c <TFlashBlock::$Lookup(unsigned long, int, TObjRef &, long *)>
         c7574:	e28dd004 	add	sp, sp, #4	; 0x4
         c7578:	e1a08000 	mov	r8, r0
         c757c:	e3380000 	teq	r8, #0	; 0x0
         c7580:	1a000004 	bne	c7598 <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0x11c>
         c7584:	e1a01006 	mov	r1, r6
         c7588:	e5b40034 	ldr	r0, [r4, #52]!	; fField52
         c758c:	eb68a8d1 	bl	1af18d8 <TFlashStoreLookupCache::$Add(TObjRef &)>
         c7590:	e3a00000 	mov	r0, #0	; 0x0
         c7594:	ea00002c 	b	c764c <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0x1d0>
         c7598:	e288cda5 	add	ip, r8, #10560	; 0x2940
         c759c:	e37c002e 	cmn	ip, #46	; 0x2e
         c75a0:	11a00008 	movne	r0, r8
         c75a4:	1a000028 	bne	c764c <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0x1d0>
         c75a8:	e5999004 	ldr	r9, [r9, #4]	; fField4
         c75ac:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c75b0:	e0808009 	add	r8, r0, r9
         c75b4:	e3a0a092 	mov	sl, #146	; 0x92
         c75b8:	e24aac2a 	sub	sl, sl, #10752	; 0x2a00
         c75bc:	e1a00004 	mov	r0, r4
         c75c0:	eb68ff8b 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c75c4:	e1500008 	cmp	r0, r8
         c75c8:	9a000006 	bls	c75e8 <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0x16c>
         c75cc:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c75d0:	e1a01138 	mov	r1, r8, lsr r1
         c75d4:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c75d8:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c75dc:	eb68de59 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c75e0:	e3300000 	teq	r0, #0	; 0x0
         c75e4:	0a000000 	beq	c75ec <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0x170>
         c75e8:	e3a08000 	mov	r8, #0	; 0x0
         c75ec:	e594005c 	ldr	r0, [r4, #92]	; fField92
         c75f0:	e1e00000 	mvn	r0, r0
         c75f4:	e0001008 	and	r1, r0, r8
         c75f8:	e0000009 	and	r0, r0, r9
         c75fc:	e1310000 	teq	r1, r0
         c7600:	01a0000a 	moveq	r0, sl
         c7604:	0a000010 	beq	c764c <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0x1d0>
         c7608:	e3a03000 	mov	r3, #0	; 0x0
         c760c:	e92d0008 	stmdb	sp!, {r3}
         c7610:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c7614:	e1a01138 	mov	r1, r8, lsr r1
         c7618:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c761c:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c7620:	e1a03006 	mov	r3, r6
         c7624:	e1a02005 	mov	r2, r5
         c7628:	e1a01007 	mov	r1, r7
         c762c:	eb68de4e 	bl	1afef6c <TFlashBlock::$Lookup(unsigned long, int, TObjRef &, long *)>
         c7630:	e28dd004 	add	sp, sp, #4	; 0x4
         c7634:	e3300000 	teq	r0, #0	; 0x0
         c7638:	0affffd1 	beq	c7584 <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0x108>
         c763c:	e130000a 	teq	r0, sl
         c7640:	05940050 	ldreq	r0, [r4, #80]	; fField80
         c7644:	00808008 	addeq	r8, r0, r8
         c7648:	0affffdb 	beq	c75bc <TFlashStore::Lookup(unsigned long, int, TObjRef &)+0x140>
         c764c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::InitBlocks(void)
 * Address: 000c7650
 */
TFlashStore::InitBlocks(void) {
    /*
         c7650:	e1a0c00d 	mov	ip, sp
         c7654:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c7658:	e24cb004 	sub	fp, ip, #4	; 0x4
         c765c:	e1a04000 	mov	r4, r0
         c7660:	e3a05000 	mov	r5, #0	; 0x0
         c7664:	e5900054 	ldr	r0, [r0, #84]	; fField84
         c7668:	e3500000 	cmp	r0, #0	; 0x0
         c766c:	991ba830 	ldmlsdb	fp, {r4, r5, fp, sp, pc}
         c7670:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c7674:	e0020095 	mul	r2, r5, r0
         c7678:	e0851085 	add	r1, r5, r5, lsl #1
         c767c:	e5940024 	ldr	r0, [r4, #36]	; fField36
         c7680:	e0800181 	add	r0, r0, r1, lsl #3
         c7684:	e1a01004 	mov	r1, r4
         c7688:	eb68d5dd 	bl	1afce04 <TFlashPhysBlock::$Init(TFlashStore *, unsigned long)>
         c768c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c7690:	e7900105 	ldr	r0, [r0, r5, lsl #2]
         c7694:	e1a01004 	mov	r1, r4
         c7698:	eb68d1c8 	bl	1afbdc0 <TFlashBlock::$Init(TFlashStore *)>
         c769c:	e2855001 	add	r5, r5, #1	; 0x1
         c76a0:	e5940054 	ldr	r0, [r4, #84]	; fField84
         c76a4:	e1500005 	cmp	r0, r5
         c76a8:	8afffff0 	bhi	c7670 <TFlashStore::InitBlocks(void)+0x20>
         c76ac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::Mount(void)
 * Address: 000c76b0
 */
TFlashStore::Mount(void) {
    /*
         c76b0:	e1a0c00d 	mov	ip, sp
         c76b4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c76b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c76bc:	e1a04000 	mov	r4, r0
         c76c0:	eb68d5e3 	bl	1afce54 <TFlashStore::$InitBlocks(void)>
         c76c4:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c76c8:	eb68c567 	bl	1af8c6c <TFlashStoreLookupCache::$ForgetAll(void)>
         c76cc:	e2841096 	add	r1, r4, #150	; 0x96
         c76d0:	e1a00004 	mov	r0, r4
         c76d4:	eb6934cb 	bl	1b14a08 <TFlashStore::$ScanLogForLogicalBlocks(unsigned char *)>
         c76d8:	e1b06000 	movs	r6, r0
         c76dc:	1a00002a 	bne	c778c <TFlashStore::Mount(void)+0xdc>
         c76e0:	e1a00004 	mov	r0, r4
         c76e4:	eb68f6ea 	bl	1b05294 <TFlashStore::$ScanLogForErasures(void)>
         c76e8:	e1b06000 	movs	r6, r0
         c76ec:	1a000026 	bne	c778c <TFlashStore::Mount(void)+0xdc>
         c76f0:	e1a00004 	mov	r0, r4
         c76f4:	eb6a0768 	bl	1b4949c <TFlashStore::$ScanLogForReservedBlocks(void)>
         c76f8:	e1b06000 	movs	r6, r0
         c76fc:	1a000022 	bne	c778c <TFlashStore::Mount(void)+0xdc>
         c7700:	e1a00004 	mov	r0, r4
         c7704:	eb6a0762 	bl	1b49494 <TFlashStore::$CalcAverageEraseCount(void)>
         c7708:	e3a07000 	mov	r7, #0	; 0x0
         c770c:	e3a05000 	mov	r5, #0	; 0x0
         c7710:	e1a00004 	mov	r0, r4
         c7714:	eb68ff36 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c7718:	e3500000 	cmp	r0, #0	; 0x0
         c771c:	9a000018 	bls	c7784 <TFlashStore::Mount(void)+0xd4>
         c7720:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c7724:	e1a01135 	mov	r1, r5, lsr r1
         c7728:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c772c:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c7730:	eb68de04 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c7734:	e3300000 	teq	r0, #0	; 0x0
         c7738:	13a07001 	movne	r7, #1	; 0x1
         c773c:	1a00000a 	bne	c776c <TFlashStore::Mount(void)+0xbc>
         c7740:	e3370000 	teq	r7, #0	; 0x0
         c7744:	0a000008 	beq	c776c <TFlashStore::Mount(void)+0xbc>
         c7748:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c774c:	e1a01135 	mov	r1, r5, lsr r1
         c7750:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c7754:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c7758:	eb6a074e 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
         c775c:	e3300000 	teq	r0, #0	; 0x0
         c7760:	03a06089 	moveq	r6, #137	; 0x89
         c7764:	02466c2a 	subeq	r6, r6, #10752	; 0x2a00
         c7768:	0a000005 	beq	c7784 <TFlashStore::Mount(void)+0xd4>
         c776c:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c7770:	e0805005 	add	r5, r0, r5
         c7774:	e1a00004 	mov	r0, r4
         c7778:	eb68ff1d 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c777c:	e1500005 	cmp	r0, r5
         c7780:	8affffe6 	bhi	c7720 <TFlashStore::Mount(void)+0x70>
         c7784:	e3a00001 	mov	r0, #1	; 0x1
         c7788:	e5c40014 	strb	r0, [r4, #20]	; fField20
         c778c:	e1a00006 	mov	r0, r6
         c7790:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::BlockCompacted(void)
 * Address: 000c7794
 */
TFlashStore::BlockCompacted(void) {
    /*
         c7794:	e1a0c00d 	mov	ip, sp
         c7798:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c779c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c77a0:	e1a04000 	mov	r4, r0
         c77a4:	e5900034 	ldr	r0, [r0, #52]	; fField52
         c77a8:	eb68c52f 	bl	1af8c6c <TFlashStoreLookupCache::$ForgetAll(void)>
         c77ac:	e1a00004 	mov	r0, r4
         c77b0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         c77b4:	ea6a0736 	b	1b49494 <TFlashStore::$CalcAverageEraseCount(void)>
    */
}

/**
 * Symbol: TFlashStore::ScanLogForLogicalBlocks(unsigned char *)
 * Address: 000c77b8
 */
TFlashStore::ScanLogForLogicalBlocks(unsigned char *) {
    /*
         c77b8:	e1a0c00d 	mov	ip, sp
         c77bc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         c77c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c77c4:	e1a04000 	mov	r4, r0
         c77c8:	e1a05001 	mov	r5, r1
         c77cc:	e3a00000 	mov	r0, #0	; 0x0
         c77d0:	e3a08089 	mov	r8, #137	; 0x89
         c77d4:	e2488c2a 	sub	r8, r8, #10752	; 0x2a00
         c77d8:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         c77dc:	e59f6040 	ldr	r6, [pc, #40]	; c7824 <TFlashStore::ScanLogForLogicalBlocks(unsigned char *)+0x6c>	; fField40
         c77e0:	e3a09001 	mov	r9, #1	; 0x1
         c77e4:	e3a0704c 	mov	r7, #76	; 0x4c
         c77e8:	e24dd04c 	sub	sp, sp, #76	; 0x4c
         c77ec:	e3a03000 	mov	r3, #0	; 0x0
         c77f0:	e92d0008 	stmdb	sp!, {r3}
         c77f4:	e28d2050 	add	r2, sp, #80	; 0x50
         c77f8:	e1a00004 	mov	r0, r4
         c77fc:	e1a03006 	mov	r3, r6
         c7800:	e59d1050 	ldr	r1, [sp, #80]	; fField80
         c7804:	eb690b54 	bl	1b0a55c <TFlashStore::$NextLogEntry(unsigned long, unsigned long *, unsigned long, void *)>
         c7808:	e28dd004 	add	sp, sp, #4	; 0x4
         c780c:	e3300000 	teq	r0, #0	; 0x0
         c7810:	0a000004 	beq	c7828 <TFlashStore::ScanLogForLogicalBlocks(unsigned char *)+0x70>
         c7814:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c7818:	e37c0032 	cmn	ip, #50	; 0x32
         c781c:	03a00000 	moveq	r0, #0	; 0x0
         c7820:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c7824:	66626c6b 	strvsbt	r6, [r2], -fp, ror #24	; fField24
         c7828:	e1a03007 	mov	r3, r7
         c782c:	e59d104c 	ldr	r1, [sp, #76]	; fField76
         c7830:	e1a0200d 	mov	r2, sp
         c7834:	e1a00004 	mov	r0, r4
         c7838:	eb68b05e 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c783c:	e59d1028 	ldr	r1, [sp, #40]	; fField40
         c7840:	e5940058 	ldr	r0, [r4, #88]	; fField88
         c7844:	e1a00031 	mov	r0, r1, lsr r0
         c7848:	e5941054 	ldr	r1, [r4, #84]	; fField84
         c784c:	e1500001 	cmp	r0, r1
         c7850:	21a00008 	movcs	r0, r8
         c7854:	291babf0 	ldmcsdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c7858:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c785c:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         c7860:	eb68ddbf 	bl	1afef64 <TFlashBlock::$LogEntryOffset(void)>
         c7864:	e1a01000 	mov	r1, r0
         c7868:	e59d0014 	ldr	r0, [sp, #20]	; fField20
         c786c:	e5942020 	ldr	r2, [r4, #32]	; fField32
         c7870:	e1500002 	cmp	r0, r2
         c7874:	859d0014 	ldrhi	r0, [sp, #20]	; fField20
         c7878:	85840020 	strhi	r0, [r4, #32]	; fField32
         c787c:	e5940048 	ldr	r0, [r4, #72]	; fField72
         c7880:	e2002001 	and	r2, r0, #1	; 0x1
         c7884:	e59d0040 	ldr	r0, [sp, #64]	; fField64
         c7888:	e2000001 	and	r0, r0, #1	; 0x1
         c788c:	e1320000 	teq	r2, r0
         c7890:	05c4903f 	streqb	r9, [r4, #63]	; fField63
         c7894:	e3310000 	teq	r1, #0	; 0x0
         c7898:	1a000008 	bne	c78c0 <TFlashStore::ScanLogForLogicalBlocks(unsigned char *)+0x108>
         c789c:	e59d0028 	ldr	r0, [sp, #40]	; fField40
         c78a0:	e5942058 	ldr	r2, [r4, #88]	; fField88
         c78a4:	e1a00230 	mov	r0, r0, lsr r2
         c78a8:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c78ac:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         c78b0:	e1a02005 	mov	r2, r5
         c78b4:	e1a0100d 	mov	r1, sp
         c78b8:	eb693454 	bl	1b14a10 <TFlashBlock::$SetInfo(SFlashBlockLogEntry *, unsigned char *)>
         c78bc:	ea000016 	b	c791c <TFlashStore::ScanLogForLogicalBlocks(unsigned char *)+0x164>
         c78c0:	e24dd04c 	sub	sp, sp, #76	; 0x4c
         c78c4:	e1a03007 	mov	r3, r7
         c78c8:	e1a0200d 	mov	r2, sp
         c78cc:	e1a00004 	mov	r0, r4
         c78d0:	eb68b038 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c78d4:	e59d1028 	ldr	r1, [sp, #40]	; fField40
         c78d8:	e5940058 	ldr	r0, [r4, #88]	; fField88
         c78dc:	e5942054 	ldr	r2, [r4, #84]	; fField84
         c78e0:	e1520031 	cmp	r2, r1, lsr r0
         c78e4:	91a00008 	movls	r0, r8
         c78e8:	991babf0 	ldmlsdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         c78ec:	e59d1014 	ldr	r1, [sp, #20]	; fField20
         c78f0:	e59d2060 	ldr	r2, [sp, #96]	; fField96
         c78f4:	e1520001 	cmp	r2, r1
         c78f8:	9a000006 	bls	c7918 <TFlashStore::ScanLogForLogicalBlocks(unsigned char *)+0x160>
         c78fc:	e59d1074 	ldr	r1, [sp, #116]	; fField116
         c7900:	e1a00031 	mov	r0, r1, lsr r0
         c7904:	e594202c 	ldr	r2, [r4, #44]	; fField44
         c7908:	e7920100 	ldr	r0, [r2, r0, lsl #2]
         c790c:	e28d104c 	add	r1, sp, #76	; 0x4c
         c7910:	e3a02000 	mov	r2, #0	; 0x0
         c7914:	eb69343d 	bl	1b14a10 <TFlashBlock::$SetInfo(SFlashBlockLogEntry *, unsigned char *)>
         c7918:	e28dd04c 	add	sp, sp, #76	; 0x4c
         c791c:	e28dd04c 	add	sp, sp, #76	; 0x4c
         c7920:	eaffffb0 	b	c77e8 <TFlashStore::ScanLogForLogicalBlocks(unsigned char *)+0x30>
    */
}

/**
 * Symbol: TFlashStore::ScanLogForErasures(void)
 * Address: 000c7924
 */
TFlashStore::ScanLogForErasures(void) {
    /*
         c7924:	e1a0c00d 	mov	ip, sp
         c7928:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c792c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c7930:	e1a04000 	mov	r4, r0
         c7934:	e3a00000 	mov	r0, #0	; 0x0
         c7938:	e3a07089 	mov	r7, #137	; 0x89
         c793c:	e2477c2a 	sub	r7, r7, #10752	; 0x2a00
         c7940:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         c7944:	e59f503c 	ldr	r5, [pc, #3c]	; c7988 <TFlashStore::ScanLogForErasures(void)+0x64>
         c7948:	e3a06028 	mov	r6, #40	; 0x28
         c794c:	e24dd028 	sub	sp, sp, #40	; 0x28
         c7950:	e3a03000 	mov	r3, #0	; 0x0
         c7954:	e92d0008 	stmdb	sp!, {r3}
         c7958:	e28d202c 	add	r2, sp, #44	; 0x2c
         c795c:	e1a00004 	mov	r0, r4
         c7960:	e1a03005 	mov	r3, r5
         c7964:	e59d102c 	ldr	r1, [sp, #44]	; fField44
         c7968:	eb690afb 	bl	1b0a55c <TFlashStore::$NextLogEntry(unsigned long, unsigned long *, unsigned long, void *)>
         c796c:	e28dd004 	add	sp, sp, #4	; 0x4
         c7970:	e3300000 	teq	r0, #0	; 0x0
         c7974:	0a000004 	beq	c798c <TFlashStore::ScanLogForErasures(void)+0x68>
         c7978:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c797c:	e37c0032 	cmn	ip, #50	; 0x32
         c7980:	03a00000 	moveq	r0, #0	; 0x0
         c7984:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c7988:	65626c6b 	strvsb	r6, [r2, -#3179]!
         c798c:	e1a03006 	mov	r3, r6
         c7990:	e59d1028 	ldr	r1, [sp, #40]	; fField40
         c7994:	e1a0200d 	mov	r2, sp
         c7998:	e1a00004 	mov	r0, r4
         c799c:	eb68b005 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c79a0:	e59d1018 	ldr	r1, [sp, #24]	; fField24
         c79a4:	e5940058 	ldr	r0, [r4, #88]	; fField88
         c79a8:	e5942054 	ldr	r2, [r4, #84]	; fField84
         c79ac:	e1520031 	cmp	r2, r1, lsr r0
         c79b0:	91a00007 	movls	r0, r7
         c79b4:	991ba8f0 	ldmlsdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c79b8:	e59d2014 	ldr	r2, [sp, #20]	; fField20
         c79bc:	e5941020 	ldr	r1, [r4, #32]	; fField32
         c79c0:	e1520001 	cmp	r2, r1
         c79c4:	859d1014 	ldrhi	r1, [sp, #20]	; fField20
         c79c8:	85841020 	strhi	r1, [r4, #32]	; fField32
         c79cc:	e59d1018 	ldr	r1, [sp, #24]	; fField24
         c79d0:	e1a00031 	mov	r0, r1, lsr r0
         c79d4:	e0800080 	add	r0, r0, r0, lsl #1
         c79d8:	e5942024 	ldr	r2, [r4, #36]	; fField36
         c79dc:	e0820180 	add	r0, r2, r0, lsl #3
         c79e0:	eb68dd60 	bl	1afef68 <TFlashPhysBlock::$LogEntryOffset(void)>
         c79e4:	e3300000 	teq	r0, #0	; 0x0
         c79e8:	1a000008 	bne	c7a10 <TFlashStore::ScanLogForErasures(void)+0xec>
         c79ec:	e59d0018 	ldr	r0, [sp, #24]	; fField24
         c79f0:	e5942058 	ldr	r2, [r4, #88]	; fField88
         c79f4:	e1a00230 	mov	r0, r0, lsr r2
         c79f8:	e0800080 	add	r0, r0, r0, lsl #1
         c79fc:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c7a00:	e0810180 	add	r0, r1, r0, lsl #3
         c7a04:	e1a0100d 	mov	r1, sp
         c7a08:	eb68fa40 	bl	1b06310 <TFlashPhysBlock::$SetInfo(SFlashEraseLogEntry *)>
         c7a0c:	ea00001f 	b	c7a90 <TFlashStore::ScanLogForErasures(void)+0x16c>
         c7a10:	e24dd028 	sub	sp, sp, #40	; 0x28
         c7a14:	e59d0040 	ldr	r0, [sp, #64]	; fField64
         c7a18:	e5942058 	ldr	r2, [r4, #88]	; fField88
         c7a1c:	e1a00230 	mov	r0, r0, lsr r2
         c7a20:	e0800080 	add	r0, r0, r0, lsl #1
         c7a24:	e5941024 	ldr	r1, [r4, #36]	; fField36
         c7a28:	e0810180 	add	r0, r1, r0, lsl #3
         c7a2c:	eb68dd4d 	bl	1afef68 <TFlashPhysBlock::$LogEntryOffset(void)>
         c7a30:	e1a01000 	mov	r1, r0
         c7a34:	e1a03006 	mov	r3, r6
         c7a38:	e1a0200d 	mov	r2, sp
         c7a3c:	e1a00004 	mov	r0, r4
         c7a40:	eb68afdc 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c7a44:	e59d1018 	ldr	r1, [sp, #24]	; fField24
         c7a48:	e5940058 	ldr	r0, [r4, #88]	; fField88
         c7a4c:	e1a02031 	mov	r2, r1, lsr r0
         c7a50:	e5941054 	ldr	r1, [r4, #84]	; fField84
         c7a54:	e1520001 	cmp	r2, r1
         c7a58:	21a00007 	movcs	r0, r7
         c7a5c:	291ba8f0 	ldmcsdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c7a60:	e59d103c 	ldr	r1, [sp, #60]	; fField60
         c7a64:	e59d2014 	ldr	r2, [sp, #20]	; fField20
         c7a68:	e1510002 	cmp	r1, r2
         c7a6c:	9a000006 	bls	c7a8c <TFlashStore::ScanLogForErasures(void)+0x168>
         c7a70:	e59d1040 	ldr	r1, [sp, #64]	; fField64
         c7a74:	e1a00031 	mov	r0, r1, lsr r0
         c7a78:	e0800080 	add	r0, r0, r0, lsl #1
         c7a7c:	e5942024 	ldr	r2, [r4, #36]	; fField36
         c7a80:	e0820180 	add	r0, r2, r0, lsl #3
         c7a84:	e28d1028 	add	r1, sp, #40	; 0x28
         c7a88:	eb68fa20 	bl	1b06310 <TFlashPhysBlock::$SetInfo(SFlashEraseLogEntry *)>
         c7a8c:	e28dd028 	add	sp, sp, #40	; 0x28
         c7a90:	e28dd028 	add	sp, sp, #40	; 0x28
         c7a94:	eaffffac 	b	c794c <TFlashStore::ScanLogForErasures(void)+0x28>
    */
}

/**
 * Symbol: TFlashStore::ScanLogForReservedBlocks(void)
 * Address: 000c7a98
 */
TFlashStore::ScanLogForReservedBlocks(void) {
    /*
         c7a98:	e1a0c00d 	mov	ip, sp
         c7a9c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c7aa0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c7aa4:	e1a04000 	mov	r4, r0
         c7aa8:	e3a00000 	mov	r0, #0	; 0x0
         c7aac:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         c7ab0:	e59f503c 	ldr	r5, [pc, #3c]	; c7af4 <TFlashStore::ScanLogForReservedBlocks(void)+0x5c>
         c7ab4:	e3a06030 	mov	r6, #48	; 0x30
         c7ab8:	e24dd030 	sub	sp, sp, #48	; 0x30
         c7abc:	e3a03000 	mov	r3, #0	; 0x0
         c7ac0:	e92d0008 	stmdb	sp!, {r3}
         c7ac4:	e28d2034 	add	r2, sp, #52	; 0x34
         c7ac8:	e1a00004 	mov	r0, r4
         c7acc:	e1a03005 	mov	r3, r5
         c7ad0:	e59d1034 	ldr	r1, [sp, #52]	; fField52
         c7ad4:	eb690aa0 	bl	1b0a55c <TFlashStore::$NextLogEntry(unsigned long, unsigned long *, unsigned long, void *)>
         c7ad8:	e28dd004 	add	sp, sp, #4	; 0x4
         c7adc:	e3300000 	teq	r0, #0	; 0x0
         c7ae0:	0a000004 	beq	c7af8 <TFlashStore::ScanLogForReservedBlocks(void)+0x60>
         c7ae4:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c7ae8:	e37c0032 	cmn	ip, #50	; 0x32
         c7aec:	03a00000 	moveq	r0, #0	; 0x0
         c7af0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         c7af4:	7a626c6b 	bvc	1962ca8 <ROM$$Size+0x124305c>
         c7af8:	e1a03006 	mov	r3, r6
         c7afc:	e59d1030 	ldr	r1, [sp, #48]	; fField48
         c7b00:	e1a0200d 	mov	r2, sp
         c7b04:	e1a00004 	mov	r0, r4
         c7b08:	eb68afaa 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c7b0c:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         c7b10:	e5942058 	ldr	r2, [r4, #88]	; fField88
         c7b14:	e1a00230 	mov	r0, r0, lsr r2
         c7b18:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c7b1c:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         c7b20:	eb68dd0f 	bl	1afef64 <TFlashBlock::$LogEntryOffset(void)>
         c7b24:	e1a01000 	mov	r1, r0
         c7b28:	e59d2014 	ldr	r2, [sp, #20]	; fField20
         c7b2c:	e5940020 	ldr	r0, [r4, #32]	; fField32
         c7b30:	e1520000 	cmp	r2, r0
         c7b34:	859d0014 	ldrhi	r0, [sp, #20]	; fField20
         c7b38:	85840020 	strhi	r0, [r4, #32]	; fField32
         c7b3c:	e3310000 	teq	r1, #0	; 0x0
         c7b40:	1a000007 	bne	c7b64 <TFlashStore::ScanLogForReservedBlocks(void)+0xcc>
         c7b44:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         c7b48:	e5942058 	ldr	r2, [r4, #88]	; fField88
         c7b4c:	e1a00230 	mov	r0, r0, lsr r2
         c7b50:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c7b54:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         c7b58:	e1a0100d 	mov	r1, sp
         c7b5c:	eb6a0649 	bl	1b49488 <TFlashBlock::$SetInfo(SReservedBlockLogEntry *)>
         c7b60:	ea000010 	b	c7ba8 <TFlashStore::ScanLogForReservedBlocks(void)+0x110>
         c7b64:	e24dd030 	sub	sp, sp, #48	; 0x30
         c7b68:	e1a03006 	mov	r3, r6
         c7b6c:	e1a0200d 	mov	r2, sp
         c7b70:	e1a00004 	mov	r0, r4
         c7b74:	eb68af8f 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c7b78:	e59d0014 	ldr	r0, [sp, #20]	; fField20
         c7b7c:	e59d1044 	ldr	r1, [sp, #68]	; fField68
         c7b80:	e1510000 	cmp	r1, r0
         c7b84:	9a000006 	bls	c7ba4 <TFlashStore::ScanLogForReservedBlocks(void)+0x10c>
         c7b88:	e59d005c 	ldr	r0, [sp, #92]	; fField92
         c7b8c:	e5942058 	ldr	r2, [r4, #88]	; fField88
         c7b90:	e1a00230 	mov	r0, r0, lsr r2
         c7b94:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c7b98:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         c7b9c:	e28d1030 	add	r1, sp, #48	; 0x30
         c7ba0:	eb6a0638 	bl	1b49488 <TFlashBlock::$SetInfo(SReservedBlockLogEntry *)>
         c7ba4:	e28dd030 	add	sp, sp, #48	; 0x30
         c7ba8:	e28dd030 	add	sp, sp, #48	; 0x30
         c7bac:	eaffffc1 	b	c7ab8 <TFlashStore::ScanLogForReservedBlocks(void)+0x20>
    */
}

/**
 * Symbol: TFlashStore::FindPhysWritable(unsigned long, unsigned long, unsigned long)
 * Address: 000c7bb0
 */
TFlashStore::FindPhysWritable(unsigned long, unsigned long, unsigned long) {
    /*
         c7bb0:	e1a0c00d 	mov	ip, sp
         c7bb4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         c7bb8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c7bbc:	e1a07000 	mov	r7, r0
         c7bc0:	e1a04001 	mov	r4, r1
         c7bc4:	e1a06003 	mov	r6, r3
         c7bc8:	e1a08001 	mov	r8, r1
         c7bcc:	e0425003 	sub	r5, r2, r3
         c7bd0:	e1510005 	cmp	r1, r5
         c7bd4:	2a000011 	bcs	c7c20 <TFlashStore::FindPhysWritable(unsigned long, unsigned long, unsigned long)+0x70>
         c7bd8:	e0440008 	sub	r0, r4, r8
         c7bdc:	e1500006 	cmp	r0, r6
         c7be0:	21a00008 	movcs	r0, r8
         c7be4:	291ba9f0 	ldmcsdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         c7be8:	e24dd004 	sub	sp, sp, #4	; 0x4
         c7bec:	e1a0200d 	mov	r2, sp
         c7bf0:	e1a01004 	mov	r1, r4
         c7bf4:	e1a00007 	mov	r0, r7
         c7bf8:	e3a03004 	mov	r3, #4	; 0x4
         c7bfc:	eb68af6d 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c7c00:	e597004c 	ldr	r0, [r7, #76]	; fField76
         c7c04:	e59d1000 	ldr	r1, [sp]
         c7c08:	e1300001 	teq	r0, r1
         c7c0c:	12848004 	addne	r8, r4, #4	; 0x4
         c7c10:	e2844004 	add	r4, r4, #4	; 0x4
         c7c14:	e28dd004 	add	sp, sp, #4	; 0x4
         c7c18:	e1540005 	cmp	r4, r5
         c7c1c:	3affffed 	bcc	c7bd8 <TFlashStore::FindPhysWritable(unsigned long, unsigned long, unsigned long)+0x28>
         c7c20:	e3a00000 	mov	r0, #0	; 0x0
         c7c24:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::Delete(void)
 * Address: 000c7c28
 */
TFlashStore::Delete(void) {
    /*
         c7c28:	ea68b7b2 	b	1af5af8 <TFlashStore::$Deinit(void)>
    */
}

/**
 * Symbol: TFlashStore::BasicWrite(unsigned long, void *, unsigned long)
 * Address: 000c7c2c
 */
TFlashStore::BasicWrite(unsigned long, void *, unsigned long) {
    /*
         c7c2c:	e1a0c00d 	mov	ip, sp
         c7c30:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c7c34:	e24cb004 	sub	fp, ip, #4	; 0x4
         c7c38:	e1a04000 	mov	r4, r0
         c7c3c:	e1a07001 	mov	r7, r1
         c7c40:	e1a06002 	mov	r6, r2
         c7c44:	e1a05003 	mov	r5, r3
         c7c48:	e24dd004 	sub	sp, sp, #4	; 0x4
         c7c4c:	e3a00001 	mov	r0, #1	; 0x1
         c7c50:	e3a0a000 	mov	sl, #0	; 0x0
         c7c54:	e24d9064 	sub	r9, sp, #100	; 0x64
         c7c58:	e58400ec 	str	r0, [r4, #236]	; fField236
         c7c5c:	e59f8044 	ldr	r8, [pc, #44]	; c7ca8 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0x7c>	; fField44
         c7c60:	e3a00000 	mov	r0, #0	; 0x0
         c7c64:	e40d006c 	str	r0, [sp], -#108	; fField108
         c7c68:	e58da000 	str	sl, [sp]
         c7c6c:	e1a00009 	mov	r0, r9
         c7c70:	eb6bab3f 	bl	1bb2974 <$setjmp>
         c7c74:	e3300000 	teq	r0, #0	; 0x0
         c7c78:	1a000022 	bne	c7d08 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0xdc>
         c7c7c:	e1a0000d 	mov	r0, sp
         c7c80:	eb6c60fd 	bl	1be007c <$AddExceptionHandler>
         c7c84:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c7c88:	e3300000 	teq	r0, #0	; 0x0
         c7c8c:	0a000006 	beq	c7cac <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0x80>
         c7c90:	e1a03005 	mov	r3, r5
         c7c94:	e1a02007 	mov	r2, r7
         c7c98:	e1a01006 	mov	r1, r6
         c7c9c:	e5940088 	ldr	r0, [r4, #136]	; fField136
         c7ca0:	eb690613 	bl	1b094f4 <TStoreDriver::$Write(char *, unsigned long, unsigned long)>
         c7ca4:	ea000022 	b	c7d34 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0x108>
         c7ca8:	003712b4 	ldreqh	r1, [r7], -r4
         c7cac:	e5d40097 	ldrb	r0, [r4, #151]	; fField151
         c7cb0:	e3300000 	teq	r0, #0	; 0x0
         c7cb4:	e1a03006 	mov	r3, r6
         c7cb8:	e1a02005 	mov	r2, r5
         c7cbc:	e1a01007 	mov	r1, r7
         c7cc0:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c7cc4:	0a000001 	beq	c7cd0 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0xa4>
         c7cc8:	eb0af9fe 	bl	3864c8 <TFlash::Write(unsigned long, unsigned long, char *)>
         c7ccc:	ea000013 	b	c7d20 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0xf4>
         c7cd0:	eb0af9fc 	bl	3864c8 <TFlash::Write(unsigned long, unsigned long, char *)>
         c7cd4:	e58d006c 	str	r0, [sp, #108]	; fField108
         c7cd8:	e3300000 	teq	r0, #0	; 0x0
         c7cdc:	1a000014 	bne	c7d34 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0x108>
         c7ce0:	e5940018 	ldr	r0, [r4, #24]	; fField24
         c7ce4:	e0800007 	add	r0, r0, r7
         c7ce8:	e1a02005 	mov	r2, r5
         c7cec:	e1a01006 	mov	r1, r6
         c7cf0:	eb6bb355 	bl	1bb4a4c <$memcmp>
         c7cf4:	e3300000 	teq	r0, #0	; 0x0
         c7cf8:	13e0003b 	mvnne	r0, #59	; 0x3b
         c7cfc:	12400c29 	subne	r0, r0, #10496	; 0x2900
         c7d00:	1a000006 	bne	c7d20 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0xf4>
         c7d04:	ea00000a 	b	c7d34 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0x108>
         c7d08:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c7d0c:	e5981000 	ldr	r1, [r8]
         c7d10:	eb6c6d1f 	bl	1be3194 <$Subexception>
         c7d14:	e3300000 	teq	r0, #0	; 0x0
         c7d18:	0a000003 	beq	c7d2c <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0x100>
         c7d1c:	e59f0004 	ldr	r0, [pc, #4]	; c7d28 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0xfc>	; fField4
         c7d20:	e58d006c 	str	r0, [sp, #108]	; fField108
         c7d24:	ea000002 	b	c7d34 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0x108>
         c7d28:	ffffd693 	swinv	0x00ffd693
         c7d2c:	e1a0000d 	mov	r0, sp
         c7d30:	eb6c6907 	bl	1be2154 <$NextHandler>
         c7d34:	e1a0000d 	mov	r0, sp
         c7d38:	eb6c64de 	bl	1be10b8 <$ExitHandler>
         c7d3c:	e5bd006c 	ldr	r0, [sp, #108]!	; fField108
         c7d40:	e3300000 	teq	r0, #0	; 0x0
         c7d44:	0a00000e 	beq	c7d84 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0x158>
         c7d48:	e280cc29 	add	ip, r0, #10496	; 0x2900
         c7d4c:	e37c003c 	cmn	ip, #60	; 0x3c
         c7d50:	059f0028 	ldreq	r0, [pc, #28]	; c7d80 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0x154>	; fField28
         c7d54:	058d0000 	streq	r0, [sp]
         c7d58:	0a000009 	beq	c7d84 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0x158>
         c7d5c:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c7d60:	e37c002d 	cmn	ip, #45	; 0x2d
         c7d64:	1280cd9d 	addne	ip, r0, #10048	; 0x2740
         c7d68:	137c0011 	cmnne	ip, #17	; 0x11
         c7d6c:	1a000004 	bne	c7d84 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0x158>
         c7d70:	e1a00004 	mov	r0, r4
         c7d74:	e3a01000 	mov	r1, #0	; 0x0
         c7d78:	eb68f550 	bl	1b052c0 <TFlashStore::$SendAlertMgrWPBitch(int)>
         c7d7c:	eaffffb7 	b	c7c60 <TFlashStore::BasicWrite(unsigned long, void *, unsigned long)+0x34>
         c7d80:	ffffd68f 	swinv	0x00ffd68f
         c7d84:	e49d0004 	ldr	r0, [sp], #4	; fField4
         c7d88:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::BasicRead(unsigned long, void *, unsigned long)
 * Address: 000c7d8c
 */
TFlashStore::BasicRead(unsigned long, void *, unsigned long) {
    /*
         c7d8c:	e1a0c00d 	mov	ip, sp
         c7d90:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         c7d94:	e24cb004 	sub	fp, ip, #4	; 0x4
         c7d98:	e1a0c002 	mov	ip, r2
         c7d9c:	e1a02003 	mov	r2, r3
         c7da0:	e5d0303f 	ldrb	r3, [r0, #63]	; fField63
         c7da4:	e3330000 	teq	r3, #0	; 0x0
         c7da8:	0a00003e 	beq	c7ea8 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x11c>
         c7dac:	e5900018 	ldr	r0, [r0, #24]	; fField24
         c7db0:	e0800001 	add	r0, r0, r1
         c7db4:	e2001003 	and	r1, r0, #3	; 0x3
         c7db8:	e20c3003 	and	r3, ip, #3	; 0x3
         c7dbc:	e1310003 	teq	r1, r3
         c7dc0:	1a000023 	bne	c7e54 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0xc8>
         c7dc4:	e1b03001 	movs	r3, r1
         c7dc8:	e3a01003 	mov	r1, #3	; 0x3
         c7dcc:	0a00000c 	beq	c7e04 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x78>
         c7dd0:	e3320000 	teq	r2, #0	; 0x0
         c7dd4:	0a000047 	beq	c7ef8 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x16c>
         c7dd8:	e3c03003 	bic	r3, r0, #3	; 0x3
         c7ddc:	e593e000 	ldr	lr, [r3]
         c7de0:	e2003003 	and	r3, r0, #3	; 0x3
         c7de4:	e0413003 	sub	r3, r1, r3
         c7de8:	e1a03183 	mov	r3, r3, lsl #3
         c7dec:	e1a0333e 	mov	r3, lr, lsr r3
         c7df0:	e4cc3001 	strb	r3, [ip], #1
         c7df4:	e2522001 	subs	r2, r2, #1	; 0x1
         c7df8:	e2800001 	add	r0, r0, #1	; 0x1
         c7dfc:	1afffff5 	bne	c7dd8 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x4c>
         c7e00:	ea00003c 	b	c7ef8 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x16c>
         c7e04:	e3520004 	cmp	r2, #4	; 0x4
         c7e08:	3a000004 	bcc	c7e20 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x94>
         c7e0c:	e4903004 	ldr	r3, [r0], #4	; fField4
         c7e10:	e2422004 	sub	r2, r2, #4	; 0x4
         c7e14:	e48c3004 	str	r3, [ip], #4	; fField4
         c7e18:	e3520004 	cmp	r2, #4	; 0x4
         c7e1c:	2afffffa 	bcs	c7e0c <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x80>
         c7e20:	e3320000 	teq	r2, #0	; 0x0
         c7e24:	0a000033 	beq	c7ef8 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x16c>
         c7e28:	e3c03003 	bic	r3, r0, #3	; 0x3
         c7e2c:	e593e000 	ldr	lr, [r3]
         c7e30:	e2003003 	and	r3, r0, #3	; 0x3
         c7e34:	e0413003 	sub	r3, r1, r3
         c7e38:	e1a03183 	mov	r3, r3, lsl #3
         c7e3c:	e1a0333e 	mov	r3, lr, lsr r3
         c7e40:	e4cc3001 	strb	r3, [ip], #1
         c7e44:	e2522001 	subs	r2, r2, #1	; 0x1
         c7e48:	e2800001 	add	r0, r0, #1	; 0x1
         c7e4c:	1afffff5 	bne	c7e28 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x9c>
         c7e50:	ea000028 	b	c7ef8 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x16c>
         c7e54:	e1b01002 	movs	r1, r2
         c7e58:	e2422001 	sub	r2, r2, #1	; 0x1
         c7e5c:	0a000025 	beq	c7ef8 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x16c>
         c7e60:	e3c01003 	bic	r1, r0, #3	; 0x3
         c7e64:	e5911000 	ldr	r1, [r1]
         c7e68:	e2103003 	ands	r3, r0, #3	; 0x3
         c7e6c:	0a000004 	beq	c7e84 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0xf8>
         c7e70:	e3330001 	teq	r3, #1	; 0x1
         c7e74:	0a000003 	beq	c7e88 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0xfc>
         c7e78:	e3330002 	teq	r3, #2	; 0x2
         c7e7c:	1a000003 	bne	c7e90 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x104>
         c7e80:	ea000001 	b	c7e8c <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x100>
         c7e84:	e1a01421 	mov	r1, r1, lsr #8
         c7e88:	e1a01421 	mov	r1, r1, lsr #8
         c7e8c:	e1a01421 	mov	r1, r1, lsr #8
         c7e90:	e4cc1001 	strb	r1, [ip], #1
         c7e94:	e2800001 	add	r0, r0, #1	; 0x1
         c7e98:	e1b01002 	movs	r1, r2
         c7e9c:	e2422001 	sub	r2, r2, #1	; 0x1
         c7ea0:	1affffee 	bne	c7e60 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0xd4>
         c7ea4:	ea000013 	b	c7ef8 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x16c>
         c7ea8:	e5d03091 	ldrb	r3, [r0, #145]	; fField145
         c7eac:	e3330000 	teq	r3, #0	; 0x0
         c7eb0:	0a000005 	beq	c7ecc <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x140>
         c7eb4:	e5900088 	ldr	r0, [r0, #136]	; fField136
         c7eb8:	e1a03002 	mov	r3, r2
         c7ebc:	e1a02001 	mov	r2, r1
         c7ec0:	e1a0100c 	mov	r1, ip
         c7ec4:	eb68e898 	bl	1b0212c <TStoreDriver::$Read(char *, unsigned long, unsigned long)>
         c7ec8:	ea00000a 	b	c7ef8 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x16c>
         c7ecc:	e5d03097 	ldrb	r3, [r0, #151]	; fField151
         c7ed0:	e3330000 	teq	r3, #0	; 0x0
         c7ed4:	0a000003 	beq	c7ee8 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x15c>
         c7ed8:	e5900010 	ldr	r0, [r0, #16]	; fField16
         c7edc:	e1a0300c 	mov	r3, ip
         c7ee0:	eb0af975 	bl	3864bc <TFlash::Read(unsigned long, unsigned long, char *)>
         c7ee4:	ea000003 	b	c7ef8 <TFlashStore::BasicRead(unsigned long, void *, unsigned long)+0x16c>
         c7ee8:	e5900018 	ldr	r0, [r0, #24]	; fField24
         c7eec:	e0800001 	add	r0, r0, r1
         c7ef0:	e1a0100c 	mov	r1, ip
         c7ef4:	eb6c5c16 	bl	1bdef54 <$BlockMove>
         c7ef8:	e3a00000 	mov	r0, #0	; 0x0
         c7efc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::BasicCopy(unsigned long, unsigned long, unsigned long)
 * Address: 000c7f00
 */
TFlashStore::BasicCopy(unsigned long, unsigned long, unsigned long) {
    /*
         c7f00:	e1a0c00d 	mov	ip, sp
         c7f04:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c7f08:	e24cb004 	sub	fp, ip, #4	; 0x4
         c7f0c:	e1a04000 	mov	r4, r0
         c7f10:	e1a07001 	mov	r7, r1
         c7f14:	e1a06002 	mov	r6, r2
         c7f18:	e1a05003 	mov	r5, r3
         c7f1c:	e3a00000 	mov	r0, #0	; 0x0
         c7f20:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         c7f24:	e5940088 	ldr	r0, [r4, #136]	; fField136
         c7f28:	e3300000 	teq	r0, #0	; 0x0
         c7f2c:	0a000023 	beq	c7fc0 <TFlashStore::BasicCopy(unsigned long, unsigned long, unsigned long)+0xc0>
         c7f30:	e3a0a000 	mov	sl, #0	; 0x0
         c7f34:	e24d9064 	sub	r9, sp, #100	; 0x64
         c7f38:	e59f8030 	ldr	r8, [pc, #30]	; c7f70 <TFlashStore::BasicCopy(unsigned long, unsigned long, unsigned long)+0x70>
         c7f3c:	e1a00009 	mov	r0, r9
         c7f40:	e52da06c 	str	sl, [sp, -#108]!	; fField108
         c7f44:	eb6baa8a 	bl	1bb2974 <$setjmp>
         c7f48:	e3300000 	teq	r0, #0	; 0x0
         c7f4c:	1a000008 	bne	c7f74 <TFlashStore::BasicCopy(unsigned long, unsigned long, unsigned long)+0x74>
         c7f50:	e1a0000d 	mov	r0, sp
         c7f54:	eb6c6048 	bl	1be007c <$AddExceptionHandler>
         c7f58:	e1a03005 	mov	r3, r5
         c7f5c:	e1a02006 	mov	r2, r6
         c7f60:	e1a01007 	mov	r1, r7
         c7f64:	e5940088 	ldr	r0, [r4, #136]	; fField136
         c7f68:	eb68b6d4 	bl	1af5ac0 <TStoreDriver::$Copy(unsigned long, unsigned long, unsigned long)>
         c7f6c:	ea000009 	b	c7f98 <TFlashStore::BasicCopy(unsigned long, unsigned long, unsigned long)+0x98>
         c7f70:	003712b4 	ldreqh	r1, [r7], -r4
         c7f74:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c7f78:	e5981000 	ldr	r1, [r8]
         c7f7c:	eb6c6c84 	bl	1be3194 <$Subexception>
         c7f80:	e3300000 	teq	r0, #0	; 0x0
         c7f84:	159f0030 	ldrne	r0, [pc, #30]	; c7fbc <TFlashStore::BasicCopy(unsigned long, unsigned long, unsigned long)+0xbc>
         c7f88:	158d006c 	strne	r0, [sp, #108]	; fField108
         c7f8c:	1a000001 	bne	c7f98 <TFlashStore::BasicCopy(unsigned long, unsigned long, unsigned long)+0x98>
         c7f90:	e1a0000d 	mov	r0, sp
         c7f94:	eb6c686e 	bl	1be2154 <$NextHandler>
         c7f98:	e1a0000d 	mov	r0, sp
         c7f9c:	eb6c6445 	bl	1be10b8 <$ExitHandler>
         c7fa0:	e5bd006c 	ldr	r0, [sp, #108]!	; fField108
         c7fa4:	e3300000 	teq	r0, #0	; 0x0
         c7fa8:	0a000013 	beq	c7ffc <TFlashStore::BasicCopy(unsigned long, unsigned long, unsigned long)+0xfc>
         c7fac:	e1a00004 	mov	r0, r4
         c7fb0:	e3a01000 	mov	r1, #0	; 0x0
         c7fb4:	eb68f4c1 	bl	1b052c0 <TFlashStore::$SendAlertMgrWPBitch(int)>
         c7fb8:	eaffffdf 	b	c7f3c <TFlashStore::BasicCopy(unsigned long, unsigned long, unsigned long)+0x3c>
         c7fbc:	ffffd693 	swinv	0x00ffd693
         c7fc0:	e5d40097 	ldrb	r0, [r4, #151]	; fField151
         c7fc4:	e3300000 	teq	r0, #0	; 0x0
         c7fc8:	0a000005 	beq	c7fe4 <TFlashStore::BasicCopy(unsigned long, unsigned long, unsigned long)+0xe4>
         c7fcc:	e1a03005 	mov	r3, r5
         c7fd0:	e1a02006 	mov	r2, r6
         c7fd4:	e1a01007 	mov	r1, r7
         c7fd8:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         c7fdc:	eb0af99f 	bl	386660 <TFlash::Copy(unsigned long, unsigned long, unsigned long)>
         c7fe0:	ea000005 	b	c7ffc <TFlashStore::BasicCopy(unsigned long, unsigned long, unsigned long)+0xfc>
         c7fe4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         c7fe8:	e0802007 	add	r2, r0, r7
         c7fec:	e1a03005 	mov	r3, r5
         c7ff0:	e1a01006 	mov	r1, r6
         c7ff4:	e1a00004 	mov	r0, r4
         c7ff8:	eb68ae70 	bl	1af39c0 <TFlashStore::$BasicWrite(unsigned long, void *, unsigned long)>
         c7ffc:	e49d0004 	ldr	r0, [sp], #4	; fField4
         c8000:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::IsWriteProtected(void)
 * Address: 000c8004
 */
TFlashStore::IsWriteProtected(void) {
    /*
         c8004:	e1a0c00d 	mov	ip, sp
         c8008:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c800c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c8010:	e1a04000 	mov	r4, r0
         c8014:	e59010d4 	ldr	r1, [r0, #212]	; fField212
         c8018:	e3a00001 	mov	r0, #1	; 0x1
         c801c:	e3310000 	teq	r1, #0	; 0x0
         c8020:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         c8024:	e3a05000 	mov	r5, #0	; 0x0
         c8028:	e56d5004 	strb	r5, [sp, -#4]!	; fField4
         c802c:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         c8030:	e3300000 	teq	r0, #0	; 0x0
         c8034:	0a000027 	beq	c80d8 <TFlashStore::IsWriteProtected(void)+0xd4>
         c8038:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c803c:	e3300000 	teq	r0, #0	; 0x0
         c8040:	0a000005 	beq	c805c <TFlashStore::IsWriteProtected(void)+0x58>
         c8044:	e1a00004 	mov	r0, r4
         c8048:	eb6900fb 	bl	1b0843c <TFlashStore::$TouchMe(void)>
         c804c:	e1a0100d 	mov	r1, sp
         c8050:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         c8054:	eb0af93c 	bl	38654c <TFlash::GetWriteProtected(unsigned char *)>
         c8058:	ea00001e 	b	c80d8 <TFlashStore::IsWriteProtected(void)+0xd4>
         c805c:	e5940078 	ldr	r0, [r4, #120]	; fField120
         c8060:	e3300000 	teq	r0, #0	; 0x0
         c8064:	0a00001b 	beq	c80d8 <TFlashStore::IsWriteProtected(void)+0xd4>
         c8068:	e52d506c 	str	r5, [sp, -#108]!	; fField108
         c806c:	e28d0008 	add	r0, sp, #8	; 0x8
         c8070:	eb6baa3f 	bl	1bb2974 <$setjmp>
         c8074:	e3300000 	teq	r0, #0	; 0x0
         c8078:	1a00000b 	bne	c80ac <TFlashStore::IsWriteProtected(void)+0xa8>
         c807c:	e1a0000d 	mov	r0, sp
         c8080:	eb6c5ffd 	bl	1be007c <$AddExceptionHandler>
         c8084:	e1a00004 	mov	r0, r4
         c8088:	eb6900eb 	bl	1b0843c <TFlashStore::$TouchMe(void)>
         c808c:	e5b40078 	ldr	r0, [r4, #120]!	; fField120
         c8090:	eb0af8de 	bl	386410 <TCardHandler::CardStatus(void)>
         c8094:	e2000004 	and	r0, r0, #4	; 0x4
         c8098:	e3300004 	teq	r0, #4	; 0x4
         c809c:	13a00000 	movne	r0, #0	; 0x0
         c80a0:	03a00001 	moveq	r0, #1	; 0x1
         c80a4:	e5cd006c 	strb	r0, [sp, #108]	; fField108
         c80a8:	ea000007 	b	c80cc <TFlashStore::IsWriteProtected(void)+0xc8>
         c80ac:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c80b0:	e28f1f0a 	add	r1, pc, #40	; 0x28
         c80b4:	eb6c6c36 	bl	1be3194 <$Subexception>
         c80b8:	e3300000 	teq	r0, #0	; 0x0
         c80bc:	15cd506c 	strneb	r5, [sp, #108]	; fField108
         c80c0:	1a000001 	bne	c80cc <TFlashStore::IsWriteProtected(void)+0xc8>
         c80c4:	e1a0000d 	mov	r0, sp
         c80c8:	eb6c6821 	bl	1be2154 <$NextHandler>
         c80cc:	e1a0000d 	mov	r0, sp
         c80d0:	eb6c63f8 	bl	1be10b8 <$ExitHandler>
         c80d4:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c80d8:	e4dd0004 	ldrb	r0, [sp], #4	; fField4
         c80dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         c80e0:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TFlashStore::InternalNeedsFormat(void)
 * Address: 000c80e4
 */
TFlashStore::InternalNeedsFormat(void) {
    /*
         c80e4:	e1a0c00d 	mov	ip, sp
         c80e8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         c80ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         c80f0:	e1a04000 	mov	r4, r0
         c80f4:	e5d00017 	ldrb	r0, [r0, #23]	; fField23
         c80f8:	e3a08000 	mov	r8, #0	; 0x0
         c80fc:	e3300000 	teq	r0, #0	; 0x0
         c8100:	1a00003d 	bne	c81fc <TFlashStore::InternalNeedsFormat(void)+0x118>
         c8104:	e5d40090 	ldrb	r0, [r4, #144]	; fField144
         c8108:	e3a07001 	mov	r7, #1	; 0x1
         c810c:	e3300000 	teq	r0, #0	; 0x0
         c8110:	1a000013 	bne	c8164 <TFlashStore::InternalNeedsFormat(void)+0x80>
         c8114:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c8118:	e5900000 	ldr	r0, [r0]
         c811c:	eb68db90 	bl	1afef64 <TFlashBlock::$LogEntryOffset(void)>
         c8120:	e3300000 	teq	r0, #0	; 0x0
         c8124:	0a00000e 	beq	c8164 <TFlashStore::InternalNeedsFormat(void)+0x80>
         c8128:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c812c:	e1a01138 	mov	r1, r8, lsr r1
         c8130:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c8134:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c8138:	eb68db82 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c813c:	e3300000 	teq	r0, #0	; 0x0
         c8140:	1a000007 	bne	c8164 <TFlashStore::InternalNeedsFormat(void)+0x80>
         c8144:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c8148:	e5942058 	ldr	r2, [r4, #88]	; fField88
         c814c:	e1a00230 	mov	r0, r0, lsr r2
         c8150:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c8154:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         c8158:	eb68db7a 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c815c:	e3300000 	teq	r0, #0	; 0x0
         c8160:	0a000001 	beq	c816c <TFlashStore::InternalNeedsFormat(void)+0x88>
         c8164:	e1a00007 	mov	r0, r7
         c8168:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         c816c:	e3a05000 	mov	r5, #0	; 0x0
         c8170:	e1a00004 	mov	r0, r4
         c8174:	eb68fc9e 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c8178:	e3500000 	cmp	r0, #0	; 0x0
         c817c:	9a00001e 	bls	c81fc <TFlashStore::InternalNeedsFormat(void)+0x118>
         c8180:	e24dd008 	sub	sp, sp, #8	; 0x8
         c8184:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c8188:	e1a01135 	mov	r1, r5, lsr r1
         c818c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c8190:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c8194:	e1a06000 	mov	r6, r0
         c8198:	eb68db6a 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c819c:	e3300000 	teq	r0, #0	; 0x0
         c81a0:	128dd008 	addne	sp, sp, #8	; 0x8
         c81a4:	1a000014 	bne	c81fc <TFlashStore::InternalNeedsFormat(void)+0x118>
         c81a8:	e1a00006 	mov	r0, r6
         c81ac:	eb6a04b9 	bl	1b49498 <TFlashBlock::$IsReserved(void)>
         c81b0:	e3300000 	teq	r0, #0	; 0x0
         c81b4:	1a000009 	bne	c81e0 <TFlashStore::InternalNeedsFormat(void)+0xfc>
         c81b8:	e1a0200d 	mov	r2, sp
         c81bc:	e596100c 	ldr	r1, [r6, #12]
         c81c0:	e1a00006 	mov	r0, r6
         c81c4:	eb68e7e2 	bl	1b02154 <TFlashBlock::$ReadObjectAt(unsigned long, SObject *)>
         c81c8:	e3300000 	teq	r0, #0	; 0x0
         c81cc:	059d0000 	ldreq	r0, [sp]
         c81d0:	03c0020f 	biceq	r0, r0, #-268435456	; 0xf0000000
         c81d4:	03300003 	teqeq	r0, #3	; 0x3
         c81d8:	11a00007 	movne	r0, r7
         c81dc:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         c81e0:	e28dd008 	add	sp, sp, #8	; 0x8
         c81e4:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c81e8:	e0805005 	add	r5, r0, r5
         c81ec:	e1a00004 	mov	r0, r4
         c81f0:	eb68fc7f 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c81f4:	e1500005 	cmp	r0, r5
         c81f8:	8affffe0 	bhi	c8180 <TFlashStore::InternalNeedsFormat(void)+0x9c>
         c81fc:	e1a00008 	mov	r0, r8
         c8200:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::FindUnusedPhysicalBlock(void)
 * Address: 000c8204
 */
TFlashStore::FindUnusedPhysicalBlock(void) {
    /*
         c8204:	e1a0c00d 	mov	ip, sp
         c8208:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c820c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c8210:	e1a04000 	mov	r4, r0
         c8214:	e5900050 	ldr	r0, [r0, #80]	; fField80
         c8218:	e1a01000 	mov	r1, r0
         c821c:	e5942054 	ldr	r2, [r4, #84]	; fField84
         c8220:	e0060192 	mul	r6, r2, r1
         c8224:	e1a07000 	mov	r7, r0
         c8228:	e3a05000 	mov	r5, #0	; 0x0
         c822c:	e3560000 	cmp	r6, #0	; 0x0
         c8230:	9a00000b 	bls	c8264 <TFlashStore::FindUnusedPhysicalBlock(void)+0x60>
         c8234:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c8238:	e1a01135 	mov	r1, r5, lsr r1
         c823c:	e0811081 	add	r1, r1, r1, lsl #1
         c8240:	e5940024 	ldr	r0, [r4, #36]	; fField36
         c8244:	e0800181 	add	r0, r0, r1, lsl #3
         c8248:	eb68db38 	bl	1afef30 <TFlashPhysBlock::$IsSpare(void)>
         c824c:	e3300000 	teq	r0, #0	; 0x0
         c8250:	11a00005 	movne	r0, r5
         c8254:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c8258:	e0855007 	add	r5, r5, r7
         c825c:	e1550006 	cmp	r5, r6
         c8260:	3afffff3 	bcc	c8234 <TFlashStore::FindUnusedPhysicalBlock(void)+0x30>
         c8264:	e3e00000 	mvn	r0, #0	; 0x0
         c8268:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::BringVirginBlockOnline(unsigned long, unsigned long)
 * Address: 000c826c
 */
TFlashStore::BringVirginBlockOnline(unsigned long, unsigned long) {
    /*
         c826c:	e1a0c00d 	mov	ip, sp
         c8270:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c8274:	e24cb004 	sub	fp, ip, #4	; 0x4
         c8278:	e1a04000 	mov	r4, r0
         c827c:	e1a06001 	mov	r6, r1
         c8280:	e1a05002 	mov	r5, r2
         c8284:	e24dd05c 	sub	sp, sp, #92	; 0x5c
         c8288:	e1a0000d 	mov	r0, sp
         c828c:	eb6c2dd1 	bl	1bd39d8 <$GetGlobalTime>
         c8290:	e28d0008 	add	r0, sp, #8	; 0x8
         c8294:	e89d5000 	ldmia	sp, {ip, lr}
         c8298:	e8805000 	stmia	r0, {ip, lr}
         c829c:	e3a07000 	mov	r7, #0	; 0x0
         c82a0:	e3a00001 	mov	r0, #1	; 0x1
         c82a4:	e58d0034 	str	r0, [sp, #52]	; fField52
         c82a8:	e58d5038 	str	r5, [sp, #56]	; fField56
         c82ac:	e58d6028 	str	r6, [sp, #40]	; fField40
         c82b0:	e58d7030 	str	r7, [sp, #48]	; fField48
         c82b4:	e58d703c 	str	r7, [sp, #60]	; fField60
         c82b8:	e58d7040 	str	r7, [sp, #64]	; fField64
         c82bc:	eb6bb1e9 	bl	1bb4a68 <$rand>
         c82c0:	e58d0044 	str	r0, [sp, #68]	; fField68
         c82c4:	e28d0008 	add	r0, sp, #8	; 0x8
         c82c8:	e3a019e1 	mov	r1, #3686400	; 0x384000
         c82cc:	eb6c2158 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
         c82d0:	e58d0048 	str	r0, [sp, #72]	; fField72
         c82d4:	e59d0038 	ldr	r0, [sp, #56]	; fField56
         c82d8:	e2800004 	add	r0, r0, #4	; 0x4
         c82dc:	e58d004c 	str	r0, [sp, #76]	; fField76
         c82e0:	e58d7054 	str	r7, [sp, #84]	; fField84
         c82e4:	e58d7058 	str	r7, [sp, #88]	; fField88
         c82e8:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c82ec:	e58d0050 	str	r0, [sp, #80]	; fField80
         c82f0:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c82f4:	e1a01135 	mov	r1, r5, lsr r1
         c82f8:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c82fc:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c8300:	e28d1010 	add	r1, sp, #16	; 0x10
         c8304:	e3a02000 	mov	r2, #0	; 0x0
         c8308:	eb6931c0 	bl	1b14a10 <TFlashBlock::$SetInfo(SFlashBlockLogEntry *, unsigned char *)>
         c830c:	e3300000 	teq	r0, #0	; 0x0
         c8310:	1a000019 	bne	c837c <TFlashStore::BringVirginBlockOnline(unsigned long, unsigned long)+0x110>
         c8314:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c8318:	e1a01135 	mov	r1, r5, lsr r1
         c831c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c8320:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c8324:	e28d104c 	add	r1, sp, #76	; 0x4c
         c8328:	eb69087b 	bl	1b0a51c <TFlashBlock::$WriteRootDirectory(unsigned long *)>
         c832c:	e3300000 	teq	r0, #0	; 0x0
         c8330:	1a000011 	bne	c837c <TFlashStore::BringVirginBlockOnline(unsigned long, unsigned long)+0x110>
         c8334:	e3a03000 	mov	r3, #0	; 0x0
         c8338:	e1a02006 	mov	r2, r6
         c833c:	e92d000c 	stmdb	sp!, {r2, r3}
         c8340:	e28d3018 	add	r3, sp, #24	; 0x18
         c8344:	e1a00004 	mov	r0, r4
         c8348:	e3a0204c 	mov	r2, #76	; 0x4c
         c834c:	e59f102c 	ldr	r1, [pc, #2c]	; c8380 <TFlashStore::BringVirginBlockOnline(unsigned long, unsigned long)+0x114>
         c8350:	eb68a96a 	bl	1af2900 <TFlashStore::$AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)>
         c8354:	e28dd008 	add	sp, sp, #8	; 0x8
         c8358:	e3300000 	teq	r0, #0	; 0x0
         c835c:	1a000006 	bne	c837c <TFlashStore::BringVirginBlockOnline(unsigned long, unsigned long)+0x110>
         c8360:	e5b4002c 	ldr	r0, [r4, #44]!	; fField44
         c8364:	e5b4102c 	ldr	r1, [r4, #44]!	; fField44
         c8368:	e1a01135 	mov	r1, r5, lsr r1
         c836c:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c8370:	e28d1010 	add	r1, sp, #16	; 0x10
         c8374:	e3a02000 	mov	r2, #0	; 0x0
         c8378:	eb6931a4 	bl	1b14a10 <TFlashBlock::$SetInfo(SFlashBlockLogEntry *, unsigned char *)>
         c837c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c8380:	66626c6b 	strvsbt	r6, [r2], -fp, ror #24	; fField24
    */
}

/**
 * Symbol: TFlashStore::CalcAverageEraseCount(void)
 * Address: 000c8384
 */
TFlashStore::CalcAverageEraseCount(void) {
    /*
         c8384:	e1a0c00d 	mov	ip, sp
         c8388:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c838c:	e24cb004 	sub	fp, ip, #4	; 0x4
         c8390:	e1a04000 	mov	r4, r0
         c8394:	e3a06000 	mov	r6, #0	; 0x0
         c8398:	e3a05000 	mov	r5, #0	; 0x0
         c839c:	e5900054 	ldr	r0, [r0, #84]	; fField84
         c83a0:	e3500000 	cmp	r0, #0	; 0x0
         c83a4:	9a000008 	bls	c83cc <TFlashStore::CalcAverageEraseCount(void)+0x48>
         c83a8:	e0851085 	add	r1, r5, r5, lsl #1
         c83ac:	e5940024 	ldr	r0, [r4, #36]	; fField36
         c83b0:	e0800181 	add	r0, r0, r1, lsl #3
         c83b4:	eb68be01 	bl	1af7bc0 <TFlashPhysBlock::$EraseCount(void)>
         c83b8:	e0806006 	add	r6, r0, r6
         c83bc:	e2855001 	add	r5, r5, #1	; 0x1
         c83c0:	e5940054 	ldr	r0, [r4, #84]	; fField84
         c83c4:	e1500005 	cmp	r0, r5
         c83c8:	8afffff6 	bhi	c83a8 <TFlashStore::CalcAverageEraseCount(void)+0x24>
         c83cc:	e1a01006 	mov	r1, r6
         c83d0:	e5940054 	ldr	r0, [r4, #84]	; fField84
         c83d4:	eb6ba95b 	bl	1bb2948 <$__rt_udiv>
         c83d8:	e5a40044 	str	r0, [r4, #68]!	; fField68
         c83dc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::AverageEraseCount(void)
 * Address: 000c83e0
 */
TFlashStore::AverageEraseCount(void) {
    /*
         c83e0:	e5900044 	ldr	r0, [r0, #68]	; fField68
         c83e4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::Deinit(void)
 * Address: 000c83e8
 */
TFlashStore::Deinit(void) {
    /*
         c83e8:	e1a0c00d 	mov	ip, sp
         c83ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c83f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         c83f4:	e1a04000 	mov	r4, r0
         c83f8:	e590002c 	ldr	r0, [r0, #44]	; fField44
         c83fc:	eb6c2955 	bl	1bd2958 <$free>
         c8400:	e3a05000 	mov	r5, #0	; 0x0
         c8404:	e584502c 	str	r5, [r4, #44]	; fField44
         c8408:	e5940024 	ldr	r0, [r4, #36]	; fField36
         c840c:	eb6c2951 	bl	1bd2958 <$free>
         c8410:	e5845024 	str	r5, [r4, #36]	; fField36
         c8414:	e5940030 	ldr	r0, [r4, #48]	; fField48
         c8418:	eb6c294e 	bl	1bd2958 <$free>
         c841c:	e5845030 	str	r5, [r4, #48]	; fField48
         c8420:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c8424:	e3300000 	teq	r0, #0	; 0x0
         c8428:	0a000003 	beq	c843c <TFlashStore::Deinit(void)+0x54>
         c842c:	eb68b9ce 	bl	1af6b6c <TFlashStoreLookupCache::$Destroy(void)>
         c8430:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c8434:	eb6c2947 	bl	1bd2958 <$free>
         c8438:	e5845034 	str	r5, [r4, #52]	; fField52
         c843c:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c8440:	e3300000 	teq	r0, #0	; 0x0
         c8444:	0a000002 	beq	c8454 <TFlashStore::Deinit(void)+0x6c>
         c8448:	e3a01001 	mov	r1, #1	; 0x1
         c844c:	eb68a105 	bl	1af0868 <TFlashTracker::$__dt(void)>
         c8450:	e5845084 	str	r5, [r4, #132]	; fField132
         c8454:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         c8458:	e3300000 	teq	r0, #0	; 0x0
         c845c:	15b4001c 	ldrne	r0, [r4, #28]!	; fField28
         c8460:	13700001 	cmnne	r0, #1	; 0x1
         c8464:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         c8468:	1a69c1fb 	bne	1b38c5c <$UnregisterVccOffNotify(int)>
         c846c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::DummyBlock(void)
 * Address: 000c8470
 */
TFlashStore::DummyBlock(void) {
    /*
         c8470:	e590102c 	ldr	r1, [r0, #44]	; fField44
         c8474:	e5900054 	ldr	r0, [r0, #84]	; fField84
         c8478:	e0810100 	add	r0, r1, r0, lsl #2
         c847c:	e5100004 	ldr	r0, [r0, -#4]	; fField4
         c8480:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::ObjectNumberFor(unsigned long)
 * Address: 000c8484
 */
TFlashStore::ObjectNumberFor(unsigned long) {
    /*
         c8484:	e5b02060 	ldr	r2, [r0, #96]!	; fField96
         c8488:	e3e0020f 	mvn	r0, #-268435456	; 0xf0000000
         c848c:	e1c10210 	bic	r0, r1, r0, lsl r2
         c8490:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::PSSIDFor(long, long)
 * Address: 000c8494
 */
TFlashStore::PSSIDFor(long, long) {
    /*
         c8494:	e5900060 	ldr	r0, [r0, #96]	; fField96
         c8498:	e1820011 	orr	r0, r2, r1, lsl r0
         c849c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::GetStoreSizes(long *, long *)
 * Address: 000c84a0
 */
TFlashStore::GetStoreSizes(long *, long *) {
    /*
         c84a0:	e1a0c00d 	mov	ip, sp
         c84a4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         c84a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c84ac:	e1a04000 	mov	r4, r0
         c84b0:	e1a06001 	mov	r6, r1
         c84b4:	e1a05002 	mov	r5, r2
         c84b8:	e590002c 	ldr	r0, [r0, #44]	; fField44
         c84bc:	e3a08000 	mov	r8, #0	; 0x0
         c84c0:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c84c4:	e1a01138 	mov	r1, r8, lsr r1
         c84c8:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c84cc:	eb68ef64 	bl	1b04264 <TFlashBlock::$RootDirSize(void)>
         c84d0:	e5d4103d 	ldrb	r1, [r4, #61]	; fField61
         c84d4:	e3310000 	teq	r1, #0	; 0x0
         c84d8:	03a01b01 	moveq	r1, #1024	; 0x400
         c84dc:	13a01c01 	movne	r1, #256	; 0x100
         c84e0:	e0800001 	add	r0, r0, r1
         c84e4:	e280700c 	add	r7, r0, #12	; 0xc
         c84e8:	e1a00004 	mov	r0, r4
         c84ec:	eb68fbc0 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c84f0:	e5941054 	ldr	r1, [r4, #84]	; fField84
         c84f4:	e0010197 	mul	r1, r7, r1
         c84f8:	e0409001 	sub	r9, r0, r1
         c84fc:	e1a00004 	mov	r0, r4
         c8500:	eb0008ab 	bl	ca7b4 <TFlashStore::InternalStoreSlop(void)>
         c8504:	e0490000 	sub	r0, r9, r0
         c8508:	e5860000 	str	r0, [r6]
         c850c:	e59400ec 	ldr	r0, [r4, #236]	; fField236
         c8510:	e3300001 	teq	r0, #1	; 0x1
         c8514:	15850000 	strne	r0, [r5]
         c8518:	1a000027 	bne	c85bc <TFlashStore::GetStoreSizes(long *, long *)+0x11c>
         c851c:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c8520:	e0409007 	sub	r9, r0, r7
         c8524:	e1a00004 	mov	r0, r4
         c8528:	eb6903e4 	bl	1b094c0 <TFlashStore::$VccOn(void)>
         c852c:	e3a07000 	mov	r7, #0	; 0x0
         c8530:	e1a00004 	mov	r0, r4
         c8534:	e5858000 	str	r8, [r5]
         c8538:	eb68fbad 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c853c:	e3500000 	cmp	r0, #0	; 0x0
         c8540:	9a000015 	bls	c859c <TFlashStore::GetStoreSizes(long *, long *)+0xfc>
         c8544:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c8548:	e1a01137 	mov	r1, r7, lsr r1
         c854c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c8550:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c8554:	eb68da7b 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c8558:	e3300000 	teq	r0, #0	; 0x0
         c855c:	1a000008 	bne	c8584 <TFlashStore::GetStoreSizes(long *, long *)+0xe4>
         c8560:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c8564:	e1a01137 	mov	r1, r7, lsr r1
         c8568:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c856c:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c8570:	eb6907f5 	bl	1b0a54c <TFlashBlock::$CalcRecoverableBytes(void)>
         c8574:	e0490000 	sub	r0, r9, r0
         c8578:	e5951000 	ldr	r1, [r5]
         c857c:	e0800001 	add	r0, r0, r1
         c8580:	e5850000 	str	r0, [r5]
         c8584:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c8588:	e0807007 	add	r7, r0, r7
         c858c:	e1a00004 	mov	r0, r4
         c8590:	eb68fb97 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c8594:	e1500007 	cmp	r0, r7
         c8598:	8affffe9 	bhi	c8544 <TFlashStore::GetStoreSizes(long *, long *)+0xa4>
         c859c:	e1a00004 	mov	r0, r4
         c85a0:	eb6903c5 	bl	1b094bc <TFlashStore::$VccOff(void)>
         c85a4:	e5950000 	ldr	r0, [r5]
         c85a8:	e5961000 	ldr	r1, [r6]
         c85ac:	e1500001 	cmp	r0, r1
         c85b0:	c5851000 	strgt	r1, [r5]
         c85b4:	e5950000 	ldr	r0, [r5]
         c85b8:	e5a400ec 	str	r0, [r4, #236]!	; fField236
         c85bc:	e1a00008 	mov	r0, r8
         c85c0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::Avail(void)
 * Address: 000c85c4
 */
TFlashStore::Avail(void) {
    /*
         c85c4:	e1a0c00d 	mov	ip, sp
         c85c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c85cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         c85d0:	e1a04000 	mov	r4, r0
         c85d4:	e3a05000 	mov	r5, #0	; 0x0
         c85d8:	e3a06000 	mov	r6, #0	; 0x0
         c85dc:	eb68fb84 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c85e0:	e3500000 	cmp	r0, #0	; 0x0
         c85e4:	9a00000b 	bls	c8618 <TFlashStore::Avail(void)+0x54>
         c85e8:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c85ec:	e1a01136 	mov	r1, r6, lsr r1
         c85f0:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c85f4:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c85f8:	eb6907c9 	bl	1b0a524 <TFlashBlock::$Yield(void)>
         c85fc:	e0805005 	add	r5, r0, r5
         c8600:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c8604:	e0806006 	add	r6, r0, r6
         c8608:	e1a00004 	mov	r0, r4
         c860c:	eb68fb78 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c8610:	e1500006 	cmp	r0, r6
         c8614:	8afffff3 	bhi	c85e8 <TFlashStore::Avail(void)+0x24>
         c8618:	e1a00004 	mov	r0, r4
         c861c:	eb000864 	bl	ca7b4 <TFlashStore::InternalStoreSlop(void)>
         c8620:	e1500005 	cmp	r0, r5
         c8624:	9a000016 	bls	c8684 <TFlashStore::Avail(void)+0xc0>
         c8628:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c862c:	e3300000 	teq	r0, #0	; 0x0
         c8630:	0a000013 	beq	c8684 <TFlashStore::Avail(void)+0xc0>
         c8634:	e1a00004 	mov	r0, r4
         c8638:	eb00057b 	bl	c9c2c <TFlashStore::GC(void)>
         c863c:	e3a05000 	mov	r5, #0	; 0x0
         c8640:	e3a06000 	mov	r6, #0	; 0x0
         c8644:	e1a00004 	mov	r0, r4
         c8648:	eb68fb69 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c864c:	e3500000 	cmp	r0, #0	; 0x0
         c8650:	9a00000b 	bls	c8684 <TFlashStore::Avail(void)+0xc0>
         c8654:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c8658:	e1a01136 	mov	r1, r6, lsr r1
         c865c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c8660:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c8664:	eb6907ae 	bl	1b0a524 <TFlashBlock::$Yield(void)>
         c8668:	e0805005 	add	r5, r0, r5
         c866c:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c8670:	e0806006 	add	r6, r0, r6
         c8674:	e1a00004 	mov	r0, r4
         c8678:	eb68fb5d 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c867c:	e1500006 	cmp	r0, r6
         c8680:	8afffff3 	bhi	c8654 <TFlashStore::Avail(void)+0x90>
         c8684:	e1a00005 	mov	r0, r5
         c8688:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::ValidateIncomingPSSID(unsigned long)
 * Address: 000c868c
 */
TFlashStore::ValidateIncomingPSSID(unsigned long) {
    /*
         c868c:	e3310000 	teq	r1, #0	; 0x0
         c8690:	0a000004 	beq	c86a8 <TFlashStore::ValidateIncomingPSSID(unsigned long)+0x1c>
         c8694:	e5902060 	ldr	r2, [r0, #96]	; fField96
         c8698:	e5900054 	ldr	r0, [r0, #84]	; fField84
         c869c:	e1500231 	cmp	r0, r1, lsr r2
         c86a0:	83a00000 	movhi	r0, #0	; 0x0
         c86a4:	81a0f00e 	movhi	pc, lr
         c86a8:	e3a00fa2 	mov	r0, #648	; 0x288
         c86ac:	e2400b0b 	sub	r0, r0, #11264	; 0x2c00
         c86b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::IsReadOnly(unsigned char *)
 * Address: 000c86b4
 */
TFlashStore::IsReadOnly(unsigned char *) {
    /*
         c86b4:	e1a0c00d 	mov	ip, sp
         c86b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c86bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         c86c0:	e1a04000 	mov	r4, r0
         c86c4:	e1a05001 	mov	r5, r1
         c86c8:	eb69037c 	bl	1b094c0 <TFlashStore::$VccOn(void)>
         c86cc:	e5d40015 	ldrb	r0, [r4, #21]	; fField21
         c86d0:	e3300000 	teq	r0, #0	; 0x0
         c86d4:	15940010 	ldrne	r0, [r4, #16]	; fField16
         c86d8:	13300000 	teqne	r0, #0	; 0x0
         c86dc:	0a000003 	beq	c86f0 <TFlashStore::IsReadOnly(unsigned char *)+0x3c>
         c86e0:	eb0af79f 	bl	386564 <TFlash::GetAttributes(void)>
         c86e4:	e3100080 	tst	r0, #128	; 0x80
         c86e8:	13a00001 	movne	r0, #1	; 0x1
         c86ec:	1a000000 	bne	c86f4 <TFlashStore::IsReadOnly(unsigned char *)+0x40>
         c86f0:	e3a00000 	mov	r0, #0	; 0x0
         c86f4:	e3300000 	teq	r0, #0	; 0x0
         c86f8:	1a000007 	bne	c871c <TFlashStore::IsReadOnly(unsigned char *)+0x68>
         c86fc:	e1a00004 	mov	r0, r4
         c8700:	eb68da03 	bl	1afef14 <TFlashStore::$IsROM(void)>
         c8704:	e3300000 	teq	r0, #0	; 0x0
         c8708:	1a000003 	bne	c871c <TFlashStore::IsReadOnly(unsigned char *)+0x68>
         c870c:	e1a00004 	mov	r0, r4
         c8710:	eb68da0d 	bl	1afef4c <TFlashStore::$IsWriteProtected(void)>
         c8714:	e3300000 	teq	r0, #0	; 0x0
         c8718:	0a000001 	beq	c8724 <TFlashStore::IsReadOnly(unsigned char *)+0x70>
         c871c:	e3a00001 	mov	r0, #1	; 0x1
         c8720:	ea000000 	b	c8728 <TFlashStore::IsReadOnly(unsigned char *)+0x74>
         c8724:	e3a00000 	mov	r0, #0	; 0x0
         c8728:	e5c50000 	strb	r0, [r5]
         c872c:	e1a00004 	mov	r0, r4
         c8730:	eb690361 	bl	1b094bc <TFlashStore::$VccOff(void)>
         c8734:	e3a00000 	mov	r0, #0	; 0x0
         c8738:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::LockStore(void)
 * Address: 000c873c
 */
TFlashStore::LockStore(void) {
    /*
         c873c:	e5901074 	ldr	r1, [r0, #116]	; fField116
         c8740:	e2811001 	add	r1, r1, #1	; 0x1
         c8744:	e5a01074 	str	r1, [r0, #116]!	; fField116
         c8748:	e3a00000 	mov	r0, #0	; 0x0
         c874c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::UnlockStore(void)
 * Address: 000c8750
 */
TFlashStore::UnlockStore(void) {
    /*
         c8750:	e1a0c00d 	mov	ip, sp
         c8754:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c8758:	e24cb004 	sub	fp, ip, #4	; 0x4
         c875c:	e1a04000 	mov	r4, r0
         c8760:	e3a00000 	mov	r0, #0	; 0x0
         c8764:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         c8768:	e5940074 	ldr	r0, [r4, #116]	; fField116
         c876c:	e3300001 	teq	r0, #1	; 0x1
         c8770:	1a000026 	bne	c8810 <TFlashStore::UnlockStore(void)+0xc0>
         c8774:	e5d41016 	ldrb	r1, [r4, #22]	; fField22
         c8778:	e3310000 	teq	r1, #0	; 0x0
         c877c:	0a000025 	beq	c8818 <TFlashStore::UnlockStore(void)+0xc8>
         c8780:	e1a00004 	mov	r0, r4
         c8784:	eb690352 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         c8788:	e3a05000 	mov	r5, #0	; 0x0
         c878c:	e52d506c 	str	r5, [sp, -#108]!	; fField108
         c8790:	e28d0008 	add	r0, sp, #8	; 0x8
         c8794:	eb6ba876 	bl	1bb2974 <$setjmp>
         c8798:	e3300000 	teq	r0, #0	; 0x0
         c879c:	1a000008 	bne	c87c4 <TFlashStore::UnlockStore(void)+0x74>
         c87a0:	e1a0000d 	mov	r0, sp
         c87a4:	eb6c5e34 	bl	1be007c <$AddExceptionHandler>
         c87a8:	e1a00004 	mov	r0, r4
         c87ac:	eb68ddfa 	bl	1afff9c <TFlashStore::$MarkCommitPoint(void)>
         c87b0:	e1a00004 	mov	r0, r4
         c87b4:	e3a01001 	mov	r1, #1	; 0x1
         c87b8:	eb68bcf1 	bl	1af7b84 <TFlashStore::$DoCommit(unsigned char)>
         c87bc:	e5845074 	str	r5, [r4, #116]	; fField116
         c87c0:	ea00000b 	b	c87f4 <TFlashStore::UnlockStore(void)+0xa4>
         c87c4:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c87c8:	e59f103c 	ldr	r1, [pc, #3c]	; c880c <TFlashStore::UnlockStore(void)+0xbc>
         c87cc:	e5911000 	ldr	r1, [r1]
         c87d0:	eb6c6a6f 	bl	1be3194 <$Subexception>
         c87d4:	e3300000 	teq	r0, #0	; 0x0
         c87d8:	0a000003 	beq	c87ec <TFlashStore::UnlockStore(void)+0x9c>
         c87dc:	e1a00004 	mov	r0, r4
         c87e0:	eb690338 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c87e4:	e5845080 	str	r5, [r4, #128]	; fField128
         c87e8:	e584507c 	str	r5, [r4, #124]	; fField124
         c87ec:	e1a0000d 	mov	r0, sp
         c87f0:	eb6c6657 	bl	1be2154 <$NextHandler>
         c87f4:	e1a0000d 	mov	r0, sp
         c87f8:	eb6c622e 	bl	1be10b8 <$ExitHandler>
         c87fc:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c8800:	e1a00004 	mov	r0, r4
         c8804:	eb69032f 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c8808:	ea000004 	b	c8820 <TFlashStore::UnlockStore(void)+0xd0>
         c880c:	003712b4 	ldreqh	r1, [r7], -r4
         c8810:	e3300000 	teq	r0, #0	; 0x0
         c8814:	0a000001 	beq	c8820 <TFlashStore::UnlockStore(void)+0xd0>
         c8818:	e2400001 	sub	r0, r0, #1	; 0x1
         c881c:	e5a40074 	str	r0, [r4, #116]!	; fField116
         c8820:	e49d0004 	ldr	r0, [sp], #4	; fField4
         c8824:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::Abort(void)
 * Address: 000c8828
 */
TFlashStore::Abort(void) {
    /*
         c8828:	e1a0c00d 	mov	ip, sp
         c882c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c8830:	e24cb004 	sub	fp, ip, #4	; 0x4
         c8834:	e1a04000 	mov	r4, r0
         c8838:	e3a00000 	mov	r0, #0	; 0x0
         c883c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         c8840:	e5d40016 	ldrb	r0, [r4, #22]	; fField22
         c8844:	e3a05000 	mov	r5, #0	; 0x0
         c8848:	e3300000 	teq	r0, #0	; 0x0
         c884c:	0a00001e 	beq	c88cc <TFlashStore::Abort(void)+0xa4>
         c8850:	e1a00004 	mov	r0, r4
         c8854:	eb69031e 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         c8858:	e52d506c 	str	r5, [sp, -#108]!	; fField108
         c885c:	e28d0008 	add	r0, sp, #8	; 0x8
         c8860:	eb6ba843 	bl	1bb2974 <$setjmp>
         c8864:	e3300000 	teq	r0, #0	; 0x0
         c8868:	1a000006 	bne	c8888 <TFlashStore::Abort(void)+0x60>
         c886c:	e1a0000d 	mov	r0, sp
         c8870:	eb6c5e01 	bl	1be007c <$AddExceptionHandler>
         c8874:	e1a00004 	mov	r0, r4
         c8878:	e3a01000 	mov	r1, #0	; 0x0
         c887c:	eb69073d 	bl	1b0a578 <TFlashStore::$DoAbort(unsigned char)>
         c8880:	e58d006c 	str	r0, [sp, #108]	; fField108
         c8884:	ea00000b 	b	c88b8 <TFlashStore::Abort(void)+0x90>
         c8888:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c888c:	e59f1044 	ldr	r1, [pc, #44]	; c88d8 <TFlashStore::Abort(void)+0xb0>	; fField44
         c8890:	e5911000 	ldr	r1, [r1]
         c8894:	eb6c6a3e 	bl	1be3194 <$Subexception>
         c8898:	e3300000 	teq	r0, #0	; 0x0
         c889c:	0a000003 	beq	c88b0 <TFlashStore::Abort(void)+0x88>
         c88a0:	e1a00004 	mov	r0, r4
         c88a4:	eb690307 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c88a8:	e5845080 	str	r5, [r4, #128]	; fField128
         c88ac:	e584507c 	str	r5, [r4, #124]	; fField124
         c88b0:	e1a0000d 	mov	r0, sp
         c88b4:	eb6c6626 	bl	1be2154 <$NextHandler>
         c88b8:	e1a0000d 	mov	r0, sp
         c88bc:	eb6c61fd 	bl	1be10b8 <$ExitHandler>
         c88c0:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c88c4:	e1a00004 	mov	r0, r4
         c88c8:	eb6902fe 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c88cc:	e5a45074 	str	r5, [r4, #116]!	; fField116
         c88d0:	e49d0004 	ldr	r0, [sp], #4	; fField4
         c88d4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         c88d8:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::Format(void)
 * Address: 000c88dc
 */
TFlashStore::Format(void) {
    /*
         c88dc:	e1a0c00d 	mov	ip, sp
         c88e0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c88e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         c88e8:	e1a04000 	mov	r4, r0
         c88ec:	e24dd010 	sub	sp, sp, #16	; 0x10
         c88f0:	e1a0000d 	mov	r0, sp
         c88f4:	eb6c2c37 	bl	1bd39d8 <$GetGlobalTime>
         c88f8:	e28d0008 	add	r0, sp, #8	; 0x8
         c88fc:	e89d5000 	ldmia	sp, {ip, lr}
         c8900:	e8805000 	stmia	r0, {ip, lr}
         c8904:	e1a00004 	mov	r0, r4
         c8908:	eb6902f1 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         c890c:	e24dd004 	sub	sp, sp, #4	; 0x4
         c8910:	e1a0100d 	mov	r1, sp
         c8914:	e1a00004 	mov	r0, r4
         c8918:	eb68d577 	bl	1afdefc <TFlashStore::$IsReadOnly(unsigned char *)>
         c891c:	e5dd0000 	ldrb	r0, [sp]
         c8920:	e3a06000 	mov	r6, #0	; 0x0
         c8924:	e3300000 	teq	r0, #0	; 0x0
         c8928:	159f506c 	ldrne	r5, [pc, #6c]	; c899c <TFlashStore::Format(void)+0xc0>
         c892c:	1a0000d1 	bne	c8c78 <TFlashStore::Format(void)+0x39c>
         c8930:	e28dd004 	add	sp, sp, #4	; 0x4
         c8934:	e3a08001 	mov	r8, #1	; 0x1
         c8938:	e5c48094 	strb	r8, [r4, #148]	; fField148
         c893c:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c8940:	e3300000 	teq	r0, #0	; 0x0
         c8944:	0a000067 	beq	c8ae8 <TFlashStore::Format(void)+0x20c>
         c8948:	e52d606c 	str	r6, [sp, -#108]!	; fField108
         c894c:	e28d0008 	add	r0, sp, #8	; 0x8
         c8950:	eb6ba807 	bl	1bb2974 <$setjmp>
         c8954:	e3300000 	teq	r0, #0	; 0x0
         c8958:	1a000059 	bne	c8ac4 <TFlashStore::Format(void)+0x1e8>
         c895c:	e1a0000d 	mov	r0, sp
         c8960:	eb6c5dc5 	bl	1be007c <$AddExceptionHandler>
         c8964:	e5940078 	ldr	r0, [r4, #120]	; fField120
         c8968:	e3300000 	teq	r0, #0	; 0x0
         c896c:	0a00005a 	beq	c8adc <TFlashStore::Format(void)+0x200>
         c8970:	eb0af6a6 	bl	386410 <TCardHandler::CardStatus(void)>
         c8974:	e2100003 	ands	r0, r0, #3	; 0x3
         c8978:	0a000003 	beq	c898c <TFlashStore::Format(void)+0xb0>
         c897c:	e3300001 	teq	r0, #1	; 0x1
         c8980:	0a000006 	beq	c89a0 <TFlashStore::Format(void)+0xc4>
         c8984:	e3300002 	teq	r0, #2	; 0x2
         c8988:	1a000004 	bne	c89a0 <TFlashStore::Format(void)+0xc4>
         c898c:	e3a05086 	mov	r5, #134	; 0x86
         c8990:	e2455c2a 	sub	r5, r5, #10752	; 0x2a00
         c8994:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c8998:	ea00014e 	b	c8ed8 <TFlashStore::Format(void)+0x5fc>
         c899c:	ffffd693 	swinv	0x00ffd693
         c89a0:	e5940078 	ldr	r0, [r4, #120]	; fField120
         c89a4:	e3300000 	teq	r0, #0	; 0x0
         c89a8:	0a00004b 	beq	c8adc <TFlashStore::Format(void)+0x200>
         c89ac:	e24dd0d8 	sub	sp, sp, #216	; 0xd8
         c89b0:	e28d00c8 	add	r0, sp, #200	; 0xc8
         c89b4:	eb6c1333 	bl	1bcd688 <TUNameServer::$__ct(void)>
         c89b8:	e1a05006 	mov	r5, r6
         c89bc:	e5cd60c0 	strb	r6, [sp, #192]
         c89c0:	e58d60bc 	str	r6, [sp, #188]
         c89c4:	e28d0004 	add	r0, sp, #4	; 0x4
         c89c8:	eb6c0f29 	bl	1bcc674 <TCardMessage::$__ct(void)>
         c89cc:	e1a0300d 	mov	r3, sp
         c89d0:	e92d0008 	stmdb	sp!, {r3}
         c89d4:	e28d30c8 	add	r3, sp, #200	; 0xc8
         c89d8:	e28d00cc 	add	r0, sp, #204	; 0xcc
         c89dc:	e28f2f2b 	add	r2, pc, #172	; 0xac
         c89e0:	e28f1f2c 	add	r1, pc, #176	; 0xb0
         c89e4:	eb6c385c 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
         c89e8:	e28dd004 	add	sp, sp, #4	; 0x4
         c89ec:	e28d0004 	add	r0, sp, #4	; 0x4
         c89f0:	e3a03000 	mov	r3, #0	; 0x0
         c89f4:	e3a0103c 	mov	r1, #60	; 0x3c
         c89f8:	e594201c 	ldr	r2, [r4, #28]	; fField28
         c89fc:	eb6c385a 	bl	1bd6b6c <TCardMessage::$MessageStuff(unsigned long, unsigned long, unsigned long)>
         c8a00:	e59d10c4 	ldr	r1, [sp, #196]
         c8a04:	e28d00bc 	add	r0, sp, #188	; 0xbc
         c8a08:	eb6c1f8e 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         c8a0c:	e28d0004 	add	r0, sp, #4	; 0x4
         c8a10:	e3a010b8 	mov	r1, #184	; 0xb8
         c8a14:	e3a02000 	mov	r2, #0	; 0x0
         c8a18:	e3a0c000 	mov	ip, #0	; 0x0
         c8a1c:	e3a03000 	mov	r3, #0	; 0x0
         c8a20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         c8a24:	e1a03005 	mov	r3, r5
         c8a28:	e1a0100c 	mov	r1, ip
         c8a2c:	e3a000b8 	mov	r0, #184	; 0xb8
         c8a30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         c8a34:	e28d3024 	add	r3, sp, #36	; 0x24
         c8a38:	e92d0008 	stmdb	sp!, {r3}
         c8a3c:	e28d3024 	add	r3, sp, #36	; 0x24
         c8a40:	e28d00e0 	add	r0, sp, #224	; 0xe0
         c8a44:	e3a02002 	mov	r2, #2	; 0x2
         c8a48:	e3a01001 	mov	r1, #1	; 0x1
         c8a4c:	eb6c48be 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         c8a50:	e28dd024 	add	sp, sp, #36	; 0x24
         c8a54:	e1b05000 	movs	r5, r0
         c8a58:	059d5010 	ldreq	r5, [sp, #16]	; fField16
         c8a5c:	03350000 	teqeq	r5, #0	; 0x0
         c8a60:	e28d0004 	add	r0, sp, #4	; 0x4
         c8a64:	e3a01000 	mov	r1, #0	; 0x0
         c8a68:	0a00000c 	beq	c8aa0 <TFlashStore::Format(void)+0x1c4>
         c8a6c:	eb6c1321 	bl	1bcd6f8 <TCardMessage::$__dt(void)>
         c8a70:	e28d00bc 	add	r0, sp, #188	; 0xbc
         c8a74:	e3a01000 	mov	r1, #0	; 0x0
         c8a78:	eb6c1729 	bl	1bce724 <TUObject::$__dt(void)>
         c8a7c:	e28d00c8 	add	r0, sp, #200	; 0xc8
         c8a80:	e3a01000 	mov	r1, #0	; 0x0
         c8a84:	eb6c171e 	bl	1bce704 <TUNameServer::$__dt(void)>
         c8a88:	e28ddf51 	add	sp, sp, #324	; 0x144
         c8a8c:	ea000111 	b	c8ed8 <TFlashStore::Format(void)+0x5fc>
         c8a90:	5455506f 	ldrplb	r5, [r5], -#111
         c8a94:	72740000 	rsbvcs	r0, r4, #0	; 0x0
         c8a98:	63647376 	cmnvs	r4, #-671088639	; 0xd8000001
         c8a9c:	00000000 	andeq	r0, r0, r0
         c8aa0:	eb6c1314 	bl	1bcd6f8 <TCardMessage::$__dt(void)>
         c8aa4:	e28d00bc 	add	r0, sp, #188	; 0xbc
         c8aa8:	e3a01000 	mov	r1, #0	; 0x0
         c8aac:	eb6c171c 	bl	1bce724 <TUObject::$__dt(void)>
         c8ab0:	e28d00c8 	add	r0, sp, #200	; 0xc8
         c8ab4:	e3a01000 	mov	r1, #0	; 0x0
         c8ab8:	eb6c1711 	bl	1bce704 <TUNameServer::$__dt(void)>
         c8abc:	e28dd0d8 	add	sp, sp, #216	; 0xd8
         c8ac0:	ea000005 	b	c8adc <TFlashStore::Format(void)+0x200>
         c8ac4:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c8ac8:	e24f1f0d 	sub	r1, pc, #52	; 0x34
         c8acc:	eb6c69b0 	bl	1be3194 <$Subexception>
         c8ad0:	e3300000 	teq	r0, #0	; 0x0
         c8ad4:	01a0000d 	moveq	r0, sp
         c8ad8:	0b6c659d 	bleq	1be2154 <$NextHandler>
         c8adc:	e1a0000d 	mov	r0, sp
         c8ae0:	eb6c6174 	bl	1be10b8 <$ExitHandler>
         c8ae4:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c8ae8:	e5848074 	str	r8, [r4, #116]	; fField116
         c8aec:	e5940010 	ldr	r0, [r4, #16]	; fField16
         c8af0:	e3300000 	teq	r0, #0	; 0x0
         c8af4:	1b0af68b 	blne	386528 <TFlash::AcknowledgeReset(void)>
         c8af8:	e594008c 	ldr	r0, [r4, #140]	; fField140
         c8afc:	e3300000 	teq	r0, #0	; 0x0
         c8b00:	0a00001b 	beq	c8b74 <TFlashStore::Format(void)+0x298>
         c8b04:	eb68ccb5 	bl	1afbde0 <SCompactState::$Init(void)>
         c8b08:	e5d40091 	ldrb	r0, [r4, #145]	; fField145
         c8b0c:	e3300000 	teq	r0, #0	; 0x0
         c8b10:	0a00000d 	beq	c8b4c <TFlashStore::Format(void)+0x270>
         c8b14:	e3a00002 	mov	r0, #2	; 0x2
         c8b18:	eb6ce15f 	bl	1c0109c <$InternalStoreInfo>
         c8b1c:	e1a03000 	mov	r3, r0
         c8b20:	e92d0008 	stmdb	sp!, {r3}
         c8b24:	e3a00003 	mov	r0, #3	; 0x3
         c8b28:	eb6ce15b 	bl	1c0109c <$InternalStoreInfo>
         c8b2c:	e1a05000 	mov	r5, r0
         c8b30:	e1a00004 	mov	r0, r4
         c8b34:	eb68fa2e 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c8b38:	e1a02000 	mov	r2, r0
         c8b3c:	e1a03005 	mov	r3, r5
         c8b40:	e5940088 	ldr	r0, [r4, #136]	; fField136
         c8b44:	e5941018 	ldr	r1, [r4, #24]	; fField24
         c8b48:	ea000007 	b	c8b6c <TFlashStore::Format(void)+0x290>
         c8b4c:	e3a03000 	mov	r3, #0	; 0x0
         c8b50:	e92d0008 	stmdb	sp!, {r3}
         c8b54:	e1a00004 	mov	r0, r4
         c8b58:	eb68fa25 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c8b5c:	e1a02000 	mov	r2, r0
         c8b60:	e3a03000 	mov	r3, #0	; 0x0
         c8b64:	e5940088 	ldr	r0, [r4, #136]	; fField136
         c8b68:	e5941018 	ldr	r1, [r4, #24]	; fField24
         c8b6c:	eb68cc99 	bl	1afbdd8 <TStoreDriver::$Init(char *, unsigned long, char *, unsigned long)>
         c8b70:	e28dd004 	add	sp, sp, #4	; 0x4
         c8b74:	e5940058 	ldr	r0, [r4, #88]	; fField88
         c8b78:	e1a00036 	mov	r0, r6, lsr r0
         c8b7c:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c8b80:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         c8b84:	eb68d8f6 	bl	1afef64 <TFlashBlock::$LogEntryOffset(void)>
         c8b88:	e3300000 	teq	r0, #0	; 0x0
         c8b8c:	0a000007 	beq	c8bb0 <TFlashStore::Format(void)+0x2d4>
         c8b90:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c8b94:	e1a01136 	mov	r1, r6, lsr r1
         c8b98:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c8b9c:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c8ba0:	eb68d8ef 	bl	1afef64 <TFlashBlock::$LogEntryOffset(void)>
         c8ba4:	e1a01000 	mov	r1, r0
         c8ba8:	e1a00004 	mov	r0, r4
         c8bac:	eb69065f 	bl	1b0a530 <TFlashStore::$ZapLogEntry(unsigned long)>
         c8bb0:	e3a00000 	mov	r0, #0	; 0x0
         c8bb4:	e3a09020 	mov	r9, #32	; 0x20
         c8bb8:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         c8bbc:	e59fa030 	ldr	sl, [pc, #30]	; c8bf4 <TFlashStore::Format(void)+0x318>
         c8bc0:	e3a03000 	mov	r3, #0	; 0x0
         c8bc4:	e92d0008 	stmdb	sp!, {r3}
         c8bc8:	e28d2004 	add	r2, sp, #4	; 0x4
         c8bcc:	e1a00004 	mov	r0, r4
         c8bd0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         c8bd4:	eb690660 	bl	1b0a55c <TFlashStore::$NextLogEntry(unsigned long, unsigned long *, unsigned long, void *)>
         c8bd8:	e28dd004 	add	sp, sp, #4	; 0x4
         c8bdc:	e1b05000 	movs	r5, r0
         c8be0:	0a000004 	beq	c8bf8 <TFlashStore::Format(void)+0x31c>
         c8be4:	e285cda5 	add	ip, r5, #10560	; 0x2940
         c8be8:	e37c0032 	cmn	ip, #50	; 0x32
         c8bec:	0a000023 	beq	c8c80 <TFlashStore::Format(void)+0x3a4>
         c8bf0:	ea000020 	b	c8c78 <TFlashStore::Format(void)+0x39c>
         c8bf4:	7a626c6b 	bvc	1963da8 <ROM$$Size+0x124415c>
         c8bf8:	e3a07001 	mov	r7, #1	; 0x1
         c8bfc:	e24dd030 	sub	sp, sp, #48	; 0x30
         c8c00:	e1a03009 	mov	r3, r9
         c8c04:	e59d1030 	ldr	r1, [sp, #48]	; fField48
         c8c08:	e1a0200d 	mov	r2, sp
         c8c0c:	e1a00004 	mov	r0, r4
         c8c10:	eb68ab68 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c8c14:	e1b05000 	movs	r5, r0
         c8c18:	1a000009 	bne	c8c44 <TFlashStore::Format(void)+0x368>
         c8c1c:	e59d000c 	ldr	r0, [sp, #12]
         c8c20:	e130000a 	teq	r0, sl
         c8c24:	1a00000b 	bne	c8c58 <TFlashStore::Format(void)+0x37c>
         c8c28:	e3a03030 	mov	r3, #48	; 0x30
         c8c2c:	e59d1030 	ldr	r1, [sp, #48]	; fField48
         c8c30:	e1a0200d 	mov	r2, sp
         c8c34:	e1a00004 	mov	r0, r4
         c8c38:	eb68ab5e 	bl	1af39b8 <TFlashStore::$BasicRead(unsigned long, void *, unsigned long)>
         c8c3c:	e1b05000 	movs	r5, r0
         c8c40:	0a000001 	beq	c8c4c <TFlashStore::Format(void)+0x370>
         c8c44:	e28dd034 	add	sp, sp, #52	; 0x34
         c8c48:	ea0000a2 	b	c8ed8 <TFlashStore::Format(void)+0x5fc>
         c8c4c:	e59d0028 	ldr	r0, [sp, #40]	; fField40
         c8c50:	e3100001 	tst	r0, #1	; 0x1
         c8c54:	13a07000 	movne	r7, #0	; 0x0
         c8c58:	e28dd030 	add	sp, sp, #48	; 0x30
         c8c5c:	e3370000 	teq	r7, #0	; 0x0
         c8c60:	0affffd6 	beq	c8bc0 <TFlashStore::Format(void)+0x2e4>
         c8c64:	e1a00004 	mov	r0, r4
         c8c68:	e59d1000 	ldr	r1, [sp]
         c8c6c:	eb69062f 	bl	1b0a530 <TFlashStore::$ZapLogEntry(unsigned long)>
         c8c70:	e1b05000 	movs	r5, r0
         c8c74:	0affffd1 	beq	c8bc0 <TFlashStore::Format(void)+0x2e4>
         c8c78:	e28dd004 	add	sp, sp, #4	; 0x4
         c8c7c:	ea000095 	b	c8ed8 <TFlashStore::Format(void)+0x5fc>
         c8c80:	e28dd004 	add	sp, sp, #4	; 0x4
         c8c84:	e1a00004 	mov	r0, r4
         c8c88:	e3a01000 	mov	r1, #0	; 0x0
         c8c8c:	eb68d493 	bl	1afdee0 <TFlashStore::$IsErased(unsigned long)>
         c8c90:	e3300000 	teq	r0, #0	; 0x0
         c8c94:	1a000004 	bne	c8cac <TFlashStore::Format(void)+0x3d0>
         c8c98:	e1a00004 	mov	r0, r4
         c8c9c:	e3a01000 	mov	r1, #0	; 0x0
         c8ca0:	eb68fddc 	bl	1b08418 <TFlashStore::$SyncErase(unsigned long)>
         c8ca4:	e1b05000 	movs	r5, r0
         c8ca8:	1a00008a 	bne	c8ed8 <TFlashStore::Format(void)+0x5fc>
         c8cac:	e5941050 	ldr	r1, [r4, #80]	; fField80
         c8cb0:	e1a00004 	mov	r0, r4
         c8cb4:	eb68d489 	bl	1afdee0 <TFlashStore::$IsErased(unsigned long)>
         c8cb8:	e3300000 	teq	r0, #0	; 0x0
         c8cbc:	1a000004 	bne	c8cd4 <TFlashStore::Format(void)+0x3f8>
         c8cc0:	e5941050 	ldr	r1, [r4, #80]	; fField80
         c8cc4:	e1a00004 	mov	r0, r4
         c8cc8:	eb68fdd2 	bl	1b08418 <TFlashStore::$SyncErase(unsigned long)>
         c8ccc:	e1b05000 	movs	r5, r0
         c8cd0:	1a000080 	bne	c8ed8 <TFlashStore::Format(void)+0x5fc>
         c8cd4:	e24dd04c 	sub	sp, sp, #76	; 0x4c
         c8cd8:	e5848020 	str	r8, [r4, #32]	; fField32
         c8cdc:	e58d6020 	str	r6, [sp, #32]	; fField32
         c8ce0:	e58d6018 	str	r6, [sp, #24]	; fField24
         c8ce4:	e58d6028 	str	r6, [sp, #40]	; fField40
         c8ce8:	e58d8024 	str	r8, [sp, #36]	; fField36
         c8cec:	e58d602c 	str	r6, [sp, #44]	; fField44
         c8cf0:	e58d6030 	str	r6, [sp, #48]	; fField48
         c8cf4:	eb6baf5b 	bl	1bb4a68 <$rand>
         c8cf8:	e58d0034 	str	r0, [sp, #52]	; fField52
         c8cfc:	e28d0054 	add	r0, sp, #84	; 0x54
         c8d00:	e3a019e1 	mov	r1, #3686400	; 0x384000
         c8d04:	eb6c1eca 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
         c8d08:	e58d0038 	str	r0, [sp, #56]	; fField56
         c8d0c:	e59d0028 	ldr	r0, [sp, #40]	; fField40
         c8d10:	e2800004 	add	r0, r0, #4	; 0x4
         c8d14:	e58d003c 	str	r0, [sp, #60]	; fField60
         c8d18:	e58d6044 	str	r6, [sp, #68]	; fField68
         c8d1c:	e58d6048 	str	r6, [sp, #72]	; fField72
         c8d20:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c8d24:	e3a03000 	mov	r3, #0	; 0x0
         c8d28:	e3a02000 	mov	r2, #0	; 0x0
         c8d2c:	e58d0040 	str	r0, [sp, #64]	; fField64
         c8d30:	e92d000c 	stmdb	sp!, {r2, r3}
         c8d34:	e28d3008 	add	r3, sp, #8	; 0x8
         c8d38:	e1a00004 	mov	r0, r4
         c8d3c:	e3a0204c 	mov	r2, #76	; 0x4c
         c8d40:	e59f7078 	ldr	r7, [pc, #78]	; c8dc0 <TFlashStore::Format(void)+0x4e4>
         c8d44:	e1a01007 	mov	r1, r7
         c8d48:	eb68a6ec 	bl	1af2900 <TFlashStore::$AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)>
         c8d4c:	e28dd008 	add	sp, sp, #8	; 0x8
         c8d50:	e1b05000 	movs	r5, r0
         c8d54:	1a000017 	bne	c8db8 <TFlashStore::Format(void)+0x4dc>
         c8d58:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c8d5c:	e58d0018 	str	r0, [sp, #24]	; fField24
         c8d60:	e58d0028 	str	r0, [sp, #40]	; fField40
         c8d64:	eb6baf3f 	bl	1bb4a68 <$rand>
         c8d68:	e58d0034 	str	r0, [sp, #52]	; fField52
         c8d6c:	e28d0054 	add	r0, sp, #84	; 0x54
         c8d70:	e3a019e1 	mov	r1, #3686400	; 0x384000
         c8d74:	eb6c1eae 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
         c8d78:	e58d0038 	str	r0, [sp, #56]	; fField56
         c8d7c:	e59d0028 	ldr	r0, [sp, #40]	; fField40
         c8d80:	e2800004 	add	r0, r0, #4	; 0x4
         c8d84:	e3a03000 	mov	r3, #0	; 0x0
         c8d88:	e58d003c 	str	r0, [sp, #60]	; fField60
         c8d8c:	e92d0008 	stmdb	sp!, {r3}
         c8d90:	e5943050 	ldr	r3, [r4, #80]	; fField80
         c8d94:	e92d0008 	stmdb	sp!, {r3}
         c8d98:	e28d3008 	add	r3, sp, #8	; 0x8
         c8d9c:	e1a00004 	mov	r0, r4
         c8da0:	e3a0204c 	mov	r2, #76	; 0x4c
         c8da4:	e1a01007 	mov	r1, r7
         c8da8:	eb68a6d4 	bl	1af2900 <TFlashStore::$AddLogEntryToPhysBlock(unsigned long, unsigned long, SFlashLogEntry *, unsigned long, unsigned long *)>
         c8dac:	e28dd008 	add	sp, sp, #8	; 0x8
         c8db0:	e1b05000 	movs	r5, r0
         c8db4:	0a000002 	beq	c8dc4 <TFlashStore::Format(void)+0x4e8>
         c8db8:	e28dd04c 	add	sp, sp, #76	; 0x4c
         c8dbc:	ea000045 	b	c8ed8 <TFlashStore::Format(void)+0x5fc>
         c8dc0:	66626c6b 	strvsbt	r6, [r2], -fp, ror #24	; fField24
         c8dc4:	e28dd04c 	add	sp, sp, #76	; 0x4c
         c8dc8:	e1a00004 	mov	r0, r4
         c8dcc:	eb68dc7a 	bl	1afffbc <TFlashStore::$Mount(void)>
         c8dd0:	e1b05000 	movs	r5, r0
         c8dd4:	1a00003f 	bne	c8ed8 <TFlashStore::Format(void)+0x5fc>
         c8dd8:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c8ddc:	e1a01136 	mov	r1, r6, lsr r1
         c8de0:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c8de4:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c8de8:	e3a01000 	mov	r1, #0	; 0x0
         c8dec:	eb6905ca 	bl	1b0a51c <TFlashBlock::$WriteRootDirectory(unsigned long *)>
         c8df0:	e1b05000 	movs	r5, r0
         c8df4:	1a000037 	bne	c8ed8 <TFlashStore::Format(void)+0x5fc>
         c8df8:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c8dfc:	e5942058 	ldr	r2, [r4, #88]	; fField88
         c8e00:	e1a00230 	mov	r0, r0, lsr r2
         c8e04:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c8e08:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         c8e0c:	e3a01000 	mov	r1, #0	; 0x0
         c8e10:	eb6905c1 	bl	1b0a51c <TFlashBlock::$WriteRootDirectory(unsigned long *)>
         c8e14:	e1b05000 	movs	r5, r0
         c8e18:	1a00002e 	bne	c8ed8 <TFlashStore::Format(void)+0x5fc>
         c8e1c:	e1a00004 	mov	r0, r4
         c8e20:	eb68dc65 	bl	1afffbc <TFlashStore::$Mount(void)>
         c8e24:	e1b05000 	movs	r5, r0
         c8e28:	1a00002a 	bne	c8ed8 <TFlashStore::Format(void)+0x5fc>
         c8e2c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         c8e30:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c8e34:	e59d1000 	ldr	r1, [sp]
         c8e38:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c8e3c:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c8e40:	e1810000 	orr	r0, r1, r0
         c8e44:	e58d0000 	str	r0, [sp]
         c8e48:	e58d4010 	str	r4, [sp, #16]	; fField16
         c8e4c:	e1a00004 	mov	r0, r4
         c8e50:	e1a0100d 	mov	r1, sp
         c8e54:	eb68a299 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c8e58:	e3a03000 	mov	r3, #0	; 0x0
         c8e5c:	e3a02000 	mov	r2, #0	; 0x0
         c8e60:	e1a0100d 	mov	r1, sp
         c8e64:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         c8e68:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c8e6c:	e3300000 	teq	r0, #0	; 0x0
         c8e70:	03a0200b 	moveq	r2, #11	; 0xb
         c8e74:	13a02004 	movne	r2, #4	; 0x4
         c8e78:	e5940058 	ldr	r0, [r4, #88]	; fField88
         c8e7c:	e1a00036 	mov	r0, r6, lsr r0
         c8e80:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c8e84:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         c8e88:	e3a03000 	mov	r3, #0	; 0x0
         c8e8c:	e3a01027 	mov	r1, #39	; 0x27
         c8e90:	eb6905a9 	bl	1b0a53c <TFlashBlock::$AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)>
         c8e94:	e28dd00c 	add	sp, sp, #12	; 0xc
         c8e98:	e1a05000 	mov	r5, r0
         c8e9c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         c8ea0:	e1a0100d 	mov	r1, sp
         c8ea4:	eb68e8c8 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c8ea8:	e28dd01c 	add	sp, sp, #28	; 0x1c
         c8eac:	e3350000 	teq	r5, #0	; 0x0
         c8eb0:	1a000008 	bne	c8ed8 <TFlashStore::Format(void)+0x5fc>
         c8eb4:	e5c46016 	strb	r6, [r4, #22]	; fField22
         c8eb8:	e5c46017 	strb	r6, [r4, #23]	; fField23
         c8ebc:	e5c46092 	strb	r6, [r4, #146]	; fField146
         c8ec0:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c8ec4:	e5806004 	str	r6, [r0, #4]	; fField4
         c8ec8:	e5c0600c 	strb	r6, [r0, #12]
         c8ecc:	e5a06010 	str	r6, [r0, #16]!	; fField16
         c8ed0:	e5846028 	str	r6, [r4, #40]	; fField40
         c8ed4:	e5c46090 	strb	r6, [r4, #144]	; fField144
         c8ed8:	e5c46094 	strb	r6, [r4, #148]	; fField148
         c8edc:	e5846074 	str	r6, [r4, #116]	; fField116
         c8ee0:	e1a00004 	mov	r0, r4
         c8ee4:	eb690177 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c8ee8:	e1a00005 	mov	r0, r5
         c8eec:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::IsLocked(void)
 * Address: 000c8ef0
 */
TFlashStore::IsLocked(void) {
    /*
         c8ef0:	e5900074 	ldr	r0, [r0, #116]	; fField116
         c8ef4:	e1b00000 	movs	r0, r0
         c8ef8:	13a00001 	movne	r0, #1	; 0x1
         c8efc:	e20000ff 	and	r0, r0, #255	; 0xff
         c8f00:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::NextObject(unsigned long, unsigned long *)
 * Address: 000c8f04
 */
TFlashStore::NextObject(unsigned long, unsigned long *) {
    /*
         c8f04:	e3a00000 	mov	r0, #0	; 0x0
         c8f08:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::CheckIntegrity(unsigned long *)
 * Address: 000c8f0c
 */
TFlashStore::CheckIntegrity(unsigned long *) {
    /*
         c8f0c:	e3a00000 	mov	r0, #0	; 0x0
         c8f10:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::SetBuddy(TStore *)
 * Address: 000c8f14
 */
TFlashStore::SetBuddy(TStore *) {
    /*
         c8f14:	e3a00000 	mov	r0, #0	; 0x0
         c8f18:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::StoreKind(void)
 * Address: 000c8f1c
 */
TFlashStore::StoreKind(void) {
    /*
         c8f1c:	e1a0c00d 	mov	ip, sp
         c8f20:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c8f24:	e24cb004 	sub	fp, ip, #4	; 0x4
         c8f28:	e1a04000 	mov	r4, r0
         c8f2c:	e5d00015 	ldrb	r0, [r0, #21]	; fField21
         c8f30:	e3300000 	teq	r0, #0	; 0x0
         c8f34:	028f0f0a 	addeq	r0, pc, #40	; 0x28
         c8f38:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         c8f3c:	e1a00004 	mov	r0, r4
         c8f40:	eb68d7f3 	bl	1afef14 <TFlashStore::$IsROM(void)>
         c8f44:	e3300000 	teq	r0, #0	; 0x0
         c8f48:	128f0f08 	addne	r0, pc, #32	; 0x20
         c8f4c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         c8f50:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c8f54:	e3300000 	teq	r0, #0	; 0x0
         c8f58:	028f0f09 	addeq	r0, pc, #36	; 0x24
         c8f5c:	128f0f0d 	addne	r0, pc, #52	; 0x34
         c8f60:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         c8f64:	496e7465 	stmmidb	lr!, {r0, r2, r5, r6, sl, ip, sp, lr}^
         c8f68:	726e616c 	rsbvc	r6, lr, #27	; 0x1b
         c8f6c:	00000000 	andeq	r0, r0, r0
         c8f70:	4170706c 	cmnmi	r0, ip, rrx
         c8f74:	69636174 	stmvsdb	r3!, {r2, r4, r5, r6, r8, sp, lr}^
         c8f78:	696f6e20 	stmvsdb	pc!, {r5, r9, sl, fp, sp, lr}^
         c8f7c:	63617264 	cmnvs	r1, #1073741830	; 0x40000006
         c8f80:	00000000 	andeq	r0, r0, r0
         c8f84:	466c6173 	undefined
         c8f88:	68207374 	stmvsda	r0!, {r2, r4, r5, r6, r8, r9, ip, sp, lr}
         c8f8c:	6f726167 	swivs	0x00726167
         c8f90:	65206361 	strvs	r6, [r0, -#865]!
         c8f94:	72640000 	rsbvc	r0, r4, #0	; 0x0
         c8f98:	53746f72 	cmnpl	r4, #456	; 0x1c8
         c8f9c:	61676520 	cmnvs	r7, r0, lsr #10
         c8fa0:	63617264 	cmnvs	r1, #1073741830	; 0x40000006
         c8fa4:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TFlashStore::SetStore(TStore *, unsigned long)
 * Address: 000c8fa8
 */
TFlashStore::SetStore(TStore *, unsigned long) {
    /*
         c8fa8:	e3a00000 	mov	r0, #0	; 0x0
         c8fac:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::OwnsObject(unsigned long)
 * Address: 000c8fb0
 */
TFlashStore::OwnsObject(unsigned long) {
    /*
         c8fb0:	e3a00001 	mov	r0, #1	; 0x1
         c8fb4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::Sleep(void)
 * Address: 000c8fb8
 */
TFlashStore::Sleep(void) {
    /*
         c8fb8:	e3a00000 	mov	r0, #0	; 0x0
         c8fbc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::Idle(unsigned char *, unsigned char *)
 * Address: 000c8fc0
 */
TFlashStore::Idle(unsigned char *, unsigned char *) {
    /*
         c8fc0:	e3a00000 	mov	r0, #0	; 0x0
         c8fc4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::Address(unsigned long)
 * Address: 000c8fc8
 */
TFlashStore::Address(unsigned long) {
    /*
         c8fc8:	e3a00000 	mov	r0, #0	; 0x0
         c8fcc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::NeedsFormat(unsigned char *)
 * Address: 000c8fd0
 */
TFlashStore::NeedsFormat(unsigned char *) {
    /*
         c8fd0:	e1a0c00d 	mov	ip, sp
         c8fd4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         c8fd8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c8fdc:	e1a04001 	mov	r4, r1
         c8fe0:	eb68d3ba 	bl	1afded0 <TFlashStore::$InternalNeedsFormat(void)>
         c8fe4:	e5c40000 	strb	r0, [r4]
         c8fe8:	e3a00000 	mov	r0, #0	; 0x0
         c8fec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::IsROM(void)
 * Address: 000c8ff0
 */
TFlashStore::IsROM(void) {
    /*
         c8ff0:	e5d0003f 	ldrb	r0, [r0, #63]	; fField63
         c8ff4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::RecoveryCheck(unsigned char)
 * Address: 000c8ff8
 */
TFlashStore::RecoveryCheck(unsigned char) {
    /*
         c8ff8:	e1a0c00d 	mov	ip, sp
         c8ffc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c9000:	e24cb004 	sub	fp, ip, #4	; 0x4
         c9004:	e1a04000 	mov	r4, r0
         c9008:	e20170ff 	and	r7, r1, #255	; 0xff
         c900c:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         c9010:	e590004c 	ldr	r0, [r0, #76]	; fField76
         c9014:	e59d1000 	ldr	r1, [sp]
         c9018:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c901c:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c9020:	e1810000 	orr	r0, r1, r0
         c9024:	e58d0000 	str	r0, [sp]
         c9028:	e58d4010 	str	r4, [sp, #16]	; fField16
         c902c:	e1a00004 	mov	r0, r4
         c9030:	e1a0100d 	mov	r1, sp
         c9034:	eb68a221 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c9038:	e1a00004 	mov	r0, r4
         c903c:	eb690124 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         c9040:	e5d40092 	ldrb	r0, [r4, #146]	; fField146
         c9044:	e3300000 	teq	r0, #0	; 0x0
         c9048:	0a000003 	beq	c905c <TFlashStore::RecoveryCheck(unsigned char)+0x64>
         c904c:	e1a00004 	mov	r0, r4
         c9050:	eb68dbca 	bl	1afff80 <TFlashStore::$LowLevelRecovery(void)>
         c9054:	e1a00004 	mov	r0, r4
         c9058:	eb68dbd7 	bl	1afffbc <TFlashStore::$Mount(void)>
         c905c:	e24dd004 	sub	sp, sp, #4	; 0x4
         c9060:	e1a0100d 	mov	r1, sp
         c9064:	e1a00004 	mov	r0, r4
         c9068:	eb68fcf4 	bl	1b08440 <TFlashStore::$TransactionState(int *)>
         c906c:	e1b05000 	movs	r5, r0
         c9070:	e3a06000 	mov	r6, #0	; 0x0
         c9074:	0a000006 	beq	c9094 <TFlashStore::RecoveryCheck(unsigned char)+0x9c>
         c9078:	e1a00004 	mov	r0, r4
         c907c:	eb690111 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c9080:	e59d0014 	ldr	r0, [sp, #20]	; fField20
         c9084:	e28d1004 	add	r1, sp, #4	; 0x4
         c9088:	eb68e84f 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c908c:	e1a00005 	mov	r0, r5
         c9090:	ea00000f 	b	c90d4 <TFlashStore::RecoveryCheck(unsigned char)+0xdc>
         c9094:	e59d0000 	ldr	r0, [sp]
         c9098:	e3300000 	teq	r0, #0	; 0x0
         c909c:	05d40096 	ldreqb	r0, [r4, #150]	; fField150
         c90a0:	03300000 	teqeq	r0, #0	; 0x0
         c90a4:	05c46017 	streqb	r6, [r4, #23]	; fField23
         c90a8:	0a000003 	beq	c90bc <TFlashStore::RecoveryCheck(unsigned char)+0xc4>
         c90ac:	e3a00001 	mov	r0, #1	; 0x1
         c90b0:	e5c40017 	strb	r0, [r4, #23]	; fField23
         c90b4:	e3370000 	teq	r7, #0	; 0x0
         c90b8:	1a000006 	bne	c90d8 <TFlashStore::RecoveryCheck(unsigned char)+0xe0>
         c90bc:	e1a00004 	mov	r0, r4
         c90c0:	eb690100 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c90c4:	e59d0014 	ldr	r0, [sp, #20]	; fField20
         c90c8:	e28d1004 	add	r1, sp, #4	; 0x4
         c90cc:	eb68e83e 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c90d0:	e1a00006 	mov	r0, r6
         c90d4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c90d8:	e24dd004 	sub	sp, sp, #4	; 0x4
         c90dc:	e1a0100d 	mov	r1, sp
         c90e0:	e1a00004 	mov	r0, r4
         c90e4:	eb68d384 	bl	1afdefc <TFlashStore::$IsReadOnly(unsigned char *)>
         c90e8:	e5dd0000 	ldrb	r0, [sp]
         c90ec:	e3300000 	teq	r0, #0	; 0x0
         c90f0:	0a000008 	beq	c9118 <TFlashStore::RecoveryCheck(unsigned char)+0x120>
         c90f4:	e1a00004 	mov	r0, r4
         c90f8:	eb6900f2 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c90fc:	e59f4010 	ldr	r4, [pc, #10]	; c9114 <TFlashStore::RecoveryCheck(unsigned char)+0x11c>
         c9100:	e59d0018 	ldr	r0, [sp, #24]	; fField24
         c9104:	e28d1008 	add	r1, sp, #8	; 0x8
         c9108:	eb68e82f 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c910c:	e1a00004 	mov	r0, r4
         c9110:	ea00001d 	b	c918c <TFlashStore::RecoveryCheck(unsigned char)+0x194>
         c9114:	ffffd683 	swinv	0x00ffd683
         c9118:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         c911c:	e3300000 	teq	r0, #0	; 0x0
         c9120:	0a00000c 	beq	c9158 <TFlashStore::RecoveryCheck(unsigned char)+0x160>
         c9124:	e3300001 	teq	r0, #1	; 0x1
         c9128:	0a00000d 	beq	c9164 <TFlashStore::RecoveryCheck(unsigned char)+0x16c>
         c912c:	e3300002 	teq	r0, #2	; 0x2
         c9130:	1a00000f 	bne	c9174 <TFlashStore::RecoveryCheck(unsigned char)+0x17c>
         c9134:	e5d46096 	ldrb	r6, [r4, #150]	; fField150
         c9138:	e1a00004 	mov	r0, r4
         c913c:	e3a01000 	mov	r1, #0	; 0x0
         c9140:	eb68ba8f 	bl	1af7b84 <TFlashStore::$DoCommit(unsigned char)>
         c9144:	e1b05000 	movs	r5, r0
         c9148:	1a000009 	bne	c9174 <TFlashStore::RecoveryCheck(unsigned char)+0x17c>
         c914c:	e3360000 	teq	r6, #0	; 0x0
         c9150:	0a000007 	beq	c9174 <TFlashStore::RecoveryCheck(unsigned char)+0x17c>
         c9154:	ea000002 	b	c9164 <TFlashStore::RecoveryCheck(unsigned char)+0x16c>
         c9158:	e5d40096 	ldrb	r0, [r4, #150]	; fField150
         c915c:	e3300000 	teq	r0, #0	; 0x0
         c9160:	0a000003 	beq	c9174 <TFlashStore::RecoveryCheck(unsigned char)+0x17c>
         c9164:	e1a00004 	mov	r0, r4
         c9168:	e3a01001 	mov	r1, #1	; 0x1
         c916c:	eb690501 	bl	1b0a578 <TFlashStore::$DoAbort(unsigned char)>
         c9170:	e1a05000 	mov	r5, r0
         c9174:	e1a00004 	mov	r0, r4
         c9178:	eb6900d2 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c917c:	e59d0018 	ldr	r0, [sp, #24]	; fField24
         c9180:	e28d1008 	add	r1, sp, #8	; 0x8
         c9184:	eb68e810 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c9188:	e1a00005 	mov	r0, r5
         c918c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::TransactionState(int *)
 * Address: 000c9190
 */
TFlashStore::TransactionState(int *) {
    /*
         c9190:	e1a0c00d 	mov	ip, sp
         c9194:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c9198:	e24cb004 	sub	fp, ip, #4	; 0x4
         c919c:	e1a04000 	mov	r4, r0
         c91a0:	e1a05001 	mov	r5, r1
         c91a4:	e5d0003d 	ldrb	r0, [r0, #61]	; fField61
         c91a8:	e3300000 	teq	r0, #0	; 0x0
         c91ac:	0a000004 	beq	c91c4 <TFlashStore::TransactionState(int *)+0x34>
         c91b0:	e5b4008c 	ldr	r0, [r4, #140]!	; fField140
         c91b4:	e5900008 	ldr	r0, [r0, #8]	; fField8
         c91b8:	e3a04000 	mov	r4, #0	; 0x0
         c91bc:	e5850000 	str	r0, [r5]
         c91c0:	ea00002e 	b	c9280 <TFlashStore::TransactionState(int *)+0xf0>
         c91c4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         c91c8:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c91cc:	e59d1000 	ldr	r1, [sp]
         c91d0:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c91d4:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c91d8:	e1810000 	orr	r0, r1, r0
         c91dc:	e58d0000 	str	r0, [sp]
         c91e0:	e58d4010 	str	r4, [sp, #16]	; fField16
         c91e4:	e1a00004 	mov	r0, r4
         c91e8:	e1a0100d 	mov	r1, sp
         c91ec:	eb68a1b3 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c91f0:	e1a0300d 	mov	r3, sp
         c91f4:	e3a01017 	mov	r1, #23	; 0x17
         c91f8:	e1a00004 	mov	r0, r4
         c91fc:	e3a02000 	mov	r2, #0	; 0x0
         c9200:	eb68d75a 	bl	1afef70 <TFlashStore::$Lookup(unsigned long, int, TObjRef &)>
         c9204:	e1b04000 	movs	r4, r0
         c9208:	e3a00000 	mov	r0, #0	; 0x0
         c920c:	1a000013 	bne	c9260 <TFlashStore::TransactionState(int *)+0xd0>
         c9210:	e24dd004 	sub	sp, sp, #4	; 0x4
         c9214:	e1a0100d 	mov	r1, sp
         c9218:	e28d0004 	add	r0, sp, #4	; 0x4
         c921c:	e3a03004 	mov	r3, #4	; 0x4
         c9220:	e3a02000 	mov	r2, #0	; 0x0
         c9224:	eb68e3c6 	bl	1b02144 <TObjRef::$Read(void *, unsigned long, unsigned long)>
         c9228:	e1b04000 	movs	r4, r0
         c922c:	1a000009 	bne	c9258 <TFlashStore::TransactionState(int *)+0xc8>
         c9230:	e59d0000 	ldr	r0, [sp]
         c9234:	e3300000 	teq	r0, #0	; 0x0
         c9238:	0a000004 	beq	c9250 <TFlashStore::TransactionState(int *)+0xc0>
         c923c:	e59d0000 	ldr	r0, [sp]
         c9240:	e2401001 	sub	r1, r0, #1	; 0x1
         c9244:	e1110000 	tst	r1, r0
         c9248:	e3a00001 	mov	r0, #1	; 0x1
         c924c:	1a000000 	bne	c9254 <TFlashStore::TransactionState(int *)+0xc4>
         c9250:	e3a00002 	mov	r0, #2	; 0x2
         c9254:	e5850000 	str	r0, [r5]
         c9258:	e28dd004 	add	sp, sp, #4	; 0x4
         c925c:	ea000003 	b	c9270 <TFlashStore::TransactionState(int *)+0xe0>
         c9260:	e284cda5 	add	ip, r4, #10560	; 0x2940
         c9264:	e37c002e 	cmn	ip, #46	; 0x2e
         c9268:	03a04000 	moveq	r4, #0	; 0x0
         c926c:	05850000 	streq	r0, [r5]
         c9270:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         c9274:	e1a0100d 	mov	r1, sp
         c9278:	eb68e7d3 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c927c:	e28dd01c 	add	sp, sp, #28	; 0x1c
         c9280:	e1a00004 	mov	r0, r4
         c9284:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::StartTransaction(void)
 * Address: 000c9288
 */
TFlashStore::StartTransaction(void) {
    /*
         c9288:	e1a0c00d 	mov	ip, sp
         c928c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c9290:	e24cb004 	sub	fp, ip, #4	; 0x4
         c9294:	e1a04000 	mov	r4, r0
         c9298:	e3a05000 	mov	r5, #0	; 0x0
         c929c:	e5d0003d 	ldrb	r0, [r0, #61]	; fField61
         c92a0:	e3a06001 	mov	r6, #1	; 0x1
         c92a4:	e3300000 	teq	r0, #0	; 0x0
         c92a8:	1594008c 	ldrne	r0, [r4, #140]	; fField140
         c92ac:	15a06008 	strne	r6, [r0, #8]!	; fField8
         c92b0:	1a00001e 	bne	c9330 <TFlashStore::StartTransaction(void)+0xa8>
         c92b4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         c92b8:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c92bc:	e59d1000 	ldr	r1, [sp]
         c92c0:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c92c4:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c92c8:	e1810000 	orr	r0, r1, r0
         c92cc:	e58d0000 	str	r0, [sp]
         c92d0:	e58d4010 	str	r4, [sp, #16]	; fField16
         c92d4:	e1a00004 	mov	r0, r4
         c92d8:	e1a0100d 	mov	r1, sp
         c92dc:	eb68a177 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c92e0:	e3a03000 	mov	r3, #0	; 0x0
         c92e4:	e3a02000 	mov	r2, #0	; 0x0
         c92e8:	e1a0100d 	mov	r1, sp
         c92ec:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         c92f0:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c92f4:	e3300000 	teq	r0, #0	; 0x0
         c92f8:	03a0200a 	moveq	r2, #10	; 0xa
         c92fc:	13a02003 	movne	r2, #3	; 0x3
         c9300:	e1a00004 	mov	r0, r4
         c9304:	e3a03004 	mov	r3, #4	; 0x4
         c9308:	e3a01017 	mov	r1, #23	; 0x17
         c930c:	eb690497 	bl	1b0a570 <TFlashStore::$AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)>
         c9310:	e28dd00c 	add	sp, sp, #12	; 0xc
         c9314:	e1a05000 	mov	r5, r0
         c9318:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         c931c:	e1a0100d 	mov	r1, sp
         c9320:	eb68e7a9 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c9324:	e28dd01c 	add	sp, sp, #28	; 0x1c
         c9328:	e3350000 	teq	r5, #0	; 0x0
         c932c:	1a000000 	bne	c9334 <TFlashStore::StartTransaction(void)+0xac>
         c9330:	e5c46016 	strb	r6, [r4, #22]	; fField22
         c9334:	e1a00005 	mov	r0, r5
         c9338:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::DeleteTransactionRecord(void)
 * Address: 000c933c
 */
TFlashStore::DeleteTransactionRecord(void) {
    /*
         c933c:	e1a0c00d 	mov	ip, sp
         c9340:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c9344:	e24cb004 	sub	fp, ip, #4	; 0x4
         c9348:	e1a04000 	mov	r4, r0
         c934c:	e3a05000 	mov	r5, #0	; 0x0
         c9350:	e5d0003d 	ldrb	r0, [r0, #61]	; fField61
         c9354:	e3a06000 	mov	r6, #0	; 0x0
         c9358:	e3300000 	teq	r0, #0	; 0x0
         c935c:	1594008c 	ldrne	r0, [r4, #140]	; fField140
         c9360:	15a06008 	strne	r6, [r0, #8]!	; fField8
         c9364:	1a000020 	bne	c93ec <TFlashStore::DeleteTransactionRecord(void)+0xb0>
         c9368:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         c936c:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c9370:	e59d1000 	ldr	r1, [sp]
         c9374:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c9378:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c937c:	e1810000 	orr	r0, r1, r0
         c9380:	e58d0000 	str	r0, [sp]
         c9384:	e58d4010 	str	r4, [sp, #16]	; fField16
         c9388:	e1a00004 	mov	r0, r4
         c938c:	e1a0100d 	mov	r1, sp
         c9390:	eb68a14a 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c9394:	e1a0300d 	mov	r3, sp
         c9398:	e3a01017 	mov	r1, #23	; 0x17
         c939c:	e1a00004 	mov	r0, r4
         c93a0:	e3a02000 	mov	r2, #0	; 0x0
         c93a4:	eb68d6f1 	bl	1afef70 <TFlashStore::$Lookup(unsigned long, int, TObjRef &)>
         c93a8:	e1a05000 	mov	r5, r0
         c93ac:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c93b0:	e37c002e 	cmn	ip, #46	; 0x2e
         c93b4:	0a000005 	beq	c93d0 <TFlashStore::DeleteTransactionRecord(void)+0x94>
         c93b8:	e3350000 	teq	r5, #0	; 0x0
         c93bc:	1a000004 	bne	c93d4 <TFlashStore::DeleteTransactionRecord(void)+0x98>
         c93c0:	e1a0000d 	mov	r0, sp
         c93c4:	eb68b5d4 	bl	1af6b1c <TObjRef::$Delete(void)>
         c93c8:	e1a05000 	mov	r5, r0
         c93cc:	ea000000 	b	c93d4 <TFlashStore::DeleteTransactionRecord(void)+0x98>
         c93d0:	e3a05000 	mov	r5, #0	; 0x0
         c93d4:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         c93d8:	e1a0100d 	mov	r1, sp
         c93dc:	eb68e77a 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c93e0:	e28dd01c 	add	sp, sp, #28	; 0x1c
         c93e4:	e3350000 	teq	r5, #0	; 0x0
         c93e8:	1a000006 	bne	c9408 <TFlashStore::DeleteTransactionRecord(void)+0xcc>
         c93ec:	e5c46016 	strb	r6, [r4, #22]	; fField22
         c93f0:	e5c46017 	strb	r6, [r4, #23]	; fField23
         c93f4:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c93f8:	e5806004 	str	r6, [r0, #4]	; fField4
         c93fc:	e5c0600c 	strb	r6, [r0, #12]
         c9400:	e5a06010 	str	r6, [r0, #16]!	; fField16
         c9404:	e5c46096 	strb	r6, [r4, #150]	; fField150
         c9408:	e1a00005 	mov	r0, r5
         c940c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::MarkCommitPoint(void)
 * Address: 000c9410
 */
TFlashStore::MarkCommitPoint(void) {
    /*
         c9410:	e1a0c00d 	mov	ip, sp
         c9414:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c9418:	e24cb004 	sub	fp, ip, #4	; 0x4
         c941c:	e1a04000 	mov	r4, r0
         c9420:	e3a05000 	mov	r5, #0	; 0x0
         c9424:	e5d0003d 	ldrb	r0, [r0, #61]	; fField61
         c9428:	e3300000 	teq	r0, #0	; 0x0
         c942c:	13a00002 	movne	r0, #2	; 0x2
         c9430:	1594108c 	ldrne	r1, [r4, #140]	; fField140
         c9434:	15a10008 	strne	r0, [r1, #8]!	; fField8
         c9438:	1a000028 	bne	c94e0 <TFlashStore::MarkCommitPoint(void)+0xd0>
         c943c:	e24dd020 	sub	sp, sp, #32	; 0x20
         c9440:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c9444:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         c9448:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c944c:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c9450:	e1810000 	orr	r0, r1, r0
         c9454:	e58d0004 	str	r0, [sp, #4]	; fField4
         c9458:	e58d4014 	str	r4, [sp, #20]	; fField20
         c945c:	e1a00004 	mov	r0, r4
         c9460:	e28d1004 	add	r1, sp, #4	; 0x4
         c9464:	eb68a115 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c9468:	e28d3004 	add	r3, sp, #4	; 0x4
         c946c:	e3a01017 	mov	r1, #23	; 0x17
         c9470:	e1a00004 	mov	r0, r4
         c9474:	e3a02000 	mov	r2, #0	; 0x0
         c9478:	eb68d6bc 	bl	1afef70 <TFlashStore::$Lookup(unsigned long, int, TObjRef &)>
         c947c:	e1b05000 	movs	r5, r0
         c9480:	1a000005 	bne	c949c <TFlashStore::MarkCommitPoint(void)+0x8c>
         c9484:	e1a0100d 	mov	r1, sp
         c9488:	e28d0004 	add	r0, sp, #4	; 0x4
         c948c:	e3a03004 	mov	r3, #4	; 0x4
         c9490:	e3a02000 	mov	r2, #0	; 0x0
         c9494:	eb68e32a 	bl	1b02144 <TObjRef::$Read(void *, unsigned long, unsigned long)>
         c9498:	e1a05000 	mov	r5, r0
         c949c:	e3550000 	cmp	r5, #0	; 0x0
         c94a0:	05940048 	ldreq	r0, [r4, #72]	; fField72
         c94a4:	058d0000 	streq	r0, [sp]
         c94a8:	0a000000 	beq	c94b0 <TFlashStore::MarkCommitPoint(void)+0xa0>
         c94ac:	1a000005 	bne	c94c8 <TFlashStore::MarkCommitPoint(void)+0xb8>
         c94b0:	e1a0100d 	mov	r1, sp
         c94b4:	e28d0004 	add	r0, sp, #4	; 0x4
         c94b8:	e3a03004 	mov	r3, #4	; 0x4
         c94bc:	e3a02000 	mov	r2, #0	; 0x0
         c94c0:	eb69040f 	bl	1b0a504 <TObjRef::$Write(void *, unsigned long, unsigned long)>
         c94c4:	e1a05000 	mov	r5, r0
         c94c8:	e59d0014 	ldr	r0, [sp, #20]	; fField20
         c94cc:	e28d1004 	add	r1, sp, #4	; 0x4
         c94d0:	eb68e73d 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c94d4:	e28dd020 	add	sp, sp, #32	; 0x20
         c94d8:	e3350000 	teq	r5, #0	; 0x0
         c94dc:	1a000001 	bne	c94e8 <TFlashStore::MarkCommitPoint(void)+0xd8>
         c94e0:	e3a00001 	mov	r0, #1	; 0x1
         c94e4:	e5c40017 	strb	r0, [r4, #23]	; fField23
         c94e8:	e1a00005 	mov	r0, r5
         c94ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::DoCommit(unsigned char)
 * Address: 000c94f0
 */
TFlashStore::DoCommit(unsigned char) {
    /*
         c94f0:	e1a0c00d 	mov	ip, sp
         c94f4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         c94f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c94fc:	e1a04000 	mov	r4, r0
         c9500:	e20150ff 	and	r5, r1, #255	; 0xff
         c9504:	e24dd0b0 	sub	sp, sp, #176	; 0xb0
         c9508:	e590004c 	ldr	r0, [r0, #76]	; fField76
         c950c:	e59d1094 	ldr	r1, [sp, #148]	; fField148
         c9510:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c9514:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c9518:	e1810000 	orr	r0, r1, r0
         c951c:	e58d0094 	str	r0, [sp, #148]	; fField148
         c9520:	e58d40a4 	str	r4, [sp, #164]
         c9524:	e1a00004 	mov	r0, r4
         c9528:	e28d1094 	add	r1, sp, #148	; 0x94
         c952c:	eb68a0e3 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c9530:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c9534:	e59d1078 	ldr	r1, [sp, #120]	; fField120
         c9538:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c953c:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c9540:	e1810000 	orr	r0, r1, r0
         c9544:	e58d0078 	str	r0, [sp, #120]	; fField120
         c9548:	e58d4088 	str	r4, [sp, #136]	; fField136
         c954c:	e1a00004 	mov	r0, r4
         c9550:	e28d1078 	add	r1, sp, #120	; 0x78
         c9554:	eb68a0d9 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c9558:	e28d2094 	add	r2, sp, #148	; 0x94
         c955c:	e1a01004 	mov	r1, r4
         c9560:	e1a0000d 	mov	r0, sp
         c9564:	e3a03000 	mov	r3, #0	; 0x0
         c9568:	ebffdfe9 	bl	c1514 <TFlashIterator::__ct(TFlashStore *, TObjRef *, IterFilterType)>
         c956c:	e3a06000 	mov	r6, #0	; 0x0
         c9570:	e3350000 	teq	r5, #0	; 0x0
         c9574:	0a000009 	beq	c95a0 <TFlashStore::DoCommit(unsigned char)+0xb0>
         c9578:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c957c:	e1a01000 	mov	r1, r0
         c9580:	e5d0200c 	ldrb	r2, [r0, #12]
         c9584:	e3320000 	teq	r2, #0	; 0x0
         c9588:	05900010 	ldreq	r0, [r0, #16]	; fField16
         c958c:	03300000 	teqeq	r0, #0	; 0x0
         c9590:	1a000002 	bne	c95a0 <TFlashStore::DoCommit(unsigned char)+0xb0>
         c9594:	e1a0000d 	mov	r0, sp
         c9598:	eb68f78b 	bl	1b073cc <TFlashIterator::$Start(TFlashTracker *)>
         c959c:	e3a06001 	mov	r6, #1	; 0x1
         c95a0:	e1a0000d 	mov	r0, sp
         c95a4:	eb68b97a 	bl	1af7b94 <TFlashIterator::$Done(void)>
         c95a8:	e3300000 	teq	r0, #0	; 0x0
         c95ac:	1a000070 	bne	c9774 <TFlashStore::DoCommit(unsigned char)+0x284>
         c95b0:	e3a08002 	mov	r8, #2	; 0x2
         c95b4:	e59f70c4 	ldr	r7, [pc, #c4]	; c9680 <TFlashStore::DoCommit(unsigned char)+0x190>
         c95b8:	e1a0000d 	mov	r0, sp
         c95bc:	eb68da96 	bl	1b0001c <TFlashIterator::$Next(void)>
         c95c0:	e59d0094 	ldr	r0, [sp, #148]	; fField148
         c95c4:	e3c0220f 	bic	r2, r0, #-268435456	; 0xf0000000
         c95c8:	e1a05002 	mov	r5, r2
         c95cc:	e59d0098 	ldr	r0, [sp, #152]
         c95d0:	e1a00e80 	mov	r0, r0, lsl #29
         c95d4:	e1380f20 	teq	r8, r0, lsr #30
         c95d8:	0a000061 	beq	c9764 <TFlashStore::DoCommit(unsigned char)+0x274>
         c95dc:	e59d0098 	ldr	r0, [sp, #152]
         c95e0:	e1a00800 	mov	r0, r0, lsl #16
         c95e4:	e59d10a4 	ldr	r1, [sp, #164]
         c95e8:	e591104c 	ldr	r1, [r1, #76]	; fField76
         c95ec:	e0210c20 	eor	r0, r1, r0, lsr #24
         c95f0:	e20000ff 	and	r0, r0, #255	; 0xff
         c95f4:	e7d70000 	ldrb	r0, [r7, r0]
         c95f8:	e2400003 	sub	r0, r0, #3	; 0x3
         c95fc:	e350000b 	cmp	r0, #11	; 0xb
         c9600:	908ff100 	addls	pc, pc, r0, lsl #2
         c9604:	ea000056 	b	c9764 <TFlashStore::DoCommit(unsigned char)+0x274>
         c9608:	ea00004a 	b	c9738 <TFlashStore::DoCommit(unsigned char)+0x248>
         c960c:	ea000054 	b	c9764 <TFlashStore::DoCommit(unsigned char)+0x274>
         c9610:	ea00002a 	b	c96c0 <TFlashStore::DoCommit(unsigned char)+0x1d0>
         c9614:	ea00001a 	b	c9684 <TFlashStore::DoCommit(unsigned char)+0x194>
         c9618:	ea000005 	b	c9634 <TFlashStore::DoCommit(unsigned char)+0x144>
         c961c:	ea000050 	b	c9764 <TFlashStore::DoCommit(unsigned char)+0x274>
         c9620:	ea00004f 	b	c9764 <TFlashStore::DoCommit(unsigned char)+0x274>
         c9624:	ea000043 	b	c9738 <TFlashStore::DoCommit(unsigned char)+0x248>
         c9628:	ea00004d 	b	c9764 <TFlashStore::DoCommit(unsigned char)+0x274>
         c962c:	ea000023 	b	c96c0 <TFlashStore::DoCommit(unsigned char)+0x1d0>
         c9630:	ea000013 	b	c9684 <TFlashStore::DoCommit(unsigned char)+0x194>
         c9634:	e59d009c 	ldr	r0, [sp, #156]
         c9638:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c963c:	e1a00130 	mov	r0, r0, lsr r1
         c9640:	e1a01002 	mov	r1, r2
         c9644:	e5942060 	ldr	r2, [r4, #96]	; fField96
         c9648:	e1a01231 	mov	r1, r1, lsr r2
         c964c:	e1300001 	teq	r0, r1
         c9650:	0a000003 	beq	c9664 <TFlashStore::DoCommit(unsigned char)+0x174>
         c9654:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c9658:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c965c:	e1a01005 	mov	r1, r5
         c9660:	eb6903b8 	bl	1b0a548 <TFlashBlock::$ZapMigDirEnt(unsigned long)>
         c9664:	e28d0094 	add	r0, sp, #148	; 0x94
         c9668:	eb68b52b 	bl	1af6b1c <TObjRef::$Delete(void)>
         c966c:	e3360000 	teq	r6, #0	; 0x0
         c9670:	11a01005 	movne	r1, r5
         c9674:	15940084 	ldrne	r0, [r4, #132]	; fField132
         c9678:	1b68e6d7 	blne	1b031dc <TFlashTracker::$Remove(unsigned long)>
         c967c:	ea00000c 	b	c96b4 <TFlashStore::DoCommit(unsigned char)+0x1c4>
         c9680:	0037143c 	eoreqs	r1, r7, ip, lsr r4
         c9684:	e28d1078 	add	r1, sp, #120	; 0x78
         c9688:	e28d0094 	add	r0, sp, #148	; 0x94
         c968c:	eb68bd5f 	bl	1af8c10 <TObjRef::$FindSuperceeded(TObjRef &)>
         c9690:	e3300000 	teq	r0, #0	; 0x0
         c9694:	028d0078 	addeq	r0, sp, #120	; 0x78
         c9698:	0b68b51f 	bleq	1af6b1c <TObjRef::$Delete(void)>
         c969c:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c96a0:	e3300000 	teq	r0, #0	; 0x0
         c96a4:	03a0100b 	moveq	r1, #11	; 0xb
         c96a8:	13a01004 	movne	r1, #4	; 0x4
         c96ac:	e28d0094 	add	r0, sp, #148	; 0x94
         c96b0:	eb68f322 	bl	1b06340 <TObjRef::$SetState(int)>
         c96b4:	e1a01005 	mov	r1, r5
         c96b8:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c96bc:	ea000026 	b	c975c <TFlashStore::DoCommit(unsigned char)+0x26c>
         c96c0:	e28d1078 	add	r1, sp, #120	; 0x78
         c96c4:	e28d0094 	add	r0, sp, #148	; 0x94
         c96c8:	eb68bd51 	bl	1af8c14 <TObjRef::$FindSuperceeder(TObjRef &)>
         c96cc:	e3300000 	teq	r0, #0	; 0x0
         c96d0:	1a000005 	bne	c96ec <TFlashStore::DoCommit(unsigned char)+0x1fc>
         c96d4:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c96d8:	e3300000 	teq	r0, #0	; 0x0
         c96dc:	03a0100b 	moveq	r1, #11	; 0xb
         c96e0:	13a01004 	movne	r1, #4	; 0x4
         c96e4:	e28d0078 	add	r0, sp, #120	; 0x78
         c96e8:	eb68f314 	bl	1b06340 <TObjRef::$SetState(int)>
         c96ec:	e28d0094 	add	r0, sp, #148	; 0x94
         c96f0:	eb68b509 	bl	1af6b1c <TObjRef::$Delete(void)>
         c96f4:	e1a01005 	mov	r1, r5
         c96f8:	e3a02000 	mov	r2, #0	; 0x0
         c96fc:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c9700:	eb68bd58 	bl	1af8c68 <TFlashStoreLookupCache::$Forget(unsigned long, int)>
         c9704:	e59d009c 	ldr	r0, [sp, #156]
         c9708:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c970c:	e59d2080 	ldr	r2, [sp, #128]	; fField128
         c9710:	e1a02132 	mov	r2, r2, lsr r1
         c9714:	e1320130 	teq	r2, r0, lsr r1
         c9718:	0a000011 	beq	c9764 <TFlashStore::DoCommit(unsigned char)+0x274>
         c971c:	e5940060 	ldr	r0, [r4, #96]	; fField96
         c9720:	e1a00035 	mov	r0, r5, lsr r0
         c9724:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c9728:	e7910100 	ldr	r0, [r1, r0, lsl #2]
         c972c:	e1a01005 	mov	r1, r5
         c9730:	eb690383 	bl	1b0a544 <TFlashBlock::$ObjectMigrated(unsigned long, long)>
         c9734:	ea00000a 	b	c9764 <TFlashStore::DoCommit(unsigned char)+0x274>
         c9738:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c973c:	e3300000 	teq	r0, #0	; 0x0
         c9740:	03a0100b 	moveq	r1, #11	; 0xb
         c9744:	13a01004 	movne	r1, #4	; 0x4
         c9748:	e28d0094 	add	r0, sp, #148	; 0x94
         c974c:	eb68f2fb 	bl	1b06340 <TObjRef::$SetState(int)>
         c9750:	e59d0094 	ldr	r0, [sp, #148]	; fField148
         c9754:	e3c0120f 	bic	r1, r0, #-268435456	; 0xf0000000
         c9758:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c975c:	e3a02000 	mov	r2, #0	; 0x0
         c9760:	eb68bd40 	bl	1af8c68 <TFlashStoreLookupCache::$Forget(unsigned long, int)>
         c9764:	e1a0000d 	mov	r0, sp
         c9768:	eb68b909 	bl	1af7b94 <TFlashIterator::$Done(void)>
         c976c:	e3300000 	teq	r0, #0	; 0x0
         c9770:	0affff90 	beq	c95b8 <TFlashStore::DoCommit(unsigned char)+0xc8>
         c9774:	e1a00004 	mov	r0, r4
         c9778:	eb68b4f7 	bl	1af6b5c <TFlashStore::$DeleteTransactionRecord(void)>
         c977c:	e1a04000 	mov	r4, r0
         c9780:	e59d0088 	ldr	r0, [sp, #136]	; fField136
         c9784:	e28d1078 	add	r1, sp, #120	; 0x78
         c9788:	eb68e68f 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c978c:	e59d00a4 	ldr	r0, [sp, #164]
         c9790:	e28d1094 	add	r1, sp, #148	; 0x94
         c9794:	eb68e68c 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c9798:	e1a00004 	mov	r0, r4
         c979c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::DoAbort(unsigned char)
 * Address: 000c97a0
 */
TFlashStore::DoAbort(unsigned char) {
    /*
         c97a0:	e1a0c00d 	mov	ip, sp
         c97a4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         c97a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         c97ac:	e1a04000 	mov	r4, r0
         c97b0:	e20160ff 	and	r6, r1, #255	; 0xff
         c97b4:	e24dd0b0 	sub	sp, sp, #176	; 0xb0
         c97b8:	e590004c 	ldr	r0, [r0, #76]	; fField76
         c97bc:	e59d1094 	ldr	r1, [sp, #148]	; fField148
         c97c0:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c97c4:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c97c8:	e1810000 	orr	r0, r1, r0
         c97cc:	e58d0094 	str	r0, [sp, #148]	; fField148
         c97d0:	e58d40a4 	str	r4, [sp, #164]
         c97d4:	e1a00004 	mov	r0, r4
         c97d8:	e28d1094 	add	r1, sp, #148	; 0x94
         c97dc:	eb68a037 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c97e0:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c97e4:	e59d1078 	ldr	r1, [sp, #120]	; fField120
         c97e8:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c97ec:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c97f0:	e1810000 	orr	r0, r1, r0
         c97f4:	e58d0078 	str	r0, [sp, #120]	; fField120
         c97f8:	e58d4088 	str	r4, [sp, #136]	; fField136
         c97fc:	e1a00004 	mov	r0, r4
         c9800:	e28d1078 	add	r1, sp, #120	; 0x78
         c9804:	eb68a02d 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c9808:	e28d2094 	add	r2, sp, #148	; 0x94
         c980c:	e1a01004 	mov	r1, r4
         c9810:	e1a0000d 	mov	r0, sp
         c9814:	e3a03000 	mov	r3, #0	; 0x0
         c9818:	ebffdf3d 	bl	c1514 <TFlashIterator::__ct(TFlashStore *, TObjRef *, IterFilterType)>
         c981c:	e3a05000 	mov	r5, #0	; 0x0
         c9820:	e1a0000d 	mov	r0, sp
         c9824:	eb68b8da 	bl	1af7b94 <TFlashIterator::$Done(void)>
         c9828:	e59f80c0 	ldr	r8, [pc, #c0]	; c98f0 <TFlashStore::DoAbort(unsigned char)+0x150>
         c982c:	e3a07002 	mov	r7, #2	; 0x2
         c9830:	e3300000 	teq	r0, #0	; 0x0
         c9834:	1a000029 	bne	c98e0 <TFlashStore::DoAbort(unsigned char)+0x140>
         c9838:	e1a0000d 	mov	r0, sp
         c983c:	eb68d9f6 	bl	1b0001c <TFlashIterator::$Next(void)>
         c9840:	e59d0094 	ldr	r0, [sp, #148]	; fField148
         c9844:	e3c0920f 	bic	r9, r0, #-268435456	; 0xf0000000
         c9848:	e59d0098 	ldr	r0, [sp, #152]
         c984c:	e1a00800 	mov	r0, r0, lsl #16
         c9850:	e59d10a4 	ldr	r1, [sp, #164]
         c9854:	e591104c 	ldr	r1, [r1, #76]	; fField76
         c9858:	e0210c20 	eor	r0, r1, r0, lsr #24
         c985c:	e20000ff 	and	r0, r0, #255	; 0xff
         c9860:	e7d80000 	ldrb	r0, [r8, r0]
         c9864:	e350000d 	cmp	r0, #13	; 0xd
         c9868:	908ff100 	addls	pc, pc, r0, lsl #2
         c986c:	ea000017 	b	c98d0 <TFlashStore::DoAbort(unsigned char)+0x130>
         c9870:	ea000016 	b	c98d0 <TFlashStore::DoAbort(unsigned char)+0x130>
         c9874:	ea00000a 	b	c98a4 <TFlashStore::DoAbort(unsigned char)+0x104>
         c9878:	ea000009 	b	c98a4 <TFlashStore::DoAbort(unsigned char)+0x104>
         c987c:	ea000008 	b	c98a4 <TFlashStore::DoAbort(unsigned char)+0x104>
         c9880:	ea000012 	b	c98d0 <TFlashStore::DoAbort(unsigned char)+0x130>
         c9884:	ea000011 	b	c98d0 <TFlashStore::DoAbort(unsigned char)+0x130>
         c9888:	ea000005 	b	c98a4 <TFlashStore::DoAbort(unsigned char)+0x104>
         c988c:	ea00000f 	b	c98d0 <TFlashStore::DoAbort(unsigned char)+0x130>
         c9890:	ea000003 	b	c98a4 <TFlashStore::DoAbort(unsigned char)+0x104>
         c9894:	ea000002 	b	c98a4 <TFlashStore::DoAbort(unsigned char)+0x104>
         c9898:	ea000001 	b	c98a4 <TFlashStore::DoAbort(unsigned char)+0x104>
         c989c:	ea00000b 	b	c98d0 <TFlashStore::DoAbort(unsigned char)+0x130>
         c98a0:	ea00000a 	b	c98d0 <TFlashStore::DoAbort(unsigned char)+0x130>
         c98a4:	e3360000 	teq	r6, #0	; 0x0
         c98a8:	059d0098 	ldreq	r0, [sp, #152]
         c98ac:	01a00e80 	moveq	r0, r0, lsl #29
         c98b0:	01370f20 	teqeq	r7, r0, lsr #30
         c98b4:	0a000005 	beq	c98d0 <TFlashStore::DoAbort(unsigned char)+0x130>
         c98b8:	e28d0094 	add	r0, sp, #148	; 0x94
         c98bc:	eb68b496 	bl	1af6b1c <TObjRef::$Delete(void)>
         c98c0:	e1a01009 	mov	r1, r9
         c98c4:	e3a02000 	mov	r2, #0	; 0x0
         c98c8:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c98cc:	eb68bce5 	bl	1af8c68 <TFlashStoreLookupCache::$Forget(unsigned long, int)>
         c98d0:	e1a0000d 	mov	r0, sp
         c98d4:	eb68b8ae 	bl	1af7b94 <TFlashIterator::$Done(void)>
         c98d8:	e3300000 	teq	r0, #0	; 0x0
         c98dc:	0affffd5 	beq	c9838 <TFlashStore::DoAbort(unsigned char)+0x98>
         c98e0:	e1a0000d 	mov	r0, sp
         c98e4:	e594a0a0 	ldr	sl, [r4, #160]	; fField160
         c98e8:	eb68ea55 	bl	1b04244 <TFlashIterator::$Reset(void)>
         c98ec:	ea00003e 	b	c99ec <TFlashStore::DoAbort(unsigned char)+0x24c>
         c98f0:	0037143c 	eoreqs	r1, r7, ip, lsr r4
         c98f4:	e1a0000d 	mov	r0, sp
         c98f8:	eb68d9c7 	bl	1b0001c <TFlashIterator::$Next(void)>
         c98fc:	e59d0094 	ldr	r0, [sp, #148]	; fField148
         c9900:	e3c0920f 	bic	r9, r0, #-268435456	; 0xf0000000
         c9904:	e59d0098 	ldr	r0, [sp, #152]
         c9908:	e1a00800 	mov	r0, r0, lsl #16
         c990c:	e59d10a4 	ldr	r1, [sp, #164]
         c9910:	e591104c 	ldr	r1, [r1, #76]	; fField76
         c9914:	e0210c20 	eor	r0, r1, r0, lsr #24
         c9918:	e20000ff 	and	r0, r0, #255	; 0xff
         c991c:	e7d80000 	ldrb	r0, [r8, r0]
         c9920:	e3500007 	cmp	r0, #7	; 0x7
         c9924:	0a000005 	beq	c9940 <TFlashStore::DoAbort(unsigned char)+0x1a0>
         c9928:	ca00000b 	bgt	c995c <TFlashStore::DoAbort(unsigned char)+0x1bc>
         c992c:	e3300000 	teq	r0, #0	; 0x0
         c9930:	13300004 	teqne	r0, #4	; 0x4
         c9934:	0a00002c 	beq	c99ec <TFlashStore::DoAbort(unsigned char)+0x24c>
         c9938:	e3300005 	teq	r0, #5	; 0x5
         c993c:	1a00002a 	bne	c99ec <TFlashStore::DoAbort(unsigned char)+0x24c>
         c9940:	e3360000 	teq	r6, #0	; 0x0
         c9944:	059d0098 	ldreq	r0, [sp, #152]
         c9948:	01a00e80 	moveq	r0, r0, lsl #29
         c994c:	01370f20 	teqeq	r7, r0, lsr #30
         c9950:	128d0094 	addne	r0, sp, #148	; 0x94
         c9954:	1b692c2c 	blne	1b14a0c <TObjRef::$SetCommittedState(void)>
         c9958:	ea000023 	b	c99ec <TFlashStore::DoAbort(unsigned char)+0x24c>
         c995c:	e330000b 	teq	r0, #11	; 0xb
         c9960:	0a000021 	beq	c99ec <TFlashStore::DoAbort(unsigned char)+0x24c>
         c9964:	e330000c 	teq	r0, #12	; 0xc
         c9968:	1330000e 	teqne	r0, #14	; 0xe
         c996c:	1a00001e 	bne	c99ec <TFlashStore::DoAbort(unsigned char)+0x24c>
         c9970:	e3360000 	teq	r6, #0	; 0x0
         c9974:	059d0098 	ldreq	r0, [sp, #152]
         c9978:	01a00e80 	moveq	r0, r0, lsl #29
         c997c:	01370f20 	teqeq	r7, r0, lsr #30
         c9980:	0a000019 	beq	c99ec <TFlashStore::DoAbort(unsigned char)+0x24c>
         c9984:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c9988:	e3300000 	teq	r0, #0	; 0x0
         c998c:	03a01008 	moveq	r1, #8	; 0x8
         c9990:	13a01001 	movne	r1, #1	; 0x1
         c9994:	e28d2078 	add	r2, sp, #120	; 0x78
         c9998:	e28d0094 	add	r0, sp, #148	; 0x94
         c999c:	e3a03000 	mov	r3, #0	; 0x0
         c99a0:	eb692808 	bl	1b139c8 <TObjRef::$Clone(int, TObjRef &, unsigned char)>
         c99a4:	e1b05000 	movs	r5, r0
         c99a8:	1a00000f 	bne	c99ec <TFlashStore::DoAbort(unsigned char)+0x24c>
         c99ac:	e28d0094 	add	r0, sp, #148	; 0x94
         c99b0:	eb68b459 	bl	1af6b1c <TObjRef::$Delete(void)>
         c99b4:	e1b05000 	movs	r5, r0
         c99b8:	1a00000b 	bne	c99ec <TFlashStore::DoAbort(unsigned char)+0x24c>
         c99bc:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c99c0:	e3300000 	teq	r0, #0	; 0x0
         c99c4:	03a0100b 	moveq	r1, #11	; 0xb
         c99c8:	13a01004 	movne	r1, #4	; 0x4
         c99cc:	e28d0078 	add	r0, sp, #120	; 0x78
         c99d0:	eb68f25a 	bl	1b06340 <TObjRef::$SetState(int)>
         c99d4:	e1b05000 	movs	r5, r0
         c99d8:	1a000003 	bne	c99ec <TFlashStore::DoAbort(unsigned char)+0x24c>
         c99dc:	e1a01009 	mov	r1, r9
         c99e0:	e3a02000 	mov	r2, #0	; 0x0
         c99e4:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c99e8:	eb68bc9e 	bl	1af8c68 <TFlashStoreLookupCache::$Forget(unsigned long, int)>
         c99ec:	e1a0000d 	mov	r0, sp
         c99f0:	eb68b867 	bl	1af7b94 <TFlashIterator::$Done(void)>
         c99f4:	e3300000 	teq	r0, #0	; 0x0
         c99f8:	03350000 	teqeq	r5, #0	; 0x0
         c99fc:	0affffbc 	beq	c98f4 <TFlashStore::DoAbort(unsigned char)+0x154>
         c9a00:	e59400a0 	ldr	r0, [r4, #160]	; fField160
         c9a04:	e130000a 	teq	r0, sl
         c9a08:	0a000001 	beq	c9a14 <TFlashStore::DoAbort(unsigned char)+0x274>
         c9a0c:	e3350000 	teq	r5, #0	; 0x0
         c9a10:	0affffb2 	beq	c98e0 <TFlashStore::DoAbort(unsigned char)+0x140>
         c9a14:	e3350000 	teq	r5, #0	; 0x0
         c9a18:	1a000002 	bne	c9a28 <TFlashStore::DoAbort(unsigned char)+0x288>
         c9a1c:	e1a00004 	mov	r0, r4
         c9a20:	eb68b44d 	bl	1af6b5c <TFlashStore::$DeleteTransactionRecord(void)>
         c9a24:	e1a05000 	mov	r5, r0
         c9a28:	e5b40034 	ldr	r0, [r4, #52]!	; fField52
         c9a2c:	eb68bc8e 	bl	1af8c6c <TFlashStoreLookupCache::$ForgetAll(void)>
         c9a30:	e59d0088 	ldr	r0, [sp, #136]	; fField136
         c9a34:	e28d1078 	add	r1, sp, #120	; 0x78
         c9a38:	eb68e5e3 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c9a3c:	e59d00a4 	ldr	r0, [sp, #164]
         c9a40:	e28d1094 	add	r1, sp, #148	; 0x94
         c9a44:	eb68e5e0 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c9a48:	e1a00005 	mov	r0, r5
         c9a4c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::LowLevelRecovery(void)
 * Address: 000c9a50
 */
TFlashStore::LowLevelRecovery(void) {
    /*
         c9a50:	e1a0c00d 	mov	ip, sp
         c9a54:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         c9a58:	e24cb004 	sub	fp, ip, #4	; 0x4
         c9a5c:	e1a04000 	mov	r4, r0
         c9a60:	e3a05000 	mov	r5, #0	; 0x0
         c9a64:	e590008c 	ldr	r0, [r0, #140]	; fField140
         c9a68:	eb68d116 	bl	1afdec8 <SCompactState::$InProgress(void)>
         c9a6c:	e3a06000 	mov	r6, #0	; 0x0
         c9a70:	e3300000 	teq	r0, #0	; 0x0
         c9a74:	0a00003e 	beq	c9b74 <TFlashStore::LowLevelRecovery(void)+0x124>
         c9a78:	e594008c 	ldr	r0, [r4, #140]	; fField140
         c9a7c:	e5b01010 	ldr	r1, [r0, #16]!	; fField16
         c9a80:	e5940058 	ldr	r0, [r4, #88]	; fField88
         c9a84:	e1a00031 	mov	r0, r1, lsr r0
         c9a88:	e5941030 	ldr	r1, [r4, #48]	; fField48
         c9a8c:	e0812280 	add	r2, r1, r0, lsl #5
         c9a90:	e594102c 	ldr	r1, [r4, #44]	; fField44
         c9a94:	e7812100 	str	r2, [r1, r0, lsl #2]
         c9a98:	e5941030 	ldr	r1, [r4, #48]	; fField48
         c9a9c:	e7814280 	str	r4, [r1, r0, lsl #5]
         c9aa0:	e594108c 	ldr	r1, [r4, #140]	; fField140
         c9aa4:	e5b12010 	ldr	r2, [r1, #16]!	; fField16
         c9aa8:	e5941030 	ldr	r1, [r4, #48]	; fField48
         c9aac:	e0811280 	add	r1, r1, r0, lsl #5
         c9ab0:	e5a12004 	str	r2, [r1, #4]!	; fField4
         c9ab4:	e594108c 	ldr	r1, [r4, #140]	; fField140
         c9ab8:	e5b1200c 	ldr	r2, [r1, #12]!
         c9abc:	e5941030 	ldr	r1, [r4, #48]	; fField48
         c9ac0:	e0811280 	add	r1, r1, r0, lsl #5
         c9ac4:	e5a12008 	str	r2, [r1, #8]!	; fField8
         c9ac8:	e5941030 	ldr	r1, [r4, #48]	; fField48
         c9acc:	e0811280 	add	r1, r1, r0, lsl #5
         c9ad0:	e5912004 	ldr	r2, [r1, #4]	; fField4
         c9ad4:	e2822004 	add	r2, r2, #4	; 0x4
         c9ad8:	e5a1200c 	str	r2, [r1, #12]!
         c9adc:	e5941030 	ldr	r1, [r4, #48]	; fField48
         c9ae0:	e0811280 	add	r1, r1, r0, lsl #5
         c9ae4:	e5a16010 	str	r6, [r1, #16]!	; fField16
         c9ae8:	e5941030 	ldr	r1, [r4, #48]	; fField48
         c9aec:	e0811280 	add	r1, r1, r0, lsl #5
         c9af0:	e5a16014 	str	r6, [r1, #20]!	; fField20
         c9af4:	e5941030 	ldr	r1, [r4, #48]	; fField48
         c9af8:	e0811280 	add	r1, r1, r0, lsl #5
         c9afc:	e5a16018 	str	r6, [r1, #24]!	; fField24
         c9b00:	e0801080 	add	r1, r0, r0, lsl #1
         c9b04:	e5942024 	ldr	r2, [r4, #36]	; fField36
         c9b08:	e7824181 	str	r4, [r2, r1, lsl #3]
         c9b0c:	e594208c 	ldr	r2, [r4, #140]	; fField140
         c9b10:	e5b23010 	ldr	r3, [r2, #16]!	; fField16
         c9b14:	e5942024 	ldr	r2, [r4, #36]	; fField36
         c9b18:	e0822181 	add	r2, r2, r1, lsl #3
         c9b1c:	e5a23004 	str	r3, [r2, #4]!	; fField4
         c9b20:	e594208c 	ldr	r2, [r4, #140]	; fField140
         c9b24:	e5b2300c 	ldr	r3, [r2, #12]!
         c9b28:	e5942024 	ldr	r2, [r4, #36]	; fField36
         c9b2c:	e0822181 	add	r2, r2, r1, lsl #3
         c9b30:	e5a23008 	str	r3, [r2, #8]!	; fField8
         c9b34:	e3e03000 	mvn	r3, #0	; 0x0
         c9b38:	e5942024 	ldr	r2, [r4, #36]	; fField36
         c9b3c:	e0822181 	add	r2, r2, r1, lsl #3
         c9b40:	e5a2300c 	str	r3, [r2, #12]!
         c9b44:	e5942024 	ldr	r2, [r4, #36]	; fField36
         c9b48:	e0822181 	add	r2, r2, r1, lsl #3
         c9b4c:	e5a26010 	str	r6, [r2, #16]!	; fField16
         c9b50:	e5942024 	ldr	r2, [r4, #36]	; fField36
         c9b54:	e0821181 	add	r1, r2, r1, lsl #3
         c9b58:	e5c16014 	strb	r6, [r1, #20]	; fField20
         c9b5c:	e5941030 	ldr	r1, [r4, #48]	; fField48
         c9b60:	e0810280 	add	r0, r1, r0, lsl #5
         c9b64:	e594108c 	ldr	r1, [r4, #140]	; fField140
         c9b68:	eb68afd0 	bl	1af5ab0 <TFlashBlock::$ContinueCompact(SCompactState *)>
         c9b6c:	e1b05000 	movs	r5, r0
         c9b70:	1a000000 	bne	c9b78 <TFlashStore::LowLevelRecovery(void)+0x128>
         c9b74:	e5c46092 	strb	r6, [r4, #146]	; fField146
         c9b78:	e1a00005 	mov	r0, r5
         c9b7c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::TouchMe(void)
 * Address: 000c9b80
 */
TFlashStore::TouchMe(void) {
    /*
         c9b80:	e1a0c00d 	mov	ip, sp
         c9b84:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         c9b88:	e24cb004 	sub	fp, ip, #4	; 0x4
         c9b8c:	e24dd004 	sub	sp, sp, #4	; 0x4
         c9b90:	e5b01018 	ldr	r1, [r0, #24]!	; fField24
         c9b94:	e1a0000d 	mov	r0, sp
         c9b98:	e3a02001 	mov	r2, #1	; 0x1
         c9b9c:	eb6babab 	bl	1bb4a50 <$memcpy>
         c9ba0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::GetRootId(unsigned long *)
 * Address: 000c9ba4
 */
TFlashStore::GetRootId(unsigned long *) {
    /*
         c9ba4:	e3a00027 	mov	r0, #39	; 0x27
         c9ba8:	e5810000 	str	r0, [r1]
         c9bac:	e3a00000 	mov	r0, #0	; 0x0
         c9bb0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::IsRangeVirgin(unsigned long, unsigned long)
 * Address: 000c9bb4
 */
TFlashStore::IsRangeVirgin(unsigned long, unsigned long) {
    /*
         c9bb4:	e1a0c00d 	mov	ip, sp
         c9bb8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c9bbc:	e24cb004 	sub	fp, ip, #4	; 0x4
         c9bc0:	e1a05000 	mov	r5, r0
         c9bc4:	e1a04002 	mov	r4, r2
         c9bc8:	e5d00097 	ldrb	r0, [r0, #151]	; fField151
         c9bcc:	e3300000 	teq	r0, #0	; 0x0
         c9bd0:	e1a00005 	mov	r0, r5
         c9bd4:	0a000005 	beq	c9bf0 <TFlashStore::IsRangeVirgin(unsigned long, unsigned long)+0x3c>
         c9bd8:	eb68fa1b 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         c9bdc:	e1a01000 	mov	r1, r0
         c9be0:	e1a02004 	mov	r2, r4
         c9be4:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
         c9be8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         c9bec:	ea0af29e 	b	38666c <TFlash::IsVirgin(unsigned long, unsigned long)>
         c9bf0:	eb68fa15 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         c9bf4:	e5b51018 	ldr	r1, [r5, #24]!	; fField24
         c9bf8:	e0800001 	add	r0, r0, r1
         c9bfc:	e1b01004 	movs	r1, r4
         c9c00:	e2444001 	sub	r4, r4, #1	; 0x1
         c9c04:	0a000006 	beq	c9c24 <TFlashStore::IsRangeVirgin(unsigned long, unsigned long)+0x70>
         c9c08:	e4d01001 	ldrb	r1, [r0], #1
         c9c0c:	e33100ff 	teq	r1, #255	; 0xff
         c9c10:	13a00000 	movne	r0, #0	; 0x0
         c9c14:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         c9c18:	e1b01004 	movs	r1, r4
         c9c1c:	e2444001 	sub	r4, r4, #1	; 0x1
         c9c20:	1afffff8 	bne	c9c08 <TFlashStore::IsRangeVirgin(unsigned long, unsigned long)+0x54>
         c9c24:	e3a00001 	mov	r0, #1	; 0x1
         c9c28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::GC(void)
 * Address: 000c9c2c
 */
TFlashStore::GC(void) {
    /*
         c9c2c:	e1a0c00d 	mov	ip, sp
         c9c30:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         c9c34:	e24cb004 	sub	fp, ip, #4	; 0x4
         c9c38:	e1a04000 	mov	r4, r0
         c9c3c:	e5d0003d 	ldrb	r0, [r0, #61]	; fField61
         c9c40:	e3300000 	teq	r0, #0	; 0x0
         c9c44:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         c9c48:	e3a05000 	mov	r5, #0	; 0x0
         c9c4c:	e1a00004 	mov	r0, r4
         c9c50:	eb68f5e7 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c9c54:	e3500000 	cmp	r0, #0	; 0x0
         c9c58:	991ba830 	ldmlsdb	fp, {r4, r5, fp, sp, pc}
         c9c5c:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c9c60:	e1a01135 	mov	r1, r5, lsr r1
         c9c64:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c9c68:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c9c6c:	eb68d4b5 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         c9c70:	e3300000 	teq	r0, #0	; 0x0
         c9c74:	1a000004 	bne	c9c8c <TFlashStore::GC(void)+0x60>
         c9c78:	e5941058 	ldr	r1, [r4, #88]	; fField88
         c9c7c:	e1a01135 	mov	r1, r5, lsr r1
         c9c80:	e594002c 	ldr	r0, [r4, #44]	; fField44
         c9c84:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         c9c88:	eb68af7f 	bl	1af5a8c <TFlashBlock::$CompactInPlace(void)>
         c9c8c:	e5940050 	ldr	r0, [r4, #80]	; fField80
         c9c90:	e0805005 	add	r5, r0, r5
         c9c94:	e1a00004 	mov	r0, r4
         c9c98:	eb68f5d5 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         c9c9c:	e1500005 	cmp	r0, r5
         c9ca0:	8affffed 	bhi	c9c5c <TFlashStore::GC(void)+0x30>
         c9ca4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::NewWithinTransaction(long, unsigned long *)
 * Address: 000c9ca8
 */
TFlashStore::NewWithinTransaction(long, unsigned long *) {
    /*
         c9ca8:	e1a03002 	mov	r3, r2
         c9cac:	e3a02000 	mov	r2, #0	; 0x0
         c9cb0:	ea690636 	b	1b0b590 <TFlashStore::$NewWithinTransaction(long, unsigned char, unsigned long *)>
    */
}

/**
 * Symbol: TFlashStore::StartTransactionAgainst(unsigned long)
 * Address: 000c9cb4
 */
TFlashStore::StartTransactionAgainst(unsigned long) {
    /*
         c9cb4:	e1a0c00d 	mov	ip, sp
         c9cb8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c9cbc:	e24cb004 	sub	fp, ip, #4	; 0x4
         c9cc0:	e1a04000 	mov	r4, r0
         c9cc4:	e1a05001 	mov	r5, r1
         c9cc8:	e3a06000 	mov	r6, #0	; 0x0
         c9ccc:	eb68fe00 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         c9cd0:	e3a07000 	mov	r7, #0	; 0x0
         c9cd4:	e52d706c 	str	r7, [sp, -#108]!	; fField108
         c9cd8:	e28d0008 	add	r0, sp, #8	; 0x8
         c9cdc:	eb6ba324 	bl	1bb2974 <$setjmp>
         c9ce0:	e3300000 	teq	r0, #0	; 0x0
         c9ce4:	1a00006f 	bne	c9ea8 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1f4>
         c9ce8:	e1a0000d 	mov	r0, sp
         c9cec:	eb6c58e2 	bl	1be007c <$AddExceptionHandler>
         c9cf0:	e24dd038 	sub	sp, sp, #56	; 0x38
         c9cf4:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c9cf8:	e59d101c 	ldr	r1, [sp, #28]	; fField28
         c9cfc:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c9d00:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c9d04:	e1810000 	orr	r0, r1, r0
         c9d08:	e58d001c 	str	r0, [sp, #28]	; fField28
         c9d0c:	e58d402c 	str	r4, [sp, #44]	; fField44
         c9d10:	e1a00004 	mov	r0, r4
         c9d14:	e28d101c 	add	r1, sp, #28	; 0x1c
         c9d18:	eb689ee8 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c9d1c:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c9d20:	e59d1000 	ldr	r1, [sp]
         c9d24:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c9d28:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c9d2c:	e1810000 	orr	r0, r1, r0
         c9d30:	e58d0000 	str	r0, [sp]
         c9d34:	e58d4010 	str	r4, [sp, #16]	; fField16
         c9d38:	e1a00004 	mov	r0, r4
         c9d3c:	e1a0100d 	mov	r1, sp
         c9d40:	eb689ede 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c9d44:	e3a03000 	mov	r3, #0	; 0x0
         c9d48:	e92d0008 	stmdb	sp!, {r3}
         c9d4c:	e28d2020 	add	r2, sp, #32	; 0x20
         c9d50:	e1a01005 	mov	r1, r5
         c9d54:	e1a00004 	mov	r0, r4
         c9d58:	eb690611 	bl	1b0b5a4 <TFlashStore::$SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)>
         c9d5c:	e28dd004 	add	sp, sp, #4	; 0x4
         c9d60:	e1b06000 	movs	r6, r0
         c9d64:	1a000047 	bne	c9e88 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1d4>
         c9d68:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         c9d6c:	e2001006 	and	r1, r0, #6	; 0x6
         c9d70:	e3310004 	teq	r1, #4	; 0x4
         c9d74:	0a000043 	beq	c9e88 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1d4>
         c9d78:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c9d7c:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c9d80:	e2811001 	add	r1, r1, #1	; 0x1
         c9d84:	e5a01010 	str	r1, [r0, #16]!	; fField16
         c9d88:	e59d1020 	ldr	r1, [sp, #32]	; fField32
         c9d8c:	e1a01801 	mov	r1, r1, lsl #16
         c9d90:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         c9d94:	e590004c 	ldr	r0, [r0, #76]	; fField76
         c9d98:	e0200c21 	eor	r0, r0, r1, lsr #24
         c9d9c:	e20010ff 	and	r1, r0, #255	; 0xff
         c9da0:	e59f0068 	ldr	r0, [pc, #68]	; c9e10 <TFlashStore::StartTransactionAgainst(unsigned long)+0x15c>	; fField68
         c9da4:	e7d00001 	ldrb	r0, [r0, r1]
         c9da8:	e350000d 	cmp	r0, #13	; 0xd
         c9dac:	908ff100 	addls	pc, pc, r0, lsl #2
         c9db0:	ea00002f 	b	c9e74 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1c0>
         c9db4:	ea00002e 	b	c9e74 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1c0>
         c9db8:	ea00002d 	b	c9e74 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1c0>
         c9dbc:	ea00002c 	b	c9e74 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1c0>
         c9dc0:	ea000013 	b	c9e14 <TFlashStore::StartTransactionAgainst(unsigned long)+0x160>
         c9dc4:	ea000016 	b	c9e24 <TFlashStore::StartTransactionAgainst(unsigned long)+0x170>
         c9dc8:	ea000029 	b	c9e74 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1c0>
         c9dcc:	ea000005 	b	c9de8 <TFlashStore::StartTransactionAgainst(unsigned long)+0x134>
         c9dd0:	ea000027 	b	c9e74 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1c0>
         c9dd4:	ea000026 	b	c9e74 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1c0>
         c9dd8:	ea000025 	b	c9e74 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1c0>
         c9ddc:	ea00000c 	b	c9e14 <TFlashStore::StartTransactionAgainst(unsigned long)+0x160>
         c9de0:	ea00000f 	b	c9e24 <TFlashStore::StartTransactionAgainst(unsigned long)+0x170>
         c9de4:	ea000022 	b	c9e74 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1c0>
         c9de8:	e1a0100d 	mov	r1, sp
         c9dec:	e28d001c 	add	r0, sp, #28	; 0x1c
         c9df0:	eb68bb86 	bl	1af8c10 <TObjRef::$FindSuperceeded(TObjRef &)>
         c9df4:	e1b06000 	movs	r6, r0
         c9df8:	1a00001d 	bne	c9e74 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1c0>
         c9dfc:	e28d001c 	add	r0, sp, #28	; 0x1c
         c9e00:	eb690a03 	bl	1b0c614 <TObjRef::$SetSeparateTranny(void)>
         c9e04:	e1a0000d 	mov	r0, sp
         c9e08:	eb690a01 	bl	1b0c614 <TObjRef::$SetSeparateTranny(void)>
         c9e0c:	ea000018 	b	c9e74 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1c0>
         c9e10:	0037143c 	eoreqs	r1, r7, ip, lsr r4
         c9e14:	e28d001c 	add	r0, sp, #28	; 0x1c
         c9e18:	eb6909fd 	bl	1b0c614 <TObjRef::$SetSeparateTranny(void)>
         c9e1c:	e1a06000 	mov	r6, r0
         c9e20:	ea000013 	b	c9e74 <TFlashStore::StartTransactionAgainst(unsigned long)+0x1c0>
         c9e24:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c9e28:	e3300000 	teq	r0, #0	; 0x0
         c9e2c:	03a0100c 	moveq	r1, #12	; 0xc
         c9e30:	13a01005 	movne	r1, #5	; 0x5
         c9e34:	e28d001c 	add	r0, sp, #28	; 0x1c
         c9e38:	eb68f140 	bl	1b06340 <TObjRef::$SetState(int)>
         c9e3c:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c9e40:	e3300000 	teq	r0, #0	; 0x0
         c9e44:	03a0100d 	moveq	r1, #13	; 0xd
         c9e48:	13a01006 	movne	r1, #6	; 0x6
         c9e4c:	e1a0200d 	mov	r2, sp
         c9e50:	e28d001c 	add	r0, sp, #28	; 0x1c
         c9e54:	e3a03001 	mov	r3, #1	; 0x1
         c9e58:	eb6926da 	bl	1b139c8 <TObjRef::$Clone(int, TObjRef &, unsigned char)>
         c9e5c:	e28d001c 	add	r0, sp, #28	; 0x1c
         c9e60:	eb6909eb 	bl	1b0c614 <TObjRef::$SetSeparateTranny(void)>
         c9e64:	e1a06000 	mov	r6, r0
         c9e68:	e1a0100d 	mov	r1, sp
         c9e6c:	e5940034 	ldr	r0, [r4, #52]	; fField52
         c9e70:	eb68aae7 	bl	1af4a14 <TFlashStoreLookupCache::$Change(TObjRef &)>
         c9e74:	e5940084 	ldr	r0, [r4, #132]	; fField132
         c9e78:	e5901010 	ldr	r1, [r0, #16]	; fField16
         c9e7c:	e3310000 	teq	r1, #0	; 0x0
         c9e80:	12411001 	subne	r1, r1, #1	; 0x1
         c9e84:	15a01010 	strne	r1, [r0, #16]!	; fField16
         c9e88:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         c9e8c:	e1a0100d 	mov	r1, sp
         c9e90:	eb68e4cd 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c9e94:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         c9e98:	e28d101c 	add	r1, sp, #28	; 0x1c
         c9e9c:	eb68e4ca 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         c9ea0:	e28dd038 	add	sp, sp, #56	; 0x38
         c9ea4:	ea00000b 	b	c9ed8 <TFlashStore::StartTransactionAgainst(unsigned long)+0x224>
         c9ea8:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         c9eac:	e59f1040 	ldr	r1, [pc, #40]	; c9ef4 <TFlashStore::StartTransactionAgainst(unsigned long)+0x240>	; fField40
         c9eb0:	e5911000 	ldr	r1, [r1]
         c9eb4:	eb6c64b6 	bl	1be3194 <$Subexception>
         c9eb8:	e3300000 	teq	r0, #0	; 0x0
         c9ebc:	0a000003 	beq	c9ed0 <TFlashStore::StartTransactionAgainst(unsigned long)+0x21c>
         c9ec0:	e1a00004 	mov	r0, r4
         c9ec4:	eb68fd7f 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c9ec8:	e5847080 	str	r7, [r4, #128]	; fField128
         c9ecc:	e584707c 	str	r7, [r4, #124]	; fField124
         c9ed0:	e1a0000d 	mov	r0, sp
         c9ed4:	eb6c609e 	bl	1be2154 <$NextHandler>
         c9ed8:	e1a0000d 	mov	r0, sp
         c9edc:	eb6c5c75 	bl	1be10b8 <$ExitHandler>
         c9ee0:	e28dd06c 	add	sp, sp, #108	; 0x6c
         c9ee4:	e1a00004 	mov	r0, r4
         c9ee8:	eb68fd76 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         c9eec:	e1a00006 	mov	r0, r6
         c9ef0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         c9ef4:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::SeparatelyAbort(unsigned long)
 * Address: 000c9ef8
 */
TFlashStore::SeparatelyAbort(unsigned long) {
    /*
         c9ef8:	e1a0c00d 	mov	ip, sp
         c9efc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         c9f00:	e24cb004 	sub	fp, ip, #4	; 0x4
         c9f04:	e1a04000 	mov	r4, r0
         c9f08:	e1a05001 	mov	r5, r1
         c9f0c:	e3a06000 	mov	r6, #0	; 0x0
         c9f10:	eb68fd6f 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         c9f14:	e3a07000 	mov	r7, #0	; 0x0
         c9f18:	e52d706c 	str	r7, [sp, -#108]!	; fField108
         c9f1c:	e28d0008 	add	r0, sp, #8	; 0x8
         c9f20:	eb6ba293 	bl	1bb2974 <$setjmp>
         c9f24:	e3300000 	teq	r0, #0	; 0x0
         c9f28:	1a0000c6 	bne	ca248 <TFlashStore::SeparatelyAbort(unsigned long)+0x350>
         c9f2c:	e1a0000d 	mov	r0, sp
         c9f30:	eb6c5851 	bl	1be007c <$AddExceptionHandler>
         c9f34:	e24dd054 	sub	sp, sp, #84	; 0x54
         c9f38:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c9f3c:	e59d1038 	ldr	r1, [sp, #56]	; fField56
         c9f40:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c9f44:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c9f48:	e1810000 	orr	r0, r1, r0
         c9f4c:	e58d0038 	str	r0, [sp, #56]	; fField56
         c9f50:	e58d4048 	str	r4, [sp, #72]	; fField72
         c9f54:	e1a00004 	mov	r0, r4
         c9f58:	e28d1038 	add	r1, sp, #56	; 0x38
         c9f5c:	eb689e57 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c9f60:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c9f64:	e59d101c 	ldr	r1, [sp, #28]	; fField28
         c9f68:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c9f6c:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c9f70:	e1810000 	orr	r0, r1, r0
         c9f74:	e58d001c 	str	r0, [sp, #28]	; fField28
         c9f78:	e58d402c 	str	r4, [sp, #44]	; fField44
         c9f7c:	e1a00004 	mov	r0, r4
         c9f80:	e28d101c 	add	r1, sp, #28	; 0x1c
         c9f84:	eb689e4d 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c9f88:	e594004c 	ldr	r0, [r4, #76]	; fField76
         c9f8c:	e59d1000 	ldr	r1, [sp]
         c9f90:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         c9f94:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         c9f98:	e1810000 	orr	r0, r1, r0
         c9f9c:	e58d0000 	str	r0, [sp]
         c9fa0:	e58d4010 	str	r4, [sp, #16]	; fField16
         c9fa4:	e1a00004 	mov	r0, r4
         c9fa8:	e1a0100d 	mov	r1, sp
         c9fac:	eb689e43 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         c9fb0:	e3a03000 	mov	r3, #0	; 0x0
         c9fb4:	e92d0008 	stmdb	sp!, {r3}
         c9fb8:	e28d203c 	add	r2, sp, #60	; 0x3c
         c9fbc:	e1a01005 	mov	r1, r5
         c9fc0:	e1a00004 	mov	r0, r4
         c9fc4:	eb690576 	bl	1b0b5a4 <TFlashStore::$SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)>
         c9fc8:	e28dd004 	add	sp, sp, #4	; 0x4
         c9fcc:	e1a06000 	mov	r6, r0
         c9fd0:	e280cda5 	add	ip, r0, #10560	; 0x2940
         c9fd4:	e37c002e 	cmn	ip, #46	; 0x2e
         c9fd8:	1a000008 	bne	ca000 <TFlashStore::SeparatelyAbort(unsigned long)+0x108>
         c9fdc:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         c9fe0:	e3300000 	teq	r0, #0	; 0x0
         c9fe4:	03a0200e 	moveq	r2, #14	; 0xe
         c9fe8:	13a02007 	movne	r2, #7	; 0x7
         c9fec:	e28d3038 	add	r3, sp, #56	; 0x38
         c9ff0:	e1a01005 	mov	r1, r5
         c9ff4:	e1a00004 	mov	r0, r4
         c9ff8:	eb68d3dc 	bl	1afef70 <TFlashStore::$Lookup(unsigned long, int, TObjRef &)>
         c9ffc:	e1a06000 	mov	r6, r0
         ca000:	e3360000 	teq	r6, #0	; 0x0
         ca004:	059d003c 	ldreq	r0, [sp, #60]	; fField60
         ca008:	02000006 	andeq	r0, r0, #6	; 0x6
         ca00c:	03300004 	teqeq	r0, #4	; 0x4
         ca010:	1a00003a 	bne	ca100 <TFlashStore::SeparatelyAbort(unsigned long)+0x208>
         ca014:	e59d003c 	ldr	r0, [sp, #60]	; fField60
         ca018:	e1a00800 	mov	r0, r0, lsl #16
         ca01c:	e59d1048 	ldr	r1, [sp, #72]	; fField72
         ca020:	e591104c 	ldr	r1, [r1, #76]	; fField76
         ca024:	e0210c20 	eor	r0, r1, r0, lsr #24
         ca028:	e20000ff 	and	r0, r0, #255	; 0xff
         ca02c:	e59f10f8 	ldr	r1, [pc, #f8]	; ca12c <TFlashStore::SeparatelyAbort(unsigned long)+0x234>
         ca030:	e7d10000 	ldrb	r0, [r1, r0]
         ca034:	e350000e 	cmp	r0, #14	; 0xe
         ca038:	908ff100 	addls	pc, pc, r0, lsl #2
         ca03c:	ea00002b 	b	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca040:	ea00002a 	b	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca044:	ea000029 	b	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca048:	ea000028 	b	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca04c:	ea000037 	b	ca130 <TFlashStore::SeparatelyAbort(unsigned long)+0x238>
         ca050:	ea000026 	b	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca054:	ea000025 	b	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca058:	ea000038 	b	ca140 <TFlashStore::SeparatelyAbort(unsigned long)+0x248>
         ca05c:	ea00006c 	b	ca214 <TFlashStore::SeparatelyAbort(unsigned long)+0x31c>
         ca060:	ea000022 	b	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca064:	ea000021 	b	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca068:	ea000030 	b	ca130 <TFlashStore::SeparatelyAbort(unsigned long)+0x238>
         ca06c:	ea00001f 	b	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca070:	ea00001e 	b	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca074:	ea000046 	b	ca194 <TFlashStore::SeparatelyAbort(unsigned long)+0x29c>
         ca078:	e28d0038 	add	r0, sp, #56	; 0x38
         ca07c:	eb690965 	bl	1b0c618 <TObjRef::$ClearSeparateTranny(void)>
         ca080:	e1b06000 	movs	r6, r0
         ca084:	1a000019 	bne	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca088:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         ca08c:	e3300000 	teq	r0, #0	; 0x0
         ca090:	03a01008 	moveq	r1, #8	; 0x8
         ca094:	13a01001 	movne	r1, #1	; 0x1
         ca098:	e28d201c 	add	r2, sp, #28	; 0x1c
         ca09c:	e28d0038 	add	r0, sp, #56	; 0x38
         ca0a0:	e3a03000 	mov	r3, #0	; 0x0
         ca0a4:	eb692647 	bl	1b139c8 <TObjRef::$Clone(int, TObjRef &, unsigned char)>
         ca0a8:	e1b06000 	movs	r6, r0
         ca0ac:	1a00000f 	bne	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca0b0:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         ca0b4:	e3300000 	teq	r0, #0	; 0x0
         ca0b8:	03a0100b 	moveq	r1, #11	; 0xb
         ca0bc:	13a01004 	movne	r1, #4	; 0x4
         ca0c0:	e28d001c 	add	r0, sp, #28	; 0x1c
         ca0c4:	eb68f09d 	bl	1b06340 <TObjRef::$SetState(int)>
         ca0c8:	e1b06000 	movs	r6, r0
         ca0cc:	1a000007 	bne	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca0d0:	e28d0038 	add	r0, sp, #56	; 0x38
         ca0d4:	eb68b290 	bl	1af6b1c <TObjRef::$Delete(void)>
         ca0d8:	e1b06000 	movs	r6, r0
         ca0dc:	1a000003 	bne	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca0e0:	e1a01005 	mov	r1, r5
         ca0e4:	e3a02000 	mov	r2, #0	; 0x0
         ca0e8:	e5940034 	ldr	r0, [r4, #52]	; fField52
         ca0ec:	eb68badd 	bl	1af8c68 <TFlashStoreLookupCache::$Forget(unsigned long, int)>
         ca0f0:	e1a01005 	mov	r1, r5
         ca0f4:	e3a02000 	mov	r2, #0	; 0x0
         ca0f8:	e5940034 	ldr	r0, [r4, #52]	; fField52
         ca0fc:	eb68bad9 	bl	1af8c68 <TFlashStoreLookupCache::$Forget(unsigned long, int)>
         ca100:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         ca104:	e1a0100d 	mov	r1, sp
         ca108:	eb68e42f 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         ca10c:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         ca110:	e28d101c 	add	r1, sp, #28	; 0x1c
         ca114:	eb68e42c 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         ca118:	e59d0048 	ldr	r0, [sp, #72]	; fField72
         ca11c:	e28d1038 	add	r1, sp, #56	; 0x38
         ca120:	eb68e429 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         ca124:	e28dd054 	add	sp, sp, #84	; 0x54
         ca128:	ea000052 	b	ca278 <TFlashStore::SeparatelyAbort(unsigned long)+0x380>
         ca12c:	0037143c 	eoreqs	r1, r7, ip, lsr r4
         ca130:	e28d0038 	add	r0, sp, #56	; 0x38
         ca134:	eb68b278 	bl	1af6b1c <TObjRef::$Delete(void)>
         ca138:	e1a06000 	mov	r6, r0
         ca13c:	eaffffeb 	b	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca140:	e28d101c 	add	r1, sp, #28	; 0x1c
         ca144:	e28d0038 	add	r0, sp, #56	; 0x38
         ca148:	eb68bab0 	bl	1af8c10 <TObjRef::$FindSuperceeded(TObjRef &)>
         ca14c:	e1b06000 	movs	r6, r0
         ca150:	1affffe6 	bne	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca154:	e28d0038 	add	r0, sp, #56	; 0x38
         ca158:	eb68b26f 	bl	1af6b1c <TObjRef::$Delete(void)>
         ca15c:	e1b06000 	movs	r6, r0
         ca160:	1affffe2 	bne	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca164:	e28d001c 	add	r0, sp, #28	; 0x1c
         ca168:	eb69092a 	bl	1b0c618 <TObjRef::$ClearSeparateTranny(void)>
         ca16c:	e1b06000 	movs	r6, r0
         ca170:	1affffde 	bne	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca174:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         ca178:	e3300000 	teq	r0, #0	; 0x0
         ca17c:	03a0100b 	moveq	r1, #11	; 0xb
         ca180:	13a01004 	movne	r1, #4	; 0x4
         ca184:	e28d001c 	add	r0, sp, #28	; 0x1c
         ca188:	eb68f06c 	bl	1b06340 <TObjRef::$SetState(int)>
         ca18c:	e1a06000 	mov	r6, r0
         ca190:	eaffffd2 	b	ca0e0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1e8>
         ca194:	e28d101c 	add	r1, sp, #28	; 0x1c
         ca198:	e28d0038 	add	r0, sp, #56	; 0x38
         ca19c:	eb68ba9b 	bl	1af8c10 <TObjRef::$FindSuperceeded(TObjRef &)>
         ca1a0:	e1b06000 	movs	r6, r0
         ca1a4:	1affffd1 	bne	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca1a8:	e28d0038 	add	r0, sp, #56	; 0x38
         ca1ac:	eb68b25a 	bl	1af6b1c <TObjRef::$Delete(void)>
         ca1b0:	e1b06000 	movs	r6, r0
         ca1b4:	1affffcd 	bne	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca1b8:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         ca1bc:	e3300000 	teq	r0, #0	; 0x0
         ca1c0:	03a01008 	moveq	r1, #8	; 0x8
         ca1c4:	13a01001 	movne	r1, #1	; 0x1
         ca1c8:	e1a0200d 	mov	r2, sp
         ca1cc:	e28d001c 	add	r0, sp, #28	; 0x1c
         ca1d0:	e3a03000 	mov	r3, #0	; 0x0
         ca1d4:	eb6925fb 	bl	1b139c8 <TObjRef::$Clone(int, TObjRef &, unsigned char)>
         ca1d8:	e1b06000 	movs	r6, r0
         ca1dc:	1affffc3 	bne	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca1e0:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         ca1e4:	e3300000 	teq	r0, #0	; 0x0
         ca1e8:	03a0100b 	moveq	r1, #11	; 0xb
         ca1ec:	13a01004 	movne	r1, #4	; 0x4
         ca1f0:	e1a0000d 	mov	r0, sp
         ca1f4:	eb68f051 	bl	1b06340 <TObjRef::$SetState(int)>
         ca1f8:	e1b06000 	movs	r6, r0
         ca1fc:	1affffbb 	bne	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca200:	e28d001c 	add	r0, sp, #28	; 0x1c
         ca204:	eb68b244 	bl	1af6b1c <TObjRef::$Delete(void)>
         ca208:	e1b06000 	movs	r6, r0
         ca20c:	0affffb3 	beq	ca0e0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1e8>
         ca210:	eaffffb6 	b	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca214:	e28d0038 	add	r0, sp, #56	; 0x38
         ca218:	eb6908fe 	bl	1b0c618 <TObjRef::$ClearSeparateTranny(void)>
         ca21c:	e1b06000 	movs	r6, r0
         ca220:	1affffb2 	bne	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca224:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         ca228:	e3300000 	teq	r0, #0	; 0x0
         ca22c:	03a0100b 	moveq	r1, #11	; 0xb
         ca230:	13a01004 	movne	r1, #4	; 0x4
         ca234:	e28d0038 	add	r0, sp, #56	; 0x38
         ca238:	eb68f040 	bl	1b06340 <TObjRef::$SetState(int)>
         ca23c:	e1b06000 	movs	r6, r0
         ca240:	0affffa6 	beq	ca0e0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1e8>
         ca244:	eaffffa9 	b	ca0f0 <TFlashStore::SeparatelyAbort(unsigned long)+0x1f8>
         ca248:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         ca24c:	e59f1040 	ldr	r1, [pc, #40]	; ca294 <TFlashStore::SeparatelyAbort(unsigned long)+0x39c>	; fField40
         ca250:	e5911000 	ldr	r1, [r1]
         ca254:	eb6c63ce 	bl	1be3194 <$Subexception>
         ca258:	e3300000 	teq	r0, #0	; 0x0
         ca25c:	0a000003 	beq	ca270 <TFlashStore::SeparatelyAbort(unsigned long)+0x378>
         ca260:	e1a00004 	mov	r0, r4
         ca264:	eb68fc97 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         ca268:	e5847080 	str	r7, [r4, #128]	; fField128
         ca26c:	e584707c 	str	r7, [r4, #124]	; fField124
         ca270:	e1a0000d 	mov	r0, sp
         ca274:	eb6c5fb6 	bl	1be2154 <$NextHandler>
         ca278:	e1a0000d 	mov	r0, sp
         ca27c:	eb6c5b8d 	bl	1be10b8 <$ExitHandler>
         ca280:	e28dd06c 	add	sp, sp, #108	; 0x6c
         ca284:	e1a00004 	mov	r0, r4
         ca288:	eb68fc8e 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         ca28c:	e1a00006 	mov	r0, r6
         ca290:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         ca294:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::AddToCurrentTransaction(unsigned long)
 * Address: 000ca298
 */
TFlashStore::AddToCurrentTransaction(unsigned long) {
    /*
         ca298:	e1a0c00d 	mov	ip, sp
         ca29c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         ca2a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         ca2a4:	e1a04000 	mov	r4, r0
         ca2a8:	e1a05001 	mov	r5, r1
         ca2ac:	e3a06000 	mov	r6, #0	; 0x0
         ca2b0:	eb68fc87 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         ca2b4:	e3a07000 	mov	r7, #0	; 0x0
         ca2b8:	e52d706c 	str	r7, [sp, -#108]!	; fField108
         ca2bc:	e28d0008 	add	r0, sp, #8	; 0x8
         ca2c0:	eb6ba1ab 	bl	1bb2974 <$setjmp>
         ca2c4:	e3300000 	teq	r0, #0	; 0x0
         ca2c8:	1a00007f 	bne	ca4cc <TFlashStore::AddToCurrentTransaction(unsigned long)+0x234>
         ca2cc:	e1a0000d 	mov	r0, sp
         ca2d0:	eb6c5769 	bl	1be007c <$AddExceptionHandler>
         ca2d4:	e24dd038 	sub	sp, sp, #56	; 0x38
         ca2d8:	e594004c 	ldr	r0, [r4, #76]	; fField76
         ca2dc:	e59d101c 	ldr	r1, [sp, #28]	; fField28
         ca2e0:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         ca2e4:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         ca2e8:	e1810000 	orr	r0, r1, r0
         ca2ec:	e58d001c 	str	r0, [sp, #28]	; fField28
         ca2f0:	e58d402c 	str	r4, [sp, #44]	; fField44
         ca2f4:	e1a00004 	mov	r0, r4
         ca2f8:	e28d101c 	add	r1, sp, #28	; 0x1c
         ca2fc:	eb689d6f 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         ca300:	e594004c 	ldr	r0, [r4, #76]	; fField76
         ca304:	e59d1000 	ldr	r1, [sp]
         ca308:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         ca30c:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         ca310:	e1810000 	orr	r0, r1, r0
         ca314:	e58d0000 	str	r0, [sp]
         ca318:	e58d4010 	str	r4, [sp, #16]	; fField16
         ca31c:	e1a00004 	mov	r0, r4
         ca320:	e1a0100d 	mov	r1, sp
         ca324:	eb689d65 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         ca328:	e1a00004 	mov	r0, r4
         ca32c:	eb68d307 	bl	1afef50 <TFlashStore::$LockStore(void)>
         ca330:	e3a03001 	mov	r3, #1	; 0x1
         ca334:	e92d0008 	stmdb	sp!, {r3}
         ca338:	e28d2020 	add	r2, sp, #32	; 0x20
         ca33c:	e1a01005 	mov	r1, r5
         ca340:	e1a00004 	mov	r0, r4
         ca344:	eb690496 	bl	1b0b5a4 <TFlashStore::$SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)>
         ca348:	e28dd004 	add	sp, sp, #4	; 0x4
         ca34c:	e1a06000 	mov	r6, r0
         ca350:	e280cda5 	add	ip, r0, #10560	; 0x2940
         ca354:	e37c002e 	cmn	ip, #46	; 0x2e
         ca358:	1a000008 	bne	ca380 <TFlashStore::AddToCurrentTransaction(unsigned long)+0xe8>
         ca35c:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         ca360:	e3300000 	teq	r0, #0	; 0x0
         ca364:	03a0200e 	moveq	r2, #14	; 0xe
         ca368:	13a02007 	movne	r2, #7	; 0x7
         ca36c:	e28d301c 	add	r3, sp, #28	; 0x1c
         ca370:	e1a01005 	mov	r1, r5
         ca374:	e1a00004 	mov	r0, r4
         ca378:	eb68d2fc 	bl	1afef70 <TFlashStore::$Lookup(unsigned long, int, TObjRef &)>
         ca37c:	e1a06000 	mov	r6, r0
         ca380:	e3360000 	teq	r6, #0	; 0x0
         ca384:	059d0020 	ldreq	r0, [sp, #32]	; fField32
         ca388:	02000006 	andeq	r0, r0, #6	; 0x6
         ca38c:	03300004 	teqeq	r0, #4	; 0x4
         ca390:	1a000043 	bne	ca4a4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x20c>
         ca394:	e59d0020 	ldr	r0, [sp, #32]	; fField32
         ca398:	e1a00800 	mov	r0, r0, lsl #16
         ca39c:	e59d102c 	ldr	r1, [sp, #44]	; fField44
         ca3a0:	e591104c 	ldr	r1, [r1, #76]	; fField76
         ca3a4:	e0210c20 	eor	r0, r1, r0, lsr #24
         ca3a8:	e20010ff 	and	r1, r0, #255	; 0xff
         ca3ac:	e59f008c 	ldr	r0, [pc, #8c]	; ca440 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x1a8>	; fField8
         ca3b0:	e7d00001 	ldrb	r0, [r0, r1]
         ca3b4:	e350000e 	cmp	r0, #14	; 0xe
         ca3b8:	908ff100 	addls	pc, pc, r0, lsl #2
         ca3bc:	ea000038 	b	ca4a4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x20c>
         ca3c0:	ea000037 	b	ca4a4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x20c>
         ca3c4:	ea000036 	b	ca4a4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x20c>
         ca3c8:	ea000035 	b	ca4a4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x20c>
         ca3cc:	ea000009 	b	ca3f8 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x160>
         ca3d0:	ea000033 	b	ca4a4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x20c>
         ca3d4:	ea000032 	b	ca4a4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x20c>
         ca3d8:	ea000019 	b	ca444 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x1ac>
         ca3dc:	ea000005 	b	ca3f8 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x160>
         ca3e0:	ea00002f 	b	ca4a4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x20c>
         ca3e4:	ea00002e 	b	ca4a4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x20c>
         ca3e8:	ea000002 	b	ca3f8 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x160>
         ca3ec:	ea00002c 	b	ca4a4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x20c>
         ca3f0:	ea00002b 	b	ca4a4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x20c>
         ca3f4:	ea000012 	b	ca444 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x1ac>
         ca3f8:	e5940084 	ldr	r0, [r4, #132]	; fField132
         ca3fc:	e5901010 	ldr	r1, [r0, #16]	; fField16
         ca400:	e2811001 	add	r1, r1, #1	; 0x1
         ca404:	e5a01010 	str	r1, [r0, #16]!	; fField16
         ca408:	e28d001c 	add	r0, sp, #28	; 0x1c
         ca40c:	eb690881 	bl	1b0c618 <TObjRef::$ClearSeparateTranny(void)>
         ca410:	e1b06000 	movs	r6, r0
         ca414:	01a01005 	moveq	r1, r5
         ca418:	05940084 	ldreq	r0, [r4, #132]	; fField132
         ca41c:	0b689d2a 	bleq	1af18cc <TFlashTracker::$Add(unsigned long)>
         ca420:	e28d101c 	add	r1, sp, #28	; 0x1c
         ca424:	e5940034 	ldr	r0, [r4, #52]	; fField52
         ca428:	eb68a979 	bl	1af4a14 <TFlashStoreLookupCache::$Change(TObjRef &)>
         ca42c:	e5940084 	ldr	r0, [r4, #132]	; fField132
         ca430:	e5901010 	ldr	r1, [r0, #16]	; fField16
         ca434:	e3310000 	teq	r1, #0	; 0x0
         ca438:	0a000019 	beq	ca4a4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x20c>
         ca43c:	ea000016 	b	ca49c <TFlashStore::AddToCurrentTransaction(unsigned long)+0x204>
         ca440:	0037143c 	eoreqs	r1, r7, ip, lsr r4
         ca444:	e5940084 	ldr	r0, [r4, #132]	; fField132
         ca448:	e5901010 	ldr	r1, [r0, #16]	; fField16
         ca44c:	e2811001 	add	r1, r1, #1	; 0x1
         ca450:	e5a01010 	str	r1, [r0, #16]!	; fField16
         ca454:	e1a0100d 	mov	r1, sp
         ca458:	e28d001c 	add	r0, sp, #28	; 0x1c
         ca45c:	eb68b9eb 	bl	1af8c10 <TObjRef::$FindSuperceeded(TObjRef &)>
         ca460:	e28d001c 	add	r0, sp, #28	; 0x1c
         ca464:	eb69086b 	bl	1b0c618 <TObjRef::$ClearSeparateTranny(void)>
         ca468:	e1a0000d 	mov	r0, sp
         ca46c:	eb690869 	bl	1b0c618 <TObjRef::$ClearSeparateTranny(void)>
         ca470:	e1b06000 	movs	r6, r0
         ca474:	01a01005 	moveq	r1, r5
         ca478:	05940084 	ldreq	r0, [r4, #132]	; fField132
         ca47c:	0b689d12 	bleq	1af18cc <TFlashTracker::$Add(unsigned long)>
         ca480:	e28d101c 	add	r1, sp, #28	; 0x1c
         ca484:	e5940034 	ldr	r0, [r4, #52]	; fField52
         ca488:	eb68a961 	bl	1af4a14 <TFlashStoreLookupCache::$Change(TObjRef &)>
         ca48c:	e5940084 	ldr	r0, [r4, #132]	; fField132
         ca490:	e5901010 	ldr	r1, [r0, #16]	; fField16
         ca494:	e3310000 	teq	r1, #0	; 0x0
         ca498:	0a000001 	beq	ca4a4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x20c>
         ca49c:	e2411001 	sub	r1, r1, #1	; 0x1
         ca4a0:	e5a01010 	str	r1, [r0, #16]!	; fField16
         ca4a4:	e1a00004 	mov	r0, r4
         ca4a8:	eb68f7ee 	bl	1b08468 <TFlashStore::$UnlockStore(void)>
         ca4ac:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         ca4b0:	e1a0100d 	mov	r1, sp
         ca4b4:	eb68e344 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         ca4b8:	e59d002c 	ldr	r0, [sp, #44]	; fField44
         ca4bc:	e28d101c 	add	r1, sp, #28	; 0x1c
         ca4c0:	eb68e341 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         ca4c4:	e28dd038 	add	sp, sp, #56	; 0x38
         ca4c8:	ea00000b 	b	ca4fc <TFlashStore::AddToCurrentTransaction(unsigned long)+0x264>
         ca4cc:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         ca4d0:	e59f1040 	ldr	r1, [pc, #40]	; ca518 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x280>	; fField40
         ca4d4:	e5911000 	ldr	r1, [r1]
         ca4d8:	eb6c632d 	bl	1be3194 <$Subexception>
         ca4dc:	e3300000 	teq	r0, #0	; 0x0
         ca4e0:	0a000003 	beq	ca4f4 <TFlashStore::AddToCurrentTransaction(unsigned long)+0x25c>
         ca4e4:	e1a00004 	mov	r0, r4
         ca4e8:	eb68fbf6 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         ca4ec:	e5847080 	str	r7, [r4, #128]	; fField128
         ca4f0:	e584707c 	str	r7, [r4, #124]	; fField124
         ca4f4:	e1a0000d 	mov	r0, sp
         ca4f8:	eb6c5f15 	bl	1be2154 <$NextHandler>
         ca4fc:	e1a0000d 	mov	r0, sp
         ca500:	eb6c5aec 	bl	1be10b8 <$ExitHandler>
         ca504:	e28dd06c 	add	sp, sp, #108	; 0x6c
         ca508:	e1a00004 	mov	r0, r4
         ca50c:	eb68fbed 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         ca510:	e1a00006 	mov	r0, r6
         ca514:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         ca518:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::InSeparateTransaction(unsigned long)
 * Address: 000ca51c
 */
TFlashStore::InSeparateTransaction(unsigned long) {
    /*
         ca51c:	e1a0c00d 	mov	ip, sp
         ca520:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         ca524:	e24cb004 	sub	fp, ip, #4	; 0x4
         ca528:	e1a04000 	mov	r4, r0
         ca52c:	e1a05001 	mov	r5, r1
         ca530:	e3a06000 	mov	r6, #0	; 0x0
         ca534:	eb68fbe6 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         ca538:	e3a07000 	mov	r7, #0	; 0x0
         ca53c:	e52d706c 	str	r7, [sp, -#108]!	; fField108
         ca540:	e28d0008 	add	r0, sp, #8	; 0x8
         ca544:	eb6ba10a 	bl	1bb2974 <$setjmp>
         ca548:	e3300000 	teq	r0, #0	; 0x0
         ca54c:	1a00001e 	bne	ca5cc <TFlashStore::InSeparateTransaction(unsigned long)+0xb0>
         ca550:	e1a0000d 	mov	r0, sp
         ca554:	eb6c56c8 	bl	1be007c <$AddExceptionHandler>
         ca558:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         ca55c:	e594004c 	ldr	r0, [r4, #76]	; fField76
         ca560:	e59d1000 	ldr	r1, [sp]
         ca564:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         ca568:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         ca56c:	e1810000 	orr	r0, r1, r0
         ca570:	e58d0000 	str	r0, [sp]
         ca574:	e58d4010 	str	r4, [sp, #16]	; fField16
         ca578:	e1a00004 	mov	r0, r4
         ca57c:	e1a0100d 	mov	r1, sp
         ca580:	eb689cce 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         ca584:	e1a0300d 	mov	r3, sp
         ca588:	e1a01005 	mov	r1, r5
         ca58c:	e1a00004 	mov	r0, r4
         ca590:	e3a02000 	mov	r2, #0	; 0x0
         ca594:	eb68d275 	bl	1afef70 <TFlashStore::$Lookup(unsigned long, int, TObjRef &)>
         ca598:	e3300000 	teq	r0, #0	; 0x0
         ca59c:	1a000005 	bne	ca5b8 <TFlashStore::InSeparateTransaction(unsigned long)+0x9c>
         ca5a0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         ca5a4:	e2001006 	and	r1, r0, #6	; 0x6
         ca5a8:	e3310004 	teq	r1, #4	; 0x4
         ca5ac:	13a00000 	movne	r0, #0	; 0x0
         ca5b0:	03a00001 	moveq	r0, #1	; 0x1
         ca5b4:	e20060ff 	and	r6, r0, #255	; 0xff
         ca5b8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         ca5bc:	e1a0100d 	mov	r1, sp
         ca5c0:	eb68e301 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         ca5c4:	e28dd01c 	add	sp, sp, #28	; 0x1c
         ca5c8:	ea00000b 	b	ca5fc <TFlashStore::InSeparateTransaction(unsigned long)+0xe0>
         ca5cc:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         ca5d0:	e59f1040 	ldr	r1, [pc, #40]	; ca618 <TFlashStore::InSeparateTransaction(unsigned long)+0xfc>	; fField40
         ca5d4:	e5911000 	ldr	r1, [r1]
         ca5d8:	eb6c62ed 	bl	1be3194 <$Subexception>
         ca5dc:	e3300000 	teq	r0, #0	; 0x0
         ca5e0:	0a000003 	beq	ca5f4 <TFlashStore::InSeparateTransaction(unsigned long)+0xd8>
         ca5e4:	e1a00004 	mov	r0, r4
         ca5e8:	eb68fbb6 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         ca5ec:	e5847080 	str	r7, [r4, #128]	; fField128
         ca5f0:	e584707c 	str	r7, [r4, #124]	; fField124
         ca5f4:	e1a0000d 	mov	r0, sp
         ca5f8:	eb6c5ed5 	bl	1be2154 <$NextHandler>
         ca5fc:	e1a0000d 	mov	r0, sp
         ca600:	eb6c5aac 	bl	1be10b8 <$ExitHandler>
         ca604:	e28dd06c 	add	sp, sp, #108	; 0x6c
         ca608:	e1a00004 	mov	r0, r4
         ca60c:	eb68fbad 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         ca610:	e1a00006 	mov	r0, r6
         ca614:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         ca618:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::LockReadOnly(void)
 * Address: 000ca61c
 */
TFlashStore::LockReadOnly(void) {
    /*
         ca61c:	e59010d4 	ldr	r1, [r0, #212]	; fField212
         ca620:	e2811001 	add	r1, r1, #1	; 0x1
         ca624:	e5a010d4 	str	r1, [r0, #212]!	; fField212
         ca628:	e3a00000 	mov	r0, #0	; 0x0
         ca62c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::UnlockReadOnly(unsigned char)
 * Address: 000ca630
 */
TFlashStore::UnlockReadOnly(unsigned char) {
    /*
         ca630:	e31100ff 	tst	r1, #255	; 0xff
         ca634:	e3a01000 	mov	r1, #0	; 0x0
         ca638:	15a010d4 	strne	r1, [r0, #212]!	; fField212
         ca63c:	1a000003 	bne	ca650 <TFlashStore::UnlockReadOnly(unsigned char)+0x20>
         ca640:	e59020d4 	ldr	r2, [r0, #212]	; fField212
         ca644:	e3520000 	cmp	r2, #0	; 0x0
         ca648:	82422001 	subhi	r2, r2, #1	; 0x1
         ca64c:	85a020d4 	strhi	r2, [r0, #212]!	; fField212
         ca650:	e1a00001 	mov	r0, r1
         ca654:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::InTransaction(void)
 * Address: 000ca658
 */
TFlashStore::InTransaction(void) {
    /*
         ca658:	e5d00016 	ldrb	r0, [r0, #22]	; fField22
         ca65c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)
 * Address: 000ca660
 */
TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char) {
    /*
         ca660:	e1a0c00d 	mov	ip, sp
         ca664:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ca668:	e24cb004 	sub	fp, ip, #4	; 0x4
         ca66c:	e1a04000 	mov	r4, r0
         ca670:	e1a05001 	mov	r5, r1
         ca674:	e1a06002 	mov	r6, r2
         ca678:	e20380ff 	and	r8, r3, #255	; 0xff
         ca67c:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         ca680:	e20090ff 	and	r9, r0, #255	; 0xff
         ca684:	e3a07000 	mov	r7, #0	; 0x0
         ca688:	e1a00004 	mov	r0, r4
         ca68c:	eb68d220 	bl	1afef14 <TFlashStore::$IsROM(void)>
         ca690:	e59fa02c 	ldr	sl, [pc, #2c]	; ca6c4 <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0x64>
         ca694:	e3300000 	teq	r0, #0	; 0x0
         ca698:	1a000007 	bne	ca6bc <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0x5c>
         ca69c:	e1a00004 	mov	r0, r4
         ca6a0:	eb68d229 	bl	1afef4c <TFlashStore::$IsWriteProtected(void)>
         ca6a4:	e3300000 	teq	r0, #0	; 0x0
         ca6a8:	0a000007 	beq	ca6cc <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0x6c>
         ca6ac:	e5d40017 	ldrb	r0, [r4, #23]	; fField23
         ca6b0:	e3300000 	teq	r0, #0	; 0x0
         ca6b4:	159f000c 	ldrne	r0, [pc, #c]	; ca6c8 <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0x68>
         ca6b8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         ca6bc:	e1a0000a 	mov	r0, sl
         ca6c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         ca6c4:	ffffd693 	swinv	0x00ffd693
         ca6c8:	ffffd683 	swinv	0x00ffd683
         ca6cc:	e3380000 	teq	r8, #0	; 0x0
         ca6d0:	0a000004 	beq	ca6e8 <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0x88>
         ca6d4:	e5940074 	ldr	r0, [r4, #116]	; fField116
         ca6d8:	e3300000 	teq	r0, #0	; 0x0
         ca6dc:	03a00085 	moveq	r0, #133	; 0x85
         ca6e0:	02400c2a 	subeq	r0, r0, #10752	; 0x2a00
         ca6e4:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         ca6e8:	e5940088 	ldr	r0, [r4, #136]	; fField136
         ca6ec:	e28410a4 	add	r1, r4, #164	; 0xa4
         ca6f0:	e1300001 	teq	r0, r1
         ca6f4:	1a00000c 	bne	ca72c <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0xcc>
         ca6f8:	e3a03000 	mov	r3, #0	; 0x0
         ca6fc:	e92d0008 	stmdb	sp!, {r3}
         ca700:	e2841050 	add	r1, r4, #80	; 0x50
         ca704:	e8910003 	ldmia	r1, {r0, r1}
         ca708:	e0020091 	mul	r2, r1, r0
         ca70c:	e594008c 	ldr	r0, [r4, #140]	; fField140
         ca710:	e2800034 	add	r0, r0, #52	; 0x34
         ca714:	e5941018 	ldr	r1, [r4, #24]	; fField24
         ca718:	eb68c5ae 	bl	1afbdd8 <TStoreDriver::$Init(char *, unsigned long, char *, unsigned long)>
         ca71c:	e28dd004 	add	sp, sp, #4	; 0x4
         ca720:	e594008c 	ldr	r0, [r4, #140]	; fField140
         ca724:	e2800034 	add	r0, r0, #52	; 0x34
         ca728:	e5840088 	str	r0, [r4, #136]	; fField136
         ca72c:	e5d40017 	ldrb	r0, [r4, #23]	; fField23
         ca730:	e3300000 	teq	r0, #0	; 0x0
         ca734:	0a000004 	beq	ca74c <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0xec>
         ca738:	e1a00004 	mov	r0, r4
         ca73c:	e3a01001 	mov	r1, #1	; 0x1
         ca740:	eb68de8a 	bl	1b02170 <TFlashStore::$RecoveryCheck(unsigned char)>
         ca744:	e1b07000 	movs	r7, r0
         ca748:	1a000017 	bne	ca7ac <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0x14c>
         ca74c:	e3390000 	teq	r9, #0	; 0x0
         ca750:	0a000006 	beq	ca770 <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0x110>
         ca754:	e5d40016 	ldrb	r0, [r4, #22]	; fField22
         ca758:	e3300000 	teq	r0, #0	; 0x0
         ca75c:	1a000003 	bne	ca770 <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0x110>
         ca760:	e1a00004 	mov	r0, r4
         ca764:	eb68f31f 	bl	1b073e8 <TFlashStore::$StartTransaction(void)>
         ca768:	e1b07000 	movs	r7, r0
         ca76c:	1a00000e 	bne	ca7ac <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0x14c>
         ca770:	e3750001 	cmn	r5, #1	; 0x1
         ca774:	0a00000c 	beq	ca7ac <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0x14c>
         ca778:	e1a01005 	mov	r1, r5
         ca77c:	e1a00004 	mov	r0, r4
         ca780:	eb68fb4b 	bl	1b094b4 <TFlashStore::$ValidateIncomingPSSID(unsigned long)>
         ca784:	e1b07000 	movs	r7, r0
         ca788:	1a000007 	bne	ca7ac <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0x14c>
         ca78c:	e3750001 	cmn	r5, #1	; 0x1
         ca790:	0a000005 	beq	ca7ac <TFlashStore::SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)+0x14c>
         ca794:	e1a03006 	mov	r3, r6
         ca798:	e1a01005 	mov	r1, r5
         ca79c:	e1a00004 	mov	r0, r4
         ca7a0:	e3a02000 	mov	r2, #0	; 0x0
         ca7a4:	eb68d1f1 	bl	1afef70 <TFlashStore::$Lookup(unsigned long, int, TObjRef &)>
         ca7a8:	e1a07000 	mov	r7, r0
         ca7ac:	e1a00007 	mov	r0, r7
         ca7b0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::InternalStoreSlop(void)
 * Address: 000ca7b4
 */
TFlashStore::InternalStoreSlop(void) {
    /*
         ca7b4:	e5d00097 	ldrb	r0, [r0, #151]	; fField151
         ca7b8:	e3300000 	teq	r0, #0	; 0x0
         ca7bc:	03a00b06 	moveq	r0, #6144	; 0x1800
         ca7c0:	159f0004 	ldrne	r0, [pc, #4]	; ca7cc <TFlashStore::InternalStoreSlop(void)+0x18>	; fField4
         ca7c4:	15900008 	ldrne	r0, [r0, #8]	; fField8
         ca7c8:	e1a0f00e 	mov	pc, lr
         ca7cc:	0c100dd8 	ldceq	13, cr0, [r0], -#864
    */
}

/**
 * Symbol: TFlashStore::NewWithinTransaction(long, unsigned char, unsigned long *)
 * Address: 000ca7d0
 */
TFlashStore::NewWithinTransaction(long, unsigned char, unsigned long *) {
    /*
         ca7d0:	e1a0c00d 	mov	ip, sp
         ca7d4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         ca7d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         ca7dc:	e1a04000 	mov	r4, r0
         ca7e0:	e1a06001 	mov	r6, r1
         ca7e4:	e1a05003 	mov	r5, r3
         ca7e8:	e20290ff 	and	r9, r2, #255	; 0xff
         ca7ec:	e5900050 	ldr	r0, [r0, #80]	; fField80
         ca7f0:	e2400b01 	sub	r0, r0, #1024	; 0x400
         ca7f4:	e1500001 	cmp	r0, r1
         ca7f8:	33a00082 	movcc	r0, #130	; 0x82
         ca7fc:	32400c2a 	subcc	r0, r0, #10752	; 0x2a00
         ca800:	391babf0 	ldmccdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         ca804:	e3a07000 	mov	r7, #0	; 0x0
         ca808:	e1a00004 	mov	r0, r4
         ca80c:	eb68fb30 	bl	1b094d4 <TFlashStore::$VppOn(void)>
         ca810:	e3a08000 	mov	r8, #0	; 0x0
         ca814:	e52d806c 	str	r8, [sp, -#108]!	; fField108
         ca818:	e28d0008 	add	r0, sp, #8	; 0x8
         ca81c:	eb6ba054 	bl	1bb2974 <$setjmp>
         ca820:	e3300000 	teq	r0, #0	; 0x0
         ca824:	1a000043 	bne	ca938 <TFlashStore::NewWithinTransaction(long, unsigned char, unsigned long *)+0x168>
         ca828:	e1a0000d 	mov	r0, sp
         ca82c:	eb6c5612 	bl	1be007c <$AddExceptionHandler>
         ca830:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         ca834:	e594004c 	ldr	r0, [r4, #76]	; fField76
         ca838:	e59d1000 	ldr	r1, [sp]
         ca83c:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         ca840:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         ca844:	e1810000 	orr	r0, r1, r0
         ca848:	e58d0000 	str	r0, [sp]
         ca84c:	e58d4010 	str	r4, [sp, #16]	; fField16
         ca850:	e1a00004 	mov	r0, r4
         ca854:	e1a0100d 	mov	r1, sp
         ca858:	eb689c18 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         ca85c:	e3a03000 	mov	r3, #0	; 0x0
         ca860:	e92d0008 	stmdb	sp!, {r3}
         ca864:	e1a00004 	mov	r0, r4
         ca868:	e3a02000 	mov	r2, #0	; 0x0
         ca86c:	e3e01000 	mvn	r1, #0	; 0x0
         ca870:	eb69034b 	bl	1b0b5a4 <TFlashStore::$SetupForModify(unsigned long, TObjRef *, unsigned char, unsigned char)>
         ca874:	e28dd004 	add	sp, sp, #4	; 0x4
         ca878:	e1a07000 	mov	r7, r0
         ca87c:	e3350000 	teq	r5, #0	; 0x0
         ca880:	0a000027 	beq	ca924 <TFlashStore::NewWithinTransaction(long, unsigned char, unsigned long *)+0x154>
         ca884:	e3570000 	cmp	r7, #0	; 0x0
         ca888:	1a000012 	bne	ca8d8 <TFlashStore::NewWithinTransaction(long, unsigned char, unsigned long *)+0x108>
         ca88c:	e1a00004 	mov	r0, r4
         ca890:	eb68a444 	bl	1af39a8 <TFlashStore::$Avail(void)>
         ca894:	e1a07000 	mov	r7, r0
         ca898:	e1a00004 	mov	r0, r4
         ca89c:	ebffffc4 	bl	ca7b4 <TFlashStore::InternalStoreSlop(void)>
         ca8a0:	e1570000 	cmp	r7, r0
         ca8a4:	2a00000c 	bcs	ca8dc <TFlashStore::NewWithinTransaction(long, unsigned char, unsigned long *)+0x10c>
         ca8a8:	e1a00004 	mov	r0, r4
         ca8ac:	ebfffcde 	bl	c9c2c <TFlashStore::GC(void)>
         ca8b0:	e1a00004 	mov	r0, r4
         ca8b4:	eb68a43b 	bl	1af39a8 <TFlashStore::$Avail(void)>
         ca8b8:	e1a07000 	mov	r7, r0
         ca8bc:	e1a00004 	mov	r0, r4
         ca8c0:	ebffffbb 	bl	ca7b4 <TFlashStore::InternalStoreSlop(void)>
         ca8c4:	e1570000 	cmp	r7, r0
         ca8c8:	359f7004 	ldrcc	r7, [pc, #4]	; ca8d4 <TFlashStore::NewWithinTransaction(long, unsigned char, unsigned long *)+0x104>	; fField4
         ca8cc:	3a000014 	bcc	ca924 <TFlashStore::NewWithinTransaction(long, unsigned char, unsigned long *)+0x154>
         ca8d0:	ea000001 	b	ca8dc <TFlashStore::NewWithinTransaction(long, unsigned char, unsigned long *)+0x10c>
         ca8d4:	ffffd687 	swinv	0x00ffd687
         ca8d8:	1a000011 	bne	ca924 <TFlashStore::NewWithinTransaction(long, unsigned char, unsigned long *)+0x154>
         ca8dc:	e1a03009 	mov	r3, r9
         ca8e0:	e3a02001 	mov	r2, #1	; 0x1
         ca8e4:	e1a0100d 	mov	r1, sp
         ca8e8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         ca8ec:	e5d4003d 	ldrb	r0, [r4, #61]	; fField61
         ca8f0:	e3300000 	teq	r0, #0	; 0x0
         ca8f4:	03a0200a 	moveq	r2, #10	; 0xa
         ca8f8:	13a02003 	movne	r2, #3	; 0x3
         ca8fc:	e1a03006 	mov	r3, r6
         ca900:	e1a00004 	mov	r0, r4
         ca904:	e3e01000 	mvn	r1, #0	; 0x0
         ca908:	eb68ff18 	bl	1b0a570 <TFlashStore::$AddObject(unsigned long, int, unsigned long, TObjRef &, unsigned char, unsigned char)>
         ca90c:	e28dd00c 	add	sp, sp, #12	; 0xc
         ca910:	e1b07000 	movs	r7, r0
         ca914:	15858000 	strne	r8, [r5]
         ca918:	059d0000 	ldreq	r0, [sp]
         ca91c:	03c0020f 	biceq	r0, r0, #-268435456	; 0xf0000000
         ca920:	05850000 	streq	r0, [r5]
         ca924:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         ca928:	e1a0100d 	mov	r1, sp
         ca92c:	eb68e226 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         ca930:	e28dd01c 	add	sp, sp, #28	; 0x1c
         ca934:	ea00000b 	b	ca968 <TFlashStore::NewWithinTransaction(long, unsigned char, unsigned long *)+0x198>
         ca938:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         ca93c:	e59f1040 	ldr	r1, [pc, #40]	; ca984 <TFlashStore::NewWithinTransaction(long, unsigned char, unsigned long *)+0x1b4>	; fField40
         ca940:	e5911000 	ldr	r1, [r1]
         ca944:	eb6c6212 	bl	1be3194 <$Subexception>
         ca948:	e3300000 	teq	r0, #0	; 0x0
         ca94c:	0a000003 	beq	ca960 <TFlashStore::NewWithinTransaction(long, unsigned char, unsigned long *)+0x190>
         ca950:	e1a00004 	mov	r0, r4
         ca954:	eb68fadb 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         ca958:	e5848080 	str	r8, [r4, #128]	; fField128
         ca95c:	e584807c 	str	r8, [r4, #124]	; fField124
         ca960:	e1a0000d 	mov	r0, sp
         ca964:	eb6c5dfa 	bl	1be2154 <$NextHandler>
         ca968:	e1a0000d 	mov	r0, sp
         ca96c:	eb6c59d1 	bl	1be10b8 <$ExitHandler>
         ca970:	e28dd06c 	add	sp, sp, #108	; 0x6c
         ca974:	e1a00004 	mov	r0, r4
         ca978:	eb68fad2 	bl	1b094c8 <TFlashStore::$VppOff(void)>
         ca97c:	e1a00007 	mov	r0, r7
         ca980:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         ca984:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::CalcXIPObjectSize(long, long, long *)
 * Address: 000ca988
 */
TFlashStore::CalcXIPObjectSize(long, long, long *) {
    /*
         ca988:	e1a0c00d 	mov	ip, sp
         ca98c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ca990:	e24cb004 	sub	fp, ip, #4	; 0x4
         ca994:	e1a04000 	mov	r4, r0
         ca998:	e1a05001 	mov	r5, r1
         ca99c:	e1a07002 	mov	r7, r2
         ca9a0:	e1a06003 	mov	r6, r3
         ca9a4:	e5d00091 	ldrb	r0, [r0, #145]	; fField145
         ca9a8:	e3300000 	teq	r0, #0	; 0x0
         ca9ac:	05d40097 	ldreqb	r0, [r4, #151]	; fField151
         ca9b0:	03300000 	teqeq	r0, #0	; 0x0
         ca9b4:	13e000ab 	mvnne	r0, #171	; 0xab
         ca9b8:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         ca9bc:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         ca9c0:	e24dd03c 	sub	sp, sp, #60	; 0x3c
         ca9c4:	e3a00000 	mov	r0, #0	; 0x0
         ca9c8:	e3a02000 	mov	r2, #0	; 0x0
         ca9cc:	e78d2100 	str	r2, [sp, r0, lsl #2]
         ca9d0:	e2800001 	add	r0, r0, #1	; 0x1
         ca9d4:	e350000f 	cmp	r0, #15	; 0xf
         ca9d8:	bafffffa 	blt	ca9c8 <TFlashStore::CalcXIPObjectSize(long, long, long *)+0x40>
         ca9dc:	e3a09000 	mov	r9, #0	; 0x0
         ca9e0:	e1a00004 	mov	r0, r4
         ca9e4:	eb68f282 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         ca9e8:	e3500000 	cmp	r0, #0	; 0x0
         ca9ec:	9a000021 	bls	caa78 <TFlashStore::CalcXIPObjectSize(long, long, long *)+0xf0>
         ca9f0:	e5941058 	ldr	r1, [r4, #88]	; fField88
         ca9f4:	e1a01139 	mov	r1, r9, lsr r1
         ca9f8:	e594002c 	ldr	r0, [r4, #44]	; fField44
         ca9fc:	e7900101 	ldr	r0, [r0, r1, lsl #2]
         caa00:	e1a0a000 	mov	sl, r0
         caa04:	eb68fec6 	bl	1b0a524 <TFlashBlock::$Yield(void)>
         caa08:	e2400a01 	sub	r0, r0, #4096	; 0x1000
         caa0c:	e0408007 	sub	r8, r0, r7
         caa10:	e1a0000a 	mov	r0, sl
         caa14:	eb68d14b 	bl	1afef48 <TFlashBlock::$IsVirgin(void)>
         caa18:	e3300000 	teq	r0, #0	; 0x0
         caa1c:	0a000003 	beq	caa30 <TFlashStore::CalcXIPObjectSize(long, long, long *)+0xa8>
         caa20:	e1a0000a 	mov	r0, sl
         caa24:	eb68e60e 	bl	1b04264 <TFlashBlock::$RootDirSize(void)>
         caa28:	e2800004 	add	r0, r0, #4	; 0x4
         caa2c:	e0488000 	sub	r8, r8, r0
         caa30:	e3580901 	cmp	r8, #16384	; 0x4000
         caa34:	da000009 	ble	caa60 <TFlashStore::CalcXIPObjectSize(long, long, long *)+0xd8>
         caa38:	e3580000 	cmp	r8, #0	; 0x0
         caa3c:	b2488001 	sublt	r8, r8, #1	; 0x1
         caa40:	b2888a01 	addlt	r8, r8, #4096	; 0x1000
         caa44:	e1a08648 	mov	r8, r8, asr #12
         caa48:	e358000f 	cmp	r8, #15	; 0xf
         caa4c:	c3a0800f 	movgt	r8, #15	; 0xf
         caa50:	e08d0108 	add	r0, sp, r8, lsl #2
         caa54:	e5101004 	ldr	r1, [r0, -#4]	; fField4
         caa58:	e2811001 	add	r1, r1, #1	; 0x1
         caa5c:	e5201004 	str	r1, [r0, -#4]!	; fField4
         caa60:	e5940050 	ldr	r0, [r4, #80]	; fField80
         caa64:	e0809009 	add	r9, r0, r9
         caa68:	e1a00004 	mov	r0, r4
         caa6c:	eb68f260 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         caa70:	e1500009 	cmp	r0, r9
         caa74:	8affffdd 	bhi	ca9f0 <TFlashStore::CalcXIPObjectSize(long, long, long *)+0x68>
         caa78:	e3a0000e 	mov	r0, #14	; 0xe
         caa7c:	e3a02a01 	mov	r2, #4096	; 0x1000
         caa80:	e0821600 	add	r1, r2, r0, lsl #12
         caa84:	e79d3100 	ldr	r3, [sp, r0, lsl #2]
         caa88:	e0030391 	mul	r3, r1, r3
         caa8c:	e1530005 	cmp	r3, r5
         caa90:	ba00000a 	blt	caac0 <TFlashStore::CalcXIPObjectSize(long, long, long *)+0x138>
         caa94:	e1510005 	cmp	r1, r5
         caa98:	ba000005 	blt	caab4 <TFlashStore::CalcXIPObjectSize(long, long, long *)+0x12c>
         caa9c:	e3550a01 	cmp	r5, #4096	; 0x1000
         caaa0:	c1a00625 	movgt	r0, r5, lsr #12
         caaa4:	c1a00600 	movgt	r0, r0, lsl #12
         caaa8:	c5860000 	strgt	r0, [r6]
         caaac:	d5862000 	strle	r2, [r6]
         caab0:	ea000000 	b	caab8 <TFlashStore::CalcXIPObjectSize(long, long, long *)+0x130>
         caab4:	e5861000 	str	r1, [r6]
         caab8:	e3a00000 	mov	r0, #0	; 0x0
         caabc:	ea000002 	b	caacc <TFlashStore::CalcXIPObjectSize(long, long, long *)+0x144>
         caac0:	e2500001 	subs	r0, r0, #1	; 0x1
         caac4:	5affffed 	bpl	caa80 <TFlashStore::CalcXIPObjectSize(long, long, long *)+0xf8>
         caac8:	e59f0000 	ldr	r0, [pc, #0]	; caad0 <TFlashStore::CalcXIPObjectSize(long, long, long *)+0x148>
         caacc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         caad0:	ffffd687 	swinv	0x00ffd687
    */
}

/**
 * Symbol: TFlashStore::NewXIPObject(long, unsigned long *)
 * Address: 000caad4
 */
TFlashStore::NewXIPObject(long, unsigned long *) {
    /*
         caad4:	e5d03091 	ldrb	r3, [r0, #145]	; fField145
         caad8:	e3330000 	teq	r3, #0	; 0x0
         caadc:	05d03097 	ldreqb	r3, [r0, #151]	; fField151
         caae0:	03330000 	teqeq	r3, #0	; 0x0
         caae4:	13e000ab 	mvnne	r0, #171	; 0xab
         caae8:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         caaec:	01a03002 	moveq	r3, r2
         caaf0:	03a02001 	moveq	r2, #1	; 0x1
         caaf4:	0a6902a5 	beq	1b0b590 <TFlashStore::$NewWithinTransaction(long, unsigned char, unsigned long *)>
         caaf8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)
 * Address: 000cab40
 */
TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *) {
    /*
         cab40:	e1a0c00d 	mov	ip, sp
         cab44:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         cab48:	e24cb004 	sub	fp, ip, #4	; 0x4
         cab4c:	e1a04000 	mov	r4, r0
         cab50:	e1a07001 	mov	r7, r1
         cab54:	e1a06002 	mov	r6, r2
         cab58:	e1a05003 	mov	r5, r3
         cab5c:	e3a00000 	mov	r0, #0	; 0x0
         cab60:	e59ba004 	ldr	sl, [fp, #4]	; fField4
         cab64:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         cab68:	e1a00004 	mov	r0, r4
         cab6c:	eb68fa53 	bl	1b094c0 <TFlashStore::$VccOn(void)>
         cab70:	e3a08000 	mov	r8, #0	; 0x0
         cab74:	e52d806c 	str	r8, [sp, -#108]!	; fField108
         cab78:	e28d0008 	add	r0, sp, #8	; 0x8
         cab7c:	eb6b9f7c 	bl	1bb2974 <$setjmp>
         cab80:	e3300000 	teq	r0, #0	; 0x0
         cab84:	1a00005c 	bne	cacfc <TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x1bc>
         cab88:	e1a0000d 	mov	r0, sp
         cab8c:	eb6c553a 	bl	1be007c <$AddExceptionHandler>
         cab90:	e3a09001 	mov	r9, #1	; 0x1
         cab94:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         cab98:	e594004c 	ldr	r0, [r4, #76]	; fField76
         cab9c:	e59d1000 	ldr	r1, [sp]
         caba0:	e201120f 	and	r1, r1, #-268435456	; 0xf0000000
         caba4:	e3c0020f 	bic	r0, r0, #-268435456	; 0xf0000000
         caba8:	e1810000 	orr	r0, r1, r0
         cabac:	e58d0000 	str	r0, [sp]
         cabb0:	e58d4010 	str	r4, [sp, #16]	; fField16
         cabb4:	e1a00004 	mov	r0, r4
         cabb8:	e1a0100d 	mov	r1, sp
         cabbc:	eb689b3f 	bl	1af18c0 <TFlashStore::$Add(TObjRef *)>
         cabc0:	e1a0200d 	mov	r2, sp
         cabc4:	e1a01007 	mov	r1, r7
         cabc8:	e1a00004 	mov	r0, r4
         cabcc:	eb68ede3 	bl	1b06360 <TFlashStore::$SetupForRead(unsigned long, TObjRef *)>
         cabd0:	e58d0088 	str	r0, [sp, #136]	; fField136
         cabd4:	e3300000 	teq	r0, #0	; 0x0
         cabd8:	1a000042 	bne	cace8 <TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x1a8>
         cabdc:	e5940018 	ldr	r0, [r4, #24]	; fField24
         cabe0:	e5860000 	str	r0, [r6]
         cabe4:	e1a00004 	mov	r0, r4
         cabe8:	eb68f201 	bl	1b073f4 <TFlashStore::$StoreCapacity(void)>
         cabec:	e5850000 	str	r0, [r5]
         cabf0:	e1a00004 	mov	r0, r4
         cabf4:	e59d1008 	ldr	r1, [sp, #8]	; fField8
         cabf8:	eb68f613 	bl	1b0844c <TFlashStore::$Translate(unsigned long)>
         cabfc:	e2800008 	add	r0, r0, #8	; 0x8
         cac00:	e58a0000 	str	r0, [sl]
         cac04:	e5d400e5 	ldrb	r0, [r4, #229]	; fField229
         cac08:	e3300000 	teq	r0, #0	; 0x0
         cac0c:	1a000004 	bne	cac24 <TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0xe4>
         cac10:	e28420d8 	add	r2, r4, #216	; 0xd8
         cac14:	e594001c 	ldr	r0, [r4, #28]	; fField28
         cac18:	e59f10b0 	ldr	r1, [pc, #b0]	; cacd0 <TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x190>
         cac1c:	eb69b80d 	bl	1b38c58 <$RegisterVccOffNotify(int, void (*)(void *), void *)>
         cac20:	e5c490e5 	strb	r9, [r4, #229]	; fField229
         cac24:	e5d400e4 	ldrb	r0, [r4, #228]	; fField228
         cac28:	e3300000 	teq	r0, #0	; 0x0
         cac2c:	0a00002d 	beq	cace8 <TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x1a8>
         cac30:	e5c480e4 	strb	r8, [r4, #228]	; fField228
         cac34:	e3a068eb 	mov	r6, #15400960	; 0xeb0000
         cac38:	e2866441 	add	r6, r6, #1090519040	; 0x41000000
         cac3c:	e594001c 	ldr	r0, [r4, #28]	; fField28
         cac40:	eb6cd926 	bl	1c010e0 <$GetVccTimeout(int)>
         cac44:	e1a05000 	mov	r5, r0
         cac48:	e1500006 	cmp	r0, r6
         cac4c:	2a000025 	bcs	cace8 <TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x1a8>
         cac50:	e24dd018 	sub	sp, sp, #24	; 0x18
         cac54:	e3a068c2 	mov	r6, #12713984	; 0xc20000
         cac58:	e2866401 	add	r6, r6, #16777216	; 0x1000000
         cac5c:	e28d0008 	add	r0, sp, #8	; 0x8
         cac60:	eb6c235c 	bl	1bd39d8 <$GetGlobalTime>
         cac64:	e28400dc 	add	r0, r4, #220	; 0xdc
         cac68:	e24dd008 	sub	sp, sp, #8	; 0x8
         cac6c:	e28d1010 	add	r1, sp, #16	; 0x10
         cac70:	e8915000 	ldmia	r1, {ip, lr}
         cac74:	e88d5000 	stmia	sp, {ip, lr}
         cac78:	e1a0100d 	mov	r1, sp
         cac7c:	eb6c5906 	bl	1be109c <$CompSub>
         cac80:	e28d0008 	add	r0, sp, #8	; 0x8
         cac84:	e8bd5000 	ldmia	sp!, {ip, lr}
         cac88:	e8805000 	stmia	r0, {ip, lr}
         cac8c:	e28d1010 	add	r1, sp, #16	; 0x10
         cac90:	e89d5000 	ldmia	sp, {ip, lr}
         cac94:	e8815000 	stmia	r1, {ip, lr}
         cac98:	e28d0010 	add	r0, sp, #16	; 0x10
         cac9c:	e3a019e1 	mov	r1, #3686400	; 0x384000
         caca0:	eb6c16e3 	bl	1bd0834 <TTime::$ConvertTo(TimeUnits)>
         caca4:	e59d0014 	ldr	r0, [sp, #20]	; fField20
         caca8:	e35008e1 	cmp	r0, #14745600	; 0xe10000
         cacac:	2a000008 	bcs	cacd4 <TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x194>
         cacb0:	e1a01085 	mov	r1, r5, lsl #1
         cacb4:	e3a008eb 	mov	r0, #15400960	; 0xeb0000
         cacb8:	e2800441 	add	r0, r0, #1090519040	; 0x41000000
         cacbc:	e1510000 	cmp	r1, r0
         cacc0:	81a01000 	movhi	r1, r0
         cacc4:	e594001c 	ldr	r0, [r4, #28]	; fField28
         cacc8:	eb6cd905 	bl	1c010e4 <$SetVccTimeout(int, unsigned long)>
         caccc:	ea000004 	b	cace4 <TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x1a4>
         cacd0:	01b0b59c 	ldreqb	fp, [r0, ip]!
         cacd4:	e59d0014 	ldr	r0, [sp, #20]	; fField20
         cacd8:	e1500006 	cmp	r0, r6
         cacdc:	21a010a5 	movcs	r1, r5, lsr #1
         cace0:	2afffff7 	bcs	cacc4 <TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x184>
         cace4:	e28dd018 	add	sp, sp, #24	; 0x18
         cace8:	e59d0010 	ldr	r0, [sp, #16]	; fField16
         cacec:	e1a0100d 	mov	r1, sp
         cacf0:	eb68e135 	bl	1b031cc <TFlashStore::$Remove(TObjRef *)>
         cacf4:	e28dd01c 	add	sp, sp, #28	; 0x1c
         cacf8:	ea00000b 	b	cad2c <TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x1ec>
         cacfc:	e59d0060 	ldr	r0, [sp, #96]	; fField96
         cad00:	e59f1040 	ldr	r1, [pc, #40]	; cad48 <TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x208>	; fField40
         cad04:	e5911000 	ldr	r1, [r1]
         cad08:	eb6c6121 	bl	1be3194 <$Subexception>
         cad0c:	e3300000 	teq	r0, #0	; 0x0
         cad10:	0a000003 	beq	cad24 <TFlashStore::GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)+0x1e4>
         cad14:	e5848080 	str	r8, [r4, #128]	; fField128
         cad18:	e584807c 	str	r8, [r4, #124]	; fField124
         cad1c:	e1a00004 	mov	r0, r4
         cad20:	eb68f9e5 	bl	1b094bc <TFlashStore::$VccOff(void)>
         cad24:	e1a0000d 	mov	r0, sp
         cad28:	eb6c5d09 	bl	1be2154 <$NextHandler>
         cad2c:	e1a0000d 	mov	r0, sp
         cad30:	eb6c58e0 	bl	1be10b8 <$ExitHandler>
         cad34:	e28dd06c 	add	sp, sp, #108	; 0x6c
         cad38:	e1a00004 	mov	r0, r4
         cad3c:	eb68f9de 	bl	1b094bc <TFlashStore::$VccOff(void)>
         cad40:	e49d0004 	ldr	r0, [sp], #4	; fField4
         cad44:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         cad48:	003712b4 	ldreqh	r1, [r7], -r4
    */
}

/**
 * Symbol: TFlashStore::SetupForRead(unsigned long, TObjRef *)
 * Address: 000cad4c
 */
TFlashStore::SetupForRead(unsigned long, TObjRef *) {
    /*
         cad4c:	e1a0c00d 	mov	ip, sp
         cad50:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         cad54:	e24cb004 	sub	fp, ip, #4	; 0x4
         cad58:	e1a04000 	mov	r4, r0
         cad5c:	e1a05001 	mov	r5, r1
         cad60:	e1a06002 	mov	r6, r2
         cad64:	e3a00000 	mov	r0, #0	; 0x0
         cad68:	e5d41017 	ldrb	r1, [r4, #23]	; fField23
         cad6c:	e3310000 	teq	r1, #0	; 0x0
         cad70:	0a000004 	beq	cad88 <TFlashStore::SetupForRead(unsigned long, TObjRef *)+0x3c>
         cad74:	e1a00004 	mov	r0, r4
         cad78:	e3a01001 	mov	r1, #1	; 0x1
         cad7c:	eb68dcfb 	bl	1b02170 <TFlashStore::$RecoveryCheck(unsigned char)>
         cad80:	e3300000 	teq	r0, #0	; 0x0
         cad84:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         cad88:	e3750001 	cmn	r5, #1	; 0x1
         cad8c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         cad90:	e1a01005 	mov	r1, r5
         cad94:	e1a00004 	mov	r0, r4
         cad98:	eb68f9c5 	bl	1b094b4 <TFlashStore::$ValidateIncomingPSSID(unsigned long)>
         cad9c:	e3300000 	teq	r0, #0	; 0x0
         cada0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         cada4:	e1a03006 	mov	r3, r6
         cada8:	e1a01005 	mov	r1, r5
         cadac:	e1a00004 	mov	r0, r4
         cadb0:	e3a02000 	mov	r2, #0	; 0x0
         cadb4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         cadb8:	ea68d06c 	b	1afef70 <TFlashStore::$Lookup(unsigned long, int, TObjRef &)>
    */
}

/**
 * Symbol: TFlashStore::CardWPAlertProc(unsigned long, void *)
 * Address: 00277af8
 */
TFlashStore::CardWPAlertProc(unsigned long, void *) {
    /*
        277af8:	e1a0c00d 	mov	ip, sp
        277afc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        277b00:	e24cb004 	sub	fp, ip, #4	; 0x4
        277b04:	e3a01000 	mov	r1, #0	; 0x0
        277b08:	e56d1004 	strb	r1, [sp, -#4]!	; fField4
        277b0c:	e5901010 	ldr	r1, [r0, #16]	; fField16
        277b10:	e3310000 	teq	r1, #0	; 0x0
        277b14:	0a000003 	beq	277b28 <TFlashStore::CardWPAlertProc(unsigned long, void *)+0x30>
        277b18:	e1a00001 	mov	r0, r1
        277b1c:	e1a0100d 	mov	r1, sp
        277b20:	eb043a89 	bl	38654c <TFlash::GetWriteProtected(unsigned char *)>
        277b24:	ea000008 	b	277b4c <TFlashStore::CardWPAlertProc(unsigned long, void *)+0x54>
        277b28:	e5900078 	ldr	r0, [r0, #120]	; fField120
        277b2c:	e3300000 	teq	r0, #0	; 0x0
        277b30:	0a000008 	beq	277b58 <TFlashStore::CardWPAlertProc(unsigned long, void *)+0x60>
        277b34:	eb043a35 	bl	386410 <TCardHandler::CardStatus(void)>
        277b38:	e2000004 	and	r0, r0, #4	; 0x4
        277b3c:	e3300004 	teq	r0, #4	; 0x4
        277b40:	13a00000 	movne	r0, #0	; 0x0
        277b44:	03a00001 	moveq	r0, #1	; 0x1
        277b48:	e5cd0000 	strb	r0, [sp]
        277b4c:	e5dd0000 	ldrb	r0, [sp]
        277b50:	e3300000 	teq	r0, #0	; 0x0
        277b54:	1a000001 	bne	277b60 <TFlashStore::CardWPAlertProc(unsigned long, void *)+0x68>
        277b58:	e3a00001 	mov	r0, #1	; 0x1
        277b5c:	ea000000 	b	277b64 <TFlashStore::CardWPAlertProc(unsigned long, void *)+0x6c>
        277b60:	e3a00000 	mov	r0, #0	; 0x0
        277b64:	e20000ff 	and	r0, r0, #255	; 0xff
        277b68:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TFlashStore::SendAlertMgrWPBitch(int)
 * Address: 00277b6c
 */
TFlashStore::SendAlertMgrWPBitch(int) {
    /*
        277b6c:	e1a0c00d 	mov	ip, sp
        277b70:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        277b74:	e24cb004 	sub	fp, ip, #4	; 0x4
        277b78:	e1a04000 	mov	r4, r0
        277b7c:	e1a05001 	mov	r5, r1
        277b80:	e24dd030 	sub	sp, sp, #48	; 0x30
        277b84:	e28d0020 	add	r0, sp, #32	; 0x20
        277b88:	eb6556c7 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        277b8c:	e28d0010 	add	r0, sp, #16	; 0x10
        277b90:	eb6556bc 	bl	1bcd688 <TUNameServer::$__ct(void)>
        277b94:	e3a08000 	mov	r8, #0	; 0x0
        277b98:	e5cd8008 	strb	r8, [sp, #8]	; fField8
        277b9c:	e58d8004 	str	r8, [sp, #4]	; fField4
        277ba0:	e59f0070 	ldr	r0, [pc, #70]	; 277c18 <TFlashStore::SendAlertMgrWPBitch(int)+0xac>
        277ba4:	eb6594a0 	bl	1bdce2c <$Sleep(unsigned long)>
        277ba8:	e1a0300d 	mov	r3, sp
        277bac:	e92d0008 	stmdb	sp!, {r3}
        277bb0:	e28d3010 	add	r3, sp, #16	; 0x10
        277bb4:	e28d0014 	add	r0, sp, #20	; 0x14
        277bb8:	e28f2f17 	add	r2, pc, #92	; 0x5c
        277bbc:	e28f1f18 	add	r1, pc, #96	; 0x60
        277bc0:	eb657be5 	bl	1bd6b5c <TUNameServer::$Lookup(char *, char *, unsigned long *, unsigned long *)>
        277bc4:	e28dd004 	add	sp, sp, #4	; 0x4
        277bc8:	e59d100c 	ldr	r1, [sp, #12]
        277bcc:	e28d0004 	add	r0, sp, #4	; 0x4
        277bd0:	eb65631c 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        277bd4:	e3a00000 	mov	r0, #0	; 0x0
        277bd8:	eb62f7b1 	bl	1b35aa4 <TCardAlertEvent::$__ct(void)>
        277bdc:	e1a06000 	mov	r6, r0
        277be0:	e5d40016 	ldrb	r0, [r4, #22]	; fField22
        277be4:	e3300000 	teq	r0, #0	; 0x0
        277be8:	03a05001 	moveq	r5, #1	; 0x1
        277bec:	e5d40094 	ldrb	r0, [r4, #148]	; fField148
        277bf0:	e3300000 	teq	r0, #0	; 0x0
        277bf4:	13a05000 	movne	r5, #0	; 0x0
        277bf8:	e59f102c 	ldr	r1, [pc, #2c]	; 277c2c <TFlashStore::SendAlertMgrWPBitch(int)+0xc0>
        277bfc:	e3350000 	teq	r5, #0	; 0x0
        277c00:	0a00000a 	beq	277c30 <TFlashStore::SendAlertMgrWPBitch(int)+0xc4>
        277c04:	e3350001 	teq	r5, #1	; 0x1
        277c08:	01a02004 	moveq	r2, r4
        277c0c:	05960010 	ldreq	r0, [r6, #16]	; fField16
        277c10:	0b621485 	bleq	1afce2c <$Init__22TCardRepairAlertDialogFPFPvUlT1_UcPv>
        277c14:	ea000008 	b	277c3c <TFlashStore::SendAlertMgrWPBitch(int)+0xd0>
        277c18:	00059fd8 	ldreqd	r9, [r5], -r8
        277c1c:	5455506f 	ldrplb	r5, [r5], -#111
        277c20:	72740000 	rsbvcs	r0, r4, #0	; 0x0
        277c24:	616c7274 	cmnvs	ip, r4, ror r2
        277c28:	00000000 	andeq	r0, r0, r0
        277c2c:	01af4a08 	moveq	r4, r8, lsl #20
        277c30:	e1a02004 	mov	r2, r4
        277c34:	e5960010 	ldr	r0, [r6, #16]	; fField16
        277c38:	eb62147a 	bl	1afce28 <$Init__20TCardUnWPAlertDialogFPFPvUlT1_UcPv>
        277c3c:	e594101c 	ldr	r1, [r4, #28]	; fField28
        277c40:	e5960010 	ldr	r0, [r6, #16]	; fField16
        277c44:	eb6239ae 	bl	1b06304 <TAlertDialog::$SetFilterData(void *)>
        277c48:	e28d0020 	add	r0, sp, #32	; 0x20
        277c4c:	e3a01001 	mov	r1, #1	; 0x1
        277c50:	eb65778f 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        277c54:	e3a09064 	mov	r9, #100	; 0x64
        277c58:	e59f50a8 	ldr	r5, [pc, #a8]	; 277d08 <TFlashStore::SendAlertMgrWPBitch(int)+0x19c>
        277c5c:	e5d40016 	ldrb	r0, [r4, #22]	; fField22
        277c60:	e3300000 	teq	r0, #0	; 0x0
        277c64:	11a00004 	movne	r0, r4
        277c68:	1b6241f3 	blne	1b0843c <TFlashStore::$TouchMe(void)>
        277c6c:	e3a0c000 	mov	ip, #0	; 0x0
        277c70:	e1a01008 	mov	r1, r8
        277c74:	e3a03000 	mov	r3, #0	; 0x0
        277c78:	e1a02008 	mov	r2, r8
        277c7c:	e3a00000 	mov	r0, #0	; 0x0
        277c80:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        277c84:	e1a0300c 	mov	r3, ip
        277c88:	e1a02009 	mov	r2, r9
        277c8c:	e92d000c 	stmdb	sp!, {r2, r3}
        277c90:	e1a03006 	mov	r3, r6
        277c94:	e28d001c 	add	r0, sp, #28	; 0x1c
        277c98:	e3a02000 	mov	r2, #0	; 0x0
        277c9c:	e3a01001 	mov	r1, #1	; 0x1
        277ca0:	eb658c28 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        277ca4:	e28dd018 	add	sp, sp, #24	; 0x18
        277ca8:	e1a07000 	mov	r7, r0
        277cac:	e1a00005 	mov	r0, r5
        277cb0:	eb65945d 	bl	1bdce2c <$Sleep(unsigned long)>
        277cb4:	e5d40016 	ldrb	r0, [r4, #22]	; fField22
        277cb8:	e3300000 	teq	r0, #0	; 0x0
        277cbc:	11a00004 	movne	r0, r4
        277cc0:	1b6241dd 	blne	1b0843c <TFlashStore::$TouchMe(void)>
        277cc4:	e1a00004 	mov	r0, r4
        277cc8:	eb621c9f 	bl	1afef4c <TFlashStore::$IsWriteProtected(void)>
        277ccc:	e3300000 	teq	r0, #0	; 0x0
        277cd0:	1affffe1 	bne	277c5c <TFlashStore::SendAlertMgrWPBitch(int)+0xf0>
        277cd4:	e1a00006 	mov	r0, r6
        277cd8:	eb655680 	bl	1bcd6e0 <$__dl(void *)>
        277cdc:	e28d0004 	add	r0, sp, #4	; 0x4
        277ce0:	e3a01000 	mov	r1, #0	; 0x0
        277ce4:	eb655a8e 	bl	1bce724 <TUObject::$__dt(void)>
        277ce8:	e28d0010 	add	r0, sp, #16	; 0x10
        277cec:	e3a01000 	mov	r1, #0	; 0x0
        277cf0:	eb655a83 	bl	1bce704 <TUNameServer::$__dt(void)>
        277cf4:	e28d0020 	add	r0, sp, #32	; 0x20
        277cf8:	e3a01000 	mov	r1, #0	; 0x0
        277cfc:	eb655a83 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        277d00:	e1a00007 	mov	r0, r7
        277d04:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        277d08:	001c1f38 	andeqs	r1, ip, r8, lsr pc
    */
}

/**
 * Symbol: ClassInfo__11TFlashStoreSFv
 * Address: 003871d4
 */
void TFlashStore::ClassInfo() {
    /*
        3871d4:	e24f0044 	sub	r0, pc, #68	; 0x44
        3871d8:	e1a0f00e 	mov	pc, lr
        3871dc:	e3a00000 	mov	r0, #0	; 0x0
        3871e0:	e1a0f00e 	mov	pc, lr
        3871e4:	54466c61 	strplb	r6, [r6], -#3169
        3871e8:	73685374 	cmnvc	r8, #-805306367	; 0xd0000001
        3871ec:	6f726500 	swivs	0x00726500
        3871f0:	5453746f 	ldrplb	r7, [r3], -#1135
        3871f4:	7265004c 	rsbvc	r0, r5, #76	; 0x4c
        3871f8:	4f424a00 	swimi	0x00424a00
        3871fc:	00726f6d 	rsbeqs	r6, r2, sp, ror #30
        387200:	20000073 	andcs	r0, r0, r3, ror r0
        387204:	72616d00 	rsbvc	r6, r1, #0	; 0x0
        387208:	00666c73 	rsbeq	r6, r6, r3, ror ip
        38720c:	68000000 	stmvsda	r0, {}
        387210:	00000000 	andeq	r0, r0, r0
        387214:	eaffffee 	b	3871d4 <ClassInfo__11TFlashStoreSFv>
        387218:	ea5de36f 	b	1afffdc <TFlashStore::$New(void)>
        38721c:	ea5dbe37 	b	1af6b00 <TFlashStore::$Delete(void)>
        387220:	ea5dd2e7 	b	1afbdc4 <TFlashStore::$Init(void *, unsigned long, unsigned long, int, unsigned long, void *)>
        387224:	ea5de367 	b	1afffc8 <TFlashStore::$NeedsFormat(unsigned char *)>
        387228:	ea5dc692 	b	1af8c78 <TFlashStore::$Format(void)>
        38722c:	ea5dceb9 	b	1afad18 <TFlashStore::$GetRootId(unsigned long *)>
        387230:	ea5de373 	b	1b00004 <TFlashStore::$NewObject(long, unsigned long *)>
        387234:	ea5dc263 	b	1af7bc8 <TFlashStore::$EraseObject(unsigned long)>
        387238:	ea5dbe3b 	b	1af6b2c <TFlashStore::$DeleteObject(unsigned long)>
        38723c:	ea5dfc34 	b	1b06314 <TFlashStore::$SetObjectSize(unsigned long, long)>
        387240:	ea5dcaab 	b	1af9cf4 <TFlashStore::$GetObjectSize(unsigned long, long *)>
        387244:	ea5e08a9 	b	1b094f0 <TFlashStore::$Write(unsigned long, long, char *, long)>
        387248:	ea5debb6 	b	1b02128 <TFlashStore::$Read(unsigned long, long, char *, long)>
        38724c:	ea5dcebb 	b	1afad40 <TFlashStore::$GetStoreSizes(long *, long *)>
        387250:	ea5ddb29 	b	1afdefc <TFlashStore::$IsReadOnly(unsigned char *)>
        387254:	ea5ddf3d 	b	1afef50 <TFlashStore::$LockStore(void)>
        387258:	ea5e0482 	b	1b08468 <TFlashStore::$UnlockStore(void)>
        38725c:	ea5da98f 	b	1af18a0 <TFlashStore::$Abort(void)>
        387260:	ea5dd2cc 	b	1afbd98 <TFlashStore::$Idle(unsigned char *, unsigned char *)>
        387264:	ea5de371 	b	1b00030 <TFlashStore::$NextObject(unsigned long, unsigned long *)>
        387268:	ea5db5ef 	b	1af4a2c <TFlashStore::$CheckIntegrity(unsigned long *)>
        38726c:	ea5df81b 	b	1b052e0 <TFlashStore::$SetBuddy(TStore *)>
        387270:	ea5de782 	b	1b01080 <TFlashStore::$OwnsObject(unsigned long)>
        387274:	ea5dadac 	b	1af292c <TFlashStore::$Address(unsigned long)>
        387278:	ea5e005e 	b	1b073f8 <TFlashStore::$StoreKind(void)>
        38727c:	ea5dfc30 	b	1b06344 <TFlashStore::$SetStore(TStore *, unsigned long)>
        387280:	ea5ddf26 	b	1afef20 <TFlashStore::$IsSameStore(void *, unsigned long)>
        387284:	ea5ddb17 	b	1afdee8 <TFlashStore::$IsLocked(void)>
        387288:	ea5e088e 	b	1b094c8 <TFlashStore::$VppOff(void)>
        38728c:	ea5e003d 	b	1b07388 <TFlashStore::$Sleep(void)>
        387290:	ea5ddf1f 	b	1afef14 <TFlashStore::$IsROM(void)>
        387294:	eaf50a83 	b	c9ca8 <TFlashStore::NewWithinTransaction(long, unsigned long *)>
        387298:	ea5e0cb7 	b	1b0a57c <TFlashStore::$StartTransactionAgainst(unsigned long)>
        38729c:	ea5e10b7 	b	1b0b580 <TFlashStore::$SeparatelyAbort(unsigned long)>
        3872a0:	ea5e10b7 	b	1b0b584 <TFlashStore::$AddToCurrentTransaction(unsigned long)>
        3872a4:	ea5e31ce 	b	1b139e4 <TFlashStore::$InSeparateTransaction(unsigned long)>
        3872a8:	ea5e10b6 	b	1b0b588 <TFlashStore::$LockReadOnly(void)>
        3872ac:	ea5e10b6 	b	1b0b58c <TFlashStore::$UnlockReadOnly(unsigned char)>
        3872b0:	eaf50ce8 	b	ca658 <TFlashStore::InTransaction(void)>
        3872b4:	ea5e0cac 	b	1b0a56c <TFlashStore::$NewObject(char *, long, unsigned long *)>
        3872b8:	ea5e35d0 	b	1b14a00 <TFlashStore::$ReplaceObject(unsigned long, char *, long)>
        3872bc:	ea5e10b4 	b	1b0b594 <TFlashStore::$CalcXIPObjectSize(long, long, long *)>
        3872c0:	ea5e10b4 	b	1b0b598 <TFlashStore::$NewXIPObject(long, unsigned long *)>
        3872c4:	ea5e10b5 	b	1b0b5a0 <TFlashStore::$GetXIPObjectInfo(unsigned long, unsigned long *, unsigned long *, unsigned long *)>
        3872c8:	e1a0000f 	mov	r0, pc
        3872cc:	e1a0f00e 	mov	pc, lr
        3872d0:	5453746f 	ldrplb	r7, [r3], -#1135
        3872d4:	72654465 	rsbvc	r4, r5, #1694498816	; 0x65000000
        3872d8:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        3872dc:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        3872e0:	6f720000 	swivs	0x00720000
    */
}

