#include "include/TIrDATool.h"

/**
 * Symbol: TIrDATool::__ct(unsigned long)
 * Address: 000edef4
 */
TIrDATool::TIrDATool(unsigned long) {
    /*
         edef4:	e1a0c00d 	mov	ip, sp
         edef8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         edefc:	e24cb004 	sub	fp, ip, #4	; 0x4
         edf00:	e1b04000 	movs	r4, r0
         edf04:	e1a05001 	mov	r5, r1
         edf08:	1a000003 	bne	edf1c <TIrDATool::__ct(unsigned long)+0x28>
         edf0c:	e3a00e69 	mov	r0, #1680	; 0x690
         edf10:	eb6b8208 	bl	1bce738 <$__nw(unsigned int)>
         edf14:	e1b04000 	movs	r4, r0
         edf18:	0a00002c 	beq	edfd0 <TIrDATool::__ct(unsigned long)+0xdc>
         edf1c:	e1a01005 	mov	r1, r5
         edf20:	e1a00004 	mov	r0, r4
         edf24:	eb646d6a 	bl	1a094d4 <TAsyncSerTool::$__ct(unsigned long)>
         edf28:	e28400b8 	add	r0, r4, #184	; 0xb8
         edf2c:	e2800b01 	add	r0, r0, #1024	; 0x400
         edf30:	eb6b379f 	bl	1bbbdb4 <TCMOSlowIRStats::$__ct(void)>
         edf34:	e2840e4e 	add	r0, r4, #1248	; 0x4e0
         edf38:	eb6c58ca 	bl	1c04268 <TCMOSlowIRConnect::$__ct(void)>
         edf3c:	e2840e4f 	add	r0, r4, #1264	; 0x4f0
         edf40:	eb6b3bba 	bl	1bbce30 <TCMOSlowIRProtocolType::$__ct(void)>
         edf44:	e2840f41 	add	r0, r4, #260	; 0x104
         edf48:	e2800b01 	add	r0, r0, #1024	; 0x400
         edf4c:	eb6501ed 	bl	1a2e708 <TCMOIrDADiscovery::$__ct(void)>
         edf50:	e2840f49 	add	r0, r4, #292	; 0x124
         edf54:	e2800b01 	add	r0, r0, #1024	; 0x400
         edf58:	eb6501eb 	bl	1a2e70c <TCMOIrDAReceiveBuffers::$__ct(void)>
         edf5c:	e2840f4e 	add	r0, r4, #312	; 0x138
         edf60:	e2800b01 	add	r0, r0, #1024	; 0x400
         edf64:	eb6501e9 	bl	1a2e710 <TCMOIrDALinkDisconnect::$__ct(void)>
         edf68:	e2840f52 	add	r0, r4, #328	; 0x148
         edf6c:	e2800b01 	add	r0, r0, #1024	; 0x400
         edf70:	eb6501e7 	bl	1a2e714 <TCMOIrDAConnectionInfo::$__ct(void)>
         edf74:	e2840f69 	add	r0, r4, #420	; 0x1a4
         edf78:	e2800b01 	add	r0, r0, #1024	; 0x400
         edf7c:	eb6501e6 	bl	1a2e71c <TCMOIrDAConnectAttrName::$__ct(void)>
         edf80:	e2840e5f 	add	r0, r4, #1520	; 0x5f0
         edf84:	eb6501e3 	bl	1a2e718 <TCMOIrDAConnectUserData::$__ct(void)>
         edf88:	e2840f91 	add	r0, r4, #580	; 0x244
         edf8c:	e2800b01 	add	r0, r0, #1024	; 0x400
         edf90:	eb6b7dc5 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         edf94:	e2840f96 	add	r0, r4, #600	; 0x258
         edf98:	e2800b01 	add	r0, r0, #1024	; 0x400
         edf9c:	eb6bd8a5 	bl	1be4238 <TAEvent::$__ct(void)>
         edfa0:	e2840f9a 	add	r0, r4, #616	; 0x268
         edfa4:	e2800b01 	add	r0, r0, #1024	; 0x400
         edfa8:	eb6b7dbf 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         edfac:	e2840f9f 	add	r0, r4, #636	; 0x27c
         edfb0:	e2800b01 	add	r0, r0, #1024	; 0x400
         edfb4:	eb6bd89f 	bl	1be4238 <TAEvent::$__ct(void)>
         edfb8:	e59f0018 	ldr	r0, [pc, #18]	; edfd8 <TIrDATool::__ct(unsigned long)+0xe4>
         edfbc:	e5840000 	str	r0, [r4]
         edfc0:	e3a00000 	mov	r0, #0	; 0x0
         edfc4:	e58404b0 	str	r0, [r4, #1200]	; fField1200
         edfc8:	e58404b4 	str	r0, [r4, #1204]	; fField1204
         edfcc:	e5840640 	str	r0, [r4, #1600]	; fField1600
         edfd0:	e1a00004 	mov	r0, r4
         edfd4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         edfd8:	00020be4 	andeq	r0, r2, r4, ror #23
    */
}

/**
 * Symbol: TIrDATool::__dt(void)
 * Address: 000edfdc
 */
TIrDATool::~TIrDATool(void) {
    /*
         edfdc:	e1a0c00d 	mov	ip, sp
         edfe0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         edfe4:	e24cb004 	sub	fp, ip, #4	; 0x4
         edfe8:	e1a04000 	mov	r4, r0
         edfec:	e1a05001 	mov	r5, r1
         edff0:	e59f0040 	ldr	r0, [pc, #40]	; ee038 <TIrDATool::__dt(void)+0x5c>
         edff4:	e5840000 	str	r0, [r4]
         edff8:	e2840f9a 	add	r0, r4, #616	; 0x268
         edffc:	e2800b01 	add	r0, r0, #1024	; 0x400
         ee000:	e3a01000 	mov	r1, #0	; 0x0
         ee004:	eb6b81c1 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         ee008:	e2840f91 	add	r0, r4, #580	; 0x244
         ee00c:	e2800b01 	add	r0, r0, #1024	; 0x400
         ee010:	e3a01000 	mov	r1, #0	; 0x0
         ee014:	eb6b81bd 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         ee018:	e1a00004 	mov	r0, r4
         ee01c:	e3a01000 	mov	r1, #0	; 0x0
         ee020:	eb64713a 	bl	1a0a510 <TAsyncSerTool::$__dt(void)>
         ee024:	e3150001 	tst	r5, #1	; 0x1
         ee028:	11a00004 	movne	r0, r4
         ee02c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         ee030:	1a6b7daa 	bne	1bcd6e0 <$__dl(void *)>
         ee034:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         ee038:	00020be4 	andeq	r0, r2, r4, ror #23
    */
}

/**
 * Symbol: TIrDATool::AddDefaultOptions(TOptionArray *)
 * Address: 000ee03c
 */
