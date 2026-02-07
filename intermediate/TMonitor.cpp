#include "DDKIncludes/OS600/UserGlobals.h"

/**
 * Symbol: TMonitor::__ct(void)
 * Address: 0011fb60
 */
TMonitor::TMonitor(void) {
    /*
        11fb60:	e1a0c00d 	mov	ip, sp
        11fb64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11fb68:	e24cb004 	sub	fp, ip, #4	; 0x4
        11fb6c:	e1b04000 	movs	r4, r0
        11fb70:	1a000003 	bne	11fb84 <TMonitor::__ct(void)+0x24>
        11fb74:	e3a00048 	mov	r0, #72	; 0x48
        11fb78:	eb6abaee 	bl	1bce738 <$__nw(unsigned int)>
        11fb7c:	e1b04000 	movs	r4, r0
        11fb80:	0a00000d 	beq	11fbbc <TMonitor::__ct(void)+0x5c>
        11fb84:	e2840024 	add	r0, r4, #36	; 0x24
        11fb88:	e1a03004 	mov	r3, r4
        11fb8c:	e59f2030 	ldr	r2, [pc, #30]	; 11fbc4 <TMonitor::__ct(void)+0x64>
        11fb90:	e3a010c8 	mov	r1, #200	; 0xc8
        11fb94:	eb6ab6c9 	bl	1bcd6c0 <TDoubleQContainer::$__ct(char *, void (*)(void *, char *), void *)>
        11fb98:	e3a00000 	mov	r0, #0	; 0x0
        11fb9c:	e5840010 	str	r0, [r4, #16]	; fObjectCreatedByUs
        11fba0:	e5840018 	str	r0, [r4, #24]	; fField24
        11fba4:	e5840020 	str	r0, [r4, #32]	; fField32
        11fba8:	e5840038 	str	r0, [r4, #56]	; fField56
        11fbac:	e584001c 	str	r0, [r4, #28]	; fField28
        11fbb0:	e5840014 	str	r0, [r4, #20]	; fField20
        11fbb4:	e5840040 	str	r0, [r4, #64]	; fField64
        11fbb8:	e5c40046 	strb	r0, [r4, #70]	; fField70
        11fbbc:	e1a00004 	mov	r0, r4
        11fbc0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        11fbc4:	01af6b58 	moveq	r6, r8, asr fp
    */
}

/**
 * Symbol: TMonitor::FlushTasksOnMonitor(void)
 * Address: 0011fbc8
 */
