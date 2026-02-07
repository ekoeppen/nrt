#include "include/PCirrusSoundDriver.h"

/**
 * Symbol: Sizeof__18PCirrusSoundDriverSFv
 * Address: 00059980
 */
void PCirrusSoundDriver::Sizeof() {
    /*
         59980:	e3a00f4b 	mov	r0, #300	; 0x12c
         59984:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusSoundDriver::New(void)
 * Address: 00059988
 */
PCirrusSoundDriver::New(void) {
    /*
         59988:	e1a0c00d 	mov	ip, sp
         5998c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         59990:	e24cb004 	sub	fp, ip, #4	; 0x4
         59994:	e1a04000 	mov	r4, r0
         59998:	eb6842df 	bl	1a6a51c <$GetDMAManagerObject(void)>
         5999c:	e2842028 	add	r2, r4, #40	; 0x28
         599a0:	e3a0100a 	mov	r1, #10	; 0xa
         599a4:	eb683ebe 	bl	1a694a4 <TDMAManager::$RequestAssignment(unsigned long, TDMAChannelDiscriptor *)>
         599a8:	eb6842db 	bl	1a6a51c <$GetDMAManagerObject(void)>
         599ac:	e2842038 	add	r2, r4, #56	; 0x38
         599b0:	e3a01009 	mov	r1, #9	; 0x9
         599b4:	eb683eba 	bl	1a694a4 <TDMAManager::$RequestAssignment(unsigned long, TDMAChannelDiscriptor *)>
         599b8:	e3a00912 	mov	r0, #294912	; 0x48000
         599bc:	e280040f 	add	r0, r0, #251658240	; 0xf000000
         599c0:	e5901000 	ldr	r1, [r0]
         599c4:	e3a02030 	mov	r2, #48	; 0x30
         599c8:	e1811002 	orr	r1, r1, r2
         599cc:	e5801000 	str	r1, [r0]
         599d0:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         599d4:	e28d0024 	add	r0, sp, #36	; 0x24
         599d8:	eb6dcf3e 	bl	1bcd6d8 <TUGestalt::$__ct(void)>
         599dc:	e1a0200d 	mov	r2, sp
         599e0:	e28d0024 	add	r0, sp, #36	; 0x24
         599e4:	e3a03024 	mov	r3, #36	; 0x24
         599e8:	e3a01402 	mov	r1, #33554432	; 0x2000000
         599ec:	e281100a 	add	r1, r1, #10	; 0xa
         599f0:	eb6de3dd 	bl	1bd296c <TUGestalt::$Gestalt(unsigned long, void *, unsigned long)>
         599f4:	e5dd0002 	ldrb	r0, [sp, #2]
         599f8:	e5c40070 	strb	r0, [r4, #112]	; fField112
         599fc:	e3e00106 	mvn	r0, #-2147483647	; 0x80000001
         59a00:	e5840080 	str	r0, [r4, #128]	; fField128
         59a04:	e5dd0003 	ldrb	r0, [sp, #3]
         59a08:	e5c40071 	strb	r0, [r4, #113]	; fField113
         59a0c:	e59d0014 	ldr	r0, [sp, #20]
         59a10:	e5840084 	str	r0, [r4, #132]	; fField132
         59a14:	e59d000c 	ldr	r0, [sp, #12]
         59a18:	e5840088 	str	r0, [r4, #136]	; fField136
         59a1c:	e59d0010 	ldr	r0, [sp, #16]
         59a20:	e584008c 	str	r0, [r4, #140]	; fField140
         59a24:	e59d000c 	ldr	r0, [sp, #12]
         59a28:	e584009c 	str	r0, [r4, #156]	; fField156
         59a2c:	e59d0010 	ldr	r0, [sp, #16]
         59a30:	e58400a0 	str	r0, [r4, #160]	; fField160
         59a34:	e59d0014 	ldr	r0, [sp, #20]
         59a38:	e58400a4 	str	r0, [r4, #164]	; fField164
         59a3c:	e59d0018 	ldr	r0, [sp, #24]
         59a40:	e58400a8 	str	r0, [r4, #168]	; fField168
         59a44:	e59d001c 	ldr	r0, [sp, #28]	; fField28
         59a48:	e58400ac 	str	r0, [r4, #172]	; fField172
         59a4c:	e59d0020 	ldr	r0, [sp, #32]
         59a50:	e58400b0 	str	r0, [r4, #176]	; fField176
         59a54:	e5dd0000 	ldrb	r0, [sp]
         59a58:	e5c400b4 	strb	r0, [r4, #180]	; fField180
         59a5c:	e5dd0001 	ldrb	r0, [sp, #1]
         59a60:	e5c400b5 	strb	r0, [r4, #181]	; fField181
         59a64:	e5d40070 	ldrb	r0, [r4, #112]	; fField112
         59a68:	e5c400b6 	strb	r0, [r4, #182]	; fField182
         59a6c:	e5d40071 	ldrb	r0, [r4, #113]	; fField113
         59a70:	e5c400b7 	strb	r0, [r4, #183]	; fField183
         59a74:	e59d0008 	ldr	r0, [sp, #8]	; fField8
         59a78:	e58400c4 	str	r0, [r4, #196]	; fField196
         59a7c:	e1a00004 	mov	r0, r4
         59a80:	e3a01001 	mov	r1, #1	; 0x1
         59a84:	eb6c9d8d 	bl	1b810c0 <PCirrusSoundDriver::$ConfigureOutputValues(unsigned char)>
         59a88:	e28420b4 	add	r2, r4, #180	; 0xb4
         59a8c:	e28d0024 	add	r0, sp, #36	; 0x24
         59a90:	e3a03014 	mov	r3, #20	; 0x14
         59a94:	e3a01402 	mov	r1, #33554432	; 0x2000000
         59a98:	e2811009 	add	r1, r1, #9	; 0x9
         59a9c:	eb6e8cf6 	bl	1bfce7c <TUGestalt::$RegisterGestalt(unsigned long, void *, unsigned long)>
         59aa0:	e3a01802 	mov	r1, #131072	; 0x20000
         59aa4:	e59f0168 	ldr	r0, [pc, #168]	; 59c14 <PCirrusSoundDriver::New(void)+0x28c>	; fField168
         59aa8:	eb6e1d84 	bl	1be10c0 <$FixedDivide>
         59aac:	e3a05000 	mov	r5, #0	; 0x0
         59ab0:	e5840090 	str	r0, [r4, #144]	; fField144
         59ab4:	e5c4506c 	strb	r5, [r4, #108]	; fField108
         59ab8:	e5845048 	str	r5, [r4, #72]	; fField72
         59abc:	e584504c 	str	r5, [r4, #76]	; fField76
         59ac0:	e5845050 	str	r5, [r4, #80]	; fField80
         59ac4:	e5845054 	str	r5, [r4, #84]	; fField84
         59ac8:	e5845058 	str	r5, [r4, #88]	; fField88
         59acc:	e584505c 	str	r5, [r4, #92]	; fField92
         59ad0:	e5845114 	str	r5, [r4, #276]	; fField276
         59ad4:	e5845064 	str	r5, [r4, #100]	; fField100
         59ad8:	e5845068 	str	r5, [r4, #104]	; fField104
         59adc:	e5c4506d 	strb	r5, [r4, #109]	; fField109
         59ae0:	e5c4506e 	strb	r5, [r4, #110]	; fField110
         59ae4:	e5940028 	ldr	r0, [r4, #40]	; fField40
         59ae8:	e58400c8 	str	r0, [r4, #200]	; fField200
         59aec:	e2801b01 	add	r1, r0, #1024	; 0x400
         59af0:	e58410cc 	str	r1, [r4, #204]	; fField204
         59af4:	e2801b03 	add	r1, r0, #3072	; 0xc00
         59af8:	e58410d0 	str	r1, [r4, #208]	; fField208
         59afc:	e2801a01 	add	r1, r0, #4096	; 0x1000
         59b00:	e2800b05 	add	r0, r0, #5120	; 0x1400
         59b04:	e58400d8 	str	r0, [r4, #216]	; fField216
         59b08:	e58410d4 	str	r1, [r4, #212]	; fField212
         59b0c:	e5845124 	str	r5, [r4, #292]	; fField292
         59b10:	e5845128 	str	r5, [r4, #296]	; fField296
         59b14:	e5940034 	ldr	r0, [r4, #52]	; fField52
         59b18:	e59f20f8 	ldr	r2, [pc, #f8]	; 59c18 <PCirrusSoundDriver::New(void)+0x290>
         59b1c:	e1a01004 	mov	r1, r4
         59b20:	e3a03001 	mov	r3, #1	; 0x1
         59b24:	eb6dfc50 	bl	1bd8c6c <$RegisterInterrupt(unsigned long, void *, long (*)(void *), void *)>
         59b28:	e5840118 	str	r0, [r4, #280]	; fField280
         59b2c:	eb6e8ccb 	bl	1bfce60 <$DisableInterrupt>
         59b30:	e3a06001 	mov	r6, #1	; 0x1
         59b34:	e594002c 	ldr	r0, [r4, #44]	; fField44
         59b38:	e5a06c00 	str	r6, [r0, #3072]!
         59b3c:	e594002c 	ldr	r0, [r4, #44]	; fField44
         59b40:	e5806000 	str	r6, [r0]
         59b44:	e59f00d0 	ldr	r0, [pc, #d0]	; 59c1c <PCirrusSoundDriver::New(void)+0x294>
         59b48:	e1a07000 	mov	r7, r0
         59b4c:	e3a02a06 	mov	r2, #24576	; 0x6000
         59b50:	e3a0100a 	mov	r1, #10	; 0xa
         59b54:	eb684edd 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         59b58:	e5940044 	ldr	r0, [r4, #68]	; fField68
         59b5c:	e59f20bc 	ldr	r2, [pc, #bc]	; 59c20 <PCirrusSoundDriver::New(void)+0x298>
         59b60:	e1a01004 	mov	r1, r4
         59b64:	e3a03001 	mov	r3, #1	; 0x1
         59b68:	eb6dfc3f 	bl	1bd8c6c <$RegisterInterrupt(unsigned long, void *, long (*)(void *), void *)>
         59b6c:	e584011c 	str	r0, [r4, #284]	; fField284
         59b70:	eb6e8cba 	bl	1bfce60 <$DisableInterrupt>
         59b74:	e594003c 	ldr	r0, [r4, #60]	; fField60
         59b78:	e5a06c00 	str	r6, [r0, #3072]!
         59b7c:	e594003c 	ldr	r0, [r4, #60]	; fField60
         59b80:	e5806000 	str	r6, [r0]
         59b84:	e5c450f4 	strb	r5, [r4, #244]	; fField244
         59b88:	e3a00080 	mov	r0, #128	; 0x80
         59b8c:	e5c40110 	strb	r0, [r4, #272]	; fField272
         59b90:	e59f008c 	ldr	r0, [pc, #8c]	; 59c24 <PCirrusSoundDriver::New(void)+0x29c>	; fField8
         59b94:	e5d00008 	ldrb	r0, [r0, #8]	; fField8
         59b98:	e5c40111 	strb	r0, [r4, #273]	; fField273
         59b9c:	e59f0084 	ldr	r0, [pc, #84]	; 59c28 <PCirrusSoundDriver::New(void)+0x2a0>	; fField84
         59ba0:	e5d00008 	ldrb	r0, [r0, #8]	; fField8
         59ba4:	e5c40112 	strb	r0, [r4, #274]	; fField274
         59ba8:	e5d40070 	ldrb	r0, [r4, #112]	; fField112
         59bac:	e3300000 	teq	r0, #0	; 0x0
         59bb0:	0a000002 	beq	59bc0 <PCirrusSoundDriver::New(void)+0x238>
         59bb4:	eb683a27 	bl	1a68458 <$InitADC(void)>
         59bb8:	eb6eca96 	bl	1c0c618 <$GetADCObject(void)>
         59bbc:	e5840074 	str	r0, [r4, #116]	; fField116
         59bc0:	e5d40071 	ldrb	r0, [r4, #113]	; fField113
         59bc4:	e3300000 	teq	r0, #0	; 0x0
         59bc8:	0a00000c 	beq	59c00 <PCirrusSoundDriver::New(void)+0x278>
         59bcc:	e5846078 	str	r6, [r4, #120]	; fField120
         59bd0:	e3a03003 	mov	r3, #3	; 0x3
         59bd4:	e92d0008 	stmdb	sp!, {r3}
         59bd8:	e59f304c 	ldr	r3, [pc, #4c]	; 59c2c <PCirrusSoundDriver::New(void)+0x2a4>	; fField4
         59bdc:	e1a02004 	mov	r2, r4
         59be0:	e1a00007 	mov	r0, r7
         59be4:	e3a01022 	mov	r1, #34	; 0x22
         59be8:	eb684ea9 	bl	1a6d694 <TBIOInterface::$RegisterInterrupt(unsigned char, void *, void (*)(void *), unsigned long)>
         59bec:	e28dd004 	add	sp, sp, #4	; 0x4
         59bf0:	e5840120 	str	r0, [r4, #288]	; fField288
         59bf4:	e1a01000 	mov	r1, r0
         59bf8:	e1a00007 	mov	r0, r7
         59bfc:	eb684ea6 	bl	1a6d69c <TBIOInterface::$EnableInterrupt(KeynesIntObject *)>
         59c00:	e28d0024 	add	r0, sp, #36	; 0x24
         59c04:	e3a01000 	mov	r1, #0	; 0x0
         59c08:	eb6dd2c5 	bl	1bce724 <TUObject::$__dt(void)>
         59c0c:	e1a00004 	mov	r0, r4
         59c10:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         59c14:	fffd8a52 	swinv	0x00fd8a52
         59c18:	001e60fc 	ldreqsh	r6, [lr], -ip
         59c1c:	0c100e98 	ldceq	14, cr0, [r0], -#608
         59c20:	001e6130 	andeqs	r6, lr, r0, lsr r1
         59c24:	003777cc 	eoreqs	r7, r7, ip, asr #15
         59c28:	003777dc 	ldreqsb	r7, [r7], -ip
         59c2c:	01b810ac 	moveqs	r1, ip, lsr #1
    */
}

/**
 * Symbol: PCirrusSoundDriver::StopOutput(void)
 * Address: 00059c30
 */
PCirrusSoundDriver::StopOutput(void) {
    /*
         59c30:	e1a0c00d 	mov	ip, sp
         59c34:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         59c38:	e24cb004 	sub	fp, ip, #4	; 0x4
         59c3c:	e1a04000 	mov	r4, r0
         59c40:	e5d0506c 	ldrb	r5, [r0, #108]	; fField108
         59c44:	e3a00000 	mov	r0, #0	; 0x0
         59c48:	e5c4006c 	strb	r0, [r4, #108]	; fField108
         59c4c:	e5940118 	ldr	r0, [r4, #280]	; fField280
         59c50:	eb6e8c82 	bl	1bfce60 <$DisableInterrupt>
         59c54:	e5940030 	ldr	r0, [r4, #48]	; fField48
         59c58:	e59f1058 	ldr	r1, [pc, #58]	; 59cb8 <PCirrusSoundDriver::StopOutput(void)+0x88>
         59c5c:	e5810000 	str	r0, [r1]
         59c60:	e3a00926 	mov	r0, #622592	; 0x98000
         59c64:	e280040f 	add	r0, r0, #251658240	; 0xf000000
         59c68:	e5902000 	ldr	r2, [r0]
         59c6c:	e5941030 	ldr	r1, [r4, #48]	; fField48
         59c70:	e1120001 	tst	r2, r1
         59c74:	0a000002 	beq	59c84 <PCirrusSoundDriver::StopOutput(void)+0x54>
         59c78:	e5902000 	ldr	r2, [r0]
         59c7c:	e1120001 	tst	r2, r1
         59c80:	1afffffc 	bne	59c78 <PCirrusSoundDriver::StopOutput(void)+0x48>
         59c84:	e5940048 	ldr	r0, [r4, #72]	; fField72
         59c88:	e3c00c02 	bic	r0, r0, #512	; 0x200
         59c8c:	e5840048 	str	r0, [r4, #72]	; fField72
         59c90:	e594104c 	ldr	r1, [r4, #76]	; fField76
         59c94:	e1812000 	orr	r2, r1, r0
         59c98:	e59f001c 	ldr	r0, [pc, #1c]	; 59cbc <PCirrusSoundDriver::StopOutput(void)+0x8c>
         59c9c:	e3a01006 	mov	r1, #6	; 0x6
         59ca0:	eb684e8c 	bl	1a6d6d8 <TBIOInterface::$BIOFIFOWriteCommand(int, unsigned long)>
         59ca4:	e3350000 	teq	r5, #0	; 0x0
         59ca8:	11a00004 	movne	r0, r4
         59cac:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         59cb0:	1a063111 	bne	1e60fc <PSoundDriver::OutputIntHandlerDispatcher(void)>
         59cb4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         59cb8:	0f098400 	swieq	0x00098400
         59cbc:	0c100e98 	ldceq	14, cr0, [r0], -#608
    */
}

/**
 * Symbol: PCirrusSoundDriver::OutputIsEnabled(void)
 * Address: 00059cc0
 */
PCirrusSoundDriver::OutputIsEnabled(void) {
    /*
         59cc0:	e5d0006c 	ldrb	r0, [r0, #108]	; fField108
         59cc4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusSoundDriver::OutputIsRunning(void)
 * Address: 00059cc8
 */
PCirrusSoundDriver::OutputIsRunning(void) {
    /*
         59cc8:	e5d0006c 	ldrb	r0, [r0, #108]	; fField108
         59ccc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusSoundDriver::CurrentOutputPtr(void)
 * Address: 00059cd0
 */
PCirrusSoundDriver::CurrentOutputPtr(void) {
    /*
         59cd0:	e59010cc 	ldr	r1, [r0, #204]	; fField204
         59cd4:	e5911000 	ldr	r1, [r1]
         59cd8:	e59020e4 	ldr	r2, [r0, #228]	; fField228
         59cdc:	e1520001 	cmp	r2, r1
         59ce0:	8a000006 	bhi	59d00 <PCirrusSoundDriver::CurrentOutputPtr(void)+0x30>
         59ce4:	e59030ec 	ldr	r3, [r0, #236]	; fField236
         59ce8:	e0823003 	add	r3, r2, r3
         59cec:	e1530001 	cmp	r3, r1
         59cf0:	859000dc 	ldrhi	r0, [r0, #220]	; fField220
         59cf4:	80411002 	subhi	r1, r1, r2
         59cf8:	80800001 	addhi	r0, r0, r1
         59cfc:	81a0f00e 	movhi	pc, lr
         59d00:	e59020e0 	ldr	r2, [r0, #224]	; fField224
         59d04:	e59000e8 	ldr	r0, [r0, #232]	; fField232
         59d08:	e0410000 	sub	r0, r1, r0
         59d0c:	e0820000 	add	r0, r2, r0
         59d10:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusSoundDriver::OutputVolume(long)
 * Address: 00059d14
 */
PCirrusSoundDriver::OutputVolume(long) {
    /*
         59d14:	e1a0c00d 	mov	ip, sp
         59d18:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         59d1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         59d20:	e1a04000 	mov	r4, r0
         59d24:	e1a05001 	mov	r5, r1
         59d28:	e5d00070 	ldrb	r0, [r0, #112]	; fField112
         59d2c:	e3300000 	teq	r0, #0	; 0x0
         59d30:	0a000005 	beq	59d4c <PCirrusSoundDriver::OutputVolume(long)+0x38>
         59d34:	e375010a 	cmn	r5, #-2147483646	; 0x80000002
         59d38:	1a000003 	bne	59d4c <PCirrusSoundDriver::OutputVolume(long)+0x38>
         59d3c:	e1a00004 	mov	r0, r4
         59d40:	e3a01001 	mov	r1, #1	; 0x1
         59d44:	eb6c9cda 	bl	1b810b4 <PCirrusSoundDriver::$SyncVolume(unsigned char)>
         59d48:	ea000002 	b	59d58 <PCirrusSoundDriver::OutputVolume(long)+0x44>
         59d4c:	e1a01005 	mov	r1, r5
         59d50:	e1a00004 	mov	r0, r4
         59d54:	eb6c9cd5 	bl	1b810b0 <PCirrusSoundDriver::$SetVolume(long)>
         59d58:	e5a45080 	str	r5, [r4, #128]!	; fField128
         59d5c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusSoundDriver::OutputVolume(void)
 * Address: 00059d60
 */
PCirrusSoundDriver::OutputVolume(void) {
    /*
         59d60:	e1a0c00d 	mov	ip, sp
         59d64:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         59d68:	e24cb004 	sub	fp, ip, #4	; 0x4
         59d6c:	e1a04000 	mov	r4, r0
         59d70:	e5d00070 	ldrb	r0, [r0, #112]	; fField112
         59d74:	e3300000 	teq	r0, #0	; 0x0
         59d78:	11a00004 	movne	r0, r4
         59d7c:	13a01001 	movne	r1, #1	; 0x1
         59d80:	1b6c9ccb 	blne	1b810b4 <PCirrusSoundDriver::$SyncVolume(unsigned char)>
         59d84:	e5940048 	ldr	r0, [r4, #72]	; fField72
         59d88:	e1a00520 	mov	r0, r0, lsr #10
         59d8c:	e1a00800 	mov	r0, r0, lsl #16
         59d90:	e59f1028 	ldr	r1, [pc, #28]	; 59dc0 <PCirrusSoundDriver::OutputVolume(void)+0x60>	; fField28
         59d94:	eb6e1cca 	bl	1be10c4 <$FixedMultiply>
         59d98:	e5941084 	ldr	r1, [r4, #132]	; fField132
         59d9c:	e0800001 	add	r0, r0, r1
         59da0:	e5941088 	ldr	r1, [r4, #136]	; fField136
         59da4:	e1510000 	cmp	r1, r0
         59da8:	c3a00102 	movgt	r0, #-2147483648	; 0x80000000
         59dac:	c91ba810 	ldmgtdb	fp, {r4, fp, sp, pc}
         59db0:	e5b4108c 	ldr	r1, [r4, #140]!	; fField140
         59db4:	e1510000 	cmp	r1, r0
         59db8:	b3a00000 	movlt	r0, #0	; 0x0
         59dbc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         59dc0:	fffd8a52 	swinv	0x00fd8a52
    */
}

/**
 * Symbol: PCirrusSoundDriver::OutputIntHandler(void)
 * Address: 00059dc4
 */
PCirrusSoundDriver::OutputIntHandler(void) {
    /*
         59dc4:	e590002c 	ldr	r0, [r0, #44]	; fField44
         59dc8:	e3a0101f 	mov	r1, #31	; 0x1f
         59dcc:	e5a01800 	str	r1, [r0, #2048]!	; fField2048
         59dd0:	e3a00000 	mov	r0, #0	; 0x0
         59dd4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusSoundDriver::SetInputBuffers(unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 00059dd8
 */
PCirrusSoundDriver::SetInputBuffers(unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
         59dd8:	e1a0c00d 	mov	ip, sp
         59ddc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         59de0:	e24cb004 	sub	fp, ip, #4	; 0x4
         59de4:	e1a04000 	mov	r4, r0
         59de8:	e1a06002 	mov	r6, r2
         59dec:	e1a05003 	mov	r5, r3
         59df0:	e3a07000 	mov	r7, #0	; 0x0
         59df4:	e3110003 	tst	r1, #3	; 0x3
         59df8:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         59dfc:	02050003 	andeq	r0, r5, #3	; 0x3
         59e00:	03300000 	teqeq	r0, #0	; 0x0
         59e04:	13e00032 	mvnne	r0, #50	; 0x32
         59e08:	12400c2a 	subne	r0, r0, #10752	; 0x2a00
         59e0c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         59e10:	e3560a01 	cmp	r6, #4096	; 0x1000
         59e14:	93580a01 	cmpls	r8, #4096	; 0x1000
         59e18:	83e00f8d 	mvnhi	r0, #564	; 0x234
         59e1c:	82400b0a 	subhi	r0, r0, #10240	; 0x2800
         59e20:	891ba9f0 	ldmhidb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         59e24:	e58410f8 	str	r1, [r4, #248]	; fField248
         59e28:	e1a00001 	mov	r0, r1
         59e2c:	eb01fe27 	bl	d96d0 <VToP(unsigned long)>
         59e30:	e5840100 	str	r0, [r4, #256]	; fField256
         59e34:	e58450fc 	str	r5, [r4, #252]	; fField252
         59e38:	e1a00005 	mov	r0, r5
         59e3c:	e5846108 	str	r6, [r4, #264]	; fField264
         59e40:	eb01fe22 	bl	d96d0 <VToP(unsigned long)>
         59e44:	e5a40104 	str	r0, [r4, #260]!	; fField260
         59e48:	e5a48008 	str	r8, [r4, #8]!	; fField8
         59e4c:	e1a00007 	mov	r0, r7
         59e50:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusSoundDriver::ScheduleInputBuffer(unsigned long, unsigned long)
 * Address: 00059e54
 */
PCirrusSoundDriver::ScheduleInputBuffer(unsigned long, unsigned long) {
    /*
         59e54:	e1a0c00d 	mov	ip, sp
         59e58:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         59e5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         59e60:	e3520004 	cmp	r2, #4	; 0x4
         59e64:	9a00000f 	bls	59ea8 <PCirrusSoundDriver::ScheduleInputBuffer(unsigned long, unsigned long)+0x54>
         59e68:	e5903038 	ldr	r3, [r0, #56]	; fField56
         59e6c:	e5d0c0f4 	ldrb	ip, [r0, #244]	; fField244
         59e70:	e2011001 	and	r1, r1, #1	; 0x1
         59e74:	e0800101 	add	r0, r0, r1, lsl #2
         59e78:	e33c0000 	teq	ip, #0	; 0x0
         59e7c:	15900100 	ldrne	r0, [r0, #256]	; fField256
         59e80:	15830000 	strne	r0, [r3]
         59e84:	1a000006 	bne	59ea4 <PCirrusSoundDriver::ScheduleInputBuffer(unsigned long, unsigned long)+0x50>
         59e88:	e2831a01 	add	r1, r3, #4096	; 0x1000
         59e8c:	e5812000 	str	r2, [r1]
         59e90:	e2831b05 	add	r1, r3, #5120	; 0x1400
         59e94:	e5812000 	str	r2, [r1]
         59e98:	e2831b01 	add	r1, r3, #1024	; 0x400
         59e9c:	e5900100 	ldr	r0, [r0, #256]	; fField256
         59ea0:	e5810000 	str	r0, [r1]
         59ea4:	ea000004 	b	59ebc <PCirrusSoundDriver::ScheduleInputBuffer(unsigned long, unsigned long)+0x68>
         59ea8:	e24dd040 	sub	sp, sp, #64	; 0x40
         59eac:	e1a0000d 	mov	r0, sp
         59eb0:	e28f1f03 	add	r1, pc, #12	; 0xc
         59eb4:	eb6d6ef6 	bl	1bb5a94 <$sprintf>
         59eb8:	e28dd040 	add	sp, sp, #64	; 0x40
         59ebc:	e3a00000 	mov	r0, #0	; 0x0
         59ec0:	e91ba800 	ldmdb	fp, {fp, sp, pc}
         59ec4:	4c657373 	stcmil	3, cr7, [r5], -#460
         59ec8:	20746861 	rsbcss	r6, r4, r1, ror #16
         59ecc:	6e203420 	cdpvs	4, 2, cr3, cr0, cr0, {1}
         59ed0:	25640000 	strcsb	r0, [r4]!
    */
}

/**
 * Symbol: PCirrusSoundDriver::PowerInputOn(long)
 * Address: 00059ed4
 */
PCirrusSoundDriver::PowerInputOn(long) {
    /*
         59ed4:	e1a0c00d 	mov	ip, sp
         59ed8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         59edc:	e24cb004 	sub	fp, ip, #4	; 0x4
         59ee0:	e1a04000 	mov	r4, r0
         59ee4:	e3a06000 	mov	r6, #0	; 0x0
         59ee8:	e3a07000 	mov	r7, #0	; 0x0
         59eec:	e3310000 	teq	r1, #0	; 0x0
         59ef0:	e5807050 	str	r7, [r0, #80]	; fField80
         59ef4:	13310004 	teqne	r1, #4	; 0x4
         59ef8:	0a000001 	beq	59f04 <PCirrusSoundDriver::PowerInputOn(long)+0x30>
         59efc:	e3310010 	teq	r1, #16	; 0x10
         59f00:	0a000002 	beq	59f10 <PCirrusSoundDriver::PowerInputOn(long)+0x3c>
         59f04:	e3a00b02 	mov	r0, #2048	; 0x800
         59f08:	e5840050 	str	r0, [r4, #80]	; fField80
         59f0c:	ea000002 	b	59f1c <PCirrusSoundDriver::PowerInputOn(long)+0x48>
         59f10:	e3a00b01 	mov	r0, #1024	; 0x400
         59f14:	e3a06001 	mov	r6, #1	; 0x1
         59f18:	e5840050 	str	r0, [r4, #80]	; fField80
         59f1c:	e5d4006e 	ldrb	r0, [r4, #110]	; fField110
         59f20:	e3300000 	teq	r0, #0	; 0x0
         59f24:	1a000004 	bne	59f3c <PCirrusSoundDriver::PowerInputOn(long)+0x68>
         59f28:	eb68417b 	bl	1a6a51c <$GetDMAManagerObject(void)>
         59f2c:	e3a01009 	mov	r1, #9	; 0x9
         59f30:	eb683d5c 	bl	1a694a8 <TDMAManager::$PowerOnAssignment(unsigned long)>
         59f34:	e3a00001 	mov	r0, #1	; 0x1
         59f38:	e5c4006e 	strb	r0, [r4, #110]	; fField110
         59f3c:	e3a00b11 	mov	r0, #17408	; 0x4400
         59f40:	e5840058 	str	r0, [r4, #88]	; fField88
         59f44:	e59f0064 	ldr	r0, [pc, #64]	; 59fb0 <PCirrusSoundDriver::PowerInputOn(long)+0xdc>	; fField64
         59f48:	e1a05000 	mov	r5, r0
         59f4c:	e3a0100b 	mov	r1, #11	; 0xb
         59f50:	eb684dda 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         59f54:	e5941058 	ldr	r1, [r4, #88]	; fField88
         59f58:	e5942054 	ldr	r2, [r4, #84]	; fField84
         59f5c:	e1812002 	orr	r2, r1, r2
         59f60:	e594105c 	ldr	r1, [r4, #92]	; fField92
         59f64:	e1821001 	orr	r1, r2, r1
         59f68:	e1812000 	orr	r2, r1, r0
         59f6c:	e1a00005 	mov	r0, r5
         59f70:	e3a0100b 	mov	r1, #11	; 0xb
         59f74:	eb684dd5 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         59f78:	e1a00005 	mov	r0, r5
         59f7c:	e3a01004 	mov	r1, #4	; 0x4
         59f80:	e5942050 	ldr	r2, [r4, #80]	; fField80
         59f84:	eb684dd3 	bl	1a6d6d8 <TBIOInterface::$BIOFIFOWriteCommand(int, unsigned long)>
         59f88:	e3a00018 	mov	r0, #24	; 0x18
         59f8c:	eb6ec597 	bl	1c0b5f0 <$IOPowerOn(unsigned long)>
         59f90:	e3360000 	teq	r6, #0	; 0x0
         59f94:	13a0001a 	movne	r0, #26	; 0x1a
         59f98:	1b6ec594 	blne	1c0b5f0 <$IOPowerOn(unsigned long)>
         59f9c:	e5b40038 	ldr	r0, [r4, #56]!	; fField56
         59fa0:	e5a07c00 	str	r7, [r0, #3072]!
         59fa4:	e3a00020 	mov	r0, #32	; 0x20
         59fa8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         59fac:	ea692cd1 	b	1aa52f8 <$Wait(unsigned long)>
         59fb0:	0c100e98 	ldceq	14, cr0, [r0], -#608
    */
}

/**
 * Symbol: PCirrusSoundDriver::Delete(void)
 * Address: 00059fb4
 */
PCirrusSoundDriver::Delete(void) {
    /*
         59fb4:	e1a0c00d 	mov	ip, sp
         59fb8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         59fbc:	e24cb004 	sub	fp, ip, #4	; 0x4
         59fc0:	e1a04000 	mov	r4, r0
         59fc4:	e5900118 	ldr	r0, [r0, #280]	; fField280
         59fc8:	eb6ebd4b 	bl	1c094fc <$DeregisterInterrupt(InterruptObject *)>
         59fcc:	e5b4011c 	ldr	r0, [r4, #284]!	; fField284
         59fd0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         59fd4:	ea6ebd48 	b	1c094fc <$DeregisterInterrupt(InterruptObject *)>
    */
}

/**
 * Symbol: PCirrusSoundDriver::PowerInputOff(void)
 * Address: 00059fd8
 */
PCirrusSoundDriver::PowerInputOff(void) {
    /*
         59fd8:	e1a0c00d 	mov	ip, sp
         59fdc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         59fe0:	e24cb004 	sub	fp, ip, #4	; 0x4
         59fe4:	e1a04000 	mov	r4, r0
         59fe8:	eb6c9c25 	bl	1b81084 <PCirrusSoundDriver::$StopInput(void)>
         59fec:	e3a05000 	mov	r5, #0	; 0x0
         59ff0:	e5940038 	ldr	r0, [r4, #56]	; fField56
         59ff4:	e5a05c00 	str	r5, [r0, #3072]!
         59ff8:	e5d4006e 	ldrb	r0, [r4, #110]	; fField110
         59ffc:	e3300000 	teq	r0, #0	; 0x0
         5a000:	0a000003 	beq	5a014 <PCirrusSoundDriver::PowerInputOff(void)+0x3c>
         5a004:	eb684144 	bl	1a6a51c <$GetDMAManagerObject(void)>
         5a008:	e3a01009 	mov	r1, #9	; 0x9
         5a00c:	eb683d26 	bl	1a694ac <TDMAManager::$PowerOffAssignment(unsigned long)>
         5a010:	e5c4506e 	strb	r5, [r4, #110]	; fField110
         5a014:	e59f0044 	ldr	r0, [pc, #44]	; 5a060 <PCirrusSoundDriver::PowerInputOff(void)+0x88>	; fField44
         5a018:	e1a06000 	mov	r6, r0
         5a01c:	e3a0100b 	mov	r1, #11	; 0xb
         5a020:	eb684da6 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         5a024:	e5941058 	ldr	r1, [r4, #88]	; fField88
         5a028:	e1c00001 	bic	r0, r0, r1
         5a02c:	e594105c 	ldr	r1, [r4, #92]	; fField92
         5a030:	e5942054 	ldr	r2, [r4, #84]	; fField84
         5a034:	e1821001 	orr	r1, r2, r1
         5a038:	e1812000 	orr	r2, r1, r0
         5a03c:	e1a00006 	mov	r0, r6
         5a040:	e3a0100b 	mov	r1, #11	; 0xb
         5a044:	e5a45058 	str	r5, [r4, #88]!	; fField88
         5a048:	eb684da0 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         5a04c:	e3a0001a 	mov	r0, #26	; 0x1a
         5a050:	eb6ec565 	bl	1c0b5ec <$IOPowerOff(unsigned long)>
         5a054:	e3a00018 	mov	r0, #24	; 0x18
         5a058:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         5a05c:	ea6ec562 	b	1c0b5ec <$IOPowerOff(unsigned long)>
         5a060:	0c100e98 	ldceq	14, cr0, [r0], -#608
    */
}

/**
 * Symbol: PCirrusSoundDriver::StartInput(void)
 * Address: 0005a064
 */
PCirrusSoundDriver::StartInput(void) {
    /*
         5a064:	e1a0c00d 	mov	ip, sp
         5a068:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5a06c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5a070:	e1a04000 	mov	r4, r0
         5a074:	e5901050 	ldr	r1, [r0, #80]	; fField80
         5a078:	e3110b01 	tst	r1, #1024	; 0x400
         5a07c:	05d40111 	ldreqb	r0, [r4, #273]	; fField273
         5a080:	15d40112 	ldrneb	r0, [r4, #274]	; fField274
         5a084:	e1810300 	orr	r0, r1, r0, lsl #6
         5a088:	e3802020 	orr	r2, r0, #32	; 0x20
         5a08c:	e5842050 	str	r2, [r4, #80]	; fField80
         5a090:	e59f002c 	ldr	r0, [pc, #2c]	; 5a0c4 <PCirrusSoundDriver::StartInput(void)+0x60>
         5a094:	e3a01004 	mov	r1, #4	; 0x4
         5a098:	eb684d8e 	bl	1a6d6d8 <TBIOInterface::$BIOFIFOWriteCommand(int, unsigned long)>
         5a09c:	e3a01001 	mov	r1, #1	; 0x1
         5a0a0:	e594011c 	ldr	r0, [r4, #284]	; fField284
         5a0a4:	eb6e874b 	bl	1bfbdd8 <$EnableInterrupt>
         5a0a8:	e3a00001 	mov	r0, #1	; 0x1
         5a0ac:	e5c400f4 	strb	r0, [r4, #244]	; fField244
         5a0b0:	e3a01926 	mov	r1, #622592	; 0x98000
         5a0b4:	e281140f 	add	r1, r1, #251658240	; 0xf000000
         5a0b8:	e5b40040 	ldr	r0, [r4, #64]!	; fField64
         5a0bc:	e5810000 	str	r0, [r1]
         5a0c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         5a0c4:	0c100e98 	ldceq	14, cr0, [r0], -#608
    */
}

/**
 * Symbol: PCirrusSoundDriver::StopInput(void)
 * Address: 0005a0c8
 */
PCirrusSoundDriver::StopInput(void) {
    /*
         5a0c8:	e1a0c00d 	mov	ip, sp
         5a0cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5a0d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         5a0d4:	e1a04000 	mov	r4, r0
         5a0d8:	e3a05000 	mov	r5, #0	; 0x0
         5a0dc:	e1a02005 	mov	r2, r5
         5a0e0:	e5805050 	str	r5, [r0, #80]	; fField80
         5a0e4:	e59f0044 	ldr	r0, [pc, #44]	; 5a130 <PCirrusSoundDriver::StopInput(void)+0x68>	; fField44
         5a0e8:	e3a01004 	mov	r1, #4	; 0x4
         5a0ec:	eb684d79 	bl	1a6d6d8 <TBIOInterface::$BIOFIFOWriteCommand(int, unsigned long)>
         5a0f0:	e594011c 	ldr	r0, [r4, #284]	; fField284
         5a0f4:	eb6e8b59 	bl	1bfce60 <$DisableInterrupt>
         5a0f8:	e5940040 	ldr	r0, [r4, #64]	; fField64
         5a0fc:	e59f1030 	ldr	r1, [pc, #30]	; 5a134 <PCirrusSoundDriver::StopInput(void)+0x6c>
         5a100:	e5810000 	str	r0, [r1]
         5a104:	e3a00926 	mov	r0, #622592	; 0x98000
         5a108:	e280040f 	add	r0, r0, #251658240	; 0xf000000
         5a10c:	e5902000 	ldr	r2, [r0]
         5a110:	e5941040 	ldr	r1, [r4, #64]	; fField64
         5a114:	e1120001 	tst	r2, r1
         5a118:	0a000002 	beq	5a128 <PCirrusSoundDriver::StopInput(void)+0x60>
         5a11c:	e5902000 	ldr	r2, [r0]
         5a120:	e1120001 	tst	r2, r1
         5a124:	1afffffc 	bne	5a11c <PCirrusSoundDriver::StopInput(void)+0x54>
         5a128:	e5c450f4 	strb	r5, [r4, #244]	; fField244
         5a12c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5a130:	0c100e98 	ldceq	14, cr0, [r0], -#608
         5a134:	0f098400 	swieq	0x00098400
    */
}

/**
 * Symbol: PCirrusSoundDriver::InputIsEnabled(void)
 * Address: 0005a138
 */
PCirrusSoundDriver::InputIsEnabled(void) {
    /*
         5a138:	e5d000f4 	ldrb	r0, [r0, #244]	; fField244
         5a13c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusSoundDriver::InputIsRunning(void)
 * Address: 0005a140
 */
PCirrusSoundDriver::InputIsRunning(void) {
    /*
         5a140:	e5d000f4 	ldrb	r0, [r0, #244]	; fField244
         5a144:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusSoundDriver::CurrentInputPtr(void)
 * Address: 0005a148
 */
PCirrusSoundDriver::CurrentInputPtr(void) {
    /*
         5a148:	e5901038 	ldr	r1, [r0, #56]	; fField56
         5a14c:	e5911400 	ldr	r1, [r1, #1024]
         5a150:	e5902100 	ldr	r2, [r0, #256]	; fField256
         5a154:	e1520001 	cmp	r2, r1
         5a158:	8a000006 	bhi	5a178 <PCirrusSoundDriver::CurrentInputPtr(void)+0x30>
         5a15c:	e5903108 	ldr	r3, [r0, #264]	; fField264
         5a160:	e0823003 	add	r3, r2, r3
         5a164:	e1530001 	cmp	r3, r1
         5a168:	859000f8 	ldrhi	r0, [r0, #248]	; fField248
         5a16c:	80411002 	subhi	r1, r1, r2
         5a170:	80800001 	addhi	r0, r0, r1
         5a174:	81a0f00e 	movhi	pc, lr
         5a178:	e59020fc 	ldr	r2, [r0, #252]	; fField252
         5a17c:	e5900104 	ldr	r0, [r0, #260]	; fField260
         5a180:	e0410000 	sub	r0, r1, r0
         5a184:	e0820000 	add	r0, r2, r0
         5a188:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusSoundDriver::InputVolume(long)
 * Address: 0005a18c
 */
PCirrusSoundDriver::InputVolume(long) {
    /*
         5a18c:	e3510000 	cmp	r1, #0	; 0x0
         5a190:	b3a01000 	movlt	r1, #0	; 0x0
         5a194:	ba000001 	blt	5a1a0 <PCirrusSoundDriver::InputVolume(long)+0x14>
         5a198:	e35100ff 	cmp	r1, #255	; 0xff
         5a19c:	c3a010ff 	movgt	r1, #255	; 0xff
         5a1a0:	e20110ff 	and	r1, r1, #255	; 0xff
         5a1a4:	e5c01110 	strb	r1, [r0, #272]	; fField272
         5a1a8:	e59f2044 	ldr	r2, [pc, #44]	; 5a1f4 <PCirrusSoundDriver::InputVolume(long)+0x68>	; fField44
         5a1ac:	e7d22241 	ldrb	r2, [r2, r1, asr #4]	; fField4
         5a1b0:	e5c02111 	strb	r2, [r0, #273]	; fField273
         5a1b4:	e59f203c 	ldr	r2, [pc, #3c]	; 5a1f8 <PCirrusSoundDriver::InputVolume(long)+0x6c>
         5a1b8:	e7d21241 	ldrb	r1, [r2, r1, asr #4]	; fField4
         5a1bc:	e5c01112 	strb	r1, [r0, #274]	; fField274
         5a1c0:	e5902050 	ldr	r2, [r0, #80]	; fField80
         5a1c4:	e3120b01 	tst	r2, #1024	; 0x400
         5a1c8:	05d01111 	ldreqb	r1, [r0, #273]	; fField273
         5a1cc:	15d01112 	ldrneb	r1, [r0, #274]	; fField274
         5a1d0:	e3c22d0f 	bic	r2, r2, #960	; 0x3c0
         5a1d4:	e1822301 	orr	r2, r2, r1, lsl #6
         5a1d8:	e5802050 	str	r2, [r0, #80]	; fField80
         5a1dc:	e5d000f4 	ldrb	r0, [r0, #244]	; fField244
         5a1e0:	e3300000 	teq	r0, #0	; 0x0
         5a1e4:	159f0010 	ldrne	r0, [pc, #10]	; 5a1fc <PCirrusSoundDriver::InputVolume(long)+0x70>
         5a1e8:	13a01004 	movne	r1, #4	; 0x4
         5a1ec:	1a684d37 	bne	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         5a1f0:	e1a0f00e 	mov	pc, lr
         5a1f4:	003777cc 	eoreqs	r7, r7, ip, asr #15
         5a1f8:	003777dc 	ldreqsb	r7, [r7], -ip
         5a1fc:	0c100e98 	ldceq	14, cr0, [r0], -#608
    */
}

/**
 * Symbol: PCirrusSoundDriver::InputVolume(void)
 * Address: 0005a200
 */
PCirrusSoundDriver::InputVolume(void) {
    /*
         5a200:	e5d00110 	ldrb	r0, [r0, #272]	; fField272
         5a204:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusSoundDriver::InputIntHandler(void)
 * Address: 0005a208
 */
PCirrusSoundDriver::InputIntHandler(void) {
    /*
         5a208:	e590003c 	ldr	r0, [r0, #60]	; fField60
         5a20c:	e3a0101f 	mov	r1, #31	; 0x1f
         5a210:	e5a01800 	str	r1, [r0, #2048]!	; fField2048
         5a214:	e3a00000 	mov	r0, #0	; 0x0
         5a218:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusSoundDriver::EnableExtSoundSource(long)
 * Address: 0005a21c
 */
PCirrusSoundDriver::EnableExtSoundSource(long) {
    /*
         5a21c:	e1a0c00d 	mov	ip, sp
         5a220:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5a224:	e24cb004 	sub	fp, ip, #4	; 0x4
         5a228:	e1a04000 	mov	r4, r0
         5a22c:	e3a06000 	mov	r6, #0	; 0x0
         5a230:	e3510005 	cmp	r1, #5	; 0x5
         5a234:	908ff101 	addls	pc, pc, r1, lsl #2
         5a238:	ea00002c 	b	5a2f0 <PCirrusSoundDriver::EnableExtSoundSource(long)+0xd4>
         5a23c:	ea00002b 	b	5a2f0 <PCirrusSoundDriver::EnableExtSoundSource(long)+0xd4>
         5a240:	ea000005 	b	5a25c <PCirrusSoundDriver::EnableExtSoundSource(long)+0x40>
         5a244:	ea000007 	b	5a268 <PCirrusSoundDriver::EnableExtSoundSource(long)+0x4c>
         5a248:	ea000003 	b	5a25c <PCirrusSoundDriver::EnableExtSoundSource(long)+0x40>
         5a24c:	ea000005 	b	5a268 <PCirrusSoundDriver::EnableExtSoundSource(long)+0x4c>
         5a250:	e5940064 	ldr	r0, [r4, #100]	; fField100
         5a254:	e3800040 	orr	r0, r0, #64	; 0x40
         5a258:	ea000004 	b	5a270 <PCirrusSoundDriver::EnableExtSoundSource(long)+0x54>
         5a25c:	e5940064 	ldr	r0, [r4, #100]	; fField100
         5a260:	e3800c01 	orr	r0, r0, #256	; 0x100
         5a264:	ea000001 	b	5a270 <PCirrusSoundDriver::EnableExtSoundSource(long)+0x54>
         5a268:	e5940064 	ldr	r0, [r4, #100]	; fField100
         5a26c:	e3800080 	orr	r0, r0, #128	; 0x80
         5a270:	e5840064 	str	r0, [r4, #100]	; fField100
         5a274:	e5940068 	ldr	r0, [r4, #104]	; fField104
         5a278:	e3700001 	cmn	r0, #1	; 0x1
         5a27c:	0a000018 	beq	5a2e4 <PCirrusSoundDriver::EnableExtSoundSource(long)+0xc8>
         5a280:	e5941064 	ldr	r1, [r4, #100]	; fField100
         5a284:	e1810000 	orr	r0, r1, r0
         5a288:	e584004c 	str	r0, [r4, #76]	; fField76
         5a28c:	e1a00004 	mov	r0, r4
         5a290:	eb6c9b88 	bl	1b810b8 <PCirrusSoundDriver::$SyncExtSourceVolume(void)>
         5a294:	e594004c 	ldr	r0, [r4, #76]	; fField76
         5a298:	e5941048 	ldr	r1, [r4, #72]	; fField72
         5a29c:	e1802001 	orr	r2, r0, r1
         5a2a0:	e59f0044 	ldr	r0, [pc, #44]	; 5a2ec <PCirrusSoundDriver::EnableExtSoundSource(long)+0xd0>	; fField44
         5a2a4:	e1a05000 	mov	r5, r0
         5a2a8:	e3a01006 	mov	r1, #6	; 0x6
         5a2ac:	eb684d07 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         5a2b0:	e1a00005 	mov	r0, r5
         5a2b4:	e3a0100b 	mov	r1, #11	; 0xb
         5a2b8:	eb684d00 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         5a2bc:	e3a01b33 	mov	r1, #52224	; 0xcc00
         5a2c0:	e584105c 	str	r1, [r4, #92]	; fField92
         5a2c4:	e2844050 	add	r4, r4, #80	; 0x50
         5a2c8:	e9b40006 	ldmib	r4!, {r1, r2}
         5a2cc:	e1811002 	orr	r1, r1, r2
         5a2d0:	e3811b33 	orr	r1, r1, #52224	; 0xcc00
         5a2d4:	e1812000 	orr	r2, r1, r0
         5a2d8:	e1a00005 	mov	r0, r5
         5a2dc:	e3a0100b 	mov	r1, #11	; 0xb
         5a2e0:	eb684cfa 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         5a2e4:	e1a00006 	mov	r0, r6
         5a2e8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         5a2ec:	0c100e98 	ldceq	14, cr0, [r0], -#608
         5a2f0:	e59f6000 	ldr	r6, [pc, #0]	; 5a2f8 <PCirrusSoundDriver::EnableExtSoundSource(long)+0xdc>
         5a2f4:	eafffffa 	b	5a2e4 <PCirrusSoundDriver::EnableExtSoundSource(long)+0xc8>
         5a2f8:	ffff8ac7 	swinv	0x00ff8ac7
    */
}

/**
 * Symbol: PCirrusSoundDriver::SetSoundHardwareInfo(TSoundDriverInfo const *)
 * Address: 0005a2fc
 */
PCirrusSoundDriver::SetSoundHardwareInfo(TSoundDriverInfo const *) {
    /*
         5a2fc:	e59f0000 	ldr	r0, [pc, #0]	; 5a304 <PCirrusSoundDriver::SetSoundHardwareInfo(TSoundDriverInfo const *)+0x8>
         5a300:	e1a0f00e 	mov	pc, lr
         5a304:	ffff8ac7 	swinv	0x00ff8ac7
    */
}

/**
 * Symbol: PCirrusSoundDriver::DisableExtSoundSource(long)
 * Address: 0005a308
 */
PCirrusSoundDriver::DisableExtSoundSource(long) {
    /*
         5a308:	e1a0c00d 	mov	ip, sp
         5a30c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5a310:	e24cb004 	sub	fp, ip, #4	; 0x4
         5a314:	e1a04000 	mov	r4, r0
         5a318:	e3a06000 	mov	r6, #0	; 0x0
         5a31c:	e3510005 	cmp	r1, #5	; 0x5
         5a320:	908ff101 	addls	pc, pc, r1, lsl #2
         5a324:	ea000030 	b	5a3ec <PCirrusSoundDriver::DisableExtSoundSource(long)+0xe4>
         5a328:	ea00002f 	b	5a3ec <PCirrusSoundDriver::DisableExtSoundSource(long)+0xe4>
         5a32c:	ea000005 	b	5a348 <PCirrusSoundDriver::DisableExtSoundSource(long)+0x40>
         5a330:	ea000007 	b	5a354 <PCirrusSoundDriver::DisableExtSoundSource(long)+0x4c>
         5a334:	ea000003 	b	5a348 <PCirrusSoundDriver::DisableExtSoundSource(long)+0x40>
         5a338:	ea000005 	b	5a354 <PCirrusSoundDriver::DisableExtSoundSource(long)+0x4c>
         5a33c:	e5940064 	ldr	r0, [r4, #100]	; fField100
         5a340:	e3c00040 	bic	r0, r0, #64	; 0x40
         5a344:	ea000004 	b	5a35c <PCirrusSoundDriver::DisableExtSoundSource(long)+0x54>
         5a348:	e5940064 	ldr	r0, [r4, #100]	; fField100
         5a34c:	e3c00c01 	bic	r0, r0, #256	; 0x100
         5a350:	ea000001 	b	5a35c <PCirrusSoundDriver::DisableExtSoundSource(long)+0x54>
         5a354:	e5940064 	ldr	r0, [r4, #100]	; fField100
         5a358:	e3c00080 	bic	r0, r0, #128	; 0x80
         5a35c:	e5840064 	str	r0, [r4, #100]	; fField100
         5a360:	e5940064 	ldr	r0, [r4, #100]	; fField100
         5a364:	e59f507c 	ldr	r5, [pc, #7c]	; 5a3e8 <PCirrusSoundDriver::DisableExtSoundSource(long)+0xe0>
         5a368:	e3300000 	teq	r0, #0	; 0x0
         5a36c:	1a00000d 	bne	5a3a8 <PCirrusSoundDriver::DisableExtSoundSource(long)+0xa0>
         5a370:	e1a00005 	mov	r0, r5
         5a374:	e3a0100b 	mov	r1, #11	; 0xb
         5a378:	eb684cd0 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         5a37c:	e594105c 	ldr	r1, [r4, #92]	; fField92
         5a380:	e1c00001 	bic	r0, r0, r1
         5a384:	e5941058 	ldr	r1, [r4, #88]	; fField88
         5a388:	e5942054 	ldr	r2, [r4, #84]	; fField84
         5a38c:	e1811002 	orr	r1, r1, r2
         5a390:	e1812000 	orr	r2, r1, r0
         5a394:	e3a00000 	mov	r0, #0	; 0x0
         5a398:	e584005c 	str	r0, [r4, #92]	; fField92
         5a39c:	e1a00005 	mov	r0, r5
         5a3a0:	e3a0100b 	mov	r1, #11	; 0xb
         5a3a4:	eb684cc9 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         5a3a8:	e5940068 	ldr	r0, [r4, #104]	; fField104
         5a3ac:	e3700001 	cmn	r0, #1	; 0x1
         5a3b0:	0a00000a 	beq	5a3e0 <PCirrusSoundDriver::DisableExtSoundSource(long)+0xd8>
         5a3b4:	e5941064 	ldr	r1, [r4, #100]	; fField100
         5a3b8:	e1810000 	orr	r0, r1, r0
         5a3bc:	e584004c 	str	r0, [r4, #76]	; fField76
         5a3c0:	e1a00004 	mov	r0, r4
         5a3c4:	eb6c9b3b 	bl	1b810b8 <PCirrusSoundDriver::$SyncExtSourceVolume(void)>
         5a3c8:	e5b41048 	ldr	r1, [r4, #72]!	; fField72
         5a3cc:	e5940004 	ldr	r0, [r4, #4]	; fField4
         5a3d0:	e1802001 	orr	r2, r0, r1
         5a3d4:	e1a00005 	mov	r0, r5
         5a3d8:	e3a01006 	mov	r1, #6	; 0x6
         5a3dc:	eb684cbb 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         5a3e0:	e1a00006 	mov	r0, r6
         5a3e4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         5a3e8:	0c100e98 	ldceq	14, cr0, [r0], -#608
         5a3ec:	e59f6000 	ldr	r6, [pc, #0]	; 5a3f4 <PCirrusSoundDriver::DisableExtSoundSource(long)+0xec>
         5a3f0:	eafffffa 	b	5a3e0 <PCirrusSoundDriver::DisableExtSoundSource(long)+0xd8>
         5a3f4:	ffff8ac7 	swinv	0x00ff8ac7
    */
}

/**
 * Symbol: PCirrusSoundDriver::ADCCallbackProc(long, unsigned long)
 * Address: 0005a3f8
 */
PCirrusSoundDriver::ADCCallbackProc(long, unsigned long) {
    /*
         5a3f8:	e3310000 	teq	r1, #0	; 0x0
         5a3fc:	05a0207c 	streq	r2, [r0, #124]!	; fField124
         5a400:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusSoundDriver::HeadPhoneInterruptHandler(void)
 * Address: 0005a404
 */
PCirrusSoundDriver::HeadPhoneInterruptHandler(void) {
    /*
         5a404:	e5901078 	ldr	r1, [r0, #120]	; fField120
         5a408:	e2811001 	add	r1, r1, #1	; 0x1
         5a40c:	e5a01078 	str	r1, [r0, #120]!	; fField120
         5a410:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: PCirrusSoundDriver::SetVolume(long)
 * Address: 0005a414
 */
PCirrusSoundDriver::SetVolume(long) {
    /*
         5a414:	e1a0c00d 	mov	ip, sp
         5a418:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5a41c:	e24cb004 	sub	fp, ip, #4	; 0x4
         5a420:	e1a04000 	mov	r4, r0
         5a424:	e5900084 	ldr	r0, [r0, #132]	; fField132
         5a428:	e0803001 	add	r3, r0, r1
         5a42c:	e594c048 	ldr	ip, [r4, #72]	; fField72
         5a430:	e1a05b0c 	mov	r5, ip, lsl #22
         5a434:	e1a05b25 	mov	r5, r5, lsr #22
         5a438:	e5940090 	ldr	r0, [r4, #144]	; fField144
         5a43c:	e5941088 	ldr	r1, [r4, #136]	; fField136
         5a440:	e0812000 	add	r2, r1, r0
         5a444:	e1520003 	cmp	r2, r3
         5a448:	c3855b3f 	orrgt	r5, r5, #64512	; 0xfc00
         5a44c:	ca00000b 	bgt	5a480 <PCirrusSoundDriver::SetVolume(long)+0x6c>
         5a450:	e3a01000 	mov	r1, #0	; 0x0
         5a454:	e1520000 	cmp	r2, r0
         5a458:	ca000008 	bgt	5a480 <PCirrusSoundDriver::SetVolume(long)+0x6c>
         5a45c:	e1530000 	cmp	r3, r0
         5a460:	a1855501 	orrge	r5, r5, r1, lsl #10
         5a464:	aa000005 	bge	5a480 <PCirrusSoundDriver::SetVolume(long)+0x6c>
         5a468:	e2811001 	add	r1, r1, #1	; 0x1
         5a46c:	e2800052 	add	r0, r0, #82	; 0x52
         5a470:	e2800c8a 	add	r0, r0, #35328	; 0x8a00
         5a474:	e2400803 	sub	r0, r0, #196608	; 0x30000
         5a478:	e1520000 	cmp	r2, r0
         5a47c:	dafffff6 	ble	5a45c <PCirrusSoundDriver::SetVolume(long)+0x48>
         5a480:	e5845048 	str	r5, [r4, #72]	; fField72
         5a484:	e5d4006c 	ldrb	r0, [r4, #108]	; fField108
         5a488:	e3300000 	teq	r0, #0	; 0x0
         5a48c:	0594004c 	ldreq	r0, [r4, #76]	; fField76
         5a490:	03c00030 	biceq	r0, r0, #48	; 0x30
         5a494:	03300000 	teqeq	r0, #0	; 0x0
         5a498:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         5a49c:	e135000c 	teq	r5, ip
         5a4a0:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         5a4a4:	e1a00004 	mov	r0, r4
         5a4a8:	eb6c9b02 	bl	1b810b8 <PCirrusSoundDriver::$SyncExtSourceVolume(void)>
         5a4ac:	e5b4004c 	ldr	r0, [r4, #76]!	; fField76
         5a4b0:	e1802005 	orr	r2, r0, r5
         5a4b4:	e59f0008 	ldr	r0, [pc, #8]	; 5a4c4 <PCirrusSoundDriver::SetVolume(long)+0xb0>	; fField8
         5a4b8:	e3a01006 	mov	r1, #6	; 0x6
         5a4bc:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5a4c0:	ea684c82 	b	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         5a4c4:	0c100e98 	ldceq	14, cr0, [r0], -#608
    */
}

/**
 * Symbol: PCirrusSoundDriver::SyncVolume(unsigned char)
 * Address: 0005a4c8
 */
PCirrusSoundDriver::SyncVolume(unsigned char) {
    /*
         5a4c8:	e1a0c00d 	mov	ip, sp
         5a4cc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5a4d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         5a4d4:	e1a04000 	mov	r4, r0
         5a4d8:	e20150ff 	and	r5, r1, #255	; 0xff
         5a4dc:	e5d00070 	ldrb	r0, [r0, #112]	; fField112
         5a4e0:	e3300000 	teq	r0, #0	; 0x0
         5a4e4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         5a4e8:	e5940080 	ldr	r0, [r4, #128]	; fField128
         5a4ec:	e370010a 	cmn	r0, #-2147483646	; 0x80000002
         5a4f0:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         5a4f4:	e3350000 	teq	r5, #0	; 0x0
         5a4f8:	13e00000 	mvnne	r0, #0	; 0x0
         5a4fc:	1584007c 	strne	r0, [r4, #124]	; fField124
         5a500:	e1a03004 	mov	r3, r4
         5a504:	e92d0008 	stmdb	sp!, {r3}
         5a508:	e5940074 	ldr	r0, [r4, #116]	; fField116
         5a50c:	e59f3070 	ldr	r3, [pc, #70]	; 5a584 <PCirrusSoundDriver::SyncVolume(unsigned char)+0xbc>
         5a510:	e3e02102 	mvn	r2, #-2147483648	; 0x80000000
         5a514:	e3a0100b 	mov	r1, #11	; 0xb
         5a518:	eb6ec83d 	bl	1c0c614 <TADC::$GetSample(ADCMuxType, unsigned long, void (*)(void *, long, unsigned long), void *)>
         5a51c:	e28dd004 	add	sp, sp, #4	; 0x4
         5a520:	e3350000 	teq	r5, #0	; 0x0
         5a524:	0a000004 	beq	5a53c <PCirrusSoundDriver::SyncVolume(unsigned char)+0x74>
         5a528:	e3300000 	teq	r0, #0	; 0x0
         5a52c:	1a000002 	bne	5a53c <PCirrusSoundDriver::SyncVolume(unsigned char)+0x74>
         5a530:	e594007c 	ldr	r0, [r4, #124]	; fField124
         5a534:	e3700001 	cmn	r0, #1	; 0x1
         5a538:	0afffffc 	beq	5a530 <PCirrusSoundDriver::SyncVolume(unsigned char)+0x68>
         5a53c:	e594007c 	ldr	r0, [r4, #124]	; fField124
         5a540:	e250cf51 	subs	ip, r0, #324	; 0x144
         5a544:	235c0003 	cmpcs	ip, #3	; 0x3
         5a548:	33a00000 	movcc	r0, #0	; 0x0
         5a54c:	3a000002 	bcc	5a55c <PCirrusSoundDriver::SyncVolume(unsigned char)+0x94>
         5a550:	e250ccfe 	subs	ip, r0, #65024	; 0xfe00
         5a554:	235c00b8 	cmpcs	ip, #184	; 0xb8
         5a558:	83a00801 	movhi	r0, #65536	; 0x10000
         5a55c:	e2601801 	rsb	r1, r0, #65536	; 0x10000
         5a560:	e5940088 	ldr	r0, [r4, #136]	; fField136
         5a564:	e2800052 	add	r0, r0, #82	; 0x52
         5a568:	e2800c8a 	add	r0, r0, #35328	; 0x8a00
         5a56c:	e2400803 	sub	r0, r0, #196608	; 0x30000
         5a570:	eb6e1ad3 	bl	1be10c4 <$FixedMultiply>
         5a574:	e1a01000 	mov	r1, r0
         5a578:	e1a00004 	mov	r0, r4
         5a57c:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         5a580:	ea6c9aca 	b	1b810b0 <PCirrusSoundDriver::$SetVolume(long)>
         5a584:	01b810a8 	moveqs	r1, r8, lsr #1
    */
}

/**
 * Symbol: PCirrusSoundDriver::SyncExtSourceVolume(void)
 * Address: 0005a588
 */
PCirrusSoundDriver::SyncExtSourceVolume(void) {
    /*
         5a588:	e1a0c00d 	mov	ip, sp
         5a58c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5a590:	e24cb004 	sub	fp, ip, #4	; 0x4
         5a594:	e1a04000 	mov	r4, r0
         5a598:	e590004c 	ldr	r0, [r0, #76]	; fField76
         5a59c:	e3d00030 	bics	r0, r0, #48	; 0x30
         5a5a0:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         5a5a4:	e5941098 	ldr	r1, [r4, #152]	; fField152
         5a5a8:	e5942094 	ldr	r2, [r4, #148]	; fField148
         5a5ac:	e0421001 	sub	r1, r2, r1
         5a5b0:	e1a01801 	mov	r1, r1, lsl #16
         5a5b4:	e5940048 	ldr	r0, [r4, #72]	; fField72
         5a5b8:	e1a00540 	mov	r0, r0, asr #10
         5a5bc:	e1a00800 	mov	r0, r0, lsl #16
         5a5c0:	eb6e1abe 	bl	1be10c0 <$FixedDivide>
         5a5c4:	e5941064 	ldr	r1, [r4, #100]	; fField100
         5a5c8:	e2111001 	ands	r1, r1, #1	; 0x1
         5a5cc:	13a01001 	movne	r1, #1	; 0x1
         5a5d0:	e20110ff 	and	r1, r1, #255	; 0xff
         5a5d4:	e3500801 	cmp	r0, #65536	; 0x10000
         5a5d8:	c3e05000 	mvngt	r5, #0	; 0x0
         5a5dc:	ca00000c 	bgt	5a614 <PCirrusSoundDriver::SyncExtSourceVolume(void)+0x8c>
         5a5e0:	e3500903 	cmp	r0, #49152	; 0xc000
         5a5e4:	ba000002 	blt	5a5f4 <PCirrusSoundDriver::SyncExtSourceVolume(void)+0x6c>
         5a5e8:	e3310000 	teq	r1, #0	; 0x0
         5a5ec:	03a05030 	moveq	r5, #48	; 0x30
         5a5f0:	0a000007 	beq	5a614 <PCirrusSoundDriver::SyncExtSourceVolume(void)+0x8c>
         5a5f4:	e3500902 	cmp	r0, #32768	; 0x8000
         5a5f8:	ba000002 	blt	5a608 <PCirrusSoundDriver::SyncExtSourceVolume(void)+0x80>
         5a5fc:	e3310000 	teq	r1, #0	; 0x0
         5a600:	03a05020 	moveq	r5, #32	; 0x20
         5a604:	0a000002 	beq	5a614 <PCirrusSoundDriver::SyncExtSourceVolume(void)+0x8c>
         5a608:	e3500901 	cmp	r0, #16384	; 0x4000
         5a60c:	b3a05000 	movlt	r5, #0	; 0x0
         5a610:	a3a05010 	movge	r5, #16	; 0x10
         5a614:	e5940068 	ldr	r0, [r4, #104]	; fField104
         5a618:	e1300005 	teq	r0, r5
         5a61c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         5a620:	e59f603c 	ldr	r6, [pc, #3c]	; 5a664 <PCirrusSoundDriver::SyncExtSourceVolume(void)+0xdc>
         5a624:	e3750001 	cmn	r5, #1	; 0x1
         5a628:	1a00000e 	bne	5a668 <PCirrusSoundDriver::SyncExtSourceVolume(void)+0xe0>
         5a62c:	e3700001 	cmn	r0, #1	; 0x1
         5a630:	0a00001c 	beq	5a6a8 <PCirrusSoundDriver::SyncExtSourceVolume(void)+0x120>
         5a634:	e1a00006 	mov	r0, r6
         5a638:	e3a0100b 	mov	r1, #11	; 0xb
         5a63c:	eb684c1f 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         5a640:	e594105c 	ldr	r1, [r4, #92]	; fField92
         5a644:	e1c00001 	bic	r0, r0, r1
         5a648:	e5941058 	ldr	r1, [r4, #88]	; fField88
         5a64c:	e5942054 	ldr	r2, [r4, #84]	; fField84
         5a650:	e1811002 	orr	r1, r1, r2
         5a654:	e1812000 	orr	r2, r1, r0
         5a658:	e3a00000 	mov	r0, #0	; 0x0
         5a65c:	e584005c 	str	r0, [r4, #92]	; fField92
         5a660:	ea00000d 	b	5a69c <PCirrusSoundDriver::SyncExtSourceVolume(void)+0x114>
         5a664:	0c100e98 	ldceq	14, cr0, [r0], -#608
         5a668:	0a00000e 	beq	5a6a8 <PCirrusSoundDriver::SyncExtSourceVolume(void)+0x120>
         5a66c:	e3700001 	cmn	r0, #1	; 0x1
         5a670:	1a00000c 	bne	5a6a8 <PCirrusSoundDriver::SyncExtSourceVolume(void)+0x120>
         5a674:	e1a00006 	mov	r0, r6
         5a678:	e3a0100b 	mov	r1, #11	; 0xb
         5a67c:	eb684c0f 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         5a680:	e3a01b33 	mov	r1, #52224	; 0xcc00
         5a684:	e584105c 	str	r1, [r4, #92]	; fField92
         5a688:	e5941058 	ldr	r1, [r4, #88]	; fField88
         5a68c:	e5942054 	ldr	r2, [r4, #84]	; fField84
         5a690:	e1821001 	orr	r1, r2, r1
         5a694:	e3811b33 	orr	r1, r1, #52224	; 0xcc00
         5a698:	e1812000 	orr	r2, r1, r0
         5a69c:	e1a00006 	mov	r0, r6
         5a6a0:	e3a0100b 	mov	r1, #11	; 0xb
         5a6a4:	eb684c09 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         5a6a8:	e5940064 	ldr	r0, [r4, #100]	; fField100
         5a6ac:	e1800005 	orr	r0, r0, r5
         5a6b0:	e5a4004c 	str	r0, [r4, #76]!	; fField76
         5a6b4:	e5a4501c 	str	r5, [r4, #28]!	; fField28
         5a6b8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusSoundDriver::SyncOutputBits(void)
 * Address: 0005a6bc
 */
PCirrusSoundDriver::SyncOutputBits(void) {
    /*
         5a6bc:	e1a0c00d 	mov	ip, sp
         5a6c0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5a6c4:	e24cb004 	sub	fp, ip, #4	; 0x4
         5a6c8:	e1a04000 	mov	r4, r0
         5a6cc:	e5d00071 	ldrb	r0, [r0, #113]	; fField113
         5a6d0:	e59f6048 	ldr	r6, [pc, #48]	; 5a720 <PCirrusSoundDriver::SyncOutputBits(void)+0x64>	; fField48
         5a6d4:	e3300000 	teq	r0, #0	; 0x0
         5a6d8:	0a000011 	beq	5a724 <PCirrusSoundDriver::SyncOutputBits(void)+0x68>
         5a6dc:	e2840078 	add	r0, r4, #120	; 0x78
         5a6e0:	e3a01000 	mov	r1, #0	; 0x0
         5a6e4:	eb0d4ec6 	bl	3ae204 <Swap>
         5a6e8:	e3300000 	teq	r0, #0	; 0x0
         5a6ec:	05945054 	ldreq	r5, [r4, #84]	; fField84
         5a6f0:	0a00000c 	beq	5a728 <PCirrusSoundDriver::SyncOutputBits(void)+0x6c>
         5a6f4:	e24dd004 	sub	sp, sp, #4	; 0x4
         5a6f8:	e1a0200d 	mov	r2, sp
         5a6fc:	e1a00006 	mov	r0, r6
         5a700:	e3a01022 	mov	r1, #34	; 0x22
         5a704:	eb684bec 	bl	1a6d6bc <TBIOInterface::$ReadDIOPins(unsigned char, unsigned long *)>
         5a708:	e59d0000 	ldr	r0, [sp]
         5a70c:	e3300000 	teq	r0, #0	; 0x0
         5a710:	15945060 	ldrne	r5, [r4, #96]	; fField96
         5a714:	03a05a0b 	moveq	r5, #45056	; 0xb000
         5a718:	e28dd004 	add	sp, sp, #4	; 0x4
         5a71c:	ea000001 	b	5a728 <PCirrusSoundDriver::SyncOutputBits(void)+0x6c>
         5a720:	0c100e98 	ldceq	14, cr0, [r0], -#608
         5a724:	e5945060 	ldr	r5, [r4, #96]	; fField96
         5a728:	e5940054 	ldr	r0, [r4, #84]	; fField84
         5a72c:	e1300005 	teq	r0, r5
         5a730:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         5a734:	e1a00006 	mov	r0, r6
         5a738:	e3a0100b 	mov	r1, #11	; 0xb
         5a73c:	eb684bdf 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         5a740:	e5941054 	ldr	r1, [r4, #84]	; fField84
         5a744:	e1c00001 	bic	r0, r0, r1
         5a748:	e5845054 	str	r5, [r4, #84]	; fField84
         5a74c:	e1852000 	orr	r2, r5, r0
         5a750:	e1a00006 	mov	r0, r6
         5a754:	e3a0100b 	mov	r1, #11	; 0xb
         5a758:	eb684bdc 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         5a75c:	e5940054 	ldr	r0, [r4, #84]	; fField84
         5a760:	e3100001 	tst	r0, #1	; 0x1
         5a764:	13a01000 	movne	r1, #0	; 0x0
         5a768:	03a01001 	moveq	r1, #1	; 0x1
         5a76c:	e1a00004 	mov	r0, r4
         5a770:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         5a774:	ea6c9a51 	b	1b810c0 <PCirrusSoundDriver::$ConfigureOutputValues(unsigned char)>
    */
}

/**
 * Symbol: PCirrusSoundDriver::ConfigureOutputValues(unsigned char)
 * Address: 0005a778
 */
PCirrusSoundDriver::ConfigureOutputValues(unsigned char) {
    /*
         5a778:	e1a0c00d 	mov	ip, sp
         5a77c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5a780:	e24cb004 	sub	fp, ip, #4	; 0x4
         5a784:	e1a04000 	mov	r4, r0
         5a788:	e31100ff 	tst	r1, #255	; 0xff
         5a78c:	0a000005 	beq	5a7a8 <PCirrusSoundDriver::ConfigureOutputValues(unsigned char)+0x30>
         5a790:	e594009c 	ldr	r0, [r4, #156]	; fField156
         5a794:	e5840088 	str	r0, [r4, #136]	; fField136
         5a798:	e59400a0 	ldr	r0, [r4, #160]	; fField160
         5a79c:	e584008c 	str	r0, [r4, #140]	; fField140
         5a7a0:	e59400a4 	ldr	r0, [r4, #164]	; fField164
         5a7a4:	ea000004 	b	5a7bc <PCirrusSoundDriver::ConfigureOutputValues(unsigned char)+0x44>
         5a7a8:	e59400a8 	ldr	r0, [r4, #168]	; fField168
         5a7ac:	e5840088 	str	r0, [r4, #136]	; fField136
         5a7b0:	e59400ac 	ldr	r0, [r4, #172]	; fField172
         5a7b4:	e584008c 	str	r0, [r4, #140]	; fField140
         5a7b8:	e59400b0 	ldr	r0, [r4, #176]	; fField176
         5a7bc:	e5840084 	str	r0, [r4, #132]	; fField132
         5a7c0:	e5940088 	ldr	r0, [r4, #136]	; fField136
         5a7c4:	e59f503c 	ldr	r5, [pc, #3c]	; 5a808 <PCirrusSoundDriver::ConfigureOutputValues(unsigned char)+0x90>
         5a7c8:	e1a01005 	mov	r1, r5
         5a7cc:	eb6e1a3b 	bl	1be10c0 <$FixedDivide>
         5a7d0:	e2800902 	add	r0, r0, #32768	; 0x8000
         5a7d4:	e1a00840 	mov	r0, r0, asr #16
         5a7d8:	e1a00800 	mov	r0, r0, lsl #16
         5a7dc:	e3500000 	cmp	r0, #0	; 0x0
         5a7e0:	e1a01005 	mov	r1, r5
         5a7e4:	e5940088 	ldr	r0, [r4, #136]	; fField136
         5a7e8:	aa000007 	bge	5a80c <PCirrusSoundDriver::ConfigureOutputValues(unsigned char)+0x94>
         5a7ec:	eb6e1a33 	bl	1be10c0 <$FixedDivide>
         5a7f0:	e2800902 	add	r0, r0, #32768	; 0x8000
         5a7f4:	e1a00840 	mov	r0, r0, asr #16
         5a7f8:	e1a00800 	mov	r0, r0, lsl #16
         5a7fc:	e1a00840 	mov	r0, r0, asr #16
         5a800:	e2600000 	rsb	r0, r0, #0	; 0x0
         5a804:	ea000005 	b	5a820 <PCirrusSoundDriver::ConfigureOutputValues(unsigned char)+0xa8>
         5a808:	fffd8a52 	swinv	0x00fd8a52
         5a80c:	eb6e1a2b 	bl	1be10c0 <$FixedDivide>
         5a810:	e2800902 	add	r0, r0, #32768	; 0x8000
         5a814:	e1a00840 	mov	r0, r0, asr #16
         5a818:	e1a00800 	mov	r0, r0, lsl #16
         5a81c:	e1a00840 	mov	r0, r0, asr #16
         5a820:	e5840094 	str	r0, [r4, #148]	; fField148
         5a824:	e1a01005 	mov	r1, r5
         5a828:	e594008c 	ldr	r0, [r4, #140]	; fField140
         5a82c:	eb6e1a23 	bl	1be10c0 <$FixedDivide>
         5a830:	e2800902 	add	r0, r0, #32768	; 0x8000
         5a834:	e1a00840 	mov	r0, r0, asr #16
         5a838:	e1a00800 	mov	r0, r0, lsl #16
         5a83c:	e3500000 	cmp	r0, #0	; 0x0
         5a840:	e1a01005 	mov	r1, r5
         5a844:	e594008c 	ldr	r0, [r4, #140]	; fField140
         5a848:	aa000006 	bge	5a868 <PCirrusSoundDriver::ConfigureOutputValues(unsigned char)+0xf0>
         5a84c:	eb6e1a1b 	bl	1be10c0 <$FixedDivide>
         5a850:	e2800902 	add	r0, r0, #32768	; 0x8000
         5a854:	e1a00840 	mov	r0, r0, asr #16
         5a858:	e1a00800 	mov	r0, r0, lsl #16
         5a85c:	e1a00840 	mov	r0, r0, asr #16
         5a860:	e2600000 	rsb	r0, r0, #0	; 0x0
         5a864:	ea000004 	b	5a87c <PCirrusSoundDriver::ConfigureOutputValues(unsigned char)+0x104>
         5a868:	eb6e1a14 	bl	1be10c0 <$FixedDivide>
         5a86c:	e2800902 	add	r0, r0, #32768	; 0x8000
         5a870:	e1a00840 	mov	r0, r0, asr #16
         5a874:	e1a00800 	mov	r0, r0, lsl #16
         5a878:	e1a00840 	mov	r0, r0, asr #16
         5a87c:	e5840098 	str	r0, [r4, #152]	; fField152
         5a880:	e5941088 	ldr	r1, [r4, #136]	; fField136
         5a884:	ee011190 	fltd	f1, r1
         5a888:	ed9f8106 	ldfd	f0, [pc, #24]
         5a88c:	ee410180 	dvfd	f0, f1, f0
         5a890:	ed84812e 	stfd	f0, [r4, #184]
         5a894:	e5941094 	ldr	r1, [r4, #148]	; fField148
         5a898:	e0410000 	sub	r0, r1, r0
         5a89c:	e2800001 	add	r0, r0, #1	; 0x1
         5a8a0:	e5a400c0 	str	r0, [r4, #192]!	; fField192
         5a8a4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         5a8a8:	40f00000 	rscmis	r0, r0, r0
         5a8ac:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: PCirrusSoundDriver::GetSoundHardwareInfo(TSoundDriverInfo *)
 * Address: 0005a8b0
 */
PCirrusSoundDriver::GetSoundHardwareInfo(TSoundDriverInfo *) {
    /*
         5a8b0:	e1a0c00d 	mov	ip, sp
         5a8b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5a8b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         5a8bc:	e1a04001 	mov	r4, r1
         5a8c0:	e3a05001 	mov	r5, #1	; 0x1
         5a8c4:	e5815000 	str	r5, [r1]
         5a8c8:	e5815004 	str	r5, [r1, #4]	; fField4
         5a8cc:	e5815008 	str	r5, [r1, #8]	; fField8
         5a8d0:	e59f003c 	ldr	r0, [pc, #3c]	; 5a914 <PCirrusSoundDriver::GetSoundHardwareInfo(TSoundDriverInfo *)+0x64>
         5a8d4:	e3a0100a 	mov	r1, #10	; 0xa
         5a8d8:	eb684b78 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         5a8dc:	e2000a0f 	and	r0, r0, #61440	; 0xf000
         5a8e0:	e3a01646 	mov	r1, #73400320	; 0x4600000
         5a8e4:	e2811205 	add	r1, r1, #1342177280	; 0x50000000
         5a8e8:	e3300a06 	teq	r0, #24576	; 0x6000
         5a8ec:	0a000009 	beq	5a918 <PCirrusSoundDriver::GetSoundHardwareInfo(TSoundDriverInfo *)+0x68>
         5a8f0:	e3300a02 	teq	r0, #8192	; 0x2000
         5a8f4:	03a005e1 	moveq	r0, #943718400	; 0x38400000
         5a8f8:	0a000003 	beq	5a90c <PCirrusSoundDriver::GetSoundHardwareInfo(TSoundDriverInfo *)+0x5c>
         5a8fc:	e3300000 	teq	r0, #0	; 0x0
         5a900:	1a000004 	bne	5a918 <PCirrusSoundDriver::GetSoundHardwareInfo(TSoundDriverInfo *)+0x68>
         5a904:	e3a006c2 	mov	r0, #203423744	; 0xc200000
         5a908:	e2800201 	add	r0, r0, #268435456	; 0x10000000
         5a90c:	e584000c 	str	r0, [r4, #12]
         5a910:	ea000001 	b	5a91c <PCirrusSoundDriver::GetSoundHardwareInfo(TSoundDriverInfo *)+0x6c>
         5a914:	0c100e98 	ldceq	14, cr0, [r0], -#608
         5a918:	e584100c 	str	r1, [r4, #12]
         5a91c:	e3a00006 	mov	r0, #6	; 0x6
         5a920:	e5840010 	str	r0, [r4, #16]
         5a924:	e3a00010 	mov	r0, #16	; 0x10
         5a928:	e2844010 	add	r4, r4, #16	; 0x10
         5a92c:	e9a40021 	stmib	r4!, {r0, r5}
         5a930:	e3a00000 	mov	r0, #0	; 0x0
         5a934:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusSoundDriver::SetOutputBuffers(unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 0005a938
 */
PCirrusSoundDriver::SetOutputBuffers(unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
         5a938:	e1a0c00d 	mov	ip, sp
         5a93c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         5a940:	e24cb004 	sub	fp, ip, #4	; 0x4
         5a944:	e1a04000 	mov	r4, r0
         5a948:	e1a06002 	mov	r6, r2
         5a94c:	e1a05003 	mov	r5, r3
         5a950:	e3a07000 	mov	r7, #0	; 0x0
         5a954:	e3110003 	tst	r1, #3	; 0x3
         5a958:	e59b8004 	ldr	r8, [fp, #4]	; fField4
         5a95c:	02050003 	andeq	r0, r5, #3	; 0x3
         5a960:	03300000 	teqeq	r0, #0	; 0x0
         5a964:	13e00032 	mvnne	r0, #50	; 0x32
         5a968:	12400c2a 	subne	r0, r0, #10752	; 0x2a00
         5a96c:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         5a970:	e3560a01 	cmp	r6, #4096	; 0x1000
         5a974:	93580a01 	cmpls	r8, #4096	; 0x1000
         5a978:	83e00f8d 	mvnhi	r0, #564	; 0x234
         5a97c:	82400b0a 	subhi	r0, r0, #10240	; 0x2800
         5a980:	891ba9f0 	ldmhidb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         5a984:	e58410dc 	str	r1, [r4, #220]	; fField220
         5a988:	e1a00001 	mov	r0, r1
         5a98c:	eb01fb4f 	bl	d96d0 <VToP(unsigned long)>
         5a990:	e58400e4 	str	r0, [r4, #228]	; fField228
         5a994:	e58450e0 	str	r5, [r4, #224]	; fField224
         5a998:	e1a00005 	mov	r0, r5
         5a99c:	e58460ec 	str	r6, [r4, #236]	; fField236
         5a9a0:	eb01fb4a 	bl	d96d0 <VToP(unsigned long)>
         5a9a4:	e5a400e8 	str	r0, [r4, #232]!	; fField232
         5a9a8:	e5a48008 	str	r8, [r4, #8]!	; fField8
         5a9ac:	e1a00007 	mov	r0, r7
         5a9b0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long)
 * Address: 0005a9b4
 */
PCirrusSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long) {
    /*
         5a9b4:	e1a0c00d 	mov	ip, sp
         5a9b8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5a9bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         5a9c0:	e1a04000 	mov	r4, r0
         5a9c4:	e1a05002 	mov	r5, r2
         5a9c8:	e59020d4 	ldr	r2, [r0, #212]	; fField212
         5a9cc:	e2010001 	and	r0, r1, #1	; 0x1
         5a9d0:	e0840100 	add	r0, r4, r0, lsl #2
         5a9d4:	e59010ec 	ldr	r1, [r0, #236]	; fField236
         5a9d8:	e5821000 	str	r1, [r2]
         5a9dc:	e59410c8 	ldr	r1, [r4, #200]	; fField200
         5a9e0:	e59020e4 	ldr	r2, [r0, #228]	; fField228
         5a9e4:	e5812000 	str	r2, [r1]
         5a9e8:	e5d4106c 	ldrb	r1, [r4, #108]	; fField108
         5a9ec:	e3310000 	teq	r1, #0	; 0x0
         5a9f0:	1a000006 	bne	5aa10 <PCirrusSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long)+0x5c>
         5a9f4:	e59410d8 	ldr	r1, [r4, #216]	; fField216
         5a9f8:	e59020ec 	ldr	r2, [r0, #236]	; fField236
         5a9fc:	e5812000 	str	r2, [r1]
         5aa00:	e59410cc 	ldr	r1, [r4, #204]	; fField204
         5aa04:	e59000e4 	ldr	r0, [r0, #228]	; fField228
         5aa08:	e5810000 	str	r0, [r1]
         5aa0c:	ea000020 	b	5aa94 <PCirrusSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long)+0xe0>
         5aa10:	e5941114 	ldr	r1, [r4, #276]	; fField276
         5aa14:	e3310000 	teq	r1, #0	; 0x0
         5aa18:	1a000018 	bne	5aa80 <PCirrusSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long)+0xcc>
         5aa1c:	e3350000 	teq	r5, #0	; 0x0
         5aa20:	0a000013 	beq	5aa74 <PCirrusSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long)+0xc0>
         5aa24:	e3a02040 	mov	r2, #64	; 0x40
         5aa28:	e59410d0 	ldr	r1, [r4, #208]	; fField208
         5aa2c:	e5812000 	str	r2, [r1]
         5aa30:	e3a01926 	mov	r1, #622592	; 0x98000
         5aa34:	e281140f 	add	r1, r1, #251658240	; 0xf000000
         5aa38:	e5912000 	ldr	r2, [r1]
         5aa3c:	e5943030 	ldr	r3, [r4, #48]	; fField48
         5aa40:	e1120003 	tst	r2, r3
         5aa44:	1a000012 	bne	5aa94 <PCirrusSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long)+0xe0>
         5aa48:	e59420d8 	ldr	r2, [r4, #216]	; fField216
         5aa4c:	e59030ec 	ldr	r3, [r0, #236]	; fField236
         5aa50:	e5823000 	str	r3, [r2]
         5aa54:	e59420cc 	ldr	r2, [r4, #204]	; fField204
         5aa58:	e59000e4 	ldr	r0, [r0, #228]	; fField228
         5aa5c:	e5820000 	str	r0, [r2]
         5aa60:	e5940030 	ldr	r0, [r4, #48]	; fField48
         5aa64:	e5810000 	str	r0, [r1]
         5aa68:	e1a00004 	mov	r0, r4
         5aa6c:	eb062da2 	bl	1e60fc <PSoundDriver::OutputIntHandlerDispatcher(void)>
         5aa70:	ea000007 	b	5aa94 <PCirrusSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long)+0xe0>
         5aa74:	e1a00004 	mov	r0, r4
         5aa78:	eb6c9575 	bl	1b80054 <PCirrusSoundDriver::$StopOutput(void)>
         5aa7c:	ea000004 	b	5aa94 <PCirrusSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long)+0xe0>
         5aa80:	e3350000 	teq	r5, #0	; 0x0
         5aa84:	1a000002 	bne	5aa94 <PCirrusSoundDriver::ScheduleOutputBuffer(unsigned long, unsigned long)+0xe0>
         5aa88:	e3a01060 	mov	r1, #96	; 0x60
         5aa8c:	e59400d0 	ldr	r0, [r4, #208]	; fField208
         5aa90:	e5801000 	str	r1, [r0]
         5aa94:	e5845114 	str	r5, [r4, #276]	; fField276
         5aa98:	e5d40070 	ldrb	r0, [r4, #112]	; fField112
         5aa9c:	e3300000 	teq	r0, #0	; 0x0
         5aaa0:	11a00004 	movne	r0, r4
         5aaa4:	13a01000 	movne	r1, #0	; 0x0
         5aaa8:	1b6c9981 	blne	1b810b4 <PCirrusSoundDriver::$SyncVolume(unsigned char)>
         5aaac:	e5d40071 	ldrb	r0, [r4, #113]	; fField113
         5aab0:	e3300000 	teq	r0, #0	; 0x0
         5aab4:	11a00004 	movne	r0, r4
         5aab8:	1b6c997f 	blne	1b810bc <PCirrusSoundDriver::$SyncOutputBits(void)>
         5aabc:	e3a00000 	mov	r0, #0	; 0x0
         5aac0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusSoundDriver::PowerOutputOn(long)
 * Address: 0005aac4
 */
PCirrusSoundDriver::PowerOutputOn(long) {
    /*
         5aac4:	e1a0c00d 	mov	ip, sp
         5aac8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         5aacc:	e24cb004 	sub	fp, ip, #4	; 0x4
         5aad0:	e1a04000 	mov	r4, r0
         5aad4:	e3a05000 	mov	r5, #0	; 0x0
         5aad8:	e3310000 	teq	r1, #0	; 0x0
         5aadc:	e5805060 	str	r5, [r0, #96]	; fField96
         5aae0:	0a000001 	beq	5aaec <PCirrusSoundDriver::PowerOutputOn(long)+0x28>
         5aae4:	e3110001 	tst	r1, #1	; 0x1
         5aae8:	0a000001 	beq	5aaf4 <PCirrusSoundDriver::PowerOutputOn(long)+0x30>
         5aaec:	e3a00b22 	mov	r0, #34816	; 0x8800
         5aaf0:	e5840060 	str	r0, [r4, #96]	; fField96
         5aaf4:	e3110008 	tst	r1, #8	; 0x8
         5aaf8:	0a000003 	beq	5ab0c <PCirrusSoundDriver::PowerOutputOn(long)+0x48>
         5aafc:	e5940060 	ldr	r0, [r4, #96]	; fField96
         5ab00:	e3800a0b 	orr	r0, r0, #45056	; 0xb000
         5ab04:	e3a05001 	mov	r5, #1	; 0x1
         5ab08:	e5840060 	str	r0, [r4, #96]	; fField96
         5ab0c:	e5d4006d 	ldrb	r0, [r4, #109]	; fField109
         5ab10:	e3300000 	teq	r0, #0	; 0x0
         5ab14:	1a000004 	bne	5ab2c <PCirrusSoundDriver::PowerOutputOn(long)+0x68>
         5ab18:	eb683e7f 	bl	1a6a51c <$GetDMAManagerObject(void)>
         5ab1c:	e3a0100a 	mov	r1, #10	; 0xa
         5ab20:	eb683a60 	bl	1a694a8 <TDMAManager::$PowerOnAssignment(unsigned long)>
         5ab24:	e3a00001 	mov	r0, #1	; 0x1
         5ab28:	e5c4006d 	strb	r0, [r4, #109]	; fField109
         5ab2c:	e1a00004 	mov	r0, r4
         5ab30:	eb6c9961 	bl	1b810bc <PCirrusSoundDriver::$SyncOutputBits(void)>
         5ab34:	e3350000 	teq	r5, #0	; 0x0
         5ab38:	13a0001b 	movne	r0, #27	; 0x1b
         5ab3c:	1b6ec2ab 	blne	1c0b5f0 <$IOPowerOn(unsigned long)>
         5ab40:	e3a01040 	mov	r1, #64	; 0x40
         5ab44:	e5b400d0 	ldr	r0, [r4, #208]!	; fField208
         5ab48:	e5801000 	str	r1, [r0]
         5ab4c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: PCirrusSoundDriver::PowerOutputOff(void)
 * Address: 0005ab50
 */
PCirrusSoundDriver::PowerOutputOff(void) {
    /*
         5ab50:	e1a0c00d 	mov	ip, sp
         5ab54:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         5ab58:	e24cb004 	sub	fp, ip, #4	; 0x4
         5ab5c:	e1a04000 	mov	r4, r0
         5ab60:	e3a05000 	mov	r5, #0	; 0x0
         5ab64:	e5805114 	str	r5, [r0, #276]	; fField276
         5ab68:	eb6c9539 	bl	1b80054 <PCirrusSoundDriver::$StopOutput(void)>
         5ab6c:	e59400d0 	ldr	r0, [r4, #208]	; fField208
         5ab70:	e5805000 	str	r5, [r0]
         5ab74:	e5d4006d 	ldrb	r0, [r4, #109]	; fField109
         5ab78:	e3300000 	teq	r0, #0	; 0x0
         5ab7c:	0a000003 	beq	5ab90 <PCirrusSoundDriver::PowerOutputOff(void)+0x40>
         5ab80:	eb683e65 	bl	1a6a51c <$GetDMAManagerObject(void)>
         5ab84:	e3a0100a 	mov	r1, #10	; 0xa
         5ab88:	eb683a47 	bl	1a694ac <TDMAManager::$PowerOffAssignment(unsigned long)>
         5ab8c:	e5c4506d 	strb	r5, [r4, #109]	; fField109
         5ab90:	e59f0054 	ldr	r0, [pc, #54]	; 5abec <PCirrusSoundDriver::PowerOutputOff(void)+0x9c>
         5ab94:	e1a06000 	mov	r6, r0
         5ab98:	e3a0100b 	mov	r1, #11	; 0xb
         5ab9c:	eb684ac7 	bl	1a6d6c0 <TBIOInterface::$BIOReadRegister(int)>
         5aba0:	e5941054 	ldr	r1, [r4, #84]	; fField84
         5aba4:	e3110a03 	tst	r1, #12288	; 0x3000
         5aba8:	13c00b02 	bicne	r0, r0, #2048	; 0x800
         5abac:	13a01a0b 	movne	r1, #45056	; 0xb000
         5abb0:	15841054 	strne	r1, [r4, #84]	; fField84
         5abb4:	01c00001 	biceq	r0, r0, r1
         5abb8:	05845054 	streq	r5, [r4, #84]	; fField84
         5abbc:	e594105c 	ldr	r1, [r4, #92]	; fField92
         5abc0:	e5942058 	ldr	r2, [r4, #88]	; fField88
         5abc4:	e1821001 	orr	r1, r2, r1
         5abc8:	e1812000 	orr	r2, r1, r0
         5abcc:	e3a00001 	mov	r0, #1	; 0x1
         5abd0:	e5a40078 	str	r0, [r4, #120]!	; fField120
         5abd4:	e1a00006 	mov	r0, r6
         5abd8:	e3a0100b 	mov	r1, #11	; 0xb
         5abdc:	eb684abb 	bl	1a6d6d0 <TBIOInterface::$BIOWriteCommand(int, unsigned long)>
         5abe0:	e3a0001b 	mov	r0, #27	; 0x1b
         5abe4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         5abe8:	ea6ec27f 	b	1c0b5ec <$IOPowerOff(unsigned long)>
         5abec:	0c100e98 	ldceq	14, cr0, [r0], -#608
    */
}

/**
 * Symbol: PCirrusSoundDriver::StartOutput(void)
 * Address: 0005abf0
 */
PCirrusSoundDriver::StartOutput(void) {
    /*
         5abf0:	e1a0c00d 	mov	ip, sp
         5abf4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         5abf8:	e24cb004 	sub	fp, ip, #4	; 0x4
         5abfc:	e1a04000 	mov	r4, r0
         5ac00:	e5d00070 	ldrb	r0, [r0, #112]	; fField112
         5ac04:	e3300000 	teq	r0, #0	; 0x0
         5ac08:	11a00004 	movne	r0, r4
         5ac0c:	13a01001 	movne	r1, #1	; 0x1
         5ac10:	1b6c9927 	blne	1b810b4 <PCirrusSoundDriver::$SyncVolume(unsigned char)>
         5ac14:	e5940048 	ldr	r0, [r4, #72]	; fField72
         5ac18:	e3800c02 	orr	r0, r0, #512	; 0x200
         5ac1c:	e5840048 	str	r0, [r4, #72]	; fField72
         5ac20:	e594104c 	ldr	r1, [r4, #76]	; fField76
         5ac24:	e1812000 	orr	r2, r1, r0
         5ac28:	e59f002c 	ldr	r0, [pc, #2c]	; 5ac5c <PCirrusSoundDriver::StartOutput(void)+0x6c>
         5ac2c:	e3a01006 	mov	r1, #6	; 0x6
         5ac30:	eb684aa8 	bl	1a6d6d8 <TBIOInterface::$BIOFIFOWriteCommand(int, unsigned long)>
         5ac34:	e3a01001 	mov	r1, #1	; 0x1
         5ac38:	e5940118 	ldr	r0, [r4, #280]	; fField280
         5ac3c:	eb6e8465 	bl	1bfbdd8 <$EnableInterrupt>
         5ac40:	e3a00001 	mov	r0, #1	; 0x1
         5ac44:	e5c4006c 	strb	r0, [r4, #108]	; fField108
         5ac48:	e3a02926 	mov	r2, #622592	; 0x98000
         5ac4c:	e282240f 	add	r2, r2, #251658240	; 0xf000000
         5ac50:	e5b41030 	ldr	r1, [r4, #48]!	; fField48
         5ac54:	e5821000 	str	r1, [r2]
         5ac58:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         5ac5c:	0c100e98 	ldceq	14, cr0, [r0], -#608
    */
}

/**
 * Symbol: ClassInfo__18PCirrusSoundDriverSFv
 * Address: 00389274
 */
void PCirrusSoundDriver::ClassInfo() {
    /*
        389274:	e24f0044 	sub	r0, pc, #68	; 0x44
        389278:	e1a0f00e 	mov	pc, lr
        38927c:	e3a00000 	mov	r0, #0	; 0x0
        389280:	e1a0f00e 	mov	pc, lr
        389284:	50436972 	subpl	r6, r3, r2, ror r9
        389288:	72757353 	rsbvcs	r7, r5, #1275068417	; 0x4c000001
        38928c:	6f756e64 	swivs	0x00756e64
        389290:	44726976 	ldrmibt	r6, [r2], -#2422
        389294:	65720050 	ldrvsb	r0, [r2, -#80]!	; fField80
        389298:	536f756e 	cmnpl	pc, #461373440	; 0x1b800000
        38929c:	64447269 	strvsb	r7, [r4], -#617
        3892a0:	76657200 	strvcbt	r7, [r5], -r0, lsl #4	; fField4
        3892a4:	536f756e 	cmnpl	pc, #461373440	; 0x1b800000
        3892a8:	644f7574 	strvsb	r7, [pc], #574	; 3892b0 <ClassInfo__18PCirrusSoundDriverSFv+0x3c>
        3892ac:	70757400 	rsbvcs	r7, r5, r0, lsl #8
        3892b0:	00536f75 	subeqs	r6, r3, r5, ror pc
        3892b4:	6e64496e 	cdpvs	9, 6, cr4, cr4, cr14, {3}
        3892b8:	70757400 	rsbvcs	r7, r5, r0, lsl #8
        3892c4:	eaffffea 	b	389274 <ClassInfo__18PCirrusSoundDriverSFv>
        3892c8:	ea5fdb58 	b	1b80030 <PCirrusSoundDriver::$New(void)>
        3892cc:	ea5fdb58 	b	1b80034 <PCirrusSoundDriver::$Delete(void)>
        3892d0:	ea5fdb58 	b	1b80038 <PCirrusSoundDriver::$SetSoundHardwareInfo(TSoundDriverInfo const *)>
        3892d4:	ea5fdb58 	b	1b8003c <PCirrusSoundDriver::$GetSoundHardwareInfo(TSoundDriverInfo *)>
        3892d8:	ea5fdb58 	b	1b80040 <PCirrusSoundDriver::$SetOutputBuffers(unsigned long, unsigned long, unsigned long, unsigned long)>
        3892dc:	ea5fdb63 	b	1b80070 <PCirrusSoundDriver::$SetInputBuffers(unsigned long, unsigned long, unsigned long, unsigned long)>
        3892e0:	ea5fdb57 	b	1b80044 <PCirrusSoundDriver::$ScheduleOutputBuffer(unsigned long, unsigned long)>
        3892e4:	ea5fdb62 	b	1b80074 <PCirrusSoundDriver::$ScheduleInputBuffer(unsigned long, unsigned long)>
        3892e8:	ea5fdb56 	b	1b80048 <PCirrusSoundDriver::$PowerOutputOn(long)>
        3892ec:	ea5fdb56 	b	1b8004c <PCirrusSoundDriver::$PowerOutputOff(void)>
        3892f0:	ea5fdb60 	b	1b80078 <PCirrusSoundDriver::$PowerInputOn(long)>
        3892f4:	ea5fdb60 	b	1b8007c <PCirrusSoundDriver::$PowerInputOff(void)>
        3892f8:	ea5fdb54 	b	1b80050 <PCirrusSoundDriver::$StartOutput(void)>
        3892fc:	ea5fdf5f 	b	1b81080 <PCirrusSoundDriver::$StartInput(void)>
        389300:	ea5fdb53 	b	1b80054 <PCirrusSoundDriver::$StopOutput(void)>
        389304:	ea5fdf5e 	b	1b81084 <PCirrusSoundDriver::$StopInput(void)>
        389308:	ea5fdb52 	b	1b80058 <PCirrusSoundDriver::$OutputIsEnabled(void)>
        38930c:	ea5fdf5d 	b	1b81088 <PCirrusSoundDriver::$InputIsEnabled(void)>
        389310:	ea5fdb51 	b	1b8005c <PCirrusSoundDriver::$OutputIsRunning(void)>
        389314:	ea5fdf5c 	b	1b8108c <PCirrusSoundDriver::$InputIsRunning(void)>
        389318:	ea5fdb50 	b	1b80060 <PCirrusSoundDriver::$CurrentOutputPtr(void)>
        38931c:	ea5fdf5b 	b	1b81090 <PCirrusSoundDriver::$CurrentInputPtr(void)>
        389320:	ea5fdb4f 	b	1b80064 <PCirrusSoundDriver::$OutputVolume(long)>
        389324:	ea5fdb4f 	b	1b80068 <PCirrusSoundDriver::$OutputVolume(void)>
        389328:	ea5fdf59 	b	1b81094 <PCirrusSoundDriver::$InputVolume(long)>
        38932c:	ea5fdf59 	b	1b81098 <PCirrusSoundDriver::$InputVolume(void)>
        389330:	ea5fdf5a 	b	1b810a0 <PCirrusSoundDriver::$EnableExtSoundSource(long)>
        389334:	ea5fdf5a 	b	1b810a4 <PCirrusSoundDriver::$DisableExtSoundSource(long)>
        389338:	ea5fdb4b 	b	1b8006c <PCirrusSoundDriver::$OutputIntHandler(void)>
        38933c:	ea5fdf56 	b	1b8109c <PCirrusSoundDriver::$InputIntHandler(void)>
        389340:	e1a0000f 	mov	r0, pc
        389344:	e1a0f00e 	mov	pc, lr
        389348:	54546573 	ldrplb	r6, [r4], -#1395
        38934c:	74436173 	strvcb	r6, [r3], -#371
        389350:	65000000 	strvs	r0, [r0]
    */
}

