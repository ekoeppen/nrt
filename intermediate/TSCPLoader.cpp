#include "include/TSCPLoader.h"

/**
 * Symbol: TSCPLoader::DeviceNotifyCompletion(void)
 * Address: 001b9e3c
 */
TSCPLoader::DeviceNotifyCompletion(void) {
    /*
        1b9e3c:	e1a0c00d 	mov	ip, sp
        1b9e40:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1b9e44:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9e48:	e1a04000 	mov	r4, r0
        1b9e4c:	e590008c 	ldr	r0, [r0, #140]	; fField140
        1b9e50:	e3a06000 	mov	r6, #0	; 0x0
        1b9e54:	e3300000 	teq	r0, #0	; 0x0
        1b9e58:	0a000002 	beq	1b9e68 <TSCPLoader::DeviceNotifyCompletion(void)+0x2c>
        1b9e5c:	e3a01001 	mov	r1, #1	; 0x1
        1b9e60:	eb68522a 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
        1b9e64:	e584608c 	str	r6, [r4, #140]	; fField140
        1b9e68:	e5940090 	ldr	r0, [r4, #144]	; fField144
        1b9e6c:	e3300000 	teq	r0, #0	; 0x0
        1b9e70:	0a000001 	beq	1b9e7c <TSCPLoader::DeviceNotifyCompletion(void)+0x40>
        1b9e74:	eb684e19 	bl	1bcd6e0 <$__dl(void *)>
        1b9e78:	e5846090 	str	r6, [r4, #144]	; fField144
        1b9e7c:	e5945094 	ldr	r5, [r4, #148]	; fField148
        1b9e80:	e3350000 	teq	r5, #0	; 0x0
        1b9e84:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        1b9e88:	e285000c 	add	r0, r5, #12	; 0xc
        1b9e8c:	e3a01000 	mov	r1, #0	; 0x0
        1b9e90:	eb685223 	bl	1bce724 <TUObject::$__dt(void)>
        1b9e94:	e1a00005 	mov	r0, r5
        1b9e98:	e3a01000 	mov	r1, #0	; 0x0
        1b9e9c:	eb685220 	bl	1bce724 <TUObject::$__dt(void)>
        1b9ea0:	e1a00005 	mov	r0, r5
        1b9ea4:	eb684e0d 	bl	1bcd6e0 <$__dl(void *)>
        1b9ea8:	e5a46094 	str	r6, [r4, #148]!	; fField148
        1b9eac:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TSCPLoader::Look(unsigned long, unsigned long)
 * Address: 001b9eb0
 */
TSCPLoader::Look(unsigned long, unsigned long) {
    /*
        1b9eb0:	e1a0c00d 	mov	ip, sp
        1b9eb4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
        1b9eb8:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9ebc:	e1a04000 	mov	r4, r0
        1b9ec0:	e1a05002 	mov	r5, r2
        1b9ec4:	e24dd018 	sub	sp, sp, #24	; 0x18
        1b9ec8:	e5900078 	ldr	r0, [r0, #120]	; fField120
        1b9ecc:	eb68039d 	bl	1bbad48 <TEndpointPipe::$SetTimeout(unsigned long)>
        1b9ed0:	e284007c 	add	r0, r4, #124	; 0x7c
        1b9ed4:	e1a07000 	mov	r7, r0
        1b9ed8:	eb613127 	bl	1a0637c <TCPReadMessage::$ReceiveMessage(void)>
        1b9edc:	e1a06000 	mov	r6, r0
        1b9ee0:	e280cc27 	add	ip, r0, #9984	; 0x2700
        1b9ee4:	e37c0025 	cmn	ip, #37	; 0x25
        1b9ee8:	1286cc46 	addne	ip, r6, #17920	; 0x4600
        1b9eec:	137c0053 	cmnne	ip, #83	; 0x53
        1b9ef0:	0a00001b 	beq	1b9f64 <TSCPLoader::Look(unsigned long, unsigned long)+0xb4>
        1b9ef4:	e3360000 	teq	r6, #0	; 0x0
        1b9ef8:	1a000019 	bne	1b9f64 <TSCPLoader::Look(unsigned long, unsigned long)+0xb4>
        1b9efc:	e1a00007 	mov	r0, r7
        1b9f00:	e3a02001 	mov	r2, #1	; 0x1
        1b9f04:	e59f1060 	ldr	r1, [pc, #60]	; 1b9f6c <TSCPLoader::Look(unsigned long, unsigned long)+0xbc>
        1b9f08:	eb613107 	bl	1a0632c <TCPReadMessage::$Find(unsigned long, unsigned char)>
        1b9f0c:	e1b07000 	movs	r7, r0
        1b9f10:	059f6058 	ldreq	r6, [pc, #58]	; 1b9f70 <TSCPLoader::Look(unsigned long, unsigned long)+0xc0>
        1b9f14:	0a000012 	beq	1b9f64 <TSCPLoader::Look(unsigned long, unsigned long)+0xb4>
        1b9f18:	e3a00001 	mov	r0, #1	; 0x1
        1b9f1c:	e58d0008 	str	r0, [sp, #8]
        1b9f20:	e5970008 	ldr	r0, [r7, #8]
        1b9f24:	e58d000c 	str	r0, [sp, #12]
        1b9f28:	e597000c 	ldr	r0, [r7, #12]
        1b9f2c:	e58d0010 	str	r0, [sp, #16]
        1b9f30:	e5970010 	ldr	r0, [r7, #16]
        1b9f34:	e58d0014 	str	r0, [sp, #20]
        1b9f38:	e59d000c 	ldr	r0, [sp, #12]
        1b9f3c:	e5840098 	str	r0, [r4, #152]	; fField152
        1b9f40:	e1a0000d 	mov	r0, sp
        1b9f44:	eb67f71c 	bl	1bb7bbc <$CMSetLastDevice(TConnectedDevice *)>
        1b9f48:	e1b06000 	movs	r6, r0
        1b9f4c:	1a000004 	bne	1b9f64 <TSCPLoader::Look(unsigned long, unsigned long)+0xb4>
        1b9f50:	e1a0100d 	mov	r1, sp
        1b9f54:	e1a00004 	mov	r0, r4
        1b9f58:	eb6130f0 	bl	1a06320 <TSCPLoader::$DeviceNotify(TConnectedDevice *)>
        1b9f5c:	e3350000 	teq	r5, #0	; 0x0
        1b9f60:	1a000003 	bne	1b9f74 <TSCPLoader::Look(unsigned long, unsigned long)+0xc4>
        1b9f64:	e1a00006 	mov	r0, r6
        1b9f68:	ea000011 	b	1b9fb4 <TSCPLoader::Look(unsigned long, unsigned long)+0x104>
        1b9f6c:	645f6964 	ldrvsb	r6, [pc], #964	; 1b9f74 <TSCPLoader::Look(unsigned long, unsigned long)+0xc4>
        1b9f70:	ffff9a67 	swinv	0x00ff9a67
        1b9f74:	e59fc03c 	ldr	ip, [pc, #3c]	; 1b9fb8 <TSCPLoader::Look(unsigned long, unsigned long)+0x108>
        1b9f78:	e135000c 	teq	r5, ip
        1b9f7c:	15970008 	ldrne	r0, [r7, #8]
        1b9f80:	11300005 	teqne	r0, r5
        1b9f84:	1afffff6 	bne	1b9f64 <TSCPLoader::Look(unsigned long, unsigned long)+0xb4>
        1b9f88:	e3e00000 	mvn	r0, #0	; 0x0
        1b9f8c:	e52d0004 	str	r0, [sp, -#4]!	; fField4
        1b9f90:	e1a0100d 	mov	r1, sp
        1b9f94:	e5b70008 	ldr	r0, [r7, #8]!
        1b9f98:	eb67f702 	bl	1bb7ba8 <$CMGetServiceVersion(unsigned long, unsigned long *)>
        1b9f9c:	e280cc65 	add	ip, r0, #25856	; 0x6500
        1b9fa0:	e37c0092 	cmn	ip, #146	; 0x92
        1b9fa4:	13e00092 	mvnne	r0, #146	; 0x92
        1b9fa8:	12400c65 	subne	r0, r0, #25856	; 0x6500
        1b9fac:	03a00000 	moveq	r0, #0	; 0x0
        1b9fb0:	e28dd004 	add	sp, sp, #4	; 0x4
        1b9fb4:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
        1b9fb8:	2a2a2a2a 	bcs	c44868 <ROM$$Size+0x524c1c>
    */
}

/**
 * Symbol: TSCPLoader::GetPackage(void)
 * Address: 001b9fbc
 */
TSCPLoader::GetPackage(void) {
    /*
        1b9fbc:	e1a0c00d 	mov	ip, sp
        1b9fc0:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1b9fc4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b9fc8:	e1a04000 	mov	r4, r0
        1b9fcc:	e24dd018 	sub	sp, sp, #24	; 0x18
        1b9fd0:	e5901078 	ldr	r1, [r0, #120]	; fField120
        1b9fd4:	e28d0014 	add	r0, sp, #20	; 0x14
        1b9fd8:	eb612cb3 	bl	1a052ac <TCPWriteMessage::$__ct(TEndpointPipe *)>
        1b9fdc:	e1a0000d 	mov	r0, sp
        1b9fe0:	eb67f2c8 	bl	1bb6b08 <TCPNewtonIdTuple::$__ct(void)>
        1b9fe4:	e1a0000d 	mov	r0, sp
        1b9fe8:	eb67ff28 	bl	1bb9c90 <TCPNewtonIdTuple::$Init(void)>
        1b9fec:	e1b05000 	movs	r5, r0
        1b9ff0:	0a000001 	beq	1b9ffc <TSCPLoader::GetPackage(void)+0x40>
        1b9ff4:	e28dd018 	add	sp, sp, #24	; 0x18
        1b9ff8:	ea000108 	b	1ba420 <TSCPLoader::GetPackage(void)+0x464>
        1b9ffc:	e1a0100d 	mov	r1, sp
        1ba000:	e28d0014 	add	r0, sp, #20	; 0x14
        1ba004:	eb612cbc 	bl	1a052fc <TCPWriteMessage::$AddTuple(TCPTuple *)>
        1ba008:	e24dd014 	sub	sp, sp, #20	; 0x14
        1ba00c:	e1a0000d 	mov	r0, sp
        1ba010:	e3a02000 	mov	r2, #0	; 0x0
        1ba014:	e59f1094 	ldr	r1, [pc, #94]	; 1ba0b0 <TSCPLoader::GetPackage(void)+0xf4>
        1ba018:	eb612cb2 	bl	1a052e8 <TCPServiceInfoRequestTuple::$__ct(unsigned long, unsigned long)>
        1ba01c:	e1a0100d 	mov	r1, sp
        1ba020:	e28d0028 	add	r0, sp, #40	; 0x28
        1ba024:	eb612cb4 	bl	1a052fc <TCPWriteMessage::$AddTuple(TCPTuple *)>
        1ba028:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1ba02c:	e3a0107c 	mov	r1, #124	; 0x7c
        1ba030:	e1a0000d 	mov	r0, sp
        1ba034:	eb612caa 	bl	1a052e4 <TCPChangeSpeedRequestTuple::$__ct(unsigned long)>
        1ba038:	e1a0100d 	mov	r1, sp
        1ba03c:	e28d0034 	add	r0, sp, #52	; 0x34
        1ba040:	eb612cad 	bl	1a052fc <TCPWriteMessage::$AddTuple(TCPTuple *)>
        1ba044:	e28d0034 	add	r0, sp, #52	; 0x34
        1ba048:	eb6134d1 	bl	1a07394 <TCPWriteMessage::$SendMessage(void)>
        1ba04c:	e1b05000 	movs	r5, r0
        1ba050:	1a000056 	bne	1ba1b0 <TSCPLoader::GetPackage(void)+0x1f4>
        1ba054:	e284007c 	add	r0, r4, #124	; 0x7c
        1ba058:	e1a07000 	mov	r7, r0
        1ba05c:	eb6130c6 	bl	1a0637c <TCPReadMessage::$ReceiveMessage(void)>
        1ba060:	e1b05000 	movs	r5, r0
        1ba064:	1a000051 	bne	1ba1b0 <TSCPLoader::GetPackage(void)+0x1f4>
        1ba068:	e1a00007 	mov	r0, r7
        1ba06c:	e3a02000 	mov	r2, #0	; 0x0
        1ba070:	e59f103c 	ldr	r1, [pc, #3c]	; 1ba0b4 <TSCPLoader::GetPackage(void)+0xf8>
        1ba074:	eb6130ac 	bl	1a0632c <TCPReadMessage::$Find(unsigned long, unsigned char)>
        1ba078:	e3300000 	teq	r0, #0	; 0x0
        1ba07c:	0a00003c 	beq	1ba174 <TSCPLoader::GetPackage(void)+0x1b8>
        1ba080:	e5900008 	ldr	r0, [r0, #8]
        1ba084:	e3500010 	cmp	r0, #16	; 0x10
        1ba088:	03a00ce1 	moveq	r0, #57600	; 0xe100
        1ba08c:	0a000010 	beq	1ba0d4 <TSCPLoader::GetPackage(void)+0x118>
        1ba090:	ca000008 	bgt	1ba0b8 <TSCPLoader::GetPackage(void)+0xfc>
        1ba094:	e3300004 	teq	r0, #4	; 0x4
        1ba098:	03a00c4b 	moveq	r0, #19200	; 0x4b00
        1ba09c:	0a00000c 	beq	1ba0d4 <TSCPLoader::GetPackage(void)+0x118>
        1ba0a0:	e3300008 	teq	r0, #8	; 0x8
        1ba0a4:	03a00c96 	moveq	r0, #38400	; 0x9600
        1ba0a8:	0a000009 	beq	1ba0d4 <TSCPLoader::GetPackage(void)+0x118>
        1ba0ac:	ea000026 	b	1ba14c <TSCPLoader::GetPackage(void)+0x190>
        1ba0b0:	7061636b 	rsbvc	r6, r1, fp, ror #6
        1ba0b4:	63737270 	cmnvs	r3, #7	; 0x7
        1ba0b8:	e3300020 	teq	r0, #32	; 0x20
        1ba0bc:	03a00cc2 	moveq	r0, #49664	; 0xc200
        1ba0c0:	02800801 	addeq	r0, r0, #65536	; 0x10000
        1ba0c4:	0a000002 	beq	1ba0d4 <TSCPLoader::GetPackage(void)+0x118>
        1ba0c8:	e3300040 	teq	r0, #64	; 0x40
        1ba0cc:	1a00001e 	bne	1ba14c <TSCPLoader::GetPackage(void)+0x190>
        1ba0d0:	e3a00be1 	mov	r0, #230400	; 0x38400
        1ba0d4:	e5840088 	str	r0, [r4, #136]	; fField136
        1ba0d8:	e24dd028 	sub	sp, sp, #40	; 0x28
        1ba0dc:	e28d0010 	add	r0, sp, #16	; 0x10
        1ba0e0:	eb67ee7f 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        1ba0e4:	e1a0000d 	mov	r0, sp
        1ba0e8:	eb68073d 	bl	1bbbde4 <TCMOSerialBitRate::$__ct(void)>
        1ba0ec:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1ba0f0:	e58d000c 	str	r0, [sp, #12]
        1ba0f4:	e28d0010 	add	r0, sp, #16	; 0x10
        1ba0f8:	eb67fadf 	bl	1bb8c7c <TOptionArray::$Init(void)>
        1ba0fc:	e1b05000 	movs	r5, r0
        1ba100:	1a00000c 	bne	1ba138 <TSCPLoader::GetPackage(void)+0x17c>
        1ba104:	e1a0200d 	mov	r2, sp
        1ba108:	e59d1010 	ldr	r1, [sp, #16]
        1ba10c:	e28d0010 	add	r0, sp, #16	; 0x10
        1ba110:	eb67fee3 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1ba114:	e1b05000 	movs	r5, r0
        1ba118:	1a000006 	bne	1ba138 <TSCPLoader::GetPackage(void)+0x17c>
        1ba11c:	e28d2010 	add	r2, sp, #16	; 0x10
        1ba120:	e3a03000 	mov	r3, #0	; 0x0
        1ba124:	e3a01c05 	mov	r1, #1280	; 0x500
        1ba128:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1ba12c:	eb67fee9 	bl	1bb9cd8 <TEndpoint::$OptMgmt(unsigned long, TOptionArray *, unsigned long)>
        1ba130:	e1b05000 	movs	r5, r0
        1ba134:	0a000007 	beq	1ba158 <TSCPLoader::GetPackage(void)+0x19c>
        1ba138:	e28d0010 	add	r0, sp, #16	; 0x10
        1ba13c:	e3a01000 	mov	r1, #0	; 0x0
        1ba140:	eb67f279 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        1ba144:	e28dd060 	add	sp, sp, #96	; 0x60
        1ba148:	ea0000b4 	b	1ba420 <TSCPLoader::GetPackage(void)+0x464>
        1ba14c:	e3a05062 	mov	r5, #98	; 0x62
        1ba150:	e2455c66 	sub	r5, r5, #26112	; 0x6600
        1ba154:	ea000015 	b	1ba1b0 <TSCPLoader::GetPackage(void)+0x1f4>
        1ba158:	e3a00ffb 	mov	r0, #1004	; 0x3ec
        1ba15c:	e2800bb3 	add	r0, r0, #183296	; 0x2cc00
        1ba160:	eb688b31 	bl	1bdce2c <$Sleep(unsigned long)>
        1ba164:	e28d0010 	add	r0, sp, #16	; 0x10
        1ba168:	e3a01000 	mov	r1, #0	; 0x0
        1ba16c:	eb67f26e 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        1ba170:	e28dd028 	add	sp, sp, #40	; 0x28
        1ba174:	e1a00007 	mov	r0, r7
        1ba178:	e3a02000 	mov	r2, #0	; 0x0
        1ba17c:	e59f1034 	ldr	r1, [pc, #34]	; 1ba1b8 <TSCPLoader::GetPackage(void)+0x1fc>
        1ba180:	eb613069 	bl	1a0632c <TCPReadMessage::$Find(unsigned long, unsigned char)>
        1ba184:	e1b06000 	movs	r6, r0
        1ba188:	03a05066 	moveq	r5, #102	; 0x66
        1ba18c:	02455c66 	subeq	r5, r5, #26112	; 0x6600
        1ba190:	0a000006 	beq	1ba1b0 <TSCPLoader::GetPackage(void)+0x1f4>
        1ba194:	e5960008 	ldr	r0, [r6, #8]
        1ba198:	e51f90f0 	ldr	r9, [pc, #ffffff10]	; 1ba0b0 <TSCPLoader::GetPackage(void)+0xf4>
        1ba19c:	e3a08065 	mov	r8, #101	; 0x65
        1ba1a0:	e2488c66 	sub	r8, r8, #26112	; 0x6600
        1ba1a4:	e1300009 	teq	r0, r9
        1ba1a8:	0a000003 	beq	1ba1bc <TSCPLoader::GetPackage(void)+0x200>
        1ba1ac:	e1a05008 	mov	r5, r8
        1ba1b0:	e28dd038 	add	sp, sp, #56	; 0x38
        1ba1b4:	ea000099 	b	1ba420 <TSCPLoader::GetPackage(void)+0x464>
        1ba1b8:	73697270 	cmnvc	r9, #7	; 0x7
        1ba1bc:	e24dd014 	sub	sp, sp, #20	; 0x14
        1ba1c0:	e28d0010 	add	r0, sp, #16	; 0x10
        1ba1c4:	e5941078 	ldr	r1, [r4, #120]	; fField120
        1ba1c8:	eb612c37 	bl	1a052ac <TCPWriteMessage::$__ct(TEndpointPipe *)>
        1ba1cc:	e1a0000d 	mov	r0, sp
        1ba1d0:	e2862008 	add	r2, r6, #8	; 0x8
        1ba1d4:	e8920006 	ldmia	r2, {r1, r2}
        1ba1d8:	eb612c40 	bl	1a052e0 <TCPRequestServiceTuple::$__ct(unsigned long, unsigned long)>
        1ba1dc:	e1a0100d 	mov	r1, sp
        1ba1e0:	e28d0010 	add	r0, sp, #16	; 0x10
        1ba1e4:	eb612c44 	bl	1a052fc <TCPWriteMessage::$AddTuple(TCPTuple *)>
        1ba1e8:	e28d0010 	add	r0, sp, #16	; 0x10
        1ba1ec:	eb613468 	bl	1a07394 <TCPWriteMessage::$SendMessage(void)>
        1ba1f0:	e1b05000 	movs	r5, r0
        1ba1f4:	128dd04c 	addne	sp, sp, #76	; 0x4c
        1ba1f8:	1a000088 	bne	1ba420 <TSCPLoader::GetPackage(void)+0x464>
        1ba1fc:	e5b60010 	ldr	r0, [r6, #16]!
        1ba200:	e0801080 	add	r1, r0, r0, lsl #1
        1ba204:	e0611380 	rsb	r1, r1, r0, lsl #7
        1ba208:	e0811101 	add	r1, r1, r1, lsl #2
        1ba20c:	e1a01201 	mov	r1, r1, lsl #4
        1ba210:	e5940088 	ldr	r0, [r4, #136]	; fField136
        1ba214:	eb67e1cb 	bl	1bb2948 <$__rt_udiv>
        1ba218:	e1b00080 	movs	r0, r0, lsl #1
        1ba21c:	03a00f7d 	moveq	r0, #500	; 0x1f4
        1ba220:	e3a01066 	mov	r1, #102	; 0x66
        1ba224:	e2811c0e 	add	r1, r1, #3584	; 0xe00
        1ba228:	e0010190 	mul	r1, r0, r1
        1ba22c:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1ba230:	eb6802c4 	bl	1bbad48 <TEndpointPipe::$SetTimeout(unsigned long)>
        1ba234:	e1a00007 	mov	r0, r7
        1ba238:	eb613453 	bl	1a0738c <TCPReadMessage::$Reset(void)>
        1ba23c:	e3a06000 	mov	r6, #0	; 0x0
        1ba240:	e1a00007 	mov	r0, r7
        1ba244:	e52d6008 	str	r6, [sp, -#8]!
        1ba248:	e1a0100d 	mov	r1, sp
        1ba24c:	e3a02001 	mov	r2, #1	; 0x1
        1ba250:	eb613048 	bl	1a06378 <TCPReadMessage::$ReadTuple(TCPTuple *, unsigned char)>
        1ba254:	e1b05000 	movs	r5, r0
        1ba258:	0a000001 	beq	1ba264 <TSCPLoader::GetPackage(void)+0x2a8>
        1ba25c:	e28dd054 	add	sp, sp, #84	; 0x54
        1ba260:	ea00006e 	b	1ba420 <TSCPLoader::GetPackage(void)+0x464>
        1ba264:	e59d0000 	ldr	r0, [sp]
        1ba268:	e1300009 	teq	r0, r9
        1ba26c:	11a05008 	movne	r5, r8
        1ba270:	1afffff9 	bne	1ba25c <TSCPLoader::GetPackage(void)+0x2a0>
        1ba274:	e24dd004 	sub	sp, sp, #4	; 0x4
        1ba278:	ebfe69a2 	bl	154908 <GetInternalStore(void)>
        1ba27c:	e1a08000 	mov	r8, r0
        1ba280:	e1a0300d 	mov	r3, sp
        1ba284:	e1a01008 	mov	r1, r8
        1ba288:	e3a02000 	mov	r2, #0	; 0x0
        1ba28c:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1ba290:	eb62764f 	bl	1a57bd4 <$StorePackage(CPipe *, TStore *, TLOCallback *, unsigned long *)>
        1ba294:	e1b05000 	movs	r5, r0
        1ba298:	1a000005 	bne	1ba2b4 <TSCPLoader::GetPackage(void)+0x2f8>
        1ba29c:	e1a00007 	mov	r0, r7
        1ba2a0:	e28d1004 	add	r1, sp, #4	; 0x4
        1ba2a4:	e3a02001 	mov	r2, #1	; 0x1
        1ba2a8:	eb613032 	bl	1a06378 <TCPReadMessage::$ReadTuple(TCPTuple *, unsigned char)>
        1ba2ac:	e1b05000 	movs	r5, r0
        1ba2b0:	0a000001 	beq	1ba2bc <TSCPLoader::GetPackage(void)+0x300>
        1ba2b4:	e28dd058 	add	sp, sp, #88	; 0x58
        1ba2b8:	ea000058 	b	1ba420 <TSCPLoader::GetPackage(void)+0x464>
        1ba2bc:	e24dd010 	sub	sp, sp, #16	; 0x10
        1ba2c0:	e28d000c 	add	r0, sp, #12	; 0xc
        1ba2c4:	e5941078 	ldr	r1, [r4, #120]	; fField120
        1ba2c8:	eb612bf7 	bl	1a052ac <TCPWriteMessage::$__ct(TEndpointPipe *)>
        1ba2cc:	e1a0000d 	mov	r0, sp
        1ba2d0:	eb612bef 	bl	1a05294 <TCPAbortTuple::$__ct(void)>
        1ba2d4:	e3a07001 	mov	r7, #1	; 0x1
        1ba2d8:	e58d7008 	str	r7, [sp, #8]
        1ba2dc:	e1a0100d 	mov	r1, sp
        1ba2e0:	e28d000c 	add	r0, sp, #12	; 0xc
        1ba2e4:	eb612c04 	bl	1a052fc <TCPWriteMessage::$AddTuple(TCPTuple *)>
        1ba2e8:	e28d000c 	add	r0, sp, #12	; 0xc
        1ba2ec:	eb613428 	bl	1a07394 <TCPWriteMessage::$SendMessage(void)>
        1ba2f0:	e1b05000 	movs	r5, r0
        1ba2f4:	128dd068 	addne	sp, sp, #104	; 0x68
        1ba2f8:	1a000048 	bne	1ba420 <TSCPLoader::GetPackage(void)+0x464>
        1ba2fc:	e24dd020 	sub	sp, sp, #32	; 0x20
        1ba300:	e28d000c 	add	r0, sp, #12	; 0xc
        1ba304:	eb64408e 	bl	1aca544 <TSCPEvent::$__ct(void)>
        1ba308:	e1a0100d 	mov	r1, sp
        1ba30c:	e28d0004 	add	r0, sp, #4	; 0x4
        1ba310:	eb67f625 	bl	1bb7bac <$CMSCPGetLastLoadedPackage__FPUlT1>
        1ba314:	e1a05000 	mov	r5, r0
        1ba318:	e280cc65 	add	ip, r0, #25856	; 0x6500
        1ba31c:	e37c009f 	cmn	ip, #159	; 0x9f
        1ba320:	1a000003 	bne	1ba334 <TSCPLoader::GetPackage(void)+0x378>
        1ba324:	e3a00000 	mov	r0, #0	; 0x0
        1ba328:	e58d0000 	str	r0, [sp]
        1ba32c:	e58d0004 	str	r0, [sp, #4]	; fField4
        1ba330:	ea000001 	b	1ba33c <TSCPLoader::GetPackage(void)+0x380>
        1ba334:	e3350000 	teq	r5, #0	; 0x0
        1ba338:	1a000037 	bne	1ba41c <TSCPLoader::GetPackage(void)+0x460>
        1ba33c:	e5941098 	ldr	r1, [r4, #152]	; fField152
        1ba340:	e59d0000 	ldr	r0, [sp]
        1ba344:	e1310000 	teq	r1, r0
        1ba348:	0a00003b 	beq	1ba43c <TSCPLoader::GetPackage(void)+0x480>
        1ba34c:	e59f80d4 	ldr	r8, [pc, #d4]	; 1ba428 <TSCPLoader::GetPackage(void)+0x46c>
        1ba350:	e3a05014 	mov	r5, #20	; 0x14
        1ba354:	e3300000 	teq	r0, #0	; 0x0
        1ba358:	159d0004 	ldrne	r0, [sp, #4]	; fField4
        1ba35c:	13300000 	teqne	r0, #0	; 0x0
        1ba360:	0a000015 	beq	1ba3bc <TSCPLoader::GetPackage(void)+0x400>
        1ba364:	e3a01002 	mov	r1, #2	; 0x2
        1ba368:	e58d001c 	str	r0, [sp, #28]
        1ba36c:	e58d1018 	str	r1, [sp, #24]
        1ba370:	e28d000c 	add	r0, sp, #12	; 0xc
        1ba374:	e3a02000 	mov	r2, #0	; 0x0
        1ba378:	e3a0e000 	mov	lr, #0	; 0x0
        1ba37c:	e3a03000 	mov	r3, #0	; 0x0
        1ba380:	e1a01005 	mov	r1, r5
        1ba384:	e598c000 	ldr	ip, [r8]
        1ba388:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1ba38c:	e1a03006 	mov	r3, r6
        1ba390:	e1a0100e 	mov	r1, lr
        1ba394:	e3a00014 	mov	r0, #20	; 0x14
        1ba398:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1ba39c:	e28d302c 	add	r3, sp, #44	; 0x2c
        1ba3a0:	e92d0008 	stmdb	sp!, {r3}
        1ba3a4:	e28d302c 	add	r3, sp, #44	; 0x2c
        1ba3a8:	e1a0000c 	mov	r0, ip
        1ba3ac:	e3a02002 	mov	r2, #2	; 0x2
        1ba3b0:	e3a01001 	mov	r1, #1	; 0x1
        1ba3b4:	eb688264 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        1ba3b8:	e28dd024 	add	sp, sp, #36	; 0x24
        1ba3bc:	e58d7018 	str	r7, [sp, #24]
        1ba3c0:	e59d0030 	ldr	r0, [sp, #48]
        1ba3c4:	e58d001c 	str	r0, [sp, #28]
        1ba3c8:	e28d000c 	add	r0, sp, #12	; 0xc
        1ba3cc:	e3a02000 	mov	r2, #0	; 0x0
        1ba3d0:	e3a0c000 	mov	ip, #0	; 0x0
        1ba3d4:	e3a03000 	mov	r3, #0	; 0x0
        1ba3d8:	e1a01005 	mov	r1, r5
        1ba3dc:	e598e000 	ldr	lr, [r8]
        1ba3e0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1ba3e4:	e1a03006 	mov	r3, r6
        1ba3e8:	e1a0100c 	mov	r1, ip
        1ba3ec:	e3a00014 	mov	r0, #20	; 0x14
        1ba3f0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        1ba3f4:	e28d302c 	add	r3, sp, #44	; 0x2c
        1ba3f8:	e92d0008 	stmdb	sp!, {r3}
        1ba3fc:	e28d302c 	add	r3, sp, #44	; 0x2c
        1ba400:	e1a0000e 	mov	r0, lr
        1ba404:	e3a02002 	mov	r2, #2	; 0x2
        1ba408:	e3a01001 	mov	r1, #1	; 0x1
        1ba40c:	eb68824e 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
        1ba410:	e28dd024 	add	sp, sp, #36	; 0x24
        1ba414:	e1b05000 	movs	r5, r0
        1ba418:	0a000003 	beq	1ba42c <TSCPLoader::GetPackage(void)+0x470>
        1ba41c:	e28dd088 	add	sp, sp, #136	; 0x88
        1ba420:	e1a00005 	mov	r0, r5
        1ba424:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1ba428:	0c1054a8 	ldceq	4, cr5, [r0], -#672
        1ba42c:	e5b41098 	ldr	r1, [r4, #152]!	; fField152
        1ba430:	e59d0030 	ldr	r0, [sp, #48]
        1ba434:	eb67f5de 	bl	1bb7bb4 <$CMSCPSetLastLoadedPackage__FUlT1>
        1ba438:	ea000002 	b	1ba448 <TSCPLoader::GetPackage(void)+0x48c>
        1ba43c:	e1a00008 	mov	r0, r8
        1ba440:	e59d1030 	ldr	r1, [sp, #48]
        1ba444:	eb654870 	bl	1b0c60c <$DeleteLargeObject(TStore *, unsigned long)>
        1ba448:	e1a05000 	mov	r5, r0
        1ba44c:	e28dd070 	add	sp, sp, #112	; 0x70
        1ba450:	eafffee7 	b	1b9ff4 <TSCPLoader::GetPackage(void)+0x38>
    */
}

/**
 * Symbol: TSCPLoader::__ct(void)
 * Address: 001ba454
 */
TSCPLoader::TSCPLoader(void) {
    /*
        1ba454:	e1a0c00d 	mov	ip, sp
        1ba458:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1ba45c:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ba460:	e1b04000 	movs	r4, r0
        1ba464:	1a000003 	bne	1ba478 <TSCPLoader::__ct(void)+0x24>
        1ba468:	e3a0009c 	mov	r0, #156	; 0x9c
        1ba46c:	eb6850b1 	bl	1bce738 <$__nw(unsigned int)>
        1ba470:	e1b04000 	movs	r4, r0
        1ba474:	0a00000f 	beq	1ba4b8 <TSCPLoader::__ct(void)+0x64>
        1ba478:	e1a00004 	mov	r0, r4
        1ba47c:	eb68a770 	bl	1be4244 <TAppWorld::$__ct(void)>
        1ba480:	e284007c 	add	r0, r4, #124	; 0x7c
        1ba484:	eb612b83 	bl	1a05298 <TCPReadMessage::$__ct(void)>
        1ba488:	e59f0030 	ldr	r0, [pc, #30]	; 1ba4c0 <TSCPLoader::__ct(void)+0x6c>
        1ba48c:	e5840000 	str	r0, [r4]
        1ba490:	e3a00000 	mov	r0, #0	; 0x0
        1ba494:	e5840078 	str	r0, [r4, #120]	; fField120
        1ba498:	e5840074 	str	r0, [r4, #116]	; fField116
        1ba49c:	e5840070 	str	r0, [r4, #112]	; fField112
        1ba4a0:	e584008c 	str	r0, [r4, #140]	; fField140
        1ba4a4:	e5840090 	str	r0, [r4, #144]	; fField144
        1ba4a8:	e5840094 	str	r0, [r4, #148]	; fField148
        1ba4ac:	e5840098 	str	r0, [r4, #152]	; fField152
        1ba4b0:	e3a00d96 	mov	r0, #9600	; 0x2580
        1ba4b4:	e5840088 	str	r0, [r4, #136]	; fField136
        1ba4b8:	e1a00004 	mov	r0, r4
        1ba4bc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1ba4c0:	0001ade8 	andeq	sl, r1, r8, ror #27
    */
}

/**
 * Symbol: TSCPLoader::GetSizeOf(void)
 * Address: 001ba4c4
 */
TSCPLoader::GetSizeOf(void) {
    /*
        1ba4c4:	e3a0009c 	mov	r0, #156	; 0x9c
        1ba4c8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSCPLoader::GetLastDevice(void)
 * Address: 001ba4cc
 */
TSCPLoader::GetLastDevice(void) {
    /*
        1ba4cc:	e5900098 	ldr	r0, [r0, #152]	; fField152
        1ba4d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TSCPLoader::MainConstructor(void)
 * Address: 001ba4d4
 */
TSCPLoader::MainConstructor(void) {
    /*
        1ba4d4:	e1a0c00d 	mov	ip, sp
        1ba4d8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ba4dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ba4e0:	e1a04000 	mov	r4, r0
        1ba4e4:	eb67cc84 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
        1ba4e8:	e3300000 	teq	r0, #0	; 0x0
        1ba4ec:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        1ba4f0:	e1a00004 	mov	r0, r4
        1ba4f4:	e3a01000 	mov	r1, #0	; 0x0
        1ba4f8:	eb67c85f 	bl	1bac67c <TForkWorld::$EnableForking(unsigned char)>
        1ba4fc:	e3a00014 	mov	r0, #20	; 0x14
        1ba500:	eb68508c 	bl	1bce738 <$__nw(unsigned int)>
        1ba504:	e1b05000 	movs	r5, r0
        1ba508:	0a000003 	beq	1ba51c <TSCPLoader::MainConstructor(void)+0x48>
        1ba50c:	e1a00005 	mov	r0, r5
        1ba510:	eb68a73c 	bl	1be4208 <TAEventHandler::$__ct(void)>
        1ba514:	e59f0020 	ldr	r0, [pc, #20]	; 1ba53c <TSCPLoader::MainConstructor(void)+0x68>
        1ba518:	e5850000 	str	r0, [r5]
        1ba51c:	e1b00005 	movs	r0, r5
        1ba520:	e5a45070 	str	r5, [r4, #112]!	; fField112
        1ba524:	159f2014 	ldrne	r2, [pc, #14]	; 1ba540 <TSCPLoader::MainConstructor(void)+0x6c>
        1ba528:	159f1014 	ldrne	r1, [pc, #14]	; 1ba544 <TSCPLoader::MainConstructor(void)+0x70>
        1ba52c:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        1ba530:	1a68bbde 	bne	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        1ba534:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
        1ba538:	0a689ef8 	beq	1be2120 <$MemError>
        1ba53c:	0001f1f0 	streqd	pc, [r1], -r0
        1ba540:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
        1ba544:	7363706c 	cmnvc	r3, #108	; 0x6c
    */
}

/**
 * Symbol: TSCPLoader::MainDestructor(void)
 * Address: 001ba548
 */
TSCPLoader::MainDestructor(void) {
    /*
        1ba548:	e1a0c00d 	mov	ip, sp
        1ba54c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        1ba550:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ba554:	e1a04000 	mov	r4, r0
        1ba558:	e5900078 	ldr	r0, [r0, #120]	; fField120
        1ba55c:	e3300000 	teq	r0, #0	; 0x0
        1ba560:	0a000002 	beq	1ba570 <TSCPLoader::MainDestructor(void)+0x28>
        1ba564:	e3a01001 	mov	r1, #1	; 0x1
        1ba568:	e1a0e00f 	mov	lr, pc
        1ba56c:	e590f000 	ldr	pc, [r0]
        1ba570:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1ba574:	e3300000 	teq	r0, #0	; 0x0
        1ba578:	1b67f59c 	blne	1bb7bf0 <TEndpoint::$Delete(void)>
        1ba57c:	e594008c 	ldr	r0, [r4, #140]	; fField140
        1ba580:	e3300000 	teq	r0, #0	; 0x0
        1ba584:	0a000009 	beq	1ba5b0 <TSCPLoader::MainDestructor(void)+0x68>
        1ba588:	e3a03000 	mov	r3, #0	; 0x0
        1ba58c:	e92d0008 	stmdb	sp!, {r3}
        1ba590:	e3a02000 	mov	r2, #0	; 0x0
        1ba594:	e3a01000 	mov	r1, #0	; 0x0
        1ba598:	eb68548c 	bl	1bcf7d0 <TUAsyncMessage::$BlockTillDone(unsigned long *, unsigned long *, unsigned long *, unsigned long *)>
        1ba59c:	e28dd004 	add	sp, sp, #4	; 0x4
        1ba5a0:	e594008c 	ldr	r0, [r4, #140]	; fField140
        1ba5a4:	e3300000 	teq	r0, #0	; 0x0
        1ba5a8:	13a01001 	movne	r1, #1	; 0x1
        1ba5ac:	1b685057 	blne	1bce710 <TUAsyncMessage::$__dt(void)>
        1ba5b0:	e5940090 	ldr	r0, [r4, #144]	; fField144
        1ba5b4:	e3300000 	teq	r0, #0	; 0x0
        1ba5b8:	1b684c48 	blne	1bcd6e0 <$__dl(void *)>
        1ba5bc:	e5945094 	ldr	r5, [r4, #148]	; fField148
        1ba5c0:	e3350000 	teq	r5, #0	; 0x0
        1ba5c4:	0a000007 	beq	1ba5e8 <TSCPLoader::MainDestructor(void)+0xa0>
        1ba5c8:	e285000c 	add	r0, r5, #12	; 0xc
        1ba5cc:	e3a01000 	mov	r1, #0	; 0x0
        1ba5d0:	eb685053 	bl	1bce724 <TUObject::$__dt(void)>
        1ba5d4:	e1a00005 	mov	r0, r5
        1ba5d8:	e3a01000 	mov	r1, #0	; 0x0
        1ba5dc:	eb685050 	bl	1bce724 <TUObject::$__dt(void)>
        1ba5e0:	e1a00005 	mov	r0, r5
        1ba5e4:	eb684c3d 	bl	1bcd6e0 <$__dl(void *)>
        1ba5e8:	e1a00004 	mov	r0, r4
        1ba5ec:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        1ba5f0:	ea67d043 	b	1bae704 <TAppWorld::$MainDestructor(void)>
    */
}

/**
 * Symbol: TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)
 * Address: 001ba5f4
 */
TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long) {
    /*
        1ba5f4:	e1a0c00d 	mov	ip, sp
        1ba5f8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1ba5fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ba600:	e1a04000 	mov	r4, r0
        1ba604:	e1a07001 	mov	r7, r1
        1ba608:	e1a06002 	mov	r6, r2
        1ba60c:	e1a05003 	mov	r5, r3
        1ba610:	e3a09000 	mov	r9, #0	; 0x0
        1ba614:	e1a01003 	mov	r1, r3
        1ba618:	e5809098 	str	r9, [r0, #152]	; fField152
        1ba61c:	eb613b9e 	bl	1a0949c <TSCPLoader::$SCPInit(unsigned long)>
        1ba620:	e1b08000 	movs	r8, r0
        1ba624:	e3e0a092 	mvn	sl, #146	; 0x92
        1ba628:	e24aac65 	sub	sl, sl, #25856	; 0x6500
        1ba62c:	1a000013 	bne	1ba680 <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0x8c>
        1ba630:	e1a02006 	mov	r2, r6
        1ba634:	e1a01007 	mov	r1, r7
        1ba638:	e1a00004 	mov	r0, r4
        1ba63c:	eb612f45 	bl	1a06358 <TSCPLoader::$Look(unsigned long, unsigned long)>
        1ba640:	e1a08000 	mov	r8, r0
        1ba644:	e59f1028 	ldr	r1, [pc, #28]	; 1ba674 <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0x80>
        1ba648:	e1300001 	teq	r0, r1
        1ba64c:	1288cc46 	addne	ip, r8, #17920	; 0x4600
        1ba650:	137c0053 	cmnne	ip, #83	; 0x53
        1ba654:	1138000a 	teqne	r8, sl
        1ba658:	0a000006 	beq	1ba678 <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0x84>
        1ba65c:	e3380000 	teq	r8, #0	; 0x0
        1ba660:	1a000004 	bne	1ba678 <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0x84>
        1ba664:	e1a00004 	mov	r0, r4
        1ba668:	eb612f32 	bl	1a06338 <TSCPLoader::$GetPackage(void)>
        1ba66c:	e1a08000 	mov	r8, r0
        1ba670:	ea000002 	b	1ba680 <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0x8c>
        1ba674:	ffffd8db 	swinv	0x00ffd8db
        1ba678:	e1380001 	teq	r8, r1
        1ba67c:	03a08000 	moveq	r8, #0	; 0x0
        1ba680:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1ba684:	e3300000 	teq	r0, #0	; 0x0
        1ba688:	0a00000c 	beq	1ba6c0 <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0xcc>
        1ba68c:	eb67f95d 	bl	1bb8c08 <TEndpoint::$EasyClose(void)>
        1ba690:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1ba694:	e3300000 	teq	r0, #0	; 0x0
        1ba698:	0a000003 	beq	1ba6ac <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0xb8>
        1ba69c:	e3a01001 	mov	r1, #1	; 0x1
        1ba6a0:	e1a0e00f 	mov	lr, pc
        1ba6a4:	e590f000 	ldr	pc, [r0]
        1ba6a8:	e5849078 	str	r9, [r4, #120]	; fField120
        1ba6ac:	e5940074 	ldr	r0, [r4, #116]	; fField116
        1ba6b0:	e3300000 	teq	r0, #0	; 0x0
        1ba6b4:	0a000001 	beq	1ba6c0 <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0xcc>
        1ba6b8:	eb67f54c 	bl	1bb7bf0 <TEndpoint::$Delete(void)>
        1ba6bc:	e5849074 	str	r9, [r4, #116]	; fField116
        1ba6c0:	e138000a 	teq	r8, sl
        1ba6c4:	03a08000 	moveq	r8, #0	; 0x0
        1ba6c8:	e5943098 	ldr	r3, [r4, #152]	; fField152
        1ba6cc:	e3330000 	teq	r3, #0	; 0x0
        1ba6d0:	0a000037 	beq	1ba7b4 <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0x1c0>
        1ba6d4:	e3380000 	teq	r8, #0	; 0x0
        1ba6d8:	1a000035 	bne	1ba7b4 <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0x1c0>
        1ba6dc:	e92d0008 	stmdb	sp!, {r3}
        1ba6e0:	e59f00d4 	ldr	r0, [pc, #d4]	; 1ba7bc <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0x1c8>
        1ba6e4:	e5900000 	ldr	r0, [r0]
        1ba6e8:	e28f1f34 	add	r1, pc, #208	; 0xd0
        1ba6ec:	e59f30d8 	ldr	r3, [pc, #d8]	; 1ba7cc <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0x1d8>
        1ba6f0:	e3a02000 	mov	r2, #0	; 0x0
        1ba6f4:	eb072e48 	bl	38601c <Satisfy__18TClassInfoRegistryCFPCcT1ClT3>
        1ba6f8:	e28dd004 	add	sp, sp, #4	; 0x4
        1ba6fc:	e3300000 	teq	r0, #0	; 0x0
        1ba700:	0a00002b 	beq	1ba7b4 <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0x1c0>
        1ba704:	e59f10c4 	ldr	r1, [pc, #c4]	; 1ba7d0 <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0x1dc>
        1ba708:	eb68609b 	bl	1bd297c <TClassInfo::$GetCapability( const(long))>
        1ba70c:	e3300000 	teq	r0, #0	; 0x0
        1ba710:	0a000027 	beq	1ba7b4 <TSCPLoader::SCPLoad(unsigned long, unsigned long, unsigned long)+0x1c0>
        1ba714:	e24dd018 	sub	sp, sp, #24	; 0x18
        1ba718:	e1a0000d 	mov	r0, sp
        1ba71c:	eb67ecf0 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        1ba720:	e1a0000d 	mov	r0, sp
        1ba724:	eb67f954 	bl	1bb8c7c <TOptionArray::$Init(void)>
        1ba728:	e24dd00c 	sub	sp, sp, #12	; 0xc
        1ba72c:	e1a0000d 	mov	r0, sp
        1ba730:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1ba734:	eb67f0fb 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1ba738:	e1a0000d 	mov	r0, sp
        1ba73c:	e5b41098 	ldr	r1, [r4, #152]!	; fField152
        1ba740:	eb68017b 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
        1ba744:	e1a0200d 	mov	r2, sp
        1ba748:	e59d100c 	ldr	r1, [sp, #12]
        1ba74c:	e28d000c 	add	r0, sp, #12	; 0xc
        1ba750:	eb67fd53 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1ba754:	e24dd008 	sub	sp, sp, #8	; 0x8
        1ba758:	e1a0000d 	mov	r0, sp
        1ba75c:	eb6926c6 	bl	1c0427c <TCMOSerialHWChipLoc::$__ct(void)>
        1ba760:	e58d500c 	str	r5, [sp, #12]
        1ba764:	e1a0200d 	mov	r2, sp
        1ba768:	e59d1014 	ldr	r1, [sp, #20]
        1ba76c:	e28d0014 	add	r0, sp, #20	; 0x14
        1ba770:	eb67fd4b 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1ba774:	e28dd010 	add	sp, sp, #16	; 0x10
        1ba778:	e1a0100d 	mov	r1, sp
        1ba77c:	e28d0004 	add	r0, sp, #4	; 0x4
        1ba780:	e3a02000 	mov	r2, #0	; 0x0
        1ba784:	eb67f505 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
        1ba788:	e3a01000 	mov	r1, #0	; 0x0
        1ba78c:	e59d0000 	ldr	r0, [sp]
        1ba790:	eb67f91e 	bl	1bb8c10 <TEndpoint::$EasyOpen(unsigned long)>
        1ba794:	e59d0000 	ldr	r0, [sp]
        1ba798:	eb67f515 	bl	1bb7bf4 <TEndpoint::$DeleteLeavingTool(void)>
        1ba79c:	e28dd004 	add	sp, sp, #4	; 0x4
        1ba7a0:	e1a0000d 	mov	r0, sp
        1ba7a4:	e3a01000 	mov	r1, #0	; 0x0
        1ba7a8:	eb67f0df 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        1ba7ac:	e28dd018 	add	sp, sp, #24	; 0x18
        1ba7b0:	e3a08000 	mov	r8, #0	; 0x0
        1ba7b4:	e1a00008 	mov	r0, r8
        1ba7b8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
        1ba7bc:	0c100b58 	ldceq	11, cr0, [r0], -#352
        1ba7c0:	54434d53 	strplb	r4, [r3], -#3411
        1ba7c4:	65727669 	ldrvsb	r7, [r2, -#1641]!
        1ba7c8:	63650000 	cmnvs	r5, #0	; 0x0
        1ba7cc:	73657276 	cmnvc	r5, #1610612743	; 0x60000007
        1ba7d0:	6175746f 	cmnvs	r5, pc, ror #8
    */
}

/**
 * Symbol: TSCPLoader::SCPInit(unsigned long)
 * Address: 001ba7d4
 */
TSCPLoader::SCPInit(unsigned long) {
    /*
        1ba7d4:	e1a0c00d 	mov	ip, sp
        1ba7d8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        1ba7dc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ba7e0:	e1a04000 	mov	r4, r0
        1ba7e4:	e1a05001 	mov	r5, r1
        1ba7e8:	e24dd098 	sub	sp, sp, #152	; 0x98
        1ba7ec:	e28d0080 	add	r0, sp, #128	; 0x80
        1ba7f0:	eb67ecbb 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
        1ba7f4:	e28d0074 	add	r0, sp, #116	; 0x74
        1ba7f8:	e3a01303 	mov	r1, #201326592	; 0xc000000
        1ba7fc:	eb67f0c9 	bl	1bb6b28 <TOption::$__ct(unsigned long)>
        1ba800:	e28d0060 	add	r0, sp, #96	; 0x60
        1ba804:	eb69269c 	bl	1c0427c <TCMOSerialHWChipLoc::$__ct(void)>
        1ba808:	e28d0044 	add	r0, sp, #68	; 0x44
        1ba80c:	eb680577 	bl	1bbbdf0 <TCMOSerialIOParms::$__ct(void)>
        1ba810:	e28d002c 	add	r0, sp, #44	; 0x2c
        1ba814:	eb680982 	bl	1bbce24 <TCMOSerialMiscConfig::$__ct(void)>
        1ba818:	e28d0018 	add	r0, sp, #24	; 0x18
        1ba81c:	eb680986 	bl	1bbce3c <TCMOInputFlowControlParms::$__ct(void)>
        1ba820:	e1a0000d 	mov	r0, sp
        1ba824:	eb68056f 	bl	1bbbde8 <TCMOSerialBuffers::$__ct(void)>
        1ba828:	e28d0080 	add	r0, sp, #128	; 0x80
        1ba82c:	eb67f912 	bl	1bb8c7c <TOptionArray::$Init(void)>
        1ba830:	e1b06000 	movs	r6, r0
        1ba834:	1a000055 	bne	1ba990 <TSCPLoader::SCPInit(unsigned long)+0x1bc>
        1ba838:	e28d0074 	add	r0, sp, #116	; 0x74
        1ba83c:	e59f1160 	ldr	r1, [pc, #160]	; 1ba9a4 <TSCPLoader::SCPInit(unsigned long)+0x1d0>
        1ba840:	eb68013b 	bl	1bbad34 <TOption::$SetAsService(unsigned long)>
        1ba844:	e28d2074 	add	r2, sp, #116	; 0x74
        1ba848:	e59d1080 	ldr	r1, [sp, #128]
        1ba84c:	e28d0080 	add	r0, sp, #128	; 0x80
        1ba850:	eb67fd13 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1ba854:	e1b06000 	movs	r6, r0
        1ba858:	1a00004c 	bne	1ba990 <TSCPLoader::SCPInit(unsigned long)+0x1bc>
        1ba85c:	e58d506c 	str	r5, [sp, #108]
        1ba860:	e28d2060 	add	r2, sp, #96	; 0x60
        1ba864:	e59d1080 	ldr	r1, [sp, #128]
        1ba868:	e28d0080 	add	r0, sp, #128	; 0x80
        1ba86c:	eb67fd0c 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1ba870:	e1b06000 	movs	r6, r0
        1ba874:	1a000045 	bne	1ba990 <TSCPLoader::SCPInit(unsigned long)+0x1bc>
        1ba878:	e3a00000 	mov	r0, #0	; 0x0
        1ba87c:	e58d0050 	str	r0, [sp, #80]
        1ba880:	e58d0054 	str	r0, [sp, #84]
        1ba884:	e3a00008 	mov	r0, #8	; 0x8
        1ba888:	e58d0058 	str	r0, [sp, #88]
        1ba88c:	e3a00d96 	mov	r0, #9600	; 0x2580
        1ba890:	e58d005c 	str	r0, [sp, #92]
        1ba894:	e28d2044 	add	r2, sp, #68	; 0x44
        1ba898:	e59d1080 	ldr	r1, [sp, #128]
        1ba89c:	e28d0080 	add	r0, sp, #128	; 0x80
        1ba8a0:	eb67fcff 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1ba8a4:	e1b06000 	movs	r6, r0
        1ba8a8:	1a000038 	bne	1ba990 <TSCPLoader::SCPInit(unsigned long)+0x1bc>
        1ba8ac:	e3a00b01 	mov	r0, #1024	; 0x400
        1ba8b0:	e58d0010 	str	r0, [sp, #16]
        1ba8b4:	e1a0200d 	mov	r2, sp
        1ba8b8:	e59d1080 	ldr	r1, [sp, #128]
        1ba8bc:	e28d0080 	add	r0, sp, #128	; 0x80
        1ba8c0:	eb67fcf7 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1ba8c4:	e1b06000 	movs	r6, r0
        1ba8c8:	1a000030 	bne	1ba990 <TSCPLoader::SCPInit(unsigned long)+0x1bc>
        1ba8cc:	e3a05001 	mov	r5, #1	; 0x1
        1ba8d0:	e5cd5027 	strb	r5, [sp, #39]
        1ba8d4:	e28d2018 	add	r2, sp, #24	; 0x18
        1ba8d8:	e59d1080 	ldr	r1, [sp, #128]
        1ba8dc:	e28d0080 	add	r0, sp, #128	; 0x80
        1ba8e0:	eb67fcef 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1ba8e4:	e1b06000 	movs	r6, r0
        1ba8e8:	1a000028 	bne	1ba990 <TSCPLoader::SCPInit(unsigned long)+0x1bc>
        1ba8ec:	e5cd503e 	strb	r5, [sp, #62]
        1ba8f0:	e5cd503f 	strb	r5, [sp, #63]
        1ba8f4:	e28d202c 	add	r2, sp, #44	; 0x2c
        1ba8f8:	e59d1080 	ldr	r1, [sp, #128]
        1ba8fc:	e28d0080 	add	r0, sp, #128	; 0x80
        1ba900:	eb67fce7 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
        1ba904:	e1b06000 	movs	r6, r0
        1ba908:	1a000020 	bne	1ba990 <TSCPLoader::SCPInit(unsigned long)+0x1bc>
        1ba90c:	e2841074 	add	r1, r4, #116	; 0x74
        1ba910:	e28d0080 	add	r0, sp, #128	; 0x80
        1ba914:	e3a02000 	mov	r2, #0	; 0x0
        1ba918:	eb67f4a0 	bl	1bb7ba0 <$CMGetEndpoint(TOptionArray *, TEndpoint **, unsigned char)>
        1ba91c:	e1b06000 	movs	r6, r0
        1ba920:	1a00001a 	bne	1ba990 <TSCPLoader::SCPInit(unsigned long)+0x1bc>
        1ba924:	e3a00000 	mov	r0, #0	; 0x0
        1ba928:	eb67ec6e 	bl	1bb5ae8 <TEndpointPipe::$__ct(void)>
        1ba92c:	e5840078 	str	r0, [r4, #120]	; fField120
        1ba930:	e3300000 	teq	r0, #0	; 0x0
        1ba934:	03a060e9 	moveq	r6, #233	; 0xe9
        1ba938:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
        1ba93c:	0a000013 	beq	1ba990 <TSCPLoader::SCPInit(unsigned long)+0x1bc>
        1ba940:	e1a01000 	mov	r1, r0
        1ba944:	e284007c 	add	r0, r4, #124	; 0x7c
        1ba948:	e3a02c01 	mov	r2, #256	; 0x100
        1ba94c:	eb612e7c 	bl	1a06344 <TCPReadMessage::$Init(TEndpointPipe *, unsigned long)>
        1ba950:	e1b06000 	movs	r6, r0
        1ba954:	1a00000d 	bne	1ba990 <TSCPLoader::SCPInit(unsigned long)+0x1bc>
        1ba958:	e3a03000 	mov	r3, #0	; 0x0
        1ba95c:	e3a02001 	mov	r2, #1	; 0x1
        1ba960:	e59f1040 	ldr	r1, [pc, #40]	; 1ba9a8 <TSCPLoader::SCPInit(unsigned long)+0x1d4>
        1ba964:	e92d000e 	stmdb	sp!, {r1, r2, r3}
        1ba968:	e3a03c01 	mov	r3, #256	; 0x100
        1ba96c:	e3a02c01 	mov	r2, #256	; 0x100
        1ba970:	e5940078 	ldr	r0, [r4, #120]	; fField120
        1ba974:	e5941074 	ldr	r1, [r4, #116]	; fField116
        1ba978:	eb691167 	bl	1bfef1c <TEndpointPipe::$Init(TEndpoint *, long, long, unsigned long, unsigned char, PipeCallBack *)>
        1ba97c:	e28dd00c 	add	sp, sp, #12	; 0xc
        1ba980:	e3a01000 	mov	r1, #0	; 0x0
        1ba984:	e5b40074 	ldr	r0, [r4, #116]!	; fField116
        1ba988:	eb67f8a0 	bl	1bb8c10 <TEndpoint::$EasyOpen(unsigned long)>
        1ba98c:	e1a06000 	mov	r6, r0
        1ba990:	e28d0080 	add	r0, sp, #128	; 0x80
        1ba994:	e3a01000 	mov	r1, #0	; 0x0
        1ba998:	eb67f063 	bl	1bb6b2c <TOptionArray::$__dt(void)>
        1ba99c:	e1a00006 	mov	r0, r6
        1ba9a0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        1ba9a4:	66736572 	undefined
        1ba9a8:	001c1f38 	andeqs	r1, ip, r8, lsr pc
    */
}

/**
 * Symbol: TSCPLoader::DeviceNotify(TConnectedDevice *)
 * Address: 001ba9ac
 */
TSCPLoader::DeviceNotify(TConnectedDevice *) {
    /*
        1ba9ac:	e1a0c00d 	mov	ip, sp
        1ba9b0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1ba9b4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1ba9b8:	e1a04000 	mov	r4, r0
        1ba9bc:	e1a05001 	mov	r5, r1
        1ba9c0:	e3a00000 	mov	r0, #0	; 0x0
        1ba9c4:	eb684b38 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        1ba9c8:	e3a070e9 	mov	r7, #233	; 0xe9
        1ba9cc:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
        1ba9d0:	e584008c 	str	r0, [r4, #140]	; fField140
        1ba9d4:	e3300000 	teq	r0, #0	; 0x0
        1ba9d8:	0a000026 	beq	1baa78 <TSCPLoader::DeviceNotify(TConnectedDevice *)+0xcc>
        1ba9dc:	e3a01001 	mov	r1, #1	; 0x1
        1ba9e0:	eb686c2b 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        1ba9e4:	e3300000 	teq	r0, #0	; 0x0
        1ba9e8:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1ba9ec:	eb6863f8 	bl	1bd39d4 <$GetGlobals>
        1ba9f0:	eb68b691 	bl	1be843c <TAppWorld::$GetMyPort(void)>
        1ba9f4:	e5901000 	ldr	r1, [r0]
        1ba9f8:	e594008c 	ldr	r0, [r4, #140]	; fField140
        1ba9fc:	eb6884e3 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
        1baa00:	e3300000 	teq	r0, #0	; 0x0
        1baa04:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1baa08:	e594008c 	ldr	r0, [r4, #140]	; fField140
        1baa0c:	e5941070 	ldr	r1, [r4, #112]	; fField112
        1baa10:	eb6888fe 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
        1baa14:	e3300000 	teq	r0, #0	; 0x0
        1baa18:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1baa1c:	e3a00024 	mov	r0, #36	; 0x24
        1baa20:	eb684f44 	bl	1bce738 <$__nw(unsigned int)>
        1baa24:	e1b06000 	movs	r6, r0
        1baa28:	11a00006 	movne	r0, r6
        1baa2c:	1b67d77f 	blne	1bb0830 <TAESystemEvent::$__ct(void)>
        1baa30:	e5846090 	str	r6, [r4, #144]	; fField144
        1baa34:	e3360000 	teq	r6, #0	; 0x0
        1baa38:	0a00000e 	beq	1baa78 <TSCPLoader::DeviceNotify(TConnectedDevice *)+0xcc>
        1baa3c:	e3a00028 	mov	r0, #40	; 0x28
        1baa40:	eb684f3c 	bl	1bce738 <$__nw(unsigned int)>
        1baa44:	e1b06000 	movs	r6, r0
        1baa48:	0a000007 	beq	1baa6c <TSCPLoader::DeviceNotify(TConnectedDevice *)+0xc0>
        1baa4c:	e3a08000 	mov	r8, #0	; 0x0
        1baa50:	e1a01008 	mov	r1, r8
        1baa54:	e1a00006 	mov	r0, r6
        1baa58:	eb684b09 	bl	1bcd684 <TSystemEvent::$__ct(unsigned long)>
        1baa5c:	e5c68010 	strb	r8, [r6, #16]
        1baa60:	e586800c 	str	r8, [r6, #12]
        1baa64:	e2860014 	add	r0, r6, #20	; 0x14
        1baa68:	eb656c11 	bl	1b15ab4 <TSysEventRequest::$__ct(void)>
        1baa6c:	e5846094 	str	r6, [r4, #148]	; fField148
        1baa70:	e3360000 	teq	r6, #0	; 0x0
        1baa74:	1a000001 	bne	1baa80 <TSCPLoader::DeviceNotify(TConnectedDevice *)+0xd4>
        1baa78:	e1a00007 	mov	r0, r7
        1baa7c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1baa80:	e1a00006 	mov	r0, r6
        1baa84:	eb686c07 	bl	1bd5aa8 <TSendSystemEvent::$Init(void)>
        1baa88:	e3300000 	teq	r0, #0	; 0x0
        1baa8c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1baa90:	e5940094 	ldr	r0, [r4, #148]	; fField148
        1baa94:	e59f6054 	ldr	r6, [pc, #54]	; 1baaf0 <TSCPLoader::DeviceNotify(TConnectedDevice *)+0x144>
        1baa98:	e1a01006 	mov	r1, r6
        1baa9c:	eb6884c5 	bl	1bdbdb8 <TSystemEvent::$SetEvent(unsigned long)>
        1baaa0:	e59f004c 	ldr	r0, [pc, #4c]	; 1baaf4 <TSCPLoader::DeviceNotify(TConnectedDevice *)+0x148>	; fField4
        1baaa4:	e5941090 	ldr	r1, [r4, #144]	; fField144
        1baaa8:	e5a10004 	str	r0, [r1, #4]!	; fField4
        1baaac:	e5940090 	ldr	r0, [r4, #144]	; fField144
        1baab0:	e5a06008 	str	r6, [r0, #8]!
        1baab4:	e5940090 	ldr	r0, [r4, #144]	; fField144
        1baab8:	e280000c 	add	r0, r0, #12	; 0xc
        1baabc:	e8b5500c 	ldmia	r5!, {r2, r3, ip, lr}
        1baac0:	e8a0500c 	stmia	r0!, {r2, r3, ip, lr}
        1baac4:	e8955000 	ldmia	r5, {ip, lr}
        1baac8:	e8805000 	stmia	r0, {ip, lr}
        1baacc:	e3a03000 	mov	r3, #0	; 0x0
        1baad0:	e3a02000 	mov	r2, #0	; 0x0
        1baad4:	e92d000c 	stmdb	sp!, {r2, r3}
        1baad8:	e3a03024 	mov	r3, #36	; 0x24
        1baadc:	e2844088 	add	r4, r4, #136	; 0x88
        1baae0:	e9b40006 	ldmib	r4!, {r1, r2}
        1baae4:	e5940004 	ldr	r0, [r4, #4]	; fField4
        1baae8:	eb688098 	bl	1bdad50 <TSendSystemEvent::$SendSystemEvent(TUAsyncMessage *, void *, unsigned long, void *, unsigned long)>
        1baaec:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        1baaf0:	646e6f74 	strvsbt	r6, [lr], -#3956
        1baaf4:	7379736d 	cmnvc	r9, #-1275068415	; 0xb4000001
    */
}

