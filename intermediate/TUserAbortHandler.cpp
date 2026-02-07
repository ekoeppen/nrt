#include "include/TUserAbortHandler.h"

/**
 * Symbol: TUserAbortHandler::__ct(void)
 * Address: 00258834
 */
TUserAbortHandler::TUserAbortHandler(void) {
    /*
        258834:	e1a0c00d 	mov	ip, sp
        258838:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        25883c:	e24cb004 	sub	fp, ip, #4	; 0x4
        258840:	e1b04000 	movs	r4, r0
        258844:	1a000003 	bne	258858 <TUserAbortHandler::__ct(void)+0x24>
        258848:	e3a00014 	mov	r0, #20	; 0x14
        25884c:	eb65d7b9 	bl	1bce738 <$__nw(unsigned int)>
        258850:	e1b04000 	movs	r4, r0
        258854:	0a000003 	beq	258868 <TUserAbortHandler::__ct(void)+0x34>
        258858:	e1a00004 	mov	r0, r4
        25885c:	eb662e69 	bl	1be4208 <TAEventHandler::$__ct(void)>
        258860:	e59f0008 	ldr	r0, [pc, #8]	; 258870 <TUserAbortHandler::__ct(void)+0x3c>
        258864:	e5840000 	str	r0, [r4]
        258868:	e1a00004 	mov	r0, r4
        25886c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        258870:	0001e9b8 	streqh	lr, [r1], -r8
    */
}

/**
 * Symbol: TUserAbortHandler::__dt(void)
 * Address: 00258874
 */
TUserAbortHandler::~TUserAbortHandler(void) {
    /*
        258874:	e1a0c00d 	mov	ip, sp
        258878:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25887c:	e24cb004 	sub	fp, ip, #4	; 0x4
        258880:	e1a04000 	mov	r4, r0
        258884:	e1a05001 	mov	r5, r1
        258888:	e59f0028 	ldr	r0, [pc, #28]	; 2588b8 <TUserAbortHandler::__dt(void)+0x44>
        25888c:	e5840000 	str	r0, [r4]
        258890:	e1a00004 	mov	r0, r4
        258894:	eb611dd5 	bl	1a9fff0 <$RemoveAbortHandler(unsigned long)>
        258898:	e1a00004 	mov	r0, r4
        25889c:	e3a01000 	mov	r1, #0	; 0x0
        2588a0:	eb662e72 	bl	1be4270 <TAEventHandler::$__dt(void)>
        2588a4:	e3150001 	tst	r5, #1	; 0x1
        2588a8:	11a00004 	movne	r0, r4
        2588ac:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2588b0:	1a65d38a 	bne	1bcd6e0 <$__dl(void *)>
        2588b4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
        2588b8:	0001e9b8 	streqh	lr, [r1], -r8
    */
}

/**
 * Symbol: TUserAbortHandler::Init(unsigned long, unsigned long)
 * Address: 002588bc
 */
TUserAbortHandler::Init(unsigned long, unsigned long) {
    /*
        2588bc:	e1a0c00d 	mov	ip, sp
        2588c0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2588c4:	e24cb004 	sub	fp, ip, #4	; 0x4
        2588c8:	e1a05000 	mov	r5, r0
        2588cc:	e1a04001 	mov	r4, r1
        2588d0:	eb6642f6 	bl	1be94b0 <TAEventHandler::$Init(unsigned long, unsigned long)>
        2588d4:	e3300000 	teq	r0, #0	; 0x0
        2588d8:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        2588dc:	e1a01004 	mov	r1, r4
        2588e0:	e1a00005 	mov	r0, r5
        2588e4:	e3a020c9 	mov	r2, #201	; 0xc9
        2588e8:	e2422b0a 	sub	r2, r2, #10240	; 0x2800
        2588ec:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        2588f0:	ea610906 	b	1a9ad10 <$InstallAbortHandler__FUlT1l>
    */
}

/**
 * Symbol: TUserAbortHandler::AETestEvent(TAEvent *)
 * Address: 002588f4
 */
TUserAbortHandler::AETestEvent(TAEvent *) {
    /*
        2588f4:	e591100c 	ldr	r1, [r1, #12]
        2588f8:	e1310000 	teq	r1, r0
        2588fc:	13a00000 	movne	r0, #0	; 0x0
        258900:	03a00001 	moveq	r0, #1	; 0x1
        258904:	e20000ff 	and	r0, r0, #255	; 0xff
        258908:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TUserAbortHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *)
 * Address: 0025890c
 */
TUserAbortHandler::AEHandlerProc(TUMsgToken *, unsigned long *, TAEvent *) {
    /*
        25890c:	e1a01003 	mov	r1, r3
        258910:	e5903000 	ldr	r3, [r0]
        258914:	e283f018 	add	pc, r3, #24	; 0x18
    */
}

