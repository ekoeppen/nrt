#include "include/TSCPLoaderEventHandler.h"

/**
 * Symbol: TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 001b9d08
 */
TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        1b9d08:	e1a0c00d 	mov	ip, sp
        1b9d0c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b9d10:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9d14:	e1a04003 	mov	r4, r3
        1b9d18:	e3a07000 	mov	r7, #0	; 0x0
        1b9d1c:	e3a09000 	mov	r9, #0	; 0x0
        1b9d20:	e1a06003 	mov	r6, r3
        1b9d24:	e5938010 	ldr	r8, [r3, #16]
        1b9d28:	e3580005 	cmp	r8, #5	; 0x5
        1b9d2c:	23a08005 	movcs	r8, #5	; 0x5
        1b9d30:	e596501c 	ldr	r5, [r6, #28]
        1b9d34:	e3150020 	tst	r5, #32	; 0x20
        1b9d38:	0a000003 	beq	1b9d4c <TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x44>
        1b9d3c:	e2150001 	ands	r0, r5, #1	; 0x1
        1b9d40:	13a00001 	movne	r0, #1	; 0x1
        1b9d44:	e20000ff 	and	r0, r0, #255	; 0xff
        1b9d48:	eb695284 	bl	1c0e760 <$PowerOnDeviceCheck(unsigned char)>
        1b9d4c:	e59f00c4 	ldr	r0, [pc, #c4]	; 1b9e18 <TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x110>
        1b9d50:	e5900000 	ldr	r0, [r0]
        1b9d54:	e3100004 	tst	r0, #4	; 0x4
        1b9d58:	1a000024 	bne	1b9df0 <TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe8>
        1b9d5c:	e3150010 	tst	r5, #16	; 0x10
        1b9d60:	0a000022 	beq	1b9df0 <TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe8>
        1b9d64:	e3a0ae9b 	mov	sl, #2480	; 0x9b0
        1b9d68:	e24aaa05 	sub	sl, sl, #20480	; 0x5000
        1b9d6c:	e3580000 	cmp	r8, #0	; 0x0
        1b9d70:	9a00000b 	bls	1b9da4 <TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x9c>
        1b9d74:	e59f50a0 	ldr	r5, [pc, #a0]	; 1b9e1c <TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x114>
        1b9d78:	eb686715 	bl	1bd39d4 <$GetGlobals>
        1b9d7c:	e1a03005 	mov	r3, r5
        1b9d80:	e2862014 	add	r2, r6, #20	; 0x14
        1b9d84:	e8920006 	ldmia	r2, {r1, r2}
        1b9d88:	eb613dc2 	bl	1a09498 <TSCPLoader::$SCPLoad(unsigned long, unsigned long, unsigned long)>
        1b9d8c:	e1b07000 	movs	r7, r0
        1b9d90:	1137000a 	teqne	r7, sl
        1b9d94:	0a000002 	beq	1b9da4 <TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x9c>
        1b9d98:	e2899001 	add	r9, r9, #1	; 0x1
        1b9d9c:	e1590008 	cmp	r9, r8
        1b9da0:	3afffff4 	bcc	1b9d78 <TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x70>
        1b9da4:	eb68670a 	bl	1bd39d4 <$GetGlobals>
        1b9da8:	eb613dbf 	bl	1a094ac <TSCPLoader::$GetLastDevice(void)>
        1b9dac:	e3300000 	teq	r0, #0	; 0x0
        1b9db0:	1a00000e 	bne	1b9df0 <TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe8>
        1b9db4:	e3a09000 	mov	r9, #0	; 0x0
        1b9db8:	e3580000 	cmp	r8, #0	; 0x0
        1b9dbc:	9a00000b 	bls	1b9df0 <TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe8>
        1b9dc0:	e59f5058 	ldr	r5, [pc, #58]	; 1b9e20 <TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x118>
        1b9dc4:	eb686702 	bl	1bd39d4 <$GetGlobals>
        1b9dc8:	e1a03005 	mov	r3, r5
        1b9dcc:	e2862014 	add	r2, r6, #20	; 0x14
        1b9dd0:	e8920006 	ldmia	r2, {r1, r2}
        1b9dd4:	eb613daf 	bl	1a09498 <TSCPLoader::$SCPLoad(unsigned long, unsigned long, unsigned long)>
        1b9dd8:	e1b07000 	movs	r7, r0
        1b9ddc:	1137000a 	teqne	r7, sl
        1b9de0:	0a000002 	beq	1b9df0 <TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xe8>
        1b9de4:	e2899001 	add	r9, r9, #1	; 0x1
        1b9de8:	e1590008 	cmp	r9, r8
        1b9dec:	3afffff4 	bcc	1b9dc4 <TSCPLoaderEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xbc>
        1b9df0:	e5a6700c 	str	r7, [r6, #12]!
        1b9df4:	eb6866f6 	bl	1bd39d4 <$GetGlobals>
        1b9df8:	e1a02004 	mov	r2, r4
        1b9dfc:	e3a01020 	mov	r1, #32	; 0x20
        1b9e00:	eb68b147 	bl	1be6324 <TAppWorld::$AESetReply(unsigned long, TAEvent *)>
        1b9e04:	eb6866f2 	bl	1bd39d4 <$GetGlobals>
        1b9e08:	eb68b141 	bl	1be6314 <TAppWorld::$AEReplyImmed(void)>
        1b9e0c:	eb6866f0 	bl	1bd39d4 <$GetGlobals>
        1b9e10:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        1b9e14:	ea68b143 	b	1be6328 <TAppWorld::$AETerminateLoop(void)>
        1b9e18:	000013fc 	streqd	r1, [r0], -ip
        1b9e1c:	65787472 	ldrvsb	r7, [r8, -#1138]!
        1b9e20:	6d64656d 	stcvsl	5, cr6, [r4, -#436]!
    */
}

/**
 * Symbol: TSCPLoaderEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 001b9e24
 */
TSCPLoaderEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        1b9e24:	e1a0c00d 	mov	ip, sp
        1b9e28:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1b9e2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9e30:	eb6866e7 	bl	1bd39d4 <$GetGlobals>
        1b9e34:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        1b9e38:	ea613139 	b	1a06324 <TSCPLoader::$DeviceNotifyCompletion(void)>
    */
}

