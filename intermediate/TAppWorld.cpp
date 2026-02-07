#include "DDKIncludes/CommAPI/Endpoint.h"

/**
 * Symbol: TAppWorld::AERemoveIdleHandler(TAEventHandler *)
 * Address: 00030e24
 */
TAppWorld::AERemoveIdleHandler(TAEventHandler *) {
    /*
         30e24:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::AEInstallIdleHandler(TAEventHandler *)
 * Address: 00030e28
 */
TAppWorld::AEInstallIdleHandler(TAEventHandler *) {
    /*
         30e28:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::__ct(void)
 * Address: 00030e8c
 */
TAppWorld::TAppWorld(void) {
    /*
         30e8c:	e1a0c00d 	mov	ip, sp
         30e90:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         30e94:	e24cb004 	sub	fp, ip, #4	; 0x4
         30e98:	e1b04000 	movs	r4, r0
         30e9c:	1a000003 	bne	30eb0 <TAppWorld::__ct(void)+0x24>
         30ea0:	e3a00070 	mov	r0, #112	; 0x70
         30ea4:	eb6e7623 	bl	1bce738 <$__nw(unsigned int)>
         30ea8:	e1b04000 	movs	r4, r0
         30eac:	0a000013 	beq	30f00 <TAppWorld::__ct(void)+0x74>
         30eb0:	e1a00004 	mov	r0, r4
         30eb4:	eb6dfe54 	bl	1bb080c <TForkWorld::$__ct(void)>
         30eb8:	e284003c 	add	r0, r4, #60	; 0x3c
         30ebc:	eb6ec8c7 	bl	1be31e0 <CItemComparer::$__ct(void)>
         30ec0:	e2840048 	add	r0, r4, #72	; 0x48
         30ec4:	eb6dc074 	bl	1ba109c <TAEventComparer::$__ct(void)>
         30ec8:	e2840054 	add	r0, r4, #84	; 0x54
         30ecc:	eb6eccd2 	bl	1be421c <TAEHandlerComparer::$__ct(void)>
         30ed0:	e59f0030 	ldr	r0, [pc, #30]	; 30f08 <TAppWorld::__ct(void)+0x7c>
         30ed4:	e5840000 	str	r0, [r4]
         30ed8:	e3a00000 	mov	r0, #0	; 0x0
         30edc:	e5840030 	str	r0, [r4, #48]	; fField48
         30ee0:	e5840034 	str	r0, [r4, #52]	; fField52
         30ee4:	e5840038 	str	r0, [r4, #56]	; fField56
         30ee8:	e5840060 	str	r0, [r4, #96]	; fField96
         30eec:	e5840064 	str	r0, [r4, #100]	; fField100
         30ef0:	e59f0014 	ldr	r0, [pc, #14]	; 30f0c <TAppWorld::__ct(void)+0x80>
         30ef4:	e5840068 	str	r0, [r4, #104]	; fField104
         30ef8:	e59f0010 	ldr	r0, [pc, #10]	; 30f10 <TAppWorld::__ct(void)+0x84>
         30efc:	e584006c 	str	r0, [r4, #108]	; fField108
         30f00:	e1a00004 	mov	r0, r4
         30f04:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         30f08:	00020730 	andeq	r0, r2, r0, lsr r7
         30f0c:	2a2a2a2a 	bcs	abb7bc <ROM$$Size+0x39bb70>
         30f10:	6e657774 	mcrvs	7, 3, r7, cr5, cr4, {3}
    */
}

/**
 * Symbol: TAppWorld::__dt(void)
 * Address: 00030f14
 */
TAppWorld::~TAppWorld(void) {
    /*
         30f14:	e1a0c00d 	mov	ip, sp
         30f18:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         30f1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         30f20:	e1a04000 	mov	r4, r0
         30f24:	e1a05001 	mov	r5, r1
         30f28:	e59f0020 	ldr	r0, [pc, #20]	; 30f50 <TAppWorld::__dt(void)+0x3c>	; fIdler
         30f2c:	e5840000 	str	r0, [r4]
         30f30:	e1a00004 	mov	r0, r4
         30f34:	e3a01000 	mov	r1, #0	; 0x0
         30f38:	eb6dfe42 	bl	1bb0848 <TForkWorld::$__dt(void)>
         30f3c:	e3150001 	tst	r5, #1	; 0x1
         30f40:	11a00004 	movne	r0, r4
         30f44:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         30f48:	1a6e71e4 	bne	1bcd6e0 <$__dl(void *)>
         30f4c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         30f50:	00020730 	andeq	r0, r2, r0, lsr r7
    */
}

/**
 * Symbol: TAppWorld::Init(unsigned long, unsigned char, unsigned long)
 * Address: 00030f54
 */
TAppWorld::Init(unsigned long, unsigned char, unsigned long) {
    /*
         30f54:	e31200ff 	tst	r2, #255	; 0xff
         30f58:	15801030 	strne	r1, [r0, #48]	; fField48
         30f5c:	e1a02003 	mov	r2, r3
         30f60:	ea6df5e9 	b	1bae70c <TForkWorld::$MainInit(unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TAppWorld::Init(unsigned long, unsigned char, unsigned long, unsigned long, unsigned long)
 * Address: 00030f64
 */
TAppWorld::Init(unsigned long, unsigned char, unsigned long, unsigned long, unsigned long) {
    /*
         30f64:	e1a0c00d 	mov	ip, sp
         30f68:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         30f6c:	e24cb004 	sub	fp, ip, #4	; 0x4
         30f70:	e1a0c002 	mov	ip, r2
         30f74:	e1a02003 	mov	r2, r3
         30f78:	e31c00ff 	tst	ip, #255	; 0xff
         30f7c:	e59b3008 	ldr	r3, [fp, #8]	; fNext
         30f80:	e59be004 	ldr	lr, [fp, #4]	; TAppWorld
         30f84:	15801030 	strne	r1, [r0, #48]	; fField48
         30f88:	e92d0008 	stmdb	sp!, {r3}
         30f8c:	e1a0300e 	mov	r3, lr
         30f90:	eb6df5dc 	bl	1bae708 <TForkWorld::$MainInit(unsigned long, unsigned long, unsigned long, unsigned long)>
         30f94:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorld::MainConstructor(void)
 * Address: 00030f98
 */
TAppWorld::MainConstructor(void) {
    /*
         30f98:	e1a0c00d 	mov	ip, sp
         30f9c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         30fa0:	e24cb004 	sub	fp, ip, #4	; 0x4
         30fa4:	e1a04000 	mov	r4, r0
         30fa8:	eb6df1d2 	bl	1bad6f8 <TForkWorld::$MainConstructor(void)>
         30fac:	e1b05000 	movs	r5, r0
         30fb0:	1a000039 	bne	3109c <TAppWorld::MainConstructor(void)+0x104>
         30fb4:	e3a00000 	mov	r0, #0	; 0x0
         30fb8:	eb6ecc93 	bl	1be420c <TAppWorldState::$__ct(void)>
         30fbc:	e5840034 	str	r0, [r4, #52]	; fField52
         30fc0:	e3300000 	teq	r0, #0	; 0x0
         30fc4:	0a000032 	beq	31094 <TAppWorld::MainConstructor(void)+0xfc>
         30fc8:	e2801034 	add	r1, r0, #52	; 0x34
         30fcc:	e5a0102c 	str	r1, [r0, #44]!	; fField44
         30fd0:	e5940034 	ldr	r0, [r4, #52]	; fField52
         30fd4:	e2801008 	add	r1, r0, #8	; 0x8
         30fd8:	e5a01030 	str	r1, [r0, #48]!	; fField48
         30fdc:	e5940034 	ldr	r0, [r4, #52]	; fField52
         30fe0:	e5840038 	str	r0, [r4, #56]	; fField56
         30fe4:	eb6ee133 	bl	1be94b8 <TAppWorldState::$Init(void)>
         30fe8:	e1b05000 	movs	r5, r0
         30fec:	1a00002a 	bne	3109c <TAppWorld::MainConstructor(void)+0x104>
         30ff0:	e5940030 	ldr	r0, [r4, #48]	; fField48
         30ff4:	e3300000 	teq	r0, #0	; 0x0
         30ff8:	0a00001a 	beq	31068 <TAppWorld::MainConstructor(void)+0xd0>
         30ffc:	e52d0008 	str	r0, [sp, -#8]!	; fNext
         31000:	e3a00000 	mov	r0, #0	; 0x0
         31004:	e5cd0004 	strb	r0, [sp, #4]	; TAppWorld
         31008:	e24dd010 	sub	sp, sp, #16	; 0x10
         3100c:	e1a0000d 	mov	r0, sp
         31010:	eb6e719c 	bl	1bcd688 <TUNameServer::$__ct(void)>
         31014:	e3a03000 	mov	r3, #0	; 0x0
         31018:	e92d0008 	stmdb	sp!, {r3}
         3101c:	e1a00004 	mov	r0, r4
         31020:	eb6edd05 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         31024:	e28d1014 	add	r1, sp, #20	; 0x14
         31028:	e5903000 	ldr	r3, [r0]
         3102c:	e28d0004 	add	r0, sp, #4	; 0x4
         31030:	e28f2f08 	add	r2, pc, #32	; 0x20
         31034:	eb6e9f0d 	bl	1bd8c70 <TUNameServer::$RegisterName(char *, char *, unsigned long, unsigned long)>
         31038:	e28dd004 	add	sp, sp, #4	; 0x4
         3103c:	e1b05000 	movs	r5, r0
         31040:	e1a0000d 	mov	r0, sp
         31044:	e3a01000 	mov	r1, #0	; 0x0
         31048:	0a000004 	beq	31060 <TAppWorld::MainConstructor(void)+0xc8>
         3104c:	eb6e75ac 	bl	1bce704 <TUNameServer::$__dt(void)>
         31050:	e28dd018 	add	sp, sp, #24	; 0x18
         31054:	ea000010 	b	3109c <TAppWorld::MainConstructor(void)+0x104>
         31058:	5455506f 	ldrplb	r5, [r5], -#111	; fField111
         3105c:	72740000 	rsbvcs	r0, r4, #0	; 0x0
         31060:	eb6e75a7 	bl	1bce704 <TUNameServer::$__dt(void)>
         31064:	e28dd018 	add	sp, sp, #24	; 0x18
         31068:	e2841048 	add	r1, r4, #72	; 0x48
         3106c:	e3a00000 	mov	r0, #0	; 0x0
         31070:	eb6ec855 	bl	1be31cc <CSortedList::$__ct(CItemComparer *)>
         31074:	e5840060 	str	r0, [r4, #96]	; fField96
         31078:	e3300000 	teq	r0, #0	; 0x0
         3107c:	0a000004 	beq	31094 <TAppWorld::MainConstructor(void)+0xfc>
         31080:	e3a00000 	mov	r0, #0	; 0x0
         31084:	eb6dfde4 	bl	1bb081c <TTimerQueue::$__ct(void)>
         31088:	e5a40064 	str	r0, [r4, #100]!	; fField100
         3108c:	e3300000 	teq	r0, #0	; 0x0
         31090:	1a000001 	bne	3109c <TAppWorld::MainConstructor(void)+0x104>
         31094:	eb6ec421 	bl	1be2120 <$MemError>
         31098:	e1a05000 	mov	r5, r0
         3109c:	e1a00005 	mov	r0, r5
         310a0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorld::MainDestructor(void)
 * Address: 000310a4
 */
TAppWorld::MainDestructor(void) {
    /*
         310a4:	e1a0c00d 	mov	ip, sp
         310a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         310ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         310b0:	e1a04000 	mov	r4, r0
         310b4:	eb6df591 	bl	1bae700 <TForkWorld::$MainDestructor(void)>
         310b8:	e3a06000 	mov	r6, #0	; 0x0
         310bc:	e5941060 	ldr	r1, [r4, #96]	; fField96
         310c0:	e3310000 	teq	r1, #0	; 0x0
         310c4:	0a000019 	beq	31130 <TAppWorld::MainDestructor(void)+0x8c>
         310c8:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         310cc:	e1a0000d 	mov	r0, sp
         310d0:	eb6ec843 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         310d4:	e1a0000d 	mov	r0, sp
         310d8:	eb6ed8c6 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         310dc:	e1a05000 	mov	r5, r0
         310e0:	e1a0000d 	mov	r0, sp
         310e4:	eb6ee523 	bl	1bea578 <CArrayIterator::$More(void)>
         310e8:	e3300000 	teq	r0, #0	; 0x0
         310ec:	0a00000b 	beq	31120 <TAppWorld::MainDestructor(void)+0x7c>
         310f0:	e1b00005 	movs	r0, r5
         310f4:	0a000002 	beq	31104 <TAppWorld::MainDestructor(void)+0x60>
         310f8:	e3a01001 	mov	r1, #1	; 0x1
         310fc:	e1a0e00f 	mov	lr, pc
         31100:	e590f000 	ldr	pc, [r0]
         31104:	e1a0000d 	mov	r0, sp
         31108:	eb6ee924 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         3110c:	e1a05000 	mov	r5, r0
         31110:	e1a0000d 	mov	r0, sp
         31114:	eb6ee517 	bl	1bea578 <CArrayIterator::$More(void)>
         31118:	e3300000 	teq	r0, #0	; 0x0
         3111c:	1afffff3 	bne	310f0 <TAppWorld::MainDestructor(void)+0x4c>
         31120:	e1a0000d 	mov	r0, sp
         31124:	e3a01000 	mov	r1, #0	; 0x0
         31128:	eb6ecc4e 	bl	1be4268 <CArrayIterator::$__dt(void)>
         3112c:	e28dd01c 	add	sp, sp, #28	; 0x1c
         31130:	e5940030 	ldr	r0, [r4, #48]	; fField48
         31134:	e3300000 	teq	r0, #0	; 0x0
         31138:	0a00000c 	beq	31170 <TAppWorld::MainDestructor(void)+0xcc>
         3113c:	e52d0008 	str	r0, [sp, -#8]!	; fNext
         31140:	e5cd6004 	strb	r6, [sp, #4]	; TAppWorld
         31144:	e24dd010 	sub	sp, sp, #16	; 0x10
         31148:	e1a0000d 	mov	r0, sp
         3114c:	eb6e714d 	bl	1bcd688 <TUNameServer::$__ct(void)>
         31150:	e28d1010 	add	r1, sp, #16	; 0x10
         31154:	e1a0000d 	mov	r0, sp
         31158:	e28f2f12 	add	r2, pc, #72	; 0x48
         3115c:	eb6eb353 	bl	1bddeb0 <TUNameServer::$UnRegisterName(char *, char *)>
         31160:	e1a0000d 	mov	r0, sp
         31164:	e3a01000 	mov	r1, #0	; 0x0
         31168:	eb6e7565 	bl	1bce704 <TUNameServer::$__dt(void)>
         3116c:	e28dd018 	add	sp, sp, #24	; 0x18
         31170:	e5940034 	ldr	r0, [r4, #52]	; fField52
         31174:	e3300000 	teq	r0, #0	; 0x0
         31178:	13a01001 	movne	r1, #1	; 0x1
         3117c:	1b6dfdb7 	blne	1bb0860 <TAppWorldState::$__dt(void)>
         31180:	e5940060 	ldr	r0, [r4, #96]	; fField96
         31184:	e3300000 	teq	r0, #0	; 0x0
         31188:	13a01001 	movne	r1, #1	; 0x1
         3118c:	1b6ecc32 	blne	1be425c <CSortedList::$__dt(void)>
         31190:	e5b40064 	ldr	r0, [r4, #100]!	; fField100
         31194:	e3300000 	teq	r0, #0	; 0x0
         31198:	13a01001 	movne	r1, #1	; 0x1
         3119c:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         311a0:	1a6dfdaa 	bne	1bb0850 <TTimerQueue::$__dt(void)>
         311a4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         311a8:	5455506f 	ldrplb	r5, [r5], -#111	; fField111
         311ac:	72740000 	rsbvcs	r0, r4, #0	; 0x0
    */
}

/**
 * Symbol: TAppWorld::ForkInit(TForkWorld *)
 * Address: 000311b0
 */
TAppWorld::ForkInit(TForkWorld *) {
    /*
         311b0:	e1a0c00d 	mov	ip, sp
         311b4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         311b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         311bc:	e1a04000 	mov	r4, r0
         311c0:	e1a05001 	mov	r5, r1
         311c4:	eb6df136 	bl	1bad6a4 <TForkWorld::$ForkInit(TForkWorld *)>
         311c8:	e3300000 	teq	r0, #0	; 0x0
         311cc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         311d0:	e5951030 	ldr	r1, [r5, #48]	; fField48
         311d4:	e5841030 	str	r1, [r4, #48]	; fField48
         311d8:	e3a01000 	mov	r1, #0	; 0x0
         311dc:	e5841034 	str	r1, [r4, #52]	; fField52
         311e0:	e5841038 	str	r1, [r4, #56]	; fField56
         311e4:	e2841040 	add	r1, r4, #64	; 0x40
         311e8:	e2852040 	add	r2, r5, #64	; 0x40
         311ec:	e8925000 	ldmia	r2, {ip, lr}
         311f0:	e8815000 	stmia	r1, {ip, lr}
         311f4:	e284104c 	add	r1, r4, #76	; 0x4c
         311f8:	e285204c 	add	r2, r5, #76	; 0x4c
         311fc:	e8925000 	ldmia	r2, {ip, lr}
         31200:	e8815000 	stmia	r1, {ip, lr}
         31204:	e2842058 	add	r2, r4, #88	; 0x58
         31208:	e2851058 	add	r1, r5, #88	; 0x58
         3120c:	e8915000 	ldmia	r1, {ip, lr}
         31210:	e8825000 	stmia	r2, {ip, lr}
         31214:	e5951060 	ldr	r1, [r5, #96]	; fField96
         31218:	e5841060 	str	r1, [r4, #96]	; fField96
         3121c:	e5951064 	ldr	r1, [r5, #100]	; fField100
         31220:	e5841064 	str	r1, [r4, #100]	; fField100
         31224:	e5951068 	ldr	r1, [r5, #104]	; fField104
         31228:	e5841068 	str	r1, [r4, #104]	; fField104
         3122c:	e5b5106c 	ldr	r1, [r5, #108]!	; fField108
         31230:	e5a4106c 	str	r1, [r4, #108]!	; fField108
         31234:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorld::ForkConstructor(TForkWorld *)
 * Address: 00031238
 */
TAppWorld::ForkConstructor(TForkWorld *) {
    /*
         31238:	e1a0c00d 	mov	ip, sp
         3123c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         31240:	e24cb004 	sub	fp, ip, #4	; 0x4
         31244:	e1a04000 	mov	r4, r0
         31248:	e1a05001 	mov	r5, r1
         3124c:	eb6df110 	bl	1bad694 <TForkWorld::$ForkConstructor(TForkWorld *)>
         31250:	e1b06000 	movs	r6, r0
         31254:	1a000014 	bne	312ac <TAppWorld::ForkConstructor(TForkWorld *)+0x74>
         31258:	e3a00000 	mov	r0, #0	; 0x0
         3125c:	eb6ecbea 	bl	1be420c <TAppWorldState::$__ct(void)>
         31260:	e5840034 	str	r0, [r4, #52]	; fField52
         31264:	e3300000 	teq	r0, #0	; 0x0
         31268:	1a000002 	bne	31278 <TAppWorld::ForkConstructor(TForkWorld *)+0x40>
         3126c:	eb6ec3ab 	bl	1be2120 <$MemError>
         31270:	e1a06000 	mov	r6, r0
         31274:	ea00000c 	b	312ac <TAppWorld::ForkConstructor(TForkWorld *)+0x74>
         31278:	e2801034 	add	r1, r0, #52	; 0x34
         3127c:	e5a0102c 	str	r1, [r0, #44]!	; fField44
         31280:	e5940034 	ldr	r0, [r4, #52]	; fField52
         31284:	e2801008 	add	r1, r0, #8	; 0x8
         31288:	e5a01030 	str	r1, [r0, #48]!	; fField48
         3128c:	e5940034 	ldr	r0, [r4, #52]	; fField52
         31290:	e5a40038 	str	r0, [r4, #56]!	; fField56
         31294:	e5951034 	ldr	r1, [r5, #52]	; fField52
         31298:	e5911004 	ldr	r1, [r1, #4]	; TAppWorld
         3129c:	eb6df10e 	bl	1bad6dc <TAppWorldState::$Init(TUPort *)>
         312a0:	e1b06000 	movs	r6, r0
         312a4:	01a00005 	moveq	r0, r5
         312a8:	0b6ed41e 	bleq	1be6328 <TAppWorld::$AETerminateLoop(void)>
         312ac:	e1a00006 	mov	r0, r6
         312b0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorld::ForkDestructor(void)
 * Address: 00031350
 */
TAppWorld::ForkDestructor(void) {
    /*
         31350:	e1a0c00d 	mov	ip, sp
         31354:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         31358:	e24cb004 	sub	fp, ip, #4	; 0x4
         3135c:	e1a04000 	mov	r4, r0
         31360:	e5900034 	ldr	r0, [r0, #52]	; fField52
         31364:	e3300000 	teq	r0, #0	; 0x0
         31368:	13a01000 	movne	r1, #0	; 0x0
         3136c:	15a01004 	strne	r1, [r0, #4]!	; TAppWorld
         31370:	15940034 	ldrne	r0, [r4, #52]	; fField52
         31374:	13300000 	teqne	r0, #0	; 0x0
         31378:	13a01001 	movne	r1, #1	; 0x1
         3137c:	1b6dfd37 	blne	1bb0860 <TAppWorldState::$__dt(void)>
         31380:	e1a00004 	mov	r0, r4
         31384:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         31388:	ea6df0c3 	b	1bad69c <TForkWorld::$ForkDestructor(void)>
    */
}

/**
 * Symbol: TAppWorld::TheMain(void)
 * Address: 0003138c
 */
TAppWorld::TheMain(void) {
    /*
         3138c:	e5901038 	ldr	r1, [r0, #56]	; fField56
         31390:	ea6ed3e6 	b	1be6330 <TAppWorld::$AEventLoop(TAppWorldState *)>
    */
}

/**
 * Symbol: TAppWorld::GetSizeOf(void)
 * Address: 00031394
 */
TAppWorld::GetSizeOf(void) {
    /*
         31394:	e3a00070 	mov	r0, #112	; 0x70
         31398:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::InterruptHandler(unsigned long *, TAEvent *)
 * Address: 0003139c
 */
TAppWorld::InterruptHandler(unsigned long *, TAEvent *) {
    /*
         3139c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::GetError(void)
 * Address: 000313a0
 */
TAppWorld::GetError(void) {
    /*
         313a0:	e5900038 	ldr	r0, [r0, #56]	; fField56
         313a4:	e5900000 	ldr	r0, [r0]
         313a8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::SetFilter(unsigned long)
 * Address: 000313ac
 */
TAppWorld::SetFilter(unsigned long) {
    /*
         313ac:	e5900038 	ldr	r0, [r0, #56]	; fField56
         313b0:	e5b02024 	ldr	r2, [r0, #36]!	; fField36
         313b4:	e1821001 	orr	r1, r2, r1
         313b8:	e5801000 	str	r1, [r0]
         313bc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::ClearFilter(unsigned long)
 * Address: 000313c0
 */
TAppWorld::ClearFilter(unsigned long) {
    /*
         313c0:	e5900038 	ldr	r0, [r0, #56]	; fField56
         313c4:	e5b02024 	ldr	r2, [r0, #36]!	; fField36
         313c8:	e1c21001 	bic	r1, r2, r1
         313cc:	e5801000 	str	r1, [r0]
         313d0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::TokenOnly(void)
 * Address: 000313d4
 */
TAppWorld::TokenOnly(void) {
    /*
         313d4:	e5900038 	ldr	r0, [r0, #56]	; fField56
         313d8:	e5d00029 	ldrb	r0, [r0, #41]	; fField41
         313dc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::SetTokenOnly(unsigned char)
 * Address: 000313e0
 */
TAppWorld::SetTokenOnly(unsigned char) {
    /*
         313e0:	e5900038 	ldr	r0, [r0, #56]	; fField56
         313e4:	e5c01029 	strb	r1, [r0, #41]	; fField41
         313e8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::GetMyPort(void)
 * Address: 000313ec
 */
TAppWorld::GetMyPort(void) {
    /*
         313ec:	e5900038 	ldr	r0, [r0, #56]	; fField56
         313f0:	ea6edc17 	b	1be8454 <TAppWorldState::$GetPort(void)>
    */
}

/**
 * Symbol: TAppWorld::AERemoveHandler(TAEventHandler *)
 * Address: 00031460
 */
TAppWorld::AERemoveHandler(TAEventHandler *) {
    /*
         31460:	e1a0c00d 	mov	ip, sp
         31464:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         31468:	e24cb004 	sub	fp, ip, #4	; 0x4
         3146c:	e1a04000 	mov	r4, r0
         31470:	e1a05001 	mov	r5, r1
         31474:	e24dd004 	sub	sp, sp, #4	; 0x4
         31478:	e2800054 	add	r0, r0, #84	; 0x54
         3147c:	e1a01000 	mov	r1, r0
         31480:	e5a05004 	str	r5, [r0, #4]!	; TAppWorld
         31484:	e1a0200d 	mov	r2, sp
         31488:	e5940060 	ldr	r0, [r4, #96]	; fField96
         3148c:	eb6ef081 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         31490:	e1b06000 	movs	r6, r0
         31494:	0a00000d 	beq	314d0 <TAppWorld::AERemoveHandler(TAEventHandler *)+0x70>
         31498:	e1a01006 	mov	r1, r6
         3149c:	e1a00005 	mov	r0, r5
         314a0:	eb6dcf78 	bl	1ba5288 <TAEventHandler::$RemoveHandler(TAEventHandler *)>
         314a4:	e1b02000 	movs	r2, r0
         314a8:	1a000004 	bne	314c0 <TAppWorld::AERemoveHandler(TAEventHandler *)+0x60>
         314ac:	e5b40060 	ldr	r0, [r4, #96]!	; fField96
         314b0:	e3a02001 	mov	r2, #1	; 0x1
         314b4:	e59d1000 	ldr	r1, [sp]
         314b8:	eb6eec5d 	bl	1bec634 <CDynamicArray::$RemoveElementsAt(long, long)>
         314bc:	ea000003 	b	314d0 <TAppWorld::AERemoveHandler(TAEventHandler *)+0x70>
         314c0:	e1320006 	teq	r2, r6
         314c4:	15b40060 	ldrne	r0, [r4, #96]!	; fField96
         314c8:	159d1000 	ldrne	r1, [sp]
         314cc:	1b6eec5d 	blne	1bec648 <CList::$ReplaceAt(long, void *)>
         314d0:	e3a00000 	mov	r0, #0	; 0x0
         314d4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorld::AEInstallHandler(TAEventHandler *)
 * Address: 000314d8
 */
TAppWorld::AEInstallHandler(TAEventHandler *) {
    /*
         314d8:	e1a0c00d 	mov	ip, sp
         314dc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         314e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         314e4:	e1a05000 	mov	r5, r0
         314e8:	e1a04001 	mov	r4, r1
         314ec:	e24dd004 	sub	sp, sp, #4	; 0x4
         314f0:	e2800054 	add	r0, r0, #84	; 0x54
         314f4:	e1a01000 	mov	r1, r0
         314f8:	e5a04004 	str	r4, [r0, #4]!	; TAppWorld
         314fc:	e1a0200d 	mov	r2, sp
         31500:	e5950060 	ldr	r0, [r5, #96]	; fField96
         31504:	eb6ef063 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         31508:	e3300000 	teq	r0, #0	; 0x0
         3150c:	0a000007 	beq	31530 <TAppWorld::AEInstallHandler(TAEventHandler *)+0x58>
         31510:	e1a01000 	mov	r1, r0
         31514:	e1a00004 	mov	r0, r4
         31518:	eb6dbee4 	bl	1ba10b0 <TAEventHandler::$AddHandler(TAEventHandler *)>
         3151c:	e1a02004 	mov	r2, r4
         31520:	e5b50060 	ldr	r0, [r5, #96]!	; fField96
         31524:	e59d1000 	ldr	r1, [sp]
         31528:	eb6eec46 	bl	1bec648 <CList::$ReplaceAt(long, void *)>
         3152c:	ea000003 	b	31540 <TAppWorld::AEInstallHandler(TAEventHandler *)+0x68>
         31530:	e5b50060 	ldr	r0, [r5, #96]!	; fField96
         31534:	e1a02004 	mov	r2, r4
         31538:	e59d1000 	ldr	r1, [sp]
         3153c:	eb6edfea 	bl	1be94ec <CList::$InsertAt(long, void *)>
         31540:	e3a00000 	mov	r0, #0	; 0x0
         31544:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorld::AEGetCollectedEvent(unsigned long, TUMsgToken *, unsigned long *, TAEvent **, unsigned long *)
 * Address: 00031548
 */
TAppWorld::AEGetCollectedEvent(unsigned long, TUMsgToken *, unsigned long *, TAEvent **, unsigned long *) {
    /*
         31548:	e1a0c00d 	mov	ip, sp
         3154c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         31550:	e24cb004 	sub	fp, ip, #4	; 0x4
         31554:	e1a04002 	mov	r4, r2
         31558:	e1a00003 	mov	r0, r3
         3155c:	e3a05000 	mov	r5, #0	; 0x0
         31560:	e3110402 	tst	r1, #33554432	; 0x2000000
         31564:	e59b6008 	ldr	r6, [fp, #8]	; fNext
         31568:	e59bc004 	ldr	ip, [fp, #4]	; TAppWorld
         3156c:	0a000015 	beq	315c8 <TAppWorld::AEGetCollectedEvent(unsigned long, TUMsgToken *, unsigned long *, TAEvent **, unsigned long *)+0x80>
         31570:	e5941004 	ldr	r1, [r4, #4]	; TAppWorld
         31574:	e3310000 	teq	r1, #0	; 0x0
         31578:	0a00001e 	beq	315f8 <TAppWorld::AEGetCollectedEvent(unsigned long, TUMsgToken *, unsigned long *, TAEvent **, unsigned long *)+0xb0>
         3157c:	e24dd008 	sub	sp, sp, #8	; 0x8
         31580:	e3a02000 	mov	r2, #0	; 0x0
         31584:	e5cd2004 	strb	r2, [sp, #4]	; TAppWorld
         31588:	e1a0200c 	mov	r2, ip
         3158c:	e58d1000 	str	r1, [sp]
         31590:	e1a01000 	mov	r1, r0
         31594:	e1a0000d 	mov	r0, sp
         31598:	eb6e8d26 	bl	1bd4a38 <TUSharedMem::$GetSize(unsigned long *, void **)>
         3159c:	e1b05000 	movs	r5, r0
         315a0:	1a000003 	bne	315b4 <TAppWorld::AEGetCollectedEvent(unsigned long, TUMsgToken *, unsigned long *, TAEvent **, unsigned long *)+0x6c>
         315a4:	e1a01006 	mov	r1, r6
         315a8:	e1a00004 	mov	r0, r4
         315ac:	eb6e8d27 	bl	1bd4a50 <TUMsgToken::$GetUserRefCon(unsigned long *)>
         315b0:	e1a05000 	mov	r5, r0
         315b4:	e1a0000d 	mov	r0, sp
         315b8:	e3a01000 	mov	r1, #0	; 0x0
         315bc:	eb6e7458 	bl	1bce724 <TUObject::$__dt(void)>
         315c0:	e28dd008 	add	sp, sp, #8	; 0x8
         315c4:	ea00000b 	b	315f8 <TAppWorld::AEGetCollectedEvent(unsigned long, TUMsgToken *, unsigned long *, TAEvent **, unsigned long *)+0xb0>
         315c8:	e3110401 	tst	r1, #16777216	; 0x1000000
         315cc:	0a000009 	beq	315f8 <TAppWorld::AEGetCollectedEvent(unsigned long, TUMsgToken *, unsigned long *, TAEvent **, unsigned long *)+0xb0>
         315d0:	e3a03001 	mov	r3, #1	; 0x1
         315d4:	e3a02000 	mov	r2, #0	; 0x0
         315d8:	e92d000c 	stmdb	sp!, {r2, r3}
         315dc:	e1a01000 	mov	r1, r0
         315e0:	e1a00004 	mov	r0, r4
         315e4:	e3a03c01 	mov	r3, #256	; 0x100
         315e8:	e59c2000 	ldr	r2, [ip]
         315ec:	eb6e787d 	bl	1bcf7e8 <TUMsgToken::$CashMessageToken(unsigned long *, void *, unsigned long, unsigned long, unsigned char)>
         315f0:	e28dd008 	add	sp, sp, #8	; 0x8
         315f4:	e1a05000 	mov	r5, r0
         315f8:	e1a00005 	mov	r0, r5
         315fc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorld::AEDeferReply(void)
 * Address: 00031600
 */
TAppWorld::AEDeferReply(void) {
    /*
         31600:	e3a01000 	mov	r1, #0	; 0x0
         31604:	e5900038 	ldr	r0, [r0, #56]	; fField56
         31608:	e5a01030 	str	r1, [r0, #48]!	; fField48
         3160c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::AESetReply(unsigned long)
 * Address: 00031610
 */
TAppWorld::AESetReply(unsigned long) {
    /*
         31610:	e5900038 	ldr	r0, [r0, #56]	; fField56
         31614:	e5a0101c 	str	r1, [r0, #28]!	; fField28
         31618:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::AESetReply(unsigned long, TAEvent *)
 * Address: 0003161c
 */
TAppWorld::AESetReply(unsigned long, TAEvent *) {
    /*
         3161c:	e5903038 	ldr	r3, [r0, #56]	; fField56
         31620:	e5a3202c 	str	r2, [r3, #44]!	; fField44
         31624:	e5900038 	ldr	r0, [r0, #56]	; fField56
         31628:	e5a0101c 	str	r1, [r0, #28]!	; fField28
         3162c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::AESetReply(TUMsgToken *)
 * Address: 00031630
 */
TAppWorld::AESetReply(TUMsgToken *) {
    /*
         31630:	e5900038 	ldr	r0, [r0, #56]	; fField56
         31634:	e5a01030 	str	r1, [r0, #48]!	; fField48
         31638:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::AESetReply(TUMsgToken *, unsigned long, TAEvent *)
 * Address: 0003163c
 */
TAppWorld::AESetReply(TUMsgToken *, unsigned long, TAEvent *) {
    /*
         3163c:	e590c038 	ldr	ip, [r0, #56]	; fField56
         31640:	e5ac1030 	str	r1, [ip, #48]!	; fField48
         31644:	e5901038 	ldr	r1, [r0, #56]	; fField56
         31648:	e5a1302c 	str	r3, [r1, #44]!	; fField44
         3164c:	e5900038 	ldr	r0, [r0, #56]	; fField56
         31650:	e5a0201c 	str	r2, [r0, #28]!	; fField28
         31654:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::AEGetMsgToken(void)
 * Address: 00031658
 */
TAppWorld::AEGetMsgToken(void) {
    /*
         31658:	e5900038 	ldr	r0, [r0, #56]	; fField56
         3165c:	e5900030 	ldr	r0, [r0, #48]	; fField48
         31660:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::AEGetMsgType(void)
 * Address: 00031664
 */
TAppWorld::AEGetMsgType(void) {
    /*
         31664:	e5900038 	ldr	r0, [r0, #56]	; fField56
         31668:	e5900020 	ldr	r0, [r0, #32]	; fField32
         3166c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::AEGetAEvent(void)
 * Address: 000316b8
 */
TAppWorld::AEGetAEvent(void) {
    /*
         316b8:	e5900038 	ldr	r0, [r0, #56]	; fField56
         316bc:	e590002c 	ldr	r0, [r0, #44]	; fField44
         316c0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::AEGetMsgSize(void)
 * Address: 000316c4
 */
TAppWorld::AEGetMsgSize(void) {
    /*
         316c4:	e5900038 	ldr	r0, [r0, #56]	; fField56
         316c8:	e5900018 	ldr	r0, [r0, #24]	; fField24
         316cc:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::AEReplyImmed(void)
 * Address: 000316d0
 */
TAppWorld::AEReplyImmed(void) {
    /*
         316d0:	e1a0c00d 	mov	ip, sp
         316d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         316d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         316dc:	e1a04000 	mov	r4, r0
         316e0:	e3a05000 	mov	r5, #0	; 0x0
         316e4:	e5901038 	ldr	r1, [r0, #56]	; fField56
         316e8:	e5910030 	ldr	r0, [r1, #48]	; fField48
         316ec:	e3300000 	teq	r0, #0	; 0x0
         316f0:	0a000006 	beq	31710 <TAppWorld::AEReplyImmed(void)+0x40>
         316f4:	e591201c 	ldr	r2, [r1, #28]	; fField28
         316f8:	e591102c 	ldr	r1, [r1, #44]	; fField44
         316fc:	e3a03000 	mov	r3, #0	; 0x0
         31700:	eb6ea179 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
         31704:	e1a05000 	mov	r5, r0
         31708:	e1a00004 	mov	r0, r4
         3170c:	eb6ecef3 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
         31710:	e1a00005 	mov	r0, r5
         31714:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorld::AETerminateLoop(void)
 * Address: 00031718
 */
TAppWorld::AETerminateLoop(void) {
    /*
         31718:	e3a01001 	mov	r1, #1	; 0x1
         3171c:	e5900038 	ldr	r0, [r0, #56]	; fField56
         31720:	e5c01028 	strb	r1, [r0, #40]	; fField40
         31724:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::AEFindHandler(unsigned long, unsigned long)
 * Address: 00031728
 */
TAppWorld::AEFindHandler(unsigned long, unsigned long) {
    /*
         31728:	e1a0c00d 	mov	ip, sp
         3172c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         31730:	e24cb004 	sub	fp, ip, #4	; 0x4
         31734:	e1a04000 	mov	r4, r0
         31738:	e1a06001 	mov	r6, r1
         3173c:	e1a05002 	mov	r5, r2
         31740:	e24dd00c 	sub	sp, sp, #12	; 0xc
         31744:	e28d0004 	add	r0, sp, #4	; 0x4
         31748:	eb6ecaba 	bl	1be4238 <TAEvent::$__ct(void)>
         3174c:	e2840048 	add	r0, r4, #72	; 0x48
         31750:	e1a01000 	mov	r1, r0
         31754:	e98d0060 	stmib	sp, {r5, r6}
         31758:	e28d2004 	add	r2, sp, #4	; 0x4
         3175c:	e5a02004 	str	r2, [r0, #4]!	; TAppWorld
         31760:	e1a0200d 	mov	r2, sp
         31764:	e5b40060 	ldr	r0, [r4, #96]!	; fField96
         31768:	eb6eefca 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         3176c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 00031770
 */
TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *) {
    /*
         31770:	e1a0c00d 	mov	ip, sp
         31774:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         31778:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         3177c:	e24cb014 	sub	fp, ip, #20	; 0x14
         31780:	e3a04000 	mov	r4, #0	; 0x0
         31784:	e52d4008 	str	r4, [sp, -#8]!	; fNext
         31788:	e59b1008 	ldr	r1, [fp, #8]	; fNext
         3178c:	e3110403 	tst	r1, #50331648	; 0x3000000
         31790:	159b000c 	ldrne	r0, [fp, #12]	; fEventClass
         31794:	13300000 	teqne	r0, #0	; 0x0
         31798:	0a000013 	beq	317ec <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x7c>
         3179c:	e1a0300d 	mov	r3, sp
         317a0:	e28b2014 	add	r2, fp, #20	; 0x14
         317a4:	e92d000c 	stmdb	sp!, {r2, r3}
         317a8:	e1a02000 	mov	r2, r0
         317ac:	e59b0004 	ldr	r0, [fp, #4]	; TAppWorld
         317b0:	e59b3010 	ldr	r3, [fp, #16]	; fEventID
         317b4:	eb6ececd 	bl	1be52f0 <TAppWorld::$AEGetCollectedEvent(unsigned long, TUMsgToken *, unsigned long *, TAEvent **, unsigned long *)>
         317b8:	e28dd008 	add	sp, sp, #8	; 0x8
         317bc:	e1b04000 	movs	r4, r0
         317c0:	1a000009 	bne	317ec <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x7c>
         317c4:	e59dc000 	ldr	ip, [sp]
         317c8:	e33c0000 	teq	ip, #0	; 0x0
         317cc:	0a000006 	beq	317ec <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x7c>
         317d0:	e1a0000c 	mov	r0, ip
         317d4:	e28b300c 	add	r3, fp, #12	; 0xc
         317d8:	e893000e 	ldmia	r3, {r1, r2, r3}
         317dc:	e59cc000 	ldr	ip, [ip]
         317e0:	e1a0e00f 	mov	lr, pc
         317e4:	e28cf00c 	add	pc, ip, #12	; 0xc
         317e8:	ea00003a 	b	318d8 <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x168>
         317ec:	e3a050ec 	mov	r5, #236	; 0xec
         317f0:	e2455b0e 	sub	r5, r5, #14336	; 0x3800
         317f4:	e59b1014 	ldr	r1, [fp, #20]	; fIdler
         317f8:	e3310000 	teq	r1, #0	; 0x0
         317fc:	0a00003b 	beq	318f0 <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x180>
         31800:	e5913004 	ldr	r3, [r1, #4]	; TAppWorld
         31804:	e59b0004 	ldr	r0, [fp, #4]	; TAppWorld
         31808:	e5902068 	ldr	r2, [r0, #104]	; fField104
         3180c:	e1330002 	teq	r3, r2
         31810:	1a000021 	bne	3189c <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x12c>
         31814:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         31818:	e5b01060 	ldr	r1, [r0, #96]!	; fField96
         3181c:	e1a0000d 	mov	r0, sp
         31820:	eb6ec66f 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
         31824:	e1a0000d 	mov	r0, sp
         31828:	eb6ed6f2 	bl	1be73f8 <CListIterator::$FirstItem(void)>
         3182c:	e1a05000 	mov	r5, r0
         31830:	e1a0000d 	mov	r0, sp
         31834:	eb6ee34f 	bl	1bea578 <CArrayIterator::$More(void)>
         31838:	e3300000 	teq	r0, #0	; 0x0
         3183c:	0a000011 	beq	31888 <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x118>
         31840:	e3350000 	teq	r5, #0	; 0x0
         31844:	0a000008 	beq	3186c <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0xfc>
         31848:	e1a00005 	mov	r0, r5
         3184c:	e28b300c 	add	r3, fp, #12	; 0xc
         31850:	e893000e 	ldmia	r3, {r1, r2, r3}
         31854:	e595c000 	ldr	ip, [r5]
         31858:	e1a0e00f 	mov	lr, pc
         3185c:	e28cf008 	add	pc, ip, #8	; 0x8
         31860:	e5955004 	ldr	r5, [r5, #4]	; TAppWorld
         31864:	e3350000 	teq	r5, #0	; 0x0
         31868:	1afffff6 	bne	31848 <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0xd8>
         3186c:	e1a0000d 	mov	r0, sp
         31870:	eb6ee74a 	bl	1beb5a0 <CListIterator::$NextItem(void)>
         31874:	e1a05000 	mov	r5, r0
         31878:	e1a0000d 	mov	r0, sp
         3187c:	eb6ee33d 	bl	1bea578 <CArrayIterator::$More(void)>
         31880:	e3300000 	teq	r0, #0	; 0x0
         31884:	1affffed 	bne	31840 <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0xd0>
         31888:	e1a0000d 	mov	r0, sp
         3188c:	e3a01000 	mov	r1, #0	; 0x0
         31890:	eb6eca74 	bl	1be4268 <CArrayIterator::$__dt(void)>
         31894:	e28dd01c 	add	sp, sp, #28	; 0x1c
         31898:	ea000015 	b	318f4 <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x184>
         3189c:	e2800048 	add	r0, r0, #72	; 0x48
         318a0:	e5a01004 	str	r1, [r0, #4]!	; TAppWorld
         318a4:	e59b0004 	ldr	r0, [fp, #4]	; TAppWorld
         318a8:	e2801048 	add	r1, r0, #72	; 0x48
         318ac:	e5900060 	ldr	r0, [r0, #96]	; fField96
         318b0:	e28d2004 	add	r2, sp, #4	; 0x4
         318b4:	eb6eef77 	bl	1bed698 <CSortedList::$Search(CItemTester *, long &)>
         318b8:	e3300000 	teq	r0, #0	; 0x0
         318bc:	0a00000b 	beq	318f0 <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x180>
         318c0:	e59b1008 	ldr	r1, [fp, #8]	; fNext
         318c4:	e3110402 	tst	r1, #33554432	; 0x2000000
         318c8:	e28b300c 	add	r3, fp, #12	; 0xc
         318cc:	e893000e 	ldmia	r3, {r1, r2, r3}
         318d0:	0a000003 	beq	318e4 <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x174>
         318d4:	eb6dbdf7 	bl	1ba10b8 <TAEventHandler::$AEDoComplete(TUMsgToken *, unsigned long *, TAEvent *)>
         318d8:	e59b0004 	ldr	r0, [fp, #4]	; TAppWorld
         318dc:	eb6ece7f 	bl	1be52e0 <TAppWorld::$AEDeferReply(void)>
         318e0:	ea000003 	b	318f4 <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x184>
         318e4:	eb6dbdf4 	bl	1ba10bc <TAEventHandler::$AEDoEvent(TUMsgToken *, unsigned long *, TAEvent *)>
         318e8:	e1a04000 	mov	r4, r0
         318ec:	ea000000 	b	318f4 <TAppWorld::AEDispatch(unsigned long, TUMsgToken *, unsigned long *, TAEvent *)+0x184>
         318f0:	e1a04005 	mov	r4, r5
         318f4:	e1a00004 	mov	r0, r4
         318f8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAppWorld::AEventLoop(TAppWorldState *)
 * Address: 000318fc
 */
TAppWorld::AEventLoop(TAppWorldState *) {
    /*
         318fc:	e1a0c00d 	mov	ip, sp
         31900:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         31904:	e24cb004 	sub	fp, ip, #4	; 0x4
         31908:	e1a04000 	mov	r4, r0
         3190c:	e5906038 	ldr	r6, [r0, #56]	; fField56
         31910:	e3a07000 	mov	r7, #0	; 0x0
         31914:	e5801038 	str	r1, [r0, #56]	; fField56
         31918:	e59f9124 	ldr	r9, [pc, #124]	; 31a44 <TAppWorld::AEventLoop(TAppWorldState *)+0x148>
         3191c:	e249800c 	sub	r8, r9, #12	; 0xc
         31920:	e5940038 	ldr	r0, [r4, #56]	; fField56
         31924:	e2801034 	add	r1, r0, #52	; 0x34
         31928:	e5a0102c 	str	r1, [r0, #44]!	; fField44
         3192c:	e5940038 	ldr	r0, [r4, #56]	; fField56
         31930:	e2801008 	add	r1, r0, #8	; 0x8
         31934:	e5a01030 	str	r1, [r0, #48]!	; fField48
         31938:	e5940038 	ldr	r0, [r4, #56]	; fField56
         3193c:	e5a0701c 	str	r7, [r0, #28]!	; fField28
         31940:	e5940038 	ldr	r0, [r4, #56]	; fField56
         31944:	e5a07020 	str	r7, [r0, #32]!	; fField32
         31948:	e5940064 	ldr	r0, [r4, #100]	; fField100
         3194c:	eb6deb34 	bl	1bac624 <TTimerQueue::$Check(void)>
         31950:	e1a05000 	mov	r5, r0
         31954:	e5d4001d 	ldrb	r0, [r4, #29]
         31958:	e3300000 	teq	r0, #0	; 0x0
         3195c:	0a000034 	beq	31a34 <TAppWorld::AEventLoop(TAppWorldState *)+0x138>
         31960:	e1a00004 	mov	r0, r4
         31964:	eb6df37d 	bl	1bae760 <TForkWorld::$ReleaseMutex(void)>
         31968:	e594c038 	ldr	ip, [r4, #56]	; fField56
         3196c:	e5dc3029 	ldrb	r3, [ip, #41]	; fField41
         31970:	e5dc202a 	ldrb	r2, [ip, #42]
         31974:	e1a00005 	mov	r0, r5
         31978:	e59c1024 	ldr	r1, [ip, #36]	; fField36
         3197c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         31980:	e28c3020 	add	r3, ip, #32	; 0x20
         31984:	e59c2030 	ldr	r2, [ip, #48]	; fField48
         31988:	e92d000c 	stmdb	sp!, {r2, r3}
         3198c:	e59c202c 	ldr	r2, [ip, #44]	; fField44
         31990:	e28c1018 	add	r1, ip, #24	; 0x18
         31994:	e3a03c01 	mov	r3, #256	; 0x100
         31998:	e5bc0004 	ldr	r0, [ip, #4]!	; TAppWorld
         3199c:	eb6e9ca5 	bl	1bd8c38 <TUPort::$Receive(unsigned long *, void *, unsigned long, TUMsgToken *, unsigned long *, unsigned long, unsigned long, unsigned char, unsigned char)>
         319a0:	e28dd018 	add	sp, sp, #24	; 0x18
         319a4:	e1a05000 	mov	r5, r0
         319a8:	e1a00004 	mov	r0, r4
         319ac:	eb6de710 	bl	1bab5f4 <TForkWorld::$AcquireMutex(void)>
         319b0:	e1350009 	teq	r5, r9
         319b4:	0a00001a 	beq	31a24 <TAppWorld::AEventLoop(TAppWorldState *)+0x128>
         319b8:	e1b01005 	movs	r1, r5
         319bc:	e5940038 	ldr	r0, [r4, #56]	; fField56
         319c0:	e5805000 	str	r5, [r0]
         319c4:	e5940038 	ldr	r0, [r4, #56]	; fField56
         319c8:	11310008 	teqne	r1, r8
         319cc:	1a000014 	bne	31a24 <TAppWorld::AEventLoop(TAppWorldState *)+0x128>
         319d0:	e590302c 	ldr	r3, [r0, #44]	; fField44
         319d4:	e92d0008 	stmdb	sp!, {r3}
         319d8:	e2803018 	add	r3, r0, #24	; 0x18
         319dc:	e5b01020 	ldr	r1, [r0, #32]!	; fField32
         319e0:	e5b02010 	ldr	r2, [r0, #16]!	; fEventID
         319e4:	e1a00004 	mov	r0, r4
         319e8:	e594c000 	ldr	ip, [r4]
         319ec:	e1a0e00f 	mov	lr, pc
         319f0:	e28cf050 	add	pc, ip, #80	; 0x50
         319f4:	e28dd004 	add	sp, sp, #4	; 0x4
         319f8:	e1a03000 	mov	r3, r0
         319fc:	e5940038 	ldr	r0, [r4, #56]	; fField56
         31a00:	e5901030 	ldr	r1, [r0, #48]	; fField48
         31a04:	e3310000 	teq	r1, #0	; 0x0
         31a08:	15911004 	ldrne	r1, [r1, #4]	; TAppWorld
         31a0c:	13310000 	teqne	r1, #0	; 0x0
         31a10:	0a000003 	beq	31a24 <TAppWorld::AEventLoop(TAppWorldState *)+0x128>
         31a14:	e590201c 	ldr	r2, [r0, #28]	; fField28
         31a18:	e590102c 	ldr	r1, [r0, #44]	; fField44
         31a1c:	e2800008 	add	r0, r0, #8	; 0x8
         31a20:	eb6ea0b1 	bl	1bd9cec <TUMsgToken::$ReplyRPC(void *, unsigned long, long)>
         31a24:	e5940038 	ldr	r0, [r4, #56]	; fField56
         31a28:	e5d00028 	ldrb	r0, [r0, #40]	; fField40
         31a2c:	e3300000 	teq	r0, #0	; 0x0
         31a30:	0affffba 	beq	31920 <TAppWorld::AEventLoop(TAppWorldState *)+0x24>
         31a34:	e5940038 	ldr	r0, [r4, #56]	; fField56
         31a38:	e5c07028 	strb	r7, [r0, #40]	; fField40
         31a3c:	e5a46038 	str	r6, [r4, #56]!	; fField56
         31a40:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         31a44:	ffffd8db 	swinv	0x00ffd8db
    */
}

/**
 * Symbol: TAppWorld::AEventLoop(TAppWorldState *, TUMsgToken *)
 * Address: 00031a48
 */
TAppWorld::AEventLoop(TAppWorldState *, TUMsgToken *) {
    /*
         31a48:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppWorld::AEventLoop(void)
 * Address: 00031a4c
 */
TAppWorld::AEventLoop(void) {
    /*
         31a4c:	e5901034 	ldr	r1, [r0, #52]	; fField52
         31a50:	ea6ed236 	b	1be6330 <TAppWorld::$AEventLoop(TAppWorldState *)>
    */
}

/**
 * Symbol: TAppWorld::NestedEventLoop(void)
 * Address: 00031a54
 */
TAppWorld::NestedEventLoop(void) {
    /*
         31a54:	e1a0c00d 	mov	ip, sp
         31a58:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         31a5c:	e24cb004 	sub	fp, ip, #4	; 0x4
         31a60:	e1a04000 	mov	r4, r0
         31a64:	e24ddf4d 	sub	sp, sp, #308	; 0x134
         31a68:	e1a0000d 	mov	r0, sp
         31a6c:	eb6ec9e6 	bl	1be420c <TAppWorldState::$__ct(void)>
         31a70:	e1a00004 	mov	r0, r4
         31a74:	eb6eda70 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         31a78:	e1a01000 	mov	r1, r0
         31a7c:	e1a0000d 	mov	r0, sp
         31a80:	eb6def15 	bl	1bad6dc <TAppWorldState::$Init(TUPort *)>
         31a84:	e28d0008 	add	r0, sp, #8	; 0x8
         31a88:	e58d0030 	str	r0, [sp, #48]	; fField48
         31a8c:	e3a00000 	mov	r0, #0	; 0x0
         31a90:	e52d006c 	str	r0, [sp, -#108]!	; fField108
         31a94:	e28d0008 	add	r0, sp, #8	; 0x8
         31a98:	eb6e03b5 	bl	1bb2974 <$setjmp>
         31a9c:	e3300000 	teq	r0, #0	; 0x0
         31aa0:	1a000005 	bne	31abc <TAppWorld::NestedEventLoop(void)+0x68>
         31aa4:	e1a0000d 	mov	r0, sp
         31aa8:	eb6eb973 	bl	1be007c <$AddExceptionHandler>
         31aac:	e28d106c 	add	r1, sp, #108	; 0x6c
         31ab0:	e1a00004 	mov	r0, r4
         31ab4:	eb6ed21d 	bl	1be6330 <TAppWorld::$AEventLoop(TAppWorldState *)>
         31ab8:	ea000001 	b	31ac4 <TAppWorld::NestedEventLoop(void)+0x70>
         31abc:	e1a00004 	mov	r0, r4
         31ac0:	eb6ed218 	bl	1be6328 <TAppWorld::$AETerminateLoop(void)>
         31ac4:	e1a0000d 	mov	r0, sp
         31ac8:	eb6ebd7a 	bl	1be10b8 <$ExitHandler>
         31acc:	e28dd06c 	add	sp, sp, #108	; 0x6c
         31ad0:	e1a0000d 	mov	r0, sp
         31ad4:	e3a01000 	mov	r1, #0	; 0x0
         31ad8:	eb6dfb60 	bl	1bb0860 <TAppWorldState::$__dt(void)>
         31adc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

