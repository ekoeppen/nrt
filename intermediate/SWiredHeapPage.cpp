#include "include/SWiredHeapPage.h"

/**
 * Symbol: New__14SWiredHeapPageSFP15SWiredHeapDescr
 * Address: 001c5c2c
 */
void SWiredHeapPage::New() {
    /*
        1c5c2c:	e1a0c00d 	mov	ip, sp
        1c5c30:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1c5c34:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c5c38:	e1a04000 	mov	r4, r0
        1c5c3c:	e5900000 	ldr	r0, [r0]
        1c5c40:	e2400001 	sub	r0, r0, #1	; 0x1
        1c5c44:	e2800a01 	add	r0, r0, #4096	; 0x1000
        1c5c48:	e1a00620 	mov	r0, r0, lsr #12
        1c5c4c:	e1a00600 	mov	r0, r0, lsl #12
        1c5c50:	e3a05000 	mov	r5, #0	; 0x0
        1c5c54:	e5840000 	str	r0, [r4]
        1c5c58:	e5845008 	str	r5, [r4, #8]	; fField8
        1c5c5c:	e584500c 	str	r5, [r4, #12]	; fField12
        1c5c60:	e1a00004 	mov	r0, r4
        1c5c64:	eb64d443 	bl	1afad78 <SWiredHeapDescr::$GrowByOnePage(void)>
        1c5c68:	e3300000 	teq	r0, #0	; 0x0
        1c5c6c:	11a00005 	movne	r0, r5
        1c5c70:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1c5c74:	e5940000 	ldr	r0, [r4]
        1c5c78:	e3300000 	teq	r0, #0	; 0x0
        1c5c7c:	0a000001 	beq	1c5c88 <New__14SWiredHeapPageSFP15SWiredHeapDescr+0x5c>
        1c5c80:	e59f2020 	ldr	r2, [pc, #20]	; 1c5ca8 <New__14SWiredHeapPageSFP15SWiredHeapDescr+0x7c>
        1c5c84:	e5802000 	str	r2, [r0]
        1c5c88:	e1a05000 	mov	r5, r0
        1c5c8c:	e3a03000 	mov	r3, #0	; 0x0
        1c5c90:	e3a02000 	mov	r2, #0	; 0x0
        1c5c94:	e3a01000 	mov	r1, #0	; 0x0
        1c5c98:	eb64d851 	bl	1afbde4 <SSafeHeapPage::$Init(unsigned long, TPhys *, SSafeHeapPage *)>
        1c5c9c:	e5854028 	str	r4, [r5, #40]	; fField40
        1c5ca0:	e1a00005 	mov	r0, r5
        1c5ca4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1c5ca8:	0001d420 	andeq	sp, r1, r0, lsr #8
    */
}

/**
 * Symbol: SWiredHeapPage::Destroy(void)
 * Address: 001c5cac
 */
