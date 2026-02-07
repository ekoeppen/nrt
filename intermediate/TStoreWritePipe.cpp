#include "include/TStoreWritePipe.h"

/**
 * Symbol: TStoreWritePipe::CompCallback(void *, long, unsigned char)
 * Address: 002dcad4
 */
TStoreWritePipe::CompCallback(void *, long, unsigned char) {
    /*
        2dcad4:	e1a0c00d 	mov	ip, sp
        2dcad8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2dcadc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dcae0:	e1a04000 	mov	r4, r0
        2dcae4:	e1a06001 	mov	r6, r1
        2dcae8:	e1a05002 	mov	r5, r2
        2dcaec:	e20370ff 	and	r7, r3, #255	; 0xff
        2dcaf0:	e5d0022c 	ldrb	r0, [r0, #556]	; fField556
        2dcaf4:	e3a08000 	mov	r8, #0	; 0x0
        2dcaf8:	e3300000 	teq	r0, #0	; 0x0
        2dcafc:	0a00001e 	beq	2dcb7c <TStoreWritePipe::CompCallback(void *, long, unsigned char)+0xa8>
        2dcb00:	e5942228 	ldr	r2, [r4, #552]	; fField552
        2dcb04:	e0820005 	add	r0, r2, r5
        2dcb08:	e5941224 	ldr	r1, [r4, #548]	; fField548
        2dcb0c:	e1500001 	cmp	r0, r1
        2dcb10:	da00000c 	ble	2dcb48 <TStoreWritePipe::CompCallback(void *, long, unsigned char)+0x74>
        2dcb14:	e5941220 	ldr	r1, [r4, #544]	; fField544
        2dcb18:	e1a00004 	mov	r0, r4
        2dcb1c:	eb5db264 	bl	1a494b4 <TStoreWritePipe::$BufferToObject(char *, long)>
        2dcb20:	e5c4822c 	strb	r8, [r4, #556]	; fField556
        2dcb24:	e5940228 	ldr	r0, [r4, #552]	; fField552
        2dcb28:	e5840010 	str	r0, [r4, #16]	; fField16
        2dcb2c:	e1a03007 	mov	r3, r7
        2dcb30:	e1a02005 	mov	r2, r5
        2dcb34:	e1a01006 	mov	r1, r6
        2dcb38:	e5840008 	str	r0, [r4, #8]	; fField8
        2dcb3c:	e1a00004 	mov	r0, r4
        2dcb40:	eb5d84d8 	bl	1a3dea8 <TStoreWritePipe::$CompCallback(void *, long, unsigned char)>
        2dcb44:	ea000036 	b	2dcc24 <TStoreWritePipe::CompCallback(void *, long, unsigned char)+0x150>
        2dcb48:	e5940220 	ldr	r0, [r4, #544]	; fField544
        2dcb4c:	e0801002 	add	r1, r0, r2
        2dcb50:	e1a02005 	mov	r2, r5
        2dcb54:	e1a00006 	mov	r0, r6
        2dcb58:	eb6408fd 	bl	1bdef54 <$BlockMove>
        2dcb5c:	e5940228 	ldr	r0, [r4, #552]	; fField552
        2dcb60:	e0802005 	add	r2, r0, r5
        2dcb64:	e3370000 	teq	r7, #0	; 0x0
        2dcb68:	e5842228 	str	r2, [r4, #552]	; fField552
        2dcb6c:	15941220 	ldrne	r1, [r4, #544]	; fField544
        2dcb70:	11a00004 	movne	r0, r4
        2dcb74:	1b5db24e 	blne	1a494b4 <TStoreWritePipe::$BufferToObject(char *, long)>
        2dcb78:	ea000029 	b	2dcc24 <TStoreWritePipe::CompCallback(void *, long, unsigned char)+0x150>
        2dcb7c:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2dcb80:	e3700001 	cmn	r0, #1	; 0x1
        2dcb84:	1a00000b 	bne	2dcbb8 <TStoreWritePipe::CompCallback(void *, long, unsigned char)+0xe4>
        2dcb88:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2dcb8c:	e3700001 	cmn	r0, #1	; 0x1
        2dcb90:	05940010 	ldreq	r0, [r4, #16]	; fField16
        2dcb94:	00800005 	addeq	r0, r0, r5
        2dcb98:	05840008 	streq	r0, [r4, #8]	; fField8
        2dcb9c:	e5940000 	ldr	r0, [r4]
        2dcba0:	e5941008 	ldr	r1, [r4, #8]	; fField8
        2dcba4:	e2842004 	add	r2, r4, #4	; 0x4
        2dcba8:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2dcbac:	eb608d17 	bl	1b00010 <TStore::$NewObject(long, unsigned long *)>
        2dcbb0:	e3300000 	teq	r0, #0	; 0x0
        2dcbb4:	1b5d809b 	blne	1a3ce28 <$_OSErr(long)>
        2dcbb8:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2dcbbc:	e0812005 	add	r2, r1, r5
        2dcbc0:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2dcbc4:	e1520000 	cmp	r2, r0
        2dcbc8:	da000008 	ble	2dcbf0 <TStoreWritePipe::CompCallback(void *, long, unsigned char)+0x11c>
        2dcbcc:	e0401001 	sub	r1, r0, r1
        2dcbd0:	e0451001 	sub	r1, r5, r1
        2dcbd4:	e0812000 	add	r2, r1, r0
        2dcbd8:	e5842008 	str	r2, [r4, #8]	; fField8
        2dcbdc:	e8940003 	ldmia	r4, {r0, r1}
        2dcbe0:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2dcbe4:	eb60a5cd 	bl	1b06320 <TStore::$SetObjectSize(unsigned long, long)>
        2dcbe8:	e3300000 	teq	r0, #0	; 0x0
        2dcbec:	1b5d808d 	blne	1a3ce28 <$_OSErr(long)>
        2dcbf0:	e1a03005 	mov	r3, r5
        2dcbf4:	e8940003 	ldmia	r4, {r0, r1}
        2dcbf8:	e5942010 	ldr	r2, [r4, #16]	; fField16
        2dcbfc:	e92d0008 	stmdb	sp!, {r3}
        2dcc00:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2dcc04:	e1a03006 	mov	r3, r6
        2dcc08:	eb60b63c 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        2dcc0c:	e28dd004 	add	sp, sp, #4	; 0x4
        2dcc10:	e3300000 	teq	r0, #0	; 0x0
        2dcc14:	1b5d8083 	blne	1a3ce28 <$_OSErr(long)>
        2dcc18:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2dcc1c:	e0800005 	add	r0, r0, r5
        2dcc20:	e5a40010 	str	r0, [r4, #16]!	; fField16
        2dcc24:	e1a00008 	mov	r0, r8
        2dcc28:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreWritePipe::__ct(void)
 * Address: 002dcc2c
 */
TStoreWritePipe::TStoreWritePipe(void) {
    /*
        2dcc2c:	e1a0c00d 	mov	ip, sp
        2dcc30:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2dcc34:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dcc38:	e3300000 	teq	r0, #0	; 0x0
        2dcc3c:	1a000003 	bne	2dcc50 <TStoreWritePipe::__ct(void)+0x24>
        2dcc40:	e3a00e23 	mov	r0, #560	; 0x230
        2dcc44:	eb63c6bb 	bl	1bce738 <$__nw(unsigned int)>
        2dcc48:	e3300000 	teq	r0, #0	; 0x0
        2dcc4c:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2dcc50:	e3a01000 	mov	r1, #0	; 0x0
        2dcc54:	e5801218 	str	r1, [r0, #536]	; fField536
        2dcc58:	e580100c 	str	r1, [r0, #12]	; fField12
        2dcc5c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TStoreWritePipe::Init(TStoreWrapper *, unsigned long, long, CompressionType)
 * Address: 002dcc60
 */
TStoreWritePipe::Init(TStoreWrapper *, unsigned long, long, CompressionType) {
    /*
        2dcc60:	e1a0c00d 	mov	ip, sp
        2dcc64:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        2dcc68:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dcc6c:	e1a04000 	mov	r4, r0
        2dcc70:	e1a06001 	mov	r6, r1
        2dcc74:	e1a05003 	mov	r5, r3
        2dcc78:	e59b0004 	ldr	r0, [fp, #4]	; fField4
        2dcc7c:	e3a08000 	mov	r8, #0	; 0x0
        2dcc80:	e3300000 	teq	r0, #0	; 0x0
        2dcc84:	e8840006 	stmia	r4, {r1, r2}
        2dcc88:	13300001 	teqne	r0, #1	; 0x1
        2dcc8c:	0a000026 	beq	2dcd2c <TStoreWritePipe::Init(TStoreWrapper *, unsigned long, long, CompressionType)+0xcc>
        2dcc90:	e3300002 	teq	r0, #2	; 0x2
        2dcc94:	1a00000b 	bne	2dccc8 <TStoreWritePipe::Init(TStoreWrapper *, unsigned long, long, CompressionType)+0x68>
        2dcc98:	e28f1f11 	add	r1, pc, #68	; 0x44
        2dcc9c:	e28f0f15 	add	r0, pc, #84	; 0x54
        2dcca0:	eb63ebb9 	bl	1bd7b8c <$NewByName__FPCcT1>
        2dcca4:	e584000c 	str	r0, [r4, #12]	; fField12
        2dcca8:	e3300000 	teq	r0, #0	; 0x0
        2dccac:	028f0f16 	addeq	r0, pc, #88	; 0x58
        2dccb0:	0b64193a 	bleq	1be31a0 <$ThrowMsg>
        2dccb4:	e3a01000 	mov	r1, #0	; 0x0
        2dccb8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2dccbc:	eb02b25a 	bl	38962c <TCallbackCompressor::Init(void *)>
        2dccc0:	e3300000 	teq	r0, #0	; 0x0
        2dccc4:	1b5d8057 	blne	1a3ce28 <$_OSErr(long)>
        2dccc8:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2dcccc:	e3300000 	teq	r0, #0	; 0x0
        2dccd0:	0a000016 	beq	2dcd30 <TStoreWritePipe::Init(TStoreWrapper *, unsigned long, long, CompressionType)+0xd0>
        2dccd4:	e59f104c 	ldr	r1, [pc, #4c]	; 2dcd28 <TStoreWritePipe::Init(TStoreWrapper *, unsigned long, long, CompressionType)+0xc8>	; fField4
        2dccd8:	e280000c 	add	r0, r0, #12	; 0xc
        2dccdc:	e9a00012 	stmib	r0!, {r1, r4}
        2dcce0:	ea000012 	b	2dcd30 <TStoreWritePipe::Init(TStoreWrapper *, unsigned long, long, CompressionType)+0xd0>
        2dcce4:	54556e69 	ldrplb	r6, [r5], -#3689
        2dcce8:	636f6465 	cmnvs	pc, #1694498816	; 0x65000000
        2dccec:	436f6d70 	cmnmi	pc, #7168	; 0x1c00
        2dccf0:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        2dccf4:	6f720000 	swivs	0x00720000
        2dccf8:	5443616c 	strplb	r6, [r3], -#364
        2dccfc:	6c626163 	stfvse	f6, [r2], -#396
        2dcd00:	6b436f6d 	blvs	13b8abc <ROM$$Size+0xc98e70>
        2dcd04:	70726573 	rsbvcs	r6, r2, r3, ror r5
        2dcd08:	736f7200 	cmnvc	pc, #0	; 0x0
        2dcd0c:	436f756c 	cmnmi	pc, #452984832	; 0x1b000000
        2dcd10:	646e2774 	strvsbt	r2, [lr], -#1908
        2dcd14:	20637265 	rsbcs	r7, r3, r5, ror #4
        2dcd18:	61746520 	cmnvs	r4, r0, lsr #10
        2dcd1c:	636f6d70 	cmnvs	pc, #7168	; 0x1c00
        2dcd20:	72657373 	rsbvc	r7, r5, #-872415231	; 0xcc000001
        2dcd24:	6f720000 	swivs	0x00720000
        2dcd28:	01a3deac 	moveq	sp, ip, lsr #29
        2dcd2c:	e584800c 	str	r8, [r4, #12]	; fField12
        2dcd30:	e5845008 	str	r5, [r4, #8]	; fField8
        2dcd34:	e5848010 	str	r8, [r4, #16]	; fField16
        2dcd38:	e1a07005 	mov	r7, r5
        2dcd3c:	e5848014 	str	r8, [r4, #20]	; fField20
        2dcd40:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2dcd44:	e3300000 	teq	r0, #0	; 0x0
        2dcd48:	10877005 	addne	r7, r7, r5
        2dcd4c:	e3570c02 	cmp	r7, #512	; 0x200
        2dcd50:	da000005 	ble	2dcd6c <TStoreWritePipe::Init(TStoreWrapper *, unsigned long, long, CompressionType)+0x10c>
        2dcd54:	e1a00007 	mov	r0, r7
        2dcd58:	eb63c676 	bl	1bce738 <$__nw(unsigned int)>
        2dcd5c:	e5840218 	str	r0, [r4, #536]	; fField536
        2dcd60:	e3300000 	teq	r0, #0	; 0x0
        2dcd64:	1584521c 	strne	r5, [r4, #540]	; fField540
        2dcd68:	1a000005 	bne	2dcd84 <TStoreWritePipe::Init(TStoreWrapper *, unsigned long, long, CompressionType)+0x124>
        2dcd6c:	e3a00c02 	mov	r0, #512	; 0x200
        2dcd70:	e584021c 	str	r0, [r4, #540]	; fField540
        2dcd74:	e2840018 	add	r0, r4, #24	; 0x18
        2dcd78:	e3570c02 	cmp	r7, #512	; 0x200
        2dcd7c:	e5840218 	str	r0, [r4, #536]	; fField536
        2dcd80:	ca000001 	bgt	2dcd8c <TStoreWritePipe::Init(TStoreWrapper *, unsigned long, long, CompressionType)+0x12c>
        2dcd84:	e3a00001 	mov	r0, #1	; 0x1
        2dcd88:	ea000000 	b	2dcd90 <TStoreWritePipe::Init(TStoreWrapper *, unsigned long, long, CompressionType)+0x130>
        2dcd8c:	e3a00000 	mov	r0, #0	; 0x0
        2dcd90:	e5c4022c 	strb	r0, [r4, #556]	; fField556
        2dcd94:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2dcd98:	e3300000 	teq	r0, #0	; 0x0
        2dcd9c:	0a000004 	beq	2dcdb4 <TStoreWritePipe::Init(TStoreWrapper *, unsigned long, long, CompressionType)+0x154>
        2dcda0:	e5940218 	ldr	r0, [r4, #536]	; fField536
        2dcda4:	e0800005 	add	r0, r0, r5
        2dcda8:	e2844e22 	add	r4, r4, #544	; 0x220
        2dcdac:	e8840121 	stmia	r4, {r0, r5, r8}
        2dcdb0:	e2444e22 	sub	r4, r4, #544	; 0x220
        2dcdb4:	e5d4022c 	ldrb	r0, [r4, #556]	; fField556
        2dcdb8:	e3300000 	teq	r0, #0	; 0x0
        2dcdbc:	191ba9f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2dcdc0:	e5941004 	ldr	r1, [r4, #4]	; fField4
        2dcdc4:	e3710001 	cmn	r1, #1	; 0x1
        2dcdc8:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
        2dcdcc:	e1a02008 	mov	r2, r8
        2dcdd0:	e596007c 	ldr	r0, [r6, #124]	; fField124
        2dcdd4:	eb60a551 	bl	1b06320 <TStore::$SetObjectSize(unsigned long, long)>
        2dcdd8:	e3300000 	teq	r0, #0	; 0x0
        2dcddc:	1b5d8011 	blne	1a3ce28 <$_OSErr(long)>
        2dcde0:	e9b40006 	ldmib	r4!, {r1, r2}
        2dcde4:	e5b6007c 	ldr	r0, [r6, #124]!	; fField124
        2dcde8:	eb60a54c 	bl	1b06320 <TStore::$SetObjectSize(unsigned long, long)>
        2dcdec:	e3300000 	teq	r0, #0	; 0x0
        2dcdf0:	191b69f0 	ldmnedb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
        2dcdf4:	1a5d800b 	bne	1a3ce28 <$_OSErr(long)>
        2dcdf8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreWritePipe::__dt(void)
 * Address: 002dcdfc
 */
TStoreWritePipe::~TStoreWritePipe(void) {
    /*
        2dcdfc:	e1a0c00d 	mov	ip, sp
        2dce00:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dce04:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dce08:	e1a04000 	mov	r4, r0
        2dce0c:	e1a05001 	mov	r5, r1
        2dce10:	e5900218 	ldr	r0, [r0, #536]	; fField536
        2dce14:	e3300000 	teq	r0, #0	; 0x0
        2dce18:	12841018 	addne	r1, r4, #24	; 0x18
        2dce1c:	11300001 	teqne	r0, r1
        2dce20:	1b63c22e 	blne	1bcd6e0 <$__dl(void *)>
        2dce24:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2dce28:	e3300000 	teq	r0, #0	; 0x0
        2dce2c:	1b02b1f7 	blne	389610 <TCallbackCompressor::Delete(void)>
        2dce30:	e3150001 	tst	r5, #1	; 0x1
        2dce34:	11a00004 	movne	r0, r4
        2dce38:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
        2dce3c:	1a63c227 	bne	1bcd6e0 <$__dl(void *)>
        2dce40:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreWritePipe::SetPosition(long)
 * Address: 002dce44
 */
TStoreWritePipe::SetPosition(long) {
    /*
        2dce44:	e5801010 	str	r1, [r0, #16]	; fField16
        2dce48:	e5d0222c 	ldrb	r2, [r0, #556]	; fField556
        2dce4c:	e3320000 	teq	r2, #0	; 0x0
        2dce50:	15a01014 	strne	r1, [r0, #20]!	; fField20
        2dce54:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStoreWritePipe::GetDataPtr(long)
 * Address: 002dce58
 */
TStoreWritePipe::GetDataPtr(long) {
    /*
        2dce58:	e5d0222c 	ldrb	r2, [r0, #556]	; fField556
        2dce5c:	e3320000 	teq	r2, #0	; 0x0
        2dce60:	03a00000 	moveq	r0, #0	; 0x0
        2dce64:	15900218 	ldrne	r0, [r0, #536]	; fField536
        2dce68:	10800001 	addne	r0, r0, r1
        2dce6c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStoreWritePipe::BufferToObject(char *, long)
 * Address: 002dce94
 */
TStoreWritePipe::BufferToObject(char *, long) {
    /*
        2dce94:	e1a0c00d 	mov	ip, sp
        2dce98:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        2dce9c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dcea0:	e590c004 	ldr	ip, [r0, #4]	; fField4
        2dcea4:	e37c0001 	cmn	ip, #1	; 0x1
        2dcea8:	1a000006 	bne	2dcec8 <TStoreWritePipe::BufferToObject(char *, long)+0x34>
        2dceac:	e590c000 	ldr	ip, [r0]
        2dceb0:	e2803004 	add	r3, r0, #4	; 0x4
        2dceb4:	e5bc007c 	ldr	r0, [ip, #124]!	; fField124
        2dceb8:	eb02a753 	bl	386c0c <TStore::NewObject(char *, long, unsigned long *)>
        2dcebc:	e3300000 	teq	r0, #0	; 0x0
        2dcec0:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2dcec4:	ea000007 	b	2dcee8 <TStoreWritePipe::BufferToObject(char *, long)+0x54>
        2dcec8:	e5900000 	ldr	r0, [r0]
        2dcecc:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2dced0:	e1a03002 	mov	r3, r2
        2dced4:	e1a02001 	mov	r2, r1
        2dced8:	e1a0100c 	mov	r1, ip
        2dcedc:	eb02a74d 	bl	386c18 <TStore::ReplaceObject(unsigned long, char *, long)>
        2dcee0:	e3300000 	teq	r0, #0	; 0x0
        2dcee4:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        2dcee8:	e91b6800 	ldmdb	fp, {fp, sp, lr}
        2dceec:	ea5d7fcd 	b	1a3ce28 <$_OSErr(long)>
    */
}

/**
 * Symbol: TStoreWritePipe::WriteToStore(char *, long)
 * Address: 002dcef0
 */
TStoreWritePipe::WriteToStore(char *, long) {
    /*
        2dcef0:	e1a0c00d 	mov	ip, sp
        2dcef4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2dcef8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dcefc:	e1a04000 	mov	r4, r0
        2dcf00:	e1a06001 	mov	r6, r1
        2dcf04:	e1a05002 	mov	r5, r2
        2dcf08:	e590000c 	ldr	r0, [r0, #12]	; fField12
        2dcf0c:	e3300000 	teq	r0, #0	; 0x0
        2dcf10:	0a000006 	beq	2dcf30 <TStoreWritePipe::WriteToStore(char *, long)+0x40>
        2dcf14:	e1a02005 	mov	r2, r5
        2dcf18:	e1a01006 	mov	r1, r6
        2dcf1c:	eb02b1c8 	bl	389644 <TCallbackCompressor::WriteChunk(void *, long)>
        2dcf20:	e3300000 	teq	r0, #0	; 0x0
        2dcf24:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
        2dcf28:	1a5d7fbe 	bne	1a3ce28 <$_OSErr(long)>
        2dcf2c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2dcf30:	e5d4022c 	ldrb	r0, [r4, #556]	; fField556
        2dcf34:	e3300000 	teq	r0, #0	; 0x0
        2dcf38:	0a000004 	beq	2dcf50 <TStoreWritePipe::WriteToStore(char *, long)+0x60>
        2dcf3c:	e1a02005 	mov	r2, r5
        2dcf40:	e1a01006 	mov	r1, r6
        2dcf44:	e1a00004 	mov	r0, r4
        2dcf48:	eb5db159 	bl	1a494b4 <TStoreWritePipe::$BufferToObject(char *, long)>
        2dcf4c:	ea000018 	b	2dcfb4 <TStoreWritePipe::WriteToStore(char *, long)+0xc4>
        2dcf50:	e5940004 	ldr	r0, [r4, #4]	; fField4
        2dcf54:	e3700001 	cmn	r0, #1	; 0x1
        2dcf58:	1a00000b 	bne	2dcf8c <TStoreWritePipe::WriteToStore(char *, long)+0x9c>
        2dcf5c:	e5940008 	ldr	r0, [r4, #8]	; fField8
        2dcf60:	e3700001 	cmn	r0, #1	; 0x1
        2dcf64:	05940010 	ldreq	r0, [r4, #16]	; fField16
        2dcf68:	00800005 	addeq	r0, r0, r5
        2dcf6c:	05840008 	streq	r0, [r4, #8]	; fField8
        2dcf70:	e5940000 	ldr	r0, [r4]
        2dcf74:	e5941008 	ldr	r1, [r4, #8]	; fField8
        2dcf78:	e2842004 	add	r2, r4, #4	; 0x4
        2dcf7c:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2dcf80:	eb608c22 	bl	1b00010 <TStore::$NewObject(long, unsigned long *)>
        2dcf84:	e3300000 	teq	r0, #0	; 0x0
        2dcf88:	1b5d7fa6 	blne	1a3ce28 <$_OSErr(long)>
        2dcf8c:	e1a03005 	mov	r3, r5
        2dcf90:	e8940003 	ldmia	r4, {r0, r1}
        2dcf94:	e5942010 	ldr	r2, [r4, #16]	; fField16
        2dcf98:	e92d0008 	stmdb	sp!, {r3}
        2dcf9c:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2dcfa0:	e1a03006 	mov	r3, r6
        2dcfa4:	eb60b555 	bl	1b0a500 <TStore::$Write(unsigned long, long, char *, long)>
        2dcfa8:	e28dd004 	add	sp, sp, #4	; 0x4
        2dcfac:	e3300000 	teq	r0, #0	; 0x0
        2dcfb0:	1b5d7f9c 	blne	1a3ce28 <$_OSErr(long)>
        2dcfb4:	e5940010 	ldr	r0, [r4, #16]	; fField16
        2dcfb8:	e0800005 	add	r0, r0, r5
        2dcfbc:	e5a40010 	str	r0, [r4, #16]!	; fField16
        2dcfc0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreWritePipe::Flush(void)
 * Address: 002dcfc4
 */
TStoreWritePipe::Flush(void) {
    /*
        2dcfc4:	e5902014 	ldr	r2, [r0, #20]	; fField20
        2dcfc8:	e3320000 	teq	r2, #0	; 0x0
        2dcfcc:	01a0f00e 	moveq	pc, lr
        2dcfd0:	e1a0c00d 	mov	ip, sp
        2dcfd4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dcfd8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dcfdc:	e1a04000 	mov	r4, r0
        2dcfe0:	e5901218 	ldr	r1, [r0, #536]	; fField536
        2dcfe4:	eb5da0ae 	bl	1a452a4 <TStoreWritePipe::$WriteToStore(char *, long)>
        2dcfe8:	e3a00000 	mov	r0, #0	; 0x0
        2dcfec:	e5a40014 	str	r0, [r4, #20]!	; fField20
        2dcff0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreWritePipe::Complete(void)
 * Address: 002dcff4
 */
TStoreWritePipe::Complete(void) {
    /*
        2dcff4:	e1a0c00d 	mov	ip, sp
        2dcff8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        2dcffc:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd000:	e1a04000 	mov	r4, r0
        2dd004:	e5900004 	ldr	r0, [r0, #4]	; fField4
        2dd008:	e3700001 	cmn	r0, #1	; 0x1
        2dd00c:	03e00000 	mvneq	r0, #0	; 0x0
        2dd010:	05840008 	streq	r0, [r4, #8]	; fField8
        2dd014:	e1a00004 	mov	r0, r4
        2dd018:	eb5d87d6 	bl	1a3ef78 <TStoreWritePipe::$Flush(void)>
        2dd01c:	e594000c 	ldr	r0, [r4, #12]	; fField12
        2dd020:	e3300000 	teq	r0, #0	; 0x0
        2dd024:	1b02b189 	blne	389650 <TCallbackCompressor::Flush(void)>
        2dd028:	e5d4022c 	ldrb	r0, [r4, #556]	; fField556
        2dd02c:	e3300000 	teq	r0, #0	; 0x0
        2dd030:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
        2dd034:	e8b40003 	ldmia	r4!, {r0, r1}
        2dd038:	e5b42008 	ldr	r2, [r4, #8]!	; fField8
        2dd03c:	e590007c 	ldr	r0, [r0, #124]	; fField124
        2dd040:	eb60a4b6 	bl	1b06320 <TStore::$SetObjectSize(unsigned long, long)>
        2dd044:	e3300000 	teq	r0, #0	; 0x0
        2dd048:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
        2dd04c:	1a5d7f75 	bne	1a3ce28 <$_OSErr(long)>
        2dd050:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreWritePipe::Write(char *, long)
 * Address: 002dd054
 */
TStoreWritePipe::Write(char *, long) {
    /*
        2dd054:	e1a0c00d 	mov	ip, sp
        2dd058:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        2dd05c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd060:	e1a04000 	mov	r4, r0
        2dd064:	e1a06001 	mov	r6, r1
        2dd068:	e1a05002 	mov	r5, r2
        2dd06c:	e590121c 	ldr	r1, [r0, #540]	; fField540
        2dd070:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2dd074:	e0411000 	sub	r1, r1, r0
        2dd078:	e1510002 	cmp	r1, r2
        2dd07c:	a5941218 	ldrge	r1, [r4, #536]	; fField536
        2dd080:	a0811000 	addge	r1, r1, r0
        2dd084:	aa000005 	bge	2dd0a0 <TStoreWritePipe::Write(char *, long)+0x4c>
        2dd088:	e1a00004 	mov	r0, r4
        2dd08c:	eb5d87b9 	bl	1a3ef78 <TStoreWritePipe::$Flush(void)>
        2dd090:	e594021c 	ldr	r0, [r4, #540]	; fField540
        2dd094:	e1500005 	cmp	r0, r5
        2dd098:	da000007 	ble	2dd0bc <TStoreWritePipe::Write(char *, long)+0x68>
        2dd09c:	e5941218 	ldr	r1, [r4, #536]	; fField536
        2dd0a0:	e1a02005 	mov	r2, r5
        2dd0a4:	e1a00006 	mov	r0, r6
        2dd0a8:	eb6407a9 	bl	1bdef54 <$BlockMove>
        2dd0ac:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2dd0b0:	e0800005 	add	r0, r0, r5
        2dd0b4:	e5a40014 	str	r0, [r4, #20]!	; fField20
        2dd0b8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
        2dd0bc:	e1a02005 	mov	r2, r5
        2dd0c0:	e1a01006 	mov	r1, r6
        2dd0c4:	e1a00004 	mov	r0, r4
        2dd0c8:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
        2dd0cc:	ea5da074 	b	1a452a4 <TStoreWritePipe::$WriteToStore(char *, long)>
    */
}

/**
 * Symbol: TStoreWritePipe::operator<<(unsigned char)
 * Address: 002dd0d0
 */
TStoreWritePipe::operator<<(unsigned char) {
    /*
        2dd0d0:	e1a0c00d 	mov	ip, sp
        2dd0d4:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        2dd0d8:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd0dc:	e1a04000 	mov	r4, r0
        2dd0e0:	e20150ff 	and	r5, r1, #255	; 0xff
        2dd0e4:	e5900014 	ldr	r0, [r0, #20]	; fField20
        2dd0e8:	e2800001 	add	r0, r0, #1	; 0x1
        2dd0ec:	e594121c 	ldr	r1, [r4, #540]	; fField540
        2dd0f0:	e1500001 	cmp	r0, r1
        2dd0f4:	c1a00004 	movgt	r0, r4
        2dd0f8:	cb5d879e 	blgt	1a3ef78 <TStoreWritePipe::$Flush(void)>
        2dd0fc:	e5940218 	ldr	r0, [r4, #536]	; fField536
        2dd100:	e5941014 	ldr	r1, [r4, #20]	; fField20
        2dd104:	e7c05001 	strb	r5, [r0, r1]
        2dd108:	e5940014 	ldr	r0, [r4, #20]	; fField20
        2dd10c:	e2800001 	add	r0, r0, #1	; 0x1
        2dd110:	e5840014 	str	r0, [r4, #20]	; fField20
        2dd114:	e1a00004 	mov	r0, r4
        2dd118:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStoreWritePipe::operator<<(long)
 * Address: 002dd11c
 */
TStoreWritePipe::operator<<(long) {
    /*
        2dd11c:	e1a0c00d 	mov	ip, sp
        2dd120:	e92dd803 	stmdb	sp!, {r0, r1, fp, ip, lr, pc}
        2dd124:	e24cb004 	sub	fp, ip, #4	; 0x4
        2dd128:	e51b0010 	ldr	r0, [fp, -#16]	; fField16
        2dd12c:	e3500000 	cmp	r0, #0	; 0x0
        2dd130:	ba000005 	blt	2dd14c <TStoreWritePipe::operator<<(long)+0x30>
        2dd134:	e35000fe 	cmp	r0, #254	; 0xfe
        2dd138:	ca000003 	bgt	2dd14c <TStoreWritePipe::operator<<(long)+0x30>
        2dd13c:	e20010ff 	and	r1, r0, #255	; 0xff
        2dd140:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2dd144:	eb5db0db 	bl	1a494b8 <TStoreWritePipe::$__ls(unsigned char)>
        2dd148:	ea000006 	b	2dd168 <TStoreWritePipe::operator<<(long)+0x4c>
        2dd14c:	e3a010ff 	mov	r1, #255	; 0xff
        2dd150:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2dd154:	eb5db0d7 	bl	1a494b8 <TStoreWritePipe::$__ls(unsigned char)>
        2dd158:	e24b1010 	sub	r1, fp, #16	; 0x10
        2dd15c:	e3a02004 	mov	r2, #4	; 0x4
        2dd160:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2dd164:	eb5da04b 	bl	1a45298 <TStoreWritePipe::$Write(char *, long)>
        2dd168:	e51b0014 	ldr	r0, [fp, -#20]	; fField20
        2dd16c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

