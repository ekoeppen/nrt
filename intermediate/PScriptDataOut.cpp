#include "include/PScriptDataOut.h"

/**
 * Symbol: Sizeof__14PScriptDataOutSFv
 * Address: 001cd85c
 */
void PScriptDataOut::Sizeof() {
    /*
        1cd85c:	e3a00010 	mov	r0, #16	; 0x10
        1cd860:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PScriptDataOut::New(void)
 * Address: 001cd864
 */
PScriptDataOut::New(void) {
    /*
        1cd864:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PScriptDataOut::Delete(void)
 * Address: 001cd868
 */
PScriptDataOut::Delete(void) {
    /*
        1cd868:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PScriptDataOut::Translate(void *, PipeCallBack *)
 * Address: 001cd86c
 */
PScriptDataOut::Translate(void *, PipeCallBack *) {
    /*
        1cd86c:	e1a0c00d 	mov	ip, sp
        1cd870:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1cd874:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cd878:	e1a04000 	mov	r4, r0
        1cd87c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cd880:	e3a06000 	mov	r6, #0	; 0x0
        1cd884:	e3310000 	teq	r1, #0	; 0x0
        1cd888:	0a0000c8 	beq	1cdbb0 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x344>
        1cd88c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cd890:	e1a05001 	mov	r5, r1
        1cd894:	e5910000 	ldr	r0, [r1]
        1cd898:	e5900000 	ldr	r0, [r0]
        1cd89c:	eb67d22a 	bl	1bc214c <$AllocateRefHandle(long)>
        1cd8a0:	e58d0000 	str	r0, [sp]
        1cd8a4:	e5900000 	ldr	r0, [r0]
        1cd8a8:	e3a09000 	mov	r9, #0	; 0x0
        1cd8ac:	e3300002 	teq	r0, #2	; 0x2
        1cd8b0:	0a0000bb 	beq	1cdba4 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x338>
        1cd8b4:	e3a00000 	mov	r0, #0	; 0x0
        1cd8b8:	e52d0004 	str	r0, [sp, -#4]!
        1cd8bc:	e52d0004 	str	r0, [sp, -#4]!
        1cd8c0:	e3a07000 	mov	r7, #0	; 0x0
        1cd8c4:	e3a08000 	mov	r8, #0	; 0x0
        1cd8c8:	e52d0004 	str	r0, [sp, -#4]!
        1cd8cc:	e52d906c 	str	r9, [sp, -#108]!
        1cd8d0:	e28d0008 	add	r0, sp, #8	; 0x8
        1cd8d4:	eb679426 	bl	1bb2974 <$setjmp>
        1cd8d8:	e3300000 	teq	r0, #0	; 0x0
        1cd8dc:	1a00009b 	bne	1cdb50 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x2e4>
        1cd8e0:	e1a0000d 	mov	r0, sp
        1cd8e4:	eb6849e4 	bl	1be007c <$AddExceptionHandler>
        1cd8e8:	e28d0078 	add	r0, sp, #120	; 0x78
        1cd8ec:	eb689826 	bl	1bf398c <$IsArray(RefVar const &)>
        1cd8f0:	e3300000 	teq	r0, #0	; 0x0
        1cd8f4:	0a000029 	beq	1cd9a0 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x134>
        1cd8f8:	e59d0078 	ldr	r0, [sp, #120]
        1cd8fc:	e5900000 	ldr	r0, [r0]
        1cd900:	eb67de69 	bl	1bc52ac <$Length(long)>
        1cd904:	e1a08000 	mov	r8, r0
        1cd908:	e1a00100 	mov	r0, r0, lsl #2
        1cd90c:	eb682495 	bl	1bd6b68 <$malloc>
        1cd910:	e1a07000 	mov	r7, r0
        1cd914:	eb685201 	bl	1be2120 <$MemError>
        1cd918:	e1b06000 	movs	r6, r0
        1cd91c:	1a000027 	bne	1cd9c0 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x154>
        1cd920:	e5879000 	str	r9, [r7]
        1cd924:	e3a09000 	mov	r9, #0	; 0x0
        1cd928:	e3580000 	cmp	r8, #0	; 0x0
        1cd92c:	9a000023 	bls	1cd9c0 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x154>
        1cd930:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cd934:	e0873109 	add	r3, r7, r9, lsl #2
        1cd938:	e92d0008 	stmdb	sp!, {r3}
        1cd93c:	e1a01009 	mov	r1, r9
        1cd940:	e59d0080 	ldr	r0, [sp, #128]
        1cd944:	e5900000 	ldr	r0, [r0]
        1cd948:	eb67da41 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1cd94c:	eb67d1fe 	bl	1bc214c <$AllocateRefHandle(long)>
        1cd950:	e58d0004 	str	r0, [sp, #4]
        1cd954:	e28d1004 	add	r1, sp, #4	; 0x4
        1cd958:	e1a00004 	mov	r0, r4
        1cd95c:	e995000c 	ldmib	r5, {r2, r3}
        1cd960:	eb6766a0 	bl	1ba73e8 <PScriptDataOut::$ParseOutputLength(RefVar const &, FormType, long, long *)>
        1cd964:	e1a06000 	mov	r6, r0
        1cd968:	e5bd0004 	ldr	r0, [sp, #4]!
        1cd96c:	eb67d612 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cd970:	e3360000 	teq	r6, #0	; 0x0
        1cd974:	128dd004 	addne	sp, sp, #4	; 0x4
        1cd978:	1a000010 	bne	1cd9c0 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x154>
        1cd97c:	e7970109 	ldr	r0, [r7, r9, lsl #2]
        1cd980:	e59d1070 	ldr	r1, [sp, #112]
        1cd984:	e0800001 	add	r0, r0, r1
        1cd988:	e2899001 	add	r9, r9, #1	; 0x1
        1cd98c:	e1590008 	cmp	r9, r8
        1cd990:	e58d0070 	str	r0, [sp, #112]
        1cd994:	e28dd004 	add	sp, sp, #4	; 0x4
        1cd998:	3affffe4 	bcc	1cd930 <PScriptDataOut::Translate(void *, PipeCallBack *)+0xc4>
        1cd99c:	ea000007 	b	1cd9c0 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x154>
        1cd9a0:	e28d306c 	add	r3, sp, #108	; 0x6c
        1cd9a4:	e92d0008 	stmdb	sp!, {r3}
        1cd9a8:	e28d107c 	add	r1, sp, #124	; 0x7c
        1cd9ac:	e1a00004 	mov	r0, r4
        1cd9b0:	e995000c 	ldmib	r5, {r2, r3}
        1cd9b4:	eb67668b 	bl	1ba73e8 <PScriptDataOut::$ParseOutputLength(RefVar const &, FormType, long, long *)>
        1cd9b8:	e28dd004 	add	sp, sp, #4	; 0x4
        1cd9bc:	e1a06000 	mov	r6, r0
        1cd9c0:	e59f0074 	ldr	r0, [pc, #74]	; 1cda3c <PScriptDataOut::Translate(void *, PipeCallBack *)+0x1d0>
        1cd9c4:	e3360000 	teq	r6, #0	; 0x0
        1cd9c8:	e58d007c 	str	r0, [sp, #124]
        1cd9cc:	0a000004 	beq	1cd9e4 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x178>
        1cd9d0:	e1a01006 	mov	r1, r6
        1cd9d4:	e59d007c 	ldr	r0, [sp, #124]
        1cd9d8:	e5900000 	ldr	r0, [r0]
        1cd9dc:	e3a02000 	mov	r2, #0	; 0x0
        1cd9e0:	eb6855ed 	bl	1be319c <$Throw>
        1cd9e4:	e5d5000c 	ldrb	r0, [r5, #12]
        1cd9e8:	e3300000 	teq	r0, #0	; 0x0
        1cd9ec:	0a000013 	beq	1cda40 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x1d4>
        1cd9f0:	e5951010 	ldr	r1, [r5, #16]
        1cd9f4:	e59d006c 	ldr	r0, [sp, #108]
        1cd9f8:	e0810000 	add	r0, r1, r0
        1cd9fc:	eb6851cb 	bl	1be2130 <$NewHandleClear>
        1cda00:	e58d0070 	str	r0, [sp, #112]
        1cda04:	e3300000 	teq	r0, #0	; 0x0
        1cda08:	1a000005 	bne	1cda24 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x1b8>
        1cda0c:	eb6851c3 	bl	1be2120 <$MemError>
        1cda10:	e1a01000 	mov	r1, r0
        1cda14:	e59d007c 	ldr	r0, [sp, #124]
        1cda18:	e5900000 	ldr	r0, [r0]
        1cda1c:	e3a02000 	mov	r2, #0	; 0x0
        1cda20:	eb6855dd 	bl	1be319c <$Throw>
        1cda24:	e59d0070 	ldr	r0, [sp, #112]
        1cda28:	eb6851b7 	bl	1be210c <$HLock>
        1cda2c:	e59d0070 	ldr	r0, [sp, #112]
        1cda30:	e5900000 	ldr	r0, [r0]
        1cda34:	e58d0074 	str	r0, [sp, #116]
        1cda38:	ea00000d 	b	1cda74 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x208>
        1cda3c:	00371328 	eoreqs	r1, r7, r8, lsr #6
        1cda40:	e5950010 	ldr	r0, [r5, #16]
        1cda44:	e59d106c 	ldr	r1, [sp, #108]
        1cda48:	e0800001 	add	r0, r0, r1
        1cda4c:	eb6851bc 	bl	1be2144 <$NewPtrClear>
        1cda50:	e58d0074 	str	r0, [sp, #116]
        1cda54:	e3300000 	teq	r0, #0	; 0x0
        1cda58:	1a000005 	bne	1cda74 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x208>
        1cda5c:	eb6851af 	bl	1be2120 <$MemError>
        1cda60:	e1a01000 	mov	r1, r0
        1cda64:	e59d007c 	ldr	r0, [sp, #124]
        1cda68:	e5900000 	ldr	r0, [r0]
        1cda6c:	e3a02000 	mov	r2, #0	; 0x0
        1cda70:	eb6855c9 	bl	1be319c <$Throw>
        1cda74:	e3370000 	teq	r7, #0	; 0x0
        1cda78:	0a000021 	beq	1cdb04 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x298>
        1cda7c:	e3a09000 	mov	r9, #0	; 0x0
        1cda80:	e3580000 	cmp	r8, #0	; 0x0
        1cda84:	e595a010 	ldr	sl, [r5, #16]
        1cda88:	9a00001a 	bls	1cdaf8 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x28c>
        1cda8c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cda90:	e59d0078 	ldr	r0, [sp, #120]
        1cda94:	e080300a 	add	r3, r0, sl
        1cda98:	e0872109 	add	r2, r7, r9, lsl #2
        1cda9c:	e92d000c 	stmdb	sp!, {r2, r3}
        1cdaa0:	e1a01009 	mov	r1, r9
        1cdaa4:	e59d0084 	ldr	r0, [sp, #132]
        1cdaa8:	e5900000 	ldr	r0, [r0]
        1cdaac:	eb67d9e8 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1cdab0:	eb67d1a5 	bl	1bc214c <$AllocateRefHandle(long)>
        1cdab4:	e58d0008 	str	r0, [sp, #8]
        1cdab8:	e28d1008 	add	r1, sp, #8	; 0x8
        1cdabc:	e1a00004 	mov	r0, r4
        1cdac0:	e995000c 	ldmib	r5, {r2, r3}
        1cdac4:	eb676649 	bl	1ba73f0 <PScriptDataOut::$ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)>
        1cdac8:	e1a06000 	mov	r6, r0
        1cdacc:	e5bd0008 	ldr	r0, [sp, #8]!
        1cdad0:	eb67d5b9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cdad4:	e3360000 	teq	r6, #0	; 0x0
        1cdad8:	128dd004 	addne	sp, sp, #4	; 0x4
        1cdadc:	1a000005 	bne	1cdaf8 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x28c>
        1cdae0:	e7970109 	ldr	r0, [r7, r9, lsl #2]
        1cdae4:	e080a00a 	add	sl, r0, sl
        1cdae8:	e28dd004 	add	sp, sp, #4	; 0x4
        1cdaec:	e2899001 	add	r9, r9, #1	; 0x1
        1cdaf0:	e1590008 	cmp	r9, r8
        1cdaf4:	3affffe4 	bcc	1cda8c <PScriptDataOut::Translate(void *, PipeCallBack *)+0x220>
        1cdaf8:	e1a00007 	mov	r0, r7
        1cdafc:	eb681395 	bl	1bd2958 <$free>
        1cdb00:	ea00000a 	b	1cdb30 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x2c4>
        1cdb04:	e5951010 	ldr	r1, [r5, #16]
        1cdb08:	e59d0074 	ldr	r0, [sp, #116]
        1cdb0c:	e0813000 	add	r3, r1, r0
        1cdb10:	e28d206c 	add	r2, sp, #108	; 0x6c
        1cdb14:	e92d000c 	stmdb	sp!, {r2, r3}
        1cdb18:	e28d1080 	add	r1, sp, #128	; 0x80
        1cdb1c:	e1a00004 	mov	r0, r4
        1cdb20:	e9b5000c 	ldmib	r5!, {r2, r3}
        1cdb24:	eb676631 	bl	1ba73f0 <PScriptDataOut::$ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)>
        1cdb28:	e28dd008 	add	sp, sp, #8	; 0x8
        1cdb2c:	e1a06000 	mov	r6, r0
        1cdb30:	e3360000 	teq	r6, #0	; 0x0
        1cdb34:	0a00000f 	beq	1cdb78 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x30c>
        1cdb38:	e1a01006 	mov	r1, r6
        1cdb3c:	e59d007c 	ldr	r0, [sp, #124]
        1cdb40:	e5900000 	ldr	r0, [r0]
        1cdb44:	e3a02000 	mov	r2, #0	; 0x0
        1cdb48:	eb685593 	bl	1be319c <$Throw>
        1cdb4c:	ea000009 	b	1cdb78 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x30c>
        1cdb50:	e59d0070 	ldr	r0, [sp, #112]
        1cdb54:	e3300000 	teq	r0, #0	; 0x0
        1cdb58:	0a000001 	beq	1cdb64 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x2f8>
        1cdb5c:	eb684d53 	bl	1be10b0 <$DisposHandle>
        1cdb60:	ea000002 	b	1cdb70 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x304>
        1cdb64:	e59d0074 	ldr	r0, [sp, #116]
        1cdb68:	e3300000 	teq	r0, #0	; 0x0
        1cdb6c:	1b681379 	blne	1bd2958 <$free>
        1cdb70:	e1a0000d 	mov	r0, sp
        1cdb74:	eb685176 	bl	1be2154 <$NextHandler>
        1cdb78:	e1a0000d 	mov	r0, sp
        1cdb7c:	eb684d4d 	bl	1be10b8 <$ExitHandler>
        1cdb80:	e28dd06c 	add	sp, sp, #108	; 0x6c
        1cdb84:	e59d0004 	ldr	r0, [sp, #4]
        1cdb88:	e3300000 	teq	r0, #0	; 0x0
        1cdb8c:	0a000002 	beq	1cdb9c <PScriptDataOut::Translate(void *, PipeCallBack *)+0x330>
        1cdb90:	eb68515f 	bl	1be2114 <$HUnlock>
        1cdb94:	e59d6004 	ldr	r6, [sp, #4]
        1cdb98:	ea000000 	b	1cdba0 <PScriptDataOut::Translate(void *, PipeCallBack *)+0x334>
        1cdb9c:	e59d6008 	ldr	r6, [sp, #8]
        1cdba0:	e28dd00c 	add	sp, sp, #12	; 0xc
        1cdba4:	e59d0000 	ldr	r0, [sp]
        1cdba8:	eb67d583 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cdbac:	e28dd004 	add	sp, sp, #4	; 0x4
        1cdbb0:	e1a00006 	mov	r0, r6
        1cdbb4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)
 * Address: 001cdbb8
 */
PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *) {
    /*
        1cdbb8:	e1a0c00d 	mov	ip, sp
        1cdbbc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1cdbc0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cdbc4:	e1a05001 	mov	r5, r1
        1cdbc8:	e1a04002 	mov	r4, r2
        1cdbcc:	e1a06003 	mov	r6, r3
        1cdbd0:	e3a07000 	mov	r7, #0	; 0x0
        1cdbd4:	e59b8004 	ldr	r8, [fp, #4]
        1cdbd8:	e5887000 	str	r7, [r8]
        1cdbdc:	e59f903c 	ldr	r9, [pc, #3c]	; 1cdc20 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x68>
        1cdbe0:	e3320004 	teq	r2, #4	; 0x4
        1cdbe4:	0a000040 	beq	1cdcec <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x134>
        1cdbe8:	e3340008 	teq	r4, #8	; 0x8
        1cdbec:	0a000047 	beq	1cdd10 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x158>
        1cdbf0:	e1a00005 	mov	r0, r5
        1cdbf4:	eb67dda8 	bl	1bc529c <$IsString(RefVar const &)>
        1cdbf8:	e3300000 	teq	r0, #0	; 0x0
        1cdbfc:	0a000008 	beq	1cdc24 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x6c>
        1cdc00:	e3340001 	teq	r4, #1	; 0x1
        1cdc04:	13340003 	teqne	r4, #3	; 0x3
        1cdc08:	1a000005 	bne	1cdc24 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x6c>
        1cdc0c:	e1a00005 	mov	r0, r5
        1cdc10:	eb67d55b 	bl	1bc3184 <$GetCString(RefVar const &)>
        1cdc14:	e1a01006 	mov	r1, r6
        1cdc18:	eb68ee1b 	bl	1c0948c <$Umbstrlen>
        1cdc1c:	ea000030 	b	1cdce4 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x12c>
        1cdc20:	ffff2d0f 	swinv	0x00ff2d0f
        1cdc24:	e5950000 	ldr	r0, [r5]
        1cdc28:	e5900000 	ldr	r0, [r0]
        1cdc2c:	e1a01000 	mov	r1, r0
        1cdc30:	e2000003 	and	r0, r0, #3	; 0x3
        1cdc34:	e3300002 	teq	r0, #2	; 0x2
        1cdc38:	03a03003 	moveq	r3, #3	; 0x3
        1cdc3c:	00032141 	andeq	r2, r3, r1, asr #2
        1cdc40:	03320001 	teqeq	r2, #1	; 0x1
        1cdc44:	1a000016 	bne	1cdca4 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0xec>
        1cdc48:	e3340001 	teq	r4, #1	; 0x1
        1cdc4c:	13340002 	teqne	r4, #2	; 0x2
        1cdc50:	1a000013 	bne	1cdca4 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0xec>
        1cdc54:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cdc58:	e3300002 	teq	r0, #2	; 0x2
        1cdc5c:	03320001 	teqeq	r2, #1	; 0x1
        1cdc60:	01a00141 	moveq	r0, r1, asr #2
        1cdc64:	01a00140 	moveq	r0, r0, asr #2
        1cdc68:	01a00800 	moveq	r0, r0, lsl #16
        1cdc6c:	01a00820 	moveq	r0, r0, lsr #16
        1cdc70:	0a000001 	beq	1cdc7c <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0xc4>
        1cdc74:	e1a00001 	mov	r0, r1
        1cdc78:	eb67d126 	bl	1bc2118 <$_RCHARError(long)>
        1cdc7c:	e5cd0001 	strb	r0, [sp, #1]
        1cdc80:	e1a00440 	mov	r0, r0, asr #8
        1cdc84:	e5cd0000 	strb	r0, [sp]
        1cdc88:	e1a01006 	mov	r1, r6
        1cdc8c:	e1a0000d 	mov	r0, sp
        1cdc90:	e3a02001 	mov	r2, #1	; 0x1
        1cdc94:	eb68edfd 	bl	1c09490 <$Umbstrnlen>
        1cdc98:	e5880000 	str	r0, [r8]
        1cdc9c:	e28dd004 	add	sp, sp, #4	; 0x4
        1cdca0:	ea00004a 	b	1cddd0 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x218>
        1cdca4:	e3300000 	teq	r0, #0	; 0x0
        1cdca8:	1a000003 	bne	1cdcbc <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x104>
        1cdcac:	e3340001 	teq	r4, #1	; 0x1
        1cdcb0:	13340005 	teqne	r4, #5	; 0x5
        1cdcb4:	03a00001 	moveq	r0, #1	; 0x1
        1cdcb8:	0a000010 	beq	1cdd00 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x148>
        1cdcbc:	e1a00005 	mov	r0, r5
        1cdcc0:	eb68dd7e 	bl	1c052c0 <$IsBinary(RefVar const &)>
        1cdcc4:	e3300000 	teq	r0, #0	; 0x0
        1cdcc8:	0a00000e 	beq	1cdd08 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x150>
        1cdccc:	e3340001 	teq	r4, #1	; 0x1
        1cdcd0:	13340006 	teqne	r4, #6	; 0x6
        1cdcd4:	1a00000b 	bne	1cdd08 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x150>
        1cdcd8:	e5950000 	ldr	r0, [r5]
        1cdcdc:	e5900000 	ldr	r0, [r0]
        1cdce0:	eb67dd71 	bl	1bc52ac <$Length(long)>
        1cdce4:	e5880000 	str	r0, [r8]
        1cdce8:	ea000038 	b	1cddd0 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x218>
        1cdcec:	e5950000 	ldr	r0, [r5]
        1cdcf0:	e5900000 	ldr	r0, [r0]
        1cdcf4:	e3100003 	tst	r0, #3	; 0x3
        1cdcf8:	1a000002 	bne	1cdd08 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x150>
        1cdcfc:	e3a00004 	mov	r0, #4	; 0x4
        1cdd00:	e5880000 	str	r0, [r8]
        1cdd04:	ea000035 	b	1cdde0 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x228>
        1cdd08:	e1a07009 	mov	r7, r9
        1cdd0c:	ea000033 	b	1cdde0 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x228>
        1cdd10:	e24dd008 	sub	sp, sp, #8	; 0x8
        1cdd14:	e59f10cc 	ldr	r1, [pc, #cc]	; 1cdde8 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x230>
        1cdd18:	e1a00005 	mov	r0, r5
        1cdd1c:	e3a03000 	mov	r3, #0	; 0x0
        1cdd20:	e3a02000 	mov	r2, #0	; 0x0
        1cdd24:	eb67d952 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1cdd28:	eb67d107 	bl	1bc214c <$AllocateRefHandle(long)>
        1cdd2c:	e58d0004 	str	r0, [sp, #4]
        1cdd30:	e59f10b4 	ldr	r1, [pc, #b4]	; 1cddec <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x234>
        1cdd34:	e1a00005 	mov	r0, r5
        1cdd38:	e3a03000 	mov	r3, #0	; 0x0
        1cdd3c:	e3a02000 	mov	r2, #0	; 0x0
        1cdd40:	eb67d94b 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1cdd44:	eb67d100 	bl	1bc214c <$AllocateRefHandle(long)>
        1cdd48:	e58d0000 	str	r0, [sp]
        1cdd4c:	e59d0004 	ldr	r0, [sp, #4]
        1cdd50:	e5900000 	ldr	r0, [r0]
        1cdd54:	e3300002 	teq	r0, #2	; 0x2
        1cdd58:	159d0000 	ldrne	r0, [sp]
        1cdd5c:	15900000 	ldrne	r0, [r0]
        1cdd60:	13300002 	teqne	r0, #2	; 0x2
        1cdd64:	0a000008 	beq	1cdd8c <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x1d4>
        1cdd68:	e28d0004 	add	r0, sp, #4	; 0x4
        1cdd6c:	eb689706 	bl	1bf398c <$IsArray(RefVar const &)>
        1cdd70:	e3300000 	teq	r0, #0	; 0x0
        1cdd74:	0a000004 	beq	1cdd8c <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x1d4>
        1cdd78:	e1a0000d 	mov	r0, sp
        1cdd7c:	eb689702 	bl	1bf398c <$IsArray(RefVar const &)>
        1cdd80:	e3300000 	teq	r0, #0	; 0x0
        1cdd84:	13a07000 	movne	r7, #0	; 0x0
        1cdd88:	1a000001 	bne	1cdd94 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x1dc>
        1cdd8c:	e3a07005 	mov	r7, #5	; 0x5
        1cdd90:	e2477cd3 	sub	r7, r7, #54016	; 0xd300
        1cdd94:	e3370000 	teq	r7, #0	; 0x0
        1cdd98:	1a000005 	bne	1cddb4 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x1fc>
        1cdd9c:	e1a03006 	mov	r3, r6
        1cdda0:	e1a02008 	mov	r2, r8
        1cdda4:	e1a0100d 	mov	r1, sp
        1cdda8:	e28d0004 	add	r0, sp, #4	; 0x4
        1cddac:	eb676578 	bl	1ba7394 <$MarshalArgumentSize__FRC6RefVarT1PUli>
        1cddb0:	e1a07000 	mov	r7, r0
        1cddb4:	e59d0000 	ldr	r0, [sp]
        1cddb8:	eb67d4ff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cddbc:	e59d0004 	ldr	r0, [sp, #4]
        1cddc0:	eb67d4fd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cddc4:	e28dd008 	add	sp, sp, #8	; 0x8
        1cddc8:	e3370000 	teq	r7, #0	; 0x0
        1cddcc:	1a000003 	bne	1cdde0 <PScriptDataOut::ParseOutputLength(RefVar const &, FormType, long, long *)+0x228>
        1cddd0:	e5980000 	ldr	r0, [r8]
        1cddd4:	e3300000 	teq	r0, #0	; 0x0
        1cddd8:	03a0700e 	moveq	r7, #14	; 0xe
        1cdddc:	02477cd3 	subeq	r7, r7, #54016	; 0xd300
        1cdde0:	e1a00007 	mov	r0, r7
        1cdde4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1cdde8:	00681ef0 	streqd	r1, [r8], -#224
        1cddec:	00684cb8 	streqh	r4, [r8], -#200
    */
}

/**
 * Symbol: PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)
 * Address: 001cddf0
 */
PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *) {
    /*
        1cddf0:	e1a0c00d 	mov	ip, sp
        1cddf4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1cddf8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1cddfc:	e1a04001 	mov	r4, r1
        1cde00:	e1a05002 	mov	r5, r2
        1cde04:	e1a06003 	mov	r6, r3
        1cde08:	e3a08000 	mov	r8, #0	; 0x0
        1cde0c:	e3320004 	teq	r2, #4	; 0x4
        1cde10:	e59b7008 	ldr	r7, [fp, #8]
        1cde14:	e59b9004 	ldr	r9, [fp, #4]
        1cde18:	0a000052 	beq	1cdf68 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x178>
        1cde1c:	e3350008 	teq	r5, #8	; 0x8
        1cde20:	0a000058 	beq	1cdf88 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x198>
        1cde24:	e1a00004 	mov	r0, r4
        1cde28:	eb67dd1b 	bl	1bc529c <$IsString(RefVar const &)>
        1cde2c:	e3300000 	teq	r0, #0	; 0x0
        1cde30:	0a000009 	beq	1cde5c <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x6c>
        1cde34:	e3350001 	teq	r5, #1	; 0x1
        1cde38:	13350003 	teqne	r5, #3	; 0x3
        1cde3c:	1a000006 	bne	1cde5c <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x6c>
        1cde40:	e1a00004 	mov	r0, r4
        1cde44:	eb67d4ce 	bl	1bc3184 <$GetCString(RefVar const &)>
        1cde48:	e1a02006 	mov	r2, r6
        1cde4c:	e1a01007 	mov	r1, r7
        1cde50:	e5993000 	ldr	r3, [r9]
        1cde54:	eb68ed93 	bl	1c094a8 <$ConvertUnicodeCharacters__FPUsPclT3>
        1cde58:	ea000066 	b	1cdff8 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x208>
        1cde5c:	e5940000 	ldr	r0, [r4]
        1cde60:	e5900000 	ldr	r0, [r0]
        1cde64:	e1a01000 	mov	r1, r0
        1cde68:	e2000003 	and	r0, r0, #3	; 0x3
        1cde6c:	e3300002 	teq	r0, #2	; 0x2
        1cde70:	03a03003 	moveq	r3, #3	; 0x3
        1cde74:	00032141 	andeq	r2, r3, r1, asr #2
        1cde78:	03320001 	teqeq	r2, #1	; 0x1
        1cde7c:	1a000016 	bne	1cdedc <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0xec>
        1cde80:	e3350001 	teq	r5, #1	; 0x1
        1cde84:	13350002 	teqne	r5, #2	; 0x2
        1cde88:	1a000013 	bne	1cdedc <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0xec>
        1cde8c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1cde90:	e3300002 	teq	r0, #2	; 0x2
        1cde94:	03320001 	teqeq	r2, #1	; 0x1
        1cde98:	01a00141 	moveq	r0, r1, asr #2
        1cde9c:	01a00140 	moveq	r0, r0, asr #2
        1cdea0:	01a00800 	moveq	r0, r0, lsl #16
        1cdea4:	01a00820 	moveq	r0, r0, lsr #16
        1cdea8:	0a000001 	beq	1cdeb4 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0xc4>
        1cdeac:	e1a00001 	mov	r0, r1
        1cdeb0:	eb67d098 	bl	1bc2118 <$_RCHARError(long)>
        1cdeb4:	e5cd0001 	strb	r0, [sp, #1]
        1cdeb8:	e1a00440 	mov	r0, r0, asr #8
        1cdebc:	e5cd0000 	strb	r0, [sp]
        1cdec0:	e1a02006 	mov	r2, r6
        1cdec4:	e1a01007 	mov	r1, r7
        1cdec8:	e1a0000d 	mov	r0, sp
        1cdecc:	e5993000 	ldr	r3, [r9]
        1cded0:	eb68ed74 	bl	1c094a8 <$ConvertUnicodeCharacters__FPUsPclT3>
        1cded4:	e28dd004 	add	sp, sp, #4	; 0x4
        1cded8:	ea000046 	b	1cdff8 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x208>
        1cdedc:	e3300000 	teq	r0, #0	; 0x0
        1cdee0:	1a000009 	bne	1cdf0c <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x11c>
        1cdee4:	e3350001 	teq	r5, #1	; 0x1
        1cdee8:	13350005 	teqne	r5, #5	; 0x5
        1cdeec:	1a000006 	bne	1cdf0c <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x11c>
        1cdef0:	e3300000 	teq	r0, #0	; 0x0
        1cdef4:	01a00141 	moveq	r0, r1, asr #2
        1cdef8:	0a000001 	beq	1cdf04 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x114>
        1cdefc:	e1a00001 	mov	r0, r1
        1cdf00:	eb67d085 	bl	1bc211c <$_RINTError(long)>
        1cdf04:	e5c70000 	strb	r0, [r7]
        1cdf08:	ea00003a 	b	1cdff8 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x208>
        1cdf0c:	e1a00004 	mov	r0, r4
        1cdf10:	eb68dcea 	bl	1c052c0 <$IsBinary(RefVar const &)>
        1cdf14:	e3300000 	teq	r0, #0	; 0x0
        1cdf18:	0a00000f 	beq	1cdf5c <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x16c>
        1cdf1c:	e3350001 	teq	r5, #1	; 0x1
        1cdf20:	13350006 	teqne	r5, #6	; 0x6
        1cdf24:	1a00000c 	bne	1cdf5c <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x16c>
        1cdf28:	e5940000 	ldr	r0, [r4]
        1cdf2c:	e5900000 	ldr	r0, [r0]
        1cdf30:	eb67dcdf 	bl	1bc52b4 <$LockRef(long)>
        1cdf34:	e5940000 	ldr	r0, [r4]
        1cdf38:	e5900000 	ldr	r0, [r0]
        1cdf3c:	eb67d086 	bl	1bc215c <$BinaryData(long)>
        1cdf40:	e1a01007 	mov	r1, r7
        1cdf44:	e5992000 	ldr	r2, [r9]
        1cdf48:	eb684401 	bl	1bdef54 <$BlockMove>
        1cdf4c:	e5940000 	ldr	r0, [r4]
        1cdf50:	e5900000 	ldr	r0, [r0]
        1cdf54:	eb67e945 	bl	1bc8470 <$UnlockRef(long)>
        1cdf58:	ea000026 	b	1cdff8 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x208>
        1cdf5c:	e59f8000 	ldr	r8, [pc, #0]	; 1cdf64 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x174>
        1cdf60:	ea000024 	b	1cdff8 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x208>
        1cdf64:	ffff2d0f 	swinv	0x00ff2d0f
        1cdf68:	e5940000 	ldr	r0, [r4]
        1cdf6c:	e5900000 	ldr	r0, [r0]
        1cdf70:	e3100003 	tst	r0, #3	; 0x3
        1cdf74:	01a00140 	moveq	r0, r0, asr #2
        1cdf78:	0a000000 	beq	1cdf80 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x190>
        1cdf7c:	eb67d066 	bl	1bc211c <$_RINTError(long)>
        1cdf80:	e5870000 	str	r0, [r7]
        1cdf84:	ea00001b 	b	1cdff8 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x208>
        1cdf88:	e24dd008 	sub	sp, sp, #8	; 0x8
        1cdf8c:	e59f106c 	ldr	r1, [pc, #6c]	; 1ce000 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x210>
        1cdf90:	e1a00004 	mov	r0, r4
        1cdf94:	e3a03000 	mov	r3, #0	; 0x0
        1cdf98:	e3a02000 	mov	r2, #0	; 0x0
        1cdf9c:	eb67d8b4 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1cdfa0:	eb67d069 	bl	1bc214c <$AllocateRefHandle(long)>
        1cdfa4:	e58d0004 	str	r0, [sp, #4]
        1cdfa8:	e59f1054 	ldr	r1, [pc, #54]	; 1ce004 <PScriptDataOut::ParseOutput(RefVar const &, FormType, long, long *, unsigned char *)+0x214>
        1cdfac:	e1a00004 	mov	r0, r4
        1cdfb0:	e3a03000 	mov	r3, #0	; 0x0
        1cdfb4:	e3a02000 	mov	r2, #0	; 0x0
        1cdfb8:	eb67d8ad 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1cdfbc:	eb67d062 	bl	1bc214c <$AllocateRefHandle(long)>
        1cdfc0:	e1a03006 	mov	r3, r6
        1cdfc4:	e58d0000 	str	r0, [sp]
        1cdfc8:	e92d0008 	stmdb	sp!, {r3}
        1cdfcc:	e1a02007 	mov	r2, r7
        1cdfd0:	e28d1004 	add	r1, sp, #4	; 0x4
        1cdfd4:	e28d0008 	add	r0, sp, #8	; 0x8
        1cdfd8:	e5993000 	ldr	r3, [r9]
        1cdfdc:	eb6764ee 	bl	1ba739c <$MarshalArguments__FRC6RefVarT1PvUli>
        1cdfe0:	e1a08000 	mov	r8, r0
        1cdfe4:	e5bd0004 	ldr	r0, [sp, #4]!
        1cdfe8:	eb67d473 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cdfec:	e59d0004 	ldr	r0, [sp, #4]
        1cdff0:	eb67d471 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1cdff4:	e28dd008 	add	sp, sp, #8	; 0x8
        1cdff8:	e1a00008 	mov	r0, r8
        1cdffc:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1ce000:	00681ef0 	streqd	r1, [r8], -#224
        1ce004:	00684cb8 	streqh	r4, [r8], -#200
    */
}

/**
 * Symbol: ClassInfo__14PScriptDataOutSFv
 * Address: 0038a2f0
 */
void PScriptDataOut::ClassInfo() {
    /*
        38a2f0:	e24f0044 	sub	r0, pc, #68	; 0x44
        38a2f4:	e1a0f00e 	mov	pc, lr
        38a2f8:	e3a00000 	mov	r0, #0	; 0x0
        38a2fc:	e1a0f00e 	mov	pc, lr
        38a300:	50536372 	subpls	r6, r3, r2, ror r3
        38a304:	69707444 	ldmvsdb	r0!, {r2, r6, sl, ip, sp, lr}^
        38a308:	6174614f 	cmnvs	r4, pc, asr #2
        38a30c:	75740050 	ldrvcb	r0, [r4, -#80]!
        38a310:	4672616d 	ldrmibt	r6, [r2], -sp, ror #2
        38a314:	6553696e 	ldrvsb	r6, [r3, -#2414]
        38a318:	6b000000 	blvs	38a320 <ClassInfo__14PScriptDataOutSFv+0x30>
        38a31c:	00000000 	andeq	r0, r0, r0
        38a320:	eafffff2 	b	38a2f0 <ClassInfo__14PScriptDataOutSFv>
        38a324:	ea60742b 	b	1ba73d8 <PScriptDataOut::$New(void)>
        38a328:	ea60700f 	b	1ba636c <PScriptDataOut::$Delete(void)>
        38a32c:	ea607841 	b	1ba8438 <PScriptDataOut::$Translate(void *, PipeCallBack *)>
        38a330:	00000000 	andeq	r0, r0, r0
        38a334:	00000048 	andeq	r0, r0, r8, asr #32
        38a338:	00000052 	andeq	r0, r0, r2, asr r0
        38a33c:	0000005b 	andeq	r0, r0, fp, asr r0
        38a340:	00000058 	andeq	r0, r0, r8, asr r0
        38a344:	00000068 	andeq	r0, r0, r8, rrx
        38a348:	ea609517 	b	1baf7ac <$Sizeof__13PScriptDataInSFv>
        38a354:	ea607419 	b	1ba73c0 <PScriptDataIn::$New(void)>
        38a358:	ea606ffd 	b	1ba6354 <PScriptDataIn::$Delete(void)>
        38a368:	ea000001 	b	38a374 <ClassInfo__13PScriptDataInSFv+0x8>
    */
}

