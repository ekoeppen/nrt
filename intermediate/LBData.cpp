#include "include/LBData.h"

/**
 * Symbol: LBData::GetStore( const(void))
 * Address: 00100fa0
 */
LBData::GetStore( const(void)) {
    /*
        100fa0:	e5b01014 	ldr	r1, [r0, #20]!	; fField20
        100fa4:	e3710001 	cmn	r1, #1	; 0x1
        100fa8:	03a00000 	moveq	r0, #0	; 0x0
        100fac:	01a0f00e 	moveq	pc, lr
        100fb0:	e1a0c00d 	mov	ip, sp
        100fb4:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        100fb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        100fbc:	e59f000c 	ldr	r0, [pc, #c]	; 100fd0 <LBData::GetStore( const(void))+0x30>
        100fc0:	e5900024 	ldr	r0, [r0, #36]	; fField36
        100fc4:	eb6bb1b2 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        100fc8:	e5900000 	ldr	r0, [r0]
        100fcc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        100fd0:	0c1010a0 	ldceq	0, cr1, [r0], -#640
    */
}

/**
 * Symbol: LBData::SetStore(TStoreWrapper *)
 * Address: 00100fd4
 */
LBData::SetStore(TStoreWrapper *) {
    /*
        100fd4:	e1a0c00d 	mov	ip, sp
        100fd8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        100fdc:	e24cb004 	sub	fp, ip, #4	; 0x4
        100fe0:	e1a04000 	mov	r4, r0
        100fe4:	e1b05001 	movs	r5, r1
        100fe8:	e59f602c 	ldr	r6, [pc, #2c]	; 10101c <LBData::SetStore(TStoreWrapper *)+0x48>
        100fec:	1a00000b 	bne	101020 <LBData::SetStore(TStoreWrapper *)+0x4c>
        100ff0:	e5941014 	ldr	r1, [r4, #20]	; fField20
        100ff4:	e5b60024 	ldr	r0, [r6, #36]!	; fField36
        100ff8:	eb6bb1a5 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        100ffc:	e5901004 	ldr	r1, [r0, #4]
        101000:	e2511001 	subs	r1, r1, #1	; 0x1
        101004:	e5801004 	str	r1, [r0, #4]
        101008:	03a01000 	moveq	r1, #0	; 0x0
        10100c:	05801000 	streq	r1, [r0]
        101010:	e3e00000 	mvn	r0, #0	; 0x0
        101014:	e5a40014 	str	r0, [r4, #20]!	; fField20
        101018:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        10101c:	0c1010a0 	ldceq	0, cr1, [r0], -#640
        101020:	e5960024 	ldr	r0, [r6, #36]	; fField36
        101024:	e3e08000 	mvn	r8, #0	; 0x0
        101028:	e3a07000 	mov	r7, #0	; 0x0
        10102c:	e3a0a001 	mov	sl, #1	; 0x1
        101030:	e5909000 	ldr	r9, [r0]
        101034:	e3590000 	cmp	r9, #0	; 0x0
        101038:	da000018 	ble	1010a0 <LBData::SetStore(TStoreWrapper *)+0xcc>
        10103c:	e1a01007 	mov	r1, r7
        101040:	e5960024 	ldr	r0, [r6, #36]	; fField36
        101044:	eb6bb192 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        101048:	e5901000 	ldr	r1, [r0]
        10104c:	e1310005 	teq	r1, r5
        101050:	1a000004 	bne	101068 <LBData::SetStore(TStoreWrapper *)+0x94>
        101054:	e5901004 	ldr	r1, [r0, #4]
        101058:	e2811001 	add	r1, r1, #1	; 0x1
        10105c:	e5a01004 	str	r1, [r0, #4]!
        101060:	e5a47014 	str	r7, [r4, #20]!	; fField20
        101064:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        101068:	e5900004 	ldr	r0, [r0, #4]
        10106c:	e3300000 	teq	r0, #0	; 0x0
        101070:	01a08007 	moveq	r8, r7
        101074:	e2877001 	add	r7, r7, #1	; 0x1
        101078:	e1570009 	cmp	r7, r9
        10107c:	baffffee 	blt	10103c <LBData::SetStore(TStoreWrapper *)+0x68>
        101080:	e3780001 	cmn	r8, #1	; 0x1
        101084:	0a000005 	beq	1010a0 <LBData::SetStore(TStoreWrapper *)+0xcc>
        101088:	e5a48014 	str	r8, [r4, #20]!	; fField20
        10108c:	e1a01008 	mov	r1, r8
        101090:	e5b60024 	ldr	r0, [r6, #36]!	; fField36
        101094:	eb6bb17e 	bl	1bed694 <CDynamicArray::$SafeElementPtrAt(long)>
        101098:	e8800420 	stmia	r0, {r5, sl}
        10109c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1010a0:	e92d0420 	stmdb	sp!, {r5, sl}
        1010a4:	e1a0200d 	mov	r2, sp
        1010a8:	e1a01009 	mov	r1, r9
        1010ac:	e3a03001 	mov	r3, #1	; 0x1
        1010b0:	e5b60024 	ldr	r0, [r6, #36]!	; fField36
        1010b4:	eb6ba10f 	bl	1be94f8 <CDynamicArray::$InsertElementsBefore(long, void *, long)>
        1010b8:	e5a49014 	str	r9, [r4, #20]!	; fField20
        1010bc:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LBData::IsSameEntry(long)
 * Address: 001010c0
 */
LBData::IsSameEntry(long) {
    /*
        1010c0:	e1a0c00d 	mov	ip, sp
        1010c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1010c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1010cc:	e1a05000 	mov	r5, r0
        1010d0:	e1a04001 	mov	r4, r1
        1010d4:	e1a00001 	mov	r0, r1
        1010d8:	eb6b106a 	bl	1bc5288 <$IsFaultBlock(long)>
        1010dc:	e3300000 	teq	r0, #0	; 0x0
        1010e0:	0a000002 	beq	1010f0 <LBData::IsSameEntry(long)+0x30>
        1010e4:	e1a00004 	mov	r0, r4
        1010e8:	eb650408 	bl	1a42110 <$NoFaultObjectPtr(long)>
        1010ec:	e5b04018 	ldr	r4, [r0, #24]!
        1010f0:	e5b50008 	ldr	r0, [r5, #8]!	; fField8
        1010f4:	e1a05000 	mov	r5, r0
        1010f8:	eb6b1062 	bl	1bc5288 <$IsFaultBlock(long)>
        1010fc:	e3300000 	teq	r0, #0	; 0x0
        101100:	0a000002 	beq	101110 <LBData::IsSameEntry(long)+0x50>
        101104:	e1a00005 	mov	r0, r5
        101108:	eb650400 	bl	1a42110 <$NoFaultObjectPtr(long)>
        10110c:	e5b05018 	ldr	r5, [r0, #24]!
        101110:	e3350002 	teq	r5, #2	; 0x2
        101114:	13340002 	teqne	r4, #2	; 0x2
        101118:	0a000002 	beq	101128 <LBData::IsSameEntry(long)+0x68>
        10111c:	e1350004 	teq	r5, r4
        101120:	03a00001 	moveq	r0, #1	; 0x1
        101124:	0a000000 	beq	10112c <LBData::IsSameEntry(long)+0x6c>
        101128:	e3a00000 	mov	r0, #0	; 0x0
        10112c:	e20000ff 	and	r0, r0, #255	; 0xff
        101130:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

