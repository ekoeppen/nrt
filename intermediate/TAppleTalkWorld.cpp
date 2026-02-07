#include "include/TAppleTalkWorld.h"

/**
 * Symbol: TAppleTalkWorld::__ct(void)
 * Address: 00032110
 */
TAppleTalkWorld::TAppleTalkWorld(void) {
    /*
         32110:	e1a0c00d 	mov	ip, sp
         32114:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         32118:	e24cb004 	sub	fp, ip, #4	; 0x4
         3211c:	e1b04000 	movs	r4, r0
         32120:	1a000003 	bne	32134 <TAppleTalkWorld::__ct(void)+0x24>
         32124:	e3a00e5f 	mov	r0, #1520	; 0x5f0
         32128:	eb6e7182 	bl	1bce738 <$__nw(unsigned int)>
         3212c:	e1b04000 	movs	r4, r0
         32130:	0a00000b 	beq	32164 <TAppleTalkWorld::__ct(void)+0x54>
         32134:	e1a00004 	mov	r0, r4
         32138:	eb6ec841 	bl	1be4244 <TAppWorld::$__ct(void)>
         3213c:	e2841f7a 	add	r1, r4, #488	; 0x1e8
         32140:	e2811b01 	add	r1, r1, #1024	; 0x400
         32144:	e2840070 	add	r0, r4, #112	; 0x70
         32148:	e59f301c 	ldr	r3, [pc, #1c]	; 3216c <TAppleTalkWorld::__ct(void)+0x5c>
         3214c:	e3a02f46 	mov	r2, #280	; 0x118
         32150:	eb674c4b 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         32154:	e59f0014 	ldr	r0, [pc, #14]	; 32170 <TAppleTalkWorld::__ct(void)+0x60>
         32158:	e5840000 	str	r0, [r4]
         3215c:	e3a00000 	mov	r0, #0	; 0x0
         32160:	e58405ec 	str	r0, [r4, #1516]	; fField1516
         32164:	e1a00004 	mov	r0, r4
         32168:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         3216c:	01a718a0 	moveq	r1, r0, lsr #17
         32170:	0001df30 	andeq	sp, r1, r0, lsr pc
    */
}

/**
 * Symbol: TAppleTalkWorld::GetSizeOf(void)
 * Address: 00032174
 */
