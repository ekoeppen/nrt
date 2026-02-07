#include "include/TXStdContainer.h"

/**
 * Symbol: TXStdContainer::__ct(TXStream *)
 * Address: 00234de8
 */
TXStdContainer::TXStdContainer(TXStream *) {
    /*
        234de8:	e1a0c00d 	mov	ip, sp
        234dec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        234df0:	e24cb004 	sub	fp, ip, #4	; 0x4
        234df4:	e1b04000 	movs	r4, r0
        234df8:	e1a05001 	mov	r5, r1
        234dfc:	1a000005 	bne	234e18 <TXStdContainer::__ct(TXStream *)+0x30>
        234e00:	e3a0003c 	mov	r0, #60	; 0x3c
        234e04:	eb66664b 	bl	1bce738 <$__nw(unsigned int)>
        234e08:	e1b04000 	movs	r4, r0
        234e0c:	1a000001 	bne	234e18 <TXStdContainer::__ct(TXStream *)+0x30>
        234e10:	e1a00004 	mov	r0, r4
        234e14:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        234e18:	e1a01005 	mov	r1, r5
        234e1c:	e1a00004 	mov	r0, r4
        234e20:	eb6551b2 	bl	1b894f0 <TXContainer::$__ct(TXStream *)>
        234e24:	e59f0030 	ldr	r0, [pc, #30]	; 234e5c <TXStdContainer::__ct(TXStream *)+0x74>
        234e28:	e3350000 	teq	r5, #0	; 0x0
        234e2c:	e5840000 	str	r0, [r4]
        234e30:	03a00000 	moveq	r0, #0	; 0x0
        234e34:	0a000003 	beq	234e48 <TXStdContainer::__ct(TXStream *)+0x60>
        234e38:	e1a00005 	mov	r0, r5
        234e3c:	e5951000 	ldr	r1, [r5]
        234e40:	e1a0e00f 	mov	lr, pc
        234e44:	e281f004 	add	pc, r1, #4	; 0x4
        234e48:	e584000c 	str	r0, [r4, #12]	; fField12
        234e4c:	e3e00000 	mvn	r0, #0	; 0x0
        234e50:	e5840010 	str	r0, [r4, #16]	; fField16
        234e54:	e5840014 	str	r0, [r4, #20]	; fField20
        234e58:	eaffffec 	b	234e10 <TXStdContainer::__ct(TXStream *)+0x28>
        234e5c:	0001de4c 	andeq	sp, r1, ip, asr #28
    */
}

/**
 * Symbol: TXStdContainer::SetStream(TXStream *)
 * Address: 00234e68
 */
