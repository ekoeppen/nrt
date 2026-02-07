#include "include/TNTKEndpointClient.h"

/**
 * Symbol: TNTKEndpointClient::__ct(void)
 * Address: 0012c8a4
 */
TNTKEndpointClient::TNTKEndpointClient(void) {
    /*
        12c8a4:	e1a0c00d 	mov	ip, sp
        12c8a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12c8ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        12c8b0:	e1b04000 	movs	r4, r0
        12c8b4:	1a000003 	bne	12c8c8 <TNTKEndpointClient::__ct(void)+0x24>
        12c8b8:	e3a00044 	mov	r0, #68	; 0x44
        12c8bc:	eb6a879d 	bl	1bce738 <$__nw(unsigned int)>
        12c8c0:	e1b04000 	movs	r4, r0
        12c8c4:	0a000010 	beq	12c90c <TNTKEndpointClient::__ct(void)+0x68>
        12c8c8:	e1a00004 	mov	r0, r4
        12c8cc:	eb6a2486 	bl	1bb5aec <TEndpointClient::$__ct(void)>
        12c8d0:	e59f003c 	ldr	r0, [pc, #3c]	; 12c914 <TNTKEndpointClient::__ct(void)+0x70>
        12c8d4:	e5840000 	str	r0, [r4]
        12c8d8:	e3a00000 	mov	r0, #0	; 0x0
        12c8dc:	e5840018 	str	r0, [r4, #24]	; fField24
        12c8e0:	e584001c 	str	r0, [r4, #28]	; fField28
        12c8e4:	e5840020 	str	r0, [r4, #32]	; fField32
        12c8e8:	e3a01ffb 	mov	r1, #1004	; 0x3ec
        12c8ec:	e2811bb3 	add	r1, r1, #183296	; 0x2cc00
        12c8f0:	e5840024 	str	r0, [r4, #36]	; fField36
        12c8f4:	e5841030 	str	r1, [r4, #48]	; fField48
        12c8f8:	e5c40040 	strb	r0, [r4, #64]	; fField64
        12c8fc:	e5c40041 	strb	r0, [r4, #65]	; fField65
        12c900:	e5840034 	str	r0, [r4, #52]	; fField52
        12c904:	e5840038 	str	r0, [r4, #56]	; fField56
        12c908:	e584003c 	str	r0, [r4, #60]	; fField60
        12c90c:	e1a00004 	mov	r0, r4
        12c910:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        12c914:	0001eafc 	streqd	lr, [r1], -ip
    */
}

/**
 * Symbol: TNTKEndpointClient::__dt(void)
 * Address: 0012c918
 */
TNTKEndpointClient::~TNTKEndpointClient(void) {
    /*
        12c918:	e1a0c00d 	mov	ip, sp
        12c91c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12c920:	e24cb004 	sub	fp, ip, #4	; 0x4
        12c924:	e1a04000 	mov	r4, r0
        12c928:	e1a05001 	mov	r5, r1
        12c92c:	e59f0068 	ldr	r0, [pc, #68]	; 12c99c <TNTKEndpointClient::__dt(void)+0x84>
        12c930:	e5840000 	str	r0, [r4]
        12c934:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12c938:	eb6a8368 	bl	1bcd6e0 <$__dl(void *)>
        12c93c:	e5940020 	ldr	r0, [r4, #32]	; fField32
        12c940:	eb6a9804 	bl	1bd2958 <$free>
        12c944:	e5940024 	ldr	r0, [r4, #36]	; fField36
        12c948:	eb6a9802 	bl	1bd2958 <$free>
        12c94c:	e5940034 	ldr	r0, [r4, #52]	; fField52
        12c950:	e3300000 	teq	r0, #0	; 0x0
        12c954:	13a01001 	movne	r1, #1	; 0x1
        12c958:	1b6a2873 	blne	1bb6b2c <TOptionArray::$__dt(void)>
        12c95c:	e5940038 	ldr	r0, [r4, #56]	; fField56
        12c960:	e3300000 	teq	r0, #0	; 0x0
        12c964:	13a01001 	movne	r1, #1	; 0x1
        12c968:	1b6a286f 	blne	1bb6b2c <TOptionArray::$__dt(void)>
        12c96c:	e594003c 	ldr	r0, [r4, #60]	; fField60
        12c970:	e3300000 	teq	r0, #0	; 0x0
        12c974:	13a01001 	movne	r1, #1	; 0x1
        12c978:	1b6a286b 	blne	1bb6b2c <TOptionArray::$__dt(void)>
        12c97c:	e1a00004 	mov	r0, r4
        12c980:	e3a01000 	mov	r1, #0	; 0x0
        12c984:	eb6a286a 	bl	1bb6b34 <TEndpointClient::$__dt(void)>
        12c988:	e3150001 	tst	r5, #1	; 0x1
        12c98c:	11a00004 	movne	r0, r4
        12c990:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        12c994:	1a6a8351 	bne	1bcd6e0 <$__dl(void *)>
        12c998:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        12c99c:	0001eafc 	streqd	lr, [r1], -ip
    */
}