TAppleTalkWorld::GetSizeOf(void) {
    /*
         32174:	e3a00e5f 	mov	r0, #1520	; 0x5f0
         32178:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppleTalkWorld::MainConstructor(void)
 * Address: 0003217c
 */
TAppleTalkWorld::MainConstructor(void) {
    /*
         3217c:	e1a0c00d 	mov	ip, sp
         32180:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         32184:	e24cb004 	sub	fp, ip, #4	; 0x4
         32188:	e1a04000 	mov	r4, r0
         3218c:	eb6ebbd6 	bl	1be10ec <$GetHeap>
         32190:	e58405e8 	str	r0, [r4, #1512]	; fField1512
         32194:	e2842f7b 	add	r2, r4, #492	; 0x1ec
         32198:	e2822b01 	add	r2, r2, #1024	; 0x400
         3219c:	e3a03000 	mov	r3, #0	; 0x0
         321a0:	e3a01e35 	mov	r1, #848	; 0x350
         321a4:	e2811903 	add	r1, r1, #49152	; 0xc000
         321a8:	e3a00000 	mov	r0, #0	; 0x0
         321ac:	eb6ebfe6 	bl	1be214c <$NewVMHeap>
         321b0:	e3300000 	teq	r0, #0	; 0x0
         321b4:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         321b8:	e59405ec 	ldr	r0, [r4, #1516]	; fField1516
         321bc:	eb6ec3ef 	bl	1be3180 <$SetHeap>
         321c0:	e1a00004 	mov	r0, r4
         321c4:	eb6ded4c 	bl	1bad6fc <TAppWorld::$MainConstructor(void)>
         321c8:	e3300000 	teq	r0, #0	; 0x0
         321cc:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         321d0:	e3a05000 	mov	r5, #0	; 0x0
         321d4:	e1a00004 	mov	r0, r4
         321d8:	eb6ed897 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         321dc:	e1a01000 	mov	r1, r0
         321e0:	e0650185 	rsb	r0, r5, r5, lsl #3
         321e4:	e0800100 	add	r0, r0, r0, lsl #2
         321e8:	e0840180 	add	r0, r4, r0, lsl #3
         321ec:	e2800070 	add	r0, r0, #112	; 0x70
         321f0:	eb6926eb 	bl	1a7bda4 <TATAsyncMsg::$Init(TUPort *)>
         321f4:	e2855001 	add	r5, r5, #1	; 0x1
         321f8:	e3550005 	cmp	r5, #5	; 0x5
         321fc:	3afffff4 	bcc	321d4 <TAppleTalkWorld::MainConstructor(void)+0x58>
         32200:	e3300000 	teq	r0, #0	; 0x0
         32204:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         32208:	e3a00000 	mov	r0, #0	; 0x0
         3220c:	eb68fdb9 	bl	1a718f8 <TAppleTalkStack::$__ct(void)>
         32210:	e3300000 	teq	r0, #0	; 0x0
         32214:	15901000 	ldrne	r1, [r0]
         32218:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         3221c:	1281f014 	addne	pc, r1, #20	; 0x14
         32220:	03a000a8 	moveq	r0, #168	; 0xa8
         32224:	02400b07 	subeq	r0, r0, #7168	; 0x1c00
         32228:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TAppleTalkWorld::MainDestructor(void)
 * Address: 0003222c
 */
TAppleTalkWorld::MainDestructor(void) {
    /*
         3222c:	e1a0c00d 	mov	ip, sp
         32230:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         32234:	e24cb004 	sub	fp, ip, #4	; 0x4
         32238:	e1a04000 	mov	r4, r0
         3223c:	eb6df130 	bl	1bae704 <TAppWorld::$MainDestructor(void)>
         32240:	e59405ec 	ldr	r0, [r4, #1516]	; fField1516
         32244:	e3300000 	teq	r0, #0	; 0x0
         32248:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         3224c:	e59405e8 	ldr	r0, [r4, #1512]	; fField1512
         32250:	eb6ec3ca 	bl	1be3180 <$SetHeap>
         32254:	e5b405ec 	ldr	r0, [r4, #1516]!	; fField1516
         32258:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         3225c:	ea6ebb91 	b	1be10a8 <$DestroyVMHeap>
    */
}

/**
 * Symbol: TAppleTalkWorld::TheMain(void)
 * Address: 00032260
 */
TAppleTalkWorld::TheMain(void) {
    /*
         32260:	ea6df55b 	b	1baf7d4 <TAppWorld::$TheMain(void)>
    */
}

/**
 * Symbol: TAppleTalkWorld::FreeMessage(TATAsyncMsg *)
 * Address: 00032264
 */
TAppleTalkWorld::FreeMessage(TATAsyncMsg *) {
    /*
         32264:	e1a00001 	mov	r0, r1
         32268:	e3a01000 	mov	r1, #0	; 0x0
         3226c:	e5801114 	str	r1, [r0, #276]	; fField276
         32270:	e5c01100 	strb	r1, [r0, #256]	; fField256
         32274:	e2800f41 	add	r0, r0, #260	; 0x104
         32278:	ea6eaae4 	b	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
    */
}

/**
 * Symbol: TAppleTalkWorld::GetMessage(void)
 * Address: 0003227c
 */
TAppleTalkWorld::GetMessage(void) {
    /*
         3227c:	e3a01000 	mov	r1, #0	; 0x0
         32280:	e0612181 	rsb	r2, r1, r1, lsl #3
         32284:	e0822102 	add	r2, r2, r2, lsl #2
         32288:	e0802182 	add	r2, r0, r2, lsl #3
         3228c:	e5d22170 	ldrb	r2, [r2, #368]	; fField368
         32290:	e3320000 	teq	r2, #0	; 0x0
         32294:	1a000006 	bne	322b4 <TAppleTalkWorld::GetMessage(void)+0x38>
         32298:	e3a02001 	mov	r2, #1	; 0x1
         3229c:	e0611181 	rsb	r1, r1, r1, lsl #3
         322a0:	e0811101 	add	r1, r1, r1, lsl #2
         322a4:	e0800181 	add	r0, r0, r1, lsl #3
         322a8:	e5c02170 	strb	r2, [r0, #368]	; fField368
         322ac:	e2800070 	add	r0, r0, #112	; 0x70
         322b0:	e1a0f00e 	mov	pc, lr
         322b4:	e2811001 	add	r1, r1, #1	; 0x1
         322b8:	e3510005 	cmp	r1, #5	; 0x5
         322bc:	3affffef 	bcc	32280 <TAppleTalkWorld::GetMessage(void)+0x4>
         322c0:	e3a00000 	mov	r0, #0	; 0x0
         322c4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TAppleTalkWorld::NewMessage(void)
 * Address: 000322c8
 */
TAppleTalkWorld::NewMessage(void) {
    /*
         322c8:	e1a0c00d 	mov	ip, sp
         322cc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         322d0:	e24cb004 	sub	fp, ip, #4	; 0x4
         322d4:	e1a04000 	mov	r4, r0
         322d8:	eb69228d 	bl	1a7ad14 <TAppleTalkWorld::$GetMessage(void)>
         322dc:	e1b05000 	movs	r5, r0
         322e0:	1a000016 	bne	32340 <TAppleTalkWorld::NewMessage(void)+0x78>
         322e4:	e24ddf4d 	sub	sp, sp, #308	; 0x134
         322e8:	e1a0000d 	mov	r0, sp
         322ec:	eb6ec7c6 	bl	1be420c <TAppWorldState::$__ct(void)>
         322f0:	eb6e85b7 	bl	1bd39d4 <$GetGlobals>
         322f4:	eb6ed850 	bl	1be843c <TAppWorld::$GetMyPort(void)>
         322f8:	e5901000 	ldr	r1, [r0]
         322fc:	e1a0000d 	mov	r0, sp
         32300:	eb6edc6b 	bl	1be94b4 <TAppWorldState::$Init(unsigned long)>
         32304:	e3a07001 	mov	r7, #1	; 0x1
         32308:	e3a06509 	mov	r6, #37748736	; 0x2400000
         3230c:	e5cd7028 	strb	r7, [sp, #40]
         32310:	e58d6024 	str	r6, [sp, #36]
         32314:	eb6e85ae 	bl	1bd39d4 <$GetGlobals>
         32318:	e1a0100d 	mov	r1, sp
         3231c:	eb6ed003 	bl	1be6330 <TAppWorld::$AEventLoop(TAppWorldState *)>
         32320:	e1a00004 	mov	r0, r4
         32324:	eb69227a 	bl	1a7ad14 <TAppleTalkWorld::$GetMessage(void)>
         32328:	e1b05000 	movs	r5, r0
         3232c:	0afffff6 	beq	3230c <TAppleTalkWorld::NewMessage(void)+0x44>
         32330:	e1a0000d 	mov	r0, sp
         32334:	e3a01000 	mov	r1, #0	; 0x0
         32338:	eb6df948 	bl	1bb0860 <TAppWorldState::$__dt(void)>
         3233c:	e28ddf4d 	add	sp, sp, #308	; 0x134
         32340:	e1a00005 	mov	r0, r5
         32344:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

