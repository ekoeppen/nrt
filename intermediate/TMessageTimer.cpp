#include "include/TMessageTimer.h"

/**
 * Symbol: TMessageTimer::__ct(void)
 * Address: 0011f134
 */
TMessageTimer::TMessageTimer(void) {
    /*
        11f134:	e1a0c00d 	mov	ip, sp
        11f138:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        11f13c:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f140:	e1b04000 	movs	r4, r0
        11f144:	1a000003 	bne	11f158 <TMessageTimer::__ct(void)+0x24>
        11f148:	e3a0003c 	mov	r0, #60	; 0x3c
        11f14c:	eb6abd79 	bl	1bce738 <$__nw(unsigned int)>
        11f150:	e1b04000 	movs	r4, r0
        11f154:	0a000008 	beq	11f17c <TMessageTimer::__ct(void)+0x48>
        11f158:	e1a00004 	mov	r0, r4
        11f15c:	eb6ab952 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
        11f160:	e2840018 	add	r0, r4, #24	; 0x18
        11f164:	eb6b1433 	bl	1be4238 <TAEvent::$__ct(void)>
        11f168:	e3a00064 	mov	r0, #100	; 0x64
        11f16c:	e5840028 	str	r0, [r4, #40]	; fField40
        11f170:	e1a00004 	mov	r0, r4
        11f174:	e3a01001 	mov	r1, #1	; 0x1
        11f178:	eb6ada45 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
        11f17c:	e1a00004 	mov	r0, r4
        11f180:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TMessageTimer::Init(TUPort *, unsigned long, unsigned long, TimeUnits, TimerType, unsigned long)
 * Address: 0011f184
 */
TMessageTimer::Init(TUPort *, unsigned long, unsigned long, TimeUnits, TimerType, unsigned long) {
    /*
        11f184:	e92d4010 	stmdb	sp!, {r4, lr}
        11f188:	e28de008 	add	lr, sp, #8	; 0x8
        11f18c:	e89e4010 	ldmia	lr, {r4, lr}
        11f190:	e59dc010 	ldr	ip, [sp, #16]	; fField16
        11f194:	e5801038 	str	r1, [r0, #56]	; fField56
        11f198:	e580201c 	str	r2, [r0, #28]	; fField28
        11f19c:	e2800010 	add	r0, r0, #16	; 0x10
        11f1a0:	e8800018 	stmia	r0, {r3, r4}
        11f1a4:	e580c024 	str	ip, [r0, #36]	; fField36
        11f1a8:	e580e01c 	str	lr, [r0, #28]	; fField28
        11f1ac:	e2400010 	sub	r0, r0, #16	; 0x10
        11f1b0:	e5901000 	ldr	r1, [r0]
        11f1b4:	e5a01030 	str	r1, [r0, #48]!	; fField48
        11f1b8:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TMessageTimer::Start(void)
 * Address: 0011f1bc
 */
TMessageTimer::Start(void) {
    /*
        11f1bc:	e1a0c00d 	mov	ip, sp
        11f1c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        11f1c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f1c8:	e1a04000 	mov	r4, r0
        11f1cc:	e24dd020 	sub	sp, sp, #32	; 0x20
        11f1d0:	e1a0000d 	mov	r0, sp
        11f1d4:	eb6ad1ff 	bl	1bd39d8 <$GetGlobalTime>
        11f1d8:	e28d1018 	add	r1, sp, #24	; 0x18
        11f1dc:	e89d5000 	ldmia	sp, {ip, lr}
        11f1e0:	e8815000 	stmia	r1, {ip, lr}
        11f1e4:	e28d0008 	add	r0, sp, #8	; 0x8
        11f1e8:	e2842010 	add	r2, r4, #16	; 0x10
        11f1ec:	e8920006 	ldmia	r2, {r1, r2}
        11f1f0:	eb6ab934 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
        11f1f4:	e28d0010 	add	r0, sp, #16	; 0x10
        11f1f8:	e28d1008 	add	r1, sp, #8	; 0x8
        11f1fc:	e8915000 	ldmia	r1, {ip, lr}
        11f200:	e8805000 	stmia	r0, {ip, lr}
        11f204:	e24dd008 	sub	sp, sp, #8	; 0x8
        11f208:	e28d1018 	add	r1, sp, #24	; 0x18
        11f20c:	e8915000 	ldmia	r1, {ip, lr}
        11f210:	e88d5000 	stmia	sp, {ip, lr}
        11f214:	e1a0100d 	mov	r1, sp
        11f218:	e28d0020 	add	r0, sp, #32	; 0x20
        11f21c:	eb6b0798 	bl	1be1084 <$CompAdd>
        11f220:	e28d0018 	add	r0, sp, #24	; 0x18
        11f224:	e8bd5000 	ldmia	sp!, {ip, lr}
        11f228:	e8805000 	stmia	r0, {ip, lr}
        11f22c:	e3a00064 	mov	r0, #100	; 0x64
        11f230:	e5840028 	str	r0, [r4, #40]	; fField40
        11f234:	e594c038 	ldr	ip, [r4, #56]	; fField56
        11f238:	e2845018 	add	r5, r4, #24	; 0x18
        11f23c:	e3a02000 	mov	r2, #0	; 0x0
        11f240:	e28d3010 	add	r3, sp, #16	; 0x10
        11f244:	e3a0e000 	mov	lr, #0	; 0x0
        11f248:	e3a01000 	mov	r1, #0	; 0x0
        11f24c:	e3a00001 	mov	r0, #1	; 0x1
        11f250:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
        11f254:	e1a0300e 	mov	r3, lr
        11f258:	e3a02020 	mov	r2, #32	; 0x20
        11f25c:	e92d000c 	stmdb	sp!, {r2, r3}
        11f260:	e1a03005 	mov	r3, r5
        11f264:	e1a0000c 	mov	r0, ip
        11f268:	e3a02000 	mov	r2, #0	; 0x0
        11f26c:	e5941000 	ldr	r1, [r4]
        11f270:	eb6aeeb4 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
        11f274:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TMessageTimer::Stop(void)
 * Address: 0011f278
 */
TMessageTimer::Stop(void) {
    /*
        11f278:	e1a0c00d 	mov	ip, sp
        11f27c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        11f280:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f284:	eb6abd30 	bl	1bce74c <TUAsyncMessage::$Abort(void)>
        11f288:	e280cc27 	add	ip, r0, #9984	; 0x2700
        11f28c:	e37c0037 	cmn	ip, #55	; 0x37
        11f290:	03a00000 	moveq	r0, #0	; 0x0
        11f294:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TMessageTimer::Reset(void)
 * Address: 0011f298
 */
TMessageTimer::Reset(void) {
    /*
        11f298:	e2802010 	add	r2, r0, #16	; 0x10
        11f29c:	e8920006 	ldmia	r2, {r1, r2}
        11f2a0:	ea657f27 	b	1a7ef44 <TMessageTimer::$Reset(unsigned long, TimeUnits)>
    */
}

/**
 * Symbol: TMessageTimer::Reset(unsigned long, TimeUnits)
 * Address: 0011f2a4
 */
TMessageTimer::Reset(unsigned long, TimeUnits) {
    /*
        11f2a4:	e1a0c00d 	mov	ip, sp
        11f2a8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        11f2ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        11f2b0:	e1a04000 	mov	r4, r0
        11f2b4:	e1a06001 	mov	r6, r1
        11f2b8:	e1a05002 	mov	r5, r2
        11f2bc:	eb658352 	bl	1a8000c <TMessageTimer::$Stop(void)>
        11f2c0:	e5845014 	str	r5, [r4, #20]	; fField20
        11f2c4:	e5846010 	str	r6, [r4, #16]	; fField16
        11f2c8:	e1a00004 	mov	r0, r4
        11f2cc:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        11f2d0:	ea658348 	b	1a7fff8 <TMessageTimer::$Start(void)>
    */
}