/**
 * Symbol: TNTKEndpointClient::Init(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)
 * Address: 0012ca5c
 */
TNTKEndpointClient::Init(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long) {
    /*
        12ca5c:	e1a0c00d 	mov	ip, sp
        12ca60:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        12ca64:	e24cb004 	sub	fp, ip, #4	; 0x4
        12ca68:	e1a04000 	mov	r4, r0
        12ca6c:	e3a06000 	mov	r6, #0	; 0x0
        12ca70:	e59b0010 	ldr	r0, [fp, #16]
        12ca74:	e99b4020 	ldmib	fp, {r5, lr}
        12ca78:	e59bc00c 	ldr	ip, [fp, #12]
        12ca7c:	e52d6004 	str	r6, [sp, -#4]!	; fField4
        12ca80:	e584002c 	str	r0, [r4, #44]	; fField44
        12ca84:	e584c028 	str	ip, [r4, #40]	; fField40
        12ca88:	e1a0000c 	mov	r0, ip
        12ca8c:	e2844034 	add	r4, r4, #52	; 0x34
        12ca90:	e884000e 	stmia	r4, {r1, r2, r3}
        12ca94:	e5245018 	str	r5, [r4, -#24]!	; fField24
        12ca98:	e524e004 	str	lr, [r4, -#4]!	; fField4
        12ca9c:	e2444018 	sub	r4, r4, #24	; 0x18
        12caa0:	eb6aa830 	bl	1bd6b68 <$malloc>
        12caa4:	e5840020 	str	r0, [r4, #32]	; fField32
        12caa8:	e3300000 	teq	r0, #0	; 0x0
        12caac:	0a000004 	beq	12cac4 <TNTKEndpointClient::Init(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)+0x68>
        12cab0:	e594002c 	ldr	r0, [r4, #44]	; fField44
        12cab4:	eb6aa82b 	bl	1bd6b68 <$malloc>
        12cab8:	e5840024 	str	r0, [r4, #36]	; fField36
        12cabc:	e3300000 	teq	r0, #0	; 0x0
        12cac0:	1a000001 	bne	12cacc <TNTKEndpointClient::Init(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)+0x70>
        12cac4:	eb6ad595 	bl	1be2120 <$MemError>
        12cac8:	ea00001c 	b	12cb40 <TNTKEndpointClient::Init(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)+0xe4>
        12cacc:	e1a0100d 	mov	r1, sp
        12cad0:	e3a02000 	mov	r2, #0	; 0x0
        12cad4:	e5940034 	ldr	r0, [r4, #52]	; fField52
        12cad8:	eb6a2c30 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
        12cadc:	e3300000 	teq	r0, #0	; 0x0
        12cae0:	1a000016 	bne	12cb40 <TNTKEndpointClient::Init(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)+0xe4>
        12cae4:	e1a00004 	mov	r0, r4
        12cae8:	e59d1000 	ldr	r1, [sp]
        12caec:	e59f3068 	ldr	r3, [pc, #68]	; 12cb5c <TNTKEndpointClient::Init(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)+0x100>
        12caf0:	e59f2068 	ldr	r2, [pc, #68]	; 12cb60 <TNTKEndpointClient::Init(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)+0x104>
        12caf4:	eb6a3462 	bl	1bb9c84 <TEndpointClient::$Init(TEndpoint *, unsigned long, unsigned long)>
        12caf8:	e3300000 	teq	r0, #0	; 0x0
        12cafc:	1a00000f 	bne	12cb40 <TNTKEndpointClient::Init(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)+0xe4>
        12cb00:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12cb04:	e1a01004 	mov	r1, r4
        12cb08:	eb6a3470 	bl	1bb9cd0 <TEndpoint::$Open(unsigned long)>
        12cb0c:	e3300000 	teq	r0, #0	; 0x0
        12cb10:	1a00000a 	bne	12cb40 <TNTKEndpointClient::Init(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)+0xe4>
        12cb14:	e3a05000 	mov	r5, #0	; 0x0
        12cb18:	e1a01005 	mov	r1, r5
        12cb1c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12cb20:	eb6a3887 	bl	1bbad44 <TEndpoint::$SetSync(unsigned char)>
        12cb24:	e1a03005 	mov	r3, r5
        12cb28:	e1a02005 	mov	r2, r5
        12cb2c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12cb30:	e5941038 	ldr	r1, [r4, #56]	; fField56
        12cb34:	eb636e4c 	bl	1a0846c <TEndpoint::$nBind(TOptionArray *, unsigned long, unsigned char)>
        12cb38:	e3300000 	teq	r0, #0	; 0x0
        12cb3c:	0a000005 	beq	12cb58 <TNTKEndpointClient::Init(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)+0xfc>
        12cb40:	e3300000 	teq	r0, #0	; 0x0
        12cb44:	0a000003 	beq	12cb58 <TNTKEndpointClient::Init(TOptionArray *, TOptionArray *, TOptionArray *, TTaskSafeRingBuffer *, TTaskSafeRingBuffer *, long, long)+0xfc>
        12cb48:	e5941018 	ldr	r1, [r4, #24]	; fField24
        12cb4c:	e5a10024 	str	r0, [r1, #36]!	; fField36
        12cb50:	e5b4101c 	ldr	r1, [r4, #28]!	; fField28
        12cb54:	e5a10020 	str	r0, [r1, #32]!	; fField32
        12cb58:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        12cb5c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        12cb60:	656e6470 	strvsb	r6, [lr, -#1136]!
    */
}

