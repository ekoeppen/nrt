#include "include/TSerialEndpoint.h"

/**
 * Symbol: Sizeof__15TSerialEndpointSFv
 * Address: 001d9968
 */
void TSerialEndpoint::Sizeof() {
    /*
        1d9968:	e3a00044 	mov	r0, #68	; 0x44
        1d996c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialEndpoint::New(void)
 * Address: 001d9ba8
 */
TSerialEndpoint::New(void) {
    /*
        1d9ba8:	e3a01000 	mov	r1, #0	; 0x0
        1d9bac:	e5801024 	str	r1, [r0, #36]	; fField36
        1d9bb0:	e5801028 	str	r1, [r0, #40]	; fField40
        1d9bb4:	e580102c 	str	r1, [r0, #44]	; fField44
        1d9bb8:	e5801030 	str	r1, [r0, #48]	; fField48
        1d9bbc:	e5801034 	str	r1, [r0, #52]	; fField52
        1d9bc0:	e5801038 	str	r1, [r0, #56]	; fField56
        1d9bc4:	e580103c 	str	r1, [r0, #60]	; fField60
        1d9bc8:	e5c01040 	strb	r1, [r0, #64]	; fField64
        1d9bcc:	e5c01041 	strb	r1, [r0, #65]	; fField65
        1d9bd0:	e5c01042 	strb	r1, [r0, #66]	; fField66
        1d9bd4:	e5c01043 	strb	r1, [r0, #67]	; fField67
        1d9bd8:	e5c01021 	strb	r1, [r0, #33]	; fField33
        1d9bdc:	e5801014 	str	r1, [r0, #20]	; fField20
        1d9be0:	e580101c 	str	r1, [r0, #28]	; fField28
        1d9be4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialEndpoint::Delete(void)
 * Address: 001d9be8
 */
TSerialEndpoint::Delete(void) {
    /*
        1d9be8:	e1a0c00d 	mov	ip, sp
        1d9bec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d9bf0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9bf4:	e1a04000 	mov	r4, r0
        1d9bf8:	eb60efa6 	bl	1a15a98 <TSerialEndpoint::$NukePending(void)>
        1d9bfc:	e5d42021 	ldrb	r2, [r4, #33]	; fField33
        1d9c00:	e3a01000 	mov	r1, #0	; 0x0
        1d9c04:	e3a00001 	mov	r0, #1	; 0x1
        1d9c08:	e3320000 	teq	r2, #0	; 0x0
        1d9c0c:	0a000004 	beq	1d9c24 <TSerialEndpoint::Delete(void)+0x3c>
        1d9c10:	e5840010 	str	r0, [r4, #16]	; fField16
        1d9c14:	e5c41042 	strb	r1, [r4, #66]	; fField66
        1d9c18:	e5c41040 	strb	r1, [r4, #64]	; fField64
        1d9c1c:	e1a00004 	mov	r0, r4
        1d9c20:	eb60d2b7 	bl	1a0e704 <TSerialEndpoint::$Close(void)>
        1d9c24:	e594002c 	ldr	r0, [r4, #44]	; fField44
        1d9c28:	e3300000 	teq	r0, #0	; 0x0
        1d9c2c:	11a00004 	movne	r0, r4
        1d9c30:	1b60ef97 	blne	1a15a94 <TSerialEndpoint::$NukeGetPBList(void)>
        1d9c34:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1d9c38:	e3300000 	teq	r0, #0	; 0x0
        1d9c3c:	11a00004 	movne	r0, r4
        1d9c40:	1b60ef95 	blne	1a15a9c <TSerialEndpoint::$NukePutPBList(void)>
        1d9c44:	e5945030 	ldr	r5, [r4, #48]	; fField48
        1d9c48:	e3350000 	teq	r5, #0	; 0x0
        1d9c4c:	0a000004 	beq	1d9c64 <TSerialEndpoint::Delete(void)+0x7c>
        1d9c50:	e1a00005 	mov	r0, r5
        1d9c54:	e3a01000 	mov	r1, #0	; 0x0
        1d9c58:	eb67d2ac 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1d9c5c:	e1a00005 	mov	r0, r5
        1d9c60:	eb67ce9e 	bl	1bcd6e0 <$__dl(void *)>
        1d9c64:	e5940038 	ldr	r0, [r4, #56]	; fField56
        1d9c68:	e3300000 	teq	r0, #0	; 0x0
        1d9c6c:	13a01001 	movne	r1, #1	; 0x1
        1d9c70:	1b675afb 	blne	1bb0864 <TPseudoSyncState::$__dt(void)>
        1d9c74:	e594003c 	ldr	r0, [r4, #60]	; fField60
        1d9c78:	e3300000 	teq	r0, #0	; 0x0
        1d9c7c:	13a01001 	movne	r1, #1	; 0x1
        1d9c80:	1b675af7 	blne	1bb0864 <TPseudoSyncState::$__dt(void)>
        1d9c84:	e1a00004 	mov	r0, r4
        1d9c88:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1d9c8c:	ea6777d9 	b	1bb7bf8 <TEndpoint::$DestroyBaseEndpoint(void)>
    */
}

/**
 * Symbol: TSerialEndpoint::DeleteLeavingTool(void)
 * Address: 001d9c90
 */
TSerialEndpoint::DeleteLeavingTool(void) {
    /*
        1d9c90:	e1a0c00d 	mov	ip, sp
        1d9c94:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d9c98:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9c9c:	e1a04000 	mov	r4, r0
        1d9ca0:	e3a05000 	mov	r5, #0	; 0x0
        1d9ca4:	e5d00042 	ldrb	r0, [r0, #66]	; fField66
        1d9ca8:	e3300000 	teq	r0, #0	; 0x0
        1d9cac:	13e000a2 	mvnne	r0, #162	; 0xa2
        1d9cb0:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1d9cb4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1d9cb8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1d9cbc:	e3300000 	teq	r0, #0	; 0x0
        1d9cc0:	03e000a5 	mvneq	r0, #165	; 0xa5
        1d9cc4:	02400b23 	subeq	r0, r0, #35840	; 0x8c00
        1d9cc8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1d9ccc:	e1a00004 	mov	r0, r4
        1d9cd0:	e3a01003 	mov	r1, #3	; 0x3
        1d9cd4:	eb6118c7 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1d9cd8:	e3300000 	teq	r0, #0	; 0x0
        1d9cdc:	0a000004 	beq	1d9cf4 <TSerialEndpoint::DeleteLeavingTool(void)+0x64>
        1d9ce0:	e1a00004 	mov	r0, r4
        1d9ce4:	e3a01001 	mov	r1, #1	; 0x1
        1d9ce8:	eb61211a 	bl	1a22158 <TSerialEndpoint::$nAbort(unsigned char)>
        1d9cec:	e1b05000 	movs	r5, r0
        1d9cf0:	1a00000d 	bne	1d9d2c <TSerialEndpoint::DeleteLeavingTool(void)+0x9c>
        1d9cf4:	e5d40021 	ldrb	r0, [r4, #33]	; fField33
        1d9cf8:	e3300000 	teq	r0, #0	; 0x0
        1d9cfc:	0a000005 	beq	1d9d18 <TSerialEndpoint::DeleteLeavingTool(void)+0x88>
        1d9d00:	e5942030 	ldr	r2, [r4, #48]	; fField48
        1d9d04:	e1a00004 	mov	r0, r4
        1d9d08:	e3a01008 	mov	r1, #8	; 0x8
        1d9d0c:	eb60e738 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1d9d10:	e1b05000 	movs	r5, r0
        1d9d14:	1a000004 	bne	1d9d2c <TSerialEndpoint::DeleteLeavingTool(void)+0x9c>
        1d9d18:	e3a00000 	mov	r0, #0	; 0x0
        1d9d1c:	e5c40040 	strb	r0, [r4, #64]	; fField64
        1d9d20:	e5c40021 	strb	r0, [r4, #33]	; fField33
        1d9d24:	e1a00004 	mov	r0, r4
        1d9d28:	eb60d695 	bl	1a0f784 <TSerialEndpoint::$Delete(void)>
        1d9d2c:	e1a00005 	mov	r0, r5
        1d9d30:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::HandleEvent(unsigned long, TAEvent *, unsigned long)
 * Address: 001d9d34
 */
TSerialEndpoint::HandleEvent(unsigned long, TAEvent *, unsigned long) {
    /*
        1d9d34:	e3a00000 	mov	r0, #0	; 0x0
        1d9d38:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 001d9d3c
 */
TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        1d9d3c:	e1a0c00d 	mov	ip, sp
        1d9d40:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1d9d44:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9d48:	e1a04000 	mov	r4, r0
        1d9d4c:	e1a05001 	mov	r5, r1
        1d9d50:	e3a09000 	mov	r9, #0	; 0x0
        1d9d54:	e5900030 	ldr	r0, [r0, #48]	; fField48
        1d9d58:	e1a01000 	mov	r1, r0
        1d9d5c:	e5902000 	ldr	r2, [r0]
        1d9d60:	e5950000 	ldr	r0, [r5]
        1d9d64:	e1320000 	teq	r2, r0
        1d9d68:	1a000002 	bne	1d9d78 <TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x3c>
        1d9d6c:	e1a00004 	mov	r0, r4
        1d9d70:	eb60e2e9 	bl	1a1291c <TSerialEndpoint::$HandleEventReply(TCommToolEventPB *)>
        1d9d74:	ea000035 	b	1d9e50 <TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x114>
        1d9d78:	e3a06000 	mov	r6, #0	; 0x0
        1d9d7c:	e3a08000 	mov	r8, #0	; 0x0
        1d9d80:	e3a07000 	mov	r7, #0	; 0x0
        1d9d84:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d9d88:	e5900000 	ldr	r0, [r0]
        1d9d8c:	e3500000 	cmp	r0, #0	; 0x0
        1d9d90:	da000012 	ble	1d9de0 <TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0xa4>
        1d9d94:	e1a01007 	mov	r1, r7
        1d9d98:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d9d9c:	eb683168 	bl	1be6344 <CList::$At(long)>
        1d9da0:	e1a06000 	mov	r6, r0
        1d9da4:	e5900000 	ldr	r0, [r0]
        1d9da8:	e5951000 	ldr	r1, [r5]
        1d9dac:	e1300001 	teq	r0, r1
        1d9db0:	1a000005 	bne	1d9dcc <TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x90>
        1d9db4:	e1a01007 	mov	r1, r7
        1d9db8:	e3a02001 	mov	r2, #1	; 0x1
        1d9dbc:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d9dc0:	eb684a1b 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        1d9dc4:	e3a08001 	mov	r8, #1	; 0x1
        1d9dc8:	ea000004 	b	1d9de0 <TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0xa4>
        1d9dcc:	e2877001 	add	r7, r7, #1	; 0x1
        1d9dd0:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1d9dd4:	e5900000 	ldr	r0, [r0]
        1d9dd8:	e1500007 	cmp	r0, r7
        1d9ddc:	caffffec 	bgt	1d9d94 <TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x58>
        1d9de0:	e3380000 	teq	r8, #0	; 0x0
        1d9de4:	0a000019 	beq	1d9e50 <TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x114>
        1d9de8:	e1a01006 	mov	r1, r6
        1d9dec:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1d9df0:	eb60b989 	bl	1a0841c <TEndpointEventHandler::$KillTimer(unsigned long)>
        1d9df4:	e5960010 	ldr	r0, [r6, #16]	; fField16
        1d9df8:	e3300001 	teq	r0, #1	; 0x1
        1d9dfc:	0a00000c 	beq	1d9e34 <TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0xf8>
        1d9e00:	e3300002 	teq	r0, #2	; 0x2
        1d9e04:	0a000006 	beq	1d9e24 <TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0xe8>
        1d9e08:	e3300004 	teq	r0, #4	; 0x4
        1d9e0c:	0a00000c 	beq	1d9e44 <TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x108>
        1d9e10:	e3300010 	teq	r0, #16	; 0x10
        1d9e14:	01a01006 	moveq	r1, r6
        1d9e18:	01a00004 	moveq	r0, r4
        1d9e1c:	0b611868 	bleq	1a1ffc4 <TSerialEndpoint::$HandleAbortReply(TCommToolAbortPB *)>
        1d9e20:	ea00000a 	b	1d9e50 <TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x114>
        1d9e24:	e1a01006 	mov	r1, r6
        1d9e28:	e1a00004 	mov	r0, r4
        1d9e2c:	eb60e2be 	bl	1a1292c <TSerialEndpoint::$HandlePutReply(TCommToolPutPB *)>
        1d9e30:	ea000006 	b	1d9e50 <TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x114>
        1d9e34:	e1a01006 	mov	r1, r6
        1d9e38:	e1a00004 	mov	r0, r4
        1d9e3c:	eb60e2b7 	bl	1a12920 <TSerialEndpoint::$HandleGetReply(TCommToolGetPB *)>
        1d9e40:	ea000002 	b	1d9e50 <TSerialEndpoint::HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)+0x114>
        1d9e44:	e1a01006 	mov	r1, r6
        1d9e48:	e1a00004 	mov	r0, r4
        1d9e4c:	eb60e2af 	bl	1a12910 <TSerialEndpoint::$HandleControlReply(TCommToolControlPB *)>
        1d9e50:	e1a00009 	mov	r0, r9
        1d9e54:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::AddToAppWorld(void)
 * Address: 001d9e58
 */
TSerialEndpoint::AddToAppWorld(void) {
    /*
        1d9e58:	e3e000b1 	mvn	r0, #177	; 0xb1
        1d9e5c:	e2400b23 	sub	r0, r0, #35840	; 0x8c00
        1d9e60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialEndpoint::RemoveFromAppWorld(void)
 * Address: 001d9eb8
 */
TSerialEndpoint::RemoveFromAppWorld(void) {
    /*
        1d9eb8:	e3e000b1 	mvn	r0, #177	; 0xb1
        1d9ebc:	e2400b23 	sub	r0, r0, #35840	; 0x8c00
        1d9ec0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialEndpoint::Open(unsigned long)
 * Address: 001d9ec4
 */
TSerialEndpoint::Open(unsigned long) {
    /*
        1d9ec4:	e1a0c00d 	mov	ip, sp
        1d9ec8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d9ecc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9ed0:	e1a04000 	mov	r4, r0
        1d9ed4:	e1a05001 	mov	r5, r1
        1d9ed8:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1d9edc:	e3300000 	teq	r0, #0	; 0x0
        1d9ee0:	13e000a5 	mvnne	r0, #165	; 0xa5
        1d9ee4:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1d9ee8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1d9eec:	e1a00004 	mov	r0, r4
        1d9ef0:	e3a01001 	mov	r1, #1	; 0x1
        1d9ef4:	eb61183f 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1d9ef8:	e3300000 	teq	r0, #0	; 0x0
        1d9efc:	13a00042 	movne	r0, #66	; 0x42
        1d9f00:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1d9f04:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1d9f08:	e5d40042 	ldrb	r0, [r4, #66]	; fField66
        1d9f0c:	e3300000 	teq	r0, #0	; 0x0
        1d9f10:	13e000a2 	mvnne	r0, #162	; 0xa2
        1d9f14:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1d9f18:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1d9f1c:	e3a00008 	mov	r0, #8	; 0x8
        1d9f20:	e5840010 	str	r0, [r4, #16]	; fField16
        1d9f24:	e1a00004 	mov	r0, r4
        1d9f28:	eb60e6a2 	bl	1a139b8 <TSerialEndpoint::$InitPending(void)>
        1d9f2c:	e3300000 	teq	r0, #0	; 0x0
        1d9f30:	1a000013 	bne	1d9f84 <TSerialEndpoint::Open(unsigned long)+0xc0>
        1d9f34:	e1a00004 	mov	r0, r4
        1d9f38:	eb60e69b 	bl	1a139ac <TSerialEndpoint::$InitGetPBList(void)>
        1d9f3c:	e3300000 	teq	r0, #0	; 0x0
        1d9f40:	1a00000f 	bne	1d9f84 <TSerialEndpoint::Open(unsigned long)+0xc0>
        1d9f44:	e1a00004 	mov	r0, r4
        1d9f48:	eb60e69c 	bl	1a139c0 <TSerialEndpoint::$InitPutPBList(void)>
        1d9f4c:	e3300000 	teq	r0, #0	; 0x0
        1d9f50:	1a00000b 	bne	1d9f84 <TSerialEndpoint::Open(unsigned long)+0xc0>
        1d9f54:	e3a01000 	mov	r1, #0	; 0x0
        1d9f58:	e3a00000 	mov	r0, #0	; 0x0
        1d9f5c:	eb60bd5f 	bl	1a094e0 <TCommToolEventPB::$__ct(unsigned long)>
        1d9f60:	e5840030 	str	r0, [r4, #48]	; fField48
        1d9f64:	e3300000 	teq	r0, #0	; 0x0
        1d9f68:	1a000001 	bne	1d9f74 <TSerialEndpoint::Open(unsigned long)+0xb0>
        1d9f6c:	eb68206b 	bl	1be2120 <$MemError>
        1d9f70:	ea000003 	b	1d9f84 <TSerialEndpoint::Open(unsigned long)+0xc0>
        1d9f74:	e1a01000 	mov	r1, r0
        1d9f78:	e5845018 	str	r5, [r4, #24]	; fField24
        1d9f7c:	e1a00004 	mov	r0, r4
        1d9f80:	eb60f2e5 	bl	1a16b1c <TSerialEndpoint::$PostEventRequest(TCommToolEventPB *)>
        1d9f84:	e3300000 	teq	r0, #0	; 0x0
        1d9f88:	13a01000 	movne	r1, #0	; 0x0
        1d9f8c:	03a01001 	moveq	r1, #1	; 0x1
        1d9f90:	e5a41010 	str	r1, [r4, #16]!	; fField16
        1d9f94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::Close(void)
 * Address: 001d9f98
 */
TSerialEndpoint::Close(void) {
    /*
        1d9f98:	e1a0c00d 	mov	ip, sp
        1d9f9c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1d9fa0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d9fa4:	e1a04000 	mov	r4, r0
        1d9fa8:	e3a05000 	mov	r5, #0	; 0x0
        1d9fac:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1d9fb0:	e3300001 	teq	r0, #1	; 0x1
        1d9fb4:	13300000 	teqne	r0, #0	; 0x0
        1d9fb8:	13e000a5 	mvnne	r0, #165	; 0xa5
        1d9fbc:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1d9fc0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1d9fc4:	e1a00004 	mov	r0, r4
        1d9fc8:	e3a01003 	mov	r1, #3	; 0x3
        1d9fcc:	eb611809 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1d9fd0:	e3300000 	teq	r0, #0	; 0x0
        1d9fd4:	13a00042 	movne	r0, #66	; 0x42
        1d9fd8:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1d9fdc:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1d9fe0:	e5d40042 	ldrb	r0, [r4, #66]	; fField66
        1d9fe4:	e3300000 	teq	r0, #0	; 0x0
        1d9fe8:	13e000a2 	mvnne	r0, #162	; 0xa2
        1d9fec:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1d9ff0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1d9ff4:	e5d40021 	ldrb	r0, [r4, #33]	; fField33
        1d9ff8:	e3a07001 	mov	r7, #1	; 0x1
        1d9ffc:	e3a06000 	mov	r6, #0	; 0x0
        1da000:	e3300000 	teq	r0, #0	; 0x0
        1da004:	0a000026 	beq	1da0a4 <TSerialEndpoint::Close(void)+0x10c>
        1da008:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1da00c:	e3300000 	teq	r0, #0	; 0x0
        1da010:	0a000003 	beq	1da024 <TSerialEndpoint::Close(void)+0x8c>
        1da014:	e5942030 	ldr	r2, [r4, #48]	; fField48
        1da018:	e1a00004 	mov	r0, r4
        1da01c:	e3a01008 	mov	r1, #8	; 0x8
        1da020:	eb60e673 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1da024:	e24dd058 	sub	sp, sp, #88	; 0x58
        1da028:	e3a03000 	mov	r3, #0	; 0x0
        1da02c:	e92d0008 	stmdb	sp!, {r3}
        1da030:	e28d0004 	add	r0, sp, #4	; 0x4
        1da034:	e3a02000 	mov	r2, #0	; 0x0
        1da038:	e3a01002 	mov	r1, #2	; 0x2
        1da03c:	eb614d96 	bl	1a2d69c <TCommToolControlPB::$__ct(unsigned long, long, unsigned long, unsigned char)>
        1da040:	e28dd004 	add	sp, sp, #4	; 0x4
        1da044:	e5c47040 	strb	r7, [r4, #64]	; fField64
        1da048:	e3a03001 	mov	r3, #1	; 0x1
        1da04c:	e3a02000 	mov	r2, #0	; 0x0
        1da050:	e3a01000 	mov	r1, #0	; 0x0
        1da054:	e3a00010 	mov	r0, #16	; 0x10
        1da058:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1da05c:	e08d0000 	add	r0, sp, r0
        1da060:	e2803028 	add	r3, r0, #40	; 0x28
        1da064:	e3a0200c 	mov	r2, #12	; 0xc
        1da068:	e92d000c 	stmdb	sp!, {r2, r3}
        1da06c:	e28d3034 	add	r3, sp, #52	; 0x34
        1da070:	e28d2018 	add	r2, sp, #24	; 0x18
        1da074:	e3a01004 	mov	r1, #4	; 0x4
        1da078:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1da07c:	eb60b4d2 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1da080:	e28dd018 	add	sp, sp, #24	; 0x18
        1da084:	e1b05000 	movs	r5, r0
        1da088:	e5c46040 	strb	r6, [r4, #64]	; fField64
        1da08c:	e5c46021 	strb	r6, [r4, #33]	; fField33
        1da090:	059d5030 	ldreq	r5, [sp, #48]	; fField48
        1da094:	e1a0000d 	mov	r0, sp
        1da098:	e3a01000 	mov	r1, #0	; 0x0
        1da09c:	eb67d19b 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1da0a0:	e28dd058 	add	sp, sp, #88	; 0x58
        1da0a4:	e5846010 	str	r6, [r4, #16]	; fField16
        1da0a8:	e1a00004 	mov	r0, r4
        1da0ac:	eb60ee79 	bl	1a15a98 <TSerialEndpoint::$NukePending(void)>
        1da0b0:	e1a00004 	mov	r0, r4
        1da0b4:	eb60ee76 	bl	1a15a94 <TSerialEndpoint::$NukeGetPBList(void)>
        1da0b8:	e1a00004 	mov	r0, r4
        1da0bc:	eb60ee76 	bl	1a15a9c <TSerialEndpoint::$NukePutPBList(void)>
        1da0c0:	e5947030 	ldr	r7, [r4, #48]	; fField48
        1da0c4:	e3370000 	teq	r7, #0	; 0x0
        1da0c8:	0a000004 	beq	1da0e0 <TSerialEndpoint::Close(void)+0x148>
        1da0cc:	e1a00007 	mov	r0, r7
        1da0d0:	e3a01000 	mov	r1, #0	; 0x0
        1da0d4:	eb67d18d 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1da0d8:	e1a00007 	mov	r0, r7
        1da0dc:	eb67cd7f 	bl	1bcd6e0 <$__dl(void *)>
        1da0e0:	e1a00005 	mov	r0, r5
        1da0e4:	e5a46030 	str	r6, [r4, #48]!	; fField48
        1da0e8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::Abort(void)
 * Address: 001da0ec
 */
TSerialEndpoint::Abort(void) {
    /*
        1da0ec:	e3a01001 	mov	r1, #1	; 0x1
        1da0f0:	ea612018 	b	1a22158 <TSerialEndpoint::$nAbort(unsigned char)>
    */
}

/**
 * Symbol: TSerialEndpoint::SetSync(unsigned char)
 * Address: 001da0f4
 */
TSerialEndpoint::SetSync(unsigned char) {
    /*
        1da0f4:	e1a0c00d 	mov	ip, sp
        1da0f8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1da0fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da100:	e1a04000 	mov	r4, r0
        1da104:	e20150ff 	and	r5, r1, #255	; 0xff
        1da108:	e5d00020 	ldrb	r0, [r0, #32]	; fField32
        1da10c:	e1a06000 	mov	r6, r0
        1da110:	e1300005 	teq	r0, r5
        1da114:	0a000007 	beq	1da138 <TSerialEndpoint::SetSync(unsigned char)+0x44>
        1da118:	e3350000 	teq	r5, #0	; 0x0
        1da11c:	0a000004 	beq	1da134 <TSerialEndpoint::SetSync(unsigned char)+0x40>
        1da120:	e1a00004 	mov	r0, r4
        1da124:	e3a01002 	mov	r1, #2	; 0x2
        1da128:	eb6117b2 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1da12c:	e3300000 	teq	r0, #0	; 0x0
        1da130:	1a000000 	bne	1da138 <TSerialEndpoint::SetSync(unsigned char)+0x44>
        1da134:	e5c45020 	strb	r5, [r4, #32]	; fField32
        1da138:	e1a00006 	mov	r0, r6
        1da13c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::GetProtAddr(TOptionArray *, TOptionArray *, unsigned long)
 * Address: 001da140
 */
TSerialEndpoint::GetProtAddr(TOptionArray *, TOptionArray *, unsigned long) {
    /*
        1da140:	e3e000b1 	mvn	r0, #177	; 0xb1
        1da144:	e2400b23 	sub	r0, r0, #35840	; 0x8c00
        1da148:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialEndpoint::OptMgmt(unsigned long, TOptionArray *, unsigned long)
 * Address: 001da14c
 */
TSerialEndpoint::OptMgmt(unsigned long, TOptionArray *, unsigned long) {
    /*
        1da14c:	e1a0c00d 	mov	ip, sp
        1da150:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1da154:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da158:	e1a0c003 	mov	ip, r3
        1da15c:	e5d03020 	ldrb	r3, [r0, #32]	; fField32
        1da160:	e92d0008 	stmdb	sp!, {r3}
        1da164:	e1a0300c 	mov	r3, ip
        1da168:	eb612000 	bl	1a22170 <TSerialEndpoint::$nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)>
        1da16c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::Bind(TOptionArray *, long *, unsigned long)
 * Address: 001da170
 */
TSerialEndpoint::Bind(TOptionArray *, long *, unsigned long) {
    /*
        1da170:	e1a02003 	mov	r2, r3
        1da174:	e5d03020 	ldrb	r3, [r0, #32]	; fField32
        1da178:	ea611ff8 	b	1a22160 <TSerialEndpoint::$nBind(TOptionArray *, unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TSerialEndpoint::UnBind(unsigned long)
 * Address: 001da17c
 */
TSerialEndpoint::UnBind(unsigned long) {
    /*
        1da17c:	e5d02020 	ldrb	r2, [r0, #32]	; fField32
        1da180:	ea612400 	b	1a23188 <TSerialEndpoint::$nUnBind(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TSerialEndpoint::Listen(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)
 * Address: 001da184
 */
TSerialEndpoint::Listen(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long) {
    /*
        1da184:	e3310000 	teq	r1, #0	; 0x0
        1da188:	13e00eca 	mvnne	r0, #3232	; 0xca0
        1da18c:	12400902 	subne	r0, r0, #32768	; 0x8000
        1da190:	11a0f00e 	movne	pc, lr
        1da194:	e1a0c00d 	mov	ip, sp
        1da198:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1da19c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da1a0:	e1a0e002 	mov	lr, r2
        1da1a4:	e1a0c003 	mov	ip, r3
        1da1a8:	e59b2008 	ldr	r2, [fp, #8]
        1da1ac:	e59b4004 	ldr	r4, [fp, #4]
        1da1b0:	e5d03020 	ldrb	r3, [r0, #32]	; fField32
        1da1b4:	e92d000c 	stmdb	sp!, {r2, r3}
        1da1b8:	e1a03004 	mov	r3, r4
        1da1bc:	e1a0200c 	mov	r2, ip
        1da1c0:	e1a0100e 	mov	r1, lr
        1da1c4:	eb611fe8 	bl	1a2216c <TSerialEndpoint::$nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
        1da1c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::Accept(TEndpoint *, TOptionArray *, TOptionArray *, CBufferSegment *, long, unsigned long)
 * Address: 001da22c
 */
TSerialEndpoint::Accept(TEndpoint *, TOptionArray *, TOptionArray *, CBufferSegment *, long, unsigned long) {
    /*
        1da22c:	e3320000 	teq	r2, #0	; 0x0
        1da230:	13e00eca 	mvnne	r0, #3232	; 0xca0
        1da234:	12400902 	subne	r0, r0, #32768	; 0x8000
        1da238:	11a0f00e 	movne	pc, lr
        1da23c:	e1a0c00d 	mov	ip, sp
        1da240:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1da244:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da248:	e1a0e001 	mov	lr, r1
        1da24c:	e1a0c003 	mov	ip, r3
        1da250:	e28b5008 	add	r5, fp, #8	; 0x8
        1da254:	e8950022 	ldmia	r5, {r1, r5}
        1da258:	e59b4004 	ldr	r4, [fp, #4]
        1da25c:	e5d03020 	ldrb	r3, [r0, #32]	; fField32
        1da260:	e1a02005 	mov	r2, r5
        1da264:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1da268:	e1a03004 	mov	r3, r4
        1da26c:	e1a0200c 	mov	r2, ip
        1da270:	e1a0100e 	mov	r1, lr
        1da274:	eb611fb8 	bl	1a2215c <TSerialEndpoint::$nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)>
        1da278:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::Connect(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)
 * Address: 001da27c
 */
TSerialEndpoint::Connect(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long) {
    /*
        1da27c:	e3310000 	teq	r1, #0	; 0x0
        1da280:	13e00eca 	mvnne	r0, #3232	; 0xca0
        1da284:	12400902 	subne	r0, r0, #32768	; 0x8000
        1da288:	11a0f00e 	movne	pc, lr
        1da28c:	e1a0c00d 	mov	ip, sp
        1da290:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1da294:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da298:	e1a0e002 	mov	lr, r2
        1da29c:	e1a0c003 	mov	ip, r3
        1da2a0:	e59b2008 	ldr	r2, [fp, #8]
        1da2a4:	e59b4004 	ldr	r4, [fp, #4]
        1da2a8:	e5d03020 	ldrb	r3, [r0, #32]	; fField32
        1da2ac:	e92d000c 	stmdb	sp!, {r2, r3}
        1da2b0:	e1a03004 	mov	r3, r4
        1da2b4:	e1a0200c 	mov	r2, ip
        1da2b8:	e1a0100e 	mov	r1, lr
        1da2bc:	eb611fa8 	bl	1a22164 <TSerialEndpoint::$nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
        1da2c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::Disconnect(CBufferSegment *, long, long)
 * Address: 001da2c4
 */
TSerialEndpoint::Disconnect(CBufferSegment *, long, long) {
    /*
        1da2c4:	e1a0c00d 	mov	ip, sp
        1da2c8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1da2cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da2d0:	e1a0c002 	mov	ip, r2
        1da2d4:	e1a0e003 	mov	lr, r3
        1da2d8:	e3a02001 	mov	r2, #1	; 0x1
        1da2dc:	e5c02020 	strb	r2, [r0, #32]	; fField32
        1da2e0:	e3a03001 	mov	r3, #1	; 0x1
        1da2e4:	e3a02000 	mov	r2, #0	; 0x0
        1da2e8:	e92d000c 	stmdb	sp!, {r2, r3}
        1da2ec:	e1a0300e 	mov	r3, lr
        1da2f0:	e1a0200c 	mov	r2, ip
        1da2f4:	eb611f9b 	bl	1a22168 <TSerialEndpoint::$nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)>
        1da2f8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::Release(unsigned long)
 * Address: 001da2fc
 */
TSerialEndpoint::Release(unsigned long) {
    /*
        1da2fc:	e5d02020 	ldrb	r2, [r0, #32]	; fField32
        1da300:	ea611f9d 	b	1a2217c <TSerialEndpoint::$nRelease(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TSerialEndpoint::Snd(unsigned char *, long &, unsigned long, unsigned long)
 * Address: 001da304
 */
TSerialEndpoint::Snd(unsigned char *, long &, unsigned long, unsigned long) {
    /*
        1da304:	e1a0c00d 	mov	ip, sp
        1da308:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1da30c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da310:	e1a0c001 	mov	ip, r1
        1da314:	e1a04002 	mov	r4, r2
        1da318:	e1a0e003 	mov	lr, r3
        1da31c:	e59b1004 	ldr	r1, [fp, #4]
        1da320:	e24dd004 	sub	sp, sp, #4	; 0x4
        1da324:	e5922000 	ldr	r2, [r2]
        1da328:	e3a03000 	mov	r3, #0	; 0x0
        1da32c:	e58d2000 	str	r2, [sp]
        1da330:	e5d02020 	ldrb	r2, [r0, #32]	; fField32
        1da334:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1da338:	e1a0300e 	mov	r3, lr
        1da33c:	e28d200c 	add	r2, sp, #12	; 0xc
        1da340:	e1a0100c 	mov	r1, ip
        1da344:	eb61238e 	bl	1a23184 <TSerialEndpoint::$nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        1da348:	e5bd100c 	ldr	r1, [sp, #12]!
        1da34c:	e5841000 	str	r1, [r4]
        1da350:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::Snd(CBufferSegment *, unsigned long, unsigned long)
 * Address: 001da354
 */
TSerialEndpoint::Snd(CBufferSegment *, unsigned long, unsigned long) {
    /*
        1da354:	e1a0c00d 	mov	ip, sp
        1da358:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1da35c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da360:	e1a0c002 	mov	ip, r2
        1da364:	e1a0e003 	mov	lr, r3
        1da368:	e3a03000 	mov	r3, #0	; 0x0
        1da36c:	e5d02020 	ldrb	r2, [r0, #32]	; fField32
        1da370:	e92d000c 	stmdb	sp!, {r2, r3}
        1da374:	e1a0300e 	mov	r3, lr
        1da378:	e1a0200c 	mov	r2, ip
        1da37c:	eb61237f 	bl	1a23180 <TSerialEndpoint::$nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        1da380:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::Rcv(unsigned char *, long &, long, unsigned long *, unsigned long)
 * Address: 001da384
 */
TSerialEndpoint::Rcv(unsigned char *, long &, long, unsigned long *, unsigned long) {
    /*
        1da384:	e1a0c00d 	mov	ip, sp
        1da388:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1da38c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da390:	e1a0c000 	mov	ip, r0
        1da394:	e1a05001 	mov	r5, r1
        1da398:	e1a04002 	mov	r4, r2
        1da39c:	e1a0e003 	mov	lr, r3
        1da3a0:	e99b0003 	ldmib	fp, {r0, r1}
        1da3a4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1da3a8:	e5922000 	ldr	r2, [r2]
        1da3ac:	e3a03000 	mov	r3, #0	; 0x0
        1da3b0:	e58d2000 	str	r2, [sp]
        1da3b4:	e5dc2020 	ldrb	r2, [ip, #32]	; fField32
        1da3b8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1da3bc:	e1a0300e 	mov	r3, lr
        1da3c0:	e28d2010 	add	r2, sp, #16	; 0x10
        1da3c4:	e1a01005 	mov	r1, r5
        1da3c8:	e1a0000c 	mov	r0, ip
        1da3cc:	eb611f69 	bl	1a22178 <TSerialEndpoint::$nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
        1da3d0:	e5bd1010 	ldr	r1, [sp, #16]!	; fField16
        1da3d4:	e5841000 	str	r1, [r4]
        1da3d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::Rcv(CBufferSegment *, long, unsigned long *, unsigned long)
 * Address: 001da3dc
 */
TSerialEndpoint::Rcv(CBufferSegment *, long, unsigned long *, unsigned long) {
    /*
        1da3dc:	e1a0c00d 	mov	ip, sp
        1da3e0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1da3e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da3e8:	e1a0e001 	mov	lr, r1
        1da3ec:	e1a0c002 	mov	ip, r2
        1da3f0:	e1a04003 	mov	r4, r3
        1da3f4:	e3a03000 	mov	r3, #0	; 0x0
        1da3f8:	e59b1004 	ldr	r1, [fp, #4]
        1da3fc:	e5d02020 	ldrb	r2, [r0, #32]	; fField32
        1da400:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1da404:	e1a03004 	mov	r3, r4
        1da408:	e1a0200c 	mov	r2, ip
        1da40c:	e1a0100e 	mov	r1, lr
        1da410:	eb611f57 	bl	1a22174 <TSerialEndpoint::$nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
        1da414:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::WaitForEvent(unsigned long)
 * Address: 001da418
 */
TSerialEndpoint::WaitForEvent(unsigned long) {
    /*
        1da418:	e1a0c00d 	mov	ip, sp
        1da41c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1da420:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da424:	e1a04000 	mov	r4, r0
        1da428:	e1a05001 	mov	r5, r1
        1da42c:	e3a00001 	mov	r0, #1	; 0x1
        1da430:	e5c40041 	strb	r0, [r4, #65]	; fField65
        1da434:	e594003c 	ldr	r0, [r4, #60]	; fField60
        1da438:	e3300000 	teq	r0, #0	; 0x0
        1da43c:	1a000008 	bne	1da464 <TSerialEndpoint::WaitForEvent(unsigned long)+0x4c>
        1da440:	e3a00000 	mov	r0, #0	; 0x0
        1da444:	eb6758fa 	bl	1bb0834 <TPseudoSyncState::$__ct(void)>
        1da448:	e584003c 	str	r0, [r4, #60]	; fField60
        1da44c:	e3300000 	teq	r0, #0	; 0x0
        1da450:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        1da454:	0a681f31 	beq	1be2120 <$MemError>
        1da458:	eb674ca0 	bl	1bad6e0 <TPseudoSyncState::$Init(void)>
        1da45c:	e3300000 	teq	r0, #0	; 0x0
        1da460:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1da464:	e1a01005 	mov	r1, r5
        1da468:	e594003c 	ldr	r0, [r4, #60]	; fField60
        1da46c:	eb674864 	bl	1bac604 <TPseudoSyncState::$Block(unsigned long)>
        1da470:	e3a01000 	mov	r1, #0	; 0x0
        1da474:	e5c41041 	strb	r1, [r4, #65]	; fField65
        1da478:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)
 * Address: 001da47c
 */
TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char) {
    /*
        1da47c:	e1a0c00d 	mov	ip, sp
        1da480:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1da484:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da488:	e1a04000 	mov	r4, r0
        1da48c:	e1a05001 	mov	r5, r1
        1da490:	e1a06002 	mov	r6, r2
        1da494:	e20380ff 	and	r8, r3, #255	; 0xff
        1da498:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1da49c:	e3300001 	teq	r0, #1	; 0x1
        1da4a0:	13e000a5 	mvnne	r0, #165	; 0xa5
        1da4a4:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1da4a8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1da4ac:	e3380000 	teq	r8, #0	; 0x0
        1da4b0:	0a000006 	beq	1da4d0 <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x54>
        1da4b4:	e1a00004 	mov	r0, r4
        1da4b8:	e3a01001 	mov	r1, #1	; 0x1
        1da4bc:	eb6116cd 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1da4c0:	e3300000 	teq	r0, #0	; 0x0
        1da4c4:	13a00042 	movne	r0, #66	; 0x42
        1da4c8:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1da4cc:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1da4d0:	e5d40042 	ldrb	r0, [r4, #66]	; fField66
        1da4d4:	e3300000 	teq	r0, #0	; 0x0
        1da4d8:	13e000a2 	mvnne	r0, #162	; 0xa2
        1da4dc:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1da4e0:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1da4e4:	e3a00008 	mov	r0, #8	; 0x8
        1da4e8:	e3e03009 	mvn	r3, #9	; 0x9
        1da4ec:	e5840010 	str	r0, [r4, #16]	; fField16
        1da4f0:	e92d0008 	stmdb	sp!, {r3}
        1da4f4:	e3380000 	teq	r8, #0	; 0x0
        1da4f8:	13a03000 	movne	r3, #0	; 0x0
        1da4fc:	03a03001 	moveq	r3, #1	; 0x1
        1da500:	e3a01008 	mov	r1, #8	; 0x8
        1da504:	e3a00000 	mov	r0, #0	; 0x0
        1da508:	e5942018 	ldr	r2, [r4, #24]	; fField24
        1da50c:	eb614c5f 	bl	1a2d690 <TCommToolBindPB::$__ct(unsigned long, unsigned long, unsigned char, long)>
        1da510:	e28dd004 	add	sp, sp, #4	; 0x4
        1da514:	e1b07000 	movs	r7, r0
        1da518:	e3a0a000 	mov	sl, #0	; 0x0
        1da51c:	e3a09001 	mov	r9, #1	; 0x1
        1da520:	1a000002 	bne	1da530 <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0xb4>
        1da524:	eb681efd 	bl	1be2120 <$MemError>
        1da528:	e1a05000 	mov	r5, r0
        1da52c:	ea00002a 	b	1da5dc <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x160>
        1da530:	e3350000 	teq	r5, #0	; 0x0
        1da534:	0a000008 	beq	1da55c <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0xe0>
        1da538:	e5950000 	ldr	r0, [r5]
        1da53c:	e3500000 	cmp	r0, #0	; 0x0
        1da540:	da000005 	ble	1da55c <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0xe0>
        1da544:	e5875034 	str	r5, [r7, #52]	; fField52
        1da548:	e5c7a030 	strb	sl, [r7, #48]	; fField48
        1da54c:	e5950000 	ldr	r0, [r5]
        1da550:	e5870038 	str	r0, [r7, #56]	; fField56
        1da554:	e5c79031 	strb	r9, [r7, #49]
        1da558:	ea000001 	b	1da564 <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0xe8>
        1da55c:	e587a034 	str	sl, [r7, #52]	; fField52
        1da560:	e587a038 	str	sl, [r7, #56]	; fField56
        1da564:	e3380000 	teq	r8, #0	; 0x0
        1da568:	15c49040 	strneb	r9, [r4, #64]	; fField64
        1da56c:	1a000004 	bne	1da584 <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x108>
        1da570:	eb67e517 	bl	1bd39d4 <$GetGlobals>
        1da574:	eb6837b0 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1da578:	e5901000 	ldr	r1, [r0]
        1da57c:	e1a00007 	mov	r0, r7
        1da580:	eb680602 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1da584:	e1a03008 	mov	r3, r8
        1da588:	e1a02007 	mov	r2, r7
        1da58c:	e1a01006 	mov	r1, r6
        1da590:	e3a00010 	mov	r0, #16	; 0x10
        1da594:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1da598:	e287303c 	add	r3, r7, #60	; 0x3c
        1da59c:	e3a02020 	mov	r2, #32	; 0x20
        1da5a0:	e92d000c 	stmdb	sp!, {r2, r3}
        1da5a4:	e287301c 	add	r3, r7, #28	; 0x1c
        1da5a8:	e1a02007 	mov	r2, r7
        1da5ac:	e3a01004 	mov	r1, #4	; 0x4
        1da5b0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1da5b4:	eb60b384 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1da5b8:	e28dd018 	add	sp, sp, #24	; 0x18
        1da5bc:	e1a05000 	mov	r5, r0
        1da5c0:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1da5c4:	e37c0025 	cmn	ip, #37	; 0x25
        1da5c8:	1a000003 	bne	1da5dc <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x160>
        1da5cc:	e1a02007 	mov	r2, r7
        1da5d0:	e1a00004 	mov	r0, r4
        1da5d4:	e3a01004 	mov	r1, #4	; 0x4
        1da5d8:	eb60e505 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1da5dc:	e3380000 	teq	r8, #0	; 0x0
        1da5e0:	0a000019 	beq	1da64c <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x1d0>
        1da5e4:	e3350000 	teq	r5, #0	; 0x0
        1da5e8:	05975044 	ldreq	r5, [r7, #68]
        1da5ec:	e3350000 	teq	r5, #0	; 0x0
        1da5f0:	15849010 	strne	r9, [r4, #16]	; fField16
        1da5f4:	03a00002 	moveq	r0, #2	; 0x2
        1da5f8:	05840010 	streq	r0, [r4, #16]	; fField16
        1da5fc:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
        1da600:	e3300000 	teq	r0, #0	; 0x0
        1da604:	15c4a040 	strneb	sl, [r4, #64]	; fField64
        1da608:	1a000007 	bne	1da62c <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x1b0>
        1da60c:	e3350000 	teq	r5, #0	; 0x0
        1da610:	1a000005 	bne	1da62c <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x1b0>
        1da614:	e1a00004 	mov	r0, r4
        1da618:	e3a02001 	mov	r2, #1	; 0x1
        1da61c:	e3a01000 	mov	r1, #0	; 0x0
        1da620:	eb6122d8 	bl	1a23188 <TSerialEndpoint::$nUnBind(unsigned long, unsigned char)>
        1da624:	e3a050c9 	mov	r5, #201	; 0xc9
        1da628:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        1da62c:	e3370000 	teq	r7, #0	; 0x0
        1da630:	0a000014 	beq	1da688 <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x20c>
        1da634:	e1a00007 	mov	r0, r7
        1da638:	e3a01000 	mov	r1, #0	; 0x0
        1da63c:	eb67d033 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1da640:	e1a00007 	mov	r0, r7
        1da644:	eb67cc25 	bl	1bcd6e0 <$__dl(void *)>
        1da648:	ea00000e 	b	1da688 <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x20c>
        1da64c:	e3350000 	teq	r5, #0	; 0x0
        1da650:	1a000004 	bne	1da668 <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x1ec>
        1da654:	e1a02007 	mov	r2, r7
        1da658:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        1da65c:	e5901000 	ldr	r1, [r0]
        1da660:	eb683ba1 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1da664:	ea000007 	b	1da688 <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x20c>
        1da668:	e3370000 	teq	r7, #0	; 0x0
        1da66c:	0a000004 	beq	1da684 <TSerialEndpoint::nBind(TOptionArray *, unsigned long, unsigned char)+0x208>
        1da670:	e1a00007 	mov	r0, r7
        1da674:	e3a01000 	mov	r1, #0	; 0x0
        1da678:	eb67d024 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1da67c:	e1a00007 	mov	r0, r7
        1da680:	eb67cc16 	bl	1bcd6e0 <$__dl(void *)>
        1da684:	e5a49010 	str	r9, [r4, #16]!	; fField16
        1da688:	e1a00005 	mov	r0, r5
        1da68c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)
 * Address: 001da70c
 */
TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char) {
    /*
        1da70c:	e1a0c00d 	mov	ip, sp
        1da710:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1da714:	e24cb004 	sub	fp, ip, #4	; 0x4
        1da718:	e1a04000 	mov	r4, r0
        1da71c:	e1a07001 	mov	r7, r1
        1da720:	e1a06002 	mov	r6, r2
        1da724:	e1a05003 	mov	r5, r3
        1da728:	e59b0008 	ldr	r0, [fp, #8]
        1da72c:	e20090ff 	and	r9, r0, #255	; 0xff
        1da730:	e59ba004 	ldr	sl, [fp, #4]
        1da734:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1da738:	e3300002 	teq	r0, #2	; 0x2
        1da73c:	13e000a5 	mvnne	r0, #165	; 0xa5
        1da740:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1da744:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1da748:	e3390000 	teq	r9, #0	; 0x0
        1da74c:	0a000006 	beq	1da76c <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x60>
        1da750:	e1a00004 	mov	r0, r4
        1da754:	e3a01001 	mov	r1, #1	; 0x1
        1da758:	eb611626 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1da75c:	e3300000 	teq	r0, #0	; 0x0
        1da760:	13a00042 	movne	r0, #66	; 0x42
        1da764:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1da768:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1da76c:	e5d40042 	ldrb	r0, [r4, #66]	; fField66
        1da770:	e3300000 	teq	r0, #0	; 0x0
        1da774:	13e000a2 	mvnne	r0, #162	; 0xa2
        1da778:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1da77c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1da780:	e3a00009 	mov	r0, #9	; 0x9
        1da784:	e3390000 	teq	r9, #0	; 0x0
        1da788:	e5840010 	str	r0, [r4, #16]	; fField16
        1da78c:	13a03000 	movne	r3, #0	; 0x0
        1da790:	03a03001 	moveq	r3, #1	; 0x1
        1da794:	e92d0008 	stmdb	sp!, {r3}
        1da798:	e3e02004 	mvn	r2, #4	; 0x4
        1da79c:	e3a01004 	mov	r1, #4	; 0x4
        1da7a0:	e3a00000 	mov	r0, #0	; 0x0
        1da7a4:	e5943018 	ldr	r3, [r4, #24]	; fField24
        1da7a8:	eb614bba 	bl	1a2d698 <TCommToolConnectPB::$__ct(unsigned long, long, unsigned long, unsigned char)>
        1da7ac:	e28dd004 	add	sp, sp, #4	; 0x4
        1da7b0:	e1b08000 	movs	r8, r0
        1da7b4:	1a000002 	bne	1da7c4 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0xb8>
        1da7b8:	eb681e58 	bl	1be2120 <$MemError>
        1da7bc:	e1a06000 	mov	r6, r0
        1da7c0:	ea000028 	b	1da868 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x15c>
        1da7c4:	e1a03009 	mov	r3, r9
        1da7c8:	e92d0008 	stmdb	sp!, {r3}
        1da7cc:	e1a03005 	mov	r3, r5
        1da7d0:	e1a02006 	mov	r2, r6
        1da7d4:	e1a01007 	mov	r1, r7
        1da7d8:	e1a00008 	mov	r0, r8
        1da7dc:	eb611617 	bl	1a20040 <TCommToolConnectPB::$Prepare(TOptionArray *, CBufferSegment *, long *, unsigned char)>
        1da7e0:	e28dd004 	add	sp, sp, #4	; 0x4
        1da7e4:	e1b06000 	movs	r6, r0
        1da7e8:	1a00001e 	bne	1da868 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x15c>
        1da7ec:	e3390000 	teq	r9, #0	; 0x0
        1da7f0:	13a00001 	movne	r0, #1	; 0x1
        1da7f4:	15c40040 	strneb	r0, [r4, #64]	; fField64
        1da7f8:	1a000004 	bne	1da810 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x104>
        1da7fc:	eb67e474 	bl	1bd39d4 <$GetGlobals>
        1da800:	eb68370d 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1da804:	e5901000 	ldr	r1, [r0]
        1da808:	e1a00008 	mov	r0, r8
        1da80c:	eb68055f 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1da810:	e1a03009 	mov	r3, r9
        1da814:	e1a02008 	mov	r2, r8
        1da818:	e1a0100a 	mov	r1, sl
        1da81c:	e3a00014 	mov	r0, #20	; 0x14
        1da820:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1da824:	e2883044 	add	r3, r8, #68	; 0x44
        1da828:	e3a02028 	mov	r2, #40	; 0x28
        1da82c:	e92d000c 	stmdb	sp!, {r2, r3}
        1da830:	e288301c 	add	r3, r8, #28	; 0x1c
        1da834:	e1a02008 	mov	r2, r8
        1da838:	e3a01004 	mov	r1, #4	; 0x4
        1da83c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1da840:	eb60b2e1 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1da844:	e28dd018 	add	sp, sp, #24	; 0x18
        1da848:	e1a06000 	mov	r6, r0
        1da84c:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1da850:	e37c0025 	cmn	ip, #37	; 0x25
        1da854:	1a000003 	bne	1da868 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x15c>
        1da858:	e1a02008 	mov	r2, r8
        1da85c:	e1a00004 	mov	r0, r4
        1da860:	e3a01004 	mov	r1, #4	; 0x4
        1da864:	eb60e462 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1da868:	e3a07002 	mov	r7, #2	; 0x2
        1da86c:	e3a00000 	mov	r0, #0	; 0x0
        1da870:	e3390000 	teq	r9, #0	; 0x0
        1da874:	0a000022 	beq	1da904 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1f8>
        1da878:	e3360000 	teq	r6, #0	; 0x0
        1da87c:	0598604c 	ldreq	r6, [r8, #76]
        1da880:	e3360000 	teq	r6, #0	; 0x0
        1da884:	1a000005 	bne	1da8a0 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x194>
        1da888:	e3350000 	teq	r5, #0	; 0x0
        1da88c:	15981054 	ldrne	r1, [r8, #84]
        1da890:	15851000 	strne	r1, [r5]
        1da894:	e3a01004 	mov	r1, #4	; 0x4
        1da898:	e5841010 	str	r1, [r4, #16]	; fField16
        1da89c:	ea000000 	b	1da8a4 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x198>
        1da8a0:	e5847010 	str	r7, [r4, #16]	; fField16
        1da8a4:	e5d41040 	ldrb	r1, [r4, #64]	; fField64
        1da8a8:	e3310000 	teq	r1, #0	; 0x0
        1da8ac:	15c40040 	strneb	r0, [r4, #64]	; fField64
        1da8b0:	1a00000b 	bne	1da8e4 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1d8>
        1da8b4:	e3360000 	teq	r6, #0	; 0x0
        1da8b8:	1a000009 	bne	1da8e4 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1d8>
        1da8bc:	e3a03001 	mov	r3, #1	; 0x1
        1da8c0:	e3a02000 	mov	r2, #0	; 0x0
        1da8c4:	e92d000c 	stmdb	sp!, {r2, r3}
        1da8c8:	e1a00004 	mov	r0, r4
        1da8cc:	e3a03000 	mov	r3, #0	; 0x0
        1da8d0:	e3a01000 	mov	r1, #0	; 0x0
        1da8d4:	eb611e23 	bl	1a22168 <TSerialEndpoint::$nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)>
        1da8d8:	e28dd008 	add	sp, sp, #8	; 0x8
        1da8dc:	e3a060c9 	mov	r6, #201	; 0xc9
        1da8e0:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
        1da8e4:	e3380000 	teq	r8, #0	; 0x0
        1da8e8:	0a000014 	beq	1da940 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x234>
        1da8ec:	e1a00008 	mov	r0, r8
        1da8f0:	e3a01000 	mov	r1, #0	; 0x0
        1da8f4:	eb67cf85 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1da8f8:	e1a00008 	mov	r0, r8
        1da8fc:	eb67cb77 	bl	1bcd6e0 <$__dl(void *)>
        1da900:	ea00000e 	b	1da940 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x234>
        1da904:	e3360000 	teq	r6, #0	; 0x0
        1da908:	1a000004 	bne	1da920 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x214>
        1da90c:	e1a02008 	mov	r2, r8
        1da910:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        1da914:	e5901000 	ldr	r1, [r0]
        1da918:	eb683af3 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1da91c:	ea000007 	b	1da940 <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x234>
        1da920:	e3380000 	teq	r8, #0	; 0x0
        1da924:	0a000004 	beq	1da93c <TSerialEndpoint::nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x230>
        1da928:	e1a00008 	mov	r0, r8
        1da92c:	e3a01000 	mov	r1, #0	; 0x0
        1da930:	eb67cf76 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1da934:	e1a00008 	mov	r0, r8
        1da938:	eb67cb68 	bl	1bcd6e0 <$__dl(void *)>
        1da93c:	e5a47010 	str	r7, [r4, #16]!	; fField16
        1da940:	e1a00006 	mov	r0, r6
        1da944:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)
 * Address: 001da948
 */
TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char) {
    /*
        1da948:	e1a0c00d 	mov	ip, sp
        1da94c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1da950:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1da954:	e24cb014 	sub	fp, ip, #20	; 0x14
        1da958:	e59b001c 	ldr	r0, [fp, #28]	; fField28
        1da95c:	e20060ff 	and	r6, r0, #255	; 0xff
        1da960:	e59b0004 	ldr	r0, [fp, #4]
        1da964:	e5901010 	ldr	r1, [r0, #16]	; fField16
        1da968:	e3310004 	teq	r1, #4	; 0x4
        1da96c:	13e000a5 	mvnne	r0, #165	; 0xa5
        1da970:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1da974:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1da978:	e3360000 	teq	r6, #0	; 0x0
        1da97c:	0a000005 	beq	1da998 <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x50>
        1da980:	e3a01001 	mov	r1, #1	; 0x1
        1da984:	eb61159b 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1da988:	e3300000 	teq	r0, #0	; 0x0
        1da98c:	13a00042 	movne	r0, #66	; 0x42
        1da990:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1da994:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1da998:	e59b0004 	ldr	r0, [fp, #4]
        1da99c:	e5d01042 	ldrb	r1, [r0, #66]	; fField66
        1da9a0:	e3310000 	teq	r1, #0	; 0x0
        1da9a4:	13e000a2 	mvnne	r0, #162	; 0xa2
        1da9a8:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1da9ac:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1da9b0:	e59b1008 	ldr	r1, [fp, #8]
        1da9b4:	e1310000 	teq	r1, r0
        1da9b8:	13e000ba 	mvnne	r0, #186	; 0xba
        1da9bc:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1da9c0:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1da9c4:	e3360000 	teq	r6, #0	; 0x0
        1da9c8:	13a03000 	movne	r3, #0	; 0x0
        1da9cc:	03a03001 	moveq	r3, #1	; 0x1
        1da9d0:	e92d0008 	stmdb	sp!, {r3}
        1da9d4:	e3e02005 	mvn	r2, #5	; 0x5
        1da9d8:	e3a01005 	mov	r1, #5	; 0x5
        1da9dc:	e5b03018 	ldr	r3, [r0, #24]!	; fField24
        1da9e0:	e3a00000 	mov	r0, #0	; 0x0
        1da9e4:	eb614b2b 	bl	1a2d698 <TCommToolConnectPB::$__ct(unsigned long, long, unsigned long, unsigned char)>
        1da9e8:	e28dd004 	add	sp, sp, #4	; 0x4
        1da9ec:	e1b04000 	movs	r4, r0
        1da9f0:	e3a07001 	mov	r7, #1	; 0x1
        1da9f4:	1a000002 	bne	1daa04 <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0xbc>
        1da9f8:	eb681dc8 	bl	1be2120 <$MemError>
        1da9fc:	e1a05000 	mov	r5, r0
        1daa00:	ea000029 	b	1daaac <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x164>
        1daa04:	e1a03006 	mov	r3, r6
        1daa08:	e92d0008 	stmdb	sp!, {r3}
        1daa0c:	e28b3014 	add	r3, fp, #20	; 0x14
        1daa10:	e1a00004 	mov	r0, r4
        1daa14:	e28b200c 	add	r2, fp, #12	; 0xc
        1daa18:	e8920006 	ldmia	r2, {r1, r2}
        1daa1c:	eb611587 	bl	1a20040 <TCommToolConnectPB::$Prepare(TOptionArray *, CBufferSegment *, long *, unsigned char)>
        1daa20:	e28dd004 	add	sp, sp, #4	; 0x4
        1daa24:	e1b05000 	movs	r5, r0
        1daa28:	1a00001f 	bne	1daaac <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x164>
        1daa2c:	e3360000 	teq	r6, #0	; 0x0
        1daa30:	159b0004 	ldrne	r0, [fp, #4]
        1daa34:	15c07040 	strneb	r7, [r0, #64]	; fField64
        1daa38:	1a000004 	bne	1daa50 <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x108>
        1daa3c:	eb67e3e4 	bl	1bd39d4 <$GetGlobals>
        1daa40:	eb68367d 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1daa44:	e5901000 	ldr	r1, [r0]
        1daa48:	e1a00004 	mov	r0, r4
        1daa4c:	eb6804cf 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1daa50:	e1a03006 	mov	r3, r6
        1daa54:	e1a02004 	mov	r2, r4
        1daa58:	e3a00010 	mov	r0, #16	; 0x10
        1daa5c:	e59b1018 	ldr	r1, [fp, #24]	; fField24
        1daa60:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1daa64:	e2843044 	add	r3, r4, #68	; 0x44
        1daa68:	e3a02028 	mov	r2, #40	; 0x28
        1daa6c:	e92d000c 	stmdb	sp!, {r2, r3}
        1daa70:	e284301c 	add	r3, r4, #28	; 0x1c
        1daa74:	e59b0004 	ldr	r0, [fp, #4]
        1daa78:	e5900014 	ldr	r0, [r0, #20]	; fField20
        1daa7c:	e1a02004 	mov	r2, r4
        1daa80:	e3a01004 	mov	r1, #4	; 0x4
        1daa84:	eb60b250 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1daa88:	e28dd018 	add	sp, sp, #24	; 0x18
        1daa8c:	e1a05000 	mov	r5, r0
        1daa90:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1daa94:	e37c0025 	cmn	ip, #37	; 0x25
        1daa98:	1a000003 	bne	1daaac <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x164>
        1daa9c:	e1a02004 	mov	r2, r4
        1daaa0:	e3a01004 	mov	r1, #4	; 0x4
        1daaa4:	e59b0004 	ldr	r0, [fp, #4]
        1daaa8:	eb60e3d1 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1daaac:	e3a07002 	mov	r7, #2	; 0x2
        1daab0:	e3a01000 	mov	r1, #0	; 0x0
        1daab4:	e3360000 	teq	r6, #0	; 0x0
        1daab8:	0a00001f 	beq	1dab3c <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x1f4>
        1daabc:	e3350000 	teq	r5, #0	; 0x0
        1daac0:	0594504c 	ldreq	r5, [r4, #76]
        1daac4:	e3350000 	teq	r5, #0	; 0x0
        1daac8:	159b0004 	ldrne	r0, [fp, #4]
        1daacc:	15a07010 	strne	r7, [r0, #16]!	; fField16
        1daad0:	03a00005 	moveq	r0, #5	; 0x5
        1daad4:	059b2004 	ldreq	r2, [fp, #4]
        1daad8:	05a20010 	streq	r0, [r2, #16]!	; fField16
        1daadc:	e59b0004 	ldr	r0, [fp, #4]
        1daae0:	e5d02040 	ldrb	r2, [r0, #64]	; fField64
        1daae4:	e3320000 	teq	r2, #0	; 0x0
        1daae8:	15c01040 	strneb	r1, [r0, #64]	; fField64
        1daaec:	1a00000a 	bne	1dab1c <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x1d4>
        1daaf0:	e3350000 	teq	r5, #0	; 0x0
        1daaf4:	1a000008 	bne	1dab1c <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x1d4>
        1daaf8:	e3a03001 	mov	r3, #1	; 0x1
        1daafc:	e3a02000 	mov	r2, #0	; 0x0
        1dab00:	e92d000c 	stmdb	sp!, {r2, r3}
        1dab04:	e3a03000 	mov	r3, #0	; 0x0
        1dab08:	e3a01000 	mov	r1, #0	; 0x0
        1dab0c:	eb611d95 	bl	1a22168 <TSerialEndpoint::$nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)>
        1dab10:	e28dd008 	add	sp, sp, #8	; 0x8
        1dab14:	e3a050c9 	mov	r5, #201	; 0xc9
        1dab18:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        1dab1c:	e3340000 	teq	r4, #0	; 0x0
        1dab20:	0a000016 	beq	1dab80 <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x238>
        1dab24:	e1a00004 	mov	r0, r4
        1dab28:	e3a01000 	mov	r1, #0	; 0x0
        1dab2c:	eb67cef7 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1dab30:	e1a00004 	mov	r0, r4
        1dab34:	eb67cae9 	bl	1bcd6e0 <$__dl(void *)>
        1dab38:	ea000010 	b	1dab80 <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x238>
        1dab3c:	e3350000 	teq	r5, #0	; 0x0
        1dab40:	1a000005 	bne	1dab5c <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x214>
        1dab44:	e59b0004 	ldr	r0, [fp, #4]
        1dab48:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1dab4c:	e1a02004 	mov	r2, r4
        1dab50:	e5901000 	ldr	r1, [r0]
        1dab54:	eb683a64 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1dab58:	ea000008 	b	1dab80 <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x238>
        1dab5c:	e3340000 	teq	r4, #0	; 0x0
        1dab60:	0a000004 	beq	1dab78 <TSerialEndpoint::nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)+0x230>
        1dab64:	e1a00004 	mov	r0, r4
        1dab68:	e3a01000 	mov	r1, #0	; 0x0
        1dab6c:	eb67cee7 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1dab70:	e1a00004 	mov	r0, r4
        1dab74:	eb67cad9 	bl	1bcd6e0 <$__dl(void *)>
        1dab78:	e59b0004 	ldr	r0, [fp, #4]
        1dab7c:	e5a07010 	str	r7, [r0, #16]!	; fField16
        1dab80:	e1a00005 	mov	r0, r5
        1dab84:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)
 * Address: 001dab88
 */
TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char) {
    /*
        1dab88:	e1a0c00d 	mov	ip, sp
        1dab8c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1dab90:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dab94:	e1a04000 	mov	r4, r0
        1dab98:	e1a07001 	mov	r7, r1
        1dab9c:	e1a06002 	mov	r6, r2
        1daba0:	e1a05003 	mov	r5, r3
        1daba4:	e59b0008 	ldr	r0, [fp, #8]
        1daba8:	e20090ff 	and	r9, r0, #255	; 0xff
        1dabac:	e59ba004 	ldr	sl, [fp, #4]
        1dabb0:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1dabb4:	e3300002 	teq	r0, #2	; 0x2
        1dabb8:	13e000a5 	mvnne	r0, #165	; 0xa5
        1dabbc:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1dabc0:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1dabc4:	e3390000 	teq	r9, #0	; 0x0
        1dabc8:	0a000006 	beq	1dabe8 <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x60>
        1dabcc:	e1a00004 	mov	r0, r4
        1dabd0:	e3a01001 	mov	r1, #1	; 0x1
        1dabd4:	eb611507 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1dabd8:	e3300000 	teq	r0, #0	; 0x0
        1dabdc:	13a00042 	movne	r0, #66	; 0x42
        1dabe0:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1dabe4:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1dabe8:	e5d40042 	ldrb	r0, [r4, #66]	; fField66
        1dabec:	e3300000 	teq	r0, #0	; 0x0
        1dabf0:	13e000a2 	mvnne	r0, #162	; 0xa2
        1dabf4:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1dabf8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1dabfc:	e3a00003 	mov	r0, #3	; 0x3
        1dac00:	e3390000 	teq	r9, #0	; 0x0
        1dac04:	e5840010 	str	r0, [r4, #16]	; fField16
        1dac08:	13a03000 	movne	r3, #0	; 0x0
        1dac0c:	03a03001 	moveq	r3, #1	; 0x1
        1dac10:	e92d0008 	stmdb	sp!, {r3}
        1dac14:	e3e02006 	mvn	r2, #6	; 0x6
        1dac18:	e3a01003 	mov	r1, #3	; 0x3
        1dac1c:	e3a00000 	mov	r0, #0	; 0x0
        1dac20:	e5943018 	ldr	r3, [r4, #24]	; fField24
        1dac24:	eb614a9b 	bl	1a2d698 <TCommToolConnectPB::$__ct(unsigned long, long, unsigned long, unsigned char)>
        1dac28:	e28dd004 	add	sp, sp, #4	; 0x4
        1dac2c:	e1b08000 	movs	r8, r0
        1dac30:	1a000002 	bne	1dac40 <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0xb8>
        1dac34:	eb681d39 	bl	1be2120 <$MemError>
        1dac38:	e1a05000 	mov	r5, r0
        1dac3c:	ea000028 	b	1dace4 <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x15c>
        1dac40:	e1a03009 	mov	r3, r9
        1dac44:	e92d0008 	stmdb	sp!, {r3}
        1dac48:	e1a03005 	mov	r3, r5
        1dac4c:	e1a02006 	mov	r2, r6
        1dac50:	e1a01007 	mov	r1, r7
        1dac54:	e1a00008 	mov	r0, r8
        1dac58:	eb6114f8 	bl	1a20040 <TCommToolConnectPB::$Prepare(TOptionArray *, CBufferSegment *, long *, unsigned char)>
        1dac5c:	e28dd004 	add	sp, sp, #4	; 0x4
        1dac60:	e1b05000 	movs	r5, r0
        1dac64:	1a00001e 	bne	1dace4 <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x15c>
        1dac68:	e3390000 	teq	r9, #0	; 0x0
        1dac6c:	13a00001 	movne	r0, #1	; 0x1
        1dac70:	15c40040 	strneb	r0, [r4, #64]	; fField64
        1dac74:	1a000004 	bne	1dac8c <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x104>
        1dac78:	eb67e355 	bl	1bd39d4 <$GetGlobals>
        1dac7c:	eb6835ee 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1dac80:	e5901000 	ldr	r1, [r0]
        1dac84:	e1a00008 	mov	r0, r8
        1dac88:	eb680440 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1dac8c:	e1a03009 	mov	r3, r9
        1dac90:	e1a02008 	mov	r2, r8
        1dac94:	e1a0100a 	mov	r1, sl
        1dac98:	e3a00010 	mov	r0, #16	; 0x10
        1dac9c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1daca0:	e2883044 	add	r3, r8, #68	; 0x44
        1daca4:	e3a02028 	mov	r2, #40	; 0x28
        1daca8:	e92d000c 	stmdb	sp!, {r2, r3}
        1dacac:	e288301c 	add	r3, r8, #28	; 0x1c
        1dacb0:	e1a02008 	mov	r2, r8
        1dacb4:	e3a01004 	mov	r1, #4	; 0x4
        1dacb8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1dacbc:	eb60b1c2 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1dacc0:	e28dd018 	add	sp, sp, #24	; 0x18
        1dacc4:	e1a05000 	mov	r5, r0
        1dacc8:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1daccc:	e37c0025 	cmn	ip, #37	; 0x25
        1dacd0:	1a000003 	bne	1dace4 <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x15c>
        1dacd4:	e1a02008 	mov	r2, r8
        1dacd8:	e1a00004 	mov	r0, r4
        1dacdc:	e3a01004 	mov	r1, #4	; 0x4
        1dace0:	eb60e343 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1dace4:	e3a00002 	mov	r0, #2	; 0x2
        1dace8:	e3a01000 	mov	r1, #0	; 0x0
        1dacec:	e3390000 	teq	r9, #0	; 0x0
        1dacf0:	0a00001c 	beq	1dad68 <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1e0>
        1dacf4:	e3350000 	teq	r5, #0	; 0x0
        1dacf8:	0598504c 	ldreq	r5, [r8, #76]
        1dacfc:	e3350000 	teq	r5, #0	; 0x0
        1dad00:	03a00005 	moveq	r0, #5	; 0x5
        1dad04:	e5840010 	str	r0, [r4, #16]	; fField16
        1dad08:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
        1dad0c:	e3300000 	teq	r0, #0	; 0x0
        1dad10:	15c41040 	strneb	r1, [r4, #64]	; fField64
        1dad14:	1a00000b 	bne	1dad48 <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1c0>
        1dad18:	e3350000 	teq	r5, #0	; 0x0
        1dad1c:	1a000009 	bne	1dad48 <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1c0>
        1dad20:	e3a03001 	mov	r3, #1	; 0x1
        1dad24:	e3a02000 	mov	r2, #0	; 0x0
        1dad28:	e92d000c 	stmdb	sp!, {r2, r3}
        1dad2c:	e1a00004 	mov	r0, r4
        1dad30:	e3a03000 	mov	r3, #0	; 0x0
        1dad34:	e3a01000 	mov	r1, #0	; 0x0
        1dad38:	eb611d0a 	bl	1a22168 <TSerialEndpoint::$nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)>
        1dad3c:	e28dd008 	add	sp, sp, #8	; 0x8
        1dad40:	e3a050c9 	mov	r5, #201	; 0xc9
        1dad44:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        1dad48:	e3380000 	teq	r8, #0	; 0x0
        1dad4c:	0a00000f 	beq	1dad90 <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x208>
        1dad50:	e1a00008 	mov	r0, r8
        1dad54:	e3a01000 	mov	r1, #0	; 0x0
        1dad58:	eb67ce6c 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1dad5c:	e1a00008 	mov	r0, r8
        1dad60:	eb67ca5e 	bl	1bcd6e0 <$__dl(void *)>
        1dad64:	ea000009 	b	1dad90 <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x208>
        1dad68:	e3350000 	teq	r5, #0	; 0x0
        1dad6c:	1a000004 	bne	1dad84 <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1fc>
        1dad70:	e1a02008 	mov	r2, r8
        1dad74:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        1dad78:	e5901000 	ldr	r1, [r0]
        1dad7c:	eb6839da 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1dad80:	ea000002 	b	1dad90 <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x208>
        1dad84:	e3380000 	teq	r8, #0	; 0x0
        1dad88:	e5a40010 	str	r0, [r4, #16]!	; fField16
        1dad8c:	1affffef 	bne	1dad50 <TSerialEndpoint::nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)+0x1c8>
        1dad90:	e1a00005 	mov	r0, r5
        1dad94:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::PrepDisconnect(CBufferSegment *, long, long, unsigned char)
 * Address: 001dad98
 */
TSerialEndpoint::PrepDisconnect(CBufferSegment *, long, long, unsigned char) {
    /*
        1dad98:	e1a0c00d 	mov	ip, sp
        1dad9c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1dada0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dada4:	e1a06001 	mov	r6, r1
        1dada8:	e1a05002 	mov	r5, r2
        1dadac:	e1a04003 	mov	r4, r3
        1dadb0:	e59b1004 	ldr	r1, [fp, #4]
        1dadb4:	e31100ff 	tst	r1, #255	; 0xff
        1dadb8:	13a02000 	movne	r2, #0	; 0x0
        1dadbc:	03a02001 	moveq	r2, #1	; 0x1
        1dadc0:	e5b01018 	ldr	r1, [r0, #24]!	; fField24
        1dadc4:	e3a00000 	mov	r0, #0	; 0x0
        1dadc8:	eb614a37 	bl	1a2d6ac <TCommToolDisconnectPB::$__ct(unsigned long, unsigned char)>
        1dadcc:	e1b07000 	movs	r7, r0
        1dadd0:	e3a00000 	mov	r0, #0	; 0x0
        1dadd4:	1a00000c 	bne	1dae0c <TSerialEndpoint::PrepDisconnect(CBufferSegment *, long, long, unsigned char)+0x74>
        1dadd8:	eb681cd0 	bl	1be2120 <$MemError>
        1daddc:	e3300000 	teq	r0, #0	; 0x0
        1dade0:	0a000007 	beq	1dae04 <TSerialEndpoint::PrepDisconnect(CBufferSegment *, long, long, unsigned char)+0x6c>
        1dade4:	e3370000 	teq	r7, #0	; 0x0
        1dade8:	0a000004 	beq	1dae00 <TSerialEndpoint::PrepDisconnect(CBufferSegment *, long, long, unsigned char)+0x68>
        1dadec:	e1a00007 	mov	r0, r7
        1dadf0:	e3a01000 	mov	r1, #0	; 0x0
        1dadf4:	eb67ce45 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1dadf8:	e1a00007 	mov	r0, r7
        1dadfc:	eb67ca37 	bl	1bcd6e0 <$__dl(void *)>
        1dae00:	e3a07000 	mov	r7, #0	; 0x0
        1dae04:	e1a00007 	mov	r0, r7
        1dae08:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1dae0c:	e5c70034 	strb	r0, [r7, #52]	; fField52
        1dae10:	e287702c 	add	r7, r7, #44	; 0x2c
        1dae14:	e8870030 	stmia	r7, {r4, r5}
        1dae18:	e5276004 	str	r6, [r7, -#4]!
        1dae1c:	e2477028 	sub	r7, r7, #40	; 0x28
        1dae20:	eafffff7 	b	1dae04 <TSerialEndpoint::PrepDisconnect(CBufferSegment *, long, long, unsigned char)+0x6c>
    */
}

/**
 * Symbol: TSerialEndpoint::SendDisconnect(TCommToolDisconnectPB *, unsigned long, unsigned char)
 * Address: 001dae24
 */
TSerialEndpoint::SendDisconnect(TCommToolDisconnectPB *, unsigned long, unsigned char) {
    /*
        1dae24:	e1a0c00d 	mov	ip, sp
        1dae28:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1dae2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dae30:	e1a04000 	mov	r4, r0
        1dae34:	e1a05001 	mov	r5, r1
        1dae38:	e1a06002 	mov	r6, r2
        1dae3c:	e21370ff 	ands	r7, r3, #255	; 0xff
        1dae40:	e3a00008 	mov	r0, #8	; 0x8
        1dae44:	e5840010 	str	r0, [r4, #16]	; fField16
        1dae48:	13a00001 	movne	r0, #1	; 0x1
        1dae4c:	15c40040 	strneb	r0, [r4, #64]	; fField64
        1dae50:	1a000004 	bne	1dae68 <TSerialEndpoint::SendDisconnect(TCommToolDisconnectPB *, unsigned long, unsigned char)+0x44>
        1dae54:	eb67e2de 	bl	1bd39d4 <$GetGlobals>
        1dae58:	eb683577 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1dae5c:	e5901000 	ldr	r1, [r0]
        1dae60:	e1a00005 	mov	r0, r5
        1dae64:	eb6803c9 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1dae68:	e1a03007 	mov	r3, r7
        1dae6c:	e1a02005 	mov	r2, r5
        1dae70:	e1a01006 	mov	r1, r6
        1dae74:	e3a00010 	mov	r0, #16	; 0x10
        1dae78:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1dae7c:	e2853038 	add	r3, r5, #56	; 0x38
        1dae80:	e3a0201c 	mov	r2, #28	; 0x1c
        1dae84:	e92d000c 	stmdb	sp!, {r2, r3}
        1dae88:	e0853002 	add	r3, r5, r2
        1dae8c:	e1a02005 	mov	r2, r5
        1dae90:	e3a01004 	mov	r1, #4	; 0x4
        1dae94:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1dae98:	eb60b14b 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1dae9c:	e28dd018 	add	sp, sp, #24	; 0x18
        1daea0:	e1a06000 	mov	r6, r0
        1daea4:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1daea8:	e37c0025 	cmn	ip, #37	; 0x25
        1daeac:	1a000003 	bne	1daec0 <TSerialEndpoint::SendDisconnect(TCommToolDisconnectPB *, unsigned long, unsigned char)+0x9c>
        1daeb0:	e1a02005 	mov	r2, r5
        1daeb4:	e1a00004 	mov	r0, r4
        1daeb8:	e3a01004 	mov	r1, #4	; 0x4
        1daebc:	eb60e2cc 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1daec0:	e3a00005 	mov	r0, #5	; 0x5
        1daec4:	e3370000 	teq	r7, #0	; 0x0
        1daec8:	0a000011 	beq	1daf14 <TSerialEndpoint::SendDisconnect(TCommToolDisconnectPB *, unsigned long, unsigned char)+0xf0>
        1daecc:	e3360000 	teq	r6, #0	; 0x0
        1daed0:	05b56040 	ldreq	r6, [r5, #64]!	; fField64
        1daed4:	e3a01002 	mov	r1, #2	; 0x2
        1daed8:	e286cdfa 	add	ip, r6, #16000	; 0x3e80
        1daedc:	e37c0009 	cmn	ip, #9	; 0x9
        1daee0:	03e060a5 	mvneq	r6, #165	; 0xa5
        1daee4:	02466b23 	subeq	r6, r6, #35840	; 0x8c00
        1daee8:	0a000001 	beq	1daef4 <TSerialEndpoint::SendDisconnect(TCommToolDisconnectPB *, unsigned long, unsigned char)+0xd0>
        1daeec:	e3360000 	teq	r6, #0	; 0x0
        1daef0:	1a000001 	bne	1daefc <TSerialEndpoint::SendDisconnect(TCommToolDisconnectPB *, unsigned long, unsigned char)+0xd8>
        1daef4:	e5841010 	str	r1, [r4, #16]	; fField16
        1daef8:	ea000000 	b	1daf00 <TSerialEndpoint::SendDisconnect(TCommToolDisconnectPB *, unsigned long, unsigned char)+0xdc>
        1daefc:	e5840010 	str	r0, [r4, #16]	; fField16
        1daf00:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
        1daf04:	e3300000 	teq	r0, #0	; 0x0
        1daf08:	13a00000 	movne	r0, #0	; 0x0
        1daf0c:	15c40040 	strneb	r0, [r4, #64]	; fField64
        1daf10:	ea000007 	b	1daf34 <TSerialEndpoint::SendDisconnect(TCommToolDisconnectPB *, unsigned long, unsigned char)+0x110>
        1daf14:	e3360000 	teq	r6, #0	; 0x0
        1daf18:	1a000004 	bne	1daf30 <TSerialEndpoint::SendDisconnect(TCommToolDisconnectPB *, unsigned long, unsigned char)+0x10c>
        1daf1c:	e1a02005 	mov	r2, r5
        1daf20:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        1daf24:	e5901000 	ldr	r1, [r0]
        1daf28:	eb68396f 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1daf2c:	ea000000 	b	1daf34 <TSerialEndpoint::SendDisconnect(TCommToolDisconnectPB *, unsigned long, unsigned char)+0x110>
        1daf30:	e5a40010 	str	r0, [r4, #16]!	; fField16
        1daf34:	e1a00006 	mov	r0, r6
        1daf38:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)
 * Address: 001daf3c
 */
TSerialEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char) {
    /*
        1daf3c:	e1a0c00d 	mov	ip, sp
        1daf40:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1daf44:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1daf48:	e24cb014 	sub	fp, ip, #20	; 0x14
        1daf4c:	e1a04000 	mov	r4, r0
        1daf50:	e1a06001 	mov	r6, r1
        1daf54:	e1a05002 	mov	r5, r2
        1daf58:	e59b0018 	ldr	r0, [fp, #24]	; fField24
        1daf5c:	e20080ff 	and	r8, r0, #255	; 0xff
        1daf60:	e3a07000 	mov	r7, #0	; 0x0
        1daf64:	e3a09000 	mov	r9, #0	; 0x0
        1daf68:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        1daf6c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1daf70:	e3300005 	teq	r0, #5	; 0x5
        1daf74:	13300007 	teqne	r0, #7	; 0x7
        1daf78:	13300006 	teqne	r0, #6	; 0x6
        1daf7c:	13300004 	teqne	r0, #4	; 0x4
        1daf80:	13e000a5 	mvnne	r0, #165	; 0xa5
        1daf84:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1daf88:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1daf8c:	e5d40042 	ldrb	r0, [r4, #66]	; fField66
        1daf90:	e3300000 	teq	r0, #0	; 0x0
        1daf94:	13e000a2 	mvnne	r0, #162	; 0xa2
        1daf98:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1daf9c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1dafa0:	e1a00004 	mov	r0, r4
        1dafa4:	e3a01003 	mov	r1, #3	; 0x3
        1dafa8:	eb611412 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1dafac:	e3300000 	teq	r0, #0	; 0x0
        1dafb0:	0a000008 	beq	1dafd8 <TSerialEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)+0x9c>
        1dafb4:	e3380000 	teq	r8, #0	; 0x0
        1dafb8:	13a00000 	movne	r0, #0	; 0x0
        1dafbc:	03a00001 	moveq	r0, #1	; 0x1
        1dafc0:	e20090ff 	and	r9, r0, #255	; 0xff
        1dafc4:	e1a01008 	mov	r1, r8
        1dafc8:	e1a00004 	mov	r0, r4
        1dafcc:	eb611c61 	bl	1a22158 <TSerialEndpoint::$nAbort(unsigned char)>
        1dafd0:	e1b07000 	movs	r7, r0
        1dafd4:	1a00001e 	bne	1db054 <TSerialEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)+0x118>
        1dafd8:	e1a03008 	mov	r3, r8
        1dafdc:	e92d0008 	stmdb	sp!, {r3}
        1dafe0:	e1a02005 	mov	r2, r5
        1dafe4:	e1a01006 	mov	r1, r6
        1dafe8:	e1a00004 	mov	r0, r4
        1dafec:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        1daff0:	eb61140f 	bl	1a20034 <TSerialEndpoint::$PrepDisconnect(CBufferSegment *, long, long, unsigned char)>
        1daff4:	e28dd004 	add	sp, sp, #4	; 0x4
        1daff8:	e1b05000 	movs	r5, r0
        1daffc:	1a000002 	bne	1db00c <TSerialEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)+0xd0>
        1db000:	eb681c46 	bl	1be2120 <$MemError>
        1db004:	e1a07000 	mov	r7, r0
        1db008:	ea000011 	b	1db054 <TSerialEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)+0x118>
        1db00c:	e3390000 	teq	r9, #0	; 0x0
        1db010:	15a45034 	strne	r5, [r4, #52]!	; fField52
        1db014:	15a5a040 	strne	sl, [r5, #64]!	; fField64
        1db018:	1a00000d 	bne	1db054 <TSerialEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)+0x118>
        1db01c:	e1a03008 	mov	r3, r8
        1db020:	e1a0200a 	mov	r2, sl
        1db024:	e1a01005 	mov	r1, r5
        1db028:	e1a00004 	mov	r0, r4
        1db02c:	eb61181b 	bl	1a210a0 <TSerialEndpoint::$SendDisconnect(TCommToolDisconnectPB *, unsigned long, unsigned char)>
        1db030:	e1a07000 	mov	r7, r0
        1db034:	e3380000 	teq	r8, #0	; 0x0
        1db038:	03370000 	teqeq	r7, #0	; 0x0
        1db03c:	0a000004 	beq	1db054 <TSerialEndpoint::nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)+0x118>
        1db040:	e1a00005 	mov	r0, r5
        1db044:	e3a01000 	mov	r1, #0	; 0x0
        1db048:	eb67cdb0 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1db04c:	e1a00005 	mov	r0, r5
        1db050:	eb67c9a2 	bl	1bcd6e0 <$__dl(void *)>
        1db054:	e1a00007 	mov	r0, r7
        1db058:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::nRelease(unsigned long, unsigned char)
 * Address: 001db05c
 */
TSerialEndpoint::nRelease(unsigned long, unsigned char) {
    /*
        1db05c:	e1a0c00d 	mov	ip, sp
        1db060:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1db064:	e24cb004 	sub	fp, ip, #4	; 0x4
        1db068:	e1a04000 	mov	r4, r0
        1db06c:	e1a05001 	mov	r5, r1
        1db070:	e20270ff 	and	r7, r2, #255	; 0xff
        1db074:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1db078:	e3e080a5 	mvn	r8, #165	; 0xa5
        1db07c:	e2488b23 	sub	r8, r8, #35840	; 0x8c00
        1db080:	e3300005 	teq	r0, #5	; 0x5
        1db084:	13300007 	teqne	r0, #7	; 0x7
        1db088:	11a00008 	movne	r0, r8
        1db08c:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1db090:	e3370000 	teq	r7, #0	; 0x0
        1db094:	0a000006 	beq	1db0b4 <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0x58>
        1db098:	e1a00004 	mov	r0, r4
        1db09c:	e3a01001 	mov	r1, #1	; 0x1
        1db0a0:	eb6113d4 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1db0a4:	e3300000 	teq	r0, #0	; 0x0
        1db0a8:	13a00042 	movne	r0, #66	; 0x42
        1db0ac:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1db0b0:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1db0b4:	e5d40042 	ldrb	r0, [r4, #66]	; fField66
        1db0b8:	e3300000 	teq	r0, #0	; 0x0
        1db0bc:	13e000a2 	mvnne	r0, #162	; 0xa2
        1db0c0:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1db0c4:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1db0c8:	e3370000 	teq	r7, #0	; 0x0
        1db0cc:	13a03000 	movne	r3, #0	; 0x0
        1db0d0:	03a03001 	moveq	r3, #1	; 0x1
        1db0d4:	e92d0008 	stmdb	sp!, {r3}
        1db0d8:	e3e02007 	mvn	r2, #7	; 0x7
        1db0dc:	e3a01007 	mov	r1, #7	; 0x7
        1db0e0:	e3a00000 	mov	r0, #0	; 0x0
        1db0e4:	e5943018 	ldr	r3, [r4, #24]	; fField24
        1db0e8:	eb61496b 	bl	1a2d69c <TCommToolControlPB::$__ct(unsigned long, long, unsigned long, unsigned char)>
        1db0ec:	e28dd004 	add	sp, sp, #4	; 0x4
        1db0f0:	e1b06000 	movs	r6, r0
        1db0f4:	e3a00001 	mov	r0, #1	; 0x1
        1db0f8:	1a000002 	bne	1db108 <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0xac>
        1db0fc:	eb681c07 	bl	1be2120 <$MemError>
        1db100:	e1a05000 	mov	r5, r0
        1db104:	ea00001f 	b	1db188 <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0x12c>
        1db108:	e3a01006 	mov	r1, #6	; 0x6
        1db10c:	e3370000 	teq	r7, #0	; 0x0
        1db110:	e5841010 	str	r1, [r4, #16]	; fField16
        1db114:	15c40040 	strneb	r0, [r4, #64]	; fField64
        1db118:	1a000004 	bne	1db130 <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0xd4>
        1db11c:	eb67e22c 	bl	1bd39d4 <$GetGlobals>
        1db120:	eb6834c5 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1db124:	e5901000 	ldr	r1, [r0]
        1db128:	e1a00006 	mov	r0, r6
        1db12c:	eb680317 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1db130:	e1a03007 	mov	r3, r7
        1db134:	e1a02006 	mov	r2, r6
        1db138:	e1a01005 	mov	r1, r5
        1db13c:	e3a00010 	mov	r0, #16	; 0x10
        1db140:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1db144:	e2863028 	add	r3, r6, #40	; 0x28
        1db148:	e3a0200c 	mov	r2, #12	; 0xc
        1db14c:	e92d000c 	stmdb	sp!, {r2, r3}
        1db150:	e286301c 	add	r3, r6, #28	; 0x1c
        1db154:	e1a02006 	mov	r2, r6
        1db158:	e3a01004 	mov	r1, #4	; 0x4
        1db15c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1db160:	eb60b099 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1db164:	e28dd018 	add	sp, sp, #24	; 0x18
        1db168:	e1a05000 	mov	r5, r0
        1db16c:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1db170:	e37c0025 	cmn	ip, #37	; 0x25
        1db174:	1a000003 	bne	1db188 <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0x12c>
        1db178:	e1a02006 	mov	r2, r6
        1db17c:	e1a00004 	mov	r0, r4
        1db180:	e3a01004 	mov	r1, #4	; 0x4
        1db184:	eb60e21a 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1db188:	e3a09005 	mov	r9, #5	; 0x5
        1db18c:	e3a01000 	mov	r1, #0	; 0x0
        1db190:	e3370000 	teq	r7, #0	; 0x0
        1db194:	0a000016 	beq	1db1f4 <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0x198>
        1db198:	e3350000 	teq	r5, #0	; 0x0
        1db19c:	05965030 	ldreq	r5, [r6, #48]	; fField48
        1db1a0:	e3a00002 	mov	r0, #2	; 0x2
        1db1a4:	e285cdfa 	add	ip, r5, #16000	; 0x3e80
        1db1a8:	e37c0009 	cmn	ip, #9	; 0x9
        1db1ac:	01a05008 	moveq	r5, r8
        1db1b0:	0a000001 	beq	1db1bc <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0x160>
        1db1b4:	e3350000 	teq	r5, #0	; 0x0
        1db1b8:	1a000001 	bne	1db1c4 <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0x168>
        1db1bc:	e5840010 	str	r0, [r4, #16]	; fField16
        1db1c0:	ea000000 	b	1db1c8 <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0x16c>
        1db1c4:	e5849010 	str	r9, [r4, #16]	; fField16
        1db1c8:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
        1db1cc:	e3300000 	teq	r0, #0	; 0x0
        1db1d0:	15c41040 	strneb	r1, [r4, #64]	; fField64
        1db1d4:	e3360000 	teq	r6, #0	; 0x0
        1db1d8:	0a000014 	beq	1db230 <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0x1d4>
        1db1dc:	e1a00006 	mov	r0, r6
        1db1e0:	e3a01000 	mov	r1, #0	; 0x0
        1db1e4:	eb67cd49 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1db1e8:	e1a00006 	mov	r0, r6
        1db1ec:	eb67c93b 	bl	1bcd6e0 <$__dl(void *)>
        1db1f0:	ea00000e 	b	1db230 <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0x1d4>
        1db1f4:	e3350000 	teq	r5, #0	; 0x0
        1db1f8:	1a000004 	bne	1db210 <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0x1b4>
        1db1fc:	e1a02006 	mov	r2, r6
        1db200:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        1db204:	e5901000 	ldr	r1, [r0]
        1db208:	eb6838b7 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1db20c:	ea000007 	b	1db230 <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0x1d4>
        1db210:	e3360000 	teq	r6, #0	; 0x0
        1db214:	0a000004 	beq	1db22c <TSerialEndpoint::nRelease(unsigned long, unsigned char)+0x1d0>
        1db218:	e1a00006 	mov	r0, r6
        1db21c:	e3a01000 	mov	r1, #0	; 0x0
        1db220:	eb67cd3a 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1db224:	e1a00006 	mov	r0, r6
        1db228:	eb67c92c 	bl	1bcd6e0 <$__dl(void *)>
        1db22c:	e5a49010 	str	r9, [r4, #16]!	; fField16
        1db230:	e1a00005 	mov	r0, r5
        1db234:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::nUnBind(unsigned long, unsigned char)
 * Address: 001db238
 */
TSerialEndpoint::nUnBind(unsigned long, unsigned char) {
    /*
        1db238:	e1a0c00d 	mov	ip, sp
        1db23c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1db240:	e24cb004 	sub	fp, ip, #4	; 0x4
        1db244:	e1a04000 	mov	r4, r0
        1db248:	e1a05001 	mov	r5, r1
        1db24c:	e20270ff 	and	r7, r2, #255	; 0xff
        1db250:	e5900010 	ldr	r0, [r0, #16]	; fField16
        1db254:	e3300002 	teq	r0, #2	; 0x2
        1db258:	13e000a5 	mvnne	r0, #165	; 0xa5
        1db25c:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1db260:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1db264:	e3370000 	teq	r7, #0	; 0x0
        1db268:	0a000006 	beq	1db288 <TSerialEndpoint::nUnBind(unsigned long, unsigned char)+0x50>
        1db26c:	e1a00004 	mov	r0, r4
        1db270:	e3a01001 	mov	r1, #1	; 0x1
        1db274:	eb61135f 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1db278:	e3300000 	teq	r0, #0	; 0x0
        1db27c:	13a00042 	movne	r0, #66	; 0x42
        1db280:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1db284:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1db288:	e5d40042 	ldrb	r0, [r4, #66]	; fField66
        1db28c:	e3300000 	teq	r0, #0	; 0x0
        1db290:	13e000a2 	mvnne	r0, #162	; 0xa2
        1db294:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1db298:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1db29c:	e3a00008 	mov	r0, #8	; 0x8
        1db2a0:	e3e0300a 	mvn	r3, #10	; 0xa
        1db2a4:	e5840010 	str	r0, [r4, #16]	; fField16
        1db2a8:	e92d0008 	stmdb	sp!, {r3}
        1db2ac:	e3370000 	teq	r7, #0	; 0x0
        1db2b0:	13a03000 	movne	r3, #0	; 0x0
        1db2b4:	03a03001 	moveq	r3, #1	; 0x1
        1db2b8:	e3a01009 	mov	r1, #9	; 0x9
        1db2bc:	e3a00000 	mov	r0, #0	; 0x0
        1db2c0:	e5942018 	ldr	r2, [r4, #24]	; fField24
        1db2c4:	eb6148f1 	bl	1a2d690 <TCommToolBindPB::$__ct(unsigned long, unsigned long, unsigned char, long)>
        1db2c8:	e28dd004 	add	sp, sp, #4	; 0x4
        1db2cc:	e1b06000 	movs	r6, r0
        1db2d0:	e3a08001 	mov	r8, #1	; 0x1
        1db2d4:	1a000002 	bne	1db2e4 <TSerialEndpoint::nUnBind(unsigned long, unsigned char)+0xac>
        1db2d8:	eb681b90 	bl	1be2120 <$MemError>
        1db2dc:	e1a05000 	mov	r5, r0
        1db2e0:	ea00001d 	b	1db35c <TSerialEndpoint::nUnBind(unsigned long, unsigned char)+0x124>
        1db2e4:	e3370000 	teq	r7, #0	; 0x0
        1db2e8:	15c48040 	strneb	r8, [r4, #64]	; fField64
        1db2ec:	1a000004 	bne	1db304 <TSerialEndpoint::nUnBind(unsigned long, unsigned char)+0xcc>
        1db2f0:	eb67e1b7 	bl	1bd39d4 <$GetGlobals>
        1db2f4:	eb683450 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1db2f8:	e5901000 	ldr	r1, [r0]
        1db2fc:	e1a00006 	mov	r0, r6
        1db300:	eb6802a2 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1db304:	e1a03007 	mov	r3, r7
        1db308:	e1a02006 	mov	r2, r6
        1db30c:	e1a01005 	mov	r1, r5
        1db310:	e3a00010 	mov	r0, #16	; 0x10
        1db314:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1db318:	e286303c 	add	r3, r6, #60	; 0x3c
        1db31c:	e3a02020 	mov	r2, #32	; 0x20
        1db320:	e92d000c 	stmdb	sp!, {r2, r3}
        1db324:	e286301c 	add	r3, r6, #28	; 0x1c
        1db328:	e1a02006 	mov	r2, r6
        1db32c:	e3a01004 	mov	r1, #4	; 0x4
        1db330:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1db334:	eb60b024 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1db338:	e28dd018 	add	sp, sp, #24	; 0x18
        1db33c:	e1a05000 	mov	r5, r0
        1db340:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1db344:	e37c0025 	cmn	ip, #37	; 0x25
        1db348:	1a000003 	bne	1db35c <TSerialEndpoint::nUnBind(unsigned long, unsigned char)+0x124>
        1db34c:	e1a02006 	mov	r2, r6
        1db350:	e1a00004 	mov	r0, r4
        1db354:	e3a01004 	mov	r1, #4	; 0x4
        1db358:	eb60e1a5 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1db35c:	e3a09002 	mov	r9, #2	; 0x2
        1db360:	e3a00000 	mov	r0, #0	; 0x0
        1db364:	e3370000 	teq	r7, #0	; 0x0
        1db368:	0a00000f 	beq	1db3ac <TSerialEndpoint::nUnBind(unsigned long, unsigned char)+0x174>
        1db36c:	e3350000 	teq	r5, #0	; 0x0
        1db370:	05965044 	ldreq	r5, [r6, #68]
        1db374:	e3350000 	teq	r5, #0	; 0x0
        1db378:	15849010 	strne	r9, [r4, #16]	; fField16
        1db37c:	05848010 	streq	r8, [r4, #16]	; fField16
        1db380:	e5d41040 	ldrb	r1, [r4, #64]	; fField64
        1db384:	e3310000 	teq	r1, #0	; 0x0
        1db388:	15c40040 	strneb	r0, [r4, #64]	; fField64
        1db38c:	e3360000 	teq	r6, #0	; 0x0
        1db390:	0a000014 	beq	1db3e8 <TSerialEndpoint::nUnBind(unsigned long, unsigned char)+0x1b0>
        1db394:	e1a00006 	mov	r0, r6
        1db398:	e3a01000 	mov	r1, #0	; 0x0
        1db39c:	eb67ccdb 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1db3a0:	e1a00006 	mov	r0, r6
        1db3a4:	eb67c8cd 	bl	1bcd6e0 <$__dl(void *)>
        1db3a8:	ea00000e 	b	1db3e8 <TSerialEndpoint::nUnBind(unsigned long, unsigned char)+0x1b0>
        1db3ac:	e3350000 	teq	r5, #0	; 0x0
        1db3b0:	1a000004 	bne	1db3c8 <TSerialEndpoint::nUnBind(unsigned long, unsigned char)+0x190>
        1db3b4:	e1a02006 	mov	r2, r6
        1db3b8:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        1db3bc:	e5901000 	ldr	r1, [r0]
        1db3c0:	eb683849 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1db3c4:	ea000007 	b	1db3e8 <TSerialEndpoint::nUnBind(unsigned long, unsigned char)+0x1b0>
        1db3c8:	e3360000 	teq	r6, #0	; 0x0
        1db3cc:	0a000004 	beq	1db3e4 <TSerialEndpoint::nUnBind(unsigned long, unsigned char)+0x1ac>
        1db3d0:	e1a00006 	mov	r0, r6
        1db3d4:	e3a01000 	mov	r1, #0	; 0x0
        1db3d8:	eb67cccc 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1db3dc:	e1a00006 	mov	r0, r6
        1db3e0:	eb67c8be 	bl	1bcd6e0 <$__dl(void *)>
        1db3e4:	e5a49010 	str	r9, [r4, #16]!	; fField16
        1db3e8:	e1a00005 	mov	r0, r5
        1db3ec:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)
 * Address: 001db3f0
 */
TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char) {
    /*
        1db3f0:	e1a0c00d 	mov	ip, sp
        1db3f4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1db3f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1db3fc:	e1a04000 	mov	r4, r0
        1db400:	e1a07001 	mov	r7, r1
        1db404:	e1a05002 	mov	r5, r2
        1db408:	e1a06003 	mov	r6, r3
        1db40c:	e59b0004 	ldr	r0, [fp, #4]
        1db410:	e20090ff 	and	r9, r0, #255	; 0xff
        1db414:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1db418:	e3300000 	teq	r0, #0	; 0x0
        1db41c:	03e000a5 	mvneq	r0, #165	; 0xa5
        1db420:	02400b23 	subeq	r0, r0, #35840	; 0x8c00
        1db424:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db428:	e3390000 	teq	r9, #0	; 0x0
        1db42c:	0a000006 	beq	1db44c <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x5c>
        1db430:	e1a00004 	mov	r0, r4
        1db434:	e3a01001 	mov	r1, #1	; 0x1
        1db438:	eb6112ee 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1db43c:	e3300000 	teq	r0, #0	; 0x0
        1db440:	13a00042 	movne	r0, #66	; 0x42
        1db444:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1db448:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db44c:	e5d40042 	ldrb	r0, [r4, #66]	; fField66
        1db450:	e3300000 	teq	r0, #0	; 0x0
        1db454:	13e000a2 	mvnne	r0, #162	; 0xa2
        1db458:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1db45c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db460:	e3350000 	teq	r5, #0	; 0x0
        1db464:	15950000 	ldrne	r0, [r5]
        1db468:	13300000 	teqne	r0, #0	; 0x0
        1db46c:	03e000a1 	mvneq	r0, #161	; 0xa1
        1db470:	02400b23 	subeq	r0, r0, #35840	; 0x8c00
        1db474:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db478:	e3390000 	teq	r9, #0	; 0x0
        1db47c:	13a02000 	movne	r2, #0	; 0x0
        1db480:	03a02001 	moveq	r2, #1	; 0x1
        1db484:	e3a01000 	mov	r1, #0	; 0x0
        1db488:	e3a00000 	mov	r0, #0	; 0x0
        1db48c:	eb614884 	bl	1a2d6a4 <TCommToolOptMgmtPB::$__ct(unsigned long, unsigned char)>
        1db490:	e1b08000 	movs	r8, r0
        1db494:	e3a00001 	mov	r0, #1	; 0x1
        1db498:	e3a0a000 	mov	sl, #0	; 0x0
        1db49c:	1a000002 	bne	1db4ac <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0xbc>
        1db4a0:	eb681b1e 	bl	1be2120 <$MemError>
        1db4a4:	e1a05000 	mov	r5, r0
        1db4a8:	ea00002c 	b	1db560 <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x170>
        1db4ac:	e5885028 	str	r5, [r8, #40]	; fField40
        1db4b0:	e5c8a034 	strb	sl, [r8, #52]	; fField52
        1db4b4:	e5951000 	ldr	r1, [r5]
        1db4b8:	e288802c 	add	r8, r8, #44	; 0x2c
        1db4bc:	e8880082 	stmia	r8, {r1, r7}
        1db4c0:	e248802c 	sub	r8, r8, #44	; 0x2c
        1db4c4:	e5c80035 	strb	r0, [r8, #53]
        1db4c8:	e3590000 	cmp	r9, #0	; 0x0
        1db4cc:	1a000006 	bne	1db4ec <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0xfc>
        1db4d0:	e588a050 	str	sl, [r8, #80]
        1db4d4:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1db4d8:	e5880054 	str	r0, [r8, #84]
        1db4dc:	e3e00003 	mvn	r0, #3	; 0x3
        1db4e0:	e5880058 	str	r0, [r8, #88]
        1db4e4:	e5885068 	str	r5, [r8, #104]
        1db4e8:	ea000001 	b	1db4f4 <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x104>
        1db4ec:	15c40040 	strneb	r0, [r4, #64]	; fField64
        1db4f0:	1a000004 	bne	1db508 <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x118>
        1db4f4:	eb67e136 	bl	1bd39d4 <$GetGlobals>
        1db4f8:	eb6833cf 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1db4fc:	e5901000 	ldr	r1, [r0]
        1db500:	e1a00008 	mov	r0, r8
        1db504:	eb680221 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1db508:	e1a03009 	mov	r3, r9
        1db50c:	e1a02008 	mov	r2, r8
        1db510:	e1a01006 	mov	r1, r6
        1db514:	e3a00010 	mov	r0, #16	; 0x10
        1db518:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1db51c:	e2883038 	add	r3, r8, #56	; 0x38
        1db520:	e3a0201c 	mov	r2, #28	; 0x1c
        1db524:	e92d000c 	stmdb	sp!, {r2, r3}
        1db528:	e0883002 	add	r3, r8, r2
        1db52c:	e1a02008 	mov	r2, r8
        1db530:	e3a01004 	mov	r1, #4	; 0x4
        1db534:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1db538:	eb60afa3 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1db53c:	e28dd018 	add	sp, sp, #24	; 0x18
        1db540:	e1a05000 	mov	r5, r0
        1db544:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1db548:	e37c0025 	cmn	ip, #37	; 0x25
        1db54c:	1a000003 	bne	1db560 <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x170>
        1db550:	e1a02008 	mov	r2, r8
        1db554:	e1a00004 	mov	r0, r4
        1db558:	e3a01004 	mov	r1, #4	; 0x4
        1db55c:	eb60e124 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1db560:	e3390000 	teq	r9, #0	; 0x0
        1db564:	0a000010 	beq	1db5ac <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x1bc>
        1db568:	e3350000 	teq	r5, #0	; 0x0
        1db56c:	05985040 	ldreq	r5, [r8, #64]	; fField64
        1db570:	e5d40040 	ldrb	r0, [r4, #64]	; fField64
        1db574:	e3300000 	teq	r0, #0	; 0x0
        1db578:	15c4a040 	strneb	sl, [r4, #64]	; fField64
        1db57c:	1a000002 	bne	1db58c <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x19c>
        1db580:	e3350000 	teq	r5, #0	; 0x0
        1db584:	03a050c9 	moveq	r5, #201	; 0xc9
        1db588:	02455b0a 	subeq	r5, r5, #10240	; 0x2800
        1db58c:	e3380000 	teq	r8, #0	; 0x0
        1db590:	0a00000e 	beq	1db5d0 <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x1e0>
        1db594:	e1a00008 	mov	r0, r8
        1db598:	e3a01000 	mov	r1, #0	; 0x0
        1db59c:	eb67cc5b 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1db5a0:	e1a00008 	mov	r0, r8
        1db5a4:	eb67c84d 	bl	1bcd6e0 <$__dl(void *)>
        1db5a8:	ea000008 	b	1db5d0 <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x1e0>
        1db5ac:	e3350000 	teq	r5, #0	; 0x0
        1db5b0:	1a000004 	bne	1db5c8 <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x1d8>
        1db5b4:	e1a02008 	mov	r2, r8
        1db5b8:	e5b40024 	ldr	r0, [r4, #36]!	; fField36
        1db5bc:	e5901000 	ldr	r1, [r0]
        1db5c0:	eb6837c9 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1db5c4:	ea000001 	b	1db5d0 <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x1e0>
        1db5c8:	e3380000 	teq	r8, #0	; 0x0
        1db5cc:	1afffff0 	bne	1db594 <TSerialEndpoint::nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)+0x1a4>
        1db5d0:	e1a00005 	mov	r0, r5
        1db5d4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)
 * Address: 001db5d8
 */
TSerialEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *) {
    /*
        1db5d8:	e1a0c00d 	mov	ip, sp
        1db5dc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1db5e0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1db5e4:	e24cb014 	sub	fp, ip, #20	; 0x14
        1db5e8:	e1a04000 	mov	r4, r0
        1db5ec:	e1a06001 	mov	r6, r1
        1db5f0:	e1a05002 	mov	r5, r2
        1db5f4:	e28b9018 	add	r9, fp, #24	; 0x18
        1db5f8:	e8990201 	ldmia	r9, {r0, r9}
        1db5fc:	e20080ff 	and	r8, r0, #255	; 0xff
        1db600:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        1db604:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1db608:	e3300005 	teq	r0, #5	; 0x5
        1db60c:	13e000a5 	mvnne	r0, #165	; 0xa5
        1db610:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1db614:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db618:	e3380000 	teq	r8, #0	; 0x0
        1db61c:	0a000006 	beq	1db63c <TSerialEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x64>
        1db620:	e1a00004 	mov	r0, r4
        1db624:	e3a01001 	mov	r1, #1	; 0x1
        1db628:	eb611272 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1db62c:	e3300000 	teq	r0, #0	; 0x0
        1db630:	13a00042 	movne	r0, #66	; 0x42
        1db634:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1db638:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db63c:	e5d40042 	ldrb	r0, [r4, #66]	; fField66
        1db640:	e3300000 	teq	r0, #0	; 0x0
        1db644:	13e000a2 	mvnne	r0, #162	; 0xa2
        1db648:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1db64c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db650:	e5950000 	ldr	r0, [r5]
        1db654:	e3300000 	teq	r0, #0	; 0x0
        1db658:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db65c:	e1a00004 	mov	r0, r4
        1db660:	e3a01001 	mov	r1, #1	; 0x1
        1db664:	eb611254 	bl	1a1ffbc <TSerialEndpoint::$GrabPutPB(unsigned char)>
        1db668:	e1b07000 	movs	r7, r0
        1db66c:	03e060a7 	mvneq	r6, #167	; 0xa7
        1db670:	02466b23 	subeq	r6, r6, #35840	; 0x8c00
        1db674:	0a00002b 	beq	1db728 <TSerialEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x150>
        1db678:	e3380000 	teq	r8, #0	; 0x0
        1db67c:	13a00000 	movne	r0, #0	; 0x0
        1db680:	15c70018 	strneb	r0, [r7, #24]	; fField24
        1db684:	1a000005 	bne	1db6a0 <TSerialEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0xc8>
        1db688:	e3a00001 	mov	r0, #1	; 0x1
        1db68c:	e5c70018 	strb	r0, [r7, #24]	; fField24
        1db690:	e3a00000 	mov	r0, #0	; 0x0
        1db694:	e5870070 	str	r0, [r7, #112]
        1db698:	e587606c 	str	r6, [r7, #108]
        1db69c:	e5879078 	str	r9, [r7, #120]
        1db6a0:	e3e03000 	mvn	r3, #0	; 0x0
        1db6a4:	e3a02000 	mov	r2, #0	; 0x0
        1db6a8:	e92d000c 	stmdb	sp!, {r2, r3}
        1db6ac:	e597007c 	ldr	r0, [r7, #124]	; fField124
        1db6b0:	e1a01006 	mov	r1, r6
        1db6b4:	e3a03000 	mov	r3, #0	; 0x0
        1db6b8:	e5952000 	ldr	r2, [r5]
        1db6bc:	eb68377a 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        1db6c0:	e28dd008 	add	sp, sp, #8	; 0x8
        1db6c4:	e1b06000 	movs	r6, r0
        1db6c8:	1a00000f 	bne	1db70c <TSerialEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x134>
        1db6cc:	e5970080 	ldr	r0, [r7, #128]	; fField128
        1db6d0:	e597107c 	ldr	r1, [r7, #124]	; fField124
        1db6d4:	eb683b8a 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
        1db6d8:	e1b06000 	movs	r6, r0
        1db6dc:	1a00000a 	bne	1db70c <TSerialEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x134>
        1db6e0:	e1a03009 	mov	r3, r9
        1db6e4:	e1a02008 	mov	r2, r8
        1db6e8:	e1a0100a 	mov	r1, sl
        1db6ec:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1db6f0:	e1a02005 	mov	r2, r5
        1db6f4:	e1a01007 	mov	r1, r7
        1db6f8:	e1a00004 	mov	r0, r4
        1db6fc:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        1db700:	eb611665 	bl	1a2109c <TSerialEndpoint::$SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        1db704:	e28dd00c 	add	sp, sp, #12	; 0xc
        1db708:	e1a06000 	mov	r6, r0
        1db70c:	e3370000 	teq	r7, #0	; 0x0
        1db710:	0a000004 	beq	1db728 <TSerialEndpoint::nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x150>
        1db714:	e3380000 	teq	r8, #0	; 0x0
        1db718:	03360000 	teqeq	r6, #0	; 0x0
        1db71c:	11a01007 	movne	r1, r7
        1db720:	11a00004 	movne	r0, r4
        1db724:	1b611250 	blne	1a2006c <TSerialEndpoint::$ReleasePutPB(TCommToolPutPB *)>
        1db728:	e1a00006 	mov	r0, r6
        1db72c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)
 * Address: 001db794
 */
TSerialEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *) {
    /*
        1db794:	e1a0c00d 	mov	ip, sp
        1db798:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1db79c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1db7a0:	e1a04000 	mov	r4, r0
        1db7a4:	e1a05001 	mov	r5, r1
        1db7a8:	e1a07002 	mov	r7, r2
        1db7ac:	e1a06003 	mov	r6, r3
        1db7b0:	e99b0401 	ldmib	fp, {r0, sl}
        1db7b4:	e20090ff 	and	r9, r0, #255	; 0xff
        1db7b8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1db7bc:	e3300005 	teq	r0, #5	; 0x5
        1db7c0:	13e000a5 	mvnne	r0, #165	; 0xa5
        1db7c4:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1db7c8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db7cc:	e3390000 	teq	r9, #0	; 0x0
        1db7d0:	0a000006 	beq	1db7f0 <TSerialEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x5c>
        1db7d4:	e1a00004 	mov	r0, r4
        1db7d8:	e3a01001 	mov	r1, #1	; 0x1
        1db7dc:	eb611205 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1db7e0:	e3300000 	teq	r0, #0	; 0x0
        1db7e4:	13a00042 	movne	r0, #66	; 0x42
        1db7e8:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1db7ec:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db7f0:	e5d40042 	ldrb	r0, [r4, #66]	; fField66
        1db7f4:	e3300000 	teq	r0, #0	; 0x0
        1db7f8:	13e000a2 	mvnne	r0, #162	; 0xa2
        1db7fc:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1db800:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db804:	e1a00005 	mov	r0, r5
        1db808:	e5951000 	ldr	r1, [r5]
        1db80c:	e1a0e00f 	mov	lr, pc
        1db810:	e281f02c 	add	pc, r1, #44	; 0x2c
        1db814:	e3300000 	teq	r0, #0	; 0x0
        1db818:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db81c:	e1a00004 	mov	r0, r4
        1db820:	e3a01000 	mov	r1, #0	; 0x0
        1db824:	eb6111e4 	bl	1a1ffbc <TSerialEndpoint::$GrabPutPB(unsigned char)>
        1db828:	e1b08000 	movs	r8, r0
        1db82c:	03e050a7 	mvneq	r5, #167	; 0xa7
        1db830:	02455b23 	subeq	r5, r5, #35840	; 0x8c00
        1db834:	0a000022 	beq	1db8c4 <TSerialEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x130>
        1db838:	e3a00000 	mov	r0, #0	; 0x0
        1db83c:	e288806c 	add	r8, r8, #108	; 0x6c
        1db840:	e8880021 	stmia	r8, {r0, r5}
        1db844:	e588a00c 	str	sl, [r8, #12]
        1db848:	e248806c 	sub	r8, r8, #108	; 0x6c
        1db84c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1db850:	e1a00005 	mov	r0, r5
        1db854:	e5951000 	ldr	r1, [r5]
        1db858:	e1a0e00f 	mov	lr, pc
        1db85c:	e281f02c 	add	pc, r1, #44	; 0x2c
        1db860:	e58d0000 	str	r0, [sp]
        1db864:	e1a01005 	mov	r1, r5
        1db868:	e5980080 	ldr	r0, [r8, #128]	; fField128
        1db86c:	eb683b24 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
        1db870:	e1b05000 	movs	r5, r0
        1db874:	1a00000a 	bne	1db8a4 <TSerialEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x110>
        1db878:	e1a0300a 	mov	r3, sl
        1db87c:	e1a02009 	mov	r2, r9
        1db880:	e1a01006 	mov	r1, r6
        1db884:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1db888:	e1a03007 	mov	r3, r7
        1db88c:	e28d200c 	add	r2, sp, #12	; 0xc
        1db890:	e1a01008 	mov	r1, r8
        1db894:	e1a00004 	mov	r0, r4
        1db898:	eb6115ff 	bl	1a2109c <TSerialEndpoint::$SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        1db89c:	e28dd00c 	add	sp, sp, #12	; 0xc
        1db8a0:	e1a05000 	mov	r5, r0
        1db8a4:	e28dd004 	add	sp, sp, #4	; 0x4
        1db8a8:	e3380000 	teq	r8, #0	; 0x0
        1db8ac:	0a000004 	beq	1db8c4 <TSerialEndpoint::nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x130>
        1db8b0:	e3390000 	teq	r9, #0	; 0x0
        1db8b4:	03350000 	teqeq	r5, #0	; 0x0
        1db8b8:	11a01008 	movne	r1, r8
        1db8bc:	11a00004 	movne	r0, r4
        1db8c0:	1b6111e9 	blne	1a2006c <TSerialEndpoint::$ReleasePutPB(TCommToolPutPB *)>
        1db8c4:	e1a00005 	mov	r0, r5
        1db8c8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)
 * Address: 001db8cc
 */
TSerialEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *) {
    /*
        1db8cc:	e1a0c00d 	mov	ip, sp
        1db8d0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1db8d4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1db8d8:	e24cb014 	sub	fp, ip, #20	; 0x14
        1db8dc:	e1a04000 	mov	r4, r0
        1db8e0:	e1a06001 	mov	r6, r1
        1db8e4:	e1a05002 	mov	r5, r2
        1db8e8:	e28b901c 	add	r9, fp, #28	; 0x1c
        1db8ec:	e8990201 	ldmia	r9, {r0, r9}
        1db8f0:	e20080ff 	and	r8, r0, #255	; 0xff
        1db8f4:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        1db8f8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1db8fc:	e3300005 	teq	r0, #5	; 0x5
        1db900:	13e000a5 	mvnne	r0, #165	; 0xa5
        1db904:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1db908:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db90c:	e3380000 	teq	r8, #0	; 0x0
        1db910:	0a000006 	beq	1db930 <TSerialEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x64>
        1db914:	e1a00004 	mov	r0, r4
        1db918:	e3a01001 	mov	r1, #1	; 0x1
        1db91c:	eb6111b5 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1db920:	e3300000 	teq	r0, #0	; 0x0
        1db924:	13a00042 	movne	r0, #66	; 0x42
        1db928:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1db92c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db930:	e5d40042 	ldrb	r0, [r4, #66]	; fField66
        1db934:	e3300000 	teq	r0, #0	; 0x0
        1db938:	13e000a2 	mvnne	r0, #162	; 0xa2
        1db93c:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1db940:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db944:	e5950000 	ldr	r0, [r5]
        1db948:	e3300000 	teq	r0, #0	; 0x0
        1db94c:	058a0000 	streq	r0, [sl]
        1db950:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1db954:	e1a00004 	mov	r0, r4
        1db958:	e3a01001 	mov	r1, #1	; 0x1
        1db95c:	eb611195 	bl	1a1ffb8 <TSerialEndpoint::$GrabGetPB(unsigned char)>
        1db960:	e1b07000 	movs	r7, r0
        1db964:	03e060a7 	mvneq	r6, #167	; 0xa7
        1db968:	02466b23 	subeq	r6, r6, #35840	; 0x8c00
        1db96c:	0a00002c 	beq	1dba24 <TSerialEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x158>
        1db970:	e3380000 	teq	r8, #0	; 0x0
        1db974:	13a00000 	movne	r0, #0	; 0x0
        1db978:	15c70018 	strneb	r0, [r7, #24]	; fField24
        1db97c:	1a000005 	bne	1db998 <TSerialEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0xcc>
        1db980:	e3a00001 	mov	r0, #1	; 0x1
        1db984:	e5c70018 	strb	r0, [r7, #24]	; fField24
        1db988:	e3a00000 	mov	r0, #0	; 0x0
        1db98c:	e5870074 	str	r0, [r7, #116]
        1db990:	e5876070 	str	r6, [r7, #112]
        1db994:	e5879080 	str	r9, [r7, #128]	; fField128
        1db998:	e3e03000 	mvn	r3, #0	; 0x0
        1db99c:	e3a02000 	mov	r2, #0	; 0x0
        1db9a0:	e92d000c 	stmdb	sp!, {r2, r3}
        1db9a4:	e5970084 	ldr	r0, [r7, #132]	; fField132
        1db9a8:	e1a01006 	mov	r1, r6
        1db9ac:	e3a03000 	mov	r3, #0	; 0x0
        1db9b0:	e5952000 	ldr	r2, [r5]
        1db9b4:	eb6836bc 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        1db9b8:	e28dd008 	add	sp, sp, #8	; 0x8
        1db9bc:	e1b06000 	movs	r6, r0
        1db9c0:	1a000010 	bne	1dba08 <TSerialEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x13c>
        1db9c4:	e5970088 	ldr	r0, [r7, #136]	; fField136
        1db9c8:	e5971084 	ldr	r1, [r7, #132]	; fField132
        1db9cc:	eb683acc 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
        1db9d0:	e1b06000 	movs	r6, r0
        1db9d4:	1a00000b 	bne	1dba08 <TSerialEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x13c>
        1db9d8:	e1a03009 	mov	r3, r9
        1db9dc:	e1a02008 	mov	r2, r8
        1db9e0:	e1a0000a 	mov	r0, sl
        1db9e4:	e59b1018 	ldr	r1, [fp, #24]	; fField24
        1db9e8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1db9ec:	e1a02005 	mov	r2, r5
        1db9f0:	e1a01007 	mov	r1, r7
        1db9f4:	e1a00004 	mov	r0, r4
        1db9f8:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        1db9fc:	eb611190 	bl	1a20044 <TSerialEndpoint::$RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
        1dba00:	e28dd010 	add	sp, sp, #16	; 0x10
        1dba04:	e1a06000 	mov	r6, r0
        1dba08:	e3370000 	teq	r7, #0	; 0x0
        1dba0c:	0a000004 	beq	1dba24 <TSerialEndpoint::nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x158>
        1dba10:	e3380000 	teq	r8, #0	; 0x0
        1dba14:	03360000 	teqeq	r6, #0	; 0x0
        1dba18:	11a01007 	movne	r1, r7
        1dba1c:	11a00004 	movne	r0, r4
        1dba20:	1b611190 	blne	1a20068 <TSerialEndpoint::$ReleaseGetPB(TCommToolGetPB *)>
        1dba24:	e1a00006 	mov	r0, r6
        1dba28:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)
 * Address: 001dba2c
 */
TSerialEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *) {
    /*
        1dba2c:	e1a0c00d 	mov	ip, sp
        1dba30:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1dba34:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1dba38:	e24cb014 	sub	fp, ip, #20	; 0x14
        1dba3c:	e1a05000 	mov	r5, r0
        1dba40:	e1a04001 	mov	r4, r1
        1dba44:	e1a06003 	mov	r6, r3
        1dba48:	e28ba018 	add	sl, fp, #24	; 0x18
        1dba4c:	e89a0401 	ldmia	sl, {r0, sl}
        1dba50:	e20090ff 	and	r9, r0, #255	; 0xff
        1dba54:	e5950010 	ldr	r0, [r5, #16]	; fField16
        1dba58:	e3300005 	teq	r0, #5	; 0x5
        1dba5c:	13e000a5 	mvnne	r0, #165	; 0xa5
        1dba60:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1dba64:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1dba68:	e3390000 	teq	r9, #0	; 0x0
        1dba6c:	0a000006 	beq	1dba8c <TSerialEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x60>
        1dba70:	e1a00005 	mov	r0, r5
        1dba74:	e3a01001 	mov	r1, #1	; 0x1
        1dba78:	eb61115e 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1dba7c:	e3300000 	teq	r0, #0	; 0x0
        1dba80:	13a00042 	movne	r0, #66	; 0x42
        1dba84:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1dba88:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1dba8c:	e5d50042 	ldrb	r0, [r5, #66]	; fField66
        1dba90:	e3300000 	teq	r0, #0	; 0x0
        1dba94:	13e000a2 	mvnne	r0, #162	; 0xa2
        1dba98:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1dba9c:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1dbaa0:	e1a00004 	mov	r0, r4
        1dbaa4:	e5941000 	ldr	r1, [r4]
        1dbaa8:	e1a0e00f 	mov	lr, pc
        1dbaac:	e281f02c 	add	pc, r1, #44	; 0x2c
        1dbab0:	e3a08000 	mov	r8, #0	; 0x0
        1dbab4:	e3300000 	teq	r0, #0	; 0x0
        1dbab8:	01a00008 	moveq	r0, r8
        1dbabc:	05868000 	streq	r8, [r6]
        1dbac0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1dbac4:	e1a00005 	mov	r0, r5
        1dbac8:	e3a01000 	mov	r1, #0	; 0x0
        1dbacc:	eb611139 	bl	1a1ffb8 <TSerialEndpoint::$GrabGetPB(unsigned char)>
        1dbad0:	e1b07000 	movs	r7, r0
        1dbad4:	03e080a7 	mvneq	r8, #167	; 0xa7
        1dbad8:	02488b23 	subeq	r8, r8, #35840	; 0x8c00
        1dbadc:	0a00003d 	beq	1dbbd8 <TSerialEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x1ac>
        1dbae0:	e3390000 	teq	r9, #0	; 0x0
        1dbae4:	15c78018 	strneb	r8, [r7, #24]	; fField24
        1dbae8:	1a000004 	bne	1dbb00 <TSerialEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0xd4>
        1dbaec:	e3a00001 	mov	r0, #1	; 0x1
        1dbaf0:	e5c70018 	strb	r0, [r7, #24]	; fField24
        1dbaf4:	e5874074 	str	r4, [r7, #116]
        1dbaf8:	e5878070 	str	r8, [r7, #112]
        1dbafc:	e587a080 	str	sl, [r7, #128]	; fField128
        1dbb00:	e24dd004 	sub	sp, sp, #4	; 0x4
        1dbb04:	e1a00004 	mov	r0, r4
        1dbb08:	e5941000 	ldr	r1, [r4]
        1dbb0c:	e1a0e00f 	mov	lr, pc
        1dbb10:	e281f02c 	add	pc, r1, #44	; 0x2c
        1dbb14:	e58d0000 	str	r0, [sp]
        1dbb18:	e1a01004 	mov	r1, r4
        1dbb1c:	e5970088 	ldr	r0, [r7, #136]	; fField136
        1dbb20:	eb683a77 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
        1dbb24:	e1b08000 	movs	r8, r0
        1dbb28:	1a000022 	bne	1dbbb8 <TSerialEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x18c>
        1dbb2c:	e1a0300a 	mov	r3, sl
        1dbb30:	e1a02009 	mov	r2, r9
        1dbb34:	e1a00006 	mov	r0, r6
        1dbb38:	e59b1014 	ldr	r1, [fp, #20]	; fField20
        1dbb3c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1dbb40:	e28d2010 	add	r2, sp, #16	; 0x10
        1dbb44:	e1a01007 	mov	r1, r7
        1dbb48:	e1a00005 	mov	r0, r5
        1dbb4c:	e59b300c 	ldr	r3, [fp, #12]
        1dbb50:	eb61113b 	bl	1a20044 <TSerialEndpoint::$RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
        1dbb54:	e28dd010 	add	sp, sp, #16	; 0x10
        1dbb58:	e1a08000 	mov	r8, r0
        1dbb5c:	e3390000 	teq	r9, #0	; 0x0
        1dbb60:	0a000014 	beq	1dbbb8 <TSerialEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x18c>
        1dbb64:	e3380000 	teq	r8, #0	; 0x0
        1dbb68:	1a000012 	bne	1dbbb8 <TSerialEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x18c>
        1dbb6c:	e1a00004 	mov	r0, r4
        1dbb70:	e5941000 	ldr	r1, [r4]
        1dbb74:	e1a0e00f 	mov	lr, pc
        1dbb78:	e281f02c 	add	pc, r1, #44	; 0x2c
        1dbb7c:	e59d1000 	ldr	r1, [sp]
        1dbb80:	e1510000 	cmp	r1, r0
        1dbb84:	aa000005 	bge	1dbba0 <TSerialEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x174>
        1dbb88:	e0401001 	sub	r1, r0, r1
        1dbb8c:	e1a00004 	mov	r0, r4
        1dbb90:	e3a02001 	mov	r2, #1	; 0x1
        1dbb94:	e5943000 	ldr	r3, [r4]
        1dbb98:	e1a0e00f 	mov	lr, pc
        1dbb9c:	e283f034 	add	pc, r3, #52	; 0x34
        1dbba0:	e1a00004 	mov	r0, r4
        1dbba4:	e3e02000 	mvn	r2, #0	; 0x0
        1dbba8:	e3a01000 	mov	r1, #0	; 0x0
        1dbbac:	e5943000 	ldr	r3, [r4]
        1dbbb0:	e1a0e00f 	mov	lr, pc
        1dbbb4:	e283f038 	add	pc, r3, #56	; 0x38
        1dbbb8:	e28dd004 	add	sp, sp, #4	; 0x4
        1dbbbc:	e3370000 	teq	r7, #0	; 0x0
        1dbbc0:	0a000004 	beq	1dbbd8 <TSerialEndpoint::nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x1ac>
        1dbbc4:	e3390000 	teq	r9, #0	; 0x0
        1dbbc8:	03380000 	teqeq	r8, #0	; 0x0
        1dbbcc:	11a01007 	movne	r1, r7
        1dbbd0:	11a00005 	movne	r0, r5
        1dbbd4:	1b611123 	blne	1a20068 <TSerialEndpoint::$ReleaseGetPB(TCommToolGetPB *)>
        1dbbd8:	e1a00008 	mov	r0, r8
        1dbbdc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::nAbort(unsigned char)
 * Address: 001dbbe0
 */
TSerialEndpoint::nAbort(unsigned char) {
    /*
        1dbbe0:	e20120ff 	and	r2, r1, #255	; 0xff
        1dbbe4:	e5d01042 	ldrb	r1, [r0, #66]	; fField66
        1dbbe8:	e3310000 	teq	r1, #0	; 0x0
        1dbbec:	03a01007 	moveq	r1, #7	; 0x7
        1dbbf0:	0a611111 	beq	1a2003c <TSerialEndpoint::$PrepareAbort(unsigned long, unsigned char)>
        1dbbf4:	13e000a2 	mvnne	r0, #162	; 0xa2
        1dbbf8:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1dbbfc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialEndpoint::Timeout(unsigned long)
 * Address: 001dbc00
 */
TSerialEndpoint::Timeout(unsigned long) {
    /*
        1dbc00:	e1a0c00d 	mov	ip, sp
        1dbc04:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1dbc08:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dbc0c:	e1a04000 	mov	r4, r0
        1dbc10:	e1a05001 	mov	r5, r1
        1dbc14:	e3a07000 	mov	r7, #0	; 0x0
        1dbc18:	e3a06000 	mov	r6, #0	; 0x0
        1dbc1c:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1dbc20:	e5900000 	ldr	r0, [r0]
        1dbc24:	e3500000 	cmp	r0, #0	; 0x0
        1dbc28:	da00000f 	ble	1dbc6c <TSerialEndpoint::Timeout(unsigned long)+0x6c>
        1dbc2c:	e1a01006 	mov	r1, r6
        1dbc30:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1dbc34:	eb6829c2 	bl	1be6344 <CList::$At(long)>
        1dbc38:	e1300005 	teq	r0, r5
        1dbc3c:	1a000005 	bne	1dbc58 <TSerialEndpoint::Timeout(unsigned long)+0x58>
        1dbc40:	e5b01010 	ldr	r1, [r0, #16]!	; fField16
        1dbc44:	e1a00004 	mov	r0, r4
        1dbc48:	e3a02000 	mov	r2, #0	; 0x0
        1dbc4c:	eb60df68 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1dbc50:	e1a07000 	mov	r7, r0
        1dbc54:	ea000004 	b	1dbc6c <TSerialEndpoint::Timeout(unsigned long)+0x6c>
        1dbc58:	e2866001 	add	r6, r6, #1	; 0x1
        1dbc5c:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1dbc60:	e5900000 	ldr	r0, [r0]
        1dbc64:	e1500006 	cmp	r0, r6
        1dbc68:	caffffef 	bgt	1dbc2c <TSerialEndpoint::Timeout(unsigned long)+0x2c>
        1dbc6c:	e1a00007 	mov	r0, r7
        1dbc70:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::IsPending(unsigned long)
 * Address: 001dbc74
 */
TSerialEndpoint::IsPending(unsigned long) {
    /*
        1dbc74:	e3a02000 	mov	r2, #0	; 0x0
        1dbc78:	e3110001 	tst	r1, #1	; 0x1
        1dbc7c:	15d02040 	ldrneb	r2, [r0, #64]	; fField64
        1dbc80:	e3110002 	tst	r1, #2	; 0x2
        1dbc84:	0a000009 	beq	1dbcb0 <TSerialEndpoint::IsPending(unsigned long)+0x3c>
        1dbc88:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1dbc8c:	e3300000 	teq	r0, #0	; 0x0
        1dbc90:	0a000003 	beq	1dbca4 <TSerialEndpoint::IsPending(unsigned long)+0x30>
        1dbc94:	e5900000 	ldr	r0, [r0]
        1dbc98:	e3500000 	cmp	r0, #0	; 0x0
        1dbc9c:	c3a00001 	movgt	r0, #1	; 0x1
        1dbca0:	ca000000 	bgt	1dbca8 <TSerialEndpoint::IsPending(unsigned long)+0x34>
        1dbca4:	e3a00000 	mov	r0, #0	; 0x0
        1dbca8:	e1800002 	orr	r0, r0, r2
        1dbcac:	e20020ff 	and	r2, r0, #255	; 0xff
        1dbcb0:	e1a00002 	mov	r0, r2
        1dbcb4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialEndpoint::SetState(long)
 * Address: 001dbcb8
 */
TSerialEndpoint::SetState(long) {
    /*
        1dbcb8:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1dbcbc:	e3320001 	teq	r2, #1	; 0x1
        1dbcc0:	13e000a5 	mvnne	r0, #165	; 0xa5
        1dbcc4:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1dbcc8:	11a0f00e 	movne	pc, lr
        1dbccc:	e3510000 	cmp	r1, #0	; 0x0
        1dbcd0:	ba000001 	blt	1dbcdc <TSerialEndpoint::SetState(long)+0x24>
        1dbcd4:	e3510008 	cmp	r1, #8	; 0x8
        1dbcd8:	da000002 	ble	1dbce8 <TSerialEndpoint::SetState(long)+0x30>
        1dbcdc:	e3a0007a 	mov	r0, #122	; 0x7a
        1dbce0:	e2400c3f 	sub	r0, r0, #16128	; 0x3f00
        1dbce4:	e1a0f00e 	mov	pc, lr
        1dbce8:	e5a01010 	str	r1, [r0, #16]!	; fField16
        1dbcec:	e3a00000 	mov	r0, #0	; 0x0
        1dbcf0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSerialEndpoint::HandlePutReply(TCommToolPutPB *)
 * Address: 001dbcf4
 */
TSerialEndpoint::HandlePutReply(TCommToolPutPB *) {
    /*
        1dbcf4:	e1a0c00d 	mov	ip, sp
        1dbcf8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1dbcfc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dbd00:	e1a04000 	mov	r4, r0
        1dbd04:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1dbd08:	e3300000 	teq	r0, #0	; 0x0
        1dbd0c:	15d10018 	ldrneb	r0, [r1, #24]	; fField24
        1dbd10:	13300000 	teqne	r0, #0	; 0x0
        1dbd14:	01a00004 	moveq	r0, r4
        1dbd18:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        1dbd1c:	0a6110d2 	beq	1a2006c <TSerialEndpoint::$ReleasePutPB(TCommToolPutPB *)>
        1dbd20:	e24dd034 	sub	sp, sp, #52	; 0x34
        1dbd24:	e3a00030 	mov	r0, #48	; 0x30
        1dbd28:	e58d0030 	str	r0, [sp, #48]	; fField48
        1dbd2c:	e281004c 	add	r0, r1, #76	; 0x4c
        1dbd30:	e28dd018 	add	sp, sp, #24	; 0x18
        1dbd34:	e280e018 	add	lr, r0, #24	; 0x18
        1dbd38:	e93e1008 	ldmdb	lr!, {r3, ip}
        1dbd3c:	e92d1008 	stmdb	sp!, {r3, ip}
        1dbd40:	e93e1008 	ldmdb	lr!, {r3, ip}
        1dbd44:	e92d1008 	stmdb	sp!, {r3, ip}
        1dbd48:	e93e1008 	ldmdb	lr!, {r3, ip}
        1dbd4c:	e92d1008 	stmdb	sp!, {r3, ip}
        1dbd50:	e28d2018 	add	r2, sp, #24	; 0x18
        1dbd54:	e280e018 	add	lr, r0, #24	; 0x18
        1dbd58:	e89e1008 	ldmia	lr, {r3, ip}
        1dbd5c:	e8821008 	stmia	r2, {r3, ip}
        1dbd60:	e28d3020 	add	r3, sp, #32	; 0x20
        1dbd64:	e2802020 	add	r2, r0, #32	; 0x20
        1dbd68:	e1a00003 	mov	r0, r3
        1dbd6c:	e892500c 	ldmia	r2, {r2, r3, ip, lr}
        1dbd70:	e880500c 	stmia	r0, {r2, r3, ip, lr}
        1dbd74:	e5910040 	ldr	r0, [r1, #64]	; fField64
        1dbd78:	e58d0008 	str	r0, [sp, #8]
        1dbd7c:	e5910048 	ldr	r0, [r1, #72]
        1dbd80:	e58d0028 	str	r0, [sp, #40]	; fField40
        1dbd84:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1dbd88:	e58d000c 	str	r0, [sp, #12]
        1dbd8c:	e3e00001 	mvn	r0, #1	; 0x1
        1dbd90:	e58d0010 	str	r0, [sp, #16]	; fField16
        1dbd94:	e1a00004 	mov	r0, r4
        1dbd98:	eb6110b3 	bl	1a2006c <TSerialEndpoint::$ReleasePutPB(TCommToolPutPB *)>
        1dbd9c:	e1a0300d 	mov	r3, sp
        1dbda0:	e28d2030 	add	r2, sp, #48	; 0x30
        1dbda4:	e5b4c018 	ldr	ip, [r4, #24]!	; fField24
        1dbda8:	e1a0000c 	mov	r0, ip
        1dbdac:	e3a01000 	mov	r1, #0	; 0x0
        1dbdb0:	e59cc000 	ldr	ip, [ip]
        1dbdb4:	e1a0e00f 	mov	lr, pc
        1dbdb8:	e28cf008 	add	pc, ip, #8	; 0x8
        1dbdbc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::HandleGetReply(TCommToolGetPB *)
 * Address: 001dbdc0
 */
TSerialEndpoint::HandleGetReply(TCommToolGetPB *) {
    /*
        1dbdc0:	e1a0c00d 	mov	ip, sp
        1dbdc4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1dbdc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dbdcc:	e1a05000 	mov	r5, r0
        1dbdd0:	e1a04001 	mov	r4, r1
        1dbdd4:	e5916074 	ldr	r6, [r1, #116]
        1dbdd8:	e3360000 	teq	r6, #0	; 0x0
        1dbddc:	0a000015 	beq	1dbe38 <TSerialEndpoint::HandleGetReply(TCommToolGetPB *)+0x78>
        1dbde0:	e5940058 	ldr	r0, [r4, #88]
        1dbde4:	e3300000 	teq	r0, #0	; 0x0
        1dbde8:	1a000012 	bne	1dbe38 <TSerialEndpoint::HandleGetReply(TCommToolGetPB *)+0x78>
        1dbdec:	e1a00006 	mov	r0, r6
        1dbdf0:	e594704c 	ldr	r7, [r4, #76]
        1dbdf4:	e5961000 	ldr	r1, [r6]
        1dbdf8:	e1a0e00f 	mov	lr, pc
        1dbdfc:	e281f02c 	add	pc, r1, #44	; 0x2c
        1dbe00:	e1570000 	cmp	r7, r0
        1dbe04:	2a000005 	bcs	1dbe20 <TSerialEndpoint::HandleGetReply(TCommToolGetPB *)+0x60>
        1dbe08:	e0401007 	sub	r1, r0, r7
        1dbe0c:	e1a00006 	mov	r0, r6
        1dbe10:	e3a02001 	mov	r2, #1	; 0x1
        1dbe14:	e5963000 	ldr	r3, [r6]
        1dbe18:	e1a0e00f 	mov	lr, pc
        1dbe1c:	e283f034 	add	pc, r3, #52	; 0x34
        1dbe20:	e1a00006 	mov	r0, r6
        1dbe24:	e3e02000 	mvn	r2, #0	; 0x0
        1dbe28:	e3a01000 	mov	r1, #0	; 0x0
        1dbe2c:	e5963000 	ldr	r3, [r6]
        1dbe30:	e1a0e00f 	mov	lr, pc
        1dbe34:	e283f038 	add	pc, r3, #56	; 0x38
        1dbe38:	e5950018 	ldr	r0, [r5, #24]	; fField24
        1dbe3c:	e3300000 	teq	r0, #0	; 0x0
        1dbe40:	15d40018 	ldrneb	r0, [r4, #24]	; fField24
        1dbe44:	13300000 	teqne	r0, #0	; 0x0
        1dbe48:	01a01004 	moveq	r1, r4
        1dbe4c:	01a00005 	moveq	r0, r5
        1dbe50:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1dbe54:	0a611083 	beq	1a20068 <TSerialEndpoint::$ReleaseGetPB(TCommToolGetPB *)>
        1dbe58:	e24dd038 	sub	sp, sp, #56	; 0x38
        1dbe5c:	e3a00034 	mov	r0, #52	; 0x34
        1dbe60:	e58d0034 	str	r0, [sp, #52]	; fField52
        1dbe64:	e2840050 	add	r0, r4, #80	; 0x50
        1dbe68:	e28dd018 	add	sp, sp, #24	; 0x18
        1dbe6c:	e2801018 	add	r1, r0, #24	; 0x18
        1dbe70:	e9311008 	ldmdb	r1!, {r3, ip}
        1dbe74:	e92d1008 	stmdb	sp!, {r3, ip}
        1dbe78:	e9311008 	ldmdb	r1!, {r3, ip}
        1dbe7c:	e92d1008 	stmdb	sp!, {r3, ip}
        1dbe80:	e9311008 	ldmdb	r1!, {r3, ip}
        1dbe84:	e92d1008 	stmdb	sp!, {r3, ip}
        1dbe88:	e28d2018 	add	r2, sp, #24	; 0x18
        1dbe8c:	e2801018 	add	r1, r0, #24	; 0x18
        1dbe90:	e8911008 	ldmia	r1, {r3, ip}
        1dbe94:	e8821008 	stmia	r2, {r3, ip}
        1dbe98:	e28d2020 	add	r2, sp, #32	; 0x20
        1dbe9c:	e2801020 	add	r1, r0, #32	; 0x20
        1dbea0:	e8b11009 	ldmia	r1!, {r0, r3, ip}
        1dbea4:	e8a21009 	stmia	r2!, {r0, r3, ip}
        1dbea8:	e8911008 	ldmia	r1, {r3, ip}
        1dbeac:	e8821008 	stmia	r2, {r3, ip}
        1dbeb0:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1dbeb4:	e58d0008 	str	r0, [sp, #8]
        1dbeb8:	e594004c 	ldr	r0, [r4, #76]
        1dbebc:	e58d0028 	str	r0, [sp, #40]	; fField40
        1dbec0:	e5d4008c 	ldrb	r0, [r4, #140]
        1dbec4:	e3300000 	teq	r0, #0	; 0x0
        1dbec8:	13a00002 	movne	r0, #2	; 0x2
        1dbecc:	e58d002c 	str	r0, [sp, #44]	; fField44
        1dbed0:	e5d40048 	ldrb	r0, [r4, #72]
        1dbed4:	e3300000 	teq	r0, #0	; 0x0
        1dbed8:	059d002c 	ldreq	r0, [sp, #44]	; fField44
        1dbedc:	03800001 	orreq	r0, r0, #1	; 0x1
        1dbee0:	058d002c 	streq	r0, [sp, #44]	; fField44
        1dbee4:	e5950018 	ldr	r0, [r5, #24]	; fField24
        1dbee8:	e58d000c 	str	r0, [sp, #12]
        1dbeec:	e3e00000 	mvn	r0, #0	; 0x0
        1dbef0:	e1a01004 	mov	r1, r4
        1dbef4:	e58d0010 	str	r0, [sp, #16]	; fField16
        1dbef8:	e1a00005 	mov	r0, r5
        1dbefc:	eb611059 	bl	1a20068 <TSerialEndpoint::$ReleaseGetPB(TCommToolGetPB *)>
        1dbf00:	e1a0300d 	mov	r3, sp
        1dbf04:	e28d2034 	add	r2, sp, #52	; 0x34
        1dbf08:	e5b5c018 	ldr	ip, [r5, #24]!	; fField24
        1dbf0c:	e1a0000c 	mov	r0, ip
        1dbf10:	e3a01000 	mov	r1, #0	; 0x0
        1dbf14:	e59cc000 	ldr	ip, [ip]
        1dbf18:	e1a0e00f 	mov	lr, pc
        1dbf1c:	e28cf008 	add	pc, ip, #8	; 0x8
        1dbf20:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::HandleControlReply(TCommToolControlPB *)
 * Address: 001dbf24
 */
TSerialEndpoint::HandleControlReply(TCommToolControlPB *) {
    /*
        1dbf24:	e1a0c00d 	mov	ip, sp
        1dbf28:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1dbf2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dbf30:	e1a04001 	mov	r4, r1
        1dbf34:	e5911024 	ldr	r1, [r1, #36]	; fField36
        1dbf38:	e2411003 	sub	r1, r1, #3	; 0x3
        1dbf3c:	e3510007 	cmp	r1, #7	; 0x7
        1dbf40:	908ff101 	addls	pc, pc, r1, lsl #2
        1dbf44:	ea00001d 	b	1dbfc0 <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x9c>
        1dbf48:	ea000008 	b	1dbf70 <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x4c>
        1dbf4c:	ea00000a 	b	1dbf7c <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x58>
        1dbf50:	ea00000c 	b	1dbf88 <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x64>
        1dbf54:	ea000011 	b	1dbfa0 <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x7c>
        1dbf58:	ea00000d 	b	1dbf94 <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x70>
        1dbf5c:	ea000012 	b	1dbfac <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x88>
        1dbf60:	ea000014 	b	1dbfb8 <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x94>
        1dbf64:	e1a01004 	mov	r1, r4
        1dbf68:	eb61101b 	bl	1a1ffdc <TSerialEndpoint::$HandleOptMgmtReply(TCommToolOptMgmtPB *)>
        1dbf6c:	ea000013 	b	1dbfc0 <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x9c>
        1dbf70:	e1a01004 	mov	r1, r4
        1dbf74:	eb611015 	bl	1a1ffd0 <TSerialEndpoint::$HandleConnectReply(TCommToolConnectPB *)>
        1dbf78:	ea000010 	b	1dbfc0 <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x9c>
        1dbf7c:	e1a01004 	mov	r1, r4
        1dbf80:	eb611014 	bl	1a1ffd8 <TSerialEndpoint::$HandleListenReply(TCommToolConnectPB *)>
        1dbf84:	ea00000d 	b	1dbfc0 <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x9c>
        1dbf88:	e1a01004 	mov	r1, r4
        1dbf8c:	eb61100d 	bl	1a1ffc8 <TSerialEndpoint::$HandleAcceptReply(TCommToolConnectPB *)>
        1dbf90:	ea00000a 	b	1dbfc0 <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x9c>
        1dbf94:	e1a01004 	mov	r1, r4
        1dbf98:	eb611010 	bl	1a1ffe0 <TSerialEndpoint::$HandleReleaseReply(TCommToolControlPB *)>
        1dbf9c:	ea000007 	b	1dbfc0 <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x9c>
        1dbfa0:	e1a01004 	mov	r1, r4
        1dbfa4:	eb61100a 	bl	1a1ffd4 <TSerialEndpoint::$HandleDisconnectReply(TCommToolDisconnectPB *)>
        1dbfa8:	ea000004 	b	1dbfc0 <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x9c>
        1dbfac:	e1a01004 	mov	r1, r4
        1dbfb0:	eb611005 	bl	1a1ffcc <TSerialEndpoint::$HandleBindReply(TCommToolBindPB *)>
        1dbfb4:	ea000001 	b	1dbfc0 <TSerialEndpoint::HandleControlReply(TCommToolControlPB *)+0x9c>
        1dbfb8:	e1a01004 	mov	r1, r4
        1dbfbc:	eb611009 	bl	1a1ffe8 <TSerialEndpoint::$HandleUnBindReply(TCommToolBindPB *)>
        1dbfc0:	e3340000 	teq	r4, #0	; 0x0
        1dbfc4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1dbfc8:	e1a00004 	mov	r0, r4
        1dbfcc:	e3a01000 	mov	r1, #0	; 0x0
        1dbfd0:	eb67c9ce 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1dbfd4:	e1a00004 	mov	r0, r4
        1dbfd8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1dbfdc:	ea67c5bf 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: TSerialEndpoint::HandleEventReply(TCommToolEventPB *)
 * Address: 001dc064
 */
TSerialEndpoint::HandleEventReply(TCommToolEventPB *) {
    /*
        1dc064:	e1a0c00d 	mov	ip, sp
        1dc068:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1dc06c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dc070:	e1a04000 	mov	r4, r0
        1dc074:	e1a05001 	mov	r5, r1
        1dc078:	e5910030 	ldr	r0, [r1, #48]	; fField48
        1dc07c:	e280cdfa 	add	ip, r0, #16000	; 0x3e80
        1dc080:	e37c0005 	cmn	ip, #5	; 0x5
        1dc084:	0a00002d 	beq	1dc140 <TSerialEndpoint::HandleEventReply(TCommToolEventPB *)+0xdc>
        1dc088:	e24dd028 	sub	sp, sp, #40	; 0x28
        1dc08c:	e28d0004 	add	r0, sp, #4	; 0x4
        1dc090:	eb60b0f0 	bl	1a08458 <TDefaultEvent::$__ct(void)>
        1dc094:	e3a00000 	mov	r0, #0	; 0x0
        1dc098:	e58d0000 	str	r0, [sp]
        1dc09c:	e5950038 	ldr	r0, [r5, #56]	; fField56
        1dc0a0:	e3300002 	teq	r0, #2	; 0x2
        1dc0a4:	03a00002 	moveq	r0, #2	; 0x2
        1dc0a8:	0a000002 	beq	1dc0b8 <TSerialEndpoint::HandleEventReply(TCommToolEventPB *)+0x54>
        1dc0ac:	e3300003 	teq	r0, #3	; 0x3
        1dc0b0:	1a000001 	bne	1dc0bc <TSerialEndpoint::HandleEventReply(TCommToolEventPB *)+0x58>
        1dc0b4:	e3a00007 	mov	r0, #7	; 0x7
        1dc0b8:	e5840010 	str	r0, [r4, #16]	; fField16
        1dc0bc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1dc0c0:	e3300000 	teq	r0, #0	; 0x0
        1dc0c4:	0a00000f 	beq	1dc108 <TSerialEndpoint::HandleEventReply(TCommToolEventPB *)+0xa4>
        1dc0c8:	e3a00024 	mov	r0, #36	; 0x24
        1dc0cc:	e58d0000 	str	r0, [sp]
        1dc0d0:	e28d001c 	add	r0, sp, #28	; 0x1c
        1dc0d4:	e285103c 	add	r1, r5, #60	; 0x3c
        1dc0d8:	e8911008 	ldmia	r1, {r3, ip}
        1dc0dc:	e8801008 	stmia	r0, {r3, ip}
        1dc0e0:	e5950044 	ldr	r0, [r5, #68]
        1dc0e4:	e58d0018 	str	r0, [sp, #24]	; fField24
        1dc0e8:	e5950038 	ldr	r0, [r5, #56]	; fField56
        1dc0ec:	e58d0014 	str	r0, [sp, #20]	; fField20
        1dc0f0:	e5950048 	ldr	r0, [r5, #72]
        1dc0f4:	e58d0024 	str	r0, [sp, #36]	; fField36
        1dc0f8:	e5950030 	ldr	r0, [r5, #48]	; fField48
        1dc0fc:	e58d000c 	str	r0, [sp, #12]
        1dc100:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1dc104:	e58d0010 	str	r0, [sp, #16]	; fField16
        1dc108:	e1a01005 	mov	r1, r5
        1dc10c:	e1a00004 	mov	r0, r4
        1dc110:	eb60ea81 	bl	1a16b1c <TSerialEndpoint::$PostEventRequest(TCommToolEventPB *)>
        1dc114:	e594c018 	ldr	ip, [r4, #24]	; fField24
        1dc118:	e33c0000 	teq	ip, #0	; 0x0
        1dc11c:	0a000006 	beq	1dc13c <TSerialEndpoint::HandleEventReply(TCommToolEventPB *)+0xd8>
        1dc120:	e28d3004 	add	r3, sp, #4	; 0x4
        1dc124:	e1a0200d 	mov	r2, sp
        1dc128:	e1a0000c 	mov	r0, ip
        1dc12c:	e3a01000 	mov	r1, #0	; 0x0
        1dc130:	e59cc000 	ldr	ip, [ip]
        1dc134:	e1a0e00f 	mov	lr, pc
        1dc138:	e28cf008 	add	pc, ip, #8	; 0x8
        1dc13c:	e28dd028 	add	sp, sp, #40	; 0x28
        1dc140:	e5d40041 	ldrb	r0, [r4, #65]	; fField65
        1dc144:	e3300000 	teq	r0, #0	; 0x0
        1dc148:	15b4003c 	ldrne	r0, [r4, #60]!	; fField60
        1dc14c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1dc150:	1a674da2 	bne	1baf7e0 <TPseudoSyncState::$Unblock(void)>
        1dc154:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::HandleAbortReply(TCommToolAbortPB *)
 * Address: 001dc158
 */
TSerialEndpoint::HandleAbortReply(TCommToolAbortPB *) {
    /*
        1dc158:	e1a0c00d 	mov	ip, sp
        1dc15c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1dc160:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dc164:	e1a04000 	mov	r4, r0
        1dc168:	e1a05001 	mov	r5, r1
        1dc16c:	e3a06000 	mov	r6, #0	; 0x0
        1dc170:	e5c06042 	strb	r6, [r0, #66]	; fField66
        1dc174:	e5c06040 	strb	r6, [r0, #64]	; fField64
        1dc178:	e5d00043 	ldrb	r0, [r0, #67]	; fField67
        1dc17c:	e3300000 	teq	r0, #0	; 0x0
        1dc180:	0a000003 	beq	1dc194 <TSerialEndpoint::HandleAbortReply(TCommToolAbortPB *)+0x3c>
        1dc184:	e5c46043 	strb	r6, [r4, #67]	; fField67
        1dc188:	e5b40038 	ldr	r0, [r4, #56]!	; fField56
        1dc18c:	eb674d93 	bl	1baf7e0 <TPseudoSyncState::$Unblock(void)>
        1dc190:	ea000038 	b	1dc278 <TSerialEndpoint::HandleAbortReply(TCommToolAbortPB *)+0x120>
        1dc194:	e5941034 	ldr	r1, [r4, #52]	; fField52
        1dc198:	e3310000 	teq	r1, #0	; 0x0
        1dc19c:	0a000016 	beq	1dc1fc <TSerialEndpoint::HandleAbortReply(TCommToolAbortPB *)+0xa4>
        1dc1a0:	e5950030 	ldr	r0, [r5, #48]	; fField48
        1dc1a4:	e3300000 	teq	r0, #0	; 0x0
        1dc1a8:	1a000003 	bne	1dc1bc <TSerialEndpoint::HandleAbortReply(TCommToolAbortPB *)+0x64>
        1dc1ac:	e1a00004 	mov	r0, r4
        1dc1b0:	e3a03000 	mov	r3, #0	; 0x0
        1dc1b4:	e5912040 	ldr	r2, [r1, #64]	; fField64
        1dc1b8:	eb6113b8 	bl	1a210a0 <TSerialEndpoint::$SendDisconnect(TCommToolDisconnectPB *, unsigned long, unsigned char)>
        1dc1bc:	e3300000 	teq	r0, #0	; 0x0
        1dc1c0:	0a00002c 	beq	1dc278 <TSerialEndpoint::HandleAbortReply(TCommToolAbortPB *)+0x120>
        1dc1c4:	e5941034 	ldr	r1, [r4, #52]	; fField52
        1dc1c8:	e5a10040 	str	r0, [r1, #64]!	; fField64
        1dc1cc:	e5941034 	ldr	r1, [r4, #52]	; fField52
        1dc1d0:	e1a06001 	mov	r6, r1
        1dc1d4:	e1a00004 	mov	r0, r4
        1dc1d8:	eb610f7d 	bl	1a1ffd4 <TSerialEndpoint::$HandleDisconnectReply(TCommToolDisconnectPB *)>
        1dc1dc:	e3360000 	teq	r6, #0	; 0x0
        1dc1e0:	0a000024 	beq	1dc278 <TSerialEndpoint::HandleAbortReply(TCommToolAbortPB *)+0x120>
        1dc1e4:	e1a00006 	mov	r0, r6
        1dc1e8:	e3a01000 	mov	r1, #0	; 0x0
        1dc1ec:	eb67c947 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1dc1f0:	e1a00006 	mov	r0, r6
        1dc1f4:	eb67c539 	bl	1bcd6e0 <$__dl(void *)>
        1dc1f8:	ea00001e 	b	1dc278 <TSerialEndpoint::HandleAbortReply(TCommToolAbortPB *)+0x120>
        1dc1fc:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1dc200:	e3300000 	teq	r0, #0	; 0x0
        1dc204:	15d50018 	ldrneb	r0, [r5, #24]	; fField24
        1dc208:	13300000 	teqne	r0, #0	; 0x0
        1dc20c:	0a000019 	beq	1dc278 <TSerialEndpoint::HandleAbortReply(TCommToolAbortPB *)+0x120>
        1dc210:	e24dd028 	sub	sp, sp, #40	; 0x28
        1dc214:	e28d0008 	add	r0, sp, #8	; 0x8
        1dc218:	eb60a420 	bl	1a052a0 <TEndpointEvent::$__ct(void)>
        1dc21c:	e5950030 	ldr	r0, [r5, #48]	; fField48
        1dc220:	e58d0010 	str	r0, [sp, #16]	; fField16
        1dc224:	e5940018 	ldr	r0, [r4, #24]	; fField24
        1dc228:	e58d0014 	str	r0, [sp, #20]	; fField20
        1dc22c:	e3e0000b 	mvn	r0, #11	; 0xb
        1dc230:	e58d0018 	str	r0, [sp, #24]	; fField24
        1dc234:	e58d601c 	str	r6, [sp, #28]	; fField28
        1dc238:	e58d6004 	str	r6, [sp, #4]
        1dc23c:	e58d6000 	str	r6, [sp]
        1dc240:	e28d0020 	add	r0, sp, #32	; 0x20
        1dc244:	e89d5000 	ldmia	sp, {ip, lr}
        1dc248:	e8805000 	stmia	r0, {ip, lr}
        1dc24c:	e3a00020 	mov	r0, #32	; 0x20
        1dc250:	e52d0004 	str	r0, [sp, -#4]!
        1dc254:	e28d300c 	add	r3, sp, #12	; 0xc
        1dc258:	e1a0200d 	mov	r2, sp
        1dc25c:	e5b4c018 	ldr	ip, [r4, #24]!	; fField24
        1dc260:	e1a0000c 	mov	r0, ip
        1dc264:	e3a01000 	mov	r1, #0	; 0x0
        1dc268:	e59cc000 	ldr	ip, [ip]
        1dc26c:	e1a0e00f 	mov	lr, pc
        1dc270:	e28cf008 	add	pc, ip, #8	; 0x8
        1dc274:	e28dd02c 	add	sp, sp, #44	; 0x2c
        1dc278:	e3350000 	teq	r5, #0	; 0x0
        1dc27c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1dc280:	e1a00005 	mov	r0, r5
        1dc284:	e3a01000 	mov	r1, #0	; 0x0
        1dc288:	eb67c920 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1dc28c:	e1a00005 	mov	r0, r5
        1dc290:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1dc294:	ea67c511 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: TSerialEndpoint::HandleOptMgmtReply(TCommToolOptMgmtPB *)
 * Address: 001dc298
 */
TSerialEndpoint::HandleOptMgmtReply(TCommToolOptMgmtPB *) {
    /*
        1dc298:	e5902018 	ldr	r2, [r0, #24]	; fField24
        1dc29c:	e3320000 	teq	r2, #0	; 0x0
        1dc2a0:	15d12018 	ldrneb	r2, [r1, #24]	; fField24
        1dc2a4:	13320000 	teqne	r2, #0	; 0x0
        1dc2a8:	01a0f00e 	moveq	pc, lr
        1dc2ac:	e1a0c00d 	mov	ip, sp
        1dc2b0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1dc2b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dc2b8:	e5912040 	ldr	r2, [r1, #64]	; fField64
        1dc2bc:	e5812050 	str	r2, [r1, #80]
        1dc2c0:	e3a02024 	mov	r2, #36	; 0x24
        1dc2c4:	e52d2004 	str	r2, [sp, -#4]!
        1dc2c8:	e2813048 	add	r3, r1, #72	; 0x48
        1dc2cc:	e1a0200d 	mov	r2, sp
        1dc2d0:	e5b0c018 	ldr	ip, [r0, #24]!	; fField24
        1dc2d4:	e1a0000c 	mov	r0, ip
        1dc2d8:	e3a01000 	mov	r1, #0	; 0x0
        1dc2dc:	e59cc000 	ldr	ip, [ip]
        1dc2e0:	e1a0e00f 	mov	lr, pc
        1dc2e4:	e28cf008 	add	pc, ip, #8	; 0x8
        1dc2e8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::HandleConnectReply(TCommToolConnectPB *)
 * Address: 001dc2ec
 */
TSerialEndpoint::HandleConnectReply(TCommToolConnectPB *) {
    /*
        1dc2ec:	e1a0c00d 	mov	ip, sp
        1dc2f0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1dc2f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dc2f8:	e591204c 	ldr	r2, [r1, #76]
        1dc2fc:	e3320000 	teq	r2, #0	; 0x0
        1dc300:	03a02005 	moveq	r2, #5	; 0x5
        1dc304:	0a000003 	beq	1dc318 <TSerialEndpoint::HandleConnectReply(TCommToolConnectPB *)+0x2c>
        1dc308:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1dc30c:	e3320003 	teq	r2, #3	; 0x3
        1dc310:	1a000001 	bne	1dc31c <TSerialEndpoint::HandleConnectReply(TCommToolConnectPB *)+0x30>
        1dc314:	e3a02002 	mov	r2, #2	; 0x2
        1dc318:	e5802010 	str	r2, [r0, #16]	; fField16
        1dc31c:	e5902018 	ldr	r2, [r0, #24]	; fField24
        1dc320:	e3320000 	teq	r2, #0	; 0x0
        1dc324:	15d12018 	ldrneb	r2, [r1, #24]	; fField24
        1dc328:	13320000 	teqne	r2, #0	; 0x0
        1dc32c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1dc330:	e591204c 	ldr	r2, [r1, #76]
        1dc334:	e5812060 	str	r2, [r1, #96]
        1dc338:	e5912054 	ldr	r2, [r1, #84]
        1dc33c:	e5812084 	str	r2, [r1, #132]	; fField132
        1dc340:	e3a02030 	mov	r2, #48	; 0x30
        1dc344:	e52d2004 	str	r2, [sp, -#4]!
        1dc348:	e2813058 	add	r3, r1, #88	; 0x58
        1dc34c:	e1a0200d 	mov	r2, sp
        1dc350:	e5b0c018 	ldr	ip, [r0, #24]!	; fField24
        1dc354:	e1a0000c 	mov	r0, ip
        1dc358:	e3a01000 	mov	r1, #0	; 0x0
        1dc35c:	e59cc000 	ldr	ip, [ip]
        1dc360:	e1a0e00f 	mov	lr, pc
        1dc364:	e28cf008 	add	pc, ip, #8	; 0x8
        1dc368:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::HandleListenReply(TCommToolConnectPB *)
 * Address: 001dc36c
 */
TSerialEndpoint::HandleListenReply(TCommToolConnectPB *) {
    /*
        1dc36c:	e1a0c00d 	mov	ip, sp
        1dc370:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1dc374:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dc378:	e591204c 	ldr	r2, [r1, #76]
        1dc37c:	e3320000 	teq	r2, #0	; 0x0
        1dc380:	03a02004 	moveq	r2, #4	; 0x4
        1dc384:	0a000003 	beq	1dc398 <TSerialEndpoint::HandleListenReply(TCommToolConnectPB *)+0x2c>
        1dc388:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1dc38c:	e3320009 	teq	r2, #9	; 0x9
        1dc390:	1a000001 	bne	1dc39c <TSerialEndpoint::HandleListenReply(TCommToolConnectPB *)+0x30>
        1dc394:	e3a02002 	mov	r2, #2	; 0x2
        1dc398:	e5802010 	str	r2, [r0, #16]	; fField16
        1dc39c:	e5902018 	ldr	r2, [r0, #24]	; fField24
        1dc3a0:	e3320000 	teq	r2, #0	; 0x0
        1dc3a4:	15d12018 	ldrneb	r2, [r1, #24]	; fField24
        1dc3a8:	13320000 	teqne	r2, #0	; 0x0
        1dc3ac:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1dc3b0:	e591204c 	ldr	r2, [r1, #76]
        1dc3b4:	e5812060 	str	r2, [r1, #96]
        1dc3b8:	e5912054 	ldr	r2, [r1, #84]
        1dc3bc:	e5812084 	str	r2, [r1, #132]	; fField132
        1dc3c0:	e3a02030 	mov	r2, #48	; 0x30
        1dc3c4:	e52d2004 	str	r2, [sp, -#4]!
        1dc3c8:	e2813058 	add	r3, r1, #88	; 0x58
        1dc3cc:	e1a0200d 	mov	r2, sp
        1dc3d0:	e5b0c018 	ldr	ip, [r0, #24]!	; fField24
        1dc3d4:	e1a0000c 	mov	r0, ip
        1dc3d8:	e3a01000 	mov	r1, #0	; 0x0
        1dc3dc:	e59cc000 	ldr	ip, [ip]
        1dc3e0:	e1a0e00f 	mov	lr, pc
        1dc3e4:	e28cf008 	add	pc, ip, #8	; 0x8
        1dc3e8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::HandleAcceptReply(TCommToolConnectPB *)
 * Address: 001dc3ec
 */
TSerialEndpoint::HandleAcceptReply(TCommToolConnectPB *) {
    /*
        1dc3ec:	e1a0c00d 	mov	ip, sp
        1dc3f0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1dc3f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dc3f8:	e591204c 	ldr	r2, [r1, #76]
        1dc3fc:	e3320000 	teq	r2, #0	; 0x0
        1dc400:	03a02005 	moveq	r2, #5	; 0x5
        1dc404:	0a000003 	beq	1dc418 <TSerialEndpoint::HandleAcceptReply(TCommToolConnectPB *)+0x2c>
        1dc408:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1dc40c:	e3320004 	teq	r2, #4	; 0x4
        1dc410:	1a000001 	bne	1dc41c <TSerialEndpoint::HandleAcceptReply(TCommToolConnectPB *)+0x30>
        1dc414:	e3a02002 	mov	r2, #2	; 0x2
        1dc418:	e5802010 	str	r2, [r0, #16]	; fField16
        1dc41c:	e5902018 	ldr	r2, [r0, #24]	; fField24
        1dc420:	e3320000 	teq	r2, #0	; 0x0
        1dc424:	15d12018 	ldrneb	r2, [r1, #24]	; fField24
        1dc428:	13320000 	teqne	r2, #0	; 0x0
        1dc42c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1dc430:	e591204c 	ldr	r2, [r1, #76]
        1dc434:	e5812060 	str	r2, [r1, #96]
        1dc438:	e5912054 	ldr	r2, [r1, #84]
        1dc43c:	e5812084 	str	r2, [r1, #132]	; fField132
        1dc440:	e3a02030 	mov	r2, #48	; 0x30
        1dc444:	e52d2004 	str	r2, [sp, -#4]!
        1dc448:	e2813058 	add	r3, r1, #88	; 0x58
        1dc44c:	e1a0200d 	mov	r2, sp
        1dc450:	e5b0c018 	ldr	ip, [r0, #24]!	; fField24
        1dc454:	e1a0000c 	mov	r0, ip
        1dc458:	e3a01000 	mov	r1, #0	; 0x0
        1dc45c:	e59cc000 	ldr	ip, [ip]
        1dc460:	e1a0e00f 	mov	lr, pc
        1dc464:	e28cf008 	add	pc, ip, #8	; 0x8
        1dc468:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::HandleReleaseReply(TCommToolControlPB *)
 * Address: 001dc46c
 */
TSerialEndpoint::HandleReleaseReply(TCommToolControlPB *) {
    /*
        1dc46c:	e1a0c00d 	mov	ip, sp
        1dc470:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1dc474:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dc478:	e3a02002 	mov	r2, #2	; 0x2
        1dc47c:	e5913040 	ldr	r3, [r1, #64]	; fField64
        1dc480:	e3330000 	teq	r3, #0	; 0x0
        1dc484:	0a000009 	beq	1dc4b0 <TSerialEndpoint::HandleReleaseReply(TCommToolControlPB *)+0x44>
        1dc488:	e283cdfa 	add	ip, r3, #16000	; 0x3e80
        1dc48c:	e37c0009 	cmn	ip, #9	; 0x9
        1dc490:	03e030a5 	mvneq	r3, #165	; 0xa5
        1dc494:	02433b23 	subeq	r3, r3, #35840	; 0x8c00
        1dc498:	05813040 	streq	r3, [r1, #64]	; fField64
        1dc49c:	0a000003 	beq	1dc4b0 <TSerialEndpoint::HandleReleaseReply(TCommToolControlPB *)+0x44>
        1dc4a0:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1dc4a4:	e3320006 	teq	r2, #6	; 0x6
        1dc4a8:	1a000001 	bne	1dc4b4 <TSerialEndpoint::HandleReleaseReply(TCommToolControlPB *)+0x48>
        1dc4ac:	e3a02005 	mov	r2, #5	; 0x5
        1dc4b0:	e5802010 	str	r2, [r0, #16]	; fField16
        1dc4b4:	e5902018 	ldr	r2, [r0, #24]	; fField24
        1dc4b8:	e3320000 	teq	r2, #0	; 0x0
        1dc4bc:	15d12018 	ldrneb	r2, [r1, #24]	; fField24
        1dc4c0:	13320000 	teqne	r2, #0	; 0x0
        1dc4c4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1dc4c8:	e5912030 	ldr	r2, [r1, #48]	; fField48
        1dc4cc:	e5812040 	str	r2, [r1, #64]	; fField64
        1dc4d0:	e3a02020 	mov	r2, #32	; 0x20
        1dc4d4:	e52d2004 	str	r2, [sp, -#4]!
        1dc4d8:	e2813038 	add	r3, r1, #56	; 0x38
        1dc4dc:	e1a0200d 	mov	r2, sp
        1dc4e0:	e5b0c018 	ldr	ip, [r0, #24]!	; fField24
        1dc4e4:	e1a0000c 	mov	r0, ip
        1dc4e8:	e3a01000 	mov	r1, #0	; 0x0
        1dc4ec:	e59cc000 	ldr	ip, [ip]
        1dc4f0:	e1a0e00f 	mov	lr, pc
        1dc4f4:	e28cf008 	add	pc, ip, #8	; 0x8
        1dc4f8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::HandleDisconnectReply(TCommToolDisconnectPB *)
 * Address: 001dc4fc
 */
TSerialEndpoint::HandleDisconnectReply(TCommToolDisconnectPB *) {
    /*
        1dc4fc:	e1a0c00d 	mov	ip, sp
        1dc500:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1dc504:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dc508:	e5902034 	ldr	r2, [r0, #52]	; fField52
        1dc50c:	e3320000 	teq	r2, #0	; 0x0
        1dc510:	13a02000 	movne	r2, #0	; 0x0
        1dc514:	15802034 	strne	r2, [r0, #52]	; fField52
        1dc518:	e3a02002 	mov	r2, #2	; 0x2
        1dc51c:	e5913040 	ldr	r3, [r1, #64]	; fField64
        1dc520:	e3330000 	teq	r3, #0	; 0x0
        1dc524:	0a000009 	beq	1dc550 <TSerialEndpoint::HandleDisconnectReply(TCommToolDisconnectPB *)+0x54>
        1dc528:	e283cdfa 	add	ip, r3, #16000	; 0x3e80
        1dc52c:	e37c0009 	cmn	ip, #9	; 0x9
        1dc530:	03e030a5 	mvneq	r3, #165	; 0xa5
        1dc534:	02433b23 	subeq	r3, r3, #35840	; 0x8c00
        1dc538:	05813040 	streq	r3, [r1, #64]	; fField64
        1dc53c:	0a000003 	beq	1dc550 <TSerialEndpoint::HandleDisconnectReply(TCommToolDisconnectPB *)+0x54>
        1dc540:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1dc544:	e3320008 	teq	r2, #8	; 0x8
        1dc548:	1a000001 	bne	1dc554 <TSerialEndpoint::HandleDisconnectReply(TCommToolDisconnectPB *)+0x58>
        1dc54c:	e3a02005 	mov	r2, #5	; 0x5
        1dc550:	e5802010 	str	r2, [r0, #16]	; fField16
        1dc554:	e5902018 	ldr	r2, [r0, #24]	; fField24
        1dc558:	e3320000 	teq	r2, #0	; 0x0
        1dc55c:	15d12018 	ldrneb	r2, [r1, #24]	; fField24
        1dc560:	13320000 	teqne	r2, #0	; 0x0
        1dc564:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1dc568:	e5912040 	ldr	r2, [r1, #64]	; fField64
        1dc56c:	e5812050 	str	r2, [r1, #80]
        1dc570:	e3a0202c 	mov	r2, #44	; 0x2c
        1dc574:	e52d2004 	str	r2, [sp, -#4]!
        1dc578:	e2813048 	add	r3, r1, #72	; 0x48
        1dc57c:	e1a0200d 	mov	r2, sp
        1dc580:	e5b0c018 	ldr	ip, [r0, #24]!	; fField24
        1dc584:	e1a0000c 	mov	r0, ip
        1dc588:	e3a01000 	mov	r1, #0	; 0x0
        1dc58c:	e59cc000 	ldr	ip, [ip]
        1dc590:	e1a0e00f 	mov	lr, pc
        1dc594:	e28cf008 	add	pc, ip, #8	; 0x8
        1dc598:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::HandleBindReply(TCommToolBindPB *)
 * Address: 001dc59c
 */
TSerialEndpoint::HandleBindReply(TCommToolBindPB *) {
    /*
        1dc59c:	e1a0c00d 	mov	ip, sp
        1dc5a0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1dc5a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dc5a8:	e5912044 	ldr	r2, [r1, #68]
        1dc5ac:	e3320000 	teq	r2, #0	; 0x0
        1dc5b0:	03a02002 	moveq	r2, #2	; 0x2
        1dc5b4:	0a000003 	beq	1dc5c8 <TSerialEndpoint::HandleBindReply(TCommToolBindPB *)+0x2c>
        1dc5b8:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1dc5bc:	e3320008 	teq	r2, #8	; 0x8
        1dc5c0:	1a000001 	bne	1dc5cc <TSerialEndpoint::HandleBindReply(TCommToolBindPB *)+0x30>
        1dc5c4:	e3a02001 	mov	r2, #1	; 0x1
        1dc5c8:	e5802010 	str	r2, [r0, #16]	; fField16
        1dc5cc:	e5902018 	ldr	r2, [r0, #24]	; fField24
        1dc5d0:	e3320000 	teq	r2, #0	; 0x0
        1dc5d4:	15d12018 	ldrneb	r2, [r1, #24]	; fField24
        1dc5d8:	13320000 	teqne	r2, #0	; 0x0
        1dc5dc:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1dc5e0:	e5912044 	ldr	r2, [r1, #68]
        1dc5e4:	e5812054 	str	r2, [r1, #84]
        1dc5e8:	e3a02024 	mov	r2, #36	; 0x24
        1dc5ec:	e52d2004 	str	r2, [sp, -#4]!
        1dc5f0:	e281304c 	add	r3, r1, #76	; 0x4c
        1dc5f4:	e1a0200d 	mov	r2, sp
        1dc5f8:	e5b0c018 	ldr	ip, [r0, #24]!	; fField24
        1dc5fc:	e1a0000c 	mov	r0, ip
        1dc600:	e3a01000 	mov	r1, #0	; 0x0
        1dc604:	e59cc000 	ldr	ip, [ip]
        1dc608:	e1a0e00f 	mov	lr, pc
        1dc60c:	e28cf008 	add	pc, ip, #8	; 0x8
        1dc610:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::HandleUnBindReply(TCommToolBindPB *)
 * Address: 001dc614
 */
TSerialEndpoint::HandleUnBindReply(TCommToolBindPB *) {
    /*
        1dc614:	e1a0c00d 	mov	ip, sp
        1dc618:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1dc61c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dc620:	e5912044 	ldr	r2, [r1, #68]
        1dc624:	e3320000 	teq	r2, #0	; 0x0
        1dc628:	03a02001 	moveq	r2, #1	; 0x1
        1dc62c:	0a000003 	beq	1dc640 <TSerialEndpoint::HandleUnBindReply(TCommToolBindPB *)+0x2c>
        1dc630:	e5902010 	ldr	r2, [r0, #16]	; fField16
        1dc634:	e3320008 	teq	r2, #8	; 0x8
        1dc638:	1a000001 	bne	1dc644 <TSerialEndpoint::HandleUnBindReply(TCommToolBindPB *)+0x30>
        1dc63c:	e3a02002 	mov	r2, #2	; 0x2
        1dc640:	e5802010 	str	r2, [r0, #16]	; fField16
        1dc644:	e5902018 	ldr	r2, [r0, #24]	; fField24
        1dc648:	e3320000 	teq	r2, #0	; 0x0
        1dc64c:	15d12018 	ldrneb	r2, [r1, #24]	; fField24
        1dc650:	13320000 	teqne	r2, #0	; 0x0
        1dc654:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1dc658:	e5912044 	ldr	r2, [r1, #68]
        1dc65c:	e5812054 	str	r2, [r1, #84]
        1dc660:	e3a02024 	mov	r2, #36	; 0x24
        1dc664:	e52d2004 	str	r2, [sp, -#4]!
        1dc668:	e281304c 	add	r3, r1, #76	; 0x4c
        1dc66c:	e1a0200d 	mov	r2, sp
        1dc670:	e5b0c018 	ldr	ip, [r0, #24]!	; fField24
        1dc674:	e1a0000c 	mov	r0, ip
        1dc678:	e3a01000 	mov	r1, #0	; 0x0
        1dc67c:	e59cc000 	ldr	ip, [ip]
        1dc680:	e1a0e00f 	mov	lr, pc
        1dc684:	e28cf008 	add	pc, ip, #8	; 0x8
        1dc688:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)
 * Address: 001dc6f0
 */
TSerialEndpoint::SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *) {
    /*
        1dc6f0:	e1a0c00d 	mov	ip, sp
        1dc6f4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1dc6f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dc6fc:	e1a05000 	mov	r5, r0
        1dc700:	e1a04001 	mov	r4, r1
        1dc704:	e1a06002 	mov	r6, r2
        1dc708:	e59b1008 	ldr	r1, [fp, #8]
        1dc70c:	e20180ff 	and	r8, r1, #255	; 0xff
        1dc710:	e3a09000 	mov	r9, #0	; 0x0
        1dc714:	e59b000c 	ldr	r0, [fp, #12]
        1dc718:	e59b7004 	ldr	r7, [fp, #4]
        1dc71c:	e5c4902c 	strb	r9, [r4, #44]	; fField44
        1dc720:	e3300000 	teq	r0, #0	; 0x0
        1dc724:	0a000005 	beq	1dc740 <TSerialEndpoint::SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x50>
        1dc728:	e5901000 	ldr	r1, [r0]
        1dc72c:	e3510000 	cmp	r1, #0	; 0x0
        1dc730:	c2844030 	addgt	r4, r4, #48	; 0x30
        1dc734:	c8840003 	stmgtia	r4, {r0, r1}
        1dc738:	c2444030 	subgt	r4, r4, #48	; 0x30
        1dc73c:	ca000001 	bgt	1dc748 <TSerialEndpoint::SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x58>
        1dc740:	e5849030 	str	r9, [r4, #48]	; fField48
        1dc744:	e5849034 	str	r9, [r4, #52]	; fField52
        1dc748:	e3e00000 	mvn	r0, #0	; 0x0
        1dc74c:	e5840028 	str	r0, [r4, #40]	; fField40
        1dc750:	e5940080 	ldr	r0, [r4, #128]	; fField128
        1dc754:	e5840024 	str	r0, [r4, #36]	; fField36
        1dc758:	e2130002 	ands	r0, r3, #2	; 0x2
        1dc75c:	13a00001 	movne	r0, #1	; 0x1
        1dc760:	e5c4002d 	strb	r0, [r4, #45]
        1dc764:	e3130001 	tst	r3, #1	; 0x1
        1dc768:	03a00001 	moveq	r0, #1	; 0x1
        1dc76c:	13a00000 	movne	r0, #0	; 0x0
        1dc770:	e5c4002e 	strb	r0, [r4, #46]
        1dc774:	e3380000 	teq	r8, #0	; 0x0
        1dc778:	13a00001 	movne	r0, #1	; 0x1
        1dc77c:	15c50040 	strneb	r0, [r5, #64]	; fField64
        1dc780:	1a000004 	bne	1dc798 <TSerialEndpoint::SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0xa8>
        1dc784:	eb67dc92 	bl	1bd39d4 <$GetGlobals>
        1dc788:	eb682f2b 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1dc78c:	e5901000 	ldr	r1, [r0]
        1dc790:	e1a00004 	mov	r0, r4
        1dc794:	eb67fd7d 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1dc798:	e1a03008 	mov	r3, r8
        1dc79c:	e1a02004 	mov	r2, r4
        1dc7a0:	e1a01007 	mov	r1, r7
        1dc7a4:	e3a00014 	mov	r0, #20	; 0x14
        1dc7a8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1dc7ac:	e2843038 	add	r3, r4, #56	; 0x38
        1dc7b0:	e3a0201c 	mov	r2, #28	; 0x1c
        1dc7b4:	e92d000c 	stmdb	sp!, {r2, r3}
        1dc7b8:	e0843002 	add	r3, r4, r2
        1dc7bc:	e1a02004 	mov	r2, r4
        1dc7c0:	e3a01002 	mov	r1, #2	; 0x2
        1dc7c4:	e5950014 	ldr	r0, [r5, #20]	; fField20
        1dc7c8:	eb60aaff 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1dc7cc:	e28dd018 	add	sp, sp, #24	; 0x18
        1dc7d0:	e1a07000 	mov	r7, r0
        1dc7d4:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1dc7d8:	e37c0025 	cmn	ip, #37	; 0x25
        1dc7dc:	1a000003 	bne	1dc7f0 <TSerialEndpoint::SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x100>
        1dc7e0:	e1a02004 	mov	r2, r4
        1dc7e4:	e1a00005 	mov	r0, r5
        1dc7e8:	e3a01002 	mov	r1, #2	; 0x2
        1dc7ec:	eb60dc80 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1dc7f0:	e3380000 	teq	r8, #0	; 0x0
        1dc7f4:	0a00000d 	beq	1dc830 <TSerialEndpoint::SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x140>
        1dc7f8:	e3370000 	teq	r7, #0	; 0x0
        1dc7fc:	05947040 	ldreq	r7, [r4, #64]	; fField64
        1dc800:	e3370000 	teq	r7, #0	; 0x0
        1dc804:	05b40048 	ldreq	r0, [r4, #72]!
        1dc808:	05860000 	streq	r0, [r6]
        1dc80c:	e5d50040 	ldrb	r0, [r5, #64]	; fField64
        1dc810:	e3300000 	teq	r0, #0	; 0x0
        1dc814:	15c59040 	strneb	r9, [r5, #64]	; fField64
        1dc818:	1a00000b 	bne	1dc84c <TSerialEndpoint::SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x15c>
        1dc81c:	e3370000 	teq	r7, #0	; 0x0
        1dc820:	03a070c9 	moveq	r7, #201	; 0xc9
        1dc824:	02477b0a 	subeq	r7, r7, #10240	; 0x2800
        1dc828:	0a000009 	beq	1dc854 <TSerialEndpoint::SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x164>
        1dc82c:	ea000006 	b	1dc84c <TSerialEndpoint::SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x15c>
        1dc830:	e3370000 	teq	r7, #0	; 0x0
        1dc834:	1a000004 	bne	1dc84c <TSerialEndpoint::SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x15c>
        1dc838:	e1a02004 	mov	r2, r4
        1dc83c:	e5b50024 	ldr	r0, [r5, #36]!	; fField36
        1dc840:	e5901000 	ldr	r1, [r0]
        1dc844:	eb683328 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1dc848:	ea000002 	b	1dc858 <TSerialEndpoint::SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x168>
        1dc84c:	e3370000 	teq	r7, #0	; 0x0
        1dc850:	0a000000 	beq	1dc858 <TSerialEndpoint::SendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x168>
        1dc854:	e5869000 	str	r9, [r6]
        1dc858:	e1a00007 	mov	r0, r7
        1dc85c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)
 * Address: 001dc860
 */
TSerialEndpoint::RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *) {
    /*
        1dc860:	e1a0c00d 	mov	ip, sp
        1dc864:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1dc868:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dc86c:	e1a05000 	mov	r5, r0
        1dc870:	e1a04001 	mov	r4, r1
        1dc874:	e1a06002 	mov	r6, r2
        1dc878:	e59b100c 	ldr	r1, [fp, #12]
        1dc87c:	e20190ff 	and	r9, r1, #255	; 0xff
        1dc880:	e3a01000 	mov	r1, #0	; 0x0
        1dc884:	e59b0010 	ldr	r0, [fp, #16]	; fField16
        1dc888:	e59b7008 	ldr	r7, [fp, #8]
        1dc88c:	e59b8004 	ldr	r8, [fp, #4]
        1dc890:	e5c4102e 	strb	r1, [r4, #46]
        1dc894:	e3300000 	teq	r0, #0	; 0x0
        1dc898:	0a000005 	beq	1dc8b4 <TSerialEndpoint::RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x54>
        1dc89c:	e5901000 	ldr	r1, [r0]
        1dc8a0:	e3510000 	cmp	r1, #0	; 0x0
        1dc8a4:	c2844030 	addgt	r4, r4, #48	; 0x30
        1dc8a8:	c8840003 	stmgtia	r4, {r0, r1}
        1dc8ac:	c2444030 	subgt	r4, r4, #48	; 0x30
        1dc8b0:	ca000002 	bgt	1dc8c0 <TSerialEndpoint::RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x60>
        1dc8b4:	e3a01000 	mov	r1, #0	; 0x0
        1dc8b8:	e5841030 	str	r1, [r4, #48]	; fField48
        1dc8bc:	e5841034 	str	r1, [r4, #52]	; fField52
        1dc8c0:	e5980000 	ldr	r0, [r8]
        1dc8c4:	e2100002 	ands	r0, r0, #2	; 0x2
        1dc8c8:	13a00001 	movne	r0, #1	; 0x1
        1dc8cc:	e210a0ff 	ands	sl, r0, #255	; 0xff
        1dc8d0:	e5c4a08c 	strb	sl, [r4, #140]
        1dc8d4:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1dc8d8:	e5840024 	str	r0, [r4, #36]	; fField36
        1dc8dc:	e3a00001 	mov	r0, #1	; 0x1
        1dc8e0:	0a000004 	beq	1dc8f8 <TSerialEndpoint::RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x98>
        1dc8e4:	e5c4002d 	strb	r0, [r4, #45]
        1dc8e8:	e3a01000 	mov	r1, #0	; 0x0
        1dc8ec:	e5841028 	str	r1, [r4, #40]	; fField40
        1dc8f0:	e5c4102c 	strb	r1, [r4, #44]	; fField44
        1dc8f4:	ea000003 	b	1dc908 <TSerialEndpoint::RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0xa8>
        1dc8f8:	e3a01000 	mov	r1, #0	; 0x0
        1dc8fc:	e5c4102d 	strb	r1, [r4, #45]
        1dc900:	e5843028 	str	r3, [r4, #40]	; fField40
        1dc904:	e5c4002c 	strb	r0, [r4, #44]	; fField44
        1dc908:	e3390000 	teq	r9, #0	; 0x0
        1dc90c:	15c50040 	strneb	r0, [r5, #64]	; fField64
        1dc910:	1a000004 	bne	1dc928 <TSerialEndpoint::RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0xc8>
        1dc914:	eb67dc2e 	bl	1bd39d4 <$GetGlobals>
        1dc918:	eb682ec7 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1dc91c:	e5901000 	ldr	r1, [r0]
        1dc920:	e1a00004 	mov	r0, r4
        1dc924:	eb67fd19 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1dc928:	e1a03009 	mov	r3, r9
        1dc92c:	e1a02004 	mov	r2, r4
        1dc930:	e1a01007 	mov	r1, r7
        1dc934:	e3a00018 	mov	r0, #24	; 0x18
        1dc938:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1dc93c:	e2843038 	add	r3, r4, #56	; 0x38
        1dc940:	e3a0201c 	mov	r2, #28	; 0x1c
        1dc944:	e92d000c 	stmdb	sp!, {r2, r3}
        1dc948:	e0843002 	add	r3, r4, r2
        1dc94c:	e1a02004 	mov	r2, r4
        1dc950:	e3a01001 	mov	r1, #1	; 0x1
        1dc954:	e5950014 	ldr	r0, [r5, #20]	; fField20
        1dc958:	eb60aa9b 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1dc95c:	e28dd018 	add	sp, sp, #24	; 0x18
        1dc960:	e1a07000 	mov	r7, r0
        1dc964:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1dc968:	e37c0025 	cmn	ip, #37	; 0x25
        1dc96c:	1a000003 	bne	1dc980 <TSerialEndpoint::RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x120>
        1dc970:	e1a02004 	mov	r2, r4
        1dc974:	e1a00005 	mov	r0, r5
        1dc978:	e3a01001 	mov	r1, #1	; 0x1
        1dc97c:	eb60dc1c 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1dc980:	e3390000 	teq	r9, #0	; 0x0
        1dc984:	0a000018 	beq	1dc9ec <TSerialEndpoint::RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x18c>
        1dc988:	e3370000 	teq	r7, #0	; 0x0
        1dc98c:	05947040 	ldreq	r7, [r4, #64]	; fField64
        1dc990:	e3370000 	teq	r7, #0	; 0x0
        1dc994:	1a00000b 	bne	1dc9c8 <TSerialEndpoint::RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x168>
        1dc998:	e594004c 	ldr	r0, [r4, #76]
        1dc99c:	e33a0000 	teq	sl, #0	; 0x0
        1dc9a0:	e5860000 	str	r0, [r6]
        1dc9a4:	03a01000 	moveq	r1, #0	; 0x0
        1dc9a8:	05881000 	streq	r1, [r8]
        1dc9ac:	13a00002 	movne	r0, #2	; 0x2
        1dc9b0:	15880000 	strne	r0, [r8]
        1dc9b4:	e5d40048 	ldrb	r0, [r4, #72]
        1dc9b8:	e3300000 	teq	r0, #0	; 0x0
        1dc9bc:	05980000 	ldreq	r0, [r8]
        1dc9c0:	03800001 	orreq	r0, r0, #1	; 0x1
        1dc9c4:	05880000 	streq	r0, [r8]
        1dc9c8:	e5d50040 	ldrb	r0, [r5, #64]	; fField64
        1dc9cc:	e3300000 	teq	r0, #0	; 0x0
        1dc9d0:	13a01000 	movne	r1, #0	; 0x0
        1dc9d4:	15c51040 	strneb	r1, [r5, #64]	; fField64
        1dc9d8:	1a000009 	bne	1dca04 <TSerialEndpoint::RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x1a4>
        1dc9dc:	e3370000 	teq	r7, #0	; 0x0
        1dc9e0:	03a070c9 	moveq	r7, #201	; 0xc9
        1dc9e4:	02477b0a 	subeq	r7, r7, #10240	; 0x2800
        1dc9e8:	ea000005 	b	1dca04 <TSerialEndpoint::RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x1a4>
        1dc9ec:	e3370000 	teq	r7, #0	; 0x0
        1dc9f0:	1a000003 	bne	1dca04 <TSerialEndpoint::RecvBytes(TCommToolGetPB *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)+0x1a4>
        1dc9f4:	e1a02004 	mov	r2, r4
        1dc9f8:	e5b50024 	ldr	r0, [r5, #36]!	; fField36
        1dc9fc:	e5901000 	ldr	r1, [r0]
        1dca00:	eb6832b9 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1dca04:	e3370000 	teq	r7, #0	; 0x0
        1dca08:	13a01000 	movne	r1, #0	; 0x0
        1dca0c:	15861000 	strne	r1, [r6]
        1dca10:	e1a00007 	mov	r0, r7
        1dca14:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::PostEventRequest(TCommToolEventPB *)
 * Address: 001dca18
 */
TSerialEndpoint::PostEventRequest(TCommToolEventPB *) {
    /*
        1dca18:	e1a0c00d 	mov	ip, sp
        1dca1c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1dca20:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dca24:	e1a05000 	mov	r5, r0
        1dca28:	e1a04001 	mov	r4, r1
        1dca2c:	e3e000a5 	mvn	r0, #165	; 0xa5
        1dca30:	e2400b23 	sub	r0, r0, #35840	; 0x8c00
        1dca34:	e5951010 	ldr	r1, [r5, #16]	; fField16
        1dca38:	e3310000 	teq	r1, #0	; 0x0
        1dca3c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        1dca40:	e3a00000 	mov	r0, #0	; 0x0
        1dca44:	e5840024 	str	r0, [r4, #36]	; fField36
        1dca48:	eb67dbe1 	bl	1bd39d4 <$GetGlobals>
        1dca4c:	eb682e7a 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1dca50:	e5901000 	ldr	r1, [r0]
        1dca54:	e1a00004 	mov	r0, r4
        1dca58:	eb67fccc 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1dca5c:	e3a03000 	mov	r3, #0	; 0x0
        1dca60:	e3a02000 	mov	r2, #0	; 0x0
        1dca64:	e3a01000 	mov	r1, #0	; 0x0
        1dca68:	e3a00024 	mov	r0, #36	; 0x24
        1dca6c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1dca70:	e2843028 	add	r3, r4, #40	; 0x28
        1dca74:	e3a0200c 	mov	r2, #12	; 0xc
        1dca78:	e92d000c 	stmdb	sp!, {r2, r3}
        1dca7c:	e284301c 	add	r3, r4, #28	; 0x1c
        1dca80:	e1a02004 	mov	r2, r4
        1dca84:	e3a01008 	mov	r1, #8	; 0x8
        1dca88:	e5b50014 	ldr	r0, [r5, #20]!	; fField20
        1dca8c:	eb60aa4e 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1dca90:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::PostKillRequest(unsigned long, unsigned char)
 * Address: 001dca94
 */
TSerialEndpoint::PostKillRequest(unsigned long, unsigned char) {
    /*
        1dca94:	e1a0c00d 	mov	ip, sp
        1dca98:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1dca9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dcaa0:	e1a04000 	mov	r4, r0
        1dcaa4:	e20230ff 	and	r3, r2, #255	; 0xff
        1dcaa8:	e5902018 	ldr	r2, [r0, #24]	; fField24
        1dcaac:	e3a00000 	mov	r0, #0	; 0x0
        1dcab0:	eb6142f7 	bl	1a2d694 <TCommToolAbortPB::$__ct(unsigned long, unsigned long, unsigned char)>
        1dcab4:	e1b05000 	movs	r5, r0
        1dcab8:	1a000002 	bne	1dcac8 <TSerialEndpoint::PostKillRequest(unsigned long, unsigned char)+0x34>
        1dcabc:	eb681597 	bl	1be2120 <$MemError>
        1dcac0:	e1a06000 	mov	r6, r0
        1dcac4:	ea000020 	b	1dcb4c <TSerialEndpoint::PostKillRequest(unsigned long, unsigned char)+0xb8>
        1dcac8:	eb67dbc1 	bl	1bd39d4 <$GetGlobals>
        1dcacc:	eb682e5a 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1dcad0:	e5901000 	ldr	r1, [r0]
        1dcad4:	e1a00005 	mov	r0, r5
        1dcad8:	eb67fcac 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1dcadc:	e3a03000 	mov	r3, #0	; 0x0
        1dcae0:	e3a02000 	mov	r2, #0	; 0x0
        1dcae4:	e3a01000 	mov	r1, #0	; 0x0
        1dcae8:	e3a00010 	mov	r0, #16	; 0x10
        1dcaec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1dcaf0:	e2853028 	add	r3, r5, #40	; 0x28
        1dcaf4:	e3a0200c 	mov	r2, #12	; 0xc
        1dcaf8:	e92d000c 	stmdb	sp!, {r2, r3}
        1dcafc:	e285301c 	add	r3, r5, #28	; 0x1c
        1dcb00:	e1a02005 	mov	r2, r5
        1dcb04:	e3a01010 	mov	r1, #16	; 0x10
        1dcb08:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1dcb0c:	eb60aa2e 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1dcb10:	e28dd018 	add	sp, sp, #24	; 0x18
        1dcb14:	e1b06000 	movs	r6, r0
        1dcb18:	e3a07001 	mov	r7, #1	; 0x1
        1dcb1c:	1a000005 	bne	1dcb38 <TSerialEndpoint::PostKillRequest(unsigned long, unsigned char)+0xa4>
        1dcb20:	e1a02005 	mov	r2, r5
        1dcb24:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1dcb28:	e5901000 	ldr	r1, [r0]
        1dcb2c:	eb68326e 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1dcb30:	e5c47042 	strb	r7, [r4, #66]	; fField66
        1dcb34:	ea000004 	b	1dcb4c <TSerialEndpoint::PostKillRequest(unsigned long, unsigned char)+0xb8>
        1dcb38:	e1a00005 	mov	r0, r5
        1dcb3c:	e3a01000 	mov	r1, #0	; 0x0
        1dcb40:	eb67c6f2 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1dcb44:	e1a00005 	mov	r0, r5
        1dcb48:	eb67c2e4 	bl	1bcd6e0 <$__dl(void *)>
        1dcb4c:	e1a00006 	mov	r0, r6
        1dcb50:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::PrepareAbort(unsigned long, unsigned char)
 * Address: 001dcb54
 */
TSerialEndpoint::PrepareAbort(unsigned long, unsigned char) {
    /*
        1dcb54:	e1a0c00d 	mov	ip, sp
        1dcb58:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1dcb5c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dcb60:	e1a04000 	mov	r4, r0
        1dcb64:	e1a05001 	mov	r5, r1
        1dcb68:	e31200ff 	tst	r2, #255	; 0xff
        1dcb6c:	e3a06000 	mov	r6, #0	; 0x0
        1dcb70:	0a000031 	beq	1dcc3c <TSerialEndpoint::PrepareAbort(unsigned long, unsigned char)+0xe8>
        1dcb74:	e1a00004 	mov	r0, r4
        1dcb78:	e3a01001 	mov	r1, #1	; 0x1
        1dcb7c:	eb610d1d 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1dcb80:	e3a07001 	mov	r7, #1	; 0x1
        1dcb84:	e3300000 	teq	r0, #0	; 0x0
        1dcb88:	0a00000e 	beq	1dcbc8 <TSerialEndpoint::PrepareAbort(unsigned long, unsigned char)+0x74>
        1dcb8c:	e1a00004 	mov	r0, r4
        1dcb90:	e3a01002 	mov	r1, #2	; 0x2
        1dcb94:	eb610d17 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1dcb98:	e3300000 	teq	r0, #0	; 0x0
        1dcb9c:	1a000009 	bne	1dcbc8 <TSerialEndpoint::PrepareAbort(unsigned long, unsigned char)+0x74>
        1dcba0:	e5c47042 	strb	r7, [r4, #66]	; fField66
        1dcba4:	e1a01005 	mov	r1, r5
        1dcba8:	e1a00004 	mov	r0, r4
        1dcbac:	e3a02000 	mov	r2, #0	; 0x0
        1dcbb0:	eb60db8f 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1dcbb4:	e1a06000 	mov	r6, r0
        1dcbb8:	e3a00000 	mov	r0, #0	; 0x0
        1dcbbc:	e5c40042 	strb	r0, [r4, #66]	; fField66
        1dcbc0:	e5c40040 	strb	r0, [r4, #64]	; fField64
        1dcbc4:	ea000021 	b	1dcc50 <TSerialEndpoint::PrepareAbort(unsigned long, unsigned char)+0xfc>
        1dcbc8:	e1a00004 	mov	r0, r4
        1dcbcc:	e3a01003 	mov	r1, #3	; 0x3
        1dcbd0:	eb610d08 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1dcbd4:	e3300000 	teq	r0, #0	; 0x0
        1dcbd8:	0a00001c 	beq	1dcc50 <TSerialEndpoint::PrepareAbort(unsigned long, unsigned char)+0xfc>
        1dcbdc:	e5940038 	ldr	r0, [r4, #56]	; fField56
        1dcbe0:	e3300000 	teq	r0, #0	; 0x0
        1dcbe4:	1a000009 	bne	1dcc10 <TSerialEndpoint::PrepareAbort(unsigned long, unsigned char)+0xbc>
        1dcbe8:	e3a00000 	mov	r0, #0	; 0x0
        1dcbec:	eb674f10 	bl	1bb0834 <TPseudoSyncState::$__ct(void)>
        1dcbf0:	e5840038 	str	r0, [r4, #56]	; fField56
        1dcbf4:	e3300000 	teq	r0, #0	; 0x0
        1dcbf8:	1a000001 	bne	1dcc04 <TSerialEndpoint::PrepareAbort(unsigned long, unsigned char)+0xb0>
        1dcbfc:	eb681547 	bl	1be2120 <$MemError>
        1dcc00:	ea000011 	b	1dcc4c <TSerialEndpoint::PrepareAbort(unsigned long, unsigned char)+0xf8>
        1dcc04:	eb6742b5 	bl	1bad6e0 <TPseudoSyncState::$Init(void)>
        1dcc08:	e1b06000 	movs	r6, r0
        1dcc0c:	1a00000f 	bne	1dcc50 <TSerialEndpoint::PrepareAbort(unsigned long, unsigned char)+0xfc>
        1dcc10:	e1a01005 	mov	r1, r5
        1dcc14:	e1a00004 	mov	r0, r4
        1dcc18:	e3a02000 	mov	r2, #0	; 0x0
        1dcc1c:	eb610d00 	bl	1a20024 <TSerialEndpoint::$PostKillRequest(unsigned long, unsigned char)>
        1dcc20:	e1b06000 	movs	r6, r0
        1dcc24:	1a000009 	bne	1dcc50 <TSerialEndpoint::PrepareAbort(unsigned long, unsigned char)+0xfc>
        1dcc28:	e5c47043 	strb	r7, [r4, #67]	; fField67
        1dcc2c:	e3a01000 	mov	r1, #0	; 0x0
        1dcc30:	e5b40038 	ldr	r0, [r4, #56]!	; fField56
        1dcc34:	eb673e72 	bl	1bac604 <TPseudoSyncState::$Block(unsigned long)>
        1dcc38:	ea000003 	b	1dcc4c <TSerialEndpoint::PrepareAbort(unsigned long, unsigned char)+0xf8>
        1dcc3c:	e1a01005 	mov	r1, r5
        1dcc40:	e1a00004 	mov	r0, r4
        1dcc44:	e3a02001 	mov	r2, #1	; 0x1
        1dcc48:	eb610cf5 	bl	1a20024 <TSerialEndpoint::$PostKillRequest(unsigned long, unsigned char)>
        1dcc4c:	e1a06000 	mov	r6, r0
        1dcc50:	e1a00006 	mov	r0, r6
        1dcc54:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::InitPending(void)
 * Address: 001dcc58
 */
TSerialEndpoint::InitPending(void) {
    /*
        1dcc58:	e1a0c00d 	mov	ip, sp
        1dcc5c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1dcc60:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dcc64:	e1a04000 	mov	r4, r0
        1dcc68:	e3a05000 	mov	r5, #0	; 0x0
        1dcc6c:	e3a00000 	mov	r0, #0	; 0x0
        1dcc70:	eb681d6d 	bl	1be422c <CList::$__ct(void)>
        1dcc74:	e5a40024 	str	r0, [r4, #36]!	; fField36
        1dcc78:	e3300000 	teq	r0, #0	; 0x0
        1dcc7c:	1a000001 	bne	1dcc88 <TSerialEndpoint::InitPending(void)+0x30>
        1dcc80:	eb681526 	bl	1be2120 <$MemError>
        1dcc84:	e1a05000 	mov	r5, r0
        1dcc88:	e1a00005 	mov	r0, r5
        1dcc8c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::NukePending(void)
 * Address: 001dcc90
 */
TSerialEndpoint::NukePending(void) {
    /*
        1dcc90:	e1a0c00d 	mov	ip, sp
        1dcc94:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1dcc98:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dcc9c:	e1a04000 	mov	r4, r0
        1dcca0:	e5900024 	ldr	r0, [r0, #36]	; fField36
        1dcca4:	e3300000 	teq	r0, #0	; 0x0
        1dcca8:	0a000016 	beq	1dcd08 <TSerialEndpoint::NukePending(void)+0x78>
        1dccac:	e5900000 	ldr	r0, [r0]
        1dccb0:	e3500000 	cmp	r0, #0	; 0x0
        1dccb4:	da000013 	ble	1dcd08 <TSerialEndpoint::NukePending(void)+0x78>
        1dccb8:	e2505001 	subs	r5, r0, #1	; 0x1
        1dccbc:	4a000011 	bmi	1dcd08 <TSerialEndpoint::NukePending(void)+0x78>
        1dccc0:	e1a01005 	mov	r1, r5
        1dccc4:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1dccc8:	eb68259d 	bl	1be6344 <CList::$At(long)>
        1dcccc:	e1a06000 	mov	r6, r0
        1dccd0:	eb67c69d 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
        1dccd4:	e1a01005 	mov	r1, r5
        1dccd8:	e3a02001 	mov	r2, #1	; 0x1
        1dccdc:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1dcce0:	eb683e53 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        1dcce4:	e3360000 	teq	r6, #0	; 0x0
        1dcce8:	0a000004 	beq	1dcd00 <TSerialEndpoint::NukePending(void)+0x70>
        1dccec:	e1a00006 	mov	r0, r6
        1dccf0:	e3a01000 	mov	r1, #0	; 0x0
        1dccf4:	eb67c685 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1dccf8:	e1a00006 	mov	r0, r6
        1dccfc:	eb67c277 	bl	1bcd6e0 <$__dl(void *)>
        1dcd00:	e2555001 	subs	r5, r5, #1	; 0x1
        1dcd04:	5affffed 	bpl	1dccc0 <TSerialEndpoint::NukePending(void)+0x30>
        1dcd08:	e5940024 	ldr	r0, [r4, #36]	; fField36
        1dcd0c:	e3300000 	teq	r0, #0	; 0x0
        1dcd10:	13a01001 	movne	r1, #1	; 0x1
        1dcd14:	1b68215a 	blne	1be5284 <CList::$__dt(void)>
        1dcd18:	e3a00000 	mov	r0, #0	; 0x0
        1dcd1c:	e5a40024 	str	r0, [r4, #36]!	; fField36
        1dcd20:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::InitPutPBList(void)
 * Address: 001dcd24
 */
TSerialEndpoint::InitPutPBList(void) {
    /*
        1dcd24:	e1a0c00d 	mov	ip, sp
        1dcd28:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1dcd2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dcd30:	e1a04000 	mov	r4, r0
        1dcd34:	e3a00000 	mov	r0, #0	; 0x0
        1dcd38:	eb681d3b 	bl	1be422c <CList::$__ct(void)>
        1dcd3c:	e5840028 	str	r0, [r4, #40]	; fField40
        1dcd40:	e3300000 	teq	r0, #0	; 0x0
        1dcd44:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        1dcd48:	0a6814f4 	beq	1be2120 <$MemError>
        1dcd4c:	e1a00004 	mov	r0, r4
        1dcd50:	e3a01000 	mov	r1, #0	; 0x0
        1dcd54:	eb610c98 	bl	1a1ffbc <TSerialEndpoint::$GrabPutPB(unsigned char)>
        1dcd58:	e1b02000 	movs	r2, r0
        1dcd5c:	03e000a7 	mvneq	r0, #167	; 0xa7
        1dcd60:	02400b23 	subeq	r0, r0, #35840	; 0x8c00
        1dcd64:	15b40028 	ldrne	r0, [r4, #40]!	; fField40
        1dcd68:	15901000 	ldrne	r1, [r0]
        1dcd6c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        1dcd70:	1a6831dd 	bne	1be94ec <CList::$InsertAt(long, void *)>
        1dcd74:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::GrabPutPB(unsigned char)
 * Address: 001dcd78
 */
TSerialEndpoint::GrabPutPB(unsigned char) {
    /*
        1dcd78:	e1a0c00d 	mov	ip, sp
        1dcd7c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1dcd80:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dcd84:	e1a04000 	mov	r4, r0
        1dcd88:	e20160ff 	and	r6, r1, #255	; 0xff
        1dcd8c:	e5900028 	ldr	r0, [r0, #40]	; fField40
        1dcd90:	e5901000 	ldr	r1, [r0]
        1dcd94:	e3510000 	cmp	r1, #0	; 0x0
        1dcd98:	da000008 	ble	1dcdc0 <TSerialEndpoint::GrabPutPB(unsigned char)+0x48>
        1dcd9c:	e2411001 	sub	r1, r1, #1	; 0x1
        1dcda0:	eb682567 	bl	1be6344 <CList::$At(long)>
        1dcda4:	e1a05000 	mov	r5, r0
        1dcda8:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        1dcdac:	e5901000 	ldr	r1, [r0]
        1dcdb0:	e2411001 	sub	r1, r1, #1	; 0x1
        1dcdb4:	e3a02001 	mov	r2, #1	; 0x1
        1dcdb8:	eb683e1d 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        1dcdbc:	ea00000e 	b	1dcdfc <TSerialEndpoint::GrabPutPB(unsigned char)+0x84>
        1dcdc0:	e3a02000 	mov	r2, #0	; 0x0
        1dcdc4:	e3a00000 	mov	r0, #0	; 0x0
        1dcdc8:	e5b41018 	ldr	r1, [r4, #24]!	; fField24
        1dcdcc:	eb61422d 	bl	1a2d688 <TCommToolPutPB::$__ct(unsigned long, unsigned char)>
        1dcdd0:	e1b05000 	movs	r5, r0
        1dcdd4:	0a000012 	beq	1dce24 <TSerialEndpoint::GrabPutPB(unsigned char)+0xac>
        1dcdd8:	e3a00000 	mov	r0, #0	; 0x0
        1dcddc:	eb6818f7 	bl	1be31c0 <CBufferList::$__ct(void)>
        1dcde0:	e5850080 	str	r0, [r5, #128]	; fField128
        1dcde4:	e3300000 	teq	r0, #0	; 0x0
        1dcde8:	0a00000d 	beq	1dce24 <TSerialEndpoint::GrabPutPB(unsigned char)+0xac>
        1dcdec:	e3a01000 	mov	r1, #0	; 0x0
        1dcdf0:	eb6831a5 	bl	1be948c <CBufferList::$Init(unsigned char)>
        1dcdf4:	e3300000 	teq	r0, #0	; 0x0
        1dcdf8:	1a00000a 	bne	1dce28 <TSerialEndpoint::GrabPutPB(unsigned char)+0xb0>
        1dcdfc:	e3360000 	teq	r6, #0	; 0x0
        1dce00:	0a00000e 	beq	1dce40 <TSerialEndpoint::GrabPutPB(unsigned char)+0xc8>
        1dce04:	e595007c 	ldr	r0, [r5, #124]	; fField124
        1dce08:	e3300000 	teq	r0, #0	; 0x0
        1dce0c:	1a00000b 	bne	1dce40 <TSerialEndpoint::GrabPutPB(unsigned char)+0xc8>
        1dce10:	e3a00000 	mov	r0, #0	; 0x0
        1dce14:	eb681cfa 	bl	1be4204 <CBufferSegment::$__ct(void)>
        1dce18:	e585007c 	str	r0, [r5, #124]	; fField124
        1dce1c:	e3300000 	teq	r0, #0	; 0x0
        1dce20:	1a000006 	bne	1dce40 <TSerialEndpoint::GrabPutPB(unsigned char)+0xc8>
        1dce24:	eb6814bd 	bl	1be2120 <$MemError>
        1dce28:	e3300000 	teq	r0, #0	; 0x0
        1dce2c:	0a000003 	beq	1dce40 <TSerialEndpoint::GrabPutPB(unsigned char)+0xc8>
        1dce30:	e1b00005 	movs	r0, r5
        1dce34:	13a01001 	movne	r1, #1	; 0x1
        1dce38:	1b614222 	blne	1a2d6c8 <TCommToolPutPB::$__dt(void)>
        1dce3c:	e3a05000 	mov	r5, #0	; 0x0
        1dce40:	e1a00005 	mov	r0, r5
        1dce44:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::ReleasePutPB(TCommToolPutPB *)
 * Address: 001dce48
 */
TSerialEndpoint::ReleasePutPB(TCommToolPutPB *) {
    /*
        1dce48:	e3310000 	teq	r1, #0	; 0x0
        1dce4c:	01a0f00e 	moveq	pc, lr
        1dce50:	e1a0c00d 	mov	ip, sp
        1dce54:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1dce58:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dce5c:	e1a05000 	mov	r5, r0
        1dce60:	e1a04001 	mov	r4, r1
        1dce64:	e5900028 	ldr	r0, [r0, #40]	; fField40
        1dce68:	e3300000 	teq	r0, #0	; 0x0
        1dce6c:	0a000010 	beq	1dceb4 <TSerialEndpoint::ReleasePutPB(TCommToolPutPB *)+0x6c>
        1dce70:	e5940080 	ldr	r0, [r4, #128]	; fField128
        1dce74:	eb683dec 	bl	1bec62c <CBufferList::$RemoveAll(void)>
        1dce78:	e594007c 	ldr	r0, [r4, #124]	; fField124
        1dce7c:	e3300000 	teq	r0, #0	; 0x0
        1dce80:	0a000006 	beq	1dcea0 <TSerialEndpoint::ReleasePutPB(TCommToolPutPB *)+0x58>
        1dce84:	e3e03000 	mvn	r3, #0	; 0x0
        1dce88:	e3a02000 	mov	r2, #0	; 0x0
        1dce8c:	e92d000c 	stmdb	sp!, {r2, r3}
        1dce90:	e3a03000 	mov	r3, #0	; 0x0
        1dce94:	e3a01000 	mov	r1, #0	; 0x0
        1dce98:	eb683183 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        1dce9c:	e28dd008 	add	sp, sp, #8	; 0x8
        1dcea0:	e1a02004 	mov	r2, r4
        1dcea4:	e5b50028 	ldr	r0, [r5, #40]!	; fField40
        1dcea8:	e5901000 	ldr	r1, [r0]
        1dceac:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1dceb0:	ea68318d 	b	1be94ec <CList::$InsertAt(long, void *)>
        1dceb4:	e1a00004 	mov	r0, r4
        1dceb8:	e3a01001 	mov	r1, #1	; 0x1
        1dcebc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1dcec0:	ea614200 	b	1a2d6c8 <TCommToolPutPB::$__dt(void)>
    */
}

/**
 * Symbol: TSerialEndpoint::NukePutPBList(void)
 * Address: 001dcf38
 */
TSerialEndpoint::NukePutPBList(void) {
    /*
        1dcf38:	e1a0c00d 	mov	ip, sp
        1dcf3c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1dcf40:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dcf44:	e1a04000 	mov	r4, r0
        1dcf48:	e5900028 	ldr	r0, [r0, #40]	; fField40
        1dcf4c:	e5900000 	ldr	r0, [r0]
        1dcf50:	e3500000 	cmp	r0, #0	; 0x0
        1dcf54:	da00000e 	ble	1dcf94 <TSerialEndpoint::NukePutPBList(void)+0x5c>
        1dcf58:	e2505001 	subs	r5, r0, #1	; 0x1
        1dcf5c:	4a00000c 	bmi	1dcf94 <TSerialEndpoint::NukePutPBList(void)+0x5c>
        1dcf60:	e1a01005 	mov	r1, r5
        1dcf64:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1dcf68:	eb6824f5 	bl	1be6344 <CList::$At(long)>
        1dcf6c:	e1a06000 	mov	r6, r0
        1dcf70:	e1a01005 	mov	r1, r5
        1dcf74:	e3a02001 	mov	r2, #1	; 0x1
        1dcf78:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1dcf7c:	eb683dac 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        1dcf80:	e1b00006 	movs	r0, r6
        1dcf84:	13a01001 	movne	r1, #1	; 0x1
        1dcf88:	1b6141ce 	blne	1a2d6c8 <TCommToolPutPB::$__dt(void)>
        1dcf8c:	e2555001 	subs	r5, r5, #1	; 0x1
        1dcf90:	5afffff2 	bpl	1dcf60 <TSerialEndpoint::NukePutPBList(void)+0x28>
        1dcf94:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1dcf98:	e3300000 	teq	r0, #0	; 0x0
        1dcf9c:	13a01001 	movne	r1, #1	; 0x1
        1dcfa0:	1b6820b7 	blne	1be5284 <CList::$__dt(void)>
        1dcfa4:	e3a00000 	mov	r0, #0	; 0x0
        1dcfa8:	e5a40028 	str	r0, [r4, #40]!	; fField40
        1dcfac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::InitGetPBList(void)
 * Address: 001dcfb0
 */
TSerialEndpoint::InitGetPBList(void) {
    /*
        1dcfb0:	e1a0c00d 	mov	ip, sp
        1dcfb4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1dcfb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dcfbc:	e1a04000 	mov	r4, r0
        1dcfc0:	e3a00000 	mov	r0, #0	; 0x0
        1dcfc4:	eb681c98 	bl	1be422c <CList::$__ct(void)>
        1dcfc8:	e584002c 	str	r0, [r4, #44]	; fField44
        1dcfcc:	e3300000 	teq	r0, #0	; 0x0
        1dcfd0:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        1dcfd4:	0a681451 	beq	1be2120 <$MemError>
        1dcfd8:	e1a00004 	mov	r0, r4
        1dcfdc:	e3a01000 	mov	r1, #0	; 0x0
        1dcfe0:	eb610bf4 	bl	1a1ffb8 <TSerialEndpoint::$GrabGetPB(unsigned char)>
        1dcfe4:	e1b02000 	movs	r2, r0
        1dcfe8:	03e000a7 	mvneq	r0, #167	; 0xa7
        1dcfec:	02400b23 	subeq	r0, r0, #35840	; 0x8c00
        1dcff0:	15b4002c 	ldrne	r0, [r4, #44]!	; fField44
        1dcff4:	15901000 	ldrne	r1, [r0]
        1dcff8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        1dcffc:	1a68313a 	bne	1be94ec <CList::$InsertAt(long, void *)>
        1dd000:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::GrabGetPB(unsigned char)
 * Address: 001dd004
 */
TSerialEndpoint::GrabGetPB(unsigned char) {
    /*
        1dd004:	e1a0c00d 	mov	ip, sp
        1dd008:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1dd00c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dd010:	e1a04000 	mov	r4, r0
        1dd014:	e20160ff 	and	r6, r1, #255	; 0xff
        1dd018:	e590002c 	ldr	r0, [r0, #44]	; fField44
        1dd01c:	e5901000 	ldr	r1, [r0]
        1dd020:	e3510000 	cmp	r1, #0	; 0x0
        1dd024:	da000008 	ble	1dd04c <TSerialEndpoint::GrabGetPB(unsigned char)+0x48>
        1dd028:	e2411001 	sub	r1, r1, #1	; 0x1
        1dd02c:	eb6824c4 	bl	1be6344 <CList::$At(long)>
        1dd030:	e1a05000 	mov	r5, r0
        1dd034:	e5b4002c 	ldr	r0, [r4, #44]!	; fField44
        1dd038:	e5901000 	ldr	r1, [r0]
        1dd03c:	e2411001 	sub	r1, r1, #1	; 0x1
        1dd040:	e3a02001 	mov	r2, #1	; 0x1
        1dd044:	eb683d7a 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        1dd048:	ea00000e 	b	1dd088 <TSerialEndpoint::GrabGetPB(unsigned char)+0x84>
        1dd04c:	e3a02000 	mov	r2, #0	; 0x0
        1dd050:	e3a00000 	mov	r0, #0	; 0x0
        1dd054:	e5b41018 	ldr	r1, [r4, #24]!	; fField24
        1dd058:	eb614189 	bl	1a2d684 <TCommToolGetPB::$__ct(unsigned long, unsigned char)>
        1dd05c:	e1b05000 	movs	r5, r0
        1dd060:	0a000012 	beq	1dd0b0 <TSerialEndpoint::GrabGetPB(unsigned char)+0xac>
        1dd064:	e3a00000 	mov	r0, #0	; 0x0
        1dd068:	eb681854 	bl	1be31c0 <CBufferList::$__ct(void)>
        1dd06c:	e5850088 	str	r0, [r5, #136]	; fField136
        1dd070:	e3300000 	teq	r0, #0	; 0x0
        1dd074:	0a00000d 	beq	1dd0b0 <TSerialEndpoint::GrabGetPB(unsigned char)+0xac>
        1dd078:	e3a01000 	mov	r1, #0	; 0x0
        1dd07c:	eb683102 	bl	1be948c <CBufferList::$Init(unsigned char)>
        1dd080:	e3300000 	teq	r0, #0	; 0x0
        1dd084:	1a00000a 	bne	1dd0b4 <TSerialEndpoint::GrabGetPB(unsigned char)+0xb0>
        1dd088:	e3360000 	teq	r6, #0	; 0x0
        1dd08c:	0a00000e 	beq	1dd0cc <TSerialEndpoint::GrabGetPB(unsigned char)+0xc8>
        1dd090:	e5950084 	ldr	r0, [r5, #132]	; fField132
        1dd094:	e3300000 	teq	r0, #0	; 0x0
        1dd098:	1a00000b 	bne	1dd0cc <TSerialEndpoint::GrabGetPB(unsigned char)+0xc8>
        1dd09c:	e3a00000 	mov	r0, #0	; 0x0
        1dd0a0:	eb681c57 	bl	1be4204 <CBufferSegment::$__ct(void)>
        1dd0a4:	e5850084 	str	r0, [r5, #132]	; fField132
        1dd0a8:	e3300000 	teq	r0, #0	; 0x0
        1dd0ac:	1a000006 	bne	1dd0cc <TSerialEndpoint::GrabGetPB(unsigned char)+0xc8>
        1dd0b0:	eb68141a 	bl	1be2120 <$MemError>
        1dd0b4:	e3300000 	teq	r0, #0	; 0x0
        1dd0b8:	0a000003 	beq	1dd0cc <TSerialEndpoint::GrabGetPB(unsigned char)+0xc8>
        1dd0bc:	e1b00005 	movs	r0, r5
        1dd0c0:	13a01001 	movne	r1, #1	; 0x1
        1dd0c4:	1b61417e 	blne	1a2d6c4 <TCommToolGetPB::$__dt(void)>
        1dd0c8:	e3a05000 	mov	r5, #0	; 0x0
        1dd0cc:	e1a00005 	mov	r0, r5
        1dd0d0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::ReleaseGetPB(TCommToolGetPB *)
 * Address: 001dd0d4
 */
TSerialEndpoint::ReleaseGetPB(TCommToolGetPB *) {
    /*
        1dd0d4:	e3310000 	teq	r1, #0	; 0x0
        1dd0d8:	01a0f00e 	moveq	pc, lr
        1dd0dc:	e1a0c00d 	mov	ip, sp
        1dd0e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1dd0e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dd0e8:	e1a05000 	mov	r5, r0
        1dd0ec:	e1a04001 	mov	r4, r1
        1dd0f0:	e590002c 	ldr	r0, [r0, #44]	; fField44
        1dd0f4:	e3300000 	teq	r0, #0	; 0x0
        1dd0f8:	0a000010 	beq	1dd140 <TSerialEndpoint::ReleaseGetPB(TCommToolGetPB *)+0x6c>
        1dd0fc:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1dd100:	eb683d49 	bl	1bec62c <CBufferList::$RemoveAll(void)>
        1dd104:	e5940084 	ldr	r0, [r4, #132]	; fField132
        1dd108:	e3300000 	teq	r0, #0	; 0x0
        1dd10c:	0a000006 	beq	1dd12c <TSerialEndpoint::ReleaseGetPB(TCommToolGetPB *)+0x58>
        1dd110:	e3e03000 	mvn	r3, #0	; 0x0
        1dd114:	e3a02000 	mov	r2, #0	; 0x0
        1dd118:	e92d000c 	stmdb	sp!, {r2, r3}
        1dd11c:	e3a03000 	mov	r3, #0	; 0x0
        1dd120:	e3a01000 	mov	r1, #0	; 0x0
        1dd124:	eb6830e0 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
        1dd128:	e28dd008 	add	sp, sp, #8	; 0x8
        1dd12c:	e1a02004 	mov	r2, r4
        1dd130:	e5b5002c 	ldr	r0, [r5, #44]!	; fField44
        1dd134:	e5901000 	ldr	r1, [r0]
        1dd138:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1dd13c:	ea6830ea 	b	1be94ec <CList::$InsertAt(long, void *)>
        1dd140:	e1a00004 	mov	r0, r4
        1dd144:	e3a01001 	mov	r1, #1	; 0x1
        1dd148:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1dd14c:	ea61415c 	b	1a2d6c4 <TCommToolGetPB::$__dt(void)>
    */
}

/**
 * Symbol: TSerialEndpoint::NukeGetPBList(void)
 * Address: 001dd150
 */
TSerialEndpoint::NukeGetPBList(void) {
    /*
        1dd150:	e1a0c00d 	mov	ip, sp
        1dd154:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1dd158:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dd15c:	e1a04000 	mov	r4, r0
        1dd160:	e590002c 	ldr	r0, [r0, #44]	; fField44
        1dd164:	e5900000 	ldr	r0, [r0]
        1dd168:	e3500000 	cmp	r0, #0	; 0x0
        1dd16c:	da00000e 	ble	1dd1ac <TSerialEndpoint::NukeGetPBList(void)+0x5c>
        1dd170:	e2505001 	subs	r5, r0, #1	; 0x1
        1dd174:	4a00000c 	bmi	1dd1ac <TSerialEndpoint::NukeGetPBList(void)+0x5c>
        1dd178:	e1a01005 	mov	r1, r5
        1dd17c:	e594002c 	ldr	r0, [r4, #44]	; fField44
        1dd180:	eb68246f 	bl	1be6344 <CList::$At(long)>
        1dd184:	e1a06000 	mov	r6, r0
        1dd188:	e1a01005 	mov	r1, r5
        1dd18c:	e3a02001 	mov	r2, #1	; 0x1
        1dd190:	e594002c 	ldr	r0, [r4, #44]	; fField44
        1dd194:	eb683d26 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
        1dd198:	e1b00006 	movs	r0, r6
        1dd19c:	13a01001 	movne	r1, #1	; 0x1
        1dd1a0:	1b614147 	blne	1a2d6c4 <TCommToolGetPB::$__dt(void)>
        1dd1a4:	e2555001 	subs	r5, r5, #1	; 0x1
        1dd1a8:	5afffff2 	bpl	1dd178 <TSerialEndpoint::NukeGetPBList(void)+0x28>
        1dd1ac:	e594002c 	ldr	r0, [r4, #44]	; fField44
        1dd1b0:	e3300000 	teq	r0, #0	; 0x0
        1dd1b4:	13a01001 	movne	r1, #1	; 0x1
        1dd1b8:	1b682031 	blne	1be5284 <CList::$__dt(void)>
        1dd1bc:	e3a00000 	mov	r0, #0	; 0x0
        1dd1c0:	e5a4002c 	str	r0, [r4, #44]!	; fField44
        1dd1c4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::KillKillKill(unsigned long, TUAsyncMessage *)
 * Address: 001dd1c8
 */
TSerialEndpoint::KillKillKill(unsigned long, TUAsyncMessage *) {
    /*
        1dd1c8:	e1a0c00d 	mov	ip, sp
        1dd1cc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1dd1d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dd1d4:	e1a05000 	mov	r5, r0
        1dd1d8:	e1a06001 	mov	r6, r1
        1dd1dc:	e1a04002 	mov	r4, r2
        1dd1e0:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1dd1e4:	e28d0010 	add	r0, sp, #16	; 0x10
        1dd1e8:	eb684981 	bl	1bef7f4 <TCommToolKillRequest::$__ct(void)>
        1dd1ec:	e1a0000d 	mov	r0, sp
        1dd1f0:	eb68496f 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
        1dd1f4:	e3a03001 	mov	r3, #1	; 0x1
        1dd1f8:	e3a02000 	mov	r2, #0	; 0x0
        1dd1fc:	e3a01000 	mov	r1, #0	; 0x0
        1dd200:	e3a00010 	mov	r0, #16	; 0x10
        1dd204:	e58d6018 	str	r6, [sp, #24]	; fField24
        1dd208:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1dd20c:	e08d3000 	add	r3, sp, r0
        1dd210:	e3a0200c 	mov	r2, #12	; 0xc
        1dd214:	e92d000c 	stmdb	sp!, {r2, r3}
        1dd218:	e28d3028 	add	r3, sp, #40	; 0x28
        1dd21c:	e3a02000 	mov	r2, #0	; 0x0
        1dd220:	e3a01010 	mov	r1, #16	; 0x10
        1dd224:	e5b50014 	ldr	r0, [r5, #20]!	; fField20
        1dd228:	eb60a867 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1dd22c:	e28dd018 	add	sp, sp, #24	; 0x18
        1dd230:	e3340000 	teq	r4, #0	; 0x0
        1dd234:	0a000002 	beq	1dd244 <TSerialEndpoint::KillKillKill(unsigned long, TUAsyncMessage *)+0x7c>
        1dd238:	e3300000 	teq	r0, #0	; 0x0
        1dd23c:	01a00004 	moveq	r0, r4
        1dd240:	0b67c541 	bleq	1bce74c <TUAsyncMessage::$Abort(void)>
        1dd244:	e3300000 	teq	r0, #0	; 0x0
        1dd248:	059d0008 	ldreq	r0, [sp, #8]
        1dd24c:	e280cdfa 	add	ip, r0, #16000	; 0x3e80
        1dd250:	e37c000d 	cmn	ip, #13	; 0xd
        1dd254:	03a00000 	moveq	r0, #0	; 0x0
        1dd258:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::eWorldSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)
 * Address: 001dd25c
 */
TSerialEndpoint::eWorldSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *) {
    /*
        1dd25c:	e1a0c00d 	mov	ip, sp
        1dd260:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1dd264:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dd268:	e1a04000 	mov	r4, r0
        1dd26c:	e1a05001 	mov	r5, r1
        1dd270:	e1a07002 	mov	r7, r2
        1dd274:	e1a06003 	mov	r6, r3
        1dd278:	e99b0401 	ldmib	fp, {r0, sl}
        1dd27c:	e20090ff 	and	r9, r0, #255	; 0xff
        1dd280:	e5940010 	ldr	r0, [r4, #16]	; fField16
        1dd284:	e3300005 	teq	r0, #5	; 0x5
        1dd288:	13e000a5 	mvnne	r0, #165	; 0xa5
        1dd28c:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1dd290:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1dd294:	e3390000 	teq	r9, #0	; 0x0
        1dd298:	0a000006 	beq	1dd2b8 <TSerialEndpoint::eWorldSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x5c>
        1dd29c:	e1a00004 	mov	r0, r4
        1dd2a0:	e3a01001 	mov	r1, #1	; 0x1
        1dd2a4:	eb610b53 	bl	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        1dd2a8:	e3300000 	teq	r0, #0	; 0x0
        1dd2ac:	13a00042 	movne	r0, #66	; 0x42
        1dd2b0:	12400c8d 	subne	r0, r0, #36096	; 0x8d00
        1dd2b4:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1dd2b8:	e5d40042 	ldrb	r0, [r4, #66]	; fField66
        1dd2bc:	e3300000 	teq	r0, #0	; 0x0
        1dd2c0:	13e000a2 	mvnne	r0, #162	; 0xa2
        1dd2c4:	12400b23 	subne	r0, r0, #35840	; 0x8c00
        1dd2c8:	191baff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1dd2cc:	e1a00005 	mov	r0, r5
        1dd2d0:	e5951000 	ldr	r1, [r5]
        1dd2d4:	e1a0e00f 	mov	lr, pc
        1dd2d8:	e281f02c 	add	pc, r1, #44	; 0x2c
        1dd2dc:	e3300000 	teq	r0, #0	; 0x0
        1dd2e0:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1dd2e4:	e1a00004 	mov	r0, r4
        1dd2e8:	e3a01000 	mov	r1, #0	; 0x0
        1dd2ec:	eb610b32 	bl	1a1ffbc <TSerialEndpoint::$GrabPutPB(unsigned char)>
        1dd2f0:	e1b08000 	movs	r8, r0
        1dd2f4:	03e050a7 	mvneq	r5, #167	; 0xa7
        1dd2f8:	02455b23 	subeq	r5, r5, #35840	; 0x8c00
        1dd2fc:	0a000022 	beq	1dd38c <TSerialEndpoint::eWorldSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x130>
        1dd300:	e3a00000 	mov	r0, #0	; 0x0
        1dd304:	e288806c 	add	r8, r8, #108	; 0x6c
        1dd308:	e8880021 	stmia	r8, {r0, r5}
        1dd30c:	e588a00c 	str	sl, [r8, #12]
        1dd310:	e248806c 	sub	r8, r8, #108	; 0x6c
        1dd314:	e24dd004 	sub	sp, sp, #4	; 0x4
        1dd318:	e1a00005 	mov	r0, r5
        1dd31c:	e5951000 	ldr	r1, [r5]
        1dd320:	e1a0e00f 	mov	lr, pc
        1dd324:	e281f02c 	add	pc, r1, #44	; 0x2c
        1dd328:	e58d0000 	str	r0, [sp]
        1dd32c:	e1a01005 	mov	r1, r5
        1dd330:	e5980080 	ldr	r0, [r8, #128]	; fField128
        1dd334:	eb683472 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
        1dd338:	e1b05000 	movs	r5, r0
        1dd33c:	1a00000a 	bne	1dd36c <TSerialEndpoint::eWorldSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x110>
        1dd340:	e1a0300a 	mov	r3, sl
        1dd344:	e1a02009 	mov	r2, r9
        1dd348:	e1a01006 	mov	r1, r6
        1dd34c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1dd350:	e1a03007 	mov	r3, r7
        1dd354:	e28d200c 	add	r2, sp, #12	; 0xc
        1dd358:	e1a01008 	mov	r1, r8
        1dd35c:	e1a00004 	mov	r0, r4
        1dd360:	eb6140dc 	bl	1a2d6d8 <TSerialEndpoint::$eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        1dd364:	e28dd00c 	add	sp, sp, #12	; 0xc
        1dd368:	e1a05000 	mov	r5, r0
        1dd36c:	e28dd004 	add	sp, sp, #4	; 0x4
        1dd370:	e3380000 	teq	r8, #0	; 0x0
        1dd374:	0a000004 	beq	1dd38c <TSerialEndpoint::eWorldSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x130>
        1dd378:	e3390000 	teq	r9, #0	; 0x0
        1dd37c:	03350000 	teqeq	r5, #0	; 0x0
        1dd380:	11a01008 	movne	r1, r8
        1dd384:	11a00004 	movne	r0, r4
        1dd388:	1b610b37 	blne	1a2006c <TSerialEndpoint::$ReleasePutPB(TCommToolPutPB *)>
        1dd38c:	e1a00005 	mov	r0, r5
        1dd390:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TSerialEndpoint::eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)
 * Address: 001dd394
 */
TSerialEndpoint::eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *) {
    /*
        1dd394:	e1a0c00d 	mov	ip, sp
        1dd398:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1dd39c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1dd3a0:	e1a05000 	mov	r5, r0
        1dd3a4:	e1a04001 	mov	r4, r1
        1dd3a8:	e1a06002 	mov	r6, r2
        1dd3ac:	e59b1008 	ldr	r1, [fp, #8]
        1dd3b0:	e20180ff 	and	r8, r1, #255	; 0xff
        1dd3b4:	e3a09000 	mov	r9, #0	; 0x0
        1dd3b8:	e59b000c 	ldr	r0, [fp, #12]
        1dd3bc:	e59b7004 	ldr	r7, [fp, #4]
        1dd3c0:	e5c4902c 	strb	r9, [r4, #44]	; fField44
        1dd3c4:	e3300000 	teq	r0, #0	; 0x0
        1dd3c8:	0a000005 	beq	1dd3e4 <TSerialEndpoint::eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x50>
        1dd3cc:	e5901000 	ldr	r1, [r0]
        1dd3d0:	e3510000 	cmp	r1, #0	; 0x0
        1dd3d4:	c2844030 	addgt	r4, r4, #48	; 0x30
        1dd3d8:	c8840003 	stmgtia	r4, {r0, r1}
        1dd3dc:	c2444030 	subgt	r4, r4, #48	; 0x30
        1dd3e0:	ca000001 	bgt	1dd3ec <TSerialEndpoint::eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x58>
        1dd3e4:	e5849030 	str	r9, [r4, #48]	; fField48
        1dd3e8:	e5849034 	str	r9, [r4, #52]	; fField52
        1dd3ec:	e3e00000 	mvn	r0, #0	; 0x0
        1dd3f0:	e5840028 	str	r0, [r4, #40]	; fField40
        1dd3f4:	e5940080 	ldr	r0, [r4, #128]	; fField128
        1dd3f8:	e5840024 	str	r0, [r4, #36]	; fField36
        1dd3fc:	e2130002 	ands	r0, r3, #2	; 0x2
        1dd400:	13a00001 	movne	r0, #1	; 0x1
        1dd404:	e5c4002d 	strb	r0, [r4, #45]
        1dd408:	e3130001 	tst	r3, #1	; 0x1
        1dd40c:	03a00001 	moveq	r0, #1	; 0x1
        1dd410:	13a00000 	movne	r0, #0	; 0x0
        1dd414:	e5c4002e 	strb	r0, [r4, #46]
        1dd418:	e3380000 	teq	r8, #0	; 0x0
        1dd41c:	13a00001 	movne	r0, #1	; 0x1
        1dd420:	15c50040 	strneb	r0, [r5, #64]	; fField64
        1dd424:	1a000004 	bne	1dd43c <TSerialEndpoint::eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0xa8>
        1dd428:	eb67d969 	bl	1bd39d4 <$GetGlobals>
        1dd42c:	eb682c02 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1dd430:	e5901000 	ldr	r1, [r0]
        1dd434:	e1a00004 	mov	r0, r4
        1dd438:	eb67fa54 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1dd43c:	e1a03008 	mov	r3, r8
        1dd440:	e1a02004 	mov	r2, r4
        1dd444:	e1a01007 	mov	r1, r7
        1dd448:	e3a00014 	mov	r0, #20	; 0x14
        1dd44c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1dd450:	e2843038 	add	r3, r4, #56	; 0x38
        1dd454:	e3a0201c 	mov	r2, #28	; 0x1c
        1dd458:	e92d000c 	stmdb	sp!, {r2, r3}
        1dd45c:	e0843002 	add	r3, r4, r2
        1dd460:	e1a02004 	mov	r2, r4
        1dd464:	e3a01002 	mov	r1, #2	; 0x2
        1dd468:	e5950014 	ldr	r0, [r5, #20]	; fField20
        1dd46c:	eb60b008 	bl	1a09494 <TEndpointEventHandler::$CallServiceNoForks(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
        1dd470:	e28dd018 	add	sp, sp, #24	; 0x18
        1dd474:	e1a07000 	mov	r7, r0
        1dd478:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1dd47c:	e37c0025 	cmn	ip, #37	; 0x25
        1dd480:	1a000003 	bne	1dd494 <TSerialEndpoint::eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x100>
        1dd484:	e1a02004 	mov	r2, r4
        1dd488:	e1a00005 	mov	r0, r5
        1dd48c:	e3a01002 	mov	r1, #2	; 0x2
        1dd490:	eb60d957 	bl	1a139f4 <TSerialEndpoint::$KillKillKill(unsigned long, TUAsyncMessage *)>
        1dd494:	e3380000 	teq	r8, #0	; 0x0
        1dd498:	0a00000d 	beq	1dd4d4 <TSerialEndpoint::eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x140>
        1dd49c:	e3370000 	teq	r7, #0	; 0x0
        1dd4a0:	05947040 	ldreq	r7, [r4, #64]	; fField64
        1dd4a4:	e3370000 	teq	r7, #0	; 0x0
        1dd4a8:	05b40048 	ldreq	r0, [r4, #72]!
        1dd4ac:	05860000 	streq	r0, [r6]
        1dd4b0:	e5d50040 	ldrb	r0, [r5, #64]	; fField64
        1dd4b4:	e3300000 	teq	r0, #0	; 0x0
        1dd4b8:	15c59040 	strneb	r9, [r5, #64]	; fField64
        1dd4bc:	1a00000b 	bne	1dd4f0 <TSerialEndpoint::eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x15c>
        1dd4c0:	e3370000 	teq	r7, #0	; 0x0
        1dd4c4:	03a070c9 	moveq	r7, #201	; 0xc9
        1dd4c8:	02477b0a 	subeq	r7, r7, #10240	; 0x2800
        1dd4cc:	0a000009 	beq	1dd4f8 <TSerialEndpoint::eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x164>
        1dd4d0:	ea000006 	b	1dd4f0 <TSerialEndpoint::eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x15c>
        1dd4d4:	e3370000 	teq	r7, #0	; 0x0
        1dd4d8:	1a000004 	bne	1dd4f0 <TSerialEndpoint::eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x15c>
        1dd4dc:	e1a02004 	mov	r2, r4
        1dd4e0:	e5b50024 	ldr	r0, [r5, #36]!	; fField36
        1dd4e4:	e5901000 	ldr	r1, [r0]
        1dd4e8:	eb682fff 	bl	1be94ec <CList::$InsertAt(long, void *)>
        1dd4ec:	ea000002 	b	1dd4fc <TSerialEndpoint::eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x168>
        1dd4f0:	e3370000 	teq	r7, #0	; 0x0
        1dd4f4:	0a000000 	beq	1dd4fc <TSerialEndpoint::eWorldSendBytes(TCommToolPutPB *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)+0x168>
        1dd4f8:	e5869000 	str	r9, [r6]
        1dd4fc:	e1a00007 	mov	r0, r7
        1dd500:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: ClassInfo__15TSerialEndpointSFv
 * Address: 00383360
 */
void TSerialEndpoint::ClassInfo() {
    /*
        383360:	e24f0044 	sub	r0, pc, #68	; 0x44
        383364:	e1a0f00e 	mov	pc, lr
        383368:	e3a00000 	mov	r0, #0	; 0x0
        38336c:	e1a0f00e 	mov	pc, lr
        383370:	54536572 	ldrplb	r6, [r3], -#1394
        383374:	69616c45 	stmvsdb	r1!, {r0, r2, r6, sl, fp, sp, lr}^
        383378:	6e64706f 	cdpvs	0, 6, cr7, cr4, cr15, {3}
        38337c:	696e7400 	stmvsdb	lr!, {sl, ip, sp, lr}^
        383380:	54456e64 	strplb	r6, [r5], -#3684
        383384:	706f696e 	rsbvc	r6, pc, lr, ror #18
        383388:	74000000 	strvc	r0, [r0]
        38338c:	00000000 	andeq	r0, r0, r0
        383390:	eafffff2 	b	383360 <ClassInfo__15TSerialEndpointSFv>
        383394:	ea5a49bb 	b	1a15a88 <TSerialEndpoint::$New(void)>
        383398:	ea5a30f9 	b	1a0f784 <TSerialEndpoint::$Delete(void)>
        38339c:	ea5a3d5d 	b	1a12918 <TSerialEndpoint::$HandleEvent(unsigned long, TAEvent *, unsigned long)>
        3833a0:	ea5a3d58 	b	1a12908 <TSerialEndpoint::$HandleComplete(TUMsgToken *, unsigned long *, TAEvent *)>
        3833a4:	ea5a207d 	b	1a0b5a0 <TSerialEndpoint::$AddToAppWorld(void)>
        3833a8:	ea5a561a 	b	1a18c18 <TSerialEndpoint::$RemoveFromAppWorld(void)>
        3833ac:	ea5a49bb 	b	1a15aa0 <TSerialEndpoint::$Open(unsigned long)>
        3833b0:	ea5a2cd3 	b	1a0e704 <TSerialEndpoint::$Close(void)>
        3833b4:	ea5a1c5f 	b	1a0a538 <TSerialEndpoint::$Abort(void)>
        3833b8:	ea5a5a44 	b	1a19cd0 <TSerialEndpoint::$SetSync(unsigned char)>
        3833bc:	ea5a3941 	b	1a118c8 <TSerialEndpoint::$GetProtAddr(TOptionArray *, TOptionArray *, unsigned long)>
        3833c0:	ea5a49bc 	b	1a15ab8 <TSerialEndpoint::$OptMgmt(unsigned long, TOptionArray *, unsigned long)>
        3833c4:	ea5a2082 	b	1a0b5d4 <TSerialEndpoint::$Bind(TOptionArray *, long *, unsigned long)>
        3833c8:	ea5a6281 	b	1a1bdd4 <TSerialEndpoint::$UnBind(unsigned long)>
        3833cc:	ea5a4596 	b	1a14a2c <TSerialEndpoint::$Listen(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)>
        3833d0:	ea5a1c5b 	b	1a0a544 <TSerialEndpoint::$Accept(TEndpoint *, TOptionArray *, TOptionArray *, CBufferSegment *, long, unsigned long)>
        3833d4:	ea5a2cd2 	b	1a0e724 <TSerialEndpoint::$Connect(TOptionArray *, TOptionArray *, CBufferSegment *, long *, unsigned long)>
        3833d8:	ea5a30ee 	b	1a0f798 <TSerialEndpoint::$Disconnect(CBufferSegment *, long, long)>
        3833dc:	ea5a5607 	b	1a18c00 <TSerialEndpoint::$Release(unsigned long)>
        3833e0:	ea5a5e47 	b	1a1ad04 <TSerialEndpoint::$Snd(unsigned char *, long &, unsigned long, unsigned long)>
        3833e4:	ea5a51ee 	b	1a17ba4 <TSerialEndpoint::$Rcv(unsigned char *, long &, long, unsigned long *, unsigned long)>
        3833e8:	ea5a5e44 	b	1a1ad00 <TSerialEndpoint::$Snd(CBufferSegment *, unsigned long, unsigned long)>
        3833ec:	ea5a51eb 	b	1a17ba0 <TSerialEndpoint::$Rcv(CBufferSegment *, long, unsigned long *, unsigned long)>
        3833f0:	ea5a627f 	b	1a1bdf4 <TSerialEndpoint::$WaitForEvent(unsigned long)>
        3833f4:	ea5a7b59 	b	1a22160 <TSerialEndpoint::$nBind(TOptionArray *, unsigned long, unsigned char)>
        3833f8:	ea5a7b5b 	b	1a2216c <TSerialEndpoint::$nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
        3833fc:	ea5a7b56 	b	1a2215c <TSerialEndpoint::$nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)>
        383400:	ea5a7b57 	b	1a22164 <TSerialEndpoint::$nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
        383404:	ea5a7b5c 	b	1a2217c <TSerialEndpoint::$nRelease(unsigned long, unsigned char)>
        383408:	ea5a7b56 	b	1a22168 <TSerialEndpoint::$nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)>
        38340c:	ea5a7f5d 	b	1a23188 <TSerialEndpoint::$nUnBind(unsigned long, unsigned char)>
        383410:	ea5a7b56 	b	1a22170 <TSerialEndpoint::$nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)>
        383414:	ea5a7f5a 	b	1a23184 <TSerialEndpoint::$nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        383418:	ea5a7b56 	b	1a22178 <TSerialEndpoint::$nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
        38341c:	ea5a7f57 	b	1a23180 <TSerialEndpoint::$nSnd(CBufferSegment *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        383420:	ea5a7b53 	b	1a22174 <TSerialEndpoint::$nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
        383424:	ea5a7b4b 	b	1a22158 <TSerialEndpoint::$nAbort(unsigned char)>
        383428:	ea5aa481 	b	1a2c634 <TSerialEndpoint::$Timeout(unsigned long)>
        38342c:	ea5a72f1 	b	1a1fff8 <TSerialEndpoint::$IsPending(unsigned long)>
        383430:	e1a0000f 	mov	r0, pc
        383434:	e1a0f00e 	mov	pc, lr
        383438:	54436f6d 	strplb	r6, [r3], -#3949
        38343c:	6d546f6f 	ldcvsl	15, cr6, [r4, -#444]
        383440:	6c50726f 	mrrcvs	2, 6, r7, r0, cr15
        383444:	746f636f 	strvcbt	r6, [pc], #36f	; 38344c <New__17TCommToolProtocolSFPc>	; fField36
        383448:	6c000000 	stcvs	0, cr0, [r0]
    */
}

