#include "include/TADSPEndpointChunk.h"

/**
 * Symbol: TADSPEndpointChunk::__ct(void)
 * Address: 00023d28
 */
TADSPEndpointChunk::TADSPEndpointChunk(void) {
    /*
         23d28:	e1a0c00d 	mov	ip, sp
         23d2c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         23d30:	e24cb004 	sub	fp, ip, #4	; 0x4
         23d34:	e1b04000 	movs	r4, r0
         23d38:	1a000003 	bne	23d4c <TADSPEndpointChunk::__ct(void)+0x24>
         23d3c:	e3a00f8b 	mov	r0, #556	; 0x22c
         23d40:	eb6eaa7c 	bl	1bce738 <$__nw(unsigned int)>
         23d44:	e1b04000 	movs	r4, r0
         23d48:	0a00003e 	beq	23e48 <TADSPEndpointChunk::__ct(void)+0x120>
         23d4c:	e3a05000 	mov	r5, #0	; 0x0
         23d50:	e5c4500c 	strb	r5, [r4, #12]	; fField12
         23d54:	e5845008 	str	r5, [r4, #8]
         23d58:	e2840018 	add	r0, r4, #24	; 0x18
         23d5c:	e1a06000 	mov	r6, r0
         23d60:	e3a01001 	mov	r1, #1	; 0x1
         23d64:	eb6f3f10 	bl	1bf39ac <TAddress::$__ct(unsigned char)>
         23d68:	e2840024 	add	r0, r4, #36	; 0x24
         23d6c:	eb6f012e 	bl	1be422c <CList::$__ct(void)>
         23d70:	e284003c 	add	r0, r4, #60	; 0x3c
         23d74:	eb6f012c 	bl	1be422c <CList::$__ct(void)>
         23d78:	e2840058 	add	r0, r4, #88	; 0x58
         23d7c:	eb6f012a 	bl	1be422c <CList::$__ct(void)>
         23d80:	e2840070 	add	r0, r4, #112	; 0x70
         23d84:	eb6f0128 	bl	1be422c <CList::$__ct(void)>
         23d88:	e284008c 	add	r0, r4, #140	; 0x8c
         23d8c:	eb6f0126 	bl	1be422c <CList::$__ct(void)>
         23d90:	e2840d05 	add	r0, r4, #320	; 0x140
         23d94:	eb6ea644 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         23d98:	e2840e15 	add	r0, r4, #336	; 0x150
         23d9c:	eb6f0125 	bl	1be4238 <TAEvent::$__ct(void)>
         23da0:	e59f00a8 	ldr	r0, [pc, #a8]	; 23e50 <TADSPEndpointChunk::__ct(void)+0x128>
         23da4:	e5840150 	str	r0, [r4, #336]	; fField336
         23da8:	e584515c 	str	r5, [r4, #348]	; fField348
         23dac:	e5845158 	str	r5, [r4, #344]	; fField344
         23db0:	e59f009c 	ldr	r0, [pc, #9c]	; 23e54 <TADSPEndpointChunk::__ct(void)+0x12c>
         23db4:	e5840154 	str	r0, [r4, #340]	; fField340
         23db8:	e3a00004 	mov	r0, #4	; 0x4
         23dbc:	e2800b02 	add	r0, r0, #2048	; 0x800
         23dc0:	e5840160 	str	r0, [r4, #352]	; fField352
         23dc4:	e2840f5a 	add	r0, r4, #360	; 0x168
         23dc8:	eb6ea637 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         23dcc:	e2840f5e 	add	r0, r4, #376	; 0x178
         23dd0:	eb698961 	bl	1a8635c <TADSPSendBuffer::$__ct(void)>
         23dd4:	e2840f76 	add	r0, r4, #472	; 0x1d8
         23dd8:	eb69895e 	bl	1a86358 <TADSPRecvBuffer::$__ct(void)>
         23ddc:	e5845000 	str	r5, [r4]
         23de0:	e5845004 	str	r5, [r4, #4]	; fField4
         23de4:	e5845010 	str	r5, [r4, #16]	; fField16
         23de8:	e3a03000 	mov	r3, #0	; 0x0
         23dec:	e5845014 	str	r5, [r4, #20]
         23df0:	e92d0008 	stmdb	sp!, {r3}
         23df4:	e1a00006 	mov	r0, r6
         23df8:	e3a02000 	mov	r2, #0	; 0x0
         23dfc:	e3a01000 	mov	r1, #0	; 0x0
         23e00:	eb6f3ef6 	bl	1bf39e0 <TAddress::$SetAddress(unsigned long, unsigned short, unsigned char, unsigned char)>
         23e04:	e28dd004 	add	sp, sp, #4	; 0x4
         23e08:	e5c65001 	strb	r5, [r6, #1]
         23e0c:	e5c450a4 	strb	r5, [r4, #164]	; fField164
         23e10:	e58450a8 	str	r5, [r4, #168]	; fField168
         23e14:	e5c450b4 	strb	r5, [r4, #180]	; fField180
         23e18:	e5c450b5 	strb	r5, [r4, #181]	; fField181
         23e1c:	e5c450b6 	strb	r5, [r4, #182]	; fField182
         23e20:	e5c450b7 	strb	r5, [r4, #183]	; fField183
         23e24:	e5c450b8 	strb	r5, [r4, #184]	; fField184
         23e28:	e5c450b9 	strb	r5, [r4, #185]
         23e2c:	e5c450ba 	strb	r5, [r4, #186]
         23e30:	e5c450bb 	strb	r5, [r4, #187]	; fField187
         23e34:	e5845054 	str	r5, [r4, #84]	; fField84
         23e38:	e5845088 	str	r5, [r4, #136]	; fField136
         23e3c:	e58450ac 	str	r5, [r4, #172]
         23e40:	e5c450bc 	strb	r5, [r4, #188]	; fField188
         23e44:	e5c450bd 	strb	r5, [r4, #189]	; fField189
         23e48:	e1a00004 	mov	r0, r4
         23e4c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         23e50:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         23e54:	61647370 	cmnvs	r4, r0, ror r3
    */
}

/**
 * Symbol: TADSPEndpointChunk::__dt(void)
 * Address: 00023e58
 */
