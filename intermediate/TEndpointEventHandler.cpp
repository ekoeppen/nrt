#include "DDKIncludes/CommAPI/Endpoint.h"

/**
 * Symbol: TEndpointEventHandler::CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned char)
 * Address: 000ac670
 */
TEndpointEventHandler::CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned char) {
    /*
         ac670:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::CallServiceBlocking(unsigned long, TAEvent *, long, TAEvent *, long, unsigned long)
 * Address: 000ac674
 */
TEndpointEventHandler::CallServiceBlocking(unsigned long, TAEvent *, long, TAEvent *, long, unsigned long) {
    /*
         ac674:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::__dt(void)
 * Address: 000ac678
 */
TEndpointEventHandler::~TEndpointEventHandler(void) {
    /*
         ac678:	e1a0c00d 	mov	ip, sp
         ac67c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ac680:	e24cb004 	sub	fp, ip, #4	; 0x4
         ac684:	e1a04000 	mov	r4, r0
         ac688:	e1a05001 	mov	r5, r1
         ac68c:	e59f0038 	ldr	r0, [pc, #38]	; ac6cc <TEndpointEventHandler::__dt(void)+0x54>
         ac690:	e5840000 	str	r0, [r4]
         ac694:	e2840020 	add	r0, r4, #32	; 0x20
         ac698:	e3a01000 	mov	r1, #0	; 0x0
         ac69c:	eb6c1070 	bl	1bb0864 <TPseudoSyncState::$__dt(void)>
         ac6a0:	e2840018 	add	r0, r4, #24	; 0x18
         ac6a4:	e3a01000 	mov	r1, #0	; 0x0
         ac6a8:	eb6c881d 	bl	1bce724 <TUObject::$__dt(void)>
         ac6ac:	e1a00004 	mov	r0, r4
         ac6b0:	e3a01000 	mov	r1, #0	; 0x0
         ac6b4:	eb6cdeed 	bl	1be4270 <TAEventHandler::$__dt(void)>
         ac6b8:	e3150001 	tst	r5, #1	; 0x1
         ac6bc:	11a00004 	movne	r0, r4
         ac6c0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         ac6c4:	1a6c8405 	bne	1bcd6e0 <$__dl(void *)>
         ac6c8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         ac6cc:	0001f0d4 	ldreqd	pc, [r1], -r4
    */
}

/**
 * Symbol: TEndpointEventHandler::Init(unsigned long, unsigned long, unsigned long)
 * Address: 000ac6d0
 */
TEndpointEventHandler::Init(unsigned long, unsigned long, unsigned long) {
    /*
         ac6d0:	e1a0c00d 	mov	ip, sp
         ac6d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ac6d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         ac6dc:	e1a04000 	mov	r4, r0
         ac6e0:	e1a05001 	mov	r5, r1
         ac6e4:	e1a01002 	mov	r1, r2
         ac6e8:	e1a02003 	mov	r2, r3
         ac6ec:	eb6cf36f 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
         ac6f0:	e3300000 	teq	r0, #0	; 0x0
         ac6f4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         ac6f8:	e2840018 	add	r0, r4, #24	; 0x18
         ac6fc:	e1a01005 	mov	r1, r5
         ac700:	eb6c9050 	bl	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         ac704:	e2840020 	add	r0, r4, #32	; 0x20
         ac708:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         ac70c:	ea6c03f3 	b	1bad6e0 <TPseudoSyncState::$Init(void)>
    */
}

/**
 * Symbol: TEndpointEventHandler::CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)
 * Address: 000ac710
 */
TEndpointEventHandler::CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char) {
    /*
         ac710:	e1a0c00d 	mov	ip, sp
         ac714:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac718:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ac71c:	e24cb014 	sub	fp, ip, #20	; 0x14
         ac720:	e1a04000 	mov	r4, r0
         ac724:	e59b0028 	ldr	r0, [fp, #40]	; fField40
         ac728:	e31000ff 	tst	r0, #255	; 0xff
         ac72c:	e2841018 	add	r1, r4, #24	; 0x18
         ac730:	e28ba020 	add	sl, fp, #32	; 0x20
         ac734:	e89a0440 	ldmia	sl, {r6, sl}
         ac738:	e59b701c 	ldr	r7, [fp, #28]
         ac73c:	e59b8018 	ldr	r8, [fp, #24]	; fField24
         ac740:	e59b9014 	ldr	r9, [fp, #20]	; fField20
         ac744:	e52d1004 	str	r1, [sp, -#4]!	; TEndpointEventHandler
         ac748:	0a000027 	beq	ac7ec <TEndpointEventHandler::CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xdc>
         ac74c:	e24dd004 	sub	sp, sp, #4	; 0x4
         ac750:	eb6c9c9f 	bl	1bd39d4 <$GetGlobals>
         ac754:	e3a01000 	mov	r1, #0	; 0x0
         ac758:	eb6c03d4 	bl	1bad6b0 <TForkWorld::$Fork(TForkWorld *)>
         ac75c:	e1b05000 	movs	r5, r0
         ac760:	1a00001f 	bne	ac7e4 <TEndpointEventHandler::CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xd4>
         ac764:	eb6c9c9a 	bl	1bd39d4 <$GetGlobals>
         ac768:	eb6c07fc 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
         ac76c:	e1b05000 	movs	r5, r0
         ac770:	1a00001b 	bne	ac7e4 <TEndpointEventHandler::CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xd4>
         ac774:	e1a00008 	mov	r0, r8
         ac778:	e1a01007 	mov	r1, r7
         ac77c:	e1a02006 	mov	r2, r6
         ac780:	e59dc004 	ldr	ip, [sp, #4]	; TEndpointEventHandler
         ac784:	e3a04000 	mov	r4, #0	; 0x0
         ac788:	e3a03000 	mov	r3, #0	; 0x0
         ac78c:	e59be008 	ldr	lr, [fp, #8]
         ac790:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac794:	e1a03004 	mov	r3, r4
         ac798:	e3a02000 	mov	r2, #0	; 0x0
         ac79c:	e1a0100e 	mov	r1, lr
         ac7a0:	e1a00009 	mov	r0, r9
         ac7a4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac7a8:	e59b3010 	ldr	r3, [fp, #16]
         ac7ac:	e92d0008 	stmdb	sp!, {r3}
         ac7b0:	e28d3024 	add	r3, sp, #36	; 0x24
         ac7b4:	e1a0000c 	mov	r0, ip
         ac7b8:	e3a02002 	mov	r2, #2	; 0x2
         ac7bc:	e3a01001 	mov	r1, #1	; 0x1
         ac7c0:	eb6cb961 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         ac7c4:	e28dd024 	add	sp, sp, #36	; 0x24
         ac7c8:	e1a05000 	mov	r5, r0
         ac7cc:	eb6c9c80 	bl	1bd39d4 <$GetGlobals>
         ac7d0:	eb6bfb87 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
         ac7d4:	e3350000 	teq	r5, #0	; 0x0
         ac7d8:	1a000001 	bne	ac7e4 <TEndpointEventHandler::CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xd4>
         ac7dc:	e3300000 	teq	r0, #0	; 0x0
         ac7e0:	11a05000 	movne	r5, r0
         ac7e4:	e28dd004 	add	sp, sp, #4	; 0x4
         ac7e8:	ea00001f 	b	ac86c <TEndpointEventHandler::CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0x15c>
         ac7ec:	eb6c9c78 	bl	1bd39d4 <$GetGlobals>
         ac7f0:	eb6cef11 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         ac7f4:	e5901000 	ldr	r1, [r0]
         ac7f8:	e59b000c 	ldr	r0, [fp, #12]
         ac7fc:	eb6cbd63 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
         ac800:	e1b05000 	movs	r5, r0
         ac804:	1a000018 	bne	ac86c <TEndpointEventHandler::CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0x15c>
         ac808:	e1a0200a 	mov	r2, sl
         ac80c:	e1a01006 	mov	r1, r6
         ac810:	e1a00004 	mov	r0, r4
         ac814:	eb656ae8 	bl	1a073bc <TEndpointEventHandler::$AddTimer(unsigned long, unsigned long)>
         ac818:	e1b05000 	movs	r5, r0
         ac81c:	1a000012 	bne	ac86c <TEndpointEventHandler::CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0x15c>
         ac820:	e3a03000 	mov	r3, #0	; 0x0
         ac824:	e3a01000 	mov	r1, #0	; 0x0
         ac828:	e3a00000 	mov	r0, #0	; 0x0
         ac82c:	e59b2008 	ldr	r2, [fp, #8]
         ac830:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac834:	e1a03007 	mov	r3, r7
         ac838:	e1a02008 	mov	r2, r8
         ac83c:	e1a01009 	mov	r1, r9
         ac840:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         ac844:	e59d101c 	ldr	r1, [sp, #28]
         ac848:	e1a00004 	mov	r0, r4
         ac84c:	e28b300c 	add	r3, fp, #12	; 0xc
         ac850:	e893000c 	ldmia	r3, {r2, r3}
         ac854:	eb6d0394 	bl	1bed6ac <$SendRPC(TAEventHandler *, TUPort *, TUAsyncMessage *, void *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *, unsigned long, unsigned char)>
         ac858:	e28dd01c 	add	sp, sp, #28	; 0x1c
         ac85c:	e1b05000 	movs	r5, r0
         ac860:	11a0100a 	movne	r1, sl
         ac864:	11a00004 	movne	r0, r4
         ac868:	1b656eeb 	blne	1a0841c <TEndpointEventHandler::$KillTimer(unsigned long)>
         ac86c:	e1a00005 	mov	r0, r5
         ac870:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpointEventHandler::CallServiceNoForks(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)
 * Address: 000ac874
 */
TEndpointEventHandler::CallServiceNoForks(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char) {
    /*
         ac874:	e1a0c00d 	mov	ip, sp
         ac878:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac87c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ac880:	e24cb014 	sub	fp, ip, #20	; 0x14
         ac884:	e1a04000 	mov	r4, r0
         ac888:	e59b0028 	ldr	r0, [fp, #40]	; fField40
         ac88c:	e31000ff 	tst	r0, #255	; 0xff
         ac890:	e2841018 	add	r1, r4, #24	; 0x18
         ac894:	e28ba020 	add	sl, fp, #32	; 0x20
         ac898:	e89a0440 	ldmia	sl, {r6, sl}
         ac89c:	e59b701c 	ldr	r7, [fp, #28]
         ac8a0:	e59b8018 	ldr	r8, [fp, #24]	; fField24
         ac8a4:	e59b9014 	ldr	r9, [fp, #20]	; fField20
         ac8a8:	e52d1004 	str	r1, [sp, -#4]!	; TEndpointEventHandler
         ac8ac:	0a000022 	beq	ac93c <TEndpointEventHandler::CallServiceNoForks(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xc8>
         ac8b0:	e24dd004 	sub	sp, sp, #4	; 0x4
         ac8b4:	eb6c9c46 	bl	1bd39d4 <$GetGlobals>
         ac8b8:	eb6c07a8 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
         ac8bc:	e1b05000 	movs	r5, r0
         ac8c0:	1a00001b 	bne	ac934 <TEndpointEventHandler::CallServiceNoForks(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xc0>
         ac8c4:	e1a00008 	mov	r0, r8
         ac8c8:	e1a01007 	mov	r1, r7
         ac8cc:	e1a02006 	mov	r2, r6
         ac8d0:	e59dc004 	ldr	ip, [sp, #4]	; TEndpointEventHandler
         ac8d4:	e3a04000 	mov	r4, #0	; 0x0
         ac8d8:	e3a03000 	mov	r3, #0	; 0x0
         ac8dc:	e59be008 	ldr	lr, [fp, #8]
         ac8e0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac8e4:	e1a03004 	mov	r3, r4
         ac8e8:	e3a02000 	mov	r2, #0	; 0x0
         ac8ec:	e1a0100e 	mov	r1, lr
         ac8f0:	e1a00009 	mov	r0, r9
         ac8f4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac8f8:	e59b3010 	ldr	r3, [fp, #16]
         ac8fc:	e92d0008 	stmdb	sp!, {r3}
         ac900:	e28d3024 	add	r3, sp, #36	; 0x24
         ac904:	e1a0000c 	mov	r0, ip
         ac908:	e3a02002 	mov	r2, #2	; 0x2
         ac90c:	e3a01001 	mov	r1, #1	; 0x1
         ac910:	eb6cb90d 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         ac914:	e28dd024 	add	sp, sp, #36	; 0x24
         ac918:	e1a05000 	mov	r5, r0
         ac91c:	eb6c9c2c 	bl	1bd39d4 <$GetGlobals>
         ac920:	eb6bfb33 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
         ac924:	e3350000 	teq	r5, #0	; 0x0
         ac928:	1a000001 	bne	ac934 <TEndpointEventHandler::CallServiceNoForks(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xc0>
         ac92c:	e3300000 	teq	r0, #0	; 0x0
         ac930:	11a05000 	movne	r5, r0
         ac934:	e28dd004 	add	sp, sp, #4	; 0x4
         ac938:	ea00001f 	b	ac9bc <TEndpointEventHandler::CallServiceNoForks(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0x148>
         ac93c:	eb6c9c24 	bl	1bd39d4 <$GetGlobals>
         ac940:	eb6ceebd 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         ac944:	e5901000 	ldr	r1, [r0]
         ac948:	e59b000c 	ldr	r0, [fp, #12]
         ac94c:	eb6cbd0f 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
         ac950:	e1b05000 	movs	r5, r0
         ac954:	1a000018 	bne	ac9bc <TEndpointEventHandler::CallServiceNoForks(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0x148>
         ac958:	e1a0200a 	mov	r2, sl
         ac95c:	e1a01006 	mov	r1, r6
         ac960:	e1a00004 	mov	r0, r4
         ac964:	eb656a94 	bl	1a073bc <TEndpointEventHandler::$AddTimer(unsigned long, unsigned long)>
         ac968:	e1b05000 	movs	r5, r0
         ac96c:	1a000012 	bne	ac9bc <TEndpointEventHandler::CallServiceNoForks(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0x148>
         ac970:	e3a03000 	mov	r3, #0	; 0x0
         ac974:	e3a01000 	mov	r1, #0	; 0x0
         ac978:	e3a00000 	mov	r0, #0	; 0x0
         ac97c:	e59b2008 	ldr	r2, [fp, #8]
         ac980:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ac984:	e1a03007 	mov	r3, r7
         ac988:	e1a02008 	mov	r2, r8
         ac98c:	e1a01009 	mov	r1, r9
         ac990:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         ac994:	e59d101c 	ldr	r1, [sp, #28]
         ac998:	e1a00004 	mov	r0, r4
         ac99c:	e28b300c 	add	r3, fp, #12	; 0xc
         ac9a0:	e893000c 	ldmia	r3, {r2, r3}
         ac9a4:	eb6d0340 	bl	1bed6ac <$SendRPC(TAEventHandler *, TUPort *, TUAsyncMessage *, void *, unsigned long, unsigned long, unsigned long, unsigned long, TTime *, unsigned long, unsigned char)>
         ac9a8:	e28dd01c 	add	sp, sp, #28	; 0x1c
         ac9ac:	e1b05000 	movs	r5, r0
         ac9b0:	11a0100a 	movne	r1, sl
         ac9b4:	11a00004 	movne	r0, r4
         ac9b8:	1b656e97 	blne	1a0841c <TEndpointEventHandler::$KillTimer(unsigned long)>
         ac9bc:	e1a00005 	mov	r0, r5
         ac9c0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpointEventHandler::UseForks(unsigned char)
 * Address: 000ac9c4
 */
TEndpointEventHandler::UseForks(unsigned char) {
    /*
         ac9c4:	e3a00001 	mov	r0, #1	; 0x1
         ac9c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::Block(unsigned long)
 * Address: 000ac9cc
 */
TEndpointEventHandler::Block(unsigned long) {
    /*
         ac9cc:	e1a0c00d 	mov	ip, sp
         ac9d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ac9d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         ac9d8:	e1a04000 	mov	r4, r0
         ac9dc:	e5d00028 	ldrb	r0, [r0, #40]	; fField40
         ac9e0:	e3300000 	teq	r0, #0	; 0x0
         ac9e4:	13a00042 	movne	r0, #66	; 0x42
         ac9e8:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
         ac9ec:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         ac9f0:	e3a00001 	mov	r0, #1	; 0x1
         ac9f4:	e5c40028 	strb	r0, [r4, #40]	; fField40
         ac9f8:	e2840020 	add	r0, r4, #32	; 0x20
         ac9fc:	eb6bff00 	bl	1bac604 <TPseudoSyncState::$Block(unsigned long)>
         aca00:	e3a01000 	mov	r1, #0	; 0x0
         aca04:	e5c41028 	strb	r1, [r4, #40]	; fField40
         aca08:	e3300000 	teq	r0, #0	; 0x0
         aca0c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         aca10:	e5d42029 	ldrb	r2, [r4, #41]	; fField41
         aca14:	e3320000 	teq	r2, #0	; 0x0
         aca18:	15c41029 	strneb	r1, [r4, #41]	; fField41
         aca1c:	13a000c9 	movne	r0, #201	; 0xc9
         aca20:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         aca24:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpointEventHandler::Unblock(void)
 * Address: 000aca28
 */
TEndpointEventHandler::Unblock(void) {
    /*
         aca28:	e5d01028 	ldrb	r1, [r0, #40]	; fField40
         aca2c:	e3310000 	teq	r1, #0	; 0x0
         aca30:	12800020 	addne	r0, r0, #32	; 0x20
         aca34:	1a6c0b69 	bne	1baf7e0 <TPseudoSyncState::$Unblock(void)>
         aca38:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::AETestEvent(TAEvent *)
 * Address: 000aca3c
 */
TEndpointEventHandler::AETestEvent(TAEvent *) {
    /*
         aca3c:	e591100c 	ldr	r1, [r1, #12]
         aca40:	e1310000 	teq	r1, r0
         aca44:	13a00000 	movne	r0, #0	; 0x0
         aca48:	03a00001 	moveq	r0, #1	; 0x1
         aca4c:	e20000ff 	and	r0, r0, #255	; 0xff
         aca50:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 000aca54
 */
TEndpointEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         aca54:	e1a0c00d 	mov	ip, sp
         aca58:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         aca5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         aca60:	e1a04000 	mov	r4, r0
         aca64:	e1a06001 	mov	r6, r1
         aca68:	e1a07002 	mov	r7, r2
         aca6c:	e1a05003 	mov	r5, r3
         aca70:	e5d0002a 	ldrb	r0, [r0, #42]
         aca74:	e3300000 	teq	r0, #0	; 0x0
         aca78:	0a000007 	beq	aca9c <TEndpointEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x48>
         aca7c:	e5950008 	ldr	r0, [r5, #8]
         aca80:	e59fc010 	ldr	ip, [pc, #10]	; aca98 <TEndpointEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x44>
         aca84:	e130000c 	teq	r0, ip
         aca88:	1a000003 	bne	aca9c <TEndpointEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x48>
         aca8c:	e1a00004 	mov	r0, r4
         aca90:	eb6c282d 	bl	1bb6b4c <TEndpointEventHandler::$Abort(void)>
         aca94:	ea000007 	b	acab8 <TEndpointEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x64>
         aca98:	61627274 	cmnvs	r2, r4, ror r2
         aca9c:	eb6c9bcc 	bl	1bd39d4 <$GetGlobals>
         acaa0:	eb6ce215 	bl	1be52fc <TAppWorld::$AEGetMsgType(void)>
         acaa4:	e1a01000 	mov	r1, r0
         acaa8:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         acaac:	e1a02005 	mov	r2, r5
         acab0:	e5973000 	ldr	r3, [r7]
         acab4:	eb6c306b 	bl	1bb8c68 <TEndpoint::$HandleEvent(unsigned long, TAEvent *, unsigned long)>
         acab8:	e3360000 	teq	r6, #0	; 0x0
         acabc:	15b60004 	ldrne	r0, [r6, #4]!	; TEndpointEventHandler
         acac0:	13300000 	teqne	r0, #0	; 0x0
         acac4:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         acac8:	eb6c9bc1 	bl	1bd39d4 <$GetGlobals>
         acacc:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         acad0:	ea6ce60f 	b	1be6314 <TAppWorld::$AEReplyImmed(void)>
    */
}

/**
 * Symbol: TEndpointEventHandler::DoEventLoop(unsigned long)
 * Address: 000acad4
 */
TEndpointEventHandler::DoEventLoop(unsigned long) {
    /*
         acad4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 000acad8
 */
TEndpointEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         acad8:	e5900014 	ldr	r0, [r0, #20]	; fField20
         acadc:	ea6c3060 	b	1bb8c64 <TEndpoint::$HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)>
    */
}

/**
 * Symbol: TEndpointEventHandler::GetServicePortId(void)
 * Address: 000acae0
 */
TEndpointEventHandler::GetServicePortId(void) {
    /*
         acae0:	e5900018 	ldr	r0, [r0, #24]	; fField24
         acae4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::AddToAppWorld(void)
 * Address: 000acae8
 */
TEndpointEventHandler::AddToAppWorld(void) {
    /*
         acae8:	e3e00000 	mvn	r0, #0	; 0x0
         acaec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::RemoveFromAppWorld(void)
 * Address: 000acaf0
 */
TEndpointEventHandler::RemoveFromAppWorld(void) {
    /*
         acaf0:	e3e00000 	mvn	r0, #0	; 0x0
         acaf4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::HandleAborts(unsigned char)
 * Address: 000acaf8
 */
TEndpointEventHandler::HandleAborts(unsigned char) {
    /*
         acaf8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::Abort(void)
 * Address: 000acafc
 */
TEndpointEventHandler::Abort(void) {
    /*
         acafc:	e1a0c00d 	mov	ip, sp
         acb00:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         acb04:	e24cb004 	sub	fp, ip, #4	; 0x4
         acb08:	e1a04000 	mov	r4, r0
         acb0c:	e3a00001 	mov	r0, #1	; 0x1
         acb10:	e5c40029 	strb	r0, [r4, #41]	; fField41
         acb14:	e3a01001 	mov	r1, #1	; 0x1
         acb18:	e5940014 	ldr	r0, [r4, #20]	; fField20
         acb1c:	eb6d48fc 	bl	1bfef14 <TEndpoint::$nAbort(unsigned char)>
         acb20:	e5d40028 	ldrb	r0, [r4, #40]	; fField40
         acb24:	e3300000 	teq	r0, #0	; 0x0
         acb28:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         acb2c:	e2840020 	add	r0, r4, #32	; 0x20
         acb30:	eb6c0b2a 	bl	1baf7e0 <TPseudoSyncState::$Unblock(void)>
         acb34:	e3a00000 	mov	r0, #0	; 0x0
         acb38:	e5c40028 	strb	r0, [r4, #40]	; fField40
         acb3c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpointEventHandler::Timeout(TEndpointTimer *)
 * Address: 000acb40
 */
TEndpointEventHandler::Timeout(TEndpointTimer *) {
    /*
         acb40:	e1a0c00d 	mov	ip, sp
         acb44:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         acb48:	e24cb004 	sub	fp, ip, #4	; 0x4
         acb4c:	e1a04001 	mov	r4, r1
         acb50:	e5911010 	ldr	r1, [r1, #16]
         acb54:	e5900014 	ldr	r0, [r0, #20]	; fField20
         acb58:	eb656e39 	bl	1a08444 <TEndpoint::$Timeout(unsigned long)>
         acb5c:	e1b00004 	movs	r0, r4
         acb60:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         acb64:	e3a01001 	mov	r1, #1	; 0x1
         acb68:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         acb6c:	e590f000 	ldr	pc, [r0]
    */
}

/**
 * Symbol: TEndpointEventHandler::AddTimer(unsigned long, unsigned long)
 * Address: 000acb70
 */
TEndpointEventHandler::AddTimer(unsigned long, unsigned long) {
    /*
         acb70:	e1a0c00d 	mov	ip, sp
         acb74:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         acb78:	e24cb004 	sub	fp, ip, #4	; 0x4
         acb7c:	e1a06000 	mov	r6, r0
         acb80:	e1b04001 	movs	r4, r1
         acb84:	e1a05002 	mov	r5, r2
         acb88:	e3a07000 	mov	r7, #0	; 0x0
         acb8c:	0a000013 	beq	acbe0 <TEndpointEventHandler::AddTimer(unsigned long, unsigned long)+0x70>
         acb90:	eb6c9b8f 	bl	1bd39d4 <$GetGlobals>
         acb94:	e1a03005 	mov	r3, r5
         acb98:	e1a01006 	mov	r1, r6
         acb9c:	e5b02064 	ldr	r2, [r0, #100]!	; fField100
         acba0:	e3a00000 	mov	r0, #0	; 0x0
         acba4:	eb656e2c 	bl	1a0845c <TEndpointTimer::$__ct(TEndpointEventHandler *, TTimerQueue *, unsigned long)>
         acba8:	e1b05000 	movs	r5, r0
         acbac:	1a000002 	bne	acbbc <TEndpointEventHandler::AddTimer(unsigned long, unsigned long)+0x4c>
         acbb0:	eb6cd55a 	bl	1be2120 <$MemError>
         acbb4:	e1a07000 	mov	r7, r0
         acbb8:	ea000008 	b	acbe0 <TEndpointEventHandler::AddTimer(unsigned long, unsigned long)+0x70>
         acbbc:	e1a01004 	mov	r1, r4
         acbc0:	e1a00005 	mov	r0, r5
         acbc4:	eb6c06d9 	bl	1bae730 <TTimerElement::$Prime(unsigned long)>
         acbc8:	e3300000 	teq	r0, #0	; 0x0
         acbcc:	1a000003 	bne	acbe0 <TEndpointEventHandler::AddTimer(unsigned long, unsigned long)+0x70>
         acbd0:	e1a00005 	mov	r0, r5
         acbd4:	e3a01001 	mov	r1, #1	; 0x1
         acbd8:	e1a0e00f 	mov	lr, pc
         acbdc:	e595f000 	ldr	pc, [r5]
         acbe0:	e1a00007 	mov	r0, r7
         acbe4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpointEventHandler::KillTimer(unsigned long)
 * Address: 000acbe8
 */
TEndpointEventHandler::KillTimer(unsigned long) {
    /*
         acbe8:	e1a0c00d 	mov	ip, sp
         acbec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         acbf0:	e24cb004 	sub	fp, ip, #4	; 0x4
         acbf4:	e1a04001 	mov	r4, r1
         acbf8:	e3a05000 	mov	r5, #0	; 0x0
         acbfc:	eb6c9b74 	bl	1bd39d4 <$GetGlobals>
         acc00:	e5900064 	ldr	r0, [r0, #100]	; fField100
         acc04:	e1a01004 	mov	r1, r4
         acc08:	eb6bfe81 	bl	1bac614 <TTimerQueue::$Cancel(unsigned long)>
         acc0c:	e3300000 	teq	r0, #0	; 0x0
         acc10:	0a000002 	beq	acc20 <TEndpointEventHandler::KillTimer(unsigned long)+0x38>
         acc14:	e3a01001 	mov	r1, #1	; 0x1
         acc18:	e1a0e00f 	mov	lr, pc
         acc1c:	e590f000 	ldr	pc, [r0]
         acc20:	e1a00005 	mov	r0, r5
         acc24:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TEndpointEventHandler::GetPrivatePortId(void)
 * Address: 000acc28
 */
TEndpointEventHandler::GetPrivatePortId(void) {
    /*
         acc28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::GetSyncPortId(void)
 * Address: 000acc2c
 */
TEndpointEventHandler::GetSyncPortId(void) {
    /*
         acc2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::TerminateEventLoop(void)
 * Address: 000acc30
 */
TEndpointEventHandler::TerminateEventLoop(void) {
    /*
         acc30:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 000acc34
 */
TEndpointEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         acc34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TEndpointEventHandler::__ct(TEndpoint *, unsigned char)
 * Address: 000acc9c
 */
TEndpointEventHandler::TEndpointEventHandler(TEndpoint *, unsigned char) {
    /*
         acc9c:	e1a0c00d 	mov	ip, sp
         acca0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         acca4:	e24cb004 	sub	fp, ip, #4	; 0x4
         acca8:	e1b04000 	movs	r4, r0
         accac:	e1a05001 	mov	r5, r1
         accb0:	e20270ff 	and	r7, r2, #255	; 0xff
         accb4:	1a000003 	bne	accc8 <TEndpointEventHandler::__ct(TEndpoint *, unsigned char)+0x2c>
         accb8:	e3a0002c 	mov	r0, #44	; 0x2c
         accbc:	eb6c869d 	bl	1bce738 <$__nw(unsigned int)>
         accc0:	e1b04000 	movs	r4, r0
         accc4:	0a00000c 	beq	accfc <TEndpointEventHandler::__ct(TEndpoint *, unsigned char)+0x60>
         accc8:	e1a00004 	mov	r0, r4
         acccc:	eb6cdd4d 	bl	1be4208 <TAEventHandler::$__ct(void)>
         accd0:	e3a06000 	mov	r6, #0	; 0x0
         accd4:	e5c4601c 	strb	r6, [r4, #28]
         accd8:	e5846018 	str	r6, [r4, #24]	; fField24
         accdc:	e2840020 	add	r0, r4, #32	; 0x20
         acce0:	eb6c0ed3 	bl	1bb0834 <TPseudoSyncState::$__ct(void)>
         acce4:	e59f0018 	ldr	r0, [pc, #18]	; acd04 <TEndpointEventHandler::__ct(TEndpoint *, unsigned char)+0x68>
         acce8:	e5840000 	str	r0, [r4]
         accec:	e5845014 	str	r5, [r4, #20]	; fField20
         accf0:	e5c46028 	strb	r6, [r4, #40]	; fField40
         accf4:	e5c46029 	strb	r6, [r4, #41]	; fField41
         accf8:	e5c4702a 	strb	r7, [r4, #42]
         accfc:	e1a00004 	mov	r0, r4
         acd00:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         acd04:	0001f0d4 	ldreqd	pc, [r1], -r4
    */
}

