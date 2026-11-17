/* FUN_006e1e21 - 0x006e1e21 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e1e21(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_128;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 *puStack_118;
  int *piStack_114;
  undefined4 uStack_110;
  wchar_t *pwStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 *puStack_f8;
  int *piStack_f4;
  undefined4 uStack_f0;
  wchar_t *pwStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  int iStack_e0;
  int *piStack_dc;
  undefined4 *puStack_d8;
  int *piStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined *puStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int *piStack_98;
  undefined4 *puStack_94;
  
  FUN_00879bb8();
  puStack_94 = (undefined4 *)0x3af;
  piStack_98 = (int *)(unaff_EBP + -0x10);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  uStack_9c = 0x6e1e4c;
  puVar3 = (undefined4 *)FUN_00679d86();
  uStack_9c = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_94 = (undefined4 *)0x0;
  piVar1 = (int *)(extraout_ECX + 0x60);
  uStack_a0 = 0x6e1e5e;
  piStack_98 = piVar1;
  FUN_0040381b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_94 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
    piStack_98 = (int *)0x6e1e75;
    FUN_00403384();
  }
  puStack_94 = &DAT_00980690;
  piStack_98 = (int *)0x6e1e84;
  FUN_00403191();
  puStack_94 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  piStack_98 = (int *)0x6e1e94;
  FUN_00403191();
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar4 == 0) {
    puStack_94 = (undefined4 *)0x80004003;
    piStack_98 = (int *)0x6e1ea7;
    FUN_00878dfb();
  }
  piStack_bc = (int *)*piVar1;
  uStack_b4 = *(undefined4 *)(extraout_ECX + 0x20);
  uStack_a0 = *(undefined4 *)(unaff_EBP + -0x70);
  uStack_9c = *(undefined4 *)(unaff_EBP + -0x6c);
  piStack_98 = *(int **)(unaff_EBP + -0x68);
  puStack_94 = *(undefined4 **)(unaff_EBP + -100);
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x60);
  uStack_ac = *(undefined4 *)(unaff_EBP + -0x5c);
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0x1c);
  uStack_b8 = *(undefined4 *)(unaff_EBP + -0x10);
  iVar4 = *piStack_bc;
  uStack_a8 = *(undefined4 *)(unaff_EBP + -0x58);
  *(int **)(unaff_EBP + -0x1c) = piStack_bc;
  uStack_a4 = *(undefined4 *)(unaff_EBP + -0x54);
  puStack_c0 = (undefined *)0x6e1ed7;
  iVar4 = (**(code **)(iVar4 + 0x2c))();
  if (iVar4 < 0) {
    puStack_c0 = &DAT_00963cc8;
    uStack_c4 = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_cc = 0x6e1ee9;
    iStack_c8 = iVar4;
    FUN_00878e09();
  }
  puStack_c0 = (undefined *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_c4 = 0x6e1ef6;
  puStack_c0 = (undefined *)FUN_00402bc3();
  if ((int)puStack_c0 < 0) {
    uStack_c4 = 0x6e1f01;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_c0 = (undefined *)(unaff_EBP + -0x70);
  uStack_c4 = 0x6e1f0e;
  puStack_c0 = (undefined *)FUN_00402bc3();
  if ((int)puStack_c0 < 0) {
    uStack_c4 = 0x6e1f19;
    FUN_00878dfb();
  }
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x18) + 0x60);
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x60) == 0) {
    puStack_c0 = (undefined *)0x80004003;
    uStack_c4 = 0x6e1f2f;
    FUN_00878dfb();
  }
  uStack_c4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x20);
  iStack_c8 = *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x1c);
  piVar2 = (int *)*piVar1;
  puStack_c0 = (undefined *)0xffffff;
  uStack_cc = 0;
  uStack_d0 = 0;
  puStack_d8 = (undefined4 *)0x6e1f4e;
  piStack_d4 = piVar2;
  iVar4 = (**(code **)(*piVar2 + 0x8c))();
  if (iVar4 < 0) {
    puStack_d8 = (undefined4 *)&DAT_00963cc8;
    iStack_e4 = 0x6e1f5e;
    iStack_e0 = iVar4;
    piStack_dc = piVar2;
    FUN_00878e09();
  }
  puStack_d8 = &DAT_00980690;
  piStack_dc = (int *)0x6e1f67;
  FUN_00403191();
  puStack_d8 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  piStack_dc = (int *)0x6e1f77;
  FUN_00403191();
  puStack_d8 = (undefined4 *)0x0;
  piStack_dc = (int *)0x0;
  iStack_e0 = unaff_EBP + -0x60;
  iStack_e4 = unaff_EBP + -0x70;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_e8;
  pwStack_ec = u_UI_UIWindow_img_MonsterBook_Cont_0096afc0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_f0 = 0x6e1f97;
  FUN_004033a1();
  pwStack_ec = (wchar_t *)(unaff_EBP + -0x90);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_f0 = 0x6e1fa7;
  FUN_00405a1d();
  uStack_f0 = 0x6e1fae;
  FUN_00402660();
  uStack_f0 = 0x6e1fb5;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_e0 = 0x6e1fc0;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar4 != 0) {
    puStack_d8 = (undefined4 *)(unaff_EBP + -0x1c);
    piStack_dc = (int *)0x6e1fd6;
    puStack_d8 = (undefined4 *)FUN_0041a581();
    if (((int)puStack_d8 < 0) && (puStack_d8 != (undefined4 *)0x80004002)) {
      piStack_dc = (int *)0x6e1fe7;
      FUN_00878dfb();
    }
  }
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x90);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_dc = (int *)0x6e1ff7;
  puStack_d8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d8 < 0) {
    piStack_dc = (int *)0x6e2002;
    FUN_00878dfb();
  }
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x70);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_dc = (int *)0x6e200f;
  puStack_d8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d8 < 0) {
    piStack_dc = (int *)0x6e201a;
    FUN_00878dfb();
  }
  puStack_d8 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_dc = (int *)0x6e2027;
  puStack_d8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_d8 < 0) {
    piStack_dc = (int *)0x6e2032;
    FUN_00878dfb();
  }
  puStack_d8 = (undefined4 *)0x3;
  piStack_dc = (int *)0xff;
  iStack_e0 = 0x6e2041;
  FUN_004031b7();
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar4 == 0) {
    puStack_d8 = (undefined4 *)0x80004003;
    piStack_dc = (int *)0x6e2053;
    FUN_00878dfb();
  }
  piStack_f4 = (int *)*piVar1;
  iVar4 = *piStack_f4;
  uStack_e8 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_e4 = *(undefined4 *)(unaff_EBP + -0x50);
  iStack_e0 = *(undefined4 *)(unaff_EBP + -0x4c);
  piStack_dc = *(int **)(unaff_EBP + -0x48);
  puStack_d8 = *(undefined4 **)(unaff_EBP + -0x44);
  pwStack_ec = (wchar_t *)0x0;
  uStack_f0 = 0;
  *(int **)(unaff_EBP + -0x10) = piStack_f4;
  puStack_f8 = (undefined4 *)0x6e2074;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_f8 = (undefined4 *)&DAT_00963cc8;
    uStack_fc = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_104 = 0x6e2086;
    iStack_100 = iVar4;
    FUN_00878e09();
  }
  puStack_f8 = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_fc = 0x6e2093;
  puStack_f8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_f8 < 0) {
    uStack_fc = 0x6e209e;
    FUN_00878dfb();
  }
  puStack_f8 = &DAT_00980690;
  uStack_fc = 0x6e20a7;
  FUN_00403191();
  puStack_f8 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_fc = 0x6e20b4;
  FUN_00403191();
  puStack_f8 = (undefined4 *)0x0;
  uStack_fc = 0;
  iStack_100 = unaff_EBP + -0x30;
  iStack_104 = unaff_EBP + -0x50;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_108;
  pwStack_10c = u_UI_UIWindow_img_MonsterBook_Cont_0096af6c;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uStack_110 = 0x6e20d2;
  FUN_004033a1();
  pwStack_10c = (wchar_t *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uStack_110 = 0x6e20df;
  FUN_00405a1d();
  uStack_110 = 0x6e20e6;
  FUN_00402660();
  uStack_110 = 0x6e20ed;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iStack_100 = 0x6e20f8;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  puStack_f8 = (undefined4 *)(unaff_EBP + -0x10);
  uStack_fc = 0x6e2107;
  puStack_f8 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_f8 < 0) && (puStack_f8 != (undefined4 *)0x80004002)) {
    uStack_fc = 0x6e2118;
    FUN_00878dfb();
  }
  puStack_f8 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  uStack_fc = 0x6e2125;
  puStack_f8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_f8 < 0) {
    uStack_fc = 0x6e2130;
    FUN_00878dfb();
  }
  puStack_f8 = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  uStack_fc = 0x6e213d;
  puStack_f8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_f8 < 0) {
    uStack_fc = 0x6e2148;
    FUN_00878dfb();
  }
  puStack_f8 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_fc = 0x6e2155;
  puStack_f8 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_f8 < 0) {
    uStack_fc = 0x6e2160;
    FUN_00878dfb();
  }
  puStack_f8 = (undefined4 *)0x3;
  uStack_fc = 0xff;
  iStack_100 = 0x6e216f;
  FUN_004031b7();
  iVar4 = *(int *)(unaff_EBP + -0x18);
  iVar6 = *(int *)(iVar4 + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar6 == 0) {
    puStack_f8 = (undefined4 *)0x80004003;
    uStack_fc = 0x6e2188;
    FUN_00878dfb();
  }
  piStack_114 = *(int **)(iVar4 + 0x60);
  iVar4 = *piStack_114;
  uStack_108 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_104 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_100 = *(undefined4 *)(unaff_EBP + -0x2c);
  pwStack_10c = (wchar_t *)0x13;
  uStack_fc = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_110 = 3;
  *(int **)(unaff_EBP + -0x10) = piStack_114;
  puStack_f8 = *(undefined4 **)(unaff_EBP + -0x24);
  puStack_118 = (undefined4 *)0x6e21a9;
  iVar4 = (**(code **)(iVar4 + 0x80))();
  if (iVar4 < 0) {
    puStack_118 = (undefined4 *)&DAT_00963cc8;
    uStack_11c = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_124 = 0x6e21bd;
    iStack_120 = iVar4;
    FUN_00878e09();
  }
  puStack_118 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_11c = 0x6e21ca;
  puStack_118 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_118 < 0) {
    uStack_11c = 0x6e21d5;
    FUN_00878dfb();
  }
  puStack_118 = &DAT_00980690;
  uStack_11c = 0x6e21de;
  FUN_00403191();
  puStack_118 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_11c = 0x6e21eb;
  FUN_00403191();
  puStack_118 = (undefined4 *)0x0;
  uStack_11c = 0;
  iStack_120 = unaff_EBP + -0x50;
  iStack_124 = unaff_EBP + -0x30;
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_128;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_004033a1(u_UI_UIWindow_img_MonsterBook_Cont_0096af18);
  iVar4 = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_120 = 0x6e222f;
  uVar5 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  puStack_118 = (undefined4 *)(unaff_EBP + -0x10);
  uStack_11c = 0x6e223e;
  puStack_118 = (undefined4 *)FUN_0041a581();
  if (((int)puStack_118 < 0) && (puStack_118 != (undefined4 *)0x80004002)) {
    uStack_11c = 0x6e224f;
    FUN_00878dfb();
  }
  puStack_118 = (undefined4 *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  uStack_11c = 0x6e225c;
  puStack_118 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_118 < 0) {
    uStack_11c = 0x6e2267;
    FUN_00878dfb();
  }
  puStack_118 = (undefined4 *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_11c = 0x6e2274;
  puStack_118 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_118 < 0) {
    uStack_11c = 0x6e227f;
    FUN_00878dfb();
  }
  puStack_118 = (undefined4 *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_11c = 0x6e228c;
  puStack_118 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_118 < 0) {
    uStack_11c = 0x6e2297;
    FUN_00878dfb();
  }
  puStack_118 = (undefined4 *)0x3;
  uStack_11c = 0xff;
  iStack_120 = 0x6e22a6;
  FUN_004031b7();
  iVar4 = *(int *)(unaff_EBP + -0x18);
  iVar6 = *(int *)(iVar4 + 0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (iVar6 == 0) {
    puStack_118 = (undefined4 *)0x80004003;
    uStack_11c = 0x6e22bf;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(iVar4 + 0x60);
  uStack_128 = *(undefined4 *)(unaff_EBP + -0x14);
  iStack_124 = *(undefined4 *)(unaff_EBP + -0x30);
  iStack_120 = *(undefined4 *)(unaff_EBP + -0x2c);
  uStack_11c = *(undefined4 *)(unaff_EBP + -0x28);
  puStack_118 = *(undefined4 **)(unaff_EBP + -0x24);
  iVar4 = (**(code **)(*piVar1 + 0x80))(piVar1,3,0x20);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963cc8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  iVar4 = *(int *)(unaff_EBP + -0x18);
  if (DAT_00978364 != 0) {
    FUN_008180db(-(uint)(iVar4 != 0) & iVar4 + 4U);
  }
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 1;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_004184ca(u_UI_UIWindow_img_MonsterBook_Cont_0096aeb0,0xffffffff);
  iVar6 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar6 = FUN_00450382(uVar5);
  (**(code **)(**(int **)(iVar6 + 4) + 0x20))(iVar4,2000,9,5,1,unaff_EBP + -0x40);
  FUN_004184ca(u_UI_UIWindow_img_MonsterBook_Cont_0096ae4c,0xffffffff);
  iVar6 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (iVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar6 = FUN_00450382(uVar5);
  (**(code **)(**(int **)(iVar6 + 4) + 0x20))(iVar4,0x7d1,9,0x14,1,unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00402676();
  piVar1 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


