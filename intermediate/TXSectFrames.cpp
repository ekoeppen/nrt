#include "include/TXSectFrames.h"

/**
 * Symbol: TXSectFrames::GetNextFrame(void)
 * Address: 00239e0c
 */
TXSectFrames::GetNextFrame(void) {
    /*
        239e0c:	e5901020 	ldr	r1, [r0, #32]	; fField32
        239e10:	e3710002 	cmn	r1, #2	; 0x2
        239e14:	0a00001d 	beq	239e90 <TXSectFrames::GetNextFrame(void)+0x84>
        239e18:	e5902014 	ldr	r2, [r0, #20]	; fField20
        239e1c:	e3520000 	cmp	r2, #0	; 0x0
        239e20:	aa000018 	bge	239e88 <TXSectFrames::GetNextFrame(void)+0x7c>
        239e24:	e3510000 	cmp	r1, #0	; 0x0
        239e28:	b5901000 	ldrlt	r1, [r0]
        239e2c:	ba00000e 	blt	239e6c <TXSectFrames::GetNextFrame(void)+0x60>
        239e30:	e5902010 	ldr	r2, [r0, #16]	; fField16
        239e34:	e2823001 	add	r3, r2, #1	; 0x1
        239e38:	e5803010 	str	r3, [r0, #16]	; fField16
        239e3c:	e5902004 	ldr	r2, [r0, #4]	; fField4
        239e40:	e1330002 	teq	r3, r2
        239e44:	1a000007 	bne	239e68 <TXSectFrames::GetNextFrame(void)+0x5c>
        239e48:	e590300c 	ldr	r3, [r0, #12]	; fField12
        239e4c:	e0432002 	sub	r2, r3, r2
        239e50:	e0821001 	add	r1, r2, r1
        239e54:	e2811001 	add	r1, r1, #1	; 0x1
        239e58:	e5801020 	str	r1, [r0, #32]	; fField32
        239e5c:	e3a01000 	mov	r1, #0	; 0x0
        239e60:	e5801010 	str	r1, [r0, #16]	; fField16
        239e64:	ea000001 	b	239e70 <TXSectFrames::GetNextFrame(void)+0x64>
        239e68:	e2811001 	add	r1, r1, #1	; 0x1
        239e6c:	e5801020 	str	r1, [r0, #32]	; fField32
        239e70:	e5901020 	ldr	r1, [r0, #32]	; fField32
        239e74:	e5900008 	ldr	r0, [r0, #8]	; fField8
        239e78:	e1510000 	cmp	r1, r0
        239e7c:	d1a00001 	movle	r0, r1
        239e80:	d1a0f00e 	movle	pc, lr
        239e84:	ea000001 	b	239e90 <TXSectFrames::GetNextFrame(void)+0x84>
        239e88:	e1510002 	cmp	r1, r2
        239e8c:	ba000001 	blt	239e98 <TXSectFrames::GetNextFrame(void)+0x8c>
        239e90:	e3e00000 	mvn	r0, #0	; 0x0
        239e94:	e1a0f00e 	mov	pc, lr
        239e98:	e2812001 	add	r2, r1, #1	; 0x1
        239e9c:	e5802020 	str	r2, [r0, #32]	; fField32
        239ea0:	e0800101 	add	r0, r0, r1, lsl #2
        239ea4:	e5900018 	ldr	r0, [r0, #24]	; fField24
        239ea8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TXSectFrames::SetUniform(long, long, long, long)
 * Address: 00239eac
 */
TXSectFrames::SetUniform(long, long, long, long) {
    /*
        239eac:	e59dc000 	ldr	ip, [sp]
        239eb0:	e880100e 	stmia	r0, {r1, r2, r3, ip}
        239eb4:	e3a01000 	mov	r1, #0	; 0x0
        239eb8:	e5801010 	str	r1, [r0, #16]	; fField16
        239ebc:	e3e01000 	mvn	r1, #0	; 0x0
        239ec0:	e5801020 	str	r1, [r0, #32]	; fField32
        239ec4:	e5a01014 	str	r1, [r0, #20]!	; fField20
        239ec8:	e1a0f00e 	mov	pc, lr
    */
}

