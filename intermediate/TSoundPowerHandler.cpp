#include "include/TSoundPowerHandler.h"

/**
 * Symbol: TSoundPowerHandler::__ct(void)
 * Address: 001e996c
 */
TSoundPowerHandler::TSoundPowerHandler(void) {
    /*
        1e996c:	e1a0c00d 	mov	ip, sp
        1e9970:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        1e9974:	e24cb004 	sub	fp, ip, #4	; 0x4
        1e9978:	e1b04000 	movs	r4, r0
        1e997c:	1a000003 	bne	1e9990 <TSoundPowerHandler::__ct(void)+0x24>
        1e9980:	e3a0001c 	mov	r0, #28	; 0x1c
        1e9984:	eb67936b 	bl	1bce738 <$__nw(unsigned int)>
        1e9988:	e1b04000 	movs	r4, r0
        1e998c:	0a000005 	beq	1e99a8 <TSoundPowerHandler::__ct(void)+0x3c>
        1e9990:	e1a00004 	mov	r0, r4
        1e9994:	eb67ea22 	bl	1be4224 <TSystemEventHandler::$__ct(void)>
        1e9998:	e59f0010 	ldr	r0, [pc, #10]	; 1e99b0 <TSoundPowerHandler::__ct(void)+0x44>
        1e999c:	e5840000 	str	r0, [r4]
        1e99a0:	e3a00000 	mov	r0, #0	; 0x0
        1e99a4:	e5840018 	str	r0, [r4, #24]	; fField24
        1e99a8:	e1a00004 	mov	r0, r4
        1e99ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        1e99b0:	0001eb64 	andeq	lr, r1, r4, ror #22
    */
}

/**
 * Symbol: TSoundPowerHandler::Init(TSoundServer *)
 * Address: 001e99b4
 */
TSoundPowerHandler::Init(TSoundServer *) {
    /*
        1e99b4:	e3a02000 	mov	r2, #0	; 0x0
        1e99b8:	e5801018 	str	r1, [r0, #24]	; fField24
        1e99bc:	e59f1000 	ldr	r1, [pc, #0]	; 1e99c4 <TSoundPowerHandler::Init(TSoundServer *)+0x10>
        1e99c0:	ea67febe 	b	1be94c0 <TSystemEventHandler::$Init(unsigned long, unsigned long)>
        1e99c4:	70776f66 	rsbvcs	r6, r7, r6, ror #30
    */
}

/**
 * Symbol: TSoundPowerHandler::PowerOff(TAEvent *)
 * Address: 001e99c8
 */
TSoundPowerHandler::PowerOff(TAEvent *) {
    /*
        1e99c8:	e5900018 	ldr	r0, [r0, #24]	; fField24
        1e99cc:	ea6644e9 	b	1b7ad78 <TSoundServer::$StopAll(void)>
    */
}

