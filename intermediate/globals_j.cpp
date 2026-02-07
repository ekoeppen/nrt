#include "Newton.h"

/**
 * Symbol: JournalInsertTabletSamople(void)
 * Address: 000f8e98
 */
JournalInsertTabletSamople(void) {
    /*
         f8e98:	e1a0c00d 	mov	ip, sp
         f8e9c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         f8ea0:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8ea4:	e24dd004 	sub	sp, sp, #4	; 0x4
         f8ea8:	e59f4080 	ldr	r4, [pc, #80]	; f8f30 <JournalInsertTabletSamople(void)+0x98>
         f8eac:	e5940008 	ldr	r0, [r4, #8]
         f8eb0:	e3300000 	teq	r0, #0	; 0x0
         f8eb4:	0a00001c 	beq	f8f2c <JournalInsertTabletSamople(void)+0x94>
         f8eb8:	e1a0100d 	mov	r1, sp
         f8ebc:	eb672089 	bl	1ac10e8 <JournalReplayHandler::$GetNextTabletSample(unsigned long *)>
         f8ec0:	e3300000 	teq	r0, #0	; 0x0
         f8ec4:	0a000018 	beq	f8f2c <JournalInsertTabletSamople(void)+0x94>
         f8ec8:	e5940008 	ldr	r0, [r4, #8]
         f8ecc:	e5901034 	ldr	r1, [r0, #52]
         f8ed0:	e3310001 	teq	r1, #1	; 0x1
         f8ed4:	1a00000b 	bne	f8f08 <JournalInsertTabletSamople(void)+0x70>
         f8ed8:	e590001e 	ldr	r0, [r0, #30]
         f8edc:	e1a00840 	mov	r0, r0, asr #16
         f8ee0:	e3300001 	teq	r0, #1	; 0x1
         f8ee4:	1a000002 	bne	f8ef4 <JournalInsertTabletSamople(void)+0x5c>
         f8ee8:	eb67cdd6 	bl	1aec648 <$StartBypassTablet(void)>
         f8eec:	e3300000 	teq	r0, #0	; 0x0
         f8ef0:	1a000002 	bne	f8f00 <JournalInsertTabletSamople(void)+0x68>
         f8ef4:	e3a01000 	mov	r1, #0	; 0x0
         f8ef8:	e3a0000d 	mov	r0, #13	; 0xd
         f8efc:	eb67c9b1 	bl	1aeb5c8 <$InsertTabletSample__FUlT1>
         f8f00:	e3300000 	teq	r0, #0	; 0x0
         f8f04:	1a000003 	bne	f8f18 <JournalInsertTabletSamople(void)+0x80>
         f8f08:	e59d0000 	ldr	r0, [sp]
         f8f0c:	e3300000 	teq	r0, #0	; 0x0
         f8f10:	13a01000 	movne	r1, #0	; 0x0
         f8f14:	1b67c9ab 	blne	1aeb5c8 <$InsertTabletSample__FUlT1>
         f8f18:	e1a0100d 	mov	r1, sp
         f8f1c:	e5940008 	ldr	r0, [r4, #8]
         f8f20:	eb672070 	bl	1ac10e8 <JournalReplayHandler::$GetNextTabletSample(unsigned long *)>
         f8f24:	e3300000 	teq	r0, #0	; 0x0
         f8f28:	1affffe6 	bne	f8ec8 <JournalInsertTabletSamople(void)+0x30>
         f8f2c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         f8f30:	0c100fb8 	ldceq	15, cr0, [r0], -#736
    */
}

/**
 * Symbol: JournalStopReplay(void)
 * Address: 000f8f34
 */
JournalStopReplay(void) {
    /*
         f8f34:	e1a0c00d 	mov	ip, sp
         f8f38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f8f3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8f40:	e59f402c 	ldr	r4, [pc, #2c]	; f8f74 <JournalStopReplay(void)+0x40>
         f8f44:	e5940008 	ldr	r0, [r4, #8]
         f8f48:	e3300000 	teq	r0, #0	; 0x0
         f8f4c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f8f50:	eb67cdbf 	bl	1aec654 <$StopBypassTablet(void)>
         f8f54:	e3a05000 	mov	r5, #0	; 0x0
         f8f58:	e5845000 	str	r5, [r4]
         f8f5c:	e5940008 	ldr	r0, [r4, #8]
         f8f60:	e3300000 	teq	r0, #0	; 0x0
         f8f64:	13a01001 	movne	r1, #1	; 0x1
         f8f68:	1bffffba 	blne	f8e58 <JournalReplayHandler::__dt(void)>
         f8f6c:	e5a45008 	str	r5, [r4, #8]!
         f8f70:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f8f74:	0c100fb8 	ldceq	15, cr0, [r0], -#736
    */
}

/**
 * Symbol: JournalRecordAStroke(TStroke *)
 * Address: 000f9da4
 */
