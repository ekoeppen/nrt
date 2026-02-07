#include "include/MemObjManager.h"

/**
 * Symbol: GetPersistentRef__13MemObjManagerSFUlPP17PersistentDBEntryPl
 * Address: 0011d028
 */
void MemObjManager::GetPersistentRef() {
    /*
        11d028:	e1a0c00d 	mov	ip, sp
        11d02c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11d030:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d034:	e1a05001 	mov	r5, r1
        11d038:	e1a04002 	mov	r4, r2
        11d03c:	e1a01000 	mov	r1, r0
        11d040:	e3a00003 	mov	r0, #3	; 0x3
        11d044:	eb6ad224 	bl	1bd18dc <$EntryLocByIndex__13MemObjManagerSF10MemObjTypeUl>
        11d048:	e3300000 	teq	r0, #0	; 0x0
        11d04c:	03a00000 	moveq	r0, #0	; 0x0
        11d050:	05840000 	streq	r0, [r4]
        11d054:	15850000 	strne	r0, [r5]
        11d058:	13a00001 	movne	r0, #1	; 0x1
        11d05c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PrimGetDomainInfo__13MemObjManagerSFUlP10DomainInfo
 * Address: 0011d060
 */
void MemObjManager::PrimGetDomainInfo() {
    /*
        11d060:	e1a0c00d 	mov	ip, sp
        11d064:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11d068:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d06c:	e1a04001 	mov	r4, r1
        11d070:	e59f6090 	ldr	r6, [pc, #90]	; 11d108 <PrimGetDomainInfo__13MemObjManagerSFUlP10DomainInfo+0xa8>
        11d074:	e59f1090 	ldr	r1, [pc, #90]	; 11d10c <PrimGetDomainInfo__13MemObjManagerSFUlP10DomainInfo+0xac>
        11d078:	e5915000 	ldr	r5, [r1]
        11d07c:	e3a01000 	mov	r1, #0	; 0x0
        11d080:	e5952000 	ldr	r2, [r5]
        11d084:	e3320000 	teq	r2, #0	; 0x0
        11d088:	0a00002d 	beq	11d144 <PrimGetDomainInfo__13MemObjManagerSFUlP10DomainInfo+0xe4>
        11d08c:	e1310000 	teq	r1, r0
        11d090:	1a000027 	bne	11d134 <PrimGetDomainInfo__13MemObjManagerSFUlP10DomainInfo+0xd4>
        11d094:	e5960000 	ldr	r0, [r6]
        11d098:	e3300000 	teq	r0, #0	; 0x0
        11d09c:	0a000005 	beq	11d0b8 <PrimGetDomainInfo__13MemObjManagerSFUlP10DomainInfo+0x58>
        11d0a0:	e5950000 	ldr	r0, [r5]
        11d0a4:	e5961000 	ldr	r1, [r6]
        11d0a8:	e1310000 	teq	r1, r0
        11d0ac:	15b61018 	ldrne	r1, [r6, #24]!
        11d0b0:	13310000 	teqne	r1, #0	; 0x0
        11d0b4:	1afffffa 	bne	11d0a4 <PrimGetDomainInfo__13MemObjManagerSFUlP10DomainInfo+0x44>
        11d0b8:	e5953008 	ldr	r3, [r5, #8]
        11d0bc:	e92d0008 	stmdb	sp!, {r3}
        11d0c0:	e1a00004 	mov	r0, r4
        11d0c4:	e3a02000 	mov	r2, #0	; 0x0
        11d0c8:	e895000a 	ldmia	r5, {r1, r3}
        11d0cc:	eb677f61 	bl	1afce58 <DomainInfo::$InitDomainInfo(unsigned long, unsigned long, unsigned long, unsigned long)>
        11d0d0:	e28dd004 	add	sp, sp, #4	; 0x4
        11d0d4:	e1a00004 	mov	r0, r4
        11d0d8:	e2855008 	add	r5, r5, #8	; 0x8
        11d0dc:	e9b5000e 	ldmib	r5!, {r1, r2, r3}
        11d0e0:	eb677f63 	bl	1afce74 <DomainInfo::$InitHeapInfo(unsigned long, unsigned long, unsigned long)>
        11d0e4:	e5960000 	ldr	r0, [r6]
        11d0e8:	e3300000 	teq	r0, #0	; 0x0
        11d0ec:	1a000007 	bne	11d110 <PrimGetDomainInfo__13MemObjManagerSFUlP10DomainInfo+0xb0>
        11d0f0:	e3a03000 	mov	r3, #0	; 0x0
        11d0f4:	e92d0008 	stmdb	sp!, {r3}
        11d0f8:	e1a00004 	mov	r0, r4
        11d0fc:	e3a02000 	mov	r2, #0	; 0x0
        11d100:	e3a01000 	mov	r1, #0	; 0x0
        11d104:	ea000007 	b	11d128 <PrimGetDomainInfo__13MemObjManagerSFUlP10DomainInfo+0xc8>
        11d108:	00000040 	andeq	r0, r0, r0, asr #32
        11d10c:	0c1011b8 	ldfeqs	f1, [r0], -#736
        11d110:	e5963014 	ldr	r3, [r6, #20]
        11d114:	e92d0008 	stmdb	sp!, {r3}
        11d118:	e1a00004 	mov	r0, r4
        11d11c:	e5b62004 	ldr	r2, [r6, #4]!
        11d120:	e5b61004 	ldr	r1, [r6, #4]!
        11d124:	e5b63008 	ldr	r3, [r6, #8]!
        11d128:	eb677f4e 	bl	1afce68 <DomainInfo::$InitGlobalInfo(unsigned long, unsigned long, unsigned long, unsigned long)>
        11d12c:	e3a00000 	mov	r0, #0	; 0x0
        11d130:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        11d134:	e2811001 	add	r1, r1, #1	; 0x1
        11d138:	e5b52018 	ldr	r2, [r5, #24]!
        11d13c:	e3320000 	teq	r2, #0	; 0x0
        11d140:	1affffd1 	bne	11d08c <PrimGetDomainInfo__13MemObjManagerSFUlP10DomainInfo+0x2c>
        11d144:	e3a000e8 	mov	r0, #232	; 0xe8
        11d148:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        11d14c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PrimGetDomainInfoByName__13MemObjManagerSFUlP10DomainInfo
 * Address: 0011d150
 */
void MemObjManager::PrimGetDomainInfoByName() {
    /*
        11d150:	e1a0c00d 	mov	ip, sp
        11d154:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11d158:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d15c:	e1a05000 	mov	r5, r0
        11d160:	e1a04001 	mov	r4, r1
        11d164:	e24dd02c 	sub	sp, sp, #44	; 0x2c
        11d168:	e3a06000 	mov	r6, #0	; 0x0
        11d16c:	e1a0100d 	mov	r1, sp
        11d170:	e1a00006 	mov	r0, r6
        11d174:	eb6aea9e 	bl	1bd7bf4 <$PrimGetDomainInfo__13MemObjManagerSFUlP10DomainInfo>
        11d178:	e3300000 	teq	r0, #0	; 0x0
        11d17c:	1a000010 	bne	11d1c4 <PrimGetDomainInfoByName__13MemObjManagerSFUlP10DomainInfo+0x74>
        11d180:	e1a0000d 	mov	r0, sp
        11d184:	eb678b8d 	bl	1afffc0 <DomainInfo::$Name(void)>
        11d188:	e1300005 	teq	r0, r5
        11d18c:	1a000006 	bne	11d1ac <PrimGetDomainInfoByName__13MemObjManagerSFUlP10DomainInfo+0x5c>
        11d190:	e1a0000d 	mov	r0, sp
        11d194:	e8b0500e 	ldmia	r0!, {r1, r2, r3, ip, lr}
        11d198:	e8a4500e 	stmia	r4!, {r1, r2, r3, ip, lr}
        11d19c:	e890500f 	ldmia	r0, {r0, r1, r2, r3, ip, lr}
        11d1a0:	e884500f 	stmia	r4, {r0, r1, r2, r3, ip, lr}
        11d1a4:	e3a00000 	mov	r0, #0	; 0x0
        11d1a8:	ea000007 	b	11d1cc <PrimGetDomainInfoByName__13MemObjManagerSFUlP10DomainInfo+0x7c>
        11d1ac:	e2866001 	add	r6, r6, #1	; 0x1
        11d1b0:	e1a0100d 	mov	r1, sp
        11d1b4:	e1a00006 	mov	r0, r6
        11d1b8:	eb6aea8d 	bl	1bd7bf4 <$PrimGetDomainInfo__13MemObjManagerSFUlP10DomainInfo>
        11d1bc:	e3300000 	teq	r0, #0	; 0x0
        11d1c0:	0affffee 	beq	11d180 <PrimGetDomainInfoByName__13MemObjManagerSFUlP10DomainInfo+0x30>
        11d1c4:	e3a000e8 	mov	r0, #232	; 0xe8
        11d1c8:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        11d1cc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PrimGetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfo
 * Address: 0011d1d0
 */
void MemObjManager::PrimGetEnvironmentInfo() {
    /*
        11d1d0:	e1a0c00d 	mov	ip, sp
        11d1d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11d1d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d1dc:	e3a02000 	mov	r2, #0	; 0x0
        11d1e0:	e3a04000 	mov	r4, #0	; 0x0
        11d1e4:	e59fc044 	ldr	ip, [pc, #44]	; 11d230 <PrimGetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfo+0x60>
        11d1e8:	e59c3000 	ldr	r3, [ip]
        11d1ec:	e3330000 	teq	r3, #0	; 0x0
        11d1f0:	0a000014 	beq	11d248 <PrimGetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfo+0x78>
        11d1f4:	e1320000 	teq	r2, r0
        11d1f8:	1a00000d 	bne	11d234 <PrimGetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfo+0x64>
        11d1fc:	e0820082 	add	r0, r2, r2, lsl #1
        11d200:	e08ce180 	add	lr, ip, r0, lsl #3
        11d204:	e28e3008 	add	r3, lr, #8	; 0x8
        11d208:	e893000c 	ldmia	r3, {r2, r3}
        11d20c:	e92d000c 	stmdb	sp!, {r2, r3}
        11d210:	e5be3004 	ldr	r3, [lr, #4]!
        11d214:	e79cc180 	ldr	ip, [ip, r0, lsl #3]
        11d218:	e1a00001 	mov	r0, r1
        11d21c:	e3a02000 	mov	r2, #0	; 0x0
        11d220:	e1a0100c 	mov	r1, ip
        11d224:	eb677af4 	bl	1afbdfc <EnvironmentInfo::$Init(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)>
        11d228:	e1a00004 	mov	r0, r4
        11d22c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11d230:	0c10143c 	ldceq	4, cr1, [r0], -#240
        11d234:	e2822001 	add	r2, r2, #1	; 0x1
        11d238:	e0823082 	add	r3, r2, r2, lsl #1
        11d23c:	e79c3183 	ldr	r3, [ip, r3, lsl #3]
        11d240:	e3330000 	teq	r3, #0	; 0x0
        11d244:	1affffea 	bne	11d1f4 <PrimGetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfo+0x24>
        11d248:	e3a000e8 	mov	r0, #232	; 0xe8
        11d24c:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        11d250:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: PrimGetEnvDomainName__13MemObjManagerSFUlT1PUlPUcT4
 * Address: 0011d254
 */
void MemObjManager::PrimGetEnvDomainName() {
    /*
        11d254:	e92d41f0 	stmdb	sp!, {r4, r5, r6, r7, r8, lr}
        11d258:	e1a0c000 	mov	ip, r0
        11d25c:	e3a0e000 	mov	lr, #0	; 0x0
        11d260:	e3a00000 	mov	r0, #0	; 0x0
        11d264:	e59d5018 	ldr	r5, [sp, #24]
        11d268:	e59f409c 	ldr	r4, [pc, #9c]	; 11d30c <PrimGetEnvDomainName__13MemObjManagerSFUlT1PUlPUcT4+0xb8>
        11d26c:	e5946000 	ldr	r6, [r4]
        11d270:	e3360000 	teq	r6, #0	; 0x0
        11d274:	0a000031 	beq	11d340 <PrimGetEnvDomainName__13MemObjManagerSFUlT1PUlPUcT4+0xec>
        11d278:	e08e608e 	add	r6, lr, lr, lsl #1
        11d27c:	e7946186 	ldr	r6, [r4, r6, lsl #3]
        11d280:	e136000c 	teq	r6, ip
        11d284:	1a000028 	bne	11d32c <PrimGetEnvDomainName__13MemObjManagerSFUlT1PUlPUcT4+0xd8>
        11d288:	e3a0c000 	mov	ip, #0	; 0x0
        11d28c:	e08ee08e 	add	lr, lr, lr, lsl #1
        11d290:	e084718e 	add	r7, r4, lr, lsl #3
        11d294:	e3a06001 	mov	r6, #1	; 0x1
        11d298:	e5974010 	ldr	r4, [r7, #16]
        11d29c:	e3340000 	teq	r4, #0	; 0x0
        11d2a0:	13a0e000 	movne	lr, #0	; 0x0
        11d2a4:	15948000 	ldrne	r8, [r4]
        11d2a8:	13380000 	teqne	r8, #0	; 0x0
        11d2ac:	0a000009 	beq	11d2d8 <PrimGetEnvDomainName__13MemObjManagerSFUlT1PUlPUcT4+0x84>
        11d2b0:	e13c0001 	teq	ip, r1
        11d2b4:	0794110e 	ldreq	r1, [r4, lr, lsl #2]
        11d2b8:	05821000 	streq	r1, [r2]
        11d2bc:	05c30000 	streqb	r0, [r3]
        11d2c0:	0a00000f 	beq	11d304 <PrimGetEnvDomainName__13MemObjManagerSFUlT1PUlPUcT4+0xb0>
        11d2c4:	e28ee001 	add	lr, lr, #1	; 0x1
        11d2c8:	e28cc001 	add	ip, ip, #1	; 0x1
        11d2cc:	e794810e 	ldr	r8, [r4, lr, lsl #2]
        11d2d0:	e3380000 	teq	r8, #0	; 0x0
        11d2d4:	1afffff5 	bne	11d2b0 <PrimGetEnvDomainName__13MemObjManagerSFUlT1PUlPUcT4+0x5c>
        11d2d8:	e5b74014 	ldr	r4, [r7, #20]!
        11d2dc:	e3340000 	teq	r4, #0	; 0x0
        11d2e0:	13a0e000 	movne	lr, #0	; 0x0
        11d2e4:	15947000 	ldrne	r7, [r4]
        11d2e8:	13370000 	teqne	r7, #0	; 0x0
        11d2ec:	0a00000c 	beq	11d324 <PrimGetEnvDomainName__13MemObjManagerSFUlT1PUlPUcT4+0xd0>
        11d2f0:	e13c0001 	teq	ip, r1
        11d2f4:	1a000005 	bne	11d310 <PrimGetEnvDomainName__13MemObjManagerSFUlT1PUlPUcT4+0xbc>
        11d2f8:	e794110e 	ldr	r1, [r4, lr, lsl #2]
        11d2fc:	e5821000 	str	r1, [r2]
        11d300:	e5c36000 	strb	r6, [r3]
        11d304:	e5c56000 	strb	r6, [r5]
        11d308:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
        11d30c:	0c10143c 	ldceq	4, cr1, [r0], -#240
        11d310:	e28ee001 	add	lr, lr, #1	; 0x1
        11d314:	e28cc001 	add	ip, ip, #1	; 0x1
        11d318:	e794710e 	ldr	r7, [r4, lr, lsl #2]
        11d31c:	e3370000 	teq	r7, #0	; 0x0
        11d320:	1afffff2 	bne	11d2f0 <PrimGetEnvDomainName__13MemObjManagerSFUlT1PUlPUcT4+0x9c>
        11d324:	e5c50000 	strb	r0, [r5]
        11d328:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
        11d32c:	e28ee001 	add	lr, lr, #1	; 0x1
        11d330:	e08e608e 	add	r6, lr, lr, lsl #1
        11d334:	e7946186 	ldr	r6, [r4, r6, lsl #3]
        11d338:	e3360000 	teq	r6, #0	; 0x0
        11d33c:	1affffcd 	bne	11d278 <PrimGetEnvDomainName__13MemObjManagerSFUlT1PUlPUcT4+0x24>
        11d340:	e5c50000 	strb	r0, [r5]
        11d344:	e3a000e8 	mov	r0, #232	; 0xe8
        11d348:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        11d34c:	e8bd81f0 	ldmia	sp!, {r4, r5, r6, r7, r8, pc}
    */
}

/**
 * Symbol: RegisterPersistentNewEntry__13MemObjManagerSFUlP17PersistentDBEntry
 * Address: 0011d350
 */
void MemObjManager::RegisterPersistentNewEntry() {
    /*
        11d350:	e1a0c00d 	mov	ip, sp
        11d354:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11d358:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d35c:	e1a05000 	mov	r5, r0
        11d360:	e1a04001 	mov	r4, r1
        11d364:	e24dd024 	sub	sp, sp, #36	; 0x24
        11d368:	e28d0014 	add	r0, sp, #20	; 0x14
        11d36c:	eb674d2a 	bl	1af081c <TSingleQContainer::$__ct(void)>
        11d370:	e3a06000 	mov	r6, #0	; 0x0
        11d374:	e1a0200d 	mov	r2, sp
        11d378:	e1a01005 	mov	r1, r5
        11d37c:	e3a00003 	mov	r0, #3	; 0x3
        11d380:	eb6ad15d 	bl	1bd18fc <$FindEntryByName__13MemObjManagerSF10MemObjTypeUlPv>
        11d384:	e3300000 	teq	r0, #0	; 0x0
        11d388:	03a060b2 	moveq	r6, #178	; 0xb2
        11d38c:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
        11d390:	0a000008 	beq	11d3b8 <RegisterPersistentNewEntry__13MemObjManagerSFUlP17PersistentDBEntry+0x68>
        11d394:	e59f1024 	ldr	r1, [pc, #24]	; 11d3c0 <RegisterPersistentNewEntry__13MemObjManagerSFUlP17PersistentDBEntry+0x70>
        11d398:	e3a00003 	mov	r0, #3	; 0x3
        11d39c:	eb6ad14f 	bl	1bd18e0 <$EntryLocByName__13MemObjManagerSF10MemObjTypeUl>
        11d3a0:	e1b01000 	movs	r1, r0
        11d3a4:	059f6018 	ldreq	r6, [pc, #18]	; 11d3c4 <RegisterPersistentNewEntry__13MemObjManagerSFUlP17PersistentDBEntry+0x74>
        11d3a8:	0a000002 	beq	11d3b8 <RegisterPersistentNewEntry__13MemObjManagerSFUlP17PersistentDBEntry+0x68>
        11d3ac:	e1a02004 	mov	r2, r4
        11d3b0:	e3a00003 	mov	r0, #3	; 0x3
        11d3b4:	eb6acd21 	bl	1bd0840 <$CopyObject__13MemObjManagerSF10MemObjTypePvT2>
        11d3b8:	e1a00006 	mov	r0, r6
        11d3bc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        11d3c0:	656d7479 	strvsb	r7, [sp, -#1145]!
        11d3c4:	ffffd8e7 	swinv	0x00ffd8e7
    */
}

/**
 * Symbol: DeregisterPersistentEntry__13MemObjManagerSFUl
 * Address: 0011d3c8
 */
void MemObjManager::DeregisterPersistentEntry() {
    /*
        11d3c8:	e1a0c00d 	mov	ip, sp
        11d3cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11d3d0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d3d4:	e1a04000 	mov	r4, r0
        11d3d8:	e24dd024 	sub	sp, sp, #36	; 0x24
        11d3dc:	e28d0014 	add	r0, sp, #20	; 0x14
        11d3e0:	eb674d0d 	bl	1af081c <TSingleQContainer::$__ct(void)>
        11d3e4:	e3a05000 	mov	r5, #0	; 0x0
        11d3e8:	e1a0000d 	mov	r0, sp
        11d3ec:	e3e03000 	mvn	r3, #0	; 0x0
        11d3f0:	e3a02001 	mov	r2, #1	; 0x1
        11d3f4:	e59f1044 	ldr	r1, [pc, #44]	; 11d440 <DeregisterPersistentEntry__13MemObjManagerSFUl+0x78>
        11d3f8:	eb677e85 	bl	1afce14 <PersistentDBEntry::$Init(unsigned long, unsigned char, unsigned long)>
        11d3fc:	e59d0020 	ldr	r0, [sp, #32]
        11d400:	e3c00040 	bic	r0, r0, #64	; 0x40
        11d404:	e1a01004 	mov	r1, r4
        11d408:	e58d0020 	str	r0, [sp, #32]
        11d40c:	e3a00003 	mov	r0, #3	; 0x3
        11d410:	eb6ad132 	bl	1bd18e0 <$EntryLocByName__13MemObjManagerSF10MemObjTypeUl>
        11d414:	e1b01000 	movs	r1, r0
        11d418:	e3a020e8 	mov	r2, #232	; 0xe8
        11d41c:	e2422b0a 	sub	r2, r2, #10240	; 0x2800
        11d420:	0a000007 	beq	11d444 <DeregisterPersistentEntry__13MemObjManagerSFUl+0x7c>
        11d424:	e5910020 	ldr	r0, [r1, #32]
        11d428:	e3100040 	tst	r0, #64	; 0x40
        11d42c:	1a000004 	bne	11d444 <DeregisterPersistentEntry__13MemObjManagerSFUl+0x7c>
        11d430:	e1a0200d 	mov	r2, sp
        11d434:	e3a00003 	mov	r0, #3	; 0x3
        11d438:	eb6acd00 	bl	1bd0840 <$CopyObject__13MemObjManagerSF10MemObjTypePvT2>
        11d43c:	ea000001 	b	11d448 <DeregisterPersistentEntry__13MemObjManagerSFUl+0x80>
        11d440:	656d7479 	strvsb	r7, [sp, -#1145]!
        11d444:	e1a05002 	mov	r5, r2
        11d448:	e1a00005 	mov	r0, r5
        11d44c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: FindEnvironmentId__13MemObjManagerSFUlPUl
 * Address: 0011d450
 */
void MemObjManager::FindEnvironmentId() {
    /*
        11d450:	e1a0c00d 	mov	ip, sp
        11d454:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11d458:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d45c:	e1a04001 	mov	r4, r1
        11d460:	e24dd008 	sub	sp, sp, #8	; 0x8
        11d464:	e1a0100d 	mov	r1, sp
        11d468:	eb09b57e 	bl	38aa68 <C$$dtorvec$$Limit+0xf4>
        11d46c:	e3300000 	teq	r0, #0	; 0x0
        11d470:	059d1004 	ldreq	r1, [sp, #4]
        11d474:	05841000 	streq	r1, [r4]
        11d478:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: FindDomainId__13MemObjManagerSFUlPUl
 * Address: 0011d47c
 */
void MemObjManager::FindDomainId() {
    /*
        11d47c:	e1a0c00d 	mov	ip, sp
        11d480:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11d484:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d488:	e1a04001 	mov	r4, r1
        11d48c:	e24dd008 	sub	sp, sp, #8	; 0x8
        11d490:	e1a0100d 	mov	r1, sp
        11d494:	eb09b56f 	bl	38aa58 <C$$dtorvec$$Limit+0xe4>
        11d498:	e3300000 	teq	r0, #0	; 0x0
        11d49c:	059d1004 	ldreq	r1, [sp, #4]
        11d4a0:	05841000 	streq	r1, [r4]
        11d4a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: FindHeapRef__13MemObjManagerSFUlPPv
 * Address: 0011d4a8
 */
void MemObjManager::FindHeapRef() {
    /*
        11d4a8:	e1a0c00d 	mov	ip, sp
        11d4ac:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11d4b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d4b4:	e1a05000 	mov	r5, r0
        11d4b8:	e1a04001 	mov	r4, r1
        11d4bc:	e24dd008 	sub	sp, sp, #8	; 0x8
        11d4c0:	e1a0100d 	mov	r1, sp
        11d4c4:	eb09b56b 	bl	38aa78 <C$$dtorvec$$Limit+0x104>
        11d4c8:	e3a06000 	mov	r6, #0	; 0x0
        11d4cc:	e3300000 	teq	r0, #0	; 0x0
        11d4d0:	1a000003 	bne	11d4e4 <FindHeapRef__13MemObjManagerSFUlPPv+0x3c>
        11d4d4:	e59d0004 	ldr	r0, [sp, #4]
        11d4d8:	e5840000 	str	r0, [r4]
        11d4dc:	e1a00006 	mov	r0, r6
        11d4e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        11d4e4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        11d4e8:	e28d0014 	add	r0, sp, #20	; 0x14
        11d4ec:	eb674cca 	bl	1af081c <TSingleQContainer::$__ct(void)>
        11d4f0:	e1a0100d 	mov	r1, sp
        11d4f4:	e1a00005 	mov	r0, r5
        11d4f8:	eb09b562 	bl	38aa88 <C$$dtorvec$$Limit+0x114>
        11d4fc:	e3300000 	teq	r0, #0	; 0x0
        11d500:	059d0004 	ldreq	r0, [sp, #4]
        11d504:	05840000 	streq	r0, [r4]
        11d508:	01a00006 	moveq	r0, r6
        11d50c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: CopyObject__13MemObjManagerSF10MemObjTypePvT2
 * Address: 0011d510
 */
void MemObjManager::CopyObject() {
    /*
        11d510:	e1a03001 	mov	r3, r1
        11d514:	e1a01002 	mov	r1, r2
        11d518:	e3300000 	teq	r0, #0	; 0x0
        11d51c:	13300001 	teqne	r0, #1	; 0x1
        11d520:	13300002 	teqne	r0, #2	; 0x2
        11d524:	01a00003 	moveq	r0, r3
        11d528:	03a02008 	moveq	r2, #8	; 0x8
        11d52c:	0a000003 	beq	11d540 <CopyObject__13MemObjManagerSF10MemObjTypePvT2+0x30>
        11d530:	e3300003 	teq	r0, #3	; 0x3
        11d534:	11a0f00e 	movne	pc, lr
        11d538:	e1a00003 	mov	r0, r3
        11d53c:	e3a02024 	mov	r2, #36	; 0x24
        11d540:	ea6a5d42 	b	1bb4a50 <$memcpy>
    */
}

/**
 * Symbol: RegisterEnvironmentId__13MemObjManagerSFUlT1
 * Address: 0011d544
 */
void MemObjManager::RegisterEnvironmentId() {
    /*
        11d544:	e1a0c00d 	mov	ip, sp
        11d548:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11d54c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d550:	e1a04000 	mov	r4, r0
        11d554:	e1a05001 	mov	r5, r1
        11d558:	e24dd008 	sub	sp, sp, #8	; 0x8
        11d55c:	e1a0100d 	mov	r1, sp
        11d560:	eb09b540 	bl	38aa68 <C$$dtorvec$$Limit+0xf4>
        11d564:	e3300000 	teq	r0, #0	; 0x0
        11d568:	1a000003 	bne	11d57c <RegisterEnvironmentId__13MemObjManagerSFUlT1+0x38>
        11d56c:	e58d5004 	str	r5, [sp, #4]
        11d570:	e1a0100d 	mov	r1, sp
        11d574:	e1a00004 	mov	r0, r4
        11d578:	eb09b57f 	bl	38ab7c <C$$dtorvec$$Limit+0x208>
        11d57c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: RegisterDomainId__13MemObjManagerSFUlT1
 * Address: 0011d580
 */
void MemObjManager::RegisterDomainId() {
    /*
        11d580:	e1a0c00d 	mov	ip, sp
        11d584:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11d588:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d58c:	e1a04000 	mov	r4, r0
        11d590:	e1a05001 	mov	r5, r1
        11d594:	e24dd008 	sub	sp, sp, #8	; 0x8
        11d598:	e1a0100d 	mov	r1, sp
        11d59c:	eb09b52d 	bl	38aa58 <C$$dtorvec$$Limit+0xe4>
        11d5a0:	e3300000 	teq	r0, #0	; 0x0
        11d5a4:	1a000003 	bne	11d5b8 <RegisterDomainId__13MemObjManagerSFUlT1+0x38>
        11d5a8:	e58d5004 	str	r5, [sp, #4]
        11d5ac:	e1a0100d 	mov	r1, sp
        11d5b0:	e1a00004 	mov	r0, r4
        11d5b4:	eb09b56c 	bl	38ab6c <C$$dtorvec$$Limit+0x1f8>
        11d5b8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: RegisterHeapRef__13MemObjManagerSFUlPv
 * Address: 0011d5bc
 */
void MemObjManager::RegisterHeapRef() {
    /*
        11d5bc:	e1a0c00d 	mov	ip, sp
        11d5c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11d5c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d5c8:	e1a04000 	mov	r4, r0
        11d5cc:	e1a05001 	mov	r5, r1
        11d5d0:	e24dd008 	sub	sp, sp, #8	; 0x8
        11d5d4:	e1a0100d 	mov	r1, sp
        11d5d8:	eb09b526 	bl	38aa78 <C$$dtorvec$$Limit+0x104>
        11d5dc:	e3300000 	teq	r0, #0	; 0x0
        11d5e0:	1a000003 	bne	11d5f4 <RegisterHeapRef__13MemObjManagerSFUlPv+0x38>
        11d5e4:	e58d5004 	str	r5, [sp, #4]
        11d5e8:	e1a0100d 	mov	r1, sp
        11d5ec:	e1a00004 	mov	r0, r4
        11d5f0:	eb09b565 	bl	38ab8c <C$$dtorvec$$Limit+0x218>
        11d5f4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: GetDomainInfo__13MemObjManagerSFUlP10DomainInfoPl
 * Address: 0011d5f8
 */
void MemObjManager::GetDomainInfo() {
    /*
        11d5f8:	e1a0c00d 	mov	ip, sp
        11d5fc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        11d600:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d604:	e1a05000 	mov	r5, r0
        11d608:	e1a04001 	mov	r4, r1
        11d60c:	e1a06002 	mov	r6, r2
        11d610:	eb09db7e 	bl	394410 <IsSuperMode>
        11d614:	e3a07000 	mov	r7, #0	; 0x0
        11d618:	e3300000 	teq	r0, #0	; 0x0
        11d61c:	0a000004 	beq	11d634 <GetDomainInfo__13MemObjManagerSFUlP10DomainInfoPl+0x3c>
        11d620:	e1a01004 	mov	r1, r4
        11d624:	e1a00005 	mov	r0, r5
        11d628:	eb6ae971 	bl	1bd7bf4 <$PrimGetDomainInfo__13MemObjManagerSFUlP10DomainInfo>
        11d62c:	e1a05000 	mov	r5, r0
        11d630:	ea00000d 	b	11d66c <GetDomainInfo__13MemObjManagerSFUlP10DomainInfoPl+0x74>
        11d634:	e59f004c 	ldr	r0, [pc, #4c]	; 11d688 <GetDomainInfo__13MemObjManagerSFUlP10DomainInfoPl+0x90>
        11d638:	e5900000 	ldr	r0, [r0]
        11d63c:	e2400054 	sub	r0, r0, #84	; 0x54
        11d640:	e1a08000 	mov	r8, r0
        11d644:	e5805008 	str	r5, [r0, #8]
        11d648:	e5807000 	str	r7, [r0]
        11d64c:	e3a0002c 	mov	r0, #44	; 0x2c
        11d650:	eb0a42c7 	bl	3ae174 <GenericSWI>
        11d654:	e1b05000 	movs	r5, r0
        11d658:	1a000003 	bne	11d66c <GetDomainInfo__13MemObjManagerSFUlP10DomainInfoPl+0x74>
        11d65c:	e1a01008 	mov	r1, r8
        11d660:	e1a00004 	mov	r0, r4
        11d664:	e3a0202c 	mov	r2, #44	; 0x2c
        11d668:	eb6a5cf8 	bl	1bb4a50 <$memcpy>
        11d66c:	e285cc27 	add	ip, r5, #9984	; 0x2700
        11d670:	e37c0018 	cmn	ip, #24	; 0x18
        11d674:	0a000004 	beq	11d68c <GetDomainInfo__13MemObjManagerSFUlP10DomainInfoPl+0x94>
        11d678:	e3350000 	teq	r5, #0	; 0x0
        11d67c:	03a00001 	moveq	r0, #1	; 0x1
        11d680:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        11d684:	ea000001 	b	11d690 <GetDomainInfo__13MemObjManagerSFUlP10DomainInfoPl+0x98>
        11d688:	0c10105c 	ldceq	0, cr1, [r0], -#368
        11d68c:	e3a05000 	mov	r5, #0	; 0x0
        11d690:	e1a00007 	mov	r0, r7
        11d694:	e5865000 	str	r5, [r6]
        11d698:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: GetDomainInfoByName__13MemObjManagerSFUlP10DomainInfo
 * Address: 0011d69c
 */
void MemObjManager::GetDomainInfoByName() {
    /*
        11d69c:	e1a0c00d 	mov	ip, sp
        11d6a0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11d6a4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d6a8:	e1a05000 	mov	r5, r0
        11d6ac:	e1a04001 	mov	r4, r1
        11d6b0:	eb09db56 	bl	394410 <IsSuperMode>
        11d6b4:	e3300000 	teq	r0, #0	; 0x0
        11d6b8:	0a000004 	beq	11d6d0 <GetDomainInfoByName__13MemObjManagerSFUlP10DomainInfo+0x34>
        11d6bc:	e1a01004 	mov	r1, r4
        11d6c0:	e1a00005 	mov	r0, r5
        11d6c4:	eb6ae94b 	bl	1bd7bf8 <$PrimGetDomainInfoByName__13MemObjManagerSFUlP10DomainInfo>
        11d6c8:	e1a05000 	mov	r5, r0
        11d6cc:	ea00000d 	b	11d708 <GetDomainInfoByName__13MemObjManagerSFUlP10DomainInfo+0x6c>
        11d6d0:	e59f0038 	ldr	r0, [pc, #38]	; 11d710 <GetDomainInfoByName__13MemObjManagerSFUlP10DomainInfo+0x74>
        11d6d4:	e5900000 	ldr	r0, [r0]
        11d6d8:	e2400054 	sub	r0, r0, #84	; 0x54
        11d6dc:	e1a06000 	mov	r6, r0
        11d6e0:	e3a01001 	mov	r1, #1	; 0x1
        11d6e4:	e8800022 	stmia	r0, {r1, r5}
        11d6e8:	e3a0002c 	mov	r0, #44	; 0x2c
        11d6ec:	eb0a42a0 	bl	3ae174 <GenericSWI>
        11d6f0:	e1b05000 	movs	r5, r0
        11d6f4:	1a000003 	bne	11d708 <GetDomainInfoByName__13MemObjManagerSFUlP10DomainInfo+0x6c>
        11d6f8:	e1a01006 	mov	r1, r6
        11d6fc:	e1a00004 	mov	r0, r4
        11d700:	e3a0202c 	mov	r2, #44	; 0x2c
        11d704:	eb6a5cd1 	bl	1bb4a50 <$memcpy>
        11d708:	e1a00005 	mov	r0, r5
        11d70c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        11d710:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: GetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfoPl
 * Address: 0011d714
 */
void MemObjManager::GetEnvironmentInfo() {
    /*
        11d714:	e1a0c00d 	mov	ip, sp
        11d718:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        11d71c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d720:	e1a05000 	mov	r5, r0
        11d724:	e1a04001 	mov	r4, r1
        11d728:	e1a06002 	mov	r6, r2
        11d72c:	eb09db37 	bl	394410 <IsSuperMode>
        11d730:	e3300000 	teq	r0, #0	; 0x0
        11d734:	0a000004 	beq	11d74c <GetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfoPl+0x38>
        11d738:	e1a01004 	mov	r1, r4
        11d73c:	e1a00005 	mov	r0, r5
        11d740:	eb6aed30 	bl	1bd8c08 <$PrimGetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfo>
        11d744:	e1a05000 	mov	r5, r0
        11d748:	ea00000e 	b	11d788 <GetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfoPl+0x74>
        11d74c:	e59f0050 	ldr	r0, [pc, #50]	; 11d7a4 <GetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfoPl+0x90>
        11d750:	e5900000 	ldr	r0, [r0]
        11d754:	e2400054 	sub	r0, r0, #84	; 0x54
        11d758:	e1a07000 	mov	r7, r0
        11d75c:	e3a01002 	mov	r1, #2	; 0x2
        11d760:	e4801008 	str	r1, [r0], #8
        11d764:	e5805000 	str	r5, [r0]
        11d768:	e3a0002c 	mov	r0, #44	; 0x2c
        11d76c:	eb0a4280 	bl	3ae174 <GenericSWI>
        11d770:	e1b05000 	movs	r5, r0
        11d774:	1a000003 	bne	11d788 <GetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfoPl+0x74>
        11d778:	e1a01007 	mov	r1, r7
        11d77c:	e1a00004 	mov	r0, r4
        11d780:	e3a02014 	mov	r2, #20	; 0x14
        11d784:	eb6a5cb1 	bl	1bb4a50 <$memcpy>
        11d788:	e285cc27 	add	ip, r5, #9984	; 0x2700
        11d78c:	e37c0018 	cmn	ip, #24	; 0x18
        11d790:	0a000004 	beq	11d7a8 <GetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfoPl+0x94>
        11d794:	e3350000 	teq	r5, #0	; 0x0
        11d798:	03a00001 	moveq	r0, #1	; 0x1
        11d79c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        11d7a0:	ea000001 	b	11d7ac <GetEnvironmentInfo__13MemObjManagerSFUlP15EnvironmentInfoPl+0x98>
        11d7a4:	0c10105c 	ldceq	0, cr1, [r0], -#368
        11d7a8:	e3a05000 	mov	r5, #0	; 0x0
        11d7ac:	e3a00000 	mov	r0, #0	; 0x0
        11d7b0:	e5865000 	str	r5, [r6]
        11d7b4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: GetEnvDomainName__13MemObjManagerSFUlT1PUlPUcPl
 * Address: 0011d7b8
 */
void MemObjManager::GetEnvDomainName() {
    /*
        11d7b8:	e1a0c00d 	mov	ip, sp
        11d7bc:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        11d7c0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d7c4:	e1a07000 	mov	r7, r0
        11d7c8:	e1a06001 	mov	r6, r1
        11d7cc:	e1a05002 	mov	r5, r2
        11d7d0:	e1a04003 	mov	r4, r3
        11d7d4:	e59b9004 	ldr	r9, [fp, #4]
        11d7d8:	eb09db0c 	bl	394410 <IsSuperMode>
        11d7dc:	e3300000 	teq	r0, #0	; 0x0
        11d7e0:	0a00000c 	beq	11d818 <GetEnvDomainName__13MemObjManagerSFUlT1PUlPUcPl+0x60>
        11d7e4:	e24dd004 	sub	sp, sp, #4	; 0x4
        11d7e8:	e1a0300d 	mov	r3, sp
        11d7ec:	e92d0008 	stmdb	sp!, {r3}
        11d7f0:	e1a03004 	mov	r3, r4
        11d7f4:	e1a02005 	mov	r2, r5
        11d7f8:	e1a01006 	mov	r1, r6
        11d7fc:	e1a00007 	mov	r0, r7
        11d800:	eb6aecff 	bl	1bd8c04 <$PrimGetEnvDomainName__13MemObjManagerSFUlT1PUlPUcT4>
        11d804:	e5fd1004 	ldrb	r1, [sp, #4]!
        11d808:	e3310000 	teq	r1, #0	; 0x0
        11d80c:	15890000 	strne	r0, [r9]
        11d810:	e4dd0004 	ldrb	r0, [sp], #4
        11d814:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        11d818:	e59f0054 	ldr	r0, [pc, #54]	; 11d874 <GetEnvDomainName__13MemObjManagerSFUlT1PUlPUcPl+0xbc>
        11d81c:	e5900000 	ldr	r0, [r0]
        11d820:	e2408054 	sub	r8, r0, #84	; 0x54
        11d824:	e3a00003 	mov	r0, #3	; 0x3
        11d828:	e8880081 	stmia	r8, {r0, r7}
        11d82c:	e3a0002c 	mov	r0, #44	; 0x2c
        11d830:	e5886008 	str	r6, [r8, #8]
        11d834:	eb0a424e 	bl	3ae174 <GenericSWI>
        11d838:	e3300000 	teq	r0, #0	; 0x0
        11d83c:	1a000006 	bne	11d85c <GetEnvDomainName__13MemObjManagerSFUlT1PUlPUcPl+0xa4>
        11d840:	e5d8100d 	ldrb	r1, [r8, #13]
        11d844:	e3310000 	teq	r1, #0	; 0x0
        11d848:	0a000006 	beq	11d868 <GetEnvDomainName__13MemObjManagerSFUlT1PUlPUcPl+0xb0>
        11d84c:	e5981004 	ldr	r1, [r8, #4]
        11d850:	e5851000 	str	r1, [r5]
        11d854:	e5d8100c 	ldrb	r1, [r8, #12]
        11d858:	e5c41000 	strb	r1, [r4]
        11d85c:	e5d8100d 	ldrb	r1, [r8, #13]
        11d860:	e3310000 	teq	r1, #0	; 0x0
        11d864:	1a000000 	bne	11d86c <GetEnvDomainName__13MemObjManagerSFUlT1PUlPUcPl+0xb4>
        11d868:	e5890000 	str	r0, [r9]
        11d86c:	e5d8000d 	ldrb	r0, [r8, #13]
        11d870:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        11d874:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: FindEntryByIndex__13MemObjManagerSF10MemObjTypeUlPvPl
 * Address: 0011d878
 */
void MemObjManager::FindEntryByIndex() {
    /*
        11d878:	e1a0c00d 	mov	ip, sp
        11d87c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        11d880:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d884:	e1a05000 	mov	r5, r0
        11d888:	e1a07001 	mov	r7, r1
        11d88c:	e1a06002 	mov	r6, r2
        11d890:	e1a04003 	mov	r4, r3
        11d894:	eb09dadd 	bl	394410 <IsSuperMode>
        11d898:	e3a0a001 	mov	sl, #1	; 0x1
        11d89c:	e3a09000 	mov	r9, #0	; 0x0
        11d8a0:	e3300000 	teq	r0, #0	; 0x0
        11d8a4:	0a000007 	beq	11d8c8 <FindEntryByIndex__13MemObjManagerSF10MemObjTypeUlPvPl+0x50>
        11d8a8:	e1a02006 	mov	r2, r6
        11d8ac:	e1a01007 	mov	r1, r7
        11d8b0:	e1a00005 	mov	r0, r5
        11d8b4:	eb6ae8d0 	bl	1bd7bfc <$PrimGetEntryByIndex__13MemObjManagerSF10MemObjTypeUlPv>
        11d8b8:	e3300000 	teq	r0, #0	; 0x0
        11d8bc:	0a000017 	beq	11d920 <FindEntryByIndex__13MemObjManagerSF10MemObjTypeUlPvPl+0xa8>
        11d8c0:	e5840000 	str	r0, [r4]
        11d8c4:	ea000013 	b	11d918 <FindEntryByIndex__13MemObjManagerSF10MemObjTypeUlPvPl+0xa0>
        11d8c8:	e59f0030 	ldr	r0, [pc, #30]	; 11d900 <FindEntryByIndex__13MemObjManagerSF10MemObjTypeUlPvPl+0x88>
        11d8cc:	e5900000 	ldr	r0, [r0]
        11d8d0:	e2408054 	sub	r8, r0, #84	; 0x54
        11d8d4:	e3a00004 	mov	r0, #4	; 0x4
        11d8d8:	e88800a1 	stmia	r8, {r0, r5, r7}
        11d8dc:	e3a0002c 	mov	r0, #44	; 0x2c
        11d8e0:	eb0a4223 	bl	3ae174 <GenericSWI>
        11d8e4:	e3500000 	cmp	r0, #0	; 0x0
        11d8e8:	1a000005 	bne	11d904 <FindEntryByIndex__13MemObjManagerSF10MemObjTypeUlPvPl+0x8c>
        11d8ec:	e288200c 	add	r2, r8, #12	; 0xc
        11d8f0:	e1a01006 	mov	r1, r6
        11d8f4:	e1a00005 	mov	r0, r5
        11d8f8:	eb6acbd0 	bl	1bd0840 <$CopyObject__13MemObjManagerSF10MemObjTypePvT2>
        11d8fc:	ea000007 	b	11d920 <FindEntryByIndex__13MemObjManagerSF10MemObjTypeUlPvPl+0xa8>
        11d900:	0c10105c 	ldceq	0, cr1, [r0], -#368
        11d904:	0a000005 	beq	11d920 <FindEntryByIndex__13MemObjManagerSF10MemObjTypeUlPvPl+0xa8>
        11d908:	e280cc27 	add	ip, r0, #9984	; 0x2700
        11d90c:	e37c0018 	cmn	ip, #24	; 0x18
        11d910:	1affffea 	bne	11d8c0 <FindEntryByIndex__13MemObjManagerSF10MemObjTypeUlPvPl+0x48>
        11d914:	e5849000 	str	r9, [r4]
        11d918:	e1a00009 	mov	r0, r9
        11d91c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11d920:	e1a0000a 	mov	r0, sl
        11d924:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: FindEntryByName__13MemObjManagerSF10MemObjTypeUlPv
 * Address: 0011d928
 */
void MemObjManager::FindEntryByName() {
    /*
        11d928:	e1a0c00d 	mov	ip, sp
        11d92c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        11d930:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d934:	e1a04000 	mov	r4, r0
        11d938:	e1a06001 	mov	r6, r1
        11d93c:	e1a05002 	mov	r5, r2
        11d940:	eb09dab2 	bl	394410 <IsSuperMode>
        11d944:	e3300000 	teq	r0, #0	; 0x0
        11d948:	0a000005 	beq	11d964 <FindEntryByName__13MemObjManagerSF10MemObjTypeUlPv+0x3c>
        11d94c:	e1a02005 	mov	r2, r5
        11d950:	e1a01006 	mov	r1, r6
        11d954:	e1a00004 	mov	r0, r4
        11d958:	eb6aeca8 	bl	1bd8c00 <$PrimGetEntryByName__13MemObjManagerSF10MemObjTypeUlPv>
        11d95c:	e1a06000 	mov	r6, r0
        11d960:	ea00000c 	b	11d998 <FindEntryByName__13MemObjManagerSF10MemObjTypeUlPv+0x70>
        11d964:	e59f0034 	ldr	r0, [pc, #34]	; 11d9a0 <FindEntryByName__13MemObjManagerSF10MemObjTypeUlPv+0x78>
        11d968:	e5900000 	ldr	r0, [r0]
        11d96c:	e2407054 	sub	r7, r0, #84	; 0x54
        11d970:	e3a00005 	mov	r0, #5	; 0x5
        11d974:	e8870051 	stmia	r7, {r0, r4, r6}
        11d978:	e3a0002c 	mov	r0, #44	; 0x2c
        11d97c:	eb0a41fc 	bl	3ae174 <GenericSWI>
        11d980:	e1b06000 	movs	r6, r0
        11d984:	1a000003 	bne	11d998 <FindEntryByName__13MemObjManagerSF10MemObjTypeUlPv+0x70>
        11d988:	e287200c 	add	r2, r7, #12	; 0xc
        11d98c:	e1a01005 	mov	r1, r5
        11d990:	e1a00004 	mov	r0, r4
        11d994:	eb6acba9 	bl	1bd0840 <$CopyObject__13MemObjManagerSF10MemObjTypePvT2>
        11d998:	e1a00006 	mov	r0, r6
        11d99c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        11d9a0:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: EntryLocByIndex__13MemObjManagerSF10MemObjTypeUl
 * Address: 0011d9a4
 */
void MemObjManager::EntryLocByIndex() {
    /*
        11d9a4:	e92d4000 	stmdb	sp!, {lr}
        11d9a8:	e1a02000 	mov	r2, r0
        11d9ac:	e3a00000 	mov	r0, #0	; 0x0
        11d9b0:	e3520004 	cmp	r2, #4	; 0x4
        11d9b4:	a8bd8000 	ldmgeia	sp!, {pc}
        11d9b8:	e59f3024 	ldr	r3, [pc, #24]	; 11d9e4 <EntryLocByIndex__13MemObjManagerSF10MemObjTypeUl+0x40>
        11d9bc:	e5b3c018 	ldr	ip, [r3, #24]!
        11d9c0:	e0823082 	add	r3, r2, r2, lsl #1
        11d9c4:	e08c2103 	add	r2, ip, r3, lsl #2
        11d9c8:	e592e004 	ldr	lr, [r2, #4]
        11d9cc:	e15e0001 	cmp	lr, r1
        11d9d0:	98bd8000 	ldmlsia	sp!, {pc}
        11d9d4:	e79c0103 	ldr	r0, [ip, r3, lsl #2]
        11d9d8:	e5922008 	ldr	r2, [r2, #8]
        11d9dc:	e0200291 	mla	r0, r1, r2, r0
        11d9e0:	e8bd8000 	ldmia	sp!, {pc}
        11d9e4:	0c1061c4 	ldfeqs	f6, [r0], -#784
    */
}

/**
 * Symbol: RegisterEntryByName__13MemObjManagerSF10MemObjTypeUlPv
 * Address: 0011d9e8
 */
void MemObjManager::RegisterEntryByName() {
    /*
        11d9e8:	e1a0c00d 	mov	ip, sp
        11d9ec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11d9f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11d9f4:	e1a04000 	mov	r4, r0
        11d9f8:	e1a05001 	mov	r5, r1
        11d9fc:	e1a06002 	mov	r6, r2
        11da00:	eb09da82 	bl	394410 <IsSuperMode>
        11da04:	e3300000 	teq	r0, #0	; 0x0
        11da08:	0a000004 	beq	11da20 <RegisterEntryByName__13MemObjManagerSF10MemObjTypeUlPv+0x38>
        11da0c:	e1a02006 	mov	r2, r6
        11da10:	e1a01005 	mov	r1, r5
        11da14:	e1a00004 	mov	r0, r4
        11da18:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        11da1c:	ea6aec7d 	b	1bd8c18 <$PrimSetEntryByName__13MemObjManagerSF10MemObjTypeUlPv>
        11da20:	e59f0028 	ldr	r0, [pc, #28]	; 11da50 <RegisterEntryByName__13MemObjManagerSF10MemObjTypeUlPv+0x68>
        11da24:	e5900000 	ldr	r0, [r0]
        11da28:	e3a01007 	mov	r1, #7	; 0x7
        11da2c:	e2400048 	sub	r0, r0, #72	; 0x48
        11da30:	e9200032 	stmdb	r0!, {r1, r4, r5}
        11da34:	e280100c 	add	r1, r0, #12	; 0xc
        11da38:	e1a02006 	mov	r2, r6
        11da3c:	e1a00004 	mov	r0, r4
        11da40:	eb6acb7e 	bl	1bd0840 <$CopyObject__13MemObjManagerSF10MemObjTypePvT2>
        11da44:	e3a0002c 	mov	r0, #44	; 0x2c
        11da48:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        11da4c:	ea0a41c8 	b	3ae174 <GenericSWI>
        11da50:	0c10105c 	ldceq	0, cr1, [r0], -#368
    */
}

/**
 * Symbol: EntryLocByName__13MemObjManagerSF10MemObjTypeUl
 * Address: 0011db94
 */
void MemObjManager::EntryLocByName() {
    /*
        11db94:	e92d4010 	stmdb	sp!, {r4, lr}
        11db98:	e3a0c000 	mov	ip, #0	; 0x0
        11db9c:	e3500004 	cmp	r0, #4	; 0x4
        11dba0:	aa00000f 	bge	11dbe4 <EntryLocByName__13MemObjManagerSF10MemObjTypeUl+0x50>
        11dba4:	e59f2040 	ldr	r2, [pc, #40]	; 11dbec <EntryLocByName__13MemObjManagerSF10MemObjTypeUl+0x58>
        11dba8:	e5922018 	ldr	r2, [r2, #24]
        11dbac:	e0800080 	add	r0, r0, r0, lsl #1
        11dbb0:	e082e100 	add	lr, r2, r0, lsl #2
        11dbb4:	e99e4008 	ldmib	lr, {r3, lr}
        11dbb8:	e7920100 	ldr	r0, [r2, r0, lsl #2]
        11dbbc:	e3a02000 	mov	r2, #0	; 0x0
        11dbc0:	e3530000 	cmp	r3, #0	; 0x0
        11dbc4:	9a000006 	bls	11dbe4 <EntryLocByName__13MemObjManagerSF10MemObjTypeUl+0x50>
        11dbc8:	e5904000 	ldr	r4, [r0]
        11dbcc:	e1340001 	teq	r4, r1
        11dbd0:	08bd8010 	ldmeqia	sp!, {r4, pc}
        11dbd4:	e2822001 	add	r2, r2, #1	; 0x1
        11dbd8:	e080000e 	add	r0, r0, lr
        11dbdc:	e1520003 	cmp	r2, r3
        11dbe0:	3afffff8 	bcc	11dbc8 <EntryLocByName__13MemObjManagerSF10MemObjTypeUl+0x34>
        11dbe4:	e1a0000c 	mov	r0, ip
        11dbe8:	e8bd8010 	ldmia	sp!, {r4, pc}
        11dbec:	0c1061c4 	ldfeqs	f6, [r0], -#784
    */
}

/**
 * Symbol: PrimGetEntryByIndex__13MemObjManagerSF10MemObjTypeUlPv
 * Address: 0011dd18
 */
void MemObjManager::PrimGetEntryByIndex() {
    /*
        11dd18:	e1a0c00d 	mov	ip, sp
        11dd1c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11dd20:	e24cb004 	sub	fp, ip, #4	; 0x4
        11dd24:	e1a04000 	mov	r4, r0
        11dd28:	e1a05002 	mov	r5, r2
        11dd2c:	eb6aceea 	bl	1bd18dc <$EntryLocByIndex__13MemObjManagerSF10MemObjTypeUl>
        11dd30:	e3300000 	teq	r0, #0	; 0x0
        11dd34:	03a000e8 	moveq	r0, #232	; 0xe8
        11dd38:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        11dd3c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        11dd40:	e1a02000 	mov	r2, r0
        11dd44:	e1a01005 	mov	r1, r5
        11dd48:	e1a00004 	mov	r0, r4
        11dd4c:	eb6acabb 	bl	1bd0840 <$CopyObject__13MemObjManagerSF10MemObjTypePvT2>
        11dd50:	e3a00000 	mov	r0, #0	; 0x0
        11dd54:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PrimSetEntryByIndex__13MemObjManagerSF10MemObjTypeUlPv
 * Address: 0011de38
 */
void MemObjManager::PrimSetEntryByIndex() {
    /*
        11de38:	e1a0c00d 	mov	ip, sp
        11de3c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11de40:	e24cb004 	sub	fp, ip, #4	; 0x4
        11de44:	e1a04000 	mov	r4, r0
        11de48:	e1a05002 	mov	r5, r2
        11de4c:	eb6acea2 	bl	1bd18dc <$EntryLocByIndex__13MemObjManagerSF10MemObjTypeUl>
        11de50:	e1b01000 	movs	r1, r0
        11de54:	03a000e8 	moveq	r0, #232	; 0xe8
        11de58:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        11de5c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        11de60:	e1a02005 	mov	r2, r5
        11de64:	e1a00004 	mov	r0, r4
        11de68:	eb6aca74 	bl	1bd0840 <$CopyObject__13MemObjManagerSF10MemObjTypePvT2>
        11de6c:	e3a00000 	mov	r0, #0	; 0x0
        11de70:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PrimGetEntryByName__13MemObjManagerSF10MemObjTypeUlPv
 * Address: 0011e130
 */
void MemObjManager::PrimGetEntryByName() {
    /*
        11e130:	e1a0c00d 	mov	ip, sp
        11e134:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11e138:	e24cb004 	sub	fp, ip, #4	; 0x4
        11e13c:	e1a04000 	mov	r4, r0
        11e140:	e1a05002 	mov	r5, r2
        11e144:	eb6acde5 	bl	1bd18e0 <$EntryLocByName__13MemObjManagerSF10MemObjTypeUl>
        11e148:	e3300000 	teq	r0, #0	; 0x0
        11e14c:	03a000e8 	moveq	r0, #232	; 0xe8
        11e150:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        11e154:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        11e158:	e1a02000 	mov	r2, r0
        11e15c:	e1a01005 	mov	r1, r5
        11e160:	e1a00004 	mov	r0, r4
        11e164:	eb6ac9b5 	bl	1bd0840 <$CopyObject__13MemObjManagerSF10MemObjTypePvT2>
        11e168:	e3a00000 	mov	r0, #0	; 0x0
        11e16c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PrimSetEntryByName__13MemObjManagerSF10MemObjTypeUlPv
 * Address: 0011e170
 */
void MemObjManager::PrimSetEntryByName() {
    /*
        11e170:	e1a0c00d 	mov	ip, sp
        11e174:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11e178:	e24cb004 	sub	fp, ip, #4	; 0x4
        11e17c:	e1a04000 	mov	r4, r0
        11e180:	e1a05002 	mov	r5, r2
        11e184:	eb6acdd5 	bl	1bd18e0 <$EntryLocByName__13MemObjManagerSF10MemObjTypeUl>
        11e188:	e1b01000 	movs	r1, r0
        11e18c:	03a000e8 	moveq	r0, #232	; 0xe8
        11e190:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        11e194:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        11e198:	e1a02005 	mov	r2, r5
        11e19c:	e1a00004 	mov	r0, r4
        11e1a0:	eb6ac9a6 	bl	1bd0840 <$CopyObject__13MemObjManagerSF10MemObjTypePvT2>
        11e1a4:	e3a00000 	mov	r0, #0	; 0x0
        11e1a8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

