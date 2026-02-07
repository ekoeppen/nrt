#include "include/TRegisterName.h"

/**
 * Symbol: TRegisterName::RegisterName(unsigned char, unsigned short *, unsigned char)
 * Address: 00126fc0
 */
TRegisterName::RegisterName(unsigned char, unsigned short *, unsigned char) {
    /*
        126fc0:	e1a0c00d 	mov	ip, sp
        126fc4:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        126fc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        126fcc:	e1a04002 	mov	r4, r2
        126fd0:	e20190ff 	and	r9, r1, #255	; 0xff
        126fd4:	e20370ff 	and	r7, r3, #255	; 0xff
        126fd8:	e24dd030 	sub	sp, sp, #48	; 0x30
        126fdc:	e28d0014 	add	r0, sp, #20	; 0x14
        126fe0:	eb6af494 	bl	1be4238 <TAEvent::$__ct(void)>
        126fe4:	e59f8068 	ldr	r8, [pc, #68]	; 127054 <TRegisterName::RegisterName(unsigned char, unsigned short *, unsigned char)+0x94>
        126fe8:	e3a06000 	mov	r6, #0	; 0x0
        126fec:	e58d6020 	str	r6, [sp, #32]
        126ff0:	e58d8014 	str	r8, [sp, #20]
        126ff4:	e58d601c 	str	r6, [sp, #28]
        126ff8:	e59f5058 	ldr	r5, [pc, #58]	; 127058 <TRegisterName::RegisterName(unsigned char, unsigned short *, unsigned char)+0x98>
        126ffc:	e3a00b01 	mov	r0, #1024	; 0x400
        127000:	e58d0024 	str	r0, [sp, #36]
        127004:	e58d5018 	str	r5, [sp, #24]
        127008:	e1a0000d 	mov	r0, sp
        12700c:	eb6af489 	bl	1be4238 <TAEvent::$__ct(void)>
        127010:	e58d600c 	str	r6, [sp, #12]
        127014:	e40d8008 	str	r8, [sp], -#8
        127018:	e58d6010 	str	r6, [sp, #16]
        12701c:	e5cd6004 	strb	r6, [sp, #4]
        127020:	e1a03007 	mov	r3, r7
        127024:	e58d6000 	str	r6, [sp]
        127028:	e1a0100d 	mov	r1, sp
        12702c:	e3a02000 	mov	r2, #0	; 0x0
        127030:	e1a00005 	mov	r0, r5
        127034:	eb657489 	bl	1a84260 <$OpenAppleTalkPart(unsigned long, TUPort *, unsigned short *, unsigned char)>
        127038:	e3300000 	teq	r0, #0	; 0x0
        12703c:	0a000006 	beq	12705c <TRegisterName::RegisterName(unsigned char, unsigned short *, unsigned char)+0x9c>
        127040:	e1a0000d 	mov	r0, sp
        127044:	e3a01000 	mov	r1, #0	; 0x0
        127048:	eb6a9db5 	bl	1bce724 <TUObject::$__dt(void)>
        12704c:	e28dd008 	add	sp, sp, #8	; 0x8
        127050:	ea000024 	b	1270e8 <TRegisterName::RegisterName(unsigned char, unsigned short *, unsigned char)+0x128>
        127054:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        127058:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
        12705c:	e24dd024 	sub	sp, sp, #36	; 0x24
        127060:	e1a0000d 	mov	r0, sp
        127064:	eb6b3252 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        127068:	e1a00004 	mov	r0, r4
        12706c:	eb6b1dbb 	bl	1bee760 <$Ustrlen>
        127070:	e3a01002 	mov	r1, #2	; 0x2
        127074:	e0811080 	add	r1, r1, r0, lsl #1
        127078:	e3a03001 	mov	r3, #1	; 0x1
        12707c:	e92d0008 	stmdb	sp!, {r3}
        127080:	e1a02004 	mov	r2, r4
        127084:	e28d0004 	add	r0, sp, #4	; 0x4
        127088:	eb655348 	bl	1a7bdb0 <TMemoryObject::$Init(unsigned long, char *, unsigned char, unsigned long)>
        12708c:	e28dd004 	add	sp, sp, #4	; 0x4
        127090:	e1a0000d 	mov	r0, sp
        127094:	eb6b324b 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        127098:	e58d0054 	str	r0, [sp, #84]
        12709c:	e5cd9058 	strb	r9, [sp, #88]
        1270a0:	e1a03007 	mov	r3, r7
        1270a4:	e3a02000 	mov	r2, #0	; 0x0
        1270a8:	e92d000c 	stmdb	sp!, {r2, r3}
        1270ac:	e28d2034 	add	r2, sp, #52	; 0x34
        1270b0:	e28d0048 	add	r0, sp, #72	; 0x48
        1270b4:	e3a03014 	mov	r3, #20	; 0x14
        1270b8:	e3a0101c 	mov	r1, #28	; 0x1c
        1270bc:	eb656800 	bl	1a810c4 <$ATSendRPCSync__FP17TAppleTalkMessageUlT1T2UcT5>
        1270c0:	e28dd008 	add	sp, sp, #8	; 0x8
        1270c4:	e3300000 	teq	r0, #0	; 0x0
        1270c8:	e1a0000d 	mov	r0, sp
        1270cc:	e3a01000 	mov	r1, #0	; 0x0
        1270d0:	0a000006 	beq	1270f0 <TRegisterName::RegisterName(unsigned char, unsigned short *, unsigned char)+0x130>
        1270d4:	eb6b3238 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        1270d8:	e28d0024 	add	r0, sp, #36	; 0x24
        1270dc:	e3a01000 	mov	r1, #0	; 0x0
        1270e0:	eb6a9d8f 	bl	1bce724 <TUObject::$__dt(void)>
        1270e4:	e28dd02c 	add	sp, sp, #44	; 0x2c
        1270e8:	e59d0008 	ldr	r0, [sp, #8]
        1270ec:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1270f0:	eb6b3231 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        1270f4:	e28dd024 	add	sp, sp, #36	; 0x24
        1270f8:	eaffffd0 	b	127040 <TRegisterName::RegisterName(unsigned char, unsigned short *, unsigned char)+0x80>
    */
}

