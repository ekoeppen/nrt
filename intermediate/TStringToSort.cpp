#include "include/TStringToSort.h"

/**
 * Symbol: TStringToSort::__ct(unsigned short const *, long, TSortingTable const *)
 * Address: 00257fd8
 */
TStringToSort::TStringToSort(unsigned short const *, long, TSortingTable const *) {
    /*
        257fd8:	e1a0c00d 	mov	ip, sp
        257fdc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
        257fe0:	e24cb004 	sub	fp, ip, #4	; 0x4
        257fe4:	e1a06001 	mov	r6, r1
        257fe8:	e1a04002 	mov	r4, r2
        257fec:	e1a05003 	mov	r5, r3
        257ff0:	e3300000 	teq	r0, #0	; 0x0
        257ff4:	1a000003 	bne	258008 <TStringToSort::__ct(unsigned short const *, long, TSortingTable const *)+0x30>
        257ff8:	e3a00018 	mov	r0, #24	; 0x18
        257ffc:	eb65d9cd 	bl	1bce738 <$__nw(unsigned int)>
        258000:	e3300000 	teq	r0, #0	; 0x0
        258004:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
        258008:	e5804008 	str	r4, [r0, #8]	; fField8
        25800c:	e8800060 	stmia	r0, {r5, r6}
        258010:	e3a01000 	mov	r1, #0	; 0x0
        258014:	e580400c 	str	r4, [r0, #12]	; fField12
        258018:	e5c01013 	strb	r1, [r0, #19]	; fField19
        25801c:	e5c01012 	strb	r1, [r0, #18]	; fField18
        258020:	e5c01016 	strb	r1, [r0, #22]	; fField22
        258024:	e5c01017 	strb	r1, [r0, #23]	; fField23
        258028:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TStringToSort::Fetch(void)
 * Address: 0025802c
 */
TStringToSort::Fetch(void) {
    /*
        25802c:	e3a02000 	mov	r2, #0	; 0x0
        258030:	e5c02017 	strb	r2, [r0, #23]	; fField23
        258034:	e5901012 	ldr	r1, [r0, #18]	; fField18
        258038:	e1b01821 	movs	r1, r1, lsr #16
        25803c:	0a000005 	beq	258058 <TStringToSort::Fetch(void)+0x2c>
        258040:	e5c01011 	strb	r1, [r0, #17]	; fField17
        258044:	e1a01421 	mov	r1, r1, lsr #8
        258048:	e5c01010 	strb	r1, [r0, #16]	; fField16
        25804c:	e5c02013 	strb	r2, [r0, #19]	; fField19
        258050:	e5c02012 	strb	r2, [r0, #18]	; fField18
        258054:	ea00000c 	b	25808c <TStringToSort::Fetch(void)+0x60>
        258058:	e5901008 	ldr	r1, [r0, #8]	; fField8
        25805c:	e3310000 	teq	r1, #0	; 0x0
        258060:	01a00002 	moveq	r0, r2
        258064:	01a0f00e 	moveq	pc, lr
        258068:	e5903004 	ldr	r3, [r0, #4]	; fField4
        25806c:	e4932002 	ldr	r2, [r3], #2
        258070:	e1a02822 	mov	r2, r2, lsr #16
        258074:	e5803004 	str	r3, [r0, #4]	; fField4
        258078:	e5c02011 	strb	r2, [r0, #17]	; fField17
        25807c:	e1a02442 	mov	r2, r2, asr #8
        258080:	e5c02010 	strb	r2, [r0, #16]	; fField16
        258084:	e2411001 	sub	r1, r1, #1	; 0x1
        258088:	e5a01008 	str	r1, [r0, #8]!	; fField8
        25808c:	e3a00001 	mov	r0, #1	; 0x1
        258090:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TStringToSort::Project(char)
 * Address: 00258094
 */
TStringToSort::Project(char) {
    /*
        258094:	e1a0c00d 	mov	ip, sp
        258098:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
        25809c:	e24cb004 	sub	fp, ip, #4	; 0x4
        2580a0:	e1a04000 	mov	r4, r0
        2580a4:	e20150ff 	and	r5, r1, #255	; 0xff
        2580a8:	e5901010 	ldr	r1, [r0, #16]	; fField16
        2580ac:	e1a01821 	mov	r1, r1, lsr #16
        2580b0:	e5900000 	ldr	r0, [r0]
        2580b4:	eb6540ee 	bl	1ba8474 <TSortingTable::$GetProjectionEntry( const(unsigned short))>
        2580b8:	e3300000 	teq	r0, #0	; 0x0
        2580bc:	05940010 	ldreq	r0, [r4, #16]	; fField16
        2580c0:	01a00820 	moveq	r0, r0, lsr #16
        2580c4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
        2580c8:	e5901000 	ldr	r1, [r0]
        2580cc:	e1a01821 	mov	r1, r1, lsr #16
        2580d0:	e241ccff 	sub	ip, r1, #65280	; 0xff00
        2580d4:	e33c00ff 	teq	ip, #255	; 0xff
        2580d8:	1a000014 	bne	258130 <TStringToSort::Project(char)+0x9c>
        2580dc:	e5941010 	ldr	r1, [r4, #16]	; fField16
        2580e0:	e1a01821 	mov	r1, r1, lsr #16
        2580e4:	e5940000 	ldr	r0, [r4]
        2580e8:	eb6540e2 	bl	1ba8478 <TSortingTable::$GetLigatureEntry( const(unsigned short))>
        2580ec:	e5901002 	ldr	r1, [r0, #2]
        2580f0:	e1a01821 	mov	r1, r1, lsr #16
        2580f4:	e5c41011 	strb	r1, [r4, #17]	; fField17
        2580f8:	e1a01441 	mov	r1, r1, asr #8
        2580fc:	e5c41010 	strb	r1, [r4, #16]	; fField16
        258100:	e5900004 	ldr	r0, [r0, #4]	; fField4
        258104:	e1a00820 	mov	r0, r0, lsr #16
        258108:	e5c40013 	strb	r0, [r4, #19]	; fField19
        25810c:	e1a00440 	mov	r0, r0, asr #8
        258110:	e5c40012 	strb	r0, [r4, #18]	; fField18
        258114:	e3350000 	teq	r5, #0	; 0x0
        258118:	03a00001 	moveq	r0, #1	; 0x1
        25811c:	05c40016 	streqb	r0, [r4, #22]	; fField22
        258120:	e1a01005 	mov	r1, r5
        258124:	e1a00004 	mov	r0, r4
        258128:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
        25812c:	ea6540ce 	b	1ba846c <TStringToSort::$Project(char)>
        258130:	e3310000 	teq	r1, #0	; 0x0
        258134:	03a01001 	moveq	r1, #1	; 0x1
        258138:	13a01000 	movne	r1, #0	; 0x0
        25813c:	e5c41017 	strb	r1, [r4, #23]	; fField23
        258140:	e3350000 	teq	r5, #0	; 0x0
        258144:	1a000004 	bne	25815c <TStringToSort::Project(char)+0xc8>
        258148:	e5941010 	ldr	r1, [r4, #16]	; fField16
        25814c:	e1a01821 	mov	r1, r1, lsr #16
        258150:	e5c41015 	strb	r1, [r4, #21]	; fField21
        258154:	e1a01421 	mov	r1, r1, lsr #8
        258158:	e5c41014 	strb	r1, [r4, #20]	; fField20
        25815c:	e5900000 	ldr	r0, [r0]
        258160:	e1a00820 	mov	r0, r0, lsr #16
        258164:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TStringToSort::SecondOrderProject( const(void))
 * Address: 00258168
 */
TStringToSort::SecondOrderProject( const(void)) {
    /*
        258168:	e1a0c00d 	mov	ip, sp
        25816c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
        258170:	e24cb004 	sub	fp, ip, #4	; 0x4
        258174:	e1a04000 	mov	r4, r0
        258178:	e5901014 	ldr	r1, [r0, #20]	; fField20
        25817c:	e1a01821 	mov	r1, r1, lsr #16
        258180:	e5900000 	ldr	r0, [r0]
        258184:	eb6540ba 	bl	1ba8474 <TSortingTable::$GetProjectionEntry( const(unsigned short))>
        258188:	e3300000 	teq	r0, #0	; 0x0
        25818c:	05940014 	ldreq	r0, [r4, #20]	; fField20
        258190:	01a00820 	moveq	r0, r0, lsr #16
        258194:	15900002 	ldrne	r0, [r0, #2]
        258198:	11a00820 	movne	r0, r0, lsr #16
        25819c:	e1a00800 	mov	r0, r0, lsl #16
        2581a0:	e1a00820 	mov	r0, r0, lsr #16
        2581a4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

