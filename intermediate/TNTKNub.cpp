#include "include/TNTKNub.h"

/**
 * Symbol: TNTKNub::__ct(void)
 * Address: 0012aa84
 */
TNTKNub::TNTKNub(void) {
    /*
        12aa84:	e1a0c00d 	mov	ip, sp
        12aa88:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        12aa8c:	e24cb004 	sub	fp, ip, #4	; 0x4
        12aa90:	e3300000 	teq	r0, #0	; 0x0
        12aa94:	1a000003 	bne	12aaa8 <TNTKNub::__ct(void)+0x24>
        12aa98:	e3a0002c 	mov	r0, #44	; 0x2c
        12aa9c:	eb6a8f25 	bl	1bce738 <$__nw(unsigned int)>
        12aaa0:	e3300000 	teq	r0, #0	; 0x0
        12aaa4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        12aaa8:	e3a01000 	mov	r1, #0	; 0x0
        12aaac:	e5c01024 	strb	r1, [r0, #36]	; fField36
        12aab0:	e5801020 	str	r1, [r0, #32]	; fField32
        12aab4:	e5801000 	str	r1, [r0]
        12aab8:	e5801004 	str	r1, [r0, #4]	; fField4
        12aabc:	e5801008 	str	r1, [r0, #8]	; fField8
        12aac0:	e580100c 	str	r1, [r0, #12]	; fField12
        12aac4:	e5801010 	str	r1, [r0, #16]	; fField16
        12aac8:	e5801014 	str	r1, [r0, #20]	; fField20
        12aacc:	e5c01028 	strb	r1, [r0, #40]	; fField40
        12aad0:	e5c01029 	strb	r1, [r0, #41]	; fField41
        12aad4:	e5801018 	str	r1, [r0, #24]	; fField24
        12aad8:	e580101c 	str	r1, [r0, #28]	; fField28
        12aadc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::__dt(void)
 * Address: 0012aae0
 */
TNTKNub::~TNTKNub(void) {
    /*
        12aae0:	e1a0c00d 	mov	ip, sp
        12aae4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        12aae8:	e24cb004 	sub	fp, ip, #4	; 0x4
        12aaec:	e1a04000 	mov	r4, r0
        12aaf0:	e1a05001 	mov	r5, r1
        12aaf4:	e5900000 	ldr	r0, [r0]
        12aaf8:	e3300000 	teq	r0, #0	; 0x0
        12aafc:	159f10ec 	ldrne	r1, [pc, #ec]	; 12abf0 <TNTKNub::__dt(void)+0x110>
        12ab00:	15810000 	strne	r0, [r1]
        12ab04:	e5940004 	ldr	r0, [r4, #4]	; fField4
        12ab08:	e3300000 	teq	r0, #0	; 0x0
        12ab0c:	159f10e0 	ldrne	r1, [pc, #e0]	; 12abf4 <TNTKNub::__dt(void)+0x114>
        12ab10:	15810000 	strne	r0, [r1]
        12ab14:	eb66e5cf 	bl	1ae4258 <$ResetREPIdler(void)>
        12ab18:	e3a07000 	mov	r7, #0	; 0x0
        12ab1c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        12ab20:	e2846020 	add	r6, r4, #32	; 0x20
        12ab24:	e3300000 	teq	r0, #0	; 0x0
        12ab28:	0a000016 	beq	12ab88 <TNTKNub::__dt(void)+0xa8>
        12ab2c:	e24dd008 	sub	sp, sp, #8	; 0x8
        12ab30:	e1a0000d 	mov	r0, sp
        12ab34:	eb667e7b 	bl	1aca528 <TKillEvent::$__ct(void)>
        12ab38:	e1a0c006 	mov	ip, r6
        12ab3c:	e3a0e000 	mov	lr, #0	; 0x0
        12ab40:	e3a03000 	mov	r3, #0	; 0x0
        12ab44:	e1a02007 	mov	r2, r7
        12ab48:	e1a01007 	mov	r1, r7
        12ab4c:	e3a00000 	mov	r0, #0	; 0x0
        12ab50:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        12ab54:	e1a0300e 	mov	r3, lr
        12ab58:	e3a02008 	mov	r2, #8	; 0x8
        12ab5c:	e92d000c 	stmdb	sp!, {r2, r3}
        12ab60:	e28d3018 	add	r3, sp, #24	; 0x18
        12ab64:	e1a0000c 	mov	r0, ip
        12ab68:	e3a02000 	mov	r2, #0	; 0x0
        12ab6c:	e3a01001 	mov	r1, #1	; 0x1
        12ab70:	eb6ac074 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        12ab74:	e28dd018 	add	sp, sp, #24	; 0x18
        12ab78:	e1a00006 	mov	r0, r6
        12ab7c:	e1a01007 	mov	r1, r7
        12ab80:	eb6a9730 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
        12ab84:	e28dd008 	add	sp, sp, #8	; 0x8
        12ab88:	e5940008 	ldr	r0, [r4, #8]	; fField8
        12ab8c:	e3300000 	teq	r0, #0	; 0x0
        12ab90:	1b69eded 	blne	1ba634c <PInTranslator::$Delete(void)>
        12ab94:	e594000c 	ldr	r0, [r4, #12]	; fField12
        12ab98:	e3300000 	teq	r0, #0	; 0x0
        12ab9c:	1b69edf1 	blne	1ba6368 <POutTranslator::$Delete(void)>
        12aba0:	e5940018 	ldr	r0, [r4, #24]	; fField24
        12aba4:	e3300000 	teq	r0, #0	; 0x0
        12aba8:	0a000002 	beq	12abb8 <TNTKNub::__dt(void)+0xd8>
        12abac:	e3a01001 	mov	r1, #1	; 0x1
        12abb0:	e1a0e00f 	mov	lr, pc
        12abb4:	e590f000 	ldr	pc, [r0]
        12abb8:	e594001c 	ldr	r0, [r4, #28]	; fField28
        12abbc:	e3300000 	teq	r0, #0	; 0x0
        12abc0:	0a000002 	beq	12abd0 <TNTKNub::__dt(void)+0xf0>
        12abc4:	e3a01001 	mov	r1, #1	; 0x1
        12abc8:	e1a0e00f 	mov	lr, pc
        12abcc:	e590f000 	ldr	pc, [r0]
        12abd0:	e1a00006 	mov	r0, r6
        12abd4:	e3a01000 	mov	r1, #0	; 0x0
        12abd8:	eb6a8ed1 	bl	1bce724 <TUObject::$__dt(void)>
        12abdc:	e3150001 	tst	r5, #1	; 0x1
        12abe0:	11a00004 	movne	r0, r4
        12abe4:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
        12abe8:	1a6a8abc 	bne	1bcd6e0 <$__dl(void *)>
        12abec:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        12abf0:	0c10181c 	ldceq	8, cr1, [r0], -#112
        12abf4:	0c101820 	ldceq	8, cr1, [r0], -#128
    */
}

/**
 * Symbol: TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)
 * Address: 0012abf8
 */
TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char) {
    /*
        12abf8:	e1a0c00d 	mov	ip, sp
        12abfc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        12ac00:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        12ac04:	e24cb014 	sub	fp, ip, #20	; 0x14
        12ac08:	e1a04000 	mov	r4, r0
        12ac0c:	e1a06001 	mov	r6, r1
        12ac10:	e1a05002 	mov	r5, r2
        12ac14:	e59b001c 	ldr	r0, [fp, #28]	; fField28
        12ac18:	e20090ff 	and	r9, r0, #255	; 0xff
        12ac1c:	e3a00000 	mov	r0, #0	; 0x0
        12ac20:	e59b8018 	ldr	r8, [fp, #24]	; fField24
        12ac24:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        12ac28:	eb6a1703 	bl	1bb083c <TTaskSafeRingBuffer::$__ct(void)>
        12ac2c:	e5840018 	str	r0, [r4, #24]	; fField24
        12ac30:	e3300000 	teq	r0, #0	; 0x0
        12ac34:	1a000001 	bne	12ac40 <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0x48>
        12ac38:	eb6add38 	bl	1be2120 <$MemError>
        12ac3c:	ea00003a 	b	12ad2c <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0x134>
        12ac40:	e3a02000 	mov	r2, #0	; 0x0
        12ac44:	e3a01c02 	mov	r1, #512	; 0x200
        12ac48:	eb6a0aa7 	bl	1bad6ec <TTaskSafeRingBuffer::$Init(long, unsigned char)>
        12ac4c:	e1b07000 	movs	r7, r0
        12ac50:	1a00004d 	bne	12ad8c <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0x194>
        12ac54:	e3a00000 	mov	r0, #0	; 0x0
        12ac58:	eb6a16f7 	bl	1bb083c <TTaskSafeRingBuffer::$__ct(void)>
        12ac5c:	e584001c 	str	r0, [r4, #28]	; fField28
        12ac60:	e3300000 	teq	r0, #0	; 0x0
        12ac64:	0afffff3 	beq	12ac38 <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0x40>
        12ac68:	e3a02000 	mov	r2, #0	; 0x0
        12ac6c:	e3a01c02 	mov	r1, #512	; 0x200
        12ac70:	eb6a0a9d 	bl	1bad6ec <TTaskSafeRingBuffer::$Init(long, unsigned char)>
        12ac74:	e1b07000 	movs	r7, r0
        12ac78:	1a000043 	bne	12ad8c <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0x194>
        12ac7c:	e24dd08c 	sub	sp, sp, #140	; 0x8c
        12ac80:	e1a0000d 	mov	r0, sp
        12ac84:	eb667e2c 	bl	1aca53c <TNTKTask::$__ct(void)>
        12ac88:	e3a03c02 	mov	r3, #512	; 0x200
        12ac8c:	e3a02c02 	mov	r2, #512	; 0x200
        12ac90:	e2841018 	add	r1, r4, #24	; 0x18
        12ac94:	e8910003 	ldmia	r1, {r0, r1}
        12ac98:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        12ac9c:	e1a02005 	mov	r2, r5
        12aca0:	e1a01006 	mov	r1, r6
        12aca4:	e28d0010 	add	r0, sp, #16	; 0x10
        12aca8:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        12acac:	eb6671c7 	bl	1ac73d0 <TNTKTask::$InitNTK(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)>
        12acb0:	e28dd010 	add	sp, sp, #16	; 0x10
        12acb4:	e1b07000 	movs	r7, r0
        12acb8:	e1a0000d 	mov	r0, sp
        12acbc:	e3a01000 	mov	r1, #0	; 0x0
        12acc0:	e59d2000 	ldr	r2, [sp]
        12acc4:	0a000003 	beq	12acd8 <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0xe0>
        12acc8:	e1a0e00f 	mov	lr, pc
        12accc:	e1a0f002 	mov	pc, r2
        12acd0:	e28dd08c 	add	sp, sp, #140	; 0x8c
        12acd4:	ea00002c 	b	12ad8c <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0x194>
        12acd8:	e1a0e00f 	mov	lr, pc
        12acdc:	e1a0f002 	mov	pc, r2
        12ace0:	e28dd08c 	add	sp, sp, #140	; 0x8c
        12ace4:	e2841020 	add	r1, r4, #32	; 0x20
        12ace8:	e59f0044 	ldr	r0, [pc, #44]	; 12ad34 <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0x13c>
        12acec:	eb6a37d2 	bl	1bb8c3c <$GetOSPortFromName(unsigned long, TUPort *)>
        12acf0:	e1b07000 	movs	r7, r0
        12acf4:	1a000024 	bne	12ad8c <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0x194>
        12acf8:	e2840008 	add	r0, r4, #8	; 0x8
        12acfc:	e284500c 	add	r5, r4, #12	; 0xc
        12ad00:	e3390000 	teq	r9, #0	; 0x0
        12ad04:	0a00000b 	beq	12ad38 <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0x140>
        12ad08:	e3a01000 	mov	r1, #0	; 0x0
        12ad0c:	e5c41028 	strb	r1, [r4, #40]	; fField40
        12ad10:	e5941018 	ldr	r1, [r4, #24]	; fField24
        12ad14:	eb666551 	bl	1ac4260 <$CreateSerialInTranslator(PInTranslator **, TTaskSafeRingBuffer *)>
        12ad18:	e1b07000 	movs	r7, r0
        12ad1c:	1a00001a 	bne	12ad8c <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0x194>
        12ad20:	e1a00005 	mov	r0, r5
        12ad24:	e5b4101c 	ldr	r1, [r4, #28]!	; fField28
        12ad28:	eb66654d 	bl	1ac4264 <$CreateSerialOutTranslator(POutTranslator **, TTaskSafeRingBuffer *)>
        12ad2c:	e1a07000 	mov	r7, r0
        12ad30:	ea000015 	b	12ad8c <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0x194>
        12ad34:	6e746b20 	cdpvs	11, 7, cr6, cr4, cr0, {1}
        12ad38:	e33a0000 	teq	sl, #0	; 0x0
        12ad3c:	028f1f14 	addeq	r1, pc, #80	; 0x50
        12ad40:	11a0100a 	movne	r1, sl
        12ad44:	e5942018 	ldr	r2, [r4, #24]	; fField24
        12ad48:	eb66653f 	bl	1ac424c <$CreateNTKInTranslator(PInTranslator **, char *, TTaskSafeRingBuffer *)>
        12ad4c:	e1b07000 	movs	r7, r0
        12ad50:	1a00000d 	bne	12ad8c <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0x194>
        12ad54:	e3380000 	teq	r8, #0	; 0x0
        12ad58:	028f1f12 	addeq	r1, pc, #72	; 0x48
        12ad5c:	11a01008 	movne	r1, r8
        12ad60:	e1a00005 	mov	r0, r5
        12ad64:	e594201c 	ldr	r2, [r4, #28]	; fField28
        12ad68:	eb666538 	bl	1ac4250 <$CreateNTKOutTranslator(POutTranslator **, char *, TTaskSafeRingBuffer *)>
        12ad6c:	e1b07000 	movs	r7, r0
        12ad70:	1a000005 	bne	12ad8c <TNTKNub::Init(TOptionArray *, TOptionArray *, TOptionArray *, char *, char *, unsigned char)+0x194>
        12ad74:	e3a00001 	mov	r0, #1	; 0x1
        12ad78:	e5c40028 	strb	r0, [r4, #40]	; fField40
        12ad7c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        12ad80:	e5840010 	str	r0, [r4, #16]	; fField16
        12ad84:	e594000c 	ldr	r0, [r4, #12]	; fField12
        12ad88:	e5a40014 	str	r0, [r4, #20]!	; fField20
        12ad8c:	e1a00007 	mov	r0, r7
        12ad90:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        12ad94:	504e544b 	subpl	r5, lr, fp, asr #8
        12ad98:	496e5472 	stmmidb	lr!, {r1, r4, r5, r6, sl, ip, lr}^
        12ad9c:	616e736c 	cmnvs	lr, ip, ror #6
        12ada0:	61746f72 	cmnvs	r4, r2, ror pc
        12ada4:	00000000 	andeq	r0, r0, r0
        12ada8:	504e544b 	subpl	r5, lr, fp, asr #8
        12adac:	4f757454 	swimi	0x00757454
        12adb0:	72616e73 	rsbvc	r6, r1, #1840	; 0x730
        12adb4:	6c61746f 	stcvsl	4, cr7, [r1], -#444
        12adb8:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

/**
 * Symbol: TNTKNub::StartListener(void)
 * Address: 0012adbc
 */
TNTKNub::StartListener(void) {
    /*
        12adbc:	e1a0c00d 	mov	ip, sp
        12adc0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12adc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        12adc8:	e1a04000 	mov	r4, r0
        12adcc:	e3a00000 	mov	r0, #0	; 0x0
        12add0:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        12add4:	e59f10c8 	ldr	r1, [pc, #c8]	; 12aea4 <TNTKNub::StartListener(void)+0xe8>
        12add8:	e5910000 	ldr	r0, [r1]
        12addc:	e5840000 	str	r0, [r4]
        12ade0:	e59f00c0 	ldr	r0, [pc, #c0]	; 12aea8 <TNTKNub::StartListener(void)+0xec>
        12ade4:	e5902000 	ldr	r2, [r0]
        12ade8:	e5842004 	str	r2, [r4, #4]	; fField4
        12adec:	e5942008 	ldr	r2, [r4, #8]	; fField8
        12adf0:	e5812000 	str	r2, [r1]
        12adf4:	e594100c 	ldr	r1, [r4, #12]	; fField12
        12adf8:	e5801000 	str	r1, [r0]
        12adfc:	eb66e515 	bl	1ae4258 <$ResetREPIdler(void)>
        12ae00:	e5d40028 	ldrb	r0, [r4, #40]	; fField40
        12ae04:	e3300000 	teq	r0, #0	; 0x0
        12ae08:	0a000030 	beq	12aed0 <TNTKNub::StartListener(void)+0x114>
        12ae0c:	e3a00000 	mov	r0, #0	; 0x0
        12ae10:	e52d006c 	str	r0, [sp, -#108]!
        12ae14:	e28d0008 	add	r0, sp, #8	; 0x8
        12ae18:	eb6a1ed5 	bl	1bb2974 <$setjmp>
        12ae1c:	e3300000 	teq	r0, #0	; 0x0
        12ae20:	1a000025 	bne	12aebc <TNTKNub::StartListener(void)+0x100>
        12ae24:	e1a0000d 	mov	r0, sp
        12ae28:	eb6ad493 	bl	1be007c <$AddExceptionHandler>
        12ae2c:	e3a05001 	mov	r5, #1	; 0x1
        12ae30:	e24dd008 	sub	sp, sp, #8	; 0x8
        12ae34:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12ae38:	e59f206c 	ldr	r2, [pc, #6c]	; 12aeac <TNTKNub::StartListener(void)+0xf0>
        12ae3c:	e59f106c 	ldr	r1, [pc, #6c]	; 12aeb0 <TNTKNub::StartListener(void)+0xf4>
        12ae40:	eb66799b 	bl	1ac94b4 <PNTKOutTranslator::$SendHeader(unsigned long, unsigned long)>
        12ae44:	e3a02000 	mov	r2, #0	; 0x0
        12ae48:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12ae4c:	e59f1060 	ldr	r1, [pc, #60]	; 12aeb4 <TNTKNub::StartListener(void)+0xf8>
        12ae50:	eb667990 	bl	1ac9498 <PNTKOutTranslator::$SendCommand(unsigned long, unsigned long)>
        12ae54:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12ae58:	eb66714a 	bl	1ac7388 <PNTKOutTranslator::$Flush(void)>
        12ae5c:	e1a0200d 	mov	r2, sp
        12ae60:	e28d1004 	add	r1, sp, #4	; 0x4
        12ae64:	e1a00004 	mov	r0, r4
        12ae68:	eb66e4fb 	bl	1ae425c <TNTKNub::$ReadCommand(unsigned long *, unsigned long *)>
        12ae6c:	e58d0074 	str	r0, [sp, #116]
        12ae70:	e3300000 	teq	r0, #0	; 0x0
        12ae74:	1a000008 	bne	12ae9c <TNTKNub::StartListener(void)+0xe0>
        12ae78:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        12ae7c:	e59fc034 	ldr	ip, [pc, #34]	; 12aeb8 <TNTKNub::StartListener(void)+0xfc>
        12ae80:	e130000c 	teq	r0, ip
        12ae84:	059d0000 	ldreq	r0, [sp]
        12ae88:	03300000 	teqeq	r0, #0	; 0x0
        12ae8c:	13a00e29 	movne	r0, #656	; 0x290
        12ae90:	12400a07 	subne	r0, r0, #28672	; 0x7000
        12ae94:	158d0074 	strne	r0, [sp, #116]
        12ae98:	05c45029 	streqb	r5, [r4, #41]	; fField41
        12ae9c:	e28dd008 	add	sp, sp, #8	; 0x8
        12aea0:	ea000007 	b	12aec4 <TNTKNub::StartListener(void)+0x108>
        12aea4:	0c10181c 	ldceq	8, cr1, [r0], -#112
        12aea8:	0c101820 	ldceq	8, cr1, [r0], -#128
        12aeac:	6e747020 	cdpvs	0, 7, cr7, cr4, cr0, {1}
        12aeb0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12aeb4:	636e6e74 	cmnvs	lr, #1856	; 0x740
        12aeb8:	6f6b6c6e 	swivs	0x006b6c6e
        12aebc:	e59d0064 	ldr	r0, [sp, #100]
        12aec0:	e58d006c 	str	r0, [sp, #108]
        12aec4:	e1a0000d 	mov	r0, sp
        12aec8:	eb6ad87a 	bl	1be10b8 <$ExitHandler>
        12aecc:	e28dd06c 	add	sp, sp, #108	; 0x6c
        12aed0:	e49d0004 	ldr	r0, [sp], #4	; fField4
        12aed4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::StopListener(void)
 * Address: 0012aed8
 */
TNTKNub::StopListener(void) {
    /*
        12aed8:	e1a0c00d 	mov	ip, sp
        12aedc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        12aee0:	e24cb004 	sub	fp, ip, #4	; 0x4
        12aee4:	e1a04000 	mov	r4, r0
        12aee8:	e3a05000 	mov	r5, #0	; 0x0
        12aeec:	e5d01028 	ldrb	r1, [r0, #40]	; fField40
        12aef0:	e3a00000 	mov	r0, #0	; 0x0
        12aef4:	e3310000 	teq	r1, #0	; 0x0
        12aef8:	15d41029 	ldrneb	r1, [r4, #41]	; fField41
        12aefc:	13310000 	teqne	r1, #0	; 0x0
        12af00:	0a000018 	beq	12af68 <TNTKNub::StopListener(void)+0x90>
        12af04:	e52d006c 	str	r0, [sp, -#108]!
        12af08:	e28d0008 	add	r0, sp, #8	; 0x8
        12af0c:	eb6a1e98 	bl	1bb2974 <$setjmp>
        12af10:	e3300000 	teq	r0, #0	; 0x0
        12af14:	1a00000f 	bne	12af58 <TNTKNub::StopListener(void)+0x80>
        12af18:	e1a0000d 	mov	r0, sp
        12af1c:	eb6ad456 	bl	1be007c <$AddExceptionHandler>
        12af20:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12af24:	e59f2020 	ldr	r2, [pc, #20]	; 12af4c <TNTKNub::StopListener(void)+0x74>	; fField20
        12af28:	e59f1020 	ldr	r1, [pc, #20]	; 12af50 <TNTKNub::StopListener(void)+0x78>	; fField20
        12af2c:	eb667960 	bl	1ac94b4 <PNTKOutTranslator::$SendHeader(unsigned long, unsigned long)>
        12af30:	e3a02000 	mov	r2, #0	; 0x0
        12af34:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12af38:	e59f1014 	ldr	r1, [pc, #14]	; 12af54 <TNTKNub::StopListener(void)+0x7c>
        12af3c:	eb667955 	bl	1ac9498 <PNTKOutTranslator::$SendCommand(unsigned long, unsigned long)>
        12af40:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        12af44:	eb66710f 	bl	1ac7388 <PNTKOutTranslator::$Flush(void)>
        12af48:	ea000003 	b	12af5c <TNTKNub::StopListener(void)+0x84>
        12af4c:	6e747020 	cdpvs	0, 7, cr7, cr4, cr0, {1}
        12af50:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12af54:	7465726d 	strvcbt	r7, [r5], -#621
        12af58:	e59d5064 	ldr	r5, [sp, #100]
        12af5c:	e1a0000d 	mov	r0, sp
        12af60:	eb6ad854 	bl	1be10b8 <$ExitHandler>
        12af64:	e28dd06c 	add	sp, sp, #108	; 0x6c
        12af68:	e24dd004 	sub	sp, sp, #4	; 0x4
        12af6c:	e59f0098 	ldr	r0, [pc, #98]	; 12b00c <TNTKNub::StopListener(void)+0x134>
        12af70:	e5900000 	ldr	r0, [r0]
        12af74:	e2806024 	add	r6, r0, #36	; 0x24
        12af78:	e28f0f24 	add	r0, pc, #144	; 0x90
        12af7c:	eb6a68bf 	bl	1bc5280 <$Intern(char *)>
        12af80:	eb6a5c71 	bl	1bc214c <$AllocateRefHandle(long)>
        12af84:	e1a04000 	mov	r4, r0
        12af88:	e5901000 	ldr	r1, [r0]
        12af8c:	e5960000 	ldr	r0, [r6]
        12af90:	e5900000 	ldr	r0, [r0]
        12af94:	eb6a64b1 	bl	1bc4260 <$GetFrameSlotRef__FlT1>
        12af98:	eb6a5c6b 	bl	1bc214c <$AllocateRefHandle(long)>
        12af9c:	e58d0000 	str	r0, [sp]
        12afa0:	e1a00004 	mov	r0, r4
        12afa4:	eb6a6084 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12afa8:	e24dd008 	sub	sp, sp, #8	; 0x8
        12afac:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        12afb0:	e5900000 	ldr	r0, [r0]
        12afb4:	e3300002 	teq	r0, #2	; 0x2
        12afb8:	0a00000f 	beq	12affc <TNTKNub::StopListener(void)+0x124>
        12afbc:	e3a00002 	mov	r0, #2	; 0x2
        12afc0:	eb6a5c61 	bl	1bc214c <$AllocateRefHandle(long)>
        12afc4:	e58d0000 	str	r0, [sp]
        12afc8:	e1a0400d 	mov	r4, sp
        12afcc:	e28f0f12 	add	r0, pc, #72	; 0x48
        12afd0:	eb6a68aa 	bl	1bc5280 <$Intern(char *)>
        12afd4:	eb6a5c5c 	bl	1bc214c <$AllocateRefHandle(long)>
        12afd8:	e58d0004 	str	r0, [sp, #4]	; fField4
        12afdc:	e28d1004 	add	r1, sp, #4	; 0x4
        12afe0:	e28d0008 	add	r0, sp, #8	; 0x8
        12afe4:	e1a02004 	mov	r2, r4
        12afe8:	eb6a6cde 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        12afec:	e59d0000 	ldr	r0, [sp]
        12aff0:	eb6a6071 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12aff4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        12aff8:	eb6a606f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12affc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        12b000:	eb6a606d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12b004:	e1a00005 	mov	r0, r5
        12b008:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        12b00c:	0c101934 	ldceq	9, cr1, [r0], -#208
        12b010:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12b014:	6f6f6c73 	swivs	0x006f6c73
        12b018:	70726f00 	rsbvcs	r6, r2, r0, lsl #30
        12b01c:	6e747073 	mrcvs	0, 3, r7, cr4, cr3, {3}
        12b020:	74617465 	strvcbt	r7, [r1], -#1125
        12b024:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TNTKNub::DownloadPackage(void)
 * Address: 0012b028
 */
TNTKNub::DownloadPackage(void) {
    /*
        12b028:	e1a0c00d 	mov	ip, sp
        12b02c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        12b030:	e24cb004 	sub	fp, ip, #4	; 0x4
        12b034:	e1a04000 	mov	r4, r0
        12b038:	e3a00000 	mov	r0, #0	; 0x0
        12b03c:	e52d006c 	str	r0, [sp, -#108]!
        12b040:	e28d0008 	add	r0, sp, #8	; 0x8
        12b044:	eb6a1e4a 	bl	1bb2974 <$setjmp>
        12b048:	e3300000 	teq	r0, #0	; 0x0
        12b04c:	1a000048 	bne	12b174 <TNTKNub::DownloadPackage(void)+0x14c>
        12b050:	e1a0000d 	mov	r0, sp
        12b054:	eb6ad408 	bl	1be007c <$AddExceptionHandler>
        12b058:	e24dd008 	sub	sp, sp, #8	; 0x8
        12b05c:	e3a06000 	mov	r6, #0	; 0x0
        12b060:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b064:	e59f20a8 	ldr	r2, [pc, #a8]	; 12b114 <TNTKNub::DownloadPackage(void)+0xec>
        12b068:	e59f10a8 	ldr	r1, [pc, #a8]	; 12b118 <TNTKNub::DownloadPackage(void)+0xf0>
        12b06c:	eb667910 	bl	1ac94b4 <PNTKOutTranslator::$SendHeader(unsigned long, unsigned long)>
        12b070:	e3a02000 	mov	r2, #0	; 0x0
        12b074:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b078:	e59f109c 	ldr	r1, [pc, #9c]	; 12b11c <TNTKNub::DownloadPackage(void)+0xf4>
        12b07c:	eb667905 	bl	1ac9498 <PNTKOutTranslator::$SendCommand(unsigned long, unsigned long)>
        12b080:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b084:	eb6670bf 	bl	1ac7388 <PNTKOutTranslator::$Flush(void)>
        12b088:	e59f9090 	ldr	r9, [pc, #90]	; 12b120 <TNTKNub::DownloadPackage(void)+0xf8>
        12b08c:	e2898038 	add	r8, r9, #56	; 0x38
        12b090:	e59f708c 	ldr	r7, [pc, #8c]	; 12b124 <TNTKNub::DownloadPackage(void)+0xfc>	; fField8
        12b094:	e1a0200d 	mov	r2, sp
        12b098:	e28d1004 	add	r1, sp, #4	; 0x4
        12b09c:	e1a00004 	mov	r0, r4
        12b0a0:	eb66e46d 	bl	1ae425c <TNTKNub::$ReadCommand(unsigned long *, unsigned long *)>
        12b0a4:	e1b05000 	movs	r5, r0
        12b0a8:	1a000027 	bne	12b14c <TNTKNub::DownloadPackage(void)+0x124>
        12b0ac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        12b0b0:	e1300009 	teq	r0, r9
        12b0b4:	0a00001b 	beq	12b128 <TNTKNub::DownloadPackage(void)+0x100>
        12b0b8:	e1300008 	teq	r0, r8
        12b0bc:	0a00001e 	beq	12b13c <TNTKNub::DownloadPackage(void)+0x114>
        12b0c0:	e1300007 	teq	r0, r7
        12b0c4:	e24dd004 	sub	sp, sp, #4	; 0x4
        12b0c8:	1a000025 	bne	12b164 <TNTKNub::DownloadPackage(void)+0x13c>
        12b0cc:	e1a0100d 	mov	r1, sp
        12b0d0:	e3a02004 	mov	r2, #4	; 0x4
        12b0d4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        12b0d8:	eb66e462 	bl	1ae4268 <PNTKInTranslator::$ReadData(void *, long)>
        12b0dc:	e59d0000 	ldr	r0, [sp]
        12b0e0:	e0601280 	rsb	r1, r0, r0, lsl #5
        12b0e4:	e0611400 	rsb	r1, r1, r0, lsl #8
        12b0e8:	e1a01701 	mov	r1, r1, lsl #14
        12b0ec:	e5940010 	ldr	r0, [r4, #16]	; fField16
        12b0f0:	eb6678fb 	bl	1ac94e4 <PNTKInTranslator::$SetTimeout(unsigned long)>
        12b0f4:	e59d0000 	ldr	r0, [sp]
        12b0f8:	e0601280 	rsb	r1, r0, r0, lsl #5
        12b0fc:	e0611400 	rsb	r1, r1, r0, lsl #8
        12b100:	e1a01701 	mov	r1, r1, lsl #14
        12b104:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b108:	eb6678f6 	bl	1ac94e8 <PNTKOutTranslator::$SetTimeout(unsigned long)>
        12b10c:	e28dd004 	add	sp, sp, #4	; 0x4
        12b110:	ea00000f 	b	12b154 <TNTKNub::DownloadPackage(void)+0x12c>
        12b114:	6e747020 	cdpvs	0, 7, cr7, cr4, cr0, {1}
        12b118:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12b11c:	64706b67 	ldrvsbt	r6, [r0], -#2919
        12b120:	706b6720 	rsbvc	r6, fp, r0, lsr #14
        12b124:	73746f75 	cmnvc	r4, #468	; 0x1d4
        12b128:	e5940010 	ldr	r0, [r4, #16]	; fField16
        12b12c:	eb6674b4 	bl	1ac8404 <PNTKInTranslator::$LoadPackage(void)>
        12b130:	e1a05000 	mov	r5, r0
        12b134:	e3a06001 	mov	r6, #1	; 0x1
        12b138:	ea000003 	b	12b14c <TNTKNub::DownloadPackage(void)+0x124>
        12b13c:	e1a00004 	mov	r0, r4
        12b140:	e59d1000 	ldr	r1, [sp]
        12b144:	eb666447 	bl	1ac4268 <TNTKNub::$DeletePackage(unsigned long)>
        12b148:	e1a05000 	mov	r5, r0
        12b14c:	e3350000 	teq	r5, #0	; 0x0
        12b150:	1a000001 	bne	12b15c <TNTKNub::DownloadPackage(void)+0x134>
        12b154:	e3360000 	teq	r6, #0	; 0x0
        12b158:	0affffcd 	beq	12b094 <TNTKNub::DownloadPackage(void)+0x6c>
        12b15c:	e28dd008 	add	sp, sp, #8	; 0x8
        12b160:	ea000004 	b	12b178 <TNTKNub::DownloadPackage(void)+0x150>
        12b164:	e3a05e29 	mov	r5, #656	; 0x290
        12b168:	e2455a07 	sub	r5, r5, #28672	; 0x7000
        12b16c:	e28dd004 	add	sp, sp, #4	; 0x4
        12b170:	eafffff9 	b	12b15c <TNTKNub::DownloadPackage(void)+0x134>
        12b174:	e59d5064 	ldr	r5, [sp, #100]
        12b178:	e1a0000d 	mov	r0, sp
        12b17c:	eb6ad7cd 	bl	1be10b8 <$ExitHandler>
        12b180:	e28dd06c 	add	sp, sp, #108	; 0x6c
        12b184:	e1a01005 	mov	r1, r5
        12b188:	e1a00004 	mov	r0, r4
        12b18c:	eb6678cb 	bl	1ac94c0 <TNTKNub::$SendResult(long)>
        12b190:	e1a00005 	mov	r0, r5
        12b194:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::DoCommand(void)
 * Address: 0012b2d4
 */
TNTKNub::DoCommand(void) {
    /*
        12b2d4:	e1a0c00d 	mov	ip, sp
        12b2d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12b2dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        12b2e0:	e1a04000 	mov	r4, r0
        12b2e4:	e24dd008 	sub	sp, sp, #8	; 0x8
        12b2e8:	e1a0200d 	mov	r2, sp
        12b2ec:	e28d1004 	add	r1, sp, #4	; 0x4
        12b2f0:	eb66e3d9 	bl	1ae425c <TNTKNub::$ReadCommand(unsigned long *, unsigned long *)>
        12b2f4:	e1b05000 	movs	r5, r0
        12b2f8:	1a000048 	bne	12b420 <TNTKNub::DoCommand(void)+0x14c>
        12b2fc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        12b300:	e59fc03c 	ldr	ip, [pc, #3c]	; 12b344 <TNTKNub::DoCommand(void)+0x70>
        12b304:	e150000c 	cmp	r0, ip
        12b308:	0a000022 	beq	12b398 <TNTKNub::DoCommand(void)+0xc4>
        12b30c:	ca000010 	bgt	12b354 <TNTKNub::DoCommand(void)+0x80>
        12b310:	e59fc030 	ldr	ip, [pc, #30]	; 12b348 <TNTKNub::DoCommand(void)+0x74>
        12b314:	e130000c 	teq	r0, ip
        12b318:	0a000026 	beq	12b3b8 <TNTKNub::DoCommand(void)+0xe4>
        12b31c:	e59fc028 	ldr	ip, [pc, #28]	; 12b34c <TNTKNub::DoCommand(void)+0x78>	; fField28
        12b320:	e130000c 	teq	r0, ip
        12b324:	03a05001 	moveq	r5, #1	; 0x1
        12b328:	0a00003c 	beq	12b420 <TNTKNub::DoCommand(void)+0x14c>
        12b32c:	e59fc01c 	ldr	ip, [pc, #1c]	; 12b350 <TNTKNub::DoCommand(void)+0x7c>
        12b330:	e130000c 	teq	r0, ip
        12b334:	1a00000f 	bne	12b378 <TNTKNub::DoCommand(void)+0xa4>
        12b338:	e5940010 	ldr	r0, [r4, #16]	; fField16
        12b33c:	eb667430 	bl	1ac8404 <PNTKInTranslator::$LoadPackage(void)>
        12b340:	ea000017 	b	12b3a4 <TNTKNub::DoCommand(void)+0xd0>
        12b344:	706b6758 	rsbvc	r6, fp, r8, asr r7
        12b348:	636f6465 	cmnvs	pc, #1694498816	; 0x65000000
        12b34c:	6c736362 	ldcvsl	3, cr6, [r3], -#392
        12b350:	706b6720 	rsbvc	r6, fp, r0, lsr #14
        12b354:	e59fc034 	ldr	ip, [pc, #34]	; 12b390 <TNTKNub::DoCommand(void)+0xbc>
        12b358:	e130000c 	teq	r0, ip
        12b35c:	0a00001a 	beq	12b3cc <TNTKNub::DoCommand(void)+0xf8>
        12b360:	e59fc02c 	ldr	ip, [pc, #2c]	; 12b394 <TNTKNub::DoCommand(void)+0xc0>
        12b364:	e130000c 	teq	r0, ip
        12b368:	03e05000 	mvneq	r5, #0	; 0x0
        12b36c:	03a00000 	moveq	r0, #0	; 0x0
        12b370:	05c40029 	streqb	r0, [r4, #41]	; fField41
        12b374:	0a000029 	beq	12b420 <TNTKNub::DoCommand(void)+0x14c>
        12b378:	e24dd004 	sub	sp, sp, #4	; 0x4
        12b37c:	e3a01e29 	mov	r1, #656	; 0x290
        12b380:	e2411a07 	sub	r1, r1, #28672	; 0x7000
        12b384:	e1a05001 	mov	r5, r1
        12b388:	e1a00004 	mov	r0, r4
        12b38c:	ea000021 	b	12b418 <TNTKNub::DoCommand(void)+0x144>
        12b390:	73746f75 	cmnvc	r4, #468	; 0x1d4
        12b394:	7465726d 	strvcbt	r7, [r5], -#621
        12b398:	e1a00004 	mov	r0, r4
        12b39c:	e59d1000 	ldr	r1, [sp]
        12b3a0:	eb6663b0 	bl	1ac4268 <TNTKNub::$DeletePackage(unsigned long)>
        12b3a4:	e1a01000 	mov	r1, r0
        12b3a8:	e1a05000 	mov	r5, r0
        12b3ac:	e1a00004 	mov	r0, r4
        12b3b0:	eb667842 	bl	1ac94c0 <TNTKNub::$SendResult(long)>
        12b3b4:	ea000019 	b	12b420 <TNTKNub::DoCommand(void)+0x14c>
        12b3b8:	e1a00004 	mov	r0, r4
        12b3bc:	e59d1000 	ldr	r1, [sp]
        12b3c0:	eb666ff9 	bl	1ac73ac <TNTKNub::$HandleCodeBlock(unsigned long)>
        12b3c4:	e1a05000 	mov	r5, r0
        12b3c8:	ea000014 	b	12b420 <TNTKNub::DoCommand(void)+0x14c>
        12b3cc:	e24dd004 	sub	sp, sp, #4	; 0x4
        12b3d0:	e1a0100d 	mov	r1, sp
        12b3d4:	e3a02004 	mov	r2, #4	; 0x4
        12b3d8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        12b3dc:	eb66e3a1 	bl	1ae4268 <PNTKInTranslator::$ReadData(void *, long)>
        12b3e0:	e59d0000 	ldr	r0, [sp]
        12b3e4:	e0601280 	rsb	r1, r0, r0, lsl #5
        12b3e8:	e0611400 	rsb	r1, r1, r0, lsl #8
        12b3ec:	e1a01701 	mov	r1, r1, lsl #14
        12b3f0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        12b3f4:	eb66783a 	bl	1ac94e4 <PNTKInTranslator::$SetTimeout(unsigned long)>
        12b3f8:	e59d0000 	ldr	r0, [sp]
        12b3fc:	e0601280 	rsb	r1, r0, r0, lsl #5
        12b400:	e0611400 	rsb	r1, r1, r0, lsl #8
        12b404:	e1a01701 	mov	r1, r1, lsl #14
        12b408:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b40c:	eb667835 	bl	1ac94e8 <PNTKOutTranslator::$SetTimeout(unsigned long)>
        12b410:	e1a00004 	mov	r0, r4
        12b414:	e3a01000 	mov	r1, #0	; 0x0
        12b418:	eb667828 	bl	1ac94c0 <TNTKNub::$SendResult(long)>
        12b41c:	e28dd004 	add	sp, sp, #4	; 0x4
        12b420:	e1a00005 	mov	r0, r5
        12b424:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::HandleCodeBlock(unsigned long)
 * Address: 0012b428
 */
TNTKNub::HandleCodeBlock(unsigned long) {
    /*
        12b428:	e1a0c00d 	mov	ip, sp
        12b42c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        12b430:	e24cb004 	sub	fp, ip, #4	; 0x4
        12b434:	e1a04000 	mov	r4, r0
        12b438:	e1a05001 	mov	r5, r1
        12b43c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        12b440:	e3a06000 	mov	r6, #0	; 0x0
        12b444:	e59f70bc 	ldr	r7, [pc, #bc]	; 12b508 <TNTKNub::HandleCodeBlock(unsigned long)+0xe0>
        12b448:	e3a00002 	mov	r0, #2	; 0x2
        12b44c:	eb6a5b3e 	bl	1bc214c <$AllocateRefHandle(long)>
        12b450:	e58d0004 	str	r0, [sp, #4]	; fField4
        12b454:	e3a00002 	mov	r0, #2	; 0x2
        12b458:	eb6a5b3b 	bl	1bc214c <$AllocateRefHandle(long)>
        12b45c:	e40d006c 	str	r0, [sp], -#108
        12b460:	e3a00000 	mov	r0, #0	; 0x0
        12b464:	e58d0000 	str	r0, [sp]
        12b468:	e28d0008 	add	r0, sp, #8	; 0x8
        12b46c:	eb6a1d40 	bl	1bb2974 <$setjmp>
        12b470:	e3300000 	teq	r0, #0	; 0x0
        12b474:	1a000027 	bne	12b518 <TNTKNub::HandleCodeBlock(unsigned long)+0xf0>
        12b478:	e1a0000d 	mov	r0, sp
        12b47c:	eb6ad2fe 	bl	1be007c <$AddExceptionHandler>
        12b480:	e24dd004 	sub	sp, sp, #4	; 0x4
        12b484:	e28d1078 	add	r1, sp, #120	; 0x78
        12b488:	e3a02004 	mov	r2, #4	; 0x4
        12b48c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        12b490:	eb66e374 	bl	1ae4268 <PNTKInTranslator::$ReadData(void *, long)>
        12b494:	e3a01000 	mov	r1, #0	; 0x0
        12b498:	e5940010 	ldr	r0, [r4, #16]	; fField16
        12b49c:	eb6673ef 	bl	1ac8460 <PNTKInTranslator::$ProduceFrame(int)>
        12b4a0:	e59d1074 	ldr	r1, [sp, #116]
        12b4a4:	e5810000 	str	r0, [r1]
        12b4a8:	e59f005c 	ldr	r0, [pc, #5c]	; 12b50c <TNTKNub::HandleCodeBlock(unsigned long)+0xe4>
        12b4ac:	e5900000 	ldr	r0, [r0]
        12b4b0:	eb6a5b25 	bl	1bc214c <$AllocateRefHandle(long)>
        12b4b4:	e58d0000 	str	r0, [sp]
        12b4b8:	e1a0100d 	mov	r1, sp
        12b4bc:	e28d0074 	add	r0, sp, #116	; 0x74
        12b4c0:	eb6a676f 	bl	1bc5284 <$InterpretBlock__FRC6RefVarT1>
        12b4c4:	e59d1070 	ldr	r1, [sp, #112]
        12b4c8:	e5810000 	str	r0, [r1]
        12b4cc:	e59d0000 	ldr	r0, [sp]
        12b4d0:	eb6a5f39 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12b4d4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b4d8:	e59f2030 	ldr	r2, [pc, #30]	; 12b510 <TNTKNub::HandleCodeBlock(unsigned long)+0xe8>
        12b4dc:	e59f1030 	ldr	r1, [pc, #30]	; 12b514 <TNTKNub::HandleCodeBlock(unsigned long)+0xec>
        12b4e0:	eb6677f3 	bl	1ac94b4 <PNTKOutTranslator::$SendHeader(unsigned long, unsigned long)>
        12b4e4:	e1a02005 	mov	r2, r5
        12b4e8:	e1a01007 	mov	r1, r7
        12b4ec:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b4f0:	eb6677e8 	bl	1ac9498 <PNTKOutTranslator::$SendCommand(unsigned long, unsigned long)>
        12b4f4:	e28d1070 	add	r1, sp, #112	; 0x70
        12b4f8:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        12b4fc:	eb66634d 	bl	1ac4238 <PNTKOutTranslator::$ConsumeFrameReally(RefVar const &)>
        12b500:	e28dd004 	add	sp, sp, #4	; 0x4
        12b504:	ea000004 	b	12b51c <TNTKNub::HandleCodeBlock(unsigned long)+0xf4>
        12b508:	636f6465 	cmnvs	pc, #1694498816	; 0x65000000
        12b50c:	0c101810 	ldceq	8, cr1, [r0], -#64
        12b510:	6e747020 	cdpvs	0, 7, cr7, cr4, cr0, {1}
        12b514:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12b518:	e59d6064 	ldr	r6, [sp, #100]
        12b51c:	e1a0000d 	mov	r0, sp
        12b520:	eb6ad6e4 	bl	1be10b8 <$ExitHandler>
        12b524:	e5bd006c 	ldr	r0, [sp, #108]!
        12b528:	eb6a5f23 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12b52c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        12b530:	eb6a5f21 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12b534:	e1a00006 	mov	r0, r6
        12b538:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::DeletePackage(unsigned long)
 * Address: 0012b53c
 */
TNTKNub::DeletePackage(unsigned long) {
    /*
        12b53c:	e1a0c00d 	mov	ip, sp
        12b540:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        12b544:	e24cb004 	sub	fp, ip, #4	; 0x4
        12b548:	e1a05000 	mov	r5, r0
        12b54c:	e1a04001 	mov	r4, r1
        12b550:	e3a07000 	mov	r7, #0	; 0x0
        12b554:	e1a00001 	mov	r0, r1
        12b558:	eb6adaf8 	bl	1be2140 <$NewPtr>
        12b55c:	e1a06000 	mov	r6, r0
        12b560:	e1a02004 	mov	r2, r4
        12b564:	e1a01006 	mov	r1, r6
        12b568:	e5b50010 	ldr	r0, [r5, #16]!	; fField16
        12b56c:	eb66e33d 	bl	1ae4268 <PNTKInTranslator::$ReadData(void *, long)>
        12b570:	e24dd064 	sub	sp, sp, #100	; 0x64
        12b574:	e1a0000d 	mov	r0, sp
        12b578:	eb6a843b 	bl	1bcc66c <TPMIterator::$__ct(void)>
        12b57c:	e1a0000d 	mov	r0, sp
        12b580:	eb6aa53c 	bl	1bd4a78 <TPMIterator::$Init(void)>
        12b584:	e1a0000d 	mov	r0, sp
        12b588:	eb6aad79 	bl	1bd6b74 <TPMIterator::$More(void)>
        12b58c:	e3300000 	teq	r0, #0	; 0x0
        12b590:	0a000019 	beq	12b5fc <TNTKNub::DeletePackage(unsigned long)+0xc0>
        12b594:	e1a0000d 	mov	r0, sp
        12b598:	eb6ab18c 	bl	1bd7bd0 <TPMIterator::$PackageName(void)>
        12b59c:	e1a01006 	mov	r1, r6
        12b5a0:	eb6b0c6c 	bl	1bee758 <$Ustrcmp>
        12b5a4:	e3300000 	teq	r0, #0	; 0x0
        12b5a8:	1a00000d 	bne	12b5e4 <TNTKNub::DeletePackage(unsigned long)+0xa8>
        12b5ac:	e24dd004 	sub	sp, sp, #4	; 0x4
        12b5b0:	e28d0004 	add	r0, sp, #4	; 0x4
        12b5b4:	eb6ab183 	bl	1bd7bc8 <TPMIterator::$PackageId(void)>
        12b5b8:	e1a00100 	mov	r0, r0, lsl #2
        12b5bc:	eb6a5ae2 	bl	1bc214c <$AllocateRefHandle(long)>
        12b5c0:	e58d0000 	str	r0, [sp]
        12b5c4:	e1a0100d 	mov	r1, sp
        12b5c8:	e59f0010 	ldr	r0, [pc, #10]	; 12b5e0 <TNTKNub::DeletePackage(unsigned long)+0xa4>
        12b5cc:	eb6b5293 	bl	1c00020 <$NSCallGlobalFn__FRC6RefVarT1>
        12b5d0:	e59d0000 	ldr	r0, [sp]
        12b5d4:	eb6a5ef8 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        12b5d8:	e28dd004 	add	sp, sp, #4	; 0x4
        12b5dc:	ea000006 	b	12b5fc <TNTKNub::DeletePackage(unsigned long)+0xc0>
        12b5e0:	006842a0 	rsbeq	r4, r8, r0, lsr #5
        12b5e4:	e1a0000d 	mov	r0, sp
        12b5e8:	eb6ab16f 	bl	1bd7bac <TPMIterator::$NextPackage(void)>
        12b5ec:	e1a0000d 	mov	r0, sp
        12b5f0:	eb6aad5f 	bl	1bd6b74 <TPMIterator::$More(void)>
        12b5f4:	e3300000 	teq	r0, #0	; 0x0
        12b5f8:	1affffe5 	bne	12b594 <TNTKNub::DeletePackage(unsigned long)+0x58>
        12b5fc:	e1a0000d 	mov	r0, sp
        12b600:	eb6a98af 	bl	1bd18c4 <TPMIterator::$Done(void)>
        12b604:	e1a0000d 	mov	r0, sp
        12b608:	e3a01000 	mov	r1, #0	; 0x0
        12b60c:	eb6a8837 	bl	1bcd6f0 <TPMIterator::$__dt(void)>
        12b610:	e1a00007 	mov	r0, r7
        12b614:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::ReadCommand(unsigned long *, unsigned long *)
 * Address: 0012b618
 */
TNTKNub::ReadCommand(unsigned long *, unsigned long *) {
    /*
        12b618:	e1a0c00d 	mov	ip, sp
        12b61c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        12b620:	e24cb004 	sub	fp, ip, #4	; 0x4
        12b624:	e1a06000 	mov	r6, r0
        12b628:	e1a05001 	mov	r5, r1
        12b62c:	e1a04002 	mov	r4, r2
        12b630:	e3a07000 	mov	r7, #0	; 0x0
        12b634:	e3a00000 	mov	r0, #0	; 0x0
        12b638:	e5810000 	str	r0, [r1]
        12b63c:	e5820000 	str	r0, [r2]
        12b640:	e52d006c 	str	r0, [sp, -#108]!
        12b644:	e28d0008 	add	r0, sp, #8	; 0x8
        12b648:	eb6a1cc9 	bl	1bb2974 <$setjmp>
        12b64c:	e3300000 	teq	r0, #0	; 0x0
        12b650:	1a000017 	bne	12b6b4 <TNTKNub::ReadCommand(unsigned long *, unsigned long *)+0x9c>
        12b654:	e1a0000d 	mov	r0, sp
        12b658:	eb6ad287 	bl	1be007c <$AddExceptionHandler>
        12b65c:	e24dd008 	sub	sp, sp, #8	; 0x8
        12b660:	e1a0200d 	mov	r2, sp
        12b664:	e28d1004 	add	r1, sp, #4	; 0x4
        12b668:	e5960010 	ldr	r0, [r6, #16]	; fField16
        12b66c:	eb66e2fc 	bl	1ae4264 <PNTKInTranslator::$ReadHeader(unsigned long *, unsigned long *)>
        12b670:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        12b674:	e59fc030 	ldr	ip, [pc, #30]	; 12b6ac <TNTKNub::ReadCommand(unsigned long *, unsigned long *)+0x94>
        12b678:	e130000c 	teq	r0, ip
        12b67c:	059d0000 	ldreq	r0, [sp]
        12b680:	059fc028 	ldreq	ip, [pc, #28]	; 12b6b0 <TNTKNub::ReadCommand(unsigned long *, unsigned long *)+0x98>	; fField28
        12b684:	0130000c 	teqeq	r0, ip
        12b688:	13a07e29 	movne	r7, #656	; 0x290
        12b68c:	12477a07 	subne	r7, r7, #28672	; 0x7000
        12b690:	1a000003 	bne	12b6a4 <TNTKNub::ReadCommand(unsigned long *, unsigned long *)+0x8c>
        12b694:	e1a02004 	mov	r2, r4
        12b698:	e1a01005 	mov	r1, r5
        12b69c:	e5b60010 	ldr	r0, [r6, #16]!	; fField16
        12b6a0:	eb66e2ef 	bl	1ae4264 <PNTKInTranslator::$ReadHeader(unsigned long *, unsigned long *)>
        12b6a4:	e28dd008 	add	sp, sp, #8	; 0x8
        12b6a8:	ea000002 	b	12b6b8 <TNTKNub::ReadCommand(unsigned long *, unsigned long *)+0xa0>
        12b6ac:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12b6b0:	6e747020 	cdpvs	0, 7, cr7, cr4, cr0, {1}
        12b6b4:	e59d7064 	ldr	r7, [sp, #100]
        12b6b8:	e1a0000d 	mov	r0, sp
        12b6bc:	eb6ad67d 	bl	1be10b8 <$ExitHandler>
        12b6c0:	e1a00007 	mov	r0, r7
        12b6c4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::SendTextHeader(unsigned long)
 * Address: 0012b6c8
 */
TNTKNub::SendTextHeader(unsigned long) {
    /*
        12b6c8:	e1a0c00d 	mov	ip, sp
        12b6cc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        12b6d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        12b6d4:	e1a04000 	mov	r4, r0
        12b6d8:	e1a05001 	mov	r5, r1
        12b6dc:	e3a06000 	mov	r6, #0	; 0x0
        12b6e0:	e3a00000 	mov	r0, #0	; 0x0
        12b6e4:	e52d006c 	str	r0, [sp, -#108]!
        12b6e8:	e28d0008 	add	r0, sp, #8	; 0x8
        12b6ec:	eb6a1ca0 	bl	1bb2974 <$setjmp>
        12b6f0:	e3300000 	teq	r0, #0	; 0x0
        12b6f4:	1a00000e 	bne	12b734 <TNTKNub::SendTextHeader(unsigned long)+0x6c>
        12b6f8:	e1a0000d 	mov	r0, sp
        12b6fc:	eb6ad25e 	bl	1be007c <$AddExceptionHandler>
        12b700:	e59f7020 	ldr	r7, [pc, #20]	; 12b728 <TNTKNub::SendTextHeader(unsigned long)+0x60>	; fField20
        12b704:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b708:	e59f201c 	ldr	r2, [pc, #1c]	; 12b72c <TNTKNub::SendTextHeader(unsigned long)+0x64>
        12b70c:	e59f101c 	ldr	r1, [pc, #1c]	; 12b730 <TNTKNub::SendTextHeader(unsigned long)+0x68>
        12b710:	eb667767 	bl	1ac94b4 <PNTKOutTranslator::$SendHeader(unsigned long, unsigned long)>
        12b714:	e1a02005 	mov	r2, r5
        12b718:	e1a01007 	mov	r1, r7
        12b71c:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        12b720:	eb66775c 	bl	1ac9498 <PNTKOutTranslator::$SendCommand(unsigned long, unsigned long)>
        12b724:	ea000003 	b	12b738 <TNTKNub::SendTextHeader(unsigned long)+0x70>
        12b728:	74657874 	strvcbt	r7, [r5], -#2164
        12b72c:	6e747020 	cdpvs	0, 7, cr7, cr4, cr0, {1}
        12b730:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12b734:	e59d6064 	ldr	r6, [sp, #100]
        12b738:	e1a0000d 	mov	r0, sp
        12b73c:	eb6ad65d 	bl	1be10b8 <$ExitHandler>
        12b740:	e1a00006 	mov	r0, r6
        12b744:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::SendResult(long)
 * Address: 0012b748
 */
TNTKNub::SendResult(long) {
    /*
        12b748:	e1a0c00d 	mov	ip, sp
        12b74c:	e92dd813 	stmdb	sp!, {r0, r1, r4, fp, ip, lr, pc}
        12b750:	e24cb004 	sub	fp, ip, #4	; 0x4
        12b754:	e3a04000 	mov	r4, #0	; 0x0
        12b758:	e3a00000 	mov	r0, #0	; 0x0
        12b75c:	e52d006c 	str	r0, [sp, -#108]!
        12b760:	e28d0008 	add	r0, sp, #8	; 0x8
        12b764:	eb6a1c82 	bl	1bb2974 <$setjmp>
        12b768:	e3300000 	teq	r0, #0	; 0x0
        12b76c:	1a000017 	bne	12b7d0 <TNTKNub::SendResult(long)+0x88>
        12b770:	e1a0000d 	mov	r0, sp
        12b774:	eb6ad240 	bl	1be007c <$AddExceptionHandler>
        12b778:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        12b77c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12b780:	e59f203c 	ldr	r2, [pc, #3c]	; 12b7c4 <TNTKNub::SendResult(long)+0x7c>
        12b784:	e59f103c 	ldr	r1, [pc, #3c]	; 12b7c8 <TNTKNub::SendResult(long)+0x80>
        12b788:	eb667749 	bl	1ac94b4 <PNTKOutTranslator::$SendHeader(unsigned long, unsigned long)>
        12b78c:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        12b790:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12b794:	e3a02004 	mov	r2, #4	; 0x4
        12b798:	e59f102c 	ldr	r1, [pc, #2c]	; 12b7cc <TNTKNub::SendResult(long)+0x84>
        12b79c:	eb66773d 	bl	1ac9498 <PNTKOutTranslator::$SendCommand(unsigned long, unsigned long)>
        12b7a0:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        12b7a4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12b7a8:	e24b1014 	sub	r1, fp, #20	; 0x14
        12b7ac:	e3a02004 	mov	r2, #4	; 0x4
        12b7b0:	eb667739 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12b7b4:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        12b7b8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12b7bc:	eb666ef1 	bl	1ac7388 <PNTKOutTranslator::$Flush(void)>
        12b7c0:	ea000003 	b	12b7d4 <TNTKNub::SendResult(long)+0x8c>
        12b7c4:	6e747020 	cdpvs	0, 7, cr7, cr4, cr0, {1}
        12b7c8:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12b7cc:	72736c74 	rsbvcs	r6, r3, #29696	; 0x7400
        12b7d0:	e59d4064 	ldr	r4, [sp, #100]
        12b7d4:	e1a0000d 	mov	r0, sp
        12b7d8:	eb6ad636 	bl	1be10b8 <$ExitHandler>
        12b7dc:	e1a00004 	mov	r0, r4
        12b7e0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::SendEOM(void)
 * Address: 0012b7e4
 */
TNTKNub::SendEOM(void) {
    /*
        12b7e4:	e1a0c00d 	mov	ip, sp
        12b7e8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12b7ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        12b7f0:	e1a04000 	mov	r4, r0
        12b7f4:	e3a05000 	mov	r5, #0	; 0x0
        12b7f8:	e3a00000 	mov	r0, #0	; 0x0
        12b7fc:	e52d006c 	str	r0, [sp, -#108]!
        12b800:	e28d0008 	add	r0, sp, #8	; 0x8
        12b804:	eb6a1c5a 	bl	1bb2974 <$setjmp>
        12b808:	e3300000 	teq	r0, #0	; 0x0
        12b80c:	1a00000f 	bne	12b850 <TNTKNub::SendEOM(void)+0x6c>
        12b810:	e1a0000d 	mov	r0, sp
        12b814:	eb6ad218 	bl	1be007c <$AddExceptionHandler>
        12b818:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b81c:	e59f2020 	ldr	r2, [pc, #20]	; 12b844 <TNTKNub::SendEOM(void)+0x60>	; fField20
        12b820:	e59f1020 	ldr	r1, [pc, #20]	; 12b848 <TNTKNub::SendEOM(void)+0x64>	; fField20
        12b824:	eb667722 	bl	1ac94b4 <PNTKOutTranslator::$SendHeader(unsigned long, unsigned long)>
        12b828:	e3a02000 	mov	r2, #0	; 0x0
        12b82c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b830:	e59f1014 	ldr	r1, [pc, #14]	; 12b84c <TNTKNub::SendEOM(void)+0x68>
        12b834:	eb667717 	bl	1ac9498 <PNTKOutTranslator::$SendCommand(unsigned long, unsigned long)>
        12b838:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        12b83c:	eb666ed1 	bl	1ac7388 <PNTKOutTranslator::$Flush(void)>
        12b840:	ea000003 	b	12b854 <TNTKNub::SendEOM(void)+0x70>
        12b844:	6e747020 	cdpvs	0, 7, cr7, cr4, cr0, {1}
        12b848:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12b84c:	74656f6d 	strvcbt	r6, [r5], -#3949
        12b850:	e59d5064 	ldr	r5, [sp, #100]
        12b854:	e1a0000d 	mov	r0, sp
        12b858:	eb6ad616 	bl	1be10b8 <$ExitHandler>
        12b85c:	e1a00005 	mov	r0, r5
        12b860:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::SendRef(unsigned long, RefVar const &)
 * Address: 0012b864
 */
TNTKNub::SendRef(unsigned long, RefVar const &) {
    /*
        12b864:	e1a0c00d 	mov	ip, sp
        12b868:	e92dd817 	stmdb	sp!, {r0, r1, r2, r4, fp, ip, lr, pc}
        12b86c:	e24cb004 	sub	fp, ip, #4	; 0x4
        12b870:	e3a04000 	mov	r4, #0	; 0x0
        12b874:	e3a00000 	mov	r0, #0	; 0x0
        12b878:	e52d006c 	str	r0, [sp, -#108]!
        12b87c:	e28d0008 	add	r0, sp, #8	; 0x8
        12b880:	eb6a1c3b 	bl	1bb2974 <$setjmp>
        12b884:	e3300000 	teq	r0, #0	; 0x0
        12b888:	1a000012 	bne	12b8d8 <TNTKNub::SendRef(unsigned long, RefVar const &)+0x74>
        12b88c:	e1a0000d 	mov	r0, sp
        12b890:	eb6ad1f9 	bl	1be007c <$AddExceptionHandler>
        12b894:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        12b898:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12b89c:	e59f202c 	ldr	r2, [pc, #2c]	; 12b8d0 <TNTKNub::SendRef(unsigned long, RefVar const &)+0x6c>
        12b8a0:	e59f102c 	ldr	r1, [pc, #2c]	; 12b8d4 <TNTKNub::SendRef(unsigned long, RefVar const &)+0x70>
        12b8a4:	eb667702 	bl	1ac94b4 <PNTKOutTranslator::$SendHeader(unsigned long, unsigned long)>
        12b8a8:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        12b8ac:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12b8b0:	e24b1018 	sub	r1, fp, #24	; 0x18
        12b8b4:	e3a02004 	mov	r2, #4	; 0x4
        12b8b8:	eb6676f7 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12b8bc:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        12b8c0:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12b8c4:	e51b1014 	ldr	r1, [fp, -#20]	; fField20
        12b8c8:	eb66625a 	bl	1ac4238 <PNTKOutTranslator::$ConsumeFrameReally(RefVar const &)>
        12b8cc:	ea000002 	b	12b8dc <TNTKNub::SendRef(unsigned long, RefVar const &)+0x78>
        12b8d0:	6e747020 	cdpvs	0, 7, cr7, cr4, cr0, {1}
        12b8d4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12b8d8:	e59d4064 	ldr	r4, [sp, #100]
        12b8dc:	e1a0000d 	mov	r0, sp
        12b8e0:	eb6ad5f4 	bl	1be10b8 <$ExitHandler>
        12b8e4:	e1a00004 	mov	r0, r4
        12b8e8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::EnterBreakLoop(int)
 * Address: 0012b8ec
 */
TNTKNub::EnterBreakLoop(int) {
    /*
        12b8ec:	e1a0c00d 	mov	ip, sp
        12b8f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12b8f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        12b8f8:	e1a04000 	mov	r4, r0
        12b8fc:	e3a05000 	mov	r5, #0	; 0x0
        12b900:	e3a00000 	mov	r0, #0	; 0x0
        12b904:	e52d006c 	str	r0, [sp, -#108]!
        12b908:	e28d0008 	add	r0, sp, #8	; 0x8
        12b90c:	eb6a1c18 	bl	1bb2974 <$setjmp>
        12b910:	e3300000 	teq	r0, #0	; 0x0
        12b914:	1a00000f 	bne	12b958 <TNTKNub::EnterBreakLoop(int)+0x6c>
        12b918:	e1a0000d 	mov	r0, sp
        12b91c:	eb6ad1d6 	bl	1be007c <$AddExceptionHandler>
        12b920:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b924:	e59f2020 	ldr	r2, [pc, #20]	; 12b94c <TNTKNub::EnterBreakLoop(int)+0x60>	; fField20
        12b928:	e59f1020 	ldr	r1, [pc, #20]	; 12b950 <TNTKNub::EnterBreakLoop(int)+0x64>	; fField20
        12b92c:	eb6676e0 	bl	1ac94b4 <PNTKOutTranslator::$SendHeader(unsigned long, unsigned long)>
        12b930:	e3a02000 	mov	r2, #0	; 0x0
        12b934:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b938:	e59f1014 	ldr	r1, [pc, #14]	; 12b954 <TNTKNub::EnterBreakLoop(int)+0x68>
        12b93c:	eb6676d5 	bl	1ac9498 <PNTKOutTranslator::$SendCommand(unsigned long, unsigned long)>
        12b940:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        12b944:	eb666e8f 	bl	1ac7388 <PNTKOutTranslator::$Flush(void)>
        12b948:	ea000003 	b	12b95c <TNTKNub::EnterBreakLoop(int)+0x70>
        12b94c:	6e747020 	cdpvs	0, 7, cr7, cr4, cr0, {1}
        12b950:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12b954:	65657874 	strvsb	r7, [r5, -#2164]!
        12b958:	e59d5064 	ldr	r5, [sp, #100]
        12b95c:	e1a0000d 	mov	r0, sp
        12b960:	eb6ad5d4 	bl	1be10b8 <$ExitHandler>
        12b964:	e1a00005 	mov	r0, r5
        12b968:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::ExitBreakLoop(void)
 * Address: 0012b96c
 */
TNTKNub::ExitBreakLoop(void) {
    /*
        12b96c:	e1a0c00d 	mov	ip, sp
        12b970:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12b974:	e24cb004 	sub	fp, ip, #4	; 0x4
        12b978:	e1a04000 	mov	r4, r0
        12b97c:	e3a05000 	mov	r5, #0	; 0x0
        12b980:	e3a00000 	mov	r0, #0	; 0x0
        12b984:	e52d006c 	str	r0, [sp, -#108]!
        12b988:	e28d0008 	add	r0, sp, #8	; 0x8
        12b98c:	eb6a1bf8 	bl	1bb2974 <$setjmp>
        12b990:	e3300000 	teq	r0, #0	; 0x0
        12b994:	1a00000f 	bne	12b9d8 <TNTKNub::ExitBreakLoop(void)+0x6c>
        12b998:	e1a0000d 	mov	r0, sp
        12b99c:	eb6ad1b6 	bl	1be007c <$AddExceptionHandler>
        12b9a0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b9a4:	e59f2020 	ldr	r2, [pc, #20]	; 12b9cc <TNTKNub::ExitBreakLoop(void)+0x60>	; fField20
        12b9a8:	e59f1020 	ldr	r1, [pc, #20]	; 12b9d0 <TNTKNub::ExitBreakLoop(void)+0x64>	; fField20
        12b9ac:	eb6676c0 	bl	1ac94b4 <PNTKOutTranslator::$SendHeader(unsigned long, unsigned long)>
        12b9b0:	e3a02000 	mov	r2, #0	; 0x0
        12b9b4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12b9b8:	e59f1014 	ldr	r1, [pc, #14]	; 12b9d4 <TNTKNub::ExitBreakLoop(void)+0x68>
        12b9bc:	eb6676b5 	bl	1ac9498 <PNTKOutTranslator::$SendCommand(unsigned long, unsigned long)>
        12b9c0:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        12b9c4:	eb666e6f 	bl	1ac7388 <PNTKOutTranslator::$Flush(void)>
        12b9c8:	ea000003 	b	12b9dc <TNTKNub::ExitBreakLoop(void)+0x70>
        12b9cc:	6e747020 	cdpvs	0, 7, cr7, cr4, cr0, {1}
        12b9d0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12b9d4:	62657874 	rsbvs	r7, r5, #7602176	; 0x740000
        12b9d8:	e59d5064 	ldr	r5, [sp, #100]
        12b9dc:	e1a0000d 	mov	r0, sp
        12b9e0:	eb6ad5b4 	bl	1be10b8 <$ExitHandler>
        12b9e4:	e1a00005 	mov	r0, r5
        12b9e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::ExceptionNotify(Exception *)
 * Address: 0012ba50
 */
TNTKNub::ExceptionNotify(Exception *) {
    /*
        12ba50:	e1a0c00d 	mov	ip, sp
        12ba54:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12ba58:	e24cb004 	sub	fp, ip, #4	; 0x4
        12ba5c:	e1a05000 	mov	r5, r0
        12ba60:	e1a04001 	mov	r4, r1
        12ba64:	e59f004c 	ldr	r0, [pc, #4c]	; 12bab8 <TNTKNub::ExceptionNotify(Exception *)+0x68>	; fField4
        12ba68:	e5901000 	ldr	r1, [r0]
        12ba6c:	e5940000 	ldr	r0, [r4]
        12ba70:	eb6addc7 	bl	1be3194 <$Subexception>
        12ba74:	e3300000 	teq	r0, #0	; 0x0
        12ba78:	0a000003 	beq	12ba8c <TNTKNub::ExceptionNotify(Exception *)+0x3c>
        12ba7c:	e1a00005 	mov	r0, r5
        12ba80:	e8940006 	ldmia	r4, {r1, r2}
        12ba84:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        12ba88:	ea667686 	b	1ac94a8 <TNTKNub::$SendExceptionData(char *, char *)>
        12ba8c:	e59f0028 	ldr	r0, [pc, #28]	; 12babc <TNTKNub::ExceptionNotify(Exception *)+0x6c>	; fField28
        12ba90:	e5901000 	ldr	r1, [r0]
        12ba94:	e5940000 	ldr	r0, [r4]
        12ba98:	eb6addbd 	bl	1be3194 <$Subexception>
        12ba9c:	e3300000 	teq	r0, #0	; 0x0
        12baa0:	e1a00005 	mov	r0, r5
        12baa4:	e8940006 	ldmia	r4, {r1, r2}
        12baa8:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        12baac:	0a66767e 	beq	1ac94ac <TNTKNub::$SendExceptionData(char *, long)>
        12bab0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        12bab4:	1a66767a 	bne	1ac94a4 <TNTKNub::$SendExceptionData(char *, RefVar const &)>
        12bab8:	003712ac 	eoreqs	r1, r7, ip, lsr #5
        12babc:	00380880 	eoreqs	r0, r8, r0, lsl #17
    */
}

/**
 * Symbol: TNTKNub::SendExceptionHeader(unsigned long)
 * Address: 0012bac0
 */
TNTKNub::SendExceptionHeader(unsigned long) {
    /*
        12bac0:	e1a0c00d 	mov	ip, sp
        12bac4:	e92dd813 	stmdb	sp!, {r0, r1, r4, fp, ip, lr, pc}
        12bac8:	e24cb004 	sub	fp, ip, #4	; 0x4
        12bacc:	e3a04000 	mov	r4, #0	; 0x0
        12bad0:	e3a00000 	mov	r0, #0	; 0x0
        12bad4:	e52d006c 	str	r0, [sp, -#108]!
        12bad8:	e28d0008 	add	r0, sp, #8	; 0x8
        12badc:	eb6a1ba4 	bl	1bb2974 <$setjmp>
        12bae0:	e3300000 	teq	r0, #0	; 0x0
        12bae4:	1a00000e 	bne	12bb24 <TNTKNub::SendExceptionHeader(unsigned long)+0x64>
        12bae8:	e1a0000d 	mov	r0, sp
        12baec:	eb6ad162 	bl	1be007c <$AddExceptionHandler>
        12baf0:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        12baf4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12baf8:	e59f201c 	ldr	r2, [pc, #1c]	; 12bb1c <TNTKNub::SendExceptionHeader(unsigned long)+0x5c>
        12bafc:	e59f101c 	ldr	r1, [pc, #1c]	; 12bb20 <TNTKNub::SendExceptionHeader(unsigned long)+0x60>
        12bb00:	eb66766b 	bl	1ac94b4 <PNTKOutTranslator::$SendHeader(unsigned long, unsigned long)>
        12bb04:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        12bb08:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12bb0c:	e24b1014 	sub	r1, fp, #20	; 0x14
        12bb10:	e3a02004 	mov	r2, #4	; 0x4
        12bb14:	eb667660 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12bb18:	ea000002 	b	12bb28 <TNTKNub::SendExceptionHeader(unsigned long)+0x68>
        12bb1c:	6e747020 	cdpvs	0, 7, cr7, cr4, cr0, {1}
        12bb20:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12bb24:	e59d4064 	ldr	r4, [sp, #100]
        12bb28:	e1a0000d 	mov	r0, sp
        12bb2c:	eb6ad561 	bl	1be10b8 <$ExitHandler>
        12bb30:	e1a00004 	mov	r0, r4
        12bb34:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::SendExceptionData(char *, RefVar const &)
 * Address: 0012bb38
 */
TNTKNub::SendExceptionData(char *, RefVar const &) {
    /*
        12bb38:	e1a0c00d 	mov	ip, sp
        12bb3c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        12bb40:	e24cb004 	sub	fp, ip, #4	; 0x4
        12bb44:	e1a04000 	mov	r4, r0
        12bb48:	e1a06001 	mov	r6, r1
        12bb4c:	e1a05002 	mov	r5, r2
        12bb50:	e59f103c 	ldr	r1, [pc, #3c]	; 12bb94 <TNTKNub::SendExceptionData(char *, RefVar const &)+0x5c>
        12bb54:	eb667655 	bl	1ac94b0 <TNTKNub::$SendExceptionHeader(unsigned long)>
        12bb58:	e1b07000 	movs	r7, r0
        12bb5c:	1a000011 	bne	12bba8 <TNTKNub::SendExceptionData(char *, RefVar const &)+0x70>
        12bb60:	e3a00000 	mov	r0, #0	; 0x0
        12bb64:	e52d006c 	str	r0, [sp, -#108]!
        12bb68:	e28d0008 	add	r0, sp, #8	; 0x8
        12bb6c:	eb6a1b80 	bl	1bb2974 <$setjmp>
        12bb70:	e3300000 	teq	r0, #0	; 0x0
        12bb74:	1a000007 	bne	12bb98 <TNTKNub::SendExceptionData(char *, RefVar const &)+0x60>
        12bb78:	e1a0000d 	mov	r0, sp
        12bb7c:	eb6ad13e 	bl	1be007c <$AddExceptionHandler>
        12bb80:	e1a02006 	mov	r2, r6
        12bb84:	e1a01005 	mov	r1, r5
        12bb88:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        12bb8c:	eb6661a8 	bl	1ac4234 <PNTKOutTranslator::$ConsumeExceptionFrame(RefVar const &, char *)>
        12bb90:	ea000001 	b	12bb9c <TNTKNub::SendExceptionData(char *, RefVar const &)+0x64>
        12bb94:	65726566 	ldrvsb	r6, [r2, -#1382]!
        12bb98:	e59d7064 	ldr	r7, [sp, #100]
        12bb9c:	e1a0000d 	mov	r0, sp
        12bba0:	eb6ad544 	bl	1be10b8 <$ExitHandler>
        12bba4:	e28dd06c 	add	sp, sp, #108	; 0x6c
        12bba8:	e1a00007 	mov	r0, r7
        12bbac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::SendExceptionData(char *, char *)
 * Address: 0012bbb0
 */
TNTKNub::SendExceptionData(char *, char *) {
    /*
        12bbb0:	e1a0c00d 	mov	ip, sp
        12bbb4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        12bbb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        12bbbc:	e1a04000 	mov	r4, r0
        12bbc0:	e1a06001 	mov	r6, r1
        12bbc4:	e1a05002 	mov	r5, r2
        12bbc8:	e59f10b8 	ldr	r1, [pc, #b8]	; 12bc88 <TNTKNub::SendExceptionData(char *, char *)+0xd8>
        12bbcc:	eb667637 	bl	1ac94b0 <TNTKNub::$SendExceptionHeader(unsigned long)>
        12bbd0:	e1b07000 	movs	r7, r0
        12bbd4:	1a000030 	bne	12bc9c <TNTKNub::SendExceptionData(char *, char *)+0xec>
        12bbd8:	e3a00000 	mov	r0, #0	; 0x0
        12bbdc:	e52d006c 	str	r0, [sp, -#108]!
        12bbe0:	e28d0008 	add	r0, sp, #8	; 0x8
        12bbe4:	eb6a1b62 	bl	1bb2974 <$setjmp>
        12bbe8:	e3300000 	teq	r0, #0	; 0x0
        12bbec:	1a000026 	bne	12bc8c <TNTKNub::SendExceptionData(char *, char *)+0xdc>
        12bbf0:	e1a0000d 	mov	r0, sp
        12bbf4:	eb6ad120 	bl	1be007c <$AddExceptionHandler>
        12bbf8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        12bbfc:	e1a00006 	mov	r0, r6
        12bc00:	eb6a27aa 	bl	1bb5ab0 <$strlen>
        12bc04:	e2800001 	add	r0, r0, #1	; 0x1
        12bc08:	e58d0008 	str	r0, [sp, #8]	; fField8
        12bc0c:	e1a00005 	mov	r0, r5
        12bc10:	eb6a27a6 	bl	1bb5ab0 <$strlen>
        12bc14:	e2800001 	add	r0, r0, #1	; 0x1
        12bc18:	e58d0004 	str	r0, [sp, #4]	; fField4
        12bc1c:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        12bc20:	e0810000 	add	r0, r1, r0
        12bc24:	e58d0000 	str	r0, [sp]
        12bc28:	e1a0100d 	mov	r1, sp
        12bc2c:	e3a02004 	mov	r2, #4	; 0x4
        12bc30:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12bc34:	eb667618 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12bc38:	e28d1008 	add	r1, sp, #8	; 0x8
        12bc3c:	e3a02004 	mov	r2, #4	; 0x4
        12bc40:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12bc44:	eb667614 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12bc48:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12bc4c:	e1a01006 	mov	r1, r6
        12bc50:	e59d2008 	ldr	r2, [sp, #8]	; fField8
        12bc54:	eb667610 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12bc58:	e28d1004 	add	r1, sp, #4	; 0x4
        12bc5c:	e3a02004 	mov	r2, #4	; 0x4
        12bc60:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12bc64:	eb66760c 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12bc68:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12bc6c:	e1a01005 	mov	r1, r5
        12bc70:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        12bc74:	eb667608 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12bc78:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        12bc7c:	eb666dc1 	bl	1ac7388 <PNTKOutTranslator::$Flush(void)>
        12bc80:	e28dd00c 	add	sp, sp, #12	; 0xc
        12bc84:	ea000001 	b	12bc90 <TNTKNub::SendExceptionData(char *, char *)+0xe0>
        12bc88:	65737472 	ldrvsb	r7, [r3, -#1138]!
        12bc8c:	e59d7064 	ldr	r7, [sp, #100]
        12bc90:	e1a0000d 	mov	r0, sp
        12bc94:	eb6ad507 	bl	1be10b8 <$ExitHandler>
        12bc98:	e28dd06c 	add	sp, sp, #108	; 0x6c
        12bc9c:	e1a00007 	mov	r0, r7
        12bca0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKNub::SendExceptionData(char *, long)
 * Address: 0012bca4
 */
TNTKNub::SendExceptionData(char *, long) {
    /*
        12bca4:	e1a0c00d 	mov	ip, sp
        12bca8:	e92dd817 	stmdb	sp!, {r0, r1, r2, r4, fp, ip, lr, pc}
        12bcac:	e24cb004 	sub	fp, ip, #4	; 0x4
        12bcb0:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        12bcb4:	e59f10a8 	ldr	r1, [pc, #a8]	; 12bd64 <TNTKNub::SendExceptionData(char *, long)+0xc0>
        12bcb8:	eb6675fc 	bl	1ac94b0 <TNTKNub::$SendExceptionHeader(unsigned long)>
        12bcbc:	e1b04000 	movs	r4, r0
        12bcc0:	1a00002c 	bne	12bd78 <TNTKNub::SendExceptionData(char *, long)+0xd4>
        12bcc4:	e3a00000 	mov	r0, #0	; 0x0
        12bcc8:	e52d006c 	str	r0, [sp, -#108]!
        12bccc:	e28d0008 	add	r0, sp, #8	; 0x8
        12bcd0:	eb6a1b27 	bl	1bb2974 <$setjmp>
        12bcd4:	e3300000 	teq	r0, #0	; 0x0
        12bcd8:	1a000022 	bne	12bd68 <TNTKNub::SendExceptionData(char *, long)+0xc4>
        12bcdc:	e1a0000d 	mov	r0, sp
        12bce0:	eb6ad0e5 	bl	1be007c <$AddExceptionHandler>
        12bce4:	e24dd008 	sub	sp, sp, #8	; 0x8
        12bce8:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
        12bcec:	eb6a276f 	bl	1bb5ab0 <$strlen>
        12bcf0:	e2800001 	add	r0, r0, #1	; 0x1
        12bcf4:	e58d0004 	str	r0, [sp, #4]	; fField4
        12bcf8:	e2800004 	add	r0, r0, #4	; 0x4
        12bcfc:	e58d0000 	str	r0, [sp]
        12bd00:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        12bd04:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12bd08:	e1a0100d 	mov	r1, sp
        12bd0c:	e3a02004 	mov	r2, #4	; 0x4
        12bd10:	eb6675e1 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12bd14:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        12bd18:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12bd1c:	e28d1004 	add	r1, sp, #4	; 0x4
        12bd20:	e3a02004 	mov	r2, #4	; 0x4
        12bd24:	eb6675dc 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12bd28:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        12bd2c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12bd30:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        12bd34:	e51b1018 	ldr	r1, [fp, -#24]	; fField24
        12bd38:	eb6675d7 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12bd3c:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        12bd40:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12bd44:	e24b1014 	sub	r1, fp, #20	; 0x14
        12bd48:	e3a02004 	mov	r2, #4	; 0x4
        12bd4c:	eb6675d2 	bl	1ac949c <PNTKOutTranslator::$SendData(void *, long)>
        12bd50:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        12bd54:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12bd58:	eb666d8a 	bl	1ac7388 <PNTKOutTranslator::$Flush(void)>
        12bd5c:	e28dd008 	add	sp, sp, #8	; 0x8
        12bd60:	ea000001 	b	12bd6c <TNTKNub::SendExceptionData(char *, long)+0xc8>
        12bd64:	65657272 	strvsb	r7, [r5, -#626]!
        12bd68:	e59d4064 	ldr	r4, [sp, #100]
        12bd6c:	e1a0000d 	mov	r0, sp
        12bd70:	eb6ad4d0 	bl	1be10b8 <$ExitHandler>
        12bd74:	e28dd06c 	add	sp, sp, #108	; 0x6c
        12bd78:	e1a00004 	mov	r0, r4
        12bd7c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

