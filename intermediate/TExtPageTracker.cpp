#include "include/TExtPageTracker.h"

/**
 * Symbol: Init__15TExtPageTrackerSFPP15TExtPageTrackerUlN22
 * Address: 0025e000
 */
void TExtPageTracker::Init() {
    /*
        25e000:	e1a0c00d 	mov	ip, sp
        25e004:	e92ddfff 	stmdb	sp!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        25e008:	e24cb004 	sub	fp, ip, #4	; 0x4
        25e00c:	e1a05001 	mov	r5, r1
        25e010:	e1a06002 	mov	r6, r2
        25e014:	e1a04003 	mov	r4, r3
        25e018:	e3a08000 	mov	r8, #0	; 0x0
        25e01c:	e59f0024 	ldr	r0, [pc, #24]	; 25e048 <Init__15TExtPageTrackerSFPP15TExtPageTrackerUlN22+0x48>
        25e020:	e5900000 	ldr	r0, [r0]
        25e024:	e201100f 	and	r1, r1, #15	; 0xf
        25e028:	e331000b 	teq	r1, #11	; 0xb
        25e02c:	13a01000 	movne	r1, #0	; 0x0
        25e030:	03a01001 	moveq	r1, #1	; 0x1
        25e034:	e3310000 	teq	r1, #0	; 0x0
        25e038:	0a000003 	beq	25e04c <Init__15TExtPageTrackerSFPP15TExtPageTrackerUlN22+0x4c>
        25e03c:	e1a01005 	mov	r1, r5
        25e040:	eb02efb3 	bl	319f14 <TObjectTable::Get(unsigned long)>
        25e044:	ea000001 	b	25e050 <Init__15TExtPageTrackerSFPP15TExtPageTrackerUlN22+0x50>
        25e048:	0c101164 	ldfeqs	f1, [r0], -#400
        25e04c:	e3a00000 	mov	r0, #0	; 0x0
        25e050:	e1b0a000 	movs	sl, r0
        25e054:	03a080e1 	moveq	r8, #225	; 0xe1
        25e058:	02488b0a 	subeq	r8, r8, #10240	; 0x2800
        25e05c:	0a000006 	beq	25e07c <Init__15TExtPageTrackerSFPP15TExtPageTrackerUlN22+0x7c>
        25e060:	e1b00a06 	movs	r0, r6, lsl #20
        25e064:	01a00a04 	moveq	r0, r4, lsl #20
        25e068:	01a00a20 	moveq	r0, r0, lsr #20
        25e06c:	03300000 	teqeq	r0, #0	; 0x0
        25e070:	0a000003 	beq	25e084 <Init__15TExtPageTrackerSFPP15TExtPageTrackerUlN22+0x84>
        25e074:	e3a080ea 	mov	r8, #234	; 0xea
        25e078:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
        25e07c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        25e080:	ea000040 	b	25e188 <Init__15TExtPageTrackerSFPP15TExtPageTrackerUlN22+0x188>
        25e084:	e1a09624 	mov	r9, r4, lsr #12
        25e088:	e24dd00c 	sub	sp, sp, #12	; 0xc
        25e08c:	eb04b2a0 	bl	38ab14 <C$$dtorvec$$Limit+0x1a0>
        25e090:	e0691189 	rsb	r1, r9, r9, lsl #3
        25e094:	e0800101 	add	r0, r0, r1, lsl #2
        25e098:	eb65e2b2 	bl	1bd6b68 <$malloc>
        25e09c:	e1b07000 	movs	r7, r0
        25e0a0:	059f80e8 	ldreq	r8, [pc, #e8]	; 25e190 <Init__15TExtPageTrackerSFPP15TExtPageTrackerUlN22+0x190>
        25e0a4:	0a000037 	beq	25e188 <Init__15TExtPageTrackerSFPP15TExtPageTrackerUlN22+0x188>
        25e0a8:	e3a00001 	mov	r0, #1	; 0x1
        25e0ac:	e5c70000 	strb	r0, [r7]
        25e0b0:	e5875004 	str	r5, [r7, #4]	; fField4
        25e0b4:	e3a05000 	mov	r5, #0	; 0x0
        25e0b8:	e5c75001 	strb	r5, [r7, #1]	; fField1
        25e0bc:	e1a0000d 	mov	r0, sp
        25e0c0:	eb65b96d 	bl	1bcc67c <TDoubleQItem::$__ct(void)>
        25e0c4:	e2871008 	add	r1, r7, #8	; 0x8
        25e0c8:	e89d5008 	ldmia	sp, {r3, ip, lr}
        25e0cc:	e8815008 	stmia	r1, {r3, ip, lr}
        25e0d0:	eb04b275 	bl	38aaac <C$$dtorvec$$Limit+0x138>
        25e0d4:	e1a01000 	mov	r1, r0
        25e0d8:	e2870014 	add	r0, r7, #20	; 0x14
        25e0dc:	eb627b4d 	bl	1afce18 <TSingleQContainer::$Init(unsigned long)>
        25e0e0:	e287701c 	add	r7, r7, #28	; 0x1c
        25e0e4:	e8870220 	stmia	r7, {r5, r9}
        25e0e8:	e247701c 	sub	r7, r7, #28	; 0x1c
        25e0ec:	e5ba0010 	ldr	r0, [sl, #16]!
        25e0f0:	e1a00620 	mov	r0, r0, lsr #12
        25e0f4:	e0865600 	add	r5, r6, r0, lsl #12
        25e0f8:	e5875024 	str	r5, [r7, #36]	; fField36
        25e0fc:	e0850004 	add	r0, r5, r4
        25e100:	e3a04000 	mov	r4, #0	; 0x0
        25e104:	e3590000 	cmp	r9, #0	; 0x0
        25e108:	e5870028 	str	r0, [r7, #40]	; fField40
        25e10c:	9a00001b 	bls	25e180 <Init__15TExtPageTrackerSFPP15TExtPageTrackerUlN22+0x180>
        25e110:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        25e114:	e1a0000d 	mov	r0, sp
        25e118:	eb6245ad 	bl	1aef7d4 <TLittlePhys::$__ct(void)>
        25e11c:	e0640184 	rsb	r0, r4, r4, lsl #3
        25e120:	e0870100 	add	r0, r7, r0, lsl #2
        25e124:	e280002c 	add	r0, r0, #44	; 0x2c
        25e128:	e1a06000 	mov	r6, r0
        25e12c:	e1a0e00d 	mov	lr, sp
        25e130:	e8be100e 	ldmia	lr!, {r1, r2, r3, ip}
        25e134:	e8a0100e 	stmia	r0!, {r1, r2, r3, ip}
        25e138:	e89e100c 	ldmia	lr, {r2, r3, ip}
        25e13c:	e880100c 	stmia	r0, {r2, r3, ip}
        25e140:	e3a03001 	mov	r3, #1	; 0x1
        25e144:	e92d0008 	stmdb	sp!, {r3}
        25e148:	e1a00006 	mov	r0, r6
        25e14c:	e1a01005 	mov	r1, r5
        25e150:	e3a03000 	mov	r3, #0	; 0x0
        25e154:	e3a02a01 	mov	r2, #4096	; 0x1000
        25e158:	eb627b36 	bl	1afce38 <TPhys::$Init(unsigned long, unsigned long, unsigned char, unsigned char)>
        25e15c:	e28dd004 	add	sp, sp, #4	; 0x4
        25e160:	e1a01006 	mov	r1, r6
        25e164:	e1a00007 	mov	r0, r7
        25e168:	eb628fe5 	bl	1b02104 <TExtPageTracker::$Put(TLittlePhys *)>
        25e16c:	e2855a01 	add	r5, r5, #4096	; 0x1000
        25e170:	e28dd01c 	add	sp, sp, #28	; 0x1c
        25e174:	e2844001 	add	r4, r4, #1	; 0x1
        25e178:	e1540009 	cmp	r4, r9
        25e17c:	3affffe3 	bcc	25e110 <Init__15TExtPageTrackerSFPP15TExtPageTrackerUlN22+0x110>
        25e180:	e51b0038 	ldr	r0, [fp, -#56]
        25e184:	e5807000 	str	r7, [r0]
        25e188:	e1a00008 	mov	r0, r8
        25e18c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        25e190:	ffffd8e7 	swinv	0x00ffd8e7
    */
}