JournalRecordAStroke(TStroke *) {
    /*
         f9da4:	e1a0c00d 	mov	ip, sp
         f9da8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         f9dac:	e24cb004 	sub	fp, ip, #4	; 0x4
         f9db0:	e1a04000 	mov	r4, r0
         f9db4:	e24dd018 	sub	sp, sp, #24	; 0x18
         f9db8:	e3a00002 	mov	r0, #2	; 0x2
         f9dbc:	eb6b20e2 	bl	1bc214c <$AllocateRefHandle(long)>
         f9dc0:	e1a06000 	mov	r6, r0
         f9dc4:	e59f5014 	ldr	r5, [pc, #14]	; f9de0 <JournalRecordAStroke(TStroke *)+0x3c>
         f9dc8:	e5950000 	ldr	r0, [r5]
         f9dcc:	e3300001 	teq	r0, #1	; 0x1
         f9dd0:	0a000003 	beq	f9de4 <JournalRecordAStroke(TStroke *)+0x40>
         f9dd4:	e1a00006 	mov	r0, r6
         f9dd8:	eb6b24f7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         f9ddc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         f9de0:	0c100fb8 	ldceq	15, cr0, [r0], -#736
         f9de4:	e5950004 	ldr	r0, [r5, #4]
         f9de8:	e5900010 	ldr	r0, [r0, #16]
         f9dec:	e1a00840 	mov	r0, r0, asr #16
         f9df0:	e3300001 	teq	r0, #1	; 0x1
         f9df4:	03a07004 	moveq	r7, #4	; 0x4
         f9df8:	0a000002 	beq	f9e08 <JournalRecordAStroke(TStroke *)+0x64>
         f9dfc:	e3300002 	teq	r0, #2	; 0x2
         f9e00:	1afffff3 	bne	f9dd4 <JournalRecordAStroke(TStroke *)+0x30>
         f9e04:	e3a0700c 	mov	r7, #12	; 0xc
         f9e08:	e594a00c 	ldr	sl, [r4, #12]
         f9e0c:	e24a0001 	sub	r0, sl, #1	; 0x1
         f9e10:	e0000097 	mul	r0, r7, r0
         f9e14:	e280001c 	add	r0, r0, #28	; 0x1c
         f9e18:	e58d0014 	str	r0, [sp, #20]
         f9e1c:	eb6ba0c7 	bl	1be2140 <$NewPtr>
         f9e20:	e58d0010 	str	r0, [sp, #16]
         f9e24:	e5951004 	ldr	r1, [r5, #4]
         f9e28:	e591000c 	ldr	r0, [r1, #12]
         f9e2c:	e2800001 	add	r0, r0, #1	; 0x1
         f9e30:	e5a1000c 	str	r0, [r1, #12]!
         f9e34:	e3300001 	teq	r0, #1	; 0x1
         f9e38:	e5951004 	ldr	r1, [r5, #4]
         f9e3c:	05940034 	ldreq	r0, [r4, #52]
         f9e40:	05a10008 	streq	r0, [r1, #8]!
         f9e44:	e28d1010 	add	r1, sp, #16	; 0x10
         f9e48:	e8910003 	ldmia	r1, {r0, r1}
         f9e4c:	e8800402 	stmia	r0, {r1, sl}
         f9e50:	e5942034 	ldr	r2, [r4, #52]
         f9e54:	e5951004 	ldr	r1, [r5, #4]
         f9e58:	e5911008 	ldr	r1, [r1, #8]
         f9e5c:	e0421001 	sub	r1, r2, r1
         f9e60:	e5801008 	str	r1, [r0, #8]
         f9e64:	e5941038 	ldr	r1, [r4, #56]
         f9e68:	e5952004 	ldr	r2, [r5, #4]
         f9e6c:	e5922008 	ldr	r2, [r2, #8]
         f9e70:	e0411002 	sub	r1, r1, r2
         f9e74:	e5a0100c 	str	r1, [r0, #12]!
         f9e78:	e59d0010 	ldr	r0, [sp, #16]
         f9e7c:	e2808010 	add	r8, r0, #16	; 0x10
         f9e80:	e3a09000 	mov	r9, #0	; 0x0
         f9e84:	e35a0000 	cmp	sl, #0	; 0x0
         f9e88:	da00001e 	ble	f9f08 <JournalRecordAStroke(TStroke *)+0x164>
         f9e8c:	e28d2004 	add	r2, sp, #4	; 0x4
         f9e90:	e1a01009 	mov	r1, r9
         f9e94:	e1a00004 	mov	r0, r4
         f9e98:	eb04a24a 	bl	2227c8 <TStroke::GetTabPt(long, TabPt *)>
         f9e9c:	e5950004 	ldr	r0, [r5, #4]
         f9ea0:	e5900010 	ldr	r0, [r0, #16]
         f9ea4:	e1a00840 	mov	r0, r0, asr #16
         f9ea8:	e3300001 	teq	r0, #1	; 0x1
         f9eac:	1a00000b 	bne	f9ee0 <JournalRecordAStroke(TStroke *)+0x13c>
         f9eb0:	e59d0004 	ldr	r0, [sp, #4]
         f9eb4:	e1a01280 	mov	r1, r0, lsl #5
         f9eb8:	e59d0008 	ldr	r0, [sp, #8]
         f9ebc:	e18104c0 	orr	r0, r1, r0, asr #9
         f9ec0:	e59d100e 	ldr	r1, [sp, #14]
         f9ec4:	e201100f 	and	r1, r1, #15	; 0xf
         f9ec8:	e1800001 	orr	r0, r0, r1
         f9ecc:	e1a02007 	mov	r2, r7
         f9ed0:	e1a01008 	mov	r1, r8
         f9ed4:	e58d0000 	str	r0, [sp]
         f9ed8:	e1a0000d 	mov	r0, sp
         f9edc:	ea000004 	b	f9ef4 <JournalRecordAStroke(TStroke *)+0x150>
         f9ee0:	e3300002 	teq	r0, #2	; 0x2
         f9ee4:	1a000003 	bne	f9ef8 <JournalRecordAStroke(TStroke *)+0x154>
         f9ee8:	e1a02007 	mov	r2, r7
         f9eec:	e1a01008 	mov	r1, r8
         f9ef0:	e28d0004 	add	r0, sp, #4	; 0x4
         f9ef4:	eb6b9416 	bl	1bdef54 <$BlockMove>
         f9ef8:	e2899001 	add	r9, r9, #1	; 0x1
         f9efc:	e0888007 	add	r8, r8, r7
         f9f00:	e159000a 	cmp	r9, sl
         f9f04:	baffffe0 	blt	f9e8c <JournalRecordAStroke(TStroke *)+0xe8>
         f9f08:	e24dd008 	sub	sp, sp, #8	; 0x8
         f9f0c:	e28f0f2d 	add	r0, pc, #180	; 0xb4
         f9f10:	eb6b2cda 	bl	1bc5280 <$Intern(char *)>
         f9f14:	eb6b208c 	bl	1bc214c <$AllocateRefHandle(long)>
         f9f18:	e58d0000 	str	r0, [sp]
         f9f1c:	e1a0000d 	mov	r0, sp
         f9f20:	e3a01002 	mov	r1, #2	; 0x2
         f9f24:	eb6b2083 	bl	1bc2138 <$AllocateArray(RefVar const &, long)>
         f9f28:	eb6b2087 	bl	1bc214c <$AllocateRefHandle(long)>
         f9f2c:	e58d0004 	str	r0, [sp, #4]
         f9f30:	e59d0000 	ldr	r0, [sp]
         f9f34:	eb6b24a0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         f9f38:	e3a04000 	mov	r4, #0	; 0x0
         f9f3c:	e59d101c 	ldr	r1, [sp, #28]
         f9f40:	e59f0088 	ldr	r0, [pc, #88]	; f9fd0 <JournalRecordAStroke(TStroke *)+0x22c>
         f9f44:	eb6b207c 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
         f9f48:	e5860000 	str	r0, [r6]
         f9f4c:	eb6b2082 	bl	1bc215c <$BinaryData(long)>
         f9f50:	e1a01000 	mov	r1, r0
         f9f54:	e28d2018 	add	r2, sp, #24	; 0x18
         f9f58:	e8920005 	ldmia	r2, {r0, r2}
         f9f5c:	eb6b93fc 	bl	1bdef54 <$BlockMove>
         f9f60:	e59d0018 	ldr	r0, [sp, #24]
         f9f64:	eb6b9c52 	bl	1be10b4 <$DisposPtr>
         f9f68:	e5962000 	ldr	r2, [r6]
         f9f6c:	e59d0004 	ldr	r0, [sp, #4]
         f9f70:	e5900000 	ldr	r0, [r0]
         f9f74:	e1a01004 	mov	r1, r4
         f9f78:	eb6b30f6 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         f9f7c:	e59d001c 	ldr	r0, [sp, #28]
         f9f80:	e1a00100 	mov	r0, r0, lsl #2
         f9f84:	eb6b2070 	bl	1bc214c <$AllocateRefHandle(long)>
         f9f88:	e1a04000 	mov	r4, r0
         f9f8c:	e5902000 	ldr	r2, [r0]
         f9f90:	e59d0004 	ldr	r0, [sp, #4]
         f9f94:	e5900000 	ldr	r0, [r0]
         f9f98:	e3a01001 	mov	r1, #1	; 0x1
         f9f9c:	eb6b30ed 	bl	1bc6358 <$SetArraySlotRef__FlN21>
         f9fa0:	e1a00004 	mov	r0, r4
         f9fa4:	eb6b2484 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         f9fa8:	e5b50004 	ldr	r0, [r5, #4]!
         f9fac:	e28d2004 	add	r2, sp, #4	; 0x4
         f9fb0:	e8900003 	ldmia	r0, {r0, r1}
         f9fb4:	eb6b2486 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
         f9fb8:	e59d0004 	ldr	r0, [sp, #4]
         f9fbc:	eb6b247e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         f9fc0:	e28dd008 	add	sp, sp, #8	; 0x8
         f9fc4:	eaffff82 	b	f9dd4 <JournalRecordAStroke(TStroke *)+0x30>
         f9fc8:	61727261 	cmnvs	r2, r1, ror #4
         f9fcc:	79000000 	stmvcdb	r0, {}
         f9fd0:	00682e50 	rsbeq	r2, r8, r0, asr lr
    */
}

