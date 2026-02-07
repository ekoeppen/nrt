#include "include/TCardAsyncMsg.h"

/**
 * Symbol: TCardAsyncMsg::__ct(void)
 * Address: 0004b0d0
 */
TCardAsyncMsg::TCardAsyncMsg(void) {
    /*
         4b0d0:	e1a0c00d 	mov	ip, sp
         4b0d4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         4b0d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b0dc:	e1b04000 	movs	r4, r0
         4b0e0:	1a000003 	bne	4b0f4 <TCardAsyncMsg::__ct(void)+0x24>
         4b0e4:	e3a000cc 	mov	r0, #204	; 0xcc
         4b0e8:	eb6e0d92 	bl	1bce738 <$__nw(unsigned int)>
         4b0ec:	e1b04000 	movs	r4, r0
         4b0f0:	0a000005 	beq	4b10c <TCardAsyncMsg::__ct(void)+0x3c>
         4b0f4:	e1a00004 	mov	r0, r4
         4b0f8:	eb6e055d 	bl	1bcc674 <TCardMessage::$__ct(void)>
         4b0fc:	e28400bc 	add	r0, r4, #188	; 0xbc
         4b100:	eb6e0969 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         4b104:	e1a00004 	mov	r0, r4
         4b108:	eb6bae97 	bl	1b36b6c <TCardAsyncMsg::$Free(void)>
         4b10c:	e1a00004 	mov	r0, r4
         4b110:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TCardAsyncMsg::Init(void)
 * Address: 0004b114
 */
TCardAsyncMsg::Init(void) {
    /*
         4b114:	e28000bc 	add	r0, r0, #188	; 0xbc
         4b118:	e3a01001 	mov	r1, #1	; 0x1
         4b11c:	ea6e2a5c 	b	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
    */
}

/**
 * Symbol: TCardAsyncMsg::Free(void)
 * Address: 0004b120
 */
TCardAsyncMsg::Free(void) {
    /*
         4b120:	e59010b8 	ldr	r1, [r0, #184]	; fField184
         4b124:	e3c11102 	bic	r1, r1, #-2147483648	; 0x80000000
         4b128:	e58010b8 	str	r1, [r0, #184]	; fField184
         4b12c:	ea6e15b6 	b	1bd080c <TCardMessage::$Clear(void)>
    */
}

/**
 * Symbol: TCardAsyncMsg::SendRPC(TUPort *, TUPort *, unsigned long, TTime *)
 * Address: 0004b130
 */
TCardAsyncMsg::SendRPC(TUPort *, TUPort *, unsigned long, TTime *) {
    /*
         4b130:	e1a0c00d 	mov	ip, sp
         4b134:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         4b138:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b13c:	e1a04000 	mov	r4, r0
         4b140:	e1a06001 	mov	r6, r1
         4b144:	e1a05003 	mov	r5, r3
         4b148:	e59b8004 	ldr	r8, [fp, #4]
         4b14c:	e28000bc 	add	r0, r0, #188	; 0xbc
         4b150:	e1a07000 	mov	r7, r0
         4b154:	e5921000 	ldr	r1, [r2]
         4b158:	eb6e430c 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
         4b15c:	e3300000 	teq	r0, #0	; 0x0
         4b160:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         4b164:	e1a00004 	mov	r0, r4
         4b168:	e3a010b8 	mov	r1, #184	; 0xb8
         4b16c:	e1a02005 	mov	r2, r5
         4b170:	e1a03008 	mov	r3, r8
         4b174:	e3a0c000 	mov	ip, #0	; 0x0
         4b178:	e3a0e000 	mov	lr, #0	; 0x0
         4b17c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         4b180:	e1a0300e 	mov	r3, lr
         4b184:	e3a02001 	mov	r2, #1	; 0x1
         4b188:	e1a0100c 	mov	r1, ip
         4b18c:	e3a000b8 	mov	r0, #184	; 0xb8
         4b190:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         4b194:	e1a03004 	mov	r3, r4
         4b198:	e92d0008 	stmdb	sp!, {r3}
         4b19c:	e1a00006 	mov	r0, r6
         4b1a0:	e3a03000 	mov	r3, #0	; 0x0
         4b1a4:	e4971008 	ldr	r1, [r7], #8
         4b1a8:	e5972000 	ldr	r2, [r7]
         4b1ac:	eb6e3ee6 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         4b1b0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCardAsyncMsg::Send(TUPort *, unsigned long, TTime *)
 * Address: 0004b1b4
 */
TCardAsyncMsg::Send(TUPort *, unsigned long, TTime *) {
    /*
         4b1b4:	e1a0c00d 	mov	ip, sp
         4b1b8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         4b1bc:	e24cb004 	sub	fp, ip, #4	; 0x4
         4b1c0:	e1a04000 	mov	r4, r0
         4b1c4:	e1a07001 	mov	r7, r1
         4b1c8:	e1a06002 	mov	r6, r2
         4b1cc:	e1a05003 	mov	r5, r3
         4b1d0:	e28000bc 	add	r0, r0, #188	; 0xbc
         4b1d4:	e1a08000 	mov	r8, r0
         4b1d8:	e3a01000 	mov	r1, #0	; 0x0
         4b1dc:	eb6e42eb 	bl	1bdbd90 <TUAsyncMessage::$SetCollectorPort(unsigned long)>
         4b1e0:	e3300000 	teq	r0, #0	; 0x0
         4b1e4:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         4b1e8:	e1a02006 	mov	r2, r6
         4b1ec:	e1a03005 	mov	r3, r5
         4b1f0:	e3a0c000 	mov	ip, #0	; 0x0
         4b1f4:	e3a01000 	mov	r1, #0	; 0x0
         4b1f8:	e3a00001 	mov	r0, #1	; 0x1
         4b1fc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         4b200:	e1a0300c 	mov	r3, ip
         4b204:	e3a020b8 	mov	r2, #184	; 0xb8
         4b208:	e92d000c 	stmdb	sp!, {r2, r3}
         4b20c:	e1a03004 	mov	r3, r4
         4b210:	e1a00007 	mov	r0, r7
         4b214:	e3a02000 	mov	r2, #0	; 0x0
         4b218:	e5981000 	ldr	r1, [r8]
         4b21c:	eb6e3ec9 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
         4b220:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

