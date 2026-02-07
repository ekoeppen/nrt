#include "include/TAlertEventHandler.h"

/**
 * Symbol: TAlertEventHandler::Init(TAlertManager *)
 * Address: 000308cc
 */
TAlertEventHandler::Init(TAlertManager *) {
    /*
         308cc:	e1a0c00d 	mov	ip, sp
         308d0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         308d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         308d8:	e1a04000 	mov	r4, r0
         308dc:	e5801014 	str	r1, [r0, #20]	; fField20
         308e0:	e59f2030 	ldr	r2, [pc, #30]	; 30918 <TAlertEventHandler::Init(TAlertManager *)+0x4c>
         308e4:	e59f1030 	ldr	r1, [pc, #30]	; 3091c <TAlertEventHandler::Init(TAlertManager *)+0x50>
         308e8:	eb6ee2f0 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
         308ec:	e3300000 	teq	r0, #0	; 0x0
         308f0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         308f4:	e3a03001 	mov	r3, #1	; 0x1
         308f8:	e92d0008 	stmdb	sp!, {r3}
         308fc:	e1a00004 	mov	r0, r4
         30900:	e3a03000 	mov	r3, #0	; 0x0
         30904:	e3a02066 	mov	r2, #102	; 0x66
         30908:	e2822c0e 	add	r2, r2, #3584	; 0xe00
         3090c:	e3a010c8 	mov	r1, #200	; 0xc8
         30910:	eb6ee2f1 	bl	1be94dc <TAEventHandler::$InitIdler(unsigned long, TimeUnits, unsigned long, unsigned char)>
         30914:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         30918:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         3091c:	616c7274 	cmnvs	ip, r4, ror r2
    */
}

/**
 * Symbol: TAlertEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00030920
 */
TAlertEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         30920:	e1a0c00d 	mov	ip, sp
         30924:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         30928:	e24cb004 	sub	fp, ip, #4	; 0x4
         3092c:	e1a04000 	mov	r4, r0
         30930:	e1a06003 	mov	r6, r3
         30934:	e3a00000 	mov	r0, #0	; 0x0
         30938:	e583000c 	str	r0, [r3, #12]
         3093c:	e5935010 	ldr	r5, [r3, #16]
         30940:	e3350000 	teq	r5, #0	; 0x0
         30944:	03a000ea 	moveq	r0, #234	; 0xea
         30948:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
         3094c:	05a6000c 	streq	r0, [r6, #12]!
         30950:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         30954:	e5960008 	ldr	r0, [r6, #8]
         30958:	e3300001 	teq	r0, #1	; 0x1
         3095c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         30960:	e5940014 	ldr	r0, [r4, #20]	; fField20
         30964:	e280008c 	add	r0, r0, #140	; 0x8c
         30968:	e3a01000 	mov	r1, #0	; 0x0
         3096c:	eb6ed674 	bl	1be6344 <CList::$At(long)>
         30970:	e1b08000 	movs	r8, r0
         30974:	0a000005 	beq	30990 <TAlertEventHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x70>
         30978:	e1a01008 	mov	r1, r8
         3097c:	e5952018 	ldr	r2, [r5, #24]
         30980:	e1a00005 	mov	r0, r5
         30984:	eb6e1030 	bl	1bb4a4c <$memcmp>
         30988:	e3300000 	teq	r0, #0	; 0x0
         3098c:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         30990:	e5950018 	ldr	r0, [r5, #24]
         30994:	eb6e7767 	bl	1bce738 <$__nw(unsigned int)>
         30998:	e1b07000 	movs	r7, r0
         3099c:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         309a0:	e1a01007 	mov	r1, r7
         309a4:	e5952018 	ldr	r2, [r5, #24]
         309a8:	e1a00005 	mov	r0, r5
         309ac:	eb6eb968 	bl	1bdef54 <$BlockMove>
         309b0:	e5940014 	ldr	r0, [r4, #20]	; fField20
         309b4:	e280008c 	add	r0, r0, #140	; 0x8c
         309b8:	e1a02007 	mov	r2, r7
         309bc:	e3a01000 	mov	r1, #0	; 0x0
         309c0:	eb6ee2c9 	bl	1be94ec <CList::$InsertAt(long, void *)>
         309c4:	e3380000 	teq	r8, #0	; 0x0
         309c8:	e5a6000c 	str	r0, [r6, #12]!
         309cc:	11a00008 	movne	r0, r8
         309d0:	1b6b4a05 	blne	1b031ec <TAlertDialog::$RemoveAlert(void)>
         309d4:	e1a00007 	mov	r0, r7
         309d8:	eb6b1866 	bl	1af6b78 <TAlertDialog::$DisplayAlert(void)>
         309dc:	e1a00004 	mov	r0, r4
         309e0:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         309e4:	ea6ef328 	b	1bed68c <TAEventHandler::$ResetIdle(void)>
    */
}

/**
 * Symbol: TAlertEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 000309e8
 */
TAlertEventHandler::AECompletionProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         309e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAlertEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 000309ec
 */
TAlertEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         309ec:	e1a0c00d 	mov	ip, sp
         309f0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         309f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         309f8:	e1a04000 	mov	r4, r0
         309fc:	e5900014 	ldr	r0, [r0, #20]	; fField20
         30a00:	e280008c 	add	r0, r0, #140	; 0x8c
         30a04:	e3a01000 	mov	r1, #0	; 0x0
         30a08:	eb6ed64d 	bl	1be6344 <CList::$At(long)>
         30a0c:	e1b05000 	movs	r5, r0
         30a10:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         30a14:	e3a07001 	mov	r7, #1	; 0x1
         30a18:	e3a06001 	mov	r6, #1	; 0x1
         30a1c:	e24dd004 	sub	sp, sp, #4	; 0x4
         30a20:	e3370000 	teq	r7, #0	; 0x0
         30a24:	1a00000c 	bne	30a5c <TAlertEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x70>
         30a28:	e595000c 	ldr	r0, [r5, #12]
         30a2c:	e3300000 	teq	r0, #0	; 0x0
         30a30:	1a000004 	bne	30a48 <TAlertEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x5c>
         30a34:	e1a0100d 	mov	r1, sp
         30a38:	e1a00005 	mov	r0, r5
         30a3c:	eb6b0ff6 	bl	1af4a1c <TAlertDialog::$CheckAlertDone(unsigned long *)>
         30a40:	e3500000 	cmp	r0, #0	; 0x0
         30a44:	1a000003 	bne	30a58 <TAlertEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x6c>
         30a48:	e1a00005 	mov	r0, r5
         30a4c:	eb6b1849 	bl	1af6b78 <TAlertDialog::$DisplayAlert(void)>
         30a50:	e3a06001 	mov	r6, #1	; 0x1
         30a54:	ea000000 	b	30a5c <TAlertEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x70>
         30a58:	1a000002 	bne	30a68 <TAlertEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x7c>
         30a5c:	e1a0100d 	mov	r1, sp
         30a60:	e1a00005 	mov	r0, r5
         30a64:	eb6b0fec 	bl	1af4a1c <TAlertDialog::$CheckAlertDone(unsigned long *)>
         30a68:	e3300000 	teq	r0, #0	; 0x0
         30a6c:	0a000010 	beq	30ab4 <TAlertEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0xc8>
         30a70:	e3360000 	teq	r6, #0	; 0x0
         30a74:	13a06000 	movne	r6, #0	; 0x0
         30a78:	11a00005 	movne	r0, r5
         30a7c:	1b6b49da 	blne	1b031ec <TAlertDialog::$RemoveAlert(void)>
         30a80:	e5940014 	ldr	r0, [r4, #20]	; fField20
         30a84:	e280008c 	add	r0, r0, #140	; 0x8c
         30a88:	e1a01005 	mov	r1, r5
         30a8c:	eb6eeee5 	bl	1bec628 <CList::$Remove(void *)>
         30a90:	e3a07000 	mov	r7, #0	; 0x0
         30a94:	e28dd004 	add	sp, sp, #4	; 0x4
         30a98:	e5940014 	ldr	r0, [r4, #20]	; fField20
         30a9c:	e280008c 	add	r0, r0, #140	; 0x8c
         30aa0:	e3a01000 	mov	r1, #0	; 0x0
         30aa4:	eb6ed626 	bl	1be6344 <CList::$At(long)>
         30aa8:	e1b05000 	movs	r5, r0
         30aac:	1affffda 	bne	30a1c <TAlertEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x30>
         30ab0:	ea000004 	b	30ac8 <TAlertEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0xdc>
         30ab4:	e28dd004 	add	sp, sp, #4	; 0x4
         30ab8:	e3350000 	teq	r5, #0	; 0x0
         30abc:	11a00004 	movne	r0, r4
         30ac0:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
         30ac4:	1a6ef2f0 	bne	1bed68c <TAEventHandler::$ResetIdle(void)>
         30ac8:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         30acc:	e1a0100d 	mov	r1, sp
         30ad0:	e3a00000 	mov	r0, #0	; 0x0
         30ad4:	eb6f036f 	bl	1bf1898 <$GetGrafInfo(long, void *)>
         30ad8:	e59f1074 	ldr	r1, [pc, #74]	; 30b54 <TAlertEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x168>
         30adc:	e5940014 	ldr	r0, [r4, #20]	; fField20
         30ae0:	e5a010b8 	str	r1, [r0, #184]!
         30ae4:	e59f106c 	ldr	r1, [pc, #6c]	; 30b58 <TAlertEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x16c>
         30ae8:	e5940014 	ldr	r0, [r4, #20]	; fField20
         30aec:	e5a010bc 	str	r1, [r0, #188]!
         30af0:	e5940014 	ldr	r0, [r4, #20]	; fField20
         30af4:	e28000c0 	add	r0, r0, #192	; 0xc0
         30af8:	e28d1008 	add	r1, sp, #8	; 0x8
         30afc:	e8915000 	ldmia	r1, {ip, lr}
         30b00:	e8805000 	stmia	r0, {ip, lr}
         30b04:	e59f0050 	ldr	r0, [pc, #50]	; 30b5c <TAlertEventHandler::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x170>
         30b08:	e590c000 	ldr	ip, [r0]
         30b0c:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
         30b10:	e280e0a4 	add	lr, r0, #164	; 0xa4
         30b14:	e28040b4 	add	r4, r0, #180	; 0xb4
         30b18:	e3a02000 	mov	r2, #0	; 0x0
         30b1c:	e3a03000 	mov	r3, #0	; 0x0
         30b20:	e3a05000 	mov	r5, #0	; 0x0
         30b24:	e3a01000 	mov	r1, #0	; 0x0
         30b28:	e3a00001 	mov	r0, #1	; 0x1
         30b2c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         30b30:	e1a03005 	mov	r3, r5
         30b34:	e3a02014 	mov	r2, #20	; 0x14
         30b38:	e92d000c 	stmdb	sp!, {r2, r3}
         30b3c:	e1a03004 	mov	r3, r4
         30b40:	e1a0000c 	mov	r0, ip
         30b44:	e3a02000 	mov	r2, #0	; 0x0
         30b48:	e59e1000 	ldr	r1, [lr]
         30b4c:	eb6ea87d 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
         30b50:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         30b54:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
         30b58:	64726177 	ldrvsbt	r6, [r2], -#375
         30b5c:	0c1054a8 	ldceq	4, cr5, [r0], -#672
    */
}