/**
 * Symbol: Justify(TRect *, TRect const &, unsigned long)
 * Address: 001895c0
 */
Justify(TRect *, TRect const &, unsigned long) {
    /*
        1895c0:	e1a0c00d 	mov	ip, sp
        1895c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1895c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1895cc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1895d0:	e5914000 	ldr	r4, [r1]
        1895d4:	e1a04844 	mov	r4, r4, asr #16
        1895d8:	e591e002 	ldr	lr, [r1, #2]
        1895dc:	e1a0e84e 	mov	lr, lr, asr #16
        1895e0:	e8911020 	ldmia	r1, {r5, ip}
        1895e4:	e88d1020 	stmia	sp, {r5, ip}
        1895e8:	e59d1004 	ldr	r1, [sp, #4]
        1895ec:	e59d3000 	ldr	r3, [sp]
        1895f0:	e0411003 	sub	r1, r1, r3
        1895f4:	e1b01801 	movs	r1, r1, lsl #16
        1895f8:	1a000018 	bne	189660 <Justify(TRect *, TRect const &, unsigned long)+0xa0>
        1895fc:	e59d1006 	ldr	r1, [sp, #6]
        189600:	e59d3002 	ldr	r3, [sp, #2]
        189604:	e0411003 	sub	r1, r1, r3
        189608:	e1b01801 	movs	r1, r1, lsl #16
        18960c:	1a000013 	bne	189660 <Justify(TRect *, TRect const &, unsigned long)+0xa0>
        189610:	e5901006 	ldr	r1, [r0, #6]
        189614:	e1a01821 	mov	r1, r1, lsr #16
        189618:	e5903002 	ldr	r3, [r0, #2]
        18961c:	e1a03823 	mov	r3, r3, lsr #16
        189620:	e0411003 	sub	r1, r1, r3
        189624:	e59d3000 	ldr	r3, [sp]
        189628:	e0811003 	add	r1, r1, r3
        18962c:	e5cd1007 	strb	r1, [sp, #7]
        189630:	e1a01441 	mov	r1, r1, asr #8
        189634:	e5cd1006 	strb	r1, [sp, #6]
        189638:	e5901004 	ldr	r1, [r0, #4]
        18963c:	e1a01821 	mov	r1, r1, lsr #16
        189640:	e5903000 	ldr	r3, [r0]
        189644:	e1a03823 	mov	r3, r3, lsr #16
        189648:	e0411003 	sub	r1, r1, r3
        18964c:	e59d3002 	ldr	r3, [sp, #2]
        189650:	e0811003 	add	r1, r1, r3
        189654:	e5cd1005 	strb	r1, [sp, #5]
        189658:	e1a01441 	mov	r1, r1, asr #8
        18965c:	e5cd1004 	strb	r1, [sp, #4]
        189660:	e212300c 	ands	r3, r2, #12	; 0xc
        189664:	e3a01000 	mov	r1, #0	; 0x0
        189668:	0a00000e 	beq	1896a8 <Justify(TRect *, TRect const &, unsigned long)+0xe8>
        18966c:	e3330004 	teq	r3, #4	; 0x4
        189670:	0a000023 	beq	189704 <Justify(TRect *, TRect const &, unsigned long)+0x144>
        189674:	e3330008 	teq	r3, #8	; 0x8
        189678:	0a000033 	beq	18974c <Justify(TRect *, TRect const &, unsigned long)+0x18c>
        18967c:	e333000c 	teq	r3, #12	; 0xc
        189680:	1a000008 	bne	1896a8 <Justify(TRect *, TRect const &, unsigned long)+0xe8>
        189684:	e59dc006 	ldr	ip, [sp, #6]
        189688:	e59d3002 	ldr	r3, [sp, #2]
        18968c:	e04c3003 	sub	r3, ip, r3
        189690:	e590c000 	ldr	ip, [r0]
        189694:	e1a0c82c 	mov	ip, ip, lsr #16
        189698:	e083300c 	add	r3, r3, ip
        18969c:	e5c03005 	strb	r3, [r0, #5]
        1896a0:	e1a03443 	mov	r3, r3, asr #8
        1896a4:	e5c03004 	strb	r3, [r0, #4]
        1896a8:	e2122003 	ands	r2, r2, #3	; 0x3
        1896ac:	0a00000e 	beq	1896ec <Justify(TRect *, TRect const &, unsigned long)+0x12c>
        1896b0:	e3320001 	teq	r2, #1	; 0x1
        1896b4:	0a000043 	beq	1897c8 <Justify(TRect *, TRect const &, unsigned long)+0x208>
        1896b8:	e3320002 	teq	r2, #2	; 0x2
        1896bc:	0a00002f 	beq	189780 <Justify(TRect *, TRect const &, unsigned long)+0x1c0>
        1896c0:	e3320003 	teq	r2, #3	; 0x3
        1896c4:	1a000008 	bne	1896ec <Justify(TRect *, TRect const &, unsigned long)+0x12c>
        1896c8:	e59d1004 	ldr	r1, [sp, #4]
        1896cc:	e59d2000 	ldr	r2, [sp]
        1896d0:	e0411002 	sub	r1, r1, r2
        1896d4:	e5902002 	ldr	r2, [r0, #2]
        1896d8:	e1a02822 	mov	r2, r2, lsr #16
        1896dc:	e0811002 	add	r1, r1, r2
        1896e0:	e5c01007 	strb	r1, [r0, #7]
        1896e4:	e1a01441 	mov	r1, r1, asr #8
        1896e8:	e5c01006 	strb	r1, [r0, #6]
        1896ec:	e5901002 	ldr	r1, [r0, #2]
        1896f0:	e04e1841 	sub	r1, lr, r1, asr #16
        1896f4:	e5902000 	ldr	r2, [r0]
        1896f8:	e0442842 	sub	r2, r4, r2, asr #16
        1896fc:	eb672079 	bl	1b518e8 <$OffsetRect__FP4RectlT2>
        189700:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        189704:	e59d3006 	ldr	r3, [sp, #6]
        189708:	e59dc002 	ldr	ip, [sp, #2]
        18970c:	e043300c 	sub	r3, r3, ip
        189710:	e1a03803 	mov	r3, r3, lsl #16
        189714:	e1a03843 	mov	r3, r3, asr #16
        189718:	e5905004 	ldr	r5, [r0, #4]
        18971c:	e1a05825 	mov	r5, r5, lsr #16
        189720:	e590c000 	ldr	ip, [r0]
        189724:	e1a0c82c 	mov	ip, ip, lsr #16
        189728:	e045c00c 	sub	ip, r5, ip
        18972c:	e1a0c80c 	mov	ip, ip, lsl #16
        189730:	e043384c 	sub	r3, r3, ip, asr #16
        189734:	e0833fa3 	add	r3, r3, r3, lsr #31
        189738:	e1a030c3 	mov	r3, r3, asr #1
        18973c:	e3530000 	cmp	r3, #0	; 0x0
        189740:	d1a03001 	movle	r3, r1
        189744:	e0834004 	add	r4, r3, r4
        189748:	eaffffd6 	b	1896a8 <Justify(TRect *, TRect const &, unsigned long)+0xe8>
        18974c:	e59d3006 	ldr	r3, [sp, #6]
        189750:	e59dc002 	ldr	ip, [sp, #2]
        189754:	e043300c 	sub	r3, r3, ip
        189758:	e1a03803 	mov	r3, r3, lsl #16
        18975c:	e1a03843 	mov	r3, r3, asr #16
        189760:	e5905004 	ldr	r5, [r0, #4]
        189764:	e1a05825 	mov	r5, r5, lsr #16
        189768:	e590c000 	ldr	ip, [r0]
        18976c:	e1a0c82c 	mov	ip, ip, lsr #16
        189770:	e045c00c 	sub	ip, r5, ip
        189774:	e1a0c80c 	mov	ip, ip, lsl #16
        189778:	e043384c 	sub	r3, r3, ip, asr #16
        18977c:	eafffff0 	b	189744 <Justify(TRect *, TRect const &, unsigned long)+0x184>
        189780:	e59d3004 	ldr	r3, [sp, #4]
        189784:	e59d2000 	ldr	r2, [sp]
        189788:	e0432002 	sub	r2, r3, r2
        18978c:	e1a02802 	mov	r2, r2, lsl #16
        189790:	e1a02842 	mov	r2, r2, asr #16
        189794:	e590c006 	ldr	ip, [r0, #6]
        189798:	e1a0c82c 	mov	ip, ip, lsr #16
        18979c:	e5903002 	ldr	r3, [r0, #2]
        1897a0:	e1a03823 	mov	r3, r3, lsr #16
        1897a4:	e04c3003 	sub	r3, ip, r3
        1897a8:	e1a03803 	mov	r3, r3, lsl #16
        1897ac:	e0422843 	sub	r2, r2, r3, asr #16
        1897b0:	e0822fa2 	add	r2, r2, r2, lsr #31
        1897b4:	e1a020c2 	mov	r2, r2, asr #1
        1897b8:	e3520000 	cmp	r2, #0	; 0x0
        1897bc:	c1a01002 	movgt	r1, r2
        1897c0:	e081e00e 	add	lr, r1, lr
        1897c4:	eaffffc8 	b	1896ec <Justify(TRect *, TRect const &, unsigned long)+0x12c>
        1897c8:	e59d2004 	ldr	r2, [sp, #4]
        1897cc:	e59d1000 	ldr	r1, [sp]
        1897d0:	e0421001 	sub	r1, r2, r1
        1897d4:	e1a01801 	mov	r1, r1, lsl #16
        1897d8:	e1a01841 	mov	r1, r1, asr #16
        1897dc:	e5902006 	ldr	r2, [r0, #6]
        1897e0:	e1a02822 	mov	r2, r2, lsr #16
        1897e4:	e5903002 	ldr	r3, [r0, #2]
        1897e8:	e1a03823 	mov	r3, r3, lsr #16
        1897ec:	e0422003 	sub	r2, r2, r3
        1897f0:	e1a02802 	mov	r2, r2, lsl #16
        1897f4:	e0411842 	sub	r1, r1, r2, asr #16
        1897f8:	eafffff0 	b	1897c0 <Justify(TRect *, TRect const &, unsigned long)+0x200>
    */
}

