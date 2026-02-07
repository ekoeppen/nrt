#include "include/T28F016_SA_SVDriver.h"

/**
 * Symbol: Sizeof__19T28F016_SA_SVDriverSFv
 * Address: 00203de8
 */
void T28F016_SA_SVDriver::Sizeof() {
    /*
        203de8:	e3a00010 	mov	r0, #16	; 0x10
        203dec:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: WaitForStatus__19T28F016_SA_SVDriverSFPUVlUlN32
 * Address: 00203df0
 */
void T28F016_SA_SVDriver::WaitForStatus() {
    /*
        203df0:	e92d4000 	stmdb	sp!, {lr}
        203df4:	e3c1c48e 	bic	ip, r1, #-1912602624	; 0x8e000000
        203df8:	e3ccc88e 	bic	ip, ip, #9306112	; 0x8e0000
        203dfc:	e3cccc8e 	bic	ip, ip, #36352	; 0x8e00
        203e00:	e3ccc08e 	bic	ip, ip, #142	; 0x8e
        203e04:	e59de004 	ldr	lr, [sp, #4]
        203e08:	e580c000 	str	ip, [r0]
        203e0c:	e0022001 	and	r2, r2, r1
        203e10:	e0031001 	and	r1, r3, r1
        203e14:	e080300e 	add	r3, r0, lr
        203e18:	e593e000 	ldr	lr, [r3]
        203e1c:	e00ee002 	and	lr, lr, r2
        203e20:	e13e0001 	teq	lr, r1
        203e24:	08bd8000 	ldmeqia	sp!, {pc}
        203e28:	e580c000 	str	ip, [r0]
        203e2c:	e593e000 	ldr	lr, [r3]
        203e30:	e00ee002 	and	lr, lr, r2
        203e34:	e13e0001 	teq	lr, r1
        203e38:	1afffffa 	bne	203e28 <WaitForStatus__19T28F016_SA_SVDriverSFPUVlUlN32+0x38>
        203e3c:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::CleanUpDriverData(TFlashRange &, TMemoryAllocator &)
 * Address: 00203e40
 */
T28F016_SA_SVDriver::CleanUpDriverData(TFlashRange &, TMemoryAllocator &) {
    /*
        203e40:	e1a0c00d 	mov	ip, sp
        203e44:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        203e48:	e24cb004 	sub	fp, ip, #4	; 0x4
        203e4c:	e1a04001 	mov	r4, r1
        203e50:	e5911040 	ldr	r1, [r1, #64]
        203e54:	e1a00002 	mov	r0, r2
        203e58:	e5922000 	ldr	r2, [r2]
        203e5c:	e1a0e00f 	mov	lr, pc
        203e60:	e282f004 	add	pc, r2, #4	; 0x4
        203e64:	e3a00000 	mov	r0, #0	; 0x0
        203e68:	e5a40040 	str	r0, [r4, #64]!
        203e6c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::InitializeDriverData(TFlashRange &, TMemoryAllocator &)
 * Address: 00203e70
 */
T28F016_SA_SVDriver::InitializeDriverData(TFlashRange &, TMemoryAllocator &) {
    /*
        203e70:	e1a0c00d 	mov	ip, sp
        203e74:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        203e78:	e24cb004 	sub	fp, ip, #4	; 0x4
        203e7c:	e1a04001 	mov	r4, r1
        203e80:	e1a00002 	mov	r0, r2
        203e84:	e3a01020 	mov	r1, #32	; 0x20
        203e88:	e1a0e00f 	mov	lr, pc
        203e8c:	e592f000 	ldr	pc, [r2]
        203e90:	e1b01000 	movs	r1, r0
        203e94:	03a000e9 	moveq	r0, #233	; 0xe9
        203e98:	02400b0a 	subeq	r0, r0, #10240	; 0x2800
        203e9c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        203ea0:	e5841040 	str	r1, [r4, #64]
        203ea4:	e5940038 	ldr	r0, [r4, #56]
        203ea8:	e3300004 	teq	r0, #4	; 0x4
        203eac:	e5942034 	ldr	r2, [r4, #52]
        203eb0:	1a000004 	bne	203ec8 <T28F016_SA_SVDriver::InitializeDriverData(TFlashRange &, TMemoryAllocator &)+0x58>
        203eb4:	e3320004 	teq	r2, #4	; 0x4
        203eb8:	13a000ff 	movne	r0, #255	; 0xff
        203ebc:	128008ff 	addne	r0, r0, #16711680	; 0xff0000
        203ec0:	03e00000 	mvneq	r0, #0	; 0x0
        203ec4:	ea000012 	b	203f14 <T28F016_SA_SVDriver::InitializeDriverData(TFlashRange &, TMemoryAllocator &)+0xa4>
        203ec8:	e3300002 	teq	r0, #2	; 0x2
        203ecc:	1a00000a 	bne	203efc <T28F016_SA_SVDriver::InitializeDriverData(TFlashRange &, TMemoryAllocator &)+0x8c>
        203ed0:	e3320002 	teq	r2, #2	; 0x2
        203ed4:	13a000ff 	movne	r0, #255	; 0xff
        203ed8:	03a00801 	moveq	r0, #65536	; 0x10000
        203edc:	02400001 	subeq	r0, r0, #1	; 0x1
        203ee0:	e5810000 	str	r0, [r1]
        203ee4:	e5940014 	ldr	r0, [r4, #20]
        203ee8:	e3700801 	cmn	r0, #65536	; 0x10000
        203eec:	05910000 	ldreq	r0, [r1]
        203ef0:	01a00800 	moveq	r0, r0, lsl #16
        203ef4:	0a000006 	beq	203f14 <T28F016_SA_SVDriver::InitializeDriverData(TFlashRange &, TMemoryAllocator &)+0xa4>
        203ef8:	ea000006 	b	203f18 <T28F016_SA_SVDriver::InitializeDriverData(TFlashRange &, TMemoryAllocator &)+0xa8>
        203efc:	e3a00cff 	mov	r0, #65280	; 0xff00
        203f00:	e5810000 	str	r0, [r1]
        203f04:	e5940014 	ldr	r0, [r4, #20]
        203f08:	e33004ff 	teq	r0, #-16777216	; 0xff000000
        203f0c:	1a000001 	bne	203f18 <T28F016_SA_SVDriver::InitializeDriverData(TFlashRange &, TMemoryAllocator &)+0xa8>
        203f10:	e3a004ff 	mov	r0, #-16777216	; 0xff000000
        203f14:	e5810000 	str	r0, [r1]
        203f18:	e3a00008 	mov	r0, #8	; 0x8
        203f1c:	e5b42024 	ldr	r2, [r4, #36]!
        203f20:	e3320001 	teq	r2, #1	; 0x1
        203f24:	15810004 	strne	r0, [r1, #4]
        203f28:	13a00004 	movne	r0, #4	; 0x4
        203f2c:	03a02010 	moveq	r2, #16	; 0x10
        203f30:	05812004 	streq	r2, [r1, #4]
        203f34:	e5810008 	str	r0, [r1, #8]
        203f38:	e3a00000 	mov	r0, #0	; 0x0
        203f3c:	e581000c 	str	r0, [r1, #12]
        203f40:	e5c1001c 	strb	r0, [r1, #28]
        203f44:	e5c1001d 	strb	r0, [r1, #29]	; fField29
        203f48:	e5c1001e 	strb	r0, [r1, #30]
        203f4c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::StartReadingArray(TFlashRange &)
 * Address: 00203f50
 */
T28F016_SA_SVDriver::StartReadingArray(TFlashRange &) {
    /*
        203f50:	e1a0c00d 	mov	ip, sp
        203f54:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        203f58:	e24cb004 	sub	fp, ip, #4	; 0x4
        203f5c:	e5914040 	ldr	r4, [r1, #64]
        203f60:	e5945000 	ldr	r5, [r4]
        203f64:	e5b16010 	ldr	r6, [r1, #16]!
        203f68:	e5d4001c 	ldrb	r0, [r4, #28]
        203f6c:	e3300000 	teq	r0, #0	; 0x0
        203f70:	0a00001c 	beq	203fe8 <T28F016_SA_SVDriver::StartReadingArray(TFlashRange &)+0x98>
        203f74:	e3c5044f 	bic	r0, r5, #1325400064	; 0x4f000000
        203f78:	e3c0084f 	bic	r0, r0, #5177344	; 0x4f0000
        203f7c:	e3c00c4f 	bic	r0, r0, #20224	; 0x4f00
        203f80:	e3c0004f 	bic	r0, r0, #79	; 0x4f
        203f84:	e5860000 	str	r0, [r6]
        203f88:	e1a01005 	mov	r1, r5
        203f8c:	e1a00006 	mov	r0, r6
        203f90:	e5942004 	ldr	r2, [r4, #4]
        203f94:	eb0000dd 	bl	204310 <WaitForDeviceWSMReady__19T28F016_SA_SVDriverSFPUVlUlT2>
        203f98:	e3350000 	teq	r5, #0	; 0x0
        203f9c:	13a00000 	movne	r0, #0	; 0x0
        203fa0:	03a00001 	moveq	r0, #1	; 0x1
        203fa4:	e5961000 	ldr	r1, [r6]
        203fa8:	e0000001 	and	r0, r0, r1
        203fac:	e0000005 	and	r0, r0, r5
        203fb0:	e3c024bf 	bic	r2, r0, #-1090519040	; 0xbf000000
        203fb4:	e3c228bf 	bic	r2, r2, #12517376	; 0xbf0000
        203fb8:	e3c22cbf 	bic	r2, r2, #48896	; 0xbf00
        203fbc:	e3d220bf 	bics	r2, r2, #191	; 0xbf
        203fc0:	e3a01000 	mov	r1, #0	; 0x0
        203fc4:	e3a00001 	mov	r0, #1	; 0x1
        203fc8:	05c4101e 	streqb	r1, [r4, #30]
        203fcc:	05c4001d 	streqb	r0, [r4, #29]	; fField29
        203fd0:	15c4001e 	strneb	r0, [r4, #30]
        203fd4:	15c4101c 	strneb	r1, [r4, #28]
        203fd8:	15c4101d 	strneb	r1, [r4, #29]	; fField29
        203fdc:	e3a0004a 	mov	r0, #74	; 0x4a
        203fe0:	eb67e7b8 	bl	1bfdec8 <$ShortTimerDelay(unsigned long)>
        203fe4:	ea000003 	b	203ff8 <T28F016_SA_SVDriver::StartReadingArray(TFlashRange &)+0xa8>
        203fe8:	e1a01005 	mov	r1, r5
        203fec:	e1a00006 	mov	r0, r6
        203ff0:	e5b42004 	ldr	r2, [r4, #4]!
        203ff4:	eb0000c5 	bl	204310 <WaitForDeviceWSMReady__19T28F016_SA_SVDriverSFPUVlUlT2>
        203ff8:	e5865000 	str	r5, [r6]
        203ffc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::DoneReadingArray(TFlashRange &)
 * Address: 00204000
 */
T28F016_SA_SVDriver::DoneReadingArray(TFlashRange &) {
    /*
        204000:	e5910040 	ldr	r0, [r1, #64]
        204004:	e5d0201d 	ldrb	r2, [r0, #29]	; fField29
        204008:	e3320000 	teq	r2, #0	; 0x0
        20400c:	01a0f00e 	moveq	pc, lr
        204010:	e5911010 	ldr	r1, [r1, #16]
        204014:	e5902000 	ldr	r2, [r0]
        204018:	e3c2242f 	bic	r2, r2, #788529152	; 0x2f000000
        20401c:	e3c2282f 	bic	r2, r2, #3080192	; 0x2f0000
        204020:	e3c22c2f 	bic	r2, r2, #12032	; 0x2f00
        204024:	e3c2202f 	bic	r2, r2, #47	; 0x2f
        204028:	e5812000 	str	r2, [r1]
        20402c:	e3a01000 	mov	r1, #0	; 0x0
        204030:	e5c0101d 	strb	r1, [r0, #29]	; fField29
        204034:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::BeginWrite(TFlashRange &, unsigned long, unsigned long)
 * Address: 00204038
 */
T28F016_SA_SVDriver::BeginWrite(TFlashRange &, unsigned long, unsigned long) {
    /*
        204038:	e591c040 	ldr	ip, [r1, #64]
        20403c:	e5ac300c 	str	r3, [ip, #12]!
        204040:	e58c2008 	str	r2, [ip, #8]
        204044:	ea6188cc 	b	1a6637c <T28F016_SA_SVDriver::$StartLoadingPageBuffer(TFlashRange &)>
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::Write(unsigned long, unsigned long, unsigned long, TFlashRange &)
 * Address: 00204048
 */
T28F016_SA_SVDriver::Write(unsigned long, unsigned long, unsigned long, TFlashRange &) {
    /*
        204048:	e1a0c00d 	mov	ip, sp
        20404c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        204050:	e24cb004 	sub	fp, ip, #4	; 0x4
        204054:	e1a05000 	mov	r5, r0
        204058:	e1a04003 	mov	r4, r3
        20405c:	e1e02002 	mvn	r2, r2
        204060:	e1811002 	orr	r1, r1, r2
        204064:	e59b9004 	ldr	r9, [fp, #4]
        204068:	e5831000 	str	r1, [r3]
        20406c:	e5996040 	ldr	r6, [r9, #64]
        204070:	e5960010 	ldr	r0, [r6, #16]
        204074:	e2400001 	sub	r0, r0, #1	; 0x1
        204078:	e5860010 	str	r0, [r6, #16]
        20407c:	e5960010 	ldr	r0, [r6, #16]
        204080:	e3300000 	teq	r0, #0	; 0x0
        204084:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        204088:	e1a01004 	mov	r1, r4
        20408c:	e1a00009 	mov	r0, r9
        204090:	e5967000 	ldr	r7, [r6]
        204094:	e5992000 	ldr	r2, [r9]
        204098:	e1a0e00f 	mov	lr, pc
        20409c:	e282f008 	add	pc, r2, #8	; 0x8
        2040a0:	e1a08000 	mov	r8, r0
        2040a4:	e1a01007 	mov	r1, r7
        2040a8:	e5962004 	ldr	r2, [r6, #4]
        2040ac:	eb0000ca 	bl	2043dc <WaitForQueueAndPageBuffer__19T28F016_SA_SVDriverSFPUVlUlT2>
        2040b0:	e3c704f3 	bic	r0, r7, #-218103808	; 0xf3000000
        2040b4:	e3c008f3 	bic	r0, r0, #15925248	; 0xf30000
        2040b8:	e3c00cf3 	bic	r0, r0, #62208	; 0xf300
        2040bc:	e3c000f3 	bic	r0, r0, #243	; 0xf3
        2040c0:	e5880000 	str	r0, [r8]
        2040c4:	e5960018 	ldr	r0, [r6, #24]
        2040c8:	e2400001 	sub	r0, r0, #1	; 0x1
        2040cc:	e1800400 	orr	r0, r0, r0, lsl #8
        2040d0:	e1800800 	orr	r0, r0, r0, lsl #16
        2040d4:	e0000007 	and	r0, r0, r7
        2040d8:	e5880000 	str	r0, [r8]
        2040dc:	e3a01000 	mov	r1, #0	; 0x0
        2040e0:	e5960014 	ldr	r0, [r6, #20]
        2040e4:	e5801000 	str	r1, [r0]
        2040e8:	e5960018 	ldr	r0, [r6, #24]
        2040ec:	e596100c 	ldr	r1, [r6, #12]
        2040f0:	e0510000 	subs	r0, r1, r0
        2040f4:	e586000c 	str	r0, [r6, #12]
        2040f8:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        2040fc:	e2840004 	add	r0, r4, #4	; 0x4
        204100:	e1a01009 	mov	r1, r9
        204104:	e5a60014 	str	r0, [r6, #20]!
        204108:	e1a00005 	mov	r0, r5
        20410c:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        204110:	ea618899 	b	1a6637c <T28F016_SA_SVDriver::$StartLoadingPageBuffer(TFlashRange &)>
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::StartLoadingPageBuffer(TFlashRange &)
 * Address: 00204114
 */
T28F016_SA_SVDriver::StartLoadingPageBuffer(TFlashRange &) {
    /*
        204114:	e1a0c00d 	mov	ip, sp
        204118:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        20411c:	e24cb004 	sub	fp, ip, #4	; 0x4
        204120:	e1a04001 	mov	r4, r1
        204124:	e5915040 	ldr	r5, [r1, #64]
        204128:	e5916010 	ldr	r6, [r1, #16]
        20412c:	e5953004 	ldr	r3, [r5, #4]
        204130:	e5957000 	ldr	r7, [r5]
        204134:	e92d0008 	stmdb	sp!, {r3}
        204138:	e1a01007 	mov	r1, r7
        20413c:	e1a00006 	mov	r0, r6
        204140:	e59f3060 	ldr	r3, [pc, #60]	; 2041a8 <T28F016_SA_SVDriver::StartLoadingPageBuffer(TFlashRange &)+0x94>
        204144:	e1a02003 	mov	r2, r3
        204148:	ebffff28 	bl	203df0 <WaitForStatus__19T28F016_SA_SVDriverSFPUVlUlN32>
        20414c:	e28dd004 	add	sp, sp, #4	; 0x4
        204150:	e5b40024 	ldr	r0, [r4, #36]!
        204154:	e3300001 	teq	r0, #1	; 0x1
        204158:	13a00080 	movne	r0, #128	; 0x80
        20415c:	03a00c01 	moveq	r0, #256	; 0x100
        204160:	e595100c 	ldr	r1, [r5, #12]
        204164:	e1510000 	cmp	r1, r0
        204168:	91a00001 	movls	r0, r1
        20416c:	e5850018 	str	r0, [r5, #24]
        204170:	e5a50010 	str	r0, [r5, #16]!
        204174:	e2400001 	sub	r0, r0, #1	; 0x1
        204178:	e1800400 	orr	r0, r0, r0, lsl #8
        20417c:	e1800800 	orr	r0, r0, r0, lsl #16
        204180:	e0000007 	and	r0, r0, r7
        204184:	e3c7141f 	bic	r1, r7, #520093696	; 0x1f000000
        204188:	e3c1181f 	bic	r1, r1, #2031616	; 0x1f0000
        20418c:	e3c11c1f 	bic	r1, r1, #7936	; 0x1f00
        204190:	e3c1101f 	bic	r1, r1, #31	; 0x1f
        204194:	e5861000 	str	r1, [r6]
        204198:	e5860000 	str	r0, [r6]
        20419c:	e3a00000 	mov	r0, #0	; 0x0
        2041a0:	e5860000 	str	r0, [r6]
        2041a4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2041a8:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::ReportWriteResult(TFlashRange &, unsigned long)
 * Address: 002041ac
 */
T28F016_SA_SVDriver::ReportWriteResult(TFlashRange &, unsigned long) {
    /*
        2041ac:	e1a0c00d 	mov	ip, sp
        2041b0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2041b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2041b8:	e24dd004 	sub	sp, sp, #4	; 0x4
        2041bc:	e3a03000 	mov	r3, #0	; 0x0
        2041c0:	e92d0008 	stmdb	sp!, {r3}
        2041c4:	e28d3004 	add	r3, sp, #4	; 0x4
        2041c8:	eb618867 	bl	1a6636c <T28F016_SA_SVDriver::$ReportWriteEraseStatus(TFlashRange &, unsigned long, long &, T28F016_SA_SVDriver::eWaitOption)>
        2041cc:	e5bd0004 	ldr	r0, [sp, #4]!
        2041d0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::ReportWriteEraseStatus(TFlashRange &, unsigned long, long &, T28F016_SA_SVDriver::eWaitOption)
 * Address: 002041d4
 */
T28F016_SA_SVDriver::ReportWriteEraseStatus(TFlashRange &, unsigned long, long &, T28F016_SA_SVDriver::eWaitOption) {
    /*
        2041d4:	e1a0c00d 	mov	ip, sp
        2041d8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2041dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2041e0:	e59b4004 	ldr	r4, [fp, #4]
        2041e4:	e5b1c040 	ldr	ip, [r1, #64]!
        2041e8:	e1a00002 	mov	r0, r2
        2041ec:	e59c1000 	ldr	r1, [ip]
        2041f0:	e3c1e47f 	bic	lr, r1, #2130706432	; 0x7f000000
        2041f4:	e3cee87f 	bic	lr, lr, #8323072	; 0x7f0000
        2041f8:	e3ceec7f 	bic	lr, lr, #32512	; 0x7f00
        2041fc:	e3cee07f 	bic	lr, lr, #127	; 0x7f
        204200:	e1a0500e 	mov	r5, lr
        204204:	e59c6008 	ldr	r6, [ip, #8]
        204208:	e0862002 	add	r2, r6, r2
        20420c:	e3c1648e 	bic	r6, r1, #-1912602624	; 0x8e000000
        204210:	e3c6688e 	bic	r6, r6, #9306112	; 0x8e0000
        204214:	e3c66c8e 	bic	r6, r6, #36352	; 0x8e00
        204218:	e3c6608e 	bic	r6, r6, #142	; 0x8e
        20421c:	e5806000 	str	r6, [r0]
        204220:	e3340000 	teq	r4, #0	; 0x0
        204224:	1a000005 	bne	204240 <T28F016_SA_SVDriver::ReportWriteEraseStatus(TFlashRange &, unsigned long, long &, T28F016_SA_SVDriver::eWaitOption)+0x6c>
        204228:	e5924000 	ldr	r4, [r2]
        20422c:	e0047005 	and	r7, r4, r5
        204230:	e137000e 	teq	r7, lr
        204234:	15806000 	strne	r6, [r0]
        204238:	1afffffa 	bne	204228 <T28F016_SA_SVDriver::ReportWriteEraseStatus(TFlashRange &, unsigned long, long &, T28F016_SA_SVDriver::eWaitOption)+0x54>
        20423c:	ea000004 	b	204254 <T28F016_SA_SVDriver::ReportWriteEraseStatus(TFlashRange &, unsigned long, long &, T28F016_SA_SVDriver::eWaitOption)+0x80>
        204240:	e5924000 	ldr	r4, [r2]
        204244:	e0042005 	and	r2, r4, r5
        204248:	e132000e 	teq	r2, lr
        20424c:	13a00000 	movne	r0, #0	; 0x0
        204250:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
        204254:	e3a02000 	mov	r2, #0	; 0x0
        204258:	e004e001 	and	lr, r4, r1
        20425c:	e3ce44df 	bic	r4, lr, #-553648128	; 0xdf000000
        204260:	e3c448df 	bic	r4, r4, #14614528	; 0xdf0000
        204264:	e3c44cdf 	bic	r4, r4, #57088	; 0xdf00
        204268:	e3d440df 	bics	r4, r4, #223	; 0xdf
        20426c:	0a000006 	beq	20428c <T28F016_SA_SVDriver::ReportWriteEraseStatus(TFlashRange &, unsigned long, long &, T28F016_SA_SVDriver::eWaitOption)+0xb8>
        204270:	e3ce24fb 	bic	r2, lr, #-83886080	; 0xfb000000
        204274:	e3c228fb 	bic	r2, r2, #16449536	; 0xfb0000
        204278:	e3c22cfb 	bic	r2, r2, #64256	; 0xfb00
        20427c:	e3d220fb 	bics	r2, r2, #251	; 0xfb
        204280:	03e0203b 	mvneq	r2, #59	; 0x3b
        204284:	02422c29 	subeq	r2, r2, #10496	; 0x2900
        204288:	159f201c 	ldrne	r2, [pc, #1c]	; 2042ac <T28F016_SA_SVDriver::ReportWriteEraseStatus(TFlashRange &, unsigned long, long &, T28F016_SA_SVDriver::eWaitOption)+0xd8>
        20428c:	e5832000 	str	r2, [r3]
        204290:	e3320000 	teq	r2, #0	; 0x0
        204294:	15bc2004 	ldrne	r2, [ip, #4]!
        204298:	1b618829 	blne	1a66344 <$CleanErrorStatus__19T28F016_SA_SVDriverSFPUVlUlT2>
        20429c:	e3a0004a 	mov	r0, #74	; 0x4a
        2042a0:	eb67e708 	bl	1bfdec8 <$ShortTimerDelay(unsigned long)>
        2042a4:	e3a00001 	mov	r0, #1	; 0x1
        2042a8:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        2042ac:	ffffd6c3 	swinv	0x00ffd6c3
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::IssueCommonBlockCommand(TFlashRange &, unsigned long, unsigned long)
 * Address: 002042b0
 */
T28F016_SA_SVDriver::IssueCommonBlockCommand(TFlashRange &, unsigned long, unsigned long) {
    /*
        2042b0:	e1a0c00d 	mov	ip, sp
        2042b4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        2042b8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2042bc:	e1a04003 	mov	r4, r3
        2042c0:	e1a05002 	mov	r5, r2
        2042c4:	e5b17040 	ldr	r7, [r1, #64]!
        2042c8:	e5976000 	ldr	r6, [r7]
        2042cc:	e1a01006 	mov	r1, r6
        2042d0:	e1a00005 	mov	r0, r5
        2042d4:	e5972008 	ldr	r2, [r7, #8]
        2042d8:	eb00004a 	bl	204408 <WaitForBlockQueue__19T28F016_SA_SVDriverSFPUVlUlT2>
        2042dc:	e0040006 	and	r0, r4, r6
        2042e0:	e5850000 	str	r0, [r5]
        2042e4:	e3c6042f 	bic	r0, r6, #788529152	; 0x2f000000
        2042e8:	e3c0082f 	bic	r0, r0, #3080192	; 0x2f0000
        2042ec:	e3c00c2f 	bic	r0, r0, #12032	; 0x2f00
        2042f0:	e3c0002f 	bic	r0, r0, #47	; 0x2f
        2042f4:	e5850000 	str	r0, [r5]
        2042f8:	e5d7101e 	ldrb	r1, [r7, #30]
        2042fc:	e3310000 	teq	r1, #0	; 0x0
        204300:	13a01000 	movne	r1, #0	; 0x0
        204304:	15c7101e 	strneb	r1, [r7, #30]
        204308:	15850000 	strne	r0, [r5]
        20430c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: WaitForDeviceWSMReady__19T28F016_SA_SVDriverSFPUVlUlT2
 * Address: 00204310
 */
void T28F016_SA_SVDriver::WaitForDeviceWSMReady() {
    /*
        204310:	e1a0c00d 	mov	ip, sp
        204314:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        204318:	e24cb004 	sub	fp, ip, #4	; 0x4
        20431c:	e1a03002 	mov	r3, r2
        204320:	e92d0008 	stmdb	sp!, {r3}
        204324:	e59f3008 	ldr	r3, [pc, #8]	; 204334 <WaitForDeviceWSMReady__19T28F016_SA_SVDriverSFPUVlUlT2+0x24>
        204328:	e1a02003 	mov	r2, r3
        20432c:	ebfffeaf 	bl	203df0 <WaitForStatus__19T28F016_SA_SVDriverSFPUVlUlN32>
        204330:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        204334:	80808080 	addhi	r8, r0, r0, lsl #1
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::StartErase(TFlashRange &, unsigned long)
 * Address: 00204338
 */
T28F016_SA_SVDriver::StartErase(TFlashRange &, unsigned long) {
    /*
        204338:	e1a0c00d 	mov	ip, sp
        20433c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        204340:	e24cb004 	sub	fp, ip, #4	; 0x4
        204344:	e1a06000 	mov	r6, r0
        204348:	e1a05001 	mov	r5, r1
        20434c:	e1a04002 	mov	r4, r2
        204350:	e1a00002 	mov	r0, r2
        204354:	e5912040 	ldr	r2, [r1, #64]
        204358:	e8920006 	ldmia	r2, {r1, r2}
        20435c:	ebffffeb 	bl	204310 <WaitForDeviceWSMReady__19T28F016_SA_SVDriverSFPUVlUlT2>
        204360:	e1a02004 	mov	r2, r4
        204364:	e1a01005 	mov	r1, r5
        204368:	e1a00006 	mov	r0, r6
        20436c:	e59f3008 	ldr	r3, [pc, #8]	; 20437c <T28F016_SA_SVDriver::StartErase(TFlashRange &, unsigned long)+0x44>
        204370:	eb6187fb 	bl	1a66364 <T28F016_SA_SVDriver::$IssueCommonBlockCommand(TFlashRange &, unsigned long, unsigned long)>
        204374:	e3a00000 	mov	r0, #0	; 0x0
        204378:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        20437c:	20202020 	eorcs	r2, r0, r0, lsr #32
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::IsEraseComplete(TFlashRange &, unsigned long, long &)
 * Address: 00204380
 */
T28F016_SA_SVDriver::IsEraseComplete(TFlashRange &, unsigned long, long &) {
    /*
        204380:	e1a0c00d 	mov	ip, sp
        204384:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        204388:	e24cb004 	sub	fp, ip, #4	; 0x4
        20438c:	e1a0c003 	mov	ip, r3
        204390:	e3a03001 	mov	r3, #1	; 0x1
        204394:	e92d0008 	stmdb	sp!, {r3}
        204398:	e1a0300c 	mov	r3, ip
        20439c:	eb6187f2 	bl	1a6636c <T28F016_SA_SVDriver::$ReportWriteEraseStatus(TFlashRange &, unsigned long, long &, T28F016_SA_SVDriver::eWaitOption)>
        2043a0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::LockBlock(TFlashRange &, unsigned long)
 * Address: 002043a4
 */
T28F016_SA_SVDriver::LockBlock(TFlashRange &, unsigned long) {
    /*
        2043a4:	e1a0c00d 	mov	ip, sp
        2043a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2043ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        2043b0:	e1a05000 	mov	r5, r0
        2043b4:	e1a04001 	mov	r4, r1
        2043b8:	e1a06002 	mov	r6, r2
        2043bc:	e59f3014 	ldr	r3, [pc, #14]	; 2043d8 <T28F016_SA_SVDriver::LockBlock(TFlashRange &, unsigned long)+0x34>
        2043c0:	eb6187e7 	bl	1a66364 <T28F016_SA_SVDriver::$IssueCommonBlockCommand(TFlashRange &, unsigned long, unsigned long)>
        2043c4:	e1a02006 	mov	r2, r6
        2043c8:	e1a01004 	mov	r1, r4
        2043cc:	e1a00005 	mov	r0, r5
        2043d0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2043d4:	ea6187e5 	b	1a66370 <T28F016_SA_SVDriver::$ReportWriteResult(TFlashRange &, unsigned long)>
        2043d8:	77777777 	undefined
    */
}

/**
 * Symbol: WaitForQueueAndPageBuffer__19T28F016_SA_SVDriverSFPUVlUlT2
 * Address: 002043dc
 */
void T28F016_SA_SVDriver::WaitForQueueAndPageBuffer() {
    /*
        2043dc:	e1a0c00d 	mov	ip, sp
        2043e0:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2043e4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2043e8:	e1a03002 	mov	r3, r2
        2043ec:	e92d0008 	stmdb	sp!, {r3}
        2043f0:	e59f3008 	ldr	r3, [pc, #8]	; 204400 <WaitForQueueAndPageBuffer__19T28F016_SA_SVDriverSFPUVlUlT2+0x24>
        2043f4:	e59f2008 	ldr	r2, [pc, #8]	; 204404 <WaitForQueueAndPageBuffer__19T28F016_SA_SVDriverSFPUVlUlT2+0x28>
        2043f8:	ebfffe7c 	bl	203df0 <WaitForStatus__19T28F016_SA_SVDriverSFPUVlUlN32>
        2043fc:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        204400:	02020202 	andeq	r0, r2, #536870912	; 0x20000000
        204404:	0a0a0a0a 	beq	486c34 <SYMtimebox+0x3a0>
    */
}

/**
 * Symbol: WaitForBlockQueue__19T28F016_SA_SVDriverSFPUVlUlT2
 * Address: 00204408
 */
void T28F016_SA_SVDriver::WaitForBlockQueue() {
    /*
        204408:	e1a0c00d 	mov	ip, sp
        20440c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        204410:	e24cb004 	sub	fp, ip, #4	; 0x4
        204414:	e1a03002 	mov	r3, r2
        204418:	e92d0008 	stmdb	sp!, {r3}
        20441c:	e3a03000 	mov	r3, #0	; 0x0
        204420:	e59f2004 	ldr	r2, [pc, #4]	; 20442c <WaitForBlockQueue__19T28F016_SA_SVDriverSFPUVlUlT2+0x24>
        204424:	ebfffe71 	bl	203df0 <WaitForStatus__19T28F016_SA_SVDriverSFPUVlUlN32>
        204428:	e91ba800 	ldmdb	fp, {fp, sp, pc}
        20442c:	08080808 	stmeqda	r8, {r3, fp}
    */
}

/**
 * Symbol: CleanErrorStatus__19T28F016_SA_SVDriverSFPUVlUlT2
 * Address: 00204430
 */
void T28F016_SA_SVDriver::CleanErrorStatus() {
    /*
        204430:	e1a0c00d 	mov	ip, sp
        204434:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        204438:	e24cb004 	sub	fp, ip, #4	; 0x4
        20443c:	e1a04000 	mov	r4, r0
        204440:	e1a05001 	mov	r5, r1
        204444:	e1a03002 	mov	r3, r2
        204448:	e92d0008 	stmdb	sp!, {r3}
        20444c:	e59f3020 	ldr	r3, [pc, #20]	; 204474 <CleanErrorStatus__19T28F016_SA_SVDriverSFPUVlUlT2+0x44>
        204450:	e59f2020 	ldr	r2, [pc, #20]	; 204478 <CleanErrorStatus__19T28F016_SA_SVDriverSFPUVlUlT2+0x48>
        204454:	ebfffe65 	bl	203df0 <WaitForStatus__19T28F016_SA_SVDriverSFPUVlUlN32>
        204458:	e28dd004 	add	sp, sp, #4	; 0x4
        20445c:	e3c504af 	bic	r0, r5, #-1358954496	; 0xaf000000
        204460:	e3c008af 	bic	r0, r0, #11468800	; 0xaf0000
        204464:	e3c00caf 	bic	r0, r0, #44800	; 0xaf00
        204468:	e3c000af 	bic	r0, r0, #175	; 0xaf
        20446c:	e5840000 	str	r0, [r4]
        204470:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        204474:	80808080 	addhi	r8, r0, r0, lsl #1
        204478:	c0c0c0c0 	sbcgt	ip, r0, r0, asr #1
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::ResetBlockStatus(TFlashRange &, unsigned long)
 * Address: 0020447c
 */
T28F016_SA_SVDriver::ResetBlockStatus(TFlashRange &, unsigned long) {
    /*
        20447c:	e1a0c00d 	mov	ip, sp
        204480:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        204484:	e24cb004 	sub	fp, ip, #4	; 0x4
        204488:	e1a05002 	mov	r5, r2
        20448c:	e5b16040 	ldr	r6, [r1, #64]!
        204490:	e5964000 	ldr	r4, [r6]
        204494:	e1a01004 	mov	r1, r4
        204498:	e1a00005 	mov	r0, r5
        20449c:	e5962004 	ldr	r2, [r6, #4]
        2044a0:	ebffffcd 	bl	2043dc <WaitForQueueAndPageBuffer__19T28F016_SA_SVDriverSFPUVlUlT2>
        2044a4:	e3c4031a 	bic	r0, r4, #1744830464	; 0x68000000
        2044a8:	e3c0071a 	bic	r0, r0, #6815744	; 0x680000
        2044ac:	e3c00b1a 	bic	r0, r0, #26624	; 0x6800
        2044b0:	e3c00068 	bic	r0, r0, #104	; 0x68
        2044b4:	e5850000 	str	r0, [r5]
        2044b8:	e3c4042f 	bic	r0, r4, #788529152	; 0x2f000000
        2044bc:	e3c0082f 	bic	r0, r0, #3080192	; 0x2f0000
        2044c0:	e3c00c2f 	bic	r0, r0, #12032	; 0x2f00
        2044c4:	e3c0002f 	bic	r0, r0, #47	; 0x2f
        2044c8:	e5850000 	str	r0, [r5]
        2044cc:	e1a01004 	mov	r1, r4
        2044d0:	e1a00005 	mov	r0, r5
        2044d4:	e5b62004 	ldr	r2, [r6, #4]!
        2044d8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2044dc:	ea618798 	b	1a66344 <$CleanErrorStatus__19T28F016_SA_SVDriverSFPUVlUlT2>
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::CleanUp(TMemoryAllocator &)
 * Address: 002044e0
 */
T28F016_SA_SVDriver::CleanUp(TMemoryAllocator &) {
    /*
        2044e0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::Init(TMemoryAllocator &)
 * Address: 002044e4
 */
T28F016_SA_SVDriver::Init(TMemoryAllocator &) {
    /*
        2044e4:	e3a00000 	mov	r0, #0	; 0x0
        2044e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)
 * Address: 002044ec
 */
T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &) {
    /*
        2044ec:	e92d43f0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, lr}
        2044f0:	e1a0e001 	mov	lr, r1
        2044f4:	e3a010ff 	mov	r1, #255	; 0xff
        2044f8:	e3a05001 	mov	r5, #1	; 0x1
        2044fc:	e3a00000 	mov	r0, #0	; 0x0
        204500:	e3520cff 	cmp	r2, #65280	; 0xff00
        204504:	03a02008 	moveq	r2, #8	; 0x8
        204508:	0a000018 	beq	204570 <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0x84>
        20450c:	e3a0c801 	mov	ip, #65536	; 0x10000
        204510:	e24cc001 	sub	ip, ip, #1	; 0x1
        204514:	ca00000a 	bgt	204544 <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0x58>
        204518:	e33204ff 	teq	r2, #-16777216	; 0xff000000
        20451c:	03a02018 	moveq	r2, #24	; 0x18
        204520:	0a000012 	beq	204570 <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0x84>
        204524:	e3720801 	cmn	r2, #65536	; 0x10000
        204528:	03a02010 	moveq	r2, #16	; 0x10
        20452c:	01a0100c 	moveq	r1, ip
        204530:	0a00000d 	beq	20456c <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0x80>
        204534:	e33200ff 	teq	r2, #255	; 0xff
        204538:	03a02000 	moveq	r2, #0	; 0x0
        20453c:	0a00000b 	beq	204570 <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0x84>
        204540:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
        204544:	e3a04801 	mov	r4, #65536	; 0x10000
        204548:	e2444001 	sub	r4, r4, #1	; 0x1
        20454c:	e1320004 	teq	r2, r4
        204550:	0a000003 	beq	204564 <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0x78>
        204554:	e33208ff 	teq	r2, #16711680	; 0xff0000
        204558:	03a02010 	moveq	r2, #16	; 0x10
        20455c:	0a000003 	beq	204570 <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0x84>
        204560:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
        204564:	e3a02000 	mov	r2, #0	; 0x0
        204568:	e1a01004 	mov	r1, r4
        20456c:	e3a05002 	mov	r5, #2	; 0x2
        204570:	e1a0c211 	mov	ip, r1, lsl r2
        204574:	e1a0800c 	mov	r8, ip
        204578:	e1a0400c 	mov	r4, ip
        20457c:	e3cc747f 	bic	r7, ip, #2130706432	; 0x7f000000
        204580:	e3c7787f 	bic	r7, r7, #8323072	; 0x7f0000
        204584:	e3c77c7f 	bic	r7, r7, #32512	; 0x7f00
        204588:	e3c7707f 	bic	r7, r7, #127	; 0x7f
        20458c:	e3a06000 	mov	r6, #0	; 0x0
        204590:	e3a09001 	mov	r9, #1	; 0x1
        204594:	e2899c01 	add	r9, r9, #256	; 0x100
        204598:	e58e7000 	str	r7, [lr]
        20459c:	e58e4000 	str	r4, [lr]
        2045a0:	e2866001 	add	r6, r6, #1	; 0x1
        2045a4:	e1560009 	cmp	r6, r9
        2045a8:	3afffffa 	bcc	204598 <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0xac>
        2045ac:	e58e4000 	str	r4, [lr]
        2045b0:	e3c8c46f 	bic	ip, r8, #1862270976	; 0x6f000000
        2045b4:	e3ccc86f 	bic	ip, ip, #7274496	; 0x6f0000
        2045b8:	e3cccc6f 	bic	ip, ip, #28416	; 0x6f00
        2045bc:	e3ccc06f 	bic	ip, ip, #111	; 0x6f
        2045c0:	e58ec000 	str	ip, [lr]
        2045c4:	e59ec000 	ldr	ip, [lr]
        2045c8:	e001c23c 	and	ip, r1, ip, lsr r2
        2045cc:	e59e6004 	ldr	r6, [lr, #4]
        2045d0:	e0012236 	and	r2, r1, r6, lsr r2
        2045d4:	e58e4000 	str	r4, [lr]
        2045d8:	e33c0089 	teq	ip, #137	; 0x89
        2045dc:	1a000006 	bne	2045fc <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0x110>
        2045e0:	e1a0e801 	mov	lr, r1, lsl #16
        2045e4:	e1a0e82e 	mov	lr, lr, lsr #16
        2045e8:	e3ceec99 	bic	lr, lr, #39168	; 0x9900
        2045ec:	e3cee05f 	bic	lr, lr, #95	; 0x5f
        2045f0:	e13e0002 	teq	lr, r2
        2045f4:	18bd83f0 	ldmneia	sp!, {r4, r5, r6, r7, r8, r9, pc}
        2045f8:	ea00000f 	b	20463c <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0x150>
        2045fc:	e35c00b0 	cmp	ip, #176	; 0xb0
        204600:	1a000006 	bne	204620 <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0x134>
        204604:	e1a0e801 	mov	lr, r1, lsl #16
        204608:	e1a0e82e 	mov	lr, lr, lsr #16
        20460c:	e3ceec99 	bic	lr, lr, #39168	; 0x9900
        204610:	e3cee077 	bic	lr, lr, #119	; 0x77
        204614:	e13e0002 	teq	lr, r2
        204618:	0a000007 	beq	20463c <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0x150>
        20461c:	ea000000 	b	204624 <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0x138>
        204620:	18bd83f0 	ldmneia	sp!, {r4, r5, r6, r7, r8, r9, pc}
        204624:	e1a0e801 	mov	lr, r1, lsl #16
        204628:	e1a0e82e 	mov	lr, lr, lsr #16
        20462c:	e3ceec99 	bic	lr, lr, #39168	; 0x9900
        204630:	e3cee057 	bic	lr, lr, #87	; 0x57
        204634:	e13e0002 	teq	lr, r2
        204638:	18bd83f0 	ldmneia	sp!, {r4, r5, r6, r7, r8, r9, pc}
        20463c:	e3a0e001 	mov	lr, #1	; 0x1
        204640:	e583c000 	str	ip, [r3]
        204644:	e33c0089 	teq	ip, #137	; 0x89
        204648:	e5832004 	str	r2, [r3, #4]
        20464c:	03a00002 	moveq	r0, #2	; 0x2
        204650:	05830008 	streq	r0, [r3, #8]
        204654:	0a000002 	beq	204664 <T28F016_SA_SVDriver::Identify(unsigned long, unsigned long, SFlashChipInformation &)+0x178>
        204658:	e33c00b0 	teq	ip, #176	; 0xb0
        20465c:	18bd83f0 	ldmneia	sp!, {r4, r5, r6, r7, r8, r9, pc}
        204660:	e583e008 	str	lr, [r3, #8]
        204664:	e1a00801 	mov	r0, r1, lsl #16
        204668:	e1a00820 	mov	r0, r0, lsr #16
        20466c:	e3c00c99 	bic	r0, r0, #39168	; 0x9900
        204670:	e3c00057 	bic	r0, r0, #87	; 0x57
        204674:	e1300002 	teq	r0, r2
        204678:	e583500c 	str	r5, [r3, #12]
        20467c:	13a00602 	movne	r0, #2097152	; 0x200000
        204680:	03a00601 	moveq	r0, #1048576	; 0x100000
        204684:	e5830010 	str	r0, [r3, #16]
        204688:	e3a00801 	mov	r0, #65536	; 0x10000
        20468c:	e5a30014 	str	r0, [r3, #20]!
        204690:	e1a0000e 	mov	r0, lr
        204694:	e8bd83f0 	ldmia	sp!, {r4, r5, r6, r7, r8, r9, pc}
    */
}

/**
 * Symbol: ClassInfo__19T28F016_SA_SVDriverSFv
 * Address: 00384820
 */
void T28F016_SA_SVDriver::ClassInfo() {
    /*
        384820:	e24f0044 	sub	r0, pc, #68	; 0x44
        384824:	e1a0f00e 	mov	pc, lr
        384828:	e3a00000 	mov	r0, #0	; 0x0
        38482c:	e1a0f00e 	mov	pc, lr
        384830:	54323846 	ldrplt	r3, [r2], -#2118
        384834:	3031365f 	eorccs	r3, r1, pc, asr r6
        384838:	53415f53 	cmppl	r1, #332	; 0x14c
        38483c:	56447269 	strplb	r7, [r4], -r9, ror #4
        384840:	76657200 	strvcbt	r7, [r5], -r0, lsl #4
        384844:	54466c61 	strplb	r6, [r6], -#3169
        384848:	73684472 	cmnvc	r8, #1912602624	; 0x72000000
        38484c:	69766572 	ldmvsdb	r6!, {r1, r4, r5, r6, r8, sl, sp, lr}^
        384858:	eafffff0 	b	384820 <ClassInfo__19T28F016_SA_SVDriverSFv>
        38485c:	ea5b86bc 	b	1a66354 <T28F016_SA_SVDriver::$Identify(unsigned long, unsigned long, SFlashChipInformation &)>
        384860:	ea5b86b9 	b	1a6634c <T28F016_SA_SVDriver::$CleanUp(TMemoryAllocator &)>
        384864:	ea5b86bb 	b	1a66358 <T28F016_SA_SVDriver::$Init(TMemoryAllocator &)>
        384868:	ea5b86bb 	b	1a6635c <T28F016_SA_SVDriver::$InitializeDriverData(TFlashRange &, TMemoryAllocator &)>
        38486c:	ea5b86b5 	b	1a66348 <T28F016_SA_SVDriver::$CleanUpDriverData(TFlashRange &, TMemoryAllocator &)>
        384870:	ea5b8ac2 	b	1a67380 <T28F016_SA_SVDriver::$StartReadingArray(TFlashRange &)>
        384874:	ea5b86b5 	b	1a66350 <T28F016_SA_SVDriver::$DoneReadingArray(TFlashRange &)>
        384878:	ea5b8ac1 	b	1a67384 <T28F016_SA_SVDriver::$Write(unsigned long, unsigned long, unsigned long, TFlashRange &)>
        38487c:	ea5b86bd 	b	1a66378 <T28F016_SA_SVDriver::$StartErase(TFlashRange &, unsigned long)>
        384880:	ea5b86bb 	b	1a66374 <T28F016_SA_SVDriver::$ResetBlockStatus(TFlashRange &, unsigned long)>
        384884:	ea5b86b5 	b	1a66360 <T28F016_SA_SVDriver::$IsEraseComplete(TFlashRange &, unsigned long, long &)>
        384888:	ea5b86b6 	b	1a66368 <T28F016_SA_SVDriver::$LockBlock(TFlashRange &, unsigned long)>
        38488c:	ea5b86ab 	b	1a66340 <T28F016_SA_SVDriver::$BeginWrite(TFlashRange &, unsigned long, unsigned long)>
        384890:	ea5b86b6 	b	1a66370 <T28F016_SA_SVDriver::$ReportWriteResult(TFlashRange &, unsigned long)>
        384894:	00000000 	andeq	r0, r0, r0
        384898:	00000048 	andeq	r0, r0, r8, asr #32
        38489c:	00000055 	andeq	r0, r0, r5, asr r0
        3848a0:	0000005d 	andeq	r0, r0, sp, asr r0
        3848a4:	00000060 	andeq	r0, r0, r0, rrx
        3848a8:	0000011c 	andeq	r0, r0, ip, lsl r1
        3848ac:	eaf9427b 	b	1d52a0 <Sizeof__16TSerialChip16450SFv>
        3848b8:	eaf9427a 	b	1d52a8 <TSerialChip16450::New(void)>
        3848bc:	eaf943f9 	b	1d58a8 <TSerialChip16450::Delete(void)>
        3848c0:	00030000 	andeq	r0, r3, r0
        3848cc:	ea000001 	b	3848d8 <ClassInfo__16TSerialChip16450SFv+0x8>
    */
}

