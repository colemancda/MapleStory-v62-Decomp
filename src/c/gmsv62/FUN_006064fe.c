/* FUN_006064fe - 0x006064fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006064fe(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  undefined4 *puVar6;
  undefined4 uStack_13c;
  int iStack_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined4 *puStack_12c;
  int *piStack_128;
  undefined4 uStack_124;
  wchar_t *pwStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 *puStack_10c;
  int *piStack_108;
  undefined4 uStack_104;
  wchar_t *pwStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 *puStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  wchar_t *pwStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 *puStack_cc;
  int *piStack_c8;
  undefined4 uStack_c4;
  wchar_t *pwStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 *puStack_ac;
  int *piStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 *puStack_84;
  undefined4 *puStack_80;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 4) = 0;
  uVar4 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 8) = 0;
  *(undefined4 *)(extraout_ECX + 0xc) = 0;
  *(undefined4 *)(extraout_ECX + 0x10) = 0;
  *(undefined4 *)(extraout_ECX + 0x14) = 0;
  *(undefined4 *)(extraout_ECX + 0x18) = 1;
  *(undefined4 *)(extraout_ECX + 0x1c) = uVar4;
  puStack_80 = (undefined4 *)0x60653c;
  FUN_0074b9b2();
  puVar6 = (undefined4 *)(extraout_ECX + 0x508);
  *(undefined4 **)(unaff_EBP + -0x18) = puVar6;
  *puVar6 = 0;
  *(undefined4 *)(extraout_ECX + 0x50c) = 0;
  *(undefined4 *)(extraout_ECX + 0x510) = 0;
  *(undefined4 *)(extraout_ECX + 0x514) = 0;
  *(undefined4 *)(extraout_ECX + 0x518) = 0;
  puStack_80 = (undefined4 *)0x3af;
  puStack_84 = (undefined4 *)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_88 = 0x606576;
  puVar2 = (undefined4 *)FUN_00679d86();
  uStack_88 = *puVar2;
  puStack_80 = (undefined4 *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_8c = 0x606584;
  puStack_84 = puVar6;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    puStack_80 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + -0xc);
    puStack_84 = (undefined4 *)0x60659b;
    FUN_00403384();
  }
  puStack_80 = &DAT_00980690;
  puStack_84 = (undefined4 *)0x6065aa;
  FUN_00403191();
  puStack_80 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_84 = (undefined4 *)0x6065b7;
  FUN_00403191();
  iVar3 = **(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (iVar3 == 0) {
    puStack_80 = (undefined4 *)0x80004003;
    puStack_84 = (undefined4 *)0x6065cc;
    FUN_00878dfb();
  }
  uStack_8c = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x28);
  puStack_84 = *(undefined4 **)(unaff_EBP + -0x24);
  puStack_80 = *(undefined4 **)(unaff_EBP + -0x20);
  uStack_9c = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_98 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_a0 = 0x15e;
  piStack_a8 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x508);
  iVar3 = *piStack_a8;
  uStack_94 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_a4 = 0x122;
  *(int **)(unaff_EBP + -0x18) = piStack_a8;
  uStack_90 = *(undefined4 *)(unaff_EBP + -0x30);
  puStack_ac = (undefined4 *)0x606601;
  iVar3 = (**(code **)(iVar3 + 0x2c))();
  if (iVar3 < 0) {
    puStack_ac = (undefined4 *)&DAT_00963cc8;
    uStack_b0 = *(undefined4 *)(unaff_EBP + -0x18);
    iStack_b8 = 0x606613;
    iStack_b4 = iVar3;
    FUN_00878e09();
  }
  puStack_ac = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_b0 = 0x606620;
  puStack_ac = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ac < 0) {
    uStack_b0 = 0x60662d;
    FUN_00878dfb();
  }
  puStack_ac = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_b0 = 0x60663a;
  puStack_ac = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ac < 0) {
    uStack_b0 = 0x606645;
    FUN_00878dfb();
  }
  puStack_ac = &DAT_00980690;
  uStack_b0 = 0x60664e;
  FUN_00403191();
  puStack_ac = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_b0 = 0x60665b;
  FUN_00403191();
  puStack_ac = (undefined4 *)0x0;
  uStack_b0 = 0;
  iStack_b4 = unaff_EBP + -0x5c;
  iStack_b8 = unaff_EBP + -0x4c;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_bc;
  pwStack_c0 = u_UI_UIWindow_img_Delivery_say0_00967fc8;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_c4 = 0x606679;
  FUN_004033a1();
  pwStack_c0 = (wchar_t *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_c4 = 0x606686;
  FUN_00405a1d();
  uStack_c4 = 0x60668d;
  FUN_00402660();
  uStack_c4 = 0x606694;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_b4 = 0x60669f;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x18) = iVar3;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (iVar3 != 0) {
    puStack_ac = (undefined4 *)(unaff_EBP + -0x18);
    uStack_b0 = 0x6066b5;
    puStack_ac = (undefined4 *)FUN_0041a581();
    if (((int)puStack_ac < 0) && (puStack_ac != (undefined4 *)0x80004002)) {
      uStack_b0 = 0x6066c6;
      FUN_00878dfb();
    }
  }
  puStack_ac = (undefined4 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_b0 = 0x6066d3;
  puStack_ac = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ac < 0) {
    uStack_b0 = 0x6066de;
    FUN_00878dfb();
  }
  puStack_ac = (undefined4 *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  uStack_b0 = 0x6066eb;
  puStack_ac = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ac < 0) {
    uStack_b0 = 0x6066f6;
    FUN_00878dfb();
  }
  puStack_ac = (undefined4 *)(unaff_EBP + -0x5c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_b0 = 0x606703;
  puStack_ac = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ac < 0) {
    uStack_b0 = 0x60670e;
    FUN_00878dfb();
  }
  puStack_ac = (undefined4 *)0x3;
  uStack_b0 = 0xff;
  iStack_b4 = 0x60671d;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x508);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar3 == 0) {
    puStack_ac = (undefined4 *)0x80004003;
    uStack_b0 = 0x606737;
    FUN_00878dfb();
  }
  uStack_bc = *(undefined4 *)(unaff_EBP + 8);
  iStack_b8 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_b4 = *(undefined4 *)(unaff_EBP + -0x38);
  pwStack_c0 = (wchar_t *)0x72;
  piStack_c8 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x508);
  iVar3 = *piStack_c8;
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_c4 = 0x5f;
  *(int **)(unaff_EBP + -0x14) = piStack_c8;
  puStack_ac = *(undefined4 **)(unaff_EBP + -0x30);
  puStack_cc = (undefined4 *)0x606760;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_cc = (undefined4 *)&DAT_00963cc8;
    uStack_d0 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_d8 = 0x606772;
    iStack_d4 = iVar3;
    FUN_00878e09();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_d0 = 0x60677f;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    uStack_d0 = 0x60678c;
    FUN_00878dfb();
  }
  puStack_cc = &DAT_00980690;
  uStack_d0 = 0x606795;
  FUN_00403191();
  puStack_cc = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_d0 = 0x6067a2;
  FUN_00403191();
  puStack_cc = (undefined4 *)0x0;
  uStack_d0 = 0;
  iStack_d4 = unaff_EBP + -0x2c;
  iStack_d8 = unaff_EBP + -0x3c;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_dc;
  pwStack_e0 = u_UI_UIWindow_img_Delivery_npc0_00967f8c;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_e4 = 0x6067c0;
  FUN_004033a1();
  pwStack_e0 = (wchar_t *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_e4 = 0x6067cd;
  FUN_00405a1d();
  uStack_e4 = 0x6067d4;
  FUN_00402660();
  uStack_e4 = 0x6067db;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iStack_d4 = 0x6067e6;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  puStack_cc = (undefined4 *)(unaff_EBP + -0x14);
  uStack_d0 = 0x6067f5;
  puStack_cc = (undefined4 *)FUN_0041a581();
  if (((int)puStack_cc < 0) && (puStack_cc != (undefined4 *)0x80004002)) {
    uStack_d0 = 0x606806;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  uStack_d0 = 0x606813;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    uStack_d0 = 0x60681e;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_d0 = 0x60682b;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    uStack_d0 = 0x606836;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_d0 = 0x606843;
  puStack_cc = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_cc < 0) {
    uStack_d0 = 0x60684e;
    FUN_00878dfb();
  }
  puStack_cc = (undefined4 *)0x3;
  uStack_d0 = 0xff;
  iStack_d4 = 0x60685d;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x508);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar3 == 0) {
    puStack_cc = (undefined4 *)0x80004003;
    uStack_d0 = 0x606877;
    FUN_00878dfb();
  }
  uStack_dc = *(undefined4 *)(unaff_EBP + 8);
  iStack_d8 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_d4 = *(undefined4 *)(unaff_EBP + -0x38);
  pwStack_e0 = (wchar_t *)0x6e;
  piStack_e8 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x508);
  iVar3 = *piStack_e8;
  uStack_d0 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_e4 = 0x1d;
  *(int **)(unaff_EBP + -0x14) = piStack_e8;
  puStack_cc = *(undefined4 **)(unaff_EBP + -0x30);
  puStack_ec = (undefined4 *)0x6068a0;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_ec = (undefined4 *)&DAT_00963cc8;
    uStack_f0 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_f8 = 0x6068b2;
    iStack_f4 = iVar3;
    FUN_00878e09();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_f0 = 0x6068bf;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x6068cc;
    FUN_00878dfb();
  }
  puStack_ec = &DAT_00980690;
  uStack_f0 = 0x6068d5;
  FUN_00403191();
  puStack_ec = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_f0 = 0x6068e2;
  FUN_00403191();
  puStack_ec = (undefined4 *)0x0;
  uStack_f0 = 0;
  iStack_f4 = unaff_EBP + -0x2c;
  iStack_f8 = unaff_EBP + -0x3c;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_fc;
  pwStack_100 = u_UI_UIWindow_img_Delivery_icon1_00967f4c;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_104 = 0x606900;
  FUN_004033a1();
  pwStack_100 = (wchar_t *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_104 = 0x60690d;
  FUN_00405a1d();
  uStack_104 = 0x606914;
  FUN_00402660();
  uStack_104 = 0x60691b;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iStack_f4 = 0x606926;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  puStack_ec = (undefined4 *)(unaff_EBP + -0x14);
  uStack_f0 = 0x606935;
  puStack_ec = (undefined4 *)FUN_0041a581();
  if (((int)puStack_ec < 0) && (puStack_ec != (undefined4 *)0x80004002)) {
    uStack_f0 = 0x606946;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_f0 = 0x606953;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x60695e;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_f0 = 0x60696b;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x606976;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_f0 = 0x606983;
  puStack_ec = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_ec < 0) {
    uStack_f0 = 0x60698e;
    FUN_00878dfb();
  }
  puStack_ec = (undefined4 *)0x3;
  uStack_f0 = 0xff;
  iStack_f4 = 0x60699d;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x508);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (iVar3 == 0) {
    puStack_ec = (undefined4 *)0x80004003;
    uStack_f0 = 0x6069b7;
    FUN_00878dfb();
  }
  uStack_fc = *(undefined4 *)(unaff_EBP + 8);
  iStack_f8 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_f4 = *(undefined4 *)(unaff_EBP + -0x38);
  pwStack_100 = (wchar_t *)0x40;
  piStack_108 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x508);
  iVar3 = *piStack_108;
  uStack_f0 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_104 = 0xd;
  *(int **)(unaff_EBP + -0x14) = piStack_108;
  puStack_ec = *(undefined4 **)(unaff_EBP + -0x30);
  puStack_10c = (undefined4 *)0x6069e0;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_10c = (undefined4 *)&DAT_00963cc8;
    uStack_110 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_118 = 0x6069f2;
    iStack_114 = iVar3;
    FUN_00878e09();
  }
  puStack_10c = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_110 = 0x6069ff;
  puStack_10c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    uStack_110 = 0x606a0c;
    FUN_00878dfb();
  }
  puStack_10c = &DAT_00980690;
  uStack_110 = 0x606a15;
  FUN_00403191();
  puStack_10c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_110 = 0x606a22;
  FUN_00403191();
  puStack_10c = (undefined4 *)0x0;
  uStack_110 = 0;
  iStack_114 = unaff_EBP + -0x2c;
  iStack_118 = unaff_EBP + -0x3c;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_11c;
  pwStack_120 = u_UI_UIWindow_img_Delivery_icon2_00967f0c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  uStack_124 = 0x606a40;
  FUN_004033a1();
  pwStack_120 = (wchar_t *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  uStack_124 = 0x606a4d;
  FUN_00405a1d();
  uStack_124 = 0x606a54;
  FUN_00402660();
  uStack_124 = 0x606a5b;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  iStack_114 = 0x606a66;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  puStack_10c = (undefined4 *)(unaff_EBP + -0x14);
  uStack_110 = 0x606a75;
  puStack_10c = (undefined4 *)FUN_0041a581();
  if (((int)puStack_10c < 0) && (puStack_10c != (undefined4 *)0x80004002)) {
    uStack_110 = 0x606a86;
    FUN_00878dfb();
  }
  puStack_10c = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  uStack_110 = 0x606a93;
  puStack_10c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    uStack_110 = 0x606a9e;
    FUN_00878dfb();
  }
  puStack_10c = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_110 = 0x606aab;
  puStack_10c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    uStack_110 = 0x606ab6;
    FUN_00878dfb();
  }
  puStack_10c = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_110 = 0x606ac3;
  puStack_10c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_10c < 0) {
    uStack_110 = 0x606ace;
    FUN_00878dfb();
  }
  puStack_10c = (undefined4 *)0x3;
  uStack_110 = 0xff;
  iStack_114 = 0x606add;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x508);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  if (iVar3 == 0) {
    puStack_10c = (undefined4 *)0x80004003;
    uStack_110 = 0x606af7;
    FUN_00878dfb();
  }
  uStack_11c = *(undefined4 *)(unaff_EBP + 8);
  iStack_118 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_114 = *(undefined4 *)(unaff_EBP + -0x38);
  pwStack_120 = (wchar_t *)0x13f;
  piStack_128 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x508);
  iVar3 = *piStack_128;
  uStack_110 = *(undefined4 *)(unaff_EBP + -0x34);
  uStack_124 = 0x24;
  *(int **)(unaff_EBP + -0x14) = piStack_128;
  puStack_10c = *(undefined4 **)(unaff_EBP + -0x30);
  puStack_12c = (undefined4 *)0x606b23;
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    puStack_12c = (undefined4 *)&DAT_00963cc8;
    uStack_130 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_138 = 0x606b35;
    iStack_134 = iVar3;
    FUN_00878e09();
  }
  puStack_12c = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_130 = 0x606b42;
  puStack_12c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_12c < 0) {
    uStack_130 = 0x606b4f;
    FUN_00878dfb();
  }
  puStack_12c = &DAT_00980690;
  uStack_130 = 0x606b58;
  FUN_00403191();
  puStack_12c = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  uStack_130 = 0x606b65;
  FUN_00403191();
  puStack_12c = (undefined4 *)0x0;
  uStack_130 = 0;
  iStack_134 = unaff_EBP + -0x2c;
  iStack_138 = unaff_EBP + -0x3c;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_13c;
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_134 = 0x606ba9;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  puStack_12c = (undefined4 *)(unaff_EBP + -0x14);
  uStack_130 = 0x606bb8;
  puStack_12c = (undefined4 *)FUN_0041a581();
  if (((int)puStack_12c < 0) && (puStack_12c != (undefined4 *)0x80004002)) {
    uStack_130 = 0x606bc9;
    FUN_00878dfb();
  }
  puStack_12c = (undefined4 *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  uStack_130 = 0x606bd6;
  puStack_12c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_12c < 0) {
    uStack_130 = 0x606be1;
    FUN_00878dfb();
  }
  puStack_12c = (undefined4 *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  uStack_130 = 0x606bee;
  puStack_12c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_12c < 0) {
    uStack_130 = 0x606bf9;
    FUN_00878dfb();
  }
  puStack_12c = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_130 = 0x606c06;
  puStack_12c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_12c < 0) {
    uStack_130 = 0x606c11;
    FUN_00878dfb();
  }
  puStack_12c = (undefined4 *)0x3;
  uStack_130 = 0xff;
  iStack_134 = 0x606c20;
  FUN_004031b7();
  iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x508);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (iVar3 == 0) {
    puStack_12c = (undefined4 *)0x80004003;
    uStack_130 = 0x606c3a;
    FUN_00878dfb();
  }
  uStack_13c = *(undefined4 *)(unaff_EBP + 8);
  iStack_138 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_134 = *(undefined4 *)(unaff_EBP + -0x38);
  piVar1 = *(int **)(*(int *)(unaff_EBP + -0x10) + 0x508);
  iVar3 = *piVar1;
  uStack_130 = *(undefined4 *)(unaff_EBP + -0x34);
  *(int **)(unaff_EBP + -0x14) = piVar1;
  puStack_12c = *(undefined4 **)(unaff_EBP + -0x30);
  iVar3 = (**(code **)(iVar3 + 0x80))();
  if (iVar3 < 0) {
    iStack_150 = *(undefined4 *)(unaff_EBP + -0x14);
    iStack_158 = 0x606c78;
    iStack_154 = iVar3;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_150 = 0x606c85;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_150 = 0x606c92;
    FUN_00878dfb();
  }
  iStack_150 = 0x606c9e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_150 = unaff_EBP + -0x3c;
  iStack_154 = 0x606ca8;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_150 = 0x606cb4;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_150 = 0x606cbe;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_150 = unaff_EBP + -0x2c;
  puStack_15c = &DAT_00980690;
  iStack_154 = 0x606cc8;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_150 = 0x606cd4;
    FUN_00878dfb();
    puStack_15c = extraout_ECX_00;
  }
  iStack_150 = 0;
  iStack_154 = unaff_EBP + -0x3c;
  iStack_158 = unaff_EBP + -0x2c;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_15c;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00679e4e(&puStack_15c,0x4e9);
  iVar3 = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_154 = 0x606d1e;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  iStack_150 = 0x606d33;
  iVar3 = FUN_00404b30();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_150 = 0x606d44;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_150 = 0x606d51;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_150 = 0x606d5c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_150 = 0x606d69;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_150 = 0x606d74;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_150 = 0x606d81;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_150 = 0x606d8c;
    FUN_00878dfb();
  }
  iStack_150 = 0x606d92;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iStack_150 = unaff_EBP + -0x2c;
  iStack_154 = 0x606d9c;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_150 = 0x606da8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iStack_150 = 0x606db2;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_150 = unaff_EBP + -0x3c;
  puVar6 = &DAT_00980690;
  iStack_154 = 0x606dbc;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_150 = 0x606dc8;
    FUN_00878dfb();
    puVar6 = extraout_ECX_01;
  }
  iStack_150 = 0;
  iStack_154 = unaff_EBP + -0x2c;
  iStack_158 = unaff_EBP + -0x3c;
  *(undefined4 ***)(unaff_EBP + -0x1c) = &puStack_15c;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  puStack_15c = puVar6;
  FUN_004033a1(u_UI_UIWindow_img_Delivery_tax_00967ed0);
  iVar3 = unaff_EBP + -0x7c;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  FUN_00405a1d(iVar3);
  FUN_00402660();
  FUN_00404a02(iVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  iStack_154 = 0x606e0c;
  uVar5 = FUN_004032b4();
  uVar4 = *(undefined4 *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
  iStack_150 = 0x606e21;
  iVar3 = FUN_0041a581();
  if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
    iStack_150 = 0x606e32;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  iStack_150 = 0x606e3f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_150 = 0x606e4a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  iStack_150 = 0x606e57;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_150 = 0x606e62;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_150 = 0x606e6f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_150 = 0x606e7a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_150 = 0x606e8b;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


