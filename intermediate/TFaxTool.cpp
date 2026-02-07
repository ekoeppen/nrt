#include "include/TFaxTool.h"

/**
 * Symbol: TFaxTool::C2InitSubSystem(void)
 * Address: 000b1fa0
 */
TFaxTool::C2InitSubSystem(void) {
    /*
         b1fa0:	e3a01001 	mov	r1, #1	; 0x1
         b1fa4:	e5801820 	str	r1, [r0, #2080]	; fField2080
         b1fa8:	e3a01000 	mov	r1, #0	; 0x0
         b1fac:	e5a01828 	str	r1, [r0, #2088]!	; fField2088
         b1fb0:	e1a00001 	mov	r0, r1
         b1fb4:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxTool::C20StateUpdate(unsigned long)
 * Address: 000b1fb8
 */
TFaxTool::C20StateUpdate(unsigned long) {
    /*
         b1fb8:	e1a0c00d 	mov	ip, sp
         b1fbc:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         b1fc0:	e24cb004 	sub	fp, ip, #4	; 0x4
         b1fc4:	e1a05000 	mov	r5, r0
         b1fc8:	e24dd008 	sub	sp, sp, #8	; 0x8
         b1fcc:	e5900820 	ldr	r0, [r0, #2080]	; fField2080
         b1fd0:	e58d0004 	str	r0, [sp, #4]	; fField4
         b1fd4:	e3a0400d 	mov	r4, #13	; 0xd
         b1fd8:	e2444c56 	sub	r4, r4, #22016	; 0x5600
         b1fdc:	e5950820 	ldr	r0, [r5, #2080]	; fField2080
         b1fe0:	e3500041 	cmp	r0, #65	; 0x41
         b1fe4:	0a00005f 	beq	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b1fe8:	e3a06d89 	mov	r6, #8768	; 0x2240
         b1fec:	e2466902 	sub	r6, r6, #32768	; 0x8000
         b1ff0:	e3a08ee2 	mov	r8, #3616	; 0xe20
         b1ff4:	e2888901 	add	r8, r8, #16384	; 0x4000
         b1ff8:	ca00001d 	bgt	b2074 <TFaxTool::C20StateUpdate(unsigned long)+0xbc>
         b1ffc:	e3a07ea6 	mov	r7, #2656	; 0xa60
         b2000:	e2877a0e 	add	r7, r7, #57344	; 0xe000
         b2004:	e350003c 	cmp	r0, #60	; 0x3c
         b2008:	0a00005a 	beq	b2178 <TFaxTool::C20StateUpdate(unsigned long)+0x1c0>
         b200c:	ca00000f 	bgt	b2050 <TFaxTool::C20StateUpdate(unsigned long)+0x98>
         b2010:	e3500035 	cmp	r0, #53	; 0x35
         b2014:	0a0000c9 	beq	b2340 <TFaxTool::C20StateUpdate(unsigned long)+0x388>
         b2018:	ca000007 	bgt	b203c <TFaxTool::C20StateUpdate(unsigned long)+0x84>
         b201c:	e3300001 	teq	r0, #1	; 0x1
         b2020:	0a00002c 	beq	b20d8 <TFaxTool::C20StateUpdate(unsigned long)+0x120>
         b2024:	e3300034 	teq	r0, #52	; 0x34
         b2028:	1a00004e 	bne	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b202c:	e28d1004 	add	r1, sp, #4	; 0x4
         b2030:	e1a00005 	mov	r0, r5
         b2034:	eb65ab8a 	bl	1a1ce64 <TFaxTool::$C20TransCfgMdm(unsigned long &)>
         b2038:	ea00015d 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b203c:	e3300036 	teq	r0, #54	; 0x36
         b2040:	0a000040 	beq	b2148 <TFaxTool::C20StateUpdate(unsigned long)+0x190>
         b2044:	e3300037 	teq	r0, #55	; 0x37
         b2048:	0a0000c0 	beq	b2350 <TFaxTool::C20StateUpdate(unsigned long)+0x398>
         b204c:	ea000045 	b	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b2050:	e330003d 	teq	r0, #61	; 0x3d
         b2054:	0a00008f 	beq	b2298 <TFaxTool::C20StateUpdate(unsigned long)+0x2e0>
         b2058:	e330003e 	teq	r0, #62	; 0x3e
         b205c:	0a000079 	beq	b2248 <TFaxTool::C20StateUpdate(unsigned long)+0x290>
         b2060:	e330003f 	teq	r0, #63	; 0x3f
         b2064:	0a000066 	beq	b2204 <TFaxTool::C20StateUpdate(unsigned long)+0x24c>
         b2068:	e3300040 	teq	r0, #64	; 0x40
         b206c:	0a00008f 	beq	b22b0 <TFaxTool::C20StateUpdate(unsigned long)+0x2f8>
         b2070:	ea00003c 	b	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b2074:	e2400047 	sub	r0, r0, #71	; 0x47
         b2078:	e3a03e71 	mov	r3, #1808	; 0x710
         b207c:	e2833a02 	add	r3, r3, #8192	; 0x2000
         b2080:	e350000b 	cmp	r0, #11	; 0xb
         b2084:	908ff100 	addls	pc, pc, r0, lsl #2
         b2088:	ea000036 	b	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b208c:	ea0000d8 	b	b23f4 <TFaxTool::C20StateUpdate(unsigned long)+0x43c>
         b2090:	ea0000eb 	b	b2444 <TFaxTool::C20StateUpdate(unsigned long)+0x48c>
         b2094:	ea0000ef 	b	b2458 <TFaxTool::C20StateUpdate(unsigned long)+0x4a0>
         b2098:	ea000104 	b	b24b0 <TFaxTool::C20StateUpdate(unsigned long)+0x4f8>
         b209c:	ea000106 	b	b24bc <TFaxTool::C20StateUpdate(unsigned long)+0x504>
         b20a0:	ea000115 	b	b24fc <TFaxTool::C20StateUpdate(unsigned long)+0x544>
         b20a4:	ea00002f 	b	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b20a8:	ea00002e 	b	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b20ac:	ea00002d 	b	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b20b0:	ea00011c 	b	b2528 <TFaxTool::C20StateUpdate(unsigned long)+0x570>
         b20b4:	ea000127 	b	b2558 <TFaxTool::C20StateUpdate(unsigned long)+0x5a0>
         b20b8:	e3310014 	teq	r1, #20	; 0x14
         b20bc:	11a00005 	movne	r0, r5
         b20c0:	11a01004 	movne	r1, r4
         b20c4:	1a00013f 	bne	b25c8 <TFaxTool::C20StateUpdate(unsigned long)+0x610>
         b20c8:	e28d1004 	add	r1, sp, #4	; 0x4
         b20cc:	e1a00005 	mov	r0, r5
         b20d0:	eb65ab5b 	bl	1a1ce44 <TFaxTool::$C20FHS_OK_Rsp(unsigned long &)>
         b20d4:	ea000136 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b20d8:	e3a00000 	mov	r0, #0	; 0x0
         b20dc:	e3310001 	teq	r1, #1	; 0x1
         b20e0:	0a00000c 	beq	b2118 <TFaxTool::C20StateUpdate(unsigned long)+0x160>
         b20e4:	e3310002 	teq	r1, #2	; 0x2
         b20e8:	11a00005 	movne	r0, r5
         b20ec:	11a01004 	movne	r1, r4
         b20f0:	1a000012 	bne	b2140 <TFaxTool::C20StateUpdate(unsigned long)+0x188>
         b20f4:	e3a01035 	mov	r1, #53	; 0x35
         b20f8:	e58d1004 	str	r1, [sp, #4]	; fField4
         b20fc:	e1a0100d 	mov	r1, sp
         b2100:	e5850824 	str	r0, [r5, #2084]	; fField2084
         b2104:	e1a00005 	mov	r0, r5
         b2108:	eb65ab4c 	bl	1a1ce40 <TFaxTool::$C20ConfigModem(unsigned char *)>
         b210c:	e3300000 	teq	r0, #0	; 0x0
         b2110:	0a000127 	beq	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b2114:	ea000007 	b	b2138 <TFaxTool::C20StateUpdate(unsigned long)+0x180>
         b2118:	e3a01034 	mov	r1, #52	; 0x34
         b211c:	e58d1004 	str	r1, [sp, #4]	; fField4
         b2120:	e1a0100d 	mov	r1, sp
         b2124:	e5850824 	str	r0, [r5, #2084]	; fField2084
         b2128:	e1a00005 	mov	r0, r5
         b212c:	eb65ab43 	bl	1a1ce40 <TFaxTool::$C20ConfigModem(unsigned char *)>
         b2130:	e3300000 	teq	r0, #0	; 0x0
         b2134:	0a00011e 	beq	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b2138:	e1a00005 	mov	r0, r5
         b213c:	e1a01006 	mov	r1, r6
         b2140:	eb6c3bd2 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b2144:	ea00011a 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b2148:	e3310003 	teq	r1, #3	; 0x3
         b214c:	03a0003c 	moveq	r0, #60	; 0x3c
         b2150:	058d0004 	streq	r0, [sp, #4]	; fField4
         b2154:	0a00001b 	beq	b21c8 <TFaxTool::C20StateUpdate(unsigned long)+0x210>
         b2158:	e3310004 	teq	r1, #4	; 0x4
         b215c:	1a000001 	bne	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b2160:	e3a00001 	mov	r0, #1	; 0x1
         b2164:	ea0000c5 	b	b2480 <TFaxTool::C20StateUpdate(unsigned long)+0x4c8>
         b2168:	e28d1004 	add	r1, sp, #4	; 0x4
         b216c:	e1a00005 	mov	r0, r5
         b2170:	e1a02004 	mov	r2, r4
         b2174:	ea000020 	b	b21fc <TFaxTool::C20StateUpdate(unsigned long)+0x244>
         b2178:	e351003c 	cmp	r1, #60	; 0x3c
         b217c:	0a000011 	beq	b21c8 <TFaxTool::C20StateUpdate(unsigned long)+0x210>
         b2180:	ca00000a 	bgt	b21b0 <TFaxTool::C20StateUpdate(unsigned long)+0x1f8>
         b2184:	e2410014 	sub	r0, r1, #20	; 0x14
         b2188:	e3500006 	cmp	r0, #6	; 0x6
         b218c:	908ff100 	addls	pc, pc, r0, lsl #2
         b2190:	ea000014 	b	b21e8 <TFaxTool::C20StateUpdate(unsigned long)+0x230>
         b2194:	ea00000f 	b	b21d8 <TFaxTool::C20StateUpdate(unsigned long)+0x220>
         b2198:	ea000012 	b	b21e8 <TFaxTool::C20StateUpdate(unsigned long)+0x230>
         b219c:	ea000011 	b	b21e8 <TFaxTool::C20StateUpdate(unsigned long)+0x230>
         b21a0:	eaffffee 	b	b2160 <TFaxTool::C20StateUpdate(unsigned long)+0x1a8>
         b21a4:	eaffffed 	b	b2160 <TFaxTool::C20StateUpdate(unsigned long)+0x1a8>
         b21a8:	eaffffec 	b	b2160 <TFaxTool::C20StateUpdate(unsigned long)+0x1a8>
         b21ac:	eaffffeb 	b	b2160 <TFaxTool::C20StateUpdate(unsigned long)+0x1a8>
         b21b0:	e331003f 	teq	r1, #63	; 0x3f
         b21b4:	0a0000dd 	beq	b2530 <TFaxTool::C20StateUpdate(unsigned long)+0x578>
         b21b8:	e3310041 	teq	r1, #65	; 0x41
         b21bc:	13310045 	teqne	r1, #69	; 0x45
         b21c0:	13310048 	teqne	r1, #72	; 0x48
         b21c4:	1a000007 	bne	b21e8 <TFaxTool::C20StateUpdate(unsigned long)+0x230>
         b21c8:	e28d2004 	add	r2, sp, #4	; 0x4
         b21cc:	e1a00005 	mov	r0, r5
         b21d0:	e1a01007 	mov	r1, r7
         b21d4:	ea0000e9 	b	b2580 <TFaxTool::C20StateUpdate(unsigned long)+0x5c8>
         b21d8:	e28d1004 	add	r1, sp, #4	; 0x4
         b21dc:	e1a00005 	mov	r0, r5
         b21e0:	eb65ab20 	bl	1a1ce68 <TFaxTool::$C20TransFDT_Cmd(unsigned long &)>
         b21e4:	ea0000f2 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b21e8:	e3310020 	teq	r1, #32	; 0x20
         b21ec:	1a0000d7 	bne	b2550 <TFaxTool::C20StateUpdate(unsigned long)+0x598>
         b21f0:	ea0000d4 	b	b2548 <TFaxTool::C20StateUpdate(unsigned long)+0x590>
         b21f4:	e28d1004 	add	r1, sp, #4	; 0x4
         b21f8:	e1a00005 	mov	r0, r5
         b21fc:	eb65ab0e 	bl	1a1ce3c <TFaxTool::$C20AbortSession(unsigned long &, long)>
         b2200:	ea0000eb 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b2204:	e3310005 	teq	r1, #5	; 0x5
         b2208:	03a0003e 	moveq	r0, #62	; 0x3e
         b220c:	0a00009b 	beq	b2480 <TFaxTool::C20StateUpdate(unsigned long)+0x4c8>
         b2210:	e3310015 	teq	r1, #21	; 0x15
         b2214:	03a0003d 	moveq	r0, #61	; 0x3d
         b2218:	0a000098 	beq	b2480 <TFaxTool::C20StateUpdate(unsigned long)+0x4c8>
         b221c:	e331003f 	teq	r1, #63	; 0x3f
         b2220:	0a0000c2 	beq	b2530 <TFaxTool::C20StateUpdate(unsigned long)+0x578>
         b2224:	e3310040 	teq	r1, #64	; 0x40
         b2228:	1a000003 	bne	b223c <TFaxTool::C20StateUpdate(unsigned long)+0x284>
         b222c:	e5950018 	ldr	r0, [r5, #24]	; fField24
         b2230:	e3100001 	tst	r0, #1	; 0x1
         b2234:	0affffe3 	beq	b21c8 <TFaxTool::C20StateUpdate(unsigned long)+0x210>
         b2238:	ea00000b 	b	b226c <TFaxTool::C20StateUpdate(unsigned long)+0x2b4>
         b223c:	e3310020 	teq	r1, #32	; 0x20
         b2240:	1a0000c2 	bne	b2550 <TFaxTool::C20StateUpdate(unsigned long)+0x598>
         b2244:	ea0000bf 	b	b2548 <TFaxTool::C20StateUpdate(unsigned long)+0x590>
         b2248:	e3310015 	teq	r1, #21	; 0x15
         b224c:	0a000013 	beq	b22a0 <TFaxTool::C20StateUpdate(unsigned long)+0x2e8>
         b2250:	e331003f 	teq	r1, #63	; 0x3f
         b2254:	0a0000b5 	beq	b2530 <TFaxTool::C20StateUpdate(unsigned long)+0x578>
         b2258:	e3310040 	teq	r1, #64	; 0x40
         b225c:	1a00000a 	bne	b228c <TFaxTool::C20StateUpdate(unsigned long)+0x2d4>
         b2260:	e5950018 	ldr	r0, [r5, #24]	; fField24
         b2264:	e3100001 	tst	r0, #1	; 0x1
         b2268:	0affffd6 	beq	b21c8 <TFaxTool::C20StateUpdate(unsigned long)+0x210>
         b226c:	e1a00005 	mov	r0, r5
         b2270:	eb65af0d 	bl	1a1deac <TFaxTool::$C2PhaseBProcessOptions(void)>
         b2274:	e1a00005 	mov	r0, r5
         b2278:	e3a01000 	mov	r1, #0	; 0x0
         b227c:	e5952000 	ldr	r2, [r5]
         b2280:	e1a0e00f 	mov	lr, pc
         b2284:	e282f054 	add	pc, r2, #84	; 0x54
         b2288:	eaffffce 	b	b21c8 <TFaxTool::C20StateUpdate(unsigned long)+0x210>
         b228c:	e3310020 	teq	r1, #32	; 0x20
         b2290:	1a0000ae 	bne	b2550 <TFaxTool::C20StateUpdate(unsigned long)+0x598>
         b2294:	ea0000ab 	b	b2548 <TFaxTool::C20StateUpdate(unsigned long)+0x590>
         b2298:	e3310005 	teq	r1, #5	; 0x5
         b229c:	1affffb1 	bne	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b22a0:	e28d1004 	add	r1, sp, #4	; 0x4
         b22a4:	e1a00005 	mov	r0, r5
         b22a8:	eb65aaef 	bl	1a1ce6c <TFaxTool::$C20TransFDT_Rsp(unsigned long &)>
         b22ac:	ea0000c0 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b22b0:	e3510009 	cmp	r1, #9	; 0x9
         b22b4:	0a000019 	beq	b2320 <TFaxTool::C20StateUpdate(unsigned long)+0x368>
         b22b8:	ca00000d 	bgt	b22f4 <TFaxTool::C20StateUpdate(unsigned long)+0x33c>
         b22bc:	e3310006 	teq	r1, #6	; 0x6
         b22c0:	0a000013 	beq	b2314 <TFaxTool::C20StateUpdate(unsigned long)+0x35c>
         b22c4:	e3310007 	teq	r1, #7	; 0x7
         b22c8:	028d2004 	addeq	r2, sp, #4	; 0x4
         b22cc:	01a00005 	moveq	r0, r5
         b22d0:	03a01fa6 	moveq	r1, #664	; 0x298
         b22d4:	02811b0e 	addeq	r1, r1, #14336	; 0x3800
         b22d8:	0a0000a8 	beq	b2580 <TFaxTool::C20StateUpdate(unsigned long)+0x5c8>
         b22dc:	e3310008 	teq	r1, #8	; 0x8
         b22e0:	1affffa0 	bne	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b22e4:	e28d1004 	add	r1, sp, #4	; 0x4
         b22e8:	e1a00005 	mov	r0, r5
         b22ec:	eb65aadf 	bl	1a1ce70 <TFaxTool::$C20TransPhaseCSendEOM(unsigned long &)>
         b22f0:	ea0000af 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b22f4:	e3310014 	teq	r1, #20	; 0x14
         b22f8:	03a01000 	moveq	r1, #0	; 0x0
         b22fc:	0a00000b 	beq	b2330 <TFaxTool::C20StateUpdate(unsigned long)+0x378>
         b2300:	e3310018 	teq	r1, #24	; 0x18
         b2304:	0a000008 	beq	b232c <TFaxTool::C20StateUpdate(unsigned long)+0x374>
         b2308:	e331003f 	teq	r1, #63	; 0x3f
         b230c:	1affff95 	bne	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b2310:	ea000086 	b	b2530 <TFaxTool::C20StateUpdate(unsigned long)+0x578>
         b2314:	e1a00005 	mov	r0, r5
         b2318:	eb657528 	bl	1a0f7c0 <TFaxTool::$DoEndPage(void)>
         b231c:	ea0000a4 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b2320:	e1a00005 	mov	r0, r5
         b2324:	eb65aef4 	bl	1a1defc <TFaxTool::$SendEOMCont(void)>
         b2328:	ea0000a1 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b232c:	e59f1008 	ldr	r1, [pc, #8]	; b233c <TFaxTool::C20StateUpdate(unsigned long)+0x384>
         b2330:	e1a00005 	mov	r0, r5
         b2334:	eb65cff1 	bl	1a26300 <TFaxTool::$EndPageComplete(long)>
         b2338:	eaffffa6 	b	b21d8 <TFaxTool::C20StateUpdate(unsigned long)+0x220>
         b233c:	ffffaa0b 	swinv	0x00ffaa0b
         b2340:	e28d1004 	add	r1, sp, #4	; 0x4
         b2344:	e1a00005 	mov	r0, r5
         b2348:	eb65aac0 	bl	1a1ce50 <TFaxTool::$C20RecvCfgMdm(unsigned long &)>
         b234c:	ea000098 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b2350:	e351003f 	cmp	r1, #63	; 0x3f
         b2354:	0a000075 	beq	b2530 <TFaxTool::C20StateUpdate(unsigned long)+0x578>
         b2358:	ca000008 	bgt	b2380 <TFaxTool::C20StateUpdate(unsigned long)+0x3c8>
         b235c:	e3310003 	teq	r1, #3	; 0x3
         b2360:	0affff98 	beq	b21c8 <TFaxTool::C20StateUpdate(unsigned long)+0x210>
         b2364:	e3310004 	teq	r1, #4	; 0x4
         b2368:	0affff7c 	beq	b2160 <TFaxTool::C20StateUpdate(unsigned long)+0x1a8>
         b236c:	e3310014 	teq	r1, #20	; 0x14
         b2370:	0a000013 	beq	b23c4 <TFaxTool::C20StateUpdate(unsigned long)+0x40c>
         b2374:	e331003c 	teq	r1, #60	; 0x3c
         b2378:	1a00001a 	bne	b23e8 <TFaxTool::C20StateUpdate(unsigned long)+0x430>
         b237c:	ea000004 	b	b2394 <TFaxTool::C20StateUpdate(unsigned long)+0x3dc>
         b2380:	e3310040 	teq	r1, #64	; 0x40
         b2384:	0a000006 	beq	b23a4 <TFaxTool::C20StateUpdate(unsigned long)+0x3ec>
         b2388:	e3310044 	teq	r1, #68	; 0x44
         b238c:	13310048 	teqne	r1, #72	; 0x48
         b2390:	1a000014 	bne	b23e8 <TFaxTool::C20StateUpdate(unsigned long)+0x430>
         b2394:	e28d2004 	add	r2, sp, #4	; 0x4
         b2398:	e1a00005 	mov	r0, r5
         b239c:	e1a01008 	mov	r1, r8
         b23a0:	ea000076 	b	b2580 <TFaxTool::C20StateUpdate(unsigned long)+0x5c8>
         b23a4:	e5950018 	ldr	r0, [r5, #24]	; fField24
         b23a8:	e3100001 	tst	r0, #1	; 0x1
         b23ac:	0afffff8 	beq	b2394 <TFaxTool::C20StateUpdate(unsigned long)+0x3dc>
         b23b0:	e1a00005 	mov	r0, r5
         b23b4:	eb65aec5 	bl	1a1ded0 <TFaxTool::$C2SetSessionParameters(void)>
         b23b8:	e1a00005 	mov	r0, r5
         b23bc:	eb65aeba 	bl	1a1deac <TFaxTool::$C2PhaseBProcessOptions(void)>
         b23c0:	eafffff3 	b	b2394 <TFaxTool::C20StateUpdate(unsigned long)+0x3dc>
         b23c4:	e285203c 	add	r2, r5, #60	; 0x3c
         b23c8:	e2822b02 	add	r2, r2, #2048	; 0x800
         b23cc:	e2851034 	add	r1, r5, #52	; 0x34
         b23d0:	e2811b02 	add	r1, r1, #2048	; 0x800
         b23d4:	e1a00005 	mov	r0, r5
         b23d8:	eb65aec4 	bl	1a1def0 <TFaxTool::$C2ValidateDCS(FaxClass2FDIS &, FaxClass2FDIS &)>
         b23dc:	e3300000 	teq	r0, #0	; 0x0
         b23e0:	0affff60 	beq	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b23e4:	ea00004b 	b	b2518 <TFaxTool::C20StateUpdate(unsigned long)+0x560>
         b23e8:	e3310020 	teq	r1, #32	; 0x20
         b23ec:	1a000057 	bne	b2550 <TFaxTool::C20StateUpdate(unsigned long)+0x598>
         b23f0:	ea000054 	b	b2548 <TFaxTool::C20StateUpdate(unsigned long)+0x590>
         b23f4:	e3510040 	cmp	r1, #64	; 0x40
         b23f8:	0affffe5 	beq	b2394 <TFaxTool::C20StateUpdate(unsigned long)+0x3dc>
         b23fc:	ca000006 	bgt	b241c <TFaxTool::C20StateUpdate(unsigned long)+0x464>
         b2400:	e3310015 	teq	r1, #21	; 0x15
         b2404:	0a00000a 	beq	b2434 <TFaxTool::C20StateUpdate(unsigned long)+0x47c>
         b2408:	e331003c 	teq	r1, #60	; 0x3c
         b240c:	0affffe0 	beq	b2394 <TFaxTool::C20StateUpdate(unsigned long)+0x3dc>
         b2410:	e331003f 	teq	r1, #63	; 0x3f
         b2414:	0a000045 	beq	b2530 <TFaxTool::C20StateUpdate(unsigned long)+0x578>
         b2418:	ea000002 	b	b2428 <TFaxTool::C20StateUpdate(unsigned long)+0x470>
         b241c:	e3310044 	teq	r1, #68	; 0x44
         b2420:	13310048 	teqne	r1, #72	; 0x48
         b2424:	0affffda 	beq	b2394 <TFaxTool::C20StateUpdate(unsigned long)+0x3dc>
         b2428:	e3310020 	teq	r1, #32	; 0x20
         b242c:	1a000047 	bne	b2550 <TFaxTool::C20StateUpdate(unsigned long)+0x598>
         b2430:	ea000044 	b	b2548 <TFaxTool::C20StateUpdate(unsigned long)+0x590>
         b2434:	e28d1004 	add	r1, sp, #4	; 0x4
         b2438:	e1a00005 	mov	r0, r5
         b243c:	eb65aa86 	bl	1a1ce5c <TFaxTool::$C20RecvFDR_Rsp(unsigned long &)>
         b2440:	ea00005b 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b2444:	e3310007 	teq	r1, #7	; 0x7
         b2448:	1affff46 	bne	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b244c:	e3a00049 	mov	r0, #73	; 0x49
         b2450:	e58d0004 	str	r0, [sp, #4]	; fField4
         b2454:	ea00000e 	b	b2494 <TFaxTool::C20StateUpdate(unsigned long)+0x4dc>
         b2458:	e351003f 	cmp	r1, #63	; 0x3f
         b245c:	0a000033 	beq	b2530 <TFaxTool::C20StateUpdate(unsigned long)+0x578>
         b2460:	ca000008 	bgt	b2488 <TFaxTool::C20StateUpdate(unsigned long)+0x4d0>
         b2464:	e3310006 	teq	r1, #6	; 0x6
         b2468:	03a0004b 	moveq	r0, #75	; 0x4b
         b246c:	0a000003 	beq	b2480 <TFaxTool::C20StateUpdate(unsigned long)+0x4c8>
         b2470:	e3310014 	teq	r1, #20	; 0x14
         b2474:	13310018 	teqne	r1, #24	; 0x18
         b2478:	1a000009 	bne	b24a4 <TFaxTool::C20StateUpdate(unsigned long)+0x4ec>
         b247c:	e3a0004a 	mov	r0, #74	; 0x4a
         b2480:	e58d0004 	str	r0, [sp, #4]	; fField4
         b2484:	ea00004a 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b2488:	e331004a 	teq	r1, #74	; 0x4a
         b248c:	1331004b 	teqne	r1, #75	; 0x4b
         b2490:	1a000003 	bne	b24a4 <TFaxTool::C20StateUpdate(unsigned long)+0x4ec>
         b2494:	e28d2004 	add	r2, sp, #4	; 0x4
         b2498:	e1a00005 	mov	r0, r5
         b249c:	e1a01003 	mov	r1, r3
         b24a0:	ea000036 	b	b2580 <TFaxTool::C20StateUpdate(unsigned long)+0x5c8>
         b24a4:	e3310020 	teq	r1, #32	; 0x20
         b24a8:	1a000028 	bne	b2550 <TFaxTool::C20StateUpdate(unsigned long)+0x598>
         b24ac:	ea000025 	b	b2548 <TFaxTool::C20StateUpdate(unsigned long)+0x590>
         b24b0:	e3310006 	teq	r1, #6	; 0x6
         b24b4:	1affff2b 	bne	b2168 <TFaxTool::C20StateUpdate(unsigned long)+0x1b0>
         b24b8:	ea000005 	b	b24d4 <TFaxTool::C20StateUpdate(unsigned long)+0x51c>
         b24bc:	e351003f 	cmp	r1, #63	; 0x3f
         b24c0:	0a00001a 	beq	b2530 <TFaxTool::C20StateUpdate(unsigned long)+0x578>
         b24c4:	ca000006 	bgt	b24e4 <TFaxTool::C20StateUpdate(unsigned long)+0x52c>
         b24c8:	e3310014 	teq	r1, #20	; 0x14
         b24cc:	13310018 	teqne	r1, #24	; 0x18
         b24d0:	1a000006 	bne	b24f0 <TFaxTool::C20StateUpdate(unsigned long)+0x538>
         b24d4:	e28d1004 	add	r1, sp, #4	; 0x4
         b24d8:	e1a00005 	mov	r0, r5
         b24dc:	eb65aa5c 	bl	1a1ce54 <TFaxTool::$C20RecvCopyQualityCheck(unsigned long &)>
         b24e0:	ea000033 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b24e4:	e331004a 	teq	r1, #74	; 0x4a
         b24e8:	1331004b 	teqne	r1, #75	; 0x4b
         b24ec:	0affffe8 	beq	b2494 <TFaxTool::C20StateUpdate(unsigned long)+0x4dc>
         b24f0:	e3310020 	teq	r1, #32	; 0x20
         b24f4:	1a000015 	bne	b2550 <TFaxTool::C20StateUpdate(unsigned long)+0x598>
         b24f8:	ea000012 	b	b2548 <TFaxTool::C20StateUpdate(unsigned long)+0x590>
         b24fc:	e3310014 	teq	r1, #20	; 0x14
         b2500:	0a000004 	beq	b2518 <TFaxTool::C20StateUpdate(unsigned long)+0x560>
         b2504:	e331003f 	teq	r1, #63	; 0x3f
         b2508:	0a000008 	beq	b2530 <TFaxTool::C20StateUpdate(unsigned long)+0x578>
         b250c:	e3310020 	teq	r1, #32	; 0x20
         b2510:	1a00000e 	bne	b2550 <TFaxTool::C20StateUpdate(unsigned long)+0x598>
         b2514:	ea00000b 	b	b2548 <TFaxTool::C20StateUpdate(unsigned long)+0x590>
         b2518:	e28d1004 	add	r1, sp, #4	; 0x4
         b251c:	e1a00005 	mov	r0, r5
         b2520:	eb65aa4c 	bl	1a1ce58 <TFaxTool::$C20RecvFDR_Cmd(unsigned long &)>
         b2524:	ea000022 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b2528:	e331003f 	teq	r1, #63	; 0x3f
         b252c:	1a000003 	bne	b2540 <TFaxTool::C20StateUpdate(unsigned long)+0x588>
         b2530:	e28d1004 	add	r1, sp, #4	; 0x4
         b2534:	e1a00005 	mov	r0, r5
         b2538:	eb65aa42 	bl	1a1ce48 <TFaxTool::$C20FHS_Rsp(unsigned long &)>
         b253c:	ea00001c 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b2540:	e3310020 	teq	r1, #32	; 0x20
         b2544:	1a000001 	bne	b2550 <TFaxTool::C20StateUpdate(unsigned long)+0x598>
         b2548:	e1a02006 	mov	r2, r6
         b254c:	eaffff28 	b	b21f4 <TFaxTool::C20StateUpdate(unsigned long)+0x23c>
         b2550:	e1a02004 	mov	r2, r4
         b2554:	eaffff26 	b	b21f4 <TFaxTool::C20StateUpdate(unsigned long)+0x23c>
         b2558:	e3310014 	teq	r1, #20	; 0x14
         b255c:	0a000009 	beq	b2588 <TFaxTool::C20StateUpdate(unsigned long)+0x5d0>
         b2560:	e3310020 	teq	r1, #32	; 0x20
         b2564:	0a000015 	beq	b25c0 <TFaxTool::C20StateUpdate(unsigned long)+0x608>
         b2568:	e331003f 	teq	r1, #63	; 0x3f
         b256c:	e28d2004 	add	r2, sp, #4	; 0x4
         b2570:	e1a00005 	mov	r0, r5
         b2574:	03a01efa 	moveq	r1, #4000	; 0xfa0
         b2578:	13a01fee 	movne	r1, #952	; 0x3b8
         b257c:	12811b02 	addne	r1, r1, #2048	; 0x800
         b2580:	eb65aa31 	bl	1a1ce4c <TFaxTool::$C20GetModemRsp(unsigned long, unsigned long &)>
         b2584:	ea00000a 	b	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b2588:	e3a00001 	mov	r0, #1	; 0x1
         b258c:	e58d0004 	str	r0, [sp, #4]	; fField4
         b2590:	e1a00005 	mov	r0, r5
         b2594:	e1a01004 	mov	r1, r4
         b2598:	eb6c3abc 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b259c:	e3300000 	teq	r0, #0	; 0x0
         b25a0:	0a000003 	beq	b25b4 <TFaxTool::C20StateUpdate(unsigned long)+0x5fc>
         b25a4:	e1a00005 	mov	r0, r5
         b25a8:	e5951000 	ldr	r1, [r5]
         b25ac:	e1a0e00f 	mov	lr, pc
         b25b0:	e281ff46 	add	pc, r1, #280	; 0x118
         b25b4:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         b25b8:	e5a50820 	str	r0, [r5, #2080]!	; fField2080
         b25bc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         b25c0:	e1a00005 	mov	r0, r5
         b25c4:	e1a01006 	mov	r1, r6
         b25c8:	eb6c3ab0 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b25cc:	eafffee3 	b	b2160 <TFaxTool::C20StateUpdate(unsigned long)+0x1a8>
    */
}

/**
 * Symbol: TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)
 * Address: 000b25d0
 */
TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *) {
    /*
         b25d0:	e1a0c00d 	mov	ip, sp
         b25d4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b25d8:	e24cb004 	sub	fp, ip, #4	; 0x4
         b25dc:	e1a04000 	mov	r4, r0
         b25e0:	e3a05000 	mov	r5, #0	; 0x0
         b25e4:	e5900828 	ldr	r0, [r0, #2088]	; fField2088
         b25e8:	e3a06000 	mov	r6, #0	; 0x0
         b25ec:	e3300000 	teq	r0, #0	; 0x0
         b25f0:	0a000010 	beq	b2638 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x68>
         b25f4:	e3300001 	teq	r0, #1	; 0x1
         b25f8:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         b25fc:	e5b10008 	ldr	r0, [r1, #8]!
         b2600:	e3300000 	teq	r0, #0	; 0x0
         b2604:	13a0500a 	movne	r5, #10	; 0xa
         b2608:	03a05009 	moveq	r5, #9	; 0x9
         b260c:	e5846828 	str	r6, [r4, #2088]	; fField2088
         b2610:	e3350000 	teq	r5, #0	; 0x0
         b2614:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         b2618:	e5940818 	ldr	r0, [r4, #2072]	; fField2072
         b261c:	e3300004 	teq	r0, #4	; 0x4
         b2620:	e1a01005 	mov	r1, r5
         b2624:	e1a00004 	mov	r0, r4
         b2628:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         b262c:	1a65aa0b 	bne	1a1ce60 <TFaxTool::$C20StateUpdate(unsigned long)>
         b2630:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         b2634:	0a65ae26 	beq	1a1ded4 <TFaxTool::$C2StateUpdate(unsigned long)>
         b2638:	e5910008 	ldr	r0, [r1, #8]
         b263c:	e3300000 	teq	r0, #0	; 0x0
         b2640:	0a000004 	beq	b2658 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x88>
         b2644:	e280cc5d 	add	ip, r0, #23808	; 0x5d00
         b2648:	e37c00c0 	cmn	ip, #192	; 0xc0
         b264c:	03a05020 	moveq	r5, #32	; 0x20
         b2650:	0afffff0 	beq	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2654:	ea000045 	b	b2770 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x1a0>
         b2658:	e5b1c010 	ldr	ip, [r1, #16]!	; fField16
         b265c:	e2841e5b 	add	r1, r4, #1456	; 0x5b0
         b2660:	e2840ff6 	add	r0, r4, #984	; 0x3d8
         b2664:	e2800b01 	add	r0, r0, #1024	; 0x400
         b2668:	e2842034 	add	r2, r4, #52	; 0x34
         b266c:	e2822b02 	add	r2, r2, #2048	; 0x800
         b2670:	e2843048 	add	r3, r4, #72	; 0x48
         b2674:	e2833b02 	add	r3, r3, #2048	; 0x800
         b2678:	e35c003b 	cmp	ip, #59	; 0x3b
         b267c:	908ff10c 	addls	pc, pc, ip, lsl #2
         b2680:	eaffffe2 	b	b2610 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x40>
         b2684:	ea00003b 	b	b2778 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x1a8>
         b2688:	ea00003c 	b	b2780 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x1b0>
         b268c:	ea00003d 	b	b2788 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x1b8>
         b2690:	ea00003e 	b	b2790 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x1c0>
         b2694:	ea00003f 	b	b2798 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x1c8>
         b2698:	eaffffdc 	b	b2610 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x40>
         b269c:	ea00003f 	b	b27a0 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x1d0>
         b26a0:	ea000040 	b	b27a8 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x1d8>
         b26a4:	ea000041 	b	b27b0 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x1e0>
         b26a8:	eaffffd8 	b	b2610 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x40>
         b26ac:	eaffffd7 	b	b2610 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x40>
         b26b0:	eaffffd6 	b	b2610 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x40>
         b26b4:	eaffffd5 	b	b2610 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x40>
         b26b8:	ea00003e 	b	b27b8 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x1e8>
         b26bc:	eaffffd3 	b	b2610 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x40>
         b26c0:	ea00003e 	b	b27c0 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x1f0>
         b26c4:	ea00003f 	b	b27c8 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x1f8>
         b26c8:	ea000040 	b	b27d0 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x200>
         b26cc:	ea000043 	b	b27e0 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x210>
         b26d0:	ea000040 	b	b27d8 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x208>
         b26d4:	ea000043 	b	b27e8 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x218>
         b26d8:	ea000044 	b	b27f0 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x220>
         b26dc:	ea000045 	b	b27f8 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x228>
         b26e0:	ea000046 	b	b2800 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x230>
         b26e4:	ea000047 	b	b2808 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x238>
         b26e8:	ea000048 	b	b2810 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x240>
         b26ec:	ea000049 	b	b2818 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x248>
         b26f0:	ea00004a 	b	b2820 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x250>
         b26f4:	ea00004b 	b	b2828 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x258>
         b26f8:	eaffffc4 	b	b2610 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x40>
         b26fc:	eaffffc3 	b	b2610 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x40>
         b2700:	ea00004a 	b	b2830 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x260>
         b2704:	ea00004b 	b	b2838 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x268>
         b2708:	ea00004c 	b	b2840 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x270>
         b270c:	ea00004d 	b	b2848 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x278>
         b2710:	ea00004e 	b	b2850 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x280>
         b2714:	ea00004f 	b	b2858 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x288>
         b2718:	ea000050 	b	b2860 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x290>
         b271c:	eaffffbb 	b	b2610 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x40>
         b2720:	ea000050 	b	b2868 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x298>
         b2724:	ea000051 	b	b2870 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x2a0>
         b2728:	ea000052 	b	b2878 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x2a8>
         b272c:	ea000053 	b	b2880 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x2b0>
         b2730:	ea000054 	b	b2888 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x2b8>
         b2734:	ea000055 	b	b2890 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x2c0>
         b2738:	ea000058 	b	b28a0 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x2d0>
         b273c:	ea000059 	b	b28a8 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x2d8>
         b2740:	ea00005a 	b	b28b0 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x2e0>
         b2744:	ea00005d 	b	b28c0 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x2f0>
         b2748:	ea00005e 	b	b28c8 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x2f8>
         b274c:	ea00005f 	b	b28d0 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x300>
         b2750:	ea000060 	b	b28d8 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x308>
         b2754:	ea000064 	b	b28ec <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x31c>
         b2758:	ea000065 	b	b28f4 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x324>
         b275c:	ea000066 	b	b28fc <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x32c>
         b2760:	ea000067 	b	b2904 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x334>
         b2764:	ea00006a 	b	b2914 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x344>
         b2768:	ea000072 	b	b2938 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x368>
         b276c:	ea000073 	b	b2940 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x370>
         b2770:	e3a0504e 	mov	r5, #78	; 0x4e
         b2774:	eaffffa7 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2778:	e3a05014 	mov	r5, #20	; 0x14
         b277c:	eaffffa5 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2780:	e3a05015 	mov	r5, #21	; 0x15
         b2784:	eaffffa3 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2788:	e3a05016 	mov	r5, #22	; 0x16
         b278c:	eaffffa1 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2790:	e3a05017 	mov	r5, #23	; 0x17
         b2794:	eaffff9f 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2798:	e3a05018 	mov	r5, #24	; 0x18
         b279c:	eaffff9d 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b27a0:	e3a05019 	mov	r5, #25	; 0x19
         b27a4:	eaffff9b 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b27a8:	e3a0501a 	mov	r5, #26	; 0x1a
         b27ac:	eaffff99 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b27b0:	e3a0501b 	mov	r5, #27	; 0x1b
         b27b4:	eaffff97 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b27b8:	e3a0501c 	mov	r5, #28	; 0x1c
         b27bc:	eaffff95 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b27c0:	e3a0501d 	mov	r5, #29	; 0x1d
         b27c4:	eaffff93 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b27c8:	e3a0501e 	mov	r5, #30	; 0x1e
         b27cc:	eaffff91 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b27d0:	e3a0501f 	mov	r5, #31	; 0x1f
         b27d4:	eaffff8f 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b27d8:	e3a05028 	mov	r5, #40	; 0x28
         b27dc:	eaffff8d 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b27e0:	e3a05029 	mov	r5, #41	; 0x29
         b27e4:	eaffff8b 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b27e8:	e3a0502a 	mov	r5, #42	; 0x2a
         b27ec:	eaffff89 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b27f0:	e3a0502b 	mov	r5, #43	; 0x2b
         b27f4:	ea000038 	b	b28dc <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x30c>
         b27f8:	e3a0502c 	mov	r5, #44	; 0x2c
         b27fc:	ea00002c 	b	b28b4 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x2e4>
         b2800:	e3a0502d 	mov	r5, #45	; 0x2d
         b2804:	eaffff83 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2808:	e3a0502e 	mov	r5, #46	; 0x2e
         b280c:	eaffff81 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2810:	e3a0502f 	mov	r5, #47	; 0x2f
         b2814:	ea00003b 	b	b2908 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x338>
         b2818:	e3a05030 	mov	r5, #48	; 0x30
         b281c:	ea00001c 	b	b2894 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x2c4>
         b2820:	e3a05031 	mov	r5, #49	; 0x31
         b2824:	eaffff7b 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2828:	e3a05032 	mov	r5, #50	; 0x32
         b282c:	eaffff79 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2830:	e3a05033 	mov	r5, #51	; 0x33
         b2834:	eaffff77 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2838:	e3a05034 	mov	r5, #52	; 0x34
         b283c:	eaffff75 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2840:	e3a05035 	mov	r5, #53	; 0x35
         b2844:	eaffff73 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2848:	e3a05036 	mov	r5, #54	; 0x36
         b284c:	eaffff71 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2850:	e3a05037 	mov	r5, #55	; 0x37
         b2854:	eaffff6f 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2858:	e3a05038 	mov	r5, #56	; 0x38
         b285c:	ea00002d 	b	b2918 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x348>
         b2860:	e3a05039 	mov	r5, #57	; 0x39
         b2864:	eaffff6b 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2868:	e3a0503a 	mov	r5, #58	; 0x3a
         b286c:	ea00001a 	b	b28dc <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x30c>
         b2870:	e3a0503b 	mov	r5, #59	; 0x3b
         b2874:	eaffff67 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2878:	e3a0503c 	mov	r5, #60	; 0x3c
         b287c:	eaffff65 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2880:	e3a0503d 	mov	r5, #61	; 0x3d
         b2884:	eaffff63 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2888:	e3a0503e 	mov	r5, #62	; 0x3e
         b288c:	eaffff61 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2890:	e3a0503f 	mov	r5, #63	; 0x3f
         b2894:	e5d405b0 	ldrb	r0, [r4, #1456]	; fField1456
         b2898:	e5c40845 	strb	r0, [r4, #2117]	; fField2117
         b289c:	eaffff5d 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b28a0:	e3a05040 	mov	r5, #64	; 0x40
         b28a4:	ea000002 	b	b28b4 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x2e4>
         b28a8:	e3a05041 	mov	r5, #65	; 0x41
         b28ac:	eaffff59 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b28b0:	e3a05042 	mov	r5, #66	; 0x42
         b28b4:	e8911008 	ldmia	r1, {r3, ip}
         b28b8:	e8821008 	stmia	r2, {r3, ip}
         b28bc:	eaffff55 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b28c0:	e3a05043 	mov	r5, #67	; 0x43
         b28c4:	eaffff53 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b28c8:	e3a05044 	mov	r5, #68	; 0x44
         b28cc:	ea000002 	b	b28dc <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x30c>
         b28d0:	e3a05045 	mov	r5, #69	; 0x45
         b28d4:	ea000000 	b	b28dc <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x30c>
         b28d8:	e3a05046 	mov	r5, #70	; 0x46
         b28dc:	e3a02015 	mov	r2, #21	; 0x15
         b28e0:	eb6c0c75 	bl	1bb5abc <$strncpy>
         b28e4:	e5c467ec 	strb	r6, [r4, #2028]	; fField2028
         b28e8:	eaffff4a 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b28ec:	e3a05047 	mov	r5, #71	; 0x47
         b28f0:	eaffff48 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b28f4:	e3a05048 	mov	r5, #72	; 0x48
         b28f8:	eaffff46 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b28fc:	e3a05049 	mov	r5, #73	; 0x49
         b2900:	eaffff44 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2904:	e3a0504a 	mov	r5, #74	; 0x4a
         b2908:	e5d405b0 	ldrb	r0, [r4, #1456]	; fField1456
         b290c:	e5c40844 	strb	r0, [r4, #2116]	; fField2116
         b2910:	eaffff40 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2914:	e3a0504b 	mov	r5, #75	; 0x4b
         b2918:	e1a00003 	mov	r0, r3
         b291c:	e8b11008 	ldmia	r1!, {r3, ip}
         b2920:	e8a01008 	stmia	r0!, {r3, ip}
         b2924:	e8b11008 	ldmia	r1!, {r3, ip}
         b2928:	e8a01008 	stmia	r0!, {r3, ip}
         b292c:	e8911008 	ldmia	r1, {r3, ip}
         b2930:	e8801008 	stmia	r0, {r3, ip}
         b2934:	eaffff37 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2938:	e3a0504c 	mov	r5, #76	; 0x4c
         b293c:	eaffff35 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
         b2940:	e3a0504d 	mov	r5, #77	; 0x4d
         b2944:	eaffff33 	b	b2618 <TFaxTool::C2ModemReqComplete(TClassOneModemCmdReply *)+0x48>
    */
}

/**
 * Symbol: TFaxTool::C20RecvFDR_Rsp(unsigned long &)
 * Address: 000b2948
 */
TFaxTool::C20RecvFDR_Rsp(unsigned long &) {
    /*
         b2948:	e1a0c00d 	mov	ip, sp
         b294c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b2950:	e24cb004 	sub	fp, ip, #4	; 0x4
         b2954:	e1a04000 	mov	r4, r0
         b2958:	e1a05001 	mov	r5, r1
         b295c:	eb65ce72 	bl	1a2632c <TFaxTool::$FreeReceiveBuffers(void)>
         b2960:	e1a00004 	mov	r0, r4
         b2964:	eb65c217 	bl	1a231c8 <TFaxTool::$AllocateReceiveBuffers(void)>
         b2968:	e3300000 	teq	r0, #0	; 0x0
         b296c:	1a000004 	bne	b2984 <TFaxTool::C20RecvFDR_Rsp(unsigned long &)+0x3c>
         b2970:	e1a00004 	mov	r0, r4
         b2974:	eb65a0ef 	bl	1a1ad38 <TFaxTool::$StartPhaseC(void)>
         b2978:	e3a00048 	mov	r0, #72	; 0x48
         b297c:	e5850000 	str	r0, [r5]
         b2980:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         b2984:	e1a01005 	mov	r1, r5
         b2988:	e1a00004 	mov	r0, r4
         b298c:	e3a0200d 	mov	r2, #13	; 0xd
         b2990:	e2422c56 	sub	r2, r2, #22016	; 0x5600
         b2994:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b2998:	ea65a927 	b	1a1ce3c <TFaxTool::$C20AbortSession(unsigned long &, long)>
    */
}

/**
 * Symbol: TFaxTool::C20AbortSession(unsigned long &, long)
 * Address: 000b299c
 */
TFaxTool::C20AbortSession(unsigned long &, long) {
    /*
         b299c:	e1a0c00d 	mov	ip, sp
         b29a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b29a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b29a8:	e1a04000 	mov	r4, r0
         b29ac:	e1a05001 	mov	r5, r1
         b29b0:	e3a00e71 	mov	r0, #1808	; 0x710
         b29b4:	e2800a02 	add	r0, r0, #8192	; 0x2000
         b29b8:	e5840528 	str	r0, [r4, #1320]	; fField1320
         b29bc:	e1a00004 	mov	r0, r4
         b29c0:	e3a0103e 	mov	r1, #62	; 0x3e
         b29c4:	e2811c01 	add	r1, r1, #256	; 0x100
         b29c8:	eb659055 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b29cc:	e3300000 	teq	r0, #0	; 0x0
         b29d0:	03a00051 	moveq	r0, #81	; 0x51
         b29d4:	05850000 	streq	r0, [r5]
         b29d8:	e1a00004 	mov	r0, r4
         b29dc:	e3a01d89 	mov	r1, #8768	; 0x2240
         b29e0:	e2411902 	sub	r1, r1, #32768	; 0x8000
         b29e4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b29e8:	ea6c39a8 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::C20ConfigModem(unsigned char *)
 * Address: 000b29ec
 */
TFaxTool::C20ConfigModem(unsigned char *) {
    /*
         b29ec:	e1a0c00d 	mov	ip, sp
         b29f0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b29f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b29f8:	e1a04000 	mov	r4, r0
         b29fc:	e3a00000 	mov	r0, #0	; 0x0
         b2a00:	e3a06000 	mov	r6, #0	; 0x0
         b2a04:	e5c16000 	strb	r6, [r1]
         b2a08:	e3a03030 	mov	r3, #48	; 0x30
         b2a0c:	e3a02d89 	mov	r2, #8768	; 0x2240
         b2a10:	e2422902 	sub	r2, r2, #32768	; 0x8000
         b2a14:	e594c824 	ldr	ip, [r4, #2084]	; fField2084
         b2a18:	e2845f4b 	add	r5, r4, #300	; 0x12c
         b2a1c:	e2855b01 	add	r5, r5, #1024	; 0x400
         b2a20:	e35c0008 	cmp	ip, #8	; 0x8
         b2a24:	908ff10c 	addls	pc, pc, ip, lsl #2
         b2a28:	ea000080 	b	b2c30 <TFaxTool::C20ConfigModem(unsigned char *)+0x244>
         b2a2c:	ea00000e 	b	b2a6c <TFaxTool::C20ConfigModem(unsigned char *)+0x80>
         b2a30:	ea00007e 	b	b2c30 <TFaxTool::C20ConfigModem(unsigned char *)+0x244>
         b2a34:	ea000014 	b	b2a8c <TFaxTool::C20ConfigModem(unsigned char *)+0xa0>
         b2a38:	ea000020 	b	b2ac0 <TFaxTool::C20ConfigModem(unsigned char *)+0xd4>
         b2a3c:	ea000031 	b	b2b08 <TFaxTool::C20ConfigModem(unsigned char *)+0x11c>
         b2a40:	ea000048 	b	b2b68 <TFaxTool::C20ConfigModem(unsigned char *)+0x17c>
         b2a44:	ea000056 	b	b2ba4 <TFaxTool::C20ConfigModem(unsigned char *)+0x1b8>
         b2a48:	ea000065 	b	b2be4 <TFaxTool::C20ConfigModem(unsigned char *)+0x1f8>
         b2a4c:	e59435a4 	ldr	r3, [r4, #1444]	; fField1444
         b2a50:	e3330000 	teq	r3, #0	; 0x0
         b2a54:	05b435ac 	ldreq	r3, [r4, #1452]!	; fField1452
         b2a58:	03330000 	teqeq	r3, #0	; 0x0
         b2a5c:	03a02001 	moveq	r2, #1	; 0x1
         b2a60:	05c12000 	streqb	r2, [r1]
         b2a64:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         b2a68:	ea00006e 	b	b2c28 <TFaxTool::C20ConfigModem(unsigned char *)+0x23c>
         b2a6c:	e3a00e7d 	mov	r0, #2000	; 0x7d0
         b2a70:	e5840528 	str	r0, [r4, #1320]	; fField1320
         b2a74:	e3a00002 	mov	r0, #2	; 0x2
         b2a78:	e5840824 	str	r0, [r4, #2084]	; fField2084
         b2a7c:	e5c4352c 	strb	r3, [r4, #1324]	; fField1324
         b2a80:	e1a00004 	mov	r0, r4
         b2a84:	e3a01f57 	mov	r1, #348	; 0x15c
         b2a88:	ea000064 	b	b2c20 <TFaxTool::C20ConfigModem(unsigned char *)+0x234>
         b2a8c:	e59405a4 	ldr	r0, [r4, #1444]	; fField1444
         b2a90:	e3300000 	teq	r0, #0	; 0x0
         b2a94:	1a000063 	bne	b2c28 <TFaxTool::C20ConfigModem(unsigned char *)+0x23c>
         b2a98:	e59405ac 	ldr	r0, [r4, #1452]	; fField1452
         b2a9c:	e3300000 	teq	r0, #0	; 0x0
         b2aa0:	13300004 	teqne	r0, #4	; 0x4
         b2aa4:	1a00005f 	bne	b2c28 <TFaxTool::C20ConfigModem(unsigned char *)+0x23c>
         b2aa8:	e3a00003 	mov	r0, #3	; 0x3
         b2aac:	e5840824 	str	r0, [r4, #2084]	; fField2084
         b2ab0:	e5c4352c 	strb	r3, [r4, #1324]	; fField1324
         b2ab4:	e1a00004 	mov	r0, r4
         b2ab8:	e3a01e16 	mov	r1, #352	; 0x160
         b2abc:	ea000057 	b	b2c20 <TFaxTool::C20ConfigModem(unsigned char *)+0x234>
         b2ac0:	e59405a4 	ldr	r0, [r4, #1444]	; fField1444
         b2ac4:	e3300000 	teq	r0, #0	; 0x0
         b2ac8:	1a000056 	bne	b2c28 <TFaxTool::C20ConfigModem(unsigned char *)+0x23c>
         b2acc:	e59405ac 	ldr	r0, [r4, #1452]	; fField1452
         b2ad0:	e3300000 	teq	r0, #0	; 0x0
         b2ad4:	13300004 	teqne	r0, #4	; 0x4
         b2ad8:	1a000052 	bne	b2c28 <TFaxTool::C20ConfigModem(unsigned char *)+0x23c>
         b2adc:	e3a00004 	mov	r0, #4	; 0x4
         b2ae0:	e5840824 	str	r0, [r4, #2084]	; fField2084
         b2ae4:	e2841e86 	add	r1, r4, #2144	; 0x860
         b2ae8:	e1a00005 	mov	r0, r5
         b2aec:	e3a02015 	mov	r2, #21	; 0x15
         b2af0:	eb6c0bf1 	bl	1bb5abc <$strncpy>
         b2af4:	e5c46540 	strb	r6, [r4, #1344]	; fField1344
         b2af8:	e1a00004 	mov	r0, r4
         b2afc:	e3a01047 	mov	r1, #71	; 0x47
         b2b00:	e2811c01 	add	r1, r1, #256	; 0x100
         b2b04:	ea000045 	b	b2c20 <TFaxTool::C20ConfigModem(unsigned char *)+0x234>
         b2b08:	e59405a4 	ldr	r0, [r4, #1444]	; fField1444
         b2b0c:	e3300000 	teq	r0, #0	; 0x0
         b2b10:	1a000044 	bne	b2c28 <TFaxTool::C20ConfigModem(unsigned char *)+0x23c>
         b2b14:	e59405ac 	ldr	r0, [r4, #1452]	; fField1452
         b2b18:	e3300000 	teq	r0, #0	; 0x0
         b2b1c:	13300004 	teqne	r0, #4	; 0x4
         b2b20:	1a000040 	bne	b2c28 <TFaxTool::C20ConfigModem(unsigned char *)+0x23c>
         b2b24:	e3a00005 	mov	r0, #5	; 0x5
         b2b28:	e5840824 	str	r0, [r4, #2084]	; fField2084
         b2b2c:	e284202c 	add	r2, r4, #44	; 0x2c
         b2b30:	e2822b02 	add	r2, r2, #2048	; 0x800
         b2b34:	e284103c 	add	r1, r4, #60	; 0x3c
         b2b38:	e2811b02 	add	r1, r1, #2048	; 0x800
         b2b3c:	e1a06001 	mov	r6, r1
         b2b40:	e1a00004 	mov	r0, r4
         b2b44:	eb65a8cc 	bl	1a1ce7c <TFaxTool::$C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)>
         b2b48:	e8965000 	ldmia	r6, {ip, lr}
         b2b4c:	e8855000 	stmia	r5, {ip, lr}
         b2b50:	e3300000 	teq	r0, #0	; 0x0
         b2b54:	01a00004 	moveq	r0, r4
         b2b58:	03a01043 	moveq	r1, #67	; 0x43
         b2b5c:	02811c01 	addeq	r1, r1, #256	; 0x100
         b2b60:	0a00002e 	beq	b2c20 <TFaxTool::C20ConfigModem(unsigned char *)+0x234>
         b2b64:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         b2b68:	e59405a4 	ldr	r0, [r4, #1444]	; fField1444
         b2b6c:	e3300000 	teq	r0, #0	; 0x0
         b2b70:	059405ac 	ldreq	r0, [r4, #1452]	; fField1452
         b2b74:	03300000 	teqeq	r0, #0	; 0x0
         b2b78:	1a00002a 	bne	b2c28 <TFaxTool::C20ConfigModem(unsigned char *)+0x23c>
         b2b7c:	e3a00006 	mov	r0, #6	; 0x6
         b2b80:	e5840824 	str	r0, [r4, #2084]	; fField2084
         b2b84:	e5d402d0 	ldrb	r0, [r4, #720]	; fField720
         b2b88:	e3300000 	teq	r0, #0	; 0x0
         b2b8c:	03a00031 	moveq	r0, #49	; 0x31
         b2b90:	13a00030 	movne	r0, #48	; 0x30
         b2b94:	e5c4052c 	strb	r0, [r4, #1324]	; fField1324
         b2b98:	e1a00004 	mov	r0, r4
         b2b9c:	e3a01f56 	mov	r1, #344	; 0x158
         b2ba0:	ea00001e 	b	b2c20 <TFaxTool::C20ConfigModem(unsigned char *)+0x234>
         b2ba4:	e59405a4 	ldr	r0, [r4, #1444]	; fField1444
         b2ba8:	e3300000 	teq	r0, #0	; 0x0
         b2bac:	059405ac 	ldreq	r0, [r4, #1452]	; fField1452
         b2bb0:	03300000 	teqeq	r0, #0	; 0x0
         b2bb4:	1a00001b 	bne	b2c28 <TFaxTool::C20ConfigModem(unsigned char *)+0x23c>
         b2bb8:	e3a00007 	mov	r0, #7	; 0x7
         b2bbc:	e5840824 	str	r0, [r4, #2084]	; fField2084
         b2bc0:	e5d402d1 	ldrb	r0, [r4, #721]	; fField721
         b2bc4:	e3300000 	teq	r0, #0	; 0x0
         b2bc8:	03a00030 	moveq	r0, #48	; 0x30
         b2bcc:	13a00031 	movne	r0, #49	; 0x31
         b2bd0:	e5c4052c 	strb	r0, [r4, #1324]	; fField1324
         b2bd4:	e1a00004 	mov	r0, r4
         b2bd8:	e3a01055 	mov	r1, #85	; 0x55
         b2bdc:	e2811c01 	add	r1, r1, #256	; 0x100
         b2be0:	ea00000e 	b	b2c20 <TFaxTool::C20ConfigModem(unsigned char *)+0x234>
         b2be4:	e59405a4 	ldr	r0, [r4, #1444]	; fField1444
         b2be8:	e3300000 	teq	r0, #0	; 0x0
         b2bec:	059405ac 	ldreq	r0, [r4, #1452]	; fField1452
         b2bf0:	03300000 	teqeq	r0, #0	; 0x0
         b2bf4:	1a00000b 	bne	b2c28 <TFaxTool::C20ConfigModem(unsigned char *)+0x23c>
         b2bf8:	e3a00008 	mov	r0, #8	; 0x8
         b2bfc:	e5840824 	str	r0, [r4, #2084]	; fField2084
         b2c00:	e3a00031 	mov	r0, #49	; 0x31
         b2c04:	e5c4052c 	strb	r0, [r4, #1324]	; fField1324
         b2c08:	e5c4052d 	strb	r0, [r4, #1325]	; fField1325
         b2c0c:	e5c4052e 	strb	r0, [r4, #1326]	; fField1326
         b2c10:	e5c4352f 	strb	r3, [r4, #1327]	; fField1327
         b2c14:	e1a00004 	mov	r0, r4
         b2c18:	e3a0104d 	mov	r1, #77	; 0x4d
         b2c1c:	e2811c01 	add	r1, r1, #256	; 0x100
         b2c20:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b2c24:	ea658fbe 	b	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b2c28:	e1a00002 	mov	r0, r2
         b2c2c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         b2c30:	e3a0000d 	mov	r0, #13	; 0xd
         b2c34:	e2400c56 	sub	r0, r0, #22016	; 0x5600
         b2c38:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C20RecvCfgMdm(unsigned long &)
 * Address: 000b2c3c
 */
TFaxTool::C20RecvCfgMdm(unsigned long &) {
    /*
         b2c3c:	e1a0c00d 	mov	ip, sp
         b2c40:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b2c44:	e24cb004 	sub	fp, ip, #4	; 0x4
         b2c48:	e1a04000 	mov	r4, r0
         b2c4c:	e1a05001 	mov	r5, r1
         b2c50:	e24dd004 	sub	sp, sp, #4	; 0x4
         b2c54:	e1a0100d 	mov	r1, sp
         b2c58:	eb65a878 	bl	1a1ce40 <TFaxTool::$C20ConfigModem(unsigned char *)>
         b2c5c:	e3300000 	teq	r0, #0	; 0x0
         b2c60:	0a000004 	beq	b2c78 <TFaxTool::C20RecvCfgMdm(unsigned long &)+0x3c>
         b2c64:	e1a00004 	mov	r0, r4
         b2c68:	e3a01d89 	mov	r1, #8768	; 0x2240
         b2c6c:	e2411902 	sub	r1, r1, #32768	; 0x8000
         b2c70:	eb6c3906 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b2c74:	ea000009 	b	b2ca0 <TFaxTool::C20RecvCfgMdm(unsigned long &)+0x64>
         b2c78:	e5dd0000 	ldrb	r0, [sp]
         b2c7c:	e3300000 	teq	r0, #0	; 0x0
         b2c80:	0a000006 	beq	b2ca0 <TFaxTool::C20RecvCfgMdm(unsigned long &)+0x64>
         b2c84:	e3a00037 	mov	r0, #55	; 0x37
         b2c88:	e5850000 	str	r0, [r5]
         b2c8c:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b2c90:	e3c00004 	bic	r0, r0, #4	; 0x4
         b2c94:	e584026c 	str	r0, [r4, #620]	; fField620
         b2c98:	e1a00004 	mov	r0, r4
         b2c9c:	eb65a023 	bl	1a1ad30 <TFaxTool::$StartPhaseA(void)>
         b2ca0:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C20RecvCopyQualityCheck(unsigned long &)
 * Address: 000b2ca4
 */
TFaxTool::C20RecvCopyQualityCheck(unsigned long &) {
    /*
         b2ca4:	e1a0c00d 	mov	ip, sp
         b2ca8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b2cac:	e24cb004 	sub	fp, ip, #4	; 0x4
         b2cb0:	e1a04000 	mov	r4, r0
         b2cb4:	e1a05001 	mov	r5, r1
         b2cb8:	e5900188 	ldr	r0, [r0, #392]	; fField392
         b2cbc:	e5d00015 	ldrb	r0, [r0, #21]
         b2cc0:	e3a0600d 	mov	r6, #13	; 0xd
         b2cc4:	e2466c56 	sub	r6, r6, #22016	; 0x5600
         b2cc8:	e3300000 	teq	r0, #0	; 0x0
         b2ccc:	1a000003 	bne	b2ce0 <TFaxTool::C20RecvCopyQualityCheck(unsigned long &)+0x3c>
         b2cd0:	e1a01005 	mov	r1, r5
         b2cd4:	e1a00004 	mov	r0, r4
         b2cd8:	e1a02006 	mov	r2, r6
         b2cdc:	eb65a856 	bl	1a1ce3c <TFaxTool::$C20AbortSession(unsigned long &, long)>
         b2ce0:	e5d40844 	ldrb	r0, [r4, #2116]	; fField2116
         b2ce4:	e3300032 	teq	r0, #50	; 0x32
         b2ce8:	13a01000 	movne	r1, #0	; 0x0
         b2cec:	03a01001 	moveq	r1, #1	; 0x1
         b2cf0:	e5940188 	ldr	r0, [r4, #392]	; fField392
         b2cf4:	e5c01014 	strb	r1, [r0, #20]
         b2cf8:	e3a01000 	mov	r1, #0	; 0x0
         b2cfc:	e5940188 	ldr	r0, [r4, #392]	; fField392
         b2d00:	e5a01010 	str	r1, [r0, #16]!	; fField16
         b2d04:	e1a00004 	mov	r0, r4
         b2d08:	eb65c96e 	bl	1a252c8 <TFaxTool::$CopyQualityResponse(void)>
         b2d0c:	e350008d 	cmp	r0, #141	; 0x8d
         b2d10:	0a000009 	beq	b2d3c <TFaxTool::C20RecvCopyQualityCheck(unsigned long &)+0x98>
         b2d14:	ca000004 	bgt	b2d2c <TFaxTool::C20RecvCopyQualityCheck(unsigned long &)+0x88>
         b2d18:	e330004c 	teq	r0, #76	; 0x4c
         b2d1c:	1330004d 	teqne	r0, #77	; 0x4d
         b2d20:	03a00032 	moveq	r0, #50	; 0x32
         b2d24:	0a000005 	beq	b2d40 <TFaxTool::C20RecvCopyQualityCheck(unsigned long &)+0x9c>
         b2d28:	ea000003 	b	b2d3c <TFaxTool::C20RecvCopyQualityCheck(unsigned long &)+0x98>
         b2d2c:	e33000cc 	teq	r0, #204	; 0xcc
         b2d30:	133000cd 	teqne	r0, #205	; 0xcd
         b2d34:	03a00033 	moveq	r0, #51	; 0x33
         b2d38:	0a000000 	beq	b2d40 <TFaxTool::C20RecvCopyQualityCheck(unsigned long &)+0x9c>
         b2d3c:	e3a00031 	mov	r0, #49	; 0x31
         b2d40:	e5941848 	ldr	r1, [r4, #2120]	; fField2120
         b2d44:	e1310000 	teq	r1, r0
         b2d48:	0a00000f 	beq	b2d8c <TFaxTool::C20RecvCopyQualityCheck(unsigned long &)+0xe8>
         b2d4c:	e3a01ea6 	mov	r1, #2656	; 0xa60
         b2d50:	e2811a0e 	add	r1, r1, #57344	; 0xe000
         b2d54:	e5841528 	str	r1, [r4, #1320]	; fField1320
         b2d58:	e5c4052c 	strb	r0, [r4, #1324]	; fField1324
         b2d5c:	e1a00004 	mov	r0, r4
         b2d60:	e3a0104f 	mov	r1, #79	; 0x4f
         b2d64:	e2811c01 	add	r1, r1, #256	; 0x100
         b2d68:	eb658f6d 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b2d6c:	e3300000 	teq	r0, #0	; 0x0
         b2d70:	03a0004c 	moveq	r0, #76	; 0x4c
         b2d74:	0a00000c 	beq	b2dac <TFaxTool::C20RecvCopyQualityCheck(unsigned long &)+0x108>
         b2d78:	e1a01005 	mov	r1, r5
         b2d7c:	e1a00004 	mov	r0, r4
         b2d80:	e1a02006 	mov	r2, r6
         b2d84:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b2d88:	ea65a82b 	b	1a1ce3c <TFaxTool::$C20AbortSession(unsigned long &, long)>
         b2d8c:	e1a01005 	mov	r1, r5
         b2d90:	e1a00004 	mov	r0, r4
         b2d94:	eb65a82f 	bl	1a1ce58 <TFaxTool::$C20RecvFDR_Cmd(unsigned long &)>
         b2d98:	e5d40844 	ldrb	r0, [r4, #2116]	; fField2116
         b2d9c:	e3300032 	teq	r0, #50	; 0x32
         b2da0:	13300036 	teqne	r0, #54	; 0x36
         b2da4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         b2da8:	e3a00050 	mov	r0, #80	; 0x50
         b2dac:	e5850000 	str	r0, [r5]
         b2db0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C20TransCfgMdm(unsigned long &)
 * Address: 000b2db4
 */
TFaxTool::C20TransCfgMdm(unsigned long &) {
    /*
         b2db4:	e1a0c00d 	mov	ip, sp
         b2db8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b2dbc:	e24cb004 	sub	fp, ip, #4	; 0x4
         b2dc0:	e1a04000 	mov	r4, r0
         b2dc4:	e1a05001 	mov	r5, r1
         b2dc8:	e24dd004 	sub	sp, sp, #4	; 0x4
         b2dcc:	e1a0100d 	mov	r1, sp
         b2dd0:	eb65a81a 	bl	1a1ce40 <TFaxTool::$C20ConfigModem(unsigned char *)>
         b2dd4:	e3300000 	teq	r0, #0	; 0x0
         b2dd8:	0a000004 	beq	b2df0 <TFaxTool::C20TransCfgMdm(unsigned long &)+0x3c>
         b2ddc:	e1a00004 	mov	r0, r4
         b2de0:	e3a01d89 	mov	r1, #8768	; 0x2240
         b2de4:	e2411902 	sub	r1, r1, #32768	; 0x8000
         b2de8:	eb6c38a8 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b2dec:	ea000009 	b	b2e18 <TFaxTool::C20TransCfgMdm(unsigned long &)+0x64>
         b2df0:	e5dd0000 	ldrb	r0, [sp]
         b2df4:	e3300000 	teq	r0, #0	; 0x0
         b2df8:	0a000006 	beq	b2e18 <TFaxTool::C20TransCfgMdm(unsigned long &)+0x64>
         b2dfc:	e3a00036 	mov	r0, #54	; 0x36
         b2e00:	e5850000 	str	r0, [r5]
         b2e04:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b2e08:	e3800004 	orr	r0, r0, #4	; 0x4
         b2e0c:	e584026c 	str	r0, [r4, #620]	; fField620
         b2e10:	e1a00004 	mov	r0, r4
         b2e14:	eb659fc5 	bl	1a1ad30 <TFaxTool::$StartPhaseA(void)>
         b2e18:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C20TransFDT_Cmd(unsigned long &)
 * Address: 000b2e1c
 */
TFaxTool::C20TransFDT_Cmd(unsigned long &) {
    /*
         b2e1c:	e1a0c00d 	mov	ip, sp
         b2e20:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b2e24:	e24cb004 	sub	fp, ip, #4	; 0x4
         b2e28:	e1a04000 	mov	r4, r0
         b2e2c:	e1a05001 	mov	r5, r1
         b2e30:	e3a00ea6 	mov	r0, #2656	; 0xa60
         b2e34:	e2800a0e 	add	r0, r0, #57344	; 0xe000
         b2e38:	e5840528 	str	r0, [r4, #1320]	; fField1320
         b2e3c:	e1a00004 	mov	r0, r4
         b2e40:	e3a01f4f 	mov	r1, #316	; 0x13c
         b2e44:	eb658f36 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b2e48:	e3300000 	teq	r0, #0	; 0x0
         b2e4c:	03a0003f 	moveq	r0, #63	; 0x3f
         b2e50:	05850000 	streq	r0, [r5]
         b2e54:	11a00004 	movne	r0, r4
         b2e58:	13a01d89 	movne	r1, #8768	; 0x2240
         b2e5c:	12411902 	subne	r1, r1, #32768	; 0x8000
         b2e60:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         b2e64:	1a6c3889 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         b2e68:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C20GetModemRsp(unsigned long, unsigned long &)
 * Address: 000b2e6c
 */
TFaxTool::C20GetModemRsp(unsigned long, unsigned long &) {
    /*
         b2e6c:	e1a0c00d 	mov	ip, sp
         b2e70:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b2e74:	e24cb004 	sub	fp, ip, #4	; 0x4
         b2e78:	e1a04000 	mov	r4, r0
         b2e7c:	e5801528 	str	r1, [r0, #1320]	; fField1320
         b2e80:	e3a01f46 	mov	r1, #280	; 0x118
         b2e84:	eb658f26 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b2e88:	e3300000 	teq	r0, #0	; 0x0
         b2e8c:	11a00004 	movne	r0, r4
         b2e90:	13a01d89 	movne	r1, #8768	; 0x2240
         b2e94:	12411902 	subne	r1, r1, #32768	; 0x8000
         b2e98:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         b2e9c:	1a6c387b 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         b2ea0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C20TransFDT_Rsp(unsigned long &)
 * Address: 000b2ea4
 */
TFaxTool::C20TransFDT_Rsp(unsigned long &) {
    /*
         b2ea4:	e1a0c00d 	mov	ip, sp
         b2ea8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b2eac:	e24cb004 	sub	fp, ip, #4	; 0x4
         b2eb0:	e1a04001 	mov	r4, r1
         b2eb4:	eb659f9f 	bl	1a1ad38 <TFaxTool::$StartPhaseC(void)>
         b2eb8:	e3a00040 	mov	r0, #64	; 0x40
         b2ebc:	e5840000 	str	r0, [r4]
         b2ec0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C20TransPhaseCSendEOM(unsigned long &)
 * Address: 000b2ec4
 */
TFaxTool::C20TransPhaseCSendEOM(unsigned long &) {
    /*
         b2ec4:	e1a0c00d 	mov	ip, sp
         b2ec8:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         b2ecc:	e24cb004 	sub	fp, ip, #4	; 0x4
         b2ed0:	e1a04000 	mov	r4, r0
         b2ed4:	e1a05001 	mov	r5, r1
         b2ed8:	e24dd014 	sub	sp, sp, #20	; 0x14
         b2edc:	e1a0000d 	mov	r0, sp
         b2ee0:	eb6c23ba 	bl	1bbbdd0 <TCMOFramingParms::$__ct(void)>
         b2ee4:	e28dd014 	add	sp, sp, #20	; 0x14
         b2ee8:	e284108c 	add	r1, r4, #140	; 0x8c
         b2eec:	e2811b02 	add	r1, r1, #2048	; 0x800
         b2ef0:	e911500e 	ldmdb	r1, {r1, r2, r3, ip, lr}
         b2ef4:	e92d500e 	stmdb	sp!, {r1, r2, r3, ip, lr}
         b2ef8:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b2efc:	e3100401 	tst	r0, #16777216	; 0x1000000
         b2f00:	03a0002c 	moveq	r0, #44	; 0x2c
         b2f04:	13a0002e 	movne	r0, #46	; 0x2e
         b2f08:	e5cd000d 	strb	r0, [sp, #13]
         b2f0c:	e2840f81 	add	r0, r4, #516	; 0x204
         b2f10:	e2800b01 	add	r0, r0, #1024	; 0x400
         b2f14:	e1a06000 	mov	r6, r0
         b2f18:	eb6c1b77 	bl	1bb9cfc <TOptionArray::$RemoveAllOptions(void)>
         b2f1c:	e3300000 	teq	r0, #0	; 0x0
         b2f20:	1a00002b 	bne	b2fd4 <TFaxTool::C20TransPhaseCSendEOM(unsigned long &)+0x110>
         b2f24:	e59d0008 	ldr	r0, [sp, #8]
         b2f28:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         b2f2c:	e3800c02 	orr	r0, r0, #512	; 0x200
         b2f30:	e58d0008 	str	r0, [sp, #8]
         b2f34:	e1a00006 	mov	r0, r6
         b2f38:	e1a0200d 	mov	r2, sp
         b2f3c:	e5961000 	ldr	r1, [r6]
         b2f40:	eb6c1b57 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         b2f44:	e3300000 	teq	r0, #0	; 0x0
         b2f48:	1a000021 	bne	b2fd4 <TFaxTool::C20TransPhaseCSendEOM(unsigned long &)+0x110>
         b2f4c:	e3a00c05 	mov	r0, #1280	; 0x500
         b2f50:	e3a0e000 	mov	lr, #0	; 0x0
         b2f54:	e5840630 	str	r0, [r4, #1584]	; fField1584
         b2f58:	e5846628 	str	r6, [r4, #1576]	; fField1576
         b2f5c:	e5c4e634 	strb	lr, [r4, #1588]	; fField1588
         b2f60:	e2846fb9 	add	r6, r4, #740	; 0x2e4
         b2f64:	e284cf63 	add	ip, r4, #396	; 0x18c
         b2f68:	e28ccb01 	add	ip, ip, #1024	; 0x400
         b2f6c:	e2847f87 	add	r7, r4, #540	; 0x21c
         b2f70:	e2877b01 	add	r7, r7, #1024	; 0x400
         b2f74:	e2840f67 	add	r0, r4, #412	; 0x19c
         b2f78:	e2800b01 	add	r0, r0, #1024	; 0x400
         b2f7c:	e3a0103c 	mov	r1, #60	; 0x3c
         b2f80:	e3a02000 	mov	r2, #0	; 0x0
         b2f84:	e3a03000 	mov	r3, #0	; 0x0
         b2f88:	e3a08004 	mov	r8, #4	; 0x4
         b2f8c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b2f90:	e1a0300e 	mov	r3, lr
         b2f94:	e3a02001 	mov	r2, #1	; 0x1
         b2f98:	e1a01008 	mov	r1, r8
         b2f9c:	e3a0001c 	mov	r0, #28	; 0x1c
         b2fa0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b2fa4:	e1a03007 	mov	r3, r7
         b2fa8:	e92d0008 	stmdb	sp!, {r3}
         b2fac:	e1a00006 	mov	r0, r6
         b2fb0:	e3a03000 	mov	r3, #0	; 0x0
         b2fb4:	e49c1008 	ldr	r1, [ip], #8
         b2fb8:	e59c2000 	ldr	r2, [ip]
         b2fbc:	eb6c9f62 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         b2fc0:	e28dd024 	add	sp, sp, #36	; 0x24
         b2fc4:	e3300000 	teq	r0, #0	; 0x0
         b2fc8:	03a00001 	moveq	r0, #1	; 0x1
         b2fcc:	05a40828 	streq	r0, [r4, #2088]!	; fField2088
         b2fd0:	0a000004 	beq	b2fe8 <TFaxTool::C20TransPhaseCSendEOM(unsigned long &)+0x124>
         b2fd4:	e1a01005 	mov	r1, r5
         b2fd8:	e1a00004 	mov	r0, r4
         b2fdc:	e3a0200d 	mov	r2, #13	; 0xd
         b2fe0:	e2422c56 	sub	r2, r2, #22016	; 0x5600
         b2fe4:	eb65a794 	bl	1a1ce3c <TFaxTool::$C20AbortSession(unsigned long &, long)>
         b2fe8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C20FHS_Rsp(unsigned long &)
 * Address: 000b2fec
 */
TFaxTool::C20FHS_Rsp(unsigned long &) {
    /*
         b2fec:	e1a0c00d 	mov	ip, sp
         b2ff0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b2ff4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b2ff8:	e1a04001 	mov	r4, r1
         b2ffc:	e1a02001 	mov	r2, r1
         b3000:	e3a01fe2 	mov	r1, #904	; 0x388
         b3004:	e2811a01 	add	r1, r1, #4096	; 0x1000
         b3008:	eb65a78f 	bl	1a1ce4c <TFaxTool::$C20GetModemRsp(unsigned long, unsigned long &)>
         b300c:	e3a00052 	mov	r0, #82	; 0x52
         b3010:	e5840000 	str	r0, [r4]
         b3014:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C20FHS_OK_Rsp(unsigned long &)
 * Address: 000b3018
 */
TFaxTool::C20FHS_OK_Rsp(unsigned long &) {
    /*
         b3018:	e1a0c00d 	mov	ip, sp
         b301c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b3020:	e24cb004 	sub	fp, ip, #4	; 0x4
         b3024:	e1a04000 	mov	r4, r0
         b3028:	e1a05001 	mov	r5, r1
         b302c:	e3a01000 	mov	r1, #0	; 0x0
         b3030:	e5d03845 	ldrb	r3, [r0, #2117]	; fField2117
         b3034:	e3330000 	teq	r3, #0	; 0x0
         b3038:	1a000003 	bne	b304c <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x34>
         b303c:	e5940848 	ldr	r0, [r4, #2120]	; fField2120
         b3040:	e3300032 	teq	r0, #50	; 0x32
         b3044:	13300034 	teqne	r0, #52	; 0x34
         b3048:	1a000000 	bne	b3050 <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x38>
         b304c:	e59f101c 	ldr	r1, [pc, #1c]	; b3070 <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x58>	; fField1
         b3050:	e5940018 	ldr	r0, [r4, #24]	; fField24
         b3054:	e3100040 	tst	r0, #64	; 0x40
         b3058:	e3a0600d 	mov	r6, #13	; 0xd
         b305c:	e2466c56 	sub	r6, r6, #22016	; 0x5600
         b3060:	0a000003 	beq	b3074 <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x5c>
         b3064:	e1a00004 	mov	r0, r4
         b3068:	e1a01006 	mov	r1, r6
         b306c:	ea00001a 	b	b30dc <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0xc4>
         b3070:	ffffaa0b 	swinv	0x00ffaa0b
         b3074:	e3100001 	tst	r0, #1	; 0x1
         b3078:	0a000004 	beq	b3090 <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x78>
         b307c:	e1a00004 	mov	r0, r4
         b3080:	e5942000 	ldr	r2, [r4]
         b3084:	e1a0e00f 	mov	lr, pc
         b3088:	e282f054 	add	pc, r2, #84	; 0x54
         b308c:	ea00002e 	b	b314c <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x134>
         b3090:	e594040c 	ldr	r0, [r4, #1036]	; fField1036
         b3094:	e3300000 	teq	r0, #0	; 0x0
         b3098:	0a000011 	beq	b30e4 <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0xcc>
         b309c:	e5901000 	ldr	r1, [r0]
         b30a0:	e1a0e00f 	mov	lr, pc
         b30a4:	e281f02c 	add	pc, r1, #44	; 0x2c
         b30a8:	e1a03000 	mov	r3, r0
         b30ac:	e594027c 	ldr	r0, [r4, #636]	; fField636
         b30b0:	e3300003 	teq	r0, #3	; 0x3
         b30b4:	13a02000 	movne	r2, #0	; 0x0
         b30b8:	03a02001 	moveq	r2, #1	; 0x1
         b30bc:	e1a00004 	mov	r0, r4
         b30c0:	e1a01006 	mov	r1, r6
         b30c4:	e594c000 	ldr	ip, [r4]
         b30c8:	e1a0e00f 	mov	lr, pc
         b30cc:	e28cf0ec 	add	pc, ip, #236	; 0xec
         b30d0:	e1a00004 	mov	r0, r4
         b30d4:	e3a0100d 	mov	r1, #13	; 0xd
         b30d8:	e2411c56 	sub	r1, r1, #22016	; 0x5600
         b30dc:	eb6c37eb 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b30e0:	ea000019 	b	b314c <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x134>
         b30e4:	e5940188 	ldr	r0, [r4, #392]	; fField392
         b30e8:	e3300000 	teq	r0, #0	; 0x0
         b30ec:	0a000010 	beq	b3134 <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x11c>
         b30f0:	e5902000 	ldr	r2, [r0]
         b30f4:	e59fc010 	ldr	ip, [pc, #10]	; b310c <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0xf4>
         b30f8:	e132000c 	teq	r2, ip
         b30fc:	1a000003 	bne	b3110 <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0xf8>
         b3100:	e1a00004 	mov	r0, r4
         b3104:	eb65e540 	bl	1a2c60c <TFaxTool::$StartPageComplete(long)>
         b3108:	ea00000f 	b	b314c <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x134>
         b310c:	66737067 	ldrvsbt	r7, [r3], -r7, rrx
         b3110:	e3300000 	teq	r0, #0	; 0x0
         b3114:	0a000006 	beq	b3134 <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x11c>
         b3118:	e59fc010 	ldr	ip, [pc, #10]	; b3130 <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x118>
         b311c:	e132000c 	teq	r2, ip
         b3120:	1a000003 	bne	b3134 <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x11c>
         b3124:	e1a00004 	mov	r0, r4
         b3128:	eb65cc74 	bl	1a26300 <TFaxTool::$EndPageComplete(long)>
         b312c:	ea000006 	b	b314c <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x134>
         b3130:	66656f6d 	strvsbt	r6, [r5], -sp, ror #30
         b3134:	e3330000 	teq	r3, #0	; 0x0
         b3138:	1affffc9 	bne	b3064 <TFaxTool::C20FHS_OK_Rsp(unsigned long &)+0x4c>
         b313c:	e1a00004 	mov	r0, r4
         b3140:	e5941000 	ldr	r1, [r4]
         b3144:	e1a0e00f 	mov	lr, pc
         b3148:	e281ff46 	add	pc, r1, #280	; 0x118
         b314c:	e3a00001 	mov	r0, #1	; 0x1
         b3150:	e5850000 	str	r0, [r5]
         b3154:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C20RecvFDR_Cmd(unsigned long &)
 * Address: 000b3158
 */
TFaxTool::C20RecvFDR_Cmd(unsigned long &) {
    /*
         b3158:	e1a0c00d 	mov	ip, sp
         b315c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b3160:	e24cb004 	sub	fp, ip, #4	; 0x4
         b3164:	e1a04000 	mov	r4, r0
         b3168:	e1a05001 	mov	r5, r1
         b316c:	e590026c 	ldr	r0, [r0, #620]	; fField620
         b3170:	e3800801 	orr	r0, r0, #65536	; 0x10000
         b3174:	e584026c 	str	r0, [r4, #620]	; fField620
         b3178:	e3a00001 	mov	r0, #1	; 0x1
         b317c:	e3a06000 	mov	r6, #0	; 0x0
         b3180:	e584027c 	str	r0, [r4, #636]	; fField636
         b3184:	e58463f8 	str	r6, [r4, #1016]	; fField1016
         b3188:	e5c4649d 	strb	r6, [r4, #1181]	; fField1181
         b318c:	e5c46445 	strb	r6, [r4, #1093]	; fField1093
         b3190:	e5940018 	ldr	r0, [r4, #24]	; fField24
         b3194:	e3100040 	tst	r0, #64	; 0x40
         b3198:	0a000004 	beq	b31b0 <TFaxTool::C20RecvFDR_Cmd(unsigned long &)+0x58>
         b319c:	e1a00004 	mov	r0, r4
         b31a0:	e3a01000 	mov	r1, #0	; 0x0
         b31a4:	e5942000 	ldr	r2, [r4]
         b31a8:	e1a0e00f 	mov	lr, pc
         b31ac:	e282f05c 	add	pc, r2, #92	; 0x5c
         b31b0:	e594126c 	ldr	r1, [r4, #620]	; fField620
         b31b4:	e3110c01 	tst	r1, #256	; 0x100
         b31b8:	0a00000b 	beq	b31ec <TFaxTool::C20RecvFDR_Cmd(unsigned long &)+0x94>
         b31bc:	e5940188 	ldr	r0, [r4, #392]	; fField392
         b31c0:	e5d02014 	ldrb	r2, [r0, #20]
         b31c4:	e3320000 	teq	r2, #0	; 0x0
         b31c8:	1a000007 	bne	b31ec <TFaxTool::C20RecvFDR_Cmd(unsigned long &)+0x94>
         b31cc:	e3c11c01 	bic	r1, r1, #256	; 0x100
         b31d0:	e584126c 	str	r1, [r4, #620]	; fField620
         b31d4:	e5a06010 	str	r6, [r0, #16]!	; fField16
         b31d8:	e1a00004 	mov	r0, r4
         b31dc:	e3a01000 	mov	r1, #0	; 0x0
         b31e0:	e5942000 	ldr	r2, [r4]
         b31e4:	e1a0e00f 	mov	lr, pc
         b31e8:	e282f0a8 	add	pc, r2, #168	; 0xa8
         b31ec:	e3a00ea6 	mov	r0, #2656	; 0xa60
         b31f0:	e2800a0e 	add	r0, r0, #57344	; 0xe000
         b31f4:	e5840528 	str	r0, [r4, #1320]	; fField1320
         b31f8:	e1a00004 	mov	r0, r4
         b31fc:	e3a0103d 	mov	r1, #61	; 0x3d
         b3200:	e2811c01 	add	r1, r1, #256	; 0x100
         b3204:	eb658e46 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b3208:	e3300000 	teq	r0, #0	; 0x0
         b320c:	1a000007 	bne	b3230 <TFaxTool::C20RecvFDR_Cmd(unsigned long &)+0xd8>
         b3210:	e1a00004 	mov	r0, r4
         b3214:	eb65cc44 	bl	1a2632c <TFaxTool::$FreeReceiveBuffers(void)>
         b3218:	e1a00004 	mov	r0, r4
         b321c:	eb65bfe9 	bl	1a231c8 <TFaxTool::$AllocateReceiveBuffers(void)>
         b3220:	e3300000 	teq	r0, #0	; 0x0
         b3224:	03a00047 	moveq	r0, #71	; 0x47
         b3228:	05850000 	streq	r0, [r5]
         b322c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         b3230:	e1a00004 	mov	r0, r4
         b3234:	e3a01d89 	mov	r1, #8768	; 0x2240
         b3238:	e2411902 	sub	r1, r1, #32768	; 0x8000
         b323c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b3240:	ea6c3792 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::C2StateUpdate(unsigned long)
 * Address: 000b3244
 */
TFaxTool::C2StateUpdate(unsigned long) {
    /*
         b3244:	e1a0c00d 	mov	ip, sp
         b3248:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         b324c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b3250:	e1a05000 	mov	r5, r0
         b3254:	e24dd008 	sub	sp, sp, #8	; 0x8
         b3258:	e5900820 	ldr	r0, [r0, #2080]	; fField2080
         b325c:	e58d0004 	str	r0, [sp, #4]	; fField4
         b3260:	e3a06d89 	mov	r6, #8768	; 0x2240
         b3264:	e2466902 	sub	r6, r6, #32768	; 0x8000
         b3268:	e3a0400d 	mov	r4, #13	; 0xd
         b326c:	e2444c56 	sub	r4, r4, #22016	; 0x5600
         b3270:	e3a08ea6 	mov	r8, #2656	; 0xa60
         b3274:	e2888a0e 	add	r8, r8, #57344	; 0xe000
         b3278:	e3a07ee2 	mov	r7, #3616	; 0xe20
         b327c:	e2877901 	add	r7, r7, #16384	; 0x4000
         b3280:	e3a03e71 	mov	r3, #1808	; 0x710
         b3284:	e2833a02 	add	r3, r3, #8192	; 0x2000
         b3288:	e5950820 	ldr	r0, [r5, #2080]	; fField2080
         b328c:	e3500020 	cmp	r0, #32	; 0x20
         b3290:	908ff100 	addls	pc, pc, r0, lsl #2
         b3294:	ea00004f 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b3298:	ea00004e 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b329c:	ea000025 	b	b3338 <TFaxTool::C2StateUpdate(unsigned long)+0xf4>
         b32a0:	ea000040 	b	b33a8 <TFaxTool::C2StateUpdate(unsigned long)+0x164>
         b32a4:	ea0000c1 	b	b35b0 <TFaxTool::C2StateUpdate(unsigned long)+0x36c>
         b32a8:	ea000042 	b	b33b8 <TFaxTool::C2StateUpdate(unsigned long)+0x174>
         b32ac:	ea0000c3 	b	b35c0 <TFaxTool::C2StateUpdate(unsigned long)+0x37c>
         b32b0:	ea000048 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b32b4:	ea000047 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b32b8:	ea000046 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b32bc:	ea000045 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b32c0:	ea000048 	b	b33e8 <TFaxTool::C2StateUpdate(unsigned long)+0x1a4>
         b32c4:	ea000090 	b	b350c <TFaxTool::C2StateUpdate(unsigned long)+0x2c8>
         b32c8:	ea00007b 	b	b34bc <TFaxTool::C2StateUpdate(unsigned long)+0x278>
         b32cc:	ea000069 	b	b3478 <TFaxTool::C2StateUpdate(unsigned long)+0x234>
         b32d0:	ea000093 	b	b3524 <TFaxTool::C2StateUpdate(unsigned long)+0x2e0>
         b32d4:	ea0000a4 	b	b356c <TFaxTool::C2StateUpdate(unsigned long)+0x328>
         b32d8:	ea00003e 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b32dc:	ea00003d 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b32e0:	ea00003c 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b32e4:	ea00003b 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b32e8:	ea00003a 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b32ec:	ea0000dc 	b	b3664 <TFaxTool::C2StateUpdate(unsigned long)+0x420>
         b32f0:	ea0000f0 	b	b36b8 <TFaxTool::C2StateUpdate(unsigned long)+0x474>
         b32f4:	ea0000f4 	b	b36cc <TFaxTool::C2StateUpdate(unsigned long)+0x488>
         b32f8:	ea000109 	b	b3724 <TFaxTool::C2StateUpdate(unsigned long)+0x4e0>
         b32fc:	ea00010b 	b	b3730 <TFaxTool::C2StateUpdate(unsigned long)+0x4ec>
         b3300:	ea000119 	b	b376c <TFaxTool::C2StateUpdate(unsigned long)+0x528>
         b3304:	ea000033 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b3308:	ea000032 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b330c:	ea000031 	b	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b3310:	ea000120 	b	b3798 <TFaxTool::C2StateUpdate(unsigned long)+0x554>
         b3314:	ea00012b 	b	b37c8 <TFaxTool::C2StateUpdate(unsigned long)+0x584>
         b3318:	e3310014 	teq	r1, #20	; 0x14
         b331c:	11a00005 	movne	r0, r5
         b3320:	11a01004 	movne	r1, r4
         b3324:	1a000143 	bne	b3838 <TFaxTool::C2StateUpdate(unsigned long)+0x5f4>
         b3328:	e28d1004 	add	r1, sp, #4	; 0x4
         b332c:	e1a00005 	mov	r0, r5
         b3330:	eb65aad3 	bl	1a1de84 <TFaxTool::$C2FHNG_OK_Rsp(unsigned long &)>
         b3334:	ea00013a 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b3338:	e3a00000 	mov	r0, #0	; 0x0
         b333c:	e3310001 	teq	r1, #1	; 0x1
         b3340:	0a00000c 	beq	b3378 <TFaxTool::C2StateUpdate(unsigned long)+0x134>
         b3344:	e3310002 	teq	r1, #2	; 0x2
         b3348:	11a00005 	movne	r0, r5
         b334c:	11a01004 	movne	r1, r4
         b3350:	1a000012 	bne	b33a0 <TFaxTool::C2StateUpdate(unsigned long)+0x15c>
         b3354:	e3a01003 	mov	r1, #3	; 0x3
         b3358:	e58d1004 	str	r1, [sp, #4]	; fField4
         b335c:	e1a0100d 	mov	r1, sp
         b3360:	e5850824 	str	r0, [r5, #2084]	; fField2084
         b3364:	e1a00005 	mov	r0, r5
         b3368:	eb65a6c2 	bl	1a1ce78 <TFaxTool::$C2ConfigModem(unsigned char *)>
         b336c:	e3300000 	teq	r0, #0	; 0x0
         b3370:	0a00012b 	beq	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b3374:	ea000007 	b	b3398 <TFaxTool::C2StateUpdate(unsigned long)+0x154>
         b3378:	e3a01002 	mov	r1, #2	; 0x2
         b337c:	e58d1004 	str	r1, [sp, #4]	; fField4
         b3380:	e1a0100d 	mov	r1, sp
         b3384:	e5850824 	str	r0, [r5, #2084]	; fField2084
         b3388:	e1a00005 	mov	r0, r5
         b338c:	eb65a6b9 	bl	1a1ce78 <TFaxTool::$C2ConfigModem(unsigned char *)>
         b3390:	e3300000 	teq	r0, #0	; 0x0
         b3394:	0a000122 	beq	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b3398:	e1a00005 	mov	r0, r5
         b339c:	e1a01006 	mov	r1, r6
         b33a0:	eb6c373a 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b33a4:	ea00011e 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b33a8:	e28d1004 	add	r1, sp, #4	; 0x4
         b33ac:	e1a00005 	mov	r0, r5
         b33b0:	eb65aac8 	bl	1a1ded8 <TFaxTool::$C2TransCfgMdm(unsigned long &)>
         b33b4:	ea00011a 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b33b8:	e3310003 	teq	r1, #3	; 0x3
         b33bc:	03a0000a 	moveq	r0, #10	; 0xa
         b33c0:	058d0004 	streq	r0, [sp, #4]	; fField4
         b33c4:	0a00001c 	beq	b343c <TFaxTool::C2StateUpdate(unsigned long)+0x1f8>
         b33c8:	e3310004 	teq	r1, #4	; 0x4
         b33cc:	1a000001 	bne	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b33d0:	e3a00001 	mov	r0, #1	; 0x1
         b33d4:	ea0000c5 	b	b36f0 <TFaxTool::C2StateUpdate(unsigned long)+0x4ac>
         b33d8:	e28d1004 	add	r1, sp, #4	; 0x4
         b33dc:	e1a00005 	mov	r0, r5
         b33e0:	e1a02004 	mov	r2, r4
         b33e4:	ea000021 	b	b3470 <TFaxTool::C2StateUpdate(unsigned long)+0x22c>
         b33e8:	e351002a 	cmp	r1, #42	; 0x2a
         b33ec:	0a000012 	beq	b343c <TFaxTool::C2StateUpdate(unsigned long)+0x1f8>
         b33f0:	ca00000a 	bgt	b3420 <TFaxTool::C2StateUpdate(unsigned long)+0x1dc>
         b33f4:	e2410014 	sub	r0, r1, #20	; 0x14
         b33f8:	e3500006 	cmp	r0, #6	; 0x6
         b33fc:	908ff100 	addls	pc, pc, r0, lsl #2
         b3400:	ea000015 	b	b345c <TFaxTool::C2StateUpdate(unsigned long)+0x218>
         b3404:	ea000010 	b	b344c <TFaxTool::C2StateUpdate(unsigned long)+0x208>
         b3408:	ea000013 	b	b345c <TFaxTool::C2StateUpdate(unsigned long)+0x218>
         b340c:	ea000012 	b	b345c <TFaxTool::C2StateUpdate(unsigned long)+0x218>
         b3410:	eaffffee 	b	b33d0 <TFaxTool::C2StateUpdate(unsigned long)+0x18c>
         b3414:	eaffffed 	b	b33d0 <TFaxTool::C2StateUpdate(unsigned long)+0x18c>
         b3418:	eaffffec 	b	b33d0 <TFaxTool::C2StateUpdate(unsigned long)+0x18c>
         b341c:	eaffffeb 	b	b33d0 <TFaxTool::C2StateUpdate(unsigned long)+0x18c>
         b3420:	e331002b 	teq	r1, #43	; 0x2b
         b3424:	1331002d 	teqne	r1, #45	; 0x2d
         b3428:	0a000003 	beq	b343c <TFaxTool::C2StateUpdate(unsigned long)+0x1f8>
         b342c:	e3310030 	teq	r1, #48	; 0x30
         b3430:	0a0000da 	beq	b37a0 <TFaxTool::C2StateUpdate(unsigned long)+0x55c>
         b3434:	e3310034 	teq	r1, #52	; 0x34
         b3438:	1a000007 	bne	b345c <TFaxTool::C2StateUpdate(unsigned long)+0x218>
         b343c:	e28d2004 	add	r2, sp, #4	; 0x4
         b3440:	e1a00005 	mov	r0, r5
         b3444:	e1a01008 	mov	r1, r8
         b3448:	ea0000e8 	b	b37f0 <TFaxTool::C2StateUpdate(unsigned long)+0x5ac>
         b344c:	e28d1004 	add	r1, sp, #4	; 0x4
         b3450:	e1a00005 	mov	r0, r5
         b3454:	eb65aaa0 	bl	1a1dedc <TFaxTool::$C2TransFDT_Cmd(unsigned long &)>
         b3458:	ea0000f1 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b345c:	e3310020 	teq	r1, #32	; 0x20
         b3460:	1a0000d6 	bne	b37c0 <TFaxTool::C2StateUpdate(unsigned long)+0x57c>
         b3464:	ea0000d3 	b	b37b8 <TFaxTool::C2StateUpdate(unsigned long)+0x574>
         b3468:	e28d1004 	add	r1, sp, #4	; 0x4
         b346c:	e1a00005 	mov	r0, r5
         b3470:	eb65a67f 	bl	1a1ce74 <TFaxTool::$C2AbortSession(unsigned long &, long)>
         b3474:	ea0000ea 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b3478:	e3310005 	teq	r1, #5	; 0x5
         b347c:	03a0000c 	moveq	r0, #12	; 0xc
         b3480:	0a00009a 	beq	b36f0 <TFaxTool::C2StateUpdate(unsigned long)+0x4ac>
         b3484:	e3310015 	teq	r1, #21	; 0x15
         b3488:	03a0000b 	moveq	r0, #11	; 0xb
         b348c:	0a000097 	beq	b36f0 <TFaxTool::C2StateUpdate(unsigned long)+0x4ac>
         b3490:	e331002c 	teq	r1, #44	; 0x2c
         b3494:	0a000004 	beq	b34ac <TFaxTool::C2StateUpdate(unsigned long)+0x268>
         b3498:	e3310030 	teq	r1, #48	; 0x30
         b349c:	0a0000bf 	beq	b37a0 <TFaxTool::C2StateUpdate(unsigned long)+0x55c>
         b34a0:	e3310020 	teq	r1, #32	; 0x20
         b34a4:	1a0000c5 	bne	b37c0 <TFaxTool::C2StateUpdate(unsigned long)+0x57c>
         b34a8:	ea0000c2 	b	b37b8 <TFaxTool::C2StateUpdate(unsigned long)+0x574>
         b34ac:	e5950018 	ldr	r0, [r5, #24]	; fField24
         b34b0:	e3100001 	tst	r0, #1	; 0x1
         b34b4:	0affffe0 	beq	b343c <TFaxTool::C2StateUpdate(unsigned long)+0x1f8>
         b34b8:	ea00000b 	b	b34ec <TFaxTool::C2StateUpdate(unsigned long)+0x2a8>
         b34bc:	e3310015 	teq	r1, #21	; 0x15
         b34c0:	0a000013 	beq	b3514 <TFaxTool::C2StateUpdate(unsigned long)+0x2d0>
         b34c4:	e331002c 	teq	r1, #44	; 0x2c
         b34c8:	0a000004 	beq	b34e0 <TFaxTool::C2StateUpdate(unsigned long)+0x29c>
         b34cc:	e3310030 	teq	r1, #48	; 0x30
         b34d0:	0a0000b2 	beq	b37a0 <TFaxTool::C2StateUpdate(unsigned long)+0x55c>
         b34d4:	e3310020 	teq	r1, #32	; 0x20
         b34d8:	1a0000b8 	bne	b37c0 <TFaxTool::C2StateUpdate(unsigned long)+0x57c>
         b34dc:	ea0000b5 	b	b37b8 <TFaxTool::C2StateUpdate(unsigned long)+0x574>
         b34e0:	e5950018 	ldr	r0, [r5, #24]	; fField24
         b34e4:	e3100001 	tst	r0, #1	; 0x1
         b34e8:	0affffd3 	beq	b343c <TFaxTool::C2StateUpdate(unsigned long)+0x1f8>
         b34ec:	e1a00005 	mov	r0, r5
         b34f0:	eb65aa6d 	bl	1a1deac <TFaxTool::$C2PhaseBProcessOptions(void)>
         b34f4:	e1a00005 	mov	r0, r5
         b34f8:	e3a01000 	mov	r1, #0	; 0x0
         b34fc:	e5952000 	ldr	r2, [r5]
         b3500:	e1a0e00f 	mov	lr, pc
         b3504:	e282f054 	add	pc, r2, #84	; 0x54
         b3508:	eaffffcb 	b	b343c <TFaxTool::C2StateUpdate(unsigned long)+0x1f8>
         b350c:	e3310005 	teq	r1, #5	; 0x5
         b3510:	1affffb0 	bne	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b3514:	e28d1004 	add	r1, sp, #4	; 0x4
         b3518:	e1a00005 	mov	r0, r5
         b351c:	eb65aa6f 	bl	1a1dee0 <TFaxTool::$C2TransFDT_Rsp(unsigned long &)>
         b3520:	ea0000bf 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b3524:	e3310006 	teq	r1, #6	; 0x6
         b3528:	0a000009 	beq	b3554 <TFaxTool::C2StateUpdate(unsigned long)+0x310>
         b352c:	e3310007 	teq	r1, #7	; 0x7
         b3530:	0affffc1 	beq	b343c <TFaxTool::C2StateUpdate(unsigned long)+0x1f8>
         b3534:	e3310008 	teq	r1, #8	; 0x8
         b3538:	0a000008 	beq	b3560 <TFaxTool::C2StateUpdate(unsigned long)+0x31c>
         b353c:	e3310014 	teq	r1, #20	; 0x14
         b3540:	1affffa4 	bne	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b3544:	e28d1004 	add	r1, sp, #4	; 0x4
         b3548:	e1a00005 	mov	r0, r5
         b354c:	eb65aa64 	bl	1a1dee4 <TFaxTool::$C2TransFET_Cmd(unsigned long &)>
         b3550:	ea0000b3 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b3554:	e1a00005 	mov	r0, r5
         b3558:	eb657098 	bl	1a0f7c0 <TFaxTool::$DoEndPage(void)>
         b355c:	ea0000b0 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b3560:	e1a00005 	mov	r0, r5
         b3564:	eb65aa64 	bl	1a1defc <TFaxTool::$SendEOMCont(void)>
         b3568:	ea0000ad 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b356c:	e3310014 	teq	r1, #20	; 0x14
         b3570:	0a000007 	beq	b3594 <TFaxTool::C2StateUpdate(unsigned long)+0x350>
         b3574:	e3310030 	teq	r1, #48	; 0x30
         b3578:	0a000088 	beq	b37a0 <TFaxTool::C2StateUpdate(unsigned long)+0x55c>
         b357c:	e3310038 	teq	r1, #56	; 0x38
         b3580:	1a000007 	bne	b35a4 <TFaxTool::C2StateUpdate(unsigned long)+0x360>
         b3584:	e28d1004 	add	r1, sp, #4	; 0x4
         b3588:	e1a00005 	mov	r0, r5
         b358c:	eb65aa56 	bl	1a1deec <TFaxTool::$C2TransFPTS_Rsp(unsigned long &)>
         b3590:	ea0000a3 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b3594:	e28d1004 	add	r1, sp, #4	; 0x4
         b3598:	e1a00005 	mov	r0, r5
         b359c:	eb65aa51 	bl	1a1dee8 <TFaxTool::$C2TransFET_Rsp(unsigned long &)>
         b35a0:	ea00009f 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b35a4:	e3310020 	teq	r1, #32	; 0x20
         b35a8:	1a000084 	bne	b37c0 <TFaxTool::C2StateUpdate(unsigned long)+0x57c>
         b35ac:	ea000081 	b	b37b8 <TFaxTool::C2StateUpdate(unsigned long)+0x574>
         b35b0:	e28d1004 	add	r1, sp, #4	; 0x4
         b35b4:	e1a00005 	mov	r0, r5
         b35b8:	eb65aa40 	bl	1a1dec0 <TFaxTool::$C2RecvCfgMdm(unsigned long &)>
         b35bc:	ea000098 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b35c0:	e351002c 	cmp	r1, #44	; 0x2c
         b35c4:	0a000012 	beq	b3614 <TFaxTool::C2StateUpdate(unsigned long)+0x3d0>
         b35c8:	ca000008 	bgt	b35f0 <TFaxTool::C2StateUpdate(unsigned long)+0x3ac>
         b35cc:	e3310003 	teq	r1, #3	; 0x3
         b35d0:	0affff99 	beq	b343c <TFaxTool::C2StateUpdate(unsigned long)+0x1f8>
         b35d4:	e3310004 	teq	r1, #4	; 0x4
         b35d8:	0affff7c 	beq	b33d0 <TFaxTool::C2StateUpdate(unsigned long)+0x18c>
         b35dc:	e3310014 	teq	r1, #20	; 0x14
         b35e0:	0a000013 	beq	b3634 <TFaxTool::C2StateUpdate(unsigned long)+0x3f0>
         b35e4:	e331002a 	teq	r1, #42	; 0x2a
         b35e8:	1a00001a 	bne	b3658 <TFaxTool::C2StateUpdate(unsigned long)+0x414>
         b35ec:	ea000004 	b	b3604 <TFaxTool::C2StateUpdate(unsigned long)+0x3c0>
         b35f0:	e3310030 	teq	r1, #48	; 0x30
         b35f4:	0a000069 	beq	b37a0 <TFaxTool::C2StateUpdate(unsigned long)+0x55c>
         b35f8:	e3310035 	teq	r1, #53	; 0x35
         b35fc:	1331003a 	teqne	r1, #58	; 0x3a
         b3600:	1a000014 	bne	b3658 <TFaxTool::C2StateUpdate(unsigned long)+0x414>
         b3604:	e28d2004 	add	r2, sp, #4	; 0x4
         b3608:	e1a00005 	mov	r0, r5
         b360c:	e1a01007 	mov	r1, r7
         b3610:	ea000076 	b	b37f0 <TFaxTool::C2StateUpdate(unsigned long)+0x5ac>
         b3614:	e5950018 	ldr	r0, [r5, #24]	; fField24
         b3618:	e3100001 	tst	r0, #1	; 0x1
         b361c:	0afffff8 	beq	b3604 <TFaxTool::C2StateUpdate(unsigned long)+0x3c0>
         b3620:	e1a00005 	mov	r0, r5
         b3624:	eb65aa29 	bl	1a1ded0 <TFaxTool::$C2SetSessionParameters(void)>
         b3628:	e1a00005 	mov	r0, r5
         b362c:	eb65aa1e 	bl	1a1deac <TFaxTool::$C2PhaseBProcessOptions(void)>
         b3630:	eafffff3 	b	b3604 <TFaxTool::C2StateUpdate(unsigned long)+0x3c0>
         b3634:	e285203c 	add	r2, r5, #60	; 0x3c
         b3638:	e2822b02 	add	r2, r2, #2048	; 0x800
         b363c:	e2851034 	add	r1, r5, #52	; 0x34
         b3640:	e2811b02 	add	r1, r1, #2048	; 0x800
         b3644:	e1a00005 	mov	r0, r5
         b3648:	eb65aa28 	bl	1a1def0 <TFaxTool::$C2ValidateDCS(FaxClass2FDIS &, FaxClass2FDIS &)>
         b364c:	e3300000 	teq	r0, #0	; 0x0
         b3650:	0affff60 	beq	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b3654:	ea00004b 	b	b3788 <TFaxTool::C2StateUpdate(unsigned long)+0x544>
         b3658:	e3310020 	teq	r1, #32	; 0x20
         b365c:	1a000057 	bne	b37c0 <TFaxTool::C2StateUpdate(unsigned long)+0x57c>
         b3660:	ea000054 	b	b37b8 <TFaxTool::C2StateUpdate(unsigned long)+0x574>
         b3664:	e351002c 	cmp	r1, #44	; 0x2c
         b3668:	0affffe5 	beq	b3604 <TFaxTool::C2StateUpdate(unsigned long)+0x3c0>
         b366c:	ca000005 	bgt	b3688 <TFaxTool::C2StateUpdate(unsigned long)+0x444>
         b3670:	e3310015 	teq	r1, #21	; 0x15
         b3674:	0a00000b 	beq	b36a8 <TFaxTool::C2StateUpdate(unsigned long)+0x464>
         b3678:	e3310029 	teq	r1, #41	; 0x29
         b367c:	1331002a 	teqne	r1, #42	; 0x2a
         b3680:	0affffdf 	beq	b3604 <TFaxTool::C2StateUpdate(unsigned long)+0x3c0>
         b3684:	ea000004 	b	b369c <TFaxTool::C2StateUpdate(unsigned long)+0x458>
         b3688:	e3310030 	teq	r1, #48	; 0x30
         b368c:	0a000043 	beq	b37a0 <TFaxTool::C2StateUpdate(unsigned long)+0x55c>
         b3690:	e3310035 	teq	r1, #53	; 0x35
         b3694:	1331003a 	teqne	r1, #58	; 0x3a
         b3698:	0affffd9 	beq	b3604 <TFaxTool::C2StateUpdate(unsigned long)+0x3c0>
         b369c:	e3310020 	teq	r1, #32	; 0x20
         b36a0:	1a000046 	bne	b37c0 <TFaxTool::C2StateUpdate(unsigned long)+0x57c>
         b36a4:	ea000043 	b	b37b8 <TFaxTool::C2StateUpdate(unsigned long)+0x574>
         b36a8:	e28d1004 	add	r1, sp, #4	; 0x4
         b36ac:	e1a00005 	mov	r0, r5
         b36b0:	eb65aa05 	bl	1a1decc <TFaxTool::$C2RecvFDR_Rsp(unsigned long &)>
         b36b4:	ea00005a 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b36b8:	e3310007 	teq	r1, #7	; 0x7
         b36bc:	1affff45 	bne	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b36c0:	e3a00017 	mov	r0, #23	; 0x17
         b36c4:	e58d0004 	str	r0, [sp, #4]	; fField4
         b36c8:	ea00000e 	b	b3708 <TFaxTool::C2StateUpdate(unsigned long)+0x4c4>
         b36cc:	e351002f 	cmp	r1, #47	; 0x2f
         b36d0:	0a00000c 	beq	b3708 <TFaxTool::C2StateUpdate(unsigned long)+0x4c4>
         b36d4:	ca000007 	bgt	b36f8 <TFaxTool::C2StateUpdate(unsigned long)+0x4b4>
         b36d8:	e3310006 	teq	r1, #6	; 0x6
         b36dc:	03a00019 	moveq	r0, #25	; 0x19
         b36e0:	0a000002 	beq	b36f0 <TFaxTool::C2StateUpdate(unsigned long)+0x4ac>
         b36e4:	e3310014 	teq	r1, #20	; 0x14
         b36e8:	1a00000a 	bne	b3718 <TFaxTool::C2StateUpdate(unsigned long)+0x4d4>
         b36ec:	e3a00018 	mov	r0, #24	; 0x18
         b36f0:	e58d0004 	str	r0, [sp, #4]	; fField4
         b36f4:	ea00004a 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b36f8:	e3310030 	teq	r1, #48	; 0x30
         b36fc:	0a000027 	beq	b37a0 <TFaxTool::C2StateUpdate(unsigned long)+0x55c>
         b3700:	e3310038 	teq	r1, #56	; 0x38
         b3704:	1a000003 	bne	b3718 <TFaxTool::C2StateUpdate(unsigned long)+0x4d4>
         b3708:	e28d2004 	add	r2, sp, #4	; 0x4
         b370c:	e1a00005 	mov	r0, r5
         b3710:	e1a01003 	mov	r1, r3
         b3714:	ea000035 	b	b37f0 <TFaxTool::C2StateUpdate(unsigned long)+0x5ac>
         b3718:	e3310020 	teq	r1, #32	; 0x20
         b371c:	1a000027 	bne	b37c0 <TFaxTool::C2StateUpdate(unsigned long)+0x57c>
         b3720:	ea000024 	b	b37b8 <TFaxTool::C2StateUpdate(unsigned long)+0x574>
         b3724:	e3310006 	teq	r1, #6	; 0x6
         b3728:	1affff2a 	bne	b33d8 <TFaxTool::C2StateUpdate(unsigned long)+0x194>
         b372c:	ea00000a 	b	b375c <TFaxTool::C2StateUpdate(unsigned long)+0x518>
         b3730:	e3310014 	teq	r1, #20	; 0x14
         b3734:	0a000008 	beq	b375c <TFaxTool::C2StateUpdate(unsigned long)+0x518>
         b3738:	e331002f 	teq	r1, #47	; 0x2f
         b373c:	0afffff1 	beq	b3708 <TFaxTool::C2StateUpdate(unsigned long)+0x4c4>
         b3740:	e3310030 	teq	r1, #48	; 0x30
         b3744:	0a000015 	beq	b37a0 <TFaxTool::C2StateUpdate(unsigned long)+0x55c>
         b3748:	e3310038 	teq	r1, #56	; 0x38
         b374c:	0affffed 	beq	b3708 <TFaxTool::C2StateUpdate(unsigned long)+0x4c4>
         b3750:	e3310020 	teq	r1, #32	; 0x20
         b3754:	1a000019 	bne	b37c0 <TFaxTool::C2StateUpdate(unsigned long)+0x57c>
         b3758:	ea000016 	b	b37b8 <TFaxTool::C2StateUpdate(unsigned long)+0x574>
         b375c:	e28d1004 	add	r1, sp, #4	; 0x4
         b3760:	e1a00005 	mov	r0, r5
         b3764:	eb65a9d6 	bl	1a1dec4 <TFaxTool::$C2RecvCopyQualityCheck(unsigned long &)>
         b3768:	ea00002d 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b376c:	e3310014 	teq	r1, #20	; 0x14
         b3770:	0a000004 	beq	b3788 <TFaxTool::C2StateUpdate(unsigned long)+0x544>
         b3774:	e3310030 	teq	r1, #48	; 0x30
         b3778:	0a000008 	beq	b37a0 <TFaxTool::C2StateUpdate(unsigned long)+0x55c>
         b377c:	e3310020 	teq	r1, #32	; 0x20
         b3780:	1a00000e 	bne	b37c0 <TFaxTool::C2StateUpdate(unsigned long)+0x57c>
         b3784:	ea00000b 	b	b37b8 <TFaxTool::C2StateUpdate(unsigned long)+0x574>
         b3788:	e28d1004 	add	r1, sp, #4	; 0x4
         b378c:	e1a00005 	mov	r0, r5
         b3790:	eb65a9cc 	bl	1a1dec8 <TFaxTool::$C2RecvFDR_Cmd(unsigned long &)>
         b3794:	ea000022 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b3798:	e3310030 	teq	r1, #48	; 0x30
         b379c:	1a000003 	bne	b37b0 <TFaxTool::C2StateUpdate(unsigned long)+0x56c>
         b37a0:	e28d1004 	add	r1, sp, #4	; 0x4
         b37a4:	e1a00005 	mov	r0, r5
         b37a8:	eb65a9b6 	bl	1a1de88 <TFaxTool::$C2FHNG_Rsp(unsigned long &)>
         b37ac:	ea00001c 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b37b0:	e3310020 	teq	r1, #32	; 0x20
         b37b4:	1a000001 	bne	b37c0 <TFaxTool::C2StateUpdate(unsigned long)+0x57c>
         b37b8:	e1a02006 	mov	r2, r6
         b37bc:	eaffff29 	b	b3468 <TFaxTool::C2StateUpdate(unsigned long)+0x224>
         b37c0:	e1a02004 	mov	r2, r4
         b37c4:	eaffff27 	b	b3468 <TFaxTool::C2StateUpdate(unsigned long)+0x224>
         b37c8:	e3310014 	teq	r1, #20	; 0x14
         b37cc:	0a000009 	beq	b37f8 <TFaxTool::C2StateUpdate(unsigned long)+0x5b4>
         b37d0:	e3310020 	teq	r1, #32	; 0x20
         b37d4:	0a000015 	beq	b3830 <TFaxTool::C2StateUpdate(unsigned long)+0x5ec>
         b37d8:	e3310030 	teq	r1, #48	; 0x30
         b37dc:	e28d2004 	add	r2, sp, #4	; 0x4
         b37e0:	e1a00005 	mov	r0, r5
         b37e4:	03a01efa 	moveq	r1, #4000	; 0xfa0
         b37e8:	13a01fee 	movne	r1, #952	; 0x3b8
         b37ec:	12811b02 	addne	r1, r1, #2048	; 0x800
         b37f0:	eb65a9a5 	bl	1a1de8c <TFaxTool::$C2GetModemRsp(unsigned long, unsigned long &)>
         b37f4:	ea00000a 	b	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b37f8:	e3a00001 	mov	r0, #1	; 0x1
         b37fc:	e58d0004 	str	r0, [sp, #4]	; fField4
         b3800:	e1a00005 	mov	r0, r5
         b3804:	e1a01004 	mov	r1, r4
         b3808:	eb6c3620 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b380c:	e3300000 	teq	r0, #0	; 0x0
         b3810:	0a000003 	beq	b3824 <TFaxTool::C2StateUpdate(unsigned long)+0x5e0>
         b3814:	e1a00005 	mov	r0, r5
         b3818:	e5951000 	ldr	r1, [r5]
         b381c:	e1a0e00f 	mov	lr, pc
         b3820:	e281ff46 	add	pc, r1, #280	; 0x118
         b3824:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         b3828:	e5a50820 	str	r0, [r5, #2080]!	; fField2080
         b382c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         b3830:	e1a00005 	mov	r0, r5
         b3834:	e1a01006 	mov	r1, r6
         b3838:	eb6c3614 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b383c:	eafffee3 	b	b33d0 <TFaxTool::C2StateUpdate(unsigned long)+0x18c>
    */
}

/**
 * Symbol: TFaxTool::C2FHNG_Rsp(unsigned long &)
 * Address: 000b3840
 */
TFaxTool::C2FHNG_Rsp(unsigned long &) {
    /*
         b3840:	e1a0c00d 	mov	ip, sp
         b3844:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b3848:	e24cb004 	sub	fp, ip, #4	; 0x4
         b384c:	e1a04001 	mov	r4, r1
         b3850:	e1a02001 	mov	r2, r1
         b3854:	e3a01fe2 	mov	r1, #904	; 0x388
         b3858:	e2811a01 	add	r1, r1, #4096	; 0x1000
         b385c:	eb65a98a 	bl	1a1de8c <TFaxTool::$C2GetModemRsp(unsigned long, unsigned long &)>
         b3860:	e3a00020 	mov	r0, #32	; 0x20
         b3864:	e5840000 	str	r0, [r4]
         b3868:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2FHNG_OK_Rsp(unsigned long &)
 * Address: 000b386c
 */
TFaxTool::C2FHNG_OK_Rsp(unsigned long &) {
    /*
         b386c:	e1a0c00d 	mov	ip, sp
         b3870:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b3874:	e24cb004 	sub	fp, ip, #4	; 0x4
         b3878:	e1a04000 	mov	r4, r0
         b387c:	e1a05001 	mov	r5, r1
         b3880:	e3a01000 	mov	r1, #0	; 0x0
         b3884:	e5d03845 	ldrb	r3, [r0, #2117]	; fField2117
         b3888:	e3330000 	teq	r3, #0	; 0x0
         b388c:	1a000003 	bne	b38a0 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x34>
         b3890:	e5940848 	ldr	r0, [r4, #2120]	; fField2120
         b3894:	e3300032 	teq	r0, #50	; 0x32
         b3898:	13300034 	teqne	r0, #52	; 0x34
         b389c:	1a000000 	bne	b38a4 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x38>
         b38a0:	e59f101c 	ldr	r1, [pc, #1c]	; b38c4 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x58>	; fField1
         b38a4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         b38a8:	e3100040 	tst	r0, #64	; 0x40
         b38ac:	e3a0600d 	mov	r6, #13	; 0xd
         b38b0:	e2466c56 	sub	r6, r6, #22016	; 0x5600
         b38b4:	0a000003 	beq	b38c8 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x5c>
         b38b8:	e1a00004 	mov	r0, r4
         b38bc:	e1a01006 	mov	r1, r6
         b38c0:	ea00001a 	b	b3930 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0xc4>
         b38c4:	ffffaa0b 	swinv	0x00ffaa0b
         b38c8:	e3100001 	tst	r0, #1	; 0x1
         b38cc:	0a000004 	beq	b38e4 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x78>
         b38d0:	e1a00004 	mov	r0, r4
         b38d4:	e5942000 	ldr	r2, [r4]
         b38d8:	e1a0e00f 	mov	lr, pc
         b38dc:	e282f054 	add	pc, r2, #84	; 0x54
         b38e0:	ea00002e 	b	b39a0 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x134>
         b38e4:	e594040c 	ldr	r0, [r4, #1036]	; fField1036
         b38e8:	e3300000 	teq	r0, #0	; 0x0
         b38ec:	0a000011 	beq	b3938 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0xcc>
         b38f0:	e5901000 	ldr	r1, [r0]
         b38f4:	e1a0e00f 	mov	lr, pc
         b38f8:	e281f02c 	add	pc, r1, #44	; 0x2c
         b38fc:	e1a03000 	mov	r3, r0
         b3900:	e594027c 	ldr	r0, [r4, #636]	; fField636
         b3904:	e3300003 	teq	r0, #3	; 0x3
         b3908:	13a02000 	movne	r2, #0	; 0x0
         b390c:	03a02001 	moveq	r2, #1	; 0x1
         b3910:	e1a00004 	mov	r0, r4
         b3914:	e1a01006 	mov	r1, r6
         b3918:	e594c000 	ldr	ip, [r4]
         b391c:	e1a0e00f 	mov	lr, pc
         b3920:	e28cf0ec 	add	pc, ip, #236	; 0xec
         b3924:	e1a00004 	mov	r0, r4
         b3928:	e3a0100d 	mov	r1, #13	; 0xd
         b392c:	e2411c56 	sub	r1, r1, #22016	; 0x5600
         b3930:	eb6c35d6 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b3934:	ea000019 	b	b39a0 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x134>
         b3938:	e5940188 	ldr	r0, [r4, #392]	; fField392
         b393c:	e3300000 	teq	r0, #0	; 0x0
         b3940:	0a000010 	beq	b3988 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x11c>
         b3944:	e5902000 	ldr	r2, [r0]
         b3948:	e59fc010 	ldr	ip, [pc, #10]	; b3960 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0xf4>
         b394c:	e132000c 	teq	r2, ip
         b3950:	1a000003 	bne	b3964 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0xf8>
         b3954:	e1a00004 	mov	r0, r4
         b3958:	eb65e32b 	bl	1a2c60c <TFaxTool::$StartPageComplete(long)>
         b395c:	ea00000f 	b	b39a0 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x134>
         b3960:	66737067 	ldrvsbt	r7, [r3], -r7, rrx
         b3964:	e3300000 	teq	r0, #0	; 0x0
         b3968:	0a000006 	beq	b3988 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x11c>
         b396c:	e59fc010 	ldr	ip, [pc, #10]	; b3984 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x118>
         b3970:	e132000c 	teq	r2, ip
         b3974:	1a000003 	bne	b3988 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x11c>
         b3978:	e1a00004 	mov	r0, r4
         b397c:	eb65ca5f 	bl	1a26300 <TFaxTool::$EndPageComplete(long)>
         b3980:	ea000006 	b	b39a0 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x134>
         b3984:	66656f6d 	strvsbt	r6, [r5], -sp, ror #30
         b3988:	e3330000 	teq	r3, #0	; 0x0
         b398c:	1affffc9 	bne	b38b8 <TFaxTool::C2FHNG_OK_Rsp(unsigned long &)+0x4c>
         b3990:	e1a00004 	mov	r0, r4
         b3994:	e5941000 	ldr	r1, [r4]
         b3998:	e1a0e00f 	mov	lr, pc
         b399c:	e281ff46 	add	pc, r1, #280	; 0x118
         b39a0:	e3a00001 	mov	r0, #1	; 0x1
         b39a4:	e5850000 	str	r0, [r5]
         b39a8:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2RecvFDR_Cmd(unsigned long &)
 * Address: 000b39ac
 */
TFaxTool::C2RecvFDR_Cmd(unsigned long &) {
    /*
         b39ac:	e1a0c00d 	mov	ip, sp
         b39b0:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b39b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b39b8:	e1a04000 	mov	r4, r0
         b39bc:	e1a05001 	mov	r5, r1
         b39c0:	e590026c 	ldr	r0, [r0, #620]	; fField620
         b39c4:	e3800801 	orr	r0, r0, #65536	; 0x10000
         b39c8:	e584026c 	str	r0, [r4, #620]	; fField620
         b39cc:	e3a00001 	mov	r0, #1	; 0x1
         b39d0:	e3a06000 	mov	r6, #0	; 0x0
         b39d4:	e584027c 	str	r0, [r4, #636]	; fField636
         b39d8:	e58463f8 	str	r6, [r4, #1016]	; fField1016
         b39dc:	e5c4649d 	strb	r6, [r4, #1181]	; fField1181
         b39e0:	e5c46445 	strb	r6, [r4, #1093]	; fField1093
         b39e4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         b39e8:	e3100040 	tst	r0, #64	; 0x40
         b39ec:	0a000004 	beq	b3a04 <TFaxTool::C2RecvFDR_Cmd(unsigned long &)+0x58>
         b39f0:	e1a00004 	mov	r0, r4
         b39f4:	e3a01000 	mov	r1, #0	; 0x0
         b39f8:	e5942000 	ldr	r2, [r4]
         b39fc:	e1a0e00f 	mov	lr, pc
         b3a00:	e282f05c 	add	pc, r2, #92	; 0x5c
         b3a04:	e594126c 	ldr	r1, [r4, #620]	; fField620
         b3a08:	e3110c01 	tst	r1, #256	; 0x100
         b3a0c:	0a00000b 	beq	b3a40 <TFaxTool::C2RecvFDR_Cmd(unsigned long &)+0x94>
         b3a10:	e5940188 	ldr	r0, [r4, #392]	; fField392
         b3a14:	e5d02014 	ldrb	r2, [r0, #20]
         b3a18:	e3320000 	teq	r2, #0	; 0x0
         b3a1c:	1a000007 	bne	b3a40 <TFaxTool::C2RecvFDR_Cmd(unsigned long &)+0x94>
         b3a20:	e3c11c01 	bic	r1, r1, #256	; 0x100
         b3a24:	e584126c 	str	r1, [r4, #620]	; fField620
         b3a28:	e5a06010 	str	r6, [r0, #16]!	; fField16
         b3a2c:	e1a00004 	mov	r0, r4
         b3a30:	e3a01000 	mov	r1, #0	; 0x0
         b3a34:	e5942000 	ldr	r2, [r4]
         b3a38:	e1a0e00f 	mov	lr, pc
         b3a3c:	e282f0a8 	add	pc, r2, #168	; 0xa8
         b3a40:	e3a00ea6 	mov	r0, #2656	; 0xa60
         b3a44:	e2800a0e 	add	r0, r0, #57344	; 0xe000
         b3a48:	e5840528 	str	r0, [r4, #1320]	; fField1320
         b3a4c:	e1a00004 	mov	r0, r4
         b3a50:	e3a01026 	mov	r1, #38	; 0x26
         b3a54:	e2811c01 	add	r1, r1, #256	; 0x100
         b3a58:	eb658c31 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b3a5c:	e3300000 	teq	r0, #0	; 0x0
         b3a60:	1a000007 	bne	b3a84 <TFaxTool::C2RecvFDR_Cmd(unsigned long &)+0xd8>
         b3a64:	e1a00004 	mov	r0, r4
         b3a68:	eb65ca2f 	bl	1a2632c <TFaxTool::$FreeReceiveBuffers(void)>
         b3a6c:	e1a00004 	mov	r0, r4
         b3a70:	eb65bdd4 	bl	1a231c8 <TFaxTool::$AllocateReceiveBuffers(void)>
         b3a74:	e3300000 	teq	r0, #0	; 0x0
         b3a78:	03a00015 	moveq	r0, #21	; 0x15
         b3a7c:	05850000 	streq	r0, [r5]
         b3a80:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         b3a84:	e1a01005 	mov	r1, r5
         b3a88:	e1a00004 	mov	r0, r4
         b3a8c:	e3a0200d 	mov	r2, #13	; 0xd
         b3a90:	e2422c56 	sub	r2, r2, #22016	; 0x5600
         b3a94:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b3a98:	ea65a4f5 	b	1a1ce74 <TFaxTool::$C2AbortSession(unsigned long &, long)>
    */
}

/**
 * Symbol: TFaxTool::C2RecvFDR_Rsp(unsigned long &)
 * Address: 000b3a9c
 */
TFaxTool::C2RecvFDR_Rsp(unsigned long &) {
    /*
         b3a9c:	e1a0c00d 	mov	ip, sp
         b3aa0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b3aa4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b3aa8:	e1a04001 	mov	r4, r1
         b3aac:	eb659ca1 	bl	1a1ad38 <TFaxTool::$StartPhaseC(void)>
         b3ab0:	e3a00016 	mov	r0, #22	; 0x16
         b3ab4:	e5840000 	str	r0, [r4]
         b3ab8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2AbortSession(unsigned long &, long)
 * Address: 000b3abc
 */
TFaxTool::C2AbortSession(unsigned long &, long) {
    /*
         b3abc:	e1a0c00d 	mov	ip, sp
         b3ac0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b3ac4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b3ac8:	e1a04000 	mov	r4, r0
         b3acc:	e1a05001 	mov	r5, r1
         b3ad0:	e3a00e71 	mov	r0, #1808	; 0x710
         b3ad4:	e2800a02 	add	r0, r0, #8192	; 0x2000
         b3ad8:	e5840528 	str	r0, [r4, #1320]	; fField1320
         b3adc:	e1a00004 	mov	r0, r4
         b3ae0:	e3a0102b 	mov	r1, #43	; 0x2b
         b3ae4:	e2811c01 	add	r1, r1, #256	; 0x100
         b3ae8:	eb658c0d 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b3aec:	e3300000 	teq	r0, #0	; 0x0
         b3af0:	03a0001f 	moveq	r0, #31	; 0x1f
         b3af4:	05850000 	streq	r0, [r5]
         b3af8:	e1a00004 	mov	r0, r4
         b3afc:	e3a01d89 	mov	r1, #8768	; 0x2240
         b3b00:	e2411902 	sub	r1, r1, #32768	; 0x8000
         b3b04:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b3b08:	ea6c3560 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::C2ConfigModem(unsigned char *)
 * Address: 000b3b0c
 */
TFaxTool::C2ConfigModem(unsigned char *) {
    /*
         b3b0c:	e1a0c00d 	mov	ip, sp
         b3b10:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b3b14:	e24cb004 	sub	fp, ip, #4	; 0x4
         b3b18:	e1a04000 	mov	r4, r0
         b3b1c:	e3a00000 	mov	r0, #0	; 0x0
         b3b20:	e3a06000 	mov	r6, #0	; 0x0
         b3b24:	e5c16000 	strb	r6, [r1]
         b3b28:	e3a02d89 	mov	r2, #8768	; 0x2240
         b3b2c:	e2422902 	sub	r2, r2, #32768	; 0x8000
         b3b30:	e3a03030 	mov	r3, #48	; 0x30
         b3b34:	e594c824 	ldr	ip, [r4, #2084]	; fField2084
         b3b38:	e2845f4b 	add	r5, r4, #300	; 0x12c
         b3b3c:	e2855b01 	add	r5, r5, #1024	; 0x400
         b3b40:	e35c0007 	cmp	ip, #7	; 0x7
         b3b44:	908ff10c 	addls	pc, pc, ip, lsl #2
         b3b48:	ea00006c 	b	b3d00 <TFaxTool::C2ConfigModem(unsigned char *)+0x1f4>
         b3b4c:	ea00000d 	b	b3b88 <TFaxTool::C2ConfigModem(unsigned char *)+0x7c>
         b3b50:	ea00006a 	b	b3d00 <TFaxTool::C2ConfigModem(unsigned char *)+0x1f4>
         b3b54:	ea000013 	b	b3ba8 <TFaxTool::C2ConfigModem(unsigned char *)+0x9c>
         b3b58:	ea000020 	b	b3be0 <TFaxTool::C2ConfigModem(unsigned char *)+0xd4>
         b3b5c:	ea000030 	b	b3c24 <TFaxTool::C2ConfigModem(unsigned char *)+0x118>
         b3b60:	ea000047 	b	b3c84 <TFaxTool::C2ConfigModem(unsigned char *)+0x178>
         b3b64:	ea000056 	b	b3cc4 <TFaxTool::C2ConfigModem(unsigned char *)+0x1b8>
         b3b68:	e59435a4 	ldr	r3, [r4, #1444]	; fField1444
         b3b6c:	e3330000 	teq	r3, #0	; 0x0
         b3b70:	05b435ac 	ldreq	r3, [r4, #1452]!	; fField1452
         b3b74:	03330000 	teqeq	r3, #0	; 0x0
         b3b78:	03a02001 	moveq	r2, #1	; 0x1
         b3b7c:	05c12000 	streqb	r2, [r1]
         b3b80:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         b3b84:	ea00005b 	b	b3cf8 <TFaxTool::C2ConfigModem(unsigned char *)+0x1ec>
         b3b88:	e3a00e7d 	mov	r0, #2000	; 0x7d0
         b3b8c:	e5840528 	str	r0, [r4, #1320]	; fField1320
         b3b90:	e3a00002 	mov	r0, #2	; 0x2
         b3b94:	e5840824 	str	r0, [r4, #2084]	; fField2084
         b3b98:	e1a00004 	mov	r0, r4
         b3b9c:	e3a0101a 	mov	r1, #26	; 0x1a
         b3ba0:	e2811c01 	add	r1, r1, #256	; 0x100
         b3ba4:	ea000051 	b	b3cf0 <TFaxTool::C2ConfigModem(unsigned char *)+0x1e4>
         b3ba8:	e59405a4 	ldr	r0, [r4, #1444]	; fField1444
         b3bac:	e3300000 	teq	r0, #0	; 0x0
         b3bb0:	1a000050 	bne	b3cf8 <TFaxTool::C2ConfigModem(unsigned char *)+0x1ec>
         b3bb4:	e59405ac 	ldr	r0, [r4, #1452]	; fField1452
         b3bb8:	e3300000 	teq	r0, #0	; 0x0
         b3bbc:	13300004 	teqne	r0, #4	; 0x4
         b3bc0:	1a00004c 	bne	b3cf8 <TFaxTool::C2ConfigModem(unsigned char *)+0x1ec>
         b3bc4:	e3a00003 	mov	r0, #3	; 0x3
         b3bc8:	e5840824 	str	r0, [r4, #2084]	; fField2084
         b3bcc:	e5c4352c 	strb	r3, [r4, #1324]	; fField1324
         b3bd0:	e1a00004 	mov	r0, r4
         b3bd4:	e3a01033 	mov	r1, #51	; 0x33
         b3bd8:	e2811c01 	add	r1, r1, #256	; 0x100
         b3bdc:	ea000043 	b	b3cf0 <TFaxTool::C2ConfigModem(unsigned char *)+0x1e4>
         b3be0:	e59405a4 	ldr	r0, [r4, #1444]	; fField1444
         b3be4:	e3300000 	teq	r0, #0	; 0x0
         b3be8:	1a000042 	bne	b3cf8 <TFaxTool::C2ConfigModem(unsigned char *)+0x1ec>
         b3bec:	e59405ac 	ldr	r0, [r4, #1452]	; fField1452
         b3bf0:	e3300000 	teq	r0, #0	; 0x0
         b3bf4:	13300004 	teqne	r0, #4	; 0x4
         b3bf8:	1a00003e 	bne	b3cf8 <TFaxTool::C2ConfigModem(unsigned char *)+0x1ec>
         b3bfc:	e3a00004 	mov	r0, #4	; 0x4
         b3c00:	e5840824 	str	r0, [r4, #2084]	; fField2084
         b3c04:	e2841e86 	add	r1, r4, #2144	; 0x860
         b3c08:	e1a00005 	mov	r0, r5
         b3c0c:	e3a02015 	mov	r2, #21	; 0x15
         b3c10:	eb6c07a9 	bl	1bb5abc <$strncpy>
         b3c14:	e5c46540 	strb	r6, [r4, #1344]	; fField1344
         b3c18:	e1a00004 	mov	r0, r4
         b3c1c:	e3a01f4b 	mov	r1, #300	; 0x12c
         b3c20:	ea000032 	b	b3cf0 <TFaxTool::C2ConfigModem(unsigned char *)+0x1e4>
         b3c24:	e59405a4 	ldr	r0, [r4, #1444]	; fField1444
         b3c28:	e3300000 	teq	r0, #0	; 0x0
         b3c2c:	1a000031 	bne	b3cf8 <TFaxTool::C2ConfigModem(unsigned char *)+0x1ec>
         b3c30:	e59405ac 	ldr	r0, [r4, #1452]	; fField1452
         b3c34:	e3300000 	teq	r0, #0	; 0x0
         b3c38:	13300004 	teqne	r0, #4	; 0x4
         b3c3c:	1a00002d 	bne	b3cf8 <TFaxTool::C2ConfigModem(unsigned char *)+0x1ec>
         b3c40:	e3a00005 	mov	r0, #5	; 0x5
         b3c44:	e5840824 	str	r0, [r4, #2084]	; fField2084
         b3c48:	e284202c 	add	r2, r4, #44	; 0x2c
         b3c4c:	e2822b02 	add	r2, r2, #2048	; 0x800
         b3c50:	e284103c 	add	r1, r4, #60	; 0x3c
         b3c54:	e2811b02 	add	r1, r1, #2048	; 0x800
         b3c58:	e1a06001 	mov	r6, r1
         b3c5c:	e1a00004 	mov	r0, r4
         b3c60:	eb65a485 	bl	1a1ce7c <TFaxTool::$C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)>
         b3c64:	e8965000 	ldmia	r6, {ip, lr}
         b3c68:	e8855000 	stmia	r5, {ip, lr}
         b3c6c:	e3300000 	teq	r0, #0	; 0x0
         b3c70:	01a00004 	moveq	r0, r4
         b3c74:	03a01021 	moveq	r1, #33	; 0x21
         b3c78:	02811c01 	addeq	r1, r1, #256	; 0x100
         b3c7c:	0a00001b 	beq	b3cf0 <TFaxTool::C2ConfigModem(unsigned char *)+0x1e4>
         b3c80:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         b3c84:	e59405a4 	ldr	r0, [r4, #1444]	; fField1444
         b3c88:	e3300000 	teq	r0, #0	; 0x0
         b3c8c:	059405ac 	ldreq	r0, [r4, #1452]	; fField1452
         b3c90:	03300000 	teqeq	r0, #0	; 0x0
         b3c94:	1a000017 	bne	b3cf8 <TFaxTool::C2ConfigModem(unsigned char *)+0x1ec>
         b3c98:	e3a00006 	mov	r0, #6	; 0x6
         b3c9c:	e5840824 	str	r0, [r4, #2084]	; fField2084
         b3ca0:	e5d402d0 	ldrb	r0, [r4, #720]	; fField720
         b3ca4:	e3300000 	teq	r0, #0	; 0x0
         b3ca8:	03a00031 	moveq	r0, #49	; 0x31
         b3cac:	13a00030 	movne	r0, #48	; 0x30
         b3cb0:	e5c4052c 	strb	r0, [r4, #1324]	; fField1324
         b3cb4:	e1a00004 	mov	r0, r4
         b3cb8:	e3a0101f 	mov	r1, #31	; 0x1f
         b3cbc:	e2811c01 	add	r1, r1, #256	; 0x100
         b3cc0:	ea00000a 	b	b3cf0 <TFaxTool::C2ConfigModem(unsigned char *)+0x1e4>
         b3cc4:	e59405a4 	ldr	r0, [r4, #1444]	; fField1444
         b3cc8:	e3300000 	teq	r0, #0	; 0x0
         b3ccc:	059405ac 	ldreq	r0, [r4, #1452]	; fField1452
         b3cd0:	03300000 	teqeq	r0, #0	; 0x0
         b3cd4:	1a000007 	bne	b3cf8 <TFaxTool::C2ConfigModem(unsigned char *)+0x1ec>
         b3cd8:	e3a00007 	mov	r0, #7	; 0x7
         b3cdc:	e5840824 	str	r0, [r4, #2084]	; fField2084
         b3ce0:	e5c4352c 	strb	r3, [r4, #1324]	; fField1324
         b3ce4:	e1a00004 	mov	r0, r4
         b3ce8:	e3a0101b 	mov	r1, #27	; 0x1b
         b3cec:	e2811c01 	add	r1, r1, #256	; 0x100
         b3cf0:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b3cf4:	ea658b8a 	b	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b3cf8:	e1a00002 	mov	r0, r2
         b3cfc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         b3d00:	e3a0000d 	mov	r0, #13	; 0xd
         b3d04:	e2400c56 	sub	r0, r0, #22016	; 0x5600
         b3d08:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)
 * Address: 000b3d0c
 */
TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &) {
    /*
         b3d0c:	e92d40f0 	stmdb	sp!, {r4, r5, r6, r7, lr}
         b3d10:	e3a06000 	mov	r6, #0	; 0x0
         b3d14:	e59032a4 	ldr	r3, [r0, #676]	; fField676
         b3d18:	e1a03a03 	mov	r3, r3, lsl #20
         b3d1c:	e1b04f23 	movs	r4, r3, lsr #30
         b3d20:	e3a0e032 	mov	lr, #50	; 0x32
         b3d24:	e3a0c031 	mov	ip, #49	; 0x31
         b3d28:	e3a03030 	mov	r3, #48	; 0x30
         b3d2c:	0a000005 	beq	b3d48 <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x3c>
         b3d30:	e3340001 	teq	r4, #1	; 0x1
         b3d34:	05c1c003 	streqb	ip, [r1, #3]	; fField3
         b3d38:	0a000003 	beq	b3d4c <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x40>
         b3d3c:	e3340002 	teq	r4, #2	; 0x2
         b3d40:	05c1e003 	streqb	lr, [r1, #3]	; fField3
         b3d44:	0a000000 	beq	b3d4c <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x40>
         b3d48:	e5c13003 	strb	r3, [r1, #3]	; fField3
         b3d4c:	e59042a4 	ldr	r4, [r0, #676]	; fField676
         b3d50:	e1a04b04 	mov	r4, r4, lsl #22
         b3d54:	e1b04f24 	movs	r4, r4, lsr #30
         b3d58:	0a000005 	beq	b3d74 <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x68>
         b3d5c:	e3340001 	teq	r4, #1	; 0x1
         b3d60:	05c1c002 	streqb	ip, [r1, #2]	; fField2
         b3d64:	0a000003 	beq	b3d78 <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x6c>
         b3d68:	e3340002 	teq	r4, #2	; 0x2
         b3d6c:	05c1e002 	streqb	lr, [r1, #2]	; fField2
         b3d70:	0a000000 	beq	b3d78 <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x6c>
         b3d74:	e5c13002 	strb	r3, [r1, #2]	; fField2
         b3d78:	e59042a4 	ldr	r4, [r0, #676]	; fField676
         b3d7c:	e3140501 	tst	r4, #4194304	; 0x400000
         b3d80:	03a04030 	moveq	r4, #48	; 0x30
         b3d84:	13a04031 	movne	r4, #49	; 0x31
         b3d88:	e5c14000 	strb	r4, [r1]
         b3d8c:	e5d22001 	ldrb	r2, [r2, #1]	; fField1
         b3d90:	e3120010 	tst	r2, #16	; 0x10
         b3d94:	e3a05035 	mov	r5, #53	; 0x35
         b3d98:	e3a04033 	mov	r4, #51	; 0x33
         b3d9c:	15907324 	ldrne	r7, [r0, #804]	; fField804
         b3da0:	12077b02 	andne	r7, r7, #2048	; 0x800
         b3da4:	13370000 	teqne	r7, #0	; 0x0
         b3da8:	15c15001 	strneb	r5, [r1, #1]	; fField1
         b3dac:	1a00001c 	bne	b3e24 <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x118>
         b3db0:	e3120020 	tst	r2, #32	; 0x20
         b3db4:	15907324 	ldrne	r7, [r0, #804]	; fField804
         b3db8:	12077c02 	andne	r7, r7, #512	; 0x200
         b3dbc:	13370000 	teqne	r7, #0	; 0x0
         b3dc0:	13a02034 	movne	r2, #52	; 0x34
         b3dc4:	15c12001 	strneb	r2, [r1, #1]	; fField1
         b3dc8:	1a000015 	bne	b3e24 <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x118>
         b3dcc:	e3120008 	tst	r2, #8	; 0x8
         b3dd0:	15907324 	ldrne	r7, [r0, #804]	; fField804
         b3dd4:	120770c0 	andne	r7, r7, #192	; 0xc0
         b3dd8:	13370000 	teqne	r7, #0	; 0x0
         b3ddc:	15c14001 	strneb	r4, [r1, #1]	; fField1
         b3de0:	1a00000f 	bne	b3e24 <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x118>
         b3de4:	e3120004 	tst	r2, #4	; 0x4
         b3de8:	15907324 	ldrne	r7, [r0, #804]	; fField804
         b3dec:	12077018 	andne	r7, r7, #24	; 0x18
         b3df0:	13370000 	teqne	r7, #0	; 0x0
         b3df4:	15c1e001 	strneb	lr, [r1, #1]	; fField1
         b3df8:	1a000009 	bne	b3e24 <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x118>
         b3dfc:	e3120002 	tst	r2, #2	; 0x2
         b3e00:	1590e324 	ldrne	lr, [r0, #804]	; fField804
         b3e04:	120ee004 	andne	lr, lr, #4	; 0x4
         b3e08:	133e0000 	teqne	lr, #0	; 0x0
         b3e0c:	15c1c001 	strneb	ip, [r1, #1]	; fField1
         b3e10:	1a000003 	bne	b3e24 <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x118>
         b3e14:	e3120001 	tst	r2, #1	; 0x1
         b3e18:	15902324 	ldrne	r2, [r0, #804]	; fField804
         b3e1c:	12022002 	andne	r2, r2, #2	; 0x2
         b3e20:	e5c13001 	strb	r3, [r1, #1]	; fField1
         b3e24:	e5c13004 	strb	r3, [r1, #4]	; fField4
         b3e28:	e5c13005 	strb	r3, [r1, #5]	; fField5
         b3e2c:	e5c13006 	strb	r3, [r1, #6]	; fField6
         b3e30:	e59002fc 	ldr	r0, [r0, #764]	; fField764
         b3e34:	e3500028 	cmp	r0, #40	; 0x28
         b3e38:	23a00037 	movcs	r0, #55	; 0x37
         b3e3c:	25c10007 	strcsb	r0, [r1, #7]
         b3e40:	2a000008 	bcs	b3e68 <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x15c>
         b3e44:	e3500014 	cmp	r0, #20	; 0x14
         b3e48:	25c15007 	strcsb	r5, [r1, #7]
         b3e4c:	2a000005 	bcs	b3e68 <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x15c>
         b3e50:	e350000a 	cmp	r0, #10	; 0xa
         b3e54:	25c14007 	strcsb	r4, [r1, #7]
         b3e58:	2a000002 	bcs	b3e68 <TFaxTool::C2DisFromCapabilities(FaxClass2FDIS &, FaxClass2FDIS &)+0x15c>
         b3e5c:	e3500005 	cmp	r0, #5	; 0x5
         b3e60:	35c13007 	strccb	r3, [r1, #7]
         b3e64:	25c1c007 	strcsb	ip, [r1, #7]
         b3e68:	e1a00006 	mov	r0, r6
         b3e6c:	e8bd80f0 	ldmia	sp!, {r4, r5, r6, r7, pc}
    */
}

/**
 * Symbol: TFaxTool::C2RecvCfgMdm(unsigned long &)
 * Address: 000b3e70
 */
TFaxTool::C2RecvCfgMdm(unsigned long &) {
    /*
         b3e70:	e1a0c00d 	mov	ip, sp
         b3e74:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b3e78:	e24cb004 	sub	fp, ip, #4	; 0x4
         b3e7c:	e1a04000 	mov	r4, r0
         b3e80:	e1a05001 	mov	r5, r1
         b3e84:	e24dd004 	sub	sp, sp, #4	; 0x4
         b3e88:	e1a0100d 	mov	r1, sp
         b3e8c:	eb65a3f9 	bl	1a1ce78 <TFaxTool::$C2ConfigModem(unsigned char *)>
         b3e90:	e3300000 	teq	r0, #0	; 0x0
         b3e94:	0a000004 	beq	b3eac <TFaxTool::C2RecvCfgMdm(unsigned long &)+0x3c>
         b3e98:	e1a00004 	mov	r0, r4
         b3e9c:	e3a01d89 	mov	r1, #8768	; 0x2240
         b3ea0:	e2411902 	sub	r1, r1, #32768	; 0x8000
         b3ea4:	eb6c3479 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b3ea8:	ea000009 	b	b3ed4 <TFaxTool::C2RecvCfgMdm(unsigned long &)+0x64>
         b3eac:	e5dd0000 	ldrb	r0, [sp]
         b3eb0:	e3300000 	teq	r0, #0	; 0x0
         b3eb4:	0a000006 	beq	b3ed4 <TFaxTool::C2RecvCfgMdm(unsigned long &)+0x64>
         b3eb8:	e3a00005 	mov	r0, #5	; 0x5
         b3ebc:	e5850000 	str	r0, [r5]
         b3ec0:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b3ec4:	e3c00004 	bic	r0, r0, #4	; 0x4
         b3ec8:	e584026c 	str	r0, [r4, #620]	; fField620
         b3ecc:	e1a00004 	mov	r0, r4
         b3ed0:	eb659b96 	bl	1a1ad30 <TFaxTool::$StartPhaseA(void)>
         b3ed4:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2RecvCopyQualityCheck(unsigned long &)
 * Address: 000b3ed8
 */
TFaxTool::C2RecvCopyQualityCheck(unsigned long &) {
    /*
         b3ed8:	e1a0c00d 	mov	ip, sp
         b3edc:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b3ee0:	e24cb004 	sub	fp, ip, #4	; 0x4
         b3ee4:	e1a04000 	mov	r4, r0
         b3ee8:	e1a05001 	mov	r5, r1
         b3eec:	e5900188 	ldr	r0, [r0, #392]	; fField392
         b3ef0:	e5d00015 	ldrb	r0, [r0, #21]
         b3ef4:	e3a0600d 	mov	r6, #13	; 0xd
         b3ef8:	e2466c56 	sub	r6, r6, #22016	; 0x5600
         b3efc:	e3300000 	teq	r0, #0	; 0x0
         b3f00:	1a000003 	bne	b3f14 <TFaxTool::C2RecvCopyQualityCheck(unsigned long &)+0x3c>
         b3f04:	e1a01005 	mov	r1, r5
         b3f08:	e1a00004 	mov	r0, r4
         b3f0c:	e1a02006 	mov	r2, r6
         b3f10:	eb65a3d7 	bl	1a1ce74 <TFaxTool::$C2AbortSession(unsigned long &, long)>
         b3f14:	e5d40844 	ldrb	r0, [r4, #2116]	; fField2116
         b3f18:	e3300032 	teq	r0, #50	; 0x32
         b3f1c:	13a01000 	movne	r1, #0	; 0x0
         b3f20:	03a01001 	moveq	r1, #1	; 0x1
         b3f24:	e5940188 	ldr	r0, [r4, #392]	; fField392
         b3f28:	e5c01014 	strb	r1, [r0, #20]
         b3f2c:	e3a01000 	mov	r1, #0	; 0x0
         b3f30:	e5940188 	ldr	r0, [r4, #392]	; fField392
         b3f34:	e5a01010 	str	r1, [r0, #16]!	; fField16
         b3f38:	e1a00004 	mov	r0, r4
         b3f3c:	eb65c4e1 	bl	1a252c8 <TFaxTool::$CopyQualityResponse(void)>
         b3f40:	e350008d 	cmp	r0, #141	; 0x8d
         b3f44:	0a000009 	beq	b3f70 <TFaxTool::C2RecvCopyQualityCheck(unsigned long &)+0x98>
         b3f48:	ca000004 	bgt	b3f60 <TFaxTool::C2RecvCopyQualityCheck(unsigned long &)+0x88>
         b3f4c:	e330004c 	teq	r0, #76	; 0x4c
         b3f50:	1330004d 	teqne	r0, #77	; 0x4d
         b3f54:	03a00032 	moveq	r0, #50	; 0x32
         b3f58:	0a000005 	beq	b3f74 <TFaxTool::C2RecvCopyQualityCheck(unsigned long &)+0x9c>
         b3f5c:	ea000003 	b	b3f70 <TFaxTool::C2RecvCopyQualityCheck(unsigned long &)+0x98>
         b3f60:	e33000cc 	teq	r0, #204	; 0xcc
         b3f64:	133000cd 	teqne	r0, #205	; 0xcd
         b3f68:	03a00033 	moveq	r0, #51	; 0x33
         b3f6c:	0a000000 	beq	b3f74 <TFaxTool::C2RecvCopyQualityCheck(unsigned long &)+0x9c>
         b3f70:	e3a00031 	mov	r0, #49	; 0x31
         b3f74:	e5941848 	ldr	r1, [r4, #2120]	; fField2120
         b3f78:	e1310000 	teq	r1, r0
         b3f7c:	0a00000e 	beq	b3fbc <TFaxTool::C2RecvCopyQualityCheck(unsigned long &)+0xe4>
         b3f80:	e3a01ea6 	mov	r1, #2656	; 0xa60
         b3f84:	e2811a0e 	add	r1, r1, #57344	; 0xe000
         b3f88:	e5841528 	str	r1, [r4, #1320]	; fField1320
         b3f8c:	e5c4052c 	strb	r0, [r4, #1324]	; fField1324
         b3f90:	e1a00004 	mov	r0, r4
         b3f94:	e3a01f4d 	mov	r1, #308	; 0x134
         b3f98:	eb658ae1 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b3f9c:	e3300000 	teq	r0, #0	; 0x0
         b3fa0:	03a0001a 	moveq	r0, #26	; 0x1a
         b3fa4:	0a00000c 	beq	b3fdc <TFaxTool::C2RecvCopyQualityCheck(unsigned long &)+0x104>
         b3fa8:	e1a01005 	mov	r1, r5
         b3fac:	e1a00004 	mov	r0, r4
         b3fb0:	e1a02006 	mov	r2, r6
         b3fb4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b3fb8:	ea65a3ad 	b	1a1ce74 <TFaxTool::$C2AbortSession(unsigned long &, long)>
         b3fbc:	e1a01005 	mov	r1, r5
         b3fc0:	e1a00004 	mov	r0, r4
         b3fc4:	eb65a7bf 	bl	1a1dec8 <TFaxTool::$C2RecvFDR_Cmd(unsigned long &)>
         b3fc8:	e5d40844 	ldrb	r0, [r4, #2116]	; fField2116
         b3fcc:	e3300032 	teq	r0, #50	; 0x32
         b3fd0:	13300036 	teqne	r0, #54	; 0x36
         b3fd4:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         b3fd8:	e3a0001e 	mov	r0, #30	; 0x1e
         b3fdc:	e5850000 	str	r0, [r5]
         b3fe0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2SetSessionParameters(void)
 * Address: 000b3fe4
 */
TFaxTool::C2SetSessionParameters(void) {
    /*
         b3fe4:	e1a0c00d 	mov	ip, sp
         b3fe8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b3fec:	e24cb004 	sub	fp, ip, #4	; 0x4
         b3ff0:	e1a04000 	mov	r4, r0
         b3ff4:	e5d00834 	ldrb	r0, [r0, #2100]	; fField2100
         b3ff8:	e3300030 	teq	r0, #48	; 0x30
         b3ffc:	03a00062 	moveq	r0, #98	; 0x62
         b4000:	0a000002 	beq	b4010 <TFaxTool::C2SetSessionParameters(void)+0x2c>
         b4004:	e3300031 	teq	r0, #49	; 0x31
         b4008:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         b400c:	e3a000c4 	mov	r0, #196	; 0xc4
         b4010:	e58402d8 	str	r0, [r4, #728]	; fField728
         b4014:	e3a000cc 	mov	r0, #204	; 0xcc
         b4018:	e58402d4 	str	r0, [r4, #724]	; fField724
         b401c:	e5d40836 	ldrb	r0, [r4, #2102]	; fField2102
         b4020:	e3300030 	teq	r0, #48	; 0x30
         b4024:	03a000d8 	moveq	r0, #216	; 0xd8
         b4028:	058402dc 	streq	r0, [r4, #732]	; fField732
         b402c:	03a00038 	moveq	r0, #56	; 0x38
         b4030:	02800b01 	addeq	r0, r0, #1024	; 0x400
         b4034:	0a000009 	beq	b4060 <TFaxTool::C2SetSessionParameters(void)+0x7c>
         b4038:	e3300031 	teq	r0, #49	; 0x31
         b403c:	03a00c01 	moveq	r0, #256	; 0x100
         b4040:	058402dc 	streq	r0, [r4, #732]	; fField732
         b4044:	03a00c05 	moveq	r0, #1280	; 0x500
         b4048:	0a000004 	beq	b4060 <TFaxTool::C2SetSessionParameters(void)+0x7c>
         b404c:	e3300032 	teq	r0, #50	; 0x32
         b4050:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         b4054:	e3a00e13 	mov	r0, #304	; 0x130
         b4058:	e58402dc 	str	r0, [r4, #732]	; fField732
         b405c:	e3a00e5f 	mov	r0, #1520	; 0x5f0
         b4060:	e58402e0 	str	r0, [r4, #736]	; fField736
         b4064:	e5d40835 	ldrb	r0, [r4, #2101]	; fField2101
         b4068:	e2400030 	sub	r0, r0, #48	; 0x30
         b406c:	e3500005 	cmp	r0, #5	; 0x5
         b4070:	908ff100 	addls	pc, pc, r0, lsl #2
         b4074:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b4078:	ea000005 	b	b4094 <TFaxTool::C2SetSessionParameters(void)+0xb0>
         b407c:	ea000006 	b	b409c <TFaxTool::C2SetSessionParameters(void)+0xb8>
         b4080:	ea000007 	b	b40a4 <TFaxTool::C2SetSessionParameters(void)+0xc0>
         b4084:	ea000009 	b	b40b0 <TFaxTool::C2SetSessionParameters(void)+0xcc>
         b4088:	ea00000a 	b	b40b8 <TFaxTool::C2SetSessionParameters(void)+0xd4>
         b408c:	e3a00de1 	mov	r0, #14400	; 0x3840
         b4090:	ea00000a 	b	b40c0 <TFaxTool::C2SetSessionParameters(void)+0xdc>
         b4094:	e3a00e96 	mov	r0, #2400	; 0x960
         b4098:	ea000008 	b	b40c0 <TFaxTool::C2SetSessionParameters(void)+0xdc>
         b409c:	e3a00d4b 	mov	r0, #4800	; 0x12c0
         b40a0:	ea000006 	b	b40c0 <TFaxTool::C2SetSessionParameters(void)+0xdc>
         b40a4:	e3a00ec2 	mov	r0, #3104	; 0xc20
         b40a8:	e2800a01 	add	r0, r0, #4096	; 0x1000
         b40ac:	ea000003 	b	b40c0 <TFaxTool::C2SetSessionParameters(void)+0xdc>
         b40b0:	e3a00d96 	mov	r0, #9600	; 0x2580
         b40b4:	ea000001 	b	b40c0 <TFaxTool::C2SetSessionParameters(void)+0xdc>
         b40b8:	e3a00eee 	mov	r0, #3808	; 0xee0
         b40bc:	e2800a02 	add	r0, r0, #8192	; 0x2000
         b40c0:	e58402b0 	str	r0, [r4, #688]	; fField688
         b40c4:	e59403ec 	ldr	r0, [r4, #1004]	; fField1004
         b40c8:	e0801080 	add	r1, r0, r0, lsl #1
         b40cc:	e0611380 	rsb	r1, r1, r0, lsl #7
         b40d0:	e1a01301 	mov	r1, r1, lsl #6
         b40d4:	e59402b0 	ldr	r0, [r4, #688]	; fField688
         b40d8:	eb6bfa1a 	bl	1bb2948 <$__rt_udiv>
         b40dc:	e2800fe2 	add	r0, r0, #904	; 0x388
         b40e0:	e2800a01 	add	r0, r0, #4096	; 0x1000
         b40e4:	e5a402c0 	str	r0, [r4, #704]!	; fField704
         b40e8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2TransCfgMdm(unsigned long &)
 * Address: 000b40ec
 */
TFaxTool::C2TransCfgMdm(unsigned long &) {
    /*
         b40ec:	e1a0c00d 	mov	ip, sp
         b40f0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b40f4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b40f8:	e1a04000 	mov	r4, r0
         b40fc:	e1a05001 	mov	r5, r1
         b4100:	e24dd004 	sub	sp, sp, #4	; 0x4
         b4104:	e1a0100d 	mov	r1, sp
         b4108:	eb65a35a 	bl	1a1ce78 <TFaxTool::$C2ConfigModem(unsigned char *)>
         b410c:	e3300000 	teq	r0, #0	; 0x0
         b4110:	0a000004 	beq	b4128 <TFaxTool::C2TransCfgMdm(unsigned long &)+0x3c>
         b4114:	e1a00004 	mov	r0, r4
         b4118:	e3a01d89 	mov	r1, #8768	; 0x2240
         b411c:	e2411902 	sub	r1, r1, #32768	; 0x8000
         b4120:	eb6c33da 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b4124:	ea000009 	b	b4150 <TFaxTool::C2TransCfgMdm(unsigned long &)+0x64>
         b4128:	e5dd0000 	ldrb	r0, [sp]
         b412c:	e3300000 	teq	r0, #0	; 0x0
         b4130:	0a000006 	beq	b4150 <TFaxTool::C2TransCfgMdm(unsigned long &)+0x64>
         b4134:	e3a00004 	mov	r0, #4	; 0x4
         b4138:	e5850000 	str	r0, [r5]
         b413c:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b4140:	e3800004 	orr	r0, r0, #4	; 0x4
         b4144:	e584026c 	str	r0, [r4, #620]	; fField620
         b4148:	e1a00004 	mov	r0, r4
         b414c:	eb659af7 	bl	1a1ad30 <TFaxTool::$StartPhaseA(void)>
         b4150:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)
 * Address: 000b4154
 */
TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &) {
    /*
         b4154:	e1a0c00d 	mov	ip, sp
         b4158:	e92dd837 	stmdb	sp!, {r0, r1, r2, r4, r5, fp, ip, lr, pc}
         b415c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4160:	e24dd004 	sub	sp, sp, #4	; 0x4
         b4164:	e3a04039 	mov	r4, #57	; 0x39
         b4168:	e2444c5e 	sub	r4, r4, #24064	; 0x5e00
         b416c:	e3a05000 	mov	r5, #0	; 0x0
         b4170:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
         b4174:	e5c05000 	strb	r5, [r0]
         b4178:	e1a0100d 	mov	r1, sp
         b417c:	e24b001c 	sub	r0, fp, #28	; 0x1c
         b4180:	e3a02000 	mov	r2, #0	; 0x0
         b4184:	eb000086 	bl	b43a4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x250>
         b4188:	e3300000 	teq	r0, #0	; 0x0
         b418c:	059d0000 	ldreq	r0, [sp]
         b4190:	051b1018 	ldreq	r1, [fp, -#24]	; fField24
         b4194:	05c10000 	streqb	r0, [r1]
         b4198:	e51b001c 	ldr	r0, [fp, -#28]
         b419c:	e5d01000 	ldrb	r1, [r0]
         b41a0:	e3310000 	teq	r1, #0	; 0x0
         b41a4:	0a00005c 	beq	b431c <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x1c8>
         b41a8:	e2800001 	add	r0, r0, #1	; 0x1
         b41ac:	e50b001c 	str	r0, [fp, -#28]
         b41b0:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
         b41b4:	e5c05001 	strb	r5, [r0, #1]	; fField1
         b41b8:	e1a0100d 	mov	r1, sp
         b41bc:	e24b001c 	sub	r0, fp, #28	; 0x1c
         b41c0:	e3a02000 	mov	r2, #0	; 0x0
         b41c4:	eb000076 	bl	b43a4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x250>
         b41c8:	e3300000 	teq	r0, #0	; 0x0
         b41cc:	059d0000 	ldreq	r0, [sp]
         b41d0:	051b1018 	ldreq	r1, [fp, -#24]	; fField24
         b41d4:	05c10001 	streqb	r0, [r1, #1]	; fField1
         b41d8:	e51b001c 	ldr	r0, [fp, -#28]
         b41dc:	e5d01000 	ldrb	r1, [r0]
         b41e0:	e3310000 	teq	r1, #0	; 0x0
         b41e4:	0a00004c 	beq	b431c <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x1c8>
         b41e8:	e2800001 	add	r0, r0, #1	; 0x1
         b41ec:	e50b001c 	str	r0, [fp, -#28]
         b41f0:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
         b41f4:	e5c05002 	strb	r5, [r0, #2]	; fField2
         b41f8:	e1a0100d 	mov	r1, sp
         b41fc:	e24b001c 	sub	r0, fp, #28	; 0x1c
         b4200:	e3a02000 	mov	r2, #0	; 0x0
         b4204:	eb000066 	bl	b43a4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x250>
         b4208:	e3300000 	teq	r0, #0	; 0x0
         b420c:	059d0000 	ldreq	r0, [sp]
         b4210:	051b1018 	ldreq	r1, [fp, -#24]	; fField24
         b4214:	05c10002 	streqb	r0, [r1, #2]	; fField2
         b4218:	e51b001c 	ldr	r0, [fp, -#28]
         b421c:	e5d01000 	ldrb	r1, [r0]
         b4220:	e3310000 	teq	r1, #0	; 0x0
         b4224:	0a00003c 	beq	b431c <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x1c8>
         b4228:	e2800001 	add	r0, r0, #1	; 0x1
         b422c:	e50b001c 	str	r0, [fp, -#28]
         b4230:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
         b4234:	e5c05003 	strb	r5, [r0, #3]	; fField3
         b4238:	e1a0100d 	mov	r1, sp
         b423c:	e24b001c 	sub	r0, fp, #28	; 0x1c
         b4240:	e3a02000 	mov	r2, #0	; 0x0
         b4244:	eb000056 	bl	b43a4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x250>
         b4248:	e3300000 	teq	r0, #0	; 0x0
         b424c:	059d0000 	ldreq	r0, [sp]
         b4250:	051b1018 	ldreq	r1, [fp, -#24]	; fField24
         b4254:	05c10003 	streqb	r0, [r1, #3]	; fField3
         b4258:	e51b001c 	ldr	r0, [fp, -#28]
         b425c:	e5d01000 	ldrb	r1, [r0]
         b4260:	e3310000 	teq	r1, #0	; 0x0
         b4264:	0a00002c 	beq	b431c <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x1c8>
         b4268:	e2800001 	add	r0, r0, #1	; 0x1
         b426c:	e50b001c 	str	r0, [fp, -#28]
         b4270:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
         b4274:	e5c05004 	strb	r5, [r0, #4]	; fField4
         b4278:	e1a0100d 	mov	r1, sp
         b427c:	e24b001c 	sub	r0, fp, #28	; 0x1c
         b4280:	e3a02000 	mov	r2, #0	; 0x0
         b4284:	eb000046 	bl	b43a4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x250>
         b4288:	e3300000 	teq	r0, #0	; 0x0
         b428c:	059d0000 	ldreq	r0, [sp]
         b4290:	051b1018 	ldreq	r1, [fp, -#24]	; fField24
         b4294:	05c10004 	streqb	r0, [r1, #4]	; fField4
         b4298:	e51b001c 	ldr	r0, [fp, -#28]
         b429c:	e5d01000 	ldrb	r1, [r0]
         b42a0:	e3310000 	teq	r1, #0	; 0x0
         b42a4:	0a00001c 	beq	b431c <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x1c8>
         b42a8:	e2800001 	add	r0, r0, #1	; 0x1
         b42ac:	e50b001c 	str	r0, [fp, -#28]
         b42b0:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
         b42b4:	e5c05005 	strb	r5, [r0, #5]	; fField5
         b42b8:	e1a0100d 	mov	r1, sp
         b42bc:	e24b001c 	sub	r0, fp, #28	; 0x1c
         b42c0:	e3a02000 	mov	r2, #0	; 0x0
         b42c4:	eb000036 	bl	b43a4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x250>
         b42c8:	e3300000 	teq	r0, #0	; 0x0
         b42cc:	059d0000 	ldreq	r0, [sp]
         b42d0:	051b1018 	ldreq	r1, [fp, -#24]	; fField24
         b42d4:	05c10005 	streqb	r0, [r1, #5]	; fField5
         b42d8:	e51b001c 	ldr	r0, [fp, -#28]
         b42dc:	e5d01000 	ldrb	r1, [r0]
         b42e0:	e3310000 	teq	r1, #0	; 0x0
         b42e4:	0a00000c 	beq	b431c <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x1c8>
         b42e8:	e2800001 	add	r0, r0, #1	; 0x1
         b42ec:	e50b001c 	str	r0, [fp, -#28]
         b42f0:	e51b0018 	ldr	r0, [fp, -#24]	; fField24
         b42f4:	e5c05006 	strb	r5, [r0, #6]	; fField6
         b42f8:	e1a0100d 	mov	r1, sp
         b42fc:	e24b001c 	sub	r0, fp, #28	; 0x1c
         b4300:	e3a02000 	mov	r2, #0	; 0x0
         b4304:	eb000026 	bl	b43a4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x250>
         b4308:	e3300000 	teq	r0, #0	; 0x0
         b430c:	059d0000 	ldreq	r0, [sp]
         b4310:	051b1018 	ldreq	r1, [fp, -#24]	; fField24
         b4314:	05c10006 	streqb	r0, [r1, #6]	; fField6
         b4318:	e3a04000 	mov	r4, #0	; 0x0
         b431c:	e1a00004 	mov	r0, r4
         b4320:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         b4324:	e3a02000 	mov	r2, #0	; 0x0
         b4328:	e5903000 	ldr	r3, [r0]
         b432c:	e5d31000 	ldrb	r1, [r3]
         b4330:	e3510030 	cmp	r1, #48	; 0x30
         b4334:	ba000003 	blt	b4348 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x1f4>
         b4338:	e3510039 	cmp	r1, #57	; 0x39
         b433c:	d0811202 	addle	r1, r1, r2, lsl #4
         b4340:	d2412030 	suble	r2, r1, #48	; 0x30
         b4344:	da000011 	ble	b4390 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x23c>
         b4348:	e3510030 	cmp	r1, #48	; 0x30
         b434c:	ba000001 	blt	b4358 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x204>
         b4350:	e3510039 	cmp	r1, #57	; 0x39
         b4354:	da000007 	ble	b4378 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x224>
         b4358:	e3510041 	cmp	r1, #65	; 0x41
         b435c:	ba000001 	blt	b4368 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x214>
         b4360:	e3510046 	cmp	r1, #70	; 0x46
         b4364:	da000003 	ble	b4378 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x224>
         b4368:	e3510061 	cmp	r1, #97	; 0x61
         b436c:	ba000009 	blt	b4398 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x244>
         b4370:	e3510066 	cmp	r1, #102	; 0x66
         b4374:	ca000007 	bgt	b4398 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x244>
         b4378:	e3510061 	cmp	r1, #97	; 0x61
         b437c:	ba000001 	blt	b4388 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x234>
         b4380:	e351007a 	cmp	r1, #122	; 0x7a
         b4384:	d2411020 	suble	r1, r1, #32	; 0x20
         b4388:	e0811202 	add	r1, r1, r2, lsl #4
         b438c:	e2412037 	sub	r2, r1, #55	; 0x37
         b4390:	e2833001 	add	r3, r3, #1	; 0x1
         b4394:	eaffffe4 	b	b432c <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x1d8>
         b4398:	e5803000 	str	r3, [r0]
         b439c:	e1a00002 	mov	r0, r2
         b43a0:	e1a0f00e 	mov	pc, lr
         b43a4:	e1a0c00d 	mov	ip, sp
         b43a8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         b43ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         b43b0:	e1a05000 	mov	r5, r0
         b43b4:	e1a04001 	mov	r4, r1
         b43b8:	e202a0ff 	and	sl, r2, #255	; 0xff
         b43bc:	e24dd004 	sub	sp, sp, #4	; 0x4
         b43c0:	e3a06000 	mov	r6, #0	; 0x0
         b43c4:	e5900000 	ldr	r0, [r0]
         b43c8:	e58d0000 	str	r0, [sp]
         b43cc:	e5d00000 	ldrb	r0, [r0]
         b43d0:	e330002b 	teq	r0, #43	; 0x2b
         b43d4:	1a00000a 	bne	b4404 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x2b0>
         b43d8:	e59d0000 	ldr	r0, [sp]
         b43dc:	e2800001 	add	r0, r0, #1	; 0x1
         b43e0:	e58d0000 	str	r0, [sp]
         b43e4:	e5d00000 	ldrb	r0, [r0]
         b43e8:	e3300000 	teq	r0, #0	; 0x0
         b43ec:	0a000015 	beq	b4448 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x2f4>
         b43f0:	e330003d 	teq	r0, #61	; 0x3d
         b43f4:	1afffff7 	bne	b43d8 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x284>
         b43f8:	e59d0000 	ldr	r0, [sp]
         b43fc:	e2800001 	add	r0, r0, #1	; 0x1
         b4400:	e58d0000 	str	r0, [sp]
         b4404:	e59d0000 	ldr	r0, [sp]
         b4408:	e5d00000 	ldrb	r0, [r0]
         b440c:	e3300020 	teq	r0, #32	; 0x20
         b4410:	1a000005 	bne	b442c <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x2d8>
         b4414:	e59d0000 	ldr	r0, [sp]
         b4418:	e2800001 	add	r0, r0, #1	; 0x1
         b441c:	e58d0000 	str	r0, [sp]
         b4420:	e5d00000 	ldrb	r0, [r0]
         b4424:	e3300020 	teq	r0, #32	; 0x20
         b4428:	0afffff9 	beq	b4414 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x2c0>
         b442c:	e59d0000 	ldr	r0, [sp]
         b4430:	e5d01000 	ldrb	r1, [r0]
         b4434:	e3310028 	teq	r1, #40	; 0x28
         b4438:	02800001 	addeq	r0, r0, #1	; 0x1
         b443c:	03a09001 	moveq	r9, #1	; 0x1
         b4440:	058d0000 	streq	r0, [sp]
         b4444:	0a000000 	beq	b444c <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x2f8>
         b4448:	e3a09000 	mov	r9, #0	; 0x0
         b444c:	e3a00000 	mov	r0, #0	; 0x0
         b4450:	e3a07039 	mov	r7, #57	; 0x39
         b4454:	e2477c5e 	sub	r7, r7, #24064	; 0x5e00
         b4458:	e5840000 	str	r0, [r4]
         b445c:	e59d0000 	ldr	r0, [sp]
         b4460:	e5d00000 	ldrb	r0, [r0]
         b4464:	e3500030 	cmp	r0, #48	; 0x30
         b4468:	ba000001 	blt	b4474 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x320>
         b446c:	e3500039 	cmp	r0, #57	; 0x39
         b4470:	da000007 	ble	b4494 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x340>
         b4474:	e3500041 	cmp	r0, #65	; 0x41
         b4478:	ba000001 	blt	b4484 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x330>
         b447c:	e3500046 	cmp	r0, #70	; 0x46
         b4480:	da000003 	ble	b4494 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x340>
         b4484:	e3500061 	cmp	r0, #97	; 0x61
         b4488:	ba000051 	blt	b45d4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x480>
         b448c:	e3500066 	cmp	r0, #102	; 0x66
         b4490:	ca00004f 	bgt	b45d4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x480>
         b4494:	e1a0000d 	mov	r0, sp
         b4498:	ebffffa1 	bl	b4324 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x1d0>
         b449c:	e1b08000 	movs	r8, r0
         b44a0:	4a00004b 	bmi	b45d4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x480>
         b44a4:	e3580020 	cmp	r8, #32	; 0x20
         b44a8:	ca000049 	bgt	b45d4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x480>
         b44ac:	e59d0000 	ldr	r0, [sp]
         b44b0:	e5d00000 	ldrb	r0, [r0]
         b44b4:	e3300020 	teq	r0, #32	; 0x20
         b44b8:	1a000005 	bne	b44d4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x380>
         b44bc:	e59d0000 	ldr	r0, [sp]
         b44c0:	e2800001 	add	r0, r0, #1	; 0x1
         b44c4:	e58d0000 	str	r0, [sp]
         b44c8:	e5d00000 	ldrb	r0, [r0]
         b44cc:	e3300020 	teq	r0, #32	; 0x20
         b44d0:	0afffff9 	beq	b44bc <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x368>
         b44d4:	e59d0000 	ldr	r0, [sp]
         b44d8:	e5d01000 	ldrb	r1, [r0]
         b44dc:	e331002d 	teq	r1, #45	; 0x2d
         b44e0:	1a000024 	bne	b4578 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x424>
         b44e4:	e2800001 	add	r0, r0, #1	; 0x1
         b44e8:	e58d0000 	str	r0, [sp]
         b44ec:	e5d00000 	ldrb	r0, [r0]
         b44f0:	e3300020 	teq	r0, #32	; 0x20
         b44f4:	1a000005 	bne	b4510 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x3bc>
         b44f8:	e59d0000 	ldr	r0, [sp]
         b44fc:	e2800001 	add	r0, r0, #1	; 0x1
         b4500:	e58d0000 	str	r0, [sp]
         b4504:	e5d00000 	ldrb	r0, [r0]
         b4508:	e3300020 	teq	r0, #32	; 0x20
         b450c:	0afffff9 	beq	b44f8 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x3a4>
         b4510:	e1a0000d 	mov	r0, sp
         b4514:	ebffff82 	bl	b4324 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x1d0>
         b4518:	e1500008 	cmp	r0, r8
         b451c:	ba00002c 	blt	b45d4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x480>
         b4520:	e3500020 	cmp	r0, #32	; 0x20
         b4524:	ca00002a 	bgt	b45d4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x480>
         b4528:	e59d1000 	ldr	r1, [sp]
         b452c:	e5d11000 	ldrb	r1, [r1]
         b4530:	e3310020 	teq	r1, #32	; 0x20
         b4534:	1a000005 	bne	b4550 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x3fc>
         b4538:	e59d1000 	ldr	r1, [sp]
         b453c:	e2811001 	add	r1, r1, #1	; 0x1
         b4540:	e58d1000 	str	r1, [sp]
         b4544:	e5d11000 	ldrb	r1, [r1]
         b4548:	e3310020 	teq	r1, #32	; 0x20
         b454c:	0afffff9 	beq	b4538 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x3e4>
         b4550:	e3a03001 	mov	r3, #1	; 0x1
         b4554:	e1580000 	cmp	r8, r0
         b4558:	ca00000a 	bgt	b4588 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x434>
         b455c:	e5941000 	ldr	r1, [r4]
         b4560:	e1811813 	orr	r1, r1, r3, lsl r8
         b4564:	e2888001 	add	r8, r8, #1	; 0x1
         b4568:	e1580000 	cmp	r8, r0
         b456c:	e5841000 	str	r1, [r4]
         b4570:	dafffff9 	ble	b455c <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x408>
         b4574:	ea000003 	b	b4588 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x434>
         b4578:	e3a03001 	mov	r3, #1	; 0x1
         b457c:	e5941000 	ldr	r1, [r4]
         b4580:	e1810813 	orr	r0, r1, r3, lsl r8
         b4584:	e5840000 	str	r0, [r4]
         b4588:	e59d0000 	ldr	r0, [sp]
         b458c:	e5d01000 	ldrb	r1, [r0]
         b4590:	e3310000 	teq	r1, #0	; 0x0
         b4594:	0a00000f 	beq	b45d8 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x484>
         b4598:	e3310029 	teq	r1, #41	; 0x29
         b459c:	0a000007 	beq	b45c0 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x46c>
         b45a0:	e331002c 	teq	r1, #44	; 0x2c
         b45a4:	1a00000a 	bne	b45d4 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x480>
         b45a8:	e3390000 	teq	r9, #0	; 0x0
         b45ac:	033a0000 	teqeq	sl, #0	; 0x0
         b45b0:	12800001 	addne	r0, r0, #1	; 0x1
         b45b4:	158d0000 	strne	r0, [sp]
         b45b8:	1affffa7 	bne	b445c <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x308>
         b45bc:	ea000005 	b	b45d8 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x484>
         b45c0:	e59d0000 	ldr	r0, [sp]
         b45c4:	e2800001 	add	r0, r0, #1	; 0x1
         b45c8:	e3390000 	teq	r9, #0	; 0x0
         b45cc:	e58d0000 	str	r0, [sp]
         b45d0:	1a000000 	bne	b45d8 <TFaxTool::C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)+0x484>
         b45d4:	e1a06007 	mov	r6, r7
         b45d8:	e59d0000 	ldr	r0, [sp]
         b45dc:	e5850000 	str	r0, [r5]
         b45e0:	e1a00006 	mov	r0, r6
         b45e4:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2ValidateDCS(FaxClass2FDIS &, FaxClass2FDIS &)
 * Address: 000b45e8
 */
TFaxTool::C2ValidateDCS(FaxClass2FDIS &, FaxClass2FDIS &) {
    /*
         b45e8:	e3a00000 	mov	r0, #0	; 0x0
         b45ec:	e5d13000 	ldrb	r3, [r1]
         b45f0:	e5d2c000 	ldrb	ip, [r2]
         b45f4:	e153000c 	cmp	r3, ip
         b45f8:	d5d1c001 	ldrleb	ip, [r1, #1]	; fField1
         b45fc:	d5d23001 	ldrleb	r3, [r2, #1]	; fField1
         b4600:	d15c0003 	cmple	ip, r3
         b4604:	d5d13002 	ldrleb	r3, [r1, #2]	; fField2
         b4608:	d5d2c002 	ldrleb	ip, [r2, #2]	; fField2
         b460c:	d153000c 	cmple	r3, ip
         b4610:	d5d13003 	ldrleb	r3, [r1, #3]	; fField3
         b4614:	d5d2c003 	ldrleb	ip, [r2, #3]	; fField3
         b4618:	d153000c 	cmple	r3, ip
         b461c:	d5d13004 	ldrleb	r3, [r1, #4]	; fField4
         b4620:	d5d2c004 	ldrleb	ip, [r2, #4]	; fField4
         b4624:	d153000c 	cmple	r3, ip
         b4628:	d5d13005 	ldrleb	r3, [r1, #5]	; fField5
         b462c:	d5d2c005 	ldrleb	ip, [r2, #5]	; fField5
         b4630:	d153000c 	cmple	r3, ip
         b4634:	d5d11006 	ldrleb	r1, [r1, #6]	; fField6
         b4638:	d5d22006 	ldrleb	r2, [r2, #6]	; fField6
         b463c:	d1510002 	cmple	r1, r2
         b4640:	d3a00001 	movle	r0, #1	; 0x1
         b4644:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxTool::C2TransFDT_Cmd(unsigned long &)
 * Address: 000b4648
 */
TFaxTool::C2TransFDT_Cmd(unsigned long &) {
    /*
         b4648:	e1a0c00d 	mov	ip, sp
         b464c:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b4650:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4654:	e1a04000 	mov	r4, r0
         b4658:	e1a05001 	mov	r5, r1
         b465c:	e3a00ea6 	mov	r0, #2656	; 0xa60
         b4660:	e2800a0e 	add	r0, r0, #57344	; 0xe000
         b4664:	e5840528 	str	r0, [r4, #1320]	; fField1320
         b4668:	e1a00004 	mov	r0, r4
         b466c:	e3a01027 	mov	r1, #39	; 0x27
         b4670:	e2811c01 	add	r1, r1, #256	; 0x100
         b4674:	eb65892a 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b4678:	e3300000 	teq	r0, #0	; 0x0
         b467c:	03a0000d 	moveq	r0, #13	; 0xd
         b4680:	05850000 	streq	r0, [r5]
         b4684:	11a00004 	movne	r0, r4
         b4688:	13a01d89 	movne	r1, #8768	; 0x2240
         b468c:	12411902 	subne	r1, r1, #32768	; 0x8000
         b4690:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         b4694:	1a6c327d 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         b4698:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2TransFET_Cmd(unsigned long &)
 * Address: 000b469c
 */
TFaxTool::C2TransFET_Cmd(unsigned long &) {
    /*
         b469c:	e1a0c00d 	mov	ip, sp
         b46a0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b46a4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b46a8:	e1a04000 	mov	r4, r0
         b46ac:	e1a05001 	mov	r5, r1
         b46b0:	e590026c 	ldr	r0, [r0, #620]	; fField620
         b46b4:	e3100401 	tst	r0, #16777216	; 0x1000000
         b46b8:	03a00030 	moveq	r0, #48	; 0x30
         b46bc:	13a00032 	movne	r0, #50	; 0x32
         b46c0:	e5c4052c 	strb	r0, [r4, #1324]	; fField1324
         b46c4:	e3a00ee2 	mov	r0, #3616	; 0xe20
         b46c8:	e2800901 	add	r0, r0, #16384	; 0x4000
         b46cc:	e5840528 	str	r0, [r4, #1320]	; fField1320
         b46d0:	e1a00004 	mov	r0, r4
         b46d4:	e3a0102a 	mov	r1, #42	; 0x2a
         b46d8:	e2811c01 	add	r1, r1, #256	; 0x100
         b46dc:	eb658910 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b46e0:	e3300000 	teq	r0, #0	; 0x0
         b46e4:	03a0000f 	moveq	r0, #15	; 0xf
         b46e8:	05850000 	streq	r0, [r5]
         b46ec:	11a00004 	movne	r0, r4
         b46f0:	13a01d89 	movne	r1, #8768	; 0x2240
         b46f4:	12411902 	subne	r1, r1, #32768	; 0x8000
         b46f8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         b46fc:	1a6c3263 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         b4700:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2TransFET_Rsp(unsigned long &)
 * Address: 000b4704
 */
TFaxTool::C2TransFET_Rsp(unsigned long &) {
    /*
         b4704:	e1a0c00d 	mov	ip, sp
         b4708:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b470c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4710:	e1a04000 	mov	r4, r0
         b4714:	e1a05001 	mov	r5, r1
         b4718:	e3a06000 	mov	r6, #0	; 0x0
         b471c:	e5900848 	ldr	r0, [r0, #2120]	; fField2120
         b4720:	e3300032 	teq	r0, #50	; 0x32
         b4724:	13300034 	teqne	r0, #52	; 0x34
         b4728:	059f6044 	ldreq	r6, [pc, #44]	; b4774 <TFaxTool::C2TransFET_Rsp(unsigned long &)+0x70>
         b472c:	e1a01006 	mov	r1, r6
         b4730:	e1a00004 	mov	r0, r4
         b4734:	eb65c6f1 	bl	1a26300 <TFaxTool::$EndPageComplete(long)>
         b4738:	e3360000 	teq	r6, #0	; 0x0
         b473c:	1a000008 	bne	b4764 <TFaxTool::C2TransFET_Rsp(unsigned long &)+0x60>
         b4740:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b4744:	e3100401 	tst	r0, #16777216	; 0x1000000
         b4748:	0a000005 	beq	b4764 <TFaxTool::C2TransFET_Rsp(unsigned long &)+0x60>
         b474c:	e1a01005 	mov	r1, r5
         b4750:	e1a00004 	mov	r0, r4
         b4754:	e3a0200d 	mov	r2, #13	; 0xd
         b4758:	e2422c56 	sub	r2, r2, #22016	; 0x5600
         b475c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b4760:	ea65a1c3 	b	1a1ce74 <TFaxTool::$C2AbortSession(unsigned long &, long)>
         b4764:	e1a01005 	mov	r1, r5
         b4768:	e1a00004 	mov	r0, r4
         b476c:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b4770:	ea65a5d9 	b	1a1dedc <TFaxTool::$C2TransFDT_Cmd(unsigned long &)>
         b4774:	ffffaa0b 	swinv	0x00ffaa0b
    */
}

/**
 * Symbol: TFaxTool::C2GetModemRsp(unsigned long, unsigned long &)
 * Address: 000b4778
 */
TFaxTool::C2GetModemRsp(unsigned long, unsigned long &) {
    /*
         b4778:	e1a0c00d 	mov	ip, sp
         b477c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b4780:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4784:	e1a04000 	mov	r4, r0
         b4788:	e5801528 	str	r1, [r0, #1320]	; fField1320
         b478c:	e3a01f46 	mov	r1, #280	; 0x118
         b4790:	eb6588e3 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b4794:	e3300000 	teq	r0, #0	; 0x0
         b4798:	11a00004 	movne	r0, r4
         b479c:	13a01d89 	movne	r1, #8768	; 0x2240
         b47a0:	12411902 	subne	r1, r1, #32768	; 0x8000
         b47a4:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         b47a8:	1a6c3238 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         b47ac:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2TransFDT_Rsp(unsigned long &)
 * Address: 000b47b0
 */
TFaxTool::C2TransFDT_Rsp(unsigned long &) {
    /*
         b47b0:	e1a0c00d 	mov	ip, sp
         b47b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b47b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         b47bc:	e1a04001 	mov	r4, r1
         b47c0:	eb65995c 	bl	1a1ad38 <TFaxTool::$StartPhaseC(void)>
         b47c4:	e3a0000e 	mov	r0, #14	; 0xe
         b47c8:	e5840000 	str	r0, [r4]
         b47cc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2PhaseBProcessOptions(void)
 * Address: 000b47d0
 */
TFaxTool::C2PhaseBProcessOptions(void) {
    /*
         b47d0:	e5901184 	ldr	r1, [r0, #388]	; fField388
         b47d4:	e3310000 	teq	r1, #0	; 0x0
         b47d8:	01a0f00e 	moveq	pc, lr
         b47dc:	e1a0c00d 	mov	ip, sp
         b47e0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b47e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b47e8:	e1a04000 	mov	r4, r0
         b47ec:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         b47f0:	e1a0000d 	mov	r0, sp
         b47f4:	eb6c04bf 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         b47f8:	e1a0000d 	mov	r0, sp
         b47fc:	e59f10bc 	ldr	r1, [pc, #bc]	; b48c0 <TFaxTool::C2PhaseBProcessOptions(void)+0xf0>
         b4800:	eb6c1103 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         b4804:	e1b05000 	movs	r5, r0
         b4808:	e3a01000 	mov	r1, #0	; 0x0
         b480c:	0a00005c 	beq	b4984 <TFaxTool::C2PhaseBProcessOptions(void)+0x1b4>
         b4810:	e5950008 	ldr	r0, [r5, #8]
         b4814:	e2002cff 	and	r2, r0, #65280	; 0xff00
         b4818:	e3320b01 	teq	r2, #1024	; 0x400
         b481c:	1a000056 	bne	b497c <TFaxTool::C2PhaseBProcessOptions(void)+0x1ac>
         b4820:	e5d42834 	ldrb	r2, [r4, #2100]	; fField2100
         b4824:	e3a000cc 	mov	r0, #204	; 0xcc
         b4828:	e3320030 	teq	r2, #48	; 0x30
         b482c:	0585000c 	streq	r0, [r5, #12]
         b4830:	03a00062 	moveq	r0, #98	; 0x62
         b4834:	0a000003 	beq	b4848 <TFaxTool::C2PhaseBProcessOptions(void)+0x78>
         b4838:	e3320031 	teq	r2, #49	; 0x31
         b483c:	1a000073 	bne	b4a10 <TFaxTool::C2PhaseBProcessOptions(void)+0x240>
         b4840:	e585000c 	str	r0, [r5, #12]
         b4844:	e3a000c4 	mov	r0, #196	; 0xc4
         b4848:	e5850010 	str	r0, [r5, #16]	; fField16
         b484c:	e5d40837 	ldrb	r0, [r4, #2103]	; fField2103
         b4850:	e3300030 	teq	r0, #48	; 0x30
         b4854:	0a000005 	beq	b4870 <TFaxTool::C2PhaseBProcessOptions(void)+0xa0>
         b4858:	e3300031 	teq	r0, #49	; 0x31
         b485c:	03a00001 	moveq	r0, #1	; 0x1
         b4860:	05850014 	streq	r0, [r5, #20]
         b4864:	0a000002 	beq	b4874 <TFaxTool::C2PhaseBProcessOptions(void)+0xa4>
         b4868:	e3300032 	teq	r0, #50	; 0x32
         b486c:	1a000067 	bne	b4a10 <TFaxTool::C2PhaseBProcessOptions(void)+0x240>
         b4870:	e5851014 	str	r1, [r5, #20]
         b4874:	e3a00d1b 	mov	r0, #1728	; 0x6c0
         b4878:	e5850018 	str	r0, [r5, #24]	; fField24
         b487c:	e5d4083b 	ldrb	r0, [r4, #2107]	; fField2107
         b4880:	e240c030 	sub	ip, r0, #48	; 0x30
         b4884:	e3a0300a 	mov	r3, #10	; 0xa
         b4888:	e3a00014 	mov	r0, #20	; 0x14
         b488c:	e3a02028 	mov	r2, #40	; 0x28
         b4890:	e35c0007 	cmp	ip, #7	; 0x7
         b4894:	908ff10c 	addls	pc, pc, ip, lsl #2
         b4898:	ea00001b 	b	b490c <TFaxTool::C2PhaseBProcessOptions(void)+0x13c>
         b489c:	ea000008 	b	b48c4 <TFaxTool::C2PhaseBProcessOptions(void)+0xf4>
         b48a0:	ea000009 	b	b48cc <TFaxTool::C2PhaseBProcessOptions(void)+0xfc>
         b48a4:	ea00000b 	b	b48d8 <TFaxTool::C2PhaseBProcessOptions(void)+0x108>
         b48a8:	ea00000a 	b	b48d8 <TFaxTool::C2PhaseBProcessOptions(void)+0x108>
         b48ac:	ea000007 	b	b48d0 <TFaxTool::C2PhaseBProcessOptions(void)+0x100>
         b48b0:	ea000006 	b	b48d0 <TFaxTool::C2PhaseBProcessOptions(void)+0x100>
         b48b4:	eaffffff 	b	b48b8 <TFaxTool::C2PhaseBProcessOptions(void)+0xe8>
         b48b8:	e58422f8 	str	r2, [r4, #760]	; fField760
         b48bc:	ea000006 	b	b48dc <TFaxTool::C2PhaseBProcessOptions(void)+0x10c>
         b48c0:	66736966 	ldrvsbt	r6, [r3], -r6, ror #18
         b48c4:	e58412f8 	str	r1, [r4, #760]	; fField760
         b48c8:	ea000003 	b	b48dc <TFaxTool::C2PhaseBProcessOptions(void)+0x10c>
         b48cc:	e3a00005 	mov	r0, #5	; 0x5
         b48d0:	e58402f8 	str	r0, [r4, #760]	; fField760
         b48d4:	ea000000 	b	b48dc <TFaxTool::C2PhaseBProcessOptions(void)+0x10c>
         b48d8:	e58432f8 	str	r3, [r4, #760]	; fField760
         b48dc:	e5d40835 	ldrb	r0, [r4, #2101]	; fField2101
         b48e0:	e2400030 	sub	r0, r0, #48	; 0x30
         b48e4:	e3500005 	cmp	r0, #5	; 0x5
         b48e8:	908ff100 	addls	pc, pc, r0, lsl #2
         b48ec:	ea000047 	b	b4a10 <TFaxTool::C2PhaseBProcessOptions(void)+0x240>
         b48f0:	ea000007 	b	b4914 <TFaxTool::C2PhaseBProcessOptions(void)+0x144>
         b48f4:	ea000008 	b	b491c <TFaxTool::C2PhaseBProcessOptions(void)+0x14c>
         b48f8:	ea000009 	b	b4924 <TFaxTool::C2PhaseBProcessOptions(void)+0x154>
         b48fc:	ea00000b 	b	b4930 <TFaxTool::C2PhaseBProcessOptions(void)+0x160>
         b4900:	ea00000c 	b	b4938 <TFaxTool::C2PhaseBProcessOptions(void)+0x168>
         b4904:	e3a00de1 	mov	r0, #14400	; 0x3840
         b4908:	ea00000c 	b	b4940 <TFaxTool::C2PhaseBProcessOptions(void)+0x170>
         b490c:	e5a412f8 	str	r1, [r4, #760]!	; fField760
         b4910:	ea00003e 	b	b4a10 <TFaxTool::C2PhaseBProcessOptions(void)+0x240>
         b4914:	e3a00e96 	mov	r0, #2400	; 0x960
         b4918:	ea000008 	b	b4940 <TFaxTool::C2PhaseBProcessOptions(void)+0x170>
         b491c:	e3a00d4b 	mov	r0, #4800	; 0x12c0
         b4920:	ea000006 	b	b4940 <TFaxTool::C2PhaseBProcessOptions(void)+0x170>
         b4924:	e3a00ec2 	mov	r0, #3104	; 0xc20
         b4928:	e2800a01 	add	r0, r0, #4096	; 0x1000
         b492c:	ea000003 	b	b4940 <TFaxTool::C2PhaseBProcessOptions(void)+0x170>
         b4930:	e3a00d96 	mov	r0, #9600	; 0x2580
         b4934:	ea000001 	b	b4940 <TFaxTool::C2PhaseBProcessOptions(void)+0x170>
         b4938:	e3a00eee 	mov	r0, #3808	; 0xee0
         b493c:	e2800a02 	add	r0, r0, #8192	; 0x2000
         b4940:	e58402b0 	str	r0, [r4, #688]	; fField688
         b4944:	e24dd020 	sub	sp, sp, #32	; 0x20
         b4948:	e1a0000d 	mov	r0, sp
         b494c:	eb6c212b 	bl	1bbce00 <TCMOFaxSessionInfo::$__ct(void)>
         b4950:	e5951004 	ldr	r1, [r5, #4]	; fField4
         b4954:	e59d0004 	ldr	r0, [sp, #4]	; fField4
         b4958:	e1510000 	cmp	r1, r0
         b495c:	a59402b0 	ldrge	r0, [r4, #688]	; fField688
         b4960:	a585001c 	strge	r0, [r5, #28]
         b4964:	e5950008 	ldr	r0, [r5, #8]
         b4968:	e3c000ff 	bic	r0, r0, #255	; 0xff
         b496c:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         b4970:	e5a50008 	str	r0, [r5, #8]!
         b4974:	e28dd020 	add	sp, sp, #32	; 0x20
         b4978:	ea000001 	b	b4984 <TFaxTool::C2PhaseBProcessOptions(void)+0x1b4>
         b497c:	e38000ff 	orr	r0, r0, #255	; 0xff
         b4980:	e5a50008 	str	r0, [r5, #8]!
         b4984:	e1a0000d 	mov	r0, sp
         b4988:	e59f1034 	ldr	r1, [pc, #34]	; b49c4 <TFaxTool::C2PhaseBProcessOptions(void)+0x1f4>
         b498c:	eb6c10a0 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         b4990:	e1b05000 	movs	r5, r0
         b4994:	0a00001d 	beq	b4a10 <TFaxTool::C2PhaseBProcessOptions(void)+0x240>
         b4998:	e5951008 	ldr	r1, [r5, #8]
         b499c:	e2010cff 	and	r0, r1, #65280	; 0xff00
         b49a0:	e3300b01 	teq	r0, #1024	; 0x400
         b49a4:	1a000007 	bne	b49c8 <TFaxTool::C2PhaseBProcessOptions(void)+0x1f8>
         b49a8:	e2841ff3 	add	r1, r4, #972	; 0x3cc
         b49ac:	e2811b01 	add	r1, r1, #1024	; 0x400
         b49b0:	e1a00005 	mov	r0, r5
         b49b4:	eb6c0c85 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         b49b8:	e5950008 	ldr	r0, [r5, #8]
         b49bc:	e3c000ff 	bic	r0, r0, #255	; 0xff
         b49c0:	ea00000e 	b	b4a00 <TFaxTool::C2PhaseBProcessOptions(void)+0x230>
         b49c4:	66726964 	ldrvsbt	r6, [r2], -r4, ror #18
         b49c8:	e3300c03 	teq	r0, #768	; 0x300
         b49cc:	1a00000a 	bne	b49fc <TFaxTool::C2PhaseBProcessOptions(void)+0x22c>
         b49d0:	e24dd024 	sub	sp, sp, #36	; 0x24
         b49d4:	e1a0000d 	mov	r0, sp
         b49d8:	eb6c1cee 	bl	1bbbd98 <TCMOFaxRemoteId::$__ct(void)>
         b49dc:	e1a0100d 	mov	r1, sp
         b49e0:	e1a00005 	mov	r0, r5
         b49e4:	eb6c0c79 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         b49e8:	e5950008 	ldr	r0, [r5, #8]
         b49ec:	e3c000ff 	bic	r0, r0, #255	; 0xff
         b49f0:	e5850008 	str	r0, [r5, #8]
         b49f4:	e28dd024 	add	sp, sp, #36	; 0x24
         b49f8:	ea000001 	b	b4a04 <TFaxTool::C2PhaseBProcessOptions(void)+0x234>
         b49fc:	e38100ff 	orr	r0, r1, #255	; 0xff
         b4a00:	e5850008 	str	r0, [r5, #8]
         b4a04:	e5950008 	ldr	r0, [r5, #8]
         b4a08:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         b4a0c:	e5a50008 	str	r0, [r5, #8]!
         b4a10:	e1a0000d 	mov	r0, sp
         b4a14:	e3a01000 	mov	r1, #0	; 0x0
         b4a18:	eb6c0847 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         b4a1c:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::C2TransFPTS_Rsp(unsigned long &)
 * Address: 000b4a20
 */
TFaxTool::C2TransFPTS_Rsp(unsigned long &) {
    /*
         b4a20:	e1a02001 	mov	r2, r1
         b4a24:	e3a01ea6 	mov	r1, #2656	; 0xa60
         b4a28:	e2811a0e 	add	r1, r1, #57344	; 0xe000
         b4a2c:	ea65a516 	b	1a1de8c <TFaxTool::$C2GetModemRsp(unsigned long, unsigned long &)>
    */
}

/**
 * Symbol: TFaxTool::StartPhaseA(void)
 * Address: 000b4eb4
 */
TFaxTool::StartPhaseA(void) {
    /*
         b4eb4:	e1a0c00d 	mov	ip, sp
         b4eb8:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b4ebc:	e24cb004 	sub	fp, ip, #4	; 0x4
         b4ec0:	e1a04000 	mov	r4, r0
         b4ec4:	e5d002d0 	ldrb	r0, [r0, #720]	; fField720
         b4ec8:	e3300000 	teq	r0, #0	; 0x0
         b4ecc:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b4ed0:	03c00009 	biceq	r0, r0, #9	; 0x9
         b4ed4:	13800009 	orrne	r0, r0, #9	; 0x9
         b4ed8:	e584026c 	str	r0, [r4, #620]	; fField620
         b4edc:	e5d402d1 	ldrb	r0, [r4, #721]	; fField721
         b4ee0:	e3300000 	teq	r0, #0	; 0x0
         b4ee4:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b4ee8:	03c00002 	biceq	r0, r0, #2	; 0x2
         b4eec:	13800002 	orrne	r0, r0, #2	; 0x2
         b4ef0:	e584026c 	str	r0, [r4, #620]	; fField620
         b4ef4:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b4ef8:	e3c0053a 	bic	r0, r0, #243269632	; 0xe800000
         b4efc:	e3c0091e 	bic	r0, r0, #491520	; 0x78000
         b4f00:	e3c00e5f 	bic	r0, r0, #1520	; 0x5f0
         b4f04:	e3a05000 	mov	r5, #0	; 0x0
         b4f08:	e3a01003 	mov	r1, #3	; 0x3
         b4f0c:	e2844f9b 	add	r4, r4, #620	; 0x26c
         b4f10:	e8840021 	stmia	r4, {r0, r5}
         b4f14:	e5841018 	str	r1, [r4, #24]	; fField24
         b4f18:	e2444f9b 	sub	r4, r4, #620	; 0x26c
         b4f1c:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         b4f20:	e1a01b01 	mov	r1, r1, lsl #22
         b4f24:	e1b01f21 	movs	r1, r1, lsr #30
         b4f28:	03a010d8 	moveq	r1, #216	; 0xd8
         b4f2c:	058412dc 	streq	r1, [r4, #732]	; fField732
         b4f30:	03a01038 	moveq	r1, #56	; 0x38
         b4f34:	02811b01 	addeq	r1, r1, #1024	; 0x400
         b4f38:	0a000009 	beq	b4f64 <TFaxTool::StartPhaseA(void)+0xb0>
         b4f3c:	e3310001 	teq	r1, #1	; 0x1
         b4f40:	03a01c01 	moveq	r1, #256	; 0x100
         b4f44:	058412dc 	streq	r1, [r4, #732]	; fField732
         b4f48:	03a01c05 	moveq	r1, #1280	; 0x500
         b4f4c:	0a000004 	beq	b4f64 <TFaxTool::StartPhaseA(void)+0xb0>
         b4f50:	e3310002 	teq	r1, #2	; 0x2
         b4f54:	1a000003 	bne	b4f68 <TFaxTool::StartPhaseA(void)+0xb4>
         b4f58:	e3a01e13 	mov	r1, #304	; 0x130
         b4f5c:	e58412dc 	str	r1, [r4, #732]	; fField732
         b4f60:	e3a01e5f 	mov	r1, #1520	; 0x5f0
         b4f64:	e58412e0 	str	r1, [r4, #736]	; fField736
         b4f68:	e3100001 	tst	r0, #1	; 0x1
         b4f6c:	0a000003 	beq	b4f80 <TFaxTool::StartPhaseA(void)+0xcc>
         b4f70:	e1a00004 	mov	r0, r4
         b4f74:	eb655992 	bl	1a0b5c4 <TFaxTool::$AllocateLineBuffers(void)>
         b4f78:	e3500000 	cmp	r0, #0	; 0x0
         b4f7c:	1a00001b 	bne	b4ff0 <TFaxTool::StartPhaseA(void)+0x13c>
         b4f80:	e58453f4 	str	r5, [r4, #1012]	; fField1012
         b4f84:	e58453f8 	str	r5, [r4, #1016]	; fField1016
         b4f88:	e58453f0 	str	r5, [r4, #1008]	; fField1008
         b4f8c:	e5845400 	str	r5, [r4, #1024]	; fField1024
         b4f90:	e5c4536d 	strb	r5, [r4, #877]	; fField877
         b4f94:	e5c453c5 	strb	r5, [r4, #965]	; fField965
         b4f98:	e5c4536c 	strb	r5, [r4, #876]	; fField876
         b4f9c:	e5c453c4 	strb	r5, [r4, #964]	; fField964
         b4fa0:	e5845368 	str	r5, [r4, #872]	; fField872
         b4fa4:	e58453c0 	str	r5, [r4, #960]	; fField960
         b4fa8:	e5c45445 	strb	r5, [r4, #1093]	; fField1093
         b4fac:	e5c4549d 	strb	r5, [r4, #1181]	; fField1181
         b4fb0:	e5c45444 	strb	r5, [r4, #1092]	; fField1092
         b4fb4:	e5c4549c 	strb	r5, [r4, #1180]	; fField1180
         b4fb8:	e5845440 	str	r5, [r4, #1088]	; fField1088
         b4fbc:	e5845498 	str	r5, [r4, #1176]	; fField1176
         b4fc0:	e5845804 	str	r5, [r4, #2052]	; fField2052
         b4fc4:	e59401d4 	ldr	r0, [r4, #468]	; fField468
         b4fc8:	e584056c 	str	r0, [r4, #1388]	; fField1388
         b4fcc:	e5940184 	ldr	r0, [r4, #388]	; fField388
         b4fd0:	e5840578 	str	r0, [r4, #1400]	; fField1400
         b4fd4:	e5c45588 	strb	r5, [r4, #1416]	; fField1416
         b4fd8:	e3a00001 	mov	r0, #1	; 0x1
         b4fdc:	e5840274 	str	r0, [r4, #628]	; fField628
         b4fe0:	e1a00004 	mov	r0, r4
         b4fe4:	e3a01000 	mov	r1, #0	; 0x0
         b4fe8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b4fec:	ea6582b7 	b	1a15ad0 <TFaxTool::$PhaseAModemReqComplete(long)>
         b4ff0:	11a01000 	movne	r1, r0
         b4ff4:	11a00004 	movne	r0, r4
         b4ff8:	191b6830 	ldmnedb	fp, {r4, r5, fp, sp, lr}
         b4ffc:	1a6c3023 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         b5000:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::PhaseAComplete(long)
 * Address: 000b5004
 */
TFaxTool::PhaseAComplete(long) {
    /*
         b5004:	e1a0c00d 	mov	ip, sp
         b5008:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b500c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b5010:	e1a04000 	mov	r4, r0
         b5014:	e1a05001 	mov	r5, r1
         b5018:	e5901818 	ldr	r1, [r0, #2072]	; fField2072
         b501c:	e3a00008 	mov	r0, #8	; 0x8
         b5020:	e3310004 	teq	r1, #4	; 0x4
         b5024:	1a000008 	bne	b504c <TFaxTool::PhaseAComplete(long)+0x48>
         b5028:	e3350000 	teq	r5, #0	; 0x0
         b502c:	e5840270 	str	r0, [r4, #624]	; fField624
         b5030:	e1a00004 	mov	r0, r4
         b5034:	03a01003 	moveq	r1, #3	; 0x3
         b5038:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         b503c:	0a65a3a4 	beq	1a1ded4 <TFaxTool::$C2StateUpdate(unsigned long)>
         b5040:	e3a01004 	mov	r1, #4	; 0x4
         b5044:	eb65a3a2 	bl	1a1ded4 <TFaxTool::$C2StateUpdate(unsigned long)>
         b5048:	ea00000c 	b	b5080 <TFaxTool::PhaseAComplete(long)+0x7c>
         b504c:	e3310008 	teq	r1, #8	; 0x8
         b5050:	1a000008 	bne	b5078 <TFaxTool::PhaseAComplete(long)+0x74>
         b5054:	e3350000 	teq	r5, #0	; 0x0
         b5058:	e5840270 	str	r0, [r4, #624]	; fField624
         b505c:	e1a00004 	mov	r0, r4
         b5060:	03a01003 	moveq	r1, #3	; 0x3
         b5064:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         b5068:	0a659f7c 	beq	1a1ce60 <TFaxTool::$C20StateUpdate(unsigned long)>
         b506c:	e3a01004 	mov	r1, #4	; 0x4
         b5070:	eb659f7a 	bl	1a1ce60 <TFaxTool::$C20StateUpdate(unsigned long)>
         b5074:	ea000001 	b	b5080 <TFaxTool::PhaseAComplete(long)+0x7c>
         b5078:	e3350000 	teq	r5, #0	; 0x0
         b507c:	0a000003 	beq	b5090 <TFaxTool::PhaseAComplete(long)+0x8c>
         b5080:	e1a01005 	mov	r1, r5
         b5084:	e1a00004 	mov	r0, r4
         b5088:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b508c:	ea6c2fff 	b	1bc1090 <TCommTool::$StartAbort(long)>
         b5090:	e5940018 	ldr	r0, [r4, #24]	; fField24
         b5094:	e3800401 	orr	r0, r0, #16777216	; 0x1000000
         b5098:	e5840018 	str	r0, [r4, #24]	; fField24
         b509c:	e1a00004 	mov	r0, r4
         b50a0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b50a4:	ea659722 	b	1a1ad34 <TFaxTool::$StartPhaseB(void)>
    */
}

/**
 * Symbol: TFaxTool::PhaseBPktComplete(long)
 * Address: 000b50a8
 */
TFaxTool::PhaseBPktComplete(long) {
    /*
         b50a8:	e5902018 	ldr	r2, [r0, #24]	; fField24
         b50ac:	e3120242 	tst	r2, #536870916	; 0x20000004
         b50b0:	11a0f00e 	movne	pc, lr
         b50b4:	e5902278 	ldr	r2, [r0, #632]	; fField632
         b50b8:	e352000e 	cmp	r2, #14	; 0xe
         b50bc:	908ff102 	addls	pc, pc, r2, lsl #2
         b50c0:	e1a0f00e 	mov	pc, lr
         b50c4:	e1a0f00e 	mov	pc, lr
         b50c8:	ea00000c 	b	b5100 <TFaxTool::PhaseBPktComplete(long)+0x58>
         b50cc:	ea00000c 	b	b5104 <TFaxTool::PhaseBPktComplete(long)+0x5c>
         b50d0:	ea00000d 	b	b510c <TFaxTool::PhaseBPktComplete(long)+0x64>
         b50d4:	ea00000d 	b	b5110 <TFaxTool::PhaseBPktComplete(long)+0x68>
         b50d8:	e1a0f00e 	mov	pc, lr
         b50dc:	ea00000c 	b	b5114 <TFaxTool::PhaseBPktComplete(long)+0x6c>
         b50e0:	ea000008 	b	b5108 <TFaxTool::PhaseBPktComplete(long)+0x60>
         b50e4:	ea00000b 	b	b5118 <TFaxTool::PhaseBPktComplete(long)+0x70>
         b50e8:	ea00000b 	b	b511c <TFaxTool::PhaseBPktComplete(long)+0x74>
         b50ec:	e1a0f00e 	mov	pc, lr
         b50f0:	ea00000a 	b	b5120 <TFaxTool::PhaseBPktComplete(long)+0x78>
         b50f4:	e1a0f00e 	mov	pc, lr
         b50f8:	e1a0f00e 	mov	pc, lr
         b50fc:	ea65ccd4 	b	1a28454 <TFaxTool::$PhaseBComplete(long)>
         b5100:	ea658273 	b	1a15ad4 <TFaxTool::$PhaseBGetInitialID(long)>
         b5104:	ea65ccd6 	b	1a28464 <TFaxTool::$PhaseBPutInitialID(long)>
         b5108:	ea65ccd7 	b	1a2846c <TFaxTool::$PhaseBRespondToFTT(long)>
         b510c:	ea65c48d 	b	1a26348 <TFaxTool::$GetCommandComplete(long)>
         b5110:	ea658275 	b	1a15aec <TFaxTool::$PhaseBPutCommandToRcv(long)>
         b5114:	ea65c89a 	b	1a27384 <TFaxTool::$GetTrainingCheckComplete(long)>
         b5118:	ea658a9f 	b	1a17b9c <TFaxTool::$PutTrainingCheckComplete(long)>
         b511c:	ea65826d 	b	1a15ad8 <TFaxTool::$PhaseBGetResponse(long)>
         b5120:	ea658272 	b	1a15af0 <TFaxTool::$PhaseBWaitForSignalGone(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseBGetInitialID(long)
 * Address: 000b5124
 */
TFaxTool::PhaseBGetInitialID(long) {
    /*
         b5124:	e1a0c00d 	mov	ip, sp
         b5128:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b512c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b5130:	e1a04000 	mov	r4, r0
         b5134:	e291cc5d 	adds	ip, r1, #23808	; 0x5d00
         b5138:	d37c00c2 	cmnle	ip, #194	; 0xc2
         b513c:	0a000013 	beq	b5190 <TFaxTool::PhaseBGetInitialID(long)+0x6c>
         b5140:	ca000007 	bgt	b5164 <TFaxTool::PhaseBGetInitialID(long)+0x40>
         b5144:	e281cc5d 	add	ip, r1, #23808	; 0x5d00
         b5148:	e37c00c9 	cmn	ip, #201	; 0xc9
         b514c:	1281cc5d 	addne	ip, r1, #23808	; 0x5d00
         b5150:	137c00c6 	cmnne	ip, #198	; 0xc6
         b5154:	1281cc5d 	addne	ip, r1, #23808	; 0x5d00
         b5158:	137c00c5 	cmnne	ip, #197	; 0xc5
         b515c:	1a000019 	bne	b51c8 <TFaxTool::PhaseBGetInitialID(long)+0xa4>
         b5160:	ea00000a 	b	b5190 <TFaxTool::PhaseBGetInitialID(long)+0x6c>
         b5164:	e281cc46 	add	ip, r1, #17920	; 0x4600
         b5168:	e37c0054 	cmn	ip, #84	; 0x54
         b516c:	0a000007 	beq	b5190 <TFaxTool::PhaseBGetInitialID(long)+0x6c>
         b5170:	e281cdfa 	add	ip, r1, #16000	; 0x3e80
         b5174:	e37c0005 	cmn	ip, #5	; 0x5
         b5178:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b517c:	e3310000 	teq	r1, #0	; 0x0
         b5180:	01a00004 	moveq	r0, r4
         b5184:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         b5188:	0a658256 	beq	1a15ae8 <TFaxTool::$PhaseBProcessInitialID(void)>
         b518c:	ea00000d 	b	b51c8 <TFaxTool::PhaseBGetInitialID(long)+0xa4>
         b5190:	e3a03000 	mov	r3, #0	; 0x0
         b5194:	e3a020b2 	mov	r2, #178	; 0xb2
         b5198:	e2822b03 	add	r2, r2, #3072	; 0xc00
         b519c:	e92d000c 	stmdb	sp!, {r2, r3}
         b51a0:	e2843f96 	add	r3, r4, #600	; 0x258
         b51a4:	e2833b01 	add	r3, r3, #1024	; 0x400
         b51a8:	e1a00004 	mov	r0, r4
         b51ac:	e3a02001 	mov	r2, #1	; 0x1
         b51b0:	e3a01016 	mov	r1, #22	; 0x16
         b51b4:	e2811c01 	add	r1, r1, #256	; 0x100
         b51b8:	eb65d0b7 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b51bc:	e28dd008 	add	sp, sp, #8	; 0x8
         b51c0:	e1b01000 	movs	r1, r0
         b51c4:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b51c8:	e1a00004 	mov	r0, r4
         b51cc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b51d0:	ea6c2fae 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseBProcessInitialID(void)
 * Address: 000b51d4
 */
TFaxTool::PhaseBProcessInitialID(void) {
    /*
         b51d4:	e1a0c00d 	mov	ip, sp
         b51d8:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b51dc:	e24cb004 	sub	fp, ip, #4	; 0x4
         b51e0:	e1a04000 	mov	r4, r0
         b51e4:	e24dd008 	sub	sp, sp, #8	; 0x8
         b51e8:	e5d006a2 	ldrb	r0, [r0, #1698]
         b51ec:	e2846f96 	add	r6, r4, #600	; 0x258
         b51f0:	e2866b01 	add	r6, r6, #1024	; 0x400
         b51f4:	e3300020 	teq	r0, #32	; 0x20
         b51f8:	0594026c 	ldreq	r0, [r4, #620]	; fField620
         b51fc:	03800020 	orreq	r0, r0, #32	; 0x20
         b5200:	0a00003b 	beq	b52f4 <TFaxTool::PhaseBProcessInitialID(void)+0x120>
         b5204:	e28450a3 	add	r5, r4, #163	; 0xa3
         b5208:	e2855c06 	add	r5, r5, #1536	; 0x600
         b520c:	e3300040 	teq	r0, #64	; 0x40
         b5210:	0a000023 	beq	b52a4 <TFaxTool::PhaseBProcessInitialID(void)+0xd0>
         b5214:	e3300080 	teq	r0, #128	; 0x80
         b5218:	1a000036 	bne	b52f8 <TFaxTool::PhaseBProcessInitialID(void)+0x124>
         b521c:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b5220:	e3800080 	orr	r0, r0, #128	; 0x80
         b5224:	e584026c 	str	r0, [r4, #620]	; fField620
         b5228:	e1a0000d 	mov	r0, sp
         b522c:	e3a02005 	mov	r2, #5	; 0x5
         b5230:	e3a01000 	mov	r1, #0	; 0x0
         b5234:	eb6bfe07 	bl	1bb4a58 <$memset>
         b5238:	e1a00006 	mov	r0, r6
         b523c:	e5961000 	ldr	r1, [r6]
         b5240:	e1a0e00f 	mov	lr, pc
         b5244:	e281f02c 	add	pc, r1, #44	; 0x2c
         b5248:	e2400003 	sub	r0, r0, #3	; 0x3
         b524c:	e3a01008 	mov	r1, #8	; 0x8
         b5250:	e3500008 	cmp	r0, #8	; 0x8
         b5254:	a1a02001 	movge	r2, r1
         b5258:	b1a02000 	movlt	r2, r0
         b525c:	e1a00005 	mov	r0, r5
         b5260:	e1a0100d 	mov	r1, sp
         b5264:	eb6ca73a 	bl	1bdef54 <$BlockMove>
         b5268:	e1a0100d 	mov	r1, sp
         b526c:	e1a00004 	mov	r0, r4
         b5270:	eb656528 	bl	1a0e718 <TFaxTool::$CompatibleRemoteRcvr(TT30Capabilities &)>
         b5274:	e3300000 	teq	r0, #0	; 0x0
         b5278:	1594026c 	ldrne	r0, [r4, #620]	; fField620
         b527c:	12000001 	andne	r0, r0, #1	; 0x1
         b5280:	13300000 	teqne	r0, #0	; 0x0
         b5284:	0a000011 	beq	b52d0 <TFaxTool::PhaseBProcessInitialID(void)+0xfc>
         b5288:	e2842fbb 	add	r2, r4, #748	; 0x2ec
         b528c:	e1a0100d 	mov	r1, sp
         b5290:	e1a00004 	mov	r0, r4
         b5294:	eb6558d8 	bl	1a0b5fc <TFaxTool::$BuildDCS(TT30Capabilities &, TT30Capabilities &)>
         b5298:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b529c:	e3800008 	orr	r0, r0, #8	; 0x8
         b52a0:	ea000013 	b	b52f4 <TFaxTool::PhaseBProcessInitialID(void)+0x120>
         b52a4:	e1a00006 	mov	r0, r6
         b52a8:	e5961000 	ldr	r1, [r6]
         b52ac:	e1a0e00f 	mov	lr, pc
         b52b0:	e281f02c 	add	pc, r1, #44	; 0x2c
         b52b4:	e2403003 	sub	r3, r0, #3	; 0x3
         b52b8:	e2842ff6 	add	r2, r4, #984	; 0x3d8
         b52bc:	e2822b01 	add	r2, r2, #1024	; 0x400
         b52c0:	e1a01005 	mov	r1, r5
         b52c4:	e1a00004 	mov	r0, r4
         b52c8:	eb657178 	bl	1a118b0 <TFaxTool::$GetIdentification(unsigned char const *, unsigned char *const, unsigned long)>
         b52cc:	ea000009 	b	b52f8 <TFaxTool::PhaseBProcessInitialID(void)+0x124>
         b52d0:	e1a0100d 	mov	r1, sp
         b52d4:	e1a00004 	mov	r0, r4
         b52d8:	eb65650f 	bl	1a0e71c <TFaxTool::$CompatibleRemoteXmtr(TT30Capabilities &)>
         b52dc:	e3300000 	teq	r0, #0	; 0x0
         b52e0:	1594026c 	ldrne	r0, [r4, #620]	; fField620
         b52e4:	12001002 	andne	r1, r0, #2	; 0x2
         b52e8:	13310000 	teqne	r1, #0	; 0x0
         b52ec:	0a000001 	beq	b52f8 <TFaxTool::PhaseBProcessInitialID(void)+0x124>
         b52f0:	e3c00008 	bic	r0, r0, #8	; 0x8
         b52f4:	e584026c 	str	r0, [r4, #620]	; fField620
         b52f8:	e5d406a1 	ldrb	r0, [r4, #1697]	; fField1697
         b52fc:	e3a0500e 	mov	r5, #14	; 0xe
         b5300:	e2455c56 	sub	r5, r5, #22016	; 0x5600
         b5304:	e3300013 	teq	r0, #19	; 0x13
         b5308:	1a000027 	bne	b53ac <TFaxTool::PhaseBProcessInitialID(void)+0x1d8>
         b530c:	e1a00004 	mov	r0, r4
         b5310:	eb657dc3 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b5314:	e594126c 	ldr	r1, [r4, #620]	; fField620
         b5318:	e3110080 	tst	r1, #128	; 0x80
         b531c:	e3a00003 	mov	r0, #3	; 0x3
         b5320:	e3a02001 	mov	r2, #1	; 0x1
         b5324:	0a000006 	beq	b5344 <TFaxTool::PhaseBProcessInitialID(void)+0x170>
         b5328:	e3110008 	tst	r1, #8	; 0x8
         b532c:	13a01004 	movne	r1, #4	; 0x4
         b5330:	15841278 	strne	r1, [r4, #632]	; fField632
         b5334:	1a000005 	bne	b5350 <TFaxTool::PhaseBProcessInitialID(void)+0x17c>
         b5338:	e3a01005 	mov	r1, #5	; 0x5
         b533c:	e5841278 	str	r1, [r4, #632]	; fField632
         b5340:	ea00000f 	b	b5384 <TFaxTool::PhaseBProcessInitialID(void)+0x1b0>
         b5344:	e5941278 	ldr	r1, [r4, #632]	; fField632
         b5348:	e3310004 	teq	r1, #4	; 0x4
         b534c:	1a00000a 	bne	b537c <TFaxTool::PhaseBProcessInitialID(void)+0x1a8>
         b5350:	e5941018 	ldr	r1, [r4, #24]	; fField24
         b5354:	e3811201 	orr	r1, r1, #268435456	; 0x10000000
         b5358:	e2844fa1 	add	r4, r4, #644	; 0x284
         b535c:	e8840005 	stmia	r4, {r0, r2}
         b5360:	e524126c 	str	r1, [r4, -#620]!	; fField620
         b5364:	e5842274 	str	r2, [r4, #628]	; fField628
         b5368:	e2444018 	sub	r4, r4, #24	; 0x18
         b536c:	e1a00004 	mov	r0, r4
         b5370:	e3a0106e 	mov	r1, #110	; 0x6e
         b5374:	eb65d479 	bl	1a2a560 <TFaxTool::$PutCommandToRcv(unsigned long)>
         b5378:	ea000021 	b	b5404 <TFaxTool::PhaseBProcessInitialID(void)+0x230>
         b537c:	e3310005 	teq	r1, #5	; 0x5
         b5380:	1a00001c 	bne	b53f8 <TFaxTool::PhaseBProcessInitialID(void)+0x224>
         b5384:	e5941018 	ldr	r1, [r4, #24]	; fField24
         b5388:	e3811201 	orr	r1, r1, #268435456	; 0x10000000
         b538c:	e2844fa1 	add	r4, r4, #644	; 0x284
         b5390:	e8840005 	stmia	r4, {r0, r2}
         b5394:	e524126c 	str	r1, [r4, -#620]!	; fField620
         b5398:	e2444018 	sub	r4, r4, #24	; 0x18
         b539c:	e1a00004 	mov	r0, r4
         b53a0:	e3a0100a 	mov	r1, #10	; 0xa
         b53a4:	eb65d46e 	bl	1a2a564 <TFaxTool::$PutCommandToXmit(unsigned long)>
         b53a8:	ea000015 	b	b5404 <TFaxTool::PhaseBProcessInitialID(void)+0x230>
         b53ac:	e5940278 	ldr	r0, [r4, #632]	; fField632
         b53b0:	e3300001 	teq	r0, #1	; 0x1
         b53b4:	1a00000f 	bne	b53f8 <TFaxTool::PhaseBProcessInitialID(void)+0x224>
         b53b8:	e3a03000 	mov	r3, #0	; 0x0
         b53bc:	e3a020b2 	mov	r2, #178	; 0xb2
         b53c0:	e2822b03 	add	r2, r2, #3072	; 0xc00
         b53c4:	e92d000c 	stmdb	sp!, {r2, r3}
         b53c8:	e1a03006 	mov	r3, r6
         b53cc:	e1a00004 	mov	r0, r4
         b53d0:	e3a02001 	mov	r2, #1	; 0x1
         b53d4:	e3a01016 	mov	r1, #22	; 0x16
         b53d8:	e2811c01 	add	r1, r1, #256	; 0x100
         b53dc:	eb65d02e 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b53e0:	e28dd008 	add	sp, sp, #8	; 0x8
         b53e4:	e3300000 	teq	r0, #0	; 0x0
         b53e8:	11a01000 	movne	r1, r0
         b53ec:	11a00004 	movne	r0, r4
         b53f0:	1a000002 	bne	b5400 <TFaxTool::PhaseBProcessInitialID(void)+0x22c>
         b53f4:	ea000002 	b	b5404 <TFaxTool::PhaseBProcessInitialID(void)+0x230>
         b53f8:	e1a00004 	mov	r0, r4
         b53fc:	e1a01005 	mov	r1, r5
         b5400:	eb6c2f22 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b5404:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::PhaseBPutInitialID(long)
 * Address: 000b5408
 */
TFaxTool::PhaseBPutInitialID(long) {
    /*
         b5408:	e1a0c00d 	mov	ip, sp
         b540c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b5410:	e24cb004 	sub	fp, ip, #4	; 0x4
         b5414:	e1a04000 	mov	r4, r0
         b5418:	e5900018 	ldr	r0, [r0, #24]	; fField24
         b541c:	e3100004 	tst	r0, #4	; 0x4
         b5420:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         b5424:	e3310000 	teq	r1, #0	; 0x0
         b5428:	11a00004 	movne	r0, r4
         b542c:	13a01000 	movne	r1, #0	; 0x0
         b5430:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         b5434:	1a65d86b 	bne	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
         b5438:	e5d407ca 	ldrb	r0, [r4, #1994]	; fField1994
         b543c:	e3300040 	teq	r0, #64	; 0x40
         b5440:	1a000038 	bne	b5528 <TFaxTool::PhaseBPutInitialID(long)+0x120>
         b5444:	e59402fc 	ldr	r0, [r4, #764]	; fField764
         b5448:	e3500028 	cmp	r0, #40	; 0x28
         b544c:	259402a4 	ldrcs	r0, [r4, #676]	; fField676
         b5450:	23c00a07 	biccs	r0, r0, #28672	; 0x7000
         b5454:	23800901 	orrcs	r0, r0, #16384	; 0x4000
         b5458:	2a00000d 	bcs	b5494 <TFaxTool::PhaseBPutInitialID(long)+0x8c>
         b545c:	e3500014 	cmp	r0, #20	; 0x14
         b5460:	259402a4 	ldrcs	r0, [r4, #676]	; fField676
         b5464:	23c00a07 	biccs	r0, r0, #28672	; 0x7000
         b5468:	2a000009 	bcs	b5494 <TFaxTool::PhaseBPutInitialID(long)+0x8c>
         b546c:	e350000a 	cmp	r0, #10	; 0xa
         b5470:	259402a4 	ldrcs	r0, [r4, #676]	; fField676
         b5474:	23c00a07 	biccs	r0, r0, #28672	; 0x7000
         b5478:	23800a02 	orrcs	r0, r0, #8192	; 0x2000
         b547c:	2a000004 	bcs	b5494 <TFaxTool::PhaseBPutInitialID(long)+0x8c>
         b5480:	e3500005 	cmp	r0, #5	; 0x5
         b5484:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         b5488:	33800a07 	orrcc	r0, r0, #28672	; 0x7000
         b548c:	23c00a07 	biccs	r0, r0, #28672	; 0x7000
         b5490:	23800a01 	orrcs	r0, r0, #4096	; 0x1000
         b5494:	e58402a4 	str	r0, [r4, #676]	; fField676
         b5498:	e594032c 	ldr	r0, [r4, #812]	; fField812
         b549c:	e59412bc 	ldr	r1, [r4, #700]	; fField700
         b54a0:	e0011000 	and	r1, r1, r0
         b54a4:	e1a00004 	mov	r0, r4
         b54a8:	eb65c396 	bl	1a26308 <TFaxTool::$FastestDataRate(unsigned long)>
         b54ac:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         b54b0:	e3c1170f 	bic	r1, r1, #3932160	; 0x3c0000
         b54b4:	e200000f 	and	r0, r0, #15	; 0xf
         b54b8:	e1810900 	orr	r0, r1, r0, lsl #18
         b54bc:	e3a03001 	mov	r3, #1	; 0x1
         b54c0:	e58402a4 	str	r0, [r4, #676]	; fField676
         b54c4:	e92d0008 	stmdb	sp!, {r3}
         b54c8:	e2842fa9 	add	r2, r4, #676	; 0x2a4
         b54cc:	e1a00004 	mov	r0, r4
         b54d0:	e3a03005 	mov	r3, #5	; 0x5
         b54d4:	e3a01080 	mov	r1, #128	; 0x80
         b54d8:	eb655846 	bl	1a0b5f8 <TFaxTool::$BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)>
         b54dc:	e28dd004 	add	sp, sp, #4	; 0x4
         b54e0:	e3300000 	teq	r0, #0	; 0x0
         b54e4:	1a00000b 	bne	b5518 <TFaxTool::PhaseBPutInitialID(long)+0x110>
         b54e8:	e3a03001 	mov	r3, #1	; 0x1
         b54ec:	e3a0200a 	mov	r2, #10	; 0xa
         b54f0:	e92d000c 	stmdb	sp!, {r2, r3}
         b54f4:	e2843fea 	add	r3, r4, #936	; 0x3a8
         b54f8:	e2833b01 	add	r3, r3, #1024	; 0x400
         b54fc:	e1a00004 	mov	r0, r4
         b5500:	e3a02001 	mov	r2, #1	; 0x1
         b5504:	e3a01f45 	mov	r1, #276	; 0x114
         b5508:	eb65cfe6 	bl	1a294a8 <TFaxTool::$PostTransPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b550c:	e28dd008 	add	sp, sp, #8	; 0x8
         b5510:	e3300000 	teq	r0, #0	; 0x0
         b5514:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b5518:	e1a01000 	mov	r1, r0
         b551c:	e1a00004 	mov	r0, r4
         b5520:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b5524:	ea6c2ed9 	b	1bc1090 <TCommTool::$StartAbort(long)>
         b5528:	e3a00009 	mov	r0, #9	; 0x9
         b552c:	e5840278 	str	r0, [r4, #632]	; fField632
         b5530:	e1a00004 	mov	r0, r4
         b5534:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b5538:	ea6570e3 	b	1a118cc <TFaxTool::$GetResponse(void)>
    */
}

/**
 * Symbol: TFaxTool::PhaseBPutCommandToRcv(long)
 * Address: 000b553c
 */
TFaxTool::PhaseBPutCommandToRcv(long) {
    /*
         b553c:	e1a0c00d 	mov	ip, sp
         b5540:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b5544:	e24cb004 	sub	fp, ip, #4	; 0x4
         b5548:	e1a04000 	mov	r4, r0
         b554c:	e5900018 	ldr	r0, [r0, #24]	; fField24
         b5550:	e3100004 	tst	r0, #4	; 0x4
         b5554:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         b5558:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b555c:	e3100004 	tst	r0, #4	; 0x4
         b5560:	e2846fbb 	add	r6, r4, #748	; 0x2ec
         b5564:	e2845fea 	add	r5, r4, #936	; 0x3a8
         b5568:	e2855b01 	add	r5, r5, #1024	; 0x400
         b556c:	e5d407ca 	ldrb	r0, [r4, #1994]	; fField1994
         b5570:	0a000021 	beq	b55fc <TFaxTool::PhaseBPutCommandToRcv(long)+0xc0>
         b5574:	e3300043 	teq	r0, #67	; 0x43
         b5578:	1a000044 	bne	b5690 <TFaxTool::PhaseBPutCommandToRcv(long)+0x154>
         b557c:	e59402b8 	ldr	r0, [r4, #696]	; fField696
         b5580:	e5941324 	ldr	r1, [r4, #804]	; fField804
         b5584:	e0001001 	and	r1, r0, r1
         b5588:	e1a00004 	mov	r0, r4
         b558c:	eb65c35d 	bl	1a26308 <TFaxTool::$FastestDataRate(unsigned long)>
         b5590:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         b5594:	e3c1170f 	bic	r1, r1, #3932160	; 0x3c0000
         b5598:	e200000f 	and	r0, r0, #15	; 0xf
         b559c:	e1810900 	orr	r0, r1, r0, lsl #18
         b55a0:	e3a03001 	mov	r3, #1	; 0x1
         b55a4:	e58402a4 	str	r0, [r4, #676]	; fField676
         b55a8:	e92d0008 	stmdb	sp!, {r3}
         b55ac:	e1a02006 	mov	r2, r6
         b55b0:	e59432f4 	ldr	r3, [r4, #756]	; fField756
         b55b4:	e1a00004 	mov	r0, r4
         b55b8:	e3a01083 	mov	r1, #131	; 0x83
         b55bc:	eb65580d 	bl	1a0b5f8 <TFaxTool::$BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)>
         b55c0:	e28dd004 	add	sp, sp, #4	; 0x4
         b55c4:	e3300000 	teq	r0, #0	; 0x0
         b55c8:	1a00002c 	bne	b5680 <TFaxTool::PhaseBPutCommandToRcv(long)+0x144>
         b55cc:	e3a03001 	mov	r3, #1	; 0x1
         b55d0:	e3a02000 	mov	r2, #0	; 0x0
         b55d4:	e92d000c 	stmdb	sp!, {r2, r3}
         b55d8:	e1a03005 	mov	r3, r5
         b55dc:	e1a00004 	mov	r0, r4
         b55e0:	e3a02001 	mov	r2, #1	; 0x1
         b55e4:	e3a01f45 	mov	r1, #276	; 0x114
         b55e8:	eb65cfae 	bl	1a294a8 <TFaxTool::$PostTransPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b55ec:	e28dd008 	add	sp, sp, #8	; 0x8
         b55f0:	e3300000 	teq	r0, #0	; 0x0
         b55f4:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         b55f8:	ea000020 	b	b5680 <TFaxTool::PhaseBPutCommandToRcv(long)+0x144>
         b55fc:	e3300042 	teq	r0, #66	; 0x42
         b5600:	1a000022 	bne	b5690 <TFaxTool::PhaseBPutCommandToRcv(long)+0x154>
         b5604:	e59402b8 	ldr	r0, [r4, #696]	; fField696
         b5608:	e5941324 	ldr	r1, [r4, #804]	; fField804
         b560c:	e0001001 	and	r1, r0, r1
         b5610:	e1a00004 	mov	r0, r4
         b5614:	eb65c33b 	bl	1a26308 <TFaxTool::$FastestDataRate(unsigned long)>
         b5618:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         b561c:	e3c1170f 	bic	r1, r1, #3932160	; 0x3c0000
         b5620:	e200000f 	and	r0, r0, #15	; 0xf
         b5624:	e1810900 	orr	r0, r1, r0, lsl #18
         b5628:	e3a03001 	mov	r3, #1	; 0x1
         b562c:	e58402a4 	str	r0, [r4, #676]	; fField676
         b5630:	e92d0008 	stmdb	sp!, {r3}
         b5634:	e1a02006 	mov	r2, r6
         b5638:	e59432f4 	ldr	r3, [r4, #756]	; fField756
         b563c:	e1a00004 	mov	r0, r4
         b5640:	e3a01082 	mov	r1, #130	; 0x82
         b5644:	eb6557eb 	bl	1a0b5f8 <TFaxTool::$BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)>
         b5648:	e28dd004 	add	sp, sp, #4	; 0x4
         b564c:	e3300000 	teq	r0, #0	; 0x0
         b5650:	1a00000a 	bne	b5680 <TFaxTool::PhaseBPutCommandToRcv(long)+0x144>
         b5654:	e3a03001 	mov	r3, #1	; 0x1
         b5658:	e3a02000 	mov	r2, #0	; 0x0
         b565c:	e92d000c 	stmdb	sp!, {r2, r3}
         b5660:	e1a03005 	mov	r3, r5
         b5664:	e1a00004 	mov	r0, r4
         b5668:	e3a02001 	mov	r2, #1	; 0x1
         b566c:	e3a01f45 	mov	r1, #276	; 0x114
         b5670:	eb65cf8c 	bl	1a294a8 <TFaxTool::$PostTransPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b5674:	e28dd008 	add	sp, sp, #8	; 0x8
         b5678:	e3300000 	teq	r0, #0	; 0x0
         b567c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         b5680:	e1a01000 	mov	r1, r0
         b5684:	e1a00004 	mov	r0, r4
         b5688:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b568c:	ea6c2e7f 	b	1bc1090 <TCommTool::$StartAbort(long)>
         b5690:	e1a00004 	mov	r0, r4
         b5694:	e3a01048 	mov	r1, #72	; 0x48
         b5698:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b569c:	ea65d7b8 	b	1a2b584 <TFaxTool::$PutTrainingCheck(unsigned long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseBGetResponse(long)
 * Address: 000b56a0
 */
TFaxTool::PhaseBGetResponse(long) {
    /*
         b56a0:	e1a0c00d 	mov	ip, sp
         b56a4:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         b56a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         b56ac:	e1a04000 	mov	r4, r0
         b56b0:	e3a07002 	mov	r7, #2	; 0x2
         b56b4:	e3a06004 	mov	r6, #4	; 0x4
         b56b8:	e3a05005 	mov	r5, #5	; 0x5
         b56bc:	e291cc5d 	adds	ip, r1, #23808	; 0x5d00
         b56c0:	d37c00c2 	cmnle	ip, #194	; 0xc2
         b56c4:	0a000009 	beq	b56f0 <TFaxTool::PhaseBGetResponse(long)+0x50>
         b56c8:	ca000014 	bgt	b5720 <TFaxTool::PhaseBGetResponse(long)+0x80>
         b56cc:	e281cc5d 	add	ip, r1, #23808	; 0x5d00
         b56d0:	e37c00c9 	cmn	ip, #201	; 0xc9
         b56d4:	0a000005 	beq	b56f0 <TFaxTool::PhaseBGetResponse(long)+0x50>
         b56d8:	e281cc5d 	add	ip, r1, #23808	; 0x5d00
         b56dc:	e37c00c6 	cmn	ip, #198	; 0xc6
         b56e0:	0a000024 	beq	b5778 <TFaxTool::PhaseBGetResponse(long)+0xd8>
         b56e4:	e281cc5d 	add	ip, r1, #23808	; 0x5d00
         b56e8:	e37c00c5 	cmn	ip, #197	; 0xc5
         b56ec:	1a000037 	bne	b57d0 <TFaxTool::PhaseBGetResponse(long)+0x130>
         b56f0:	e1a00004 	mov	r0, r4
         b56f4:	eb657cca 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b56f8:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b56fc:	e3100004 	tst	r0, #4	; 0x4
         b5700:	05847278 	streq	r7, [r4, #632]	; fField632
         b5704:	0a000002 	beq	b5714 <TFaxTool::PhaseBGetResponse(long)+0x74>
         b5708:	e3100008 	tst	r0, #8	; 0x8
         b570c:	05845278 	streq	r5, [r4, #632]	; fField632
         b5710:	15846278 	strne	r6, [r4, #632]	; fField632
         b5714:	e1a00004 	mov	r0, r4
         b5718:	e3a01000 	mov	r1, #0	; 0x0
         b571c:	ea000027 	b	b57c0 <TFaxTool::PhaseBGetResponse(long)+0x120>
         b5720:	e281cc46 	add	ip, r1, #17920	; 0x4600
         b5724:	e37c0054 	cmn	ip, #84	; 0x54
         b5728:	0a000012 	beq	b5778 <TFaxTool::PhaseBGetResponse(long)+0xd8>
         b572c:	e281cdfa 	add	ip, r1, #16000	; 0x3e80
         b5730:	e37c0005 	cmn	ip, #5	; 0x5
         b5734:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b5738:	e3310000 	teq	r1, #0	; 0x0
         b573c:	1a000023 	bne	b57d0 <TFaxTool::PhaseBGetResponse(long)+0x130>
         b5740:	e594029c 	ldr	r0, [r4, #668]	; fField668
         b5744:	e3300002 	teq	r0, #2	; 0x2
         b5748:	01a00004 	moveq	r0, r4
         b574c:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         b5750:	0a6580e2 	beq	1a15ae0 <TFaxTool::$PhaseBProcessDCSResponse(void)>
         b5754:	e3300001 	teq	r0, #1	; 0x1
         b5758:	01a00004 	moveq	r0, r4
         b575c:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         b5760:	0a6580df 	beq	1a15ae4 <TFaxTool::$PhaseBProcessDTCResponse(void)>
         b5764:	e3300004 	teq	r0, #4	; 0x4
         b5768:	01a00004 	moveq	r0, r4
         b576c:	091b68f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         b5770:	0a65cb39 	beq	1a2845c <TFaxTool::$PhaseBProcessDISResponse(void)>
         b5774:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b5778:	e1a00004 	mov	r0, r4
         b577c:	eb657ca8 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b5780:	e594029c 	ldr	r0, [r4, #668]	; fField668
         b5784:	e3300002 	teq	r0, #2	; 0x2
         b5788:	05846278 	streq	r6, [r4, #632]	; fField632
         b578c:	0a000002 	beq	b579c <TFaxTool::PhaseBGetResponse(long)+0xfc>
         b5790:	e3300001 	teq	r0, #1	; 0x1
         b5794:	1a000003 	bne	b57a8 <TFaxTool::PhaseBGetResponse(long)+0x108>
         b5798:	e5845278 	str	r5, [r4, #632]	; fField632
         b579c:	e1a00004 	mov	r0, r4
         b57a0:	e3a010d2 	mov	r1, #210	; 0xd2
         b57a4:	ea000005 	b	b57c0 <TFaxTool::PhaseBGetResponse(long)+0x120>
         b57a8:	e3300004 	teq	r0, #4	; 0x4
         b57ac:	1a000005 	bne	b57c8 <TFaxTool::PhaseBGetResponse(long)+0x128>
         b57b0:	e5847278 	str	r7, [r4, #632]	; fField632
         b57b4:	e1a00004 	mov	r0, r4
         b57b8:	e3a01098 	mov	r1, #152	; 0x98
         b57bc:	e2811b02 	add	r1, r1, #2048	; 0x800
         b57c0:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         b57c4:	ea65d787 	b	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
         b57c8:	e3a0100d 	mov	r1, #13	; 0xd
         b57cc:	e2411c56 	sub	r1, r1, #22016	; 0x5600
         b57d0:	e1a00004 	mov	r0, r4
         b57d4:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         b57d8:	ea6c2e2c 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseBRespondToFTT(long)
 * Address: 000b57dc
 */
TFaxTool::PhaseBRespondToFTT(long) {
    /*
         b57dc:	e3310000 	teq	r1, #0	; 0x0
         b57e0:	03a01003 	moveq	r1, #3	; 0x3
         b57e4:	05801278 	streq	r1, [r0, #632]	; fField632
         b57e8:	0a65c2d7 	beq	1a2634c <TFaxTool::$GetCommand(void)>
         b57ec:	13a01048 	movne	r1, #72	; 0x48
         b57f0:	1a65d77c 	bne	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
    */
}

/**
 * Symbol: TFaxTool::GetCommandComplete(long)
 * Address: 000b57f4
 */
TFaxTool::GetCommandComplete(long) {
    /*
         b57f4:	e291cc5d 	adds	ip, r1, #23808	; 0x5d00
         b57f8:	d37c00c2 	cmnle	ip, #194	; 0xc2
         b57fc:	0a00001a 	beq	b586c <TFaxTool::GetCommandComplete(long)+0x78>
         b5800:	ca000005 	bgt	b581c <TFaxTool::GetCommandComplete(long)+0x28>
         b5804:	e281cc5d 	add	ip, r1, #23808	; 0x5d00
         b5808:	e37c00c9 	cmn	ip, #201	; 0xc9
         b580c:	1281cc5d 	addne	ip, r1, #23808	; 0x5d00
         b5810:	137c00c6 	cmnne	ip, #198	; 0xc6
         b5814:	1a000018 	bne	b587c <TFaxTool::GetCommandComplete(long)+0x88>
         b5818:	ea00000f 	b	b585c <TFaxTool::GetCommandComplete(long)+0x68>
         b581c:	e281cc46 	add	ip, r1, #17920	; 0x4600
         b5820:	e37c0054 	cmn	ip, #84	; 0x54
         b5824:	0a00000c 	beq	b585c <TFaxTool::GetCommandComplete(long)+0x68>
         b5828:	e281cdfa 	add	ip, r1, #16000	; 0x3e80
         b582c:	e37c0005 	cmn	ip, #5	; 0x5
         b5830:	01a0f00e 	moveq	pc, lr
         b5834:	e3310000 	teq	r1, #0	; 0x0
         b5838:	1a00000f 	bne	b587c <TFaxTool::GetCommandComplete(long)+0x88>
         b583c:	e5901270 	ldr	r1, [r0, #624]	; fField624
         b5840:	e3310001 	teq	r1, #1	; 0x1
         b5844:	0a65cb03 	beq	1a28458 <TFaxTool::$PhaseBProcessCommand(void)>
         b5848:	e3310003 	teq	r1, #3	; 0x3
         b584c:	0a65cb09 	beq	1a28478 <TFaxTool::$PhaseDProcessCommand(void)>
         b5850:	e3a0100d 	mov	r1, #13	; 0xd
         b5854:	e2411c56 	sub	r1, r1, #22016	; 0x5600
         b5858:	ea000007 	b	b587c <TFaxTool::GetCommandComplete(long)+0x88>
         b585c:	e3a01006 	mov	r1, #6	; 0x6
         b5860:	e580129c 	str	r1, [r0, #668]	; fField668
         b5864:	e3a01000 	mov	r1, #0	; 0x0
         b5868:	ea65d75e 	b	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
         b586c:	e59012ac 	ldr	r1, [r0, #684]	; fField684
         b5870:	e3310001 	teq	r1, #1	; 0x1
         b5874:	0a65952e 	beq	1a1ad34 <TFaxTool::$StartPhaseB(void)>
         b5878:	e59f1000 	ldr	r1, [pc, #0]	; b5880 <TFaxTool::GetCommandComplete(long)+0x8c>
         b587c:	ea6c2e03 	b	1bc1090 <TCommTool::$StartAbort(long)>
         b5880:	ffffaa0f 	swinv	0x00ffaa0f
    */
}

/**
 * Symbol: TFaxTool::PhaseBProcessCommand(void)
 * Address: 000b5884
 */
TFaxTool::PhaseBProcessCommand(void) {
    /*
         b5884:	e1a0c00d 	mov	ip, sp
         b5888:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         b588c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b5890:	e1a04000 	mov	r4, r0
         b5894:	e3a08000 	mov	r8, #0	; 0x0
         b5898:	e5d006a2 	ldrb	r0, [r0, #1698]
         b589c:	e3a07002 	mov	r7, #2	; 0x2
         b58a0:	e2845f96 	add	r5, r4, #600	; 0x258
         b58a4:	e2855b01 	add	r5, r5, #1024	; 0x400
         b58a8:	e3500081 	cmp	r0, #129	; 0x81
         b58ac:	0a000009 	beq	b58d8 <TFaxTool::PhaseBProcessCommand(void)+0x54>
         b58b0:	e28460a3 	add	r6, r4, #163	; 0xa3
         b58b4:	e2866c06 	add	r6, r6, #1536	; 0x600
         b58b8:	ca000008 	bgt	b58e0 <TFaxTool::PhaseBProcessCommand(void)+0x5c>
         b58bc:	e3300041 	teq	r0, #65	; 0x41
         b58c0:	0a00003f 	beq	b59c4 <TFaxTool::PhaseBProcessCommand(void)+0x140>
         b58c4:	e3300042 	teq	r0, #66	; 0x42
         b58c8:	13300043 	teqne	r0, #67	; 0x43
         b58cc:	0a00002d 	beq	b5988 <TFaxTool::PhaseBProcessCommand(void)+0x104>
         b58d0:	e3300080 	teq	r0, #128	; 0x80
         b58d4:	1a000051 	bne	b5a20 <TFaxTool::PhaseBProcessCommand(void)+0x19c>
         b58d8:	e5847278 	str	r7, [r4, #632]	; fField632
         b58dc:	ea000038 	b	b59c4 <TFaxTool::PhaseBProcessCommand(void)+0x140>
         b58e0:	e3300082 	teq	r0, #130	; 0x82
         b58e4:	13300083 	teqne	r0, #131	; 0x83
         b58e8:	1a00004c 	bne	b5a20 <TFaxTool::PhaseBProcessCommand(void)+0x19c>
         b58ec:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b58f0:	e3800040 	orr	r0, r0, #64	; 0x40
         b58f4:	e584026c 	str	r0, [r4, #620]	; fField620
         b58f8:	e24dd008 	sub	sp, sp, #8	; 0x8
         b58fc:	e1a0000d 	mov	r0, sp
         b5900:	e3a02005 	mov	r2, #5	; 0x5
         b5904:	e3a01000 	mov	r1, #0	; 0x0
         b5908:	eb6bfc52 	bl	1bb4a58 <$memset>
         b590c:	e1a00005 	mov	r0, r5
         b5910:	e5951000 	ldr	r1, [r5]
         b5914:	e1a0e00f 	mov	lr, pc
         b5918:	e281f02c 	add	pc, r1, #44	; 0x2c
         b591c:	e2400003 	sub	r0, r0, #3	; 0x3
         b5920:	e3a01008 	mov	r1, #8	; 0x8
         b5924:	e3500008 	cmp	r0, #8	; 0x8
         b5928:	a1a02001 	movge	r2, r1
         b592c:	b1a02000 	movlt	r2, r0
         b5930:	e1a00006 	mov	r0, r6
         b5934:	e1a0100d 	mov	r1, sp
         b5938:	eb6ca585 	bl	1bdef54 <$BlockMove>
         b593c:	e1a0100d 	mov	r1, sp
         b5940:	e1a00004 	mov	r0, r4
         b5944:	eb65db46 	bl	1a2c664 <TFaxTool::$ValidateDCS(TT30Capabilities &)>
         b5948:	e1b09000 	movs	r9, r0
         b594c:	0a000018 	beq	b59b4 <TFaxTool::PhaseBProcessCommand(void)+0x130>
         b5950:	e1a0100d 	mov	r1, sp
         b5954:	e1a00004 	mov	r0, r4
         b5958:	eb65db28 	bl	1a2c600 <TFaxTool::$SetSessionParameters(TT30Capabilities &)>
         b595c:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b5960:	e3100002 	tst	r0, #2	; 0x2
         b5964:	0a000015 	beq	b59c0 <TFaxTool::PhaseBProcessCommand(void)+0x13c>
         b5968:	e1a00004 	mov	r0, r4
         b596c:	eb65c26e 	bl	1a2632c <TFaxTool::$FreeReceiveBuffers(void)>
         b5970:	e1a00004 	mov	r0, r4
         b5974:	eb65b613 	bl	1a231c8 <TFaxTool::$AllocateReceiveBuffers(void)>
         b5978:	e3300000 	teq	r0, #0	; 0x0
         b597c:	128dd008 	addne	sp, sp, #8	; 0x8
         b5980:	1a000048 	bne	b5aa8 <TFaxTool::PhaseBProcessCommand(void)+0x224>
         b5984:	ea00000d 	b	b59c0 <TFaxTool::PhaseBProcessCommand(void)+0x13c>
         b5988:	e1a00005 	mov	r0, r5
         b598c:	e5951000 	ldr	r1, [r5]
         b5990:	e1a0e00f 	mov	lr, pc
         b5994:	e281f02c 	add	pc, r1, #44	; 0x2c
         b5998:	e2403003 	sub	r3, r0, #3	; 0x3
         b599c:	e2842ff6 	add	r2, r4, #984	; 0x3d8
         b59a0:	e2822b01 	add	r2, r2, #1024	; 0x400
         b59a4:	e1a01006 	mov	r1, r6
         b59a8:	e1a00004 	mov	r0, r4
         b59ac:	eb656fbf 	bl	1a118b0 <TFaxTool::$GetIdentification(unsigned char const *, unsigned char *const, unsigned long)>
         b59b0:	ea000003 	b	b59c4 <TFaxTool::PhaseBProcessCommand(void)+0x140>
         b59b4:	e3a08f71 	mov	r8, #452	; 0x1c4
         b59b8:	e2888b02 	add	r8, r8, #2048	; 0x800
         b59bc:	e5847278 	str	r7, [r4, #632]	; fField632
         b59c0:	e28dd008 	add	sp, sp, #8	; 0x8
         b59c4:	e5d406a1 	ldrb	r0, [r4, #1697]	; fField1697
         b59c8:	e3300013 	teq	r0, #19	; 0x13
         b59cc:	1a000025 	bne	b5a68 <TFaxTool::PhaseBProcessCommand(void)+0x1e4>
         b59d0:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b59d4:	e3100040 	tst	r0, #64	; 0x40
         b59d8:	13390000 	teqne	r9, #0	; 0x0
         b59dc:	13a00006 	movne	r0, #6	; 0x6
         b59e0:	15840278 	strne	r0, [r4, #632]	; fField632
         b59e4:	e5940278 	ldr	r0, [r4, #632]	; fField632
         b59e8:	e3300002 	teq	r0, #2	; 0x2
         b59ec:	01a01008 	moveq	r1, r8
         b59f0:	01a00004 	moveq	r0, r4
         b59f4:	091b6bf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         b59f8:	0a65d2de 	beq	1a2a578 <TFaxTool::$PutInitialId(unsigned long)>
         b59fc:	e3300006 	teq	r0, #6	; 0x6
         b5a00:	0a00000a 	beq	b5a30 <TFaxTool::PhaseBProcessCommand(void)+0x1ac>
         b5a04:	e59f1010 	ldr	r1, [pc, #10]	; b5a1c <TFaxTool::PhaseBProcessCommand(void)+0x198>
         b5a08:	e330000d 	teq	r0, #13	; 0xd
         b5a0c:	05940018 	ldreq	r0, [r4, #24]	; fField24
         b5a10:	03c00201 	biceq	r0, r0, #268435456	; 0x10000000
         b5a14:	05840018 	streq	r0, [r4, #24]	; fField24
         b5a18:	ea000010 	b	b5a60 <TFaxTool::PhaseBProcessCommand(void)+0x1dc>
         b5a1c:	ffffaa0f 	swinv	0x00ffaa0f
         b5a20:	e24dd008 	sub	sp, sp, #8	; 0x8
         b5a24:	e3a0000d 	mov	r0, #13	; 0xd
         b5a28:	e5840278 	str	r0, [r4, #632]	; fField632
         b5a2c:	eaffffe3 	b	b59c0 <TFaxTool::PhaseBProcessCommand(void)+0x13c>
         b5a30:	e1a00004 	mov	r0, r4
         b5a34:	e3a01001 	mov	r1, #1	; 0x1
         b5a38:	eb65b5e3 	bl	1a231cc <TFaxTool::$AllocateTCBuffer(unsigned char)>
         b5a3c:	e3a01000 	mov	r1, #0	; 0x0
         b5a40:	e5841298 	str	r1, [r4, #664]	; fField664
         b5a44:	e5841290 	str	r1, [r4, #656]	; fField656
         b5a48:	e3300000 	teq	r0, #0	; 0x0
         b5a4c:	e5841294 	str	r1, [r4, #660]	; fField660
         b5a50:	01a00004 	moveq	r0, r4
         b5a54:	091b6bf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         b5a58:	0a65c64a 	beq	1a27388 <TFaxTool::$GetTrainingCheck(void)>
         b5a5c:	ea000011 	b	b5aa8 <TFaxTool::PhaseBProcessCommand(void)+0x224>
         b5a60:	e1a00004 	mov	r0, r4
         b5a64:	ea000017 	b	b5ac8 <TFaxTool::PhaseBProcessCommand(void)+0x244>
         b5a68:	e5940278 	ldr	r0, [r4, #632]	; fField632
         b5a6c:	e3300009 	teq	r0, #9	; 0x9
         b5a70:	1a00000e 	bne	b5ab0 <TFaxTool::PhaseBProcessCommand(void)+0x22c>
         b5a74:	e3a03000 	mov	r3, #0	; 0x0
         b5a78:	e3a020b2 	mov	r2, #178	; 0xb2
         b5a7c:	e2822b03 	add	r2, r2, #3072	; 0xc00
         b5a80:	e92d000c 	stmdb	sp!, {r2, r3}
         b5a84:	e1a03005 	mov	r3, r5
         b5a88:	e1a00004 	mov	r0, r4
         b5a8c:	e3a02001 	mov	r2, #1	; 0x1
         b5a90:	e3a01016 	mov	r1, #22	; 0x16
         b5a94:	e2811c01 	add	r1, r1, #256	; 0x100
         b5a98:	eb65ce7f 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b5a9c:	e28dd008 	add	sp, sp, #8	; 0x8
         b5aa0:	e3300000 	teq	r0, #0	; 0x0
         b5aa4:	091babf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         b5aa8:	e1a01000 	mov	r1, r0
         b5aac:	eaffffeb 	b	b5a60 <TFaxTool::PhaseBProcessCommand(void)+0x1dc>
         b5ab0:	e3300003 	teq	r0, #3	; 0x3
         b5ab4:	e1a00004 	mov	r0, r4
         b5ab8:	091b6bf0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         b5abc:	0a65c222 	beq	1a2634c <TFaxTool::$GetCommand(void)>
         b5ac0:	e3a0100d 	mov	r1, #13	; 0xd
         b5ac4:	e2411c56 	sub	r1, r1, #22016	; 0x5600
         b5ac8:	e91b6bf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, lr}
         b5acc:	ea6c2d6f 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::StartPhaseB(void)
 * Address: 000b5ad0
 */
TFaxTool::StartPhaseB(void) {
    /*
         b5ad0:	e1a0c00d 	mov	ip, sp
         b5ad4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b5ad8:	e24cb004 	sub	fp, ip, #4	; 0x4
         b5adc:	e1a04000 	mov	r4, r0
         b5ae0:	e3a01001 	mov	r1, #1	; 0x1
         b5ae4:	e5801270 	str	r1, [r0, #624]	; fField624
         b5ae8:	e590026c 	ldr	r0, [r0, #620]	; fField620
         b5aec:	e3c00602 	bic	r0, r0, #2097152	; 0x200000
         b5af0:	e3c000e0 	bic	r0, r0, #224	; 0xe0
         b5af4:	e3a02000 	mov	r2, #0	; 0x0
         b5af8:	e584026c 	str	r0, [r4, #620]	; fField620
         b5afc:	e3100004 	tst	r0, #4	; 0x4
         b5b00:	e58422ac 	str	r2, [r4, #684]	; fField684
         b5b04:	0a000019 	beq	b5b70 <TFaxTool::StartPhaseB(void)+0xa0>
         b5b08:	e3a03000 	mov	r3, #0	; 0x0
         b5b0c:	e3a020b2 	mov	r2, #178	; 0xb2
         b5b10:	e2822b03 	add	r2, r2, #3072	; 0xc00
         b5b14:	e5841278 	str	r1, [r4, #632]	; fField632
         b5b18:	e92d000c 	stmdb	sp!, {r2, r3}
         b5b1c:	e2843f96 	add	r3, r4, #600	; 0x258
         b5b20:	e2833b01 	add	r3, r3, #1024	; 0x400
         b5b24:	e1a00004 	mov	r0, r4
         b5b28:	e3a02001 	mov	r2, #1	; 0x1
         b5b2c:	e3a01016 	mov	r1, #22	; 0x16
         b5b30:	e2811c01 	add	r1, r1, #256	; 0x100
         b5b34:	eb65ce58 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b5b38:	e28dd008 	add	sp, sp, #8	; 0x8
         b5b3c:	e3300000 	teq	r0, #0	; 0x0
         b5b40:	1a000006 	bne	b5b60 <TFaxTool::StartPhaseB(void)+0x90>
         b5b44:	e1a00004 	mov	r0, r4
         b5b48:	e3a039e1 	mov	r3, #3686400	; 0x384000
         b5b4c:	e3a02023 	mov	r2, #35	; 0x23
         b5b50:	e3a01003 	mov	r1, #3	; 0x3
         b5b54:	eb6583f6 	bl	1a16b34 <TFaxTool::$PostTimer(unsigned long, unsigned long, TimeUnits)>
         b5b58:	e3300000 	teq	r0, #0	; 0x0
         b5b5c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b5b60:	e1a01000 	mov	r1, r0
         b5b64:	e1a00004 	mov	r0, r4
         b5b68:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b5b6c:	ea6c2d47 	b	1bc1090 <TCommTool::$StartAbort(long)>
         b5b70:	e3a00002 	mov	r0, #2	; 0x2
         b5b74:	e5840278 	str	r0, [r4, #632]	; fField632
         b5b78:	e3a00005 	mov	r0, #5	; 0x5
         b5b7c:	e5840284 	str	r0, [r4, #644]	; fField644
         b5b80:	e1a00004 	mov	r0, r4
         b5b84:	e3a01000 	mov	r1, #0	; 0x0
         b5b88:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b5b8c:	ea65d279 	b	1a2a578 <TFaxTool::$PutInitialId(unsigned long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseBProcessDCSResponse(void)
 * Address: 000b5b90
 */
TFaxTool::PhaseBProcessDCSResponse(void) {
    /*
         b5b90:	e1a0c00d 	mov	ip, sp
         b5b94:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         b5b98:	e24cb004 	sub	fp, ip, #4	; 0x4
         b5b9c:	e1a04000 	mov	r4, r0
         b5ba0:	e24dd008 	sub	sp, sp, #8	; 0x8
         b5ba4:	e5d006a2 	ldrb	r0, [r0, #1698]
         b5ba8:	e2845f96 	add	r5, r4, #600	; 0x258
         b5bac:	e2855b01 	add	r5, r5, #1024	; 0x400
         b5bb0:	e3a07004 	mov	r7, #4	; 0x4
         b5bb4:	e3a09003 	mov	r9, #3	; 0x3
         b5bb8:	e3a08001 	mov	r8, #1	; 0x1
         b5bbc:	e3500045 	cmp	r0, #69	; 0x45
         b5bc0:	0a000010 	beq	b5c08 <TFaxTool::PhaseBProcessDCSResponse(void)+0x78>
         b5bc4:	e28460a3 	add	r6, r4, #163	; 0xa3
         b5bc8:	e2866c06 	add	r6, r6, #1536	; 0x600
         b5bcc:	ca00000f 	bgt	b5c10 <TFaxTool::PhaseBProcessDCSResponse(void)+0x80>
         b5bd0:	e3500020 	cmp	r0, #32	; 0x20
         b5bd4:	0594026c 	ldreq	r0, [r4, #620]	; fField620
         b5bd8:	03800020 	orreq	r0, r0, #32	; 0x20
         b5bdc:	0a000056 	beq	b5d3c <TFaxTool::PhaseBProcessDCSResponse(void)+0x1ac>
         b5be0:	ca000004 	bgt	b5bf8 <TFaxTool::PhaseBProcessDCSResponse(void)+0x68>
         b5be4:	e330001a 	teq	r0, #26	; 0x1a
         b5be8:	1330001b 	teqne	r0, #27	; 0x1b
         b5bec:	03a0000b 	moveq	r0, #11	; 0xb
         b5bf0:	0a000013 	beq	b5c44 <TFaxTool::PhaseBProcessDCSResponse(void)+0xb4>
         b5bf4:	ea000051 	b	b5d40 <TFaxTool::PhaseBProcessDCSResponse(void)+0x1b0>
         b5bf8:	e3300040 	teq	r0, #64	; 0x40
         b5bfc:	0a000012 	beq	b5c4c <TFaxTool::PhaseBProcessDCSResponse(void)+0xbc>
         b5c00:	e3300044 	teq	r0, #68	; 0x44
         b5c04:	1a00004d 	bne	b5d40 <TFaxTool::PhaseBProcessDCSResponse(void)+0x1b0>
         b5c08:	e3a0000a 	mov	r0, #10	; 0xa
         b5c0c:	ea00000c 	b	b5c44 <TFaxTool::PhaseBProcessDCSResponse(void)+0xb4>
         b5c10:	e3500085 	cmp	r0, #133	; 0x85
         b5c14:	0a000004 	beq	b5c2c <TFaxTool::PhaseBProcessDCSResponse(void)+0x9c>
         b5c18:	ca000005 	bgt	b5c34 <TFaxTool::PhaseBProcessDCSResponse(void)+0xa4>
         b5c1c:	e3300080 	teq	r0, #128	; 0x80
         b5c20:	0a000014 	beq	b5c78 <TFaxTool::PhaseBProcessDCSResponse(void)+0xe8>
         b5c24:	e3300084 	teq	r0, #132	; 0x84
         b5c28:	1a000044 	bne	b5d40 <TFaxTool::PhaseBProcessDCSResponse(void)+0x1b0>
         b5c2c:	e3a0000e 	mov	r0, #14	; 0xe
         b5c30:	ea000003 	b	b5c44 <TFaxTool::PhaseBProcessDCSResponse(void)+0xb4>
         b5c34:	e33000fa 	teq	r0, #250	; 0xfa
         b5c38:	133000fb 	teqne	r0, #251	; 0xfb
         b5c3c:	1a00003f 	bne	b5d40 <TFaxTool::PhaseBProcessDCSResponse(void)+0x1b0>
         b5c40:	e3a0000d 	mov	r0, #13	; 0xd
         b5c44:	e5840278 	str	r0, [r4, #632]	; fField632
         b5c48:	ea00003c 	b	b5d40 <TFaxTool::PhaseBProcessDCSResponse(void)+0x1b0>
         b5c4c:	e1a00005 	mov	r0, r5
         b5c50:	e5951000 	ldr	r1, [r5]
         b5c54:	e1a0e00f 	mov	lr, pc
         b5c58:	e281f02c 	add	pc, r1, #44	; 0x2c
         b5c5c:	e2403003 	sub	r3, r0, #3	; 0x3
         b5c60:	e2842ff6 	add	r2, r4, #984	; 0x3d8
         b5c64:	e2822b01 	add	r2, r2, #1024	; 0x400
         b5c68:	e1a01006 	mov	r1, r6
         b5c6c:	e1a00004 	mov	r0, r4
         b5c70:	eb656f0e 	bl	1a118b0 <TFaxTool::$GetIdentification(unsigned char const *, unsigned char *const, unsigned long)>
         b5c74:	ea000031 	b	b5d40 <TFaxTool::PhaseBProcessDCSResponse(void)+0x1b0>
         b5c78:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b5c7c:	e3800080 	orr	r0, r0, #128	; 0x80
         b5c80:	e584026c 	str	r0, [r4, #620]	; fField620
         b5c84:	e1a0000d 	mov	r0, sp
         b5c88:	e3a02005 	mov	r2, #5	; 0x5
         b5c8c:	e3a01000 	mov	r1, #0	; 0x0
         b5c90:	eb6bfb70 	bl	1bb4a58 <$memset>
         b5c94:	e1a00005 	mov	r0, r5
         b5c98:	e5951000 	ldr	r1, [r5]
         b5c9c:	e1a0e00f 	mov	lr, pc
         b5ca0:	e281f02c 	add	pc, r1, #44	; 0x2c
         b5ca4:	e2400003 	sub	r0, r0, #3	; 0x3
         b5ca8:	e3a01008 	mov	r1, #8	; 0x8
         b5cac:	e3500008 	cmp	r0, #8	; 0x8
         b5cb0:	a1a02001 	movge	r2, r1
         b5cb4:	b1a02000 	movlt	r2, r0
         b5cb8:	e1a00006 	mov	r0, r6
         b5cbc:	e1a0100d 	mov	r1, sp
         b5cc0:	eb6ca4a3 	bl	1bdef54 <$BlockMove>
         b5cc4:	e1a0100d 	mov	r1, sp
         b5cc8:	e1a00004 	mov	r0, r4
         b5ccc:	eb656291 	bl	1a0e718 <TFaxTool::$CompatibleRemoteRcvr(TT30Capabilities &)>
         b5cd0:	e3300000 	teq	r0, #0	; 0x0
         b5cd4:	1594026c 	ldrne	r0, [r4, #620]	; fField620
         b5cd8:	12000001 	andne	r0, r0, #1	; 0x1
         b5cdc:	13300000 	teqne	r0, #0	; 0x0
         b5ce0:	0a00000a 	beq	b5d10 <TFaxTool::PhaseBProcessDCSResponse(void)+0x180>
         b5ce4:	e2842fbb 	add	r2, r4, #748	; 0x2ec
         b5ce8:	e1a0100d 	mov	r1, sp
         b5cec:	e1a00004 	mov	r0, r4
         b5cf0:	eb655641 	bl	1a0b5fc <TFaxTool::$BuildDCS(TT30Capabilities &, TT30Capabilities &)>
         b5cf4:	e5847278 	str	r7, [r4, #632]	; fField632
         b5cf8:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b5cfc:	e3800008 	orr	r0, r0, #8	; 0x8
         b5d00:	e584026c 	str	r0, [r4, #620]	; fField620
         b5d04:	e584828c 	str	r8, [r4, #652]	; fField652
         b5d08:	e5849284 	str	r9, [r4, #644]	; fField644
         b5d0c:	ea00000b 	b	b5d40 <TFaxTool::PhaseBProcessDCSResponse(void)+0x1b0>
         b5d10:	e1a0100d 	mov	r1, sp
         b5d14:	e1a00004 	mov	r0, r4
         b5d18:	eb65627f 	bl	1a0e71c <TFaxTool::$CompatibleRemoteXmtr(TT30Capabilities &)>
         b5d1c:	e3300000 	teq	r0, #0	; 0x0
         b5d20:	1594026c 	ldrne	r0, [r4, #620]	; fField620
         b5d24:	12001002 	andne	r1, r0, #2	; 0x2
         b5d28:	13310000 	teqne	r1, #0	; 0x0
         b5d2c:	0a000003 	beq	b5d40 <TFaxTool::PhaseBProcessDCSResponse(void)+0x1b0>
         b5d30:	e3a01005 	mov	r1, #5	; 0x5
         b5d34:	e3c00008 	bic	r0, r0, #8	; 0x8
         b5d38:	e5841278 	str	r1, [r4, #632]	; fField632
         b5d3c:	e584026c 	str	r0, [r4, #620]	; fField620
         b5d40:	e5d406a1 	ldrb	r0, [r4, #1697]	; fField1697
         b5d44:	e3300013 	teq	r0, #19	; 0x13
         b5d48:	1a00003b 	bne	b5e3c <TFaxTool::PhaseBProcessDCSResponse(void)+0x2ac>
         b5d4c:	e1a00004 	mov	r0, r4
         b5d50:	eb657b33 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b5d54:	e5940278 	ldr	r0, [r4, #632]	; fField632
         b5d58:	e2400004 	sub	r0, r0, #4	; 0x4
         b5d5c:	e59f1040 	ldr	r1, [pc, #40]	; b5da4 <TFaxTool::PhaseBProcessDCSResponse(void)+0x214>
         b5d60:	e350000a 	cmp	r0, #10	; 0xa
         b5d64:	908ff100 	addls	pc, pc, r0, lsl #2
         b5d68:	ea00001b 	b	b5ddc <TFaxTool::PhaseBProcessDCSResponse(void)+0x24c>
         b5d6c:	ea000015 	b	b5dc8 <TFaxTool::PhaseBProcessDCSResponse(void)+0x238>
         b5d70:	ea00001f 	b	b5df4 <TFaxTool::PhaseBProcessDCSResponse(void)+0x264>
         b5d74:	ea000018 	b	b5ddc <TFaxTool::PhaseBProcessDCSResponse(void)+0x24c>
         b5d78:	ea000017 	b	b5ddc <TFaxTool::PhaseBProcessDCSResponse(void)+0x24c>
         b5d7c:	ea000016 	b	b5ddc <TFaxTool::PhaseBProcessDCSResponse(void)+0x24c>
         b5d80:	ea000015 	b	b5ddc <TFaxTool::PhaseBProcessDCSResponse(void)+0x24c>
         b5d84:	ea000007 	b	b5da8 <TFaxTool::PhaseBProcessDCSResponse(void)+0x218>
         b5d88:	ea000022 	b	b5e18 <TFaxTool::PhaseBProcessDCSResponse(void)+0x288>
         b5d8c:	ea000012 	b	b5ddc <TFaxTool::PhaseBProcessDCSResponse(void)+0x24c>
         b5d90:	ea000025 	b	b5e2c <TFaxTool::PhaseBProcessDCSResponse(void)+0x29c>
         b5d94:	e1a00004 	mov	r0, r4
         b5d98:	e3a01000 	mov	r1, #0	; 0x0
         b5d9c:	eb65c9ac 	bl	1a28454 <TFaxTool::$PhaseBComplete(long)>
         b5da0:	ea00003a 	b	b5e90 <TFaxTool::PhaseBProcessDCSResponse(void)+0x300>
         b5da4:	ffffaa0f 	swinv	0x00ffaa0f
         b5da8:	e1a00004 	mov	r0, r4
         b5dac:	eb6555fe 	bl	1a0b5ac <TFaxTool::$AdjustSpeedForFTT(void)>
         b5db0:	e3300000 	teq	r0, #0	; 0x0
         b5db4:	05847278 	streq	r7, [r4, #632]	; fField632
         b5db8:	05848288 	streq	r8, [r4, #648]	; fField648
         b5dbc:	05849284 	streq	r9, [r4, #644]	; fField644
         b5dc0:	0a000007 	beq	b5de4 <TFaxTool::PhaseBProcessDCSResponse(void)+0x254>
         b5dc4:	ea000032 	b	b5e94 <TFaxTool::PhaseBProcessDCSResponse(void)+0x304>
         b5dc8:	e5940288 	ldr	r0, [r4, #648]	; fField648
         b5dcc:	e2800001 	add	r0, r0, #1	; 0x1
         b5dd0:	e5840288 	str	r0, [r4, #648]	; fField648
         b5dd4:	e3500003 	cmp	r0, #3	; 0x3
         b5dd8:	9a000001 	bls	b5de4 <TFaxTool::PhaseBProcessDCSResponse(void)+0x254>
         b5ddc:	e1a00004 	mov	r0, r4
         b5de0:	ea000029 	b	b5e8c <TFaxTool::PhaseBProcessDCSResponse(void)+0x2fc>
         b5de4:	e1a00004 	mov	r0, r4
         b5de8:	e3a0106e 	mov	r1, #110	; 0x6e
         b5dec:	eb65d1db 	bl	1a2a560 <TFaxTool::$PutCommandToRcv(unsigned long)>
         b5df0:	ea000026 	b	b5e90 <TFaxTool::PhaseBProcessDCSResponse(void)+0x300>
         b5df4:	e5940288 	ldr	r0, [r4, #648]	; fField648
         b5df8:	e2800001 	add	r0, r0, #1	; 0x1
         b5dfc:	e5840288 	str	r0, [r4, #648]	; fField648
         b5e00:	e3500003 	cmp	r0, #3	; 0x3
         b5e04:	8afffff4 	bhi	b5ddc <TFaxTool::PhaseBProcessDCSResponse(void)+0x24c>
         b5e08:	e1a00004 	mov	r0, r4
         b5e0c:	e3a0100a 	mov	r1, #10	; 0xa
         b5e10:	eb65d1d3 	bl	1a2a564 <TFaxTool::$PutCommandToXmit(unsigned long)>
         b5e14:	ea00001d 	b	b5e90 <TFaxTool::PhaseBProcessDCSResponse(void)+0x300>
         b5e18:	e5847278 	str	r7, [r4, #632]	; fField632
         b5e1c:	e1a00004 	mov	r0, r4
         b5e20:	e3a010d2 	mov	r1, #210	; 0xd2
         b5e24:	eb65d5ef 	bl	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
         b5e28:	ea000018 	b	b5e90 <TFaxTool::PhaseBProcessDCSResponse(void)+0x300>
         b5e2c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         b5e30:	e3c00201 	bic	r0, r0, #268435456	; 0x10000000
         b5e34:	e5840018 	str	r0, [r4, #24]	; fField24
         b5e38:	eaffffe7 	b	b5ddc <TFaxTool::PhaseBProcessDCSResponse(void)+0x24c>
         b5e3c:	e5940278 	ldr	r0, [r4, #632]	; fField632
         b5e40:	e3300009 	teq	r0, #9	; 0x9
         b5e44:	1a00000d 	bne	b5e80 <TFaxTool::PhaseBProcessDCSResponse(void)+0x2f0>
         b5e48:	e3a03000 	mov	r3, #0	; 0x0
         b5e4c:	e3a020b2 	mov	r2, #178	; 0xb2
         b5e50:	e2822b03 	add	r2, r2, #3072	; 0xc00
         b5e54:	e92d000c 	stmdb	sp!, {r2, r3}
         b5e58:	e1a03005 	mov	r3, r5
         b5e5c:	e1a00004 	mov	r0, r4
         b5e60:	e3a02001 	mov	r2, #1	; 0x1
         b5e64:	e3a01016 	mov	r1, #22	; 0x16
         b5e68:	e2811c01 	add	r1, r1, #256	; 0x100
         b5e6c:	eb65cd8a 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b5e70:	e28dd008 	add	sp, sp, #8	; 0x8
         b5e74:	e3300000 	teq	r0, #0	; 0x0
         b5e78:	1a000005 	bne	b5e94 <TFaxTool::PhaseBProcessDCSResponse(void)+0x304>
         b5e7c:	ea000003 	b	b5e90 <TFaxTool::PhaseBProcessDCSResponse(void)+0x300>
         b5e80:	e1a00004 	mov	r0, r4
         b5e84:	e3a0100e 	mov	r1, #14	; 0xe
         b5e88:	e2411c56 	sub	r1, r1, #22016	; 0x5600
         b5e8c:	eb6c2c7f 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b5e90:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         b5e94:	e1a01000 	mov	r1, r0
         b5e98:	eaffffcf 	b	b5ddc <TFaxTool::PhaseBProcessDCSResponse(void)+0x24c>
    */
}

/**
 * Symbol: TFaxTool::PhaseBProcessDTCResponse(void)
 * Address: 000b5e9c
 */
TFaxTool::PhaseBProcessDTCResponse(void) {
    /*
         b5e9c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxTool::PhaseBProcessDISResponse(void)
 * Address: 000b5ea0
 */
TFaxTool::PhaseBProcessDISResponse(void) {
    /*
         b5ea0:	e1a0c00d 	mov	ip, sp
         b5ea4:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         b5ea8:	e24cb004 	sub	fp, ip, #4	; 0x4
         b5eac:	e1a04000 	mov	r4, r0
         b5eb0:	e24dd008 	sub	sp, sp, #8	; 0x8
         b5eb4:	e3a08000 	mov	r8, #0	; 0x0
         b5eb8:	e5d006a2 	ldrb	r0, [r0, #1698]
         b5ebc:	e3a07004 	mov	r7, #4	; 0x4
         b5ec0:	e2845f96 	add	r5, r4, #600	; 0x258
         b5ec4:	e2855b01 	add	r5, r5, #1024	; 0x400
         b5ec8:	e3500045 	cmp	r0, #69	; 0x45
         b5ecc:	0a000017 	beq	b5f30 <TFaxTool::PhaseBProcessDISResponse(void)+0x90>
         b5ed0:	e28460a3 	add	r6, r4, #163	; 0xa3
         b5ed4:	e2866c06 	add	r6, r6, #1536	; 0x600
         b5ed8:	ca000016 	bgt	b5f38 <TFaxTool::PhaseBProcessDISResponse(void)+0x98>
         b5edc:	e3500041 	cmp	r0, #65	; 0x41
         b5ee0:	0a000093 	beq	b6134 <TFaxTool::PhaseBProcessDISResponse(void)+0x294>
         b5ee4:	e284aff6 	add	sl, r4, #984	; 0x3d8
         b5ee8:	e28aab01 	add	sl, sl, #1024	; 0x400
         b5eec:	ca00000a 	bgt	b5f1c <TFaxTool::PhaseBProcessDISResponse(void)+0x7c>
         b5ef0:	e330001a 	teq	r0, #26	; 0x1a
         b5ef4:	1330001b 	teqne	r0, #27	; 0x1b
         b5ef8:	03a0000b 	moveq	r0, #11	; 0xb
         b5efc:	0a00004a 	beq	b602c <TFaxTool::PhaseBProcessDISResponse(void)+0x18c>
         b5f00:	e3300020 	teq	r0, #32	; 0x20
         b5f04:	0594026c 	ldreq	r0, [r4, #620]	; fField620
         b5f08:	03800020 	orreq	r0, r0, #32	; 0x20
         b5f0c:	0a00007d 	beq	b6108 <TFaxTool::PhaseBProcessDISResponse(void)+0x268>
         b5f10:	e3300040 	teq	r0, #64	; 0x40
         b5f14:	1a000086 	bne	b6134 <TFaxTool::PhaseBProcessDISResponse(void)+0x294>
         b5f18:	ea00007c 	b	b6110 <TFaxTool::PhaseBProcessDISResponse(void)+0x270>
         b5f1c:	e3300042 	teq	r0, #66	; 0x42
         b5f20:	13300043 	teqne	r0, #67	; 0x43
         b5f24:	0a000079 	beq	b6110 <TFaxTool::PhaseBProcessDISResponse(void)+0x270>
         b5f28:	e3300044 	teq	r0, #68	; 0x44
         b5f2c:	1a000080 	bne	b6134 <TFaxTool::PhaseBProcessDISResponse(void)+0x294>
         b5f30:	e3a0000a 	mov	r0, #10	; 0xa
         b5f34:	ea00003c 	b	b602c <TFaxTool::PhaseBProcessDISResponse(void)+0x18c>
         b5f38:	e3500084 	cmp	r0, #132	; 0x84
         b5f3c:	0a000039 	beq	b6028 <TFaxTool::PhaseBProcessDISResponse(void)+0x188>
         b5f40:	ca00002f 	bgt	b6004 <TFaxTool::PhaseBProcessDISResponse(void)+0x164>
         b5f44:	e3a0a002 	mov	sl, #2	; 0x2
         b5f48:	e3300080 	teq	r0, #128	; 0x80
         b5f4c:	0a000038 	beq	b6034 <TFaxTool::PhaseBProcessDISResponse(void)+0x194>
         b5f50:	e3300081 	teq	r0, #129	; 0x81
         b5f54:	0a000031 	beq	b6020 <TFaxTool::PhaseBProcessDISResponse(void)+0x180>
         b5f58:	e3300082 	teq	r0, #130	; 0x82
         b5f5c:	13300083 	teqne	r0, #131	; 0x83
         b5f60:	1a000073 	bne	b6134 <TFaxTool::PhaseBProcessDISResponse(void)+0x294>
         b5f64:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b5f68:	e3800040 	orr	r0, r0, #64	; 0x40
         b5f6c:	e584026c 	str	r0, [r4, #620]	; fField620
         b5f70:	e1a0000d 	mov	r0, sp
         b5f74:	e3a02005 	mov	r2, #5	; 0x5
         b5f78:	e3a01000 	mov	r1, #0	; 0x0
         b5f7c:	eb6bfab5 	bl	1bb4a58 <$memset>
         b5f80:	e1a00005 	mov	r0, r5
         b5f84:	e5951000 	ldr	r1, [r5]
         b5f88:	e1a0e00f 	mov	lr, pc
         b5f8c:	e281f02c 	add	pc, r1, #44	; 0x2c
         b5f90:	e2400003 	sub	r0, r0, #3	; 0x3
         b5f94:	e3a01008 	mov	r1, #8	; 0x8
         b5f98:	e3500008 	cmp	r0, #8	; 0x8
         b5f9c:	a1a02001 	movge	r2, r1
         b5fa0:	b1a02000 	movlt	r2, r0
         b5fa4:	e1a00006 	mov	r0, r6
         b5fa8:	e1a0100d 	mov	r1, sp
         b5fac:	eb6ca3e8 	bl	1bdef54 <$BlockMove>
         b5fb0:	e1a0100d 	mov	r1, sp
         b5fb4:	e1a00004 	mov	r0, r4
         b5fb8:	eb65d9a9 	bl	1a2c664 <TFaxTool::$ValidateDCS(TT30Capabilities &)>
         b5fbc:	e1b09000 	movs	r9, r0
         b5fc0:	03a08f71 	moveq	r8, #452	; 0x1c4
         b5fc4:	02888b02 	addeq	r8, r8, #2048	; 0x800
         b5fc8:	0584a278 	streq	sl, [r4, #632]	; fField632
         b5fcc:	0a000058 	beq	b6134 <TFaxTool::PhaseBProcessDISResponse(void)+0x294>
         b5fd0:	e1a0100d 	mov	r1, sp
         b5fd4:	e1a00004 	mov	r0, r4
         b5fd8:	eb65d988 	bl	1a2c600 <TFaxTool::$SetSessionParameters(TT30Capabilities &)>
         b5fdc:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b5fe0:	e3100002 	tst	r0, #2	; 0x2
         b5fe4:	0a000052 	beq	b6134 <TFaxTool::PhaseBProcessDISResponse(void)+0x294>
         b5fe8:	e1a00004 	mov	r0, r4
         b5fec:	eb65c0ce 	bl	1a2632c <TFaxTool::$FreeReceiveBuffers(void)>
         b5ff0:	e1a00004 	mov	r0, r4
         b5ff4:	eb65b473 	bl	1a231c8 <TFaxTool::$AllocateReceiveBuffers(void)>
         b5ff8:	e3300000 	teq	r0, #0	; 0x0
         b5ffc:	1a0000bc 	bne	b62f4 <TFaxTool::PhaseBProcessDISResponse(void)+0x454>
         b6000:	ea00004b 	b	b6134 <TFaxTool::PhaseBProcessDISResponse(void)+0x294>
         b6004:	e3300085 	teq	r0, #133	; 0x85
         b6008:	0a000006 	beq	b6028 <TFaxTool::PhaseBProcessDISResponse(void)+0x188>
         b600c:	e33000fa 	teq	r0, #250	; 0xfa
         b6010:	133000fb 	teqne	r0, #251	; 0xfb
         b6014:	03a0000d 	moveq	r0, #13	; 0xd
         b6018:	0a000003 	beq	b602c <TFaxTool::PhaseBProcessDISResponse(void)+0x18c>
         b601c:	ea000044 	b	b6134 <TFaxTool::PhaseBProcessDISResponse(void)+0x294>
         b6020:	e1a0000a 	mov	r0, sl
         b6024:	ea000000 	b	b602c <TFaxTool::PhaseBProcessDISResponse(void)+0x18c>
         b6028:	e3a0000e 	mov	r0, #14	; 0xe
         b602c:	e5840278 	str	r0, [r4, #632]	; fField632
         b6030:	ea00003f 	b	b6134 <TFaxTool::PhaseBProcessDISResponse(void)+0x294>
         b6034:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b6038:	e3100004 	tst	r0, #4	; 0x4
         b603c:	0afffff7 	beq	b6020 <TFaxTool::PhaseBProcessDISResponse(void)+0x180>
         b6040:	e3800080 	orr	r0, r0, #128	; 0x80
         b6044:	e584026c 	str	r0, [r4, #620]	; fField620
         b6048:	e1a0000d 	mov	r0, sp
         b604c:	e3a02005 	mov	r2, #5	; 0x5
         b6050:	e3a01000 	mov	r1, #0	; 0x0
         b6054:	eb6bfa7f 	bl	1bb4a58 <$memset>
         b6058:	e1a00005 	mov	r0, r5
         b605c:	e5951000 	ldr	r1, [r5]
         b6060:	e1a0e00f 	mov	lr, pc
         b6064:	e281f02c 	add	pc, r1, #44	; 0x2c
         b6068:	e2400003 	sub	r0, r0, #3	; 0x3
         b606c:	e3a01008 	mov	r1, #8	; 0x8
         b6070:	e3500008 	cmp	r0, #8	; 0x8
         b6074:	a1a02001 	movge	r2, r1
         b6078:	b1a02000 	movlt	r2, r0
         b607c:	e1a00006 	mov	r0, r6
         b6080:	e1a0100d 	mov	r1, sp
         b6084:	eb6ca3b2 	bl	1bdef54 <$BlockMove>
         b6088:	e1a0100d 	mov	r1, sp
         b608c:	e1a00004 	mov	r0, r4
         b6090:	eb6561a0 	bl	1a0e718 <TFaxTool::$CompatibleRemoteRcvr(TT30Capabilities &)>
         b6094:	e3300000 	teq	r0, #0	; 0x0
         b6098:	1594026c 	ldrne	r0, [r4, #620]	; fField620
         b609c:	12000001 	andne	r0, r0, #1	; 0x1
         b60a0:	13300000 	teqne	r0, #0	; 0x0
         b60a4:	0a00000c 	beq	b60dc <TFaxTool::PhaseBProcessDISResponse(void)+0x23c>
         b60a8:	e2842fbb 	add	r2, r4, #748	; 0x2ec
         b60ac:	e1a0100d 	mov	r1, sp
         b60b0:	e1a00004 	mov	r0, r4
         b60b4:	eb655550 	bl	1a0b5fc <TFaxTool::$BuildDCS(TT30Capabilities &, TT30Capabilities &)>
         b60b8:	e5847278 	str	r7, [r4, #632]	; fField632
         b60bc:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b60c0:	e3800008 	orr	r0, r0, #8	; 0x8
         b60c4:	e584026c 	str	r0, [r4, #620]	; fField620
         b60c8:	e3a00003 	mov	r0, #3	; 0x3
         b60cc:	e5840284 	str	r0, [r4, #644]	; fField644
         b60d0:	e3a00001 	mov	r0, #1	; 0x1
         b60d4:	e584028c 	str	r0, [r4, #652]	; fField652
         b60d8:	ea000015 	b	b6134 <TFaxTool::PhaseBProcessDISResponse(void)+0x294>
         b60dc:	e1a0100d 	mov	r1, sp
         b60e0:	e1a00004 	mov	r0, r4
         b60e4:	eb65618c 	bl	1a0e71c <TFaxTool::$CompatibleRemoteXmtr(TT30Capabilities &)>
         b60e8:	e3300000 	teq	r0, #0	; 0x0
         b60ec:	1594026c 	ldrne	r0, [r4, #620]	; fField620
         b60f0:	12001002 	andne	r1, r0, #2	; 0x2
         b60f4:	13310000 	teqne	r1, #0	; 0x0
         b60f8:	0a00000d 	beq	b6134 <TFaxTool::PhaseBProcessDISResponse(void)+0x294>
         b60fc:	e3a01005 	mov	r1, #5	; 0x5
         b6100:	e3c00008 	bic	r0, r0, #8	; 0x8
         b6104:	e5841278 	str	r1, [r4, #632]	; fField632
         b6108:	e584026c 	str	r0, [r4, #620]	; fField620
         b610c:	ea000008 	b	b6134 <TFaxTool::PhaseBProcessDISResponse(void)+0x294>
         b6110:	e1a00005 	mov	r0, r5
         b6114:	e5951000 	ldr	r1, [r5]
         b6118:	e1a0e00f 	mov	lr, pc
         b611c:	e281f02c 	add	pc, r1, #44	; 0x2c
         b6120:	e2403003 	sub	r3, r0, #3	; 0x3
         b6124:	e1a0200a 	mov	r2, sl
         b6128:	e1a01006 	mov	r1, r6
         b612c:	e1a00004 	mov	r0, r4
         b6130:	eb656dde 	bl	1a118b0 <TFaxTool::$GetIdentification(unsigned char const *, unsigned char *const, unsigned long)>
         b6134:	e5d406a1 	ldrb	r0, [r4, #1697]	; fField1697
         b6138:	e3300013 	teq	r0, #19	; 0x13
         b613c:	1a000056 	bne	b629c <TFaxTool::PhaseBProcessDISResponse(void)+0x3fc>
         b6140:	e1a00004 	mov	r0, r4
         b6144:	eb657a36 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b6148:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b614c:	e3100040 	tst	r0, #64	; 0x40
         b6150:	13390000 	teqne	r9, #0	; 0x0
         b6154:	0a000002 	beq	b6164 <TFaxTool::PhaseBProcessDISResponse(void)+0x2c4>
         b6158:	e3100008 	tst	r0, #8	; 0x8
         b615c:	03a00006 	moveq	r0, #6	; 0x6
         b6160:	05840278 	streq	r0, [r4, #632]	; fField632
         b6164:	e5940278 	ldr	r0, [r4, #632]	; fField632
         b6168:	e2400002 	sub	r0, r0, #2	; 0x2
         b616c:	e59f1048 	ldr	r1, [pc, #48]	; b61bc <TFaxTool::PhaseBProcessDISResponse(void)+0x31c>
         b6170:	e350000c 	cmp	r0, #12	; 0xc
         b6174:	908ff100 	addls	pc, pc, r0, lsl #2
         b6178:	ea00001f 	b	b61fc <TFaxTool::PhaseBProcessDISResponse(void)+0x35c>
         b617c:	ea000042 	b	b628c <TFaxTool::PhaseBProcessDISResponse(void)+0x3ec>
         b6180:	ea00001d 	b	b61fc <TFaxTool::PhaseBProcessDISResponse(void)+0x35c>
         b6184:	ea000017 	b	b61e8 <TFaxTool::PhaseBProcessDISResponse(void)+0x348>
         b6188:	ea000021 	b	b6214 <TFaxTool::PhaseBProcessDISResponse(void)+0x374>
         b618c:	ea000032 	b	b625c <TFaxTool::PhaseBProcessDISResponse(void)+0x3bc>
         b6190:	ea000019 	b	b61fc <TFaxTool::PhaseBProcessDISResponse(void)+0x35c>
         b6194:	ea000018 	b	b61fc <TFaxTool::PhaseBProcessDISResponse(void)+0x35c>
         b6198:	ea000017 	b	b61fc <TFaxTool::PhaseBProcessDISResponse(void)+0x35c>
         b619c:	ea000007 	b	b61c0 <TFaxTool::PhaseBProcessDISResponse(void)+0x320>
         b61a0:	ea000024 	b	b6238 <TFaxTool::PhaseBProcessDISResponse(void)+0x398>
         b61a4:	ea000014 	b	b61fc <TFaxTool::PhaseBProcessDISResponse(void)+0x35c>
         b61a8:	ea000027 	b	b624c <TFaxTool::PhaseBProcessDISResponse(void)+0x3ac>
         b61ac:	e1a00004 	mov	r0, r4
         b61b0:	e3a01000 	mov	r1, #0	; 0x0
         b61b4:	eb65c8a6 	bl	1a28454 <TFaxTool::$PhaseBComplete(long)>
         b61b8:	ea00004c 	b	b62f0 <TFaxTool::PhaseBProcessDISResponse(void)+0x450>
         b61bc:	ffffaa0f 	swinv	0x00ffaa0f
         b61c0:	e1a00004 	mov	r0, r4
         b61c4:	eb6554f8 	bl	1a0b5ac <TFaxTool::$AdjustSpeedForFTT(void)>
         b61c8:	e3300000 	teq	r0, #0	; 0x0
         b61cc:	1a000048 	bne	b62f4 <TFaxTool::PhaseBProcessDISResponse(void)+0x454>
         b61d0:	e3a00003 	mov	r0, #3	; 0x3
         b61d4:	e5840284 	str	r0, [r4, #644]	; fField644
         b61d8:	e3a00001 	mov	r0, #1	; 0x1
         b61dc:	e5840288 	str	r0, [r4, #648]	; fField648
         b61e0:	e5847278 	str	r7, [r4, #632]	; fField632
         b61e4:	ea000006 	b	b6204 <TFaxTool::PhaseBProcessDISResponse(void)+0x364>
         b61e8:	e5940288 	ldr	r0, [r4, #648]	; fField648
         b61ec:	e2800001 	add	r0, r0, #1	; 0x1
         b61f0:	e5840288 	str	r0, [r4, #648]	; fField648
         b61f4:	e3500003 	cmp	r0, #3	; 0x3
         b61f8:	9a000001 	bls	b6204 <TFaxTool::PhaseBProcessDISResponse(void)+0x364>
         b61fc:	e1a00004 	mov	r0, r4
         b6200:	ea000039 	b	b62ec <TFaxTool::PhaseBProcessDISResponse(void)+0x44c>
         b6204:	e1a00004 	mov	r0, r4
         b6208:	e3a0106e 	mov	r1, #110	; 0x6e
         b620c:	eb65d0d3 	bl	1a2a560 <TFaxTool::$PutCommandToRcv(unsigned long)>
         b6210:	ea000036 	b	b62f0 <TFaxTool::PhaseBProcessDISResponse(void)+0x450>
         b6214:	e5940288 	ldr	r0, [r4, #648]	; fField648
         b6218:	e2800001 	add	r0, r0, #1	; 0x1
         b621c:	e5840288 	str	r0, [r4, #648]	; fField648
         b6220:	e3500003 	cmp	r0, #3	; 0x3
         b6224:	8afffff4 	bhi	b61fc <TFaxTool::PhaseBProcessDISResponse(void)+0x35c>
         b6228:	e1a00004 	mov	r0, r4
         b622c:	e3a0100a 	mov	r1, #10	; 0xa
         b6230:	eb65d0cb 	bl	1a2a564 <TFaxTool::$PutCommandToXmit(unsigned long)>
         b6234:	ea00002d 	b	b62f0 <TFaxTool::PhaseBProcessDISResponse(void)+0x450>
         b6238:	e5847278 	str	r7, [r4, #632]	; fField632
         b623c:	e1a00004 	mov	r0, r4
         b6240:	e3a010d2 	mov	r1, #210	; 0xd2
         b6244:	eb65d4e7 	bl	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
         b6248:	ea000028 	b	b62f0 <TFaxTool::PhaseBProcessDISResponse(void)+0x450>
         b624c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         b6250:	e3c00201 	bic	r0, r0, #268435456	; 0x10000000
         b6254:	e5840018 	str	r0, [r4, #24]	; fField24
         b6258:	eaffffe7 	b	b61fc <TFaxTool::PhaseBProcessDISResponse(void)+0x35c>
         b625c:	e1a00004 	mov	r0, r4
         b6260:	e3a01001 	mov	r1, #1	; 0x1
         b6264:	eb65b3d8 	bl	1a231cc <TFaxTool::$AllocateTCBuffer(unsigned char)>
         b6268:	e3a01000 	mov	r1, #0	; 0x0
         b626c:	e5841298 	str	r1, [r4, #664]	; fField664
         b6270:	e5841290 	str	r1, [r4, #656]	; fField656
         b6274:	e3300000 	teq	r0, #0	; 0x0
         b6278:	e5841294 	str	r1, [r4, #660]	; fField660
         b627c:	1a00001c 	bne	b62f4 <TFaxTool::PhaseBProcessDISResponse(void)+0x454>
         b6280:	e1a00004 	mov	r0, r4
         b6284:	eb65c43f 	bl	1a27388 <TFaxTool::$GetTrainingCheck(void)>
         b6288:	ea000018 	b	b62f0 <TFaxTool::PhaseBProcessDISResponse(void)+0x450>
         b628c:	e1a01008 	mov	r1, r8
         b6290:	e1a00004 	mov	r0, r4
         b6294:	eb65d0b7 	bl	1a2a578 <TFaxTool::$PutInitialId(unsigned long)>
         b6298:	ea000014 	b	b62f0 <TFaxTool::PhaseBProcessDISResponse(void)+0x450>
         b629c:	e5940278 	ldr	r0, [r4, #632]	; fField632
         b62a0:	e3300009 	teq	r0, #9	; 0x9
         b62a4:	1a00000d 	bne	b62e0 <TFaxTool::PhaseBProcessDISResponse(void)+0x440>
         b62a8:	e3a03000 	mov	r3, #0	; 0x0
         b62ac:	e3a020b2 	mov	r2, #178	; 0xb2
         b62b0:	e2822b03 	add	r2, r2, #3072	; 0xc00
         b62b4:	e92d000c 	stmdb	sp!, {r2, r3}
         b62b8:	e1a03005 	mov	r3, r5
         b62bc:	e1a00004 	mov	r0, r4
         b62c0:	e3a02001 	mov	r2, #1	; 0x1
         b62c4:	e3a01016 	mov	r1, #22	; 0x16
         b62c8:	e2811c01 	add	r1, r1, #256	; 0x100
         b62cc:	eb65cc72 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b62d0:	e28dd008 	add	sp, sp, #8	; 0x8
         b62d4:	e3300000 	teq	r0, #0	; 0x0
         b62d8:	1a000005 	bne	b62f4 <TFaxTool::PhaseBProcessDISResponse(void)+0x454>
         b62dc:	ea000003 	b	b62f0 <TFaxTool::PhaseBProcessDISResponse(void)+0x450>
         b62e0:	e1a00004 	mov	r0, r4
         b62e4:	e3a0100e 	mov	r1, #14	; 0xe
         b62e8:	e2411c56 	sub	r1, r1, #22016	; 0x5600
         b62ec:	eb6c2b67 	bl	1bc1090 <TCommTool::$StartAbort(long)>
         b62f0:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         b62f4:	e1a01000 	mov	r1, r0
         b62f8:	eaffffbf 	b	b61fc <TFaxTool::PhaseBProcessDISResponse(void)+0x35c>
    */
}

/**
 * Symbol: TFaxTool::PhaseBWaitForSignalGone(long)
 * Address: 000b62fc
 */
TFaxTool::PhaseBWaitForSignalGone(long) {
    /*
         b62fc:	e1a0c00d 	mov	ip, sp
         b6300:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b6304:	e24cb004 	sub	fp, ip, #4	; 0x4
         b6308:	e1a04000 	mov	r4, r0
         b630c:	e1a03001 	mov	r3, r1
         b6310:	e3a020b2 	mov	r2, #178	; 0xb2
         b6314:	e2822b03 	add	r2, r2, #3072	; 0xc00
         b6318:	e2800f96 	add	r0, r0, #600	; 0x258
         b631c:	e2800b01 	add	r0, r0, #1024	; 0x400
         b6320:	e3a01016 	mov	r1, #22	; 0x16
         b6324:	e2811c01 	add	r1, r1, #256	; 0x100
         b6328:	e293cc46 	adds	ip, r3, #17920	; 0x4600
         b632c:	d37c0054 	cmnle	ip, #84	; 0x54
         b6330:	0a000020 	beq	b63b8 <TFaxTool::PhaseBWaitForSignalGone(long)+0xbc>
         b6334:	ca000010 	bgt	b637c <TFaxTool::PhaseBWaitForSignalGone(long)+0x80>
         b6338:	e283cc5d 	add	ip, r3, #23808	; 0x5d00
         b633c:	e37c00c6 	cmn	ip, #198	; 0xc6
         b6340:	0a00001c 	beq	b63b8 <TFaxTool::PhaseBWaitForSignalGone(long)+0xbc>
         b6344:	e283cc5d 	add	ip, r3, #23808	; 0x5d00
         b6348:	e37c00c2 	cmn	ip, #194	; 0xc2
         b634c:	1a000022 	bne	b63dc <TFaxTool::PhaseBWaitForSignalGone(long)+0xe0>
         b6350:	e1a00004 	mov	r0, r4
         b6354:	eb6579b2 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b6358:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b635c:	e3100008 	tst	r0, #8	; 0x8
         b6360:	03a00005 	moveq	r0, #5	; 0x5
         b6364:	13a00004 	movne	r0, #4	; 0x4
         b6368:	e5840278 	str	r0, [r4, #632]	; fField632
         b636c:	e1a00004 	mov	r0, r4
         b6370:	e3a010c8 	mov	r1, #200	; 0xc8
         b6374:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b6378:	ea65d49a 	b	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
         b637c:	e283cdfa 	add	ip, r3, #16000	; 0x3e80
         b6380:	e37c0005 	cmn	ip, #5	; 0x5
         b6384:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b6388:	e3330000 	teq	r3, #0	; 0x0
         b638c:	1a000012 	bne	b63dc <TFaxTool::PhaseBWaitForSignalGone(long)+0xe0>
         b6390:	e3a03001 	mov	r3, #1	; 0x1
         b6394:	e92d000c 	stmdb	sp!, {r2, r3}
         b6398:	e1a03000 	mov	r3, r0
         b639c:	e1a00004 	mov	r0, r4
         b63a0:	e3a02001 	mov	r2, #1	; 0x1
         b63a4:	eb65cc3c 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b63a8:	e28dd008 	add	sp, sp, #8	; 0x8
         b63ac:	e1b03000 	movs	r3, r0
         b63b0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b63b4:	ea000008 	b	b63dc <TFaxTool::PhaseBWaitForSignalGone(long)+0xe0>
         b63b8:	e3a03001 	mov	r3, #1	; 0x1
         b63bc:	e92d000c 	stmdb	sp!, {r2, r3}
         b63c0:	e1a03000 	mov	r3, r0
         b63c4:	e1a00004 	mov	r0, r4
         b63c8:	e3a02001 	mov	r2, #1	; 0x1
         b63cc:	eb65cc32 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b63d0:	e28dd008 	add	sp, sp, #8	; 0x8
         b63d4:	e1b03000 	movs	r3, r0
         b63d8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b63dc:	e1a01003 	mov	r1, r3
         b63e0:	e1a00004 	mov	r0, r4
         b63e4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b63e8:	ea6c2b28 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseBProcessOptions(void)
 * Address: 000b63ec
 */
TFaxTool::PhaseBProcessOptions(void) {
    /*
         b63ec:	e5901184 	ldr	r1, [r0, #388]	; fField388
         b63f0:	e3310000 	teq	r1, #0	; 0x0
         b63f4:	01a0f00e 	moveq	pc, lr
         b63f8:	e1a0c00d 	mov	ip, sp
         b63fc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b6400:	e24cb004 	sub	fp, ip, #4	; 0x4
         b6404:	e1a04000 	mov	r4, r0
         b6408:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         b640c:	e1a0000d 	mov	r0, sp
         b6410:	eb6bfdb8 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         b6414:	e1a0000d 	mov	r0, sp
         b6418:	e59f10a8 	ldr	r1, [pc, #a8]	; b64c8 <TFaxTool::PhaseBProcessOptions(void)+0xdc>
         b641c:	eb6c09fc 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         b6420:	e1b05000 	movs	r5, r0
         b6424:	0a000017 	beq	b6488 <TFaxTool::PhaseBProcessOptions(void)+0x9c>
         b6428:	e59402d4 	ldr	r0, [r4, #724]	; fField724
         b642c:	e585000c 	str	r0, [r5, #12]
         b6430:	e59402d8 	ldr	r0, [r4, #728]	; fField728
         b6434:	e5850010 	str	r0, [r5, #16]	; fField16
         b6438:	e59402ec 	ldr	r0, [r4, #748]	; fField748
         b643c:	e1a00a00 	mov	r0, r0, lsl #20
         b6440:	e1a00f20 	mov	r0, r0, lsr #30
         b6444:	e5850014 	str	r0, [r5, #20]
         b6448:	e59402dc 	ldr	r0, [r4, #732]	; fField732
         b644c:	e1a00180 	mov	r0, r0, lsl #3
         b6450:	e5850018 	str	r0, [r5, #24]	; fField24
         b6454:	e24dd020 	sub	sp, sp, #32	; 0x20
         b6458:	e1a0000d 	mov	r0, sp
         b645c:	eb6c1a67 	bl	1bbce00 <TCMOFaxSessionInfo::$__ct(void)>
         b6460:	e5950004 	ldr	r0, [r5, #4]	; fField4
         b6464:	e59d1004 	ldr	r1, [sp, #4]	; fField4
         b6468:	e1500001 	cmp	r0, r1
         b646c:	a59402b0 	ldrge	r0, [r4, #688]	; fField688
         b6470:	a585001c 	strge	r0, [r5, #28]
         b6474:	e5950008 	ldr	r0, [r5, #8]
         b6478:	e3c000ff 	bic	r0, r0, #255	; 0xff
         b647c:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         b6480:	e5a50008 	str	r0, [r5, #8]!
         b6484:	e28dd020 	add	sp, sp, #32	; 0x20
         b6488:	e1a0000d 	mov	r0, sp
         b648c:	e59f1038 	ldr	r1, [pc, #38]	; b64cc <TFaxTool::PhaseBProcessOptions(void)+0xe0>
         b6490:	eb6c09df 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         b6494:	e1b05000 	movs	r5, r0
         b6498:	0a00001e 	beq	b6518 <TFaxTool::PhaseBProcessOptions(void)+0x12c>
         b649c:	e5951008 	ldr	r1, [r5, #8]
         b64a0:	e2010cff 	and	r0, r1, #65280	; 0xff00
         b64a4:	e3300b01 	teq	r0, #1024	; 0x400
         b64a8:	1a000008 	bne	b64d0 <TFaxTool::PhaseBProcessOptions(void)+0xe4>
         b64ac:	e2841ff3 	add	r1, r4, #972	; 0x3cc
         b64b0:	e2811b01 	add	r1, r1, #1024	; 0x400
         b64b4:	e1a00005 	mov	r0, r5
         b64b8:	eb6c05c4 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         b64bc:	e5950008 	ldr	r0, [r5, #8]
         b64c0:	e3c000ff 	bic	r0, r0, #255	; 0xff
         b64c4:	ea00000f 	b	b6508 <TFaxTool::PhaseBProcessOptions(void)+0x11c>
         b64c8:	66736966 	ldrvsbt	r6, [r3], -r6, ror #18
         b64cc:	66726964 	ldrvsbt	r6, [r2], -r4, ror #18
         b64d0:	e3300c03 	teq	r0, #768	; 0x300
         b64d4:	1a00000a 	bne	b6504 <TFaxTool::PhaseBProcessOptions(void)+0x118>
         b64d8:	e24dd024 	sub	sp, sp, #36	; 0x24
         b64dc:	e1a0000d 	mov	r0, sp
         b64e0:	eb6c162c 	bl	1bbbd98 <TCMOFaxRemoteId::$__ct(void)>
         b64e4:	e1a0100d 	mov	r1, sp
         b64e8:	e1a00005 	mov	r0, r5
         b64ec:	eb6c05b7 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         b64f0:	e5950008 	ldr	r0, [r5, #8]
         b64f4:	e3c000ff 	bic	r0, r0, #255	; 0xff
         b64f8:	e5850008 	str	r0, [r5, #8]
         b64fc:	e28dd024 	add	sp, sp, #36	; 0x24
         b6500:	ea000001 	b	b650c <TFaxTool::PhaseBProcessOptions(void)+0x120>
         b6504:	e38100ff 	orr	r0, r1, #255	; 0xff
         b6508:	e5850008 	str	r0, [r5, #8]
         b650c:	e5950008 	ldr	r0, [r5, #8]
         b6510:	e3800102 	orr	r0, r0, #-2147483648	; 0x80000000
         b6514:	e5a50008 	str	r0, [r5, #8]!
         b6518:	e1a0000d 	mov	r0, sp
         b651c:	e3a01000 	mov	r1, #0	; 0x0
         b6520:	eb6c0185 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         b6524:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::PhaseBComplete(long)
 * Address: 000b6528
 */
TFaxTool::PhaseBComplete(long) {
    /*
         b6528:	e1a0c00d 	mov	ip, sp
         b652c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b6530:	e24cb004 	sub	fp, ip, #4	; 0x4
         b6534:	e1a04000 	mov	r4, r0
         b6538:	e3310000 	teq	r1, #0	; 0x0
         b653c:	11a00004 	movne	r0, r4
         b6540:	13a01048 	movne	r1, #72	; 0x48
         b6544:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         b6548:	1a65d426 	bne	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
         b654c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         b6550:	e3100001 	tst	r0, #1	; 0x1
         b6554:	1594026c 	ldrne	r0, [r4, #620]	; fField620
         b6558:	12000004 	andne	r0, r0, #4	; 0x4
         b655c:	13300000 	teqne	r0, #0	; 0x0
         b6560:	e1a00004 	mov	r0, r4
         b6564:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         b6568:	0a6591f2 	beq	1a1ad38 <TFaxTool::$StartPhaseC(void)>
         b656c:	eb65c7bb 	bl	1a28460 <TFaxTool::$PhaseBProcessOptions(void)>
         b6570:	e1a00004 	mov	r0, r4
         b6574:	e3a01000 	mov	r1, #0	; 0x0
         b6578:	e5942000 	ldr	r2, [r4]
         b657c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b6580:	e282f054 	add	pc, r2, #84	; 0x54
    */
}

/**
 * Symbol: TFaxTool::PhaseCPktComplete(long)
 * Address: 000b6584
 */
TFaxTool::PhaseCPktComplete(long) {
    /*
         b6584:	e1a0c00d 	mov	ip, sp
         b6588:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b658c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b6590:	e1a04000 	mov	r4, r0
         b6594:	e5900018 	ldr	r0, [r0, #24]	; fField24
         b6598:	e3100004 	tst	r0, #4	; 0x4
         b659c:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         b65a0:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b65a4:	e3100008 	tst	r0, #8	; 0x8
         b65a8:	e3a06000 	mov	r6, #0	; 0x0
         b65ac:	0a00002a 	beq	b665c <TFaxTool::PhaseCPktComplete(long)+0xd8>
         b65b0:	e3310000 	teq	r1, #0	; 0x0
         b65b4:	1a000072 	bne	b6784 <TFaxTool::PhaseCPktComplete(long)+0x200>
         b65b8:	e3100102 	tst	r0, #-2147483648	; 0x80000000
         b65bc:	0a000004 	beq	b65d4 <TFaxTool::PhaseCPktComplete(long)+0x50>
         b65c0:	e1a00004 	mov	r0, r4
         b65c4:	eb655c3c 	bl	1a0d6bc <TFaxTool::$CancelTimer(void)>
         b65c8:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b65cc:	e3c00102 	bic	r0, r0, #-2147483648	; 0x80000000
         b65d0:	e584026c 	str	r0, [r4, #620]	; fField620
         b65d4:	e59403f0 	ldr	r0, [r4, #1008]	; fField1008
         b65d8:	e080c080 	add	ip, r0, r0, lsl #1
         b65dc:	e08c0180 	add	r0, ip, r0, lsl #3
         b65e0:	e0840180 	add	r0, r4, r0, lsl #3
         b65e4:	e5c0636d 	strb	r6, [r0, #877]	; fField877
         b65e8:	e59403f0 	ldr	r0, [r4, #1008]	; fField1008
         b65ec:	e080c080 	add	ip, r0, r0, lsl #1
         b65f0:	e08c0180 	add	r0, ip, r0, lsl #3
         b65f4:	e0840180 	add	r0, r4, r0, lsl #3
         b65f8:	e5c0636c 	strb	r6, [r0, #876]	; fField876
         b65fc:	e59403f0 	ldr	r0, [r4, #1008]	; fField1008
         b6600:	e080c080 	add	ip, r0, r0, lsl #1
         b6604:	e08c0180 	add	r0, ip, r0, lsl #3
         b6608:	e0840180 	add	r0, r4, r0, lsl #3
         b660c:	e5a06368 	str	r6, [r0, #872]!	; fField872
         b6610:	e59403f0 	ldr	r0, [r4, #1008]	; fField1008
         b6614:	e2200001 	eor	r0, r0, #1	; 0x1
         b6618:	e58403f0 	str	r0, [r4, #1008]	; fField1008
         b661c:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b6620:	e3100502 	tst	r0, #8388608	; 0x800000
         b6624:	13c00502 	bicne	r0, r0, #8388608	; 0x800000
         b6628:	1584026c 	strne	r0, [r4, #620]	; fField620
         b662c:	1a00001f 	bne	b66b0 <TFaxTool::PhaseCPktComplete(long)+0x12c>
         b6630:	e5941018 	ldr	r1, [r4, #24]	; fField24
         b6634:	e3110101 	tst	r1, #1073741824	; 0x40000000
         b6638:	0a000004 	beq	b6650 <TFaxTool::PhaseCPktComplete(long)+0xcc>
         b663c:	e594163c 	ldr	r1, [r4, #1596]	; fField1596
         b6640:	e331000b 	teq	r1, #11	; 0xb
         b6644:	03800a01 	orreq	r0, r0, #4096	; 0x1000
         b6648:	05a4026c 	streq	r0, [r4, #620]!	; fField620
         b664c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         b6650:	e1a00004 	mov	r0, r4
         b6654:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b6658:	ea658982 	b	1a18c68 <TFaxTool::$SendNextLine(void)>
         b665c:	e281cc5d 	add	ip, r1, #23808	; 0x5d00
         b6660:	e37c00c6 	cmn	ip, #198	; 0xc6
         b6664:	1281cc5d 	addne	ip, r1, #23808	; 0x5d00
         b6668:	137c00c2 	cmnne	ip, #194	; 0xc2
         b666c:	0a000009 	beq	b6698 <TFaxTool::PhaseCPktComplete(long)+0x114>
         b6670:	e281cc46 	add	ip, r1, #17920	; 0x4600
         b6674:	e37c0053 	cmn	ip, #83	; 0x53
         b6678:	1a00000f 	bne	b66bc <TFaxTool::PhaseCPktComplete(long)+0x138>
         b667c:	e5941514 	ldr	r1, [r4, #1300]	; fField1300
         b6680:	e2811001 	add	r1, r1, #1	; 0x1
         b6684:	e5841514 	str	r1, [r4, #1300]	; fField1300
         b6688:	e5941510 	ldr	r1, [r4, #1296]	; fField1296
         b668c:	e2811001 	add	r1, r1, #1	; 0x1
         b6690:	e5841510 	str	r1, [r4, #1296]	; fField1296
         b6694:	ea00000a 	b	b66c4 <TFaxTool::PhaseCPktComplete(long)+0x140>
         b6698:	e3100101 	tst	r0, #1073741824	; 0x40000000
         b669c:	1a000038 	bne	b6784 <TFaxTool::PhaseCPktComplete(long)+0x200>
         b66a0:	e3100402 	tst	r0, #33554432	; 0x2000000
         b66a4:	01a00004 	moveq	r0, r4
         b66a8:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         b66ac:	0a65d3b5 	beq	1a2b588 <TFaxTool::$ReStartPhaseB(void)>
         b66b0:	e1a00004 	mov	r0, r4
         b66b4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b66b8:	ea65919f 	b	1a1ad3c <TFaxTool::$StartPhaseD(void)>
         b66bc:	e3310000 	teq	r1, #0	; 0x0
         b66c0:	1a00002f 	bne	b6784 <TFaxTool::PhaseCPktComplete(long)+0x200>
         b66c4:	e3800101 	orr	r0, r0, #1073741824	; 0x40000000
         b66c8:	e584026c 	str	r0, [r4, #620]	; fField620
         b66cc:	e59403f4 	ldr	r0, [r4, #1012]	; fField1012
         b66d0:	e080c080 	add	ip, r0, r0, lsl #1
         b66d4:	e08c0180 	add	r0, ip, r0, lsl #3
         b66d8:	e0840180 	add	r0, r4, r0, lsl #3
         b66dc:	e2805014 	add	r5, r0, #20	; 0x14
         b66e0:	e2855b01 	add	r5, r5, #1024	; 0x400
         b66e4:	e3a00001 	mov	r0, #1	; 0x1
         b66e8:	e5c50031 	strb	r0, [r5, #49]
         b66ec:	e5c56030 	strb	r6, [r5, #48]
         b66f0:	e2850038 	add	r0, r5, #56	; 0x38
         b66f4:	e5901000 	ldr	r1, [r0]
         b66f8:	e1a0e00f 	mov	lr, pc
         b66fc:	e281f02c 	add	pc, r1, #44	; 0x2c
         b6700:	e585002c 	str	r0, [r5, #44]
         b6704:	e1a01000 	mov	r1, r0
         b6708:	e5940818 	ldr	r0, [r4, #2072]	; fField2072
         b670c:	e3300004 	teq	r0, #4	; 0x4
         b6710:	05b50028 	ldreq	r0, [r5, #40]!
         b6714:	0bfff9dc 	bleq	b4e8c <TFaxService::DoneStarting(TAEvent *, unsigned long, TServiceInfo *)+0x8>
         b6718:	e59403f4 	ldr	r0, [r4, #1012]	; fField1012
         b671c:	e2200001 	eor	r0, r0, #1	; 0x1
         b6720:	e58403f4 	str	r0, [r4, #1012]	; fField1012
         b6724:	e5d415b0 	ldrb	r1, [r4, #1456]	; fField1456
         b6728:	e3310000 	teq	r1, #0	; 0x0
         b672c:	0a000007 	beq	b6750 <TFaxTool::PhaseCPktComplete(long)+0x1cc>
         b6730:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b6734:	e3c00402 	bic	r0, r0, #33554432	; 0x2000000
         b6738:	e3800601 	orr	r0, r0, #1048576	; 0x100000
         b673c:	e3800010 	orr	r0, r0, #16	; 0x10
         b6740:	e584026c 	str	r0, [r4, #620]	; fField620
         b6744:	e1a00004 	mov	r0, r4
         b6748:	eb65917b 	bl	1a1ad3c <TFaxTool::$StartPhaseD(void)>
         b674c:	ea000008 	b	b6774 <TFaxTool::PhaseCPktComplete(long)+0x1f0>
         b6750:	e080c080 	add	ip, r0, r0, lsl #1
         b6754:	e08c0180 	add	r0, ip, r0, lsl #3
         b6758:	e0840180 	add	r0, r4, r0, lsl #3
         b675c:	e5d01445 	ldrb	r1, [r0, #1093]	; fField1093
         b6760:	e3310000 	teq	r1, #0	; 0x0
         b6764:	02801014 	addeq	r1, r0, #20	; 0x14
         b6768:	02811b01 	addeq	r1, r1, #1024	; 0x400
         b676c:	01a00004 	moveq	r0, r4
         b6770:	0b65d385 	bleq	1a2b58c <TFaxTool::$ReceiveNextLinesBuf(TFaxLineBuf *)>
         b6774:	e1a00004 	mov	r0, r4
         b6778:	eb65bad4 	bl	1a252d0 <TFaxTool::$DecodeLinesBuf(void)>
         b677c:	e1b01000 	movs	r1, r0
         b6780:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         b6784:	e1a00004 	mov	r0, r4
         b6788:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b678c:	ea6c2a3f 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::DecodeLinesBuf(void)
 * Address: 000b6790
 */
TFaxTool::DecodeLinesBuf(void) {
    /*
         b6790:	e1a0c00d 	mov	ip, sp
         b6794:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         b6798:	e24cb004 	sub	fp, ip, #4	; 0x4
         b679c:	e1a04000 	mov	r4, r0
         b67a0:	e24dd010 	sub	sp, sp, #16	; 0x10
         b67a4:	e3a07000 	mov	r7, #0	; 0x0
         b67a8:	e590040c 	ldr	r0, [r0, #1036]	; fField1036
         b67ac:	e3300000 	teq	r0, #0	; 0x0
         b67b0:	0a0000f4 	beq	b6b88 <TFaxTool::DecodeLinesBuf(void)+0x3f8>
         b67b4:	e59403f8 	ldr	r0, [r4, #1016]	; fField1016
         b67b8:	e080c080 	add	ip, r0, r0, lsl #1
         b67bc:	e08c0180 	add	r0, ip, r0, lsl #3
         b67c0:	e0840180 	add	r0, r4, r0, lsl #3
         b67c4:	e2805014 	add	r5, r0, #20	; 0x14
         b67c8:	e2855b01 	add	r5, r5, #1024	; 0x400
         b67cc:	e594027c 	ldr	r0, [r4, #636]	; fField636
         b67d0:	e3300001 	teq	r0, #1	; 0x1
         b67d4:	05d50031 	ldreqb	r0, [r5, #49]
         b67d8:	03300000 	teqeq	r0, #0	; 0x0
         b67dc:	0a0000e9 	beq	b6b88 <TFaxTool::DecodeLinesBuf(void)+0x3f8>
         b67e0:	e5940400 	ldr	r0, [r4, #1024]	; fField1024
         b67e4:	e3500000 	cmp	r0, #0	; 0x0
         b67e8:	9a0000c2 	bls	b6af8 <TFaxTool::DecodeLinesBuf(void)+0x368>
         b67ec:	e28480c4 	add	r8, r4, #196	; 0xc4
         b67f0:	e2888b01 	add	r8, r8, #1024	; 0x400
         b67f4:	e28460d4 	add	r6, r4, #212	; 0xd4
         b67f8:	e2866b01 	add	r6, r6, #1024	; 0x400
         b67fc:	e24da064 	sub	sl, sp, #100	; 0x64
         b6800:	e2841e81 	add	r1, r4, #2064	; 0x810
         b6804:	e284000c 	add	r0, r4, #12	; 0xc
         b6808:	e2800b02 	add	r0, r0, #2048	; 0x800
         b680c:	e58d0008 	str	r0, [sp, #8]
         b6810:	e58d100c 	str	r1, [sp, #12]
         b6814:	e594027c 	ldr	r0, [r4, #636]	; fField636
         b6818:	e3300001 	teq	r0, #1	; 0x1
         b681c:	1a000037 	bne	b6900 <TFaxTool::DecodeLinesBuf(void)+0x170>
         b6820:	e285202c 	add	r2, r5, #44	; 0x2c
         b6824:	e1a01008 	mov	r1, r8
         b6828:	e1a00006 	mov	r0, r6
         b682c:	e28d3004 	add	r3, sp, #4	; 0x4
         b6830:	eb65dba9 	bl	1a2d6dc <TT4FaxLine::$AppendTo(unsigned char **, int *, int *)>
         b6834:	e1b09000 	movs	r9, r0
         b6838:	0a000037 	beq	b691c <TFaxTool::DecodeLinesBuf(void)+0x18c>
         b683c:	e3a00000 	mov	r0, #0	; 0x0
         b6840:	e585002c 	str	r0, [r5, #44]
         b6844:	e5c50031 	strb	r0, [r5, #49]
         b6848:	e59403f8 	ldr	r0, [r4, #1016]	; fField1016
         b684c:	e2200001 	eor	r0, r0, #1	; 0x1
         b6850:	e58403f8 	str	r0, [r4, #1016]	; fField1016
         b6854:	e080c080 	add	ip, r0, r0, lsl #1
         b6858:	e08c0180 	add	r0, ip, r0, lsl #3
         b685c:	e0840180 	add	r0, r4, r0, lsl #3
         b6860:	e590043c 	ldr	r0, [r0, #1084]	; fField1084
         b6864:	e58404c4 	str	r0, [r4, #1220]	; fField1220
         b6868:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b686c:	e3100601 	tst	r0, #1048576	; 0x100000
         b6870:	1a00000b 	bne	b68a4 <TFaxTool::DecodeLinesBuf(void)+0x114>
         b6874:	e59403f4 	ldr	r0, [r4, #1012]	; fField1012
         b6878:	e080c080 	add	ip, r0, r0, lsl #1
         b687c:	e08c0180 	add	r0, ip, r0, lsl #3
         b6880:	e0840180 	add	r0, r4, r0, lsl #3
         b6884:	e5d01444 	ldrb	r1, [r0, #1092]	; fField1092
         b6888:	e3310000 	teq	r1, #0	; 0x0
         b688c:	05d01445 	ldreqb	r1, [r0, #1093]	; fField1093
         b6890:	03310000 	teqeq	r1, #0	; 0x0
         b6894:	02801014 	addeq	r1, r0, #20	; 0x14
         b6898:	02811b01 	addeq	r1, r1, #1024	; 0x400
         b689c:	01a00004 	moveq	r0, r4
         b68a0:	0b65d339 	bleq	1a2b58c <TFaxTool::$ReceiveNextLinesBuf(TFaxLineBuf *)>
         b68a4:	e59403f8 	ldr	r0, [r4, #1016]	; fField1016
         b68a8:	e080c080 	add	ip, r0, r0, lsl #1
         b68ac:	e08c0180 	add	r0, ip, r0, lsl #3
         b68b0:	e0840180 	add	r0, r4, r0, lsl #3
         b68b4:	e5d01445 	ldrb	r1, [r0, #1093]	; fField1093
         b68b8:	e3310001 	teq	r1, #1	; 0x1
         b68bc:	1a000007 	bne	b68e0 <TFaxTool::DecodeLinesBuf(void)+0x150>
         b68c0:	e2805014 	add	r5, r0, #20	; 0x14
         b68c4:	e2855b01 	add	r5, r5, #1024	; 0x400
         b68c8:	e285202c 	add	r2, r5, #44	; 0x2c
         b68cc:	e1a01008 	mov	r1, r8
         b68d0:	e1a00006 	mov	r0, r6
         b68d4:	e28d3004 	add	r3, sp, #4	; 0x4
         b68d8:	eb65db7f 	bl	1a2d6dc <TT4FaxLine::$AppendTo(unsigned char **, int *, int *)>
         b68dc:	e1a09000 	mov	r9, r0
         b68e0:	e3390000 	teq	r9, #0	; 0x0
         b68e4:	0a00000c 	beq	b691c <TFaxTool::DecodeLinesBuf(void)+0x18c>
         b68e8:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b68ec:	e3100601 	tst	r0, #1048576	; 0x100000
         b68f0:	13a00002 	movne	r0, #2	; 0x2
         b68f4:	1584027c 	strne	r0, [r4, #636]	; fField636
         b68f8:	1a000007 	bne	b691c <TFaxTool::DecodeLinesBuf(void)+0x18c>
         b68fc:	ea00007d 	b	b6af8 <TFaxTool::DecodeLinesBuf(void)+0x368>
         b6900:	e1a00006 	mov	r0, r6
         b6904:	eb0538f8 	bl	204cec <TT4FaxLine::GetLength(void)>
         b6908:	e3500000 	cmp	r0, #0	; 0x0
         b690c:	d594026c 	ldrle	r0, [r4, #620]	; fField620
         b6910:	d3c00801 	bicle	r0, r0, #65536	; 0x10000
         b6914:	d584026c 	strle	r0, [r4, #620]	; fField620
         b6918:	da00002a 	ble	b69c8 <TFaxTool::DecodeLinesBuf(void)+0x238>
         b691c:	e5940510 	ldr	r0, [r4, #1296]	; fField1296
         b6920:	e3300000 	teq	r0, #0	; 0x0
         b6924:	1a000006 	bne	b6944 <TFaxTool::DecodeLinesBuf(void)+0x1b4>
         b6928:	e1a00006 	mov	r0, r6
         b692c:	eb65d734 	bl	1a2c604 <TT4FaxLine::$SkipPastEOL(void)>
         b6930:	e3300000 	teq	r0, #0	; 0x0
         b6934:	15940510 	ldrne	r0, [r4, #1296]	; fField1296
         b6938:	12800001 	addne	r0, r0, #1	; 0x1
         b693c:	15840510 	strne	r0, [r4, #1296]	; fField1296
         b6940:	ea000069 	b	b6aec <TFaxTool::DecodeLinesBuf(void)+0x35c>
         b6944:	e594027c 	ldr	r0, [r4, #636]	; fField636
         b6948:	e3300002 	teq	r0, #2	; 0x2
         b694c:	13a03000 	movne	r3, #0	; 0x0
         b6950:	03a03001 	moveq	r3, #1	; 0x1
         b6954:	e92d0008 	stmdb	sp!, {r3}
         b6958:	e59404d0 	ldr	r0, [r4, #1232]	; fField1232
         b695c:	e59422dc 	ldr	r2, [r4, #732]	; fField732
         b6960:	e0840100 	add	r0, r4, r0, lsl #2
         b6964:	e5b014c8 	ldr	r1, [r0, #1224]!
         b6968:	e1a00006 	mov	r0, r6
         b696c:	e28d3004 	add	r3, sp, #4	; 0x4
         b6970:	eb65ba55 	bl	1a252cc <TT4FaxLine::$DecodeLine(unsigned char *, int, int &, unsigned long)>
         b6974:	e28dd004 	add	sp, sp, #4	; 0x4
         b6978:	e594126c 	ldr	r1, [r4, #620]	; fField620
         b697c:	e3110b02 	tst	r1, #2048	; 0x800
         b6980:	1a000059 	bne	b6aec <TFaxTool::DecodeLinesBuf(void)+0x35c>
         b6984:	e3300000 	teq	r0, #0	; 0x0
         b6988:	1a000006 	bne	b69a8 <TFaxTool::DecodeLinesBuf(void)+0x218>
         b698c:	e5940514 	ldr	r0, [r4, #1300]	; fField1300
         b6990:	e2800001 	add	r0, r0, #1	; 0x1
         b6994:	e5840514 	str	r0, [r4, #1300]	; fField1300
         b6998:	e59404d0 	ldr	r0, [r4, #1232]	; fField1232
         b699c:	e2200001 	eor	r0, r0, #1	; 0x1
         b69a0:	e58404d0 	str	r0, [r4, #1232]	; fField1232
         b69a4:	ea00000a 	b	b69d4 <TFaxTool::DecodeLinesBuf(void)+0x244>
         b69a8:	e59d0000 	ldr	r0, [sp]
         b69ac:	e3300000 	teq	r0, #0	; 0x0
         b69b0:	1a000007 	bne	b69d4 <TFaxTool::DecodeLinesBuf(void)+0x244>
         b69b4:	e3810b02 	orr	r0, r1, #2048	; 0x800
         b69b8:	e584026c 	str	r0, [r4, #620]	; fField620
         b69bc:	e594027c 	ldr	r0, [r4, #636]	; fField636
         b69c0:	e3300002 	teq	r0, #2	; 0x2
         b69c4:	1a000048 	bne	b6aec <TFaxTool::DecodeLinesBuf(void)+0x35c>
         b69c8:	e3a00003 	mov	r0, #3	; 0x3
         b69cc:	e584027c 	str	r0, [r4, #636]	; fField636
         b69d0:	ea000048 	b	b6af8 <TFaxTool::DecodeLinesBuf(void)+0x368>
         b69d4:	e5940510 	ldr	r0, [r4, #1296]	; fField1296
         b69d8:	e2800001 	add	r0, r0, #1	; 0x1
         b69dc:	e3a09000 	mov	r9, #0	; 0x0
         b69e0:	e5840510 	str	r0, [r4, #1296]	; fField1296
         b69e4:	e1a0000a 	mov	r0, sl
         b69e8:	e52d906c 	str	r9, [sp, -#108]!
         b69ec:	eb6befe0 	bl	1bb2974 <$setjmp>
         b69f0:	e3300000 	teq	r0, #0	; 0x0
         b69f4:	13a070e9 	movne	r7, #233	; 0xe9
         b69f8:	12477b0a 	subne	r7, r7, #10240	; 0x2800
         b69fc:	1a000025 	bne	b6a98 <TFaxTool::DecodeLinesBuf(void)+0x308>
         b6a00:	e1a0000d 	mov	r0, sp
         b6a04:	eb6ca59c 	bl	1be007c <$AddExceptionHandler>
         b6a08:	e59404d0 	ldr	r0, [r4, #1232]	; fField1232
         b6a0c:	e59422dc 	ldr	r2, [r4, #732]	; fField732
         b6a10:	e594340c 	ldr	r3, [r4, #1036]	; fField1036
         b6a14:	e0840100 	add	r0, r4, r0, lsl #2
         b6a18:	e5b014c8 	ldr	r1, [r0, #1224]!
         b6a1c:	e1a00003 	mov	r0, r3
         b6a20:	e5933000 	ldr	r3, [r3]
         b6a24:	e1a0e00f 	mov	lr, pc
         b6a28:	e283f020 	add	pc, r3, #32	; 0x20
         b6a2c:	e5940808 	ldr	r0, [r4, #2056]	; fField2056
         b6a30:	e2800001 	add	r0, r0, #1	; 0x1
         b6a34:	e5840808 	str	r0, [r4, #2056]	; fField2056
         b6a38:	e3500032 	cmp	r0, #50	; 0x32
         b6a3c:	9a000017 	bls	b6aa0 <TFaxTool::DecodeLinesBuf(void)+0x310>
         b6a40:	e594027c 	ldr	r0, [r4, #636]	; fField636
         b6a44:	e3300002 	teq	r0, #2	; 0x2
         b6a48:	0a000014 	beq	b6aa0 <TFaxTool::DecodeLinesBuf(void)+0x310>
         b6a4c:	e5849808 	str	r9, [r4, #2056]	; fField2056
         b6a50:	e594080c 	ldr	r0, [r4, #2060]	; fField2060
         b6a54:	e3300000 	teq	r0, #0	; 0x0
         b6a58:	1a000007 	bne	b6a7c <TFaxTool::DecodeLinesBuf(void)+0x2ec>
         b6a5c:	e594040c 	ldr	r0, [r4, #1036]	; fField1036
         b6a60:	eb6cc262 	bl	1be73f0 <CBufferList::$First(void)>
         b6a64:	e5900010 	ldr	r0, [r0, #16]	; fField16
         b6a68:	e240201c 	sub	r2, r0, #28	; 0x1c
         b6a6c:	e28d1074 	add	r1, sp, #116	; 0x74
         b6a70:	e8910003 	ldmia	r1, {r0, r1}
         b6a74:	eb6977eb 	bl	1b14a28 <$VAddrToStore(TStore **, unsigned long *, unsigned long)>
         b6a78:	e1a07000 	mov	r7, r0
         b6a7c:	e594080c 	ldr	r0, [r4, #2060]	; fField2060
         b6a80:	e3300000 	teq	r0, #0	; 0x0
         b6a84:	0a000005 	beq	b6aa0 <TFaxTool::DecodeLinesBuf(void)+0x310>
         b6a88:	e5941810 	ldr	r1, [r4, #2064]	; fField2064
         b6a8c:	eb6952d9 	bl	1b0b5f8 <$FlushLargeObject(TStore *, unsigned long)>
         b6a90:	e1b07000 	movs	r7, r0
         b6a94:	0a000001 	beq	b6aa0 <TFaxTool::DecodeLinesBuf(void)+0x310>
         b6a98:	e28dd06c 	add	sp, sp, #108	; 0x6c
         b6a9c:	ea000039 	b	b6b88 <TFaxTool::DecodeLinesBuf(void)+0x3f8>
         b6aa0:	e1a0000d 	mov	r0, sp
         b6aa4:	eb6ca983 	bl	1be10b8 <$ExitHandler>
         b6aa8:	e28dd06c 	add	sp, sp, #108	; 0x6c
         b6aac:	e59404d0 	ldr	r0, [r4, #1232]	; fField1232
         b6ab0:	e2200001 	eor	r0, r0, #1	; 0x1
         b6ab4:	e58404d0 	str	r0, [r4, #1232]	; fField1232
         b6ab8:	e5940400 	ldr	r0, [r4, #1024]	; fField1024
         b6abc:	e2400001 	sub	r0, r0, #1	; 0x1
         b6ac0:	e5840400 	str	r0, [r4, #1024]	; fField1024
         b6ac4:	e5940304 	ldr	r0, [r4, #772]	; fField772
         b6ac8:	e3300000 	teq	r0, #0	; 0x0
         b6acc:	0a000006 	beq	b6aec <TFaxTool::DecodeLinesBuf(void)+0x35c>
         b6ad0:	e5941510 	ldr	r1, [r4, #1296]	; fField1296
         b6ad4:	e1a09001 	mov	r9, r1
         b6ad8:	eb6bef9a 	bl	1bb2948 <$__rt_udiv>
         b6adc:	e3310000 	teq	r1, #0	; 0x0
         b6ae0:	01a01009 	moveq	r1, r9
         b6ae4:	01a00004 	moveq	r0, r4
         b6ae8:	0b65c660 	bleq	1a28470 <TFaxTool::$PhaseCSendProgressEvent(unsigned long)>
         b6aec:	e5940400 	ldr	r0, [r4, #1024]	; fField1024
         b6af0:	e3500000 	cmp	r0, #0	; 0x0
         b6af4:	8affff46 	bhi	b6814 <TFaxTool::DecodeLinesBuf(void)+0x84>
         b6af8:	e5940400 	ldr	r0, [r4, #1024]	; fField1024
         b6afc:	e3300000 	teq	r0, #0	; 0x0
         b6b00:	1594027c 	ldrne	r0, [r4, #636]	; fField636
         b6b04:	13300003 	teqne	r0, #3	; 0x3
         b6b08:	1a00001e 	bne	b6b88 <TFaxTool::DecodeLinesBuf(void)+0x3f8>
         b6b0c:	e594040c 	ldr	r0, [r4, #1036]	; fField1036
         b6b10:	e1a05000 	mov	r5, r0
         b6b14:	e5901000 	ldr	r1, [r0]
         b6b18:	e1a0e00f 	mov	lr, pc
         b6b1c:	e281f02c 	add	pc, r1, #44	; 0x2c
         b6b20:	e1a06000 	mov	r6, r0
         b6b24:	e594140c 	ldr	r1, [r4, #1036]	; fField1036
         b6b28:	e1a00001 	mov	r0, r1
         b6b2c:	e5911000 	ldr	r1, [r1]
         b6b30:	e1a0e00f 	mov	lr, pc
         b6b34:	e281f03c 	add	pc, r1, #60	; 0x3c
         b6b38:	e0461000 	sub	r1, r6, r0
         b6b3c:	e1a00005 	mov	r0, r5
         b6b40:	e3a02001 	mov	r2, #1	; 0x1
         b6b44:	e5953000 	ldr	r3, [r5]
         b6b48:	e1a0e00f 	mov	lr, pc
         b6b4c:	e283f034 	add	pc, r3, #52	; 0x34
         b6b50:	e594040c 	ldr	r0, [r4, #1036]	; fField1036
         b6b54:	e5901000 	ldr	r1, [r0]
         b6b58:	e1a0e00f 	mov	lr, pc
         b6b5c:	e281f02c 	add	pc, r1, #44	; 0x2c
         b6b60:	e1a03000 	mov	r3, r0
         b6b64:	e594027c 	ldr	r0, [r4, #636]	; fField636
         b6b68:	e3300003 	teq	r0, #3	; 0x3
         b6b6c:	13a02000 	movne	r2, #0	; 0x0
         b6b70:	03a02001 	moveq	r2, #1	; 0x1
         b6b74:	e1a00004 	mov	r0, r4
         b6b78:	e3a01000 	mov	r1, #0	; 0x0
         b6b7c:	e594c000 	ldr	ip, [r4]
         b6b80:	e1a0e00f 	mov	lr, pc
         b6b84:	e28cf0ec 	add	pc, ip, #236	; 0xec
         b6b88:	e1a00007 	mov	r0, r7
         b6b8c:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::PhaseCSendProgressEvent(unsigned long)
 * Address: 000b6b90
 */
TFaxTool::PhaseCSendProgressEvent(unsigned long) {
    /*
         b6b90:	e5801308 	str	r1, [r0, #776]	; fField776
         b6b94:	ea65ca3f 	b	1a29498 <TFaxTool::$PostFaxEvent(void)>
    */
}

/**
 * Symbol: TFaxTool::GetCommEvent(void)
 * Address: 000b6b98
 */
TFaxTool::GetCommEvent(void) {
    /*
         b6b98:	e1a0c00d 	mov	ip, sp
         b6b9c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b6ba0:	e24cb004 	sub	fp, ip, #4	; 0x4
         b6ba4:	e1a04000 	mov	r4, r0
         b6ba8:	eb65ca3a 	bl	1a29498 <TFaxTool::$PostFaxEvent(void)>
         b6bac:	e280cdfa 	add	ip, r0, #16000	; 0x3e80
         b6bb0:	e37c0010 	cmn	ip, #16	; 0x10
         b6bb4:	01a00004 	moveq	r0, r4
         b6bb8:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         b6bbc:	0a6c2507 	beq	1bbffe0 <TCommTool::$GetCommEvent(void)>
         b6bc0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::ReStartPhaseB(void)
 * Address: 000b6bc4
 */
TFaxTool::ReStartPhaseB(void) {
    /*
         b6bc4:	e590126c 	ldr	r1, [r0, #620]	; fField620
         b6bc8:	e3110004 	tst	r1, #4	; 0x4
         b6bcc:	13a0100d 	movne	r1, #13	; 0xd
         b6bd0:	12411c56 	subne	r1, r1, #22016	; 0x5600
         b6bd4:	1a6c292d 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         b6bd8:	e3a02001 	mov	r2, #1	; 0x1
         b6bdc:	e3c11821 	bic	r1, r1, #2162688	; 0x210000
         b6be0:	e3c11e4e 	bic	r1, r1, #1248	; 0x4e0
         b6be4:	e2800f9b 	add	r0, r0, #620	; 0x26c
         b6be8:	e8800006 	stmia	r0, {r1, r2}
         b6bec:	e2400f9b 	sub	r0, r0, #620	; 0x26c
         b6bf0:	e3a01003 	mov	r1, #3	; 0x3
         b6bf4:	e5801278 	str	r1, [r0, #632]	; fField632
         b6bf8:	ea65bdd3 	b	1a2634c <TFaxTool::$GetCommand(void)>
    */
}

/**
 * Symbol: TFaxTool::PostFaxEvent(void)
 * Address: 000b6bfc
 */
TFaxTool::PostFaxEvent(void) {
    /*
         b6bfc:	e1a0c00d 	mov	ip, sp
         b6c00:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b6c04:	e24cb004 	sub	fp, ip, #4	; 0x4
         b6c08:	e1a04000 	mov	r4, r0
         b6c0c:	e3a00e17 	mov	r0, #368	; 0x170
         b6c10:	e2400901 	sub	r0, r0, #16384	; 0x4000
         b6c14:	e5941308 	ldr	r1, [r4, #776]	; fField776
         b6c18:	e3310000 	teq	r1, #0	; 0x0
         b6c1c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         b6c20:	e24dd02c 	sub	sp, sp, #44	; 0x2c
         b6c24:	e28d0008 	add	r0, sp, #8	; 0x8
         b6c28:	eb6ce2e6 	bl	1bef7c8 <TCommToolGetEventReply::$__ct(void)>
         b6c2c:	e3a00006 	mov	r0, #6	; 0x6
         b6c30:	e3a05000 	mov	r5, #0	; 0x0
         b6c34:	e58d0018 	str	r0, [sp, #24]	; fField24
         b6c38:	e58d5004 	str	r5, [sp, #4]	; fField4
         b6c3c:	e58d5000 	str	r5, [sp]
         b6c40:	e28d001c 	add	r0, sp, #28	; 0x1c
         b6c44:	e89d5000 	ldmia	sp, {ip, lr}
         b6c48:	e8805000 	stmia	r0, {ip, lr}
         b6c4c:	e5940308 	ldr	r0, [r4, #776]	; fField776
         b6c50:	e58d0024 	str	r0, [sp, #36]
         b6c54:	e5940204 	ldr	r0, [r4, #516]	; fField516
         b6c58:	e58d0028 	str	r0, [sp, #40]
         b6c5c:	e28d1008 	add	r1, sp, #8	; 0x8
         b6c60:	e1a00004 	mov	r0, r4
         b6c64:	e3a02000 	mov	r2, #0	; 0x0
         b6c68:	e5943000 	ldr	r3, [r4]
         b6c6c:	e1a0e00f 	mov	lr, pc
         b6c70:	e283f03c 	add	pc, r3, #60	; 0x3c
         b6c74:	e3300000 	teq	r0, #0	; 0x0
         b6c78:	05a45308 	streq	r5, [r4, #776]!	; fField776
         b6c7c:	e3a00000 	mov	r0, #0	; 0x0
         b6c80:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::PhaseDPktComplete(long)
 * Address: 000b6c84
 */
TFaxTool::PhaseDPktComplete(long) {
    /*
         b6c84:	e5902018 	ldr	r2, [r0, #24]	; fField24
         b6c88:	e3120242 	tst	r2, #536870916	; 0x20000004
         b6c8c:	11a0f00e 	movne	pc, lr
         b6c90:	e5902280 	ldr	r2, [r0, #640]	; fField640
         b6c94:	e2422002 	sub	r2, r2, #2	; 0x2
         b6c98:	e352000b 	cmp	r2, #11	; 0xb
         b6c9c:	908ff102 	addls	pc, pc, r2, lsl #2
         b6ca0:	e1a0f00e 	mov	pc, lr
         b6ca4:	ea00000a 	b	b6cd4 <TFaxTool::PhaseDPktComplete(long)+0x50>
         b6ca8:	ea00000a 	b	b6cd8 <TFaxTool::PhaseDPktComplete(long)+0x54>
         b6cac:	e1a0f00e 	mov	pc, lr
         b6cb0:	ea00000b 	b	b6ce4 <TFaxTool::PhaseDPktComplete(long)+0x60>
         b6cb4:	e1a0f00e 	mov	pc, lr
         b6cb8:	ea000007 	b	b6cdc <TFaxTool::PhaseDPktComplete(long)+0x58>
         b6cbc:	e1a0f00e 	mov	pc, lr
         b6cc0:	e1a0f00e 	mov	pc, lr
         b6cc4:	ea000005 	b	b6ce0 <TFaxTool::PhaseDPktComplete(long)+0x5c>
         b6cc8:	e1a0f00e 	mov	pc, lr
         b6ccc:	e1a0f00e 	mov	pc, lr
         b6cd0:	ea65c9ea 	b	1a29480 <TFaxTool::$PhaseDPutCRP(long)>
         b6cd4:	ea657b87 	b	1a15af8 <TFaxTool::$PhaseDGetResponse(long)>
         b6cd8:	ea657f8a 	b	1a16b08 <TFaxTool::$PhaseDProcessResponse(long)>
         b6cdc:	ea65bd99 	b	1a26348 <TFaxTool::$GetCommandComplete(long)>
         b6ce0:	ea65c9e7 	b	1a29484 <TFaxTool::$PhaseDPutMCF(long)>
         b6ce4:	ea657f88 	b	1a16b0c <TFaxTool::$PhaseDWaitForSignalGone(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseDGetResponse(long)
 * Address: 000b6ce8
 */
TFaxTool::PhaseDGetResponse(long) {
    /*
         b6ce8:	e3310000 	teq	r1, #0	; 0x0
         b6cec:	03a01003 	moveq	r1, #3	; 0x3
         b6cf0:	05801280 	streq	r1, [r0, #640]	; fField640
         b6cf4:	0a656af4 	beq	1a118cc <TFaxTool::$GetResponse(void)>
         b6cf8:	13a01000 	movne	r1, #0	; 0x0
         b6cfc:	1a65d239 	bne	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseDProcessResponse(long)
 * Address: 000b6d00
 */
TFaxTool::PhaseDProcessResponse(long) {
    /*
         b6d00:	e1a0c00d 	mov	ip, sp
         b6d04:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b6d08:	e24cb004 	sub	fp, ip, #4	; 0x4
         b6d0c:	e1a04000 	mov	r4, r0
         b6d10:	e291cc5d 	adds	ip, r1, #23808	; 0x5d00
         b6d14:	d37c00c2 	cmnle	ip, #194	; 0xc2
         b6d18:	0a000009 	beq	b6d44 <TFaxTool::PhaseDProcessResponse(long)+0x44>
         b6d1c:	ca00000f 	bgt	b6d60 <TFaxTool::PhaseDProcessResponse(long)+0x60>
         b6d20:	e281cc5d 	add	ip, r1, #23808	; 0x5d00
         b6d24:	e37c00c9 	cmn	ip, #201	; 0xc9
         b6d28:	0a000005 	beq	b6d44 <TFaxTool::PhaseDProcessResponse(long)+0x44>
         b6d2c:	e281cc5d 	add	ip, r1, #23808	; 0x5d00
         b6d30:	e37c00c6 	cmn	ip, #198	; 0xc6
         b6d34:	0a000018 	beq	b6d9c <TFaxTool::PhaseDProcessResponse(long)+0x9c>
         b6d38:	e281cc5d 	add	ip, r1, #23808	; 0x5d00
         b6d3c:	e37c00c5 	cmn	ip, #197	; 0xc5
         b6d40:	1a00001b 	bne	b6db4 <TFaxTool::PhaseDProcessResponse(long)+0xb4>
         b6d44:	e1a00004 	mov	r0, r4
         b6d48:	eb657735 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b6d4c:	e3a00001 	mov	r0, #1	; 0x1
         b6d50:	e5840280 	str	r0, [r4, #640]	; fField640
         b6d54:	e1a00004 	mov	r0, r4
         b6d58:	e3a010c8 	mov	r1, #200	; 0xc8
         b6d5c:	ea000012 	b	b6dac <TFaxTool::PhaseDProcessResponse(long)+0xac>
         b6d60:	e281cc46 	add	ip, r1, #17920	; 0x4600
         b6d64:	e37c0054 	cmn	ip, #84	; 0x54
         b6d68:	0a00000b 	beq	b6d9c <TFaxTool::PhaseDProcessResponse(long)+0x9c>
         b6d6c:	e281cdfa 	add	ip, r1, #16000	; 0x3e80
         b6d70:	e37c0005 	cmn	ip, #5	; 0x5
         b6d74:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b6d78:	e3310000 	teq	r1, #0	; 0x0
         b6d7c:	1a00000c 	bne	b6db4 <TFaxTool::PhaseDProcessResponse(long)+0xb4>
         b6d80:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b6d84:	e3100401 	tst	r0, #16777216	; 0x1000000
         b6d88:	e1a00004 	mov	r0, r4
         b6d8c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         b6d90:	0a657f5b 	beq	1a16b04 <TFaxTool::$PhaseDProcessMPSResponse(void)>
         b6d94:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         b6d98:	1a657f58 	bne	1a16b00 <TFaxTool::$PhaseDProcessEOPResponse(void)>
         b6d9c:	e1a00004 	mov	r0, r4
         b6da0:	eb65771f 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b6da4:	e1a00004 	mov	r0, r4
         b6da8:	e3a010d2 	mov	r1, #210	; 0xd2
         b6dac:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b6db0:	ea65d20c 	b	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
         b6db4:	e1a00004 	mov	r0, r4
         b6db8:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b6dbc:	ea6c28b3 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseDProcessEOPResponse(void)
 * Address: 000b6dc0
 */
TFaxTool::PhaseDProcessEOPResponse(void) {
    /*
         b6dc0:	e1a0c00d 	mov	ip, sp
         b6dc4:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b6dc8:	e24cb004 	sub	fp, ip, #4	; 0x4
         b6dcc:	e1a04000 	mov	r4, r0
         b6dd0:	e3a06000 	mov	r6, #0	; 0x0
         b6dd4:	e5d026a2 	ldrb	r2, [r0, #1698]
         b6dd8:	e3a00006 	mov	r0, #6	; 0x6
         b6ddc:	e352008d 	cmp	r2, #141	; 0x8d
         b6de0:	0a000024 	beq	b6e78 <TFaxTool::PhaseDProcessEOPResponse(void)+0xb8>
         b6de4:	ca000017 	bgt	b6e48 <TFaxTool::PhaseDProcessEOPResponse(void)+0x88>
         b6de8:	e59f103c 	ldr	r1, [pc, #3c]	; b6e2c <TFaxTool::PhaseDProcessEOPResponse(void)+0x6c>	; fField3
         b6dec:	e3a05008 	mov	r5, #8	; 0x8
         b6df0:	e352002d 	cmp	r2, #45	; 0x2d
         b6df4:	0a000006 	beq	b6e14 <TFaxTool::PhaseDProcessEOPResponse(void)+0x54>
         b6df8:	ca00000c 	bgt	b6e30 <TFaxTool::PhaseDProcessEOPResponse(void)+0x70>
         b6dfc:	e332001a 	teq	r2, #26	; 0x1a
         b6e00:	1332001b 	teqne	r2, #27	; 0x1b
         b6e04:	03a00005 	moveq	r0, #5	; 0x5
         b6e08:	0a00001a 	beq	b6e78 <TFaxTool::PhaseDProcessEOPResponse(void)+0xb8>
         b6e0c:	e332002c 	teq	r2, #44	; 0x2c
         b6e10:	1a000020 	bne	b6e98 <TFaxTool::PhaseDProcessEOPResponse(void)+0xd8>
         b6e14:	e1a06001 	mov	r6, r1
         b6e18:	e1a00004 	mov	r0, r4
         b6e1c:	eb6551e2 	bl	1a0b5ac <TFaxTool::$AdjustSpeedForFTT(void)>
         b6e20:	e3300000 	teq	r0, #0	; 0x0
         b6e24:	1a00004d 	bne	b6f60 <TFaxTool::PhaseDProcessEOPResponse(void)+0x1a0>
         b6e28:	ea000019 	b	b6e94 <TFaxTool::PhaseDProcessEOPResponse(void)+0xd4>
         b6e2c:	ffffaa0b 	swinv	0x00ffaa0b
         b6e30:	e332004c 	teq	r2, #76	; 0x4c
         b6e34:	1332004d 	teqne	r2, #77	; 0x4d
         b6e38:	0a000010 	beq	b6e80 <TFaxTool::PhaseDProcessEOPResponse(void)+0xc0>
         b6e3c:	e332008c 	teq	r2, #140	; 0x8c
         b6e40:	1a000014 	bne	b6e98 <TFaxTool::PhaseDProcessEOPResponse(void)+0xd8>
         b6e44:	ea00000b 	b	b6e78 <TFaxTool::PhaseDProcessEOPResponse(void)+0xb8>
         b6e48:	e35200cd 	cmp	r2, #205	; 0xcd
         b6e4c:	0a000009 	beq	b6e78 <TFaxTool::PhaseDProcessEOPResponse(void)+0xb8>
         b6e50:	ca000004 	bgt	b6e68 <TFaxTool::PhaseDProcessEOPResponse(void)+0xa8>
         b6e54:	e33200ac 	teq	r2, #172	; 0xac
         b6e58:	133200ad 	teqne	r2, #173	; 0xad
         b6e5c:	133200cc 	teqne	r2, #204	; 0xcc
         b6e60:	1a00000c 	bne	b6e98 <TFaxTool::PhaseDProcessEOPResponse(void)+0xd8>
         b6e64:	ea000003 	b	b6e78 <TFaxTool::PhaseDProcessEOPResponse(void)+0xb8>
         b6e68:	e33200fa 	teq	r2, #250	; 0xfa
         b6e6c:	133200fb 	teqne	r2, #251	; 0xfb
         b6e70:	1a000008 	bne	b6e98 <TFaxTool::PhaseDProcessEOPResponse(void)+0xd8>
         b6e74:	e3a0000b 	mov	r0, #11	; 0xb
         b6e78:	e5840280 	str	r0, [r4, #640]	; fField640
         b6e7c:	ea000005 	b	b6e98 <TFaxTool::PhaseDProcessEOPResponse(void)+0xd8>
         b6e80:	e1a06001 	mov	r6, r1
         b6e84:	e1a00004 	mov	r0, r4
         b6e88:	eb6551c7 	bl	1a0b5ac <TFaxTool::$AdjustSpeedForFTT(void)>
         b6e8c:	e3300000 	teq	r0, #0	; 0x0
         b6e90:	1a000032 	bne	b6f60 <TFaxTool::PhaseDProcessEOPResponse(void)+0x1a0>
         b6e94:	e5845280 	str	r5, [r4, #640]	; fField640
         b6e98:	e5d406a1 	ldrb	r0, [r4, #1697]	; fField1697
         b6e9c:	e59f502c 	ldr	r5, [pc, #2c]	; b6ed0 <TFaxTool::PhaseDProcessEOPResponse(void)+0x110>	; fField2
         b6ea0:	e3300013 	teq	r0, #19	; 0x13
         b6ea4:	1a00001c 	bne	b6f1c <TFaxTool::PhaseDProcessEOPResponse(void)+0x15c>
         b6ea8:	e1a00004 	mov	r0, r4
         b6eac:	eb6576dc 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b6eb0:	e5940280 	ldr	r0, [r4, #640]	; fField640
         b6eb4:	e3300008 	teq	r0, #8	; 0x8
         b6eb8:	1a000005 	bne	b6ed4 <TFaxTool::PhaseDProcessEOPResponse(void)+0x114>
         b6ebc:	e3a00003 	mov	r0, #3	; 0x3
         b6ec0:	e5840284 	str	r0, [r4, #644]	; fField644
         b6ec4:	e3a00001 	mov	r0, #1	; 0x1
         b6ec8:	e5840288 	str	r0, [r4, #648]	; fField648
         b6ecc:	ea000002 	b	b6edc <TFaxTool::PhaseDProcessEOPResponse(void)+0x11c>
         b6ed0:	ffffaa0f 	swinv	0x00ffaa0f
         b6ed4:	e3300006 	teq	r0, #6	; 0x6
         b6ed8:	1a000003 	bne	b6eec <TFaxTool::PhaseDProcessEOPResponse(void)+0x12c>
         b6edc:	e1a01006 	mov	r1, r6
         b6ee0:	e1a00004 	mov	r0, r4
         b6ee4:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b6ee8:	ea65bd04 	b	1a26300 <TFaxTool::$EndPageComplete(long)>
         b6eec:	e3300005 	teq	r0, #5	; 0x5
         b6ef0:	01a00004 	moveq	r0, r4
         b6ef4:	03a010d2 	moveq	r1, #210	; 0xd2
         b6ef8:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         b6efc:	0a65d1b9 	beq	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
         b6f00:	e330000b 	teq	r0, #11	; 0xb
         b6f04:	05940018 	ldreq	r0, [r4, #24]	; fField24
         b6f08:	03c00201 	biceq	r0, r0, #268435456	; 0x10000000
         b6f0c:	05840018 	streq	r0, [r4, #24]	; fField24
         b6f10:	e1a00004 	mov	r0, r4
         b6f14:	e1a01005 	mov	r1, r5
         b6f18:	ea000012 	b	b6f68 <TFaxTool::PhaseDProcessEOPResponse(void)+0x1a8>
         b6f1c:	e5940280 	ldr	r0, [r4, #640]	; fField640
         b6f20:	e3300003 	teq	r0, #3	; 0x3
         b6f24:	1afffff9 	bne	b6f10 <TFaxTool::PhaseDProcessEOPResponse(void)+0x150>
         b6f28:	e3a03000 	mov	r3, #0	; 0x0
         b6f2c:	e3a020b2 	mov	r2, #178	; 0xb2
         b6f30:	e2822b03 	add	r2, r2, #3072	; 0xc00
         b6f34:	e92d000c 	stmdb	sp!, {r2, r3}
         b6f38:	e2843f96 	add	r3, r4, #600	; 0x258
         b6f3c:	e2833b01 	add	r3, r3, #1024	; 0x400
         b6f40:	e1a00004 	mov	r0, r4
         b6f44:	e3a02001 	mov	r2, #1	; 0x1
         b6f48:	e3a01016 	mov	r1, #22	; 0x16
         b6f4c:	e2811c01 	add	r1, r1, #256	; 0x100
         b6f50:	eb65c951 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b6f54:	e28dd008 	add	sp, sp, #8	; 0x8
         b6f58:	e3300000 	teq	r0, #0	; 0x0
         b6f5c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         b6f60:	e1a01000 	mov	r1, r0
         b6f64:	e1a00004 	mov	r0, r4
         b6f68:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b6f6c:	ea6c2847 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseDProcessMPSResponse(void)
 * Address: 000b6f70
 */
TFaxTool::PhaseDProcessMPSResponse(void) {
    /*
         b6f70:	e1a0c00d 	mov	ip, sp
         b6f74:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b6f78:	e24cb004 	sub	fp, ip, #4	; 0x4
         b6f7c:	e1a04000 	mov	r4, r0
         b6f80:	e3a06000 	mov	r6, #0	; 0x0
         b6f84:	e5d016a2 	ldrb	r1, [r0, #1698]
         b6f88:	e351008d 	cmp	r1, #141	; 0x8d
         b6f8c:	0a000017 	beq	b6ff0 <TFaxTool::PhaseDProcessMPSResponse(void)+0x80>
         b6f90:	e3a05008 	mov	r5, #8	; 0x8
         b6f94:	ca000017 	bgt	b6ff8 <TFaxTool::PhaseDProcessMPSResponse(void)+0x88>
         b6f98:	e59f0038 	ldr	r0, [pc, #38]	; b6fd8 <TFaxTool::PhaseDProcessMPSResponse(void)+0x68>
         b6f9c:	e351002d 	cmp	r1, #45	; 0x2d
         b6fa0:	0a000006 	beq	b6fc0 <TFaxTool::PhaseDProcessMPSResponse(void)+0x50>
         b6fa4:	ca00000c 	bgt	b6fdc <TFaxTool::PhaseDProcessMPSResponse(void)+0x6c>
         b6fa8:	e331001a 	teq	r1, #26	; 0x1a
         b6fac:	1331001b 	teqne	r1, #27	; 0x1b
         b6fb0:	03a00005 	moveq	r0, #5	; 0x5
         b6fb4:	0a00001b 	beq	b7028 <TFaxTool::PhaseDProcessMPSResponse(void)+0xb8>
         b6fb8:	e331002c 	teq	r1, #44	; 0x2c
         b6fbc:	1a000021 	bne	b7048 <TFaxTool::PhaseDProcessMPSResponse(void)+0xd8>
         b6fc0:	e1a06000 	mov	r6, r0
         b6fc4:	e1a00004 	mov	r0, r4
         b6fc8:	eb655177 	bl	1a0b5ac <TFaxTool::$AdjustSpeedForFTT(void)>
         b6fcc:	e3300000 	teq	r0, #0	; 0x0
         b6fd0:	1a00004e 	bne	b7110 <TFaxTool::PhaseDProcessMPSResponse(void)+0x1a0>
         b6fd4:	ea00001a 	b	b7044 <TFaxTool::PhaseDProcessMPSResponse(void)+0xd4>
         b6fd8:	ffffaa0b 	swinv	0x00ffaa0b
         b6fdc:	e331004c 	teq	r1, #76	; 0x4c
         b6fe0:	1331004d 	teqne	r1, #77	; 0x4d
         b6fe4:	0a000011 	beq	b7030 <TFaxTool::PhaseDProcessMPSResponse(void)+0xc0>
         b6fe8:	e331008c 	teq	r1, #140	; 0x8c
         b6fec:	1a000015 	bne	b7048 <TFaxTool::PhaseDProcessMPSResponse(void)+0xd8>
         b6ff0:	e3a00009 	mov	r0, #9	; 0x9
         b6ff4:	ea00000b 	b	b7028 <TFaxTool::PhaseDProcessMPSResponse(void)+0xb8>
         b6ff8:	e35100cd 	cmp	r1, #205	; 0xcd
         b6ffc:	0a000010 	beq	b7044 <TFaxTool::PhaseDProcessMPSResponse(void)+0xd4>
         b7000:	ca000004 	bgt	b7018 <TFaxTool::PhaseDProcessMPSResponse(void)+0xa8>
         b7004:	e33100ac 	teq	r1, #172	; 0xac
         b7008:	133100ad 	teqne	r1, #173	; 0xad
         b700c:	133100cc 	teqne	r1, #204	; 0xcc
         b7010:	1a00000c 	bne	b7048 <TFaxTool::PhaseDProcessMPSResponse(void)+0xd8>
         b7014:	ea00000a 	b	b7044 <TFaxTool::PhaseDProcessMPSResponse(void)+0xd4>
         b7018:	e33100fa 	teq	r1, #250	; 0xfa
         b701c:	133100fb 	teqne	r1, #251	; 0xfb
         b7020:	1a000008 	bne	b7048 <TFaxTool::PhaseDProcessMPSResponse(void)+0xd8>
         b7024:	e3a0000b 	mov	r0, #11	; 0xb
         b7028:	e5840280 	str	r0, [r4, #640]	; fField640
         b702c:	ea000005 	b	b7048 <TFaxTool::PhaseDProcessMPSResponse(void)+0xd8>
         b7030:	e1a06000 	mov	r6, r0
         b7034:	e1a00004 	mov	r0, r4
         b7038:	eb65515b 	bl	1a0b5ac <TFaxTool::$AdjustSpeedForFTT(void)>
         b703c:	e3300000 	teq	r0, #0	; 0x0
         b7040:	1a000032 	bne	b7110 <TFaxTool::PhaseDProcessMPSResponse(void)+0x1a0>
         b7044:	e5845280 	str	r5, [r4, #640]	; fField640
         b7048:	e5d406a1 	ldrb	r0, [r4, #1697]	; fField1697
         b704c:	e59f502c 	ldr	r5, [pc, #2c]	; b7080 <TFaxTool::PhaseDProcessMPSResponse(void)+0x110>	; fField2
         b7050:	e3300013 	teq	r0, #19	; 0x13
         b7054:	1a00001c 	bne	b70cc <TFaxTool::PhaseDProcessMPSResponse(void)+0x15c>
         b7058:	e1a00004 	mov	r0, r4
         b705c:	eb657670 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b7060:	e5940280 	ldr	r0, [r4, #640]	; fField640
         b7064:	e3300008 	teq	r0, #8	; 0x8
         b7068:	1a000005 	bne	b7084 <TFaxTool::PhaseDProcessMPSResponse(void)+0x114>
         b706c:	e3a00003 	mov	r0, #3	; 0x3
         b7070:	e5840284 	str	r0, [r4, #644]	; fField644
         b7074:	e3a00001 	mov	r0, #1	; 0x1
         b7078:	e5840288 	str	r0, [r4, #648]	; fField648
         b707c:	ea000002 	b	b708c <TFaxTool::PhaseDProcessMPSResponse(void)+0x11c>
         b7080:	ffffaa0f 	swinv	0x00ffaa0f
         b7084:	e3300009 	teq	r0, #9	; 0x9
         b7088:	1a000003 	bne	b709c <TFaxTool::PhaseDProcessMPSResponse(void)+0x12c>
         b708c:	e1a01006 	mov	r1, r6
         b7090:	e1a00004 	mov	r0, r4
         b7094:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b7098:	ea65bc98 	b	1a26300 <TFaxTool::$EndPageComplete(long)>
         b709c:	e3300005 	teq	r0, #5	; 0x5
         b70a0:	01a00004 	moveq	r0, r4
         b70a4:	03a010d2 	moveq	r1, #210	; 0xd2
         b70a8:	091b6870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, lr}
         b70ac:	0a65d14d 	beq	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
         b70b0:	e330000b 	teq	r0, #11	; 0xb
         b70b4:	05940018 	ldreq	r0, [r4, #24]	; fField24
         b70b8:	03c00201 	biceq	r0, r0, #268435456	; 0x10000000
         b70bc:	05840018 	streq	r0, [r4, #24]	; fField24
         b70c0:	e1a00004 	mov	r0, r4
         b70c4:	e1a01005 	mov	r1, r5
         b70c8:	ea000012 	b	b7118 <TFaxTool::PhaseDProcessMPSResponse(void)+0x1a8>
         b70cc:	e5940280 	ldr	r0, [r4, #640]	; fField640
         b70d0:	e3300003 	teq	r0, #3	; 0x3
         b70d4:	1afffff9 	bne	b70c0 <TFaxTool::PhaseDProcessMPSResponse(void)+0x150>
         b70d8:	e3a03000 	mov	r3, #0	; 0x0
         b70dc:	e3a020b2 	mov	r2, #178	; 0xb2
         b70e0:	e2822b03 	add	r2, r2, #3072	; 0xc00
         b70e4:	e92d000c 	stmdb	sp!, {r2, r3}
         b70e8:	e2843f96 	add	r3, r4, #600	; 0x258
         b70ec:	e2833b01 	add	r3, r3, #1024	; 0x400
         b70f0:	e1a00004 	mov	r0, r4
         b70f4:	e3a02001 	mov	r2, #1	; 0x1
         b70f8:	e3a01016 	mov	r1, #22	; 0x16
         b70fc:	e2811c01 	add	r1, r1, #256	; 0x100
         b7100:	eb65c8e5 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b7104:	e28dd008 	add	sp, sp, #8	; 0x8
         b7108:	e3300000 	teq	r0, #0	; 0x0
         b710c:	091ba870 	ldmeqdb	fp, {r4, r5, r6, fp, sp, pc}
         b7110:	e1a01000 	mov	r1, r0
         b7114:	e1a00004 	mov	r0, r4
         b7118:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b711c:	ea6c27db 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseDWaitForSignalGone(long)
 * Address: 000b7120
 */
TFaxTool::PhaseDWaitForSignalGone(long) {
    /*
         b7120:	e1a0c00d 	mov	ip, sp
         b7124:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b7128:	e24cb004 	sub	fp, ip, #4	; 0x4
         b712c:	e1a04000 	mov	r4, r0
         b7130:	e1a03001 	mov	r3, r1
         b7134:	e3a020b2 	mov	r2, #178	; 0xb2
         b7138:	e2822b03 	add	r2, r2, #3072	; 0xc00
         b713c:	e2800f96 	add	r0, r0, #600	; 0x258
         b7140:	e2800b01 	add	r0, r0, #1024	; 0x400
         b7144:	e3a01016 	mov	r1, #22	; 0x16
         b7148:	e2811c01 	add	r1, r1, #256	; 0x100
         b714c:	e293cc46 	adds	ip, r3, #17920	; 0x4600
         b7150:	d37c0054 	cmnle	ip, #84	; 0x54
         b7154:	0a00001d 	beq	b71d0 <TFaxTool::PhaseDWaitForSignalGone(long)+0xb0>
         b7158:	ca00000d 	bgt	b7194 <TFaxTool::PhaseDWaitForSignalGone(long)+0x74>
         b715c:	e283cc5d 	add	ip, r3, #23808	; 0x5d00
         b7160:	e37c00c6 	cmn	ip, #198	; 0xc6
         b7164:	0a000019 	beq	b71d0 <TFaxTool::PhaseDWaitForSignalGone(long)+0xb0>
         b7168:	e283cc5d 	add	ip, r3, #23808	; 0x5d00
         b716c:	e37c00c2 	cmn	ip, #194	; 0xc2
         b7170:	1a00001f 	bne	b71f4 <TFaxTool::PhaseDWaitForSignalGone(long)+0xd4>
         b7174:	e1a00004 	mov	r0, r4
         b7178:	eb657629 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b717c:	e3a00001 	mov	r0, #1	; 0x1
         b7180:	e5840280 	str	r0, [r4, #640]	; fField640
         b7184:	e1a00004 	mov	r0, r4
         b7188:	e3a010c8 	mov	r1, #200	; 0xc8
         b718c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b7190:	ea65d114 	b	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
         b7194:	e283cdfa 	add	ip, r3, #16000	; 0x3e80
         b7198:	e37c0005 	cmn	ip, #5	; 0x5
         b719c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b71a0:	e3330000 	teq	r3, #0	; 0x0
         b71a4:	1a000012 	bne	b71f4 <TFaxTool::PhaseDWaitForSignalGone(long)+0xd4>
         b71a8:	e3a03001 	mov	r3, #1	; 0x1
         b71ac:	e92d000c 	stmdb	sp!, {r2, r3}
         b71b0:	e1a03000 	mov	r3, r0
         b71b4:	e1a00004 	mov	r0, r4
         b71b8:	e3a02001 	mov	r2, #1	; 0x1
         b71bc:	eb65c8b6 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b71c0:	e28dd008 	add	sp, sp, #8	; 0x8
         b71c4:	e1b03000 	movs	r3, r0
         b71c8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b71cc:	ea000008 	b	b71f4 <TFaxTool::PhaseDWaitForSignalGone(long)+0xd4>
         b71d0:	e3a03001 	mov	r3, #1	; 0x1
         b71d4:	e92d000c 	stmdb	sp!, {r2, r3}
         b71d8:	e1a03000 	mov	r3, r0
         b71dc:	e1a00004 	mov	r0, r4
         b71e0:	e3a02001 	mov	r2, #1	; 0x1
         b71e4:	eb65c8ac 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b71e8:	e28dd008 	add	sp, sp, #8	; 0x8
         b71ec:	e1b03000 	movs	r3, r0
         b71f0:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b71f4:	e1a01003 	mov	r1, r3
         b71f8:	e1a00004 	mov	r0, r4
         b71fc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b7200:	ea6c27a2 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseDPutPostMsgCmd(unsigned long)
 * Address: 000b7204
 */
TFaxTool::PhaseDPutPostMsgCmd(unsigned long) {
    /*
         b7204:	e1a0c00d 	mov	ip, sp
         b7208:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b720c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b7210:	e1a04000 	mov	r4, r0
         b7214:	e1a05001 	mov	r5, r1
         b7218:	e3a00002 	mov	r0, #2	; 0x2
         b721c:	e5840280 	str	r0, [r4, #640]	; fField640
         b7220:	e3a00003 	mov	r0, #3	; 0x3
         b7224:	e584029c 	str	r0, [r4, #668]	; fField668
         b7228:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b722c:	e3100401 	tst	r0, #16777216	; 0x1000000
         b7230:	e2000004 	and	r0, r0, #4	; 0x4
         b7234:	0a000003 	beq	b7248 <TFaxTool::PhaseDPutPostMsgCmd(unsigned long)+0x44>
         b7238:	e3300000 	teq	r0, #0	; 0x0
         b723c:	03a0102e 	moveq	r1, #46	; 0x2e
         b7240:	13a0102f 	movne	r1, #47	; 0x2f
         b7244:	ea000002 	b	b7254 <TFaxTool::PhaseDPutPostMsgCmd(unsigned long)+0x50>
         b7248:	e3300000 	teq	r0, #0	; 0x0
         b724c:	03a0104e 	moveq	r1, #78	; 0x4e
         b7250:	13a0104f 	movne	r1, #79	; 0x4f
         b7254:	e3a03001 	mov	r3, #1	; 0x1
         b7258:	e92d0008 	stmdb	sp!, {r3}
         b725c:	e1a00004 	mov	r0, r4
         b7260:	e3a03000 	mov	r3, #0	; 0x0
         b7264:	e3a02000 	mov	r2, #0	; 0x0
         b7268:	eb6550e2 	bl	1a0b5f8 <TFaxTool::$BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)>
         b726c:	e28dd004 	add	sp, sp, #4	; 0x4
         b7270:	e3300000 	teq	r0, #0	; 0x0
         b7274:	1a00000b 	bne	b72a8 <TFaxTool::PhaseDPutPostMsgCmd(unsigned long)+0xa4>
         b7278:	e3a03001 	mov	r3, #1	; 0x1
         b727c:	e1a02005 	mov	r2, r5
         b7280:	e92d000c 	stmdb	sp!, {r2, r3}
         b7284:	e2843fea 	add	r3, r4, #936	; 0x3a8
         b7288:	e2833b01 	add	r3, r3, #1024	; 0x400
         b728c:	e1a00004 	mov	r0, r4
         b7290:	e3a02001 	mov	r2, #1	; 0x1
         b7294:	e3a01f45 	mov	r1, #276	; 0x114
         b7298:	eb65c882 	bl	1a294a8 <TFaxTool::$PostTransPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b729c:	e28dd008 	add	sp, sp, #8	; 0x8
         b72a0:	e3300000 	teq	r0, #0	; 0x0
         b72a4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         b72a8:	e1a01000 	mov	r1, r0
         b72ac:	e1a00004 	mov	r0, r4
         b72b0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b72b4:	ea6c2775 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseDProcessCommand(void)
 * Address: 000b72b8
 */
TFaxTool::PhaseDProcessCommand(void) {
    /*
         b72b8:	e1a0c00d 	mov	ip, sp
         b72bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b72c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         b72c4:	e1a04000 	mov	r4, r0
         b72c8:	e3a05000 	mov	r5, #0	; 0x0
         b72cc:	e5d036a2 	ldrb	r3, [r0, #1698]
         b72d0:	e3a0000a 	mov	r0, #10	; 0xa
         b72d4:	e59f2040 	ldr	r2, [pc, #40]	; b731c <TFaxTool::PhaseDProcessCommand(void)+0x64>
         b72d8:	e353005f 	cmp	r3, #95	; 0x5f
         b72dc:	0a000015 	beq	b7338 <TFaxTool::PhaseDProcessCommand(void)+0x80>
         b72e0:	e3a0100b 	mov	r1, #11	; 0xb
         b72e4:	ca000018 	bgt	b734c <TFaxTool::PhaseDProcessCommand(void)+0x94>
         b72e8:	e3530041 	cmp	r3, #65	; 0x41
         b72ec:	0a00001e 	beq	b736c <TFaxTool::PhaseDProcessCommand(void)+0xb4>
         b72f0:	ca00000a 	bgt	b7320 <TFaxTool::PhaseDProcessCommand(void)+0x68>
         b72f4:	e333002e 	teq	r3, #46	; 0x2e
         b72f8:	1333002f 	teqne	r3, #47	; 0x2f
         b72fc:	1333003e 	teqne	r3, #62	; 0x3e
         b7300:	1333003f 	teqne	r3, #63	; 0x3f
         b7304:	1a000027 	bne	b73a8 <TFaxTool::PhaseDProcessCommand(void)+0xf0>
         b7308:	e594126c 	ldr	r1, [r4, #620]	; fField620
         b730c:	e3811602 	orr	r1, r1, #2097152	; 0x200000
         b7310:	e584126c 	str	r1, [r4, #620]	; fField620
         b7314:	e3a01002 	mov	r1, #2	; 0x2
         b7318:	ea00001f 	b	b739c <TFaxTool::PhaseDProcessCommand(void)+0xe4>
         b731c:	ffffaa0f 	swinv	0x00ffaa0f
         b7320:	e3330043 	teq	r3, #67	; 0x43
         b7324:	0a000010 	beq	b736c <TFaxTool::PhaseDProcessCommand(void)+0xb4>
         b7328:	e333004e 	teq	r3, #78	; 0x4e
         b732c:	1333004f 	teqne	r3, #79	; 0x4f
         b7330:	1333005e 	teqne	r3, #94	; 0x5e
         b7334:	1a00001b 	bne	b73a8 <TFaxTool::PhaseDProcessCommand(void)+0xf0>
         b7338:	e594126c 	ldr	r1, [r4, #620]	; fField620
         b733c:	e3811602 	orr	r1, r1, #2097152	; 0x200000
         b7340:	e584126c 	str	r1, [r4, #620]	; fField620
         b7344:	e3a01003 	mov	r1, #3	; 0x3
         b7348:	ea000013 	b	b739c <TFaxTool::PhaseDProcessCommand(void)+0xe4>
         b734c:	e353008e 	cmp	r3, #142	; 0x8e
         b7350:	0a00000d 	beq	b738c <TFaxTool::PhaseDProcessCommand(void)+0xd4>
         b7354:	ca000008 	bgt	b737c <TFaxTool::PhaseDProcessCommand(void)+0xc4>
         b7358:	e3330080 	teq	r3, #128	; 0x80
         b735c:	13330081 	teqne	r3, #129	; 0x81
         b7360:	13330082 	teqne	r3, #130	; 0x82
         b7364:	13330083 	teqne	r3, #131	; 0x83
         b7368:	1a00000e 	bne	b73a8 <TFaxTool::PhaseDProcessCommand(void)+0xf0>
         b736c:	e3a0500d 	mov	r5, #13	; 0xd
         b7370:	e2455c56 	sub	r5, r5, #22016	; 0x5600
         b7374:	e5841280 	str	r1, [r4, #640]	; fField640
         b7378:	ea00000c 	b	b73b0 <TFaxTool::PhaseDProcessCommand(void)+0xf8>
         b737c:	e333008f 	teq	r3, #143	; 0x8f
         b7380:	1333009e 	teqne	r3, #158	; 0x9e
         b7384:	1333009f 	teqne	r3, #159	; 0x9f
         b7388:	1a000006 	bne	b73a8 <TFaxTool::PhaseDProcessCommand(void)+0xf0>
         b738c:	e594126c 	ldr	r1, [r4, #620]	; fField620
         b7390:	e3811602 	orr	r1, r1, #2097152	; 0x200000
         b7394:	e584126c 	str	r1, [r4, #620]	; fField620
         b7398:	e3a01001 	mov	r1, #1	; 0x1
         b739c:	e5840280 	str	r0, [r4, #640]	; fField640
         b73a0:	e58412ac 	str	r1, [r4, #684]	; fField684
         b73a4:	ea000001 	b	b73b0 <TFaxTool::PhaseDProcessCommand(void)+0xf8>
         b73a8:	e1a05002 	mov	r5, r2
         b73ac:	e5841280 	str	r1, [r4, #640]	; fField640
         b73b0:	e5d406a1 	ldrb	r0, [r4, #1697]	; fField1697
         b73b4:	e3300013 	teq	r0, #19	; 0x13
         b73b8:	1a000021 	bne	b7444 <TFaxTool::PhaseDProcessCommand(void)+0x18c>
         b73bc:	e1a00004 	mov	r0, r4
         b73c0:	eb657597 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b73c4:	e5940280 	ldr	r0, [r4, #640]	; fField640
         b73c8:	e330000b 	teq	r0, #11	; 0xb
         b73cc:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b73d0:	1a00000e 	bne	b7410 <TFaxTool::PhaseDProcessCommand(void)+0x158>
         b73d4:	e3100c01 	tst	r0, #256	; 0x100
         b73d8:	0a000008 	beq	b7400 <TFaxTool::PhaseDProcessCommand(void)+0x148>
         b73dc:	e3c00c01 	bic	r0, r0, #256	; 0x100
         b73e0:	e584026c 	str	r0, [r4, #620]	; fField620
         b73e4:	e3a01000 	mov	r1, #0	; 0x0
         b73e8:	e5940188 	ldr	r0, [r4, #392]	; fField392
         b73ec:	e5a01010 	str	r1, [r0, #16]!	; fField16
         b73f0:	e1a00004 	mov	r0, r4
         b73f4:	e5942000 	ldr	r2, [r4]
         b73f8:	e1a0e00f 	mov	lr, pc
         b73fc:	e282f0a8 	add	pc, r2, #168	; 0xa8
         b7400:	e5940018 	ldr	r0, [r4, #24]	; fField24
         b7404:	e3c00201 	bic	r0, r0, #268435456	; 0x10000000
         b7408:	e5840018 	str	r0, [r4, #24]	; fField24
         b740c:	ea00000d 	b	b7448 <TFaxTool::PhaseDProcessCommand(void)+0x190>
         b7410:	e3100010 	tst	r0, #16	; 0x10
         b7414:	e1a00004 	mov	r0, r4
         b7418:	091b6830 	ldmeqdb	fp, {r4, r5, fp, sp, lr}
         b741c:	0a65c416 	beq	1a2847c <TFaxTool::$PhaseDProcessReceivedPageConfirmation(void)>
         b7420:	e3a03066 	mov	r3, #102	; 0x66
         b7424:	e2833c0e 	add	r3, r3, #3584	; 0xe00
         b7428:	e3a020ca 	mov	r2, #202	; 0xca
         b742c:	e2822b02 	add	r2, r2, #2048	; 0x800
         b7430:	e3a01010 	mov	r1, #16	; 0x10
         b7434:	eb657dbe 	bl	1a16b34 <TFaxTool::$PostTimer(unsigned long, unsigned long, TimeUnits)>
         b7438:	e1b05000 	movs	r5, r0
         b743c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         b7440:	ea000000 	b	b7448 <TFaxTool::PhaseDProcessCommand(void)+0x190>
         b7444:	e1a05002 	mov	r5, r2
         b7448:	e1a01005 	mov	r1, r5
         b744c:	e1a00004 	mov	r0, r4
         b7450:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b7454:	ea6c270d 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::CRPRetransmitTimeOut(void)
 * Address: 000b7458
 */
TFaxTool::CRPRetransmitTimeOut(void) {
    /*
         b7458:	e3a0100d 	mov	r1, #13	; 0xd
         b745c:	e3a02048 	mov	r2, #72	; 0x48
         b7460:	e5801280 	str	r1, [r0, #640]	; fField640
         b7464:	e3a0101a 	mov	r1, #26	; 0x1a
         b7468:	ea65c3fe 	b	1a28468 <TFaxTool::$PhaseBPutPostMsgCmd(unsigned char, unsigned long)>
    */
}

/**
 * Symbol: TFaxTool::StartPhaseC(void)
 * Address: 000b746c
 */
TFaxTool::StartPhaseC(void) {
    /*
         b746c:	e1a0c00d 	mov	ip, sp
         b7470:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b7474:	e24cb004 	sub	fp, ip, #4	; 0x4
         b7478:	e1a04000 	mov	r4, r0
         b747c:	e59012f8 	ldr	r1, [r0, #760]	; fField760
         b7480:	e59002b0 	ldr	r0, [r0, #688]	; fField688
         b7484:	e0010190 	mul	r1, r0, r1
         b7488:	e3a00d7d 	mov	r0, #8000	; 0x1f40
         b748c:	eb6bed2b 	bl	1bb2940 <$__rt_sdiv>
         b7490:	e5840300 	str	r0, [r4, #768]	; fField768
         b7494:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b7498:	e3c00333 	bic	r0, r0, #-872415232	; 0xcc000000
         b749c:	e3c0070d 	bic	r0, r0, #3407872	; 0x340000
         b74a0:	e3c00b02 	bic	r0, r0, #2048	; 0x800
         b74a4:	e3a05000 	mov	r5, #0	; 0x0
         b74a8:	e3a02002 	mov	r2, #2	; 0x2
         b74ac:	e2844f9b 	add	r4, r4, #620	; 0x26c
         b74b0:	e8840005 	stmia	r4, {r0, r2}
         b74b4:	e3a02001 	mov	r2, #1	; 0x1
         b74b8:	e5845040 	str	r5, [r4, #64]	; fField64
         b74bc:	e5842010 	str	r2, [r4, #16]	; fField16
         b74c0:	e584509c 	str	r5, [r4, #156]	; fField156
         b74c4:	e584559c 	str	r5, [r4, #1436]	; fField1436
         b74c8:	e2101008 	ands	r1, r0, #8	; 0x8
         b74cc:	e58455a0 	str	r5, [r4, #1440]	; fField1440
         b74d0:	e2444f9b 	sub	r4, r4, #620	; 0x26c
         b74d4:	12002001 	andne	r2, r0, #1	; 0x1
         b74d8:	13320000 	teqne	r2, #0	; 0x0
         b74dc:	0a000005 	beq	b74f8 <TFaxTool::StartPhaseC(void)+0x8c>
         b74e0:	e1a00004 	mov	r0, r4
         b74e4:	eb6585df 	bl	1a18c68 <TFaxTool::$SendNextLine(void)>
         b74e8:	e1a00004 	mov	r0, r4
         b74ec:	e3a01000 	mov	r1, #0	; 0x0
         b74f0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b74f4:	ea65d444 	b	1a2c60c <TFaxTool::$StartPageComplete(long)>
         b74f8:	e3310000 	teq	r1, #0	; 0x0
         b74fc:	1a000026 	bne	b759c <TFaxTool::StartPhaseC(void)+0x130>
         b7500:	e3100002 	tst	r0, #2	; 0x2
         b7504:	0a000024 	beq	b759c <TFaxTool::StartPhaseC(void)+0x130>
         b7508:	e3100c01 	tst	r0, #256	; 0x100
         b750c:	0a000008 	beq	b7534 <TFaxTool::StartPhaseC(void)+0xc8>
         b7510:	e3c00c01 	bic	r0, r0, #256	; 0x100
         b7514:	e584026c 	str	r0, [r4, #620]	; fField620
         b7518:	e5940188 	ldr	r0, [r4, #392]	; fField392
         b751c:	e5a05010 	str	r5, [r0, #16]!	; fField16
         b7520:	e1a00004 	mov	r0, r4
         b7524:	e3a01000 	mov	r1, #0	; 0x0
         b7528:	e5942000 	ldr	r2, [r4]
         b752c:	e1a0e00f 	mov	lr, pc
         b7530:	e282f0a8 	add	pc, r2, #168	; 0xa8
         b7534:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b7538:	e3800801 	orr	r0, r0, #65536	; 0x10000
         b753c:	e584026c 	str	r0, [r4, #620]	; fField620
         b7540:	e5845514 	str	r5, [r4, #1300]	; fField1300
         b7544:	e5845510 	str	r5, [r4, #1296]	; fField1296
         b7548:	e58454d0 	str	r5, [r4, #1232]	; fField1232
         b754c:	e58453f4 	str	r5, [r4, #1012]	; fField1012
         b7550:	e58453f8 	str	r5, [r4, #1016]	; fField1016
         b7554:	e594043c 	ldr	r0, [r4, #1084]	; fField1084
         b7558:	e58404c4 	str	r0, [r4, #1220]	; fField1220
         b755c:	e28400d4 	add	r0, r4, #212	; 0xd4
         b7560:	e2800b01 	add	r0, r0, #1024	; 0x400
         b7564:	eb65d01e 	bl	1a2b5e4 <TT4FaxLine::$Reset(void)>
         b7568:	e5c4549d 	strb	r5, [r4, #1181]	; fField1181
         b756c:	e5c45445 	strb	r5, [r4, #1093]	; fField1093
         b7570:	e5c4549c 	strb	r5, [r4, #1180]	; fField1180
         b7574:	e5c45444 	strb	r5, [r4, #1092]	; fField1092
         b7578:	e59403f4 	ldr	r0, [r4, #1012]	; fField1012
         b757c:	e080c080 	add	ip, r0, r0, lsl #1
         b7580:	e08c0180 	add	r0, ip, r0, lsl #3
         b7584:	e0840180 	add	r0, r4, r0, lsl #3
         b7588:	e2801014 	add	r1, r0, #20	; 0x14
         b758c:	e2811b01 	add	r1, r1, #1024	; 0x400
         b7590:	e1a00004 	mov	r0, r4
         b7594:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b7598:	ea65cffb 	b	1a2b58c <TFaxTool::$ReceiveNextLinesBuf(TFaxLineBuf *)>
         b759c:	e1a00004 	mov	r0, r4
         b75a0:	e3a0100e 	mov	r1, #14	; 0xe
         b75a4:	e2411c56 	sub	r1, r1, #22016	; 0x5600
         b75a8:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b75ac:	ea6c26b7 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseDPutCRP(long)
 * Address: 000b75b0
 */
TFaxTool::PhaseDPutCRP(long) {
    /*
         b75b0:	e1a0c00d 	mov	ip, sp
         b75b4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b75b8:	e24cb004 	sub	fp, ip, #4	; 0x4
         b75bc:	e1a04000 	mov	r4, r0
         b75c0:	e3a0000a 	mov	r0, #10	; 0xa
         b75c4:	e5840280 	str	r0, [r4, #640]	; fField640
         b75c8:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b75cc:	e3100010 	tst	r0, #16	; 0x10
         b75d0:	e1a00004 	mov	r0, r4
         b75d4:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         b75d8:	0a65c3a7 	beq	1a2847c <TFaxTool::$PhaseDProcessReceivedPageConfirmation(void)>
         b75dc:	e3a03066 	mov	r3, #102	; 0x66
         b75e0:	e2833c0e 	add	r3, r3, #3584	; 0xe00
         b75e4:	e3a02ffa 	mov	r2, #1000	; 0x3e8
         b75e8:	e3a0100f 	mov	r1, #15	; 0xf
         b75ec:	eb657d50 	bl	1a16b34 <TFaxTool::$PostTimer(unsigned long, unsigned long, TimeUnits)>
         b75f0:	e3300000 	teq	r0, #0	; 0x0
         b75f4:	11a01000 	movne	r1, r0
         b75f8:	11a00004 	movne	r0, r4
         b75fc:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         b7600:	1a6c26a2 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         b7604:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::PhaseDPutMCF(long)
 * Address: 000b7608
 */
TFaxTool::PhaseDPutMCF(long) {
    /*
         b7608:	e3310000 	teq	r1, #0	; 0x0
         b760c:	13a01048 	movne	r1, #72	; 0x48
         b7610:	1a65cff4 	bne	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
         b7614:	e1a0c00d 	mov	ip, sp
         b7618:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b761c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b7620:	e1a04000 	mov	r4, r0
         b7624:	eb6574fe 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b7628:	e59402ac 	ldr	r0, [r4, #684]	; fField684
         b762c:	e3300001 	teq	r0, #1	; 0x1
         b7630:	0a000015 	beq	b768c <TFaxTool::PhaseDPutMCF(long)+0x84>
         b7634:	e3300002 	teq	r0, #2	; 0x2
         b7638:	0a00000b 	beq	b766c <TFaxTool::PhaseDPutMCF(long)+0x64>
         b763c:	e3300003 	teq	r0, #3	; 0x3
         b7640:	1a000014 	bne	b7698 <TFaxTool::PhaseDPutMCF(long)+0x90>
         b7644:	e3a00000 	mov	r0, #0	; 0x0
         b7648:	e58402ac 	str	r0, [r4, #684]	; fField684
         b764c:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b7650:	e3100402 	tst	r0, #33554432	; 0x2000000
         b7654:	0a00000c 	beq	b768c <TFaxTool::PhaseDPutMCF(long)+0x84>
         b7658:	e3a00002 	mov	r0, #2	; 0x2
         b765c:	e5840270 	str	r0, [r4, #624]	; fField624
         b7660:	e1a00004 	mov	r0, r4
         b7664:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b7668:	ea658db2 	b	1a1ad38 <TFaxTool::$StartPhaseC(void)>
         b766c:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b7670:	e3100302 	tst	r0, #134217728	; 0x8000000
         b7674:	1a000004 	bne	b768c <TFaxTool::PhaseDPutMCF(long)+0x84>
         b7678:	e3a00007 	mov	r0, #7	; 0x7
         b767c:	e5840280 	str	r0, [r4, #640]	; fField640
         b7680:	e1a00004 	mov	r0, r4
         b7684:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b7688:	ea65bb2f 	b	1a2634c <TFaxTool::$GetCommand(void)>
         b768c:	e1a00004 	mov	r0, r4
         b7690:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b7694:	ea65cfbb 	b	1a2b588 <TFaxTool::$ReStartPhaseB(void)>
         b7698:	e3a0100d 	mov	r1, #13	; 0xd
         b769c:	e2411c56 	sub	r1, r1, #22016	; 0x5600
         b76a0:	e1a00004 	mov	r0, r4
         b76a4:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b76a8:	ea6c2678 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseDProcessReceivedPageConfirmation(void)
 * Address: 000b76ac
 */
TFaxTool::PhaseDProcessReceivedPageConfirmation(void) {
    /*
         b76ac:	e1a0c00d 	mov	ip, sp
         b76b0:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b76b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b76b8:	e1a04000 	mov	r4, r0
         b76bc:	e590026c 	ldr	r0, [r0, #620]	; fField620
         b76c0:	e3100402 	tst	r0, #33554432	; 0x2000000
         b76c4:	e3a05003 	mov	r5, #3	; 0x3
         b76c8:	0a000004 	beq	b76e0 <TFaxTool::PhaseDProcessReceivedPageConfirmation(void)+0x34>
         b76cc:	e5845284 	str	r5, [r4, #644]	; fField644
         b76d0:	e1a00004 	mov	r0, r4
         b76d4:	e3a02048 	mov	r2, #72	; 0x48
         b76d8:	e3a0108c 	mov	r1, #140	; 0x8c
         b76dc:	ea000040 	b	b77e4 <TFaxTool::PhaseDProcessReceivedPageConfirmation(void)+0x138>
         b76e0:	e5940188 	ldr	r0, [r4, #392]	; fField392
         b76e4:	e5d01015 	ldrb	r1, [r0, #21]
         b76e8:	e3310000 	teq	r1, #0	; 0x0
         b76ec:	1a000004 	bne	b7704 <TFaxTool::PhaseDProcessReceivedPageConfirmation(void)+0x58>
         b76f0:	e1a00004 	mov	r0, r4
         b76f4:	eb6574ca 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b76f8:	e3a000e9 	mov	r0, #233	; 0xe9
         b76fc:	e2400b0a 	sub	r0, r0, #10240	; 0x2800
         b7700:	ea000039 	b	b77ec <TFaxTool::PhaseDProcessReceivedPageConfirmation(void)+0x140>
         b7704:	e59412ac 	ldr	r1, [r4, #684]	; fField684
         b7708:	e3310002 	teq	r1, #2	; 0x2
         b770c:	13a01000 	movne	r1, #0	; 0x0
         b7710:	03a01001 	moveq	r1, #1	; 0x1
         b7714:	e5c01014 	strb	r1, [r0, #20]
         b7718:	e5940280 	ldr	r0, [r4, #640]	; fField640
         b771c:	e3300006 	teq	r0, #6	; 0x6
         b7720:	0a000016 	beq	b7780 <TFaxTool::PhaseDProcessReceivedPageConfirmation(void)+0xd4>
         b7724:	e3300007 	teq	r0, #7	; 0x7
         b7728:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         b772c:	e330000a 	teq	r0, #10	; 0xa
         b7730:	191ba830 	ldmnedb	fp, {r4, r5, fp, sp, pc}
         b7734:	e1a00004 	mov	r0, r4
         b7738:	eb6574b9 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b773c:	e5845284 	str	r5, [r4, #644]	; fField644
         b7740:	e1a00004 	mov	r0, r4
         b7744:	eb65b6df 	bl	1a252c8 <TFaxTool::$CopyQualityResponse(void)>
         b7748:	e1a01000 	mov	r1, r0
         b774c:	e350008d 	cmp	r0, #141	; 0x8d
         b7750:	0a000007 	beq	b7774 <TFaxTool::PhaseDProcessReceivedPageConfirmation(void)+0xc8>
         b7754:	ca000017 	bgt	b77b8 <TFaxTool::PhaseDProcessReceivedPageConfirmation(void)+0x10c>
         b7758:	e330004c 	teq	r0, #76	; 0x4c
         b775c:	1330004d 	teqne	r0, #77	; 0x4d
         b7760:	0594026c 	ldreq	r0, [r4, #620]	; fField620
         b7764:	03800302 	orreq	r0, r0, #134217728	; 0x8000000
         b7768:	0a000017 	beq	b77cc <TFaxTool::PhaseDProcessReceivedPageConfirmation(void)+0x120>
         b776c:	e330008c 	teq	r0, #140	; 0x8c
         b7770:	1a000016 	bne	b77d0 <TFaxTool::PhaseDProcessReceivedPageConfirmation(void)+0x124>
         b7774:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b7778:	e3800402 	orr	r0, r0, #33554432	; 0x2000000
         b777c:	ea000012 	b	b77cc <TFaxTool::PhaseDProcessReceivedPageConfirmation(void)+0x120>
         b7780:	e1a00004 	mov	r0, r4
         b7784:	e3a01001 	mov	r1, #1	; 0x1
         b7788:	eb65ae8f 	bl	1a231cc <TFaxTool::$AllocateTCBuffer(unsigned char)>
         b778c:	e3a01000 	mov	r1, #0	; 0x0
         b7790:	e5841298 	str	r1, [r4, #664]	; fField664
         b7794:	e5841290 	str	r1, [r4, #656]	; fField656
         b7798:	e3300000 	teq	r0, #0	; 0x0
         b779c:	e5841294 	str	r1, [r4, #660]	; fField660
         b77a0:	1a000011 	bne	b77ec <TFaxTool::PhaseDProcessReceivedPageConfirmation(void)+0x140>
         b77a4:	e3a00001 	mov	r0, #1	; 0x1
         b77a8:	e5840270 	str	r0, [r4, #624]	; fField624
         b77ac:	e1a00004 	mov	r0, r4
         b77b0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b77b4:	ea65bef3 	b	1a27388 <TFaxTool::$GetTrainingCheck(void)>
         b77b8:	e33000cc 	teq	r0, #204	; 0xcc
         b77bc:	133000cd 	teqne	r0, #205	; 0xcd
         b77c0:	1a000002 	bne	b77d0 <TFaxTool::PhaseDProcessReceivedPageConfirmation(void)+0x124>
         b77c4:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b77c8:	e3800301 	orr	r0, r0, #67108864	; 0x4000000
         b77cc:	e584026c 	str	r0, [r4, #620]	; fField620
         b77d0:	e3a00009 	mov	r0, #9	; 0x9
         b77d4:	e584029c 	str	r0, [r4, #668]	; fField668
         b77d8:	e5845284 	str	r5, [r4, #644]	; fField644
         b77dc:	e1a00004 	mov	r0, r4
         b77e0:	e3a02048 	mov	r2, #72	; 0x48
         b77e4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b77e8:	ea65c31e 	b	1a28468 <TFaxTool::$PhaseBPutPostMsgCmd(unsigned char, unsigned long)>
         b77ec:	e1a01000 	mov	r1, r0
         b77f0:	e1a00004 	mov	r0, r4
         b77f4:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b77f8:	ea6c2624 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseEPktComplete(long)
 * Address: 000b77fc
 */
TFaxTool::PhaseEPktComplete(long) {
    /*
         b77fc:	e1a0c00d 	mov	ip, sp
         b7800:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b7804:	e24cb004 	sub	fp, ip, #4	; 0x4
         b7808:	e1a04000 	mov	r4, r0
         b780c:	e1a05001 	mov	r5, r1
         b7810:	eb657483 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         b7814:	e285cdfa 	add	ip, r5, #16000	; 0x3e80
         b7818:	e37c0005 	cmn	ip, #5	; 0x5
         b781c:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         b7820:	e1a00004 	mov	r0, r4
         b7824:	e5941000 	ldr	r1, [r4]
         b7828:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b782c:	e281ff46 	add	pc, r1, #280	; 0x118
    */
}

/**
 * Symbol: TFaxTool::SetDefaultCapabilities(void)
 * Address: 000b7830
 */
TFaxTool::SetDefaultCapabilities(void) {
    /*
         b7830:	e59f1010 	ldr	r1, [pc, #10]	; b7848 <TFaxTool::SetDefaultCapabilities(void)+0x18>
         b7834:	e58012a4 	str	r1, [r0, #676]	; fField676
         b7838:	e59012a8 	ldr	r1, [r0, #680]	; fField680
         b783c:	e3c114ff 	bic	r1, r1, #-16777216	; 0xff000000
         b7840:	e5a012a8 	str	r1, [r0, #680]!	; fField680
         b7844:	e1a0f00e 	mov	pc, lr
         b7848:	0041f880 	subeq	pc, r1, r0, lsl #17
    */
}

/**
 * Symbol: TFaxTool::SetModemCapabilities(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)
 * Address: 000b784c
 */
TFaxTool::SetModemCapabilities(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long) {
    /*
         b784c:	e92d4070 	stmdb	sp!, {r4, r5, r6, lr}
         b7850:	e3a0c000 	mov	ip, #0	; 0x0
         b7854:	e311000e 	tst	r1, #14	; 0xe
         b7858:	e3a0e039 	mov	lr, #57	; 0x39
         b785c:	e24eec5e 	sub	lr, lr, #24064	; 0x5e00
         b7860:	e59d4014 	ldr	r4, [sp, #20]
         b7864:	e59d5010 	ldr	r5, [sp, #16]	; fField16
         b7868:	0a000005 	beq	b7884 <TFaxTool::SetModemCapabilities(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)+0x38>
         b786c:	e311000c 	tst	r1, #12	; 0xc
         b7870:	1a000005 	bne	b788c <TFaxTool::SetModemCapabilities(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)+0x40>
         b7874:	e3130001 	tst	r3, #1	; 0x1
         b7878:	12041001 	andne	r1, r4, #1	; 0x1
         b787c:	13310000 	teqne	r1, #0	; 0x0
         b7880:	1a000001 	bne	b788c <TFaxTool::SetModemCapabilities(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)+0x40>
         b7884:	e1a0c00e 	mov	ip, lr
         b7888:	ea000001 	b	b7894 <TFaxTool::SetModemCapabilities(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)+0x48>
         b788c:	e2800fad 	add	r0, r0, #692	; 0x2b4
         b7890:	e9a00024 	stmib	r0!, {r2, r5}
         b7894:	e1a0000c 	mov	r0, ip
         b7898:	e8bd8070 	ldmia	sp!, {r4, r5, r6, pc}
    */
}

/**
 * Symbol: TFaxTool::FastestDataRate(unsigned long)
 * Address: 000b789c
 */
TFaxTool::FastestDataRate(unsigned long) {
    /*
         b789c:	e3110a01 	tst	r1, #4096	; 0x1000
         b78a0:	13a0000b 	movne	r0, #11	; 0xb
         b78a4:	11a0f00e 	movne	pc, lr
         b78a8:	e3110b02 	tst	r1, #2048	; 0x800
         b78ac:	e3a00003 	mov	r0, #3	; 0x3
         b78b0:	11a0f00e 	movne	pc, lr
         b78b4:	e2112004 	ands	r2, r1, #4	; 0x4
         b78b8:	e2011040 	and	r1, r1, #64	; 0x40
         b78bc:	13310000 	teqne	r1, #0	; 0x0
         b78c0:	11a0f00e 	movne	pc, lr
         b78c4:	e3310000 	teq	r1, #0	; 0x0
         b78c8:	13a00001 	movne	r0, #1	; 0x1
         b78cc:	11a0f00e 	movne	pc, lr
         b78d0:	e1b00002 	movs	r0, r2
         b78d4:	13a00002 	movne	r0, #2	; 0x2
         b78d8:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxTool::GetIdentification(unsigned char const *, unsigned char *const, unsigned long)
 * Address: 000b78dc
 */
TFaxTool::GetIdentification(unsigned char const *, unsigned char *const, unsigned long) {
    /*
         b78dc:	e92d4000 	stmdb	sp!, {lr}
         b78e0:	e3a0c000 	mov	ip, #0	; 0x0
         b78e4:	e3330014 	teq	r3, #20	; 0x14
         b78e8:	13330016 	teqne	r3, #22	; 0x16
         b78ec:	15c2c000 	strneb	ip, [r2]
         b78f0:	18bd8000 	ldmneia	sp!, {pc}
         b78f4:	e3a00013 	mov	r0, #19	; 0x13
         b78f8:	ea000000 	b	b7900 <TFaxTool::GetIdentification(unsigned char const *, unsigned char *const, unsigned long)+0x24>
         b78fc:	e2400001 	sub	r0, r0, #1	; 0x1
         b7900:	e7d13000 	ldrb	r3, [r1, r0]
         b7904:	e3330020 	teq	r3, #32	; 0x20
         b7908:	0afffffb 	beq	b78fc <TFaxTool::GetIdentification(unsigned char const *, unsigned char *const, unsigned long)+0x20>
         b790c:	e3a03000 	mov	r3, #0	; 0x0
         b7910:	e3500000 	cmp	r0, #0	; 0x0
         b7914:	ba000004 	blt	b792c <TFaxTool::GetIdentification(unsigned char const *, unsigned char *const, unsigned long)+0x50>
         b7918:	e7d1e000 	ldrb	lr, [r1, r0]
         b791c:	e7c2e003 	strb	lr, [r2, r3]
         b7920:	e2500001 	subs	r0, r0, #1	; 0x1
         b7924:	e2833001 	add	r3, r3, #1	; 0x1
         b7928:	5afffffa 	bpl	b7918 <TFaxTool::GetIdentification(unsigned char const *, unsigned char *const, unsigned long)+0x3c>
         b792c:	e7c2c003 	strb	ip, [r2, r3]
         b7930:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TFaxTool::SetIdentification(unsigned char const *const, unsigned char *const)
 * Address: 000b7934
 */
TFaxTool::SetIdentification(unsigned char const *const, unsigned char *const) {
    /*
         b7934:	e1a0c00d 	mov	ip, sp
         b7938:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b793c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b7940:	e1a05001 	mov	r5, r1
         b7944:	e1a04002 	mov	r4, r2
         b7948:	e1a00001 	mov	r0, r1
         b794c:	eb6bf857 	bl	1bb5ab0 <$strlen>
         b7950:	e1a01000 	mov	r1, r0
         b7954:	e3a00013 	mov	r0, #19	; 0x13
         b7958:	e3510013 	cmp	r1, #19	; 0x13
         b795c:	ca000004 	bgt	b7974 <TFaxTool::SetIdentification(unsigned char const *const, unsigned char *const)+0x40>
         b7960:	e3a02020 	mov	r2, #32	; 0x20
         b7964:	e7c42000 	strb	r2, [r4, r0]
         b7968:	e2400001 	sub	r0, r0, #1	; 0x1
         b796c:	e1500001 	cmp	r0, r1
         b7970:	aafffffb 	bge	b7964 <TFaxTool::SetIdentification(unsigned char const *const, unsigned char *const)+0x30>
         b7974:	e3a01000 	mov	r1, #0	; 0x0
         b7978:	e3500000 	cmp	r0, #0	; 0x0
         b797c:	b91ba830 	ldmltdb	fp, {r4, r5, fp, sp, pc}
         b7980:	e7d52001 	ldrb	r2, [r5, r1]
         b7984:	e7c42000 	strb	r2, [r4, r0]
         b7988:	e2500001 	subs	r0, r0, #1	; 0x1
         b798c:	e2811001 	add	r1, r1, #1	; 0x1
         b7990:	5afffffa 	bpl	b7980 <TFaxTool::SetIdentification(unsigned char const *const, unsigned char *const)+0x4c>
         b7994:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)
 * Address: 000b7998
 */
TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &) {
    /*
         b7998:	e1a0c00d 	mov	ip, sp
         b799c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b79a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         b79a4:	e1a04000 	mov	r4, r0
         b79a8:	e1a06001 	mov	r6, r1
         b79ac:	e1a05002 	mov	r5, r2
         b79b0:	e3a00003 	mov	r0, #3	; 0x3
         b79b4:	e58402f4 	str	r0, [r4, #756]	; fField756
         b79b8:	e5920000 	ldr	r0, [r2]
         b79bc:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
         b79c0:	e3c00801 	bic	r0, r0, #65536	; 0x10000
         b79c4:	e3800802 	orr	r0, r0, #131072	; 0x20000
         b79c8:	e5820000 	str	r0, [r2]
         b79cc:	e5910000 	ldr	r0, [r1]
         b79d0:	e1a00500 	mov	r0, r0, lsl #10
         b79d4:	e1a00e20 	mov	r0, r0, lsr #28
         b79d8:	e58402b4 	str	r0, [r4, #692]	; fField692
         b79dc:	e59402b8 	ldr	r0, [r4, #696]	; fField696
         b79e0:	e5941324 	ldr	r1, [r4, #804]	; fField804
         b79e4:	e0001001 	and	r1, r0, r1
         b79e8:	e1a00004 	mov	r0, r4
         b79ec:	eb65ba45 	bl	1a26308 <TFaxTool::$FastestDataRate(unsigned long)>
         b79f0:	e59412b4 	ldr	r1, [r4, #692]	; fField692
         b79f4:	e0010000 	and	r0, r1, r0
         b79f8:	e350000b 	cmp	r0, #11	; 0xb
         b79fc:	908ff100 	addls	pc, pc, r0, lsl #2
         b7a00:	ea000029 	b	b7aac <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x114>
         b7a04:	ea000011 	b	b7a50 <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0xb8>
         b7a08:	ea000017 	b	b7a6c <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0xd4>
         b7a0c:	ea00001e 	b	b7a8c <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0xf4>
         b7a10:	ea000015 	b	b7a6c <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0xd4>
         b7a14:	ea000024 	b	b7aac <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x114>
         b7a18:	ea000023 	b	b7aac <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x114>
         b7a1c:	ea000022 	b	b7aac <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x114>
         b7a20:	ea000011 	b	b7a6c <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0xd4>
         b7a24:	ea000020 	b	b7aac <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x114>
         b7a28:	ea00001f 	b	b7aac <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x114>
         b7a2c:	ea00001e 	b	b7aac <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x114>
         b7a30:	e5951000 	ldr	r1, [r5]
         b7a34:	e3c1170f 	bic	r1, r1, #3932160	; 0x3c0000
         b7a38:	e3811602 	orr	r1, r1, #2097152	; 0x200000
         b7a3c:	e3a00de1 	mov	r0, #14400	; 0x3840
         b7a40:	e5851000 	str	r1, [r5]
         b7a44:	e58402b0 	str	r0, [r4, #688]	; fField688
         b7a48:	e3a00a01 	mov	r0, #4096	; 0x1000
         b7a4c:	ea000015 	b	b7aa8 <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x110>
         b7a50:	e5951000 	ldr	r1, [r5]
         b7a54:	e3c1170f 	bic	r1, r1, #3932160	; 0x3c0000
         b7a58:	e3a00e96 	mov	r0, #2400	; 0x960
         b7a5c:	e5851000 	str	r1, [r5]
         b7a60:	e58402b0 	str	r0, [r4, #688]	; fField688
         b7a64:	e3a00002 	mov	r0, #2	; 0x2
         b7a68:	ea00000e 	b	b7aa8 <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x110>
         b7a6c:	e5951000 	ldr	r1, [r5]
         b7a70:	e3c1170f 	bic	r1, r1, #3932160	; 0x3c0000
         b7a74:	e3811701 	orr	r1, r1, #262144	; 0x40000
         b7a78:	e3a00d96 	mov	r0, #9600	; 0x2580
         b7a7c:	e5851000 	str	r1, [r5]
         b7a80:	e58402b0 	str	r0, [r4, #688]	; fField688
         b7a84:	e3a00040 	mov	r0, #64	; 0x40
         b7a88:	ea000006 	b	b7aa8 <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x110>
         b7a8c:	e5951000 	ldr	r1, [r5]
         b7a90:	e3c1170f 	bic	r1, r1, #3932160	; 0x3c0000
         b7a94:	e3811702 	orr	r1, r1, #524288	; 0x80000
         b7a98:	e3a00d4b 	mov	r0, #4800	; 0x12c0
         b7a9c:	e5851000 	str	r1, [r5]
         b7aa0:	e58402b0 	str	r0, [r4, #688]	; fField688
         b7aa4:	e3a00004 	mov	r0, #4	; 0x4
         b7aa8:	e58402a0 	str	r0, [r4, #672]	; fField672
         b7aac:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         b7ab0:	e1a00480 	mov	r0, r0, lsl #9
         b7ab4:	e1a00fa0 	mov	r0, r0, lsr #31
         b7ab8:	e5961000 	ldr	r1, [r6]
         b7abc:	e1a01481 	mov	r1, r1, lsl #9
         b7ac0:	e0001fa1 	and	r1, r0, r1, lsr #31
         b7ac4:	e5952000 	ldr	r2, [r5]
         b7ac8:	e3c22501 	bic	r2, r2, #4194304	; 0x400000
         b7acc:	e1821b01 	orr	r1, r2, r1, lsl #22
         b7ad0:	e5851000 	str	r1, [r5]
         b7ad4:	e3110501 	tst	r1, #4194304	; 0x400000
         b7ad8:	03a00062 	moveq	r0, #98	; 0x62
         b7adc:	13a000c4 	movne	r0, #196	; 0xc4
         b7ae0:	e58402d8 	str	r0, [r4, #728]	; fField728
         b7ae4:	e3a000cc 	mov	r0, #204	; 0xcc
         b7ae8:	e58402d4 	str	r0, [r4, #724]	; fField724
         b7aec:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         b7af0:	e1a00400 	mov	r0, r0, lsl #8
         b7af4:	e1a00fa0 	mov	r0, r0, lsr #31
         b7af8:	e5961000 	ldr	r1, [r6]
         b7afc:	e1a01401 	mov	r1, r1, lsl #8
         b7b00:	e0001fa1 	and	r1, r0, r1, lsr #31
         b7b04:	e5952000 	ldr	r2, [r5]
         b7b08:	e3c22502 	bic	r2, r2, #8388608	; 0x800000
         b7b0c:	e1822b81 	orr	r2, r2, r1, lsl #23
         b7b10:	e5852000 	str	r2, [r5]
         b7b14:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         b7b18:	e1a00b00 	mov	r0, r0, lsl #22
         b7b1c:	e1a01f20 	mov	r1, r0, lsr #30
         b7b20:	e3c22c03 	bic	r2, r2, #768	; 0x300
         b7b24:	e1822401 	orr	r2, r2, r1, lsl #8
         b7b28:	e5852000 	str	r2, [r5]
         b7b2c:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         b7b30:	e1a00a00 	mov	r0, r0, lsl #20
         b7b34:	e1a00f20 	mov	r0, r0, lsr #30
         b7b38:	e3c22b03 	bic	r2, r2, #3072	; 0xc00
         b7b3c:	e1820500 	orr	r0, r2, r0, lsl #10
         b7b40:	e5850000 	str	r0, [r5]
         b7b44:	e5961000 	ldr	r1, [r6]
         b7b48:	e1a01881 	mov	r1, r1, lsl #17
         b7b4c:	e1a0eea1 	mov	lr, r1, lsr #29
         b7b50:	e3a0c005 	mov	ip, #5	; 0x5
         b7b54:	e3a0200a 	mov	r2, #10	; 0xa
         b7b58:	e3a01014 	mov	r1, #20	; 0x14
         b7b5c:	e3a03028 	mov	r3, #40	; 0x28
         b7b60:	e35e0007 	cmp	lr, #7	; 0x7
         b7b64:	908ff10e 	addls	pc, pc, lr, lsl #2
         b7b68:	ea000023 	b	b7bfc <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x264>
         b7b6c:	ea00001a 	b	b7bdc <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x244>
         b7b70:	ea00000b 	b	b7ba4 <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x20c>
         b7b74:	ea000011 	b	b7bc0 <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x228>
         b7b78:	ea00000e 	b	b7bb8 <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x220>
         b7b7c:	ea00001a 	b	b7bec <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x254>
         b7b80:	ea000013 	b	b7bd4 <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x23c>
         b7b84:	ea000004 	b	b7b9c <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x204>
         b7b88:	e3800a07 	orr	r0, r0, #28672	; 0x7000
         b7b8c:	e5850000 	str	r0, [r5]
         b7b90:	e3a00000 	mov	r0, #0	; 0x0
         b7b94:	e58402f8 	str	r0, [r4, #760]	; fField760
         b7b98:	ea000017 	b	b7bfc <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x264>
         b7b9c:	e3100501 	tst	r0, #4194304	; 0x400000
         b7ba0:	0a000006 	beq	b7bc0 <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x228>
         b7ba4:	e3c00a07 	bic	r0, r0, #28672	; 0x7000
         b7ba8:	e3800a01 	orr	r0, r0, #4096	; 0x1000
         b7bac:	e5850000 	str	r0, [r5]
         b7bb0:	e584c2f8 	str	ip, [r4, #760]	; fField760
         b7bb4:	ea000010 	b	b7bfc <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x264>
         b7bb8:	e3100501 	tst	r0, #4194304	; 0x400000
         b7bbc:	0a000006 	beq	b7bdc <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x244>
         b7bc0:	e3c00a07 	bic	r0, r0, #28672	; 0x7000
         b7bc4:	e3800a02 	orr	r0, r0, #8192	; 0x2000
         b7bc8:	e5850000 	str	r0, [r5]
         b7bcc:	e58422f8 	str	r2, [r4, #760]	; fField760
         b7bd0:	ea000009 	b	b7bfc <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x264>
         b7bd4:	e3100501 	tst	r0, #4194304	; 0x400000
         b7bd8:	0a000003 	beq	b7bec <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x254>
         b7bdc:	e3c00a07 	bic	r0, r0, #28672	; 0x7000
         b7be0:	e5850000 	str	r0, [r5]
         b7be4:	e58412f8 	str	r1, [r4, #760]	; fField760
         b7be8:	ea000003 	b	b7bfc <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x264>
         b7bec:	e3c00a07 	bic	r0, r0, #28672	; 0x7000
         b7bf0:	e3800901 	orr	r0, r0, #16384	; 0x4000
         b7bf4:	e5850000 	str	r0, [r5]
         b7bf8:	e58432f8 	str	r3, [r4, #760]	; fField760
         b7bfc:	e5960000 	ldr	r0, [r6]
         b7c00:	e3100902 	tst	r0, #32768	; 0x8000
         b7c04:	0a000028 	beq	b7cac <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x314>
         b7c08:	e59402f4 	ldr	r0, [r4, #756]	; fField756
         b7c0c:	e2800001 	add	r0, r0, #1	; 0x1
         b7c10:	e58402f4 	str	r0, [r4, #756]	; fField756
         b7c14:	e5950000 	ldr	r0, [r5]
         b7c18:	e3800902 	orr	r0, r0, #32768	; 0x8000
         b7c1c:	e5850000 	str	r0, [r5]
         b7c20:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         b7c24:	e5962000 	ldr	r2, [r6]
         b7c28:	e0011002 	and	r1, r1, r2
         b7c2c:	e2011001 	and	r1, r1, #1	; 0x1
         b7c30:	e3c00001 	bic	r0, r0, #1	; 0x1
         b7c34:	e1802001 	orr	r2, r0, r1
         b7c38:	e5852000 	str	r2, [r5]
         b7c3c:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         b7c40:	e1a00f00 	mov	r0, r0, lsl #30
         b7c44:	e1a00fa0 	mov	r0, r0, lsr #31
         b7c48:	e5961000 	ldr	r1, [r6]
         b7c4c:	e1a01f01 	mov	r1, r1, lsl #30
         b7c50:	e0000fa1 	and	r0, r0, r1, lsr #31
         b7c54:	e3c22002 	bic	r2, r2, #2	; 0x2
         b7c58:	e1820080 	orr	r0, r2, r0, lsl #1
         b7c5c:	e5850000 	str	r0, [r5]
         b7c60:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         b7c64:	e1a01e81 	mov	r1, r1, lsl #29
         b7c68:	e1a02fa1 	mov	r2, r1, lsr #31
         b7c6c:	e5961000 	ldr	r1, [r6]
         b7c70:	e1a01e81 	mov	r1, r1, lsl #29
         b7c74:	e0021fa1 	and	r1, r2, r1, lsr #31
         b7c78:	e3c00004 	bic	r0, r0, #4	; 0x4
         b7c7c:	e1800101 	orr	r0, r0, r1, lsl #2
         b7c80:	e3c00008 	bic	r0, r0, #8	; 0x8
         b7c84:	e5850000 	str	r0, [r5]
         b7c88:	e5b412a4 	ldr	r1, [r4, #676]!	; fField676
         b7c8c:	e1a01d81 	mov	r1, r1, lsl #27
         b7c90:	e1a01fa1 	mov	r1, r1, lsr #31
         b7c94:	e5962000 	ldr	r2, [r6]
         b7c98:	e1a02d82 	mov	r2, r2, lsl #27
         b7c9c:	e0011fa2 	and	r1, r1, r2, lsr #31
         b7ca0:	e3c00010 	bic	r0, r0, #16	; 0x10
         b7ca4:	e1800201 	orr	r0, r0, r1, lsl #4
         b7ca8:	ea000002 	b	b7cb8 <TFaxTool::BuildDCS(TT30Capabilities &, TT30Capabilities &)+0x320>
         b7cac:	e5950000 	ldr	r0, [r5]
         b7cb0:	e3c00902 	bic	r0, r0, #32768	; 0x8000
         b7cb4:	e3c0001f 	bic	r0, r0, #31	; 0x1f
         b7cb8:	e3c01060 	bic	r1, r0, #96	; 0x60
         b7cbc:	e3c11080 	bic	r1, r1, #128	; 0x80
         b7cc0:	e5851000 	str	r1, [r5]
         b7cc4:	e2851004 	add	r1, r5, #4	; 0x4
         b7cc8:	e5910000 	ldr	r0, [r1]
         b7ccc:	e3c004ff 	bic	r0, r0, #-16777216	; 0xff000000
         b7cd0:	e5810000 	str	r0, [r1]
         b7cd4:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::StartPhaseD(void)
 * Address: 000b7cd8
 */
TFaxTool::StartPhaseD(void) {
    /*
         b7cd8:	e1a0c00d 	mov	ip, sp
         b7cdc:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b7ce0:	e24cb004 	sub	fp, ip, #4	; 0x4
         b7ce4:	e3a01008 	mov	r1, #8	; 0x8
         b7ce8:	e3a04000 	mov	r4, #0	; 0x0
         b7cec:	e5902818 	ldr	r2, [r0, #2072]	; fField2072
         b7cf0:	e3320004 	teq	r2, #4	; 0x4
         b7cf4:	1a000003 	bne	b7d08 <TFaxTool::StartPhaseD(void)+0x30>
         b7cf8:	e5801270 	str	r1, [r0, #624]	; fField624
         b7cfc:	e3a01007 	mov	r1, #7	; 0x7
         b7d00:	eb659873 	bl	1a1ded4 <TFaxTool::$C2StateUpdate(unsigned long)>
         b7d04:	ea000014 	b	b7d5c <TFaxTool::StartPhaseD(void)+0x84>
         b7d08:	e3320008 	teq	r2, #8	; 0x8
         b7d0c:	1a000003 	bne	b7d20 <TFaxTool::StartPhaseD(void)+0x48>
         b7d10:	e5801270 	str	r1, [r0, #624]	; fField624
         b7d14:	e3a01007 	mov	r1, #7	; 0x7
         b7d18:	eb659450 	bl	1a1ce60 <TFaxTool::$C20StateUpdate(unsigned long)>
         b7d1c:	ea00000e 	b	b7d5c <TFaxTool::StartPhaseD(void)+0x84>
         b7d20:	e3a01003 	mov	r1, #3	; 0x3
         b7d24:	e5801270 	str	r1, [r0, #624]	; fField624
         b7d28:	e590226c 	ldr	r2, [r0, #620]	; fField620
         b7d2c:	e3120008 	tst	r2, #8	; 0x8
         b7d30:	0a000005 	beq	b7d4c <TFaxTool::StartPhaseD(void)+0x74>
         b7d34:	e5801284 	str	r1, [r0, #644]	; fField644
         b7d38:	e3a01001 	mov	r1, #1	; 0x1
         b7d3c:	e5801280 	str	r1, [r0, #640]	; fField640
         b7d40:	e3a01037 	mov	r1, #55	; 0x37
         b7d44:	eb65c5cf 	bl	1a29488 <TFaxTool::$PhaseDPutPostMsgCmd(unsigned long)>
         b7d48:	ea000003 	b	b7d5c <TFaxTool::StartPhaseD(void)+0x84>
         b7d4c:	e3a01007 	mov	r1, #7	; 0x7
         b7d50:	e5801280 	str	r1, [r0, #640]	; fField640
         b7d54:	e58042ac 	str	r4, [r0, #684]	; fField684
         b7d58:	eb65b97b 	bl	1a2634c <TFaxTool::$GetCommand(void)>
         b7d5c:	e1a00004 	mov	r0, r4
         b7d60:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::CompatibleRemoteRcvr(TT30Capabilities &)
 * Address: 000b7d64
 */
TFaxTool::CompatibleRemoteRcvr(TT30Capabilities &) {
    /*
         b7d64:	e5912000 	ldr	r2, [r1]
         b7d68:	e3120802 	tst	r2, #131072	; 0x20000
         b7d6c:	e3a03000 	mov	r3, #0	; 0x0
         b7d70:	0a000024 	beq	b7e08 <TFaxTool::CompatibleRemoteRcvr(TT30Capabilities &)+0xa4>
         b7d74:	e3120902 	tst	r2, #32768	; 0x8000
         b7d78:	1202c080 	andne	ip, r2, #128	; 0x80
         b7d7c:	133c0000 	teqne	ip, #0	; 0x0
         b7d80:	15911004 	ldrne	r1, [r1, #4]	; fField4
         b7d84:	1201c102 	andne	ip, r1, #-2147483648	; 0x80000000
         b7d88:	133c0000 	teqne	ip, #0	; 0x0
         b7d8c:	12011401 	andne	r1, r1, #16777216	; 0x1000000
         b7d90:	13310000 	teqne	r1, #0	; 0x0
         b7d94:	01a01b02 	moveq	r1, r2, lsl #22
         b7d98:	01a01f21 	moveq	r1, r1, lsr #30
         b7d9c:	13a01000 	movne	r1, #0	; 0x0
         b7da0:	e59002a4 	ldr	r0, [r0, #676]	; fField676
         b7da4:	e1a0cb00 	mov	ip, r0, lsl #22
         b7da8:	e1a0cf2c 	mov	ip, ip, lsr #30
         b7dac:	e33c0001 	teq	ip, #1	; 0x1
         b7db0:	0a000004 	beq	b7dc8 <TFaxTool::CompatibleRemoteRcvr(TT30Capabilities &)+0x64>
         b7db4:	e33c0002 	teq	ip, #2	; 0x2
         b7db8:	02011002 	andeq	r1, r1, #2	; 0x2
         b7dbc:	03310000 	teqeq	r1, #0	; 0x0
         b7dc0:	0a000010 	beq	b7e08 <TFaxTool::CompatibleRemoteRcvr(TT30Capabilities &)+0xa4>
         b7dc4:	ea000001 	b	b7dd0 <TFaxTool::CompatibleRemoteRcvr(TT30Capabilities &)+0x6c>
         b7dc8:	e3110003 	tst	r1, #3	; 0x3
         b7dcc:	0a00000d 	beq	b7e08 <TFaxTool::CompatibleRemoteRcvr(TT30Capabilities &)+0xa4>
         b7dd0:	e1a00a00 	mov	r0, r0, lsl #20
         b7dd4:	e1a01f20 	mov	r1, r0, lsr #30
         b7dd8:	e3a00001 	mov	r0, #1	; 0x1
         b7ddc:	e3310001 	teq	r1, #1	; 0x1
         b7de0:	0a000005 	beq	b7dfc <TFaxTool::CompatibleRemoteRcvr(TT30Capabilities &)+0x98>
         b7de4:	e3310002 	teq	r1, #2	; 0x2
         b7de8:	11a0f00e 	movne	pc, lr
         b7dec:	e2022b03 	and	r2, r2, #3072	; 0xc00
         b7df0:	e3320b02 	teq	r2, #2048	; 0x800
         b7df4:	01a0f00e 	moveq	pc, lr
         b7df8:	ea000002 	b	b7e08 <TFaxTool::CompatibleRemoteRcvr(TT30Capabilities &)+0xa4>
         b7dfc:	e1a01a02 	mov	r1, r2, lsl #20
         b7e00:	e1300f21 	teq	r0, r1, lsr #30
         b7e04:	01a0f00e 	moveq	pc, lr
         b7e08:	e1a00003 	mov	r0, r3
         b7e0c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxTool::CompatibleRemoteXmtr(TT30Capabilities &)
 * Address: 000b7e10
 */
TFaxTool::CompatibleRemoteXmtr(TT30Capabilities &) {
    /*
         b7e10:	e5910000 	ldr	r0, [r1]
         b7e14:	e3100801 	tst	r0, #65536	; 0x10000
         b7e18:	13a00001 	movne	r0, #1	; 0x1
         b7e1c:	03a00000 	moveq	r0, #0	; 0x0
         b7e20:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxTool::ValidateDCS(TT30Capabilities &)
 * Address: 000b7e24
 */
TFaxTool::ValidateDCS(TT30Capabilities &) {
    /*
         b7e24:	e92d4000 	stmdb	sp!, {lr}
         b7e28:	e3a0c000 	mov	ip, #0	; 0x0
         b7e2c:	e5911000 	ldr	r1, [r1]
         b7e30:	e1a03401 	mov	r3, r1, lsl #8
         b7e34:	e3a02001 	mov	r2, #1	; 0x1
         b7e38:	e1320fa3 	teq	r2, r3, lsr #31
         b7e3c:	1a000003 	bne	b7e50 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x2c>
         b7e40:	e59032a4 	ldr	r3, [r0, #676]	; fField676
         b7e44:	e1a03403 	mov	r3, r3, lsl #8
         b7e48:	e1320fa3 	teq	r2, r3, lsr #31
         b7e4c:	1a000064 	bne	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7e50:	e3110501 	tst	r1, #4194304	; 0x400000
         b7e54:	0a000002 	beq	b7e64 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x40>
         b7e58:	e59032a4 	ldr	r3, [r0, #676]	; fField676
         b7e5c:	e3130501 	tst	r3, #4194304	; 0x400000
         b7e60:	0a00005f 	beq	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7e64:	e1a03801 	mov	r3, r1, lsl #16
         b7e68:	e1320fa3 	teq	r2, r3, lsr #31
         b7e6c:	01a03e81 	moveq	r3, r1, lsl #29
         b7e70:	01320fa3 	teqeq	r2, r3, lsr #31
         b7e74:	1a000003 	bne	b7e88 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x64>
         b7e78:	e59032a4 	ldr	r3, [r0, #676]	; fField676
         b7e7c:	e1a03e83 	mov	r3, r3, lsl #29
         b7e80:	e1320fa3 	teq	r2, r3, lsr #31
         b7e84:	1a000056 	bne	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7e88:	e1a03b01 	mov	r3, r1, lsl #22
         b7e8c:	e1b0ef23 	movs	lr, r3, lsr #30
         b7e90:	e3a03002 	mov	r3, #2	; 0x2
         b7e94:	0a00000d 	beq	b7ed0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0xac>
         b7e98:	e33e0001 	teq	lr, #1	; 0x1
         b7e9c:	0a000007 	beq	b7ec0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x9c>
         b7ea0:	e33e0002 	teq	lr, #2	; 0x2
         b7ea4:	1a000009 	bne	b7ed0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0xac>
         b7ea8:	e590e2a4 	ldr	lr, [r0, #676]	; fField676
         b7eac:	e1a0eb0e 	mov	lr, lr, lsl #22
         b7eb0:	e1320f2e 	teq	r2, lr, lsr #30
         b7eb4:	11330f2e 	teqne	r3, lr, lsr #30
         b7eb8:	1a000049 	bne	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7ebc:	ea000003 	b	b7ed0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0xac>
         b7ec0:	e590e2a4 	ldr	lr, [r0, #676]	; fField676
         b7ec4:	e1a0eb0e 	mov	lr, lr, lsl #22
         b7ec8:	e1320f2e 	teq	r2, lr, lsr #30
         b7ecc:	1a000044 	bne	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7ed0:	e1a0ea01 	mov	lr, r1, lsl #20
         b7ed4:	e1b0ef2e 	movs	lr, lr, lsr #30
         b7ed8:	0a00000d 	beq	b7f14 <TFaxTool::ValidateDCS(TT30Capabilities &)+0xf0>
         b7edc:	e33e0001 	teq	lr, #1	; 0x1
         b7ee0:	0a000006 	beq	b7f00 <TFaxTool::ValidateDCS(TT30Capabilities &)+0xdc>
         b7ee4:	e33e0002 	teq	lr, #2	; 0x2
         b7ee8:	1a000009 	bne	b7f14 <TFaxTool::ValidateDCS(TT30Capabilities &)+0xf0>
         b7eec:	e59022a4 	ldr	r2, [r0, #676]	; fField676
         b7ef0:	e1a02a02 	mov	r2, r2, lsl #20
         b7ef4:	e1330f22 	teq	r3, r2, lsr #30
         b7ef8:	1a000039 	bne	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7efc:	ea000004 	b	b7f14 <TFaxTool::ValidateDCS(TT30Capabilities &)+0xf0>
         b7f00:	e590e2a4 	ldr	lr, [r0, #676]	; fField676
         b7f04:	e1a0ea0e 	mov	lr, lr, lsl #20
         b7f08:	e1320f2e 	teq	r2, lr, lsr #30
         b7f0c:	11330f2e 	teqne	r3, lr, lsr #30
         b7f10:	1a000033 	bne	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7f14:	e1a01501 	mov	r1, r1, lsl #10
         b7f18:	e1a01e21 	mov	r1, r1, lsr #28
         b7f1c:	e351000b 	cmp	r1, #11	; 0xb
         b7f20:	908ff101 	addls	pc, pc, r1, lsl #2
         b7f24:	ea00002d 	b	b7fe0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1bc>
         b7f28:	ea00000d 	b	b7f64 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x140>
         b7f2c:	ea000010 	b	b7f74 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x150>
         b7f30:	ea00000b 	b	b7f64 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x140>
         b7f34:	ea000016 	b	b7f94 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x170>
         b7f38:	ea000019 	b	b7fa4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x180>
         b7f3c:	ea000027 	b	b7fe0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1bc>
         b7f40:	ea00001b 	b	b7fb4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x190>
         b7f44:	ea000025 	b	b7fe0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1bc>
         b7f48:	ea00001d 	b	b7fc4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1a0>
         b7f4c:	ea00000c 	b	b7f84 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x160>
         b7f50:	ea00001f 	b	b7fd4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1b0>
         b7f54:	e59002bc 	ldr	r0, [r0, #700]	; fField700
         b7f58:	e3100010 	tst	r0, #16	; 0x10
         b7f5c:	0a000020 	beq	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7f60:	ea00001e 	b	b7fe0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1bc>
         b7f64:	e59002bc 	ldr	r0, [r0, #700]	; fField700
         b7f68:	e3100004 	tst	r0, #4	; 0x4
         b7f6c:	0a00001c 	beq	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7f70:	ea00001a 	b	b7fe0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1bc>
         b7f74:	e59002bc 	ldr	r0, [r0, #700]	; fField700
         b7f78:	e3100040 	tst	r0, #64	; 0x40
         b7f7c:	0a000018 	beq	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7f80:	ea000016 	b	b7fe0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1bc>
         b7f84:	e59002bc 	ldr	r0, [r0, #700]	; fField700
         b7f88:	e3100080 	tst	r0, #128	; 0x80
         b7f8c:	0a000014 	beq	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7f90:	ea000012 	b	b7fe0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1bc>
         b7f94:	e59002bc 	ldr	r0, [r0, #700]	; fField700
         b7f98:	e3100008 	tst	r0, #8	; 0x8
         b7f9c:	0a000010 	beq	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7fa0:	ea00000e 	b	b7fe0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1bc>
         b7fa4:	e59002bc 	ldr	r0, [r0, #700]	; fField700
         b7fa8:	e3100b02 	tst	r0, #2048	; 0x800
         b7fac:	0a00000c 	beq	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7fb0:	ea00000a 	b	b7fe0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1bc>
         b7fb4:	e59002bc 	ldr	r0, [r0, #700]	; fField700
         b7fb8:	e3100c02 	tst	r0, #512	; 0x200
         b7fbc:	0a000008 	beq	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7fc0:	ea000006 	b	b7fe0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1bc>
         b7fc4:	e59002bc 	ldr	r0, [r0, #700]	; fField700
         b7fc8:	e3100a01 	tst	r0, #4096	; 0x1000
         b7fcc:	0a000004 	beq	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7fd0:	ea000002 	b	b7fe0 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1bc>
         b7fd4:	e59002bc 	ldr	r0, [r0, #700]	; fField700
         b7fd8:	e3100b01 	tst	r0, #1024	; 0x400
         b7fdc:	0a000000 	beq	b7fe4 <TFaxTool::ValidateDCS(TT30Capabilities &)+0x1c0>
         b7fe0:	e3a0c001 	mov	ip, #1	; 0x1
         b7fe4:	e1a0000c 	mov	r0, ip
         b7fe8:	e8bd8000 	ldmia	sp!, {pc}
    */
}

/**
 * Symbol: TFaxTool::SetSessionParameters(TT30Capabilities &)
 * Address: 000b7fec
 */
TFaxTool::SetSessionParameters(TT30Capabilities &) {
    /*
         b7fec:	e1a0c00d 	mov	ip, sp
         b7ff0:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b7ff4:	e24cb004 	sub	fp, ip, #4	; 0x4
         b7ff8:	e1a04000 	mov	r4, r0
         b7ffc:	e2800fbb 	add	r0, r0, #748	; 0x2ec
         b8000:	e8911008 	ldmia	r1, {r3, ip}
         b8004:	e8801008 	stmia	r0, {r3, ip}
         b8008:	e5910000 	ldr	r0, [r1]
         b800c:	e3100501 	tst	r0, #4194304	; 0x400000
         b8010:	03a00062 	moveq	r0, #98	; 0x62
         b8014:	13a000c4 	movne	r0, #196	; 0xc4
         b8018:	e58402d8 	str	r0, [r4, #728]	; fField728
         b801c:	e3a000cc 	mov	r0, #204	; 0xcc
         b8020:	e58402d4 	str	r0, [r4, #724]	; fField724
         b8024:	e5910000 	ldr	r0, [r1]
         b8028:	e1a00b00 	mov	r0, r0, lsl #22
         b802c:	e1b00f20 	movs	r0, r0, lsr #30
         b8030:	03a000d8 	moveq	r0, #216	; 0xd8
         b8034:	058402dc 	streq	r0, [r4, #732]	; fField732
         b8038:	03a00038 	moveq	r0, #56	; 0x38
         b803c:	02800b01 	addeq	r0, r0, #1024	; 0x400
         b8040:	0a000009 	beq	b806c <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x80>
         b8044:	e3300001 	teq	r0, #1	; 0x1
         b8048:	03a00c01 	moveq	r0, #256	; 0x100
         b804c:	058402dc 	streq	r0, [r4, #732]	; fField732
         b8050:	03a00c05 	moveq	r0, #1280	; 0x500
         b8054:	0a000004 	beq	b806c <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x80>
         b8058:	e3300002 	teq	r0, #2	; 0x2
         b805c:	1a000003 	bne	b8070 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x84>
         b8060:	e3a00e13 	mov	r0, #304	; 0x130
         b8064:	e58402dc 	str	r0, [r4, #732]	; fField732
         b8068:	e3a00e5f 	mov	r0, #1520	; 0x5f0
         b806c:	e58402e0 	str	r0, [r4, #736]	; fField736
         b8070:	e5910000 	ldr	r0, [r1]
         b8074:	e1a00500 	mov	r0, r0, lsl #10
         b8078:	e1a0ce20 	mov	ip, r0, lsr #28
         b807c:	e3a03d96 	mov	r3, #9600	; 0x2580
         b8080:	e3a02ec2 	mov	r2, #3104	; 0xc20
         b8084:	e2822a01 	add	r2, r2, #4096	; 0x1000
         b8088:	e3a01de1 	mov	r1, #14400	; 0x3840
         b808c:	e2820d4b 	add	r0, r2, #4800	; 0x12c0
         b8090:	e35c000b 	cmp	ip, #11	; 0xb
         b8094:	908ff10c 	addls	pc, pc, ip, lsl #2
         b8098:	ea00002a 	b	b8148 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x15c>
         b809c:	ea00000c 	b	b80d4 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0xe8>
         b80a0:	ea000013 	b	b80f4 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x108>
         b80a4:	ea00000e 	b	b80e4 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0xf8>
         b80a8:	ea000017 	b	b810c <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x120>
         b80ac:	ea000019 	b	b8118 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x12c>
         b80b0:	ea000024 	b	b8148 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x15c>
         b80b4:	ea00001a 	b	b8124 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x138>
         b80b8:	ea000022 	b	b8148 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x15c>
         b80bc:	ea00001b 	b	b8130 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x144>
         b80c0:	ea00000e 	b	b8100 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x114>
         b80c4:	ea00001c 	b	b813c <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x150>
         b80c8:	e3a00010 	mov	r0, #16	; 0x10
         b80cc:	e58422b0 	str	r2, [r4, #688]	; fField688
         b80d0:	ea00001b 	b	b8144 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x158>
         b80d4:	e3a00e96 	mov	r0, #2400	; 0x960
         b80d8:	e58402b0 	str	r0, [r4, #688]	; fField688
         b80dc:	e3a00002 	mov	r0, #2	; 0x2
         b80e0:	ea000017 	b	b8144 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x158>
         b80e4:	e3a00d4b 	mov	r0, #4800	; 0x12c0
         b80e8:	e58402b0 	str	r0, [r4, #688]	; fField688
         b80ec:	e3a00004 	mov	r0, #4	; 0x4
         b80f0:	ea000013 	b	b8144 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x158>
         b80f4:	e3a00040 	mov	r0, #64	; 0x40
         b80f8:	e58432b0 	str	r3, [r4, #688]	; fField688
         b80fc:	ea000010 	b	b8144 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x158>
         b8100:	e3a00080 	mov	r0, #128	; 0x80
         b8104:	e58432b0 	str	r3, [r4, #688]	; fField688
         b8108:	ea00000d 	b	b8144 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x158>
         b810c:	e3a00008 	mov	r0, #8	; 0x8
         b8110:	e58422b0 	str	r2, [r4, #688]	; fField688
         b8114:	ea00000a 	b	b8144 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x158>
         b8118:	e3a00b02 	mov	r0, #2048	; 0x800
         b811c:	e58412b0 	str	r1, [r4, #688]	; fField688
         b8120:	ea000007 	b	b8144 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x158>
         b8124:	e58402b0 	str	r0, [r4, #688]	; fField688
         b8128:	e3a00c02 	mov	r0, #512	; 0x200
         b812c:	ea000004 	b	b8144 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x158>
         b8130:	e3a00a01 	mov	r0, #4096	; 0x1000
         b8134:	e58412b0 	str	r1, [r4, #688]	; fField688
         b8138:	ea000001 	b	b8144 <TFaxTool::SetSessionParameters(TT30Capabilities &)+0x158>
         b813c:	e58402b0 	str	r0, [r4, #688]	; fField688
         b8140:	e3a00b01 	mov	r0, #1024	; 0x400
         b8144:	e58402a0 	str	r0, [r4, #672]	; fField672
         b8148:	e59403ec 	ldr	r0, [r4, #1004]	; fField1004
         b814c:	e0801080 	add	r1, r0, r0, lsl #1
         b8150:	e0611380 	rsb	r1, r1, r0, lsl #7
         b8154:	e1a01301 	mov	r1, r1, lsl #6
         b8158:	e59402b0 	ldr	r0, [r4, #688]	; fField688
         b815c:	eb6be9f9 	bl	1bb2948 <$__rt_udiv>
         b8160:	e2800fe2 	add	r0, r0, #904	; 0x388
         b8164:	e2800a01 	add	r0, r0, #4096	; 0x1000
         b8168:	e5a402c0 	str	r0, [r4, #704]!	; fField704
         b816c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::CopyQualityResponse(void)
 * Address: 000b8170
 */
TFaxTool::CopyQualityResponse(void) {
    /*
         b8170:	e1a0c00d 	mov	ip, sp
         b8174:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b8178:	e24cb004 	sub	fp, ip, #4	; 0x4
         b817c:	e590126c 	ldr	r1, [r0, #620]	; fField620
         b8180:	e2014004 	and	r4, r1, #4	; 0x4
         b8184:	e5902510 	ldr	r2, [r0, #1296]	; fField1296
         b8188:	e3320000 	teq	r2, #0	; 0x0
         b818c:	0a000007 	beq	b81b0 <TFaxTool::CopyQualityResponse(void)+0x40>
         b8190:	e5900514 	ldr	r0, [r0, #1300]	; fField1300
         b8194:	e0801080 	add	r1, r0, r0, lsl #1
         b8198:	e0611380 	rsb	r1, r1, r0, lsl #7
         b819c:	e1a01181 	mov	r1, r1, lsl #3
         b81a0:	e1a00002 	mov	r0, r2
         b81a4:	eb6be9e7 	bl	1bb2948 <$__rt_udiv>
         b81a8:	e3500034 	cmp	r0, #52	; 0x34
         b81ac:	8a000003 	bhi	b81c0 <TFaxTool::CopyQualityResponse(void)+0x50>
         b81b0:	e3340000 	teq	r4, #0	; 0x0
         b81b4:	03a0008c 	moveq	r0, #140	; 0x8c
         b81b8:	13a0008d 	movne	r0, #141	; 0x8d
         b81bc:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b81c0:	e3500098 	cmp	r0, #152	; 0x98
         b81c4:	8a000003 	bhi	b81d8 <TFaxTool::CopyQualityResponse(void)+0x68>
         b81c8:	e3340000 	teq	r4, #0	; 0x0
         b81cc:	03a000cc 	moveq	r0, #204	; 0xcc
         b81d0:	13a000cd 	movne	r0, #205	; 0xcd
         b81d4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b81d8:	e3340000 	teq	r4, #0	; 0x0
         b81dc:	03a0004c 	moveq	r0, #76	; 0x4c
         b81e0:	13a0004d 	movne	r0, #77	; 0x4d
         b81e4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::PutCommandToRcv(unsigned long)
 * Address: 000b81e8
 */
TFaxTool::PutCommandToRcv(unsigned long) {
    /*
         b81e8:	e1a0c00d 	mov	ip, sp
         b81ec:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b81f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         b81f4:	e1a04000 	mov	r4, r0
         b81f8:	e1a05001 	mov	r5, r1
         b81fc:	e3a00002 	mov	r0, #2	; 0x2
         b8200:	e584029c 	str	r0, [r4, #668]	; fField668
         b8204:	e1a00004 	mov	r0, r4
         b8208:	e3a01000 	mov	r1, #0	; 0x0
         b820c:	eb65abee 	bl	1a231cc <TFaxTool::$AllocateTCBuffer(unsigned char)>
         b8210:	e3300000 	teq	r0, #0	; 0x0
         b8214:	1a000018 	bne	b827c <TFaxTool::PutCommandToRcv(unsigned long)+0x94>
         b8218:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b821c:	e3100004 	tst	r0, #4	; 0x4
         b8220:	03a01042 	moveq	r1, #66	; 0x42
         b8224:	13a01043 	movne	r1, #67	; 0x43
         b8228:	e3a03000 	mov	r3, #0	; 0x0
         b822c:	e92d0008 	stmdb	sp!, {r3}
         b8230:	e2842e7f 	add	r2, r4, #2032	; 0x7f0
         b8234:	e1a00004 	mov	r0, r4
         b8238:	e3a03014 	mov	r3, #20	; 0x14
         b823c:	eb654ced 	bl	1a0b5f8 <TFaxTool::$BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)>
         b8240:	e28dd004 	add	sp, sp, #4	; 0x4
         b8244:	e3300000 	teq	r0, #0	; 0x0
         b8248:	1a00000b 	bne	b827c <TFaxTool::PutCommandToRcv(unsigned long)+0x94>
         b824c:	e3a03001 	mov	r3, #1	; 0x1
         b8250:	e1a02005 	mov	r2, r5
         b8254:	e92d000c 	stmdb	sp!, {r2, r3}
         b8258:	e2843fea 	add	r3, r4, #936	; 0x3a8
         b825c:	e2833b01 	add	r3, r3, #1024	; 0x400
         b8260:	e1a00004 	mov	r0, r4
         b8264:	e3a02001 	mov	r2, #1	; 0x1
         b8268:	e3a01f45 	mov	r1, #276	; 0x114
         b826c:	eb65c48d 	bl	1a294a8 <TFaxTool::$PostTransPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b8270:	e28dd008 	add	sp, sp, #8	; 0x8
         b8274:	e3300000 	teq	r0, #0	; 0x0
         b8278:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         b827c:	e1a01000 	mov	r1, r0
         b8280:	e1a00004 	mov	r0, r4
         b8284:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b8288:	ea6c2380 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PutCommandToXmit(unsigned long)
 * Address: 000b828c
 */
TFaxTool::PutCommandToXmit(unsigned long) {
    /*
         b828c:	e1a0c00d 	mov	ip, sp
         b8290:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b8294:	e24cb004 	sub	fp, ip, #4	; 0x4
         b8298:	e1a04000 	mov	r4, r0
         b829c:	e1a05001 	mov	r5, r1
         b82a0:	e3a00001 	mov	r0, #1	; 0x1
         b82a4:	e3a03000 	mov	r3, #0	; 0x0
         b82a8:	e584029c 	str	r0, [r4, #668]	; fField668
         b82ac:	e92d0008 	stmdb	sp!, {r3}
         b82b0:	e2842e7f 	add	r2, r4, #2032	; 0x7f0
         b82b4:	e1a00004 	mov	r0, r4
         b82b8:	e3a03014 	mov	r3, #20	; 0x14
         b82bc:	e3a01041 	mov	r1, #65	; 0x41
         b82c0:	eb654ccc 	bl	1a0b5f8 <TFaxTool::$BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)>
         b82c4:	e28dd004 	add	sp, sp, #4	; 0x4
         b82c8:	e3300000 	teq	r0, #0	; 0x0
         b82cc:	1a00000b 	bne	b8300 <TFaxTool::PutCommandToXmit(unsigned long)+0x74>
         b82d0:	e3a03001 	mov	r3, #1	; 0x1
         b82d4:	e1a02005 	mov	r2, r5
         b82d8:	e92d000c 	stmdb	sp!, {r2, r3}
         b82dc:	e2843fea 	add	r3, r4, #936	; 0x3a8
         b82e0:	e2833b01 	add	r3, r3, #1024	; 0x400
         b82e4:	e1a00004 	mov	r0, r4
         b82e8:	e3a02001 	mov	r2, #1	; 0x1
         b82ec:	e3a01f45 	mov	r1, #276	; 0x114
         b82f0:	eb65c46c 	bl	1a294a8 <TFaxTool::$PostTransPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b82f4:	e28dd008 	add	sp, sp, #8	; 0x8
         b82f8:	e3300000 	teq	r0, #0	; 0x0
         b82fc:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         b8300:	e1a01000 	mov	r1, r0
         b8304:	e1a00004 	mov	r0, r4
         b8308:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b830c:	ea6c235f 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PutTrainingCheck(unsigned long)
 * Address: 000b8310
 */
TFaxTool::PutTrainingCheck(unsigned long) {
    /*
         b8310:	e1a0c00d 	mov	ip, sp
         b8314:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         b8318:	e24cb004 	sub	fp, ip, #4	; 0x4
         b831c:	e1a04000 	mov	r4, r0
         b8320:	e1a05001 	mov	r5, r1
         b8324:	e3a060e9 	mov	r6, #233	; 0xe9
         b8328:	e2466b0a 	sub	r6, r6, #10240	; 0x2800
         b832c:	e3a00008 	mov	r0, #8	; 0x8
         b8330:	e5840278 	str	r0, [r4, #632]	; fField632
         b8334:	e2840fea 	add	r0, r4, #936	; 0x3a8
         b8338:	e2800b01 	add	r0, r0, #1024	; 0x400
         b833c:	e1a08000 	mov	r8, r0
         b8340:	eb6cbc23 	bl	1be73d4 <CBufferList::$DeleteAll(void)>
         b8344:	e3a00000 	mov	r0, #0	; 0x0
         b8348:	eb6cafad 	bl	1be4204 <CBufferSegment::$__ct(void)>
         b834c:	e1b07000 	movs	r7, r0
         b8350:	0a000020 	beq	b83d8 <TFaxTool::PutTrainingCheck(unsigned long)+0xc8>
         b8354:	e3e03000 	mvn	r3, #0	; 0x0
         b8358:	e3a02000 	mov	r2, #0	; 0x0
         b835c:	e92d000c 	stmdb	sp!, {r2, r3}
         b8360:	e1a00007 	mov	r0, r7
         b8364:	e3a03000 	mov	r3, #0	; 0x0
         b8368:	e2842fcd 	add	r2, r4, #820	; 0x334
         b836c:	e8920006 	ldmia	r2, {r1, r2}
         b8370:	eb6cc44d 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         b8374:	e28dd008 	add	sp, sp, #8	; 0x8
         b8378:	e1b06000 	movs	r6, r0
         b837c:	1a000015 	bne	b83d8 <TFaxTool::PutTrainingCheck(unsigned long)+0xc8>
         b8380:	e1a00008 	mov	r0, r8
         b8384:	e1a01007 	mov	r1, r7
         b8388:	eb6cc85d 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         b838c:	e59402a0 	ldr	r0, [r4, #672]	; fField672
         b8390:	e1a01000 	mov	r1, r0
         b8394:	e3300a01 	teq	r0, #4096	; 0x1000
         b8398:	03a00b02 	moveq	r0, #2048	; 0x800
         b839c:	0a000001 	beq	b83a8 <TFaxTool::PutTrainingCheck(unsigned long)+0x98>
         b83a0:	e3310b01 	teq	r1, #1024	; 0x400
         b83a4:	03a00c02 	moveq	r0, #512	; 0x200
         b83a8:	e3a03001 	mov	r3, #1	; 0x1
         b83ac:	e1a02005 	mov	r2, r5
         b83b0:	e92d000c 	stmdb	sp!, {r2, r3}
         b83b4:	e1a03008 	mov	r3, r8
         b83b8:	e1a02000 	mov	r2, r0
         b83bc:	e1a00004 	mov	r0, r4
         b83c0:	e3a01015 	mov	r1, #21	; 0x15
         b83c4:	e2811c01 	add	r1, r1, #256	; 0x100
         b83c8:	eb65c436 	bl	1a294a8 <TFaxTool::$PostTransPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b83cc:	e28dd008 	add	sp, sp, #8	; 0x8
         b83d0:	e1b06000 	movs	r6, r0
         b83d4:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         b83d8:	e1a01006 	mov	r1, r6
         b83dc:	e1a00004 	mov	r0, r4
         b83e0:	e91b69f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, lr}
         b83e4:	ea6c2329 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PutTrainingCheckComplete(long)
 * Address: 000b83e8
 */
TFaxTool::PutTrainingCheckComplete(long) {
    /*
         b83e8:	e1a0c00d 	mov	ip, sp
         b83ec:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b83f0:	e24cb004 	sub	fp, ip, #4	; 0x4
         b83f4:	e1a04000 	mov	r4, r0
         b83f8:	e3a00002 	mov	r0, #2	; 0x2
         b83fc:	e3310000 	teq	r1, #0	; 0x0
         b8400:	e584029c 	str	r0, [r4, #668]	; fField668
         b8404:	e1a00004 	mov	r0, r4
         b8408:	13a01000 	movne	r1, #0	; 0x0
         b840c:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         b8410:	1a65cc74 	bne	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
         b8414:	eb65610c 	bl	1a1084c <TFaxTool::$FreeTCBuffer(void)>
         b8418:	e3a00009 	mov	r0, #9	; 0x9
         b841c:	e5840278 	str	r0, [r4, #632]	; fField632
         b8420:	e3a00003 	mov	r0, #3	; 0x3
         b8424:	e5840284 	str	r0, [r4, #644]	; fField644
         b8428:	e1a00004 	mov	r0, r4
         b842c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b8430:	ea656525 	b	1a118cc <TFaxTool::$GetResponse(void)>
    */
}

/**
 * Symbol: TFaxTool::GetTrainingCheck(void)
 * Address: 000b8434
 */
TFaxTool::GetTrainingCheck(void) {
    /*
         b8434:	e1a0c00d 	mov	ip, sp
         b8438:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         b843c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b8440:	e1a04000 	mov	r4, r0
         b8444:	e3a00006 	mov	r0, #6	; 0x6
         b8448:	e5840278 	str	r0, [r4, #632]	; fField632
         b844c:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b8450:	e3c00b01 	bic	r0, r0, #1024	; 0x400
         b8454:	e584026c 	str	r0, [r4, #620]	; fField620
         b8458:	e2840f96 	add	r0, r4, #600	; 0x258
         b845c:	e2800b01 	add	r0, r0, #1024	; 0x400
         b8460:	e1a07000 	mov	r7, r0
         b8464:	eb6cd070 	bl	1bec62c <CBufferList::$RemoveAll(void)>
         b8468:	e3a00000 	mov	r0, #0	; 0x0
         b846c:	eb6caf64 	bl	1be4204 <CBufferSegment::$__ct(void)>
         b8470:	e1b06000 	movs	r6, r0
         b8474:	0a000021 	beq	b8500 <TFaxTool::GetTrainingCheck(void)+0xcc>
         b8478:	e3e03000 	mvn	r3, #0	; 0x0
         b847c:	e3a02000 	mov	r2, #0	; 0x0
         b8480:	e92d000c 	stmdb	sp!, {r2, r3}
         b8484:	e1a00006 	mov	r0, r6
         b8488:	e3a03000 	mov	r3, #0	; 0x0
         b848c:	e2842fcd 	add	r2, r4, #820	; 0x334
         b8490:	e8920006 	ldmia	r2, {r1, r2}
         b8494:	eb6cc404 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         b8498:	e28dd008 	add	sp, sp, #8	; 0x8
         b849c:	e1b05000 	movs	r5, r0
         b84a0:	1a000016 	bne	b8500 <TFaxTool::GetTrainingCheck(void)+0xcc>
         b84a4:	e1a00007 	mov	r0, r7
         b84a8:	e1a01006 	mov	r1, r6
         b84ac:	eb6cc814 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         b84b0:	e59402a0 	ldr	r0, [r4, #672]	; fField672
         b84b4:	e1a01000 	mov	r1, r0
         b84b8:	e3300a01 	teq	r0, #4096	; 0x1000
         b84bc:	03a00b02 	moveq	r0, #2048	; 0x800
         b84c0:	0a000001 	beq	b84cc <TFaxTool::GetTrainingCheck(void)+0x98>
         b84c4:	e3310b01 	teq	r1, #1024	; 0x400
         b84c8:	03a00c02 	moveq	r0, #512	; 0x200
         b84cc:	e3a03000 	mov	r3, #0	; 0x0
         b84d0:	e3a02fd6 	mov	r2, #856	; 0x358
         b84d4:	e2822b06 	add	r2, r2, #6144	; 0x1800
         b84d8:	e92d000c 	stmdb	sp!, {r2, r3}
         b84dc:	e1a03007 	mov	r3, r7
         b84e0:	e1a02000 	mov	r2, r0
         b84e4:	e1a00004 	mov	r0, r4
         b84e8:	e3a01017 	mov	r1, #23	; 0x17
         b84ec:	e2811c01 	add	r1, r1, #256	; 0x100
         b84f0:	eb65c3e9 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b84f4:	e28dd008 	add	sp, sp, #8	; 0x8
         b84f8:	e1b05000 	movs	r5, r0
         b84fc:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b8500:	e1a01005 	mov	r1, r5
         b8504:	e1a00004 	mov	r0, r4
         b8508:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         b850c:	ea6c22df 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::StartPhaseE(void)
 * Address: 000b8510
 */
TFaxTool::StartPhaseE(void) {
    /*
         b8510:	e1a0c00d 	mov	ip, sp
         b8514:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b8518:	e24cb004 	sub	fp, ip, #4	; 0x4
         b851c:	e1a04000 	mov	r4, r0
         b8520:	e3a00004 	mov	r0, #4	; 0x4
         b8524:	e5840270 	str	r0, [r4, #624]	; fField624
         b8528:	e5940018 	ldr	r0, [r4, #24]	; fField24
         b852c:	e3c00201 	bic	r0, r0, #268435456	; 0x10000000
         b8530:	e5840018 	str	r0, [r4, #24]	; fField24
         b8534:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b8538:	e3100004 	tst	r0, #4	; 0x4
         b853c:	03a010fa 	moveq	r1, #250	; 0xfa
         b8540:	13a010fb 	movne	r1, #251	; 0xfb
         b8544:	e3a03001 	mov	r3, #1	; 0x1
         b8548:	e92d0008 	stmdb	sp!, {r3}
         b854c:	e1a00004 	mov	r0, r4
         b8550:	e3a03000 	mov	r3, #0	; 0x0
         b8554:	e3a02000 	mov	r2, #0	; 0x0
         b8558:	eb654c26 	bl	1a0b5f8 <TFaxTool::$BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)>
         b855c:	e28dd004 	add	sp, sp, #4	; 0x4
         b8560:	e3300000 	teq	r0, #0	; 0x0
         b8564:	1a000014 	bne	b85bc <TFaxTool::StartPhaseE(void)+0xac>
         b8568:	e3a03001 	mov	r3, #1	; 0x1
         b856c:	e3a0200a 	mov	r2, #10	; 0xa
         b8570:	e92d000c 	stmdb	sp!, {r2, r3}
         b8574:	e2843fea 	add	r3, r4, #936	; 0x3a8
         b8578:	e2833b01 	add	r3, r3, #1024	; 0x400
         b857c:	e1a00004 	mov	r0, r4
         b8580:	e3a02001 	mov	r2, #1	; 0x1
         b8584:	e3a01f45 	mov	r1, #276	; 0x114
         b8588:	eb65c3c6 	bl	1a294a8 <TFaxTool::$PostTransPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b858c:	e28dd008 	add	sp, sp, #8	; 0x8
         b8590:	e3300000 	teq	r0, #0	; 0x0
         b8594:	1a000008 	bne	b85bc <TFaxTool::StartPhaseE(void)+0xac>
         b8598:	e1a00004 	mov	r0, r4
         b859c:	e3a03066 	mov	r3, #102	; 0x66
         b85a0:	e2833c0e 	add	r3, r3, #3584	; 0xe00
         b85a4:	e3a02fee 	mov	r2, #952	; 0x3b8
         b85a8:	e2822b02 	add	r2, r2, #2048	; 0x800
         b85ac:	e3a01012 	mov	r1, #18	; 0x12
         b85b0:	eb65795f 	bl	1a16b34 <TFaxTool::$PostTimer(unsigned long, unsigned long, TimeUnits)>
         b85b4:	e3300000 	teq	r0, #0	; 0x0
         b85b8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b85bc:	e3a00001 	mov	r0, #1	; 0x1
         b85c0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::GetTrainingCheckComplete(long)
 * Address: 000b85c4
 */
TFaxTool::GetTrainingCheckComplete(long) {
    /*
         b85c4:	e1a0c00d 	mov	ip, sp
         b85c8:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         b85cc:	e24cb004 	sub	fp, ip, #4	; 0x4
         b85d0:	e1a04000 	mov	r4, r0
         b85d4:	e3a00003 	mov	r0, #3	; 0x3
         b85d8:	e3a09007 	mov	r9, #7	; 0x7
         b85dc:	e5840284 	str	r0, [r4, #644]	; fField644
         b85e0:	e2848e6a 	add	r8, r4, #1696	; 0x6a0
         b85e4:	e3a05006 	mov	r5, #6	; 0x6
         b85e8:	e2855c01 	add	r5, r5, #256	; 0x100
         b85ec:	e3a0a008 	mov	sl, #8	; 0x8
         b85f0:	e2847f9e 	add	r7, r4, #632	; 0x278
         b85f4:	e2877b01 	add	r7, r7, #1024	; 0x400
         b85f8:	e2846f96 	add	r6, r4, #600	; 0x258
         b85fc:	e2866b01 	add	r6, r6, #1024	; 0x400
         b8600:	e3310000 	teq	r1, #0	; 0x0
         b8604:	0a000016 	beq	b8664 <TFaxTool::GetTrainingCheckComplete(long)+0xa0>
         b8608:	e5849278 	str	r9, [r4, #632]	; fField632
         b860c:	e1a00004 	mov	r0, r4
         b8610:	eb65608d 	bl	1a1084c <TFaxTool::$FreeTCBuffer(void)>
         b8614:	e1a00006 	mov	r0, r6
         b8618:	eb6cbb6d 	bl	1be73d4 <CBufferList::$DeleteAll(void)>
         b861c:	e3e03000 	mvn	r3, #0	; 0x0
         b8620:	e3a02000 	mov	r2, #0	; 0x0
         b8624:	e92d000c 	stmdb	sp!, {r2, r3}
         b8628:	e1a01008 	mov	r1, r8
         b862c:	e1a00007 	mov	r0, r7
         b8630:	e3a03000 	mov	r3, #0	; 0x0
         b8634:	e1a02005 	mov	r2, r5
         b8638:	eb6cc39b 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         b863c:	e28dd008 	add	sp, sp, #8	; 0x8
         b8640:	e1b05000 	movs	r5, r0
         b8644:	1a000079 	bne	b8830 <TFaxTool::GetTrainingCheckComplete(long)+0x26c>
         b8648:	e1a01007 	mov	r1, r7
         b864c:	e1a00006 	mov	r0, r6
         b8650:	eb6cc7ab 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         b8654:	e584a29c 	str	sl, [r4, #668]	; fField668
         b8658:	e1a00004 	mov	r0, r4
         b865c:	e3a02048 	mov	r2, #72	; 0x48
         b8660:	ea00003b 	b	b8754 <TFaxTool::GetTrainingCheckComplete(long)+0x190>
         b8664:	e1a00006 	mov	r0, r6
         b8668:	e5961000 	ldr	r1, [r6]
         b866c:	e1a0e00f 	mov	lr, pc
         b8670:	e281f03c 	add	pc, r1, #60	; 0x3c
         b8674:	e5941298 	ldr	r1, [r4, #664]	; fField664
         b8678:	e0800001 	add	r0, r0, r1
         b867c:	e5840298 	str	r0, [r4, #664]	; fField664
         b8680:	e1a00006 	mov	r0, r6
         b8684:	e5961000 	ldr	r1, [r6]
         b8688:	e1a0e00f 	mov	lr, pc
         b868c:	e281f03c 	add	pc, r1, #60	; 0x3c
         b8690:	e1a01000 	mov	r1, r0
         b8694:	e1a00004 	mov	r0, r4
         b8698:	eb65cff2 	bl	1a2c668 <TFaxTool::$VerifyTrainingCheck(unsigned long)>
         b869c:	e5d405b0 	ldrb	r0, [r4, #1456]	; fField1456
         b86a0:	e3300000 	teq	r0, #0	; 0x0
         b86a4:	0a000047 	beq	b87c8 <TFaxTool::GetTrainingCheckComplete(long)+0x204>
         b86a8:	e1a00004 	mov	r0, r4
         b86ac:	eb656066 	bl	1a1084c <TFaxTool::$FreeTCBuffer(void)>
         b86b0:	e1a00006 	mov	r0, r6
         b86b4:	eb6cbb46 	bl	1be73d4 <CBufferList::$DeleteAll(void)>
         b86b8:	e3e03000 	mvn	r3, #0	; 0x0
         b86bc:	e3a02000 	mov	r2, #0	; 0x0
         b86c0:	e92d000c 	stmdb	sp!, {r2, r3}
         b86c4:	e1a01008 	mov	r1, r8
         b86c8:	e1a00007 	mov	r0, r7
         b86cc:	e3a03000 	mov	r3, #0	; 0x0
         b86d0:	e1a02005 	mov	r2, r5
         b86d4:	eb6cc374 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         b86d8:	e28dd008 	add	sp, sp, #8	; 0x8
         b86dc:	e1b05000 	movs	r5, r0
         b86e0:	1a000052 	bne	b8830 <TFaxTool::GetTrainingCheckComplete(long)+0x26c>
         b86e4:	e1a01007 	mov	r1, r7
         b86e8:	e1a00006 	mov	r0, r6
         b86ec:	eb6cc784 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         b86f0:	e59412b0 	ldr	r1, [r4, #688]	; fField688
         b86f4:	e1a00004 	mov	r0, r4
         b86f8:	eb65b703 	bl	1a2630c <TFaxTool::$FigureTCSize(unsigned long)>
         b86fc:	e1a05000 	mov	r5, r0
         b8700:	e0801180 	add	r1, r0, r0, lsl #3
         b8704:	e0811200 	add	r1, r1, r0, lsl #4
         b8708:	e3a00064 	mov	r0, #100	; 0x64
         b870c:	eb6be88d 	bl	1bb2948 <$__rt_udiv>
         b8710:	e0852000 	add	r2, r5, r0
         b8714:	e5941298 	ldr	r1, [r4, #664]	; fField664
         b8718:	e1510002 	cmp	r1, r2
         b871c:	8a000008 	bhi	b8744 <TFaxTool::GetTrainingCheckComplete(long)+0x180>
         b8720:	e0450000 	sub	r0, r5, r0
         b8724:	e1510000 	cmp	r1, r0
         b8728:	3a000005 	bcc	b8744 <TFaxTool::GetTrainingCheckComplete(long)+0x180>
         b872c:	e1a01085 	mov	r1, r5, lsl #1
         b8730:	e3a00003 	mov	r0, #3	; 0x3
         b8734:	e5946294 	ldr	r6, [r4, #660]	; fField660
         b8738:	eb6be882 	bl	1bb2948 <$__rt_udiv>
         b873c:	e1560000 	cmp	r6, r0
         b8740:	2a000005 	bcs	b875c <TFaxTool::GetTrainingCheckComplete(long)+0x198>
         b8744:	e5849278 	str	r9, [r4, #632]	; fField632
         b8748:	e584a29c 	str	sl, [r4, #668]	; fField668
         b874c:	e1a00004 	mov	r0, r4
         b8750:	e3a0200a 	mov	r2, #10	; 0xa
         b8754:	e3a01044 	mov	r1, #68	; 0x44
         b8758:	ea000018 	b	b87c0 <TFaxTool::GetTrainingCheckComplete(long)+0x1fc>
         b875c:	e3a0100e 	mov	r1, #14	; 0xe
         b8760:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b8764:	e3800b41 	orr	r0, r0, #66560	; 0x10400
         b8768:	e584026c 	str	r0, [r4, #620]	; fField620
         b876c:	e3a00001 	mov	r0, #1	; 0x1
         b8770:	e584027c 	str	r0, [r4, #636]	; fField636
         b8774:	e3a00000 	mov	r0, #0	; 0x0
         b8778:	e58403f8 	str	r0, [r4, #1016]	; fField1016
         b877c:	e5841278 	str	r1, [r4, #632]	; fField632
         b8780:	e5c4049d 	strb	r0, [r4, #1181]	; fField1181
         b8784:	e5c40445 	strb	r0, [r4, #1093]	; fField1093
         b8788:	e1a00004 	mov	r0, r4
         b878c:	eb65bf33 	bl	1a28460 <TFaxTool::$PhaseBProcessOptions(void)>
         b8790:	e5940018 	ldr	r0, [r4, #24]	; fField24
         b8794:	e3100040 	tst	r0, #64	; 0x40
         b8798:	0a000004 	beq	b87b0 <TFaxTool::GetTrainingCheckComplete(long)+0x1ec>
         b879c:	e1a00004 	mov	r0, r4
         b87a0:	e3a01000 	mov	r1, #0	; 0x0
         b87a4:	e5942000 	ldr	r2, [r4]
         b87a8:	e1a0e00f 	mov	lr, pc
         b87ac:	e282f05c 	add	pc, r2, #92	; 0x5c
         b87b0:	e584929c 	str	r9, [r4, #668]	; fField668
         b87b4:	e1a00004 	mov	r0, r4
         b87b8:	e3a0200a 	mov	r2, #10	; 0xa
         b87bc:	e3a01084 	mov	r1, #132	; 0x84
         b87c0:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         b87c4:	ea65bf27 	b	1a28468 <TFaxTool::$PhaseBPutPostMsgCmd(unsigned char, unsigned long)>
         b87c8:	e1a00006 	mov	r0, r6
         b87cc:	e5961000 	ldr	r1, [r6]
         b87d0:	e1a0e00f 	mov	lr, pc
         b87d4:	e281f028 	add	pc, r1, #40	; 0x28
         b87d8:	e59402a0 	ldr	r0, [r4, #672]	; fField672
         b87dc:	e1a01000 	mov	r1, r0
         b87e0:	e3300a01 	teq	r0, #4096	; 0x1000
         b87e4:	03a00b02 	moveq	r0, #2048	; 0x800
         b87e8:	0a000001 	beq	b87f4 <TFaxTool::GetTrainingCheckComplete(long)+0x230>
         b87ec:	e3310b01 	teq	r1, #1024	; 0x400
         b87f0:	03a00c02 	moveq	r0, #512	; 0x200
         b87f4:	e3a03000 	mov	r3, #0	; 0x0
         b87f8:	e3a02fd6 	mov	r2, #856	; 0x358
         b87fc:	e2822b06 	add	r2, r2, #6144	; 0x1800
         b8800:	e92d000c 	stmdb	sp!, {r2, r3}
         b8804:	e1a03006 	mov	r3, r6
         b8808:	e1a02000 	mov	r2, r0
         b880c:	e1a00004 	mov	r0, r4
         b8810:	e3a01017 	mov	r1, #23	; 0x17
         b8814:	e2811c01 	add	r1, r1, #256	; 0x100
         b8818:	eb65c31f 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b881c:	e28dd008 	add	sp, sp, #8	; 0x8
         b8820:	e1b05000 	movs	r5, r0
         b8824:	091baff0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         b8828:	e1a00004 	mov	r0, r4
         b882c:	eb656006 	bl	1a1084c <TFaxTool::$FreeTCBuffer(void)>
         b8830:	e1a01005 	mov	r1, r5
         b8834:	e1a00004 	mov	r0, r4
         b8838:	e91b6ff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, lr}
         b883c:	ea6c2213 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseBPutPostMsgCmd(unsigned char, unsigned long)
 * Address: 000b8840
 */
TFaxTool::PhaseBPutPostMsgCmd(unsigned char, unsigned long) {
    /*
         b8840:	e1a0c00d 	mov	ip, sp
         b8844:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b8848:	e24cb004 	sub	fp, ip, #4	; 0x4
         b884c:	e1a04000 	mov	r4, r0
         b8850:	e1a05002 	mov	r5, r2
         b8854:	e20110ff 	and	r1, r1, #255	; 0xff
         b8858:	e3a03001 	mov	r3, #1	; 0x1
         b885c:	e92d0008 	stmdb	sp!, {r3}
         b8860:	e3a03000 	mov	r3, #0	; 0x0
         b8864:	e3a02000 	mov	r2, #0	; 0x0
         b8868:	eb654b62 	bl	1a0b5f8 <TFaxTool::$BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)>
         b886c:	e28dd004 	add	sp, sp, #4	; 0x4
         b8870:	e3300000 	teq	r0, #0	; 0x0
         b8874:	1a00000b 	bne	b88a8 <TFaxTool::PhaseBPutPostMsgCmd(unsigned char, unsigned long)+0x68>
         b8878:	e3a03001 	mov	r3, #1	; 0x1
         b887c:	e1a02005 	mov	r2, r5
         b8880:	e92d000c 	stmdb	sp!, {r2, r3}
         b8884:	e2843fea 	add	r3, r4, #936	; 0x3a8
         b8888:	e2833b01 	add	r3, r3, #1024	; 0x400
         b888c:	e1a00004 	mov	r0, r4
         b8890:	e3a02001 	mov	r2, #1	; 0x1
         b8894:	e3a01f45 	mov	r1, #276	; 0x114
         b8898:	eb65c302 	bl	1a294a8 <TFaxTool::$PostTransPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b889c:	e28dd008 	add	sp, sp, #8	; 0x8
         b88a0:	e3300000 	teq	r0, #0	; 0x0
         b88a4:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         b88a8:	e1a01000 	mov	r1, r0
         b88ac:	e1a00004 	mov	r0, r4
         b88b0:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b88b4:	ea6c21f5 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PutInitialId(unsigned long)
 * Address: 000b88b8
 */
TFaxTool::PutInitialId(unsigned long) {
    /*
         b88b8:	e1a0c00d 	mov	ip, sp
         b88bc:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b88c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         b88c4:	e1a04000 	mov	r4, r0
         b88c8:	e1a05001 	mov	r5, r1
         b88cc:	e3a00004 	mov	r0, #4	; 0x4
         b88d0:	e3a03000 	mov	r3, #0	; 0x0
         b88d4:	e584029c 	str	r0, [r4, #668]	; fField668
         b88d8:	e92d0008 	stmdb	sp!, {r3}
         b88dc:	e2842e7f 	add	r2, r4, #2032	; 0x7f0
         b88e0:	e1a00004 	mov	r0, r4
         b88e4:	e3a03014 	mov	r3, #20	; 0x14
         b88e8:	e3a01040 	mov	r1, #64	; 0x40
         b88ec:	eb654b41 	bl	1a0b5f8 <TFaxTool::$BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)>
         b88f0:	e28dd004 	add	sp, sp, #4	; 0x4
         b88f4:	e3300000 	teq	r0, #0	; 0x0
         b88f8:	1a00000b 	bne	b892c <TFaxTool::PutInitialId(unsigned long)+0x74>
         b88fc:	e3a03001 	mov	r3, #1	; 0x1
         b8900:	e1a02005 	mov	r2, r5
         b8904:	e92d000c 	stmdb	sp!, {r2, r3}
         b8908:	e2843fea 	add	r3, r4, #936	; 0x3a8
         b890c:	e2833b01 	add	r3, r3, #1024	; 0x400
         b8910:	e1a00004 	mov	r0, r4
         b8914:	e3a02001 	mov	r2, #1	; 0x1
         b8918:	e3a01f45 	mov	r1, #276	; 0x114
         b891c:	eb65c2e1 	bl	1a294a8 <TFaxTool::$PostTransPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b8920:	e28dd008 	add	sp, sp, #8	; 0x8
         b8924:	e3300000 	teq	r0, #0	; 0x0
         b8928:	091ba830 	ldmeqdb	fp, {r4, r5, fp, sp, pc}
         b892c:	e1a01000 	mov	r1, r0
         b8930:	e1a00004 	mov	r0, r4
         b8934:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b8938:	ea6c21d4 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::GetCommand(void)
 * Address: 000b893c
 */
TFaxTool::GetCommand(void) {
    /*
         b893c:	e1a0c00d 	mov	ip, sp
         b8940:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b8944:	e24cb004 	sub	fp, ip, #4	; 0x4
         b8948:	e1a04000 	mov	r4, r0
         b894c:	e3a00006 	mov	r0, #6	; 0x6
         b8950:	e584029c 	str	r0, [r4, #668]	; fField668
         b8954:	e3a00001 	mov	r0, #1	; 0x1
         b8958:	e3a03000 	mov	r3, #0	; 0x0
         b895c:	e3a02f8b 	mov	r2, #556	; 0x22c
         b8960:	e2822b06 	add	r2, r2, #6144	; 0x1800
         b8964:	e5840284 	str	r0, [r4, #644]	; fField644
         b8968:	e92d000c 	stmdb	sp!, {r2, r3}
         b896c:	e2843f96 	add	r3, r4, #600	; 0x258
         b8970:	e2833b01 	add	r3, r3, #1024	; 0x400
         b8974:	e1a00004 	mov	r0, r4
         b8978:	e3a02001 	mov	r2, #1	; 0x1
         b897c:	e3a01016 	mov	r1, #22	; 0x16
         b8980:	e2811c01 	add	r1, r1, #256	; 0x100
         b8984:	eb65c2c4 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b8988:	e28dd008 	add	sp, sp, #8	; 0x8
         b898c:	e3300000 	teq	r0, #0	; 0x0
         b8990:	11a01000 	movne	r1, r0
         b8994:	11a00004 	movne	r0, r4
         b8998:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         b899c:	1a6c21bb 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         b89a0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::GetResponse(void)
 * Address: 000b89a4
 */
TFaxTool::GetResponse(void) {
    /*
         b89a4:	e1a0c00d 	mov	ip, sp
         b89a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b89ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         b89b0:	e1a04000 	mov	r4, r0
         b89b4:	e3a03000 	mov	r3, #0	; 0x0
         b89b8:	e3a020b2 	mov	r2, #178	; 0xb2
         b89bc:	e2822b03 	add	r2, r2, #3072	; 0xc00
         b89c0:	e92d000c 	stmdb	sp!, {r2, r3}
         b89c4:	e2803f96 	add	r3, r0, #600	; 0x258
         b89c8:	e2833b01 	add	r3, r3, #1024	; 0x400
         b89cc:	e3a02001 	mov	r2, #1	; 0x1
         b89d0:	e3a01016 	mov	r1, #22	; 0x16
         b89d4:	e2811c01 	add	r1, r1, #256	; 0x100
         b89d8:	eb65c2af 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b89dc:	e28dd008 	add	sp, sp, #8	; 0x8
         b89e0:	e3300000 	teq	r0, #0	; 0x0
         b89e4:	1a000008 	bne	b8a0c <TFaxTool::GetResponse(void)+0x68>
         b89e8:	e1a00004 	mov	r0, r4
         b89ec:	e3a03066 	mov	r3, #102	; 0x66
         b89f0:	e2833c0e 	add	r3, r3, #3584	; 0xe00
         b89f4:	e3a02f59 	mov	r2, #356	; 0x164
         b89f8:	e2822b06 	add	r2, r2, #6144	; 0x1800
         b89fc:	e3a01007 	mov	r1, #7	; 0x7
         b8a00:	eb65784b 	bl	1a16b34 <TFaxTool::$PostTimer(unsigned long, unsigned long, TimeUnits)>
         b8a04:	e3300000 	teq	r0, #0	; 0x0
         b8a08:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b8a0c:	e1a01000 	mov	r1, r0
         b8a10:	e1a00004 	mov	r0, r4
         b8a14:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b8a18:	ea6c219c 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::RetransCommand(unsigned long)
 * Address: 000b8a1c
 */
TFaxTool::RetransCommand(unsigned long) {
    /*
         b8a1c:	e1a0c00d 	mov	ip, sp
         b8a20:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b8a24:	e24cb004 	sub	fp, ip, #4	; 0x4
         b8a28:	e1a04000 	mov	r4, r0
         b8a2c:	e1a02001 	mov	r2, r1
         b8a30:	e5903270 	ldr	r3, [r0, #624]	; fField624
         b8a34:	e3330001 	teq	r3, #1	; 0x1
         b8a38:	0594029c 	ldreq	r0, [r4, #668]	; fField668
         b8a3c:	03300005 	teqeq	r0, #5	; 0x5
         b8a40:	01a00004 	moveq	r0, r4
         b8a44:	03a0100a 	moveq	r1, #10	; 0xa
         b8a48:	02411c56 	subeq	r1, r1, #22016	; 0x5600
         b8a4c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         b8a50:	0a65ba4b 	beq	1a27384 <TFaxTool::$GetTrainingCheckComplete(long)>
         b8a54:	e5940284 	ldr	r0, [r4, #644]	; fField644
         b8a58:	e2500001 	subs	r0, r0, #1	; 0x1
         b8a5c:	e5840284 	str	r0, [r4, #644]	; fField644
         b8a60:	5a00000f 	bpl	b8aa4 <TFaxTool::RetransCommand(unsigned long)+0x88>
         b8a64:	e594029c 	ldr	r0, [r4, #668]	; fField668
         b8a68:	e3300006 	teq	r0, #6	; 0x6
         b8a6c:	1a000005 	bne	b8a88 <TFaxTool::RetransCommand(unsigned long)+0x6c>
         b8a70:	e59402ac 	ldr	r0, [r4, #684]	; fField684
         b8a74:	e3300001 	teq	r0, #1	; 0x1
         b8a78:	01a00004 	moveq	r0, r4
         b8a7c:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         b8a80:	0a6588ab 	beq	1a1ad34 <TFaxTool::$StartPhaseB(void)>
         b8a84:	ea000003 	b	b8a98 <TFaxTool::RetransCommand(unsigned long)+0x7c>
         b8a88:	e3300004 	teq	r0, #4	; 0x4
         b8a8c:	05940018 	ldreq	r0, [r4, #24]	; fField24
         b8a90:	03800201 	orreq	r0, r0, #268435456	; 0x10000000
         b8a94:	05840018 	streq	r0, [r4, #24]	; fField24
         b8a98:	e59f0000 	ldr	r0, [pc, #0]	; b8aa0 <TFaxTool::RetransCommand(unsigned long)+0x84>
         b8a9c:	ea000058 	b	b8c04 <TFaxTool::RetransCommand(unsigned long)+0x1e8>
         b8aa0:	ffffaa0f 	swinv	0x00ffaa0f
         b8aa4:	e2840f96 	add	r0, r4, #600	; 0x258
         b8aa8:	e2800b01 	add	r0, r0, #1024	; 0x400
         b8aac:	e3a01016 	mov	r1, #22	; 0x16
         b8ab0:	e2811c01 	add	r1, r1, #256	; 0x100
         b8ab4:	e3a0c00d 	mov	ip, #13	; 0xd
         b8ab8:	e24ccc56 	sub	ip, ip, #22016	; 0x5600
         b8abc:	e3330001 	teq	r3, #1	; 0x1
         b8ac0:	1a00002e 	bne	b8b80 <TFaxTool::RetransCommand(unsigned long)+0x164>
         b8ac4:	e594329c 	ldr	r3, [r4, #668]	; fField668
         b8ac8:	e3530008 	cmp	r3, #8	; 0x8
         b8acc:	908ff103 	addls	pc, pc, r3, lsl #2
         b8ad0:	ea00004a 	b	b8c00 <TFaxTool::RetransCommand(unsigned long)+0x1e4>
         b8ad4:	ea000049 	b	b8c00 <TFaxTool::RetransCommand(unsigned long)+0x1e4>
         b8ad8:	ea000008 	b	b8b00 <TFaxTool::RetransCommand(unsigned long)+0xe4>
         b8adc:	ea00000d 	b	b8b18 <TFaxTool::RetransCommand(unsigned long)+0xfc>
         b8ae0:	ea000046 	b	b8c00 <TFaxTool::RetransCommand(unsigned long)+0x1e4>
         b8ae4:	ea000011 	b	b8b30 <TFaxTool::RetransCommand(unsigned long)+0x114>
         b8ae8:	ea000044 	b	b8c00 <TFaxTool::RetransCommand(unsigned long)+0x1e4>
         b8aec:	ea000015 	b	b8b48 <TFaxTool::RetransCommand(unsigned long)+0x12c>
         b8af0:	ea00001f 	b	b8b74 <TFaxTool::RetransCommand(unsigned long)+0x158>
         b8af4:	e1a00004 	mov	r0, r4
         b8af8:	e3a01044 	mov	r1, #68	; 0x44
         b8afc:	ea000032 	b	b8bcc <TFaxTool::RetransCommand(unsigned long)+0x1b0>
         b8b00:	e3a00005 	mov	r0, #5	; 0x5
         b8b04:	e1a01002 	mov	r1, r2
         b8b08:	e5840278 	str	r0, [r4, #632]	; fField632
         b8b0c:	e1a00004 	mov	r0, r4
         b8b10:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b8b14:	ea65c692 	b	1a2a564 <TFaxTool::$PutCommandToXmit(unsigned long)>
         b8b18:	e3a00004 	mov	r0, #4	; 0x4
         b8b1c:	e1a01002 	mov	r1, r2
         b8b20:	e5840278 	str	r0, [r4, #632]	; fField632
         b8b24:	e1a00004 	mov	r0, r4
         b8b28:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b8b2c:	ea65c68b 	b	1a2a560 <TFaxTool::$PutCommandToRcv(unsigned long)>
         b8b30:	e3a00002 	mov	r0, #2	; 0x2
         b8b34:	e1a01002 	mov	r1, r2
         b8b38:	e5840278 	str	r0, [r4, #632]	; fField632
         b8b3c:	e1a00004 	mov	r0, r4
         b8b40:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b8b44:	ea65c68b 	b	1a2a578 <TFaxTool::$PutInitialId(unsigned long)>
         b8b48:	e3a03000 	mov	r3, #0	; 0x0
         b8b4c:	e3a02efa 	mov	r2, #4000	; 0xfa0
         b8b50:	e92d000c 	stmdb	sp!, {r2, r3}
         b8b54:	e1a03000 	mov	r3, r0
         b8b58:	e1a00004 	mov	r0, r4
         b8b5c:	e3a02001 	mov	r2, #1	; 0x1
         b8b60:	eb65c24d 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b8b64:	e28dd008 	add	sp, sp, #8	; 0x8
         b8b68:	e3300000 	teq	r0, #0	; 0x0
         b8b6c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b8b70:	ea000023 	b	b8c04 <TFaxTool::RetransCommand(unsigned long)+0x1e8>
         b8b74:	e1a00004 	mov	r0, r4
         b8b78:	e3a01084 	mov	r1, #132	; 0x84
         b8b7c:	ea000012 	b	b8bcc <TFaxTool::RetransCommand(unsigned long)+0x1b0>
         b8b80:	e3330003 	teq	r3, #3	; 0x3
         b8b84:	1a00001d 	bne	b8c00 <TFaxTool::RetransCommand(unsigned long)+0x1e4>
         b8b88:	e594329c 	ldr	r3, [r4, #668]	; fField668
         b8b8c:	e3330006 	teq	r3, #6	; 0x6
         b8b90:	0a00000f 	beq	b8bd4 <TFaxTool::RetransCommand(unsigned long)+0x1b8>
         b8b94:	e3330009 	teq	r3, #9	; 0x9
         b8b98:	11a01002 	movne	r1, r2
         b8b9c:	11a00004 	movne	r0, r4
         b8ba0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         b8ba4:	1a65c237 	bne	1a29488 <TFaxTool::$PhaseDPutPostMsgCmd(unsigned long)>
         b8ba8:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b8bac:	e3100402 	tst	r0, #33554432	; 0x2000000
         b8bb0:	13a0108c 	movne	r1, #140	; 0x8c
         b8bb4:	1a000002 	bne	b8bc4 <TFaxTool::RetransCommand(unsigned long)+0x1a8>
         b8bb8:	e3100301 	tst	r0, #67108864	; 0x4000000
         b8bbc:	03a0104c 	moveq	r1, #76	; 0x4c
         b8bc0:	13a010cc 	movne	r1, #204	; 0xcc
         b8bc4:	e1a00004 	mov	r0, r4
         b8bc8:	e3a02048 	mov	r2, #72	; 0x48
         b8bcc:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b8bd0:	ea65be24 	b	1a28468 <TFaxTool::$PhaseBPutPostMsgCmd(unsigned char, unsigned long)>
         b8bd4:	e3a03000 	mov	r3, #0	; 0x0
         b8bd8:	e3a02efa 	mov	r2, #4000	; 0xfa0
         b8bdc:	e92d000c 	stmdb	sp!, {r2, r3}
         b8be0:	e1a03000 	mov	r3, r0
         b8be4:	e1a00004 	mov	r0, r4
         b8be8:	e3a02001 	mov	r2, #1	; 0x1
         b8bec:	eb65c22a 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b8bf0:	e28dd008 	add	sp, sp, #8	; 0x8
         b8bf4:	e3300000 	teq	r0, #0	; 0x0
         b8bf8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         b8bfc:	ea000000 	b	b8c04 <TFaxTool::RetransCommand(unsigned long)+0x1e8>
         b8c00:	e1a0000c 	mov	r0, ip
         b8c04:	e1a01000 	mov	r1, r0
         b8c08:	e1a00004 	mov	r0, r4
         b8c0c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         b8c10:	ea6c211e 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PutMessage(unsigned char)
 * Address: 000b8c14
 */
TFaxTool::PutMessage(unsigned char) {
    /*
         b8c14:	e1a0c00d 	mov	ip, sp
         b8c18:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         b8c1c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b8c20:	e1a04000 	mov	r4, r0
         b8c24:	e20160ff 	and	r6, r1, #255	; 0xff
         b8c28:	e590026c 	ldr	r0, [r0, #620]	; fField620
         b8c2c:	e3100a01 	tst	r0, #4096	; 0x1000
         b8c30:	191ba870 	ldmnedb	fp, {r4, r5, r6, fp, sp, pc}
         b8c34:	e59403f0 	ldr	r0, [r4, #1008]	; fField1008
         b8c38:	e080c080 	add	ip, r0, r0, lsl #1
         b8c3c:	e08c0180 	add	r0, ip, r0, lsl #3
         b8c40:	e0840180 	add	r0, r4, r0, lsl #3
         b8c44:	e2805fcf 	add	r5, r0, #828	; 0x33c
         b8c48:	e3e03000 	mvn	r3, #0	; 0x0
         b8c4c:	e3a02000 	mov	r2, #0	; 0x0
         b8c50:	e92d000c 	stmdb	sp!, {r2, r3}
         b8c54:	e2852028 	add	r2, r5, #40	; 0x28
         b8c58:	e8920006 	ldmia	r2, {r1, r2}
         b8c5c:	e1a00005 	mov	r0, r5
         b8c60:	e3a03000 	mov	r3, #0	; 0x0
         b8c64:	eb6cc210 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         b8c68:	e28dd008 	add	sp, sp, #8	; 0x8
         b8c6c:	e3300000 	teq	r0, #0	; 0x0
         b8c70:	1a000022 	bne	b8d00 <TFaxTool::PutMessage(unsigned char)+0xec>
         b8c74:	e1a03006 	mov	r3, r6
         b8c78:	e3a02000 	mov	r2, #0	; 0x0
         b8c7c:	e92d000c 	stmdb	sp!, {r2, r3}
         b8c80:	e59403f0 	ldr	r0, [r4, #1008]	; fField1008
         b8c84:	e080c080 	add	ip, r0, r0, lsl #1
         b8c88:	e08c0180 	add	r0, ip, r0, lsl #3
         b8c8c:	e0840180 	add	r0, r4, r0, lsl #3
         b8c90:	e2803fdd 	add	r3, r0, #884	; 0x374
         b8c94:	e59422a0 	ldr	r2, [r4, #672]	; fField672
         b8c98:	e1a00004 	mov	r0, r4
         b8c9c:	e3a01015 	mov	r1, #21	; 0x15
         b8ca0:	e2811c01 	add	r1, r1, #256	; 0x100
         b8ca4:	eb65c1ff 	bl	1a294a8 <TFaxTool::$PostTransPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b8ca8:	e28dd008 	add	sp, sp, #8	; 0x8
         b8cac:	e3300000 	teq	r0, #0	; 0x0
         b8cb0:	1a000012 	bne	b8d00 <TFaxTool::PutMessage(unsigned char)+0xec>
         b8cb4:	e3a00001 	mov	r0, #1	; 0x1
         b8cb8:	e5c50030 	strb	r0, [r5, #48]
         b8cbc:	e59422fc 	ldr	r2, [r4, #764]	; fField764
         b8cc0:	e3320000 	teq	r2, #0	; 0x0
         b8cc4:	e1a00004 	mov	r0, r4
         b8cc8:	13a03066 	movne	r3, #102	; 0x66
         b8ccc:	12833c0e 	addne	r3, r3, #3584	; 0xe00
         b8cd0:	13a0100b 	movne	r1, #11	; 0xb
         b8cd4:	191b6870 	ldmnedb	fp, {r4, r5, r6, fp, sp, lr}
         b8cd8:	1a657795 	bne	1a16b34 <TFaxTool::$PostTimer(unsigned long, unsigned long, TimeUnits)>
         b8cdc:	e3a039e1 	mov	r3, #3686400	; 0x384000
         b8ce0:	e3a0200f 	mov	r2, #15	; 0xf
         b8ce4:	e3a01011 	mov	r1, #17	; 0x11
         b8ce8:	eb657791 	bl	1a16b34 <TFaxTool::$PostTimer(unsigned long, unsigned long, TimeUnits)>
         b8cec:	e3300000 	teq	r0, #0	; 0x0
         b8cf0:	0594026c 	ldreq	r0, [r4, #620]	; fField620
         b8cf4:	03800102 	orreq	r0, r0, #-2147483648	; 0x80000000
         b8cf8:	05a4026c 	streq	r0, [r4, #620]!	; fField620
         b8cfc:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
         b8d00:	e1a01000 	mov	r1, r0
         b8d04:	e1a00004 	mov	r0, r4
         b8d08:	e91b6870 	ldmdb	fp, {r4, r5, r6, fp, sp, lr}
         b8d0c:	ea6c20df 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::BufferNextLine(TFaxLineBuf &)
 * Address: 000b8d10
 */
TFaxTool::BufferNextLine(TFaxLineBuf &) {
    /*
         b8d10:	e1a0c00d 	mov	ip, sp
         b8d14:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         b8d18:	e24cb004 	sub	fp, ip, #4	; 0x4
         b8d1c:	e1a04000 	mov	r4, r0
         b8d20:	e1a05001 	mov	r5, r1
         b8d24:	e3a06000 	mov	r6, #0	; 0x0
         b8d28:	e5d10030 	ldrb	r0, [r1, #48]
         b8d2c:	e3300000 	teq	r0, #0	; 0x0
         b8d30:	0285702c 	addeq	r7, r5, #44	; 0x2c
         b8d34:	0a00002e 	beq	b8df4 <TFaxTool::BufferNextLine(TFaxLineBuf &)+0xe4>
         b8d38:	ea000038 	b	b8e20 <TFaxTool::BufferNextLine(TFaxLineBuf &)+0x110>
         b8d3c:	e594340c 	ldr	r3, [r4, #1036]	; fField1036
         b8d40:	e1a00003 	mov	r0, r3
         b8d44:	e5941410 	ldr	r1, [r4, #1040]	; fField1040
         b8d48:	e5942404 	ldr	r2, [r4, #1028]	; fField1028
         b8d4c:	e5933000 	ldr	r3, [r3]
         b8d50:	e1a0e00f 	mov	lr, pc
         b8d54:	e283f014 	add	pc, r3, #20	; 0x14
         b8d58:	e1a0c000 	mov	ip, r0
         b8d5c:	e5940404 	ldr	r0, [r4, #1028]	; fField1028
         b8d60:	e130000c 	teq	r0, ip
         b8d64:	13a060e9 	movne	r6, #233	; 0xe9
         b8d68:	12466b0a 	subne	r6, r6, #10240	; 0x2800
         b8d6c:	1a00002b 	bne	b8e20 <TFaxTool::BufferNextLine(TFaxLineBuf &)+0x110>
         b8d70:	e3a01d1b 	mov	r1, #1728	; 0x6c0
         b8d74:	e5942408 	ldr	r2, [r4, #1032]	; fField1032
         b8d78:	e5943300 	ldr	r3, [r4, #768]	; fField768
         b8d7c:	e92d000e 	stmdb	sp!, {r1, r2, r3}
         b8d80:	e2851028 	add	r1, r5, #40	; 0x28
         b8d84:	e8910003 	ldmia	r1, {r0, r1}
         b8d88:	e0802001 	add	r2, r0, r1
         b8d8c:	e1a0100c 	mov	r1, ip
         b8d90:	e5940410 	ldr	r0, [r4, #1040]	; fField1040
         b8d94:	e59432e0 	ldr	r3, [r4, #736]	; fField736
         b8d98:	eb655ea0 	bl	1a10820 <$EncodeT4(unsigned char *, int, int, int, int, int, int)>
         b8d9c:	e28dd00c 	add	sp, sp, #12	; 0xc
         b8da0:	e3500000 	cmp	r0, #0	; 0x0
         b8da4:	b3a06f5f 	movlt	r6, #380	; 0x17c
         b8da8:	b2466901 	sublt	r6, r6, #16384	; 0x4000
         b8dac:	ba00001b 	blt	b8e20 <TFaxTool::BufferNextLine(TFaxLineBuf &)+0x110>
         b8db0:	e5972000 	ldr	r2, [r7]
         b8db4:	e0820000 	add	r0, r2, r0
         b8db8:	e5870000 	str	r0, [r7]
         b8dbc:	e5940400 	ldr	r0, [r4, #1024]	; fField1024
         b8dc0:	e2500001 	subs	r0, r0, #1	; 0x1
         b8dc4:	e5840400 	str	r0, [r4, #1024]	; fField1024
         b8dc8:	1a000009 	bne	b8df4 <TFaxTool::BufferNextLine(TFaxLineBuf &)+0xe4>
         b8dcc:	e594040c 	ldr	r0, [r4, #1036]	; fField1036
         b8dd0:	e5901000 	ldr	r1, [r0]
         b8dd4:	e1a0e00f 	mov	lr, pc
         b8dd8:	e281f02c 	add	pc, r1, #44	; 0x2c
         b8ddc:	e1a02000 	mov	r2, r0
         b8de0:	e1a00004 	mov	r0, r4
         b8de4:	e3a01000 	mov	r1, #0	; 0x0
         b8de8:	e5943000 	ldr	r3, [r4]
         b8dec:	e1a0e00f 	mov	lr, pc
         b8df0:	e283f0d4 	add	pc, r3, #212	; 0xd4
         b8df4:	e5940400 	ldr	r0, [r4, #1024]	; fField1024
         b8df8:	e3300000 	teq	r0, #0	; 0x0
         b8dfc:	0a000003 	beq	b8e10 <TFaxTool::BufferNextLine(TFaxLineBuf &)+0x100>
         b8e00:	e595002c 	ldr	r0, [r5, #44]
         b8e04:	e59412e0 	ldr	r1, [r4, #736]	; fField736
         b8e08:	e1500001 	cmp	r0, r1
         b8e0c:	9affffca 	bls	b8d3c <TFaxTool::BufferNextLine(TFaxLineBuf &)+0x2c>
         b8e10:	e595002c 	ldr	r0, [r5, #44]
         b8e14:	e3500000 	cmp	r0, #0	; 0x0
         b8e18:	c3a00001 	movgt	r0, #1	; 0x1
         b8e1c:	c5c50031 	strgtb	r0, [r5, #49]
         b8e20:	e1a00006 	mov	r0, r6
         b8e24:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::SendNextLine(void)
 * Address: 000b8e28
 */
TFaxTool::SendNextLine(void) {
    /*
         b8e28:	e1a0c00d 	mov	ip, sp
         b8e2c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b8e30:	e24cb004 	sub	fp, ip, #4	; 0x4
         b8e34:	e1a04000 	mov	r4, r0
         b8e38:	e59003f0 	ldr	r0, [r0, #1008]	; fField1008
         b8e3c:	e080c080 	add	ip, r0, r0, lsl #1
         b8e40:	e08c0180 	add	r0, ip, r0, lsl #3
         b8e44:	e0840180 	add	r0, r4, r0, lsl #3
         b8e48:	e2801fcf 	add	r1, r0, #828	; 0x33c
         b8e4c:	e1a00004 	mov	r0, r4
         b8e50:	eb6549e6 	bl	1a0b5f0 <TFaxTool::$BufferNextLine(TFaxLineBuf &)>
         b8e54:	e3300000 	teq	r0, #0	; 0x0
         b8e58:	1a00001d 	bne	b8ed4 <TFaxTool::SendNextLine(void)+0xac>
         b8e5c:	e59403f0 	ldr	r0, [r4, #1008]	; fField1008
         b8e60:	e080c080 	add	ip, r0, r0, lsl #1
         b8e64:	e08c0180 	add	r0, ip, r0, lsl #3
         b8e68:	e0840180 	add	r0, r4, r0, lsl #3
         b8e6c:	e5d0136d 	ldrb	r1, [r0, #877]	; fField877
         b8e70:	e3310000 	teq	r1, #0	; 0x0
         b8e74:	0a000006 	beq	b8e94 <TFaxTool::SendNextLine(void)+0x6c>
         b8e78:	e5d0036c 	ldrb	r0, [r0, #876]	; fField876
         b8e7c:	e3300000 	teq	r0, #0	; 0x0
         b8e80:	05940270 	ldreq	r0, [r4, #624]	; fField624
         b8e84:	03300002 	teqeq	r0, #2	; 0x2
         b8e88:	01a00004 	moveq	r0, r4
         b8e8c:	03a01000 	moveq	r1, #0	; 0x0
         b8e90:	0b657b40 	bleq	1a17b98 <TFaxTool::$PutMessage(unsigned char)>
         b8e94:	e59403f0 	ldr	r0, [r4, #1008]	; fField1008
         b8e98:	e2200001 	eor	r0, r0, #1	; 0x1
         b8e9c:	e080c080 	add	ip, r0, r0, lsl #1
         b8ea0:	e08c0180 	add	r0, ip, r0, lsl #3
         b8ea4:	e0840180 	add	r0, r4, r0, lsl #3
         b8ea8:	e2801fcf 	add	r1, r0, #828	; 0x33c
         b8eac:	e1a00004 	mov	r0, r4
         b8eb0:	eb6549ce 	bl	1a0b5f0 <TFaxTool::$BufferNextLine(TFaxLineBuf &)>
         b8eb4:	e3300000 	teq	r0, #0	; 0x0
         b8eb8:	1a000005 	bne	b8ed4 <TFaxTool::SendNextLine(void)+0xac>
         b8ebc:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b8ec0:	e3100802 	tst	r0, #131072	; 0x20000
         b8ec4:	11a00004 	movne	r0, r4
         b8ec8:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         b8ecc:	1a657f63 	bne	1a18c60 <TFaxTool::$SendEOM(void)>
         b8ed0:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b8ed4:	e3300000 	teq	r0, #0	; 0x0
         b8ed8:	11a01000 	movne	r1, r0
         b8edc:	11a00004 	movne	r0, r4
         b8ee0:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         b8ee4:	1a6c2069 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         b8ee8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::SendEOM(void)
 * Address: 000b8eec
 */
TFaxTool::SendEOM(void) {
    /*
         b8eec:	e59013f0 	ldr	r1, [r0, #1008]	; fField1008
         b8ef0:	e0812081 	add	r2, r1, r1, lsl #1
         b8ef4:	e0822181 	add	r2, r2, r1, lsl #3
         b8ef8:	e0802182 	add	r2, r0, r2, lsl #3
         b8efc:	e5d2336d 	ldrb	r3, [r2, #877]	; fField877
         b8f00:	e3330000 	teq	r3, #0	; 0x0
         b8f04:	05d2236c 	ldreqb	r2, [r2, #876]	; fField876
         b8f08:	03320000 	teqeq	r2, #0	; 0x0
         b8f0c:	11a0f00e 	movne	pc, lr
         b8f10:	e2211001 	eor	r1, r1, #1	; 0x1
         b8f14:	e081c081 	add	ip, r1, r1, lsl #1
         b8f18:	e08c1181 	add	r1, ip, r1, lsl #3
         b8f1c:	e0801181 	add	r1, r0, r1, lsl #3
         b8f20:	e5d1236d 	ldrb	r2, [r1, #877]	; fField877
         b8f24:	e3320000 	teq	r2, #0	; 0x0
         b8f28:	05d1136c 	ldreqb	r1, [r1, #876]	; fField876
         b8f2c:	03310000 	teqeq	r1, #0	; 0x0
         b8f30:	05901270 	ldreq	r1, [r0, #624]	; fField624
         b8f34:	03310002 	teqeq	r1, #2	; 0x2
         b8f38:	11a0f00e 	movne	pc, lr
         b8f3c:	e5901818 	ldr	r1, [r0, #2072]	; fField2072
         b8f40:	e3310002 	teq	r1, #2	; 0x2
         b8f44:	0a6593ec 	beq	1a1defc <TFaxTool::$SendEOMCont(void)>
         b8f48:	e3310004 	teq	r1, #4	; 0x4
         b8f4c:	03a01008 	moveq	r1, #8	; 0x8
         b8f50:	0a6593df 	beq	1a1ded4 <TFaxTool::$C2StateUpdate(unsigned long)>
         b8f54:	e3310008 	teq	r1, #8	; 0x8
         b8f58:	03a01008 	moveq	r1, #8	; 0x8
         b8f5c:	0a658fbf 	beq	1a1ce60 <TFaxTool::$C20StateUpdate(unsigned long)>
         b8f60:	13a0100d 	movne	r1, #13	; 0xd
         b8f64:	12411c56 	subne	r1, r1, #22016	; 0x5600
         b8f68:	1a6c2048 	bne	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseAModemReqComplete(long)
 * Address: 000b8f6c
 */
TFaxTool::PhaseAModemReqComplete(long) {
    /*
         b8f6c:	e5902018 	ldr	r2, [r0, #24]	; fField24
         b8f70:	e3120004 	tst	r2, #4	; 0x4
         b8f74:	11a0f00e 	movne	pc, lr
         b8f78:	e5902274 	ldr	r2, [r0, #628]	; fField628
         b8f7c:	e3320001 	teq	r2, #1	; 0x1
         b8f80:	0a6572d1 	beq	1a15acc <TFaxTool::$PhaseAConnectModem(long)>
         b8f84:	e3320002 	teq	r2, #2	; 0x2
         b8f88:	0a65bd30 	beq	1a28450 <TFaxTool::$PhaseAAcceptModem(long)>
         b8f8c:	e3320003 	teq	r2, #3	; 0x3
         b8f90:	0a6572cc 	beq	1a15ac8 <TFaxTool::$PhaseAComplete(long)>
         b8f94:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxTool::SendEOMCont(void)
 * Address: 000b8f98
 */
TFaxTool::SendEOMCont(void) {
    /*
         b8f98:	e1a0c00d 	mov	ip, sp
         b8f9c:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         b8fa0:	e24cb004 	sub	fp, ip, #4	; 0x4
         b8fa4:	e1a04000 	mov	r4, r0
         b8fa8:	e59003f0 	ldr	r0, [r0, #1008]	; fField1008
         b8fac:	e080c080 	add	ip, r0, r0, lsl #1
         b8fb0:	e08c0180 	add	r0, ip, r0, lsl #3
         b8fb4:	e0840180 	add	r0, r4, r0, lsl #3
         b8fb8:	e5b01374 	ldr	r1, [r0, #884]!
         b8fbc:	e1a0e00f 	mov	lr, pc
         b8fc0:	e281f028 	add	pc, r1, #40	; 0x28
         b8fc4:	e59403f0 	ldr	r0, [r4, #1008]	; fField1008
         b8fc8:	e080c080 	add	ip, r0, r0, lsl #1
         b8fcc:	e08c0180 	add	r0, ip, r0, lsl #3
         b8fd0:	e0840180 	add	r0, r4, r0, lsl #3
         b8fd4:	e5900364 	ldr	r0, [r0, #868]
         b8fd8:	eb658761 	bl	1a1ad64 <$T4AddRTC(unsigned char *)>
         b8fdc:	e59413f0 	ldr	r1, [r4, #1008]	; fField1008
         b8fe0:	e081c081 	add	ip, r1, r1, lsl #1
         b8fe4:	e08c1181 	add	r1, ip, r1, lsl #3
         b8fe8:	e0841181 	add	r1, r4, r1, lsl #3
         b8fec:	e3e03000 	mvn	r3, #0	; 0x0
         b8ff0:	e3a02000 	mov	r2, #0	; 0x0
         b8ff4:	e5a10368 	str	r0, [r1, #872]!	; fField872
         b8ff8:	e92d000c 	stmdb	sp!, {r2, r3}
         b8ffc:	e59413f0 	ldr	r1, [r4, #1008]	; fField1008
         b9000:	e081c081 	add	ip, r1, r1, lsl #1
         b9004:	e08c1181 	add	r1, ip, r1, lsl #3
         b9008:	e0843181 	add	r3, r4, r1, lsl #3
         b900c:	e1a02000 	mov	r2, r0
         b9010:	e5931364 	ldr	r1, [r3, #868]
         b9014:	e2830fcf 	add	r0, r3, #828	; 0x33c
         b9018:	e3a03000 	mov	r3, #0	; 0x0
         b901c:	eb6cc122 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         b9020:	e28dd008 	add	sp, sp, #8	; 0x8
         b9024:	e3500000 	cmp	r0, #0	; 0x0
         b9028:	1a000010 	bne	b9070 <TFaxTool::SendEOMCont(void)+0xd8>
         b902c:	e3a00001 	mov	r0, #1	; 0x1
         b9030:	e59413f0 	ldr	r1, [r4, #1008]	; fField1008
         b9034:	e081c081 	add	ip, r1, r1, lsl #1
         b9038:	e08c1181 	add	r1, ip, r1, lsl #3
         b903c:	e0841181 	add	r1, r4, r1, lsl #3
         b9040:	e5c1036d 	strb	r0, [r1, #877]	; fField877
         b9044:	e1a00004 	mov	r0, r4
         b9048:	e3a01001 	mov	r1, #1	; 0x1
         b904c:	eb657ad1 	bl	1a17b98 <TFaxTool::$PutMessage(unsigned char)>
         b9050:	e594026c 	ldr	r0, [r4, #620]	; fField620
         b9054:	e3c00802 	bic	r0, r0, #131072	; 0x20000
         b9058:	e3800502 	orr	r0, r0, #8388608	; 0x800000
         b905c:	e584026c 	str	r0, [r4, #620]	; fField620
         b9060:	e5940804 	ldr	r0, [r4, #2052]	; fField2052
         b9064:	e2800001 	add	r0, r0, #1	; 0x1
         b9068:	e5a40804 	str	r0, [r4, #2052]!	; fField2052
         b906c:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         b9070:	11a01000 	movne	r1, r0
         b9074:	11a00004 	movne	r0, r4
         b9078:	191b6810 	ldmnedb	fp, {r4, fp, sp, lr}
         b907c:	1a6c2003 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         b9080:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::ReceiveNextLinesBuf(TFaxLineBuf *)
 * Address: 000b9084
 */
TFaxTool::ReceiveNextLinesBuf(TFaxLineBuf *) {
    /*
         b9084:	e1a0c00d 	mov	ip, sp
         b9088:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b908c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b9090:	e1a04000 	mov	r4, r0
         b9094:	e1a05001 	mov	r5, r1
         b9098:	e3e03000 	mvn	r3, #0	; 0x0
         b909c:	e3a02000 	mov	r2, #0	; 0x0
         b90a0:	e92d000c 	stmdb	sp!, {r2, r3}
         b90a4:	e59023ec 	ldr	r2, [r0, #1004]	; fField1004
         b90a8:	e5911028 	ldr	r1, [r1, #40]
         b90ac:	e1a00005 	mov	r0, r5
         b90b0:	e3a03000 	mov	r3, #0	; 0x0
         b90b4:	eb6cc0fc 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         b90b8:	e28dd008 	add	sp, sp, #8	; 0x8
         b90bc:	e3300000 	teq	r0, #0	; 0x0
         b90c0:	1a000024 	bne	b9158 <TFaxTool::ReceiveNextLinesBuf(TFaxLineBuf *)+0xd4>
         b90c4:	e2850038 	add	r0, r5, #56	; 0x38
         b90c8:	e5941818 	ldr	r1, [r4, #2072]	; fField2072
         b90cc:	e3310004 	teq	r1, #4	; 0x4
         b90d0:	13310008 	teqne	r1, #8	; 0x8
         b90d4:	1a000010 	bne	b911c <TFaxTool::ReceiveNextLinesBuf(TFaxLineBuf *)+0x98>
         b90d8:	e59412a0 	ldr	r1, [r4, #672]	; fField672
         b90dc:	e5840530 	str	r0, [r4, #1328]	; fField1328
         b90e0:	e584152c 	str	r1, [r4, #1324]	; fField1324
         b90e4:	e59412c0 	ldr	r1, [r4, #704]	; fField704
         b90e8:	e5841534 	str	r1, [r4, #1332]	; fField1332
         b90ec:	e3a01000 	mov	r1, #0	; 0x0
         b90f0:	e5c41538 	strb	r1, [r4, #1336]	; fField1336
         b90f4:	e5901000 	ldr	r1, [r0]
         b90f8:	e1a0e00f 	mov	lr, pc
         b90fc:	e281f028 	add	pc, r1, #40	; 0x28
         b9100:	e1a00004 	mov	r0, r4
         b9104:	e3a01019 	mov	r1, #25	; 0x19
         b9108:	e2811c01 	add	r1, r1, #256	; 0x100
         b910c:	eb657684 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         b9110:	e3300000 	teq	r0, #0	; 0x0
         b9114:	1a00000f 	bne	b9158 <TFaxTool::ReceiveNextLinesBuf(TFaxLineBuf *)+0xd4>
         b9118:	ea00000b 	b	b914c <TFaxTool::ReceiveNextLinesBuf(TFaxLineBuf *)+0xc8>
         b911c:	e3a03000 	mov	r3, #0	; 0x0
         b9120:	e59422c0 	ldr	r2, [r4, #704]	; fField704
         b9124:	e92d000c 	stmdb	sp!, {r2, r3}
         b9128:	e1a03000 	mov	r3, r0
         b912c:	e59422a0 	ldr	r2, [r4, #672]	; fField672
         b9130:	e1a00004 	mov	r0, r4
         b9134:	e3a01017 	mov	r1, #23	; 0x17
         b9138:	e2811c01 	add	r1, r1, #256	; 0x100
         b913c:	eb65c0d6 	bl	1a2949c <TFaxTool::$PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)>
         b9140:	e28dd008 	add	sp, sp, #8	; 0x8
         b9144:	e3300000 	teq	r0, #0	; 0x0
         b9148:	1a000002 	bne	b9158 <TFaxTool::ReceiveNextLinesBuf(TFaxLineBuf *)+0xd4>
         b914c:	e3a00001 	mov	r0, #1	; 0x1
         b9150:	e5c50030 	strb	r0, [r5, #48]
         b9154:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         b9158:	e1a01000 	mov	r1, r0
         b915c:	e1a00004 	mov	r0, r4
         b9160:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         b9164:	ea6c1fc9 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::DISTimeOut(void)
 * Address: 000b9168
 */
TFaxTool::DISTimeOut(void) {
    /*
         b9168:	e59f1000 	ldr	r1, [pc, #0]	; b9170 <TFaxTool::DISTimeOut(void)+0x8>
         b916c:	ea6c1fc7 	b	1bc1090 <TCommTool::$StartAbort(long)>
         b9170:	ffffaa0f 	swinv	0x00ffaa0f
    */
}

/**
 * Symbol: TFaxTool::ResponseTimeOut(void)
 * Address: 000b9174
 */
TFaxTool::ResponseTimeOut(void) {
    /*
         b9174:	e1a0c00d 	mov	ip, sp
         b9178:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         b917c:	e24cb004 	sub	fp, ip, #4	; 0x4
         b9180:	e1a04000 	mov	r4, r0
         b9184:	e2800f79 	add	r0, r0, #484	; 0x1e4
         b9188:	e2800b01 	add	r0, r0, #1024	; 0x400
         b918c:	e1a05000 	mov	r5, r0
         b9190:	e3a0100a 	mov	r1, #10	; 0xa
         b9194:	eb6c8f1d 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
         b9198:	e1b01000 	movs	r1, r0
         b919c:	1a00001f 	bne	b9220 <TFaxTool::ResponseTimeOut(void)+0xac>
         b91a0:	e3a00004 	mov	r0, #4	; 0x4
         b91a4:	e58405e0 	str	r0, [r4, #1504]	; fField1504
         b91a8:	e284efb9 	add	lr, r4, #740	; 0x2e4
         b91ac:	e1a0c005 	mov	ip, r5
         b91b0:	e2846f76 	add	r6, r4, #472	; 0x1d8
         b91b4:	e2866b01 	add	r6, r6, #1024	; 0x400
         b91b8:	e2840f7d 	add	r0, r4, #500	; 0x1f4
         b91bc:	e2800b01 	add	r0, r0, #1024	; 0x400
         b91c0:	e3a01010 	mov	r1, #16	; 0x10
         b91c4:	e3a02000 	mov	r2, #0	; 0x0
         b91c8:	e3a03000 	mov	r3, #0	; 0x0
         b91cc:	e3a05010 	mov	r5, #16	; 0x10
         b91d0:	e3a07000 	mov	r7, #0	; 0x0
         b91d4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b91d8:	e1a03007 	mov	r3, r7
         b91dc:	e3a02001 	mov	r2, #1	; 0x1
         b91e0:	e1a01005 	mov	r1, r5
         b91e4:	e3a0000c 	mov	r0, #12	; 0xc
         b91e8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b91ec:	e1a03006 	mov	r3, r6
         b91f0:	e92d0008 	stmdb	sp!, {r3}
         b91f4:	e1a0000e 	mov	r0, lr
         b91f8:	e3a03000 	mov	r3, #0	; 0x0
         b91fc:	e49c1008 	ldr	r1, [ip], #8
         b9200:	e59c2000 	ldr	r2, [ip]
         b9204:	eb6c86d0 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         b9208:	e28dd024 	add	sp, sp, #36	; 0x24
         b920c:	e1b01000 	movs	r1, r0
         b9210:	0594026c 	ldreq	r0, [r4, #620]	; fField620
         b9214:	03800202 	orreq	r0, r0, #536870912	; 0x20000000
         b9218:	05a4026c 	streq	r0, [r4, #620]!	; fField620
         b921c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b9220:	e1a00004 	mov	r0, r4
         b9224:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         b9228:	ea6c1f98 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::AdjustSpeedForFTT(void)
 * Address: 000b922c
 */
TFaxTool::AdjustSpeedForFTT(void) {
    /*
         b922c:	e1a0c00d 	mov	ip, sp
         b9230:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         b9234:	e24cb004 	sub	fp, ip, #4	; 0x4
         b9238:	e1a04000 	mov	r4, r0
         b923c:	e3a05000 	mov	r5, #0	; 0x0
         b9240:	e59002b8 	ldr	r0, [r0, #696]	; fField696
         b9244:	e5941324 	ldr	r1, [r4, #804]	; fField804
         b9248:	e0001001 	and	r1, r0, r1
         b924c:	e1a00004 	mov	r0, r4
         b9250:	eb65b42c 	bl	1a26308 <TFaxTool::$FastestDataRate(unsigned long)>
         b9254:	e59412b4 	ldr	r1, [r4, #692]	; fField692
         b9258:	e0010000 	and	r0, r1, r0
         b925c:	e3a0100a 	mov	r1, #10	; 0xa
         b9260:	e2411c56 	sub	r1, r1, #22016	; 0x5600
         b9264:	e3a0eec2 	mov	lr, #3104	; 0xc20
         b9268:	e28eea01 	add	lr, lr, #4096	; 0x1000
         b926c:	e3a0c008 	mov	ip, #8	; 0x8
         b9270:	e3a03e96 	mov	r3, #2400	; 0x960
         b9274:	e3a07d4b 	mov	r7, #4800	; 0x12c0
         b9278:	e3a06004 	mov	r6, #4	; 0x4
         b927c:	e3a02002 	mov	r2, #2	; 0x2
         b9280:	e350000b 	cmp	r0, #11	; 0xb
         b9284:	908ff100 	addls	pc, pc, r0, lsl #2
         b9288:	ea000051 	b	b93d4 <TFaxTool::AdjustSpeedForFTT(void)+0x1a8>
         b928c:	ea00001b 	b	b9300 <TFaxTool::AdjustSpeedForFTT(void)+0xd4>
         b9290:	ea000020 	b	b9318 <TFaxTool::AdjustSpeedForFTT(void)+0xec>
         b9294:	ea000029 	b	b9340 <TFaxTool::AdjustSpeedForFTT(void)+0x114>
         b9298:	ea000032 	b	b9368 <TFaxTool::AdjustSpeedForFTT(void)+0x13c>
         b929c:	ea00004c 	b	b93d4 <TFaxTool::AdjustSpeedForFTT(void)+0x1a8>
         b92a0:	ea00004b 	b	b93d4 <TFaxTool::AdjustSpeedForFTT(void)+0x1a8>
         b92a4:	ea00004a 	b	b93d4 <TFaxTool::AdjustSpeedForFTT(void)+0x1a8>
         b92a8:	ea00002e 	b	b9368 <TFaxTool::AdjustSpeedForFTT(void)+0x13c>
         b92ac:	ea000048 	b	b93d4 <TFaxTool::AdjustSpeedForFTT(void)+0x1a8>
         b92b0:	ea000047 	b	b93d4 <TFaxTool::AdjustSpeedForFTT(void)+0x1a8>
         b92b4:	ea000046 	b	b93d4 <TFaxTool::AdjustSpeedForFTT(void)+0x1a8>
         b92b8:	e59402ec 	ldr	r0, [r4, #748]	; fField748
         b92bc:	e1a08500 	mov	r8, r0, lsl #10
         b92c0:	e1a08e28 	mov	r8, r8, lsr #28
         b92c4:	e358000b 	cmp	r8, #11	; 0xb
         b92c8:	908ff108 	addls	pc, pc, r8, lsl #2
         b92cc:	ea000041 	b	b93d8 <TFaxTool::AdjustSpeedForFTT(void)+0x1ac>
         b92d0:	ea00003a 	b	b93c0 <TFaxTool::AdjustSpeedForFTT(void)+0x194>
         b92d4:	ea00002d 	b	b9390 <TFaxTool::AdjustSpeedForFTT(void)+0x164>
         b92d8:	ea000050 	b	b9420 <TFaxTool::AdjustSpeedForFTT(void)+0x1f4>
         b92dc:	ea000054 	b	b9434 <TFaxTool::AdjustSpeedForFTT(void)+0x208>
         b92e0:	ea00003e 	b	b93e0 <TFaxTool::AdjustSpeedForFTT(void)+0x1b4>
         b92e4:	ea00003b 	b	b93d8 <TFaxTool::AdjustSpeedForFTT(void)+0x1ac>
         b92e8:	ea000044 	b	b9400 <TFaxTool::AdjustSpeedForFTT(void)+0x1d4>
         b92ec:	ea000039 	b	b93d8 <TFaxTool::AdjustSpeedForFTT(void)+0x1ac>
         b92f0:	ea00003a 	b	b93e0 <TFaxTool::AdjustSpeedForFTT(void)+0x1b4>
         b92f4:	ea000025 	b	b9390 <TFaxTool::AdjustSpeedForFTT(void)+0x164>
         b92f8:	ea000040 	b	b9400 <TFaxTool::AdjustSpeedForFTT(void)+0x1d4>
         b92fc:	ea00004c 	b	b9434 <TFaxTool::AdjustSpeedForFTT(void)+0x208>
         b9300:	e594028c 	ldr	r0, [r4, #652]	; fField652
         b9304:	e2800001 	add	r0, r0, #1	; 0x1
         b9308:	e5a4028c 	str	r0, [r4, #652]!	; fField652
         b930c:	e3500003 	cmp	r0, #3	; 0x3
         b9310:	9a000030 	bls	b93d8 <TFaxTool::AdjustSpeedForFTT(void)+0x1ac>
         b9314:	ea00002e 	b	b93d4 <TFaxTool::AdjustSpeedForFTT(void)+0x1a8>
         b9318:	e59402ec 	ldr	r0, [r4, #748]	; fField748
         b931c:	e200270f 	and	r2, r0, #3932160	; 0x3c0000
         b9320:	e3320701 	teq	r2, #262144	; 0x40000
         b9324:	0a000019 	beq	b9390 <TFaxTool::AdjustSpeedForFTT(void)+0x164>
         b9328:	e594028c 	ldr	r0, [r4, #652]	; fField652
         b932c:	e2800001 	add	r0, r0, #1	; 0x1
         b9330:	e5a4028c 	str	r0, [r4, #652]!	; fField652
         b9334:	e3500003 	cmp	r0, #3	; 0x3
         b9338:	9a000026 	bls	b93d8 <TFaxTool::AdjustSpeedForFTT(void)+0x1ac>
         b933c:	ea000024 	b	b93d4 <TFaxTool::AdjustSpeedForFTT(void)+0x1a8>
         b9340:	e59402ec 	ldr	r0, [r4, #748]	; fField748
         b9344:	e1a0c500 	mov	ip, r0, lsl #10
         b9348:	e1320e2c 	teq	r2, ip, lsr #28
         b934c:	0a000033 	beq	b9420 <TFaxTool::AdjustSpeedForFTT(void)+0x1f4>
         b9350:	e594028c 	ldr	r0, [r4, #652]	; fField652
         b9354:	e2800001 	add	r0, r0, #1	; 0x1
         b9358:	e5a4028c 	str	r0, [r4, #652]!	; fField652
         b935c:	e3500003 	cmp	r0, #3	; 0x3
         b9360:	9a00001c 	bls	b93d8 <TFaxTool::AdjustSpeedForFTT(void)+0x1ac>
         b9364:	ea00001a 	b	b93d4 <TFaxTool::AdjustSpeedForFTT(void)+0x1a8>
         b9368:	e59402ec 	ldr	r0, [r4, #748]	; fField748
         b936c:	e1a08500 	mov	r8, r0, lsl #10
         b9370:	e1b08e28 	movs	r8, r8, lsr #28
         b9374:	0a00000b 	beq	b93a8 <TFaxTool::AdjustSpeedForFTT(void)+0x17c>
         b9378:	e3380001 	teq	r8, #1	; 0x1
         b937c:	0a000003 	beq	b9390 <TFaxTool::AdjustSpeedForFTT(void)+0x164>
         b9380:	e3380002 	teq	r8, #2	; 0x2
         b9384:	0a000025 	beq	b9420 <TFaxTool::AdjustSpeedForFTT(void)+0x1f4>
         b9388:	e3380003 	teq	r8, #3	; 0x3
         b938c:	0a000028 	beq	b9434 <TFaxTool::AdjustSpeedForFTT(void)+0x208>
         b9390:	e3c0070f 	bic	r0, r0, #3932160	; 0x3c0000
         b9394:	e3800703 	orr	r0, r0, #786432	; 0xc0000
         b9398:	e5a4c2a0 	str	ip, [r4, #672]!	; fField672
         b939c:	e5a4e010 	str	lr, [r4, #16]!	; fField16
         b93a0:	e584003c 	str	r0, [r4, #60]	; fField60
         b93a4:	ea00000b 	b	b93d8 <TFaxTool::AdjustSpeedForFTT(void)+0x1ac>
         b93a8:	e594028c 	ldr	r0, [r4, #652]	; fField652
         b93ac:	e2800001 	add	r0, r0, #1	; 0x1
         b93b0:	e5a4028c 	str	r0, [r4, #652]!	; fField652
         b93b4:	e3500003 	cmp	r0, #3	; 0x3
         b93b8:	9a000006 	bls	b93d8 <TFaxTool::AdjustSpeedForFTT(void)+0x1ac>
         b93bc:	ea000004 	b	b93d4 <TFaxTool::AdjustSpeedForFTT(void)+0x1a8>
         b93c0:	e594028c 	ldr	r0, [r4, #652]	; fField652
         b93c4:	e2800001 	add	r0, r0, #1	; 0x1
         b93c8:	e5a4028c 	str	r0, [r4, #652]!	; fField652
         b93cc:	e3500003 	cmp	r0, #3	; 0x3
         b93d0:	9a000000 	bls	b93d8 <TFaxTool::AdjustSpeedForFTT(void)+0x1ac>
         b93d4:	e1a05001 	mov	r5, r1
         b93d8:	e1a00005 	mov	r0, r5
         b93dc:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         b93e0:	e3c0070f 	bic	r0, r0, #3932160	; 0x3c0000
         b93e4:	e380070a 	orr	r0, r0, #2621440	; 0x280000
         b93e8:	e58402ec 	str	r0, [r4, #748]	; fField748
         b93ec:	e3a00eee 	mov	r0, #3808	; 0xee0
         b93f0:	e2800a02 	add	r0, r0, #8192	; 0x2000
         b93f4:	e58402b0 	str	r0, [r4, #688]	; fField688
         b93f8:	e3a00b01 	mov	r0, #1024	; 0x400
         b93fc:	ea000005 	b	b9418 <TFaxTool::AdjustSpeedForFTT(void)+0x1ec>
         b9400:	e3c0070f 	bic	r0, r0, #3932160	; 0x3c0000
         b9404:	e3800701 	orr	r0, r0, #262144	; 0x40000
         b9408:	e58402ec 	str	r0, [r4, #748]	; fField748
         b940c:	e3a00d96 	mov	r0, #9600	; 0x2580
         b9410:	e58402b0 	str	r0, [r4, #688]	; fField688
         b9414:	e3a00040 	mov	r0, #64	; 0x40
         b9418:	e5a402a0 	str	r0, [r4, #672]!	; fField672
         b941c:	eaffffed 	b	b93d8 <TFaxTool::AdjustSpeedForFTT(void)+0x1ac>
         b9420:	e3c0070f 	bic	r0, r0, #3932160	; 0x3c0000
         b9424:	e5a422a0 	str	r2, [r4, #672]!	; fField672
         b9428:	e5a43010 	str	r3, [r4, #16]!	; fField16
         b942c:	e584003c 	str	r0, [r4, #60]	; fField60
         b9430:	eaffffe8 	b	b93d8 <TFaxTool::AdjustSpeedForFTT(void)+0x1ac>
         b9434:	e3c0070f 	bic	r0, r0, #3932160	; 0x3c0000
         b9438:	e3800702 	orr	r0, r0, #524288	; 0x80000
         b943c:	e5a462a0 	str	r6, [r4, #672]!	; fField672
         b9440:	e5a47010 	str	r7, [r4, #16]!	; fField16
         b9444:	e584003c 	str	r0, [r4, #60]	; fField60
         b9448:	eaffffe2 	b	b93d8 <TFaxTool::AdjustSpeedForFTT(void)+0x1ac>
    */
}

/**
 * Symbol: TFaxTool::VerifyTrainingCheck(unsigned long)
 * Address: 000b944c
 */
TFaxTool::VerifyTrainingCheck(unsigned long) {
    /*
         b944c:	e92d4010 	stmdb	sp!, {r4, lr}
         b9450:	e3a02000 	mov	r2, #0	; 0x0
         b9454:	e3510000 	cmp	r1, #0	; 0x0
         b9458:	9a00000e 	bls	b9498 <TFaxTool::VerifyTrainingCheck(unsigned long)+0x4c>
         b945c:	e3a0e000 	mov	lr, #0	; 0x0
         b9460:	e590c334 	ldr	ip, [r0, #820]	; fField820
         b9464:	e7dc3002 	ldrb	r3, [ip, r2]
         b9468:	e3330000 	teq	r3, #0	; 0x0
         b946c:	e5903290 	ldr	r3, [r0, #656]	; fField656
         b9470:	02833001 	addeq	r3, r3, #1	; 0x1
         b9474:	05803290 	streq	r3, [r0, #656]	; fField656
         b9478:	0a000003 	beq	b948c <TFaxTool::VerifyTrainingCheck(unsigned long)+0x40>
         b947c:	e5904294 	ldr	r4, [r0, #660]	; fField660
         b9480:	e1530004 	cmp	r3, r4
         b9484:	85803294 	strhi	r3, [r0, #660]	; fField660
         b9488:	e580e290 	str	lr, [r0, #656]	; fField656
         b948c:	e2822001 	add	r2, r2, #1	; 0x1
         b9490:	e1520001 	cmp	r2, r1
         b9494:	3afffff2 	bcc	b9464 <TFaxTool::VerifyTrainingCheck(unsigned long)+0x18>
         b9498:	e2802e29 	add	r2, r0, #656	; 0x290
         b949c:	e8920006 	ldmia	r2, {r1, r2}
         b94a0:	e1510002 	cmp	r1, r2
         b94a4:	85a01294 	strhi	r1, [r0, #660]!	; fField660
         b94a8:	e8bd8010 	ldmia	sp!, {r4, pc}
    */
}

/**
 * Symbol: TFaxTool::PhaseDBlackoutTimeout(void)
 * Address: 000b94ac
 */
TFaxTool::PhaseDBlackoutTimeout(void) {
    /*
         b94ac:	e3a01007 	mov	r1, #7	; 0x7
         b94b0:	e5801280 	str	r1, [r0, #640]	; fField640
         b94b4:	ea65b3a4 	b	1a2634c <TFaxTool::$GetCommand(void)>
    */
}

/**
 * Symbol: TFaxTool::PhaseAConnectModem(long)
 * Address: 000b94b8
 */
TFaxTool::PhaseAConnectModem(long) {
    /*
         b94b8:	e1a0c00d 	mov	ip, sp
         b94bc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         b94c0:	e24cb004 	sub	fp, ip, #4	; 0x4
         b94c4:	e1a04000 	mov	r4, r0
         b94c8:	e3310000 	teq	r1, #0	; 0x0
         b94cc:	1a000024 	bne	b9564 <TFaxTool::PhaseAConnectModem(long)+0xac>
         b94d0:	e5940018 	ldr	r0, [r4, #24]	; fField24
         b94d4:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
         b94d8:	e5840018 	str	r0, [r4, #24]	; fField24
         b94dc:	e284efb9 	add	lr, r4, #740	; 0x2e4
         b94e0:	e284cf63 	add	ip, r4, #396	; 0x18c
         b94e4:	e28ccb01 	add	ip, ip, #1024	; 0x400
         b94e8:	e2845f59 	add	r5, r4, #356	; 0x164
         b94ec:	e2855b01 	add	r5, r5, #1024	; 0x400
         b94f0:	e2840f67 	add	r0, r4, #412	; 0x19c
         b94f4:	e2800b01 	add	r0, r0, #1024	; 0x400
         b94f8:	e3a0103c 	mov	r1, #60	; 0x3c
         b94fc:	e3a02000 	mov	r2, #0	; 0x0
         b9500:	e3a03000 	mov	r3, #0	; 0x0
         b9504:	e3a06004 	mov	r6, #4	; 0x4
         b9508:	e3a07000 	mov	r7, #0	; 0x0
         b950c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9510:	e1a03007 	mov	r3, r7
         b9514:	e3a02001 	mov	r2, #1	; 0x1
         b9518:	e1a01006 	mov	r1, r6
         b951c:	e3a00028 	mov	r0, #40	; 0x28
         b9520:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b9524:	e1a03005 	mov	r3, r5
         b9528:	e92d0008 	stmdb	sp!, {r3}
         b952c:	e1a0000e 	mov	r0, lr
         b9530:	e3a03000 	mov	r3, #0	; 0x0
         b9534:	e49c1008 	ldr	r1, [ip], #8
         b9538:	e59c2000 	ldr	r2, [ip]
         b953c:	eb6c8602 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         b9540:	e28dd024 	add	sp, sp, #36	; 0x24
         b9544:	e1b01000 	movs	r1, r0
         b9548:	1a000005 	bne	b9564 <TFaxTool::PhaseAConnectModem(long)+0xac>
         b954c:	e594056c 	ldr	r0, [r4, #1388]	; fField1388
         b9550:	e3300004 	teq	r0, #4	; 0x4
         b9554:	13a00003 	movne	r0, #3	; 0x3
         b9558:	03a00002 	moveq	r0, #2	; 0x2
         b955c:	e5a40274 	str	r0, [r4, #628]!	; fField628
         b9560:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b9564:	e1a00004 	mov	r0, r4
         b9568:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         b956c:	ea657155 	b	1a15ac8 <TFaxTool::$PhaseAComplete(long)>
    */
}

/**
 * Symbol: TFaxTool::PhaseAAcceptModem(long)
 * Address: 000b9570
 */
TFaxTool::PhaseAAcceptModem(long) {
    /*
         b9570:	e1a0c00d 	mov	ip, sp
         b9574:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         b9578:	e24cb004 	sub	fp, ip, #4	; 0x4
         b957c:	e1a04000 	mov	r4, r0
         b9580:	e3310000 	teq	r1, #0	; 0x0
         b9584:	1a000025 	bne	b9620 <TFaxTool::PhaseAAcceptModem(long)+0xb0>
         b9588:	e5940018 	ldr	r0, [r4, #24]	; fField24
         b958c:	e3800401 	orr	r0, r0, #16777216	; 0x1000000
         b9590:	e5840018 	str	r0, [r4, #24]	; fField24
         b9594:	e3a00005 	mov	r0, #5	; 0x5
         b9598:	e3a0c000 	mov	ip, #0	; 0x0
         b959c:	e584056c 	str	r0, [r4, #1388]	; fField1388
         b95a0:	e584c578 	str	ip, [r4, #1400]	; fField1400
         b95a4:	e584c57c 	str	ip, [r4, #1404]	; fField1404
         b95a8:	e584c580 	str	ip, [r4, #1408]	; fField1408
         b95ac:	e2845fb9 	add	r5, r4, #740	; 0x2e4
         b95b0:	e284ef63 	add	lr, r4, #396	; 0x18c
         b95b4:	e28eeb01 	add	lr, lr, #1024	; 0x400
         b95b8:	e2846f59 	add	r6, r4, #356	; 0x164
         b95bc:	e2866b01 	add	r6, r6, #1024	; 0x400
         b95c0:	e2840f67 	add	r0, r4, #412	; 0x19c
         b95c4:	e2800b01 	add	r0, r0, #1024	; 0x400
         b95c8:	e3a0103c 	mov	r1, #60	; 0x3c
         b95cc:	e3a02000 	mov	r2, #0	; 0x0
         b95d0:	e3a03000 	mov	r3, #0	; 0x0
         b95d4:	e3a07004 	mov	r7, #4	; 0x4
         b95d8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b95dc:	e1a0300c 	mov	r3, ip
         b95e0:	e3a02001 	mov	r2, #1	; 0x1
         b95e4:	e1a01007 	mov	r1, r7
         b95e8:	e3a00028 	mov	r0, #40	; 0x28
         b95ec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         b95f0:	e1a03006 	mov	r3, r6
         b95f4:	e92d0008 	stmdb	sp!, {r3}
         b95f8:	e1a00005 	mov	r0, r5
         b95fc:	e3a03000 	mov	r3, #0	; 0x0
         b9600:	e49e1008 	ldr	r1, [lr], #8
         b9604:	e59e2000 	ldr	r2, [lr]
         b9608:	eb6c85cf 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         b960c:	e28dd024 	add	sp, sp, #36	; 0x24
         b9610:	e1b01000 	movs	r1, r0
         b9614:	03a00003 	moveq	r0, #3	; 0x3
         b9618:	05a40274 	streq	r0, [r4, #628]!	; fField628
         b961c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         b9620:	e1a00004 	mov	r0, r4
         b9624:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         b9628:	ea6c1e98 	b	1bc1090 <TCommTool::$StartAbort(long)>
    */
}

/**
 * Symbol: TFaxTool::__ct(unsigned long)
 * Address: 000b962c
 */
TFaxTool::TFaxTool(unsigned long) {
    /*
         b962c:	e1a0c00d 	mov	ip, sp
         b9630:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         b9634:	e24cb004 	sub	fp, ip, #4	; 0x4
         b9638:	e1b04000 	movs	r4, r0
         b963c:	e1a05001 	mov	r5, r1
         b9640:	1a000004 	bne	b9658 <TFaxTool::__ct(unsigned long)+0x2c>
         b9644:	e3a0008c 	mov	r0, #140	; 0x8c
         b9648:	e2800b02 	add	r0, r0, #2048	; 0x800
         b964c:	eb6c5439 	bl	1bce738 <$__nw(unsigned int)>
         b9650:	e1b04000 	movs	r4, r0
         b9654:	0a00004a 	beq	b9784 <TFaxTool::__ct(unsigned long)+0x158>
         b9658:	e1a01005 	mov	r1, r5
         b965c:	e1a00004 	mov	r0, r4
         b9660:	eb6c0df7 	bl	1bbce44 <TCommTool::$__ct(unsigned long)>
         b9664:	e2840fb1 	add	r0, r4, #708	; 0x2c4
         b9668:	eb6c09d6 	bl	1bbbdc8 <TCMOFaxDirection::$__ct(void)>
         b966c:	e3a00000 	mov	r0, #0	; 0x0
         b9670:	e5c402e8 	strb	r0, [r4, #744]
         b9674:	e58402e4 	str	r0, [r4, #740]
         b9678:	e2840fc3 	add	r0, r4, #780	; 0x30c
         b967c:	eb659623 	bl	1a1ef10 <TCMOModemFaxEnabledCaps::$__ct(void)>
         b9680:	e2841ffb 	add	r1, r4, #1004	; 0x3ec
         b9684:	e2840fcf 	add	r0, r4, #828	; 0x33c
         b9688:	e59f50fc 	ldr	r5, [pc, #fc]	; b978c <TFaxTool::__ct(unsigned long)+0x160>
         b968c:	e1a03005 	mov	r3, r5
         b9690:	e3a02058 	mov	r2, #88	; 0x58
         b9694:	eb652efa 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         b9698:	e28410c4 	add	r1, r4, #196	; 0xc4
         b969c:	e2811b01 	add	r1, r1, #1024	; 0x400
         b96a0:	e2840014 	add	r0, r4, #20	; 0x14
         b96a4:	e2800b01 	add	r0, r0, #1024	; 0x400
         b96a8:	e1a03005 	mov	r3, r5
         b96ac:	e3a02058 	mov	r2, #88	; 0x58
         b96b0:	eb652ef3 	bl	1a05284 <$__vc__FPvT1iPFPv_v>
         b96b4:	e28400d4 	add	r0, r4, #212	; 0xd4
         b96b8:	e2800b01 	add	r0, r0, #1024	; 0x400
         b96bc:	eb65cbee 	bl	1a2c67c <TT4FaxLine::$__ct(void)>
         b96c0:	e2840f46 	add	r0, r4, #280	; 0x118
         b96c4:	e2800b01 	add	r0, r0, #1024	; 0x400
         b96c8:	eb6cd840 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         b96cc:	e2840f51 	add	r0, r4, #324	; 0x144
         b96d0:	e2800b01 	add	r0, r0, #1024	; 0x400
         b96d4:	eb6cd843 	bl	1bef7e8 <TCommToolBindRequest::$__ct(void)>
         b96d8:	e2840f59 	add	r0, r4, #356	; 0x164
         b96dc:	e2800b01 	add	r0, r0, #1024	; 0x400
         b96e0:	eb6cd83e 	bl	1bef7e0 <TCommToolConnectRequest::$__ct(void)>
         b96e4:	e2840f63 	add	r0, r4, #396	; 0x18c
         b96e8:	e2800b01 	add	r0, r0, #1024	; 0x400
         b96ec:	eb6c4fee 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         b96f0:	e2840f67 	add	r0, r4, #412	; 0x19c
         b96f4:	e2800b01 	add	r0, r0, #1024	; 0x400
         b96f8:	eb65cff9 	bl	1a2d6e4 <TClassOneModemCmdReply::$__ct(void)>
         b96fc:	e2840f76 	add	r0, r4, #472	; 0x1d8
         b9700:	e2800b01 	add	r0, r0, #1024	; 0x400
         b9704:	eb6cd83a 	bl	1bef7f4 <TCommToolKillRequest::$__ct(void)>
         b9708:	e2840f79 	add	r0, r4, #484	; 0x1e4
         b970c:	e2800b01 	add	r0, r0, #1024	; 0x400
         b9710:	eb6c4fe5 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         b9714:	e2840f7d 	add	r0, r4, #500	; 0x1f4
         b9718:	e2800b01 	add	r0, r0, #1024	; 0x400
         b971c:	eb6cd824 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         b9720:	e2840f81 	add	r0, r4, #516	; 0x204
         b9724:	e2800b01 	add	r0, r0, #1024	; 0x400
         b9728:	eb6bf0ed 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         b972c:	e2840f87 	add	r0, r4, #540	; 0x21c
         b9730:	e2800b01 	add	r0, r0, #1024	; 0x400
         b9734:	eb6cd82c 	bl	1bef7ec <TCommToolOptionMgmtRequest::$__ct(void)>
         b9738:	e2840d19 	add	r0, r4, #1600	; 0x640
         b973c:	eb6c4fda 	bl	1bcd6ac <TUAsyncMessage::$__ct(void)>
         b9740:	e2840f96 	add	r0, r4, #600	; 0x258
         b9744:	e2800b01 	add	r0, r0, #1024	; 0x400
         b9748:	eb6ca69c 	bl	1be31c0 <CBufferList::$__ct(void)>
         b974c:	e2840f9e 	add	r0, r4, #632	; 0x278
         b9750:	e2800b01 	add	r0, r0, #1024	; 0x400
         b9754:	eb6caaaa 	bl	1be4204 <CBufferSegment::$__ct(void)>
         b9758:	e2840fea 	add	r0, r4, #936	; 0x3a8
         b975c:	e2800b01 	add	r0, r0, #1024	; 0x400
         b9760:	eb6ca696 	bl	1be31c0 <CBufferList::$__ct(void)>
         b9764:	e2840ff3 	add	r0, r4, #972	; 0x3cc
         b9768:	e2800b01 	add	r0, r0, #1024	; 0x400
         b976c:	eb6c0989 	bl	1bbbd98 <TCMOFaxRemoteId::$__ct(void)>
         b9770:	e2840078 	add	r0, r4, #120	; 0x78
         b9774:	e2800b02 	add	r0, r0, #2048	; 0x800
         b9778:	eb6c0994 	bl	1bbbdd0 <TCMOFramingParms::$__ct(void)>
         b977c:	e59f000c 	ldr	r0, [pc, #c]	; b9790 <TFaxTool::__ct(unsigned long)+0x164>
         b9780:	e5840000 	str	r0, [r4]
         b9784:	e1a00004 	mov	r0, r4
         b9788:	e91ba830 	ldmdb	fp, {r4, r5, fp, sp, pc}
         b978c:	0038ac80 	eoreqs	sl, r8, r0, lsl #25
         b9790:	0002002c 	andeq	r0, r2, ip, lsr #32
    */
}

/**
 * Symbol: TFaxTool::__dt(void)
 * Address: 000bb2dc
 */
TFaxTool::~TFaxTool(void) {
    /*
         bb2dc:	e1a0c00d 	mov	ip, sp
         bb2e0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         bb2e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         bb2e8:	e1a04000 	mov	r4, r0
         bb2ec:	e1a05001 	mov	r5, r1
         bb2f0:	e59f00dc 	ldr	r0, [pc, #dc]	; bb3d4 <TFaxTool::__dt(void)+0xf8>
         bb2f4:	e5840000 	str	r0, [r4]
         bb2f8:	e2840fea 	add	r0, r4, #936	; 0x3a8
         bb2fc:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb300:	e3a01000 	mov	r1, #0	; 0x0
         bb304:	eb6ca3d1 	bl	1be4250 <CBufferList::$__dt(void)>
         bb308:	e2840f9e 	add	r0, r4, #632	; 0x278
         bb30c:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb310:	e3a01000 	mov	r1, #0	; 0x0
         bb314:	eb6ca3d4 	bl	1be426c <CBufferSegment::$__dt(void)>
         bb318:	e2840f96 	add	r0, r4, #600	; 0x258
         bb31c:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb320:	e3a01000 	mov	r1, #0	; 0x0
         bb324:	eb6ca3c9 	bl	1be4250 <CBufferList::$__dt(void)>
         bb328:	e2840d19 	add	r0, r4, #1600	; 0x640
         bb32c:	e3a01000 	mov	r1, #0	; 0x0
         bb330:	eb6c4cf6 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         bb334:	e2840f81 	add	r0, r4, #516	; 0x204
         bb338:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb33c:	e3a01000 	mov	r1, #0	; 0x0
         bb340:	eb6bedf9 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         bb344:	e2840f79 	add	r0, r4, #484	; 0x1e4
         bb348:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb34c:	e3a01000 	mov	r1, #0	; 0x0
         bb350:	eb6c4cee 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         bb354:	e2840f63 	add	r0, r4, #396	; 0x18c
         bb358:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb35c:	e3a01000 	mov	r1, #0	; 0x0
         bb360:	eb6c4cea 	bl	1bce710 <TUAsyncMessage::$__dt(void)>
         bb364:	e28400d4 	add	r0, r4, #212	; 0xd4
         bb368:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb36c:	e3a01000 	mov	r1, #0	; 0x0
         bb370:	eb65c8d2 	bl	1a2d6c0 <TT4FaxLine::$__dt(void)>
         bb374:	e2841fef 	add	r1, r4, #956	; 0x3bc
         bb378:	e284006c 	add	r0, r4, #108	; 0x6c
         bb37c:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb380:	e59f7050 	ldr	r7, [pc, #50]	; bb3d8 <TFaxTool::__dt(void)+0xfc>
         bb384:	e1a03007 	mov	r3, r7
         bb388:	e3e02057 	mvn	r2, #87	; 0x57
         bb38c:	eb6527bd 	bl	1a05288 <$__vc__FPvT1iPFPvi_v>
         bb390:	e2841fb9 	add	r1, r4, #740	; 0x2e4
         bb394:	e1a06001 	mov	r6, r1
         bb398:	e2840fe5 	add	r0, r4, #916	; 0x394
         bb39c:	e1a03007 	mov	r3, r7
         bb3a0:	e3e02057 	mvn	r2, #87	; 0x57
         bb3a4:	eb6527b7 	bl	1a05288 <$__vc__FPvT1iPFPvi_v>
         bb3a8:	e1a00006 	mov	r0, r6
         bb3ac:	e3a01000 	mov	r1, #0	; 0x0
         bb3b0:	eb6c4cdb 	bl	1bce724 <TUObject::$__dt(void)>
         bb3b4:	e1a00004 	mov	r0, r4
         bb3b8:	e3a01000 	mov	r1, #0	; 0x0
         bb3bc:	eb6c06a1 	bl	1bbce48 <TCommTool::$__dt(void)>
         bb3c0:	e3150001 	tst	r5, #1	; 0x1
         bb3c4:	11a00004 	movne	r0, r4
         bb3c8:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
         bb3cc:	1a6c48c3 	bne	1bcd6e0 <$__dl(void *)>
         bb3d0:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         bb3d4:	0002002c 	andeq	r0, r2, ip, lsr #32
         bb3d8:	0038b17c 	eoreqs	fp, r8, ip, ror r1
    */
}

/**
 * Symbol: TFaxTool::FreeReceiveBuffers(void)
 * Address: 000bb3dc
 */
TFaxTool::FreeReceiveBuffers(void) {
    /*
         bb3dc:	e1a0c00d 	mov	ip, sp
         bb3e0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         bb3e4:	e24cb004 	sub	fp, ip, #4	; 0x4
         bb3e8:	e1a04000 	mov	r4, r0
         bb3ec:	e3a05000 	mov	r5, #0	; 0x0
         bb3f0:	e3a06000 	mov	r6, #0	; 0x0
         bb3f4:	e0850085 	add	r0, r5, r5, lsl #1
         bb3f8:	e0800185 	add	r0, r0, r5, lsl #3
         bb3fc:	e0847180 	add	r7, r4, r0, lsl #3
         bb400:	e597043c 	ldr	r0, [r7, #1084]	; fField1084
         bb404:	e3300000 	teq	r0, #0	; 0x0
         bb408:	0a000001 	beq	bb414 <TFaxTool::FreeReceiveBuffers(void)+0x38>
         bb40c:	eb6c5d51 	bl	1bd2958 <$free>
         bb410:	e5a7643c 	str	r6, [r7, #1084]!	; fField1084
         bb414:	e0847105 	add	r7, r4, r5, lsl #2
         bb418:	e59704c8 	ldr	r0, [r7, #1224]
         bb41c:	e3300000 	teq	r0, #0	; 0x0
         bb420:	0a000001 	beq	bb42c <TFaxTool::FreeReceiveBuffers(void)+0x50>
         bb424:	eb6c5d4b 	bl	1bd2958 <$free>
         bb428:	e5a764c8 	str	r6, [r7, #1224]!
         bb42c:	e2855001 	add	r5, r5, #1	; 0x1
         bb430:	e3550002 	cmp	r5, #2	; 0x2
         bb434:	baffffee 	blt	bb3f4 <TFaxTool::FreeReceiveBuffers(void)+0x18>
         bb438:	e5940508 	ldr	r0, [r4, #1288]	; fField1288
         bb43c:	e3300000 	teq	r0, #0	; 0x0
         bb440:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         bb444:	eb6c5d43 	bl	1bd2958 <$free>
         bb448:	e5846508 	str	r6, [r4, #1288]	; fField1288
         bb44c:	e28400d4 	add	r0, r4, #212	; 0xd4
         bb450:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb454:	e3a02000 	mov	r2, #0	; 0x0
         bb458:	e3a01000 	mov	r1, #0	; 0x0
         bb45c:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         bb460:	ea65afd9 	b	1a273cc <TT4FaxLine::$Init(unsigned char *, int)>
    */
}

/**
 * Symbol: TFaxTool::GetSizeOf(void)
 * Address: 000bb464
 */
TFaxTool::GetSizeOf(void) {
    /*
         bb464:	e3a0008c 	mov	r0, #140	; 0x8c
         bb468:	e2800b02 	add	r0, r0, #2048	; 0x800
         bb46c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxTool::Init(void)
 * Address: 000bb470
 */
TFaxTool::Init(void) {
    /*
         bb470:	e1a0c00d 	mov	ip, sp
         bb474:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         bb478:	e24cb004 	sub	fp, ip, #4	; 0x4
         bb47c:	e1a04000 	mov	r4, r0
         bb480:	e2801f79 	add	r1, r0, #484	; 0x1e4
         bb484:	e2811b01 	add	r1, r1, #1024	; 0x400
         bb488:	e3a02000 	mov	r2, #0	; 0x0
         bb48c:	eb6c12dd 	bl	1bc0008 <TCommTool::$InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
         bb490:	e1b05000 	movs	r5, r0
         bb494:	1a00001c 	bne	bb50c <TFaxTool::Init(void)+0x9c>
         bb498:	e2841f63 	add	r1, r4, #396	; 0x18c
         bb49c:	e2811b01 	add	r1, r1, #1024	; 0x400
         bb4a0:	e1a00004 	mov	r0, r4
         bb4a4:	e3a02001 	mov	r2, #1	; 0x1
         bb4a8:	eb6c12d6 	bl	1bc0008 <TCommTool::$InitAsyncRPCMsg(TUAsyncMessage &, unsigned long)>
         bb4ac:	e1b05000 	movs	r5, r0
         bb4b0:	1a000015 	bne	bb50c <TFaxTool::Init(void)+0x9c>
         bb4b4:	e2840d19 	add	r0, r4, #1600	; 0x640
         bb4b8:	e3a01001 	mov	r1, #1	; 0x1
         bb4bc:	eb6c6974 	bl	1bd5a94 <TUAsyncMessage::$Init(unsigned char)>
         bb4c0:	e1b05000 	movs	r5, r0
         bb4c4:	1a000010 	bne	bb50c <TFaxTool::Init(void)+0x9c>
         bb4c8:	e3e03000 	mvn	r3, #0	; 0x0
         bb4cc:	e3a02000 	mov	r2, #0	; 0x0
         bb4d0:	e92d000c 	stmdb	sp!, {r2, r3}
         bb4d4:	e2841e6a 	add	r1, r4, #1696	; 0x6a0
         bb4d8:	e2840f9e 	add	r0, r4, #632	; 0x278
         bb4dc:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb4e0:	e1a06000 	mov	r6, r0
         bb4e4:	e3a03000 	mov	r3, #0	; 0x0
         bb4e8:	e3a02006 	mov	r2, #6	; 0x6
         bb4ec:	e2822c01 	add	r2, r2, #256	; 0x100
         bb4f0:	eb6cb7ed 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         bb4f4:	e28dd008 	add	sp, sp, #8	; 0x8
         bb4f8:	e1b05000 	movs	r5, r0
         bb4fc:	01a01006 	moveq	r1, r6
         bb500:	02840f96 	addeq	r0, r4, #600	; 0x258
         bb504:	02800b01 	addeq	r0, r0, #1024	; 0x400
         bb508:	0b6cbbfd 	bleq	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         bb50c:	e1a00005 	mov	r0, r5
         bb510:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::GetToolName(void)
 * Address: 000bb514
 */
TFaxTool::GetToolName(void) {
    /*
         bb514:	e28f0f00 	add	r0, pc, #0	; 0x0
         bb518:	e1a0f00e 	mov	pc, lr
         bb51c:	46617820 	strmibt	r7, [r1], -r0, lsr #16	; fField16
         bb520:	546f6f6c 	strplbt	r6, [pc], #f6c	; bb528 <TFaxTool::OpenStart(TOptionArray *)>
         bb524:	00000000 	andeq	r0, r0, r0
    */
}

/**
 * Symbol: TFaxTool::OpenStart(TOptionArray *)
 * Address: 000bb528
 */
TFaxTool::OpenStart(TOptionArray *) {
    /*
         bb528:	e1a0c00d 	mov	ip, sp
         bb52c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         bb530:	e24cb004 	sub	fp, ip, #4	; 0x4
         bb534:	e1a05000 	mov	r5, r0
         bb538:	e1a04001 	mov	r4, r1
         bb53c:	e24dd00c 	sub	sp, sp, #12	; 0xc
         bb540:	eb6c12bb 	bl	1bc0034 <TCommTool::$OpenStart(TOptionArray *)>
         bb544:	e1b06000 	movs	r6, r0
         bb548:	1a000006 	bne	bb568 <TFaxTool::OpenStart(TOptionArray *)+0x40>
         bb54c:	e1a0100d 	mov	r1, sp
         bb550:	e1a00004 	mov	r0, r4
         bb554:	eb6bf19a 	bl	1bb7bc4 <$CMStartServiceInternal(TOptionArray *, TServiceInfo *)>
         bb558:	e1b06000 	movs	r6, r0
         bb55c:	02850fb9 	addeq	r0, r5, #740	; 0x2e4
         bb560:	059d1004 	ldreq	r1, [sp, #4]	; fField4
         bb564:	0b6c54b7 	bleq	1bd0848 <TUObject::$CopyObject(unsigned long const)>
         bb568:	e1a00006 	mov	r0, r6
         bb56c:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::CloseComplete(long)
 * Address: 000bb570
 */
TFaxTool::CloseComplete(long) {
    /*
         bb570:	e1a0c00d 	mov	ip, sp
         bb574:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         bb578:	e24cb004 	sub	fp, ip, #4	; 0x4
         bb57c:	e1a05000 	mov	r5, r0
         bb580:	e1a04001 	mov	r4, r1
         bb584:	e24dd020 	sub	sp, sp, #32	; 0x20
         bb588:	e28d0010 	add	r0, sp, #16	; 0x10
         bb58c:	eb6cd088 	bl	1bef7b4 <TCommToolReply::$__ct(void)>
         bb590:	e28d0004 	add	r0, sp, #4	; 0x4
         bb594:	eb6cd08d 	bl	1bef7d0 <TCommToolControlRequest::$__ct(void)>
         bb598:	e3a00002 	mov	r0, #2	; 0x2
         bb59c:	e285cfb9 	add	ip, r5, #740	; 0x2e4
         bb5a0:	e58d000c 	str	r0, [sp, #12]
         bb5a4:	e28d0010 	add	r0, sp, #16	; 0x10
         bb5a8:	e3a01010 	mov	r1, #16	; 0x10
         bb5ac:	e3a02000 	mov	r2, #0	; 0x0
         bb5b0:	e3a0e004 	mov	lr, #4	; 0x4
         bb5b4:	e3a06000 	mov	r6, #0	; 0x0
         bb5b8:	e3a03000 	mov	r3, #0	; 0x0
         bb5bc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bb5c0:	e1a03006 	mov	r3, r6
         bb5c4:	e1a0100e 	mov	r1, lr
         bb5c8:	e3a0000c 	mov	r0, #12	; 0xc
         bb5cc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bb5d0:	e28d3024 	add	r3, sp, #36	; 0x24
         bb5d4:	e92d0008 	stmdb	sp!, {r3}
         bb5d8:	e28d3024 	add	r3, sp, #36	; 0x24
         bb5dc:	e1a0000c 	mov	r0, ip
         bb5e0:	e3a02002 	mov	r2, #2	; 0x2
         bb5e4:	e3a01001 	mov	r1, #1	; 0x1
         bb5e8:	eb6c7dd7 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bb5ec:	e28dd024 	add	sp, sp, #36	; 0x24
         bb5f0:	e3340000 	teq	r4, #0	; 0x0
         bb5f4:	01a01000 	moveq	r1, r0
         bb5f8:	11a01004 	movne	r1, r4
         bb5fc:	e1a00005 	mov	r0, r5
         bb600:	eb6c0619 	bl	1bbce6c <TCommTool::$CloseComplete(long)>
         bb604:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::ConnectStart(void)
 * Address: 000bb608
 */
TFaxTool::ConnectStart(void) {
    /*
         bb608:	e3a01008 	mov	r1, #8	; 0x8
         bb60c:	e5902818 	ldr	r2, [r0, #2072]	; fField2072
         bb610:	e3320004 	teq	r2, #4	; 0x4
         bb614:	05801270 	streq	r1, [r0, #624]	; fField624
         bb618:	03a01001 	moveq	r1, #1	; 0x1
         bb61c:	0a658a2c 	beq	1a1ded4 <TFaxTool::$C2StateUpdate(unsigned long)>
         bb620:	e3320008 	teq	r2, #8	; 0x8
         bb624:	05801270 	streq	r1, [r0, #624]	; fField624
         bb628:	03a01001 	moveq	r1, #1	; 0x1
         bb62c:	0a65860b 	beq	1a1ce60 <TFaxTool::$C20StateUpdate(unsigned long)>
         bb630:	e590126c 	ldr	r1, [r0, #620]	; fField620
         bb634:	e3811004 	orr	r1, r1, #4	; 0x4
         bb638:	e580126c 	str	r1, [r0, #620]	; fField620
         bb63c:	ea657dbb 	b	1a1ad30 <TFaxTool::$StartPhaseA(void)>
    */
}

/**
 * Symbol: TFaxTool::ListenStart(void)
 * Address: 000bb640
 */
TFaxTool::ListenStart(void) {
    /*
         bb640:	e3a01008 	mov	r1, #8	; 0x8
         bb644:	e5902818 	ldr	r2, [r0, #2072]	; fField2072
         bb648:	e3320004 	teq	r2, #4	; 0x4
         bb64c:	05801270 	streq	r1, [r0, #624]	; fField624
         bb650:	03a01002 	moveq	r1, #2	; 0x2
         bb654:	0a658a1e 	beq	1a1ded4 <TFaxTool::$C2StateUpdate(unsigned long)>
         bb658:	e3320008 	teq	r2, #8	; 0x8
         bb65c:	05801270 	streq	r1, [r0, #624]	; fField624
         bb660:	03a01002 	moveq	r1, #2	; 0x2
         bb664:	0a6585fd 	beq	1a1ce60 <TFaxTool::$C20StateUpdate(unsigned long)>
         bb668:	e590126c 	ldr	r1, [r0, #620]	; fField620
         bb66c:	e3c11004 	bic	r1, r1, #4	; 0x4
         bb670:	e580126c 	str	r1, [r0, #620]	; fField620
         bb674:	ea657dad 	b	1a1ad30 <TFaxTool::$StartPhaseA(void)>
    */
}

/**
 * Symbol: TFaxTool::AcceptStart(void)
 * Address: 000bb678
 */
TFaxTool::AcceptStart(void) {
    /*
         bb678:	e3a01000 	mov	r1, #0	; 0x0
         bb67c:	e5902000 	ldr	r2, [r0]
         bb680:	e282f064 	add	pc, r2, #100	; 0x64
    */
}

/**
 * Symbol: TFaxTool::BindStart(void)
 * Address: 000bb684
 */
TFaxTool::BindStart(void) {
    /*
         bb684:	e1a0c00d 	mov	ip, sp
         bb688:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         bb68c:	e24cb004 	sub	fp, ip, #4	; 0x4
         bb690:	e1a04000 	mov	r4, r0
         bb694:	e24dd018 	sub	sp, sp, #24	; 0x18
         bb698:	e1a0000d 	mov	r0, sp
         bb69c:	eb6c01d1 	bl	1bbbde8 <TCMOSerialBuffers::$__ct(void)>
         bb6a0:	e3a05000 	mov	r5, #0	; 0x0
         bb6a4:	e5845814 	str	r5, [r4, #2068]	; fField2068
         bb6a8:	e5940184 	ldr	r0, [r4, #388]	; fField388
         bb6ac:	e584055c 	str	r0, [r4, #1372]	; fField1372
         bb6b0:	e5c45558 	strb	r5, [r4, #1368]	; fField1368
         bb6b4:	e3a01008 	mov	r1, #8	; 0x8
         bb6b8:	e584154c 	str	r1, [r4, #1356]	; fField1356
         bb6bc:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         bb6c0:	e3110802 	tst	r1, #131072	; 0x20000
         bb6c4:	0a000019 	beq	bb730 <TFaxTool::BindStart(void)+0xac>
         bb6c8:	e3300000 	teq	r0, #0	; 0x0
         bb6cc:	1a00000b 	bne	bb700 <TFaxTool::BindStart(void)+0x7c>
         bb6d0:	e3a00000 	mov	r0, #0	; 0x0
         bb6d4:	eb6be902 	bl	1bb5ae4 <TOptionArray::$__ct(void)>
         bb6d8:	e5840814 	str	r0, [r4, #2068]	; fField2068
         bb6dc:	e3300000 	teq	r0, #0	; 0x0
         bb6e0:	03a060e9 	moveq	r6, #233	; 0xe9
         bb6e4:	02466b0a 	subeq	r6, r6, #10240	; 0x2800
         bb6e8:	0a000040 	beq	bb7f0 <TFaxTool::BindStart(void)+0x16c>
         bb6ec:	eb6bf562 	bl	1bb8c7c <TOptionArray::$Init(void)>
         bb6f0:	e1b06000 	movs	r6, r0
         bb6f4:	1a000037 	bne	bb7d8 <TFaxTool::BindStart(void)+0x154>
         bb6f8:	e5940814 	ldr	r0, [r4, #2068]	; fField2068
         bb6fc:	e584055c 	str	r0, [r4, #1372]	; fField1372
         bb700:	e3a00b0b 	mov	r0, #11264	; 0x2c00
         bb704:	e58d0010 	str	r0, [sp, #16]	; fField16
         bb708:	e59d0008 	ldr	r0, [sp, #8]
         bb70c:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         bb710:	e3800c01 	orr	r0, r0, #256	; 0x100
         bb714:	e58d0008 	str	r0, [sp, #8]
         bb718:	e1a0200d 	mov	r2, sp
         bb71c:	e594055c 	ldr	r0, [r4, #1372]	; fField1372
         bb720:	e5901000 	ldr	r1, [r0]
         bb724:	eb6bf95e 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         bb728:	e1b06000 	movs	r6, r0
         bb72c:	1a000029 	bne	bb7d8 <TFaxTool::BindStart(void)+0x154>
         bb730:	e2847fb9 	add	r7, r4, #740	; 0x2e4
         bb734:	e284cf63 	add	ip, r4, #396	; 0x18c
         bb738:	e28ccb01 	add	ip, ip, #1024	; 0x400
         bb73c:	e284ef51 	add	lr, r4, #324	; 0x144
         bb740:	e28eeb01 	add	lr, lr, #1024	; 0x400
         bb744:	e2840f67 	add	r0, r4, #412	; 0x19c
         bb748:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb74c:	e3a0103c 	mov	r1, #60	; 0x3c
         bb750:	e3a02000 	mov	r2, #0	; 0x0
         bb754:	e3a03000 	mov	r3, #0	; 0x0
         bb758:	e3a06004 	mov	r6, #4	; 0x4
         bb75c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bb760:	e1a03005 	mov	r3, r5
         bb764:	e3a02001 	mov	r2, #1	; 0x1
         bb768:	e1a01006 	mov	r1, r6
         bb76c:	e3a00020 	mov	r0, #32	; 0x20
         bb770:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bb774:	e1a0300e 	mov	r3, lr
         bb778:	e92d0008 	stmdb	sp!, {r3}
         bb77c:	e1a00007 	mov	r0, r7
         bb780:	e3a03000 	mov	r3, #0	; 0x0
         bb784:	e49c1008 	ldr	r1, [ip], #8
         bb788:	e59c2000 	ldr	r2, [ip]
         bb78c:	eb6c7d6e 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bb790:	e28dd024 	add	sp, sp, #36	; 0x24
         bb794:	e1b06000 	movs	r6, r0
         bb798:	1a000007 	bne	bb7bc <TFaxTool::BindStart(void)+0x138>
         bb79c:	e3a00005 	mov	r0, #5	; 0x5
         bb7a0:	e5840270 	str	r0, [r4, #624]	; fField624
         bb7a4:	e3a00001 	mov	r0, #1	; 0x1
         bb7a8:	e584081c 	str	r0, [r4, #2076]	; fField2076
         bb7ac:	e5940018 	ldr	r0, [r4, #24]	; fField24
         bb7b0:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
         bb7b4:	e5a40018 	str	r0, [r4, #24]!	; fField24
         bb7b8:	ea000011 	b	bb804 <TFaxTool::BindStart(void)+0x180>
         bb7bc:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         bb7c0:	e3100802 	tst	r0, #131072	; 0x20000
         bb7c4:	0a000003 	beq	bb7d8 <TFaxTool::BindStart(void)+0x154>
         bb7c8:	e594055c 	ldr	r0, [r4, #1372]	; fField1372
         bb7cc:	e5901000 	ldr	r1, [r0]
         bb7d0:	e2411001 	sub	r1, r1, #1	; 0x1
         bb7d4:	eb6bfd4c 	bl	1bbad0c <TOptionArray::$RemoveOptionAt(long)>
         bb7d8:	e5940814 	ldr	r0, [r4, #2068]	; fField2068
         bb7dc:	e3300000 	teq	r0, #0	; 0x0
         bb7e0:	0a000002 	beq	bb7f0 <TFaxTool::BindStart(void)+0x16c>
         bb7e4:	e3a01001 	mov	r1, #1	; 0x1
         bb7e8:	eb6beccf 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         bb7ec:	e5845814 	str	r5, [r4, #2068]	; fField2068
         bb7f0:	e1a01006 	mov	r1, r6
         bb7f4:	e1a00004 	mov	r0, r4
         bb7f8:	e5942000 	ldr	r2, [r4]
         bb7fc:	e1a0e00f 	mov	lr, pc
         bb800:	e282f078 	add	pc, r2, #120	; 0x78
         bb804:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::TaskConstructor(void)
 * Address: 000bb808
 */
TFaxTool::TaskConstructor(void) {
    /*
         bb808:	e1a0c00d 	mov	ip, sp
         bb80c:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         bb810:	e24cb004 	sub	fp, ip, #4	; 0x4
         bb814:	e1a04000 	mov	r4, r0
         bb818:	eb6c161f 	bl	1bc109c <TCommTool::$TaskConstructor(void)>
         bb81c:	e1b05000 	movs	r5, r0
         bb820:	1a00006a 	bne	bb9d0 <TFaxTool::TaskConstructor(void)+0x1c8>
         bb824:	e3a08000 	mov	r8, #0	; 0x0
         bb828:	e584826c 	str	r8, [r4, #620]	; fField620
         bb82c:	e3a00001 	mov	r0, #1	; 0x1
         bb830:	e5840278 	str	r0, [r4, #632]	; fField632
         bb834:	e5848270 	str	r8, [r4, #624]	; fField624
         bb838:	e5840280 	str	r0, [r4, #640]	; fField640
         bb83c:	e3a00003 	mov	r0, #3	; 0x3
         bb840:	e5840284 	str	r0, [r4, #644]	; fField644
         bb844:	e3a00040 	mov	r0, #64	; 0x40
         bb848:	e58402a0 	str	r0, [r4, #672]	; fField672
         bb84c:	e584829c 	str	r8, [r4, #668]	; fField668
         bb850:	e58482fc 	str	r8, [r4, #764]	; fField764
         bb854:	e1a00004 	mov	r0, r4
         bb858:	eb65790c 	bl	1a19c90 <TFaxTool::$SetDefaultCapabilities(void)>
         bb85c:	e2842e7f 	add	r2, r4, #2032	; 0x7f0
         bb860:	e1a00004 	mov	r0, r4
         bb864:	e28f1f54 	add	r1, pc, #336	; 0x150
         bb868:	eb65790f 	bl	1a19cac <TFaxTool::$SetIdentification(unsigned char const *const, unsigned char *const)>
         bb86c:	e5c48860 	strb	r8, [r4, #2144]	; fField2144
         bb870:	e5848334 	str	r8, [r4, #820]	; fField820
         bb874:	e5848338 	str	r8, [r4, #824]	; fField824
         bb878:	e58483f0 	str	r8, [r4, #1008]	; fField1008
         bb87c:	e58483fc 	str	r8, [r4, #1020]	; fField1020
         bb880:	e5848404 	str	r8, [r4, #1028]	; fField1028
         bb884:	e5848410 	str	r8, [r4, #1040]	; fField1040
         bb888:	e5848804 	str	r8, [r4, #2052]	; fField2052
         bb88c:	e584840c 	str	r8, [r4, #1036]	; fField1036
         bb890:	e5848308 	str	r8, [r4, #776]	; fField776
         bb894:	e3a00c02 	mov	r0, #512	; 0x200
         bb898:	e58403ec 	str	r0, [r4, #1004]	; fField1004
         bb89c:	e5848304 	str	r8, [r4, #772]	; fField772
         bb8a0:	e2840ff3 	add	r0, r4, #972	; 0x3cc
         bb8a4:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb8a8:	e5901008 	ldr	r1, [r0, #8]
         bb8ac:	e3c11cff 	bic	r1, r1, #65280	; 0xff00
         bb8b0:	e3811b01 	orr	r1, r1, #1024	; 0x400
         bb8b4:	e5a01008 	str	r1, [r0, #8]!
         bb8b8:	e2840f96 	add	r0, r4, #600	; 0x258
         bb8bc:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb8c0:	e3a01000 	mov	r1, #0	; 0x0
         bb8c4:	eb6cb6f0 	bl	1be948c <CBufferList::$Init(unsigned char)>
         bb8c8:	e1b05000 	movs	r5, r0
         bb8cc:	1a00003b 	bne	bb9c0 <TFaxTool::TaskConstructor(void)+0x1b8>
         bb8d0:	e2840fea 	add	r0, r4, #936	; 0x3a8
         bb8d4:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb8d8:	e3a01001 	mov	r1, #1	; 0x1
         bb8dc:	eb6cb6ea 	bl	1be948c <CBufferList::$Init(unsigned char)>
         bb8e0:	e1b05000 	movs	r5, r0
         bb8e4:	1a000035 	bne	bb9c0 <TFaxTool::TaskConstructor(void)+0x1b8>
         bb8e8:	e3a07000 	mov	r7, #0	; 0x0
         bb8ec:	e0870087 	add	r0, r7, r7, lsl #1
         bb8f0:	e0800187 	add	r0, r0, r7, lsl #3
         bb8f4:	e0846180 	add	r6, r4, r0, lsl #3
         bb8f8:	e2860fdd 	add	r0, r6, #884	; 0x374
         bb8fc:	e1a09000 	mov	r9, r0
         bb900:	e3a01000 	mov	r1, #0	; 0x0
         bb904:	eb6cb6e0 	bl	1be948c <CBufferList::$Init(unsigned char)>
         bb908:	e1b05000 	movs	r5, r0
         bb90c:	1a00002b 	bne	bb9c0 <TFaxTool::TaskConstructor(void)+0x1b8>
         bb910:	e2861fcf 	add	r1, r6, #828	; 0x33c
         bb914:	e1a00009 	mov	r0, r9
         bb918:	eb6cbaf9 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         bb91c:	e5868364 	str	r8, [r6, #868]
         bb920:	e5868368 	str	r8, [r6, #872]	; fField872
         bb924:	e5c6836c 	strb	r8, [r6, #876]	; fField876
         bb928:	e5c6836d 	strb	r8, [r6, #877]	; fField877
         bb92c:	e286004c 	add	r0, r6, #76	; 0x4c
         bb930:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb934:	e1a09000 	mov	r9, r0
         bb938:	e3a01000 	mov	r1, #0	; 0x0
         bb93c:	eb6cb6d2 	bl	1be948c <CBufferList::$Init(unsigned char)>
         bb940:	e1b05000 	movs	r5, r0
         bb944:	1a00001d 	bne	bb9c0 <TFaxTool::TaskConstructor(void)+0x1b8>
         bb948:	e2861014 	add	r1, r6, #20	; 0x14
         bb94c:	e2811b01 	add	r1, r1, #1024	; 0x400
         bb950:	e1a00009 	mov	r0, r9
         bb954:	eb6cbaea 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         bb958:	e586843c 	str	r8, [r6, #1084]	; fField1084
         bb95c:	e5868440 	str	r8, [r6, #1088]	; fField1088
         bb960:	e5c68444 	strb	r8, [r6, #1092]	; fField1092
         bb964:	e5c68445 	strb	r8, [r6, #1093]	; fField1093
         bb968:	e0840107 	add	r0, r4, r7, lsl #2
         bb96c:	e2877001 	add	r7, r7, #1	; 0x1
         bb970:	e3570002 	cmp	r7, #2	; 0x2
         bb974:	e5a084c8 	str	r8, [r0, #1224]!
         bb978:	baffffdb 	blt	bb8ec <TFaxTool::TaskConstructor(void)+0xe4>
         bb97c:	e5848508 	str	r8, [r4, #1288]	; fField1288
         bb980:	e28400d4 	add	r0, r4, #212	; 0xd4
         bb984:	e2800b01 	add	r0, r0, #1024	; 0x400
         bb988:	e3a02000 	mov	r2, #0	; 0x0
         bb98c:	e3a01000 	mov	r1, #0	; 0x0
         bb990:	eb65ae8d 	bl	1a273cc <TT4FaxLine::$Init(unsigned char *, int)>
         bb994:	e1a00004 	mov	r0, r4
         bb998:	e5941000 	ldr	r1, [r4]
         bb99c:	e1a0e00f 	mov	lr, pc
         bb9a0:	e281ff4a 	add	pc, r1, #296	; 0x128
         bb9a4:	e1b05000 	movs	r5, r0
         bb9a8:	1a000004 	bne	bb9c0 <TFaxTool::TaskConstructor(void)+0x1b8>
         bb9ac:	e1a00004 	mov	r0, r4
         bb9b0:	eb658936 	bl	1a1de90 <TFaxTool::$C2InitSubSystem(void)>
         bb9b4:	e1a00008 	mov	r0, r8
         bb9b8:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
         bb9bc:	00000000 	andeq	r0, r0, r0
         bb9c0:	e1a00004 	mov	r0, r4
         bb9c4:	e5941000 	ldr	r1, [r4]
         bb9c8:	e1a0e00f 	mov	lr, pc
         bb9cc:	e281f00c 	add	pc, r1, #12	; 0xc
         bb9d0:	e1a00005 	mov	r0, r5
         bb9d4:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::BindGetModemOptions(long)
 * Address: 000bb9d8
 */
TFaxTool::BindGetModemOptions(long) {
    /*
         bb9d8:	e1a0c00d 	mov	ip, sp
         bb9dc:	e92ddff0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, sl, fp, ip, lr, pc}
         bb9e0:	e24cb004 	sub	fp, ip, #4	; 0x4
         bb9e4:	e1a05000 	mov	r5, r0
         bb9e8:	e1a04001 	mov	r4, r1
         bb9ec:	e24dd004 	sub	sp, sp, #4	; 0x4
         bb9f0:	e590181c 	ldr	r1, [r0, #2076]	; fField2076
         bb9f4:	e3a00d89 	mov	r0, #8768	; 0x2240
         bb9f8:	e2400902 	sub	r0, r0, #32768	; 0x8000
         bb9fc:	e2856f81 	add	r6, r5, #516	; 0x204
         bba00:	e2866b01 	add	r6, r6, #1024	; 0x400
         bba04:	e3510005 	cmp	r1, #5	; 0x5
         bba08:	0a00017b 	beq	bbffc <TFaxTool::BindGetModemOptions(long)+0x624>
         bba0c:	ca000024 	bgt	bbaa4 <TFaxTool::BindGetModemOptions(long)+0xcc>
         bba10:	e2859fb9 	add	r9, r5, #740	; 0x2e4
         bba14:	e2857f63 	add	r7, r5, #396	; 0x18c
         bba18:	e2877b01 	add	r7, r7, #1024	; 0x400
         bba1c:	e285af87 	add	sl, r5, #540	; 0x21c
         bba20:	e28aab01 	add	sl, sl, #1024	; 0x400
         bba24:	e2858f67 	add	r8, r5, #412	; 0x19c
         bba28:	e2888b01 	add	r8, r8, #1024	; 0x400
         bba2c:	e2872008 	add	r2, r7, #8	; 0x8
         bba30:	e3310001 	teq	r1, #1	; 0x1
         bba34:	e58d2000 	str	r2, [sp]
         bba38:	0a00002e 	beq	bbaf8 <TFaxTool::BindGetModemOptions(long)+0x120>
         bba3c:	e3310002 	teq	r1, #2	; 0x2
         bba40:	0a00007e 	beq	bbc40 <TFaxTool::BindGetModemOptions(long)+0x268>
         bba44:	e3310003 	teq	r1, #3	; 0x3
         bba48:	0a0000d5 	beq	bbda4 <TFaxTool::BindGetModemOptions(long)+0x3cc>
         bba4c:	e3310004 	teq	r1, #4	; 0x4
         bba50:	1a0001ce 	bne	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
         bba54:	e3340000 	teq	r4, #0	; 0x0
         bba58:	1a0001cd 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bba5c:	e5951818 	ldr	r1, [r5, #2072]	; fField2072
         bba60:	e3310002 	teq	r1, #2	; 0x2
         bba64:	0a000128 	beq	bbf0c <TFaxTool::BindGetModemOptions(long)+0x534>
         bba68:	e3310004 	teq	r1, #4	; 0x4
         bba6c:	0a000157 	beq	bbfd0 <TFaxTool::BindGetModemOptions(long)+0x5f8>
         bba70:	e3310008 	teq	r1, #8	; 0x8
         bba74:	11a04000 	movne	r4, r0
         bba78:	1a0001c5 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bba7c:	e3a00000 	mov	r0, #0	; 0x0
         bba80:	e5850528 	str	r0, [r5, #1320]	; fField1320
         bba84:	e3a00012 	mov	r0, #18	; 0x12
         bba88:	e585081c 	str	r0, [r5, #2076]	; fField2076
         bba8c:	e1a00005 	mov	r0, r5
         bba90:	e3a01f51 	mov	r1, #324	; 0x144
         bba94:	eb656c22 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         bba98:	e1b04000 	movs	r4, r0
         bba9c:	1a0001bc 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bbaa0:	ea0001ba 	b	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
         bbaa4:	e285202c 	add	r2, r5, #44	; 0x2c
         bbaa8:	e2822b02 	add	r2, r2, #2048	; 0x800
         bbaac:	e2853e5b 	add	r3, r5, #1456	; 0x5b0
         bbab0:	e3310006 	teq	r1, #6	; 0x6
         bbab4:	0a000174 	beq	bc08c <TFaxTool::BindGetModemOptions(long)+0x6b4>
         bbab8:	e3310007 	teq	r1, #7	; 0x7
         bbabc:	0a00018d 	beq	bc0f8 <TFaxTool::BindGetModemOptions(long)+0x720>
         bbac0:	e3310012 	teq	r1, #18	; 0x12
         bbac4:	0a000195 	beq	bc120 <TFaxTool::BindGetModemOptions(long)+0x748>
         bbac8:	e3310013 	teq	r1, #19	; 0x13
         bbacc:	1a0001af 	bne	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
         bbad0:	e1340000 	teq	r4, r0
         bbad4:	159505ac 	ldrne	r0, [r5, #1452]	; fField1452
         bbad8:	13300000 	teqne	r0, #0	; 0x0
         bbadc:	0a0001ac 	beq	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bbae0:	e1a00005 	mov	r0, r5
         bbae4:	e3a01f46 	mov	r1, #280	; 0x118
         bbae8:	eb656c0d 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         bbaec:	e1b04000 	movs	r4, r0
         bbaf0:	1a0001a7 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bbaf4:	ea0001a5 	b	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
         bbaf8:	e59502a4 	ldr	r0, [r5, #676]	; fField676
         bbafc:	e3100802 	tst	r0, #131072	; 0x20000
         bbb00:	0a00000f 	beq	bbb44 <TFaxTool::BindGetModemOptions(long)+0x16c>
         bbb04:	e595055c 	ldr	r0, [r5, #1372]	; fField1372
         bbb08:	e3300000 	teq	r0, #0	; 0x0
         bbb0c:	0a000004 	beq	bbb24 <TFaxTool::BindGetModemOptions(long)+0x14c>
         bbb10:	e5901000 	ldr	r1, [r0]
         bbb14:	e2411001 	sub	r1, r1, #1	; 0x1
         bbb18:	eb6bfc7b 	bl	1bbad0c <TOptionArray::$RemoveOptionAt(long)>
         bbb1c:	e3340000 	teq	r4, #0	; 0x0
         bbb20:	1a00019b 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bbb24:	e5950814 	ldr	r0, [r5, #2068]	; fField2068
         bbb28:	e3300000 	teq	r0, #0	; 0x0
         bbb2c:	0a000004 	beq	bbb44 <TFaxTool::BindGetModemOptions(long)+0x16c>
         bbb30:	e3a01001 	mov	r1, #1	; 0x1
         bbb34:	eb6bebfc 	bl	1bb6b2c <TOptionArray::$__dt(void)>
         bbb38:	e3a00000 	mov	r0, #0	; 0x0
         bbb3c:	e5850814 	str	r0, [r5, #2068]	; fField2068
         bbb40:	e585055c 	str	r0, [r5, #1372]	; fField1372
         bbb44:	e3340000 	teq	r4, #0	; 0x0
         bbb48:	1a000191 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bbb4c:	e24dd03c 	sub	sp, sp, #60	; 0x3c
         bbb50:	e28d0014 	add	r0, sp, #20	; 0x14
         bbb54:	eb658ced 	bl	1a1ef10 <TCMOModemFaxEnabledCaps::$__ct(void)>
         bbb58:	e1a0000d 	mov	r0, sp
         bbb5c:	eb6c009b 	bl	1bbbdd0 <TCMOFramingParms::$__ct(void)>
         bbb60:	e1a00006 	mov	r0, r6
         bbb64:	eb6bf444 	bl	1bb8c7c <TOptionArray::$Init(void)>
         bbb68:	e1b04000 	movs	r4, r0
         bbb6c:	1a000031 	bne	bbc38 <TFaxTool::BindGetModemOptions(long)+0x260>
         bbb70:	e59d001c 	ldr	r0, [sp, #28]
         bbb74:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         bbb78:	e3800b01 	orr	r0, r0, #1024	; 0x400
         bbb7c:	e58d001c 	str	r0, [sp, #28]
         bbb80:	e1a00006 	mov	r0, r6
         bbb84:	e28d2014 	add	r2, sp, #20	; 0x14
         bbb88:	e5961000 	ldr	r1, [r6]
         bbb8c:	eb6bf844 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         bbb90:	e1b04000 	movs	r4, r0
         bbb94:	1a000027 	bne	bbc38 <TFaxTool::BindGetModemOptions(long)+0x260>
         bbb98:	e59d0008 	ldr	r0, [sp, #8]
         bbb9c:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         bbba0:	e3800b01 	orr	r0, r0, #1024	; 0x400
         bbba4:	e58d0008 	str	r0, [sp, #8]
         bbba8:	e1a00006 	mov	r0, r6
         bbbac:	e1a0200d 	mov	r2, sp
         bbbb0:	e5961000 	ldr	r1, [r6]
         bbbb4:	eb6bf83a 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         bbbb8:	e1b04000 	movs	r4, r0
         bbbbc:	1a00001d 	bne	bbc38 <TFaxTool::BindGetModemOptions(long)+0x260>
         bbbc0:	e3a00c05 	mov	r0, #1280	; 0x500
         bbbc4:	e3a0c000 	mov	ip, #0	; 0x0
         bbbc8:	e5850630 	str	r0, [r5, #1584]	; fField1584
         bbbcc:	e5856628 	str	r6, [r5, #1576]	; fField1576
         bbbd0:	e5c5c634 	strb	ip, [r5, #1588]	; fField1588
         bbbd4:	e3a00002 	mov	r0, #2	; 0x2
         bbbd8:	e585081c 	str	r0, [r5, #2076]	; fField2076
         bbbdc:	e1a00008 	mov	r0, r8
         bbbe0:	e3a0103c 	mov	r1, #60	; 0x3c
         bbbe4:	e3a02000 	mov	r2, #0	; 0x0
         bbbe8:	e3a03000 	mov	r3, #0	; 0x0
         bbbec:	e3a0e004 	mov	lr, #4	; 0x4
         bbbf0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bbbf4:	e1a0300c 	mov	r3, ip
         bbbf8:	e3a02001 	mov	r2, #1	; 0x1
         bbbfc:	e1a0100e 	mov	r1, lr
         bbc00:	e3a0001c 	mov	r0, #28	; 0x1c
         bbc04:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bbc08:	e1a0300a 	mov	r3, sl
         bbc0c:	e92d0008 	stmdb	sp!, {r3}
         bbc10:	e59d2060 	ldr	r2, [sp, #96]
         bbc14:	e5922000 	ldr	r2, [r2]
         bbc18:	e1a00009 	mov	r0, r9
         bbc1c:	e3a03000 	mov	r3, #0	; 0x0
         bbc20:	e5971000 	ldr	r1, [r7]
         bbc24:	eb6c7c48 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bbc28:	e28dd024 	add	sp, sp, #36	; 0x24
         bbc2c:	e1b04000 	movs	r4, r0
         bbc30:	028dd03c 	addeq	sp, sp, #60	; 0x3c
         bbc34:	0a000155 	beq	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
         bbc38:	e28dd03c 	add	sp, sp, #60	; 0x3c
         bbc3c:	ea000154 	b	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bbc40:	e3340000 	teq	r4, #0	; 0x0
         bbc44:	1a000152 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bbc48:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         bbc4c:	e1a01006 	mov	r1, r6
         bbc50:	e1a0000d 	mov	r0, sp
         bbc54:	eb6be7a7 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         bbc58:	e1a0000d 	mov	r0, sp
         bbc5c:	e59f101c 	ldr	r1, [pc, #1c]	; bbc80 <TFaxTool::BindGetModemOptions(long)+0x2a8>	; fField1
         bbc60:	eb6bf3eb 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         bbc64:	e1b01000 	movs	r1, r0
         bbc68:	0a000010 	beq	bbcb0 <TFaxTool::BindGetModemOptions(long)+0x2d8>
         bbc6c:	e5914010 	ldr	r4, [r1, #16]	; fField16
         bbc70:	e3340000 	teq	r4, #0	; 0x0
         bbc74:	0a000002 	beq	bbc84 <TFaxTool::BindGetModemOptions(long)+0x2ac>
         bbc78:	e1a0000d 	mov	r0, sp
         bbc7c:	ea0000fd 	b	bc078 <TFaxTool::BindGetModemOptions(long)+0x6a0>
         bbc80:	6d666563 	stcvsl	5, cr6, [r6, -#396]!
         bbc84:	e5910008 	ldr	r0, [r1, #8]
         bbc88:	e1a04c00 	mov	r4, r0, lsl #24
         bbc8c:	e1b04c44 	movs	r4, r4, asr #24
         bbc90:	1afffff8 	bne	bbc78 <TFaxTool::BindGetModemOptions(long)+0x2a0>
         bbc94:	e2850fc3 	add	r0, r5, #780	; 0x30c
         bbc98:	eb6befcc 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         bbc9c:	e1a0000d 	mov	r0, sp
         bbca0:	e59f1014 	ldr	r1, [pc, #14]	; bbcbc <TFaxTool::BindGetModemOptions(long)+0x2e4>
         bbca4:	eb6bf3da 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         bbca8:	e1b01000 	movs	r1, r0
         bbcac:	1a000003 	bne	bbcc0 <TFaxTool::BindGetModemOptions(long)+0x2e8>
         bbcb0:	e3a04ea1 	mov	r4, #2576	; 0xa10
         bbcb4:	e2444a06 	sub	r4, r4, #24576	; 0x6000
         bbcb8:	eaffffee 	b	bbc78 <TFaxTool::BindGetModemOptions(long)+0x2a0>
         bbcbc:	6672616d 	ldrvsbt	r6, [r2], -sp, ror #2	; fField2
         bbcc0:	e2850078 	add	r0, r5, #120	; 0x78
         bbcc4:	e2800b02 	add	r0, r0, #2048	; 0x800
         bbcc8:	eb6befc0 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         bbccc:	e24dd018 	sub	sp, sp, #24	; 0x18
         bbcd0:	e1a0000d 	mov	r0, sp
         bbcd4:	eb658c8e 	bl	1a1ef14 <TCMOModemFaxClassesSupported::$__ct(void)>
         bbcd8:	e1a00006 	mov	r0, r6
         bbcdc:	eb6bf806 	bl	1bb9cfc <TOptionArray::$RemoveAllOptions(void)>
         bbce0:	e1b04000 	movs	r4, r0
         bbce4:	0a000001 	beq	bbcf0 <TFaxTool::BindGetModemOptions(long)+0x318>
         bbce8:	e28d0018 	add	r0, sp, #24	; 0x18
         bbcec:	ea00007a 	b	bbedc <TFaxTool::BindGetModemOptions(long)+0x504>
         bbcf0:	e59d0008 	ldr	r0, [sp, #8]
         bbcf4:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         bbcf8:	e3800b01 	orr	r0, r0, #1024	; 0x400
         bbcfc:	e58d0008 	str	r0, [sp, #8]
         bbd00:	e1a00006 	mov	r0, r6
         bbd04:	e1a0200d 	mov	r2, sp
         bbd08:	e5961000 	ldr	r1, [r6]
         bbd0c:	eb6bf7e4 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         bbd10:	e1b04000 	movs	r4, r0
         bbd14:	1afffff3 	bne	bbce8 <TFaxTool::BindGetModemOptions(long)+0x310>
         bbd18:	e3a00c05 	mov	r0, #1280	; 0x500
         bbd1c:	e3a0c000 	mov	ip, #0	; 0x0
         bbd20:	e5850630 	str	r0, [r5, #1584]	; fField1584
         bbd24:	e5856628 	str	r6, [r5, #1576]	; fField1576
         bbd28:	e5c5c634 	strb	ip, [r5, #1588]	; fField1588
         bbd2c:	e3a00003 	mov	r0, #3	; 0x3
         bbd30:	e585081c 	str	r0, [r5, #2076]	; fField2076
         bbd34:	e1a00008 	mov	r0, r8
         bbd38:	e3a0103c 	mov	r1, #60	; 0x3c
         bbd3c:	e3a02000 	mov	r2, #0	; 0x0
         bbd40:	e3a03000 	mov	r3, #0	; 0x0
         bbd44:	e3a0e004 	mov	lr, #4	; 0x4
         bbd48:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bbd4c:	e1a0300c 	mov	r3, ip
         bbd50:	e3a02001 	mov	r2, #1	; 0x1
         bbd54:	e1a0100e 	mov	r1, lr
         bbd58:	e3a0001c 	mov	r0, #28	; 0x1c
         bbd5c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bbd60:	e1a0300a 	mov	r3, sl
         bbd64:	e92d0008 	stmdb	sp!, {r3}
         bbd68:	e59d2058 	ldr	r2, [sp, #88]
         bbd6c:	e5922000 	ldr	r2, [r2]
         bbd70:	e1a00009 	mov	r0, r9
         bbd74:	e3a03000 	mov	r3, #0	; 0x0
         bbd78:	e5971000 	ldr	r1, [r7]
         bbd7c:	eb6c7bf2 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bbd80:	e28dd024 	add	sp, sp, #36	; 0x24
         bbd84:	e1b04000 	movs	r4, r0
         bbd88:	1affffd6 	bne	bbce8 <TFaxTool::BindGetModemOptions(long)+0x310>
         bbd8c:	e28dd018 	add	sp, sp, #24	; 0x18
         bbd90:	e1a0000d 	mov	r0, sp
         bbd94:	e3a01000 	mov	r1, #0	; 0x0
         bbd98:	eb6beb67 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         bbd9c:	e28dd01c 	add	sp, sp, #28	; 0x1c
         bbda0:	ea0000fa 	b	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
         bbda4:	e3340000 	teq	r4, #0	; 0x0
         bbda8:	1a0000f9 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bbdac:	e24dd034 	sub	sp, sp, #52	; 0x34
         bbdb0:	e1a01006 	mov	r1, r6
         bbdb4:	e28d0018 	add	r0, sp, #24	; 0x18
         bbdb8:	eb6be74e 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         bbdbc:	e1a0000d 	mov	r0, sp
         bbdc0:	eb658c50 	bl	1a1ef08 <TCMOModemFaxClass::$__ct(void)>
         bbdc4:	e28d0018 	add	r0, sp, #24	; 0x18
         bbdc8:	e59f111c 	ldr	r1, [pc, #11c]	; bbeec <TFaxTool::BindGetModemOptions(long)+0x514>
         bbdcc:	eb6bf390 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         bbdd0:	e3300000 	teq	r0, #0	; 0x0
         bbdd4:	03a04ea1 	moveq	r4, #2576	; 0xa10
         bbdd8:	02444a06 	subeq	r4, r4, #24576	; 0x6000
         bbddc:	0a00003d 	beq	bbed8 <TFaxTool::BindGetModemOptions(long)+0x500>
         bbde0:	e5904010 	ldr	r4, [r0, #16]	; fField16
         bbde4:	e3340000 	teq	r4, #0	; 0x0
         bbde8:	1a00003a 	bne	bbed8 <TFaxTool::BindGetModemOptions(long)+0x500>
         bbdec:	e5901008 	ldr	r1, [r0, #8]
         bbdf0:	e1a04c01 	mov	r4, r1, lsl #24
         bbdf4:	e1b04c44 	movs	r4, r4, asr #24
         bbdf8:	1a000036 	bne	bbed8 <TFaxTool::BindGetModemOptions(long)+0x500>
         bbdfc:	e5900014 	ldr	r0, [r0, #20]
         bbe00:	e3100002 	tst	r0, #2	; 0x2
         bbe04:	13a00002 	movne	r0, #2	; 0x2
         bbe08:	1a000007 	bne	bbe2c <TFaxTool::BindGetModemOptions(long)+0x454>
         bbe0c:	e3100004 	tst	r0, #4	; 0x4
         bbe10:	13a00004 	movne	r0, #4	; 0x4
         bbe14:	1a000004 	bne	bbe2c <TFaxTool::BindGetModemOptions(long)+0x454>
         bbe18:	e3100008 	tst	r0, #8	; 0x8
         bbe1c:	03a04039 	moveq	r4, #57	; 0x39
         bbe20:	02444c5e 	subeq	r4, r4, #24064	; 0x5e00
         bbe24:	0a00002b 	beq	bbed8 <TFaxTool::BindGetModemOptions(long)+0x500>
         bbe28:	e3a00008 	mov	r0, #8	; 0x8
         bbe2c:	e5850818 	str	r0, [r5, #2072]	; fField2072
         bbe30:	e58d0014 	str	r0, [sp, #20]
         bbe34:	e1a00006 	mov	r0, r6
         bbe38:	eb6bf7af 	bl	1bb9cfc <TOptionArray::$RemoveAllOptions(void)>
         bbe3c:	e1b04000 	movs	r4, r0
         bbe40:	1a000024 	bne	bbed8 <TFaxTool::BindGetModemOptions(long)+0x500>
         bbe44:	e59d0008 	ldr	r0, [sp, #8]
         bbe48:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         bbe4c:	e3800c02 	orr	r0, r0, #512	; 0x200
         bbe50:	e58d0008 	str	r0, [sp, #8]
         bbe54:	e1a00006 	mov	r0, r6
         bbe58:	e1a0200d 	mov	r2, sp
         bbe5c:	e5961000 	ldr	r1, [r6]
         bbe60:	eb6bf78f 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         bbe64:	e1b04000 	movs	r4, r0
         bbe68:	1a00001a 	bne	bbed8 <TFaxTool::BindGetModemOptions(long)+0x500>
         bbe6c:	e3a00c05 	mov	r0, #1280	; 0x500
         bbe70:	e3a0c000 	mov	ip, #0	; 0x0
         bbe74:	e5850630 	str	r0, [r5, #1584]	; fField1584
         bbe78:	e5856628 	str	r6, [r5, #1576]	; fField1576
         bbe7c:	e5c5c634 	strb	ip, [r5, #1588]	; fField1588
         bbe80:	e1a00008 	mov	r0, r8
         bbe84:	e3a0103c 	mov	r1, #60	; 0x3c
         bbe88:	e3a02000 	mov	r2, #0	; 0x0
         bbe8c:	e3a03000 	mov	r3, #0	; 0x0
         bbe90:	e3a0e004 	mov	lr, #4	; 0x4
         bbe94:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bbe98:	e1a0300c 	mov	r3, ip
         bbe9c:	e3a02001 	mov	r2, #1	; 0x1
         bbea0:	e1a0100e 	mov	r1, lr
         bbea4:	e3a0001c 	mov	r0, #28	; 0x1c
         bbea8:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bbeac:	e1a0300a 	mov	r3, sl
         bbeb0:	e92d0008 	stmdb	sp!, {r3}
         bbeb4:	e59d2058 	ldr	r2, [sp, #88]
         bbeb8:	e5922000 	ldr	r2, [r2]
         bbebc:	e1a00009 	mov	r0, r9
         bbec0:	e3a03000 	mov	r3, #0	; 0x0
         bbec4:	e5971000 	ldr	r1, [r7]
         bbec8:	eb6c7b9f 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bbecc:	e28dd024 	add	sp, sp, #36	; 0x24
         bbed0:	e1b04000 	movs	r4, r0
         bbed4:	0a000005 	beq	bbef0 <TFaxTool::BindGetModemOptions(long)+0x518>
         bbed8:	e28d0018 	add	r0, sp, #24	; 0x18
         bbedc:	e3a01000 	mov	r1, #0	; 0x0
         bbee0:	eb6beb15 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         bbee4:	e28dd034 	add	sp, sp, #52	; 0x34
         bbee8:	ea0000a9 	b	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bbeec:	6d667371 	stcvsl	3, cr7, [r6, -#452]!
         bbef0:	e28d0018 	add	r0, sp, #24	; 0x18
         bbef4:	e3a01000 	mov	r1, #0	; 0x0
         bbef8:	eb6beb0f 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         bbefc:	e28dd034 	add	sp, sp, #52	; 0x34
         bbf00:	e3a00004 	mov	r0, #4	; 0x4
         bbf04:	e5a5081c 	str	r0, [r5, #2076]!	; fField2076
         bbf08:	ea0000a0 	b	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
         bbf0c:	e1a00006 	mov	r0, r6
         bbf10:	eb6bf779 	bl	1bb9cfc <TOptionArray::$RemoveAllOptions(void)>
         bbf14:	e1b04000 	movs	r4, r0
         bbf18:	1a00009d 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bbf1c:	e24dd024 	sub	sp, sp, #36	; 0x24
         bbf20:	e1a0000d 	mov	r0, sp
         bbf24:	eb658bf8 	bl	1a1ef0c <TCMOModemFaxClass1Cap::$__ct(void)>
         bbf28:	e59d0008 	ldr	r0, [sp, #8]
         bbf2c:	e3c00cff 	bic	r0, r0, #65280	; 0xff00
         bbf30:	e3800b01 	orr	r0, r0, #1024	; 0x400
         bbf34:	e58d0008 	str	r0, [sp, #8]
         bbf38:	e1a00006 	mov	r0, r6
         bbf3c:	e1a0200d 	mov	r2, sp
         bbf40:	e5961000 	ldr	r1, [r6]
         bbf44:	eb6bf756 	bl	1bb9ca4 <TOptionArray::$InsertOptionAt(long, TOption *)>
         bbf48:	e1b04000 	movs	r4, r0
         bbf4c:	1a00001d 	bne	bbfc8 <TFaxTool::BindGetModemOptions(long)+0x5f0>
         bbf50:	e3a00c05 	mov	r0, #1280	; 0x500
         bbf54:	e3a0c000 	mov	ip, #0	; 0x0
         bbf58:	e5850630 	str	r0, [r5, #1584]	; fField1584
         bbf5c:	e5856628 	str	r6, [r5, #1576]	; fField1576
         bbf60:	e5c5c634 	strb	ip, [r5, #1588]	; fField1588
         bbf64:	e1a00008 	mov	r0, r8
         bbf68:	e3a0103c 	mov	r1, #60	; 0x3c
         bbf6c:	e3a02000 	mov	r2, #0	; 0x0
         bbf70:	e3a03000 	mov	r3, #0	; 0x0
         bbf74:	e3a0e004 	mov	lr, #4	; 0x4
         bbf78:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bbf7c:	e1a0300c 	mov	r3, ip
         bbf80:	e3a02001 	mov	r2, #1	; 0x1
         bbf84:	e1a0100e 	mov	r1, lr
         bbf88:	e3a0001c 	mov	r0, #28	; 0x1c
         bbf8c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bbf90:	e1a0300a 	mov	r3, sl
         bbf94:	e92d0008 	stmdb	sp!, {r3}
         bbf98:	e59d2048 	ldr	r2, [sp, #72]
         bbf9c:	e5922000 	ldr	r2, [r2]
         bbfa0:	e1a00009 	mov	r0, r9
         bbfa4:	e3a03000 	mov	r3, #0	; 0x0
         bbfa8:	e5971000 	ldr	r1, [r7]
         bbfac:	eb6c7b66 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bbfb0:	e28dd024 	add	sp, sp, #36	; 0x24
         bbfb4:	e1b04000 	movs	r4, r0
         bbfb8:	03a00005 	moveq	r0, #5	; 0x5
         bbfbc:	05a5081c 	streq	r0, [r5, #2076]!	; fField2076
         bbfc0:	028dd024 	addeq	sp, sp, #36	; 0x24
         bbfc4:	0a000071 	beq	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
         bbfc8:	e28dd024 	add	sp, sp, #36	; 0x24
         bbfcc:	ea000070 	b	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bbfd0:	e3a00000 	mov	r0, #0	; 0x0
         bbfd4:	e5850528 	str	r0, [r5, #1320]	; fField1320
         bbfd8:	e3a00006 	mov	r0, #6	; 0x6
         bbfdc:	e585081c 	str	r0, [r5, #2076]	; fField2076
         bbfe0:	e1a00005 	mov	r0, r5
         bbfe4:	e3a01022 	mov	r1, #34	; 0x22
         bbfe8:	e2811c01 	add	r1, r1, #256	; 0x100
         bbfec:	eb656acc 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         bbff0:	e1b04000 	movs	r4, r0
         bbff4:	1a000066 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bbff8:	ea000064 	b	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
         bbffc:	e3340000 	teq	r4, #0	; 0x0
         bc000:	1a000063 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc004:	e24dd01c 	sub	sp, sp, #28	; 0x1c
         bc008:	e1a01006 	mov	r1, r6
         bc00c:	e1a0000d 	mov	r0, sp
         bc010:	eb6be6b8 	bl	1bb5af8 <TOptionIterator::$__ct(TOptionArray *)>
         bc014:	e1a0000d 	mov	r0, sp
         bc018:	e59f1068 	ldr	r1, [pc, #68]	; bc088 <TFaxTool::BindGetModemOptions(long)+0x6b0>
         bc01c:	eb6bf2fc 	bl	1bb8c14 <TOptionIterator::$FindOption(unsigned long)>
         bc020:	e3300000 	teq	r0, #0	; 0x0
         bc024:	03a04ea1 	moveq	r4, #2576	; 0xa10
         bc028:	02444a06 	subeq	r4, r4, #24576	; 0x6000
         bc02c:	0a000010 	beq	bc074 <TFaxTool::BindGetModemOptions(long)+0x69c>
         bc030:	e5904010 	ldr	r4, [r0, #16]	; fField16
         bc034:	e3340000 	teq	r4, #0	; 0x0
         bc038:	1a00000d 	bne	bc074 <TFaxTool::BindGetModemOptions(long)+0x69c>
         bc03c:	e5901008 	ldr	r1, [r0, #8]
         bc040:	e1a04c01 	mov	r4, r1, lsl #24
         bc044:	e1b04c44 	movs	r4, r4, asr #24
         bc048:	1a000009 	bne	bc074 <TFaxTool::BindGetModemOptions(long)+0x69c>
         bc04c:	e280301c 	add	r3, r0, #28	; 0x1c
         bc050:	e893000c 	ldmia	r3, {r2, r3}
         bc054:	e92d000c 	stmdb	sp!, {r2, r3}
         bc058:	e2800010 	add	r0, r0, #16	; 0x10
         bc05c:	e9b0000c 	ldmib	r0!, {r2, r3}
         bc060:	e1a00005 	mov	r0, r5
         bc064:	e3a01002 	mov	r1, #2	; 0x2
         bc068:	eb65bd63 	bl	1a2b5fc <TFaxTool::$SetModemCapabilities(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long)>
         bc06c:	e28dd008 	add	sp, sp, #8	; 0x8
         bc070:	e1a04000 	mov	r4, r0
         bc074:	e1a0000d 	mov	r0, sp
         bc078:	e3a01000 	mov	r1, #0	; 0x0
         bc07c:	eb6beaae 	bl	1bb6b3c <TOptionIterator::$__dt(void)>
         bc080:	e28dd01c 	add	sp, sp, #28	; 0x1c
         bc084:	ea000042 	b	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc088:	6d663163 	stfvse	f3, [r6, -#396]!
         bc08c:	e1340000 	teq	r4, r0
         bc090:	0a00003f 	beq	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc094:	e59505ac 	ldr	r0, [r5, #1452]	; fField1452
         bc098:	e3300000 	teq	r0, #0	; 0x0
         bc09c:	0a00000a 	beq	bc0cc <TFaxTool::BindGetModemOptions(long)+0x6f4>
         bc0a0:	e1a01003 	mov	r1, r3
         bc0a4:	e1a00005 	mov	r0, r5
         bc0a8:	eb65877b 	bl	1a1de9c <TFaxTool::$C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)>
         bc0ac:	e1b04000 	movs	r4, r0
         bc0b0:	1a000037 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc0b4:	e1a00005 	mov	r0, r5
         bc0b8:	e3a01f46 	mov	r1, #280	; 0x118
         bc0bc:	eb656a98 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         bc0c0:	e1b04000 	movs	r4, r0
         bc0c4:	1a000032 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc0c8:	ea000030 	b	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
         bc0cc:	e3340000 	teq	r4, #0	; 0x0
         bc0d0:	03300000 	teqeq	r0, #0	; 0x0
         bc0d4:	1a00002e 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc0d8:	e3a00007 	mov	r0, #7	; 0x7
         bc0dc:	e585081c 	str	r0, [r5, #2076]	; fField2076
         bc0e0:	e1a00005 	mov	r0, r5
         bc0e4:	e3a01e12 	mov	r1, #288	; 0x120
         bc0e8:	eb656a8d 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         bc0ec:	e1b04000 	movs	r4, r0
         bc0f0:	1a000027 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc0f4:	ea000025 	b	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
         bc0f8:	e1340000 	teq	r4, r0
         bc0fc:	159505ac 	ldrne	r0, [r5, #1452]	; fField1452
         bc100:	13300000 	teqne	r0, #0	; 0x0
         bc104:	0a000022 	beq	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc108:	e1a00005 	mov	r0, r5
         bc10c:	e3a01f46 	mov	r1, #280	; 0x118
         bc110:	eb656a83 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         bc114:	e1b04000 	movs	r4, r0
         bc118:	1a00001d 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc11c:	ea00001b 	b	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
         bc120:	e1340000 	teq	r4, r0
         bc124:	0a00001a 	beq	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc128:	e59505ac 	ldr	r0, [r5, #1452]	; fField1452
         bc12c:	e3300000 	teq	r0, #0	; 0x0
         bc130:	0a00000a 	beq	bc160 <TFaxTool::BindGetModemOptions(long)+0x788>
         bc134:	e1a01003 	mov	r1, r3
         bc138:	e1a00005 	mov	r0, r5
         bc13c:	eb658756 	bl	1a1de9c <TFaxTool::$C2ParseDISResponse(unsigned char *, FaxClass2FDIS &)>
         bc140:	e1b04000 	movs	r4, r0
         bc144:	1a000012 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc148:	e1a00005 	mov	r0, r5
         bc14c:	e3a01f46 	mov	r1, #280	; 0x118
         bc150:	eb656a73 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         bc154:	e1b04000 	movs	r4, r0
         bc158:	1a00000d 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc15c:	ea00000b 	b	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
         bc160:	e3340000 	teq	r4, #0	; 0x0
         bc164:	03300000 	teqeq	r0, #0	; 0x0
         bc168:	1a000009 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc16c:	e3a00013 	mov	r0, #19	; 0x13
         bc170:	e585081c 	str	r0, [r5, #2076]	; fField2076
         bc174:	e3a0003f 	mov	r0, #63	; 0x3f
         bc178:	e5c5052c 	strb	r0, [r5, #1324]	; fField1324
         bc17c:	e1a00005 	mov	r0, r5
         bc180:	e3a01f56 	mov	r1, #344	; 0x158
         bc184:	eb656a66 	bl	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
         bc188:	e1b04000 	movs	r4, r0
         bc18c:	1a000000 	bne	bc194 <TFaxTool::BindGetModemOptions(long)+0x7bc>
         bc190:	e91baff0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, sl, fp, sp, pc}
         bc194:	e1a01004 	mov	r1, r4
         bc198:	e1a00005 	mov	r0, r5
         bc19c:	e5952000 	ldr	r2, [r5]
         bc1a0:	e1a0e00f 	mov	lr, pc
         bc1a4:	e282f078 	add	pc, r2, #120	; 0x78
         bc1a8:	eafffff8 	b	bc190 <TFaxTool::BindGetModemOptions(long)+0x7b8>
    */
}

/**
 * Symbol: TFaxTool::UnbindStart(void)
 * Address: 000bc1ac
 */
TFaxTool::UnbindStart(void) {
    /*
         bc1ac:	e1a0c00d 	mov	ip, sp
         bc1b0:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         bc1b4:	e24cb004 	sub	fp, ip, #4	; 0x4
         bc1b8:	e1a04000 	mov	r4, r0
         bc1bc:	e5900184 	ldr	r0, [r0, #388]	; fField388
         bc1c0:	e3a0e000 	mov	lr, #0	; 0x0
         bc1c4:	e584055c 	str	r0, [r4, #1372]	; fField1372
         bc1c8:	e5c4e558 	strb	lr, [r4, #1368]	; fField1368
         bc1cc:	e3a00009 	mov	r0, #9	; 0x9
         bc1d0:	e584054c 	str	r0, [r4, #1356]	; fField1356
         bc1d4:	e2845fb9 	add	r5, r4, #740	; 0x2e4
         bc1d8:	e284cf63 	add	ip, r4, #396	; 0x18c
         bc1dc:	e28ccb01 	add	ip, ip, #1024	; 0x400
         bc1e0:	e2846f51 	add	r6, r4, #324	; 0x144
         bc1e4:	e2866b01 	add	r6, r6, #1024	; 0x400
         bc1e8:	e2840f67 	add	r0, r4, #412	; 0x19c
         bc1ec:	e2800b01 	add	r0, r0, #1024	; 0x400
         bc1f0:	e3a0103c 	mov	r1, #60	; 0x3c
         bc1f4:	e3a02000 	mov	r2, #0	; 0x0
         bc1f8:	e3a03000 	mov	r3, #0	; 0x0
         bc1fc:	e3a07004 	mov	r7, #4	; 0x4
         bc200:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bc204:	e1a0300e 	mov	r3, lr
         bc208:	e3a02001 	mov	r2, #1	; 0x1
         bc20c:	e1a01007 	mov	r1, r7
         bc210:	e3a00020 	mov	r0, #32	; 0x20
         bc214:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bc218:	e1a03006 	mov	r3, r6
         bc21c:	e92d0008 	stmdb	sp!, {r3}
         bc220:	e1a00005 	mov	r0, r5
         bc224:	e3a03000 	mov	r3, #0	; 0x0
         bc228:	e49c1008 	ldr	r1, [ip], #8
         bc22c:	e59c2000 	ldr	r2, [ip]
         bc230:	eb6c7ac5 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bc234:	e28dd024 	add	sp, sp, #36	; 0x24
         bc238:	e1b01000 	movs	r1, r0
         bc23c:	1a000005 	bne	bc258 <TFaxTool::UnbindStart(void)+0xac>
         bc240:	e3a00007 	mov	r0, #7	; 0x7
         bc244:	e5840270 	str	r0, [r4, #624]	; fField624
         bc248:	e5940018 	ldr	r0, [r4, #24]	; fField24
         bc24c:	e3800202 	orr	r0, r0, #536870912	; 0x20000000
         bc250:	e5a40018 	str	r0, [r4, #24]!	; fField24
         bc254:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         bc258:	e1a00004 	mov	r0, r4
         bc25c:	e5942000 	ldr	r2, [r4]
         bc260:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         bc264:	e282f080 	add	pc, r2, #128	; 0x80
    */
}

/**
 * Symbol: TFaxTool::HandleRequest(TUMsgToken &, unsigned long)
 * Address: 000bc268
 */
TFaxTool::HandleRequest(TUMsgToken &, unsigned long) {
    /*
         bc268:	e590204c 	ldr	r2, [r0, #76]	; fField76
         bc26c:	e332000d 	teq	r2, #13	; 0xd
         bc270:	13a0207e 	movne	r2, #126	; 0x7e
         bc274:	12422c3f 	subne	r2, r2, #16128	; 0x3f00
         bc278:	1a6c02fe 	bne	1bbce78 <TCommTool::$CompleteRequest(TUMsgToken &, long)>
         bc27c:	0a657ed1 	beq	1a1bdc8 <TFaxTool::$TimerComplete(void)>
    */
}

/**
 * Symbol: TFaxTool::DoStartPage(void)
 * Address: 000bc280
 */
TFaxTool::DoStartPage(void) {
    /*
         bc280:	e5902018 	ldr	r2, [r0, #24]	; fField24
         bc284:	e3120002 	tst	r2, #2	; 0x2
         bc288:	059f0048 	ldreq	r0, [pc, #48]	; bc2d8 <TFaxTool::DoStartPage(void)+0x58>
         bc28c:	01a0f00e 	moveq	pc, lr
         bc290:	e590126c 	ldr	r1, [r0, #620]	; fField620
         bc294:	e3110902 	tst	r1, #32768	; 0x8000
         bc298:	13e00dfa 	mvnne	r0, #16000	; 0x3e80
         bc29c:	11a0f00e 	movne	pc, lr
         bc2a0:	e1a0c00d 	mov	ip, sp
         bc2a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         bc2a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         bc2ac:	e3120004 	tst	r2, #4	; 0x4
         bc2b0:	e3a04000 	mov	r4, #0	; 0x0
         bc2b4:	1a000021 	bne	bc340 <TFaxTool::DoStartPage(void)+0xc0>
         bc2b8:	e3c11401 	bic	r1, r1, #16777216	; 0x1000000
         bc2bc:	e580126c 	str	r1, [r0, #620]	; fField620
         bc2c0:	e5901818 	ldr	r1, [r0, #2072]	; fField2072
         bc2c4:	e3310004 	teq	r1, #4	; 0x4
         bc2c8:	1a000003 	bne	bc2dc <TFaxTool::DoStartPage(void)+0x5c>
         bc2cc:	e3a01005 	mov	r1, #5	; 0x5
         bc2d0:	eb6586ff 	bl	1a1ded4 <TFaxTool::$C2StateUpdate(unsigned long)>
         bc2d4:	ea000019 	b	bc340 <TFaxTool::DoStartPage(void)+0xc0>
         bc2d8:	ffffc177 	swinv	0x00ffc177
         bc2dc:	e3310008 	teq	r1, #8	; 0x8
         bc2e0:	1a000002 	bne	bc2f0 <TFaxTool::DoStartPage(void)+0x70>
         bc2e4:	e3a01005 	mov	r1, #5	; 0x5
         bc2e8:	eb6582dc 	bl	1a1ce60 <TFaxTool::$C20StateUpdate(unsigned long)>
         bc2ec:	ea000013 	b	bc340 <TFaxTool::DoStartPage(void)+0xc0>
         bc2f0:	e5901804 	ldr	r1, [r0, #2052]	; fField2052
         bc2f4:	e3310000 	teq	r1, #0	; 0x0
         bc2f8:	15901280 	ldrne	r1, [r0, #640]	; fField640
         bc2fc:	13310009 	teqne	r1, #9	; 0x9
         bc300:	1a000001 	bne	bc30c <TFaxTool::DoStartPage(void)+0x8c>
         bc304:	eb657a8b 	bl	1a1ad38 <TFaxTool::$StartPhaseC(void)>
         bc308:	ea00000c 	b	bc340 <TFaxTool::DoStartPage(void)+0xc0>
         bc30c:	e3310008 	teq	r1, #8	; 0x8
         bc310:	13a0007e 	movne	r0, #126	; 0x7e
         bc314:	12400c3f 	subne	r0, r0, #16128	; 0x3f00
         bc318:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         bc31c:	e3a01003 	mov	r1, #3	; 0x3
         bc320:	e5801284 	str	r1, [r0, #644]	; fField644
         bc324:	e3a01001 	mov	r1, #1	; 0x1
         bc328:	e5801288 	str	r1, [r0, #648]	; fField648
         bc32c:	e5801270 	str	r1, [r0, #624]	; fField624
         bc330:	e3a01004 	mov	r1, #4	; 0x4
         bc334:	e5801278 	str	r1, [r0, #632]	; fField632
         bc338:	e3a01001 	mov	r1, #1	; 0x1
         bc33c:	eb65b887 	bl	1a2a560 <TFaxTool::$PutCommandToRcv(unsigned long)>
         bc340:	e1a00004 	mov	r0, r4
         bc344:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::StartPageComplete(long)
 * Address: 000bc348
 */
TFaxTool::StartPageComplete(long) {
    /*
         bc348:	e1a02000 	mov	r2, r0
         bc34c:	e5900188 	ldr	r0, [r0, #392]	; fField392
         bc350:	e5a01010 	str	r1, [r0, #16]!	; fField16
         bc354:	e3510000 	cmp	r1, #0	; 0x0
         bc358:	0592026c 	ldreq	r0, [r2, #620]	; fField620
         bc35c:	03800902 	orreq	r0, r0, #32768	; 0x8000
         bc360:	0582026c 	streq	r0, [r2, #620]	; fField620
         bc364:	0a000000 	beq	bc36c <TFaxTool::StartPageComplete(long)+0x24>
         bc368:	1a000001 	bne	bc374 <TFaxTool::StartPageComplete(long)+0x2c>
         bc36c:	e3a01000 	mov	r1, #0	; 0x0
         bc370:	ea000000 	b	bc378 <TFaxTool::StartPageComplete(long)+0x30>
         bc374:	e3e01000 	mvn	r1, #0	; 0x0
         bc378:	e1a00002 	mov	r0, r2
         bc37c:	e5922000 	ldr	r2, [r2]
         bc380:	e282f0a8 	add	pc, r2, #168	; 0xa8
    */
}

/**
 * Symbol: TFaxTool::DoEndPage(void)
 * Address: 000bc384
 */
TFaxTool::DoEndPage(void) {
    /*
         bc384:	e5902018 	ldr	r2, [r0, #24]	; fField24
         bc388:	e3120002 	tst	r2, #2	; 0x2
         bc38c:	059f0034 	ldreq	r0, [pc, #34]	; bc3c8 <TFaxTool::DoEndPage(void)+0x44>
         bc390:	01a0f00e 	moveq	pc, lr
         bc394:	e590126c 	ldr	r1, [r0, #620]	; fField620
         bc398:	e3110902 	tst	r1, #32768	; 0x8000
         bc39c:	03a00009 	moveq	r0, #9	; 0x9
         bc3a0:	02400c56 	subeq	r0, r0, #22016	; 0x5600
         bc3a4:	01a0f00e 	moveq	pc, lr
         bc3a8:	e1a0c00d 	mov	ip, sp
         bc3ac:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         bc3b0:	e24cb004 	sub	fp, ip, #4	; 0x4
         bc3b4:	e3120004 	tst	r2, #4	; 0x4
         bc3b8:	e3a04000 	mov	r4, #0	; 0x0
         bc3bc:	0a000002 	beq	bc3cc <TFaxTool::DoEndPage(void)+0x48>
         bc3c0:	e1a00004 	mov	r0, r4
         bc3c4:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         bc3c8:	ffffc177 	swinv	0x00ffc177
         bc3cc:	e3c11902 	bic	r1, r1, #32768	; 0x8000
         bc3d0:	e3811802 	orr	r1, r1, #131072	; 0x20000
         bc3d4:	e580126c 	str	r1, [r0, #620]	; fField620
         bc3d8:	e5902188 	ldr	r2, [r0, #392]	; fField392
         bc3dc:	e5d22014 	ldrb	r2, [r2, #20]
         bc3e0:	e3320000 	teq	r2, #0	; 0x0
         bc3e4:	13811401 	orrne	r1, r1, #16777216	; 0x1000000
         bc3e8:	1580126c 	strne	r1, [r0, #620]	; fField620
         bc3ec:	eb65721b 	bl	1a18c60 <TFaxTool::$SendEOM(void)>
         bc3f0:	eafffff2 	b	bc3c0 <TFaxTool::DoEndPage(void)+0x3c>
    */
}

/**
 * Symbol: TFaxTool::EndPageComplete(long)
 * Address: 000bc3f4
 */
TFaxTool::EndPageComplete(long) {
    /*
         bc3f4:	e1a02000 	mov	r2, r0
         bc3f8:	e5900188 	ldr	r0, [r0, #392]	; fField392
         bc3fc:	e5a01010 	str	r1, [r0, #16]!	; fField16
         bc400:	e3310000 	teq	r1, #0	; 0x0
         bc404:	13e01000 	mvnne	r1, #0	; 0x0
         bc408:	03a01000 	moveq	r1, #0	; 0x0
         bc40c:	e1a00002 	mov	r0, r2
         bc410:	e5922000 	ldr	r2, [r2]
         bc414:	e282f0a8 	add	pc, r2, #168	; 0xa8
    */
}

/**
 * Symbol: TFaxTool::DoKillControl(unsigned long)
 * Address: 000bc418
 */
TFaxTool::DoKillControl(unsigned long) {
    /*
         bc418:	e1a0c00d 	mov	ip, sp
         bc41c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         bc420:	e24cb004 	sub	fp, ip, #4	; 0x4
         bc424:	e1a04000 	mov	r4, r0
         bc428:	e5900018 	ldr	r0, [r0, #24]	; fField24
         bc42c:	e3100003 	tst	r0, #3	; 0x3
         bc430:	11a00004 	movne	r0, r4
         bc434:	159f10b4 	ldrne	r1, [pc, #b4]	; bc4f0 <TFaxTool::DoKillControl(unsigned long)+0xd8>
         bc438:	191b68f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, lr}
         bc43c:	1a6c1313 	bne	1bc1090 <TCommTool::$StartAbort(long)>
         bc440:	e5940270 	ldr	r0, [r4, #624]	; fField624
         bc444:	e3300005 	teq	r0, #5	; 0x5
         bc448:	13300007 	teqne	r0, #7	; 0x7
         bc44c:	191ba8f0 	ldmnedb	fp, {r4, r5, r6, r7, fp, sp, pc}
         bc450:	e2840f79 	add	r0, r4, #484	; 0x1e4
         bc454:	e2800b01 	add	r0, r0, #1024	; 0x400
         bc458:	e1a05000 	mov	r5, r0
         bc45c:	e3a0100e 	mov	r1, #14	; 0xe
         bc460:	eb6c826a 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
         bc464:	e1b02000 	movs	r2, r0
         bc468:	1a00001c 	bne	bc4e0 <TFaxTool::DoKillControl(unsigned long)+0xc8>
         bc46c:	e3a00004 	mov	r0, #4	; 0x4
         bc470:	e58405e0 	str	r0, [r4, #1504]	; fField1504
         bc474:	e284efb9 	add	lr, r4, #740	; 0x2e4
         bc478:	e1a0c005 	mov	ip, r5
         bc47c:	e2846f76 	add	r6, r4, #472	; 0x1d8
         bc480:	e2866b01 	add	r6, r6, #1024	; 0x400
         bc484:	e2840f7d 	add	r0, r4, #500	; 0x1f4
         bc488:	e2800b01 	add	r0, r0, #1024	; 0x400
         bc48c:	e3a01010 	mov	r1, #16	; 0x10
         bc490:	e3a02000 	mov	r2, #0	; 0x0
         bc494:	e3a03000 	mov	r3, #0	; 0x0
         bc498:	e3a05010 	mov	r5, #16	; 0x10
         bc49c:	e3a07000 	mov	r7, #0	; 0x0
         bc4a0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bc4a4:	e1a03007 	mov	r3, r7
         bc4a8:	e3a02001 	mov	r2, #1	; 0x1
         bc4ac:	e1a01005 	mov	r1, r5
         bc4b0:	e3a0000c 	mov	r0, #12	; 0xc
         bc4b4:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bc4b8:	e1a03006 	mov	r3, r6
         bc4bc:	e92d0008 	stmdb	sp!, {r3}
         bc4c0:	e1a0000e 	mov	r0, lr
         bc4c4:	e3a03000 	mov	r3, #0	; 0x0
         bc4c8:	e49c1008 	ldr	r1, [ip], #8
         bc4cc:	e59c2000 	ldr	r2, [ip]
         bc4d0:	eb6c7a1d 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bc4d4:	e28dd024 	add	sp, sp, #36	; 0x24
         bc4d8:	e1b02000 	movs	r2, r0
         bc4dc:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         bc4e0:	e1a00004 	mov	r0, r4
         bc4e4:	e3a01004 	mov	r1, #4	; 0x4
         bc4e8:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         bc4ec:	ea6c0ec8 	b	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
         bc4f0:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TFaxTool::HandleReply(unsigned long, unsigned long)
 * Address: 000bc4f4
 */
TFaxTool::HandleReply(unsigned long, unsigned long) {
    /*
         bc4f4:	e1a03000 	mov	r3, r0
         bc4f8:	e3310001 	teq	r1, #1	; 0x1
         bc4fc:	01a00003 	moveq	r0, r3
         bc500:	0a656159 	beq	1a14a6c <TFaxTool::$ModemReqComplete(void)>
         bc504:	e3310004 	teq	r1, #4	; 0x4
         bc508:	0a000009 	beq	bc534 <TFaxTool::HandleReply(unsigned long, unsigned long)+0x40>
         bc50c:	e331000a 	teq	r1, #10	; 0xa
         bc510:	01a00003 	moveq	r0, r3
         bc514:	0a657e29 	beq	1a1bdc0 <TFaxTool::$TimeOutKillComplete(void)>
         bc518:	e331000e 	teq	r1, #14	; 0xe
         bc51c:	11a00003 	movne	r0, r3
         bc520:	1a6c0eb4 	bne	1bbfff8 <TCommTool::$HandleReply(unsigned long, unsigned long)>
         bc524:	e59325fc 	ldr	r2, [r3, #1532]
         bc528:	e1a00003 	mov	r0, r3
         bc52c:	e3a01004 	mov	r1, #4	; 0x4
         bc530:	ea6c0eb7 	b	1bc0014 <TCommTool::$KillRequestComplete(CommToolRequestType, long)>
         bc534:	e1a00003 	mov	r0, r3
         bc538:	e5931000 	ldr	r1, [r3]
         bc53c:	e281ff46 	add	pc, r1, #280	; 0x118
    */
}

/**
 * Symbol: TFaxTool::TaskDestructor(void)
 * Address: 000bc540
 */
TFaxTool::TaskDestructor(void) {
    /*
         bc540:	ea6c12d6 	b	1bc10a0 <TCommTool::$TaskDestructor(void)>
    */
}

/**
 * Symbol: TFaxTool::PutBytes(CBufferList *)
 * Address: 000bc544
 */
TFaxTool::PutBytes(CBufferList *) {
    /*
         bc544:	e590226c 	ldr	r2, [r0, #620]	; fField620
         bc548:	e3120902 	tst	r2, #32768	; 0x8000
         bc54c:	03a01009 	moveq	r1, #9	; 0x9
         bc550:	02411c56 	subeq	r1, r1, #22016	; 0x5600
         bc554:	0a6c12cd 	beq	1bc1090 <TCommTool::$StartAbort(long)>
         bc558:	e5902018 	ldr	r2, [r0, #24]	; fField24
         bc55c:	e3120004 	tst	r2, #4	; 0x4
         bc560:	11a0f00e 	movne	pc, lr
         bc564:	e59023fc 	ldr	r2, [r0, #1020]	; fField1020
         bc568:	e580140c 	str	r1, [r0, #1036]	; fField1036
         bc56c:	e5802400 	str	r2, [r0, #1024]	; fField1024
         bc570:	ea6571bc 	b	1a18c68 <TFaxTool::$SendNextLine(void)>
    */
}

/**
 * Symbol: TFaxTool::PutFramedBytes(CBufferList *, unsigned char)
 * Address: 000bc574
 */
TFaxTool::PutFramedBytes(CBufferList *, unsigned char) {
    /*
         bc574:	e3a02000 	mov	r2, #0	; 0x0
         bc578:	e3a0107e 	mov	r1, #126	; 0x7e
         bc57c:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
         bc580:	e5903000 	ldr	r3, [r0]
         bc584:	e283f0d4 	add	pc, r3, #212	; 0xd4
    */
}

/**
 * Symbol: TFaxTool::PutComplete(long, unsigned long)
 * Address: 000bc588
 */
TFaxTool::PutComplete(long, unsigned long) {
    /*
         bc588:	e3a03000 	mov	r3, #0	; 0x0
         bc58c:	e580340c 	str	r3, [r0, #1036]	; fField1036
         bc590:	ea6c0eb0 	b	1bc0058 <TCommTool::$PutComplete(long, unsigned long)>
    */
}

/**
 * Symbol: TFaxTool::KillPut(void)
 * Address: 000bc594
 */
TFaxTool::KillPut(void) {
    /*
         bc594:	e1a0c00d 	mov	ip, sp
         bc598:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         bc59c:	e24cb004 	sub	fp, ip, #4	; 0x4
         bc5a0:	e1a04000 	mov	r4, r0
         bc5a4:	e590040c 	ldr	r0, [r0, #1036]	; fField1036
         bc5a8:	e3300000 	teq	r0, #0	; 0x0
         bc5ac:	01a00004 	moveq	r0, r4
         bc5b0:	03a01071 	moveq	r1, #113	; 0x71
         bc5b4:	02411c3f 	subeq	r1, r1, #16128	; 0x3f00
         bc5b8:	0a00000a 	beq	bc5e8 <TFaxTool::KillPut(void)+0x54>
         bc5bc:	e5901000 	ldr	r1, [r0]
         bc5c0:	e1a0e00f 	mov	lr, pc
         bc5c4:	e281f02c 	add	pc, r1, #44	; 0x2c
         bc5c8:	e1a02000 	mov	r2, r0
         bc5cc:	e1a00004 	mov	r0, r4
         bc5d0:	e59f101c 	ldr	r1, [pc, #1c]	; bc5f4 <TFaxTool::KillPut(void)+0x60>	; fField1
         bc5d4:	e5943000 	ldr	r3, [r4]
         bc5d8:	e1a0e00f 	mov	lr, pc
         bc5dc:	e283f0d4 	add	pc, r3, #212	; 0xd4
         bc5e0:	e1a00004 	mov	r0, r4
         bc5e4:	e3a01000 	mov	r1, #0	; 0x0
         bc5e8:	e5942000 	ldr	r2, [r4]
         bc5ec:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         bc5f0:	e282f0dc 	add	pc, r2, #220	; 0xdc
         bc5f4:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TFaxTool::GetBytes(CBufferList *)
 * Address: 000bc5f8
 */
TFaxTool::GetBytes(CBufferList *) {
    /*
         bc5f8:	e3a03000 	mov	r3, #0	; 0x0
         bc5fc:	e3a02000 	mov	r2, #0	; 0x0
         bc600:	e3a0107e 	mov	r1, #126	; 0x7e
         bc604:	e2411c3f 	sub	r1, r1, #16128	; 0x3f00
         bc608:	e590c000 	ldr	ip, [r0]
         bc60c:	e28cf0ec 	add	pc, ip, #236	; 0xec
    */
}

/**
 * Symbol: TFaxTool::GetFramedBytes(CBufferList *)
 * Address: 000bc610
 */
TFaxTool::GetFramedBytes(CBufferList *) {
    /*
         bc610:	e1a0c00d 	mov	ip, sp
         bc614:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         bc618:	e24cb004 	sub	fp, ip, #4	; 0x4
         bc61c:	e1a04000 	mov	r4, r0
         bc620:	e590026c 	ldr	r0, [r0, #620]	; fField620
         bc624:	e3100002 	tst	r0, #2	; 0x2
         bc628:	0a000010 	beq	bc670 <TFaxTool::GetFramedBytes(CBufferList *)+0x60>
         bc62c:	e5940018 	ldr	r0, [r4, #24]	; fField24
         bc630:	e3100004 	tst	r0, #4	; 0x4
         bc634:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         bc638:	e1a00001 	mov	r0, r1
         bc63c:	e584140c 	str	r1, [r4, #1036]	; fField1036
         bc640:	e5911000 	ldr	r1, [r1]
         bc644:	e1a0e00f 	mov	lr, pc
         bc648:	e281f02c 	add	pc, r1, #44	; 0x2c
         bc64c:	e1a01000 	mov	r1, r0
         bc650:	e59402dc 	ldr	r0, [r4, #732]	; fField732
         bc654:	eb6bd8bb 	bl	1bb2948 <$__rt_udiv>
         bc658:	e5840400 	str	r0, [r4, #1024]	; fField1024
         bc65c:	e1a00004 	mov	r0, r4
         bc660:	eb65a31a 	bl	1a252d0 <TFaxTool::$DecodeLinesBuf(void)>
         bc664:	e3300000 	teq	r0, #0	; 0x0
         bc668:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         bc66c:	ea000001 	b	bc678 <TFaxTool::GetFramedBytes(CBufferList *)+0x68>
         bc670:	e3a00009 	mov	r0, #9	; 0x9
         bc674:	e2400c56 	sub	r0, r0, #22016	; 0x5600
         bc678:	e1a01000 	mov	r1, r0
         bc67c:	e1a00004 	mov	r0, r4
         bc680:	e3a03000 	mov	r3, #0	; 0x0
         bc684:	e3a02000 	mov	r2, #0	; 0x0
         bc688:	e594c000 	ldr	ip, [r4]
         bc68c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         bc690:	e28cf0ec 	add	pc, ip, #236	; 0xec
    */
}

/**
 * Symbol: TFaxTool::GetComplete(long, unsigned char, unsigned long)
 * Address: 000bc694
 */
TFaxTool::GetComplete(long, unsigned char, unsigned long) {
    /*
         bc694:	e20220ff 	and	r2, r2, #255	; 0xff
         bc698:	e3a0c000 	mov	ip, #0	; 0x0
         bc69c:	e580c40c 	str	ip, [r0, #1036]	; fField1036
         bc6a0:	ea6c0e4f 	b	1bbffe4 <TCommTool::$GetComplete(long, unsigned char, unsigned long)>
    */
}

/**
 * Symbol: TFaxTool::KillGet(void)
 * Address: 000bc6a4
 */
TFaxTool::KillGet(void) {
    /*
         bc6a4:	e1a0c00d 	mov	ip, sp
         bc6a8:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         bc6ac:	e24cb004 	sub	fp, ip, #4	; 0x4
         bc6b0:	e1a04000 	mov	r4, r0
         bc6b4:	e590040c 	ldr	r0, [r0, #1036]	; fField1036
         bc6b8:	e3300000 	teq	r0, #0	; 0x0
         bc6bc:	01a00004 	moveq	r0, r4
         bc6c0:	03a01071 	moveq	r1, #113	; 0x71
         bc6c4:	02411c3f 	subeq	r1, r1, #16128	; 0x3f00
         bc6c8:	0a00000e 	beq	bc708 <TFaxTool::KillGet(void)+0x64>
         bc6cc:	e5901000 	ldr	r1, [r0]
         bc6d0:	e1a0e00f 	mov	lr, pc
         bc6d4:	e281f02c 	add	pc, r1, #44	; 0x2c
         bc6d8:	e1a03000 	mov	r3, r0
         bc6dc:	e594027c 	ldr	r0, [r4, #636]	; fField636
         bc6e0:	e3300003 	teq	r0, #3	; 0x3
         bc6e4:	13a02000 	movne	r2, #0	; 0x0
         bc6e8:	03a02001 	moveq	r2, #1	; 0x1
         bc6ec:	e1a00004 	mov	r0, r4
         bc6f0:	e59f101c 	ldr	r1, [pc, #1c]	; bc714 <TFaxTool::KillGet(void)+0x70>	; fField1
         bc6f4:	e594c000 	ldr	ip, [r4]
         bc6f8:	e1a0e00f 	mov	lr, pc
         bc6fc:	e28cf0ec 	add	pc, ip, #236	; 0xec
         bc700:	e1a00004 	mov	r0, r4
         bc704:	e3a01000 	mov	r1, #0	; 0x0
         bc708:	e5942000 	ldr	r2, [r4]
         bc70c:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         bc710:	e282f0f4 	add	pc, r2, #244	; 0xf4
         bc714:	ffffc17b 	swinv	0x00ffc17b
    */
}

/**
 * Symbol: TFaxTool::ForwardOptions(void)
 * Address: 000bc718
 */
TFaxTool::ForwardOptions(void) {
    /*
         bc718:	e2800fb9 	add	r0, r0, #740	; 0x2e4
         bc71c:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxTool::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 000bc720
 */
TFaxTool::ProcessPutBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         bc720:	e590c000 	ldr	ip, [r0]
         bc724:	e28cf0a4 	add	pc, ip, #164	; 0xa4
    */
}

/**
 * Symbol: TFaxTool::AllocateLineBuffers(void)
 * Address: 000bc728
 */
TFaxTool::AllocateLineBuffers(void) {
    /*
         bc728:	e1a0c00d 	mov	ip, sp
         bc72c:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         bc730:	e24cb004 	sub	fp, ip, #4	; 0x4
         bc734:	e1a04000 	mov	r4, r0
         bc738:	e3a05000 	mov	r5, #0	; 0x0
         bc73c:	e3a080e9 	mov	r8, #233	; 0xe9
         bc740:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
         bc744:	e59402e0 	ldr	r0, [r4, #736]	; fField736
         bc748:	e1a00080 	mov	r0, r0, lsl #1
         bc74c:	eb6c6905 	bl	1bd6b68 <$malloc>
         bc750:	e0851085 	add	r1, r5, r5, lsl #1
         bc754:	e0811185 	add	r1, r1, r5, lsl #3
         bc758:	e0847181 	add	r7, r4, r1, lsl #3
         bc75c:	e5870364 	str	r0, [r7, #868]
         bc760:	e1b01000 	movs	r1, r0
         bc764:	0a000019 	beq	bc7d0 <TFaxTool::AllocateLineBuffers(void)+0xa8>
         bc768:	e3e03000 	mvn	r3, #0	; 0x0
         bc76c:	e3a02000 	mov	r2, #0	; 0x0
         bc770:	e92d000c 	stmdb	sp!, {r2, r3}
         bc774:	e59402e0 	ldr	r0, [r4, #736]	; fField736
         bc778:	e1a02080 	mov	r2, r0, lsl #1
         bc77c:	e2870fcf 	add	r0, r7, #828	; 0x33c
         bc780:	e3a03000 	mov	r3, #0	; 0x0
         bc784:	eb6cb348 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         bc788:	e28dd008 	add	sp, sp, #8	; 0x8
         bc78c:	e1b06000 	movs	r6, r0
         bc790:	1a00000f 	bne	bc7d4 <TFaxTool::AllocateLineBuffers(void)+0xac>
         bc794:	e2870fdd 	add	r0, r7, #884	; 0x374
         bc798:	e5901000 	ldr	r1, [r0]
         bc79c:	e1a0e00f 	mov	lr, pc
         bc7a0:	e281f028 	add	pc, r1, #40	; 0x28
         bc7a4:	e2855001 	add	r5, r5, #1	; 0x1
         bc7a8:	e3550002 	cmp	r5, #2	; 0x2
         bc7ac:	baffffe4 	blt	bc744 <TFaxTool::AllocateLineBuffers(void)+0x1c>
         bc7b0:	e5940410 	ldr	r0, [r4, #1040]	; fField1040
         bc7b4:	e3300000 	teq	r0, #0	; 0x0
         bc7b8:	1a000005 	bne	bc7d4 <TFaxTool::AllocateLineBuffers(void)+0xac>
         bc7bc:	e59402dc 	ldr	r0, [r4, #732]	; fField732
         bc7c0:	eb6c68e8 	bl	1bd6b68 <$malloc>
         bc7c4:	e5a40410 	str	r0, [r4, #1040]!	; fField1040
         bc7c8:	e3300000 	teq	r0, #0	; 0x0
         bc7cc:	1a000000 	bne	bc7d4 <TFaxTool::AllocateLineBuffers(void)+0xac>
         bc7d0:	e1a06008 	mov	r6, r8
         bc7d4:	e1a00006 	mov	r0, r6
         bc7d8:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 000bc7dc
 */
TFaxTool::ProcessGetBytesOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         bc7dc:	e590c000 	ldr	ip, [r0]
         bc7e0:	e28cf0a4 	add	pc, ip, #164	; 0xa4
    */
}

/**
 * Symbol: TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)
 * Address: 000bc7e4
 */
TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long) {
    /*
         bc7e4:	e1a0c00d 	mov	ip, sp
         bc7e8:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         bc7ec:	e24cb004 	sub	fp, ip, #4	; 0x4
         bc7f0:	e1a04000 	mov	r4, r0
         bc7f4:	e1a05001 	mov	r5, r1
         bc7f8:	e3a06000 	mov	r6, #0	; 0x0
         bc7fc:	e59fc070 	ldr	ip, [pc, #70]	; bc874 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x90>
         bc800:	e152000c 	cmp	r2, ip
         bc804:	0a0000a2 	beq	bca94 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2b0>
         bc808:	ca000035 	bgt	bc8e4 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x100>
         bc80c:	e59fc064 	ldr	ip, [pc, #64]	; bc878 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x94>	; fField64
         bc810:	e152000c 	cmp	r2, ip
         bc814:	0a0000e7 	beq	bcbb8 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3d4>
         bc818:	ca000019 	bgt	bc884 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xa0>
         bc81c:	e59fc058 	ldr	ip, [pc, #58]	; bc87c <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x98>
         bc820:	e132000c 	teq	r2, ip
         bc824:	0a0000b5 	beq	bcb00 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x31c>
         bc828:	e59fc050 	ldr	ip, [pc, #50]	; bc880 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x9c>
         bc82c:	e132000c 	teq	r2, ip
         bc830:	1a000138 	bne	bcd18 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x534>
         bc834:	e2840fb1 	add	r0, r4, #708	; 0x2c4
         bc838:	e3330c01 	teq	r3, #256	; 0x100
         bc83c:	13330c02 	teqne	r3, #512	; 0x200
         bc840:	1a000071 	bne	bca0c <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x228>
         bc844:	e1a01005 	mov	r1, r5
         bc848:	eb6bece0 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         bc84c:	e5d402d1 	ldrb	r0, [r4, #721]	; fField721
         bc850:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         bc854:	e3c11802 	bic	r1, r1, #131072	; 0x20000
         bc858:	e2000001 	and	r0, r0, #1	; 0x1
         bc85c:	e1811880 	orr	r1, r1, r0, lsl #17
         bc860:	e5d402d0 	ldrb	r0, [r4, #720]	; fField720
         bc864:	e3c11801 	bic	r1, r1, #65536	; 0x10000
         bc868:	e2000001 	and	r0, r0, #1	; 0x1
         bc86c:	e1810800 	orr	r0, r1, r0, lsl #16
         bc870:	ea00004e 	b	bc9b0 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1cc>
         bc874:	666d736c 	strvsbt	r7, [sp], -ip, ror #6	; fField6
         bc878:	66656f6d 	strvsbt	r6, [r5], -sp, ror #30
         bc87c:	66637362 	strvsbt	r7, [r3], -r2, ror #6	; fField6
         bc880:	66646972 	undefined
         bc884:	e59fc050 	ldr	ip, [pc, #50]	; bc8dc <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xf8>
         bc888:	e132000c 	teq	r2, ip
         bc88c:	0a00010a 	beq	bccbc <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4d8>
         bc890:	e59fc048 	ldr	ip, [pc, #48]	; bc8e0 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0xfc>
         bc894:	e132000c 	teq	r2, ip
         bc898:	1a00011e 	bne	bcd18 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x534>
         bc89c:	e2841e7f 	add	r1, r4, #2032	; 0x7f0
         bc8a0:	e285700c 	add	r7, r5, #12	; 0xc
         bc8a4:	e3330c01 	teq	r3, #256	; 0x100
         bc8a8:	13330c02 	teqne	r3, #512	; 0x200
         bc8ac:	1a000069 	bne	bca58 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x274>
         bc8b0:	e1a02001 	mov	r2, r1
         bc8b4:	e1a01007 	mov	r1, r7
         bc8b8:	e1a00004 	mov	r0, r4
         bc8bc:	eb6574fa 	bl	1a19cac <TFaxTool::$SetIdentification(unsigned char const *const, unsigned char *const)>
         bc8c0:	e1a01007 	mov	r1, r7
         bc8c4:	e2840e86 	add	r0, r4, #2144	; 0x860
         bc8c8:	e3a02014 	mov	r2, #20	; 0x14
         bc8cc:	eb6be47a 	bl	1bb5abc <$strncpy>
         bc8d0:	e3a00000 	mov	r0, #0	; 0x0
         bc8d4:	e5c40874 	strb	r0, [r4, #2164]	; fField2164
         bc8d8:	ea00010c 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bc8dc:	66657065 	strvsbt	r7, [r5], -r5, rrx
         bc8e0:	666c6964 	strvsbt	r6, [ip], -r4, ror #18
         bc8e4:	e59fc064 	ldr	ip, [pc, #64]	; bc950 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x16c>	; fField64
         bc8e8:	e132000c 	teq	r2, ip
         bc8ec:	0a00001b 	beq	bc960 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x17c>
         bc8f0:	e59fc05c 	ldr	ip, [pc, #5c]	; bc954 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x170>	; fField5
         bc8f4:	e132000c 	teq	r2, ip
         bc8f8:	0a00004a 	beq	bca28 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x244>
         bc8fc:	e59fc054 	ldr	ip, [pc, #54]	; bc958 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x174>
         bc900:	e132000c 	teq	r2, ip
         bc904:	0a00009c 	beq	bcb7c <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x398>
         bc908:	e59fc04c 	ldr	ip, [pc, #4c]	; bc95c <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x178>	; fField4
         bc90c:	e132000c 	teq	r2, ip
         bc910:	1a000100 	bne	bcd18 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x534>
         bc914:	e2840fc3 	add	r0, r4, #780	; 0x30c
         bc918:	e3330c01 	teq	r3, #256	; 0x100
         bc91c:	13330c02 	teqne	r3, #512	; 0x200
         bc920:	01a01005 	moveq	r1, r5
         bc924:	0a0000f8 	beq	bcd0c <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x528>
         bc928:	e3330c03 	teq	r3, #768	; 0x300
         bc92c:	1a0000f4 	bne	bcd04 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x520>
         bc930:	e24dd028 	sub	sp, sp, #40	; 0x28
         bc934:	e1a0000d 	mov	r0, sp
         bc938:	eb6d2258 	bl	1c052a0 <TCMOModemFaxCapabilities::$__ct(void)>
         bc93c:	e1a0100d 	mov	r1, sp
         bc940:	e1a00005 	mov	r0, r5
         bc944:	eb6beca1 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         bc948:	e28dd028 	add	sp, sp, #40	; 0x28
         bc94c:	ea0000ef 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bc950:	66707375 	undefined
         bc954:	66726964 	ldrvsbt	r6, [r2], -r4, ror #18
         bc958:	66737067 	ldrvsbt	r7, [r3], -r7, rrx
         bc95c:	6d666178 	stfvse	f6, [r6, -#480]!
         bc960:	e3330c01 	teq	r3, #256	; 0x100
         bc964:	13330c02 	teqne	r3, #512	; 0x200
         bc968:	1a000012 	bne	bc9b8 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1d4>
         bc96c:	e595000c 	ldr	r0, [r5, #12]
         bc970:	e59412a4 	ldr	r1, [r4, #676]	; fField676
         bc974:	e3c11b03 	bic	r1, r1, #3072	; 0xc00
         bc978:	e2000003 	and	r0, r0, #3	; 0x3
         bc97c:	e1810500 	orr	r0, r1, r0, lsl #10
         bc980:	e58402a4 	str	r0, [r4, #676]	; fField676
         bc984:	e3c00c03 	bic	r0, r0, #768	; 0x300
         bc988:	e5951010 	ldr	r1, [r5, #16]	; fField16
         bc98c:	e2011003 	and	r1, r1, #3	; 0x3
         bc990:	e1800401 	orr	r0, r0, r1, lsl #8
         bc994:	e58402a4 	str	r0, [r4, #676]	; fField676
         bc998:	e5b51014 	ldr	r1, [r5, #20]!
         bc99c:	e2111002 	ands	r1, r1, #2	; 0x2
         bc9a0:	13a01001 	movne	r1, #1	; 0x1
         bc9a4:	e3c00501 	bic	r0, r0, #4194304	; 0x400000
         bc9a8:	e2011001 	and	r1, r1, #1	; 0x1
         bc9ac:	e1800b01 	orr	r0, r0, r1, lsl #22
         bc9b0:	e5a402a4 	str	r0, [r4, #676]!	; fField676
         bc9b4:	ea0000d5 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bc9b8:	e3330c03 	teq	r3, #768	; 0x300
         bc9bc:	1a000004 	bne	bc9d4 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x1f0>
         bc9c0:	e24dd018 	sub	sp, sp, #24	; 0x18
         bc9c4:	e1a0000d 	mov	r0, sp
         bc9c8:	eb6bfcff 	bl	1bbbdcc <TCMOFaxPageSetUp::$__ct(void)>
         bc9cc:	e1a0100d 	mov	r1, sp
         bc9d0:	ea00005f 	b	bcb54 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x370>
         bc9d4:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         bc9d8:	e1a00a00 	mov	r0, r0, lsl #20
         bc9dc:	e1a00f20 	mov	r0, r0, lsr #30
         bc9e0:	e585000c 	str	r0, [r5, #12]
         bc9e4:	e59402a4 	ldr	r0, [r4, #676]	; fField676
         bc9e8:	e1a00b00 	mov	r0, r0, lsl #22
         bc9ec:	e1a00f20 	mov	r0, r0, lsr #30
         bc9f0:	e5850010 	str	r0, [r5, #16]	; fField16
         bc9f4:	e5b402a4 	ldr	r0, [r4, #676]!	; fField676
         bc9f8:	e3100501 	tst	r0, #4194304	; 0x400000
         bc9fc:	03a00001 	moveq	r0, #1	; 0x1
         bca00:	13a00003 	movne	r0, #3	; 0x3
         bca04:	e5a50014 	str	r0, [r5, #20]!
         bca08:	ea0000c0 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bca0c:	e3330c03 	teq	r3, #768	; 0x300
         bca10:	1a0000bb 	bne	bcd04 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x520>
         bca14:	e24dd010 	sub	sp, sp, #16	; 0x10
         bca18:	e1a0000d 	mov	r0, sp
         bca1c:	eb6bfce9 	bl	1bbbdc8 <TCMOFaxDirection::$__ct(void)>
         bca20:	e1a0100d 	mov	r1, sp
         bca24:	ea0000af 	b	bcce8 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x504>
         bca28:	e3330c01 	teq	r3, #256	; 0x100
         bca2c:	13330c02 	teqne	r3, #512	; 0x200
         bca30:	0a000097 	beq	bcc94 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4b0>
         bca34:	e3330c03 	teq	r3, #768	; 0x300
         bca38:	12841ff3 	addne	r1, r4, #972	; 0x3cc
         bca3c:	12811b01 	addne	r1, r1, #1024	; 0x400
         bca40:	1a0000b0 	bne	bcd08 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x524>
         bca44:	e24dd024 	sub	sp, sp, #36	; 0x24
         bca48:	e1a0000d 	mov	r0, sp
         bca4c:	eb6bfcd1 	bl	1bbbd98 <TCMOFaxRemoteId::$__ct(void)>
         bca50:	e1a0100d 	mov	r1, sp
         bca54:	ea000005 	b	bca70 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x28c>
         bca58:	e3330c03 	teq	r3, #768	; 0x300
         bca5c:	1a000007 	bne	bca80 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x29c>
         bca60:	e24dd024 	sub	sp, sp, #36	; 0x24
         bca64:	e1a0000d 	mov	r0, sp
         bca68:	eb6bfcc7 	bl	1bbbd8c <TCMOFaxLocalId::$__ct(void)>
         bca6c:	e1a0100d 	mov	r1, sp
         bca70:	e1a00005 	mov	r0, r5
         bca74:	eb6bec55 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         bca78:	e28dd024 	add	sp, sp, #36	; 0x24
         bca7c:	ea0000a3 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bca80:	e1a02007 	mov	r2, r7
         bca84:	e1a00004 	mov	r0, r4
         bca88:	e3a03014 	mov	r3, #20	; 0x14
         bca8c:	eb655387 	bl	1a118b0 <TFaxTool::$GetIdentification(unsigned char const *, unsigned char *const, unsigned long)>
         bca90:	ea00009e 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bca94:	e3330c01 	teq	r3, #256	; 0x100
         bca98:	13330c02 	teqne	r3, #512	; 0x200
         bca9c:	1a00000f 	bne	bcae0 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x2fc>
         bcaa0:	e5b5000c 	ldr	r0, [r5, #12]!
         bcaa4:	e250cd4e 	subs	ip, r0, #4992	; 0x1380
         bcaa8:	235c0008 	cmpcs	ip, #8	; 0x8
         bcaac:	8a000078 	bhi	bcc94 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4b0>
         bcab0:	e58402fc 	str	r0, [r4, #764]	; fField764
         bcab4:	e5940018 	ldr	r0, [r4, #24]	; fField24
         bcab8:	e3100101 	tst	r0, #1073741824	; 0x40000000
         bcabc:	0a000093 	beq	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bcac0:	e594063c 	ldr	r0, [r4, #1596]	; fField1596
         bcac4:	e330000b 	teq	r0, #11	; 0xb
         bcac8:	1a000090 	bne	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bcacc:	e1a00004 	mov	r0, r4
         bcad0:	eb655fd3 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         bcad4:	e1a00004 	mov	r0, r4
         bcad8:	eb657cba 	bl	1a1bdc8 <TFaxTool::$TimerComplete(void)>
         bcadc:	ea00008b 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bcae0:	e3330c03 	teq	r3, #768	; 0x300
         bcae4:	15b402fc 	ldrne	r0, [r4, #764]!	; fField764
         bcae8:	1a000083 	bne	bccfc <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x518>
         bcaec:	e24dd010 	sub	sp, sp, #16	; 0x10
         bcaf0:	e1a0000d 	mov	r0, sp
         bcaf4:	eb6d21e6 	bl	1c05294 <TCMOFaxMinScanLineTime::$__ct(void)>
         bcaf8:	e1a0100d 	mov	r1, sp
         bcafc:	ea000079 	b	bcce8 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x504>
         bcb00:	e3330c01 	teq	r3, #256	; 0x100
         bcb04:	13330c02 	teqne	r3, #512	; 0x200
         bcb08:	1a00000b 	bne	bcb3c <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x358>
         bcb0c:	e595000c 	ldr	r0, [r5, #12]
         bcb10:	e58403fc 	str	r0, [r4, #1020]	; fField1020
         bcb14:	e5951010 	ldr	r1, [r5, #16]	; fField16
         bcb18:	e5841404 	str	r1, [r4, #1028]	; fField1028
         bcb1c:	e5b52014 	ldr	r2, [r5, #20]!
         bcb20:	e3300000 	teq	r0, #0	; 0x0
         bcb24:	e5842408 	str	r2, [r4, #1032]	; fField1032
         bcb28:	0a000059 	beq	bcc94 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4b0>
         bcb2c:	e5b402dc 	ldr	r0, [r4, #732]!	; fField732
         bcb30:	e1510000 	cmp	r1, r0
         bcb34:	9a000075 	bls	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bcb38:	ea000055 	b	bcc94 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4b0>
         bcb3c:	e3330c03 	teq	r3, #768	; 0x300
         bcb40:	1a000007 	bne	bcb64 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x380>
         bcb44:	e24dd018 	sub	sp, sp, #24	; 0x18
         bcb48:	e1a0000d 	mov	r0, sp
         bcb4c:	eb6d21cd 	bl	1c05288 <TCMOFaxConfigSendBand::$__ct(void)>
         bcb50:	e1a0100d 	mov	r1, sp
         bcb54:	e1a00005 	mov	r0, r5
         bcb58:	eb6bec1c 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         bcb5c:	e28dd018 	add	sp, sp, #24	; 0x18
         bcb60:	ea00006a 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bcb64:	e59403fc 	ldr	r0, [r4, #1020]	; fField1020
         bcb68:	e585000c 	str	r0, [r5, #12]
         bcb6c:	e5940404 	ldr	r0, [r4, #1028]	; fField1028
         bcb70:	e5850010 	str	r0, [r5, #16]	; fField16
         bcb74:	e5b40408 	ldr	r0, [r4, #1032]!	; fField1032
         bcb78:	eaffffa1 	b	bca04 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x220>
         bcb7c:	e3330c01 	teq	r3, #256	; 0x100
         bcb80:	13330c02 	teqne	r3, #512	; 0x200
         bcb84:	1a000006 	bne	bcba4 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x3c0>
         bcb88:	e1a00004 	mov	r0, r4
         bcb8c:	eb654f1e 	bl	1a1080c <TFaxTool::$DoStartPage(void)>
         bcb90:	e3300000 	teq	r0, #0	; 0x0
         bcb94:	03a06001 	moveq	r6, #1	; 0x1
         bcb98:	0a00005c 	beq	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bcb9c:	e5a50010 	str	r0, [r5, #16]!	; fField16
         bcba0:	ea00003b 	b	bcc94 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4b0>
         bcba4:	e24dd014 	sub	sp, sp, #20	; 0x14
         bcba8:	e1a0000d 	mov	r0, sp
         bcbac:	eb6d1da7 	bl	1c04250 <TCMOFaxStartPage::$__ct(void)>
         bcbb0:	e1a0100d 	mov	r1, sp
         bcbb4:	ea00003c 	b	bccac <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4c8>
         bcbb8:	e3330c01 	teq	r3, #256	; 0x100
         bcbbc:	13330c02 	teqne	r3, #512	; 0x200
         bcbc0:	1a000035 	bne	bcc9c <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4b8>
         bcbc4:	e3a01000 	mov	r1, #0	; 0x0
         bcbc8:	e594026c 	ldr	r0, [r4, #620]	; fField620
         bcbcc:	e3100001 	tst	r0, #1	; 0x1
         bcbd0:	e59f202c 	ldr	r2, [pc, #2c]	; bcc04 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x420>	; fField2
         bcbd4:	0a00000b 	beq	bcc08 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x424>
         bcbd8:	e5943018 	ldr	r3, [r4, #24]	; fField24
         bcbdc:	e3130002 	tst	r3, #2	; 0x2
         bcbe0:	01a01002 	moveq	r1, r2
         bcbe4:	e3100902 	tst	r0, #32768	; 0x8000
         bcbe8:	03a01009 	moveq	r1, #9	; 0x9
         bcbec:	02411c56 	subeq	r1, r1, #22016	; 0x5600
         bcbf0:	0a000001 	beq	bcbfc <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x418>
         bcbf4:	e3310000 	teq	r1, #0	; 0x0
         bcbf8:	0a000008 	beq	bcc20 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x43c>
         bcbfc:	e5a51010 	str	r1, [r5, #16]!	; fField16
         bcc00:	ea000023 	b	bcc94 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4b0>
         bcc04:	ffffc177 	swinv	0x00ffc177
         bcc08:	e5941018 	ldr	r1, [r4, #24]	; fField24
         bcc0c:	e3110002 	tst	r1, #2	; 0x2
         bcc10:	12001010 	andne	r1, r0, #16	; 0x10
         bcc14:	13310000 	teqne	r1, #0	; 0x0
         bcc18:	01a01002 	moveq	r1, r2
         bcc1c:	0afffff6 	beq	bcbfc <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x418>
         bcc20:	e3a06001 	mov	r6, #1	; 0x1
         bcc24:	e3800c01 	orr	r0, r0, #256	; 0x100
         bcc28:	e584026c 	str	r0, [r4, #620]	; fField620
         bcc2c:	e5941818 	ldr	r1, [r4, #2072]	; fField2072
         bcc30:	e3310002 	teq	r1, #2	; 0x2
         bcc34:	0a000007 	beq	bcc58 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x474>
         bcc38:	e3310004 	teq	r1, #4	; 0x4
         bcc3c:	0a000010 	beq	bcc84 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4a0>
         bcc40:	e3310008 	teq	r1, #8	; 0x8
         bcc44:	1a000012 	bne	bcc94 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x4b0>
         bcc48:	e1a00004 	mov	r0, r4
         bcc4c:	e3a01006 	mov	r1, #6	; 0x6
         bcc50:	eb658082 	bl	1a1ce60 <TFaxTool::$C20StateUpdate(unsigned long)>
         bcc54:	ea00002d 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bcc58:	e3100001 	tst	r0, #1	; 0x1
         bcc5c:	0a000002 	beq	bcc6c <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x488>
         bcc60:	e1a00004 	mov	r0, r4
         bcc64:	eb654ad5 	bl	1a0f7c0 <TFaxTool::$DoEndPage(void)>
         bcc68:	ea000028 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bcc6c:	e3c00010 	bic	r0, r0, #16	; 0x10
         bcc70:	e584026c 	str	r0, [r4, #620]	; fField620
         bcc74:	e3100602 	tst	r0, #2097152	; 0x200000
         bcc78:	11a00004 	movne	r0, r4
         bcc7c:	1b65adfe 	blne	1a2847c <TFaxTool::$PhaseDProcessReceivedPageConfirmation(void)>
         bcc80:	ea000022 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bcc84:	e1a00004 	mov	r0, r4
         bcc88:	e3a01006 	mov	r1, #6	; 0x6
         bcc8c:	eb658490 	bl	1a1ded4 <TFaxTool::$C2StateUpdate(unsigned long)>
         bcc90:	ea00001e 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bcc94:	e3e06000 	mvn	r6, #0	; 0x0
         bcc98:	ea00001c 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bcc9c:	e24dd014 	sub	sp, sp, #20	; 0x14
         bcca0:	e1a0000d 	mov	r0, sp
         bcca4:	eb6d1d69 	bl	1c04250 <TCMOFaxStartPage::$__ct(void)>
         bcca8:	e1a0100d 	mov	r1, sp
         bccac:	e1a00005 	mov	r0, r5
         bccb0:	eb6bebc6 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         bccb4:	e28dd014 	add	sp, sp, #20	; 0x14
         bccb8:	ea000014 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bccbc:	e3330c01 	teq	r3, #256	; 0x100
         bccc0:	13330c02 	teqne	r3, #512	; 0x200
         bccc4:	05b5000c 	ldreq	r0, [r5, #12]!
         bccc8:	05a40304 	streq	r0, [r4, #772]!	; fField772
         bcccc:	0a00000f 	beq	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bccd0:	e3330c03 	teq	r3, #768	; 0x300
         bccd4:	1a000007 	bne	bccf8 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x514>
         bccd8:	e24dd010 	sub	sp, sp, #16	; 0x10
         bccdc:	e1a0000d 	mov	r0, sp
         bcce0:	eb6d2170 	bl	1c052a8 <TCMOFaxEnableProgressEvent::$__ct(void)>
         bcce4:	e1a0100d 	mov	r1, sp
         bcce8:	e1a00005 	mov	r0, r5
         bccec:	eb6bebb7 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         bccf0:	e28dd010 	add	sp, sp, #16	; 0x10
         bccf4:	ea000005 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bccf8:	e5b40304 	ldr	r0, [r4, #772]!	; fField772
         bccfc:	e5a5000c 	str	r0, [r5, #12]!
         bcd00:	ea000002 	b	bcd10 <TFaxTool::ProcessOptionStart(TOption *, unsigned long, unsigned long)+0x52c>
         bcd04:	e1a01000 	mov	r1, r0
         bcd08:	e1a00005 	mov	r0, r5
         bcd0c:	eb6bebaf 	bl	1bb7bd0 <TOption::$CopyDataFrom(TOption *)>
         bcd10:	e1a00006 	mov	r0, r6
         bcd14:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         bcd18:	e1a01005 	mov	r1, r5
         bcd1c:	e1a00004 	mov	r0, r4
         bcd20:	e91b68f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, lr}
         bcd24:	ea65b5fb 	b	1a2a518 <TCommTool::$ProcessOptionStart(TOption *, unsigned long, unsigned long)>
    */
}

/**
 * Symbol: TFaxTool::TimeOutKillComplete(void)
 * Address: 000bcd28
 */
TFaxTool::TimeOutKillComplete(void) {
    /*
         bcd28:	e590126c 	ldr	r1, [r0, #620]	; fField620
         bcd2c:	e3c11202 	bic	r1, r1, #536870912	; 0x20000000
         bcd30:	e580126c 	str	r1, [r0, #620]	; fField620
         bcd34:	e3a0100a 	mov	r1, #10	; 0xa
         bcd38:	ea65ba2a 	b	1a2b5e8 <TFaxTool::$RetransCommand(unsigned long)>
    */
}

/**
 * Symbol: TFaxTool::PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)
 * Address: 000bcd3c
 */
TFaxTool::PostRecvPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char) {
    /*
         bcd3c:	e1a0c00d 	mov	ip, sp
         bcd40:	e92dd830 	stmdb	sp!, {r4, r5, fp, ip, lr, pc}
         bcd44:	e24cb004 	sub	fp, ip, #4	; 0x4
         bcd48:	e1a04000 	mov	r4, r0
         bcd4c:	e1a05001 	mov	r5, r1
         bcd50:	e59b0008 	ldr	r0, [fp, #8]
         bcd54:	e59b1004 	ldr	r1, [fp, #4]	; fField4
         bcd58:	e5841534 	str	r1, [r4, #1332]	; fField1332
         bcd5c:	e2844e53 	add	r4, r4, #1328	; 0x530
         bcd60:	e804000c 	stmda	r4, {r2, r3}
         bcd64:	e2444e53 	sub	r4, r4, #1328	; 0x530
         bcd68:	e5c40538 	strb	r0, [r4, #1336]	; fField1336
         bcd6c:	e1a00003 	mov	r0, r3
         bcd70:	e5931000 	ldr	r1, [r3]
         bcd74:	e1a0e00f 	mov	lr, pc
         bcd78:	e281f028 	add	pc, r1, #40	; 0x28
         bcd7c:	e1a01005 	mov	r1, r5
         bcd80:	e1a00004 	mov	r0, r4
         bcd84:	e91b6830 	ldmdb	fp, {r4, r5, fp, sp, lr}
         bcd88:	ea656765 	b	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
    */
}

/**
 * Symbol: TFaxTool::PostTransPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char)
 * Address: 000bcd8c
 */
TFaxTool::PostTransPkt(unsigned long, unsigned long, CBufferList *, unsigned long, unsigned char) {
    /*
         bcd8c:	e92d4000 	stmdb	sp!, {lr}
         bcd90:	e59dc008 	ldr	ip, [sp, #8]
         bcd94:	e59de004 	ldr	lr, [sp, #4]	; fField4
         bcd98:	e2800f4b 	add	r0, r0, #300	; 0x12c
         bcd9c:	e2800b01 	add	r0, r0, #1024	; 0x400
         bcda0:	e880400c 	stmia	r0, {r2, r3, lr}
         bcda4:	e2800fb5 	add	r0, r0, #724	; 0x2d4
         bcda8:	e2400b02 	sub	r0, r0, #2048	; 0x800
         bcdac:	e5c0c538 	strb	ip, [r0, #1336]	; fField1336
         bcdb0:	e8bd4000 	ldmia	sp!, {lr}
         bcdb4:	ea65675a 	b	1a16b24 <TFaxTool::$PostModemCommand(unsigned long)>
    */
}

/**
 * Symbol: TFaxTool::PostModemCommand(unsigned long)
 * Address: 000bcdb8
 */
TFaxTool::PostModemCommand(unsigned long) {
    /*
         bcdb8:	e1a0c00d 	mov	ip, sp
         bcdbc:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         bcdc0:	e24cb004 	sub	fp, ip, #4	; 0x4
         bcdc4:	e1a04000 	mov	r4, r0
         bcdc8:	e5801520 	str	r1, [r0, #1312]	; fField1312
         bcdcc:	e280efb9 	add	lr, r0, #740	; 0x2e4
         bcdd0:	e280cf63 	add	ip, r0, #396	; 0x18c
         bcdd4:	e28ccb01 	add	ip, ip, #1024	; 0x400
         bcdd8:	e2805f46 	add	r5, r0, #280	; 0x118
         bcddc:	e2855b01 	add	r5, r5, #1024	; 0x400
         bcde0:	e2800f67 	add	r0, r0, #412	; 0x19c
         bcde4:	e2800b01 	add	r0, r0, #1024	; 0x400
         bcde8:	e3a0103c 	mov	r1, #60	; 0x3c
         bcdec:	e3a02000 	mov	r2, #0	; 0x0
         bcdf0:	e3a03000 	mov	r3, #0	; 0x0
         bcdf4:	e3a06004 	mov	r6, #4	; 0x4
         bcdf8:	e3a07000 	mov	r7, #0	; 0x0
         bcdfc:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bce00:	e1a03007 	mov	r3, r7
         bce04:	e3a02001 	mov	r2, #1	; 0x1
         bce08:	e1a01006 	mov	r1, r6
         bce0c:	e3a0002c 	mov	r0, #44	; 0x2c
         bce10:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bce14:	e1a03005 	mov	r3, r5
         bce18:	e92d0008 	stmdb	sp!, {r3}
         bce1c:	e1a0000e 	mov	r0, lr
         bce20:	e3a03000 	mov	r3, #0	; 0x0
         bce24:	e49c1008 	ldr	r1, [ip], #8
         bce28:	e59c2000 	ldr	r2, [ip]
         bce2c:	eb6c77c6 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bce30:	e28dd024 	add	sp, sp, #36	; 0x24
         bce34:	e3300000 	teq	r0, #0	; 0x0
         bce38:	05941018 	ldreq	r1, [r4, #24]	; fField24
         bce3c:	03811202 	orreq	r1, r1, #536870912	; 0x20000000
         bce40:	05a41018 	streq	r1, [r4, #24]!	; fField24
         bce44:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::ModemReqComplete(void)
 * Address: 000bce48
 */
TFaxTool::ModemReqComplete(void) {
    /*
         bce48:	e1a02000 	mov	r2, r0
         bce4c:	e5900018 	ldr	r0, [r0, #24]	; fField24
         bce50:	e3c00202 	bic	r0, r0, #536870912	; 0x20000000
         bce54:	e5820018 	str	r0, [r2, #24]	; fField24
         bce58:	e5920270 	ldr	r0, [r2, #624]	; fField624
         bce5c:	e2821f67 	add	r1, r2, #412	; 0x19c
         bce60:	e2811b01 	add	r1, r1, #1024	; 0x400
         bce64:	e3500008 	cmp	r0, #8	; 0x8
         bce68:	908ff100 	addls	pc, pc, r0, lsl #2
         bce6c:	e1a0f00e 	mov	pc, lr
         bce70:	ea000007 	b	bce94 <TFaxTool::ModemReqComplete(void)+0x4c>
         bce74:	ea000009 	b	bcea0 <TFaxTool::ModemReqComplete(void)+0x58>
         bce78:	ea00000b 	b	bceac <TFaxTool::ModemReqComplete(void)+0x64>
         bce7c:	ea000013 	b	bced0 <TFaxTool::ModemReqComplete(void)+0x88>
         bce80:	ea000015 	b	bcedc <TFaxTool::ModemReqComplete(void)+0x94>
         bce84:	ea000017 	b	bcee8 <TFaxTool::ModemReqComplete(void)+0xa0>
         bce88:	e1a0f00e 	mov	pc, lr
         bce8c:	ea000018 	b	bcef4 <TFaxTool::ModemReqComplete(void)+0xac>
         bce90:	ea00000c 	b	bcec8 <TFaxTool::ModemReqComplete(void)+0x80>
         bce94:	e59215a4 	ldr	r1, [r2, #1444]	; fField1444
         bce98:	e1a00002 	mov	r0, r2
         bce9c:	ea65630b 	b	1a15ad0 <TFaxTool::$PhaseAModemReqComplete(long)>
         bcea0:	e59215a4 	ldr	r1, [r2, #1444]	; fField1444
         bcea4:	e1a00002 	mov	r0, r2
         bcea8:	ea65630b 	b	1a15adc <TFaxTool::$PhaseBPktComplete(long)>
         bceac:	e5920818 	ldr	r0, [r2, #2072]	; fField2072
         bceb0:	e3300008 	teq	r0, #8	; 0x8
         bceb4:	05920828 	ldreq	r0, [r2, #2088]	; fField2088
         bceb8:	03300001 	teqeq	r0, #1	; 0x1
         bcebc:	159215a4 	ldrne	r1, [r2, #1444]	; fField1444
         bcec0:	11a00002 	movne	r0, r2
         bcec4:	1a65630a 	bne	1a15af4 <TFaxTool::$PhaseCPktComplete(long)>
         bcec8:	e1a00002 	mov	r0, r2
         bcecc:	ea6583f1 	b	1a1de98 <TFaxTool::$C2ModemReqComplete(TClassOneModemCmdReply *)>
         bced0:	e59215a4 	ldr	r1, [r2, #1444]	; fField1444
         bced4:	e1a00002 	mov	r0, r2
         bced8:	ea656307 	b	1a15afc <TFaxTool::$PhaseDPktComplete(long)>
         bcedc:	e59215a4 	ldr	r1, [r2, #1444]	; fField1444
         bcee0:	e1a00002 	mov	r0, r2
         bcee4:	ea656709 	b	1a16b10 <TFaxTool::$PhaseEPktComplete(long)>
         bcee8:	e59215a4 	ldr	r1, [r2, #1444]	; fField1444
         bceec:	e1a00002 	mov	r0, r2
         bcef0:	ea6598bd 	b	1a231ec <TFaxTool::$BindGetModemOptions(long)>
         bcef4:	e59215a4 	ldr	r1, [r2, #1444]	; fField1444
         bcef8:	e1a00002 	mov	r0, r2
         bcefc:	e5922000 	ldr	r2, [r2]
         bcf00:	e282f080 	add	pc, r2, #128	; 0x80
    */
}

/**
 * Symbol: TFaxTool::BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)
 * Address: 000bcf04
 */
TFaxTool::BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char) {
    /*
         bcf04:	e1a0c00d 	mov	ip, sp
         bcf08:	e92ddbf0 	stmdb	sp!, {r4, r5, r6, r7, r8, r9, fp, ip, lr, pc}
         bcf0c:	e24cb004 	sub	fp, ip, #4	; 0x4
         bcf10:	e1a04000 	mov	r4, r0
         bcf14:	e1a06002 	mov	r6, r2
         bcf18:	e1a05003 	mov	r5, r3
         bcf1c:	e20170ff 	and	r7, r1, #255	; 0xff
         bcf20:	e59b0004 	ldr	r0, [fp, #4]	; fField4
         bcf24:	e20090ff 	and	r9, r0, #255	; 0xff
         bcf28:	e2840fea 	add	r0, r4, #936	; 0x3a8
         bcf2c:	e2800b01 	add	r0, r0, #1024	; 0x400
         bcf30:	e1a08000 	mov	r8, r0
         bcf34:	eb6ca926 	bl	1be73d4 <CBufferList::$DeleteAll(void)>
         bcf38:	e3a000ff 	mov	r0, #255	; 0xff
         bcf3c:	e5c407c8 	strb	r0, [r4, #1992]	; fField1992
         bcf40:	e3390000 	teq	r9, #0	; 0x0
         bcf44:	03a00003 	moveq	r0, #3	; 0x3
         bcf48:	13a00013 	movne	r0, #19	; 0x13
         bcf4c:	e5c407c9 	strb	r0, [r4, #1993]	; fField1993
         bcf50:	e5c477ca 	strb	r7, [r4, #1994]	; fField1994
         bcf54:	e3a00000 	mov	r0, #0	; 0x0
         bcf58:	eb6c9ca9 	bl	1be4204 <CBufferSegment::$__ct(void)>
         bcf5c:	e1b07000 	movs	r7, r0
         bcf60:	e3a090e9 	mov	r9, #233	; 0xe9
         bcf64:	e2499b0a 	sub	r9, r9, #10240	; 0x2800
         bcf68:	0a000015 	beq	bcfc4 <TFaxTool::BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)+0xc0>
         bcf6c:	e3e03000 	mvn	r3, #0	; 0x0
         bcf70:	e3a02000 	mov	r2, #0	; 0x0
         bcf74:	e92d000c 	stmdb	sp!, {r2, r3}
         bcf78:	e2841ff2 	add	r1, r4, #968	; 0x3c8
         bcf7c:	e2811b01 	add	r1, r1, #1024	; 0x400
         bcf80:	e1a00007 	mov	r0, r7
         bcf84:	e3a03000 	mov	r3, #0	; 0x0
         bcf88:	e3a02003 	mov	r2, #3	; 0x3
         bcf8c:	eb6cb146 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         bcf90:	e28dd008 	add	sp, sp, #8	; 0x8
         bcf94:	e1b04000 	movs	r4, r0
         bcf98:	1a000018 	bne	bd000 <TFaxTool::BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)+0xfc>
         bcf9c:	e1a00008 	mov	r0, r8
         bcfa0:	e1a01007 	mov	r1, r7
         bcfa4:	eb6cb556 	bl	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         bcfa8:	e3360000 	teq	r6, #0	; 0x0
         bcfac:	13350000 	teqne	r5, #0	; 0x0
         bcfb0:	0a000012 	beq	bd000 <TFaxTool::BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)+0xfc>
         bcfb4:	e3a00000 	mov	r0, #0	; 0x0
         bcfb8:	eb6c9c91 	bl	1be4204 <CBufferSegment::$__ct(void)>
         bcfbc:	e1b07000 	movs	r7, r0
         bcfc0:	1a000001 	bne	bcfcc <TFaxTool::BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)+0xc8>
         bcfc4:	e1a04009 	mov	r4, r9
         bcfc8:	ea00000c 	b	bd000 <TFaxTool::BuildControlFrame(unsigned char, unsigned char *, unsigned long, unsigned char)+0xfc>
         bcfcc:	e3e03000 	mvn	r3, #0	; 0x0
         bcfd0:	e3a02000 	mov	r2, #0	; 0x0
         bcfd4:	e92d000c 	stmdb	sp!, {r2, r3}
         bcfd8:	e1a02005 	mov	r2, r5
         bcfdc:	e1a01006 	mov	r1, r6
         bcfe0:	e1a00007 	mov	r0, r7
         bcfe4:	e3a03000 	mov	r3, #0	; 0x0
         bcfe8:	eb6cb12f 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         bcfec:	e28dd008 	add	sp, sp, #8	; 0x8
         bcff0:	e1b04000 	movs	r4, r0
         bcff4:	01a00008 	moveq	r0, r8
         bcff8:	01a01007 	moveq	r1, r7
         bcffc:	0b6cb540 	bleq	1bea504 <CBufferList::$InsertLast(CBuffer *)>
         bd000:	e1a00004 	mov	r0, r4
         bd004:	e91babf0 	ldmdb	fp, {r4, r5, r6, r7, r8, r9, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::CancelTimer(void)
 * Address: 000bd008
 */
TFaxTool::CancelTimer(void) {
    /*
         bd008:	e1a0c00d 	mov	ip, sp
         bd00c:	e92dd800 	stmdb	sp!, {fp, ip, lr, pc}
         bd010:	e24cb004 	sub	fp, ip, #4	; 0x4
         bd014:	eb655e82 	bl	1a14a24 <TFaxTool::$KillTimer(void)>
         bd018:	e3a00001 	mov	r0, #1	; 0x1
         bd01c:	e91ba800 	ldmdb	fp, {fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::CancelModemCmd(void)
 * Address: 000bd020
 */
TFaxTool::CancelModemCmd(void) {
    /*
         bd020:	e3a03202 	mov	r3, #536870912	; 0x20000000
         bd024:	e3a02004 	mov	r2, #4	; 0x4
         bd028:	e3a01004 	mov	r1, #4	; 0x4
         bd02c:	ea655a72 	b	1a139fc <TFaxTool::$KillModemRequest(unsigned long, CommToolRequestType, unsigned long)>
    */
}

/**
 * Symbol: TFaxTool::FreeLineBuffers(void)
 * Address: 000bd030
 */
TFaxTool::FreeLineBuffers(void) {
    /*
         bd030:	e1a0c00d 	mov	ip, sp
         bd034:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         bd038:	e24cb004 	sub	fp, ip, #4	; 0x4
         bd03c:	e1a04000 	mov	r4, r0
         bd040:	e3a05000 	mov	r5, #0	; 0x0
         bd044:	e3a07000 	mov	r7, #0	; 0x0
         bd048:	e0850085 	add	r0, r5, r5, lsl #1
         bd04c:	e0800185 	add	r0, r0, r5, lsl #3
         bd050:	e0846180 	add	r6, r4, r0, lsl #3
         bd054:	e5960364 	ldr	r0, [r6, #868]
         bd058:	e3300000 	teq	r0, #0	; 0x0
         bd05c:	0a000001 	beq	bd068 <TFaxTool::FreeLineBuffers(void)+0x38>
         bd060:	eb6c563c 	bl	1bd2958 <$free>
         bd064:	e5a67364 	str	r7, [r6, #868]!
         bd068:	e2855001 	add	r5, r5, #1	; 0x1
         bd06c:	e3550002 	cmp	r5, #2	; 0x2
         bd070:	bafffff4 	blt	bd048 <TFaxTool::FreeLineBuffers(void)+0x18>
         bd074:	e5940410 	ldr	r0, [r4, #1040]	; fField1040
         bd078:	e3300000 	teq	r0, #0	; 0x0
         bd07c:	091ba8f0 	ldmeqdb	fp, {r4, r5, r6, r7, fp, sp, pc}
         bd080:	eb6c5634 	bl	1bd2958 <$free>
         bd084:	e5a47410 	str	r7, [r4, #1040]!	; fField1040
         bd088:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::KillModemRequest(unsigned long, CommToolRequestType, unsigned long)
 * Address: 000bd08c
 */
TFaxTool::KillModemRequest(unsigned long, CommToolRequestType, unsigned long) {
    /*
         bd08c:	e1a0c00d 	mov	ip, sp
         bd090:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         bd094:	e24cb004 	sub	fp, ip, #4	; 0x4
         bd098:	e1a04000 	mov	r4, r0
         bd09c:	e1a07002 	mov	r7, r2
         bd0a0:	e1a05003 	mov	r5, r3
         bd0a4:	e2800f79 	add	r0, r0, #484	; 0x1e4
         bd0a8:	e2800b01 	add	r0, r0, #1024	; 0x400
         bd0ac:	e1a06000 	mov	r6, r0
         bd0b0:	eb6c7f56 	bl	1bdce10 <TUSharedMemMsg::$SetUserRefCon(unsigned long)>
         bd0b4:	e3300000 	teq	r0, #0	; 0x0
         bd0b8:	1a00001c 	bne	bd130 <TFaxTool::KillModemRequest(unsigned long, CommToolRequestType, unsigned long)+0xa4>
         bd0bc:	e58475e0 	str	r7, [r4, #1504]	; fField1504
         bd0c0:	e284efb9 	add	lr, r4, #740	; 0x2e4
         bd0c4:	e1a0c006 	mov	ip, r6
         bd0c8:	e2848f76 	add	r8, r4, #472	; 0x1d8
         bd0cc:	e2888b01 	add	r8, r8, #1024	; 0x400
         bd0d0:	e2840f7d 	add	r0, r4, #500	; 0x1f4
         bd0d4:	e2800b01 	add	r0, r0, #1024	; 0x400
         bd0d8:	e3a01010 	mov	r1, #16	; 0x10
         bd0dc:	e3a02000 	mov	r2, #0	; 0x0
         bd0e0:	e3a03000 	mov	r3, #0	; 0x0
         bd0e4:	e3a07010 	mov	r7, #16	; 0x10
         bd0e8:	e3a06000 	mov	r6, #0	; 0x0
         bd0ec:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bd0f0:	e1a03006 	mov	r3, r6
         bd0f4:	e3a02001 	mov	r2, #1	; 0x1
         bd0f8:	e1a01007 	mov	r1, r7
         bd0fc:	e3a0000c 	mov	r0, #12	; 0xc
         bd100:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bd104:	e1a03008 	mov	r3, r8
         bd108:	e92d0008 	stmdb	sp!, {r3}
         bd10c:	e1a0000e 	mov	r0, lr
         bd110:	e3a03000 	mov	r3, #0	; 0x0
         bd114:	e49c1008 	ldr	r1, [ip], #8
         bd118:	e59c2000 	ldr	r2, [ip]
         bd11c:	eb6c770a 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bd120:	e28dd024 	add	sp, sp, #36	; 0x24
         bd124:	e3300000 	teq	r0, #0	; 0x0
         bd128:	01a00006 	moveq	r0, r6
         bd12c:	091ba9f0 	ldmeqdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         bd130:	e5940018 	ldr	r0, [r4, #24]	; fField24
         bd134:	e1c00005 	bic	r0, r0, r5
         bd138:	e5a40018 	str	r0, [r4, #24]!	; fField24
         bd13c:	e3a00001 	mov	r0, #1	; 0x1
         bd140:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::HangUp(void)
 * Address: 000bd144
 */
TFaxTool::HangUp(void) {
    /*
         bd144:	e1a0c00d 	mov	ip, sp
         bd148:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         bd14c:	e24cb004 	sub	fp, ip, #4	; 0x4
         bd150:	e3a01004 	mov	r1, #4	; 0x4
         bd154:	e5801270 	str	r1, [r0, #624]	; fField624
         bd158:	e5901018 	ldr	r1, [r0, #24]	; fField24
         bd15c:	e3c11401 	bic	r1, r1, #16777216	; 0x1000000
         bd160:	e5801018 	str	r1, [r0, #24]	; fField24
         bd164:	e3a01006 	mov	r1, #6	; 0x6
         bd168:	e5801520 	str	r1, [r0, #1312]	; fField1312
         bd16c:	e280efb9 	add	lr, r0, #740	; 0x2e4
         bd170:	e280cf63 	add	ip, r0, #396	; 0x18c
         bd174:	e28ccb01 	add	ip, ip, #1024	; 0x400
         bd178:	e2805f46 	add	r5, r0, #280	; 0x118
         bd17c:	e2855b01 	add	r5, r5, #1024	; 0x400
         bd180:	e2800f67 	add	r0, r0, #412	; 0x19c
         bd184:	e2800b01 	add	r0, r0, #1024	; 0x400
         bd188:	e3a0103c 	mov	r1, #60	; 0x3c
         bd18c:	e3a02000 	mov	r2, #0	; 0x0
         bd190:	e3a03000 	mov	r3, #0	; 0x0
         bd194:	e3a06004 	mov	r6, #4	; 0x4
         bd198:	e3a04000 	mov	r4, #0	; 0x0
         bd19c:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bd1a0:	e1a03004 	mov	r3, r4
         bd1a4:	e3a02001 	mov	r2, #1	; 0x1
         bd1a8:	e1a01006 	mov	r1, r6
         bd1ac:	e3a0002c 	mov	r0, #44	; 0x2c
         bd1b0:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bd1b4:	e1a03005 	mov	r3, r5
         bd1b8:	e92d0008 	stmdb	sp!, {r3}
         bd1bc:	e1a0000e 	mov	r0, lr
         bd1c0:	e3a03000 	mov	r3, #0	; 0x0
         bd1c4:	e49c1008 	ldr	r1, [ip], #8
         bd1c8:	e59c2000 	ldr	r2, [ip]
         bd1cc:	eb6c76de 	bl	1bdad4c <TUPort::$SendRPCGoo(unsigned long, unsigned long, unsigned long *, void *, unsigned long, unsigned long, unsigned long, unsigned char, void *, unsigned long, unsigned long, TTime *)>
         bd1d0:	e28dd024 	add	sp, sp, #36	; 0x24
         bd1d4:	e3300000 	teq	r0, #0	; 0x0
         bd1d8:	01a00004 	moveq	r0, r4
         bd1dc:	13a00001 	movne	r0, #1	; 0x1
         bd1e0:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))
 * Address: 000bd1e4
 */
TFaxTool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *)) {
    /*
         bd1e4:	e3310000 	teq	r1, #0	; 0x0
         bd1e8:	03a00101 	moveq	r0, #1073741824	; 0x40000000
         bd1ec:	05820000 	streq	r0, [r2]
         bd1f0:	059f0048 	ldreq	r0, [pc, #48]	; bd240 <TFaxTool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x5c>
         bd1f4:	0a00000f 	beq	bd238 <TFaxTool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x54>
         bd1f8:	e3310001 	teq	r1, #1	; 0x1
         bd1fc:	03a00202 	moveq	r0, #536870912	; 0x20000000
         bd200:	05820000 	streq	r0, [r2]
         bd204:	059f0038 	ldreq	r0, [pc, #38]	; bd244 <TFaxTool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x60>
         bd208:	0a00000a 	beq	bd238 <TFaxTool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x54>
         bd20c:	e3310002 	teq	r1, #2	; 0x2
         bd210:	03a00201 	moveq	r0, #268435456	; 0x10000000
         bd214:	05820000 	streq	r0, [r2]
         bd218:	059f0028 	ldreq	r0, [pc, #28]	; bd248 <TFaxTool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x64>
         bd21c:	0a000005 	beq	bd238 <TFaxTool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x54>
         bd220:	e3310003 	teq	r1, #3	; 0x3
         bd224:	03a00401 	moveq	r0, #16777216	; 0x1000000
         bd228:	05820000 	streq	r0, [r2]
         bd22c:	059f0018 	ldreq	r0, [pc, #18]	; bd24c <TFaxTool::GetNextTermProc(unsigned long, unsigned long &, unsigned char (*&)(void *))+0x68>
         bd230:	13a00000 	movne	r0, #0	; 0x0
         bd234:	15820000 	strne	r0, [r2]
         bd238:	e5830000 	str	r0, [r3]
         bd23c:	e1a0f00e 	mov	pc, lr
         bd240:	01a0d6bc 	streqh	sp, [r0, ip]!
         bd244:	01a0d6a8 	moveq	sp, r8, lsr #13
         bd248:	01a1ad40 	moveq	sl, r0, asr #26
         bd24c:	01a12964 	moveq	r2, r4, ror #18
    */
}

/**
 * Symbol: TFaxTool::TerminateComplete(void)
 * Address: 000bd250
 */
TFaxTool::TerminateComplete(void) {
    /*
         bd250:	e1a0c00d 	mov	ip, sp
         bd254:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         bd258:	e24cb004 	sub	fp, ip, #4	; 0x4
         bd25c:	e1a04000 	mov	r4, r0
         bd260:	e2800fea 	add	r0, r0, #936	; 0x3a8
         bd264:	e2800b01 	add	r0, r0, #1024	; 0x400
         bd268:	eb6ca859 	bl	1be73d4 <CBufferList::$DeleteAll(void)>
         bd26c:	e1a00004 	mov	r0, r4
         bd270:	eb654d74 	bl	1a10848 <TFaxTool::$FreeLineBuffers(void)>
         bd274:	e1a00004 	mov	r0, r4
         bd278:	eb65a42b 	bl	1a2632c <TFaxTool::$FreeReceiveBuffers(void)>
         bd27c:	e1a00004 	mov	r0, r4
         bd280:	eb654d71 	bl	1a1084c <TFaxTool::$FreeTCBuffer(void)>
         bd284:	e1a00004 	mov	r0, r4
         bd288:	eb658300 	bl	1a1de90 <TFaxTool::$C2InitSubSystem(void)>
         bd28c:	e1a00004 	mov	r0, r4
         bd290:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         bd294:	ea6c0f83 	b	1bc10a8 <TCommTool::$TerminateComplete(void)>
    */
}

/**
 * Symbol: TFaxTool::PostTimer(unsigned long, unsigned long, TimeUnits)
 * Address: 000bd298
 */
TFaxTool::PostTimer(unsigned long, unsigned long, TimeUnits) {
    /*
         bd298:	e1a0c00d 	mov	ip, sp
         bd29c:	e92dd870 	stmdb	sp!, {r4, r5, r6, fp, ip, lr, pc}
         bd2a0:	e24cb004 	sub	fp, ip, #4	; 0x4
         bd2a4:	e1a04000 	mov	r4, r0
         bd2a8:	e1a00002 	mov	r0, r2
         bd2ac:	e1a02003 	mov	r2, r3
         bd2b0:	e24dd010 	sub	sp, sp, #16	; 0x10
         bd2b4:	e584163c 	str	r1, [r4, #1596]	; fField1596
         bd2b8:	e3a0100d 	mov	r1, #13	; 0xd
         bd2bc:	e5841638 	str	r1, [r4, #1592]	; fField1592
         bd2c0:	e2845e65 	add	r5, r4, #1616	; 0x650
         bd2c4:	e1a06005 	mov	r6, r5
         bd2c8:	e1a01000 	mov	r1, r0
         bd2cc:	e28d0008 	add	r0, sp, #8	; 0x8
         bd2d0:	eb6c40fc 	bl	1bcd6c8 <TTime::$__ct(unsigned long, TimeUnits)>
         bd2d4:	e1a0000d 	mov	r0, sp
         bd2d8:	eb6c59be 	bl	1bd39d8 <$GetGlobalTime>
         bd2dc:	e24dd008 	sub	sp, sp, #8	; 0x8
         bd2e0:	e28d0008 	add	r0, sp, #8	; 0x8
         bd2e4:	e8905000 	ldmia	r0, {ip, lr}
         bd2e8:	e88d5000 	stmia	sp, {ip, lr}
         bd2ec:	e1a0100d 	mov	r1, sp
         bd2f0:	e28d0010 	add	r0, sp, #16	; 0x10
         bd2f4:	eb6c8f62 	bl	1be1084 <$CompAdd>
         bd2f8:	e1b00006 	movs	r0, r6
         bd2fc:	1a000003 	bne	bd310 <TFaxTool::PostTimer(unsigned long, unsigned long, TimeUnits)+0x78>
         bd300:	e3a00008 	mov	r0, #8	; 0x8
         bd304:	eb6c450b 	bl	1bce738 <$__nw(unsigned int)>
         bd308:	e3300000 	teq	r0, #0	; 0x0
         bd30c:	0a000001 	beq	bd318 <TFaxTool::PostTimer(unsigned long, unsigned long, TimeUnits)+0x80>
         bd310:	e89d1008 	ldmia	sp, {r3, ip}
         bd314:	e8801008 	stmia	r0, {r3, ip}
         bd318:	e28dd008 	add	sp, sp, #8	; 0x8
         bd31c:	e284c08c 	add	ip, r4, #140	; 0x8c
         bd320:	e284ed19 	add	lr, r4, #1600	; 0x640
         bd324:	e2846f8e 	add	r6, r4, #568	; 0x238
         bd328:	e2866b01 	add	r6, r6, #1024	; 0x400
         bd32c:	e3a02000 	mov	r2, #0	; 0x0
         bd330:	e1a03005 	mov	r3, r5
         bd334:	e3a05000 	mov	r5, #0	; 0x0
         bd338:	e3a01000 	mov	r1, #0	; 0x0
         bd33c:	e3a00001 	mov	r0, #1	; 0x1
         bd340:	e92d000f 	stmdb	sp!, {r0, r1, r2, r3}
         bd344:	e1a03005 	mov	r3, r5
         bd348:	e3a02004 	mov	r2, #4	; 0x4
         bd34c:	e92d000c 	stmdb	sp!, {r2, r3}
         bd350:	e1a03006 	mov	r3, r6
         bd354:	e1a0000c 	mov	r0, ip
         bd358:	e3a02000 	mov	r2, #0	; 0x0
         bd35c:	e59e1000 	ldr	r1, [lr]
         bd360:	eb6c7678 	bl	1bdad48 <TUPort::$SendGoo(unsigned long, unsigned long, void *, unsigned long, unsigned long, unsigned long, unsigned char, unsigned long, TTime *)>
         bd364:	e28dd018 	add	sp, sp, #24	; 0x18
         bd368:	e3300000 	teq	r0, #0	; 0x0
         bd36c:	05941018 	ldreq	r1, [r4, #24]	; fField24
         bd370:	03811101 	orreq	r1, r1, #1073741824	; 0x40000000
         bd374:	05a41018 	streq	r1, [r4, #24]!	; fField24
         bd378:	e91ba870 	ldmdb	fp, {r4, r5, r6, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::TimerComplete(void)
 * Address: 000bd37c
 */
TFaxTool::TimerComplete(void) {
    /*
         bd37c:	e1a0c00d 	mov	ip, sp
         bd380:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         bd384:	e24cb004 	sub	fp, ip, #4	; 0x4
         bd388:	e1a04000 	mov	r4, r0
         bd38c:	e5900018 	ldr	r0, [r0, #24]	; fField24
         bd390:	e3c00101 	bic	r0, r0, #1073741824	; 0x40000000
         bd394:	e5840018 	str	r0, [r4, #24]	; fField24
         bd398:	e594063c 	ldr	r0, [r4, #1596]	; fField1596
         bd39c:	e350000f 	cmp	r0, #15	; 0xf
         bd3a0:	01a00004 	moveq	r0, r4
         bd3a4:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         bd3a8:	0a659ba4 	beq	1a24240 <TFaxTool::$CRPRetransmitTimeOut(void)>
         bd3ac:	ca00000f 	bgt	bd3f0 <TFaxTool::TimerComplete(void)+0x74>
         bd3b0:	e3300003 	teq	r0, #3	; 0x3
         bd3b4:	01a00004 	moveq	r0, r4
         bd3b8:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         bd3bc:	0a6548f7 	beq	1a0f7a0 <TFaxTool::$DISTimeOut(void)>
         bd3c0:	e3300007 	teq	r0, #7	; 0x7
         bd3c4:	01a00004 	moveq	r0, r4
         bd3c8:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         bd3cc:	0a656e19 	beq	1a18c38 <TFaxTool::$ResponseTimeOut(void)>
         bd3d0:	e330000b 	teq	r0, #11	; 0xb
         bd3d4:	0a000015 	beq	bd430 <TFaxTool::TimerComplete(void)+0xb4>
         bd3d8:	e330000c 	teq	r0, #12	; 0xc
         bd3dc:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         bd3e0:	e59f1004 	ldr	r1, [pc, #4]	; bd3ec <TFaxTool::TimerComplete(void)+0x70>	; fField4
         bd3e4:	e1a00004 	mov	r0, r4
         bd3e8:	ea000024 	b	bd480 <TFaxTool::TimerComplete(void)+0x104>
         bd3ec:	ffffaa0f 	swinv	0x00ffaa0f
         bd3f0:	e3300010 	teq	r0, #16	; 0x10
         bd3f4:	01a00004 	moveq	r0, r4
         bd3f8:	091b6810 	ldmeqdb	fp, {r4, fp, sp, lr}
         bd3fc:	0a65ac1c 	beq	1a28474 <TFaxTool::$PhaseDBlackoutTimeout(void)>
         bd400:	e3300011 	teq	r0, #17	; 0x11
         bd404:	0a00001b 	beq	bd478 <TFaxTool::TimerComplete(void)+0xfc>
         bd408:	e3300012 	teq	r0, #18	; 0x12
         bd40c:	191ba810 	ldmnedb	fp, {r4, fp, sp, pc}
         bd410:	e1a00004 	mov	r0, r4
         bd414:	eb6540a3 	bl	1a0d6a8 <TFaxTool::$CancelModemCmd(void)>
         bd418:	e3300000 	teq	r0, #0	; 0x0
         bd41c:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         bd420:	e1a00004 	mov	r0, r4
         bd424:	e5941000 	ldr	r1, [r4]
         bd428:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         bd42c:	e281ff46 	add	pc, r1, #280	; 0x118
         bd430:	e594026c 	ldr	r0, [r4, #620]	; fField620
         bd434:	e3100a01 	tst	r0, #4096	; 0x1000
         bd438:	0a000004 	beq	bd450 <TFaxTool::TimerComplete(void)+0xd4>
         bd43c:	e3c00a01 	bic	r0, r0, #4096	; 0x1000
         bd440:	e584026c 	str	r0, [r4, #620]	; fField620
         bd444:	e1a00004 	mov	r0, r4
         bd448:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         bd44c:	ea656e05 	b	1a18c68 <TFaxTool::$SendNextLine(void)>
         bd450:	e1a00004 	mov	r0, r4
         bd454:	e3a039e1 	mov	r3, #3686400	; 0x384000
         bd458:	e3a0200f 	mov	r2, #15	; 0xf
         bd45c:	e3a01011 	mov	r1, #17	; 0x11
         bd460:	eb6565b3 	bl	1a16b34 <TFaxTool::$PostTimer(unsigned long, unsigned long, TimeUnits)>
         bd464:	e3300000 	teq	r0, #0	; 0x0
         bd468:	0594026c 	ldreq	r0, [r4, #620]	; fField620
         bd46c:	03800102 	orreq	r0, r0, #-2147483648	; 0x80000000
         bd470:	05a4026c 	streq	r0, [r4, #620]!	; fField620
         bd474:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
         bd478:	e1a00004 	mov	r0, r4
         bd47c:	e59f1004 	ldr	r1, [pc, #4]	; bd488 <TFaxTool::TimerComplete(void)+0x10c>	; fField4
         bd480:	e91b6810 	ldmdb	fp, {r4, fp, sp, lr}
         bd484:	ea6c0f01 	b	1bc1090 <TCommTool::$StartAbort(long)>
         bd488:	ffffaa0b 	swinv	0x00ffaa0b
    */
}

/**
 * Symbol: TFaxTool::KillTimer(void)
 * Address: 000bd48c
 */
TFaxTool::KillTimer(void) {
    /*
         bd48c:	e5901018 	ldr	r1, [r0, #24]	; fField24
         bd490:	e3c11101 	bic	r1, r1, #1073741824	; 0x40000000
         bd494:	e5a01018 	str	r1, [r0, #24]!	; fField24
         bd498:	e2800f8a 	add	r0, r0, #552	; 0x228
         bd49c:	e2800b01 	add	r0, r0, #1024	; 0x400
         bd4a0:	ea6c44a9 	b	1bce74c <TUAsyncMessage::$Abort(void)>
    */
}

/**
 * Symbol: TFaxTool::FigureTCSize(unsigned long)
 * Address: 000bd4a4
 */
TFaxTool::FigureTCSize(unsigned long) {
    /*
         bd4a4:	e3510d96 	cmp	r1, #9600	; 0x2580
         bd4a8:	03a00fc2 	moveq	r0, #776	; 0x308
         bd4ac:	02800b01 	addeq	r0, r0, #1024	; 0x400
         bd4b0:	01a0f00e 	moveq	pc, lr
         bd4b4:	ca00000c 	bgt	bd4ec <TFaxTool::FigureTCSize(unsigned long)+0x48>
         bd4b8:	e3310e96 	teq	r1, #2400	; 0x960
         bd4bc:	03a000c2 	moveq	r0, #194	; 0xc2
         bd4c0:	02800c01 	addeq	r0, r0, #256	; 0x100
         bd4c4:	01a0f00e 	moveq	pc, lr
         bd4c8:	e3310d4b 	teq	r1, #4800	; 0x12c0
         bd4cc:	03a00fe1 	moveq	r0, #900	; 0x384
         bd4d0:	01a0f00e 	moveq	pc, lr
         bd4d4:	e241cb07 	sub	ip, r1, #7168	; 0x1c00
         bd4d8:	e33c0020 	teq	ip, #32	; 0x20
         bd4dc:	03a00046 	moveq	r0, #70	; 0x46
         bd4e0:	02800c05 	addeq	r0, r0, #1280	; 0x500
         bd4e4:	01a0f00e 	moveq	pc, lr
         bd4e8:	ea000008 	b	bd510 <TFaxTool::FigureTCSize(unsigned long)+0x6c>
         bd4ec:	e241cdbb 	sub	ip, r1, #11968	; 0x2ec0
         bd4f0:	e33c0020 	teq	ip, #32	; 0x20
         bd4f4:	03a000ca 	moveq	r0, #202	; 0xca
         bd4f8:	02800b02 	addeq	r0, r0, #2048	; 0x800
         bd4fc:	01a0f00e 	moveq	pc, lr
         bd500:	e3310de1 	teq	r1, #14400	; 0x3840
         bd504:	03a00fa3 	moveq	r0, #652	; 0x28c
         bd508:	02800b02 	addeq	r0, r0, #2048	; 0x800
         bd50c:	01a0f00e 	moveq	pc, lr
         bd510:	e3a00000 	mov	r0, #0	; 0x0
         bd514:	e1a0f00e 	mov	pc, lr
    */
}

/**
 * Symbol: TFaxTool::AllocateTCBuffer(unsigned char)
 * Address: 000bd518
 */
TFaxTool::AllocateTCBuffer(unsigned char) {
    /*
         bd518:	e1a0c00d 	mov	ip, sp
         bd51c:	e92dd8f0 	stmdb	sp!, {r4, r5, r6, r7, fp, ip, lr, pc}
         bd520:	e24cb004 	sub	fp, ip, #4	; 0x4
         bd524:	e1a04000 	mov	r4, r0
         bd528:	e20170ff 	and	r7, r1, #255	; 0xff
         bd52c:	e3a06000 	mov	r6, #0	; 0x0
         bd530:	e59012b0 	ldr	r1, [r0, #688]	; fField688
         bd534:	eb65a374 	bl	1a2630c <TFaxTool::$FigureTCSize(unsigned long)>
         bd538:	e1b05000 	movs	r5, r0
         bd53c:	03a0600d 	moveq	r6, #13	; 0xd
         bd540:	02466c56 	subeq	r6, r6, #22016	; 0x5600
         bd544:	0a000013 	beq	bd598 <TFaxTool::AllocateTCBuffer(unsigned char)+0x80>
         bd548:	e3370000 	teq	r7, #0	; 0x0
         bd54c:	10855125 	addne	r5, r5, r5, lsr #2
         bd550:	e5940334 	ldr	r0, [r4, #820]	; fField820
         bd554:	e3300000 	teq	r0, #0	; 0x0
         bd558:	0a000003 	beq	bd56c <TFaxTool::AllocateTCBuffer(unsigned char)+0x54>
         bd55c:	e5940338 	ldr	r0, [r4, #824]	; fField824
         bd560:	e1500005 	cmp	r0, r5
         bd564:	31a00004 	movcc	r0, r4
         bd568:	3b654cb7 	blcc	1a1084c <TFaxTool::$FreeTCBuffer(void)>
         bd56c:	e1a00005 	mov	r0, r5
         bd570:	e5845338 	str	r5, [r4, #824]	; fField824
         bd574:	e5941334 	ldr	r1, [r4, #820]	; fField820
         bd578:	e3310000 	teq	r1, #0	; 0x0
         bd57c:	1a000005 	bne	bd598 <TFaxTool::AllocateTCBuffer(unsigned char)+0x80>
         bd580:	eb6c92ef 	bl	1be2144 <$NewPtrClear>
         bd584:	e5a40334 	str	r0, [r4, #820]!	; fField820
         bd588:	e3300000 	teq	r0, #0	; 0x0
         bd58c:	1a000001 	bne	bd598 <TFaxTool::AllocateTCBuffer(unsigned char)+0x80>
         bd590:	eb6c92e2 	bl	1be2120 <$MemError>
         bd594:	e1a06000 	mov	r6, r0
         bd598:	e1a00006 	mov	r0, r6
         bd59c:	e91ba8f0 	ldmdb	fp, {r4, r5, r6, r7, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::FreeTCBuffer(void)
 * Address: 000bd5a0
 */
TFaxTool::FreeTCBuffer(void) {
    /*
         bd5a0:	e1a0c00d 	mov	ip, sp
         bd5a4:	e92dd810 	stmdb	sp!, {r4, fp, ip, lr, pc}
         bd5a8:	e24cb004 	sub	fp, ip, #4	; 0x4
         bd5ac:	e1a04000 	mov	r4, r0
         bd5b0:	e5900334 	ldr	r0, [r0, #820]	; fField820
         bd5b4:	e3300000 	teq	r0, #0	; 0x0
         bd5b8:	091ba810 	ldmeqdb	fp, {r4, fp, sp, pc}
         bd5bc:	eb6c54e5 	bl	1bd2958 <$free>
         bd5c0:	e3a00000 	mov	r0, #0	; 0x0
         bd5c4:	e5a40334 	str	r0, [r4, #820]!	; fField820
         bd5c8:	e91ba810 	ldmdb	fp, {r4, fp, sp, pc}
    */
}

/**
 * Symbol: TFaxTool::AllocateReceiveBuffers(void)
 * Address: 000bd5cc
 */
TFaxTool::AllocateReceiveBuffers(void) {
    /*
         bd5cc:	e1a0c00d 	mov	ip, sp
         bd5d0:	e92dd9f0 	stmdb	sp!, {r4, r5, r6, r7, r8, fp, ip, lr, pc}
         bd5d4:	e24cb004 	sub	fp, ip, #4	; 0x4
         bd5d8:	e1a04000 	mov	r4, r0
         bd5dc:	e3a05000 	mov	r5, #0	; 0x0
         bd5e0:	e3a080e9 	mov	r8, #233	; 0xe9
         bd5e4:	e2488b0a 	sub	r8, r8, #10240	; 0x2800
         bd5e8:	e59403ec 	ldr	r0, [r4, #1004]	; fField1004
         bd5ec:	eb6c655d 	bl	1bd6b68 <$malloc>
         bd5f0:	e0851085 	add	r1, r5, r5, lsl #1
         bd5f4:	e0811185 	add	r1, r1, r5, lsl #3
         bd5f8:	e0847181 	add	r7, r4, r1, lsl #3
         bd5fc:	e587043c 	str	r0, [r7, #1084]	; fField1084
         bd600:	e1b01000 	movs	r1, r0
         bd604:	0a00001d 	beq	bd680 <TFaxTool::AllocateReceiveBuffers(void)+0xb4>
         bd608:	e3e03000 	mvn	r3, #0	; 0x0
         bd60c:	e3a02000 	mov	r2, #0	; 0x0
         bd610:	e92d000c 	stmdb	sp!, {r2, r3}
         bd614:	e2870014 	add	r0, r7, #20	; 0x14
         bd618:	e2800b01 	add	r0, r0, #1024	; 0x400
         bd61c:	e3a03000 	mov	r3, #0	; 0x0
         bd620:	e59423ec 	ldr	r2, [r4, #1004]	; fField1004
         bd624:	eb6cafa0 	bl	1be94ac <CBufferSegment::$Init(void *, long, unsigned char, long, long)>
         bd628:	e28dd008 	add	sp, sp, #8	; 0x8
         bd62c:	e1b06000 	movs	r6, r0
         bd630:	1a000018 	bne	bd698 <TFaxTool::AllocateReceiveBuffers(void)+0xcc>
         bd634:	e287004c 	add	r0, r7, #76	; 0x4c
         bd638:	e2800b01 	add	r0, r0, #1024	; 0x400
         bd63c:	e5901000 	ldr	r1, [r0]
         bd640:	e1a0e00f 	mov	lr, pc
         bd644:	e281f028 	add	pc, r1, #40	; 0x28
         bd648:	e59402dc 	ldr	r0, [r4, #732]	; fField732
         bd64c:	eb6c6545 	bl	1bd6b68 <$malloc>
         bd650:	e0841105 	add	r1, r4, r5, lsl #2
         bd654:	e5a104c8 	str	r0, [r1, #1224]!
         bd658:	e3300000 	teq	r0, #0	; 0x0
         bd65c:	0a000007 	beq	bd680 <TFaxTool::AllocateReceiveBuffers(void)+0xb4>
         bd660:	e2855001 	add	r5, r5, #1	; 0x1
         bd664:	e3550002 	cmp	r5, #2	; 0x2
         bd668:	baffffde 	blt	bd5e8 <TFaxTool::AllocateReceiveBuffers(void)+0x1c>
         bd66c:	e59402e0 	ldr	r0, [r4, #736]	; fField736
         bd670:	eb6c653c 	bl	1bd6b68 <$malloc>
         bd674:	e5840508 	str	r0, [r4, #1288]	; fField1288
         bd678:	e1b01000 	movs	r1, r0
         bd67c:	1a000001 	bne	bd688 <TFaxTool::AllocateReceiveBuffers(void)+0xbc>
         bd680:	e1a06008 	mov	r6, r8
         bd684:	ea000003 	b	bd698 <TFaxTool::AllocateReceiveBuffers(void)+0xcc>
         bd688:	e59422e0 	ldr	r2, [r4, #736]	; fField736
         bd68c:	e28400d4 	add	r0, r4, #212	; 0xd4
         bd690:	e2800b01 	add	r0, r0, #1024	; 0x400
         bd694:	eb65a74c 	bl	1a273cc <TT4FaxLine::$Init(unsigned char *, int)>
         bd698:	e1a00006 	mov	r0, r6
         bd69c:	e91ba9f0 	ldmdb	fp, {r4, r5, r6, r7, r8, fp, sp, pc}
         bd6a0:	e4d02001 	ldrb	r2, [r0], #1	; fField1
         bd6a4:	e4d13001 	ldrb	r3, [r1], #1	; fField1
         bd6a8:	e0523003 	subs	r3, r2, r3
         bd6ac:	11a00003 	movne	r0, r3
         bd6b0:	11a0f00e 	movne	pc, lr
         bd6b4:	e3320000 	teq	r2, #0	; 0x0
         bd6b8:	1afffff8 	bne	bd6a0 <TFaxTool::AllocateReceiveBuffers(void)+0xd4>
         bd6bc:	e3a00000 	mov	r0, #0	; 0x0
         bd6c0:	e1a0f00e 	mov	pc, lr
    */
}

