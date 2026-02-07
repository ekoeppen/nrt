#include "Newton.h"

/**
 * Symbol: __lt__FRC5TDateT1
 * Address: 0008e420
 */
void globals::() {
    /*
         8e420:	e1a0c00d 	mov	ip, sp
         8e424:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         8e428:	e24cb004 	sub	fp, ip, #4	; 0x4
         8e42c:	e1a04001 	mov	r4, r1
         8e430:	eb6dc6d6 	bl	1bfff90 <TDate::$TotalMinutes( const(void))>
         8e434:	e1a05000 	mov	r5, r0
         8e438:	e1a00004 	mov	r0, r4
         8e43c:	eb6dc6d3 	bl	1bfff90 <TDate::$TotalMinutes( const(void))>
         8e440:	e1550000 	cmp	r5, r0
         8e444:	23a00000 	movcs	r0, #0	; 0x0
         8e448:	33a00001 	movcc	r0, #1	; 0x1
         8e44c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: __gt__FRC5TDateT1
 * Address: 0008e474
 */
void globals::() {
    /*
         8e474:	e1a0c00d 	mov	ip, sp
         8e478:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         8e47c:	e24cb004 	sub	fp, ip, #4	; 0x4
         8e480:	e1a04001 	mov	r4, r1
         8e484:	eb6dc6c1 	bl	1bfff90 <TDate::$TotalMinutes( const(void))>
         8e488:	e1a05000 	mov	r5, r0
         8e48c:	e1a00004 	mov	r0, r4
         8e490:	eb6dc6be 	bl	1bfff90 <TDate::$TotalMinutes( const(void))>
         8e494:	e1550000 	cmp	r5, r0
         8e498:	93a00000 	movls	r0, #0	; 0x0
         8e49c:	83a00001 	movhi	r0, #1	; 0x1
         8e4a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: __eq__FRC5TDateT1
 * Address: 0008e4a4
 */
void globals::() {
    /*
         8e4a4:	e5902000 	ldr	r2, [r0]
         8e4a8:	e5913000 	ldr	r3, [r1]
         8e4ac:	e1320003 	teq	r2, r3
         8e4b0:	05903004 	ldreq	r3, [r0, #4]
         8e4b4:	05912004 	ldreq	r2, [r1, #4]
         8e4b8:	01330002 	teqeq	r3, r2
         8e4bc:	05902008 	ldreq	r2, [r0, #8]
         8e4c0:	05913008 	ldreq	r3, [r1, #8]
         8e4c4:	01320003 	teqeq	r2, r3
         8e4c8:	0590300c 	ldreq	r3, [r0, #12]
         8e4cc:	0591200c 	ldreq	r2, [r1, #12]
         8e4d0:	01330002 	teqeq	r3, r2
         8e4d4:	05903010 	ldreq	r3, [r0, #16]
         8e4d8:	05912010 	ldreq	r2, [r1, #16]
         8e4dc:	01330002 	teqeq	r3, r2
         8e4e0:	05900014 	ldreq	r0, [r0, #20]
         8e4e4:	05911014 	ldreq	r1, [r1, #20]
         8e4e8:	01300001 	teqeq	r0, r1
         8e4ec:	13a00000 	movne	r0, #0	; 0x0
         8e4f0:	03a00001 	moveq	r0, #1	; 0x1
         8e4f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _IntlNumberMunge__FPcPUsUcUlN24
 * Address: 000ecfec
 */
void globals::_IntlNumberMunge() {
    /*
         ecfec:	e1a0c00d 	mov	ip, sp
         ecff0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         ecff4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         ecff8:	e24cb014 	sub	fp, ip, #20	; 0x14
         ecffc:	e1a04003 	mov	r4, r3
         ed000:	e20200ff 	and	r0, r2, #255	; 0xff
         ed004:	e52d000c 	str	r0, [sp, -#12]!
         ed008:	e24dd0a8 	sub	sp, sp, #168	; 0xa8
         ed00c:	e3a00000 	mov	r0, #0	; 0x0
         ed010:	e58d00a4 	str	r0, [sp, #164]
         ed014:	e59b0004 	ldr	r0, [fp, #4]
         ed018:	eb6b22a4 	bl	1bb5ab0 <$strlen>
         ed01c:	e58d0000 	str	r0, [sp]
         ed020:	e3500014 	cmp	r0, #20	; 0x14
         ed024:	83e00001 	mvnhi	r0, #1	; 0x1
         ed028:	8a000118 	bhi	ed490 <_IntlNumberMunge__FPcPUsUcUlN24+0x4a4>
         ed02c:	e3a08000 	mov	r8, #0	; 0x0
         ed030:	e3a01000 	mov	r1, #0	; 0x0
         ed034:	e5cd1025 	strb	r1, [sp, #37]
         ed038:	e5cd1024 	strb	r1, [sp, #36]
         ed03c:	e5cd1015 	strb	r1, [sp, #21]
         ed040:	e5cd1014 	strb	r1, [sp, #20]
         ed044:	e5cd1005 	strb	r1, [sp, #5]
         ed048:	e5cd1004 	strb	r1, [sp, #4]
         ed04c:	e3340000 	teq	r4, #0	; 0x0
         ed050:	059d4000 	ldreq	r4, [sp]
         ed054:	e59b0018 	ldr	r0, [fp, #24]
         ed058:	e3100020 	tst	r0, #32	; 0x20
         ed05c:	e59f70d8 	ldr	r7, [pc, #d8]	; ed13c <_IntlNumberMunge__FPcPUsUcUlN24+0x150>
         ed060:	0a000037 	beq	ed144 <_IntlNumberMunge__FPcPUsUcUlN24+0x158>
         ed064:	e24dd00c 	sub	sp, sp, #12	; 0xc
         ed068:	e5970018 	ldr	r0, [r7, #24]
         ed06c:	e5900000 	ldr	r0, [r0]
         ed070:	e5900000 	ldr	r0, [r0]
         ed074:	eb6b5434 	bl	1bc214c <$AllocateRefHandle(long)>
         ed078:	e58d0000 	str	r0, [sp]
         ed07c:	e1a0000d 	mov	r0, sp
         ed080:	eb6b583f 	bl	1bc3184 <$GetCString(RefVar const &)>
         ed084:	e58d0008 	str	r0, [sp, #8]
         ed088:	e59d0000 	ldr	r0, [sp]
         ed08c:	eb6b584a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ed090:	e59d0008 	ldr	r0, [sp, #8]
         ed094:	eb6c05b1 	bl	1bee760 <$Ustrlen>
         ed098:	e58d0004 	str	r0, [sp, #4]
         ed09c:	e28d5070 	add	r5, sp, #112	; 0x70
         ed0a0:	e1a09004 	mov	r9, r4
         ed0a4:	e1a01004 	mov	r1, r4
         ed0a8:	e59ba004 	ldr	sl, [fp, #4]
         ed0ac:	e59f008c 	ldr	r0, [pc, #8c]	; ed140 <_IntlNumberMunge__FPcPUsUcUlN24+0x154>
         ed0b0:	e58d00bc 	str	r0, [sp, #188]
         ed0b4:	e5900000 	ldr	r0, [r0]
         ed0b8:	e58d00b8 	str	r0, [sp, #184]
         ed0bc:	eb6b1621 	bl	1bb2948 <$__rt_udiv>
         ed0c0:	e1b06001 	movs	r6, r1
         ed0c4:	059d60b8 	ldreq	r6, [sp, #184]
         ed0c8:	e3390000 	teq	r9, #0	; 0x0
         ed0cc:	0a000012 	beq	ed11c <_IntlNumberMunge__FPcPUsUcUlN24+0x130>
         ed0d0:	e1a03006 	mov	r3, r6
         ed0d4:	e1a01005 	mov	r1, r5
         ed0d8:	e1a0000a 	mov	r0, sl
         ed0dc:	e3a02001 	mov	r2, #1	; 0x1
         ed0e0:	eb6be8a7 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         ed0e4:	e0499006 	sub	r9, r9, r6
         ed0e8:	e0855086 	add	r5, r5, r6, lsl #1
         ed0ec:	e08aa006 	add	sl, sl, r6
         ed0f0:	e59d00bc 	ldr	r0, [sp, #188]
         ed0f4:	e3590000 	cmp	r9, #0	; 0x0
         ed0f8:	e5906000 	ldr	r6, [r0]
         ed0fc:	9a000004 	bls	ed114 <_IntlNumberMunge__FPcPUsUcUlN24+0x128>
         ed100:	e1a00005 	mov	r0, r5
         ed104:	e59d1008 	ldr	r1, [sp, #8]
         ed108:	eb6c0593 	bl	1bee75c <$Ustrcpy>
         ed10c:	e59d0004 	ldr	r0, [sp, #4]
         ed110:	e0855080 	add	r5, r5, r0, lsl #1
         ed114:	e3390000 	teq	r9, #0	; 0x0
         ed118:	1affffec 	bne	ed0d0 <_IntlNumberMunge__FPcPUsUcUlN24+0xe4>
         ed11c:	e3a00000 	mov	r0, #0	; 0x0
         ed120:	e5c50001 	strb	r0, [r5, #1]
         ed124:	e5c50000 	strb	r0, [r5]
         ed128:	e28d0070 	add	r0, sp, #112	; 0x70
         ed12c:	eb6c058b 	bl	1bee760 <$Ustrlen>
         ed130:	e1a05000 	mov	r5, r0
         ed134:	e28dd00c 	add	sp, sp, #12	; 0xc
         ed138:	ea00000c 	b	ed170 <_IntlNumberMunge__FPcPUsUcUlN24+0x184>
         ed13c:	0c106198 	ldfeqs	f6, [r0], -#608
         ed140:	0c100f9c 	ldceq	15, cr0, [r0], -#624
         ed144:	e1a03004 	mov	r3, r4
         ed148:	e28d1064 	add	r1, sp, #100	; 0x64
         ed14c:	e3a02001 	mov	r2, #1	; 0x1
         ed150:	e59b0004 	ldr	r0, [fp, #4]
         ed154:	eb6be88a 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         ed158:	e3a01000 	mov	r1, #0	; 0x0
         ed15c:	e28d0064 	add	r0, sp, #100	; 0x64
         ed160:	e0800084 	add	r0, r0, r4, lsl #1
         ed164:	e5c01001 	strb	r1, [r0, #1]
         ed168:	e5c01000 	strb	r1, [r0]
         ed16c:	e1a05004 	mov	r5, r4
         ed170:	e59d0000 	ldr	r0, [sp]
         ed174:	e1340000 	teq	r4, r0
         ed178:	0a00000e 	beq	ed1b8 <_IntlNumberMunge__FPcPUsUcUlN24+0x1cc>
         ed17c:	e59d0000 	ldr	r0, [sp]
         ed180:	e0400004 	sub	r0, r0, r4
         ed184:	e2408001 	sub	r8, r0, #1	; 0x1
         ed188:	e59b0004 	ldr	r0, [fp, #4]
         ed18c:	e0800004 	add	r0, r0, r4
         ed190:	e2800001 	add	r0, r0, #1	; 0x1
         ed194:	e1a03008 	mov	r3, r8
         ed198:	e28d1024 	add	r1, sp, #36	; 0x24
         ed19c:	e3a02001 	mov	r2, #1	; 0x1
         ed1a0:	eb6be877 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         ed1a4:	e3a01000 	mov	r1, #0	; 0x0
         ed1a8:	e28d0024 	add	r0, sp, #36	; 0x24
         ed1ac:	e0800088 	add	r0, r0, r8, lsl #1
         ed1b0:	e5c01001 	strb	r1, [r0, #1]
         ed1b4:	e5c01000 	strb	r1, [r0]
         ed1b8:	e28d4014 	add	r4, sp, #20	; 0x14
         ed1bc:	e59d00a8 	ldr	r0, [sp, #168]
         ed1c0:	e59b1018 	ldr	r1, [fp, #24]
         ed1c4:	e2016040 	and	r6, r1, #64	; 0x40
         ed1c8:	e3300000 	teq	r0, #0	; 0x0
         ed1cc:	0a00001b 	beq	ed240 <_IntlNumberMunge__FPcPUsUcUlN24+0x254>
         ed1d0:	e3360000 	teq	r6, #0	; 0x0
         ed1d4:	0a000007 	beq	ed1f8 <_IntlNumberMunge__FPcPUsUcUlN24+0x20c>
         ed1d8:	e1a01004 	mov	r1, r4
         ed1dc:	e28f0f04 	add	r0, pc, #16	; 0x10
         ed1e0:	e3a03001 	mov	r3, #1	; 0x1
         ed1e4:	e3a02001 	mov	r2, #1	; 0x1
         ed1e8:	eb6be865 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         ed1ec:	e2844002 	add	r4, r4, #2	; 0x2
         ed1f0:	ea000012 	b	ed240 <_IntlNumberMunge__FPcPUsUcUlN24+0x254>
         ed1f4:	28000000 	stmcsda	r0, {}
         ed1f8:	e24dd004 	sub	sp, sp, #4	; 0x4
         ed1fc:	e597001c 	ldr	r0, [r7, #28]
         ed200:	e5900000 	ldr	r0, [r0]
         ed204:	e5900000 	ldr	r0, [r0]
         ed208:	eb6b53cf 	bl	1bc214c <$AllocateRefHandle(long)>
         ed20c:	e58d0000 	str	r0, [sp]
         ed210:	e1a0000d 	mov	r0, sp
         ed214:	eb6b57da 	bl	1bc3184 <$GetCString(RefVar const &)>
         ed218:	e1a09000 	mov	r9, r0
         ed21c:	e59d0000 	ldr	r0, [sp]
         ed220:	eb6b57e5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ed224:	e1a01009 	mov	r1, r9
         ed228:	e1a00004 	mov	r0, r4
         ed22c:	eb6c054a 	bl	1bee75c <$Ustrcpy>
         ed230:	e1a00009 	mov	r0, r9
         ed234:	eb6c0549 	bl	1bee760 <$Ustrlen>
         ed238:	e0844080 	add	r4, r4, r0, lsl #1
         ed23c:	e28dd004 	add	sp, sp, #4	; 0x4
         ed240:	e59b0018 	ldr	r0, [fp, #24]
         ed244:	e2109010 	ands	r9, r0, #16	; 0x10
         ed248:	0a000011 	beq	ed294 <_IntlNumberMunge__FPcPUsUcUlN24+0x2a8>
         ed24c:	e24dd004 	sub	sp, sp, #4	; 0x4
         ed250:	e5970024 	ldr	r0, [r7, #36]
         ed254:	e5900000 	ldr	r0, [r0]
         ed258:	e5900000 	ldr	r0, [r0]
         ed25c:	eb6b53ba 	bl	1bc214c <$AllocateRefHandle(long)>
         ed260:	e58d0000 	str	r0, [sp]
         ed264:	e1a0000d 	mov	r0, sp
         ed268:	eb6b57c5 	bl	1bc3184 <$GetCString(RefVar const &)>
         ed26c:	e1a0a000 	mov	sl, r0
         ed270:	e59d0000 	ldr	r0, [sp]
         ed274:	eb6b57d0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ed278:	e1a0100a 	mov	r1, sl
         ed27c:	e1a00004 	mov	r0, r4
         ed280:	eb6c0535 	bl	1bee75c <$Ustrcpy>
         ed284:	e1a0000a 	mov	r0, sl
         ed288:	eb6c0534 	bl	1bee760 <$Ustrlen>
         ed28c:	e0844080 	add	r4, r4, r0, lsl #1
         ed290:	e28dd004 	add	sp, sp, #4	; 0x4
         ed294:	e3a00000 	mov	r0, #0	; 0x0
         ed298:	e5c40001 	strb	r0, [r4, #1]
         ed29c:	e5c40000 	strb	r0, [r4]
         ed2a0:	e28d0014 	add	r0, sp, #20	; 0x14
         ed2a4:	eb6c052d 	bl	1bee760 <$Ustrlen>
         ed2a8:	e1a0a000 	mov	sl, r0
         ed2ac:	e28d4004 	add	r4, sp, #4	; 0x4
         ed2b0:	e3390000 	teq	r9, #0	; 0x0
         ed2b4:	0a000011 	beq	ed300 <_IntlNumberMunge__FPcPUsUcUlN24+0x314>
         ed2b8:	e24dd004 	sub	sp, sp, #4	; 0x4
         ed2bc:	e5970028 	ldr	r0, [r7, #40]
         ed2c0:	e5900000 	ldr	r0, [r0]
         ed2c4:	e5900000 	ldr	r0, [r0]
         ed2c8:	eb6b539f 	bl	1bc214c <$AllocateRefHandle(long)>
         ed2cc:	e58d0000 	str	r0, [sp]
         ed2d0:	e1a0000d 	mov	r0, sp
         ed2d4:	eb6b57aa 	bl	1bc3184 <$GetCString(RefVar const &)>
         ed2d8:	e1a09000 	mov	r9, r0
         ed2dc:	e59d0000 	ldr	r0, [sp]
         ed2e0:	eb6b57b5 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ed2e4:	e1a01009 	mov	r1, r9
         ed2e8:	e1a00004 	mov	r0, r4
         ed2ec:	eb6c051a 	bl	1bee75c <$Ustrcpy>
         ed2f0:	e1a00009 	mov	r0, r9
         ed2f4:	eb6c0519 	bl	1bee760 <$Ustrlen>
         ed2f8:	e0844080 	add	r4, r4, r0, lsl #1
         ed2fc:	e28dd004 	add	sp, sp, #4	; 0x4
         ed300:	e59b0018 	ldr	r0, [fp, #24]
         ed304:	e3100c01 	tst	r0, #256	; 0x100
         ed308:	0a000005 	beq	ed324 <_IntlNumberMunge__FPcPUsUcUlN24+0x338>
         ed30c:	e1a01004 	mov	r1, r4
         ed310:	e28f0f0f 	add	r0, pc, #60	; 0x3c
         ed314:	e3a03001 	mov	r3, #1	; 0x1
         ed318:	e3a02001 	mov	r2, #1	; 0x1
         ed31c:	eb6be818 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         ed320:	e2844002 	add	r4, r4, #2	; 0x2
         ed324:	e59d00a8 	ldr	r0, [sp, #168]
         ed328:	e3300000 	teq	r0, #0	; 0x0
         ed32c:	0a00001c 	beq	ed3a4 <_IntlNumberMunge__FPcPUsUcUlN24+0x3b8>
         ed330:	e3360000 	teq	r6, #0	; 0x0
         ed334:	0a000008 	beq	ed35c <_IntlNumberMunge__FPcPUsUcUlN24+0x370>
         ed338:	e1a01004 	mov	r1, r4
         ed33c:	e28f0f05 	add	r0, pc, #20	; 0x14
         ed340:	e3a03001 	mov	r3, #1	; 0x1
         ed344:	e3a02001 	mov	r2, #1	; 0x1
         ed348:	eb6be80d 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
         ed34c:	e2844002 	add	r4, r4, #2	; 0x2
         ed350:	ea000013 	b	ed3a4 <_IntlNumberMunge__FPcPUsUcUlN24+0x3b8>
         ed354:	25000000 	strcs	r0, [r0]
         ed358:	29000000 	stmcsdb	r0, {}
         ed35c:	e24dd004 	sub	sp, sp, #4	; 0x4
         ed360:	e5970020 	ldr	r0, [r7, #32]
         ed364:	e5900000 	ldr	r0, [r0]
         ed368:	e5900000 	ldr	r0, [r0]
         ed36c:	eb6b5376 	bl	1bc214c <$AllocateRefHandle(long)>
         ed370:	e58d0000 	str	r0, [sp]
         ed374:	e1a0000d 	mov	r0, sp
         ed378:	eb6b5781 	bl	1bc3184 <$GetCString(RefVar const &)>
         ed37c:	e1a06000 	mov	r6, r0
         ed380:	e59d0000 	ldr	r0, [sp]
         ed384:	eb6b578c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ed388:	e1a01006 	mov	r1, r6
         ed38c:	e1a00004 	mov	r0, r4
         ed390:	eb6c04f1 	bl	1bee75c <$Ustrcpy>
         ed394:	e1a00006 	mov	r0, r6
         ed398:	eb6c04f0 	bl	1bee760 <$Ustrlen>
         ed39c:	e0844080 	add	r4, r4, r0, lsl #1
         ed3a0:	e28dd004 	add	sp, sp, #4	; 0x4
         ed3a4:	e3a06000 	mov	r6, #0	; 0x0
         ed3a8:	e5c46001 	strb	r6, [r4, #1]
         ed3ac:	e5c46000 	strb	r6, [r4]
         ed3b0:	e28d0004 	add	r0, sp, #4	; 0x4
         ed3b4:	eb6c04e9 	bl	1bee760 <$Ustrlen>
         ed3b8:	e1a04000 	mov	r4, r0
         ed3bc:	e08a0005 	add	r0, sl, r5
         ed3c0:	e0800008 	add	r0, r0, r8
         ed3c4:	e0800004 	add	r0, r0, r4
         ed3c8:	e59b1014 	ldr	r1, [fp, #20]
         ed3cc:	e1500001 	cmp	r0, r1
         ed3d0:	83e00009 	mvnhi	r0, #9	; 0x9
         ed3d4:	8a00002d 	bhi	ed490 <_IntlNumberMunge__FPcPUsUcUlN24+0x4a4>
         ed3d8:	e33a0000 	teq	sl, #0	; 0x0
         ed3dc:	e59b9008 	ldr	r9, [fp, #8]
         ed3e0:	0a000003 	beq	ed3f4 <_IntlNumberMunge__FPcPUsUcUlN24+0x408>
         ed3e4:	e28d1014 	add	r1, sp, #20	; 0x14
         ed3e8:	e1a00009 	mov	r0, r9
         ed3ec:	eb6c04da 	bl	1bee75c <$Ustrcpy>
         ed3f0:	e089908a 	add	r9, r9, sl, lsl #1
         ed3f4:	e3350000 	teq	r5, #0	; 0x0
         ed3f8:	0a000003 	beq	ed40c <_IntlNumberMunge__FPcPUsUcUlN24+0x420>
         ed3fc:	e28d1064 	add	r1, sp, #100	; 0x64
         ed400:	e1a00009 	mov	r0, r9
         ed404:	eb6c04d4 	bl	1bee75c <$Ustrcpy>
         ed408:	e0899085 	add	r9, r9, r5, lsl #1
         ed40c:	e3380000 	teq	r8, #0	; 0x0
         ed410:	0a000015 	beq	ed46c <_IntlNumberMunge__FPcPUsUcUlN24+0x480>
         ed414:	e24dd004 	sub	sp, sp, #4	; 0x4
         ed418:	e5b70014 	ldr	r0, [r7, #20]!
         ed41c:	e5900000 	ldr	r0, [r0]
         ed420:	e5900000 	ldr	r0, [r0]
         ed424:	eb6b5348 	bl	1bc214c <$AllocateRefHandle(long)>
         ed428:	e58d0000 	str	r0, [sp]
         ed42c:	e1a0000d 	mov	r0, sp
         ed430:	eb6b5753 	bl	1bc3184 <$GetCString(RefVar const &)>
         ed434:	e1a05000 	mov	r5, r0
         ed438:	e59d0000 	ldr	r0, [sp]
         ed43c:	eb6b575e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
         ed440:	e1a01005 	mov	r1, r5
         ed444:	e1a00009 	mov	r0, r9
         ed448:	eb6c04c3 	bl	1bee75c <$Ustrcpy>
         ed44c:	e1a00005 	mov	r0, r5
         ed450:	eb6c04c2 	bl	1bee760 <$Ustrlen>
         ed454:	e0895080 	add	r5, r9, r0, lsl #1
         ed458:	e28d1028 	add	r1, sp, #40	; 0x28
         ed45c:	e1a00005 	mov	r0, r5
         ed460:	eb6c04bd 	bl	1bee75c <$Ustrcpy>
         ed464:	e0859088 	add	r9, r5, r8, lsl #1
         ed468:	e28dd004 	add	sp, sp, #4	; 0x4
         ed46c:	e3340000 	teq	r4, #0	; 0x0
         ed470:	0a000003 	beq	ed484 <_IntlNumberMunge__FPcPUsUcUlN24+0x498>
         ed474:	e28d1004 	add	r1, sp, #4	; 0x4
         ed478:	e1a00009 	mov	r0, r9
         ed47c:	eb6c04b6 	bl	1bee75c <$Ustrcpy>
         ed480:	e0899084 	add	r9, r9, r4, lsl #1
         ed484:	e5c96001 	strb	r6, [r9, #1]
         ed488:	e5c96000 	strb	r6, [r9]
         ed48c:	e59d00a4 	ldr	r0, [sp, #164]
         ed490:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: __eq__FRC21SFlashChipInformationT1
 * Address: 0013bfe8
 */
void globals::() {
    /*
        13bfe8:	e5903000 	ldr	r3, [r0]
        13bfec:	e5912000 	ldr	r2, [r1]
        13bff0:	e1330002 	teq	r3, r2
        13bff4:	05903004 	ldreq	r3, [r0, #4]
        13bff8:	05912004 	ldreq	r2, [r1, #4]
        13bffc:	01330002 	teqeq	r3, r2
        13c000:	05903008 	ldreq	r3, [r0, #8]
        13c004:	05912008 	ldreq	r2, [r1, #8]
        13c008:	01330002 	teqeq	r3, r2
        13c00c:	0590200c 	ldreq	r2, [r0, #12]
        13c010:	0591300c 	ldreq	r3, [r1, #12]
        13c014:	01320003 	teqeq	r2, r3
        13c018:	05903010 	ldreq	r3, [r0, #16]
        13c01c:	05912010 	ldreq	r2, [r1, #16]
        13c020:	01330002 	teqeq	r3, r2
        13c024:	05900014 	ldreq	r0, [r0, #20]
        13c028:	05911014 	ldreq	r1, [r1, #20]
        13c02c:	01300001 	teqeq	r0, r1
        13c030:	13a00000 	movne	r0, #0	; 0x0
        13c034:	03a00001 	moveq	r0, #1	; 0x1
        13c038:	e20000ff 	and	r0, r0, #255	; 0xff
        13c03c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: __nw__8TxObjectSFUi
 * Address: 00143738
 */
void globals::() {
    /*
        143738:	e1a0c00d 	mov	ip, sp
        14373c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        143740:	e24cb004 	sub	fp, ip, #4	; 0x4
        143744:	eb6a7a7e 	bl	1be2144 <$NewPtrClear>
        143748:	e1b04000 	movs	r4, r0
        14374c:	1a000005 	bne	143768 <__nw__8TxObjectSFUi+0x30>
        143750:	e59f0018 	ldr	r0, [pc, #18]	; 143770 <__nw__8TxObjectSFUi+0x38>
        143754:	e5900000 	ldr	r0, [r0]
        143758:	e3a02000 	mov	r2, #0	; 0x0
        14375c:	e3a010e9 	mov	r1, #233	; 0xe9
        143760:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        143764:	eb6a7e8c 	bl	1be319c <$Throw>
        143768:	e1a00004 	mov	r0, r4
        14376c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        143770:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: __dl__8TxObjectSFPv
 * Address: 00143774
 */
void globals::() {
    /*
        143774:	ea6a764e 	b	1be10b4 <$DisposPtr>
    */
}

/**
 * Symbol: __eq__FRC16TROMREXCheckSumsT1
 * Address: 001a7150
 */
void globals::() {
    /*
        1a7150:	e92d4030 	stmdb	sp!, {r4, r5, lr}
        1a7154:	e5902000 	ldr	r2, [r0]
        1a7158:	e3a0e000 	mov	lr, #0	; 0x0
        1a715c:	e5913000 	ldr	r3, [r1]
        1a7160:	e1320003 	teq	r2, r3
        1a7164:	05902004 	ldreq	r2, [r0, #4]
        1a7168:	05913004 	ldreq	r3, [r1, #4]
        1a716c:	01320003 	teqeq	r2, r3
        1a7170:	1a000009 	bne	1a719c <__eq__FRC16TROMREXCheckSumsT1+0x4c>
        1a7174:	e3a02000 	mov	r2, #0	; 0x0
        1a7178:	e0803182 	add	r3, r0, r2, lsl #3
        1a717c:	e081c182 	add	ip, r1, r2, lsl #3
        1a7180:	e5b34008 	ldr	r4, [r3, #8]!
        1a7184:	e5bc5008 	ldr	r5, [ip, #8]!
        1a7188:	e1340005 	teq	r4, r5
        1a718c:	05933004 	ldreq	r3, [r3, #4]
        1a7190:	059cc004 	ldreq	ip, [ip, #4]
        1a7194:	0133000c 	teqeq	r3, ip
        1a7198:	0a000001 	beq	1a71a4 <__eq__FRC16TROMREXCheckSumsT1+0x54>
        1a719c:	e1a0000e 	mov	r0, lr
        1a71a0:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
        1a71a4:	e2822001 	add	r2, r2, #1	; 0x1
        1a71a8:	e3520004 	cmp	r2, #4	; 0x4
        1a71ac:	bafffff1 	blt	1a7178 <__eq__FRC16TROMREXCheckSumsT1+0x28>
        1a71b0:	e3a00001 	mov	r0, #1	; 0x1
        1a71b4:	e8bd8030 	ldmia	sp!, {r4, r5, pc}
    */
}

/**
 * Symbol: __nw__9TWordListSFUi
 * Address: 0022edb0
 */
void globals::() {
    /*
        22edb0:	e59f1024 	ldr	r1, [pc, #24]	; 22eddc <__nw__9TWordListSFUi+0x2c>
        22edb4:	e3a02000 	mov	r2, #0	; 0x0
        22edb8:	e5913044 	ldr	r3, [r1, #68]
        22edbc:	e3330000 	teq	r3, #0	; 0x0
        22edc0:	01a00001 	moveq	r0, r1
        22edc4:	01a0f00e 	moveq	pc, lr
        22edc8:	e2811048 	add	r1, r1, #72	; 0x48
        22edcc:	e2822001 	add	r2, r2, #1	; 0x1
        22edd0:	e352000c 	cmp	r2, #12	; 0xc
        22edd4:	bafffff7 	blt	22edb8 <__nw__9TWordListSFUi+0x8>
        22edd8:	ea667e56 	b	1bce738 <$__nw(unsigned int)>
        22eddc:	0c107030 	ldceq	0, cr7, [r0], -#192
    */
}

/**
 * Symbol: __dl__9TWordListSFPvUi
 * Address: 0022ede0
 */
void globals::() {
    /*
        22ede0:	e3a01000 	mov	r1, #0	; 0x0
        22ede4:	e5801044 	str	r1, [r0, #68]
        22ede8:	e59f1014 	ldr	r1, [pc, #14]	; 22ee04 <__dl__9TWordListSFPvUi+0x24>
        22edec:	e1510000 	cmp	r1, r0
        22edf0:	8a000002 	bhi	22ee00 <__dl__9TWordListSFPvUi+0x20>
        22edf4:	e2811e36 	add	r1, r1, #864	; 0x360
        22edf8:	e1510000 	cmp	r1, r0
        22edfc:	81a0f00e 	movhi	pc, lr
        22ee00:	ea667a36 	b	1bcd6e0 <$__dl(void *)>
        22ee04:	0c107030 	ldceq	0, cr7, [r0], -#192
    */
}

/**
 * Symbol: __GetErrNo(void)
 * Address: 0025bba0
 */
__GetErrNo(void) {
    /*
        25bba0:	e1a0c00d 	mov	ip, sp
        25bba4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        25bba8:	e24cb004 	sub	fp, ip, #4	; 0x4
        25bbac:	eb04e217 	bl	394410 <IsSuperMode>
        25bbb0:	e3300000 	teq	r0, #0	; 0x0
        25bbb4:	159f0010 	ldrne	r0, [pc, #10]	; 25bbcc <__GetErrNo(void)+0x2c>
        25bbb8:	191ba800 	ldmnedb	fp, {fp, sp, pc}
        25bbbc:	e59f000c 	ldr	r0, [pc, #c]	; 25bbd0 <__GetErrNo(void)+0x30>
        25bbc0:	e5900000 	ldr	r0, [r0]
        25bbc4:	e2400024 	sub	r0, r0, #36	; 0x24
        25bbc8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        25bbcc:	0c104f44 	ldceq	15, cr4, [r0], -#272
        25bbd0:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: __vec_new__FPviT2T1
 * Address: 002ba230
 */
void globals::() {
    /*
        2ba230:	e1a0c00d 	mov	ip, sp
        2ba234:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        2ba238:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ba23c:	e1a04001 	mov	r4, r1
        2ba240:	e1a05002 	mov	r5, r2
        2ba244:	e1a06003 	mov	r6, r3
        2ba248:	e3300000 	teq	r0, #0	; 0x0
        2ba24c:	1a000005 	bne	2ba268 <__vec_new__FPviT2T1+0x38>
        2ba250:	e0000495 	mul	r0, r5, r4
        2ba254:	eb647243 	bl	1bd6b68 <$malloc>
        2ba258:	e1b08000 	movs	r8, r0
        2ba25c:	03a00000 	moveq	r0, #0	; 0x0
        2ba260:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2ba264:	ea000000 	b	2ba26c <__vec_new__FPviT2T1+0x3c>
        2ba268:	e1a08000 	mov	r8, r0
        2ba26c:	e1a07008 	mov	r7, r8
        2ba270:	e3a09000 	mov	r9, #0	; 0x0
        2ba274:	e3540000 	cmp	r4, #0	; 0x0
        2ba278:	da000006 	ble	2ba298 <__vec_new__FPviT2T1+0x68>
        2ba27c:	e1a00007 	mov	r0, r7
        2ba280:	e1a0e00f 	mov	lr, pc
        2ba284:	e1a0f006 	mov	pc, r6
        2ba288:	e0877005 	add	r7, r7, r5
        2ba28c:	e2899001 	add	r9, r9, #1	; 0x1
        2ba290:	e1590004 	cmp	r9, r4
        2ba294:	bafffff8 	blt	2ba27c <__vec_new__FPviT2T1+0x4c>
        2ba298:	e1a00008 	mov	r0, r8
        2ba29c:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: __vec_delete__FPviT2T1N22
 * Address: 002ba2a0
 */
void globals::() {
    /*
        2ba2a0:	e1a0c00d 	mov	ip, sp
        2ba2a4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        2ba2a8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2ba2ac:	e1a07000 	mov	r7, r0
        2ba2b0:	e1a04001 	mov	r4, r1
        2ba2b4:	e1a05002 	mov	r5, r2
        2ba2b8:	e1a06003 	mov	r6, r3
        2ba2bc:	e1b09000 	movs	r9, r0
        2ba2c0:	e59ba004 	ldr	sl, [fp, #4]
        2ba2c4:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2ba2c8:	e3740001 	cmn	r4, #1	; 0x1
        2ba2cc:	1a000005 	bne	2ba2e8 <__vec_delete__FPviT2T1N22+0x48>
        2ba2d0:	e1a00007 	mov	r0, r7
        2ba2d4:	eb649b87 	bl	1be10f8 <$GetPtrSize>
        2ba2d8:	e1a01000 	mov	r1, r0
        2ba2dc:	e1a00005 	mov	r0, r5
        2ba2e0:	eb63e196 	bl	1bb2940 <$__rt_sdiv>
        2ba2e4:	e1a04000 	mov	r4, r0
        2ba2e8:	e2440001 	sub	r0, r4, #1	; 0x1
        2ba2ec:	e0277095 	mla	r7, r5, r0, r7
        2ba2f0:	e3a08000 	mov	r8, #0	; 0x0
        2ba2f4:	e3540000 	cmp	r4, #0	; 0x0
        2ba2f8:	da000007 	ble	2ba31c <__vec_delete__FPviT2T1N22+0x7c>
        2ba2fc:	e1a00007 	mov	r0, r7
        2ba300:	e3a01000 	mov	r1, #0	; 0x0
        2ba304:	e1a0e00f 	mov	lr, pc
        2ba308:	e1a0f006 	mov	pc, r6
        2ba30c:	e0477005 	sub	r7, r7, r5
        2ba310:	e2888001 	add	r8, r8, #1	; 0x1
        2ba314:	e1580004 	cmp	r8, r4
        2ba318:	bafffff7 	blt	2ba2fc <__vec_delete__FPviT2T1N22+0x5c>
        2ba31c:	e33a0000 	teq	sl, #0	; 0x0
        2ba320:	11a00009 	movne	r0, r9
        2ba324:	191b6ff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
        2ba328:	1a64618a 	bne	1bd2958 <$free>
        2ba32c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: __pure_virtual_called
 * Address: 002ba330
 */
void globals::() {
    /*
        2ba330:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: __fpclassifyd
 * Address: 002bee04
 */
void globals::() {
    /*
        2bee04:	e92d0003 	stmdb	sp!, {r0, r1}
        2bee08:	ecbd8102 	ldfd	f0, [sp], #8
        2bee0c:	ed2d8102 	stfd	f0, [sp, -#8]!
        2bee10:	e59d0000 	ldr	r0, [sp]
        2bee14:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
        2bee18:	e3c0080f 	bic	r0, r0, #983040	; 0xf0000
        2bee1c:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        2bee20:	e3c000ff 	bic	r0, r0, #255	; 0xff
        2bee24:	e280c481 	add	ip, r0, #-2130706432	; 0x81000000
        2bee28:	e33c060f 	teq	ip, #15728640	; 0xf00000
        2bee2c:	1a000006 	bne	2bee4c <__fpclassifyd+0x48>
        2bee30:	e59d0000 	ldr	r0, [sp]
        2bee34:	e1b00600 	movs	r0, r0, lsl #12
        2bee38:	059d0004 	ldreq	r0, [sp, #4]
        2bee3c:	03300000 	teqeq	r0, #0	; 0x0
        2bee40:	13a00000 	movne	r0, #0	; 0x0
        2bee44:	03a00001 	moveq	r0, #1	; 0x1
        2bee48:	ea000008 	b	2bee70 <__fpclassifyd+0x6c>
        2bee4c:	e3300000 	teq	r0, #0	; 0x0
        2bee50:	13a00003 	movne	r0, #3	; 0x3
        2bee54:	1a000005 	bne	2bee70 <__fpclassifyd+0x6c>
        2bee58:	e59d0000 	ldr	r0, [sp]
        2bee5c:	e1b00600 	movs	r0, r0, lsl #12
        2bee60:	059d0004 	ldreq	r0, [sp, #4]
        2bee64:	03300000 	teqeq	r0, #0	; 0x0
        2bee68:	13a00004 	movne	r0, #4	; 0x4
        2bee6c:	03a00002 	moveq	r0, #2	; 0x2
        2bee70:	e28dd008 	add	sp, sp, #8	; 0x8
        2bee74:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _ctype_init
 * Address: 002cdc0c
 */
void globals::_ctype_init() {
    /*
        2cdc0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _OSErr(long)
 * Address: 002dc714
 */
_OSErr(long) {
    /*
        2dc714:	e1a01000 	mov	r1, r0
        2dc718:	e59f0008 	ldr	r0, [pc, #8]	; 2dc728 <_OSErr(long)+0x14>
        2dc71c:	e5900000 	ldr	r0, [r0]
        2dc720:	e3a02000 	mov	r2, #0	; 0x0
        2dc724:	ea641a9c 	b	1be319c <$Throw>
        2dc728:	003712fc 	ldreqsh	r1, [r7], -ip
    */
}

/**
 * Symbol: __isnanf
 * Address: 002e2d68
 */
void globals::() {
    /*
        2e2d68:	e1a0c00d 	mov	ip, sp
        2e2d6c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2e2d70:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e2d74:	e92d0003 	stmdb	sp!, {r0, r1}
        2e2d78:	ecbd8102 	ldfd	f0, [sp], #8
        2e2d7c:	ee008100 	mvfs	f0, f0
        2e2d80:	ed2d8102 	stfd	f0, [sp, -#8]!
        2e2d84:	e8bd0003 	ldmia	sp!, {r0, r1}
        2e2d88:	eb648114 	bl	1c031e0 <$__fpclassifyd>
        2e2d8c:	e3300000 	teq	r0, #0	; 0x0
        2e2d90:	13a00000 	movne	r0, #0	; 0x0
        2e2d94:	03a00001 	moveq	r0, #1	; 0x1
        2e2d98:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: __inf
 * Address: 002e2d9c
 */
void globals::() {
    /*
        2e2d9c:	e24dd008 	sub	sp, sp, #8	; 0x8
        2e2da0:	e59f000c 	ldr	r0, [pc, #c]	; 2e2db4 <__inf+0x18>
        2e2da4:	e8901008 	ldmia	r0, {r3, ip}
        2e2da8:	e88d1008 	stmia	sp, {r3, ip}
        2e2dac:	ecbd8102 	ldfd	f0, [sp], #8
        2e2db0:	e1a0f00e 	mov	pc, lr
        2e2db4:	003807a0 	eoreqs	r0, r8, r0, lsr #15
    */
}

/**
 * Symbol: __isnormald
 * Address: 002e2ea4
 */
void globals::() {
    /*
        2e2ea4:	e1a0c00d 	mov	ip, sp
        2e2ea8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2e2eac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e2eb0:	e92d0003 	stmdb	sp!, {r0, r1}
        2e2eb4:	ecbd8102 	ldfd	f0, [sp], #8
        2e2eb8:	ed2d8102 	stfd	f0, [sp, -#8]!
        2e2ebc:	e8bd0003 	ldmia	sp!, {r0, r1}
        2e2ec0:	eb6480c6 	bl	1c031e0 <$__fpclassifyd>
        2e2ec4:	e3300003 	teq	r0, #3	; 0x3
        2e2ec8:	13a00000 	movne	r0, #0	; 0x0
        2e2ecc:	03a00001 	moveq	r0, #1	; 0x1
        2e2ed0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: __isfinited
 * Address: 002e2ed4
 */
void globals::() {
    /*
        2e2ed4:	e1a0c00d 	mov	ip, sp
        2e2ed8:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2e2edc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e2ee0:	e92d0003 	stmdb	sp!, {r0, r1}
        2e2ee4:	ecbd8102 	ldfd	f0, [sp], #8
        2e2ee8:	ed2d8102 	stfd	f0, [sp, -#8]!
        2e2eec:	e8bd0003 	ldmia	sp!, {r0, r1}
        2e2ef0:	eb6480ba 	bl	1c031e0 <$__fpclassifyd>
        2e2ef4:	e3500002 	cmp	r0, #2	; 0x2
        2e2ef8:	b3a00000 	movlt	r0, #0	; 0x0
        2e2efc:	a3a00001 	movge	r0, #1	; 0x1
        2e2f00:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: __isnand
 * Address: 002e2f04
 */
void globals::() {
    /*
        2e2f04:	e1a0c00d 	mov	ip, sp
        2e2f08:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2e2f0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2e2f10:	e92d0003 	stmdb	sp!, {r0, r1}
        2e2f14:	ecbd8102 	ldfd	f0, [sp], #8
        2e2f18:	ed2d8102 	stfd	f0, [sp, -#8]!
        2e2f1c:	e8bd0003 	ldmia	sp!, {r0, r1}
        2e2f20:	eb6480ae 	bl	1c031e0 <$__fpclassifyd>
        2e2f24:	e3300000 	teq	r0, #0	; 0x0
        2e2f28:	13a00000 	movne	r0, #0	; 0x0
        2e2f2c:	03a00001 	moveq	r0, #1	; 0x1
        2e2f30:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: __nw_v__FPvUiT2PFPv_v
 * Address: 00318f2c
 */
void globals::() {
    /*
        318f2c:	e1a0c00d 	mov	ip, sp
        318f30:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        318f34:	e24cb004 	sub	fp, ip, #4	; 0x4
        318f38:	e1b04000 	movs	r4, r0
        318f3c:	e1a05001 	mov	r5, r1
        318f40:	e1a07002 	mov	r7, r2
        318f44:	e1a06003 	mov	r6, r3
        318f48:	1a000003 	bne	318f5c <__nw_v__FPvUiT2PFPv_v+0x30>
        318f4c:	e0000597 	mul	r0, r7, r5
        318f50:	e2800004 	add	r0, r0, #4	; 0x4
        318f54:	eb62d5f7 	bl	1bce738 <$__nw(unsigned int)>
        318f58:	e1a04000 	mov	r4, r0
        318f5c:	e3340000 	teq	r4, #0	; 0x0
        318f60:	12848004 	addne	r8, r4, #4	; 0x4
        318f64:	15845000 	strne	r5, [r4]
        318f68:	11a04008 	movne	r4, r8
        318f6c:	13360000 	teqne	r6, #0	; 0x0
        318f70:	0a00000b 	beq	318fa4 <__nw_v__FPvUiT2PFPv_v+0x78>
        318f74:	e1a00005 	mov	r0, r5
        318f78:	e2455001 	sub	r5, r5, #1	; 0x1
        318f7c:	e3500000 	cmp	r0, #0	; 0x0
        318f80:	9a000007 	bls	318fa4 <__nw_v__FPvUiT2PFPv_v+0x78>
        318f84:	e1a00008 	mov	r0, r8
        318f88:	e1a0e00f 	mov	lr, pc
        318f8c:	e1a0f006 	mov	pc, r6
        318f90:	e0888007 	add	r8, r8, r7
        318f94:	e1a00005 	mov	r0, r5
        318f98:	e2455001 	sub	r5, r5, #1	; 0x1
        318f9c:	e3500000 	cmp	r0, #0	; 0x0
        318fa0:	8afffff7 	bhi	318f84 <__nw_v__FPvUiT2PFPv_v+0x58>
        318fa4:	e1a00004 	mov	r0, r4
        318fa8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: __dl_v(void *, unsigned int, void (*)(void *, int))
 * Address: 00318fac
 */
__dl_v(void *, unsigned int, void (*)(void *, int)) {
    /*
        318fac:	e3300000 	teq	r0, #0	; 0x0
        318fb0:	01a0f00e 	moveq	pc, lr
        318fb4:	e1a0c00d 	mov	ip, sp
        318fb8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        318fbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        318fc0:	e1a05001 	mov	r5, r1
        318fc4:	e1b04002 	movs	r4, r2
        318fc8:	e2408004 	sub	r8, r0, #4	; 0x4
        318fcc:	0a00000d 	beq	319008 <__dl_v(void *, unsigned int, void (*)(void *, int))+0x5c>
        318fd0:	e5981000 	ldr	r1, [r8]
        318fd4:	e0260195 	mla	r6, r5, r1, r0
        318fd8:	e2417001 	sub	r7, r1, #1	; 0x1
        318fdc:	e3510000 	cmp	r1, #0	; 0x0
        318fe0:	9a000008 	bls	319008 <__dl_v(void *, unsigned int, void (*)(void *, int))+0x5c>
        318fe4:	e0460005 	sub	r0, r6, r5
        318fe8:	e1a06000 	mov	r6, r0
        318fec:	e3a01000 	mov	r1, #0	; 0x0
        318ff0:	e1a0e00f 	mov	lr, pc
        318ff4:	e1a0f004 	mov	pc, r4
        318ff8:	e1a00007 	mov	r0, r7
        318ffc:	e2477001 	sub	r7, r7, #1	; 0x1
        319000:	e3500000 	cmp	r0, #0	; 0x0
        319004:	8afffff6 	bhi	318fe4 <__dl_v(void *, unsigned int, void (*)(void *, int))+0x38>
        319008:	e1a00008 	mov	r0, r8
        31900c:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        319010:	ea62d1b2 	b	1bcd6e0 <$__dl(void *)>
    */
}

/**
 * Symbol: __rt_lib_shutdown
 * Address: 00319014
 */
void globals::() {
    /*
        319014:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _sys_initio
 * Address: 003190c4
 */
void globals::_sys_initio() {
    /*
        3190c4:	e59f0018 	ldr	r0, [pc, #18]	; 3190e4 <_sys_initio+0x20>
        3190c8:	e5900000 	ldr	r0, [r0]
        3190cc:	e3100c02 	tst	r0, #512	; 0x200
        3190d0:	13a01000 	movne	r1, #0	; 0x0
        3190d4:	03a01001 	moveq	r1, #1	; 0x1
        3190d8:	e59f0008 	ldr	r0, [pc, #8]	; 3190e8 <_sys_initio+0x24>
        3190dc:	e5a01004 	str	r1, [r0, #4]!
        3190e0:	e1a0f00e 	mov	pc, lr
        3190e4:	000013fc 	streqd	r1, [r0], -ip
        3190e8:	0c105538 	ldceq	5, cr5, [r0], -#224
    */
}

/**
 * Symbol: _sys_open
 * Address: 003190ec
 */
void globals::_sys_open() {
    /*
        3190ec:	e1a0c00d 	mov	ip, sp
        3190f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        3190f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3190f8:	e1a05000 	mov	r5, r0
        3190fc:	e1a04001 	mov	r4, r1
        319100:	ebffffca 	bl	319030 <StdioOff(void)+0x18>
        319104:	e3300000 	teq	r0, #0	; 0x0
        319108:	0a000005 	beq	319124 <_sys_open+0x38>
        31910c:	e52d4004 	str	r4, [sp, -#4]!
        319110:	e52d5004 	str	r5, [sp, -#4]!
        319114:	e1a0100d 	mov	r1, sp
        319118:	e3a00010 	mov	r0, #16	; 0x10
        31911c:	eb62660f 	bl	1bb2960 <$TapFileCntl>
        319120:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        319124:	e3340000 	teq	r4, #0	; 0x0
        319128:	13a00001 	movne	r0, #1	; 0x1
        31912c:	03e00000 	mvneq	r0, #0	; 0x0
        319130:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: _sys_close
 * Address: 00319134
 */
void globals::_sys_close() {
    /*
        319134:	e1a0c00d 	mov	ip, sp
        319138:	e92dd801 	stmdb	sp!, {r0, fp, ip, lr, pc}
        31913c:	e24cb004 	sub	fp, ip, #4	; 0x4
        319140:	ebffffba 	bl	319030 <StdioOff(void)+0x18>
        319144:	e3300000 	teq	r0, #0	; 0x0
        319148:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        31914c:	e24b1010 	sub	r1, fp, #16	; 0x10
        319150:	e3a00011 	mov	r0, #17	; 0x11
        319154:	eb626601 	bl	1bb2960 <$TapFileCntl>
        319158:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: _sys_istty
 * Address: 0031915c
 */
void globals::_sys_istty() {
    /*
        31915c:	e1a0c00d 	mov	ip, sp
        319160:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        319164:	e24cb004 	sub	fp, ip, #4	; 0x4
        319168:	e1a04000 	mov	r4, r0
        31916c:	ebffffaf 	bl	319030 <StdioOff(void)+0x18>
        319170:	e3300000 	teq	r0, #0	; 0x0
        319174:	0a000006 	beq	319194 <_sys_istty+0x38>
        319178:	e5940014 	ldr	r0, [r4, #20]
        31917c:	ebffffbc 	bl	319074 <StdioOff(void)+0x5c>
        319180:	e3300000 	teq	r0, #0	; 0x0
        319184:	02841014 	addeq	r1, r4, #20	; 0x14
        319188:	03a00012 	moveq	r0, #18	; 0x12
        31918c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
        319190:	0a6265f2 	beq	1bb2960 <$TapFileCntl>
        319194:	e3a00000 	mov	r0, #0	; 0x0
        319198:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: _sys_read
 * Address: 0031919c
 */
void globals::_sys_read() {
    /*
        31919c:	e1a0c00d 	mov	ip, sp
        3191a0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        3191a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3191a8:	e1a07000 	mov	r7, r0
        3191ac:	e1a04001 	mov	r4, r1
        3191b0:	e1a05002 	mov	r5, r2
        3191b4:	e1a06003 	mov	r6, r3
        3191b8:	ebffff9c 	bl	319030 <StdioOff(void)+0x18>
        3191bc:	e3300000 	teq	r0, #0	; 0x0
        3191c0:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        3191c4:	e92d0070 	stmdb	sp!, {r4, r5, r6}
        3191c8:	e52d7004 	str	r7, [sp, -#4]!
        3191cc:	e1a00004 	mov	r0, r4
        3191d0:	e0841005 	add	r1, r4, r5
        3191d4:	e1540001 	cmp	r4, r1
        3191d8:	2a000004 	bcs	3191f0 <_sys_read+0x54>
        3191dc:	e5d02000 	ldrb	r2, [r0]
        3191e0:	e5c02000 	strb	r2, [r0]
        3191e4:	e2800b01 	add	r0, r0, #1024	; 0x400
        3191e8:	e1500001 	cmp	r0, r1
        3191ec:	3afffffa 	bcc	3191dc <_sys_read+0x40>
        3191f0:	e1a0100d 	mov	r1, sp
        3191f4:	e3a00013 	mov	r0, #19	; 0x13
        3191f8:	eb6265d8 	bl	1bb2960 <$TapFileCntl>
        3191fc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: _sys_write
 * Address: 00319200
 */
void globals::_sys_write() {
    /*
        319200:	e1a0c00d 	mov	ip, sp
        319204:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        319208:	e24cb004 	sub	fp, ip, #4	; 0x4
        31920c:	e1a06000 	mov	r6, r0
        319210:	e1a04001 	mov	r4, r1
        319214:	e1a05002 	mov	r5, r2
        319218:	e1a07003 	mov	r7, r3
        31921c:	ebffff83 	bl	319030 <StdioOff(void)+0x18>
        319220:	e3300000 	teq	r0, #0	; 0x0
        319224:	0a000017 	beq	319288 <_sys_write+0x88>
        319228:	e59f0050 	ldr	r0, [pc, #50]	; 319280 <_sys_write+0x80>
        31922c:	e5900000 	ldr	r0, [r0]
        319230:	e3100902 	tst	r0, #32768	; 0x8000
        319234:	059f0048 	ldreq	r0, [pc, #48]	; 319284 <_sys_write+0x84>
        319238:	05900014 	ldreq	r0, [r0, #20]
        31923c:	01300006 	teqeq	r0, r6
        319240:	0a000010 	beq	319288 <_sys_write+0x88>
        319244:	e92d00b0 	stmdb	sp!, {r4, r5, r7}
        319248:	e52d6004 	str	r6, [sp, -#4]!
        31924c:	e1a00004 	mov	r0, r4
        319250:	e0841005 	add	r1, r4, r5
        319254:	e1540001 	cmp	r4, r1
        319258:	2a000004 	bcs	319270 <_sys_write+0x70>
        31925c:	e1a02000 	mov	r2, r0
        319260:	e2800001 	add	r0, r0, #1	; 0x1
        319264:	e5d22000 	ldrb	r2, [r2]
        319268:	e1500001 	cmp	r0, r1
        31926c:	3afffffa 	bcc	31925c <_sys_write+0x5c>
        319270:	e1a0100d 	mov	r1, sp
        319274:	e3a00014 	mov	r0, #20	; 0x14
        319278:	eb6265b8 	bl	1bb2960 <$TapFileCntl>
        31927c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        319280:	000013fc 	streqd	r1, [r0], -ip
        319284:	0c105744 	ldceq	7, cr5, [r0], -#272
        319288:	e3a00000 	mov	r0, #0	; 0x0
        31928c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: __rt_exit
 * Address: 00319290
 */
void globals::() {
    /*
        319290:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _sys_seek
 * Address: 00319294
 */
void globals::_sys_seek() {
    /*
        319294:	e1a0c00d 	mov	ip, sp
        319298:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31929c:	e24cb004 	sub	fp, ip, #4	; 0x4
        3192a0:	e1a04000 	mov	r4, r0
        3192a4:	e1a05001 	mov	r5, r1
        3192a8:	ebffff71 	bl	319074 <StdioOff(void)+0x5c>
        3192ac:	e3300000 	teq	r0, #0	; 0x0
        3192b0:	1a000007 	bne	3192d4 <_sys_seek+0x40>
        3192b4:	ebffff5d 	bl	319030 <StdioOff(void)+0x18>
        3192b8:	e3300000 	teq	r0, #0	; 0x0
        3192bc:	0a000004 	beq	3192d4 <_sys_seek+0x40>
        3192c0:	e92d0030 	stmdb	sp!, {r4, r5}
        3192c4:	e1a0100d 	mov	r1, sp
        3192c8:	e3a00016 	mov	r0, #22	; 0x16
        3192cc:	eb6265a3 	bl	1bb2960 <$TapFileCntl>
        3192d0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        3192d4:	e3e00000 	mvn	r0, #0	; 0x0
        3192d8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: _sys_flen
 * Address: 003192dc
 */
void globals::_sys_flen() {
    /*
        3192dc:	e1a0c00d 	mov	ip, sp
        3192e0:	e92dd801 	stmdb	sp!, {r0, fp, ip, lr, pc}
        3192e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        3192e8:	e51b0010 	ldr	r0, [fp, -#16]
        3192ec:	ebffff60 	bl	319074 <StdioOff(void)+0x5c>
        3192f0:	e3300000 	teq	r0, #0	; 0x0
        3192f4:	1a000006 	bne	319314 <_sys_flen+0x38>
        3192f8:	ebffff4c 	bl	319030 <StdioOff(void)+0x18>
        3192fc:	e3300000 	teq	r0, #0	; 0x0
        319300:	0a000003 	beq	319314 <_sys_flen+0x38>
        319304:	e24b1010 	sub	r1, fp, #16	; 0x10
        319308:	e3a00017 	mov	r0, #23	; 0x17
        31930c:	eb626593 	bl	1bb2960 <$TapFileCntl>
        319310:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        319314:	e3e00000 	mvn	r0, #0	; 0x0
        319318:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: _sys_iserror
 * Address: 0031931c
 */
void globals::_sys_iserror() {
    /*
        31931c:	e2100101 	ands	r0, r0, #1073741824	; 0x40000000
        319320:	13a00001 	movne	r0, #1	; 0x1
        319324:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _ttywrch
 * Address: 00319328
 */
void globals::_ttywrch() {
    /*
        319328:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _sys_tmpnam
 * Address: 003193a0
 */
void globals::_sys_tmpnam() {
    /*
        3193a0:	e1a00001 	mov	r0, r1
        3193a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _sys_alloc
 * Address: 003193a8
 */
void globals::_sys_alloc() {
    /*
        3193a8:	ea62f5ee 	b	1bd6b68 <$malloc>
    */
}

/**
 * Symbol: _RINTError(long)
 * Address: 0031cf3c
 */
_RINTError(long) {
    /*
        31cf3c:	e1a0c00d 	mov	ip, sp
        31cf40:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        31cf44:	e24cb004 	sub	fp, ip, #4	; 0x4
        31cf48:	e24dd004 	sub	sp, sp, #4	; 0x4
        31cf4c:	eb62947e 	bl	1bc214c <$AllocateRefHandle(long)>
        31cf50:	e58d0000 	str	r0, [sp]
        31cf54:	e1a0100d 	mov	r1, sp
        31cf58:	e3a000ea 	mov	r0, #234	; 0xea
        31cf5c:	e2400cbe 	sub	r0, r0, #48640	; 0xbe00
        31cf60:	eb63ad3d 	bl	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        31cf64:	e59d0000 	ldr	r0, [sp]
        31cf68:	eb629893 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31cf6c:	e3a00000 	mov	r0, #0	; 0x0
        31cf70:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: _RPTRError(long)
 * Address: 0031d3f8
 */
_RPTRError(long) {
    /*
        31d3f8:	e1a0c00d 	mov	ip, sp
        31d3fc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        31d400:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d404:	e24dd004 	sub	sp, sp, #4	; 0x4
        31d408:	eb62934f 	bl	1bc214c <$AllocateRefHandle(long)>
        31d40c:	e58d0000 	str	r0, [sp]
        31d410:	e1a0100d 	mov	r1, sp
        31d414:	e3a000ed 	mov	r0, #237	; 0xed
        31d418:	e2400cbe 	sub	r0, r0, #48640	; 0xbe00
        31d41c:	eb63ac0e 	bl	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        31d420:	e59d0000 	ldr	r0, [sp]
        31d424:	eb629764 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31d428:	e3a00000 	mov	r0, #0	; 0x0
        31d42c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: _RCHARError(long)
 * Address: 0031d8c8
 */
_RCHARError(long) {
    /*
        31d8c8:	e1a0c00d 	mov	ip, sp
        31d8cc:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        31d8d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        31d8d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        31d8d8:	eb62921b 	bl	1bc214c <$AllocateRefHandle(long)>
        31d8dc:	e58d0000 	str	r0, [sp]
        31d8e0:	e1a0100d 	mov	r1, sp
        31d8e4:	e3a000e9 	mov	r0, #233	; 0xe9
        31d8e8:	e2400cbe 	sub	r0, r0, #48640	; 0xbe00
        31d8ec:	eb63aada 	bl	1c0845c <$ThrowBadTypeWithFrameData(long, RefVar const &)>
        31d8f0:	e59d0000 	ldr	r0, [sp]
        31d8f4:	eb629630 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        31d8f8:	e3a00000 	mov	r0, #0	; 0x0
        31d8fc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: __vfprintf
 * Address: 0033dc28
 */
void globals::() {
    /*
        33dc28:	e1a0c00d 	mov	ip, sp
        33dc2c:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        33dc30:	e24cb004 	sub	fp, ip, #4	; 0x4
        33dc34:	e1a05000 	mov	r5, r0
        33dc38:	e1a04002 	mov	r4, r2
        33dc3c:	e24dd010 	sub	sp, sp, #16	; 0x10
        33dc40:	e3a08000 	mov	r8, #0	; 0x0
        33dc44:	e5d10000 	ldrb	r0, [r1]
        33dc48:	e2816001 	add	r6, r1, #1	; 0x1
        33dc4c:	e3300000 	teq	r0, #0	; 0x0
        33dc50:	0a000241 	beq	33e55c <__vfprintf+0x934>
        33dc54:	e59f1018 	ldr	r1, [pc, #18]	; 33dc74 <__vfprintf+0x4c>
        33dc58:	e58d100c 	str	r1, [sp, #12]
        33dc5c:	e3300025 	teq	r0, #37	; 0x25
        33dc60:	0a000004 	beq	33dc78 <__vfprintf+0x50>
        33dc64:	e1a01005 	mov	r1, r5
        33dc68:	eb62cf05 	bl	1bf1884 <$putc>
        33dc6c:	e2888001 	add	r8, r8, #1	; 0x1
        33dc70:	ea000236 	b	33e550 <__vfprintf+0x928>
        33dc74:	0038053c 	eoreqs	r0, r8, ip, lsr r5
        33dc78:	e24dd00c 	sub	sp, sp, #12	; 0xc
        33dc7c:	e3a07000 	mov	r7, #0	; 0x0
        33dc80:	e3a0a000 	mov	sl, #0	; 0x0
        33dc84:	e3a02000 	mov	r2, #0	; 0x0
        33dc88:	e4d69001 	ldrb	r9, [r6], #1
        33dc8c:	e359002b 	cmp	r9, #43	; 0x2b
        33dc90:	03877002 	orreq	r7, r7, #2	; 0x2
        33dc94:	0afffffb 	beq	33dc88 <__vfprintf+0x60>
        33dc98:	ca000006 	bgt	33dcb8 <__vfprintf+0x90>
        33dc9c:	e3390020 	teq	r9, #32	; 0x20
        33dca0:	03877004 	orreq	r7, r7, #4	; 0x4
        33dca4:	0afffff7 	beq	33dc88 <__vfprintf+0x60>
        33dca8:	e3390023 	teq	r9, #35	; 0x23
        33dcac:	03877008 	orreq	r7, r7, #8	; 0x8
        33dcb0:	0afffff4 	beq	33dc88 <__vfprintf+0x60>
        33dcb4:	ea000006 	b	33dcd4 <__vfprintf+0xac>
        33dcb8:	e339002d 	teq	r9, #45	; 0x2d
        33dcbc:	03c70080 	biceq	r0, r7, #128	; 0x80
        33dcc0:	03807001 	orreq	r7, r0, #1	; 0x1
        33dcc4:	0affffef 	beq	33dc88 <__vfprintf+0x60>
        33dcc8:	e3390030 	teq	r9, #48	; 0x30
        33dccc:	03877080 	orreq	r7, r7, #128	; 0x80
        33dcd0:	0affffec 	beq	33dc88 <__vfprintf+0x60>
        33dcd4:	e3a00000 	mov	r0, #0	; 0x0
        33dcd8:	e339002a 	teq	r9, #42	; 0x2a
        33dcdc:	1a00000a 	bne	33dd0c <__vfprintf+0xe4>
        33dce0:	e5940000 	ldr	r0, [r4]
        33dce4:	e2800003 	add	r0, r0, #3	; 0x3
        33dce8:	e3c00003 	bic	r0, r0, #3	; 0x3
        33dcec:	e2800004 	add	r0, r0, #4	; 0x4
        33dcf0:	e5840000 	str	r0, [r4]
        33dcf4:	e5100004 	ldr	r0, [r0, -#4]
        33dcf8:	e3500000 	cmp	r0, #0	; 0x0
        33dcfc:	b2600000 	rsblt	r0, r0, #0	; 0x0
        33dd00:	b2277001 	eorlt	r7, r7, #1	; 0x1
        33dd04:	e4d69001 	ldrb	r9, [r6], #1
        33dd08:	ea00000b 	b	33dd3c <__vfprintf+0x114>
        33dd0c:	e59d1018 	ldr	r1, [sp, #24]
        33dd10:	e7d11009 	ldrb	r1, [r1, r9]
        33dd14:	e3110020 	tst	r1, #32	; 0x20
        33dd18:	0a000009 	beq	33dd44 <__vfprintf+0x11c>
        33dd1c:	e0800100 	add	r0, r0, r0, lsl #2
        33dd20:	e0890080 	add	r0, r9, r0, lsl #1
        33dd24:	e2400030 	sub	r0, r0, #48	; 0x30
        33dd28:	e4d69001 	ldrb	r9, [r6], #1
        33dd2c:	e59d1018 	ldr	r1, [sp, #24]
        33dd30:	e7d11009 	ldrb	r1, [r1, r9]
        33dd34:	e3110020 	tst	r1, #32	; 0x20
        33dd38:	1afffff7 	bne	33dd1c <__vfprintf+0xf4>
        33dd3c:	e3500000 	cmp	r0, #0	; 0x0
        33dd40:	b3a00000 	movlt	r0, #0	; 0x0
        33dd44:	e339002e 	teq	r9, #46	; 0x2e
        33dd48:	e58d0008 	str	r0, [sp, #8]
        33dd4c:	1a00001b 	bne	33ddc0 <__vfprintf+0x198>
        33dd50:	e3a00000 	mov	r0, #0	; 0x0
        33dd54:	e4d69001 	ldrb	r9, [r6], #1
        33dd58:	e339002a 	teq	r9, #42	; 0x2a
        33dd5c:	1a000007 	bne	33dd80 <__vfprintf+0x158>
        33dd60:	e5940000 	ldr	r0, [r4]
        33dd64:	e2800003 	add	r0, r0, #3	; 0x3
        33dd68:	e3c00003 	bic	r0, r0, #3	; 0x3
        33dd6c:	e2800004 	add	r0, r0, #4	; 0x4
        33dd70:	e5840000 	str	r0, [r4]
        33dd74:	e5100004 	ldr	r0, [r0, -#4]
        33dd78:	e4d69001 	ldrb	r9, [r6], #1
        33dd7c:	ea00000b 	b	33ddb0 <__vfprintf+0x188>
        33dd80:	e59d1018 	ldr	r1, [sp, #24]
        33dd84:	e7d11009 	ldrb	r1, [r1, r9]
        33dd88:	e3110020 	tst	r1, #32	; 0x20
        33dd8c:	0a000009 	beq	33ddb8 <__vfprintf+0x190>
        33dd90:	e0800100 	add	r0, r0, r0, lsl #2
        33dd94:	e0890080 	add	r0, r9, r0, lsl #1
        33dd98:	e2400030 	sub	r0, r0, #48	; 0x30
        33dd9c:	e4d69001 	ldrb	r9, [r6], #1
        33dda0:	e59d1018 	ldr	r1, [sp, #24]
        33dda4:	e7d11009 	ldrb	r1, [r1, r9]
        33dda8:	e3110020 	tst	r1, #32	; 0x20
        33ddac:	1afffff7 	bne	33dd90 <__vfprintf+0x168>
        33ddb0:	e3500000 	cmp	r0, #0	; 0x0
        33ddb4:	ba000001 	blt	33ddc0 <__vfprintf+0x198>
        33ddb8:	e3877010 	orr	r7, r7, #16	; 0x10
        33ddbc:	e1a0a000 	mov	sl, r0
        33ddc0:	e339006c 	teq	r9, #108	; 0x6c
        33ddc4:	1339004c 	teqne	r9, #76	; 0x4c
        33ddc8:	03877020 	orreq	r7, r7, #32	; 0x20
        33ddcc:	0a000002 	beq	33dddc <__vfprintf+0x1b4>
        33ddd0:	e3390068 	teq	r9, #104	; 0x68
        33ddd4:	1a000001 	bne	33dde0 <__vfprintf+0x1b8>
        33ddd8:	e3877040 	orr	r7, r7, #64	; 0x40
        33dddc:	e4d69001 	ldrb	r9, [r6], #1
        33dde0:	e3590065 	cmp	r9, #101	; 0x65
        33dde4:	0a0001be 	beq	33e4e4 <__vfprintf+0x8bc>
        33dde8:	ca000013 	bgt	33de3c <__vfprintf+0x214>
        33ddec:	e3590050 	cmp	r9, #80	; 0x50
        33ddf0:	0a0000d2 	beq	33e140 <__vfprintf+0x518>
        33ddf4:	ca000007 	bgt	33de18 <__vfprintf+0x1f0>
        33ddf8:	e3390000 	teq	r9, #0	; 0x0
        33ddfc:	02466001 	subeq	r6, r6, #1	; 0x1
        33de00:	0a0001d1 	beq	33e54c <__vfprintf+0x924>
        33de04:	e3390045 	teq	r9, #69	; 0x45
        33de08:	13390046 	teqne	r9, #70	; 0x46
        33de0c:	13390047 	teqne	r9, #71	; 0x47
        33de10:	0a0001b3 	beq	33e4e4 <__vfprintf+0x8bc>
        33de14:	ea000022 	b	33dea4 <__vfprintf+0x27c>
        33de18:	e3390055 	teq	r9, #85	; 0x55
        33de1c:	0a0000fd 	beq	33e218 <__vfprintf+0x5f0>
        33de20:	e3390058 	teq	r9, #88	; 0x58
        33de24:	0a00013d 	beq	33e320 <__vfprintf+0x6f8>
        33de28:	e3390063 	teq	r9, #99	; 0x63
        33de2c:	0a000016 	beq	33de8c <__vfprintf+0x264>
        33de30:	e3390064 	teq	r9, #100	; 0x64
        33de34:	0a000190 	beq	33e47c <__vfprintf+0x854>
        33de38:	ea000019 	b	33dea4 <__vfprintf+0x27c>
        33de3c:	e359006f 	cmp	r9, #111	; 0x6f
        33de40:	0a000170 	beq	33e408 <__vfprintf+0x7e0>
        33de44:	ca000007 	bgt	33de68 <__vfprintf+0x240>
        33de48:	e3390066 	teq	r9, #102	; 0x66
        33de4c:	13390067 	teqne	r9, #103	; 0x67
        33de50:	0a0001a3 	beq	33e4e4 <__vfprintf+0x8bc>
        33de54:	e3390069 	teq	r9, #105	; 0x69
        33de58:	0a000187 	beq	33e47c <__vfprintf+0x854>
        33de5c:	e339006e 	teq	r9, #110	; 0x6e
        33de60:	0a000030 	beq	33df28 <__vfprintf+0x300>
        33de64:	ea00000e 	b	33dea4 <__vfprintf+0x27c>
        33de68:	e3390070 	teq	r9, #112	; 0x70
        33de6c:	0a000157 	beq	33e3d0 <__vfprintf+0x7a8>
        33de70:	e3390073 	teq	r9, #115	; 0x73
        33de74:	0a000033 	beq	33df48 <__vfprintf+0x320>
        33de78:	e3390075 	teq	r9, #117	; 0x75
        33de7c:	0a000171 	beq	33e448 <__vfprintf+0x820>
        33de80:	e3390078 	teq	r9, #120	; 0x78
        33de84:	0a00013b 	beq	33e378 <__vfprintf+0x750>
        33de88:	ea000005 	b	33dea4 <__vfprintf+0x27c>
        33de8c:	e5940000 	ldr	r0, [r4]
        33de90:	e2800003 	add	r0, r0, #3	; 0x3
        33de94:	e3c00003 	bic	r0, r0, #3	; 0x3
        33de98:	e2800004 	add	r0, r0, #4	; 0x4
        33de9c:	e5840000 	str	r0, [r4]
        33dea0:	e5309004 	ldr	r9, [r0, -#4]!
        33dea4:	e59d0008 	ldr	r0, [sp, #8]
        33dea8:	e240a001 	sub	sl, r0, #1	; 0x1
        33deac:	e2170001 	ands	r0, r7, #1	; 0x1
        33deb0:	e58d0014 	str	r0, [sp, #20]
        33deb4:	1a00000b 	bne	33dee8 <__vfprintf+0x2c0>
        33deb8:	e3170080 	tst	r7, #128	; 0x80
        33debc:	03a00020 	moveq	r0, #32	; 0x20
        33dec0:	13a00030 	movne	r0, #48	; 0x30
        33dec4:	e20070ff 	and	r7, r0, #255	; 0xff
        33dec8:	e25aa001 	subs	sl, sl, #1	; 0x1
        33decc:	4a000005 	bmi	33dee8 <__vfprintf+0x2c0>
        33ded0:	e2888001 	add	r8, r8, #1	; 0x1
        33ded4:	e1a01005 	mov	r1, r5
        33ded8:	e1a00007 	mov	r0, r7
        33dedc:	eb62ce68 	bl	1bf1884 <$putc>
        33dee0:	e25aa001 	subs	sl, sl, #1	; 0x1
        33dee4:	5afffff9 	bpl	33ded0 <__vfprintf+0x2a8>
        33dee8:	e1a01005 	mov	r1, r5
        33deec:	e1a00009 	mov	r0, r9
        33def0:	eb62ce63 	bl	1bf1884 <$putc>
        33def4:	e2888001 	add	r8, r8, #1	; 0x1
        33def8:	e59d0014 	ldr	r0, [sp, #20]
        33defc:	e3300000 	teq	r0, #0	; 0x0
        33df00:	0a000191 	beq	33e54c <__vfprintf+0x924>
        33df04:	e25a7001 	subs	r7, sl, #1	; 0x1
        33df08:	4a00018f 	bmi	33e54c <__vfprintf+0x924>
        33df0c:	e2888001 	add	r8, r8, #1	; 0x1
        33df10:	e1a01005 	mov	r1, r5
        33df14:	e3a00020 	mov	r0, #32	; 0x20
        33df18:	eb62ce59 	bl	1bf1884 <$putc>
        33df1c:	e2577001 	subs	r7, r7, #1	; 0x1
        33df20:	5afffff9 	bpl	33df0c <__vfprintf+0x2e4>
        33df24:	ea000188 	b	33e54c <__vfprintf+0x924>
        33df28:	e5940000 	ldr	r0, [r4]
        33df2c:	e2800003 	add	r0, r0, #3	; 0x3
        33df30:	e3c00003 	bic	r0, r0, #3	; 0x3
        33df34:	e2800004 	add	r0, r0, #4	; 0x4
        33df38:	e5840000 	str	r0, [r4]
        33df3c:	e5100004 	ldr	r0, [r0, -#4]
        33df40:	e5808000 	str	r8, [r0]
        33df44:	ea000180 	b	33e54c <__vfprintf+0x924>
        33df48:	e24dd008 	sub	sp, sp, #8	; 0x8
        33df4c:	e5940000 	ldr	r0, [r4]
        33df50:	e2800003 	add	r0, r0, #3	; 0x3
        33df54:	e3c00003 	bic	r0, r0, #3	; 0x3
        33df58:	e2800004 	add	r0, r0, #4	; 0x4
        33df5c:	e5840000 	str	r0, [r4]
        33df60:	e5100004 	ldr	r0, [r0, -#4]
        33df64:	e58d0004 	str	r0, [sp, #4]
        33df68:	eb6198b2 	bl	1ba4238 <$MaybeUnicodeStr>
        33df6c:	e3300000 	teq	r0, #0	; 0x0
        33df70:	1a00002f 	bne	33e034 <__vfprintf+0x40c>
        33df74:	e3170010 	tst	r7, #16	; 0x10
        33df78:	13a09000 	movne	r9, #0	; 0x0
        33df7c:	1a000010 	bne	33dfc4 <__vfprintf+0x39c>
        33df80:	e59d0004 	ldr	r0, [sp, #4]
        33df84:	eb61dec9 	bl	1bb5ab0 <$strlen>
        33df88:	e1a09000 	mov	r9, r0
        33df8c:	e59d0010 	ldr	r0, [sp, #16]
        33df90:	e040a009 	sub	sl, r0, r9
        33df94:	e3170001 	tst	r7, #1	; 0x1
        33df98:	1a000017 	bne	33dffc <__vfprintf+0x3d4>
        33df9c:	e24dd004 	sub	sp, sp, #4	; 0x4
        33dfa0:	e3170080 	tst	r7, #128	; 0x80
        33dfa4:	03a00020 	moveq	r0, #32	; 0x20
        33dfa8:	13a00030 	movne	r0, #48	; 0x30
        33dfac:	e20000ff 	and	r0, r0, #255	; 0xff
        33dfb0:	e25aa001 	subs	sl, sl, #1	; 0x1
        33dfb4:	e58d0000 	str	r0, [sp]
        33dfb8:	4a00000e 	bmi	33dff8 <__vfprintf+0x3d0>
        33dfbc:	ea000007 	b	33dfe0 <__vfprintf+0x3b8>
        33dfc0:	e2899001 	add	r9, r9, #1	; 0x1
        33dfc4:	e159000a 	cmp	r9, sl
        33dfc8:	aaffffef 	bge	33df8c <__vfprintf+0x364>
        33dfcc:	e59d1004 	ldr	r1, [sp, #4]
        33dfd0:	e7d10009 	ldrb	r0, [r1, r9]
        33dfd4:	e3300000 	teq	r0, #0	; 0x0
        33dfd8:	1afffff8 	bne	33dfc0 <__vfprintf+0x398>
        33dfdc:	eaffffea 	b	33df8c <__vfprintf+0x364>
        33dfe0:	e2888001 	add	r8, r8, #1	; 0x1
        33dfe4:	e1a01005 	mov	r1, r5
        33dfe8:	e59d0000 	ldr	r0, [sp]
        33dfec:	eb62ce24 	bl	1bf1884 <$putc>
        33dff0:	e25aa001 	subs	sl, sl, #1	; 0x1
        33dff4:	5afffff9 	bpl	33dfe0 <__vfprintf+0x3b8>
        33dff8:	e28dd004 	add	sp, sp, #4	; 0x4
        33dffc:	e3a00000 	mov	r0, #0	; 0x0
        33e000:	e3590000 	cmp	r9, #0	; 0x0
        33e004:	e58d0000 	str	r0, [sp]
        33e008:	da00003f 	ble	33e10c <__vfprintf+0x4e4>
        33e00c:	e89d0003 	ldmia	sp, {r0, r1}
        33e010:	e7d10000 	ldrb	r0, [r1, r0]
        33e014:	e1a01005 	mov	r1, r5
        33e018:	eb62ce19 	bl	1bf1884 <$putc>
        33e01c:	e59d0000 	ldr	r0, [sp]
        33e020:	e2800001 	add	r0, r0, #1	; 0x1
        33e024:	e58d0000 	str	r0, [sp]
        33e028:	e1500009 	cmp	r0, r9
        33e02c:	bafffff6 	blt	33e00c <__vfprintf+0x3e4>
        33e030:	ea000035 	b	33e10c <__vfprintf+0x4e4>
        33e034:	e24dd004 	sub	sp, sp, #4	; 0x4
        33e038:	e59d0008 	ldr	r0, [sp, #8]
        33e03c:	e58d0000 	str	r0, [sp]
        33e040:	e3170010 	tst	r7, #16	; 0x10
        33e044:	13a09000 	movne	r9, #0	; 0x0
        33e048:	1a000010 	bne	33e090 <__vfprintf+0x468>
        33e04c:	e59d0000 	ldr	r0, [sp]
        33e050:	eb62c1c2 	bl	1bee760 <$Ustrlen>
        33e054:	e1a09000 	mov	r9, r0
        33e058:	e59d0014 	ldr	r0, [sp, #20]
        33e05c:	e040a009 	sub	sl, r0, r9
        33e060:	e3170001 	tst	r7, #1	; 0x1
        33e064:	1a000018 	bne	33e0cc <__vfprintf+0x4a4>
        33e068:	e24dd004 	sub	sp, sp, #4	; 0x4
        33e06c:	e3170080 	tst	r7, #128	; 0x80
        33e070:	03a00020 	moveq	r0, #32	; 0x20
        33e074:	13a00030 	movne	r0, #48	; 0x30
        33e078:	e20000ff 	and	r0, r0, #255	; 0xff
        33e07c:	e25aa001 	subs	sl, sl, #1	; 0x1
        33e080:	e58d0000 	str	r0, [sp]
        33e084:	4a00000f 	bmi	33e0c8 <__vfprintf+0x4a0>
        33e088:	ea000008 	b	33e0b0 <__vfprintf+0x488>
        33e08c:	e2899001 	add	r9, r9, #1	; 0x1
        33e090:	e159000a 	cmp	r9, sl
        33e094:	aaffffef 	bge	33e058 <__vfprintf+0x430>
        33e098:	e59d0000 	ldr	r0, [sp]
        33e09c:	e7900089 	ldr	r0, [r0, r9, lsl #1]
        33e0a0:	e1a00820 	mov	r0, r0, lsr #16
        33e0a4:	e3300000 	teq	r0, #0	; 0x0
        33e0a8:	1afffff7 	bne	33e08c <__vfprintf+0x464>
        33e0ac:	eaffffe9 	b	33e058 <__vfprintf+0x430>
        33e0b0:	e2888001 	add	r8, r8, #1	; 0x1
        33e0b4:	e1a01005 	mov	r1, r5
        33e0b8:	e59d0000 	ldr	r0, [sp]
        33e0bc:	eb62cdf0 	bl	1bf1884 <$putc>
        33e0c0:	e25aa001 	subs	sl, sl, #1	; 0x1
        33e0c4:	5afffff9 	bpl	33e0b0 <__vfprintf+0x488>
        33e0c8:	e28dd004 	add	sp, sp, #4	; 0x4
        33e0cc:	e3a01000 	mov	r1, #0	; 0x0
        33e0d0:	e3590000 	cmp	r9, #0	; 0x0
        33e0d4:	e58d1004 	str	r1, [sp, #4]
        33e0d8:	da00000a 	ble	33e108 <__vfprintf+0x4e0>
        33e0dc:	e89d0003 	ldmia	sp, {r0, r1}
        33e0e0:	e7900081 	ldr	r0, [r0, r1, lsl #1]
        33e0e4:	e1a00820 	mov	r0, r0, lsr #16
        33e0e8:	eb618bed 	bl	1ba10a4 <$A_CONST_CHAR>
        33e0ec:	e1a01005 	mov	r1, r5
        33e0f0:	eb62cde3 	bl	1bf1884 <$putc>
        33e0f4:	e59d1004 	ldr	r1, [sp, #4]
        33e0f8:	e2811001 	add	r1, r1, #1	; 0x1
        33e0fc:	e58d1004 	str	r1, [sp, #4]
        33e100:	e1510009 	cmp	r1, r9
        33e104:	bafffff4 	blt	33e0dc <__vfprintf+0x4b4>
        33e108:	e28dd004 	add	sp, sp, #4	; 0x4
        33e10c:	e0888009 	add	r8, r8, r9
        33e110:	e3170001 	tst	r7, #1	; 0x1
        33e114:	0a000007 	beq	33e138 <__vfprintf+0x510>
        33e118:	e25a7001 	subs	r7, sl, #1	; 0x1
        33e11c:	4a000005 	bmi	33e138 <__vfprintf+0x510>
        33e120:	e2888001 	add	r8, r8, #1	; 0x1
        33e124:	e1a01005 	mov	r1, r5
        33e128:	e3a00020 	mov	r0, #32	; 0x20
        33e12c:	eb62cdd4 	bl	1bf1884 <$putc>
        33e130:	e2577001 	subs	r7, r7, #1	; 0x1
        33e134:	5afffff9 	bpl	33e120 <__vfprintf+0x4f8>
        33e138:	e28dd008 	add	sp, sp, #8	; 0x8
        33e13c:	ea000102 	b	33e54c <__vfprintf+0x924>
        33e140:	e24dd004 	sub	sp, sp, #4	; 0x4
        33e144:	e5940000 	ldr	r0, [r4]
        33e148:	e2800003 	add	r0, r0, #3	; 0x3
        33e14c:	e3c00003 	bic	r0, r0, #3	; 0x3
        33e150:	e2800004 	add	r0, r0, #4	; 0x4
        33e154:	e5840000 	str	r0, [r4]
        33e158:	e5100004 	ldr	r0, [r0, -#4]
        33e15c:	e58d0000 	str	r0, [sp]
        33e160:	e5d09000 	ldrb	r9, [r0]
        33e164:	e3170010 	tst	r7, #16	; 0x10
        33e168:	0a000001 	beq	33e174 <__vfprintf+0x54c>
        33e16c:	e159000a 	cmp	r9, sl
        33e170:	c1a0900a 	movgt	r9, sl
        33e174:	e59d000c 	ldr	r0, [sp, #12]
        33e178:	e040a009 	sub	sl, r0, r9
        33e17c:	e2170001 	ands	r0, r7, #1	; 0x1
        33e180:	e58d0014 	str	r0, [sp, #20]
        33e184:	1a00000b 	bne	33e1b8 <__vfprintf+0x590>
        33e188:	e3170080 	tst	r7, #128	; 0x80
        33e18c:	03a00020 	moveq	r0, #32	; 0x20
        33e190:	13a00030 	movne	r0, #48	; 0x30
        33e194:	e20070ff 	and	r7, r0, #255	; 0xff
        33e198:	e25aa001 	subs	sl, sl, #1	; 0x1
        33e19c:	4a000005 	bmi	33e1b8 <__vfprintf+0x590>
        33e1a0:	e2888001 	add	r8, r8, #1	; 0x1
        33e1a4:	e1a01005 	mov	r1, r5
        33e1a8:	e1a00007 	mov	r0, r7
        33e1ac:	eb62cdb4 	bl	1bf1884 <$putc>
        33e1b0:	e25aa001 	subs	sl, sl, #1	; 0x1
        33e1b4:	5afffff9 	bpl	33e1a0 <__vfprintf+0x578>
        33e1b8:	e3a07001 	mov	r7, #1	; 0x1
        33e1bc:	e3590001 	cmp	r9, #1	; 0x1
        33e1c0:	ba000006 	blt	33e1e0 <__vfprintf+0x5b8>
        33e1c4:	e59d0000 	ldr	r0, [sp]
        33e1c8:	e7d00007 	ldrb	r0, [r0, r7]
        33e1cc:	e1a01005 	mov	r1, r5
        33e1d0:	eb62cdab 	bl	1bf1884 <$putc>
        33e1d4:	e2877001 	add	r7, r7, #1	; 0x1
        33e1d8:	e1570009 	cmp	r7, r9
        33e1dc:	dafffff8 	ble	33e1c4 <__vfprintf+0x59c>
        33e1e0:	e0888009 	add	r8, r8, r9
        33e1e4:	e59d0014 	ldr	r0, [sp, #20]
        33e1e8:	e3300000 	teq	r0, #0	; 0x0
        33e1ec:	0a000007 	beq	33e210 <__vfprintf+0x5e8>
        33e1f0:	e25a7001 	subs	r7, sl, #1	; 0x1
        33e1f4:	4a000005 	bmi	33e210 <__vfprintf+0x5e8>
        33e1f8:	e2888001 	add	r8, r8, #1	; 0x1
        33e1fc:	e1a01005 	mov	r1, r5
        33e200:	e3a00020 	mov	r0, #32	; 0x20
        33e204:	eb62cd9e 	bl	1bf1884 <$putc>
        33e208:	e2577001 	subs	r7, r7, #1	; 0x1
        33e20c:	5afffff9 	bpl	33e1f8 <__vfprintf+0x5d0>
        33e210:	e28dd004 	add	sp, sp, #4	; 0x4
        33e214:	ea0000cc 	b	33e54c <__vfprintf+0x924>
        33e218:	e24dd004 	sub	sp, sp, #4	; 0x4
        33e21c:	e5940000 	ldr	r0, [r4]
        33e220:	e2800003 	add	r0, r0, #3	; 0x3
        33e224:	e3c00003 	bic	r0, r0, #3	; 0x3
        33e228:	e2800004 	add	r0, r0, #4	; 0x4
        33e22c:	e5840000 	str	r0, [r4]
        33e230:	e5100004 	ldr	r0, [r0, -#4]
        33e234:	e58d0000 	str	r0, [sp]
        33e238:	e3170010 	tst	r7, #16	; 0x10
        33e23c:	13a09000 	movne	r9, #0	; 0x0
        33e240:	1a00000f 	bne	33e284 <__vfprintf+0x65c>
        33e244:	e59d0000 	ldr	r0, [sp]
        33e248:	eb62c144 	bl	1bee760 <$Ustrlen>
        33e24c:	e1a09000 	mov	r9, r0
        33e250:	e59d000c 	ldr	r0, [sp, #12]
        33e254:	e040a009 	sub	sl, r0, r9
        33e258:	e2170001 	ands	r0, r7, #1	; 0x1
        33e25c:	e58d0010 	str	r0, [sp, #16]
        33e260:	1a000015 	bne	33e2bc <__vfprintf+0x694>
        33e264:	e3170080 	tst	r7, #128	; 0x80
        33e268:	03a00020 	moveq	r0, #32	; 0x20
        33e26c:	13a00030 	movne	r0, #48	; 0x30
        33e270:	e20070ff 	and	r7, r0, #255	; 0xff
        33e274:	e25aa001 	subs	sl, sl, #1	; 0x1
        33e278:	4a00000f 	bmi	33e2bc <__vfprintf+0x694>
        33e27c:	ea000008 	b	33e2a4 <__vfprintf+0x67c>
        33e280:	e2899001 	add	r9, r9, #1	; 0x1
        33e284:	e159000a 	cmp	r9, sl
        33e288:	aafffff0 	bge	33e250 <__vfprintf+0x628>
        33e28c:	e59d0000 	ldr	r0, [sp]
        33e290:	e7900089 	ldr	r0, [r0, r9, lsl #1]
        33e294:	e1a00820 	mov	r0, r0, lsr #16
        33e298:	e3300000 	teq	r0, #0	; 0x0
        33e29c:	1afffff7 	bne	33e280 <__vfprintf+0x658>
        33e2a0:	eaffffea 	b	33e250 <__vfprintf+0x628>
        33e2a4:	e2888001 	add	r8, r8, #1	; 0x1
        33e2a8:	e1a01005 	mov	r1, r5
        33e2ac:	e1a00007 	mov	r0, r7
        33e2b0:	eb62cd73 	bl	1bf1884 <$putc>
        33e2b4:	e25aa001 	subs	sl, sl, #1	; 0x1
        33e2b8:	5afffff9 	bpl	33e2a4 <__vfprintf+0x67c>
        33e2bc:	e3a07000 	mov	r7, #0	; 0x0
        33e2c0:	e3590000 	cmp	r9, #0	; 0x0
        33e2c4:	da000008 	ble	33e2ec <__vfprintf+0x6c4>
        33e2c8:	e59d0000 	ldr	r0, [sp]
        33e2cc:	e7900087 	ldr	r0, [r0, r7, lsl #1]
        33e2d0:	e1a00820 	mov	r0, r0, lsr #16
        33e2d4:	eb618b72 	bl	1ba10a4 <$A_CONST_CHAR>
        33e2d8:	e1a01005 	mov	r1, r5
        33e2dc:	eb62cd68 	bl	1bf1884 <$putc>
        33e2e0:	e2877001 	add	r7, r7, #1	; 0x1
        33e2e4:	e1570009 	cmp	r7, r9
        33e2e8:	bafffff6 	blt	33e2c8 <__vfprintf+0x6a0>
        33e2ec:	e0888009 	add	r8, r8, r9
        33e2f0:	e59d0010 	ldr	r0, [sp, #16]
        33e2f4:	e3300000 	teq	r0, #0	; 0x0
        33e2f8:	0affffc4 	beq	33e210 <__vfprintf+0x5e8>
        33e2fc:	e25a7001 	subs	r7, sl, #1	; 0x1
        33e300:	4affffc2 	bmi	33e210 <__vfprintf+0x5e8>
        33e304:	e2888001 	add	r8, r8, #1	; 0x1
        33e308:	e1a01005 	mov	r1, r5
        33e30c:	e3a00020 	mov	r0, #32	; 0x20
        33e310:	eb62cd5b 	bl	1bf1884 <$putc>
        33e314:	e2577001 	subs	r7, r7, #1	; 0x1
        33e318:	5afffff9 	bpl	33e304 <__vfprintf+0x6dc>
        33e31c:	eaffffbb 	b	33e210 <__vfprintf+0x5e8>
        33e320:	e5940000 	ldr	r0, [r4]
        33e324:	e2800003 	add	r0, r0, #3	; 0x3
        33e328:	e3c00003 	bic	r0, r0, #3	; 0x3
        33e32c:	e2800004 	add	r0, r0, #4	; 0x4
        33e330:	e5840000 	str	r0, [r4]
        33e334:	e530c004 	ldr	ip, [r0, -#4]!
        33e338:	e3170040 	tst	r7, #64	; 0x40
        33e33c:	11a0c80c 	movne	ip, ip, lsl #16
        33e340:	11a0c82c 	movne	ip, ip, lsr #16
        33e344:	e28f2f05 	add	r2, pc, #20	; 0x14
        33e348:	e3170008 	tst	r7, #8	; 0x8
        33e34c:	028f1f07 	addeq	r1, pc, #28	; 0x1c
        33e350:	128f1f07 	addne	r1, pc, #28	; 0x1c
        33e354:	e3170010 	tst	r7, #16	; 0x10
        33e358:	0a00006e 	beq	33e518 <__vfprintf+0x8f0>
        33e35c:	ea00005b 	b	33e4d0 <__vfprintf+0x8a8>
        33e360:	30313233 	eorccs	r3, r1, r3, lsr r2
        33e364:	34353637 	ldrcct	r3, [r5], -#1591
        33e368:	38394142 	ldmccda	r9!, {r1, r6, r8, lr}
        33e36c:	43444546 	cmpmi	r4, #293601280	; 0x11800000
        33e370:	00000000 	andeq	r0, r0, r0
        33e374:	30580000 	subccs	r0, r8, r0
        33e378:	e5940000 	ldr	r0, [r4]
        33e37c:	e2800003 	add	r0, r0, #3	; 0x3
        33e380:	e3c00003 	bic	r0, r0, #3	; 0x3
        33e384:	e2800004 	add	r0, r0, #4	; 0x4
        33e388:	e5840000 	str	r0, [r4]
        33e38c:	e530c004 	ldr	ip, [r0, -#4]!
        33e390:	e3170040 	tst	r7, #64	; 0x40
        33e394:	11a0c80c 	movne	ip, ip, lsl #16
        33e398:	11a0c82c 	movne	ip, ip, lsr #16
        33e39c:	e28f2f05 	add	r2, pc, #20	; 0x14
        33e3a0:	e3170008 	tst	r7, #8	; 0x8
        33e3a4:	028f1f07 	addeq	r1, pc, #28	; 0x1c
        33e3a8:	128f1f07 	addne	r1, pc, #28	; 0x1c
        33e3ac:	e3170010 	tst	r7, #16	; 0x10
        33e3b0:	0a000058 	beq	33e518 <__vfprintf+0x8f0>
        33e3b4:	ea000045 	b	33e4d0 <__vfprintf+0x8a8>
        33e3b8:	30313233 	eorccs	r3, r1, r3, lsr r2
        33e3bc:	34353637 	ldrcct	r3, [r5], -#1591
        33e3c0:	38396162 	ldmccda	r9!, {r1, r5, r6, r8, sp, lr}
        33e3c4:	63646566 	cmnvs	r4, #427819008	; 0x19800000
        33e3c8:	00000000 	andeq	r0, r0, r0
        33e3cc:	30780000 	rsbccs	r0, r8, r0
        33e3d0:	e5940000 	ldr	r0, [r4]
        33e3d4:	e2800003 	add	r0, r0, #3	; 0x3
        33e3d8:	e3c00003 	bic	r0, r0, #3	; 0x3
        33e3dc:	e2800004 	add	r0, r0, #4	; 0x4
        33e3e0:	e5840000 	str	r0, [r4]
        33e3e4:	e530c004 	ldr	ip, [r0, -#4]!
        33e3e8:	e24f2f0e 	sub	r2, pc, #56	; 0x38
        33e3ec:	e3170008 	tst	r7, #8	; 0x8
        33e3f0:	024f1f0c 	subeq	r1, pc, #48	; 0x30
        33e3f4:	128f1f02 	addne	r1, pc, #8	; 0x8
        33e3f8:	e3877010 	orr	r7, r7, #16	; 0x10
        33e3fc:	e3a0a008 	mov	sl, #8	; 0x8
        33e400:	ea000044 	b	33e518 <__vfprintf+0x8f0>
        33e404:	40000000 	andmi	r0, r0, r0
        33e408:	e5940000 	ldr	r0, [r4]
        33e40c:	e2800003 	add	r0, r0, #3	; 0x3
        33e410:	e3c00003 	bic	r0, r0, #3	; 0x3
        33e414:	e2800004 	add	r0, r0, #4	; 0x4
        33e418:	e5840000 	str	r0, [r4]
        33e41c:	e530c004 	ldr	ip, [r0, -#4]!
        33e420:	e3170040 	tst	r7, #64	; 0x40
        33e424:	11a0c80c 	movne	ip, ip, lsl #16
        33e428:	11a0c82c 	movne	ip, ip, lsr #16
        33e42c:	e3170008 	tst	r7, #8	; 0x8
        33e430:	024f1f1c 	subeq	r1, pc, #112	; 0x70
        33e434:	128f1f02 	addne	r1, pc, #8	; 0x8
        33e438:	e3170010 	tst	r7, #16	; 0x10
        33e43c:	0a000035 	beq	33e518 <__vfprintf+0x8f0>
        33e440:	ea000022 	b	33e4d0 <__vfprintf+0x8a8>
        33e444:	30000000 	andcc	r0, r0, r0
        33e448:	e5940000 	ldr	r0, [r4]
        33e44c:	e2800003 	add	r0, r0, #3	; 0x3
        33e450:	e3c00003 	bic	r0, r0, #3	; 0x3
        33e454:	e2800004 	add	r0, r0, #4	; 0x4
        33e458:	e5840000 	str	r0, [r4]
        33e45c:	e530c004 	ldr	ip, [r0, -#4]!
        33e460:	e3170040 	tst	r7, #64	; 0x40
        33e464:	11a0c80c 	movne	ip, ip, lsl #16
        33e468:	11a0c82c 	movne	ip, ip, lsr #16
        33e46c:	e24f1f2b 	sub	r1, pc, #172	; 0xac
        33e470:	e3170010 	tst	r7, #16	; 0x10
        33e474:	0a000027 	beq	33e518 <__vfprintf+0x8f0>
        33e478:	ea000014 	b	33e4d0 <__vfprintf+0x8a8>
        33e47c:	e5940000 	ldr	r0, [r4]
        33e480:	e2800003 	add	r0, r0, #3	; 0x3
        33e484:	e3c00003 	bic	r0, r0, #3	; 0x3
        33e488:	e2800004 	add	r0, r0, #4	; 0x4
        33e48c:	e5840000 	str	r0, [r4]
        33e490:	e530c004 	ldr	ip, [r0, -#4]!
        33e494:	e3170040 	tst	r7, #64	; 0x40
        33e498:	11a0c80c 	movne	ip, ip, lsl #16
        33e49c:	11a0c84c 	movne	ip, ip, asr #16
        33e4a0:	e35c0000 	cmp	ip, #0	; 0x0
        33e4a4:	b26cc000 	rsblt	ip, ip, #0	; 0x0
        33e4a8:	b28f1f0a 	addlt	r1, pc, #40	; 0x28
        33e4ac:	ba000005 	blt	33e4c8 <__vfprintf+0x8a0>
        33e4b0:	e3170002 	tst	r7, #2	; 0x2
        33e4b4:	128f1f08 	addne	r1, pc, #32	; 0x20
        33e4b8:	1a000002 	bne	33e4c8 <__vfprintf+0x8a0>
        33e4bc:	e3170004 	tst	r7, #4	; 0x4
        33e4c0:	024f1f40 	subeq	r1, pc, #256	; 0x100
        33e4c4:	128f1f05 	addne	r1, pc, #20	; 0x14
        33e4c8:	e3170010 	tst	r7, #16	; 0x10
        33e4cc:	0a000011 	beq	33e518 <__vfprintf+0x8f0>
        33e4d0:	e3c77080 	bic	r7, r7, #128	; 0x80
        33e4d4:	ea00000f 	b	33e518 <__vfprintf+0x8f0>
        33e4d8:	2d000000 	stccs	0, cr0, [r0]
        33e4dc:	2b000000 	blcs	33e4e4 <__vfprintf+0x8bc>
        33e4e0:	20000000 	andcs	r0, r0, r0
        33e4e4:	e3877c01 	orr	r7, r7, #256	; 0x100
        33e4e8:	e3170010 	tst	r7, #16	; 0x10
        33e4ec:	03a0a006 	moveq	sl, #6	; 0x6
        33e4f0:	e5940000 	ldr	r0, [r4]
        33e4f4:	e2800003 	add	r0, r0, #3	; 0x3
        33e4f8:	e3c00003 	bic	r0, r0, #3	; 0x3
        33e4fc:	e2800008 	add	r0, r0, #8	; 0x8
        33e500:	e5840000 	str	r0, [r4]
        33e504:	ed108102 	ldfd	f0, [r0, -#8]
        33e508:	ed8d8100 	stfd	f0, [sp]
        33e50c:	e3a01000 	mov	r1, #0	; 0x0
        33e510:	e3a02000 	mov	r2, #0	; 0x0
        33e514:	e3a0c000 	mov	ip, #0	; 0x0
        33e518:	e1a0300d 	mov	r3, sp
        33e51c:	e51b002c 	ldr	r0, [fp, -#44]
        33e520:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        33e524:	e1a0300c 	mov	r3, ip
        33e528:	e59d2018 	ldr	r2, [sp, #24]
        33e52c:	e92d000c 	stmdb	sp!, {r2, r3}
        33e530:	e1a0300a 	mov	r3, sl
        33e534:	e1a02009 	mov	r2, r9
        33e538:	e1a01007 	mov	r1, r7
        33e53c:	e1a00005 	mov	r0, r5
        33e540:	ebfffcac 	bl	33d7f8 <PrintObject(RefVar const &, unsigned long)+0x1c>
        33e544:	e28dd018 	add	sp, sp, #24	; 0x18
        33e548:	e0808008 	add	r8, r0, r8
        33e54c:	e28dd00c 	add	sp, sp, #12	; 0xc
        33e550:	e4d60001 	ldrb	r0, [r6], #1
        33e554:	e3300000 	teq	r0, #0	; 0x0
        33e558:	1afffdbf 	bne	33dc5c <__vfprintf+0x34>
        33e55c:	e1a00005 	mov	r0, r5
        33e560:	eb62c8bd 	bl	1bf085c <$ferror>
        33e564:	e3300000 	teq	r0, #0	; 0x0
        33e568:	01a00008 	moveq	r0, r8
        33e56c:	13e00000 	mvnne	r0, #0	; 0x0
        33e570:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: _sprintf
 * Address: 0033e5b0
 */
void globals::_sprintf() {
    /*
        33e5b0:	e1a0c00d 	mov	ip, sp
        33e5b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        33e5b8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        33e5bc:	e24cb014 	sub	fp, ip, #20	; 0x14
        33e5c0:	e28b000c 	add	r0, fp, #12	; 0xc
        33e5c4:	e52d0044 	str	r0, [sp, -#68]!
        33e5c8:	e28d0004 	add	r0, sp, #4	; 0x4
        33e5cc:	e3a02040 	mov	r2, #64	; 0x40
        33e5d0:	e3a01000 	mov	r1, #0	; 0x0
        33e5d4:	eb61d91f 	bl	1bb4a58 <$memset>
        33e5d8:	e3a0000a 	mov	r0, #10	; 0xa
        33e5dc:	e58d0010 	str	r0, [sp, #16]
        33e5e0:	e59b0004 	ldr	r0, [fp, #4]
        33e5e4:	e58d0008 	str	r0, [sp, #8]
        33e5e8:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        33e5ec:	e58d000c 	str	r0, [sp, #12]
        33e5f0:	e59f3024 	ldr	r3, [pc, #24]	; 33e61c <_sprintf+0x6c>
        33e5f4:	e1a0200d 	mov	r2, sp
        33e5f8:	e28d0004 	add	r0, sp, #4	; 0x4
        33e5fc:	e59b1008 	ldr	r1, [fp, #8]
        33e600:	ebfffd88 	bl	33dc28 <__vfprintf>
        33e604:	e1a04000 	mov	r4, r0
        33e608:	e28d1004 	add	r1, sp, #4	; 0x4
        33e60c:	e3a00000 	mov	r0, #0	; 0x0
        33e610:	eb62cc9b 	bl	1bf1884 <$putc>
        33e614:	e1a00004 	mov	r0, r4
        33e618:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        33e61c:	0033f050 	eoreqs	pc, r3, r0, asr r0
    */
}

/**
 * Symbol: _vsprintf
 * Address: 0033e690
 */
void globals::_vsprintf() {
    /*
        33e690:	e1a0c00d 	mov	ip, sp
        33e694:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        33e698:	e24cb004 	sub	fp, ip, #4	; 0x4
        33e69c:	e1a06000 	mov	r6, r0
        33e6a0:	e1a05001 	mov	r5, r1
        33e6a4:	e1a04002 	mov	r4, r2
        33e6a8:	e24dd040 	sub	sp, sp, #64	; 0x40
        33e6ac:	e1a0000d 	mov	r0, sp
        33e6b0:	e3a02040 	mov	r2, #64	; 0x40
        33e6b4:	e3a01000 	mov	r1, #0	; 0x0
        33e6b8:	eb61d8e6 	bl	1bb4a58 <$memset>
        33e6bc:	e3a0000a 	mov	r0, #10	; 0xa
        33e6c0:	e58d000c 	str	r0, [sp, #12]
        33e6c4:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        33e6c8:	e58d0008 	str	r0, [sp, #8]
        33e6cc:	e58d6004 	str	r6, [sp, #4]
        33e6d0:	e59f3024 	ldr	r3, [pc, #24]	; 33e6fc <_vsprintf+0x6c>
        33e6d4:	e1a02004 	mov	r2, r4
        33e6d8:	e1a01005 	mov	r1, r5
        33e6dc:	e1a0000d 	mov	r0, sp
        33e6e0:	ebfffd50 	bl	33dc28 <__vfprintf>
        33e6e4:	e1a04000 	mov	r4, r0
        33e6e8:	e1a0100d 	mov	r1, sp
        33e6ec:	e3a00000 	mov	r0, #0	; 0x0
        33e6f0:	eb62cc63 	bl	1bf1884 <$putc>
        33e6f4:	e1a00004 	mov	r0, r4
        33e6f8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        33e6fc:	0033f050 	eoreqs	pc, r3, r0, asr r0
    */
}

/**
 * Symbol: _fp_display
 * Address: 0033ea1c
 */
void globals::_fp_display() {
    /*
        33ea1c:	e1a0c00d 	mov	ip, sp
        33ea20:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        33ea24:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        33ea28:	e24cb014 	sub	fp, ip, #20	; 0x14
        33ea2c:	e1a05000 	mov	r5, r0
        33ea30:	e1a04002 	mov	r4, r2
        33ea34:	e59b7018 	ldr	r7, [fp, #24]
        33ea38:	e59b8020 	ldr	r8, [fp, #32]
        33ea3c:	e59b9014 	ldr	r9, [fp, #20]
        33ea40:	e24dd00c 	sub	sp, sp, #12	; 0xc
        33ea44:	e3a06000 	mov	r6, #0	; 0x0
        33ea48:	ed918100 	ldfd	f0, [r1]
        33ea4c:	e3a00000 	mov	r0, #0	; 0x0
        33ea50:	e203a002 	and	sl, r3, #2	; 0x2
        33ea54:	e2031004 	and	r1, r3, #4	; 0x4
        33ea58:	e58d0000 	str	r0, [sp]
        33ea5c:	e2030008 	and	r0, r3, #8	; 0x8
        33ea60:	e3550065 	cmp	r5, #101	; 0x65
        33ea64:	e98d0003 	stmib	sp, {r0, r1}
        33ea68:	0a00013e 	beq	33ef68 <_fp_display+0x54c>
        33ea6c:	ca000006 	bgt	33ea8c <_fp_display+0x70>
        33ea70:	e3350045 	teq	r5, #69	; 0x45
        33ea74:	0a00013b 	beq	33ef68 <_fp_display+0x54c>
        33ea78:	e3350046 	teq	r5, #70	; 0x46
        33ea7c:	0a000032 	beq	33eb4c <_fp_display+0x130>
        33ea80:	e3350047 	teq	r5, #71	; 0x47
        33ea84:	1a00016b 	bne	33f038 <_fp_display+0x61c>
        33ea88:	ea000003 	b	33ea9c <_fp_display+0x80>
        33ea8c:	e3350066 	teq	r5, #102	; 0x66
        33ea90:	0a00002f 	beq	33eb54 <_fp_display+0x138>
        33ea94:	e3350067 	teq	r5, #103	; 0x67
        33ea98:	1a000166 	bne	33f038 <_fp_display+0x61c>
        33ea9c:	e1a00004 	mov	r0, r4
        33eaa0:	ed2d8102 	stfd	f0, [sp, -#8]!
        33eaa4:	e8bd0006 	ldmia	sp!, {r1, r2}
        33eaa8:	ebffff56 	bl	33e808 <vsprintf+0x108>
        33eaac:	e3100001 	tst	r0, #1	; 0x1
        33eab0:	128f1f21 	addne	r1, pc, #132	; 0x84
        33eab4:	1a000006 	bne	33ead4 <_fp_display+0xb8>
        33eab8:	e33a0000 	teq	sl, #0	; 0x0
        33eabc:	128f1f1f 	addne	r1, pc, #124	; 0x7c
        33eac0:	1a000003 	bne	33ead4 <_fp_display+0xb8>
        33eac4:	e59d1008 	ldr	r1, [sp, #8]
        33eac8:	e3310000 	teq	r1, #0	; 0x0
        33eacc:	028f1f1c 	addeq	r1, pc, #112	; 0x70
        33ead0:	128f1f1c 	addne	r1, pc, #112	; 0x70
        33ead4:	e5891000 	str	r1, [r9]
        33ead8:	e3c09001 	bic	r9, r0, #1	; 0x1
        33eadc:	e0899fa9 	add	r9, r9, r9, lsr #31
        33eae0:	e1a090c9 	mov	r9, r9, asr #1
        33eae4:	e5970000 	ldr	r0, [r7]
        33eae8:	e3500001 	cmp	r0, #1	; 0x1
        33eaec:	b3a00001 	movlt	r0, #1	; 0x1
        33eaf0:	b5870000 	strlt	r0, [r7]
        33eaf4:	ba000002 	blt	33eb04 <_fp_display+0xe8>
        33eaf8:	e3500011 	cmp	r0, #17	; 0x11
        33eafc:	c3a01012 	movgt	r1, #18	; 0x12
        33eb00:	ca000001 	bgt	33eb0c <_fp_display+0xf0>
        33eb04:	e5970000 	ldr	r0, [r7]
        33eb08:	e2801001 	add	r1, r0, #1	; 0x1
        33eb0c:	e1a06001 	mov	r6, r1
        33eb10:	e1a00004 	mov	r0, r4
        33eb14:	ebffff15 	bl	33e770 <vsprintf+0x70>
        33eb18:	e0802009 	add	r2, r0, r9
        33eb1c:	e5970000 	ldr	r0, [r7]
        33eb20:	e1520000 	cmp	r2, r0
        33eb24:	aa000001 	bge	33eb30 <_fp_display+0x114>
        33eb28:	e3720004 	cmn	r2, #4	; 0x4
        33eb2c:	aa0000c8 	bge	33ee54 <_fp_display+0x438>
        33eb30:	e5d40001 	ldrb	r0, [r4, #1]
        33eb34:	e5c40000 	strb	r0, [r4]
        33eb38:	ea0000e5 	b	33eed4 <_fp_display+0x4b8>
        33eb3c:	2d000000 	stccs	0, cr0, [r0]
        33eb40:	2b000000 	blcs	33eb48 <_fp_display+0x12c>
        33eb44:	00000000 	andeq	r0, r0, r0
        33eb48:	20000000 	andcs	r0, r0, r0
        33eb4c:	e3a00001 	mov	r0, #1	; 0x1
        33eb50:	e58d0000 	str	r0, [sp]
        33eb54:	e1a00004 	mov	r0, r4
        33eb58:	ed2d8102 	stfd	f0, [sp, -#8]!
        33eb5c:	e8bd0006 	ldmia	sp!, {r1, r2}
        33eb60:	ebffff28 	bl	33e808 <vsprintf+0x108>
        33eb64:	e3100001 	tst	r0, #1	; 0x1
        33eb68:	124f1f0d 	subne	r1, pc, #52	; 0x34
        33eb6c:	1a000006 	bne	33eb8c <_fp_display+0x170>
        33eb70:	e33a0000 	teq	sl, #0	; 0x0
        33eb74:	124f1f0f 	subne	r1, pc, #60	; 0x3c
        33eb78:	1a000003 	bne	33eb8c <_fp_display+0x170>
        33eb7c:	e59d1008 	ldr	r1, [sp, #8]
        33eb80:	e3310000 	teq	r1, #0	; 0x0
        33eb84:	024f1f12 	subeq	r1, pc, #72	; 0x48
        33eb88:	124f1f12 	subne	r1, pc, #72	; 0x48
        33eb8c:	e3c05001 	bic	r5, r0, #1	; 0x1
        33eb90:	e0855fa5 	add	r5, r5, r5, lsr #31
        33eb94:	e1b050c5 	movs	r5, r5, asr #1
        33eb98:	e5891000 	str	r1, [r9]
        33eb9c:	e3a0903c 	mov	r9, #60	; 0x3c
        33eba0:	5a000042 	bpl	33ecb0 <_fp_display+0x294>
        33eba4:	e2655000 	rsb	r5, r5, #0	; 0x0
        33eba8:	e5970000 	ldr	r0, [r7]
        33ebac:	e2801001 	add	r1, r0, #1	; 0x1
        33ebb0:	e1510005 	cmp	r1, r5
        33ebb4:	aa000007 	bge	33ebd8 <_fp_display+0x1bc>
        33ebb8:	e3a01030 	mov	r1, #48	; 0x30
        33ebbc:	e5c41000 	strb	r1, [r4]
        33ebc0:	e3a0002e 	mov	r0, #46	; 0x2e
        33ebc4:	e3a06002 	mov	r6, #2	; 0x2
        33ebc8:	e5c40001 	strb	r0, [r4, #1]
        33ebcc:	e5970000 	ldr	r0, [r7]
        33ebd0:	e5880000 	str	r0, [r8]
        33ebd4:	ea000031 	b	33eca0 <_fp_display+0x284>
        33ebd8:	e0400005 	sub	r0, r0, r5
        33ebdc:	e2806002 	add	r6, r0, #2	; 0x2
        33ebe0:	e3560012 	cmp	r6, #18	; 0x12
        33ebe4:	c2460013 	subgt	r0, r6, #19	; 0x13
        33ebe8:	c3a06013 	movgt	r6, #19	; 0x13
        33ebec:	c5880000 	strgt	r0, [r8]
        33ebf0:	e1a01006 	mov	r1, r6
        33ebf4:	e1a00004 	mov	r0, r4
        33ebf8:	ebfffedc 	bl	33e770 <vsprintf+0x70>
        33ebfc:	e3300000 	teq	r0, #0	; 0x0
        33ec00:	12455001 	subne	r5, r5, #1	; 0x1
        33ec04:	12866001 	addne	r6, r6, #1	; 0x1
        33ec08:	e3350000 	teq	r5, #0	; 0x0
        33ec0c:	05d40001 	ldreqb	r0, [r4, #1]
        33ec10:	05c40000 	streqb	r0, [r4]
        33ec14:	0a00000d 	beq	33ec50 <_fp_display+0x234>
        33ec18:	e3350001 	teq	r5, #1	; 0x1
        33ec1c:	e1a00006 	mov	r0, r6
        33ec20:	1a00000d 	bne	33ec5c <_fp_display+0x240>
        33ec24:	e3500000 	cmp	r0, #0	; 0x0
        33ec28:	da000005 	ble	33ec44 <_fp_display+0x228>
        33ec2c:	e7d41000 	ldrb	r1, [r4, r0]
        33ec30:	e0842000 	add	r2, r4, r0
        33ec34:	e5c21001 	strb	r1, [r2, #1]
        33ec38:	e2400001 	sub	r0, r0, #1	; 0x1
        33ec3c:	e3500000 	cmp	r0, #0	; 0x0
        33ec40:	cafffff9 	bgt	33ec2c <_fp_display+0x210>
        33ec44:	e2866001 	add	r6, r6, #1	; 0x1
        33ec48:	e3a01030 	mov	r1, #48	; 0x30
        33ec4c:	e5c41000 	strb	r1, [r4]
        33ec50:	e3a0002e 	mov	r0, #46	; 0x2e
        33ec54:	e5c40001 	strb	r0, [r4, #1]
        33ec58:	ea000010 	b	33eca0 <_fp_display+0x284>
        33ec5c:	e3500000 	cmp	r0, #0	; 0x0
        33ec60:	da000005 	ble	33ec7c <_fp_display+0x260>
        33ec64:	e7d41000 	ldrb	r1, [r4, r0]
        33ec68:	e0842000 	add	r2, r4, r0
        33ec6c:	e5c21002 	strb	r1, [r2, #2]
        33ec70:	e2400001 	sub	r0, r0, #1	; 0x1
        33ec74:	e3500000 	cmp	r0, #0	; 0x0
        33ec78:	cafffff9 	bgt	33ec64 <_fp_display+0x248>
        33ec7c:	e2866002 	add	r6, r6, #2	; 0x2
        33ec80:	e3a01030 	mov	r1, #48	; 0x30
        33ec84:	e5c41000 	strb	r1, [r4]
        33ec88:	e3a0002e 	mov	r0, #46	; 0x2e
        33ec8c:	e5c40001 	strb	r0, [r4, #1]
        33ec90:	e5c49002 	strb	r9, [r4, #2]
        33ec94:	e2450001 	sub	r0, r5, #1	; 0x1
        33ec98:	e59b101c 	ldr	r1, [fp, #28]
        33ec9c:	e5810000 	str	r0, [r1]
        33eca0:	e5980000 	ldr	r0, [r8]
        33eca4:	e3500000 	cmp	r0, #0	; 0x0
        33eca8:	da00004e 	ble	33ede8 <_fp_display+0x3cc>
        33ecac:	ea00001f 	b	33ed30 <_fp_display+0x314>
        33ecb0:	e5970000 	ldr	r0, [r7]
        33ecb4:	e0850000 	add	r0, r5, r0
        33ecb8:	e2806002 	add	r6, r0, #2	; 0x2
        33ecbc:	e3560012 	cmp	r6, #18	; 0x12
        33ecc0:	da000036 	ble	33eda0 <_fp_display+0x384>
        33ecc4:	e3a01013 	mov	r1, #19	; 0x13
        33ecc8:	e1a06001 	mov	r6, r1
        33eccc:	e1a00004 	mov	r0, r4
        33ecd0:	ebfffea6 	bl	33e770 <vsprintf+0x70>
        33ecd4:	e3300000 	teq	r0, #0	; 0x0
        33ecd8:	12855001 	addne	r5, r5, #1	; 0x1
        33ecdc:	13a06014 	movne	r6, #20	; 0x14
        33ece0:	e2461001 	sub	r1, r6, #1	; 0x1
        33ece4:	e1510005 	cmp	r1, r5
        33ece8:	e3a00000 	mov	r0, #0	; 0x0
        33ecec:	da000014 	ble	33ed44 <_fp_display+0x328>
        33ecf0:	e3550000 	cmp	r5, #0	; 0x0
        33ecf4:	ba000005 	blt	33ed10 <_fp_display+0x2f4>
        33ecf8:	e0841000 	add	r1, r4, r0
        33ecfc:	e5d11001 	ldrb	r1, [r1, #1]
        33ed00:	e7c41000 	strb	r1, [r4, r0]
        33ed04:	e2800001 	add	r0, r0, #1	; 0x1
        33ed08:	e1500005 	cmp	r0, r5
        33ed0c:	dafffff9 	ble	33ecf8 <_fp_display+0x2dc>
        33ed10:	e3a0002e 	mov	r0, #46	; 0x2e
        33ed14:	e0841005 	add	r1, r4, r5
        33ed18:	e5c10001 	strb	r0, [r1, #1]
        33ed1c:	e5970000 	ldr	r0, [r7]
        33ed20:	e0850000 	add	r0, r5, r0
        33ed24:	e2500011 	subs	r0, r0, #17	; 0x11
        33ed28:	e5880000 	str	r0, [r8]
        33ed2c:	0a00002d 	beq	33ede8 <_fp_display+0x3cc>
        33ed30:	e3a0103e 	mov	r1, #62	; 0x3e
        33ed34:	e1a00006 	mov	r0, r6
        33ed38:	e2866001 	add	r6, r6, #1	; 0x1
        33ed3c:	e7c41000 	strb	r1, [r4, r0]
        33ed40:	ea000028 	b	33ede8 <_fp_display+0x3cc>
        33ed44:	e3510000 	cmp	r1, #0	; 0x0
        33ed48:	da000005 	ble	33ed64 <_fp_display+0x348>
        33ed4c:	e0842000 	add	r2, r4, r0
        33ed50:	e5d22001 	ldrb	r2, [r2, #1]
        33ed54:	e7c42000 	strb	r2, [r4, r0]
        33ed58:	e2800001 	add	r0, r0, #1	; 0x1
        33ed5c:	e1510000 	cmp	r1, r0
        33ed60:	cafffff9 	bgt	33ed4c <_fp_display+0x330>
        33ed64:	e0840006 	add	r0, r4, r6
        33ed68:	e5409001 	strb	r9, [r0, -#1]
        33ed6c:	e0450006 	sub	r0, r5, r6
        33ed70:	e2800002 	add	r0, r0, #2	; 0x2
        33ed74:	e59b101c 	ldr	r1, [fp, #28]
        33ed78:	e5810000 	str	r0, [r1]
        33ed7c:	e3a0002e 	mov	r0, #46	; 0x2e
        33ed80:	e1a01006 	mov	r1, r6
        33ed84:	e2866001 	add	r6, r6, #1	; 0x1
        33ed88:	e7c40001 	strb	r0, [r4, r1]
        33ed8c:	e5970000 	ldr	r0, [r7]
        33ed90:	e3300000 	teq	r0, #0	; 0x0
        33ed94:	15880000 	strne	r0, [r8]
        33ed98:	1affffe4 	bne	33ed30 <_fp_display+0x314>
        33ed9c:	ea000011 	b	33ede8 <_fp_display+0x3cc>
        33eda0:	e1a01006 	mov	r1, r6
        33eda4:	e1a00004 	mov	r0, r4
        33eda8:	ebfffe70 	bl	33e770 <vsprintf+0x70>
        33edac:	e3300000 	teq	r0, #0	; 0x0
        33edb0:	12855001 	addne	r5, r5, #1	; 0x1
        33edb4:	12866001 	addne	r6, r6, #1	; 0x1
        33edb8:	e3a00000 	mov	r0, #0	; 0x0
        33edbc:	e3550000 	cmp	r5, #0	; 0x0
        33edc0:	ba000005 	blt	33eddc <_fp_display+0x3c0>
        33edc4:	e0841000 	add	r1, r4, r0
        33edc8:	e5d11001 	ldrb	r1, [r1, #1]
        33edcc:	e7c41000 	strb	r1, [r4, r0]
        33edd0:	e2800001 	add	r0, r0, #1	; 0x1
        33edd4:	e1500005 	cmp	r0, r5
        33edd8:	dafffff9 	ble	33edc4 <_fp_display+0x3a8>
        33eddc:	e3a0002e 	mov	r0, #46	; 0x2e
        33ede0:	e0841005 	add	r1, r4, r5
        33ede4:	e5c10001 	strb	r0, [r1, #1]
        33ede8:	e5970000 	ldr	r0, [r7]
        33edec:	e3300000 	teq	r0, #0	; 0x0
        33edf0:	059d0004 	ldreq	r0, [sp, #4]
        33edf4:	03300000 	teqeq	r0, #0	; 0x0
        33edf8:	02466001 	subeq	r6, r6, #1	; 0x1
        33edfc:	e59d0000 	ldr	r0, [sp]
        33ee00:	e3300000 	teq	r0, #0	; 0x0
        33ee04:	0a00008b 	beq	33f038 <_fp_display+0x61c>
        33ee08:	e3e00000 	mvn	r0, #0	; 0x0
        33ee0c:	e5880000 	str	r0, [r8]
        33ee10:	e7d40006 	ldrb	r0, [r4, r6]
        33ee14:	e330002e 	teq	r0, #46	; 0x2e
        33ee18:	0a000008 	beq	33ee40 <_fp_display+0x424>
        33ee1c:	e0840006 	add	r0, r4, r6
        33ee20:	e5500001 	ldrb	r0, [r0, -#1]
        33ee24:	e3300030 	teq	r0, #48	; 0x30
        33ee28:	1a000004 	bne	33ee40 <_fp_display+0x424>
        33ee2c:	e2466001 	sub	r6, r6, #1	; 0x1
        33ee30:	e0840006 	add	r0, r4, r6
        33ee34:	e5500001 	ldrb	r0, [r0, -#1]
        33ee38:	e3300030 	teq	r0, #48	; 0x30
        33ee3c:	0afffffa 	beq	33ee2c <_fp_display+0x410>
        33ee40:	e0840006 	add	r0, r4, r6
        33ee44:	e5500001 	ldrb	r0, [r0, -#1]
        33ee48:	e330002e 	teq	r0, #46	; 0x2e
        33ee4c:	02466001 	subeq	r6, r6, #1	; 0x1
        33ee50:	ea000078 	b	33f038 <_fp_display+0x61c>
        33ee54:	e3a05066 	mov	r5, #102	; 0x66
        33ee58:	e3520000 	cmp	r2, #0	; 0x0
        33ee5c:	ba00000b 	blt	33ee90 <_fp_display+0x474>
        33ee60:	e3a00000 	mov	r0, #0	; 0x0
        33ee64:	ba000005 	blt	33ee80 <_fp_display+0x464>
        33ee68:	e0841000 	add	r1, r4, r0
        33ee6c:	e5d11001 	ldrb	r1, [r1, #1]
        33ee70:	e7c41000 	strb	r1, [r4, r0]
        33ee74:	e2800001 	add	r0, r0, #1	; 0x1
        33ee78:	e1500002 	cmp	r0, r2
        33ee7c:	dafffff9 	ble	33ee68 <_fp_display+0x44c>
        33ee80:	e3a0002e 	mov	r0, #46	; 0x2e
        33ee84:	e0841002 	add	r1, r4, r2
        33ee88:	e5c10001 	strb	r0, [r1, #1]
        33ee8c:	ea000012 	b	33eedc <_fp_display+0x4c0>
        33ee90:	e2622000 	rsb	r2, r2, #0	; 0x0
        33ee94:	e1b00006 	movs	r0, r6
        33ee98:	4a000004 	bmi	33eeb0 <_fp_display+0x494>
        33ee9c:	e7d41000 	ldrb	r1, [r4, r0]
        33eea0:	e0803002 	add	r3, r0, r2
        33eea4:	e7c41003 	strb	r1, [r4, r3]
        33eea8:	e2500001 	subs	r0, r0, #1	; 0x1
        33eeac:	5afffffa 	bpl	33ee9c <_fp_display+0x480>
        33eeb0:	e0866002 	add	r6, r6, r2
        33eeb4:	e3a00000 	mov	r0, #0	; 0x0
        33eeb8:	e3520000 	cmp	r2, #0	; 0x0
        33eebc:	ba000004 	blt	33eed4 <_fp_display+0x4b8>
        33eec0:	e3a01030 	mov	r1, #48	; 0x30
        33eec4:	e7c41000 	strb	r1, [r4, r0]
        33eec8:	e2800001 	add	r0, r0, #1	; 0x1
        33eecc:	e1500002 	cmp	r0, r2
        33eed0:	dafffffb 	ble	33eec4 <_fp_display+0x4a8>
        33eed4:	e3a0002e 	mov	r0, #46	; 0x2e
        33eed8:	e5c40001 	strb	r0, [r4, #1]
        33eedc:	e59d0004 	ldr	r0, [sp, #4]
        33eee0:	e3300000 	teq	r0, #0	; 0x0
        33eee4:	1a000012 	bne	33ef34 <_fp_display+0x518>
        33eee8:	e3e00000 	mvn	r0, #0	; 0x0
        33eeec:	e5880000 	str	r0, [r8]
        33eef0:	e7d40006 	ldrb	r0, [r4, r6]
        33eef4:	e330002e 	teq	r0, #46	; 0x2e
        33eef8:	0a000008 	beq	33ef20 <_fp_display+0x504>
        33eefc:	e0840006 	add	r0, r4, r6
        33ef00:	e5500001 	ldrb	r0, [r0, -#1]
        33ef04:	e3300030 	teq	r0, #48	; 0x30
        33ef08:	1a000004 	bne	33ef20 <_fp_display+0x504>
        33ef0c:	e2466001 	sub	r6, r6, #1	; 0x1
        33ef10:	e0840006 	add	r0, r4, r6
        33ef14:	e5500001 	ldrb	r0, [r0, -#1]
        33ef18:	e3300030 	teq	r0, #48	; 0x30
        33ef1c:	0afffffa 	beq	33ef0c <_fp_display+0x4f0>
        33ef20:	e0840006 	add	r0, r4, r6
        33ef24:	e5500001 	ldrb	r0, [r0, -#1]
        33ef28:	e330002e 	teq	r0, #46	; 0x2e
        33ef2c:	02466001 	subeq	r6, r6, #1	; 0x1
        33ef30:	ea000008 	b	33ef58 <_fp_display+0x53c>
        33ef34:	e5970000 	ldr	r0, [r7]
        33ef38:	e3500011 	cmp	r0, #17	; 0x11
        33ef3c:	da000005 	ble	33ef58 <_fp_display+0x53c>
        33ef40:	e2400011 	sub	r0, r0, #17	; 0x11
        33ef44:	e3a0103e 	mov	r1, #62	; 0x3e
        33ef48:	e5880000 	str	r0, [r8]
        33ef4c:	e1a00006 	mov	r0, r6
        33ef50:	e2866001 	add	r6, r6, #1	; 0x1
        33ef54:	e7c41000 	strb	r1, [r4, r0]
        33ef58:	e3350066 	teq	r5, #102	; 0x66
        33ef5c:	12453002 	subne	r3, r5, #2	; 0x2
        33ef60:	1a000030 	bne	33f028 <_fp_display+0x60c>
        33ef64:	ea000033 	b	33f038 <_fp_display+0x61c>
        33ef68:	e1a00004 	mov	r0, r4
        33ef6c:	ed2d8102 	stfd	f0, [sp, -#8]!
        33ef70:	e8bd0006 	ldmia	sp!, {r1, r2}
        33ef74:	ebfffe23 	bl	33e808 <vsprintf+0x108>
        33ef78:	e3100001 	tst	r0, #1	; 0x1
        33ef7c:	128f1f2f 	addne	r1, pc, #188	; 0xbc
        33ef80:	1a000006 	bne	33efa0 <_fp_display+0x584>
        33ef84:	e33a0000 	teq	sl, #0	; 0x0
        33ef88:	128f1f2d 	addne	r1, pc, #180	; 0xb4
        33ef8c:	1a000003 	bne	33efa0 <_fp_display+0x584>
        33ef90:	e59d1008 	ldr	r1, [sp, #8]
        33ef94:	e3310000 	teq	r1, #0	; 0x0
        33ef98:	028f1f2a 	addeq	r1, pc, #168	; 0xa8
        33ef9c:	128f1f2a 	addne	r1, pc, #168	; 0xa8
        33efa0:	e5891000 	str	r1, [r9]
        33efa4:	e3c09001 	bic	r9, r0, #1	; 0x1
        33efa8:	e0899fa9 	add	r9, r9, r9, lsr #31
        33efac:	e1a090c9 	mov	r9, r9, asr #1
        33efb0:	e5970000 	ldr	r0, [r7]
        33efb4:	e3500011 	cmp	r0, #17	; 0x11
        33efb8:	da000003 	ble	33efcc <_fp_display+0x5b0>
        33efbc:	e2400011 	sub	r0, r0, #17	; 0x11
        33efc0:	e5880000 	str	r0, [r8]
        33efc4:	e3a00011 	mov	r0, #17	; 0x11
        33efc8:	e5870000 	str	r0, [r7]
        33efcc:	e5970000 	ldr	r0, [r7]
        33efd0:	e2801002 	add	r1, r0, #2	; 0x2
        33efd4:	e1a06001 	mov	r6, r1
        33efd8:	e1a00004 	mov	r0, r4
        33efdc:	ebfffde3 	bl	33e770 <vsprintf+0x70>
        33efe0:	e0802009 	add	r2, r0, r9
        33efe4:	e5d40001 	ldrb	r0, [r4, #1]
        33efe8:	e5c40000 	strb	r0, [r4]
        33efec:	e5970000 	ldr	r0, [r7]
        33eff0:	e3300000 	teq	r0, #0	; 0x0
        33eff4:	059d0004 	ldreq	r0, [sp, #4]
        33eff8:	03300000 	teqeq	r0, #0	; 0x0
        33effc:	13a0002e 	movne	r0, #46	; 0x2e
        33f000:	15c40001 	strneb	r0, [r4, #1]
        33f004:	03a06001 	moveq	r6, #1	; 0x1
        33f008:	e5980000 	ldr	r0, [r8]
        33f00c:	e3500000 	cmp	r0, #0	; 0x0
        33f010:	da000003 	ble	33f024 <_fp_display+0x608>
        33f014:	e3a0103e 	mov	r1, #62	; 0x3e
        33f018:	e1a00006 	mov	r0, r6
        33f01c:	e2866001 	add	r6, r6, #1	; 0x1
        33f020:	e7c41000 	strb	r1, [r4, r0]
        33f024:	e1a03005 	mov	r3, r5
        33f028:	e1a01006 	mov	r1, r6
        33f02c:	e1a00004 	mov	r0, r4
        33f030:	ebfffe46 	bl	33e950 <vsprintf+0x250>
        33f034:	e1a06000 	mov	r6, r0
        33f038:	e1a00006 	mov	r0, r6
        33f03c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        33f040:	2d000000 	stccs	0, cr0, [r0]
        33f044:	2b000000 	blcs	33f04c <_fp_display+0x630>
        33f048:	00000000 	andeq	r0, r0, r0
        33f04c:	20000000 	andcs	r0, r0, r0
    */
}

/**
 * Symbol: _no_fp_display
 * Address: 0033f050
 */
void globals::_no_fp_display() {
    /*
        33f050:	e3a00000 	mov	r0, #0	; 0x0
        33f054:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _printf
 * Address: 0033f058
 */
void globals::_printf() {
    /*
        33f058:	e1a0c00d 	mov	ip, sp
        33f05c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        33f060:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        33f064:	e24cb014 	sub	fp, ip, #20	; 0x14
        33f068:	e28b0008 	add	r0, fp, #8	; 0x8
        33f06c:	e52d0004 	str	r0, [sp, -#4]!
        33f070:	e59f3010 	ldr	r3, [pc, #10]	; 33f088 <_printf+0x30>
        33f074:	e1a0200d 	mov	r2, sp
        33f078:	e59b1004 	ldr	r1, [fp, #4]
        33f07c:	e59f0008 	ldr	r0, [pc, #8]	; 33f08c <_printf+0x34>
        33f080:	ebfffae8 	bl	33dc28 <__vfprintf>
        33f084:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        33f088:	0033f050 	eoreqs	pc, r3, r0, asr r0
        33f08c:	0c105744 	ldceq	7, cr5, [r0], -#272
    */
}

/**
 * Symbol: _fprintf
 * Address: 0033f0c8
 */
void globals::_fprintf() {
    /*
        33f0c8:	e1a0c00d 	mov	ip, sp
        33f0cc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        33f0d0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        33f0d4:	e24cb014 	sub	fp, ip, #20	; 0x14
        33f0d8:	e28b000c 	add	r0, fp, #12	; 0xc
        33f0dc:	e52d0004 	str	r0, [sp, -#4]!
        33f0e0:	e59f300c 	ldr	r3, [pc, #c]	; 33f0f4 <_fprintf+0x2c>
        33f0e4:	e1a0200d 	mov	r2, sp
        33f0e8:	e99b0003 	ldmib	fp, {r0, r1}
        33f0ec:	ebfffacd 	bl	33dc28 <__vfprintf>
        33f0f0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        33f0f4:	0033f050 	eoreqs	pc, r3, r0, asr r0
    */
}

/**
 * Symbol: __push_ddtor(void (*)(void))
 * Address: 00344f78
 */
__push_ddtor(void (*)(void)) {
    /*
        344f78:	e59f100c 	ldr	r1, [pc, #c]	; 344f8c <__push_ddtor(void (*)(void))+0x14>
        344f7c:	e5912000 	ldr	r2, [r1]
        344f80:	e4820004 	str	r0, [r2], #4
        344f84:	e5812000 	str	r2, [r1]
        344f88:	e1a0f00e 	mov	pc, lr
        344f8c:	0c1056f4 	ldceq	6, cr5, [r0], -#976
    */
}

/**
 * Symbol: __pvfn(void)
 * Address: 00344f90
 */
__pvfn(void) {
    /*
        344f90:	e1a0c00d 	mov	ip, sp
        344f94:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        344f98:	e24cb004 	sub	fp, ip, #4	; 0x4
        344f9c:	e59f0010 	ldr	r0, [pc, #10]	; 344fb4 <__pvfn(void)+0x24>
        344fa0:	e28f1f04 	add	r1, pc, #16	; 0x10
        344fa4:	eb62ae2f 	bl	1bf0868 <$fprintf>
        344fa8:	e3a00001 	mov	r0, #1	; 0x1
        344fac:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        344fb0:	ea002d40 	b	3504b8 <_exit>
        344fb4:	0c105784 	ldceq	7, cr5, [r0], -#528
        344fb8:	0d43616c 	stfeqe	f6, [r3, -#432]
        344fbc:	6c207468 	stcvs	4, cr7, [r0], -#416
        344fc0:	726f7567 	rsbvc	r7, pc, #432013312	; 0x19c00000
        344fc4:	68206120 	stmvsda	r0!, {r5, r8, sp, lr}
        344fc8:	70757265 	rsbvcs	r7, r5, r5, ror #4
        344fcc:	20766972 	rsbcss	r6, r6, r2, ror r9
        344fd0:	7475616c 	ldrvcbt	r6, [r5], -#364
        344fd4:	2066756e 	rsbcs	r7, r6, lr, ror #10
        344fd8:	6374696f 	cmnvs	r4, #1818624	; 0x1bc000
        344fdc:	6e0d0d00 	cdpvs	13, 0, cr0, cr13, cr0, {0}
    */
}

/**
 * Symbol: __vc__FPvT1iPFPv_v
 * Address: 0034502c
 */
void globals::() {
    /*
        34502c:	e1300001 	teq	r0, r1
        345030:	01a0f00e 	moveq	pc, lr
        345034:	e1a0c00d 	mov	ip, sp
        345038:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        34503c:	e24cb004 	sub	fp, ip, #4	; 0x4
        345040:	e1a04000 	mov	r4, r0
        345044:	e1a05001 	mov	r5, r1
        345048:	e1a06002 	mov	r6, r2
        34504c:	e1a07003 	mov	r7, r3
        345050:	e1a00004 	mov	r0, r4
        345054:	e1a0e00f 	mov	lr, pc
        345058:	e1a0f007 	mov	pc, r7
        34505c:	e0844006 	add	r4, r4, r6
        345060:	e1340005 	teq	r4, r5
        345064:	1afffff9 	bne	345050 <__vc__FPvT1iPFPv_v+0x24>
        345068:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: __vc__FPvT1iPFPvi_v
 * Address: 0034506c
 */
void globals::() {
    /*
        34506c:	e1300001 	teq	r0, r1
        345070:	01a0f00e 	moveq	pc, lr
        345074:	e1a0c00d 	mov	ip, sp
        345078:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        34507c:	e24cb004 	sub	fp, ip, #4	; 0x4
        345080:	e1a04000 	mov	r4, r0
        345084:	e1a05001 	mov	r5, r1
        345088:	e1a06002 	mov	r6, r2
        34508c:	e1a07003 	mov	r7, r3
        345090:	e1a00004 	mov	r0, r4
        345094:	e3a01000 	mov	r1, #0	; 0x0
        345098:	e1a0e00f 	mov	lr, pc
        34509c:	e1a0f007 	mov	pc, r7
        3450a0:	e0844006 	add	r4, r4, r6
        3450a4:	e1340005 	teq	r4, r5
        3450a8:	1afffff8 	bne	345090 <__vc__FPvT1iPFPvi_v+0x24>
        3450ac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: _chval
 * Address: 003451e4
 */
void globals::_chval() {
    /*
        3451e4:	e59f2030 	ldr	r2, [pc, #30]	; 34521c <_chval+0x38>
        3451e8:	e7d22000 	ldrb	r2, [r2, r0]
        3451ec:	e3120020 	tst	r2, #32	; 0x20
        3451f0:	12400030 	subne	r0, r0, #48	; 0x30
        3451f4:	1a000005 	bne	345210 <_chval+0x2c>
        3451f8:	e3120008 	tst	r2, #8	; 0x8
        3451fc:	12400057 	subne	r0, r0, #87	; 0x57
        345200:	1a000002 	bne	345210 <_chval+0x2c>
        345204:	e3120010 	tst	r2, #16	; 0x10
        345208:	03e00000 	mvneq	r0, #0	; 0x0
        34520c:	12400037 	subne	r0, r0, #55	; 0x37
        345210:	e1500001 	cmp	r0, r1
        345214:	a3e00000 	mvnge	r0, #0	; 0x0
        345218:	e1a0f00e 	mov	pc, lr
        34521c:	0038053c 	eoreqs	r0, r8, ip, lsr r5
        345220:	e1a0c00d 	mov	ip, sp
        345224:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        345228:	e24cb004 	sub	fp, ip, #4	; 0x4
        34522c:	e1a06000 	mov	r6, r0
        345230:	e1a07001 	mov	r7, r1
        345234:	e1a04002 	mov	r4, r2
        345238:	e1a05003 	mov	r5, r3
        34523c:	e59b9004 	ldr	r9, [fp, #4]
        345240:	e24dd004 	sub	sp, sp, #4	; 0x4
        345244:	e3e08000 	mvn	r8, #0	; 0x0
        345248:	e3a0a000 	mov	sl, #0	; 0x0
        34524c:	e59f10c0 	ldr	r1, [pc, #c0]	; 345314 <_chval+0x130>
        345250:	e58d1000 	str	r1, [sp]
        345254:	e2888001 	add	r8, r8, #1	; 0x1
        345258:	e1a00006 	mov	r0, r6
        34525c:	eb62ad86 	bl	1bf087c <$getc>
        345260:	e59d1000 	ldr	r1, [sp]
        345264:	e7d11000 	ldrb	r1, [r1, r0]
        345268:	e3110001 	tst	r1, #1	; 0x1
        34526c:	1afffff8 	bne	345254 <_chval+0x70>
        345270:	e3700001 	cmn	r0, #1	; 0x1
        345274:	03e00000 	mvneq	r0, #0	; 0x0
        345278:	0a00005c 	beq	3453f0 <_chval+0x20c>
        34527c:	e3c44c03 	bic	r4, r4, #768	; 0x300
        345280:	e3590000 	cmp	r9, #0	; 0x0
        345284:	da00000a 	ble	3452b4 <_chval+0xd0>
        345288:	e3140020 	tst	r4, #32	; 0x20
        34528c:	0a000008 	beq	3452b4 <_chval+0xd0>
        345290:	e330002b 	teq	r0, #43	; 0x2b
        345294:	0a000002 	beq	3452a4 <_chval+0xc0>
        345298:	e330002d 	teq	r0, #45	; 0x2d
        34529c:	1a000004 	bne	3452b4 <_chval+0xd0>
        3452a0:	e3844c02 	orr	r4, r4, #512	; 0x200
        3452a4:	e2888001 	add	r8, r8, #1	; 0x1
        3452a8:	e1a00006 	mov	r0, r6
        3452ac:	eb62ad72 	bl	1bf087c <$getc>
        3452b0:	e2499001 	sub	r9, r9, #1	; 0x1
        3452b4:	e3590000 	cmp	r9, #0	; 0x0
        3452b8:	da000019 	ble	345324 <_chval+0x140>
        3452bc:	e3300030 	teq	r0, #48	; 0x30
        3452c0:	1a000017 	bne	345324 <_chval+0x140>
        3452c4:	e3844c01 	orr	r4, r4, #256	; 0x100
        3452c8:	e2499001 	sub	r9, r9, #1	; 0x1
        3452cc:	e2888001 	add	r8, r8, #1	; 0x1
        3452d0:	e1a00006 	mov	r0, r6
        3452d4:	eb62ad68 	bl	1bf087c <$getc>
        3452d8:	e3590000 	cmp	r9, #0	; 0x0
        3452dc:	da00000d 	ble	345318 <_chval+0x134>
        3452e0:	e3300078 	teq	r0, #120	; 0x78
        3452e4:	13300058 	teqne	r0, #88	; 0x58
        3452e8:	1a00000a 	bne	345318 <_chval+0x134>
        3452ec:	e3350000 	teq	r5, #0	; 0x0
        3452f0:	13350010 	teqne	r5, #16	; 0x10
        3452f4:	1a000007 	bne	345318 <_chval+0x134>
        3452f8:	e3c44c01 	bic	r4, r4, #256	; 0x100
        3452fc:	e2499001 	sub	r9, r9, #1	; 0x1
        345300:	e2888001 	add	r8, r8, #1	; 0x1
        345304:	e1a00006 	mov	r0, r6
        345308:	eb62ad5b 	bl	1bf087c <$getc>
        34530c:	e3a05010 	mov	r5, #16	; 0x10
        345310:	ea00000c 	b	345348 <_chval+0x164>
        345314:	0038053c 	eoreqs	r0, r8, ip, lsr r5
        345318:	e3350000 	teq	r5, #0	; 0x0
        34531c:	03a05008 	moveq	r5, #8	; 0x8
        345320:	0a000008 	beq	345348 <_chval+0x164>
        345324:	e3350000 	teq	r5, #0	; 0x0
        345328:	03a0500a 	moveq	r5, #10	; 0xa
        34532c:	ea000005 	b	345348 <_chval+0x164>
        345330:	e3844c01 	orr	r4, r4, #256	; 0x100
        345334:	e2499001 	sub	r9, r9, #1	; 0x1
        345338:	e02a0a95 	mla	sl, r5, sl, r0
        34533c:	e2888001 	add	r8, r8, #1	; 0x1
        345340:	e1a00006 	mov	r0, r6
        345344:	eb62ad4c 	bl	1bf087c <$getc>
        345348:	e3590000 	cmp	r9, #0	; 0x0
        34534c:	da000003 	ble	345360 <_chval+0x17c>
        345350:	e1a01005 	mov	r1, r5
        345354:	ebffffa2 	bl	3451e4 <_chval>
        345358:	e3500000 	cmp	r0, #0	; 0x0
        34535c:	aafffff3 	bge	345330 <_chval+0x14c>
        345360:	e1a00006 	mov	r0, r6
        345364:	eb0028f0 	bl	34f72c <__backspace>
        345368:	e3140c01 	tst	r4, #256	; 0x100
        34536c:	03e00001 	mvneq	r0, #1	; 0x1
        345370:	0a00001e 	beq	3453f0 <_chval+0x20c>
        345374:	e3140001 	tst	r4, #1	; 0x1
        345378:	1a00001b 	bne	3453ec <_chval+0x208>
        34537c:	e3140020 	tst	r4, #32	; 0x20
        345380:	0a00000e 	beq	3453c0 <_chval+0x1dc>
        345384:	e3140c02 	tst	r4, #512	; 0x200
        345388:	01a0000a 	moveq	r0, sl
        34538c:	126a0000 	rsbne	r0, sl, #0	; 0x0
        345390:	e5971000 	ldr	r1, [r7]
        345394:	e2811003 	add	r1, r1, #3	; 0x3
        345398:	e3c11003 	bic	r1, r1, #3	; 0x3
        34539c:	e2811004 	add	r1, r1, #4	; 0x4
        3453a0:	e5871000 	str	r1, [r7]
        3453a4:	e5111004 	ldr	r1, [r1, -#4]
        3453a8:	e3140004 	tst	r4, #4	; 0x4
        3453ac:	05810000 	streq	r0, [r1]
        3453b0:	15c10001 	strneb	r0, [r1, #1]
        3453b4:	11a00440 	movne	r0, r0, asr #8
        3453b8:	15c10000 	strneb	r0, [r1]
        3453bc:	ea00000a 	b	3453ec <_chval+0x208>
        3453c0:	e5970000 	ldr	r0, [r7]
        3453c4:	e2800003 	add	r0, r0, #3	; 0x3
        3453c8:	e3c00003 	bic	r0, r0, #3	; 0x3
        3453cc:	e2800004 	add	r0, r0, #4	; 0x4
        3453d0:	e5870000 	str	r0, [r7]
        3453d4:	e5100004 	ldr	r0, [r0, -#4]
        3453d8:	e3140004 	tst	r4, #4	; 0x4
        3453dc:	0580a000 	streq	sl, [r0]
        3453e0:	15c0a001 	strneb	sl, [r0, #1]
        3453e4:	11a0142a 	movne	r1, sl, lsr #8
        3453e8:	15c01000 	strneb	r1, [r0]
        3453ec:	e1a00008 	mov	r0, r8
        3453f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: _strtoul
 * Address: 003453f4
 */
void globals::_strtoul() {
    /*
        3453f4:	e1a0c00d 	mov	ip, sp
        3453f8:	e92ddff7 	stmdb	sp!, {r0, r1, r2, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        3453fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        345400:	e1a05000 	mov	r5, r0
        345404:	e1a04002 	mov	r4, r2
        345408:	e1a06000 	mov	r6, r0
        34540c:	e3a09000 	mov	r9, #0	; 0x0
        345410:	e3a0a000 	mov	sl, #0	; 0x0
        345414:	e59f104c 	ldr	r1, [pc, #4c]	; 345468 <_strtoul+0x74>
        345418:	e4d60001 	ldrb	r0, [r6], #1
        34541c:	e3300000 	teq	r0, #0	; 0x0
        345420:	0a000014 	beq	345478 <_strtoul+0x84>
        345424:	e7d12000 	ldrb	r2, [r1, r0]
        345428:	e3120001 	tst	r2, #1	; 0x1
        34542c:	1afffff9 	bne	345418 <_strtoul+0x24>
        345430:	e3300030 	teq	r0, #48	; 0x30
        345434:	1a00000f 	bne	345478 <_strtoul+0x84>
        345438:	e3a09001 	mov	r9, #1	; 0x1
        34543c:	e4d60001 	ldrb	r0, [r6], #1
        345440:	e3300078 	teq	r0, #120	; 0x78
        345444:	13300058 	teqne	r0, #88	; 0x58
        345448:	1a000007 	bne	34546c <_strtoul+0x78>
        34544c:	e3340000 	teq	r4, #0	; 0x0
        345450:	13340010 	teqne	r4, #16	; 0x10
        345454:	1a000007 	bne	345478 <_strtoul+0x84>
        345458:	e3a09000 	mov	r9, #0	; 0x0
        34545c:	e3a04010 	mov	r4, #16	; 0x10
        345460:	e4d60001 	ldrb	r0, [r6], #1
        345464:	ea000005 	b	345480 <_strtoul+0x8c>
        345468:	0038053c 	eoreqs	r0, r8, ip, lsr r5
        34546c:	e3340000 	teq	r4, #0	; 0x0
        345470:	03a04008 	moveq	r4, #8	; 0x8
        345474:	0a000001 	beq	345480 <_strtoul+0x8c>
        345478:	e3340000 	teq	r4, #0	; 0x0
        34547c:	03a0400a 	moveq	r4, #10	; 0xa
        345480:	e3a07000 	mov	r7, #0	; 0x0
        345484:	e3a08000 	mov	r8, #0	; 0x0
        345488:	e1a01004 	mov	r1, r4
        34548c:	ebffff54 	bl	3451e4 <_chval>
        345490:	e3500000 	cmp	r0, #0	; 0x0
        345494:	ba00000c 	blt	3454cc <_strtoul+0xd8>
        345498:	e3a09001 	mov	r9, #1	; 0x1
        34549c:	e0200498 	mla	r0, r8, r4, r0
        3454a0:	e0010497 	mul	r1, r7, r4
        3454a4:	e0817820 	add	r7, r1, r0, lsr #16
        3454a8:	e1a08800 	mov	r8, r0, lsl #16
        3454ac:	e1a08828 	mov	r8, r8, lsr #16
        3454b0:	e3570801 	cmp	r7, #65536	; 0x10000
        3454b4:	23a0a001 	movcs	sl, #1	; 0x1
        3454b8:	e4d60001 	ldrb	r0, [r6], #1
        3454bc:	e1a01004 	mov	r1, r4
        3454c0:	ebffff47 	bl	3451e4 <_chval>
        3454c4:	e3500000 	cmp	r0, #0	; 0x0
        3454c8:	aafffff2 	bge	345498 <_strtoul+0xa4>
        3454cc:	e51b1030 	ldr	r1, [fp, -#48]
        3454d0:	e3310000 	teq	r1, #0	; 0x0
        3454d4:	0a000004 	beq	3454ec <_strtoul+0xf8>
        3454d8:	e3390000 	teq	r9, #0	; 0x0
        3454dc:	01a00005 	moveq	r0, r5
        3454e0:	12460001 	subne	r0, r6, #1	; 0x1
        3454e4:	e51b1030 	ldr	r1, [fp, -#48]
        3454e8:	e5810000 	str	r0, [r1]
        3454ec:	e33a0000 	teq	sl, #0	; 0x0
        3454f0:	01880807 	orreq	r0, r8, r7, lsl #16
        3454f4:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3454f8:	eb62248d 	bl	1bce734 <$__GetErrNo(void)>
        3454fc:	e3a01002 	mov	r1, #2	; 0x2
        345500:	e5801000 	str	r1, [r0]
        345504:	e3e00000 	mvn	r0, #0	; 0x0
        345508:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: _vfscanf
 * Address: 00345da0
 */
void globals::_vfscanf() {
    /*
        345da0:	e1a0c00d 	mov	ip, sp
        345da4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        345da8:	e24cb004 	sub	fp, ip, #4	; 0x4
        345dac:	e1a04000 	mov	r4, r0
        345db0:	e1a05002 	mov	r5, r2
        345db4:	e24dd004 	sub	sp, sp, #4	; 0x4
        345db8:	e1a09001 	mov	r9, r1
        345dbc:	e3a07000 	mov	r7, #0	; 0x0
        345dc0:	e3a0a000 	mov	sl, #0	; 0x0
        345dc4:	e59f2058 	ldr	r2, [pc, #58]	; 345e24 <_vfscanf+0x84>
        345dc8:	e58d2000 	str	r2, [sp]
        345dcc:	e4d96001 	ldrb	r6, [r9], #1
        345dd0:	e3360000 	teq	r6, #0	; 0x0
        345dd4:	0a000013 	beq	345e28 <_vfscanf+0x88>
        345dd8:	e3360025 	teq	r6, #37	; 0x25
        345ddc:	0a000029 	beq	345e88 <_vfscanf+0xe8>
        345de0:	e59d2000 	ldr	r2, [sp]
        345de4:	e7d20006 	ldrb	r0, [r2, r6]
        345de8:	e3100001 	tst	r0, #1	; 0x1
        345dec:	0a000019 	beq	345e58 <_vfscanf+0xb8>
        345df0:	e4d90001 	ldrb	r0, [r9], #1
        345df4:	e59d2000 	ldr	r2, [sp]
        345df8:	e7d20000 	ldrb	r0, [r2, r0]
        345dfc:	e3100001 	tst	r0, #1	; 0x1
        345e00:	1afffffa 	bne	345df0 <_vfscanf+0x50>
        345e04:	e2499001 	sub	r9, r9, #1	; 0x1
        345e08:	e1a00004 	mov	r0, r4
        345e0c:	eb62aa9a 	bl	1bf087c <$getc>
        345e10:	e59d2000 	ldr	r2, [sp]
        345e14:	e7d20000 	ldrb	r0, [r2, r0]
        345e18:	e3100001 	tst	r0, #1	; 0x1
        345e1c:	0a00000a 	beq	345e4c <_vfscanf+0xac>
        345e20:	ea000002 	b	345e30 <_vfscanf+0x90>
        345e24:	0038053c 	eoreqs	r0, r8, ip, lsr r5
        345e28:	e1a00007 	mov	r0, r7
        345e2c:	ea000111 	b	346278 <_vfscanf+0x4d8>
        345e30:	e28aa001 	add	sl, sl, #1	; 0x1
        345e34:	e1a00004 	mov	r0, r4
        345e38:	eb62aa8f 	bl	1bf087c <$getc>
        345e3c:	e59d2000 	ldr	r2, [sp]
        345e40:	e7d20000 	ldrb	r0, [r2, r0]
        345e44:	e3100001 	tst	r0, #1	; 0x1
        345e48:	1afffff8 	bne	345e30 <_vfscanf+0x90>
        345e4c:	e1a00004 	mov	r0, r4
        345e50:	eb002635 	bl	34f72c <__backspace>
        345e54:	eaffffdc 	b	345dcc <_vfscanf+0x2c>
        345e58:	e1a00004 	mov	r0, r4
        345e5c:	eb62aa86 	bl	1bf087c <$getc>
        345e60:	e1a08000 	mov	r8, r0
        345e64:	e1300006 	teq	r0, r6
        345e68:	0a00006c 	beq	346020 <_vfscanf+0x280>
        345e6c:	e1a00004 	mov	r0, r4
        345e70:	eb00262d 	bl	34f72c <__backspace>
        345e74:	e3780001 	cmn	r8, #1	; 0x1
        345e78:	03370000 	teqeq	r7, #0	; 0x0
        345e7c:	1affffe9 	bne	345e28 <_vfscanf+0x88>
        345e80:	e3e00000 	mvn	r0, #0	; 0x0
        345e84:	ea0000fb 	b	346278 <_vfscanf+0x4d8>
        345e88:	e3a08000 	mov	r8, #0	; 0x0
        345e8c:	e3a06000 	mov	r6, #0	; 0x0
        345e90:	e5d90000 	ldrb	r0, [r9]
        345e94:	e330002a 	teq	r0, #42	; 0x2a
        345e98:	02899001 	addeq	r9, r9, #1	; 0x1
        345e9c:	03a06001 	moveq	r6, #1	; 0x1
        345ea0:	e4d90001 	ldrb	r0, [r9], #1
        345ea4:	e59d2000 	ldr	r2, [sp]
        345ea8:	e7d21000 	ldrb	r1, [r2, r0]
        345eac:	e3110020 	tst	r1, #32	; 0x20
        345eb0:	159f1004 	ldrne	r1, [pc, #4]	; 345ebc <_vfscanf+0x11c>
        345eb4:	1a000003 	bne	345ec8 <_vfscanf+0x128>
        345eb8:	ea00000c 	b	345ef0 <_vfscanf+0x150>
        345ebc:	0ccccccc 	stceql	12, cr12, [ip], #816
        345ec0:	e1580001 	cmp	r8, r1
        345ec4:	caffffd7 	bgt	345e28 <_vfscanf+0x88>
        345ec8:	e0882108 	add	r2, r8, r8, lsl #2
        345ecc:	e0800082 	add	r0, r0, r2, lsl #1
        345ed0:	e2508030 	subs	r8, r0, #48	; 0x30
        345ed4:	4affffd3 	bmi	345e28 <_vfscanf+0x88>
        345ed8:	e3866008 	orr	r6, r6, #8	; 0x8
        345edc:	e4d90001 	ldrb	r0, [r9], #1
        345ee0:	e59d2000 	ldr	r2, [sp]
        345ee4:	e7d22000 	ldrb	r2, [r2, r0]
        345ee8:	e3120020 	tst	r2, #32	; 0x20
        345eec:	1afffff3 	bne	345ec0 <_vfscanf+0x120>
        345ef0:	e3160008 	tst	r6, #8	; 0x8
        345ef4:	03e08102 	mvneq	r8, #-2147483648	; 0x80000000
        345ef8:	e330006c 	teq	r0, #108	; 0x6c
        345efc:	04d90001 	ldreqb	r0, [r9], #1
        345f00:	03866002 	orreq	r6, r6, #2	; 0x2
        345f04:	0a000006 	beq	345f24 <_vfscanf+0x184>
        345f08:	e330004c 	teq	r0, #76	; 0x4c
        345f0c:	04d90001 	ldreqb	r0, [r9], #1
        345f10:	03866012 	orreq	r6, r6, #18	; 0x12
        345f14:	0a000002 	beq	345f24 <_vfscanf+0x184>
        345f18:	e3300068 	teq	r0, #104	; 0x68
        345f1c:	04d90001 	ldreqb	r0, [r9], #1
        345f20:	03866004 	orreq	r6, r6, #4	; 0x4
        345f24:	e3500066 	cmp	r0, #102	; 0x66
        345f28:	0a00006c 	beq	3460e0 <_vfscanf+0x340>
        345f2c:	ca000014 	bgt	345f84 <_vfscanf+0x1e4>
        345f30:	e350005b 	cmp	r0, #91	; 0x5b
        345f34:	0a000099 	beq	3461a0 <_vfscanf+0x400>
        345f38:	ca000007 	bgt	345f5c <_vfscanf+0x1bc>
        345f3c:	e3300025 	teq	r0, #37	; 0x25
        345f40:	0a000031 	beq	34600c <_vfscanf+0x26c>
        345f44:	e3300045 	teq	r0, #69	; 0x45
        345f48:	13300047 	teqne	r0, #71	; 0x47
        345f4c:	0a000063 	beq	3460e0 <_vfscanf+0x340>
        345f50:	e3300058 	teq	r0, #88	; 0x58
        345f54:	1affffb3 	bne	345e28 <_vfscanf+0x88>
        345f58:	ea000024 	b	345ff0 <_vfscanf+0x250>
        345f5c:	e3300063 	teq	r0, #99	; 0x63
        345f60:	0a000036 	beq	346040 <_vfscanf+0x2a0>
        345f64:	e3300064 	teq	r0, #100	; 0x64
        345f68:	01a03008 	moveq	r3, r8
        345f6c:	092d0008 	stmeqdb	sp!, {r3}
        345f70:	03862020 	orreq	r2, r6, #32	; 0x20
        345f74:	0a000083 	beq	346188 <_vfscanf+0x3e8>
        345f78:	e3300065 	teq	r0, #101	; 0x65
        345f7c:	1affffa9 	bne	345e28 <_vfscanf+0x88>
        345f80:	ea000056 	b	3460e0 <_vfscanf+0x340>
        345f84:	e3500070 	cmp	r0, #112	; 0x70
        345f88:	01a03008 	moveq	r3, r8
        345f8c:	092d0008 	stmeqdb	sp!, {r3}
        345f90:	03c62006 	biceq	r2, r6, #6	; 0x6
        345f94:	0a000018 	beq	345ffc <_vfscanf+0x25c>
        345f98:	ca00000e 	bgt	345fd8 <_vfscanf+0x238>
        345f9c:	e3300067 	teq	r0, #103	; 0x67
        345fa0:	0a00004e 	beq	3460e0 <_vfscanf+0x340>
        345fa4:	e3300069 	teq	r0, #105	; 0x69
        345fa8:	0a000052 	beq	3460f8 <_vfscanf+0x358>
        345fac:	e330006e 	teq	r0, #110	; 0x6e
        345fb0:	0a000057 	beq	346114 <_vfscanf+0x374>
        345fb4:	e330006f 	teq	r0, #111	; 0x6f
        345fb8:	1affff9a 	bne	345e28 <_vfscanf+0x88>
        345fbc:	e1a03008 	mov	r3, r8
        345fc0:	e92d0008 	stmdb	sp!, {r3}
        345fc4:	e3862020 	orr	r2, r6, #32	; 0x20
        345fc8:	e1a01005 	mov	r1, r5
        345fcc:	e1a00004 	mov	r0, r4
        345fd0:	e3a03008 	mov	r3, #8	; 0x8
        345fd4:	ea00006e 	b	346194 <_vfscanf+0x3f4>
        345fd8:	e3300073 	teq	r0, #115	; 0x73
        345fdc:	0a000060 	beq	346164 <_vfscanf+0x3c4>
        345fe0:	e3300075 	teq	r0, #117	; 0x75
        345fe4:	0a000064 	beq	34617c <_vfscanf+0x3dc>
        345fe8:	e3300078 	teq	r0, #120	; 0x78
        345fec:	1affff8d 	bne	345e28 <_vfscanf+0x88>
        345ff0:	e1a03008 	mov	r3, r8
        345ff4:	e92d0008 	stmdb	sp!, {r3}
        345ff8:	e3862020 	orr	r2, r6, #32	; 0x20
        345ffc:	e1a01005 	mov	r1, r5
        346000:	e1a00004 	mov	r0, r4
        346004:	e3a03010 	mov	r3, #16	; 0x10
        346008:	ea000061 	b	346194 <_vfscanf+0x3f4>
        34600c:	e1a00004 	mov	r0, r4
        346010:	eb62aa19 	bl	1bf087c <$getc>
        346014:	e1a06000 	mov	r6, r0
        346018:	e3300025 	teq	r0, #37	; 0x25
        34601c:	1a000001 	bne	346028 <_vfscanf+0x288>
        346020:	e28aa001 	add	sl, sl, #1	; 0x1
        346024:	eaffff68 	b	345dcc <_vfscanf+0x2c>
        346028:	e1a00004 	mov	r0, r4
        34602c:	eb0025be 	bl	34f72c <__backspace>
        346030:	e3760001 	cmn	r6, #1	; 0x1
        346034:	03370000 	teqeq	r7, #0	; 0x0
        346038:	1affff7a 	bne	345e28 <_vfscanf+0x88>
        34603c:	eaffff8f 	b	345e80 <_vfscanf+0xe0>
        346040:	e3160008 	tst	r6, #8	; 0x8
        346044:	03a08001 	moveq	r8, #1	; 0x1
        346048:	e3a01000 	mov	r1, #0	; 0x0
        34604c:	e2166001 	ands	r6, r6, #1	; 0x1
        346050:	e52d1004 	str	r1, [sp, -#4]!
        346054:	1a000006 	bne	346074 <_vfscanf+0x2d4>
        346058:	e5950000 	ldr	r0, [r5]
        34605c:	e2800003 	add	r0, r0, #3	; 0x3
        346060:	e3c00003 	bic	r0, r0, #3	; 0x3
        346064:	e2800004 	add	r0, r0, #4	; 0x4
        346068:	e5850000 	str	r0, [r5]
        34606c:	e5301004 	ldr	r1, [r0, -#4]!
        346070:	e58d1000 	str	r1, [sp]
        346074:	e3580000 	cmp	r8, #0	; 0x0
        346078:	1a000001 	bne	346084 <_vfscanf+0x2e4>
        34607c:	e1a00007 	mov	r0, r7
        346080:	ea000008 	b	3460a8 <_vfscanf+0x308>
        346084:	da000010 	ble	3460cc <_vfscanf+0x32c>
        346088:	e28aa001 	add	sl, sl, #1	; 0x1
        34608c:	e1a00004 	mov	r0, r4
        346090:	eb62a9f9 	bl	1bf087c <$getc>
        346094:	e3700001 	cmn	r0, #1	; 0x1
        346098:	1a000003 	bne	3460ac <_vfscanf+0x30c>
        34609c:	e3370000 	teq	r7, #0	; 0x0
        3460a0:	1afffff5 	bne	34607c <_vfscanf+0x2dc>
        3460a4:	e3e00000 	mvn	r0, #0	; 0x0
        3460a8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3460ac:	e3360000 	teq	r6, #0	; 0x0
        3460b0:	1a000002 	bne	3460c0 <_vfscanf+0x320>
        3460b4:	e59d1000 	ldr	r1, [sp]
        3460b8:	e4c10001 	strb	r0, [r1], #1
        3460bc:	e58d1000 	str	r1, [sp]
        3460c0:	e2488001 	sub	r8, r8, #1	; 0x1
        3460c4:	e3580000 	cmp	r8, #0	; 0x0
        3460c8:	caffffee 	bgt	346088 <_vfscanf+0x2e8>
        3460cc:	e28dd004 	add	sp, sp, #4	; 0x4
        3460d0:	e3360000 	teq	r6, #0	; 0x0
        3460d4:	1affff3c 	bne	345dcc <_vfscanf+0x2c>
        3460d8:	e2877001 	add	r7, r7, #1	; 0x1
        3460dc:	eaffff3a 	b	345dcc <_vfscanf+0x2c>
        3460e0:	e1a03008 	mov	r3, r8
        3460e4:	e1a02006 	mov	r2, r6
        3460e8:	e1a01005 	mov	r1, r5
        3460ec:	e1a00004 	mov	r0, r4
        3460f0:	ebfffdd7 	bl	345854 <atof+0xd0>
        3460f4:	ea000059 	b	346260 <_vfscanf+0x4c0>
        3460f8:	e1a03008 	mov	r3, r8
        3460fc:	e92d0008 	stmdb	sp!, {r3}
        346100:	e3862020 	orr	r2, r6, #32	; 0x20
        346104:	e1a01005 	mov	r1, r5
        346108:	e1a00004 	mov	r0, r4
        34610c:	e3a03000 	mov	r3, #0	; 0x0
        346110:	ea00001f 	b	346194 <_vfscanf+0x3f4>
        346114:	e3160004 	tst	r6, #4	; 0x4
        346118:	0a000009 	beq	346144 <_vfscanf+0x3a4>
        34611c:	e5951000 	ldr	r1, [r5]
        346120:	e2811003 	add	r1, r1, #3	; 0x3
        346124:	e3c11003 	bic	r1, r1, #3	; 0x3
        346128:	e2811004 	add	r1, r1, #4	; 0x4
        34612c:	e5851000 	str	r1, [r5]
        346130:	e5111004 	ldr	r1, [r1, -#4]
        346134:	e5c1a001 	strb	sl, [r1, #1]
        346138:	e1a0044a 	mov	r0, sl, asr #8
        34613c:	e5c10000 	strb	r0, [r1]
        346140:	eaffff21 	b	345dcc <_vfscanf+0x2c>
        346144:	e5950000 	ldr	r0, [r5]
        346148:	e2800003 	add	r0, r0, #3	; 0x3
        34614c:	e3c00003 	bic	r0, r0, #3	; 0x3
        346150:	e2800004 	add	r0, r0, #4	; 0x4
        346154:	e5850000 	str	r0, [r5]
        346158:	e5100004 	ldr	r0, [r0, -#4]
        34615c:	e580a000 	str	sl, [r0]
        346160:	eaffff19 	b	345dcc <_vfscanf+0x2c>
        346164:	e1a03008 	mov	r3, r8
        346168:	e1a02006 	mov	r2, r6
        34616c:	e1a01005 	mov	r1, r5
        346170:	e1a00004 	mov	r0, r4
        346174:	ebfffea5 	bl	345c10 <atof+0x48c>
        346178:	ea000038 	b	346260 <_vfscanf+0x4c0>
        34617c:	e1a03008 	mov	r3, r8
        346180:	e92d0008 	stmdb	sp!, {r3}
        346184:	e1a02006 	mov	r2, r6
        346188:	e1a01005 	mov	r1, r5
        34618c:	e1a00004 	mov	r0, r4
        346190:	e3a0300a 	mov	r3, #10	; 0xa
        346194:	ebfffc21 	bl	345220 <_chval+0x3c>
        346198:	e28dd004 	add	sp, sp, #4	; 0x4
        34619c:	ea00002f 	b	346260 <_vfscanf+0x4c0>
        3461a0:	e24dd020 	sub	sp, sp, #32	; 0x20
        3461a4:	e3a02000 	mov	r2, #0	; 0x0
        3461a8:	e4d90001 	ldrb	r0, [r9], #1
        3461ac:	e330005e 	teq	r0, #94	; 0x5e
        3461b0:	03a02001 	moveq	r2, #1	; 0x1
        3461b4:	04d90001 	ldreqb	r0, [r9], #1
        3461b8:	e3a01000 	mov	r1, #0	; 0x0
        3461bc:	e3a0c000 	mov	ip, #0	; 0x0
        3461c0:	e78dc101 	str	ip, [sp, r1, lsl #2]
        3461c4:	e2811001 	add	r1, r1, #1	; 0x1
        3461c8:	e3510008 	cmp	r1, #8	; 0x8
        3461cc:	bafffffb 	blt	3461c0 <_vfscanf+0x420>
        3461d0:	e3a0c001 	mov	ip, #1	; 0x1
        3461d4:	e3500000 	cmp	r0, #0	; 0x0
        3461d8:	01a00007 	moveq	r0, r7
        3461dc:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        3461e0:	e1a01000 	mov	r1, r0
        3461e4:	b281101f 	addlt	r1, r1, #31	; 0x1f
        3461e8:	e1a012c1 	mov	r1, r1, asr #5
        3461ec:	e79d3101 	ldr	r3, [sp, r1, lsl #2]
        3461f0:	e1a01000 	mov	r1, r0
        3461f4:	b2611000 	rsblt	r1, r1, #0	; 0x0
        3461f8:	e201101f 	and	r1, r1, #31	; 0x1f
        3461fc:	b2611000 	rsblt	r1, r1, #0	; 0x0
        346200:	e183111c 	orr	r1, r3, ip, lsl r1
        346204:	b280001f 	addlt	r0, r0, #31	; 0x1f
        346208:	e1a002c0 	mov	r0, r0, asr #5
        34620c:	e78d1100 	str	r1, [sp, r0, lsl #2]
        346210:	e4d90001 	ldrb	r0, [r9], #1
        346214:	e330005d 	teq	r0, #93	; 0x5d
        346218:	1affffed 	bne	3461d4 <_vfscanf+0x434>
        34621c:	e3320000 	teq	r2, #0	; 0x0
        346220:	0a000006 	beq	346240 <_vfscanf+0x4a0>
        346224:	e3a00000 	mov	r0, #0	; 0x0
        346228:	e79d1100 	ldr	r1, [sp, r0, lsl #2]
        34622c:	e1e01001 	mvn	r1, r1
        346230:	e78d1100 	str	r1, [sp, r0, lsl #2]
        346234:	e2800001 	add	r0, r0, #1	; 0x1
        346238:	e3500008 	cmp	r0, #8	; 0x8
        34623c:	bafffff9 	blt	346228 <_vfscanf+0x488>
        346240:	e1a0300d 	mov	r3, sp
        346244:	e92d0008 	stmdb	sp!, {r3}
        346248:	e1a03008 	mov	r3, r8
        34624c:	e1a02006 	mov	r2, r6
        346250:	e1a01005 	mov	r1, r5
        346254:	e1a00004 	mov	r0, r4
        346258:	ebfffe9d 	bl	345cd4 <atof+0x550>
        34625c:	e28dd024 	add	sp, sp, #36	; 0x24
        346260:	e3500000 	cmp	r0, #0	; 0x0
        346264:	aa000004 	bge	34627c <_vfscanf+0x4dc>
        346268:	e3700001 	cmn	r0, #1	; 0x1
        34626c:	03370000 	teqeq	r7, #0	; 0x0
        346270:	1afffeec 	bne	345e28 <_vfscanf+0x88>
        346274:	e3e00000 	mvn	r0, #0	; 0x0
        346278:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        34627c:	e3160001 	tst	r6, #1	; 0x1
        346280:	02877001 	addeq	r7, r7, #1	; 0x1
        346284:	e08aa000 	add	sl, sl, r0
        346288:	eafffecf 	b	345dcc <_vfscanf+0x2c>
    */
}

/**
 * Symbol: __signbitd
 * Address: 0034713c
 */
void globals::() {
    /*
        34713c:	e92d0003 	stmdb	sp!, {r0, r1}
        347140:	ecbd8102 	ldfd	f0, [sp], #8
        347144:	ed2d8102 	stfd	f0, [sp, -#8]!
        347148:	e59d0000 	ldr	r0, [sp]
        34714c:	e2000102 	and	r0, r0, #-2147483648	; 0x80000000
        347150:	e3300102 	teq	r0, #-2147483648	; 0x80000000
        347154:	13a00000 	movne	r0, #0	; 0x0
        347158:	03a00001 	moveq	r0, #1	; 0x1
        34715c:	e28dd008 	add	sp, sp, #8	; 0x8
        347160:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _sys_msg_via_stderr
 * Address: 0034efdc
 */
void globals::_sys_msg_via_stderr() {
    /*
        34efdc:	e1a0c00d 	mov	ip, sp
        34efe0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        34efe4:	e24cb004 	sub	fp, ip, #4	; 0x4
        34efe8:	e1a05000 	mov	r5, r0
        34efec:	e1a04001 	mov	r4, r1
        34eff0:	e59f6054 	ldr	r6, [pc, #54]	; 34f04c <_sys_msg_via_stderr+0x70>
        34eff4:	e596000c 	ldr	r0, [r6, #12]
        34eff8:	e3100002 	tst	r0, #2	; 0x2
        34effc:	e3a09000 	mov	r9, #0	; 0x0
        34f000:	01a00009 	moveq	r0, r9
        34f004:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        34f008:	e3a08001 	mov	r8, #1	; 0x1
        34f00c:	e59f703c 	ldr	r7, [pc, #3c]	; 34f050 <_sys_msg_via_stderr+0x74>
        34f010:	e5c78000 	strb	r8, [r7]
        34f014:	e1140008 	tst	r4, r8
        34f018:	11a01006 	movne	r1, r6
        34f01c:	13a0000d 	movne	r0, #13	; 0xd
        34f020:	1b628611 	blne	1bf086c <$fputc>
        34f024:	e1a01006 	mov	r1, r6
        34f028:	e1a00005 	mov	r0, r5
        34f02c:	eb62860f 	bl	1bf0870 <$fputs>
        34f030:	e3140002 	tst	r4, #2	; 0x2
        34f034:	11a01006 	movne	r1, r6
        34f038:	13a0000d 	movne	r0, #13	; 0xd
        34f03c:	1b62860a 	blne	1bf086c <$fputc>
        34f040:	e5c79000 	strb	r9, [r7]
        34f044:	e1a00008 	mov	r0, r8
        34f048:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        34f04c:	0c105784 	ldceq	7, cr5, [r0], -#528
        34f050:	0c105538 	ldceq	5, cr5, [r0], -#224
        34f054:	e1a0c00d 	mov	ip, sp
        34f058:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        34f05c:	e24cb004 	sub	fp, ip, #4	; 0x4
        34f060:	e1a04000 	mov	r4, r0
        34f064:	e28f0f07 	add	r0, pc, #28	; 0x1c
        34f068:	e3a01001 	mov	r1, #1	; 0x1
        34f06c:	eb5ad478 	bl	1a04254 <$_sys_msg>
        34f070:	e1a00004 	mov	r0, r4
        34f074:	e3a01002 	mov	r1, #2	; 0x2
        34f078:	eb5ad475 	bl	1a04254 <$_sys_msg>
        34f07c:	e3a00001 	mov	r0, #1	; 0x1
        34f080:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        34f084:	ea00050b 	b	3504b8 <_exit>
        34f088:	436f756c 	cmnmi	pc, #452984832	; 0x1b000000
        34f08c:	646e2774 	strvsbt	r2, [lr], -#1908
        34f090:	20777269 	rsbcss	r7, r7, r9, ror #4
        34f094:	74652000 	strvcbt	r2, [r5]
    */
}

/**
 * Symbol: _initio
 * Address: 0034f098
 */
void globals::_initio() {
    /*
        34f098:	e1a0c00d 	mov	ip, sp
        34f09c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        34f0a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        34f0a4:	ebff28a0 	bl	31932c <AllocateStdioMutex>
        34f0a8:	e59f109c 	ldr	r1, [pc, #9c]	; 34f14c <_initio+0xb4>
        34f0ac:	e5a10200 	str	r0, [r1, #512]!
        34f0b0:	eb5ad464 	bl	1a04248 <$_sys_initio>
        34f0b4:	ebffffc0 	bl	34efbc <AnalyzeLowData(low_type *, PS_point_type *)+0x268>
        34f0b8:	e59f0090 	ldr	r0, [pc, #90]	; 34f150 <_initio+0xb8>
        34f0bc:	e1a06000 	mov	r6, r0
        34f0c0:	e3a02c02 	mov	r2, #512	; 0x200
        34f0c4:	e3a01000 	mov	r1, #0	; 0x0
        34f0c8:	eb619662 	bl	1bb4a58 <$memset>
        34f0cc:	e28f4f20 	add	r4, pc, #128	; 0x80
        34f0d0:	e1a05004 	mov	r5, r4
        34f0d4:	e1a07004 	mov	r7, r4
        34f0d8:	e59f2080 	ldr	r2, [pc, #80]	; 34f160 <_initio+0xc8>
        34f0dc:	e1a00004 	mov	r0, r4
        34f0e0:	e28f1f1f 	add	r1, pc, #124	; 0x7c
        34f0e4:	eb000466 	bl	350284 <freopen>
        34f0e8:	e3300000 	teq	r0, #0	; 0x0
        34f0ec:	01a00004 	moveq	r0, r4
        34f0f0:	0bffffd7 	bleq	34f054 <_sys_msg_via_stderr+0x78>
        34f0f4:	e1a02006 	mov	r2, r6
        34f0f8:	e1a00007 	mov	r0, r7
        34f0fc:	e28f1f19 	add	r1, pc, #100	; 0x64
        34f100:	eb00045f 	bl	350284 <freopen>
        34f104:	e59f2060 	ldr	r2, [pc, #60]	; 34f16c <_initio+0xd4>
        34f108:	e1a04002 	mov	r4, r2
        34f10c:	e1a00005 	mov	r0, r5
        34f110:	e28f1f13 	add	r1, pc, #76	; 0x4c
        34f114:	eb00045a 	bl	350284 <freopen>
        34f118:	e3300000 	teq	r0, #0	; 0x0
        34f11c:	0a000006 	beq	34f13c <_initio+0xa4>
        34f120:	e59f1048 	ldr	r1, [pc, #48]	; 34f170 <_initio+0xd8>
        34f124:	e1a00004 	mov	r0, r4
        34f128:	e3a03050 	mov	r3, #80	; 0x50
        34f12c:	e3a02c02 	mov	r2, #512	; 0x200
        34f130:	eb6289d4 	bl	1bf1888 <$setvbuf>
        34f134:	e3300000 	teq	r0, #0	; 0x0
        34f138:	0a000001 	beq	34f144 <_initio+0xac>
        34f13c:	e1a00005 	mov	r0, r5
        34f140:	ebffffc3 	bl	34f054 <_sys_msg_via_stderr+0x78>
        34f144:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        34f148:	eaffff9f 	b	34efcc <AnalyzeLowData(low_type *, PS_point_type *)+0x278>
        34f14c:	0c105704 	ldceq	7, cr5, [r0], -#16
        34f150:	0c105704 	ldceq	7, cr5, [r0], -#16
        34f154:	253c7374 	ldrcs	r7, [ip, -#884]!
        34f158:	64696e3e 	strvsbt	r6, [r9], -#3646
        34f15c:	00000000 	andeq	r0, r0, r0
        34f160:	0c105784 	ldceq	7, cr5, [r0], -#528
        34f164:	77000000 	strvc	r0, [r0, -r0]
        34f168:	72000000 	andvc	r0, r0, #0	; 0x0
        34f16c:	0c105744 	ldceq	7, cr5, [r0], -#272
        34f170:	0c107dc4 	ldceq	13, cr7, [r0], -#784
    */
}

/**
 * Symbol: _reinitio
 * Address: 0034f174
 */
void globals::_reinitio() {
    /*
        34f174:	e1a0c00d 	mov	ip, sp
        34f178:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        34f17c:	e24cb004 	sub	fp, ip, #4	; 0x4
        34f180:	ebffff8d 	bl	34efbc <AnalyzeLowData(low_type *, PS_point_type *)+0x268>
        34f184:	e3a00000 	mov	r0, #0	; 0x0
        34f188:	e59f2080 	ldr	r2, [pc, #80]	; 34f210 <_reinitio+0x9c>
        34f18c:	e582000c 	str	r0, [r2, #12]
        34f190:	e59f407c 	ldr	r4, [pc, #7c]	; 34f214 <_reinitio+0xa0>
        34f194:	e584000c 	str	r0, [r4, #12]
        34f198:	e28f5f1e 	add	r5, pc, #120	; 0x78
        34f19c:	e1a06005 	mov	r6, r5
        34f1a0:	e1a07005 	mov	r7, r5
        34f1a4:	e1a00005 	mov	r0, r5
        34f1a8:	e28f1f1d 	add	r1, pc, #116	; 0x74
        34f1ac:	eb000434 	bl	350284 <freopen>
        34f1b0:	e3300000 	teq	r0, #0	; 0x0
        34f1b4:	01a00005 	moveq	r0, r5
        34f1b8:	0bffffa5 	bleq	34f054 <_sys_msg_via_stderr+0x78>
        34f1bc:	e59f2064 	ldr	r2, [pc, #64]	; 34f228 <_reinitio+0xb4>
        34f1c0:	e1a00007 	mov	r0, r7
        34f1c4:	e28f1f18 	add	r1, pc, #96	; 0x60
        34f1c8:	eb00042d 	bl	350284 <freopen>
        34f1cc:	e1a02004 	mov	r2, r4
        34f1d0:	e1a00006 	mov	r0, r6
        34f1d4:	e28f1f12 	add	r1, pc, #72	; 0x48
        34f1d8:	eb000429 	bl	350284 <freopen>
        34f1dc:	e3300000 	teq	r0, #0	; 0x0
        34f1e0:	0a000006 	beq	34f200 <_reinitio+0x8c>
        34f1e4:	e59f1044 	ldr	r1, [pc, #44]	; 34f230 <_reinitio+0xbc>
        34f1e8:	e1a00004 	mov	r0, r4
        34f1ec:	e3a03050 	mov	r3, #80	; 0x50
        34f1f0:	e3a02c02 	mov	r2, #512	; 0x200
        34f1f4:	eb6289a3 	bl	1bf1888 <$setvbuf>
        34f1f8:	e3300000 	teq	r0, #0	; 0x0
        34f1fc:	0a000001 	beq	34f208 <_reinitio+0x94>
        34f200:	e1a00006 	mov	r0, r6
        34f204:	ebffff92 	bl	34f054 <_sys_msg_via_stderr+0x78>
        34f208:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        34f20c:	eaffff6e 	b	34efcc <AnalyzeLowData(low_type *, PS_point_type *)+0x278>
        34f210:	0c105784 	ldceq	7, cr5, [r0], -#528
        34f214:	0c105744 	ldceq	7, cr5, [r0], -#272
        34f218:	253c7374 	ldrcs	r7, [ip, -#884]!
        34f21c:	64696e3e 	strvsbt	r6, [r9], -#3646
        34f220:	00000000 	andeq	r0, r0, r0
        34f224:	77000000 	strvc	r0, [r0, -r0]
        34f228:	0c105704 	ldceq	7, cr5, [r0], -#16
        34f22c:	72000000 	andvc	r0, r0, #0	; 0x0
        34f230:	0c107dc4 	ldceq	13, cr7, [r0], -#784
    */
}

/**
 * Symbol: __flsbuf
 * Address: 0034f234
 */
void globals::() {
    /*
        34f234:	e1a0c00d 	mov	ip, sp
        34f238:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        34f23c:	e24cb004 	sub	fp, ip, #4	; 0x4
        34f240:	e1a05000 	mov	r5, r0
        34f244:	e1a04001 	mov	r4, r1
        34f248:	e591000c 	ldr	r0, [r1, #12]
        34f24c:	e3c00702 	bic	r0, r0, #524288	; 0x80000
        34f250:	e3800501 	orr	r0, r0, #4194304	; 0x400000
        34f254:	e581000c 	str	r0, [r1, #12]
        34f258:	e3100020 	tst	r0, #32	; 0x20
        34f25c:	11a00004 	movne	r0, r4
        34f260:	1b0003a8 	blne	350108 <_deferredlazyseek>
        34f264:	e3e08000 	mvn	r8, #0	; 0x0
        34f268:	e20570ff 	and	r7, r5, #255	; 0xff
        34f26c:	e5941008 	ldr	r1, [r4, #8]
        34f270:	e3510000 	cmp	r1, #0	; 0x0
        34f274:	aa00000b 	bge	34f2a8 <__flsbuf+0x74>
        34f278:	e594000c 	ldr	r0, [r4, #12]
        34f27c:	e3100c02 	tst	r0, #512	; 0x200
        34f280:	1a000008 	bne	34f2a8 <__flsbuf+0x74>
        34f284:	e0481001 	sub	r1, r8, r1
        34f288:	e3800a12 	orr	r0, r0, #73728	; 0x12000
        34f28c:	e584000c 	str	r0, [r4, #12]
        34f290:	e1a00007 	mov	r0, r7
        34f294:	e5841008 	str	r1, [r4, #8]
        34f298:	e5941004 	ldr	r1, [r4, #4]
        34f29c:	e4c17001 	strb	r7, [r1], #1
        34f2a0:	e5a41004 	str	r1, [r4, #4]!
        34f2a4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        34f2a8:	e594000c 	ldr	r0, [r4, #12]
        34f2ac:	e1a01800 	mov	r1, r0, lsl #16
        34f2b0:	e1a01821 	mov	r1, r1, lsr #16
        34f2b4:	e3c11cef 	bic	r1, r1, #61184	; 0xef00
        34f2b8:	e3c11075 	bic	r1, r1, #117	; 0x75
        34f2bc:	e3310002 	teq	r1, #2	; 0x2
        34f2c0:	0a000002 	beq	34f2d0 <__flsbuf+0x9c>
        34f2c4:	e1a00004 	mov	r0, r4
        34f2c8:	eb000127 	bl	34f76c <_seterr>
        34f2cc:	ea000044 	b	34f3e4 <__flsbuf+0x1b0>
        34f2d0:	e1a01800 	mov	r1, r0, lsl #16
        34f2d4:	e1a01821 	mov	r1, r1, lsr #16
        34f2d8:	e3c11c5f 	bic	r1, r1, #24320	; 0x5f00
        34f2dc:	e3c110ef 	bic	r1, r1, #239	; 0xef
        34f2e0:	e3310902 	teq	r1, #32768	; 0x8000
        34f2e4:	1a000008 	bne	34f30c <__flsbuf+0xd8>
        34f2e8:	e1a00004 	mov	r0, r4
        34f2ec:	e3a02002 	mov	r2, #2	; 0x2
        34f2f0:	e3a01000 	mov	r1, #0	; 0x0
        34f2f4:	eb000240 	bl	34fbfc <fseek>
        34f2f8:	e594000c 	ldr	r0, [r4, #12]
        34f2fc:	e3100020 	tst	r0, #32	; 0x20
        34f300:	11a00004 	movne	r0, r4
        34f304:	1b00037f 	blne	350108 <_deferredlazyseek>
        34f308:	e594000c 	ldr	r0, [r4, #12]
        34f30c:	e3806a12 	orr	r6, r0, #73728	; 0x12000
        34f310:	e584600c 	str	r6, [r4, #12]
        34f314:	e5940010 	ldr	r0, [r4, #16]
        34f318:	e3300000 	teq	r0, #0	; 0x0
        34f31c:	1a000022 	bne	34f3ac <__flsbuf+0x178>
        34f320:	e1a00004 	mov	r0, r4
        34f324:	eb5ad3c9 	bl	1a04250 <$_sys_istty>
        34f328:	e3300000 	teq	r0, #0	; 0x0
        34f32c:	0a000011 	beq	34f378 <__flsbuf+0x144>
        34f330:	e594000c 	ldr	r0, [r4, #12]
        34f334:	e3100c03 	tst	r0, #768	; 0x300
        34f338:	0a000006 	beq	34f358 <__flsbuf+0x124>
        34f33c:	e594001c 	ldr	r0, [r4, #28]
        34f340:	eb5ad3bd 	bl	1a0423c <$_sys_alloc>
        34f344:	e5840010 	str	r0, [r4, #16]
        34f348:	e5840004 	str	r0, [r4, #4]
        34f34c:	e3866b02 	orr	r6, r6, #2048	; 0x800
        34f350:	e594000c 	ldr	r0, [r4, #12]
        34f354:	ea000012 	b	34f3a4 <__flsbuf+0x170>
        34f358:	e2840024 	add	r0, r4, #36	; 0x24
        34f35c:	e5840010 	str	r0, [r4, #16]
        34f360:	e5840004 	str	r0, [r4, #4]
        34f364:	e3a00001 	mov	r0, #1	; 0x1
        34f368:	e3866b01 	orr	r6, r6, #1024	; 0x400
        34f36c:	e584001c 	str	r0, [r4, #28]
        34f370:	e584600c 	str	r6, [r4, #12]
        34f374:	ea00000c 	b	34f3ac <__flsbuf+0x178>
        34f378:	e594001c 	ldr	r0, [r4, #28]
        34f37c:	eb5ad3ae 	bl	1a0423c <$_sys_alloc>
        34f380:	e5840010 	str	r0, [r4, #16]
        34f384:	e5840004 	str	r0, [r4, #4]
        34f388:	e3866b02 	orr	r6, r6, #2048	; 0x800
        34f38c:	e594000c 	ldr	r0, [r4, #12]
        34f390:	e1800006 	orr	r0, r0, r6
        34f394:	e3160c03 	tst	r6, #768	; 0x300
        34f398:	e584000c 	str	r0, [r4, #12]
        34f39c:	1a000002 	bne	34f3ac <__flsbuf+0x178>
        34f3a0:	e3866c01 	orr	r6, r6, #256	; 0x100
        34f3a4:	e1800006 	orr	r0, r0, r6
        34f3a8:	e584000c 	str	r0, [r4, #12]
        34f3ac:	e3160c01 	tst	r6, #256	; 0x100
        34f3b0:	0a000017 	beq	34f414 <__flsbuf+0x1e0>
        34f3b4:	e5940004 	ldr	r0, [r4, #4]
        34f3b8:	e594102c 	ldr	r1, [r4, #44]
        34f3bc:	e1510000 	cmp	r1, r0
        34f3c0:	e5945010 	ldr	r5, [r4, #16]
        34f3c4:	81a00001 	movhi	r0, r1
        34f3c8:	e0501005 	subs	r1, r0, r5
        34f3cc:	0a000006 	beq	34f3ec <__flsbuf+0x1b8>
        34f3d0:	e1a02004 	mov	r2, r4
        34f3d4:	e1a00005 	mov	r0, r5
        34f3d8:	eb00013d 	bl	34f8d4 <_writebuf>
        34f3dc:	e3300000 	teq	r0, #0	; 0x0
        34f3e0:	0a000001 	beq	34f3ec <__flsbuf+0x1b8>
        34f3e4:	e1a00008 	mov	r0, r8
        34f3e8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        34f3ec:	e2850001 	add	r0, r5, #1	; 0x1
        34f3f0:	e584002c 	str	r0, [r4, #44]
        34f3f4:	e5840004 	str	r0, [r4, #4]
        34f3f8:	e594001c 	ldr	r0, [r4, #28]
        34f3fc:	e2401001 	sub	r1, r0, #1	; 0x1
        34f400:	e5a41008 	str	r1, [r4, #8]!
        34f404:	e5840028 	str	r0, [r4, #40]
        34f408:	e1a00007 	mov	r0, r7
        34f40c:	e5c57000 	strb	r7, [r5]
        34f410:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        34f414:	e5940010 	ldr	r0, [r4, #16]
        34f418:	e5941004 	ldr	r1, [r4, #4]
        34f41c:	e4c15001 	strb	r5, [r1], #1
        34f420:	e5841004 	str	r1, [r4, #4]
        34f424:	e1a02001 	mov	r2, r1
        34f428:	e594302c 	ldr	r3, [r4, #44]
        34f42c:	e1530001 	cmp	r3, r1
        34f430:	81a02003 	movhi	r2, r3
        34f434:	e0421000 	sub	r1, r2, r0
        34f438:	e594201c 	ldr	r2, [r4, #28]
        34f43c:	e3160b01 	tst	r6, #1024	; 0x400
        34f440:	e5842030 	str	r2, [r4, #48]
        34f444:	1a000003 	bne	34f458 <__flsbuf+0x224>
        34f448:	e337000d 	teq	r7, #13	; 0xd
        34f44c:	0a000001 	beq	34f458 <__flsbuf+0x224>
        34f450:	e1520001 	cmp	r2, r1
        34f454:	ca000007 	bgt	34f478 <__flsbuf+0x244>
        34f458:	e584002c 	str	r0, [r4, #44]
        34f45c:	e3a02000 	mov	r2, #0	; 0x0
        34f460:	e9840005 	stmib	r4, {r0, r2}
        34f464:	e1a02004 	mov	r2, r4
        34f468:	eb000119 	bl	34f8d4 <_writebuf>
        34f46c:	e3300000 	teq	r0, #0	; 0x0
        34f470:	13e00000 	mvnne	r0, #0	; 0x0
        34f474:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        34f478:	e1a00007 	mov	r0, r7
        34f47c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: __filbuf
 * Address: 0034f480
 */
void globals::() {
    /*
        34f480:	e1a0c00d 	mov	ip, sp
        34f484:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        34f488:	e24cb004 	sub	fp, ip, #4	; 0x4
        34f48c:	e1a04000 	mov	r4, r0
        34f490:	e590000c 	ldr	r0, [r0, #12]
        34f494:	e3800501 	orr	r0, r0, #4194304	; 0x400000
        34f498:	e584000c 	str	r0, [r4, #12]
        34f49c:	e3100702 	tst	r0, #524288	; 0x80000
        34f4a0:	0a000007 	beq	34f4c4 <__filbuf+0x44>
        34f4a4:	e5941034 	ldr	r1, [r4, #52]
        34f4a8:	e5841000 	str	r1, [r4]
        34f4ac:	e5941038 	ldr	r1, [r4, #56]
        34f4b0:	e3c00702 	bic	r0, r0, #524288	; 0x80000
        34f4b4:	e584000c 	str	r0, [r4, #12]
        34f4b8:	e5841008 	str	r1, [r4, #8]
        34f4bc:	e5d40025 	ldrb	r0, [r4, #37]
        34f4c0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        34f4c4:	e3100020 	tst	r0, #32	; 0x20
        34f4c8:	11a00004 	movne	r0, r4
        34f4cc:	1b00030d 	blne	350108 <_deferredlazyseek>
        34f4d0:	e3e06000 	mvn	r6, #0	; 0x0
        34f4d4:	e5940000 	ldr	r0, [r4]
        34f4d8:	e3500000 	cmp	r0, #0	; 0x0
        34f4dc:	aa000008 	bge	34f504 <__filbuf+0x84>
        34f4e0:	e0460000 	sub	r0, r6, r0
        34f4e4:	e5840000 	str	r0, [r4]
        34f4e8:	e594000c 	ldr	r0, [r4, #12]
        34f4ec:	e3800a01 	orr	r0, r0, #4096	; 0x1000
        34f4f0:	e584000c 	str	r0, [r4, #12]
        34f4f4:	e5941004 	ldr	r1, [r4, #4]
        34f4f8:	e4d10001 	ldrb	r0, [r1], #1
        34f4fc:	e5a41004 	str	r1, [r4, #4]!
        34f500:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        34f504:	e594000c 	ldr	r0, [r4, #12]
        34f508:	e1a01800 	mov	r1, r0, lsl #16
        34f50c:	e1a01821 	mov	r1, r1, lsr #16
        34f510:	e3c11c9f 	bic	r1, r1, #40704	; 0x9f00
        34f514:	e3c11036 	bic	r1, r1, #54	; 0x36
        34f518:	e3a09000 	mov	r9, #0	; 0x0
        34f51c:	e3310001 	teq	r1, #1	; 0x1
        34f520:	0a00000b 	beq	34f554 <__filbuf+0xd4>
        34f524:	e1a01800 	mov	r1, r0, lsl #16
        34f528:	e1a01821 	mov	r1, r1, lsr #16
        34f52c:	e3c11cbf 	bic	r1, r1, #48896	; 0xbf00
        34f530:	e3d110bf 	bics	r1, r1, #191	; 0xbf
        34f534:	e5849000 	str	r9, [r4]
        34f538:	13c00a05 	bicne	r0, r0, #20480	; 0x5000
        34f53c:	13800040 	orrne	r0, r0, #64	; 0x40
        34f540:	15a4000c 	strne	r0, [r4, #12]!
        34f544:	1a00006d 	bne	34f700 <__filbuf+0x280>
        34f548:	e1a00004 	mov	r0, r4
        34f54c:	eb000086 	bl	34f76c <_seterr>
        34f550:	ea00006a 	b	34f700 <__filbuf+0x280>
        34f554:	e5941010 	ldr	r1, [r4, #16]
        34f558:	e3310000 	teq	r1, #0	; 0x0
        34f55c:	02000801 	andeq	r0, r0, #65536	; 0x10000
        34f560:	03300000 	teqeq	r0, #0	; 0x0
        34f564:	1a000009 	bne	34f590 <__filbuf+0x110>
        34f568:	e594001c 	ldr	r0, [r4, #28]
        34f56c:	eb5ad332 	bl	1a0423c <$_sys_alloc>
        34f570:	e5840010 	str	r0, [r4, #16]
        34f574:	e5840004 	str	r0, [r4, #4]
        34f578:	e594000c 	ldr	r0, [r4, #12]
        34f57c:	e3800b02 	orr	r0, r0, #2048	; 0x800
        34f580:	e584000c 	str	r0, [r4, #12]
        34f584:	e3100c03 	tst	r0, #768	; 0x300
        34f588:	03800c01 	orreq	r0, r0, #256	; 0x100
        34f58c:	0584000c 	streq	r0, [r4, #12]
        34f590:	e594000c 	ldr	r0, [r4, #12]
        34f594:	e3100010 	tst	r0, #16	; 0x10
        34f598:	e5948014 	ldr	r8, [r4, #20]
        34f59c:	0a000009 	beq	34f5c8 <__filbuf+0x148>
        34f5a0:	e3100801 	tst	r0, #65536	; 0x10000
        34f5a4:	0a000002 	beq	34f5b4 <__filbuf+0x134>
        34f5a8:	e1a00004 	mov	r0, r4
        34f5ac:	eb00028f 	bl	34fff0 <_fflush>
        34f5b0:	ea000004 	b	34f5c8 <__filbuf+0x148>
        34f5b4:	e1a00008 	mov	r0, r8
        34f5b8:	e5941018 	ldr	r1, [r4, #24]
        34f5bc:	eb5ad328 	bl	1a04264 <$_sys_seek>
        34f5c0:	e3500000 	cmp	r0, #0	; 0x0
        34f5c4:	baffffdf 	blt	34f548 <__filbuf+0xc8>
        34f5c8:	e594000c 	ldr	r0, [r4, #12]
        34f5cc:	e3800a01 	orr	r0, r0, #4096	; 0x1000
        34f5d0:	e584000c 	str	r0, [r4, #12]
        34f5d4:	e3100801 	tst	r0, #65536	; 0x10000
        34f5d8:	0a000021 	beq	34f664 <__filbuf+0x1e4>
        34f5dc:	e594102c 	ldr	r1, [r4, #44]
        34f5e0:	e5942004 	ldr	r2, [r4, #4]
        34f5e4:	e1510002 	cmp	r1, r2
        34f5e8:	91a01002 	movls	r1, r2
        34f5ec:	e5942010 	ldr	r2, [r4, #16]
        34f5f0:	e0415002 	sub	r5, r1, r2
        34f5f4:	e594101c 	ldr	r1, [r4, #28]
        34f5f8:	e0517005 	subs	r7, r1, r5
        34f5fc:	1a000003 	bne	34f610 <__filbuf+0x190>
        34f600:	e1a00004 	mov	r0, r4
        34f604:	eb000279 	bl	34fff0 <_fflush>
        34f608:	e594701c 	ldr	r7, [r4, #28]
        34f60c:	ea00000f 	b	34f650 <__filbuf+0x1d0>
        34f610:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
        34f614:	e3c008fd 	bic	r0, r0, #16580608	; 0xfd0000
        34f618:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        34f61c:	e3d000ef 	bics	r0, r0, #239	; 0xef
        34f620:	1a00000a 	bne	34f650 <__filbuf+0x1d0>
        34f624:	e1a00004 	mov	r0, r4
        34f628:	eb000270 	bl	34fff0 <_fflush>
        34f62c:	e5940018 	ldr	r0, [r4, #24]
        34f630:	e0801005 	add	r1, r0, r5
        34f634:	e1a00008 	mov	r0, r8
        34f638:	eb5ad309 	bl	1a04264 <$_sys_seek>
        34f63c:	e3500000 	cmp	r0, #0	; 0x0
        34f640:	baffffc0 	blt	34f548 <__filbuf+0xc8>
        34f644:	e594000c 	ldr	r0, [r4, #12]
        34f648:	e3800802 	orr	r0, r0, #131072	; 0x20000
        34f64c:	e584000c 	str	r0, [r4, #12]
        34f650:	e594001c 	ldr	r0, [r4, #28]
        34f654:	e0400007 	sub	r0, r0, r7
        34f658:	e5941010 	ldr	r1, [r4, #16]
        34f65c:	e0815000 	add	r5, r1, r0
        34f660:	ea000006 	b	34f680 <__filbuf+0x200>
        34f664:	e5940004 	ldr	r0, [r4, #4]
        34f668:	e5945010 	ldr	r5, [r4, #16]
        34f66c:	e0400005 	sub	r0, r0, r5
        34f670:	e2847018 	add	r7, r4, #24	; 0x18
        34f674:	e8970082 	ldmia	r7, {r1, r7}
        34f678:	e0810000 	add	r0, r1, r0
        34f67c:	e5840018 	str	r0, [r4, #24]
        34f680:	e594000c 	ldr	r0, [r4, #12]
        34f684:	e3c00010 	bic	r0, r0, #16	; 0x10
        34f688:	e584000c 	str	r0, [r4, #12]
        34f68c:	e3100c06 	tst	r0, #1536	; 0x600
        34f690:	1b0001c6 	blne	34fdb0 <_flushlinebuffered>
        34f694:	e1a02007 	mov	r2, r7
        34f698:	e1a01005 	mov	r1, r5
        34f69c:	e1a00008 	mov	r0, r8
        34f6a0:	e594300c 	ldr	r3, [r4, #12]
        34f6a4:	eb5ad2ed 	bl	1a04260 <$_sys_read>
        34f6a8:	e1b08000 	movs	r8, r0
        34f6ac:	5a000007 	bpl	34f6d0 <__filbuf+0x250>
        34f6b0:	e1a00008 	mov	r0, r8
        34f6b4:	eb5ad2e4 	bl	1a0424c <$_sys_iserror>
        34f6b8:	e3300000 	teq	r0, #0	; 0x0
        34f6bc:	1affffa1 	bne	34f548 <__filbuf+0xc8>
        34f6c0:	e594000c 	ldr	r0, [r4, #12]
        34f6c4:	e3800901 	orr	r0, r0, #16384	; 0x4000
        34f6c8:	e3c88102 	bic	r8, r8, #-2147483648	; 0x80000000
        34f6cc:	e584000c 	str	r0, [r4, #12]
        34f6d0:	e0570008 	subs	r0, r7, r8
        34f6d4:	e0851000 	add	r1, r5, r0
        34f6d8:	e584102c 	str	r1, [r4, #44]
        34f6dc:	e594101c 	ldr	r1, [r4, #28]
        34f6e0:	e5841030 	str	r1, [r4, #48]
        34f6e4:	1a000007 	bne	34f708 <__filbuf+0x288>
        34f6e8:	e594000c 	ldr	r0, [r4, #12]
        34f6ec:	e3c00a01 	bic	r0, r0, #4096	; 0x1000
        34f6f0:	e3800040 	orr	r0, r0, #64	; 0x40
        34f6f4:	e584000c 	str	r0, [r4, #12]
        34f6f8:	e5845004 	str	r5, [r4, #4]
        34f6fc:	e5849000 	str	r9, [r4]
        34f700:	e1a00006 	mov	r0, r6
        34f704:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        34f708:	e2400001 	sub	r0, r0, #1	; 0x1
        34f70c:	e5840000 	str	r0, [r4]
        34f710:	e2850001 	add	r0, r5, #1	; 0x1
        34f714:	e5840004 	str	r0, [r4, #4]
        34f718:	e594000c 	ldr	r0, [r4, #12]
        34f71c:	e3800802 	orr	r0, r0, #131072	; 0x20000
        34f720:	e5a4000c 	str	r0, [r4, #12]!
        34f724:	e5d50000 	ldrb	r0, [r5]
        34f728:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: __backspace
 * Address: 0034f72c
 */
void globals::() {
    /*
        34f72c:	e590100c 	ldr	r1, [r0, #12]
        34f730:	e3110040 	tst	r1, #64	; 0x40
        34f734:	1a00000a 	bne	34f764 <__backspace+0x38>
        34f738:	e5901004 	ldr	r1, [r0, #4]
        34f73c:	e5902010 	ldr	r2, [r0, #16]
        34f740:	e1510002 	cmp	r1, r2
        34f744:	9a000006 	bls	34f764 <__backspace+0x38>
        34f748:	e5902000 	ldr	r2, [r0]
        34f74c:	e2822001 	add	r2, r2, #1	; 0x1
        34f750:	e2411001 	sub	r1, r1, #1	; 0x1
        34f754:	e5801004 	str	r1, [r0, #4]
        34f758:	e5802000 	str	r2, [r0]
        34f75c:	e3a00000 	mov	r0, #0	; 0x0
        34f760:	e1a0f00e 	mov	pc, lr
        34f764:	e3e00000 	mvn	r0, #0	; 0x0
        34f768:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _seterr
 * Address: 0034f76c
 */
void globals::_seterr() {
    /*
        34f76c:	e590100c 	ldr	r1, [r0, #12]
        34f770:	e3811080 	orr	r1, r1, #128	; 0x80
        34f774:	e580100c 	str	r1, [r0, #12]
        34f778:	e3a01000 	mov	r1, #0	; 0x0
        34f77c:	e5801008 	str	r1, [r0, #8]
        34f780:	e5801000 	str	r1, [r0]
        34f784:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _writebuf
 * Address: 0034f8d4
 */
void globals::_writebuf() {
    /*
        34f8d4:	e1a0c00d 	mov	ip, sp
        34f8d8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        34f8dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        34f8e0:	e1a06000 	mov	r6, r0
        34f8e4:	e1a05001 	mov	r5, r1
        34f8e8:	e1a04002 	mov	r4, r2
        34f8ec:	e592700c 	ldr	r7, [r2, #12]
        34f8f0:	e3170601 	tst	r7, #1048576	; 0x100000
        34f8f4:	e5928014 	ldr	r8, [r2, #20]
        34f8f8:	0a000003 	beq	34f90c <_writebuf+0x38>
        34f8fc:	e3877010 	orr	r7, r7, #16	; 0x10
        34f900:	e1a00008 	mov	r0, r8
        34f904:	eb5ad24e 	bl	1a04244 <$_sys_flen>
        34f908:	e5840018 	str	r0, [r4, #24]
        34f90c:	e3c704ff 	bic	r0, r7, #-16777216	; 0xff000000
        34f910:	e3c008fd 	bic	r0, r0, #16580608	; 0xfd0000
        34f914:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
        34f918:	e3d000ef 	bics	r0, r0, #239	; 0xef
        34f91c:	e3e09000 	mvn	r9, #0	; 0x0
        34f920:	0a000007 	beq	34f944 <_writebuf+0x70>
        34f924:	e1a00008 	mov	r0, r8
        34f928:	e5941018 	ldr	r1, [r4, #24]
        34f92c:	eb5ad24c 	bl	1a04264 <$_sys_seek>
        34f930:	e3500000 	cmp	r0, #0	; 0x0
        34f934:	ba00000e 	blt	34f974 <_writebuf+0xa0>
        34f938:	e3c77802 	bic	r7, r7, #131072	; 0x20000
        34f93c:	e3c77010 	bic	r7, r7, #16	; 0x10
        34f940:	e584700c 	str	r7, [r4, #12]
        34f944:	e1a03007 	mov	r3, r7
        34f948:	e1a02005 	mov	r2, r5
        34f94c:	e1a01006 	mov	r1, r6
        34f950:	e1a00008 	mov	r0, r8
        34f954:	eb5ad244 	bl	1a0426c <$_sys_write>
        34f958:	e3c01102 	bic	r1, r0, #-2147483648	; 0x80000000
        34f95c:	e0451001 	sub	r1, r5, r1
        34f960:	e5942018 	ldr	r2, [r4, #24]
        34f964:	e0821001 	add	r1, r2, r1
        34f968:	e3300000 	teq	r0, #0	; 0x0
        34f96c:	e5841018 	str	r1, [r4, #24]
        34f970:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        34f974:	e1a00004 	mov	r0, r4
        34f978:	ebffff7b 	bl	34f76c <_seterr>
        34f97c:	e1a00009 	mov	r0, r9
        34f980:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: _flushlinebuffered
 * Address: 0034fdb0
 */
void globals::_flushlinebuffered() {
    /*
        34fdb0:	e1a0c00d 	mov	ip, sp
        34fdb4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        34fdb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        34fdbc:	e59f0080 	ldr	r0, [pc, #80]	; 34fe44 <_flushlinebuffered+0x94>
        34fdc0:	e590100c 	ldr	r1, [r0, #12]
        34fdc4:	e1a01801 	mov	r1, r1, lsl #16
        34fdc8:	e1a01821 	mov	r1, r1, lsr #16
        34fdcc:	e3c11cfd 	bic	r1, r1, #64768	; 0xfd00
        34fdd0:	e3d110fd 	bics	r1, r1, #253	; 0xfd
        34fdd4:	1b6282a1 	blne	1bf0860 <$fflush>
        34fdd8:	e59f0068 	ldr	r0, [pc, #68]	; 34fe48 <_flushlinebuffered+0x98>
        34fddc:	e590100c 	ldr	r1, [r0, #12]
        34fde0:	e1a01801 	mov	r1, r1, lsl #16
        34fde4:	e1a01821 	mov	r1, r1, lsr #16
        34fde8:	e3c11cfd 	bic	r1, r1, #64768	; 0xfd00
        34fdec:	e3d110fd 	bics	r1, r1, #253	; 0xfd
        34fdf0:	1b62829a 	blne	1bf0860 <$fflush>
        34fdf4:	e59f0050 	ldr	r0, [pc, #50]	; 34fe4c <_flushlinebuffered+0x9c>
        34fdf8:	e590100c 	ldr	r1, [r0, #12]
        34fdfc:	e1a01801 	mov	r1, r1, lsl #16
        34fe00:	e1a01821 	mov	r1, r1, lsr #16
        34fe04:	e3c11cfd 	bic	r1, r1, #64768	; 0xfd00
        34fe08:	e3d110fd 	bics	r1, r1, #253	; 0xfd
        34fe0c:	1b628293 	blne	1bf0860 <$fflush>
        34fe10:	e3a04000 	mov	r4, #0	; 0x0
        34fe14:	e59f5034 	ldr	r5, [pc, #34]	; 34fe50 <_flushlinebuffered+0xa0>
        34fe18:	e0850304 	add	r0, r5, r4, lsl #6
        34fe1c:	e590100c 	ldr	r1, [r0, #12]
        34fe20:	e1a01801 	mov	r1, r1, lsl #16
        34fe24:	e1a01821 	mov	r1, r1, lsr #16
        34fe28:	e3c11cfd 	bic	r1, r1, #64768	; 0xfd00
        34fe2c:	e3d110fd 	bics	r1, r1, #253	; 0xfd
        34fe30:	1b62828a 	blne	1bf0860 <$fflush>
        34fe34:	e2844001 	add	r4, r4, #1	; 0x1
        34fe38:	e3540005 	cmp	r4, #5	; 0x5
        34fe3c:	bafffff5 	blt	34fe18 <_flushlinebuffered+0x68>
        34fe40:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        34fe44:	0c105704 	ldceq	7, cr5, [r0], -#16
        34fe48:	0c105744 	ldceq	7, cr5, [r0], -#272
        34fe4c:	0c105784 	ldceq	7, cr5, [r0], -#528
        34fe50:	0c1057c4 	ldceq	7, cr5, [r0], -#784
    */
}

/**
 * Symbol: _tmpfile_delete
 * Address: 0034ffb4
 */
void globals::_tmpfile_delete() {
    /*
        34ffb4:	e1a0c00d 	mov	ip, sp
        34ffb8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        34ffbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        34ffc0:	e1a04001 	mov	r4, r1
        34ffc4:	e24dd050 	sub	sp, sp, #80	; 0x50
        34ffc8:	e5b01020 	ldr	r1, [r0, #32]!
        34ffcc:	e1a0000d 	mov	r0, sp
        34ffd0:	e3a02050 	mov	r2, #80	; 0x50
        34ffd4:	eb5ad0a3 	bl	1a04268 <$_sys_tmpnam>
        34ffd8:	e1a0000d 	mov	r0, sp
        34ffdc:	ebff24ed 	bl	319398 <remove>
        34ffe0:	e3300000 	teq	r0, #0	; 0x0
        34ffe4:	01a00004 	moveq	r0, r4
        34ffe8:	13e00000 	mvnne	r0, #0	; 0x0
        34ffec:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: _fflush
 * Address: 0034fff0
 */
void globals::_fflush() {
    /*
        34fff0:	e1a0c00d 	mov	ip, sp
        34fff4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        34fff8:	e24cb004 	sub	fp, ip, #4	; 0x4
        34fffc:	e1a04000 	mov	r4, r0
        350000:	e5905010 	ldr	r5, [r0, #16]
        350004:	e590002c 	ldr	r0, [r0, #44]
        350008:	e5941004 	ldr	r1, [r4, #4]
        35000c:	e1500001 	cmp	r0, r1
        350010:	81a01000 	movhi	r1, r0
        350014:	e594000c 	ldr	r0, [r4, #12]
        350018:	e3c00702 	bic	r0, r0, #524288	; 0x80000
        35001c:	e584000c 	str	r0, [r4, #12]
        350020:	e2002003 	and	r2, r0, #3	; 0x3
        350024:	e3a06000 	mov	r6, #0	; 0x0
        350028:	e3320001 	teq	r2, #1	; 0x1
        35002c:	0a000014 	beq	350084 <_fflush+0x94>
        350030:	e2002082 	and	r2, r0, #130	; 0x82
        350034:	e3e07000 	mvn	r7, #0	; 0x0
        350038:	e3320002 	teq	r2, #2	; 0x2
        35003c:	1a000009 	bne	350068 <_fflush+0x78>
        350040:	e3100801 	tst	r0, #65536	; 0x10000
        350044:	0a00000e 	beq	350084 <_fflush+0x94>
        350048:	e1310005 	teq	r1, r5
        35004c:	0a000007 	beq	350070 <_fflush+0x80>
        350050:	e0411005 	sub	r1, r1, r5
        350054:	e1a02004 	mov	r2, r4
        350058:	e1a00005 	mov	r0, r5
        35005c:	ebfffe1c 	bl	34f8d4 <_writebuf>
        350060:	e3300000 	teq	r0, #0	; 0x0
        350064:	0a000001 	beq	350070 <_fflush+0x80>
        350068:	e1a00007 	mov	r0, r7
        35006c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        350070:	e584502c 	str	r5, [r4, #44]
        350074:	e9840060 	stmib	r4, {r5, r6}
        350078:	e594000c 	ldr	r0, [r4, #12]
        35007c:	e3c00801 	bic	r0, r0, #65536	; 0x10000
        350080:	e5a4000c 	str	r0, [r4, #12]!
        350084:	e1a00006 	mov	r0, r6
        350088:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: _sys_msg
 * Address: 0035008c
 */
void globals::_sys_msg() {
    /*
        35008c:	e1a0c00d 	mov	ip, sp
        350090:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        350094:	e24cb004 	sub	fp, ip, #4	; 0x4
        350098:	e1a04000 	mov	r4, r0
        35009c:	e1a05001 	mov	r5, r1
        3500a0:	e59f005c 	ldr	r0, [pc, #5c]	; 350104 <_sys_msg+0x78>
        3500a4:	e5d00000 	ldrb	r0, [r0]
        3500a8:	e3300000 	teq	r0, #0	; 0x0
        3500ac:	1a000004 	bne	3500c4 <_sys_msg+0x38>
        3500b0:	e1a01005 	mov	r1, r5
        3500b4:	e1a00004 	mov	r0, r4
        3500b8:	eb5ad066 	bl	1a04258 <$_sys_msg_via_stderr>
        3500bc:	e3300000 	teq	r0, #0	; 0x0
        3500c0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        3500c4:	e3150001 	tst	r5, #1	; 0x1
        3500c8:	13a0000d 	movne	r0, #13	; 0xd
        3500cc:	1bff2495 	blne	319328 <_ttywrch>
        3500d0:	e5d40000 	ldrb	r0, [r4]
        3500d4:	e3300000 	teq	r0, #0	; 0x0
        3500d8:	0a000004 	beq	3500f0 <_sys_msg+0x64>
        3500dc:	e4d40001 	ldrb	r0, [r4], #1
        3500e0:	ebff2490 	bl	319328 <_ttywrch>
        3500e4:	e5d40000 	ldrb	r0, [r4]
        3500e8:	e3300000 	teq	r0, #0	; 0x0
        3500ec:	1afffffa 	bne	3500dc <_sys_msg+0x50>
        3500f0:	e3150002 	tst	r5, #2	; 0x2
        3500f4:	13a0000d 	movne	r0, #13	; 0xd
        3500f8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        3500fc:	1aff2489 	bne	319328 <_ttywrch>
        350100:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        350104:	0c105538 	ldceq	5, cr5, [r0], -#224
    */
}

/**
 * Symbol: _deferredlazyseek
 * Address: 00350108
 */
void globals::_deferredlazyseek() {
    /*
        350108:	e1a0c00d 	mov	ip, sp
        35010c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        350110:	e24cb004 	sub	fp, ip, #4	; 0x4
        350114:	e1a04000 	mov	r4, r0
        350118:	e590000c 	ldr	r0, [r0, #12]
        35011c:	e3c00020 	bic	r0, r0, #32	; 0x20
        350120:	e584000c 	str	r0, [r4, #12]
        350124:	e5940028 	ldr	r0, [r4, #40]
        350128:	e5941018 	ldr	r1, [r4, #24]
        35012c:	e1310000 	teq	r1, r0
        350130:	0a00000a 	beq	350160 <_deferredlazyseek+0x58>
        350134:	e1a00004 	mov	r0, r4
        350138:	ebffffac 	bl	34fff0 <_fflush>
        35013c:	e594000c 	ldr	r0, [r4, #12]
        350140:	e3c00a03 	bic	r0, r0, #12288	; 0x3000
        350144:	e3800010 	orr	r0, r0, #16	; 0x10
        350148:	e584000c 	str	r0, [r4, #12]
        35014c:	e5940028 	ldr	r0, [r4, #40]
        350150:	e5840018 	str	r0, [r4, #24]
        350154:	e5940010 	ldr	r0, [r4, #16]
        350158:	e584002c 	str	r0, [r4, #44]
        35015c:	e5840004 	str	r0, [r4, #4]
        350160:	e594000c 	ldr	r0, [r4, #12]
        350164:	e3c00901 	bic	r0, r0, #16384	; 0x4000
        350168:	e3c00040 	bic	r0, r0, #64	; 0x40
        35016c:	e5a4000c 	str	r0, [r4, #12]!
        350170:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: _exit
 * Address: 003504b8
 */
void globals::_exit() {
    /*
        3504b8:	e1a0c00d 	mov	ip, sp
        3504bc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        3504c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        3504c4:	e1a04000 	mov	r4, r0
        3504c8:	e3a00001 	mov	r0, #1	; 0x1
        3504cc:	ebff22d0 	bl	319014 <__rt_lib_shutdown>
        3504d0:	e1a00004 	mov	r0, r4
        3504d4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        3504d8:	eaff236c 	b	319290 <__rt_exit>
    */
}

/**
 * Symbol: _ANSI_rand
 * Address: 0035051c
 */
void globals::_ANSI_rand() {
    /*
        35051c:	e59f0024 	ldr	r0, [pc, #24]	; 350548 <_ANSI_rand+0x2c>
        350520:	e5901004 	ldr	r1, [r0, #4]
        350524:	e59fc020 	ldr	ip, [pc, #20]	; 35054c <_ANSI_rand+0x30>
        350528:	e001019c 	mul	r1, ip, r1
        35052c:	e2811039 	add	r1, r1, #57	; 0x39
        350530:	e2811a03 	add	r1, r1, #12288	; 0x3000
        350534:	e5a01004 	str	r1, [r0, #4]!
        350538:	e3a00902 	mov	r0, #32768	; 0x8000
        35053c:	e2400001 	sub	r0, r0, #1	; 0x1
        350540:	e0000821 	and	r0, r0, r1, lsr #16
        350544:	e1a0f00e 	mov	pc, lr
        350548:	0c10595c 	ldceq	9, cr5, [r0], -#368
        35054c:	41c64e6d 	bicmi	r4, r6, sp, ror #28
    */
}

/**
 * Symbol: _ANSI_srand
 * Address: 00350550
 */
void globals::_ANSI_srand() {
    /*
        350550:	e59f1004 	ldr	r1, [pc, #4]	; 35055c <_ANSI_srand+0xc>
        350554:	e5a10004 	str	r0, [r1, #4]!
        350558:	e1a0f00e 	mov	pc, lr
        35055c:	0c10595c 	ldceq	9, cr5, [r0], -#368
        350560:	e1a0c00d 	mov	ip, sp
        350564:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        350568:	e24cb004 	sub	fp, ip, #4	; 0x4
        35056c:	e1a04002 	mov	r4, r2
        350570:	e1a05003 	mov	r5, r3
        350574:	e24ddc01 	sub	sp, sp, #256	; 0x100
        350578:	e3a09001 	mov	r9, #1	; 0x1
        35057c:	e58d0080 	str	r0, [sp, #128]
        350580:	e58d1000 	str	r1, [sp]
        350584:	e24dd004 	sub	sp, sp, #4	; 0x4
        350588:	e2499001 	sub	r9, r9, #1	; 0x1
        35058c:	e28d0084 	add	r0, sp, #132	; 0x84
        350590:	e7906109 	ldr	r6, [r0, r9, lsl #2]
        350594:	e28d0004 	add	r0, sp, #4	; 0x4
        350598:	e7900109 	ldr	r0, [r0, r9, lsl #2]
        35059c:	ea0000b0 	b	350864 <_ANSI_srand+0x314>
        3505a0:	e59d0000 	ldr	r0, [sp]
        3505a4:	e1a000c0 	mov	r0, r0, asr #1
        3505a8:	e0000094 	mul	r0, r4, r0
        3505ac:	e0867000 	add	r7, r6, r0
        3505b0:	e59d1000 	ldr	r1, [sp]
        3505b4:	e3110001 	tst	r1, #1	; 0x1
        3505b8:	00400004 	subeq	r0, r0, r4
        3505bc:	e0878000 	add	r8, r7, r0
        3505c0:	e1a01007 	mov	r1, r7
        3505c4:	e1a00006 	mov	r0, r6
        3505c8:	e1a0e00f 	mov	lr, pc
        3505cc:	e1a0f005 	mov	pc, r5
        3505d0:	e3500000 	cmp	r0, #0	; 0x0
        3505d4:	da000012 	ble	350624 <_ANSI_srand+0xd4>
        3505d8:	e1a00004 	mov	r0, r4
        3505dc:	e1841006 	orr	r1, r4, r6
        3505e0:	e3110003 	tst	r1, #3	; 0x3
        3505e4:	1a000006 	bne	350604 <_ANSI_srand+0xb4>
        3505e8:	e5961000 	ldr	r1, [r6]
        3505ec:	e5972000 	ldr	r2, [r7]
        3505f0:	e4862004 	str	r2, [r6], #4
        3505f4:	e2500004 	subs	r0, r0, #4	; 0x4
        3505f8:	e4871004 	str	r1, [r7], #4
        3505fc:	1afffff9 	bne	3505e8 <_ANSI_srand+0x98>
        350600:	ea000005 	b	35061c <_ANSI_srand+0xcc>
        350604:	e5d61000 	ldrb	r1, [r6]
        350608:	e5d72000 	ldrb	r2, [r7]
        35060c:	e4c62001 	strb	r2, [r6], #1
        350610:	e4c71001 	strb	r1, [r7], #1
        350614:	e2500001 	subs	r0, r0, #1	; 0x1
        350618:	1afffff9 	bne	350604 <_ANSI_srand+0xb4>
        35061c:	e0466004 	sub	r6, r6, r4
        350620:	e0477004 	sub	r7, r7, r4
        350624:	e1a01008 	mov	r1, r8
        350628:	e1a00007 	mov	r0, r7
        35062c:	e1a0e00f 	mov	lr, pc
        350630:	e1a0f005 	mov	pc, r5
        350634:	e3500000 	cmp	r0, #0	; 0x0
        350638:	da00002b 	ble	3506ec <_ANSI_srand+0x19c>
        35063c:	e1a01008 	mov	r1, r8
        350640:	e1a00006 	mov	r0, r6
        350644:	e1a0e00f 	mov	lr, pc
        350648:	e1a0f005 	mov	pc, r5
        35064c:	e3500000 	cmp	r0, #0	; 0x0
        350650:	da000012 	ble	3506a0 <_ANSI_srand+0x150>
        350654:	e1a00004 	mov	r0, r4
        350658:	e1841006 	orr	r1, r4, r6
        35065c:	e3110003 	tst	r1, #3	; 0x3
        350660:	1a000006 	bne	350680 <_ANSI_srand+0x130>
        350664:	e5961000 	ldr	r1, [r6]
        350668:	e5982000 	ldr	r2, [r8]
        35066c:	e4862004 	str	r2, [r6], #4
        350670:	e2500004 	subs	r0, r0, #4	; 0x4
        350674:	e4881004 	str	r1, [r8], #4
        350678:	1afffff9 	bne	350664 <_ANSI_srand+0x114>
        35067c:	ea000005 	b	350698 <_ANSI_srand+0x148>
        350680:	e5d61000 	ldrb	r1, [r6]
        350684:	e5d82000 	ldrb	r2, [r8]
        350688:	e4c62001 	strb	r2, [r6], #1
        35068c:	e4c81001 	strb	r1, [r8], #1
        350690:	e2500001 	subs	r0, r0, #1	; 0x1
        350694:	1afffff9 	bne	350680 <_ANSI_srand+0x130>
        350698:	e0466004 	sub	r6, r6, r4
        35069c:	e0488004 	sub	r8, r8, r4
        3506a0:	e1a00004 	mov	r0, r4
        3506a4:	e1841007 	orr	r1, r4, r7
        3506a8:	e3110003 	tst	r1, #3	; 0x3
        3506ac:	1a000006 	bne	3506cc <_ANSI_srand+0x17c>
        3506b0:	e5971000 	ldr	r1, [r7]
        3506b4:	e5982000 	ldr	r2, [r8]
        3506b8:	e4872004 	str	r2, [r7], #4
        3506bc:	e2500004 	subs	r0, r0, #4	; 0x4
        3506c0:	e4881004 	str	r1, [r8], #4
        3506c4:	1afffff9 	bne	3506b0 <_ANSI_srand+0x160>
        3506c8:	ea000005 	b	3506e4 <_ANSI_srand+0x194>
        3506cc:	e5d71000 	ldrb	r1, [r7]
        3506d0:	e5d82000 	ldrb	r2, [r8]
        3506d4:	e4c72001 	strb	r2, [r7], #1
        3506d8:	e4c81001 	strb	r1, [r8], #1
        3506dc:	e2500001 	subs	r0, r0, #1	; 0x1
        3506e0:	1afffff9 	bne	3506cc <_ANSI_srand+0x17c>
        3506e4:	e0477004 	sub	r7, r7, r4
        3506e8:	e0488004 	sub	r8, r8, r4
        3506ec:	e0480004 	sub	r0, r8, r4
        3506f0:	e1a01004 	mov	r1, r4
        3506f4:	e1842007 	orr	r2, r4, r7
        3506f8:	e3120003 	tst	r2, #3	; 0x3
        3506fc:	1a000006 	bne	35071c <_ANSI_srand+0x1cc>
        350700:	e5972000 	ldr	r2, [r7]
        350704:	e5903000 	ldr	r3, [r0]
        350708:	e4873004 	str	r3, [r7], #4
        35070c:	e2511004 	subs	r1, r1, #4	; 0x4
        350710:	e4802004 	str	r2, [r0], #4
        350714:	1afffff9 	bne	350700 <_ANSI_srand+0x1b0>
        350718:	ea000005 	b	350734 <_ANSI_srand+0x1e4>
        35071c:	e5d72000 	ldrb	r2, [r7]
        350720:	e5d03000 	ldrb	r3, [r0]
        350724:	e4c73001 	strb	r3, [r7], #1
        350728:	e4c02001 	strb	r2, [r0], #1
        35072c:	e2511001 	subs	r1, r1, #1	; 0x1
        350730:	1afffff9 	bne	35071c <_ANSI_srand+0x1cc>
        350734:	e0408004 	sub	r8, r0, r4
        350738:	e1a07006 	mov	r7, r6
        35073c:	e1a0a008 	mov	sl, r8
        350740:	e0877004 	add	r7, r7, r4
        350744:	e1a0100a 	mov	r1, sl
        350748:	e1a00007 	mov	r0, r7
        35074c:	e1a0e00f 	mov	lr, pc
        350750:	e1a0f005 	mov	pc, r5
        350754:	e3500000 	cmp	r0, #0	; 0x0
        350758:	bafffff8 	blt	350740 <_ANSI_srand+0x1f0>
        35075c:	e0488004 	sub	r8, r8, r4
        350760:	e1a0100a 	mov	r1, sl
        350764:	e1a00008 	mov	r0, r8
        350768:	e1a0e00f 	mov	lr, pc
        35076c:	e1a0f005 	mov	pc, r5
        350770:	e3500000 	cmp	r0, #0	; 0x0
        350774:	cafffff8 	bgt	35075c <_ANSI_srand+0x20c>
        350778:	e1580007 	cmp	r8, r7
        35077c:	e1a00004 	mov	r0, r4
        350780:	e1841007 	orr	r1, r4, r7
        350784:	e2011003 	and	r1, r1, #3	; 0x3
        350788:	9a000011 	bls	3507d4 <_ANSI_srand+0x284>
        35078c:	e3310000 	teq	r1, #0	; 0x0
        350790:	1a000006 	bne	3507b0 <_ANSI_srand+0x260>
        350794:	e5971000 	ldr	r1, [r7]
        350798:	e5982000 	ldr	r2, [r8]
        35079c:	e4872004 	str	r2, [r7], #4
        3507a0:	e2500004 	subs	r0, r0, #4	; 0x4
        3507a4:	e4881004 	str	r1, [r8], #4
        3507a8:	1afffff9 	bne	350794 <_ANSI_srand+0x244>
        3507ac:	ea000005 	b	3507c8 <_ANSI_srand+0x278>
        3507b0:	e5d71000 	ldrb	r1, [r7]
        3507b4:	e5d82000 	ldrb	r2, [r8]
        3507b8:	e4c72001 	strb	r2, [r7], #1
        3507bc:	e4c81001 	strb	r1, [r8], #1
        3507c0:	e2500001 	subs	r0, r0, #1	; 0x1
        3507c4:	1afffff9 	bne	3507b0 <_ANSI_srand+0x260>
        3507c8:	e0477004 	sub	r7, r7, r4
        3507cc:	e0488004 	sub	r8, r8, r4
        3507d0:	eaffffda 	b	350740 <_ANSI_srand+0x1f0>
        3507d4:	e3310000 	teq	r1, #0	; 0x0
        3507d8:	1a000006 	bne	3507f8 <_ANSI_srand+0x2a8>
        3507dc:	e5971000 	ldr	r1, [r7]
        3507e0:	e59a2000 	ldr	r2, [sl]
        3507e4:	e4872004 	str	r2, [r7], #4
        3507e8:	e2500004 	subs	r0, r0, #4	; 0x4
        3507ec:	e48a1004 	str	r1, [sl], #4
        3507f0:	1afffff9 	bne	3507dc <_ANSI_srand+0x28c>
        3507f4:	ea000005 	b	350810 <_ANSI_srand+0x2c0>
        3507f8:	e5d71000 	ldrb	r1, [r7]
        3507fc:	e5da2000 	ldrb	r2, [sl]
        350800:	e4c72001 	strb	r2, [r7], #1
        350804:	e4ca1001 	strb	r1, [sl], #1
        350808:	e2500001 	subs	r0, r0, #1	; 0x1
        35080c:	1afffff9 	bne	3507f8 <_ANSI_srand+0x2a8>
        350810:	e0477004 	sub	r7, r7, r4
        350814:	e0471006 	sub	r1, r7, r6
        350818:	e1a00004 	mov	r0, r4
        35081c:	eb618849 	bl	1bb2948 <$__rt_udiv>
        350820:	e2400001 	sub	r0, r0, #1	; 0x1
        350824:	e59d1000 	ldr	r1, [sp]
        350828:	e0411000 	sub	r1, r1, r0
        35082c:	e2411001 	sub	r1, r1, #1	; 0x1
        350830:	e1500001 	cmp	r0, r1
        350834:	da00000c 	ble	35086c <_ANSI_srand+0x31c>
        350838:	e351000a 	cmp	r1, #10	; 0xa
        35083c:	da000006 	ble	35085c <_ANSI_srand+0x30c>
        350840:	e28d2084 	add	r2, sp, #132	; 0x84
        350844:	e7826109 	str	r6, [r2, r9, lsl #2]
        350848:	e1a02009 	mov	r2, r9
        35084c:	e2899001 	add	r9, r9, #1	; 0x1
        350850:	e28d3004 	add	r3, sp, #4	; 0x4
        350854:	e7830102 	str	r0, [r3, r2, lsl #2]
        350858:	ea00000e 	b	350898 <_ANSI_srand+0x348>
        35085c:	e350000a 	cmp	r0, #10	; 0xa
        350860:	da00000f 	ble	3508a4 <_ANSI_srand+0x354>
        350864:	e58d0000 	str	r0, [sp]
        350868:	eaffff4c 	b	3505a0 <_ANSI_srand+0x50>
        35086c:	e350000a 	cmp	r0, #10	; 0xa
        350870:	da000006 	ble	350890 <_ANSI_srand+0x340>
        350874:	e28d2084 	add	r2, sp, #132	; 0x84
        350878:	e7827109 	str	r7, [r2, r9, lsl #2]
        35087c:	e1a02009 	mov	r2, r9
        350880:	e2899001 	add	r9, r9, #1	; 0x1
        350884:	e28d3004 	add	r3, sp, #4	; 0x4
        350888:	e7831102 	str	r1, [r3, r2, lsl #2]
        35088c:	eafffff4 	b	350864 <_ANSI_srand+0x314>
        350890:	e351000a 	cmp	r1, #10	; 0xa
        350894:	da000002 	ble	3508a4 <_ANSI_srand+0x354>
        350898:	e1a06007 	mov	r6, r7
        35089c:	e58d1000 	str	r1, [sp]
        3508a0:	eaffff3e 	b	3505a0 <_ANSI_srand+0x50>
        3508a4:	e28dd004 	add	sp, sp, #4	; 0x4
        3508a8:	e3390000 	teq	r9, #0	; 0x0
        3508ac:	1affff34 	bne	350584 <_ANSI_srand+0x34>
        3508b0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: _2C8
 * Address: 0037414c
 */
void globals::_2C8() {
    /*
        37414c:	00008281 	andeq	r8, r0, r1, lsl #5
        374150:	000099f1 	streqd	r9, [r0], -r1
        374154:	0000e664 	andeq	lr, r0, r4, ror #12
        374158:	0002901b 	andeq	r9, r2, fp, lsl r0
    */
}

/**
 * Symbol: _2C16
 * Address: 0037415c
 */
void globals::_2C16() {
    /*
        37415c:	0000809e 	muleq	r0, lr, r0
        374160:	000085c2 	andeq	r8, r0, r2, asr #11
        374164:	00009123 	andeq	r9, r0, r3, lsr #2
        374168:	0000a596 	muleq	r0, r6, r5
        37416c:	0000c9c4 	andeq	ip, r0, r4, asr #19
        374170:	00010f88 	andeq	r0, r1, r8, lsl #31
        374174:	0001b8f2 	streqd	fp, [r1], -r2
        374178:	000519e4 	andeq	r1, r5, r4, ror #19
    */
}

/**
 * Symbol: _2C32
 * Address: 0037417c
 */
void globals::_2C32() {
    /*
        37417c:	00008027 	andeq	r8, r0, r7, lsr #32
        374180:	00008166 	andeq	r8, r0, r6, ror #2
        374184:	000083f4 	streqd	r8, [r0], -r4
        374188:	000087f2 	streqd	r8, [r0], -r2
        37418c:	00008d98 	muleq	r0, r8, sp
        374190:	0000953b 	andeq	r9, r0, fp, lsr r5
        374194:	00009f5c 	andeq	r9, r0, ip, asr pc
        374198:	0000acc0 	andeq	sl, r0, r0, asr #25
        37419c:	0000be99 	muleq	r0, r9, lr
        3741a0:	0000d6df 	ldreqd	sp, [r0], -pc
        3741a4:	0000f8fa 	streqd	pc, [r0], -sl
        3741a8:	00012b60 	andeq	r2, r1, r0, ror #22
        3741ac:	00017bf2 	streqd	r7, [r1], -r2
        3741b0:	00020eca 	andeq	r0, r2, sl, asr #29
        3741b4:	00036859 	andeq	r6, r3, r9, asr r8
        3741b8:	000a30a4 	andeq	r3, sl, r4, lsr #1
    */
}

/**
 * Symbol: _xctype
 * Address: 00376bd4
 */
void globals::_xctype() {
    /*
        376bd4:	00202020 	eoreq	r2, r0, r0, lsr #32
        376bd8:	20202020 	eorcs	r2, r0, r0, lsr #32
        376bdc:	20606020 	rsbcs	r6, r0, r0, lsr #32
        376be0:	60602020 	rsbvs	r2, r0, r0, lsr #32
        376be4:	20202020 	eorcs	r2, r0, r0, lsr #32
        376be8:	20202020 	eorcs	r2, r0, r0, lsr #32
        376bec:	20202020 	eorcs	r2, r0, r0, lsr #32
        376bf0:	20202020 	eorcs	r2, r0, r0, lsr #32
        376bf4:	48101010 	ldmmida	r0, {r4, ip}
        376bf8:	10101010 	andnes	r1, r0, r0, lsl r0
        376bfc:	10101010 	andnes	r1, r0, r0, lsl r0
        376c00:	10101010 	andnes	r1, r0, r0, lsl r0
        376c04:	84848484 	strhi	r8, [r4], #1156
        376c08:	84848484 	strhi	r8, [r4], #1156
        376c0c:	84841010 	strhi	r1, [r4], #16
        376c10:	10101010 	andnes	r1, r0, r0, lsl r0
        376c14:	10818181 	addne	r8, r1, r1, lsl #3
        376c18:	81818101 	orrhi	r8, r1, r1, lsl #2
        376c1c:	01010101 	tsteq	r1, r1, lsl #2
        376c20:	01010101 	tsteq	r1, r1, lsl #2
        376c24:	01010101 	tsteq	r1, r1, lsl #2
        376c28:	01010101 	tsteq	r1, r1, lsl #2
        376c2c:	01010110 	tsteq	r1, r0, lsl r1
        376c30:	10101010 	andnes	r1, r0, r0, lsl r0
        376c34:	10828282 	addne	r8, r2, r2, lsl #5
        376c38:	82828202 	addhi	r8, r2, #536870912	; 0x20000000
        376c3c:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        376c40:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        376c44:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        376c48:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        376c4c:	02020210 	andeq	r0, r2, #1	; 0x1
        376c50:	10101000 	andnes	r1, r0, r0
        376c54:	01010101 	tsteq	r1, r1, lsl #2
        376c58:	01010102 	tsteq	r1, r2, lsl #2
        376c5c:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        376c60:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        376c64:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        376c68:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        376c6c:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        376c70:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        376c74:	00000000 	andeq	r0, r0, r0
        376c78:	00000002 	andeq	r0, r0, r2
        376c7c:	00000000 	andeq	r0, r0, r0
        376c80:	00000101 	andeq	r0, r0, r1, lsl #2
        376c90:	00000202 	andeq	r0, r0, r2, lsl #4
        376c94:	10100000 	andnes	r0, r0, r0
        376c98:	00000010 	andeq	r0, r0, r0, lsl r0
        376c9c:	10000001 	andne	r0, r0, r1
        376ca0:	01010102 	tsteq	r1, r2, lsl #2
        376cac:	02010000 	andeq	r0, r1, #0	; 0x0
        376cb0:	00000202 	andeq	r0, r0, r2, lsl #4
        376cb4:	00000000 	andeq	r0, r0, r0
        376cb8:	00010101 	andeq	r0, r1, r1, lsl #2
        376cbc:	01010101 	tsteq	r1, r1, lsl #2
        376cc0:	01010101 	tsteq	r1, r1, lsl #2
        376cc4:	00010101 	andeq	r0, r1, r1, lsl #2
        376cc8:	01000000 	tsteq	r0, r0
    */
}

/**
 * Symbol: _xupper
 * Address: 00376cd4
 */
void globals::_xupper() {
    /*
        376cd4:	80818283 	addhi	r8, r1, r3, lsl #5
        376cd8:	848586e7 	strhi	r8, [r5], #1767
        376cdc:	cbe580cc 	blgt	ffcd7014 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe0c67bc>
        376ce0:	818283e9 	orrhi	r8, r2, r9, ror #7
        376ce4:	e6e8eaed 	strbt	lr, [r8], sp, ror #21
        376ce8:	ebec84ee 	bl	ffe980a8 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfe287850>
        376cec:	e1ef85cd 	mvn	r8, sp, asr #11
        376cf0:	f2f4f386 	rscnvs	pc, r4, #402653186	; 0x18000002
        376cf4:	a0a1a2a3 	adcge	sl, r1, r3, lsr #5
        376cf8:	a4a5a6a7 	strget	sl, [r5], #1703
        376cfc:	a8a9aaab 	stmgeia	r9!, {r0, r1, r3, r5, r7, r9, fp, sp, pc}
        376d00:	acadaeaf 	stcge	14, cr10, [sp], #700
        376d04:	b0b1b2b3 	ldrlth	fp, [r1], r3
        376d08:	b4b5b6b7 	ldrltt	fp, [r5], #1719
        376d0c:	b8b9babb 	ldmltia	r9!, {r0, r1, r3, r4, r5, r7, r9, fp, ip, sp, pc}
        376d10:	bcbdaeaf 	ldclt	14, cr10, [sp], #700
        376d14:	c0c1c2c3 	sbcgt	ip, r1, r3, asr #5
        376d18:	c4c5c6c7 	strgtb	ip, [r5], #1735
        376d1c:	c8c9cacb 	stmgtia	r9, {r0, r1, r3, r6, r7, r9, fp, lr, pc}^
        376d20:	cccdcece 	stcgtl	14, cr12, [sp], #824
        376d24:	d0d1d2d3 	ldrlesb	sp, [r1], #35
        376d28:	d4d5d6d7 	ldrleb	sp, [r5], #1751
        376d2c:	d9d9dadb 	ldmleib	r9, {r0, r1, r3, r4, r6, r7, r9, fp, ip, lr, pc}^
        376d30:	dcdddedf 	ldclel	14, cr13, [sp], #892
        376d34:	e0e1e2e3 	rsc	lr, r1, r3, ror #5
        376d38:	e4e5e6e7 	strbt	lr, [r5], #1767
        376d3c:	e8e9eaeb 	stmia	r9!, {r0, r1, r3, r5, r6, r7, r9, fp, sp, lr, pc}^
        376d40:	ecedeeef 	stcl	14, cr14, [sp], #956
        376d44:	f0f1f2f3 	ldrnvsh	pc, [r1], #35
        376d48:	f4f5f6f7 	ldrnvbt	pc, [r5], #1783
        376d4c:	f8f9fafb 	ldmnvia	r9!, {r0, r1, r3, r4, r5, r6, r7, r9, fp, ip, sp, lr, pc}^
        376d50:	fcfdfeff 	ldc2l	14, cr15, [sp], #1020
    */
}

/**
 * Symbol: _xlower
 * Address: 00376d54
 */
void globals::_xlower() {
    /*
        376d54:	8a8c8d8e 	bhi	fe69a394 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfca89b3c>
        376d58:	969a9f87 	ldrls	r9, [sl], r7, lsl #31
        376d5c:	88898a8b 	stmhiia	r9, {r0, r1, r3, r7, r9, fp, pc}
        376d60:	8c8d8e8f 	stchi	14, cr8, [sp], #572
        376d64:	90919293 	umulllss	r9, r1, r3, r2
        376d68:	94959697 	ldrls	r9, [r5], #1687
        376d6c:	98999a9b 	ldmlsia	r9, {r0, r1, r3, r4, r7, r9, fp, ip, pc}
        376d70:	9c9d9e9f 	ldcls	14, cr9, [sp], #636
        376d74:	a0a1a2a3 	adcge	sl, r1, r3, lsr #5
        376d78:	a4a5a6a7 	strget	sl, [r5], #1703
        376d7c:	a8a9aaab 	stmgeia	r9!, {r0, r1, r3, r5, r7, r9, fp, sp, pc}
        376d80:	acadbebf 	stcge	14, cr11, [sp], #764
        376d84:	b0b1b2b3 	ldrlth	fp, [r1], r3
        376d88:	b4b5b6b7 	ldrltt	fp, [r5], #1719
        376d8c:	b8b9babb 	ldmltia	r9!, {r0, r1, r3, r4, r5, r7, r9, fp, ip, sp, pc}
        376d90:	bcbdbebf 	ldclt	14, cr11, [sp], #764
        376d94:	c0c1c2c3 	sbcgt	ip, r1, r3, asr #5
        376d98:	c4c5c6c7 	strgtb	ip, [r5], #1735
        376d9c:	c8c9ca88 	stmgtia	r9, {r3, r7, r9, fp, lr, pc}^
        376da0:	8b9bcfcf 	blhi	fea6ace4 <TVoyagerPlatform::$StartKeyboardDriver(unsigned char)+0xfce5a48c>
        376da4:	d0d1d2d3 	ldrlesb	sp, [r1], #35
        376da8:	d4d5d6d7 	ldrleb	sp, [r5], #1751
        376dac:	d8d8dadb 	ldmleia	r8, {r0, r1, r3, r4, r6, r7, r9, fp, ip, lr, pc}^
        376db0:	dcdddedf 	ldclel	14, cr13, [sp], #892
        376db4:	e0e1e2e3 	rsc	lr, r1, r3, ror #5
        376db8:	e4899087 	str	r9, [r9], #135
        376dbc:	918f9294 	strlsb	r9, [pc, r4]
        376dc0:	95939799 	ldrls	r9, [r3, #1945]
        376dc4:	f0989c9e 	umullnvs	r9, r8, lr, ip
        376dc8:	9df5f6f7 	ldclsl	6, cr15, [r5, #988]!
        376dcc:	f8f9fafb 	ldmnvia	r9!, {r0, r1, r3, r4, r5, r6, r7, r9, fp, ip, sp, lr, pc}^
        376dd0:	fcfdfeff 	ldc2l	14, cr15, [sp], #1020
    */
}

/**
 * Symbol: __ctype
 * Address: 0038053c
 */
globals::() {
    /*
        38053c:	40404040 	submi	r4, r0, r0, asr #32
        380540:	40404040 	submi	r4, r0, r0, asr #32
        380544:	40414141 	submi	r4, r1, r1, asr #2
        380548:	41414040 	cmpmi	r1, r0, asr #32
        38054c:	40404040 	submi	r4, r0, r0, asr #32
        380550:	40404040 	submi	r4, r0, r0, asr #32
        380554:	40404040 	submi	r4, r0, r0, asr #32
        380558:	40404040 	submi	r4, r0, r0, asr #32
        38055c:	05020202 	streq	r0, [r2, -#514]
        380560:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        380564:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        380568:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        38056c:	20202020 	eorcs	r2, r0, r0, lsr #32
        380570:	20202020 	eorcs	r2, r0, r0, lsr #32
        380574:	20200202 	eorcs	r0, r0, r2, lsl #4
        380578:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        38057c:	02909090 	addeqs	r9, r0, #144	; 0x90
        380580:	90909010 	addlss	r9, r0, r0, lsl r0
        380584:	10101010 	andnes	r1, r0, r0, lsl r0
        380588:	10101010 	andnes	r1, r0, r0, lsl r0
        38058c:	10101010 	andnes	r1, r0, r0, lsl r0
        380590:	10101010 	andnes	r1, r0, r0, lsl r0
        380594:	10101002 	andnes	r1, r0, r2
        380598:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        38059c:	02888888 	addeq	r8, r8, #8912896	; 0x880000
        3805a0:	88888808 	stmhiia	r8, {r3, fp, pc}
        3805a4:	08080808 	stmeqda	r8, {r3, fp}
        3805a8:	08080808 	stmeqda	r8, {r3, fp}
        3805ac:	08080808 	stmeqda	r8, {r3, fp}
        3805b0:	08080808 	stmeqda	r8, {r3, fp}
        3805b4:	08080802 	stmeqda	r8, {r1, fp}
        3805b8:	02020240 	andeq	r0, r2, #4	; 0x4
        38063c:	546f6b65 	strplbt	r6, [pc], #b65	; 380644 <__ctype+0x108>
        380640:	6e202020 	cdpvs	0, 2, cr2, cr0, cr0, {1}
        380644:	20000000 	andcs	r0, r0, r0
        380648:	41746f6d 	cmnmi	r4, sp, ror #30
        38064c:	20200000 	eorcs	r0, r0, r0
        380650:	400949fb 	strmid	r4, [r9], -fp
        380654:	3ed443e9 	cdpcc	3, 13, cr4, cr4, cr9, {7}
        380658:	405c774e 	submis	r7, ip, lr, asr #14
        38065c:	4d365da3 	ldcmi	13, cr5, [r6, -#652]!
        380660:	407797c3 	rsbmis	r9, r7, r3, asr #15
        380664:	8897528b 	ldmhiia	r7, {r0, r1, r3, r7, r9, ip, lr}
        380668:	40a912c1 	adcmi	r1, r9, r1, asr #5
        38066c:	535d121a 	cmppl	sp, #-1610612735	; 0xa0000001
        380670:	3fc7c790 	swicc	0x00c7c790
        380674:	5a31c322 	bpl	ff1304 <ROM$$Size+0x8d16b8>
        380678:	403799ee 	eormis	r9, r7, lr, ror #19
        38067c:	342fb2de 	strcct	fp, [pc], #2de	; 380684 <__ctype+0x148>
        380680:	406e80c9 	rsbmi	r8, lr, r9, asr #1
        380684:	d57e55b8 	ldrleb	r5, [lr, -#1464]!
        380688:	40940a77 	addmis	r0, r4, r7, ror sl
        38068c:	529cadc8 	addpls	sl, ip, #12800	; 0x3200
        380690:	40a63879 	adcmi	r3, r6, r9, ror r8
        380694:	423b87ad 	eormis	r8, fp, #45350912	; 0x2b40000
        380698:	3fe20dd5 	swicc	0x00e20dd5
        38069c:	08eb103e 	stmeqia	fp!, {r1, r2, r3, r4, r5, ip}^
        3806a0:	4021c42c 	eormi	ip, r1, ip, lsr #8
        3806a4:	35b8bc02 	ldrcc	fp, [r8, #3074]!
        3806a8:	405087a0 	submis	r8, r0, r0, lsr #15
        3806ac:	d1c420d0 	ldrled	r2, [r4]
        3806b0:	4072aa29 	rsbmis	sl, r2, r9, lsr #20
        3806b4:	86aba462 	strhit	sl, [fp], r2, ror #8
        3806b8:	408b8f9e 	umullmi	r8, fp, lr, pc
        3806bc:	262b9fa3 	strcst	r9, [fp], -r3, lsr #31
        3806c0:	409ac030 	addmis	ip, sl, r0, lsr r0
        3806c4:	c15dc8d7 	ldrgtsb	ip, [sp, -#135]
        3806c8:	40a00628 	adcmi	r0, r0, r8, lsr #12
        3806cc:	21236f6b 	teqcs	r3, fp, ror #30
        3806d0:	4093395b 	addmis	r3, r3, fp, asr r9
        3806d4:	7fd2fc8e 	swivc	0x00d2fc8e
        3806d8:	3e571e70 	mrccc	14, 2, r1, cr7, cr0, {3}
        3806dc:	3c5f5815 	mrrccc	8, 1, r5, pc, cr5
        3806e0:	402f7d66 	eormi	r7, pc, r6, ror #26
        3806e4:	f486ded5 	strnv	sp, [r6], #3797
        3806e8:	405d6c69 	submis	r6, sp, r9, ror #24
        3806ec:	b0ffcde7 	rsclts	ip, pc, r7, ror #27
        3806f0:	4080c972 	addmi	ip, r0, r2, ror r9
        3806f4:	e588749e 	str	r7, [r8, #1182]
        3806f8:	4099558e 	addmis	r5, r9, lr, lsl #11
        3806fc:	eca29d27 	stc	13, cr9, [r2], #156
        380700:	40a9b599 	umlalmi	fp, r9, r9, r5
        380704:	356d1202 	strccb	r1, [sp, -#514]!
        380708:	40b10a9e 	umlalmis	r0, r1, lr, sl
        38070c:	7cb10e86 	ldcvc	14, cr0, [r1], #536
        380710:	40aadebc 	strmih	sp, [sl], ip
        380714:	3fc90dbd 	swicc	0x00c90dbd
        380718:	4093395b 	addmis	r3, r3, fp, asr r9
        38071c:	7fd35f61 	swivc	0x00d35f61
        380720:	3fd38a78 	swicc	0x00d38a78
        380724:	b9f065f6 	ldmltib	r0!, {r1, r2, r4, r5, r6, r7, r8, sl, sp, lr}^
        380728:	3fd70fe4 	swicc	0x00d70fe4
        38072c:	0e2425b8 	mcreq	5, 1, r2, cr4, cr8, {5}
        380730:	3fc0199d 	swicc	0x00c0199d
        380734:	980a842f 	stmlsda	sl, {r0, r1, r2, r3, r5, sl, pc}
        380738:	3f907844 	swicc	0x00907844
        38073c:	8cd6c5b5 	ldchil	5, cr12, [r6], #724
        380740:	3f4595fd 	swicc	0x004595fd
        380744:	0d71e33c 	ldceql	3, cr14, [r1, -#240]!
        380748:	3f90b4fb 	swicc	0x0090b4fb
        38074c:	18b485c7 	ldmneia	r4!, {r0, r1, r2, r6, r7, r8, sl, pc}
        380750:	40048c54 	andmi	r8, r4, r4, asr ip
        380754:	508800db 	ldrpld	r0, [r8], fp
        380758:	3ffdf79d 	swicc	0x00fdf79d
        38075c:	6855f0ad 	ldmvsda	r5, {r0, r2, r3, r5, r7, ip, sp, lr, pc}^
        380760:	3fe0e499 	swicc	0x00e0e499
        380764:	3e122c39 	mrccc	12, 0, r2, cr2, cr9, {1}
        380768:	3faefc42 	swicc	0x00aefc42
        38076c:	917d7de7 	cmnls	sp, r7, ror #27
        380770:	3f632147 	swicc	0x00632147
        380774:	a014bad1 	ldrgesb	fp, [r4], -r1
        380778:	3fe20dd7 	swicc	0x00e20dd7
        38077c:	50429b6d 	subpl	r9, r2, sp, ror #22
        380780:	403b3333 	eormis	r3, fp, r3, lsr r3
        380784:	33333333 	teqcc	r3, #-872415232	; 0xcc000000
        380788:	7fc203a2 	swivc	0x00c203a2
        38078c:	7a37512d 	bvc	1154c48 <ROM$$Size+0xa34ffc>
        380790:	418ffeeb 	orrmi	pc, pc, fp, ror #29
        380794:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: __huge_val
 * Address: 00380a94
 */
void globals::() {
    /*
        380a94:	7fefffff 	swivc	0x00efffff
        380a98:	ffffffff 	swinv	0x00ffffff
    */
}

/**
 * Symbol: _ldfp
 * Address: 003823f0
 */
void globals::_ldfp() {
    /*
        3823f0:	e92d4000 	stmdb	sp!, {lr}
        3823f4:	e3a01000 	mov	r1, #0	; 0x0
        3823f8:	ee30c110 	rfs	ip
        3823fc:	ee201110 	wfs	r1
        382400:	edd08100 	ldfp	f0, [r0]
        382404:	ee000188 	adfd	f0, f0, #0.0
        382408:	ee301110 	rfs	r1
        38240c:	ee20c110 	wfs	ip
        382410:	e311000f 	tst	r1, #15	; 0xf
        382414:	e8bd8000 	ldmia	sp!, {pc}
        382418:	e3110007 	tst	r1, #7	; 0x7
        38241c:	0affffe3 	beq	3823b0 <sqrt+0x2c>
        382420:	e5900000 	ldr	r0, [r0]
        382424:	e3500000 	cmp	r0, #0	; 0x0
        382428:	5affffe3 	bpl	3823bc <sqrt+0x38>
        38242c:	eaffffe7 	b	3823d0 <sqrt+0x4c>
    */
}

/**
 * Symbol: _stfp
 * Address: 00382430
 */
void globals::_stfp() {
    /*
        382430:	e92d0003 	stmdb	sp!, {r0, r1}
        382434:	ecbd8102 	ldfd	f0, [sp], #8
        382438:	edc28100 	stfp	f0, [r2]
        38243c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: __main
 * Address: 0038c89c
 */
void globals::() {
    /*
        38c89c:	e92d4000 	stmdb	sp!, {lr}
        38c8a0:	e8fd8000 	ldmia	sp!, {pc}^
    */
}

/**
 * Symbol: _main
 * Address: 0038c8a4
 */
void globals::_main() {
    /*
        38c8a4:	e92d4000 	stmdb	sp!, {lr}
        38c8a8:	e8fd8000 	ldmia	sp!, {pc}^
    */
}

/**
 * Symbol: _stack_overflow
 * Address: 0038c8ac
 */
void globals::_stack_overflow() {
    /*
        38c8ac:	e6000510 	undefined
        38c8b0:	5f737461 	swipl	0x00737461
        38c8b4:	636b5f6f 	cmnvs	fp, #444	; 0x1bc
        38c8b8:	76657266 	strvcbt	r7, [r5], -r6, ror #4
        38c8bc:	6c6f7720 	stcvsl	7, cr7, [pc], -#128
        38c8c0:	63616c6c 	cmnvs	r1, #27648	; 0x6c00
        38c8c4:	6564202d 	strvsb	r2, [r4, -#45]!
        38c8c8:	2070616e 	rsbcss	r6, r0, lr, ror #2
        38c8cc:	69632100 	stmvsdb	r3!, {r8, sp}^
        38c8d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: __multiply
 * Address: 0038c8d4
 */
void globals::() {
    /*
        38c8d4:	e3a02000 	mov	r2, #0	; 0x0
        38c8d8:	e1b010a1 	movs	r1, r1, lsr #1
        38c8dc:	20822000 	addcs	r2, r2, r0
        38c8e0:	e0800000 	add	r0, r0, r0
        38c8e4:	1afffffb 	bne	38c8d8 <__multiply+0x4>
        38c8e8:	e1a00002 	mov	r0, r2
        38c8ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: __rt_divtest
 * Address: 0038c8f0
 */
void globals::() {
    /*
        38c8f0:	e3500000 	cmp	r0, #0	; 0x0
        38c8f4:	11a0f00e 	movne	pc, lr
        38c8f8:	ea000095 	b	38cb54 <__rt_sdiv10+0x48>
    */
}

/**
 * Symbol: __rt_udiv
 * Address: 0038c8fc
 */
void globals::() {
    /*
        38c8fc:	e1b02000 	movs	r2, r0
        38c900:	0a000093 	beq	38cb54 <__rt_sdiv10+0x48>
        38c904:	e3a03000 	mov	r3, #0	; 0x0
        38c908:	e3a0c102 	mov	ip, #-2147483648	; 0x80000000
        38c90c:	e151000c 	cmp	r1, ip
        38c910:	31a0c001 	movcc	ip, r1
        38c914:	e15c0002 	cmp	ip, r2
        38c918:	9a000023 	bls	38c9ac <__rt_udiv+0xb0>
        38c91c:	e15c0082 	cmp	ip, r2, lsl #1
        38c920:	9a00001e 	bls	38c9a0 <__rt_udiv+0xa4>
        38c924:	e15c0102 	cmp	ip, r2, lsl #2
        38c928:	9a000019 	bls	38c994 <__rt_udiv+0x98>
        38c92c:	e15c0182 	cmp	ip, r2, lsl #3
        38c930:	9a000014 	bls	38c988 <__rt_udiv+0x8c>
        38c934:	e15c0202 	cmp	ip, r2, lsl #4
        38c938:	9a00000f 	bls	38c97c <__rt_udiv+0x80>
        38c93c:	e15c0282 	cmp	ip, r2, lsl #5
        38c940:	9a00000a 	bls	38c970 <__rt_udiv+0x74>
        38c944:	e15c0302 	cmp	ip, r2, lsl #6
        38c948:	9a000005 	bls	38c964 <__rt_udiv+0x68>
        38c94c:	e15c0382 	cmp	ip, r2, lsl #7
        38c950:	81a02402 	movhi	r2, r2, lsl #8
        38c954:	8affffee 	bhi	38c914 <__rt_udiv+0x18>
        38c958:	e1510382 	cmp	r1, r2, lsl #7
        38c95c:	e0a33003 	adc	r3, r3, r3
        38c960:	20411382 	subcs	r1, r1, r2, lsl #7
        38c964:	e1510302 	cmp	r1, r2, lsl #6
        38c968:	e0a33003 	adc	r3, r3, r3
        38c96c:	20411302 	subcs	r1, r1, r2, lsl #6
        38c970:	e1510282 	cmp	r1, r2, lsl #5
        38c974:	e0a33003 	adc	r3, r3, r3
        38c978:	20411282 	subcs	r1, r1, r2, lsl #5
        38c97c:	e1510202 	cmp	r1, r2, lsl #4
        38c980:	e0a33003 	adc	r3, r3, r3
        38c984:	20411202 	subcs	r1, r1, r2, lsl #4
        38c988:	e1510182 	cmp	r1, r2, lsl #3
        38c98c:	e0a33003 	adc	r3, r3, r3
        38c990:	20411182 	subcs	r1, r1, r2, lsl #3
        38c994:	e1510102 	cmp	r1, r2, lsl #2
        38c998:	e0a33003 	adc	r3, r3, r3
        38c99c:	20411102 	subcs	r1, r1, r2, lsl #2
        38c9a0:	e1510082 	cmp	r1, r2, lsl #1
        38c9a4:	e0a33003 	adc	r3, r3, r3
        38c9a8:	20411082 	subcs	r1, r1, r2, lsl #1
        38c9ac:	e1510002 	cmp	r1, r2
        38c9b0:	e0a33003 	adc	r3, r3, r3
        38c9b4:	20411002 	subcs	r1, r1, r2
        38c9b8:	e15000a2 	cmp	r0, r2, lsr #1
        38c9bc:	91a02422 	movls	r2, r2, lsr #8
        38c9c0:	9affffe4 	bls	38c958 <__rt_udiv+0x5c>
        38c9c4:	e1a00003 	mov	r0, r3
        38c9c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: __uremainder
 * Address: 0038c9cc
 */
void globals::() {
    /*
        38c9cc:	e92d4000 	stmdb	sp!, {lr}
        38c9d0:	ebffffc9 	bl	38c8fc <__rt_udiv>
        38c9d4:	e1a00001 	mov	r0, r1
        38c9d8:	e8fd8000 	ldmia	sp!, {pc}^
    */
}

/**
 * Symbol: __rt_udiv10
 * Address: 0038c9dc
 */
void globals::() {
    /*
        38c9dc:	e1a01000 	mov	r1, r0
        38c9e0:	e1a000a0 	mov	r0, r0, lsr #1
        38c9e4:	e08000a0 	add	r0, r0, r0, lsr #1
        38c9e8:	e0800220 	add	r0, r0, r0, lsr #4
        38c9ec:	e0800420 	add	r0, r0, r0, lsr #8
        38c9f0:	e0800820 	add	r0, r0, r0, lsr #16
        38c9f4:	e1a001a0 	mov	r0, r0, lsr #3
        38c9f8:	e0802100 	add	r2, r0, r0, lsl #2
        38c9fc:	e0411082 	sub	r1, r1, r2, lsl #1
        38ca00:	e351000a 	cmp	r1, #10	; 0xa
        38ca04:	a2800001 	addge	r0, r0, #1	; 0x1
        38ca08:	a241100a 	subge	r1, r1, #10	; 0xa
        38ca0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: __rt_sdiv
 * Address: 0038ca10
 */
void globals::() {
    /*
        38ca10:	e1b0c000 	movs	ip, r0
        38ca14:	0a00004e 	beq	38cb54 <__rt_sdiv10+0x48>
        38ca18:	42600000 	rsbmi	r0, r0, #0	; 0x0
        38ca1c:	e02cc001 	eor	ip, ip, r1
        38ca20:	e2113102 	ands	r3, r1, #-2147483648	; 0x80000000
        38ca24:	e183c0ac 	orr	ip, r3, ip, lsr #1
        38ca28:	12611000 	rsbne	r1, r1, #0	; 0x0
        38ca2c:	e1a02000 	mov	r2, r0
        38ca30:	e3a03000 	mov	r3, #0	; 0x0
        38ca34:	e1510002 	cmp	r1, r2
        38ca38:	9a000024 	bls	38cad0 <__rt_sdiv+0xc0>
        38ca3c:	e1510082 	cmp	r1, r2, lsl #1
        38ca40:	9a00001f 	bls	38cac4 <__rt_sdiv+0xb4>
        38ca44:	e1510102 	cmp	r1, r2, lsl #2
        38ca48:	9a00001a 	bls	38cab8 <__rt_sdiv+0xa8>
        38ca4c:	e1510182 	cmp	r1, r2, lsl #3
        38ca50:	9a000015 	bls	38caac <__rt_sdiv+0x9c>
        38ca54:	e1510202 	cmp	r1, r2, lsl #4
        38ca58:	9a000010 	bls	38caa0 <__rt_sdiv+0x90>
        38ca5c:	e1510282 	cmp	r1, r2, lsl #5
        38ca60:	9a00000b 	bls	38ca94 <__rt_sdiv+0x84>
        38ca64:	e1510302 	cmp	r1, r2, lsl #6
        38ca68:	9a000006 	bls	38ca88 <__rt_sdiv+0x78>
        38ca6c:	e1510382 	cmp	r1, r2, lsl #7
        38ca70:	81a02402 	movhi	r2, r2, lsl #8
        38ca74:	8affffee 	bhi	38ca34 <__rt_sdiv+0x24>
        38ca78:	e1510382 	cmp	r1, r2, lsl #7
        38ca7c:	e0a33003 	adc	r3, r3, r3
        38ca80:	20411382 	subcs	r1, r1, r2, lsl #7
        38ca84:	e1510302 	cmp	r1, r2, lsl #6
        38ca88:	e0a33003 	adc	r3, r3, r3
        38ca8c:	20411302 	subcs	r1, r1, r2, lsl #6
        38ca90:	e1510282 	cmp	r1, r2, lsl #5
        38ca94:	e0a33003 	adc	r3, r3, r3
        38ca98:	20411282 	subcs	r1, r1, r2, lsl #5
        38ca9c:	e1510202 	cmp	r1, r2, lsl #4
        38caa0:	e0a33003 	adc	r3, r3, r3
        38caa4:	20411202 	subcs	r1, r1, r2, lsl #4
        38caa8:	e1510182 	cmp	r1, r2, lsl #3
        38caac:	e0a33003 	adc	r3, r3, r3
        38cab0:	20411182 	subcs	r1, r1, r2, lsl #3
        38cab4:	e1510102 	cmp	r1, r2, lsl #2
        38cab8:	e0a33003 	adc	r3, r3, r3
        38cabc:	20411102 	subcs	r1, r1, r2, lsl #2
        38cac0:	e1510082 	cmp	r1, r2, lsl #1
        38cac4:	e0a33003 	adc	r3, r3, r3
        38cac8:	20411082 	subcs	r1, r1, r2, lsl #1
        38cacc:	e1510002 	cmp	r1, r2
        38cad0:	e0a33003 	adc	r3, r3, r3
        38cad4:	20411002 	subcs	r1, r1, r2
        38cad8:	e15000a2 	cmp	r0, r2, lsr #1
        38cadc:	91a02422 	movls	r2, r2, lsr #8
        38cae0:	9affffe4 	bls	38ca78 <__rt_sdiv+0x68>
        38cae4:	e1a00003 	mov	r0, r3
        38cae8:	e31c0101 	tst	ip, #1073741824	; 0x40000000
        38caec:	12600000 	rsbne	r0, r0, #0	; 0x0
        38caf0:	e31c0102 	tst	ip, #-2147483648	; 0x80000000
        38caf4:	12611000 	rsbne	r1, r1, #0	; 0x0
        38caf8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: __remainder
 * Address: 0038cafc
 */
void globals::() {
    /*
        38cafc:	e92d4000 	stmdb	sp!, {lr}
        38cb00:	ebffffc2 	bl	38ca10 <__rt_sdiv>
        38cb04:	e1a00001 	mov	r0, r1
        38cb08:	e8fd8000 	ldmia	sp!, {pc}^
    */
}

/**
 * Symbol: __rt_sdiv10
 * Address: 0038cb0c
 */
void globals::() {
    /*
        38cb0c:	e1b03000 	movs	r3, r0
        38cb10:	42600000 	rsbmi	r0, r0, #0	; 0x0
        38cb14:	e1a01000 	mov	r1, r0
        38cb18:	e1a000a0 	mov	r0, r0, lsr #1
        38cb1c:	e08000a0 	add	r0, r0, r0, lsr #1
        38cb20:	e0800220 	add	r0, r0, r0, lsr #4
        38cb24:	e0800420 	add	r0, r0, r0, lsr #8
        38cb28:	e0800820 	add	r0, r0, r0, lsr #16
        38cb2c:	e1a001a0 	mov	r0, r0, lsr #3
        38cb30:	e0802100 	add	r2, r0, r0, lsl #2
        38cb34:	e0411082 	sub	r1, r1, r2, lsl #1
        38cb38:	e351000a 	cmp	r1, #10	; 0xa
        38cb3c:	a2800001 	addge	r0, r0, #1	; 0x1
        38cb40:	a241100a 	subge	r1, r1, #10	; 0xa
        38cb44:	e3530000 	cmp	r3, #0	; 0x0
        38cb48:	42600000 	rsbmi	r0, r0, #0	; 0x0
        38cb4c:	42611000 	rsbmi	r1, r1, #0	; 0x0
        38cb50:	e1a0f00e 	mov	pc, lr
        38cb54:	e59f01d8 	ldr	r0, [pc, #1d8]	; 38cd34 <_memcpy+0x24>
        38cb58:	e5900000 	ldr	r0, [r0]
        38cb5c:	e1a0100e 	mov	r1, lr
        38cb60:	e3a02000 	mov	r2, #0	; 0x0
        38cb64:	ea61598c 	b	1be319c <$Throw>
    */
}

/**
 * Symbol: _random
 * Address: 0038cb68
 */
void globals::_random() {
    /*
        38cb68:	e92d4010 	stmdb	sp!, {r4, lr}
        38cb6c:	e28f3030 	add	r3, pc, #48	; 0x30
        38cb70:	e5933000 	ldr	r3, [r3]
        38cb74:	e5930000 	ldr	r0, [r3]
        38cb78:	e28f4028 	add	r4, pc, #40	; 0x28
        38cb7c:	e5944000 	ldr	r4, [r4]
        38cb80:	e5941000 	ldr	r1, [r4]
        38cb84:	e11100a1 	tst	r1, r1, lsr #1
        38cb88:	e1b02060 	movs	r2, r0, rrx
        38cb8c:	e0a11001 	adc	r1, r1, r1
        38cb90:	e0222600 	eor	r2, r2, r0, lsl #12
        38cb94:	e0220a22 	eor	r0, r2, r2, lsr #20
        38cb98:	e5830000 	str	r0, [r3]
        38cb9c:	e5841000 	str	r1, [r4]
        38cba0:	e8bd8010 	ldmia	sp!, {r4, pc}
        38cba4:	0c105a54 	ldceq	10, cr5, [r0], -#336
        38cba8:	0c105a58 	ldceq	10, cr5, [r0], -#352
    */
}

/**
 * Symbol: _add64
 * Address: 0038cbac
 */
void globals::_add64() {
    /*
        38cbac:	e0900002 	adds	r0, r0, r2
        38cbb0:	e0a11003 	adc	r1, r1, r3
        38cbb4:	e59d2000 	ldr	r2, [sp]
        38cbb8:	e8a20002 	stmia	r2!, {r1}
        38cbbc:	e8820001 	stmia	r2, {r0}
        38cbc0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _sub64
 * Address: 0038cbc4
 */
void globals::_sub64() {
    /*
        38cbc4:	e0500002 	subs	r0, r0, r2
        38cbc8:	e0c11003 	sbc	r1, r1, r3
        38cbcc:	e59d2000 	ldr	r2, [sp]
        38cbd0:	e8a20002 	stmia	r2!, {r1}
        38cbd4:	e8820001 	stmia	r2, {r0}
        38cbd8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _eq64
 * Address: 0038cbdc
 */
void globals::_eq64() {
    /*
        38cbdc:	e1500002 	cmp	r0, r2
        38cbe0:	13a00000 	movne	r0, #0	; 0x0
        38cbe4:	11a0f00e 	movne	pc, lr
        38cbe8:	e1510003 	cmp	r1, r3
        38cbec:	03a00001 	moveq	r0, #1	; 0x1
        38cbf0:	13a00000 	movne	r0, #0	; 0x0
        38cbf4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _lt64
 * Address: 0038cbf8
 */
void globals::_lt64() {
    /*
        38cbf8:	e1510003 	cmp	r1, r3
        38cbfc:	c3a00000 	movgt	r0, #0	; 0x0
        38cc00:	b3a00001 	movlt	r0, #1	; 0x1
        38cc04:	11a0f00e 	movne	pc, lr
        38cc08:	e1500002 	cmp	r0, r2
        38cc0c:	23a00000 	movcs	r0, #0	; 0x0
        38cc10:	33a00001 	movcc	r0, #1	; 0x1
        38cc14:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _le64
 * Address: 0038cc18
 */
void globals::_le64() {
    /*
        38cc18:	e1510003 	cmp	r1, r3
        38cc1c:	c3a00000 	movgt	r0, #0	; 0x0
        38cc20:	b3a00001 	movlt	r0, #1	; 0x1
        38cc24:	11a0f00e 	movne	pc, lr
        38cc28:	e1500002 	cmp	r0, r2
        38cc2c:	83a00000 	movhi	r0, #0	; 0x0
        38cc30:	93a00001 	movls	r0, #1	; 0x1
        38cc34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _gt64
 * Address: 0038cc38
 */
void globals::_gt64() {
    /*
        38cc38:	e1510003 	cmp	r1, r3
        38cc3c:	b3a00000 	movlt	r0, #0	; 0x0
        38cc40:	c3a00001 	movgt	r0, #1	; 0x1
        38cc44:	11a0f00e 	movne	pc, lr
        38cc48:	e1500002 	cmp	r0, r2
        38cc4c:	93a00000 	movls	r0, #0	; 0x0
        38cc50:	83a00001 	movhi	r0, #1	; 0x1
        38cc54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _ge64
 * Address: 0038cc58
 */
void globals::_ge64() {
    /*
        38cc58:	e1510003 	cmp	r1, r3
        38cc5c:	b3a00000 	movlt	r0, #0	; 0x0
        38cc60:	c3a00001 	movgt	r0, #1	; 0x1
        38cc64:	11a0f00e 	movne	pc, lr
        38cc68:	e1500002 	cmp	r0, r2
        38cc6c:	33a00000 	movcc	r0, #0	; 0x0
        38cc70:	23a00001 	movcs	r0, #1	; 0x1
        38cc74:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _rshift64
 * Address: 0038cc78
 */
void globals::_rshift64() {
    /*
        38cc78:	e3520020 	cmp	r2, #32	; 0x20
        38cc7c:	ca00000c 	bgt	38ccb4 <_rshift64+0x3c>
        38cc80:	e202201f 	and	r2, r2, #31	; 0x1f
        38cc84:	e92d0020 	stmdb	sp!, {r5}
        38cc88:	e1a05251 	mov	r5, r1, asr r2
        38cc8c:	e5835004 	str	r5, [r3, #4]
        38cc90:	e1a00230 	mov	r0, r0, lsr r2
        38cc94:	e1a01271 	mov	r1, r1, ror r2
        38cc98:	e3e05000 	mvn	r5, #0	; 0x0
        38cc9c:	e1a05235 	mov	r5, r5, lsr r2
        38cca0:	e1c15005 	bic	r5, r1, r5
        38cca4:	e1855000 	orr	r5, r5, r0
        38cca8:	e5835000 	str	r5, [r3]
        38ccac:	e8bd0020 	ldmia	sp!, {r5}
        38ccb0:	e1a0f00e 	mov	pc, lr
        38ccb4:	e202201f 	and	r2, r2, #31	; 0x1f
        38ccb8:	e1a00151 	mov	r0, r1, asr r1
        38ccbc:	e5830000 	str	r0, [r3]
        38ccc0:	e1a01fc1 	mov	r1, r1, asr #31
        38ccc4:	e5831004 	str	r1, [r3, #4]
        38ccc8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _mul64
 * Address: 0038cccc
 */
void globals::_mul64() {
    /*
        38cccc:	e92d0014 	stmdb	sp!, {r2, r4}
        38ccd0:	e1a04820 	mov	r4, r0, lsr #16
        38ccd4:	e1a03821 	mov	r3, r1, lsr #16
        38ccd8:	e1c00804 	bic	r0, r0, r4, lsl #16
        38ccdc:	e1c11803 	bic	r1, r1, r3, lsl #16
        38cce0:	e0020190 	mul	r2, r0, r1
        38cce4:	e0010194 	mul	r1, r4, r1
        38cce8:	e0000093 	mul	r0, r3, r0
        38ccec:	e0030394 	mul	r3, r4, r3
        38ccf0:	e0910000 	adds	r0, r1, r0
        38ccf4:	22833801 	addcs	r3, r3, #65536	; 0x10000
        38ccf8:	e0922800 	adds	r2, r2, r0, lsl #16
        38ccfc:	e0a33820 	adc	r3, r3, r0, lsr #16
        38cd00:	e8bd0011 	ldmia	sp!, {r0, r4}
        38cd04:	e8a00008 	stmia	r0!, {r3}
        38cd08:	e8800004 	stmia	r0, {r2}
        38cd0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: _memcpy
 * Address: 0038cd10
 */
void globals::_memcpy() {
    /*
        38cd10:	e1a0f00e 	mov	pc, lr
        38cd14:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        38cd18:	e3520000 	cmp	r2, #0	; 0x0
        38cd1c:	08bd000f 	ldmeqia	sp!, {r0, r1, r2, r3}
        38cd20:	01a0f00e 	moveq	pc, lr
        38cd24:	e4d03001 	ldrb	r3, [r0], #1
        38cd28:	e4c13001 	strb	r3, [r1], #1
        38cd2c:	e2522001 	subs	r2, r2, #1	; 0x1
        38cd30:	eafffff9 	b	38cd1c <_memcpy+0xc>
        38cd34:	003712b0 	ldreqh	r1, [r7], -r0
    */
}