SWiredHeapPage::Destroy(void) {
    /*
        1c5cac:	e1a0c00d 	mov	ip, sp
        1c5cb0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1c5cb4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c5cb8:	e5900028 	ldr	r0, [r0, #40]	; fField40
        1c5cbc:	e5900000 	ldr	r0, [r0]
        1c5cc0:	eb683327 	bl	1bd2964 <$FreePagedMem>
        1c5cc4:	e3a00000 	mov	r0, #0	; 0x0
        1c5cc8:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: SWiredHeapPage::GetPage(void)
 * Address: 001c5d34
 */
SWiredHeapPage::GetPage(void) {
    /*
        1c5d34:	e1a0c00d 	mov	ip, sp
        1c5d38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1c5d3c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c5d40:	e1a04000 	mov	r4, r0
        1c5d44:	e5900028 	ldr	r0, [r0, #40]	; fField40
        1c5d48:	eb64d40a 	bl	1afad78 <SWiredHeapDescr::$GrowByOnePage(void)>
        1c5d4c:	e3300000 	teq	r0, #0	; 0x0
        1c5d50:	13a00000 	movne	r0, #0	; 0x0
        1c5d54:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1c5d58:	e5940028 	ldr	r0, [r4, #40]	; fField40
        1c5d5c:	e5901000 	ldr	r1, [r0]
        1c5d60:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1c5d64:	e0810000 	add	r0, r1, r0
        1c5d68:	e2405a01 	sub	r5, r0, #4096	; 0x1000
        1c5d6c:	e1b00005 	movs	r0, r5
        1c5d70:	159f101c 	ldrne	r1, [pc, #1c]	; 1c5d94 <SWiredHeapPage::GetPage(void)+0x60>
        1c5d74:	15801000 	strne	r1, [r0]
        1c5d78:	e1a03004 	mov	r3, r4
        1c5d7c:	e1a00005 	mov	r0, r5
        1c5d80:	e3a02000 	mov	r2, #0	; 0x0
        1c5d84:	e3a01000 	mov	r1, #0	; 0x0
        1c5d88:	eb64d815 	bl	1afbde4 <SSafeHeapPage::$Init(unsigned long, TPhys *, SSafeHeapPage *)>
        1c5d8c:	e1a00005 	mov	r0, r5
        1c5d90:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        1c5d94:	0001d420 	andeq	sp, r1, r0, lsr #8
    */
}

/**
 * Symbol: SWiredHeapPage::FreePage(void)
 * Address: 001c5d98
 */
SWiredHeapPage::FreePage(void) {
    /*
        1c5d98:	e1a0c00d 	mov	ip, sp
        1c5d9c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1c5da0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1c5da4:	e1a04000 	mov	r4, r0
        1c5da8:	e3a05000 	mov	r5, #0	; 0x0
        1c5dac:	eb64cb9c 	bl	1af8c24 <SSafeHeapPage::$FirstPage(void)>
        1c5db0:	e1a06000 	mov	r6, r0
        1c5db4:	e1a00004 	mov	r0, r4
        1c5db8:	eb64cb99 	bl	1af8c24 <SSafeHeapPage::$FirstPage(void)>
        1c5dbc:	e3300000 	teq	r0, #0	; 0x0
        1c5dc0:	0a000005 	beq	1c5ddc <SWiredHeapPage::FreePage(void)+0x44>
        1c5dc4:	e2801a01 	add	r1, r0, #4096	; 0x1000
        1c5dc8:	e1510005 	cmp	r1, r5
        1c5dcc:	81a05001 	movhi	r5, r1
        1c5dd0:	e5900004 	ldr	r0, [r0, #4]
        1c5dd4:	e3300000 	teq	r0, #0	; 0x0
        1c5dd8:	1afffff9 	bne	1c5dc4 <SWiredHeapPage::FreePage(void)+0x2c>
        1c5ddc:	e5960028 	ldr	r0, [r6, #40]	; fField40
        1c5de0:	e5901000 	ldr	r1, [r0]
        1c5de4:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1c5de8:	e0810000 	add	r0, r1, r0
        1c5dec:	e1500005 	cmp	r0, r5
        1c5df0:	991ba870 	ldmlsdb	fp, {r4, r5, r6, fp, sp, pc}
        1c5df4:	e5960028 	ldr	r0, [r6, #40]	; fField40
        1c5df8:	eb650159 	bl	1b06364 <SWiredHeapDescr::$ShrinkByOnePage(void)>
        1c5dfc:	e5960028 	ldr	r0, [r6, #40]	; fField40
        1c5e00:	e5901000 	ldr	r1, [r0]
        1c5e04:	e590000c 	ldr	r0, [r0, #12]	; fField12
        1c5e08:	e0810000 	add	r0, r1, r0
        1c5e0c:	e1500005 	cmp	r0, r5
        1c5e10:	8afffff7 	bhi	1c5df4 <SWiredHeapPage::FreePage(void)+0x5c>
        1c5e14:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

