#include "include/TFramedAsyncSerTool.h"

/**
 * Symbol: TFramedAsyncSerTool::__ct(unsigned long)
 * Address: 000d2ecc
 */
TFramedAsyncSerTool::TFramedAsyncSerTool(unsigned long) {
    /*
         d2ecc:	e1a0c00d 	mov	ip, sp
         d2ed0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         d2ed4:	e24cb004 	sub	fp, ip, #4	; 0x4
         d2ed8:	e1b04000 	movs	r4, r0
         d2edc:	e1a05001 	mov	r5, r1
         d2ee0:	1a000004 	bne	d2ef8 <TFramedAsyncSerTool::__ct(unsigned long)+0x2c>
         d2ee4:	e3a00f53 	mov	r0, #332	; 0x14c
         d2ee8:	e2800b01 	add	r0, r0, #1024	; 0x400
         d2eec:	eb6bee11 	bl	1bce738 <$__nw(unsigned int)>
         d2ef0:	e1b04000 	movs	r4, r0
         d2ef4:	0a000016 	beq	d2f54 <TFramedAsyncSerTool::__ct(unsigned long)+0x88>
         d2ef8:	e1a01005 	mov	r1, r5
         d2efc:	e1a00004 	mov	r0, r4
         d2f00:	eb64d973 	bl	1a094d4 <TAsyncSerTool::$__ct(unsigned long)>
         d2f04:	e28400bc 	add	r0, r4, #188	; 0xbc
         d2f08:	e2800b01 	add	r0, r0, #1024	; 0x400
         d2f0c:	ebfddb6f 	bl	49cd0 <TCRC16::Reset(void)>
         d2f10:	e28400c4 	add	r0, r4, #196	; 0xc4
         d2f14:	e2800b01 	add	r0, r0, #1024	; 0x400
         d2f18:	ebfddb6c 	bl	49cd0 <TCRC16::Reset(void)>
         d2f1c:	e28400d4 	add	r0, r4, #212	; 0xd4
         d2f20:	e2800b01 	add	r0, r0, #1024	; 0x400
         d2f24:	eb6cd554 	bl	1c0847c <TCircleBuf::$__ct(void)>
         d2f28:	e28400fc 	add	r0, r4, #252	; 0xfc
         d2f2c:	e2800b01 	add	r0, r0, #1024	; 0x400
         d2f30:	eb6cd551 	bl	1c0847c <TCircleBuf::$__ct(void)>
         d2f34:	e2840f4a 	add	r0, r4, #296	; 0x128
         d2f38:	e2800b01 	add	r0, r0, #1024	; 0x400
         d2f3c:	eb6ba3a3 	bl	1bbbdd0 <TCMOFramingParms::$__ct(void)>
         d2f40:	e2840f4f 	add	r0, r4, #316	; 0x13c
         d2f44:	e2800b01 	add	r0, r0, #1024	; 0x400
         d2f48:	eb6ba7b2 	bl	1bbce18 <TCMOFramedAsyncStats::$__ct(void)>
         d2f4c:	e59f0008 	ldr	r0, [pc, #8]	; d2f5c <TFramedAsyncSerTool::__ct(unsigned long)+0x90>
         d2f50:	e5840000 	str	r0, [r4]
         d2f54:	e1a00004 	mov	r0, r4
         d2f58:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         d2f5c:	0001ec5c 	andeq	lr, r1, ip, asr ip
    */
}

/**
 * Symbol: TFramedAsyncSerTool::__dt(void)
 * Address: 000d2f60
 */
TFramedAsyncSerTool::~TFramedAsyncSerTool(void) {
    /*
         d2f60:	e1a0c00d 	mov	ip, sp
         d2f64:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         d2f68:	e24cb004 	sub	fp, ip, #4	; 0x4
         d2f6c:	e1a04000 	mov	r4, r0
         d2f70:	e1a05001 	mov	r5, r1
         d2f74:	e59f0040 	ldr	r0, [pc, #40]	; d2fbc <TFramedAsyncSerTool::__dt(void)+0x5c>
         d2f78:	e5840000 	str	r0, [r4]
         d2f7c:	e28400fc 	add	r0, r4, #252	; 0xfc
         d2f80:	e2800b01 	add	r0, r0, #1024	; 0x400
         d2f84:	e3a01000 	mov	r1, #0	; 0x0
         d2f88:	eb6cd93c 	bl	1c09480 <TCircleBuf::$__dt(void)>
         d2f8c:	e28400d4 	add	r0, r4, #212	; 0xd4
         d2f90:	e2800b01 	add	r0, r0, #1024	; 0x400
         d2f94:	e3a01000 	mov	r1, #0	; 0x0
         d2f98:	eb6cd938 	bl	1c09480 <TCircleBuf::$__dt(void)>
         d2f9c:	e1a00004 	mov	r0, r4
         d2fa0:	e3a01000 	mov	r1, #0	; 0x0
         d2fa4:	eb64dd59 	bl	1a0a510 <TAsyncSerTool::$__dt(void)>
         d2fa8:	e3150001 	tst	r5, #1	; 0x1
         d2fac:	11a00004 	movne	r0, r4
         d2fb0:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         d2fb4:	1a6be9c9 	bne	1bcd6e0 <$__dl(void *)>
         d2fb8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         d2fbc:	0001ec5c 	andeq	lr, r1, ip, asr ip
    */
}

/**
 * Symbol: TFramedAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 000d2fc0
 */
TFramedAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         d2fc0:	e1a0c00d 	mov	ip, sp
         d2fc4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         d2fc8:	e24cb004 	sub	fp, ip, #4	; 0x4
         d2fcc:	e1a05000 	mov	r5, r0
         d2fd0:	e1a04001 	mov	r4, r1
         d2fd4:	e3a06000 	mov	r6, #0	; 0x0
         d2fd8:	e59fc054 	ldr	ip, [pc, #54]	; d3034 <TFramedAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x74>
         d2fdc:	e132000c 	teq	r2, ip
         d2fe0:	0a000015 	beq	d303c <TFramedAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x7c>
         d2fe4:	e59fc04c 	ldr	ip, [pc, #4c]	; d3038 <TFramedAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x78>
         d2fe8:	e132000c 	teq	r2, ip
         d2fec:	11a01004 	movne	r1, r4
         d2ff0:	11a00005 	movne	r0, r5
         d2ff4:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         d2ff8:	1a653414 	bne	1a20050 <TAsyncSerTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
         d2ffc:	e3330c01 	teq	r3, #256	; 0x100
         d3000:	13330c02 	teqne	r3, #512	; 0x200
         d3004:	03e06002 	mvneq	r6, #2	; 0x2
         d3008:	0a00001e 	beq	d3088 <TFramedAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xc8>
         d300c:	e3330b01 	teq	r3, #1024	; 0x400
         d3010:	13e06000 	mvnne	r6, #0	; 0x0
         d3014:	1a00001b 	bne	d3088 <TFramedAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xc8>
         d3018:	e2851f4f 	add	r1, r5, #316	; 0x13c
         d301c:	e2811b01 	add	r1, r1, #1024	; 0x400
         d3020:	e1a00004 	mov	r0, r4
         d3024:	eb6b92e9 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         d3028:	e1a00005 	mov	r0, r5
         d302c:	eb6516fb 	bl	1a18c20 <TFramedAsyncSerTool::$ResetFramingStats(void)>
         d3030:	ea000014 	b	d3088 <TFramedAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xc8>
         d3034:	6672616d 	ldrvsbt	r6, [r2], -sp, ror #2
         d3038:	66727374 	undefined
         d303c:	e2850f4a 	add	r0, r5, #296	; 0x128
         d3040:	e2800b01 	add	r0, r0, #1024	; 0x400
         d3044:	e3330c01 	teq	r3, #256	; 0x100
         d3048:	13330c02 	teqne	r3, #512	; 0x200
         d304c:	01a01004 	moveq	r1, r4
         d3050:	0a00000b 	beq	d3084 <TFramedAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xc4>
         d3054:	e3330c03 	teq	r3, #768	; 0x300
         d3058:	1a000007 	bne	d307c <TFramedAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xbc>
         d305c:	e24dd014 	sub	sp, sp, #20	; 0x14
         d3060:	e1a0000d 	mov	r0, sp
         d3064:	eb6ba359 	bl	1bbbdd0 <TCMOFramingParms::$__ct(void)>
         d3068:	e1a0100d 	mov	r1, sp
         d306c:	e1a00004 	mov	r0, r4
         d3070:	eb6b92d6 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         d3074:	e28dd014 	add	sp, sp, #20	; 0x14
         d3078:	ea000002 	b	d3088 <TFramedAsyncSerTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xc8>
         d307c:	e1a01000 	mov	r1, r0
         d3080:	e1a00004 	mov	r0, r4
         d3084:	eb6b92d1 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         d3088:	e1a00006 	mov	r0, r6
         d308c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFramedAsyncSerTool::FillOutputBuffer(void)
 * Address: 000d3090
 */
TFramedAsyncSerTool::FillOutputBuffer(void) {
    /*
         d3090:	e1a0c00d 	mov	ip, sp
         d3094:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         d3098:	e24cb004 	sub	fp, ip, #4	; 0x4
         d309c:	e1a04000 	mov	r4, r0
         d30a0:	e24dd004 	sub	sp, sp, #4	; 0x4
         d30a4:	e5d00279 	ldrb	r0, [r0, #633]
         d30a8:	e3300000 	teq	r0, #0	; 0x0
         d30ac:	1a000002 	bne	d30bc <TFramedAsyncSerTool::FillOutputBuffer(void)+0x2c>
         d30b0:	e1a00004 	mov	r0, r4
         d30b4:	eb64f5de 	bl	1a10834 <TAsyncSerTool::$FillOutputBuffer(void)>
         d30b8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         d30bc:	e24dd004 	sub	sp, sp, #4	; 0x4
         d30c0:	e3a06000 	mov	r6, #0	; 0x0
         d30c4:	e3a0a001 	mov	sl, #1	; 0x1
         d30c8:	e3a05000 	mov	r5, #0	; 0x0
         d30cc:	e28490d4 	add	r9, r4, #212	; 0xd4
         d30d0:	e2899b01 	add	r9, r9, #1024	; 0x400
         d30d4:	e2842f9d 	add	r2, r4, #628	; 0x274
         d30d8:	e28480c4 	add	r8, r4, #196	; 0xc4
         d30dc:	e2888b01 	add	r8, r8, #1024	; 0x400
         d30e0:	e2847fe1 	add	r7, r4, #900	; 0x384
         d30e4:	e58d2004 	str	r2, [sp, #4]
         d30e8:	e59404b4 	ldr	r0, [r4, #1204]	; fField1204
         d30ec:	e3500008 	cmp	r0, #8	; 0x8
         d30f0:	908ff100 	addls	pc, pc, r0, lsl #2
         d30f4:	ea000086 	b	d3314 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x284>
         d30f8:	ea00000d 	b	d3134 <TFramedAsyncSerTool::FillOutputBuffer(void)+0xa4>
         d30fc:	ea00001e 	b	d317c <TFramedAsyncSerTool::FillOutputBuffer(void)+0xec>
         d3100:	ea000055 	b	d325c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x1cc>
         d3104:	ea00005c 	b	d327c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x1ec>
         d3108:	ea000065 	b	d32a4 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x214>
         d310c:	ea000076 	b	d32ec <TFramedAsyncSerTool::FillOutputBuffer(void)+0x25c>
         d3110:	ea00008b 	b	d3344 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x2b4>
         d3114:	eaffffff 	b	d3118 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x88>
         d3118:	e3a00000 	mov	r0, #0	; 0x0
         d311c:	e58404b4 	str	r0, [r4, #1204]	; fField1204
         d3120:	e5940274 	ldr	r0, [r4, #628]	; fField628
         d3124:	e3300000 	teq	r0, #0	; 0x0
         d3128:	03a06005 	moveq	r6, #5	; 0x5
         d312c:	0a00007d 	beq	d3328 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x298>
         d3130:	ea000077 	b	d3314 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x284>
         d3134:	e5d40536 	ldrb	r0, [r4, #1334]	; fField1334
         d3138:	e3300000 	teq	r0, #0	; 0x0
         d313c:	0a000009 	beq	d3168 <TFramedAsyncSerTool::FillOutputBuffer(void)+0xd8>
         d3140:	e1a00007 	mov	r0, r7
         d3144:	e3a01016 	mov	r1, #22	; 0x16
         d3148:	eb6cd4c7 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         d314c:	e1a00007 	mov	r0, r7
         d3150:	e3a01010 	mov	r1, #16	; 0x10
         d3154:	eb6cd4c4 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         d3158:	e1a00007 	mov	r0, r7
         d315c:	e3a01002 	mov	r1, #2	; 0x2
         d3160:	eb6cd4c1 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         d3164:	e2855003 	add	r5, r5, #3	; 0x3
         d3168:	e1a00008 	mov	r0, r8
         d316c:	ebfddad7 	bl	49cd0 <TCRC16::Reset(void)>
         d3170:	e3a00000 	mov	r0, #0	; 0x0
         d3174:	e5c404ce 	strb	r0, [r4, #1230]	; fField1230
         d3178:	ea00003d 	b	d3274 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x1e4>
         d317c:	e5d404ce 	ldrb	r0, [r4, #1230]	; fField1230
         d3180:	e3300000 	teq	r0, #0	; 0x0
         d3184:	0a000004 	beq	d319c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x10c>
         d3188:	e5d404cd 	ldrb	r0, [r4, #1229]	; fField1229
         d318c:	e5cd0000 	strb	r0, [sp]
         d3190:	e3a00000 	mov	r0, #0	; 0x0
         d3194:	e5c404ce 	strb	r0, [r4, #1230]	; fField1230
         d3198:	ea000019 	b	d3204 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x174>
         d319c:	e1a00009 	mov	r0, r9
         d31a0:	e1a0100d 	mov	r1, sp
         d31a4:	eb6ccc6f 	bl	1c06368 <TCircleBuf::$GetNextByte(unsigned char *)>
         d31a8:	e3300000 	teq	r0, #0	; 0x0
         d31ac:	0a000014 	beq	d3204 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x174>
         d31b0:	e5940274 	ldr	r0, [r4, #628]	; fField628
         d31b4:	e3300000 	teq	r0, #0	; 0x0
         d31b8:	1a000004 	bne	d31d0 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x140>
         d31bc:	e5d40278 	ldrb	r0, [r4, #632]	; fField632
         d31c0:	e3300000 	teq	r0, #0	; 0x0
         d31c4:	13a00003 	movne	r0, #3	; 0x3
         d31c8:	1a000050 	bne	d3310 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x280>
         d31cc:	ea000052 	b	d331c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x28c>
         d31d0:	e59d2004 	ldr	r2, [sp, #4]
         d31d4:	e1a00009 	mov	r0, r9
         d31d8:	e5941270 	ldr	r1, [r4, #624]	; fField624
         d31dc:	eb6ccc55 	bl	1c06338 <TCircleBuf::$CopyIn(CBufferList *, unsigned long *)>
         d31e0:	e1b06000 	movs	r6, r0
         d31e4:	0a00004a 	beq	d3314 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x284>
         d31e8:	e3a00008 	mov	r0, #8	; 0x8
         d31ec:	e3360005 	teq	r6, #5	; 0x5
         d31f0:	e58404b4 	str	r0, [r4, #1204]	; fField1204
         d31f4:	03e06f95 	mvneq	r6, #596	; 0x254
         d31f8:	02466b11 	subeq	r6, r6, #17408	; 0x4400
         d31fc:	0a000049 	beq	d3328 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x298>
         d3200:	ea000045 	b	d331c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x28c>
         d3204:	e1a00007 	mov	r0, r7
         d3208:	e5dd1000 	ldrb	r1, [sp]
         d320c:	eb6cd496 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         d3210:	e3300000 	teq	r0, #0	; 0x0
         d3214:	0a000004 	beq	d322c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x19c>
         d3218:	e3a00001 	mov	r0, #1	; 0x1
         d321c:	e5c404ce 	strb	r0, [r4, #1230]	; fField1230
         d3220:	e5dd0000 	ldrb	r0, [sp]
         d3224:	e5c404cd 	strb	r0, [r4, #1229]	; fField1229
         d3228:	ea00003b 	b	d331c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x28c>
         d322c:	e5d40537 	ldrb	r0, [r4, #1335]	; fField1335
         d3230:	e3300000 	teq	r0, #0	; 0x0
         d3234:	11a00008 	movne	r0, r8
         d3238:	15dd1000 	ldrneb	r1, [sp]
         d323c:	1bfddaa6 	blne	49cdc <TCRC16::ComputeCRC(unsigned char)>
         d3240:	e2855001 	add	r5, r5, #1	; 0x1
         d3244:	e5d40534 	ldrb	r0, [r4, #1332]	; fField1332
         d3248:	e5dd1000 	ldrb	r1, [sp]
         d324c:	e1300001 	teq	r0, r1
         d3250:	03a00002 	moveq	r0, #2	; 0x2
         d3254:	0a00002d 	beq	d3310 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x280>
         d3258:	ea00002d 	b	d3314 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x284>
         d325c:	e5d41534 	ldrb	r1, [r4, #1332]	; fField1332
         d3260:	e1a00007 	mov	r0, r7
         d3264:	eb6cd480 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         d3268:	e1b06000 	movs	r6, r0
         d326c:	1a00002a 	bne	d331c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x28c>
         d3270:	e2855001 	add	r5, r5, #1	; 0x1
         d3274:	e3a00001 	mov	r0, #1	; 0x1
         d3278:	ea000024 	b	d3310 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x280>
         d327c:	e5d40534 	ldrb	r0, [r4, #1332]	; fField1332
         d3280:	e5cd0000 	strb	r0, [sp]
         d3284:	e1a00007 	mov	r0, r7
         d3288:	e5dd1000 	ldrb	r1, [sp]
         d328c:	eb6cd476 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         d3290:	e1b06000 	movs	r6, r0
         d3294:	02855001 	addeq	r5, r5, #1	; 0x1
         d3298:	03a00004 	moveq	r0, #4	; 0x4
         d329c:	0a00001b 	beq	d3310 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x280>
         d32a0:	ea00001d 	b	d331c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x28c>
         d32a4:	e5d40535 	ldrb	r0, [r4, #1333]	; fField1333
         d32a8:	e5cd0000 	strb	r0, [sp]
         d32ac:	e1a00007 	mov	r0, r7
         d32b0:	e5dd1000 	ldrb	r1, [sp]
         d32b4:	eb6cd46c 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         d32b8:	e1b06000 	movs	r6, r0
         d32bc:	1a000016 	bne	d331c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x28c>
         d32c0:	e2855001 	add	r5, r5, #1	; 0x1
         d32c4:	e5d40537 	ldrb	r0, [r4, #1335]	; fField1335
         d32c8:	e3300000 	teq	r0, #0	; 0x0
         d32cc:	03a00007 	moveq	r0, #7	; 0x7
         d32d0:	058404b4 	streq	r0, [r4, #1204]	; fField1204
         d32d4:	0a000013 	beq	d3328 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x298>
         d32d8:	e1a00008 	mov	r0, r8
         d32dc:	e5dd1000 	ldrb	r1, [sp]
         d32e0:	ebfdda7d 	bl	49cdc <TCRC16::ComputeCRC(unsigned char)>
         d32e4:	e3a00005 	mov	r0, #5	; 0x5
         d32e8:	ea000008 	b	d3310 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x280>
         d32ec:	e1a00008 	mov	r0, r8
         d32f0:	ebfddace 	bl	49e30 <TCRC16::Get(void)>
         d32f4:	e5d01001 	ldrb	r1, [r0, #1]
         d32f8:	e1a00007 	mov	r0, r7
         d32fc:	eb6cd45a 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         d3300:	e1b06000 	movs	r6, r0
         d3304:	1a000004 	bne	d331c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x28c>
         d3308:	e2855001 	add	r5, r5, #1	; 0x1
         d330c:	e3a00006 	mov	r0, #6	; 0x6
         d3310:	e58404b4 	str	r0, [r4, #1204]	; fField1204
         d3314:	e33a0000 	teq	sl, #0	; 0x0
         d3318:	1affff72 	bne	d30e8 <TFramedAsyncSerTool::FillOutputBuffer(void)+0x58>
         d331c:	e3360003 	teq	r6, #3	; 0x3
         d3320:	03a06000 	moveq	r6, #0	; 0x0
         d3324:	0a000004 	beq	d333c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x2ac>
         d3328:	e3350000 	teq	r5, #0	; 0x0
         d332c:	05b40274 	ldreq	r0, [r4, #628]!	; fField628
         d3330:	03300000 	teqeq	r0, #0	; 0x0
         d3334:	03360000 	teqeq	r6, #0	; 0x0
         d3338:	03a06005 	moveq	r6, #5	; 0x5
         d333c:	e1a00006 	mov	r0, r6
         d3340:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         d3344:	e1a00008 	mov	r0, r8
         d3348:	ebfddab8 	bl	49e30 <TCRC16::Get(void)>
         d334c:	e5d01000 	ldrb	r1, [r0]
         d3350:	e1a00007 	mov	r0, r7
         d3354:	eb6cd444 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         d3358:	e1b06000 	movs	r6, r0
         d335c:	1affffee 	bne	d331c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x28c>
         d3360:	e2855001 	add	r5, r5, #1	; 0x1
         d3364:	e3a00007 	mov	r0, #7	; 0x7
         d3368:	e58404b4 	str	r0, [r4, #1204]	; fField1204
         d336c:	eaffffea 	b	d331c <TFramedAsyncSerTool::FillOutputBuffer(void)+0x28c>
    */
}

/**
 * Symbol: TFramedAsyncSerTool::KillPut(void)
 * Address: 000d3370
 */
TFramedAsyncSerTool::KillPut(void) {
    /*
         d3370:	e1a0c00d 	mov	ip, sp
         d3374:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d3378:	e24cb004 	sub	fp, ip, #4	; 0x4
         d337c:	e1a04000 	mov	r4, r0
         d3380:	e3a00000 	mov	r0, #0	; 0x0
         d3384:	e58404b4 	str	r0, [r4, #1204]	; fField1204
         d3388:	e28400d4 	add	r0, r4, #212	; 0xd4
         d338c:	e2800b01 	add	r0, r0, #1024	; 0x400
         d3390:	eb6cd433 	bl	1c08464 <TCircleBuf::$FlushBytes(void)>
         d3394:	e1a00004 	mov	r0, r4
         d3398:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         d339c:	ea650597 	b	1a14a00 <TAsyncSerTool::$KillPut(void)>
    */
}

/**
 * Symbol: TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)
 * Address: 000d33a0
 */
TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *) {
    /*
         d33a0:	e1a0c00d 	mov	ip, sp
         d33a4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         d33a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         d33ac:	e1a04000 	mov	r4, r0
         d33b0:	e1a05001 	mov	r5, r1
         d33b4:	e24dd004 	sub	sp, sp, #4	; 0x4
         d33b8:	e5d00288 	ldrb	r0, [r0, #648]
         d33bc:	e3300000 	teq	r0, #0	; 0x0
         d33c0:	1a000003 	bne	d33d4 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x34>
         d33c4:	e1a01005 	mov	r1, r5
         d33c8:	e1a00004 	mov	r0, r4
         d33cc:	eb64f511 	bl	1a10818 <TAsyncSerTool::$EmptyInputBuffer(unsigned long *)>
         d33d0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         d33d4:	e24dd004 	sub	sp, sp, #4	; 0x4
         d33d8:	e3a06000 	mov	r6, #0	; 0x0
         d33dc:	e3a0a001 	mov	sl, #1	; 0x1
         d33e0:	e2842d0a 	add	r2, r4, #640	; 0x280
         d33e4:	e2847feb 	add	r7, r4, #940	; 0x3ac
         d33e8:	e28490bc 	add	r9, r4, #188	; 0xbc
         d33ec:	e2899b01 	add	r9, r9, #1024	; 0x400
         d33f0:	e28480fc 	add	r8, r4, #252	; 0xfc
         d33f4:	e2888b01 	add	r8, r8, #1024	; 0x400
         d33f8:	e58d2004 	str	r2, [sp, #4]
         d33fc:	e59404b0 	ldr	r0, [r4, #1200]	; fField1200
         d3400:	e3500007 	cmp	r0, #7	; 0x7
         d3404:	908ff100 	addls	pc, pc, r0, lsl #2
         d3408:	ea0000b8 	b	d36f0 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x350>
         d340c:	ea000013 	b	d3460 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0xc0>
         d3410:	ea000033 	b	d34e4 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x144>
         d3414:	ea000041 	b	d3520 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x180>
         d3418:	ea00004f 	b	d355c <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x1bc>
         d341c:	ea000080 	b	d3624 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x284>
         d3420:	ea00009f 	b	d36a4 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x304>
         d3424:	ea0000bc 	b	d371c <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x37c>
         d3428:	e59d2004 	ldr	r2, [sp, #4]
         d342c:	e1a00008 	mov	r0, r8
         d3430:	e3a03000 	mov	r3, #0	; 0x0
         d3434:	e594127c 	ldr	r1, [r4, #636]	; fField636
         d3438:	eb6ccbc0 	bl	1c06340 <TCircleBuf::$CopyOut(CBufferList *, unsigned long *, unsigned long *)>
         d343c:	e1a06000 	mov	r6, r0
         d3440:	e3300006 	teq	r0, #6	; 0x6
         d3444:	0a0000c3 	beq	d3758 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x3b8>
         d3448:	e3a00000 	mov	r0, #0	; 0x0
         d344c:	e3360000 	teq	r6, #0	; 0x0
         d3450:	e58404b0 	str	r0, [r4, #1200]	; fField1200
         d3454:	03a06ffa 	moveq	r6, #1000	; 0x3e8
         d3458:	0a0000be 	beq	d3758 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x3b8>
         d345c:	ea0000a5 	b	d36f8 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x358>
         d3460:	e3a00000 	mov	r0, #0	; 0x0
         d3464:	e5c404cc 	strb	r0, [r4, #1228]	; fField1228
         d3468:	e5c404d0 	strb	r0, [r4, #1232]	; fField1232
         d346c:	e1a00009 	mov	r0, r9
         d3470:	ebfdda16 	bl	49cd0 <TCRC16::Reset(void)>
         d3474:	e5d40536 	ldrb	r0, [r4, #1334]	; fField1334
         d3478:	e3300000 	teq	r0, #0	; 0x0
         d347c:	1a000001 	bne	d3488 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0xe8>
         d3480:	e3a00003 	mov	r0, #3	; 0x3
         d3484:	ea000098 	b	d36ec <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x34c>
         d3488:	e3a00001 	mov	r0, #1	; 0x1
         d348c:	e52d0004 	str	r0, [sp, -#4]!
         d3490:	e1a00007 	mov	r0, r7
         d3494:	e1a02005 	mov	r2, r5
         d3498:	e28d1004 	add	r1, sp, #4	; 0x4
         d349c:	eb6ccbb2 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
         d34a0:	e1b06000 	movs	r6, r0
         d34a4:	13a0a000 	movne	sl, #0	; 0x0
         d34a8:	1a00000b 	bne	d34dc <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x13c>
         d34ac:	e5dd0004 	ldrb	r0, [sp, #4]
         d34b0:	e3300016 	teq	r0, #22	; 0x16
         d34b4:	15940548 	ldrne	r0, [r4, #1352]	; fField1352
         d34b8:	12800001 	addne	r0, r0, #1	; 0x1
         d34bc:	15840548 	strne	r0, [r4, #1352]	; fField1352
         d34c0:	1a000002 	bne	d34d0 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x130>
         d34c4:	e3a01001 	mov	r1, #1	; 0x1
         d34c8:	e58414b0 	str	r1, [r4, #1200]	; fField1200
         d34cc:	ea000002 	b	d34dc <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x13c>
         d34d0:	e59d0000 	ldr	r0, [sp]
         d34d4:	e3300000 	teq	r0, #0	; 0x0
         d34d8:	1affffec 	bne	d3490 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0xf0>
         d34dc:	e28dd004 	add	sp, sp, #4	; 0x4
         d34e0:	ea000082 	b	d36f0 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x350>
         d34e4:	e1a00007 	mov	r0, r7
         d34e8:	e1a02005 	mov	r2, r5
         d34ec:	e1a0100d 	mov	r1, sp
         d34f0:	eb6ccb9d 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
         d34f4:	e1b06000 	movs	r6, r0
         d34f8:	1a00007e 	bne	d36f8 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x358>
         d34fc:	e5dd0000 	ldrb	r0, [sp]
         d3500:	e3300010 	teq	r0, #16	; 0x10
         d3504:	03a00002 	moveq	r0, #2	; 0x2
         d3508:	0a000077 	beq	d36ec <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x34c>
         d350c:	e3a00000 	mov	r0, #0	; 0x0
         d3510:	e58404b0 	str	r0, [r4, #1200]	; fField1200
         d3514:	e5940548 	ldr	r0, [r4, #1352]	; fField1352
         d3518:	e2800002 	add	r0, r0, #2	; 0x2
         d351c:	ea00000c 	b	d3554 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x1b4>
         d3520:	e1a00007 	mov	r0, r7
         d3524:	e1a02005 	mov	r2, r5
         d3528:	e1a0100d 	mov	r1, sp
         d352c:	eb6ccb8e 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
         d3530:	e1b06000 	movs	r6, r0
         d3534:	1a00006f 	bne	d36f8 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x358>
         d3538:	e5dd0000 	ldrb	r0, [sp]
         d353c:	e3300002 	teq	r0, #2	; 0x2
         d3540:	0affffce 	beq	d3480 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0xe0>
         d3544:	e3a00000 	mov	r0, #0	; 0x0
         d3548:	e58404b0 	str	r0, [r4, #1200]	; fField1200
         d354c:	e5940548 	ldr	r0, [r4, #1352]	; fField1352
         d3550:	e2800003 	add	r0, r0, #3	; 0x3
         d3554:	e5840548 	str	r0, [r4, #1352]	; fField1352
         d3558:	ea000064 	b	d36f0 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x350>
         d355c:	e5d404d0 	ldrb	r0, [r4, #1232]	; fField1232
         d3560:	e3300000 	teq	r0, #0	; 0x0
         d3564:	0a000005 	beq	d3580 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x1e0>
         d3568:	e3a00000 	mov	r0, #0	; 0x0
         d356c:	e5c404d0 	strb	r0, [r4, #1232]	; fField1232
         d3570:	e5d404cf 	ldrb	r0, [r4, #1231]	; fField1231
         d3574:	e5cd0000 	strb	r0, [sp]
         d3578:	e3a06000 	mov	r6, #0	; 0x0
         d357c:	ea000008 	b	d35a4 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x204>
         d3580:	e1a00007 	mov	r0, r7
         d3584:	e1a02005 	mov	r2, r5
         d3588:	e1a0100d 	mov	r1, sp
         d358c:	eb6ccb76 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
         d3590:	e1a06000 	mov	r6, r0
         d3594:	e3500000 	cmp	r0, #0	; 0x0
         d3598:	0a000001 	beq	d35a4 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x204>
         d359c:	e3a0a000 	mov	sl, #0	; 0x0
         d35a0:	1a000052 	bne	d36f0 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x350>
         d35a4:	e5d404cc 	ldrb	r0, [r4, #1228]	; fField1228
         d35a8:	e3300000 	teq	r0, #0	; 0x0
         d35ac:	05d41534 	ldreqb	r1, [r4, #1332]	; fField1332
         d35b0:	05dd0000 	ldreqb	r0, [sp]
         d35b4:	01310000 	teqeq	r1, r0
         d35b8:	03a00004 	moveq	r0, #4	; 0x4
         d35bc:	0a00004a 	beq	d36ec <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x34c>
         d35c0:	e1a00008 	mov	r0, r8
         d35c4:	e5dd1000 	ldrb	r1, [sp]
         d35c8:	eb6cd3a7 	bl	1c0846c <TCircleBuf::$PutNextByte(unsigned char)>
         d35cc:	e1b06000 	movs	r6, r0
         d35d0:	1a000007 	bne	d35f4 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x254>
         d35d4:	e5d40538 	ldrb	r0, [r4, #1336]	; fField1336
         d35d8:	e3300000 	teq	r0, #0	; 0x0
         d35dc:	11a00009 	movne	r0, r9
         d35e0:	15dd1000 	ldrneb	r1, [sp]
         d35e4:	1bfdd9bc 	blne	49cdc <TCRC16::ComputeCRC(unsigned char)>
         d35e8:	e3a00000 	mov	r0, #0	; 0x0
         d35ec:	e5c404cc 	strb	r0, [r4, #1228]	; fField1228
         d35f0:	ea00003e 	b	d36f0 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x350>
         d35f4:	e3a01001 	mov	r1, #1	; 0x1
         d35f8:	e5c414d0 	strb	r1, [r4, #1232]	; fField1232
         d35fc:	e5dd0000 	ldrb	r0, [sp]
         d3600:	e5c404cf 	strb	r0, [r4, #1231]	; fField1231
         d3604:	e59d2004 	ldr	r2, [sp, #4]
         d3608:	e1a00008 	mov	r0, r8
         d360c:	e3a03000 	mov	r3, #0	; 0x0
         d3610:	e594127c 	ldr	r1, [r4, #636]	; fField636
         d3614:	eb6ccb49 	bl	1c06340 <TCircleBuf::$CopyOut(CBufferList *, unsigned long *, unsigned long *)>
         d3618:	e1b06000 	movs	r6, r0
         d361c:	1a000035 	bne	d36f8 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x358>
         d3620:	ea000032 	b	d36f0 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x350>
         d3624:	e1a00007 	mov	r0, r7
         d3628:	e1a02005 	mov	r2, r5
         d362c:	e1a0100d 	mov	r1, sp
         d3630:	eb6ccb4d 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
         d3634:	e1b06000 	movs	r6, r0
         d3638:	1a00002e 	bne	d36f8 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x358>
         d363c:	e5d40535 	ldrb	r0, [r4, #1333]	; fField1333
         d3640:	e5dd1000 	ldrb	r1, [sp]
         d3644:	e1300001 	teq	r0, r1
         d3648:	1a000009 	bne	d3674 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x2d4>
         d364c:	e5d40538 	ldrb	r0, [r4, #1336]	; fField1336
         d3650:	e3300000 	teq	r0, #0	; 0x0
         d3654:	0a000004 	beq	d366c <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x2cc>
         d3658:	e1a00009 	mov	r0, r9
         d365c:	e5dd1000 	ldrb	r1, [sp]
         d3660:	ebfdd99d 	bl	49cdc <TCRC16::ComputeCRC(unsigned char)>
         d3664:	e3a00005 	mov	r0, #5	; 0x5
         d3668:	ea00001f 	b	d36ec <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x34c>
         d366c:	e3a00007 	mov	r0, #7	; 0x7
         d3670:	ea00001d 	b	d36ec <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x34c>
         d3674:	e5d41534 	ldrb	r1, [r4, #1332]	; fField1332
         d3678:	e5dd0000 	ldrb	r0, [sp]
         d367c:	e1310000 	teq	r1, r0
         d3680:	1affff7e 	bne	d3480 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0xe0>
         d3684:	e3a01001 	mov	r1, #1	; 0x1
         d3688:	e5c414d0 	strb	r1, [r4, #1232]	; fField1232
         d368c:	e5dd0000 	ldrb	r0, [sp]
         d3690:	e5c404cf 	strb	r0, [r4, #1231]	; fField1231
         d3694:	e3a00003 	mov	r0, #3	; 0x3
         d3698:	e58404b0 	str	r0, [r4, #1200]	; fField1200
         d369c:	e5c414cc 	strb	r1, [r4, #1228]	; fField1228
         d36a0:	ea000012 	b	d36f0 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x350>
         d36a4:	e1a00007 	mov	r0, r7
         d36a8:	e1a02005 	mov	r2, r5
         d36ac:	e1a0100d 	mov	r1, sp
         d36b0:	eb6ccb2d 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
         d36b4:	e1b06000 	movs	r6, r0
         d36b8:	1a00000e 	bne	d36f8 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x358>
         d36bc:	e1a00009 	mov	r0, r9
         d36c0:	ebfdd9da 	bl	49e30 <TCRC16::Get(void)>
         d36c4:	e5d01001 	ldrb	r1, [r0, #1]
         d36c8:	e5dd0000 	ldrb	r0, [sp]
         d36cc:	e1310000 	teq	r1, r0
         d36d0:	0a000004 	beq	d36e8 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x348>
         d36d4:	e3a00000 	mov	r0, #0	; 0x0
         d36d8:	e3e06053 	mvn	r6, #83	; 0x53
         d36dc:	e2466c46 	sub	r6, r6, #17920	; 0x4600
         d36e0:	e5a404b0 	str	r0, [r4, #1200]!	; fField1200
         d36e4:	ea000009 	b	d3710 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x370>
         d36e8:	e3a00006 	mov	r0, #6	; 0x6
         d36ec:	e58404b0 	str	r0, [r4, #1200]	; fField1200
         d36f0:	e33a0000 	teq	sl, #0	; 0x0
         d36f4:	1affff40 	bne	d33fc <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x5c>
         d36f8:	e3360001 	teq	r6, #1	; 0x1
         d36fc:	1a000013 	bne	d3750 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x3b0>
         d3700:	e3e06052 	mvn	r6, #82	; 0x52
         d3704:	e2466c46 	sub	r6, r6, #17920	; 0x4600
         d3708:	e3a00000 	mov	r0, #0	; 0x0
         d370c:	e5a404b0 	str	r0, [r4, #1200]!	; fField1200
         d3710:	e1a00008 	mov	r0, r8
         d3714:	eb6cd352 	bl	1c08464 <TCircleBuf::$FlushBytes(void)>
         d3718:	ea00000e 	b	d3758 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x3b8>
         d371c:	e1a00007 	mov	r0, r7
         d3720:	e1a02005 	mov	r2, r5
         d3724:	e1a0100d 	mov	r1, sp
         d3728:	eb6ccb0f 	bl	1c0636c <TCircleBuf::$GetNextByte(unsigned char *, unsigned long *)>
         d372c:	e1b06000 	movs	r6, r0
         d3730:	1afffff0 	bne	d36f8 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x358>
         d3734:	e1a00009 	mov	r0, r9
         d3738:	ebfdd9bc 	bl	49e30 <TCRC16::Get(void)>
         d373c:	e5d00000 	ldrb	r0, [r0]
         d3740:	e5dd1000 	ldrb	r1, [sp]
         d3744:	e1300001 	teq	r0, r1
         d3748:	0affffc7 	beq	d366c <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x2cc>
         d374c:	eaffffe0 	b	d36d4 <TFramedAsyncSerTool::EmptyInputBuffer(unsigned long *)+0x334>
         d3750:	e3360002 	teq	r6, #2	; 0x2
         d3754:	03a06000 	moveq	r6, #0	; 0x0
         d3758:	e1a00006 	mov	r0, r6
         d375c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFramedAsyncSerTool::KillGet(void)
 * Address: 000d3760
 */
TFramedAsyncSerTool::KillGet(void) {
    /*
         d3760:	e1a0c00d 	mov	ip, sp
         d3764:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d3768:	e24cb004 	sub	fp, ip, #4	; 0x4
         d376c:	e1a04000 	mov	r4, r0
         d3770:	e3a00000 	mov	r0, #0	; 0x0
         d3774:	e58404b0 	str	r0, [r4, #1200]	; fField1200
         d3778:	e28400fc 	add	r0, r4, #252	; 0xfc
         d377c:	e2800b01 	add	r0, r0, #1024	; 0x400
         d3780:	eb6cd337 	bl	1c08464 <TCircleBuf::$FlushBytes(void)>
         d3784:	e1a00004 	mov	r0, r4
         d3788:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         d378c:	ea650090 	b	1a139d4 <TAsyncSerTool::$KillGet(void)>
    */
}

/**
 * Symbol: TFramedAsyncSerTool::SetFramingCtl(TCMOFramingParms *)
 * Address: 000d3790
 */
TFramedAsyncSerTool::SetFramingCtl(TCMOFramingParms *) {
    /*
         d3790:	e2800f4a 	add	r0, r0, #296	; 0x128
         d3794:	e2800b01 	add	r0, r0, #1024	; 0x400
         d3798:	e8b1100c 	ldmia	r1!, {r2, r3, ip}
         d379c:	e8a0100c 	stmia	r0!, {r2, r3, ip}
         d37a0:	e8911008 	ldmia	r1, {r3, ip}
         d37a4:	e8801008 	stmia	r0, {r3, ip}
         d37a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFramedAsyncSerTool::GetFramingCtl(TCMOFramingParms *)
 * Address: 000d37ac
 */
TFramedAsyncSerTool::GetFramingCtl(TCMOFramingParms *) {
    /*
         d37ac:	e1a02001 	mov	r2, r1
         d37b0:	e2801f4a 	add	r1, r0, #296	; 0x128
         d37b4:	e2811b01 	add	r1, r1, #1024	; 0x400
         d37b8:	e8b11009 	ldmia	r1!, {r0, r3, ip}
         d37bc:	e8a21009 	stmia	r2!, {r0, r3, ip}
         d37c0:	e8911008 	ldmia	r1, {r3, ip}
         d37c4:	e8821008 	stmia	r2, {r3, ip}
         d37c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFramedAsyncSerTool::ResetFramingStats(void)
 * Address: 000d37cc
 */
TFramedAsyncSerTool::ResetFramingStats(void) {
    /*
         d37cc:	e3a01000 	mov	r1, #0	; 0x0
         d37d0:	e5a01548 	str	r1, [r0, #1352]!	; fField1352
         d37d4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFramedAsyncSerTool::TaskConstructor(void)
 * Address: 000d37d8
 */
TFramedAsyncSerTool::TaskConstructor(void) {
    /*
         d37d8:	e1a0c00d 	mov	ip, sp
         d37dc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d37e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         d37e4:	e1a04000 	mov	r4, r0
         d37e8:	eb651d5f 	bl	1a1ad6c <TAsyncSerTool::$TaskConstructor(void)>
         d37ec:	e3a01000 	mov	r1, #0	; 0x0
         d37f0:	e58414b0 	str	r1, [r4, #1200]	; fField1200
         d37f4:	e58414b4 	str	r1, [r4, #1204]	; fField1204
         d37f8:	e3a01c02 	mov	r1, #512	; 0x200
         d37fc:	e5841524 	str	r1, [r4, #1316]	; fField1316
         d3800:	e3a01038 	mov	r1, #56	; 0x38
         d3804:	e5a41158 	str	r1, [r4, #344]!	; fField344
         d3808:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFramedAsyncSerTool::TaskDestructor(void)
 * Address: 000d380c
 */
TFramedAsyncSerTool::TaskDestructor(void) {
    /*
         d380c:	ea65215e 	b	1a1bd8c <TAsyncSerTool::$TaskDestructor(void)>
    */
}

/**
 * Symbol: TFramedAsyncSerTool::GetToolName(void)
 * Address: 000d3810
 */
TFramedAsyncSerTool::GetToolName(void) {
    /*
         d3810:	e28f0f00 	add	r0, pc, #0	; 0x0
         d3814:	e1a0f00e 	mov	pc, lr
         d3818:	4672616d 	ldrmibt	r6, [r2], -sp, ror #2
         d381c:	65642041 	strvsb	r2, [r4, -#65]!
         d3820:	73796e63 	cmnvc	r9, #1584	; 0x630
         d3824:	20536572 	subcss	r6, r3, r2, ror r5
         d3828:	69616c20 	stmvsdb	r1!, {r5, sl, fp, sp, lr}^
         d382c:	546f6f6c 	strplbt	r6, [pc], #f6c	; d3834 <TFramedAsyncSerTool::GetSizeOf(void)>
         d3830:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TFramedAsyncSerTool::GetSizeOf(void)
 * Address: 000d3834
 */
TFramedAsyncSerTool::GetSizeOf(void) {
    /*
         d3834:	e3a00f53 	mov	r0, #332	; 0x14c
         d3838:	e2800b01 	add	r0, r0, #1024	; 0x400
         d383c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFramedAsyncSerTool::AllocateBuffers(void)
 * Address: 000d3840
 */
TFramedAsyncSerTool::AllocateBuffers(void) {
    /*
         d3840:	e1a0c00d 	mov	ip, sp
         d3844:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d3848:	e24cb004 	sub	fp, ip, #4	; 0x4
         d384c:	e1a04000 	mov	r4, r0
         d3850:	eb64df59 	bl	1a0b5bc <TAsyncSerTool::$AllocateBuffers(void)>
         d3854:	e3300000 	teq	r0, #0	; 0x0
         d3858:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         d385c:	e5941524 	ldr	r1, [r4, #1316]	; fField1316
         d3860:	e28400fc 	add	r0, r4, #252	; 0xfc
         d3864:	e2800b01 	add	r0, r0, #1024	; 0x400
         d3868:	eb6ccaac 	bl	1c06320 <TCircleBuf::$Allocate(unsigned long)>
         d386c:	e3300000 	teq	r0, #0	; 0x0
         d3870:	05941524 	ldreq	r1, [r4, #1316]	; fField1316
         d3874:	028400d4 	addeq	r0, r4, #212	; 0xd4
         d3878:	02800b01 	addeq	r0, r0, #1024	; 0x400
         d387c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         d3880:	0a6ccaa6 	beq	1c06320 <TCircleBuf::$Allocate(unsigned long)>
         d3884:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFramedAsyncSerTool::DeallocateBuffers(void)
 * Address: 000d3888
 */
TFramedAsyncSerTool::DeallocateBuffers(void) {
    /*
         d3888:	e1a0c00d 	mov	ip, sp
         d388c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         d3890:	e24cb004 	sub	fp, ip, #4	; 0x4
         d3894:	e1a04000 	mov	r4, r0
         d3898:	eb64ebb0 	bl	1a0e760 <TAsyncSerTool::$DeallocateBuffers(void)>
         d389c:	e28400fc 	add	r0, r4, #252	; 0xfc
         d38a0:	e2800b01 	add	r0, r0, #1024	; 0x400
         d38a4:	eb6ccaac 	bl	1c0635c <TCircleBuf::$Deallocate(void)>
         d38a8:	e28400d4 	add	r0, r4, #212	; 0xd4
         d38ac:	e2800b01 	add	r0, r0, #1024	; 0x400
         d38b0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         d38b4:	ea6ccaa8 	b	1c0635c <TCircleBuf::$Deallocate(void)>
    */
}

/**
 * Symbol: TFramedAsyncSerTool::AddDefaultOptions(TOptionArray *)
 * Address: 000d38b8
 */
TFramedAsyncSerTool::AddDefaultOptions(TOptionArray *) {
    /*
         d38b8:	e1a0c00d 	mov	ip, sp
         d38bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         d38c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         d38c4:	e1a05000 	mov	r5, r0
         d38c8:	e1a04001 	mov	r4, r1
         d38cc:	e24dd014 	sub	sp, sp, #20	; 0x14
         d38d0:	e1a0000d 	mov	r0, sp
         d38d4:	eb6ba13d 	bl	1bbbdd0 <TCMOFramingParms::$__ct(void)>
         d38d8:	e1a0200d 	mov	r2, sp
         d38dc:	e5941000 	ldr	r1, [r4]
         d38e0:	e1a00004 	mov	r0, r4
         d38e4:	eb6b98ee 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         d38e8:	e3300000 	teq	r0, #0	; 0x0
         d38ec:	01a01004 	moveq	r1, r4
         d38f0:	01a00005 	moveq	r0, r5
         d38f4:	0b64df26 	bleq	1a0b594 <TAsyncSerTool::$AddDefaultOptions(TOptionArray *)>
         d38f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFramedAsyncSerTool::AddCurrentOptions(TOptionArray *)
 * Address: 000d38fc
 */
TFramedAsyncSerTool::AddCurrentOptions(TOptionArray *) {
    /*
         d38fc:	e1a0c00d 	mov	ip, sp
         d3900:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         d3904:	e24cb004 	sub	fp, ip, #4	; 0x4
         d3908:	e1a05000 	mov	r5, r0
         d390c:	e1a04001 	mov	r4, r1
         d3910:	e2802f4a 	add	r2, r0, #296	; 0x128
         d3914:	e2822b01 	add	r2, r2, #1024	; 0x400
         d3918:	e5911000 	ldr	r1, [r1]
         d391c:	e1a00004 	mov	r0, r4
         d3920:	eb6b98df 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         d3924:	e3300000 	teq	r0, #0	; 0x0
         d3928:	01a01004 	moveq	r1, r4
         d392c:	01a00005 	moveq	r0, r5
         d3930:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         d3934:	0a64df12 	beq	1a0b584 <TAsyncSerTool::$AddCurrentOptions(TOptionArray *)>
         d3938:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

