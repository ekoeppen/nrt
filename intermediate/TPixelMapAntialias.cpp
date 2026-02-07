#include "include/TPixelMapAntialias.h"

/**
 * Symbol: TPixelMapAntialias::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **)
 * Address: 00388b34
 */
TPixelMapAntialias::GrayShrink(PixelMap *, PixelMap *, Rect *, Rect *, Region **, Region **, Region **) {
    /*
        388b34:	e5900004 	ldr	r0, [r0, #4]	; fField4
        388b38:	e590c008 	ldr	ip, [r0, #8]	; fField8
        388b3c:	e28cf008 	add	pc, ip, #8	; 0x8
        388b40:	00000000 	andeq	r0, r0, r0
        388b44:	00000048 	andeq	r0, r0, r8, asr #32
        388b48:	00000050 	andeq	r0, r0, r0, asr r0
        388b4c:	0000005f 	andeq	r0, r0, pc, asr r0
        388b50:	0000005c 	andeq	r0, r0, ip, asr r0
        388b54:	00000064 	andeq	r0, r0, r4, rrx
        388b58:	ea5f4873 	b	1b5ad2c <$Sizeof__11TGrayShrinkSFv>
        388b64:	e1a0f00e 	mov	pc, lr
        388b68:	e1a0f00e 	mov	pc, lr
        388b6c:	00010000 	andeq	r0, r1, r0
        388b78:	ea000001 	b	388b84 <ClassInfo__11TGrayShrinkSFv+0x8>
    */
}

