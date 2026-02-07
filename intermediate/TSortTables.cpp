#include "include/TSortTables.h"

/**
 * Symbol: TSortTables::GetTableEntry( const(long))
 * Address: 002583e0
 */
TSortTables::GetTableEntry( const(long)) {
    /*
        2583e0:	e3a02000 	mov	r2, #0	; 0x0
        2583e4:	e5903000 	ldr	r3, [r0]
        2583e8:	e3330000 	teq	r3, #0	; 0x0
        2583ec:	0a000002 	beq	2583fc <TSortTables::GetTableEntry( const(long))+0x1c>
        2583f0:	e5933000 	ldr	r3, [r3]
        2583f4:	e1310843 	teq	r1, r3, asr #16
        2583f8:	01a0f00e 	moveq	pc, lr
        2583fc:	e2822001 	add	r2, r2, #1	; 0x1
        258400:	e280000c 	add	r0, r0, #12	; 0xc
        258404:	e3520005 	cmp	r2, #5	; 0x5
        258408:	bafffff5 	blt	2583e4 <TSortTables::GetTableEntry( const(long))+0x4>
        25840c:	e3a00000 	mov	r0, #0	; 0x0
        258410:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSortTables::GetSortTable( const(long, long *))
 * Address: 00258414
 */
TSortTables::GetSortTable( const(long, long *)) {
    /*
        258414:	e1a0c00d 	mov	ip, sp
        258418:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25841c:	e24cb004 	sub	fp, ip, #4	; 0x4
        258420:	e1a05000 	mov	r5, r0
        258424:	e1a04002 	mov	r4, r2
        258428:	e590003c 	ldr	r0, [r0, #60]	; fField60
        25842c:	e1300001 	teq	r0, r1
        258430:	1a000006 	bne	258450 <TSortTables::GetSortTable( const(long, long *))+0x3c>
        258434:	e3340000 	teq	r4, #0	; 0x0
        258438:	0a000002 	beq	258448 <TSortTables::GetSortTable( const(long, long *))+0x34>
        25843c:	e5950040 	ldr	r0, [r5, #64]	; fField64
        258440:	eb65400d 	bl	1ba847c <TSortingTable::$CalcSize( const(void))>
        258444:	e5840000 	str	r0, [r4]
        258448:	e5b50040 	ldr	r0, [r5, #64]!	; fField64
        25844c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        258450:	e1a00005 	mov	r0, r5
        258454:	eb654409 	bl	1ba9480 <TSortTables::$GetTableEntry( const(long))>
        258458:	e1b05000 	movs	r5, r0
        25845c:	03a00000 	moveq	r0, #0	; 0x0
        258460:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        258464:	e3340000 	teq	r4, #0	; 0x0
        258468:	0a000002 	beq	258478 <TSortTables::GetSortTable( const(long, long *))+0x64>
        25846c:	e5950000 	ldr	r0, [r5]
        258470:	eb654001 	bl	1ba847c <TSortingTable::$CalcSize( const(void))>
        258474:	e5840000 	str	r0, [r4]
        258478:	e5950000 	ldr	r0, [r5]
        25847c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TSortTables::AddSortTable(TSortingTable const *, unsigned char)
 * Address: 002584d4
 */
TSortTables::AddSortTable(TSortingTable const *, unsigned char) {
    /*
        2584d4:	e1a0c00d 	mov	ip, sp
        2584d8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2584dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2584e0:	e1a05000 	mov	r5, r0
        2584e4:	e1a04001 	mov	r4, r1
        2584e8:	e20260ff 	and	r6, r2, #255	; 0xff
        2584ec:	e5911000 	ldr	r1, [r1]
        2584f0:	e1a01841 	mov	r1, r1, asr #16
        2584f4:	e3a02000 	mov	r2, #0	; 0x0
        2584f8:	eb6543e1 	bl	1ba9484 <TSortTables::$GetSortTable( const(long, long *))>
        2584fc:	e3300000 	teq	r0, #0	; 0x0
        258500:	13a00000 	movne	r0, #0	; 0x0
        258504:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        258508:	e1a01005 	mov	r1, r5
        25850c:	e3a00000 	mov	r0, #0	; 0x0
        258510:	e3a05001 	mov	r5, #1	; 0x1
        258514:	e5912000 	ldr	r2, [r1]
        258518:	e3320000 	teq	r2, #0	; 0x0
        25851c:	1a000004 	bne	258534 <TSortTables::AddSortTable(TSortingTable const *, unsigned char)+0x60>
        258520:	e5814000 	str	r4, [r1]
        258524:	e5c16004 	strb	r6, [r1, #4]	; fField4
        258528:	e1a00005 	mov	r0, r5
        25852c:	e5a15008 	str	r5, [r1, #8]!	; fField8
        258530:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        258534:	e2800001 	add	r0, r0, #1	; 0x1
        258538:	e281100c 	add	r1, r1, #12	; 0xc
        25853c:	e3500005 	cmp	r0, #5	; 0x5
        258540:	bafffff3 	blt	258514 <TSortTables::AddSortTable(TSortingTable const *, unsigned char)+0x40>
        258544:	e59f0018 	ldr	r0, [pc, #18]	; 258564 <TSortTables::AddSortTable(TSortingTable const *, unsigned char)+0x90>
        258548:	e5900000 	ldr	r0, [r0]
        25854c:	e3a02000 	mov	r2, #0	; 0x0
        258550:	e3a010e9 	mov	r1, #233	; 0xe9
        258554:	e2411b0a 	sub	r1, r1, #10240	; 0x2800
        258558:	eb662b0f 	bl	1be319c <$Throw>
        25855c:	e1a00005 	mov	r0, r5
        258560:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        258564:	00371318 	eoreqs	r1, r7, r8, lsl r3
    */
}

/**
 * Symbol: TSortTables::Subscribe(long)
 * Address: 00258568
 */
TSortTables::Subscribe(long) {
    /*
        258568:	e1a0c00d 	mov	ip, sp
        25856c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        258570:	e24cb004 	sub	fp, ip, #4	; 0x4
        258574:	eb6543c1 	bl	1ba9480 <TSortTables::$GetTableEntry( const(long))>
        258578:	e3300000 	teq	r0, #0	; 0x0
        25857c:	15901008 	ldrne	r1, [r0, #8]	; fField8
        258580:	12811001 	addne	r1, r1, #1	; 0x1
        258584:	15a01008 	strne	r1, [r0, #8]!	; fField8
        258588:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TSortTables::Unsubscribe(long)
 * Address: 0025858c
 */
TSortTables::Unsubscribe(long) {
    /*
        25858c:	e1a0c00d 	mov	ip, sp
        258590:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        258594:	e24cb004 	sub	fp, ip, #4	; 0x4
        258598:	eb6543b8 	bl	1ba9480 <TSortTables::$GetTableEntry( const(long))>
        25859c:	e1b04000 	movs	r4, r0
        2585a0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        2585a4:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2585a8:	e2500001 	subs	r0, r0, #1	; 0x1
        2585ac:	e5840008 	str	r0, [r4, #8]	; fField8
        2585b0:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2585b4:	e5d40004 	ldrb	r0, [r4, #4]	; fField4
        2585b8:	e3300000 	teq	r0, #0	; 0x0
        2585bc:	15940000 	ldrne	r0, [r4]
        2585c0:	1b6622bb 	blne	1be10b4 <$DisposPtr>
        2585c4:	e3a00000 	mov	r0, #0	; 0x0
        2585c8:	e5840000 	str	r0, [r4]
        2585cc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TSortTables::SetDefaultTableId(long)
 * Address: 002585d0
 */
TSortTables::SetDefaultTableId(long) {
    /*
        2585d0:	e1a0c00d 	mov	ip, sp
        2585d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2585d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2585dc:	e1a04000 	mov	r4, r0
        2585e0:	e1a05001 	mov	r5, r1
        2585e4:	e3a02000 	mov	r2, #0	; 0x0
        2585e8:	eb6543a5 	bl	1ba9484 <TSortTables::$GetSortTable( const(long, long *))>
        2585ec:	e1b01000 	movs	r1, r0
        2585f0:	1a000001 	bne	2585fc <TSortTables::SetDefaultTableId(long)+0x2c>
        2585f4:	e3350000 	teq	r5, #0	; 0x0
        2585f8:	1a000001 	bne	258604 <TSortTables::SetDefaultTableId(long)+0x34>
        2585fc:	e3a00001 	mov	r0, #1	; 0x1
        258600:	ea000000 	b	258608 <TSortTables::SetDefaultTableId(long)+0x38>
        258604:	e3a00000 	mov	r0, #0	; 0x0
        258608:	e21000ff 	ands	r0, r0, #255	; 0xff
        25860c:	15a4503c 	strne	r5, [r4, #60]!	; fField60
        258610:	15841004 	strne	r1, [r4, #4]	; fField4
        258614:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

