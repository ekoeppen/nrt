#include "include/TObjectTableIterator.h"

/**
 * Symbol: TObjectTableIterator::__ct(TObjectTable *, unsigned long)
 * Address: 00319bf8
 */
TObjectTableIterator::TObjectTableIterator(TObjectTable *, unsigned long) {
    /*
        319bf8:	e1a0c00d 	mov	ip, sp
        319bfc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        319c00:	e24cb004 	sub	fp, ip, #4	; 0x4
        319c04:	e1b04000 	movs	r4, r0
        319c08:	e1a06001 	mov	r6, r1
        319c0c:	e1a05002 	mov	r5, r2
        319c10:	1a000003 	bne	319c24 <TObjectTableIterator::__ct(TObjectTable *, unsigned long)+0x2c>
        319c14:	e3a0001c 	mov	r0, #28	; 0x1c
        319c18:	eb62d2c6 	bl	1bce738 <$__nw(unsigned int)>
        319c1c:	e1b04000 	movs	r4, r0
        319c20:	0a00000a 	beq	319c50 <TObjectTableIterator::__ct(TObjectTable *, unsigned long)+0x58>
        319c24:	e3a0007f 	mov	r0, #127	; 0x7f
        319c28:	e0000225 	and	r0, r0, r5, lsr #4
        319c2c:	e5840004 	str	r0, [r4, #4]	; fField4
        319c30:	e3a00000 	mov	r0, #0	; 0x0
        319c34:	e584500c 	str	r5, [r4, #12]	; fField12
        319c38:	e1a01005 	mov	r1, r5
        319c3c:	e2844014 	add	r4, r4, #20	; 0x14
        319c40:	e8840041 	stmia	r4, {r0, r6}
        319c44:	e2444014 	sub	r4, r4, #20	; 0x14
        319c48:	e1a00004 	mov	r0, r4
        319c4c:	eb5fada8 	bl	1b052f4 <TObjectTableIterator::$SetCurrentPosition(unsigned long)>
        319c50:	e1a00004 	mov	r0, r4
        319c54:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectTableIterator::GetThisLineNextEntry(void)
 * Address: 00319c58
 */
TObjectTableIterator::GetThisLineNextEntry(void) {
    /*
        319c58:	e1a01000 	mov	r1, r0
        319c5c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        319c60:	e3300000 	teq	r0, #0	; 0x0
        319c64:	15900004 	ldrne	r0, [r0, #4]	; fField4
        319c68:	1a000003 	bne	319c7c <TObjectTableIterator::GetThisLineNextEntry(void)+0x24>
        319c6c:	e5910000 	ldr	r0, [r1]
        319c70:	e5912018 	ldr	r2, [r1, #24]	; fField24
        319c74:	e0820100 	add	r0, r2, r0, lsl #2
        319c78:	e5900010 	ldr	r0, [r0, #16]	; fField16
        319c7c:	e5810014 	str	r0, [r1, #20]	; fField20
        319c80:	e3a00001 	mov	r0, #1	; 0x1
        319c84:	e5912014 	ldr	r2, [r1, #20]	; fField20
        319c88:	e3320000 	teq	r2, #0	; 0x0
        319c8c:	15922000 	ldrne	r2, [r2]
        319c90:	15a12008 	strne	r2, [r1, #8]!	; fField8
        319c94:	11a0f00e 	movne	pc, lr
        319c98:	e3a02000 	mov	r2, #0	; 0x0
        319c9c:	e5812008 	str	r2, [r1, #8]	; fField8
        319ca0:	e5d13010 	ldrb	r3, [r1, #16]	; fField16
        319ca4:	e3330000 	teq	r3, #0	; 0x0
        319ca8:	11a00002 	movne	r0, r2
        319cac:	11a0f00e 	movne	pc, lr
        319cb0:	e5912000 	ldr	r2, [r1]
        319cb4:	e2822001 	add	r2, r2, #1	; 0x1
        319cb8:	e202207f 	and	r2, r2, #127	; 0x7f
        319cbc:	e5812000 	str	r2, [r1]
        319cc0:	e5913004 	ldr	r3, [r1, #4]	; fField4
        319cc4:	e1330002 	teq	r3, r2
        319cc8:	05c10010 	streqb	r0, [r1, #16]	; fField16
        319ccc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TObjectTableIterator::SetCurrentPosition(unsigned long)
 * Address: 00319cd0
 */
TObjectTableIterator::SetCurrentPosition(unsigned long) {
    /*
        319cd0:	e1a0c00d 	mov	ip, sp
        319cd4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        319cd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        319cdc:	e1a04000 	mov	r4, r0
        319ce0:	e1a05001 	mov	r5, r1
        319ce4:	e3a06000 	mov	r6, #0	; 0x0
        319ce8:	e5806014 	str	r6, [r0, #20]	; fField20
        319cec:	e3a0007f 	mov	r0, #127	; 0x7f
        319cf0:	e0000221 	and	r0, r0, r1, lsr #4
        319cf4:	e5840000 	str	r0, [r4]
        319cf8:	e3a07001 	mov	r7, #1	; 0x1
        319cfc:	e5941004 	ldr	r1, [r4, #4]	; fField4
        319d00:	e1310000 	teq	r1, r0
        319d04:	1a000003 	bne	319d18 <TObjectTableIterator::SetCurrentPosition(unsigned long)+0x48>
        319d08:	e594000c 	ldr	r0, [r4, #12]	; fField12
        319d0c:	e1500005 	cmp	r0, r5
        319d10:	35c47010 	strccb	r7, [r4, #16]	; fField16
        319d14:	3a000000 	bcc	319d1c <TObjectTableIterator::SetCurrentPosition(unsigned long)+0x4c>
        319d18:	e5c46010 	strb	r6, [r4, #16]	; fField16
        319d1c:	e1a00004 	mov	r0, r4
        319d20:	eb5f840c 	bl	1afad58 <TObjectTableIterator::$GetThisLineNextEntry(void)>
        319d24:	e3300000 	teq	r0, #0	; 0x0
        319d28:	01a00006 	moveq	r0, r6
        319d2c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        319d30:	e5940008 	ldr	r0, [r4, #8]	; fField8
        319d34:	e3300000 	teq	r0, #0	; 0x0
        319d38:	0a000001 	beq	319d44 <TObjectTableIterator::SetCurrentPosition(unsigned long)+0x74>
        319d3c:	e1500005 	cmp	r0, r5
        319d40:	8afffff5 	bhi	319d1c <TObjectTableIterator::SetCurrentPosition(unsigned long)+0x4c>
        319d44:	e1a00007 	mov	r0, r7
        319d48:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectTableIterator::GetNextTableId(void)
 * Address: 00319d4c
 */
TObjectTableIterator::GetNextTableId(void) {
    /*
        319d4c:	e1a0c00d 	mov	ip, sp
        319d50:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        319d54:	e24cb004 	sub	fp, ip, #4	; 0x4
        319d58:	e1a04000 	mov	r4, r0
        319d5c:	e1a00004 	mov	r0, r4
        319d60:	eb5f83fc 	bl	1afad58 <TObjectTableIterator::$GetThisLineNextEntry(void)>
        319d64:	e3300000 	teq	r0, #0	; 0x0
        319d68:	0a00000a 	beq	319d98 <TObjectTableIterator::GetNextTableId(void)+0x4c>
        319d6c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        319d70:	e3300000 	teq	r0, #0	; 0x0
        319d74:	0afffff8 	beq	319d5c <TObjectTableIterator::GetNextTableId(void)+0x10>
        319d78:	e5d40010 	ldrb	r0, [r4, #16]	; fField16
        319d7c:	e3300000 	teq	r0, #0	; 0x0
        319d80:	0a000004 	beq	319d98 <TObjectTableIterator::GetNextTableId(void)+0x4c>
        319d84:	e594000c 	ldr	r0, [r4, #12]	; fField12
        319d88:	e5941008 	ldr	r1, [r4, #8]	; fField8
        319d8c:	e1510000 	cmp	r1, r0
        319d90:	93a00000 	movls	r0, #0	; 0x0
        319d94:	95840008 	strls	r0, [r4, #8]	; fField8
        319d98:	e5b40008 	ldr	r0, [r4, #8]!	; fField8
        319d9c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectTableIterator::GetNextTypedId(KernelTypes)
 * Address: 00319da0
 */
TObjectTableIterator::GetNextTypedId(KernelTypes) {
    /*
        319da0:	e1a0c00d 	mov	ip, sp
        319da4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        319da8:	e24cb004 	sub	fp, ip, #4	; 0x4
        319dac:	e1a05000 	mov	r5, r0
        319db0:	e1a04001 	mov	r4, r1
        319db4:	e1a00005 	mov	r0, r5
        319db8:	eb5f7fc9 	bl	1af9ce4 <TObjectTableIterator::$GetNextTableId(void)>
        319dbc:	e3300000 	teq	r0, #0	; 0x0
        319dc0:	1200100f 	andne	r1, r0, #15	; 0xf
        319dc4:	11310004 	teqne	r1, r4
        319dc8:	1afffff9 	bne	319db4 <TObjectTableIterator::GetNextTypedId(KernelTypes)+0x14>
        319dcc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectTableIterator::GetNextTypedObject(KernelTypes)
 * Address: 00319dd0
 */
TObjectTableIterator::GetNextTypedObject(KernelTypes) {
    /*
        319dd0:	e1a0c00d 	mov	ip, sp
        319dd4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        319dd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        319ddc:	e1a04000 	mov	r4, r0
        319de0:	eb5f7fc1 	bl	1af9cec <TObjectTableIterator::$GetNextTypedId(KernelTypes)>
        319de4:	e1a01000 	mov	r1, r0
        319de8:	e5b40018 	ldr	r0, [r4, #24]!	; fField24
        319dec:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        319df0:	ea000047 	b	319f14 <TObjectTable::Get(unsigned long)>
    */
}

