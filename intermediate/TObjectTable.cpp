#include "include/TObjectTable.h"

/**
 * Symbol: TObjectTable::Scavenge(void)
 * Address: 00319a80
 */
TObjectTable::Scavenge(void) {
    /*
        319a80:	e1a0c00d 	mov	ip, sp
        319a84:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        319a88:	e24cb004 	sub	fp, ip, #4	; 0x4
        319a8c:	e1a04000 	mov	r4, r0
        319a90:	e5900000 	ldr	r0, [r0]
        319a94:	e3300000 	teq	r0, #0	; 0x0
        319a98:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        319a9c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        319aa0:	e0840100 	add	r0, r4, r0, lsl #2
        319aa4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        319aa8:	e3a06000 	mov	r6, #0	; 0x0
        319aac:	e9840041 	stmib	r4, {r0, r6}
        319ab0:	e3300000 	teq	r0, #0	; 0x0
        319ab4:	0a000025 	beq	319b50 <TObjectTable::Scavenge(void)+0xd0>
        319ab8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        319abc:	e5901008 	ldr	r1, [r0, #8]	; fField8
        319ac0:	e5900000 	ldr	r0, [r0]
        319ac4:	e1310000 	teq	r1, r0
        319ac8:	0a000019 	beq	319b34 <TObjectTable::Scavenge(void)+0xb4>
        319acc:	e1a00004 	mov	r0, r4
        319ad0:	eb000122 	bl	319f60 <TObjectTable::Exists(unsigned long)>
        319ad4:	e3300000 	teq	r0, #0	; 0x0
        319ad8:	1a000015 	bne	319b34 <TObjectTable::Scavenge(void)+0xb4>
        319adc:	e5940004 	ldr	r0, [r4, #4]	; fField4
        319ae0:	e1a05000 	mov	r5, r0
        319ae4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        319ae8:	e5840004 	str	r0, [r4, #4]	; fField4
        319aec:	e5951000 	ldr	r1, [r5]
        319af0:	e5851008 	str	r1, [r5, #8]	; fField8
        319af4:	e1a00005 	mov	r0, r5
        319af8:	e1a0e00f 	mov	lr, pc
        319afc:	e594f000 	ldr	pc, [r4]
        319b00:	e1b01000 	movs	r1, r0
        319b04:	0a00000e 	beq	319b44 <TObjectTable::Scavenge(void)+0xc4>
        319b08:	e5940008 	ldr	r0, [r4, #8]	; fField8
        319b0c:	e3300000 	teq	r0, #0	; 0x0
        319b10:	e5952004 	ldr	r2, [r5, #4]	; fField4
        319b14:	15a02004 	strne	r2, [r0, #4]!	; fField4
        319b18:	0594000c 	ldreq	r0, [r4, #12]	; fField12
        319b1c:	00840100 	addeq	r0, r4, r0, lsl #2
        319b20:	05a02010 	streq	r2, [r0, #16]!	; fField16
        319b24:	e1a00005 	mov	r0, r5
        319b28:	e1a0e00f 	mov	lr, pc
        319b2c:	e1a0f001 	mov	pc, r1
        319b30:	ea000003 	b	319b44 <TObjectTable::Scavenge(void)+0xc4>
        319b34:	e5940004 	ldr	r0, [r4, #4]	; fField4
        319b38:	e5840008 	str	r0, [r4, #8]	; fField8
        319b3c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        319b40:	e5840004 	str	r0, [r4, #4]	; fField4
        319b44:	e5940004 	ldr	r0, [r4, #4]	; fField4
        319b48:	e3300000 	teq	r0, #0	; 0x0
        319b4c:	1affffd9 	bne	319ab8 <TObjectTable::Scavenge(void)+0x38>
        319b50:	e594000c 	ldr	r0, [r4, #12]	; fField12
        319b54:	e2800001 	add	r0, r0, #1	; 0x1
        319b58:	e200007f 	and	r0, r0, #127	; 0x7f
        319b5c:	e5a46008 	str	r6, [r4, #8]!	; fField8
        319b60:	e5840004 	str	r0, [r4, #4]	; fField4
        319b64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectTable::ScavengeAll(void)
 * Address: 00319b68
 */
TObjectTable::ScavengeAll(void) {
    /*
        319b68:	e1a0c00d 	mov	ip, sp
        319b6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        319b70:	e24cb004 	sub	fp, ip, #4	; 0x4
        319b74:	e1a04000 	mov	r4, r0
        319b78:	e3a05000 	mov	r5, #0	; 0x0
        319b7c:	e1a00004 	mov	r0, r4
        319b80:	eb5fadc4 	bl	1b05298 <TObjectTable::$Scavenge(void)>
        319b84:	e2855001 	add	r5, r5, #1	; 0x1
        319b88:	e3550080 	cmp	r5, #128	; 0x80
        319b8c:	3afffffa 	bcc	319b7c <TObjectTable::ScavengeAll(void)+0x14>
        319b90:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectTable::ReassignOwnership(unsigned long, unsigned long)
 * Address: 00319b94
 */
TObjectTable::ReassignOwnership(unsigned long, unsigned long) {
    /*
        319b94:	e1a0c00d 	mov	ip, sp
        319b98:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        319b9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        319ba0:	e1a05000 	mov	r5, r0
        319ba4:	e1a06001 	mov	r6, r1
        319ba8:	e1a04002 	mov	r4, r2
        319bac:	e1a01002 	mov	r1, r2
        319bb0:	eb0000ea 	bl	319f60 <TObjectTable::Exists(unsigned long)>
        319bb4:	e3300000 	teq	r0, #0	; 0x0
        319bb8:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        319bbc:	e3a01000 	mov	r1, #0	; 0x0
        319bc0:	e0850101 	add	r0, r5, r1, lsl #2
        319bc4:	e5900010 	ldr	r0, [r0, #16]	; fField16
        319bc8:	e3300000 	teq	r0, #0	; 0x0
        319bcc:	0a000005 	beq	319be8 <TObjectTable::ReassignOwnership(unsigned long, unsigned long)+0x54>
        319bd0:	e5902008 	ldr	r2, [r0, #8]	; fField8
        319bd4:	e1320006 	teq	r2, r6
        319bd8:	05804008 	streq	r4, [r0, #8]	; fField8
        319bdc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        319be0:	e3300000 	teq	r0, #0	; 0x0
        319be4:	1afffff9 	bne	319bd0 <TObjectTable::ReassignOwnership(unsigned long, unsigned long)+0x3c>
        319be8:	e2811001 	add	r1, r1, #1	; 0x1
        319bec:	e3510080 	cmp	r1, #128	; 0x80
        319bf0:	3afffff2 	bcc	319bc0 <TObjectTable::ReassignOwnership(unsigned long, unsigned long)+0x2c>
        319bf4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectTable::Init(void)
 * Address: 00319df4
 */
TObjectTable::Init(void) {
    /*
        319df4:	e59f1028 	ldr	r1, [pc, #28]	; 319e24 <TObjectTable::Init(void)+0x30>
        319df8:	e3a02000 	mov	r2, #0	; 0x0
        319dfc:	e5801000 	str	r1, [r0]
        319e00:	e3a01000 	mov	r1, #0	; 0x0
        319e04:	e580200c 	str	r2, [r0, #12]	; fField12
        319e08:	e0803101 	add	r3, r0, r1, lsl #2
        319e0c:	e2811001 	add	r1, r1, #1	; 0x1
        319e10:	e3510080 	cmp	r1, #128	; 0x80
        319e14:	e5a32010 	str	r2, [r3, #16]!	; fField16
        319e18:	3afffffa 	bcc	319e08 <TObjectTable::Init(void)+0x14>
        319e1c:	e1a00002 	mov	r0, r2
        319e20:	e1a0f00e 	mov	pc, lr
        319e24:	00319a74 	eoreqs	r9, r1, r4, ror sl
    */
}

/**
 * Symbol: TObjectTable::SetScavengeProc(void (*(*)(TKernelObject *, unsigned long))(TKernelObject *))
 * Address: 00319e28
 */
TObjectTable::SetScavengeProc(void (*(*)(TKernelObject *, unsigned long))(TKernelObject *)) {
    /*
        319e28:	e5801000 	str	r1, [r0]
        319e2c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TObjectTable::NewId(KernelTypes)
 * Address: 00319e30
 */
TObjectTable::NewId(KernelTypes) {
    /*
        319e30:	e1a0c00d 	mov	ip, sp
        319e34:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        319e38:	e24cb004 	sub	fp, ip, #4	; 0x4
        319e3c:	e1a05000 	mov	r5, r0
        319e40:	e1a04001 	mov	r4, r1
        319e44:	eb5ff752 	bl	1b17b94 <TObjectTable::$NextGlobalUniqueId(void)>
        319e48:	e1846200 	orr	r6, r4, r0, lsl #4
        319e4c:	e59f0034 	ldr	r0, [pc, #34]	; 319e88 <TObjectTable::NewId(KernelTypes)+0x58>
        319e50:	e5900000 	ldr	r0, [r0]
        319e54:	e3300000 	teq	r0, #0	; 0x0
        319e58:	0a00001c 	beq	319ed0 <TObjectTable::NewId(KernelTypes)+0xa0>
        319e5c:	e334000b 	teq	r4, #11	; 0xb
        319e60:	1334000c 	teqne	r4, #12	; 0xc
        319e64:	03a08001 	moveq	r8, #1	; 0x1
        319e68:	13a08000 	movne	r8, #0	; 0x0
        319e6c:	e59f0018 	ldr	r0, [pc, #18]	; 319e8c <TObjectTable::NewId(KernelTypes)+0x5c>
        319e70:	e5900000 	ldr	r0, [r0]
        319e74:	e1350000 	teq	r5, r0
        319e78:	11a07000 	movne	r7, r0
        319e7c:	059f000c 	ldreq	r0, [pc, #c]	; 319e90 <TObjectTable::NewId(KernelTypes)+0x60>
        319e80:	05907000 	ldreq	r7, [r0]
        319e84:	ea000005 	b	319ea0 <TObjectTable::NewId(KernelTypes)+0x70>
        319e88:	0c105540 	ldceq	5, cr5, [r0], -#256
        319e8c:	0c100fc8 	ldceq	15, cr0, [r0], -#800
        319e90:	0c101164 	ldfeqs	f1, [r0], -#400
        319e94:	e1a00005 	mov	r0, r5
        319e98:	eb5ff73d 	bl	1b17b94 <TObjectTable::$NextGlobalUniqueId(void)>
        319e9c:	e1846200 	orr	r6, r4, r0, lsl #4
        319ea0:	e1a01006 	mov	r1, r6
        319ea4:	e1a00005 	mov	r0, r5
        319ea8:	eb00002c 	bl	319f60 <TObjectTable::Exists(unsigned long)>
        319eac:	e3300000 	teq	r0, #0	; 0x0
        319eb0:	1afffff7 	bne	319e94 <TObjectTable::NewId(KernelTypes)+0x64>
        319eb4:	e3380000 	teq	r8, #0	; 0x0
        319eb8:	0a000004 	beq	319ed0 <TObjectTable::NewId(KernelTypes)+0xa0>
        319ebc:	e1a01006 	mov	r1, r6
        319ec0:	e1a00007 	mov	r0, r7
        319ec4:	eb000025 	bl	319f60 <TObjectTable::Exists(unsigned long)>
        319ec8:	e3300000 	teq	r0, #0	; 0x0
        319ecc:	1afffff0 	bne	319e94 <TObjectTable::NewId(KernelTypes)+0x64>
        319ed0:	e1a00006 	mov	r0, r6
        319ed4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectTable::NextGlobalUniqueId(void)
 * Address: 00319ed8
 */
TObjectTable::NextGlobalUniqueId(void) {
    /*
        319ed8:	e1a0c00d 	mov	ip, sp
        319edc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        319ee0:	e24cb004 	sub	fp, ip, #4	; 0x4
        319ee4:	eb01e2f5 	bl	392ac0 <EnterAtomic>
        319ee8:	e59f0020 	ldr	r0, [pc, #20]	; 319f10 <TObjectTable::NextGlobalUniqueId(void)+0x38>
        319eec:	e5901004 	ldr	r1, [r0, #4]	; fField4
        319ef0:	e2814001 	add	r4, r1, #1	; 0x1
        319ef4:	e5804004 	str	r4, [r0, #4]	; fField4
        319ef8:	e3340c01 	teq	r4, #256	; 0x100
        319efc:	03a01001 	moveq	r1, #1	; 0x1
        319f00:	05801000 	streq	r1, [r0]
        319f04:	eb01e304 	bl	392b1c <ExitAtomic>
        319f08:	e1a00004 	mov	r0, r4
        319f0c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        319f10:	0c105540 	ldceq	5, cr5, [r0], -#256
    */
}

/**
 * Symbol: TObjectTable::Get(unsigned long)
 * Address: 00319f14
 */
TObjectTable::Get(unsigned long) {
    /*
        319f14:	e3a0207f 	mov	r2, #127	; 0x7f
        319f18:	e0022221 	and	r2, r2, r1, lsr #4
        319f1c:	e0800102 	add	r0, r0, r2, lsl #2
        319f20:	e5900010 	ldr	r0, [r0, #16]	; fField16
        319f24:	e3a02000 	mov	r2, #0	; 0x0
        319f28:	e3300000 	teq	r0, #0	; 0x0
        319f2c:	0a000009 	beq	319f58 <TObjectTable::Get(unsigned long)+0x44>
        319f30:	e5903000 	ldr	r3, [r0]
        319f34:	e1330001 	teq	r3, r1
        319f38:	1a000003 	bne	319f4c <TObjectTable::Get(unsigned long)+0x38>
        319f3c:	e5901000 	ldr	r1, [r0]
        319f40:	e3310000 	teq	r1, #0	; 0x0
        319f44:	11a0f00e 	movne	pc, lr
        319f48:	ea000002 	b	319f58 <TObjectTable::Get(unsigned long)+0x44>
        319f4c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        319f50:	e3300000 	teq	r0, #0	; 0x0
        319f54:	1afffff5 	bne	319f30 <TObjectTable::Get(unsigned long)+0x1c>
        319f58:	e1a00002 	mov	r0, r2
        319f5c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TObjectTable::Exists(unsigned long)
 * Address: 00319f60
 */
TObjectTable::Exists(unsigned long) {
    /*
        319f60:	e3a0207f 	mov	r2, #127	; 0x7f
        319f64:	e0022221 	and	r2, r2, r1, lsr #4
        319f68:	e0800102 	add	r0, r0, r2, lsl #2
        319f6c:	e5900010 	ldr	r0, [r0, #16]	; fField16
        319f70:	e3300000 	teq	r0, #0	; 0x0
        319f74:	0a000006 	beq	319f94 <TObjectTable::Exists(unsigned long)+0x34>
        319f78:	e5902000 	ldr	r2, [r0]
        319f7c:	e1320001 	teq	r2, r1
        319f80:	03a00001 	moveq	r0, #1	; 0x1
        319f84:	01a0f00e 	moveq	pc, lr
        319f88:	e5900004 	ldr	r0, [r0, #4]	; fField4
        319f8c:	e3300000 	teq	r0, #0	; 0x0
        319f90:	1afffff8 	bne	319f78 <TObjectTable::Exists(unsigned long)+0x18>
        319f94:	e3a00000 	mov	r0, #0	; 0x0
        319f98:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TObjectTable::Add(TKernelObject *, KernelTypes, unsigned long)
 * Address: 00319f9c
 */
TObjectTable::Add(TKernelObject *, KernelTypes, unsigned long) {
    /*
        319f9c:	e1a0c00d 	mov	ip, sp
        319fa0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        319fa4:	e24cb004 	sub	fp, ip, #4	; 0x4
        319fa8:	e1a06000 	mov	r6, r0
        319fac:	e1a04001 	mov	r4, r1
        319fb0:	e1a01002 	mov	r1, r2
        319fb4:	e1a05003 	mov	r5, r3
        319fb8:	eb5ff6f4 	bl	1b17b90 <TObjectTable::$NewId(KernelTypes)>
        319fbc:	e3350001 	teq	r5, #1	; 0x1
        319fc0:	e5840000 	str	r0, [r4]
        319fc4:	01a05000 	moveq	r5, r0
        319fc8:	e5845008 	str	r5, [r4, #8]	; fField8
        319fcc:	e3a0107f 	mov	r1, #127	; 0x7f
        319fd0:	e584500c 	str	r5, [r4, #12]	; fField12
        319fd4:	e0015220 	and	r5, r1, r0, lsr #4
        319fd8:	eb01e2ec 	bl	392b90 <EnterFIQAtomic>
        319fdc:	e0860105 	add	r0, r6, r5, lsl #2
        319fe0:	e5901010 	ldr	r1, [r0, #16]	; fField16
        319fe4:	e5841004 	str	r1, [r4, #4]	; fField4
        319fe8:	e5a04010 	str	r4, [r0, #16]!	; fField16
        319fec:	eb01e2ef 	bl	392bb0 <ExitFIQAtomic>
        319ff0:	e5940000 	ldr	r0, [r4]
        319ff4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TObjectTable::Remove(unsigned long)
 * Address: 00319ff8
 */
TObjectTable::Remove(unsigned long) {
    /*
        319ff8:	e1a0c00d 	mov	ip, sp
        319ffc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        31a000:	e24cb004 	sub	fp, ip, #4	; 0x4
        31a004:	e1a04000 	mov	r4, r0
        31a008:	e3a06000 	mov	r6, #0	; 0x0
        31a00c:	e311000f 	tst	r1, #15	; 0xf
        31a010:	0a000024 	beq	31a0a8 <TObjectTable::Remove(unsigned long)+0xb0>
        31a014:	e3a0007f 	mov	r0, #127	; 0x7f
        31a018:	e0000221 	and	r0, r0, r1, lsr #4
        31a01c:	e0847100 	add	r7, r4, r0, lsl #2
        31a020:	e5975010 	ldr	r5, [r7, #16]	; fField16
        31a024:	e3350000 	teq	r5, #0	; 0x0
        31a028:	0a00001e 	beq	31a0a8 <TObjectTable::Remove(unsigned long)+0xb0>
        31a02c:	e5950000 	ldr	r0, [r5]
        31a030:	e1300001 	teq	r0, r1
        31a034:	1a000017 	bne	31a098 <TObjectTable::Remove(unsigned long)+0xa0>
        31a038:	e5950000 	ldr	r0, [r5]
        31a03c:	e5850008 	str	r0, [r5, #8]	; fField8
        31a040:	e1a00005 	mov	r0, r5
        31a044:	e1a0e00f 	mov	lr, pc
        31a048:	e594f000 	ldr	pc, [r4]
        31a04c:	e1b01000 	movs	r1, r0
        31a050:	0a00000e 	beq	31a090 <TObjectTable::Remove(unsigned long)+0x98>
        31a054:	e3360000 	teq	r6, #0	; 0x0
        31a058:	e5950004 	ldr	r0, [r5, #4]	; fField4
        31a05c:	15860004 	strne	r0, [r6, #4]	; fField4
        31a060:	05a70010 	streq	r0, [r7, #16]!	; fField16
        31a064:	e5940004 	ldr	r0, [r4, #4]	; fField4
        31a068:	e1300005 	teq	r0, r5
        31a06c:	05950004 	ldreq	r0, [r5, #4]	; fField4
        31a070:	05a40004 	streq	r0, [r4, #4]!	; fField4
        31a074:	0a000002 	beq	31a084 <TObjectTable::Remove(unsigned long)+0x8c>
        31a078:	e5940008 	ldr	r0, [r4, #8]	; fField8
        31a07c:	e1300005 	teq	r0, r5
        31a080:	05a46008 	streq	r6, [r4, #8]!	; fField8
        31a084:	e1a00005 	mov	r0, r5
        31a088:	e1a0e00f 	mov	lr, pc
        31a08c:	e1a0f001 	mov	pc, r1
        31a090:	e3a00000 	mov	r0, #0	; 0x0
        31a094:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        31a098:	e1a06005 	mov	r6, r5
        31a09c:	e5955004 	ldr	r5, [r5, #4]	; fField4
        31a0a0:	e3350000 	teq	r5, #0	; 0x0
        31a0a4:	1affffe0 	bne	31a02c <TObjectTable::Remove(unsigned long)+0x34>
        31a0a8:	e3a000e8 	mov	r0, #232	; 0xe8
        31a0ac:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
        31a0b0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

