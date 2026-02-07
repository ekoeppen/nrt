#include "include/TProtocolHandler.h"

/**
 * Symbol: TProtocolHandler::__ct(void)
 * Address: 000fe10c
 */
TProtocolHandler::TProtocolHandler(void) {
    /*
         fe10c:	e3300000 	teq	r0, #0	; 0x0
         fe110:	03a00010 	moveq	r0, #16	; 0x10
         fe114:	0a6b4187 	beq	1bce738 <$__nw(unsigned int)>
         fe118:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TProtocolHandler::__dt(void)
 * Address: 000fe254
 */
TProtocolHandler::~TProtocolHandler(void) {
    /*
         fe254:	e3110001 	tst	r1, #1	; 0x1
         fe258:	1a6b3d20 	bne	1bcd6e0 <$__dl(void *)>
         fe25c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TProtocolHandler::Init(unsigned char)
 * Address: 000fe260
 */
TProtocolHandler::Init(unsigned char) {
    /*
         fe260:	e5c01000 	strb	r1, [r0]
         fe264:	e3a01000 	mov	r1, #0	; 0x0
         fe268:	e5801004 	str	r1, [r0, #4]	; fField4
         fe26c:	e5801008 	str	r1, [r0, #8]	; fField8
         fe270:	e5a0100c 	str	r1, [r0, #12]!	; fField12
         fe274:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TProtocolHandler::Read(TUMsgToken *, TPacketMessage *)
 * Address: 000fe278
 */
TProtocolHandler::Read(TUMsgToken *, TPacketMessage *) {
    /*
         fe278:	e1a0c00d 	mov	ip, sp
         fe27c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         fe280:	e24cb004 	sub	fp, ip, #4	; 0x4
         fe284:	e1a05001 	mov	r5, r1
         fe288:	e1a04002 	mov	r4, r2
         fe28c:	e3a01000 	mov	r1, #0	; 0x0
         fe290:	e5902004 	ldr	r2, [r0, #4]	; fField4
         fe294:	e3320000 	teq	r2, #0	; 0x0
         fe298:	0a000011 	beq	fe2e4 <TProtocolHandler::Read(TUMsgToken *, TPacketMessage *)+0x6c>
         fe29c:	e5842004 	str	r2, [r4, #4]	; fField4
         fe2a0:	e590000c 	ldr	r0, [r0, #12]	; fField12
         fe2a4:	e3300000 	teq	r0, #0	; 0x0
         fe2a8:	1a00000f 	bne	fe2ec <TProtocolHandler::Read(TUMsgToken *, TPacketMessage *)+0x74>
         fe2ac:	e3a00030 	mov	r0, #48	; 0x30
         fe2b0:	e52d0004 	str	r0, [sp, -#4]!	; fField4
         fe2b4:	eb6b55c6 	bl	1bd39d4 <$GetGlobals>
         fe2b8:	e1a03004 	mov	r3, r4
         fe2bc:	e92d0008 	stmdb	sp!, {r3}
         fe2c0:	e28d3004 	add	r3, sp, #4	; 0x4
         fe2c4:	e1a02005 	mov	r2, r5
         fe2c8:	e3a01000 	mov	r1, #0	; 0x0
         fe2cc:	e590c000 	ldr	ip, [r0]
         fe2d0:	e1a0e00f 	mov	lr, pc
         fe2d4:	e28cf050 	add	pc, ip, #80	; 0x50
         fe2d8:	e5b41008 	ldr	r1, [r4, #8]!	; fField8
         fe2dc:	e28dd008 	add	sp, sp, #8	; 0x8
         fe2e0:	ea000001 	b	fe2ec <TProtocolHandler::Read(TUMsgToken *, TPacketMessage *)+0x74>
         fe2e4:	e3a010ba 	mov	r1, #186	; 0xba
         fe2e8:	e2411a03 	sub	r1, r1, #12288	; 0x3000
         fe2ec:	e1a00001 	mov	r0, r1
         fe2f0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

