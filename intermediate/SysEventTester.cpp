#include "include/SysEventTester.h"

/**
 * Symbol: SysEventTester::__ct(unsigned long)
 * Address: 00130f90
 */
SysEventTester::SysEventTester(unsigned long) {
    /*
        130f90:	e1a0c00d 	mov	ip, sp
        130f94:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        130f98:	e24cb004 	sub	fp, ip, #4	; 0x4
        130f9c:	e1a04001 	mov	r4, r1
        130fa0:	e3300000 	teq	r0, #0	; 0x0
        130fa4:	1a000003 	bne	130fb8 <SysEventTester::__ct(unsigned long)+0x28>
        130fa8:	e3a00008 	mov	r0, #8	; 0x8
        130fac:	eb6a75e1 	bl	1bce738 <$__nw(unsigned int)>
        130fb0:	e3300000 	teq	r0, #0	; 0x0
        130fb4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
        130fb8:	e59f1004 	ldr	r1, [pc, #4]	; 130fc4 <SysEventTester::__ct(unsigned long)+0x34>	; fField4
        130fbc:	e8800012 	stmia	r0, {r1, r4}
        130fc0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
        130fc4:	0001d428 	andeq	sp, r1, r8, lsr #8
    */
}

/**
 * Symbol: SysEventTester::TestItem( const(void const *))
 * Address: 00130fc8
 */
SysEventTester::TestItem( const(void const *)) {
    /*
        130fc8:	e5900004 	ldr	r0, [r0, #4]	; fField4
        130fcc:	e5911000 	ldr	r1, [r1]
        130fd0:	e1300001 	teq	r0, r1
        130fd4:	13e00000 	mvnne	r0, #0	; 0x0
        130fd8:	03a00000 	moveq	r0, #0	; 0x0
        130fdc:	e1a0f00e 	mov	pc, lr
    */
}

