#include "include/TFlashAMD.h"

/**
 * Symbol: Sizeof__9TFlashAMDSFv
 * Address: 000bdda0
 */
void TFlashAMD::Sizeof() {
    /*
         bdda0:	e3a0004c 	mov	r0, #76	; 0x4c
         bdda4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::New(void)
 * Address: 000bdda8
 */
TFlashAMD::New(void) {
    /*
         bdda8:	e3a01000 	mov	r1, #0	; 0x0
         bddac:	e5801010 	str	r1, [r0, #16]	; fField16
         bddb0:	e5801014 	str	r1, [r0, #20]	; fField20
         bddb4:	e5801040 	str	r1, [r0, #64]	; fField64
         bddb8:	e580103c 	str	r1, [r0, #60]	; fField60
         bddbc:	e5801018 	str	r1, [r0, #24]	; fField24
         bddc0:	e5801034 	str	r1, [r0, #52]	; fField52
         bddc4:	e3a01019 	mov	r1, #25	; 0x19
         bddc8:	e580101c 	str	r1, [r0, #28]	; fField28
         bddcc:	e3a01003 	mov	r1, #3	; 0x3
         bddd0:	e5801044 	str	r1, [r0, #68]	; fField68
         bddd4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::ResumeErase(unsigned long)
 * Address: 000bddd8
 */
TFlashAMD::ResumeErase(unsigned long) {
    /*
         bddd8:	e3a02001 	mov	r2, #1	; 0x1
         bdddc:	ea69f805 	b	1b3bdf8 <TFlashAMD::$DoErase(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TFlashAMD::DoErase(unsigned long, unsigned char)
 * Address: 000bdde0
 */
TFlashAMD::DoErase(unsigned long, unsigned char) {
    /*
         bdde0:	e1a0c00d 	mov	ip, sp
         bdde4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         bdde8:	e24cb004 	sub	fp, ip, #4	; 0x4
         bddec:	e1a04000 	mov	r4, r0
         bddf0:	e1a05001 	mov	r5, r1
         bddf4:	e20260ff 	and	r6, r2, #255	; 0xff
         bddf8:	e3a00000 	mov	r0, #0	; 0x0
         bddfc:	e52d0004 	str	r0, [sp, -#4]!
         bde00:	e5940030 	ldr	r0, [r4, #48]	; fField48
         bde04:	e1500001 	cmp	r0, r1
         bde08:	93a000ea 	movls	r0, #234	; 0xea
         bde0c:	92400b0a 	subls	r0, r0, #10240	; 0x2800
         bde10:	958d0000 	strls	r0, [sp]
         bde14:	9a000051 	bls	bdf60 <TFlashAMD::DoErase(unsigned long, unsigned char)+0x180>
         bde18:	e1a00004 	mov	r0, r4
         bde1c:	eb69fc0a 	bl	1b3ce4c <TFlashAMD::$CheckWriteProtected(void)>
         bde20:	e59f706c 	ldr	r7, [pc, #6c]	; bde94 <TFlashAMD::DoErase(unsigned long, unsigned char)+0xb4>
         bde24:	e3300000 	teq	r0, #0	; 0x0
         bde28:	158d7000 	strne	r7, [sp]
         bde2c:	1a00004b 	bne	bdf60 <TFlashAMD::DoErase(unsigned long, unsigned char)+0x180>
         bde30:	e1a00004 	mov	r0, r4
         bde34:	eb69fbf4 	bl	1b3ce0c <TFlashAMD::$EnterFlashOperation(void)>
         bde38:	e3a00000 	mov	r0, #0	; 0x0
         bde3c:	e52d006c 	str	r0, [sp, -#108]!
         bde40:	e28d0008 	add	r0, sp, #8	; 0x8
         bde44:	eb6bd2ca 	bl	1bb2974 <$setjmp>
         bde48:	e3300000 	teq	r0, #0	; 0x0
         bde4c:	1a000021 	bne	bded8 <TFlashAMD::DoErase(unsigned long, unsigned char)+0xf8>
         bde50:	e1a0000d 	mov	r0, sp
         bde54:	eb6c8888 	bl	1be007c <$AddExceptionHandler>
         bde58:	e5940014 	ldr	r0, [r4, #20]	; fField20
         bde5c:	e0801005 	add	r1, r0, r5
         bde60:	e1a05001 	mov	r5, r1
         bde64:	e1a00004 	mov	r0, r4
         bde68:	eb69fbf5 	bl	1b3ce44 <TFlashAMD::$CheckStatus(unsigned long)>
         bde6c:	e3500000 	cmp	r0, #0	; 0x0
         bde70:	ba000028 	blt	bdf18 <TFlashAMD::DoErase(unsigned long, unsigned char)+0x138>
         bde74:	e3560000 	cmp	r6, #0	; 0x0
         bde78:	1a000006 	bne	bde98 <TFlashAMD::DoErase(unsigned long, unsigned char)+0xb8>
         bde7c:	e3300001 	teq	r0, #1	; 0x1
         bde80:	13300004 	teqne	r0, #4	; 0x4
         bde84:	13e00036 	mvnne	r0, #54	; 0x36
         bde88:	12400c29 	subne	r0, r0, #10496	; 0x2900
         bde8c:	1a000021 	bne	bdf18 <TFlashAMD::DoErase(unsigned long, unsigned char)+0x138>
         bde90:	ea000005 	b	bdeac <TFlashAMD::DoErase(unsigned long, unsigned char)+0xcc>
         bde94:	ffffd8af 	swinv	0x00ffd8af
         bde98:	13a00603 	movne	r0, #3145728	; 0x300000
         bde9c:	12800203 	addne	r0, r0, #805306368	; 0x30000000
         bdea0:	13c51003 	bicne	r1, r5, #3	; 0x3
         bdea4:	15810000 	strne	r0, [r1]
         bdea8:	1a000027 	bne	bdf4c <TFlashAMD::DoErase(unsigned long, unsigned char)+0x16c>
         bdeac:	e1a01005 	mov	r1, r5
         bdeb0:	e1a00004 	mov	r0, r4
         bdeb4:	e3a02080 	mov	r2, #128	; 0x80
         bdeb8:	e2822902 	add	r2, r2, #32768	; 0x8000
         bdebc:	eb69fbdb 	bl	1b3ce30 <TFlashAMD::$ChipSendCommand(unsigned long, unsigned long)>
         bdec0:	e1a01005 	mov	r1, r5
         bdec4:	e1a00004 	mov	r0, r4
         bdec8:	e3a02030 	mov	r2, #48	; 0x30
         bdecc:	e2822a03 	add	r2, r2, #12288	; 0x3000
         bded0:	eb69fbd6 	bl	1b3ce30 <TFlashAMD::$ChipSendCommand(unsigned long, unsigned long)>
         bded4:	ea00001c 	b	bdf4c <TFlashAMD::DoErase(unsigned long, unsigned char)+0x16c>
         bded8:	e59d0060 	ldr	r0, [sp, #96]
         bdedc:	e59f103c 	ldr	r1, [pc, #3c]	; bdf20 <TFlashAMD::DoErase(unsigned long, unsigned char)+0x140>
         bdee0:	e5911000 	ldr	r1, [r1]
         bdee4:	eb6c94aa 	bl	1be3194 <$Subexception>
         bdee8:	e3300000 	teq	r0, #0	; 0x0
         bdeec:	13a000b4 	movne	r0, #180	; 0xb4
         bdef0:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         bdef4:	1a000007 	bne	bdf18 <TFlashAMD::DoErase(unsigned long, unsigned char)+0x138>
         bdef8:	e59d0060 	ldr	r0, [sp, #96]
         bdefc:	e59f1020 	ldr	r1, [pc, #20]	; bdf24 <TFlashAMD::DoErase(unsigned long, unsigned char)+0x144>	; fField20
         bdf00:	e5911000 	ldr	r1, [r1]
         bdf04:	eb6c94a2 	bl	1be3194 <$Subexception>
         bdf08:	e3300000 	teq	r0, #0	; 0x0
         bdf0c:	0a000005 	beq	bdf28 <TFlashAMD::DoErase(unsigned long, unsigned char)+0x148>
         bdf10:	e3a000b5 	mov	r0, #181	; 0xb5
         bdf14:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         bdf18:	e58d006c 	str	r0, [sp, #108]
         bdf1c:	ea00000a 	b	bdf4c <TFlashAMD::DoErase(unsigned long, unsigned char)+0x16c>
         bdf20:	003712c4 	eoreqs	r1, r7, r4, asr #5
         bdf24:	003712b8 	ldreqh	r1, [r7], -r8
         bdf28:	e59d0060 	ldr	r0, [sp, #96]
         bdf2c:	e59f1034 	ldr	r1, [pc, #34]	; bdf68 <TFlashAMD::DoErase(unsigned long, unsigned char)+0x188>
         bdf30:	e5911000 	ldr	r1, [r1]
         bdf34:	eb6c9496 	bl	1be3194 <$Subexception>
         bdf38:	e3300000 	teq	r0, #0	; 0x0
         bdf3c:	158d706c 	strne	r7, [sp, #108]
         bdf40:	1a000001 	bne	bdf4c <TFlashAMD::DoErase(unsigned long, unsigned char)+0x16c>
         bdf44:	e1a0000d 	mov	r0, sp
         bdf48:	eb6c9081 	bl	1be2154 <$NextHandler>
         bdf4c:	e1a0000d 	mov	r0, sp
         bdf50:	eb6c8c58 	bl	1be10b8 <$ExitHandler>
         bdf54:	e28dd06c 	add	sp, sp, #108	; 0x6c
         bdf58:	e1a00004 	mov	r0, r4
         bdf5c:	eb69fbab 	bl	1b3ce10 <TFlashAMD::$ExitFlashOperation(void)>
         bdf60:	e49d0004 	ldr	r0, [sp], #4
         bdf64:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         bdf68:	003712c8 	eoreqs	r1, r7, r8, asr #5
    */
}

/**
 * Symbol: TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)
 * Address: 000bdf6c
 */
TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long) {
    /*
         bdf6c:	e1a0c00d 	mov	ip, sp
         bdf70:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         bdf74:	e24cb004 	sub	fp, ip, #4	; 0x4
         bdf78:	e1a04000 	mov	r4, r0
         bdf7c:	e1a05001 	mov	r5, r1
         bdf80:	e3a00000 	mov	r0, #0	; 0x0
         bdf84:	e52d0004 	str	r0, [sp, -#4]!
         bdf88:	e5940030 	ldr	r0, [r4, #48]	; fField48
         bdf8c:	e1500001 	cmp	r0, r1
         bdf90:	93a000ea 	movls	r0, #234	; 0xea
         bdf94:	92400b0a 	subls	r0, r0, #10240	; 0x2800
         bdf98:	958d0000 	strls	r0, [sp]
         bdf9c:	9a00004b 	bls	be0d0 <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0x164>
         bdfa0:	e1a00004 	mov	r0, r4
         bdfa4:	eb69fba8 	bl	1b3ce4c <TFlashAMD::$CheckWriteProtected(void)>
         bdfa8:	e59f6080 	ldr	r6, [pc, #80]	; be030 <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0xc4>
         bdfac:	e3300000 	teq	r0, #0	; 0x0
         bdfb0:	158d6000 	strne	r6, [sp]
         bdfb4:	1a000045 	bne	be0d0 <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0x164>
         bdfb8:	e1a00004 	mov	r0, r4
         bdfbc:	eb69fb92 	bl	1b3ce0c <TFlashAMD::$EnterFlashOperation(void)>
         bdfc0:	e3a00000 	mov	r0, #0	; 0x0
         bdfc4:	e52d006c 	str	r0, [sp, -#108]!
         bdfc8:	e28d0008 	add	r0, sp, #8	; 0x8
         bdfcc:	eb6bd268 	bl	1bb2974 <$setjmp>
         bdfd0:	e3300000 	teq	r0, #0	; 0x0
         bdfd4:	1a00001b 	bne	be048 <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0xdc>
         bdfd8:	e1a0000d 	mov	r0, sp
         bdfdc:	eb6c8826 	bl	1be007c <$AddExceptionHandler>
         bdfe0:	e5940014 	ldr	r0, [r4, #20]	; fField20
         bdfe4:	e0801005 	add	r1, r0, r5
         bdfe8:	e1a05001 	mov	r5, r1
         bdfec:	e1a00004 	mov	r0, r4
         bdff0:	eb69fb93 	bl	1b3ce44 <TFlashAMD::$CheckStatus(unsigned long)>
         bdff4:	e3500000 	cmp	r0, #0	; 0x0
         bdff8:	ba000022 	blt	be088 <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0x11c>
         bdffc:	e3300003 	teq	r0, #3	; 0x3
         be000:	1a00000b 	bne	be034 <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0xc8>
         be004:	e3a0160b 	mov	r1, #11534336	; 0xb00000
         be008:	e281120b 	add	r1, r1, #-1342177280	; 0xb0000000
         be00c:	e3c50003 	bic	r0, r5, #3	; 0x3
         be010:	e5801000 	str	r1, [r0]
         be014:	e1a01005 	mov	r1, r5
         be018:	e1a00004 	mov	r0, r4
         be01c:	e3e03004 	mvn	r3, #4	; 0x4
         be020:	e2433b01 	sub	r3, r3, #1024	; 0x400
         be024:	e3a02078 	mov	r2, #120	; 0x78
         be028:	eb69fb84 	bl	1b3ce40 <TFlashAMD::$ChipWaitReady(unsigned long, unsigned long, unsigned long)>
         be02c:	ea000022 	b	be0bc <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0x150>
         be030:	ffffd8af 	swinv	0x00ffd8af
         be034:	e3300001 	teq	r0, #1	; 0x1
         be038:	13e00039 	mvnne	r0, #57	; 0x39
         be03c:	12400c29 	subne	r0, r0, #10496	; 0x2900
         be040:	1a000010 	bne	be088 <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0x11c>
         be044:	ea00001c 	b	be0bc <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0x150>
         be048:	e59d0060 	ldr	r0, [sp, #96]
         be04c:	e59f103c 	ldr	r1, [pc, #3c]	; be090 <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0x124>
         be050:	e5911000 	ldr	r1, [r1]
         be054:	eb6c944e 	bl	1be3194 <$Subexception>
         be058:	e3300000 	teq	r0, #0	; 0x0
         be05c:	13a000b4 	movne	r0, #180	; 0xb4
         be060:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         be064:	1a000007 	bne	be088 <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0x11c>
         be068:	e59d0060 	ldr	r0, [sp, #96]
         be06c:	e59f1020 	ldr	r1, [pc, #20]	; be094 <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0x128>	; fField20
         be070:	e5911000 	ldr	r1, [r1]
         be074:	eb6c9446 	bl	1be3194 <$Subexception>
         be078:	e3300000 	teq	r0, #0	; 0x0
         be07c:	0a000005 	beq	be098 <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0x12c>
         be080:	e3a000b5 	mov	r0, #181	; 0xb5
         be084:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         be088:	e58d006c 	str	r0, [sp, #108]
         be08c:	ea00000a 	b	be0bc <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0x150>
         be090:	003712c4 	eoreqs	r1, r7, r4, asr #5
         be094:	003712b8 	ldreqh	r1, [r7], -r8
         be098:	e59d0060 	ldr	r0, [sp, #96]
         be09c:	e59f1034 	ldr	r1, [pc, #34]	; be0d8 <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0x16c>
         be0a0:	e5911000 	ldr	r1, [r1]
         be0a4:	eb6c943a 	bl	1be3194 <$Subexception>
         be0a8:	e3300000 	teq	r0, #0	; 0x0
         be0ac:	158d606c 	strne	r6, [sp, #108]
         be0b0:	1a000001 	bne	be0bc <TFlashAMD::SuspendErase(unsigned long, unsigned long, unsigned long)+0x150>
         be0b4:	e1a0000d 	mov	r0, sp
         be0b8:	eb6c9025 	bl	1be2154 <$NextHandler>
         be0bc:	e1a0000d 	mov	r0, sp
         be0c0:	eb6c8bfc 	bl	1be10b8 <$ExitHandler>
         be0c4:	e28dd06c 	add	sp, sp, #108	; 0x6c
         be0c8:	e1a00004 	mov	r0, r4
         be0cc:	eb69fb4f 	bl	1b3ce10 <TFlashAMD::$ExitFlashOperation(void)>
         be0d0:	e49d0004 	ldr	r0, [sp], #4
         be0d4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         be0d8:	003712c8 	eoreqs	r1, r7, r8, asr #5
    */
}

/**
 * Symbol: TFlashAMD::DeepSleep(unsigned long)
 * Address: 000be0dc
 */
TFlashAMD::DeepSleep(unsigned long) {
    /*
         be0dc:	e3a00000 	mov	r0, #0	; 0x0
         be0e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::Wakeup(unsigned long)
 * Address: 000be0e4
 */
TFlashAMD::Wakeup(unsigned long) {
    /*
         be0e4:	e3a00000 	mov	r0, #0	; 0x0
         be0e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::Status(unsigned long)
 * Address: 000be0ec
 */
TFlashAMD::Status(unsigned long) {
    /*
         be0ec:	e1a0c00d 	mov	ip, sp
         be0f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         be0f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         be0f8:	e1a04000 	mov	r4, r0
         be0fc:	e1a05001 	mov	r5, r1
         be100:	e24dd004 	sub	sp, sp, #4	; 0x4
         be104:	e5900030 	ldr	r0, [r0, #48]	; fField48
         be108:	e1500001 	cmp	r0, r1
         be10c:	93a000ea 	movls	r0, #234	; 0xea
         be110:	92400b0a 	subls	r0, r0, #10240	; 0x2800
         be114:	958d0000 	strls	r0, [sp]
         be118:	9a000032 	bls	be1e8 <TFlashAMD::Status(unsigned long)+0xfc>
         be11c:	e1a00004 	mov	r0, r4
         be120:	eb69fb39 	bl	1b3ce0c <TFlashAMD::$EnterFlashOperation(void)>
         be124:	e3a00000 	mov	r0, #0	; 0x0
         be128:	e52d006c 	str	r0, [sp, -#108]!
         be12c:	e28d0008 	add	r0, sp, #8	; 0x8
         be130:	eb6bd20f 	bl	1bb2974 <$setjmp>
         be134:	e3300000 	teq	r0, #0	; 0x0
         be138:	1a000006 	bne	be158 <TFlashAMD::Status(unsigned long)+0x6c>
         be13c:	e1a0000d 	mov	r0, sp
         be140:	eb6c87cd 	bl	1be007c <$AddExceptionHandler>
         be144:	e5940014 	ldr	r0, [r4, #20]	; fField20
         be148:	e0801005 	add	r1, r0, r5
         be14c:	e1a00004 	mov	r0, r4
         be150:	eb69fb3b 	bl	1b3ce44 <TFlashAMD::$CheckStatus(unsigned long)>
         be154:	ea000016 	b	be1b4 <TFlashAMD::Status(unsigned long)+0xc8>
         be158:	e59d0060 	ldr	r0, [sp, #96]
         be15c:	e59f1058 	ldr	r1, [pc, #58]	; be1bc <TFlashAMD::Status(unsigned long)+0xd0>
         be160:	e5911000 	ldr	r1, [r1]
         be164:	eb6c940a 	bl	1be3194 <$Subexception>
         be168:	e3300000 	teq	r0, #0	; 0x0
         be16c:	13a000b4 	movne	r0, #180	; 0xb4
         be170:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         be174:	1a00000e 	bne	be1b4 <TFlashAMD::Status(unsigned long)+0xc8>
         be178:	e59d0060 	ldr	r0, [sp, #96]
         be17c:	e59f103c 	ldr	r1, [pc, #3c]	; be1c0 <TFlashAMD::Status(unsigned long)+0xd4>
         be180:	e5911000 	ldr	r1, [r1]
         be184:	eb6c9402 	bl	1be3194 <$Subexception>
         be188:	e3300000 	teq	r0, #0	; 0x0
         be18c:	13a000b5 	movne	r0, #181	; 0xb5
         be190:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         be194:	1a000006 	bne	be1b4 <TFlashAMD::Status(unsigned long)+0xc8>
         be198:	e59d0060 	ldr	r0, [sp, #96]
         be19c:	e59f1020 	ldr	r1, [pc, #20]	; be1c4 <TFlashAMD::Status(unsigned long)+0xd8>	; fField20
         be1a0:	e5911000 	ldr	r1, [r1]
         be1a4:	eb6c93fa 	bl	1be3194 <$Subexception>
         be1a8:	e3300000 	teq	r0, #0	; 0x0
         be1ac:	0a000006 	beq	be1cc <TFlashAMD::Status(unsigned long)+0xe0>
         be1b0:	e59f0010 	ldr	r0, [pc, #10]	; be1c8 <TFlashAMD::Status(unsigned long)+0xdc>
         be1b4:	e58d006c 	str	r0, [sp, #108]
         be1b8:	ea000005 	b	be1d4 <TFlashAMD::Status(unsigned long)+0xe8>
         be1bc:	003712c4 	eoreqs	r1, r7, r4, asr #5
         be1c0:	003712b8 	ldreqh	r1, [r7], -r8
         be1c4:	003712c8 	eoreqs	r1, r7, r8, asr #5
         be1c8:	ffffd8af 	swinv	0x00ffd8af
         be1cc:	e1a0000d 	mov	r0, sp
         be1d0:	eb6c8fdf 	bl	1be2154 <$NextHandler>
         be1d4:	e1a0000d 	mov	r0, sp
         be1d8:	eb6c8bb6 	bl	1be10b8 <$ExitHandler>
         be1dc:	e28dd06c 	add	sp, sp, #108	; 0x6c
         be1e0:	e1a00004 	mov	r0, r4
         be1e4:	eb69fb09 	bl	1b3ce10 <TFlashAMD::$ExitFlashOperation(void)>
         be1e8:	e49d0004 	ldr	r0, [sp], #4
         be1ec:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashAMD::GetWriteProtected(unsigned char *)
 * Address: 000be1f0
 */
TFlashAMD::GetWriteProtected(unsigned char *) {
    /*
         be1f0:	e1a0c00d 	mov	ip, sp
         be1f4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         be1f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         be1fc:	e1a04001 	mov	r4, r1
         be200:	eb69fb11 	bl	1b3ce4c <TFlashAMD::$CheckWriteProtected(void)>
         be204:	e5c40000 	strb	r0, [r4]
         be208:	e3a00000 	mov	r0, #0	; 0x0
         be20c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashAMD::ResetCard(void)
 * Address: 000be210
 */
TFlashAMD::ResetCard(void) {
    /*
         be210:	e1a0c00d 	mov	ip, sp
         be214:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         be218:	e24cb004 	sub	fp, ip, #4	; 0x4
         be21c:	e5901044 	ldr	r1, [r0, #68]	; fField68
         be220:	e3811002 	orr	r1, r1, #2	; 0x2
         be224:	e5801044 	str	r1, [r0, #68]	; fField68
         be228:	e5900010 	ldr	r0, [r0, #16]	; fField16
         be22c:	eb6c666e 	bl	1bd7bec <TCardSocket::$PCMCIAReset(void)>
         be230:	e24dd00c 	sub	sp, sp, #12	; 0xc
         be234:	e1a0000d 	mov	r0, sp
         be238:	eb6cff23 	bl	1bfdecc <TDelayTimer::$__ct(void)>
         be23c:	e1a0000d 	mov	r0, sp
         be240:	e3a010a0 	mov	r1, #160	; 0xa0
         be244:	eb6cff24 	bl	1bfdedc <TDelayTimer::$ShortTimerDelay(unsigned long)>
         be248:	e3a00000 	mov	r0, #0	; 0x0
         be24c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TFlashAMD::EnterFlashOperation(void)
 * Address: 000be250
 */
TFlashAMD::EnterFlashOperation(void) {
    /*
         be250:	e5901044 	ldr	r1, [r0, #68]	; fField68
         be254:	e3811004 	orr	r1, r1, #4	; 0x4
         be258:	e5801044 	str	r1, [r0, #68]	; fField68
         be25c:	e5900010 	ldr	r0, [r0, #16]	; fField16
         be260:	e3a01000 	mov	r1, #0	; 0x0
         be264:	ea6c76cb 	b	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
    */
}

/**
 * Symbol: TFlashAMD::ExitFlashOperation(void)
 * Address: 000be268
 */
TFlashAMD::ExitFlashOperation(void) {
    /*
         be268:	e1a0c00d 	mov	ip, sp
         be26c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         be270:	e24cb004 	sub	fp, ip, #4	; 0x4
         be274:	e1a04000 	mov	r4, r0
         be278:	e5900010 	ldr	r0, [r0, #16]	; fField16
         be27c:	e3a0100a 	mov	r1, #10	; 0xa
         be280:	eb6c76c4 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         be284:	e5940044 	ldr	r0, [r4, #68]	; fField68
         be288:	e3c00004 	bic	r0, r0, #4	; 0x4
         be28c:	e5a40044 	str	r0, [r4, #68]!	; fField68
         be290:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashAMD::Delete(void)
 * Address: 000be294
 */
TFlashAMD::Delete(void) {
    /*
         be294:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::AcknowledgeReset(void)
 * Address: 000be298
 */
TFlashAMD::AcknowledgeReset(void) {
    /*
         be298:	e5901044 	ldr	r1, [r0, #68]	; fField68
         be29c:	e3c11002 	bic	r1, r1, #2	; 0x2
         be2a0:	e5a01044 	str	r1, [r0, #68]!	; fField68
         be2a4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::RegisterClientInfo(unsigned long)
 * Address: 000be2a8
 */
TFlashAMD::RegisterClientInfo(unsigned long) {
    /*
         be2a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetPhysResource(void)
 * Address: 000be2ac
 */
TFlashAMD::GetPhysResource(void) {
    /*
         be2ac:	e3a00000 	mov	r0, #0	; 0x0
         be2b0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetSocketNumber(void)
 * Address: 000be2b4
 */
TFlashAMD::GetSocketNumber(void) {
    /*
         be2b4:	e5900010 	ldr	r0, [r0, #16]	; fField16
         be2b8:	ea6c7adf 	b	1bdce3c <TCardSocket::$SocketNumber(void)>
    */
}

/**
 * Symbol: TFlashAMD::GetVendorInfo(void)
 * Address: 000be2bc
 */
TFlashAMD::GetVendorInfo(void) {
    /*
         be2bc:	e5900018 	ldr	r0, [r0, #24]	; fField24
         be2c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetAttributes(void)
 * Address: 000be2c4
 */
TFlashAMD::GetAttributes(void) {
    /*
         be2c4:	e590001c 	ldr	r0, [r0, #28]	; fField28
         be2c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetDataOffset(void)
 * Address: 000be2cc
 */
TFlashAMD::GetDataOffset(void) {
    /*
         be2cc:	e5900034 	ldr	r0, [r0, #52]	; fField52
         be2d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetWriteErrorAddress(void)
 * Address: 000be2d4
 */
TFlashAMD::GetWriteErrorAddress(void) {
    /*
         be2d4:	e590003c 	ldr	r0, [r0, #60]	; fField60
         be2d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetTotalSize(void)
 * Address: 000be2dc
 */
TFlashAMD::GetTotalSize(void) {
    /*
         be2dc:	e5900030 	ldr	r0, [r0, #48]	; fField48
         be2e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetGroupSize(void)
 * Address: 000be2e4
 */
TFlashAMD::GetGroupSize(void) {
    /*
         be2e4:	e5901020 	ldr	r1, [r0, #32]	; fField32
         be2e8:	e5d02029 	ldrb	r2, [r0, #41]	; fField41
         be2ec:	e0000192 	mul	r0, r2, r1
         be2f0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)
 * Address: 000be2f4
 */
TFlashAMD::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long) {
    /*
         be2f4:	e1a0c00d 	mov	ip, sp
         be2f8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         be2fc:	e24cb004 	sub	fp, ip, #4	; 0x4
         be300:	e1a04000 	mov	r4, r0
         be304:	e1a05002 	mov	r5, r2
         be308:	e3a00003 	mov	r0, #3	; 0x3
         be30c:	e59b6004 	ldr	r6, [fp, #4]
         be310:	e3310000 	teq	r1, #0	; 0x0
         be314:	e5840044 	str	r0, [r4, #68]	; fField68
         be318:	13350000 	teqne	r5, #0	; 0x0
         be31c:	0a00004b 	beq	be450 <TFlashAMD::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)+0x15c>
         be320:	e5841010 	str	r1, [r4, #16]	; fField16
         be324:	e1a00004 	mov	r0, r4
         be328:	eb69fab6 	bl	1b3ce08 <TFlashAMD::$ResetCard(void)>
         be32c:	e1b07000 	movs	r7, r0
         be330:	1a000048 	bne	be458 <TFlashAMD::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)+0x164>
         be334:	e1a02006 	mov	r2, r6
         be338:	e1a01005 	mov	r1, r5
         be33c:	e1a00004 	mov	r0, r4
         be340:	eb69fac3 	bl	1b3ce54 <TFlashAMD::$IdentifyCard(TCardPCMCIA *, unsigned long)>
         be344:	e1b07000 	movs	r7, r0
         be348:	1a000042 	bne	be458 <TFlashAMD::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)+0x164>
         be34c:	e1a01006 	mov	r1, r6
         be350:	e1a00005 	mov	r0, r5
         be354:	eb6c558b 	bl	1bd3988 <TCardPCMCIA::$GetCardDevice(unsigned long const)>
         be358:	e1a06000 	mov	r6, r0
         be35c:	e5901004 	ldr	r1, [r0, #4]
         be360:	e5841030 	str	r1, [r4, #48]	; fField48
         be364:	e1a0a001 	mov	sl, r1
         be368:	e5d00018 	ldrb	r0, [r0, #24]	; fField24
         be36c:	e2400001 	sub	r0, r0, #1	; 0x1
         be370:	e3a09020 	mov	r9, #32	; 0x20
         be374:	e0490000 	sub	r0, r9, r0
         be378:	e3e08000 	mvn	r8, #0	; 0x0
         be37c:	e1a00038 	mov	r0, r8, lsr r0
         be380:	e2800001 	add	r0, r0, #1	; 0x1
         be384:	e5840024 	str	r0, [r4, #36]	; fField36
         be388:	e5942048 	ldr	r2, [r4, #72]	; fField72
         be38c:	e0000092 	mul	r0, r2, r0
         be390:	e5840020 	str	r0, [r4, #32]	; fField32
         be394:	eb6bd16b 	bl	1bb2948 <$__rt_udiv>
         be398:	e5c40028 	strb	r0, [r4, #40]	; fField40
         be39c:	e5d6001c 	ldrb	r0, [r6, #28]	; fField28
         be3a0:	e1a00080 	mov	r0, r0, lsl #1
         be3a4:	e5c40029 	strb	r0, [r4, #41]	; fField41
         be3a8:	e5d6001b 	ldrb	r0, [r6, #27]
         be3ac:	e2400001 	sub	r0, r0, #1	; 0x1
         be3b0:	e0490000 	sub	r0, r9, r0
         be3b4:	e1a00038 	mov	r0, r8, lsr r0
         be3b8:	e2800001 	add	r0, r0, #1	; 0x1
         be3bc:	e5c4002a 	strb	r0, [r4, #42]	; fField42
         be3c0:	e5960008 	ldr	r0, [r6, #8]
         be3c4:	e3a09000 	mov	r9, #0	; 0x0
         be3c8:	e5840038 	str	r0, [r4, #56]	; fField56
         be3cc:	e5849034 	str	r9, [r4, #52]	; fField52
         be3d0:	e5968000 	ldr	r8, [r6]
         be3d4:	e595600c 	ldr	r6, [r5, #12]
         be3d8:	e3360000 	teq	r6, #0	; 0x0
         be3dc:	0a000010 	beq	be424 <TFlashAMD::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)+0x130>
         be3e0:	e1580006 	cmp	r8, r6
         be3e4:	2a00000e 	bcs	be424 <TFlashAMD::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)+0x130>
         be3e8:	e08a0008 	add	r0, sl, r8
         be3ec:	e1500006 	cmp	r0, r6
         be3f0:	9a00000b 	bls	be424 <TFlashAMD::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)+0x130>
         be3f4:	e1a00005 	mov	r0, r5
         be3f8:	eb6c5569 	bl	1bd39a4 <TCardPCMCIA::$GetCardV2Vendor( const(void))>
         be3fc:	e59f1048 	ldr	r1, [pc, #48]	; be44c <TFlashAMD::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)+0x158>	; fField48
         be400:	e5911000 	ldr	r1, [r1]
         be404:	eb6bdda7 	bl	1bb5aa8 <$strcmp>
         be408:	e3300000 	teq	r0, #0	; 0x0
         be40c:	15a5900c 	strne	r9, [r5, #12]!
         be410:	1a000003 	bne	be424 <TFlashAMD::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)+0x130>
         be414:	e5846034 	str	r6, [r4, #52]	; fField52
         be418:	e5940030 	ldr	r0, [r4, #48]	; fField48
         be41c:	e0400006 	sub	r0, r0, r6
         be420:	e5840030 	str	r0, [r4, #48]	; fField48
         be424:	e5940010 	ldr	r0, [r4, #16]	; fField16
         be428:	eb6c4900 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         be42c:	e0801008 	add	r1, r0, r8
         be430:	e5940034 	ldr	r0, [r4, #52]	; fField52
         be434:	e0810000 	add	r0, r1, r0
         be438:	e5840014 	str	r0, [r4, #20]	; fField20
         be43c:	e5940044 	ldr	r0, [r4, #68]	; fField68
         be440:	e3c00001 	bic	r0, r0, #1	; 0x1
         be444:	e5a40044 	str	r0, [r4, #68]!	; fField68
         be448:	ea000002 	b	be458 <TFlashAMD::Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)+0x164>
         be44c:	0c100974 	ldceq	9, cr0, [r0], -#464
         be450:	e3a070ea 	mov	r7, #234	; 0xea
         be454:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
         be458:	e1a00007 	mov	r0, r7
         be45c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashAMD::GetEraseRegionSize(void)
 * Address: 000be460
 */
TFlashAMD::GetEraseRegionSize(void) {
    /*
         be460:	e5901024 	ldr	r1, [r0, #36]	; fField36
         be464:	e5d02029 	ldrb	r2, [r0, #41]	; fField41
         be468:	e0000192 	mul	r0, r2, r1
         be46c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetChipsPerGroup(void)
 * Address: 000be470
 */
TFlashAMD::GetChipsPerGroup(void) {
    /*
         be470:	e5d00029 	ldrb	r0, [r0, #41]	; fField41
         be474:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetBlocksPerPartition(void)
 * Address: 000be478
 */
TFlashAMD::GetBlocksPerPartition(void) {
    /*
         be478:	e5d0002a 	ldrb	r0, [r0, #42]	; fField42
         be47c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetMaxConcurrentVppOps(void)
 * Address: 000be480
 */
TFlashAMD::GetMaxConcurrentVppOps(void) {
    /*
         be480:	e3a00000 	mov	r0, #0	; 0x0
         be484:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetEraseRegionCurrent(void)
 * Address: 000be488
 */
TFlashAMD::GetEraseRegionCurrent(void) {
    /*
         be488:	e3a00000 	mov	r0, #0	; 0x0
         be48c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetWriteRegionCurrent(void)
 * Address: 000be490
 */
TFlashAMD::GetWriteRegionCurrent(void) {
    /*
         be490:	e3a00000 	mov	r0, #0	; 0x0
         be494:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetEraseRegionTime(void)
 * Address: 000be498
 */
TFlashAMD::GetEraseRegionTime(void) {
    /*
         be498:	e5900018 	ldr	r0, [r0, #24]	; fField24
         be49c:	e20000ff 	and	r0, r0, #255	; 0xff
         be4a0:	e33000a4 	teq	r0, #164	; 0xa4
         be4a4:	159f0004 	ldrne	r0, [pc, #4]	; be4b0 <TFlashAMD::GetEraseRegionTime(void)+0x18>
         be4a8:	059f0004 	ldreq	r0, [pc, #4]	; be4b4 <TFlashAMD::GetEraseRegionTime(void)+0x1c>
         be4ac:	e1a0f00e 	mov	pc, lr
         be4b0:	77359400 	ldrvc	r9, [r5, -r0, lsl #8]!
         be4b4:	b2d05e00 	sbclts	r5, r0, #0	; 0x0
    */
}

/**
 * Symbol: TFlashAMD::GetWriteAccessTime(void)
 * Address: 000be4b8
 */
TFlashAMD::GetWriteAccessTime(void) {
    /*
         be4b8:	e5900018 	ldr	r0, [r0, #24]	; fField24
         be4bc:	e20000ff 	and	r0, r0, #255	; 0xff
         be4c0:	e33000a4 	teq	r0, #164	; 0xa4
         be4c4:	13a00d7d 	movne	r0, #8000	; 0x1f40
         be4c8:	03a00dfa 	moveq	r0, #16000	; 0x3e80
         be4cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::GetReadAccessTime(void)
 * Address: 000be4d0
 */
TFlashAMD::GetReadAccessTime(void) {
    /*
         be4d0:	e5900038 	ldr	r0, [r0, #56]	; fField56
         be4d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::VppRisingTime(void)
 * Address: 000be4d8
 */
TFlashAMD::VppRisingTime(void) {
    /*
         be4d8:	e590101c 	ldr	r1, [r0, #28]	; fField28
         be4dc:	e3110010 	tst	r1, #16	; 0x10
         be4e0:	05900010 	ldreq	r0, [r0, #16]	; fField16
         be4e4:	0a6c828e 	beq	1bdef24 <TCardSocket::$VppRisingTime(void)>
         be4e8:	13a00000 	movne	r0, #0	; 0x0
         be4ec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::SuspendService(void)
 * Address: 000be4f0
 */
TFlashAMD::SuspendService(void) {
    /*
         be4f0:	e3a00000 	mov	r0, #0	; 0x0
         be4f4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::VppStatus(void)
 * Address: 000be4f8
 */
TFlashAMD::VppStatus(void) {
    /*
         be4f8:	e3a00000 	mov	r0, #0	; 0x0
         be4fc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::ChipSendCommand(unsigned long, unsigned long)
 * Address: 000be500
 */
TFlashAMD::ChipSendCommand(unsigned long, unsigned long) {
    /*
         be500:	e1a0c00d 	mov	ip, sp
         be504:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         be508:	e24cb004 	sub	fp, ip, #4	; 0x4
         be50c:	e1a05000 	mov	r5, r0
         be510:	e1a04001 	mov	r4, r1
         be514:	e5900018 	ldr	r0, [r0, #24]	; fField24
         be518:	e20000ff 	and	r0, r0, #255	; 0xff
         be51c:	e33000a4 	teq	r0, #164	; 0xa4
         be520:	0a000009 	beq	be54c <TFlashAMD::ChipSendCommand(unsigned long, unsigned long)+0x4c>
         be524:	e3c40003 	bic	r0, r4, #3	; 0x3
         be528:	e3a018aa 	mov	r1, #11141120	; 0xaa0000
         be52c:	e28114aa 	add	r1, r1, #-1442840576	; 0xaa000000
         be530:	e5801000 	str	r1, [r0]
         be534:	e3a01855 	mov	r1, #5570560	; 0x550000
         be538:	e2811455 	add	r1, r1, #1426063360	; 0x55000000
         be53c:	e5801000 	str	r1, [r0]
         be540:	e1a01802 	mov	r1, r2, lsl #16
         be544:	e5801000 	str	r1, [r0]
         be548:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         be54c:	e20220ff 	and	r2, r2, #255	; 0xff
         be550:	e1a06002 	mov	r6, r2
         be554:	e1a01004 	mov	r1, r4
         be558:	e1a00005 	mov	r0, r5
         be55c:	eb69fa34 	bl	1b3ce34 <TFlashAMD::$ChipSendCommandByte(unsigned long, unsigned char)>
         be560:	e2841001 	add	r1, r4, #1	; 0x1
         be564:	e1a02006 	mov	r2, r6
         be568:	e1a00005 	mov	r0, r5
         be56c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         be570:	ea69fa2f 	b	1b3ce34 <TFlashAMD::$ChipSendCommandByte(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: TFlashAMD::ChipSendCommandByte(unsigned long, unsigned char)
 * Address: 000be574
 */
TFlashAMD::ChipSendCommandByte(unsigned long, unsigned char) {
    /*
         be574:	e92d4010 	stmdb	sp!, {r4, lr}
         be578:	e20220ff 	and	r2, r2, #255	; 0xff
         be57c:	e5900018 	ldr	r0, [r0, #24]	; fField24
         be580:	e20000ff 	and	r0, r0, #255	; 0xff
         be584:	e3a040aa 	mov	r4, #170	; 0xaa
         be588:	e3a0c055 	mov	ip, #85	; 0x55
         be58c:	e33000a4 	teq	r0, #164	; 0xa4
         be590:	15c14000 	strneb	r4, [r1]
         be594:	15c1c000 	strneb	ip, [r1]
         be598:	1a000010 	bne	be5e0 <TFlashAMD::ChipSendCommandByte(unsigned long, unsigned char)+0x6c>
         be59c:	e3c10cff 	bic	r0, r1, #65280	; 0xff00
         be5a0:	e3c000fe 	bic	r0, r0, #254	; 0xfe
         be5a4:	e3803caa 	orr	r3, r0, #43520	; 0xaa00
         be5a8:	e38330aa 	orr	r3, r3, #170	; 0xaa
         be5ac:	e380eb15 	orr	lr, r0, #21504	; 0x5400
         be5b0:	e38eef55 	orr	lr, lr, #340	; 0x154
         be5b4:	e3320090 	teq	r2, #144	; 0x90
         be5b8:	13a00002 	movne	r0, #2	; 0x2
         be5bc:	03a00003 	moveq	r0, #3	; 0x3
         be5c0:	e0211000 	eor	r1, r1, r0
         be5c4:	e0233000 	eor	r3, r3, r0
         be5c8:	e02e0000 	eor	r0, lr, r0
         be5cc:	e5c34000 	strb	r4, [r3]
         be5d0:	e5c0c000 	strb	ip, [r0]
         be5d4:	e3320030 	teq	r2, #48	; 0x30
         be5d8:	15c32000 	strneb	r2, [r3]
         be5dc:	1a000000 	bne	be5e4 <TFlashAMD::ChipSendCommandByte(unsigned long, unsigned char)+0x70>
         be5e0:	e5c12000 	strb	r2, [r1]
         be5e4:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TFlashAMD::ChipReadID(unsigned long)
 * Address: 000be5e8
 */
TFlashAMD::ChipReadID(unsigned long) {
    /*
         be5e8:	e1a0c00d 	mov	ip, sp
         be5ec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         be5f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         be5f4:	e1a05000 	mov	r5, r0
         be5f8:	e1a04001 	mov	r4, r1
         be5fc:	e3a02090 	mov	r2, #144	; 0x90
         be600:	e2822a09 	add	r2, r2, #36864	; 0x9000
         be604:	eb69fa09 	bl	1b3ce30 <TFlashAMD::$ChipSendCommand(unsigned long, unsigned long)>
         be608:	e2840002 	add	r0, r4, #2	; 0x2
         be60c:	e2200003 	eor	r0, r0, #3	; 0x3
         be610:	e5d00000 	ldrb	r0, [r0]
         be614:	e2241003 	eor	r1, r4, #3	; 0x3
         be618:	e5d11000 	ldrb	r1, [r1]
         be61c:	e0806401 	add	r6, r0, r1, lsl #8
         be620:	e1a01004 	mov	r1, r4
         be624:	e1a00005 	mov	r0, r5
         be628:	e3a020f0 	mov	r2, #240	; 0xf0
         be62c:	e2822a0f 	add	r2, r2, #61440	; 0xf000
         be630:	eb69f9fe 	bl	1b3ce30 <TFlashAMD::$ChipSendCommand(unsigned long, unsigned long)>
         be634:	e1a00006 	mov	r0, r6
         be638:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashAMD::ChipIsReady(unsigned long, unsigned long)
 * Address: 000be63c
 */
TFlashAMD::ChipIsReady(unsigned long, unsigned long) {
    /*
         be63c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         be640:	e3c10003 	bic	r0, r1, #3	; 0x3
         be644:	e5901000 	ldr	r1, [r0]
         be648:	e1a01821 	mov	r1, r1, lsr #16
         be64c:	e58d1008 	str	r1, [sp, #8]
         be650:	e5901000 	ldr	r1, [r0]
         be654:	e1a01821 	mov	r1, r1, lsr #16
         be658:	e58d1004 	str	r1, [sp, #4]
         be65c:	e5900000 	ldr	r0, [r0]
         be660:	e1a00820 	mov	r0, r0, lsr #16
         be664:	e58d0000 	str	r0, [sp]
         be668:	e59d0008 	ldr	r0, [sp, #8]
         be66c:	e0001002 	and	r1, r0, r2
         be670:	e59d0004 	ldr	r0, [sp, #4]
         be674:	e0000002 	and	r0, r0, r2
         be678:	e1310000 	teq	r1, r0
         be67c:	13a00000 	movne	r0, #0	; 0x0
         be680:	03a00001 	moveq	r0, #1	; 0x1
         be684:	e20000ff 	and	r0, r0, #255	; 0xff
         be688:	e28dd00c 	add	sp, sp, #12	; 0xc
         be68c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::ChipWaitReady(unsigned long, unsigned long, unsigned long)
 * Address: 000be690
 */
TFlashAMD::ChipWaitReady(unsigned long, unsigned long, unsigned long) {
    /*
         be690:	e1a0c00d 	mov	ip, sp
         be694:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         be698:	e24cb004 	sub	fp, ip, #4	; 0x4
         be69c:	e1a06000 	mov	r6, r0
         be6a0:	e1a05001 	mov	r5, r1
         be6a4:	e1a07002 	mov	r7, r2
         be6a8:	e1a04003 	mov	r4, r3
         be6ac:	e3a08000 	mov	r8, #0	; 0x0
         be6b0:	e1a02004 	mov	r2, r4
         be6b4:	e1a01005 	mov	r1, r5
         be6b8:	e1a00006 	mov	r0, r6
         be6bc:	eb69f9de 	bl	1b3ce3c <TFlashAMD::$ChipIsReady(unsigned long, unsigned long)>
         be6c0:	e3300000 	teq	r0, #0	; 0x0
         be6c4:	13a00001 	movne	r0, #1	; 0x1
         be6c8:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         be6cc:	e2888001 	add	r8, r8, #1	; 0x1
         be6d0:	e3580004 	cmp	r8, #4	; 0x4
         be6d4:	3afffff5 	bcc	be6b0 <TFlashAMD::ChipWaitReady(unsigned long, unsigned long, unsigned long)+0x20>
         be6d8:	e24dd00c 	sub	sp, sp, #12	; 0xc
         be6dc:	e1a0000d 	mov	r0, sp
         be6e0:	eb6cfdf9 	bl	1bfdecc <TDelayTimer::$__ct(void)>
         be6e4:	e1a01007 	mov	r1, r7
         be6e8:	e1a0000d 	mov	r0, sp
         be6ec:	eb6cfdfb 	bl	1bfdee0 <TDelayTimer::$ResetTimeOut(unsigned long)>
         be6f0:	e1a0000d 	mov	r0, sp
         be6f4:	eb6cfdfb 	bl	1bfdee8 <TDelayTimer::$TimedOut(void)>
         be6f8:	e1a07000 	mov	r7, r0
         be6fc:	e1a02004 	mov	r2, r4
         be700:	e1a01005 	mov	r1, r5
         be704:	e1a00006 	mov	r0, r6
         be708:	eb69f9cb 	bl	1b3ce3c <TFlashAMD::$ChipIsReady(unsigned long, unsigned long)>
         be70c:	e3300000 	teq	r0, #0	; 0x0
         be710:	03370000 	teqeq	r7, #0	; 0x0
         be714:	0afffff5 	beq	be6f0 <TFlashAMD::ChipWaitReady(unsigned long, unsigned long, unsigned long)+0x60>
         be718:	e20000ff 	and	r0, r0, #255	; 0xff
         be71c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashAMD::CheckStatus(unsigned long)
 * Address: 000be720
 */
TFlashAMD::CheckStatus(unsigned long) {
    /*
         be720:	e1a0c00d 	mov	ip, sp
         be724:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         be728:	e24cb004 	sub	fp, ip, #4	; 0x4
         be72c:	e1a04000 	mov	r4, r0
         be730:	e24dd00c 	sub	sp, sp, #12	; 0xc
         be734:	e3a05000 	mov	r5, #0	; 0x0
         be738:	e3c10003 	bic	r0, r1, #3	; 0x3
         be73c:	e5901000 	ldr	r1, [r0]
         be740:	e1a01821 	mov	r1, r1, lsr #16
         be744:	e58d1008 	str	r1, [sp, #8]
         be748:	e5901000 	ldr	r1, [r0]
         be74c:	e1a01821 	mov	r1, r1, lsr #16
         be750:	e58d1004 	str	r1, [sp, #4]
         be754:	e5900000 	ldr	r0, [r0]
         be758:	e1a00820 	mov	r0, r0, lsr #16
         be75c:	e58d0000 	str	r0, [sp]
         be760:	e59d1008 	ldr	r1, [sp, #8]
         be764:	e59d0004 	ldr	r0, [sp, #4]
         be768:	e1310000 	teq	r1, r0
         be76c:	03a05001 	moveq	r5, #1	; 0x1
         be770:	0a000028 	beq	be818 <TFlashAMD::CheckStatus(unsigned long)+0xf8>
         be774:	e3a06000 	mov	r6, #0	; 0x0
         be778:	e1a07006 	mov	r7, r6
         be77c:	e3a00cff 	mov	r0, #65280	; 0xff00
         be780:	e59d1008 	ldr	r1, [sp, #8]
         be784:	e0012000 	and	r2, r1, r0
         be788:	e59d1004 	ldr	r1, [sp, #4]
         be78c:	e0011000 	and	r1, r1, r0
         be790:	e1320001 	teq	r2, r1
         be794:	0a000006 	beq	be7b4 <TFlashAMD::CheckStatus(unsigned long)+0x94>
         be798:	e59d1008 	ldr	r1, [sp, #8]
         be79c:	e0010000 	and	r0, r1, r0
         be7a0:	e1a00420 	mov	r0, r0, lsr #8
         be7a4:	e20010ff 	and	r1, r0, #255	; 0xff
         be7a8:	e1a00004 	mov	r0, r4
         be7ac:	eb69f9a5 	bl	1b3ce48 <TFlashAMD::$CheckMode(unsigned char)>
         be7b0:	e1a07000 	mov	r7, r0
         be7b4:	e3a000ff 	mov	r0, #255	; 0xff
         be7b8:	e59d1008 	ldr	r1, [sp, #8]
         be7bc:	e0012000 	and	r2, r1, r0
         be7c0:	e59d1004 	ldr	r1, [sp, #4]
         be7c4:	e0010000 	and	r0, r1, r0
         be7c8:	e1320000 	teq	r2, r0
         be7cc:	0a000004 	beq	be7e4 <TFlashAMD::CheckStatus(unsigned long)+0xc4>
         be7d0:	e59d0008 	ldr	r0, [sp, #8]
         be7d4:	e20010ff 	and	r1, r0, #255	; 0xff
         be7d8:	e1a00004 	mov	r0, r4
         be7dc:	eb69f999 	bl	1b3ce48 <TFlashAMD::$CheckMode(unsigned char)>
         be7e0:	e1a06000 	mov	r6, r0
         be7e4:	e3570000 	cmp	r7, #0	; 0x0
         be7e8:	b1a05007 	movlt	r5, r7
         be7ec:	ba000009 	blt	be818 <TFlashAMD::CheckStatus(unsigned long)+0xf8>
         be7f0:	e3560000 	cmp	r6, #0	; 0x0
         be7f4:	b1a05006 	movlt	r5, r6
         be7f8:	ba000006 	blt	be818 <TFlashAMD::CheckStatus(unsigned long)+0xf8>
         be7fc:	e3370004 	teq	r7, #4	; 0x4
         be800:	13360004 	teqne	r6, #4	; 0x4
         be804:	03a05004 	moveq	r5, #4	; 0x4
         be808:	0a000002 	beq	be818 <TFlashAMD::CheckStatus(unsigned long)+0xf8>
         be80c:	e3370003 	teq	r7, #3	; 0x3
         be810:	13360003 	teqne	r6, #3	; 0x3
         be814:	03a05003 	moveq	r5, #3	; 0x3
         be818:	e1a00005 	mov	r0, r5
         be81c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashAMD::CheckMode(unsigned char)
 * Address: 000be820
 */
TFlashAMD::CheckMode(unsigned char) {
    /*
         be820:	e20110ff 	and	r1, r1, #255	; 0xff
         be824:	e3a00000 	mov	r0, #0	; 0x0
         be828:	e3110020 	tst	r1, #32	; 0x20
         be82c:	13a00d5b 	movne	r0, #5824	; 0x16c0
         be830:	12400901 	subne	r0, r0, #16384	; 0x4000
         be834:	11a0f00e 	movne	pc, lr
         be838:	e31100a0 	tst	r1, #160	; 0xa0
         be83c:	03a00003 	moveq	r0, #3	; 0x3
         be840:	01a0f00e 	moveq	pc, lr
         be844:	e20110c0 	and	r1, r1, #192	; 0xc0
         be848:	e33100c0 	teq	r1, #192	; 0xc0
         be84c:	03a00004 	moveq	r0, #4	; 0x4
         be850:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::CheckWriteProtected(void)
 * Address: 000be854
 */
TFlashAMD::CheckWriteProtected(void) {
    /*
         be854:	e1a0c00d 	mov	ip, sp
         be858:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         be85c:	e24cb004 	sub	fp, ip, #4	; 0x4
         be860:	e1a04000 	mov	r4, r0
         be864:	e5900010 	ldr	r0, [r0, #16]	; fField16
         be868:	eb6c60a8 	bl	1bd6b10 <TCardSocket::$IsIOInteface(void)>
         be86c:	e3300000 	teq	r0, #0	; 0x0
         be870:	13a00000 	movne	r0, #0	; 0x0
         be874:	1a000001 	bne	be880 <TFlashAMD::CheckWriteProtected(void)+0x2c>
         be878:	e5b40010 	ldr	r0, [r4, #16]!	; fField16
         be87c:	eb6c60ad 	bl	1bd6b38 <TCardSocket::$IsWriteProtected(void)>
         be880:	e20000ff 	and	r0, r0, #255	; 0xff
         be884:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashAMD::FlashSpecific(unsigned long, void *, unsigned long)
 * Address: 000be888
 */
TFlashAMD::FlashSpecific(unsigned long, void *, unsigned long) {
    /*
         be888:	e3310000 	teq	r1, #0	; 0x0
         be88c:	13a00000 	movne	r0, #0	; 0x0
         be890:	11a0f00e 	movne	pc, lr
         be894:	e1a01003 	mov	r1, r3
         be898:	e5802010 	str	r2, [r0, #16]	; fField16
         be89c:	e3e02000 	mvn	r2, #0	; 0x0
         be8a0:	ea69f96b 	b	1b3ce54 <TFlashAMD::$IdentifyCard(TCardPCMCIA *, unsigned long)>
    */
}

/**
 * Symbol: TFlashAMD::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long)
 * Address: 000be8a4
 */
TFlashAMD::ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long) {
    /*
         be8a4:	e3a00000 	mov	r0, #0	; 0x0
         be8a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::IdentifyCard(TCardPCMCIA *, unsigned long)
 * Address: 000be8ac
 */
TFlashAMD::IdentifyCard(TCardPCMCIA *, unsigned long) {
    /*
         be8ac:	e1a0c00d 	mov	ip, sp
         be8b0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         be8b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         be8b8:	e1a04000 	mov	r4, r0
         be8bc:	e3a00000 	mov	r0, #0	; 0x0
         be8c0:	e3a06000 	mov	r6, #0	; 0x0
         be8c4:	e52d0004 	str	r0, [sp, -#4]!
         be8c8:	e1a00001 	mov	r0, r1
         be8cc:	e1a01002 	mov	r1, r2
         be8d0:	e5846018 	str	r6, [r4, #24]	; fField24
         be8d4:	eb6c542b 	bl	1bd3988 <TCardPCMCIA::$GetCardDevice(unsigned long const)>
         be8d8:	e1b05000 	movs	r5, r0
         be8dc:	0a000003 	beq	be8f0 <TFlashAMD::IdentifyCard(TCardPCMCIA *, unsigned long)+0x44>
         be8e0:	e5d50016 	ldrb	r0, [r5, #22]
         be8e4:	e5d51015 	ldrb	r1, [r5, #21]
         be8e8:	e0800401 	add	r0, r0, r1, lsl #8
         be8ec:	e5840018 	str	r0, [r4, #24]	; fField24
         be8f0:	e5940018 	ldr	r0, [r4, #24]	; fField24
         be8f4:	e3300000 	teq	r0, #0	; 0x0
         be8f8:	1a000029 	bne	be9a4 <TFlashAMD::IdentifyCard(TCardPCMCIA *, unsigned long)+0xf8>
         be8fc:	e1a00004 	mov	r0, r4
         be900:	eb69f951 	bl	1b3ce4c <TFlashAMD::$CheckWriteProtected(void)>
         be904:	e3300000 	teq	r0, #0	; 0x0
         be908:	1a000025 	bne	be9a4 <TFlashAMD::IdentifyCard(TCardPCMCIA *, unsigned long)+0xf8>
         be90c:	e3a01000 	mov	r1, #0	; 0x0
         be910:	e5940010 	ldr	r0, [r4, #16]	; fField16
         be914:	eb6c751f 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         be918:	e52d606c 	str	r6, [sp, -#108]!
         be91c:	e28d0008 	add	r0, sp, #8	; 0x8
         be920:	eb6bd013 	bl	1bb2974 <$setjmp>
         be924:	e3300000 	teq	r0, #0	; 0x0
         be928:	1a00000d 	bne	be964 <TFlashAMD::IdentifyCard(TCardPCMCIA *, unsigned long)+0xb8>
         be92c:	e1a0000d 	mov	r0, sp
         be930:	eb6c85d1 	bl	1be007c <$AddExceptionHandler>
         be934:	e5940010 	ldr	r0, [r4, #16]	; fField16
         be938:	eb6c47bc 	bl	1bd0830 <TCardSocket::$CommonMemBaseAddr(void)>
         be93c:	e3350000 	teq	r5, #0	; 0x0
         be940:	15951000 	ldrne	r1, [r5]
         be944:	10800001 	addne	r0, r0, r1
         be948:	e3a010a4 	mov	r1, #164	; 0xa4
         be94c:	e5841018 	str	r1, [r4, #24]	; fField24
         be950:	e1a01000 	mov	r1, r0
         be954:	e1a00004 	mov	r0, r4
         be958:	eb69f936 	bl	1b3ce38 <TFlashAMD::$ChipReadID(unsigned long)>
         be95c:	e5840018 	str	r0, [r4, #24]	; fField24
         be960:	ea000009 	b	be98c <TFlashAMD::IdentifyCard(TCardPCMCIA *, unsigned long)+0xe0>
         be964:	e59d0060 	ldr	r0, [sp, #96]
         be968:	e28f1f1d 	add	r1, pc, #116	; 0x74
         be96c:	eb6c9208 	bl	1be3194 <$Subexception>
         be970:	e3300000 	teq	r0, #0	; 0x0
         be974:	13a000b5 	movne	r0, #181	; 0xb5
         be978:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         be97c:	158d006c 	strne	r0, [sp, #108]
         be980:	1a000001 	bne	be98c <TFlashAMD::IdentifyCard(TCardPCMCIA *, unsigned long)+0xe0>
         be984:	e1a0000d 	mov	r0, sp
         be988:	eb6c8df1 	bl	1be2154 <$NextHandler>
         be98c:	e1a0000d 	mov	r0, sp
         be990:	eb6c89c8 	bl	1be10b8 <$ExitHandler>
         be994:	e28dd06c 	add	sp, sp, #108	; 0x6c
         be998:	e3a0100a 	mov	r1, #10	; 0xa
         be99c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         be9a0:	eb6c74fc 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         be9a4:	e5941018 	ldr	r1, [r4, #24]	; fField24
         be9a8:	e2012cff 	and	r2, r1, #65280	; 0xff00
         be9ac:	e3e00f41 	mvn	r0, #260	; 0x104
         be9b0:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         be9b4:	e3320c01 	teq	r2, #256	; 0x100
         be9b8:	13320b01 	teqne	r2, #1024	; 0x400
         be9bc:	1a000009 	bne	be9e8 <TFlashAMD::IdentifyCard(TCardPCMCIA *, unsigned long)+0x13c>
         be9c0:	e20110ff 	and	r1, r1, #255	; 0xff
         be9c4:	e33100a4 	teq	r1, #164	; 0xa4
         be9c8:	03a00008 	moveq	r0, #8	; 0x8
         be9cc:	0a000002 	beq	be9dc <TFlashAMD::IdentifyCard(TCardPCMCIA *, unsigned long)+0x130>
         be9d0:	e331003d 	teq	r1, #61	; 0x3d
         be9d4:	1a000003 	bne	be9e8 <TFlashAMD::IdentifyCard(TCardPCMCIA *, unsigned long)+0x13c>
         be9d8:	e3a00020 	mov	r0, #32	; 0x20
         be9dc:	e5a40048 	str	r0, [r4, #72]!	; fField72
         be9e0:	ea000001 	b	be9ec <TFlashAMD::IdentifyCard(TCardPCMCIA *, unsigned long)+0x140>
         be9e4:	00000000 	andeq	r0, r0, r0
         be9e8:	e58d0000 	str	r0, [sp]
         be9ec:	e49d0004 	ldr	r0, [sp], #4
         be9f0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashAMD::Copy(unsigned long, unsigned long, unsigned long)
 * Address: 000be9f4
 */
TFlashAMD::Copy(unsigned long, unsigned long, unsigned long) {
    /*
         be9f4:	e59f0000 	ldr	r0, [pc, #0]	; be9fc <TFlashAMD::Copy(unsigned long, unsigned long, unsigned long)+0x8>
         be9f8:	e1a0f00e 	mov	pc, lr
         be9fc:	ffffd8eb 	swinv	0x00ffd8eb
    */
}

/**
 * Symbol: TFlashAMD::IsVirgin(unsigned long, unsigned long)
 * Address: 000bea00
 */
TFlashAMD::IsVirgin(unsigned long, unsigned long) {
    /*
         bea00:	e3a00000 	mov	r0, #0	; 0x0
         bea04:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFlashAMD::Read(unsigned long, unsigned long, char *)
 * Address: 000bea08
 */
TFlashAMD::Read(unsigned long, unsigned long, char *) {
    /*
         bea08:	e1a0c00d 	mov	ip, sp
         bea0c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         bea10:	e24cb004 	sub	fp, ip, #4	; 0x4
         bea14:	e1a04000 	mov	r4, r0
         bea18:	e1a06001 	mov	r6, r1
         bea1c:	e1a05002 	mov	r5, r2
         bea20:	e1a07003 	mov	r7, r3
         bea24:	e3a00000 	mov	r0, #0	; 0x0
         bea28:	e0811002 	add	r1, r1, r2
         bea2c:	e52d0004 	str	r0, [sp, -#4]!
         bea30:	e5940030 	ldr	r0, [r4, #48]	; fField48
         bea34:	e1510000 	cmp	r1, r0
         bea38:	83a000ea 	movhi	r0, #234	; 0xea
         bea3c:	82400b0a 	subhi	r0, r0, #10240	; 0x2800
         bea40:	858d0000 	strhi	r0, [sp]
         bea44:	8a00003f 	bhi	beb48 <TFlashAMD::Read(unsigned long, unsigned long, char *)+0x140>
         bea48:	e1a00004 	mov	r0, r4
         bea4c:	eb69f8ee 	bl	1b3ce0c <TFlashAMD::$EnterFlashOperation(void)>
         bea50:	e3a00000 	mov	r0, #0	; 0x0
         bea54:	e52d006c 	str	r0, [sp, -#108]!
         bea58:	e28d0008 	add	r0, sp, #8	; 0x8
         bea5c:	eb6bcfc4 	bl	1bb2974 <$setjmp>
         bea60:	e3300000 	teq	r0, #0	; 0x0
         bea64:	1a000013 	bne	beab8 <TFlashAMD::Read(unsigned long, unsigned long, char *)+0xb0>
         bea68:	e1a0000d 	mov	r0, sp
         bea6c:	eb6c8582 	bl	1be007c <$AddExceptionHandler>
         bea70:	e5940014 	ldr	r0, [r4, #20]	; fField20
         bea74:	e0806006 	add	r6, r0, r6
         bea78:	e1a01006 	mov	r1, r6
         bea7c:	e1a00004 	mov	r0, r4
         bea80:	e3e02000 	mvn	r2, #0	; 0x0
         bea84:	eb69f8ec 	bl	1b3ce3c <TFlashAMD::$ChipIsReady(unsigned long, unsigned long)>
         bea88:	e3300000 	teq	r0, #0	; 0x0
         bea8c:	03e00036 	mvneq	r0, #54	; 0x36
         bea90:	02400c29 	subeq	r0, r0, #10496	; 0x2900
         bea94:	0a00001e 	beq	beb14 <TFlashAMD::Read(unsigned long, unsigned long, char *)+0x10c>
         bea98:	e3a0100a 	mov	r1, #10	; 0xa
         bea9c:	e5940010 	ldr	r0, [r4, #16]	; fField16
         beaa0:	eb6c74bc 	bl	1bdbd98 <TCardSocket::$SetControl(unsigned long)>
         beaa4:	e1a02005 	mov	r2, r5
         beaa8:	e1a01007 	mov	r1, r7
         beaac:	e1a00006 	mov	r0, r6
         beab0:	eb6c8127 	bl	1bdef54 <$BlockMove>
         beab4:	ea00001e 	b	beb34 <TFlashAMD::Read(unsigned long, unsigned long, char *)+0x12c>
         beab8:	e59d0060 	ldr	r0, [sp, #96]
         beabc:	e59f1058 	ldr	r1, [pc, #58]	; beb1c <TFlashAMD::Read(unsigned long, unsigned long, char *)+0x114>
         beac0:	e5911000 	ldr	r1, [r1]
         beac4:	eb6c91b2 	bl	1be3194 <$Subexception>
         beac8:	e3300000 	teq	r0, #0	; 0x0
         beacc:	13a000b4 	movne	r0, #180	; 0xb4
         bead0:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         bead4:	1a00000e 	bne	beb14 <TFlashAMD::Read(unsigned long, unsigned long, char *)+0x10c>
         bead8:	e59d0060 	ldr	r0, [sp, #96]
         beadc:	e59f103c 	ldr	r1, [pc, #3c]	; beb20 <TFlashAMD::Read(unsigned long, unsigned long, char *)+0x118>
         beae0:	e5911000 	ldr	r1, [r1]
         beae4:	eb6c91aa 	bl	1be3194 <$Subexception>
         beae8:	e3300000 	teq	r0, #0	; 0x0
         beaec:	13a000b5 	movne	r0, #181	; 0xb5
         beaf0:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         beaf4:	1a000006 	bne	beb14 <TFlashAMD::Read(unsigned long, unsigned long, char *)+0x10c>
         beaf8:	e59d0060 	ldr	r0, [sp, #96]
         beafc:	e59f1020 	ldr	r1, [pc, #20]	; beb24 <TFlashAMD::Read(unsigned long, unsigned long, char *)+0x11c>	; fField20
         beb00:	e5911000 	ldr	r1, [r1]
         beb04:	eb6c91a2 	bl	1be3194 <$Subexception>
         beb08:	e3300000 	teq	r0, #0	; 0x0
         beb0c:	0a000006 	beq	beb2c <TFlashAMD::Read(unsigned long, unsigned long, char *)+0x124>
         beb10:	e59f0010 	ldr	r0, [pc, #10]	; beb28 <TFlashAMD::Read(unsigned long, unsigned long, char *)+0x120>
         beb14:	e58d006c 	str	r0, [sp, #108]
         beb18:	ea000005 	b	beb34 <TFlashAMD::Read(unsigned long, unsigned long, char *)+0x12c>
         beb1c:	003712c4 	eoreqs	r1, r7, r4, asr #5
         beb20:	003712b8 	ldreqh	r1, [r7], -r8
         beb24:	003712c8 	eoreqs	r1, r7, r8, asr #5
         beb28:	ffffd8af 	swinv	0x00ffd8af
         beb2c:	e1a0000d 	mov	r0, sp
         beb30:	eb6c8d87 	bl	1be2154 <$NextHandler>
         beb34:	e1a0000d 	mov	r0, sp
         beb38:	eb6c895e 	bl	1be10b8 <$ExitHandler>
         beb3c:	e28dd06c 	add	sp, sp, #108	; 0x6c
         beb40:	e1a00004 	mov	r0, r4
         beb44:	eb69f8b1 	bl	1b3ce10 <TFlashAMD::$ExitFlashOperation(void)>
         beb48:	e49d0004 	ldr	r0, [sp], #4
         beb4c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashAMD::Write(unsigned long, unsigned long, char *)
 * Address: 000beb50
 */
TFlashAMD::Write(unsigned long, unsigned long, char *) {
    /*
         beb50:	e1a0c00d 	mov	ip, sp
         beb54:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         beb58:	e24cb004 	sub	fp, ip, #4	; 0x4
         beb5c:	e1a04000 	mov	r4, r0
         beb60:	e1a07001 	mov	r7, r1
         beb64:	e1a05002 	mov	r5, r2
         beb68:	e1a06003 	mov	r6, r3
         beb6c:	e3a00000 	mov	r0, #0	; 0x0
         beb70:	e52d0004 	str	r0, [sp, -#4]!
         beb74:	e0810002 	add	r0, r1, r2
         beb78:	e5941030 	ldr	r1, [r4, #48]	; fField48
         beb7c:	e1500001 	cmp	r0, r1
         beb80:	83a000ea 	movhi	r0, #234	; 0xea
         beb84:	82400b0a 	subhi	r0, r0, #10240	; 0x2800
         beb88:	858d0000 	strhi	r0, [sp]
         beb8c:	8a000063 	bhi	bed20 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x1d0>
         beb90:	e1a00004 	mov	r0, r4
         beb94:	eb69f8ac 	bl	1b3ce4c <TFlashAMD::$CheckWriteProtected(void)>
         beb98:	e59f90f4 	ldr	r9, [pc, #f4]	; bec94 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x144>
         beb9c:	e3300000 	teq	r0, #0	; 0x0
         beba0:	158d9000 	strne	r9, [sp]
         beba4:	1a00005d 	bne	bed20 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x1d0>
         beba8:	e1a00004 	mov	r0, r4
         bebac:	eb69f896 	bl	1b3ce0c <TFlashAMD::$EnterFlashOperation(void)>
         bebb0:	e3a08000 	mov	r8, #0	; 0x0
         bebb4:	e52d806c 	str	r8, [sp, -#108]!
         bebb8:	e28d0008 	add	r0, sp, #8	; 0x8
         bebbc:	eb6bcf6c 	bl	1bb2974 <$setjmp>
         bebc0:	e3300000 	teq	r0, #0	; 0x0
         bebc4:	1a000033 	bne	bec98 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x148>
         bebc8:	e1a0000d 	mov	r0, sp
         bebcc:	eb6c852a 	bl	1be007c <$AddExceptionHandler>
         bebd0:	e5940014 	ldr	r0, [r4, #20]	; fField20
         bebd4:	e0807007 	add	r7, r0, r7
         bebd8:	e1a01007 	mov	r1, r7
         bebdc:	e1a00004 	mov	r0, r4
         bebe0:	e3e02000 	mvn	r2, #0	; 0x0
         bebe4:	eb69f894 	bl	1b3ce3c <TFlashAMD::$ChipIsReady(unsigned long, unsigned long)>
         bebe8:	e3300000 	teq	r0, #0	; 0x0
         bebec:	03e00036 	mvneq	r0, #54	; 0x36
         bebf0:	02400c29 	subeq	r0, r0, #10496	; 0x2900
         bebf4:	0a000037 	beq	becd8 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x188>
         bebf8:	e584803c 	str	r8, [r4, #60]	; fField60
         bebfc:	e2178001 	ands	r8, r7, #1	; 0x1
         bec00:	0a00000a 	beq	bec30 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0xe0>
         bec04:	e3350002 	teq	r5, #2	; 0x2
         bec08:	03a08002 	moveq	r8, #2	; 0x2
         bec0c:	e1a03006 	mov	r3, r6
         bec10:	e1a02008 	mov	r2, r8
         bec14:	e1a01007 	mov	r1, r7
         bec18:	e1a00004 	mov	r0, r4
         bec1c:	eb69f472 	bl	1b3bdec <TFlashAMD::$DoWrite(unsigned long, unsigned long, char *)>
         bec20:	e0877008 	add	r7, r7, r8
         bec24:	e0866008 	add	r6, r6, r8
         bec28:	e0455008 	sub	r5, r5, r8
         bec2c:	e58d006c 	str	r0, [sp, #108]
         bec30:	e3d58001 	bics	r8, r5, #1	; 0x1
         bec34:	0a00000b 	beq	bec68 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x118>
         bec38:	e59d006c 	ldr	r0, [sp, #108]
         bec3c:	e3300000 	teq	r0, #0	; 0x0
         bec40:	1a000008 	bne	bec68 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x118>
         bec44:	e1a03006 	mov	r3, r6
         bec48:	e1a02008 	mov	r2, r8
         bec4c:	e1a01007 	mov	r1, r7
         bec50:	e1a00004 	mov	r0, r4
         bec54:	eb69f464 	bl	1b3bdec <TFlashAMD::$DoWrite(unsigned long, unsigned long, char *)>
         bec58:	e0877008 	add	r7, r7, r8
         bec5c:	e0866008 	add	r6, r6, r8
         bec60:	e0455008 	sub	r5, r5, r8
         bec64:	e58d006c 	str	r0, [sp, #108]
         bec68:	e3350000 	teq	r5, #0	; 0x0
         bec6c:	0a000026 	beq	bed0c <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x1bc>
         bec70:	e59d006c 	ldr	r0, [sp, #108]
         bec74:	e3300000 	teq	r0, #0	; 0x0
         bec78:	1a000023 	bne	bed0c <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x1bc>
         bec7c:	e1a03006 	mov	r3, r6
         bec80:	e1a02005 	mov	r2, r5
         bec84:	e1a01007 	mov	r1, r7
         bec88:	e1a00004 	mov	r0, r4
         bec8c:	eb69f456 	bl	1b3bdec <TFlashAMD::$DoWrite(unsigned long, unsigned long, char *)>
         bec90:	ea000010 	b	becd8 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x188>
         bec94:	ffffd8af 	swinv	0x00ffd8af
         bec98:	e59d0060 	ldr	r0, [sp, #96]
         bec9c:	e59f103c 	ldr	r1, [pc, #3c]	; bece0 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x190>
         beca0:	e5911000 	ldr	r1, [r1]
         beca4:	eb6c913a 	bl	1be3194 <$Subexception>
         beca8:	e3300000 	teq	r0, #0	; 0x0
         becac:	13a000b4 	movne	r0, #180	; 0xb4
         becb0:	12400b0a 	subne	r0, r0, #10240	; 0x2800
         becb4:	1a000007 	bne	becd8 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x188>
         becb8:	e59d0060 	ldr	r0, [sp, #96]
         becbc:	e59f1020 	ldr	r1, [pc, #20]	; bece4 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x194>	; fField20
         becc0:	e5911000 	ldr	r1, [r1]
         becc4:	eb6c9132 	bl	1be3194 <$Subexception>
         becc8:	e3300000 	teq	r0, #0	; 0x0
         beccc:	0a000005 	beq	bece8 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x198>
         becd0:	e3a000b5 	mov	r0, #181	; 0xb5
         becd4:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         becd8:	e58d006c 	str	r0, [sp, #108]
         becdc:	ea00000a 	b	bed0c <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x1bc>
         bece0:	003712c4 	eoreqs	r1, r7, r4, asr #5
         bece4:	003712b8 	ldreqh	r1, [r7], -r8
         bece8:	e59d0060 	ldr	r0, [sp, #96]
         becec:	e59f1034 	ldr	r1, [pc, #34]	; bed28 <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x1d8>
         becf0:	e5911000 	ldr	r1, [r1]
         becf4:	eb6c9126 	bl	1be3194 <$Subexception>
         becf8:	e3300000 	teq	r0, #0	; 0x0
         becfc:	158d906c 	strne	r9, [sp, #108]
         bed00:	1a000001 	bne	bed0c <TFlashAMD::Write(unsigned long, unsigned long, char *)+0x1bc>
         bed04:	e1a0000d 	mov	r0, sp
         bed08:	eb6c8d11 	bl	1be2154 <$NextHandler>
         bed0c:	e1a0000d 	mov	r0, sp
         bed10:	eb6c88e8 	bl	1be10b8 <$ExitHandler>
         bed14:	e28dd06c 	add	sp, sp, #108	; 0x6c
         bed18:	e1a00004 	mov	r0, r4
         bed1c:	eb69f83b 	bl	1b3ce10 <TFlashAMD::$ExitFlashOperation(void)>
         bed20:	e49d0004 	ldr	r0, [sp], #4
         bed24:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         bed28:	003712c8 	eoreqs	r1, r7, r8, asr #5
    */
}

/**
 * Symbol: TFlashAMD::DoWrite(unsigned long, unsigned long, char *)
 * Address: 000bed2c
 */
TFlashAMD::DoWrite(unsigned long, unsigned long, char *) {
    /*
         bed2c:	e1a0c00d 	mov	ip, sp
         bed30:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         bed34:	e24cb004 	sub	fp, ip, #4	; 0x4
         bed38:	e1a05000 	mov	r5, r0
         bed3c:	e1a04001 	mov	r4, r1
         bed40:	e1a06002 	mov	r6, r2
         bed44:	e1a07003 	mov	r7, r3
         bed48:	e24dd008 	sub	sp, sp, #8	; 0x8
         bed4c:	e3a09000 	mov	r9, #0	; 0x0
         bed50:	e3120001 	tst	r2, #1	; 0x1
         bed54:	02040001 	andeq	r0, r4, #1	; 0x1
         bed58:	03300000 	teqeq	r0, #0	; 0x0
         bed5c:	13a00000 	movne	r0, #0	; 0x0
         bed60:	03a00001 	moveq	r0, #1	; 0x1
         bed64:	e3a0a000 	mov	sl, #0	; 0x0
         bed68:	e3560000 	cmp	r6, #0	; 0x0
         bed6c:	e58d0000 	str	r0, [sp]
         bed70:	9a000040 	bls	bee78 <TFlashAMD::DoWrite(unsigned long, unsigned long, char *)+0x14c>
         bed74:	e59d0000 	ldr	r0, [sp]
         bed78:	e2800001 	add	r0, r0, #1	; 0x1
         bed7c:	e58d0004 	str	r0, [sp, #4]
         bed80:	e59d0000 	ldr	r0, [sp]
         bed84:	e3300000 	teq	r0, #0	; 0x0
         bed88:	0a00000c 	beq	bedc0 <TFlashAMD::DoWrite(unsigned long, unsigned long, char *)+0x94>
         bed8c:	e4d70001 	ldrb	r0, [r7], #1
         bed90:	e4d71001 	ldrb	r1, [r7], #1
         bed94:	e0818400 	add	r8, r1, r0, lsl #8
         bed98:	e1a01004 	mov	r1, r4
         bed9c:	e1a00005 	mov	r0, r5
         beda0:	e3a020a0 	mov	r2, #160	; 0xa0
         beda4:	e2822a0a 	add	r2, r2, #40960	; 0xa000
         beda8:	eb69f820 	bl	1b3ce30 <TFlashAMD::$ChipSendCommand(unsigned long, unsigned long)>
         bedac:	e1a02008 	mov	r2, r8
         bedb0:	e1a01004 	mov	r1, r4
         bedb4:	e5950010 	ldr	r0, [r5, #16]	; fField16
         bedb8:	eb6d3e55 	bl	1c0e714 <TCardSocket::$Do16BitWrite(unsigned long, unsigned long)>
         bedbc:	ea000005 	b	bedd8 <TFlashAMD::DoWrite(unsigned long, unsigned long, char *)+0xac>
         bedc0:	e4d78001 	ldrb	r8, [r7], #1
         bedc4:	e1a01004 	mov	r1, r4
         bedc8:	e1a00005 	mov	r0, r5
         bedcc:	e3a020a0 	mov	r2, #160	; 0xa0
         bedd0:	eb69f817 	bl	1b3ce34 <TFlashAMD::$ChipSendCommandByte(unsigned long, unsigned char)>
         bedd4:	e5c48000 	strb	r8, [r4]
         bedd8:	e1a01004 	mov	r1, r4
         beddc:	e1a00005 	mov	r0, r5
         bede0:	e3e03000 	mvn	r3, #0	; 0x0
         bede4:	e3a02080 	mov	r2, #128	; 0x80
         bede8:	eb69f814 	bl	1b3ce40 <TFlashAMD::$ChipWaitReady(unsigned long, unsigned long, unsigned long)>
         bedec:	e3300000 	teq	r0, #0	; 0x0
         bedf0:	1a000003 	bne	bee04 <TFlashAMD::DoWrite(unsigned long, unsigned long, char *)+0xd8>
         bedf4:	e1a01004 	mov	r1, r4
         bedf8:	e1a00005 	mov	r0, r5
         bedfc:	eb69f810 	bl	1b3ce44 <TFlashAMD::$CheckStatus(unsigned long)>
         bee00:	e1a0a000 	mov	sl, r0
         bee04:	e35a0000 	cmp	sl, #0	; 0x0
         bee08:	b1a0900a 	movlt	r9, sl
         bee0c:	ba000011 	blt	bee58 <TFlashAMD::DoWrite(unsigned long, unsigned long, char *)+0x12c>
         bee10:	e59d0000 	ldr	r0, [sp]
         bee14:	e3300000 	teq	r0, #0	; 0x0
         bee18:	0a000005 	beq	bee34 <TFlashAMD::DoWrite(unsigned long, unsigned long, char *)+0x108>
         bee1c:	e1a01004 	mov	r1, r4
         bee20:	e5950010 	ldr	r0, [r5, #16]	; fField16
         bee24:	eb6d3e3b 	bl	1c0e718 <TCardSocket::$Do16BitRead(unsigned long)>
         bee28:	e1380000 	teq	r8, r0
         bee2c:	0a000005 	beq	bee48 <TFlashAMD::DoWrite(unsigned long, unsigned long, char *)+0x11c>
         bee30:	ea000002 	b	bee40 <TFlashAMD::DoWrite(unsigned long, unsigned long, char *)+0x114>
         bee34:	e5d40000 	ldrb	r0, [r4]
         bee38:	e1380000 	teq	r8, r0
         bee3c:	0a000001 	beq	bee48 <TFlashAMD::DoWrite(unsigned long, unsigned long, char *)+0x11c>
         bee40:	e3a00001 	mov	r0, #1	; 0x1
         bee44:	ea000000 	b	bee4c <TFlashAMD::DoWrite(unsigned long, unsigned long, char *)+0x120>
         bee48:	e3a00000 	mov	r0, #0	; 0x0
         bee4c:	e3300000 	teq	r0, #0	; 0x0
         bee50:	13e0903b 	mvnne	r9, #59	; 0x3b
         bee54:	12499c29 	subne	r9, r9, #10496	; 0x2900
         bee58:	e3390000 	teq	r9, #0	; 0x0
         bee5c:	15a5403c 	strne	r4, [r5, #60]!	; fField60
         bee60:	1a000004 	bne	bee78 <TFlashAMD::DoWrite(unsigned long, unsigned long, char *)+0x14c>
         bee64:	e59d0004 	ldr	r0, [sp, #4]
         bee68:	e0804004 	add	r4, r0, r4
         bee6c:	e0466000 	sub	r6, r6, r0
         bee70:	e3560000 	cmp	r6, #0	; 0x0
         bee74:	8affffc1 	bhi	bed80 <TFlashAMD::DoWrite(unsigned long, unsigned long, char *)+0x54>
         bee78:	e1a00009 	mov	r0, r9
         bee7c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFlashAMD::Erase(unsigned long)
 * Address: 000bee80
 */
TFlashAMD::Erase(unsigned long) {
    /*
         bee80:	e3a02000 	mov	r2, #0	; 0x0
         bee84:	ea69f3db 	b	1b3bdf8 <TFlashAMD::$DoErase(unsigned long, unsigned char)>
    */
}

/**
 * Symbol: ClassInfo__9TFlashAMDSFv
 * Address: 00386930
 */
void TFlashAMD::ClassInfo() {
    /*
        386930:	e24f0044 	sub	r0, pc, #68	; 0x44
        386934:	e1a0f00e 	mov	pc, lr
        386938:	e3a00000 	mov	r0, #0	; 0x0
        38693c:	e1a0f00e 	mov	pc, lr
        386940:	54466c61 	strplb	r6, [r6], -#3169
        386944:	7368414d 	cmnvc	r8, #1073741843	; 0x40000013
        386948:	44005446 	strmi	r5, [r0], -#1094	; fField1094
        38694c:	6c617368 	stcvsl	3, cr7, [r1], -#416
        386958:	eafffff4 	b	386930 <ClassInfo__9TFlashAMDSFv>
        38695c:	ea5ed51c 	b	1b3bdd4 <TFlashAMD::$New(void)>
        386960:	ea5ed51c 	b	1b3bdd8 <TFlashAMD::$Delete(void)>
        386964:	ea5ed51e 	b	1b3bde4 <TFlashAMD::$Read(unsigned long, unsigned long, char *)>
        386968:	ea5ed51e 	b	1b3bde8 <TFlashAMD::$Write(unsigned long, unsigned long, char *)>
        38696c:	ea5ed51f 	b	1b3bdf0 <TFlashAMD::$Erase(unsigned long)>
        386970:	ea5ed521 	b	1b3bdfc <TFlashAMD::$SuspendErase(unsigned long, unsigned long, unsigned long)>
        386974:	ea5ed51e 	b	1b3bdf4 <TFlashAMD::$ResumeErase(unsigned long)>
        386978:	eaf4ddd7 	b	be0dc <TFlashAMD::DeepSleep(unsigned long)>
        38697c:	eaf4ddd8 	b	be0e4 <TFlashAMD::Wakeup(unsigned long)>
        386980:	ea5ed91e 	b	1b3ce00 <TFlashAMD::$Status(unsigned long)>
        386984:	ea5ed91f 	b	1b3ce08 <TFlashAMD::$ResetCard(void)>
        386988:	eaf4de42 	b	be298 <TFlashAMD::AcknowledgeReset(void)>
        38698c:	eaf4de46 	b	be2ac <TFlashAMD::GetPhysResource(void)>
        386990:	eaf4de44 	b	be2a8 <TFlashAMD::RegisterClientInfo(unsigned long)>
        386994:	ea5ed91a 	b	1b3ce04 <TFlashAMD::$GetWriteProtected(unsigned char *)>
        386998:	eaf4de4d 	b	be2d4 <TFlashAMD::GetWriteErrorAddress(void)>
        38699c:	eaf4de48 	b	be2c4 <TFlashAMD::GetAttributes(void)>
        3869a0:	ea5ed91c 	b	1b3ce18 <TFlashAMD::$GetDataOffset(void)>
        3869a4:	ea5ed91c 	b	1b3ce1c <TFlashAMD::$GetTotalSize(void)>
        3869a8:	ea5ed91c 	b	1b3ce20 <TFlashAMD::$GetGroupSize(void)>
        3869ac:	ea5ed91c 	b	1b3ce24 <TFlashAMD::$GetEraseRegionSize(void)>
        3869b0:	ea5ed91c 	b	1b3ce28 <TFlashAMD::$GetChipsPerGroup(void)>
        3869b4:	ea5ed91c 	b	1b3ce2c <TFlashAMD::$GetBlocksPerPartition(void)>
        3869b8:	eaf4deb0 	b	be480 <TFlashAMD::GetMaxConcurrentVppOps(void)>
        3869bc:	eaf4deb1 	b	be488 <TFlashAMD::GetEraseRegionCurrent(void)>
        3869c0:	eaf4deb2 	b	be490 <TFlashAMD::GetWriteRegionCurrent(void)>
        3869c4:	eaf4deb3 	b	be498 <TFlashAMD::GetEraseRegionTime(void)>
        3869c8:	eaf4deba 	b	be4b8 <TFlashAMD::GetWriteAccessTime(void)>
        3869cc:	eaf4debf 	b	be4d0 <TFlashAMD::GetReadAccessTime(void)>
        3869d0:	ea5ed90f 	b	1b3ce14 <TFlashAMD::$GetVendorInfo(void)>
        3869d4:	eaf4de36 	b	be2b4 <TFlashAMD::GetSocketNumber(void)>
        3869d8:	eaf4dec6 	b	be4f8 <TFlashAMD::VppStatus(void)>
        3869dc:	eaf4debd 	b	be4d8 <TFlashAMD::VppRisingTime(void)>
        3869e0:	ea5ed91a 	b	1b3ce50 <TFlashAMD::$FlashSpecific(unsigned long, void *, unsigned long)>
        3869e4:	ea5ed4fc 	b	1b3bddc <TFlashAMD::$Initialize(TCardSocket *, TCardPCMCIA *, unsigned long, unsigned long)>
        3869e8:	eaf4dec0 	b	be4f0 <TFlashAMD::SuspendService(void)>
        3869ec:	ea5ed4fb 	b	1b3bde0 <TFlashAMD::$ResumeService(TCardSocket *, TCardPCMCIA *, unsigned long)>
        3869f0:	eaf4dfff 	b	be9f4 <TFlashAMD::Copy(unsigned long, unsigned long, unsigned long)>
        3869f4:	eaf4e001 	b	bea00 <TFlashAMD::IsVirgin(unsigned long, unsigned long)>
        3869f8:	e1a0000f 	mov	r0, pc
        3869fc:	e1a0f00e 	mov	pc, lr
        386a00:	5453746f 	ldrplb	r7, [r3], -#1135
        386a04:	72650000 	rsbvc	r0, r5, #0	; 0x0
    */
}

