#include "include/LOTransactionHandler.h"

/**
 * Symbol: LOTransactionHandler::__ct(void)
 * Address: 001b0fe8
 */
LOTransactionHandler::LOTransactionHandler(void) {
    /*
        1b0fe8:	e1a0c00d 	mov	ip, sp
        1b0fec:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
        1b0ff0:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b0ff4:	e3300000 	teq	r0, #0	; 0x0
        1b0ff8:	1a000003 	bne	1b100c <LOTransactionHandler::__ct(void)+0x24>
        1b0ffc:	e3a00008 	mov	r0, #8	; 0x8
        1b1000:	eb6875cc 	bl	1bce738 <$__nw(unsigned int)>
        1b1004:	e3300000 	teq	r0, #0	; 0x0
        1b1008:	091ba800 	ldmeqdb	fp, {fp, sp, pc}
        1b100c:	e3a01000 	mov	r1, #0	; 0x0
        1b1010:	e5801000 	str	r1, [r0]
        1b1014:	e5c01004 	strb	r1, [r0, #4]	; fField4
        1b1018:	e5c01005 	strb	r1, [r0, #5]	; fField5
        1b101c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: LOTransactionHandler::Free(void)
 * Address: 001b1020
 */
LOTransactionHandler::Free(void) {
    /*
        1b1020:	e5900000 	ldr	r0, [r0]
        1b1024:	e3300000 	teq	r0, #0	; 0x0
        1b1028:	13a01001 	movne	r1, #1	; 0x1
        1b102c:	1a68cc8a 	bne	1be425c <CSortedList::$__dt(void)>
        1b1030:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LOTransactionHandler::AddObjectToTransaction(unsigned long, TStore *, int)
 * Address: 001b10a4
 */
LOTransactionHandler::AddObjectToTransaction(unsigned long, TStore *, int) {
    /*
        1b10a4:	e1a0c00d 	mov	ip, sp
        1b10a8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1b10ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b10b0:	e1a04000 	mov	r4, r0
        1b10b4:	e1a06001 	mov	r6, r1
        1b10b8:	e1a07002 	mov	r7, r2
        1b10bc:	e1a05003 	mov	r5, r3
        1b10c0:	e3a09000 	mov	r9, #0	; 0x0
        1b10c4:	e3a01001 	mov	r1, #1	; 0x1
        1b10c8:	e3330003 	teq	r3, #3	; 0x3
        1b10cc:	0a000004 	beq	1b10e4 <LOTransactionHandler::AddObjectToTransaction(unsigned long, TStore *, int)+0x40>
        1b10d0:	e5d40004 	ldrb	r0, [r4, #4]	; fField4
        1b10d4:	e3300000 	teq	r0, #0	; 0x0
        1b10d8:	1a00001d 	bne	1b1154 <LOTransactionHandler::AddObjectToTransaction(unsigned long, TStore *, int)+0xb0>
        1b10dc:	e3350003 	teq	r5, #3	; 0x3
        1b10e0:	1a000000 	bne	1b10e8 <LOTransactionHandler::AddObjectToTransaction(unsigned long, TStore *, int)+0x44>
        1b10e4:	e5c41005 	strb	r1, [r4, #5]	; fField5
        1b10e8:	e5940000 	ldr	r0, [r4]
        1b10ec:	e3300000 	teq	r0, #0	; 0x0
        1b10f0:	1a00000e 	bne	1b1130 <LOTransactionHandler::AddObjectToTransaction(unsigned long, TStore *, int)+0x8c>
        1b10f4:	e59f0060 	ldr	r0, [pc, #60]	; 1b115c <LOTransactionHandler::AddObjectToTransaction(unsigned long, TStore *, int)+0xb8>
        1b10f8:	e5902014 	ldr	r2, [r0, #20]
        1b10fc:	e59f805c 	ldr	r8, [pc, #5c]	; 1b1160 <LOTransactionHandler::AddObjectToTransaction(unsigned long, TStore *, int)+0xbc>	; fField5
        1b1100:	e3320000 	teq	r2, #0	; 0x0
        1b1104:	05a01014 	streq	r1, [r0, #20]!
        1b1108:	01a00008 	moveq	r0, r8
        1b110c:	0b68c833 	bleq	1be31e0 <CItemComparer::$__ct(void)>
        1b1110:	e1a01008 	mov	r1, r8
        1b1114:	e3a00000 	mov	r0, #0	; 0x0
        1b1118:	eb68c82b 	bl	1be31cc <CSortedList::$__ct(CItemComparer *)>
        1b111c:	e5840000 	str	r0, [r4]
        1b1120:	eb68c3fe 	bl	1be2120 <$MemError>
        1b1124:	e3300000 	teq	r0, #0	; 0x0
        1b1128:	15849000 	strne	r9, [r4]
        1b112c:	191babf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1b1130:	e1a01006 	mov	r1, r6
        1b1134:	e5940000 	ldr	r0, [r4]
        1b1138:	eb68e4f2 	bl	1bea508 <CSortedList::$InsertUnique(void *)>
        1b113c:	e3300000 	teq	r0, #0	; 0x0
        1b1140:	13350001 	teqne	r5, #1	; 0x1
        1b1144:	11a01006 	movne	r1, r6
        1b1148:	11a00007 	movne	r0, r7
        1b114c:	191b6bf0 	ldmnedb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
        1b1150:	1a075698 	bne	386bb8 <TStore::StartTransactionAgainst(unsigned long)>
        1b1154:	e1a00009 	mov	r0, r9
        1b1158:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
        1b115c:	0c101918 	ldceq	9, cr1, [r0], -#96
        1b1160:	0c101920 	ldceq	9, cr1, [r0], -#128
    */
}

/**
 * Symbol: LOTransactionHandler::SetAllInTransaction(void)
 * Address: 001b1164
 */
LOTransactionHandler::SetAllInTransaction(void) {
    /*
        1b1164:	e3a01001 	mov	r1, #1	; 0x1
        1b1168:	e5c01004 	strb	r1, [r0, #4]	; fField4
        1b116c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LOTransactionHandler::HasTransaction(void)
 * Address: 001b1170
 */
LOTransactionHandler::HasTransaction(void) {
    /*
        1b1170:	e5d01004 	ldrb	r1, [r0, #4]	; fField4
        1b1174:	e3310000 	teq	r1, #0	; 0x0
        1b1178:	1a000004 	bne	1b1190 <LOTransactionHandler::HasTransaction(void)+0x20>
        1b117c:	e5900000 	ldr	r0, [r0]
        1b1180:	e3300000 	teq	r0, #0	; 0x0
        1b1184:	15900000 	ldrne	r0, [r0]
        1b1188:	13300000 	teqne	r0, #0	; 0x0
        1b118c:	0a000001 	beq	1b1198 <LOTransactionHandler::HasTransaction(void)+0x28>
        1b1190:	e3a00001 	mov	r0, #1	; 0x1
        1b1194:	ea000000 	b	1b119c <LOTransactionHandler::HasTransaction(void)+0x2c>
        1b1198:	e3a00000 	mov	r0, #0	; 0x0
        1b119c:	e20000ff 	and	r0, r0, #255	; 0xff
        1b11a0:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: LOTransactionHandler::EndTransaction(unsigned char, TStore *, unsigned long, unsigned long)
 * Address: 001b11a4
 */
LOTransactionHandler::EndTransaction(unsigned char, TStore *, unsigned long, unsigned long) {
    /*
        1b11a4:	e1a0c00d 	mov	ip, sp
        1b11a8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
        1b11ac:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b11b0:	e1a04000 	mov	r4, r0
        1b11b4:	e1a05002 	mov	r5, r2
        1b11b8:	e1a06003 	mov	r6, r3
        1b11bc:	e20190ff 	and	r9, r1, #255	; 0xff
        1b11c0:	e3a07000 	mov	r7, #0	; 0x0
        1b11c4:	e59ba004 	ldr	sl, [fp, #4]	; fField4
        1b11c8:	e5901000 	ldr	r1, [r0]
        1b11cc:	e3310000 	teq	r1, #0	; 0x0
        1b11d0:	0a00002a 	beq	1b1280 <LOTransactionHandler::EndTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0xdc>
        1b11d4:	e5d40004 	ldrb	r0, [r4, #4]	; fField4
        1b11d8:	e3300000 	teq	r0, #0	; 0x0
        1b11dc:	0a000002 	beq	1b11ec <LOTransactionHandler::EndTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x48>
        1b11e0:	e5d40005 	ldrb	r0, [r4, #5]	; fField5
        1b11e4:	e3300000 	teq	r0, #0	; 0x0
        1b11e8:	0a00001d 	beq	1b1264 <LOTransactionHandler::EndTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0xc0>
        1b11ec:	e24dd01c 	sub	sp, sp, #28	; 0x1c
        1b11f0:	e1a0000d 	mov	r0, sp
        1b11f4:	eb68c7fa 	bl	1be31e4 <CListIterator::$__ct(CDynamicArray *)>
        1b11f8:	e1a0000d 	mov	r0, sp
        1b11fc:	eb68d87d 	bl	1be73f8 <CListIterator::$FirstItem(void)>
        1b1200:	e1a08000 	mov	r8, r0
        1b1204:	e1a0000d 	mov	r0, sp
        1b1208:	eb68e4da 	bl	1bea578 <CArrayIterator::$More(void)>
        1b120c:	e3300000 	teq	r0, #0	; 0x0
        1b1210:	0a00000f 	beq	1b1254 <LOTransactionHandler::EndTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0xb0>
        1b1214:	e3390000 	teq	r9, #0	; 0x0
        1b1218:	e1a01008 	mov	r1, r8
        1b121c:	e1a00005 	mov	r0, r5
        1b1220:	0a000001 	beq	1b122c <LOTransactionHandler::EndTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x88>
        1b1224:	eb075669 	bl	386bd0 <TStore::AddToCurrentTransaction(unsigned long)>
        1b1228:	ea000000 	b	1b1230 <LOTransactionHandler::EndTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x8c>
        1b122c:	eb075664 	bl	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        1b1230:	e1b07000 	movs	r7, r0
        1b1234:	1a000006 	bne	1b1254 <LOTransactionHandler::EndTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0xb0>
        1b1238:	e1a0000d 	mov	r0, sp
        1b123c:	eb68e8d7 	bl	1beb5a0 <CListIterator::$NextItem(void)>
        1b1240:	e1a08000 	mov	r8, r0
        1b1244:	e1a0000d 	mov	r0, sp
        1b1248:	eb68e4ca 	bl	1bea578 <CArrayIterator::$More(void)>
        1b124c:	e3300000 	teq	r0, #0	; 0x0
        1b1250:	1affffef 	bne	1b1214 <LOTransactionHandler::EndTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x70>
        1b1254:	e1a0000d 	mov	r0, sp
        1b1258:	e3a01000 	mov	r1, #0	; 0x0
        1b125c:	eb68cc01 	bl	1be4268 <CArrayIterator::$__dt(void)>
        1b1260:	e28dd01c 	add	sp, sp, #28	; 0x1c
        1b1264:	e5940000 	ldr	r0, [r4]
        1b1268:	e3300000 	teq	r0, #0	; 0x0
        1b126c:	0a000003 	beq	1b1280 <LOTransactionHandler::EndTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0xdc>
        1b1270:	e3a01001 	mov	r1, #1	; 0x1
        1b1274:	eb68cbf8 	bl	1be425c <CSortedList::$__dt(void)>
        1b1278:	e3a00000 	mov	r0, #0	; 0x0
        1b127c:	e5840000 	str	r0, [r4]
        1b1280:	e3a00000 	mov	r0, #0	; 0x0
        1b1284:	e5c40005 	strb	r0, [r4, #5]	; fField5
        1b1288:	e5d41004 	ldrb	r1, [r4, #4]	; fField4
        1b128c:	e3310000 	teq	r1, #0	; 0x0
        1b1290:	0a00000b 	beq	1b12c4 <LOTransactionHandler::EndTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x120>
        1b1294:	e5c40004 	strb	r0, [r4, #4]	; fField4
        1b1298:	e3370000 	teq	r7, #0	; 0x0
        1b129c:	1a000008 	bne	1b12c4 <LOTransactionHandler::EndTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x120>
        1b12a0:	e1a0300a 	mov	r3, sl
        1b12a4:	e92d0008 	stmdb	sp!, {r3}
        1b12a8:	e1a03006 	mov	r3, r6
        1b12ac:	e1a02005 	mov	r2, r5
        1b12b0:	e1a01009 	mov	r1, r9
        1b12b4:	e1a00004 	mov	r0, r4
        1b12b8:	eb659627 	bl	1b16b5c <LOTransactionHandler::$EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)>
        1b12bc:	e28dd004 	add	sp, sp, #4	; 0x4
        1b12c0:	e1a07000 	mov	r7, r0
        1b12c4:	e1a00007 	mov	r0, r7
        1b12c8:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)
 * Address: 001b12cc
 */
LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long) {
    /*
        1b12cc:	e1a0c00d 	mov	ip, sp
        1b12d0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
        1b12d4:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b12d8:	e1a06000 	mov	r6, r0
        1b12dc:	e1a04002 	mov	r4, r2
        1b12e0:	e1a05003 	mov	r5, r3
        1b12e4:	e20170ff 	and	r7, r1, #255	; 0xff
        1b12e8:	e59b8004 	ldr	r8, [fp, #4]	; fField4
        1b12ec:	e24dd014 	sub	sp, sp, #20	; 0x14
        1b12f0:	e1a0000d 	mov	r0, sp
        1b12f4:	eb64f933 	bl	1aef7c8 <PackageRoot::$__ct(void)>
        1b12f8:	e3a03014 	mov	r3, #20	; 0x14
        1b12fc:	e92d0008 	stmdb	sp!, {r3}
        1b1300:	e28d3004 	add	r3, sp, #4	; 0x4
        1b1304:	e1a01005 	mov	r1, r5
        1b1308:	e1a00004 	mov	r0, r4
        1b130c:	e3a02000 	mov	r2, #0	; 0x0
        1b1310:	eb65438a 	bl	1b02140 <TStore::$Read(unsigned long, long, char *, long)>
        1b1314:	e28dd004 	add	sp, sp, #4	; 0x4
        1b1318:	e3300000 	teq	r0, #0	; 0x0
        1b131c:	1a000033 	bne	1b13f0 <LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x124>
        1b1320:	e3380000 	teq	r8, #0	; 0x0
        1b1324:	059d8000 	ldreq	r8, [sp]
        1b1328:	e1a03008 	mov	r3, r8
        1b132c:	e1a02004 	mov	r2, r4
        1b1330:	e1a01007 	mov	r1, r7
        1b1334:	e1a00006 	mov	r0, r6
        1b1338:	eb659608 	bl	1b16b60 <LOTransactionHandler::$EndIndexTableTransaction(unsigned char, TStore *, unsigned long)>
        1b133c:	e3300000 	teq	r0, #0	; 0x0
        1b1340:	1a00002a 	bne	1b13f0 <LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x124>
        1b1344:	e3370000 	teq	r7, #0	; 0x0
        1b1348:	e1a01005 	mov	r1, r5
        1b134c:	e1a00004 	mov	r0, r4
        1b1350:	0a000013 	beq	1b13a4 <LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0xd8>
        1b1354:	eb07561d 	bl	386bd0 <TStore::AddToCurrentTransaction(unsigned long)>
        1b1358:	e3300000 	teq	r0, #0	; 0x0
        1b135c:	1a000023 	bne	1b13f0 <LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x124>
        1b1360:	e1a00004 	mov	r0, r4
        1b1364:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1b1368:	eb075618 	bl	386bd0 <TStore::AddToCurrentTransaction(unsigned long)>
        1b136c:	e3300000 	teq	r0, #0	; 0x0
        1b1370:	1a00001e 	bne	1b13f0 <LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x124>
        1b1374:	e59d0008 	ldr	r0, [sp, #8]
        1b1378:	e3300000 	teq	r0, #0	; 0x0
        1b137c:	0a000004 	beq	1b1394 <LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0xc8>
        1b1380:	e1a00004 	mov	r0, r4
        1b1384:	e59d1008 	ldr	r1, [sp, #8]
        1b1388:	eb075610 	bl	386bd0 <TStore::AddToCurrentTransaction(unsigned long)>
        1b138c:	e3300000 	teq	r0, #0	; 0x0
        1b1390:	1a000016 	bne	1b13f0 <LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x124>
        1b1394:	e1a00004 	mov	r0, r4
        1b1398:	e59d1000 	ldr	r1, [sp]
        1b139c:	eb07560b 	bl	386bd0 <TStore::AddToCurrentTransaction(unsigned long)>
        1b13a0:	ea000012 	b	1b13f0 <LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x124>
        1b13a4:	eb075606 	bl	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        1b13a8:	e3300000 	teq	r0, #0	; 0x0
        1b13ac:	1a00000f 	bne	1b13f0 <LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x124>
        1b13b0:	e1a00004 	mov	r0, r4
        1b13b4:	e59d1004 	ldr	r1, [sp, #4]	; fField4
        1b13b8:	eb075601 	bl	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        1b13bc:	e3300000 	teq	r0, #0	; 0x0
        1b13c0:	1a00000a 	bne	1b13f0 <LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x124>
        1b13c4:	e59d0008 	ldr	r0, [sp, #8]
        1b13c8:	e3300000 	teq	r0, #0	; 0x0
        1b13cc:	0a000004 	beq	1b13e4 <LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x118>
        1b13d0:	e1a00004 	mov	r0, r4
        1b13d4:	e59d1008 	ldr	r1, [sp, #8]
        1b13d8:	eb0755f9 	bl	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        1b13dc:	e3300000 	teq	r0, #0	; 0x0
        1b13e0:	1a000002 	bne	1b13f0 <LOTransactionHandler::EndAllObjectsTransaction(unsigned char, TStore *, unsigned long, unsigned long)+0x124>
        1b13e4:	e1a00004 	mov	r0, r4
        1b13e8:	e59d1000 	ldr	r1, [sp]
        1b13ec:	eb0755f4 	bl	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        1b13f0:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: LOTransactionHandler::EndIndexTableTransaction(unsigned char, TStore *, unsigned long)
 * Address: 001b13f4
 */
LOTransactionHandler::EndIndexTableTransaction(unsigned char, TStore *, unsigned long) {
    /*
        1b13f4:	e1a0c00d 	mov	ip, sp
        1b13f8:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
        1b13fc:	e24cb004 	sub	fp, ip, #4	; 0x4
        1b1400:	e1a04002 	mov	r4, r2
        1b1404:	e1a02003 	mov	r2, r3
        1b1408:	e20190ff 	and	r9, r1, #255	; 0xff
        1b140c:	e1a01004 	mov	r1, r4
        1b1410:	e3e03000 	mvn	r3, #0	; 0x0
        1b1414:	e3a00000 	mov	r0, #0	; 0x0
        1b1418:	eb62811c 	bl	1a51890 <TCachedReadStore::$__ct(TStore *, unsigned long, long)>
        1b141c:	e1b06000 	movs	r6, r0
        1b1420:	e3a05000 	mov	r5, #0	; 0x0
        1b1424:	0a000020 	beq	1b14ac <LOTransactionHandler::EndIndexTableTransaction(unsigned char, TStore *, unsigned long)+0xb8>
        1b1428:	e596040c 	ldr	r0, [r6, #1036]
        1b142c:	e1a08120 	mov	r8, r0, lsr #2
        1b1430:	e3a07000 	mov	r7, #0	; 0x0
        1b1434:	e3580000 	cmp	r8, #0	; 0x0
        1b1438:	da000017 	ble	1b149c <LOTransactionHandler::EndIndexTableTransaction(unsigned char, TStore *, unsigned long)+0xa8>
        1b143c:	e24dd004 	sub	sp, sp, #4	; 0x4
        1b1440:	e1a01107 	mov	r1, r7, lsl #2
        1b1444:	e1a0300d 	mov	r3, sp
        1b1448:	e1a00006 	mov	r0, r6
        1b144c:	e3a02004 	mov	r2, #4	; 0x4
        1b1450:	eb6274b3 	bl	1a4e724 <TCachedReadStore::$GetDataPtr(long, long, void **)>
        1b1454:	e1b05000 	movs	r5, r0
        1b1458:	1a000009 	bne	1b1484 <LOTransactionHandler::EndIndexTableTransaction(unsigned char, TStore *, unsigned long)+0x90>
        1b145c:	e3390000 	teq	r9, #0	; 0x0
        1b1460:	e59d0000 	ldr	r0, [sp]
        1b1464:	e5901000 	ldr	r1, [r0]
        1b1468:	e1a00004 	mov	r0, r4
        1b146c:	0a000001 	beq	1b1478 <LOTransactionHandler::EndIndexTableTransaction(unsigned char, TStore *, unsigned long)+0x84>
        1b1470:	eb0755d6 	bl	386bd0 <TStore::AddToCurrentTransaction(unsigned long)>
        1b1474:	ea000000 	b	1b147c <LOTransactionHandler::EndIndexTableTransaction(unsigned char, TStore *, unsigned long)+0x88>
        1b1478:	eb0755d1 	bl	386bc4 <TStore::SeparatelyAbort(unsigned long)>
        1b147c:	e1b05000 	movs	r5, r0
        1b1480:	0a000001 	beq	1b148c <LOTransactionHandler::EndIndexTableTransaction(unsigned char, TStore *, unsigned long)+0x98>
        1b1484:	e28dd004 	add	sp, sp, #4	; 0x4
        1b1488:	ea000003 	b	1b149c <LOTransactionHandler::EndIndexTableTransaction(unsigned char, TStore *, unsigned long)+0xa8>
        1b148c:	e28dd004 	add	sp, sp, #4	; 0x4
        1b1490:	e2877001 	add	r7, r7, #1	; 0x1
        1b1494:	e1570008 	cmp	r7, r8
        1b1498:	baffffe7 	blt	1b143c <LOTransactionHandler::EndIndexTableTransaction(unsigned char, TStore *, unsigned long)+0x48>
        1b149c:	e1b00006 	movs	r0, r6
        1b14a0:	13a01001 	movne	r1, #1	; 0x1
        1b14a4:	1b62749c 	blne	1a4e71c <TCachedReadStore::$__dt(void)>
        1b14a8:	ea000001 	b	1b14b4 <LOTransactionHandler::EndIndexTableTransaction(unsigned char, TStore *, unsigned long)+0xc0>
        1b14ac:	e3a050e9 	mov	r5, #233	; 0xe9
        1b14b0:	e2455b0a 	sub	r5, r5, #10240	; 0x2800
        1b14b4:	e1a00005 	mov	r0, r5
        1b14b8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

