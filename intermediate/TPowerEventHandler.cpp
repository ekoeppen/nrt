#include "include/TPowerEventHandler.h"

/**
 * Symbol: TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00192bac
 */
TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        192bac:	e1a0c00d 	mov	ip, sp
        192bb0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        192bb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        192bb8:	e1a05000 	mov	r5, r0
        192bbc:	e1a07001 	mov	r7, r1
        192bc0:	e1a06002 	mov	r6, r2
        192bc4:	e1a04003 	mov	r4, r3
        192bc8:	e5930008 	ldr	r0, [r3, #8]
        192bcc:	e2831010 	add	r1, r3, #16	; 0x10
        192bd0:	e3500007 	cmp	r0, #7	; 0x7
        192bd4:	908ff100 	addls	pc, pc, r0, lsl #2
        192bd8:	ea00001e 	b	192c58 <TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xac>
        192bdc:	ea00001d 	b	192c58 <TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xac>
        192be0:	ea000008 	b	192c08 <TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x5c>
        192be4:	ea000007 	b	192c08 <TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x5c>
        192be8:	ea000006 	b	192c08 <TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x5c>
        192bec:	ea000008 	b	192c14 <TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x68>
        192bf0:	ea00000a 	b	192c20 <TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x74>
        192bf4:	ea000010 	b	192c3c <TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x90>
        192bf8:	e284100c 	add	r1, r4, #12	; 0xc
        192bfc:	e8910003 	ldmia	r1, {r0, r1}
        192c00:	ebfaa269 	bl	3b5ac <SetBatteryType__FUlT1>
        192c04:	ea00000d 	b	192c40 <TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x94>
        192c08:	e3a00064 	mov	r0, #100	; 0x64
        192c0c:	e5840008 	str	r0, [r4, #8]
        192c10:	ea00000b 	b	192c44 <TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x98>
        192c14:	e594000c 	ldr	r0, [r4, #12]
        192c18:	ebfaa23a 	bl	3b508 <GetPowerPlantStatus(unsigned long, PowerPlantStatus *)>
        192c1c:	ea000001 	b	192c28 <TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x7c>
        192c20:	e594000c 	ldr	r0, [r4, #12]
        192c24:	ebfaa24a 	bl	3b554 <GetRawPowerPlantStatus(unsigned long, PowerPlantStatus *)>
        192c28:	e5840008 	str	r0, [r4, #8]
        192c2c:	e1a02004 	mov	r2, r4
        192c30:	e1a00005 	mov	r0, r5
        192c34:	e3a01044 	mov	r1, #68	; 0x44
        192c38:	ea000004 	b	192c50 <TPowerEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0xa4>
        192c3c:	ebfaa23c 	bl	3b534 <GetPowerPlantCount(void)>
        192c40:	e584000c 	str	r0, [r4, #12]
        192c44:	e1a02004 	mov	r2, r4
        192c48:	e1a00005 	mov	r0, r5
        192c4c:	e3a01010 	mov	r1, #16	; 0x10
        192c50:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        192c54:	ea696a99 	b	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
        192c58:	eb69035d 	bl	1bd39d4 <$GetGlobals>
        192c5c:	e1a03004 	mov	r3, r4
        192c60:	e1a02006 	mov	r2, r6
        192c64:	e1a01007 	mov	r1, r7
        192c68:	eb69f2c7 	bl	1c0f78c <TPowerManager::$DoCommand(TUMsgToken *, unsigned long *, TPowerManagerEvent *)>
        192c6c:	eb690358 	bl	1bd39d4 <$GetGlobals>
        192c70:	e3a01010 	mov	r1, #16	; 0x10
        192c74:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        192c78:	ea694da8 	b	1be6320 <TAppWorld::$AESetReply(unsigned long)>
    */
}

/**
 * Symbol: TPowerEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00192c7c
 */
TPowerEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        192c7c:	e1a0c00d 	mov	ip, sp
        192c80:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        192c84:	e24cb004 	sub	fp, ip, #4	; 0x4
        192c88:	e1a05001 	mov	r5, r1
        192c8c:	e1a04002 	mov	r4, r2
        192c90:	e1a06003 	mov	r6, r3
        192c94:	eb69034e 	bl	1bd39d4 <$GetGlobals>
        192c98:	e1a03006 	mov	r3, r6
        192c9c:	e1a02004 	mov	r2, r4
        192ca0:	e1a01005 	mov	r1, r5
        192ca4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        192ca8:	ea69f2b8 	b	1c0f790 <TPowerManager::$DoReply(TUMsgToken *, unsigned long *, TPowerManagerEvent *)>
    */
}

