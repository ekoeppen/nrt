#include "include/TCompressor.h"

/**
 * Symbol: TCompressor::Compress(char **)
 * Address: 00071104
 */
TCompressor::Compress(char **) {
    /*
         71104:	e1a0c00d 	mov	ip, sp
         71108:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         7110c:	e24cb004 	sub	fp, ip, #4	; 0x4
         71110:	e1a05000 	mov	r5, r0
         71114:	e1a04001 	mov	r4, r1
         71118:	e24dd004 	sub	sp, sp, #4	; 0x4
         7111c:	e1a00001 	mov	r0, r1
         71120:	eb6dbff0 	bl	1be10e8 <$GetHandleSize>
         71124:	e1a08000 	mov	r8, r0
         71128:	e1a01004 	mov	r1, r4
         7112c:	e1a00005 	mov	r0, r5
         71130:	eb6dd8ad 	bl	1be73ec <TCompressor::$EstimatedCompressedSize(char **)>
         71134:	e58d0000 	str	r0, [sp]
         71138:	eb6d968a 	bl	1bd6b68 <$malloc>
         7113c:	e1b06000 	movs	r6, r0
         71140:	e3a070e9 	mov	r7, #233	; 0xe9
         71144:	e2477b0a 	sub	r7, r7, #10240	; 0x2800
         71148:	01a05007 	moveq	r5, r7
         7114c:	0a000023 	beq	711e0 <TCompressor::Compress(char **)+0xdc>
         71150:	e1a00004 	mov	r0, r4
         71154:	eb6dc3ec 	bl	1be210c <$HLock>
         71158:	e1a03008 	mov	r3, r8
         7115c:	e5942000 	ldr	r2, [r4]
         71160:	e92d000c 	stmdb	sp!, {r2, r3}
         71164:	e1a02006 	mov	r2, r6
         71168:	e59d3008 	ldr	r3, [sp, #8]	; fField8
         7116c:	e28d1008 	add	r1, sp, #8	; 0x8
         71170:	e1a00005 	mov	r0, r5
         71174:	eb0c610d 	bl	3895b0 <TCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long)>
         71178:	e28dd008 	add	sp, sp, #8	; 0x8
         7117c:	e1a05000 	mov	r5, r0
         71180:	e1a00004 	mov	r0, r4
         71184:	eb6dc3e2 	bl	1be2114 <$HUnlock>
         71188:	e3350000 	teq	r5, #0	; 0x0
         7118c:	1a000010 	bne	711d4 <TCompressor::Compress(char **)+0xd0>
         71190:	e1a00004 	mov	r0, r4
         71194:	e59d1000 	ldr	r1, [sp]
         71198:	eb6dc3f7 	bl	1be217c <$SetHandleSize>
         7119c:	e1a00004 	mov	r0, r4
         711a0:	eb6dbfd0 	bl	1be10e8 <$GetHandleSize>
         711a4:	e59d1000 	ldr	r1, [sp]
         711a8:	e1300001 	teq	r0, r1
         711ac:	11a05007 	movne	r5, r7
         711b0:	1a000007 	bne	711d4 <TCompressor::Compress(char **)+0xd0>
         711b4:	e1a00004 	mov	r0, r4
         711b8:	eb6dc3d3 	bl	1be210c <$HLock>
         711bc:	e59d2000 	ldr	r2, [sp]
         711c0:	e1a00006 	mov	r0, r6
         711c4:	e5941000 	ldr	r1, [r4]
         711c8:	eb6db761 	bl	1bdef54 <$BlockMove>
         711cc:	e1a00004 	mov	r0, r4
         711d0:	eb6dc3cf 	bl	1be2114 <$HUnlock>
         711d4:	e3360000 	teq	r6, #0	; 0x0
         711d8:	11a00006 	movne	r0, r6
         711dc:	1b6d85dd 	blne	1bd2958 <$free>
         711e0:	e1a00005 	mov	r0, r5
         711e4:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TCompressor::EstimatedCompressedSize(char **)
 * Address: 000711e8
 */
TCompressor::EstimatedCompressedSize(char **) {
    /*
         711e8:	e1a0c00d 	mov	ip, sp
         711ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         711f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         711f4:	e1a05000 	mov	r5, r0
         711f8:	e1a04001 	mov	r4, r1
         711fc:	e1a00001 	mov	r0, r1
         71200:	eb6dc3c1 	bl	1be210c <$HLock>
         71204:	e1a00004 	mov	r0, r4
         71208:	eb6dbfb6 	bl	1be10e8 <$GetHandleSize>
         7120c:	e1a02000 	mov	r2, r0
         71210:	e1a00005 	mov	r0, r5
         71214:	e5941000 	ldr	r1, [r4]
         71218:	eb0c60e7 	bl	3895bc <TCompressor::EstimatedCompressedSize(void *, unsigned long)>
         7121c:	e1a05000 	mov	r5, r0
         71220:	e1a00004 	mov	r0, r4
         71224:	eb6dc3ba 	bl	1be2114 <$HUnlock>
         71228:	e1a00005 	mov	r0, r5
         7122c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: New__11TCompressorSFPc
 * Address: 0038955c
 */
void TCompressor::New() {
    /*
        38955c:	e92d400f 	stmdb	sp!, {r0, r1, r2, r3, lr}
        389560:	e1a01000 	mov	r1, r0
        389564:	ebfffff7 	bl	389548 <ClassInfo__23TArithmeticDecompressorSFv+0x5c>
        389568:	eb61188d 	bl	1bcf7a4 <$AllocInstanceByName__FPCcT1>
        38956c:	e1100000 	tst	r0, r0
        389570:	e28dd004 	add	sp, sp, #4	; 0x4
        389574:	e8bd400e 	ldmia	sp!, {r1, r2, r3, lr}
        389578:	01a0f00e 	moveq	pc, lr
        38957c:	e5900004 	ldr	r0, [r0, #4]	; fField4
        389580:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389584:	e28cf008 	add	pc, ip, #8	; 0x8
    */
}

/**
 * Symbol: TCompressor::Delete(void)
 * Address: 00389588
 */
TCompressor::Delete(void) {
    /*
        389588:	e5900004 	ldr	r0, [r0, #4]	; fField4
        38958c:	e92d4001 	stmdb	sp!, {r0, lr}
        389590:	e28fe004 	add	lr, pc, #4	; 0x4
        389594:	e590c008 	ldr	ip, [r0, #8]	; fField8
        389598:	e28cf00c 	add	pc, ip, #12	; 0xc
        38959c:	e8bd4001 	ldmia	sp!, {r0, lr}
        3895a0:	ea6124ed 	b	1bd295c <$FreeInstance(TProtocol *)>
    */
}

/**
 * Symbol: TCompressor::Init(void *)
 * Address: 003895a4
 */
TCompressor::Init(void *) {
    /*
        3895a4:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3895a8:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3895ac:	e28cf010 	add	pc, ip, #16	; 0x10
    */
}

/**
 * Symbol: TCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long)
 * Address: 003895b0
 */
TCompressor::Compress(unsigned long *, void *, unsigned long, void *, unsigned long) {
    /*
        3895b0:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3895b4:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3895b8:	e28cf014 	add	pc, ip, #20	; 0x14
    */
}

/**
 * Symbol: TCompressor::EstimatedCompressedSize(void *, unsigned long)
 * Address: 003895bc
 */
TCompressor::EstimatedCompressedSize(void *, unsigned long) {
    /*
        3895bc:	e5900004 	ldr	r0, [r0, #4]	; fField4
        3895c0:	e590c008 	ldr	ip, [r0, #8]	; fField8
        3895c4:	e28cf018 	add	pc, ip, #24	; 0x18
        3895c8:	e1a0000f 	mov	r0, pc
        3895cc:	e1a0f00e 	mov	pc, lr
        3895d0:	5443616c 	strplb	r6, [r3], -#364
        3895d4:	6c626163 	stfvse	f6, [r2], -#396
        3895d8:	6b436f6d 	blvs	1465394 <ROM$$Size+0xd45748>
        3895dc:	70726573 	rsbvcs	r6, r2, r3, ror r5
        3895e0:	736f7200 	cmnvc	pc, #0	; 0x0
    */
}