/**
 * Symbol: TExtPageTracker::Put(TLittlePhys *)
 * Address: 0025e194
 */
TExtPageTracker::Put(TLittlePhys *) {
    /*
        25e194:	e1a0c00d 	mov	ip, sp
        25e198:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25e19c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25e1a0:	e1a04000 	mov	r4, r0
        25e1a4:	e1a05001 	mov	r5, r1
        25e1a8:	e5910010 	ldr	r0, [r1, #16]
        25e1ac:	e1a00620 	mov	r0, r0, lsr #12
        25e1b0:	e1a00600 	mov	r0, r0, lsl #12
        25e1b4:	e5942024 	ldr	r2, [r4, #36]	; fField36
        25e1b8:	e1500002 	cmp	r0, r2
        25e1bc:	3a00000e 	bcc	25e1fc <TExtPageTracker::Put(TLittlePhys *)+0x68>
        25e1c0:	e5941028 	ldr	r1, [r4, #40]	; fField40
        25e1c4:	e1500001 	cmp	r0, r1
        25e1c8:	2a00000b 	bcs	25e1fc <TExtPageTracker::Put(TLittlePhys *)+0x68>
        25e1cc:	eb04d23b 	bl	392ac0 <EnterAtomic>
        25e1d0:	e1a00005 	mov	r0, r5
        25e1d4:	eb04b250 	bl	38ab1c <C$$dtorvec$$Limit+0x1a8>
        25e1d8:	e2840014 	add	r0, r4, #20	; 0x14
        25e1dc:	e1a01005 	mov	r1, r5
        25e1e0:	eb624dbb 	bl	1af18d4 <TSingleQContainer::$Add(void *)>
        25e1e4:	e594001c 	ldr	r0, [r4, #28]	; fField28
        25e1e8:	e2800001 	add	r0, r0, #1	; 0x1
        25e1ec:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        25e1f0:	eb04d249 	bl	392b1c <ExitAtomic>
        25e1f4:	e3a00001 	mov	r0, #1	; 0x1
        25e1f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        25e1fc:	e3a00000 	mov	r0, #0	; 0x0
        25e200:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TExtPageTracker::Take(void)
 * Address: 0025e204
 */
TExtPageTracker::Take(void) {
    /*
        25e204:	e1a0c00d 	mov	ip, sp
        25e208:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25e20c:	e24cb004 	sub	fp, ip, #4	; 0x4
        25e210:	e1a04000 	mov	r4, r0
        25e214:	e3a05000 	mov	r5, #0	; 0x0
        25e218:	eb04d228 	bl	392ac0 <EnterAtomic>
        25e21c:	e5d40000 	ldrb	r0, [r4]
        25e220:	e3300000 	teq	r0, #0	; 0x0
        25e224:	0a00000a 	beq	25e254 <TExtPageTracker::Take(void)+0x50>
        25e228:	e2840014 	add	r0, r4, #20	; 0x14
        25e22c:	e1a06000 	mov	r6, r0
        25e230:	eb628b99 	bl	1b0109c <TSingleQContainer::$Peek(void)>
        25e234:	e3300000 	teq	r0, #0	; 0x0
        25e238:	0a000005 	beq	25e254 <TExtPageTracker::Take(void)+0x50>
        25e23c:	e594001c 	ldr	r0, [r4, #28]	; fField28
        25e240:	e2400001 	sub	r0, r0, #1	; 0x1
        25e244:	e5a4001c 	str	r0, [r4, #28]!	; fField28
        25e248:	e1a00006 	mov	r0, r6
        25e24c:	eb6293e5 	bl	1b031e8 <TSingleQContainer::$Remove(void)>
        25e250:	e1a05000 	mov	r5, r0
        25e254:	eb04d230 	bl	392b1c <ExitAtomic>
        25e258:	e1a00005 	mov	r0, r5
        25e25c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TExtPageTracker::RemoveReferences(unsigned long, unsigned char *)
 * Address: 0025e260
 */
TExtPageTracker::RemoveReferences(unsigned long, unsigned char *) {
    /*
        25e260:	e1a0c00d 	mov	ip, sp
        25e264:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25e268:	e24cb004 	sub	fp, ip, #4	; 0x4
        25e26c:	e1a04000 	mov	r4, r0
        25e270:	e1a05002 	mov	r5, r2
        25e274:	e3a00000 	mov	r0, #0	; 0x0
        25e278:	e5c20000 	strb	r0, [r2]
        25e27c:	e5942004 	ldr	r2, [r4, #4]	; fField4
        25e280:	e1320001 	teq	r2, r1
        25e284:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        25e288:	e5d41000 	ldrb	r1, [r4]
        25e28c:	e3a06001 	mov	r6, #1	; 0x1
        25e290:	e3310000 	teq	r1, #0	; 0x0
        25e294:	0a000008 	beq	25e2bc <TExtPageTracker::RemoveReferences(unsigned long, unsigned char *)+0x5c>
        25e298:	e5c40000 	strb	r0, [r4]
        25e29c:	e5c46001 	strb	r6, [r4, #1]	; fField1
        25e2a0:	eb04d85a 	bl	394410 <IsSuperMode>
        25e2a4:	e3300000 	teq	r0, #0	; 0x0
        25e2a8:	1a000002 	bne	25e2b8 <TExtPageTracker::RemoveReferences(unsigned long, unsigned char *)+0x58>
        25e2ac:	e1a00004 	mov	r0, r4
        25e2b0:	eb000003 	bl	25e2c4 <TExtPageTracker::DoDeferral(void)>
        25e2b4:	ea000000 	b	25e2bc <TExtPageTracker::RemoveReferences(unsigned long, unsigned char *)+0x5c>
        25e2b8:	e5c56000 	strb	r6, [r5]
        25e2bc:	e1a00006 	mov	r0, r6
        25e2c0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TExtPageTracker::DoDeferral(void)
 * Address: 0025e2c4
 */
TExtPageTracker::DoDeferral(void) {
    /*
        25e2c4:	e1a0c00d 	mov	ip, sp
        25e2c8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        25e2cc:	e24cb004 	sub	fp, ip, #4	; 0x4
        25e2d0:	e1a04000 	mov	r4, r0
        25e2d4:	e5d00001 	ldrb	r0, [r0, #1]	; fField1
        25e2d8:	e3300000 	teq	r0, #0	; 0x0
        25e2dc:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        25e2e0:	e2841024 	add	r1, r4, #36	; 0x24
        25e2e4:	e8910003 	ldmia	r1, {r0, r1}
        25e2e8:	e0411000 	sub	r1, r1, r0
        25e2ec:	ebf9ed43 	bl	d9800 <RemovePMappings__FUlT1>
        25e2f0:	e3a05000 	mov	r5, #0	; 0x0
        25e2f4:	e5940020 	ldr	r0, [r4, #32]	; fField32
        25e2f8:	e3500000 	cmp	r0, #0	; 0x0
        25e2fc:	9a00000a 	bls	25e32c <TExtPageTracker::DoDeferral(void)+0x68>
        25e300:	e59f6030 	ldr	r6, [pc, #30]	; 25e338 <TExtPageTracker::DoDeferral(void)+0x74>
        25e304:	e0650185 	rsb	r0, r5, r5, lsl #3
        25e308:	e0840100 	add	r0, r4, r0, lsl #2
        25e30c:	e590002c 	ldr	r0, [r0, #44]
        25e310:	e1b01000 	movs	r1, r0
        25e314:	15960000 	ldrne	r0, [r6]
        25e318:	1b6293ad 	blne	1b031d4 <TObjectTable::$Remove(unsigned long)>
        25e31c:	e2855001 	add	r5, r5, #1	; 0x1
        25e320:	e5940020 	ldr	r0, [r4, #32]	; fField32
        25e324:	e1500005 	cmp	r0, r5
        25e328:	8afffff5 	bhi	25e304 <TExtPageTracker::DoDeferral(void)+0x40>
        25e32c:	e3a00000 	mov	r0, #0	; 0x0
        25e330:	e5c40001 	strb	r0, [r4, #1]	; fField1
        25e334:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        25e338:	0c101164 	ldfeqs	f1, [r0], -#400
    */
}

