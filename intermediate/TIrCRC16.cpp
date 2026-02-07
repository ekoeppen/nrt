#include "include/TIrCRC16.h"

/**
 * Symbol: TIrCRC16::Reset(void)
 * Address: 000edd80
 */
TIrCRC16::Reset(void) {
    /*
         edd80:	e3a01801 	mov	r1, #65536	; 0x10000
         edd84:	e2411001 	sub	r1, r1, #1	; 0x1
         edd88:	e5a01004 	str	r1, [r0, #4]!	; fField4
         edd8c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrCRC16::ComputeCRC(unsigned char)
 * Address: 000edd90
 */
TIrCRC16::ComputeCRC(unsigned char) {
    /*
         edd90:	e20120ff 	and	r2, r1, #255	; 0xff
         edd94:	e5901004 	ldr	r1, [r0, #4]	; fField4
         edd98:	e0212002 	eor	r2, r1, r2
         edd9c:	e20220ff 	and	r2, r2, #255	; 0xff
         edda0:	e59f3010 	ldr	r3, [pc, #10]	; eddb8 <TIrCRC16::ComputeCRC(unsigned char)+0x28>
         edda4:	e7932082 	ldr	r2, [r3, r2, lsl #1]	; fField1
         edda8:	e1a02822 	mov	r2, r2, lsr #16
         eddac:	e0221421 	eor	r1, r2, r1, lsr #8
         eddb0:	e5a01004 	str	r1, [r0, #4]!	; fField4
         eddb4:	e1a0f00e 	mov	pc, lr
         eddb8:	00371844 	eoreqs	r1, r7, r4, asr #16
    */
}

/**
 * Symbol: TIrCRC16::Finalize(void)
 * Address: 000eddbc
 */
TIrCRC16::Finalize(void) {
    /*
         eddbc:	e5901004 	ldr	r1, [r0, #4]	; fField4
         eddc0:	e1e01001 	mvn	r1, r1
         eddc4:	e5a01004 	str	r1, [r0, #4]!	; fField4
         eddc8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TIrCRC16::Get(void)
 * Address: 000eddcc
 */
TIrCRC16::Get(void) {
    /*
         eddcc:	e5901004 	ldr	r1, [r0, #4]	; fField4
         eddd0:	e5c01001 	strb	r1, [r0, #1]	; fField1
         eddd4:	e1a01421 	mov	r1, r1, lsr #8
         eddd8:	e5c01000 	strb	r1, [r0]
         edddc:	e1a0f00e 	mov	pc, lr
    */
}

