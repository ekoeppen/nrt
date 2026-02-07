#include "include/DataPtr.h"

/**
 * Symbol: DataPtr::operator=(DataPtr const &)
 * Address: 0031c5a8
 */
DataPtr::operator=(DataPtr const &) {
    /*
        31c5a8:	e1a0c00d 	mov	ip, sp
        31c5ac:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31c5b0:	e24cb004 	sub	fp, ip, #4	; 0x4
        31c5b4:	e1a04000 	mov	r4, r0
        31c5b8:	e1a05001 	mov	r5, r1
        31c5bc:	e5900000 	ldr	r0, [r0]
        31c5c0:	e5900000 	ldr	r0, [r0]
        31c5c4:	e3300002 	teq	r0, #2	; 0x2
        31c5c8:	1b62afa8 	blne	1bc8470 <$UnlockRef(long)>
        31c5cc:	e5950000 	ldr	r0, [r5]
        31c5d0:	e5900000 	ldr	r0, [r0]
        31c5d4:	e5941000 	ldr	r1, [r4]
        31c5d8:	e5810000 	str	r0, [r1]
        31c5dc:	e3300002 	teq	r0, #2	; 0x2
        31c5e0:	1b62a333 	blne	1bc52b4 <$LockRef(long)>
        31c5e4:	e1a00004 	mov	r0, r4
        31c5e8:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: DataPtr::operator=(long)
 * Address: 0031c71c
 */
DataPtr::operator=(long) {
    /*
        31c71c:	e1a0c00d 	mov	ip, sp
        31c720:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        31c724:	e24cb004 	sub	fp, ip, #4	; 0x4
        31c728:	e1a04000 	mov	r4, r0
        31c72c:	e1a05001 	mov	r5, r1
        31c730:	e5900000 	ldr	r0, [r0]
        31c734:	e5900000 	ldr	r0, [r0]
        31c738:	e3300002 	teq	r0, #2	; 0x2
        31c73c:	1b62af4b 	blne	1bc8470 <$UnlockRef(long)>
        31c740:	e5941000 	ldr	r1, [r4]
        31c744:	e5815000 	str	r5, [r1]
        31c748:	e3350002 	teq	r5, #2	; 0x2
        31c74c:	11a00005 	movne	r0, r5
        31c750:	1b62a2d7 	blne	1bc52b4 <$LockRef(long)>
        31c754:	e1a00004 	mov	r0, r4
        31c758:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: DataPtr::operator char *( const(void))
 * Address: 0031c88c
 */
DataPtr::operator char *( const(void)) {
    /*
        31c88c:	e1a0c00d 	mov	ip, sp
        31c890:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        31c894:	e24cb004 	sub	fp, ip, #4	; 0x4
        31c898:	e1a04000 	mov	r4, r0
        31c89c:	e5900000 	ldr	r0, [r0]
        31c8a0:	e5900000 	ldr	r0, [r0]
        31c8a4:	e3300002 	teq	r0, #2	; 0x2
        31c8a8:	1a000004 	bne	31c8c0 <DataPtr::operator char *( const(void))+0x34>
        31c8ac:	e59f001c 	ldr	r0, [pc, #1c]	; 31c8d0 <DataPtr::operator char *( const(void))+0x44>
        31c8b0:	e5900000 	ldr	r0, [r0]
        31c8b4:	e3a02000 	mov	r2, #0	; 0x0
        31c8b8:	e59f1014 	ldr	r1, [pc, #14]	; 31c8d4 <DataPtr::operator char *( const(void))+0x48>
        31c8bc:	eb631a36 	bl	1be319c <$Throw>
        31c8c0:	e5940000 	ldr	r0, [r4]
        31c8c4:	e5900000 	ldr	r0, [r0]
        31c8c8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
        31c8cc:	ea629622 	b	1bc215c <$BinaryData(long)>
        31c8d0:	00371308 	eoreqs	r1, r7, r8, lsl #6
        31c8d4:	ffff43ab 	swinv	0x00ff43ab
    */
}

