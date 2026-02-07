#include "include/DomainInfo.h"

/**
 * Symbol: DomainInfo::InitDomainInfo(unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 0011db2c
 */
DomainInfo::InitDomainInfo(unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
        11db2c:	e59dc000 	ldr	ip, [sp]
        11db30:	e880100e 	stmia	r0, {r1, r2, r3, ip}
        11db34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::InitHeapInfo(unsigned long, unsigned long, unsigned long)
 * Address: 0011db38
 */
DomainInfo::InitHeapInfo(unsigned long, unsigned long, unsigned long) {
    /*
        11db38:	e280001c 	add	r0, r0, #28	; 0x1c
        11db3c:	e9a0000e 	stmib	r0!, {r1, r2, r3}
        11db40:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::InitGlobalInfo(unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 0011db44
 */
DomainInfo::InitGlobalInfo(unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
        11db44:	e59dc000 	ldr	ip, [sp]
        11db48:	e5a02010 	str	r2, [r0, #16]!	; fField16
        11db4c:	e9a0100a 	stmib	r0!, {r1, r3, ip}
        11db50:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::Name(void)
 * Address: 0011db54
 */
DomainInfo::Name(void) {
    /*
        11db54:	e5900000 	ldr	r0, [r0]
        11db58:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::Base(void)
 * Address: 0011db5c
 */
DomainInfo::Base(void) {
    /*
        11db5c:	e5900008 	ldr	r0, [r0, #8]	; fField8
        11db60:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::Size(void)
 * Address: 0011db64
 */
DomainInfo::Size(void) {
    /*
        11db64:	e590000c 	ldr	r0, [r0, #12]	; fField12
        11db68:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::HasGlobals(void)
 * Address: 0011db6c
 */
DomainInfo::HasGlobals(void) {
    /*
        11db6c:	e1a0c00d 	mov	ip, sp
        11db70:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11db74:	e24cb004 	sub	fp, ip, #4	; 0x4
        11db78:	eb67747c 	bl	1afad70 <DomainInfo::$GlobalSize(void)>
        11db7c:	e1b00000 	movs	r0, r0
        11db80:	13a00001 	movne	r0, #1	; 0x1
        11db84:	e20000ff 	and	r0, r0, #255	; 0xff
        11db88:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: DomainInfo::GlobalBase(void)
 * Address: 0011db8c
 */
DomainInfo::GlobalBase(void) {
    /*
        11db8c:	e5900014 	ldr	r0, [r0, #20]	; fField20
        11db90:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::GlobalSize(void)
 * Address: 0011dbf0
 */
DomainInfo::GlobalSize(void) {
    /*
        11dbf0:	e5901018 	ldr	r1, [r0, #24]	; fField24
        11dbf4:	e590001c 	ldr	r0, [r0, #28]	; fField28
        11dbf8:	e0810000 	add	r0, r1, r0
        11dbfc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::GlobalROMBase(void)
 * Address: 0011dc00
 */
DomainInfo::GlobalROMBase(void) {
    /*
        11dc00:	e5900010 	ldr	r0, [r0, #16]	; fField16
        11dc04:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::GlobalInitSize(void)
 * Address: 0011dc08
 */
DomainInfo::GlobalInitSize(void) {
    /*
        11dc08:	e5900018 	ldr	r0, [r0, #24]	; fField24
        11dc0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::GlobalZeroSize(void)
 * Address: 0011dc10
 */
DomainInfo::GlobalZeroSize(void) {
    /*
        11dc10:	e590001c 	ldr	r0, [r0, #28]	; fField28
        11dc14:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::HasHeap(void)
 * Address: 0011dc18
 */
DomainInfo::HasHeap(void) {
    /*
        11dc18:	e5901020 	ldr	r1, [r0, #32]	; fField32
        11dc1c:	e3310000 	teq	r1, #0	; 0x0
        11dc20:	05900024 	ldreq	r0, [r0, #36]	; fField36
        11dc24:	03300000 	teqeq	r0, #0	; 0x0
        11dc28:	13a00001 	movne	r0, #1	; 0x1
        11dc2c:	03a00000 	moveq	r0, #0	; 0x0
        11dc30:	e20000ff 	and	r0, r0, #255	; 0xff
        11dc34:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::MakeHeapDomain(void)
 * Address: 0011dc38
 */
DomainInfo::MakeHeapDomain(void) {
    /*
        11dc38:	e5900028 	ldr	r0, [r0, #40]	; fField40
        11dc3c:	e2100010 	ands	r0, r0, #16	; 0x10
        11dc40:	13a00001 	movne	r0, #1	; 0x1
        11dc44:	e20000ff 	and	r0, r0, #255	; 0xff
        11dc48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::IsSegregated(void)
 * Address: 0011dc4c
 */
DomainInfo::IsSegregated(void) {
    /*
        11dc4c:	e1a0c00d 	mov	ip, sp
        11dc50:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11dc54:	e24cb004 	sub	fp, ip, #4	; 0x4
        11dc58:	e1a04000 	mov	r4, r0
        11dc5c:	eb67784a 	bl	1afbd8c <DomainInfo::$HasHeap(void)>
        11dc60:	e3300000 	teq	r0, #0	; 0x0
        11dc64:	15b40024 	ldrne	r0, [r4, #36]!	; fField36
        11dc68:	13300000 	teqne	r0, #0	; 0x0
        11dc6c:	03a00000 	moveq	r0, #0	; 0x0
        11dc70:	13a00001 	movne	r0, #1	; 0x1
        11dc74:	e20000ff 	and	r0, r0, #255	; 0xff
        11dc78:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: DomainInfo::IsPersistent(void)
 * Address: 0011dc7c
 */
DomainInfo::IsPersistent(void) {
    /*
        11dc7c:	e1a0c00d 	mov	ip, sp
        11dc80:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11dc84:	e24cb004 	sub	fp, ip, #4	; 0x4
        11dc88:	e1a04000 	mov	r4, r0
        11dc8c:	eb67783e 	bl	1afbd8c <DomainInfo::$HasHeap(void)>
        11dc90:	e3300000 	teq	r0, #0	; 0x0
        11dc94:	15b40028 	ldrne	r0, [r4, #40]!	; fField40
        11dc98:	12000001 	andne	r0, r0, #1	; 0x1
        11dc9c:	13300000 	teqne	r0, #0	; 0x0
        11dca0:	03a00000 	moveq	r0, #0	; 0x0
        11dca4:	13a00001 	movne	r0, #1	; 0x1
        11dca8:	e20000ff 	and	r0, r0, #255	; 0xff
        11dcac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: DomainInfo::IsReadOnly(void)
 * Address: 0011dcb0
 */
DomainInfo::IsReadOnly(void) {
    /*
        11dcb0:	e1a0c00d 	mov	ip, sp
        11dcb4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11dcb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        11dcbc:	e1a04000 	mov	r4, r0
        11dcc0:	eb677831 	bl	1afbd8c <DomainInfo::$HasHeap(void)>
        11dcc4:	e3300000 	teq	r0, #0	; 0x0
        11dcc8:	15b40028 	ldrne	r0, [r4, #40]!	; fField40
        11dccc:	12000002 	andne	r0, r0, #2	; 0x2
        11dcd0:	13300000 	teqne	r0, #0	; 0x0
        11dcd4:	03a00000 	moveq	r0, #0	; 0x0
        11dcd8:	13a00001 	movne	r0, #1	; 0x1
        11dcdc:	e20000ff 	and	r0, r0, #255	; 0xff
        11dce0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: DomainInfo::IsCacheable(void)
 * Address: 0011dce4
 */
DomainInfo::IsCacheable(void) {
    /*
        11dce4:	e1a0c00d 	mov	ip, sp
        11dce8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11dcec:	e24cb004 	sub	fp, ip, #4	; 0x4
        11dcf0:	e1a04000 	mov	r4, r0
        11dcf4:	eb677824 	bl	1afbd8c <DomainInfo::$HasHeap(void)>
        11dcf8:	e3300000 	teq	r0, #0	; 0x0
        11dcfc:	15b40028 	ldrne	r0, [r4, #40]!	; fField40
        11dd00:	12000004 	andne	r0, r0, #4	; 0x4
        11dd04:	13300000 	teqne	r0, #0	; 0x0
        11dd08:	03a00000 	moveq	r0, #0	; 0x0
        11dd0c:	13a00001 	movne	r0, #1	; 0x1
        11dd10:	e20000ff 	and	r0, r0, #255	; 0xff
        11dd14:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: DomainInfo::ExceptOnNoMem(void)
 * Address: 0011dd58
 */
DomainInfo::ExceptOnNoMem(void) {
    /*
        11dd58:	e1a0c00d 	mov	ip, sp
        11dd5c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11dd60:	e24cb004 	sub	fp, ip, #4	; 0x4
        11dd64:	e1a04000 	mov	r4, r0
        11dd68:	eb677807 	bl	1afbd8c <DomainInfo::$HasHeap(void)>
        11dd6c:	e3300000 	teq	r0, #0	; 0x0
        11dd70:	15b40028 	ldrne	r0, [r4, #40]!	; fField40
        11dd74:	12000008 	andne	r0, r0, #8	; 0x8
        11dd78:	13300000 	teqne	r0, #0	; 0x0
        11dd7c:	03a00000 	moveq	r0, #0	; 0x0
        11dd80:	13a00001 	movne	r0, #1	; 0x1
        11dd84:	e20000ff 	and	r0, r0, #255	; 0xff
        11dd88:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: DomainInfo::IsHunkOMemory(void)
 * Address: 0011dd8c
 */
DomainInfo::IsHunkOMemory(void) {
    /*
        11dd8c:	e1a0c00d 	mov	ip, sp
        11dd90:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11dd94:	e24cb004 	sub	fp, ip, #4	; 0x4
        11dd98:	e1a04000 	mov	r4, r0
        11dd9c:	eb6777fa 	bl	1afbd8c <DomainInfo::$HasHeap(void)>
        11dda0:	e3300000 	teq	r0, #0	; 0x0
        11dda4:	0a000004 	beq	11ddbc <DomainInfo::IsHunkOMemory(void)+0x30>
        11dda8:	e5b40028 	ldr	r0, [r4, #40]!	; fField40
        11ddac:	e2000020 	and	r0, r0, #32	; 0x20
        11ddb0:	e3300020 	teq	r0, #32	; 0x20
        11ddb4:	03a00001 	moveq	r0, #1	; 0x1
        11ddb8:	0a000000 	beq	11ddc0 <DomainInfo::IsHunkOMemory(void)+0x34>
        11ddbc:	e3a00000 	mov	r0, #0	; 0x0
        11ddc0:	e20000ff 	and	r0, r0, #255	; 0xff
        11ddc4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: DomainInfo::HeapSize(void)
 * Address: 0011ddc8
 */
DomainInfo::HeapSize(void) {
    /*
        11ddc8:	e5900020 	ldr	r0, [r0, #32]	; fField32
        11ddcc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: DomainInfo::HandleHeapSize(void)
 * Address: 0011ddd0
 */
DomainInfo::HandleHeapSize(void) {
    /*
        11ddd0:	e5900024 	ldr	r0, [r0, #36]	; fField36
        11ddd4:	e1a0f00e 	mov	pc, lr
    */
}

