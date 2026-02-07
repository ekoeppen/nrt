#include "include/TTaskSafeRingBuffer.h"

/**
 * Symbol: TTaskSafeRingBuffer::__ct(void)
 * Address: 00250ec8
 */
TTaskSafeRingBuffer::TTaskSafeRingBuffer(void) {
    /*
        250ec8:	e1a0c00d 	mov	ip, sp
        250ecc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        250ed0:	e24cb004 	sub	fp, ip, #4	; 0x4
        250ed4:	e1b04000 	movs	r4, r0
        250ed8:	1a000003 	bne	250eec <TTaskSafeRingBuffer::__ct(void)+0x24>
        250edc:	e3a00034 	mov	r0, #52	; 0x34
        250ee0:	eb65f614 	bl	1bce738 <$__nw(unsigned int)>
        250ee4:	e1b04000 	movs	r4, r0
        250ee8:	0a000011 	beq	250f34 <TTaskSafeRingBuffer::__ct(void)+0x6c>
        250eec:	e1a00004 	mov	r0, r4
        250ef0:	eb664cc6 	bl	1be4210 <CBaseRingBuffer::$__ct(void)>
        250ef4:	e59f0040 	ldr	r0, [pc, #40]	; 250f3c <TTaskSafeRingBuffer::__ct(void)+0x74>	; fField40
        250ef8:	e5840000 	str	r0, [r4]
        250efc:	e3a00000 	mov	r0, #0	; 0x0
        250f00:	e584000c 	str	r0, [r4, #12]	; fField12
        250f04:	e5840004 	str	r0, [r4, #4]	; fField4
        250f08:	e5840008 	str	r0, [r4, #8]	; fField8
        250f0c:	e5840010 	str	r0, [r4, #16]	; fField16
        250f10:	e5840014 	str	r0, [r4, #20]	; fField20
        250f14:	e5840018 	str	r0, [r4, #24]	; fField24
        250f18:	e584001c 	str	r0, [r4, #28]	; fField28
        250f1c:	e5c40030 	strb	r0, [r4, #48]	; fField48
        250f20:	e5840028 	str	r0, [r4, #40]	; fField40
        250f24:	e584002c 	str	r0, [r4, #44]	; fField44
        250f28:	e5c40031 	strb	r0, [r4, #49]	; fField49
        250f2c:	e5840020 	str	r0, [r4, #32]	; fField32
        250f30:	e5840024 	str	r0, [r4, #36]	; fField36
        250f34:	e1a00004 	mov	r0, r4
        250f38:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        250f3c:	0001eee4 	andeq	lr, r1, r4, ror #29
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::__dt(void)
 * Address: 00250f40
 */
TTaskSafeRingBuffer::~TTaskSafeRingBuffer(void) {
    /*
        250f40:	e1a0c00d 	mov	ip, sp
        250f44:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        250f48:	e24cb004 	sub	fp, ip, #4	; 0x4
        250f4c:	e1a04000 	mov	r4, r0
        250f50:	e1a05001 	mov	r5, r1
        250f54:	e59f0054 	ldr	r0, [pc, #54]	; 250fb0 <TTaskSafeRingBuffer::__dt(void)+0x70>
        250f58:	e5840000 	str	r0, [r4]
        250f5c:	e5d40030 	ldrb	r0, [r4, #48]	; fField48
        250f60:	e3300000 	teq	r0, #0	; 0x0
        250f64:	15940004 	ldrne	r0, [r4, #4]	; fField4
        250f68:	13300000 	teqne	r0, #0	; 0x0
        250f6c:	1b65f1db 	blne	1bcd6e0 <$__dl(void *)>
        250f70:	e594001c 	ldr	r0, [r4, #28]	; fField28
        250f74:	e3300000 	teq	r0, #0	; 0x0
        250f78:	13a01001 	movne	r1, #1	; 0x1
        250f7c:	1b65f5e7 	blne	1bce720 <TULockingSemaphore::$__dt(void)>
        250f80:	e5940018 	ldr	r0, [r4, #24]	; fField24
        250f84:	e3300000 	teq	r0, #0	; 0x0
        250f88:	13a01001 	movne	r1, #1	; 0x1
        250f8c:	1b65f5e3 	blne	1bce720 <TULockingSemaphore::$__dt(void)>
        250f90:	e1a00004 	mov	r0, r4
        250f94:	e3a01000 	mov	r1, #0	; 0x0
        250f98:	eb664cb5 	bl	1be4274 <CBaseRingBuffer::$__dt(void)>
        250f9c:	e3150001 	tst	r5, #1	; 0x1
        250fa0:	11a00004 	movne	r0, r4
        250fa4:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        250fa8:	1a65f1cc 	bne	1bcd6e0 <$__dl(void *)>
        250fac:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        250fb0:	0001eee4 	andeq	lr, r1, r4, ror #29
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::Getn(unsigned char *, long)
 * Address: 00250fb4
 */
TTaskSafeRingBuffer::Getn(unsigned char *, long) {
    /*
        250fb4:	e1a0c00d 	mov	ip, sp
        250fb8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        250fbc:	e24cb004 	sub	fp, ip, #4	; 0x4
        250fc0:	e1a04000 	mov	r4, r0
        250fc4:	e1a06001 	mov	r6, r1
        250fc8:	e1a05002 	mov	r5, r2
        250fcc:	eb656d92 	bl	1bac61c <TTaskSafeRingBuffer::$CheckGetSignal(void)>
        250fd0:	e52d5004 	str	r5, [sp, -#4]!	; fField4
        250fd4:	e1a0200d 	mov	r2, sp
        250fd8:	e1a01006 	mov	r1, r6
        250fdc:	e1a00004 	mov	r0, r4
        250fe0:	e5943000 	ldr	r3, [r4]
        250fe4:	e1a0e00f 	mov	lr, pc
        250fe8:	e283f018 	add	pc, r3, #24	; 0x18
        250fec:	e49d0004 	ldr	r0, [sp], #4	; fField4
        250ff0:	e0450000 	sub	r0, r5, r0
        250ff4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::GetnCompletely(unsigned char *, long, unsigned long, unsigned long)
 * Address: 00250ff8
 */
TTaskSafeRingBuffer::GetnCompletely(unsigned char *, long, unsigned long, unsigned long) {
    /*
        250ff8:	e1a0c00d 	mov	ip, sp
        250ffc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        251000:	e24cb004 	sub	fp, ip, #4	; 0x4
        251004:	e1a04000 	mov	r4, r0
        251008:	e1a07001 	mov	r7, r1
        25100c:	e1a05002 	mov	r5, r2
        251010:	e1a06003 	mov	r6, r3
        251014:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        251018:	e24dd014 	sub	sp, sp, #20	; 0x14
        25101c:	e1a0100a 	mov	r1, sl
        251020:	e1a0000d 	mov	r0, sp
        251024:	eb663399 	bl	1bdde90 <$TimeFromNow>
        251028:	e28d000c 	add	r0, sp, #12	; 0xc
        25102c:	e89d5000 	ldmia	sp, {ip, lr}
        251030:	e8805000 	stmia	r0, {ip, lr}
        251034:	e3a08000 	mov	r8, #0	; 0x0
        251038:	e58d5008 	str	r5, [sp, #8]	; fField8
        25103c:	e59f908c 	ldr	r9, [pc, #8c]	; 2510d0 <TTaskSafeRingBuffer::GetnCompletely(unsigned char *, long, unsigned long, unsigned long)+0xd8>	; fField8
        251040:	e3350000 	teq	r5, #0	; 0x0
        251044:	0a000020 	beq	2510cc <TTaskSafeRingBuffer::GetnCompletely(unsigned char *, long, unsigned long, unsigned long)+0xd4>
        251048:	e1a00004 	mov	r0, r4
        25104c:	eb656d72 	bl	1bac61c <TTaskSafeRingBuffer::$CheckGetSignal(void)>
        251050:	e0871008 	add	r1, r7, r8
        251054:	e28d2008 	add	r2, sp, #8	; 0x8
        251058:	e1a00004 	mov	r0, r4
        25105c:	e5943000 	ldr	r3, [r4]
        251060:	e1a0e00f 	mov	lr, pc
        251064:	e283f018 	add	pc, r3, #24	; 0x18
        251068:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        25106c:	e3300000 	teq	r0, #0	; 0x0
        251070:	0a000015 	beq	2510cc <TTaskSafeRingBuffer::GetnCompletely(unsigned char *, long, unsigned long, unsigned long)+0xd4>
        251074:	e0458000 	sub	r8, r5, r0
        251078:	e1a01006 	mov	r1, r6
        25107c:	e1a00004 	mov	r0, r4
        251080:	eb6575a5 	bl	1bae71c <TTaskSafeRingBuffer::$Pause(unsigned long)>
        251084:	e24dd008 	sub	sp, sp, #8	; 0x8
        251088:	e33a0000 	teq	sl, #0	; 0x0
        25108c:	0a00000a 	beq	2510bc <TTaskSafeRingBuffer::GetnCompletely(unsigned char *, long, unsigned long, unsigned long)+0xc4>
        251090:	e1a0000d 	mov	r0, sp
        251094:	eb660a4f 	bl	1bd39d8 <$GetGlobalTime>
        251098:	e28d1014 	add	r1, sp, #20	; 0x14
        25109c:	e1a0000d 	mov	r0, sp
        2510a0:	eb663ff8 	bl	1be1088 <$CompCompare>
        2510a4:	e3500000 	cmp	r0, #0	; 0x0
        2510a8:	da000003 	ble	2510bc <TTaskSafeRingBuffer::GetnCompletely(unsigned char *, long, unsigned long, unsigned long)+0xc4>
        2510ac:	e3a02000 	mov	r2, #0	; 0x0
        2510b0:	e5990000 	ldr	r0, [r9]
        2510b4:	e59f1018 	ldr	r1, [pc, #18]	; 2510d4 <TTaskSafeRingBuffer::GetnCompletely(unsigned char *, long, unsigned long, unsigned long)+0xdc>
        2510b8:	eb664837 	bl	1be319c <$Throw>
        2510bc:	e28dd008 	add	sp, sp, #8	; 0x8
        2510c0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2510c4:	e3300000 	teq	r0, #0	; 0x0
        2510c8:	1affffde 	bne	251048 <TTaskSafeRingBuffer::GetnCompletely(unsigned char *, long, unsigned long, unsigned long)+0x50>
        2510cc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        2510d0:	00371324 	eoreqs	r1, r7, r4, lsr #6
        2510d4:	ffffd8db 	swinv	0x00ffd8db
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::CopyOut(unsigned char *, long &)
 * Address: 002510d8
 */
TTaskSafeRingBuffer::CopyOut(unsigned char *, long &) {
    /*
        2510d8:	e1a0c00d 	mov	ip, sp
        2510dc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2510e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2510e4:	e1a04000 	mov	r4, r0
        2510e8:	e1a06001 	mov	r6, r1
        2510ec:	e1a05002 	mov	r5, r2
        2510f0:	e24dd010 	sub	sp, sp, #16	; 0x10
        2510f4:	e3a07000 	mov	r7, #0	; 0x0
        2510f8:	e5920000 	ldr	r0, [r2]
        2510fc:	e3300000 	teq	r0, #0	; 0x0
        251100:	0a000042 	beq	251210 <TTaskSafeRingBuffer::CopyOut(unsigned char *, long &)+0x138>
        251104:	e1a00004 	mov	r0, r4
        251108:	eb65693a 	bl	1bab5f8 <TTaskSafeRingBuffer::$Acquire(void)>
        25110c:	e1a0300d 	mov	r3, sp
        251110:	e92d0008 	stmdb	sp!, {r3}
        251114:	e28d300c 	add	r3, sp, #12	; 0xc
        251118:	e28d2008 	add	r2, sp, #8	; 0x8
        25111c:	e28d1010 	add	r1, sp, #16	; 0x10
        251120:	e1a00004 	mov	r0, r4
        251124:	e594c000 	ldr	ip, [r4]
        251128:	e1a0e00f 	mov	lr, pc
        25112c:	e28cf050 	add	pc, ip, #80	; 0x50
        251130:	e28dd004 	add	sp, sp, #4	; 0x4
        251134:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        251138:	e3300000 	teq	r0, #0	; 0x0
        25113c:	0a000017 	beq	2511a0 <TTaskSafeRingBuffer::CopyOut(unsigned char *, long &)+0xc8>
        251140:	e59d0000 	ldr	r0, [sp]
        251144:	e3500000 	cmp	r0, #0	; 0x0
        251148:	da000014 	ble	2511a0 <TTaskSafeRingBuffer::CopyOut(unsigned char *, long &)+0xc8>
        25114c:	e5951000 	ldr	r1, [r5]
        251150:	e1510000 	cmp	r1, r0
        251154:	a1a02000 	movge	r2, r0
        251158:	b1a02001 	movlt	r2, r1
        25115c:	e1a01006 	mov	r1, r6
        251160:	e58d2000 	str	r2, [sp]
        251164:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        251168:	eb663779 	bl	1bdef54 <$BlockMove>
        25116c:	e59d0000 	ldr	r0, [sp]
        251170:	e0866000 	add	r6, r6, r0
        251174:	e5952000 	ldr	r2, [r5]
        251178:	e0420000 	sub	r0, r2, r0
        25117c:	e5850000 	str	r0, [r5]
        251180:	e5941014 	ldr	r1, [r4, #20]	; fField20
        251184:	e59d0000 	ldr	r0, [sp]
        251188:	e0810000 	add	r0, r1, r0
        25118c:	e5840014 	str	r0, [r4, #20]	; fField20
        251190:	e5941008 	ldr	r1, [r4, #8]	; fField8
        251194:	e1300001 	teq	r0, r1
        251198:	05940004 	ldreq	r0, [r4, #4]	; fField4
        25119c:	05840014 	streq	r0, [r4, #20]	; fField20
        2511a0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2511a4:	e3300000 	teq	r0, #0	; 0x0
        2511a8:	0a000012 	beq	2511f8 <TTaskSafeRingBuffer::CopyOut(unsigned char *, long &)+0x120>
        2511ac:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        2511b0:	e3510000 	cmp	r1, #0	; 0x0
        2511b4:	da00000f 	ble	2511f8 <TTaskSafeRingBuffer::CopyOut(unsigned char *, long &)+0x120>
        2511b8:	e5950000 	ldr	r0, [r5]
        2511bc:	e1500001 	cmp	r0, r1
        2511c0:	a1a02001 	movge	r2, r1
        2511c4:	b1a02000 	movlt	r2, r0
        2511c8:	e1a01006 	mov	r1, r6
        2511cc:	e58d2004 	str	r2, [sp, #4]	; fField4
        2511d0:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        2511d4:	eb66375e 	bl	1bdef54 <$BlockMove>
        2511d8:	e5951000 	ldr	r1, [r5]
        2511dc:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2511e0:	e0410000 	sub	r0, r1, r0
        2511e4:	e5850000 	str	r0, [r5]
        2511e8:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2511ec:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        2511f0:	e0810000 	add	r0, r1, r0
        2511f4:	e5840014 	str	r0, [r4, #20]	; fField20
        2511f8:	e2841010 	add	r1, r4, #16	; 0x10
        2511fc:	e8910003 	ldmia	r1, {r0, r1}
        251200:	e1300001 	teq	r0, r1
        251204:	03e07000 	mvneq	r7, #0	; 0x0
        251208:	e1a00004 	mov	r0, r4
        25120c:	eb657554 	bl	1bae764 <TTaskSafeRingBuffer::$Release(void)>
        251210:	e1a00007 	mov	r0, r7
        251214:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::Put(int)
 * Address: 00251218
 */
TTaskSafeRingBuffer::Put(int) {
    /*
        251218:	e1a0c00d 	mov	ip, sp
        25121c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        251220:	e24cb004 	sub	fp, ip, #4	; 0x4
        251224:	e1a04000 	mov	r4, r0
        251228:	e1a05001 	mov	r5, r1
        25122c:	eb656cfb 	bl	1bac620 <TTaskSafeRingBuffer::$CheckPutSignal(void)>
        251230:	e1a06005 	mov	r6, r5
        251234:	e1a00004 	mov	r0, r4
        251238:	eb6568ee 	bl	1bab5f8 <TTaskSafeRingBuffer::$Acquire(void)>
        25123c:	e1a00004 	mov	r0, r4
        251240:	e5941000 	ldr	r1, [r4]
        251244:	e1a0e00f 	mov	lr, pc
        251248:	e281f034 	add	pc, r1, #52	; 0x34
        25124c:	e3300000 	teq	r0, #0	; 0x0
        251250:	13e06000 	mvnne	r6, #0	; 0x0
        251254:	1a000006 	bne	251274 <TTaskSafeRingBuffer::Put(int)+0x5c>
        251258:	e5940010 	ldr	r0, [r4, #16]	; fField16
        25125c:	e4c05001 	strb	r5, [r0], #1
        251260:	e5840010 	str	r0, [r4, #16]	; fField16
        251264:	e5941008 	ldr	r1, [r4, #8]	; fField8
        251268:	e1300001 	teq	r0, r1
        25126c:	05940004 	ldreq	r0, [r4, #4]	; fField4
        251270:	05840010 	streq	r0, [r4, #16]	; fField16
        251274:	e1a00004 	mov	r0, r4
        251278:	eb657539 	bl	1bae764 <TTaskSafeRingBuffer::$Release(void)>
        25127c:	e1a00006 	mov	r0, r6
        251280:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::PutCompletely(int, unsigned long, unsigned long)
 * Address: 00251284
 */
TTaskSafeRingBuffer::PutCompletely(int, unsigned long, unsigned long) {
    /*
        251284:	e1a0c00d 	mov	ip, sp
        251288:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        25128c:	e24cb004 	sub	fp, ip, #4	; 0x4
        251290:	e1a04000 	mov	r4, r0
        251294:	e1a07001 	mov	r7, r1
        251298:	e1a06002 	mov	r6, r2
        25129c:	e1a05003 	mov	r5, r3
        2512a0:	eb656cde 	bl	1bac620 <TTaskSafeRingBuffer::$CheckPutSignal(void)>
        2512a4:	e24dd010 	sub	sp, sp, #16	; 0x10
        2512a8:	e1a01005 	mov	r1, r5
        2512ac:	e1a0000d 	mov	r0, sp
        2512b0:	eb6632f6 	bl	1bdde90 <$TimeFromNow>
        2512b4:	e28d0008 	add	r0, sp, #8	; 0x8
        2512b8:	e89d5000 	ldmia	sp, {ip, lr}
        2512bc:	e8805000 	stmia	r0, {ip, lr}
        2512c0:	e1a01007 	mov	r1, r7
        2512c4:	e1a00004 	mov	r0, r4
        2512c8:	e5942000 	ldr	r2, [r4]
        2512cc:	e1a0e00f 	mov	lr, pc
        2512d0:	e282f01c 	add	pc, r2, #28	; 0x1c
        2512d4:	e3700001 	cmn	r0, #1	; 0x1
        2512d8:	1a000015 	bne	251334 <TTaskSafeRingBuffer::PutCompletely(int, unsigned long, unsigned long)+0xb0>
        2512dc:	e1a01006 	mov	r1, r6
        2512e0:	e1a00004 	mov	r0, r4
        2512e4:	eb65750c 	bl	1bae71c <TTaskSafeRingBuffer::$Pause(unsigned long)>
        2512e8:	e24dd008 	sub	sp, sp, #8	; 0x8
        2512ec:	e3350000 	teq	r5, #0	; 0x0
        2512f0:	0a00000b 	beq	251324 <TTaskSafeRingBuffer::PutCompletely(int, unsigned long, unsigned long)+0xa0>
        2512f4:	e1a0000d 	mov	r0, sp
        2512f8:	eb6609b6 	bl	1bd39d8 <$GetGlobalTime>
        2512fc:	e28d1010 	add	r1, sp, #16	; 0x10
        251300:	e1a0000d 	mov	r0, sp
        251304:	eb663f5f 	bl	1be1088 <$CompCompare>
        251308:	e3500000 	cmp	r0, #0	; 0x0
        25130c:	da000004 	ble	251324 <TTaskSafeRingBuffer::PutCompletely(int, unsigned long, unsigned long)+0xa0>
        251310:	e59f0014 	ldr	r0, [pc, #14]	; 25132c <TTaskSafeRingBuffer::PutCompletely(int, unsigned long, unsigned long)+0xa8>
        251314:	e5900000 	ldr	r0, [r0]
        251318:	e3a02000 	mov	r2, #0	; 0x0
        25131c:	e59f100c 	ldr	r1, [pc, #c]	; 251330 <TTaskSafeRingBuffer::PutCompletely(int, unsigned long, unsigned long)+0xac>
        251320:	eb66479d 	bl	1be319c <$Throw>
        251324:	e28dd008 	add	sp, sp, #8	; 0x8
        251328:	eaffffe4 	b	2512c0 <TTaskSafeRingBuffer::PutCompletely(int, unsigned long, unsigned long)+0x3c>
        25132c:	00371324 	eoreqs	r1, r7, r4, lsr #6
        251330:	ffffd8db 	swinv	0x00ffd8db
        251334:	0affffe1 	beq	2512c0 <TTaskSafeRingBuffer::PutCompletely(int, unsigned long, unsigned long)+0x3c>
        251338:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::Putn(unsigned char const *, long)
 * Address: 0025133c
 */
TTaskSafeRingBuffer::Putn(unsigned char const *, long) {
    /*
        25133c:	e1a0c00d 	mov	ip, sp
        251340:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        251344:	e24cb004 	sub	fp, ip, #4	; 0x4
        251348:	e1a04000 	mov	r4, r0
        25134c:	e1a06001 	mov	r6, r1
        251350:	e1a05002 	mov	r5, r2
        251354:	eb656cb1 	bl	1bac620 <TTaskSafeRingBuffer::$CheckPutSignal(void)>
        251358:	e52d5004 	str	r5, [sp, -#4]!	; fField4
        25135c:	e1a0200d 	mov	r2, sp
        251360:	e1a01006 	mov	r1, r6
        251364:	e1a00004 	mov	r0, r4
        251368:	e5943000 	ldr	r3, [r4]
        25136c:	e1a0e00f 	mov	lr, pc
        251370:	e283f024 	add	pc, r3, #36	; 0x24
        251374:	e49d0004 	ldr	r0, [sp], #4	; fField4
        251378:	e0450000 	sub	r0, r5, r0
        25137c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::PutnCompletely(unsigned char const *, long, unsigned long, unsigned long)
 * Address: 00251380
 */
TTaskSafeRingBuffer::PutnCompletely(unsigned char const *, long, unsigned long, unsigned long) {
    /*
        251380:	e1a0c00d 	mov	ip, sp
        251384:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        251388:	e24cb004 	sub	fp, ip, #4	; 0x4
        25138c:	e1a04000 	mov	r4, r0
        251390:	e1a07001 	mov	r7, r1
        251394:	e1a05002 	mov	r5, r2
        251398:	e1a06003 	mov	r6, r3
        25139c:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        2513a0:	e24dd014 	sub	sp, sp, #20	; 0x14
        2513a4:	e1a0100a 	mov	r1, sl
        2513a8:	e1a0000d 	mov	r0, sp
        2513ac:	eb6632b7 	bl	1bdde90 <$TimeFromNow>
        2513b0:	e28d000c 	add	r0, sp, #12	; 0xc
        2513b4:	e89d5000 	ldmia	sp, {ip, lr}
        2513b8:	e8805000 	stmia	r0, {ip, lr}
        2513bc:	e3a08000 	mov	r8, #0	; 0x0
        2513c0:	e58d5008 	str	r5, [sp, #8]	; fField8
        2513c4:	e59f908c 	ldr	r9, [pc, #8c]	; 251458 <TTaskSafeRingBuffer::PutnCompletely(unsigned char const *, long, unsigned long, unsigned long)+0xd8>	; fField8
        2513c8:	e3350000 	teq	r5, #0	; 0x0
        2513cc:	0a000020 	beq	251454 <TTaskSafeRingBuffer::PutnCompletely(unsigned char const *, long, unsigned long, unsigned long)+0xd4>
        2513d0:	e1a00004 	mov	r0, r4
        2513d4:	eb656c91 	bl	1bac620 <TTaskSafeRingBuffer::$CheckPutSignal(void)>
        2513d8:	e0871008 	add	r1, r7, r8
        2513dc:	e28d2008 	add	r2, sp, #8	; 0x8
        2513e0:	e1a00004 	mov	r0, r4
        2513e4:	e5943000 	ldr	r3, [r4]
        2513e8:	e1a0e00f 	mov	lr, pc
        2513ec:	e283f024 	add	pc, r3, #36	; 0x24
        2513f0:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2513f4:	e3300000 	teq	r0, #0	; 0x0
        2513f8:	0a000015 	beq	251454 <TTaskSafeRingBuffer::PutnCompletely(unsigned char const *, long, unsigned long, unsigned long)+0xd4>
        2513fc:	e0458000 	sub	r8, r5, r0
        251400:	e1a01006 	mov	r1, r6
        251404:	e1a00004 	mov	r0, r4
        251408:	eb6574c3 	bl	1bae71c <TTaskSafeRingBuffer::$Pause(unsigned long)>
        25140c:	e24dd008 	sub	sp, sp, #8	; 0x8
        251410:	e33a0000 	teq	sl, #0	; 0x0
        251414:	0a00000a 	beq	251444 <TTaskSafeRingBuffer::PutnCompletely(unsigned char const *, long, unsigned long, unsigned long)+0xc4>
        251418:	e1a0000d 	mov	r0, sp
        25141c:	eb66096d 	bl	1bd39d8 <$GetGlobalTime>
        251420:	e28d1014 	add	r1, sp, #20	; 0x14
        251424:	e1a0000d 	mov	r0, sp
        251428:	eb663f16 	bl	1be1088 <$CompCompare>
        25142c:	e3500000 	cmp	r0, #0	; 0x0
        251430:	da000003 	ble	251444 <TTaskSafeRingBuffer::PutnCompletely(unsigned char const *, long, unsigned long, unsigned long)+0xc4>
        251434:	e3a02000 	mov	r2, #0	; 0x0
        251438:	e5990000 	ldr	r0, [r9]
        25143c:	e59f1018 	ldr	r1, [pc, #18]	; 25145c <TTaskSafeRingBuffer::PutnCompletely(unsigned char const *, long, unsigned long, unsigned long)+0xdc>
        251440:	eb664755 	bl	1be319c <$Throw>
        251444:	e28dd008 	add	sp, sp, #8	; 0x8
        251448:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        25144c:	e3300000 	teq	r0, #0	; 0x0
        251450:	1affffde 	bne	2513d0 <TTaskSafeRingBuffer::PutnCompletely(unsigned char const *, long, unsigned long, unsigned long)+0x50>
        251454:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        251458:	00371324 	eoreqs	r1, r7, r4, lsr #6
        25145c:	ffffd8db 	swinv	0x00ffd8db
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::CopyIn(unsigned char const *, long &)
 * Address: 00251460
 */
TTaskSafeRingBuffer::CopyIn(unsigned char const *, long &) {
    /*
        251460:	e1a0c00d 	mov	ip, sp
        251464:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        251468:	e24cb004 	sub	fp, ip, #4	; 0x4
        25146c:	e1a04000 	mov	r4, r0
        251470:	e1a06001 	mov	r6, r1
        251474:	e1a05002 	mov	r5, r2
        251478:	e24dd010 	sub	sp, sp, #16	; 0x10
        25147c:	e3a07000 	mov	r7, #0	; 0x0
        251480:	e5920000 	ldr	r0, [r2]
        251484:	e3500000 	cmp	r0, #0	; 0x0
        251488:	da000046 	ble	2515a8 <TTaskSafeRingBuffer::CopyIn(unsigned char const *, long &)+0x148>
        25148c:	e1a00004 	mov	r0, r4
        251490:	eb656858 	bl	1bab5f8 <TTaskSafeRingBuffer::$Acquire(void)>
        251494:	e1a0300d 	mov	r3, sp
        251498:	e92d0008 	stmdb	sp!, {r3}
        25149c:	e28d300c 	add	r3, sp, #12	; 0xc
        2514a0:	e28d2008 	add	r2, sp, #8	; 0x8
        2514a4:	e28d1010 	add	r1, sp, #16	; 0x10
        2514a8:	e1a00004 	mov	r0, r4
        2514ac:	e594c000 	ldr	ip, [r4]
        2514b0:	e1a0e00f 	mov	lr, pc
        2514b4:	e28cf04c 	add	pc, ip, #76	; 0x4c
        2514b8:	e28dd004 	add	sp, sp, #4	; 0x4
        2514bc:	e59d0008 	ldr	r0, [sp, #8]	; fField8
        2514c0:	e3300000 	teq	r0, #0	; 0x0
        2514c4:	0a000017 	beq	251528 <TTaskSafeRingBuffer::CopyIn(unsigned char const *, long &)+0xc8>
        2514c8:	e59d1000 	ldr	r1, [sp]
        2514cc:	e3510000 	cmp	r1, #0	; 0x0
        2514d0:	da000014 	ble	251528 <TTaskSafeRingBuffer::CopyIn(unsigned char const *, long &)+0xc8>
        2514d4:	e5950000 	ldr	r0, [r5]
        2514d8:	e1500001 	cmp	r0, r1
        2514dc:	a1a02001 	movge	r2, r1
        2514e0:	b1a02000 	movlt	r2, r0
        2514e4:	e58d2000 	str	r2, [sp]
        2514e8:	e1a00006 	mov	r0, r6
        2514ec:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        2514f0:	eb663697 	bl	1bdef54 <$BlockMove>
        2514f4:	e59d0000 	ldr	r0, [sp]
        2514f8:	e0866000 	add	r6, r6, r0
        2514fc:	e5952000 	ldr	r2, [r5]
        251500:	e0420000 	sub	r0, r2, r0
        251504:	e5850000 	str	r0, [r5]
        251508:	e5941010 	ldr	r1, [r4, #16]	; fField16
        25150c:	e59d0000 	ldr	r0, [sp]
        251510:	e0810000 	add	r0, r1, r0
        251514:	e5840010 	str	r0, [r4, #16]	; fField16
        251518:	e5941008 	ldr	r1, [r4, #8]	; fField8
        25151c:	e1300001 	teq	r0, r1
        251520:	05940004 	ldreq	r0, [r4, #4]	; fField4
        251524:	05840010 	streq	r0, [r4, #16]	; fField16
        251528:	e5951000 	ldr	r1, [r5]
        25152c:	e3510000 	cmp	r1, #0	; 0x0
        251530:	da000014 	ble	251588 <TTaskSafeRingBuffer::CopyIn(unsigned char const *, long &)+0x128>
        251534:	e59d000c 	ldr	r0, [sp, #12]	; fField12
        251538:	e3300000 	teq	r0, #0	; 0x0
        25153c:	0a000011 	beq	251588 <TTaskSafeRingBuffer::CopyIn(unsigned char const *, long &)+0x128>
        251540:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        251544:	e3500000 	cmp	r0, #0	; 0x0
        251548:	da00000e 	ble	251588 <TTaskSafeRingBuffer::CopyIn(unsigned char const *, long &)+0x128>
        25154c:	e1510000 	cmp	r1, r0
        251550:	a1a02000 	movge	r2, r0
        251554:	b1a02001 	movlt	r2, r1
        251558:	e58d2004 	str	r2, [sp, #4]	; fField4
        25155c:	e1a00006 	mov	r0, r6
        251560:	e59d100c 	ldr	r1, [sp, #12]	; fField12
        251564:	eb66367a 	bl	1bdef54 <$BlockMove>
        251568:	e5951000 	ldr	r1, [r5]
        25156c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        251570:	e0410000 	sub	r0, r1, r0
        251574:	e5850000 	str	r0, [r5]
        251578:	e5941010 	ldr	r1, [r4, #16]	; fField16
        25157c:	e59d0004 	ldr	r0, [sp, #4]	; fField4
        251580:	e0810000 	add	r0, r1, r0
        251584:	e5840010 	str	r0, [r4, #16]	; fField16
        251588:	e1a00004 	mov	r0, r4
        25158c:	e5941000 	ldr	r1, [r4]
        251590:	e1a0e00f 	mov	lr, pc
        251594:	e281f034 	add	pc, r1, #52	; 0x34
        251598:	e3300000 	teq	r0, #0	; 0x0
        25159c:	13e07000 	mvnne	r7, #0	; 0x0
        2515a0:	e1a00004 	mov	r0, r4
        2515a4:	eb65746e 	bl	1bae764 <TTaskSafeRingBuffer::$Release(void)>
        2515a8:	e1a00007 	mov	r0, r7
        2515ac:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::Reset(void)
 * Address: 002515b0
 */
TTaskSafeRingBuffer::Reset(void) {
    /*
        2515b0:	e1a0c00d 	mov	ip, sp
        2515b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2515b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2515bc:	e1a04000 	mov	r4, r0
        2515c0:	eb656c16 	bl	1bac620 <TTaskSafeRingBuffer::$CheckPutSignal(void)>
        2515c4:	e1a00004 	mov	r0, r4
        2515c8:	eb656c13 	bl	1bac61c <TTaskSafeRingBuffer::$CheckGetSignal(void)>
        2515cc:	e1a00004 	mov	r0, r4
        2515d0:	eb656808 	bl	1bab5f8 <TTaskSafeRingBuffer::$Acquire(void)>
        2515d4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2515d8:	e5840014 	str	r0, [r4, #20]	; fField20
        2515dc:	e5840010 	str	r0, [r4, #16]	; fField16
        2515e0:	e1a00004 	mov	r0, r4
        2515e4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        2515e8:	ea65745d 	b	1bae764 <TTaskSafeRingBuffer::$Release(void)>
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::GetSize( const(void))
 * Address: 002515ec
 */
TTaskSafeRingBuffer::GetSize( const(void)) {
    /*
        2515ec:	e1a0c00d 	mov	ip, sp
        2515f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2515f4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2515f8:	e1a04000 	mov	r4, r0
        2515fc:	eb6567fd 	bl	1bab5f8 <TTaskSafeRingBuffer::$Acquire(void)>
        251600:	e594000c 	ldr	r0, [r4, #12]	; fField12
        251604:	e2405001 	sub	r5, r0, #1	; 0x1
        251608:	e1a00004 	mov	r0, r4
        25160c:	eb657454 	bl	1bae764 <TTaskSafeRingBuffer::$Release(void)>
        251610:	e1a00005 	mov	r0, r5
        251614:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::Init(long, unsigned char)
 * Address: 00251618
 */
TTaskSafeRingBuffer::Init(long, unsigned char) {
    /*
        251618:	e1a0c00d 	mov	ip, sp
        25161c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        251620:	e24cb004 	sub	fp, ip, #4	; 0x4
        251624:	e1a04000 	mov	r4, r0
        251628:	e20200ff 	and	r0, r2, #255	; 0xff
        25162c:	e3a02001 	mov	r2, #1	; 0x1
        251630:	e5c42030 	strb	r2, [r4, #48]	; fField48
        251634:	e5c40031 	strb	r0, [r4, #49]	; fField49
        251638:	e0810002 	add	r0, r1, r2
        25163c:	e584000c 	str	r0, [r4, #12]	; fField12
        251640:	e59f1094 	ldr	r1, [pc, #94]	; 2516dc <TTaskSafeRingBuffer::Init(long, unsigned char)+0xc4>
        251644:	eb6642bc 	bl	1be213c <$NewNamedPtr>
        251648:	e5840004 	str	r0, [r4, #4]	; fField4
        25164c:	e3300000 	teq	r0, #0	; 0x0
        251650:	0a00001f 	beq	2516d4 <TTaskSafeRingBuffer::Init(long, unsigned char)+0xbc>
        251654:	e594100c 	ldr	r1, [r4, #12]	; fField12
        251658:	e0801001 	add	r1, r0, r1
        25165c:	e5840014 	str	r0, [r4, #20]	; fField20
        251660:	e5841008 	str	r1, [r4, #8]	; fField8
        251664:	e5840010 	str	r0, [r4, #16]	; fField16
        251668:	e3a0000c 	mov	r0, #12	; 0xc
        25166c:	eb65f431 	bl	1bce738 <$__nw(unsigned int)>
        251670:	e1b05000 	movs	r5, r0
        251674:	e3a06000 	mov	r6, #0	; 0x0
        251678:	0a000004 	beq	251690 <TTaskSafeRingBuffer::Init(long, unsigned char)+0x78>
        25167c:	e5c56004 	strb	r6, [r5, #4]	; fField4
        251680:	e5856000 	str	r6, [r5]
        251684:	e2851008 	add	r1, r5, #8	; 0x8
        251688:	e1a00005 	mov	r0, r5
        25168c:	eb660ce4 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        251690:	e1b00005 	movs	r0, r5
        251694:	e5845018 	str	r5, [r4, #24]	; fField24
        251698:	0a00000d 	beq	2516d4 <TTaskSafeRingBuffer::Init(long, unsigned char)+0xbc>
        25169c:	eb661105 	bl	1bd5ab8 <TULockingSemaphore::$Init(void)>
        2516a0:	e3a0000c 	mov	r0, #12	; 0xc
        2516a4:	eb65f423 	bl	1bce738 <$__nw(unsigned int)>
        2516a8:	e1b05000 	movs	r5, r0
        2516ac:	0a000004 	beq	2516c4 <TTaskSafeRingBuffer::Init(long, unsigned char)+0xac>
        2516b0:	e5c56004 	strb	r6, [r5, #4]	; fField4
        2516b4:	e5856000 	str	r6, [r5]
        2516b8:	e2851008 	add	r1, r5, #8	; 0x8
        2516bc:	e1a00005 	mov	r0, r5
        2516c0:	eb660cd7 	bl	1bd4a24 <TUSemaphoreGroup::$GetRefCon(void **)>
        2516c4:	e1b00005 	movs	r0, r5
        2516c8:	e5a4501c 	str	r5, [r4, #28]!	; fField28
        2516cc:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        2516d0:	1a6610f8 	bne	1bd5ab8 <TULockingSemaphore::$Init(void)>
        2516d4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2516d8:	ea664290 	b	1be2120 <$MemError>
        2516dc:	74726e67 	ldrvcbt	r6, [r2], -#3687
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::IsFull( const(void))
 * Address: 002516e0
 */
TTaskSafeRingBuffer::IsFull( const(void)) {
    /*
        2516e0:	e1a0c00d 	mov	ip, sp
        2516e4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2516e8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2516ec:	e1a04000 	mov	r4, r0
        2516f0:	eb656bca 	bl	1bac620 <TTaskSafeRingBuffer::$CheckPutSignal(void)>
        2516f4:	e1a00004 	mov	r0, r4
        2516f8:	eb656bc7 	bl	1bac61c <TTaskSafeRingBuffer::$CheckGetSignal(void)>
        2516fc:	e1a00004 	mov	r0, r4
        251700:	eb6567bc 	bl	1bab5f8 <TTaskSafeRingBuffer::$Acquire(void)>
        251704:	e5940014 	ldr	r0, [r4, #20]	; fField20
        251708:	e5941004 	ldr	r1, [r4, #4]	; fField4
        25170c:	e1300001 	teq	r0, r1
        251710:	05940008 	ldreq	r0, [r4, #8]	; fField8
        251714:	e2400001 	sub	r0, r0, #1	; 0x1
        251718:	e5941010 	ldr	r1, [r4, #16]	; fField16
        25171c:	e1310000 	teq	r1, r0
        251720:	13a00000 	movne	r0, #0	; 0x0
        251724:	03a00001 	moveq	r0, #1	; 0x1
        251728:	e20050ff 	and	r5, r0, #255	; 0xff
        25172c:	e1a00004 	mov	r0, r4
        251730:	eb65740b 	bl	1bae764 <TTaskSafeRingBuffer::$Release(void)>
        251734:	e1a00005 	mov	r0, r5
        251738:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::IsEmpty( const(void))
 * Address: 0025173c
 */
TTaskSafeRingBuffer::IsEmpty( const(void)) {
    /*
        25173c:	e1a0c00d 	mov	ip, sp
        251740:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        251744:	e24cb004 	sub	fp, ip, #4	; 0x4
        251748:	e1a04000 	mov	r4, r0
        25174c:	eb656bb3 	bl	1bac620 <TTaskSafeRingBuffer::$CheckPutSignal(void)>
        251750:	e1a00004 	mov	r0, r4
        251754:	eb656bb0 	bl	1bac61c <TTaskSafeRingBuffer::$CheckGetSignal(void)>
        251758:	e1a00004 	mov	r0, r4
        25175c:	eb6567a5 	bl	1bab5f8 <TTaskSafeRingBuffer::$Acquire(void)>
        251760:	e5940014 	ldr	r0, [r4, #20]	; fField20
        251764:	e5941010 	ldr	r1, [r4, #16]	; fField16
        251768:	e1300001 	teq	r0, r1
        25176c:	13a00000 	movne	r0, #0	; 0x0
        251770:	03a00001 	moveq	r0, #1	; 0x1
        251774:	e20050ff 	and	r5, r0, #255	; 0xff
        251778:	e1a00004 	mov	r0, r4
        25177c:	eb6573f8 	bl	1bae764 <TTaskSafeRingBuffer::$Release(void)>
        251780:	e1a00005 	mov	r0, r5
        251784:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::AtEOF( const(void))
 * Address: 00251788
 */
TTaskSafeRingBuffer::AtEOF( const(void)) {
    /*
        251788:	e1a0c00d 	mov	ip, sp
        25178c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        251790:	e24cb004 	sub	fp, ip, #4	; 0x4
        251794:	e1a04000 	mov	r4, r0
        251798:	e5901000 	ldr	r1, [r0]
        25179c:	e1a0e00f 	mov	lr, pc
        2517a0:	e281f038 	add	pc, r1, #56	; 0x38
        2517a4:	e3300000 	teq	r0, #0	; 0x0
        2517a8:	1a000005 	bne	2517c4 <TTaskSafeRingBuffer::AtEOF( const(void))+0x3c>
        2517ac:	e1a00004 	mov	r0, r4
        2517b0:	e5941000 	ldr	r1, [r4]
        2517b4:	e1a0e00f 	mov	lr, pc
        2517b8:	e281f034 	add	pc, r1, #52	; 0x34
        2517bc:	e3300000 	teq	r0, #0	; 0x0
        2517c0:	0a000001 	beq	2517cc <TTaskSafeRingBuffer::AtEOF( const(void))+0x44>
        2517c4:	e3a00001 	mov	r0, #1	; 0x1
        2517c8:	ea000000 	b	2517d0 <TTaskSafeRingBuffer::AtEOF( const(void))+0x48>
        2517cc:	e3a00000 	mov	r0, #0	; 0x0
        2517d0:	e20000ff 	and	r0, r0, #255	; 0xff
        2517d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::FreeCount( const(void))
 * Address: 002517d8
 */
TTaskSafeRingBuffer::FreeCount( const(void)) {
    /*
        2517d8:	e1a0c00d 	mov	ip, sp
        2517dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2517e0:	e24cb004 	sub	fp, ip, #4	; 0x4
        2517e4:	e1a04000 	mov	r4, r0
        2517e8:	eb656b8c 	bl	1bac620 <TTaskSafeRingBuffer::$CheckPutSignal(void)>
        2517ec:	e1a00004 	mov	r0, r4
        2517f0:	eb656b89 	bl	1bac61c <TTaskSafeRingBuffer::$CheckGetSignal(void)>
        2517f4:	e1a00004 	mov	r0, r4
        2517f8:	eb65677e 	bl	1bab5f8 <TTaskSafeRingBuffer::$Acquire(void)>
        2517fc:	e2841010 	add	r1, r4, #16	; 0x10
        251800:	e8910003 	ldmia	r1, {r0, r1}
        251804:	e0412000 	sub	r2, r1, r0
        251808:	e2425001 	sub	r5, r2, #1	; 0x1
        25180c:	e1510000 	cmp	r1, r0
        251810:	9594000c 	ldrls	r0, [r4, #12]	; fField12
        251814:	90805005 	addls	r5, r0, r5
        251818:	e1a00004 	mov	r0, r4
        25181c:	eb6573d0 	bl	1bae764 <TTaskSafeRingBuffer::$Release(void)>
        251820:	e1a00005 	mov	r0, r5
        251824:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::DataCount( const(void))
 * Address: 00251828
 */
TTaskSafeRingBuffer::DataCount( const(void)) {
    /*
        251828:	e1a0c00d 	mov	ip, sp
        25182c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        251830:	e24cb004 	sub	fp, ip, #4	; 0x4
        251834:	e1a04000 	mov	r4, r0
        251838:	eb656b78 	bl	1bac620 <TTaskSafeRingBuffer::$CheckPutSignal(void)>
        25183c:	e1a00004 	mov	r0, r4
        251840:	eb656b75 	bl	1bac61c <TTaskSafeRingBuffer::$CheckGetSignal(void)>
        251844:	e1a00004 	mov	r0, r4
        251848:	eb65676a 	bl	1bab5f8 <TTaskSafeRingBuffer::$Acquire(void)>
        25184c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        251850:	e5941010 	ldr	r1, [r4, #16]	; fField16
        251854:	e0415000 	sub	r5, r1, r0
        251858:	e1510000 	cmp	r1, r0
        25185c:	3594000c 	ldrcc	r0, [r4, #12]	; fField12
        251860:	30805005 	addcc	r5, r0, r5
        251864:	e1a00004 	mov	r0, r4
        251868:	eb6573bd 	bl	1bae764 <TTaskSafeRingBuffer::$Release(void)>
        25186c:	e1a00005 	mov	r0, r5
        251870:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: ComputePutVectors__19TTaskSafeRingBufferCFRPUcRlT1T2
 * Address: 00251874
 */
void TTaskSafeRingBuffer::ComputePutVectors() {
    /*
        251874:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        251878:	e59d4014 	ldr	r4, [sp, #20]	; fField20
        25187c:	e5907014 	ldr	r7, [r0, #20]	; fField20
        251880:	e590e004 	ldr	lr, [r0, #4]	; fField4
        251884:	e137000e 	teq	r7, lr
        251888:	1247c001 	subne	ip, r7, #1	; 0x1
        25188c:	0590c008 	ldreq	ip, [r0, #8]	; fField8
        251890:	024cc001 	subeq	ip, ip, #1	; 0x1
        251894:	e3a06000 	mov	r6, #0	; 0x0
        251898:	e5905010 	ldr	r5, [r0, #16]	; fField16
        25189c:	e1350007 	teq	r5, r7
        2518a0:	1a000015 	bne	2518fc <ComputePutVectors__19TTaskSafeRingBufferCFRPUcRlT1T2+0x88>
        2518a4:	e135000e 	teq	r5, lr
        2518a8:	113e000c 	teqne	lr, ip
        2518ac:	05816000 	streq	r6, [r1]
        2518b0:	05826000 	streq	r6, [r2]
        2518b4:	0a000003 	beq	2518c8 <ComputePutVectors__19TTaskSafeRingBufferCFRPUcRlT1T2+0x54>
        2518b8:	e581e000 	str	lr, [r1]
        2518bc:	e5901004 	ldr	r1, [r0, #4]	; fField4
        2518c0:	e04c1001 	sub	r1, ip, r1
        2518c4:	e5821000 	str	r1, [r2]
        2518c8:	e5901010 	ldr	r1, [r0, #16]	; fField16
        2518cc:	e151000c 	cmp	r1, ip
        2518d0:	9a000004 	bls	2518e8 <ComputePutVectors__19TTaskSafeRingBufferCFRPUcRlT1T2+0x74>
        2518d4:	e5831000 	str	r1, [r3]
        2518d8:	e5901008 	ldr	r1, [r0, #8]	; fField8
        2518dc:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2518e0:	e0410000 	sub	r0, r1, r0
        2518e4:	ea000002 	b	2518f4 <ComputePutVectors__19TTaskSafeRingBufferCFRPUcRlT1T2+0x80>
        2518e8:	e5831000 	str	r1, [r3]
        2518ec:	e5900010 	ldr	r0, [r0, #16]	; fField16
        2518f0:	e04c0000 	sub	r0, ip, r0
        2518f4:	e5840000 	str	r0, [r4]
        2518f8:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        2518fc:	e155000c 	cmp	r5, ip
        251900:	1a000004 	bne	251918 <ComputePutVectors__19TTaskSafeRingBufferCFRPUcRlT1T2+0xa4>
        251904:	e5836000 	str	r6, [r3]
        251908:	e5816000 	str	r6, [r1]
        25190c:	e5846000 	str	r6, [r4]
        251910:	e5826000 	str	r6, [r2]
        251914:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        251918:	95816000 	strls	r6, [r1]
        25191c:	95826000 	strls	r6, [r2]
        251920:	95901010 	ldrls	r1, [r0, #16]	; fField16
        251924:	9affffef 	bls	2518e8 <ComputePutVectors__19TTaskSafeRingBufferCFRPUcRlT1T2+0x74>
        251928:	e581e000 	str	lr, [r1]
        25192c:	e5901004 	ldr	r1, [r0, #4]	; fField4
        251930:	e04c1001 	sub	r1, ip, r1
        251934:	e5821000 	str	r1, [r2]
        251938:	e5901010 	ldr	r1, [r0, #16]	; fField16
        25193c:	eaffffe4 	b	2518d4 <ComputePutVectors__19TTaskSafeRingBufferCFRPUcRlT1T2+0x60>
    */
}

/**
 * Symbol: ComputeGetVectors__19TTaskSafeRingBufferCFRPUcRlT1T2
 * Address: 00251940
 */
void TTaskSafeRingBuffer::ComputeGetVectors() {
    /*
        251940:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
        251944:	e59de014 	ldr	lr, [sp, #20]	; fField20
        251948:	e5907004 	ldr	r7, [r0, #4]	; fField4
        25194c:	e590c014 	ldr	ip, [r0, #20]	; fField20
        251950:	e13c0007 	teq	ip, r7
        251954:	124c6001 	subne	r6, ip, #1	; 0x1
        251958:	05904008 	ldreq	r4, [r0, #8]	; fField8
        25195c:	02446001 	subeq	r6, r4, #1	; 0x1
        251960:	e3a05000 	mov	r5, #0	; 0x0
        251964:	e5904010 	ldr	r4, [r0, #16]	; fField16
        251968:	e134000c 	teq	r4, ip
        25196c:	1a000004 	bne	251984 <ComputeGetVectors__19TTaskSafeRingBufferCFRPUcRlT1T2+0x44>
        251970:	e5835000 	str	r5, [r3]
        251974:	e5815000 	str	r5, [r1]
        251978:	e58e5000 	str	r5, [lr]
        25197c:	e5825000 	str	r5, [r2]
        251980:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        251984:	e1340006 	teq	r4, r6
        251988:	1a00000a 	bne	2519b8 <ComputeGetVectors__19TTaskSafeRingBufferCFRPUcRlT1T2+0x78>
        25198c:	e154000c 	cmp	r4, ip
        251990:	2a00000a 	bcs	2519c0 <ComputeGetVectors__19TTaskSafeRingBufferCFRPUcRlT1T2+0x80>
        251994:	e5817000 	str	r7, [r1]
        251998:	e5901010 	ldr	r1, [r0, #16]	; fField16
        25199c:	e590c004 	ldr	ip, [r0, #4]	; fField4
        2519a0:	e041100c 	sub	r1, r1, ip
        2519a4:	e5821000 	str	r1, [r2]
        2519a8:	e5901014 	ldr	r1, [r0, #20]	; fField20
        2519ac:	e5831000 	str	r1, [r3]
        2519b0:	e5901008 	ldr	r1, [r0, #8]	; fField8
        2519b4:	ea000006 	b	2519d4 <ComputeGetVectors__19TTaskSafeRingBufferCFRPUcRlT1T2+0x94>
        2519b8:	e15c0004 	cmp	ip, r4
        2519bc:	2a000008 	bcs	2519e4 <ComputeGetVectors__19TTaskSafeRingBufferCFRPUcRlT1T2+0xa4>
        2519c0:	e5815000 	str	r5, [r1]
        2519c4:	e5825000 	str	r5, [r2]
        2519c8:	e5901014 	ldr	r1, [r0, #20]	; fField20
        2519cc:	e5831000 	str	r1, [r3]
        2519d0:	e5901010 	ldr	r1, [r0, #16]	; fField16
        2519d4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2519d8:	e0410000 	sub	r0, r1, r0
        2519dc:	e58e0000 	str	r0, [lr]
        2519e0:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
        2519e4:	e583c000 	str	ip, [r3]
        2519e8:	e5903014 	ldr	r3, [r0, #20]	; fField20
        2519ec:	e590c008 	ldr	ip, [r0, #8]	; fField8
        2519f0:	e04c3003 	sub	r3, ip, r3
        2519f4:	e58e3000 	str	r3, [lr]
        2519f8:	e5903004 	ldr	r3, [r0, #4]	; fField4
        2519fc:	e5813000 	str	r3, [r1]
        251a00:	e5901010 	ldr	r1, [r0, #16]	; fField16
        251a04:	e5900004 	ldr	r0, [r0, #4]	; fField4
        251a08:	e0410000 	sub	r0, r1, r0
        251a0c:	e5820000 	str	r0, [r2]
        251a10:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::UpdatePutVector(long)
 * Address: 00251a14
 */
TTaskSafeRingBuffer::UpdatePutVector(long) {
    /*
        251a14:	e3a00000 	mov	r0, #0	; 0x0
        251a18:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::UpdateGetVector(long)
 * Address: 00251a1c
 */
TTaskSafeRingBuffer::UpdateGetVector(long) {
    /*
        251a1c:	e3a00000 	mov	r0, #0	; 0x0
        251a20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::Pause(unsigned long)
 * Address: 00251a24
 */
TTaskSafeRingBuffer::Pause(unsigned long) {
    /*
        251a24:	e1a0c00d 	mov	ip, sp
        251a28:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        251a2c:	e24cb004 	sub	fp, ip, #4	; 0x4
        251a30:	e1a04000 	mov	r4, r0
        251a34:	e1a05001 	mov	r5, r1
        251a38:	e5d00031 	ldrb	r0, [r0, #49]	; fField49
        251a3c:	e3300000 	teq	r0, #0	; 0x0
        251a40:	0a00000b 	beq	251a74 <TTaskSafeRingBuffer::Pause(unsigned long)+0x50>
        251a44:	eb6607e2 	bl	1bd39d4 <$GetGlobals>
        251a48:	e3a01000 	mov	r1, #0	; 0x0
        251a4c:	eb656f17 	bl	1bad6b0 <TForkWorld::$Fork(TForkWorld *)>
        251a50:	e3300000 	teq	r0, #0	; 0x0
        251a54:	0a000004 	beq	251a6c <TTaskSafeRingBuffer::Pause(unsigned long)+0x48>
        251a58:	e1a01000 	mov	r1, r0
        251a5c:	e59f0030 	ldr	r0, [pc, #30]	; 251a94 <TTaskSafeRingBuffer::Pause(unsigned long)+0x70>
        251a60:	e5900000 	ldr	r0, [r0]
        251a64:	e3a02000 	mov	r2, #0	; 0x0
        251a68:	eb6645cb 	bl	1be319c <$Throw>
        251a6c:	eb6607d8 	bl	1bd39d4 <$GetGlobals>
        251a70:	eb65733a 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
        251a74:	e1a00005 	mov	r0, r5
        251a78:	eb662ceb 	bl	1bdce2c <$Sleep(unsigned long)>
        251a7c:	e5d40031 	ldrb	r0, [r4, #49]	; fField49
        251a80:	e3300000 	teq	r0, #0	; 0x0
        251a84:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        251a88:	eb6607d1 	bl	1bd39d4 <$GetGlobals>
        251a8c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        251a90:	ea6566d7 	b	1bab5f4 <TForkWorld::$AcquireMutex(void)>
        251a94:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::Acquire(void)
 * Address: 00251a98
 */
TTaskSafeRingBuffer::Acquire(void) {
    /*
        251a98:	e1a0c00d 	mov	ip, sp
        251a9c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        251aa0:	e24cb004 	sub	fp, ip, #4	; 0x4
        251aa4:	e1a04000 	mov	r4, r0
        251aa8:	e590001c 	ldr	r0, [r0, #28]	; fField28
        251aac:	e3a01000 	mov	r1, #0	; 0x0
        251ab0:	eb65f327 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        251ab4:	e594002c 	ldr	r0, [r4, #44]	; fField44
        251ab8:	e59f5028 	ldr	r5, [pc, #28]	; 251ae8 <TTaskSafeRingBuffer::Acquire(void)+0x50>	; fField28
        251abc:	e5951000 	ldr	r1, [r5]
        251ac0:	e5911000 	ldr	r1, [r1]
        251ac4:	e1300001 	teq	r0, r1
        251ac8:	0a000007 	beq	251aec <TTaskSafeRingBuffer::Acquire(void)+0x54>
        251acc:	e594001c 	ldr	r0, [r4, #28]	; fField28
        251ad0:	eb662070 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        251ad4:	e3a01000 	mov	r1, #0	; 0x0
        251ad8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        251adc:	eb65f31c 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        251ae0:	e594001c 	ldr	r0, [r4, #28]	; fField28
        251ae4:	ea000004 	b	251afc <TTaskSafeRingBuffer::Acquire(void)+0x64>
        251ae8:	0c100ff8 	ldceq	15, cr0, [r0], -#992
        251aec:	e5940028 	ldr	r0, [r4, #40]	; fField40
        251af0:	e3300000 	teq	r0, #0	; 0x0
        251af4:	1a000005 	bne	251b10 <TTaskSafeRingBuffer::Acquire(void)+0x78>
        251af8:	e5940018 	ldr	r0, [r4, #24]	; fField24
        251afc:	e3a01000 	mov	r1, #0	; 0x0
        251b00:	eb65f313 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        251b04:	e5950000 	ldr	r0, [r5]
        251b08:	e5900000 	ldr	r0, [r0]
        251b0c:	e584002c 	str	r0, [r4, #44]	; fField44
        251b10:	e5940028 	ldr	r0, [r4, #40]	; fField40
        251b14:	e2800001 	add	r0, r0, #1	; 0x1
        251b18:	e5840028 	str	r0, [r4, #40]	; fField40
        251b1c:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        251b20:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        251b24:	ea66205b 	b	1bd9c98 <TULockingSemaphore::$Release(void)>
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::CheckGetSignal(void)
 * Address: 00251b28
 */
TTaskSafeRingBuffer::CheckGetSignal(void) {
    /*
        251b28:	e5901020 	ldr	r1, [r0, #32]	; fField32
        251b2c:	e3310000 	teq	r1, #0	; 0x0
        251b30:	01a0f00e 	moveq	pc, lr
        251b34:	e3a02000 	mov	r2, #0	; 0x0
        251b38:	e5a02020 	str	r2, [r0, #32]!	; fField32
        251b3c:	e59f0004 	ldr	r0, [pc, #4]	; 251b48 <TTaskSafeRingBuffer::CheckGetSignal(void)+0x20>	; fField4
        251b40:	e5900000 	ldr	r0, [r0]
        251b44:	ea664594 	b	1be319c <$Throw>
        251b48:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::CheckPutSignal(void)
 * Address: 00251b4c
 */
TTaskSafeRingBuffer::CheckPutSignal(void) {
    /*
        251b4c:	e5901024 	ldr	r1, [r0, #36]	; fField36
        251b50:	e3310000 	teq	r1, #0	; 0x0
        251b54:	01a0f00e 	moveq	pc, lr
        251b58:	e3a02000 	mov	r2, #0	; 0x0
        251b5c:	e5a02024 	str	r2, [r0, #36]!	; fField36
        251b60:	e59f0004 	ldr	r0, [pc, #4]	; 251b6c <TTaskSafeRingBuffer::CheckPutSignal(void)+0x20>	; fField4
        251b64:	e5900000 	ldr	r0, [r0]
        251b68:	ea66458b 	b	1be319c <$Throw>
        251b6c:	00371324 	eoreqs	r1, r7, r4, lsr #6
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::Release(void)
 * Address: 00251b70
 */
TTaskSafeRingBuffer::Release(void) {
    /*
        251b70:	e1a0c00d 	mov	ip, sp
        251b74:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        251b78:	e24cb004 	sub	fp, ip, #4	; 0x4
        251b7c:	e1a04000 	mov	r4, r0
        251b80:	e590001c 	ldr	r0, [r0, #28]	; fField28
        251b84:	e3a01000 	mov	r1, #0	; 0x0
        251b88:	eb65f2f1 	bl	1bce754 <TULockingSemaphore::$Acquire(SemFlags)>
        251b8c:	e5940028 	ldr	r0, [r4, #40]	; fField40
        251b90:	e3300001 	teq	r0, #1	; 0x1
        251b94:	1a000003 	bne	251ba8 <TTaskSafeRingBuffer::Release(void)+0x38>
        251b98:	e5940018 	ldr	r0, [r4, #24]	; fField24
        251b9c:	eb66203d 	bl	1bd9c98 <TULockingSemaphore::$Release(void)>
        251ba0:	e3a00000 	mov	r0, #0	; 0x0
        251ba4:	e584002c 	str	r0, [r4, #44]	; fField44
        251ba8:	e5940028 	ldr	r0, [r4, #40]	; fField40
        251bac:	e2400001 	sub	r0, r0, #1	; 0x1
        251bb0:	e5840028 	str	r0, [r4, #40]	; fField40
        251bb4:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        251bb8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        251bbc:	ea662035 	b	1bd9c98 <TULockingSemaphore::$Release(void)>
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::Peek(void)
 * Address: 00251bc0
 */
TTaskSafeRingBuffer::Peek(void) {
    /*
        251bc0:	e1a0c00d 	mov	ip, sp
        251bc4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        251bc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        251bcc:	e1a04000 	mov	r4, r0
        251bd0:	eb656a91 	bl	1bac61c <TTaskSafeRingBuffer::$CheckGetSignal(void)>
        251bd4:	e1a00004 	mov	r0, r4
        251bd8:	eb656686 	bl	1bab5f8 <TTaskSafeRingBuffer::$Acquire(void)>
        251bdc:	e5940014 	ldr	r0, [r4, #20]	; fField20
        251be0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        251be4:	e1300001 	teq	r0, r1
        251be8:	15d05000 	ldrneb	r5, [r0]
        251bec:	03e05000 	mvneq	r5, #0	; 0x0
        251bf0:	e1a00004 	mov	r0, r4
        251bf4:	eb6572da 	bl	1bae764 <TTaskSafeRingBuffer::$Release(void)>
        251bf8:	e1a00005 	mov	r0, r5
        251bfc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::Next(void)
 * Address: 00251c00
 */
TTaskSafeRingBuffer::Next(void) {
    /*
        251c00:	e1a0c00d 	mov	ip, sp
        251c04:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        251c08:	e24cb004 	sub	fp, ip, #4	; 0x4
        251c0c:	e1a04000 	mov	r4, r0
        251c10:	eb656a81 	bl	1bac61c <TTaskSafeRingBuffer::$CheckGetSignal(void)>
        251c14:	e1a00004 	mov	r0, r4
        251c18:	eb656676 	bl	1bab5f8 <TTaskSafeRingBuffer::$Acquire(void)>
        251c1c:	e5940014 	ldr	r0, [r4, #20]	; fField20
        251c20:	e5941010 	ldr	r1, [r4, #16]	; fField16
        251c24:	e1300001 	teq	r0, r1
        251c28:	0a000008 	beq	251c50 <TTaskSafeRingBuffer::Next(void)+0x50>
        251c2c:	e2800001 	add	r0, r0, #1	; 0x1
        251c30:	e5840014 	str	r0, [r4, #20]	; fField20
        251c34:	e5942008 	ldr	r2, [r4, #8]	; fField8
        251c38:	e1300002 	teq	r0, r2
        251c3c:	05940004 	ldreq	r0, [r4, #4]	; fField4
        251c40:	05840014 	streq	r0, [r4, #20]	; fField20
        251c44:	e5940014 	ldr	r0, [r4, #20]	; fField20
        251c48:	e1300001 	teq	r0, r1
        251c4c:	1a000001 	bne	251c58 <TTaskSafeRingBuffer::Next(void)+0x58>
        251c50:	e3e05000 	mvn	r5, #0	; 0x0
        251c54:	ea000000 	b	251c5c <TTaskSafeRingBuffer::Next(void)+0x5c>
        251c58:	e5d05000 	ldrb	r5, [r0]
        251c5c:	e1a00004 	mov	r0, r4
        251c60:	eb6572bf 	bl	1bae764 <TTaskSafeRingBuffer::$Release(void)>
        251c64:	e1a00005 	mov	r0, r5
        251c68:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::Skip(void)
 * Address: 00251c6c
 */
TTaskSafeRingBuffer::Skip(void) {
    /*
        251c6c:	e1a0c00d 	mov	ip, sp
        251c70:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        251c74:	e24cb004 	sub	fp, ip, #4	; 0x4
        251c78:	e1a04000 	mov	r4, r0
        251c7c:	eb656a66 	bl	1bac61c <TTaskSafeRingBuffer::$CheckGetSignal(void)>
        251c80:	e3a05000 	mov	r5, #0	; 0x0
        251c84:	e1a00004 	mov	r0, r4
        251c88:	eb65665a 	bl	1bab5f8 <TTaskSafeRingBuffer::$Acquire(void)>
        251c8c:	e2841010 	add	r1, r4, #16	; 0x10
        251c90:	e8910003 	ldmia	r1, {r0, r1}
        251c94:	e1310000 	teq	r1, r0
        251c98:	0a000008 	beq	251cc0 <TTaskSafeRingBuffer::Skip(void)+0x54>
        251c9c:	e2811001 	add	r1, r1, #1	; 0x1
        251ca0:	e5841014 	str	r1, [r4, #20]	; fField20
        251ca4:	e5942008 	ldr	r2, [r4, #8]	; fField8
        251ca8:	e1310002 	teq	r1, r2
        251cac:	05941004 	ldreq	r1, [r4, #4]	; fField4
        251cb0:	05841014 	streq	r1, [r4, #20]	; fField20
        251cb4:	e5941014 	ldr	r1, [r4, #20]	; fField20
        251cb8:	e1310000 	teq	r1, r0
        251cbc:	1a000000 	bne	251cc4 <TTaskSafeRingBuffer::Skip(void)+0x58>
        251cc0:	e3e05000 	mvn	r5, #0	; 0x0
        251cc4:	e1a00004 	mov	r0, r4
        251cc8:	eb6572a5 	bl	1bae764 <TTaskSafeRingBuffer::$Release(void)>
        251ccc:	e1a00005 	mov	r0, r5
        251cd0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::Get(void)
 * Address: 00251cd4
 */
TTaskSafeRingBuffer::Get(void) {
    /*
        251cd4:	e1a0c00d 	mov	ip, sp
        251cd8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        251cdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        251ce0:	e1a04000 	mov	r4, r0
        251ce4:	eb656a4c 	bl	1bac61c <TTaskSafeRingBuffer::$CheckGetSignal(void)>
        251ce8:	e1a00004 	mov	r0, r4
        251cec:	eb656641 	bl	1bab5f8 <TTaskSafeRingBuffer::$Acquire(void)>
        251cf0:	e5940014 	ldr	r0, [r4, #20]	; fField20
        251cf4:	e5941010 	ldr	r1, [r4, #16]	; fField16
        251cf8:	e1310000 	teq	r1, r0
        251cfc:	03e05000 	mvneq	r5, #0	; 0x0
        251d00:	0a000005 	beq	251d1c <TTaskSafeRingBuffer::Get(void)+0x48>
        251d04:	e4d05001 	ldrb	r5, [r0], #1
        251d08:	e5840014 	str	r0, [r4, #20]	; fField20
        251d0c:	e5941008 	ldr	r1, [r4, #8]	; fField8
        251d10:	e1300001 	teq	r0, r1
        251d14:	05940004 	ldreq	r0, [r4, #4]	; fField4
        251d18:	05840014 	streq	r0, [r4, #20]	; fField20
        251d1c:	e1a00004 	mov	r0, r4
        251d20:	eb65728f 	bl	1bae764 <TTaskSafeRingBuffer::$Release(void)>
        251d24:	e1a00005 	mov	r0, r5
        251d28:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TTaskSafeRingBuffer::GetCompletely(unsigned long, unsigned long)
 * Address: 00251d2c
 */
TTaskSafeRingBuffer::GetCompletely(unsigned long, unsigned long) {
    /*
        251d2c:	e1a0c00d 	mov	ip, sp
        251d30:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        251d34:	e24cb004 	sub	fp, ip, #4	; 0x4
        251d38:	e1a04000 	mov	r4, r0
        251d3c:	e1a06001 	mov	r6, r1
        251d40:	e1a05002 	mov	r5, r2
        251d44:	eb656a34 	bl	1bac61c <TTaskSafeRingBuffer::$CheckGetSignal(void)>
        251d48:	e24dd010 	sub	sp, sp, #16	; 0x10
        251d4c:	e1a01005 	mov	r1, r5
        251d50:	e1a0000d 	mov	r0, sp
        251d54:	eb66304d 	bl	1bdde90 <$TimeFromNow>
        251d58:	e28d1008 	add	r1, sp, #8	; 0x8
        251d5c:	e89d5000 	ldmia	sp, {ip, lr}
        251d60:	e8815000 	stmia	r1, {ip, lr}
        251d64:	e1a00004 	mov	r0, r4
        251d68:	e5941000 	ldr	r1, [r4]
        251d6c:	e1a0e00f 	mov	lr, pc
        251d70:	e281f010 	add	pc, r1, #16	; 0x10
        251d74:	e3700001 	cmn	r0, #1	; 0x1
        251d78:	1a000015 	bne	251dd4 <TTaskSafeRingBuffer::GetCompletely(unsigned long, unsigned long)+0xa8>
        251d7c:	e1a01006 	mov	r1, r6
        251d80:	e1a00004 	mov	r0, r4
        251d84:	eb657264 	bl	1bae71c <TTaskSafeRingBuffer::$Pause(unsigned long)>
        251d88:	e24dd008 	sub	sp, sp, #8	; 0x8
        251d8c:	e3350000 	teq	r5, #0	; 0x0
        251d90:	0a00000b 	beq	251dc4 <TTaskSafeRingBuffer::GetCompletely(unsigned long, unsigned long)+0x98>
        251d94:	e1a0000d 	mov	r0, sp
        251d98:	eb66070e 	bl	1bd39d8 <$GetGlobalTime>
        251d9c:	e28d1010 	add	r1, sp, #16	; 0x10
        251da0:	e1a0000d 	mov	r0, sp
        251da4:	eb663cb7 	bl	1be1088 <$CompCompare>
        251da8:	e3500000 	cmp	r0, #0	; 0x0
        251dac:	da000004 	ble	251dc4 <TTaskSafeRingBuffer::GetCompletely(unsigned long, unsigned long)+0x98>
        251db0:	e59f0014 	ldr	r0, [pc, #14]	; 251dcc <TTaskSafeRingBuffer::GetCompletely(unsigned long, unsigned long)+0xa0>
        251db4:	e5900000 	ldr	r0, [r0]
        251db8:	e3a02000 	mov	r2, #0	; 0x0
        251dbc:	e59f100c 	ldr	r1, [pc, #c]	; 251dd0 <TTaskSafeRingBuffer::GetCompletely(unsigned long, unsigned long)+0xa4>
        251dc0:	eb6644f5 	bl	1be319c <$Throw>
        251dc4:	e28dd008 	add	sp, sp, #8	; 0x8
        251dc8:	eaffffe5 	b	251d64 <TTaskSafeRingBuffer::GetCompletely(unsigned long, unsigned long)+0x38>
        251dcc:	00371324 	eoreqs	r1, r7, r4, lsr #6
        251dd0:	ffffd8db 	swinv	0x00ffd8db
        251dd4:	0affffe2 	beq	251d64 <TTaskSafeRingBuffer::GetCompletely(unsigned long, unsigned long)+0x38>
        251dd8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