TXStdContainer::SetStream(TXStream *) {
    /*
        234e68:	e1a0c00d 	mov	ip, sp
        234e6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        234e70:	e24cb004 	sub	fp, ip, #4	; 0x4
        234e74:	e1a04000 	mov	r4, r0
        234e78:	e1a05001 	mov	r5, r1
        234e7c:	eb65519c 	bl	1b894f4 <TXContainer::$SetStream(TXStream *)>
        234e80:	e1a00005 	mov	r0, r5
        234e84:	e5951000 	ldr	r1, [r5]
        234e88:	e1a0e00f 	mov	lr, pc
        234e8c:	e281f004 	add	pc, r1, #4	; 0x4
        234e90:	e5a4000c 	str	r0, [r4, #12]!	; fField12
        234e94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXStdContainer::BeginWrite(void)
 * Address: 00234e98
 */
TXStdContainer::BeginWrite(void) {
    /*
        234e98:	e1a0c00d 	mov	ip, sp
        234e9c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        234ea0:	e24cb004 	sub	fp, ip, #4	; 0x4
        234ea4:	e1a04000 	mov	r4, r0
        234ea8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        234eac:	e3300000 	teq	r0, #0	; 0x0
        234eb0:	03e00065 	mvneq	r0, #101	; 0x65
        234eb4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        234eb8:	e3a01000 	mov	r1, #0	; 0x0
        234ebc:	e3a00000 	mov	r0, #0	; 0x0
        234ec0:	e5841010 	str	r1, [r4, #16]	; fField16
        234ec4:	e0802080 	add	r2, r0, r0, lsl #1
        234ec8:	e0842102 	add	r2, r4, r2, lsl #2
        234ecc:	e2800001 	add	r0, r0, #1	; 0x1
        234ed0:	e3500003 	cmp	r0, #3	; 0x3
        234ed4:	e5a21018 	str	r1, [r2, #24]!
        234ed8:	bafffff9 	blt	234ec4 <TXStdContainer::BeginWrite(void)+0x2c>
        234edc:	e24dd008 	sub	sp, sp, #8	; 0x8
        234ee0:	e5940004 	ldr	r0, [r4, #4]	; fField4
        234ee4:	e58d0000 	str	r0, [sp]
        234ee8:	e3a00000 	mov	r0, #0	; 0x0
        234eec:	e58d0004 	str	r0, [sp, #4]	; fField4
        234ef0:	e28d1004 	add	r1, sp, #4	; 0x4
        234ef4:	e3a02004 	mov	r2, #4	; 0x4
        234ef8:	e59d0000 	ldr	r0, [sp]
        234efc:	eb659379 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        234f00:	e28dd008 	add	sp, sp, #8	; 0x8
        234f04:	e3300000 	teq	r0, #0	; 0x0
        234f08:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        234f0c:	e2841018 	add	r1, r4, #24	; 0x18
        234f10:	e3a02024 	mov	r2, #36	; 0x24
        234f14:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        234f18:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        234f1c:	ea659371 	b	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
    */
}

/**
 * Symbol: TXStdContainer::EndWrite(unsigned char, TXContainerImportInfo *)
 * Address: 00234f20
 */
TXStdContainer::EndWrite(unsigned char, TXContainerImportInfo *) {
    /*
        234f20:	e1a0c00d 	mov	ip, sp
        234f24:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        234f28:	e24cb004 	sub	fp, ip, #4	; 0x4
        234f2c:	e1a04000 	mov	r4, r0
        234f30:	e31100ff 	tst	r1, #255	; 0xff
        234f34:	13a00000 	movne	r0, #0	; 0x0
        234f38:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
        234f3c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        234f40:	e5901000 	ldr	r1, [r0]
        234f44:	e1a0e00f 	mov	lr, pc
        234f48:	e281f004 	add	pc, r1, #4	; 0x4
        234f4c:	e1a06000 	mov	r6, r0
        234f50:	e5942004 	ldr	r2, [r4, #4]	; fField4
        234f54:	e1a00002 	mov	r0, r2
        234f58:	e594100c 	ldr	r1, [r4, #12]	; fField12
        234f5c:	e5922000 	ldr	r2, [r2]
        234f60:	e1a0e00f 	mov	lr, pc
        234f64:	e282f008 	add	pc, r2, #8	; 0x8
        234f68:	e24dd008 	sub	sp, sp, #8	; 0x8
        234f6c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        234f70:	e58d0000 	str	r0, [sp]
        234f74:	e5940010 	ldr	r0, [r4, #16]	; fField16
        234f78:	e58d0004 	str	r0, [sp, #4]	; fField4
        234f7c:	e28d1004 	add	r1, sp, #4	; 0x4
        234f80:	e3a02004 	mov	r2, #4	; 0x4
        234f84:	e59d0000 	ldr	r0, [sp]
        234f88:	eb659356 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        234f8c:	e28dd008 	add	sp, sp, #8	; 0x8
        234f90:	e1b05000 	movs	r5, r0
        234f94:	1a000005 	bne	234fb0 <TXStdContainer::EndWrite(unsigned char, TXContainerImportInfo *)+0x90>
        234f98:	e5940010 	ldr	r0, [r4, #16]	; fField16
        234f9c:	e0802080 	add	r2, r0, r0, lsl #1
        234fa0:	e1a02102 	mov	r2, r2, lsl #2
        234fa4:	e2841018 	add	r1, r4, #24	; 0x18
        234fa8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        234fac:	eb65934d 	bl	1b99ce8 <TXStream::$WriteBytes(void const *, long)>
        234fb0:	e1a01006 	mov	r1, r6
        234fb4:	e5b42004 	ldr	r2, [r4, #4]!	; fField4
        234fb8:	e1a00002 	mov	r0, r2
        234fbc:	e5922000 	ldr	r2, [r2]
        234fc0:	e1a0e00f 	mov	lr, pc
        234fc4:	e282f008 	add	pc, r2, #8	; 0x8
        234fc8:	e1a00005 	mov	r0, r5
        234fcc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TXStdContainer::AppendNewValue(unsigned long, long)
 * Address: 00234fd0
 */
TXStdContainer::AppendNewValue(unsigned long, long) {
    /*
        234fd0:	e1a0c00d 	mov	ip, sp
        234fd4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        234fd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        234fdc:	e1a04000 	mov	r4, r0
        234fe0:	e1a05001 	mov	r5, r1
        234fe4:	eb655144 	bl	1b894fc <TXContainer::$AppendNewValue(unsigned long, long)>
        234fe8:	e5940004 	ldr	r0, [r4, #4]	; fField4
        234fec:	e3300000 	teq	r0, #0	; 0x0
        234ff0:	03e00065 	mvneq	r0, #101	; 0x65
        234ff4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        234ff8:	e5940010 	ldr	r0, [r4, #16]	; fField16
        234ffc:	e0800080 	add	r0, r0, r0, lsl #1
        235000:	e0840100 	add	r0, r4, r0, lsl #2
        235004:	e2801018 	add	r1, r0, #24	; 0x18
        235008:	e3a00000 	mov	r0, #0	; 0x0
        23500c:	e5810004 	str	r0, [r1, #4]	; fField4
        235010:	e5815000 	str	r5, [r1]
        235014:	e5a10008 	str	r0, [r1, #8]!
        235018:	e5941010 	ldr	r1, [r4, #16]	; fField16
        23501c:	e2811001 	add	r1, r1, #1	; 0x1
        235020:	e5a41010 	str	r1, [r4, #16]!	; fField16
        235024:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXStdContainer::WriteObject(long, TXAttrObject *, long, unsigned char *)
 * Address: 00235028
 */
TXStdContainer::WriteObject(long, TXAttrObject *, long, unsigned char *) {
    /*
        235028:	e1a0c00d 	mov	ip, sp
        23502c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        235030:	e24cb004 	sub	fp, ip, #4	; 0x4
        235034:	e1a04000 	mov	r4, r0
        235038:	e1a06002 	mov	r6, r2
        23503c:	e1a05003 	mov	r5, r3
        235040:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        235044:	e5900004 	ldr	r0, [r0, #4]	; fField4
        235048:	e5901000 	ldr	r1, [r0]
        23504c:	e1a0e00f 	mov	lr, pc
        235050:	e281f004 	add	pc, r1, #4	; 0x4
        235054:	e1a07000 	mov	r7, r0
        235058:	e1a03008 	mov	r3, r8
        23505c:	e1a02005 	mov	r2, r5
        235060:	e1a01006 	mov	r1, r6
        235064:	e1a00004 	mov	r0, r4
        235068:	e594c000 	ldr	ip, [r4]
        23506c:	e1a0e00f 	mov	lr, pc
        235070:	e28cf038 	add	pc, ip, #56	; 0x38
        235074:	e1b06000 	movs	r6, r0
        235078:	1a00000e 	bne	2350b8 <TXStdContainer::WriteObject(long, TXAttrObject *, long, unsigned char *)+0x90>
        23507c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        235080:	e0800080 	add	r0, r0, r0, lsl #1
        235084:	e0840100 	add	r0, r4, r0, lsl #2
        235088:	e280500c 	add	r5, r0, #12	; 0xc
        23508c:	e5950004 	ldr	r0, [r5, #4]	; fField4
        235090:	e2800001 	add	r0, r0, #1	; 0x1
        235094:	e5850004 	str	r0, [r5, #4]	; fField4
        235098:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
        23509c:	e5901000 	ldr	r1, [r0]
        2350a0:	e1a0e00f 	mov	lr, pc
        2350a4:	e281f004 	add	pc, r1, #4	; 0x4
        2350a8:	e0401007 	sub	r1, r0, r7
        2350ac:	e5950008 	ldr	r0, [r5, #8]
        2350b0:	e0810000 	add	r0, r1, r0
        2350b4:	e5a50008 	str	r0, [r5, #8]!
        2350b8:	e1a00006 	mov	r0, r6
        2350bc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TXStdContainer::WriteText(TXTextDescriptor *)
 * Address: 002350c0
 */
TXStdContainer::WriteText(TXTextDescriptor *) {
    /*
        2350c0:	e1a0c00d 	mov	ip, sp
        2350c4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2350c8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2350cc:	e1a04000 	mov	r4, r0
        2350d0:	e1a05001 	mov	r5, r1
        2350d4:	eb655510 	bl	1b8a51c <TXContainer::$WriteText(TXTextDescriptor *)>
        2350d8:	e3300000 	teq	r0, #0	; 0x0
        2350dc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        2350e0:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2350e4:	e0811081 	add	r1, r1, r1, lsl #1
        2350e8:	e0841101 	add	r1, r4, r1, lsl #2
        2350ec:	e5b52008 	ldr	r2, [r5, #8]!
        2350f0:	e5b13014 	ldr	r3, [r1, #20]!	; fField20
        2350f4:	e0832082 	add	r2, r3, r2, lsl #1
        2350f8:	e5812000 	str	r2, [r1]
        2350fc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TXStdContainer::FocusOnValue(unsigned long)
 * Address: 00235100
 */
TXStdContainer::FocusOnValue(unsigned long) {
    /*
        235100:	e1a0c00d 	mov	ip, sp
        235104:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        235108:	e24cb004 	sub	fp, ip, #4	; 0x4
        23510c:	e1a04000 	mov	r4, r0
        235110:	e1a05001 	mov	r5, r1
        235114:	eb6550f7 	bl	1b894f8 <TXContainer::$FocusOnValue(unsigned long)>
        235118:	e3e08065 	mvn	r8, #101	; 0x65
        23511c:	e5942004 	ldr	r2, [r4, #4]	; fField4
        235120:	e3320000 	teq	r2, #0	; 0x0
        235124:	1a000001 	bne	235130 <TXStdContainer::FocusOnValue(unsigned long)+0x30>
        235128:	e1a00008 	mov	r0, r8
        23512c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        235130:	e2846018 	add	r6, r4, #24	; 0x18
        235134:	e5940010 	ldr	r0, [r4, #16]	; fField16
        235138:	e3500000 	cmp	r0, #0	; 0x0
        23513c:	aa000012 	bge	23518c <TXStdContainer::FocusOnValue(unsigned long)+0x8c>
        235140:	e1a00002 	mov	r0, r2
        235144:	e594100c 	ldr	r1, [r4, #12]	; fField12
        235148:	e5922000 	ldr	r2, [r2]
        23514c:	e1a0e00f 	mov	lr, pc
        235150:	e282f008 	add	pc, r2, #8	; 0x8
        235154:	e5940004 	ldr	r0, [r4, #4]	; fField4
        235158:	e2841010 	add	r1, r4, #16	; 0x10
        23515c:	e3a02004 	mov	r2, #4	; 0x4
        235160:	eb6592e1 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        235164:	e3300000 	teq	r0, #0	; 0x0
        235168:	1a000005 	bne	235184 <TXStdContainer::FocusOnValue(unsigned long)+0x84>
        23516c:	e5940010 	ldr	r0, [r4, #16]	; fField16
        235170:	e0802080 	add	r2, r0, r0, lsl #1
        235174:	e1a02102 	mov	r2, r2, lsl #2
        235178:	e1a01006 	mov	r1, r6
        23517c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        235180:	eb6592d9 	bl	1b99cec <TXStream::$ReadBytes(void *, long)>
        235184:	e3300000 	teq	r0, #0	; 0x0
        235188:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        23518c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        235190:	e2801028 	add	r1, r0, #40	; 0x28
        235194:	e3a07000 	mov	r7, #0	; 0x0
        235198:	e5940010 	ldr	r0, [r4, #16]	; fField16
        23519c:	e3500000 	cmp	r0, #0	; 0x0
        2351a0:	da000010 	ble	2351e8 <TXStdContainer::FocusOnValue(unsigned long)+0xe8>
        2351a4:	e5962000 	ldr	r2, [r6]
        2351a8:	e1320005 	teq	r2, r5
        2351ac:	1a000007 	bne	2351d0 <TXStdContainer::FocusOnValue(unsigned long)+0xd0>
        2351b0:	e5942004 	ldr	r2, [r4, #4]	; fField4
        2351b4:	e1a00002 	mov	r0, r2
        2351b8:	e5922000 	ldr	r2, [r2]
        2351bc:	e1a0e00f 	mov	lr, pc
        2351c0:	e282f008 	add	pc, r2, #8	; 0x8
        2351c4:	e3a00000 	mov	r0, #0	; 0x0
        2351c8:	e5a47014 	str	r7, [r4, #20]!	; fField20
        2351cc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2351d0:	e5962008 	ldr	r2, [r6, #8]
        2351d4:	e0821001 	add	r1, r2, r1
        2351d8:	e286600c 	add	r6, r6, #12	; 0xc
        2351dc:	e2877001 	add	r7, r7, #1	; 0x1
        2351e0:	e1570000 	cmp	r7, r0
        2351e4:	baffffee 	blt	2351a4 <TXStdContainer::FocusOnValue(unsigned long)+0xa4>
        2351e8:	e3e00000 	mvn	r0, #0	; 0x0
        2351ec:	e5a40014 	str	r0, [r4, #20]!	; fField20
        2351f0:	eaffffcc 	b	235128 <TXStdContainer::FocusOnValue(unsigned long)+0x28>
    */
}

/**
 * Symbol: TXStdContainer::GetCountObjects(long *)
 * Address: 002351f4
 */
TXStdContainer::GetCountObjects(long *) {
    /*
        2351f4:	e5902014 	ldr	r2, [r0, #20]	; fField20
        2351f8:	e0822082 	add	r2, r2, r2, lsl #1
        2351fc:	e0800102 	add	r0, r0, r2, lsl #2
        235200:	e590001c 	ldr	r0, [r0, #28]	; fField28
        235204:	e5810000 	str	r0, [r1]
        235208:	e3a00000 	mov	r0, #0	; 0x0
        23520c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXStdContainer::GetValueSize(long *)
 * Address: 00235210
 */
TXStdContainer::GetValueSize(long *) {
    /*
        235210:	e5902014 	ldr	r2, [r0, #20]	; fField20
        235214:	e0822082 	add	r2, r2, r2, lsl #1
        235218:	e0800102 	add	r0, r0, r2, lsl #2
        23521c:	e5900020 	ldr	r0, [r0, #32]	; fField32
        235220:	e5810000 	str	r0, [r1]
        235224:	e3a00000 	mov	r0, #0	; 0x0
        235228:	e1a0f00e 	mov	pc, lr
    */
}

