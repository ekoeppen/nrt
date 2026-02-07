#include "include/TXNewtPageFrames.h"

/**
 * Symbol: TXNewtPageFrames::Draw( const(long))
 * Address: 0024db0c
 */
TXNewtPageFrames::Draw( const(long)) {
    /*
        24db0c:	e3310000 	teq	r1, #0	; 0x0
        24db10:	01a0f00e 	moveq	pc, lr
        24db14:	e1a0c00d 	mov	ip, sp
        24db18:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        24db1c:	e24cb004 	sub	fp, ip, #4	; 0x4
        24db20:	e1a05000 	mov	r5, r0
        24db24:	e1a04001 	mov	r4, r1
        24db28:	ebffff34 	bl	24d800 <TXView::SetStore(RefVar const &)+0x74>
        24db2c:	e3300000 	teq	r0, #0	; 0x0
        24db30:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
        24db34:	e24dd008 	sub	sp, sp, #8	; 0x8
        24db38:	e1a0200d 	mov	r2, sp
        24db3c:	e1a01004 	mov	r1, r4
        24db40:	e1a00005 	mov	r0, r5
        24db44:	eb650712 	bl	1b8f794 <TXFrames::$GetFrameBounds( const(long, Rect *))>
        24db48:	e24dd010 	sub	sp, sp, #16	; 0x10
        24db4c:	e1a0000d 	mov	r0, sp
        24db50:	eb64071e 	bl	1b4f7d0 <$GetPenState(PenState *)>
        24db54:	eb641372 	bl	1b52924 <$PenNormal(void)>
        24db58:	e3a00002 	mov	r0, #2	; 0x2
        24db5c:	eb64071f 	bl	1b4f7e0 <$GetStdPattern(unsigned char)>
        24db60:	eb6417a2 	bl	1b539f0 <$SetFgPattern(PixelMap **)>
        24db64:	e3a01001 	mov	r1, #1	; 0x1
        24db68:	e3a00001 	mov	r0, #1	; 0x1
        24db6c:	eb64136d 	bl	1b52928 <$PenSize__FlT1>
        24db70:	e59d0012 	ldr	r0, [sp, #18]
        24db74:	e1a00840 	mov	r0, r0, asr #16
        24db78:	e59d1010 	ldr	r1, [sp, #16]
        24db7c:	e1a01841 	mov	r1, r1, asr #16
        24db80:	eb640f4e 	bl	1b518c0 <$MoveTo__FlT1>
        24db84:	e59d1016 	ldr	r1, [sp, #22]
        24db88:	e1a01841 	mov	r1, r1, asr #16
        24db8c:	e59d0012 	ldr	r0, [sp, #18]
        24db90:	e0410840 	sub	r0, r1, r0, asr #16
        24db94:	e3a01000 	mov	r1, #0	; 0x0
        24db98:	eb640f38 	bl	1b51880 <$Line__FlT1>
        24db9c:	e1a0000d 	mov	r0, sp
        24dba0:	eb641794 	bl	1b539f8 <$SetPenState(PenState *)>
        24dba4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

