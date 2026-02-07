#include "include/TSemaphore.h"

/**
 * Symbol: TSemaphore::BlockOnInc(TTask *, SemFlags)
 * Address: 001d4d98
 */
TSemaphore::BlockOnInc(TTask *, SemFlags) {
    /*
        1d4d98:	e1a0c00d 	mov	ip, sp
        1d4d9c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d4da0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d4da4:	e1a05000 	mov	r5, r0
        1d4da8:	e1a04001 	mov	r4, r1
        1d4dac:	e3120001 	tst	r2, #1	; 0x1
        1d4db0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1d4db4:	e1a00004 	mov	r0, r4
        1d4db8:	eb64d1b4 	bl	1b09490 <$UnScheduleTask(TTask *)>
        1d4dbc:	e2850020 	add	r0, r5, #32	; 0x20
        1d4dc0:	e1a03005 	mov	r3, r5
        1d4dc4:	e1a01004 	mov	r1, r4
        1d4dc8:	e3a02601 	mov	r2, #1048576	; 0x100000
        1d4dcc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1d4dd0:	ea6472b9 	b	1af18bc <TTaskQueue::$Add(TTask *, KernelObjectState, TTaskContainer *)>
    */
}

/**
 * Symbol: TSemaphore::WakeTasksOnZero(void)
 * Address: 001d4dd4
 */
TSemaphore::WakeTasksOnZero(void) {
    /*
        1d4dd4:	e1a0c00d 	mov	ip, sp
        1d4dd8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d4ddc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d4de0:	e2800018 	add	r0, r0, #24	; 0x18
        1d4de4:	e1a04000 	mov	r4, r0
        1d4de8:	e3a01601 	mov	r1, #1048576	; 0x100000
        1d4dec:	eb64b8f5 	bl	1b031c8 <TTaskQueue::$Remove(KernelObjectState)>
        1d4df0:	e3300000 	teq	r0, #0	; 0x0
        1d4df4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1d4df8:	eb64c129 	bl	1b052a4 <$ScheduleTask(TTask *)>
        1d4dfc:	e1a00004 	mov	r0, r4
        1d4e00:	e3a01601 	mov	r1, #1048576	; 0x100000
        1d4e04:	eb64b8ef 	bl	1b031c8 <TTaskQueue::$Remove(KernelObjectState)>
        1d4e08:	e3300000 	teq	r0, #0	; 0x0
        1d4e0c:	1afffff9 	bne	1d4df8 <TSemaphore::WakeTasksOnZero(void)+0x24>
        1d4e10:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1d4e14:	ea64d1b3 	b	1b094e8 <$WantSchedule(void)>
    */
}

/**
 * Symbol: TSemaphore::WakeTasksOnInc(void)
 * Address: 001d4e18
 */
TSemaphore::WakeTasksOnInc(void) {
    /*
        1d4e18:	e1a0c00d 	mov	ip, sp
        1d4e1c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d4e20:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d4e24:	e2800020 	add	r0, r0, #32	; 0x20
        1d4e28:	e1a04000 	mov	r4, r0
        1d4e2c:	e3a01601 	mov	r1, #1048576	; 0x100000
        1d4e30:	eb64b8e4 	bl	1b031c8 <TTaskQueue::$Remove(KernelObjectState)>
        1d4e34:	e3300000 	teq	r0, #0	; 0x0
        1d4e38:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        1d4e3c:	eb64c118 	bl	1b052a4 <$ScheduleTask(TTask *)>
        1d4e40:	e1a00004 	mov	r0, r4
        1d4e44:	e3a01601 	mov	r1, #1048576	; 0x100000
        1d4e48:	eb64b8de 	bl	1b031c8 <TTaskQueue::$Remove(KernelObjectState)>
        1d4e4c:	e3300000 	teq	r0, #0	; 0x0
        1d4e50:	1afffff9 	bne	1d4e3c <TSemaphore::WakeTasksOnInc(void)+0x24>
        1d4e54:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        1d4e58:	ea64d1a2 	b	1b094e8 <$WantSchedule(void)>
    */
}