/**
 * Symbol: JumpBlock
 * Address: 00313368
 */
void globals::JumpBlock() {
    /*
        313368:	e1a0c00d 	mov	ip, sp
        31336c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        313370:	e24cb004 	sub	fp, ip, #4	; 0x4
        313374:	e1a04000 	mov	r4, r0
        313378:	e1a05001 	mov	r5, r1
        31337c:	e1a06000 	mov	r6, r0
        313380:	eb633756 	bl	1be10e0 <$GetCurrentHeap>
        313384:	e1a08000 	mov	r8, r0
        313388:	e5d60000 	ldrb	r0, [r6]
        31338c:	e3100080 	tst	r0, #128	; 0x80
        313390:	05961000 	ldreq	r1, [r6]
        313394:	00866001 	addeq	r6, r6, r1
        313398:	e5969004 	ldr	r9, [r6, #4]
        31339c:	e2490010 	sub	r0, r9, #16	; 0x10
        3133a0:	e5d61001 	ldrb	r1, [r6, #1]
        3133a4:	e0400001 	sub	r0, r0, r1
        3133a8:	e1a0a000 	mov	sl, r0
        3133ac:	eb61962b 	bl	1b78c60 <$NewBlock>
        3133b0:	e1a07000 	mov	r7, r0
        3133b4:	e5d60000 	ldrb	r0, [r6]
        3133b8:	e3c00004 	bic	r0, r0, #4	; 0x4
        3133bc:	e5c70000 	strb	r0, [r7]
        3133c0:	e5d60002 	ldrb	r0, [r6, #2]
        3133c4:	e5c70002 	strb	r0, [r7, #2]
        3133c8:	e5d60003 	ldrb	r0, [r6, #3]
        3133cc:	e5c70003 	strb	r0, [r7, #3]
        3133d0:	e5d60000 	ldrb	r0, [r6]
        3133d4:	e3100001 	tst	r0, #1	; 0x1
        3133d8:	0a000006 	beq	3133f8 <JumpBlock+0x90>
        3133dc:	e598204c 	ldr	r2, [r8, #76]
        3133e0:	e3320000 	teq	r2, #0	; 0x0
        3133e4:	12871010 	addne	r1, r7, #16	; 0x10
        3133e8:	12860010 	addne	r0, r6, #16	; 0x10
        3133ec:	11a0e00f 	movne	lr, pc
        3133f0:	11a0f002 	movne	pc, r2
        3133f4:	ea000002 	b	313404 <JumpBlock+0x9c>
        3133f8:	e2870010 	add	r0, r7, #16	; 0x10
        3133fc:	e5961008 	ldr	r1, [r6, #8]
        313400:	e5810000 	str	r0, [r1]
        313404:	e28a2008 	add	r2, sl, #8	; 0x8
        313408:	e2871008 	add	r1, r7, #8	; 0x8
        31340c:	e2860008 	add	r0, r6, #8	; 0x8
        313410:	eb6332eb 	bl	1bdffc4 <$MoveBytes>
        313414:	e0860009 	add	r0, r6, r9
        313418:	e5981004 	ldr	r1, [r8, #4]
        31341c:	e1510000 	cmp	r1, r0
        313420:	9a000002 	bls	313430 <JumpBlock+0xc8>
        313424:	e5900000 	ldr	r0, [r0]
        313428:	e3500000 	cmp	r0, #0	; 0x0
        31342c:	c0899000 	addgt	r9, r9, r0
        313430:	e2860010 	add	r0, r6, #16	; 0x10
        313434:	eb619605 	bl	1b78c50 <$KillBlock>
        313438:	e5970004 	ldr	r0, [r7, #4]
        31343c:	e0800007 	add	r0, r0, r7
        313440:	e0866009 	add	r6, r6, r9
        313444:	e1550006 	cmp	r5, r6
        313448:	e5880048 	str	r0, [r8, #72]
        31344c:	8affffd1 	bhi	313398 <JumpBlock+0x30>
        313450:	e5980048 	ldr	r0, [r8, #72]
        313454:	e5900000 	ldr	r0, [r0]
        313458:	e5941000 	ldr	r1, [r4]
        31345c:	e1500001 	cmp	r0, r1
        313460:	b5a84048 	strlt	r4, [r8, #72]!
        313464:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: JoinRect__FP4RectN21
 * Address: 00340e60
 */
void globals::JoinRect() {
    /*
        340e60:	e92d4000 	stmdb	sp!, {lr}
        340e64:	e590c004 	ldr	ip, [r0, #4]
        340e68:	e1a0c84c 	mov	ip, ip, asr #16
        340e6c:	e5903000 	ldr	r3, [r0]
        340e70:	e15c0843 	cmp	ip, r3, asr #16
        340e74:	da000004 	ble	340e8c <JoinRect__FP4RectN21+0x2c>
        340e78:	e590c002 	ldr	ip, [r0, #2]
        340e7c:	e1a0c84c 	mov	ip, ip, asr #16
        340e80:	e5903006 	ldr	r3, [r0, #6]
        340e84:	e15c0843 	cmp	ip, r3, asr #16
        340e88:	ba000002 	blt	340e98 <JoinRect__FP4RectN21+0x38>
        340e8c:	e8915000 	ldmia	r1, {ip, lr}
        340e90:	e8825000 	stmia	r2, {ip, lr}
        340e94:	e8bd8000 	ldmia	sp!, {pc}
        340e98:	e5913004 	ldr	r3, [r1, #4]
        340e9c:	e1a03843 	mov	r3, r3, asr #16
        340ea0:	e591e000 	ldr	lr, [r1]
        340ea4:	e153084e 	cmp	r3, lr, asr #16
        340ea8:	da000004 	ble	340ec0 <JoinRect__FP4RectN21+0x60>
        340eac:	e5913002 	ldr	r3, [r1, #2]
        340eb0:	e1a03843 	mov	r3, r3, asr #16
        340eb4:	e591e006 	ldr	lr, [r1, #6]
        340eb8:	e153084e 	cmp	r3, lr, asr #16
        340ebc:	ba000002 	blt	340ecc <JoinRect__FP4RectN21+0x6c>
        340ec0:	e8905000 	ldmia	r0, {ip, lr}
        340ec4:	e8825000 	stmia	r2, {ip, lr}
        340ec8:	e8bd8000 	ldmia	sp!, {pc}
        340ecc:	e15c0003 	cmp	ip, r3
        340ed0:	a5c23003 	strgeb	r3, [r2, #3]
        340ed4:	a1a03443 	movge	r3, r3, asr #8
        340ed8:	b5c2c003 	strltb	ip, [r2, #3]
        340edc:	b1a0344c 	movlt	r3, ip, asr #8
        340ee0:	e5c23002 	strb	r3, [r2, #2]
        340ee4:	e590c000 	ldr	ip, [r0]
        340ee8:	e1a0c84c 	mov	ip, ip, asr #16
        340eec:	e5913000 	ldr	r3, [r1]
        340ef0:	e1a03843 	mov	r3, r3, asr #16
        340ef4:	e15c0003 	cmp	ip, r3
        340ef8:	a5c23001 	strgeb	r3, [r2, #1]
        340efc:	a1a03443 	movge	r3, r3, asr #8
        340f00:	b5c2c001 	strltb	ip, [r2, #1]
        340f04:	b1a0344c 	movlt	r3, ip, asr #8
        340f08:	e5c23000 	strb	r3, [r2]
        340f0c:	e5903006 	ldr	r3, [r0, #6]
        340f10:	e1a03843 	mov	r3, r3, asr #16
        340f14:	e591c006 	ldr	ip, [r1, #6]
        340f18:	e1a0c84c 	mov	ip, ip, asr #16
        340f1c:	e153000c 	cmp	r3, ip
        340f20:	d5c2c007 	strleb	ip, [r2, #7]
        340f24:	d1a0344c 	movle	r3, ip, asr #8
        340f28:	c5c23007 	strgtb	r3, [r2, #7]
        340f2c:	c1a03443 	movgt	r3, r3, asr #8
        340f30:	e5c23006 	strb	r3, [r2, #6]
        340f34:	e5900004 	ldr	r0, [r0, #4]
        340f38:	e1a00840 	mov	r0, r0, asr #16
        340f3c:	e5911004 	ldr	r1, [r1, #4]
        340f40:	e1a01841 	mov	r1, r1, asr #16
        340f44:	e1500001 	cmp	r0, r1
        340f48:	d5c21005 	strleb	r1, [r2, #5]
        340f4c:	d1a00441 	movle	r0, r1, asr #8
        340f50:	c5c20005 	strgtb	r0, [r2, #5]
        340f54:	c1a00440 	movgt	r0, r0, asr #8
        340f58:	e5c20004 	strb	r0, [r2, #4]
        340f5c:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: JustifyText(long)
 * Address: 0035b6d8
 */
JustifyText(long) {
    /*
        35b6d8:	e1a0c00d 	mov	ip, sp
        35b6dc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        35b6e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        35b6e4:	e1b04000 	movs	r4, r0
        35b6e8:	e24dd008 	sub	sp, sp, #8	; 0x8
        35b6ec:	0a0000ea 	beq	35ba9c <JustifyText(long)+0x3c4>
        35b6f0:	e5941000 	ldr	r1, [r4]
        35b6f4:	e3a00000 	mov	r0, #0	; 0x0
        35b6f8:	e5916018 	ldr	r6, [r1, #24]
        35b6fc:	e581002c 	str	r0, [r1, #44]
        35b700:	e5810030 	str	r0, [r1, #48]
        35b704:	e5810034 	str	r0, [r1, #52]
        35b708:	e591a024 	ldr	sl, [r1, #36]
        35b70c:	e33a0000 	teq	sl, #0	; 0x0
        35b710:	13360000 	teqne	r6, #0	; 0x0
        35b714:	0a0000e0 	beq	35ba9c <JustifyText(long)+0x3c4>
        35b718:	e24dd054 	sub	sp, sp, #84	; 0x54
        35b71c:	e3a05000 	mov	r5, #0	; 0x0
        35b720:	e3a08000 	mov	r8, #0	; 0x0
        35b724:	e5912028 	ldr	r2, [r1, #40]
        35b728:	e58d200c 	str	r2, [sp, #12]
        35b72c:	e5960008 	ldr	r0, [r6, #8]
        35b730:	e3300000 	teq	r0, #0	; 0x0
        35b734:	0a000078 	beq	35b91c <JustifyText(long)+0x244>
        35b738:	e5960004 	ldr	r0, [r6, #4]
        35b73c:	e3300000 	teq	r0, #0	; 0x0
        35b740:	05960000 	ldreq	r0, [r6]
        35b744:	03300000 	teqeq	r0, #0	; 0x0
        35b748:	0a000073 	beq	35b91c <JustifyText(long)+0x244>
        35b74c:	e24dd004 	sub	sp, sp, #4	; 0x4
        35b750:	e3a00000 	mov	r0, #0	; 0x0
        35b754:	e5912040 	ldr	r2, [r1, #64]
        35b758:	e3320000 	teq	r2, #0	; 0x0
        35b75c:	158d200c 	strne	r2, [sp, #12]
        35b760:	1591100c 	ldrne	r1, [r1, #12]
        35b764:	1a000005 	bne	35b780 <JustifyText(long)+0xa8>
        35b768:	e2811044 	add	r1, r1, #68	; 0x44
        35b76c:	e58d100c 	str	r1, [sp, #12]
        35b770:	e5cda005 	strb	sl, [sp, #5]
        35b774:	e1a0144a 	mov	r1, sl, asr #8
        35b778:	e5cd1004 	strb	r1, [sp, #4]
        35b77c:	e28d1004 	add	r1, sp, #4	; 0x4
        35b780:	e58d1008 	str	r1, [sp, #8]
        35b784:	e59d900c 	ldr	r9, [sp, #12]
        35b788:	e5917000 	ldr	r7, [r1]
        35b78c:	e1a07847 	mov	r7, r7, asr #16
        35b790:	e2811002 	add	r1, r1, #2	; 0x2
        35b794:	e58d105c 	str	r1, [sp, #92]
        35b798:	e58d1000 	str	r1, [sp]
        35b79c:	e59d2010 	ldr	r2, [sp, #16]
        35b7a0:	e4921004 	ldr	r1, [r2], #4
        35b7a4:	e0810000 	add	r0, r1, r0
        35b7a8:	e2577001 	subs	r7, r7, #1	; 0x1
        35b7ac:	e58d2010 	str	r2, [sp, #16]
        35b7b0:	1a00000c 	bne	35b7e8 <JustifyText(long)+0x110>
        35b7b4:	e5991000 	ldr	r1, [r9]
        35b7b8:	e3310801 	teq	r1, #65536	; 0x10000
        35b7bc:	1b621640 	blne	1be10c4 <$FixedMultiply>
        35b7c0:	e0805005 	add	r5, r0, r5
        35b7c4:	e2899008 	add	r9, r9, #8	; 0x8
        35b7c8:	e3a00000 	mov	r0, #0	; 0x0
        35b7cc:	e35a0001 	cmp	sl, #1	; 0x1
        35b7d0:	da000004 	ble	35b7e8 <JustifyText(long)+0x110>
        35b7d4:	e59d1000 	ldr	r1, [sp]
        35b7d8:	e5917000 	ldr	r7, [r1]
        35b7dc:	e1a07847 	mov	r7, r7, asr #16
        35b7e0:	e2811002 	add	r1, r1, #2	; 0x2
        35b7e4:	e58d1000 	str	r1, [sp]
        35b7e8:	e24aa001 	sub	sl, sl, #1	; 0x1
        35b7ec:	e35a0000 	cmp	sl, #0	; 0x0
        35b7f0:	caffffe9 	bgt	35b79c <JustifyText(long)+0xc4>
        35b7f4:	e3370000 	teq	r7, #0	; 0x0
        35b7f8:	0a000003 	beq	35b80c <JustifyText(long)+0x134>
        35b7fc:	e5991000 	ldr	r1, [r9]
        35b800:	e3310801 	teq	r1, #65536	; 0x10000
        35b804:	1b62162e 	blne	1be10c4 <$FixedMultiply>
        35b808:	e0805005 	add	r5, r0, r5
        35b80c:	e28dd004 	add	sp, sp, #4	; 0x4
        35b810:	e5961000 	ldr	r1, [r6]
        35b814:	e3310000 	teq	r1, #0	; 0x0
        35b818:	0a000094 	beq	35ba70 <JustifyText(long)+0x398>
        35b81c:	e24dd010 	sub	sp, sp, #16	; 0x10
        35b820:	e3310801 	teq	r1, #65536	; 0x10000
        35b824:	e5960008 	ldr	r0, [r6, #8]
        35b828:	e0400005 	sub	r0, r0, r5
        35b82c:	0a000000 	beq	35b834 <JustifyText(long)+0x15c>
        35b830:	eb621623 	bl	1be10c4 <$FixedMultiply>
        35b834:	e58d0060 	str	r0, [sp, #96]
        35b838:	e59d0018 	ldr	r0, [sp, #24]
        35b83c:	e59d1014 	ldr	r1, [sp, #20]
        35b840:	e5917000 	ldr	r7, [r1]
        35b844:	e1a07847 	mov	r7, r7, asr #16
        35b848:	e59d1068 	ldr	r1, [sp, #104]
        35b84c:	e58d100c 	str	r1, [sp, #12]
        35b850:	e2801008 	add	r1, r0, #8	; 0x8
        35b854:	e58d1064 	str	r1, [sp, #100]
        35b858:	e58d1008 	str	r1, [sp, #8]
        35b85c:	e28d1020 	add	r1, sp, #32	; 0x20
        35b860:	e5b0a004 	ldr	sl, [r0, #4]!
        35b864:	e1a00004 	mov	r0, r4
        35b868:	e3a02001 	mov	r2, #1	; 0x1
        35b86c:	eb5fbf43 	bl	1b4b580 <$InitTextWalker(long, TextWalker *, unsigned char)>
        35b870:	e5940000 	ldr	r0, [r4]
        35b874:	e5900004 	ldr	r0, [r0, #4]
        35b878:	e2409001 	sub	r9, r0, #1	; 0x1
        35b87c:	e3590000 	cmp	r9, #0	; 0x0
        35b880:	da000014 	ble	35b8d8 <JustifyText(long)+0x200>
        35b884:	e2577001 	subs	r7, r7, #1	; 0x1
        35b888:	1a00000a 	bne	35b8b8 <JustifyText(long)+0x1e0>
        35b88c:	e3390000 	teq	r9, #0	; 0x0
        35b890:	0a000008 	beq	35b8b8 <JustifyText(long)+0x1e0>
        35b894:	e59d000c 	ldr	r0, [sp, #12]
        35b898:	e5907000 	ldr	r7, [r0]
        35b89c:	e1a07847 	mov	r7, r7, asr #16
        35b8a0:	e2800002 	add	r0, r0, #2	; 0x2
        35b8a4:	e58d000c 	str	r0, [sp, #12]
        35b8a8:	e59d0008 	ldr	r0, [sp, #8]
        35b8ac:	e2801008 	add	r1, r0, #8	; 0x8
        35b8b0:	e58d1008 	str	r1, [sp, #8]
        35b8b4:	e5b0a004 	ldr	sl, [r0, #4]!
        35b8b8:	e28d0020 	add	r0, sp, #32	; 0x20
        35b8bc:	e3a01000 	mov	r1, #0	; 0x0
        35b8c0:	eb5fbf4c 	bl	1b4b5f8 <$ScanNextChar(TextWalker *, long **)>
        35b8c4:	e130000a 	teq	r0, sl
        35b8c8:	02888001 	addeq	r8, r8, #1	; 0x1
        35b8cc:	e2499001 	sub	r9, r9, #1	; 0x1
        35b8d0:	e3590000 	cmp	r9, #0	; 0x0
        35b8d4:	caffffea 	bgt	35b884 <JustifyText(long)+0x1ac>
        35b8d8:	e5947000 	ldr	r7, [r4]
        35b8dc:	e59d0060 	ldr	r0, [sp, #96]
        35b8e0:	e3500000 	cmp	r0, #0	; 0x0
        35b8e4:	e59da018 	ldr	sl, [sp, #24]
        35b8e8:	e5970004 	ldr	r0, [r7, #4]
        35b8ec:	aa00000c 	bge	35b924 <JustifyText(long)+0x24c>
        35b8f0:	e2400001 	sub	r0, r0, #1	; 0x1
        35b8f4:	e1a01800 	mov	r1, r0, lsl #16
        35b8f8:	e59d0060 	ldr	r0, [sp, #96]
        35b8fc:	eb6215ef 	bl	1be10c0 <$FixedDivide>
        35b900:	e1a08000 	mov	r8, r0
        35b904:	e5870030 	str	r0, [r7, #48]
        35b908:	e5a70034 	str	r0, [r7, #52]!
        35b90c:	e59a1000 	ldr	r1, [sl]
        35b910:	eb6215ea 	bl	1be10c0 <$FixedDivide>
        35b914:	e1a09000 	mov	r9, r0
        35b918:	ea000011 	b	35b964 <JustifyText(long)+0x28c>
        35b91c:	e3a00001 	mov	r0, #1	; 0x1
        35b920:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        35b924:	e0800188 	add	r0, r0, r8, lsl #3
        35b928:	e2400001 	sub	r0, r0, #1	; 0x1
        35b92c:	e1a01800 	mov	r1, r0, lsl #16
        35b930:	e59d0060 	ldr	r0, [sp, #96]
        35b934:	eb6215e1 	bl	1be10c0 <$FixedDivide>
        35b938:	e1a08000 	mov	r8, r0
        35b93c:	e3a01809 	mov	r1, #589824	; 0x90000
        35b940:	e5870030 	str	r0, [r7, #48]
        35b944:	eb6215de 	bl	1be10c4 <$FixedMultiply>
        35b948:	e5a70034 	str	r0, [r7, #52]!
        35b94c:	e1a00008 	mov	r0, r8
        35b950:	e59a1000 	ldr	r1, [sl]
        35b954:	eb6215d9 	bl	1be10c0 <$FixedDivide>
        35b958:	e1a09000 	mov	r9, r0
        35b95c:	e3a01809 	mov	r1, #589824	; 0x90000
        35b960:	eb6215d7 	bl	1be10c4 <$FixedMultiply>
        35b964:	e58d005c 	str	r0, [sp, #92]
        35b968:	e28d0020 	add	r0, sp, #32	; 0x20
        35b96c:	e3a01001 	mov	r1, #1	; 0x1
        35b970:	eb5fbf1d 	bl	1b4b5ec <$ResetTextWalker(TextWalker *, unsigned char)>
        35b974:	e5940000 	ldr	r0, [r4]
        35b978:	e5907028 	ldr	r7, [r0, #40]
        35b97c:	e59d2014 	ldr	r2, [sp, #20]
        35b980:	e5921000 	ldr	r1, [r2]
        35b984:	e1a01841 	mov	r1, r1, asr #16
        35b988:	e59d2068 	ldr	r2, [sp, #104]
        35b98c:	e58d1004 	str	r1, [sp, #4]
        35b990:	e58d200c 	str	r2, [sp, #12]
        35b994:	e59a1004 	ldr	r1, [sl, #4]
        35b998:	e58d1000 	str	r1, [sp]
        35b99c:	e59da064 	ldr	sl, [sp, #100]
        35b9a0:	e5900004 	ldr	r0, [r0, #4]
        35b9a4:	e2400001 	sub	r0, r0, #1	; 0x1
        35b9a8:	e58d0058 	str	r0, [sp, #88]
        35b9ac:	e3500000 	cmp	r0, #0	; 0x0
        35b9b0:	da000029 	ble	35ba5c <JustifyText(long)+0x384>
        35b9b4:	e28d0020 	add	r0, sp, #32	; 0x20
        35b9b8:	e3a01000 	mov	r1, #0	; 0x0
        35b9bc:	eb5fbf0d 	bl	1b4b5f8 <$ScanNextChar(TextWalker *, long **)>
        35b9c0:	e59d1000 	ldr	r1, [sp]
        35b9c4:	e1300001 	teq	r0, r1
        35b9c8:	e5970000 	ldr	r0, [r7]
        35b9cc:	10800009 	addne	r0, r0, r9
        35b9d0:	059d105c 	ldreq	r1, [sp, #92]
        35b9d4:	00800001 	addeq	r0, r0, r1
        35b9d8:	e4870004 	str	r0, [r7], #4
        35b9dc:	e59d1004 	ldr	r1, [sp, #4]
        35b9e0:	e2511001 	subs	r1, r1, #1	; 0x1
        35b9e4:	e58d1004 	str	r1, [sp, #4]
        35b9e8:	1a000016 	bne	35ba48 <JustifyText(long)+0x370>
        35b9ec:	e59d0058 	ldr	r0, [sp, #88]
        35b9f0:	e3300000 	teq	r0, #0	; 0x0
        35b9f4:	0a000013 	beq	35ba48 <JustifyText(long)+0x370>
        35b9f8:	e59d200c 	ldr	r2, [sp, #12]
        35b9fc:	e5921000 	ldr	r1, [r2]
        35ba00:	e1a01841 	mov	r1, r1, asr #16
        35ba04:	e2822002 	add	r2, r2, #2	; 0x2
        35ba08:	e58d1004 	str	r1, [sp, #4]
        35ba0c:	e58d200c 	str	r2, [sp, #12]
        35ba10:	e59a1004 	ldr	r1, [sl, #4]
        35ba14:	e58d1000 	str	r1, [sp]
        35ba18:	e1a00008 	mov	r0, r8
        35ba1c:	e59a1000 	ldr	r1, [sl]
        35ba20:	eb6215a6 	bl	1be10c0 <$FixedDivide>
        35ba24:	e1a09000 	mov	r9, r0
        35ba28:	e59d0060 	ldr	r0, [sp, #96]
        35ba2c:	e3500000 	cmp	r0, #0	; 0x0
        35ba30:	e1a00009 	mov	r0, r9
        35ba34:	ba000001 	blt	35ba40 <JustifyText(long)+0x368>
        35ba38:	e3a01809 	mov	r1, #589824	; 0x90000
        35ba3c:	eb6215a0 	bl	1be10c4 <$FixedMultiply>
        35ba40:	e28aa008 	add	sl, sl, #8	; 0x8
        35ba44:	e58d005c 	str	r0, [sp, #92]
        35ba48:	e59d0058 	ldr	r0, [sp, #88]
        35ba4c:	e2400001 	sub	r0, r0, #1	; 0x1
        35ba50:	e58d0058 	str	r0, [sp, #88]
        35ba54:	e3500000 	cmp	r0, #0	; 0x0
        35ba58:	caffffd5 	bgt	35b9b4 <JustifyText(long)+0x2dc>
        35ba5c:	e59d0060 	ldr	r0, [sp, #96]
        35ba60:	e0855000 	add	r5, r5, r0
        35ba64:	e28d0020 	add	r0, sp, #32	; 0x20
        35ba68:	eb5fbedb 	bl	1b4b5dc <$ReleaseTextWalker(TextWalker *)>
        35ba6c:	e28dd010 	add	sp, sp, #16	; 0x10
        35ba70:	e5961004 	ldr	r1, [r6, #4]
        35ba74:	e3310000 	teq	r1, #0	; 0x0
        35ba78:	0a000006 	beq	35ba98 <JustifyText(long)+0x3c0>
        35ba7c:	e5944000 	ldr	r4, [r4]
        35ba80:	e3310801 	teq	r1, #65536	; 0x10000
        35ba84:	e5b60008 	ldr	r0, [r6, #8]!
        35ba88:	e0400005 	sub	r0, r0, r5
        35ba8c:	0a000000 	beq	35ba94 <JustifyText(long)+0x3bc>
        35ba90:	eb62158b 	bl	1be10c4 <$FixedMultiply>
        35ba94:	e5a4002c 	str	r0, [r4, #44]!
        35ba98:	e28dd054 	add	sp, sp, #84	; 0x54
        35ba9c:	e3a00001 	mov	r0, #1	; 0x1
        35baa0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