/**
 * Symbol: TNTKEndpointClient::CheckSend(void)
 * Address: 0012cb64
 */
TNTKEndpointClient::CheckSend(void) {
    /*
        12cb64:	e1a0c00d 	mov	ip, sp
        12cb68:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        12cb6c:	e24cb004 	sub	fp, ip, #4	; 0x4
        12cb70:	e1a04000 	mov	r4, r0
        12cb74:	e3a05000 	mov	r5, #0	; 0x0
        12cb78:	e52d506c 	str	r5, [sp, -#108]!
        12cb7c:	e28d0008 	add	r0, sp, #8	; 0x8
        12cb80:	eb6a177b 	bl	1bb2974 <$setjmp>
        12cb84:	e3300000 	teq	r0, #0	; 0x0
        12cb88:	1a000027 	bne	12cc2c <TNTKEndpointClient::CheckSend(void)+0xc8>
        12cb8c:	e1a0000d 	mov	r0, sp
        12cb90:	eb6acd39 	bl	1be007c <$AddExceptionHandler>
        12cb94:	e3a06001 	mov	r6, #1	; 0x1
        12cb98:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
        12cb9c:	e3300000 	teq	r0, #0	; 0x0
        12cba0:	1a000021 	bne	12cc2c <TNTKEndpointClient::CheckSend(void)+0xc8>
        12cba4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        12cba8:	e3300000 	teq	r0, #0	; 0x0
        12cbac:	0a00001e 	beq	12cc2c <TNTKEndpointClient::CheckSend(void)+0xc8>
        12cbb0:	e5901000 	ldr	r1, [r0]
        12cbb4:	e1a0e00f 	mov	lr, pc
        12cbb8:	e281f040 	add	pc, r1, #64	; 0x40
        12cbbc:	e3500000 	cmp	r0, #0	; 0x0
        12cbc0:	da000019 	ble	12cc2c <TNTKEndpointClient::CheckSend(void)+0xc8>
        12cbc4:	e24dd004 	sub	sp, sp, #4	; 0x4
        12cbc8:	e5942028 	ldr	r2, [r4, #40]	; fField40
        12cbcc:	e58d2000 	str	r2, [sp]
        12cbd0:	e5943018 	ldr	r3, [r4, #24]	; fField24
        12cbd4:	e1a00003 	mov	r0, r3
        12cbd8:	e5941020 	ldr	r1, [r4, #32]	; fField32
        12cbdc:	e5933000 	ldr	r3, [r3]
        12cbe0:	e1a0e00f 	mov	lr, pc
        12cbe4:	e283f014 	add	pc, r3, #20	; 0x14
        12cbe8:	e58d0000 	str	r0, [sp]
        12cbec:	e5c46040 	strb	r6, [r4, #64]	; fField64
        12cbf0:	e3a01000 	mov	r1, #0	; 0x0
        12cbf4:	e3a03000 	mov	r3, #0	; 0x0
        12cbf8:	e1a02005 	mov	r2, r5
        12cbfc:	e594c020 	ldr	ip, [r4, #32]	; fField32
        12cc00:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        12cc04:	e1a03006 	mov	r3, r6
        12cc08:	e28d200c 	add	r2, sp, #12	; 0xc
        12cc0c:	e1a0100c 	mov	r1, ip
        12cc10:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12cc14:	eb63721c 	bl	1a0948c <TEndpoint::$nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        12cc18:	e28dd00c 	add	sp, sp, #12	; 0xc
        12cc1c:	e3300000 	teq	r0, #0	; 0x0
        12cc20:	15b41018 	ldrne	r1, [r4, #24]!	; fField24
        12cc24:	15a10024 	strne	r0, [r1, #36]!	; fField36
        12cc28:	e28dd004 	add	sp, sp, #4	; 0x4
        12cc2c:	e1a0000d 	mov	r0, sp
        12cc30:	eb6ad120 	bl	1be10b8 <$ExitHandler>
        12cc34:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0012cc38
 */
TNTKEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        12cc38:	e1a0c00d 	mov	ip, sp
        12cc3c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12cc40:	e24cb004 	sub	fp, ip, #4	; 0x4
        12cc44:	e1a04000 	mov	r4, r0
        12cc48:	e5d00041 	ldrb	r0, [r0, #65]	; fField65
        12cc4c:	e3300000 	teq	r0, #0	; 0x0
        12cc50:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        12cc54:	e1a00004 	mov	r0, r4
        12cc58:	eb665d6d 	bl	1ac4214 <TNTKEndpointClient::$CheckSend(void)>
        12cc5c:	e1a00004 	mov	r0, r4
        12cc60:	e3a02066 	mov	r2, #102	; 0x66
        12cc64:	e2822c0e 	add	r2, r2, #3584	; 0xe00
        12cc68:	e3a01032 	mov	r1, #50	; 0x32
        12cc6c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        12cc70:	ea6b0284 	b	1bed688 <TAEventHandler::$ResetIdle(unsigned long, TimeUnits)>
    */
}

/**
 * Symbol: TNTKEndpointClient::BindComplete(TEndpointEvent *)
 * Address: 0012cc74
 */
TNTKEndpointClient::BindComplete(TEndpointEvent *) {
    /*
        12cc74:	e1a0c00d 	mov	ip, sp
        12cc78:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12cc7c:	e24cb004 	sub	fp, ip, #4	; 0x4
        12cc80:	e1a04000 	mov	r4, r0
        12cc84:	e5912008 	ldr	r2, [r1, #8]
        12cc88:	e3320000 	teq	r2, #0	; 0x0
        12cc8c:	0a000005 	beq	12cca8 <TNTKEndpointClient::BindComplete(TEndpointEvent *)+0x34>
        12cc90:	e5940018 	ldr	r0, [r4, #24]	; fField24
        12cc94:	e5a02024 	str	r2, [r0, #36]!	; fField36
        12cc98:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        12cc9c:	e5911008 	ldr	r1, [r1, #8]
        12cca0:	e5a01020 	str	r1, [r0, #32]!	; fField32
        12cca4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        12cca8:	e3a02000 	mov	r2, #0	; 0x0
        12ccac:	e3a0c000 	mov	ip, #0	; 0x0
        12ccb0:	e1a0300c 	mov	r3, ip
        12ccb4:	e594103c 	ldr	r1, [r4, #60]	; fField60
        12ccb8:	e92d000c 	stmdb	sp!, {r2, r3}
        12ccbc:	e1a0300c 	mov	r3, ip
        12ccc0:	e1a0200c 	mov	r2, ip
        12ccc4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12ccc8:	eb636de8 	bl	1a08470 <TEndpoint::$nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
        12cccc:	e28dd008 	add	sp, sp, #8	; 0x8
        12ccd0:	e3300000 	teq	r0, #0	; 0x0
        12ccd4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        12ccd8:	e5941018 	ldr	r1, [r4, #24]	; fField24
        12ccdc:	e5a10024 	str	r0, [r1, #36]!	; fField36
        12cce0:	e5b4101c 	ldr	r1, [r4, #28]!	; fField28
        12cce4:	e5a10020 	str	r0, [r1, #32]!	; fField32
        12cce8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKEndpointClient::ConnectComplete(TEndpointEvent *)
 * Address: 0012ccec
 */
TNTKEndpointClient::ConnectComplete(TEndpointEvent *) {
    /*
        12ccec:	e1a0c00d 	mov	ip, sp
        12ccf0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        12ccf4:	e24cb004 	sub	fp, ip, #4	; 0x4
        12ccf8:	e1a04000 	mov	r4, r0
        12ccfc:	e5912008 	ldr	r2, [r1, #8]
        12cd00:	e3320000 	teq	r2, #0	; 0x0
        12cd04:	0a000005 	beq	12cd20 <TNTKEndpointClient::ConnectComplete(TEndpointEvent *)+0x34>
        12cd08:	e5940018 	ldr	r0, [r4, #24]	; fField24
        12cd0c:	e5a02024 	str	r2, [r0, #36]!	; fField36
        12cd10:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        12cd14:	e5911008 	ldr	r1, [r1, #8]
        12cd18:	e5a01020 	str	r1, [r0, #32]!	; fField32
        12cd1c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        12cd20:	e3a03001 	mov	r3, #1	; 0x1
        12cd24:	e92d0008 	stmdb	sp!, {r3}
        12cd28:	e1a00004 	mov	r0, r4
        12cd2c:	e3a03000 	mov	r3, #0	; 0x0
        12cd30:	e3a02066 	mov	r2, #102	; 0x66
        12cd34:	e2822c0e 	add	r2, r2, #3584	; 0xe00
        12cd38:	e3a01032 	mov	r1, #50	; 0x32
        12cd3c:	eb6af1e6 	bl	1be94dc <TAEventHandler::$InitIdler(unsigned long, TimeUnits, unsigned long, unsigned char)>
        12cd40:	e28dd004 	add	sp, sp, #4	; 0x4
        12cd44:	e3300000 	teq	r0, #0	; 0x0
        12cd48:	1a000010 	bne	12cd90 <TNTKEndpointClient::ConnectComplete(TEndpointEvent *)+0xa4>
        12cd4c:	e24dd008 	sub	sp, sp, #8	; 0x8
        12cd50:	e594002c 	ldr	r0, [r4, #44]	; fField44
        12cd54:	e58d0004 	str	r0, [sp, #4]	; fField4
        12cd58:	e3a00000 	mov	r0, #0	; 0x0
        12cd5c:	e58d0000 	str	r0, [sp]
        12cd60:	e1a0000d 	mov	r0, sp
        12cd64:	e3a01000 	mov	r1, #0	; 0x0
        12cd68:	e3a03000 	mov	r3, #0	; 0x0
        12cd6c:	e3a02000 	mov	r2, #0	; 0x0
        12cd70:	e594c024 	ldr	ip, [r4, #36]	; fField36
        12cd74:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        12cd78:	e3a03001 	mov	r3, #1	; 0x1
        12cd7c:	e28d2014 	add	r2, sp, #20	; 0x14
        12cd80:	e1a0100c 	mov	r1, ip
        12cd84:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12cd88:	eb6b4862 	bl	1bfef18 <TEndpoint::$nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
        12cd8c:	e28dd018 	add	sp, sp, #24	; 0x18
        12cd90:	e3300000 	teq	r0, #0	; 0x0
        12cd94:	15b4101c 	ldrne	r1, [r4, #28]!	; fField28
        12cd98:	15a10020 	strne	r0, [r1, #32]!	; fField32
        12cd9c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKEndpointClient::SndComplete(TEndpointEvent *)
 * Address: 0012cda0
 */
TNTKEndpointClient::SndComplete(TEndpointEvent *) {
    /*
        12cda0:	e5b12008 	ldr	r2, [r1, #8]!
        12cda4:	e3320000 	teq	r2, #0	; 0x0
        12cda8:	15901018 	ldrne	r1, [r0, #24]	; fField24
        12cdac:	15a12024 	strne	r2, [r1, #36]!	; fField36
        12cdb0:	e3a01000 	mov	r1, #0	; 0x0
        12cdb4:	e5c01040 	strb	r1, [r0, #64]	; fField64
        12cdb8:	e5d01041 	ldrb	r1, [r0, #65]	; fField65
        12cdbc:	e3310000 	teq	r1, #0	; 0x0
        12cdc0:	0a665d13 	beq	1ac4214 <TNTKEndpointClient::$CheckSend(void)>
        12cdc4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNTKEndpointClient::RcvComplete(TEndpointEvent *)
 * Address: 0012cdc8
 */
TNTKEndpointClient::RcvComplete(TEndpointEvent *) {
    /*
        12cdc8:	e1a0c00d 	mov	ip, sp
        12cdcc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        12cdd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        12cdd4:	e1a04000 	mov	r4, r0
        12cdd8:	e1a05001 	mov	r5, r1
        12cddc:	e5d00041 	ldrb	r0, [r0, #65]	; fField65
        12cde0:	e3300000 	teq	r0, #0	; 0x0
        12cde4:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        12cde8:	e3a06000 	mov	r6, #0	; 0x0
        12cdec:	e3a07001 	mov	r7, #1	; 0x1
        12cdf0:	e5950008 	ldr	r0, [r5, #8]
        12cdf4:	e3300000 	teq	r0, #0	; 0x0
        12cdf8:	1a000015 	bne	12ce54 <TNTKEndpointClient::RcvComplete(TEndpointEvent *)+0x8c>
        12cdfc:	e52d606c 	str	r6, [sp, -#108]!
        12ce00:	e28d0008 	add	r0, sp, #8	; 0x8
        12ce04:	eb6a16da 	bl	1bb2974 <$setjmp>
        12ce08:	e3300000 	teq	r0, #0	; 0x0
        12ce0c:	1a00000c 	bne	12ce44 <TNTKEndpointClient::RcvComplete(TEndpointEvent *)+0x7c>
        12ce10:	e1a0000d 	mov	r0, sp
        12ce14:	eb6acc98 	bl	1be007c <$AddExceptionHandler>
        12ce18:	e3a03000 	mov	r3, #0	; 0x0
        12ce1c:	e594c01c 	ldr	ip, [r4, #28]	; fField28
        12ce20:	e92d0008 	stmdb	sp!, {r3}
        12ce24:	e5943030 	ldr	r3, [r4, #48]	; fField48
        12ce28:	e5b52028 	ldr	r2, [r5, #40]!	; fField40
        12ce2c:	e1a0000c 	mov	r0, ip
        12ce30:	e5941024 	ldr	r1, [r4, #36]	; fField36
        12ce34:	e59cc000 	ldr	ip, [ip]
        12ce38:	e1a0e00f 	mov	lr, pc
        12ce3c:	e28cf060 	add	pc, ip, #96	; 0x60
        12ce40:	e28dd004 	add	sp, sp, #4	; 0x4
        12ce44:	e1a0000d 	mov	r0, sp
        12ce48:	eb6ad09a 	bl	1be10b8 <$ExitHandler>
        12ce4c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        12ce50:	ea000001 	b	12ce5c <TNTKEndpointClient::RcvComplete(TEndpointEvent *)+0x94>
        12ce54:	e594101c 	ldr	r1, [r4, #28]	; fField28
        12ce58:	e5a10020 	str	r0, [r1, #32]!	; fField32
        12ce5c:	e24dd008 	sub	sp, sp, #8	; 0x8
        12ce60:	e594002c 	ldr	r0, [r4, #44]	; fField44
        12ce64:	e58d0004 	str	r0, [sp, #4]	; fField4
        12ce68:	e3a00000 	mov	r0, #0	; 0x0
        12ce6c:	e58d0000 	str	r0, [sp]
        12ce70:	e1a0000d 	mov	r0, sp
        12ce74:	e3a01000 	mov	r1, #0	; 0x0
        12ce78:	e3a03000 	mov	r3, #0	; 0x0
        12ce7c:	e1a02006 	mov	r2, r6
        12ce80:	e594c024 	ldr	ip, [r4, #36]	; fField36
        12ce84:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        12ce88:	e1a03007 	mov	r3, r7
        12ce8c:	e28d2014 	add	r2, sp, #20	; 0x14
        12ce90:	e1a0100c 	mov	r1, ip
        12ce94:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12ce98:	eb6b481e 	bl	1bfef18 <TEndpoint::$nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
        12ce9c:	e28dd010 	add	sp, sp, #16	; 0x10
        12cea0:	e3300000 	teq	r0, #0	; 0x0
        12cea4:	15b4101c 	ldrne	r1, [r4, #28]!	; fField28
        12cea8:	15a10020 	strne	r0, [r1, #32]!	; fField32
        12ceac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNTKEndpointClient::MakeYourPeace(void)
 * Address: 0012ceb0
 */
TNTKEndpointClient::MakeYourPeace(void) {
    /*
        12ceb0:	e3a01001 	mov	r1, #1	; 0x1
        12ceb4:	e5c01041 	strb	r1, [r0, #65]	; fField65
        12ceb8:	e3a01000 	mov	r1, #0	; 0x0
        12cebc:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12cec0:	ea6b4813 	b	1bfef14 <TEndpoint::$nAbort(unsigned char)>
    */
}

/**
 * Symbol: TNTKEndpointClient::AbortComplete(TEndpointEvent *)
 * Address: 0012cec4
 */
TNTKEndpointClient::AbortComplete(TEndpointEvent *) {
    /*
        12cec4:	e1a0c00d 	mov	ip, sp
        12cec8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        12cecc:	e24cb004 	sub	fp, ip, #4	; 0x4
        12ced0:	e1a04000 	mov	r4, r0
        12ced4:	e3a02000 	mov	r2, #0	; 0x0
        12ced8:	e3a05000 	mov	r5, #0	; 0x0
        12cedc:	e1a01005 	mov	r1, r5
        12cee0:	e1a03005 	mov	r3, r5
        12cee4:	e92d000c 	stmdb	sp!, {r2, r3}
        12cee8:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12ceec:	e1a03005 	mov	r3, r5
        12cef0:	e1a02005 	mov	r2, r5
        12cef4:	eb636d5e 	bl	1a08474 <TEndpoint::$nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)>
        12cef8:	e28dd008 	add	sp, sp, #8	; 0x8
        12cefc:	e3300000 	teq	r0, #0	; 0x0
        12cf00:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        12cf04:	e1a01005 	mov	r1, r5
        12cf08:	e1a02005 	mov	r2, r5
        12cf0c:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        12cf10:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        12cf14:	ea63715d 	b	1a09490 <TEndpoint::$nUnBind(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TNTKEndpointClient::DisconnectComplete(TEndpointEvent *)
 * Address: 0012cf18
 */
TNTKEndpointClient::DisconnectComplete(TEndpointEvent *) {
    /*
        12cf18:	e3a01000 	mov	r1, #0	; 0x0
        12cf1c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12cf20:	e1a02001 	mov	r2, r1
        12cf24:	ea637159 	b	1a09490 <TEndpoint::$nUnBind(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TNTKEndpointClient::UnBindComplete(TEndpointEvent *)
 * Address: 0012cfe8
 */
TNTKEndpointClient::UnBindComplete(TEndpointEvent *) {
    /*
        12cfe8:	e1a0c00d 	mov	ip, sp
        12cfec:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        12cff0:	e24cb004 	sub	fp, ip, #4	; 0x4
        12cff4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        12cff8:	eb6a2ae7 	bl	1bb7b9c <TEndpoint::$Close(void)>
        12cffc:	eb6a9a74 	bl	1bd39d4 <$GetGlobals>
        12d000:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        12d004:	ea6ae4c7 	b	1be6328 <TAppWorld::$AETerminateLoop(void)>
    */
}

/**
 * Symbol: TNTKEndpointClient::Disconnect(TEndpointEvent *)
 * Address: 0012d008
 */
TNTKEndpointClient::Disconnect(TEndpointEvent *) {
    /*
        12d008:	e5902018 	ldr	r2, [r0, #24]	; fField24
        12d00c:	e59f1014 	ldr	r1, [pc, #14]	; 12d028 <TNTKEndpointClient::Disconnect(TEndpointEvent *)+0x20>
        12d010:	e5a21024 	str	r1, [r2, #36]!	; fField36
        12d014:	e590201c 	ldr	r2, [r0, #28]	; fField28
        12d018:	e5a21020 	str	r1, [r2, #32]!	; fField32
        12d01c:	e3a01001 	mov	r1, #1	; 0x1
        12d020:	e5c01041 	strb	r1, [r0, #65]	; fField65
        12d024:	e1a0f00e 	mov	pc, lr
        12d028:	ffffc173 	swinv	0x00ffc173
    */
}

