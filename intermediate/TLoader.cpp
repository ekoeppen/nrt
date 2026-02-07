#include "include/TLoader.h"

/**
 * Symbol: TLoader::MainConstructor(void)
 * Address: 00113cac
 */
TLoader::MainConstructor(void) {
    /*
        113cac:	ea6a6692 	b	1bad6fc <TAppWorld::$MainConstructor(void)>
    */
}

/**
 * Symbol: TLoader::MainDestructor(void)
 * Address: 00113cb0
 */
TLoader::MainDestructor(void) {
    /*
        113cb0:	ea6a6a93 	b	1bae704 <TAppWorld::$MainDestructor(void)>
    */
}

/**
 * Symbol: TLoader::GetSizeOf(void)
 * Address: 00113cb4
 */
TLoader::GetSizeOf(void) {
    /*
        113cb4:	e3a00070 	mov	r0, #112	; 0x70
        113cb8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TLoader::TheMain(void)
 * Address: 0011401c
 */
TLoader::TheMain(void) {
    /*
        11401c:	e1a0c00d 	mov	ip, sp
        114020:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        114024:	e24cb004 	sub	fp, ip, #4	; 0x4
        114028:	eb655109 	bl	1a68454 <$RegisterVoyagerMiscIntf(void)>
        11402c:	eb67f209 	bl	1b10858 <$LoadHighROMDriverPackages(void)>
        114030:	eb67eded 	bl	1b0f7ec <$InitLicenseeDomain(void)>
        114034:	eb680691 	bl	1b15a80 <$LoadStartupDriver(void)>
        114038:	eb6be9c1 	bl	1c0e744 <$LoadPlatformDriver(void)>
        11403c:	e59f0168 	ldr	r0, [pc, #168]	; 1141ac <TLoader::TheMain(void)+0x190>
        114040:	e3a01000 	mov	r1, #0	; 0x0
        114044:	eb6b0692 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        114048:	e59f1160 	ldr	r1, [pc, #160]	; 1141b0 <TLoader::TheMain(void)+0x194>
        11404c:	e59f0160 	ldr	r0, [pc, #160]	; 1141b4 <TLoader::TheMain(void)+0x198>
        114050:	e5801000 	str	r1, [r0]
        114054:	e59f115c 	ldr	r1, [pc, #15c]	; 1141b8 <TLoader::TheMain(void)+0x19c>
        114058:	e5801004 	str	r1, [r0, #4]	; fField4
        11405c:	e59f1158 	ldr	r1, [pc, #158]	; 1141bc <TLoader::TheMain(void)+0x1a0>
        114060:	e5a01008 	str	r1, [r0, #8]!	; fField8
        114064:	eb072048 	bl	2dc18c <InitEvents(void)>
        114068:	eb67a378 	bl	1afce50 <$InitAlertManager(void)>
        11406c:	eb699722 	bl	1b79cfc <$InitializeSound(void)>
        114070:	eb63c8b6 	bl	1a06350 <$InitializeCommManager(void)>
        114074:	eb688ecd 	bl	1b37bb0 <$InitCardServices(void)>
        114078:	e59f0140 	ldr	r0, [pc, #140]	; 1141c0 <TLoader::TheMain(void)+0x1a4>
        11407c:	e5900000 	ldr	r0, [r0]
        114080:	e3100b02 	tst	r0, #2048	; 0x800
        114084:	1b69bc51 	blne	1b831d0 <$InitTestAgent(void)>
        114088:	eb67fa2c 	bl	1b12940 <$ZapInternalStoreCheck(void)>
        11408c:	e24dd00c 	sub	sp, sp, #12	; 0xc
        114090:	e28d1008 	add	r1, sp, #8	; 0x8
        114094:	e59f0128 	ldr	r0, [pc, #128]	; 1141c4 <TLoader::TheMain(void)+0x1a8>
        114098:	eb6afa18 	bl	1bd2900 <$FindEnvironmentId__13MemObjManagerSFUlPUl>
        11409c:	e28d1004 	add	r1, sp, #4	; 0x4
        1140a0:	e59f4120 	ldr	r4, [pc, #120]	; 1141c8 <TLoader::TheMain(void)+0x1ac>
        1140a4:	e1a00004 	mov	r0, r4
        1140a8:	eb6afa14 	bl	1bd2900 <$FindEnvironmentId__13MemObjManagerSFUlPUl>
        1140ac:	e1a0100d 	mov	r1, sp
        1140b0:	e1a00004 	mov	r0, r4
        1140b4:	eb6af60f 	bl	1bd18f8 <$FindDomainId__13MemObjManagerSFUlPUl>
        1140b8:	eb6be9ad 	bl	1c0e774 <$InitPowerManager(void)>
        1140bc:	e24dd008 	sub	sp, sp, #8	; 0x8
        1140c0:	e3a05000 	mov	r5, #0	; 0x0
        1140c4:	e59d0010 	ldr	r0, [sp, #16]
        1140c8:	e5cd5004 	strb	r5, [sp, #4]	; fField4
        1140cc:	e3a03000 	mov	r3, #0	; 0x0
        1140d0:	e58d0000 	str	r0, [sp]
        1140d4:	e92d0008 	stmdb	sp!, {r3}
        1140d8:	e59d100c 	ldr	r1, [sp, #12]
        1140dc:	e28d0004 	add	r0, sp, #4	; 0x4
        1140e0:	e3a02001 	mov	r2, #1	; 0x1
        1140e4:	eb6ae99d 	bl	1bce760 <TUEnvironment::$Add(unsigned long, unsigned char, unsigned char, unsigned char)>
        1140e8:	e28dd004 	add	sp, sp, #4	; 0x4
        1140ec:	e59f40d8 	ldr	r4, [pc, #d8]	; 1141cc <TLoader::TheMain(void)+0x1b0>
        1140f0:	e5946000 	ldr	r6, [r4]
        1140f4:	e59f00d4 	ldr	r0, [pc, #d4]	; 1141d0 <TLoader::TheMain(void)+0x1b4>
        1140f8:	e590006c 	ldr	r0, [r0, #108]	; fField108
        1140fc:	e5840000 	str	r0, [r4]
        114100:	e59d000c 	ldr	r0, [sp, #12]
        114104:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        114108:	eb67a764 	bl	1afdea0 <$InitPSSManager__FUlT1>
        11410c:	e5846000 	str	r6, [r4]
        114110:	e59d1008 	ldr	r1, [sp, #8]	; fField8
        114114:	e1a0000d 	mov	r0, sp
        114118:	eb6b16ea 	bl	1bd9cc8 <TUEnvironment::$Remove(unsigned long)>
        11411c:	e3a03000 	mov	r3, #0	; 0x0
        114120:	e92d0008 	stmdb	sp!, {r3}
        114124:	e59d100c 	ldr	r1, [sp, #12]
        114128:	e28d0004 	add	r0, sp, #4	; 0x4
        11412c:	e3a02000 	mov	r2, #0	; 0x0
        114130:	eb6ae98a 	bl	1bce760 <TUEnvironment::$Add(unsigned long, unsigned char, unsigned char, unsigned char)>
        114134:	e28dd004 	add	sp, sp, #4	; 0x4
        114138:	e1a0000d 	mov	r0, sp
        11413c:	e3a01000 	mov	r1, #0	; 0x0
        114140:	eb6ae977 	bl	1bce724 <TUObject::$__dt(void)>
        114144:	e28dd00c 	add	sp, sp, #12	; 0xc
        114148:	e5cd5004 	strb	r5, [sp, #4]	; fField4
        11414c:	e58d5000 	str	r5, [sp]
        114150:	e59f307c 	ldr	r3, [pc, #7c]	; 1141d4 <TLoader::TheMain(void)+0x1b8>
        114154:	e3a0200a 	mov	r2, #10	; 0xa
        114158:	e3a01000 	mov	r1, #0	; 0x0
        11415c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        114160:	e59f1070 	ldr	r1, [pc, #70]	; 1141d8 <TLoader::TheMain(void)+0x1bc>
        114164:	e28d000c 	add	r0, sp, #12	; 0xc
        114168:	e3a03000 	mov	r3, #0	; 0x0
        11416c:	e3a02b1a 	mov	r2, #26624	; 0x6800
        114170:	eb6b0653 	bl	1bd5ac4 <$Init__6TUTaskFPFPvUlT2_vUlT2PvN22>
        114174:	e28dd00c 	add	sp, sp, #12	; 0xc
        114178:	e3300000 	teq	r0, #0	; 0x0
        11417c:	01a0000d 	moveq	r0, sp
        114180:	0b6b232f 	bleq	1bdce44 <TUTask::$Start(void)>
        114184:	e1a0000d 	mov	r0, sp
        114188:	e3a01000 	mov	r1, #0	; 0x0
        11418c:	eb6ae964 	bl	1bce724 <TUObject::$__dt(void)>
        114190:	e28dd008 	add	sp, sp, #8	; 0x8
        114194:	e59f0040 	ldr	r0, [pc, #40]	; 1141dc <TLoader::TheMain(void)+0x1c0>
        114198:	e5900000 	ldr	r0, [r0]
        11419c:	e5900000 	ldr	r0, [r0]
        1141a0:	eb6b1af0 	bl	1bdad68 <$SetBequeathId(unsigned long)>
        1141a4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        1141a8:	ea6b2735 	b	1bdde84 <$TaskKillSelf>
        1141ac:	0c101060 	ldceq	0, cr1, [r0], -#384
        1141b0:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1141b4:	0c101070 	ldceq	0, cr1, [r0], -#448
        1141b8:	69646c65 	stmvsdb	r4!, {r0, r2, r5, r6, sl, fp, sp, lr}^
        1141bc:	65787420 	ldrvsb	r7, [r8, -#1056]!
        1141c0:	000013f8 	streqd	r1, [r0], -r8
        1141c4:	75736572 	ldrvcb	r6, [r3, -#1394]!
        1141c8:	72616d73 	rsbvc	r6, r1, #7360	; 0x1cc0
        1141cc:	0c101534 	ldceq	5, cr1, [r0], -#208
        1141d0:	0c1010e8 	ldceq	0, cr1, [r0], -#928
        1141d4:	6d61696e 	stcvsl	9, cr6, [r1, -#440]!
        1141d8:	01aa52d8 	ldreqd	r5, [sl, r8]!
        1141dc:	0c100fc4 	ldceq	15, cr0, [r0], -#784
    */
}

