#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826CCF3C"))) PPC_WEAK_FUNC(sub_826CCF3C);
PPC_FUNC_IMPL(__imp__sub_826CCF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCF40"))) PPC_WEAK_FUNC(sub_826CCF40);
PPC_FUNC_IMPL(__imp__sub_826CCF40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,23076
	ctx.r3.s64 = ctx.r11.s64 + 23076;
	// b 0x822afa18
	sub_822AFA18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCF4C"))) PPC_WEAK_FUNC(sub_826CCF4C);
PPC_FUNC_IMPL(__imp__sub_826CCF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCF50"))) PPC_WEAK_FUNC(sub_826CCF50);
PPC_FUNC_IMPL(__imp__sub_826CCF50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,22736(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22736, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CCF64"))) PPC_WEAK_FUNC(sub_826CCF64);
PPC_FUNC_IMPL(__imp__sub_826CCF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCF68"))) PPC_WEAK_FUNC(sub_826CCF68);
PPC_FUNC_IMPL(__imp__sub_826CCF68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,22740(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22740, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CCF7C"))) PPC_WEAK_FUNC(sub_826CCF7C);
PPC_FUNC_IMPL(__imp__sub_826CCF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCF80"))) PPC_WEAK_FUNC(sub_826CCF80);
PPC_FUNC_IMPL(__imp__sub_826CCF80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10528
	ctx.r11.s64 = ctx.r11.s64 + -10528;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCF9C"))) PPC_WEAK_FUNC(sub_826CCF9C);
PPC_FUNC_IMPL(__imp__sub_826CCF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCFA0"))) PPC_WEAK_FUNC(sub_826CCFA0);
PPC_FUNC_IMPL(__imp__sub_826CCFA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10436
	ctx.r11.s64 = ctx.r11.s64 + -10436;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCFBC"))) PPC_WEAK_FUNC(sub_826CCFBC);
PPC_FUNC_IMPL(__imp__sub_826CCFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCFC0"))) PPC_WEAK_FUNC(sub_826CCFC0);
PPC_FUNC_IMPL(__imp__sub_826CCFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10516
	ctx.r11.s64 = ctx.r11.s64 + -10516;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCFDC"))) PPC_WEAK_FUNC(sub_826CCFDC);
PPC_FUNC_IMPL(__imp__sub_826CCFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCFE0"))) PPC_WEAK_FUNC(sub_826CCFE0);
PPC_FUNC_IMPL(__imp__sub_826CCFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10504
	ctx.r11.s64 = ctx.r11.s64 + -10504;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCFFC"))) PPC_WEAK_FUNC(sub_826CCFFC);
PPC_FUNC_IMPL(__imp__sub_826CCFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD000"))) PPC_WEAK_FUNC(sub_826CD000);
PPC_FUNC_IMPL(__imp__sub_826CD000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10496
	ctx.r11.s64 = ctx.r11.s64 + -10496;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD01C"))) PPC_WEAK_FUNC(sub_826CD01C);
PPC_FUNC_IMPL(__imp__sub_826CD01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD020"))) PPC_WEAK_FUNC(sub_826CD020);
PPC_FUNC_IMPL(__imp__sub_826CD020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10484
	ctx.r11.s64 = ctx.r11.s64 + -10484;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD03C"))) PPC_WEAK_FUNC(sub_826CD03C);
PPC_FUNC_IMPL(__imp__sub_826CD03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD040"))) PPC_WEAK_FUNC(sub_826CD040);
PPC_FUNC_IMPL(__imp__sub_826CD040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10472
	ctx.r11.s64 = ctx.r11.s64 + -10472;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD05C"))) PPC_WEAK_FUNC(sub_826CD05C);
PPC_FUNC_IMPL(__imp__sub_826CD05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD060"))) PPC_WEAK_FUNC(sub_826CD060);
PPC_FUNC_IMPL(__imp__sub_826CD060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10464
	ctx.r11.s64 = ctx.r11.s64 + -10464;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD07C"))) PPC_WEAK_FUNC(sub_826CD07C);
PPC_FUNC_IMPL(__imp__sub_826CD07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD080"))) PPC_WEAK_FUNC(sub_826CD080);
PPC_FUNC_IMPL(__imp__sub_826CD080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10456
	ctx.r11.s64 = ctx.r11.s64 + -10456;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD09C"))) PPC_WEAK_FUNC(sub_826CD09C);
PPC_FUNC_IMPL(__imp__sub_826CD09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD0A0"))) PPC_WEAK_FUNC(sub_826CD0A0);
PPC_FUNC_IMPL(__imp__sub_826CD0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10448
	ctx.r11.s64 = ctx.r11.s64 + -10448;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD0BC"))) PPC_WEAK_FUNC(sub_826CD0BC);
PPC_FUNC_IMPL(__imp__sub_826CD0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD0C0"))) PPC_WEAK_FUNC(sub_826CD0C0);
PPC_FUNC_IMPL(__imp__sub_826CD0C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10320
	ctx.r11.s64 = ctx.r11.s64 + -10320;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD0DC"))) PPC_WEAK_FUNC(sub_826CD0DC);
PPC_FUNC_IMPL(__imp__sub_826CD0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD0E0"))) PPC_WEAK_FUNC(sub_826CD0E0);
PPC_FUNC_IMPL(__imp__sub_826CD0E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10284
	ctx.r11.s64 = ctx.r11.s64 + -10284;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD0FC"))) PPC_WEAK_FUNC(sub_826CD0FC);
PPC_FUNC_IMPL(__imp__sub_826CD0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD100"))) PPC_WEAK_FUNC(sub_826CD100);
PPC_FUNC_IMPL(__imp__sub_826CD100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10276
	ctx.r11.s64 = ctx.r11.s64 + -10276;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD11C"))) PPC_WEAK_FUNC(sub_826CD11C);
PPC_FUNC_IMPL(__imp__sub_826CD11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD120"))) PPC_WEAK_FUNC(sub_826CD120);
PPC_FUNC_IMPL(__imp__sub_826CD120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10268
	ctx.r11.s64 = ctx.r11.s64 + -10268;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD13C"))) PPC_WEAK_FUNC(sub_826CD13C);
PPC_FUNC_IMPL(__imp__sub_826CD13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD140"))) PPC_WEAK_FUNC(sub_826CD140);
PPC_FUNC_IMPL(__imp__sub_826CD140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10300
	ctx.r11.s64 = ctx.r11.s64 + -10300;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD15C"))) PPC_WEAK_FUNC(sub_826CD15C);
PPC_FUNC_IMPL(__imp__sub_826CD15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD160"))) PPC_WEAK_FUNC(sub_826CD160);
PPC_FUNC_IMPL(__imp__sub_826CD160) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10292
	ctx.r11.s64 = ctx.r11.s64 + -10292;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD17C"))) PPC_WEAK_FUNC(sub_826CD17C);
PPC_FUNC_IMPL(__imp__sub_826CD17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD180"))) PPC_WEAK_FUNC(sub_826CD180);
PPC_FUNC_IMPL(__imp__sub_826CD180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10392
	ctx.r11.s64 = ctx.r11.s64 + -10392;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD19C"))) PPC_WEAK_FUNC(sub_826CD19C);
PPC_FUNC_IMPL(__imp__sub_826CD19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD1A0"))) PPC_WEAK_FUNC(sub_826CD1A0);
PPC_FUNC_IMPL(__imp__sub_826CD1A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10380
	ctx.r11.s64 = ctx.r11.s64 + -10380;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD1BC"))) PPC_WEAK_FUNC(sub_826CD1BC);
PPC_FUNC_IMPL(__imp__sub_826CD1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD1C0"))) PPC_WEAK_FUNC(sub_826CD1C0);
PPC_FUNC_IMPL(__imp__sub_826CD1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10372
	ctx.r11.s64 = ctx.r11.s64 + -10372;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD1DC"))) PPC_WEAK_FUNC(sub_826CD1DC);
PPC_FUNC_IMPL(__imp__sub_826CD1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD1E0"))) PPC_WEAK_FUNC(sub_826CD1E0);
PPC_FUNC_IMPL(__imp__sub_826CD1E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10364
	ctx.r11.s64 = ctx.r11.s64 + -10364;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD1FC"))) PPC_WEAK_FUNC(sub_826CD1FC);
PPC_FUNC_IMPL(__imp__sub_826CD1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD200"))) PPC_WEAK_FUNC(sub_826CD200);
PPC_FUNC_IMPL(__imp__sub_826CD200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10356
	ctx.r11.s64 = ctx.r11.s64 + -10356;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD21C"))) PPC_WEAK_FUNC(sub_826CD21C);
PPC_FUNC_IMPL(__imp__sub_826CD21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD220"))) PPC_WEAK_FUNC(sub_826CD220);
PPC_FUNC_IMPL(__imp__sub_826CD220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10344
	ctx.r11.s64 = ctx.r11.s64 + -10344;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD23C"))) PPC_WEAK_FUNC(sub_826CD23C);
PPC_FUNC_IMPL(__imp__sub_826CD23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD240"))) PPC_WEAK_FUNC(sub_826CD240);
PPC_FUNC_IMPL(__imp__sub_826CD240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10332
	ctx.r11.s64 = ctx.r11.s64 + -10332;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD25C"))) PPC_WEAK_FUNC(sub_826CD25C);
PPC_FUNC_IMPL(__imp__sub_826CD25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD260"))) PPC_WEAK_FUNC(sub_826CD260);
PPC_FUNC_IMPL(__imp__sub_826CD260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10120
	ctx.r11.s64 = ctx.r11.s64 + -10120;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD27C"))) PPC_WEAK_FUNC(sub_826CD27C);
PPC_FUNC_IMPL(__imp__sub_826CD27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD280"))) PPC_WEAK_FUNC(sub_826CD280);
PPC_FUNC_IMPL(__imp__sub_826CD280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10068
	ctx.r11.s64 = ctx.r11.s64 + -10068;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD29C"))) PPC_WEAK_FUNC(sub_826CD29C);
PPC_FUNC_IMPL(__imp__sub_826CD29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD2A0"))) PPC_WEAK_FUNC(sub_826CD2A0);
PPC_FUNC_IMPL(__imp__sub_826CD2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10056
	ctx.r11.s64 = ctx.r11.s64 + -10056;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD2BC"))) PPC_WEAK_FUNC(sub_826CD2BC);
PPC_FUNC_IMPL(__imp__sub_826CD2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD2C0"))) PPC_WEAK_FUNC(sub_826CD2C0);
PPC_FUNC_IMPL(__imp__sub_826CD2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10096
	ctx.r11.s64 = ctx.r11.s64 + -10096;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD2DC"))) PPC_WEAK_FUNC(sub_826CD2DC);
PPC_FUNC_IMPL(__imp__sub_826CD2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD2E0"))) PPC_WEAK_FUNC(sub_826CD2E0);
PPC_FUNC_IMPL(__imp__sub_826CD2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-10108
	ctx.r11.s64 = ctx.r11.s64 + -10108;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD2FC"))) PPC_WEAK_FUNC(sub_826CD2FC);
PPC_FUNC_IMPL(__imp__sub_826CD2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD300"))) PPC_WEAK_FUNC(sub_826CD300);
PPC_FUNC_IMPL(__imp__sub_826CD300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-9828
	ctx.r3.s64 = ctx.r11.s64 + -9828;
	// b 0x822d7fd0
	sub_822D7FD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD30C"))) PPC_WEAK_FUNC(sub_826CD30C);
PPC_FUNC_IMPL(__imp__sub_826CD30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD310"))) PPC_WEAK_FUNC(sub_826CD310);
PPC_FUNC_IMPL(__imp__sub_826CD310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9712
	ctx.r11.s64 = ctx.r11.s64 + -9712;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD32C"))) PPC_WEAK_FUNC(sub_826CD32C);
PPC_FUNC_IMPL(__imp__sub_826CD32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD330"))) PPC_WEAK_FUNC(sub_826CD330);
PPC_FUNC_IMPL(__imp__sub_826CD330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9704
	ctx.r11.s64 = ctx.r11.s64 + -9704;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD34C"))) PPC_WEAK_FUNC(sub_826CD34C);
PPC_FUNC_IMPL(__imp__sub_826CD34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD350"))) PPC_WEAK_FUNC(sub_826CD350);
PPC_FUNC_IMPL(__imp__sub_826CD350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9692
	ctx.r11.s64 = ctx.r11.s64 + -9692;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD36C"))) PPC_WEAK_FUNC(sub_826CD36C);
PPC_FUNC_IMPL(__imp__sub_826CD36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD370"))) PPC_WEAK_FUNC(sub_826CD370);
PPC_FUNC_IMPL(__imp__sub_826CD370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9684
	ctx.r11.s64 = ctx.r11.s64 + -9684;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD38C"))) PPC_WEAK_FUNC(sub_826CD38C);
PPC_FUNC_IMPL(__imp__sub_826CD38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD390"))) PPC_WEAK_FUNC(sub_826CD390);
PPC_FUNC_IMPL(__imp__sub_826CD390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9744
	ctx.r11.s64 = ctx.r11.s64 + -9744;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD3AC"))) PPC_WEAK_FUNC(sub_826CD3AC);
PPC_FUNC_IMPL(__imp__sub_826CD3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD3B0"))) PPC_WEAK_FUNC(sub_826CD3B0);
PPC_FUNC_IMPL(__imp__sub_826CD3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9732
	ctx.r11.s64 = ctx.r11.s64 + -9732;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD3CC"))) PPC_WEAK_FUNC(sub_826CD3CC);
PPC_FUNC_IMPL(__imp__sub_826CD3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD3D0"))) PPC_WEAK_FUNC(sub_826CD3D0);
PPC_FUNC_IMPL(__imp__sub_826CD3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9724
	ctx.r11.s64 = ctx.r11.s64 + -9724;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD3EC"))) PPC_WEAK_FUNC(sub_826CD3EC);
PPC_FUNC_IMPL(__imp__sub_826CD3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD3F0"))) PPC_WEAK_FUNC(sub_826CD3F0);
PPC_FUNC_IMPL(__imp__sub_826CD3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9604
	ctx.r11.s64 = ctx.r11.s64 + -9604;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD40C"))) PPC_WEAK_FUNC(sub_826CD40C);
PPC_FUNC_IMPL(__imp__sub_826CD40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD410"))) PPC_WEAK_FUNC(sub_826CD410);
PPC_FUNC_IMPL(__imp__sub_826CD410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9596
	ctx.r11.s64 = ctx.r11.s64 + -9596;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD42C"))) PPC_WEAK_FUNC(sub_826CD42C);
PPC_FUNC_IMPL(__imp__sub_826CD42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD430"))) PPC_WEAK_FUNC(sub_826CD430);
PPC_FUNC_IMPL(__imp__sub_826CD430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9584
	ctx.r11.s64 = ctx.r11.s64 + -9584;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD44C"))) PPC_WEAK_FUNC(sub_826CD44C);
PPC_FUNC_IMPL(__imp__sub_826CD44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD450"))) PPC_WEAK_FUNC(sub_826CD450);
PPC_FUNC_IMPL(__imp__sub_826CD450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9484
	ctx.r11.s64 = ctx.r11.s64 + -9484;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD46C"))) PPC_WEAK_FUNC(sub_826CD46C);
PPC_FUNC_IMPL(__imp__sub_826CD46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD470"))) PPC_WEAK_FUNC(sub_826CD470);
PPC_FUNC_IMPL(__imp__sub_826CD470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9472
	ctx.r11.s64 = ctx.r11.s64 + -9472;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD48C"))) PPC_WEAK_FUNC(sub_826CD48C);
PPC_FUNC_IMPL(__imp__sub_826CD48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD490"))) PPC_WEAK_FUNC(sub_826CD490);
PPC_FUNC_IMPL(__imp__sub_826CD490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9420
	ctx.r11.s64 = ctx.r11.s64 + -9420;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD4AC"))) PPC_WEAK_FUNC(sub_826CD4AC);
PPC_FUNC_IMPL(__imp__sub_826CD4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD4B0"))) PPC_WEAK_FUNC(sub_826CD4B0);
PPC_FUNC_IMPL(__imp__sub_826CD4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9408
	ctx.r11.s64 = ctx.r11.s64 + -9408;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD4CC"))) PPC_WEAK_FUNC(sub_826CD4CC);
PPC_FUNC_IMPL(__imp__sub_826CD4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD4D0"))) PPC_WEAK_FUNC(sub_826CD4D0);
PPC_FUNC_IMPL(__imp__sub_826CD4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9400
	ctx.r11.s64 = ctx.r11.s64 + -9400;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD4EC"))) PPC_WEAK_FUNC(sub_826CD4EC);
PPC_FUNC_IMPL(__imp__sub_826CD4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD4F0"))) PPC_WEAK_FUNC(sub_826CD4F0);
PPC_FUNC_IMPL(__imp__sub_826CD4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9388
	ctx.r11.s64 = ctx.r11.s64 + -9388;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD50C"))) PPC_WEAK_FUNC(sub_826CD50C);
PPC_FUNC_IMPL(__imp__sub_826CD50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD510"))) PPC_WEAK_FUNC(sub_826CD510);
PPC_FUNC_IMPL(__imp__sub_826CD510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9376
	ctx.r11.s64 = ctx.r11.s64 + -9376;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD52C"))) PPC_WEAK_FUNC(sub_826CD52C);
PPC_FUNC_IMPL(__imp__sub_826CD52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD530"))) PPC_WEAK_FUNC(sub_826CD530);
PPC_FUNC_IMPL(__imp__sub_826CD530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9364
	ctx.r11.s64 = ctx.r11.s64 + -9364;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD54C"))) PPC_WEAK_FUNC(sub_826CD54C);
PPC_FUNC_IMPL(__imp__sub_826CD54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD550"))) PPC_WEAK_FUNC(sub_826CD550);
PPC_FUNC_IMPL(__imp__sub_826CD550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-9352
	ctx.r11.s64 = ctx.r11.s64 + -9352;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD56C"))) PPC_WEAK_FUNC(sub_826CD56C);
PPC_FUNC_IMPL(__imp__sub_826CD56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD570"))) PPC_WEAK_FUNC(sub_826CD570);
PPC_FUNC_IMPL(__imp__sub_826CD570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-8484
	ctx.r3.s64 = ctx.r11.s64 + -8484;
	// b 0x822f7080
	sub_822F7080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD57C"))) PPC_WEAK_FUNC(sub_826CD57C);
PPC_FUNC_IMPL(__imp__sub_826CD57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD580"))) PPC_WEAK_FUNC(sub_826CD580);
PPC_FUNC_IMPL(__imp__sub_826CD580) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-8460
	ctx.r3.s64 = ctx.r11.s64 + -8460;
	// b 0x822f8ee8
	sub_822F8EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD58C"))) PPC_WEAK_FUNC(sub_826CD58C);
PPC_FUNC_IMPL(__imp__sub_826CD58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD590"))) PPC_WEAK_FUNC(sub_826CD590);
PPC_FUNC_IMPL(__imp__sub_826CD590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-8200
	ctx.r3.s64 = ctx.r11.s64 + -8200;
	// b 0x82305158
	sub_82305158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD59C"))) PPC_WEAK_FUNC(sub_826CD59C);
PPC_FUNC_IMPL(__imp__sub_826CD59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD5A0"))) PPC_WEAK_FUNC(sub_826CD5A0);
PPC_FUNC_IMPL(__imp__sub_826CD5A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-7276
	ctx.r11.s64 = ctx.r11.s64 + -7276;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82354cb0
	sub_82354CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD5C8"))) PPC_WEAK_FUNC(sub_826CD5C8);
PPC_FUNC_IMPL(__imp__sub_826CD5C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CD5CC"))) PPC_WEAK_FUNC(sub_826CD5CC);
PPC_FUNC_IMPL(__imp__sub_826CD5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD5D0"))) PPC_WEAK_FUNC(sub_826CD5D0);
PPC_FUNC_IMPL(__imp__sub_826CD5D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-6792
	ctx.r3.s64 = ctx.r11.s64 + -6792;
	// b 0x82317498
	sub_82317498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD5DC"))) PPC_WEAK_FUNC(sub_826CD5DC);
PPC_FUNC_IMPL(__imp__sub_826CD5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD5E0"))) PPC_WEAK_FUNC(sub_826CD5E0);
PPC_FUNC_IMPL(__imp__sub_826CD5E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18448
	ctx.r10.s64 = ctx.r11.s64 + 18448;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-6948
	ctx.r11.s64 = ctx.r11.s64 + -6948;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD5FC"))) PPC_WEAK_FUNC(sub_826CD5FC);
PPC_FUNC_IMPL(__imp__sub_826CD5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD600"))) PPC_WEAK_FUNC(sub_826CD600);
PPC_FUNC_IMPL(__imp__sub_826CD600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-6632
	ctx.r11.s64 = ctx.r11.s64 + -6632;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD61C"))) PPC_WEAK_FUNC(sub_826CD61C);
PPC_FUNC_IMPL(__imp__sub_826CD61C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CD620"))) PPC_WEAK_FUNC(sub_826CD620);
PPC_FUNC_IMPL(__imp__sub_826CD620) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18448
	ctx.r10.s64 = ctx.r11.s64 + 18448;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-6620
	ctx.r11.s64 = ctx.r11.s64 + -6620;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD63C"))) PPC_WEAK_FUNC(sub_826CD63C);
PPC_FUNC_IMPL(__imp__sub_826CD63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD640"))) PPC_WEAK_FUNC(sub_826CD640);
PPC_FUNC_IMPL(__imp__sub_826CD640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-6608
	ctx.r11.s64 = ctx.r11.s64 + -6608;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD65C"))) PPC_WEAK_FUNC(sub_826CD65C);
PPC_FUNC_IMPL(__imp__sub_826CD65C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CD660"))) PPC_WEAK_FUNC(sub_826CD660);
PPC_FUNC_IMPL(__imp__sub_826CD660) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18448
	ctx.r10.s64 = ctx.r11.s64 + 18448;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-6596
	ctx.r11.s64 = ctx.r11.s64 + -6596;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD67C"))) PPC_WEAK_FUNC(sub_826CD67C);
PPC_FUNC_IMPL(__imp__sub_826CD67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD680"))) PPC_WEAK_FUNC(sub_826CD680);
PPC_FUNC_IMPL(__imp__sub_826CD680) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-6584
	ctx.r11.s64 = ctx.r11.s64 + -6584;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD69C"))) PPC_WEAK_FUNC(sub_826CD69C);
PPC_FUNC_IMPL(__imp__sub_826CD69C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CD6A0"))) PPC_WEAK_FUNC(sub_826CD6A0);
PPC_FUNC_IMPL(__imp__sub_826CD6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-6572
	ctx.r11.s64 = ctx.r11.s64 + -6572;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD6BC"))) PPC_WEAK_FUNC(sub_826CD6BC);
PPC_FUNC_IMPL(__imp__sub_826CD6BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CD6C0"))) PPC_WEAK_FUNC(sub_826CD6C0);
PPC_FUNC_IMPL(__imp__sub_826CD6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18448
	ctx.r10.s64 = ctx.r11.s64 + 18448;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-6560
	ctx.r11.s64 = ctx.r11.s64 + -6560;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD6DC"))) PPC_WEAK_FUNC(sub_826CD6DC);
PPC_FUNC_IMPL(__imp__sub_826CD6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD6E0"))) PPC_WEAK_FUNC(sub_826CD6E0);
PPC_FUNC_IMPL(__imp__sub_826CD6E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18448
	ctx.r10.s64 = ctx.r11.s64 + 18448;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-6552
	ctx.r11.s64 = ctx.r11.s64 + -6552;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD6FC"))) PPC_WEAK_FUNC(sub_826CD6FC);
PPC_FUNC_IMPL(__imp__sub_826CD6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD700"))) PPC_WEAK_FUNC(sub_826CD700);
PPC_FUNC_IMPL(__imp__sub_826CD700) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-6640
	ctx.r3.s64 = ctx.r11.s64 + -6640;
	// b 0x821bdd08
	sub_821BDD08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD70C"))) PPC_WEAK_FUNC(sub_826CD70C);
PPC_FUNC_IMPL(__imp__sub_826CD70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD710"))) PPC_WEAK_FUNC(sub_826CD710);
PPC_FUNC_IMPL(__imp__sub_826CD710) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-6664
	ctx.r3.s64 = ctx.r11.s64 + -6664;
	// b 0x82316f10
	sub_82316F10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD71C"))) PPC_WEAK_FUNC(sub_826CD71C);
PPC_FUNC_IMPL(__imp__sub_826CD71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD720"))) PPC_WEAK_FUNC(sub_826CD720);
PPC_FUNC_IMPL(__imp__sub_826CD720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-6456
	ctx.r11.s64 = ctx.r11.s64 + -6456;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD73C"))) PPC_WEAK_FUNC(sub_826CD73C);
PPC_FUNC_IMPL(__imp__sub_826CD73C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CD740"))) PPC_WEAK_FUNC(sub_826CD740);
PPC_FUNC_IMPL(__imp__sub_826CD740) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-6444
	ctx.r3.s64 = ctx.r11.s64 + -6444;
	// b 0x82318568
	sub_82318568(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD74C"))) PPC_WEAK_FUNC(sub_826CD74C);
PPC_FUNC_IMPL(__imp__sub_826CD74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD750"))) PPC_WEAK_FUNC(sub_826CD750);
PPC_FUNC_IMPL(__imp__sub_826CD750) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-6008
	ctx.r3.s64 = ctx.r11.s64 + -6008;
	// b 0x8231a408
	sub_8231A408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD75C"))) PPC_WEAK_FUNC(sub_826CD75C);
PPC_FUNC_IMPL(__imp__sub_826CD75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD760"))) PPC_WEAK_FUNC(sub_826CD760);
PPC_FUNC_IMPL(__imp__sub_826CD760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-5968
	ctx.r3.s64 = ctx.r11.s64 + -5968;
	// b 0x8231a408
	sub_8231A408(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD76C"))) PPC_WEAK_FUNC(sub_826CD76C);
PPC_FUNC_IMPL(__imp__sub_826CD76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD770"))) PPC_WEAK_FUNC(sub_826CD770);
PPC_FUNC_IMPL(__imp__sub_826CD770) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r6,r11,6792
	ctx.r6.s64 = ctx.r11.s64 + 6792;
	// addi r3,r10,-5936
	ctx.r3.s64 = ctx.r10.s64 + -5936;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x8239c830
	sub_8239C830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD78C"))) PPC_WEAK_FUNC(sub_826CD78C);
PPC_FUNC_IMPL(__imp__sub_826CD78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD790"))) PPC_WEAK_FUNC(sub_826CD790);
PPC_FUNC_IMPL(__imp__sub_826CD790) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-4736
	ctx.r3.s64 = ctx.r11.s64 + -4736;
	// b 0x8231d460
	sub_8231D460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD79C"))) PPC_WEAK_FUNC(sub_826CD79C);
PPC_FUNC_IMPL(__imp__sub_826CD79C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD7A0"))) PPC_WEAK_FUNC(sub_826CD7A0);
PPC_FUNC_IMPL(__imp__sub_826CD7A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4684
	ctx.r11.s64 = ctx.r11.s64 + -4684;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD7BC"))) PPC_WEAK_FUNC(sub_826CD7BC);
PPC_FUNC_IMPL(__imp__sub_826CD7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD7C0"))) PPC_WEAK_FUNC(sub_826CD7C0);
PPC_FUNC_IMPL(__imp__sub_826CD7C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-4696
	ctx.r3.s64 = ctx.r11.s64 + -4696;
	// b 0x8224c798
	sub_8224C798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD7CC"))) PPC_WEAK_FUNC(sub_826CD7CC);
PPC_FUNC_IMPL(__imp__sub_826CD7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD7D0"))) PPC_WEAK_FUNC(sub_826CD7D0);
PPC_FUNC_IMPL(__imp__sub_826CD7D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r3,r11,29120
	ctx.r3.s64 = ctx.r11.s64 + 29120;
	// b 0x82146b58
	sub_82146B58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD7DC"))) PPC_WEAK_FUNC(sub_826CD7DC);
PPC_FUNC_IMPL(__imp__sub_826CD7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD7E0"))) PPC_WEAK_FUNC(sub_826CD7E0);
PPC_FUNC_IMPL(__imp__sub_826CD7E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18448
	ctx.r10.s64 = ctx.r11.s64 + 18448;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4292
	ctx.r11.s64 = ctx.r11.s64 + -4292;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD7FC"))) PPC_WEAK_FUNC(sub_826CD7FC);
PPC_FUNC_IMPL(__imp__sub_826CD7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD800"))) PPC_WEAK_FUNC(sub_826CD800);
PPC_FUNC_IMPL(__imp__sub_826CD800) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-4280
	ctx.r3.s64 = ctx.r11.s64 + -4280;
	// b 0x8232c4b0
	sub_8232C4B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD80C"))) PPC_WEAK_FUNC(sub_826CD80C);
PPC_FUNC_IMPL(__imp__sub_826CD80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD810"))) PPC_WEAK_FUNC(sub_826CD810);
PPC_FUNC_IMPL(__imp__sub_826CD810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4192
	ctx.r11.s64 = ctx.r11.s64 + -4192;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD82C"))) PPC_WEAK_FUNC(sub_826CD82C);
PPC_FUNC_IMPL(__imp__sub_826CD82C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CD830"))) PPC_WEAK_FUNC(sub_826CD830);
PPC_FUNC_IMPL(__imp__sub_826CD830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4084
	ctx.r11.s64 = ctx.r11.s64 + -4084;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD84C"))) PPC_WEAK_FUNC(sub_826CD84C);
PPC_FUNC_IMPL(__imp__sub_826CD84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD850"))) PPC_WEAK_FUNC(sub_826CD850);
PPC_FUNC_IMPL(__imp__sub_826CD850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4076
	ctx.r11.s64 = ctx.r11.s64 + -4076;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD86C"))) PPC_WEAK_FUNC(sub_826CD86C);
PPC_FUNC_IMPL(__imp__sub_826CD86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD870"))) PPC_WEAK_FUNC(sub_826CD870);
PPC_FUNC_IMPL(__imp__sub_826CD870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4068
	ctx.r11.s64 = ctx.r11.s64 + -4068;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD88C"))) PPC_WEAK_FUNC(sub_826CD88C);
PPC_FUNC_IMPL(__imp__sub_826CD88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD890"))) PPC_WEAK_FUNC(sub_826CD890);
PPC_FUNC_IMPL(__imp__sub_826CD890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4060
	ctx.r11.s64 = ctx.r11.s64 + -4060;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD8AC"))) PPC_WEAK_FUNC(sub_826CD8AC);
PPC_FUNC_IMPL(__imp__sub_826CD8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD8B0"))) PPC_WEAK_FUNC(sub_826CD8B0);
PPC_FUNC_IMPL(__imp__sub_826CD8B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4052
	ctx.r11.s64 = ctx.r11.s64 + -4052;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD8CC"))) PPC_WEAK_FUNC(sub_826CD8CC);
PPC_FUNC_IMPL(__imp__sub_826CD8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD8D0"))) PPC_WEAK_FUNC(sub_826CD8D0);
PPC_FUNC_IMPL(__imp__sub_826CD8D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4044
	ctx.r11.s64 = ctx.r11.s64 + -4044;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD8EC"))) PPC_WEAK_FUNC(sub_826CD8EC);
PPC_FUNC_IMPL(__imp__sub_826CD8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD8F0"))) PPC_WEAK_FUNC(sub_826CD8F0);
PPC_FUNC_IMPL(__imp__sub_826CD8F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4036
	ctx.r11.s64 = ctx.r11.s64 + -4036;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD90C"))) PPC_WEAK_FUNC(sub_826CD90C);
PPC_FUNC_IMPL(__imp__sub_826CD90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD910"))) PPC_WEAK_FUNC(sub_826CD910);
PPC_FUNC_IMPL(__imp__sub_826CD910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4028
	ctx.r11.s64 = ctx.r11.s64 + -4028;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD92C"))) PPC_WEAK_FUNC(sub_826CD92C);
PPC_FUNC_IMPL(__imp__sub_826CD92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD930"))) PPC_WEAK_FUNC(sub_826CD930);
PPC_FUNC_IMPL(__imp__sub_826CD930) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4020
	ctx.r11.s64 = ctx.r11.s64 + -4020;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD94C"))) PPC_WEAK_FUNC(sub_826CD94C);
PPC_FUNC_IMPL(__imp__sub_826CD94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD950"))) PPC_WEAK_FUNC(sub_826CD950);
PPC_FUNC_IMPL(__imp__sub_826CD950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4012
	ctx.r11.s64 = ctx.r11.s64 + -4012;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD96C"))) PPC_WEAK_FUNC(sub_826CD96C);
PPC_FUNC_IMPL(__imp__sub_826CD96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD970"))) PPC_WEAK_FUNC(sub_826CD970);
PPC_FUNC_IMPL(__imp__sub_826CD970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-4004
	ctx.r11.s64 = ctx.r11.s64 + -4004;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD98C"))) PPC_WEAK_FUNC(sub_826CD98C);
PPC_FUNC_IMPL(__imp__sub_826CD98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD990"))) PPC_WEAK_FUNC(sub_826CD990);
PPC_FUNC_IMPL(__imp__sub_826CD990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-3988
	ctx.r11.s64 = ctx.r11.s64 + -3988;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD9AC"))) PPC_WEAK_FUNC(sub_826CD9AC);
PPC_FUNC_IMPL(__imp__sub_826CD9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD9B0"))) PPC_WEAK_FUNC(sub_826CD9B0);
PPC_FUNC_IMPL(__imp__sub_826CD9B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32140
	ctx.r11.s64 = -2106327040;
	// addi r3,r11,-30008
	ctx.r3.s64 = ctx.r11.s64 + -30008;
	// b 0x82349658
	sub_82349658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD9BC"))) PPC_WEAK_FUNC(sub_826CD9BC);
PPC_FUNC_IMPL(__imp__sub_826CD9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD9C0"))) PPC_WEAK_FUNC(sub_826CD9C0);
PPC_FUNC_IMPL(__imp__sub_826CD9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r11,r11,-1740
	ctx.r11.s64 = ctx.r11.s64 + -1740;
	// stw r11,-3916(r10)
	PPC_STORE_U32(ctx.r10.u32 + -3916, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CD9D4"))) PPC_WEAK_FUNC(sub_826CD9D4);
PPC_FUNC_IMPL(__imp__sub_826CD9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD9D8"))) PPC_WEAK_FUNC(sub_826CD9D8);
PPC_FUNC_IMPL(__imp__sub_826CD9D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-3796
	ctx.r3.s64 = ctx.r11.s64 + -3796;
	// b 0x82352a80
	sub_82352A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD9E4"))) PPC_WEAK_FUNC(sub_826CD9E4);
PPC_FUNC_IMPL(__imp__sub_826CD9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD9E8"))) PPC_WEAK_FUNC(sub_826CD9E8);
PPC_FUNC_IMPL(__imp__sub_826CD9E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,-3816
	ctx.r3.s64 = ctx.r11.s64 + -3816;
	// b 0x82352a80
	sub_82352A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CD9F4"))) PPC_WEAK_FUNC(sub_826CD9F4);
PPC_FUNC_IMPL(__imp__sub_826CD9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CD9F8"))) PPC_WEAK_FUNC(sub_826CD9F8);
PPC_FUNC_IMPL(__imp__sub_826CD9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-3164
	ctx.r11.s64 = ctx.r11.s64 + -3164;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821e1b98
	sub_821E1B98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDA14"))) PPC_WEAK_FUNC(sub_826CDA14);
PPC_FUNC_IMPL(__imp__sub_826CDA14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDA18"))) PPC_WEAK_FUNC(sub_826CDA18);
PPC_FUNC_IMPL(__imp__sub_826CDA18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,13864
	ctx.r3.s64 = ctx.r11.s64 + 13864;
	// b 0x8235a4a0
	sub_8235A4A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDA24"))) PPC_WEAK_FUNC(sub_826CDA24);
PPC_FUNC_IMPL(__imp__sub_826CDA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDA28"))) PPC_WEAK_FUNC(sub_826CDA28);
PPC_FUNC_IMPL(__imp__sub_826CDA28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14268
	ctx.r11.s64 = ctx.r11.s64 + 14268;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDA44"))) PPC_WEAK_FUNC(sub_826CDA44);
PPC_FUNC_IMPL(__imp__sub_826CDA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDA48"))) PPC_WEAK_FUNC(sub_826CDA48);
PPC_FUNC_IMPL(__imp__sub_826CDA48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,14280
	ctx.r3.s64 = ctx.r11.s64 + 14280;
	// b 0x8236bf28
	sub_8236BF28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDA54"))) PPC_WEAK_FUNC(sub_826CDA54);
PPC_FUNC_IMPL(__imp__sub_826CDA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDA58"))) PPC_WEAK_FUNC(sub_826CDA58);
PPC_FUNC_IMPL(__imp__sub_826CDA58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14468
	ctx.r11.s64 = ctx.r11.s64 + 14468;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDA74"))) PPC_WEAK_FUNC(sub_826CDA74);
PPC_FUNC_IMPL(__imp__sub_826CDA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDA78"))) PPC_WEAK_FUNC(sub_826CDA78);
PPC_FUNC_IMPL(__imp__sub_826CDA78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14600
	ctx.r11.s64 = ctx.r11.s64 + 14600;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDA94"))) PPC_WEAK_FUNC(sub_826CDA94);
PPC_FUNC_IMPL(__imp__sub_826CDA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDA98"))) PPC_WEAK_FUNC(sub_826CDA98);
PPC_FUNC_IMPL(__imp__sub_826CDA98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14620
	ctx.r11.s64 = ctx.r11.s64 + 14620;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDAB4"))) PPC_WEAK_FUNC(sub_826CDAB4);
PPC_FUNC_IMPL(__imp__sub_826CDAB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDAB8"))) PPC_WEAK_FUNC(sub_826CDAB8);
PPC_FUNC_IMPL(__imp__sub_826CDAB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14568
	ctx.r11.s64 = ctx.r11.s64 + 14568;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDAD4"))) PPC_WEAK_FUNC(sub_826CDAD4);
PPC_FUNC_IMPL(__imp__sub_826CDAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDAD8"))) PPC_WEAK_FUNC(sub_826CDAD8);
PPC_FUNC_IMPL(__imp__sub_826CDAD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14720
	ctx.r11.s64 = ctx.r11.s64 + 14720;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDAF4"))) PPC_WEAK_FUNC(sub_826CDAF4);
PPC_FUNC_IMPL(__imp__sub_826CDAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDAF8"))) PPC_WEAK_FUNC(sub_826CDAF8);
PPC_FUNC_IMPL(__imp__sub_826CDAF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14740
	ctx.r11.s64 = ctx.r11.s64 + 14740;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDB14"))) PPC_WEAK_FUNC(sub_826CDB14);
PPC_FUNC_IMPL(__imp__sub_826CDB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDB18"))) PPC_WEAK_FUNC(sub_826CDB18);
PPC_FUNC_IMPL(__imp__sub_826CDB18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14752
	ctx.r11.s64 = ctx.r11.s64 + 14752;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDB34"))) PPC_WEAK_FUNC(sub_826CDB34);
PPC_FUNC_IMPL(__imp__sub_826CDB34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDB38"))) PPC_WEAK_FUNC(sub_826CDB38);
PPC_FUNC_IMPL(__imp__sub_826CDB38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14764
	ctx.r11.s64 = ctx.r11.s64 + 14764;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDB54"))) PPC_WEAK_FUNC(sub_826CDB54);
PPC_FUNC_IMPL(__imp__sub_826CDB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDB58"))) PPC_WEAK_FUNC(sub_826CDB58);
PPC_FUNC_IMPL(__imp__sub_826CDB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14776
	ctx.r11.s64 = ctx.r11.s64 + 14776;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDB74"))) PPC_WEAK_FUNC(sub_826CDB74);
PPC_FUNC_IMPL(__imp__sub_826CDB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDB78"))) PPC_WEAK_FUNC(sub_826CDB78);
PPC_FUNC_IMPL(__imp__sub_826CDB78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14792
	ctx.r11.s64 = ctx.r11.s64 + 14792;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDB94"))) PPC_WEAK_FUNC(sub_826CDB94);
PPC_FUNC_IMPL(__imp__sub_826CDB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDB98"))) PPC_WEAK_FUNC(sub_826CDB98);
PPC_FUNC_IMPL(__imp__sub_826CDB98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14804
	ctx.r11.s64 = ctx.r11.s64 + 14804;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDBB4"))) PPC_WEAK_FUNC(sub_826CDBB4);
PPC_FUNC_IMPL(__imp__sub_826CDBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDBB8"))) PPC_WEAK_FUNC(sub_826CDBB8);
PPC_FUNC_IMPL(__imp__sub_826CDBB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14884
	ctx.r11.s64 = ctx.r11.s64 + 14884;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDBD4"))) PPC_WEAK_FUNC(sub_826CDBD4);
PPC_FUNC_IMPL(__imp__sub_826CDBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDBD8"))) PPC_WEAK_FUNC(sub_826CDBD8);
PPC_FUNC_IMPL(__imp__sub_826CDBD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14936
	ctx.r11.s64 = ctx.r11.s64 + 14936;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDBF4"))) PPC_WEAK_FUNC(sub_826CDBF4);
PPC_FUNC_IMPL(__imp__sub_826CDBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDBF8"))) PPC_WEAK_FUNC(sub_826CDBF8);
PPC_FUNC_IMPL(__imp__sub_826CDBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,14908
	ctx.r11.s64 = ctx.r11.s64 + 14908;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDC14"))) PPC_WEAK_FUNC(sub_826CDC14);
PPC_FUNC_IMPL(__imp__sub_826CDC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDC18"))) PPC_WEAK_FUNC(sub_826CDC18);
PPC_FUNC_IMPL(__imp__sub_826CDC18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,-26760(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26760, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDC2C"))) PPC_WEAK_FUNC(sub_826CDC2C);
PPC_FUNC_IMPL(__imp__sub_826CDC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDC30"))) PPC_WEAK_FUNC(sub_826CDC30);
PPC_FUNC_IMPL(__imp__sub_826CDC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,-26756(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26756, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDC44"))) PPC_WEAK_FUNC(sub_826CDC44);
PPC_FUNC_IMPL(__imp__sub_826CDC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDC48"))) PPC_WEAK_FUNC(sub_826CDC48);
PPC_FUNC_IMPL(__imp__sub_826CDC48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,-26748(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26748, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDC5C"))) PPC_WEAK_FUNC(sub_826CDC5C);
PPC_FUNC_IMPL(__imp__sub_826CDC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDC60"))) PPC_WEAK_FUNC(sub_826CDC60);
PPC_FUNC_IMPL(__imp__sub_826CDC60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,-26744(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26744, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDC74"))) PPC_WEAK_FUNC(sub_826CDC74);
PPC_FUNC_IMPL(__imp__sub_826CDC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDC78"))) PPC_WEAK_FUNC(sub_826CDC78);
PPC_FUNC_IMPL(__imp__sub_826CDC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,15196
	ctx.r3.s64 = ctx.r11.s64 + 15196;
	// b 0x823897f8
	sub_823897F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CDC84"))) PPC_WEAK_FUNC(sub_826CDC84);
PPC_FUNC_IMPL(__imp__sub_826CDC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDC88"))) PPC_WEAK_FUNC(sub_826CDC88);
PPC_FUNC_IMPL(__imp__sub_826CDC88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,-26736(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26736, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDC9C"))) PPC_WEAK_FUNC(sub_826CDC9C);
PPC_FUNC_IMPL(__imp__sub_826CDC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDCA0"))) PPC_WEAK_FUNC(sub_826CDCA0);
PPC_FUNC_IMPL(__imp__sub_826CDCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,-26732(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26732, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDCB4"))) PPC_WEAK_FUNC(sub_826CDCB4);
PPC_FUNC_IMPL(__imp__sub_826CDCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDCB8"))) PPC_WEAK_FUNC(sub_826CDCB8);
PPC_FUNC_IMPL(__imp__sub_826CDCB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,-26564(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26564, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDCCC"))) PPC_WEAK_FUNC(sub_826CDCCC);
PPC_FUNC_IMPL(__imp__sub_826CDCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDCD0"))) PPC_WEAK_FUNC(sub_826CDCD0);
PPC_FUNC_IMPL(__imp__sub_826CDCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,-26560(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26560, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDCE4"))) PPC_WEAK_FUNC(sub_826CDCE4);
PPC_FUNC_IMPL(__imp__sub_826CDCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDCE8"))) PPC_WEAK_FUNC(sub_826CDCE8);
PPC_FUNC_IMPL(__imp__sub_826CDCE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,-26552(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26552, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDCFC"))) PPC_WEAK_FUNC(sub_826CDCFC);
PPC_FUNC_IMPL(__imp__sub_826CDCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDD00"))) PPC_WEAK_FUNC(sub_826CDD00);
PPC_FUNC_IMPL(__imp__sub_826CDD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,-26548(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26548, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDD14"))) PPC_WEAK_FUNC(sub_826CDD14);
PPC_FUNC_IMPL(__imp__sub_826CDD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDD18"))) PPC_WEAK_FUNC(sub_826CDD18);
PPC_FUNC_IMPL(__imp__sub_826CDD18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,-26500(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26500, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDD2C"))) PPC_WEAK_FUNC(sub_826CDD2C);
PPC_FUNC_IMPL(__imp__sub_826CDD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDD30"))) PPC_WEAK_FUNC(sub_826CDD30);
PPC_FUNC_IMPL(__imp__sub_826CDD30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,-26496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26496, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDD44"))) PPC_WEAK_FUNC(sub_826CDD44);
PPC_FUNC_IMPL(__imp__sub_826CDD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CDD48"))) PPC_WEAK_FUNC(sub_826CDD48);
PPC_FUNC_IMPL(__imp__sub_826CDD48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,-26488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26488, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CDD5C"))) PPC_WEAK_FUNC(sub_826CDD5C);
PPC_FUNC_IMPL(__imp__sub_826CDD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

