#include "DDKIncludes/UtilityClasses/ItemComparer.h"

/**
 * Symbol: CItemComparer::__ct(void)
 * Address: 000f8d64
 */
CItemComparer::CItemComparer(const void* testItem, const void* keyValue = nil) {
    /*
         f8d64:	e1a0c00d 	mov	ip, sp
         f8d68:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         f8d6c:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8d70:	e3300000 	teq	r0, #0	; 0x0
         f8d74:	1a000003 	bne	f8d88 <CItemComparer::__ct(void)+0x24>
         f8d78:	e3a0000c 	mov	r0, #12	; 0xc
         f8d7c:	eb6b566d 	bl	1bce738 <$__nw(unsigned int)>
         f8d80:	e3300000 	teq	r0, #0	; 0x0
         f8d84:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
         f8d88:	e59f1010 	ldr	r1, [pc, #10]	; f8da0 <CItemComparer::__ct(void)+0x3c>
         f8d8c:	e5801000 	str	r1, [r0]
         f8d90:	e3a01000 	mov	r1, #0	; 0x0
         f8d94:	e5801004 	str	r1, [r0, #4]	; fField4
         f8d98:	e5801008 	str	r1, [r0, #8]	; fField8
         f8d9c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         f8da0:	0001c838 	andeq	ip, r1, r8, lsr r8
    */
}

/**
 * Symbol: CItemComparer::__ct(void const *, void const *)
 * Address: 000f8da4
 */
CItemComparer::CItemComparer(const void* testItem, const void* keyValue = nil) {
    /*
         f8da4:	e1a0c00d 	mov	ip, sp
         f8da8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         f8dac:	e24cb004 	sub	fp, ip, #4	; 0x4
         f8db0:	e1a05001 	mov	r5, r1
         f8db4:	e1a04002 	mov	r4, r2
         f8db8:	e3300000 	teq	r0, #0	; 0x0
         f8dbc:	1a000003 	bne	f8dd0 <CItemComparer::__ct(void const *, void const *)+0x2c>
         f8dc0:	e3a0000c 	mov	r0, #12	; 0xc
         f8dc4:	eb6b565b 	bl	1bce738 <$__nw(unsigned int)>
         f8dc8:	e3300000 	teq	r0, #0	; 0x0
         f8dcc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         f8dd0:	e59f1008 	ldr	r1, [pc, #8]	; f8de0 <CItemComparer::__ct(void const *, void const *)+0x3c>	; fField8
         f8dd4:	e8800022 	stmia	r0, {r1, r5}
         f8dd8:	e5804008 	str	r4, [r0, #8]	; fField8
         f8ddc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         f8de0:	0001c838 	andeq	ip, r1, r8, lsr r8
    */
}

/**
 * Symbol: CItemComparer::TestItem( const(void const *))
 * Address: 000f8de4
 */
CompareResult	CItemComparer::TestItem(const void* criteria) const {
    /*
         f8de4:	e5900004 	ldr	r0, [r0, #4]	; fField4
         f8de8:	e1500001 	cmp	r0, r1
         f8dec:	33e00000 	mvncc	r0, #0	; 0x0
         f8df0:	31a0f00e 	movcc	pc, lr
         f8df4:	93a00000 	movls	r0, #0	; 0x0
         f8df8:	83a00001 	movhi	r0, #1	; 0x1
         f8dfc:	e1a0f00e 	mov	pc, lr
    */
}