/**
 * Symbol: TSemaphore::__ct(void)
 * Address: 001d5100
 */
TSemaphore::TSemaphore(void) {
    /*
        1d5100:	e1a0c00d 	mov	ip, sp
        1d5104:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1d5108:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d510c:	e1b04000 	movs	r4, r0
        1d5110:	1a000003 	bne	1d5124 <TSemaphore::__ct(void)+0x24>
        1d5114:	e3a00028 	mov	r0, #40	; 0x28
        1d5118:	eb67e586 	bl	1bce738 <$__nw(unsigned int)>
        1d511c:	e1b04000 	movs	r4, r0
        1d5120:	0a000009 	beq	1d514c <TSemaphore::__ct(void)+0x4c>
        1d5124:	e59f0028 	ldr	r0, [pc, #28]	; 1d5154 <TSemaphore::__ct(void)+0x54>
        1d5128:	e5840010 	str	r0, [r4, #16]	; fField16
        1d512c:	e2840018 	add	r0, r4, #24	; 0x18
        1d5130:	eb6469a3 	bl	1aef7c4 <TTaskQueue::$__ct(void)>
        1d5134:	e2840020 	add	r0, r4, #32	; 0x20
        1d5138:	eb6469a1 	bl	1aef7c4 <TTaskQueue::$__ct(void)>
        1d513c:	e59f0014 	ldr	r0, [pc, #14]	; 1d5158 <TSemaphore::__ct(void)+0x58>
        1d5140:	e5840010 	str	r0, [r4, #16]	; fField16
        1d5144:	e3a00000 	mov	r0, #0	; 0x0
        1d5148:	e5840014 	str	r0, [r4, #20]
        1d514c:	e1a00004 	mov	r0, r4
        1d5150:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1d5154:	0001dbc4 	andeq	sp, r1, r4, asr #23
        1d5158:	0001ae40 	andeq	sl, r1, r0, asr #28
    */
}

/**
 * Symbol: TSemaphore::__dt(void)
 * Address: 001d515c
 */
TSemaphore::~TSemaphore(void) {
    /*
        1d515c:	e1a0c00d 	mov	ip, sp
        1d5160:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1d5164:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5168:	e1a04000 	mov	r4, r0
        1d516c:	e1a06001 	mov	r6, r1
        1d5170:	e59f00b4 	ldr	r0, [pc, #b4]	; 1d522c <TSemaphore::__dt(void)+0xd0>
        1d5174:	e5840010 	str	r0, [r4, #16]	; fField16
        1d5178:	e2840018 	add	r0, r4, #24	; 0x18
        1d517c:	e1a08000 	mov	r8, r0
        1d5180:	e3a01601 	mov	r1, #1048576	; 0x100000
        1d5184:	eb64b80f 	bl	1b031c8 <TTaskQueue::$Remove(KernelObjectState)>
        1d5188:	e1b07000 	movs	r7, r0
        1d518c:	e3a050d8 	mov	r5, #216	; 0xd8
        1d5190:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        1d5194:	0a00000c 	beq	1d51cc <TSemaphore::__dt(void)+0x70>
        1d5198:	e597004c 	ldr	r0, [r7, #76]
        1d519c:	e2800004 	add	r0, r0, #4	; 0x4
        1d51a0:	e587004c 	str	r0, [r7, #76]
        1d51a4:	e1a00007 	mov	r0, r7
        1d51a8:	eb64c03d 	bl	1b052a4 <$ScheduleTask(TTask *)>
        1d51ac:	e1a00007 	mov	r0, r7
        1d51b0:	e1a01005 	mov	r1, r5
        1d51b4:	eb64ab79 	bl	1afffa0 <$MarkMessageDone(TTask *, long)>
        1d51b8:	e1a00008 	mov	r0, r8
        1d51bc:	e3a01601 	mov	r1, #1048576	; 0x100000
        1d51c0:	eb64b800 	bl	1b031c8 <TTaskQueue::$Remove(KernelObjectState)>
        1d51c4:	e1b07000 	movs	r7, r0
        1d51c8:	1afffff2 	bne	1d5198 <TSemaphore::__dt(void)+0x3c>
        1d51cc:	e2840020 	add	r0, r4, #32	; 0x20
        1d51d0:	e1a08000 	mov	r8, r0
        1d51d4:	e3a01601 	mov	r1, #1048576	; 0x100000
        1d51d8:	eb64b7fa 	bl	1b031c8 <TTaskQueue::$Remove(KernelObjectState)>
        1d51dc:	e1b07000 	movs	r7, r0
        1d51e0:	0a00000c 	beq	1d5218 <TSemaphore::__dt(void)+0xbc>
        1d51e4:	e597004c 	ldr	r0, [r7, #76]
        1d51e8:	e2800004 	add	r0, r0, #4	; 0x4
        1d51ec:	e587004c 	str	r0, [r7, #76]
        1d51f0:	e1a00007 	mov	r0, r7
        1d51f4:	eb64c02a 	bl	1b052a4 <$ScheduleTask(TTask *)>
        1d51f8:	e1a00007 	mov	r0, r7
        1d51fc:	e1a01005 	mov	r1, r5
        1d5200:	eb64ab66 	bl	1afffa0 <$MarkMessageDone(TTask *, long)>
        1d5204:	e1a00008 	mov	r0, r8
        1d5208:	e3a01601 	mov	r1, #1048576	; 0x100000
        1d520c:	eb64b7ed 	bl	1b031c8 <TTaskQueue::$Remove(KernelObjectState)>
        1d5210:	e1b07000 	movs	r7, r0
        1d5214:	1afffff2 	bne	1d51e4 <TSemaphore::__dt(void)+0x88>
        1d5218:	e3160001 	tst	r6, #1	; 0x1
        1d521c:	11a00004 	movne	r0, r4
        1d5220:	191b69f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        1d5224:	1a67e12d 	bne	1bcd6e0 <$__dl(void *)>
        1d5228:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1d522c:	0001ae40 	andeq	sl, r1, r0, asr #28
    */
}