TIrDATool::AddDefaultOptions(TOptionArray *) {
    /*
         ee03c:	e1a0c00d 	mov	ip, sp
         ee040:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ee044:	e24cb004 	sub	fp, ip, #4	; 0x4
         ee048:	e1a05000 	mov	r5, r0
         ee04c:	e1a04001 	mov	r4, r1
         ee050:	e24ddf53 	sub	sp, sp, #332	; 0x14c
         ee054:	e28d0f4b 	add	r0, sp, #300	; 0x12c
         ee058:	eb6501aa 	bl	1a2e708 <TCMOIrDADiscovery::$__ct(void)>
         ee05c:	e28d0f46 	add	r0, sp, #280	; 0x118
         ee060:	eb6501a9 	bl	1a2e70c <TCMOIrDAReceiveBuffers::$__ct(void)>
         ee064:	e28d0f42 	add	r0, sp, #264	; 0x108
         ee068:	eb6501a8 	bl	1a2e710 <TCMOIrDALinkDisconnect::$__ct(void)>
         ee06c:	e28d00ac 	add	r0, sp, #172	; 0xac
         ee070:	eb6501a7 	bl	1a2e714 <TCMOIrDAConnectionInfo::$__ct(void)>
         ee074:	e28d0060 	add	r0, sp, #96	; 0x60
         ee078:	eb6501a7 	bl	1a2e71c <TCMOIrDAConnectAttrName::$__ct(void)>
         ee07c:	e28d0014 	add	r0, sp, #20	; 0x14
         ee080:	eb6501a4 	bl	1a2e718 <TCMOIrDAConnectUserData::$__ct(void)>
         ee084:	e1a0000d 	mov	r0, sp
         ee088:	eb6b3b68 	bl	1bbce30 <TCMOSlowIRProtocolType::$__ct(void)>
         ee08c:	e28d2f4b 	add	r2, sp, #300	; 0x12c
         ee090:	e5941000 	ldr	r1, [r4]
         ee094:	e1a00004 	mov	r0, r4
         ee098:	eb6b2f01 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee09c:	e3300000 	teq	r0, #0	; 0x0
         ee0a0:	1a000003 	bne	ee0b4 <TIrDATool::AddDefaultOptions(TOptionArray *)+0x78>
         ee0a4:	e28d2f46 	add	r2, sp, #280	; 0x118
         ee0a8:	e5941000 	ldr	r1, [r4]
         ee0ac:	e1a00004 	mov	r0, r4
         ee0b0:	eb6b2efb 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee0b4:	e3300000 	teq	r0, #0	; 0x0
         ee0b8:	1a000003 	bne	ee0cc <TIrDATool::AddDefaultOptions(TOptionArray *)+0x90>
         ee0bc:	e28d2f42 	add	r2, sp, #264	; 0x108
         ee0c0:	e5941000 	ldr	r1, [r4]
         ee0c4:	e1a00004 	mov	r0, r4
         ee0c8:	eb6b2ef5 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee0cc:	e3300000 	teq	r0, #0	; 0x0
         ee0d0:	1a000003 	bne	ee0e4 <TIrDATool::AddDefaultOptions(TOptionArray *)+0xa8>
         ee0d4:	e28d20ac 	add	r2, sp, #172	; 0xac
         ee0d8:	e5941000 	ldr	r1, [r4]
         ee0dc:	e1a00004 	mov	r0, r4
         ee0e0:	eb6b2eef 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee0e4:	e3300000 	teq	r0, #0	; 0x0
         ee0e8:	1a000003 	bne	ee0fc <TIrDATool::AddDefaultOptions(TOptionArray *)+0xc0>
         ee0ec:	e28d2060 	add	r2, sp, #96	; 0x60
         ee0f0:	e5941000 	ldr	r1, [r4]
         ee0f4:	e1a00004 	mov	r0, r4
         ee0f8:	eb6b2ee9 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee0fc:	e3300000 	teq	r0, #0	; 0x0
         ee100:	1a000003 	bne	ee114 <TIrDATool::AddDefaultOptions(TOptionArray *)+0xd8>
         ee104:	e28d2014 	add	r2, sp, #20	; 0x14
         ee108:	e5941000 	ldr	r1, [r4]
         ee10c:	e1a00004 	mov	r0, r4
         ee110:	eb6b2ee3 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee114:	e3300000 	teq	r0, #0	; 0x0
         ee118:	1a000005 	bne	ee134 <TIrDATool::AddDefaultOptions(TOptionArray *)+0xf8>
         ee11c:	e3a00004 	mov	r0, #4	; 0x4
         ee120:	e58d000c 	str	r0, [sp, #12]
         ee124:	e1a0200d 	mov	r2, sp
         ee128:	e5941000 	ldr	r1, [r4]
         ee12c:	e1a00004 	mov	r0, r4
         ee130:	eb6b2edb 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee134:	e3300000 	teq	r0, #0	; 0x0
         ee138:	01a01004 	moveq	r1, r4
         ee13c:	01a00005 	moveq	r0, r5
         ee140:	0b647513 	bleq	1a0b594 <TAsyncSerTool::$AddDefaultOptions(TOptionArray *)>
         ee144:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrDATool::AddCurrentOptions(TOptionArray *)
 * Address: 000ee148
 */
TIrDATool::AddCurrentOptions(TOptionArray *) {
    /*
         ee148:	e1a0c00d 	mov	ip, sp
         ee14c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ee150:	e24cb004 	sub	fp, ip, #4	; 0x4
         ee154:	e1a05000 	mov	r5, r0
         ee158:	e1a04001 	mov	r4, r1
         ee15c:	e2802f49 	add	r2, r0, #292	; 0x124
         ee160:	e2822b01 	add	r2, r2, #1024	; 0x400
         ee164:	e5911000 	ldr	r1, [r1]
         ee168:	e1a00004 	mov	r0, r4
         ee16c:	eb6b2ecc 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee170:	e3300000 	teq	r0, #0	; 0x0
         ee174:	1a000004 	bne	ee18c <TIrDATool::AddCurrentOptions(TOptionArray *)+0x44>
         ee178:	e2852f4e 	add	r2, r5, #312	; 0x138
         ee17c:	e2822b01 	add	r2, r2, #1024	; 0x400
         ee180:	e5941000 	ldr	r1, [r4]
         ee184:	e1a00004 	mov	r0, r4
         ee188:	eb6b2ec5 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee18c:	e3300000 	teq	r0, #0	; 0x0
         ee190:	1a000004 	bne	ee1a8 <TIrDATool::AddCurrentOptions(TOptionArray *)+0x60>
         ee194:	e2852f41 	add	r2, r5, #260	; 0x104
         ee198:	e2822b01 	add	r2, r2, #1024	; 0x400
         ee19c:	e5941000 	ldr	r1, [r4]
         ee1a0:	e1a00004 	mov	r0, r4
         ee1a4:	eb6b2ebe 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee1a8:	e3300000 	teq	r0, #0	; 0x0
         ee1ac:	1a000004 	bne	ee1c4 <TIrDATool::AddCurrentOptions(TOptionArray *)+0x7c>
         ee1b0:	e2852f52 	add	r2, r5, #328	; 0x148
         ee1b4:	e2822b01 	add	r2, r2, #1024	; 0x400
         ee1b8:	e5941000 	ldr	r1, [r4]
         ee1bc:	e1a00004 	mov	r0, r4
         ee1c0:	eb6b2eb7 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee1c4:	e3300000 	teq	r0, #0	; 0x0
         ee1c8:	1a000004 	bne	ee1e0 <TIrDATool::AddCurrentOptions(TOptionArray *)+0x98>
         ee1cc:	e2852f69 	add	r2, r5, #420	; 0x1a4
         ee1d0:	e2822b01 	add	r2, r2, #1024	; 0x400
         ee1d4:	e5941000 	ldr	r1, [r4]
         ee1d8:	e1a00004 	mov	r0, r4
         ee1dc:	eb6b2eb0 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee1e0:	e3300000 	teq	r0, #0	; 0x0
         ee1e4:	1a000008 	bne	ee20c <TIrDATool::AddCurrentOptions(TOptionArray *)+0xc4>
         ee1e8:	e28510b8 	add	r1, r5, #184	; 0xb8
         ee1ec:	e2811b01 	add	r1, r1, #1024	; 0x400
         ee1f0:	e1a06001 	mov	r6, r1
         ee1f4:	e59504b4 	ldr	r0, [r5, #1204]	; fField1204
         ee1f8:	eb65266e 	bl	1a37bb8 <TIrSIR::$CopyStatsTo(TCMOSlowIRStats *)>
         ee1fc:	e1a02006 	mov	r2, r6
         ee200:	e5941000 	ldr	r1, [r4]
         ee204:	e1a00004 	mov	r0, r4
         ee208:	eb6b2ea5 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee20c:	e3300000 	teq	r0, #0	; 0x0
         ee210:	1a000003 	bne	ee224 <TIrDATool::AddCurrentOptions(TOptionArray *)+0xdc>
         ee214:	e2852e4e 	add	r2, r5, #1248	; 0x4e0
         ee218:	e5941000 	ldr	r1, [r4]
         ee21c:	e1a00004 	mov	r0, r4
         ee220:	eb6b2e9f 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee224:	e3300000 	teq	r0, #0	; 0x0
         ee228:	1a000003 	bne	ee23c <TIrDATool::AddCurrentOptions(TOptionArray *)+0xf4>
         ee22c:	e2852e4f 	add	r2, r5, #1264	; 0x4f0
         ee230:	e5941000 	ldr	r1, [r4]
         ee234:	e1a00004 	mov	r0, r4
         ee238:	eb6b2e99 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         ee23c:	e3300000 	teq	r0, #0	; 0x0
         ee240:	01a01004 	moveq	r1, r4
         ee244:	01a00005 	moveq	r0, r5
         ee248:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         ee24c:	0a6474cc 	beq	1a0b584 <TAsyncSerTool::$AddCurrentOptions(TOptionArray *)>
         ee250:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 000ee254
 */
TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         ee254:	e1a0c00d 	mov	ip, sp
         ee258:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         ee25c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ee260:	e1a05000 	mov	r5, r0
         ee264:	e1a04001 	mov	r4, r1
         ee268:	e3a06000 	mov	r6, #0	; 0x0
         ee26c:	e59fc05c 	ldr	ip, [pc, #5c]	; ee2d0 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x7c>
         ee270:	e152000c 	cmp	r2, ip
         ee274:	0a000072 	beq	ee444 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1f0>
         ee278:	e3a07000 	mov	r7, #0	; 0x0
         ee27c:	ca000031 	bgt	ee348 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xf4>
         ee280:	e59fc04c 	ldr	ip, [pc, #4c]	; ee2d4 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x80>
         ee284:	e152000c 	cmp	r2, ip
         ee288:	0a000090 	beq	ee4d0 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x27c>
         ee28c:	ca000013 	bgt	ee2e0 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x8c>
         ee290:	e59fc040 	ldr	ip, [pc, #40]	; ee2d8 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x84>
         ee294:	e132000c 	teq	r2, ip
         ee298:	0a0000a3 	beq	ee52c <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2d8>
         ee29c:	e59fc038 	ldr	ip, [pc, #38]	; ee2dc <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x88>
         ee2a0:	e132000c 	teq	r2, ip
         ee2a4:	1a00010c 	bne	ee6dc <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x488>
         ee2a8:	e2850e5f 	add	r0, r5, #1520	; 0x5f0
         ee2ac:	e3330c01 	teq	r3, #256	; 0x100
         ee2b0:	13330c02 	teqne	r3, #512	; 0x200
         ee2b4:	1a0000b2 	bne	ee584 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x330>
         ee2b8:	e594100c 	ldr	r1, [r4, #12]
         ee2bc:	e351003c 	cmp	r1, #60	; 0x3c
         ee2c0:	8a0000f3 	bhi	ee694 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x440>
         ee2c4:	e1a01004 	mov	r1, r4
         ee2c8:	eb6b2640 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         ee2cc:	ea000106 	b	ee6ec <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x498>
         ee2d0:	69726c64 	ldmvsdb	r2!, {r2, r5, r6, sl, fp, sp, lr}^
         ee2d4:	69726369 	ldmvsdb	r2!, {r0, r3, r5, r6, r8, r9, sp, lr}^
         ee2d8:	69726361 	ldmvsdb	r2!, {r0, r5, r6, r8, r9, sp, lr}^
         ee2dc:	69726364 	ldmvsdb	r2!, {r2, r5, r6, r8, r9, sp, lr}^
         ee2e0:	e59fc058 	ldr	ip, [pc, #58]	; ee340 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xec>
         ee2e4:	e132000c 	teq	r2, ip
         ee2e8:	0a0000d2 	beq	ee638 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3e4>
         ee2ec:	e59fc050 	ldr	ip, [pc, #50]	; ee344 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xf0>
         ee2f0:	e132000c 	teq	r2, ip
         ee2f4:	1a0000f8 	bne	ee6dc <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x488>
         ee2f8:	e2850f41 	add	r0, r5, #260	; 0x104
         ee2fc:	e2800b01 	add	r0, r0, #1024	; 0x400
         ee300:	e3330c01 	teq	r3, #256	; 0x100
         ee304:	13330c02 	teqne	r3, #512	; 0x200
         ee308:	1a000065 	bne	ee4a4 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x250>
         ee30c:	e1a02004 	mov	r2, r4
         ee310:	e594100c 	ldr	r1, [r4, #12]
         ee314:	e3310001 	teq	r1, #1	; 0x1
         ee318:	13310006 	teqne	r1, #6	; 0x6
         ee31c:	13310008 	teqne	r1, #8	; 0x8
         ee320:	13310010 	teqne	r1, #16	; 0x10
         ee324:	1a0000da 	bne	ee694 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x440>
         ee328:	e5b514b0 	ldr	r1, [r5, #1200]!	; fField1200
         ee32c:	e281104c 	add	r1, r1, #76	; 0x4c
         ee330:	e5922010 	ldr	r2, [r2, #16]
         ee334:	e3822002 	orr	r2, r2, #2	; 0x2
         ee338:	e5a12004 	str	r2, [r1, #4]!
         ee33c:	ea0000ef 	b	ee700 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4ac>
         ee340:	6972636f 	ldmvsdb	r2!, {r0, r1, r2, r3, r5, r6, r8, r9, sp, lr}^
         ee344:	69726469 	ldmvsdb	r2!, {r0, r3, r5, r6, sl, sp, lr}^
         ee348:	e59fc050 	ldr	ip, [pc, #50]	; ee3a0 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x14c>
         ee34c:	e132000c 	teq	r2, ip
         ee350:	0a0000c7 	beq	ee674 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x420>
         ee354:	e59fc048 	ldr	ip, [pc, #48]	; ee3a4 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x150>
         ee358:	e132000c 	teq	r2, ip
         ee35c:	0a00001c 	beq	ee3d4 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x180>
         ee360:	e59fc040 	ldr	ip, [pc, #40]	; ee3a8 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x154>
         ee364:	e132000c 	teq	r2, ip
         ee368:	0a000090 	beq	ee5b0 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x35c>
         ee36c:	e59fc038 	ldr	ip, [pc, #38]	; ee3ac <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x158>
         ee370:	e132000c 	teq	r2, ip
         ee374:	1a0000d8 	bne	ee6dc <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x488>
         ee378:	e3330c01 	teq	r3, #256	; 0x100
         ee37c:	13330c02 	teqne	r3, #512	; 0x200
         ee380:	1a00000a 	bne	ee3b0 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x15c>
         ee384:	e5b504b0 	ldr	r0, [r5, #1200]!	; fField1200
         ee388:	e2800070 	add	r0, r0, #112	; 0x70
         ee38c:	e5b4100c 	ldr	r1, [r4, #12]!
         ee390:	eb6525fd 	bl	1a37b8c <TIrQOS::$SetBaudRate(unsigned long)>
         ee394:	e1b06000 	movs	r6, r0
         ee398:	0a0000d3 	beq	ee6ec <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x498>
         ee39c:	ea0000bc 	b	ee694 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x440>
         ee3a0:	69727074 	ldmvsdb	r2!, {r2, r4, r5, r6, ip, sp, lr}^
         ee3a4:	69727262 	ldmvsdb	r2!, {r1, r5, r6, r9, ip, sp, lr}^
         ee3a8:	69727374 	ldmvsdb	r2!, {r2, r4, r5, r6, r8, r9, ip, sp, lr}^
         ee3ac:	73627073 	cmnvc	r2, #115	; 0x73
         ee3b0:	e3330c03 	teq	r3, #768	; 0x300
         ee3b4:	15b5035c 	ldrne	r0, [r5, #860]!	; fField860
         ee3b8:	15a4000c 	strne	r0, [r4, #12]!
         ee3bc:	1a0000ca 	bne	ee6ec <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x498>
         ee3c0:	e24dd010 	sub	sp, sp, #16	; 0x10
         ee3c4:	e1a0000d 	mov	r0, sp
         ee3c8:	eb6b3685 	bl	1bbbde4 <TCMOSerialBitRate::$__ct(void)>
         ee3cc:	e1a0100d 	mov	r1, sp
         ee3d0:	ea0000a2 	b	ee660 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x40c>
         ee3d4:	e2857f49 	add	r7, r5, #292	; 0x124
         ee3d8:	e2877b01 	add	r7, r7, #1024	; 0x400
         ee3dc:	e3330c01 	teq	r3, #256	; 0x100
         ee3e0:	13330c02 	teqne	r3, #512	; 0x200
         ee3e4:	1a00000e 	bne	ee424 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1d0>
         ee3e8:	e1a06004 	mov	r6, r4
         ee3ec:	e59504b0 	ldr	r0, [r5, #1200]	; fField1200
         ee3f0:	e2800070 	add	r0, r0, #112	; 0x70
         ee3f4:	e594100c 	ldr	r1, [r4, #12]
         ee3f8:	eb6525e4 	bl	1a37b90 <TIrQOS::$SetDataSize(unsigned long)>
         ee3fc:	e3300000 	teq	r0, #0	; 0x0
         ee400:	1a0000a3 	bne	ee694 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x440>
         ee404:	e5b504b0 	ldr	r0, [r5, #1200]!	; fField1200
         ee408:	e2800070 	add	r0, r0, #112	; 0x70
         ee40c:	e5b61010 	ldr	r1, [r6, #16]!
         ee410:	eb6525df 	bl	1a37b94 <TIrQOS::$SetWindowSize(unsigned long)>
         ee414:	e3300000 	teq	r0, #0	; 0x0
         ee418:	01a00007 	moveq	r0, r7
         ee41c:	0a0000b7 	beq	ee700 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4ac>
         ee420:	ea00009b 	b	ee694 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x440>
         ee424:	e3330c03 	teq	r3, #768	; 0x300
         ee428:	11a01007 	movne	r1, r7
         ee42c:	1a0000a8 	bne	ee6d4 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x480>
         ee430:	e24dd014 	sub	sp, sp, #20	; 0x14
         ee434:	e1a0000d 	mov	r0, sp
         ee438:	eb6500b3 	bl	1a2e70c <TCMOIrDAReceiveBuffers::$__ct(void)>
         ee43c:	e1a0100d 	mov	r1, sp
         ee440:	ea00009d 	b	ee6bc <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x468>
         ee444:	e2856f4e 	add	r6, r5, #312	; 0x138
         ee448:	e2866b01 	add	r6, r6, #1024	; 0x400
         ee44c:	e3330c01 	teq	r3, #256	; 0x100
         ee450:	13330c02 	teqne	r3, #512	; 0x200
         ee454:	1a00000a 	bne	ee484 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x230>
         ee458:	e5b504b0 	ldr	r0, [r5, #1200]!	; fField1200
         ee45c:	e2800070 	add	r0, r0, #112	; 0x70
         ee460:	e594100c 	ldr	r1, [r4, #12]
         ee464:	e061c281 	rsb	ip, r1, r1, lsl #5
         ee468:	e06c1401 	rsb	r1, ip, r1, lsl #8
         ee46c:	e1a01701 	mov	r1, r1, lsl #14
         ee470:	eb6525c8 	bl	1a37b98 <TIrQOS::$SetLinkDiscThresholdTime(unsigned long)>
         ee474:	e3300000 	teq	r0, #0	; 0x0
         ee478:	01a00006 	moveq	r0, r6
         ee47c:	0a00009f 	beq	ee700 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4ac>
         ee480:	ea000083 	b	ee694 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x440>
         ee484:	e3330c03 	teq	r3, #768	; 0x300
         ee488:	11a01006 	movne	r1, r6
         ee48c:	1a000090 	bne	ee6d4 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x480>
         ee490:	e24dd010 	sub	sp, sp, #16	; 0x10
         ee494:	e1a0000d 	mov	r0, sp
         ee498:	eb65009c 	bl	1a2e710 <TCMOIrDALinkDisconnect::$__ct(void)>
         ee49c:	e1a0100d 	mov	r1, sp
         ee4a0:	ea00006e 	b	ee660 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x40c>
         ee4a4:	e3330c03 	teq	r3, #768	; 0x300
         ee4a8:	1a000088 	bne	ee6d0 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x47c>
         ee4ac:	e24dd020 	sub	sp, sp, #32	; 0x20
         ee4b0:	e1a0000d 	mov	r0, sp
         ee4b4:	eb650093 	bl	1a2e708 <TCMOIrDADiscovery::$__ct(void)>
         ee4b8:	e1a0100d 	mov	r1, sp
         ee4bc:	e1a00004 	mov	r0, r4
         ee4c0:	eb6b25c2 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         ee4c4:	e1a06000 	mov	r6, r0
         ee4c8:	e28dd020 	add	sp, sp, #32	; 0x20
         ee4cc:	ea000086 	b	ee6ec <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x498>
         ee4d0:	e2850f52 	add	r0, r5, #328	; 0x148
         ee4d4:	e2800b01 	add	r0, r0, #1024	; 0x400
         ee4d8:	e3330c01 	teq	r3, #256	; 0x100
         ee4dc:	13330c02 	teqne	r3, #512	; 0x200
         ee4e0:	1a000006 	bne	ee500 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2ac>
         ee4e4:	e5941018 	ldr	r1, [r4, #24]
         ee4e8:	e5942014 	ldr	r2, [r4, #20]
         ee4ec:	e0821001 	add	r1, r2, r1
         ee4f0:	e2811002 	add	r1, r1, #2	; 0x2
         ee4f4:	e351003d 	cmp	r1, #61	; 0x3d
         ee4f8:	9a000080 	bls	ee700 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4ac>
         ee4fc:	ea000064 	b	ee694 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x440>
         ee500:	e3330c03 	teq	r3, #768	; 0x300
         ee504:	1a000071 	bne	ee6d0 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x47c>
         ee508:	e24dd05c 	sub	sp, sp, #92	; 0x5c
         ee50c:	e1a0000d 	mov	r0, sp
         ee510:	eb65007f 	bl	1a2e714 <TCMOIrDAConnectionInfo::$__ct(void)>
         ee514:	e1a0100d 	mov	r1, sp
         ee518:	e1a00004 	mov	r0, r4
         ee51c:	eb6b25ab 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         ee520:	e1a06000 	mov	r6, r0
         ee524:	e28dd05c 	add	sp, sp, #92	; 0x5c
         ee528:	ea00006f 	b	ee6ec <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x498>
         ee52c:	e2850f69 	add	r0, r5, #420	; 0x1a4
         ee530:	e2800b01 	add	r0, r0, #1024	; 0x400
         ee534:	e3330c01 	teq	r3, #256	; 0x100
         ee538:	13330c02 	teqne	r3, #512	; 0x200
         ee53c:	1a000009 	bne	ee568 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x314>
         ee540:	e594100c 	ldr	r1, [r4, #12]
         ee544:	e351003c 	cmp	r1, #60	; 0x3c
         ee548:	8a000051 	bhi	ee694 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x440>
         ee54c:	e1a01004 	mov	r1, r4
         ee550:	eb6b259e 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         ee554:	e1a06000 	mov	r6, r0
         ee558:	e59505b0 	ldr	r0, [r5, #1456]	; fField1456
         ee55c:	e0800005 	add	r0, r0, r5
         ee560:	e5c075b4 	strb	r7, [r0, #1460]
         ee564:	ea000060 	b	ee6ec <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x498>
         ee568:	e3330c03 	teq	r3, #768	; 0x300
         ee56c:	1a000057 	bne	ee6d0 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x47c>
         ee570:	e24dd04c 	sub	sp, sp, #76	; 0x4c
         ee574:	e1a0000d 	mov	r0, sp
         ee578:	eb650067 	bl	1a2e71c <TCMOIrDAConnectAttrName::$__ct(void)>
         ee57c:	e1a0100d 	mov	r1, sp
         ee580:	ea000005 	b	ee59c <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x348>
         ee584:	e3330c03 	teq	r3, #768	; 0x300
         ee588:	1a000050 	bne	ee6d0 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x47c>
         ee58c:	e24dd04c 	sub	sp, sp, #76	; 0x4c
         ee590:	e1a0000d 	mov	r0, sp
         ee594:	eb65005f 	bl	1a2e718 <TCMOIrDAConnectUserData::$__ct(void)>
         ee598:	e1a0100d 	mov	r1, sp
         ee59c:	e1a00004 	mov	r0, r4
         ee5a0:	eb6b258a 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         ee5a4:	e1a06000 	mov	r6, r0
         ee5a8:	e28dd04c 	add	sp, sp, #76	; 0x4c
         ee5ac:	ea00004e 	b	ee6ec <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x498>
         ee5b0:	e3330c01 	teq	r3, #256	; 0x100
         ee5b4:	13330c02 	teqne	r3, #512	; 0x200
         ee5b8:	03e06002 	mvneq	r6, #2	; 0x2
         ee5bc:	0a00004a 	beq	ee6ec <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x498>
         ee5c0:	e3330b01 	teq	r3, #1024	; 0x400
         ee5c4:	1a000032 	bne	ee694 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x440>
         ee5c8:	e28510b8 	add	r1, r5, #184	; 0xb8
         ee5cc:	e2811b01 	add	r1, r1, #1024	; 0x400
         ee5d0:	e1a07001 	mov	r7, r1
         ee5d4:	e59504b0 	ldr	r0, [r5, #1200]	; fField1200
         ee5d8:	eb000993 	bl	f0c2c <TIrGlue::CopyStatsTo(TCMOSlowIRStats *)>
         ee5dc:	e1a01007 	mov	r1, r7
         ee5e0:	e59504b4 	ldr	r0, [r5, #1204]	; fField1204
         ee5e4:	eb652573 	bl	1a37bb8 <TIrSIR::$CopyStatsTo(TCMOSlowIRStats *)>
         ee5e8:	e1a01007 	mov	r1, r7
         ee5ec:	e1a00004 	mov	r0, r4
         ee5f0:	eb6b2576 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         ee5f4:	e5940008 	ldr	r0, [r4, #8]
         ee5f8:	e3c000ff 	bic	r0, r0, #255	; 0xff
         ee5fc:	e5a40008 	str	r0, [r4, #8]!
         ee600:	e59504b0 	ldr	r0, [r5, #1200]	; fField1200
         ee604:	eb000991 	bl	f0c50 <TIrGlue::ResetStats(void)>
         ee608:	e5b504b4 	ldr	r0, [r5, #1204]!	; fField1204
         ee60c:	eb65256a 	bl	1a37bbc <TIrSIR::$ResetStats(void)>
         ee610:	e24dd028 	sub	sp, sp, #40	; 0x28
         ee614:	e1a0000d 	mov	r0, sp
         ee618:	eb6b35e5 	bl	1bbbdb4 <TCMOSlowIRStats::$__ct(void)>
         ee61c:	e1a0000d 	mov	r0, sp
         ee620:	e8b0500e 	ldmia	r0!, {r1, r2, r3, ip, lr}
         ee624:	e8a7500e 	stmia	r7!, {r1, r2, r3, ip, lr}
         ee628:	e890500e 	ldmia	r0, {r1, r2, r3, ip, lr}
         ee62c:	e887500e 	stmia	r7, {r1, r2, r3, ip, lr}
         ee630:	e28dd028 	add	sp, sp, #40	; 0x28
         ee634:	ea00002c 	b	ee6ec <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x498>
         ee638:	e2850e4e 	add	r0, r5, #1248	; 0x4e0
         ee63c:	e3330c01 	teq	r3, #256	; 0x100
         ee640:	13330c02 	teqne	r3, #512	; 0x200
         ee644:	0a00002d 	beq	ee700 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4ac>
         ee648:	e3330c03 	teq	r3, #768	; 0x300
         ee64c:	1a00001f 	bne	ee6d0 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x47c>
         ee650:	e24dd010 	sub	sp, sp, #16	; 0x10
         ee654:	e1a0000d 	mov	r0, sp
         ee658:	eb6c5702 	bl	1c04268 <TCMOSlowIRConnect::$__ct(void)>
         ee65c:	e1a0100d 	mov	r1, sp
         ee660:	e1a00004 	mov	r0, r4
         ee664:	eb6b2559 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         ee668:	e1a06000 	mov	r6, r0
         ee66c:	e28dd010 	add	sp, sp, #16	; 0x10
         ee670:	ea00001d 	b	ee6ec <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x498>
         ee674:	e2850e4f 	add	r0, r5, #1264	; 0x4f0
         ee678:	e3330c01 	teq	r3, #256	; 0x100
         ee67c:	13330c02 	teqne	r3, #512	; 0x200
         ee680:	1a000005 	bne	ee69c <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x448>
         ee684:	e594100c 	ldr	r1, [r4, #12]
         ee688:	e3310000 	teq	r1, #0	; 0x0
         ee68c:	13310004 	teqne	r1, #4	; 0x4
         ee690:	0a00001a 	beq	ee700 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4ac>
         ee694:	e3e06000 	mvn	r6, #0	; 0x0
         ee698:	ea000013 	b	ee6ec <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x498>
         ee69c:	e3330c03 	teq	r3, #768	; 0x300
         ee6a0:	1a00000a 	bne	ee6d0 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x47c>
         ee6a4:	e24dd014 	sub	sp, sp, #20	; 0x14
         ee6a8:	e1a0000d 	mov	r0, sp
         ee6ac:	eb6b39df 	bl	1bbce30 <TCMOSlowIRProtocolType::$__ct(void)>
         ee6b0:	e3a00004 	mov	r0, #4	; 0x4
         ee6b4:	e58d000c 	str	r0, [sp, #12]
         ee6b8:	e1a0100d 	mov	r1, sp
         ee6bc:	e1a00004 	mov	r0, r4
         ee6c0:	eb6b2542 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         ee6c4:	e1a06000 	mov	r6, r0
         ee6c8:	e28dd014 	add	sp, sp, #20	; 0x14
         ee6cc:	ea000006 	b	ee6ec <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x498>
         ee6d0:	e1a01000 	mov	r1, r0
         ee6d4:	e1a00004 	mov	r0, r4
         ee6d8:	ea000005 	b	ee6f4 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4a0>
         ee6dc:	e1a01004 	mov	r1, r4
         ee6e0:	e1a00005 	mov	r0, r5
         ee6e4:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         ee6e8:	ea64c658 	b	1a20050 <TAsyncSerTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
         ee6ec:	e1a00006 	mov	r0, r6
         ee6f0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         ee6f4:	eb6b2535 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         ee6f8:	e1a06000 	mov	r6, r0
         ee6fc:	eafffffa 	b	ee6ec <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x498>
         ee700:	e1a01004 	mov	r1, r4
         ee704:	eafffffa 	b	ee6f4 <TIrDATool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4a0>
    */
}

/**
 * Symbol: TIrDATool::OpenStart(TOptionArray *)
 * Address: 000ee708
 */
TIrDATool::OpenStart(TOptionArray *) {
    /*
         ee708:	ea6b4649 	b	1bc0034 <TCommTool::$OpenStart(TOptionArray *)>
    */
}

/**
 * Symbol: TIrDATool::ConnectStart(void)
 * Address: 000ee70c
 */
TIrDATool::ConnectStart(void) {
    /*
         ee70c:	e1a0c00d 	mov	ip, sp
         ee710:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ee714:	e24cb004 	sub	fp, ip, #4	; 0x4
         ee718:	e1a04000 	mov	r4, r0
         ee71c:	e5901000 	ldr	r1, [r0]
         ee720:	e1a0e00f 	mov	lr, pc
         ee724:	e281fe15 	add	pc, r1, #336	; 0x150
         ee728:	e3300000 	teq	r0, #0	; 0x0
         ee72c:	0a000004 	beq	ee744 <TIrDATool::ConnectStart(void)+0x38>
         ee730:	e1a01000 	mov	r1, r0
         ee734:	e1a00004 	mov	r0, r4
         ee738:	e5942000 	ldr	r2, [r4]
         ee73c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         ee740:	e282f054 	add	pc, r2, #84	; 0x54
         ee744:	e5945510 	ldr	r5, [r4, #1296]	; fField1296
         ee748:	e0650505 	rsb	r0, r5, r5, lsl #10
         ee74c:	e0800685 	add	r0, r0, r5, lsl #13
         ee750:	e0800100 	add	r0, r0, r0, lsl #2
         ee754:	e59f1028 	ldr	r1, [pc, #28]	; ee784 <TIrDATool::ConnectStart(void)+0x78>
         ee758:	e0810180 	add	r0, r1, r0, lsl #3
         ee75c:	e3a0185e 	mov	r1, #6160384	; 0x5e0000
         ee760:	e281141a 	add	r1, r1, #436207616	; 0x1a000000
         ee764:	eb6b1077 	bl	1bb2948 <$__rt_udiv>
         ee768:	e584068c 	str	r0, [r4, #1676]	; fField1676
         ee76c:	e5940520 	ldr	r0, [r4, #1312]	; fField1312
         ee770:	e20020ff 	and	r2, r0, #255	; 0xff
         ee774:	e1a01005 	mov	r1, r5
         ee778:	e5b404b0 	ldr	r0, [r4, #1200]!	; fField1200
         ee77c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         ee780:	ea65081f 	b	1a30804 <TIrGlue::$DiscoverStart(unsigned long, unsigned char)>
         ee784:	0021bf10 	eoreq	fp, r1, r0, lsl pc
    */
}

/**
 * Symbol: TIrDATool::DoDiscoverComplete(long, CList *)
 * Address: 000ee788
 */
TIrDATool::DoDiscoverComplete(long, CList *) {
    /*
         ee788:	e1a0c00d 	mov	ip, sp
         ee78c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ee790:	e24cb004 	sub	fp, ip, #4	; 0x4
         ee794:	e1a04000 	mov	r4, r0
         ee798:	e1a05002 	mov	r5, r2
         ee79c:	e3310000 	teq	r1, #0	; 0x0
         ee7a0:	0a000001 	beq	ee7ac <TIrDATool::DoDiscoverComplete(long, CList *)+0x24>
         ee7a4:	e1a00004 	mov	r0, r4
         ee7a8:	ea000026 	b	ee848 <TIrDATool::DoDiscoverComplete(long, CList *)+0xc0>
         ee7ac:	e3a00000 	mov	r0, #0	; 0x0
         ee7b0:	e3a06000 	mov	r6, #0	; 0x0
         ee7b4:	e584051c 	str	r0, [r4, #1308]	; fField1308
         ee7b8:	e5950000 	ldr	r0, [r5]
         ee7bc:	e3500000 	cmp	r0, #0	; 0x0
         ee7c0:	da000012 	ble	ee810 <TIrDATool::DoDiscoverComplete(long, CList *)+0x88>
         ee7c4:	e1a01006 	mov	r1, r6
         ee7c8:	e1a00005 	mov	r0, r5
         ee7cc:	eb6bdedc 	bl	1be6344 <CList::$At(long)>
         ee7d0:	e5901004 	ldr	r1, [r0, #4]
         ee7d4:	e5942518 	ldr	r2, [r4, #1304]	; fField1304
         ee7d8:	e1110002 	tst	r1, r2
         ee7dc:	0a000004 	beq	ee7f4 <TIrDATool::DoDiscoverComplete(long, CList *)+0x6c>
         ee7e0:	e5901004 	ldr	r1, [r0, #4]
         ee7e4:	e5841518 	str	r1, [r4, #1304]	; fField1304
         ee7e8:	e5900000 	ldr	r0, [r0]
         ee7ec:	e584051c 	str	r0, [r4, #1308]	; fField1308
         ee7f0:	ea000003 	b	ee804 <TIrDATool::DoDiscoverComplete(long, CList *)+0x7c>
         ee7f4:	e2866001 	add	r6, r6, #1	; 0x1
         ee7f8:	e5950000 	ldr	r0, [r5]
         ee7fc:	e1500006 	cmp	r0, r6
         ee800:	caffffef 	bgt	ee7c4 <TIrDATool::DoDiscoverComplete(long, CList *)+0x3c>
         ee804:	e594051c 	ldr	r0, [r4, #1308]	; fField1308
         ee808:	e3300000 	teq	r0, #0	; 0x0
         ee80c:	1a00000f 	bne	ee850 <TIrDATool::DoDiscoverComplete(long, CList *)+0xc8>
         ee810:	e594068c 	ldr	r0, [r4, #1676]	; fField1676
         ee814:	e2400001 	sub	r0, r0, #1	; 0x1
         ee818:	e584068c 	str	r0, [r4, #1676]	; fField1676
         ee81c:	e3500000 	cmp	r0, #0	; 0x0
         ee820:	9a000005 	bls	ee83c <TIrDATool::DoDiscoverComplete(long, CList *)+0xb4>
         ee824:	e5940520 	ldr	r0, [r4, #1312]	; fField1312
         ee828:	e20020ff 	and	r2, r0, #255	; 0xff
         ee82c:	e5b404b0 	ldr	r0, [r4, #1200]!	; fField1200
         ee830:	e5b41060 	ldr	r1, [r4, #96]!	; fField96
         ee834:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ee838:	ea6507f1 	b	1a30804 <TIrGlue::$DiscoverStart(unsigned long, unsigned char)>
         ee83c:	e1a00004 	mov	r0, r4
         ee840:	e3e01e47 	mvn	r1, #1136	; 0x470
         ee844:	e2411a09 	sub	r1, r1, #36864	; 0x9000
         ee848:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ee84c:	ea6b4a0f 	b	1bc1090 <TCommTool::$StartAbort(long)>
         ee850:	e5943554 	ldr	r3, [r4, #1364]	; fField1364
         ee854:	e2842f6d 	add	r2, r4, #436	; 0x1b4
         ee858:	e2822b01 	add	r2, r2, #1024	; 0x400
         ee85c:	e1a05002 	mov	r5, r2
         ee860:	e2841f59 	add	r1, r4, #356	; 0x164
         ee864:	e2811b01 	add	r1, r1, #1024	; 0x400
         ee868:	e59404b0 	ldr	r0, [r4, #1200]	; fField1200
         ee86c:	eb650c14 	bl	1a318c4 <TIrGlue::$RegisterMyNameAndLSAPId(unsigned char *, unsigned char *, unsigned long)>
         ee870:	e1b01000 	movs	r1, r0
         ee874:	1affffca 	bne	ee7a4 <TIrDATool::DoDiscoverComplete(long, CList *)+0x1c>
         ee878:	e5941558 	ldr	r1, [r4, #1368]	; fField1368
         ee87c:	e3310000 	teq	r1, #0	; 0x0
         ee880:	11a00004 	movne	r0, r4
         ee884:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         ee888:	1a64ffb4 	bne	1a2e760 <TIrDATool::$StartConnect(unsigned long)>
         ee88c:	e1a03005 	mov	r3, r5
         ee890:	e594055c 	ldr	r0, [r4, #1372]	; fField1372
         ee894:	e2800004 	add	r0, r0, #4	; 0x4
         ee898:	e1a00120 	mov	r0, r0, lsr #2
         ee89c:	e0840100 	add	r0, r4, r0, lsl #2
         ee8a0:	e2802f59 	add	r2, r0, #356	; 0x164
         ee8a4:	e2822b01 	add	r2, r2, #1024	; 0x400
         ee8a8:	e5b404b0 	ldr	r0, [r4, #1200]!	; fField1200
         ee8ac:	e5b4106c 	ldr	r1, [r4, #108]!	; fField108
         ee8b0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ee8b4:	ea6507d4 	b	1a3080c <TIrGlue::$LSAPLookupStart(unsigned long, unsigned char *, unsigned char *)>
    */
}

/**
 * Symbol: TIrDATool::DoLSAPLookupComplete(long, unsigned long)
 * Address: 000ee8b8
 */
TIrDATool::DoLSAPLookupComplete(long, unsigned long) {
    /*
         ee8b8:	e3310000 	teq	r1, #0	; 0x0
         ee8bc:	01a01002 	moveq	r1, r2
         ee8c0:	0a64ffa6 	beq	1a2e760 <TIrDATool::$StartConnect(unsigned long)>
         ee8c4:	1a6b49f1 	bne	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TIrDATool::StartConnect(unsigned long)
 * Address: 000ee8c8
 */
TIrDATool::StartConnect(unsigned long) {
    /*
         ee8c8:	e1a0c00d 	mov	ip, sp
         ee8cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ee8d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         ee8d4:	e1a04000 	mov	r4, r0
         ee8d8:	e1a05001 	mov	r5, r1
         ee8dc:	e3a00000 	mov	r0, #0	; 0x0
         ee8e0:	e5c4063c 	strb	r0, [r4, #1596]	; fField1596
         ee8e4:	e5940640 	ldr	r0, [r4, #1600]	; fField1600
         ee8e8:	e5901000 	ldr	r1, [r0]
         ee8ec:	e1a0e00f 	mov	lr, pc
         ee8f0:	e281f028 	add	pc, r1, #40	; 0x28
         ee8f4:	e59415fc 	ldr	r1, [r4, #1532]	; fField1532
         ee8f8:	e261103c 	rsb	r1, r1, #60	; 0x3c
         ee8fc:	e5943640 	ldr	r3, [r4, #1600]	; fField1600
         ee900:	e1a00003 	mov	r0, r3
         ee904:	e3a02001 	mov	r2, #1	; 0x1
         ee908:	e5933000 	ldr	r3, [r3]
         ee90c:	e1a0e00f 	mov	lr, pc
         ee910:	e283f034 	add	pc, r3, #52	; 0x34
         ee914:	e1a02005 	mov	r2, r5
         ee918:	e5b404b0 	ldr	r0, [r4, #1200]!	; fField1200
         ee91c:	e5b4106c 	ldr	r1, [r4, #108]!	; fField108
         ee920:	e5b43124 	ldr	r3, [r4, #292]!	; fField292
         ee924:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         ee928:	ea6507bb 	b	1a3081c <TIrGlue::$ConnectStart(unsigned long, unsigned long, CBuffer *)>
    */
}

/**
 * Symbol: TIrDATool::DoConnectComplete(long)
 * Address: 000ee92c
 */
TIrDATool::DoConnectComplete(long) {
    /*
         ee92c:	e3310000 	teq	r1, #0	; 0x0
         ee930:	1a6b49d6 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         ee934:	e1a0c00d 	mov	ip, sp
         ee938:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ee93c:	e24cb004 	sub	fp, ip, #4	; 0x4
         ee940:	e1a04000 	mov	r4, r0
         ee944:	e1a05001 	mov	r5, r1
         ee948:	e59004b0 	ldr	r0, [r0, #1200]	; fField1200
         ee94c:	eb0008b3 	bl	f0c20 <TIrGlue::ConnectedAsPrimary(void)>
         ee950:	e3300000 	teq	r0, #0	; 0x0
         ee954:	13a00000 	movne	r0, #0	; 0x0
         ee958:	03a00001 	moveq	r0, #1	; 0x1
         ee95c:	e5c4063c 	strb	r0, [r4, #1596]	; fField1596
         ee960:	e31000ff 	tst	r0, #255	; 0xff
         ee964:	e59404ec 	ldr	r0, [r4, #1260]	; fField1260
         ee968:	03800002 	orreq	r0, r0, #2	; 0x2
         ee96c:	13c00002 	bicne	r0, r0, #2	; 0x2
         ee970:	e58404ec 	str	r0, [r4, #1260]	; fField1260
         ee974:	e1a00004 	mov	r0, r4
         ee978:	eb64ff7e 	bl	1a2e778 <TIrDATool::$UpdateOptionsAfterConnectOrListen(void)>
         ee97c:	e1a01005 	mov	r1, r5
         ee980:	e1a00004 	mov	r0, r4
         ee984:	e5942000 	ldr	r2, [r4]
         ee988:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         ee98c:	e282f054 	add	pc, r2, #84	; 0x54
    */
}

/**
 * Symbol: TIrDATool::ListenStart(void)
 * Address: 000ee990
 */
TIrDATool::ListenStart(void) {
    /*
         ee990:	e1a0c00d 	mov	ip, sp
         ee994:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ee998:	e24cb004 	sub	fp, ip, #4	; 0x4
         ee99c:	e1a04000 	mov	r4, r0
         ee9a0:	e5901000 	ldr	r1, [r0]
         ee9a4:	e1a0e00f 	mov	lr, pc
         ee9a8:	e281fe15 	add	pc, r1, #336	; 0x150
         ee9ac:	e3300000 	teq	r0, #0	; 0x0
         ee9b0:	0a000004 	beq	ee9c8 <TIrDATool::ListenStart(void)+0x38>
         ee9b4:	e1a01000 	mov	r1, r0
         ee9b8:	e1a00004 	mov	r0, r4
         ee9bc:	e5942000 	ldr	r2, [r4]
         ee9c0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         ee9c4:	e282f05c 	add	pc, r2, #92	; 0x5c
         ee9c8:	e3a00000 	mov	r0, #0	; 0x0
         ee9cc:	e5c4063c 	strb	r0, [r4, #1596]	; fField1596
         ee9d0:	e5943554 	ldr	r3, [r4, #1364]	; fField1364
         ee9d4:	e2842f6d 	add	r2, r4, #436	; 0x1b4
         ee9d8:	e2822b01 	add	r2, r2, #1024	; 0x400
         ee9dc:	e2841f59 	add	r1, r4, #356	; 0x164
         ee9e0:	e2811b01 	add	r1, r1, #1024	; 0x400
         ee9e4:	e59404b0 	ldr	r0, [r4, #1200]	; fField1200
         ee9e8:	eb650bb5 	bl	1a318c4 <TIrGlue::$RegisterMyNameAndLSAPId(unsigned char *, unsigned char *, unsigned long)>
         ee9ec:	e3300000 	teq	r0, #0	; 0x0
         ee9f0:	11a01000 	movne	r1, r0
         ee9f4:	11a00004 	movne	r0, r4
         ee9f8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         ee9fc:	1a6b49a3 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         eea00:	e1a00004 	mov	r0, r4
         eea04:	e3a02029 	mov	r2, #41	; 0x29
         eea08:	e3a0185e 	mov	r1, #6160384	; 0x5e0000
         eea0c:	e281141a 	add	r1, r1, #436207616	; 0x1a000000
         eea10:	eb650367 	bl	1a2f7b4 <TIrDATool::$StartTimer2(unsigned long, int)>
         eea14:	e5b404b0 	ldr	r0, [r4, #1200]!	; fField1200
         eea18:	e5b41190 	ldr	r1, [r4, #400]!	; fField400
         eea1c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         eea20:	ea65077f 	b	1a30824 <TIrGlue::$ListenStart(CBuffer *)>
    */
}

/**
 * Symbol: TIrDATool::GetToolName(void)
 * Address: 000eea24
 */
TIrDATool::GetToolName(void) {
    /*
         eea24:	e28f0f00 	add	r0, pc, #0	; 0x0
         eea28:	e1a0f00e 	mov	pc, lr
         eea2c:	49724441 	ldmmidb	r2!, {r0, r6, sl, lr}^
         eea30:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TIrDATool::DoListenComplete(long)
 * Address: 000eea34
 */
TIrDATool::DoListenComplete(long) {
    /*
         eea34:	e1a0c00d 	mov	ip, sp
         eea38:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         eea3c:	e24cb004 	sub	fp, ip, #4	; 0x4
         eea40:	e1a04000 	mov	r4, r0
         eea44:	e1a05001 	mov	r5, r1
         eea48:	eb65035b 	bl	1a2f7bc <TIrDATool::$StopTimer2(void)>
         eea4c:	e3350000 	teq	r5, #0	; 0x0
         eea50:	11a01005 	movne	r1, r5
         eea54:	11a00004 	movne	r0, r4
         eea58:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         eea5c:	1a6b498b 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         eea60:	e59404ec 	ldr	r0, [r4, #1260]	; fField1260
         eea64:	e3c00002 	bic	r0, r0, #2	; 0x2
         eea68:	e58404ec 	str	r0, [r4, #1260]	; fField1260
         eea6c:	e1a00004 	mov	r0, r4
         eea70:	eb64ff40 	bl	1a2e778 <TIrDATool::$UpdateOptionsAfterConnectOrListen(void)>
         eea74:	e1a01005 	mov	r1, r5
         eea78:	e1a00004 	mov	r0, r4
         eea7c:	e5942000 	ldr	r2, [r4]
         eea80:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         eea84:	e282f05c 	add	pc, r2, #92	; 0x5c
    */
}

/**
 * Symbol: TIrDATool::AcceptStart(void)
 * Address: 000eea88
 */
TIrDATool::AcceptStart(void) {
    /*
         eea88:	e1a0c00d 	mov	ip, sp
         eea8c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         eea90:	e24cb004 	sub	fp, ip, #4	; 0x4
         eea94:	e1a04000 	mov	r4, r0
         eea98:	e5900640 	ldr	r0, [r0, #1600]	; fField1600
         eea9c:	e5901000 	ldr	r1, [r0]
         eeaa0:	e1a0e00f 	mov	lr, pc
         eeaa4:	e281f028 	add	pc, r1, #40	; 0x28
         eeaa8:	e59415fc 	ldr	r1, [r4, #1532]	; fField1532
         eeaac:	e261103c 	rsb	r1, r1, #60	; 0x3c
         eeab0:	e5943640 	ldr	r3, [r4, #1600]	; fField1600
         eeab4:	e1a00003 	mov	r0, r3
         eeab8:	e3a02001 	mov	r2, #1	; 0x1
         eeabc:	e5933000 	ldr	r3, [r3]
         eeac0:	e1a0e00f 	mov	lr, pc
         eeac4:	e283f034 	add	pc, r3, #52	; 0x34
         eeac8:	e5b404b0 	ldr	r0, [r4, #1200]!	; fField1200
         eeacc:	e5b41190 	ldr	r1, [r4, #400]!	; fField400
         eead0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         eead4:	ea650754 	b	1a3082c <TIrGlue::$AcceptStart(CBuffer *)>
    */
}

/**
 * Symbol: TIrDATool::DoAcceptComplete(long)
 * Address: 000eead8
 */
TIrDATool::DoAcceptComplete(long) {
    /*
         eead8:	e3310000 	teq	r1, #0	; 0x0
         eeadc:	1a6b496b 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         eeae0:	e5902000 	ldr	r2, [r0]
         eeae4:	e282f064 	add	pc, r2, #100	; 0x64
    */
}

/**
 * Symbol: TIrDATool::UpdateOptionsAfterConnectOrListen(void)
 * Address: 000eeae8
 */
TIrDATool::UpdateOptionsAfterConnectOrListen(void) {
    /*
         eeae8:	e1a0c00d 	mov	ip, sp
         eeaec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         eeaf0:	e24cb004 	sub	fp, ip, #4	; 0x4
         eeaf4:	e1a04000 	mov	r4, r0
         eeaf8:	e59004b0 	ldr	r0, [r0, #1200]	; fField1200
         eeafc:	e2800070 	add	r0, r0, #112	; 0x70
         eeb00:	eb652016 	bl	1a36b60 <TIrQOS::$GetDataSize(void)>
         eeb04:	e5840530 	str	r0, [r4, #1328]	; fField1328
         eeb08:	e59404b0 	ldr	r0, [r4, #1200]	; fField1200
         eeb0c:	e2800070 	add	r0, r0, #112	; 0x70
         eeb10:	eb652013 	bl	1a36b64 <TIrQOS::$GetWindowSize(void)>
         eeb14:	e5840534 	str	r0, [r4, #1332]	; fField1332
         eeb18:	e59404b0 	ldr	r0, [r4, #1200]	; fField1200
         eeb1c:	e2800070 	add	r0, r0, #112	; 0x70
         eeb20:	eb652012 	bl	1a36b70 <TIrQOS::$GetLinkDiscThresholdTime(void)>
         eeb24:	e1a01000 	mov	r1, r0
         eeb28:	e3a009e1 	mov	r0, #3686400	; 0x384000
         eeb2c:	eb6b0f85 	bl	1bb2948 <$__rt_udiv>
         eeb30:	e5840544 	str	r0, [r4, #1348]	; fField1348
         eeb34:	e5940640 	ldr	r0, [r4, #1600]	; fField1600
         eeb38:	e5901000 	ldr	r1, [r0]
         eeb3c:	e1a0e00f 	mov	lr, pc
         eeb40:	e281f03c 	add	pc, r1, #60	; 0x3c
         eeb44:	e5a405fc 	str	r0, [r4, #1532]!	; fField1532
         eeb48:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrDATool::StartOutput(CBufferList *)
 * Address: 000eeb4c
 */
TIrDATool::StartOutput(CBufferList *) {
    /*
         eeb4c:	e1a0c00d 	mov	ip, sp
         eeb50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         eeb54:	e24cb004 	sub	fp, ip, #4	; 0x4
         eeb58:	e1a04000 	mov	r4, r0
         eeb5c:	e1a05001 	mov	r5, r1
         eeb60:	e5d0028e 	ldrb	r0, [r0, #654]
         eeb64:	e3300000 	teq	r0, #0	; 0x0
         eeb68:	1a000005 	bne	eeb84 <TIrDATool::StartOutput(CBufferList *)+0x38>
         eeb6c:	e3e01f97 	mvn	r1, #604	; 0x25c
         eeb70:	e2411b11 	sub	r1, r1, #17408	; 0x4400
         eeb74:	e1a00004 	mov	r0, r4
         eeb78:	e5942000 	ldr	r2, [r4]
         eeb7c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         eeb80:	e282ff63 	add	pc, r2, #396	; 0x18c
         eeb84:	e1a00005 	mov	r0, r5
         eeb88:	e3e02000 	mvn	r2, #0	; 0x0
         eeb8c:	e3a01000 	mov	r1, #0	; 0x0
         eeb90:	e5845270 	str	r5, [r4, #624]	; fField624
         eeb94:	e5953000 	ldr	r3, [r5]
         eeb98:	e1a0e00f 	mov	lr, pc
         eeb9c:	e283f038 	add	pc, r3, #56	; 0x38
         eeba0:	e1a00005 	mov	r0, r5
         eeba4:	e5951000 	ldr	r1, [r5]
         eeba8:	e1a0e00f 	mov	lr, pc
         eebac:	e281f02c 	add	pc, r1, #44	; 0x2c
         eebb0:	e5840274 	str	r0, [r4, #628]	; fField628
         eebb4:	e1a01005 	mov	r1, r5
         eebb8:	e5b404b0 	ldr	r0, [r4, #1200]!	; fField1200
         eebbc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         eebc0:	ea65071d 	b	1a3083c <TIrGlue::$PutStart(CBuffer *)>
    */
}

/**
 * Symbol: TIrDATool::DoPutDataComplete(long, unsigned long)
 * Address: 000eebc4
 */
TIrDATool::DoPutDataComplete(long, unsigned long) {
    /*
         eebc4:	e5903000 	ldr	r3, [r0]
         eebc8:	e283f0d4 	add	pc, r3, #212	; 0xd4
    */
}

/**
 * Symbol: TIrDATool::StartInput(CBufferList *)
 * Address: 000eebcc
 */
TIrDATool::StartInput(CBufferList *) {
    /*
         eebcc:	e1a0c00d 	mov	ip, sp
         eebd0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         eebd4:	e24cb004 	sub	fp, ip, #4	; 0x4
         eebd8:	e1a04000 	mov	r4, r0
         eebdc:	e1a05001 	mov	r5, r1
         eebe0:	e1a00001 	mov	r0, r1
         eebe4:	e584127c 	str	r1, [r4, #636]	; fField636
         eebe8:	e1a03001 	mov	r3, r1
         eebec:	e3e02000 	mvn	r2, #0	; 0x0
         eebf0:	e3a01000 	mov	r1, #0	; 0x0
         eebf4:	e5933000 	ldr	r3, [r3]
         eebf8:	e1a0e00f 	mov	lr, pc
         eebfc:	e283f038 	add	pc, r3, #56	; 0x38
         eec00:	e1a00005 	mov	r0, r5
         eec04:	e5951000 	ldr	r1, [r5]
         eec08:	e1a0e00f 	mov	lr, pc
         eec0c:	e281f02c 	add	pc, r1, #44	; 0x2c
         eec10:	e5840280 	str	r0, [r4, #640]	; fField640
         eec14:	e5d41288 	ldrb	r1, [r4, #648]	; fField648
         eec18:	e3310000 	teq	r1, #0	; 0x0
         eec1c:	0a000005 	beq	eec38 <TIrDATool::StartInput(CBufferList *)+0x6c>
         eec20:	e1a00004 	mov	r0, r4
         eec24:	e3a02000 	mov	r2, #0	; 0x0
         eec28:	e3a0107e 	mov	r1, #126	; 0x7e
         eec2c:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
         eec30:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         eec34:	ea6502d3 	b	1a2f788 <TIrDATool::$DoGetDataComplete(long, unsigned long)>
         eec38:	e5d41289 	ldrb	r1, [r4, #649]	; fField649
         eec3c:	e3310000 	teq	r1, #0	; 0x0
         eec40:	0a000002 	beq	eec50 <TIrDATool::StartInput(CBufferList *)+0x84>
         eec44:	e5941284 	ldr	r1, [r4, #644]	; fField644
         eec48:	e1510000 	cmp	r1, r0
         eec4c:	b1a00001 	movlt	r0, r1
         eec50:	e1a02000 	mov	r2, r0
         eec54:	e1a01005 	mov	r1, r5
         eec58:	e5b404b0 	ldr	r0, [r4, #1200]!	; fField1200
         eec5c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         eec60:	ea6506f3 	b	1a30834 <TIrGlue::$GetStart(CBuffer *, unsigned long)>
    */
}

/**
 * Symbol: TIrDATool::DoGetDataComplete(long, unsigned long)
 * Address: 000eec64
 */
TIrDATool::DoGetDataComplete(long, unsigned long) {
    /*
         eec64:	e1a0c000 	mov	ip, r0
         eec68:	e5900280 	ldr	r0, [r0, #640]	; fField640
         eec6c:	e0400002 	sub	r0, r0, r2
         eec70:	e1a03002 	mov	r3, r2
         eec74:	e58c0280 	str	r0, [ip, #640]	; fField640
         eec78:	e1a0000c 	mov	r0, ip
         eec7c:	e3a02000 	mov	r2, #0	; 0x0
         eec80:	e59cc000 	ldr	ip, [ip]
         eec84:	e28cf0ec 	add	pc, ip, #236	; 0xec
    */
}

/**
 * Symbol: TIrDATool::KillPut(void)
 * Address: 000eec88
 */
TIrDATool::KillPut(void) {
    /*
         eec88:	e59004b0 	ldr	r0, [r0, #1200]	; fField1200
         eec8c:	ea6506ee 	b	1a3084c <TIrGlue::$CancelPutStart(void)>
    */
}

/**
 * Symbol: TIrDATool::DoCancelPutComplete(long)
 * Address: 000eec90
 */
TIrDATool::DoCancelPutComplete(long) {
    /*
         eec90:	e5902000 	ldr	r2, [r0]
         eec94:	e282f0dc 	add	pc, r2, #220	; 0xdc
    */
}

/**
 * Symbol: TIrDATool::TaskConstructor(void)
 * Address: 000eec98
 */
TIrDATool::TaskConstructor(void) {
    /*
         eec98:	e1a0c00d 	mov	ip, sp
         eec9c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         eeca0:	e24cb004 	sub	fp, ip, #4	; 0x4
         eeca4:	e1a04000 	mov	r4, r0
         eeca8:	eb64b02f 	bl	1a1ad6c <TAsyncSerTool::$TaskConstructor(void)>
         eecac:	e1b05000 	movs	r5, r0
         eecb0:	1a00004a 	bne	eede0 <TIrDATool::TaskConstructor(void)+0x148>
         eecb4:	e3a00002 	mov	r0, #2	; 0x2
         eecb8:	e5840300 	str	r0, [r4, #768]	; fField768
         eecbc:	e2842fe1 	add	r2, r4, #900	; 0x384
         eecc0:	e2841feb 	add	r1, r4, #940	; 0x3ac
         eecc4:	e3a00000 	mov	r0, #0	; 0x0
         eecc8:	eb6523b5 	bl	1a37ba4 <TIrSIR::$__ct(TCircleBuf *, TCircleBuf *)>
         eeccc:	e58404b4 	str	r0, [r4, #1204]	; fField1204
         eecd0:	e3300000 	teq	r0, #0	; 0x0
         eecd4:	0a00003f 	beq	eedd8 <TIrDATool::TaskConstructor(void)+0x140>
         eecd8:	e3a00000 	mov	r0, #0	; 0x0
         eecdc:	eb6506c7 	bl	1a30800 <TIrGlue::$__ct(void)>
         eece0:	e58404b0 	str	r0, [r4, #1200]	; fField1200
         eece4:	e3300000 	teq	r0, #0	; 0x0
         eece8:	0a00003a 	beq	eedd8 <TIrDATool::TaskConstructor(void)+0x140>
         eecec:	e1a01004 	mov	r1, r4
         eecf0:	eb6506d7 	bl	1a30854 <TIrGlue::$Init(TIrDATool *)>
         eecf4:	e1b05000 	movs	r5, r0
         eecf8:	1a000038 	bne	eede0 <TIrDATool::TaskConstructor(void)+0x148>
         eecfc:	e2840f91 	add	r0, r4, #580	; 0x244
         eed00:	e2800b01 	add	r0, r0, #1024	; 0x400
         eed04:	e1a06000 	mov	r6, r0
         eed08:	e3a01001 	mov	r1, #1	; 0x1
         eed0c:	eb6b9b60 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         eed10:	e1b05000 	movs	r5, r0
         eed14:	1a000031 	bne	eede0 <TIrDATool::TaskConstructor(void)+0x148>
         eed18:	e5960000 	ldr	r0, [r6]
         eed1c:	e5840654 	str	r0, [r4, #1620]	; fField1620
         eed20:	e59f70ac 	ldr	r7, [pc, #ac]	; eedd4 <TIrDATool::TaskConstructor(void)+0x13c>
         eed24:	e3a06000 	mov	r6, #0	; 0x0
         eed28:	e5846660 	str	r6, [r4, #1632]	; fField1632
         eed2c:	e584765c 	str	r7, [r4, #1628]	; fField1628
         eed30:	e5846664 	str	r6, [r4, #1636]	; fField1636
         eed34:	e2840f9a 	add	r0, r4, #616	; 0x268
         eed38:	e2800b01 	add	r0, r0, #1024	; 0x400
         eed3c:	e1a08000 	mov	r8, r0
         eed40:	e3a01001 	mov	r1, #1	; 0x1
         eed44:	eb6b9b52 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         eed48:	e1b05000 	movs	r5, r0
         eed4c:	1a000023 	bne	eede0 <TIrDATool::TaskConstructor(void)+0x148>
         eed50:	e5980000 	ldr	r0, [r8]
         eed54:	e5840678 	str	r0, [r4, #1656]	; fField1656
         eed58:	e5846684 	str	r6, [r4, #1668]	; fField1668
         eed5c:	e5847680 	str	r7, [r4, #1664]	; fField1664
         eed60:	e3a00004 	mov	r0, #4	; 0x4
         eed64:	e58404fc 	str	r0, [r4, #1276]	; fField1276
         eed68:	e3a00000 	mov	r0, #0	; 0x0
         eed6c:	e5846688 	str	r6, [r4, #1672]	; fField1672
         eed70:	eb6bd523 	bl	1be4204 <CBufferSegment::$__ct(void)>
         eed74:	e5840640 	str	r0, [r4, #1600]	; fField1600
         eed78:	e3300000 	teq	r0, #0	; 0x0
         eed7c:	0a000015 	beq	eedd8 <TIrDATool::TaskConstructor(void)+0x140>
         eed80:	e3e03000 	mvn	r3, #0	; 0x0
         eed84:	e3a02000 	mov	r2, #0	; 0x0
         eed88:	e92d000c 	stmdb	sp!, {r2, r3}
         eed8c:	e2841c06 	add	r1, r4, #1536	; 0x600
         eed90:	e3a03000 	mov	r3, #0	; 0x0
         eed94:	e3a0203c 	mov	r2, #60	; 0x3c
         eed98:	eb6be9c3 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         eed9c:	e28dd008 	add	sp, sp, #8	; 0x8
         eeda0:	e1b05000 	movs	r5, r0
         eeda4:	1a00000d 	bne	eede0 <TIrDATool::TaskConstructor(void)+0x148>
         eeda8:	e3a00001 	mov	r0, #1	; 0x1
         eedac:	e5840154 	str	r0, [r4, #340]	; fField340
         eedb0:	e3a00008 	mov	r0, #8	; 0x8
         eedb4:	e5840158 	str	r0, [r4, #344]	; fField344
         eedb8:	e3a00402 	mov	r0, #33554432	; 0x2000000
         eedbc:	e2400c02 	sub	r0, r0, #512	; 0x200
         eedc0:	e584015c 	str	r0, [r4, #348]	; fField348
         eedc4:	e3e00000 	mvn	r0, #0	; 0x0
         eedc8:	e5a40170 	str	r0, [r4, #368]!	; fField368
         eedcc:	e1a00006 	mov	r0, r6
         eedd0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         eedd4:	69726461 	ldmvsdb	r2!, {r0, r5, r6, sl, sp, lr}^
         eedd8:	e3a050a8 	mov	r5, #168	; 0xa8
         eeddc:	e2455b07 	sub	r5, r5, #7168	; 0x1c00
         eede0:	e1a00004 	mov	r0, r4
         eede4:	e5941000 	ldr	r1, [r4]
         eede8:	e1a0e00f 	mov	lr, pc
         eedec:	e281f00c 	add	pc, r1, #12	; 0xc
         eedf0:	e1a00005 	mov	r0, r5
         eedf4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TIrDATool::KillGet(void)
 * Address: 000eedf8
 */
TIrDATool::KillGet(void) {
    /*
         eedf8:	e59004b0 	ldr	r0, [r0, #1200]	; fField1200
         eedfc:	ea650690 	b	1a30844 <TIrGlue::$CancelGetStart(void)>
    */
}

/**
 * Symbol: TIrDATool::DoCancelGetComplete(long)
 * Address: 000eee00
 */
TIrDATool::DoCancelGetComplete(long) {
    /*
         eee00:	e5902000 	ldr	r2, [r0]
         eee04:	e282f0f4 	add	pc, r2, #244	; 0xf4
    */
}

/**
 * Symbol: TIrDATool::StartTerminate(long)
 * Address: 000eee08
 */
TIrDATool::StartTerminate(long) {
    /*
         eee08:	ea6b48a0 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TIrDATool::TerminateConnection(void)
 * Address: 000eee0c
 */
TIrDATool::TerminateConnection(void) {
    /*
         eee0c:	e5901024 	ldr	r1, [r0, #36]	; fField36
         eee10:	e59004b0 	ldr	r0, [r0, #1200]	; fField1200
         eee14:	ea65068f 	b	1a30858 <TIrGlue::$DisconnectStart(long)>
    */
}

/**
 * Symbol: TIrDATool::TerminateComplete(void)
 * Address: 000eee18
 */
TIrDATool::TerminateComplete(void) {
    /*
         eee18:	e1a0c00d 	mov	ip, sp
         eee1c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         eee20:	e24cb004 	sub	fp, ip, #4	; 0x4
         eee24:	e1a04000 	mov	r4, r0
         eee28:	e59004b4 	ldr	r0, [r0, #1204]	; fField1204
         eee2c:	e3300000 	teq	r0, #0	; 0x0
         eee30:	1b652362 	blne	1a37bc0 <TIrSIR::$Reset(void)>
         eee34:	e1a00004 	mov	r0, r4
         eee38:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         eee3c:	ea64b3dd 	b	1a1bdb8 <TSerTool::$TerminateComplete(void)>
    */
}

/**
 * Symbol: TIrDATool::PostAsyncEvent(unsigned long)
 * Address: 000eee40
 */
TIrDATool::PostAsyncEvent(unsigned long) {
    /*
         eee40:	e1a0c00d 	mov	ip, sp
         eee44:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         eee48:	e24cb004 	sub	fp, ip, #4	; 0x4
         eee4c:	e1a04000 	mov	r4, r0
         eee50:	e1a05001 	mov	r5, r1
         eee54:	e24dd024 	sub	sp, sp, #36	; 0x24
         eee58:	e1a0000d 	mov	r0, sp
         eee5c:	eb6c0259 	bl	1bef7c8 <TCommToolGetEventReply::$__ct(void)>
         eee60:	e3a00001 	mov	r0, #1	; 0x1
         eee64:	e58d0010 	str	r0, [sp, #16]
         eee68:	e28d0014 	add	r0, sp, #20	; 0x14
         eee6c:	eb6b92d9 	bl	1bd39d8 <$GetGlobalTime>
         eee70:	e58d501c 	str	r5, [sp, #28]
         eee74:	e59f001c 	ldr	r0, [pc, #1c]	; eee98 <TIrDATool::PostAsyncEvent(unsigned long)+0x58>
         eee78:	e58d0020 	str	r0, [sp, #32]
         eee7c:	e1a0100d 	mov	r1, sp
         eee80:	e1a00004 	mov	r0, r4
         eee84:	e3a02000 	mov	r2, #0	; 0x0
         eee88:	e5943000 	ldr	r3, [r4]
         eee8c:	e1a0e00f 	mov	lr, pc
         eee90:	e283f03c 	add	pc, r3, #60	; 0x3c
         eee94:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         eee98:	69726461 	ldmvsdb	r2!, {r0, r5, r6, sl, sp, lr}^
    */
}

/**
 * Symbol: TIrDATool::StartTimer1(unsigned long, int)
 * Address: 000eee9c
 */
TIrDATool::StartTimer1(unsigned long, int) {
    /*
         eee9c:	e1a0c00d 	mov	ip, sp
         eeea0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         eeea4:	e24cb004 	sub	fp, ip, #4	; 0x4
         eeea8:	e1a04000 	mov	r4, r0
         eeeac:	e5802664 	str	r2, [r0, #1636]	; fField1636
         eeeb0:	e24dd010 	sub	sp, sp, #16	; 0x10
         eeeb4:	e1a0000d 	mov	r0, sp
         eeeb8:	eb6bbbf4 	bl	1bdde90 <$TimeFromNow>
         eeebc:	e28d0008 	add	r0, sp, #8	; 0x8
         eeec0:	e89d5000 	ldmia	sp, {ip, lr}
         eeec4:	e8805000 	stmia	r0, {ip, lr}
         eeec8:	e284c08c 	add	ip, r4, #140	; 0x8c
         eeecc:	e284ef91 	add	lr, r4, #580	; 0x244
         eeed0:	e28eeb01 	add	lr, lr, #1024	; 0x400
         eeed4:	e2844f96 	add	r4, r4, #600	; 0x258
         eeed8:	e2844b01 	add	r4, r4, #1024	; 0x400
         eeedc:	e3a02000 	mov	r2, #0	; 0x0
         eeee0:	e28d3008 	add	r3, sp, #8	; 0x8
         eeee4:	e3a05000 	mov	r5, #0	; 0x0
         eeee8:	e3a01000 	mov	r1, #0	; 0x0
         eeeec:	e3a00001 	mov	r0, #1	; 0x1
         eeef0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         eeef4:	e1a03005 	mov	r3, r5
         eeef8:	e3a02010 	mov	r2, #16	; 0x10
         eeefc:	e92d000c 	stmdb	sp!, {r2, r3}
         eef00:	e1a03004 	mov	r3, r4
         eef04:	e1a0000c 	mov	r0, ip
         eef08:	e3a02000 	mov	r2, #0	; 0x0
         eef0c:	e59e1000 	ldr	r1, [lr]
         eef10:	eb6baf8c 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
         eef14:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrDATool::StopTimer1(void)
 * Address: 000eef18
 */
TIrDATool::StopTimer1(void) {
    /*
         eef18:	e1a0c00d 	mov	ip, sp
         eef1c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         eef20:	e24cb004 	sub	fp, ip, #4	; 0x4
         eef24:	e1a04000 	mov	r4, r0
         eef28:	e5900664 	ldr	r0, [r0, #1636]	; fField1636
         eef2c:	e3300000 	teq	r0, #0	; 0x0
         eef30:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         eef34:	e2840f91 	add	r0, r4, #580	; 0x244
         eef38:	e2800b01 	add	r0, r0, #1024	; 0x400
         eef3c:	eb6b7e02 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
         eef40:	e3a00000 	mov	r0, #0	; 0x0
         eef44:	e5a40664 	str	r0, [r4, #1636]!	; fField1636
         eef48:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrDATool::StartTimer2(unsigned long, int)
 * Address: 000eef4c
 */
TIrDATool::StartTimer2(unsigned long, int) {
    /*
         eef4c:	e1a0c00d 	mov	ip, sp
         eef50:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         eef54:	e24cb004 	sub	fp, ip, #4	; 0x4
         eef58:	e1a04000 	mov	r4, r0
         eef5c:	e5802688 	str	r2, [r0, #1672]	; fField1672
         eef60:	e24dd010 	sub	sp, sp, #16	; 0x10
         eef64:	e1a0000d 	mov	r0, sp
         eef68:	eb6bbbc8 	bl	1bdde90 <$TimeFromNow>
         eef6c:	e28d0008 	add	r0, sp, #8	; 0x8
         eef70:	e89d5000 	ldmia	sp, {ip, lr}
         eef74:	e8805000 	stmia	r0, {ip, lr}
         eef78:	e284c08c 	add	ip, r4, #140	; 0x8c
         eef7c:	e284ef9a 	add	lr, r4, #616	; 0x268
         eef80:	e28eeb01 	add	lr, lr, #1024	; 0x400
         eef84:	e2844f9f 	add	r4, r4, #636	; 0x27c
         eef88:	e2844b01 	add	r4, r4, #1024	; 0x400
         eef8c:	e3a02000 	mov	r2, #0	; 0x0
         eef90:	e28d3008 	add	r3, sp, #8	; 0x8
         eef94:	e3a05000 	mov	r5, #0	; 0x0
         eef98:	e3a01000 	mov	r1, #0	; 0x0
         eef9c:	e3a00001 	mov	r0, #1	; 0x1
         eefa0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         eefa4:	e1a03005 	mov	r3, r5
         eefa8:	e3a02010 	mov	r2, #16	; 0x10
         eefac:	e92d000c 	stmdb	sp!, {r2, r3}
         eefb0:	e1a03004 	mov	r3, r4
         eefb4:	e1a0000c 	mov	r0, ip
         eefb8:	e3a02000 	mov	r2, #0	; 0x0
         eefbc:	e59e1000 	ldr	r1, [lr]
         eefc0:	eb6baf60 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
         eefc4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrDATool::StopTimer2(void)
 * Address: 000eefc8
 */
TIrDATool::StopTimer2(void) {
    /*
         eefc8:	e1a0c00d 	mov	ip, sp
         eefcc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         eefd0:	e24cb004 	sub	fp, ip, #4	; 0x4
         eefd4:	e1a04000 	mov	r4, r0
         eefd8:	e5900688 	ldr	r0, [r0, #1672]	; fField1672
         eefdc:	e3300000 	teq	r0, #0	; 0x0
         eefe0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         eefe4:	e2840f9a 	add	r0, r4, #616	; 0x268
         eefe8:	e2800b01 	add	r0, r0, #1024	; 0x400
         eefec:	eb6b7dd6 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
         eeff0:	e3a00000 	mov	r0, #0	; 0x0
         eeff4:	e5a40688 	str	r0, [r4, #1672]!	; fField1672
         eeff8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TIrDATool::TaskDestructor(void)
 * Address: 000eeffc
 */
TIrDATool::TaskDestructor(void) {
    /*
         eeffc:	e1a0c00d 	mov	ip, sp
         ef000:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ef004:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef008:	e1a04000 	mov	r4, r0
         ef00c:	eb64b35e 	bl	1a1bd8c <TAsyncSerTool::$TaskDestructor(void)>
         ef010:	e3a05000 	mov	r5, #0	; 0x0
         ef014:	e59404b0 	ldr	r0, [r4, #1200]	; fField1200
         ef018:	e3300000 	teq	r0, #0	; 0x0
         ef01c:	0a000003 	beq	ef030 <TIrDATool::TaskDestructor(void)+0x34>
         ef020:	e3a01001 	mov	r1, #1	; 0x1
         ef024:	e1a0e00f 	mov	lr, pc
         ef028:	e590f000 	ldr	pc, [r0]
         ef02c:	e58454b0 	str	r5, [r4, #1200]	; fField1200
         ef030:	e59404b4 	ldr	r0, [r4, #1204]	; fField1204
         ef034:	e3300000 	teq	r0, #0	; 0x0
         ef038:	0a000003 	beq	ef04c <TIrDATool::TaskDestructor(void)+0x50>
         ef03c:	e3a01001 	mov	r1, #1	; 0x1
         ef040:	e1a0e00f 	mov	lr, pc
         ef044:	e590f000 	ldr	pc, [r0]
         ef048:	e58454b4 	str	r5, [r4, #1204]	; fField1204
         ef04c:	e5940640 	ldr	r0, [r4, #1600]	; fField1600
         ef050:	e3300000 	teq	r0, #0	; 0x0
         ef054:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         ef058:	e3a01001 	mov	r1, #1	; 0x1
         ef05c:	e1a0e00f 	mov	lr, pc
         ef060:	e590f000 	ldr	pc, [r0]
         ef064:	e5a45640 	str	r5, [r4, #1600]!	; fField1600
         ef068:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrDATool::ChangeSpeed(unsigned long)
 * Address: 000ef06c
 */
TIrDATool::ChangeSpeed(unsigned long) {
    /*
         ef06c:	ea647996 	b	1a0d6cc <TSerTool::$ChangeSpeed(unsigned long)>
    */
}

/**
 * Symbol: TIrDATool::StartTransmit(TIrLAPPutBuffer *, unsigned long)
 * Address: 000ef070
 */
TIrDATool::StartTransmit(TIrLAPPutBuffer *, unsigned long) {
    /*
         ef070:	e1a0c00d 	mov	ip, sp
         ef074:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         ef078:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef07c:	e1a04000 	mov	r4, r0
         ef080:	e1a05001 	mov	r5, r1
         ef084:	e1a06002 	mov	r6, r2
         ef088:	e590030c 	ldr	r0, [r0, #780]	; fField780
         ef08c:	e3100040 	tst	r0, #64	; 0x40
         ef090:	13a01001 	movne	r1, #1	; 0x1
         ef094:	15940304 	ldrne	r0, [r4, #772]	; fField772
         ef098:	1b0a5710 	blne	384ce0 <TSerialChip::ConfigureForOutput(unsigned char)>
         ef09c:	e1a00004 	mov	r0, r4
         ef0a0:	eb6485e7 	bl	1a10844 <TAsyncSerTool::$FlushOutputBytes(void)>
         ef0a4:	e1a02006 	mov	r2, r6
         ef0a8:	e1a01005 	mov	r1, r5
         ef0ac:	e59404b4 	ldr	r0, [r4, #1204]	; fField1204
         ef0b0:	eb6522c3 	bl	1a37bc4 <TIrSIR::$StartTransmit(TIrLAPPutBuffer *, unsigned long)>
         ef0b4:	e1a00004 	mov	r0, r4
         ef0b8:	e5941000 	ldr	r1, [r4]
         ef0bc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         ef0c0:	e281fe17 	add	pc, r1, #368	; 0x170
    */
}

/**
 * Symbol: TIrDATool::StopTransmit(void)
 * Address: 000ef0c4
 */
TIrDATool::StopTransmit(void) {
    /*
         ef0c4:	e1a0c00d 	mov	ip, sp
         ef0c8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ef0cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef0d0:	e1a04000 	mov	r4, r0
         ef0d4:	e5900498 	ldr	r0, [r0, #1176]	; fField1176
         ef0d8:	e3c00202 	bic	r0, r0, #536870912	; 0x20000000
         ef0dc:	e5840498 	str	r0, [r4, #1176]	; fField1176
         ef0e0:	e594030c 	ldr	r0, [r4, #780]	; fField780
         ef0e4:	e3100040 	tst	r0, #64	; 0x40
         ef0e8:	13a01000 	movne	r1, #0	; 0x0
         ef0ec:	15940304 	ldrne	r0, [r4, #772]	; fField772
         ef0f0:	1b0a56fa 	blne	384ce0 <TSerialChip::ConfigureForOutput(unsigned char)>
         ef0f4:	e1a00004 	mov	r0, r4
         ef0f8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         ef0fc:	ea6485cf 	b	1a10840 <TAsyncSerTool::$FlushInputBytes(void)>
    */
}

/**
 * Symbol: TIrDATool::TxDataSent(void)
 * Address: 000ef100
 */
TIrDATool::TxDataSent(void) {
    /*
         ef100:	e1a0c00d 	mov	ip, sp
         ef104:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ef108:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef10c:	e1a04000 	mov	r4, r0
         ef110:	e2800fe1 	add	r0, r0, #900	; 0x384
         ef114:	eb6c5c84 	bl	1c0632c <TCircleBuf::$BufferCount(void)>
         ef118:	e3300000 	teq	r0, #0	; 0x0
         ef11c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         ef120:	e1a00004 	mov	r0, r4
         ef124:	e5941000 	ldr	r1, [r4]
         ef128:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         ef12c:	e281fe17 	add	pc, r1, #368	; 0x170
    */
}

/**
 * Symbol: TIrDATool::DoOutput(void)
 * Address: 000ef130
 */
TIrDATool::DoOutput(void) {
    /*
         ef130:	e1a0c00d 	mov	ip, sp
         ef134:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ef138:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef13c:	e1a04000 	mov	r4, r0
         ef140:	e59004b4 	ldr	r0, [r0, #1204]	; fField1204
         ef144:	eb65229f 	bl	1a37bc8 <TIrSIR::$FillOutputBuffer(void)>
         ef148:	e3300001 	teq	r0, #1	; 0x1
         ef14c:	1a000006 	bne	ef16c <TIrDATool::DoOutput(void)+0x3c>
         ef150:	e5940498 	ldr	r0, [r4, #1176]	; fField1176
         ef154:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
         ef158:	e5840498 	str	r0, [r4, #1176]	; fField1176
         ef15c:	e1a00004 	mov	r0, r4
         ef160:	e3a01001 	mov	r1, #1	; 0x1
         ef164:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         ef168:	ea647d79 	b	1a0e754 <TAsyncSerTool::$ContinueOutputST(unsigned char)>
         ef16c:	e1a00004 	mov	r0, r4
         ef170:	eb650194 	bl	1a2f7c8 <TIrDATool::$StopTransmit(void)>
         ef174:	e5b404b0 	ldr	r0, [r4, #1200]!	; fField1200
         ef178:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         ef17c:	ea0006a1 	b	f0c08 <TIrGlue::OutputComplete(void)>
    */
}

/**
 * Symbol: TIrDATool::StartReceive(CBufferSegment *, unsigned char, unsigned char)
 * Address: 000ef180
 */
TIrDATool::StartReceive(CBufferSegment *, unsigned char, unsigned char) {
    /*
         ef180:	e1a0c00d 	mov	ip, sp
         ef184:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         ef188:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef18c:	e1a04000 	mov	r4, r0
         ef190:	e1a05001 	mov	r5, r1
         ef194:	e20260ff 	and	r6, r2, #255	; 0xff
         ef198:	e20370ff 	and	r7, r3, #255	; 0xff
         ef19c:	e3a010fe 	mov	r1, #254	; 0xfe
         ef1a0:	e2811c47 	add	r1, r1, #18176	; 0x4700
         ef1a4:	eb64c7c4 	bl	1a210bc <TAsyncSerTool::$SetInputSendForIntDelay(unsigned long)>
         ef1a8:	e1a03007 	mov	r3, r7
         ef1ac:	e1a02006 	mov	r2, r6
         ef1b0:	e1a01005 	mov	r1, r5
         ef1b4:	e59404b4 	ldr	r0, [r4, #1204]	; fField1204
         ef1b8:	eb652284 	bl	1a37bd0 <TIrSIR::$StartReceive(CBufferSegment *, unsigned char, unsigned char)>
         ef1bc:	e1a00004 	mov	r0, r4
         ef1c0:	e5941000 	ldr	r1, [r4]
         ef1c4:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         ef1c8:	e281ff5e 	add	pc, r1, #376	; 0x178
    */
}

/**
 * Symbol: TIrDATool::StopReceive(void)
 * Address: 000ef1cc
 */
TIrDATool::StopReceive(void) {
    /*
         ef1cc:	e5901498 	ldr	r1, [r0, #1176]	; fField1176
         ef1d0:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
         ef1d4:	e5a01498 	str	r1, [r0, #1176]!	; fField1176
         ef1d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrDATool::RxDataAvailable(void)
 * Address: 000ef1dc
 */
TIrDATool::RxDataAvailable(void) {
    /*
         ef1dc:	e5901000 	ldr	r1, [r0]
         ef1e0:	e281ff5e 	add	pc, r1, #376	; 0x178
    */
}

/**
 * Symbol: TIrDATool::DoInput(void)
 * Address: 000ef1e4
 */
TIrDATool::DoInput(void) {
    /*
         ef1e4:	e1a0c00d 	mov	ip, sp
         ef1e8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ef1ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef1f0:	e1a04000 	mov	r4, r0
         ef1f4:	e5900498 	ldr	r0, [r0, #1176]	; fField1176
         ef1f8:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
         ef1fc:	e5840498 	str	r0, [r4, #1176]	; fField1176
         ef200:	e1a00004 	mov	r0, r4
         ef204:	eb64cbc0 	bl	1a2210c <TAsyncSerTool::$SyncInputBuffer(void)>
         ef208:	e59404b4 	ldr	r0, [r4, #1204]	; fField1204
         ef20c:	eb652270 	bl	1a37bd4 <TIrSIR::$EmptyInputBuffer(void)>
         ef210:	e3300001 	teq	r0, #1	; 0x1
         ef214:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         ef218:	e1a00004 	mov	r0, r4
         ef21c:	eb65016d 	bl	1a2f7d8 <TIrDATool::$StopReceive(void)>
         ef220:	e59404b4 	ldr	r0, [r4, #1204]	; fField1204
         ef224:	e5d02027 	ldrb	r2, [r0, #39]
         ef228:	e5d01026 	ldrb	r1, [r0, #38]
         ef22c:	e5b404b0 	ldr	r0, [r4, #1200]!	; fField1200
         ef230:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         ef234:	ea000675 	b	f0c10 <TIrGlue::InputComplete(unsigned char, unsigned char)>
    */
}

/**
 * Symbol: TIrDATool::MediaBusy(void)
 * Address: 000ef238
 */
TIrDATool::MediaBusy(void) {
    /*
         ef238:	e59004b4 	ldr	r0, [r0, #1204]	; fField1204
         ef23c:	ea652259 	b	1a37ba8 <TIrSIR::$MediaBusy(void)>
    */
}

/**
 * Symbol: TIrDATool::GetSizeOf(void)
 * Address: 000ef240
 */
TIrDATool::GetSizeOf(void) {
    /*
         ef240:	e3a00e69 	mov	r0, #1680	; 0x690
         ef244:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrDATool::ReceivingInput(void)
 * Address: 000ef248
 */
TIrDATool::ReceivingInput(void) {
    /*
         ef248:	e59004b4 	ldr	r0, [r0, #1204]	; fField1204
         ef24c:	ea652256 	b	1a37bac <TIrSIR::$ReceivingInput(void)>
    */
}

/**
 * Symbol: TIrDATool::SetMediaBusy(unsigned char)
 * Address: 000ef250
 */
TIrDATool::SetMediaBusy(unsigned char) {
    /*
         ef250:	e20110ff 	and	r1, r1, #255	; 0xff
         ef254:	e59004b4 	ldr	r0, [r0, #1204]	; fField1204
         ef258:	ea652254 	b	1a37bb0 <TIrSIR::$SetMediaBusy(unsigned char)>
    */
}

/**
 * Symbol: TIrDATool::AllocateBuffers(void)
 * Address: 000ef25c
 */
TIrDATool::AllocateBuffers(void) {
    /*
         ef25c:	e1a0c00d 	mov	ip, sp
         ef260:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         ef264:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef268:	e1a04000 	mov	r4, r0
         ef26c:	e59013e4 	ldr	r1, [r0, #996]	; fField996
         ef270:	e5900530 	ldr	r0, [r0, #1328]	; fField1328
         ef274:	e2800020 	add	r0, r0, #32	; 0x20
         ef278:	e1510000 	cmp	r1, r0
         ef27c:	358403e4 	strcc	r0, [r4, #996]	; fField996
         ef280:	e59403e4 	ldr	r0, [r4, #996]	; fField996
         ef284:	e59413e0 	ldr	r1, [r4, #992]	; fField992
         ef288:	e1510000 	cmp	r1, r0
         ef28c:	358403e0 	strcc	r0, [r4, #992]	; fField992
         ef290:	e24dd010 	sub	sp, sp, #16	; 0x10
         ef294:	e1a0000d 	mov	r0, sp
         ef298:	ebffdbbc 	bl	e6190 <THMOSerIRLinkConfig::__ct(void)>
         ef29c:	e59d0008 	ldr	r0, [sp, #8]
         ef2a0:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         ef2a4:	e3800c02 	orr	r0, r0, #512	; 0x200
         ef2a8:	e58d0008 	str	r0, [sp, #8]
         ef2ac:	e3a00002 	mov	r0, #2	; 0x2
         ef2b0:	e5cd000c 	strb	r0, [sp, #12]
         ef2b4:	e1a0100d 	mov	r1, sp
         ef2b8:	e5940304 	ldr	r0, [r4, #772]	; fField772
         ef2bc:	eb0a5672 	bl	384c8c <TSerialChip::ProcessOption(TOption *)>
         ef2c0:	e1a00004 	mov	r0, r4
         ef2c4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         ef2c8:	ea6470bb 	b	1a0b5bc <TAsyncSerTool::$AllocateBuffers(void)>
    */
}

/**
 * Symbol: TIrDATool::SetSerialChipSelect(TCMOSerialHardware *)
 * Address: 000ef2cc
 */
TIrDATool::SetSerialChipSelect(TCMOSerialHardware *) {
    /*
         ef2cc:	e1a0c00d 	mov	ip, sp
         ef2d0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         ef2d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         ef2d8:	e1a04000 	mov	r4, r0
         ef2dc:	e1a05001 	mov	r5, r1
         ef2e0:	eb64c778 	bl	1a210c8 <TSerTool::$SetSerialChipSelect(TCMOSerialHardware *)>
         ef2e4:	e5941300 	ldr	r1, [r4, #768]	; fField768
         ef2e8:	e3310000 	teq	r1, #0	; 0x0
         ef2ec:	03a01002 	moveq	r1, #2	; 0x2
         ef2f0:	05a51014 	streq	r1, [r5, #20]!
         ef2f4:	05a41300 	streq	r1, [r4, #768]!	; fField768
         ef2f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TIrDATool::HandleRequest(TUMsgToken &, unsigned long)
 * Address: 000ef2fc
 */
TIrDATool::HandleRequest(TUMsgToken &, unsigned long) {
    /*
         ef2fc:	e92d4000 	stmdb	sp!, {lr}
         ef300:	e5913000 	ldr	r3, [r1]
         ef304:	e3a0c000 	mov	ip, #0	; 0x0
         ef308:	e590e654 	ldr	lr, [r0, #1620]	; fField1620
         ef30c:	e13e0003 	teq	lr, r3
         ef310:	05901664 	ldreq	r1, [r0, #1636]	; fField1636
         ef314:	0580c664 	streq	ip, [r0, #1636]	; fField1636
         ef318:	0a00000a 	beq	ef348 <TIrDATool::HandleRequest(TUMsgToken &, unsigned long)+0x4c>
         ef31c:	e590e678 	ldr	lr, [r0, #1656]	; fField1656
         ef320:	e13e0003 	teq	lr, r3
         ef324:	18bd4000 	ldmneia	sp!, {lr}
         ef328:	1a648d88 	bne	1a12950 <TSerTool::$HandleRequest(TUMsgToken &, unsigned long)>
         ef32c:	e5901688 	ldr	r1, [r0, #1672]	; fField1672
         ef330:	e580c688 	str	ip, [r0, #1672]	; fField1672
         ef334:	e3310029 	teq	r1, #41	; 0x29
         ef338:	03e01e47 	mvneq	r1, #1136	; 0x470
         ef33c:	02411a09 	subeq	r1, r1, #36864	; 0x9000
         ef340:	08bd4000 	ldmeqia	sp!, {lr}
         ef344:	0a64fd08 	beq	1a2e76c <TIrDATool::$DoListenComplete(long)>
         ef348:	e59004b0 	ldr	r0, [r0, #1200]	; fField1200
         ef34c:	e8bd4000 	ldmia	sp!, {lr}
         ef350:	ea00062a 	b	f0c00 <TIrGlue::TimerComplete(unsigned long)>
    */
}

/**
 * Symbol: TIrDATool::HandleInternalEvent(void)
 * Address: 000ef354
 */
TIrDATool::HandleInternalEvent(void) {
    /*
         ef354:	e59004b0 	ldr	r0, [r0, #1200]	; fField1200
         ef358:	ea650953 	b	1a318ac <TIrGlue::$HandleInternalEvent(void)>
    */
}

