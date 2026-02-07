#include "include/TNewScriptEndpointClient.h"

/**
 * Symbol: TNewScriptEndpointClient::GetScriptDataInXlator(void)
 * Address: 00133ccc
 */
TNewScriptEndpointClient::GetScriptDataInXlator(void) {
    /*
        133ccc:	e1a0c00d 	mov	ip, sp
        133cd0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        133cd4:	e24cb004 	sub	fp, ip, #4	; 0x4
        133cd8:	e1a04000 	mov	r4, r0
        133cdc:	e59000c8 	ldr	r0, [r0, #200]	; fField200
        133ce0:	e3300000 	teq	r0, #0	; 0x0
        133ce4:	1a00000b 	bne	133d18 <TNewScriptEndpointClient::GetScriptDataInXlator(void)+0x4c>
        133ce8:	e28f1f0c 	add	r1, pc, #48	; 0x30
        133cec:	e28f0f0f 	add	r0, pc, #60	; 0x3c
        133cf0:	eb6a8fa5 	bl	1bd7b8c <$NewByName__FPCcT1>
        133cf4:	e3300000 	teq	r0, #0	; 0x0
        133cf8:	158400c8 	strne	r0, [r4, #200]	; fField200
        133cfc:	1a000005 	bne	133d18 <TNewScriptEndpointClient::GetScriptDataInXlator(void)+0x4c>
        133d00:	eb6ab906 	bl	1be2120 <$MemError>
        133d04:	e1a01000 	mov	r1, r0
        133d08:	e59f0030 	ldr	r0, [pc, #30]	; 133d40 <TNewScriptEndpointClient::GetScriptDataInXlator(void)+0x74>
        133d0c:	e5900000 	ldr	r0, [r0]
        133d10:	e3a02000 	mov	r2, #0	; 0x0
        133d14:	eb6abd20 	bl	1be319c <$Throw>
        133d18:	e5b400c8 	ldr	r0, [r4, #200]!	; fField200
        133d1c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        133d20:	50536372 	subpls	r6, r3, r2, ror r3
        133d24:	69707444 	ldmvsdb	r0!, {r2, r6, sl, ip, sp, lr}^
        133d28:	61746149 	cmnvs	r4, r9, asr #2
        133d2c:	6e000000 	cdpvs	0, 0, cr0, cr0, cr0, {0}
        133d30:	50467261 	subpl	r7, r6, r1, ror #4
        133d34:	6d65536f 	stcvsl	3, cr5, [r5, -#444]!
        133d38:	75726365 	ldrvcb	r6, [r2, -#869]!
        133d3c:	00000000 	andeq	r0, r0, r0
        133d40:	00371328 	eoreqs	r1, r7, r8, lsr #6
    */
}

/**
 * Symbol: TNewScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)
 * Address: 00133f00
 */
TNewScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *) {
    /*
        133f00:	e1a0c00d 	mov	ip, sp
        133f04:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        133f08:	e24cb004 	sub	fp, ip, #4	; 0x4
        133f0c:	e1a04000 	mov	r4, r0
        133f10:	e1a06001 	mov	r6, r1
        133f14:	e1a05002 	mov	r5, r2
        133f18:	e3a07000 	mov	r7, #0	; 0x0
        133f1c:	e59000bc 	ldr	r0, [r0, #188]	; fField188
        133f20:	e3300000 	teq	r0, #0	; 0x0
        133f24:	1a000009 	bne	133f50 <TNewScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)+0x50>
        133f28:	e28f1f24 	add	r1, pc, #144	; 0x90
        133f2c:	e28f0f27 	add	r0, pc, #156	; 0x9c
        133f30:	eb6a8f15 	bl	1bd7b8c <$NewByName__FPCcT1>
        133f34:	e3300000 	teq	r0, #0	; 0x0
        133f38:	158400bc 	strne	r0, [r4, #188]	; fField188
        133f3c:	1a000001 	bne	133f48 <TNewScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)+0x48>
        133f40:	eb6ab876 	bl	1be2120 <$MemError>
        133f44:	e1a07000 	mov	r7, r0
        133f48:	e3370000 	teq	r7, #0	; 0x0
        133f4c:	1a00002e 	bne	13400c <TNewScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)+0x10c>
        133f50:	e3a00000 	mov	r0, #0	; 0x0
        133f54:	e52d006c 	str	r0, [sp, -#108]!	; fField108
        133f58:	e28d0008 	add	r0, sp, #8	; 0x8
        133f5c:	eb69fa84 	bl	1bb2974 <$setjmp>
        133f60:	e3300000 	teq	r0, #0	; 0x0
        133f64:	1a00001c 	bne	133fdc <TNewScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)+0xdc>
        133f68:	e1a0000d 	mov	r0, sp
        133f6c:	eb6ab042 	bl	1be007c <$AddExceptionHandler>
        133f70:	e24dd00c 	sub	sp, sp, #12	; 0xc
        133f74:	e3a00002 	mov	r0, #2	; 0x2
        133f78:	eb6a3873 	bl	1bc214c <$AllocateRefHandle(long)>
        133f7c:	e58d0004 	str	r0, [sp, #4]	; fField4
        133f80:	e58d5000 	str	r5, [sp]
        133f84:	e5960000 	ldr	r0, [r6]
        133f88:	e5900000 	ldr	r0, [r0]
        133f8c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        133f90:	e5810000 	str	r0, [r1]
        133f94:	e1a00004 	mov	r0, r4
        133f98:	eb65fa76 	bl	1ab2978 <TNewScriptEndpointClient::$GetScriptDataOutXlator(void)>
        133f9c:	e58d0008 	str	r0, [sp, #8]
        133fa0:	e1a0100d 	mov	r1, sp
        133fa4:	e3a02000 	mov	r2, #0	; 0x0
        133fa8:	e5b400bc 	ldr	r0, [r4, #188]!	; fField188
        133fac:	eb69d116 	bl	1ba840c <PFrameSink::$Translate(void *, PipeCallBack *)>
        133fb0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        133fb4:	eb6a3c80 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        133fb8:	e28dd00c 	add	sp, sp, #12	; 0xc
        133fbc:	ea00000f 	b	134000 <TNewScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)+0x100>
        133fc0:	504f7074 	subpl	r7, pc, r4, ror r0
        133fc4:	696f6e44 	stmvsdb	pc!, {r2, r6, r9, sl, fp, sp, lr}^
        133fc8:	6174614f 	cmnvs	r4, pc, asr #2
        133fcc:	75740000 	ldrvcb	r0, [r4]!
        133fd0:	50467261 	subpl	r7, r6, r1, ror #4
        133fd4:	6d655369 	stcvsl	3, cr5, [r5, -#420]!
        133fd8:	6e6b0000 	cdpvs	0, 6, cr0, cr11, cr0, {0}
        133fdc:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        133fe0:	e59f102c 	ldr	r1, [pc, #2c]	; 134014 <TNewScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)+0x114>
        133fe4:	e5911000 	ldr	r1, [r1]
        133fe8:	eb6abc69 	bl	1be3194 <$Subexception>
        133fec:	e3300000 	teq	r0, #0	; 0x0
        133ff0:	159d7064 	ldrne	r7, [sp, #100]	; fField100
        133ff4:	1a000001 	bne	134000 <TNewScriptEndpointClient::ConvertToOptionArray(RefVar const &, TOptionArray *)+0x100>
        133ff8:	e1a0000d 	mov	r0, sp
        133ffc:	eb6ab854 	bl	1be2154 <$NextHandler>
        134000:	e1a0000d 	mov	r0, sp
        134004:	eb6ab42b 	bl	1be10b8 <$ExitHandler>
        134008:	e28dd06c 	add	sp, sp, #108	; 0x6c
        13400c:	e1a00007 	mov	r0, r7
        134010:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        134014:	00371328 	eoreqs	r1, r7, r8, lsr #6
    */
}

/**
 * Symbol: TNewScriptEndpointClient::ConvertFromOptionArray(RefVar const &, TOptionArray *)
 * Address: 00134018
 */
TNewScriptEndpointClient::ConvertFromOptionArray(RefVar const &, TOptionArray *) {
    /*
        134018:	e1a0c00d 	mov	ip, sp
        13401c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        134020:	e24cb004 	sub	fp, ip, #4	; 0x4
        134024:	e1a04000 	mov	r4, r0
        134028:	e1a06001 	mov	r6, r1
        13402c:	e1a05002 	mov	r5, r2
        134030:	e3a07000 	mov	r7, #0	; 0x0
        134034:	e59000c0 	ldr	r0, [r0, #192]	; fField192
        134038:	e3300000 	teq	r0, #0	; 0x0
        13403c:	1a000009 	bne	134068 <TNewScriptEndpointClient::ConvertFromOptionArray(RefVar const &, TOptionArray *)+0x50>
        134040:	e28f1f26 	add	r1, pc, #152	; 0x98
        134044:	e28f0f29 	add	r0, pc, #164	; 0xa4
        134048:	eb6a8ecf 	bl	1bd7b8c <$NewByName__FPCcT1>
        13404c:	e3300000 	teq	r0, #0	; 0x0
        134050:	158400c0 	strne	r0, [r4, #192]	; fField192
        134054:	1a000001 	bne	134060 <TNewScriptEndpointClient::ConvertFromOptionArray(RefVar const &, TOptionArray *)+0x48>
        134058:	eb6ab830 	bl	1be2120 <$MemError>
        13405c:	e1a07000 	mov	r7, r0
        134060:	e3370000 	teq	r7, #0	; 0x0
        134064:	1a000031 	bne	134130 <TNewScriptEndpointClient::ConvertFromOptionArray(RefVar const &, TOptionArray *)+0x118>
        134068:	e3a00000 	mov	r0, #0	; 0x0
        13406c:	e52d006c 	str	r0, [sp, -#108]!	; fField108
        134070:	e28d0008 	add	r0, sp, #8	; 0x8
        134074:	eb69fa3e 	bl	1bb2974 <$setjmp>
        134078:	e3300000 	teq	r0, #0	; 0x0
        13407c:	1a00001f 	bne	134100 <TNewScriptEndpointClient::ConvertFromOptionArray(RefVar const &, TOptionArray *)+0xe8>
        134080:	e1a0000d 	mov	r0, sp
        134084:	eb6aaffc 	bl	1be007c <$AddExceptionHandler>
        134088:	e24dd00c 	sub	sp, sp, #12	; 0xc
        13408c:	e3a00002 	mov	r0, #2	; 0x2
        134090:	eb6a382d 	bl	1bc214c <$AllocateRefHandle(long)>
        134094:	e58d0004 	str	r0, [sp, #4]	; fField4
        134098:	e58d5000 	str	r5, [sp]
        13409c:	e5960000 	ldr	r0, [r6]
        1340a0:	e5900000 	ldr	r0, [r0]
        1340a4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1340a8:	e5810000 	str	r0, [r1]
        1340ac:	e1a00004 	mov	r0, r4
        1340b0:	eb65fa2f 	bl	1ab2974 <TNewScriptEndpointClient::$GetScriptDataInXlator(void)>
        1340b4:	e58d0008 	str	r0, [sp, #8]
        1340b8:	e1a0100d 	mov	r1, sp
        1340bc:	e3a02000 	mov	r2, #0	; 0x0
        1340c0:	e5b400c0 	ldr	r0, [r4, #192]!	; fField192
        1340c4:	eb69d0d3 	bl	1ba8418 <PFrameSource::$Translate(void *, PipeCallBack *)>
        1340c8:	eb6a381f 	bl	1bc214c <$AllocateRefHandle(long)>
        1340cc:	eb6a3c3a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1340d0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1340d4:	eb6a3c38 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1340d8:	e28dd00c 	add	sp, sp, #12	; 0xc
        1340dc:	ea000010 	b	134124 <TNewScriptEndpointClient::ConvertFromOptionArray(RefVar const &, TOptionArray *)+0x10c>
        1340e0:	504f7074 	subpl	r7, pc, r4, ror r0
        1340e4:	696f6e44 	stmvsdb	pc!, {r2, r6, r9, sl, fp, sp, lr}^
        1340e8:	61746149 	cmnvs	r4, r9, asr #2
        1340ec:	6e000000 	cdpvs	0, 0, cr0, cr0, cr0, {0}
        1340f0:	50467261 	subpl	r7, r6, r1, ror #4
        1340f4:	6d65536f 	stcvsl	3, cr5, [r5, -#444]!
        1340f8:	75726365 	ldrvcb	r6, [r2, -#869]!
        1340fc:	00000000 	andeq	r0, r0, r0
        134100:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        134104:	e59f102c 	ldr	r1, [pc, #2c]	; 134138 <TNewScriptEndpointClient::ConvertFromOptionArray(RefVar const &, TOptionArray *)+0x120>
        134108:	e5911000 	ldr	r1, [r1]
        13410c:	eb6abc20 	bl	1be3194 <$Subexception>
        134110:	e3300000 	teq	r0, #0	; 0x0
        134114:	159d7064 	ldrne	r7, [sp, #100]	; fField100
        134118:	1a000001 	bne	134124 <TNewScriptEndpointClient::ConvertFromOptionArray(RefVar const &, TOptionArray *)+0x10c>
        13411c:	e1a0000d 	mov	r0, sp
        134120:	eb6ab80b 	bl	1be2154 <$NextHandler>
        134124:	e1a0000d 	mov	r0, sp
        134128:	eb6ab3e2 	bl	1be10b8 <$ExitHandler>
        13412c:	e28dd06c 	add	sp, sp, #108	; 0x6c
        134130:	e1a00007 	mov	r0, r7
        134134:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        134138:	00371328 	eoreqs	r1, r7, r8, lsr #6
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoState(void)
 * Address: 0013413c
 */
TNewScriptEndpointClient::DoState(void) {
    /*
        13413c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        134140:	e5900010 	ldr	r0, [r0, #16]	; fField16
        134144:	e1a00100 	mov	r0, r0, lsl #2
        134148:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoBind(RefVar const &, RefVar const &)
 * Address: 0013414c
 */
TNewScriptEndpointClient::DoBind(RefVar const &, RefVar const &) {
    /*
        13414c:	e1a0c00d 	mov	ip, sp
        134150:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        134154:	e24cb004 	sub	fp, ip, #4	; 0x4
        134158:	e1a05000 	mov	r5, r0
        13415c:	e1a04001 	mov	r4, r1
        134160:	e1a06002 	mov	r6, r2
        134164:	e24dd008 	sub	sp, sp, #8	; 0x8
        134168:	e3a00000 	mov	r0, #0	; 0x0
        13416c:	e58d0004 	str	r0, [sp, #4]	; fField4
        134170:	e58d0000 	str	r0, [sp]
        134174:	e1a0100d 	mov	r1, sp
        134178:	e1a00002 	mov	r0, r2
        13417c:	eb65f9f4 	bl	1ab2954 <$GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl>
        134180:	e1a08000 	mov	r8, r0
        134184:	e5940000 	ldr	r0, [r4]
        134188:	e5900000 	ldr	r0, [r0]
        13418c:	e3300002 	teq	r0, #2	; 0x2
        134190:	0a000005 	beq	1341ac <TNewScriptEndpointClient::DoBind(RefVar const &, RefVar const &)+0x60>
        134194:	e28d2004 	add	r2, sp, #4	; 0x4
        134198:	e1a01004 	mov	r1, r4
        13419c:	e1a00005 	mov	r0, r5
        1341a0:	eb660e7c 	bl	1ab7b98 <TNewScriptEndpointClient::$PrepOptions(RefVar const &, TOptionArray **)>
        1341a4:	e1b07000 	movs	r7, r0
        1341a8:	1a000016 	bne	134208 <TNewScriptEndpointClient::DoBind(RefVar const &, RefVar const &)+0xbc>
        1341ac:	e3380000 	teq	r8, #0	; 0x0
        1341b0:	1a000003 	bne	1341c4 <TNewScriptEndpointClient::DoBind(RefVar const &, RefVar const &)+0x78>
        1341b4:	e1a02006 	mov	r2, r6
        1341b8:	e1a01004 	mov	r1, r4
        1341bc:	e1a00005 	mov	r0, r5
        1341c0:	eb660e7b 	bl	1ab7bb4 <TNewScriptEndpointClient::$QueueOptions(RefVar const &, RefVar const &)>
        1341c4:	e20830ff 	and	r3, r8, #255	; 0xff
        1341c8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1341cc:	e59d2000 	ldr	r2, [sp]
        1341d0:	e5950014 	ldr	r0, [r5, #20]	; fField20
        1341d4:	eb6350a4 	bl	1a0846c <TEndpoint::$nBind(TOptionArray *, unsigned long, unsigned char)>
        1341d8:	e1b07000 	movs	r7, r0
        1341dc:	1a000009 	bne	134208 <TNewScriptEndpointClient::DoBind(RefVar const &, RefVar const &)+0xbc>
        1341e0:	e3380000 	teq	r8, #0	; 0x0
        1341e4:	15940000 	ldrne	r0, [r4]
        1341e8:	15900000 	ldrne	r0, [r0]
        1341ec:	13300002 	teqne	r0, #2	; 0x2
        1341f0:	0a000004 	beq	134208 <TNewScriptEndpointClient::DoBind(RefVar const &, RefVar const &)+0xbc>
        1341f4:	e1a01004 	mov	r1, r4
        1341f8:	e1a00005 	mov	r0, r5
        1341fc:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        134200:	eb65dcf3 	bl	1aab5d4 <TNewScriptEndpointClient::$ConvertFromOptionArray(RefVar const &, TOptionArray *)>
        134204:	e1a07000 	mov	r7, r0
        134208:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        13420c:	e3300000 	teq	r0, #0	; 0x0
        134210:	0a000004 	beq	134228 <TNewScriptEndpointClient::DoBind(RefVar const &, RefVar const &)+0xdc>
        134214:	e3370000 	teq	r7, #0	; 0x0
        134218:	03380000 	teqeq	r8, #0	; 0x0
        13421c:	0a000006 	beq	13423c <TNewScriptEndpointClient::DoBind(RefVar const &, RefVar const &)+0xf0>
        134220:	e3a01001 	mov	r1, #1	; 0x1
        134224:	eb6a0a40 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        134228:	e3370000 	teq	r7, #0	; 0x0
        13422c:	0a000002 	beq	13423c <TNewScriptEndpointClient::DoBind(RefVar const &, RefVar const &)+0xf0>
        134230:	e3380000 	teq	r8, #0	; 0x0
        134234:	01a00005 	moveq	r0, r5
        134238:	0b661edb 	bleq	1abbdac <TNewScriptEndpointClient::$UnwindOptions(void)>
        13423c:	e1a00007 	mov	r0, r7
        134240:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)
 * Address: 00134244
 */
TNewScriptEndpointClient::DoConnect(RefVar const &, RefVar const &) {
    /*
        134244:	e1a0c00d 	mov	ip, sp
        134248:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        13424c:	e24cb004 	sub	fp, ip, #4	; 0x4
        134250:	e1a05000 	mov	r5, r0
        134254:	e1a04001 	mov	r4, r1
        134258:	e1a06002 	mov	r6, r2
        13425c:	e24dd008 	sub	sp, sp, #8	; 0x8
        134260:	e3a00000 	mov	r0, #0	; 0x0
        134264:	e58d0004 	str	r0, [sp, #4]	; fField4
        134268:	e58d0000 	str	r0, [sp]
        13426c:	e1a0100d 	mov	r1, sp
        134270:	e1a00002 	mov	r0, r2
        134274:	eb65f9b6 	bl	1ab2954 <$GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl>
        134278:	e1a08000 	mov	r8, r0
        13427c:	e5940000 	ldr	r0, [r4]
        134280:	e5900000 	ldr	r0, [r0]
        134284:	e3300002 	teq	r0, #2	; 0x2
        134288:	0a000005 	beq	1342a4 <TNewScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x60>
        13428c:	e28d2004 	add	r2, sp, #4	; 0x4
        134290:	e1a01004 	mov	r1, r4
        134294:	e1a00005 	mov	r0, r5
        134298:	eb660e3e 	bl	1ab7b98 <TNewScriptEndpointClient::$PrepOptions(RefVar const &, TOptionArray **)>
        13429c:	e1b07000 	movs	r7, r0
        1342a0:	1a00001a 	bne	134310 <TNewScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0xcc>
        1342a4:	e3380000 	teq	r8, #0	; 0x0
        1342a8:	1a000003 	bne	1342bc <TNewScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x78>
        1342ac:	e1a02006 	mov	r2, r6
        1342b0:	e1a01004 	mov	r1, r4
        1342b4:	e1a00005 	mov	r0, r5
        1342b8:	eb660e3d 	bl	1ab7bb4 <TNewScriptEndpointClient::$QueueOptions(RefVar const &, RefVar const &)>
        1342bc:	e20830ff 	and	r3, r8, #255	; 0xff
        1342c0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1342c4:	e59d2000 	ldr	r2, [sp]
        1342c8:	e92d000c 	stmdb	sp!, {r2, r3}
        1342cc:	e3a02000 	mov	r2, #0	; 0x0
        1342d0:	e1a03002 	mov	r3, r2
        1342d4:	e5950014 	ldr	r0, [r5, #20]	; fField20
        1342d8:	eb635064 	bl	1a08470 <TEndpoint::$nConnect(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
        1342dc:	e28dd008 	add	sp, sp, #8	; 0x8
        1342e0:	e1b07000 	movs	r7, r0
        1342e4:	1a000009 	bne	134310 <TNewScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0xcc>
        1342e8:	e3380000 	teq	r8, #0	; 0x0
        1342ec:	15940000 	ldrne	r0, [r4]
        1342f0:	15900000 	ldrne	r0, [r0]
        1342f4:	13300002 	teqne	r0, #2	; 0x2
        1342f8:	0a000004 	beq	134310 <TNewScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0xcc>
        1342fc:	e1a01004 	mov	r1, r4
        134300:	e1a00005 	mov	r0, r5
        134304:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        134308:	eb65dcb1 	bl	1aab5d4 <TNewScriptEndpointClient::$ConvertFromOptionArray(RefVar const &, TOptionArray *)>
        13430c:	e1a07000 	mov	r7, r0
        134310:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        134314:	e3300000 	teq	r0, #0	; 0x0
        134318:	0a000004 	beq	134330 <TNewScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0xec>
        13431c:	e3370000 	teq	r7, #0	; 0x0
        134320:	03380000 	teqeq	r8, #0	; 0x0
        134324:	0a000006 	beq	134344 <TNewScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x100>
        134328:	e3a01001 	mov	r1, #1	; 0x1
        13432c:	eb6a09fe 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        134330:	e3370000 	teq	r7, #0	; 0x0
        134334:	0a000002 	beq	134344 <TNewScriptEndpointClient::DoConnect(RefVar const &, RefVar const &)+0x100>
        134338:	e3380000 	teq	r8, #0	; 0x0
        13433c:	01a00005 	moveq	r0, r5
        134340:	0b661e99 	bleq	1abbdac <TNewScriptEndpointClient::$UnwindOptions(void)>
        134344:	e1a00007 	mov	r0, r7
        134348:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoListen(RefVar const &, RefVar const &)
 * Address: 0013434c
 */
TNewScriptEndpointClient::DoListen(RefVar const &, RefVar const &) {
    /*
        13434c:	e1a0c00d 	mov	ip, sp
        134350:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        134354:	e24cb004 	sub	fp, ip, #4	; 0x4
        134358:	e1a05000 	mov	r5, r0
        13435c:	e1a04001 	mov	r4, r1
        134360:	e1a06002 	mov	r6, r2
        134364:	e24dd008 	sub	sp, sp, #8	; 0x8
        134368:	e3a00000 	mov	r0, #0	; 0x0
        13436c:	e58d0004 	str	r0, [sp, #4]	; fField4
        134370:	e58d0000 	str	r0, [sp]
        134374:	e1a0100d 	mov	r1, sp
        134378:	e1a00002 	mov	r0, r2
        13437c:	eb65f974 	bl	1ab2954 <$GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl>
        134380:	e1a08000 	mov	r8, r0
        134384:	e5940000 	ldr	r0, [r4]
        134388:	e5900000 	ldr	r0, [r0]
        13438c:	e3300002 	teq	r0, #2	; 0x2
        134390:	0a000005 	beq	1343ac <TNewScriptEndpointClient::DoListen(RefVar const &, RefVar const &)+0x60>
        134394:	e28d2004 	add	r2, sp, #4	; 0x4
        134398:	e1a01004 	mov	r1, r4
        13439c:	e1a00005 	mov	r0, r5
        1343a0:	eb660dfc 	bl	1ab7b98 <TNewScriptEndpointClient::$PrepOptions(RefVar const &, TOptionArray **)>
        1343a4:	e1b07000 	movs	r7, r0
        1343a8:	1a00001a 	bne	134418 <TNewScriptEndpointClient::DoListen(RefVar const &, RefVar const &)+0xcc>
        1343ac:	e3380000 	teq	r8, #0	; 0x0
        1343b0:	1a000003 	bne	1343c4 <TNewScriptEndpointClient::DoListen(RefVar const &, RefVar const &)+0x78>
        1343b4:	e1a02006 	mov	r2, r6
        1343b8:	e1a01004 	mov	r1, r4
        1343bc:	e1a00005 	mov	r0, r5
        1343c0:	eb660dfb 	bl	1ab7bb4 <TNewScriptEndpointClient::$QueueOptions(RefVar const &, RefVar const &)>
        1343c4:	e20830ff 	and	r3, r8, #255	; 0xff
        1343c8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1343cc:	e59d2000 	ldr	r2, [sp]
        1343d0:	e92d000c 	stmdb	sp!, {r2, r3}
        1343d4:	e3a02000 	mov	r2, #0	; 0x0
        1343d8:	e1a03002 	mov	r3, r2
        1343dc:	e5950014 	ldr	r0, [r5, #20]	; fField20
        1343e0:	eb635024 	bl	1a08478 <TEndpoint::$nListen(TOptionArray *, CBufferSegment *, long *, unsigned long, unsigned char)>
        1343e4:	e28dd008 	add	sp, sp, #8	; 0x8
        1343e8:	e1b07000 	movs	r7, r0
        1343ec:	1a000009 	bne	134418 <TNewScriptEndpointClient::DoListen(RefVar const &, RefVar const &)+0xcc>
        1343f0:	e3380000 	teq	r8, #0	; 0x0
        1343f4:	15940000 	ldrne	r0, [r4]
        1343f8:	15900000 	ldrne	r0, [r0]
        1343fc:	13300002 	teqne	r0, #2	; 0x2
        134400:	0a000004 	beq	134418 <TNewScriptEndpointClient::DoListen(RefVar const &, RefVar const &)+0xcc>
        134404:	e1a01004 	mov	r1, r4
        134408:	e1a00005 	mov	r0, r5
        13440c:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        134410:	eb65dc6f 	bl	1aab5d4 <TNewScriptEndpointClient::$ConvertFromOptionArray(RefVar const &, TOptionArray *)>
        134414:	e1a07000 	mov	r7, r0
        134418:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        13441c:	e3300000 	teq	r0, #0	; 0x0
        134420:	0a000004 	beq	134438 <TNewScriptEndpointClient::DoListen(RefVar const &, RefVar const &)+0xec>
        134424:	e3370000 	teq	r7, #0	; 0x0
        134428:	03380000 	teqeq	r8, #0	; 0x0
        13442c:	0a000006 	beq	13444c <TNewScriptEndpointClient::DoListen(RefVar const &, RefVar const &)+0x100>
        134430:	e3a01001 	mov	r1, #1	; 0x1
        134434:	eb6a09bc 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        134438:	e3370000 	teq	r7, #0	; 0x0
        13443c:	0a000002 	beq	13444c <TNewScriptEndpointClient::DoListen(RefVar const &, RefVar const &)+0x100>
        134440:	e3380000 	teq	r8, #0	; 0x0
        134444:	01a00005 	moveq	r0, r5
        134448:	0b661e57 	bleq	1abbdac <TNewScriptEndpointClient::$UnwindOptions(void)>
        13444c:	e1a00007 	mov	r0, r7
        134450:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoDisconnect(RefVar const &, RefVar const &)
 * Address: 00134454
 */
TNewScriptEndpointClient::DoDisconnect(RefVar const &, RefVar const &) {
    /*
        134454:	e1a0c00d 	mov	ip, sp
        134458:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        13445c:	e24cb004 	sub	fp, ip, #4	; 0x4
        134460:	e1a04000 	mov	r4, r0
        134464:	e1a06001 	mov	r6, r1
        134468:	e1a05002 	mov	r5, r2
        13446c:	e3a00000 	mov	r0, #0	; 0x0
        134470:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        134474:	e1a0100d 	mov	r1, sp
        134478:	e1a00002 	mov	r0, r2
        13447c:	eb65f934 	bl	1ab2954 <$GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl>
        134480:	e1b07000 	movs	r7, r0
        134484:	01a01005 	moveq	r1, r5
        134488:	01a00004 	moveq	r0, r4
        13448c:	0b660dc2 	bleq	1ab7b9c <TNewScriptEndpointClient::$QueueCallback(RefVar const &)>
        134490:	e5960000 	ldr	r0, [r6]
        134494:	e5900000 	ldr	r0, [r0]
        134498:	e3300002 	teq	r0, #2	; 0x2
        13449c:	0a000009 	beq	1344c8 <TNewScriptEndpointClient::DoDisconnect(RefVar const &, RefVar const &)+0x74>
        1344a0:	e20730ff 	and	r3, r7, #255	; 0xff
        1344a4:	e59d2000 	ldr	r2, [sp]
        1344a8:	e92d000c 	stmdb	sp!, {r2, r3}
        1344ac:	e3a01000 	mov	r1, #0	; 0x0
        1344b0:	e1a03001 	mov	r3, r1
        1344b4:	e1a02001 	mov	r2, r1
        1344b8:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1344bc:	eb634fec 	bl	1a08474 <TEndpoint::$nDisconnect(CBufferSegment *, long, long, unsigned long, unsigned char)>
        1344c0:	e28dd008 	add	sp, sp, #8	; 0x8
        1344c4:	ea000003 	b	1344d8 <TNewScriptEndpointClient::DoDisconnect(RefVar const &, RefVar const &)+0x84>
        1344c8:	e20720ff 	and	r2, r7, #255	; 0xff
        1344cc:	e59d1000 	ldr	r1, [sp]
        1344d0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1344d4:	eb6353ea 	bl	1a09484 <TEndpoint::$nRelease(unsigned long, unsigned char)>
        1344d8:	e1a05000 	mov	r5, r0
        1344dc:	e3500000 	cmp	r0, #0	; 0x0
        1344e0:	0a000002 	beq	1344f0 <TNewScriptEndpointClient::DoDisconnect(RefVar const &, RefVar const &)+0x9c>
        1344e4:	e3370000 	teq	r7, #0	; 0x0
        1344e8:	01a00004 	moveq	r0, r4
        1344ec:	0b661e2d 	bleq	1abbda8 <TNewScriptEndpointClient::$UnwindCallback(void)>
        1344f0:	e1a00005 	mov	r0, r5
        1344f4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoUnBind(RefVar const &)
 * Address: 001344f8
 */
TNewScriptEndpointClient::DoUnBind(RefVar const &) {
    /*
        1344f8:	e1a0c00d 	mov	ip, sp
        1344fc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        134500:	e24cb004 	sub	fp, ip, #4	; 0x4
        134504:	e1a04000 	mov	r4, r0
        134508:	e1a05001 	mov	r5, r1
        13450c:	e3a00000 	mov	r0, #0	; 0x0
        134510:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        134514:	e1a0100d 	mov	r1, sp
        134518:	e1a00005 	mov	r0, r5
        13451c:	eb65f90c 	bl	1ab2954 <$GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl>
        134520:	e1b06000 	movs	r6, r0
        134524:	01a01005 	moveq	r1, r5
        134528:	01a00004 	moveq	r0, r4
        13452c:	0b660d9a 	bleq	1ab7b9c <TNewScriptEndpointClient::$QueueCallback(RefVar const &)>
        134530:	e20620ff 	and	r2, r6, #255	; 0xff
        134534:	e59d1000 	ldr	r1, [sp]
        134538:	e5940014 	ldr	r0, [r4, #20]	; fField20
        13453c:	eb6353d3 	bl	1a09490 <TEndpoint::$nUnBind(unsigned long, unsigned char)>
        134540:	e1a05000 	mov	r5, r0
        134544:	e3500000 	cmp	r0, #0	; 0x0
        134548:	0a000002 	beq	134558 <TNewScriptEndpointClient::DoUnBind(RefVar const &)+0x60>
        13454c:	e3360000 	teq	r6, #0	; 0x0
        134550:	01a00004 	moveq	r0, r4
        134554:	0b661e13 	bleq	1abbda8 <TNewScriptEndpointClient::$UnwindCallback(void)>
        134558:	e1a00005 	mov	r0, r5
        13455c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoAccept(RefVar const &, RefVar const &)
 * Address: 00134560
 */
TNewScriptEndpointClient::DoAccept(RefVar const &, RefVar const &) {
    /*
        134560:	e1a0c00d 	mov	ip, sp
        134564:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        134568:	e24cb004 	sub	fp, ip, #4	; 0x4
        13456c:	e1a05000 	mov	r5, r0
        134570:	e1a04001 	mov	r4, r1
        134574:	e1a06002 	mov	r6, r2
        134578:	e24dd008 	sub	sp, sp, #8	; 0x8
        13457c:	e3a00000 	mov	r0, #0	; 0x0
        134580:	e58d0004 	str	r0, [sp, #4]	; fField4
        134584:	e58d0000 	str	r0, [sp]
        134588:	e1a0100d 	mov	r1, sp
        13458c:	e1a00002 	mov	r0, r2
        134590:	eb65f8ef 	bl	1ab2954 <$GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl>
        134594:	e1a08000 	mov	r8, r0
        134598:	e5940000 	ldr	r0, [r4]
        13459c:	e5900000 	ldr	r0, [r0]
        1345a0:	e3300002 	teq	r0, #2	; 0x2
        1345a4:	0a000005 	beq	1345c0 <TNewScriptEndpointClient::DoAccept(RefVar const &, RefVar const &)+0x60>
        1345a8:	e28d2004 	add	r2, sp, #4	; 0x4
        1345ac:	e1a01004 	mov	r1, r4
        1345b0:	e1a00005 	mov	r0, r5
        1345b4:	eb660d77 	bl	1ab7b98 <TNewScriptEndpointClient::$PrepOptions(RefVar const &, TOptionArray **)>
        1345b8:	e1b07000 	movs	r7, r0
        1345bc:	1a00001c 	bne	134634 <TNewScriptEndpointClient::DoAccept(RefVar const &, RefVar const &)+0xd4>
        1345c0:	e3380000 	teq	r8, #0	; 0x0
        1345c4:	1a000003 	bne	1345d8 <TNewScriptEndpointClient::DoAccept(RefVar const &, RefVar const &)+0x78>
        1345c8:	e1a02006 	mov	r2, r6
        1345cc:	e1a01004 	mov	r1, r4
        1345d0:	e1a00005 	mov	r0, r5
        1345d4:	eb660d76 	bl	1ab7bb4 <TNewScriptEndpointClient::$QueueOptions(RefVar const &, RefVar const &)>
        1345d8:	e20830ff 	and	r3, r8, #255	; 0xff
        1345dc:	e3a0e000 	mov	lr, #0	; 0x0
        1345e0:	e1a0100e 	mov	r1, lr
        1345e4:	e89d1004 	ldmia	sp, {r2, ip}
        1345e8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1345ec:	e5951014 	ldr	r1, [r5, #20]	; fField20
        1345f0:	e1a00001 	mov	r0, r1
        1345f4:	e1a0300e 	mov	r3, lr
        1345f8:	e1a0200c 	mov	r2, ip
        1345fc:	eb634f99 	bl	1a08468 <TEndpoint::$nAccept(TEndpoint *, TOptionArray *, CBufferSegment *, long, unsigned long, unsigned char)>
        134600:	e28dd00c 	add	sp, sp, #12	; 0xc
        134604:	e1b07000 	movs	r7, r0
        134608:	1a000009 	bne	134634 <TNewScriptEndpointClient::DoAccept(RefVar const &, RefVar const &)+0xd4>
        13460c:	e3380000 	teq	r8, #0	; 0x0
        134610:	15940000 	ldrne	r0, [r4]
        134614:	15900000 	ldrne	r0, [r0]
        134618:	13300002 	teqne	r0, #2	; 0x2
        13461c:	0a000004 	beq	134634 <TNewScriptEndpointClient::DoAccept(RefVar const &, RefVar const &)+0xd4>
        134620:	e1a01004 	mov	r1, r4
        134624:	e1a00005 	mov	r0, r5
        134628:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        13462c:	eb65dbe8 	bl	1aab5d4 <TNewScriptEndpointClient::$ConvertFromOptionArray(RefVar const &, TOptionArray *)>
        134630:	e1a07000 	mov	r7, r0
        134634:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        134638:	e3300000 	teq	r0, #0	; 0x0
        13463c:	0a000004 	beq	134654 <TNewScriptEndpointClient::DoAccept(RefVar const &, RefVar const &)+0xf4>
        134640:	e3370000 	teq	r7, #0	; 0x0
        134644:	03380000 	teqeq	r8, #0	; 0x0
        134648:	0a000006 	beq	134668 <TNewScriptEndpointClient::DoAccept(RefVar const &, RefVar const &)+0x108>
        13464c:	e3a01001 	mov	r1, #1	; 0x1
        134650:	eb6a0935 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        134654:	e3370000 	teq	r7, #0	; 0x0
        134658:	0a000002 	beq	134668 <TNewScriptEndpointClient::DoAccept(RefVar const &, RefVar const &)+0x108>
        13465c:	e3380000 	teq	r8, #0	; 0x0
        134660:	01a00005 	moveq	r0, r5
        134664:	0b661dd0 	bleq	1abbdac <TNewScriptEndpointClient::$UnwindOptions(void)>
        134668:	e1a00007 	mov	r0, r7
        13466c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::OptMgmtComplete(TEndpointEvent *)
 * Address: 001346a8
 */
TNewScriptEndpointClient::OptMgmtComplete(TEndpointEvent *) {
    /*
        1346a8:	e280202c 	add	r2, r0, #44	; 0x2c
        1346ac:	e5913020 	ldr	r3, [r1, #32]	; fField32
        1346b0:	e5911008 	ldr	r1, [r1, #8]
        1346b4:	ea660929 	b	1ab6b60 <TNewScriptEndpointClient::$OptionCommandComplete(long, RefVar const &, TOptionArray *)>
    */
}

/**
 * Symbol: TNewScriptEndpointClient::BindComplete(TEndpointEvent *)
 * Address: 001346b8
 */
TNewScriptEndpointClient::BindComplete(TEndpointEvent *) {
    /*
        1346b8:	e280202c 	add	r2, r0, #44	; 0x2c
        1346bc:	e5913020 	ldr	r3, [r1, #32]	; fField32
        1346c0:	e5911008 	ldr	r1, [r1, #8]
        1346c4:	ea660925 	b	1ab6b60 <TNewScriptEndpointClient::$OptionCommandComplete(long, RefVar const &, TOptionArray *)>
    */
}

/**
 * Symbol: TNewScriptEndpointClient::ConnectComplete(TEndpointEvent *)
 * Address: 001346c8
 */
TNewScriptEndpointClient::ConnectComplete(TEndpointEvent *) {
    /*
        1346c8:	e1a0c00d 	mov	ip, sp
        1346cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1346d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1346d4:	e1a04000 	mov	r4, r0
        1346d8:	e1a05001 	mov	r5, r1
        1346dc:	e5b10020 	ldr	r0, [r1, #32]!	; fField32
        1346e0:	e3300000 	teq	r0, #0	; 0x0
        1346e4:	13a01001 	movne	r1, #1	; 0x1
        1346e8:	1b6a090f 	blne	1bb6b2c <TOptionArray::$__dt(void)>
        1346ec:	e284202c 	add	r2, r4, #44	; 0x2c
        1346f0:	e1a00004 	mov	r0, r4
        1346f4:	e5b51008 	ldr	r1, [r5, #8]!
        1346f8:	e5b5301c 	ldr	r3, [r5, #28]!	; fField28
        1346fc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        134700:	ea660916 	b	1ab6b60 <TNewScriptEndpointClient::$OptionCommandComplete(long, RefVar const &, TOptionArray *)>
    */
}

/**
 * Symbol: TNewScriptEndpointClient::ListenComplete(TEndpointEvent *)
 * Address: 00134704
 */
TNewScriptEndpointClient::ListenComplete(TEndpointEvent *) {
    /*
        134704:	e1a0c00d 	mov	ip, sp
        134708:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        13470c:	e24cb004 	sub	fp, ip, #4	; 0x4
        134710:	e1a04000 	mov	r4, r0
        134714:	e1a05001 	mov	r5, r1
        134718:	e5b10020 	ldr	r0, [r1, #32]!	; fField32
        13471c:	e3300000 	teq	r0, #0	; 0x0
        134720:	13a01001 	movne	r1, #1	; 0x1
        134724:	1b6a0900 	blne	1bb6b2c <TOptionArray::$__dt(void)>
        134728:	e284202c 	add	r2, r4, #44	; 0x2c
        13472c:	e1a00004 	mov	r0, r4
        134730:	e5b51008 	ldr	r1, [r5, #8]!
        134734:	e5b5301c 	ldr	r3, [r5, #28]!	; fField28
        134738:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        13473c:	ea660907 	b	1ab6b60 <TNewScriptEndpointClient::$OptionCommandComplete(long, RefVar const &, TOptionArray *)>
    */
}

/**
 * Symbol: TNewScriptEndpointClient::AcceptComplete(TEndpointEvent *)
 * Address: 00134740
 */
TNewScriptEndpointClient::AcceptComplete(TEndpointEvent *) {
    /*
        134740:	e1a0c00d 	mov	ip, sp
        134744:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        134748:	e24cb004 	sub	fp, ip, #4	; 0x4
        13474c:	e1a04000 	mov	r4, r0
        134750:	e1a05001 	mov	r5, r1
        134754:	e5b10020 	ldr	r0, [r1, #32]!	; fField32
        134758:	e3300000 	teq	r0, #0	; 0x0
        13475c:	13a01001 	movne	r1, #1	; 0x1
        134760:	1b6a08f1 	blne	1bb6b2c <TOptionArray::$__dt(void)>
        134764:	e284202c 	add	r2, r4, #44	; 0x2c
        134768:	e1a00004 	mov	r0, r4
        13476c:	e5b51008 	ldr	r1, [r5, #8]!
        134770:	e5b5301c 	ldr	r3, [r5, #28]!	; fField28
        134774:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        134778:	ea6608f8 	b	1ab6b60 <TNewScriptEndpointClient::$OptionCommandComplete(long, RefVar const &, TOptionArray *)>
    */
}

/**
 * Symbol: TNewScriptEndpointClient::ReleaseComplete(TEndpointEvent *)
 * Address: 0013477c
 */
TNewScriptEndpointClient::ReleaseComplete(TEndpointEvent *) {
    /*
        13477c:	e1a0c00d 	mov	ip, sp
        134780:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        134784:	e24cb004 	sub	fp, ip, #4	; 0x4
        134788:	e1a04000 	mov	r4, r0
        13478c:	e1a05001 	mov	r5, r1
        134790:	e24dd004 	sub	sp, sp, #4	; 0x4
        134794:	e3a00002 	mov	r0, #2	; 0x2
        134798:	eb6a366b 	bl	1bc214c <$AllocateRefHandle(long)>
        13479c:	e58d0000 	str	r0, [sp]
        1347a0:	e1a0300d 	mov	r3, sp
        1347a4:	e284202c 	add	r2, r4, #44	; 0x2c
        1347a8:	e1a00004 	mov	r0, r4
        1347ac:	e5b51008 	ldr	r1, [r5, #8]!
        1347b0:	eb65db77 	bl	1aab594 <TNewScriptEndpointClient::$CommandComplete(long, RefVar const &, RefVar const &)>
        1347b4:	e59d0000 	ldr	r0, [sp]
        1347b8:	eb6a3a7f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1347bc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DisconnectComplete(TEndpointEvent *)
 * Address: 001347c0
 */
TNewScriptEndpointClient::DisconnectComplete(TEndpointEvent *) {
    /*
        1347c0:	e1a0c00d 	mov	ip, sp
        1347c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1347c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1347cc:	e1a04000 	mov	r4, r0
        1347d0:	e1a05001 	mov	r5, r1
        1347d4:	e24dd004 	sub	sp, sp, #4	; 0x4
        1347d8:	e3a00002 	mov	r0, #2	; 0x2
        1347dc:	eb6a365a 	bl	1bc214c <$AllocateRefHandle(long)>
        1347e0:	e58d0000 	str	r0, [sp]
        1347e4:	e1a0300d 	mov	r3, sp
        1347e8:	e284202c 	add	r2, r4, #44	; 0x2c
        1347ec:	e1a00004 	mov	r0, r4
        1347f0:	e5b51008 	ldr	r1, [r5, #8]!
        1347f4:	eb65db66 	bl	1aab594 <TNewScriptEndpointClient::$CommandComplete(long, RefVar const &, RefVar const &)>
        1347f8:	e59d0000 	ldr	r0, [sp]
        1347fc:	eb6a3a6e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134800:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::UnBindComplete(TEndpointEvent *)
 * Address: 00134804
 */
TNewScriptEndpointClient::UnBindComplete(TEndpointEvent *) {
    /*
        134804:	e1a0c00d 	mov	ip, sp
        134808:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        13480c:	e24cb004 	sub	fp, ip, #4	; 0x4
        134810:	e1a04000 	mov	r4, r0
        134814:	e1a05001 	mov	r5, r1
        134818:	e24dd004 	sub	sp, sp, #4	; 0x4
        13481c:	e3a00002 	mov	r0, #2	; 0x2
        134820:	eb6a3649 	bl	1bc214c <$AllocateRefHandle(long)>
        134824:	e58d0000 	str	r0, [sp]
        134828:	e1a0300d 	mov	r3, sp
        13482c:	e284202c 	add	r2, r4, #44	; 0x2c
        134830:	e1a00004 	mov	r0, r4
        134834:	e5b51008 	ldr	r1, [r5, #8]!
        134838:	eb65db55 	bl	1aab594 <TNewScriptEndpointClient::$CommandComplete(long, RefVar const &, RefVar const &)>
        13483c:	e59d0000 	ldr	r0, [sp]
        134840:	eb6a3a5d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134844:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl
 * Address: 00134848
 */
void TNewScriptEndpointClient::GetParms() {
    /*
        134848:	e1a0c00d 	mov	ip, sp
        13484c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        134850:	e24cb004 	sub	fp, ip, #4	; 0x4
        134854:	e1a04000 	mov	r4, r0
        134858:	e1a05001 	mov	r5, r1
        13485c:	e3a07001 	mov	r7, #1	; 0x1
        134860:	e5900000 	ldr	r0, [r0]
        134864:	e5900000 	ldr	r0, [r0]
        134868:	e3300002 	teq	r0, #2	; 0x2
        13486c:	0a00001b 	beq	1348e0 <GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl+0x98>
        134870:	e59f1070 	ldr	r1, [pc, #70]	; 1348e8 <GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl+0xa0>
        134874:	e1a00004 	mov	r0, r4
        134878:	e3a03000 	mov	r3, #0	; 0x0
        13487c:	e3a02000 	mov	r2, #0	; 0x0
        134880:	eb6a3e7b 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        134884:	eb6a3630 	bl	1bc214c <$AllocateRefHandle(long)>
        134888:	e1a06000 	mov	r6, r0
        13488c:	e5900000 	ldr	r0, [r0]
        134890:	e3300002 	teq	r0, #2	; 0x2
        134894:	13a07000 	movne	r7, #0	; 0x0
        134898:	e59f104c 	ldr	r1, [pc, #4c]	; 1348ec <GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl+0xa4>	; fField4
        13489c:	e1a00004 	mov	r0, r4
        1348a0:	e3a03000 	mov	r3, #0	; 0x0
        1348a4:	e3a02000 	mov	r2, #0	; 0x0
        1348a8:	eb6a3e71 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1348ac:	e5860000 	str	r0, [r6]
        1348b0:	e2001003 	and	r1, r0, #3	; 0x3
        1348b4:	e3510000 	cmp	r1, #0	; 0x0
        1348b8:	1a000006 	bne	1348d8 <GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl+0x90>
        1348bc:	01a00140 	moveq	r0, r0, asr #2
        1348c0:	0a000000 	beq	1348c8 <GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl+0x80>
        1348c4:	eb6a3614 	bl	1bc211c <$_RINTError(long)>
        1348c8:	e3a0c066 	mov	ip, #102	; 0x66
        1348cc:	e28ccc0e 	add	ip, ip, #3584	; 0xe00
        1348d0:	e000009c 	mul	r0, ip, r0
        1348d4:	e5850000 	str	r0, [r5]
        1348d8:	e1a00006 	mov	r0, r6
        1348dc:	eb6a3a36 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1348e0:	e1a00007 	mov	r0, r7
        1348e4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1348e8:	00681f40 	rsbeq	r1, r8, r0, asr #30
        1348ec:	00684310 	rsbeq	r4, r8, r0, lsl r3
    */
}

/**
 * Symbol: TNewScriptEndpointClient::PrepOptions(RefVar const &, TOptionArray **)
 * Address: 001348f0
 */
TNewScriptEndpointClient::PrepOptions(RefVar const &, TOptionArray **) {
    /*
        1348f0:	e1a0c00d 	mov	ip, sp
        1348f4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1348f8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1348fc:	e1a06000 	mov	r6, r0
        134900:	e1a05001 	mov	r5, r1
        134904:	e1a04002 	mov	r4, r2
        134908:	e3a00000 	mov	r0, #0	; 0x0
        13490c:	eb6a0474 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        134910:	e5840000 	str	r0, [r4]
        134914:	eb6ab601 	bl	1be2120 <$MemError>
        134918:	e3300000 	teq	r0, #0	; 0x0
        13491c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        134920:	e5940000 	ldr	r0, [r4]
        134924:	eb6a10d4 	bl	1bb8c7c <TOptionArray::$Init(void)>
        134928:	e3300000 	teq	r0, #0	; 0x0
        13492c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        134930:	e1a01005 	mov	r1, r5
        134934:	e1a00006 	mov	r0, r6
        134938:	e5942000 	ldr	r2, [r4]
        13493c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        134940:	ea65db24 	b	1aab5d8 <TNewScriptEndpointClient::$ConvertToOptionArray(RefVar const &, TOptionArray *)>
    */
}

/**
 * Symbol: TNewScriptEndpointClient::QueueCallback(RefVar const &)
 * Address: 00134a08
 */
TNewScriptEndpointClient::QueueCallback(RefVar const &) {
    /*
        134a08:	e280002c 	add	r0, r0, #44	; 0x2c
        134a0c:	ea6a35c5 	b	1bc2128 <$AddArraySlot__FRC6RefVarT1>
    */
}

/**
 * Symbol: TNewScriptEndpointClient::QueueOptions(RefVar const &, RefVar const &)
 * Address: 00134a10
 */
TNewScriptEndpointClient::QueueOptions(RefVar const &, RefVar const &) {
    /*
        134a10:	e1a0c00d 	mov	ip, sp
        134a14:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        134a18:	e24cb004 	sub	fp, ip, #4	; 0x4
        134a1c:	e1a04002 	mov	r4, r2
        134a20:	e280002c 	add	r0, r0, #44	; 0x2c
        134a24:	e1a05000 	mov	r5, r0
        134a28:	eb6a35be 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        134a2c:	e1a00005 	mov	r0, r5
        134a30:	e1a01004 	mov	r1, r4
        134a34:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        134a38:	ea6a35ba 	b	1bc2128 <$AddArraySlot__FRC6RefVarT1>
    */
}

/**
 * Symbol: TNewScriptEndpointClient::UnwindCallback(void)
 * Address: 00134a3c
 */
TNewScriptEndpointClient::UnwindCallback(void) {
    /*
        134a3c:	e1a0c00d 	mov	ip, sp
        134a40:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        134a44:	e24cb004 	sub	fp, ip, #4	; 0x4
        134a48:	e280002c 	add	r0, r0, #44	; 0x2c
        134a4c:	e1a04000 	mov	r4, r0
        134a50:	e5900000 	ldr	r0, [r0]
        134a54:	e5900000 	ldr	r0, [r0]
        134a58:	eb6a4213 	bl	1bc52ac <$Length(long)>
        134a5c:	e2401001 	sub	r1, r0, #1	; 0x1
        134a60:	e1a00004 	mov	r0, r4
        134a64:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        134a68:	ea6a463f 	b	1bc636c <$SetLength(RefVar const &, long)>
    */
}

/**
 * Symbol: TNewScriptEndpointClient::UnwindOptions(void)
 * Address: 00134a6c
 */
TNewScriptEndpointClient::UnwindOptions(void) {
    /*
        134a6c:	e1a0c00d 	mov	ip, sp
        134a70:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        134a74:	e24cb004 	sub	fp, ip, #4	; 0x4
        134a78:	e280002c 	add	r0, r0, #44	; 0x2c
        134a7c:	e1a04000 	mov	r4, r0
        134a80:	e5900000 	ldr	r0, [r0]
        134a84:	e5900000 	ldr	r0, [r0]
        134a88:	eb6a4207 	bl	1bc52ac <$Length(long)>
        134a8c:	e2401002 	sub	r1, r0, #2	; 0x2
        134a90:	e1a00004 	mov	r0, r4
        134a94:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        134a98:	ea6a4633 	b	1bc636c <$SetLength(RefVar const &, long)>
    */
}

/**
 * Symbol: TNewScriptEndpointClient::CommandComplete(long, RefVar const &, RefVar const &)
 * Address: 00134a9c
 */
TNewScriptEndpointClient::CommandComplete(long, RefVar const &, RefVar const &) {
    /*
        134a9c:	e1a0c00d 	mov	ip, sp
        134aa0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        134aa4:	e24cb004 	sub	fp, ip, #4	; 0x4
        134aa8:	e1a06000 	mov	r6, r0
        134aac:	e1a05001 	mov	r5, r1
        134ab0:	e1a04002 	mov	r4, r2
        134ab4:	e1a07003 	mov	r7, r3
        134ab8:	e24dd004 	sub	sp, sp, #4	; 0x4
        134abc:	e3a01000 	mov	r1, #0	; 0x0
        134ac0:	e5920000 	ldr	r0, [r2]
        134ac4:	e5900000 	ldr	r0, [r0]
        134ac8:	eb6a3de1 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        134acc:	eb6a359e 	bl	1bc214c <$AllocateRefHandle(long)>
        134ad0:	e58d0000 	str	r0, [sp]
        134ad4:	e1a00004 	mov	r0, r4
        134ad8:	e3a02001 	mov	r2, #1	; 0x1
        134adc:	e3a01000 	mov	r1, #0	; 0x0
        134ae0:	eb6b4e5a 	bl	1c08450 <$ArrayRemoveCount__FRC6RefVarlT2>
        134ae4:	e1a03007 	mov	r3, r7
        134ae8:	e1a0200d 	mov	r2, sp
        134aec:	e1a01005 	mov	r1, r5
        134af0:	e1a00006 	mov	r0, r6
        134af4:	eb65decb 	bl	1aac628 <TNewScriptEndpointClient::$DoCompletion(long, RefVar const &, RefVar const &)>
        134af8:	e59d0000 	ldr	r0, [sp]
        134afc:	eb6a39ae 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134b00:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::OptionCommandComplete(long, RefVar const &, TOptionArray *)
 * Address: 00134b04
 */
TNewScriptEndpointClient::OptionCommandComplete(long, RefVar const &, TOptionArray *) {
    /*
        134b04:	e1a0c00d 	mov	ip, sp
        134b08:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        134b0c:	e24cb004 	sub	fp, ip, #4	; 0x4
        134b10:	e1a07000 	mov	r7, r0
        134b14:	e1a06001 	mov	r6, r1
        134b18:	e1a05002 	mov	r5, r2
        134b1c:	e1a04003 	mov	r4, r3
        134b20:	e24dd004 	sub	sp, sp, #4	; 0x4
        134b24:	e3a01000 	mov	r1, #0	; 0x0
        134b28:	e5920000 	ldr	r0, [r2]
        134b2c:	e5900000 	ldr	r0, [r0]
        134b30:	eb6a3dc7 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        134b34:	eb6a3584 	bl	1bc214c <$AllocateRefHandle(long)>
        134b38:	e58d0000 	str	r0, [sp]
        134b3c:	e1a00005 	mov	r0, r5
        134b40:	e3a02001 	mov	r2, #1	; 0x1
        134b44:	e3a01000 	mov	r1, #0	; 0x0
        134b48:	eb6b4e40 	bl	1c08450 <$ArrayRemoveCount__FRC6RefVarlT2>
        134b4c:	e3360000 	teq	r6, #0	; 0x0
        134b50:	1a000004 	bne	134b68 <TNewScriptEndpointClient::OptionCommandComplete(long, RefVar const &, TOptionArray *)+0x64>
        134b54:	e1a02004 	mov	r2, r4
        134b58:	e1a0100d 	mov	r1, sp
        134b5c:	e1a00007 	mov	r0, r7
        134b60:	eb65da9b 	bl	1aab5d4 <TNewScriptEndpointClient::$ConvertFromOptionArray(RefVar const &, TOptionArray *)>
        134b64:	e1a06000 	mov	r6, r0
        134b68:	e3340000 	teq	r4, #0	; 0x0
        134b6c:	0a000002 	beq	134b7c <TNewScriptEndpointClient::OptionCommandComplete(long, RefVar const &, TOptionArray *)+0x78>
        134b70:	e1a00004 	mov	r0, r4
        134b74:	e3a01001 	mov	r1, #1	; 0x1
        134b78:	eb6a07eb 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        134b7c:	e1a0300d 	mov	r3, sp
        134b80:	e1a02005 	mov	r2, r5
        134b84:	e1a01006 	mov	r1, r6
        134b88:	e1a00007 	mov	r0, r7
        134b8c:	eb65da80 	bl	1aab594 <TNewScriptEndpointClient::$CommandComplete(long, RefVar const &, RefVar const &)>
        134b90:	e59d0000 	ldr	r0, [sp]
        134b94:	eb6a3988 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134b98:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)
 * Address: 00134b9c
 */
TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &) {
    /*
        134b9c:	e1a0c00d 	mov	ip, sp
        134ba0:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        134ba4:	e24cb004 	sub	fp, ip, #4	; 0x4
        134ba8:	e1a04001 	mov	r4, r1
        134bac:	e1a05002 	mov	r5, r2
        134bb0:	e24dd008 	sub	sp, sp, #8	; 0x8
        134bb4:	e5921000 	ldr	r1, [r2]
        134bb8:	e5911000 	ldr	r1, [r1]
        134bbc:	e1a0a104 	mov	sl, r4, lsl #2
        134bc0:	e59f90ec 	ldr	r9, [pc, #ec]	; 134cb4 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x118>
        134bc4:	e59f20ec 	ldr	r2, [pc, #ec]	; 134cb8 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x11c>
        134bc8:	e58d2004 	str	r2, [sp, #4]	; fField4
        134bcc:	e59f20e8 	ldr	r2, [pc, #e8]	; 134cbc <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x120>
        134bd0:	e58d2000 	str	r2, [sp]
        134bd4:	e59f80e4 	ldr	r8, [pc, #e4]	; 134cc0 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x124>
        134bd8:	e2806018 	add	r6, r0, #24	; 0x18
        134bdc:	e59f70e0 	ldr	r7, [pc, #e0]	; 134cc4 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x128>
        134be0:	e3310002 	teq	r1, #2	; 0x2
        134be4:	0a000086 	beq	134e04 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x268>
        134be8:	e1a01008 	mov	r1, r8
        134bec:	e1a00005 	mov	r0, r5
        134bf0:	e3a03000 	mov	r3, #0	; 0x0
        134bf4:	e3a02000 	mov	r2, #0	; 0x0
        134bf8:	eb6a3d9d 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        134bfc:	e3300002 	teq	r0, #2	; 0x2
        134c00:	0a00007f 	beq	134e04 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x268>
        134c04:	e24dd004 	sub	sp, sp, #4	; 0x4
        134c08:	e3a00003 	mov	r0, #3	; 0x3
        134c0c:	eb659c62 	bl	1a9bd9c <$MakeArray(long)>
        134c10:	eb6a354d 	bl	1bc214c <$AllocateRefHandle(long)>
        134c14:	e58d0000 	str	r0, [sp]
        134c18:	e5960000 	ldr	r0, [r6]
        134c1c:	e3a01000 	mov	r1, #0	; 0x0
        134c20:	e5902000 	ldr	r2, [r0]
        134c24:	e59d0000 	ldr	r0, [sp]
        134c28:	e5900000 	ldr	r0, [r0]
        134c2c:	eb6a45c9 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        134c30:	e51b302c 	ldr	r3, [fp, -#44]	; fField44
        134c34:	e5930000 	ldr	r0, [r3]
        134c38:	e3a01001 	mov	r1, #1	; 0x1
        134c3c:	e5902000 	ldr	r2, [r0]
        134c40:	e59d0000 	ldr	r0, [sp]
        134c44:	e5900000 	ldr	r0, [r0]
        134c48:	eb6a45c2 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        134c4c:	e1b00004 	movs	r0, r4
        134c50:	e3a04002 	mov	r4, #2	; 0x2
        134c54:	11a0000a 	movne	r0, sl
        134c58:	01a00004 	moveq	r0, r4
        134c5c:	eb6a353a 	bl	1bc214c <$AllocateRefHandle(long)>
        134c60:	e1a0a000 	mov	sl, r0
        134c64:	e1a01004 	mov	r1, r4
        134c68:	e5902000 	ldr	r2, [r0]
        134c6c:	e59d0000 	ldr	r0, [sp]
        134c70:	e5900000 	ldr	r0, [r0]
        134c74:	eb6a45b7 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        134c78:	e1a0000a 	mov	r0, sl
        134c7c:	eb6a394e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134c80:	e3a04000 	mov	r4, #0	; 0x0
        134c84:	e52d406c 	str	r4, [sp, -#108]!	; fField108
        134c88:	e28d0008 	add	r0, sp, #8	; 0x8
        134c8c:	eb69f738 	bl	1bb2974 <$setjmp>
        134c90:	e3300000 	teq	r0, #0	; 0x0
        134c94:	1a00000b 	bne	134cc8 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x12c>
        134c98:	e1a0000d 	mov	r0, sp
        134c9c:	eb6aacf6 	bl	1be007c <$AddExceptionHandler>
        134ca0:	e28d206c 	add	r2, sp, #108	; 0x6c
        134ca4:	e1a01008 	mov	r1, r8
        134ca8:	e1a00005 	mov	r0, r5
        134cac:	eb6a3948 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        134cb0:	ea00004d 	b	134dec <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x250>
        134cb4:	006839a8 	rsbeq	r3, r8, r8, lsr #19
        134cb8:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        134cbc:	00682840 	rsbeq	r2, r8, r0, asr #16
        134cc0:	00682548 	rsbeq	r2, r8, r8, asr #10
        134cc4:	00682ce0 	rsbeq	r2, r8, r0, ror #25
        134cc8:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        134ccc:	e59f1100 	ldr	r1, [pc, #100]	; 134dd4 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x238>	; fField100
        134cd0:	e5911000 	ldr	r1, [r1]
        134cd4:	eb6ab92e 	bl	1be3194 <$Subexception>
        134cd8:	e3300000 	teq	r0, #0	; 0x0
        134cdc:	0a000040 	beq	134de4 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x248>
        134ce0:	e5960000 	ldr	r0, [r6]
        134ce4:	e5900000 	ldr	r0, [r0]
        134ce8:	e3300002 	teq	r0, #2	; 0x2
        134cec:	0a000039 	beq	134dd8 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x23c>
        134cf0:	e1a00006 	mov	r0, r6
        134cf4:	e1a01007 	mov	r1, r7
        134cf8:	e3a03000 	mov	r3, #0	; 0x0
        134cfc:	e3a02000 	mov	r2, #0	; 0x0
        134d00:	eb6a3d5b 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        134d04:	e3300002 	teq	r0, #2	; 0x2
        134d08:	0a000032 	beq	134dd8 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x23c>
        134d0c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        134d10:	eb6a350a 	bl	1bc2140 <$AllocateFrame(void)>
        134d14:	eb6a350c 	bl	1bc214c <$AllocateRefHandle(long)>
        134d18:	e58d0008 	str	r0, [sp, #8]
        134d1c:	e59d006c 	ldr	r0, [sp, #108]	; fField108
        134d20:	eb6a4156 	bl	1bc5280 <$Intern(char *)>
        134d24:	eb6a3508 	bl	1bc214c <$AllocateRefHandle(long)>
        134d28:	e58d0000 	str	r0, [sp]
        134d2c:	e1a0200d 	mov	r2, sp
        134d30:	e1a01009 	mov	r1, r9
        134d34:	e28d0008 	add	r0, sp, #8	; 0x8
        134d38:	eb6a458a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        134d3c:	e59d0000 	ldr	r0, [sp]
        134d40:	eb6a391d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134d44:	e59d0070 	ldr	r0, [sp, #112]
        134d48:	e1a00100 	mov	r0, r0, lsl #2
        134d4c:	eb6a34fe 	bl	1bc214c <$AllocateRefHandle(long)>
        134d50:	e58d0004 	str	r0, [sp, #4]	; fField4
        134d54:	e28d2004 	add	r2, sp, #4	; 0x4
        134d58:	e59d1080 	ldr	r1, [sp, #128]
        134d5c:	e28d0008 	add	r0, sp, #8	; 0x8
        134d60:	eb6a4580 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        134d64:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        134d68:	eb6a3913 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134d6c:	e1a02008 	mov	r2, r8
        134d70:	e59d107c 	ldr	r1, [sp, #124]
        134d74:	e28d0008 	add	r0, sp, #8	; 0x8
        134d78:	eb6a457a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        134d7c:	e24dd004 	sub	sp, sp, #4	; 0x4
        134d80:	e3a00001 	mov	r0, #1	; 0x1
        134d84:	eb659c04 	bl	1a9bd9c <$MakeArray(long)>
        134d88:	eb6a34ef 	bl	1bc214c <$AllocateRefHandle(long)>
        134d8c:	e58d0000 	str	r0, [sp]
        134d90:	e59d000c 	ldr	r0, [sp, #12]
        134d94:	e1a01004 	mov	r1, r4
        134d98:	e5902000 	ldr	r2, [r0]
        134d9c:	e59d0000 	ldr	r0, [sp]
        134da0:	e5900000 	ldr	r0, [r0]
        134da4:	eb6a456b 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        134da8:	e1a00006 	mov	r0, r6
        134dac:	e1a0200d 	mov	r2, sp
        134db0:	e1a01007 	mov	r1, r7
        134db4:	eb6a3906 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        134db8:	e59d0000 	ldr	r0, [sp]
        134dbc:	eb6a38fe 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134dc0:	e28dd004 	add	sp, sp, #4	; 0x4
        134dc4:	e59d0008 	ldr	r0, [sp, #8]
        134dc8:	eb6a38fb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134dcc:	e28dd00c 	add	sp, sp, #12	; 0xc
        134dd0:	ea000005 	b	134dec <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x250>
        134dd4:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        134dd8:	e28d0060 	add	r0, sp, #96	; 0x60
        134ddc:	eb6afaec 	bl	1bf3994 <$ExceptionNotify(Exception *)>
        134de0:	ea000001 	b	134dec <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x250>
        134de4:	e1a0000d 	mov	r0, sp
        134de8:	eb6ab4d9 	bl	1be2154 <$NextHandler>
        134dec:	e1a0000d 	mov	r0, sp
        134df0:	eb6ab0b0 	bl	1be10b8 <$ExitHandler>
        134df4:	e5bd006c 	ldr	r0, [sp, #108]!	; fField108
        134df8:	eb6a38ef 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134dfc:	e28dd004 	add	sp, sp, #4	; 0x4
        134e00:	ea000044 	b	134f18 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x37c>
        134e04:	e3340000 	teq	r4, #0	; 0x0
        134e08:	0a000042 	beq	134f18 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x37c>
        134e0c:	e5960000 	ldr	r0, [r6]
        134e10:	e5900000 	ldr	r0, [r0]
        134e14:	e59f50e8 	ldr	r5, [pc, #e8]	; 134f04 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x368>
        134e18:	e3300002 	teq	r0, #2	; 0x2
        134e1c:	0a000039 	beq	134f08 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x36c>
        134e20:	e1a00006 	mov	r0, r6
        134e24:	e1a01007 	mov	r1, r7
        134e28:	e3a03000 	mov	r3, #0	; 0x0
        134e2c:	e3a02000 	mov	r2, #0	; 0x0
        134e30:	eb6a3d0f 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        134e34:	e3300002 	teq	r0, #2	; 0x2
        134e38:	0a000032 	beq	134f08 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x36c>
        134e3c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        134e40:	eb6a34be 	bl	1bc2140 <$AllocateFrame(void)>
        134e44:	eb6a34c0 	bl	1bc214c <$AllocateRefHandle(long)>
        134e48:	e58d0008 	str	r0, [sp, #8]
        134e4c:	e5950000 	ldr	r0, [r5]
        134e50:	eb6a410a 	bl	1bc5280 <$Intern(char *)>
        134e54:	eb6a34bc 	bl	1bc214c <$AllocateRefHandle(long)>
        134e58:	e58d0000 	str	r0, [sp]
        134e5c:	e1a0200d 	mov	r2, sp
        134e60:	e1a01009 	mov	r1, r9
        134e64:	e28d0008 	add	r0, sp, #8	; 0x8
        134e68:	eb6a453e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        134e6c:	e59d0000 	ldr	r0, [sp]
        134e70:	eb6a38d1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134e74:	e3a04000 	mov	r4, #0	; 0x0
        134e78:	e1a0000a 	mov	r0, sl
        134e7c:	eb6a34b2 	bl	1bc214c <$AllocateRefHandle(long)>
        134e80:	e58d0004 	str	r0, [sp, #4]	; fField4
        134e84:	e28d2004 	add	r2, sp, #4	; 0x4
        134e88:	e59d1010 	ldr	r1, [sp, #16]	; fField16
        134e8c:	e28d0008 	add	r0, sp, #8	; 0x8
        134e90:	eb6a4534 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        134e94:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        134e98:	eb6a38c7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134e9c:	e1a02008 	mov	r2, r8
        134ea0:	e59d100c 	ldr	r1, [sp, #12]
        134ea4:	e28d0008 	add	r0, sp, #8	; 0x8
        134ea8:	eb6a452e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        134eac:	e24dd004 	sub	sp, sp, #4	; 0x4
        134eb0:	e3a00001 	mov	r0, #1	; 0x1
        134eb4:	eb659bb8 	bl	1a9bd9c <$MakeArray(long)>
        134eb8:	eb6a34a3 	bl	1bc214c <$AllocateRefHandle(long)>
        134ebc:	e58d0000 	str	r0, [sp]
        134ec0:	e59d000c 	ldr	r0, [sp, #12]
        134ec4:	e1a01004 	mov	r1, r4
        134ec8:	e5902000 	ldr	r2, [r0]
        134ecc:	e59d0000 	ldr	r0, [sp]
        134ed0:	e5900000 	ldr	r0, [r0]
        134ed4:	eb6a451f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        134ed8:	e1a00006 	mov	r0, r6
        134edc:	e1a0200d 	mov	r2, sp
        134ee0:	e1a01007 	mov	r1, r7
        134ee4:	eb6a38ba 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        134ee8:	e59d0000 	ldr	r0, [sp]
        134eec:	eb6a38b2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134ef0:	e28dd004 	add	sp, sp, #4	; 0x4
        134ef4:	e59d0008 	ldr	r0, [sp, #8]
        134ef8:	eb6a38af 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134efc:	e28dd00c 	add	sp, sp, #12	; 0xc
        134f00:	ea000004 	b	134f18 <TNewScriptEndpointClient::DoCompletion(long, RefVar const &, RefVar const &)+0x37c>
        134f04:	003712e4 	eoreqs	r1, r7, r4, ror #5
        134f08:	e1a01004 	mov	r1, r4
        134f0c:	e3a02000 	mov	r2, #0	; 0x0
        134f10:	e5950000 	ldr	r0, [r5]
        134f14:	eb6ab8a0 	bl	1be319c <$Throw>
        134f18:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoAbort(RefVar const &)
 * Address: 00134f1c
 */
TNewScriptEndpointClient::DoAbort(RefVar const &) {
    /*
        134f1c:	e1a0c00d 	mov	ip, sp
        134f20:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        134f24:	e24cb004 	sub	fp, ip, #4	; 0x4
        134f28:	e1a05000 	mov	r5, r0
        134f2c:	e1a04001 	mov	r4, r1
        134f30:	e3a00000 	mov	r0, #0	; 0x0
        134f34:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        134f38:	e1a0100d 	mov	r1, sp
        134f3c:	e1a00004 	mov	r0, r4
        134f40:	eb65f683 	bl	1ab2954 <$GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl>
        134f44:	e1b06000 	movs	r6, r0
        134f48:	e2857030 	add	r7, r5, #48	; 0x30
        134f4c:	01a00007 	moveq	r0, r7
        134f50:	01a01004 	moveq	r1, r4
        134f54:	0b6a3473 	bleq	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        134f58:	e20610ff 	and	r1, r6, #255	; 0xff
        134f5c:	e5b50014 	ldr	r0, [r5, #20]!	; fField20
        134f60:	eb6b27eb 	bl	1bfef14 <TEndpoint::$nAbort(unsigned char)>
        134f64:	e1a04000 	mov	r4, r0
        134f68:	e3500000 	cmp	r0, #0	; 0x0
        134f6c:	0a000007 	beq	134f90 <TNewScriptEndpointClient::DoAbort(RefVar const &)+0x74>
        134f70:	e3360000 	teq	r6, #0	; 0x0
        134f74:	1a000005 	bne	134f90 <TNewScriptEndpointClient::DoAbort(RefVar const &)+0x74>
        134f78:	e5970000 	ldr	r0, [r7]
        134f7c:	e5900000 	ldr	r0, [r0]
        134f80:	eb6a40c9 	bl	1bc52ac <$Length(long)>
        134f84:	e2401001 	sub	r1, r0, #1	; 0x1
        134f88:	e1a00007 	mov	r0, r7
        134f8c:	eb6a44f6 	bl	1bc636c <$SetLength(RefVar const &, long)>
        134f90:	e1a00004 	mov	r0, r4
        134f94:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::AbortComplete(TEndpointEvent *)
 * Address: 00134f98
 */
TNewScriptEndpointClient::AbortComplete(TEndpointEvent *) {
    /*
        134f98:	e1a0c00d 	mov	ip, sp
        134f9c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        134fa0:	e24cb004 	sub	fp, ip, #4	; 0x4
        134fa4:	e1a04000 	mov	r4, r0
        134fa8:	e1a05001 	mov	r5, r1
        134fac:	e24dd004 	sub	sp, sp, #4	; 0x4
        134fb0:	e3a00002 	mov	r0, #2	; 0x2
        134fb4:	eb6a3464 	bl	1bc214c <$AllocateRefHandle(long)>
        134fb8:	e58d0000 	str	r0, [sp]
        134fbc:	e1a0300d 	mov	r3, sp
        134fc0:	e2842030 	add	r2, r4, #48	; 0x30
        134fc4:	e1a00004 	mov	r0, r4
        134fc8:	e5b51008 	ldr	r1, [r5, #8]!
        134fcc:	eb65d970 	bl	1aab594 <TNewScriptEndpointClient::$CommandComplete(long, RefVar const &, RefVar const &)>
        134fd0:	e59d0000 	ldr	r0, [sp]
        134fd4:	eb6a3878 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        134fd8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)
 * Address: 00134fdc
 */
TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &) {
    /*
        134fdc:	e1a0c00d 	mov	ip, sp
        134fe0:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        134fe4:	e24cb004 	sub	fp, ip, #4	; 0x4
        134fe8:	e1a06000 	mov	r6, r0
        134fec:	e1a05001 	mov	r5, r1
        134ff0:	e1a07002 	mov	r7, r2
        134ff4:	e1a04003 	mov	r4, r3
        134ff8:	e24dd00c 	sub	sp, sp, #12	; 0xc
        134ffc:	e3a00001 	mov	r0, #1	; 0x1
        135000:	e58d0008 	str	r0, [sp, #8]
        135004:	e3a00000 	mov	r0, #0	; 0x0
        135008:	e58d0004 	str	r0, [sp, #4]	; fField4
        13500c:	e58d0000 	str	r0, [sp]
        135010:	e1a0100d 	mov	r1, sp
        135014:	e1a00003 	mov	r0, r3
        135018:	eb65f64d 	bl	1ab2954 <$GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl>
        13501c:	e1a08000 	mov	r8, r0
        135020:	e5970000 	ldr	r0, [r7]
        135024:	e5900000 	ldr	r0, [r0]
        135028:	e286a028 	add	sl, r6, #40	; 0x28
        13502c:	e3300002 	teq	r0, #2	; 0x2
        135030:	0a000006 	beq	135050 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x74>
        135034:	e28d2004 	add	r2, sp, #4	; 0x4
        135038:	e1a01007 	mov	r1, r7
        13503c:	e1a00006 	mov	r0, r6
        135040:	eb660ad4 	bl	1ab7b98 <TNewScriptEndpointClient::$PrepOptions(RefVar const &, TOptionArray **)>
        135044:	e1b09000 	movs	r9, r0
        135048:	124dd004 	subne	sp, sp, #4	; 0x4
        13504c:	1a000080 	bne	135254 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x278>
        135050:	e24dd004 	sub	sp, sp, #4	; 0x4
        135054:	e5940000 	ldr	r0, [r4]
        135058:	e5900000 	ldr	r0, [r0]
        13505c:	e3300002 	teq	r0, #2	; 0x2
        135060:	0a000023 	beq	1350f4 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x118>
        135064:	e24dd004 	sub	sp, sp, #4	; 0x4
        135068:	e59f107c 	ldr	r1, [pc, #7c]	; 1350ec <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x110>
        13506c:	e1a00004 	mov	r0, r4
        135070:	e3a03000 	mov	r3, #0	; 0x0
        135074:	e3a02000 	mov	r2, #0	; 0x0
        135078:	eb6a3c7d 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        13507c:	eb6a3432 	bl	1bc214c <$AllocateRefHandle(long)>
        135080:	e40d0004 	str	r0, [sp], -#4	; fField4
        135084:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        135088:	e5900000 	ldr	r0, [r0]
        13508c:	e2001003 	and	r1, r0, #3	; 0x3
        135090:	e3510000 	cmp	r1, #0	; 0x0
        135094:	1a000003 	bne	1350a8 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0xcc>
        135098:	01a00140 	moveq	r0, r0, asr #2
        13509c:	0a000000 	beq	1350a4 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0xc8>
        1350a0:	eb6a341d 	bl	1bc211c <$_RINTError(long)>
        1350a4:	e58d0014 	str	r0, [sp, #20]	; fField20
        1350a8:	e59f1040 	ldr	r1, [pc, #40]	; 1350f0 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x114>	; fField40
        1350ac:	e1a00004 	mov	r0, r4
        1350b0:	e3a03000 	mov	r3, #0	; 0x0
        1350b4:	e3a02000 	mov	r2, #0	; 0x0
        1350b8:	eb6a3c6d 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1350bc:	eb6a3422 	bl	1bc214c <$AllocateRefHandle(long)>
        1350c0:	e58d0000 	str	r0, [sp]
        1350c4:	e1a0000d 	mov	r0, sp
        1350c8:	e3a01002 	mov	r1, #2	; 0x2
        1350cc:	eb663001 	bl	1ac10d8 <$GetDataForm(RefVar const &, FormUser)>
        1350d0:	e1a09000 	mov	r9, r0
        1350d4:	e59d0000 	ldr	r0, [sp]
        1350d8:	eb6a3837 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1350dc:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        1350e0:	eb6a3835 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1350e4:	e28dd004 	add	sp, sp, #4	; 0x4
        1350e8:	ea00000a 	b	135118 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x13c>
        1350ec:	00684510 	rsbeq	r4, r8, r0, lsl r5
        1350f0:	00682e68 	rsbeq	r2, r8, r8, ror #28
        1350f4:	e3a00002 	mov	r0, #2	; 0x2
        1350f8:	eb6a3413 	bl	1bc214c <$AllocateRefHandle(long)>
        1350fc:	e58d0000 	str	r0, [sp]
        135100:	e1a0000d 	mov	r0, sp
        135104:	e3a01002 	mov	r1, #2	; 0x2
        135108:	eb662ff2 	bl	1ac10d8 <$GetDataForm(RefVar const &, FormUser)>
        13510c:	e1a09000 	mov	r9, r0
        135110:	e59d0000 	ldr	r0, [sp]
        135114:	eb6a3828 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        135118:	e3380000 	teq	r8, #0	; 0x0
        13511c:	1a00000f 	bne	135160 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x184>
        135120:	e24dd004 	sub	sp, sp, #4	; 0x4
        135124:	e3a00002 	mov	r0, #2	; 0x2
        135128:	eb6a3407 	bl	1bc214c <$AllocateRefHandle(long)>
        13512c:	e58d0000 	str	r0, [sp]
        135130:	e1a0100d 	mov	r1, sp
        135134:	e1a0000a 	mov	r0, sl
        135138:	eb6a33fa 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        13513c:	e59d0000 	ldr	r0, [sp]
        135140:	eb6a381d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        135144:	e1a0000a 	mov	r0, sl
        135148:	e1a01007 	mov	r1, r7
        13514c:	eb6a33f5 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        135150:	e1a0000a 	mov	r0, sl
        135154:	e1a01004 	mov	r1, r4
        135158:	eb6a33f2 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        13515c:	e28dd004 	add	sp, sp, #4	; 0x4
        135160:	e3390007 	teq	r9, #7	; 0x7
        135164:	1a00000c 	bne	13519c <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x1c0>
        135168:	e1a00005 	mov	r0, r5
        13516c:	eb6afa07 	bl	1bf3990 <$IsFrame(RefVar const &)>
        135170:	e3300000 	teq	r0, #0	; 0x0
        135174:	0a000021 	beq	135200 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x224>
        135178:	e99d000c 	ldmib	sp, {r2, r3}
        13517c:	e92d000c 	stmdb	sp!, {r2, r3}
        135180:	e1a02008 	mov	r2, r8
        135184:	e1a01005 	mov	r1, r5
        135188:	e1a00006 	mov	r0, r6
        13518c:	e59d3014 	ldr	r3, [sp, #20]	; fField20
        135190:	eb660674 	bl	1ab6b68 <TNewScriptEndpointClient::$OutputFrame(RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)>
        135194:	e28dd008 	add	sp, sp, #8	; 0x8
        135198:	ea000021 	b	135224 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x248>
        13519c:	e3390001 	teq	r9, #1	; 0x1
        1351a0:	1a000004 	bne	1351b8 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x1dc>
        1351a4:	e1a00005 	mov	r0, r5
        1351a8:	eb660243 	bl	1ab5abc <$IsRaw(RefVar const &)>
        1351ac:	e3300000 	teq	r0, #0	; 0x0
        1351b0:	0a000012 	beq	135200 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x224>
        1351b4:	ea000005 	b	1351d0 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x1f4>
        1351b8:	e3390006 	teq	r9, #6	; 0x6
        1351bc:	1a00000c 	bne	1351f4 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x218>
        1351c0:	e1a00005 	mov	r0, r5
        1351c4:	eb6633d5 	bl	1ac2120 <$IsRawOrString(RefVar const &)>
        1351c8:	e3300000 	teq	r0, #0	; 0x0
        1351cc:	0a00000b 	beq	135200 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x224>
        1351d0:	e59d100c 	ldr	r1, [sp, #12]
        1351d4:	e99d000c 	ldmib	sp, {r2, r3}
        1351d8:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1351dc:	e1a03008 	mov	r3, r8
        1351e0:	e1a02004 	mov	r2, r4
        1351e4:	e1a01005 	mov	r1, r5
        1351e8:	e1a00006 	mov	r0, r6
        1351ec:	eb66065e 	bl	1ab6b6c <TNewScriptEndpointClient::$OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)>
        1351f0:	ea00000a 	b	135220 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x244>
        1351f4:	e3390000 	teq	r9, #0	; 0x0
        1351f8:	059f90a4 	ldreq	r9, [pc, #a4]	; 1352a4 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x2c8>
        1351fc:	0a000014 	beq	135254 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x278>
        135200:	e59d100c 	ldr	r1, [sp, #12]
        135204:	e99d000c 	ldmib	sp, {r2, r3}
        135208:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        13520c:	e1a03008 	mov	r3, r8
        135210:	e1a02009 	mov	r2, r9
        135214:	e1a01005 	mov	r1, r5
        135218:	e1a00006 	mov	r0, r6
        13521c:	eb660650 	bl	1ab6b64 <TNewScriptEndpointClient::$OutputData(RefVar const &, FormType, unsigned char, unsigned long, unsigned long, TOptionArray *)>
        135220:	e28dd00c 	add	sp, sp, #12	; 0xc
        135224:	e1b09000 	movs	r9, r0
        135228:	1a000009 	bne	135254 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x278>
        13522c:	e3380000 	teq	r8, #0	; 0x0
        135230:	15970000 	ldrne	r0, [r7]
        135234:	15900000 	ldrne	r0, [r0]
        135238:	13300002 	teqne	r0, #2	; 0x2
        13523c:	0a000004 	beq	135254 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x278>
        135240:	e1a01007 	mov	r1, r7
        135244:	e1a00006 	mov	r0, r6
        135248:	e59d2008 	ldr	r2, [sp, #8]
        13524c:	eb65d8e0 	bl	1aab5d4 <TNewScriptEndpointClient::$ConvertFromOptionArray(RefVar const &, TOptionArray *)>
        135250:	e1a09000 	mov	r9, r0
        135254:	e59d0008 	ldr	r0, [sp, #8]
        135258:	e3300000 	teq	r0, #0	; 0x0
        13525c:	0a000004 	beq	135274 <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x298>
        135260:	e3390000 	teq	r9, #0	; 0x0
        135264:	03380000 	teqeq	r8, #0	; 0x0
        135268:	0a00000b 	beq	13529c <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x2c0>
        13526c:	e3a01001 	mov	r1, #1	; 0x1
        135270:	eb6a062d 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        135274:	e3390000 	teq	r9, #0	; 0x0
        135278:	0a000007 	beq	13529c <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x2c0>
        13527c:	e3380000 	teq	r8, #0	; 0x0
        135280:	1a000005 	bne	13529c <TNewScriptEndpointClient::DoOutput(RefVar const &, RefVar const &, RefVar const &)+0x2c0>
        135284:	e59a0000 	ldr	r0, [sl]
        135288:	e5900000 	ldr	r0, [r0]
        13528c:	eb6a4006 	bl	1bc52ac <$Length(long)>
        135290:	e2401003 	sub	r1, r0, #3	; 0x3
        135294:	e1a0000a 	mov	r0, sl
        135298:	eb6a4433 	bl	1bc636c <$SetLength(RefVar const &, long)>
        13529c:	e1a00009 	mov	r0, r9
        1352a0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1352a4:	ffff2d0f 	swinv	0x00ff2d0f
    */
}

/**
 * Symbol: TNewScriptEndpointClient::__ct(void)
 * Address: 001352a8
 */
TNewScriptEndpointClient::TNewScriptEndpointClient(void) {
    /*
        1352a8:	e1a0c00d 	mov	ip, sp
        1352ac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1352b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1352b4:	e1b04000 	movs	r4, r0
        1352b8:	1a000003 	bne	1352cc <TNewScriptEndpointClient::__ct(void)+0x24>
        1352bc:	e3a000d4 	mov	r0, #212	; 0xd4
        1352c0:	eb6a651c 	bl	1bce738 <$__nw(unsigned int)>
        1352c4:	e1b04000 	movs	r4, r0
        1352c8:	0a000059 	beq	135434 <TNewScriptEndpointClient::__ct(void)+0x18c>
        1352cc:	e1a00004 	mov	r0, r4
        1352d0:	eb6a0205 	bl	1bb5aec <TEndpointClient::$__ct(void)>
        1352d4:	e3a00002 	mov	r0, #2	; 0x2
        1352d8:	eb6a339b 	bl	1bc214c <$AllocateRefHandle(long)>
        1352dc:	e3a05000 	mov	r5, #0	; 0x0
        1352e0:	e5840018 	str	r0, [r4, #24]
        1352e4:	e5a05004 	str	r5, [r0, #4]!	; fField4
        1352e8:	e3a00002 	mov	r0, #2	; 0x2
        1352ec:	eb6a3396 	bl	1bc214c <$AllocateRefHandle(long)>
        1352f0:	e5840028 	str	r0, [r4, #40]	; fField40
        1352f4:	e5a05004 	str	r5, [r0, #4]!	; fField4
        1352f8:	e3a00002 	mov	r0, #2	; 0x2
        1352fc:	eb6a3392 	bl	1bc214c <$AllocateRefHandle(long)>
        135300:	e584002c 	str	r0, [r4, #44]	; fField44
        135304:	e5a05004 	str	r5, [r0, #4]!	; fField4
        135308:	e3a00002 	mov	r0, #2	; 0x2
        13530c:	eb6a338e 	bl	1bc214c <$AllocateRefHandle(long)>
        135310:	e5840030 	str	r0, [r4, #48]	; fField48
        135314:	e5a05004 	str	r5, [r0, #4]!	; fField4
        135318:	e3a00002 	mov	r0, #2	; 0x2
        13531c:	eb6a338a 	bl	1bc214c <$AllocateRefHandle(long)>
        135320:	e5840034 	str	r0, [r4, #52]	; fField52
        135324:	e5a05004 	str	r5, [r0, #4]!	; fField4
        135328:	e3a00002 	mov	r0, #2	; 0x2
        13532c:	eb6a3386 	bl	1bc214c <$AllocateRefHandle(long)>
        135330:	e5840040 	str	r0, [r4, #64]	; fField64
        135334:	e5a05004 	str	r5, [r0, #4]!	; fField4
        135338:	e3a00002 	mov	r0, #2	; 0x2
        13533c:	eb6a3382 	bl	1bc214c <$AllocateRefHandle(long)>
        135340:	e5840050 	str	r0, [r4, #80]	; fField80
        135344:	e5a05004 	str	r5, [r0, #4]!	; fField4
        135348:	e3a00002 	mov	r0, #2	; 0x2
        13534c:	eb6a337e 	bl	1bc214c <$AllocateRefHandle(long)>
        135350:	e5840054 	str	r0, [r4, #84]	; fField84
        135354:	e5a05004 	str	r5, [r0, #4]!	; fField4
        135358:	e3a00002 	mov	r0, #2	; 0x2
        13535c:	eb6a337a 	bl	1bc214c <$AllocateRefHandle(long)>
        135360:	e584005c 	str	r0, [r4, #92]	; fField92
        135364:	e5a05004 	str	r5, [r0, #4]!	; fField4
        135368:	e3a00002 	mov	r0, #2	; 0x2
        13536c:	eb6a3376 	bl	1bc214c <$AllocateRefHandle(long)>
        135370:	e5840068 	str	r0, [r4, #104]	; fField104
        135374:	e5a05004 	str	r5, [r0, #4]!	; fField4
        135378:	e2840074 	add	r0, r4, #116	; 0x74
        13537c:	eb6abba0 	bl	1be4204 <CBufferSegment::$__ct(void)>
        135380:	e59f00b4 	ldr	r0, [pc, #b4]	; 13543c <TNewScriptEndpointClient::__ct(void)+0x194>
        135384:	e5840000 	str	r0, [r4]
        135388:	e3a00002 	mov	r0, #2	; 0x2
        13538c:	e5941018 	ldr	r1, [r4, #24]
        135390:	e5810000 	str	r0, [r1]
        135394:	e5941034 	ldr	r1, [r4, #52]	; fField52
        135398:	e5810000 	str	r0, [r1]
        13539c:	e584509c 	str	r5, [r4, #156]	; fField156
        1353a0:	e584504c 	str	r5, [r4, #76]	; fField76
        1353a4:	e5845048 	str	r5, [r4, #72]
        1353a8:	e3a01001 	mov	r1, #1	; 0x1
        1353ac:	e584101c 	str	r1, [r4, #28]	; fField28
        1353b0:	e5845014 	str	r5, [r4, #20]	; fField20
        1353b4:	e5845020 	str	r5, [r4, #32]	; fField32
        1353b8:	e5c45024 	strb	r5, [r4, #36]	; fField36
        1353bc:	e5c45070 	strb	r5, [r4, #112]
        1353c0:	e5c450b0 	strb	r5, [r4, #176]
        1353c4:	e5c450b1 	strb	r5, [r4, #177]	; fField177
        1353c8:	e5941040 	ldr	r1, [r4, #64]	; fField64
        1353cc:	e5810000 	str	r0, [r1]
        1353d0:	e5941050 	ldr	r1, [r4, #80]	; fField80
        1353d4:	e5810000 	str	r0, [r1]
        1353d8:	e5941054 	ldr	r1, [r4, #84]	; fField84
        1353dc:	e2846028 	add	r6, r4, #40	; 0x28
        1353e0:	e5810000 	str	r0, [r1]
        1353e4:	e3a00000 	mov	r0, #0	; 0x0
        1353e8:	eb659a6b 	bl	1a9bd9c <$MakeArray(long)>
        1353ec:	e5961000 	ldr	r1, [r6]
        1353f0:	e284602c 	add	r6, r4, #44	; 0x2c
        1353f4:	e5810000 	str	r0, [r1]
        1353f8:	e3a00000 	mov	r0, #0	; 0x0
        1353fc:	eb659a66 	bl	1a9bd9c <$MakeArray(long)>
        135400:	e5961000 	ldr	r1, [r6]
        135404:	e2846030 	add	r6, r4, #48	; 0x30
        135408:	e5810000 	str	r0, [r1]
        13540c:	e3a00000 	mov	r0, #0	; 0x0
        135410:	eb659a61 	bl	1a9bd9c <$MakeArray(long)>
        135414:	e5961000 	ldr	r1, [r6]
        135418:	e5810000 	str	r0, [r1]
        13541c:	e58450bc 	str	r5, [r4, #188]	; fField188
        135420:	e58450c0 	str	r5, [r4, #192]	; fField192
        135424:	e58450c4 	str	r5, [r4, #196]	; fField196
        135428:	e58450c8 	str	r5, [r4, #200]	; fField200
        13542c:	e58450cc 	str	r5, [r4, #204]	; fField204
        135430:	e58450d0 	str	r5, [r4, #208]	; fField208
        135434:	e1a00004 	mov	r0, r4
        135438:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        13543c:	0001f24c 	andeq	pc, r1, ip, asr #4
    */
}

/**
 * Symbol: TNewScriptEndpointClient::OutputData(RefVar const &, FormType, unsigned char, unsigned long, unsigned long, TOptionArray *)
 * Address: 00135440
 */
TNewScriptEndpointClient::OutputData(RefVar const &, FormType, unsigned char, unsigned long, unsigned long, TOptionArray *) {
    /*
        135440:	e1a0c00d 	mov	ip, sp
        135444:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        135448:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13544c:	e24cb014 	sub	fp, ip, #20	; 0x14
        135450:	e1a04000 	mov	r4, r0
        135454:	e20370ff 	and	r7, r3, #255	; 0xff
        135458:	e3a06000 	mov	r6, #0	; 0x0
        13545c:	e3a05000 	mov	r5, #0	; 0x0
        135460:	e59b801c 	ldr	r8, [fp, #28]	; fField28
        135464:	e59b9018 	ldr	r9, [fp, #24]
        135468:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        13546c:	e3a00000 	mov	r0, #0	; 0x0
        135470:	e52d5004 	str	r5, [sp, -#4]!	; fField4
        135474:	e52d006c 	str	r0, [sp, -#108]!	; fField108
        135478:	e28d0008 	add	r0, sp, #8	; 0x8
        13547c:	eb69f53c 	bl	1bb2974 <$setjmp>
        135480:	e3300000 	teq	r0, #0	; 0x0
        135484:	1a00001b 	bne	1354f8 <TNewScriptEndpointClient::OutputData(RefVar const &, FormType, unsigned char, unsigned long, unsigned long, TOptionArray *)+0xb8>
        135488:	e1a0000d 	mov	r0, sp
        13548c:	eb6aaafa 	bl	1be007c <$AddExceptionHandler>
        135490:	e24dd014 	sub	sp, sp, #20	; 0x14
        135494:	e3a00002 	mov	r0, #2	; 0x2
        135498:	eb6a332b 	bl	1bc214c <$AllocateRefHandle(long)>
        13549c:	e58d0000 	str	r0, [sp]
        1354a0:	e59b1008 	ldr	r1, [fp, #8]
        1354a4:	e5910000 	ldr	r0, [r1]
        1354a8:	e5900000 	ldr	r0, [r0]
        1354ac:	e59d1000 	ldr	r1, [sp]
        1354b0:	e5810000 	str	r0, [r1]
        1354b4:	e59b200c 	ldr	r2, [fp, #12]
        1354b8:	e58d2004 	str	r2, [sp, #4]	; fField4
        1354bc:	e594001c 	ldr	r0, [r4, #28]	; fField28
        1354c0:	e58d0008 	str	r0, [sp, #8]
        1354c4:	e3a00000 	mov	r0, #0	; 0x0
        1354c8:	e5cd000c 	strb	r0, [sp, #12]
        1354cc:	e58d0010 	str	r0, [sp, #16]	; fField16
        1354d0:	e1a00004 	mov	r0, r4
        1354d4:	eb65f527 	bl	1ab2978 <TNewScriptEndpointClient::$GetScriptDataOutXlator(void)>
        1354d8:	e1a0100d 	mov	r1, sp
        1354dc:	e3a02000 	mov	r2, #0	; 0x0
        1354e0:	eb69cbc9 	bl	1ba840c <PFrameSink::$Translate(void *, PipeCallBack *)>
        1354e4:	e1a05000 	mov	r5, r0
        1354e8:	e59d0000 	ldr	r0, [sp]
        1354ec:	eb6a3732 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1354f0:	e28dd014 	add	sp, sp, #20	; 0x14
        1354f4:	ea000008 	b	13551c <TNewScriptEndpointClient::OutputData(RefVar const &, FormType, unsigned char, unsigned long, unsigned long, TOptionArray *)+0xdc>
        1354f8:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        1354fc:	e59f1084 	ldr	r1, [pc, #84]	; 135588 <TNewScriptEndpointClient::OutputData(RefVar const &, FormType, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x148>	; fField84
        135500:	e5911000 	ldr	r1, [r1]
        135504:	eb6ab722 	bl	1be3194 <$Subexception>
        135508:	e3300000 	teq	r0, #0	; 0x0
        13550c:	159d6064 	ldrne	r6, [sp, #100]	; fField100
        135510:	1a000001 	bne	13551c <TNewScriptEndpointClient::OutputData(RefVar const &, FormType, unsigned char, unsigned long, unsigned long, TOptionArray *)+0xdc>
        135514:	e1a0000d 	mov	r0, sp
        135518:	eb6ab30d 	bl	1be2154 <$NextHandler>
        13551c:	e1a0000d 	mov	r0, sp
        135520:	eb6aaee4 	bl	1be10b8 <$ExitHandler>
        135524:	e28dd06c 	add	sp, sp, #108	; 0x6c
        135528:	e3360000 	teq	r6, #0	; 0x0
        13552c:	1a00000d 	bne	135568 <TNewScriptEndpointClient::OutputData(RefVar const &, FormType, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x128>
        135530:	e1a00005 	mov	r0, r5
        135534:	eb6aaeef 	bl	1be10f8 <$GetPtrSize>
        135538:	e1a01009 	mov	r1, r9
        13553c:	e1a02007 	mov	r2, r7
        135540:	e1a03008 	mov	r3, r8
        135544:	e58d0000 	str	r0, [sp]
        135548:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        13554c:	e1a0300a 	mov	r3, sl
        135550:	e28d200c 	add	r2, sp, #12	; 0xc
        135554:	e1a01005 	mov	r1, r5
        135558:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        13555c:	eb634fca 	bl	1a0948c <TEndpoint::$nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        135560:	e28dd00c 	add	sp, sp, #12	; 0xc
        135564:	e1a06000 	mov	r6, r0
        135568:	e3350000 	teq	r5, #0	; 0x0
        13556c:	0a000003 	beq	135580 <TNewScriptEndpointClient::OutputData(RefVar const &, FormType, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x140>
        135570:	e3360000 	teq	r6, #0	; 0x0
        135574:	03370000 	teqeq	r7, #0	; 0x0
        135578:	11a00005 	movne	r0, r5
        13557c:	1b6a74f5 	blne	1bd2958 <$free>
        135580:	e1a00006 	mov	r0, r6
        135584:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        135588:	00371328 	eoreqs	r1, r7, r8, lsr #6
    */
}

/**
 * Symbol: TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)
 * Address: 0013558c
 */
TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *) {
    /*
        13558c:	e1a0c00d 	mov	ip, sp
        135590:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        135594:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        135598:	e24cb014 	sub	fp, ip, #20	; 0x14
        13559c:	e1a05000 	mov	r5, r0
        1355a0:	e1a04001 	mov	r4, r1
        1355a4:	e1a07002 	mov	r7, r2
        1355a8:	e203a0ff 	and	sl, r3, #255	; 0xff
        1355ac:	e3a06000 	mov	r6, #0	; 0x0
        1355b0:	e5910000 	ldr	r0, [r1]
        1355b4:	e5900000 	ldr	r0, [r0]
        1355b8:	eb6a3f3d 	bl	1bc52b4 <$LockRef(long)>
        1355bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1355c0:	e5940000 	ldr	r0, [r4]
        1355c4:	e5900000 	ldr	r0, [r0]
        1355c8:	eb6a32e3 	bl	1bc215c <$BinaryData(long)>
        1355cc:	e1a08000 	mov	r8, r0
        1355d0:	e5940000 	ldr	r0, [r4]
        1355d4:	e5900000 	ldr	r0, [r0]
        1355d8:	eb6a3f33 	bl	1bc52ac <$Length(long)>
        1355dc:	e58d0000 	str	r0, [sp]
        1355e0:	e5970000 	ldr	r0, [r7]
        1355e4:	e5900000 	ldr	r0, [r0]
        1355e8:	e3300002 	teq	r0, #2	; 0x2
        1355ec:	0a000042 	beq	1356fc <TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x170>
        1355f0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1355f4:	e59f10c0 	ldr	r1, [pc, #c0]	; 1356bc <TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x130>
        1355f8:	e1a00007 	mov	r0, r7
        1355fc:	e3a03000 	mov	r3, #0	; 0x0
        135600:	e3a02000 	mov	r2, #0	; 0x0
        135604:	eb6a3b1a 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        135608:	eb6a32cf 	bl	1bc214c <$AllocateRefHandle(long)>
        13560c:	e58d0000 	str	r0, [sp]
        135610:	e5900000 	ldr	r0, [r0]
        135614:	e3300002 	teq	r0, #2	; 0x2
        135618:	0a000032 	beq	1356e8 <TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x15c>
        13561c:	e1a0000d 	mov	r0, sp
        135620:	eb6af8da 	bl	1bf3990 <$IsFrame(RefVar const &)>
        135624:	e3300000 	teq	r0, #0	; 0x0
        135628:	0a00002e 	beq	1356e8 <TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x15c>
        13562c:	e3a07000 	mov	r7, #0	; 0x0
        135630:	e59f1088 	ldr	r1, [pc, #88]	; 1356c0 <TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x134>	; fField88
        135634:	e1a0000d 	mov	r0, sp
        135638:	e3a03000 	mov	r3, #0	; 0x0
        13563c:	e3a02000 	mov	r2, #0	; 0x0
        135640:	eb6a3b0b 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        135644:	eb6a32c0 	bl	1bc214c <$AllocateRefHandle(long)>
        135648:	e1a09000 	mov	r9, r0
        13564c:	e5900000 	ldr	r0, [r0]
        135650:	e2001003 	and	r1, r0, #3	; 0x3
        135654:	e3510000 	cmp	r1, #0	; 0x0
        135658:	1a000004 	bne	135670 <TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0xe4>
        13565c:	01a00140 	moveq	r0, r0, asr #2
        135660:	0a000000 	beq	135668 <TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0xdc>
        135664:	eb6a32ac 	bl	1bc211c <$_RINTError(long)>
        135668:	e1a07000 	mov	r7, r0
        13566c:	e0888000 	add	r8, r8, r0
        135670:	e59f104c 	ldr	r1, [pc, #4c]	; 1356c4 <TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x138>	; fField4
        135674:	e1a0000d 	mov	r0, sp
        135678:	e3a03000 	mov	r3, #0	; 0x0
        13567c:	e3a02000 	mov	r2, #0	; 0x0
        135680:	eb6a3afb 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        135684:	e5890000 	str	r0, [r9]
        135688:	e2001003 	and	r1, r0, #3	; 0x3
        13568c:	e3510000 	cmp	r1, #0	; 0x0
        135690:	1a00000c 	bne	1356c8 <TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x13c>
        135694:	01a00140 	moveq	r0, r0, asr #2
        135698:	0a000000 	beq	1356a0 <TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x114>
        13569c:	eb6a329e 	bl	1bc211c <$_RINTError(long)>
        1356a0:	e0871000 	add	r1, r7, r0
        1356a4:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        1356a8:	e1510002 	cmp	r1, r2
        1356ac:	c3a06f42 	movgt	r6, #264	; 0x108
        1356b0:	c2466b35 	subgt	r6, r6, #54272	; 0xd400
        1356b4:	e58d0004 	str	r0, [sp, #4]	; fField4
        1356b8:	ea000008 	b	1356e0 <TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x154>
        1356bc:	00684a60 	rsbeq	r4, r8, r0, ror #20
        1356c0:	00683b30 	rsbeq	r3, r8, r0, lsr fp
        1356c4:	00683500 	rsbeq	r3, r8, r0, lsl #10
        1356c8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1356cc:	e0400007 	sub	r0, r0, r7
        1356d0:	e58d0004 	str	r0, [sp, #4]	; fField4
        1356d4:	e3500000 	cmp	r0, #0	; 0x0
        1356d8:	d3a06f42 	movle	r6, #264	; 0x108
        1356dc:	d2466b35 	suble	r6, r6, #54272	; 0xd400
        1356e0:	e1a00009 	mov	r0, r9
        1356e4:	eb6a36b4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1356e8:	e59d0000 	ldr	r0, [sp]
        1356ec:	eb6a36b2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1356f0:	e28dd004 	add	sp, sp, #4	; 0x4
        1356f4:	e3360000 	teq	r6, #0	; 0x0
        1356f8:	1a000017 	bne	13575c <TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x1d0>
        1356fc:	e33a0000 	teq	sl, #0	; 0x0
        135700:	1a00000a 	bne	135730 <TNewScriptEndpointClient::OutputRaw(RefVar const &, RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x1a4>
        135704:	e2850028 	add	r0, r5, #40	; 0x28
        135708:	e1a06000 	mov	r6, r0
        13570c:	e5900000 	ldr	r0, [r0]
        135710:	e5900000 	ldr	r0, [r0]
        135714:	eb6a3ee4 	bl	1bc52ac <$Length(long)>
        135718:	e2401003 	sub	r1, r0, #3	; 0x3
        13571c:	e5940000 	ldr	r0, [r4]
        135720:	e5902000 	ldr	r2, [r0]
        135724:	e5960000 	ldr	r0, [r6]
        135728:	e5900000 	ldr	r0, [r0]
        13572c:	eb6a4309 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        135730:	e1a0200a 	mov	r2, sl
        135734:	e28b3018 	add	r3, fp, #24	; 0x18
        135738:	e893000a 	ldmia	r3, {r1, r3}
        13573c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        135740:	e5b50014 	ldr	r0, [r5, #20]!	; fField20
        135744:	e28d200c 	add	r2, sp, #12	; 0xc
        135748:	e1a01008 	mov	r1, r8
        13574c:	e59b3014 	ldr	r3, [fp, #20]	; fField20
        135750:	eb634f4d 	bl	1a0948c <TEndpoint::$nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        135754:	e28dd00c 	add	sp, sp, #12	; 0xc
        135758:	e1a06000 	mov	r6, r0
        13575c:	e3360000 	teq	r6, #0	; 0x0
        135760:	033a0000 	teqeq	sl, #0	; 0x0
        135764:	15940000 	ldrne	r0, [r4]
        135768:	15900000 	ldrne	r0, [r0]
        13576c:	1b6a4b3f 	blne	1bc8470 <$UnlockRef(long)>
        135770:	e1a00006 	mov	r0, r6
        135774:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::OutputFrame(RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)
 * Address: 00135778
 */
TNewScriptEndpointClient::OutputFrame(RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *) {
    /*
        135778:	e1a0c00d 	mov	ip, sp
        13577c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        135780:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        135784:	e24cb014 	sub	fp, ip, #20	; 0x14
        135788:	e1a04000 	mov	r4, r0
        13578c:	e1a05001 	mov	r5, r1
        135790:	e20280ff 	and	r8, r2, #255	; 0xff
        135794:	e3a06000 	mov	r6, #0	; 0x0
        135798:	e3a07000 	mov	r7, #0	; 0x0
        13579c:	e59b9018 	ldr	r9, [fp, #24]
        1357a0:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        1357a4:	e52d7004 	str	r7, [sp, -#4]!	; fField4
        1357a8:	e59000cc 	ldr	r0, [r0, #204]	; fField204
        1357ac:	e3300000 	teq	r0, #0	; 0x0
        1357b0:	1a000009 	bne	1357dc <TNewScriptEndpointClient::OutputFrame(RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x64>
        1357b4:	e28f1f25 	add	r1, pc, #148	; 0x94
        1357b8:	e28f0f27 	add	r0, pc, #156	; 0x9c
        1357bc:	eb6a88f2 	bl	1bd7b8c <$NewByName__FPCcT1>
        1357c0:	e3300000 	teq	r0, #0	; 0x0
        1357c4:	158400cc 	strne	r0, [r4, #204]	; fField204
        1357c8:	1a000001 	bne	1357d4 <TNewScriptEndpointClient::OutputFrame(RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x5c>
        1357cc:	eb6ab253 	bl	1be2120 <$MemError>
        1357d0:	e1a06000 	mov	r6, r0
        1357d4:	e3360000 	teq	r6, #0	; 0x0
        1357d8:	1a000040 	bne	1358e0 <TNewScriptEndpointClient::OutputFrame(RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x168>
        1357dc:	e3a00000 	mov	r0, #0	; 0x0
        1357e0:	e52d006c 	str	r0, [sp, -#108]!	; fField108
        1357e4:	e28d0008 	add	r0, sp, #8	; 0x8
        1357e8:	eb69f461 	bl	1bb2974 <$setjmp>
        1357ec:	e3300000 	teq	r0, #0	; 0x0
        1357f0:	1a00001c 	bne	135868 <TNewScriptEndpointClient::OutputFrame(RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0xf0>
        1357f4:	e1a0000d 	mov	r0, sp
        1357f8:	eb6aaa1f 	bl	1be007c <$AddExceptionHandler>
        1357fc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        135800:	e3a00002 	mov	r0, #2	; 0x2
        135804:	eb6a3250 	bl	1bc214c <$AllocateRefHandle(long)>
        135808:	e58d0000 	str	r0, [sp]
        13580c:	e5950000 	ldr	r0, [r5]
        135810:	e5900000 	ldr	r0, [r0]
        135814:	e59d1000 	ldr	r1, [sp]
        135818:	e5810000 	str	r0, [r1]
        13581c:	e3a00000 	mov	r0, #0	; 0x0
        135820:	e5cd0004 	strb	r0, [sp, #4]	; fField4
        135824:	e3a00004 	mov	r0, #4	; 0x4
        135828:	e58d0008 	str	r0, [sp, #8]
        13582c:	e1a0100d 	mov	r1, sp
        135830:	e3a02000 	mov	r2, #0	; 0x0
        135834:	e59400cc 	ldr	r0, [r4, #204]	; fField204
        135838:	eb69caf3 	bl	1ba840c <PFrameSink::$Translate(void *, PipeCallBack *)>
        13583c:	e1a07000 	mov	r7, r0
        135840:	e59d0000 	ldr	r0, [sp]
        135844:	eb6a365c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        135848:	e28dd00c 	add	sp, sp, #12	; 0xc
        13584c:	ea00000e 	b	13588c <TNewScriptEndpointClient::OutputFrame(RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x114>
        135850:	50466c61 	subpl	r6, r6, r1, ror #24
        135854:	7474656e 	ldrvcbt	r6, [r4], -#1390	; fField1390
        135858:	50747200 	rsbpls	r7, r4, r0, lsl #4
        13585c:	50467261 	subpl	r7, r6, r1, ror #4
        135860:	6d655369 	stcvsl	3, cr5, [r5, -#420]!
        135864:	6e6b0000 	cdpvs	0, 6, cr0, cr11, cr0, {0}
        135868:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        13586c:	e59f108c 	ldr	r1, [pc, #8c]	; 135900 <TNewScriptEndpointClient::OutputFrame(RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x188>
        135870:	e5911000 	ldr	r1, [r1]
        135874:	eb6ab646 	bl	1be3194 <$Subexception>
        135878:	e3300000 	teq	r0, #0	; 0x0
        13587c:	159d6064 	ldrne	r6, [sp, #100]	; fField100
        135880:	1a000001 	bne	13588c <TNewScriptEndpointClient::OutputFrame(RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x114>
        135884:	e1a0000d 	mov	r0, sp
        135888:	eb6ab231 	bl	1be2154 <$NextHandler>
        13588c:	e1a0000d 	mov	r0, sp
        135890:	eb6aae08 	bl	1be10b8 <$ExitHandler>
        135894:	e28dd06c 	add	sp, sp, #108	; 0x6c
        135898:	e3360000 	teq	r6, #0	; 0x0
        13589c:	1a00000f 	bne	1358e0 <TNewScriptEndpointClient::OutputFrame(RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x168>
        1358a0:	e1a00007 	mov	r0, r7
        1358a4:	eb6aae13 	bl	1be10f8 <$GetPtrSize>
        1358a8:	e58d0000 	str	r0, [sp]
        1358ac:	e2400004 	sub	r0, r0, #4	; 0x4
        1358b0:	e1a0100a 	mov	r1, sl
        1358b4:	e1a02008 	mov	r2, r8
        1358b8:	e1a03009 	mov	r3, r9
        1358bc:	e5870000 	str	r0, [r7]
        1358c0:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1358c4:	e5b40014 	ldr	r0, [r4, #20]!	; fField20
        1358c8:	e28d200c 	add	r2, sp, #12	; 0xc
        1358cc:	e1a01007 	mov	r1, r7
        1358d0:	e59b3010 	ldr	r3, [fp, #16]	; fField16
        1358d4:	eb634eec 	bl	1a0948c <TEndpoint::$nSnd(unsigned char *, long *, unsigned long, unsigned long, unsigned char, TOptionArray *)>
        1358d8:	e28dd00c 	add	sp, sp, #12	; 0xc
        1358dc:	e1a06000 	mov	r6, r0
        1358e0:	e3360000 	teq	r6, #0	; 0x0
        1358e4:	03380000 	teqeq	r8, #0	; 0x0
        1358e8:	0a000002 	beq	1358f8 <TNewScriptEndpointClient::OutputFrame(RefVar const &, unsigned char, unsigned long, unsigned long, TOptionArray *)+0x180>
        1358ec:	e3370000 	teq	r7, #0	; 0x0
        1358f0:	11a00007 	movne	r0, r7
        1358f4:	1b6a7417 	blne	1bd2958 <$free>
        1358f8:	e1a00006 	mov	r0, r6
        1358fc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        135900:	00371328 	eoreqs	r1, r7, r8, lsr #6
    */
}

/**
 * Symbol: TNewScriptEndpointClient::SndComplete(TEndpointEvent *)
 * Address: 00135904
 */
TNewScriptEndpointClient::SndComplete(TEndpointEvent *) {
    /*
        135904:	e1a0c00d 	mov	ip, sp
        135908:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        13590c:	e24cb004 	sub	fp, ip, #4	; 0x4
        135910:	e1a04000 	mov	r4, r0
        135914:	e1a05001 	mov	r5, r1
        135918:	e2800028 	add	r0, r0, #40	; 0x28
        13591c:	e1a07000 	mov	r7, r0
        135920:	e3a01000 	mov	r1, #0	; 0x0
        135924:	e5900000 	ldr	r0, [r0]
        135928:	e5900000 	ldr	r0, [r0]
        13592c:	eb6a3a48 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        135930:	eb6a3205 	bl	1bc214c <$AllocateRefHandle(long)>
        135934:	e1a06000 	mov	r6, r0
        135938:	e1a00007 	mov	r0, r7
        13593c:	e3a02001 	mov	r2, #1	; 0x1
        135940:	e3a01000 	mov	r1, #0	; 0x0
        135944:	eb6b4ac1 	bl	1c08450 <$ArrayRemoveCount__FRC6RefVarlT2>
        135948:	e5960000 	ldr	r0, [r6]
        13594c:	e3300002 	teq	r0, #2	; 0x2
        135950:	0a000001 	beq	13595c <TNewScriptEndpointClient::SndComplete(TEndpointEvent *)+0x58>
        135954:	eb6a4ac5 	bl	1bc8470 <$UnlockRef(long)>
        135958:	ea000009 	b	135984 <TNewScriptEndpointClient::SndComplete(TEndpointEvent *)+0x80>
        13595c:	e5950024 	ldr	r0, [r5, #36]	; fField36
        135960:	e3300000 	teq	r0, #0	; 0x0
        135964:	0a000003 	beq	135978 <TNewScriptEndpointClient::SndComplete(TEndpointEvent *)+0x74>
        135968:	e3a01001 	mov	r1, #1	; 0x1
        13596c:	e1a0e00f 	mov	lr, pc
        135970:	e590f000 	ldr	pc, [r0]
        135974:	ea000002 	b	135984 <TNewScriptEndpointClient::SndComplete(TEndpointEvent *)+0x80>
        135978:	e5950020 	ldr	r0, [r5, #32]	; fField32
        13597c:	e3300000 	teq	r0, #0	; 0x0
        135980:	1b6a73f4 	blne	1bd2958 <$free>
        135984:	e1a02007 	mov	r2, r7
        135988:	e1a00004 	mov	r0, r4
        13598c:	e5b51008 	ldr	r1, [r5, #8]!
        135990:	e5b53024 	ldr	r3, [r5, #36]!	; fField36
        135994:	eb660471 	bl	1ab6b60 <TNewScriptEndpointClient::$OptionCommandComplete(long, RefVar const &, TOptionArray *)>
        135998:	e1a00006 	mov	r0, r6
        13599c:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        1359a0:	ea6a3605 	b	1bc31bc <$DisposeRefHandle(RefHandle *)>
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoInputSpec(RefVar const &)
 * Address: 001359a4
 */
TNewScriptEndpointClient::DoInputSpec(RefVar const &) {
    /*
        1359a4:	e1a0c00d 	mov	ip, sp
        1359a8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1359ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1359b0:	e1a04000 	mov	r4, r0
        1359b4:	e1a05001 	mov	r5, r1
        1359b8:	e5d000b0 	ldrb	r0, [r0, #176]
        1359bc:	e3a07f41 	mov	r7, #260	; 0x104
        1359c0:	e2477b35 	sub	r7, r7, #54272	; 0xd400
        1359c4:	e1b06000 	movs	r6, r0
        1359c8:	11a06007 	movne	r6, r7
        1359cc:	e3360000 	teq	r6, #0	; 0x0
        1359d0:	1a00001e 	bne	135a50 <TNewScriptEndpointClient::DoInputSpec(RefVar const &)+0xac>
        1359d4:	e1a00004 	mov	r0, r4
        1359d8:	eb65d6e9 	bl	1aab584 <TNewScriptEndpointClient::$ClearInputSpec(void)>
        1359dc:	e5950000 	ldr	r0, [r5]
        1359e0:	e5900000 	ldr	r0, [r0]
        1359e4:	e3300002 	teq	r0, #2	; 0x2
        1359e8:	0a00001e 	beq	135a68 <TNewScriptEndpointClient::DoInputSpec(RefVar const &)+0xc4>
        1359ec:	e5941034 	ldr	r1, [r4, #52]	; fField52
        1359f0:	e5810000 	str	r0, [r1]
        1359f4:	e1a00004 	mov	r0, r4
        1359f8:	eb660879 	bl	1ab7be4 <TNewScriptEndpointClient::$ReadInputSlots(void)>
        1359fc:	e1b06000 	movs	r6, r0
        135a00:	1a000012 	bne	135a50 <TNewScriptEndpointClient::DoInputSpec(RefVar const &)+0xac>
        135a04:	e1a00004 	mov	r0, r4
        135a08:	eb65fc0f 	bl	1ab4a4c <TNewScriptEndpointClient::$InitInputBuffers(void)>
        135a0c:	e1b06000 	movs	r6, r0
        135a10:	1a00000e 	bne	135a50 <TNewScriptEndpointClient::DoInputSpec(RefVar const &)+0xac>
        135a14:	e1a00004 	mov	r0, r4
        135a18:	eb66085d 	bl	1ab7b94 <TNewScriptEndpointClient::$PostReceive(void)>
        135a1c:	e1a06000 	mov	r6, r0
        135a20:	e594104c 	ldr	r1, [r4, #76]	; fField76
        135a24:	e3510000 	cmp	r1, #0	; 0x0
        135a28:	9a000006 	bls	135a48 <TNewScriptEndpointClient::DoInputSpec(RefVar const &)+0xa4>
        135a2c:	e3360000 	teq	r6, #0	; 0x0
        135a30:	1a000004 	bne	135a48 <TNewScriptEndpointClient::DoInputSpec(RefVar const &)+0xa4>
        135a34:	e1a00004 	mov	r0, r4
        135a38:	e3a02066 	mov	r2, #102	; 0x66
        135a3c:	e2822c0e 	add	r2, r2, #3584	; 0xe00
        135a40:	eb6adf10 	bl	1bed688 <TAEventHandler::$ResetIdle(unsigned long, TimeUnits)>
        135a44:	ea000010 	b	135a8c <TNewScriptEndpointClient::DoInputSpec(RefVar const &)+0xe8>
        135a48:	e1a00004 	mov	r0, r4
        135a4c:	eb6adf26 	bl	1bed6ec <TAEventHandler::$StopIdle(void)>
        135a50:	e3360000 	teq	r6, #0	; 0x0
        135a54:	11360007 	teqne	r6, r7
        135a58:	0a00000b 	beq	135a8c <TNewScriptEndpointClient::DoInputSpec(RefVar const &)+0xe8>
        135a5c:	e1a00004 	mov	r0, r4
        135a60:	eb65d6c7 	bl	1aab584 <TNewScriptEndpointClient::$ClearInputSpec(void)>
        135a64:	ea000006 	b	135a84 <TNewScriptEndpointClient::DoInputSpec(RefVar const &)+0xe0>
        135a68:	e3a05000 	mov	r5, #0	; 0x0
        135a6c:	e594009c 	ldr	r0, [r4, #156]	; fField156
        135a70:	e3300000 	teq	r0, #0	; 0x0
        135a74:	0a000001 	beq	135a80 <TNewScriptEndpointClient::DoInputSpec(RefVar const &)+0xdc>
        135a78:	eb6a73b6 	bl	1bd2958 <$free>
        135a7c:	e584509c 	str	r5, [r4, #156]	; fField156
        135a80:	e58450a0 	str	r5, [r4, #160]	; fField160
        135a84:	e1a00004 	mov	r0, r4
        135a88:	eb6adf17 	bl	1bed6ec <TAEventHandler::$StopIdle(void)>
        135a8c:	e1a00006 	mov	r0, r6
        135a90:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::PostReceive(void)
 * Address: 00135a94
 */
TNewScriptEndpointClient::PostReceive(void) {
    /*
        135a94:	e1a0c00d 	mov	ip, sp
        135a98:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        135a9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        135aa0:	e1a04000 	mov	r4, r0
        135aa4:	e3a05000 	mov	r5, #0	; 0x0
        135aa8:	e52d5004 	str	r5, [sp, -#4]!	; fField4
        135aac:	e5d000b0 	ldrb	r0, [r0, #176]
        135ab0:	e3300000 	teq	r0, #0	; 0x0
        135ab4:	05d400b1 	ldreqb	r0, [r4, #177]	; fField177
        135ab8:	03300000 	teqeq	r0, #0	; 0x0
        135abc:	1a000070 	bne	135c84 <TNewScriptEndpointClient::PostReceive(void)+0x1f0>
        135ac0:	e24dd004 	sub	sp, sp, #4	; 0x4
        135ac4:	e5940020 	ldr	r0, [r4, #32]	; fField32
        135ac8:	e58d0000 	str	r0, [sp]
        135acc:	e3a06000 	mov	r6, #0	; 0x0
        135ad0:	e5940060 	ldr	r0, [r4, #96]	; fField96
        135ad4:	e3300000 	teq	r0, #0	; 0x0
        135ad8:	1a00000a 	bne	135b08 <TNewScriptEndpointClient::PostReceive(void)+0x74>
        135adc:	e284005c 	add	r0, r4, #92	; 0x5c
        135ae0:	e1a01000 	mov	r1, r0
        135ae4:	e5900000 	ldr	r0, [r0]
        135ae8:	e5900000 	ldr	r0, [r0]
        135aec:	e3300002 	teq	r0, #2	; 0x2
        135af0:	0a000004 	beq	135b08 <TNewScriptEndpointClient::PostReceive(void)+0x74>
        135af4:	e28d2004 	add	r2, sp, #4	; 0x4
        135af8:	e1a00004 	mov	r0, r4
        135afc:	eb660825 	bl	1ab7b98 <TNewScriptEndpointClient::$PrepOptions(RefVar const &, TOptionArray **)>
        135b00:	e1b05000 	movs	r5, r0
        135b04:	1a000055 	bne	135c60 <TNewScriptEndpointClient::PostReceive(void)+0x1cc>
        135b08:	e5d40064 	ldrb	r0, [r4, #100]	; fField100
        135b0c:	e3a07001 	mov	r7, #1	; 0x1
        135b10:	e3300000 	teq	r0, #0	; 0x0
        135b14:	0a000027 	beq	135bb8 <TNewScriptEndpointClient::PostReceive(void)+0x124>
        135b18:	e2840068 	add	r0, r4, #104	; 0x68
        135b1c:	e1a05000 	mov	r5, r0
        135b20:	e5900000 	ldr	r0, [r0]
        135b24:	e5900000 	ldr	r0, [r0]
        135b28:	e3300002 	teq	r0, #2	; 0x2
        135b2c:	0a00001d 	beq	135ba8 <TNewScriptEndpointClient::PostReceive(void)+0x114>
        135b30:	e1a00005 	mov	r0, r5
        135b34:	eb663179 	bl	1ac2120 <$IsRawOrString(RefVar const &)>
        135b38:	e3300000 	teq	r0, #0	; 0x0
        135b3c:	0a000019 	beq	135ba8 <TNewScriptEndpointClient::PostReceive(void)+0x114>
        135b40:	e5950000 	ldr	r0, [r5]
        135b44:	e5900000 	ldr	r0, [r0]
        135b48:	eb6a3dd9 	bl	1bc52b4 <$LockRef(long)>
        135b4c:	e24dd004 	sub	sp, sp, #4	; 0x4
        135b50:	e5940038 	ldr	r0, [r4, #56]	; fField56
        135b54:	e58d0000 	str	r0, [sp]
        135b58:	e5c470b0 	strb	r7, [r4, #176]
        135b5c:	e5950000 	ldr	r0, [r5]
        135b60:	e5900000 	ldr	r0, [r0]
        135b64:	eb6a317c 	bl	1bc215c <$BinaryData(long)>
        135b68:	e594106c 	ldr	r1, [r4, #108]	; fField108
        135b6c:	e080c001 	add	ip, r0, r1
        135b70:	e28d0004 	add	r0, sp, #4	; 0x4
        135b74:	e5941048 	ldr	r1, [r4, #72]
        135b78:	e594e038 	ldr	lr, [r4, #56]	; fField56
        135b7c:	e1a02006 	mov	r2, r6
        135b80:	e59d3008 	ldr	r3, [sp, #8]
        135b84:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        135b88:	e1a0300e 	mov	r3, lr
        135b8c:	e28d2010 	add	r2, sp, #16	; 0x10
        135b90:	e1a0100c 	mov	r1, ip
        135b94:	e5940014 	ldr	r0, [r4, #20]	; fField20
        135b98:	eb6b24de 	bl	1bfef18 <TEndpoint::$nRcv(unsigned char *, long *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
        135b9c:	e1a05000 	mov	r5, r0
        135ba0:	e28dd014 	add	sp, sp, #20	; 0x14
        135ba4:	ea00002d 	b	135c60 <TNewScriptEndpointClient::PostReceive(void)+0x1cc>
        135ba8:	e3a05006 	mov	r5, #6	; 0x6
        135bac:	e2455cd3 	sub	r5, r5, #54016	; 0xd300
        135bb0:	e28dd004 	add	sp, sp, #4	; 0x4
        135bb4:	ea00002c 	b	135c6c <TNewScriptEndpointClient::PostReceive(void)+0x1d8>
        135bb8:	e2840074 	add	r0, r4, #116	; 0x74
        135bbc:	e1a05000 	mov	r5, r0
        135bc0:	e5901000 	ldr	r1, [r0]
        135bc4:	e1a0e00f 	mov	lr, pc
        135bc8:	e281f028 	add	pc, r1, #40	; 0x28
        135bcc:	e3a0c001 	mov	ip, #1	; 0x1
        135bd0:	e5d40070 	ldrb	r0, [r4, #112]
        135bd4:	e3300000 	teq	r0, #0	; 0x0
        135bd8:	0a000009 	beq	135c04 <TNewScriptEndpointClient::PostReceive(void)+0x170>
        135bdc:	e5940038 	ldr	r0, [r4, #56]	; fField56
        135be0:	e3500000 	cmp	r0, #0	; 0x0
        135be4:	da000006 	ble	135c04 <TNewScriptEndpointClient::PostReceive(void)+0x170>
        135be8:	e5940040 	ldr	r0, [r4, #64]	; fField64
        135bec:	e5900000 	ldr	r0, [r0]
        135bf0:	e3300002 	teq	r0, #2	; 0x2
        135bf4:	0594004c 	ldreq	r0, [r4, #76]	; fField76
        135bf8:	03300000 	teqeq	r0, #0	; 0x0
        135bfc:	03a00001 	moveq	r0, #1	; 0x1
        135c00:	0a000000 	beq	135c08 <TNewScriptEndpointClient::PostReceive(void)+0x174>
        135c04:	e3a00000 	mov	r0, #0	; 0x0
        135c08:	e5c40070 	strb	r0, [r4, #112]
        135c0c:	e31000ff 	tst	r0, #255	; 0xff
        135c10:	0a000006 	beq	135c30 <TNewScriptEndpointClient::PostReceive(void)+0x19c>
        135c14:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        135c18:	e5941038 	ldr	r1, [r4, #56]	; fField56
        135c1c:	e0410000 	sub	r0, r1, r0
        135c20:	e3a01c02 	mov	r1, #512	; 0x200
        135c24:	e3500c02 	cmp	r0, #512	; 0x200
        135c28:	a1a00001 	movge	r0, r1
        135c2c:	e1a0c000 	mov	ip, r0
        135c30:	e5c470b0 	strb	r7, [r4, #176]
        135c34:	e5941048 	ldr	r1, [r4, #72]
        135c38:	e1a02006 	mov	r2, r6
        135c3c:	e59d3004 	ldr	r3, [sp, #4]	; fField4
        135c40:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        135c44:	e28d300c 	add	r3, sp, #12	; 0xc
        135c48:	e1a0200c 	mov	r2, ip
        135c4c:	e1a01005 	mov	r1, r5
        135c50:	e5940014 	ldr	r0, [r4, #20]	; fField20
        135c54:	eb634e09 	bl	1a09480 <TEndpoint::$nRcv(CBufferSegment *, long, unsigned long *, unsigned long, unsigned char, TOptionArray *)>
        135c58:	e28dd00c 	add	sp, sp, #12	; 0xc
        135c5c:	e1a05000 	mov	r5, r0
        135c60:	e28dd004 	add	sp, sp, #4	; 0x4
        135c64:	e3350000 	teq	r5, #0	; 0x0
        135c68:	0a000005 	beq	135c84 <TNewScriptEndpointClient::PostReceive(void)+0x1f0>
        135c6c:	e5c460b0 	strb	r6, [r4, #176]
        135c70:	e3350000 	teq	r5, #0	; 0x0
        135c74:	159d0000 	ldrne	r0, [sp]
        135c78:	13300000 	teqne	r0, #0	; 0x0
        135c7c:	13a01001 	movne	r1, #1	; 0x1
        135c80:	1b6a03a9 	blne	1bb6b2c <TOptionArray::$__dt(void)>
        135c84:	e1a00005 	mov	r0, r5
        135c88:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::ClearInputSpec(void)
 * Address: 00135c8c
 */
TNewScriptEndpointClient::ClearInputSpec(void) {
    /*
        135c8c:	e3a01002 	mov	r1, #2	; 0x2
        135c90:	e5902034 	ldr	r2, [r0, #52]	; fField52
        135c94:	e5821000 	str	r1, [r2]
        135c98:	e5902040 	ldr	r2, [r0, #64]	; fField64
        135c9c:	e5821000 	str	r1, [r2]
        135ca0:	e5902050 	ldr	r2, [r0, #80]	; fField80
        135ca4:	e5821000 	str	r1, [r2]
        135ca8:	e5902054 	ldr	r2, [r0, #84]	; fField84
        135cac:	e5821000 	str	r1, [r2]
        135cb0:	e3a02000 	mov	r2, #0	; 0x0
        135cb4:	e5802038 	str	r2, [r0, #56]	; fField56
        135cb8:	e580204c 	str	r2, [r0, #76]	; fField76
        135cbc:	e5c02058 	strb	r2, [r0, #88]	; fField88
        135cc0:	e590205c 	ldr	r2, [r0, #92]	; fField92
        135cc4:	e5821000 	str	r1, [r2]
        135cc8:	e5801060 	str	r1, [r0, #96]	; fField96
        135ccc:	e3a01003 	mov	r1, #3	; 0x3
        135cd0:	e5a010b4 	str	r1, [r0, #180]!	; fField180
        135cd4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewScriptEndpointClient::ReadInputSlots(void)
 * Address: 00135cd8
 */
TNewScriptEndpointClient::ReadInputSlots(void) {
    /*
        135cd8:	e1a0c00d 	mov	ip, sp
        135cdc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        135ce0:	e24cb004 	sub	fp, ip, #4	; 0x4
        135ce4:	e1a04000 	mov	r4, r0
        135ce8:	e24dd008 	sub	sp, sp, #8	; 0x8
        135cec:	e3a05000 	mov	r5, #0	; 0x0
        135cf0:	e3a08002 	mov	r8, #2	; 0x2
        135cf4:	e1a00008 	mov	r0, r8
        135cf8:	eb6a3113 	bl	1bc214c <$AllocateRefHandle(long)>
        135cfc:	e58d0004 	str	r0, [sp, #4]	; fField4
        135d00:	e2840034 	add	r0, r4, #52	; 0x34
        135d04:	e1a06000 	mov	r6, r0
        135d08:	e59f1084 	ldr	r1, [pc, #84]	; 135d94 <TNewScriptEndpointClient::ReadInputSlots(void)+0xbc>	; fField84
        135d0c:	e3a03000 	mov	r3, #0	; 0x0
        135d10:	e3a02000 	mov	r2, #0	; 0x0
        135d14:	eb6a3956 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        135d18:	eb6a310b 	bl	1bc214c <$AllocateRefHandle(long)>
        135d1c:	e58d0000 	str	r0, [sp]
        135d20:	e1a0000d 	mov	r0, sp
        135d24:	e3a01001 	mov	r1, #1	; 0x1
        135d28:	eb662cea 	bl	1ac10d8 <$GetDataForm(RefVar const &, FormUser)>
        135d2c:	e58400b4 	str	r0, [r4, #180]	; fField180
        135d30:	e59d0000 	ldr	r0, [sp]
        135d34:	eb6a3520 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        135d38:	e3a07000 	mov	r7, #0	; 0x0
        135d3c:	e59400b4 	ldr	r0, [r4, #180]	; fField180
        135d40:	e3300000 	teq	r0, #0	; 0x0
        135d44:	059f504c 	ldreq	r5, [pc, #4c]	; 135d98 <TNewScriptEndpointClient::ReadInputSlots(void)+0xc0>	; fField4
        135d48:	0a00001e 	beq	135dc8 <TNewScriptEndpointClient::ReadInputSlots(void)+0xf0>
        135d4c:	e1a00006 	mov	r0, r6
        135d50:	e59f1044 	ldr	r1, [pc, #44]	; 135d9c <TNewScriptEndpointClient::ReadInputSlots(void)+0xc4>	; fField44
        135d54:	e3a03000 	mov	r3, #0	; 0x0
        135d58:	e3a02000 	mov	r2, #0	; 0x0
        135d5c:	eb6a3944 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        135d60:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        135d64:	e5810000 	str	r0, [r1]
        135d68:	e3300002 	teq	r0, #2	; 0x2
        135d6c:	0a00000b 	beq	135da0 <TNewScriptEndpointClient::ReadInputSlots(void)+0xc8>
        135d70:	e28d0004 	add	r0, sp, #4	; 0x4
        135d74:	eb6af705 	bl	1bf3990 <$IsFrame(RefVar const &)>
        135d78:	e3300000 	teq	r0, #0	; 0x0
        135d7c:	0a000007 	beq	135da0 <TNewScriptEndpointClient::ReadInputSlots(void)+0xc8>
        135d80:	e28d1004 	add	r1, sp, #4	; 0x4
        135d84:	e1a00004 	mov	r0, r4
        135d88:	eb660b9d 	bl	1ab8c04 <TNewScriptEndpointClient::$ReadTarget(RefVar const &)>
        135d8c:	e1a05000 	mov	r5, r0
        135d90:	ea00000c 	b	135dc8 <TNewScriptEndpointClient::ReadInputSlots(void)+0xf0>
        135d94:	00682e68 	rsbeq	r2, r8, r8, ror #28
        135d98:	ffff2d0f 	swinv	0x00ff2d0f
        135d9c:	00684a60 	rsbeq	r4, r8, r0, ror #20
        135da0:	e5940068 	ldr	r0, [r4, #104]	; fField104
        135da4:	e5808000 	str	r8, [r0]
        135da8:	e59400b4 	ldr	r0, [r4, #180]	; fField180
        135dac:	e3300008 	teq	r0, #8	; 0x8
        135db0:	03a05005 	moveq	r5, #5	; 0x5
        135db4:	02455cd3 	subeq	r5, r5, #54016	; 0xd300
        135db8:	0a000002 	beq	135dc8 <TNewScriptEndpointClient::ReadInputSlots(void)+0xf0>
        135dbc:	e3300006 	teq	r0, #6	; 0x6
        135dc0:	03a05006 	moveq	r5, #6	; 0x6
        135dc4:	02455cd3 	subeq	r5, r5, #54016	; 0xd300
        135dc8:	e1a00006 	mov	r0, r6
        135dcc:	e59f1040 	ldr	r1, [pc, #40]	; 135e14 <TNewScriptEndpointClient::ReadInputSlots(void)+0x13c>	; fField40
        135dd0:	e3a03000 	mov	r3, #0	; 0x0
        135dd4:	e3a02000 	mov	r2, #0	; 0x0
        135dd8:	eb6a3925 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        135ddc:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        135de0:	e5810000 	str	r0, [r1]
        135de4:	e2001003 	and	r1, r0, #3	; 0x3
        135de8:	e3a09001 	mov	r9, #1	; 0x1
        135dec:	e3510000 	cmp	r1, #0	; 0x0
        135df0:	1a000008 	bne	135e18 <TNewScriptEndpointClient::ReadInputSlots(void)+0x140>
        135df4:	01a00140 	moveq	r0, r0, asr #2
        135df8:	0a000000 	beq	135e00 <TNewScriptEndpointClient::ReadInputSlots(void)+0x128>
        135dfc:	eb6a30c6 	bl	1bc211c <$_RINTError(long)>
        135e00:	e5840020 	str	r0, [r4, #32]	; fField32
        135e04:	e3100002 	tst	r0, #2	; 0x2
        135e08:	05c47024 	streqb	r7, [r4, #36]	; fField36
        135e0c:	15c49024 	strneb	r9, [r4, #36]	; fField36
        135e10:	ea000001 	b	135e1c <TNewScriptEndpointClient::ReadInputSlots(void)+0x144>
        135e14:	00684100 	rsbeq	r4, r8, r0, lsl #2
        135e18:	e5847020 	str	r7, [r4, #32]	; fField32
        135e1c:	e3350000 	teq	r5, #0	; 0x0
        135e20:	1a000029 	bne	135ecc <TNewScriptEndpointClient::ReadInputSlots(void)+0x1f4>
        135e24:	e1a00006 	mov	r0, r6
        135e28:	e59f103c 	ldr	r1, [pc, #3c]	; 135e6c <TNewScriptEndpointClient::ReadInputSlots(void)+0x194>
        135e2c:	e3a03000 	mov	r3, #0	; 0x0
        135e30:	e3a02000 	mov	r2, #0	; 0x0
        135e34:	eb6a390e 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        135e38:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        135e3c:	e5810000 	str	r0, [r1]
        135e40:	e3300002 	teq	r0, #2	; 0x2
        135e44:	0a000009 	beq	135e70 <TNewScriptEndpointClient::ReadInputSlots(void)+0x198>
        135e48:	e28d0004 	add	r0, sp, #4	; 0x4
        135e4c:	eb6af6cf 	bl	1bf3990 <$IsFrame(RefVar const &)>
        135e50:	e3300000 	teq	r0, #0	; 0x0
        135e54:	0a000005 	beq	135e70 <TNewScriptEndpointClient::ReadInputSlots(void)+0x198>
        135e58:	e28d1004 	add	r1, sp, #4	; 0x4
        135e5c:	e1a00004 	mov	r0, r4
        135e60:	eb660b68 	bl	1ab8c08 <TNewScriptEndpointClient::$ReadTermination(RefVar const &)>
        135e64:	e1a05000 	mov	r5, r0
        135e68:	ea000017 	b	135ecc <TNewScriptEndpointClient::ReadInputSlots(void)+0x1f4>
        135e6c:	00684aa0 	rsbeq	r4, r8, r0, lsr #21
        135e70:	e59400b4 	ldr	r0, [r4, #180]	; fField180
        135e74:	e3300003 	teq	r0, #3	; 0x3
        135e78:	13300005 	teqne	r0, #5	; 0x5
        135e7c:	13e00102 	mvnne	r0, #-2147483648	; 0x80000000
        135e80:	1a00000d 	bne	135ebc <TNewScriptEndpointClient::ReadInputSlots(void)+0x1e4>
        135e84:	e1a00006 	mov	r0, r6
        135e88:	e59f1104 	ldr	r1, [pc, #104]	; 135f94 <TNewScriptEndpointClient::ReadInputSlots(void)+0x2bc>	; fField104
        135e8c:	e3a03000 	mov	r3, #0	; 0x0
        135e90:	e3a02000 	mov	r2, #0	; 0x0
        135e94:	eb6a38f6 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        135e98:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        135e9c:	e5810000 	str	r0, [r1]
        135ea0:	e2001003 	and	r1, r0, #3	; 0x3
        135ea4:	e3510000 	cmp	r1, #0	; 0x0
        135ea8:	13a00b01 	movne	r0, #1024	; 0x400
        135eac:	1a000002 	bne	135ebc <TNewScriptEndpointClient::ReadInputSlots(void)+0x1e4>
        135eb0:	01a00140 	moveq	r0, r0, asr #2
        135eb4:	0a000000 	beq	135ebc <TNewScriptEndpointClient::ReadInputSlots(void)+0x1e4>
        135eb8:	eb6a3097 	bl	1bc211c <$_RINTError(long)>
        135ebc:	e584003c 	str	r0, [r4, #60]	; fField60
        135ec0:	e5847038 	str	r7, [r4, #56]	; fField56
        135ec4:	e5940040 	ldr	r0, [r4, #64]	; fField64
        135ec8:	e5808000 	str	r8, [r0]
        135ecc:	e1a00006 	mov	r0, r6
        135ed0:	e59f10c0 	ldr	r1, [pc, #c0]	; 135f98 <TNewScriptEndpointClient::ReadInputSlots(void)+0x2c0>
        135ed4:	e3a03000 	mov	r3, #0	; 0x0
        135ed8:	e3a02000 	mov	r2, #0	; 0x0
        135edc:	eb6a38e4 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        135ee0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        135ee4:	e5810000 	str	r0, [r1]
        135ee8:	e3300002 	teq	r0, #2	; 0x2
        135eec:	05c47070 	streqb	r7, [r4, #112]
        135ef0:	15c49070 	strneb	r9, [r4, #112]
        135ef4:	e3350000 	teq	r5, #0	; 0x0
        135ef8:	1a000010 	bne	135f40 <TNewScriptEndpointClient::ReadInputSlots(void)+0x268>
        135efc:	e1a00006 	mov	r0, r6
        135f00:	e59f1094 	ldr	r1, [pc, #94]	; 135f9c <TNewScriptEndpointClient::ReadInputSlots(void)+0x2c4>
        135f04:	e3a03000 	mov	r3, #0	; 0x0
        135f08:	e3a02000 	mov	r2, #0	; 0x0
        135f0c:	eb6a38d8 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        135f10:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        135f14:	e5810000 	str	r0, [r1]
        135f18:	e3300002 	teq	r0, #2	; 0x2
        135f1c:	0a000020 	beq	135fa4 <TNewScriptEndpointClient::ReadInputSlots(void)+0x2cc>
        135f20:	e28d0004 	add	r0, sp, #4	; 0x4
        135f24:	eb6af699 	bl	1bf3990 <$IsFrame(RefVar const &)>
        135f28:	e3300000 	teq	r0, #0	; 0x0
        135f2c:	0a00001c 	beq	135fa4 <TNewScriptEndpointClient::ReadInputSlots(void)+0x2cc>
        135f30:	e28d1004 	add	r1, sp, #4	; 0x4
        135f34:	e1a00004 	mov	r0, r4
        135f38:	eb660727 	bl	1ab7bdc <TNewScriptEndpointClient::$ReadFilter(RefVar const &)>
        135f3c:	e1a05000 	mov	r5, r0
        135f40:	e3350000 	teq	r5, #0	; 0x0
        135f44:	1a00004c 	bne	13607c <TNewScriptEndpointClient::ReadInputSlots(void)+0x3a4>
        135f48:	e24dd004 	sub	sp, sp, #4	; 0x4
        135f4c:	e1a00006 	mov	r0, r6
        135f50:	e59f1048 	ldr	r1, [pc, #48]	; 135fa0 <TNewScriptEndpointClient::ReadInputSlots(void)+0x2c8>	; fField48
        135f54:	e3a03000 	mov	r3, #0	; 0x0
        135f58:	e3a02000 	mov	r2, #0	; 0x0
        135f5c:	eb6a38c4 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        135f60:	eb6a3079 	bl	1bc214c <$AllocateRefHandle(long)>
        135f64:	e58d0000 	str	r0, [sp]
        135f68:	e5901000 	ldr	r1, [r0]
        135f6c:	e284005c 	add	r0, r4, #92	; 0x5c
        135f70:	e3310002 	teq	r1, #2	; 0x2
        135f74:	0a000010 	beq	135fbc <TNewScriptEndpointClient::ReadInputSlots(void)+0x2e4>
        135f78:	e1a08000 	mov	r8, r0
        135f7c:	e1a0000d 	mov	r0, sp
        135f80:	eb65d581 	bl	1aab58c <$CloneOptions(RefVar const &)>
        135f84:	e5981000 	ldr	r1, [r8]
        135f88:	e5810000 	str	r0, [r1]
        135f8c:	e5847060 	str	r7, [r4, #96]	; fField96
        135f90:	ea00000b 	b	135fc4 <TNewScriptEndpointClient::ReadInputSlots(void)+0x2ec>
        135f94:	00682998 	streqb	r2, [r8], -#152
        135f98:	00683b70 	rsbeq	r3, r8, r0, ror fp
        135f9c:	00682d88 	rsbeq	r2, r8, r8, lsl #27
        135fa0:	00684108 	rsbeq	r4, r8, r8, lsl #2
        135fa4:	e5940050 	ldr	r0, [r4, #80]	; fField80
        135fa8:	e5808000 	str	r8, [r0]
        135fac:	e5940054 	ldr	r0, [r4, #84]	; fField84
        135fb0:	e5808000 	str	r8, [r0]
        135fb4:	e5c47058 	strb	r7, [r4, #88]	; fField88
        135fb8:	eaffffe2 	b	135f48 <TNewScriptEndpointClient::ReadInputSlots(void)+0x270>
        135fbc:	e5900000 	ldr	r0, [r0]
        135fc0:	e5808000 	str	r8, [r0]
        135fc4:	e1a00006 	mov	r0, r6
        135fc8:	e59f1048 	ldr	r1, [pc, #48]	; 136018 <TNewScriptEndpointClient::ReadInputSlots(void)+0x340>	; fField48
        135fcc:	e3a03000 	mov	r3, #0	; 0x0
        135fd0:	e3a02000 	mov	r2, #0	; 0x0
        135fd4:	eb6a38a6 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        135fd8:	e59d1008 	ldr	r1, [sp, #8]
        135fdc:	e5810000 	str	r0, [r1]
        135fe0:	e2101003 	ands	r1, r0, #3	; 0x3
        135fe4:	1a00000c 	bne	13601c <TNewScriptEndpointClient::ReadInputSlots(void)+0x344>
        135fe8:	e59420b4 	ldr	r2, [r4, #180]	; fField180
        135fec:	e3320003 	teq	r2, #3	; 0x3
        135ff0:	13320005 	teqne	r2, #5	; 0x5
        135ff4:	13a0500a 	movne	r5, #10	; 0xa
        135ff8:	12455cd3 	subne	r5, r5, #54016	; 0xd300
        135ffc:	1a000007 	bne	136020 <TNewScriptEndpointClient::ReadInputSlots(void)+0x348>
        136000:	e3310000 	teq	r1, #0	; 0x0
        136004:	01a00140 	moveq	r0, r0, asr #2
        136008:	0a000000 	beq	136010 <TNewScriptEndpointClient::ReadInputSlots(void)+0x338>
        13600c:	eb6a3042 	bl	1bc211c <$_RINTError(long)>
        136010:	e584004c 	str	r0, [r4, #76]	; fField76
        136014:	ea000001 	b	136020 <TNewScriptEndpointClient::ReadInputSlots(void)+0x348>
        136018:	00683d08 	rsbeq	r3, r8, r8, lsl #26
        13601c:	e584704c 	str	r7, [r4, #76]	; fField76
        136020:	e1a00006 	mov	r0, r6
        136024:	e59f103c 	ldr	r1, [pc, #3c]	; 136068 <TNewScriptEndpointClient::ReadInputSlots(void)+0x390>
        136028:	e3a03000 	mov	r3, #0	; 0x0
        13602c:	e3a02000 	mov	r2, #0	; 0x0
        136030:	eb6a388f 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        136034:	e59d1008 	ldr	r1, [sp, #8]
        136038:	e5810000 	str	r0, [r1]
        13603c:	e2001003 	and	r1, r0, #3	; 0x3
        136040:	e3510000 	cmp	r1, #0	; 0x0
        136044:	1a000008 	bne	13606c <TNewScriptEndpointClient::ReadInputSlots(void)+0x394>
        136048:	01a00140 	moveq	r0, r0, asr #2
        13604c:	0a000000 	beq	136054 <TNewScriptEndpointClient::ReadInputSlots(void)+0x37c>
        136050:	eb6a3031 	bl	1bc211c <$_RINTError(long)>
        136054:	e3a0c066 	mov	ip, #102	; 0x66
        136058:	e28ccc0e 	add	ip, ip, #3584	; 0xe00
        13605c:	e000009c 	mul	r0, ip, r0
        136060:	e5a40048 	str	r0, [r4, #72]!
        136064:	ea000001 	b	136070 <TNewScriptEndpointClient::ReadInputSlots(void)+0x398>
        136068:	00684310 	rsbeq	r4, r8, r0, lsl r3
        13606c:	e5a47048 	str	r7, [r4, #72]!
        136070:	e59d0000 	ldr	r0, [sp]
        136074:	eb6a3450 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136078:	e28dd004 	add	sp, sp, #4	; 0x4
        13607c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        136080:	eb6a344d 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136084:	e1a00005 	mov	r0, r5
        136088:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::ReadTermination(RefVar const &)
 * Address: 0013608c
 */
TNewScriptEndpointClient::ReadTermination(RefVar const &) {
    /*
        13608c:	e1a0c00d 	mov	ip, sp
        136090:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        136094:	e24cb004 	sub	fp, ip, #4	; 0x4
        136098:	e1a04000 	mov	r4, r0
        13609c:	e1a05001 	mov	r5, r1
        1360a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1360a4:	e3a06000 	mov	r6, #0	; 0x0
        1360a8:	e3a08002 	mov	r8, #2	; 0x2
        1360ac:	e1a00008 	mov	r0, r8
        1360b0:	eb6a3025 	bl	1bc214c <$AllocateRefHandle(long)>
        1360b4:	e58d0000 	str	r0, [sp]
        1360b8:	e3a07009 	mov	r7, #9	; 0x9
        1360bc:	e2477cd3 	sub	r7, r7, #54016	; 0xd300
        1360c0:	e3a09000 	mov	r9, #0	; 0x0
        1360c4:	e59400b4 	ldr	r0, [r4, #180]	; fField180
        1360c8:	e3300003 	teq	r0, #3	; 0x3
        1360cc:	13300005 	teqne	r0, #5	; 0x5
        1360d0:	13300006 	teqne	r0, #6	; 0x6
        1360d4:	1a000081 	bne	1362e0 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x254>
        1360d8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1360dc:	e1a0200d 	mov	r2, sp
        1360e0:	e59f1034 	ldr	r1, [pc, #34]	; 13611c <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x90>
        1360e4:	e1a00005 	mov	r0, r5
        1360e8:	e3a03000 	mov	r3, #0	; 0x0
        1360ec:	eb6a3860 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1360f0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1360f4:	e5810000 	str	r0, [r1]
        1360f8:	e59d1000 	ldr	r1, [sp]
        1360fc:	e3310000 	teq	r1, #0	; 0x0
        136100:	0a000008 	beq	136128 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x9c>
        136104:	e5941020 	ldr	r1, [r4, #32]	; fField32
        136108:	e3110002 	tst	r1, #2	; 0x2
        13610c:	0a000003 	beq	136120 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x94>
        136110:	e3300002 	teq	r0, #2	; 0x2
        136114:	05c49024 	streqb	r9, [r4, #36]	; fField36
        136118:	ea000002 	b	136128 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x9c>
        13611c:	00684db0 	streqh	r4, [r8], -#208	; fField208
        136120:	e3300002 	teq	r0, #2	; 0x2
        136124:	1a000034 	bne	1361fc <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x170>
        136128:	e59f1038 	ldr	r1, [pc, #38]	; 136168 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0xdc>
        13612c:	e1a00005 	mov	r0, r5
        136130:	e3a03000 	mov	r3, #0	; 0x0
        136134:	e3a02000 	mov	r2, #0	; 0x0
        136138:	eb6a384d 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        13613c:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        136140:	e5810000 	str	r0, [r1]
        136144:	e2001003 	and	r1, r0, #3	; 0x3
        136148:	e3510000 	cmp	r1, #0	; 0x0
        13614c:	1a000006 	bne	13616c <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0xe0>
        136150:	01a00140 	moveq	r0, r0, asr #2
        136154:	0a000000 	beq	13615c <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0xd0>
        136158:	eb6a2fef 	bl	1bc211c <$_RINTError(long)>
        13615c:	e5840038 	str	r0, [r4, #56]	; fField56
        136160:	e3e00102 	mvn	r0, #-2147483648	; 0x80000000
        136164:	ea000011 	b	1361b0 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x124>
        136168:	00682250 	rsbeq	r2, r8, r0, asr r2
        13616c:	e5849038 	str	r9, [r4, #56]	; fField56
        136170:	e2840034 	add	r0, r4, #52	; 0x34
        136174:	e59f1088 	ldr	r1, [pc, #88]	; 136204 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x178>	; fField88
        136178:	e3a03000 	mov	r3, #0	; 0x0
        13617c:	e3a02000 	mov	r2, #0	; 0x0
        136180:	eb6a383b 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        136184:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        136188:	e5810000 	str	r0, [r1]
        13618c:	e1a01000 	mov	r1, r0
        136190:	e2000003 	and	r0, r0, #3	; 0x3
        136194:	e3500000 	cmp	r0, #0	; 0x0
        136198:	13a00b01 	movne	r0, #1024	; 0x400
        13619c:	1a000003 	bne	1361b0 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x124>
        1361a0:	e1a00001 	mov	r0, r1
        1361a4:	01a00140 	moveq	r0, r0, asr #2
        1361a8:	0a000000 	beq	1361b0 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x124>
        1361ac:	eb6a2fda 	bl	1bc211c <$_RINTError(long)>
        1361b0:	e584003c 	str	r0, [r4, #60]	; fField60
        1361b4:	e59f104c 	ldr	r1, [pc, #4c]	; 136208 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x17c>	; fField4
        1361b8:	e1a00005 	mov	r0, r5
        1361bc:	e3a03000 	mov	r3, #0	; 0x0
        1361c0:	e3a02000 	mov	r2, #0	; 0x0
        1361c4:	eb6a382a 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1361c8:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1361cc:	e5810000 	str	r0, [r1]
        1361d0:	e2840040 	add	r0, r4, #64	; 0x40
        1361d4:	e1a05000 	mov	r5, r0
        1361d8:	e5900000 	ldr	r0, [r0]
        1361dc:	e5808000 	str	r8, [r0]
        1361e0:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1361e4:	e5900000 	ldr	r0, [r0]
        1361e8:	e3300002 	teq	r0, #2	; 0x2
        1361ec:	0a000039 	beq	1362d8 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x24c>
        1361f0:	e59400b4 	ldr	r0, [r4, #180]	; fField180
        1361f4:	e3300006 	teq	r0, #6	; 0x6
        1361f8:	1a000003 	bne	13620c <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x180>
        1361fc:	e1a06007 	mov	r6, r7
        136200:	ea000034 	b	1362d8 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x24c>
        136204:	00682998 	streqb	r2, [r8], -#152
        136208:	00682b88 	rsbeq	r2, r8, r8, lsl #23
        13620c:	e1a07005 	mov	r7, r5
        136210:	e3a00000 	mov	r0, #0	; 0x0
        136214:	eb6596e0 	bl	1a9bd9c <$MakeArray(long)>
        136218:	e5971000 	ldr	r1, [r7]
        13621c:	e5810000 	str	r0, [r1]
        136220:	e28d0004 	add	r0, sp, #4	; 0x4
        136224:	eb6af5d8 	bl	1bf398c <$IsArray(RefVar const &)>
        136228:	e3300000 	teq	r0, #0	; 0x0
        13622c:	0a00001c 	beq	1362a4 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x218>
        136230:	e3a07000 	mov	r7, #0	; 0x0
        136234:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        136238:	e5900000 	ldr	r0, [r0]
        13623c:	eb6a3c1a 	bl	1bc52ac <$Length(long)>
        136240:	e3500000 	cmp	r0, #0	; 0x0
        136244:	9a00001a 	bls	1362b4 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x228>
        136248:	e24dd004 	sub	sp, sp, #4	; 0x4
        13624c:	e1a01007 	mov	r1, r7
        136250:	e59d0008 	ldr	r0, [sp, #8]
        136254:	e5900000 	ldr	r0, [r0]
        136258:	eb6a37fd 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        13625c:	eb6a2fba 	bl	1bc214c <$AllocateRefHandle(long)>
        136260:	e58d0000 	str	r0, [sp]
        136264:	e1a0100d 	mov	r1, sp
        136268:	e1a00004 	mov	r0, r4
        13626c:	eb65c870 	bl	1aa8434 <TNewScriptEndpointClient::$AddEndArrayElement(RefVar const &)>
        136270:	e1a06000 	mov	r6, r0
        136274:	e59d0000 	ldr	r0, [sp]
        136278:	eb6a33cf 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13627c:	e3360000 	teq	r6, #0	; 0x0
        136280:	e28dd004 	add	sp, sp, #4	; 0x4
        136284:	1a00000a 	bne	1362b4 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x228>
        136288:	e2877001 	add	r7, r7, #1	; 0x1
        13628c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        136290:	e5900000 	ldr	r0, [r0]
        136294:	eb6a3c04 	bl	1bc52ac <$Length(long)>
        136298:	e1500007 	cmp	r0, r7
        13629c:	8affffe9 	bhi	136248 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x1bc>
        1362a0:	ea000003 	b	1362b4 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x228>
        1362a4:	e28d1004 	add	r1, sp, #4	; 0x4
        1362a8:	e1a00004 	mov	r0, r4
        1362ac:	eb65c860 	bl	1aa8434 <TNewScriptEndpointClient::$AddEndArrayElement(RefVar const &)>
        1362b0:	e1a06000 	mov	r6, r0
        1362b4:	e5950000 	ldr	r0, [r5]
        1362b8:	e5900000 	ldr	r0, [r0]
        1362bc:	eb6a3bfa 	bl	1bc52ac <$Length(long)>
        1362c0:	e3300000 	teq	r0, #0	; 0x0
        1362c4:	0a000001 	beq	1362d0 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x244>
        1362c8:	e3360000 	teq	r6, #0	; 0x0
        1362cc:	0a000001 	beq	1362d8 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x24c>
        1362d0:	e5950000 	ldr	r0, [r5]
        1362d4:	e5808000 	str	r8, [r0]
        1362d8:	e28dd004 	add	sp, sp, #4	; 0x4
        1362dc:	ea000000 	b	1362e4 <TNewScriptEndpointClient::ReadTermination(RefVar const &)+0x258>
        1362e0:	e1a06007 	mov	r6, r7
        1362e4:	e59d0000 	ldr	r0, [sp]
        1362e8:	eb6a33b3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1362ec:	e1a00006 	mov	r0, r6
        1362f0:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::ReadTarget(RefVar const &)
 * Address: 001362f4
 */
TNewScriptEndpointClient::ReadTarget(RefVar const &) {
    /*
        1362f4:	e1a0c00d 	mov	ip, sp
        1362f8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1362fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        136300:	e1a04000 	mov	r4, r0
        136304:	e1a05001 	mov	r5, r1
        136308:	e3a06000 	mov	r6, #0	; 0x0
        13630c:	e59000b4 	ldr	r0, [r0, #180]	; fField180
        136310:	e2847068 	add	r7, r4, #104	; 0x68
        136314:	e3a08000 	mov	r8, #0	; 0x0
        136318:	e3300006 	teq	r0, #6	; 0x6
        13631c:	1a00002c 	bne	1363d4 <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0xe0>
        136320:	e24dd004 	sub	sp, sp, #4	; 0x4
        136324:	e59f1080 	ldr	r1, [pc, #80]	; 1363ac <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0xb8>	; fField80
        136328:	e1a00005 	mov	r0, r5
        13632c:	e3a03000 	mov	r3, #0	; 0x0
        136330:	e3a02000 	mov	r2, #0	; 0x0
        136334:	eb6a37ce 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        136338:	eb6a2f83 	bl	1bc214c <$AllocateRefHandle(long)>
        13633c:	e58d0000 	str	r0, [sp]
        136340:	e5900000 	ldr	r0, [r0]
        136344:	e3300002 	teq	r0, #2	; 0x2
        136348:	0a00001d 	beq	1363c4 <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0xd0>
        13634c:	e1a0000d 	mov	r0, sp
        136350:	eb662f72 	bl	1ac2120 <$IsRawOrString(RefVar const &)>
        136354:	e3300000 	teq	r0, #0	; 0x0
        136358:	0a000019 	beq	1363c4 <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0xd0>
        13635c:	e59d0000 	ldr	r0, [sp]
        136360:	e5900000 	ldr	r0, [r0]
        136364:	e5971000 	ldr	r1, [r7]
        136368:	e5810000 	str	r0, [r1]
        13636c:	e59f103c 	ldr	r1, [pc, #3c]	; 1363b0 <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0xbc>
        136370:	e1a00005 	mov	r0, r5
        136374:	e3a03000 	mov	r3, #0	; 0x0
        136378:	e3a02000 	mov	r2, #0	; 0x0
        13637c:	eb6a37bc 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        136380:	eb6a2f71 	bl	1bc214c <$AllocateRefHandle(long)>
        136384:	e1a05000 	mov	r5, r0
        136388:	e5900000 	ldr	r0, [r0]
        13638c:	e2001003 	and	r1, r0, #3	; 0x3
        136390:	e3510000 	cmp	r1, #0	; 0x0
        136394:	1a000006 	bne	1363b4 <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0xc0>
        136398:	01a00140 	moveq	r0, r0, asr #2
        13639c:	0a000000 	beq	1363a4 <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0xb0>
        1363a0:	eb6a2f5d 	bl	1bc211c <$_RINTError(long)>
        1363a4:	e5a4006c 	str	r0, [r4, #108]!	; fField108
        1363a8:	ea000002 	b	1363b8 <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0xc4>
        1363ac:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        1363b0:	00683b30 	rsbeq	r3, r8, r0, lsr fp
        1363b4:	e5a4806c 	str	r8, [r4, #108]!	; fField108
        1363b8:	e1a00005 	mov	r0, r5
        1363bc:	eb6a337e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1363c0:	ea000001 	b	1363cc <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0xd8>
        1363c4:	e3a06006 	mov	r6, #6	; 0x6
        1363c8:	e2466cd3 	sub	r6, r6, #54016	; 0xd300
        1363cc:	e59d0000 	ldr	r0, [sp]
        1363d0:	ea000019 	b	13643c <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0x148>
        1363d4:	e3300008 	teq	r0, #8	; 0x8
        1363d8:	1a00001a 	bne	136448 <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0x154>
        1363dc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1363e0:	e59f1044 	ldr	r1, [pc, #44]	; 13642c <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0x138>	; fField44
        1363e4:	e1a00005 	mov	r0, r5
        1363e8:	e3a03000 	mov	r3, #0	; 0x0
        1363ec:	e3a02000 	mov	r2, #0	; 0x0
        1363f0:	eb6a379f 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1363f4:	eb6a2f54 	bl	1bc214c <$AllocateRefHandle(long)>
        1363f8:	e58d0000 	str	r0, [sp]
        1363fc:	e5900000 	ldr	r0, [r0]
        136400:	e3300002 	teq	r0, #2	; 0x2
        136404:	0a000009 	beq	136430 <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0x13c>
        136408:	e1a0000d 	mov	r0, sp
        13640c:	eb6af55e 	bl	1bf398c <$IsArray(RefVar const &)>
        136410:	e3300000 	teq	r0, #0	; 0x0
        136414:	0a000005 	beq	136430 <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0x13c>
        136418:	e59d0000 	ldr	r0, [sp]
        13641c:	e5900000 	ldr	r0, [r0]
        136420:	e5971000 	ldr	r1, [r7]
        136424:	e5810000 	str	r0, [r1]
        136428:	ea000002 	b	136438 <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0x144>
        13642c:	00684cb8 	streqh	r4, [r8], -#200	; fField200
        136430:	e3a06005 	mov	r6, #5	; 0x5
        136434:	e2466cd3 	sub	r6, r6, #54016	; 0xd300
        136438:	e59d0000 	ldr	r0, [sp]
        13643c:	eb6a335e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136440:	e28dd004 	add	sp, sp, #4	; 0x4
        136444:	ea000004 	b	13645c <TNewScriptEndpointClient::ReadTarget(RefVar const &)+0x168>
        136448:	e3a00002 	mov	r0, #2	; 0x2
        13644c:	e5971000 	ldr	r1, [r7]
        136450:	e3a06f42 	mov	r6, #264	; 0x108
        136454:	e2466b35 	sub	r6, r6, #54272	; 0xd400
        136458:	e5810000 	str	r0, [r1]
        13645c:	e1a00006 	mov	r0, r6
        136460:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::__dt(void)
 * Address: 00136464
 */
TNewScriptEndpointClient::~TNewScriptEndpointClient(void) {
    /*
        136464:	e1a0c00d 	mov	ip, sp
        136468:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        13646c:	e24cb004 	sub	fp, ip, #4	; 0x4
        136470:	e1a04000 	mov	r4, r0
        136474:	e1a05001 	mov	r5, r1
        136478:	e59f0120 	ldr	r0, [pc, #120]	; 1365a0 <TNewScriptEndpointClient::__dt(void)+0x13c>
        13647c:	e5840000 	str	r0, [r4]
        136480:	e5940014 	ldr	r0, [r4, #20]	; fField20
        136484:	e3300000 	teq	r0, #0	; 0x0
        136488:	1b6a05d8 	blne	1bb7bf0 <TEndpoint::$Delete(void)>
        13648c:	e594009c 	ldr	r0, [r4, #156]	; fField156
        136490:	e3300000 	teq	r0, #0	; 0x0
        136494:	1b6a712f 	blne	1bd2958 <$free>
        136498:	e24dd004 	sub	sp, sp, #4	; 0x4
        13649c:	e2840018 	add	r0, r4, #24	; 0x18
        1364a0:	e1a06000 	mov	r6, r0
        1364a4:	e5900000 	ldr	r0, [r0]
        1364a8:	e5900000 	ldr	r0, [r0]
        1364ac:	e3300000 	teq	r0, #0	; 0x0
        1364b0:	0a000008 	beq	1364d8 <TNewScriptEndpointClient::__dt(void)+0x74>
        1364b4:	e3a00002 	mov	r0, #2	; 0x2
        1364b8:	eb6a2f23 	bl	1bc214c <$AllocateRefHandle(long)>
        1364bc:	e58d0000 	str	r0, [sp]
        1364c0:	e1a0200d 	mov	r2, sp
        1364c4:	e1a00006 	mov	r0, r6
        1364c8:	e59f10d4 	ldr	r1, [pc, #d4]	; 1365a4 <TNewScriptEndpointClient::__dt(void)+0x140>
        1364cc:	eb6a3fa5 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1364d0:	e59d0000 	ldr	r0, [sp]
        1364d4:	eb6a3338 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1364d8:	e59400bc 	ldr	r0, [r4, #188]	; fField188
        1364dc:	e3300000 	teq	r0, #0	; 0x0
        1364e0:	1b69bf94 	blne	1ba6338 <PFrameSink::$Delete(void)>
        1364e4:	e59400c0 	ldr	r0, [r4, #192]	; fField192
        1364e8:	e3300000 	teq	r0, #0	; 0x0
        1364ec:	1b69bf94 	blne	1ba6344 <PFrameSource::$Delete(void)>
        1364f0:	e59400c4 	ldr	r0, [r4, #196]	; fField196
        1364f4:	e3300000 	teq	r0, #0	; 0x0
        1364f8:	1b69bf8e 	blne	1ba6338 <PFrameSink::$Delete(void)>
        1364fc:	e59400c8 	ldr	r0, [r4, #200]	; fField200
        136500:	e3300000 	teq	r0, #0	; 0x0
        136504:	1b69bf8e 	blne	1ba6344 <PFrameSource::$Delete(void)>
        136508:	e59400cc 	ldr	r0, [r4, #204]	; fField204
        13650c:	e3300000 	teq	r0, #0	; 0x0
        136510:	1b69bf88 	blne	1ba6338 <PFrameSink::$Delete(void)>
        136514:	e59400d0 	ldr	r0, [r4, #208]	; fField208
        136518:	e3300000 	teq	r0, #0	; 0x0
        13651c:	1b69bf88 	blne	1ba6344 <PFrameSource::$Delete(void)>
        136520:	e28dd004 	add	sp, sp, #4	; 0x4
        136524:	e2840074 	add	r0, r4, #116	; 0x74
        136528:	e3a01000 	mov	r1, #0	; 0x0
        13652c:	eb6ab74e 	bl	1be426c <CBufferSegment::$__dt(void)>
        136530:	e5940068 	ldr	r0, [r4, #104]	; fField104
        136534:	eb6a3320 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136538:	e594005c 	ldr	r0, [r4, #92]	; fField92
        13653c:	eb6a331e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136540:	e5940054 	ldr	r0, [r4, #84]	; fField84
        136544:	eb6a331c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136548:	e5940050 	ldr	r0, [r4, #80]	; fField80
        13654c:	eb6a331a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136550:	e5940040 	ldr	r0, [r4, #64]	; fField64
        136554:	eb6a3318 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136558:	e5940034 	ldr	r0, [r4, #52]	; fField52
        13655c:	eb6a3316 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136560:	e5940030 	ldr	r0, [r4, #48]	; fField48
        136564:	eb6a3314 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136568:	e594002c 	ldr	r0, [r4, #44]	; fField44
        13656c:	eb6a3312 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136570:	e5940028 	ldr	r0, [r4, #40]	; fField40
        136574:	eb6a3310 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136578:	e5960000 	ldr	r0, [r6]
        13657c:	eb6a330e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136580:	e1a00004 	mov	r0, r4
        136584:	e3a01000 	mov	r1, #0	; 0x0
        136588:	eb6a0169 	bl	1bb6b34 <TEndpointClient::$__dt(void)>
        13658c:	e3150001 	tst	r5, #1	; 0x1
        136590:	11a00004 	movne	r0, r4
        136594:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        136598:	1a6a5c50 	bne	1bcd6e0 <$__dl(void *)>
        13659c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1365a0:	0001f24c 	andeq	pc, r1, ip, asr #4
        1365a4:	006823f0 	streqd	r2, [r8], -#48	; fField48
    */
}

/**
 * Symbol: TNewScriptEndpointClient::ReadFilter(RefVar const &)
 * Address: 001365a8
 */
TNewScriptEndpointClient::ReadFilter(RefVar const &) {
    /*
        1365a8:	e1a0c00d 	mov	ip, sp
        1365ac:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1365b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1365b4:	e1a04000 	mov	r4, r0
        1365b8:	e1a05001 	mov	r5, r1
        1365bc:	e24dd004 	sub	sp, sp, #4	; 0x4
        1365c0:	e3a06000 	mov	r6, #0	; 0x0
        1365c4:	e3a0a002 	mov	sl, #2	; 0x2
        1365c8:	e1a0000a 	mov	r0, sl
        1365cc:	eb6a2ede 	bl	1bc214c <$AllocateRefHandle(long)>
        1365d0:	e58d0000 	str	r0, [sp]
        1365d4:	e59400b4 	ldr	r0, [r4, #180]	; fField180
        1365d8:	e3300006 	teq	r0, #6	; 0x6
        1365dc:	0a000059 	beq	136748 <TNewScriptEndpointClient::ReadFilter(RefVar const &)+0x1a0>
        1365e0:	e59f10f0 	ldr	r1, [pc, #f0]	; 1366d8 <TNewScriptEndpointClient::ReadFilter(RefVar const &)+0x130>
        1365e4:	e1a00005 	mov	r0, r5
        1365e8:	e3a03000 	mov	r3, #0	; 0x0
        1365ec:	e3a02000 	mov	r2, #0	; 0x0
        1365f0:	eb6a371f 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1365f4:	e59d1000 	ldr	r1, [sp]
        1365f8:	e5810000 	str	r0, [r1]
        1365fc:	e2840050 	add	r0, r4, #80	; 0x50
        136600:	e1a08000 	mov	r8, r0
        136604:	e5900000 	ldr	r0, [r0]
        136608:	e580a000 	str	sl, [r0]
        13660c:	e2840054 	add	r0, r4, #84	; 0x54
        136610:	e1a09000 	mov	r9, r0
        136614:	e5900000 	ldr	r0, [r0]
        136618:	e580a000 	str	sl, [r0]
        13661c:	e59d0000 	ldr	r0, [sp]
        136620:	e5900000 	ldr	r0, [r0]
        136624:	e3300002 	teq	r0, #2	; 0x2
        136628:	0a00003a 	beq	136718 <TNewScriptEndpointClient::ReadFilter(RefVar const &)+0x170>
        13662c:	e1a07008 	mov	r7, r8
        136630:	e3a00000 	mov	r0, #0	; 0x0
        136634:	eb6595d8 	bl	1a9bd9c <$MakeArray(long)>
        136638:	e5971000 	ldr	r1, [r7]
        13663c:	e1a07009 	mov	r7, r9
        136640:	e5810000 	str	r0, [r1]
        136644:	e3a00000 	mov	r0, #0	; 0x0
        136648:	eb6595d3 	bl	1a9bd9c <$MakeArray(long)>
        13664c:	e5971000 	ldr	r1, [r7]
        136650:	e5810000 	str	r0, [r1]
        136654:	e1a0000d 	mov	r0, sp
        136658:	eb6af4cb 	bl	1bf398c <$IsArray(RefVar const &)>
        13665c:	e3300000 	teq	r0, #0	; 0x0
        136660:	0a00001d 	beq	1366dc <TNewScriptEndpointClient::ReadFilter(RefVar const &)+0x134>
        136664:	e3a07000 	mov	r7, #0	; 0x0
        136668:	e59d0000 	ldr	r0, [sp]
        13666c:	e5900000 	ldr	r0, [r0]
        136670:	eb6a3b0d 	bl	1bc52ac <$Length(long)>
        136674:	e3500000 	cmp	r0, #0	; 0x0
        136678:	9a00001b 	bls	1366ec <TNewScriptEndpointClient::ReadFilter(RefVar const &)+0x144>
        13667c:	e24dd004 	sub	sp, sp, #4	; 0x4
        136680:	e1a01007 	mov	r1, r7
        136684:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        136688:	e5900000 	ldr	r0, [r0]
        13668c:	eb6a36f0 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        136690:	eb6a2ead 	bl	1bc214c <$AllocateRefHandle(long)>
        136694:	e58d0000 	str	r0, [sp]
        136698:	e1a0100d 	mov	r1, sp
        13669c:	e1a00004 	mov	r0, r4
        1366a0:	eb65c768 	bl	1aa8448 <TNewScriptEndpointClient::$AddProxyFrame(RefVar const &)>
        1366a4:	e1a06000 	mov	r6, r0
        1366a8:	e59d0000 	ldr	r0, [sp]
        1366ac:	eb6a32c2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1366b0:	e3360000 	teq	r6, #0	; 0x0
        1366b4:	e28dd004 	add	sp, sp, #4	; 0x4
        1366b8:	1a00000b 	bne	1366ec <TNewScriptEndpointClient::ReadFilter(RefVar const &)+0x144>
        1366bc:	e2877001 	add	r7, r7, #1	; 0x1
        1366c0:	e59d0000 	ldr	r0, [sp]
        1366c4:	e5900000 	ldr	r0, [r0]
        1366c8:	eb6a3af7 	bl	1bc52ac <$Length(long)>
        1366cc:	e1500007 	cmp	r0, r7
        1366d0:	8affffe9 	bhi	13667c <TNewScriptEndpointClient::ReadFilter(RefVar const &)+0xd4>
        1366d4:	ea000004 	b	1366ec <TNewScriptEndpointClient::ReadFilter(RefVar const &)+0x144>
        1366d8:	00682258 	rsbeq	r2, r8, r8, asr r2
        1366dc:	e1a0100d 	mov	r1, sp
        1366e0:	e1a00004 	mov	r0, r4
        1366e4:	eb65c757 	bl	1aa8448 <TNewScriptEndpointClient::$AddProxyFrame(RefVar const &)>
        1366e8:	e1a06000 	mov	r6, r0
        1366ec:	e5980000 	ldr	r0, [r8]
        1366f0:	e5900000 	ldr	r0, [r0]
        1366f4:	eb6a3aec 	bl	1bc52ac <$Length(long)>
        1366f8:	e3300000 	teq	r0, #0	; 0x0
        1366fc:	0a000001 	beq	136708 <TNewScriptEndpointClient::ReadFilter(RefVar const &)+0x160>
        136700:	e3360000 	teq	r6, #0	; 0x0
        136704:	0a000003 	beq	136718 <TNewScriptEndpointClient::ReadFilter(RefVar const &)+0x170>
        136708:	e5980000 	ldr	r0, [r8]
        13670c:	e580a000 	str	sl, [r0]
        136710:	e5990000 	ldr	r0, [r9]
        136714:	e580a000 	str	sl, [r0]
        136718:	e59f1024 	ldr	r1, [pc, #24]	; 136744 <TNewScriptEndpointClient::ReadFilter(RefVar const &)+0x19c>
        13671c:	e1a00005 	mov	r0, r5
        136720:	e3a03000 	mov	r3, #0	; 0x0
        136724:	e3a02000 	mov	r2, #0	; 0x0
        136728:	eb6a36d1 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        13672c:	e59d1000 	ldr	r1, [sp]
        136730:	e5810000 	str	r0, [r1]
        136734:	e2500002 	subs	r0, r0, #2	; 0x2
        136738:	13a00001 	movne	r0, #1	; 0x1
        13673c:	e5c40058 	strb	r0, [r4, #88]	; fField88
        136740:	ea000001 	b	13674c <TNewScriptEndpointClient::ReadFilter(RefVar const &)+0x1a4>
        136744:	006845f8 	streqd	r4, [r8], -#88	; fField88
        136748:	e59f600c 	ldr	r6, [pc, #c]	; 13675c <TNewScriptEndpointClient::ReadFilter(RefVar const &)+0x1b4>
        13674c:	e59d0000 	ldr	r0, [sp]
        136750:	eb6a3299 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136754:	e1a00006 	mov	r0, r6
        136758:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        13675c:	ffff2d07 	swinv	0x00ff2d07
    */
}

/**
 * Symbol: TNewScriptEndpointClient::AddProxyFrame(RefVar const &)
 * Address: 00136760
 */
TNewScriptEndpointClient::AddProxyFrame(RefVar const &) {
    /*
        136760:	e1a0c00d 	mov	ip, sp
        136764:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        136768:	e24cb004 	sub	fp, ip, #4	; 0x4
        13676c:	e1a04000 	mov	r4, r0
        136770:	e1a05001 	mov	r5, r1
        136774:	e24dd008 	sub	sp, sp, #8	; 0x8
        136778:	e59f1074 	ldr	r1, [pc, #74]	; 1367f4 <TNewScriptEndpointClient::AddProxyFrame(RefVar const &)+0x94>
        13677c:	e1a00005 	mov	r0, r5
        136780:	e3a03000 	mov	r3, #0	; 0x0
        136784:	e3a02000 	mov	r2, #0	; 0x0
        136788:	eb6a36b9 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        13678c:	eb6a2e6e 	bl	1bc214c <$AllocateRefHandle(long)>
        136790:	e58d0004 	str	r0, [sp, #4]	; fField4
        136794:	e59f105c 	ldr	r1, [pc, #5c]	; 1367f8 <TNewScriptEndpointClient::AddProxyFrame(RefVar const &)+0x98>
        136798:	e1a00005 	mov	r0, r5
        13679c:	e3a03000 	mov	r3, #0	; 0x0
        1367a0:	e3a02000 	mov	r2, #0	; 0x0
        1367a4:	eb6a36b2 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1367a8:	eb6a2e67 	bl	1bc214c <$AllocateRefHandle(long)>
        1367ac:	e2842050 	add	r2, r4, #80	; 0x50
        1367b0:	e58d0000 	str	r0, [sp]
        1367b4:	e28d1004 	add	r1, sp, #4	; 0x4
        1367b8:	e1a00004 	mov	r0, r4
        1367bc:	eb65c720 	bl	1aa8444 <TNewScriptEndpointClient::$AddProxyArrayElement(RefVar const &, RefVar const &)>
        1367c0:	e3300000 	teq	r0, #0	; 0x0
        1367c4:	1a000003 	bne	1367d8 <TNewScriptEndpointClient::AddProxyFrame(RefVar const &)+0x78>
        1367c8:	e2842054 	add	r2, r4, #84	; 0x54
        1367cc:	e1a0100d 	mov	r1, sp
        1367d0:	e1a00004 	mov	r0, r4
        1367d4:	eb65c71a 	bl	1aa8444 <TNewScriptEndpointClient::$AddProxyArrayElement(RefVar const &, RefVar const &)>
        1367d8:	e1a04000 	mov	r4, r0
        1367dc:	e59d0000 	ldr	r0, [sp]
        1367e0:	eb6a3275 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1367e4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1367e8:	eb6a3273 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1367ec:	e1a00004 	mov	r0, r4
        1367f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1367f4:	00682248 	rsbeq	r2, r8, r8, asr #4
        1367f8:	00684078 	rsbeq	r4, r8, r8, ror r0
    */
}

/**
 * Symbol: TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &)
 * Address: 001367fc
 */
TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &) {
    /*
        1367fc:	e1a0c00d 	mov	ip, sp
        136800:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        136804:	e24cb004 	sub	fp, ip, #4	; 0x4
        136808:	e1a06000 	mov	r6, r0
        13680c:	e1a05001 	mov	r5, r1
        136810:	e1a04002 	mov	r4, r2
        136814:	e3a07000 	mov	r7, #0	; 0x0
        136818:	e3a00000 	mov	r0, #0	; 0x0
        13681c:	e52d006c 	str	r0, [sp, -#108]!	; fField108
        136820:	e28d0008 	add	r0, sp, #8	; 0x8
        136824:	eb69f052 	bl	1bb2974 <$setjmp>
        136828:	e3300000 	teq	r0, #0	; 0x0
        13682c:	1a000040 	bne	136934 <TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &)+0x138>
        136830:	e1a0000d 	mov	r0, sp
        136834:	eb6aa610 	bl	1be007c <$AddExceptionHandler>
        136838:	e5950000 	ldr	r0, [r5]
        13683c:	e5900000 	ldr	r0, [r0]
        136840:	e2001003 	and	r1, r0, #3	; 0x3
        136844:	e3310002 	teq	r1, #2	; 0x2
        136848:	03a03003 	moveq	r3, #3	; 0x3
        13684c:	00032140 	andeq	r2, r3, r0, asr #2
        136850:	03320001 	teqeq	r2, #1	; 0x1
        136854:	1a000021 	bne	1368e0 <TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &)+0xe4>
        136858:	e24dd004 	sub	sp, sp, #4	; 0x4
        13685c:	e3310002 	teq	r1, #2	; 0x2
        136860:	03320001 	teqeq	r2, #1	; 0x1
        136864:	01a00140 	moveq	r0, r0, asr #2
        136868:	01a00140 	moveq	r0, r0, asr #2
        13686c:	01a00800 	moveq	r0, r0, lsl #16
        136870:	01a00820 	moveq	r0, r0, lsr #16
        136874:	0a000000 	beq	13687c <TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &)+0x80>
        136878:	eb6a2e26 	bl	1bc2118 <$_RCHARError(long)>
        13687c:	e5cd0001 	strb	r0, [sp, #1]
        136880:	e1a00440 	mov	r0, r0, asr #8
        136884:	e44d0004 	strb	r0, [sp], -#4	; fField4
        136888:	e28d0004 	add	r0, sp, #4	; 0x4
        13688c:	e3a02001 	mov	r2, #1	; 0x1
        136890:	e596101c 	ldr	r1, [r6, #28]	; fField28
        136894:	eb6b4afd 	bl	1c09490 <$Umbstrnlen>
        136898:	e3300001 	teq	r0, #1	; 0x1
        13689c:	13a07c2d 	movne	r7, #11520	; 0x2d00
        1368a0:	12477801 	subne	r7, r7, #65536	; 0x10000
        1368a4:	1a00000b 	bne	1368d8 <TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &)+0xdc>
        1368a8:	e5b6101c 	ldr	r1, [r6, #28]!	; fField28
        1368ac:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1368b0:	e1a00820 	mov	r0, r0, lsr #16
        1368b4:	eb6621ac 	bl	1abef6c <$CharacterToUByte(unsigned short, long)>
        1368b8:	e1a00100 	mov	r0, r0, lsl #2
        1368bc:	eb6a2e22 	bl	1bc214c <$AllocateRefHandle(long)>
        1368c0:	e58d0000 	str	r0, [sp]
        1368c4:	e1a0100d 	mov	r1, sp
        1368c8:	e1a00004 	mov	r0, r4
        1368cc:	eb6a2e15 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        1368d0:	e59d0000 	ldr	r0, [sp]
        1368d4:	eb6a3238 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1368d8:	e28dd004 	add	sp, sp, #4	; 0x4
        1368dc:	ea000011 	b	136928 <TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &)+0x12c>
        1368e0:	e3310000 	teq	r1, #0	; 0x0
        1368e4:	1a000003 	bne	1368f8 <TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &)+0xfc>
        1368e8:	e1a01005 	mov	r1, r5
        1368ec:	e1a00004 	mov	r0, r4
        1368f0:	eb6a2e0c 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        1368f4:	ea000017 	b	136958 <TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &)+0x15c>
        1368f8:	e24dd004 	sub	sp, sp, #4	; 0x4
        1368fc:	e3300002 	teq	r0, #2	; 0x2
        136900:	159f7028 	ldrne	r7, [pc, #28]	; 136930 <TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &)+0x134>	; fField28
        136904:	1a000007 	bne	136928 <TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &)+0x12c>
        136908:	e3a00002 	mov	r0, #2	; 0x2
        13690c:	eb6a2e0e 	bl	1bc214c <$AllocateRefHandle(long)>
        136910:	e58d0000 	str	r0, [sp]
        136914:	e1a0100d 	mov	r1, sp
        136918:	e1a00004 	mov	r0, r4
        13691c:	eb6a2e01 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        136920:	e59d0000 	ldr	r0, [sp]
        136924:	eb6a3224 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136928:	e28dd004 	add	sp, sp, #4	; 0x4
        13692c:	ea000009 	b	136958 <TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &)+0x15c>
        136930:	ffff2d03 	swinv	0x00ff2d03
        136934:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        136938:	e59f1028 	ldr	r1, [pc, #28]	; 136968 <TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &)+0x16c>	; fField28
        13693c:	e5911000 	ldr	r1, [r1]
        136940:	eb6ab213 	bl	1be3194 <$Subexception>
        136944:	e3300000 	teq	r0, #0	; 0x0
        136948:	159d7064 	ldrne	r7, [sp, #100]	; fField100
        13694c:	1a000001 	bne	136958 <TNewScriptEndpointClient::AddProxyArrayElement(RefVar const &, RefVar const &)+0x15c>
        136950:	e1a0000d 	mov	r0, sp
        136954:	eb6aadfe 	bl	1be2154 <$NextHandler>
        136958:	e1a0000d 	mov	r0, sp
        13695c:	eb6aa9d5 	bl	1be10b8 <$ExitHandler>
        136960:	e1a00007 	mov	r0, r7
        136964:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        136968:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)
 * Address: 0013696c
 */
TNewScriptEndpointClient::AddEndArrayElement(RefVar const &) {
    /*
        13696c:	e1a0c00d 	mov	ip, sp
        136970:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        136974:	e24cb004 	sub	fp, ip, #4	; 0x4
        136978:	e1a05000 	mov	r5, r0
        13697c:	e1a04001 	mov	r4, r1
        136980:	e3a08000 	mov	r8, #0	; 0x0
        136984:	e3a09000 	mov	r9, #0	; 0x0
        136988:	e52d906c 	str	r9, [sp, -#108]!	; fField108
        13698c:	e28d0008 	add	r0, sp, #8	; 0x8
        136990:	eb69eff7 	bl	1bb2974 <$setjmp>
        136994:	e3300000 	teq	r0, #0	; 0x0
        136998:	1a0000ef 	bne	136d5c <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x3f0>
        13699c:	e1a0000d 	mov	r0, sp
        1369a0:	eb6aa5b5 	bl	1be007c <$AddExceptionHandler>
        1369a4:	e5940000 	ldr	r0, [r4]
        1369a8:	e5900000 	ldr	r0, [r0]
        1369ac:	e1a01000 	mov	r1, r0
        1369b0:	e2000003 	and	r0, r0, #3	; 0x3
        1369b4:	e2857040 	add	r7, r5, #64	; 0x40
        1369b8:	e3a0a003 	mov	sl, #3	; 0x3
        1369bc:	e3300002 	teq	r0, #2	; 0x2
        1369c0:	000a1141 	andeq	r1, sl, r1, asr #2
        1369c4:	03310001 	teqeq	r1, #1	; 0x1
        1369c8:	1a000004 	bne	1369e0 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x74>
        1369cc:	e1a02007 	mov	r2, r7
        1369d0:	e1a01004 	mov	r1, r4
        1369d4:	e1a00005 	mov	r0, r5
        1369d8:	eb65c699 	bl	1aa8444 <TNewScriptEndpointClient::$AddProxyArrayElement(RefVar const &, RefVar const &)>
        1369dc:	ea0000e7 	b	136d80 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x414>
        1369e0:	e3300000 	teq	r0, #0	; 0x0
        1369e4:	0a000003 	beq	1369f8 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x8c>
        1369e8:	e1a00004 	mov	r0, r4
        1369ec:	eb65fc32 	bl	1ab5abc <$IsRaw(RefVar const &)>
        1369f0:	e3300000 	teq	r0, #0	; 0x0
        1369f4:	0a000003 	beq	136a08 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x9c>
        1369f8:	e1a00007 	mov	r0, r7
        1369fc:	e1a01004 	mov	r1, r4
        136a00:	eb6a2dc8 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        136a04:	ea0000dd 	b	136d80 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x414>
        136a08:	e1a00004 	mov	r0, r4
        136a0c:	eb6af3de 	bl	1bf398c <$IsArray(RefVar const &)>
        136a10:	e59f60ec 	ldr	r6, [pc, #ec]	; 136b04 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x198>
        136a14:	e3300000 	teq	r0, #0	; 0x0
        136a18:	0a00003b 	beq	136b0c <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x1a0>
        136a1c:	e1a01009 	mov	r1, r9
        136a20:	e5940000 	ldr	r0, [r4]
        136a24:	e5900000 	ldr	r0, [r0]
        136a28:	eb6a3609 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        136a2c:	e3100003 	tst	r0, #3	; 0x3
        136a30:	1a000035 	bne	136b0c <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x1a0>
        136a34:	e5940000 	ldr	r0, [r4]
        136a38:	e5900000 	ldr	r0, [r0]
        136a3c:	eb6a3a1c 	bl	1bc52b4 <$LockRef(long)>
        136a40:	e24dd004 	sub	sp, sp, #4	; 0x4
        136a44:	e5940000 	ldr	r0, [r4]
        136a48:	e5900000 	ldr	r0, [r0]
        136a4c:	eb6a3a16 	bl	1bc52ac <$Length(long)>
        136a50:	e1a05000 	mov	r5, r0
        136a54:	e1a01000 	mov	r1, r0
        136a58:	e1a00006 	mov	r0, r6
        136a5c:	eb6a2db6 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        136a60:	eb6a2db9 	bl	1bc214c <$AllocateRefHandle(long)>
        136a64:	e58d0000 	str	r0, [sp]
        136a68:	e5900000 	ldr	r0, [r0]
        136a6c:	eb6a3a10 	bl	1bc52b4 <$LockRef(long)>
        136a70:	e59d0000 	ldr	r0, [sp]
        136a74:	e5900000 	ldr	r0, [r0]
        136a78:	eb6a2db7 	bl	1bc215c <$BinaryData(long)>
        136a7c:	e1a09000 	mov	r9, r0
        136a80:	e3a06000 	mov	r6, #0	; 0x0
        136a84:	e3550000 	cmp	r5, #0	; 0x0
        136a88:	da000012 	ble	136ad8 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x16c>
        136a8c:	e1a01006 	mov	r1, r6
        136a90:	e5940000 	ldr	r0, [r4]
        136a94:	e5900000 	ldr	r0, [r0]
        136a98:	eb6a35ed 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        136a9c:	e3100003 	tst	r0, #3	; 0x3
        136aa0:	159f8060 	ldrne	r8, [pc, #60]	; 136b08 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x19c>	; fField60
        136aa4:	1a00000b 	bne	136ad8 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x16c>
        136aa8:	e1a01006 	mov	r1, r6
        136aac:	e5940000 	ldr	r0, [r4]
        136ab0:	e5900000 	ldr	r0, [r0]
        136ab4:	eb6a35e6 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        136ab8:	e3100003 	tst	r0, #3	; 0x3
        136abc:	01a00140 	moveq	r0, r0, asr #2
        136ac0:	0a000000 	beq	136ac8 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x15c>
        136ac4:	eb6a2d94 	bl	1bc211c <$_RINTError(long)>
        136ac8:	e7c90006 	strb	r0, [r9, r6]
        136acc:	e2866001 	add	r6, r6, #1	; 0x1
        136ad0:	e1560005 	cmp	r6, r5
        136ad4:	baffffec 	blt	136a8c <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x120>
        136ad8:	e59d0000 	ldr	r0, [sp]
        136adc:	e5900000 	ldr	r0, [r0]
        136ae0:	eb6a4662 	bl	1bc8470 <$UnlockRef(long)>
        136ae4:	e5940000 	ldr	r0, [r4]
        136ae8:	e5900000 	ldr	r0, [r0]
        136aec:	eb6a465f 	bl	1bc8470 <$UnlockRef(long)>
        136af0:	e1a00007 	mov	r0, r7
        136af4:	e1a0100d 	mov	r1, sp
        136af8:	eb6a2d8a 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        136afc:	e59d0000 	ldr	r0, [sp]
        136b00:	ea00008d 	b	136d3c <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x3d0>
        136b04:	006820a0 	rsbeq	r2, r8, r0, lsr #1
        136b08:	ffff2d0b 	swinv	0x00ff2d0b
        136b0c:	e1a00004 	mov	r0, r4
        136b10:	eb6af39d 	bl	1bf398c <$IsArray(RefVar const &)>
        136b14:	e3300000 	teq	r0, #0	; 0x0
        136b18:	0a000057 	beq	136c7c <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x310>
        136b1c:	e1a01009 	mov	r1, r9
        136b20:	e5940000 	ldr	r0, [r4]
        136b24:	e5900000 	ldr	r0, [r0]
        136b28:	eb6a35c9 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        136b2c:	e2000003 	and	r0, r0, #3	; 0x3
        136b30:	e3300002 	teq	r0, #2	; 0x2
        136b34:	1a000050 	bne	136c7c <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x310>
        136b38:	e1a01009 	mov	r1, r9
        136b3c:	e5940000 	ldr	r0, [r4]
        136b40:	e5900000 	ldr	r0, [r0]
        136b44:	eb6a35c2 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        136b48:	e3a0a003 	mov	sl, #3	; 0x3
        136b4c:	e00a0140 	and	r0, sl, r0, asr #2
        136b50:	e3300001 	teq	r0, #1	; 0x1
        136b54:	1a000048 	bne	136c7c <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x310>
        136b58:	e5940000 	ldr	r0, [r4]
        136b5c:	e5900000 	ldr	r0, [r0]
        136b60:	eb6a39d3 	bl	1bc52b4 <$LockRef(long)>
        136b64:	e24dd004 	sub	sp, sp, #4	; 0x4
        136b68:	e5940000 	ldr	r0, [r4]
        136b6c:	e5900000 	ldr	r0, [r0]
        136b70:	eb6a39cd 	bl	1bc52ac <$Length(long)>
        136b74:	e1a09000 	mov	r9, r0
        136b78:	e1a01000 	mov	r1, r0
        136b7c:	e1a00006 	mov	r0, r6
        136b80:	eb6a2d6d 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        136b84:	eb6a2d70 	bl	1bc214c <$AllocateRefHandle(long)>
        136b88:	e58d0000 	str	r0, [sp]
        136b8c:	e5900000 	ldr	r0, [r0]
        136b90:	eb6a39c7 	bl	1bc52b4 <$LockRef(long)>
        136b94:	e59d0000 	ldr	r0, [sp]
        136b98:	e5900000 	ldr	r0, [r0]
        136b9c:	eb6a2d6e 	bl	1bc215c <$BinaryData(long)>
        136ba0:	e1a0a000 	mov	sl, r0
        136ba4:	e3a06000 	mov	r6, #0	; 0x0
        136ba8:	e3590000 	cmp	r9, #0	; 0x0
        136bac:	da000027 	ble	136c50 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x2e4>
        136bb0:	e1a01006 	mov	r1, r6
        136bb4:	e5940000 	ldr	r0, [r4]
        136bb8:	e5900000 	ldr	r0, [r0]
        136bbc:	eb6a35a4 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        136bc0:	e2000003 	and	r0, r0, #3	; 0x3
        136bc4:	e3300002 	teq	r0, #2	; 0x2
        136bc8:	1a000007 	bne	136bec <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x280>
        136bcc:	e1a01006 	mov	r1, r6
        136bd0:	e5940000 	ldr	r0, [r4]
        136bd4:	e5900000 	ldr	r0, [r0]
        136bd8:	eb6a359d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        136bdc:	e3a01003 	mov	r1, #3	; 0x3
        136be0:	e0010140 	and	r0, r1, r0, asr #2
        136be4:	e3300001 	teq	r0, #1	; 0x1
        136be8:	0a000001 	beq	136bf4 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x288>
        136bec:	e51f80ec 	ldr	r8, [pc, #ffffff14]	; 136b08 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x19c>
        136bf0:	ea000016 	b	136c50 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x2e4>
        136bf4:	e1a01006 	mov	r1, r6
        136bf8:	e5940000 	ldr	r0, [r4]
        136bfc:	e5900000 	ldr	r0, [r0]
        136c00:	eb6a3593 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        136c04:	e2001003 	and	r1, r0, #3	; 0x3
        136c08:	e3310002 	teq	r1, #2	; 0x2
        136c0c:	03a01003 	moveq	r1, #3	; 0x3
        136c10:	00011140 	andeq	r1, r1, r0, asr #2
        136c14:	03310001 	teqeq	r1, #1	; 0x1
        136c18:	01a00140 	moveq	r0, r0, asr #2
        136c1c:	01a00140 	moveq	r0, r0, asr #2
        136c20:	01a00800 	moveq	r0, r0, lsl #16
        136c24:	01a00820 	moveq	r0, r0, lsr #16
        136c28:	0a000000 	beq	136c30 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x2c4>
        136c2c:	eb6a2d39 	bl	1bc2118 <$_RCHARError(long)>
        136c30:	e1a00800 	mov	r0, r0, lsl #16
        136c34:	e1a00820 	mov	r0, r0, lsr #16
        136c38:	e595101c 	ldr	r1, [r5, #28]	; fField28
        136c3c:	eb6620ca 	bl	1abef6c <$CharacterToUByte(unsigned short, long)>
        136c40:	e7ca0006 	strb	r0, [sl, r6]
        136c44:	e2866001 	add	r6, r6, #1	; 0x1
        136c48:	e1560009 	cmp	r6, r9
        136c4c:	baffffd7 	blt	136bb0 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x244>
        136c50:	e59d0000 	ldr	r0, [sp]
        136c54:	e5900000 	ldr	r0, [r0]
        136c58:	eb6a4604 	bl	1bc8470 <$UnlockRef(long)>
        136c5c:	e5940000 	ldr	r0, [r4]
        136c60:	e5900000 	ldr	r0, [r0]
        136c64:	eb6a4601 	bl	1bc8470 <$UnlockRef(long)>
        136c68:	e1a00007 	mov	r0, r7
        136c6c:	e1a0100d 	mov	r1, sp
        136c70:	eb6a2d2c 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        136c74:	e59d0000 	ldr	r0, [sp]
        136c78:	ea00002f 	b	136d3c <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x3d0>
        136c7c:	e1a00004 	mov	r0, r4
        136c80:	eb6a3985 	bl	1bc529c <$IsString(RefVar const &)>
        136c84:	e3300000 	teq	r0, #0	; 0x0
        136c88:	0a00002e 	beq	136d48 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x3dc>
        136c8c:	e5940000 	ldr	r0, [r4]
        136c90:	e5900000 	ldr	r0, [r0]
        136c94:	eb6a3986 	bl	1bc52b4 <$LockRef(long)>
        136c98:	e24dd004 	sub	sp, sp, #4	; 0x4
        136c9c:	e1a00004 	mov	r0, r4
        136ca0:	eb6a3137 	bl	1bc3184 <$GetCString(RefVar const &)>
        136ca4:	e1a0a000 	mov	sl, r0
        136ca8:	e595101c 	ldr	r1, [r5, #28]	; fField28
        136cac:	eb6b49f6 	bl	1c0948c <$Umbstrlen>
        136cb0:	e1a09000 	mov	r9, r0
        136cb4:	e1a01000 	mov	r1, r0
        136cb8:	e1a00006 	mov	r0, r6
        136cbc:	eb6a2d1e 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        136cc0:	eb6a2d21 	bl	1bc214c <$AllocateRefHandle(long)>
        136cc4:	e58d0000 	str	r0, [sp]
        136cc8:	e5900000 	ldr	r0, [r0]
        136ccc:	eb6a3978 	bl	1bc52b4 <$LockRef(long)>
        136cd0:	e24dd004 	sub	sp, sp, #4	; 0x4
        136cd4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        136cd8:	e5900000 	ldr	r0, [r0]
        136cdc:	eb6a2d1e 	bl	1bc215c <$BinaryData(long)>
        136ce0:	e3a06000 	mov	r6, #0	; 0x0
        136ce4:	e3590000 	cmp	r9, #0	; 0x0
        136ce8:	e58d0000 	str	r0, [sp]
        136cec:	da000008 	ble	136d14 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x3a8>
        136cf0:	e595101c 	ldr	r1, [r5, #28]	; fField28
        136cf4:	e79a0086 	ldr	r0, [sl, r6, lsl #1]
        136cf8:	e1a00820 	mov	r0, r0, lsr #16
        136cfc:	eb66209a 	bl	1abef6c <$CharacterToUByte(unsigned short, long)>
        136d00:	e59d1000 	ldr	r1, [sp]
        136d04:	e7c10006 	strb	r0, [r1, r6]
        136d08:	e2866001 	add	r6, r6, #1	; 0x1
        136d0c:	e1560009 	cmp	r6, r9
        136d10:	bafffff6 	blt	136cf0 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x384>
        136d14:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        136d18:	e5900000 	ldr	r0, [r0]
        136d1c:	eb6a45d3 	bl	1bc8470 <$UnlockRef(long)>
        136d20:	e1a00007 	mov	r0, r7
        136d24:	e28d1004 	add	r1, sp, #4	; 0x4
        136d28:	eb6a2cfe 	bl	1bc2128 <$AddArraySlot__FRC6RefVarT1>
        136d2c:	e5940000 	ldr	r0, [r4]
        136d30:	e5900000 	ldr	r0, [r0]
        136d34:	eb6a45cd 	bl	1bc8470 <$UnlockRef(long)>
        136d38:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        136d3c:	eb6a311e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136d40:	e28dd004 	add	sp, sp, #4	; 0x4
        136d44:	ea00000d 	b	136d80 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x414>
        136d48:	e5940000 	ldr	r0, [r4]
        136d4c:	e5900000 	ldr	r0, [r0]
        136d50:	e3300002 	teq	r0, #2	; 0x2
        136d54:	151f8254 	ldrne	r8, [pc, #fffffdac]	; 136b08 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x19c>
        136d58:	ea000008 	b	136d80 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x414>
        136d5c:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        136d60:	e59f1028 	ldr	r1, [pc, #28]	; 136d90 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x424>	; fField28
        136d64:	e5911000 	ldr	r1, [r1]
        136d68:	eb6ab109 	bl	1be3194 <$Subexception>
        136d6c:	e3300000 	teq	r0, #0	; 0x0
        136d70:	159d8064 	ldrne	r8, [sp, #100]	; fField100
        136d74:	1a000001 	bne	136d80 <TNewScriptEndpointClient::AddEndArrayElement(RefVar const &)+0x414>
        136d78:	e1a0000d 	mov	r0, sp
        136d7c:	eb6aacf4 	bl	1be2154 <$NextHandler>
        136d80:	e1a0000d 	mov	r0, sp
        136d84:	eb6aa8cb 	bl	1be10b8 <$ExitHandler>
        136d88:	e1a00008 	mov	r0, r8
        136d8c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        136d90:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TNewScriptEndpointClient::InitInputBuffers(void)
 * Address: 00136d94
 */
TNewScriptEndpointClient::InitInputBuffers(void) {
    /*
        136d94:	e1a0c00d 	mov	ip, sp
        136d98:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        136d9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        136da0:	e1a04000 	mov	r4, r0
        136da4:	e3a05000 	mov	r5, #0	; 0x0
        136da8:	e3a08000 	mov	r8, #0	; 0x0
        136dac:	e5c08064 	strb	r8, [r0, #100]	; fField100
        136db0:	e59000b4 	ldr	r0, [r0, #180]	; fField180
        136db4:	e2846068 	add	r6, r4, #104	; 0x68
        136db8:	e3a07001 	mov	r7, #1	; 0x1
        136dbc:	e3300006 	teq	r0, #6	; 0x6
        136dc0:	1a00000c 	bne	136df8 <TNewScriptEndpointClient::InitInputBuffers(void)+0x64>
        136dc4:	e5960000 	ldr	r0, [r6]
        136dc8:	e5900000 	ldr	r0, [r0]
        136dcc:	eb6a3936 	bl	1bc52ac <$Length(long)>
        136dd0:	e594106c 	ldr	r1, [r4, #108]	; fField108
        136dd4:	e0400001 	sub	r0, r0, r1
        136dd8:	e5941038 	ldr	r1, [r4, #56]	; fField56
        136ddc:	e3310000 	teq	r1, #0	; 0x0
        136de0:	0a000001 	beq	136dec <TNewScriptEndpointClient::InitInputBuffers(void)+0x58>
        136de4:	e1510000 	cmp	r1, r0
        136de8:	da000000 	ble	136df0 <TNewScriptEndpointClient::InitInputBuffers(void)+0x5c>
        136dec:	e5840038 	str	r0, [r4, #56]	; fField56
        136df0:	e5c47064 	strb	r7, [r4, #100]	; fField100
        136df4:	ea00007a 	b	136fe4 <TNewScriptEndpointClient::InitInputBuffers(void)+0x250>
        136df8:	e3a01004 	mov	r1, #4	; 0x4
        136dfc:	e3a090e9 	mov	r9, #233	; 0xe9
        136e00:	e2499b0a 	sub	r9, r9, #10240	; 0x2800
        136e04:	e3300007 	teq	r0, #7	; 0x7
        136e08:	1a00000f 	bne	136e4c <TNewScriptEndpointClient::InitInputBuffers(void)+0xb8>
        136e0c:	e5c47044 	strb	r7, [r4, #68]	; fField68
        136e10:	e5841038 	str	r1, [r4, #56]	; fField56
        136e14:	e594009c 	ldr	r0, [r4, #156]	; fField156
        136e18:	e3300000 	teq	r0, #0	; 0x0
        136e1c:	1a000056 	bne	136f7c <TNewScriptEndpointClient::InitInputBuffers(void)+0x1e8>
        136e20:	e3a00004 	mov	r0, #4	; 0x4
        136e24:	e1a0a000 	mov	sl, r0
        136e28:	eb6a7f4e 	bl	1bd6b68 <$malloc>
        136e2c:	e1a06000 	mov	r6, r0
        136e30:	eb6aacba 	bl	1be2120 <$MemError>
        136e34:	e3300000 	teq	r0, #0	; 0x0
        136e38:	11a05009 	movne	r5, r9
        136e3c:	e284409c 	add	r4, r4, #156	; 0x9c
        136e40:	e8840440 	stmia	r4, {r6, sl}
        136e44:	e244409c 	sub	r4, r4, #156	; 0x9c
        136e48:	ea00004a 	b	136f78 <TNewScriptEndpointClient::InitInputBuffers(void)+0x1e4>
        136e4c:	e3300004 	teq	r0, #4	; 0x4
        136e50:	03a06004 	moveq	r6, #4	; 0x4
        136e54:	05841038 	streq	r1, [r4, #56]	; fField56
        136e58:	0a000027 	beq	136efc <TNewScriptEndpointClient::InitInputBuffers(void)+0x168>
        136e5c:	e3300002 	teq	r0, #2	; 0x2
        136e60:	03a06001 	moveq	r6, #1	; 0x1
        136e64:	05847038 	streq	r7, [r4, #56]	; fField56
        136e68:	0a000023 	beq	136efc <TNewScriptEndpointClient::InitInputBuffers(void)+0x168>
        136e6c:	e3300008 	teq	r0, #8	; 0x8
        136e70:	1a000032 	bne	136f40 <TNewScriptEndpointClient::InitInputBuffers(void)+0x1ac>
        136e74:	e24dd008 	sub	sp, sp, #8	; 0x8
        136e78:	e2840034 	add	r0, r4, #52	; 0x34
        136e7c:	e59f10b4 	ldr	r1, [pc, #b4]	; 136f38 <TNewScriptEndpointClient::InitInputBuffers(void)+0x1a4>
        136e80:	e3a03000 	mov	r3, #0	; 0x0
        136e84:	e3a02000 	mov	r2, #0	; 0x0
        136e88:	eb6a34f9 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        136e8c:	eb6a2cae 	bl	1bc214c <$AllocateRefHandle(long)>
        136e90:	e58d0000 	str	r0, [sp]
        136e94:	e1a0000d 	mov	r0, sp
        136e98:	e59f109c 	ldr	r1, [pc, #9c]	; 136f3c <TNewScriptEndpointClient::InitInputBuffers(void)+0x1a8>
        136e9c:	e3a03000 	mov	r3, #0	; 0x0
        136ea0:	e3a02000 	mov	r2, #0	; 0x0
        136ea4:	eb6a34f2 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        136ea8:	eb6a2ca7 	bl	1bc214c <$AllocateRefHandle(long)>
        136eac:	e58d0004 	str	r0, [sp, #4]	; fField4
        136eb0:	e59d0000 	ldr	r0, [sp]
        136eb4:	eb6a30c0 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136eb8:	e594301c 	ldr	r3, [r4, #28]	; fField28
        136ebc:	e2842038 	add	r2, r4, #56	; 0x38
        136ec0:	e1a01006 	mov	r1, r6
        136ec4:	e28d0004 	add	r0, sp, #4	; 0x4
        136ec8:	eb69c131 	bl	1ba7394 <$MarshalArgumentSize__FRC6RefVarT1PUli>
        136ecc:	e1b05000 	movs	r5, r0
        136ed0:	e5940038 	ldr	r0, [r4, #56]	; fField56
        136ed4:	e1a06000 	mov	r6, r0
        136ed8:	1a000002 	bne	136ee8 <TNewScriptEndpointClient::InitInputBuffers(void)+0x154>
        136edc:	e3500000 	cmp	r0, #0	; 0x0
        136ee0:	d3a0500e 	movle	r5, #14	; 0xe
        136ee4:	d2455cd3 	suble	r5, r5, #54016	; 0xd300
        136ee8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        136eec:	eb6a30b2 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        136ef0:	e28dd008 	add	sp, sp, #8	; 0x8
        136ef4:	e3350000 	teq	r5, #0	; 0x0
        136ef8:	1a00001f 	bne	136f7c <TNewScriptEndpointClient::InitInputBuffers(void)+0x1e8>
        136efc:	e594009c 	ldr	r0, [r4, #156]	; fField156
        136f00:	e3300000 	teq	r0, #0	; 0x0
        136f04:	0a000013 	beq	136f58 <TNewScriptEndpointClient::InitInputBuffers(void)+0x1c4>
        136f08:	e59410a0 	ldr	r1, [r4, #160]	; fField160
        136f0c:	e1510006 	cmp	r1, r6
        136f10:	aa000019 	bge	136f7c <TNewScriptEndpointClient::InitInputBuffers(void)+0x1e8>
        136f14:	e1a01006 	mov	r1, r6
        136f18:	eb6aac90 	bl	1be2160 <$ReallocPtr>
        136f1c:	e1a0a000 	mov	sl, r0
        136f20:	eb6aac7e 	bl	1be2120 <$MemError>
        136f24:	e3300000 	teq	r0, #0	; 0x0
        136f28:	11a05009 	movne	r5, r9
        136f2c:	e58460a0 	str	r6, [r4, #160]	; fField160
        136f30:	e584a09c 	str	sl, [r4, #156]	; fField156
        136f34:	ea000010 	b	136f7c <TNewScriptEndpointClient::InitInputBuffers(void)+0x1e8>
        136f38:	00684a60 	rsbeq	r4, r8, r0, ror #20
        136f3c:	00681ef0 	streqd	r1, [r8], -#224
        136f40:	e5946038 	ldr	r6, [r4, #56]	; fField56
        136f44:	e3560000 	cmp	r6, #0	; 0x0
        136f48:	caffffeb 	bgt	136efc <TNewScriptEndpointClient::InitInputBuffers(void)+0x168>
        136f4c:	e594003c 	ldr	r0, [r4, #60]	; fField60
        136f50:	e2806040 	add	r6, r0, #64	; 0x40
        136f54:	eaffffe8 	b	136efc <TNewScriptEndpointClient::InitInputBuffers(void)+0x168>
        136f58:	e1a00006 	mov	r0, r6
        136f5c:	eb6a7f01 	bl	1bd6b68 <$malloc>
        136f60:	e1a0a000 	mov	sl, r0
        136f64:	eb6aac6d 	bl	1be2120 <$MemError>
        136f68:	e3300000 	teq	r0, #0	; 0x0
        136f6c:	11a05009 	movne	r5, r9
        136f70:	e58460a0 	str	r6, [r4, #160]	; fField160
        136f74:	e584a09c 	str	sl, [r4, #156]	; fField156
        136f78:	e58480a4 	str	r8, [r4, #164]	; fField164
        136f7c:	e58480ac 	str	r8, [r4, #172]	; fField172
        136f80:	e5c480a8 	strb	r8, [r4, #168]	; fField168
        136f84:	e3350000 	teq	r5, #0	; 0x0
        136f88:	1a000015 	bne	136fe4 <TNewScriptEndpointClient::InitInputBuffers(void)+0x250>
        136f8c:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        136f90:	e3500000 	cmp	r0, #0	; 0x0
        136f94:	c5c470a8 	strgtb	r7, [r4, #168]	; fField168
        136f98:	c1a07000 	movgt	r7, r0
        136f9c:	c3a06000 	movgt	r6, #0	; 0x0
        136fa0:	ca00000b 	bgt	136fd4 <TNewScriptEndpointClient::InitInputBuffers(void)+0x240>
        136fa4:	ea00000e 	b	136fe4 <TNewScriptEndpointClient::InitInputBuffers(void)+0x250>
        136fa8:	e2861001 	add	r1, r6, #1	; 0x1
        136fac:	e1a06001 	mov	r6, r1
        136fb0:	e1a00004 	mov	r0, r4
        136fb4:	e3a02000 	mov	r2, #0	; 0x0
        136fb8:	eb65cd69 	bl	1aaa564 <TNewScriptEndpointClient::$CheckForInput(long, unsigned char)>
        136fbc:	e1b05000 	movs	r5, r0
        136fc0:	1a000007 	bne	136fe4 <TNewScriptEndpointClient::InitInputBuffers(void)+0x250>
        136fc4:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        136fc8:	e1300007 	teq	r0, r7
        136fcc:	13a06000 	movne	r6, #0	; 0x0
        136fd0:	159470a4 	ldrne	r7, [r4, #164]	; fField164
        136fd4:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        136fd8:	e3500000 	cmp	r0, #0	; 0x0
        136fdc:	c1500006 	cmpgt	r0, r6
        136fe0:	cafffff0 	bgt	136fa8 <TNewScriptEndpointClient::InitInputBuffers(void)+0x214>
        136fe4:	e1a00005 	mov	r0, r5
        136fe8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::GetFrameLength(void)
 * Address: 00136fec
 */
TNewScriptEndpointClient::GetFrameLength(void) {
    /*
        136fec:	e1a0c00d 	mov	ip, sp
        136ff0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        136ff4:	e24cb004 	sub	fp, ip, #4	; 0x4
        136ff8:	e1a04000 	mov	r4, r0
        136ffc:	e3a06000 	mov	r6, #0	; 0x0
        137000:	e590009c 	ldr	r0, [r0, #156]	; fField156
        137004:	e5905000 	ldr	r5, [r0]
        137008:	e59410a4 	ldr	r1, [r4, #164]	; fField164
        13700c:	e2412004 	sub	r2, r1, #4	; 0x4
        137010:	e3550000 	cmp	r5, #0	; 0x0
        137014:	e58420a4 	str	r2, [r4, #164]	; fField164
        137018:	da000013 	ble	13706c <TNewScriptEndpointClient::GetFrameLength(void)+0x80>
        13701c:	e1a01000 	mov	r1, r0
        137020:	e2800004 	add	r0, r0, #4	; 0x4
        137024:	eb6a9fca 	bl	1bdef54 <$BlockMove>
        137028:	e3a00000 	mov	r0, #0	; 0x0
        13702c:	e5c40044 	strb	r0, [r4, #68]	; fField68
        137030:	e59400a0 	ldr	r0, [r4, #160]	; fField160
        137034:	e1500005 	cmp	r0, r5
        137038:	aa000009 	bge	137064 <TNewScriptEndpointClient::GetFrameLength(void)+0x78>
        13703c:	e1a01005 	mov	r1, r5
        137040:	e594009c 	ldr	r0, [r4, #156]	; fField156
        137044:	eb6aac45 	bl	1be2160 <$ReallocPtr>
        137048:	e1a07000 	mov	r7, r0
        13704c:	eb6aac33 	bl	1be2120 <$MemError>
        137050:	e3300000 	teq	r0, #0	; 0x0
        137054:	13a060e9 	movne	r6, #233	; 0xe9
        137058:	12466b0a 	subne	r6, r6, #10240	; 0x2800
        13705c:	e58450a0 	str	r5, [r4, #160]	; fField160
        137060:	e584709c 	str	r7, [r4, #156]	; fField156
        137064:	e5a45038 	str	r5, [r4, #56]!	; fField56
        137068:	ea000001 	b	137074 <TNewScriptEndpointClient::GetFrameLength(void)+0x88>
        13706c:	e3a00001 	mov	r0, #1	; 0x1
        137070:	e5c40044 	strb	r0, [r4, #68]	; fField68
        137074:	e1a00006 	mov	r0, r6
        137078:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::RcvComplete(TEndpointEvent *)
 * Address: 0013707c
 */
TNewScriptEndpointClient::RcvComplete(TEndpointEvent *) {
    /*
        13707c:	e1a0c00d 	mov	ip, sp
        137080:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        137084:	e24cb004 	sub	fp, ip, #4	; 0x4
        137088:	e1a04000 	mov	r4, r0
        13708c:	e1a06001 	mov	r6, r1
        137090:	e3a08000 	mov	r8, #0	; 0x0
        137094:	e5c080b0 	strb	r8, [r0, #176]
        137098:	e5915008 	ldr	r5, [r1, #8]
        13709c:	e5d00064 	ldrb	r0, [r0, #100]	; fField100
        1370a0:	e3300000 	teq	r0, #0	; 0x0
        1370a4:	0a00000f 	beq	1370e8 <TNewScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x6c>
        1370a8:	e2840068 	add	r0, r4, #104	; 0x68
        1370ac:	e1a07000 	mov	r7, r0
        1370b0:	e5900000 	ldr	r0, [r0]
        1370b4:	e5900000 	ldr	r0, [r0]
        1370b8:	e3300002 	teq	r0, #2	; 0x2
        1370bc:	0a000007 	beq	1370e0 <TNewScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x64>
        1370c0:	e1a00007 	mov	r0, r7
        1370c4:	eb662c15 	bl	1ac2120 <$IsRawOrString(RefVar const &)>
        1370c8:	e3300000 	teq	r0, #0	; 0x0
        1370cc:	0a000003 	beq	1370e0 <TNewScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x64>
        1370d0:	e5970000 	ldr	r0, [r7]
        1370d4:	e5900000 	ldr	r0, [r0]
        1370d8:	eb6a44e4 	bl	1bc8470 <$UnlockRef(long)>
        1370dc:	ea000001 	b	1370e8 <TNewScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x6c>
        1370e0:	e3a05006 	mov	r5, #6	; 0x6
        1370e4:	e2455cd3 	sub	r5, r5, #54016	; 0xd300
        1370e8:	e2840034 	add	r0, r4, #52	; 0x34
        1370ec:	e1a07000 	mov	r7, r0
        1370f0:	e5900000 	ldr	r0, [r0]
        1370f4:	e5900000 	ldr	r0, [r0]
        1370f8:	e3300002 	teq	r0, #2	; 0x2
        1370fc:	03a05ed1 	moveq	r5, #3344	; 0xd10
        137100:	02455a0e 	subeq	r5, r5, #57344	; 0xe000
        137104:	e3a0a001 	mov	sl, #1	; 0x1
        137108:	e5969030 	ldr	r9, [r6, #48]	; fField48
        13710c:	e3390000 	teq	r9, #0	; 0x0
        137110:	0a00000f 	beq	137154 <TNewScriptEndpointClient::RcvComplete(TEndpointEvent *)+0xd8>
        137114:	e3350000 	teq	r5, #0	; 0x0
        137118:	1a00000d 	bne	137154 <TNewScriptEndpointClient::RcvComplete(TEndpointEvent *)+0xd8>
        13711c:	e284005c 	add	r0, r4, #92	; 0x5c
        137120:	e1a01000 	mov	r1, r0
        137124:	e5900000 	ldr	r0, [r0]
        137128:	e5900000 	ldr	r0, [r0]
        13712c:	e3300000 	teq	r0, #0	; 0x0
        137130:	0a000004 	beq	137148 <TNewScriptEndpointClient::RcvComplete(TEndpointEvent *)+0xcc>
        137134:	e1a02009 	mov	r2, r9
        137138:	e1a00004 	mov	r0, r4
        13713c:	eb65d124 	bl	1aab5d4 <TNewScriptEndpointClient::$ConvertFromOptionArray(RefVar const &, TOptionArray *)>
        137140:	e1a05000 	mov	r5, r0
        137144:	e584a060 	str	sl, [r4, #96]	; fField96
        137148:	e1a00009 	mov	r0, r9
        13714c:	e3a01001 	mov	r1, #1	; 0x1
        137150:	eb69fe75 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        137154:	e3350000 	teq	r5, #0	; 0x0
        137158:	1a00000c 	bne	137190 <TNewScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x114>
        13715c:	e5c4a0b1 	strb	sl, [r4, #177]	; fField177
        137160:	e5d40064 	ldrb	r0, [r4, #100]	; fField100
        137164:	e3300000 	teq	r0, #0	; 0x0
        137168:	0a000003 	beq	13717c <TNewScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x100>
        13716c:	e1a01006 	mov	r1, r6
        137170:	e1a00004 	mov	r0, r4
        137174:	eb66028f 	bl	1ab7bb8 <TNewScriptEndpointClient::$RawRcvComplete(TRcvCompleteEvent *)>
        137178:	ea000002 	b	137188 <TNewScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x10c>
        13717c:	e1a00004 	mov	r0, r4
        137180:	e5b6102c 	ldr	r1, [r6, #44]!	; fField44
        137184:	eb65e9c5 	bl	1ab18a0 <TNewScriptEndpointClient::$FilterRcvComplete(unsigned long)>
        137188:	e1a05000 	mov	r5, r0
        13718c:	e5c480b1 	strb	r8, [r4, #177]	; fField177
        137190:	e5970000 	ldr	r0, [r7]
        137194:	e5900000 	ldr	r0, [r0]
        137198:	e3300002 	teq	r0, #2	; 0x2
        13719c:	0a000004 	beq	1371b4 <TNewScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x138>
        1371a0:	e3350000 	teq	r5, #0	; 0x0
        1371a4:	1a000002 	bne	1371b4 <TNewScriptEndpointClient::RcvComplete(TEndpointEvent *)+0x138>
        1371a8:	e1a00004 	mov	r0, r4
        1371ac:	eb660278 	bl	1ab7b94 <TNewScriptEndpointClient::$PostReceive(void)>
        1371b0:	e1a05000 	mov	r5, r0
        1371b4:	e3350000 	teq	r5, #0	; 0x0
        1371b8:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1371bc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1371c0:	e5970000 	ldr	r0, [r7]
        1371c4:	e5900000 	ldr	r0, [r0]
        1371c8:	eb6a2bdf 	bl	1bc214c <$AllocateRefHandle(long)>
        1371cc:	e58d0004 	str	r0, [sp, #4]	; fField4
        1371d0:	e1a00004 	mov	r0, r4
        1371d4:	eb65d0ea 	bl	1aab584 <TNewScriptEndpointClient::$ClearInputSpec(void)>
        1371d8:	e1a00008 	mov	r0, r8
        1371dc:	eb6a2bda 	bl	1bc214c <$AllocateRefHandle(long)>
        1371e0:	e58d0000 	str	r0, [sp]
        1371e4:	e1a0300d 	mov	r3, sp
        1371e8:	e28d2004 	add	r2, sp, #4	; 0x4
        1371ec:	e1a01005 	mov	r1, r5
        1371f0:	e1a00004 	mov	r0, r4
        1371f4:	eb65d50b 	bl	1aac628 <TNewScriptEndpointClient::$DoCompletion(long, RefVar const &, RefVar const &)>
        1371f8:	e59d0000 	ldr	r0, [sp]
        1371fc:	eb6a2fee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137200:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        137204:	eb6a2fec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137208:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)
 * Address: 0013720c
 */
TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *) {
    /*
        13720c:	e1a0c00d 	mov	ip, sp
        137210:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        137214:	e24cb004 	sub	fp, ip, #4	; 0x4
        137218:	e1a04000 	mov	r4, r0
        13721c:	e1a05001 	mov	r5, r1
        137220:	e5d00024 	ldrb	r0, [r0, #36]	; fField36
        137224:	e3300000 	teq	r0, #0	; 0x0
        137228:	0a000002 	beq	137238 <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x2c>
        13722c:	e595002c 	ldr	r0, [r5, #44]	; fField44
        137230:	e3100001 	tst	r0, #1	; 0x1
        137234:	03a06002 	moveq	r6, #2	; 0x2
        137238:	e2840034 	add	r0, r4, #52	; 0x34
        13723c:	e1a09000 	mov	r9, r0
        137240:	e59f115c 	ldr	r1, [pc, #15c]	; 1373a4 <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x198>
        137244:	e1a08001 	mov	r8, r1
        137248:	e3a03000 	mov	r3, #0	; 0x0
        13724c:	e3a02000 	mov	r2, #0	; 0x0
        137250:	eb6a3407 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        137254:	eb6a2bbc 	bl	1bc214c <$AllocateRefHandle(long)>
        137258:	e1a07000 	mov	r7, r0
        13725c:	e5900000 	ldr	r0, [r0]
        137260:	e3a0a000 	mov	sl, #0	; 0x0
        137264:	e3300002 	teq	r0, #2	; 0x2
        137268:	0a0000a9 	beq	137514 <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x308>
        13726c:	e24dd004 	sub	sp, sp, #4	; 0x4
        137270:	eb6a2bb2 	bl	1bc2140 <$AllocateFrame(void)>
        137274:	eb6a2bb4 	bl	1bc214c <$AllocateRefHandle(long)>
        137278:	e40d0004 	str	r0, [sp], -#4	; fField4
        13727c:	e1a00006 	mov	r0, r6
        137280:	e59f1120 	ldr	r1, [pc, #120]	; 1373a8 <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x19c>
        137284:	e59f6120 	ldr	r6, [pc, #120]	; 1373ac <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x1a0>
        137288:	e3300002 	teq	r0, #2	; 0x2
        13728c:	11a02006 	movne	r2, r6
        137290:	059f2118 	ldreq	r2, [pc, #118]	; 1373b0 <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x1a4>
        137294:	e28d0004 	add	r0, sp, #4	; 0x4
        137298:	eb6a3c32 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        13729c:	e5b50028 	ldr	r0, [r5, #40]!	; fField40
        1372a0:	e1a00100 	mov	r0, r0, lsl #2
        1372a4:	eb6a2ba8 	bl	1bc214c <$AllocateRefHandle(long)>
        1372a8:	e58d0000 	str	r0, [sp]
        1372ac:	e1a0200d 	mov	r2, sp
        1372b0:	e1a01006 	mov	r1, r6
        1372b4:	e28d0004 	add	r0, sp, #4	; 0x4
        1372b8:	eb6a3c2a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1372bc:	e59d0000 	ldr	r0, [sp]
        1372c0:	eb6a2fbd 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1372c4:	e3a00002 	mov	r0, #2	; 0x2
        1372c8:	eb6a2b9f 	bl	1bc214c <$AllocateRefHandle(long)>
        1372cc:	e1a05000 	mov	r5, r0
        1372d0:	e5940060 	ldr	r0, [r4, #96]	; fField96
        1372d4:	e3300001 	teq	r0, #1	; 0x1
        1372d8:	1a000007 	bne	1372fc <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0xf0>
        1372dc:	e284005c 	add	r0, r4, #92	; 0x5c
        1372e0:	e5901000 	ldr	r1, [r0]
        1372e4:	e5911000 	ldr	r1, [r1]
        1372e8:	e5851000 	str	r1, [r5]
        1372ec:	e3a01002 	mov	r1, #2	; 0x2
        1372f0:	e5900000 	ldr	r0, [r0]
        1372f4:	e5801000 	str	r1, [r0]
        1372f8:	e5841060 	str	r1, [r4, #96]	; fField96
        1372fc:	e24dd004 	sub	sp, sp, #4	; 0x4
        137300:	e3a00004 	mov	r0, #4	; 0x4
        137304:	eb6592a4 	bl	1a9bd9c <$MakeArray(long)>
        137308:	eb6a2b8f 	bl	1bc214c <$AllocateRefHandle(long)>
        13730c:	e58d0000 	str	r0, [sp]
        137310:	e2840018 	add	r0, r4, #24	; 0x18
        137314:	e1a06000 	mov	r6, r0
        137318:	e5900000 	ldr	r0, [r0]
        13731c:	e1a0100a 	mov	r1, sl
        137320:	e5902000 	ldr	r2, [r0]
        137324:	e59d0000 	ldr	r0, [sp]
        137328:	e5900000 	ldr	r0, [r0]
        13732c:	eb6a3c09 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        137330:	e5940068 	ldr	r0, [r4, #104]	; fField104
        137334:	e3a01001 	mov	r1, #1	; 0x1
        137338:	e5902000 	ldr	r2, [r0]
        13733c:	e59d0000 	ldr	r0, [sp]
        137340:	e5900000 	ldr	r0, [r0]
        137344:	eb6a3c03 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        137348:	e59d0008 	ldr	r0, [sp, #8]
        13734c:	e3a01002 	mov	r1, #2	; 0x2
        137350:	e5902000 	ldr	r2, [r0]
        137354:	e59d0000 	ldr	r0, [sp]
        137358:	e5900000 	ldr	r0, [r0]
        13735c:	eb6a3bfd 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        137360:	e3a01003 	mov	r1, #3	; 0x3
        137364:	e5952000 	ldr	r2, [r5]
        137368:	e59d0000 	ldr	r0, [sp]
        13736c:	e5900000 	ldr	r0, [r0]
        137370:	eb6a3bf8 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        137374:	e52da06c 	str	sl, [sp, -#108]!	; fField108
        137378:	e28d0008 	add	r0, sp, #8	; 0x8
        13737c:	eb69ed7c 	bl	1bb2974 <$setjmp>
        137380:	e3300000 	teq	r0, #0	; 0x0
        137384:	1a00000a 	bne	1373b4 <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x1a8>
        137388:	e1a0000d 	mov	r0, sp
        13738c:	eb6aa33a 	bl	1be007c <$AddExceptionHandler>
        137390:	e1a00009 	mov	r0, r9
        137394:	e28d206c 	add	r2, sp, #108	; 0x6c
        137398:	e1a01008 	mov	r1, r8
        13739c:	eb6a2f8c 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        1373a0:	ea000051 	b	1374ec <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x2e0>
        1373a4:	00683278 	rsbeq	r3, r8, r8, ror r2
        1373a8:	00682560 	rsbeq	r2, r8, r0, ror #10
        1373ac:	00682250 	rsbeq	r2, r8, r0, asr r2
        1373b0:	00684db0 	streqh	r4, [r8], -#208	; fField208
        1373b4:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        1373b8:	e59f1104 	ldr	r1, [pc, #104]	; 1374c4 <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x2b8>	; fField104
        1373bc:	e5911000 	ldr	r1, [r1]
        1373c0:	eb6aaf73 	bl	1be3194 <$Subexception>
        1373c4:	e3300000 	teq	r0, #0	; 0x0
        1373c8:	0a000045 	beq	1374e4 <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x2d8>
        1373cc:	e5960000 	ldr	r0, [r6]
        1373d0:	e5900000 	ldr	r0, [r0]
        1373d4:	e3300002 	teq	r0, #2	; 0x2
        1373d8:	0a00003e 	beq	1374d8 <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x2cc>
        1373dc:	e1a00006 	mov	r0, r6
        1373e0:	e59f10e0 	ldr	r1, [pc, #e0]	; 1374c8 <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x2bc>
        1373e4:	e1a04001 	mov	r4, r1
        1373e8:	e3a03000 	mov	r3, #0	; 0x0
        1373ec:	e3a02000 	mov	r2, #0	; 0x0
        1373f0:	eb6a339f 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1373f4:	e3300002 	teq	r0, #2	; 0x2
        1373f8:	0a000036 	beq	1374d8 <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x2cc>
        1373fc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        137400:	eb6a2b4e 	bl	1bc2140 <$AllocateFrame(void)>
        137404:	eb6a2b50 	bl	1bc214c <$AllocateRefHandle(long)>
        137408:	e58d0008 	str	r0, [sp, #8]
        13740c:	e59d006c 	ldr	r0, [sp, #108]	; fField108
        137410:	eb6a379a 	bl	1bc5280 <$Intern(char *)>
        137414:	eb6a2b4c 	bl	1bc214c <$AllocateRefHandle(long)>
        137418:	e58d0000 	str	r0, [sp]
        13741c:	e1a0200d 	mov	r2, sp
        137420:	e59f10a4 	ldr	r1, [pc, #a4]	; 1374cc <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x2c0>
        137424:	e28d0008 	add	r0, sp, #8	; 0x8
        137428:	eb6a3bce 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        13742c:	e59d0000 	ldr	r0, [sp]
        137430:	eb6a2f61 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137434:	e59d0070 	ldr	r0, [sp, #112]
        137438:	e1a00100 	mov	r0, r0, lsl #2
        13743c:	eb6a2b42 	bl	1bc214c <$AllocateRefHandle(long)>
        137440:	e58d0004 	str	r0, [sp, #4]	; fField4
        137444:	e28d2004 	add	r2, sp, #4	; 0x4
        137448:	e59f1080 	ldr	r1, [pc, #80]	; 1374d0 <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x2c4>	; fField80
        13744c:	e28d0008 	add	r0, sp, #8	; 0x8
        137450:	eb6a3bc4 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        137454:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        137458:	eb6a2f57 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13745c:	e1a02008 	mov	r2, r8
        137460:	e59f106c 	ldr	r1, [pc, #6c]	; 1374d4 <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x2c8>
        137464:	e28d0008 	add	r0, sp, #8	; 0x8
        137468:	eb6a3bbe 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        13746c:	e24dd004 	sub	sp, sp, #4	; 0x4
        137470:	e3a00001 	mov	r0, #1	; 0x1
        137474:	eb659248 	bl	1a9bd9c <$MakeArray(long)>
        137478:	eb6a2b33 	bl	1bc214c <$AllocateRefHandle(long)>
        13747c:	e58d0000 	str	r0, [sp]
        137480:	e59d000c 	ldr	r0, [sp, #12]
        137484:	e1a0100a 	mov	r1, sl
        137488:	e5902000 	ldr	r2, [r0]
        13748c:	e59d0000 	ldr	r0, [sp]
        137490:	e5900000 	ldr	r0, [r0]
        137494:	eb6a3baf 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        137498:	e1a00006 	mov	r0, r6
        13749c:	e1a0200d 	mov	r2, sp
        1374a0:	e1a01004 	mov	r1, r4
        1374a4:	eb6a2f4a 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        1374a8:	e59d0000 	ldr	r0, [sp]
        1374ac:	eb6a2f42 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1374b0:	e28dd004 	add	sp, sp, #4	; 0x4
        1374b4:	e59d0008 	ldr	r0, [sp, #8]
        1374b8:	eb6a2f3f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1374bc:	e28dd00c 	add	sp, sp, #12	; 0xc
        1374c0:	ea000009 	b	1374ec <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x2e0>
        1374c4:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        1374c8:	00682ce0 	rsbeq	r2, r8, r0, ror #25
        1374cc:	006839a8 	rsbeq	r3, r8, r8, lsr #19
        1374d0:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        1374d4:	00682840 	rsbeq	r2, r8, r0, asr #16
        1374d8:	e28d0060 	add	r0, sp, #96	; 0x60
        1374dc:	eb6af12c 	bl	1bf3994 <$ExceptionNotify(Exception *)>
        1374e0:	ea000001 	b	1374ec <TNewScriptEndpointClient::RawRcvComplete(TRcvCompleteEvent *)+0x2e0>
        1374e4:	e1a0000d 	mov	r0, sp
        1374e8:	eb6aab19 	bl	1be2154 <$NextHandler>
        1374ec:	e1a0000d 	mov	r0, sp
        1374f0:	eb6aa6f0 	bl	1be10b8 <$ExitHandler>
        1374f4:	e5bd006c 	ldr	r0, [sp, #108]!	; fField108
        1374f8:	eb6a2f2f 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1374fc:	e28dd004 	add	sp, sp, #4	; 0x4
        137500:	e1a00005 	mov	r0, r5
        137504:	eb6a2f2c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137508:	e5bd0004 	ldr	r0, [sp, #4]!	; fField4
        13750c:	eb6a2f2a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137510:	e28dd004 	add	sp, sp, #4	; 0x4
        137514:	e1a00007 	mov	r0, r7
        137518:	eb6a2f27 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13751c:	e1a0000a 	mov	r0, sl
        137520:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::FilterRcvComplete(unsigned long)
 * Address: 00137524
 */
TNewScriptEndpointClient::FilterRcvComplete(unsigned long) {
    /*
        137524:	e1a0c00d 	mov	ip, sp
        137528:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        13752c:	e24cb004 	sub	fp, ip, #4	; 0x4
        137530:	e1a04000 	mov	r4, r0
        137534:	e1a05001 	mov	r5, r1
        137538:	e3a00000 	mov	r0, #0	; 0x0
        13753c:	e52d000c 	str	r0, [sp, -#12]!
        137540:	e2840050 	add	r0, r4, #80	; 0x50
        137544:	e1a0a000 	mov	sl, r0
        137548:	e5900000 	ldr	r0, [r0]
        13754c:	e5900000 	ldr	r0, [r0]
        137550:	e3300002 	teq	r0, #2	; 0x2
        137554:	0a000002 	beq	137564 <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0x40>
        137558:	eb6a3753 	bl	1bc52ac <$Length(long)>
        13755c:	e1a08000 	mov	r8, r0
        137560:	ea000000 	b	137568 <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0x44>
        137564:	e3a08000 	mov	r8, #0	; 0x0
        137568:	e2849054 	add	r9, r4, #84	; 0x54
        13756c:	e2051001 	and	r1, r5, #1	; 0x1
        137570:	e2840074 	add	r0, r4, #116	; 0x74
        137574:	e98d0003 	stmib	sp, {r0, r1}
        137578:	ea00003a 	b	137668 <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0x144>
        13757c:	e3a07001 	mov	r7, #1	; 0x1
        137580:	e3a06000 	mov	r6, #0	; 0x0
        137584:	e3580000 	cmp	r8, #0	; 0x0
        137588:	da000022 	ble	137618 <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0xf4>
        13758c:	e1a01006 	mov	r1, r6
        137590:	e59a0000 	ldr	r0, [sl]
        137594:	e5900000 	ldr	r0, [r0]
        137598:	eb6a332d 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        13759c:	e3100003 	tst	r0, #3	; 0x3
        1375a0:	01a00140 	moveq	r0, r0, asr #2
        1375a4:	0a000000 	beq	1375ac <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0x88>
        1375a8:	eb6a2adb 	bl	1bc211c <$_RINTError(long)>
        1375ac:	e20000ff 	and	r0, r0, #255	; 0xff
        1375b0:	e1300005 	teq	r0, r5
        1375b4:	1a000012 	bne	137604 <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0xe0>
        1375b8:	e1a01006 	mov	r1, r6
        1375bc:	e5990000 	ldr	r0, [r9]
        1375c0:	e5900000 	ldr	r0, [r0]
        1375c4:	eb6a3322 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        1375c8:	eb6a2adf 	bl	1bc214c <$AllocateRefHandle(long)>
        1375cc:	e1a06000 	mov	r6, r0
        1375d0:	e5900000 	ldr	r0, [r0]
        1375d4:	e3300002 	teq	r0, #2	; 0x2
        1375d8:	0a000005 	beq	1375f4 <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0xd0>
        1375dc:	e3100003 	tst	r0, #3	; 0x3
        1375e0:	01a00140 	moveq	r0, r0, asr #2
        1375e4:	0a000000 	beq	1375ec <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0xc8>
        1375e8:	eb6a2acb 	bl	1bc211c <$_RINTError(long)>
        1375ec:	e20050ff 	and	r5, r0, #255	; 0xff
        1375f0:	ea000000 	b	1375f8 <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0xd4>
        1375f4:	e3a07000 	mov	r7, #0	; 0x0
        1375f8:	e1a00006 	mov	r0, r6
        1375fc:	eb6a2eee 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137600:	ea000002 	b	137610 <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0xec>
        137604:	e2866001 	add	r6, r6, #1	; 0x1
        137608:	e1560008 	cmp	r6, r8
        13760c:	baffffde 	blt	13758c <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0x68>
        137610:	e3370000 	teq	r7, #0	; 0x0
        137614:	0a000013 	beq	137668 <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0x144>
        137618:	e5d40058 	ldrb	r0, [r4, #88]	; fField88
        13761c:	e3300000 	teq	r0, #0	; 0x0
        137620:	1205507f 	andne	r5, r5, #127	; 0x7f
        137624:	e3a00001 	mov	r0, #1	; 0x1
        137628:	e5c400a8 	strb	r0, [r4, #168]	; fField168
        13762c:	e59410a4 	ldr	r1, [r4, #164]	; fField164
        137630:	e0810000 	add	r0, r1, r0
        137634:	e58400a4 	str	r0, [r4, #164]	; fField164
        137638:	e594009c 	ldr	r0, [r4, #156]	; fField156
        13763c:	e7c05001 	strb	r5, [r0, r1]
        137640:	e59d1008 	ldr	r1, [sp, #8]
        137644:	e3310000 	teq	r1, #0	; 0x0
        137648:	13a02000 	movne	r2, #0	; 0x0
        13764c:	03a02001 	moveq	r2, #1	; 0x1
        137650:	e59410a4 	ldr	r1, [r4, #164]	; fField164
        137654:	e1a00004 	mov	r0, r4
        137658:	eb65cbc1 	bl	1aaa564 <TNewScriptEndpointClient::$CheckForInput(long, unsigned char)>
        13765c:	e58d0000 	str	r0, [sp]
        137660:	e3300000 	teq	r0, #0	; 0x0
        137664:	1a000009 	bne	137690 <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0x16c>
        137668:	e594009c 	ldr	r0, [r4, #156]	; fField156
        13766c:	e3300000 	teq	r0, #0	; 0x0
        137670:	0a000006 	beq	137690 <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0x16c>
        137674:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        137678:	e5901000 	ldr	r1, [r0]
        13767c:	e1a0e00f 	mov	lr, pc
        137680:	e281f010 	add	pc, r1, #16	; 0x10
        137684:	e1a05000 	mov	r5, r0
        137688:	e3700001 	cmn	r0, #1	; 0x1
        13768c:	1affffba 	bne	13757c <TNewScriptEndpointClient::FilterRcvComplete(unsigned long)+0x58>
        137690:	e49d000c 	ldr	r0, [sp], #12
        137694:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::CheckForInput(long, unsigned char)
 * Address: 00137698
 */
TNewScriptEndpointClient::CheckForInput(long, unsigned char) {
    /*
        137698:	e1a0c00d 	mov	ip, sp
        13769c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1376a0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1376a4:	e1a04000 	mov	r4, r0
        1376a8:	e1a05001 	mov	r5, r1
        1376ac:	e20270ff 	and	r7, r2, #255	; 0xff
        1376b0:	e3a06000 	mov	r6, #0	; 0x0
        1376b4:	e5900038 	ldr	r0, [r0, #56]	; fField56
        1376b8:	e3500000 	cmp	r0, #0	; 0x0
        1376bc:	da00000d 	ble	1376f8 <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0x60>
        1376c0:	e1300005 	teq	r0, r5
        1376c4:	1a00000b 	bne	1376f8 <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0x60>
        1376c8:	e59400b4 	ldr	r0, [r4, #180]	; fField180
        1376cc:	e3300007 	teq	r0, #7	; 0x7
        1376d0:	1a000006 	bne	1376f0 <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0x58>
        1376d4:	e5d40044 	ldrb	r0, [r4, #68]	; fField68
        1376d8:	e3300000 	teq	r0, #0	; 0x0
        1376dc:	0a000003 	beq	1376f0 <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0x58>
        1376e0:	e1a00004 	mov	r0, r4
        1376e4:	eb66267c 	bl	1ac10dc <TNewScriptEndpointClient::$GetFrameLength(void)>
        1376e8:	e1a06000 	mov	r6, r0
        1376ec:	ea00001e 	b	13776c <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0xd4>
        1376f0:	e3a02001 	mov	r2, #1	; 0x1
        1376f4:	ea00000c 	b	13772c <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0x94>
        1376f8:	e5940040 	ldr	r0, [r4, #64]	; fField64
        1376fc:	e5900000 	ldr	r0, [r0]
        137700:	e3300002 	teq	r0, #2	; 0x2
        137704:	0a00000d 	beq	137740 <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0xa8>
        137708:	e594009c 	ldr	r0, [r4, #156]	; fField156
        13770c:	e0800005 	add	r0, r0, r5
        137710:	e2401001 	sub	r1, r0, #1	; 0x1
        137714:	e1a00004 	mov	r0, r4
        137718:	eb65cb90 	bl	1aaa560 <TNewScriptEndpointClient::$CheckEndArray(unsigned char *)>
        13771c:	e3500000 	cmp	r0, #0	; 0x0
        137720:	da000006 	ble	137740 <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0xa8>
        137724:	e2902002 	adds	r2, r0, #2	; 0x2
        137728:	0a00000f 	beq	13776c <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0xd4>
        13772c:	e1a01005 	mov	r1, r5
        137730:	e1a00004 	mov	r0, r4
        137734:	eb660115 	bl	1ab7b90 <TNewScriptEndpointClient::$PostInput(long, long)>
        137738:	e1a06000 	mov	r6, r0
        13773c:	ea00001b 	b	1377b0 <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0x118>
        137740:	e3370000 	teq	r7, #0	; 0x0
        137744:	15d40024 	ldrneb	r0, [r4, #36]	; fField36
        137748:	13300000 	teqne	r0, #0	; 0x0
        13774c:	0a000006 	beq	13776c <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0xd4>
        137750:	e2840074 	add	r0, r4, #116	; 0x74
        137754:	e5901000 	ldr	r1, [r0]
        137758:	e1a0e00f 	mov	lr, pc
        13775c:	e281f004 	add	pc, r1, #4	; 0x4
        137760:	e3700001 	cmn	r0, #1	; 0x1
        137764:	03a02002 	moveq	r2, #2	; 0x2
        137768:	0affffef 	beq	13772c <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0x94>
        13776c:	e59400a0 	ldr	r0, [r4, #160]	; fField160
        137770:	e1300005 	teq	r0, r5
        137774:	1a00000d 	bne	1377b0 <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0x118>
        137778:	e2402040 	sub	r2, r0, #64	; 0x40
        13777c:	e594109c 	ldr	r1, [r4, #156]	; fField156
        137780:	e2810040 	add	r0, r1, #64	; 0x40
        137784:	eb6a9df2 	bl	1bdef54 <$BlockMove>
        137788:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        13778c:	e2400040 	sub	r0, r0, #64	; 0x40
        137790:	e58400a4 	str	r0, [r4, #164]	; fField164
        137794:	e59400ac 	ldr	r0, [r4, #172]	; fField172
        137798:	e3500000 	cmp	r0, #0	; 0x0
        13779c:	da000003 	ble	1377b0 <TNewScriptEndpointClient::CheckForInput(long, unsigned char)+0x118>
        1377a0:	e2500040 	subs	r0, r0, #64	; 0x40
        1377a4:	e58400ac 	str	r0, [r4, #172]	; fField172
        1377a8:	43a00000 	movmi	r0, #0	; 0x0
        1377ac:	45a400ac 	strmi	r0, [r4, #172]!	; fField172
        1377b0:	e1a00006 	mov	r0, r6
        1377b4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)
 * Address: 001377b8
 */
TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *) {
    /*
        1377b8:	e1a0c00d 	mov	ip, sp
        1377bc:	e92dd87f 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, fp, ip, lr, pc}
        1377c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1377c4:	e51b001c 	ldr	r0, [fp, -#28]	; fField28
        1377c8:	e1b00000 	movs	r0, r0
        1377cc:	13a00001 	movne	r0, #1	; 0x1
        1377d0:	e20050ff 	and	r5, r0, #255	; 0xff
        1377d4:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        1377d8:	e2801018 	add	r1, r0, #24	; 0x18
        1377dc:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
        1377e0:	e5900000 	ldr	r0, [r0]
        1377e4:	e5900000 	ldr	r0, [r0]
        1377e8:	e5911000 	ldr	r1, [r1]
        1377ec:	e5810000 	str	r0, [r1]
        1377f0:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
        1377f4:	e5901000 	ldr	r1, [r0]
        1377f8:	e5911000 	ldr	r1, [r1]
        1377fc:	e3310002 	teq	r1, #2	; 0x2
        137800:	03a04002 	moveq	r4, #2	; 0x2
        137804:	02444cd3 	subeq	r4, r4, #54016	; 0xd300
        137808:	0a000018 	beq	137870 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0xb8>
        13780c:	e59f1064 	ldr	r1, [pc, #64]	; 137878 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0xc0>	; fField64
        137810:	e3a03000 	mov	r3, #0	; 0x0
        137814:	e3a02000 	mov	r2, #0	; 0x0
        137818:	eb6a3295 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        13781c:	eb6a2a4a 	bl	1bc214c <$AllocateRefHandle(long)>
        137820:	e1a06000 	mov	r6, r0
        137824:	e5900000 	ldr	r0, [r0]
        137828:	e3300002 	teq	r0, #2	; 0x2
        13782c:	051b0028 	ldreq	r0, [fp, -#40]	; fField40
        137830:	02800074 	addeq	r0, r0, #116	; 0x74
        137834:	03a01c02 	moveq	r1, #512	; 0x200
        137838:	0a000006 	beq	137858 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0xa0>
        13783c:	e3100003 	tst	r0, #3	; 0x3
        137840:	01a00140 	moveq	r0, r0, asr #2
        137844:	0a000000 	beq	13784c <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x94>
        137848:	eb6a2a33 	bl	1bc211c <$_RINTError(long)>
        13784c:	e1a01000 	mov	r1, r0
        137850:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        137854:	e2800074 	add	r0, r0, #116	; 0x74
        137858:	eb6ac712 	bl	1be94a8 <CBufferSegment::$Init(long)>
        13785c:	e1a04000 	mov	r4, r0
        137860:	e1a00006 	mov	r0, r6
        137864:	eb6a2e54 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137868:	e3340000 	teq	r4, #0	; 0x0
        13786c:	0a000002 	beq	13787c <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0xc4>
        137870:	e24dd004 	sub	sp, sp, #4	; 0x4
        137874:	ea00006b 	b	137a28 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x270>
        137878:	006832d8 	ldreqd	r3, [r8], -#40	; fField40
        13787c:	e3350000 	teq	r5, #0	; 0x0
        137880:	1a000035 	bne	13795c <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x1a4>
        137884:	e24dd018 	sub	sp, sp, #24	; 0x18
        137888:	e51b0020 	ldr	r0, [fp, -#32]	; fField32
        13788c:	e5900000 	ldr	r0, [r0]
        137890:	e5900000 	ldr	r0, [r0]
        137894:	e2500002 	subs	r0, r0, #2	; 0x2
        137898:	13a00001 	movne	r0, #1	; 0x1
        13789c:	e20060ff 	and	r6, r0, #255	; 0xff
        1378a0:	e1a0000d 	mov	r0, sp
        1378a4:	eb69f88e 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        1378a8:	e1a0000d 	mov	r0, sp
        1378ac:	eb6a04f2 	bl	1bb8c7c <TOptionArray::$Init(void)>
        1378b0:	e1b04000 	movs	r4, r0
        1378b4:	1a00001f 	bne	137938 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x180>
        1378b8:	e3360000 	teq	r6, #0	; 0x0
        1378bc:	03e04093 	mvneq	r4, #147	; 0x93
        1378c0:	02444c65 	subeq	r4, r4, #25856	; 0x6500
        1378c4:	0a00001b 	beq	137938 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x180>
        1378c8:	e1a0200d 	mov	r2, sp
        1378cc:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        1378d0:	e51b1020 	ldr	r1, [fp, -#32]	; fField32
        1378d4:	eb65cf3f 	bl	1aab5d8 <TNewScriptEndpointClient::$ConvertToOptionArray(RefVar const &, TOptionArray *)>
        1378d8:	e1b04000 	movs	r4, r0
        1378dc:	1a000015 	bne	137938 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x180>
        1378e0:	eb661134 	bl	1abbdb8 <$UseModemNavigator(void)>
        1378e4:	e3300000 	teq	r0, #0	; 0x0
        1378e8:	0a000004 	beq	137900 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x148>
        1378ec:	e1a0000d 	mov	r0, sp
        1378f0:	eb65cf35 	bl	1aab5cc <$ContainsModemService(TOptionArray *)>
        1378f4:	e3300000 	teq	r0, #0	; 0x0
        1378f8:	11a0000d 	movne	r0, sp
        1378fc:	1b6ae7e7 	blne	1bf18a0 <$RunModemNavigator(TOptionArray *)>
        137900:	e24b101c 	sub	r1, fp, #28	; 0x1c
        137904:	e1a0000d 	mov	r0, sp
        137908:	e3a02000 	mov	r2, #0	; 0x0
        13790c:	eb6a00a3 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
        137910:	e1b04000 	movs	r4, r0
        137914:	1a000007 	bne	137938 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x180>
        137918:	e3360000 	teq	r6, #0	; 0x0
        13791c:	0a00000a 	beq	13794c <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x194>
        137920:	e1a0200d 	mov	r2, sp
        137924:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        137928:	e51b1020 	ldr	r1, [fp, -#32]	; fField32
        13792c:	eb65cf28 	bl	1aab5d4 <TNewScriptEndpointClient::$ConvertFromOptionArray(RefVar const &, TOptionArray *)>
        137930:	e1b04000 	movs	r4, r0
        137934:	0a000004 	beq	13794c <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x194>
        137938:	e1a0000d 	mov	r0, sp
        13793c:	e3a01000 	mov	r1, #0	; 0x0
        137940:	eb69fc79 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        137944:	e28dd014 	add	sp, sp, #20	; 0x14
        137948:	ea000036 	b	137a28 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x270>
        13794c:	e1a0000d 	mov	r0, sp
        137950:	e3a01000 	mov	r1, #0	; 0x0
        137954:	eb69fc74 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        137958:	e28dd018 	add	sp, sp, #24	; 0x18
        13795c:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        137960:	e51b101c 	ldr	r1, [fp, -#28]	; fField28
        137964:	e59f30c4 	ldr	r3, [pc, #c4]	; 137a30 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x278>
        137968:	e59f20c4 	ldr	r2, [pc, #c4]	; 137a34 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x27c>
        13796c:	eb6a08c4 	bl	1bb9c84 <TEndpointClient::$Init(TEndpoint *, unsigned long, unsigned long)>
        137970:	e1b04000 	movs	r4, r0
        137974:	e24dd004 	sub	sp, sp, #4	; 0x4
        137978:	1a00002a 	bne	137a28 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x270>
        13797c:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        137980:	eb6546d9 	bl	1a894ec <$AddressToRef(void *)>
        137984:	eb6a29f0 	bl	1bc214c <$AllocateRefHandle(long)>
        137988:	e58d0000 	str	r0, [sp]
        13798c:	e1a0200d 	mov	r2, sp
        137990:	e59f10a0 	ldr	r1, [pc, #a0]	; 137a38 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x280>
        137994:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
        137998:	eb6a3a72 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        13799c:	e59d0000 	ldr	r0, [sp]
        1379a0:	eb6a2e05 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1379a4:	e59f1090 	ldr	r1, [pc, #90]	; 137a3c <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x284>
        1379a8:	e3a03000 	mov	r3, #0	; 0x0
        1379ac:	e3a02000 	mov	r2, #0	; 0x0
        1379b0:	e51b0024 	ldr	r0, [fp, -#36]	; fField36
        1379b4:	eb6a322e 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1379b8:	eb6a29e3 	bl	1bc214c <$AllocateRefHandle(long)>
        1379bc:	e1a04000 	mov	r4, r0
        1379c0:	e5900000 	ldr	r0, [r0]
        1379c4:	e3300002 	teq	r0, #2	; 0x2
        1379c8:	0a000005 	beq	1379e4 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x22c>
        1379cc:	e3100003 	tst	r0, #3	; 0x3
        1379d0:	01a00140 	moveq	r0, r0, asr #2
        1379d4:	0a000000 	beq	1379dc <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x224>
        1379d8:	eb6a29cf 	bl	1bc211c <$_RINTError(long)>
        1379dc:	e51b1028 	ldr	r1, [fp, -#40]	; fField40
        1379e0:	e5a1001c 	str	r0, [r1, #28]!	; fField28
        1379e4:	e1a00004 	mov	r0, r4
        1379e8:	eb6a2df3 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1379ec:	e3a03000 	mov	r3, #0	; 0x0
        1379f0:	e92d0008 	stmdb	sp!, {r3}
        1379f4:	e3a02066 	mov	r2, #102	; 0x66
        1379f8:	e2822c0e 	add	r2, r2, #3584	; 0xe00
        1379fc:	e3a01000 	mov	r1, #0	; 0x0
        137a00:	e51b0028 	ldr	r0, [fp, -#40]	; fField40
        137a04:	eb6ac6b4 	bl	1be94dc <TAEventHandler::$InitIdler(unsigned long, TimeUnits, unsigned long, unsigned char)>
        137a08:	e28dd004 	add	sp, sp, #4	; 0x4
        137a0c:	e1b04000 	movs	r4, r0
        137a10:	03350000 	teqeq	r5, #0	; 0x0
        137a14:	1a000003 	bne	137a28 <TNewScriptEndpointClient::InitScriptEndpointClient(RefVar const &, RefVar const &, TEndpoint *)+0x270>
        137a18:	e51b1028 	ldr	r1, [fp, -#40]	; fField40
        137a1c:	e5910014 	ldr	r0, [r1, #20]	; fField20
        137a20:	eb6a08aa 	bl	1bb9cd0 <TEndpoint::$Open(unsigned long)>
        137a24:	e1a04000 	mov	r4, r0
        137a28:	e1a00004 	mov	r0, r4
        137a2c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        137a30:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        137a34:	656e6470 	strvsb	r6, [lr, -#1136]!
        137a38:	006823f0 	streqd	r2, [r8], -#48	; fField48
        137a3c:	00682b50 	rsbeq	r2, r8, r0, asr fp
    */
}

/**
 * Symbol: TNewScriptEndpointClient::CheckEndArray(unsigned char *)
 * Address: 00137a40
 */
TNewScriptEndpointClient::CheckEndArray(unsigned char *) {
    /*
        137a40:	e1a0c00d 	mov	ip, sp
        137a44:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        137a48:	e24cb004 	sub	fp, ip, #4	; 0x4
        137a4c:	e1a05000 	mov	r5, r0
        137a50:	e1a04001 	mov	r4, r1
        137a54:	e3a06000 	mov	r6, #0	; 0x0
        137a58:	e2800040 	add	r0, r0, #64	; 0x40
        137a5c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        137a60:	e5900000 	ldr	r0, [r0]
        137a64:	e5900000 	ldr	r0, [r0]
        137a68:	eb6a360f 	bl	1bc52ac <$Length(long)>
        137a6c:	e1a0a000 	mov	sl, r0
        137a70:	e3a00002 	mov	r0, #2	; 0x2
        137a74:	eb6a29b4 	bl	1bc214c <$AllocateRefHandle(long)>
        137a78:	e1a08000 	mov	r8, r0
        137a7c:	e3a07000 	mov	r7, #0	; 0x0
        137a80:	ea000029 	b	137b2c <TNewScriptEndpointClient::CheckEndArray(unsigned char *)+0xec>
        137a84:	e1a01007 	mov	r1, r7
        137a88:	e59d0000 	ldr	r0, [sp]
        137a8c:	e5900000 	ldr	r0, [r0]
        137a90:	e5900000 	ldr	r0, [r0]
        137a94:	eb6a31ee 	bl	1bc4254 <$GetArraySlotRef__FlT1>
        137a98:	e5880000 	str	r0, [r8]
        137a9c:	e2001003 	and	r1, r0, #3	; 0x3
        137aa0:	e3510000 	cmp	r1, #0	; 0x0
        137aa4:	1a000008 	bne	137acc <TNewScriptEndpointClient::CheckEndArray(unsigned char *)+0x8c>
        137aa8:	01a00140 	moveq	r0, r0, asr #2
        137aac:	0a000000 	beq	137ab4 <TNewScriptEndpointClient::CheckEndArray(unsigned char *)+0x74>
        137ab0:	eb6a2999 	bl	1bc211c <$_RINTError(long)>
        137ab4:	e5d41000 	ldrb	r1, [r4]
        137ab8:	e1300001 	teq	r0, r1
        137abc:	13a00000 	movne	r0, #0	; 0x0
        137ac0:	03a00001 	moveq	r0, #1	; 0x1
        137ac4:	e20060ff 	and	r6, r0, #255	; 0xff
        137ac8:	ea000016 	b	137b28 <TNewScriptEndpointClient::CheckEndArray(unsigned char *)+0xe8>
        137acc:	eb6a35f6 	bl	1bc52ac <$Length(long)>
        137ad0:	e2409001 	sub	r9, r0, #1	; 0x1
        137ad4:	e595009c 	ldr	r0, [r5, #156]	; fField156
        137ad8:	e0440000 	sub	r0, r4, r0
        137adc:	e1500009 	cmp	r0, r9
        137ae0:	ba000010 	blt	137b28 <TNewScriptEndpointClient::CheckEndArray(unsigned char *)+0xe8>
        137ae4:	e3a06001 	mov	r6, #1	; 0x1
        137ae8:	e5980000 	ldr	r0, [r8]
        137aec:	eb6a299a 	bl	1bc215c <$BinaryData(long)>
        137af0:	e1a01000 	mov	r1, r0
        137af4:	e0440009 	sub	r0, r4, r9
        137af8:	ea000006 	b	137b18 <TNewScriptEndpointClient::CheckEndArray(unsigned char *)+0xd8>
        137afc:	e7d12009 	ldrb	r2, [r1, r9]
        137b00:	e7d03009 	ldrb	r3, [r0, r9]
        137b04:	e1320003 	teq	r2, r3
        137b08:	13a02000 	movne	r2, #0	; 0x0
        137b0c:	03a02001 	moveq	r2, #1	; 0x1
        137b10:	e20260ff 	and	r6, r2, #255	; 0xff
        137b14:	e2499001 	sub	r9, r9, #1	; 0x1
        137b18:	e3590000 	cmp	r9, #0	; 0x0
        137b1c:	ba000001 	blt	137b28 <TNewScriptEndpointClient::CheckEndArray(unsigned char *)+0xe8>
        137b20:	e3360000 	teq	r6, #0	; 0x0
        137b24:	1afffff4 	bne	137afc <TNewScriptEndpointClient::CheckEndArray(unsigned char *)+0xbc>
        137b28:	e2877001 	add	r7, r7, #1	; 0x1
        137b2c:	e157000a 	cmp	r7, sl
        137b30:	aa000001 	bge	137b3c <TNewScriptEndpointClient::CheckEndArray(unsigned char *)+0xfc>
        137b34:	e3360000 	teq	r6, #0	; 0x0
        137b38:	0affffd1 	beq	137a84 <TNewScriptEndpointClient::CheckEndArray(unsigned char *)+0x44>
        137b3c:	e3a04000 	mov	r4, #0	; 0x0
        137b40:	e3360000 	teq	r6, #0	; 0x0
        137b44:	e1a00008 	mov	r0, r8
        137b48:	0a000002 	beq	137b58 <TNewScriptEndpointClient::CheckEndArray(unsigned char *)+0x118>
        137b4c:	eb6a2d9a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137b50:	e1a00007 	mov	r0, r7
        137b54:	ea000001 	b	137b60 <TNewScriptEndpointClient::CheckEndArray(unsigned char *)+0x120>
        137b58:	eb6a2d97 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137b5c:	e1a00004 	mov	r0, r4
        137b60:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoInput(void)
 * Address: 00137b64
 */
TNewScriptEndpointClient::DoInput(void) {
    /*
        137b64:	e5901034 	ldr	r1, [r0, #52]	; fField52
        137b68:	e5911000 	ldr	r1, [r1]
        137b6c:	e3310002 	teq	r1, #2	; 0x2
        137b70:	03a00ed1 	moveq	r0, #3344	; 0xd10
        137b74:	02400a0e 	subeq	r0, r0, #57344	; 0xe000
        137b78:	13a02000 	movne	r2, #0	; 0x0
        137b7c:	159010a4 	ldrne	r1, [r0, #164]	; fField164
        137b80:	1a660002 	bne	1ab7b90 <TNewScriptEndpointClient::$PostInput(long, long)>
        137b84:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewScriptEndpointClient::PostInput(long, long)
 * Address: 00137b88
 */
TNewScriptEndpointClient::PostInput(long, long) {
    /*
        137b88:	e1a0c00d 	mov	ip, sp
        137b8c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        137b90:	e24cb004 	sub	fp, ip, #4	; 0x4
        137b94:	e1a04000 	mov	r4, r0
        137b98:	e1a05001 	mov	r5, r1
        137b9c:	e1a06002 	mov	r6, r2
        137ba0:	e3a00000 	mov	r0, #0	; 0x0
        137ba4:	e52d000c 	str	r0, [sp, -#12]!
        137ba8:	e2840034 	add	r0, r4, #52	; 0x34
        137bac:	e58d0008 	str	r0, [sp, #8]
        137bb0:	e59f1168 	ldr	r1, [pc, #168]	; 137d20 <TNewScriptEndpointClient::PostInput(long, long)+0x198>	; fField168
        137bb4:	e3a03000 	mov	r3, #0	; 0x0
        137bb8:	e3a02000 	mov	r2, #0	; 0x0
        137bbc:	e58d1004 	str	r1, [sp, #4]	; fField4
        137bc0:	eb6a31ab 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        137bc4:	eb6a2960 	bl	1bc214c <$AllocateRefHandle(long)>
        137bc8:	e1a09000 	mov	r9, r0
        137bcc:	e5900000 	ldr	r0, [r0]
        137bd0:	e2500002 	subs	r0, r0, #2	; 0x2
        137bd4:	13a00001 	movne	r0, #1	; 0x1
        137bd8:	e200a0ff 	and	sl, r0, #255	; 0xff
        137bdc:	e3a00002 	mov	r0, #2	; 0x2
        137be0:	eb6a2959 	bl	1bc214c <$AllocateRefHandle(long)>
        137be4:	e1a07000 	mov	r7, r0
        137be8:	e3a08000 	mov	r8, #0	; 0x0
        137bec:	e3550000 	cmp	r5, #0	; 0x0
        137bf0:	da000023 	ble	137c84 <TNewScriptEndpointClient::PostInput(long, long)+0xfc>
        137bf4:	e594003c 	ldr	r0, [r4, #60]	; fField60
        137bf8:	e1500005 	cmp	r0, r5
        137bfc:	a1a08005 	movge	r8, r5
        137c00:	b1a08000 	movlt	r8, r0
        137c04:	e33a0000 	teq	sl, #0	; 0x0
        137c08:	0a00000c 	beq	137c40 <TNewScriptEndpointClient::PostInput(long, long)+0xb8>
        137c0c:	e1a0300d 	mov	r3, sp
        137c10:	e2842068 	add	r2, r4, #104	; 0x68
        137c14:	e594009c 	ldr	r0, [r4, #156]	; fField156
        137c18:	e0800005 	add	r0, r0, r5
        137c1c:	e0401008 	sub	r1, r0, r8
        137c20:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        137c24:	e1a03008 	mov	r3, r8
        137c28:	e59410b4 	ldr	r1, [r4, #180]	; fField180
        137c2c:	e594201c 	ldr	r2, [r4, #28]	; fField28
        137c30:	e1a00004 	mov	r0, r4
        137c34:	eb65fbd0 	bl	1ab6b7c <TNewScriptEndpointClient::$ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)>
        137c38:	e28dd00c 	add	sp, sp, #12	; 0xc
        137c3c:	e5870000 	str	r0, [r7]
        137c40:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        137c44:	e1500005 	cmp	r0, r5
        137c48:	da000003 	ble	137c5c <TNewScriptEndpointClient::PostInput(long, long)+0xd4>
        137c4c:	e0402005 	sub	r2, r0, r5
        137c50:	e594109c 	ldr	r1, [r4, #156]	; fField156
        137c54:	e0810005 	add	r0, r1, r5
        137c58:	eb6a9cbd 	bl	1bdef54 <$BlockMove>
        137c5c:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        137c60:	e0400005 	sub	r0, r0, r5
        137c64:	e58400a4 	str	r0, [r4, #164]	; fField164
        137c68:	e59400b4 	ldr	r0, [r4, #180]	; fField180
        137c6c:	e3300007 	teq	r0, #7	; 0x7
        137c70:	1a000003 	bne	137c84 <TNewScriptEndpointClient::PostInput(long, long)+0xfc>
        137c74:	e3a00001 	mov	r0, #1	; 0x1
        137c78:	e5c40044 	strb	r0, [r4, #68]	; fField68
        137c7c:	e3a00004 	mov	r0, #4	; 0x4
        137c80:	e5840038 	str	r0, [r4, #56]	; fField56
        137c84:	e3a05000 	mov	r5, #0	; 0x0
        137c88:	e58450ac 	str	r5, [r4, #172]	; fField172
        137c8c:	e5c450a8 	strb	r5, [r4, #168]	; fField168
        137c90:	e5970000 	ldr	r0, [r7]
        137c94:	e3300002 	teq	r0, #2	; 0x2
        137c98:	133a0000 	teqne	sl, #0	; 0x0
        137c9c:	0a0000c6 	beq	137fbc <TNewScriptEndpointClient::PostInput(long, long)+0x434>
        137ca0:	e59d0000 	ldr	r0, [sp]
        137ca4:	e3300000 	teq	r0, #0	; 0x0
        137ca8:	1a0000c3 	bne	137fbc <TNewScriptEndpointClient::PostInput(long, long)+0x434>
        137cac:	e24dd004 	sub	sp, sp, #4	; 0x4
        137cb0:	e3a0a002 	mov	sl, #2	; 0x2
        137cb4:	e1a0000a 	mov	r0, sl
        137cb8:	eb6a2923 	bl	1bc214c <$AllocateRefHandle(long)>
        137cbc:	e3360000 	teq	r6, #0	; 0x0
        137cc0:	e58d0000 	str	r0, [sp]
        137cc4:	0a00002c 	beq	137d7c <TNewScriptEndpointClient::PostInput(long, long)+0x1f4>
        137cc8:	e24dd004 	sub	sp, sp, #4	; 0x4
        137ccc:	eb6a291b 	bl	1bc2140 <$AllocateFrame(void)>
        137cd0:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        137cd4:	e5810000 	str	r0, [r1]
        137cd8:	e1a00108 	mov	r0, r8, lsl #2
        137cdc:	eb6a291a 	bl	1bc214c <$AllocateRefHandle(long)>
        137ce0:	e58d0000 	str	r0, [sp]
        137ce4:	e1a0200d 	mov	r2, sp
        137ce8:	e59f1034 	ldr	r1, [pc, #34]	; 137d24 <TNewScriptEndpointClient::PostInput(long, long)+0x19c>
        137cec:	e1a08001 	mov	r8, r1
        137cf0:	e28d0004 	add	r0, sp, #4	; 0x4
        137cf4:	eb6a399b 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        137cf8:	e59d0000 	ldr	r0, [sp]
        137cfc:	eb6a2d2e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137d00:	e59f1020 	ldr	r1, [pc, #20]	; 137d28 <TNewScriptEndpointClient::PostInput(long, long)+0x1a0>	; fField20
        137d04:	e3360001 	teq	r6, #1	; 0x1
        137d08:	0a000008 	beq	137d30 <TNewScriptEndpointClient::PostInput(long, long)+0x1a8>
        137d0c:	e3360002 	teq	r6, #2	; 0x2
        137d10:	e24dd004 	sub	sp, sp, #4	; 0x4
        137d14:	1a00000a 	bne	137d44 <TNewScriptEndpointClient::PostInput(long, long)+0x1bc>
        137d18:	e59f200c 	ldr	r2, [pc, #c]	; 137d2c <TNewScriptEndpointClient::PostInput(long, long)+0x1a4>
        137d1c:	ea000005 	b	137d38 <TNewScriptEndpointClient::PostInput(long, long)+0x1b0>
        137d20:	00683278 	rsbeq	r3, r8, r8, ror r2
        137d24:	00682250 	rsbeq	r2, r8, r0, asr r2
        137d28:	00682560 	rsbeq	r2, r8, r0, ror #10
        137d2c:	00684db0 	streqh	r4, [r8], -#208	; fField208
        137d30:	e24dd004 	sub	sp, sp, #4	; 0x4
        137d34:	e1a02008 	mov	r2, r8
        137d38:	e28d0008 	add	r0, sp, #8	; 0x8
        137d3c:	eb6a3989 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        137d40:	ea00000c 	b	137d78 <TNewScriptEndpointClient::PostInput(long, long)+0x1f0>
        137d44:	e59f2108 	ldr	r2, [pc, #108]	; 137e54 <TNewScriptEndpointClient::PostInput(long, long)+0x2cc>	; fField108
        137d48:	e28d0008 	add	r0, sp, #8	; 0x8
        137d4c:	eb6a3985 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        137d50:	e2460003 	sub	r0, r6, #3	; 0x3
        137d54:	e1a00100 	mov	r0, r0, lsl #2
        137d58:	eb6a28fb 	bl	1bc214c <$AllocateRefHandle(long)>
        137d5c:	e58d0000 	str	r0, [sp]
        137d60:	e1a0200d 	mov	r2, sp
        137d64:	e59f10ec 	ldr	r1, [pc, #ec]	; 137e58 <TNewScriptEndpointClient::PostInput(long, long)+0x2d0>
        137d68:	e28d0008 	add	r0, sp, #8	; 0x8
        137d6c:	eb6a397d 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        137d70:	e59d0000 	ldr	r0, [sp]
        137d74:	eb6a2d10 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137d78:	e28dd008 	add	sp, sp, #8	; 0x8
        137d7c:	e1a0000a 	mov	r0, sl
        137d80:	eb6a28f1 	bl	1bc214c <$AllocateRefHandle(long)>
        137d84:	e1a06000 	mov	r6, r0
        137d88:	e5940060 	ldr	r0, [r4, #96]	; fField96
        137d8c:	e3300001 	teq	r0, #1	; 0x1
        137d90:	1a000006 	bne	137db0 <TNewScriptEndpointClient::PostInput(long, long)+0x228>
        137d94:	e284005c 	add	r0, r4, #92	; 0x5c
        137d98:	e5901000 	ldr	r1, [r0]
        137d9c:	e5911000 	ldr	r1, [r1]
        137da0:	e5861000 	str	r1, [r6]
        137da4:	e5900000 	ldr	r0, [r0]
        137da8:	e580a000 	str	sl, [r0]
        137dac:	e584a060 	str	sl, [r4, #96]	; fField96
        137db0:	e24dd004 	sub	sp, sp, #4	; 0x4
        137db4:	e3a00004 	mov	r0, #4	; 0x4
        137db8:	eb658ff7 	bl	1a9bd9c <$MakeArray(long)>
        137dbc:	eb6a28e2 	bl	1bc214c <$AllocateRefHandle(long)>
        137dc0:	e58d0000 	str	r0, [sp]
        137dc4:	e2840018 	add	r0, r4, #24	; 0x18
        137dc8:	e1a04000 	mov	r4, r0
        137dcc:	e5900000 	ldr	r0, [r0]
        137dd0:	e1a01005 	mov	r1, r5
        137dd4:	e5902000 	ldr	r2, [r0]
        137dd8:	e59d0000 	ldr	r0, [sp]
        137ddc:	e5900000 	ldr	r0, [r0]
        137de0:	eb6a395c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        137de4:	e3a01001 	mov	r1, #1	; 0x1
        137de8:	e5972000 	ldr	r2, [r7]
        137dec:	e59d0000 	ldr	r0, [sp]
        137df0:	e5900000 	ldr	r0, [r0]
        137df4:	eb6a3957 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        137df8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        137dfc:	e1a0100a 	mov	r1, sl
        137e00:	e5902000 	ldr	r2, [r0]
        137e04:	e59d0000 	ldr	r0, [sp]
        137e08:	e5900000 	ldr	r0, [r0]
        137e0c:	eb6a3951 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        137e10:	e3a01003 	mov	r1, #3	; 0x3
        137e14:	e5962000 	ldr	r2, [r6]
        137e18:	e59d0000 	ldr	r0, [sp]
        137e1c:	e5900000 	ldr	r0, [r0]
        137e20:	eb6a394c 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        137e24:	e52d506c 	str	r5, [sp, -#108]!	; fField108
        137e28:	e28d0008 	add	r0, sp, #8	; 0x8
        137e2c:	eb69ead0 	bl	1bb2974 <$setjmp>
        137e30:	e3300000 	teq	r0, #0	; 0x0
        137e34:	1a000008 	bne	137e5c <TNewScriptEndpointClient::PostInput(long, long)+0x2d4>
        137e38:	e1a0000d 	mov	r0, sp
        137e3c:	eb6aa08e 	bl	1be007c <$AddExceptionHandler>
        137e40:	e59d007c 	ldr	r0, [sp, #124]
        137e44:	e28d206c 	add	r2, sp, #108	; 0x6c
        137e48:	e59d1078 	ldr	r1, [sp, #120]
        137e4c:	eb6a2ce0 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        137e50:	ea00004f 	b	137f94 <TNewScriptEndpointClient::PostInput(long, long)+0x40c>
        137e54:	00682b88 	rsbeq	r2, r8, r8, lsl #23
        137e58:	006831c0 	rsbeq	r3, r8, r0, asr #3
        137e5c:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        137e60:	e59f1104 	ldr	r1, [pc, #104]	; 137f6c <TNewScriptEndpointClient::PostInput(long, long)+0x3e4>	; fField104
        137e64:	e5911000 	ldr	r1, [r1]
        137e68:	eb6aacc9 	bl	1be3194 <$Subexception>
        137e6c:	e3300000 	teq	r0, #0	; 0x0
        137e70:	0a000045 	beq	137f8c <TNewScriptEndpointClient::PostInput(long, long)+0x404>
        137e74:	e5940000 	ldr	r0, [r4]
        137e78:	e5900000 	ldr	r0, [r0]
        137e7c:	e3300002 	teq	r0, #2	; 0x2
        137e80:	0a00003e 	beq	137f80 <TNewScriptEndpointClient::PostInput(long, long)+0x3f8>
        137e84:	e1a00004 	mov	r0, r4
        137e88:	e59f10e0 	ldr	r1, [pc, #e0]	; 137f70 <TNewScriptEndpointClient::PostInput(long, long)+0x3e8>
        137e8c:	e1a08001 	mov	r8, r1
        137e90:	e3a03000 	mov	r3, #0	; 0x0
        137e94:	e3a02000 	mov	r2, #0	; 0x0
        137e98:	eb6a30f5 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        137e9c:	e3300002 	teq	r0, #2	; 0x2
        137ea0:	0a000036 	beq	137f80 <TNewScriptEndpointClient::PostInput(long, long)+0x3f8>
        137ea4:	e24dd00c 	sub	sp, sp, #12	; 0xc
        137ea8:	eb6a28a4 	bl	1bc2140 <$AllocateFrame(void)>
        137eac:	eb6a28a6 	bl	1bc214c <$AllocateRefHandle(long)>
        137eb0:	e58d0008 	str	r0, [sp, #8]
        137eb4:	e59d006c 	ldr	r0, [sp, #108]	; fField108
        137eb8:	eb6a34f0 	bl	1bc5280 <$Intern(char *)>
        137ebc:	eb6a28a2 	bl	1bc214c <$AllocateRefHandle(long)>
        137ec0:	e58d0000 	str	r0, [sp]
        137ec4:	e1a0200d 	mov	r2, sp
        137ec8:	e59f10a4 	ldr	r1, [pc, #a4]	; 137f74 <TNewScriptEndpointClient::PostInput(long, long)+0x3ec>
        137ecc:	e28d0008 	add	r0, sp, #8	; 0x8
        137ed0:	eb6a3924 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        137ed4:	e59d0000 	ldr	r0, [sp]
        137ed8:	eb6a2cb7 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137edc:	e59d0070 	ldr	r0, [sp, #112]
        137ee0:	e1a00100 	mov	r0, r0, lsl #2
        137ee4:	eb6a2898 	bl	1bc214c <$AllocateRefHandle(long)>
        137ee8:	e58d0004 	str	r0, [sp, #4]	; fField4
        137eec:	e28d2004 	add	r2, sp, #4	; 0x4
        137ef0:	e59f1080 	ldr	r1, [pc, #80]	; 137f78 <TNewScriptEndpointClient::PostInput(long, long)+0x3f0>	; fField80
        137ef4:	e28d0008 	add	r0, sp, #8	; 0x8
        137ef8:	eb6a391a 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        137efc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        137f00:	eb6a2cad 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137f04:	e59d2084 	ldr	r2, [sp, #132]
        137f08:	e59f106c 	ldr	r1, [pc, #6c]	; 137f7c <TNewScriptEndpointClient::PostInput(long, long)+0x3f4>
        137f0c:	e28d0008 	add	r0, sp, #8	; 0x8
        137f10:	eb6a3914 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        137f14:	e24dd004 	sub	sp, sp, #4	; 0x4
        137f18:	e3a00001 	mov	r0, #1	; 0x1
        137f1c:	eb658f9e 	bl	1a9bd9c <$MakeArray(long)>
        137f20:	eb6a2889 	bl	1bc214c <$AllocateRefHandle(long)>
        137f24:	e58d0000 	str	r0, [sp]
        137f28:	e59d000c 	ldr	r0, [sp, #12]
        137f2c:	e1a01005 	mov	r1, r5
        137f30:	e5902000 	ldr	r2, [r0]
        137f34:	e59d0000 	ldr	r0, [sp]
        137f38:	e5900000 	ldr	r0, [r0]
        137f3c:	eb6a3905 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        137f40:	e1a00004 	mov	r0, r4
        137f44:	e1a0200d 	mov	r2, sp
        137f48:	e1a01008 	mov	r1, r8
        137f4c:	eb6a2ca0 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        137f50:	e59d0000 	ldr	r0, [sp]
        137f54:	eb6a2c98 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137f58:	e28dd004 	add	sp, sp, #4	; 0x4
        137f5c:	e59d0008 	ldr	r0, [sp, #8]
        137f60:	eb6a2c95 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137f64:	e28dd00c 	add	sp, sp, #12	; 0xc
        137f68:	ea000009 	b	137f94 <TNewScriptEndpointClient::PostInput(long, long)+0x40c>
        137f6c:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        137f70:	00682ce0 	rsbeq	r2, r8, r0, ror #25
        137f74:	006839a8 	rsbeq	r3, r8, r8, lsr #19
        137f78:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        137f7c:	00682840 	rsbeq	r2, r8, r0, asr #16
        137f80:	e28d0060 	add	r0, sp, #96	; 0x60
        137f84:	eb6aee82 	bl	1bf3994 <$ExceptionNotify(Exception *)>
        137f88:	ea000001 	b	137f94 <TNewScriptEndpointClient::PostInput(long, long)+0x40c>
        137f8c:	e1a0000d 	mov	r0, sp
        137f90:	eb6aa86f 	bl	1be2154 <$NextHandler>
        137f94:	e1a0000d 	mov	r0, sp
        137f98:	eb6aa446 	bl	1be10b8 <$ExitHandler>
        137f9c:	e5bd006c 	ldr	r0, [sp, #108]!	; fField108
        137fa0:	eb6a2c85 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137fa4:	e28dd004 	add	sp, sp, #4	; 0x4
        137fa8:	e1a00006 	mov	r0, r6
        137fac:	eb6a2c82 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137fb0:	e59d0000 	ldr	r0, [sp]
        137fb4:	eb6a2c80 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137fb8:	e28dd004 	add	sp, sp, #4	; 0x4
        137fbc:	e1a00007 	mov	r0, r7
        137fc0:	e59d4000 	ldr	r4, [sp]
        137fc4:	eb6a2c7c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137fc8:	e1a00009 	mov	r0, r9
        137fcc:	eb6a2c7a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        137fd0:	e1a00004 	mov	r0, r4
        137fd4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00137fd8
 */
TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        137fd8:	e1a0c00d 	mov	ip, sp
        137fdc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        137fe0:	e24cb004 	sub	fp, ip, #4	; 0x4
        137fe4:	e1a04000 	mov	r4, r0
        137fe8:	e3a00000 	mov	r0, #0	; 0x0
        137fec:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        137ff0:	e5d400a8 	ldrb	r0, [r4, #168]	; fField168
        137ff4:	e2845034 	add	r5, r4, #52	; 0x34
        137ff8:	e3300000 	teq	r0, #0	; 0x0
        137ffc:	15950000 	ldrne	r0, [r5]
        138000:	15900000 	ldrne	r0, [r0]
        138004:	13300002 	teqne	r0, #2	; 0x2
        138008:	0a000093 	beq	13825c <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x284>
        13800c:	e1a00005 	mov	r0, r5
        138010:	e59f10cc 	ldr	r1, [pc, #cc]	; 1380e4 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x10c>
        138014:	e1a09001 	mov	r9, r1
        138018:	e3a03000 	mov	r3, #0	; 0x0
        13801c:	e3a02000 	mov	r2, #0	; 0x0
        138020:	eb6a3093 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        138024:	eb6a2848 	bl	1bc214c <$AllocateRefHandle(long)>
        138028:	e1a08000 	mov	r8, r0
        13802c:	e5900000 	ldr	r0, [r0]
        138030:	e3300002 	teq	r0, #2	; 0x2
        138034:	0a000081 	beq	138240 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x268>
        138038:	e1a0100d 	mov	r1, sp
        13803c:	e1a00004 	mov	r0, r4
        138040:	eb65ea44 	bl	1ab2958 <TNewScriptEndpointClient::$GetPartialData(long *)>
        138044:	eb6a2840 	bl	1bc214c <$AllocateRefHandle(long)>
        138048:	e1a06000 	mov	r6, r0
        13804c:	e5900000 	ldr	r0, [r0]
        138050:	e3300002 	teq	r0, #2	; 0x2
        138054:	0a000077 	beq	138238 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x260>
        138058:	e59d0000 	ldr	r0, [sp]
        13805c:	e3300000 	teq	r0, #0	; 0x0
        138060:	1a000074 	bne	138238 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x260>
        138064:	e24dd004 	sub	sp, sp, #4	; 0x4
        138068:	e3a00002 	mov	r0, #2	; 0x2
        13806c:	eb658f4a 	bl	1a9bd9c <$MakeArray(long)>
        138070:	eb6a2835 	bl	1bc214c <$AllocateRefHandle(long)>
        138074:	e58d0000 	str	r0, [sp]
        138078:	e2840018 	add	r0, r4, #24	; 0x18
        13807c:	e1a07000 	mov	r7, r0
        138080:	e5900000 	ldr	r0, [r0]
        138084:	e3a0a000 	mov	sl, #0	; 0x0
        138088:	e1a0100a 	mov	r1, sl
        13808c:	e5902000 	ldr	r2, [r0]
        138090:	e59d0000 	ldr	r0, [sp]
        138094:	e5900000 	ldr	r0, [r0]
        138098:	eb6a38ae 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        13809c:	e3a01001 	mov	r1, #1	; 0x1
        1380a0:	e5962000 	ldr	r2, [r6]
        1380a4:	e59d0000 	ldr	r0, [sp]
        1380a8:	e5900000 	ldr	r0, [r0]
        1380ac:	eb6a38a9 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1380b0:	e3a0a000 	mov	sl, #0	; 0x0
        1380b4:	e52da06c 	str	sl, [sp, -#108]!	; fField108
        1380b8:	e28d0008 	add	r0, sp, #8	; 0x8
        1380bc:	eb69ea2c 	bl	1bb2974 <$setjmp>
        1380c0:	e3300000 	teq	r0, #0	; 0x0
        1380c4:	1a000007 	bne	1380e8 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x110>
        1380c8:	e1a0000d 	mov	r0, sp
        1380cc:	eb6a9fea 	bl	1be007c <$AddExceptionHandler>
        1380d0:	e1a00005 	mov	r0, r5
        1380d4:	e28d206c 	add	r2, sp, #108	; 0x6c
        1380d8:	e1a01009 	mov	r1, r9
        1380dc:	eb6a2c3c 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        1380e0:	ea00004f 	b	138224 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x24c>
        1380e4:	00683d10 	rsbeq	r3, r8, r0, lsl sp
        1380e8:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        1380ec:	e59f1108 	ldr	r1, [pc, #108]	; 1381fc <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x224>	; fField108
        1380f0:	e5911000 	ldr	r1, [r1]
        1380f4:	eb6aac26 	bl	1be3194 <$Subexception>
        1380f8:	e3300000 	teq	r0, #0	; 0x0
        1380fc:	0a000046 	beq	13821c <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x244>
        138100:	e5970000 	ldr	r0, [r7]
        138104:	e5900000 	ldr	r0, [r0]
        138108:	e3300002 	teq	r0, #2	; 0x2
        13810c:	0a00003f 	beq	138210 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x238>
        138110:	e1a00007 	mov	r0, r7
        138114:	e59f10e4 	ldr	r1, [pc, #e4]	; 138200 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x228>
        138118:	e1a0a001 	mov	sl, r1
        13811c:	e3a03000 	mov	r3, #0	; 0x0
        138120:	e3a02000 	mov	r2, #0	; 0x0
        138124:	eb6a3052 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        138128:	e3300002 	teq	r0, #2	; 0x2
        13812c:	0a000037 	beq	138210 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x238>
        138130:	e24dd00c 	sub	sp, sp, #12	; 0xc
        138134:	eb6a2801 	bl	1bc2140 <$AllocateFrame(void)>
        138138:	eb6a2803 	bl	1bc214c <$AllocateRefHandle(long)>
        13813c:	e58d0008 	str	r0, [sp, #8]
        138140:	e59d006c 	ldr	r0, [sp, #108]	; fField108
        138144:	eb6a344d 	bl	1bc5280 <$Intern(char *)>
        138148:	eb6a27ff 	bl	1bc214c <$AllocateRefHandle(long)>
        13814c:	e58d0000 	str	r0, [sp]
        138150:	e1a0200d 	mov	r2, sp
        138154:	e59f10a8 	ldr	r1, [pc, #a8]	; 138204 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x22c>
        138158:	e28d0008 	add	r0, sp, #8	; 0x8
        13815c:	eb6a3881 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        138160:	e59d0000 	ldr	r0, [sp]
        138164:	eb6a2c14 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        138168:	e59d0070 	ldr	r0, [sp, #112]
        13816c:	e1a00100 	mov	r0, r0, lsl #2
        138170:	eb6a27f5 	bl	1bc214c <$AllocateRefHandle(long)>
        138174:	e58d0004 	str	r0, [sp, #4]	; fField4
        138178:	e28d2004 	add	r2, sp, #4	; 0x4
        13817c:	e59f1084 	ldr	r1, [pc, #84]	; 138208 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x230>	; fField84
        138180:	e28d0008 	add	r0, sp, #8	; 0x8
        138184:	eb6a3877 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        138188:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        13818c:	eb6a2c0a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        138190:	e1a02009 	mov	r2, r9
        138194:	e59f1070 	ldr	r1, [pc, #70]	; 13820c <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x234>
        138198:	e28d0008 	add	r0, sp, #8	; 0x8
        13819c:	eb6a3871 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1381a0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1381a4:	e3a00001 	mov	r0, #1	; 0x1
        1381a8:	eb658efb 	bl	1a9bd9c <$MakeArray(long)>
        1381ac:	eb6a27e6 	bl	1bc214c <$AllocateRefHandle(long)>
        1381b0:	e58d0000 	str	r0, [sp]
        1381b4:	e59d000c 	ldr	r0, [sp, #12]
        1381b8:	e3a01000 	mov	r1, #0	; 0x0
        1381bc:	e5902000 	ldr	r2, [r0]
        1381c0:	e59d0000 	ldr	r0, [sp]
        1381c4:	e5900000 	ldr	r0, [r0]
        1381c8:	eb6a3862 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1381cc:	e1a00007 	mov	r0, r7
        1381d0:	e1a0200d 	mov	r2, sp
        1381d4:	e1a0100a 	mov	r1, sl
        1381d8:	eb6a2bfd 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        1381dc:	eb66bc81 	bl	1ae73e8 <$CheckForDeferredActions(void)>
        1381e0:	e59d0000 	ldr	r0, [sp]
        1381e4:	eb6a2bf4 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1381e8:	e28dd004 	add	sp, sp, #4	; 0x4
        1381ec:	e59d0008 	ldr	r0, [sp, #8]
        1381f0:	eb6a2bf1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1381f4:	e28dd00c 	add	sp, sp, #12	; 0xc
        1381f8:	ea000009 	b	138224 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x24c>
        1381fc:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        138200:	00682ce0 	rsbeq	r2, r8, r0, ror #25
        138204:	006839a8 	rsbeq	r3, r8, r8, lsr #19
        138208:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        13820c:	00682840 	rsbeq	r2, r8, r0, asr #16
        138210:	e28d0060 	add	r0, sp, #96	; 0x60
        138214:	eb6aedde 	bl	1bf3994 <$ExceptionNotify(Exception *)>
        138218:	ea000001 	b	138224 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x24c>
        13821c:	e1a0000d 	mov	r0, sp
        138220:	eb6aa7cb 	bl	1be2154 <$NextHandler>
        138224:	e1a0000d 	mov	r0, sp
        138228:	eb6aa3a2 	bl	1be10b8 <$ExitHandler>
        13822c:	e5bd006c 	ldr	r0, [sp, #108]!	; fField108
        138230:	eb6a2be1 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        138234:	e28dd004 	add	sp, sp, #4	; 0x4
        138238:	e1a00006 	mov	r0, r6
        13823c:	eb6a2bde 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        138240:	e3a0a000 	mov	sl, #0	; 0x0
        138244:	e5c4a0a8 	strb	sl, [r4, #168]	; fField168
        138248:	e1a00008 	mov	r0, r8
        13824c:	eb6a2bda 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        138250:	e59d0000 	ldr	r0, [sp]
        138254:	e3300000 	teq	r0, #0	; 0x0
        138258:	1a00000a 	bne	138288 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x2b0>
        13825c:	e594104c 	ldr	r1, [r4, #76]	; fField76
        138260:	e3510000 	cmp	r1, #0	; 0x0
        138264:	9a00001b 	bls	1382d8 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x300>
        138268:	e5950000 	ldr	r0, [r5]
        13826c:	e5900000 	ldr	r0, [r0]
        138270:	e3300002 	teq	r0, #2	; 0x2
        138274:	11a00004 	movne	r0, r4
        138278:	13a02066 	movne	r2, #102	; 0x66
        13827c:	12822c0e 	addne	r2, r2, #3584	; 0xe00
        138280:	1b6ad500 	blne	1bed688 <TAEventHandler::$ResetIdle(unsigned long, TimeUnits)>
        138284:	ea000013 	b	1382d8 <TNewScriptEndpointClient::IdleProc(TUMsgToken *, unsigned long *, TAEvent *)+0x300>
        138288:	e24dd008 	sub	sp, sp, #8	; 0x8
        13828c:	e5950000 	ldr	r0, [r5]
        138290:	e5900000 	ldr	r0, [r0]
        138294:	eb6a27ac 	bl	1bc214c <$AllocateRefHandle(long)>
        138298:	e58d0004 	str	r0, [sp, #4]	; fField4
        13829c:	e1a00004 	mov	r0, r4
        1382a0:	eb65ccb7 	bl	1aab584 <TNewScriptEndpointClient::$ClearInputSpec(void)>
        1382a4:	e1a0000a 	mov	r0, sl
        1382a8:	eb6a27a7 	bl	1bc214c <$AllocateRefHandle(long)>
        1382ac:	e58d0000 	str	r0, [sp]
        1382b0:	e1a0300d 	mov	r3, sp
        1382b4:	e28d2004 	add	r2, sp, #4	; 0x4
        1382b8:	e1a00004 	mov	r0, r4
        1382bc:	e59d1008 	ldr	r1, [sp, #8]
        1382c0:	eb65d0d8 	bl	1aac628 <TNewScriptEndpointClient::$DoCompletion(long, RefVar const &, RefVar const &)>
        1382c4:	e59d0000 	ldr	r0, [sp]
        1382c8:	eb6a2bbb 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1382cc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1382d0:	eb6a2bb9 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1382d4:	e28dd008 	add	sp, sp, #8	; 0x8
        1382d8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoPartial(long *)
 * Address: 001382dc
 */
TNewScriptEndpointClient::DoPartial(long *) {
    /*
        1382dc:	e3a03000 	mov	r3, #0	; 0x0
        1382e0:	e3a0200a 	mov	r2, #10	; 0xa
        1382e4:	e2422cd3 	sub	r2, r2, #54016	; 0xd300
        1382e8:	e5812000 	str	r2, [r1]
        1382ec:	e59020b4 	ldr	r2, [r0, #180]	; fField180
        1382f0:	e3320003 	teq	r2, #3	; 0x3
        1382f4:	13320005 	teqne	r2, #5	; 0x5
        1382f8:	05813000 	streq	r3, [r1]
        1382fc:	e5902034 	ldr	r2, [r0, #52]	; fField52
        138300:	e5922000 	ldr	r2, [r2]
        138304:	e3320002 	teq	r2, #2	; 0x2
        138308:	03a00ed1 	moveq	r0, #3344	; 0xd10
        13830c:	02400a0e 	subeq	r0, r0, #57344	; 0xe000
        138310:	05810000 	streq	r0, [r1]
        138314:	0a000002 	beq	138324 <TNewScriptEndpointClient::DoPartial(long *)+0x48>
        138318:	e5912000 	ldr	r2, [r1]
        13831c:	e3320000 	teq	r2, #0	; 0x0
        138320:	0a65e98c 	beq	1ab2958 <TNewScriptEndpointClient::$GetPartialData(long *)>
        138324:	e3a00002 	mov	r0, #2	; 0x2
        138328:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewScriptEndpointClient::GetPartialData(long *)
 * Address: 0013832c
 */
TNewScriptEndpointClient::GetPartialData(long *) {
    /*
        13832c:	e1a0c00d 	mov	ip, sp
        138330:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        138334:	e24cb004 	sub	fp, ip, #4	; 0x4
        138338:	e1a04000 	mov	r4, r0
        13833c:	e1a05001 	mov	r5, r1
        138340:	e3a07000 	mov	r7, #0	; 0x0
        138344:	e3a00002 	mov	r0, #2	; 0x2
        138348:	e5817000 	str	r7, [r1]
        13834c:	eb6a277e 	bl	1bc214c <$AllocateRefHandle(long)>
        138350:	e1a06000 	mov	r6, r0
        138354:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        138358:	e3500000 	cmp	r0, #0	; 0x0
        13835c:	da00000d 	ble	138398 <TNewScriptEndpointClient::GetPartialData(long *)+0x6c>
        138360:	e1a03005 	mov	r3, r5
        138364:	e2842068 	add	r2, r4, #104	; 0x68
        138368:	e594109c 	ldr	r1, [r4, #156]	; fField156
        13836c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        138370:	e1a03000 	mov	r3, r0
        138374:	e59410b4 	ldr	r1, [r4, #180]	; fField180
        138378:	e594201c 	ldr	r2, [r4, #28]	; fField28
        13837c:	e1a00004 	mov	r0, r4
        138380:	eb65f9fd 	bl	1ab6b7c <TNewScriptEndpointClient::$ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)>
        138384:	e28dd00c 	add	sp, sp, #12	; 0xc
        138388:	e5860000 	str	r0, [r6]
        13838c:	e59400a4 	ldr	r0, [r4, #164]	; fField164
        138390:	e58400ac 	str	r0, [r4, #172]	; fField172
        138394:	e5c470a8 	strb	r7, [r4, #168]	; fField168
        138398:	e5964000 	ldr	r4, [r6]
        13839c:	e1a00006 	mov	r0, r6
        1383a0:	eb6a2b85 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1383a4:	e1a00004 	mov	r0, r4
        1383a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)
 * Address: 001383ac
 */
TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *) {
    /*
        1383ac:	e1a0c00d 	mov	ip, sp
        1383b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1383b4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1383b8:	e24cb014 	sub	fp, ip, #20	; 0x14
        1383bc:	e1a04000 	mov	r4, r0
        1383c0:	e1a06001 	mov	r6, r1
        1383c4:	e1a05003 	mov	r5, r3
        1383c8:	e3a00002 	mov	r0, #2	; 0x2
        1383cc:	e59b801c 	ldr	r8, [fp, #28]	; fField28
        1383d0:	e59ba014 	ldr	sl, [fp, #20]	; fField20
        1383d4:	eb6a275c 	bl	1bc214c <$AllocateRefHandle(long)>
        1383d8:	e1a07000 	mov	r7, r0
        1383dc:	e3a00000 	mov	r0, #0	; 0x0
        1383e0:	e5880000 	str	r0, [r8]
        1383e4:	e59f90a4 	ldr	r9, [pc, #a4]	; 138490 <TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0xe4>
        1383e8:	e3360007 	teq	r6, #7	; 0x7
        1383ec:	1a00003b 	bne	1384e0 <TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x134>
        1383f0:	e59400d0 	ldr	r0, [r4, #208]	; fField208
        1383f4:	e3300000 	teq	r0, #0	; 0x0
        1383f8:	1a00000a 	bne	138428 <TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x7c>
        1383fc:	e28f1f24 	add	r1, pc, #144	; 0x90
        138400:	e28f0f27 	add	r0, pc, #156	; 0x9c
        138404:	eb6a7de0 	bl	1bd7b8c <$NewByName__FPCcT1>
        138408:	e3300000 	teq	r0, #0	; 0x0
        13840c:	158400d0 	strne	r0, [r4, #208]	; fField208
        138410:	1a000001 	bne	13841c <TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x70>
        138414:	eb6aa741 	bl	1be2120 <$MemError>
        138418:	e5880000 	str	r0, [r8]
        13841c:	e5980000 	ldr	r0, [r8]
        138420:	e3300000 	teq	r0, #0	; 0x0
        138424:	1a000058 	bne	13858c <TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x1e0>
        138428:	e3a00000 	mov	r0, #0	; 0x0
        13842c:	e52d006c 	str	r0, [sp, -#108]!	; fField108
        138430:	e28d0008 	add	r0, sp, #8	; 0x8
        138434:	eb69e94e 	bl	1bb2974 <$setjmp>
        138438:	e3300000 	teq	r0, #0	; 0x0
        13843c:	1a00001c 	bne	1384b4 <TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x108>
        138440:	e1a0000d 	mov	r0, sp
        138444:	eb6a9f0c 	bl	1be007c <$AddExceptionHandler>
        138448:	e24dd00c 	sub	sp, sp, #12	; 0xc
        13844c:	e3a00002 	mov	r0, #2	; 0x2
        138450:	eb6a273d 	bl	1bc214c <$AllocateRefHandle(long)>
        138454:	e58d0008 	str	r0, [sp, #8]
        138458:	e3a00002 	mov	r0, #2	; 0x2
        13845c:	e58d5004 	str	r5, [sp, #4]	; fField4
        138460:	e58da000 	str	sl, [sp]
        138464:	e59d1008 	ldr	r1, [sp, #8]
        138468:	e5810000 	str	r0, [r1]
        13846c:	e1a0100d 	mov	r1, sp
        138470:	e3a02000 	mov	r2, #0	; 0x0
        138474:	e5b400d0 	ldr	r0, [r4, #208]!	; fField208
        138478:	eb69bfe6 	bl	1ba8418 <PFrameSource::$Translate(void *, PipeCallBack *)>
        13847c:	e5870000 	str	r0, [r7]
        138480:	e59d0008 	ldr	r0, [sp, #8]
        138484:	eb6a2b4c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        138488:	e28dd00c 	add	sp, sp, #12	; 0xc
        13848c:	ea000011 	b	1384d8 <TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x12c>
        138490:	00371328 	eoreqs	r1, r7, r8, lsr #6
        138494:	50556e46 	subpls	r6, r5, r6, asr #28
        138498:	6c617474 	stcvsl	4, cr7, [r1], -#464
        13849c:	656e5074 	strvsb	r5, [lr, -#116]!
        1384a0:	72000000 	andvc	r0, r0, #0	; 0x0
        1384a4:	50467261 	subpl	r7, r6, r1, ror #4
        1384a8:	6d65536f 	stcvsl	3, cr5, [r5, -#444]!
        1384ac:	75726365 	ldrvcb	r6, [r2, -#869]!
        1384b0:	00000000 	andeq	r0, r0, r0
        1384b4:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        1384b8:	e5991000 	ldr	r1, [r9]
        1384bc:	eb6aab34 	bl	1be3194 <$Subexception>
        1384c0:	e3300000 	teq	r0, #0	; 0x0
        1384c4:	159d0064 	ldrne	r0, [sp, #100]	; fField100
        1384c8:	15880000 	strne	r0, [r8]
        1384cc:	1a000001 	bne	1384d8 <TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x12c>
        1384d0:	e1a0000d 	mov	r0, sp
        1384d4:	eb6aa71e 	bl	1be2154 <$NextHandler>
        1384d8:	e1a0000d 	mov	r0, sp
        1384dc:	ea000028 	b	138584 <TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x1d8>
        1384e0:	e3a00000 	mov	r0, #0	; 0x0
        1384e4:	e52d006c 	str	r0, [sp, -#108]!	; fField108
        1384e8:	e28d0008 	add	r0, sp, #8	; 0x8
        1384ec:	eb69e920 	bl	1bb2974 <$setjmp>
        1384f0:	e3300000 	teq	r0, #0	; 0x0
        1384f4:	1a000018 	bne	13855c <TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x1b0>
        1384f8:	e1a0000d 	mov	r0, sp
        1384fc:	eb6a9ede 	bl	1be007c <$AddExceptionHandler>
        138500:	e24dd014 	sub	sp, sp, #20	; 0x14
        138504:	e3a00002 	mov	r0, #2	; 0x2
        138508:	eb6a270f 	bl	1bc214c <$AllocateRefHandle(long)>
        13850c:	e58d0010 	str	r0, [sp, #16]	; fField16
        138510:	e98d0060 	stmib	sp, {r5, r6}
        138514:	e58da000 	str	sl, [sp]
        138518:	e59b200c 	ldr	r2, [fp, #12]
        13851c:	e58d200c 	str	r2, [sp, #12]
        138520:	e59b0018 	ldr	r0, [fp, #24]
        138524:	e5900000 	ldr	r0, [r0]
        138528:	e5901000 	ldr	r1, [r0]
        13852c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        138530:	e5801000 	str	r1, [r0]
        138534:	e1a00004 	mov	r0, r4
        138538:	eb65e90d 	bl	1ab2974 <TNewScriptEndpointClient::$GetScriptDataInXlator(void)>
        13853c:	e1a0100d 	mov	r1, sp
        138540:	e3a02000 	mov	r2, #0	; 0x0
        138544:	eb69bfb3 	bl	1ba8418 <PFrameSource::$Translate(void *, PipeCallBack *)>
        138548:	e5870000 	str	r0, [r7]
        13854c:	e59d0010 	ldr	r0, [sp, #16]	; fField16
        138550:	eb6a2b19 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        138554:	e28dd014 	add	sp, sp, #20	; 0x14
        138558:	ea000008 	b	138580 <TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x1d4>
        13855c:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        138560:	e5991000 	ldr	r1, [r9]
        138564:	eb6aab0a 	bl	1be3194 <$Subexception>
        138568:	e3300000 	teq	r0, #0	; 0x0
        13856c:	159d0064 	ldrne	r0, [sp, #100]	; fField100
        138570:	15880000 	strne	r0, [r8]
        138574:	1a000001 	bne	138580 <TNewScriptEndpointClient::ParseInput(FormType, long, long, unsigned char *, RefVar const &, long *)+0x1d4>
        138578:	e1a0000d 	mov	r0, sp
        13857c:	eb6aa6f4 	bl	1be2154 <$NextHandler>
        138580:	e1a0000d 	mov	r0, sp
        138584:	eb6aa2cb 	bl	1be10b8 <$ExitHandler>
        138588:	e28dd06c 	add	sp, sp, #108	; 0x6c
        13858c:	e5974000 	ldr	r4, [r7]
        138590:	e1a00007 	mov	r0, r7
        138594:	eb6a2b08 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        138598:	e1a00004 	mov	r0, r4
        13859c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoFlushInput(void)
 * Address: 001385a0
 */
TNewScriptEndpointClient::DoFlushInput(void) {
    /*
        1385a0:	e3a01000 	mov	r1, #0	; 0x0
        1385a4:	e58010a4 	str	r1, [r0, #164]	; fField164
        1385a8:	e58010ac 	str	r1, [r0, #172]	; fField172
        1385ac:	e5c010a8 	strb	r1, [r0, #168]	; fField168
        1385b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoFlushPartial(void)
 * Address: 001385b4
 */
TNewScriptEndpointClient::DoFlushPartial(void) {
    /*
        1385b4:	e1a0c00d 	mov	ip, sp
        1385b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1385bc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1385c0:	e1a04000 	mov	r4, r0
        1385c4:	e59010a4 	ldr	r1, [r0, #164]	; fField164
        1385c8:	e59000ac 	ldr	r0, [r0, #172]	; fField172
        1385cc:	e0415000 	sub	r5, r1, r0
        1385d0:	e3550000 	cmp	r5, #0	; 0x0
        1385d4:	da000003 	ble	1385e8 <TNewScriptEndpointClient::DoFlushPartial(void)+0x34>
        1385d8:	e594109c 	ldr	r1, [r4, #156]	; fField156
        1385dc:	e0810000 	add	r0, r1, r0
        1385e0:	e1a02005 	mov	r2, r5
        1385e4:	eb6a9a5a 	bl	1bdef54 <$BlockMove>
        1385e8:	e3a00000 	mov	r0, #0	; 0x0
        1385ec:	e58400ac 	str	r0, [r4, #172]	; fField172
        1385f0:	e58450a4 	str	r5, [r4, #164]	; fField164
        1385f4:	e5c400a8 	strb	r0, [r4, #168]	; fField168
        1385f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00138688
 */
TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        138688:	e1a0c00d 	mov	ip, sp
        13868c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        138690:	e24cb004 	sub	fp, ip, #4	; 0x4
        138694:	e1a04000 	mov	r4, r0
        138698:	e1a07001 	mov	r7, r1
        13869c:	e1a06002 	mov	r6, r2
        1386a0:	e1a05003 	mov	r5, r3
        1386a4:	e59f004c 	ldr	r0, [pc, #4c]	; 1386f8 <TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x70>	; fField4
        1386a8:	eb6adc3f 	bl	1bef7ac <$SetPort(GrafPort *)>
        1386ac:	e1a09000 	mov	r9, r0
        1386b0:	e3a08000 	mov	r8, #0	; 0x0
        1386b4:	e52d806c 	str	r8, [sp, -#108]!	; fField108
        1386b8:	e28d0008 	add	r0, sp, #8	; 0x8
        1386bc:	eb69e8ac 	bl	1bb2974 <$setjmp>
        1386c0:	e3300000 	teq	r0, #0	; 0x0
        1386c4:	1a00000d 	bne	138700 <TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x78>
        1386c8:	e1a0000d 	mov	r0, sp
        1386cc:	eb6a9e6a 	bl	1be007c <$AddExceptionHandler>
        1386d0:	e1a03005 	mov	r3, r5
        1386d4:	e1a02006 	mov	r2, r6
        1386d8:	e1a01007 	mov	r1, r7
        1386dc:	e1a00004 	mov	r0, r4
        1386e0:	eb69f923 	bl	1bb6b74 <TEndpointClient::$AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)>
        1386e4:	e59f0010 	ldr	r0, [pc, #10]	; 1386fc <TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x74>
        1386e8:	e5900000 	ldr	r0, [r0]
        1386ec:	e3a01000 	mov	r1, #0	; 0x0
        1386f0:	eb65b2eb 	bl	1aa52a4 <TRootView::$Update(TRect *)>
        1386f4:	ea00004c 	b	13882c <TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1a4>
        1386f8:	0c1067cc 	ldceq	7, cr6, [r0], -#816
        1386fc:	0c101934 	ldceq	9, cr1, [r0], -#208	; fField208
        138700:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        138704:	e59f10fc 	ldr	r1, [pc, #fc]	; 138808 <TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x180>
        138708:	e5911000 	ldr	r1, [r1]
        13870c:	eb6aaaa0 	bl	1be3194 <$Subexception>
        138710:	e3300000 	teq	r0, #0	; 0x0
        138714:	0a000042 	beq	138824 <TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x19c>
        138718:	e2840018 	add	r0, r4, #24	; 0x18
        13871c:	e1a04000 	mov	r4, r0
        138720:	e5900000 	ldr	r0, [r0]
        138724:	e5900000 	ldr	r0, [r0]
        138728:	e3300002 	teq	r0, #2	; 0x2
        13872c:	0a000039 	beq	138818 <TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x190>
        138730:	e1a00004 	mov	r0, r4
        138734:	e59f10d0 	ldr	r1, [pc, #d0]	; 13880c <TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x184>
        138738:	e1a05001 	mov	r5, r1
        13873c:	e3a03000 	mov	r3, #0	; 0x0
        138740:	e3a02000 	mov	r2, #0	; 0x0
        138744:	eb6a2eca 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        138748:	e3300002 	teq	r0, #2	; 0x2
        13874c:	0a000031 	beq	138818 <TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x190>
        138750:	e24dd00c 	sub	sp, sp, #12	; 0xc
        138754:	eb6a2679 	bl	1bc2140 <$AllocateFrame(void)>
        138758:	eb6a267b 	bl	1bc214c <$AllocateRefHandle(long)>
        13875c:	e58d0008 	str	r0, [sp, #8]
        138760:	e59d006c 	ldr	r0, [sp, #108]	; fField108
        138764:	eb6a32c5 	bl	1bc5280 <$Intern(char *)>
        138768:	eb6a2677 	bl	1bc214c <$AllocateRefHandle(long)>
        13876c:	e58d0000 	str	r0, [sp]
        138770:	e1a0200d 	mov	r2, sp
        138774:	e59f1094 	ldr	r1, [pc, #94]	; 138810 <TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x188>
        138778:	e28d0008 	add	r0, sp, #8	; 0x8
        13877c:	eb6a36f9 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        138780:	e59d0000 	ldr	r0, [sp]
        138784:	eb6a2a8c 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        138788:	e59d0070 	ldr	r0, [sp, #112]
        13878c:	e1a00100 	mov	r0, r0, lsl #2
        138790:	eb6a266d 	bl	1bc214c <$AllocateRefHandle(long)>
        138794:	e58d0004 	str	r0, [sp, #4]	; fField4
        138798:	e28d2004 	add	r2, sp, #4	; 0x4
        13879c:	e59f1070 	ldr	r1, [pc, #70]	; 138814 <TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x18c>
        1387a0:	e28d0008 	add	r0, sp, #8	; 0x8
        1387a4:	eb6a36ef 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1387a8:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        1387ac:	eb6a2a82 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1387b0:	e24dd004 	sub	sp, sp, #4	; 0x4
        1387b4:	e3a00001 	mov	r0, #1	; 0x1
        1387b8:	eb658d77 	bl	1a9bd9c <$MakeArray(long)>
        1387bc:	eb6a2662 	bl	1bc214c <$AllocateRefHandle(long)>
        1387c0:	e58d0000 	str	r0, [sp]
        1387c4:	e59d000c 	ldr	r0, [sp, #12]
        1387c8:	e1a01008 	mov	r1, r8
        1387cc:	e5902000 	ldr	r2, [r0]
        1387d0:	e59d0000 	ldr	r0, [sp]
        1387d4:	e5900000 	ldr	r0, [r0]
        1387d8:	eb6a36de 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        1387dc:	e1a00004 	mov	r0, r4
        1387e0:	e1a0200d 	mov	r2, sp
        1387e4:	e1a01005 	mov	r1, r5
        1387e8:	eb6a2a79 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        1387ec:	e59d0000 	ldr	r0, [sp]
        1387f0:	eb6a2a71 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1387f4:	e28dd004 	add	sp, sp, #4	; 0x4
        1387f8:	e59d0008 	ldr	r0, [sp, #8]
        1387fc:	eb6a2a6e 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        138800:	e28dd00c 	add	sp, sp, #12	; 0xc
        138804:	ea000008 	b	13882c <TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1a4>
        138808:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        13880c:	00682ce0 	rsbeq	r2, r8, r0, ror #25
        138810:	006839a8 	rsbeq	r3, r8, r8, lsr #19
        138814:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        138818:	e28d0060 	add	r0, sp, #96	; 0x60
        13881c:	eb6aec5c 	bl	1bf3994 <$ExceptionNotify(Exception *)>
        138820:	ea000001 	b	13882c <TNewScriptEndpointClient::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)+0x1a4>
        138824:	e1a0000d 	mov	r0, sp
        138828:	eb6aa649 	bl	1be2154 <$NextHandler>
        13882c:	e1a0000d 	mov	r0, sp
        138830:	eb6aa220 	bl	1be10b8 <$ExitHandler>
        138834:	e28dd06c 	add	sp, sp, #108	; 0x6c
        138838:	e1a00009 	mov	r0, r9
        13883c:	eb6adbda 	bl	1bef7ac <$SetPort(GrafPort *)>
        138840:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::DoOption(RefVar const &, RefVar const &)
 * Address: 00138d30
 */
TNewScriptEndpointClient::DoOption(RefVar const &, RefVar const &) {
    /*
        138d30:	e1a0c00d 	mov	ip, sp
        138d34:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        138d38:	e24cb004 	sub	fp, ip, #4	; 0x4
        138d3c:	e1a04000 	mov	r4, r0
        138d40:	e1a05001 	mov	r5, r1
        138d44:	e1a06002 	mov	r6, r2
        138d48:	e24dd008 	sub	sp, sp, #8	; 0x8
        138d4c:	e3a00000 	mov	r0, #0	; 0x0
        138d50:	e58d0004 	str	r0, [sp, #4]	; fField4
        138d54:	e58d0000 	str	r0, [sp]
        138d58:	e1a0100d 	mov	r1, sp
        138d5c:	e1a00002 	mov	r0, r2
        138d60:	eb65e6fb 	bl	1ab2954 <$GetParms__24TNewScriptEndpointClientSFRC6RefVarPUl>
        138d64:	e1a08000 	mov	r8, r0
        138d68:	e5950000 	ldr	r0, [r5]
        138d6c:	e5900000 	ldr	r0, [r0]
        138d70:	e3300002 	teq	r0, #2	; 0x2
        138d74:	03a07f43 	moveq	r7, #268	; 0x10c
        138d78:	02477b35 	subeq	r7, r7, #54272	; 0xd400
        138d7c:	0a00001c 	beq	138df4 <TNewScriptEndpointClient::DoOption(RefVar const &, RefVar const &)+0xc4>
        138d80:	e28d2004 	add	r2, sp, #4	; 0x4
        138d84:	e1a01005 	mov	r1, r5
        138d88:	e1a00004 	mov	r0, r4
        138d8c:	eb65fb81 	bl	1ab7b98 <TNewScriptEndpointClient::$PrepOptions(RefVar const &, TOptionArray **)>
        138d90:	e1b07000 	movs	r7, r0
        138d94:	1a000016 	bne	138df4 <TNewScriptEndpointClient::DoOption(RefVar const &, RefVar const &)+0xc4>
        138d98:	e3380000 	teq	r8, #0	; 0x0
        138d9c:	1a000003 	bne	138db0 <TNewScriptEndpointClient::DoOption(RefVar const &, RefVar const &)+0x80>
        138da0:	e1a02006 	mov	r2, r6
        138da4:	e1a01005 	mov	r1, r5
        138da8:	e1a00004 	mov	r0, r4
        138dac:	eb65fb80 	bl	1ab7bb4 <TNewScriptEndpointClient::$QueueOptions(RefVar const &, RefVar const &)>
        138db0:	e20830ff 	and	r3, r8, #255	; 0xff
        138db4:	e89d0006 	ldmia	sp, {r1, r2}
        138db8:	e92d0008 	stmdb	sp!, {r3}
        138dbc:	e1a03001 	mov	r3, r1
        138dc0:	e3a01c05 	mov	r1, #1280	; 0x500
        138dc4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        138dc8:	eb633dab 	bl	1a0847c <TEndpoint::$nOptMgmt(unsigned long, TOptionArray *, unsigned long, unsigned char)>
        138dcc:	e28dd004 	add	sp, sp, #4	; 0x4
        138dd0:	e1b07000 	movs	r7, r0
        138dd4:	1a000006 	bne	138df4 <TNewScriptEndpointClient::DoOption(RefVar const &, RefVar const &)+0xc4>
        138dd8:	e3380000 	teq	r8, #0	; 0x0
        138ddc:	0a000004 	beq	138df4 <TNewScriptEndpointClient::DoOption(RefVar const &, RefVar const &)+0xc4>
        138de0:	e1a01005 	mov	r1, r5
        138de4:	e1a00004 	mov	r0, r4
        138de8:	e59d2004 	ldr	r2, [sp, #4]	; fField4
        138dec:	eb65c9f8 	bl	1aab5d4 <TNewScriptEndpointClient::$ConvertFromOptionArray(RefVar const &, TOptionArray *)>
        138df0:	e1a07000 	mov	r7, r0
        138df4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        138df8:	e3300000 	teq	r0, #0	; 0x0
        138dfc:	0a000004 	beq	138e14 <TNewScriptEndpointClient::DoOption(RefVar const &, RefVar const &)+0xe4>
        138e00:	e3370000 	teq	r7, #0	; 0x0
        138e04:	03380000 	teqeq	r8, #0	; 0x0
        138e08:	0a000006 	beq	138e28 <TNewScriptEndpointClient::DoOption(RefVar const &, RefVar const &)+0xf8>
        138e0c:	e3a01001 	mov	r1, #1	; 0x1
        138e10:	eb69f745 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        138e14:	e3370000 	teq	r7, #0	; 0x0
        138e18:	0a000002 	beq	138e28 <TNewScriptEndpointClient::DoOption(RefVar const &, RefVar const &)+0xf8>
        138e1c:	e3380000 	teq	r8, #0	; 0x0
        138e20:	01a00004 	moveq	r0, r4
        138e24:	0b660be0 	bleq	1abbdac <TNewScriptEndpointClient::$UnwindOptions(void)>
        138e28:	e1a00007 	mov	r0, r7
        138e2c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TNewScriptEndpointClient::GetScriptDataOutXlator(void)
 * Address: 001391e8
 */
TNewScriptEndpointClient::GetScriptDataOutXlator(void) {
    /*
        1391e8:	e1a0c00d 	mov	ip, sp
        1391ec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1391f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1391f4:	e1a04000 	mov	r4, r0
        1391f8:	e59000c4 	ldr	r0, [r0, #196]	; fField196
        1391fc:	e3300000 	teq	r0, #0	; 0x0
        139200:	1a00000b 	bne	139234 <TNewScriptEndpointClient::GetScriptDataOutXlator(void)+0x4c>
        139204:	e28f1f0c 	add	r1, pc, #48	; 0x30
        139208:	e28f0f0f 	add	r0, pc, #60	; 0x3c
        13920c:	eb6a7a5e 	bl	1bd7b8c <$NewByName__FPCcT1>
        139210:	e3300000 	teq	r0, #0	; 0x0
        139214:	158400c4 	strne	r0, [r4, #196]	; fField196
        139218:	1a000005 	bne	139234 <TNewScriptEndpointClient::GetScriptDataOutXlator(void)+0x4c>
        13921c:	eb6aa3bf 	bl	1be2120 <$MemError>
        139220:	e1a01000 	mov	r1, r0
        139224:	e59f002c 	ldr	r0, [pc, #2c]	; 139258 <TNewScriptEndpointClient::GetScriptDataOutXlator(void)+0x70>
        139228:	e5900000 	ldr	r0, [r0]
        13922c:	e3a02000 	mov	r2, #0	; 0x0
        139230:	eb6aa7d9 	bl	1be319c <$Throw>
        139234:	e5b400c4 	ldr	r0, [r4, #196]!	; fField196
        139238:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        13923c:	50536372 	subpls	r6, r3, r2, ror r3
        139240:	69707444 	ldmvsdb	r0!, {r2, r6, sl, ip, sp, lr}^
        139244:	6174614f 	cmnvs	r4, pc, asr #2
        139248:	75740000 	ldrvcb	r0, [r4]!
        13924c:	50467261 	subpl	r7, r6, r1, ror #4
        139250:	6d655369 	stcvsl	3, cr5, [r5, -#420]!
        139254:	6e6b0000 	cdpvs	0, 6, cr0, cr11, cr0, {0}
        139258:	00371328 	eoreqs	r1, r7, r8, lsr #6
    */
}

/**
 * Symbol: TNewScriptEndpointClient::Default(TEndpointEvent *)
 * Address: 0013930c
 */
TNewScriptEndpointClient::Default(TEndpointEvent *) {
    /*
        13930c:	e1a0c00d 	mov	ip, sp
        139310:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        139314:	e24cb004 	sub	fp, ip, #4	; 0x4
        139318:	e1a05001 	mov	r5, r1
        13931c:	e2800018 	add	r0, r0, #24	; 0x18
        139320:	e1a04000 	mov	r4, r0
        139324:	e5900000 	ldr	r0, [r0]
        139328:	e5900000 	ldr	r0, [r0]
        13932c:	e3300002 	teq	r0, #2	; 0x2
        139330:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        139334:	e1a00004 	mov	r0, r4
        139338:	e59f115c 	ldr	r1, [pc, #15c]	; 13949c <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x190>
        13933c:	e1a06001 	mov	r6, r1
        139340:	e3a03000 	mov	r3, #0	; 0x0
        139344:	e3a02000 	mov	r2, #0	; 0x0
        139348:	eb6a2bc9 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        13934c:	e3300002 	teq	r0, #2	; 0x2
        139350:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        139354:	e24dd010 	sub	sp, sp, #16	; 0x10
        139358:	e3a00001 	mov	r0, #1	; 0x1
        13935c:	eb658a8e 	bl	1a9bd9c <$MakeArray(long)>
        139360:	eb6a2379 	bl	1bc214c <$AllocateRefHandle(long)>
        139364:	e58d000c 	str	r0, [sp, #12]
        139368:	eb6a2374 	bl	1bc2140 <$AllocateFrame(void)>
        13936c:	eb6a2376 	bl	1bc214c <$AllocateRefHandle(long)>
        139370:	e58d0008 	str	r0, [sp, #8]
        139374:	e2850020 	add	r0, r5, #32	; 0x20
        139378:	e1a0100d 	mov	r1, sp
        13937c:	e3a02004 	mov	r2, #4	; 0x4
        139380:	eb6a96f3 	bl	1bdef54 <$BlockMove>
        139384:	e3a07000 	mov	r7, #0	; 0x0
        139388:	e5cd7004 	strb	r7, [sp, #4]	; fField4
        13938c:	e24dd010 	sub	sp, sp, #16	; 0x10
        139390:	e59f0108 	ldr	r0, [pc, #108]	; 1394a0 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x194>	; fField108
        139394:	e3a0100a 	mov	r1, #10	; 0xa
        139398:	eb6a2367 	bl	1bc213c <$AllocateBinary(RefVar const &, long)>
        13939c:	eb6a236a 	bl	1bc214c <$AllocateRefHandle(long)>
        1393a0:	e58d000c 	str	r0, [sp, #12]
        1393a4:	e5900000 	ldr	r0, [r0]
        1393a8:	eb6a236b 	bl	1bc215c <$BinaryData(long)>
        1393ac:	e1a01000 	mov	r1, r0
        1393b0:	e28d0010 	add	r0, sp, #16	; 0x10
        1393b4:	e3e03102 	mvn	r3, #-2147483648	; 0x80000000
        1393b8:	e3a02001 	mov	r2, #1	; 0x1
        1393bc:	eb6ab7f0 	bl	1be7384 <$ConvertToUnicode__FPCvPUslT3>
        1393c0:	e5950010 	ldr	r0, [r5, #16]	; fField16
        1393c4:	e1a00100 	mov	r0, r0, lsl #2
        1393c8:	eb6a235f 	bl	1bc214c <$AllocateRefHandle(long)>
        1393cc:	e58d0000 	str	r0, [sp]
        1393d0:	e1a0200d 	mov	r2, sp
        1393d4:	e59f10c8 	ldr	r1, [pc, #c8]	; 1394a4 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x198>
        1393d8:	e28d0018 	add	r0, sp, #24	; 0x18
        1393dc:	eb6a33e1 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        1393e0:	e59d0000 	ldr	r0, [sp]
        1393e4:	eb6a2774 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1393e8:	e5950014 	ldr	r0, [r5, #20]	; fField20
        1393ec:	e1a00100 	mov	r0, r0, lsl #2
        1393f0:	eb6a2355 	bl	1bc214c <$AllocateRefHandle(long)>
        1393f4:	e58d0004 	str	r0, [sp, #4]	; fField4
        1393f8:	e28d2004 	add	r2, sp, #4	; 0x4
        1393fc:	e59f10a4 	ldr	r1, [pc, #a4]	; 1394a8 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x19c>
        139400:	e1a08001 	mov	r8, r1
        139404:	e28d0018 	add	r0, sp, #24	; 0x18
        139408:	eb6a33d6 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        13940c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        139410:	eb6a2769 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139414:	e28d200c 	add	r2, sp, #12	; 0xc
        139418:	e59f108c 	ldr	r1, [pc, #8c]	; 1394ac <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x1a0>
        13941c:	e28d0018 	add	r0, sp, #24	; 0x18
        139420:	eb6a33d0 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        139424:	e2850018 	add	r0, r5, #24	; 0x18
        139428:	eb048c30 	bl	25c4f0 <TTimeToMilliseconds(TTime)>
        13942c:	e1a00100 	mov	r0, r0, lsl #2
        139430:	eb6a2345 	bl	1bc214c <$AllocateRefHandle(long)>
        139434:	e58d0008 	str	r0, [sp, #8]
        139438:	e28d2008 	add	r2, sp, #8	; 0x8
        13943c:	e59f106c 	ldr	r1, [pc, #6c]	; 1394b0 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x1a4>
        139440:	e28d0018 	add	r0, sp, #24	; 0x18
        139444:	eb6a33c7 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        139448:	e59d0008 	ldr	r0, [sp, #8]
        13944c:	eb6a275a 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139450:	e1a05007 	mov	r5, r7
        139454:	e1a01007 	mov	r1, r7
        139458:	e59d0018 	ldr	r0, [sp, #24]
        13945c:	e5902000 	ldr	r2, [r0]
        139460:	e59d001c 	ldr	r0, [sp, #28]	; fField28
        139464:	e5900000 	ldr	r0, [r0]
        139468:	eb6a33ba 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        13946c:	e52d506c 	str	r5, [sp, -#108]!	; fField108
        139470:	e28d0008 	add	r0, sp, #8	; 0x8
        139474:	eb69e53e 	bl	1bb2974 <$setjmp>
        139478:	e3300000 	teq	r0, #0	; 0x0
        13947c:	1a00000c 	bne	1394b4 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x1a8>
        139480:	e1a0000d 	mov	r0, sp
        139484:	eb6a9afc 	bl	1be007c <$AddExceptionHandler>
        139488:	e1a00004 	mov	r0, r4
        13948c:	e28d2088 	add	r2, sp, #136	; 0x88
        139490:	e1a01006 	mov	r1, r6
        139494:	eb6a274e 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        139498:	ea000052 	b	1395e8 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x2dc>
        13949c:	00682cc8 	rsbeq	r2, r8, r8, asr #25
        1394a0:	006848d0 	ldreqd	r4, [r8], -#128
        1394a4:	00682cc0 	rsbeq	r2, r8, r0, asr #25
        1394a8:	006827a0 	rsbeq	r2, r8, r0, lsr #15
        1394ac:	00684548 	rsbeq	r4, r8, r8, asr #10
        1394b0:	00684b38 	rsbeq	r4, r8, r8, lsr fp
        1394b4:	e59d0060 	ldr	r0, [sp, #96]	; fField96
        1394b8:	e59f1104 	ldr	r1, [pc, #104]	; 1395c4 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x2b8>	; fField104
        1394bc:	e5911000 	ldr	r1, [r1]
        1394c0:	eb6aa733 	bl	1be3194 <$Subexception>
        1394c4:	e3300000 	teq	r0, #0	; 0x0
        1394c8:	0a000044 	beq	1395e0 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x2d4>
        1394cc:	e5940000 	ldr	r0, [r4]
        1394d0:	e5900000 	ldr	r0, [r0]
        1394d4:	e3300002 	teq	r0, #2	; 0x2
        1394d8:	0a00003d 	beq	1395d4 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x2c8>
        1394dc:	e1a00004 	mov	r0, r4
        1394e0:	e59f10e0 	ldr	r1, [pc, #e0]	; 1395c8 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x2bc>
        1394e4:	e1a07001 	mov	r7, r1
        1394e8:	e3a03000 	mov	r3, #0	; 0x0
        1394ec:	e3a02000 	mov	r2, #0	; 0x0
        1394f0:	eb6a2b5f 	bl	1bc4274 <$GetVariable__FRC6RefVarT1Pli>
        1394f4:	e3300002 	teq	r0, #2	; 0x2
        1394f8:	0a000035 	beq	1395d4 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x2c8>
        1394fc:	e24dd00c 	sub	sp, sp, #12	; 0xc
        139500:	eb6a230e 	bl	1bc2140 <$AllocateFrame(void)>
        139504:	eb6a2310 	bl	1bc214c <$AllocateRefHandle(long)>
        139508:	e58d0008 	str	r0, [sp, #8]
        13950c:	e59d006c 	ldr	r0, [sp, #108]	; fField108
        139510:	eb6a2f5a 	bl	1bc5280 <$Intern(char *)>
        139514:	eb6a230c 	bl	1bc214c <$AllocateRefHandle(long)>
        139518:	e58d0000 	str	r0, [sp]
        13951c:	e1a0200d 	mov	r2, sp
        139520:	e59f10a4 	ldr	r1, [pc, #a4]	; 1395cc <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x2c0>
        139524:	e28d0008 	add	r0, sp, #8	; 0x8
        139528:	eb6a338e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        13952c:	e59d0000 	ldr	r0, [sp]
        139530:	eb6a2721 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139534:	e59d0070 	ldr	r0, [sp, #112]
        139538:	e1a00100 	mov	r0, r0, lsl #2
        13953c:	eb6a2302 	bl	1bc214c <$AllocateRefHandle(long)>
        139540:	e58d0004 	str	r0, [sp, #4]	; fField4
        139544:	e28d2004 	add	r2, sp, #4	; 0x4
        139548:	e1a01008 	mov	r1, r8
        13954c:	e28d0008 	add	r0, sp, #8	; 0x8
        139550:	eb6a3384 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        139554:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        139558:	eb6a2717 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        13955c:	e1a02006 	mov	r2, r6
        139560:	e59f1068 	ldr	r1, [pc, #68]	; 1395d0 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x2c4>	; fField68
        139564:	e28d0008 	add	r0, sp, #8	; 0x8
        139568:	eb6a337e 	bl	1bc6368 <$SetFrameSlot__FRC6RefVarN21>
        13956c:	e24dd004 	sub	sp, sp, #4	; 0x4
        139570:	e3a00001 	mov	r0, #1	; 0x1
        139574:	eb658a08 	bl	1a9bd9c <$MakeArray(long)>
        139578:	eb6a22f3 	bl	1bc214c <$AllocateRefHandle(long)>
        13957c:	e58d0000 	str	r0, [sp]
        139580:	e59d000c 	ldr	r0, [sp, #12]
        139584:	e1a01005 	mov	r1, r5
        139588:	e5902000 	ldr	r2, [r0]
        13958c:	e59d0000 	ldr	r0, [sp]
        139590:	e5900000 	ldr	r0, [r0]
        139594:	eb6a336f 	bl	1bc6358 <$SetArraySlotRef__FlN21>
        139598:	e1a00004 	mov	r0, r4
        13959c:	e1a0200d 	mov	r2, sp
        1395a0:	e1a01007 	mov	r1, r7
        1395a4:	eb6a270a 	bl	1bc31d4 <$DoMessage__FRC6RefVarN21>
        1395a8:	e59d0000 	ldr	r0, [sp]
        1395ac:	eb6a2702 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1395b0:	e28dd004 	add	sp, sp, #4	; 0x4
        1395b4:	e59d0008 	ldr	r0, [sp, #8]
        1395b8:	eb6a26ff 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1395bc:	e28dd00c 	add	sp, sp, #12	; 0xc
        1395c0:	ea000008 	b	1395e8 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x2dc>
        1395c4:	003712a4 	eoreqs	r1, r7, r4, lsr #5
        1395c8:	00682ce0 	rsbeq	r2, r8, r0, ror #25
        1395cc:	006839a8 	rsbeq	r3, r8, r8, lsr #19
        1395d0:	00682840 	rsbeq	r2, r8, r0, asr #16
        1395d4:	e28d0060 	add	r0, sp, #96	; 0x60
        1395d8:	eb6ae8ed 	bl	1bf3994 <$ExceptionNotify(Exception *)>
        1395dc:	ea000001 	b	1395e8 <TNewScriptEndpointClient::Default(TEndpointEvent *)+0x2dc>
        1395e0:	e1a0000d 	mov	r0, sp
        1395e4:	eb6aa2da 	bl	1be2154 <$NextHandler>
        1395e8:	e1a0000d 	mov	r0, sp
        1395ec:	eb6a9eb1 	bl	1be10b8 <$ExitHandler>
        1395f0:	e28dd06c 	add	sp, sp, #108	; 0x6c
        1395f4:	e59d000c 	ldr	r0, [sp, #12]
        1395f8:	eb6a26ef 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        1395fc:	e28dd010 	add	sp, sp, #16	; 0x10
        139600:	e59d0008 	ldr	r0, [sp, #8]
        139604:	eb6a26ec 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139608:	e59d000c 	ldr	r0, [sp, #12]
        13960c:	eb6a26ea 	bl	1bc31bc <$DisposeRefHandle(RefHandle *)>
        139610:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