TADSPEndpointChunk::~TADSPEndpointChunk(void) {
    /*
         23e58:	e1a0c00d 	mov	ip, sp
         23e5c:	e92ddff3 	stmdb	sp!, {r0, r1, r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         23e60:	e24cb004 	sub	fp, ip, #4	; 0x4
         23e64:	e1a04000 	mov	r4, r0
         23e68:	e2800024 	add	r0, r0, #36	; 0x24
         23e6c:	e1a08000 	mov	r8, r0
         23e70:	e5900000 	ldr	r0, [r0]
         23e74:	e2505001 	subs	r5, r0, #1	; 0x1
         23e78:	4a00000d 	bmi	23eb4 <TADSPEndpointChunk::__dt(void)+0x5c>
         23e7c:	e1a00008 	mov	r0, r8
         23e80:	e5981000 	ldr	r1, [r8]
         23e84:	e2411001 	sub	r1, r1, #1	; 0x1
         23e88:	eb6f092d 	bl	1be6344 <CList::$At(long)>
         23e8c:	e1a06000 	mov	r6, r0
         23e90:	e1a00008 	mov	r0, r8
         23e94:	e5981000 	ldr	r1, [r8]
         23e98:	e2411001 	sub	r1, r1, #1	; 0x1
         23e9c:	e3a02001 	mov	r2, #1	; 0x1
         23ea0:	eb6f21e3 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         23ea4:	e1a00006 	mov	r0, r6
         23ea8:	eb6ea60c 	bl	1bcd6e0 <$__dl(void *)>
         23eac:	e2555001 	subs	r5, r5, #1	; 0x1
         23eb0:	5afffff1 	bpl	23e7c <TADSPEndpointChunk::__dt(void)+0x24>
         23eb4:	e2840058 	add	r0, r4, #88	; 0x58
         23eb8:	e1a07000 	mov	r7, r0
         23ebc:	e5900000 	ldr	r0, [r0]
         23ec0:	e2505001 	subs	r5, r0, #1	; 0x1
         23ec4:	4a00000d 	bmi	23f00 <TADSPEndpointChunk::__dt(void)+0xa8>
         23ec8:	e1a00007 	mov	r0, r7
         23ecc:	e5971000 	ldr	r1, [r7]
         23ed0:	e2411001 	sub	r1, r1, #1	; 0x1
         23ed4:	eb6f091a 	bl	1be6344 <CList::$At(long)>
         23ed8:	e1a06000 	mov	r6, r0
         23edc:	e1a00007 	mov	r0, r7
         23ee0:	e5971000 	ldr	r1, [r7]
         23ee4:	e2411001 	sub	r1, r1, #1	; 0x1
         23ee8:	e3a02001 	mov	r2, #1	; 0x1
         23eec:	eb6f21d0 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         23ef0:	e1a00006 	mov	r0, r6
         23ef4:	eb6ea5f9 	bl	1bcd6e0 <$__dl(void *)>
         23ef8:	e2555001 	subs	r5, r5, #1	; 0x1
         23efc:	5afffff1 	bpl	23ec8 <TADSPEndpointChunk::__dt(void)+0x70>
         23f00:	e284003c 	add	r0, r4, #60	; 0x3c
         23f04:	e1a06000 	mov	r6, r0
         23f08:	e5900000 	ldr	r0, [r0]
         23f0c:	e2505001 	subs	r5, r0, #1	; 0x1
         23f10:	4a00000d 	bmi	23f4c <TADSPEndpointChunk::__dt(void)+0xf4>
         23f14:	e1a00006 	mov	r0, r6
         23f18:	e5961000 	ldr	r1, [r6]
         23f1c:	e2411001 	sub	r1, r1, #1	; 0x1
         23f20:	eb6f0907 	bl	1be6344 <CList::$At(long)>
         23f24:	e1a09000 	mov	r9, r0
         23f28:	e1a00006 	mov	r0, r6
         23f2c:	e5961000 	ldr	r1, [r6]
         23f30:	e2411001 	sub	r1, r1, #1	; 0x1
         23f34:	e3a02001 	mov	r2, #1	; 0x1
         23f38:	eb6f21bd 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         23f3c:	e1a00009 	mov	r0, r9
         23f40:	eb6ea5e6 	bl	1bcd6e0 <$__dl(void *)>
         23f44:	e2555001 	subs	r5, r5, #1	; 0x1
         23f48:	5afffff1 	bpl	23f14 <TADSPEndpointChunk::__dt(void)+0xbc>
         23f4c:	e2840070 	add	r0, r4, #112	; 0x70
         23f50:	e1a05000 	mov	r5, r0
         23f54:	e5900000 	ldr	r0, [r0]
         23f58:	e2509001 	subs	r9, r0, #1	; 0x1
         23f5c:	4a00000d 	bmi	23f98 <TADSPEndpointChunk::__dt(void)+0x140>
         23f60:	e1a00005 	mov	r0, r5
         23f64:	e5951000 	ldr	r1, [r5]
         23f68:	e2411001 	sub	r1, r1, #1	; 0x1
         23f6c:	eb6f08f4 	bl	1be6344 <CList::$At(long)>
         23f70:	e1a0a000 	mov	sl, r0
         23f74:	e1a00005 	mov	r0, r5
         23f78:	e5951000 	ldr	r1, [r5]
         23f7c:	e2411001 	sub	r1, r1, #1	; 0x1
         23f80:	e3a02001 	mov	r2, #1	; 0x1
         23f84:	eb6f21aa 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         23f88:	e1a0000a 	mov	r0, sl
         23f8c:	eb6ea5d3 	bl	1bcd6e0 <$__dl(void *)>
         23f90:	e2599001 	subs	r9, r9, #1	; 0x1
         23f94:	5afffff1 	bpl	23f60 <TADSPEndpointChunk::__dt(void)+0x108>
         23f98:	e2840f76 	add	r0, r4, #472	; 0x1d8
         23f9c:	e3a01000 	mov	r1, #0	; 0x0
         23fa0:	eb698cf7 	bl	1a87384 <TADSPRecvBuffer::$__dt(void)>
         23fa4:	e2840f5e 	add	r0, r4, #376	; 0x178
         23fa8:	e3a01000 	mov	r1, #0	; 0x0
         23fac:	eb698cf5 	bl	1a87388 <TADSPSendBuffer::$__dt(void)>
         23fb0:	e2840f5a 	add	r0, r4, #360	; 0x168
         23fb4:	e3a01000 	mov	r1, #0	; 0x0
         23fb8:	eb6ea9d4 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         23fbc:	e2840d05 	add	r0, r4, #320	; 0x140
         23fc0:	e3a01000 	mov	r1, #0	; 0x0
         23fc4:	eb6ea9d1 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         23fc8:	e284008c 	add	r0, r4, #140	; 0x8c
         23fcc:	e3a01000 	mov	r1, #0	; 0x0
         23fd0:	eb6f04ab 	bl	1be5284 <CList::$__dt(void)>
         23fd4:	e1a00005 	mov	r0, r5
         23fd8:	e3a01000 	mov	r1, #0	; 0x0
         23fdc:	eb6f04a8 	bl	1be5284 <CList::$__dt(void)>
         23fe0:	e1a00007 	mov	r0, r7
         23fe4:	e3a01000 	mov	r1, #0	; 0x0
         23fe8:	eb6f04a5 	bl	1be5284 <CList::$__dt(void)>
         23fec:	e1a00006 	mov	r0, r6
         23ff0:	e3a01000 	mov	r1, #0	; 0x0
         23ff4:	eb6f04a2 	bl	1be5284 <CList::$__dt(void)>
         23ff8:	e1a00008 	mov	r0, r8
         23ffc:	e3a01000 	mov	r1, #0	; 0x0
         24000:	eb6f049f 	bl	1be5284 <CList::$__dt(void)>
         24004:	e2840008 	add	r0, r4, #8	; 0x8
         24008:	e3a01000 	mov	r1, #0	; 0x0
         2400c:	eb6ea9c4 	bl	1bce724 <TUObject::$__dt(void)>
         24010:	e51b102c 	ldr	r1, [fp, -#44]
         24014:	e3110001 	tst	r1, #1	; 0x1
         24018:	11a00004 	movne	r0, r4
         2401c:	191b6ff0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         24020:	1a6ea5ae 	bne	1bcd6e0 <$__dl(void *)>
         24024:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::Init(TADSPEndpoint *, TEndpointEventHandler *, unsigned long)
 * Address: 00024028
 */
TADSPEndpointChunk::Init(TADSPEndpoint *, TEndpointEventHandler *, unsigned long) {
    /*
         24028:	e1a0c00d 	mov	ip, sp
         2402c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         24030:	e24cb004 	sub	fp, ip, #4	; 0x4
         24034:	e1a04000 	mov	r4, r0
         24038:	e8a00006 	stmia	r0!, {r1, r2}
         2403c:	e5a03008 	str	r3, [r0, #8]!
         24040:	e2800e13 	add	r0, r0, #304	; 0x130
         24044:	e3a01001 	mov	r1, #1	; 0x1
         24048:	eb6ec691 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         2404c:	e3300000 	teq	r0, #0	; 0x0
         24050:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         24054:	e2840f5a 	add	r0, r4, #360	; 0x168
         24058:	e3a01001 	mov	r1, #1	; 0x1
         2405c:	eb6ec68c 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         24060:	e3300000 	teq	r0, #0	; 0x0
         24064:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         24068:	e59f102c 	ldr	r1, [pc, #2c]	; 2409c <TADSPEndpointChunk::Init(TADSPEndpoint *, TEndpointEventHandler *, unsigned long)+0x74>
         2406c:	e5841150 	str	r1, [r4, #336]	; fField336
         24070:	e59f1028 	ldr	r1, [pc, #28]	; 240a0 <TADSPEndpointChunk::Init(TADSPEndpoint *, TEndpointEventHandler *, unsigned long)+0x78>
         24074:	e5841154 	str	r1, [r4, #340]	; fField340
         24078:	e5941004 	ldr	r1, [r4, #4]	; fField4
         2407c:	e584115c 	str	r1, [r4, #348]	; fField348
         24080:	e3a01000 	mov	r1, #0	; 0x0
         24084:	e3a02004 	mov	r2, #4	; 0x4
         24088:	e2822b02 	add	r2, r2, #2048	; 0x800
         2408c:	e5841158 	str	r1, [r4, #344]	; fField344
         24090:	e5842160 	str	r2, [r4, #352]	; fField352
         24094:	e5a41164 	str	r1, [r4, #356]!	; fField356
         24098:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         2409c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         240a0:	61647370 	cmnvs	r4, r0, ror r3
    */
}

/**
 * Symbol: TADSPEndpointChunk::InitBuffers(TOptionArray *)
 * Address: 000240a4
 */
TADSPEndpointChunk::InitBuffers(TOptionArray *) {
    /*
         240a4:	e1a0c00d 	mov	ip, sp
         240a8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         240ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         240b0:	e1a04000 	mov	r4, r0
         240b4:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         240b8:	e1a0000d 	mov	r0, sp
         240bc:	eb6e468d 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         240c0:	e3a060ff 	mov	r6, #255	; 0xff
         240c4:	e2866c01 	add	r6, r6, #256	; 0x100
         240c8:	e1a07006 	mov	r7, r6
         240cc:	e1a0000d 	mov	r0, sp
         240d0:	eb6e52d1 	bl	1bb8c1c <TOptionIterator::$FirstOption(void)>
         240d4:	e1a05000 	mov	r5, r0
         240d8:	e1a0000d 	mov	r0, sp
         240dc:	eb6e56f7 	bl	1bb9cc0 <TOptionIterator::$More(void)>
         240e0:	e3300000 	teq	r0, #0	; 0x0
         240e4:	0a000010 	beq	2412c <TADSPEndpointChunk::InitBuffers(TOptionArray *)+0x88>
         240e8:	e59f806c 	ldr	r8, [pc, #6c]	; 2415c <TADSPEndpointChunk::InitBuffers(TOptionArray *)+0xb8>
         240ec:	e5950000 	ldr	r0, [r5]
         240f0:	e1300008 	teq	r0, r8
         240f4:	1a000005 	bne	24110 <TADSPEndpointChunk::InitBuffers(TOptionArray *)+0x6c>
         240f8:	e595000c 	ldr	r0, [r5, #12]	; fField12
         240fc:	e3300001 	teq	r0, #1	; 0x1
         24100:	05b57010 	ldreq	r7, [r5, #16]!	; fField16
         24104:	0a000001 	beq	24110 <TADSPEndpointChunk::InitBuffers(TOptionArray *)+0x6c>
         24108:	e3300002 	teq	r0, #2	; 0x2
         2410c:	05b56010 	ldreq	r6, [r5, #16]!	; fField16
         24110:	e1a0000d 	mov	r0, sp
         24114:	eb6e56ec 	bl	1bb9ccc <TOptionIterator::$NextOption(void)>
         24118:	e1a05000 	mov	r5, r0
         2411c:	e1a0000d 	mov	r0, sp
         24120:	eb6e56e6 	bl	1bb9cc0 <TOptionIterator::$More(void)>
         24124:	e3300000 	teq	r0, #0	; 0x0
         24128:	1affffef 	bne	240ec <TADSPEndpointChunk::InitBuffers(TOptionArray *)+0x48>
         2412c:	e2840f5e 	add	r0, r4, #376	; 0x178
         24130:	e1a01007 	mov	r1, r7
         24134:	eb697c20 	bl	1a831bc <TADSPBuffer::$Init(long)>
         24138:	e1b05000 	movs	r5, r0
         2413c:	02840f76 	addeq	r0, r4, #472	; 0x1d8
         24140:	01a01006 	moveq	r1, r6
         24144:	0b697c1c 	bleq	1a831bc <TADSPBuffer::$Init(long)>
         24148:	e1a0000d 	mov	r0, sp
         2414c:	e3a01000 	mov	r1, #0	; 0x0
         24150:	eb6e4a79 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         24154:	e1a00005 	mov	r0, r5
         24158:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         2415c:	6273697a 	rsbvss	r6, r3, #1998848	; 0x1e8000
    */
}

/**
 * Symbol: TADSPEndpointChunk::OpenADSPSocket(void)
 * Address: 00024160
 */
TADSPEndpointChunk::OpenADSPSocket(void) {
    /*
         24160:	e1a0c00d 	mov	ip, sp
         24164:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         24168:	e24cb004 	sub	fp, ip, #4	; 0x4
         2416c:	e1a04000 	mov	r4, r0
         24170:	e24dd03c 	sub	sp, sp, #60	; 0x3c
         24174:	e28d0018 	add	r0, sp, #24	; 0x18
         24178:	eb6f002e 	bl	1be4238 <TAEvent::$__ct(void)>
         2417c:	e59f60a8 	ldr	r6, [pc, #a8]	; 2422c <TADSPEndpointChunk::OpenADSPSocket(void)+0xcc>
         24180:	e3a05000 	mov	r5, #0	; 0x0
         24184:	e58d5024 	str	r5, [sp, #36]
         24188:	e58d6018 	str	r6, [sp, #24]
         2418c:	e58d5020 	str	r5, [sp, #32]	; fField32
         24190:	e59f0098 	ldr	r0, [pc, #98]	; 24230 <TADSPEndpointChunk::OpenADSPSocket(void)+0xd0>
         24194:	e58d001c 	str	r0, [sp, #28]
         24198:	e3a00c07 	mov	r0, #1792	; 0x700
         2419c:	e58d0028 	str	r0, [sp, #40]
         241a0:	e1a0000d 	mov	r0, sp
         241a4:	eb6f0023 	bl	1be4238 <TAEvent::$__ct(void)>
         241a8:	e58d500c 	str	r5, [sp, #12]	; fField12
         241ac:	e40d6004 	str	r6, [sp], -#4	; fField4
         241b0:	e58d500c 	str	r5, [sp, #12]	; fField12
         241b4:	e5cd5030 	strb	r5, [sp, #48]
         241b8:	e5cd5031 	strb	r5, [sp, #49]
         241bc:	e59f0070 	ldr	r0, [pc, #70]	; 24234 <TADSPEndpointChunk::OpenADSPSocket(void)+0xd4>
         241c0:	e284c008 	add	ip, r4, #8	; 0x8
         241c4:	e58d0034 	str	r0, [sp, #52]
         241c8:	e58d5038 	str	r5, [sp, #56]
         241cc:	e28d0004 	add	r0, sp, #4	; 0x4
         241d0:	e3a01018 	mov	r1, #24	; 0x18
         241d4:	e3a02000 	mov	r2, #0	; 0x0
         241d8:	e3a0e000 	mov	lr, #0	; 0x0
         241dc:	e3a03000 	mov	r3, #0	; 0x0
         241e0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         241e4:	e1a03005 	mov	r3, r5
         241e8:	e1a0100e 	mov	r1, lr
         241ec:	e3a00024 	mov	r0, #36	; 0x24
         241f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         241f4:	e28d303c 	add	r3, sp, #60	; 0x3c
         241f8:	e92d0008 	stmdb	sp!, {r3}
         241fc:	e08d3000 	add	r3, sp, r0
         24200:	e1a0000c 	mov	r0, ip
         24204:	e3a02002 	mov	r2, #2	; 0x2
         24208:	e3a01001 	mov	r1, #1	; 0x1
         2420c:	eb6edace 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         24210:	e28dd024 	add	sp, sp, #36	; 0x24
         24214:	e3300000 	teq	r0, #0	; 0x0
         24218:	059d000c 	ldreq	r0, [sp, #12]	; fField12
         2421c:	e3300000 	teq	r0, #0	; 0x0
         24220:	05dd1018 	ldreqb	r1, [sp, #24]
         24224:	05c410a4 	streqb	r1, [r4, #164]	; fField164
         24228:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         2422c:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         24230:	64647020 	strvsbt	r7, [r4], -#32	; fField32
         24234:	61647370 	cmnvs	r4, r0, ror r3
    */
}

/**
 * Symbol: TADSPEndpointChunk::CloseADSPSocket(void)
 * Address: 00024238
 */
TADSPEndpointChunk::CloseADSPSocket(void) {
    /*
         24238:	e1a0c00d 	mov	ip, sp
         2423c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         24240:	e24cb004 	sub	fp, ip, #4	; 0x4
         24244:	e1a04000 	mov	r4, r0
         24248:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         2424c:	e28d0014 	add	r0, sp, #20	; 0x14
         24250:	eb6efff8 	bl	1be4238 <TAEvent::$__ct(void)>
         24254:	e59f6098 	ldr	r6, [pc, #98]	; 242f4 <TADSPEndpointChunk::CloseADSPSocket(void)+0xbc>
         24258:	e3a05000 	mov	r5, #0	; 0x0
         2425c:	e58d5020 	str	r5, [sp, #32]	; fField32
         24260:	e58d6014 	str	r6, [sp, #20]
         24264:	e58d501c 	str	r5, [sp, #28]
         24268:	e59f0088 	ldr	r0, [pc, #88]	; 242f8 <TADSPEndpointChunk::CloseADSPSocket(void)+0xc0>
         2426c:	e58d0018 	str	r0, [sp, #24]
         24270:	e3a00001 	mov	r0, #1	; 0x1
         24274:	e2800c07 	add	r0, r0, #1792	; 0x700
         24278:	e58d0024 	str	r0, [sp, #36]
         2427c:	e1a0000d 	mov	r0, sp
         24280:	eb6effec 	bl	1be4238 <TAEvent::$__ct(void)>
         24284:	e58d500c 	str	r5, [sp, #12]	; fField12
         24288:	e40d6004 	str	r6, [sp], -#4	; fField4
         2428c:	e58d500c 	str	r5, [sp, #12]	; fField12
         24290:	e5d400a4 	ldrb	r0, [r4, #164]	; fField164
         24294:	e5cd002c 	strb	r0, [sp, #44]
         24298:	e284c008 	add	ip, r4, #8	; 0x8
         2429c:	e28d0004 	add	r0, sp, #4	; 0x4
         242a0:	e3a01014 	mov	r1, #20	; 0x14
         242a4:	e3a02000 	mov	r2, #0	; 0x0
         242a8:	e3a0e000 	mov	lr, #0	; 0x0
         242ac:	e3a03000 	mov	r3, #0	; 0x0
         242b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         242b4:	e1a03005 	mov	r3, r5
         242b8:	e1a0100e 	mov	r1, lr
         242bc:	e3a00018 	mov	r0, #24	; 0x18
         242c0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         242c4:	e28d3038 	add	r3, sp, #56	; 0x38
         242c8:	e92d0008 	stmdb	sp!, {r3}
         242cc:	e28d3024 	add	r3, sp, #36	; 0x24
         242d0:	e1a0000c 	mov	r0, ip
         242d4:	e3a02002 	mov	r2, #2	; 0x2
         242d8:	e3a01001 	mov	r1, #1	; 0x1
         242dc:	eb6eda9a 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         242e0:	e28dd024 	add	sp, sp, #36	; 0x24
         242e4:	e3300000 	teq	r0, #0	; 0x0
         242e8:	059d000c 	ldreq	r0, [sp, #12]	; fField12
         242ec:	e5c450a4 	strb	r5, [r4, #164]	; fField164
         242f0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         242f4:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         242f8:	64647020 	strvsbt	r7, [r4], -#32	; fField32
    */
}

/**
 * Symbol: TADSPEndpointChunk::RegisterNBPName(unsigned short *)
 * Address: 000242fc
 */
TADSPEndpointChunk::RegisterNBPName(unsigned short *) {
    /*
         242fc:	e1a0c00d 	mov	ip, sp
         24300:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         24304:	e24cb004 	sub	fp, ip, #4	; 0x4
         24308:	e1a04000 	mov	r4, r0
         2430c:	e1a05001 	mov	r5, r1
         24310:	eb697fd1 	bl	1a8425c <TADSPEndpointChunk::$OpenADSPSocket(void)>
         24314:	e1b06000 	movs	r6, r0
         24318:	1a000016 	bne	24378 <TADSPEndpointChunk::RegisterNBPName(unsigned short *)+0x7c>
         2431c:	e2840018 	add	r0, r4, #24	; 0x18
         24320:	e5d410a4 	ldrb	r1, [r4, #164]	; fField164
         24324:	e5c01001 	strb	r1, [r0, #1]
         24328:	e1a00005 	mov	r0, r5
         2432c:	eb6f290b 	bl	1bee760 <$Ustrlen>
         24330:	e3a01002 	mov	r1, #2	; 0x2
         24334:	e0810080 	add	r0, r1, r0, lsl #1
         24338:	eb6eca0a 	bl	1bd6b68 <$malloc>
         2433c:	e58400a8 	str	r0, [r4, #168]	; fField168
         24340:	e3300000 	teq	r0, #0	; 0x0
         24344:	1a000002 	bne	24354 <TADSPEndpointChunk::RegisterNBPName(unsigned short *)+0x58>
         24348:	eb6ef774 	bl	1be2120 <$MemError>
         2434c:	e1a06000 	mov	r6, r0
         24350:	ea000008 	b	24378 <TADSPEndpointChunk::RegisterNBPName(unsigned short *)+0x7c>
         24354:	e1a01005 	mov	r1, r5
         24358:	eb6f28ff 	bl	1bee75c <$Ustrcpy>
         2435c:	e24dd004 	sub	sp, sp, #4	; 0x4
         24360:	e59420a8 	ldr	r2, [r4, #168]	; fField168
         24364:	e5d410a4 	ldrb	r1, [r4, #164]	; fField164
         24368:	e1a0000d 	mov	r0, sp
         2436c:	eb6983d4 	bl	1a852c4 <TRegisterName::$RegisterName(unsigned char, unsigned short *)>
         24370:	e1a06000 	mov	r6, r0
         24374:	e28dd004 	add	sp, sp, #4	; 0x4
         24378:	e3360000 	teq	r6, #0	; 0x0
         2437c:	0a000003 	beq	24390 <TADSPEndpointChunk::RegisterNBPName(unsigned short *)+0x94>
         24380:	e59400a8 	ldr	r0, [r4, #168]	; fField168
         24384:	eb6eb973 	bl	1bd2958 <$free>
         24388:	e3a00000 	mov	r0, #0	; 0x0
         2438c:	e5a400a8 	str	r0, [r4, #168]!	; fField168
         24390:	e1a00006 	mov	r0, r6
         24394:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::DeRegisterNBPName(void)
 * Address: 00024398
 */
TADSPEndpointChunk::DeRegisterNBPName(void) {
    /*
         24398:	e1a0c00d 	mov	ip, sp
         2439c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         243a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         243a4:	e1a04000 	mov	r4, r0
         243a8:	e3a05000 	mov	r5, #0	; 0x0
         243ac:	e59010a8 	ldr	r1, [r0, #168]	; fField168
         243b0:	e3310000 	teq	r1, #0	; 0x0
         243b4:	0a000008 	beq	243dc <TADSPEndpointChunk::DeRegisterNBPName(void)+0x44>
         243b8:	e24dd004 	sub	sp, sp, #4	; 0x4
         243bc:	e1a0000d 	mov	r0, sp
         243c0:	eb6987d6 	bl	1a86320 <TRegisterName::$UnRegisterName(unsigned short *)>
         243c4:	e1a05000 	mov	r5, r0
         243c8:	e59400a8 	ldr	r0, [r4, #168]	; fField168
         243cc:	eb6eb961 	bl	1bd2958 <$free>
         243d0:	e3a00000 	mov	r0, #0	; 0x0
         243d4:	e58400a8 	str	r0, [r4, #168]	; fField168
         243d8:	e28dd004 	add	sp, sp, #4	; 0x4
         243dc:	e5d400a4 	ldrb	r0, [r4, #164]	; fField164
         243e0:	e3300000 	teq	r0, #0	; 0x0
         243e4:	11a00004 	movne	r0, r4
         243e8:	1b697749 	blne	1a82114 <TADSPEndpointChunk::$CloseADSPSocket(void)>
         243ec:	e1a00005 	mov	r0, r5
         243f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::ProduceData(void)
 * Address: 0002446c
 */
TADSPEndpointChunk::ProduceData(void) {
    /*
         2446c:	e1a0c00d 	mov	ip, sp
         24470:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         24474:	e24cb004 	sub	fp, ip, #4	; 0x4
         24478:	e1a04000 	mov	r4, r0
         2447c:	e3a00000 	mov	r0, #0	; 0x0
         24480:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         24484:	e5940088 	ldr	r0, [r4, #136]	; fField136
         24488:	e3300000 	teq	r0, #0	; 0x0
         2448c:	1a00000e 	bne	244cc <TADSPEndpointChunk::ProduceData(void)+0x60>
         24490:	e2840070 	add	r0, r4, #112	; 0x70
         24494:	e1a05000 	mov	r5, r0
         24498:	e5900000 	ldr	r0, [r0]
         2449c:	e3300000 	teq	r0, #0	; 0x0
         244a0:	0a000047 	beq	245c4 <TADSPEndpointChunk::ProduceData(void)+0x158>
         244a4:	e1a00005 	mov	r0, r5
         244a8:	e3a01000 	mov	r1, #0	; 0x0
         244ac:	eb6f07a4 	bl	1be6344 <CList::$At(long)>
         244b0:	e5840088 	str	r0, [r4, #136]	; fField136
         244b4:	e1a00005 	mov	r0, r5
         244b8:	e3a02001 	mov	r2, #1	; 0x1
         244bc:	e3a01000 	mov	r1, #0	; 0x0
         244c0:	eb6f205b 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         244c4:	e3300000 	teq	r0, #0	; 0x0
         244c8:	1a00003d 	bne	245c4 <TADSPEndpointChunk::ProduceData(void)+0x158>
         244cc:	e5940088 	ldr	r0, [r4, #136]	; fField136
         244d0:	e3300000 	teq	r0, #0	; 0x0
         244d4:	0a00003a 	beq	245c4 <TADSPEndpointChunk::ProduceData(void)+0x158>
         244d8:	e2840f76 	add	r0, r4, #472	; 0x1d8
         244dc:	e1a05000 	mov	r5, r0
         244e0:	e5b0100c 	ldr	r1, [r0, #12]!	; fField12
         244e4:	e1a0e00f 	mov	lr, pc
         244e8:	e281f040 	add	pc, r1, #64	; 0x40
         244ec:	e3500000 	cmp	r0, #0	; 0x0
         244f0:	da000033 	ble	245c4 <TADSPEndpointChunk::ProduceData(void)+0x158>
         244f4:	e24dd004 	sub	sp, sp, #4	; 0x4
         244f8:	e5940088 	ldr	r0, [r4, #136]	; fField136
         244fc:	e590103c 	ldr	r1, [r0, #60]	; fField60
         24500:	e5900040 	ldr	r0, [r0, #64]
         24504:	e0410000 	sub	r0, r1, r0
         24508:	e58d0000 	str	r0, [sp]
         2450c:	e5940088 	ldr	r0, [r4, #136]	; fField136
         24510:	e5901048 	ldr	r1, [r0, #72]
         24514:	e5900040 	ldr	r0, [r0, #64]
         24518:	e0811000 	add	r1, r1, r0
         2451c:	e1a00005 	mov	r0, r5
         24520:	e28d3004 	add	r3, sp, #4	; 0x4
         24524:	e1a0200d 	mov	r2, sp
         24528:	eb697b1b 	bl	1a8319c <TADSPRecvBuffer::$Getn(void *, long *, int *)>
         2452c:	e3300000 	teq	r0, #0	; 0x0
         24530:	128dd004 	addne	sp, sp, #4	; 0x4
         24534:	1a000022 	bne	245c4 <TADSPEndpointChunk::ProduceData(void)+0x158>
         24538:	e5940088 	ldr	r0, [r4, #136]	; fField136
         2453c:	e5b02040 	ldr	r2, [r0, #64]!
         24540:	e59d1000 	ldr	r1, [sp]
         24544:	e0821001 	add	r1, r2, r1
         24548:	e5801000 	str	r1, [r0]
         2454c:	e5940088 	ldr	r0, [r4, #136]	; fField136
         24550:	e5901038 	ldr	r1, [r0, #56]
         24554:	e2115002 	ands	r5, r1, #2	; 0x2
         24558:	13a05001 	movne	r5, #1	; 0x1
         2455c:	e3350000 	teq	r5, #0	; 0x0
         24560:	159d1004 	ldrne	r1, [sp, #4]	; fField4
         24564:	13310000 	teqne	r1, #0	; 0x0
         24568:	e5b01038 	ldr	r1, [r0, #56]!
         2456c:	03811001 	orreq	r1, r1, #1	; 0x1
         24570:	13c11001 	bicne	r1, r1, #1	; 0x1
         24574:	e5801000 	str	r1, [r0]
         24578:	e5940088 	ldr	r0, [r4, #136]	; fField136
         2457c:	e1a01000 	mov	r1, r0
         24580:	e5902040 	ldr	r2, [r0, #64]
         24584:	e5900044 	ldr	r0, [r0, #68]
         24588:	e1520000 	cmp	r2, r0
         2458c:	2a000003 	bcs	245a0 <TADSPEndpointChunk::ProduceData(void)+0x134>
         24590:	e3350000 	teq	r5, #0	; 0x0
         24594:	159d0004 	ldrne	r0, [sp, #4]	; fField4
         24598:	13300000 	teqne	r0, #0	; 0x0
         2459c:	0a000002 	beq	245ac <TADSPEndpointChunk::ProduceData(void)+0x140>
         245a0:	e1a00004 	mov	r0, r4
         245a4:	e3a02000 	mov	r2, #0	; 0x0
         245a8:	eb69833e 	bl	1a852a8 <TADSPEndpointChunk::$RecvComplete(TADSPRecvRequest *, long)>
         245ac:	e28dd004 	add	sp, sp, #4	; 0x4
         245b0:	e3350000 	teq	r5, #0	; 0x0
         245b4:	159d0000 	ldrne	r0, [sp]
         245b8:	13300000 	teqne	r0, #0	; 0x0
         245bc:	13a00001 	movne	r0, #1	; 0x1
         245c0:	1a000000 	bne	245c8 <TADSPEndpointChunk::ProduceData(void)+0x15c>
         245c4:	e3a00000 	mov	r0, #0	; 0x0
         245c8:	e20000ff 	and	r0, r0, #255	; 0xff
         245cc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::ConsumeData(void)
 * Address: 000245d0
 */
TADSPEndpointChunk::ConsumeData(void) {
    /*
         245d0:	e1a0c00d 	mov	ip, sp
         245d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         245d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         245dc:	e1a04000 	mov	r4, r0
         245e0:	e5900054 	ldr	r0, [r0, #84]	; fField84
         245e4:	e3300000 	teq	r0, #0	; 0x0
         245e8:	1a00000e 	bne	24628 <TADSPEndpointChunk::ConsumeData(void)+0x58>
         245ec:	e284003c 	add	r0, r4, #60	; 0x3c
         245f0:	e1a05000 	mov	r5, r0
         245f4:	e5900000 	ldr	r0, [r0]
         245f8:	e3300000 	teq	r0, #0	; 0x0
         245fc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         24600:	e1a00005 	mov	r0, r5
         24604:	e3a01000 	mov	r1, #0	; 0x0
         24608:	eb6f074d 	bl	1be6344 <CList::$At(long)>
         2460c:	e5840054 	str	r0, [r4, #84]	; fField84
         24610:	e1a00005 	mov	r0, r5
         24614:	e3a02001 	mov	r2, #1	; 0x1
         24618:	e3a01000 	mov	r1, #0	; 0x0
         2461c:	eb6f2004 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         24620:	e3300000 	teq	r0, #0	; 0x0
         24624:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         24628:	e5940054 	ldr	r0, [r4, #84]	; fField84
         2462c:	e3300000 	teq	r0, #0	; 0x0
         24630:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         24634:	e2840f5e 	add	r0, r4, #376	; 0x178
         24638:	e1a05000 	mov	r5, r0
         2463c:	e5b0100c 	ldr	r1, [r0, #12]!	; fField12
         24640:	e1a0e00f 	mov	lr, pc
         24644:	e281f03c 	add	pc, r1, #60	; 0x3c
         24648:	e3500000 	cmp	r0, #0	; 0x0
         2464c:	d91ba830 	ldmledb	fp, {r4, r5, fp, sp, pc}
         24650:	e3a03000 	mov	r3, #0	; 0x0
         24654:	e5940054 	ldr	r0, [r4, #84]	; fField84
         24658:	e5901034 	ldr	r1, [r0, #52]
         2465c:	e3110002 	tst	r1, #2	; 0x2
         24660:	0a000002 	beq	24670 <TADSPEndpointChunk::ConsumeData(void)+0xa0>
         24664:	e3110001 	tst	r1, #1	; 0x1
         24668:	03a03001 	moveq	r3, #1	; 0x1
         2466c:	13a03000 	movne	r3, #0	; 0x0
         24670:	e24dd004 	sub	sp, sp, #4	; 0x4
         24674:	e5901038 	ldr	r1, [r0, #56]
         24678:	e590003c 	ldr	r0, [r0, #60]	; fField60
         2467c:	e0410000 	sub	r0, r1, r0
         24680:	e58d0000 	str	r0, [sp]
         24684:	e5940054 	ldr	r0, [r4, #84]	; fField84
         24688:	e280103c 	add	r1, r0, #60	; 0x3c
         2468c:	e8910003 	ldmia	r1, {r0, r1}
         24690:	e0811000 	add	r1, r1, r0
         24694:	e1a00005 	mov	r0, r5
         24698:	e1a0200d 	mov	r2, sp
         2469c:	eb6982fc 	bl	1a85294 <TADSPSendBuffer::$Putn(void const *, long *, int)>
         246a0:	e3300000 	teq	r0, #0	; 0x0
         246a4:	1a00000c 	bne	246dc <TADSPEndpointChunk::ConsumeData(void)+0x10c>
         246a8:	e5940054 	ldr	r0, [r4, #84]	; fField84
         246ac:	e5b0103c 	ldr	r1, [r0, #60]!	; fField60
         246b0:	e59d2000 	ldr	r2, [sp]
         246b4:	e0811002 	add	r1, r1, r2
         246b8:	e5801000 	str	r1, [r0]
         246bc:	e5940054 	ldr	r0, [r4, #84]	; fField84
         246c0:	e1a01000 	mov	r1, r0
         246c4:	e2802038 	add	r2, r0, #56	; 0x38
         246c8:	e8920005 	ldmia	r2, {r0, r2}
         246cc:	e1320000 	teq	r2, r0
         246d0:	01a00004 	moveq	r0, r4
         246d4:	03a02000 	moveq	r2, #0	; 0x0
         246d8:	0b698301 	bleq	1a852e4 <TADSPEndpointChunk::$SendComplete(TADSPSendRequest *, long)>
         246dc:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::Send(TADSPSendRequest *, unsigned long)
 * Address: 000246e0
 */
TADSPEndpointChunk::Send(TADSPSendRequest *, unsigned long) {
    /*
         246e0:	e1a0c00d 	mov	ip, sp
         246e4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         246e8:	e24cb004 	sub	fp, ip, #4	; 0x4
         246ec:	e1a04000 	mov	r4, r0
         246f0:	e1a05001 	mov	r5, r1
         246f4:	e1a06002 	mov	r6, r2
         246f8:	e1a02001 	mov	r2, r1
         246fc:	e5b0103c 	ldr	r1, [r0, #60]!	; fField60
         24700:	eb6f1379 	bl	1be94ec <CList::$InsertAt(long, void *)>
         24704:	e3300000 	teq	r0, #0	; 0x0
         24708:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         2470c:	e1a00004 	mov	r0, r4
         24710:	eb697687 	bl	1a82134 <TADSPEndpointChunk::$ConsumeData(void)>
         24714:	e1a00004 	mov	r0, r4
         24718:	eb698706 	bl	1a86338 <TADSPEndpointChunk::$UpdateStack(void)>
         2471c:	e3300000 	teq	r0, #0	; 0x0
         24720:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         24724:	e595103c 	ldr	r1, [r5, #60]	; fField60
         24728:	e5952038 	ldr	r2, [r5, #56]
         2472c:	e1510002 	cmp	r1, r2
         24730:	291ba870 	ldmcsdb	fp, {r4, r5, r6, fp, sp, pc}
         24734:	e5d50045 	ldrb	r0, [r5, #69]
         24738:	e3300000 	teq	r0, #0	; 0x0
         2473c:	0a00000e 	beq	2477c <TADSPEndpointChunk::Send(TADSPSendRequest *, unsigned long)+0x9c>
         24740:	e3a00001 	mov	r0, #1	; 0x1
         24744:	e5c400b5 	strb	r0, [r4, #181]	; fField181
         24748:	e1a01006 	mov	r1, r6
         2474c:	e5940004 	ldr	r0, [r4, #4]	; fField4
         24750:	eb678b1c 	bl	1a073c8 <TEndpointEventHandler::$Block(unsigned long)>
         24754:	e3a01000 	mov	r1, #0	; 0x0
         24758:	e5c410b5 	strb	r1, [r4, #181]	; fField181
         2475c:	e5d420bb 	ldrb	r2, [r4, #187]	; fField187
         24760:	e3320000 	teq	r2, #0	; 0x0
         24764:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         24768:	e3300000 	teq	r0, #0	; 0x0
         2476c:	05c410bb 	streqb	r1, [r4, #187]	; fField187
         24770:	03e000b2 	mvneq	r0, #178	; 0xb2
         24774:	02400b23 	subeq	r0, r0, #35840	; 0x8c00
         24778:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         2477c:	e1a02005 	mov	r2, r5
         24780:	e1a01006 	mov	r1, r6
         24784:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         24788:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         2478c:	ea678b0a 	b	1a073bc <TEndpointEventHandler::$AddTimer(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TADSPEndpointChunk::Recv(TADSPRecvRequest *, unsigned long)
 * Address: 00024790
 */
TADSPEndpointChunk::Recv(TADSPRecvRequest *, unsigned long) {
    /*
         24790:	e1a0c00d 	mov	ip, sp
         24794:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         24798:	e24cb004 	sub	fp, ip, #4	; 0x4
         2479c:	e1a04000 	mov	r4, r0
         247a0:	e1a05001 	mov	r5, r1
         247a4:	e1a06002 	mov	r6, r2
         247a8:	e1a02001 	mov	r2, r1
         247ac:	e5b01070 	ldr	r1, [r0, #112]!	; fField112
         247b0:	eb6f134d 	bl	1be94ec <CList::$InsertAt(long, void *)>
         247b4:	e3300000 	teq	r0, #0	; 0x0
         247b8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         247bc:	e1a00004 	mov	r0, r4
         247c0:	eb6982b1 	bl	1a8528c <TADSPEndpointChunk::$ProduceData(void)>
         247c4:	e1a07000 	mov	r7, r0
         247c8:	e1a00004 	mov	r0, r4
         247cc:	eb6986d9 	bl	1a86338 <TADSPEndpointChunk::$UpdateStack(void)>
         247d0:	e3300000 	teq	r0, #0	; 0x0
         247d4:	03370000 	teqeq	r7, #0	; 0x0
         247d8:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         247dc:	e5951044 	ldr	r1, [r5, #68]
         247e0:	e5952040 	ldr	r2, [r5, #64]
         247e4:	e1520001 	cmp	r2, r1
         247e8:	291ba8f0 	ldmcsdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         247ec:	e5d5004d 	ldrb	r0, [r5, #77]
         247f0:	e3300000 	teq	r0, #0	; 0x0
         247f4:	0a00000e 	beq	24834 <TADSPEndpointChunk::Recv(TADSPRecvRequest *, unsigned long)+0xa4>
         247f8:	e3a00001 	mov	r0, #1	; 0x1
         247fc:	e5c400b6 	strb	r0, [r4, #182]	; fField182
         24800:	e1a01006 	mov	r1, r6
         24804:	e5940004 	ldr	r0, [r4, #4]	; fField4
         24808:	eb678aee 	bl	1a073c8 <TEndpointEventHandler::$Block(unsigned long)>
         2480c:	e3a01000 	mov	r1, #0	; 0x0
         24810:	e5c410b6 	strb	r1, [r4, #182]	; fField182
         24814:	e5d420bb 	ldrb	r2, [r4, #187]	; fField187
         24818:	e3320000 	teq	r2, #0	; 0x0
         2481c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         24820:	e3300000 	teq	r0, #0	; 0x0
         24824:	05c410bb 	streqb	r1, [r4, #187]	; fField187
         24828:	03e000b2 	mvneq	r0, #178	; 0xb2
         2482c:	02400b23 	subeq	r0, r0, #35840	; 0x8c00
         24830:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         24834:	e1a02005 	mov	r2, r5
         24838:	e1a01006 	mov	r1, r6
         2483c:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         24840:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         24844:	ea678adc 	b	1a073bc <TEndpointEventHandler::$AddTimer(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TADSPEndpointChunk::RecvComplete(TADSPRecvRequest *, long)
 * Address: 00024848
 */
TADSPEndpointChunk::RecvComplete(TADSPRecvRequest *, long) {
    /*
         24848:	e1a0c00d 	mov	ip, sp
         2484c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         24850:	e24cb004 	sub	fp, ip, #4	; 0x4
         24854:	e1a05000 	mov	r5, r0
         24858:	e1a04001 	mov	r4, r1
         2485c:	e3a07000 	mov	r7, #0	; 0x0
         24860:	e581200c 	str	r2, [r1, #12]	; fField12
         24864:	e5913028 	ldr	r3, [r1, #40]
         24868:	e3330000 	teq	r3, #0	; 0x0
         2486c:	0a00000f 	beq	248b0 <TADSPEndpointChunk::RecvComplete(TADSPRecvRequest *, long)+0x68>
         24870:	e284103c 	add	r1, r4, #60	; 0x3c
         24874:	e8910003 	ldmia	r1, {r0, r1}
         24878:	e1510000 	cmp	r1, r0
         2487c:	2a000005 	bcs	24898 <TADSPEndpointChunk::RecvComplete(TADSPRecvRequest *, long)+0x50>
         24880:	e0401001 	sub	r1, r0, r1
         24884:	e1a00003 	mov	r0, r3
         24888:	e3a02001 	mov	r2, #1	; 0x1
         2488c:	e5933000 	ldr	r3, [r3]
         24890:	e1a0e00f 	mov	lr, pc
         24894:	e283f034 	add	pc, r3, #52	; 0x34
         24898:	e3e02000 	mvn	r2, #0	; 0x0
         2489c:	e3a01000 	mov	r1, #0	; 0x0
         248a0:	e5940028 	ldr	r0, [r4, #40]
         248a4:	e5903000 	ldr	r3, [r0]
         248a8:	e1a0e00f 	mov	lr, pc
         248ac:	e283f038 	add	pc, r3, #56	; 0x38
         248b0:	e3a06000 	mov	r6, #0	; 0x0
         248b4:	e5950088 	ldr	r0, [r5, #136]	; fField136
         248b8:	e1300004 	teq	r0, r4
         248bc:	05856088 	streq	r6, [r5, #136]	; fField136
         248c0:	e5d4004d 	ldrb	r0, [r4, #77]
         248c4:	e3300000 	teq	r0, #0	; 0x0
         248c8:	01a01004 	moveq	r1, r4
         248cc:	05950004 	ldreq	r0, [r5, #4]	; fField4
         248d0:	0b678ed1 	bleq	1a0841c <TEndpointEventHandler::$KillTimer(unsigned long)>
         248d4:	e5d4004c 	ldrb	r0, [r4, #76]
         248d8:	e2851058 	add	r1, r5, #88	; 0x58
         248dc:	e3300000 	teq	r0, #0	; 0x0
         248e0:	0a000031 	beq	249ac <TADSPEndpointChunk::RecvComplete(TADSPRecvRequest *, long)+0x164>
         248e4:	e24dd040 	sub	sp, sp, #64	; 0x40
         248e8:	e3a00034 	mov	r0, #52	; 0x34
         248ec:	e58d003c 	str	r0, [sp, #60]	; fField60
         248f0:	e2840004 	add	r0, r4, #4	; 0x4
         248f4:	e28d2008 	add	r2, sp, #8	; 0x8
         248f8:	e1a0e000 	mov	lr, r0
         248fc:	e8be1008 	ldmia	lr!, {r3, ip}
         24900:	e8a21008 	stmia	r2!, {r3, ip}
         24904:	e8be1008 	ldmia	lr!, {r3, ip}
         24908:	e8a21008 	stmia	r2!, {r3, ip}
         2490c:	e89e1008 	ldmia	lr, {r3, ip}
         24910:	e8821008 	stmia	r2, {r3, ip}
         24914:	e28d2020 	add	r2, sp, #32	; 0x20
         24918:	e2808018 	add	r8, r0, #24	; 0x18
         2491c:	e8985000 	ldmia	r8, {ip, lr}
         24920:	e8825000 	stmia	r2, {ip, lr}
         24924:	e28d3028 	add	r3, sp, #40	; 0x28
         24928:	e280e020 	add	lr, r0, #32	; 0x20
         2492c:	e1a00003 	mov	r0, r3
         24930:	e8be1008 	ldmia	lr!, {r3, ip}
         24934:	e8a01008 	stmia	r0!, {r3, ip}
         24938:	e89e5008 	ldmia	lr, {r3, ip, lr}
         2493c:	e8805008 	stmia	r0, {r3, ip, lr}
         24940:	e58d601c 	str	r6, [sp, #28]
         24944:	e58d6004 	str	r6, [sp, #4]	; fField4
         24948:	e58d6000 	str	r6, [sp]
         2494c:	e89d1008 	ldmia	sp, {r3, ip}
         24950:	e8821008 	stmia	r2, {r3, ip}
         24954:	e5950010 	ldr	r0, [r5, #16]	; fField16
         24958:	e58d0014 	str	r0, [sp, #20]
         2495c:	e3e00000 	mvn	r0, #0	; 0x0
         24960:	e58d0018 	str	r0, [sp, #24]
         24964:	e5940040 	ldr	r0, [r4, #64]
         24968:	e58d0030 	str	r0, [sp, #48]
         2496c:	e5940038 	ldr	r0, [r4, #56]
         24970:	e58d0034 	str	r0, [sp, #52]
         24974:	e1a00001 	mov	r0, r1
         24978:	e1a02004 	mov	r2, r4
         2497c:	e5911000 	ldr	r1, [r1]
         24980:	eb6f12d9 	bl	1be94ec <CList::$InsertAt(long, void *)>
         24984:	e28d3008 	add	r3, sp, #8	; 0x8
         24988:	e28d203c 	add	r2, sp, #60	; 0x3c
         2498c:	e5b5c010 	ldr	ip, [r5, #16]!	; fField16
         24990:	e1a0000c 	mov	r0, ip
         24994:	e3a01000 	mov	r1, #0	; 0x0
         24998:	e59cc000 	ldr	ip, [ip]
         2499c:	e1a0e00f 	mov	lr, pc
         249a0:	e28cf008 	add	pc, ip, #8	; 0x8
         249a4:	e28dd040 	add	sp, sp, #64	; 0x40
         249a8:	ea00000e 	b	249e8 <TADSPEndpointChunk::RecvComplete(TADSPRecvRequest *, long)+0x1a0>
         249ac:	e5d4004d 	ldrb	r0, [r4, #77]
         249b0:	e3300000 	teq	r0, #0	; 0x0
         249b4:	0a000007 	beq	249d8 <TADSPEndpointChunk::RecvComplete(TADSPRecvRequest *, long)+0x190>
         249b8:	e5d520b6 	ldrb	r2, [r5, #182]	; fField182
         249bc:	e3320000 	teq	r2, #0	; 0x0
         249c0:	0a000002 	beq	249d0 <TADSPEndpointChunk::RecvComplete(TADSPRecvRequest *, long)+0x188>
         249c4:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
         249c8:	eb678e9f 	bl	1a0844c <TEndpointEventHandler::$Unblock(void)>
         249cc:	ea000005 	b	249e8 <TADSPEndpointChunk::RecvComplete(TADSPRecvRequest *, long)+0x1a0>
         249d0:	e3300000 	teq	r0, #0	; 0x0
         249d4:	1a000003 	bne	249e8 <TADSPEndpointChunk::RecvComplete(TADSPRecvRequest *, long)+0x1a0>
         249d8:	e1a00001 	mov	r0, r1
         249dc:	e1a02004 	mov	r2, r4
         249e0:	e5911000 	ldr	r1, [r1]
         249e4:	eb6f12c0 	bl	1be94ec <CList::$InsertAt(long, void *)>
         249e8:	e1a00007 	mov	r0, r7
         249ec:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::SendComplete(TADSPSendRequest *, long)
 * Address: 000249f0
 */
TADSPEndpointChunk::SendComplete(TADSPSendRequest *, long) {
    /*
         249f0:	e1a0c00d 	mov	ip, sp
         249f4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         249f8:	e24cb004 	sub	fp, ip, #4	; 0x4
         249fc:	e1a05000 	mov	r5, r0
         24a00:	e1a04001 	mov	r4, r1
         24a04:	e3a07000 	mov	r7, #0	; 0x0
         24a08:	e581200c 	str	r2, [r1, #12]	; fField12
         24a0c:	e5913028 	ldr	r3, [r1, #40]
         24a10:	e3330000 	teq	r3, #0	; 0x0
         24a14:	0a000005 	beq	24a30 <TADSPEndpointChunk::SendComplete(TADSPSendRequest *, long)+0x40>
         24a18:	e1a00003 	mov	r0, r3
         24a1c:	e3e02000 	mvn	r2, #0	; 0x0
         24a20:	e594103c 	ldr	r1, [r4, #60]	; fField60
         24a24:	e5933000 	ldr	r3, [r3]
         24a28:	e1a0e00f 	mov	lr, pc
         24a2c:	e283f038 	add	pc, r3, #56	; 0x38
         24a30:	e3a06000 	mov	r6, #0	; 0x0
         24a34:	e5950054 	ldr	r0, [r5, #84]	; fField84
         24a38:	e1300004 	teq	r0, r4
         24a3c:	05856054 	streq	r6, [r5, #84]	; fField84
         24a40:	e5d40045 	ldrb	r0, [r4, #69]
         24a44:	e3300000 	teq	r0, #0	; 0x0
         24a48:	01a01004 	moveq	r1, r4
         24a4c:	05950004 	ldreq	r0, [r5, #4]	; fField4
         24a50:	0b678e71 	bleq	1a0841c <TEndpointEventHandler::$KillTimer(unsigned long)>
         24a54:	e5d40044 	ldrb	r0, [r4, #68]
         24a58:	e2851024 	add	r1, r5, #36	; 0x24
         24a5c:	e3300000 	teq	r0, #0	; 0x0
         24a60:	0a00002f 	beq	24b24 <TADSPEndpointChunk::SendComplete(TADSPSendRequest *, long)+0x134>
         24a64:	e24dd03c 	sub	sp, sp, #60	; 0x3c
         24a68:	e3a00030 	mov	r0, #48	; 0x30
         24a6c:	e58d0038 	str	r0, [sp, #56]
         24a70:	e2840004 	add	r0, r4, #4	; 0x4
         24a74:	e28d2008 	add	r2, sp, #8	; 0x8
         24a78:	e1a0e000 	mov	lr, r0
         24a7c:	e8be1008 	ldmia	lr!, {r3, ip}
         24a80:	e8a21008 	stmia	r2!, {r3, ip}
         24a84:	e8be1008 	ldmia	lr!, {r3, ip}
         24a88:	e8a21008 	stmia	r2!, {r3, ip}
         24a8c:	e89e1008 	ldmia	lr, {r3, ip}
         24a90:	e8821008 	stmia	r2, {r3, ip}
         24a94:	e28d2020 	add	r2, sp, #32	; 0x20
         24a98:	e280e018 	add	lr, r0, #24	; 0x18
         24a9c:	e89e1100 	ldmia	lr, {r8, ip}
         24aa0:	e8821100 	stmia	r2, {r8, ip}
         24aa4:	e28d3028 	add	r3, sp, #40	; 0x28
         24aa8:	e280e020 	add	lr, r0, #32	; 0x20
         24aac:	e1a00003 	mov	r0, r3
         24ab0:	e8be1008 	ldmia	lr!, {r3, ip}
         24ab4:	e8a01008 	stmia	r0!, {r3, ip}
         24ab8:	e89e1008 	ldmia	lr, {r3, ip}
         24abc:	e8801008 	stmia	r0, {r3, ip}
         24ac0:	e5950010 	ldr	r0, [r5, #16]	; fField16
         24ac4:	e58d0014 	str	r0, [sp, #20]
         24ac8:	e3e00001 	mvn	r0, #1	; 0x1
         24acc:	e58d0018 	str	r0, [sp, #24]
         24ad0:	e58d601c 	str	r6, [sp, #28]
         24ad4:	e58d6004 	str	r6, [sp, #4]	; fField4
         24ad8:	e58d6000 	str	r6, [sp]
         24adc:	e89d5000 	ldmia	sp, {ip, lr}
         24ae0:	e8825000 	stmia	r2, {ip, lr}
         24ae4:	e594003c 	ldr	r0, [r4, #60]	; fField60
         24ae8:	e58d0030 	str	r0, [sp, #48]
         24aec:	e1a00001 	mov	r0, r1
         24af0:	e1a02004 	mov	r2, r4
         24af4:	e5911000 	ldr	r1, [r1]
         24af8:	eb6f127b 	bl	1be94ec <CList::$InsertAt(long, void *)>
         24afc:	e28d3008 	add	r3, sp, #8	; 0x8
         24b00:	e28d2038 	add	r2, sp, #56	; 0x38
         24b04:	e5b5c010 	ldr	ip, [r5, #16]!	; fField16
         24b08:	e1a0000c 	mov	r0, ip
         24b0c:	e3a01000 	mov	r1, #0	; 0x0
         24b10:	e59cc000 	ldr	ip, [ip]
         24b14:	e1a0e00f 	mov	lr, pc
         24b18:	e28cf008 	add	pc, ip, #8	; 0x8
         24b1c:	e28dd03c 	add	sp, sp, #60	; 0x3c
         24b20:	ea00000e 	b	24b60 <TADSPEndpointChunk::SendComplete(TADSPSendRequest *, long)+0x170>
         24b24:	e5d40045 	ldrb	r0, [r4, #69]
         24b28:	e3300000 	teq	r0, #0	; 0x0
         24b2c:	0a000007 	beq	24b50 <TADSPEndpointChunk::SendComplete(TADSPSendRequest *, long)+0x160>
         24b30:	e5d520b5 	ldrb	r2, [r5, #181]	; fField181
         24b34:	e3320000 	teq	r2, #0	; 0x0
         24b38:	0a000002 	beq	24b48 <TADSPEndpointChunk::SendComplete(TADSPSendRequest *, long)+0x158>
         24b3c:	e5b50004 	ldr	r0, [r5, #4]!	; fField4
         24b40:	eb678e41 	bl	1a0844c <TEndpointEventHandler::$Unblock(void)>
         24b44:	ea000005 	b	24b60 <TADSPEndpointChunk::SendComplete(TADSPSendRequest *, long)+0x170>
         24b48:	e3300000 	teq	r0, #0	; 0x0
         24b4c:	1a000003 	bne	24b60 <TADSPEndpointChunk::SendComplete(TADSPSendRequest *, long)+0x170>
         24b50:	e1a00001 	mov	r0, r1
         24b54:	e1a02004 	mov	r2, r4
         24b58:	e5911000 	ldr	r1, [r1]
         24b5c:	eb6f1262 	bl	1be94ec <CList::$InsertAt(long, void *)>
         24b60:	e1a00007 	mov	r0, r7
         24b64:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::GetSendPB(void)
 * Address: 00024b68
 */
TADSPEndpointChunk::GetSendPB(void) {
    /*
         24b68:	e1a0c00d 	mov	ip, sp
         24b6c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         24b70:	e24cb004 	sub	fp, ip, #4	; 0x4
         24b74:	e2800024 	add	r0, r0, #36	; 0x24
         24b78:	e1a05000 	mov	r5, r0
         24b7c:	e5901000 	ldr	r1, [r0]
         24b80:	e3310000 	teq	r1, #0	; 0x0
         24b84:	1a000004 	bne	24b9c <TADSPEndpointChunk::GetSendPB(void)+0x34>
         24b88:	e3e01001 	mvn	r1, #1	; 0x1
         24b8c:	e3a00000 	mov	r0, #0	; 0x0
         24b90:	eb6985f3 	bl	1a86364 <TADSPSendRequest::$__ct(long)>
         24b94:	e1a04000 	mov	r4, r0
         24b98:	ea000008 	b	24bc0 <TADSPEndpointChunk::GetSendPB(void)+0x58>
         24b9c:	e1a00005 	mov	r0, r5
         24ba0:	e2411001 	sub	r1, r1, #1	; 0x1
         24ba4:	eb6f05e6 	bl	1be6344 <CList::$At(long)>
         24ba8:	e1a04000 	mov	r4, r0
         24bac:	e1a00005 	mov	r0, r5
         24bb0:	e5951000 	ldr	r1, [r5]
         24bb4:	e2411001 	sub	r1, r1, #1	; 0x1
         24bb8:	e3a02001 	mov	r2, #1	; 0x1
         24bbc:	eb6f1e9c 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         24bc0:	e1a00004 	mov	r0, r4
         24bc4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::GetRecvPB(void)
 * Address: 00024bc8
 */
TADSPEndpointChunk::GetRecvPB(void) {
    /*
         24bc8:	e1a0c00d 	mov	ip, sp
         24bcc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         24bd0:	e24cb004 	sub	fp, ip, #4	; 0x4
         24bd4:	e2800058 	add	r0, r0, #88	; 0x58
         24bd8:	e1a05000 	mov	r5, r0
         24bdc:	e5901000 	ldr	r1, [r0]
         24be0:	e3310000 	teq	r1, #0	; 0x0
         24be4:	1a000004 	bne	24bfc <TADSPEndpointChunk::GetRecvPB(void)+0x34>
         24be8:	e3e01000 	mvn	r1, #0	; 0x0
         24bec:	e3a00000 	mov	r0, #0	; 0x0
         24bf0:	eb6985da 	bl	1a86360 <TADSPRecvRequest::$__ct(long)>
         24bf4:	e1a04000 	mov	r4, r0
         24bf8:	ea000008 	b	24c20 <TADSPEndpointChunk::GetRecvPB(void)+0x58>
         24bfc:	e1a00005 	mov	r0, r5
         24c00:	e2411001 	sub	r1, r1, #1	; 0x1
         24c04:	eb6f05ce 	bl	1be6344 <CList::$At(long)>
         24c08:	e1a04000 	mov	r4, r0
         24c0c:	e1a00005 	mov	r0, r5
         24c10:	e5951000 	ldr	r1, [r5]
         24c14:	e2411001 	sub	r1, r1, #1	; 0x1
         24c18:	e3a02001 	mov	r2, #1	; 0x1
         24c1c:	eb6f1e84 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         24c20:	e1a00004 	mov	r0, r4
         24c24:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::UpdateStack(void)
 * Address: 00024c28
 */
TADSPEndpointChunk::UpdateStack(void) {
    /*
         24c28:	e1a0c00d 	mov	ip, sp
         24c2c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         24c30:	e24cb004 	sub	fp, ip, #4	; 0x4
         24c34:	e280c008 	add	ip, r0, #8	; 0x8
         24c38:	e280ef5a 	add	lr, r0, #360	; 0x168
         24c3c:	e2804e15 	add	r4, r0, #336	; 0x150
         24c40:	e3a02000 	mov	r2, #0	; 0x0
         24c44:	e3a03000 	mov	r3, #0	; 0x0
         24c48:	e3a05000 	mov	r5, #0	; 0x0
         24c4c:	e3a01000 	mov	r1, #0	; 0x0
         24c50:	e3a00001 	mov	r0, #1	; 0x1
         24c54:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         24c58:	e1a03005 	mov	r3, r5
         24c5c:	e3a02018 	mov	r2, #24	; 0x18
         24c60:	e92d000c 	stmdb	sp!, {r2, r3}
         24c64:	e1a03004 	mov	r3, r4
         24c68:	e1a0000c 	mov	r0, ip
         24c6c:	e3a02000 	mov	r2, #0	; 0x0
         24c70:	e59e1000 	ldr	r1, [lr]
         24c74:	eb6ed833 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
         24c78:	e28dd018 	add	sp, sp, #24	; 0x18
         24c7c:	e280cc27 	add	ip, r0, #9984	; 0x2700
         24c80:	e37c0021 	cmn	ip, #33	; 0x21
         24c84:	03a00000 	moveq	r0, #0	; 0x0
         24c88:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::UpdateClient(TUpdateConnection *)
 * Address: 00024c8c
 */
TADSPEndpointChunk::UpdateClient(TUpdateConnection *) {
    /*
         24c8c:	e1a0c00d 	mov	ip, sp
         24c90:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         24c94:	e24cb004 	sub	fp, ip, #4	; 0x4
         24c98:	e1a04000 	mov	r4, r0
         24c9c:	eb69817a 	bl	1a8528c <TADSPEndpointChunk::$ProduceData(void)>
         24ca0:	e1a00004 	mov	r0, r4
         24ca4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         24ca8:	ea697521 	b	1a82134 <TADSPEndpointChunk::$ConsumeData(void)>
    */
}

/**
 * Symbol: TADSPEndpointChunk::IsPending(unsigned long)
 * Address: 00024cb8
 */
TADSPEndpointChunk::IsPending(unsigned long) {
    /*
         24cb8:	e3a02000 	mov	r2, #0	; 0x0
         24cbc:	e3110001 	tst	r1, #1	; 0x1
         24cc0:	0a000008 	beq	24ce8 <TADSPEndpointChunk::IsPending(unsigned long)+0x30>
         24cc4:	e5d020b6 	ldrb	r2, [r0, #182]	; fField182
         24cc8:	e3320000 	teq	r2, #0	; 0x0
         24ccc:	05d020b5 	ldreqb	r2, [r0, #181]	; fField181
         24cd0:	03320000 	teqeq	r2, #0	; 0x0
         24cd4:	05d020b7 	ldreqb	r2, [r0, #183]	; fField183
         24cd8:	03320000 	teqeq	r2, #0	; 0x0
         24cdc:	13a02001 	movne	r2, #1	; 0x1
         24ce0:	03a02000 	moveq	r2, #0	; 0x0
         24ce4:	e20220ff 	and	r2, r2, #255	; 0xff
         24ce8:	e3110002 	tst	r1, #2	; 0x2
         24cec:	0a000009 	beq	24d18 <TADSPEndpointChunk::IsPending(unsigned long)+0x60>
         24cf0:	e3320000 	teq	r2, #0	; 0x0
         24cf4:	05d010b8 	ldreqb	r1, [r0, #184]	; fField184
         24cf8:	03310000 	teqeq	r1, #0	; 0x0
         24cfc:	0590103c 	ldreq	r1, [r0, #60]	; fField60
         24d00:	03310000 	teqeq	r1, #0	; 0x0
         24d04:	05900070 	ldreq	r0, [r0, #112]	; fField112
         24d08:	03300000 	teqeq	r0, #0	; 0x0
         24d0c:	13a00001 	movne	r0, #1	; 0x1
         24d10:	03a00000 	moveq	r0, #0	; 0x0
         24d14:	e20020ff 	and	r2, r0, #255	; 0xff
         24d18:	e1a00002 	mov	r0, r2
         24d1c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TADSPEndpointChunk::KillSend(long)
 * Address: 00024d20
 */
TADSPEndpointChunk::KillSend(long) {
    /*
         24d20:	e1a0c00d 	mov	ip, sp
         24d24:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         24d28:	e24cb004 	sub	fp, ip, #4	; 0x4
         24d2c:	e1a04000 	mov	r4, r0
         24d30:	e1a05001 	mov	r5, r1
         24d34:	e3a00000 	mov	r0, #0	; 0x0
         24d38:	e5941054 	ldr	r1, [r4, #84]	; fField84
         24d3c:	e3310000 	teq	r1, #0	; 0x0
         24d40:	0a000004 	beq	24d58 <TADSPEndpointChunk::KillSend(long)+0x38>
         24d44:	e1a02005 	mov	r2, r5
         24d48:	e1a00004 	mov	r0, r4
         24d4c:	eb698164 	bl	1a852e4 <TADSPEndpointChunk::$SendComplete(TADSPSendRequest *, long)>
         24d50:	e3300000 	teq	r0, #0	; 0x0
         24d54:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         24d58:	e284103c 	add	r1, r4, #60	; 0x3c
         24d5c:	e1a06001 	mov	r6, r1
         24d60:	e5911000 	ldr	r1, [r1]
         24d64:	e2517001 	subs	r7, r1, #1	; 0x1
         24d68:	491ba9f0 	ldmmidb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         24d6c:	e1a00006 	mov	r0, r6
         24d70:	e5961000 	ldr	r1, [r6]
         24d74:	e2411001 	sub	r1, r1, #1	; 0x1
         24d78:	eb6f0571 	bl	1be6344 <CList::$At(long)>
         24d7c:	e1a08000 	mov	r8, r0
         24d80:	e1a00006 	mov	r0, r6
         24d84:	e5961000 	ldr	r1, [r6]
         24d88:	e2411001 	sub	r1, r1, #1	; 0x1
         24d8c:	e3a02001 	mov	r2, #1	; 0x1
         24d90:	eb6f1e27 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         24d94:	e3300000 	teq	r0, #0	; 0x0
         24d98:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         24d9c:	e1a02005 	mov	r2, r5
         24da0:	e1a01008 	mov	r1, r8
         24da4:	e1a00004 	mov	r0, r4
         24da8:	eb69814d 	bl	1a852e4 <TADSPEndpointChunk::$SendComplete(TADSPSendRequest *, long)>
         24dac:	e3300000 	teq	r0, #0	; 0x0
         24db0:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         24db4:	e2577001 	subs	r7, r7, #1	; 0x1
         24db8:	5affffeb 	bpl	24d6c <TADSPEndpointChunk::KillSend(long)+0x4c>
         24dbc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::KillRecv(long)
 * Address: 00024dc0
 */
TADSPEndpointChunk::KillRecv(long) {
    /*
         24dc0:	e1a0c00d 	mov	ip, sp
         24dc4:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         24dc8:	e24cb004 	sub	fp, ip, #4	; 0x4
         24dcc:	e1a04000 	mov	r4, r0
         24dd0:	e1a05001 	mov	r5, r1
         24dd4:	e3a00000 	mov	r0, #0	; 0x0
         24dd8:	e5941088 	ldr	r1, [r4, #136]	; fField136
         24ddc:	e3310000 	teq	r1, #0	; 0x0
         24de0:	0a000004 	beq	24df8 <TADSPEndpointChunk::KillRecv(long)+0x38>
         24de4:	e1a02005 	mov	r2, r5
         24de8:	e1a00004 	mov	r0, r4
         24dec:	eb69812d 	bl	1a852a8 <TADSPEndpointChunk::$RecvComplete(TADSPRecvRequest *, long)>
         24df0:	e3300000 	teq	r0, #0	; 0x0
         24df4:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         24df8:	e2841070 	add	r1, r4, #112	; 0x70
         24dfc:	e1a06001 	mov	r6, r1
         24e00:	e5911000 	ldr	r1, [r1]
         24e04:	e2517001 	subs	r7, r1, #1	; 0x1
         24e08:	491ba9f0 	ldmmidb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         24e0c:	e1a00006 	mov	r0, r6
         24e10:	e5961000 	ldr	r1, [r6]
         24e14:	e2411001 	sub	r1, r1, #1	; 0x1
         24e18:	eb6f0549 	bl	1be6344 <CList::$At(long)>
         24e1c:	e1a08000 	mov	r8, r0
         24e20:	e1a00006 	mov	r0, r6
         24e24:	e5961000 	ldr	r1, [r6]
         24e28:	e2411001 	sub	r1, r1, #1	; 0x1
         24e2c:	e3a02001 	mov	r2, #1	; 0x1
         24e30:	eb6f1dff 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         24e34:	e3300000 	teq	r0, #0	; 0x0
         24e38:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         24e3c:	e1a02005 	mov	r2, r5
         24e40:	e1a01008 	mov	r1, r8
         24e44:	e1a00004 	mov	r0, r4
         24e48:	eb698116 	bl	1a852a8 <TADSPEndpointChunk::$RecvComplete(TADSPRecvRequest *, long)>
         24e4c:	e3300000 	teq	r0, #0	; 0x0
         24e50:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         24e54:	e2577001 	subs	r7, r7, #1	; 0x1
         24e58:	5affffeb 	bpl	24e0c <TADSPEndpointChunk::KillRecv(long)+0x4c>
         24e5c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::KillControl(long, unsigned char)
 * Address: 00024e60
 */
TADSPEndpointChunk::KillControl(long, unsigned char) {
    /*
         24e60:	e1a0c00d 	mov	ip, sp
         24e64:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         24e68:	e24cb004 	sub	fp, ip, #4	; 0x4
         24e6c:	e1a04000 	mov	r4, r0
         24e70:	e1a05001 	mov	r5, r1
         24e74:	e20210ff 	and	r1, r2, #255	; 0xff
         24e78:	e3a00000 	mov	r0, #0	; 0x0
         24e7c:	e5d420b8 	ldrb	r2, [r4, #184]	; fField184
         24e80:	e3a08001 	mov	r8, #1	; 0x1
         24e84:	e3320000 	teq	r2, #0	; 0x0
         24e88:	0a00002a 	beq	24f38 <TADSPEndpointChunk::KillControl(long, unsigned char)+0xd8>
         24e8c:	e2847d05 	add	r7, r4, #320	; 0x140
         24e90:	e3310000 	teq	r1, #0	; 0x0
         24e94:	11a00007 	movne	r0, r7
         24e98:	1b6ea62b 	blne	1bce74c <TUAsyncMessage::$Abort(void)>
         24e9c:	e24dd030 	sub	sp, sp, #48	; 0x30
         24ea0:	e28d0014 	add	r0, sp, #20	; 0x14
         24ea4:	eb6efce3 	bl	1be4238 <TAEvent::$__ct(void)>
         24ea8:	e59f9098 	ldr	r9, [pc, #98]	; 24f48 <TADSPEndpointChunk::KillControl(long, unsigned char)+0xe8>
         24eac:	e3a06000 	mov	r6, #0	; 0x0
         24eb0:	e58d6020 	str	r6, [sp, #32]	; fField32
         24eb4:	e58d9014 	str	r9, [sp, #20]
         24eb8:	e3a00002 	mov	r0, #2	; 0x2
         24ebc:	e58d0024 	str	r0, [sp, #36]
         24ec0:	e58d601c 	str	r6, [sp, #28]
         24ec4:	e1a0000d 	mov	r0, sp
         24ec8:	eb6efcda 	bl	1be4238 <TAEvent::$__ct(void)>
         24ecc:	e58d600c 	str	r6, [sp, #12]	; fField12
         24ed0:	e40d9004 	str	r9, [sp], -#4	; fField4
         24ed4:	e58d600c 	str	r6, [sp, #12]	; fField12
         24ed8:	e59f006c 	ldr	r0, [pc, #6c]	; 24f4c <TADSPEndpointChunk::KillControl(long, unsigned char)+0xec>
         24edc:	e58d001c 	str	r0, [sp, #28]
         24ee0:	e58d502c 	str	r5, [sp, #44]
         24ee4:	e5970000 	ldr	r0, [r7]
         24ee8:	e284c008 	add	ip, r4, #8	; 0x8
         24eec:	e58d0030 	str	r0, [sp, #48]
         24ef0:	e28d0004 	add	r0, sp, #4	; 0x4
         24ef4:	e3a01014 	mov	r1, #20	; 0x14
         24ef8:	e3a02000 	mov	r2, #0	; 0x0
         24efc:	e3a0e501 	mov	lr, #4194304	; 0x400000
         24f00:	e3a03000 	mov	r3, #0	; 0x0
         24f04:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         24f08:	e1a03008 	mov	r3, r8
         24f0c:	e1a0100e 	mov	r1, lr
         24f10:	e3a0001c 	mov	r0, #28	; 0x1c
         24f14:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         24f18:	e28d3038 	add	r3, sp, #56	; 0x38
         24f1c:	e92d0008 	stmdb	sp!, {r3}
         24f20:	e28d3024 	add	r3, sp, #36	; 0x24
         24f24:	e1a0000c 	mov	r0, ip
         24f28:	e3a02002 	mov	r2, #2	; 0x2
         24f2c:	e3a01001 	mov	r1, #1	; 0x1
         24f30:	eb6ed785 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         24f34:	e28dd058 	add	sp, sp, #88	; 0x58
         24f38:	e5d410bc 	ldrb	r1, [r4, #188]	; fField188
         24f3c:	e3310000 	teq	r1, #0	; 0x0
         24f40:	15c480bd 	strneb	r8, [r4, #189]	; fField189
         24f44:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         24f48:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
         24f4c:	61647370 	cmnvs	r4, r0, ror r3
    */
}

/**
 * Symbol: TADSPEndpointChunk::Abort(unsigned char, long, unsigned char)
 * Address: 00024f50
 */
TADSPEndpointChunk::Abort(unsigned char, long, unsigned char) {
    /*
         24f50:	e1a0c00d 	mov	ip, sp
         24f54:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         24f58:	e24cb004 	sub	fp, ip, #4	; 0x4
         24f5c:	e1a04000 	mov	r4, r0
         24f60:	e1a05002 	mov	r5, r2
         24f64:	e20160ff 	and	r6, r1, #255	; 0xff
         24f68:	e20370ff 	and	r7, r3, #255	; 0xff
         24f6c:	e3a00001 	mov	r0, #1	; 0x1
         24f70:	e5c400b4 	strb	r0, [r4, #180]	; fField180
         24f74:	e1a01002 	mov	r1, r2
         24f78:	e1a00004 	mov	r0, r4
         24f7c:	eb69789e 	bl	1a831fc <TADSPEndpointChunk::$KillSend(long)>
         24f80:	e1a01005 	mov	r1, r5
         24f84:	e1a00004 	mov	r0, r4
         24f88:	eb69789a 	bl	1a831f8 <TADSPEndpointChunk::$KillRecv(long)>
         24f8c:	e1a01005 	mov	r1, r5
         24f90:	e1a00004 	mov	r0, r4
         24f94:	e3a02000 	mov	r2, #0	; 0x0
         24f98:	eb697895 	bl	1a831f4 <TADSPEndpointChunk::$KillControl(long, unsigned char)>
         24f9c:	e1a05000 	mov	r5, r0
         24fa0:	e59400ac 	ldr	r0, [r4, #172]
         24fa4:	e3300000 	teq	r0, #0	; 0x0
         24fa8:	0a000002 	beq	24fb8 <TADSPEndpointChunk::Abort(unsigned char, long, unsigned char)+0x68>
         24fac:	e3a01000 	mov	r1, #0	; 0x0
         24fb0:	eb69704e 	bl	1a810f0 <TLookupNames::$CancelLookup(unsigned char)>
         24fb4:	e1a05000 	mov	r5, r0
         24fb8:	e3a00000 	mov	r0, #0	; 0x0
         24fbc:	e5c400b4 	strb	r0, [r4, #180]	; fField180
         24fc0:	e3370000 	teq	r7, #0	; 0x0
         24fc4:	15942010 	ldrne	r2, [r4, #16]	; fField16
         24fc8:	13320000 	teqne	r2, #0	; 0x0
         24fcc:	0a000011 	beq	25018 <TADSPEndpointChunk::Abort(unsigned char, long, unsigned char)+0xc8>
         24fd0:	e3360000 	teq	r6, #0	; 0x0
         24fd4:	1a00000f 	bne	25018 <TADSPEndpointChunk::Abort(unsigned char, long, unsigned char)+0xc8>
         24fd8:	e24dd024 	sub	sp, sp, #36	; 0x24
         24fdc:	e1a01005 	mov	r1, r5
         24fe0:	e28d0004 	add	r0, sp, #4	; 0x4
         24fe4:	e3e0300b 	mvn	r3, #11	; 0xb
         24fe8:	eb6780ab 	bl	1a0529c <TEndpointEvent::$__ct(long, unsigned long, long)>
         24fec:	e3a00020 	mov	r0, #32	; 0x20
         24ff0:	e58d0000 	str	r0, [sp]
         24ff4:	e28d3004 	add	r3, sp, #4	; 0x4
         24ff8:	e1a0200d 	mov	r2, sp
         24ffc:	e5b4c010 	ldr	ip, [r4, #16]!	; fField16
         25000:	e1a0000c 	mov	r0, ip
         25004:	e3a01000 	mov	r1, #0	; 0x0
         25008:	e59cc000 	ldr	ip, [ip]
         2500c:	e1a0e00f 	mov	lr, pc
         25010:	e28cf008 	add	pc, ip, #8	; 0x8
         25014:	e28dd024 	add	sp, sp, #36	; 0x24
         25018:	e1a00005 	mov	r0, r5
         2501c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::Timeout(unsigned long)
 * Address: 00025020
 */
TADSPEndpointChunk::Timeout(unsigned long) {
    /*
         25020:	e1a0c00d 	mov	ip, sp
         25024:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         25028:	e24cb004 	sub	fp, ip, #4	; 0x4
         2502c:	e1a02001 	mov	r2, r1
         25030:	e3a03000 	mov	r3, #0	; 0x0
         25034:	e280c0c0 	add	ip, r0, #192	; 0xc0
         25038:	e59f1010 	ldr	r1, [pc, #10]	; 25050 <TADSPEndpointChunk::Timeout(unsigned long)+0x30>
         2503c:	e13c0002 	teq	ip, r2
         25040:	1a000003 	bne	25054 <TADSPEndpointChunk::Timeout(unsigned long)+0x34>
         25044:	e3a02000 	mov	r2, #0	; 0x0
         25048:	eb697869 	bl	1a831f4 <TADSPEndpointChunk::$KillControl(long, unsigned char)>
         2504c:	ea000008 	b	25074 <TADSPEndpointChunk::Timeout(unsigned long)+0x54>
         25050:	ffffd8db 	swinv	0x00ffd8db
         25054:	e5922000 	ldr	r2, [r2]
         25058:	e3720002 	cmn	r2, #2	; 0x2
         2505c:	1a000001 	bne	25068 <TADSPEndpointChunk::Timeout(unsigned long)+0x48>
         25060:	eb697865 	bl	1a831fc <TADSPEndpointChunk::$KillSend(long)>
         25064:	ea000002 	b	25074 <TADSPEndpointChunk::Timeout(unsigned long)+0x54>
         25068:	e3720001 	cmn	r2, #1	; 0x1
         2506c:	1a000001 	bne	25078 <TADSPEndpointChunk::Timeout(unsigned long)+0x58>
         25070:	eb697860 	bl	1a831f8 <TADSPEndpointChunk::$KillRecv(long)>
         25074:	e1a03000 	mov	r3, r0
         25078:	e1a00003 	mov	r0, r3
         2507c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TADSPEndpointChunk::ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)
 * Address: 00025080
 */
TADSPEndpointChunk::ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char) {
    /*
         25080:	e1a0c00d 	mov	ip, sp
         25084:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         25088:	e24cb004 	sub	fp, ip, #4	; 0x4
         2508c:	e1a04000 	mov	r4, r0
         25090:	e1a08001 	mov	r8, r1
         25094:	e1a0e002 	mov	lr, r2
         25098:	e1a0c003 	mov	ip, r3
         2509c:	e59b1010 	ldr	r1, [fp, #16]	; fField16
         250a0:	e20160ff 	and	r6, r1, #255	; 0xff
         250a4:	e3a03000 	mov	r3, #0	; 0x0
         250a8:	e3a02000 	mov	r2, #0	; 0x0
         250ac:	e3a01000 	mov	r1, #0	; 0x0
         250b0:	e99b00a1 	ldmib	fp, {r0, r5, r7}
         250b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         250b8:	e1a0300c 	mov	r3, ip
         250bc:	e1a0200e 	mov	r2, lr
         250c0:	e92d000c 	stmdb	sp!, {r2, r3}
         250c4:	e2842d05 	add	r2, r4, #320	; 0x140
         250c8:	e1a03008 	mov	r3, r8
         250cc:	e5940004 	ldr	r0, [r4, #4]	; fField4
         250d0:	eb6788bd 	bl	1a073cc <TEndpointEventHandler::$CallService(unsigned long, TUAsyncMessage *, TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)>
         250d4:	e28dd018 	add	sp, sp, #24	; 0x18
         250d8:	e1b08000 	movs	r8, r0
         250dc:	1a00001b 	bne	25150 <TADSPEndpointChunk::ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xd0>
         250e0:	e3360000 	teq	r6, #0	; 0x0
         250e4:	0a000013 	beq	25138 <TADSPEndpointChunk::ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xb8>
         250e8:	e3a06000 	mov	r6, #0	; 0x0
         250ec:	e3a00001 	mov	r0, #1	; 0x1
         250f0:	e58460b0 	str	r6, [r4, #176]	; fField176
         250f4:	e5c400b7 	strb	r0, [r4, #183]	; fField183
         250f8:	e1a01005 	mov	r1, r5
         250fc:	e5940004 	ldr	r0, [r4, #4]	; fField4
         25100:	eb6788b0 	bl	1a073c8 <TEndpointEventHandler::$Block(unsigned long)>
         25104:	e1a08000 	mov	r8, r0
         25108:	e5c460b7 	strb	r6, [r4, #183]	; fField183
         2510c:	e59f1014 	ldr	r1, [pc, #14]	; 25128 <TADSPEndpointChunk::ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xa8>
         25110:	e1300001 	teq	r0, r1
         25114:	1a000004 	bne	2512c <TADSPEndpointChunk::ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xac>
         25118:	e1a00004 	mov	r0, r4
         2511c:	e3a02001 	mov	r2, #1	; 0x1
         25120:	eb697833 	bl	1a831f4 <TADSPEndpointChunk::$KillControl(long, unsigned char)>
         25124:	ea000009 	b	25150 <TADSPEndpointChunk::ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xd0>
         25128:	ffffd8db 	swinv	0x00ffd8db
         2512c:	e3380000 	teq	r8, #0	; 0x0
         25130:	05b480b0 	ldreq	r8, [r4, #176]!	; fField176
         25134:	ea000005 	b	25150 <TADSPEndpointChunk::ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xd0>
         25138:	e3350000 	teq	r5, #0	; 0x0
         2513c:	0a000003 	beq	25150 <TADSPEndpointChunk::ADSPCallService(TAEvent *, long, TAEvent *, long, unsigned long, unsigned long, unsigned char)+0xd0>
         25140:	e1a02007 	mov	r2, r7
         25144:	e1a01005 	mov	r1, r5
         25148:	e5b40004 	ldr	r0, [r4, #4]!	; fField4
         2514c:	eb67889a 	bl	1a073bc <TEndpointEventHandler::$AddTimer(unsigned long, unsigned long)>
         25150:	e1a00008 	mov	r0, r8
         25154:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

