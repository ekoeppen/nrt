#include "include/TCMSystemEventHandler.h"

/**
 * Symbol: TCMSystemEventHandler::PowerOn(TAEvent *)
 * Address: 0006ca9c
 */
TCMSystemEventHandler::PowerOn(TAEvent *) {
    /*
         6ca9c:	e1a0c00d 	mov	ip, sp
         6caa0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6caa4:	e24cb004 	sub	fp, ip, #4	; 0x4
         6caa8:	e1a04000 	mov	r4, r0
         6caac:	e1a02001 	mov	r2, r1
         6cab0:	e3a0100c 	mov	r1, #12	; 0xc
         6cab4:	eb6e0301 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
         6cab8:	e1a00004 	mov	r0, r4
         6cabc:	eb6dfee3 	bl	1bec650 <TAEventHandler::$ReplyImmed(void)>
         6cac0:	eb6d9bc3 	bl	1bd39d4 <$GetGlobals>
         6cac4:	e3a01030 	mov	r1, #48	; 0x30
         6cac8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6cacc:	ea667274 	b	1a094a4 <TCMWorld::$SCPCheck(unsigned long)>
    */
}

/**
 * Symbol: TCMSystemEventHandler::PowerOff(TAEvent *)
 * Address: 0006cad0
 */
TCMSystemEventHandler::PowerOff(TAEvent *) {
    /*
         6cad0:	e1a0c00d 	mov	ip, sp
         6cad4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6cad8:	e24cb004 	sub	fp, ip, #4	; 0x4
         6cadc:	e1a04000 	mov	r4, r0
         6cae0:	e1a02001 	mov	r2, r1
         6cae4:	e3a0100c 	mov	r1, #12	; 0xc
         6cae8:	eb6e02f4 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
         6caec:	e1a00004 	mov	r0, r4
         6caf0:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6caf4:	ea6dfed5 	b	1bec650 <TAEventHandler::$ReplyImmed(void)>
    */
}

/**
 * Symbol: TCMSystemEventHandler::AppAlive(TAEvent *)
 * Address: 0006caf8
 */
TCMSystemEventHandler::AppAlive(TAEvent *) {
    /*
         6caf8:	e1a0c00d 	mov	ip, sp
         6cafc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         6cb00:	e24cb004 	sub	fp, ip, #4	; 0x4
         6cb04:	e1a04000 	mov	r4, r0
         6cb08:	e1a02001 	mov	r2, r1
         6cb0c:	e3a0100c 	mov	r1, #12	; 0xc
         6cb10:	eb6e02ea 	bl	1bed6c0 <TAEventHandler::$SetReply(unsigned long, TAEvent *)>
         6cb14:	e1a00004 	mov	r0, r4
         6cb18:	eb6dfecc 	bl	1bec650 <TAEventHandler::$ReplyImmed(void)>
         6cb1c:	eb6d9bac 	bl	1bd39d4 <$GetGlobals>
         6cb20:	e3a01031 	mov	r1, #49	; 0x31
         6cb24:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         6cb28:	ea66725d 	b	1a094a4 <TCMWorld::$SCPCheck(unsigned long)>
    */
}

