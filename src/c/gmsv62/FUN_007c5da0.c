/* FUN_007c5da0 - 0x007c5da0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Type propagation algorithm not settling */

void FUN_007c5da0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined1 *puStack_c4;
  int iStack_c0;
  undefined *puStack_bc;
  int iStack_b8;
  int aiStack_b4 [5];
  undefined4 *puStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined *puStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 *puStack_5c;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(extraout_ECX + 0x52c);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(uint *)(unaff_EBP + -0x28) = (-(uint)((uVar1 & 1) != 0) & 0xffffff66) - 0xc1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  puStack_5c = (undefined4 *)0x3b1;
  iStack_60 = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_64 = 0x7c5de7;
  puVar2 = (undefined4 *)FUN_00679d86();
  uStack_64 = *puVar2;
  puStack_5c = (undefined4 *)0x0;
  iStack_60 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_68 = 0x7c5df8;
  FUN_00437222();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_5c = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    iStack_60 = 0x7c5e0e;
    FUN_00403384();
  }
  puStack_5c = &DAT_00980690;
  iStack_60 = 0x7c5e1d;
  FUN_00403191();
  puStack_5c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_60 = 0x7c5e2a;
  FUN_00403191();
  piStack_84 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_84 == (int *)0x0) {
    puStack_5c = (undefined4 *)0x80004003;
    iStack_60 = 0x7c5e3f;
    FUN_00878dfb();
    piStack_84 = *(int **)(unaff_EBP + -0x14);
  }
  uStack_68 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_64 = *(undefined4 *)(unaff_EBP + -0x44);
  iVar3 = *piStack_84;
  iStack_60 = *(undefined4 *)(unaff_EBP + -0x40);
  puStack_5c = *(undefined4 **)(unaff_EBP + -0x3c);
  uStack_78 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_74 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_7c = 0xffffff83;
  uStack_80 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_70 = *(undefined4 *)(unaff_EBP + -0x30);
  *(int **)(unaff_EBP + -0x18) = piStack_84;
  uStack_6c = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_88 = (undefined *)0x7c5e6b;
  iVar3 = (**(code **)(iVar3 + 0x90))();
  if (iVar3 < 0) {
    puStack_88 = &DAT_00963de8;
    iStack_8c = *(undefined4 *)(unaff_EBP + -0x18);
    iStack_94 = 0x7c5e7d;
    iStack_90 = iVar3;
    FUN_00878e09();
  }
  puStack_88 = (undefined *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_8c = 0x7c5e8a;
  puStack_88 = (undefined *)FUN_00402bc3();
  if ((int)puStack_88 < 0) {
    iStack_8c = 0x7c5e95;
    FUN_00878dfb();
  }
  puStack_88 = (undefined *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_8c = 0x7c5ea1;
  puStack_88 = (undefined *)FUN_00402bc3();
  if ((int)puStack_88 < 0) {
    iStack_8c = 0x7c5eac;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_88 = (undefined *)0x914;
  iStack_8c = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_90 = 0x7c5ec8;
  puVar2 = (undefined4 *)FUN_00679d22();
  iVar3 = *(int *)(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -0x18) = *puVar2;
  puStack_88 = *(undefined **)(iVar3 + 0x1e64);
  iStack_8c = (int)puStack_88 / 10000;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_90 = *(undefined4 *)(unaff_EBP + -0x18);
  iStack_94 = unaff_EBP + -0x10;
  uStack_98 = 0x7c5ef0;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    puStack_88 = (undefined *)(*(int *)(unaff_EBP + -0x20) + -0xc);
    iStack_8c = 0x7c5f07;
    FUN_00434e38();
  }
  puStack_88 = (undefined *)0x0;
  iStack_8c = 0;
  iStack_90 = 0xffffffff;
  iStack_94 = *(undefined4 *)(unaff_EBP + -0x10);
  uStack_98 = 0;
  uStack_9c = 0;
  puStack_a0 = (undefined4 *)0x7c5f17;
  (*DAT_0097b4c8)();
  puStack_a0 = (undefined4 *)0x7c5f24;
  FUN_0087a1b0();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_9c;
  puStack_a0 = (undefined4 *)0xc00614a4;
  *(int **)(unaff_EBP + -0x1c) = aiStack_b4 + 4;
  aiStack_b4[3] = 0;
  aiStack_b4[2] = 0x7c5f38;
  FUN_00424e0a();
  aiStack_b4[3] = 0xffffffe6;
  aiStack_b4[2] = 0;
  aiStack_b4[0] = unaff_EBP + -0x14;
  *(int **)(unaff_EBP + -0x18) = aiStack_b4 + 1;
  iStack_b8 = 0x7c5f4a;
  FUN_00433bdf();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  aiStack_b4[0] = 0x7c5f56;
  aiStack_b4[0] = FUN_0043f900();
  iStack_b8 = 0xffffffff;
  puStack_bc = *(undefined **)(unaff_EBP + -0x20);
  iStack_c0 = 0x7c5f64;
  iStack_c0 = FUN_00449713();
  puStack_c4 = (undefined1 *)0x7c5f6a;
  iStack_b8 = FUN_00456ad5();
  puStack_bc = (undefined *)0x7c5f73;
  FUN_00424e82();
  puStack_bc = (undefined *)0x7c5f7a;
  FUN_0042b613();
  puStack_a0 = (undefined4 *)0xca0;
  aiStack_b4[4] = unaff_EBP + -0x20;
  aiStack_b4[3] = 0x7c5f8a;
  puVar2 = (undefined4 *)FUN_00679d22();
  puStack_a0 = *(undefined4 **)(iVar3 + 0x1e64);
  aiStack_b4[4] = *puVar2;
  aiStack_b4[3] = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  aiStack_b4[2] = 0x7c5fa0;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    puStack_a0 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + -0xc);
    aiStack_b4[4] = 0x7c5fb7;
    FUN_00434e38();
  }
  puStack_a0 = &DAT_00980690;
  aiStack_b4[4] = 0x7c5fc5;
  FUN_00403191();
  puStack_a0 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  aiStack_b4[4] = 0x7c5fd6;
  FUN_00403191();
  puStack_a0 = (undefined4 *)0x0;
  aiStack_b4[4] = 0;
  aiStack_b4[3] = 0xffffffff;
  aiStack_b4[2] = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  aiStack_b4[1] = 0;
  aiStack_b4[0] = 0;
  iStack_b8 = 0x7c5fe9;
  (*DAT_0097b4c8)();
  iStack_b8 = 0x7c5ff6;
  FUN_0087a1b0();
  iStack_b8 = unaff_EBP + -0x38;
  puStack_bc = (undefined *)(unaff_EBP + -0x48);
  iStack_c0 = -1;
  uStack_c8 = 0x7c600b;
  puStack_c4 = (undefined1 *)aiStack_b4;
  uStack_c8 = FUN_00449713();
  uStack_cc = 0x7c6011;
  puStack_c4 = (undefined1 *)FUN_00456ad5();
  *(int **)(unaff_EBP + -0x20) = &iStack_c0;
  uStack_c8 = 0x7c601e;
  FUN_004033a1();
  puStack_c4 = (undefined1 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_c8 = 0x7c602b;
  FUN_00405a1d();
  uStack_c8 = 0x7c6032;
  FUN_00402660();
  uStack_c8 = 0x7c6039;
  FUN_00404a02();
  iStack_b8 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_bc = (undefined *)0x7c6046;
  iStack_b8 = FUN_00402bc3();
  if (iStack_b8 < 0) {
    puStack_bc = (undefined *)0x7c6051;
    FUN_00878dfb();
  }
  iStack_b8 = unaff_EBP + -0x38;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_bc = (undefined *)0x7c605e;
  iStack_b8 = FUN_00402bc3();
  if (iStack_b8 < 0) {
    puStack_bc = (undefined *)0x7c6069;
    FUN_00878dfb();
  }
  if (*(short *)(unaff_EBP + -0x58) != 0) {
    iStack_b8 = 0;
    puStack_bc = (undefined *)0x0;
    iStack_c0 = -1;
    puStack_c4 = *(undefined1 **)(unaff_EBP + -0x10);
    uStack_c8 = 0;
    uStack_cc = 0;
    piStack_d0 = (int *)0x7c607e;
    (*DAT_0097b4c8)();
    piStack_d0 = (int *)0x7c608b;
    FUN_0087a1b0();
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_cc;
    piStack_d0 = (int *)0x3fffffff;
    uStack_d4 = *(undefined4 *)(unaff_EBP + -0x18);
    uStack_d8 = 0xffffffff;
    iStack_dc = *(undefined4 *)(unaff_EBP + -0x10);
    uStack_e0 = 0;
    (*DAT_0097b4c8)(0);
    FUN_00433c19(*(undefined4 *)(unaff_EBP + -0x18),100,0);
  }
  iStack_b8 = 0x3ac;
  puStack_bc = (undefined *)(unaff_EBP + -0x20);
  iStack_c0 = 0x7c60c4;
  puVar2 = (undefined4 *)FUN_00679d22();
  puStack_bc = (undefined *)*puVar2;
  iStack_b8 = 0x18704;
  iStack_c0 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_c4 = (undefined1 *)0x7c60d9;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_b8 = 0x7c60e8;
  FUN_00414ebb();
  iStack_b8 = 0x431;
  puStack_bc = (undefined *)(unaff_EBP + -0x1c);
  iStack_c0 = 0x7c60f8;
  iStack_b8 = FUN_00679d22();
  iStack_c0 = unaff_EBP + -0x20;
  puStack_bc = &DAT_009640ac;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  puStack_c4 = (undefined1 *)0x7c610b;
  piVar4 = (int *)FUN_004f1f89();
  puStack_bc = (undefined *)*piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  if (puStack_bc == (undefined *)0x0) {
    iStack_b8 = 0;
  }
  else {
    iStack_b8 = *(undefined4 *)((int)puStack_bc + -4);
  }
  iStack_c0 = 0x7c6129;
  FUN_0045efbb();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iStack_b8 = 0x7c6135;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_b8 = 0x7c6141;
  FUN_00414ebb();
  iStack_b8 = 0;
  puStack_bc = (undefined *)0x0;
  iStack_c0 = -1;
  puStack_c4 = *(undefined1 **)(unaff_EBP + -0x10);
  uStack_c8 = 0;
  uStack_cc = 0;
  piStack_d0 = (int *)0x7c6150;
  (*DAT_0097b4c8)();
  piStack_d0 = (int *)0x7c615d;
  FUN_0087a1b0();
  piStack_d0 = (int *)0xc00614a4;
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_d4;
  uStack_d8 = 0;
  iStack_dc = 0x7c6170;
  FUN_00424e0a();
  uStack_d8 = 0;
  iStack_dc = 0;
  *(undefined4 **)(unaff_EBP + -0x24) = &uStack_e0;
  FUN_00433bdf(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uVar5 = FUN_0043f900();
  uVar6 = FUN_00449713(&uStack_cc,0xffffffff,uVar5);
  uVar6 = FUN_00456ad5(uVar6);
  FUN_00424e82(uVar6);
  FUN_0042b613(uVar6,uVar5);
  piStack_d0 = (int *)0x64;
  uStack_d4 = 1;
  uStack_d8 = 0x18704;
  iStack_dc = 0x7c61bf;
  FUN_007d4267();
  iStack_dc = 0x7c61c4;
  uVar5 = FUN_007d1e08();
  *(undefined4 *)(iVar3 + 0x1e5c) = uVar5;
  iStack_dc = unaff_EBP + -0x58;
  *(undefined4 *)(iVar3 + 0x1e60) = 1000;
  *(undefined4 *)(iVar3 + 0x1e68) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_e0 = 0x7c61e7;
  piStack_d0 = (int *)FUN_00402bc3();
  if ((int)piStack_d0 < 0) {
    uStack_d4 = 0x7c61f4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_d0 = (int *)0x7c61ff;
  FUN_00414ebb();
  piStack_d0 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_d0 != (int *)0x0) {
    uStack_d4 = 0x7c6210;
    (**(code **)(*piStack_d0 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


