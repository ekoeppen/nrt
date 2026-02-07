#include "include/TPageTableManager.h"

/**
 * Symbol: TPageTableManager::__ct(void)
 * Address: 0016300c
 */
TPageTableManager::TPageTableManager(void) {
    /*
        16300c:	e1a0c00d 	mov	ip, sp
        163010:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        163014:	e24cb004 	sub	fp, ip, #4	; 0x4
        163018:	e1b04000 	movs	r4, r0
        16301c:	1a000003 	bne	163030 <TPageTableManager::__ct(void)+0x24>
        163020:	e3a00010 	mov	r0, #16	; 0x10
        163024:	eb69adc3 	bl	1bce738 <$__nw(unsigned int)>
        163028:	e1b04000 	movs	r4, r0
        16302c:	0a000005 	beq	163048 <TPageTableManager::__ct(void)+0x3c>
        163030:	e2840004 	add	r0, r4, #4	; 0x4
        163034:	e3a02020 	mov	r2, #32	; 0x20
        163038:	e3a01000 	mov	r1, #0	; 0x0
        16303c:	eb663603 	bl	1af0850 <TDynArray::$__ct(int, int)>
        163040:	e3a00000 	mov	r0, #0	; 0x0
        163044:	e5840000 	str	r0, [r4]
        163048:	e1a00004 	mov	r0, r4
        16304c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TPageTableManager::AllocatePageTable(void)
 * Address: 00163050
 */
TPageTableManager::AllocatePageTable(void) {
    /*
        163050:	e1a0c00d 	mov	ip, sp
        163054:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        163058:	e24cb004 	sub	fp, ip, #4	; 0x4
        16305c:	e1a04000 	mov	r4, r0
        163060:	e24dd004 	sub	sp, sp, #4	; 0x4
        163064:	e59f0054 	ldr	r0, [pc, #54]	; 1630c0 <TPageTableManager::AllocatePageTable(void)+0x70>
        163068:	e5901000 	ldr	r1, [r0]
        16306c:	e1a0000d 	mov	r0, sp
        163070:	e3a02000 	mov	r2, #0	; 0x0
        163074:	eb69be3d 	bl	1bd2970 <$Get__13TUPageManagerSFRUlUli>
        163078:	e3300000 	teq	r0, #0	; 0x0
        16307c:	13a000ed 	movne	r0, #237	; 0xed
        163080:	12400b0a 	subne	r0, r0, #10240	; 0x2800
        163084:	1a000025 	bne	163120 <TPageTableManager::AllocatePageTable(void)+0xd0>
        163088:	eb08be8c 	bl	392ac0 <EnterAtomic>
        16308c:	e59f0030 	ldr	r0, [pc, #30]	; 1630c4 <TPageTableManager::AllocatePageTable(void)+0x74>
        163090:	e5900000 	ldr	r0, [r0]
        163094:	e59d1000 	ldr	r1, [sp]
        163098:	e201200f 	and	r2, r1, #15	; 0xf
        16309c:	e3a06000 	mov	r6, #0	; 0x0
        1630a0:	e3a08001 	mov	r8, #1	; 0x1
        1630a4:	e332000b 	teq	r2, #11	; 0xb
        1630a8:	11a02006 	movne	r2, r6
        1630ac:	01a02008 	moveq	r2, r8
        1630b0:	e3320000 	teq	r2, #0	; 0x0
        1630b4:	0a000003 	beq	1630c8 <TPageTableManager::AllocatePageTable(void)+0x78>
        1630b8:	eb06db95 	bl	319f14 <TObjectTable::Get(unsigned long)>
        1630bc:	ea000002 	b	1630cc <TPageTableManager::AllocatePageTable(void)+0x7c>
        1630c0:	0c101054 	ldceq	0, cr1, [r0], -#336
        1630c4:	0c101164 	ldfeqs	f1, [r0], -#400
        1630c8:	e1a00006 	mov	r0, r6
        1630cc:	e1b07000 	movs	r7, r0
        1630d0:	0a000010 	beq	163118 <TPageTableManager::AllocatePageTable(void)+0xc8>
        1630d4:	e3a05000 	mov	r5, #0	; 0x0
        1630d8:	e3a00010 	mov	r0, #16	; 0x10
        1630dc:	eb69ad95 	bl	1bce738 <$__nw(unsigned int)>
        1630e0:	e1a01000 	mov	r1, r0
        1630e4:	e5c08000 	strb	r8, [r0]
        1630e8:	e5970010 	ldr	r0, [r7, #16]
        1630ec:	e1a00620 	mov	r0, r0, lsr #12
        1630f0:	e1a00600 	mov	r0, r0, lsl #12
        1630f4:	e0800505 	add	r0, r0, r5, lsl #10
        1630f8:	e5810004 	str	r0, [r1, #4]
        1630fc:	e5970000 	ldr	r0, [r7]
        163100:	e581000c 	str	r0, [r1, #12]
        163104:	e1a00004 	mov	r0, r4
        163108:	eb6677fb 	bl	1b010fc <TRing::$Push(void *)>
        16310c:	e2855001 	add	r5, r5, #1	; 0x1
        163110:	e3550004 	cmp	r5, #4	; 0x4
        163114:	baffffef 	blt	1630d8 <TPageTableManager::AllocatePageTable(void)+0x88>
        163118:	eb08be7f 	bl	392b1c <ExitAtomic>
        16311c:	e1a00006 	mov	r0, r6
        163120:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TPageTableManager::AllocatePageTable(unsigned long, unsigned long &)
 * Address: 00163124
 */
TPageTableManager::AllocatePageTable(unsigned long, unsigned long &) {
    /*
        163124:	e1a0c00d 	mov	ip, sp
        163128:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        16312c:	e24cb004 	sub	fp, ip, #4	; 0x4
        163130:	e1a04000 	mov	r4, r0
        163134:	e1a06001 	mov	r6, r1
        163138:	e1a05002 	mov	r5, r2
        16313c:	eb08be5f 	bl	392ac0 <EnterAtomic>
        163140:	e2840004 	add	r0, r4, #4	; 0x4
        163144:	e1a08000 	mov	r8, r0
        163148:	e5900004 	ldr	r0, [r0, #4]
        16314c:	e3300000 	teq	r0, #0	; 0x0
        163150:	0a000030 	beq	163218 <TPageTableManager::AllocatePageTable(unsigned long, unsigned long &)+0xf4>
        163154:	e1a00004 	mov	r0, r4
        163158:	e3a01000 	mov	r1, #0	; 0x0
        16315c:	eb6639ce 	bl	1af189c <TRing::$__vc(int const)>
        163160:	e5900000 	ldr	r0, [r0]
        163164:	e5d00000 	ldrb	r0, [r0]
        163168:	e3a09000 	mov	r9, #0	; 0x0
        16316c:	e3300000 	teq	r0, #0	; 0x0
        163170:	0a00000b 	beq	1631a4 <TPageTableManager::AllocatePageTable(unsigned long, unsigned long &)+0x80>
        163174:	e1a00004 	mov	r0, r4
        163178:	e3a01000 	mov	r1, #0	; 0x0
        16317c:	eb6639c6 	bl	1af189c <TRing::$__vc(int const)>
        163180:	e5907000 	ldr	r7, [r0]
        163184:	e1a00004 	mov	r0, r4
        163188:	e3a01001 	mov	r1, #1	; 0x1
        16318c:	eb668435 	bl	1b04268 <TRing::$Rotate(int)>
        163190:	e5c79000 	strb	r9, [r7]
        163194:	e5970004 	ldr	r0, [r7, #4]
        163198:	e5850000 	str	r0, [r5]
        16319c:	e5a76008 	str	r6, [r7, #8]!
        1631a0:	ea000015 	b	1631fc <TPageTableManager::AllocatePageTable(unsigned long, unsigned long &)+0xd8>
        1631a4:	e3a07000 	mov	r7, #0	; 0x0
        1631a8:	e5980004 	ldr	r0, [r8, #4]
        1631ac:	e3500000 	cmp	r0, #0	; 0x0
        1631b0:	da000018 	ble	163218 <TPageTableManager::AllocatePageTable(unsigned long, unsigned long &)+0xf4>
        1631b4:	e1a01007 	mov	r1, r7
        1631b8:	e1a00004 	mov	r0, r4
        1631bc:	eb6639b6 	bl	1af189c <TRing::$__vc(int const)>
        1631c0:	e5900000 	ldr	r0, [r0]
        1631c4:	e5d00000 	ldrb	r0, [r0]
        1631c8:	e3300000 	teq	r0, #0	; 0x0
        1631cc:	0a00000d 	beq	163208 <TPageTableManager::AllocatePageTable(unsigned long, unsigned long &)+0xe4>
        1631d0:	e1a01007 	mov	r1, r7
        1631d4:	e1a00004 	mov	r0, r4
        1631d8:	eb6639af 	bl	1af189c <TRing::$__vc(int const)>
        1631dc:	e2871001 	add	r1, r7, #1	; 0x1
        1631e0:	e5908000 	ldr	r8, [r0]
        1631e4:	e1a00004 	mov	r0, r4
        1631e8:	eb66841e 	bl	1b04268 <TRing::$Rotate(int)>
        1631ec:	e5c89000 	strb	r9, [r8]
        1631f0:	e5980004 	ldr	r0, [r8, #4]
        1631f4:	e5850000 	str	r0, [r5]
        1631f8:	e5a86008 	str	r6, [r8, #8]!
        1631fc:	eb08be46 	bl	392b1c <ExitAtomic>
        163200:	e1a00009 	mov	r0, r9
        163204:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        163208:	e2877001 	add	r7, r7, #1	; 0x1
        16320c:	e5980004 	ldr	r0, [r8, #4]
        163210:	e1500007 	cmp	r0, r7
        163214:	caffffe6 	bgt	1631b4 <TPageTableManager::AllocatePageTable(unsigned long, unsigned long &)+0x90>
        163218:	eb08be3f 	bl	392b1c <ExitAtomic>
        16321c:	e3a000ed 	mov	r0, #237	; 0xed
        163220:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        163224:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TPageTableManager::ReleasePageTable(unsigned long)
 * Address: 00163228
 */
TPageTableManager::ReleasePageTable(unsigned long) {
    /*
        163228:	e1a0c00d 	mov	ip, sp
        16322c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        163230:	e24cb004 	sub	fp, ip, #4	; 0x4
        163234:	e1a04000 	mov	r4, r0
        163238:	e1a06001 	mov	r6, r1
        16323c:	eb08be1f 	bl	392ac0 <EnterAtomic>
        163240:	e3a05000 	mov	r5, #0	; 0x0
        163244:	e3a08000 	mov	r8, #0	; 0x0
        163248:	e3a07000 	mov	r7, #0	; 0x0
        16324c:	e2840004 	add	r0, r4, #4	; 0x4
        163250:	e1a09000 	mov	r9, r0
        163254:	e5900004 	ldr	r0, [r0, #4]
        163258:	e3500000 	cmp	r0, #0	; 0x0
        16325c:	da000046 	ble	16337c <TPageTableManager::ReleasePageTable(unsigned long)+0x154>
        163260:	e1a06a26 	mov	r6, r6, lsr #20
        163264:	e1a06a06 	mov	r6, r6, lsl #20
        163268:	e1a01007 	mov	r1, r7
        16326c:	e1a00004 	mov	r0, r4
        163270:	eb663989 	bl	1af189c <TRing::$__vc(int const)>
        163274:	e5900000 	ldr	r0, [r0]
        163278:	e5d01000 	ldrb	r1, [r0]
        16327c:	e3310000 	teq	r1, #0	; 0x0
        163280:	05901008 	ldreq	r1, [r0, #8]
        163284:	01a01a21 	moveq	r1, r1, lsr #20
        163288:	01360a01 	teqeq	r6, r1, lsl #20
        16328c:	03a01001 	moveq	r1, #1	; 0x1
        163290:	05c01000 	streqb	r1, [r0]
        163294:	01a08000 	moveq	r8, r0
        163298:	0a000003 	beq	1632ac <TPageTableManager::ReleasePageTable(unsigned long)+0x84>
        16329c:	e2877001 	add	r7, r7, #1	; 0x1
        1632a0:	e5990004 	ldr	r0, [r9, #4]
        1632a4:	e1500007 	cmp	r0, r7
        1632a8:	caffffee 	bgt	163268 <TPageTableManager::ReleasePageTable(unsigned long)+0x40>
        1632ac:	e3380000 	teq	r8, #0	; 0x0
        1632b0:	0a000031 	beq	16337c <TPageTableManager::ReleasePageTable(unsigned long)+0x154>
        1632b4:	e5980004 	ldr	r0, [r8, #4]
        1632b8:	e1a07620 	mov	r7, r0, lsr #12
        1632bc:	e1a07607 	mov	r7, r7, lsl #12
        1632c0:	e3a06000 	mov	r6, #0	; 0x0
        1632c4:	e5990004 	ldr	r0, [r9, #4]
        1632c8:	e3500000 	cmp	r0, #0	; 0x0
        1632cc:	da000012 	ble	16331c <TPageTableManager::ReleasePageTable(unsigned long)+0xf4>
        1632d0:	e287aa01 	add	sl, r7, #4096	; 0x1000
        1632d4:	e1a01006 	mov	r1, r6
        1632d8:	e1a00004 	mov	r0, r4
        1632dc:	eb66396e 	bl	1af189c <TRing::$__vc(int const)>
        1632e0:	e5900000 	ldr	r0, [r0]
        1632e4:	e5901004 	ldr	r1, [r0, #4]
        1632e8:	e1510007 	cmp	r1, r7
        1632ec:	3a000004 	bcc	163304 <TPageTableManager::ReleasePageTable(unsigned long)+0xdc>
        1632f0:	e15a0001 	cmp	sl, r1
        1632f4:	9a000002 	bls	163304 <TPageTableManager::ReleasePageTable(unsigned long)+0xdc>
        1632f8:	e5d00000 	ldrb	r0, [r0]
        1632fc:	e3300000 	teq	r0, #0	; 0x0
        163300:	12855001 	addne	r5, r5, #1	; 0x1
        163304:	e3350004 	teq	r5, #4	; 0x4
        163308:	0a000005 	beq	163324 <TPageTableManager::ReleasePageTable(unsigned long)+0xfc>
        16330c:	e2866001 	add	r6, r6, #1	; 0x1
        163310:	e5990004 	ldr	r0, [r9, #4]
        163314:	e1500006 	cmp	r0, r6
        163318:	caffffed 	bgt	1632d4 <TPageTableManager::ReleasePageTable(unsigned long)+0xac>
        16331c:	e3350004 	teq	r5, #4	; 0x4
        163320:	1a000015 	bne	16337c <TPageTableManager::ReleasePageTable(unsigned long)+0x154>
        163324:	e2876a01 	add	r6, r7, #4096	; 0x1000
        163328:	e1a00004 	mov	r0, r4
        16332c:	e3a01000 	mov	r1, #0	; 0x0
        163330:	eb663959 	bl	1af189c <TRing::$__vc(int const)>
        163334:	e5900000 	ldr	r0, [r0]
        163338:	e5900004 	ldr	r0, [r0, #4]
        16333c:	e1500007 	cmp	r0, r7
        163340:	3a000006 	bcc	163360 <TPageTableManager::ReleasePageTable(unsigned long)+0x138>
        163344:	e1560000 	cmp	r6, r0
        163348:	9a000004 	bls	163360 <TPageTableManager::ReleasePageTable(unsigned long)+0x138>
        16334c:	e2455001 	sub	r5, r5, #1	; 0x1
        163350:	e1a00004 	mov	r0, r4
        163354:	eb03e435 	bl	25c430 <TRing::Pop(void)>
        163358:	eb69a8e0 	bl	1bcd6e0 <$__dl(void *)>
        16335c:	ea000002 	b	16336c <TPageTableManager::ReleasePageTable(unsigned long)+0x144>
        163360:	e1a00004 	mov	r0, r4
        163364:	e3a01001 	mov	r1, #1	; 0x1
        163368:	eb6683be 	bl	1b04268 <TRing::$Rotate(int)>
        16336c:	e3350000 	teq	r5, #0	; 0x0
        163370:	1affffec 	bne	163328 <TPageTableManager::ReleasePageTable(unsigned long)+0x100>
        163374:	e5b8000c 	ldr	r0, [r8, #12]!
        163378:	eb69da44 	bl	1bd9c90 <$Release__13TUPageManagerSFUl>
        16337c:	eb08bde6 	bl	392b1c <ExitAtomic>
        163380:	e3a00000 	mov	r0, #0	; 0x0
        163384:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TPageTableManager::MonitorProc(long, unsigned long)
 * Address: 00163388
 */
TPageTableManager::MonitorProc(long, unsigned long) {
    /*
        163388:	e3310001 	teq	r1, #1	; 0x1
        16338c:	0a664180 	beq	1af3994 <TPageTableManager::$AllocatePageTable(void)>
        163390:	e3310002 	teq	r1, #2	; 0x2
        163394:	01a01002 	moveq	r1, r2
        163398:	0a66cdda 	beq	1b16b08 <TPageTableManager::$ReleasePageTable(unsigned long)>
        16339c:	13e00000 	mvnne	r0, #0	; 0x0
        1633a0:	e1a0f00e 	mov	pc, lr
    */
}

