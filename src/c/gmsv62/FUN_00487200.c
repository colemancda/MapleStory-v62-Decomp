/* FUN_00487200 - 0x00487200 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00487200(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  DWORD DVar8;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int *piVar9;
  undefined1 *puVar10;
  bool bVar11;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  code *pcStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint uStack_140;
  uint uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 *puStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  int *piStack_e4;
  undefined4 *puStack_e0;
  int *piStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined1 *puStack_c8;
  int *piStack_c4;
  undefined1 *puStack_c0;
  int iStack_bc;
  undefined1 *puStack_b8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x30) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  puStack_b8 = (undefined1 *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_bc = 0x487233;
  puVar1 = (undefined4 *)FUN_00679d86();
  iStack_bc = *puVar1;
  puStack_b8 = (undefined1 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_c0 = (undefined1 *)0x487244;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_b8 = (undefined1 *)0x48725a;
    FUN_00403384();
  }
  puStack_b8 = (undefined1 *)(unaff_EBP + -0x10);
  iStack_bc = 0x48726b;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_b8 = (undefined1 *)0x48727b;
  FUN_0044f5f6();
  puStack_b8 = (undefined1 *)0xffffffff;
  iStack_bc = 0xb;
  puStack_c8 = (undefined1 *)&puStack_c0;
  *(undefined1 ***)(unaff_EBP + -0x54) = &puStack_c0;
  piStack_c4 = (int *)0xa;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_cc = 0x48729a;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_c4 = (int *)0x4872a6;
  FUN_0044974c();
  piStack_c4 = (int *)0x4872ad;
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_b8 = (undefined1 *)0x4872bd;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_b8 = (undefined1 *)0x4872c8;
    FUN_00878dfb();
  }
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  puStack_b8 = (undefined1 *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_bc = 0x4872e7;
  puVar1 = (undefined4 *)FUN_00679d86();
  puStack_b8 = (undefined1 *)*puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_bc = unaff_EBP + -0x50;
  puStack_c0 = (undefined1 *)0x4872fa;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_b8 = (undefined1 *)0x487311;
    FUN_00403384();
  }
  puStack_b8 = (undefined1 *)0x487323;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_b8 = (undefined1 *)0x487333;
  FUN_00403191();
  puStack_b8 = (undefined1 *)0x0;
  iStack_bc = unaff_EBP + -0xa0;
  puStack_c0 = (undefined1 *)(unaff_EBP + -0x90);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_c4 = (int *)0x48734f;
  puStack_c8 = (undefined1 *)FUN_00411641();
  *(int ***)(unaff_EBP + 0xc) = &piStack_c4;
  iStack_cc = 0x48735b;
  FUN_004033a1();
  puStack_c8 = (undefined1 *)(unaff_EBP + -0xb0);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_cc = 0x48736b;
  FUN_00405a1d();
  iStack_cc = 0x487372;
  FUN_00402660();
  iStack_cc = 0x487379;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_bc = 0x487384;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x70) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  if (iVar2 != 0) {
    puStack_b8 = (undefined1 *)0x48739a;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      puStack_b8 = (undefined1 *)0x4873ab;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_b8 = (undefined1 *)0x4873bb;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_b8 = (undefined1 *)0x4873c6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_b8 = (undefined1 *)0x4873d6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_b8 = (undefined1 *)0x4873e1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_b8 = (undefined1 *)0x4873f1;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_b8 = (undefined1 *)0x4873fc;
    FUN_00878dfb();
  }
  puStack_b8 = &LAB_00450362;
  iStack_bc = 3;
  puStack_c0 = (undefined1 *)0x4;
  piStack_c4 = (int *)(unaff_EBP + -0x20);
  puStack_c8 = (undefined1 *)0x487413;
  FUN_0087b2f0();
  puStack_c0 = (undefined1 *)&puStack_b8;
  *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_b8;
  iStack_bc = 0x3cb;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_c4 = (int *)0x48742b;
  FUN_00679e4e();
  iStack_bc = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_c0 = (undefined1 *)0x48743b;
  FUN_0040263d();
  puStack_c0 = (undefined1 *)0x487442;
  puStack_b8 = (undefined1 *)FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_bc = 0x48744c;
  uVar3 = FUN_00412550();
  *(undefined4 *)(unaff_EBP + -0x6c) = uVar3;
  iStack_bc = unaff_EBP + -0x80;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_c0 = (undefined1 *)0x48745c;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_b8 = (undefined1 *)0x487469;
    FUN_00878dfb();
  }
  puVar10 = (undefined1 *)0x0;
  do {
    FUN_0087a1b0();
    iStack_bc = 0x48747f;
    puStack_b8 = puVar10;
    puStack_b8 = (undefined1 *)FUN_00412335();
    *(undefined1 **)(unaff_EBP + -0x54) = &stack0xffffff4c;
    iStack_bc = 0x48748d;
    FUN_00402e8e();
    puStack_b8 = (undefined1 *)(unaff_EBP + -0x80);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_bc = 0x48749d;
    FUN_0040263d();
    iStack_bc = 0x4874a4;
    FUN_004048a4();
    puStack_b8 = (undefined1 *)(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_bc = 0x4874b2;
    FUN_00412348();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_b8 = (undefined1 *)0x4874c0;
    iVar2 = FUN_0041a485();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      puStack_b8 = (undefined1 *)0x4874d1;
      FUN_00878dfb();
    }
    FUN_004027b3();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_b8 = (undefined1 *)0x4874e6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      puStack_b8 = (undefined1 *)0x4874f1;
      FUN_00878dfb();
    }
    puVar10 = puVar10 + 1;
  } while ((int)puVar10 < 3);
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_b8 = (undefined1 *)0x48750d;
    FUN_00878dfb();
  }
  iVar4 = FUN_0040e48b();
  iVar2 = 1;
  if (1 < iVar4 / 3) {
    iVar2 = iVar4 / 3;
  }
  *(int *)(unaff_EBP + -0x4c) = iVar2;
  puStack_b8 = (undefined1 *)0x487534;
  FUN_00403191();
  *(undefined1 ***)(unaff_EBP + 0xc) = &puStack_b8;
  iStack_bc = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  puStack_c0 = (undefined1 *)0x48754a;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_bc = 0x487556;
  FUN_0044974c();
  iStack_bc = 0x48755d;
  iVar4 = FUN_00448ebb();
  *(int *)(unaff_EBP + -0x54) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b8 = (undefined1 *)0x48756f;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_b8 = (undefined1 *)0x48757a;
    FUN_00878dfb();
  }
  iVar4 = (iVar4 + -1 + iVar2) / iVar2;
  *(int *)(unaff_EBP + -0x24) = iVar4;
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    puStack_b8 = (undefined1 *)0x487595;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    puStack_b8 = (undefined1 *)0x4875a4;
    FUN_00878dfb();
  }
  iVar4 = iVar4 * iVar2;
  *(int *)(unaff_EBP + -0x68) = iVar4;
  uVar6 = FUN_0040e48b();
  uVar7 = FUN_0040e48b();
  *(uint *)(unaff_EBP + 0xc) = uVar6 >> 1;
  piVar9 = (int *)((uVar7 >> 1) + iVar4 + *(int *)(unaff_EBP + 0xc));
  *(int **)(unaff_EBP + -0x28) = piVar9;
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    puStack_b8 = (undefined1 *)0x4875de;
    FUN_00878dfb();
  }
  uVar6 = FUN_0040e53d();
  *(undefined1 **)(unaff_EBP + -0x34) = (undefined1 *)(uVar6 >> 1);
  puStack_b8 = (undefined1 *)0x4875fa;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_b8 = (undefined1 *)0x48760b;
  FUN_00403191();
  bVar11 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (bVar11) {
    puStack_b8 = (undefined1 *)0x487621;
    FUN_00878dfb();
  }
  puStack_b8 = (undefined1 *)(unaff_EBP + -0x48);
  iStack_bc = 0xc00616fc;
  puStack_c8 = (undefined1 *)0x32;
  iStack_cc = (0xd4 - (int)piVar9) / 2 + 0x1f;
  iStack_d0 = unaff_EBP + 0xc;
  uStack_d4 = 0x487651;
  piStack_c4 = piVar9;
  puStack_c0 = (undefined1 *)(uVar6 >> 1);
  puVar1 = (undefined4 *)FUN_0042a39f();
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x30) + 0x3ec);
  puStack_b8 = (undefined1 *)0x487663;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar1);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_b8 = (undefined1 *)0x487678;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_b8 = (undefined1 *)0x487683;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_b8 = (undefined1 *)0x487690;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    puStack_b8 = (undefined1 *)0x48769b;
    FUN_00878dfb();
  }
  puStack_b8 = (undefined1 *)0x4876aa;
  puVar1 = (undefined4 *)FUN_00485656();
  puStack_b8 = (undefined1 *)*puVar1;
  iStack_bc = 0x4876b7;
  FUN_0040ee87();
  iVar2 = *(int *)this;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar2 == 0) {
    puStack_b8 = (undefined1 *)0x4876c9;
    FUN_00878dfb();
  }
  puStack_c0 = *(undefined1 **)(unaff_EBP + -100);
  iStack_bc = *(undefined4 *)(unaff_EBP + -0x60);
  piStack_c4 = *(int **)(*(int *)(unaff_EBP + -0x30) + 0x3ec);
  iVar2 = *piStack_c4;
  puStack_b8 = *(undefined1 **)(unaff_EBP + -0x5c);
  *(int **)(unaff_EBP + 0xc) = piStack_c4;
  puStack_c8 = (undefined1 *)0x4876e8;
  iVar2 = (**(code **)(iVar2 + 100))();
  if (iVar2 < 0) {
    puStack_c8 = &DAT_00963de8;
    iStack_cc = *(undefined4 *)(unaff_EBP + 0xc);
    uStack_d4 = 0x4876fa;
    iStack_d0 = iVar2;
    FUN_00878e09();
  }
  puStack_c8 = (undefined1 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_cc = 0x487707;
  puStack_c8 = (undefined1 *)FUN_00402bc3();
  if ((int)puStack_c8 < 0) {
    iStack_cc = 0x487712;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  puStack_c8 = (undefined1 *)0x48771e;
  FUN_004125d9();
  puStack_c8 = (undefined1 *)0x3;
  iStack_cc = 0;
  iStack_d0 = 0x487729;
  FUN_004031b7();
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x30) + 0x3ec);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (iVar2 == 0) {
    puStack_c8 = (undefined1 *)0x80004003;
    iStack_cc = 0x487749;
    FUN_00878dfb();
  }
  puStack_c8 = (undefined1 *)(unaff_EBP + -100);
  iStack_cc = unaff_EBP + -0x14;
  iStack_d0 = 0x487758;
  FUN_00425067();
  puStack_c8 = (undefined1 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_cc = 0x487765;
  puStack_c8 = (undefined1 *)FUN_00402bc3();
  if ((int)puStack_c8 < 0) {
    iStack_cc = 0x487770;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_c8 = (undefined1 *)0x80004003;
    iStack_cc = 0x48777b;
    FUN_00878dfb();
  }
  piVar9 = *(int **)(unaff_EBP + -0x14);
  puStack_c8 = (undefined1 *)0xffffff;
  iStack_cc = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_d0 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_d4 = 0;
  uStack_d8 = 0;
  puStack_e0 = (undefined4 *)0x487794;
  piStack_dc = piVar9;
  iVar2 = (**(code **)(*piVar9 + 0x8c))();
  if (iVar2 < 0) {
    puStack_e0 = (undefined4 *)&DAT_00963cc8;
    uStack_ec = 0x4877a4;
    iStack_e8 = iVar2;
    piStack_e4 = piVar9;
    FUN_00878e09();
  }
  puStack_e0 = &DAT_00980690;
  piStack_e4 = (int *)0x4877b1;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    puStack_e0 = (undefined4 *)0x80004003;
    piStack_e4 = (int *)0x4877c0;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x20) == 0) {
      puStack_e0 = (undefined4 *)0x80004003;
      piStack_e4 = (int *)0x4877cb;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x20);
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_e0 = (undefined4 *)0x80004003;
    piStack_e4 = (int *)0x4877dc;
    FUN_00878dfb();
  }
  piVar9 = *(int **)(unaff_EBP + -0x14);
  *(int **)(unaff_EBP + 0xc) = piVar9;
  puStack_e0 = (undefined4 *)0x4877ea;
  uVar6 = FUN_0040e53d();
  *(uint *)(unaff_EBP + -0x28) = uVar6 >> 1;
  puStack_e0 = (undefined4 *)0x4877f6;
  uStack_104 = FUN_0040e48b();
  uStack_f0 = 0;
  uStack_f4 = 0;
  uStack_f8 = 0;
  uStack_fc = 0;
  uStack_100 = *(undefined4 *)(unaff_EBP + -0x28);
  uStack_ec = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_104 = uStack_104 >> 1;
  uStack_108 = 0xc0;
  uStack_10c = *(undefined4 *)(unaff_EBP + -0x10);
  iStack_e8 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_110 = 0;
  piStack_e4 = *(int **)(unaff_EBP + -0x40);
  uStack_114 = 0;
  uStack_118 = *(undefined4 *)(unaff_EBP + 0xc);
  puStack_e0 = *(undefined4 **)(unaff_EBP + -0x3c);
  puStack_11c = (undefined4 *)0x487821;
  iVar2 = (**(code **)(*piVar9 + 0x84))();
  if (iVar2 < 0) {
    puStack_11c = (undefined4 *)&DAT_00963cc8;
    uStack_120 = *(undefined4 *)(unaff_EBP + 0xc);
    uStack_128 = 0x487833;
    iStack_124 = iVar2;
    FUN_00878e09();
  }
  puStack_11c = (undefined4 *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  uStack_120 = 0x487840;
  puStack_11c = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_11c < 0) {
    uStack_120 = 0x48784b;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    puStack_11c = (undefined4 *)0x80004003;
    uStack_120 = 0x48785b;
    FUN_00878dfb();
  }
  puStack_11c = (undefined4 *)0x487863;
  uVar6 = FUN_0040e48b();
  *(uint *)(unaff_EBP + 0xc) = uVar6 >> 1;
  if (0 < *(int *)(unaff_EBP + -0x24)) {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x24);
    do {
      puStack_11c = &DAT_00980690;
      uStack_120 = 0x487883;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        puStack_11c = (undefined4 *)0x80004003;
        uStack_120 = 0x487892;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x1c);
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        puStack_11c = (undefined4 *)0x80004003;
        uStack_120 = 0x4878a3;
        FUN_00878dfb();
      }
      piVar9 = *(int **)(unaff_EBP + -0x14);
      *(int **)(unaff_EBP + -0x34) = piVar9;
      puStack_11c = (undefined4 *)0x4878b1;
      uStack_13c = FUN_0040e53d();
      uStack_12c = 0;
      uStack_130 = 0;
      uStack_134 = 0;
      uStack_138 = 0;
      uStack_13c = uStack_13c >> 1;
      uStack_140 = *(undefined4 *)(unaff_EBP + -0x4c);
      uStack_128 = *(undefined4 *)(unaff_EBP + -0x48);
      uStack_144 = 0xc0;
      uStack_148 = *(undefined4 *)(unaff_EBP + -0x24);
      iStack_124 = *(int *)(unaff_EBP + -0x44);
      uStack_14c = 0;
      uStack_150 = *(undefined4 *)(unaff_EBP + 0xc);
      uStack_120 = *(undefined4 *)(unaff_EBP + -0x40);
      uStack_154 = *(undefined4 *)(unaff_EBP + -0x34);
      puStack_11c = *(undefined4 **)(unaff_EBP + -0x3c);
      pcStack_158 = (code *)0x4878de;
      iVar2 = (**(code **)(*piVar9 + 0x84))();
      if (iVar2 < 0) {
        puStack_11c = (undefined4 *)&DAT_00963cc8;
        uStack_120 = *(undefined4 *)(unaff_EBP + -0x34);
        uStack_128 = 0x4878f0;
        iStack_124 = iVar2;
        FUN_00878e09();
      }
      puStack_11c = (undefined4 *)(unaff_EBP + -0x48);
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      uStack_120 = 0x4878fd;
      puStack_11c = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_11c < 0) {
        uStack_120 = 0x487908;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + *(int *)(unaff_EBP + -0x4c);
      piVar9 = (int *)(unaff_EBP + -0x10);
      *piVar9 = *piVar9 + -1;
    } while (*piVar9 != 0);
  }
  puStack_11c = &DAT_00980690;
  uStack_120 = 0x487929;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    puStack_11c = (undefined4 *)0x80004003;
    uStack_120 = 0x487938;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      puStack_11c = (undefined4 *)0x80004003;
      uStack_120 = 0x487943;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x18);
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    puStack_11c = (undefined4 *)0x80004003;
    uStack_120 = 0x487954;
    FUN_00878dfb();
  }
  piVar9 = *(int **)(unaff_EBP + -0x14);
  *(int **)(unaff_EBP + -0x10) = piVar9;
  puStack_11c = (undefined4 *)0x487962;
  uVar6 = FUN_0040e53d();
  *(uint *)(unaff_EBP + -0x24) = uVar6 >> 1;
  puStack_11c = (undefined4 *)0x48796e;
  uStack_140 = FUN_0040e48b();
  uStack_12c = 0;
  uStack_130 = 0;
  uStack_134 = 0;
  uStack_138 = 0;
  uStack_13c = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_140 = uStack_140 >> 1;
  uStack_128 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_144 = 0xc0;
  uStack_148 = *(undefined4 *)(unaff_EBP + -0x28);
  iStack_124 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_14c = 0;
  uStack_150 = *(undefined4 *)(unaff_EBP + 0xc);
  uStack_120 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_154 = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_11c = *(undefined4 **)(unaff_EBP + -0x3c);
  pcStack_158 = (code *)0x48799b;
  iVar2 = (**(code **)(*piVar9 + 0x84))();
  if (iVar2 < 0) {
    pcStack_158 = (code *)&DAT_00963cc8;
    iStack_15c = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_164 = 0x4879ad;
    iStack_160 = iVar2;
    FUN_00878e09();
  }
  pcStack_158 = (code *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_15c = 0x4879ba;
  pcStack_158 = (code *)FUN_00402bc3();
  if ((int)pcStack_158 < 0) {
    iStack_15c = 0x4879c5;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    pcStack_158 = (code *)0x80004003;
    iStack_15c = 0x4879d4;
    FUN_00878dfb();
  }
  pcStack_158 = (code *)0x4879dc;
  FUN_0040e48b();
  pcStack_158 = (code *)&DAT_00980690;
  iStack_15c = 0x4879ea;
  FUN_00403191();
  pcStack_158 = (code *)&DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_15c = 0x4879f7;
  FUN_00403191();
  pcStack_158 = (code *)(unaff_EBP + -0x80);
  iStack_15c = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_160 = 0x487a0b;
  iStack_160 = FUN_00449749();
  *(int **)(unaff_EBP + 0xc) = &iStack_164;
  FUN_00448a17(*(undefined4 *)(unaff_EBP + 8));
  iVar2 = *(int *)(unaff_EBP + -0x6c) / 2;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_004115d9(iVar2);
  uVar6 = FUN_0040e48b();
  iVar4 = (uVar6 >> 1) + (*(int *)(unaff_EBP + -0x68) - *(int *)(unaff_EBP + -0x54)) / 3;
  FUN_004115d9(iVar4);
  FUN_00448e3a(iVar4,iVar2);
  pcStack_158 = (code *)(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_15c = 0x487a65;
  pcStack_158 = (code *)FUN_00402bc3();
  if ((int)pcStack_158 < 0) {
    iStack_15c = 0x487a70;
    FUN_00878dfb();
  }
  pcStack_158 = (code *)(unaff_EBP + -0x80);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iStack_15c = 0x487a7d;
  pcStack_158 = (code *)FUN_00402bc3();
  if ((int)pcStack_158 < 0) {
    iStack_15c = 0x487a88;
    FUN_00878dfb();
  }
  iVar2 = *(int *)(unaff_EBP + -0x30);
  if (*(int *)(iVar2 + 0x3ec) == 0) {
    pcStack_158 = (code *)0x80004003;
    iStack_15c = 0x487aa3;
    FUN_00878dfb();
  }
  pcStack_158 = (code *)0xffffffff;
  iStack_15c = 0x487aac;
  FUN_00444e05();
  pcStack_158 = (code *)0x487ab2;
  DVar8 = timeGetTime();
  *(DWORD *)(iVar2 + 0x404) = DVar8;
  pcStack_158 = (code *)0x487ac0;
  FUN_004125e6();
  pcStack_158 = FUN_004115cc;
  iStack_15c = 3;
  iStack_160 = 4;
  iStack_164 = unaff_EBP + -0x20;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0087a0b8();
  pcStack_158 = (code *)0x487ade;
  FUN_004027eb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  pcStack_158 = (code *)0x487ae9;
  FUN_00402676();
  pcStack_158 = (code *)0x487af1;
  FUN_004497b5();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


