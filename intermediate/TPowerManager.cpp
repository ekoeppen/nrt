#include "include/TPowerManager.h"

/**
 * Symbol: TPowerManager::DoReply(TUMsgToken *, unsigned long *, TPowerManagerEvent *)
 * Address: 001929ac
 */
TPowerManager::DoReply(TUMsgToken *, unsigned long *, TPowerManagerEvent *) {
    /*
        1929ac:	e5912000 	ldr	r2, [r1]
        1929b0:	e5901090 	ldr	r1, [r0, #144]	; fField144
        1929b4:	e1320001 	teq	r2, r1
        1929b8:	0a69f377 	beq	1c0f79c <TPowerManager::$PowerOffTimeout(void)>
        1929bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPowerManager::BacklightMessage(void)
 * Address: 001929c0
 */
TPowerManager::BacklightMessage(void) {
    /*
        1929c0:	e1a0c00d 	mov	ip, sp
        1929c4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1929c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1929cc:	e1a04000 	mov	r4, r0
        1929d0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1929d4:	e1a0100d 	mov	r1, sp
        1929d8:	e3a00005 	mov	r0, #5	; 0x5
        1929dc:	eb697bad 	bl	1bf1898 <$GetGrafInfo(long, void *)>
        1929e0:	e59d0000 	ldr	r0, [sp]
        1929e4:	e3300000 	teq	r0, #0	; 0x0
        1929e8:	13a01000 	movne	r1, #0	; 0x0
        1929ec:	03a01001 	moveq	r1, #1	; 0x1
        1929f0:	e3a00005 	mov	r0, #5	; 0x5
        1929f4:	eb670c3b 	bl	1b55ae8 <$SetGrafInfo__FlT1>
        1929f8:	e59f007c 	ldr	r0, [pc, #7c]	; 192a7c <TPowerManager::BacklightMessage(void)+0xbc>
        1929fc:	e5840084 	str	r0, [r4, #132]	; fField132
        192a00:	e59f0078 	ldr	r0, [pc, #78]	; 192a80 <TPowerManager::BacklightMessage(void)+0xc0>
        192a04:	e5840088 	str	r0, [r4, #136]	; fField136
        192a08:	e59f0074 	ldr	r0, [pc, #74]	; 192a84 <TPowerManager::BacklightMessage(void)+0xc4>
        192a0c:	e584008c 	str	r0, [r4, #140]	; fField140
        192a10:	e59f0070 	ldr	r0, [pc, #70]	; 192a88 <TPowerManager::BacklightMessage(void)+0xc8>
        192a14:	e590e000 	ldr	lr, [r0]
        192a18:	e33e0000 	teq	lr, #0	; 0x0
        192a1c:	0a000015 	beq	192a78 <TPowerManager::BacklightMessage(void)+0xb8>
        192a20:	e284c090 	add	ip, r4, #144	; 0x90
        192a24:	e2840084 	add	r0, r4, #132	; 0x84
        192a28:	e1a05000 	mov	r5, r0
        192a2c:	e3a0100c 	mov	r1, #12	; 0xc
        192a30:	e3a02000 	mov	r2, #0	; 0x0
        192a34:	e3a03000 	mov	r3, #0	; 0x0
        192a38:	e3a04000 	mov	r4, #0	; 0x0
        192a3c:	e3a06000 	mov	r6, #0	; 0x0
        192a40:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        192a44:	e1a03006 	mov	r3, r6
        192a48:	e3a02001 	mov	r2, #1	; 0x1
        192a4c:	e1a01004 	mov	r1, r4
        192a50:	e3a0000c 	mov	r0, #12	; 0xc
        192a54:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        192a58:	e1a03005 	mov	r3, r5
        192a5c:	e92d0008 	stmdb	sp!, {r3}
        192a60:	e1a0000e 	mov	r0, lr
        192a64:	e3a03000 	mov	r3, #0	; 0x0
        192a68:	e49c1008 	ldr	r1, [ip], #8
        192a6c:	e59c2000 	ldr	r2, [ip]
        192a70:	eb6920b5 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        192a74:	e28dd024 	add	sp, sp, #36	; 0x24
        192a78:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        192a7c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        192a80:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        192a84:	626b6c74 	rsbvs	r6, fp, #29696	; 0x7400
        192a88:	0c1054a8 	ldceq	4, cr5, [r0], -#672
    */
}

/**
 * Symbol: TPowerManager::PowerOffMessage(void)
 * Address: 00192a8c
 */
TPowerManager::PowerOffMessage(void) {
    /*
        192a8c:	e1a0c00d 	mov	ip, sp
        192a90:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        192a94:	e24cb004 	sub	fp, ip, #4	; 0x4
        192a98:	e1a04000 	mov	r4, r0
        192a9c:	e59f00b0 	ldr	r0, [pc, #b0]	; 192b54 <TPowerManager::PowerOffMessage(void)+0xc8>
        192aa0:	e58400a4 	str	r0, [r4, #164]	; fField164
        192aa4:	e59f00ac 	ldr	r0, [pc, #ac]	; 192b58 <TPowerManager::PowerOffMessage(void)+0xcc>
        192aa8:	e3a0300c 	mov	r3, #12	; 0xc
        192aac:	e58400a8 	str	r0, [r4, #168]	; fField168
        192ab0:	e28400a0 	add	r0, r4, #160	; 0xa0
        192ab4:	e1a02000 	mov	r2, r0
        192ab8:	e92d000c 	stmdb	sp!, {r2, r3}
        192abc:	e1a02000 	mov	r2, r0
        192ac0:	e28410ac 	add	r1, r4, #172	; 0xac
        192ac4:	e28400bc 	add	r0, r4, #188	; 0xbc
        192ac8:	eb6920a0 	bl	1bdad50 <TSendSystemEvent::$SendSystemEvent(TUAsyncMessage *, void *, unsigned long, void *, unsigned long)>
        192acc:	e28dd008 	add	sp, sp, #8	; 0x8
        192ad0:	e59f0084 	ldr	r0, [pc, #84]	; 192b5c <TPowerManager::PowerOffMessage(void)+0xd0>
        192ad4:	e5840084 	str	r0, [r4, #132]	; fField132
        192ad8:	e59f0080 	ldr	r0, [pc, #80]	; 192b60 <TPowerManager::PowerOffMessage(void)+0xd4>
        192adc:	e5840088 	str	r0, [r4, #136]	; fField136
        192ae0:	e59f007c 	ldr	r0, [pc, #7c]	; 192b64 <TPowerManager::PowerOffMessage(void)+0xd8>
        192ae4:	e584008c 	str	r0, [r4, #140]	; fField140
        192ae8:	e59f0078 	ldr	r0, [pc, #78]	; 192b68 <TPowerManager::PowerOffMessage(void)+0xdc>
        192aec:	e590e000 	ldr	lr, [r0]
        192af0:	e33e0000 	teq	lr, #0	; 0x0
        192af4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        192af8:	e284c090 	add	ip, r4, #144	; 0x90
        192afc:	e2840084 	add	r0, r4, #132	; 0x84
        192b00:	e1a05000 	mov	r5, r0
        192b04:	e3a0100c 	mov	r1, #12	; 0xc
        192b08:	e3a029ca 	mov	r2, #3309568	; 0x328000
        192b0c:	e2822402 	add	r2, r2, #33554432	; 0x2000000
        192b10:	e3a03000 	mov	r3, #0	; 0x0
        192b14:	e3a04000 	mov	r4, #0	; 0x0
        192b18:	e3a06000 	mov	r6, #0	; 0x0
        192b1c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        192b20:	e1a03006 	mov	r3, r6
        192b24:	e3a02001 	mov	r2, #1	; 0x1
        192b28:	e1a01004 	mov	r1, r4
        192b2c:	e3a0000c 	mov	r0, #12	; 0xc
        192b30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        192b34:	e1a03005 	mov	r3, r5
        192b38:	e92d0008 	stmdb	sp!, {r3}
        192b3c:	e1a0000e 	mov	r0, lr
        192b40:	e3a03000 	mov	r3, #0	; 0x0
        192b44:	e49c1008 	ldr	r1, [ip], #8
        192b48:	e59c2000 	ldr	r2, [ip]
        192b4c:	eb69207e 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        192b50:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        192b54:	7379736d 	cmnvc	r9, #-1275068415	; 0xb4000001
        192b58:	7070656e 	rsbvcs	r6, r0, lr, ror #10
        192b5c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        192b60:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        192b64:	706f7772 	rsbvc	r7, pc, r2, ror r7
        192b68:	0c1054a8 	ldceq	4, cr5, [r0], -#672
    */
}

/**
 * Symbol: TPowerManager::PowerOffTimeout(void)
 * Address: 00192b6c
 */
TPowerManager::PowerOffTimeout(void) {
    /*
        192b6c:	e1a0c00d 	mov	ip, sp
        192b70:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        192b74:	e24cb004 	sub	fp, ip, #4	; 0x4
        192b78:	e3a03000 	mov	r3, #0	; 0x0
        192b7c:	e92d0008 	stmdb	sp!, {r3}
        192b80:	e2800090 	add	r0, r0, #144	; 0x90
        192b84:	e3a02000 	mov	r2, #0	; 0x0
        192b88:	e3a01000 	mov	r1, #0	; 0x0
        192b8c:	eb6907a6 	bl	1bd4a2c <TUAsyncMessage::$GetResult(unsigned long *, unsigned long *, unsigned long *, unsigned long *)>
        192b90:	e28dd004 	add	sp, sp, #4	; 0x4
        192b94:	e280cc27 	add	ip, r0, #9984	; 0x2700
        192b98:	e37c0025 	cmn	ip, #37	; 0x25
        192b9c:	03a00000 	moveq	r0, #0	; 0x0
        192ba0:	091b6800 	ldmeqdb	fp, {fp, sp, lr}
        192ba4:	0a65b946 	beq	1b010c4 <$PowerOffAndReboot(long)>
        192ba8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TPowerManager::__ct(void)
 * Address: 00192cac
 */
TPowerManager::TPowerManager(void) {
    /*
        192cac:	e1a0c00d 	mov	ip, sp
        192cb0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        192cb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        192cb8:	e1b04000 	movs	r4, r0
        192cbc:	1a000003 	bne	192cd0 <TPowerManager::__ct(void)+0x24>
        192cc0:	e3a000e4 	mov	r0, #228	; 0xe4
        192cc4:	eb68ee9b 	bl	1bce738 <$__nw(unsigned int)>
        192cc8:	e1b04000 	movs	r4, r0
        192ccc:	0a000018 	beq	192d34 <TPowerManager::__ct(void)+0x88>
        192cd0:	e1a00004 	mov	r0, r4
        192cd4:	eb69455a 	bl	1be4244 <TAppWorld::$__ct(void)>
        192cd8:	e2840070 	add	r0, r4, #112	; 0x70
        192cdc:	eb694549 	bl	1be4208 <TAEventHandler::$__ct(void)>
        192ce0:	e59f0054 	ldr	r0, [pc, #54]	; 192d3c <TPowerManager::__ct(void)+0x90>
        192ce4:	e5840070 	str	r0, [r4, #112]
        192ce8:	e2840084 	add	r0, r4, #132	; 0x84
        192cec:	eb694551 	bl	1be4238 <TAEvent::$__ct(void)>
        192cf0:	e2840090 	add	r0, r4, #144	; 0x90
        192cf4:	eb68ea6c 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        192cf8:	e28400a0 	add	r0, r4, #160	; 0xa0
        192cfc:	eb69454d 	bl	1be4238 <TAEvent::$__ct(void)>
        192d00:	e28400ac 	add	r0, r4, #172	; 0xac
        192d04:	eb68ea68 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        192d08:	e28450bc 	add	r5, r4, #188	; 0xbc
        192d0c:	e3a06000 	mov	r6, #0	; 0x0
        192d10:	e1a01006 	mov	r1, r6
        192d14:	e1a00005 	mov	r0, r5
        192d18:	eb68ea59 	bl	1bcd684 <TSystemEvent::$__ct(unsigned long)>
        192d1c:	e5c56010 	strb	r6, [r5, #16]
        192d20:	e585600c 	str	r6, [r5, #12]
        192d24:	e2850014 	add	r0, r5, #20	; 0x14
        192d28:	eb660b61 	bl	1b15ab4 <TSysEventRequest::$__ct(void)>
        192d2c:	e59f000c 	ldr	r0, [pc, #c]	; 192d40 <TPowerManager::__ct(void)+0x94>
        192d30:	e5840000 	str	r0, [r4]
        192d34:	e1a00004 	mov	r0, r4
        192d38:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        192d3c:	0001eb50 	andeq	lr, r1, r0, asr fp
        192d40:	0001d048 	andeq	sp, r1, r8, asr #32
    */
}

/**
 * Symbol: TPowerManager::__dt(void)
 * Address: 00192d44
 */
TPowerManager::~TPowerManager(void) {
    /*
        192d44:	e1a0c00d 	mov	ip, sp
        192d48:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        192d4c:	e24cb004 	sub	fp, ip, #4	; 0x4
        192d50:	e1a04000 	mov	r4, r0
        192d54:	e1a05001 	mov	r5, r1
        192d58:	e59f0060 	ldr	r0, [pc, #60]	; 192dc0 <TPowerManager::__dt(void)+0x7c>
        192d5c:	e5840000 	str	r0, [r4]
        192d60:	e28460bc 	add	r6, r4, #188	; 0xbc
        192d64:	e286000c 	add	r0, r6, #12	; 0xc
        192d68:	e3a01000 	mov	r1, #0	; 0x0
        192d6c:	eb68ee6c 	bl	1bce724 <TUObject::$__dt(void)>
        192d70:	e1a00006 	mov	r0, r6
        192d74:	e3a01000 	mov	r1, #0	; 0x0
        192d78:	eb68ee69 	bl	1bce724 <TUObject::$__dt(void)>
        192d7c:	e28400ac 	add	r0, r4, #172	; 0xac
        192d80:	e3a01000 	mov	r1, #0	; 0x0
        192d84:	eb68ee61 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        192d88:	e2840090 	add	r0, r4, #144	; 0x90
        192d8c:	e3a01000 	mov	r1, #0	; 0x0
        192d90:	eb68ee5e 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        192d94:	e2840070 	add	r0, r4, #112	; 0x70
        192d98:	e3a01000 	mov	r1, #0	; 0x0
        192d9c:	eb694533 	bl	1be4270 <TAEventHandler::$__dt(void)>
        192da0:	e1a00004 	mov	r0, r4
        192da4:	e3a01000 	mov	r1, #0	; 0x0
        192da8:	eb69493a 	bl	1be5298 <TAppWorld::$__dt(void)>
        192dac:	e3150001 	tst	r5, #1	; 0x1
        192db0:	11a00004 	movne	r0, r4
        192db4:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        192db8:	1a68ea48 	bne	1bcd6e0 <$__dl(void *)>
        192dbc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        192dc0:	0001d048 	andeq	sp, r1, r8, asr #32
    */
}

/**
 * Symbol: TPowerManager::GetSizeOf(void)
 * Address: 00192dc4
 */
TPowerManager::GetSizeOf(void) {
    /*
        192dc4:	e3a000e4 	mov	r0, #228	; 0xe4
        192dc8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TPowerManager::MainConstructor(void)
 * Address: 00192dcc
 */
TPowerManager::MainConstructor(void) {
    /*
        192dcc:	e1a0c00d 	mov	ip, sp
        192dd0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        192dd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        192dd8:	e1a04000 	mov	r4, r0
        192ddc:	eb686a46 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
        192de0:	e3300000 	teq	r0, #0	; 0x0
        192de4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        192de8:	e2840070 	add	r0, r4, #112	; 0x70
        192dec:	e1a05000 	mov	r5, r0
        192df0:	e59f20d4 	ldr	r2, [pc, #d4]	; 192ecc <TPowerManager::MainConstructor(void)+0x100>
        192df4:	e59f10d4 	ldr	r1, [pc, #d4]	; 192ed0 <TPowerManager::MainConstructor(void)+0x104>
        192df8:	eb6959ac 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        192dfc:	e3300000 	teq	r0, #0	; 0x0
        192e00:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        192e04:	e2840090 	add	r0, r4, #144	; 0x90
        192e08:	e1a06000 	mov	r6, r0
        192e0c:	e3a01001 	mov	r1, #1	; 0x1
        192e10:	eb690b1f 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        192e14:	e3300000 	teq	r0, #0	; 0x0
        192e18:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        192e1c:	eb6902ec 	bl	1bd39d4 <$GetGlobals>
        192e20:	eb695585 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        192e24:	e5901000 	ldr	r1, [r0]
        192e28:	e1a00006 	mov	r0, r6
        192e2c:	eb6923d7 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        192e30:	e3300000 	teq	r0, #0	; 0x0
        192e34:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        192e38:	e1a01005 	mov	r1, r5
        192e3c:	e1a00006 	mov	r0, r6
        192e40:	eb6927f2 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
        192e44:	e3300000 	teq	r0, #0	; 0x0
        192e48:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        192e4c:	e28400ac 	add	r0, r4, #172	; 0xac
        192e50:	e1a06000 	mov	r6, r0
        192e54:	e3a01001 	mov	r1, #1	; 0x1
        192e58:	eb690b0d 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        192e5c:	e3300000 	teq	r0, #0	; 0x0
        192e60:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        192e64:	eb6902da 	bl	1bd39d4 <$GetGlobals>
        192e68:	eb695573 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        192e6c:	e5901000 	ldr	r1, [r0]
        192e70:	e1a00006 	mov	r0, r6
        192e74:	eb6923c5 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        192e78:	e3300000 	teq	r0, #0	; 0x0
        192e7c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        192e80:	e1a00006 	mov	r0, r6
        192e84:	e1a01005 	mov	r1, r5
        192e88:	eb6927e0 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
        192e8c:	e3300000 	teq	r0, #0	; 0x0
        192e90:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        192e94:	e28400bc 	add	r0, r4, #188	; 0xbc
        192e98:	e1a05000 	mov	r5, r0
        192e9c:	eb690b01 	bl	1bd5aa8 <TSendSystemEvent::$Init(void)>
        192ea0:	e3300000 	teq	r0, #0	; 0x0
        192ea4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        192ea8:	e1a00005 	mov	r0, r5
        192eac:	e59f1020 	ldr	r1, [pc, #20]	; 192ed4 <TPowerManager::MainConstructor(void)+0x108>
        192eb0:	eb6923c0 	bl	1bdbdb8 <TSystemEvent::$SetEvent(unsigned long)>
        192eb4:	e1a00004 	mov	r0, r4
        192eb8:	eb69555f 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        192ebc:	e59f1014 	ldr	r1, [pc, #14]	; 192ed8 <TPowerManager::MainConstructor(void)+0x10c>
        192ec0:	e5810000 	str	r0, [r1]
        192ec4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        192ec8:	ea655d9a 	b	1aea538 <$BatteryInitialize(void)>
        192ecc:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        192ed0:	70672665 	rsbvc	r2, r7, r5, ror #12
        192ed4:	7070656e 	rsbvcs	r6, r0, lr, ror #10
        192ed8:	0c101794 	ldceq	7, cr1, [r0], -#592
    */
}

/**
 * Symbol: TPowerManager::MainDestructor(void)
 * Address: 00192edc
 */
TPowerManager::MainDestructor(void) {
    /*
        192edc:	ea686e08 	b	1bae704 <TAppWorld::$MainDestructor(void)>
    */
}

/**
 * Symbol: TPowerManager::DoCommand(TUMsgToken *, unsigned long *, TPowerManagerEvent *)
 * Address: 00192ee0
 */
TPowerManager::DoCommand(TUMsgToken *, unsigned long *, TPowerManagerEvent *) {
    /*
        192ee0:	e5b31008 	ldr	r1, [r3, #8]!
        192ee4:	e59fc014 	ldr	ip, [pc, #14]	; 192f00 <TPowerManager::DoCommand(TUMsgToken *, unsigned long *, TPowerManagerEvent *)+0x20>
        192ee8:	e131000c 	teq	r1, ip
        192eec:	0a69f229 	beq	1c0f798 <TPowerManager::$PowerOffMessage(void)>
        192ef0:	e59fc00c 	ldr	ip, [pc, #c]	; 192f04 <TPowerManager::DoCommand(TUMsgToken *, unsigned long *, TPowerManagerEvent *)+0x24>
        192ef4:	e131000c 	teq	r1, ip
        192ef8:	0a69f225 	beq	1c0f794 <TPowerManager::$BacklightMessage(void)>
        192efc:	e1a0f00e 	mov	pc, lr
        192f00:	706f7772 	rsbvc	r7, pc, r2, ror r7
        192f04:	626b6c74 	rsbvs	r6, fp, #29696	; 0x7400
    */
}

