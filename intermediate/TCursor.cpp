#include "include/TCursor.h"

/**
 * Symbol: TCursor::Invalidate(void)
 * Address: 002cdc80
 */
TCursor::Invalidate(void) {
    /*
        2cdc80:	e1a0c00d 	mov	ip, sp
        2cdc84:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2cdc88:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cdc8c:	e1a04000 	mov	r4, r0
        2cdc90:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2cdc94:	e3a05000 	mov	r5, #0	; 0x0
        2cdc98:	e3300000 	teq	r0, #0	; 0x0
        2cdc9c:	0a000002 	beq	2cdcac <TCursor::Invalidate(void)+0x2c>
        2cdca0:	e3a01001 	mov	r1, #1	; 0x1
        2cdca4:	eb5df635 	bl	1a4b580 <TUnionSoupIndex::$__dt(void)>
        2cdca8:	e5845018 	str	r5, [r4, #24]	; fField24
        2cdcac:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2cdcb0:	e3300000 	teq	r0, #0	; 0x0
        2cdcb4:	0a000001 	beq	2cdcc0 <TCursor::Invalidate(void)+0x40>
        2cdcb8:	eb63fe88 	bl	1bcd6e0 <$__dl(void *)>
        2cdcbc:	e5845020 	str	r5, [r4, #32]	; fField32
        2cdcc0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2cdcc4:	e3300000 	teq	r0, #0	; 0x0
        2cdcc8:	0a000001 	beq	2cdcd4 <TCursor::Invalidate(void)+0x54>
        2cdccc:	eb63fe83 	bl	1bcd6e0 <$__dl(void *)>
        2cdcd0:	e5845014 	str	r5, [r4, #20]	; fField20
        2cdcd4:	e3a00002 	mov	r0, #2	; 0x2
        2cdcd8:	e5840068 	str	r0, [r4, #104]	; fField104
        2cdcdc:	e5c450bc 	strb	r5, [r4, #188]	; fField188
        2cdce0:	e5a45010 	str	r5, [r4, #16]!	; fField16
        2cdce4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: CloneFrameSlot__7TCursorCFRC6RefVarT1
 * Address: 002cdf70
 */
void TCursor::CloneFrameSlot() {
    /*
        2cdf70:	e1a0c00d 	mov	ip, sp
        2cdf74:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2cdf78:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cdf7c:	e5910000 	ldr	r0, [r1]
        2cdf80:	e5900000 	ldr	r0, [r0]
        2cdf84:	e5921000 	ldr	r1, [r2]
        2cdf88:	e5911000 	ldr	r1, [r1]
        2cdf8c:	eb63d8b3 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2cdf90:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cdf94:	e3300002 	teq	r0, #2	; 0x2
        2cdf98:	03a00002 	moveq	r0, #2	; 0x2
        2cdf9c:	0a000007 	beq	2cdfc0 <CloneFrameSlot__7TCursorCFRC6RefVarT1+0x50>
        2cdfa0:	eb63d069 	bl	1bc214c <$AllocateRefHandle(long)>
        2cdfa4:	e58d0000 	str	r0, [sp]
        2cdfa8:	e1a0000d 	mov	r0, sp
        2cdfac:	eb63e92b 	bl	1bc8460 <$TotalClone(RefVar const &)>
        2cdfb0:	e1a04000 	mov	r4, r0
        2cdfb4:	e59d0000 	ldr	r0, [sp]
        2cdfb8:	eb63d47f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cdfbc:	e1a00004 	mov	r0, r4
        2cdfc0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::BuildSoupsInfo(void)
 * Address: 002cdfc4
 */
TCursor::BuildSoupsInfo(void) {
    /*
        2cdfc4:	e1a0c00d 	mov	ip, sp
        2cdfc8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2cdfcc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cdfd0:	e1a04000 	mov	r4, r0
        2cdfd4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cdfd8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2cdfdc:	e59f1044 	ldr	r1, [pc, #44]	; 2ce028 <TCursor::BuildSoupsInfo(void)+0x64>	; fField44
        2cdfe0:	e5911000 	ldr	r1, [r1]
        2cdfe4:	e5911000 	ldr	r1, [r1]
        2cdfe8:	eb63d89c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2cdfec:	eb63d056 	bl	1bc214c <$AllocateRefHandle(long)>
        2cdff0:	e1a08000 	mov	r8, r0
        2cdff4:	e5900000 	ldr	r0, [r0]
        2cdff8:	e3a01001 	mov	r1, #1	; 0x1
        2cdffc:	e3a0a000 	mov	sl, #0	; 0x0
        2ce000:	e3300002 	teq	r0, #2	; 0x2
        2ce004:	05841010 	streq	r1, [r4, #16]	; fField16
        2ce008:	0a000007 	beq	2ce02c <TCursor::BuildSoupsInfo(void)+0x68>
        2ce00c:	eb63dca6 	bl	1bc52ac <$Length(long)>
        2ce010:	e5840010 	str	r0, [r4, #16]	; fField16
        2ce014:	e3300000 	teq	r0, #0	; 0x0
        2ce018:	1a000003 	bne	2ce02c <TCursor::BuildSoupsInfo(void)+0x68>
        2ce01c:	e1a00008 	mov	r0, r8
        2ce020:	eb63d465 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce024:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ce028:	00684780 	rsbeq	r4, r8, r0, lsl #15
        2ce02c:	e52da06c 	str	sl, [sp, -#108]!	; fField108
        2ce030:	e28d0008 	add	r0, sp, #8	; 0x8
        2ce034:	eb63924e 	bl	1bb2974 <$setjmp>
        2ce038:	e3300000 	teq	r0, #0	; 0x0
        2ce03c:	1a000119 	bne	2ce4a8 <TCursor::BuildSoupsInfo(void)+0x4e4>
        2ce040:	e1a0000d 	mov	r0, sp
        2ce044:	eb64480c 	bl	1be007c <$AddExceptionHandler>
        2ce048:	e5946010 	ldr	r6, [r4, #16]	; fField16
        2ce04c:	e1a00186 	mov	r0, r6, lsl #3
        2ce050:	eb6401b8 	bl	1bce738 <$__nw(unsigned int)>
        2ce054:	e1b05000 	movs	r5, r0
        2ce058:	0a000004 	beq	2ce070 <TCursor::BuildSoupsInfo(void)+0xac>
        2ce05c:	e59f33b4 	ldr	r3, [pc, #3b4]	; 2ce418 <TCursor::BuildSoupsInfo(void)+0x454>
        2ce060:	e1a01006 	mov	r1, r6
        2ce064:	e1a00005 	mov	r0, r5
        2ce068:	e3a02008 	mov	r2, #8	; 0x8
        2ce06c:	eb5cdc83 	bl	1a05280 <$__vc(void *, unsigned int, int, void (*)(void *))>
        2ce070:	e5845014 	str	r5, [r4, #20]	; fField20
        2ce074:	e59f13a0 	ldr	r1, [pc, #3a0]	; 2ce41c <TCursor::BuildSoupsInfo(void)+0x458>
        2ce078:	e3a090e9 	mov	r9, #233	; 0xe9
        2ce07c:	e2499b0a 	sub	r9, r9, #10240	; 0x2800
        2ce080:	e3350000 	teq	r5, #0	; 0x0
        2ce084:	e58d106c 	str	r1, [sp, #108]	; fField108
        2ce088:	1a000004 	bne	2ce0a0 <TCursor::BuildSoupsInfo(void)+0xdc>
        2ce08c:	e59d006c 	ldr	r0, [sp, #108]	; fField108
        2ce090:	e5900000 	ldr	r0, [r0]
        2ce094:	e3a02000 	mov	r2, #0	; 0x0
        2ce098:	e1a01009 	mov	r1, r9
        2ce09c:	eb64543e 	bl	1be319c <$Throw>
        2ce0a0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2ce0a4:	e3a00002 	mov	r0, #2	; 0x2
        2ce0a8:	e5945014 	ldr	r5, [r4, #20]	; fField20
        2ce0ac:	eb63d026 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce0b0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2ce0b4:	e3a00002 	mov	r0, #2	; 0x2
        2ce0b8:	eb63d023 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce0bc:	e1a06000 	mov	r6, r0
        2ce0c0:	e3a00002 	mov	r0, #2	; 0x2
        2ce0c4:	eb63d020 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce0c8:	e3a07000 	mov	r7, #0	; 0x0
        2ce0cc:	e58d0000 	str	r0, [sp]
        2ce0d0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2ce0d4:	e3500000 	cmp	r0, #0	; 0x0
        2ce0d8:	da0000e7 	ble	2ce47c <TCursor::BuildSoupsInfo(void)+0x4b8>
        2ce0dc:	e59f933c 	ldr	r9, [pc, #33c]	; 2ce420 <TCursor::BuildSoupsInfo(void)+0x45c>
        2ce0e0:	e5980000 	ldr	r0, [r8]
        2ce0e4:	e3300002 	teq	r0, #2	; 0x2
        2ce0e8:	05940004 	ldreq	r0, [r4, #4]	; fField4
        2ce0ec:	0a000001 	beq	2ce0f8 <TCursor::BuildSoupsInfo(void)+0x134>
        2ce0f0:	e1a01007 	mov	r1, r7
        2ce0f4:	eb63d856 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2ce0f8:	e5850000 	str	r0, [r5]
        2ce0fc:	e5950000 	ldr	r0, [r5]
        2ce100:	e59f131c 	ldr	r1, [pc, #31c]	; 2ce424 <TCursor::BuildSoupsInfo(void)+0x460>
        2ce104:	e5911000 	ldr	r1, [r1]
        2ce108:	e5911000 	ldr	r1, [r1]
        2ce10c:	eb63d853 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2ce110:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2ce114:	e5810000 	str	r0, [r1]
        2ce118:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ce11c:	e3300002 	teq	r0, #2	; 0x2
        2ce120:	1a000004 	bne	2ce138 <TCursor::BuildSoupsInfo(void)+0x174>
        2ce124:	e3a01e47 	mov	r1, #1136	; 0x470
        2ce128:	e2411903 	sub	r1, r1, #49152	; 0xc000
        2ce12c:	e3a02000 	mov	r2, #0	; 0x0
        2ce130:	e5990000 	ldr	r0, [r9]
        2ce134:	eb645418 	bl	1be319c <$Throw>
        2ce138:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2ce13c:	eb63d002 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce140:	e58d0000 	str	r0, [sp]
        2ce144:	e1a0100d 	mov	r1, sp
        2ce148:	e28d0008 	add	r0, sp, #8	; 0x8
        2ce14c:	e3a02000 	mov	r2, #0	; 0x0
        2ce150:	eb5df92c 	bl	1a4c608 <$IndexPathToIndexDesc__FRC6RefVarT1Pl>
        2ce154:	e5860000 	str	r0, [r6]
        2ce158:	e59d0000 	ldr	r0, [sp]
        2ce15c:	eb63d416 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce160:	e5960000 	ldr	r0, [r6]
        2ce164:	e3300002 	teq	r0, #2	; 0x2
        2ce168:	1a000003 	bne	2ce17c <TCursor::BuildSoupsInfo(void)+0x1b8>
        2ce16c:	e59f12b4 	ldr	r1, [pc, #2b4]	; 2ce428 <TCursor::BuildSoupsInfo(void)+0x464>
        2ce170:	e3a02000 	mov	r2, #0	; 0x0
        2ce174:	e5990000 	ldr	r0, [r9]
        2ce178:	eb645407 	bl	1be319c <$Throw>
        2ce17c:	e3370000 	teq	r7, #0	; 0x0
        2ce180:	1a000094 	bne	2ce3d8 <TCursor::BuildSoupsInfo(void)+0x414>
        2ce184:	e5960000 	ldr	r0, [r6]
        2ce188:	e59f129c 	ldr	r1, [pc, #29c]	; 2ce42c <TCursor::BuildSoupsInfo(void)+0x468>
        2ce18c:	e5911000 	ldr	r1, [r1]
        2ce190:	e5911000 	ldr	r1, [r1]
        2ce194:	eb63d831 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2ce198:	e5840028 	str	r0, [r4, #40]	; fField40
        2ce19c:	e59f128c 	ldr	r1, [pc, #28c]	; 2ce430 <TCursor::BuildSoupsInfo(void)+0x46c>	; fField28
        2ce1a0:	e5911000 	ldr	r1, [r1]
        2ce1a4:	e5911000 	ldr	r1, [r1]
        2ce1a8:	eb63d820 	bl	1bc4230 <$EQRef__FlT1>
        2ce1ac:	e3300000 	teq	r0, #0	; 0x0
        2ce1b0:	0a000004 	beq	2ce1c8 <TCursor::BuildSoupsInfo(void)+0x204>
        2ce1b4:	e3a01e46 	mov	r1, #1120	; 0x460
        2ce1b8:	e2411903 	sub	r1, r1, #49152	; 0xc000
        2ce1bc:	e3a02000 	mov	r2, #0	; 0x0
        2ce1c0:	e5990000 	ldr	r0, [r9]
        2ce1c4:	eb6453f4 	bl	1be319c <$Throw>
        2ce1c8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2ce1cc:	e3100078 	tst	r0, #120	; 0x78
        2ce1d0:	0a000080 	beq	2ce3d8 <TCursor::BuildSoupsInfo(void)+0x414>
        2ce1d4:	e24dd054 	sub	sp, sp, #84	; 0x54
        2ce1d8:	e5960000 	ldr	r0, [r6]
        2ce1dc:	e59f1250 	ldr	r1, [pc, #250]	; 2ce434 <TCursor::BuildSoupsInfo(void)+0x470>
        2ce1e0:	e5911000 	ldr	r1, [r1]
        2ce1e4:	e5911000 	ldr	r1, [r1]
        2ce1e8:	eb63d81c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2ce1ec:	e59f1244 	ldr	r1, [pc, #244]	; 2ce438 <TCursor::BuildSoupsInfo(void)+0x474>
        2ce1f0:	e5911000 	ldr	r1, [r1]
        2ce1f4:	e5911000 	ldr	r1, [r1]
        2ce1f8:	eb63d80c 	bl	1bc4230 <$EQRef__FlT1>
        2ce1fc:	e200a0ff 	and	sl, r0, #255	; 0xff
        2ce200:	e3a00000 	mov	r0, #0	; 0x0
        2ce204:	e5cd0005 	strb	r0, [sp, #5]
        2ce208:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        2ce20c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2ce210:	e3100018 	tst	r0, #24	; 0x18
        2ce214:	0a000035 	beq	2ce2f0 <TCursor::BuildSoupsInfo(void)+0x32c>
        2ce218:	e5940058 	ldr	r0, [r4, #88]	; fField88
        2ce21c:	e3300000 	teq	r0, #0	; 0x0
        2ce220:	1a000032 	bne	2ce2f0 <TCursor::BuildSoupsInfo(void)+0x32c>
        2ce224:	e24dd008 	sub	sp, sp, #8	; 0x8
        2ce228:	e3a03000 	mov	r3, #0	; 0x0
        2ce22c:	e92d0008 	stmdb	sp!, {r3}
        2ce230:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2ce234:	eb63cfc4 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce238:	e58d0004 	str	r0, [sp, #4]	; fField4
        2ce23c:	e28d1004 	add	r1, sp, #4	; 0x4
        2ce240:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        2ce244:	e5940050 	ldr	r0, [r4, #80]	; fField80
        2ce248:	eb63cfbf 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce24c:	e58d000c 	str	r0, [sp, #12]	; fField12
        2ce250:	e28d000c 	add	r0, sp, #12	; 0xc
        2ce254:	e28d3010 	add	r3, sp, #16	; 0x10
        2ce258:	e28d2014 	add	r2, sp, #20	; 0x14
        2ce25c:	e49d1004 	ldr	r1, [sp], #4	; fField4
        2ce260:	eb5dc77d 	bl	1a4005c <$KeyToSKey__FRC6RefVarT1P4SKeyPsPUc>
        2ce264:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2ce268:	eb63d3d3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce26c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2ce270:	eb63d3d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce274:	e33a0000 	teq	sl, #0	; 0x0
        2ce278:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        2ce27c:	12000010 	andne	r0, r0, #16	; 0x10
        2ce280:	13300000 	teqne	r0, #0	; 0x0
        2ce284:	0a000005 	beq	2ce2a0 <TCursor::BuildSoupsInfo(void)+0x2dc>
        2ce288:	e59d000e 	ldr	r0, [sp, #14]
        2ce28c:	e1a00440 	mov	r0, r0, asr #8
        2ce290:	e20000ff 	and	r0, r0, #255	; 0xff
        2ce294:	e3801080 	orr	r1, r0, #128	; 0x80
        2ce298:	e28d000c 	add	r0, sp, #12	; 0xc
        2ce29c:	eb5df0a6 	bl	1a4a53c <SKey::$SetFlags(unsigned char)>
        2ce2a0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2ce2a4:	e1a00840 	mov	r0, r0, asr #16
        2ce2a8:	eb644fa4 	bl	1be2140 <$NewPtr>
        2ce2ac:	e5840058 	str	r0, [r4, #88]	; fField88
        2ce2b0:	e3300000 	teq	r0, #0	; 0x0
        2ce2b4:	1a000005 	bne	2ce2d0 <TCursor::BuildSoupsInfo(void)+0x30c>
        2ce2b8:	e59d00d4 	ldr	r0, [sp, #212]
        2ce2bc:	e5900000 	ldr	r0, [r0]
        2ce2c0:	e3a02000 	mov	r2, #0	; 0x0
        2ce2c4:	e3a010e9 	mov	r1, #233	; 0xe9
        2ce2c8:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2ce2cc:	eb6453b2 	bl	1be319c <$Throw>
        2ce2d0:	e5940058 	ldr	r0, [r4, #88]	; fField88
        2ce2d4:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        2ce2d8:	e1a02842 	mov	r2, r2, asr #16
        2ce2dc:	e28d100c 	add	r1, sp, #12	; 0xc
        2ce2e0:	eb6399da 	bl	1bb4a50 <$memcpy>
        2ce2e4:	e3a00002 	mov	r0, #2	; 0x2
        2ce2e8:	e5840050 	str	r0, [r4, #80]	; fField80
        2ce2ec:	e28dd008 	add	sp, sp, #8	; 0x8
        2ce2f0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2ce2f4:	e3100060 	tst	r0, #96	; 0x60
        2ce2f8:	0a000035 	beq	2ce3d4 <TCursor::BuildSoupsInfo(void)+0x410>
        2ce2fc:	e594005c 	ldr	r0, [r4, #92]	; fField92
        2ce300:	e3300000 	teq	r0, #0	; 0x0
        2ce304:	1a000032 	bne	2ce3d4 <TCursor::BuildSoupsInfo(void)+0x410>
        2ce308:	e24dd008 	sub	sp, sp, #8	; 0x8
        2ce30c:	e3a03000 	mov	r3, #0	; 0x0
        2ce310:	e92d0008 	stmdb	sp!, {r3}
        2ce314:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2ce318:	eb63cf8b 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce31c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2ce320:	e28d1004 	add	r1, sp, #4	; 0x4
        2ce324:	e52d1004 	str	r1, [sp, -#4]!	; fField4
        2ce328:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2ce32c:	eb63cf86 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce330:	e58d000c 	str	r0, [sp, #12]	; fField12
        2ce334:	e28d000c 	add	r0, sp, #12	; 0xc
        2ce338:	e28d3010 	add	r3, sp, #16	; 0x10
        2ce33c:	e28d2014 	add	r2, sp, #20	; 0x14
        2ce340:	e49d1004 	ldr	r1, [sp], #4	; fField4
        2ce344:	eb5dc744 	bl	1a4005c <$KeyToSKey__FRC6RefVarT1P4SKeyPsPUc>
        2ce348:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2ce34c:	eb63d39a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce350:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2ce354:	eb63d398 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce358:	e33a0000 	teq	sl, #0	; 0x0
        2ce35c:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        2ce360:	12000020 	andne	r0, r0, #32	; 0x20
        2ce364:	13300000 	teqne	r0, #0	; 0x0
        2ce368:	0a000005 	beq	2ce384 <TCursor::BuildSoupsInfo(void)+0x3c0>
        2ce36c:	e59d000e 	ldr	r0, [sp, #14]
        2ce370:	e1a00440 	mov	r0, r0, asr #8
        2ce374:	e20000ff 	and	r0, r0, #255	; 0xff
        2ce378:	e3801080 	orr	r1, r0, #128	; 0x80
        2ce37c:	e28d000c 	add	r0, sp, #12	; 0xc
        2ce380:	eb5df06d 	bl	1a4a53c <SKey::$SetFlags(unsigned char)>
        2ce384:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2ce388:	e1a00840 	mov	r0, r0, asr #16
        2ce38c:	eb644f6b 	bl	1be2140 <$NewPtr>
        2ce390:	e584005c 	str	r0, [r4, #92]	; fField92
        2ce394:	e3300000 	teq	r0, #0	; 0x0
        2ce398:	1a000005 	bne	2ce3b4 <TCursor::BuildSoupsInfo(void)+0x3f0>
        2ce39c:	e59d00d4 	ldr	r0, [sp, #212]
        2ce3a0:	e5900000 	ldr	r0, [r0]
        2ce3a4:	e3a02000 	mov	r2, #0	; 0x0
        2ce3a8:	e3a010e9 	mov	r1, #233	; 0xe9
        2ce3ac:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2ce3b0:	eb645379 	bl	1be319c <$Throw>
        2ce3b4:	e594005c 	ldr	r0, [r4, #92]	; fField92
        2ce3b8:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        2ce3bc:	e1a02842 	mov	r2, r2, asr #16
        2ce3c0:	e28d100c 	add	r1, sp, #12	; 0xc
        2ce3c4:	eb6399a1 	bl	1bb4a50 <$memcpy>
        2ce3c8:	e3a00002 	mov	r0, #2	; 0x2
        2ce3cc:	e5840054 	str	r0, [r4, #84]	; fField84
        2ce3d0:	e28dd008 	add	sp, sp, #8	; 0x8
        2ce3d4:	e28dd054 	add	sp, sp, #84	; 0x54
        2ce3d8:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2ce3dc:	e3300002 	teq	r0, #2	; 0x2
        2ce3e0:	0a00001f 	beq	2ce464 <TCursor::BuildSoupsInfo(void)+0x4a0>
        2ce3e4:	e28d0008 	add	r0, sp, #8	; 0x8
        2ce3e8:	eb5df482 	bl	1a4b5f8 <$GetTagsIndexDesc(RefVar const &)>
        2ce3ec:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2ce3f0:	e5810000 	str	r0, [r1]
        2ce3f4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ce3f8:	e3300002 	teq	r0, #2	; 0x2
        2ce3fc:	1a00000e 	bne	2ce43c <TCursor::BuildSoupsInfo(void)+0x478>
        2ce400:	e3a01065 	mov	r1, #101	; 0x65
        2ce404:	e2411b2f 	sub	r1, r1, #48128	; 0xbc00
        2ce408:	e3a02000 	mov	r2, #0	; 0x0
        2ce40c:	e5990000 	ldr	r0, [r9]
        2ce410:	eb645361 	bl	1be319c <$Throw>
        2ce414:	ea000011 	b	2ce460 <TCursor::BuildSoupsInfo(void)+0x49c>
        2ce418:	01a5188c 	moveq	r1, ip, lsl #17
        2ce41c:	00371318 	eoreqs	r1, r7, r8, lsl r3
        2ce420:	003712fc 	ldreqsh	r1, [r7], -ip
        2ce424:	00685390 	streqb	r5, [r8], -#48	; fField48
        2ce428:	ffff4473 	swinv	0x00ff4473
        2ce42c:	00684cb0 	streqh	r4, [r8], -#192
        2ce430:	00684a48 	rsbeq	r4, r8, r8, asr #20
        2ce434:	00684910 	rsbeq	r4, r8, r0, lsl r9
        2ce438:	00683998 	streqb	r3, [r8], -#152
        2ce43c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2ce440:	eb63cf41 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce444:	e58d0000 	str	r0, [sp]
        2ce448:	e1a0100d 	mov	r1, sp
        2ce44c:	e28d0008 	add	r0, sp, #8	; 0x8
        2ce450:	eb5de7ed 	bl	1a4840c <$EncodeQueryTags__FRC6RefVarT1>
        2ce454:	e5850004 	str	r0, [r5, #4]	; fField4
        2ce458:	e59d0000 	ldr	r0, [sp]
        2ce45c:	eb63d356 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce460:	e28dd004 	add	sp, sp, #4	; 0x4
        2ce464:	e28dd004 	add	sp, sp, #4	; 0x4
        2ce468:	e2877001 	add	r7, r7, #1	; 0x1
        2ce46c:	e2855008 	add	r5, r5, #8	; 0x8
        2ce470:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2ce474:	e1500007 	cmp	r0, r7
        2ce478:	caffff18 	bgt	2ce0e0 <TCursor::BuildSoupsInfo(void)+0x11c>
        2ce47c:	e59d0000 	ldr	r0, [sp]
        2ce480:	eb63d34d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce484:	e1a00006 	mov	r0, r6
        2ce488:	eb63d34b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce48c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2ce490:	eb63d349 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce494:	e28dd008 	add	sp, sp, #8	; 0x8
        2ce498:	e1a0000d 	mov	r0, sp
        2ce49c:	eb644b05 	bl	1be10b8 <$ExitHandler>
        2ce4a0:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2ce4a4:	eafffedc 	b	2ce01c <TCursor::BuildSoupsInfo(void)+0x58>
        2ce4a8:	e1a00004 	mov	r0, r4
        2ce4ac:	e5941000 	ldr	r1, [r4]
        2ce4b0:	e1a0e00f 	mov	lr, pc
        2ce4b4:	e281f02c 	add	pc, r1, #44	; 0x2c
        2ce4b8:	e1a0000d 	mov	r0, sp
        2ce4bc:	eb644f24 	bl	1be2154 <$NextHandler>
        2ce4c0:	eafffff8 	b	2ce4a8 <TCursor::BuildSoupsInfo(void)+0x4e4>
    */
}

/**
 * Symbol: TCursor::CreateIndexes(void)
 * Address: 002ce4c4
 */
TCursor::CreateIndexes(void) {
    /*
        2ce4c4:	e1a0c00d 	mov	ip, sp
        2ce4c8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ce4cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ce4d0:	e1a04000 	mov	r4, r0
        2ce4d4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2ce4d8:	e3300000 	teq	r0, #0	; 0x0
        2ce4dc:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ce4e0:	e3a05000 	mov	r5, #0	; 0x0
        2ce4e4:	e52d506c 	str	r5, [sp, -#108]!	; fField108
        2ce4e8:	e28d0008 	add	r0, sp, #8	; 0x8
        2ce4ec:	eb639120 	bl	1bb2974 <$setjmp>
        2ce4f0:	e3300000 	teq	r0, #0	; 0x0
        2ce4f4:	1a000089 	bne	2ce720 <TCursor::CreateIndexes(void)+0x25c>
        2ce4f8:	e1a0000d 	mov	r0, sp
        2ce4fc:	eb6446de 	bl	1be007c <$AddExceptionHandler>
        2ce500:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2ce504:	e59f3064 	ldr	r3, [pc, #64]	; 2ce570 <TCursor::CreateIndexes(void)+0xac>	; fField64
        2ce508:	e3a02084 	mov	r2, #132	; 0x84
        2ce50c:	e3a00000 	mov	r0, #0	; 0x0
        2ce510:	eb5cd756 	bl	1a04270 <$__nw_v__FPvUiT2PFPv_v>
        2ce514:	e1b0a000 	movs	sl, r0
        2ce518:	e59f9054 	ldr	r9, [pc, #54]	; 2ce574 <TCursor::CreateIndexes(void)+0xb0>
        2ce51c:	1a000004 	bne	2ce534 <TCursor::CreateIndexes(void)+0x70>
        2ce520:	e3a02000 	mov	r2, #0	; 0x0
        2ce524:	e3a010e9 	mov	r1, #233	; 0xe9
        2ce528:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2ce52c:	e5990000 	ldr	r0, [r9]
        2ce530:	eb645319 	bl	1be319c <$Throw>
        2ce534:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2ce538:	e3300002 	teq	r0, #2	; 0x2
        2ce53c:	0a00000d 	beq	2ce578 <TCursor::CreateIndexes(void)+0xb4>
        2ce540:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2ce544:	e1a00100 	mov	r0, r0, lsl #2
        2ce548:	eb64007a 	bl	1bce738 <$__nw(unsigned int)>
        2ce54c:	e5840020 	str	r0, [r4, #32]	; fField32
        2ce550:	e3300000 	teq	r0, #0	; 0x0
        2ce554:	1a000008 	bne	2ce57c <TCursor::CreateIndexes(void)+0xb8>
        2ce558:	e3a02000 	mov	r2, #0	; 0x0
        2ce55c:	e3a010e9 	mov	r1, #233	; 0xe9
        2ce560:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2ce564:	e5990000 	ldr	r0, [r9]
        2ce568:	eb64530b 	bl	1be319c <$Throw>
        2ce56c:	ea000002 	b	2ce57c <TCursor::CreateIndexes(void)+0xb8>
        2ce570:	002e875c 	eoreq	r8, lr, ip, asr r7
        2ce574:	00371318 	eoreqs	r1, r7, r8, lsl r3
        2ce578:	e5845020 	str	r5, [r4, #32]	; fField32
        2ce57c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ce580:	e3a00002 	mov	r0, #2	; 0x2
        2ce584:	e5946014 	ldr	r6, [r4, #20]	; fField20
        2ce588:	eb63ceef 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce58c:	e1a08000 	mov	r8, r0
        2ce590:	e3a00002 	mov	r0, #2	; 0x2
        2ce594:	eb63ceec 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce598:	e3a07000 	mov	r7, #0	; 0x0
        2ce59c:	e58d0000 	str	r0, [sp]
        2ce5a0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2ce5a4:	e3500000 	cmp	r0, #0	; 0x0
        2ce5a8:	da000046 	ble	2ce6c8 <TCursor::CreateIndexes(void)+0x204>
        2ce5ac:	e24dd008 	sub	sp, sp, #8	; 0x8
        2ce5b0:	e5960000 	ldr	r0, [r6]
        2ce5b4:	e59f115c 	ldr	r1, [pc, #15c]	; 2ce718 <TCursor::CreateIndexes(void)+0x254>
        2ce5b8:	e5911000 	ldr	r1, [r1]
        2ce5bc:	e5911000 	ldr	r1, [r1]
        2ce5c0:	eb63d726 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2ce5c4:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2ce5c8:	e5810000 	str	r0, [r1]
        2ce5cc:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2ce5d0:	eb63cedd 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce5d4:	e58d0000 	str	r0, [sp]
        2ce5d8:	e1a0100d 	mov	r1, sp
        2ce5dc:	e28d0008 	add	r0, sp, #8	; 0x8
        2ce5e0:	e3a02000 	mov	r2, #0	; 0x0
        2ce5e4:	eb5df807 	bl	1a4c608 <$IndexPathToIndexDesc__FRC6RefVarT1Pl>
        2ce5e8:	e5880000 	str	r0, [r8]
        2ce5ec:	e59d0000 	ldr	r0, [sp]
        2ce5f0:	eb63d2f1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce5f4:	e5980000 	ldr	r0, [r8]
        2ce5f8:	e59f111c 	ldr	r1, [pc, #11c]	; 2ce71c <TCursor::CreateIndexes(void)+0x258>
        2ce5fc:	e5911000 	ldr	r1, [r1]
        2ce600:	e5911000 	ldr	r1, [r1]
        2ce604:	eb63d715 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2ce608:	e3100003 	tst	r0, #3	; 0x3
        2ce60c:	01a00140 	moveq	r0, r0, asr #2
        2ce610:	0a000000 	beq	2ce618 <TCursor::CreateIndexes(void)+0x154>
        2ce614:	eb63cec0 	bl	1bc211c <$_RINTError(long)>
        2ce618:	e1a05000 	mov	r5, r0
        2ce61c:	e5960000 	ldr	r0, [r6]
        2ce620:	eb63cec9 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce624:	e58d0004 	str	r0, [sp, #4]	; fField4
        2ce628:	e28d0004 	add	r0, sp, #4	; 0x4
        2ce62c:	e1a01005 	mov	r1, r5
        2ce630:	eb5df7ff 	bl	1a4c634 <$GetSoupIndexObject(RefVar const &, unsigned long)>
        2ce634:	e0871287 	add	r1, r7, r7, lsl #5
        2ce638:	e78a0101 	str	r0, [sl, r1, lsl #2]
        2ce63c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2ce640:	eb63d2dd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce644:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2ce648:	e3300000 	teq	r0, #0	; 0x0
        2ce64c:	0a000017 	beq	2ce6b0 <TCursor::CreateIndexes(void)+0x1ec>
        2ce650:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ce654:	e28d000c 	add	r0, sp, #12	; 0xc
        2ce658:	eb5df3e6 	bl	1a4b5f8 <$GetTagsIndexDesc(RefVar const &)>
        2ce65c:	e5880000 	str	r0, [r8]
        2ce660:	e59f10b4 	ldr	r1, [pc, #b4]	; 2ce71c <TCursor::CreateIndexes(void)+0x258>
        2ce664:	e5911000 	ldr	r1, [r1]
        2ce668:	e5911000 	ldr	r1, [r1]
        2ce66c:	eb63d6fb 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2ce670:	e3100003 	tst	r0, #3	; 0x3
        2ce674:	01a00140 	moveq	r0, r0, asr #2
        2ce678:	0a000000 	beq	2ce680 <TCursor::CreateIndexes(void)+0x1bc>
        2ce67c:	eb63cea6 	bl	1bc211c <$_RINTError(long)>
        2ce680:	e1a05000 	mov	r5, r0
        2ce684:	e5960000 	ldr	r0, [r6]
        2ce688:	eb63ceaf 	bl	1bc214c <$AllocateRefHandle(long)>
        2ce68c:	e58d0000 	str	r0, [sp]
        2ce690:	e1a0000d 	mov	r0, sp
        2ce694:	e1a01005 	mov	r1, r5
        2ce698:	eb5df7e5 	bl	1a4c634 <$GetSoupIndexObject(RefVar const &, unsigned long)>
        2ce69c:	e5941020 	ldr	r1, [r4, #32]	; fField32
        2ce6a0:	e7810107 	str	r0, [r1, r7, lsl #2]
        2ce6a4:	e59d0000 	ldr	r0, [sp]
        2ce6a8:	eb63d2c3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce6ac:	e28dd004 	add	sp, sp, #4	; 0x4
        2ce6b0:	e28dd008 	add	sp, sp, #8	; 0x8
        2ce6b4:	e2877001 	add	r7, r7, #1	; 0x1
        2ce6b8:	e2866008 	add	r6, r6, #8	; 0x8
        2ce6bc:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2ce6c0:	e1500007 	cmp	r0, r7
        2ce6c4:	caffffb8 	bgt	2ce5ac <TCursor::CreateIndexes(void)+0xe8>
        2ce6c8:	e1a0200a 	mov	r2, sl
        2ce6cc:	e3a00000 	mov	r0, #0	; 0x0
        2ce6d0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2ce6d4:	eb5defa8 	bl	1a4a57c <TUnionSoupIndex::$__ct(long, UnionIndexData *)>
        2ce6d8:	e5a40018 	str	r0, [r4, #24]!	; fField24
        2ce6dc:	e3300000 	teq	r0, #0	; 0x0
        2ce6e0:	1a000004 	bne	2ce6f8 <TCursor::CreateIndexes(void)+0x234>
        2ce6e4:	e3a02000 	mov	r2, #0	; 0x0
        2ce6e8:	e3a010e9 	mov	r1, #233	; 0xe9
        2ce6ec:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        2ce6f0:	e5990000 	ldr	r0, [r9]
        2ce6f4:	eb6452a8 	bl	1be319c <$Throw>
        2ce6f8:	e59d0000 	ldr	r0, [sp]
        2ce6fc:	eb63d2ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce700:	e1a00008 	mov	r0, r8
        2ce704:	eb63d2ac 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ce708:	e28dd004 	add	sp, sp, #4	; 0x4
        2ce70c:	e1a0000d 	mov	r0, sp
        2ce710:	eb644a68 	bl	1be10b8 <$ExitHandler>
        2ce714:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ce718:	00685390 	streqb	r5, [r8], -#48	; fField48
        2ce71c:	006831c0 	rsbeq	r3, r8, r0, asr #3
        2ce720:	e1a00004 	mov	r0, r4
        2ce724:	e5941000 	ldr	r1, [r4]
        2ce728:	e1a0e00f 	mov	lr, pc
        2ce72c:	e281f02c 	add	pc, r1, #44	; 0x2c
        2ce730:	e1a0000d 	mov	r0, sp
        2ce734:	eb644e86 	bl	1be2154 <$NextHandler>
        2ce738:	eafffff8 	b	2ce720 <TCursor::CreateIndexes(void)+0x25c>
    */
}

/**
 * Symbol: TCursor::ExitParking(unsigned char)
 * Address: 002ce73c
 */
TCursor::ExitParking(unsigned char) {
    /*
        2ce73c:	e1a0c00d 	mov	ip, sp
        2ce740:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2ce744:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ce748:	e1a04000 	mov	r4, r0
        2ce74c:	e20100ff 	and	r0, r1, #255	; 0xff
        2ce750:	e5d410bc 	ldrb	r1, [r4, #188]	; fField188
        2ce754:	e1310000 	teq	r1, r0
        2ce758:	03a00003 	moveq	r0, #3	; 0x3
        2ce75c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2ce760:	e284606c 	add	r6, r4, #108	; 0x6c
        2ce764:	e2845064 	add	r5, r4, #100	; 0x64
        2ce768:	e3300000 	teq	r0, #0	; 0x0
        2ce76c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2ce770:	0a000025 	beq	2ce80c <TCursor::ExitParking(unsigned char)+0xd0>
        2ce774:	e3100018 	tst	r0, #24	; 0x18
        2ce778:	0a00001c 	beq	2ce7f0 <TCursor::ExitParking(unsigned char)+0xb4>
        2ce77c:	e594c018 	ldr	ip, [r4, #24]	; fField24
        2ce780:	e5d4302c 	ldrb	r3, [r4, #44]	; fField44
        2ce784:	e92d0008 	stmdb	sp!, {r3}
        2ce788:	e1a03005 	mov	r3, r5
        2ce78c:	e1a02006 	mov	r2, r6
        2ce790:	e1a0000c 	mov	r0, ip
        2ce794:	e5941058 	ldr	r1, [r4, #88]	; fField88
        2ce798:	e1a0e00f 	mov	lr, pc
        2ce79c:	e59cf000 	ldr	pc, [ip]
        2ce7a0:	e28dd004 	add	sp, sp, #4	; 0x4
        2ce7a4:	e3300002 	teq	r0, #2	; 0x2
        2ce7a8:	0a000025 	beq	2ce844 <TCursor::ExitParking(unsigned char)+0x108>
        2ce7ac:	e3300000 	teq	r0, #0	; 0x0
        2ce7b0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        2ce7b4:	e594100c 	ldr	r1, [r4, #12]	; fField12
        2ce7b8:	e3110010 	tst	r1, #16	; 0x10
        2ce7bc:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2ce7c0:	e1a03005 	mov	r3, r5
        2ce7c4:	e1a02006 	mov	r2, r6
        2ce7c8:	e5b4c018 	ldr	ip, [r4, #24]!	; fField24
        2ce7cc:	e92d000c 	stmdb	sp!, {r2, r3}
        2ce7d0:	e1a02005 	mov	r2, r5
        2ce7d4:	e1a01006 	mov	r1, r6
        2ce7d8:	e1a0000c 	mov	r0, ip
        2ce7dc:	e3a03001 	mov	r3, #1	; 0x1
        2ce7e0:	e59cc000 	ldr	ip, [ip]
        2ce7e4:	e1a0e00f 	mov	lr, pc
        2ce7e8:	e28cf00c 	add	pc, ip, #12	; 0xc
        2ce7ec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2ce7f0:	e1a02005 	mov	r2, r5
        2ce7f4:	e1a01006 	mov	r1, r6
        2ce7f8:	e5b43018 	ldr	r3, [r4, #24]!	; fField24
        2ce7fc:	e1a00003 	mov	r0, r3
        2ce800:	e5933000 	ldr	r3, [r3]
        2ce804:	e2833004 	add	r3, r3, #4	; 0x4
        2ce808:	ea000015 	b	2ce864 <TCursor::ExitParking(unsigned char)+0x128>
        2ce80c:	e3100060 	tst	r0, #96	; 0x60
        2ce810:	0a00000d 	beq	2ce84c <TCursor::ExitParking(unsigned char)+0x110>
        2ce814:	e2103040 	ands	r3, r0, #64	; 0x40
        2ce818:	13a03001 	movne	r3, #1	; 0x1
        2ce81c:	e5d4202c 	ldrb	r2, [r4, #44]	; fField44
        2ce820:	e92d000c 	stmdb	sp!, {r2, r3}
        2ce824:	e1a03005 	mov	r3, r5
        2ce828:	e1a02006 	mov	r2, r6
        2ce82c:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        2ce830:	e5b41044 	ldr	r1, [r4, #68]!	; fField68
        2ce834:	eb5df360 	bl	1a4b5bc <TAbstractSoupIndex::$FindPrior(SKey *, SKey *, SKey *, unsigned char, unsigned char)>
        2ce838:	e28dd008 	add	sp, sp, #8	; 0x8
        2ce83c:	e3300002 	teq	r0, #2	; 0x2
        2ce840:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        2ce844:	e3a00000 	mov	r0, #0	; 0x0
        2ce848:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2ce84c:	e1a02005 	mov	r2, r5
        2ce850:	e1a01006 	mov	r1, r6
        2ce854:	e5b43018 	ldr	r3, [r4, #24]!	; fField24
        2ce858:	e1a00003 	mov	r0, r3
        2ce85c:	e5933000 	ldr	r3, [r3]
        2ce860:	e2833008 	add	r3, r3, #8	; 0x8
        2ce864:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2ce868:	e283f000 	add	pc, r3, #0	; 0x0
    */
}

/**
 * Symbol: TCursor::KeyBoundsValidTest(SKey const &, unsigned char)
 * Address: 002ce86c
 */
TCursor::KeyBoundsValidTest(SKey const &, unsigned char) {
    /*
        2ce86c:	e1a0c00d 	mov	ip, sp
        2ce870:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2ce874:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ce878:	e1a04000 	mov	r4, r0
        2ce87c:	e31200ff 	tst	r2, #255	; 0xff
        2ce880:	e3a05000 	mov	r5, #0	; 0x0
        2ce884:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2ce888:	0a00000f 	beq	2ce8cc <TCursor::KeyBoundsValidTest(SKey const &, unsigned char)+0x60>
        2ce88c:	e3100060 	tst	r0, #96	; 0x60
        2ce890:	0a00001e 	beq	2ce910 <TCursor::KeyBoundsValidTest(SKey const &, unsigned char)+0xa4>
        2ce894:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2ce898:	e5902008 	ldr	r2, [r0, #8]	; fField8
        2ce89c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2ce8a0:	e0800280 	add	r0, r0, r0, lsl #5
        2ce8a4:	e7920100 	ldr	r0, [r2, r0, lsl #2]
        2ce8a8:	e594205c 	ldr	r2, [r4, #92]	; fField92
        2ce8ac:	eb5def23 	bl	1a4a540 <TSoupIndex::$CompareKeys(SKey const &, SKey const &)>
        2ce8b0:	e3500000 	cmp	r0, #0	; 0x0
        2ce8b4:	ca000013 	bgt	2ce908 <TCursor::KeyBoundsValidTest(SKey const &, unsigned char)+0x9c>
        2ce8b8:	1a000014 	bne	2ce910 <TCursor::KeyBoundsValidTest(SKey const &, unsigned char)+0xa4>
        2ce8bc:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        2ce8c0:	e3100040 	tst	r0, #64	; 0x40
        2ce8c4:	0a000011 	beq	2ce910 <TCursor::KeyBoundsValidTest(SKey const &, unsigned char)+0xa4>
        2ce8c8:	ea00000e 	b	2ce908 <TCursor::KeyBoundsValidTest(SKey const &, unsigned char)+0x9c>
        2ce8cc:	e3100018 	tst	r0, #24	; 0x18
        2ce8d0:	0a00000e 	beq	2ce910 <TCursor::KeyBoundsValidTest(SKey const &, unsigned char)+0xa4>
        2ce8d4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2ce8d8:	e5902008 	ldr	r2, [r0, #8]	; fField8
        2ce8dc:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2ce8e0:	e0800280 	add	r0, r0, r0, lsl #5
        2ce8e4:	e7920100 	ldr	r0, [r2, r0, lsl #2]
        2ce8e8:	e5942058 	ldr	r2, [r4, #88]	; fField88
        2ce8ec:	eb5def13 	bl	1a4a540 <TSoupIndex::$CompareKeys(SKey const &, SKey const &)>
        2ce8f0:	e3500000 	cmp	r0, #0	; 0x0
        2ce8f4:	ba000003 	blt	2ce908 <TCursor::KeyBoundsValidTest(SKey const &, unsigned char)+0x9c>
        2ce8f8:	1a000004 	bne	2ce910 <TCursor::KeyBoundsValidTest(SKey const &, unsigned char)+0xa4>
        2ce8fc:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        2ce900:	e3100010 	tst	r0, #16	; 0x10
        2ce904:	0a000001 	beq	2ce910 <TCursor::KeyBoundsValidTest(SKey const &, unsigned char)+0xa4>
        2ce908:	e1a00005 	mov	r0, r5
        2ce90c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2ce910:	e3a00001 	mov	r0, #1	; 0x1
        2ce914:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::WordsValidTest(unsigned long)
 * Address: 002cea1c
 */
TCursor::WordsValidTest(unsigned long) {
    /*
        2cea1c:	e1a0c00d 	mov	ip, sp
        2cea20:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2cea24:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cea28:	e1a04000 	mov	r4, r0
        2cea2c:	e1a05001 	mov	r5, r1
        2cea30:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2cea34:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2cea38:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2cea3c:	e7910180 	ldr	r0, [r1, r0, lsl #3]
        2cea40:	e59f109c 	ldr	r1, [pc, #9c]	; 2ceae4 <TCursor::WordsValidTest(unsigned long)+0xc8>
        2cea44:	e5911000 	ldr	r1, [r1]
        2cea48:	e5911000 	ldr	r1, [r1]
        2cea4c:	eb63d603 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2cea50:	e1a06000 	mov	r6, r0
        2cea54:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2cea58:	eb63da13 	bl	1bc52ac <$Length(long)>
        2cea5c:	e1a01000 	mov	r1, r0
        2cea60:	e3a07000 	mov	r7, #0	; 0x0
        2cea64:	e5940034 	ldr	r0, [r4, #52]	; fField52
        2cea68:	e3300000 	teq	r0, #0	; 0x0
        2cea6c:	0a000005 	beq	2cea88 <TCursor::WordsValidTest(unsigned long)+0x6c>
        2cea70:	e1a03005 	mov	r3, r5
        2cea74:	e1a02006 	mov	r2, r6
        2cea78:	eb5deead 	bl	1a4a534 <$TestObjHints(char *, long, TStoreWrapper *, unsigned long)>
        2cea7c:	e3300000 	teq	r0, #0	; 0x0
        2cea80:	01a00007 	moveq	r0, r7
        2cea84:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2cea88:	e24dd008 	sub	sp, sp, #8	; 0x8
        2cea8c:	e3a00002 	mov	r0, #2	; 0x2
        2cea90:	eb63cdad 	bl	1bc214c <$AllocateRefHandle(long)>
        2cea94:	e58d0000 	str	r0, [sp]
        2cea98:	e5a07004 	str	r7, [r0, #4]!	; fField4
        2cea9c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2ceaa0:	e59d1000 	ldr	r1, [sp]
        2ceaa4:	e5810000 	str	r0, [r1]
        2ceaa8:	e5b4000c 	ldr	r0, [r4, #12]!	; fField12
        2ceaac:	e2000b01 	and	r0, r0, #1024	; 0x400
        2ceab0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2ceab4:	e59f302c 	ldr	r3, [pc, #2c]	; 2ceae8 <TCursor::WordsValidTest(unsigned long)+0xcc>
        2ceab8:	e92d0008 	stmdb	sp!, {r3}
        2ceabc:	e28d3004 	add	r3, sp, #4	; 0x4
        2ceac0:	e59f2024 	ldr	r2, [pc, #24]	; 2ceaec <TCursor::WordsValidTest(unsigned long)+0xd0>	; fField24
        2ceac4:	e1a01005 	mov	r1, r5
        2ceac8:	e1a00006 	mov	r0, r6
        2ceacc:	eb5dee94 	bl	1a4a524 <$WithPermObjectTextDo(TStoreWrapper *, unsigned long, unsigned char (*)(unsigned short *, long, void *), void *, void **)>
        2cead0:	e1a04000 	mov	r4, r0
        2cead4:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2cead8:	eb63d1b7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ceadc:	e1a00004 	mov	r0, r4
        2ceae0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2ceae4:	00684c88 	rsbeq	r4, r8, r8, lsl #25
        2ceae8:	0c105358 	ldceq	3, cr5, [r0], -#352
        2ceaec:	01a4635c 	moveq	r6, ip, asr r3
    */
}

/**
 * Symbol: TCursor::TextValidTest(unsigned long)
 * Address: 002ceb10
 */
TCursor::TextValidTest(unsigned long) {
    /*
        2ceb10:	e1a0c00d 	mov	ip, sp
        2ceb14:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2ceb18:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ceb1c:	e1a04000 	mov	r4, r0
        2ceb20:	e1a05001 	mov	r5, r1
        2ceb24:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ceb28:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2ceb2c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2ceb30:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2ceb34:	e7910180 	ldr	r0, [r1, r0, lsl #3]
        2ceb38:	e59f1058 	ldr	r1, [pc, #58]	; 2ceb98 <TCursor::TextValidTest(unsigned long)+0x88>
        2ceb3c:	e5911000 	ldr	r1, [r1]
        2ceb40:	e5911000 	ldr	r1, [r1]
        2ceb44:	eb63d5c5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2ceb48:	e1a06000 	mov	r6, r0
        2ceb4c:	e1a0000d 	mov	r0, sp
        2ceb50:	e5b41038 	ldr	r1, [r4, #56]!	; fField56
        2ceb54:	eb63c95d 	bl	1bc10d0 <TObjectPtr::$__ct(long)>
        2ceb58:	e1a0000d 	mov	r0, sp
        2ceb5c:	eb63cd6c 	bl	1bc2114 <DataPtr::$__opPc( const(void))>
        2ceb60:	e59f3034 	ldr	r3, [pc, #34]	; 2ceb9c <TCursor::TextValidTest(unsigned long)+0x8c>
        2ceb64:	e92d0008 	stmdb	sp!, {r3}
        2ceb68:	e1a03000 	mov	r3, r0
        2ceb6c:	e59f202c 	ldr	r2, [pc, #2c]	; 2ceba0 <TCursor::TextValidTest(unsigned long)+0x90>
        2ceb70:	e1a01005 	mov	r1, r5
        2ceb74:	e1a00006 	mov	r0, r6
        2ceb78:	eb5dee69 	bl	1a4a524 <$WithPermObjectTextDo(TStoreWrapper *, unsigned long, unsigned char (*)(unsigned short *, long, void *), void *, void **)>
        2ceb7c:	e28dd004 	add	sp, sp, #4	; 0x4
        2ceb80:	e1a04000 	mov	r4, r0
        2ceb84:	e1a0000d 	mov	r0, sp
        2ceb88:	e3a01000 	mov	r1, #0	; 0x0
        2ceb8c:	eb63cd5b 	bl	1bc2100 <TObjectPtr::$__dt(void)>
        2ceb90:	e1a00004 	mov	r0, r4
        2ceb94:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2ceb98:	00684c88 	rsbeq	r4, r8, r8, lsl #25
        2ceb9c:	0c105358 	ldceq	3, cr5, [r0], -#352
        2ceba0:	01a46364 	moveq	r6, r4, ror #6
    */
}

/**
 * Symbol: TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)
 * Address: 002cebac
 */
TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *) {
    /*
        2cebac:	e1a0c00d 	mov	ip, sp
        2cebb0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2cebb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cebb8:	e1a04000 	mov	r4, r0
        2cebbc:	e1a06001 	mov	r6, r1
        2cebc0:	e1a05002 	mov	r5, r2
        2cebc4:	e20320ff 	and	r2, r3, #255	; 0xff
        2cebc8:	e3a07000 	mov	r7, #0	; 0x0
        2cebcc:	e59b8008 	ldr	r8, [fp, #8]	; fField8
        2cebd0:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        2cebd4:	e5ca7000 	strb	r7, [sl]
        2cebd8:	e5c87000 	strb	r7, [r8]
        2cebdc:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2cebe0:	e1b01b00 	movs	r1, r0, lsl #22
        2cebe4:	0a0000a4 	beq	2cee7c <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0x2d0>
        2cebe8:	e3100078 	tst	r0, #120	; 0x78
        2cebec:	0a000006 	beq	2cec0c <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0x60>
        2cebf0:	e1a01006 	mov	r1, r6
        2cebf4:	e1a00004 	mov	r0, r4
        2cebf8:	eb5dddd6 	bl	1a46358 <TCursor::$KeyBoundsValidTest(SKey const &, unsigned char)>
        2cebfc:	e3300000 	teq	r0, #0	; 0x0
        2cec00:	03a00001 	moveq	r0, #1	; 0x1
        2cec04:	05c80000 	streqb	r0, [r8]
        2cec08:	0a000028 	beq	2cecb0 <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0x104>
        2cec0c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2cec10:	e3300000 	teq	r0, #0	; 0x0
        2cec14:	0a000015 	beq	2cec70 <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0xc4>
        2cec18:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2cec1c:	e5b0900c 	ldr	r9, [r0, #12]!	; fField12
        2cec20:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cec24:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2cec28:	e0800189 	add	r0, r0, r9, lsl #3
        2cec2c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2cec30:	eb63cd45 	bl	1bc214c <$AllocateRefHandle(long)>
        2cec34:	e58d0000 	str	r0, [sp]
        2cec38:	e1a0100d 	mov	r1, sp
        2cec3c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2cec40:	e7900109 	ldr	r0, [r0, r9, lsl #2]
        2cec44:	e1a02005 	mov	r2, r5
        2cec48:	eb5de5f0 	bl	1a48410 <$TagsValidTest(TSoupIndex &, RefVar const &, unsigned long)>
        2cec4c:	e3300000 	teq	r0, #0	; 0x0
        2cec50:	13a09000 	movne	r9, #0	; 0x0
        2cec54:	03a09001 	moveq	r9, #1	; 0x1
        2cec58:	e59d0000 	ldr	r0, [sp]
        2cec5c:	eb63d156 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cec60:	e1a00007 	mov	r0, r7
        2cec64:	e3390000 	teq	r9, #0	; 0x0
        2cec68:	e28dd004 	add	sp, sp, #4	; 0x4
        2cec6c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2cec70:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2cec74:	e3100002 	tst	r0, #2	; 0x2
        2cec78:	0a000004 	beq	2cec90 <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0xe4>
        2cec7c:	e1a01005 	mov	r1, r5
        2cec80:	e1a00004 	mov	r0, r4
        2cec84:	eb5dddb5 	bl	1a46360 <TCursor::$WordsValidTest(unsigned long)>
        2cec88:	e3300000 	teq	r0, #0	; 0x0
        2cec8c:	0a000007 	beq	2cecb0 <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0x104>
        2cec90:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2cec94:	e3100004 	tst	r0, #4	; 0x4
        2cec98:	0a000006 	beq	2cecb8 <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0x10c>
        2cec9c:	e1a01005 	mov	r1, r5
        2ceca0:	e1a00004 	mov	r0, r4
        2ceca4:	eb5dddaf 	bl	1a46368 <TCursor::$TextValidTest(unsigned long)>
        2ceca8:	e3300000 	teq	r0, #0	; 0x0
        2cecac:	1a000001 	bne	2cecb8 <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0x10c>
        2cecb0:	e1a00007 	mov	r0, r7
        2cecb4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2cecb8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2cecbc:	e3100d0e 	tst	r0, #896	; 0x380
        2cecc0:	0a00006d 	beq	2cee7c <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0x2d0>
        2cecc4:	e3100080 	tst	r0, #128	; 0x80
        2cecc8:	0a00002c 	beq	2ced80 <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0x1d4>
        2ceccc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cecd0:	e5940048 	ldr	r0, [r4, #72]	; fField72
        2cecd4:	eb63cd1c 	bl	1bc214c <$AllocateRefHandle(long)>
        2cecd8:	e1a09000 	mov	r9, r0
        2cecdc:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2cece0:	eb63cd19 	bl	1bc214c <$AllocateRefHandle(long)>
        2cece4:	e58d0000 	str	r0, [sp]
        2cece8:	e1a0100d 	mov	r1, sp
        2cecec:	e1a00006 	mov	r0, r6
        2cecf0:	e3a02000 	mov	r2, #0	; 0x0
        2cecf4:	eb5dfa64 	bl	1a4d68c <$SKeyToKey(SKey const &, RefVar const &, short *)>
        2cecf8:	eb63cd13 	bl	1bc214c <$AllocateRefHandle(long)>
        2cecfc:	e1a06000 	mov	r6, r0
        2ced00:	e5902000 	ldr	r2, [r0]
        2ced04:	e1a01007 	mov	r1, r7
        2ced08:	e5990000 	ldr	r0, [r9]
        2ced0c:	eb63dd91 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2ced10:	e1a00006 	mov	r0, r6
        2ced14:	eb63d128 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ced18:	e1a00009 	mov	r0, r9
        2ced1c:	eb63d126 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ced20:	e59d0000 	ldr	r0, [sp]
        2ced24:	eb63d124 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ced28:	e24dd008 	sub	sp, sp, #8	; 0x8
        2ced2c:	e5940048 	ldr	r0, [r4, #72]	; fField72
        2ced30:	eb63cd05 	bl	1bc214c <$AllocateRefHandle(long)>
        2ced34:	e58d0000 	str	r0, [sp]
        2ced38:	e1a0600d 	mov	r6, sp
        2ced3c:	e594003c 	ldr	r0, [r4, #60]	; fField60
        2ced40:	eb63cd01 	bl	1bc214c <$AllocateRefHandle(long)>
        2ced44:	e58d0004 	str	r0, [sp, #4]	; fField4
        2ced48:	e28d0004 	add	r0, sp, #4	; 0x4
        2ced4c:	e1a01006 	mov	r1, r6
        2ced50:	eb63d11e 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        2ced54:	e3300002 	teq	r0, #2	; 0x2
        2ced58:	13a06000 	movne	r6, #0	; 0x0
        2ced5c:	03a06001 	moveq	r6, #1	; 0x1
        2ced60:	e59d0000 	ldr	r0, [sp]
        2ced64:	eb63d114 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ced68:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2ced6c:	eb63d112 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2ced70:	e1a00007 	mov	r0, r7
        2ced74:	e3360000 	teq	r6, #0	; 0x0
        2ced78:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ced7c:	e28dd00c 	add	sp, sp, #12	; 0xc
        2ced80:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2ced84:	e3100c03 	tst	r0, #768	; 0x300
        2ced88:	0a00003b 	beq	2cee7c <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0x2d0>
        2ced8c:	e1a01005 	mov	r1, r5
        2ced90:	e1a00004 	mov	r0, r4
        2ced94:	eb5de17c 	bl	1a4738c <TCursor::$MakeEntryFaultBlock(unsigned long)>
        2ced98:	e3a05001 	mov	r5, #1	; 0x1
        2ced9c:	e5ca5000 	strb	r5, [sl]
        2ceda0:	e1a01007 	mov	r1, r7
        2ceda4:	e5940048 	ldr	r0, [r4, #72]	; fField72
        2ceda8:	e5942068 	ldr	r2, [r4, #104]	; fField104
        2cedac:	eb63dd69 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2cedb0:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2cedb4:	e3100c02 	tst	r0, #512	; 0x200
        2cedb8:	0a000015 	beq	2cee14 <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0x268>
        2cedbc:	e24dd008 	sub	sp, sp, #8	; 0x8
        2cedc0:	e5940048 	ldr	r0, [r4, #72]	; fField72
        2cedc4:	eb63cce0 	bl	1bc214c <$AllocateRefHandle(long)>
        2cedc8:	e58d0000 	str	r0, [sp]
        2cedcc:	e1a0600d 	mov	r6, sp
        2cedd0:	e5940044 	ldr	r0, [r4, #68]	; fField68
        2cedd4:	eb63ccdc 	bl	1bc214c <$AllocateRefHandle(long)>
        2cedd8:	e58d0004 	str	r0, [sp, #4]	; fField4
        2ceddc:	e28d0004 	add	r0, sp, #4	; 0x4
        2cede0:	e1a01006 	mov	r1, r6
        2cede4:	eb63d0f9 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        2cede8:	e2506002 	subs	r6, r0, #2	; 0x2
        2cedec:	13a06001 	movne	r6, #1	; 0x1
        2cedf0:	e59d0000 	ldr	r0, [sp]
        2cedf4:	eb63d0f0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cedf8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2cedfc:	eb63d0ee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cee00:	e1a00007 	mov	r0, r7
        2cee04:	e3360000 	teq	r6, #0	; 0x0
        2cee08:	15c85000 	strneb	r5, [r8]
        2cee0c:	1a000018 	bne	2cee74 <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0x2c8>
        2cee10:	e28dd008 	add	sp, sp, #8	; 0x8
        2cee14:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2cee18:	e3100c01 	tst	r0, #256	; 0x100
        2cee1c:	0a000016 	beq	2cee7c <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0x2d0>
        2cee20:	e24dd008 	sub	sp, sp, #8	; 0x8
        2cee24:	e5940048 	ldr	r0, [r4, #72]	; fField72
        2cee28:	eb63ccc7 	bl	1bc214c <$AllocateRefHandle(long)>
        2cee2c:	e58d0000 	str	r0, [sp]
        2cee30:	e1a0500d 	mov	r5, sp
        2cee34:	e5b40040 	ldr	r0, [r4, #64]!	; fField64
        2cee38:	eb63ccc3 	bl	1bc214c <$AllocateRefHandle(long)>
        2cee3c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2cee40:	e28d0004 	add	r0, sp, #4	; 0x4
        2cee44:	e1a01005 	mov	r1, r5
        2cee48:	eb63d0e0 	bl	1bc31d0 <$DoBlock__FRC6RefVarT1>
        2cee4c:	e3300002 	teq	r0, #2	; 0x2
        2cee50:	13a04000 	movne	r4, #0	; 0x0
        2cee54:	03a04001 	moveq	r4, #1	; 0x1
        2cee58:	e59d0000 	ldr	r0, [sp]
        2cee5c:	eb63d0d6 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cee60:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2cee64:	eb63d0d4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cee68:	e1a00007 	mov	r0, r7
        2cee6c:	e3340000 	teq	r4, #0	; 0x0
        2cee70:	0a000000 	beq	2cee78 <TCursor::ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)+0x2cc>
        2cee74:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2cee78:	e28dd008 	add	sp, sp, #8	; 0x8
        2cee7c:	e3a00001 	mov	r0, #1	; 0x1
        2cee80:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::Move(long)
 * Address: 002ceef0
 */
TCursor::Move(long) {
    /*
        2ceef0:	e1a0c00d 	mov	ip, sp
        2ceef4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ceef8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ceefc:	e1a04000 	mov	r4, r0
        2cef00:	e1a05001 	mov	r5, r1
        2cef04:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2cef08:	e3300000 	teq	r0, #0	; 0x0
        2cef0c:	03a00002 	moveq	r0, #2	; 0x2
        2cef10:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2cef14:	e3550000 	cmp	r5, #0	; 0x0
        2cef18:	b3a00000 	movlt	r0, #0	; 0x0
        2cef1c:	a3a00001 	movge	r0, #1	; 0x1
        2cef20:	e20070ff 	and	r7, r0, #255	; 0xff
        2cef24:	e5940068 	ldr	r0, [r4, #104]	; fField104
        2cef28:	e3300002 	teq	r0, #2	; 0x2
        2cef2c:	13a00000 	movne	r0, #0	; 0x0
        2cef30:	03a00001 	moveq	r0, #1	; 0x1
        2cef34:	e20010ff 	and	r1, r0, #255	; 0xff
        2cef38:	e5d400bd 	ldrb	r0, [r4, #189]	; fField189
        2cef3c:	e3a0a000 	mov	sl, #0	; 0x0
        2cef40:	e3350000 	teq	r5, #0	; 0x0
        2cef44:	15c4a0bd 	strneb	sl, [r4, #189]	; fField189
        2cef48:	e284606c 	add	r6, r4, #108	; 0x6c
        2cef4c:	e2848064 	add	r8, r4, #100	; 0x64
        2cef50:	e3310000 	teq	r1, #0	; 0x0
        2cef54:	0a000003 	beq	2cef68 <TCursor::Move(long)+0x78>
        2cef58:	e1a01007 	mov	r1, r7
        2cef5c:	e1a00004 	mov	r0, r4
        2cef60:	eb5ddcfb 	bl	1a46354 <TCursor::$ExitParking(unsigned char)>
        2cef64:	ea000016 	b	2cefc4 <TCursor::Move(long)+0xd4>
        2cef68:	e3550000 	cmp	r5, #0	; 0x0
        2cef6c:	da000001 	ble	2cef78 <TCursor::Move(long)+0x88>
        2cef70:	e3300000 	teq	r0, #0	; 0x0
        2cef74:	12455001 	subne	r5, r5, #1	; 0x1
        2cef78:	e3350000 	teq	r5, #0	; 0x0
        2cef7c:	0a00000f 	beq	2cefc0 <TCursor::Move(long)+0xd0>
        2cef80:	e3370000 	teq	r7, #0	; 0x0
        2cef84:	e1a03008 	mov	r3, r8
        2cef88:	e1a02006 	mov	r2, r6
        2cef8c:	e594c018 	ldr	ip, [r4, #24]	; fField24
        2cef90:	e92d000c 	stmdb	sp!, {r2, r3}
        2cef94:	e1a02008 	mov	r2, r8
        2cef98:	e1a01006 	mov	r1, r6
        2cef9c:	e1a0000c 	mov	r0, ip
        2cefa0:	e3a03000 	mov	r3, #0	; 0x0
        2cefa4:	e59cc000 	ldr	ip, [ip]
        2cefa8:	028cc010 	addeq	ip, ip, #16	; 0x10
        2cefac:	128cc00c 	addne	ip, ip, #12	; 0xc
        2cefb0:	e1a0e00f 	mov	lr, pc
        2cefb4:	e1a0f00c 	mov	pc, ip
        2cefb8:	e28dd008 	add	sp, sp, #8	; 0x8
        2cefbc:	ea000000 	b	2cefc4 <TCursor::Move(long)+0xd4>
        2cefc0:	e3a00000 	mov	r0, #0	; 0x0
        2cefc4:	e24dd010 	sub	sp, sp, #16	; 0x10
        2cefc8:	e3a09000 	mov	r9, #0	; 0x0
        2cefcc:	e3300000 	teq	r0, #0	; 0x0
        2cefd0:	1a000039 	bne	2cf0bc <TCursor::Move(long)+0x1cc>
        2cefd4:	e3370000 	teq	r7, #0	; 0x0
        2cefd8:	03a00001 	moveq	r0, #1	; 0x1
        2cefdc:	13e00000 	mvnne	r0, #0	; 0x0
        2cefe0:	e3350000 	teq	r5, #0	; 0x0
        2cefe4:	e58d000c 	str	r0, [sp, #12]	; fField12
        2cefe8:	059d000c 	ldreq	r0, [sp, #12]	; fField12
        2cefec:	02605000 	rsbeq	r5, r0, #0	; 0x0
        2ceff0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2ceff4:	e1a0300d 	mov	r3, sp
        2ceff8:	e28d2009 	add	r2, sp, #9	; 0x9
        2ceffc:	e92d000c 	stmdb	sp!, {r2, r3}
        2cf000:	e1a01006 	mov	r1, r6
        2cf004:	e1a03007 	mov	r3, r7
        2cf008:	e5942064 	ldr	r2, [r4, #100]	; fField100
        2cf00c:	e1a00004 	mov	r0, r4
        2cf010:	eb5ddcd6 	bl	1a46370 <TCursor::$ValidTest(SKey const &, unsigned long, unsigned char, unsigned char *, unsigned char *)>
        2cf014:	e28dd008 	add	sp, sp, #8	; 0x8
        2cf018:	e3300000 	teq	r0, #0	; 0x0
        2cf01c:	0a000003 	beq	2cf030 <TCursor::Move(long)+0x140>
        2cf020:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        2cf024:	e0905005 	adds	r5, r0, r5
        2cf028:	03a09001 	moveq	r9, #1	; 0x1
        2cf02c:	0a000018 	beq	2cf094 <TCursor::Move(long)+0x1a4>
        2cf030:	e5dd0000 	ldrb	r0, [sp]
        2cf034:	e3300000 	teq	r0, #0	; 0x0
        2cf038:	1a000015 	bne	2cf094 <TCursor::Move(long)+0x1a4>
        2cf03c:	e58d4004 	str	r4, [sp, #4]	; fField4
        2cf040:	e5cd7008 	strb	r7, [sp, #8]	; fField8
        2cf044:	e3a03000 	mov	r3, #0	; 0x0
        2cf048:	e1a02008 	mov	r2, r8
        2cf04c:	e1a01006 	mov	r1, r6
        2cf050:	e58d500c 	str	r5, [sp, #12]	; fField12
        2cf054:	e28d0004 	add	r0, sp, #4	; 0x4
        2cf058:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2cf05c:	e59f3054 	ldr	r3, [pc, #54]	; 2cf0b8 <TCursor::Move(long)+0x1c8>
        2cf060:	e92d0008 	stmdb	sp!, {r3}
        2cf064:	e1a03008 	mov	r3, r8
        2cf068:	e1a02006 	mov	r2, r6
        2cf06c:	e1a01007 	mov	r1, r7
        2cf070:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2cf074:	eb5df14a 	bl	1a4b5a4 <TUnionSoupIndex::$Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)>
        2cf078:	e28dd014 	add	sp, sp, #20	; 0x14
        2cf07c:	e3300000 	teq	r0, #0	; 0x0
        2cf080:	059d000c 	ldreq	r0, [sp, #12]	; fField12
        2cf084:	03300000 	teqeq	r0, #0	; 0x0
        2cf088:	13a00000 	movne	r0, #0	; 0x0
        2cf08c:	03a00001 	moveq	r0, #1	; 0x1
        2cf090:	e20090ff 	and	r9, r0, #255	; 0xff
        2cf094:	e28dd004 	add	sp, sp, #4	; 0x4
        2cf098:	e3390000 	teq	r9, #0	; 0x0
        2cf09c:	0a000006 	beq	2cf0bc <TCursor::Move(long)+0x1cc>
        2cf0a0:	e5dd0005 	ldrb	r0, [sp, #5]
        2cf0a4:	e3300000 	teq	r0, #0	; 0x0
        2cf0a8:	05941064 	ldreq	r1, [r4, #100]	; fField100
        2cf0ac:	01a00004 	moveq	r0, r4
        2cf0b0:	0b5de0b5 	bleq	1a4738c <TCursor::$MakeEntryFaultBlock(unsigned long)>
        2cf0b4:	ea000003 	b	2cf0c8 <TCursor::Move(long)+0x1d8>
        2cf0b8:	01a46374 	moveq	r6, r4, ror r3
        2cf0bc:	e1a01007 	mov	r1, r7
        2cf0c0:	e1a00004 	mov	r0, r4
        2cf0c4:	eb5e2b07 	bl	1a59ce8 <TCursor::$Park(unsigned char)>
        2cf0c8:	e59f501c 	ldr	r5, [pc, #1c]	; 2cf0ec <TCursor::Move(long)+0x1fc>
        2cf0cc:	e5950000 	ldr	r0, [r5]
        2cf0d0:	e3300000 	teq	r0, #0	; 0x0
        2cf0d4:	0a000001 	beq	2cf0e0 <TCursor::Move(long)+0x1f0>
        2cf0d8:	eb5ded13 	bl	1a4a52c <$ReleasePermObjectTextCache(void *)>
        2cf0dc:	e585a000 	str	sl, [r5]
        2cf0e0:	e1a00004 	mov	r0, r4
        2cf0e4:	eb5ddca4 	bl	1a4637c <TCursor::$Entry(void)>
        2cf0e8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2cf0ec:	0c105358 	ldceq	3, cr5, [r0], -#352
    */
}

/**
 * Symbol: TCursor::Entry(void)
 * Address: 002cf0f0
 */
TCursor::Entry(void) {
    /*
        2cf0f0:	e5d010bd 	ldrb	r1, [r0, #189]	; fField189
        2cf0f4:	e3310000 	teq	r1, #0	; 0x0
        2cf0f8:	05900068 	ldreq	r0, [r0, #104]	; fField104
        2cf0fc:	159f0008 	ldrne	r0, [pc, #8]	; 2cf10c <TCursor::Entry(void)+0x1c>	; fField8
        2cf100:	15900000 	ldrne	r0, [r0]
        2cf104:	15900000 	ldrne	r0, [r0]
        2cf108:	e1a0f00e 	mov	pc, lr
        2cf10c:	006828b0 	streqh	r2, [r8], -#128
    */
}

/**
 * Symbol: TCursor::EntryKey(void)
 * Address: 002cf110
 */
TCursor::EntryKey(void) {
    /*
        2cf110:	e1a0c00d 	mov	ip, sp
        2cf114:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2cf118:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cf11c:	e1a04000 	mov	r4, r0
        2cf120:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cf124:	e5900068 	ldr	r0, [r0, #104]	; fField104
        2cf128:	e3300002 	teq	r0, #2	; 0x2
        2cf12c:	0a000002 	beq	2cf13c <TCursor::EntryKey(void)+0x2c>
        2cf130:	e5d400bd 	ldrb	r0, [r4, #189]	; fField189
        2cf134:	e3300000 	teq	r0, #0	; 0x0
        2cf138:	0a000001 	beq	2cf144 <TCursor::EntryKey(void)+0x34>
        2cf13c:	e3a00002 	mov	r0, #2	; 0x2
        2cf140:	ea00000a 	b	2cf170 <TCursor::EntryKey(void)+0x60>
        2cf144:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2cf148:	eb63cbff 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf14c:	e58d0000 	str	r0, [sp]
        2cf150:	e1a0100d 	mov	r1, sp
        2cf154:	e284006c 	add	r0, r4, #108	; 0x6c
        2cf158:	e3a02000 	mov	r2, #0	; 0x0
        2cf15c:	eb5df94a 	bl	1a4d68c <$SKeyToKey(SKey const &, RefVar const &, short *)>
        2cf160:	e1a04000 	mov	r4, r0
        2cf164:	e59d0000 	ldr	r0, [sp]
        2cf168:	eb63d013 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cf16c:	e1a00004 	mov	r0, r4
        2cf170:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::GetState(CursorState *)
 * Address: 002cf174
 */
TCursor::GetState(CursorState *) {
    /*
        2cf174:	e1a0c00d 	mov	ip, sp
        2cf178:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2cf17c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cf180:	e1a04000 	mov	r4, r0
        2cf184:	e1a05001 	mov	r5, r1
        2cf188:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2cf18c:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2cf190:	e5810000 	str	r0, [r1]
        2cf194:	e2810004 	add	r0, r1, #4	; 0x4
        2cf198:	e5942068 	ldr	r2, [r4, #104]	; fField104
        2cf19c:	e5901000 	ldr	r1, [r0]
        2cf1a0:	e5812000 	str	r2, [r1]
        2cf1a4:	e5900000 	ldr	r0, [r0]
        2cf1a8:	e5900000 	ldr	r0, [r0]
        2cf1ac:	e3300002 	teq	r0, #2	; 0x2
        2cf1b0:	0a00000d 	beq	2cf1ec <TCursor::GetState(CursorState *)+0x78>
        2cf1b4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2cf1b8:	e5901008 	ldr	r1, [r0, #8]	; fField8
        2cf1bc:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2cf1c0:	e0800280 	add	r0, r0, r0, lsl #5
        2cf1c4:	e7910100 	ldr	r0, [r1, r0, lsl #2]
        2cf1c8:	e284106c 	add	r1, r4, #108	; 0x6c
        2cf1cc:	e1a06001 	mov	r6, r1
        2cf1d0:	eb5dc7b0 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2cf1d4:	e1a02000 	mov	r2, r0
        2cf1d8:	e1a01006 	mov	r1, r6
        2cf1dc:	e2850008 	add	r0, r5, #8	; 0x8
        2cf1e0:	eb63961a 	bl	1bb4a50 <$memcpy>
        2cf1e4:	e5940064 	ldr	r0, [r4, #100]	; fField100
        2cf1e8:	e5850058 	str	r0, [r5, #88]	; fField88
        2cf1ec:	e5d400bc 	ldrb	r0, [r4, #188]	; fField188
        2cf1f0:	e5c5005c 	strb	r0, [r5, #92]	; fField92
        2cf1f4:	e5d400bd 	ldrb	r0, [r4, #189]	; fField189
        2cf1f8:	e5c5005d 	strb	r0, [r5, #93]
        2cf1fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::SetState(CursorState &)
 * Address: 002cf200
 */
TCursor::SetState(CursorState &) {
    /*
        2cf200:	e1a0c00d 	mov	ip, sp
        2cf204:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2cf208:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cf20c:	e1a04000 	mov	r4, r0
        2cf210:	e1a05001 	mov	r5, r1
        2cf214:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2cf218:	e5911000 	ldr	r1, [r1]
        2cf21c:	eb5df0e3 	bl	1a4b5b0 <TUnionSoupIndex::$SetCurrentSoup(long)>
        2cf220:	e2850004 	add	r0, r5, #4	; 0x4
        2cf224:	e5901000 	ldr	r1, [r0]
        2cf228:	e5911000 	ldr	r1, [r1]
        2cf22c:	e5841068 	str	r1, [r4, #104]	; fField104
        2cf230:	e5900000 	ldr	r0, [r0]
        2cf234:	e5900000 	ldr	r0, [r0]
        2cf238:	e3300002 	teq	r0, #2	; 0x2
        2cf23c:	0a00000d 	beq	2cf278 <TCursor::SetState(CursorState &)+0x78>
        2cf240:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2cf244:	e5901008 	ldr	r1, [r0, #8]	; fField8
        2cf248:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2cf24c:	e0800280 	add	r0, r0, r0, lsl #5
        2cf250:	e7910100 	ldr	r0, [r1, r0, lsl #2]
        2cf254:	e2851008 	add	r1, r5, #8	; 0x8
        2cf258:	e1a06001 	mov	r6, r1
        2cf25c:	eb5dc78d 	bl	1a41098 <TSoupIndex::$kfSizeOfKey(void *)>
        2cf260:	e1a02000 	mov	r2, r0
        2cf264:	e1a01006 	mov	r1, r6
        2cf268:	e284006c 	add	r0, r4, #108	; 0x6c
        2cf26c:	eb6395f7 	bl	1bb4a50 <$memcpy>
        2cf270:	e5950058 	ldr	r0, [r5, #88]	; fField88
        2cf274:	e5840064 	str	r0, [r4, #100]	; fField100
        2cf278:	e5d5005c 	ldrb	r0, [r5, #92]	; fField92
        2cf27c:	e5c400bc 	strb	r0, [r4, #188]	; fField188
        2cf280:	e5d5005d 	ldrb	r0, [r5, #93]
        2cf284:	e5c400bd 	strb	r0, [r4, #189]	; fField189
        2cf288:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::MakeEntryFaultBlock(unsigned long)
 * Address: 002cf28c
 */
TCursor::MakeEntryFaultBlock(unsigned long) {
    /*
        2cf28c:	e1a0c00d 	mov	ip, sp
        2cf290:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2cf294:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cf298:	e1a04000 	mov	r4, r0
        2cf29c:	e1a05001 	mov	r5, r1
        2cf2a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cf2a4:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2cf2a8:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2cf2ac:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2cf2b0:	e7910180 	ldr	r0, [r1, r0, lsl #3]
        2cf2b4:	eb63cba4 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf2b8:	e58d0000 	str	r0, [sp]
        2cf2bc:	e1a0000d 	mov	r0, sp
        2cf2c0:	e1a01005 	mov	r1, r5
        2cf2c4:	eb5de45e 	bl	1a48444 <$GetEntry(RefVar const &, unsigned long)>
        2cf2c8:	e5a40068 	str	r0, [r4, #104]!	; fField104
        2cf2cc:	e59d0000 	ldr	r0, [sp]
        2cf2d0:	eb63cfb9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cf2d4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::Park(unsigned char)
 * Address: 002cf2d8
 */
TCursor::Park(unsigned char) {
    /*
        2cf2d8:	e3a02002 	mov	r2, #2	; 0x2
        2cf2dc:	e5802068 	str	r2, [r0, #104]	; fField104
        2cf2e0:	e5c010bc 	strb	r1, [r0, #188]	; fField188
        2cf2e4:	e5900018 	ldr	r0, [r0, #24]	; fField24
        2cf2e8:	e3300000 	teq	r0, #0	; 0x0
        2cf2ec:	13a01000 	movne	r1, #0	; 0x0
        2cf2f0:	1a5df0ae 	bne	1a4b5b0 <TUnionSoupIndex::$SetCurrentSoup(long)>
        2cf2f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TCursor::CountEntries(void)
 * Address: 002cf360
 */
TCursor::CountEntries(void) {
    /*
        2cf360:	e1a0c00d 	mov	ip, sp
        2cf364:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2cf368:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cf36c:	e1a04000 	mov	r4, r0
        2cf370:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2cf374:	e3a05000 	mov	r5, #0	; 0x0
        2cf378:	e3300000 	teq	r0, #0	; 0x0
        2cf37c:	01a00005 	moveq	r0, r5
        2cf380:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2cf384:	e24dd060 	sub	sp, sp, #96	; 0x60
        2cf388:	e3a00002 	mov	r0, #2	; 0x2
        2cf38c:	eb63cb6e 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf390:	e58d0004 	str	r0, [sp, #4]	; fField4
        2cf394:	e5a05004 	str	r5, [r0, #4]!	; fField4
        2cf398:	e5cd5009 	strb	r5, [sp, #9]
        2cf39c:	e5cd5008 	strb	r5, [sp, #8]	; fField8
        2cf3a0:	e1a0100d 	mov	r1, sp
        2cf3a4:	e1a00004 	mov	r0, r4
        2cf3a8:	eb5ddff5 	bl	1a47384 <TCursor::$GetState(CursorState *)>
        2cf3ac:	e24dd008 	sub	sp, sp, #8	; 0x8
        2cf3b0:	e58d5004 	str	r5, [sp, #4]	; fField4
        2cf3b4:	e52d506c 	str	r5, [sp, -#108]!	; fField108
        2cf3b8:	e28d0008 	add	r0, sp, #8	; 0x8
        2cf3bc:	eb638d6c 	bl	1bb2974 <$setjmp>
        2cf3c0:	e3300000 	teq	r0, #0	; 0x0
        2cf3c4:	1a000028 	bne	2cf46c <TCursor::CountEntries(void)+0x10c>
        2cf3c8:	e1a0000d 	mov	r0, sp
        2cf3cc:	eb64432a 	bl	1be007c <$AddExceptionHandler>
        2cf3d0:	e3a06001 	mov	r6, #1	; 0x1
        2cf3d4:	e1a00004 	mov	r0, r4
        2cf3d8:	eb5ddffa 	bl	1a473c8 <TCursor::$Reset(void)>
        2cf3dc:	e3300002 	teq	r0, #2	; 0x2
        2cf3e0:	0a000014 	beq	2cf438 <TCursor::CountEntries(void)+0xd8>
        2cf3e4:	e3a03000 	mov	r3, #0	; 0x0
        2cf3e8:	e3a02000 	mov	r2, #0	; 0x0
        2cf3ec:	e3a01000 	mov	r1, #0	; 0x0
        2cf3f0:	e58d406c 	str	r4, [sp, #108]	; fField108
        2cf3f4:	e58d6070 	str	r6, [sp, #112]
        2cf3f8:	e28d006c 	add	r0, sp, #108	; 0x6c
        2cf3fc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        2cf400:	e59f305c 	ldr	r3, [pc, #5c]	; 2cf464 <TCursor::CountEntries(void)+0x104>
        2cf404:	e92d0008 	stmdb	sp!, {r3}
        2cf408:	e2843064 	add	r3, r4, #100	; 0x64
        2cf40c:	e284206c 	add	r2, r4, #108	; 0x6c
        2cf410:	e3a01001 	mov	r1, #1	; 0x1
        2cf414:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2cf418:	eb5df061 	bl	1a4b5a4 <TUnionSoupIndex::$Search(unsigned char, SKey *, SKey *, int (*)(SKey *, unsigned char, void *), void *, SKey *, SKey *, int)>
        2cf41c:	e28dd014 	add	sp, sp, #20	; 0x14
        2cf420:	e59f6040 	ldr	r6, [pc, #40]	; 2cf468 <TCursor::CountEntries(void)+0x108>	; fField40
        2cf424:	e5960000 	ldr	r0, [r6]
        2cf428:	e3300000 	teq	r0, #0	; 0x0
        2cf42c:	0a000001 	beq	2cf438 <TCursor::CountEntries(void)+0xd8>
        2cf430:	eb5dec3d 	bl	1a4a52c <$ReleasePermObjectTextCache(void *)>
        2cf434:	e5865000 	str	r5, [r6]
        2cf438:	e28d1074 	add	r1, sp, #116	; 0x74
        2cf43c:	e1a00004 	mov	r0, r4
        2cf440:	eb5ddfd0 	bl	1a47388 <TCursor::$SetState(CursorState &)>
        2cf444:	e1a0000d 	mov	r0, sp
        2cf448:	eb64471a 	bl	1be10b8 <$ExitHandler>
        2cf44c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        2cf450:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2cf454:	e59d4004 	ldr	r4, [sp, #4]	; fField4
        2cf458:	eb63cf57 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cf45c:	e1a00004 	mov	r0, r4
        2cf460:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2cf464:	01a47390 	streqb	r7, [r4, r0]!
        2cf468:	0c105358 	ldceq	3, cr5, [r0], -#352
        2cf46c:	e28d1074 	add	r1, sp, #116	; 0x74
        2cf470:	e1a00004 	mov	r0, r4
        2cf474:	eb5ddfc3 	bl	1a47388 <TCursor::$SetState(CursorState &)>
        2cf478:	e1a0000d 	mov	r0, sp
        2cf47c:	eb644b34 	bl	1be2154 <$NextHandler>
        2cf480:	eafffff9 	b	2cf46c <TCursor::CountEntries(void)+0x10c>
    */
}

/**
 * Symbol: TCursor::RebuildInfo(unsigned char, long)
 * Address: 002cf484
 */
TCursor::RebuildInfo(unsigned char, long) {
    /*
        2cf484:	e1a0c00d 	mov	ip, sp
        2cf488:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2cf48c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cf490:	e1a04000 	mov	r4, r0
        2cf494:	e1a05002 	mov	r5, r2
        2cf498:	e31100ff 	tst	r1, #255	; 0xff
        2cf49c:	e3a07000 	mov	r7, #0	; 0x0
        2cf4a0:	1a000006 	bne	2cf4c0 <TCursor::RebuildInfo(unsigned char, long)+0x3c>
        2cf4a4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2cf4a8:	e3300000 	teq	r0, #0	; 0x0
        2cf4ac:	0a000001 	beq	2cf4b8 <TCursor::RebuildInfo(unsigned char, long)+0x34>
        2cf4b0:	eb63f88a 	bl	1bcd6e0 <$__dl(void *)>
        2cf4b4:	e5847014 	str	r7, [r4, #20]	; fField20
        2cf4b8:	e1a00004 	mov	r0, r4
        2cf4bc:	eb5ddba2 	bl	1a4634c <TCursor::$BuildSoupsInfo(void)>
        2cf4c0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2cf4c4:	e3300000 	teq	r0, #0	; 0x0
        2cf4c8:	0a000004 	beq	2cf4e0 <TCursor::RebuildInfo(unsigned char, long)+0x5c>
        2cf4cc:	e3a01001 	mov	r1, #1	; 0x1
        2cf4d0:	e590600c 	ldr	r6, [r0, #12]	; fField12
        2cf4d4:	eb5df029 	bl	1a4b580 <TUnionSoupIndex::$__dt(void)>
        2cf4d8:	e5847018 	str	r7, [r4, #24]	; fField24
        2cf4dc:	ea000000 	b	2cf4e4 <TCursor::RebuildInfo(unsigned char, long)+0x60>
        2cf4e0:	e3a06000 	mov	r6, #0	; 0x0
        2cf4e4:	e3a08000 	mov	r8, #0	; 0x0
        2cf4e8:	e3550000 	cmp	r5, #0	; 0x0
        2cf4ec:	ba000008 	blt	2cf514 <TCursor::RebuildInfo(unsigned char, long)+0x90>
        2cf4f0:	e5940068 	ldr	r0, [r4, #104]	; fField104
        2cf4f4:	e3300002 	teq	r0, #2	; 0x2
        2cf4f8:	0a000004 	beq	2cf510 <TCursor::RebuildInfo(unsigned char, long)+0x8c>
        2cf4fc:	e1550006 	cmp	r5, r6
        2cf500:	03a08001 	moveq	r8, #1	; 0x1
        2cf504:	0a000002 	beq	2cf514 <TCursor::RebuildInfo(unsigned char, long)+0x90>
        2cf508:	b2466001 	sublt	r6, r6, #1	; 0x1
        2cf50c:	ea000000 	b	2cf514 <TCursor::RebuildInfo(unsigned char, long)+0x90>
        2cf510:	e3a06000 	mov	r6, #0	; 0x0
        2cf514:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2cf518:	e3300000 	teq	r0, #0	; 0x0
        2cf51c:	0a000001 	beq	2cf528 <TCursor::RebuildInfo(unsigned char, long)+0xa4>
        2cf520:	eb63f86e 	bl	1bcd6e0 <$__dl(void *)>
        2cf524:	e5847020 	str	r7, [r4, #32]	; fField32
        2cf528:	e1a00004 	mov	r0, r4
        2cf52c:	eb5ddb87 	bl	1a46350 <TCursor::$CreateIndexes(void)>
        2cf530:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2cf534:	e3300000 	teq	r0, #0	; 0x0
        2cf538:	11a01006 	movne	r1, r6
        2cf53c:	1b5df01b 	blne	1a4b5b0 <TUnionSoupIndex::$SetCurrentSoup(long)>
        2cf540:	e3380000 	teq	r8, #0	; 0x0
        2cf544:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2cf548:	e2843064 	add	r3, r4, #100	; 0x64
        2cf54c:	e284206c 	add	r2, r4, #108	; 0x6c
        2cf550:	e1a01002 	mov	r1, r2
        2cf554:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2cf558:	eb5df012 	bl	1a4b5a8 <TUnionSoupIndex::$CurrentSoupGone(SKey *, SKey *, SKey *)>
        2cf55c:	e3300000 	teq	r0, #0	; 0x0
        2cf560:	e1a00004 	mov	r0, r4
        2cf564:	e3a01000 	mov	r1, #0	; 0x0
        2cf568:	091b69f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2cf56c:	0a5ddb81 	beq	1a46378 <TCursor::$Move(long)>
        2cf570:	191b69f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2cf574:	1a5e29db 	bne	1a59ce8 <TCursor::$Park(unsigned char)>
    */
}

/**
 * Symbol: TCursor::GetSoupInfoIndex(RefVar const &)
 * Address: 002cf578
 */
TCursor::GetSoupInfoIndex(RefVar const &) {
    /*
        2cf578:	e1a0c00d 	mov	ip, sp
        2cf57c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2cf580:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cf584:	e1a04000 	mov	r4, r0
        2cf588:	e1a05001 	mov	r5, r1
        2cf58c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2cf590:	e2506001 	subs	r6, r0, #1	; 0x1
        2cf594:	4a000009 	bmi	2cf5c0 <TCursor::GetSoupInfoIndex(RefVar const &)+0x48>
        2cf598:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2cf59c:	e7900186 	ldr	r0, [r0, r6, lsl #3]
        2cf5a0:	e5951000 	ldr	r1, [r5]
        2cf5a4:	e5911000 	ldr	r1, [r1]
        2cf5a8:	eb63d320 	bl	1bc4230 <$EQRef__FlT1>
        2cf5ac:	e3300000 	teq	r0, #0	; 0x0
        2cf5b0:	11a00006 	movne	r0, r6
        2cf5b4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        2cf5b8:	e2566001 	subs	r6, r6, #1	; 0x1
        2cf5bc:	5afffff5 	bpl	2cf598 <TCursor::GetSoupInfoIndex(RefVar const &)+0x20>
        2cf5c0:	e3e00000 	mvn	r0, #0	; 0x0
        2cf5c4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::SoupRemoved(RefVar const &)
 * Address: 002cf5c8
 */
TCursor::SoupRemoved(RefVar const &) {
    /*
        2cf5c8:	e1a0c00d 	mov	ip, sp
        2cf5cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2cf5d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cf5d4:	e1a04000 	mov	r4, r0
        2cf5d8:	e1a05001 	mov	r5, r1
        2cf5dc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2cf5e0:	e5911000 	ldr	r1, [r1]
        2cf5e4:	e5911000 	ldr	r1, [r1]
        2cf5e8:	eb63d310 	bl	1bc4230 <$EQRef__FlT1>
        2cf5ec:	e3300000 	teq	r0, #0	; 0x0
        2cf5f0:	1a000007 	bne	2cf614 <TCursor::SoupRemoved(RefVar const &)+0x4c>
        2cf5f4:	e1a01005 	mov	r1, r5
        2cf5f8:	e1a00004 	mov	r0, r4
        2cf5fc:	eb5ddf66 	bl	1a4739c <TCursor::$GetSoupInfoIndex(RefVar const &)>
        2cf600:	e1b02000 	movs	r2, r0
        2cf604:	4a00000c 	bmi	2cf63c <TCursor::SoupRemoved(RefVar const &)+0x74>
        2cf608:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2cf60c:	e3300001 	teq	r0, #1	; 0x1
        2cf610:	1a000004 	bne	2cf628 <TCursor::SoupRemoved(RefVar const &)+0x60>
        2cf614:	e1a00004 	mov	r0, r4
        2cf618:	e5941000 	ldr	r1, [r4]
        2cf61c:	e1a0e00f 	mov	lr, pc
        2cf620:	e281f02c 	add	pc, r1, #44	; 0x2c
        2cf624:	ea000004 	b	2cf63c <TCursor::SoupRemoved(RefVar const &)+0x74>
        2cf628:	e1a00004 	mov	r0, r4
        2cf62c:	e3a01000 	mov	r1, #0	; 0x0
        2cf630:	e5943000 	ldr	r3, [r4]
        2cf634:	e1a0e00f 	mov	lr, pc
        2cf638:	e283f028 	add	pc, r3, #40	; 0x28
        2cf63c:	e1a01005 	mov	r1, r5
        2cf640:	e1a00004 	mov	r0, r4
        2cf644:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2cf648:	ea5ddf65 	b	1a473e4 <TCursor::$UnregisterFromSoup( const(RefVar const &))>
    */
}

/**
 * Symbol: TCursor::SoupAdded(RefVar const &)
 * Address: 002cf64c
 */
TCursor::SoupAdded(RefVar const &) {
    /*
        2cf64c:	e1a0c00d 	mov	ip, sp
        2cf650:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2cf654:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cf658:	e1a04000 	mov	r4, r0
        2cf65c:	e1a05001 	mov	r5, r1
        2cf660:	e5900060 	ldr	r0, [r0, #96]	; fField96
        2cf664:	e3300000 	teq	r0, #0	; 0x0
        2cf668:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        2cf66c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cf670:	e5950000 	ldr	r0, [r5]
        2cf674:	e5900000 	ldr	r0, [r0]
        2cf678:	e59f1080 	ldr	r1, [pc, #80]	; 2cf700 <TCursor::SoupAdded(RefVar const &)+0xb4>	; fField80
        2cf67c:	e5911000 	ldr	r1, [r1]
        2cf680:	e5911000 	ldr	r1, [r1]
        2cf684:	eb63d2f5 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2cf688:	eb63caaf 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf68c:	e40d0004 	str	r0, [sp], -#4	; fField4
        2cf690:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2cf694:	eb63caac 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf698:	e58d0000 	str	r0, [sp]
        2cf69c:	e1a0100d 	mov	r1, sp
        2cf6a0:	e28d0004 	add	r0, sp, #4	; 0x4
        2cf6a4:	e3a02000 	mov	r2, #0	; 0x0
        2cf6a8:	eb5df3d6 	bl	1a4c608 <$IndexPathToIndexDesc__FRC6RefVarT1Pl>
        2cf6ac:	e3300002 	teq	r0, #2	; 0x2
        2cf6b0:	13a06000 	movne	r6, #0	; 0x0
        2cf6b4:	03a06001 	moveq	r6, #1	; 0x1
        2cf6b8:	e59d0000 	ldr	r0, [sp]
        2cf6bc:	eb63cebe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cf6c0:	e3360000 	teq	r6, #0	; 0x0
        2cf6c4:	1a000006 	bne	2cf6e4 <TCursor::SoupAdded(RefVar const &)+0x98>
        2cf6c8:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2cf6cc:	e3300000 	teq	r0, #0	; 0x0
        2cf6d0:	0a00000b 	beq	2cf704 <TCursor::SoupAdded(RefVar const &)+0xb8>
        2cf6d4:	e28d0004 	add	r0, sp, #4	; 0x4
        2cf6d8:	eb5defc6 	bl	1a4b5f8 <$GetTagsIndexDesc(RefVar const &)>
        2cf6dc:	e3300002 	teq	r0, #2	; 0x2
        2cf6e0:	1a000007 	bne	2cf704 <TCursor::SoupAdded(RefVar const &)+0xb8>
        2cf6e4:	e3a00001 	mov	r0, #1	; 0x1
        2cf6e8:	e5840060 	str	r0, [r4, #96]	; fField96
        2cf6ec:	e1a00004 	mov	r0, r4
        2cf6f0:	e5941000 	ldr	r1, [r4]
        2cf6f4:	e1a0e00f 	mov	lr, pc
        2cf6f8:	e281f02c 	add	pc, r1, #44	; 0x2c
        2cf6fc:	ea000009 	b	2cf728 <TCursor::SoupAdded(RefVar const &)+0xdc>
        2cf700:	00685390 	streqb	r5, [r8], -#48	; fField48
        2cf704:	e1a00004 	mov	r0, r4
        2cf708:	e3e02000 	mvn	r2, #0	; 0x0
        2cf70c:	e3a01000 	mov	r1, #0	; 0x0
        2cf710:	e5943000 	ldr	r3, [r4]
        2cf714:	e1a0e00f 	mov	lr, pc
        2cf718:	e283f028 	add	pc, r3, #40	; 0x28
        2cf71c:	e1a01005 	mov	r1, r5
        2cf720:	e1a00004 	mov	r0, r4
        2cf724:	eb5ddf2d 	bl	1a473e0 <TCursor::$RegisterInSoup( const(RefVar const &))>
        2cf728:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2cf72c:	eb63cea2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cf730:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::Status(void)
 * Address: 002cf734
 */
TCursor::Status(void) {
    /*
        2cf734:	e5900060 	ldr	r0, [r0, #96]	; fField96
        2cf738:	e3300000 	teq	r0, #0	; 0x0
        2cf73c:	159f000c 	ldrne	r0, [pc, #c]	; 2cf750 <TCursor::Status(void)+0x1c>
        2cf740:	059f000c 	ldreq	r0, [pc, #c]	; 2cf754 <TCursor::Status(void)+0x20>
        2cf744:	e5900000 	ldr	r0, [r0]
        2cf748:	e5900000 	ldr	r0, [r0]
        2cf74c:	e1a0f00e 	mov	pc, lr
        2cf750:	006838c0 	rsbeq	r3, r8, r0, asr #17
        2cf754:	00684e88 	rsbeq	r4, r8, r8, lsl #29
    */
}

/**
 * Symbol: TCursor::SetSoup(RefVar const &)
 * Address: 002cf758
 */
TCursor::SetSoup(RefVar const &) {
    /*
        2cf758:	e1a0c00d 	mov	ip, sp
        2cf75c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2cf760:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cf764:	e1a04000 	mov	r4, r0
        2cf768:	e1a05001 	mov	r5, r1
        2cf76c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2cf770:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2cf774:	eb63ca74 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf778:	e58d0000 	str	r0, [sp]
        2cf77c:	e1a0100d 	mov	r1, sp
        2cf780:	e1a00004 	mov	r0, r4
        2cf784:	eb5ddf16 	bl	1a473e4 <TCursor::$UnregisterFromSoup( const(RefVar const &))>
        2cf788:	e59d0000 	ldr	r0, [sp]
        2cf78c:	eb63ce8a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cf790:	e5950000 	ldr	r0, [r5]
        2cf794:	e5900000 	ldr	r0, [r0]
        2cf798:	e5840004 	str	r0, [r4, #4]	; fField4
        2cf79c:	e1a00004 	mov	r0, r4
        2cf7a0:	e3e02000 	mvn	r2, #0	; 0x0
        2cf7a4:	e3a01000 	mov	r1, #0	; 0x0
        2cf7a8:	e5943000 	ldr	r3, [r4]
        2cf7ac:	e1a0e00f 	mov	lr, pc
        2cf7b0:	e283f028 	add	pc, r3, #40	; 0x28
        2cf7b4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2cf7b8:	eb63ca63 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf7bc:	e58d0004 	str	r0, [sp, #4]	; fField4
        2cf7c0:	e28d6004 	add	r6, sp, #4	; 0x4
        2cf7c4:	e5950000 	ldr	r0, [r5]
        2cf7c8:	e5900000 	ldr	r0, [r0]
        2cf7cc:	e59f1044 	ldr	r1, [pc, #44]	; 2cf818 <TCursor::SetSoup(RefVar const &)+0xc0>	; fField44
        2cf7d0:	e5911000 	ldr	r1, [r1]
        2cf7d4:	e5911000 	ldr	r1, [r1]
        2cf7d8:	eb63d2a0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2cf7dc:	eb63ca5a 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf7e0:	e58d0008 	str	r0, [sp, #8]	; fField8
        2cf7e4:	e28d0008 	add	r0, sp, #8	; 0x8
        2cf7e8:	e1a01006 	mov	r1, r6
        2cf7ec:	eb5db9b9 	bl	1a3ded8 <$DeleteEntryFromCache__FRC6RefVarT1>
        2cf7f0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2cf7f4:	eb63ce70 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cf7f8:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2cf7fc:	eb63ce6e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cf800:	e1a01005 	mov	r1, r5
        2cf804:	e1a00004 	mov	r0, r4
        2cf808:	eb5ddef4 	bl	1a473e0 <TCursor::$RegisterInSoup( const(RefVar const &))>
        2cf80c:	e1a00004 	mov	r0, r4
        2cf810:	eb5ddeec 	bl	1a473c8 <TCursor::$Reset(void)>
        2cf814:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2cf818:	00682770 	rsbeq	r2, r8, r0, ror r7
    */
}

/**
 * Symbol: TCursor::IndexRemoved(RefVar const &, RefVar const &)
 * Address: 002cf81c
 */
TCursor::IndexRemoved(RefVar const &, RefVar const &) {
    /*
        2cf81c:	e1a0c00d 	mov	ip, sp
        2cf820:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2cf824:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cf828:	e1a04000 	mov	r4, r0
        2cf82c:	e1a05002 	mov	r5, r2
        2cf830:	e3a06000 	mov	r6, #0	; 0x0
        2cf834:	e5920000 	ldr	r0, [r2]
        2cf838:	e5900000 	ldr	r0, [r0]
        2cf83c:	e59f1030 	ldr	r1, [pc, #30]	; 2cf874 <TCursor::IndexRemoved(RefVar const &, RefVar const &)+0x58>
        2cf840:	e5911000 	ldr	r1, [r1]
        2cf844:	e5911000 	ldr	r1, [r1]
        2cf848:	eb63d284 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2cf84c:	e59f1024 	ldr	r1, [pc, #24]	; 2cf878 <TCursor::IndexRemoved(RefVar const &, RefVar const &)+0x5c>	; fField24
        2cf850:	e5911000 	ldr	r1, [r1]
        2cf854:	e5911000 	ldr	r1, [r1]
        2cf858:	eb63d274 	bl	1bc4230 <$EQRef__FlT1>
        2cf85c:	e3300000 	teq	r0, #0	; 0x0
        2cf860:	0a000005 	beq	2cf87c <TCursor::IndexRemoved(RefVar const &, RefVar const &)+0x60>
        2cf864:	e5940020 	ldr	r0, [r4, #32]	; fField32
        2cf868:	e3300000 	teq	r0, #0	; 0x0
        2cf86c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2cf870:	ea00001c 	b	2cf8e8 <TCursor::IndexRemoved(RefVar const &, RefVar const &)+0xcc>
        2cf874:	00684cb0 	streqh	r4, [r8], -#192
        2cf878:	00684a48 	rsbeq	r4, r8, r8, asr #20
        2cf87c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2cf880:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2cf884:	e3300000 	teq	r0, #0	; 0x0
        2cf888:	0a000013 	beq	2cf8dc <TCursor::IndexRemoved(RefVar const &, RefVar const &)+0xc0>
        2cf88c:	e5950000 	ldr	r0, [r5]
        2cf890:	e5900000 	ldr	r0, [r0]
        2cf894:	e59f1068 	ldr	r1, [pc, #68]	; 2cf904 <TCursor::IndexRemoved(RefVar const &, RefVar const &)+0xe8>	; fField68
        2cf898:	e5911000 	ldr	r1, [r1]
        2cf89c:	e5911000 	ldr	r1, [r1]
        2cf8a0:	eb63d26e 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2cf8a4:	eb63ca28 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf8a8:	e58d0000 	str	r0, [sp]
        2cf8ac:	e1a0500d 	mov	r5, sp
        2cf8b0:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2cf8b4:	eb63ca24 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf8b8:	e58d0004 	str	r0, [sp, #4]	; fField4
        2cf8bc:	e28d0004 	add	r0, sp, #4	; 0x4
        2cf8c0:	e1a01005 	mov	r1, r5
        2cf8c4:	eb5df34e 	bl	1a4c604 <$IndexPathsEqual__FRC6RefVarT1>
        2cf8c8:	e1a06000 	mov	r6, r0
        2cf8cc:	e59d0000 	ldr	r0, [sp]
        2cf8d0:	eb63ce39 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cf8d4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2cf8d8:	eb63ce37 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cf8dc:	e28dd008 	add	sp, sp, #8	; 0x8
        2cf8e0:	e3360000 	teq	r6, #0	; 0x0
        2cf8e4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2cf8e8:	e1a00004 	mov	r0, r4
        2cf8ec:	e5941000 	ldr	r1, [r4]
        2cf8f0:	e1a0e00f 	mov	lr, pc
        2cf8f4:	e281f02c 	add	pc, r1, #44	; 0x2c
        2cf8f8:	e3a00001 	mov	r0, #1	; 0x1
        2cf8fc:	e5a40060 	str	r0, [r4, #96]!	; fField96
        2cf900:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2cf904:	00683d70 	rsbeq	r3, r8, r0, ror sp
    */
}

/**
 * Symbol: TCursor::IndexObjectsChanged(void)
 * Address: 002cf908
 */
TCursor::IndexObjectsChanged(void) {
    /*
        2cf908:	e5901014 	ldr	r1, [r0, #20]	; fField20
        2cf90c:	e3310000 	teq	r1, #0	; 0x0
        2cf910:	01a0f00e 	moveq	pc, lr
        2cf914:	e3e02000 	mvn	r2, #0	; 0x0
        2cf918:	e3a01001 	mov	r1, #1	; 0x1
        2cf91c:	e5903000 	ldr	r3, [r0]
        2cf920:	e283f028 	add	pc, r3, #40	; 0x28
    */
}

/**
 * Symbol: TCursor::SoupTagsChanged(RefVar const &)
 * Address: 002cf924
 */
TCursor::SoupTagsChanged(RefVar const &) {
    /*
        2cf924:	e1a0c00d 	mov	ip, sp
        2cf928:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2cf92c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cf930:	e1a04000 	mov	r4, r0
        2cf934:	e1a05001 	mov	r5, r1
        2cf938:	e590001c 	ldr	r0, [r0, #28]	; fField28
        2cf93c:	e3300002 	teq	r0, #2	; 0x2
        2cf940:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2cf944:	e1a01005 	mov	r1, r5
        2cf948:	e1a00004 	mov	r0, r4
        2cf94c:	eb5dde92 	bl	1a4739c <TCursor::$GetSoupInfoIndex(RefVar const &)>
        2cf950:	e1b06000 	movs	r6, r0
        2cf954:	491ba870 	ldmmidb	fp, {r4, r5, r6, fp, sp, pc}
        2cf958:	e24dd00c 	sub	sp, sp, #12	; 0xc
        2cf95c:	e5950000 	ldr	r0, [r5]
        2cf960:	e5900000 	ldr	r0, [r0]
        2cf964:	e59f1060 	ldr	r1, [pc, #60]	; 2cf9cc <TCursor::SoupTagsChanged(RefVar const &)+0xa8>	; fField60
        2cf968:	e5911000 	ldr	r1, [r1]
        2cf96c:	e5911000 	ldr	r1, [r1]
        2cf970:	eb63d23a 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2cf974:	eb63c9f4 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf978:	e58d0000 	str	r0, [sp]
        2cf97c:	e1a0000d 	mov	r0, sp
        2cf980:	eb5def1c 	bl	1a4b5f8 <$GetTagsIndexDesc(RefVar const &)>
        2cf984:	eb63c9f0 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf988:	e58d0008 	str	r0, [sp, #8]	; fField8
        2cf98c:	e59d0000 	ldr	r0, [sp]
        2cf990:	eb63ce09 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cf994:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2cf998:	eb63c9eb 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf99c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2cf9a0:	e28d1004 	add	r1, sp, #4	; 0x4
        2cf9a4:	e28d0008 	add	r0, sp, #8	; 0x8
        2cf9a8:	eb5de297 	bl	1a4840c <$EncodeQueryTags__FRC6RefVarT1>
        2cf9ac:	e5b41014 	ldr	r1, [r4, #20]!	; fField20
        2cf9b0:	e0811186 	add	r1, r1, r6, lsl #3
        2cf9b4:	e5a10004 	str	r0, [r1, #4]!	; fField4
        2cf9b8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2cf9bc:	eb63cdfe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cf9c0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2cf9c4:	eb63cdfc 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cf9c8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2cf9cc:	00685390 	streqb	r5, [r8], -#48	; fField48
    */
}

/**
 * Symbol: CreateNewCursor__7TCursorSFv
 * Address: 002cf9d0
 */
void TCursor::CreateNewCursor() {
    /*
        2cf9d0:	e1a0c00d 	mov	ip, sp
        2cf9d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2cf9d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cf9dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cf9e0:	e59f3064 	ldr	r3, [pc, #64]	; 2cfa4c <CreateNewCursor__7TCursorSFv+0x7c>	; fField64
        2cf9e4:	e59f2064 	ldr	r2, [pc, #64]	; 2cfa50 <CreateNewCursor__7TCursorSFv+0x80>	; fField64
        2cf9e8:	e59f1064 	ldr	r1, [pc, #64]	; 2cfa54 <CreateNewCursor__7TCursorSFv+0x84>	; fField64
        2cf9ec:	e3a000c0 	mov	r0, #192	; 0xc0
        2cf9f0:	eb5e45ac 	bl	1a610a8 <$AllocateFramesCObject__FlPFPv_vN22>
        2cf9f4:	eb63c9d4 	bl	1bc214c <$AllocateRefHandle(long)>
        2cf9f8:	e58d0000 	str	r0, [sp]
        2cf9fc:	e5900000 	ldr	r0, [r0]
        2cfa00:	eb63c9d5 	bl	1bc215c <$BinaryData(long)>
        2cfa04:	e3300000 	teq	r0, #0	; 0x0
        2cfa08:	1b5dda57 	blne	1a4636c <TCursor::$__ct(void)>
        2cfa0c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cfa10:	e59f0040 	ldr	r0, [pc, #40]	; 2cfa58 <CreateNewCursor__7TCursorSFv+0x88>	; fField40
        2cfa14:	eb63c9d4 	bl	1bc216c <$Clone(RefVar const &)>
        2cfa18:	eb63c9cb 	bl	1bc214c <$AllocateRefHandle(long)>
        2cfa1c:	e58d0000 	str	r0, [sp]
        2cfa20:	e28d2004 	add	r2, sp, #4	; 0x4
        2cfa24:	e59f1030 	ldr	r1, [pc, #30]	; 2cfa5c <CreateNewCursor__7TCursorSFv+0x8c>
        2cfa28:	e1a0000d 	mov	r0, sp
        2cfa2c:	eb63da4d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        2cfa30:	e59d0000 	ldr	r0, [sp]
        2cfa34:	e5904000 	ldr	r4, [r0]
        2cfa38:	eb63cddf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cfa3c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2cfa40:	eb63cddd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cfa44:	e1a00004 	mov	r0, r4
        2cfa48:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        2cfa4c:	002ceba4 	eoreq	lr, ip, r4, lsr #23
        2cfa50:	002cdc78 	eoreq	sp, ip, r8, ror ip
        2cfa54:	002cf354 	eoreq	pc, ip, r4, asr r3
        2cfa58:	0067fd78 	rsbeq	pc, r7, r8, ror sp
        2cfa5c:	00684a80 	rsbeq	r4, r8, r0, lsl #21
    */
}

/**
 * Symbol: TCursor::PinCurrentKey(void)
 * Address: 002cfa60
 */
TCursor::PinCurrentKey(void) {
    /*
        2cfa60:	e1a0c00d 	mov	ip, sp
        2cfa64:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2cfa68:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cfa6c:	e1a04000 	mov	r4, r0
        2cfa70:	e280106c 	add	r1, r0, #108	; 0x6c
        2cfa74:	e1a06001 	mov	r6, r1
        2cfa78:	e3a02000 	mov	r2, #0	; 0x0
        2cfa7c:	eb5dda35 	bl	1a46358 <TCursor::$KeyBoundsValidTest(SKey const &, unsigned char)>
        2cfa80:	e3a05001 	mov	r5, #1	; 0x1
        2cfa84:	e3300000 	teq	r0, #0	; 0x0
        2cfa88:	1a000002 	bne	2cfa98 <TCursor::PinCurrentKey(void)+0x38>
        2cfa8c:	e1a00004 	mov	r0, r4
        2cfa90:	eb5dde4c 	bl	1a473c8 <TCursor::$Reset(void)>
        2cfa94:	ea000008 	b	2cfabc <TCursor::PinCurrentKey(void)+0x5c>
        2cfa98:	e1a01006 	mov	r1, r6
        2cfa9c:	e1a00004 	mov	r0, r4
        2cfaa0:	e3a02001 	mov	r2, #1	; 0x1
        2cfaa4:	eb5dda2b 	bl	1a46358 <TCursor::$KeyBoundsValidTest(SKey const &, unsigned char)>
        2cfaa8:	e3300000 	teq	r0, #0	; 0x0
        2cfaac:	13a00000 	movne	r0, #0	; 0x0
        2cfab0:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        2cfab4:	e1a00004 	mov	r0, r4
        2cfab8:	eb5dde43 	bl	1a473cc <TCursor::$ResetToEnd(void)>
        2cfabc:	e1a00005 	mov	r0, r5
        2cfac0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::GotoKey(RefVar const &)
 * Address: 002cfac4
 */
TCursor::GotoKey(RefVar const &) {
    /*
        2cfac4:	e1a0c00d 	mov	ip, sp
        2cfac8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2cfacc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cfad0:	e1a04000 	mov	r4, r0
        2cfad4:	e1a05001 	mov	r5, r1
        2cfad8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cfadc:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2cfae0:	e3a07002 	mov	r7, #2	; 0x2
        2cfae4:	e3300000 	teq	r0, #0	; 0x0
        2cfae8:	1a000001 	bne	2cfaf4 <TCursor::GotoKey(RefVar const &)+0x30>
        2cfaec:	e1a00007 	mov	r0, r7
        2cfaf0:	ea000028 	b	2cfb98 <TCursor::GotoKey(RefVar const &)+0xd4>
        2cfaf4:	e3a00000 	mov	r0, #0	; 0x0
        2cfaf8:	e5c400bd 	strb	r0, [r4, #189]	; fField189
        2cfafc:	e3a03000 	mov	r3, #0	; 0x0
        2cfb00:	e92d0008 	stmdb	sp!, {r3}
        2cfb04:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2cfb08:	eb63c98f 	bl	1bc214c <$AllocateRefHandle(long)>
        2cfb0c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2cfb10:	e28d1004 	add	r1, sp, #4	; 0x4
        2cfb14:	e284206c 	add	r2, r4, #108	; 0x6c
        2cfb18:	e1a06002 	mov	r6, r2
        2cfb1c:	e1a00005 	mov	r0, r5
        2cfb20:	e3a03000 	mov	r3, #0	; 0x0
        2cfb24:	eb5dc14c 	bl	1a4005c <$KeyToSKey__FRC6RefVarT1P4SKeyPsPUc>
        2cfb28:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2cfb2c:	eb63cda2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cfb30:	e594c018 	ldr	ip, [r4, #24]	; fField24
        2cfb34:	e5d4302c 	ldrb	r3, [r4, #44]	; fField44
        2cfb38:	e92d0008 	stmdb	sp!, {r3}
        2cfb3c:	e2843064 	add	r3, r4, #100	; 0x64
        2cfb40:	e1a02006 	mov	r2, r6
        2cfb44:	e1a01006 	mov	r1, r6
        2cfb48:	e1a0000c 	mov	r0, ip
        2cfb4c:	e1a0e00f 	mov	lr, pc
        2cfb50:	e59cf000 	ldr	pc, [ip]
        2cfb54:	e28dd004 	add	sp, sp, #4	; 0x4
        2cfb58:	e3300000 	teq	r0, #0	; 0x0
        2cfb5c:	13300002 	teqne	r0, #2	; 0x2
        2cfb60:	e1a00004 	mov	r0, r4
        2cfb64:	0a000002 	beq	2cfb74 <TCursor::GotoKey(RefVar const &)+0xb0>
        2cfb68:	e3a01001 	mov	r1, #1	; 0x1
        2cfb6c:	eb5e285d 	bl	1a59ce8 <TCursor::$Park(unsigned char)>
        2cfb70:	eaffffdd 	b	2cfaec <TCursor::GotoKey(RefVar const &)+0x28>
        2cfb74:	eb5dde10 	bl	1a473bc <TCursor::$PinCurrentKey(void)>
        2cfb78:	e3300000 	teq	r0, #0	; 0x0
        2cfb7c:	1a000004 	bne	2cfb94 <TCursor::GotoKey(RefVar const &)+0xd0>
        2cfb80:	e3a0001a 	mov	r0, #26	; 0x1a
        2cfb84:	e5840068 	str	r0, [r4, #104]	; fField104
        2cfb88:	e1a00004 	mov	r0, r4
        2cfb8c:	e3a01000 	mov	r1, #0	; 0x0
        2cfb90:	eb5dd9f8 	bl	1a46378 <TCursor::$Move(long)>
        2cfb94:	e5b40068 	ldr	r0, [r4, #104]!	; fField104
        2cfb98:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::GotoEntry(RefVar const &)
 * Address: 002cfb9c
 */
TCursor::GotoEntry(RefVar const &) {
    /*
        2cfb9c:	e1a0c00d 	mov	ip, sp
        2cfba0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2cfba4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cfba8:	e1a04000 	mov	r4, r0
        2cfbac:	e1a05001 	mov	r5, r1
        2cfbb0:	e5910000 	ldr	r0, [r1]
        2cfbb4:	e5900000 	ldr	r0, [r0]
        2cfbb8:	eb63d5b2 	bl	1bc5288 <$IsFaultBlock(long)>
        2cfbbc:	e3300000 	teq	r0, #0	; 0x0
        2cfbc0:	1a000004 	bne	2cfbd8 <TCursor::GotoEntry(RefVar const &)+0x3c>
        2cfbc4:	e59f1070 	ldr	r1, [pc, #70]	; 2cfc3c <TCursor::GotoEntry(RefVar const &)+0xa0>
        2cfbc8:	e59f0070 	ldr	r0, [pc, #70]	; 2cfc40 <TCursor::GotoEntry(RefVar const &)+0xa4>
        2cfbcc:	e5900000 	ldr	r0, [r0]
        2cfbd0:	e3a02000 	mov	r2, #0	; 0x0
        2cfbd4:	eb644d70 	bl	1be319c <$Throw>
        2cfbd8:	e3a07002 	mov	r7, #2	; 0x2
        2cfbdc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2cfbe0:	e3300000 	teq	r0, #0	; 0x0
        2cfbe4:	01a00007 	moveq	r0, r7
        2cfbe8:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2cfbec:	e24dd008 	sub	sp, sp, #8	; 0x8
        2cfbf0:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2cfbf4:	eb63c954 	bl	1bc214c <$AllocateRefHandle(long)>
        2cfbf8:	e58d0000 	str	r0, [sp]
        2cfbfc:	e1a0100d 	mov	r1, sp
        2cfc00:	e1a00005 	mov	r0, r5
        2cfc04:	eb5dc0ed 	bl	1a3ffc0 <$GetEntryKey__FRC6RefVarT1>
        2cfc08:	eb63c94f 	bl	1bc214c <$AllocateRefHandle(long)>
        2cfc0c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2cfc10:	e59d0000 	ldr	r0, [sp]
        2cfc14:	eb63cd68 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cfc18:	e3a00000 	mov	r0, #0	; 0x0
        2cfc1c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2cfc20:	e5911000 	ldr	r1, [r1]
        2cfc24:	e3310002 	teq	r1, #2	; 0x2
        2cfc28:	1a000005 	bne	2cfc44 <TCursor::GotoEntry(RefVar const &)+0xa8>
        2cfc2c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2cfc30:	eb63cd61 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cfc34:	e1a00007 	mov	r0, r7
        2cfc38:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2cfc3c:	ffff4477 	swinv	0x00ff4477
        2cfc40:	003712fc 	ldreqsh	r1, [r7], -ip
        2cfc44:	e5c400bd 	strb	r0, [r4, #189]	; fField189
        2cfc48:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cfc4c:	e3a08000 	mov	r8, #0	; 0x0
        2cfc50:	e1a00005 	mov	r0, r5
        2cfc54:	eb63d170 	bl	1bc421c <$EntrySoup(RefVar const &)>
        2cfc58:	eb63c93b 	bl	1bc214c <$AllocateRefHandle(long)>
        2cfc5c:	e58d0000 	str	r0, [sp]
        2cfc60:	e1a0100d 	mov	r1, sp
        2cfc64:	e1a00004 	mov	r0, r4
        2cfc68:	eb5dddcb 	bl	1a4739c <TCursor::$GetSoupInfoIndex(RefVar const &)>
        2cfc6c:	e1a06000 	mov	r6, r0
        2cfc70:	e59d0000 	ldr	r0, [sp]
        2cfc74:	eb63cd50 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cfc78:	e3560000 	cmp	r6, #0	; 0x0
        2cfc7c:	ba00003c 	blt	2cfd74 <TCursor::GotoEntry(RefVar const &)+0x1d8>
        2cfc80:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cfc84:	e3a03000 	mov	r3, #0	; 0x0
        2cfc88:	e92d0008 	stmdb	sp!, {r3}
        2cfc8c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2cfc90:	eb63c92d 	bl	1bc214c <$AllocateRefHandle(long)>
        2cfc94:	e58d0004 	str	r0, [sp, #4]	; fField4
        2cfc98:	e28d1004 	add	r1, sp, #4	; 0x4
        2cfc9c:	e284206c 	add	r2, r4, #108	; 0x6c
        2cfca0:	e1a09002 	mov	r9, r2
        2cfca4:	e28d0010 	add	r0, sp, #16	; 0x10
        2cfca8:	e3a03000 	mov	r3, #0	; 0x0
        2cfcac:	eb5dc0ea 	bl	1a4005c <$KeyToSKey__FRC6RefVarT1P4SKeyPsPUc>
        2cfcb0:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        2cfcb4:	eb63cd40 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cfcb8:	e5950000 	ldr	r0, [r5]
        2cfcbc:	e5900000 	ldr	r0, [r0]
        2cfcc0:	eb5dc912 	bl	1a42110 <$NoFaultObjectPtr(long)>
        2cfcc4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2cfcc8:	e3100003 	tst	r0, #3	; 0x3
        2cfccc:	01a00140 	moveq	r0, r0, asr #2
        2cfcd0:	0a000000 	beq	2cfcd8 <TCursor::GotoEntry(RefVar const &)+0x13c>
        2cfcd4:	eb63c910 	bl	1bc211c <$_RINTError(long)>
        2cfcd8:	e5840064 	str	r0, [r4, #100]	; fField100
        2cfcdc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2cfce0:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2cfce4:	e0861286 	add	r1, r6, r6, lsl #5
        2cfce8:	e790c101 	ldr	ip, [r0, r1, lsl #2]
        2cfcec:	e3a03000 	mov	r3, #0	; 0x0
        2cfcf0:	e3a02000 	mov	r2, #0	; 0x0
        2cfcf4:	e92d000c 	stmdb	sp!, {r2, r3}
        2cfcf8:	e2842064 	add	r2, r4, #100	; 0x64
        2cfcfc:	e1a01009 	mov	r1, r9
        2cfd00:	e1a0000c 	mov	r0, ip
        2cfd04:	e59cc000 	ldr	ip, [ip]
        2cfd08:	e1a0e00f 	mov	lr, pc
        2cfd0c:	e28cf00c 	add	pc, ip, #12	; 0xc
        2cfd10:	e28dd008 	add	sp, sp, #8	; 0x8
        2cfd14:	e3300000 	teq	r0, #0	; 0x0
        2cfd18:	13300003 	teqne	r0, #3	; 0x3
        2cfd1c:	1a000011 	bne	2cfd68 <TCursor::GotoEntry(RefVar const &)+0x1cc>
        2cfd20:	e5950000 	ldr	r0, [r5]
        2cfd24:	e5900000 	ldr	r0, [r0]
        2cfd28:	e5840068 	str	r0, [r4, #104]	; fField104
        2cfd2c:	e1a01006 	mov	r1, r6
        2cfd30:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2cfd34:	eb5dee1d 	bl	1a4b5b0 <TUnionSoupIndex::$SetCurrentSoup(long)>
        2cfd38:	e1a00004 	mov	r0, r4
        2cfd3c:	eb5ddd9e 	bl	1a473bc <TCursor::$PinCurrentKey(void)>
        2cfd40:	e3300000 	teq	r0, #0	; 0x0
        2cfd44:	0a000003 	beq	2cfd58 <TCursor::GotoEntry(RefVar const &)+0x1bc>
        2cfd48:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2cfd4c:	eb63cd1a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cfd50:	e1a00007 	mov	r0, r7
        2cfd54:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2cfd58:	e1a00004 	mov	r0, r4
        2cfd5c:	e3a01000 	mov	r1, #0	; 0x0
        2cfd60:	eb5dd984 	bl	1a46378 <TCursor::$Move(long)>
        2cfd64:	e3a08001 	mov	r8, #1	; 0x1
        2cfd68:	e28dd004 	add	sp, sp, #4	; 0x4
        2cfd6c:	e3380000 	teq	r8, #0	; 0x0
        2cfd70:	1a000004 	bne	2cfd88 <TCursor::GotoEntry(RefVar const &)+0x1ec>
        2cfd74:	e28d1008 	add	r1, sp, #8	; 0x8
        2cfd78:	e1a00004 	mov	r0, r4
        2cfd7c:	e5942000 	ldr	r2, [r4]
        2cfd80:	e1a0e00f 	mov	lr, pc
        2cfd84:	e282f008 	add	pc, r2, #8	; 0x8
        2cfd88:	e5950000 	ldr	r0, [r5]
        2cfd8c:	e5900000 	ldr	r0, [r0]
        2cfd90:	e5b41068 	ldr	r1, [r4, #104]!	; fField104
        2cfd94:	eb63d125 	bl	1bc4230 <$EQRef__FlT1>
        2cfd98:	e3300000 	teq	r0, #0	; 0x0
        2cfd9c:	03a04002 	moveq	r4, #2	; 0x2
        2cfda0:	13a0401a 	movne	r4, #26	; 0x1a
        2cfda4:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2cfda8:	eb63cd03 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cfdac:	e1a00004 	mov	r0, r4
        2cfdb0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::Reset(void)
 * Address: 002cfdb4
 */
TCursor::Reset(void) {
    /*
        2cfdb4:	e1a0c00d 	mov	ip, sp
        2cfdb8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2cfdbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cfdc0:	e1a04000 	mov	r4, r0
        2cfdc4:	e24dd004 	sub	sp, sp, #4	; 0x4
        2cfdc8:	e590004c 	ldr	r0, [r0, #76]	; fField76
        2cfdcc:	e3300002 	teq	r0, #2	; 0x2
        2cfdd0:	0a00000b 	beq	2cfe04 <TCursor::Reset(void)+0x50>
        2cfdd4:	eb63c8dc 	bl	1bc214c <$AllocateRefHandle(long)>
        2cfdd8:	e58d0000 	str	r0, [sp]
        2cfddc:	e1a0100d 	mov	r1, sp
        2cfde0:	e1a00004 	mov	r0, r4
        2cfde4:	e5942000 	ldr	r2, [r4]
        2cfde8:	e1a0e00f 	mov	lr, pc
        2cfdec:	e282f008 	add	pc, r2, #8	; 0x8
        2cfdf0:	e1a04000 	mov	r4, r0
        2cfdf4:	e59d0000 	ldr	r0, [sp]
        2cfdf8:	eb63ccef 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2cfdfc:	e1a00004 	mov	r0, r4
        2cfe00:	ea000006 	b	2cfe20 <TCursor::Reset(void)+0x6c>
        2cfe04:	e1a00004 	mov	r0, r4
        2cfe08:	e3a01000 	mov	r1, #0	; 0x0
        2cfe0c:	eb5e27b5 	bl	1a59ce8 <TCursor::$Park(unsigned char)>
        2cfe10:	e1a00004 	mov	r0, r4
        2cfe14:	e3a01001 	mov	r1, #1	; 0x1
        2cfe18:	e1a0e00f 	mov	lr, pc
        2cfe1c:	e594f000 	ldr	pc, [r4]
        2cfe20:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::ResetToEnd(void)
 * Address: 002cfe24
 */
TCursor::ResetToEnd(void) {
    /*
        2cfe24:	e1a0c00d 	mov	ip, sp
        2cfe28:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2cfe2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cfe30:	e1a04000 	mov	r4, r0
        2cfe34:	e3a01001 	mov	r1, #1	; 0x1
        2cfe38:	eb5e27aa 	bl	1a59ce8 <TCursor::$Park(unsigned char)>
        2cfe3c:	e1a00004 	mov	r0, r4
        2cfe40:	e3e01000 	mvn	r1, #0	; 0x0
        2cfe44:	e594c000 	ldr	ip, [r4]
        2cfe48:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2cfe4c:	e1a0f00c 	mov	pc, ip
    */
}

/**
 * Symbol: TCursor::IsParked(void)
 * Address: 002cfe50
 */
TCursor::IsParked(void) {
    /*
        2cfe50:	e5901068 	ldr	r1, [r0, #104]	; fField104
        2cfe54:	e3310002 	teq	r1, #2	; 0x2
        2cfe58:	13a00002 	movne	r0, #2	; 0x2
        2cfe5c:	11a0f00e 	movne	pc, lr
        2cfe60:	e5d000bc 	ldrb	r0, [r0, #188]	; fField188
        2cfe64:	e3300000 	teq	r0, #0	; 0x0
        2cfe68:	059f000c 	ldreq	r0, [pc, #c]	; 2cfe7c <TCursor::IsParked(void)+0x2c>
        2cfe6c:	159f000c 	ldrne	r0, [pc, #c]	; 2cfe80 <TCursor::IsParked(void)+0x30>
        2cfe70:	e5900000 	ldr	r0, [r0]
        2cfe74:	e5900000 	ldr	r0, [r0]
        2cfe78:	e1a0f00e 	mov	pc, lr
        2cfe7c:	00682070 	rsbeq	r2, r8, r0, ror r0
        2cfe80:	00682b60 	rsbeq	r2, r8, r0, ror #22
    */
}

/**
 * Symbol: TCursor::EntryChanged(RefVar const &, unsigned char, unsigned char)
 * Address: 002cfe84
 */
TCursor::EntryChanged(RefVar const &, unsigned char, unsigned char) {
    /*
        2cfe84:	e1a0c00d 	mov	ip, sp
        2cfe88:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2cfe8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cfe90:	e1a04000 	mov	r4, r0
        2cfe94:	e1a05001 	mov	r5, r1
        2cfe98:	e20260ff 	and	r6, r2, #255	; 0xff
        2cfe9c:	e20370ff 	and	r7, r3, #255	; 0xff
        2cfea0:	e5900068 	ldr	r0, [r0, #104]	; fField104
        2cfea4:	e5911000 	ldr	r1, [r1]
        2cfea8:	e5911000 	ldr	r1, [r1]
        2cfeac:	eb63d0df 	bl	1bc4230 <$EQRef__FlT1>
        2cfeb0:	e3300000 	teq	r0, #0	; 0x0
        2cfeb4:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2cfeb8:	e3360000 	teq	r6, #0	; 0x0
        2cfebc:	0a000004 	beq	2cfed4 <TCursor::EntryChanged(RefVar const &, unsigned char, unsigned char)+0x50>
        2cfec0:	e1a01005 	mov	r1, r5
        2cfec4:	e1a00004 	mov	r0, r4
        2cfec8:	e5942000 	ldr	r2, [r4]
        2cfecc:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2cfed0:	e282f004 	add	pc, r2, #4	; 0x4
        2cfed4:	e3370000 	teq	r7, #0	; 0x0
        2cfed8:	15940020 	ldrne	r0, [r4, #32]	; fField32
        2cfedc:	13300000 	teqne	r0, #0	; 0x0
        2cfee0:	11a00004 	movne	r0, r4
        2cfee4:	13a01000 	movne	r1, #0	; 0x0
        2cfee8:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        2cfeec:	1a5dd921 	bne	1a46378 <TCursor::$Move(long)>
        2cfef0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::EntryReadded(RefVar const &, RefVar const &)
 * Address: 002cfef4
 */
TCursor::EntryReadded(RefVar const &, RefVar const &) {
    /*
        2cfef4:	e1a0c00d 	mov	ip, sp
        2cfef8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2cfefc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cff00:	e1a04000 	mov	r4, r0
        2cff04:	e1a05002 	mov	r5, r2
        2cff08:	e5900068 	ldr	r0, [r0, #104]	; fField104
        2cff0c:	e5911000 	ldr	r1, [r1]
        2cff10:	e5911000 	ldr	r1, [r1]
        2cff14:	eb63d0c5 	bl	1bc4230 <$EQRef__FlT1>
        2cff18:	e3300000 	teq	r0, #0	; 0x0
        2cff1c:	15950000 	ldrne	r0, [r5]
        2cff20:	15900000 	ldrne	r0, [r0]
        2cff24:	15a40068 	strne	r0, [r4, #104]!	; fField104
        2cff28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::EntryRemoved(RefVar const &)
 * Address: 002cff2c
 */
TCursor::EntryRemoved(RefVar const &) {
    /*
        2cff2c:	e1a0c00d 	mov	ip, sp
        2cff30:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2cff34:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cff38:	e1a04000 	mov	r4, r0
        2cff3c:	e5900068 	ldr	r0, [r0, #104]	; fField104
        2cff40:	e5911000 	ldr	r1, [r1]
        2cff44:	e5911000 	ldr	r1, [r1]
        2cff48:	eb63d0b8 	bl	1bc4230 <$EQRef__FlT1>
        2cff4c:	e3300000 	teq	r0, #0	; 0x0
        2cff50:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2cff54:	e3a00000 	mov	r0, #0	; 0x0
        2cff58:	e5c400bd 	strb	r0, [r4, #189]	; fField189
        2cff5c:	e1a00004 	mov	r0, r4
        2cff60:	e3a01001 	mov	r1, #1	; 0x1
        2cff64:	e1a0e00f 	mov	lr, pc
        2cff68:	e594f000 	ldr	pc, [r4]
        2cff6c:	e5940068 	ldr	r0, [r4, #104]	; fField104
        2cff70:	e2500002 	subs	r0, r0, #2	; 0x2
        2cff74:	13a00001 	movne	r0, #1	; 0x1
        2cff78:	e5c400bd 	strb	r0, [r4, #189]	; fField189
        2cff7c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::EntrySoupChanged(RefVar const &, RefVar const &)
 * Address: 002cff80
 */
TCursor::EntrySoupChanged(RefVar const &, RefVar const &) {
    /*
        2cff80:	e1a0c00d 	mov	ip, sp
        2cff84:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2cff88:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cff8c:	e1a04000 	mov	r4, r0
        2cff90:	e1a05002 	mov	r5, r2
        2cff94:	e5900068 	ldr	r0, [r0, #104]	; fField104
        2cff98:	e5911000 	ldr	r1, [r1]
        2cff9c:	e5911000 	ldr	r1, [r1]
        2cffa0:	eb63d0a2 	bl	1bc4230 <$EQRef__FlT1>
        2cffa4:	e3300000 	teq	r0, #0	; 0x0
        2cffa8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2cffac:	e1a01005 	mov	r1, r5
        2cffb0:	e1a00004 	mov	r0, r4
        2cffb4:	e5942000 	ldr	r2, [r4]
        2cffb8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2cffbc:	e282f004 	add	pc, r2, #4	; 0x4
    */
}

/**
 * Symbol: TCursor::__ct(void)
 * Address: 002cffc0
 */
TCursor::TCursor(void) {
    /*
        2cffc0:	e1a0c00d 	mov	ip, sp
        2cffc4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2cffc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2cffcc:	e3300000 	teq	r0, #0	; 0x0
        2cffd0:	1a000003 	bne	2cffe4 <TCursor::__ct(void)+0x24>
        2cffd4:	e3a000c0 	mov	r0, #192	; 0xc0
        2cffd8:	eb63f9d6 	bl	1bce738 <$__nw(unsigned int)>
        2cffdc:	e3300000 	teq	r0, #0	; 0x0
        2cffe0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2cffe4:	e3a01000 	mov	r1, #0	; 0x0
        2cffe8:	e5c0106d 	strb	r1, [r0, #109]	; fField109
        2cffec:	e5c0106c 	strb	r1, [r0, #108]	; fField108
        2cfff0:	e59f2064 	ldr	r2, [pc, #64]	; 2d005c <TCursor::__ct(void)+0x9c>	; fField64
        2cfff4:	e5801018 	str	r1, [r0, #24]	; fField24
        2cfff8:	e5802000 	str	r2, [r0]
        2cfffc:	e5801020 	str	r1, [r0, #32]	; fField32
        2d0000:	e5801014 	str	r1, [r0, #20]	; fField20
        2d0004:	e5801010 	str	r1, [r0, #16]	; fField16
        2d0008:	e5801034 	str	r1, [r0, #52]	; fField52
        2d000c:	e5801058 	str	r1, [r0, #88]	; fField88
        2d0010:	e580105c 	str	r1, [r0, #92]	; fField92
        2d0014:	e5801060 	str	r1, [r0, #96]	; fField96
        2d0018:	e3a01002 	mov	r1, #2	; 0x2
        2d001c:	e3a02002 	mov	r2, #2	; 0x2
        2d0020:	e9800006 	stmib	r0, {r1, r2}
        2d0024:	e5801068 	str	r1, [r0, #104]	; fField104
        2d0028:	e580101c 	str	r1, [r0, #28]	; fField28
        2d002c:	e5801024 	str	r1, [r0, #36]	; fField36
        2d0030:	e5801028 	str	r1, [r0, #40]	; fField40
        2d0034:	e5801030 	str	r1, [r0, #48]	; fField48
        2d0038:	e5801038 	str	r1, [r0, #56]	; fField56
        2d003c:	e580104c 	str	r1, [r0, #76]	; fField76
        2d0040:	e5801050 	str	r1, [r0, #80]	; fField80
        2d0044:	e5801054 	str	r1, [r0, #84]	; fField84
        2d0048:	e580103c 	str	r1, [r0, #60]	; fField60
        2d004c:	e5801040 	str	r1, [r0, #64]	; fField64
        2d0050:	e5801044 	str	r1, [r0, #68]	; fField68
        2d0054:	e5801048 	str	r1, [r0, #72]	; fField72
        2d0058:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        2d005c:	0001fb5c 	andeq	pc, r1, ip, asr fp
    */
}

/**
 * Symbol: TCursor::RegisterInSoup( const(RefVar const &))
 * Address: 002d0060
 */
TCursor::RegisterInSoup( const(RefVar const &)) {
    /*
        2d0060:	e1a0c00d 	mov	ip, sp
        2d0064:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2d0068:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d006c:	e1a04000 	mov	r4, r0
        2d0070:	e1a05001 	mov	r5, r1
        2d0074:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d0078:	e5900008 	ldr	r0, [r0, #8]	; fField8
        2d007c:	eb63c832 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0080:	e58d0000 	str	r0, [sp]
        2d0084:	e1a0600d 	mov	r6, sp
        2d0088:	e5950000 	ldr	r0, [r5]
        2d008c:	e5900000 	ldr	r0, [r0]
        2d0090:	e59f80cc 	ldr	r8, [pc, #cc]	; 2d0164 <TCursor::RegisterInSoup( const(RefVar const &))+0x104>
        2d0094:	e5981000 	ldr	r1, [r8]
        2d0098:	e5911000 	ldr	r1, [r1]
        2d009c:	eb63d06f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d00a0:	eb63c829 	bl	1bc214c <$AllocateRefHandle(long)>
        2d00a4:	e58d0004 	str	r0, [sp, #4]	; fField4
        2d00a8:	e28d0004 	add	r0, sp, #4	; 0x4
        2d00ac:	e1a01006 	mov	r1, r6
        2d00b0:	eb5dc826 	bl	1a42150 <$PutEntryIntoCache__FRC6RefVarT1>
        2d00b4:	e59d0000 	ldr	r0, [sp]
        2d00b8:	eb63cc3f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d00bc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2d00c0:	eb63cc3d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d00c4:	e5950000 	ldr	r0, [r5]
        2d00c8:	e5900000 	ldr	r0, [r0]
        2d00cc:	e59f1094 	ldr	r1, [pc, #94]	; 2d0168 <TCursor::RegisterInSoup( const(RefVar const &))+0x108>
        2d00d0:	e5911000 	ldr	r1, [r1]
        2d00d4:	e5911000 	ldr	r1, [r1]
        2d00d8:	eb63d060 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d00dc:	eb63c81a 	bl	1bc214c <$AllocateRefHandle(long)>
        2d00e0:	e1a07000 	mov	r7, r0
        2d00e4:	e5900000 	ldr	r0, [r0]
        2d00e8:	e3300002 	teq	r0, #2	; 0x2
        2d00ec:	0a000019 	beq	2d0158 <TCursor::RegisterInSoup( const(RefVar const &))+0xf8>
        2d00f0:	eb63d46d 	bl	1bc52ac <$Length(long)>
        2d00f4:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d00f8:	e2506001 	subs	r6, r0, #1	; 0x1
        2d00fc:	4a000014 	bmi	2d0154 <TCursor::RegisterInSoup( const(RefVar const &))+0xf4>
        2d0100:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2d0104:	eb63c810 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0108:	e58d0000 	str	r0, [sp]
        2d010c:	e1a0500d 	mov	r5, sp
        2d0110:	e1a01006 	mov	r1, r6
        2d0114:	e5970000 	ldr	r0, [r7]
        2d0118:	eb63d04d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d011c:	e5981000 	ldr	r1, [r8]
        2d0120:	e5911000 	ldr	r1, [r1]
        2d0124:	eb63d04d 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d0128:	eb63c807 	bl	1bc214c <$AllocateRefHandle(long)>
        2d012c:	e58d0004 	str	r0, [sp, #4]	; fField4
        2d0130:	e28d0004 	add	r0, sp, #4	; 0x4
        2d0134:	e1a01005 	mov	r1, r5
        2d0138:	eb5dc804 	bl	1a42150 <$PutEntryIntoCache__FRC6RefVarT1>
        2d013c:	e59d0000 	ldr	r0, [sp]
        2d0140:	eb63cc1d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0144:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2d0148:	eb63cc1b 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d014c:	e2566001 	subs	r6, r6, #1	; 0x1
        2d0150:	5affffea 	bpl	2d0100 <TCursor::RegisterInSoup( const(RefVar const &))+0xa0>
        2d0154:	e28dd008 	add	sp, sp, #8	; 0x8
        2d0158:	e1a00007 	mov	r0, r7
        2d015c:	eb63cc16 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0160:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2d0164:	00682770 	rsbeq	r2, r8, r0, ror r7
        2d0168:	00684780 	rsbeq	r4, r8, r0, lsl #15
    */
}

/**
 * Symbol: TCursor::UnregisterFromSoup( const(RefVar const &))
 * Address: 002d016c
 */
TCursor::UnregisterFromSoup( const(RefVar const &)) {
    /*
        2d016c:	e1a0c00d 	mov	ip, sp
        2d0170:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2d0174:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d0178:	e1a04000 	mov	r4, r0
        2d017c:	e1a05001 	mov	r5, r1
        2d0180:	e5910000 	ldr	r0, [r1]
        2d0184:	e5900000 	ldr	r0, [r0]
        2d0188:	e59f1090 	ldr	r1, [pc, #90]	; 2d0220 <TCursor::UnregisterFromSoup( const(RefVar const &))+0xb4>
        2d018c:	e5911000 	ldr	r1, [r1]
        2d0190:	e5911000 	ldr	r1, [r1]
        2d0194:	eb63d031 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d0198:	eb63c7eb 	bl	1bc214c <$AllocateRefHandle(long)>
        2d019c:	e1a06000 	mov	r6, r0
        2d01a0:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d01a4:	e5900000 	ldr	r0, [r0]
        2d01a8:	e59f8074 	ldr	r8, [pc, #74]	; 2d0224 <TCursor::UnregisterFromSoup( const(RefVar const &))+0xb8>
        2d01ac:	e3300002 	teq	r0, #2	; 0x2
        2d01b0:	0a00001c 	beq	2d0228 <TCursor::UnregisterFromSoup( const(RefVar const &))+0xbc>
        2d01b4:	eb63d43c 	bl	1bc52ac <$Length(long)>
        2d01b8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d01bc:	e2507001 	subs	r7, r0, #1	; 0x1
        2d01c0:	4a000014 	bmi	2d0218 <TCursor::UnregisterFromSoup( const(RefVar const &))+0xac>
        2d01c4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2d01c8:	eb63c7df 	bl	1bc214c <$AllocateRefHandle(long)>
        2d01cc:	e58d0000 	str	r0, [sp]
        2d01d0:	e1a0500d 	mov	r5, sp
        2d01d4:	e1a01007 	mov	r1, r7
        2d01d8:	e5960000 	ldr	r0, [r6]
        2d01dc:	eb63d01c 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        2d01e0:	e5981000 	ldr	r1, [r8]
        2d01e4:	e5911000 	ldr	r1, [r1]
        2d01e8:	eb63d01c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d01ec:	eb63c7d6 	bl	1bc214c <$AllocateRefHandle(long)>
        2d01f0:	e58d0004 	str	r0, [sp, #4]	; fField4
        2d01f4:	e28d0004 	add	r0, sp, #4	; 0x4
        2d01f8:	e1a01005 	mov	r1, r5
        2d01fc:	eb5db735 	bl	1a3ded8 <$DeleteEntryFromCache__FRC6RefVarT1>
        2d0200:	e59d0000 	ldr	r0, [sp]
        2d0204:	eb63cbec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0208:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2d020c:	eb63cbea 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0210:	e2577001 	subs	r7, r7, #1	; 0x1
        2d0214:	5affffea 	bpl	2d01c4 <TCursor::UnregisterFromSoup( const(RefVar const &))+0x58>
        2d0218:	e28dd008 	add	sp, sp, #8	; 0x8
        2d021c:	ea000013 	b	2d0270 <TCursor::UnregisterFromSoup( const(RefVar const &))+0x104>
        2d0220:	00684780 	rsbeq	r4, r8, r0, lsl #15
        2d0224:	00682770 	rsbeq	r2, r8, r0, ror r7
        2d0228:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        2d022c:	eb63c7c6 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0230:	e58d0000 	str	r0, [sp]
        2d0234:	e1a0400d 	mov	r4, sp
        2d0238:	e5950000 	ldr	r0, [r5]
        2d023c:	e5900000 	ldr	r0, [r0]
        2d0240:	e5981000 	ldr	r1, [r8]
        2d0244:	e5911000 	ldr	r1, [r1]
        2d0248:	eb63d004 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d024c:	eb63c7be 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0250:	e58d0004 	str	r0, [sp, #4]	; fField4
        2d0254:	e28d0004 	add	r0, sp, #4	; 0x4
        2d0258:	e1a01004 	mov	r1, r4
        2d025c:	eb5db71d 	bl	1a3ded8 <$DeleteEntryFromCache__FRC6RefVarT1>
        2d0260:	e59d0000 	ldr	r0, [sp]
        2d0264:	eb63cbd4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0268:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2d026c:	eb63cbd2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0270:	e1a00006 	mov	r0, r6
        2d0274:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2d0278:	ea63cbcf 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
    */
}

/**
 * Symbol: TCursor::Clone(void)
 * Address: 002d027c
 */
TCursor::Clone(void) {
    /*
        2d027c:	e1a0c00d 	mov	ip, sp
        2d0280:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2d0284:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d0288:	e1a04000 	mov	r4, r0
        2d028c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d0290:	eb5e4386 	bl	1a610b0 <$CreateNewCursor__7TCursorSFv>
        2d0294:	eb63c7ac 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0298:	e58d0000 	str	r0, [sp]
        2d029c:	e1a0000d 	mov	r0, sp
        2d02a0:	eb5ddc51 	bl	1a473ec <$CursorObj(RefVar const &)>
        2d02a4:	e1a02004 	mov	r2, r4
        2d02a8:	e1a0100d 	mov	r1, sp
        2d02ac:	eb5ddc52 	bl	1a473fc <TCursor::$Init(RefVar const &, TCursor const *)>
        2d02b0:	e59d0000 	ldr	r0, [sp]
        2d02b4:	e5904000 	ldr	r4, [r0]
        2d02b8:	eb63cbbf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d02bc:	e1a00004 	mov	r0, r4
        2d02c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::GCMark(void)
 * Address: 002d02f4
 */
TCursor::GCMark(void) {
    /*
        2d02f4:	e1a0c00d 	mov	ip, sp
        2d02f8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d02fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d0300:	e1a04000 	mov	r4, r0
        2d0304:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2d0308:	eb63cbac 	bl	1bc31c0 <$DIYGCMark(long)>
        2d030c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2d0310:	eb63cbaa 	bl	1bc31c0 <$DIYGCMark(long)>
        2d0314:	e5940068 	ldr	r0, [r4, #104]	; fField104
        2d0318:	eb63cba8 	bl	1bc31c0 <$DIYGCMark(long)>
        2d031c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2d0320:	eb63cba6 	bl	1bc31c0 <$DIYGCMark(long)>
        2d0324:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2d0328:	eb63cba4 	bl	1bc31c0 <$DIYGCMark(long)>
        2d032c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2d0330:	eb63cba2 	bl	1bc31c0 <$DIYGCMark(long)>
        2d0334:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2d0338:	eb63cba0 	bl	1bc31c0 <$DIYGCMark(long)>
        2d033c:	e5940038 	ldr	r0, [r4, #56]	; fField56
        2d0340:	eb63cb9e 	bl	1bc31c0 <$DIYGCMark(long)>
        2d0344:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2d0348:	eb63cb9c 	bl	1bc31c0 <$DIYGCMark(long)>
        2d034c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2d0350:	e3100078 	tst	r0, #120	; 0x78
        2d0354:	0a000003 	beq	2d0368 <TCursor::GCMark(void)+0x74>
        2d0358:	e5940050 	ldr	r0, [r4, #80]	; fField80
        2d035c:	eb63cb97 	bl	1bc31c0 <$DIYGCMark(long)>
        2d0360:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2d0364:	eb63cb95 	bl	1bc31c0 <$DIYGCMark(long)>
        2d0368:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2d036c:	e3100d0e 	tst	r0, #896	; 0x380
        2d0370:	0a000007 	beq	2d0394 <TCursor::GCMark(void)+0xa0>
        2d0374:	e594003c 	ldr	r0, [r4, #60]	; fField60
        2d0378:	eb63cb90 	bl	1bc31c0 <$DIYGCMark(long)>
        2d037c:	e5940040 	ldr	r0, [r4, #64]	; fField64
        2d0380:	eb63cb8e 	bl	1bc31c0 <$DIYGCMark(long)>
        2d0384:	e5940044 	ldr	r0, [r4, #68]	; fField68
        2d0388:	eb63cb8c 	bl	1bc31c0 <$DIYGCMark(long)>
        2d038c:	e5940048 	ldr	r0, [r4, #72]	; fField72
        2d0390:	eb63cb8a 	bl	1bc31c0 <$DIYGCMark(long)>
        2d0394:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2d0398:	e3300000 	teq	r0, #0	; 0x0
        2d039c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2d03a0:	e1a05000 	mov	r5, r0
        2d03a4:	e5b41010 	ldr	r1, [r4, #16]!	; fField16
        2d03a8:	e0804181 	add	r4, r0, r1, lsl #3
        2d03ac:	e1500004 	cmp	r0, r4
        2d03b0:	291ba830 	ldmcsdb	fp, {r4, r5, fp, sp, pc}
        2d03b4:	e5950000 	ldr	r0, [r5]
        2d03b8:	eb63cb80 	bl	1bc31c0 <$DIYGCMark(long)>
        2d03bc:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2d03c0:	eb63cb7e 	bl	1bc31c0 <$DIYGCMark(long)>
        2d03c4:	e2855008 	add	r5, r5, #8	; 0x8
        2d03c8:	e1550004 	cmp	r5, r4
        2d03cc:	3afffff8 	bcc	2d03b4 <TCursor::GCMark(void)+0xc0>
        2d03d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::GCUpdate(void)
 * Address: 002d03d4
 */
TCursor::GCUpdate(void) {
    /*
        2d03d4:	e1a0c00d 	mov	ip, sp
        2d03d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d03dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d03e0:	e1a04000 	mov	r4, r0
        2d03e4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2d03e8:	eb63cb77 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d03ec:	e5840004 	str	r0, [r4, #4]	; fField4
        2d03f0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2d03f4:	eb63cb74 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d03f8:	e5840008 	str	r0, [r4, #8]	; fField8
        2d03fc:	e5940068 	ldr	r0, [r4, #104]	; fField104
        2d0400:	eb63cb71 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d0404:	e5840068 	str	r0, [r4, #104]	; fField104
        2d0408:	e594001c 	ldr	r0, [r4, #28]	; fField28
        2d040c:	eb63cb6e 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d0410:	e584001c 	str	r0, [r4, #28]	; fField28
        2d0414:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2d0418:	eb63cb6b 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d041c:	e5840024 	str	r0, [r4, #36]	; fField36
        2d0420:	e5940028 	ldr	r0, [r4, #40]	; fField40
        2d0424:	eb63cb68 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d0428:	e5840028 	str	r0, [r4, #40]	; fField40
        2d042c:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2d0430:	eb63cb65 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d0434:	e5840030 	str	r0, [r4, #48]	; fField48
        2d0438:	e5940038 	ldr	r0, [r4, #56]	; fField56
        2d043c:	eb63cb62 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d0440:	e5840038 	str	r0, [r4, #56]	; fField56
        2d0444:	e594004c 	ldr	r0, [r4, #76]	; fField76
        2d0448:	eb63cb5f 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d044c:	e584004c 	str	r0, [r4, #76]	; fField76
        2d0450:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2d0454:	e3100078 	tst	r0, #120	; 0x78
        2d0458:	0a000005 	beq	2d0474 <TCursor::GCUpdate(void)+0xa0>
        2d045c:	e5940050 	ldr	r0, [r4, #80]	; fField80
        2d0460:	eb63cb59 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d0464:	e5840050 	str	r0, [r4, #80]	; fField80
        2d0468:	e5940054 	ldr	r0, [r4, #84]	; fField84
        2d046c:	eb63cb56 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d0470:	e5840054 	str	r0, [r4, #84]	; fField84
        2d0474:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2d0478:	e3100d0e 	tst	r0, #896	; 0x380
        2d047c:	0a00000b 	beq	2d04b0 <TCursor::GCUpdate(void)+0xdc>
        2d0480:	e594003c 	ldr	r0, [r4, #60]	; fField60
        2d0484:	eb63cb50 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d0488:	e584003c 	str	r0, [r4, #60]	; fField60
        2d048c:	e5940040 	ldr	r0, [r4, #64]	; fField64
        2d0490:	eb63cb4d 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d0494:	e5840040 	str	r0, [r4, #64]	; fField64
        2d0498:	e5940044 	ldr	r0, [r4, #68]	; fField68
        2d049c:	eb63cb4a 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d04a0:	e5840044 	str	r0, [r4, #68]	; fField68
        2d04a4:	e5940048 	ldr	r0, [r4, #72]	; fField72
        2d04a8:	eb63cb47 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d04ac:	e5840048 	str	r0, [r4, #72]	; fField72
        2d04b0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2d04b4:	e3300000 	teq	r0, #0	; 0x0
        2d04b8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2d04bc:	e1a05000 	mov	r5, r0
        2d04c0:	e5b41010 	ldr	r1, [r4, #16]!	; fField16
        2d04c4:	e0804181 	add	r4, r0, r1, lsl #3
        2d04c8:	e1500004 	cmp	r0, r4
        2d04cc:	291ba830 	ldmcsdb	fp, {r4, r5, fp, sp, pc}
        2d04d0:	e5950000 	ldr	r0, [r5]
        2d04d4:	eb63cb3c 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d04d8:	e5850000 	str	r0, [r5]
        2d04dc:	e5950004 	ldr	r0, [r5, #4]	; fField4
        2d04e0:	eb63cb39 	bl	1bc31cc <$DIYGCUpdate(long)>
        2d04e4:	e5a50004 	str	r0, [r5, #4]!	; fField4
        2d04e8:	e2855004 	add	r5, r5, #4	; 0x4
        2d04ec:	e1550004 	cmp	r5, r4
        2d04f0:	3afffff6 	bcc	2d04d0 <TCursor::GCUpdate(void)+0xfc>
        2d04f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TCursor::Init(RefVar const &, RefVar const &, RefVar const &)
 * Address: 002d05a4
 */
TCursor::Init(RefVar const &, RefVar const &, RefVar const &) {
    /*
        2d05a4:	e1a0c00d 	mov	ip, sp
        2d05a8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2d05ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d05b0:	e1a04000 	mov	r4, r0
        2d05b4:	e1a06002 	mov	r6, r2
        2d05b8:	e1a05003 	mov	r5, r3
        2d05bc:	e3a09000 	mov	r9, #0	; 0x0
        2d05c0:	e580900c 	str	r9, [r0, #12]	; fField12
        2d05c4:	e3a00002 	mov	r0, #2	; 0x2
        2d05c8:	e5840068 	str	r0, [r4, #104]	; fField104
        2d05cc:	e5c490bc 	strb	r9, [r4, #188]	; fField188
        2d05d0:	e5c490bd 	strb	r9, [r4, #189]	; fField189
        2d05d4:	e5920000 	ldr	r0, [r2]
        2d05d8:	e5900000 	ldr	r0, [r0]
        2d05dc:	e5840004 	str	r0, [r4, #4]	; fField4
        2d05e0:	e5910000 	ldr	r0, [r1]
        2d05e4:	e5900000 	ldr	r0, [r0]
        2d05e8:	e5840008 	str	r0, [r4, #8]	; fField8
        2d05ec:	e5950000 	ldr	r0, [r5]
        2d05f0:	e5900000 	ldr	r0, [r0]
        2d05f4:	e59f731c 	ldr	r7, [pc, #31c]	; 2d0918 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x374>
        2d05f8:	e3300002 	teq	r0, #2	; 0x2
        2d05fc:	05970000 	ldreq	r0, [r7]
        2d0600:	05900000 	ldreq	r0, [r0]
        2d0604:	05840024 	streq	r0, [r4, #36]	; fField36
        2d0608:	0a0000ba 	beq	2d08f8 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x354>
        2d060c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d0610:	e59f1304 	ldr	r1, [pc, #304]	; 2d091c <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x378>
        2d0614:	e5911000 	ldr	r1, [r1]
        2d0618:	e5911000 	ldr	r1, [r1]
        2d061c:	eb63cf0f 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d0620:	eb63c6c9 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0624:	e58d0000 	str	r0, [sp]
        2d0628:	e1a0000d 	mov	r0, sp
        2d062c:	eb63caee 	bl	1bc31ec <$EnsureInternal(RefVar const &)>
        2d0630:	e5840024 	str	r0, [r4, #36]	; fField36
        2d0634:	e59d0000 	ldr	r0, [sp]
        2d0638:	eb63cadf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d063c:	e5940024 	ldr	r0, [r4, #36]	; fField36
        2d0640:	e3300002 	teq	r0, #2	; 0x2
        2d0644:	05970000 	ldreq	r0, [r7]
        2d0648:	05900000 	ldreq	r0, [r0]
        2d064c:	05840024 	streq	r0, [r4, #36]	; fField36
        2d0650:	e5950000 	ldr	r0, [r5]
        2d0654:	e5900000 	ldr	r0, [r0]
        2d0658:	e59f12c0 	ldr	r1, [pc, #2c0]	; 2d0920 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x37c>
        2d065c:	e5911000 	ldr	r1, [r1]
        2d0660:	e5911000 	ldr	r1, [r1]
        2d0664:	eb63cefd 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d0668:	e5840030 	str	r0, [r4, #48]	; fField48
        2d066c:	e59f82b0 	ldr	r8, [pc, #2b0]	; 2d0924 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x380>
        2d0670:	e3300002 	teq	r0, #2	; 0x2
        2d0674:	0a00002e 	beq	2d0734 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x190>
        2d0678:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2d067c:	e3800002 	orr	r0, r0, #2	; 0x2
        2d0680:	e584000c 	str	r0, [r4, #12]	; fField12
        2d0684:	e5950000 	ldr	r0, [r5]
        2d0688:	e5900000 	ldr	r0, [r0]
        2d068c:	e59f1294 	ldr	r1, [pc, #294]	; 2d0928 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x384>
        2d0690:	e5911000 	ldr	r1, [r1]
        2d0694:	e5911000 	ldr	r1, [r1]
        2d0698:	eb63cef0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d069c:	e3300002 	teq	r0, #2	; 0x2
        2d06a0:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        2d06a4:	13800b01 	orrne	r0, r0, #1024	; 0x400
        2d06a8:	1584000c 	strne	r0, [r4, #12]	; fField12
        2d06ac:	e24dd008 	sub	sp, sp, #8	; 0x8
        2d06b0:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2d06b4:	eb63c6a4 	bl	1bc214c <$AllocateRefHandle(long)>
        2d06b8:	e58d0000 	str	r0, [sp]
        2d06bc:	e1a0000d 	mov	r0, sp
        2d06c0:	eb648cb1 	bl	1bf398c <$IsArray(RefVar const &)>
        2d06c4:	e3300000 	teq	r0, #0	; 0x0
        2d06c8:	13a07000 	movne	r7, #0	; 0x0
        2d06cc:	03a07001 	moveq	r7, #1	; 0x1
        2d06d0:	e59d0000 	ldr	r0, [sp]
        2d06d4:	eb63cab8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d06d8:	e3370000 	teq	r7, #0	; 0x0
        2d06dc:	0a00000b 	beq	2d0710 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x16c>
        2d06e0:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2d06e4:	eb63c698 	bl	1bc214c <$AllocateRefHandle(long)>
        2d06e8:	e1a07000 	mov	r7, r0
        2d06ec:	e1a00008 	mov	r0, r8
        2d06f0:	e3a01001 	mov	r1, #1	; 0x1
        2d06f4:	eb63c68f 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2d06f8:	e5840030 	str	r0, [r4, #48]	; fField48
        2d06fc:	e1a01009 	mov	r1, r9
        2d0700:	e5972000 	ldr	r2, [r7]
        2d0704:	eb63d713 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        2d0708:	e1a00007 	mov	r0, r7
        2d070c:	eb63caaa 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0710:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2d0714:	eb63c68c 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0718:	e58d0004 	str	r0, [sp, #4]	; fField4
        2d071c:	e28d0004 	add	r0, sp, #4	; 0x4
        2d0720:	eb5de780 	bl	1a4a528 <$GetWordsHints(RefVar const &)>
        2d0724:	e5840034 	str	r0, [r4, #52]	; fField52
        2d0728:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2d072c:	eb63caa2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0730:	e28dd008 	add	sp, sp, #8	; 0x8
        2d0734:	e5950000 	ldr	r0, [r5]
        2d0738:	e5900000 	ldr	r0, [r0]
        2d073c:	e59f11e8 	ldr	r1, [pc, #1e8]	; 2d092c <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x388>
        2d0740:	e5911000 	ldr	r1, [r1]
        2d0744:	e5911000 	ldr	r1, [r1]
        2d0748:	eb63cec4 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d074c:	e5840038 	str	r0, [r4, #56]	; fField56
        2d0750:	e3300002 	teq	r0, #2	; 0x2
        2d0754:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        2d0758:	13800004 	orrne	r0, r0, #4	; 0x4
        2d075c:	1584000c 	strne	r0, [r4, #12]	; fField12
        2d0760:	e59f21c8 	ldr	r2, [pc, #1c8]	; 2d0930 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x38c>
        2d0764:	e1a01005 	mov	r1, r5
        2d0768:	e1a00004 	mov	r0, r4
        2d076c:	ebfff5ff 	bl	2cdf70 <CloneFrameSlot__7TCursorCFRC6RefVarT1>
        2d0770:	e584001c 	str	r0, [r4, #28]	; fField28
        2d0774:	e3300002 	teq	r0, #2	; 0x2
        2d0778:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        2d077c:	13800001 	orrne	r0, r0, #1	; 0x1
        2d0780:	1584000c 	strne	r0, [r4, #12]	; fField12
        2d0784:	e5950000 	ldr	r0, [r5]
        2d0788:	e5900000 	ldr	r0, [r0]
        2d078c:	e59f11a0 	ldr	r1, [pc, #1a0]	; 2d0934 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x390>
        2d0790:	e5911000 	ldr	r1, [r1]
        2d0794:	e5911000 	ldr	r1, [r1]
        2d0798:	eb63ceb0 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d079c:	e2500002 	subs	r0, r0, #2	; 0x2
        2d07a0:	13a00001 	movne	r0, #1	; 0x1
        2d07a4:	e5c4002c 	strb	r0, [r4, #44]	; fField44
        2d07a8:	e59f2188 	ldr	r2, [pc, #188]	; 2d0938 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x394>	; fField188
        2d07ac:	e1a01005 	mov	r1, r5
        2d07b0:	e1a00004 	mov	r0, r4
        2d07b4:	ebfff5ed 	bl	2cdf70 <CloneFrameSlot__7TCursorCFRC6RefVarT1>
        2d07b8:	e5840050 	str	r0, [r4, #80]	; fField80
        2d07bc:	e3300002 	teq	r0, #2	; 0x2
        2d07c0:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        2d07c4:	13800008 	orrne	r0, r0, #8	; 0x8
        2d07c8:	1a000008 	bne	2d07f0 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x24c>
        2d07cc:	e59f2168 	ldr	r2, [pc, #168]	; 2d093c <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x398>
        2d07d0:	e1a01005 	mov	r1, r5
        2d07d4:	e1a00004 	mov	r0, r4
        2d07d8:	ebfff5e4 	bl	2cdf70 <CloneFrameSlot__7TCursorCFRC6RefVarT1>
        2d07dc:	e5840050 	str	r0, [r4, #80]	; fField80
        2d07e0:	e3300002 	teq	r0, #2	; 0x2
        2d07e4:	0a000002 	beq	2d07f4 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x250>
        2d07e8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2d07ec:	e3800010 	orr	r0, r0, #16	; 0x10
        2d07f0:	e584000c 	str	r0, [r4, #12]	; fField12
        2d07f4:	e59f2144 	ldr	r2, [pc, #144]	; 2d0940 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x39c>
        2d07f8:	e1a01005 	mov	r1, r5
        2d07fc:	e1a00004 	mov	r0, r4
        2d0800:	ebfff5da 	bl	2cdf70 <CloneFrameSlot__7TCursorCFRC6RefVarT1>
        2d0804:	e5840054 	str	r0, [r4, #84]	; fField84
        2d0808:	e3300002 	teq	r0, #2	; 0x2
        2d080c:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        2d0810:	13800020 	orrne	r0, r0, #32	; 0x20
        2d0814:	1a000008 	bne	2d083c <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x298>
        2d0818:	e59f2124 	ldr	r2, [pc, #124]	; 2d0944 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x3a0>
        2d081c:	e1a01005 	mov	r1, r5
        2d0820:	e1a00004 	mov	r0, r4
        2d0824:	ebfff5d1 	bl	2cdf70 <CloneFrameSlot__7TCursorCFRC6RefVarT1>
        2d0828:	e5840054 	str	r0, [r4, #84]	; fField84
        2d082c:	e3300002 	teq	r0, #2	; 0x2
        2d0830:	0a000002 	beq	2d0840 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x29c>
        2d0834:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2d0838:	e3800040 	orr	r0, r0, #64	; 0x40
        2d083c:	e584000c 	str	r0, [r4, #12]	; fField12
        2d0840:	e59f2100 	ldr	r2, [pc, #100]	; 2d0948 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x3a4>	; fField100
        2d0844:	e1a01005 	mov	r1, r5
        2d0848:	e1a00004 	mov	r0, r4
        2d084c:	ebfff5c7 	bl	2cdf70 <CloneFrameSlot__7TCursorCFRC6RefVarT1>
        2d0850:	e584004c 	str	r0, [r4, #76]	; fField76
        2d0854:	e5950000 	ldr	r0, [r5]
        2d0858:	e5900000 	ldr	r0, [r0]
        2d085c:	e59f10e8 	ldr	r1, [pc, #e8]	; 2d094c <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x3a8>
        2d0860:	e5911000 	ldr	r1, [r1]
        2d0864:	e5911000 	ldr	r1, [r1]
        2d0868:	eb63ce7c 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d086c:	e584003c 	str	r0, [r4, #60]	; fField60
        2d0870:	e3300002 	teq	r0, #2	; 0x2
        2d0874:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        2d0878:	13800080 	orrne	r0, r0, #128	; 0x80
        2d087c:	1584000c 	strne	r0, [r4, #12]	; fField12
        2d0880:	e5950000 	ldr	r0, [r5]
        2d0884:	e5900000 	ldr	r0, [r0]
        2d0888:	e59f10c0 	ldr	r1, [pc, #c0]	; 2d0950 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x3ac>
        2d088c:	e5911000 	ldr	r1, [r1]
        2d0890:	e5911000 	ldr	r1, [r1]
        2d0894:	eb63ce71 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d0898:	e5840040 	str	r0, [r4, #64]	; fField64
        2d089c:	e3300002 	teq	r0, #2	; 0x2
        2d08a0:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        2d08a4:	13800c01 	orrne	r0, r0, #256	; 0x100
        2d08a8:	1584000c 	strne	r0, [r4, #12]	; fField12
        2d08ac:	e5950000 	ldr	r0, [r5]
        2d08b0:	e5900000 	ldr	r0, [r0]
        2d08b4:	e59f1098 	ldr	r1, [pc, #98]	; 2d0954 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x3b0>
        2d08b8:	e5911000 	ldr	r1, [r1]
        2d08bc:	e5911000 	ldr	r1, [r1]
        2d08c0:	eb63ce66 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        2d08c4:	e5840044 	str	r0, [r4, #68]	; fField68
        2d08c8:	e3300002 	teq	r0, #2	; 0x2
        2d08cc:	1594000c 	ldrne	r0, [r4, #12]	; fField12
        2d08d0:	13800c02 	orrne	r0, r0, #512	; 0x200
        2d08d4:	1584000c 	strne	r0, [r4, #12]	; fField12
        2d08d8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2d08dc:	e3100d0e 	tst	r0, #896	; 0x380
        2d08e0:	0a000003 	beq	2d08f4 <TCursor::Init(RefVar const &, RefVar const &, RefVar const &)+0x350>
        2d08e4:	e1a00008 	mov	r0, r8
        2d08e8:	e3a01001 	mov	r1, #1	; 0x1
        2d08ec:	eb63c611 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
        2d08f0:	e5840048 	str	r0, [r4, #72]	; fField72
        2d08f4:	e28dd004 	add	sp, sp, #4	; 0x4
        2d08f8:	e1a00004 	mov	r0, r4
        2d08fc:	eb5dd692 	bl	1a4634c <TCursor::$BuildSoupsInfo(void)>
        2d0900:	e1a00004 	mov	r0, r4
        2d0904:	eb5dd691 	bl	1a46350 <TCursor::$CreateIndexes(void)>
        2d0908:	e1a01006 	mov	r1, r6
        2d090c:	e1a00004 	mov	r0, r4
        2d0910:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        2d0914:	ea5ddab1 	b	1a473e0 <TCursor::$RegisterInSoup( const(RefVar const &))>
        2d0918:	006853d0 	ldreqd	r5, [r8], -#48	; fField48
        2d091c:	006831e8 	rsbeq	r3, r8, r8, ror #3
        2d0920:	00685208 	rsbeq	r5, r8, r8, lsl #4
        2d0924:	00681f10 	rsbeq	r1, r8, r0, lsl pc
        2d0928:	00682ba0 	rsbeq	r2, r8, r0, lsr #23
        2d092c:	00684ac0 	rsbeq	r4, r8, r0, asr #21
        2d0930:	00684a50 	rsbeq	r4, r8, r0, asr sl
        2d0934:	006844f0 	streqd	r4, [r8], -#64	; fField64
        2d0938:	00682080 	rsbeq	r2, r8, r0, lsl #1
        2d093c:	00682078 	rsbeq	r2, r8, r8, ror r0
        2d0940:	00682b80 	rsbeq	r2, r8, r0, lsl #23
        2d0944:	00682b78 	rsbeq	r2, r8, r8, ror fp
        2d0948:	00684818 	rsbeq	r4, r8, r8, lsl r8
        2d094c:	006831f0 	streqd	r3, [r8], -#16	; fField16
        2d0950:	00684e90 	streqb	r4, [r8], -#224
        2d0954:	00682b90 	streqb	r2, [r8], -#176
    */
}

/**
 * Symbol: TCursor::Init(RefVar const &, TCursor const *)
 * Address: 002d0ba8
 */
TCursor::Init(RefVar const &, TCursor const *) {
    /*
        2d0ba8:	e1a0c00d 	mov	ip, sp
        2d0bac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2d0bb0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d0bb4:	e1a04000 	mov	r4, r0
        2d0bb8:	e1a06001 	mov	r6, r1
        2d0bbc:	e1a05002 	mov	r5, r2
        2d0bc0:	e3a00000 	mov	r0, #0	; 0x0
        2d0bc4:	e52d006c 	str	r0, [sp, -#108]!	; fField108
        2d0bc8:	e28d0008 	add	r0, sp, #8	; 0x8
        2d0bcc:	eb638768 	bl	1bb2974 <$setjmp>
        2d0bd0:	e3300000 	teq	r0, #0	; 0x0
        2d0bd4:	1a000045 	bne	2d0cf0 <TCursor::Init(RefVar const &, TCursor const *)+0x148>
        2d0bd8:	e1a0000d 	mov	r0, sp
        2d0bdc:	eb643d26 	bl	1be007c <$AddExceptionHandler>
        2d0be0:	e2840004 	add	r0, r4, #4	; 0x4
        2d0be4:	e285e004 	add	lr, r5, #4	; 0x4
        2d0be8:	e3a0c008 	mov	ip, #8	; 0x8
        2d0bec:	e8be000e 	ldmia	lr!, {r1, r2, r3}
        2d0bf0:	e8a0000e 	stmia	r0!, {r1, r2, r3}
        2d0bf4:	e25cc001 	subs	ip, ip, #1	; 0x1
        2d0bf8:	1afffffb 	bne	2d0bec <TCursor::Init(RefVar const &, TCursor const *)+0x44>
        2d0bfc:	e89e000c 	ldmia	lr, {r2, r3}
        2d0c00:	e880000c 	stmia	r0, {r2, r3}
        2d0c04:	e285106c 	add	r1, r5, #108	; 0x6c
        2d0c08:	e284006c 	add	r0, r4, #108	; 0x6c
        2d0c0c:	eb0055de 	bl	2e638c <SKey::operator=(SKey const &)>
        2d0c10:	e28400bc 	add	r0, r4, #188	; 0xbc
        2d0c14:	e28520bc 	add	r2, r5, #188	; 0xbc
        2d0c18:	e5d21001 	ldrb	r1, [r2, #1]
        2d0c1c:	e5c01001 	strb	r1, [r0, #1]
        2d0c20:	e5d21000 	ldrb	r1, [r2]
        2d0c24:	e5c01000 	strb	r1, [r0]
        2d0c28:	e5960000 	ldr	r0, [r6]
        2d0c2c:	e5900000 	ldr	r0, [r0]
        2d0c30:	e5840008 	str	r0, [r4, #8]	; fField8
        2d0c34:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d0c38:	e5940034 	ldr	r0, [r4, #52]	; fField52
        2d0c3c:	e3300000 	teq	r0, #0	; 0x0
        2d0c40:	0a000007 	beq	2d0c64 <TCursor::Init(RefVar const &, TCursor const *)+0xbc>
        2d0c44:	e5940030 	ldr	r0, [r4, #48]	; fField48
        2d0c48:	eb63c53f 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0c4c:	e58d0000 	str	r0, [sp]
        2d0c50:	e1a0000d 	mov	r0, sp
        2d0c54:	eb5de633 	bl	1a4a528 <$GetWordsHints(RefVar const &)>
        2d0c58:	e5840034 	str	r0, [r4, #52]	; fField52
        2d0c5c:	e59d0000 	ldr	r0, [sp]
        2d0c60:	eb63c955 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0c64:	e5940058 	ldr	r0, [r4, #88]	; fField88
        2d0c68:	e3300000 	teq	r0, #0	; 0x0
        2d0c6c:	0a000001 	beq	2d0c78 <TCursor::Init(RefVar const &, TCursor const *)+0xd0>
        2d0c70:	ebffff7a 	bl	2d0a60 <PtrToPtr(char *)>
        2d0c74:	e5840058 	str	r0, [r4, #88]	; fField88
        2d0c78:	e594005c 	ldr	r0, [r4, #92]	; fField92
        2d0c7c:	e3300000 	teq	r0, #0	; 0x0
        2d0c80:	0a000001 	beq	2d0c8c <TCursor::Init(RefVar const &, TCursor const *)+0xe4>
        2d0c84:	ebffff75 	bl	2d0a60 <PtrToPtr(char *)>
        2d0c88:	e584005c 	str	r0, [r4, #92]	; fField92
        2d0c8c:	e1a00004 	mov	r0, r4
        2d0c90:	eb5dd5ad 	bl	1a4634c <TCursor::$BuildSoupsInfo(void)>
        2d0c94:	e1a00004 	mov	r0, r4
        2d0c98:	eb5dd5ac 	bl	1a46350 <TCursor::$CreateIndexes(void)>
        2d0c9c:	e24dd004 	sub	sp, sp, #4	; 0x4
        2d0ca0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        2d0ca4:	e3300000 	teq	r0, #0	; 0x0
        2d0ca8:	0a000004 	beq	2d0cc0 <TCursor::Init(RefVar const &, TCursor const *)+0x118>
        2d0cac:	e5b51018 	ldr	r1, [r5, #24]!	; fField24
        2d0cb0:	e3310000 	teq	r1, #0	; 0x0
        2d0cb4:	03a01000 	moveq	r1, #0	; 0x0
        2d0cb8:	1591100c 	ldrne	r1, [r1, #12]	; fField12
        2d0cbc:	eb5dea3b 	bl	1a4b5b0 <TUnionSoupIndex::$SetCurrentSoup(long)>
        2d0cc0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2d0cc4:	eb63c520 	bl	1bc214c <$AllocateRefHandle(long)>
        2d0cc8:	e58d0000 	str	r0, [sp]
        2d0ccc:	e1a0100d 	mov	r1, sp
        2d0cd0:	e1a00004 	mov	r0, r4
        2d0cd4:	eb5dd9c1 	bl	1a473e0 <TCursor::$RegisterInSoup( const(RefVar const &))>
        2d0cd8:	e59d0000 	ldr	r0, [sp]
        2d0cdc:	eb63c936 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        2d0ce0:	e28dd008 	add	sp, sp, #8	; 0x8
        2d0ce4:	e1a0000d 	mov	r0, sp
        2d0ce8:	eb6440f2 	bl	1be10b8 <$ExitHandler>
        2d0cec:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2d0cf0:	e1a00004 	mov	r0, r4
        2d0cf4:	e5941000 	ldr	r1, [r4]
        2d0cf8:	e1a0e00f 	mov	lr, pc
        2d0cfc:	e281f02c 	add	pc, r1, #44	; 0x2c
        2d0d00:	e1a0000d 	mov	r0, sp
        2d0d04:	eb644512 	bl	1be2154 <$NextHandler>
        2d0d08:	eafffff8 	b	2d0cf0 <TCursor::Init(RefVar const &, TCursor const *)+0x148>
    */
}

/**
 * Symbol: TCursor::__dt(void)
 * Address: 002d161c
 */
TCursor::~TCursor(void) {
    /*
        2d161c:	e1a0c00d 	mov	ip, sp
        2d1620:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2d1624:	e24cb004 	sub	fp, ip, #4	; 0x4
        2d1628:	e1a04000 	mov	r4, r0
        2d162c:	e1a05001 	mov	r5, r1
        2d1630:	e59f1040 	ldr	r1, [pc, #40]	; 2d1678 <TCursor::__dt(void)+0x5c>	; fField40
        2d1634:	e5801000 	str	r1, [r0]
        2d1638:	e1a0e00f 	mov	lr, pc
        2d163c:	e281f02c 	add	pc, r1, #44	; 0x2c
        2d1640:	e5940034 	ldr	r0, [r4, #52]	; fField52
        2d1644:	e3300000 	teq	r0, #0	; 0x0
        2d1648:	1b63f024 	blne	1bcd6e0 <$__dl(void *)>
        2d164c:	e5940058 	ldr	r0, [r4, #88]	; fField88
        2d1650:	e3300000 	teq	r0, #0	; 0x0
        2d1654:	1b643e96 	blne	1be10b4 <$DisposPtr>
        2d1658:	e594005c 	ldr	r0, [r4, #92]	; fField92
        2d165c:	e3300000 	teq	r0, #0	; 0x0
        2d1660:	1b643e93 	blne	1be10b4 <$DisposPtr>
        2d1664:	e3150001 	tst	r5, #1	; 0x1
        2d1668:	11a00004 	movne	r0, r4
        2d166c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2d1670:	1a63f01a 	bne	1bcd6e0 <$__dl(void *)>
        2d1674:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2d1678:	0001fb5c 	andeq	pc, r1, ip, asr fp
    */
}

