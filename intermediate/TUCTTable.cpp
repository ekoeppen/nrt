#include "include/TUCTTable.h"

/**
 * Symbol: TUCTTable::Add(TTask *, unsigned long)
 * Address: 00256300
 */
TUCTTable::Add(TTask *, unsigned long) {
    /*
        256300:	e1a0c00d 	mov	ip, sp
        256304:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        256308:	e24cb004 	sub	fp, ip, #4	; 0x4
        25630c:	e1a06000 	mov	r6, r0
        256310:	e1a05001 	mov	r5, r1
        256314:	e1a04002 	mov	r4, r2
        256318:	e3a0001f 	mov	r0, #31	; 0x1f
        25631c:	e0007222 	and	r7, r0, r2, lsr #4
        256320:	eb04f21a 	bl	392b90 <EnterFIQAtomic>
        256324:	e0860187 	add	r0, r6, r7, lsl #3
        256328:	e2800014 	add	r0, r0, #20	; 0x14
        25632c:	e1a03006 	mov	r3, r6
        256330:	e585409c 	str	r4, [r5, #156]
        256334:	e1a01005 	mov	r1, r5
        256338:	e3a02901 	mov	r2, #16384	; 0x4000
        25633c:	eb626d5e 	bl	1af18bc <TTaskQueue::$Add(TTask *, KernelObjectState, TTaskContainer *)>
        256340:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
        256344:	ea04f219 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TUCTTable::Remove(unsigned long)
 * Address: 00256348
 */
TUCTTable::Remove(unsigned long) {
    /*
        256348:	e1a0c00d 	mov	ip, sp
        25634c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        256350:	e24cb004 	sub	fp, ip, #4	; 0x4
        256354:	e1a05000 	mov	r5, r0
        256358:	e1a04001 	mov	r4, r1
        25635c:	e3a0001f 	mov	r0, #31	; 0x1f
        256360:	e0006221 	and	r6, r0, r1, lsr #4
        256364:	eb04f209 	bl	392b90 <EnterFIQAtomic>
        256368:	e0850186 	add	r0, r5, r6, lsl #3
        25636c:	e2800014 	add	r0, r0, #20	; 0x14
        256370:	e1a01004 	mov	r1, r4
        256374:	e3a02901 	mov	r2, #16384	; 0x4000
        256378:	eb040dac 	bl	359a30 <TTaskQueue::FindAndRemove(unsigned long, KernelObjectState)>
        25637c:	e1a04000 	mov	r4, r0
        256380:	eb04f20a 	bl	392bb0 <ExitFIQAtomic>
        256384:	e1a00004 	mov	r0, r4
        256388:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TUCTTable::Remove(TTask *)
 * Address: 0025638c
 */
TUCTTable::Remove(TTask *) {
    /*
        25638c:	e1a0c00d 	mov	ip, sp
        256390:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        256394:	e24cb004 	sub	fp, ip, #4	; 0x4
        256398:	e1a05000 	mov	r5, r0
        25639c:	e1a04001 	mov	r4, r1
        2563a0:	e591006c 	ldr	r0, [r1, #108]
        2563a4:	e3100901 	tst	r0, #16384	; 0x4000
        2563a8:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        2563ac:	e3a0101f 	mov	r1, #31	; 0x1f
        2563b0:	e594009c 	ldr	r0, [r4, #156]
        2563b4:	e0016220 	and	r6, r1, r0, lsr #4
        2563b8:	eb04f1f4 	bl	392b90 <EnterFIQAtomic>
        2563bc:	e0850186 	add	r0, r5, r6, lsl #3
        2563c0:	e2800014 	add	r0, r0, #20	; 0x14
        2563c4:	e1a01004 	mov	r1, r4
        2563c8:	e3a02901 	mov	r2, #16384	; 0x4000
        2563cc:	eb62b78d 	bl	1b04208 <TTaskQueue::$RemoveFromQueue(TTask *, KernelObjectState)>
        2563d0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2563d4:	ea04f1f5 	b	392bb0 <ExitFIQAtomic>
    */
}

/**
 * Symbol: TUCTTable::HeldBy(TTask *, unsigned long)
 * Address: 002563d8
 */
TUCTTable::HeldBy(TTask *, unsigned long) {
    /*
        2563d8:	e5b1009c 	ldr	r0, [r1, #156]!
        2563dc:	e1300002 	teq	r0, r2
        2563e0:	13a00000 	movne	r0, #0	; 0x0
        2563e4:	03a00001 	moveq	r0, #1	; 0x1
        2563e8:	e20000ff 	and	r0, r0, #255	; 0xff
        2563ec:	e1a0f00e 	mov	pc, lr
    */
}