TMonitor::FlushTasksOnMonitor(void) {
    /*
        11fbc8:	e1a0c00d 	mov	ip, sp
        11fbcc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11fbd0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11fbd4:	e1a04000 	mov	r4, r0
        11fbd8:	e2800024 	add	r0, r0, #36	; 0x24
        11fbdc:	e1a05000 	mov	r5, r0
        11fbe0:	eb6ae839 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        11fbe4:	e3300000 	teq	r0, #0	; 0x0
        11fbe8:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        11fbec:	e5941010 	ldr	r1, [r4, #16]	; fObjectCreatedByUs
        11fbf0:	e2411001 	sub	r1, r1, #1	; 0x1
        11fbf4:	e5841010 	str	r1, [r4, #16]	; fObjectCreatedByUs
        11fbf8:	eb6795a9 	bl	1b052a4 <$ScheduleTask(TTask *)>
        11fbfc:	e1a00005 	mov	r0, r5
        11fc00:	eb6ae831 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        11fc04:	e3300000 	teq	r0, #0	; 0x0
        11fc08:	1afffff7 	bne	11fbec <TMonitor::FlushTasksOnMonitor(void)+0x24>
        11fc0c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMonitor::SetCallerRegister(int, unsigned long)
 * Address: 0011fe28
 */
TMonitor::SetCallerRegister(int, unsigned long) {
    /*
        11fe28:	e5900020 	ldr	r0, [r0, #32]	; fField32
        11fe2c:	e3300000 	teq	r0, #0	; 0x0
        11fe30:	10800101 	addne	r0, r0, r1, lsl #2
        11fe34:	15a02010 	strne	r2, [r0, #16]!	; fObjectCreatedByUs
        11fe38:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: Init__8TMonitorFPFPvUlT1_vUlPvP12TEnvironmentUcT2T5
 * Address: 0011fe98
 */
long		TMonitor::Init(MonitorProcPtr monitorProc, ULong stackSize, void* monitorObject = nil, TObjectId environmentId = 0, Boolean faultMonitor = false, ULong name = 'MNTR', Boolean rebootProtected = false) {
    /*
        11fe98:	e1a0c00d 	mov	ip, sp
        11fe9c:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        11fea0:	e24cb004 	sub	fp, ip, #4	; 0x4
        11fea4:	e1a04000 	mov	r4, r0
        11fea8:	e1a06002 	mov	r6, r2
        11feac:	e1a05003 	mov	r5, r3
        11feb0:	e3a07000 	mov	r7, #0	; 0x0
        11feb4:	e59b0010 	ldr	r0, [fp, #16]	; fObjectCreatedByUs
        11feb8:	e28ba008 	add	sl, fp, #8	; 0x8
        11febc:	e89a0404 	ldmia	sl, {r2, sl}
        11fec0:	e59b9004 	ldr	r9, [fp, #4]	; TUMonitor
        11fec4:	e5c42044 	strb	r2, [r4, #68]	; fField68
        11fec8:	e5c40045 	strb	r0, [r4, #69]	; fField69
        11fecc:	e3a00000 	mov	r0, #0	; 0x0
        11fed0:	e5841038 	str	r1, [r4, #56]	; fField56
        11fed4:	eb67425a 	bl	1af0844 <TTask::$__ct(void)>
        11fed8:	e584003c 	str	r0, [r4, #60]	; fField60
        11fedc:	e1b01000 	movs	r1, r0
        11fee0:	e59f805c 	ldr	r8, [pc, #5c]	; 11ff44 <Init__8TMonitorFPFPvUlT1_vUlPvP12TEnvironmentUcT2T5+0xac>
        11fee4:	0a000014 	beq	11ff3c <Init__8TMonitorFPFPvUlT1_vUlPvP12TEnvironmentUcT2T5+0xa4>
        11fee8:	e59f0058 	ldr	r0, [pc, #58]	; 11ff48 <Init__8TMonitorFPFPvUlT1_vUlPvP12TEnvironmentUcT2T5+0xb0>
        11feec:	e5900000 	ldr	r0, [r0]
        11fef0:	e3a03001 	mov	r3, #1	; 0x1
        11fef4:	e3a02003 	mov	r2, #3	; 0x3
        11fef8:	eb674672 	bl	1af18c8 <TObjectTable::$Add(TKernelObject *, KernelTypes, unsigned long)>
        11fefc:	e5840040 	str	r0, [r4, #64]	; fField64
        11ff00:	e1a0c000 	mov	ip, r0
        11ff04:	e1a03009 	mov	r3, r9
        11ff08:	e1a0200a 	mov	r2, sl
        11ff0c:	e59f0038 	ldr	r0, [pc, #38]	; 11ff4c <Init__8TMonitorFPFPvUlT1_vUlPvP12TEnvironmentUcT2T5+0xb4>
        11ff10:	e5901000 	ldr	r1, [r0]
        11ff14:	e3a00000 	mov	r0, #0	; 0x0
        11ff18:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        11ff1c:	e1a0300c 	mov	r3, ip
        11ff20:	e1a02006 	mov	r2, r6
        11ff24:	e594003c 	ldr	r0, [r4, #60]	; fField60
        11ff28:	e59f1020 	ldr	r1, [pc, #20]	; 11ff50 <Init__8TMonitorFPFPvUlT1_vUlPvP12TEnvironmentUcT2T5+0xb8>	; fField20
        11ff2c:	eb6773c2 	bl	1afce3c <$Init__5TTaskFPFPvUlT2_vUlPvN32P12TEnvironment>
        11ff30:	e28dd010 	add	sp, sp, #16	; 0x10
        11ff34:	e3300000 	teq	r0, #0	; 0x0
        11ff38:	0a000005 	beq	11ff54 <Init__8TMonitorFPFPvUlT1_vUlPvP12TEnvironmentUcT2T5+0xbc>
        11ff3c:	e1a00008 	mov	r0, r8
        11ff40:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        11ff44:	ffffd8e7 	swinv	0x00ffd8e7
        11ff48:	0c100fc8 	ldceq	15, cr0, [r0], -#800
        11ff4c:	0c101534 	ldceq	5, cr1, [r0], -#208
        11ff50:	01a00024 	moveq	r0, r4, lsr #32
        11ff54:	e5940000 	ldr	r0, [r4]
        11ff58:	e594103c 	ldr	r1, [r4, #60]	; fField60
        11ff5c:	e5a100d8 	str	r0, [r1, #216]!
        11ff60:	e3a00000 	mov	r0, #0	; 0x0
        11ff64:	e5845018 	str	r5, [r4, #24]	; fField24
        11ff68:	eb673e20 	bl	1aef7f0 <TSharedMemMsg::$__ct(void)>
        11ff6c:	e1b05000 	movs	r5, r0
        11ff70:	0a000008 	beq	11ff98 <Init__8TMonitorFPFPvUlT1_vUlPvP12TEnvironmentUcT2T5+0x100>
        11ff74:	e1a01009 	mov	r1, r9
        11ff78:	e1a00005 	mov	r0, r5
        11ff7c:	eb676f9b 	bl	1afbdf0 <TSharedMemMsg::$Init(TEnvironment *)>
        11ff80:	e3300000 	teq	r0, #0	; 0x0
        11ff84:	0a000003 	beq	11ff98 <Init__8TMonitorFPFPvUlT1_vUlPvP12TEnvironmentUcT2T5+0x100>
        11ff88:	e1a00005 	mov	r0, r5
        11ff8c:	e3a01001 	mov	r1, #1	; 0x1
        11ff90:	eb674235 	bl	1af086c <TSharedMemMsg::$__dt(void)>
        11ff94:	e3a05000 	mov	r5, #0	; 0x0
        11ff98:	e5942000 	ldr	r2, [r4]
        11ff9c:	e284301c 	add	r3, r4, #28	; 0x1c
        11ffa0:	e1a00005 	mov	r0, r5
        11ffa4:	e3a01009 	mov	r1, #9	; 0x9
        11ffa8:	eb678c77 	bl	1b0318c <$RegisterObject(TKernelObject *, KernelTypes, unsigned long, unsigned long *)>
        11ffac:	e5b4001c 	ldr	r0, [r4, #28]!	; fField28
        11ffb0:	e3300000 	teq	r0, #0	; 0x0
        11ffb4:	01a07008 	moveq	r7, r8
        11ffb8:	e1a00007 	mov	r0, r7
        11ffbc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TMonitor::__dt(void)
 * Address: 0011ffc0
 */
TMonitor::~TMonitor(void) {
    /*
        11ffc0:	e1a0c00d 	mov	ip, sp
        11ffc4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11ffc8:	e24cb004 	sub	fp, ip, #4	; 0x4
        11ffcc:	e1a04000 	mov	r4, r0
        11ffd0:	e1a05001 	mov	r5, r1
        11ffd4:	e3a01001 	mov	r1, #1	; 0x1
        11ffd8:	eb67a10b 	bl	1b0840c <TMonitor::$Suspend(unsigned long)>
        11ffdc:	e594101c 	ldr	r1, [r4, #28]	; fField28
        11ffe0:	e59f6024 	ldr	r6, [pc, #24]	; 12000c <TMonitor::__dt(void)+0x4c>	; fField24
        11ffe4:	e5960000 	ldr	r0, [r6]
        11ffe8:	eb678c79 	bl	1b031d4 <TObjectTable::$Remove(unsigned long)>
        11ffec:	e5941040 	ldr	r1, [r4, #64]	; fField64
        11fff0:	e5960000 	ldr	r0, [r6]
        11fff4:	eb678c76 	bl	1b031d4 <TObjectTable::$Remove(unsigned long)>
        11fff8:	e3150001 	tst	r5, #1	; 0x1
        11fffc:	11a00004 	movne	r0, r4
        120000:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        120004:	1a6ab5b5 	bne	1bcd6e0 <$__dl(void *)>
        120008:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        12000c:	0c100fc8 	ldceq	15, cr0, [r0], -#800
    */
}

/**
 * Symbol: TMonitor::SetResult(TTask *, long)
 * Address: 00120010
 */
TMonitor::SetResult(TTask *, long) {
    /*
        120010:	e591006c 	ldr	r0, [r1, #108]
        120014:	e3100502 	tst	r0, #8388608	; 0x800000
        120018:	0a000001 	beq	120024 <TMonitor::SetResult(TTask *, long)+0x14>
        12001c:	e3320000 	teq	r2, #0	; 0x0
        120020:	01a0f00e 	moveq	pc, lr
        120024:	e5a12010 	str	r2, [r1, #16]!	; fObjectCreatedByUs
        120028:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TMonitor::Suspend(unsigned long)
 * Address: 0012002c
 */
TMonitor::Suspend(unsigned long) {
    /*
        12002c:	e1a0c00d 	mov	ip, sp
        120030:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        120034:	e24cb004 	sub	fp, ip, #4	; 0x4
        120038:	e1a04000 	mov	r4, r0
        12003c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        120040:	e1800001 	orr	r0, r0, r1
        120044:	e5840014 	str	r0, [r4, #20]	; fField20
        120048:	e5940020 	ldr	r0, [r4, #32]	; fField32
        12004c:	e3300000 	teq	r0, #0	; 0x0
        120050:	0a000017 	beq	1200b4 <TMonitor::Suspend(unsigned long)+0x88>
        120054:	e2840024 	add	r0, r4, #36	; 0x24
        120058:	e1a07000 	mov	r7, r0
        12005c:	eb6ae71a 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        120060:	e1b06000 	movs	r6, r0
        120064:	e3a050d1 	mov	r5, #209	; 0xd1
        120068:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        12006c:	0a00000c 	beq	1200a4 <TMonitor::Suspend(unsigned long)+0x78>
        120070:	e1a01006 	mov	r1, r6
        120074:	e1a00004 	mov	r0, r4
        120078:	e1a02005 	mov	r2, r5
        12007c:	eb6798ac 	bl	1b06334 <TMonitor::$SetResult(TTask *, long)>
        120080:	e1a00006 	mov	r0, r6
        120084:	eb679486 	bl	1b052a4 <$ScheduleTask(TTask *)>
        120088:	e5940010 	ldr	r0, [r4, #16]	; fObjectCreatedByUs
        12008c:	e2400001 	sub	r0, r0, #1	; 0x1
        120090:	e5840010 	str	r0, [r4, #16]	; fObjectCreatedByUs
        120094:	e1a00007 	mov	r0, r7
        120098:	eb6ae70b 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        12009c:	e1b06000 	movs	r6, r0
        1200a0:	1afffff2 	bne	120070 <TMonitor::Suspend(unsigned long)+0x44>
        1200a4:	e5b40020 	ldr	r0, [r4, #32]!	; fField32
        1200a8:	e3300000 	teq	r0, #0	; 0x0
        1200ac:	13a00000 	movne	r0, #0	; 0x0
        1200b0:	1a000000 	bne	1200b8 <TMonitor::Suspend(unsigned long)+0x8c>
        1200b4:	e3a00001 	mov	r0, #1	; 0x1
        1200b8:	e20000ff 	and	r0, r0, #255	; 0xff
        1200bc:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TMonitor::DeleteTaskOnMonitorQ(TTask *)
 * Address: 001200c0
 */
TMonitor::DeleteTaskOnMonitorQ(TTask *) {
    /*
        1200c0:	e1a0c00d 	mov	ip, sp
        1200c4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1200c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1200cc:	e1a04000 	mov	r4, r0
        1200d0:	eb09ca7a 	bl	392ac0 <EnterAtomic>
        1200d4:	e5940010 	ldr	r0, [r4, #16]	; fObjectCreatedByUs
        1200d8:	e2400001 	sub	r0, r0, #1	; 0x1
        1200dc:	e5a40010 	str	r0, [r4, #16]!	; fObjectCreatedByUs
        1200e0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1200e4:	ea09ca8c 	b	392b1c <ExitAtomic>
    */
}

/**
 * Symbol: TMonitor::SetUpEntry(TTask *)
 * Address: 001200e8
 */
TMonitor::SetUpEntry(TTask *) {
    /*
        1200e8:	e1a0c00d 	mov	ip, sp
        1200ec:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1200f0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1200f4:	e1a04000 	mov	r4, r0
        1200f8:	e1a05001 	mov	r5, r1
        1200fc:	e591006c 	ldr	r0, [r1, #108]
        120100:	e3100502 	tst	r0, #8388608	; 0x800000
        120104:	0a000008 	beq	12012c <TMonitor::SetUpEntry(TTask *)+0x44>
        120108:	e2851010 	add	r1, r5, #16	; 0x10
        12010c:	e3a03001 	mov	r3, #1	; 0x1
        120110:	e3a02064 	mov	r2, #100	; 0x64
        120114:	e594001c 	ldr	r0, [r4, #28]	; fField28
        120118:	eb679ca8 	bl	1b073c0 <$SMemSetBufferKernelGlue>
        12011c:	e3e01001 	mvn	r1, #1	; 0x1
        120120:	e594003c 	ldr	r0, [r4, #60]	; fField60
        120124:	e5a01014 	str	r1, [r0, #20]!	; fField20
        120128:	ea00000d 	b	120164 <TMonitor::SetUpEntry(TTask *)+0x7c>
        12012c:	e5950014 	ldr	r0, [r5, #20]	; fField20
        120130:	e3700001 	cmn	r0, #1	; 0x1
        120134:	1a000008 	bne	12015c <TMonitor::SetUpEntry(TTask *)+0x74>
        120138:	e1a01005 	mov	r1, r5
        12013c:	e1a00004 	mov	r0, r4
        120140:	e3a02000 	mov	r2, #0	; 0x0
        120144:	eb67987a 	bl	1b06334 <TMonitor::$SetResult(TTask *, long)>
        120148:	e5940010 	ldr	r0, [r4, #16]	; fObjectCreatedByUs
        12014c:	e2400001 	sub	r0, r0, #1	; 0x1
        120150:	e5a40010 	str	r0, [r4, #16]!	; fObjectCreatedByUs
        120154:	e3a00000 	mov	r0, #0	; 0x0
        120158:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        12015c:	e594103c 	ldr	r1, [r4, #60]	; fField60
        120160:	e5a10014 	str	r0, [r1, #20]!	; fField20
        120164:	eb09ca55 	bl	392ac0 <EnterAtomic>
        120168:	e59f0014 	ldr	r0, [pc, #14]	; 120184 <TMonitor::SetUpEntry(TTask *)+0x9c>
        12016c:	e5d00000 	ldrb	r0, [r0]
        120170:	e3a06001 	mov	r6, #1	; 0x1
        120174:	e3300000 	teq	r0, #0	; 0x0
        120178:	0a000002 	beq	120188 <TMonitor::SetUpEntry(TTask *)+0xa0>
        12017c:	eb09ca66 	bl	392b1c <ExitAtomic>
        120180:	ea000025 	b	12021c <TMonitor::SetUpEntry(TTask *)+0x134>
        120184:	0c101050 	ldceq	0, cr1, [r0], -#320
        120188:	e5d40045 	ldrb	r0, [r4, #69]	; fField69
        12018c:	e3300000 	teq	r0, #0	; 0x0
        120190:	0a000003 	beq	1201a4 <TMonitor::SetUpEntry(TTask *)+0xbc>
        120194:	e59f0088 	ldr	r0, [pc, #88]	; 120224 <TMonitor::SetUpEntry(TTask *)+0x13c>
        120198:	e5901000 	ldr	r1, [r0]
        12019c:	e2811001 	add	r1, r1, #1	; 0x1
        1201a0:	e5801000 	str	r1, [r0]
        1201a4:	eb09ca5c 	bl	392b1c <ExitAtomic>
        1201a8:	e5845020 	str	r5, [r4, #32]	; fField32
        1201ac:	e5940000 	ldr	r0, [r4]
        1201b0:	e58500d4 	str	r0, [r5, #212]
        1201b4:	e59500e8 	ldr	r0, [r5, #232]
        1201b8:	e1b00000 	movs	r0, r0
        1201bc:	13a00001 	movne	r0, #1	; 0x1
        1201c0:	e5c40046 	strb	r0, [r4, #70]	; fField70
        1201c4:	e59f005c 	ldr	r0, [pc, #5c]	; 120228 <TMonitor::SetUpEntry(TTask *)+0x140>
        1201c8:	e594103c 	ldr	r1, [r4, #60]	; fField60
        1201cc:	e5a1004c 	str	r0, [r1, #76]!
        1201d0:	e2841038 	add	r1, r4, #56	; 0x38
        1201d4:	e8910003 	ldmia	r1, {r0, r1}
        1201d8:	e5a1001c 	str	r0, [r1, #28]!	; fField28
        1201dc:	e5950018 	ldr	r0, [r5, #24]	; fField24
        1201e0:	e594103c 	ldr	r1, [r4, #60]	; fField60
        1201e4:	e5a10018 	str	r0, [r1, #24]!	; fField24
        1201e8:	e594003c 	ldr	r0, [r4, #60]	; fField60
        1201ec:	e5941018 	ldr	r1, [r4, #24]	; fField24
        1201f0:	e5a01010 	str	r1, [r0, #16]!	; fObjectCreatedByUs
        1201f4:	e595003c 	ldr	r0, [r5, #60]	; fField60
        1201f8:	e594103c 	ldr	r1, [r4, #60]	; fField60
        1201fc:	e5a1003c 	str	r0, [r1, #60]!	; fField60
        120200:	e594003c 	ldr	r0, [r4, #60]	; fField60
        120204:	e59010f8 	ldr	r1, [r0, #248]
        120208:	e5a01044 	str	r1, [r0, #68]!	; fField68
        12020c:	e594003c 	ldr	r0, [r4, #60]	; fField60
        120210:	e5a0507c 	str	r5, [r0, #124]!
        120214:	e5b4003c 	ldr	r0, [r4, #60]!	; fField60
        120218:	eb679421 	bl	1b052a4 <$ScheduleTask(TTask *)>
        12021c:	e1a00006 	mov	r0, r6
        120220:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        120224:	0c10104c 	ldceq	0, cr1, [r0], -#304
        120228:	01a00024 	moveq	r0, r4, lsr #32
    */
}

/**
 * Symbol: TMonitor::Aquire(void)
 * Address: 0012022c
 */
TMonitor::Aquire(void) {
    /*
        12022c:	e1a0c00d 	mov	ip, sp
        120230:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        120234:	e24cb004 	sub	fp, ip, #4	; 0x4
        120238:	e1a04000 	mov	r4, r0
        12023c:	e3a06000 	mov	r6, #0	; 0x0
        120240:	e59f0084 	ldr	r0, [pc, #84]	; 1202cc <TMonitor::Aquire(void)+0xa0>
        120244:	e5905000 	ldr	r5, [r0]
        120248:	e5940014 	ldr	r0, [r4, #20]	; fField20
        12024c:	e3100003 	tst	r0, #3	; 0x3
        120250:	13a060d1 	movne	r6, #209	; 0xd1
        120254:	12466b0a 	subne	r6, r6, #10240	; 0x2800
        120258:	1a00001f 	bne	1202dc <TMonitor::Aquire(void)+0xb0>
        12025c:	e595006c 	ldr	r0, [r5, #108]
        120260:	e3100502 	tst	r0, #8388608	; 0x800000
        120264:	05950014 	ldreq	r0, [r5, #20]	; fField20
        120268:	03700001 	cmneq	r0, #1	; 0x1
        12026c:	1a000008 	bne	120294 <TMonitor::Aquire(void)+0x68>
        120270:	e5950008 	ldr	r0, [r5, #8]	; TUMonitor
        120274:	e5941008 	ldr	r1, [r4, #8]	; TUMonitor
        120278:	e1300001 	teq	r0, r1
        12027c:	13a060cd 	movne	r6, #205	; 0xcd
        120280:	12466b0a 	subne	r6, r6, #10240	; 0x2800
        120284:	1a000014 	bne	1202dc <TMonitor::Aquire(void)+0xb0>
        120288:	e1a00004 	mov	r0, r4
        12028c:	e3a01002 	mov	r1, #2	; 0x2
        120290:	eb67a05d 	bl	1b0840c <TMonitor::$Suspend(unsigned long)>
        120294:	e1a00005 	mov	r0, r5
        120298:	eb67a47c 	bl	1b09490 <$UnScheduleTask(TTask *)>
        12029c:	e5940010 	ldr	r0, [r4, #16]	; fObjectCreatedByUs
        1202a0:	e2800001 	add	r0, r0, #1	; 0x1
        1202a4:	e5840010 	str	r0, [r4, #16]	; fObjectCreatedByUs
        1202a8:	e3300001 	teq	r0, #1	; 0x1
        1202ac:	1a000007 	bne	1202d0 <TMonitor::Aquire(void)+0xa4>
        1202b0:	e1a01005 	mov	r1, r5
        1202b4:	e1a00004 	mov	r0, r4
        1202b8:	eb679827 	bl	1b0635c <TMonitor::$SetUpEntry(TTask *)>
        1202bc:	e3300000 	teq	r0, #0	; 0x0
        1202c0:	01a00005 	moveq	r0, r5
        1202c4:	0b6793f6 	bleq	1b052a4 <$ScheduleTask(TTask *)>
        1202c8:	ea000003 	b	1202dc <TMonitor::Aquire(void)+0xb0>
        1202cc:	0c100ff8 	ldceq	15, cr0, [r0], -#992
        1202d0:	e2840024 	add	r0, r4, #36	; 0x24
        1202d4:	e1a01005 	mov	r1, r5
        1202d8:	eb6ab921 	bl	1bce764 <TDoubleQContainer::$Add(void *)>
        1202dc:	e1a00006 	mov	r0, r6
        1202e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TMonitor::Release(long)
 * Address: 001202e4
 */
TMonitor::Release(long) {
    /*
        1202e4:	e1a0c00d 	mov	ip, sp
        1202e8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1202ec:	e24cb004 	sub	fp, ip, #4	; 0x4
        1202f0:	e1a04000 	mov	r4, r0
        1202f4:	e1a05001 	mov	r5, r1
        1202f8:	eb09c9f0 	bl	392ac0 <EnterAtomic>
        1202fc:	e5d40045 	ldrb	r0, [r4, #69]	; fField69
        120300:	e3300000 	teq	r0, #0	; 0x0
        120304:	0a000008 	beq	12032c <TMonitor::Release(long)+0x48>
        120308:	e59f006c 	ldr	r0, [pc, #6c]	; 12037c <TMonitor::Release(long)+0x98>
        12030c:	e5901000 	ldr	r1, [r0]
        120310:	e2511001 	subs	r1, r1, #1	; 0x1
        120314:	e5801000 	str	r1, [r0]
        120318:	1a000003 	bne	12032c <TMonitor::Release(long)+0x48>
        12031c:	e59f005c 	ldr	r0, [pc, #5c]	; 120380 <TMonitor::Release(long)+0x9c>
        120320:	e5d00000 	ldrb	r0, [r0]
        120324:	e3300000 	teq	r0, #0	; 0x0
        120328:	1b6ae673 	blne	1bd9cfc <$Restart(void)>
        12032c:	eb09c9fa 	bl	392b1c <ExitAtomic>
        120330:	e5940020 	ldr	r0, [r4, #32]	; fField32
        120334:	e1a01000 	mov	r1, r0
        120338:	e590604c 	ldr	r6, [r0, #76]
        12033c:	e590006c 	ldr	r0, [r0, #108]
        120340:	e3100501 	tst	r0, #4194304	; 0x400000
        120344:	e59f2038 	ldr	r2, [pc, #38]	; 120384 <TMonitor::Release(long)+0xa0>
        120348:	02003002 	andeq	r3, r0, #2	; 0x2
        12034c:	03330000 	teqeq	r3, #0	; 0x0
        120350:	1a00000d 	bne	12038c <TMonitor::Release(long)+0xa8>
        120354:	e3100502 	tst	r0, #8388608	; 0x800000
        120358:	0a00000d 	beq	120394 <TMonitor::Release(long)+0xb0>
        12035c:	e3350004 	teq	r5, #4	; 0x4
        120360:	0a000009 	beq	12038c <TMonitor::Release(long)+0xa8>
        120364:	e3350005 	teq	r5, #5	; 0x5
        120368:	1a000009 	bne	120394 <TMonitor::Release(long)+0xb0>
        12036c:	e59f0014 	ldr	r0, [pc, #14]	; 120388 <TMonitor::Release(long)+0xa4>
        120370:	e5900000 	ldr	r0, [r0]
        120374:	eb6ab8fa 	bl	1bce764 <TDoubleQContainer::$Add(void *)>
        120378:	ea00000e 	b	1203b8 <TMonitor::Release(long)+0xd4>
        12037c:	0c10104c 	ldceq	0, cr1, [r0], -#304
        120380:	0c101050 	ldceq	0, cr1, [r0], -#320
        120384:	01bdde84 	moveqs	sp, r4, lsl #29
        120388:	0c101038 	ldceq	0, cr1, [r0], -#224
        12038c:	e1a06002 	mov	r6, r2
        120390:	ea000008 	b	1203b8 <TMonitor::Release(long)+0xd4>
        120394:	e59f0074 	ldr	r0, [pc, #74]	; 120410 <TMonitor::Release(long)+0x12c>
        120398:	e5900000 	ldr	r0, [r0]
        12039c:	e5a0111c 	str	r1, [r0, #284]!
        1203a0:	e5940020 	ldr	r0, [r4, #32]	; fField32
        1203a4:	eb6793be 	bl	1b052a4 <$ScheduleTask(TTask *)>
        1203a8:	e1a02005 	mov	r2, r5
        1203ac:	e5941020 	ldr	r1, [r4, #32]	; fField32
        1203b0:	e1a00004 	mov	r0, r4
        1203b4:	eb6797de 	bl	1b06334 <TMonitor::$SetResult(TTask *, long)>
        1203b8:	e5940020 	ldr	r0, [r4, #32]	; fField32
        1203bc:	e3a05000 	mov	r5, #0	; 0x0
        1203c0:	e5a0604c 	str	r6, [r0, #76]!
        1203c4:	e5940020 	ldr	r0, [r4, #32]	; fField32
        1203c8:	e5a050d4 	str	r5, [r0, #212]!
        1203cc:	e5940010 	ldr	r0, [r4, #16]	; fObjectCreatedByUs
        1203d0:	e2400001 	sub	r0, r0, #1	; 0x1
        1203d4:	e5840010 	str	r0, [r4, #16]	; fObjectCreatedByUs
        1203d8:	e594003c 	ldr	r0, [r4, #60]	; fField60
        1203dc:	eb67a42b 	bl	1b09490 <$UnScheduleTask(TTask *)>
        1203e0:	e5845020 	str	r5, [r4, #32]	; fField32
        1203e4:	e5940014 	ldr	r0, [r4, #20]	; fField20
        1203e8:	e3100001 	tst	r0, #1	; 0x1
        1203ec:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        1203f0:	e2840024 	add	r0, r4, #36	; 0x24
        1203f4:	eb6ae634 	bl	1bd9ccc <TDoubleQContainer::$Remove(void)>
        1203f8:	e3300000 	teq	r0, #0	; 0x0
        1203fc:	11a01000 	movne	r1, r0
        120400:	11a00004 	movne	r0, r4
        120404:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        120408:	1a6797d3 	bne	1b0635c <TMonitor::$SetUpEntry(TTask *)>
        12040c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        120410:	0c100fd0 	ldceq	15, cr0, [r0], -#832
    */
}