/**
 * Symbol: TSemaphore::Remove(TTask *)
 * Address: 001d5230
 */
TSemaphore::Remove(TTask *) {
    /*
        1d5230:	e1a0c00d 	mov	ip, sp
        1d5234:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d5238:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d523c:	e1a04000 	mov	r4, r0
        1d5240:	e1a05001 	mov	r5, r1
        1d5244:	e2800018 	add	r0, r0, #24	; 0x18
        1d5248:	e3a02601 	mov	r2, #1048576	; 0x100000
        1d524c:	eb64bbed 	bl	1b04208 <TTaskQueue::$RemoveFromQueue(TTask *, KernelObjectState)>
        1d5250:	e2840020 	add	r0, r4, #32	; 0x20
        1d5254:	e1a01005 	mov	r1, r5
        1d5258:	e3a02601 	mov	r2, #1048576	; 0x100000
        1d525c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1d5260:	ea64bbe8 	b	1b04208 <TTaskQueue::$RemoveFromQueue(TTask *, KernelObjectState)>
    */
}

/**
 * Symbol: TSemaphore::BlockOnZero(TTask *, SemFlags)
 * Address: 001d5264
 */
TSemaphore::BlockOnZero(TTask *, SemFlags) {
    /*
        1d5264:	e1a0c00d 	mov	ip, sp
        1d5268:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1d526c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1d5270:	e1a05000 	mov	r5, r0
        1d5274:	e1a04001 	mov	r4, r1
        1d5278:	e3120001 	tst	r2, #1	; 0x1
        1d527c:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1d5280:	e1a00004 	mov	r0, r4
        1d5284:	eb64d081 	bl	1b09490 <$UnScheduleTask(TTask *)>
        1d5288:	e2850018 	add	r0, r5, #24	; 0x18
        1d528c:	e1a03005 	mov	r3, r5
        1d5290:	e1a01004 	mov	r1, r4
        1d5294:	e3a02601 	mov	r2, #1048576	; 0x100000
        1d5298:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1d529c:	ea647186 	b	1af18bc <TTaskQueue::$Add(TTask *, KernelObjectState, TTaskContainer *)>
    */
}

