#include "include/TDictPartHandler.h"

/**
 * Symbol: TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)
 * Address: 0008fd5c
 */
TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &) {
    /*
         8fd5c:	e1a0c00d 	mov	ip, sp
         8fd60:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         8fd64:	e24cb004 	sub	fp, ip, #4	; 0x4
         8fd68:	e1a00001 	mov	r0, r1
         8fd6c:	e59f1058 	ldr	r1, [pc, #58]	; 8fdcc <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0x70>
         8fd70:	e5911000 	ldr	r1, [r1]
         8fd74:	e5911000 	ldr	r1, [r1]
         8fd78:	e5900000 	ldr	r0, [r0]
         8fd7c:	e5900000 	ldr	r0, [r0]
         8fd80:	eb6cd136 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         8fd84:	eb6cc8f0 	bl	1bc214c <$AllocateRefHandle(long)>
         8fd88:	e1a05000 	mov	r5, r0
         8fd8c:	e59f003c 	ldr	r0, [pc, #3c]	; 8fdd0 <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0x74>
         8fd90:	e5900000 	ldr	r0, [r0]
         8fd94:	e5901000 	ldr	r1, [r0]
         8fd98:	e5950000 	ldr	r0, [r5]
         8fd9c:	eb6cd12f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         8fda0:	e5850000 	str	r0, [r5]
         8fda4:	eb6cd540 	bl	1bc52ac <$Length(long)>
         8fda8:	e1a0a000 	mov	sl, r0
         8fdac:	e3500000 	cmp	r0, #0	; 0x0
         8fdb0:	1a000007 	bne	8fdd4 <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0x78>
         8fdb4:	e3e04e8a 	mvn	r4, #2208	; 0x8a0
         8fdb8:	e2444a02 	sub	r4, r4, #8192	; 0x2000
         8fdbc:	e1a00005 	mov	r0, r5
         8fdc0:	eb6cccfd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8fdc4:	e1a00004 	mov	r0, r4
         8fdc8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         8fdcc:	00682960 	rsbeq	r2, r8, r0, ror #18
         8fdd0:	00682968 	rsbeq	r2, r8, r8, ror #18
         8fdd4:	e3a06000 	mov	r6, #0	; 0x0
         8fdd8:	da000072 	ble	8ffa8 <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0x24c>
         8fddc:	e24d9030 	sub	r9, sp, #48	; 0x30
         8fde0:	e59f80f0 	ldr	r8, [pc, #f0]	; 8fed8 <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0x17c>
         8fde4:	e59f70f0 	ldr	r7, [pc, #f0]	; 8fedc <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0x180>
         8fde8:	e24dd008 	sub	sp, sp, #8	; 0x8
         8fdec:	e1a01006 	mov	r1, r6
         8fdf0:	e5950000 	ldr	r0, [r5]
         8fdf4:	eb6cd116 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         8fdf8:	eb6cc8d3 	bl	1bc214c <$AllocateRefHandle(long)>
         8fdfc:	e58d0004 	str	r0, [sp, #4]
         8fe00:	eb6cc8ce 	bl	1bc2140 <$AllocateFrame(void)>
         8fe04:	eb6cc8d0 	bl	1bc214c <$AllocateRefHandle(long)>
         8fe08:	e40d0034 	str	r0, [sp], -#52
         8fe0c:	e28d1038 	add	r1, sp, #56	; 0x38
         8fe10:	e28d0004 	add	r0, sp, #4	; 0x4
         8fe14:	e3a02000 	mov	r2, #0	; 0x0
         8fe18:	eb6cc4b4 	bl	1bc10f0 <TObjectIterator::$__ct(RefVar const &, int)>
         8fe1c:	e28d0004 	add	r0, sp, #4	; 0x4
         8fe20:	eb6ccced 	bl	1bc31dc <TObjectIterator::$Done(void)>
         8fe24:	e3300000 	teq	r0, #0	; 0x0
         8fe28:	1a000011 	bne	8fe74 <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0x118>
         8fe2c:	e59d0008 	ldr	r0, [sp, #8]
         8fe30:	e5900000 	ldr	r0, [r0]
         8fe34:	eb6ce187 	bl	1bc8458 <$SymbolName(long)>
         8fe38:	eb6cd510 	bl	1bc5280 <$Intern(char *)>
         8fe3c:	eb6cc8c2 	bl	1bc214c <$AllocateRefHandle(long)>
         8fe40:	e58d0000 	str	r0, [sp]
         8fe44:	e1a0100d 	mov	r1, sp
         8fe48:	e1a02009 	mov	r2, r9
         8fe4c:	e28d0034 	add	r0, sp, #52	; 0x34
         8fe50:	eb6cd944 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
         8fe54:	e59d0000 	ldr	r0, [sp]
         8fe58:	eb6cccd7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8fe5c:	e28d0004 	add	r0, sp, #4	; 0x4
         8fe60:	eb6cd520 	bl	1bc52e8 <TObjectIterator::$Next(void)>
         8fe64:	e28d0004 	add	r0, sp, #4	; 0x4
         8fe68:	eb6cccdb 	bl	1bc31dc <TObjectIterator::$Done(void)>
         8fe6c:	e3300000 	teq	r0, #0	; 0x0
         8fe70:	0affffed 	beq	8fe2c <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0xd0>
         8fe74:	e24dd010 	sub	sp, sp, #16	; 0x10
         8fe78:	e59f4058 	ldr	r4, [pc, #58]	; 8fed8 <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0x17c>
         8fe7c:	e5940000 	ldr	r0, [r4]
         8fe80:	e5901000 	ldr	r1, [r0]
         8fe84:	e59d0048 	ldr	r0, [sp, #72]
         8fe88:	e5900000 	ldr	r0, [r0]
         8fe8c:	eb6cd0ed 	bl	1bc4248 <$FrameHasSlotRef__FlT1>
         8fe90:	e3300000 	teq	r0, #0	; 0x0
         8fe94:	0a000011 	beq	8fee0 <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0x184>
         8fe98:	e5940000 	ldr	r0, [r4]
         8fe9c:	e5901000 	ldr	r1, [r0]
         8fea0:	e59d0048 	ldr	r0, [sp, #72]
         8fea4:	e5900000 	ldr	r0, [r0]
         8fea8:	eb6cd0ec 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         8feac:	e3300002 	teq	r0, #2	; 0x2
         8feb0:	0a00000a 	beq	8fee0 <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0x184>
         8feb4:	e3a00002 	mov	r0, #2	; 0x2
         8feb8:	eb6cc8a3 	bl	1bc214c <$AllocateRefHandle(long)>
         8febc:	e58d0000 	str	r0, [sp]
         8fec0:	e1a0000d 	mov	r0, sp
         8fec4:	e1a02008 	mov	r2, r8
         8fec8:	e28d1044 	add	r1, sp, #68	; 0x44
         8fecc:	eb6d8686 	bl	1bf18ec <$FAddDictionary__FRC6RefVarN21>
         8fed0:	e59d0000 	ldr	r0, [sp]
         8fed4:	ea00000f 	b	8ff18 <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0x1bc>
         8fed8:	00682798 	streqb	r2, [r8], -#120
         8fedc:	0c101820 	ldceq	8, cr1, [r0], -#128
         8fee0:	e3a00002 	mov	r0, #2	; 0x2
         8fee4:	eb6cc898 	bl	1bc214c <$AllocateRefHandle(long)>
         8fee8:	e58d0004 	str	r0, [sp, #4]
         8feec:	e28d4004 	add	r4, sp, #4	; 0x4
         8fef0:	e3a00002 	mov	r0, #2	; 0x2
         8fef4:	eb6cc894 	bl	1bc214c <$AllocateRefHandle(long)>
         8fef8:	e58d0008 	str	r0, [sp, #8]
         8fefc:	e28d0008 	add	r0, sp, #8	; 0x8
         8ff00:	e28d1044 	add	r1, sp, #68	; 0x44
         8ff04:	e1a02004 	mov	r2, r4
         8ff08:	eb6d8677 	bl	1bf18ec <$FAddDictionary__FRC6RefVarN21>
         8ff0c:	e59d0004 	ldr	r0, [sp, #4]
         8ff10:	eb6ccca9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8ff14:	e59d0008 	ldr	r0, [sp, #8]
         8ff18:	eb6ccca7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8ff1c:	e5970000 	ldr	r0, [r7]
         8ff20:	e28f1f24 	add	r1, pc, #144	; 0x90
         8ff24:	eb0be7e3 	bl	389eb8 <POutTranslator::Print(char const *,...)>
         8ff28:	e28d0044 	add	r0, sp, #68	; 0x44
         8ff2c:	e3a01000 	mov	r1, #0	; 0x0
         8ff30:	eb6d8e93 	bl	1bf3984 <$PrintObject(RefVar const &, unsigned long)>
         8ff34:	e5970000 	ldr	r0, [r7]
         8ff38:	e28f1f20 	add	r1, pc, #128	; 0x80
         8ff3c:	eb0be7dd 	bl	389eb8 <POutTranslator::Print(char const *,...)>
         8ff40:	e59f007c 	ldr	r0, [pc, #7c]	; 8ffc4 <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0x268>
         8ff44:	e5900000 	ldr	r0, [r0]
         8ff48:	e5901000 	ldr	r1, [r0]
         8ff4c:	e59d0044 	ldr	r0, [sp, #68]
         8ff50:	e5900000 	ldr	r0, [r0]
         8ff54:	eb6cd0c1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
         8ff58:	eb6cc87b 	bl	1bc214c <$AllocateRefHandle(long)>
         8ff5c:	e58d000c 	str	r0, [sp, #12]
         8ff60:	e28d100c 	add	r1, sp, #12	; 0xc
         8ff64:	e51b002c 	ldr	r0, [fp, -#44]
         8ff68:	eb6cc86e 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
         8ff6c:	e59d000c 	ldr	r0, [sp, #12]
         8ff70:	eb6ccc91 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8ff74:	e28dd010 	add	sp, sp, #16	; 0x10
         8ff78:	e28d0004 	add	r0, sp, #4	; 0x4
         8ff7c:	e3a01000 	mov	r1, #0	; 0x0
         8ff80:	e1a0e00f 	mov	lr, pc
         8ff84:	e59df004 	ldr	pc, [sp, #4]
         8ff88:	e5bd0034 	ldr	r0, [sp, #52]!
         8ff8c:	eb6ccc8a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8ff90:	e59d0004 	ldr	r0, [sp, #4]
         8ff94:	eb6ccc88 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8ff98:	e28dd008 	add	sp, sp, #8	; 0x8
         8ff9c:	e2866001 	add	r6, r6, #1	; 0x1
         8ffa0:	e156000a 	cmp	r6, sl
         8ffa4:	baffff8f 	blt	8fde8 <TDictPartHandler::AddDictionaries(RefVar const &, RefVar const &)+0x8c>
         8ffa8:	e1a00005 	mov	r0, r5
         8ffac:	eb6ccc82 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         8ffb0:	e3a00000 	mov	r0, #0	; 0x0
         8ffb4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         8ffb8:	44696374 	strmibt	r6, [r9], -#884
         8ffbc:	2d000000 	stccs	0, cr0, [r0]
         8ffc0:	0d000000 	stceq	0, cr0, [r0]
         8ffc4:	00682958 	rsbeq	r2, r8, r8, asr r9
    */
}