/**
 * Symbol: TRegisterName::RegisterName(unsigned char, unsigned short *)
 * Address: 001270fc
 */
TRegisterName::RegisterName(unsigned char, unsigned short *) {
    /*
        1270fc:	e20110ff 	and	r1, r1, #255	; 0xff
        127100:	e3a03001 	mov	r3, #1	; 0x1
        127104:	ea65786f 	b	1a852c8 <TRegisterName::$RegisterName(unsigned char, unsigned short *, unsigned char)>
    */
}

/**
 * Symbol: TRegisterName::UnRegisterName(unsigned short *, unsigned char)
 * Address: 00127108
 */
TRegisterName::UnRegisterName(unsigned short *, unsigned char) {
    /*
        127108:	e1a0c00d 	mov	ip, sp
        12710c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        127110:	e24cb004 	sub	fp, ip, #4	; 0x4
        127114:	e1a04001 	mov	r4, r1
        127118:	e20270ff 	and	r7, r2, #255	; 0xff
        12711c:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        127120:	e28d0014 	add	r0, sp, #20	; 0x14
        127124:	eb6af443 	bl	1be4238 <TAEvent::$__ct(void)>
        127128:	e59f806c 	ldr	r8, [pc, #6c]	; 12719c <TRegisterName::UnRegisterName(unsigned short *, unsigned char)+0x94>
        12712c:	e3a06000 	mov	r6, #0	; 0x0
        127130:	e58d6020 	str	r6, [sp, #32]
        127134:	e58d8014 	str	r8, [sp, #20]
        127138:	e58d601c 	str	r6, [sp, #28]
        12713c:	e59f505c 	ldr	r5, [pc, #5c]	; 1271a0 <TRegisterName::UnRegisterName(unsigned short *, unsigned char)+0x98>
        127140:	e3a00001 	mov	r0, #1	; 0x1
        127144:	e2800b01 	add	r0, r0, #1024	; 0x400
        127148:	e58d0024 	str	r0, [sp, #36]
        12714c:	e58d5018 	str	r5, [sp, #24]
        127150:	e1a0000d 	mov	r0, sp
        127154:	eb6af437 	bl	1be4238 <TAEvent::$__ct(void)>
        127158:	e58d600c 	str	r6, [sp, #12]
        12715c:	e40d8008 	str	r8, [sp], -#8
        127160:	e58d6010 	str	r6, [sp, #16]
        127164:	e5cd6004 	strb	r6, [sp, #4]
        127168:	e1a03007 	mov	r3, r7
        12716c:	e58d6000 	str	r6, [sp]
        127170:	e1a0100d 	mov	r1, sp
        127174:	e3a02000 	mov	r2, #0	; 0x0
        127178:	e1a00005 	mov	r0, r5
        12717c:	eb657437 	bl	1a84260 <$OpenAppleTalkPart(unsigned long, TUPort *, unsigned short *, unsigned char)>
        127180:	e3300000 	teq	r0, #0	; 0x0
        127184:	0a000006 	beq	1271a4 <TRegisterName::UnRegisterName(unsigned short *, unsigned char)+0x9c>
        127188:	e1a0000d 	mov	r0, sp
        12718c:	e3a01000 	mov	r1, #0	; 0x0
        127190:	eb6a9d63 	bl	1bce724 <TUObject::$__dt(void)>
        127194:	e28dd008 	add	sp, sp, #8	; 0x8
        127198:	ea000023 	b	12722c <TRegisterName::UnRegisterName(unsigned short *, unsigned char)+0x124>
        12719c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1271a0:	6e627020 	cdpvs	0, 6, cr7, cr2, cr0, {1}
        1271a4:	e24dd024 	sub	sp, sp, #36	; 0x24
        1271a8:	e1a0000d 	mov	r0, sp
        1271ac:	eb6b3200 	bl	1bf39b4 <TMemoryObject::$__ct(void)>
        1271b0:	e1a00004 	mov	r0, r4
        1271b4:	eb6b1d69 	bl	1bee760 <$Ustrlen>
        1271b8:	e3a01002 	mov	r1, #2	; 0x2
        1271bc:	e0811080 	add	r1, r1, r0, lsl #1
        1271c0:	e3a03001 	mov	r3, #1	; 0x1
        1271c4:	e92d0008 	stmdb	sp!, {r3}
        1271c8:	e1a02004 	mov	r2, r4
        1271cc:	e28d0004 	add	r0, sp, #4	; 0x4
        1271d0:	eb6552f6 	bl	1a7bdb0 <TMemoryObject::$Init(unsigned long, char *, unsigned char, unsigned long)>
        1271d4:	e28dd004 	add	sp, sp, #4	; 0x4
        1271d8:	e1a0000d 	mov	r0, sp
        1271dc:	eb6b31f9 	bl	1bf39c8 <TMemoryObject::$GetId(void)>
        1271e0:	e1a03007 	mov	r3, r7
        1271e4:	e3a02000 	mov	r2, #0	; 0x0
        1271e8:	e58d0054 	str	r0, [sp, #84]
        1271ec:	e92d000c 	stmdb	sp!, {r2, r3}
        1271f0:	e28d2034 	add	r2, sp, #52	; 0x34
        1271f4:	e28d0048 	add	r0, sp, #72	; 0x48
        1271f8:	e3a03014 	mov	r3, #20	; 0x14
        1271fc:	e3a01018 	mov	r1, #24	; 0x18
        127200:	eb6567af 	bl	1a810c4 <$ATSendRPCSync__FP17TAppleTalkMessageUlT1T2UcT5>
        127204:	e28dd008 	add	sp, sp, #8	; 0x8
        127208:	e3300000 	teq	r0, #0	; 0x0
        12720c:	e1a0000d 	mov	r0, sp
        127210:	e3a01000 	mov	r1, #0	; 0x0
        127214:	0a000006 	beq	127234 <TRegisterName::UnRegisterName(unsigned short *, unsigned char)+0x12c>
        127218:	eb6b31e7 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        12721c:	e28d0024 	add	r0, sp, #36	; 0x24
        127220:	e3a01000 	mov	r1, #0	; 0x0
        127224:	eb6a9d3e 	bl	1bce724 <TUObject::$__dt(void)>
        127228:	e28dd02c 	add	sp, sp, #44	; 0x2c
        12722c:	e59d0008 	ldr	r0, [sp, #8]
        127230:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        127234:	eb6b31e0 	bl	1bf39bc <TMemoryObject::$__dt(void)>
        127238:	e28dd024 	add	sp, sp, #36	; 0x24
        12723c:	eaffffd1 	b	127188 <TRegisterName::UnRegisterName(unsigned short *, unsigned char)+0x80>
    */
}

/**
 * Symbol: TRegisterName::UnRegisterName(unsigned short *)
 * Address: 00127240
 */
TRegisterName::UnRegisterName(unsigned short *) {
    /*
        127240:	e3a02001 	mov	r2, #1	; 0x1
        127244:	ea657c36 	b	1a86324 <TRegisterName::$UnRegisterName(unsigned short *, unsigned char)>
    */
}

