#include "include/PSoundDriver.h"

/**
 * Symbol: PSoundDriver::OutputIntHandlerDispatcher(void)
 * Address: 001e60fc
 */
PSoundDriver::OutputIntHandlerDispatcher(void) {
    /*
        1e60fc:	e1a0c00d 	mov	ip, sp
        1e6100:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e6104:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e6108:	e1a04000 	mov	r4, r0
        1e610c:	eb068c43 	bl	389220 <PSoundDriver::OutputIntHandler(void)>
        1e6110:	e1a05000 	mov	r5, r0
        1e6114:	e5941010 	ldr	r1, [r4, #16]
        1e6118:	e3310000 	teq	r1, #0	; 0x0
        1e611c:	15b40014 	ldrne	r0, [r4, #20]!
        1e6120:	11a0e00f 	movne	lr, pc
        1e6124:	11a0f001 	movne	pc, r1
        1e6128:	e1a00005 	mov	r0, r5
        1e612c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PSoundDriver::InputIntHandlerDispatcher(void)
 * Address: 001e6130
 */
PSoundDriver::InputIntHandlerDispatcher(void) {
    /*
        1e6130:	e1a0c00d 	mov	ip, sp
        1e6134:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1e6138:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e613c:	e1a04000 	mov	r4, r0
        1e6140:	eb068c39 	bl	38922c <PSoundDriver::InputIntHandler(void)>
        1e6144:	e1a05000 	mov	r5, r0
        1e6148:	e5941018 	ldr	r1, [r4, #24]
        1e614c:	e3310000 	teq	r1, #0	; 0x0
        1e6150:	15b4001c 	ldrne	r0, [r4, #28]!
        1e6154:	11a0e00f 	movne	lr, pc
        1e6158:	11a0f001 	movne	pc, r1
        1e615c:	e1a00005 	mov	r0, r5
        1e6160:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PSoundDriver::SetOutputCallbackProc(long (*)(void *), void *)
 * Address: 001e6164
 */
PSoundDriver::SetOutputCallbackProc(long (*)(void *), void *) {
    /*
        1e6164:	e280000c 	add	r0, r0, #12	; 0xc
        1e6168:	e9a00006 	stmib	r0!, {r1, r2}
        1e616c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PSoundDriver::SetInputCallbackProc(long (*)(void *), void *)
 * Address: 001e6170
 */
PSoundDriver::SetInputCallbackProc(long (*)(void *), void *) {
    /*
        1e6170:	e2800014 	add	r0, r0, #20	; 0x14
        1e6174:	e9a00006 	stmib	r0!, {r1, r2}
        1e6178:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: New__12PSoundDriverSFPc
 * Address: 003890a0
 */
void PSoundDriver::New() {
    /*
        3890a0:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        3890a4:	e1a01000 	mov	r1, r0
        3890a8:	ebfffff6 	bl	389088 <ClassInfo__9TGSMCodecSFv+0x54>
        3890ac:	eb6119bc 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        3890b0:	e1100000 	tst	r0, r0
        3890b4:	e28dd004 	add	sp, sp, #4	; 0x4
        3890b8:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        3890bc:	01a0f00e 	moveq	pc, lr
        3890c0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3890c4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3890c8:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: PSoundDriver::Delete(void)
 * Address: 003890cc
 */
PSoundDriver::Delete(void) {
    /*
        3890cc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3890d0:	e92d4001 	stmdb	sp!, {r0, lr}
        3890d4:	e28fe004 	add	lr, pc, #4	; 0x4
        3890d8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3890dc:	e28cf00c 	add	pc, ip, #12	; 0xc
        3890e0:	e8bd4001 	ldmia	sp!, {r0, lr}
        3890e4:	ea61261c 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: PSoundDriver::SetSoundHardwareInfo(TSoundDriverInfo const *)
 * Address: 003890e8
 */
PSoundDriver::SetSoundHardwareInfo(TSoundDriverInfo const *) {
    /*
        3890e8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3890ec:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3890f0:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: PSoundDriver::GetSoundHardwareInfo(TSoundDriverInfo *)
 * Address: 003890f4
 */
PSoundDriver::GetSoundHardwareInfo(TSoundDriverInfo *) {
    /*
        3890f4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3890f8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3890fc:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: PSoundDriver::SetOutputBuffers(unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 00389100
 */
PSoundDriver::SetOutputBuffers(unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
        389100:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389104:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389108:	e28cf018 	add	pc, ip, #24	; 0x18
    */
}

/**
 * Symbol: PSoundDriver::SetInputBuffers(unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 0038910c
 */
PSoundDriver::SetInputBuffers(unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
        38910c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389110:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389114:	e28cf01c 	add	pc, ip, #28	; 0x1c
    */
}

/**
 * Symbol: PSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long)
 * Address: 00389118
 */
PSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long) {
    /*
        389118:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38911c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389120:	e28cf020 	add	pc, ip, #32	; 0x20
    */
}

/**
 * Symbol: PSoundDriver::ScheduleInputBuffer(unsigned long, unsigned long)
 * Address: 00389124
 */
PSoundDriver::ScheduleInputBuffer(unsigned long, unsigned long) {
    /*
        389124:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389128:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38912c:	e28cf024 	add	pc, ip, #36	; 0x24
    */
}

/**
 * Symbol: PSoundDriver::PowerOutputOn(long)
 * Address: 00389130
 */
PSoundDriver::PowerOutputOn(long) {
    /*
        389130:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389134:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389138:	e28cf028 	add	pc, ip, #40	; 0x28
    */
}

/**
 * Symbol: PSoundDriver::PowerOutputOff(void)
 * Address: 0038913c
 */
PSoundDriver::PowerOutputOff(void) {
    /*
        38913c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389140:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389144:	e28cf02c 	add	pc, ip, #44	; 0x2c
    */
}

/**
 * Symbol: PSoundDriver::PowerInputOn(long)
 * Address: 00389148
 */
PSoundDriver::PowerInputOn(long) {
    /*
        389148:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38914c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389150:	e28cf030 	add	pc, ip, #48	; 0x30
    */
}

/**
 * Symbol: PSoundDriver::PowerInputOff(void)
 * Address: 00389154
 */
PSoundDriver::PowerInputOff(void) {
    /*
        389154:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389158:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38915c:	e28cf034 	add	pc, ip, #52	; 0x34
    */
}

/**
 * Symbol: PSoundDriver::StartOutput(void)
 * Address: 00389160
 */
PSoundDriver::StartOutput(void) {
    /*
        389160:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389164:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389168:	e28cf038 	add	pc, ip, #56	; 0x38
    */
}

/**
 * Symbol: PSoundDriver::StartInput(void)
 * Address: 0038916c
 */
PSoundDriver::StartInput(void) {
    /*
        38916c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389170:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389174:	e28cf03c 	add	pc, ip, #60	; 0x3c
    */
}

/**
 * Symbol: PSoundDriver::StopOutput(void)
 * Address: 00389178
 */
PSoundDriver::StopOutput(void) {
    /*
        389178:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38917c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389180:	e28cf040 	add	pc, ip, #64	; 0x40
    */
}

/**
 * Symbol: PSoundDriver::StopInput(void)
 * Address: 00389184
 */
PSoundDriver::StopInput(void) {
    /*
        389184:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389188:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38918c:	e28cf044 	add	pc, ip, #68	; 0x44
    */
}

/**
 * Symbol: PSoundDriver::OutputIsEnabled(void)
 * Address: 00389190
 */
PSoundDriver::OutputIsEnabled(void) {
    /*
        389190:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389194:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389198:	e28cf048 	add	pc, ip, #72	; 0x48
    */
}

/**
 * Symbol: PSoundDriver::InputIsEnabled(void)
 * Address: 0038919c
 */
PSoundDriver::InputIsEnabled(void) {
    /*
        38919c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3891a0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3891a4:	e28cf04c 	add	pc, ip, #76	; 0x4c
    */
}

/**
 * Symbol: PSoundDriver::OutputIsRunning(void)
 * Address: 003891a8
 */
PSoundDriver::OutputIsRunning(void) {
    /*
        3891a8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3891ac:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3891b0:	e28cf050 	add	pc, ip, #80	; 0x50
    */
}

/**
 * Symbol: PSoundDriver::InputIsRunning(void)
 * Address: 003891b4
 */
PSoundDriver::InputIsRunning(void) {
    /*
        3891b4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3891b8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3891bc:	e28cf054 	add	pc, ip, #84	; 0x54
    */
}

/**
 * Symbol: PSoundDriver::CurrentOutputPtr(void)
 * Address: 003891c0
 */
PSoundDriver::CurrentOutputPtr(void) {
    /*
        3891c0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3891c4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3891c8:	e28cf058 	add	pc, ip, #88	; 0x58
    */
}

/**
 * Symbol: PSoundDriver::CurrentInputPtr(void)
 * Address: 003891cc
 */
PSoundDriver::CurrentInputPtr(void) {
    /*
        3891cc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3891d0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3891d4:	e28cf05c 	add	pc, ip, #92	; 0x5c
    */
}

/**
 * Symbol: PSoundDriver::OutputVolume(long)
 * Address: 003891d8
 */
PSoundDriver::OutputVolume(long) {
    /*
        3891d8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3891dc:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3891e0:	e28cf060 	add	pc, ip, #96	; 0x60
    */
}

/**
 * Symbol: PSoundDriver::OutputVolume(void)
 * Address: 003891e4
 */
PSoundDriver::OutputVolume(void) {
    /*
        3891e4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3891e8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3891ec:	e28cf064 	add	pc, ip, #100	; 0x64
    */
}

/**
 * Symbol: PSoundDriver::InputVolume(long)
 * Address: 003891f0
 */
PSoundDriver::InputVolume(long) {
    /*
        3891f0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3891f4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3891f8:	e28cf068 	add	pc, ip, #104	; 0x68
    */
}

/**
 * Symbol: PSoundDriver::InputVolume(void)
 * Address: 003891fc
 */
PSoundDriver::InputVolume(void) {
    /*
        3891fc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389200:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389204:	e28cf06c 	add	pc, ip, #108	; 0x6c
    */
}

/**
 * Symbol: PSoundDriver::EnableExtSoundSource(long)
 * Address: 00389208
 */
PSoundDriver::EnableExtSoundSource(long) {
    /*
        389208:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38920c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389210:	e28cf070 	add	pc, ip, #112	; 0x70
    */
}

/**
 * Symbol: PSoundDriver::DisableExtSoundSource(long)
 * Address: 00389214
 */
PSoundDriver::DisableExtSoundSource(long) {
    /*
        389214:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389218:	e590c008 	ldr	ip, [r0, #8]	; fField8
        38921c:	e28cf074 	add	pc, ip, #116	; 0x74
    */
}

/**
 * Symbol: PSoundDriver::OutputIntHandler(void)
 * Address: 00389220
 */
PSoundDriver::OutputIntHandler(void) {
    /*
        389220:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389224:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389228:	e28cf078 	add	pc, ip, #120	; 0x78
    */
}

/**
 * Symbol: PSoundDriver::InputIntHandler(void)
 * Address: 0038922c
 */
PSoundDriver::InputIntHandler(void) {
    /*
        38922c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389230:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389234:	e28cf07c 	add	pc, ip, #124	; 0x7c
        389238:	00000000 	andeq	r0, r0, r0
        38923c:	00000048 	andeq	r0, r0, r8, asr #32
        389240:	00000057 	andeq	r0, r0, r7, asr r0
        389244:	00000060 	andeq	r0, r0, r0, rrx
        389248:	00000078 	andeq	r0, r0, r8, ror r0
        38924c:	000000f4 	streqd	r0, [r0], -r4
        389250:	ea5fdb75 	b	1b8002c <$Sizeof__18PCirrusSoundDriverSFv>
        38925c:	ea5fdb73 	b	1b80030 <PCirrusSoundDriver::$New(void)>
        389260:	ea5fdb73 	b	1b80034 <PCirrusSoundDriver::$Delete(void)>
        389270:	ea000001 	b	38927c <ClassInfo__18PCirrusSoundDriverSFv+0x8>
    */
}