/**
 * Symbol: TDictPartHandler::Install(PartId const &, SourceType, PartInfo *)
 * Address: 0008ffc8
 */
TDictPartHandler::Install(PartId const &, SourceType, PartInfo *) {
    /*
         8ffc8:	e1a0c00d 	mov	ip, sp
         8ffcc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         8ffd0:	e24cb004 	sub	fp, ip, #4	; 0x4
         8ffd4:	e1a05002 	mov	r5, r2
         8ffd8:	e1a06003 	mov	r6, r3
         8ffdc:	e1a04000 	mov	r4, r0
         8ffe0:	e24dd008 	sub	sp, sp, #8	; 0x8
         8ffe4:	e3a00002 	mov	r0, #2	; 0x2
         8ffe8:	eb6cc857 	bl	1bc214c <$AllocateRefHandle(long)>
         8ffec:	e40d0008 	str	r0, [sp], -#8
         8fff0:	e88d0060 	stmia	sp, {r5, r6}
         8fff4:	e4dd0008 	ldrb	r0, [sp], #8
         8fff8:	e3100001 	tst	r0, #1	; 0x1
         8fffc:	e3e07e8a 	mvn	r7, #2208	; 0x8a0
         90000:	e2477a02 	sub	r7, r7, #8192	; 0x2000
         90004:	e3a06000 	mov	r6, #0	; 0x0
         90008:	1a000008 	bne	90030 <TDictPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x68>
         9000c:	e28d1004 	add	r1, sp, #4	; 0x4
         90010:	e1a00004 	mov	r0, r4
         90014:	eb6d0207 	bl	1bd0838 <TPartHandler::$Copy(void *)>
         90018:	e3300000 	teq	r0, #0	; 0x0
         9001c:	0a00000f 	beq	90060 <TDictPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x98>
         90020:	e59d0000 	ldr	r0, [sp]
         90024:	eb6ccc64 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         90028:	e1a00007 	mov	r0, r7
         9002c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         90030:	e1a00004 	mov	r0, r4
         90034:	eb6d1281 	bl	1bd4a40 <TPartHandler::$GetSourcePtr(void)>
         90038:	e2800001 	add	r0, r0, #1	; 0x1
         9003c:	e58d0004 	str	r0, [sp, #4]
         90040:	eb6cc841 	bl	1bc214c <$AllocateRefHandle(long)>
         90044:	e1a05000 	mov	r5, r0
         90048:	e5900000 	ldr	r0, [r0]
         9004c:	e1a01006 	mov	r1, r6
         90050:	eb6cd07f 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         90054:	e58d0004 	str	r0, [sp, #4]
         90058:	e1a00005 	mov	r0, r5
         9005c:	eb6ccc56 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         90060:	e3a00000 	mov	r0, #0	; 0x0
         90064:	eb682f4c 	bl	1a9bd9c <$MakeArray(long)>
         90068:	e41d1004 	ldr	r1, [sp], -#4
         9006c:	e5810000 	str	r0, [r1]
         90070:	e59d0008 	ldr	r0, [sp, #8]
         90074:	eb6cc834 	bl	1bc214c <$AllocateRefHandle(long)>
         90078:	e58d0000 	str	r0, [sp]
         9007c:	e1a0100d 	mov	r1, sp
         90080:	e28d2004 	add	r2, sp, #4	; 0x4
         90084:	e1a00004 	mov	r0, r4
         90088:	eb67e50a 	bl	1a894b8 <TDictPartHandler::$AddDictionaries(RefVar const &, RefVar const &)>
         9008c:	e1b05000 	movs	r5, r0
         90090:	13a05001 	movne	r5, #1	; 0x1
         90094:	e59d0000 	ldr	r0, [sp]
         90098:	eb6ccc47 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         9009c:	e3350000 	teq	r5, #0	; 0x0
         900a0:	0a000003 	beq	900b4 <TDictPartHandler::Install(PartId const &, SourceType, PartInfo *)+0xec>
         900a4:	e59d0004 	ldr	r0, [sp, #4]
         900a8:	eb6ccc43 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         900ac:	e1a00007 	mov	r0, r7
         900b0:	ea000011 	b	900fc <TDictPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x134>
         900b4:	e3a00004 	mov	r0, #4	; 0x4
         900b8:	eb6cf99e 	bl	1bce738 <$__nw(unsigned int)>
         900bc:	e1b05000 	movs	r5, r0
         900c0:	0a000003 	beq	900d4 <TDictPartHandler::Install(PartId const &, SourceType, PartInfo *)+0x10c>
         900c4:	e3a00002 	mov	r0, #2	; 0x2
         900c8:	eb6cc81f 	bl	1bc214c <$AllocateRefHandle(long)>
         900cc:	e5850000 	str	r0, [r5]
         900d0:	e5a06004 	str	r6, [r0, #4]!
         900d4:	e1a01005 	mov	r1, r5
         900d8:	e59d0004 	ldr	r0, [sp, #4]
         900dc:	e5900000 	ldr	r0, [r0]
         900e0:	e5952000 	ldr	r2, [r5]
         900e4:	e5820000 	str	r0, [r2]
         900e8:	e1a00004 	mov	r0, r4
         900ec:	eb6d2f3f 	bl	1bdbdf0 <TPartHandler::$SetRemoveObjPtr(long)>
         900f0:	e59d0004 	ldr	r0, [sp, #4]
         900f4:	eb6ccc30 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         900f8:	e1a00006 	mov	r0, r6
         900fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TDictPartHandler::Remove(PartId const &, unsigned long, long)
 * Address: 00090100
 */
TDictPartHandler::Remove(PartId const &, unsigned long, long) {
    /*
         90100:	e1a0c00d 	mov	ip, sp
         90104:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         90108:	e24cb004 	sub	fp, ip, #4	; 0x4
         9010c:	e1a04003 	mov	r4, r3
         90110:	e5930000 	ldr	r0, [r3]
         90114:	e5900000 	ldr	r0, [r0]
         90118:	eb6cc80b 	bl	1bc214c <$AllocateRefHandle(long)>
         9011c:	e1a05000 	mov	r5, r0
         90120:	e3a08000 	mov	r8, #0	; 0x0
         90124:	e3340000 	teq	r4, #0	; 0x0
         90128:	0a000003 	beq	9013c <TDictPartHandler::Remove(PartId const &, unsigned long, long)+0x3c>
         9012c:	e5940000 	ldr	r0, [r4]
         90130:	eb6ccc21 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         90134:	e1a00004 	mov	r0, r4
         90138:	eb6cf568 	bl	1bcd6e0 <$__dl(void *)>
         9013c:	e5950000 	ldr	r0, [r5]
         90140:	eb6cd459 	bl	1bc52ac <$Length(long)>
         90144:	e1a07000 	mov	r7, r0
         90148:	e3500000 	cmp	r0, #0	; 0x0
         9014c:	1a000005 	bne	90168 <TDictPartHandler::Remove(PartId const &, unsigned long, long)+0x68>
         90150:	e3e04e8a 	mvn	r4, #2208	; 0x8a0
         90154:	e2444a02 	sub	r4, r4, #8192	; 0x2000
         90158:	e1a00005 	mov	r0, r5
         9015c:	eb6ccc16 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         90160:	e1a00004 	mov	r0, r4
         90164:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         90168:	e3a06000 	mov	r6, #0	; 0x0
         9016c:	da000015 	ble	901c8 <TDictPartHandler::Remove(PartId const &, unsigned long, long)+0xc8>
         90170:	e3a09002 	mov	r9, #2	; 0x2
         90174:	e24dd008 	sub	sp, sp, #8	; 0x8
         90178:	e1a01006 	mov	r1, r6
         9017c:	e5950000 	ldr	r0, [r5]
         90180:	eb6cd033 	bl	1bc4254 <$GetArraySlotRef__FlT1>
         90184:	eb6cc7f0 	bl	1bc214c <$AllocateRefHandle(long)>
         90188:	e58d0000 	str	r0, [sp]
         9018c:	e1a0400d 	mov	r4, sp
         90190:	e1a00009 	mov	r0, r9
         90194:	eb6cc7ec 	bl	1bc214c <$AllocateRefHandle(long)>
         90198:	e58d0004 	str	r0, [sp, #4]
         9019c:	e28d0004 	add	r0, sp, #4	; 0x4
         901a0:	e1a01004 	mov	r1, r4
         901a4:	eb6d85d1 	bl	1bf18f0 <$FDisposeDictionary__FRC6RefVarT1>
         901a8:	e59d0000 	ldr	r0, [sp]
         901ac:	eb6ccc02 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         901b0:	e59d0004 	ldr	r0, [sp, #4]
         901b4:	eb6ccc00 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         901b8:	e28dd008 	add	sp, sp, #8	; 0x8
         901bc:	e2866001 	add	r6, r6, #1	; 0x1
         901c0:	e1560007 	cmp	r6, r7
         901c4:	baffffea 	blt	90174 <TDictPartHandler::Remove(PartId const &, unsigned long, long)+0x74>
         901c8:	e1a00005 	mov	r0, r5
         901cc:	eb6ccbfa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         901d0:	e1a00008 	mov	r0, r8
         901d4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TDictPartHandler::Expand(void *, CPipe *, PartInfo *)
 * Address: 000901d8
 */
TDictPartHandler::Expand(void *, CPipe *, PartInfo *) {
    /*
         901d8:	e1a0c00d 	mov	ip, sp
         901dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         901e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         901e4:	e1a04001 	mov	r4, r1
         901e8:	e1a01002 	mov	r1, r2
         901ec:	e24dd010 	sub	sp, sp, #16	; 0x10
         901f0:	e3a05000 	mov	r5, #0	; 0x0
         901f4:	e1a0000d 	mov	r0, sp
         901f8:	eb6cc3ba 	bl	1bc10e8 <TObjectReader::$__ct(CPipe &)>
         901fc:	e3a00000 	mov	r0, #0	; 0x0
         90200:	e52d006c 	str	r0, [sp, -#108]!
         90204:	e28d0008 	add	r0, sp, #8	; 0x8
         90208:	eb6c89d9 	bl	1bb2974 <$setjmp>
         9020c:	e3300000 	teq	r0, #0	; 0x0
         90210:	1a000005 	bne	9022c <TDictPartHandler::Expand(void *, CPipe *, PartInfo *)+0x54>
         90214:	e1a0000d 	mov	r0, sp
         90218:	eb6d3f97 	bl	1be007c <$AddExceptionHandler>
         9021c:	e28d006c 	add	r0, sp, #108	; 0x6c
         90220:	eb6cd839 	bl	1bc630c <TObjectReader::$Read(void)>
         90224:	e5840000 	str	r0, [r4]
         90228:	ea000006 	b	90248 <TDictPartHandler::Expand(void *, CPipe *, PartInfo *)+0x70>
         9022c:	e59d0060 	ldr	r0, [sp, #96]
         90230:	e59f1030 	ldr	r1, [pc, #30]	; 90268 <TDictPartHandler::Expand(void *, CPipe *, PartInfo *)+0x90>
         90234:	e5911000 	ldr	r1, [r1]
         90238:	eb6d4bd5 	bl	1be3194 <$Subexception>
         9023c:	e3300000 	teq	r0, #0	; 0x0
         90240:	0a000009 	beq	9026c <TDictPartHandler::Expand(void *, CPipe *, PartInfo *)+0x94>
         90244:	e59d5064 	ldr	r5, [sp, #100]
         90248:	e1a0000d 	mov	r0, sp
         9024c:	eb6d4399 	bl	1be10b8 <$ExitHandler>
         90250:	e28dd06c 	add	sp, sp, #108	; 0x6c
         90254:	e1a0000d 	mov	r0, sp
         90258:	e3a01000 	mov	r1, #0	; 0x0
         9025c:	eb66f943 	bl	1a4e770 <TObjectReader::$__dt(void)>
         90260:	e1a00005 	mov	r0, r5
         90264:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         90268:	00371324 	eoreqs	r1, r7, r4, lsr #6
         9026c:	e28d006c 	add	r0, sp, #108	; 0x6c
         90270:	e3a01000 	mov	r1, #0	; 0x0
         90274:	eb66f93d 	bl	1a4e770 <TObjectReader::$__dt(void)>
         90278:	e1a0000d 	mov	r0, sp
         9027c:	eb6d47b4 	bl	1be2154 <$NextHandler>
         90280:	eafffff9 	b	9026c <TDictPartHandler::Expand(void *, CPipe *, PartInfo *)+0x94>
    */
}

