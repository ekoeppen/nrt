#include "include/TExternalNewtEventHandler.h"

/**
 * Symbol: New__25TExternalNewtEventHandlerSFPc
 * Address: 00385b20
 */
void TExternalNewtEventHandler::New() {
    /*
        385b20:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        385b24:	e1a01000 	mov	r1, r0
        385b28:	ebfffff3 	bl	385afc <ClassInfo__20PSerialOutTranslatorSFv+0x74>
        385b2c:	eb61271c 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        385b30:	e1100000 	tst	r0, r0
        385b34:	e28dd004 	add	sp, sp, #4	; 0x4
        385b38:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        385b3c:	01a0f00e 	moveq	pc, lr
        385b40:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385b44:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385b48:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TExternalNewtEventHandler::Delete(void)
 * Address: 00385b4c
 */
TExternalNewtEventHandler::Delete(void) {
    /*
        385b4c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385b50:	e92d4001 	stmdb	sp!, {r0, lr}
        385b54:	e28fe004 	add	lr, pc, #4	; 0x4
        385b58:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385b5c:	e28cf00c 	add	pc, ip, #12	; 0xc
        385b60:	e8bd4001 	ldmia	sp!, {r0, lr}
        385b64:	ea61337c 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TExternalNewtEventHandler::HandleEvent(TExternalNewtEvent *)
 * Address: 00385b68
 */
TExternalNewtEventHandler::HandleEvent(TExternalNewtEvent *) {
    /*
        385b68:	e5900004 	ldr	r0, [r0, #4]	; fField4
        385b6c:	e590c008 	ldr	ip, [r0, #8]	; fField8
        385b70:	e28cf010 	add	pc, ip, #16	; 0x10
        385b74:	e1a0000f 	mov	r0, pc
        385b78:	e1a0f00e 	mov	pc, lr
        385b7c:	54546162 	ldrplb	r6, [r4], -#354
        385b80:	6c657444 	stcvsl	4, cr7, [r5], -#272
        385b84:	72697665 	rsbvc	r7, r9, #105906176	; 0x6500000
        385b88:	72000000 	andvc	r0, r0, #0	; 0x0
    */
}

