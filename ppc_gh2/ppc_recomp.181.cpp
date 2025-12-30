#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826CC194"))) PPC_WEAK_FUNC(sub_826CC194);
PPC_FUNC_IMPL(__imp__sub_826CC194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC198"))) PPC_WEAK_FUNC(sub_826CC198);
PPC_FUNC_IMPL(__imp__sub_826CC198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8840
	ctx.r3.s64 = ctx.r11.s64 + -8840;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC1A4"))) PPC_WEAK_FUNC(sub_826CC1A4);
PPC_FUNC_IMPL(__imp__sub_826CC1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC1A8"))) PPC_WEAK_FUNC(sub_826CC1A8);
PPC_FUNC_IMPL(__imp__sub_826CC1A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8816
	ctx.r3.s64 = ctx.r11.s64 + -8816;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC1B4"))) PPC_WEAK_FUNC(sub_826CC1B4);
PPC_FUNC_IMPL(__imp__sub_826CC1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC1B8"))) PPC_WEAK_FUNC(sub_826CC1B8);
PPC_FUNC_IMPL(__imp__sub_826CC1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,15216
	ctx.r3.s64 = ctx.r11.s64 + 15216;
	// bl 0x82389058
	ctx.lr = 0x826CC1D0;
	sub_82389058(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8792
	ctx.r3.s64 = ctx.r11.s64 + -8792;
	// bl 0x8239d4b8
	ctx.lr = 0x826CC1DC;
	sub_8239D4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC1EC"))) PPC_WEAK_FUNC(sub_826CC1EC);
PPC_FUNC_IMPL(__imp__sub_826CC1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC1F0"))) PPC_WEAK_FUNC(sub_826CC1F0);
PPC_FUNC_IMPL(__imp__sub_826CC1F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8776
	ctx.r3.s64 = ctx.r11.s64 + -8776;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC1FC"))) PPC_WEAK_FUNC(sub_826CC1FC);
PPC_FUNC_IMPL(__imp__sub_826CC1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC200"))) PPC_WEAK_FUNC(sub_826CC200);
PPC_FUNC_IMPL(__imp__sub_826CC200) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8752
	ctx.r3.s64 = ctx.r11.s64 + -8752;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC20C"))) PPC_WEAK_FUNC(sub_826CC20C);
PPC_FUNC_IMPL(__imp__sub_826CC20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC210"))) PPC_WEAK_FUNC(sub_826CC210);
PPC_FUNC_IMPL(__imp__sub_826CC210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8728
	ctx.r3.s64 = ctx.r11.s64 + -8728;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC21C"))) PPC_WEAK_FUNC(sub_826CC21C);
PPC_FUNC_IMPL(__imp__sub_826CC21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC220"))) PPC_WEAK_FUNC(sub_826CC220);
PPC_FUNC_IMPL(__imp__sub_826CC220) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8704
	ctx.r3.s64 = ctx.r11.s64 + -8704;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC22C"))) PPC_WEAK_FUNC(sub_826CC22C);
PPC_FUNC_IMPL(__imp__sub_826CC22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC230"))) PPC_WEAK_FUNC(sub_826CC230);
PPC_FUNC_IMPL(__imp__sub_826CC230) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8680
	ctx.r3.s64 = ctx.r11.s64 + -8680;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC23C"))) PPC_WEAK_FUNC(sub_826CC23C);
PPC_FUNC_IMPL(__imp__sub_826CC23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC240"))) PPC_WEAK_FUNC(sub_826CC240);
PPC_FUNC_IMPL(__imp__sub_826CC240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8656
	ctx.r3.s64 = ctx.r11.s64 + -8656;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC24C"))) PPC_WEAK_FUNC(sub_826CC24C);
PPC_FUNC_IMPL(__imp__sub_826CC24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC250"))) PPC_WEAK_FUNC(sub_826CC250);
PPC_FUNC_IMPL(__imp__sub_826CC250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8632
	ctx.r3.s64 = ctx.r11.s64 + -8632;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC25C"))) PPC_WEAK_FUNC(sub_826CC25C);
PPC_FUNC_IMPL(__imp__sub_826CC25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC260"))) PPC_WEAK_FUNC(sub_826CC260);
PPC_FUNC_IMPL(__imp__sub_826CC260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8608
	ctx.r3.s64 = ctx.r11.s64 + -8608;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC26C"))) PPC_WEAK_FUNC(sub_826CC26C);
PPC_FUNC_IMPL(__imp__sub_826CC26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC270"))) PPC_WEAK_FUNC(sub_826CC270);
PPC_FUNC_IMPL(__imp__sub_826CC270) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8584
	ctx.r3.s64 = ctx.r11.s64 + -8584;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC27C"))) PPC_WEAK_FUNC(sub_826CC27C);
PPC_FUNC_IMPL(__imp__sub_826CC27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC280"))) PPC_WEAK_FUNC(sub_826CC280);
PPC_FUNC_IMPL(__imp__sub_826CC280) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8560
	ctx.r3.s64 = ctx.r11.s64 + -8560;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC28C"))) PPC_WEAK_FUNC(sub_826CC28C);
PPC_FUNC_IMPL(__imp__sub_826CC28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC290"))) PPC_WEAK_FUNC(sub_826CC290);
PPC_FUNC_IMPL(__imp__sub_826CC290) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8536
	ctx.r3.s64 = ctx.r11.s64 + -8536;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC29C"))) PPC_WEAK_FUNC(sub_826CC29C);
PPC_FUNC_IMPL(__imp__sub_826CC29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC2A0"))) PPC_WEAK_FUNC(sub_826CC2A0);
PPC_FUNC_IMPL(__imp__sub_826CC2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8512
	ctx.r3.s64 = ctx.r11.s64 + -8512;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC2AC"))) PPC_WEAK_FUNC(sub_826CC2AC);
PPC_FUNC_IMPL(__imp__sub_826CC2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC2B0"))) PPC_WEAK_FUNC(sub_826CC2B0);
PPC_FUNC_IMPL(__imp__sub_826CC2B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8488
	ctx.r3.s64 = ctx.r11.s64 + -8488;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC2BC"))) PPC_WEAK_FUNC(sub_826CC2BC);
PPC_FUNC_IMPL(__imp__sub_826CC2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC2C0"))) PPC_WEAK_FUNC(sub_826CC2C0);
PPC_FUNC_IMPL(__imp__sub_826CC2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8464
	ctx.r3.s64 = ctx.r11.s64 + -8464;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC2CC"))) PPC_WEAK_FUNC(sub_826CC2CC);
PPC_FUNC_IMPL(__imp__sub_826CC2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC2D0"))) PPC_WEAK_FUNC(sub_826CC2D0);
PPC_FUNC_IMPL(__imp__sub_826CC2D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8440
	ctx.r3.s64 = ctx.r11.s64 + -8440;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC2DC"))) PPC_WEAK_FUNC(sub_826CC2DC);
PPC_FUNC_IMPL(__imp__sub_826CC2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC2E0"))) PPC_WEAK_FUNC(sub_826CC2E0);
PPC_FUNC_IMPL(__imp__sub_826CC2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8416
	ctx.r3.s64 = ctx.r11.s64 + -8416;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC2EC"))) PPC_WEAK_FUNC(sub_826CC2EC);
PPC_FUNC_IMPL(__imp__sub_826CC2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC2F0"))) PPC_WEAK_FUNC(sub_826CC2F0);
PPC_FUNC_IMPL(__imp__sub_826CC2F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8392
	ctx.r3.s64 = ctx.r11.s64 + -8392;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC2FC"))) PPC_WEAK_FUNC(sub_826CC2FC);
PPC_FUNC_IMPL(__imp__sub_826CC2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC300"))) PPC_WEAK_FUNC(sub_826CC300);
PPC_FUNC_IMPL(__imp__sub_826CC300) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8368
	ctx.r3.s64 = ctx.r11.s64 + -8368;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC30C"))) PPC_WEAK_FUNC(sub_826CC30C);
PPC_FUNC_IMPL(__imp__sub_826CC30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC310"))) PPC_WEAK_FUNC(sub_826CC310);
PPC_FUNC_IMPL(__imp__sub_826CC310) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8344
	ctx.r3.s64 = ctx.r11.s64 + -8344;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC31C"))) PPC_WEAK_FUNC(sub_826CC31C);
PPC_FUNC_IMPL(__imp__sub_826CC31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC320"))) PPC_WEAK_FUNC(sub_826CC320);
PPC_FUNC_IMPL(__imp__sub_826CC320) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8320
	ctx.r3.s64 = ctx.r11.s64 + -8320;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC32C"))) PPC_WEAK_FUNC(sub_826CC32C);
PPC_FUNC_IMPL(__imp__sub_826CC32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC330"))) PPC_WEAK_FUNC(sub_826CC330);
PPC_FUNC_IMPL(__imp__sub_826CC330) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8296
	ctx.r3.s64 = ctx.r11.s64 + -8296;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC33C"))) PPC_WEAK_FUNC(sub_826CC33C);
PPC_FUNC_IMPL(__imp__sub_826CC33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC340"))) PPC_WEAK_FUNC(sub_826CC340);
PPC_FUNC_IMPL(__imp__sub_826CC340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8272
	ctx.r3.s64 = ctx.r11.s64 + -8272;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC34C"))) PPC_WEAK_FUNC(sub_826CC34C);
PPC_FUNC_IMPL(__imp__sub_826CC34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC350"))) PPC_WEAK_FUNC(sub_826CC350);
PPC_FUNC_IMPL(__imp__sub_826CC350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8248
	ctx.r3.s64 = ctx.r11.s64 + -8248;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC35C"))) PPC_WEAK_FUNC(sub_826CC35C);
PPC_FUNC_IMPL(__imp__sub_826CC35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC360"))) PPC_WEAK_FUNC(sub_826CC360);
PPC_FUNC_IMPL(__imp__sub_826CC360) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8224
	ctx.r3.s64 = ctx.r11.s64 + -8224;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC36C"))) PPC_WEAK_FUNC(sub_826CC36C);
PPC_FUNC_IMPL(__imp__sub_826CC36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC370"))) PPC_WEAK_FUNC(sub_826CC370);
PPC_FUNC_IMPL(__imp__sub_826CC370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8200
	ctx.r3.s64 = ctx.r11.s64 + -8200;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC37C"))) PPC_WEAK_FUNC(sub_826CC37C);
PPC_FUNC_IMPL(__imp__sub_826CC37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC380"))) PPC_WEAK_FUNC(sub_826CC380);
PPC_FUNC_IMPL(__imp__sub_826CC380) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8176
	ctx.r3.s64 = ctx.r11.s64 + -8176;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC38C"))) PPC_WEAK_FUNC(sub_826CC38C);
PPC_FUNC_IMPL(__imp__sub_826CC38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC390"))) PPC_WEAK_FUNC(sub_826CC390);
PPC_FUNC_IMPL(__imp__sub_826CC390) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8152
	ctx.r3.s64 = ctx.r11.s64 + -8152;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC39C"))) PPC_WEAK_FUNC(sub_826CC39C);
PPC_FUNC_IMPL(__imp__sub_826CC39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC3A0"))) PPC_WEAK_FUNC(sub_826CC3A0);
PPC_FUNC_IMPL(__imp__sub_826CC3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8128
	ctx.r3.s64 = ctx.r11.s64 + -8128;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC3AC"))) PPC_WEAK_FUNC(sub_826CC3AC);
PPC_FUNC_IMPL(__imp__sub_826CC3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC3B0"))) PPC_WEAK_FUNC(sub_826CC3B0);
PPC_FUNC_IMPL(__imp__sub_826CC3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8104
	ctx.r3.s64 = ctx.r11.s64 + -8104;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC3BC"))) PPC_WEAK_FUNC(sub_826CC3BC);
PPC_FUNC_IMPL(__imp__sub_826CC3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC3C0"))) PPC_WEAK_FUNC(sub_826CC3C0);
PPC_FUNC_IMPL(__imp__sub_826CC3C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8080
	ctx.r3.s64 = ctx.r11.s64 + -8080;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC3CC"))) PPC_WEAK_FUNC(sub_826CC3CC);
PPC_FUNC_IMPL(__imp__sub_826CC3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC3D0"))) PPC_WEAK_FUNC(sub_826CC3D0);
PPC_FUNC_IMPL(__imp__sub_826CC3D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8056
	ctx.r3.s64 = ctx.r11.s64 + -8056;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC3DC"))) PPC_WEAK_FUNC(sub_826CC3DC);
PPC_FUNC_IMPL(__imp__sub_826CC3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC3E0"))) PPC_WEAK_FUNC(sub_826CC3E0);
PPC_FUNC_IMPL(__imp__sub_826CC3E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8032
	ctx.r3.s64 = ctx.r11.s64 + -8032;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC3EC"))) PPC_WEAK_FUNC(sub_826CC3EC);
PPC_FUNC_IMPL(__imp__sub_826CC3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC3F0"))) PPC_WEAK_FUNC(sub_826CC3F0);
PPC_FUNC_IMPL(__imp__sub_826CC3F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-8008
	ctx.r3.s64 = ctx.r11.s64 + -8008;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC3FC"))) PPC_WEAK_FUNC(sub_826CC3FC);
PPC_FUNC_IMPL(__imp__sub_826CC3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC400"))) PPC_WEAK_FUNC(sub_826CC400);
PPC_FUNC_IMPL(__imp__sub_826CC400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7984
	ctx.r3.s64 = ctx.r11.s64 + -7984;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC40C"))) PPC_WEAK_FUNC(sub_826CC40C);
PPC_FUNC_IMPL(__imp__sub_826CC40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC410"))) PPC_WEAK_FUNC(sub_826CC410);
PPC_FUNC_IMPL(__imp__sub_826CC410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7960
	ctx.r3.s64 = ctx.r11.s64 + -7960;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC41C"))) PPC_WEAK_FUNC(sub_826CC41C);
PPC_FUNC_IMPL(__imp__sub_826CC41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC420"))) PPC_WEAK_FUNC(sub_826CC420);
PPC_FUNC_IMPL(__imp__sub_826CC420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7936
	ctx.r3.s64 = ctx.r11.s64 + -7936;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC42C"))) PPC_WEAK_FUNC(sub_826CC42C);
PPC_FUNC_IMPL(__imp__sub_826CC42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC430"))) PPC_WEAK_FUNC(sub_826CC430);
PPC_FUNC_IMPL(__imp__sub_826CC430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7912
	ctx.r3.s64 = ctx.r11.s64 + -7912;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC43C"))) PPC_WEAK_FUNC(sub_826CC43C);
PPC_FUNC_IMPL(__imp__sub_826CC43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC440"))) PPC_WEAK_FUNC(sub_826CC440);
PPC_FUNC_IMPL(__imp__sub_826CC440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7888
	ctx.r3.s64 = ctx.r11.s64 + -7888;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC44C"))) PPC_WEAK_FUNC(sub_826CC44C);
PPC_FUNC_IMPL(__imp__sub_826CC44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC450"))) PPC_WEAK_FUNC(sub_826CC450);
PPC_FUNC_IMPL(__imp__sub_826CC450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7864
	ctx.r3.s64 = ctx.r11.s64 + -7864;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC45C"))) PPC_WEAK_FUNC(sub_826CC45C);
PPC_FUNC_IMPL(__imp__sub_826CC45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC460"))) PPC_WEAK_FUNC(sub_826CC460);
PPC_FUNC_IMPL(__imp__sub_826CC460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7840
	ctx.r3.s64 = ctx.r11.s64 + -7840;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC46C"))) PPC_WEAK_FUNC(sub_826CC46C);
PPC_FUNC_IMPL(__imp__sub_826CC46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC470"))) PPC_WEAK_FUNC(sub_826CC470);
PPC_FUNC_IMPL(__imp__sub_826CC470) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7816
	ctx.r3.s64 = ctx.r11.s64 + -7816;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC47C"))) PPC_WEAK_FUNC(sub_826CC47C);
PPC_FUNC_IMPL(__imp__sub_826CC47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC480"))) PPC_WEAK_FUNC(sub_826CC480);
PPC_FUNC_IMPL(__imp__sub_826CC480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC48C"))) PPC_WEAK_FUNC(sub_826CC48C);
PPC_FUNC_IMPL(__imp__sub_826CC48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC490"))) PPC_WEAK_FUNC(sub_826CC490);
PPC_FUNC_IMPL(__imp__sub_826CC490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7768
	ctx.r3.s64 = ctx.r11.s64 + -7768;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC49C"))) PPC_WEAK_FUNC(sub_826CC49C);
PPC_FUNC_IMPL(__imp__sub_826CC49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC4A0"))) PPC_WEAK_FUNC(sub_826CC4A0);
PPC_FUNC_IMPL(__imp__sub_826CC4A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7744
	ctx.r3.s64 = ctx.r11.s64 + -7744;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC4AC"))) PPC_WEAK_FUNC(sub_826CC4AC);
PPC_FUNC_IMPL(__imp__sub_826CC4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC4B0"))) PPC_WEAK_FUNC(sub_826CC4B0);
PPC_FUNC_IMPL(__imp__sub_826CC4B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7720
	ctx.r3.s64 = ctx.r11.s64 + -7720;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC4BC"))) PPC_WEAK_FUNC(sub_826CC4BC);
PPC_FUNC_IMPL(__imp__sub_826CC4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC4C0"))) PPC_WEAK_FUNC(sub_826CC4C0);
PPC_FUNC_IMPL(__imp__sub_826CC4C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7696
	ctx.r3.s64 = ctx.r11.s64 + -7696;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC4CC"))) PPC_WEAK_FUNC(sub_826CC4CC);
PPC_FUNC_IMPL(__imp__sub_826CC4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC4D0"))) PPC_WEAK_FUNC(sub_826CC4D0);
PPC_FUNC_IMPL(__imp__sub_826CC4D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7672
	ctx.r3.s64 = ctx.r11.s64 + -7672;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC4DC"))) PPC_WEAK_FUNC(sub_826CC4DC);
PPC_FUNC_IMPL(__imp__sub_826CC4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC4E0"))) PPC_WEAK_FUNC(sub_826CC4E0);
PPC_FUNC_IMPL(__imp__sub_826CC4E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7648
	ctx.r3.s64 = ctx.r11.s64 + -7648;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC4EC"))) PPC_WEAK_FUNC(sub_826CC4EC);
PPC_FUNC_IMPL(__imp__sub_826CC4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC4F0"))) PPC_WEAK_FUNC(sub_826CC4F0);
PPC_FUNC_IMPL(__imp__sub_826CC4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7624
	ctx.r3.s64 = ctx.r11.s64 + -7624;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC4FC"))) PPC_WEAK_FUNC(sub_826CC4FC);
PPC_FUNC_IMPL(__imp__sub_826CC4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC500"))) PPC_WEAK_FUNC(sub_826CC500);
PPC_FUNC_IMPL(__imp__sub_826CC500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7600
	ctx.r3.s64 = ctx.r11.s64 + -7600;
	// b 0x8239d4b8
	sub_8239D4B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC50C"))) PPC_WEAK_FUNC(sub_826CC50C);
PPC_FUNC_IMPL(__imp__sub_826CC50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC510"))) PPC_WEAK_FUNC(sub_826CC510);
PPC_FUNC_IMPL(__imp__sub_826CC510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r3,r11,-18488
	ctx.r3.s64 = ctx.r11.s64 + -18488;
	// bl 0x8239d4b8
	ctx.lr = 0x826CC528;
	sub_8239D4B8(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r3,r11,-18680
	ctx.r3.s64 = ctx.r11.s64 + -18680;
	// bl 0x823b9940
	ctx.lr = 0x826CC534;
	sub_823B9940(ctx, base);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r3,15884(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15884, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC54C"))) PPC_WEAK_FUNC(sub_826CC54C);
PPC_FUNC_IMPL(__imp__sub_826CC54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC550"))) PPC_WEAK_FUNC(sub_826CC550);
PPC_FUNC_IMPL(__imp__sub_826CC550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// li r4,108
	ctx.r4.s64 = 108;
	// addi r3,r11,21868
	ctx.r3.s64 = ctx.r11.s64 + 21868;
	// b 0x82536c28
	sub_82536C28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC560"))) PPC_WEAK_FUNC(sub_826CC560);
PPC_FUNC_IMPL(__imp__sub_826CC560) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r4,r11,21868
	ctx.r4.s64 = ctx.r11.s64 + 21868;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r11,21908
	ctx.r3.s64 = ctx.r11.s64 + 21908;
	// b 0x82535310
	sub_82535310(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC574"))) PPC_WEAK_FUNC(sub_826CC574);
PPC_FUNC_IMPL(__imp__sub_826CC574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC578"))) PPC_WEAK_FUNC(sub_826CC578);
PPC_FUNC_IMPL(__imp__sub_826CC578) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,-32080
	ctx.r3.s64 = ctx.r11.s64 + -32080;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8239ca70
	sub_8239CA70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC58C"))) PPC_WEAK_FUNC(sub_826CC58C);
PPC_FUNC_IMPL(__imp__sub_826CC58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC590"))) PPC_WEAK_FUNC(sub_826CC590);
PPC_FUNC_IMPL(__imp__sub_826CC590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r11,r11,4180
	ctx.r11.s64 = ctx.r11.s64 + 4180;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x826ce5bc
	ctx.lr = 0x826CC5AC;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7576
	ctx.r3.s64 = ctx.r11.s64 + -7576;
	// bl 0x8239d4b8
	ctx.lr = 0x826CC5B8;
	sub_8239D4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC5C8"))) PPC_WEAK_FUNC(sub_826CC5C8);
PPC_FUNC_IMPL(__imp__sub_826CC5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-31780
	ctx.r3.s64 = ctx.r11.s64 + -31780;
	// bl 0x821bb308
	ctx.lr = 0x826CC5E4;
	sub_821BB308(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7520
	ctx.r3.s64 = ctx.r11.s64 + -7520;
	// bl 0x8239d4b8
	ctx.lr = 0x826CC5F0;
	sub_8239D4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC600"))) PPC_WEAK_FUNC(sub_826CC600);
PPC_FUNC_IMPL(__imp__sub_826CC600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,-31496
	ctx.r11.s64 = ctx.r11.s64 + -31496;
	// addi r3,r9,-7440
	ctx.r3.s64 = ctx.r9.s64 + -7440;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x8239d4b8
	ctx.lr = 0x826CC63C;
	sub_8239D4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC64C"))) PPC_WEAK_FUNC(sub_826CC64C);
PPC_FUNC_IMPL(__imp__sub_826CC64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC650"))) PPC_WEAK_FUNC(sub_826CC650);
PPC_FUNC_IMPL(__imp__sub_826CC650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r9,-32147
	ctx.r9.s64 = -2106785792;
	// addi r11,r11,-31488
	ctx.r11.s64 = ctx.r11.s64 + -31488;
	// addi r3,r9,-7424
	ctx.r3.s64 = ctx.r9.s64 + -7424;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x8239d4b8
	ctx.lr = 0x826CC68C;
	sub_8239D4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC69C"))) PPC_WEAK_FUNC(sub_826CC69C);
PPC_FUNC_IMPL(__imp__sub_826CC69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC6A0"))) PPC_WEAK_FUNC(sub_826CC6A0);
PPC_FUNC_IMPL(__imp__sub_826CC6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r3,r11,-31524
	ctx.r3.s64 = ctx.r11.s64 + -31524;
	// bl 0x8267ac38
	ctx.lr = 0x826CC6B8;
	sub_8267AC38(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7456
	ctx.r3.s64 = ctx.r11.s64 + -7456;
	// bl 0x8239d4b8
	ctx.lr = 0x826CC6C4;
	sub_8239D4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC6D4"))) PPC_WEAK_FUNC(sub_826CC6D4);
PPC_FUNC_IMPL(__imp__sub_826CC6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC6D8"))) PPC_WEAK_FUNC(sub_826CC6D8);
PPC_FUNC_IMPL(__imp__sub_826CC6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r11,r11,8880
	ctx.r11.s64 = ctx.r11.s64 + 8880;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x826ce5bc
	ctx.lr = 0x826CC6F4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7408
	ctx.r3.s64 = ctx.r11.s64 + -7408;
	// bl 0x8239d4b8
	ctx.lr = 0x826CC700;
	sub_8239D4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC710"))) PPC_WEAK_FUNC(sub_826CC710);
PPC_FUNC_IMPL(__imp__sub_826CC710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32138
	ctx.r11.s64 = -2106195968;
	// addi r11,r11,8912
	ctx.r11.s64 = ctx.r11.s64 + 8912;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x826ce5bc
	ctx.lr = 0x826CC72C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32147
	ctx.r11.s64 = -2106785792;
	// addi r3,r11,-7384
	ctx.r3.s64 = ctx.r11.s64 + -7384;
	// bl 0x8239d4b8
	ctx.lr = 0x826CC738;
	sub_8239D4B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC748"))) PPC_WEAK_FUNC(sub_826CC748);
PPC_FUNC_IMPL(__imp__sub_826CC748) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,4520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4520, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC75C"))) PPC_WEAK_FUNC(sub_826CC75C);
PPC_FUNC_IMPL(__imp__sub_826CC75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC760"))) PPC_WEAK_FUNC(sub_826CC760);
PPC_FUNC_IMPL(__imp__sub_826CC760) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,4524(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4524, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC774"))) PPC_WEAK_FUNC(sub_826CC774);
PPC_FUNC_IMPL(__imp__sub_826CC774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC778"))) PPC_WEAK_FUNC(sub_826CC778);
PPC_FUNC_IMPL(__imp__sub_826CC778) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,6992
	ctx.r11.s64 = ctx.r11.s64 + 6992;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC794"))) PPC_WEAK_FUNC(sub_826CC794);
PPC_FUNC_IMPL(__imp__sub_826CC794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC798"))) PPC_WEAK_FUNC(sub_826CC798);
PPC_FUNC_IMPL(__imp__sub_826CC798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,7204
	ctx.r11.s64 = ctx.r11.s64 + 7204;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC7B4"))) PPC_WEAK_FUNC(sub_826CC7B4);
PPC_FUNC_IMPL(__imp__sub_826CC7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC7B8"))) PPC_WEAK_FUNC(sub_826CC7B8);
PPC_FUNC_IMPL(__imp__sub_826CC7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,7308
	ctx.r11.s64 = ctx.r11.s64 + 7308;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC7D4"))) PPC_WEAK_FUNC(sub_826CC7D4);
PPC_FUNC_IMPL(__imp__sub_826CC7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC7D8"))) PPC_WEAK_FUNC(sub_826CC7D8);
PPC_FUNC_IMPL(__imp__sub_826CC7D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,7352
	ctx.r11.s64 = ctx.r11.s64 + 7352;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC7F4"))) PPC_WEAK_FUNC(sub_826CC7F4);
PPC_FUNC_IMPL(__imp__sub_826CC7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC7F8"))) PPC_WEAK_FUNC(sub_826CC7F8);
PPC_FUNC_IMPL(__imp__sub_826CC7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,8128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8128, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC80C"))) PPC_WEAK_FUNC(sub_826CC80C);
PPC_FUNC_IMPL(__imp__sub_826CC80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC810"))) PPC_WEAK_FUNC(sub_826CC810);
PPC_FUNC_IMPL(__imp__sub_826CC810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,8132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8132, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC824"))) PPC_WEAK_FUNC(sub_826CC824);
PPC_FUNC_IMPL(__imp__sub_826CC824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC828"))) PPC_WEAK_FUNC(sub_826CC828);
PPC_FUNC_IMPL(__imp__sub_826CC828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,8248
	ctx.r11.s64 = ctx.r11.s64 + 8248;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC844"))) PPC_WEAK_FUNC(sub_826CC844);
PPC_FUNC_IMPL(__imp__sub_826CC844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC848"))) PPC_WEAK_FUNC(sub_826CC848);
PPC_FUNC_IMPL(__imp__sub_826CC848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,8336
	ctx.r3.s64 = ctx.r11.s64 + 8336;
	// b 0x82195818
	sub_82195818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC854"))) PPC_WEAK_FUNC(sub_826CC854);
PPC_FUNC_IMPL(__imp__sub_826CC854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC858"))) PPC_WEAK_FUNC(sub_826CC858);
PPC_FUNC_IMPL(__imp__sub_826CC858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,8512
	ctx.r11.s64 = ctx.r11.s64 + 8512;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826cc870
	goto loc_826CC870;
loc_826CC86C:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_826CC870:
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826cc86c
	if (!ctx.cr0.eq) goto loc_826CC86C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82354cb0
	sub_82354CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC8A4"))) PPC_WEAK_FUNC(sub_826CC8A4);
PPC_FUNC_IMPL(__imp__sub_826CC8A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC8A8"))) PPC_WEAK_FUNC(sub_826CC8A8);
PPC_FUNC_IMPL(__imp__sub_826CC8A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,8912(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8912, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC8BC"))) PPC_WEAK_FUNC(sub_826CC8BC);
PPC_FUNC_IMPL(__imp__sub_826CC8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC8C0"))) PPC_WEAK_FUNC(sub_826CC8C0);
PPC_FUNC_IMPL(__imp__sub_826CC8C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32141
	ctx.r10.s64 = -2106392576;
	// addi r11,r11,-23188
	ctx.r11.s64 = ctx.r11.s64 + -23188;
	// stw r11,8916(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8916, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC8D4"))) PPC_WEAK_FUNC(sub_826CC8D4);
PPC_FUNC_IMPL(__imp__sub_826CC8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC8D8"))) PPC_WEAK_FUNC(sub_826CC8D8);
PPC_FUNC_IMPL(__imp__sub_826CC8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r31,r11,8808
	ctx.r31.s64 = ctx.r11.s64 + 8808;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82382350
	ctx.lr = 0x826CC8F8;
	sub_82382350(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC91C"))) PPC_WEAK_FUNC(sub_826CC91C);
PPC_FUNC_IMPL(__imp__sub_826CC91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC920"))) PPC_WEAK_FUNC(sub_826CC920);
PPC_FUNC_IMPL(__imp__sub_826CC920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,8824
	ctx.r11.s64 = ctx.r11.s64 + 8824;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC93C"))) PPC_WEAK_FUNC(sub_826CC93C);
PPC_FUNC_IMPL(__imp__sub_826CC93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC940"))) PPC_WEAK_FUNC(sub_826CC940);
PPC_FUNC_IMPL(__imp__sub_826CC940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,8964
	ctx.r3.s64 = ctx.r11.s64 + 8964;
	// b 0x821b3c50
	sub_821B3C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC94C"))) PPC_WEAK_FUNC(sub_826CC94C);
PPC_FUNC_IMPL(__imp__sub_826CC94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC950"))) PPC_WEAK_FUNC(sub_826CC950);
PPC_FUNC_IMPL(__imp__sub_826CC950) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,9040
	ctx.r11.s64 = ctx.r11.s64 + 9040;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC96C"))) PPC_WEAK_FUNC(sub_826CC96C);
PPC_FUNC_IMPL(__imp__sub_826CC96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC970"))) PPC_WEAK_FUNC(sub_826CC970);
PPC_FUNC_IMPL(__imp__sub_826CC970) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,9052
	ctx.r11.s64 = ctx.r11.s64 + 9052;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC98C"))) PPC_WEAK_FUNC(sub_826CC98C);
PPC_FUNC_IMPL(__imp__sub_826CC98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC990"))) PPC_WEAK_FUNC(sub_826CC990);
PPC_FUNC_IMPL(__imp__sub_826CC990) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,9200
	ctx.r11.s64 = ctx.r11.s64 + 9200;
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
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82354cb0
	sub_82354CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC9B8"))) PPC_WEAK_FUNC(sub_826CC9B8);
PPC_FUNC_IMPL(__imp__sub_826CC9B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CC9BC"))) PPC_WEAK_FUNC(sub_826CC9BC);
PPC_FUNC_IMPL(__imp__sub_826CC9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC9C0"))) PPC_WEAK_FUNC(sub_826CC9C0);
PPC_FUNC_IMPL(__imp__sub_826CC9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,9192
	ctx.r3.s64 = ctx.r11.s64 + 9192;
	// b 0x821bde10
	sub_821BDE10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC9CC"))) PPC_WEAK_FUNC(sub_826CC9CC);
PPC_FUNC_IMPL(__imp__sub_826CC9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC9D0"))) PPC_WEAK_FUNC(sub_826CC9D0);
PPC_FUNC_IMPL(__imp__sub_826CC9D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,9308
	ctx.r3.s64 = ctx.r11.s64 + 9308;
	// b 0x821cd2b8
	sub_821CD2B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC9DC"))) PPC_WEAK_FUNC(sub_826CC9DC);
PPC_FUNC_IMPL(__imp__sub_826CC9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC9E0"))) PPC_WEAK_FUNC(sub_826CC9E0);
PPC_FUNC_IMPL(__imp__sub_826CC9E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,9284
	ctx.r3.s64 = ctx.r11.s64 + 9284;
	// b 0x821cd2b8
	sub_821CD2B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC9EC"))) PPC_WEAK_FUNC(sub_826CC9EC);
PPC_FUNC_IMPL(__imp__sub_826CC9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CC9F0"))) PPC_WEAK_FUNC(sub_826CC9F0);
PPC_FUNC_IMPL(__imp__sub_826CC9F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r3,r11,11336
	ctx.r3.s64 = ctx.r11.s64 + 11336;
	// b 0x8213a078
	sub_8213A078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CC9FC"))) PPC_WEAK_FUNC(sub_826CC9FC);
PPC_FUNC_IMPL(__imp__sub_826CC9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCA00"))) PPC_WEAK_FUNC(sub_826CCA00);
PPC_FUNC_IMPL(__imp__sub_826CCA00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,10100
	ctx.r3.s64 = ctx.r11.s64 + 10100;
	// b 0x821dfb38
	sub_821DFB38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCA0C"))) PPC_WEAK_FUNC(sub_826CCA0C);
PPC_FUNC_IMPL(__imp__sub_826CCA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCA10"))) PPC_WEAK_FUNC(sub_826CCA10);
PPC_FUNC_IMPL(__imp__sub_826CCA10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,10092
	ctx.r3.s64 = ctx.r11.s64 + 10092;
	// b 0x821dfb90
	sub_821DFB90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCA1C"))) PPC_WEAK_FUNC(sub_826CCA1C);
PPC_FUNC_IMPL(__imp__sub_826CCA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCA20"))) PPC_WEAK_FUNC(sub_826CCA20);
PPC_FUNC_IMPL(__imp__sub_826CCA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,10108
	ctx.r3.s64 = ctx.r11.s64 + 10108;
	// b 0x821e06d0
	sub_821E06D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCA2C"))) PPC_WEAK_FUNC(sub_826CCA2C);
PPC_FUNC_IMPL(__imp__sub_826CCA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCA30"))) PPC_WEAK_FUNC(sub_826CCA30);
PPC_FUNC_IMPL(__imp__sub_826CCA30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,10900
	ctx.r3.s64 = ctx.r11.s64 + 10900;
	// b 0x821f3ca8
	sub_821F3CA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCA3C"))) PPC_WEAK_FUNC(sub_826CCA3C);
PPC_FUNC_IMPL(__imp__sub_826CCA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCA40"))) PPC_WEAK_FUNC(sub_826CCA40);
PPC_FUNC_IMPL(__imp__sub_826CCA40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,10944
	ctx.r3.s64 = ctx.r11.s64 + 10944;
	// b 0x821f3830
	sub_821F3830(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCA4C"))) PPC_WEAK_FUNC(sub_826CCA4C);
PPC_FUNC_IMPL(__imp__sub_826CCA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCA50"))) PPC_WEAK_FUNC(sub_826CCA50);
PPC_FUNC_IMPL(__imp__sub_826CCA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,11704
	ctx.r11.s64 = ctx.r11.s64 + 11704;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCA6C"))) PPC_WEAK_FUNC(sub_826CCA6C);
PPC_FUNC_IMPL(__imp__sub_826CCA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCA70"))) PPC_WEAK_FUNC(sub_826CCA70);
PPC_FUNC_IMPL(__imp__sub_826CCA70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,11744
	ctx.r3.s64 = ctx.r11.s64 + 11744;
	// b 0x82352a80
	sub_82352A80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCA7C"))) PPC_WEAK_FUNC(sub_826CCA7C);
PPC_FUNC_IMPL(__imp__sub_826CCA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCA80"))) PPC_WEAK_FUNC(sub_826CCA80);
PPC_FUNC_IMPL(__imp__sub_826CCA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,11900
	ctx.r11.s64 = ctx.r11.s64 + 11900;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCA9C"))) PPC_WEAK_FUNC(sub_826CCA9C);
PPC_FUNC_IMPL(__imp__sub_826CCA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCAA0"))) PPC_WEAK_FUNC(sub_826CCAA0);
PPC_FUNC_IMPL(__imp__sub_826CCAA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,11912
	ctx.r11.s64 = ctx.r11.s64 + 11912;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCABC"))) PPC_WEAK_FUNC(sub_826CCABC);
PPC_FUNC_IMPL(__imp__sub_826CCABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCAC0"))) PPC_WEAK_FUNC(sub_826CCAC0);
PPC_FUNC_IMPL(__imp__sub_826CCAC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,11936
	ctx.r11.s64 = ctx.r11.s64 + 11936;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCADC"))) PPC_WEAK_FUNC(sub_826CCADC);
PPC_FUNC_IMPL(__imp__sub_826CCADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCAE0"))) PPC_WEAK_FUNC(sub_826CCAE0);
PPC_FUNC_IMPL(__imp__sub_826CCAE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,11944
	ctx.r11.s64 = ctx.r11.s64 + 11944;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCAFC"))) PPC_WEAK_FUNC(sub_826CCAFC);
PPC_FUNC_IMPL(__imp__sub_826CCAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCB00"))) PPC_WEAK_FUNC(sub_826CCB00);
PPC_FUNC_IMPL(__imp__sub_826CCB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,11952
	ctx.r3.s64 = ctx.r11.s64 + 11952;
	// b 0x82229500
	sub_82229500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCB0C"))) PPC_WEAK_FUNC(sub_826CCB0C);
PPC_FUNC_IMPL(__imp__sub_826CCB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCB10"))) PPC_WEAK_FUNC(sub_826CCB10);
PPC_FUNC_IMPL(__imp__sub_826CCB10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,12428
	ctx.r11.s64 = ctx.r11.s64 + 12428;
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

__attribute__((alias("__imp__sub_826CCB38"))) PPC_WEAK_FUNC(sub_826CCB38);
PPC_FUNC_IMPL(__imp__sub_826CCB38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CCB3C"))) PPC_WEAK_FUNC(sub_826CCB3C);
PPC_FUNC_IMPL(__imp__sub_826CCB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCB40"))) PPC_WEAK_FUNC(sub_826CCB40);
PPC_FUNC_IMPL(__imp__sub_826CCB40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,12416
	ctx.r11.s64 = ctx.r11.s64 + 12416;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826ccb58
	goto loc_826CCB58;
loc_826CCB54:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_826CCB58:
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ccb54
	if (!ctx.cr0.eq) goto loc_826CCB54;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82354cb0
	sub_82354CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCB8C"))) PPC_WEAK_FUNC(sub_826CCB8C);
PPC_FUNC_IMPL(__imp__sub_826CCB8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CCB90"))) PPC_WEAK_FUNC(sub_826CCB90);
PPC_FUNC_IMPL(__imp__sub_826CCB90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,12824
	ctx.r3.s64 = ctx.r11.s64 + 12824;
	// b 0x8223a3a8
	sub_8223A3A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCB9C"))) PPC_WEAK_FUNC(sub_826CCB9C);
PPC_FUNC_IMPL(__imp__sub_826CCB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCBA0"))) PPC_WEAK_FUNC(sub_826CCBA0);
PPC_FUNC_IMPL(__imp__sub_826CCBA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,12996
	ctx.r11.s64 = ctx.r11.s64 + 12996;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826ccbb8
	goto loc_826CCBB8;
loc_826CCBB4:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_826CCBB8:
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ccbb4
	if (!ctx.cr0.eq) goto loc_826CCBB4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82354cb0
	sub_82354CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCBEC"))) PPC_WEAK_FUNC(sub_826CCBEC);
PPC_FUNC_IMPL(__imp__sub_826CCBEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CCBF0"))) PPC_WEAK_FUNC(sub_826CCBF0);
PPC_FUNC_IMPL(__imp__sub_826CCBF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,12984
	ctx.r11.s64 = ctx.r11.s64 + 12984;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826ccc08
	goto loc_826CCC08;
loc_826CCC04:
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
loc_826CCC08:
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ccc04
	if (!ctx.cr0.eq) goto loc_826CCC04;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82354cb0
	sub_82354CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCC3C"))) PPC_WEAK_FUNC(sub_826CCC3C);
PPC_FUNC_IMPL(__imp__sub_826CCC3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CCC40"))) PPC_WEAK_FUNC(sub_826CCC40);
PPC_FUNC_IMPL(__imp__sub_826CCC40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,13128
	ctx.r3.s64 = ctx.r11.s64 + 13128;
	// b 0x8224c798
	sub_8224C798(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCC4C"))) PPC_WEAK_FUNC(sub_826CCC4C);
PPC_FUNC_IMPL(__imp__sub_826CCC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCC50"))) PPC_WEAK_FUNC(sub_826CCC50);
PPC_FUNC_IMPL(__imp__sub_826CCC50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13140
	ctx.r11.s64 = ctx.r11.s64 + 13140;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCC6C"))) PPC_WEAK_FUNC(sub_826CCC6C);
PPC_FUNC_IMPL(__imp__sub_826CCC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCC70"))) PPC_WEAK_FUNC(sub_826CCC70);
PPC_FUNC_IMPL(__imp__sub_826CCC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13148
	ctx.r11.s64 = ctx.r11.s64 + 13148;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCC8C"))) PPC_WEAK_FUNC(sub_826CCC8C);
PPC_FUNC_IMPL(__imp__sub_826CCC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCC90"))) PPC_WEAK_FUNC(sub_826CCC90);
PPC_FUNC_IMPL(__imp__sub_826CCC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,13368
	ctx.r3.s64 = ctx.r11.s64 + 13368;
	// b 0x82252ed0
	sub_82252ED0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCC9C"))) PPC_WEAK_FUNC(sub_826CCC9C);
PPC_FUNC_IMPL(__imp__sub_826CCC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCCA0"))) PPC_WEAK_FUNC(sub_826CCCA0);
PPC_FUNC_IMPL(__imp__sub_826CCCA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,13500
	ctx.r3.s64 = ctx.r11.s64 + 13500;
	// b 0x82254be0
	sub_82254BE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCCAC"))) PPC_WEAK_FUNC(sub_826CCCAC);
PPC_FUNC_IMPL(__imp__sub_826CCCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCCB0"))) PPC_WEAK_FUNC(sub_826CCCB0);
PPC_FUNC_IMPL(__imp__sub_826CCCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13560
	ctx.r11.s64 = ctx.r11.s64 + 13560;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCCCC"))) PPC_WEAK_FUNC(sub_826CCCCC);
PPC_FUNC_IMPL(__imp__sub_826CCCCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCCD0"))) PPC_WEAK_FUNC(sub_826CCCD0);
PPC_FUNC_IMPL(__imp__sub_826CCCD0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13568
	ctx.r11.s64 = ctx.r11.s64 + 13568;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCCEC"))) PPC_WEAK_FUNC(sub_826CCCEC);
PPC_FUNC_IMPL(__imp__sub_826CCCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCCF0"))) PPC_WEAK_FUNC(sub_826CCCF0);
PPC_FUNC_IMPL(__imp__sub_826CCCF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,18572
	ctx.r10.s64 = ctx.r11.s64 + 18572;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,13576
	ctx.r11.s64 = ctx.r11.s64 + 13576;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82120818
	sub_82120818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCD0C"))) PPC_WEAK_FUNC(sub_826CCD0C);
PPC_FUNC_IMPL(__imp__sub_826CCD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCD10"))) PPC_WEAK_FUNC(sub_826CCD10);
PPC_FUNC_IMPL(__imp__sub_826CCD10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,17016
	ctx.r3.s64 = ctx.r11.s64 + 17016;
	// b 0x82358238
	sub_82358238(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCD1C"))) PPC_WEAK_FUNC(sub_826CCD1C);
PPC_FUNC_IMPL(__imp__sub_826CCD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCD20"))) PPC_WEAK_FUNC(sub_826CCD20);
PPC_FUNC_IMPL(__imp__sub_826CCD20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,17024
	ctx.r11.s64 = ctx.r11.s64 + 17024;
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

__attribute__((alias("__imp__sub_826CCD48"))) PPC_WEAK_FUNC(sub_826CCD48);
PPC_FUNC_IMPL(__imp__sub_826CCD48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CCD4C"))) PPC_WEAK_FUNC(sub_826CCD4C);
PPC_FUNC_IMPL(__imp__sub_826CCD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCD50"))) PPC_WEAK_FUNC(sub_826CCD50);
PPC_FUNC_IMPL(__imp__sub_826CCD50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,17088
	ctx.r3.s64 = ctx.r11.s64 + 17088;
	// b 0x82271e68
	sub_82271E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCD5C"))) PPC_WEAK_FUNC(sub_826CCD5C);
PPC_FUNC_IMPL(__imp__sub_826CCD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCD60"))) PPC_WEAK_FUNC(sub_826CCD60);
PPC_FUNC_IMPL(__imp__sub_826CCD60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r3,r11,17112
	ctx.r3.s64 = ctx.r11.s64 + 17112;
	// b 0x82272858
	sub_82272858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCD6C"))) PPC_WEAK_FUNC(sub_826CCD6C);
PPC_FUNC_IMPL(__imp__sub_826CCD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCD70"))) PPC_WEAK_FUNC(sub_826CCD70);
PPC_FUNC_IMPL(__imp__sub_826CCD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r31,r11,17160
	ctx.r31.s64 = ctx.r11.s64 + 17160;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82272e20
	ctx.lr = 0x826CCD90;
	sub_82272E20(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82317498
	ctx.lr = 0x826CCD98;
	sub_82317498(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CCDAC"))) PPC_WEAK_FUNC(sub_826CCDAC);
PPC_FUNC_IMPL(__imp__sub_826CCDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCDB0"))) PPC_WEAK_FUNC(sub_826CCDB0);
PPC_FUNC_IMPL(__imp__sub_826CCDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,17248
	ctx.r11.s64 = ctx.r11.s64 + 17248;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x826ccdc8
	goto loc_826CCDC8;
loc_826CCDC4:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_826CCDC8:
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x826ccdc4
	if (!ctx.cr0.eq) goto loc_826CCDC4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82354cb0
	sub_82354CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCDFC"))) PPC_WEAK_FUNC(sub_826CCDFC);
PPC_FUNC_IMPL(__imp__sub_826CCDFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CCE00"))) PPC_WEAK_FUNC(sub_826CCE00);
PPC_FUNC_IMPL(__imp__sub_826CCE00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,18480
	ctx.r11.s64 = ctx.r11.s64 + 18480;
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

__attribute__((alias("__imp__sub_826CCE28"))) PPC_WEAK_FUNC(sub_826CCE28);
PPC_FUNC_IMPL(__imp__sub_826CCE28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CCE2C"))) PPC_WEAK_FUNC(sub_826CCE2C);
PPC_FUNC_IMPL(__imp__sub_826CCE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCE30"))) PPC_WEAK_FUNC(sub_826CCE30);
PPC_FUNC_IMPL(__imp__sub_826CCE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r11,r11,20576
	ctx.r11.s64 = ctx.r11.s64 + 20576;
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

__attribute__((alias("__imp__sub_826CCE58"))) PPC_WEAK_FUNC(sub_826CCE58);
PPC_FUNC_IMPL(__imp__sub_826CCE58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CCE5C"))) PPC_WEAK_FUNC(sub_826CCE5C);
PPC_FUNC_IMPL(__imp__sub_826CCE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCE60"))) PPC_WEAK_FUNC(sub_826CCE60);
PPC_FUNC_IMPL(__imp__sub_826CCE60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32137
	ctx.r11.s64 = -2106130432;
	// addi r31,r11,21072
	ctx.r31.s64 = ctx.r11.s64 + 21072;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82325e40
	ctx.lr = 0x826CCE80;
	sub_82325E40(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82317498
	ctx.lr = 0x826CCE88;
	sub_82317498(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CCE9C"))) PPC_WEAK_FUNC(sub_826CCE9C);
PPC_FUNC_IMPL(__imp__sub_826CCE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCEA0"))) PPC_WEAK_FUNC(sub_826CCEA0);
PPC_FUNC_IMPL(__imp__sub_826CCEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,21216
	ctx.r3.s64 = ctx.r11.s64 + 21216;
	// b 0x8227f600
	sub_8227F600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCEAC"))) PPC_WEAK_FUNC(sub_826CCEAC);
PPC_FUNC_IMPL(__imp__sub_826CCEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCEB0"))) PPC_WEAK_FUNC(sub_826CCEB0);
PPC_FUNC_IMPL(__imp__sub_826CCEB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,21256
	ctx.r3.s64 = ctx.r11.s64 + 21256;
	// b 0x82280488
	sub_82280488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCEBC"))) PPC_WEAK_FUNC(sub_826CCEBC);
PPC_FUNC_IMPL(__imp__sub_826CCEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCEC0"))) PPC_WEAK_FUNC(sub_826CCEC0);
PPC_FUNC_IMPL(__imp__sub_826CCEC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r11,r11,21300
	ctx.r11.s64 = ctx.r11.s64 + 21300;
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

__attribute__((alias("__imp__sub_826CCEE8"))) PPC_WEAK_FUNC(sub_826CCEE8);
PPC_FUNC_IMPL(__imp__sub_826CCEE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826CCEEC"))) PPC_WEAK_FUNC(sub_826CCEEC);
PPC_FUNC_IMPL(__imp__sub_826CCEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCEF0"))) PPC_WEAK_FUNC(sub_826CCEF0);
PPC_FUNC_IMPL(__imp__sub_826CCEF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,21344
	ctx.r3.s64 = ctx.r11.s64 + 21344;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r11,r11,29524
	ctx.r11.s64 = ctx.r11.s64 + 29524;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82317498
	sub_82317498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCF08"))) PPC_WEAK_FUNC(sub_826CCF08);
PPC_FUNC_IMPL(__imp__sub_826CCF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32141
	ctx.r11.s64 = -2106392576;
	// addi r3,r11,21976
	ctx.r3.s64 = ctx.r11.s64 + 21976;
	// b 0x8229f608
	sub_8229F608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCF14"))) PPC_WEAK_FUNC(sub_826CCF14);
PPC_FUNC_IMPL(__imp__sub_826CCF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCF18"))) PPC_WEAK_FUNC(sub_826CCF18);
PPC_FUNC_IMPL(__imp__sub_826CCF18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r3,r11,22728
	ctx.r3.s64 = ctx.r11.s64 + 22728;
	// b 0x822a0a98
	sub_822A0A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826CCF24"))) PPC_WEAK_FUNC(sub_826CCF24);
PPC_FUNC_IMPL(__imp__sub_826CCF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826CCF28"))) PPC_WEAK_FUNC(sub_826CCF28);
PPC_FUNC_IMPL(__imp__sub_826CCF28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// addi r11,r11,-22972
	ctx.r11.s64 = ctx.r11.s64 + -22972;
	// stw r11,22984(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22984, ctx.r11.u32);
	// blr 
	return;
}

