#include "include/TATP.h"

/**
 * Symbol: TATP::__ct(void)
 * Address: 00028758
 */
TATP::TATP(void) {
    /*
         28758:	e1a0c00d 	mov	ip, sp
         2875c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         28760:	e24cb004 	sub	fp, ip, #4	; 0x4
         28764:	e1b04000 	movs	r4, r0
         28768:	1a000003 	bne	2877c <TATP::__ct(void)+0x24>
         2876c:	e3a00028 	mov	r0, #40	; 0x28
         28770:	eb6e97f0 	bl	1bce738 <$__nw(unsigned int)>
         28774:	e1b04000 	movs	r4, r0
         28778:	0a000007 	beq	2879c <TATP::__ct(void)+0x44>
         2877c:	e1a00004 	mov	r0, r4
         28780:	eb69244a 	bl	1a718b0 <TStackObject::$__ct(void)>
         28784:	e2840018 	add	r0, r4, #24	; 0x18
         28788:	eb69286a 	bl	1a72938 <TTransactionManager::$__ct(void)>
         2878c:	e2840020 	add	r0, r4, #32	; 0x20
         28790:	eb692862 	bl	1a72920 <TResponseManager::$__ct(void)>
         28794:	e59f0008 	ldr	r0, [pc, #8]	; 287a4 <TATP::__ct(void)+0x4c>
         28798:	e5840000 	str	r0, [r4]
         2879c:	e1a00004 	mov	r0, r4
         287a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         287a4:	0001f3a8 	andeq	pc, r1, r8, lsr #7
    */
}

/**
 * Symbol: TATP::Init(void)
 * Address: 000287a8
 */
TATP::Init(void) {
    /*
         287a8:	e59f2004 	ldr	r2, [pc, #4]	; 287b4 <TATP::Init(void)+0xc>
         287ac:	e59f1004 	ldr	r1, [pc, #4]	; 287b8 <TATP::Init(void)+0x10>
         287b0:	ea694d7c 	b	1a7bda8 <TStackObject::$Init(unsigned long, unsigned long)>
         287b4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         287b8:	61747020 	cmnvs	r4, r0, lsr #32
    */
}

/**
 * Symbol: TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)
 * Address: 000287cc
 */
TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *) {
    /*
         287cc:	e1a0c00d 	mov	ip, sp
         287d0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         287d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         287d8:	e1a0e000 	mov	lr, r0
         287dc:	e1a04003 	mov	r4, r3
         287e0:	e28e6020 	add	r6, lr, #32	; 0x20
         287e4:	e5930010 	ldr	r0, [r3, #16]
         287e8:	e250cc03 	subs	ip, r0, #768	; 0x300
         287ec:	a35c0001 	cmpge	ip, #1	; 0x1
         287f0:	0a000028 	beq	28898 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xcc>
         287f4:	e28e7018 	add	r7, lr, #24	; 0x18
         287f8:	ca000012 	bgt	28848 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x7c>
         287fc:	e350000a 	cmp	r0, #10	; 0xa
         28800:	0a000020 	beq	28888 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xbc>
         28804:	ca000007 	bgt	28828 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x5c>
         28808:	e3300002 	teq	r0, #2	; 0x2
         2880c:	0a000042 	beq	2891c <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x150>
         28810:	e3300006 	teq	r0, #6	; 0x6
         28814:	1a000045 	bne	28930 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x164>
         28818:	e1a02004 	mov	r2, r4
         2881c:	e1a0000e 	mov	r0, lr
         28820:	eb6955b0 	bl	1a7dee8 <TATP::$Read(TUMsgToken *, TAppleTalkMessage *)>
         28824:	ea00003f 	b	28928 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x15c>
         28828:	e3300064 	teq	r0, #100	; 0x64
         2882c:	0a00002b 	beq	288e0 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x114>
         28830:	e3300c03 	teq	r0, #768	; 0x300
         28834:	1a00003d 	bne	28930 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x164>
         28838:	e1a00006 	mov	r0, r6
         2883c:	e1a01004 	mov	r1, r4
         28840:	eb695596 	bl	1a7dea0 <TResponseManager::$OpenResponder(TOpenResponderMessage *)>
         28844:	ea000037 	b	28928 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x15c>
         28848:	e240cc03 	sub	ip, r0, #768	; 0x300
         2884c:	e33c0002 	teq	ip, #2	; 0x2
         28850:	0a000014 	beq	288a8 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xdc>
         28854:	e240cc03 	sub	ip, r0, #768	; 0x300
         28858:	e33c0003 	teq	ip, #3	; 0x3
         2885c:	0a000016 	beq	288bc <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0xf0>
         28860:	e3300fc1 	teq	r0, #772	; 0x304
         28864:	0a000019 	beq	288d0 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x104>
         28868:	e240cfc1 	sub	ip, r0, #772	; 0x304
         2886c:	e33c0001 	teq	ip, #1	; 0x1
         28870:	1a00002e 	bne	28930 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x164>
         28874:	e1a00006 	mov	r0, r6
         28878:	e1a0200e 	mov	r2, lr
         2887c:	e1a01004 	mov	r1, r4
         28880:	eb695dc0 	bl	1a7ff88 <TResponseManager::$SendResponses(TSendResponsesMessage *, TATP *)>
         28884:	ea000027 	b	28928 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x15c>
         28888:	e1a01004 	mov	r1, r4
         2888c:	e1a0000e 	mov	r0, lr
         28890:	eb6961fa 	bl	1a81080 <TATP::$Write(TAppleTalkMessage *)>
         28894:	ea000023 	b	28928 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x15c>
         28898:	e1a00006 	mov	r0, r6
         2889c:	e1a01004 	mov	r1, r4
         288a0:	eb693cc5 	bl	1a77bbc <TResponseManager::$CloseResponder(TCloseResponderMessage *)>
         288a4:	ea00001f 	b	28928 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x15c>
         288a8:	e1a00007 	mov	r0, r7
         288ac:	e1a0300e 	mov	r3, lr
         288b0:	e1a02004 	mov	r2, r4
         288b4:	eb695de3 	bl	1a80048 <TTransactionManager::$TransactionRequest(TUMsgToken *, TSendRequestMessage *, TATP *)>
         288b8:	ea00001a 	b	28928 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x15c>
         288bc:	e1a00007 	mov	r0, r7
         288c0:	e1a0200e 	mov	r2, lr
         288c4:	e1a01004 	mov	r1, r4
         288c8:	eb695ddf 	bl	1a8004c <TTransactionManager::$TransactionRequestAgain(TSendRequestAgainMessage *, TATP *)>
         288cc:	ea000015 	b	28928 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x15c>
         288d0:	e1a00006 	mov	r0, r6
         288d4:	e1a01004 	mov	r1, r4
         288d8:	eb695de6 	bl	1a80078 <TResponseManager::$WantRequest(TWantRequestMessage *)>
         288dc:	ea000011 	b	28928 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x15c>
         288e0:	eb6eac3b 	bl	1bd39d4 <$GetGlobals>
         288e4:	eb6ef27d 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
         288e8:	e3a05000 	mov	r5, #0	; 0x0
         288ec:	e5940014 	ldr	r0, [r4, #20]
         288f0:	e3300003 	teq	r0, #3	; 0x3
         288f4:	0a000004 	beq	2890c <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x140>
         288f8:	e3300004 	teq	r0, #4	; 0x4
         288fc:	01a00006 	moveq	r0, r6
         28900:	01a01004 	moveq	r1, r4
         28904:	0b69491c 	bleq	1a7ad7c <TResponseManager::$HandleReleaseTimer(TTimerMessage *)>
         28908:	ea00000a 	b	28938 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x16c>
         2890c:	e1a00007 	mov	r0, r7
         28910:	e1a01004 	mov	r1, r4
         28914:	eb694d1a 	bl	1a7bd84 <TTransactionManager::$HandleRequestRetryTimer(TTimerMessage *)>
         28918:	ea000006 	b	28938 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x16c>
         2891c:	e1a01004 	mov	r1, r4
         28920:	e1a0000e 	mov	r0, lr
         28924:	eb693894 	bl	1a76b7c <TATP::$Cancel(TAppleTalkMessage *)>
         28928:	e1a05000 	mov	r5, r0
         2892c:	ea000001 	b	28938 <TATP::DoCommand(TUMsgToken *, unsigned long *, TAppleTalkMessage *)+0x16c>
         28930:	e3a05fb2 	mov	r5, #712	; 0x2c8
         28934:	e2455b0d 	sub	r5, r5, #13312	; 0x3400
         28938:	e1a00005 	mov	r0, r5
         2893c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TATP::Read(TUMsgToken *, TAppleTalkMessage *)
 * Address: 00028940
 */
TATP::Read(TUMsgToken *, TAppleTalkMessage *) {
    /*
         28940:	e1a0c00d 	mov	ip, sp
         28944:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         28948:	e24cb004 	sub	fp, ip, #4	; 0x4
         2894c:	e1a04000 	mov	r4, r0
         28950:	e1a05002 	mov	r5, r2
         28954:	e3a06000 	mov	r6, #0	; 0x0
         28958:	e1a07002 	mov	r7, r2
         2895c:	e24dd004 	sub	sp, sp, #4	; 0x4
         28960:	e1a0000d 	mov	r0, sp
         28964:	eb6923c8 	bl	1a7188c <TATPHeader::$__ct(void)>
         28968:	e5978028 	ldr	r8, [r7, #40]
         2896c:	e1a00008 	mov	r0, r8
         28970:	eb6f2c17 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         28974:	e5b81028 	ldr	r1, [r8, #40]!
         28978:	e0801001 	add	r1, r0, r1
         2897c:	e1a0000d 	mov	r0, sp
         28980:	eb6944ca 	bl	1a79cb0 <TATPHeader::$Fill(unsigned char *)>
         28984:	e1a09000 	mov	r9, r0
         28988:	e5978028 	ldr	r8, [r7, #40]
         2898c:	e1a00008 	mov	r0, r8
         28990:	eb6f2c0f 	bl	1bf39d4 <TMemoryObject::$GetPtr(void)>
         28994:	e5b81028 	ldr	r1, [r8, #40]!
         28998:	e0800001 	add	r0, r0, r1
         2899c:	e0800009 	add	r0, r0, r9
         289a0:	e5971028 	ldr	r1, [r7, #40]
         289a4:	e1a03001 	mov	r3, r1
         289a8:	e591102c 	ldr	r1, [r1, #44]
         289ac:	e0411009 	sub	r1, r1, r9
         289b0:	e5d72020 	ldrb	r2, [r7, #32]
         289b4:	e3320003 	teq	r2, #3	; 0x3
         289b8:	159f6044 	ldrne	r6, [pc, #44]	; 28a04 <TATP::Read(TUMsgToken *, TAppleTalkMessage *)+0xc4>
         289bc:	1a00003c 	bne	28ab4 <TATP::Read(TUMsgToken *, TAppleTalkMessage *)+0x174>
         289c0:	e59d2000 	ldr	r2, [sp]
         289c4:	e1a02f22 	mov	r2, r2, lsr #30
         289c8:	e285c014 	add	ip, r5, #20	; 0x14
         289cc:	e284e020 	add	lr, r4, #32	; 0x20
         289d0:	e3320001 	teq	r2, #1	; 0x1
         289d4:	0a00000b 	beq	28a08 <TATP::Read(TUMsgToken *, TAppleTalkMessage *)+0xc8>
         289d8:	e3320002 	teq	r2, #2	; 0x2
         289dc:	0a00001d 	beq	28a58 <TATP::Read(TUMsgToken *, TAppleTalkMessage *)+0x118>
         289e0:	e3320003 	teq	r2, #3	; 0x3
         289e4:	1a000030 	bne	28aac <TATP::Read(TUMsgToken *, TAppleTalkMessage *)+0x16c>
         289e8:	e59d0000 	ldr	r0, [sp]
         289ec:	e1a02800 	mov	r2, r0, lsl #16
         289f0:	e1a02822 	mov	r2, r2, lsr #16
         289f4:	e1a0100c 	mov	r1, ip
         289f8:	e1a0000e 	mov	r0, lr
         289fc:	eb6948dd 	bl	1a7ad78 <TResponseManager::$HandleRelease(TAddress &, unsigned short)>
         28a00:	ea00002b 	b	28ab4 <TATP::Read(TUMsgToken *, TAppleTalkMessage *)+0x174>
         28a04:	ffffcec7 	swinv	0x00ffcec7
         28a08:	e1a02004 	mov	r2, r4
         28a0c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         28a10:	e59d0010 	ldr	r0, [sp, #16]
         28a14:	e1a00280 	mov	r0, r0, lsl #5
         28a18:	e1a03ea0 	mov	r3, r0, lsr #29
         28a1c:	e59d0010 	ldr	r0, [sp, #16]
         28a20:	e1a00400 	mov	r0, r0, lsl #8
         28a24:	e1a02c20 	mov	r2, r0, lsr #24
         28a28:	e92d000c 	stmdb	sp!, {r2, r3}
         28a2c:	e59d0018 	ldr	r0, [sp, #24]
         28a30:	e1a00100 	mov	r0, r0, lsl #2
         28a34:	e1a03fa0 	mov	r3, r0, lsr #31
         28a38:	e59d0018 	ldr	r0, [sp, #24]
         28a3c:	e1a02800 	mov	r2, r0, lsl #16
         28a40:	e1a02822 	mov	r2, r2, lsr #16
         28a44:	e1a0100c 	mov	r1, ip
         28a48:	e1a0000e 	mov	r0, lr
         28a4c:	eb694ccb 	bl	1a7bd80 <TResponseManager::$HandleRequest(TAddress &, unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *, TPacketBuffer *)>
         28a50:	e28dd018 	add	sp, sp, #24	; 0x18
         28a54:	ea000012 	b	28aa4 <TATP::Read(TUMsgToken *, TAppleTalkMessage *)+0x164>
         28a58:	e1a03004 	mov	r3, r4
         28a5c:	e1a02001 	mov	r2, r1
         28a60:	e1a01000 	mov	r1, r0
         28a64:	e59d0000 	ldr	r0, [sp]
         28a68:	e1a00200 	mov	r0, r0, lsl #4
         28a6c:	e1a00fa0 	mov	r0, r0, lsr #31
         28a70:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         28a74:	e59d0010 	ldr	r0, [sp, #16]
         28a78:	e1a00180 	mov	r0, r0, lsl #3
         28a7c:	e1a03fa0 	mov	r3, r0, lsr #31
         28a80:	e59d0010 	ldr	r0, [sp, #16]
         28a84:	e1a00400 	mov	r0, r0, lsl #8
         28a88:	e1a02c20 	mov	r2, r0, lsr #24
         28a8c:	e59d0010 	ldr	r0, [sp, #16]
         28a90:	e1a01800 	mov	r1, r0, lsl #16
         28a94:	e1a01821 	mov	r1, r1, lsr #16
         28a98:	e2840018 	add	r0, r4, #24	; 0x18
         28a9c:	eb694cb9 	bl	1a7bd88 <TTransactionManager::$HandleResponse(unsigned short, unsigned char, unsigned char, unsigned char, unsigned char *, unsigned long, TATP *)>
         28aa0:	e28dd010 	add	sp, sp, #16	; 0x10
         28aa4:	e1a06000 	mov	r6, r0
         28aa8:	ea000001 	b	28ab4 <TATP::Read(TUMsgToken *, TAppleTalkMessage *)+0x174>
         28aac:	e3a060c6 	mov	r6, #198	; 0xc6
         28ab0:	e2466c32 	sub	r6, r6, #12800	; 0x3200
         28ab4:	e1a00006 	mov	r0, r6
         28ab8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TATP::Write(TAppleTalkMessage *)
 * Address: 00028abc
 */
TATP::Write(TAppleTalkMessage *) {
    /*
         28abc:	e1a0c00d 	mov	ip, sp
         28ac0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         28ac4:	e24cb004 	sub	fp, ip, #4	; 0x4
         28ac8:	e1a04001 	mov	r4, r1
         28acc:	e59f0044 	ldr	r0, [pc, #44]	; 28b18 <TATP::Write(TAppleTalkMessage *)+0x5c>
         28ad0:	e5810000 	str	r0, [r1]
         28ad4:	e59f0040 	ldr	r0, [pc, #40]	; 28b1c <TATP::Write(TAppleTalkMessage *)+0x60>
         28ad8:	e5810004 	str	r0, [r1, #4]
         28adc:	e3a0000a 	mov	r0, #10	; 0xa
         28ae0:	e5810010 	str	r0, [r1, #16]
         28ae4:	e3a00030 	mov	r0, #48	; 0x30
         28ae8:	e52d0004 	str	r0, [sp, -#4]!
         28aec:	eb6eabb8 	bl	1bd39d4 <$GetGlobals>
         28af0:	e1a03004 	mov	r3, r4
         28af4:	e92d0008 	stmdb	sp!, {r3}
         28af8:	e28d3004 	add	r3, sp, #4	; 0x4
         28afc:	e3a02000 	mov	r2, #0	; 0x0
         28b00:	e3a01000 	mov	r1, #0	; 0x0
         28b04:	e590c000 	ldr	ip, [r0]
         28b08:	e1a0e00f 	mov	lr, pc
         28b0c:	e28cf050 	add	pc, ip, #80	; 0x50
         28b10:	e3a00000 	mov	r0, #0	; 0x0
         28b14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         28b18:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         28b1c:	64647020 	strvsbt	r7, [r4], -#32
    */
}

/**
 * Symbol: TATP::Cancel(TAppleTalkMessage *)
 * Address: 00028b20
 */
TATP::Cancel(TAppleTalkMessage *) {
    /*
         28b20:	e1a0c00d 	mov	ip, sp
         28b24:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         28b28:	e24cb004 	sub	fp, ip, #4	; 0x4
         28b2c:	e1a04001 	mov	r4, r1
         28b30:	e5911014 	ldr	r1, [r1, #20]
         28b34:	e241cc03 	sub	ip, r1, #768	; 0x300
         28b38:	e33c0002 	teq	ip, #2	; 0x2
         28b3c:	1a000003 	bne	28b50 <TATP::Cancel(TAppleTalkMessage *)+0x30>
         28b40:	e2800018 	add	r0, r0, #24	; 0x18
         28b44:	e5941018 	ldr	r1, [r4, #24]
         28b48:	eb693c10 	bl	1a77b90 <TTransactionManager::$CancelTransaction(unsigned long)>
         28b4c:	ea000000 	b	28b54 <TATP::Cancel(TAppleTalkMessage *)+0x34>
         28b50:	e59f0004 	ldr	r0, [pc, #4]	; 28b5c <TATP::Cancel(TAppleTalkMessage *)+0x3c>
         28b54:	e5a40008 	str	r0, [r4, #8]!
         28b58:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         28b5c:	ffffd11b 	swinv	0x00ffd11b
    */
}

/**
 * Symbol: TATP::ATLKAttachLink(TAppleTalkMessage *)
 * Address: 00028b60
 */
TATP::ATLKAttachLink(TAppleTalkMessage *) {
    /*
         28b60:	e3a00000 	mov	r0, #0	; 0x0
         28b64:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATP::ATLKDetachLink(TAppleTalkMessage *)
 * Address: 00028b68
 */
TATP::ATLKDetachLink(TAppleTalkMessage *) {
    /*
         28b68:	e3a00000 	mov	r0, #0	; 0x0
         28b6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATP::ATLKOpen(TAppleTalkMessage *)
 * Address: 00028b70
 */
TATP::ATLKOpen(TAppleTalkMessage *) {
    /*
         28b70:	e3a00000 	mov	r0, #0	; 0x0
         28b74:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATP::ATLKClose(TAppleTalkMessage *)
 * Address: 00028b78
 */
TATP::ATLKClose(TAppleTalkMessage *) {
    /*
         28b78:	e3a00000 	mov	r0, #0	; 0x0
         28b7c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATP::ATLKShutDown(TAppleTalkMessage *)
 * Address: 00028b80
 */
TATP::ATLKShutDown(TAppleTalkMessage *) {
    /*
         28b80:	e3a00000 	mov	r0, #0	; 0x0
         28b84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TATP::ATLKSocketClosed(TAppleTalkMessage *)
 * Address: 00028b88
 */
TATP::ATLKSocketClosed(TAppleTalkMessage *) {
    /*
         28b88:	e3a00000 	mov	r0, #0	; 0x0
         28b8c:	e1a0f00e 	mov	pc, lr
    */
}

