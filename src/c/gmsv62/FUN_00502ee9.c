/* FUN_00502ee9 - 0x00502ee9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00502ee9(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var7;
  bool bVar8;
  undefined4 uStack_150;
  int iStack_14c;
  int iStack_148;
  int *piStack_144;
  undefined4 *puStack_140;
  int *piStack_13c;
  undefined *puStack_138;
  int *piStack_134;
  undefined *puStack_130;
  int *piStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int iStack_10c;
  int iStack_108;
  undefined4 *puStack_104;
  int *piStack_100;
  int iStack_fc;
  int iStack_f8;
  int *piStack_f4;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004e5f8c();
  p_Var7 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x72c);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var7,(IBinding *)0x0);
  FUN_00679d86();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0040381b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00403384();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00403191();
  iVar4 = *(int *)p_Var7;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  iVar4 = **(int **)p_Var7;
  *(int **)(unaff_EBP + 8) = *(int **)p_Var7;
  iVar4 = (**(code **)(iVar4 + 0x2c))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  iVar4 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x72c);
  puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x72c);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar5;
  if (iVar4 == 0) {
    FUN_00878dfb();
  }
  piVar1 = (int *)*puVar5;
  iVar4 = (**(code **)(*piVar1 + 0x8c))();
  if (iVar4 < 0) {
    iStack_fc = 0x50303a;
    iStack_f8 = iVar4;
    piStack_f4 = piVar1;
    FUN_00878e09();
  }
  piStack_f4 = (int *)0x503043;
  FUN_00403191();
  piStack_f4 = (int *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  iStack_f8 = 0x503053;
  FUN_004031b7();
  bVar8 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (bVar8) {
    piStack_f4 = (int *)0x503069;
    FUN_00878dfb();
  }
  piStack_f4 = (int *)(unaff_EBP + -0x54);
  iStack_f8 = 0;
  iStack_fc = 0;
  piStack_100 = (int *)0x0;
  puStack_104 = (undefined4 *)0x0;
  iStack_108 = 0;
  iStack_10c = unaff_EBP + 8;
  uStack_110 = 0x503085;
  puVar5 = (undefined4 *)FUN_0042a39f();
  p_Var7 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x10) + 0x728);
  piStack_f4 = (int *)0x503097;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var7,(IBinding *)*puVar5);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_f4 = (int *)0x5030ac;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_f4 = (int *)0x5030b7;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_f4 = (int *)0x5030c4;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_f4 = (int *)0x5030cf;
    FUN_00878dfb();
  }
  piStack_f4 = (int *)0x5030d8;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 5;
  piStack_f4 = (int *)0x5030e8;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_f4 = (int *)0x5030f5;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_f4 = (int *)0x503102;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_f4 = (int *)0x50310f;
  FUN_00403191();
  iVar4 = *(int *)p_Var7;
  uVar6 = **(undefined4 **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *(undefined4 *)(unaff_EBP + 8) = uVar6;
  if (iVar4 == 0) {
    piStack_f4 = (int *)0x503129;
    FUN_00878dfb();
  }
  piStack_f4 = (int *)(unaff_EBP + -0x44);
  iStack_f8 = unaff_EBP + -0x68;
  iStack_fc = unaff_EBP + -0x34;
  piStack_100 = (int *)(unaff_EBP + -0x54);
  puStack_104 = *(undefined4 **)(unaff_EBP + 8);
  iStack_108 = unaff_EBP + -0x98;
  iStack_10c = 0x50314e;
  FUN_004250ac();
  piStack_f4 = (int *)0x50315a;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_f4 = (int *)0x503165;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_f4 = (int *)0x503172;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_f4 = (int *)0x50317d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_f4 = (int *)0x50318a;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_f4 = (int *)0x503195;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_f4 = (int *)0x5031a2;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_f4 = (int *)0x5031ad;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_f4 = (int *)0x5031ba;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_f4 = (int *)0x5031c5;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_f4 = (int *)0x5031d2;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_f4 = (int *)0x5031dd;
    FUN_00878dfb();
  }
  if (DAT_0097c1ac == 0) {
    piStack_f4 = (int *)0x5031ef;
    FUN_00878dfb();
  }
  piStack_f4 = (int *)0x5031fe;
  puVar5 = (undefined4 *)FUN_00429328();
  piStack_f4 = (int *)*puVar5;
  *(undefined4 *)(unaff_EBP + -4) = 10;
  iStack_f8 = 0x503212;
  FUN_0040ee87();
  iVar4 = *(int *)p_Var7;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar4 == 0) {
    piStack_f4 = (int *)0x503224;
    FUN_00878dfb();
  }
  piStack_100 = *(int **)p_Var7;
  iVar4 = *piStack_100;
  iStack_fc = *(undefined4 *)(unaff_EBP + -0x24);
  iStack_f8 = *(undefined4 *)(unaff_EBP + -0x20);
  piStack_f4 = *(int **)(unaff_EBP + -0x1c);
  *(int **)(unaff_EBP + 8) = piStack_100;
  puStack_104 = (undefined4 *)0x50323b;
  iVar4 = (**(code **)(iVar4 + 100))();
  if (iVar4 < 0) {
    puStack_104 = (undefined4 *)&DAT_00963de8;
    iStack_108 = *(undefined4 *)(unaff_EBP + 8);
    uStack_110 = 0x50324d;
    iStack_10c = iVar4;
    FUN_00878e09();
  }
  puStack_104 = (undefined4 *)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_108 = 0x50325a;
  puStack_104 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_104 < 0) {
    iStack_108 = 0x503265;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_104 = (undefined4 *)0x503271;
  FUN_004125d9();
  puStack_104 = &DAT_00980690;
  iStack_108 = 0x50327a;
  FUN_00403191();
  puStack_104 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  iStack_108 = 0x50328a;
  FUN_00403191();
  iVar4 = *(int *)(unaff_EBP + -0x10);
  iVar2 = *(int *)(iVar4 + 0x728);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar2 == 0) {
    puStack_104 = (undefined4 *)0x80004003;
    iStack_108 = 0x5032aa;
    FUN_00878dfb();
  }
  piStack_12c = *(int **)(iVar4 + 0x728);
  uStack_110 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_10c = *(undefined4 *)(unaff_EBP + -0x40);
  iVar4 = *piStack_12c;
  iStack_108 = *(undefined4 *)(unaff_EBP + -0x3c);
  puStack_104 = *(undefined4 **)(unaff_EBP + -0x38);
  uStack_120 = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_11c = *(undefined4 *)(unaff_EBP + -0x20);
  uStack_124 = 0xfffffed4;
  uStack_118 = *(undefined4 *)(unaff_EBP + -0x1c);
  uStack_128 = 0xfffffe70;
  *(int **)(unaff_EBP + 8) = piStack_12c;
  uStack_114 = *(undefined4 *)(unaff_EBP + -0x18);
  puStack_130 = (undefined *)0x5032da;
  iVar4 = (**(code **)(iVar4 + 0x90))();
  if (iVar4 < 0) {
    puStack_130 = &DAT_00963de8;
    piStack_134 = *(int **)(unaff_EBP + 8);
    piStack_13c = (int *)0x5032ec;
    puStack_138 = (undefined *)iVar4;
    FUN_00878e09();
  }
  puStack_130 = (undefined *)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  piStack_134 = (int *)0x5032f9;
  puStack_130 = (undefined *)FUN_00402bc3();
  if ((int)puStack_130 < 0) {
    piStack_134 = (int *)0x503304;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_130 = (undefined *)(unaff_EBP + -0x44);
  piStack_134 = (int *)0x503311;
  puStack_130 = (undefined *)FUN_00402bc3();
  if ((int)puStack_130 < 0) {
    piStack_134 = (int *)0x50331c;
    FUN_00878dfb();
  }
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x728);
  if (*(int *)(*(int *)(unaff_EBP + -0x10) + 0x728) == 0) {
    puStack_130 = (undefined *)0x80004003;
    piStack_134 = (int *)0x503338;
    FUN_00878dfb();
  }
  piVar3 = (int *)*piVar1;
  puStack_130 = (undefined *)0xc006153a;
  puStack_138 = (undefined *)0x503348;
  piStack_134 = piVar3;
  iVar4 = (**(code **)(*piVar3 + 0xb4))();
  if (iVar4 < 0) {
    puStack_138 = &DAT_00963df8;
    piStack_144 = (int *)0x503358;
    puStack_140 = (undefined4 *)iVar4;
    piStack_13c = piVar3;
    FUN_00878e09();
  }
  if (*piVar1 == 0) {
    puStack_138 = (undefined *)0x80004003;
    piStack_13c = (int *)0x503367;
    FUN_00878dfb();
  }
  piVar1 = (int *)*piVar1;
  puStack_138 = (undefined *)0xffffffff;
  puStack_140 = (undefined4 *)0x503374;
  piStack_13c = piVar1;
  iStack_148 = (**(code **)(*piVar1 + 0xe0))();
  if (iStack_148 < 0) {
    puStack_140 = (undefined4 *)&DAT_00963df8;
    iStack_14c = 0x503384;
    piStack_144 = piVar1;
    FUN_00878e09();
  }
  puStack_140 = (undefined4 *)0x3af;
  piStack_144 = (int *)(unaff_EBP + 8);
  iStack_148 = 0x503397;
  puVar5 = (undefined4 *)FUN_00679d86();
  iStack_148 = *puVar5;
  piVar1 = (int *)(*(int *)(unaff_EBP + -0x10) + 0x730);
  puStack_140 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0xe;
  iStack_14c = 0x5033b2;
  piStack_144 = piVar1;
  FUN_0040381b();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 8) != 0) {
    puStack_140 = (undefined4 *)(*(int *)(unaff_EBP + 8) + -0xc);
    piStack_144 = (int *)0x5033c9;
    FUN_00403384();
  }
  puStack_140 = &DAT_00980690;
  piStack_144 = (int *)0x5033d3;
  FUN_00424aee();
  puStack_140 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  piStack_144 = (int *)0x5033e3;
  FUN_00424aee();
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar4 == 0) {
    puStack_140 = (undefined4 *)0x80004003;
    piStack_144 = (int *)0x5033f6;
    FUN_00878dfb();
  }
  puStack_140 = (undefined4 *)(unaff_EBP + -0x44);
  piStack_144 = (int *)(unaff_EBP + -0x24);
  iStack_148 = 0x13c;
  iStack_14c = 0x13c;
  uStack_150 = 0x50340c;
  FUN_0046ffc6();
  puStack_140 = (undefined4 *)(unaff_EBP + -0x24);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  piStack_144 = (int *)0x503419;
  puStack_140 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_140 < 0) {
    piStack_144 = (int *)0x503424;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_140 = (undefined4 *)(unaff_EBP + -0x44);
  piStack_144 = (int *)0x503431;
  puStack_140 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_140 < 0) {
    piStack_144 = (int *)0x50343c;
    FUN_00878dfb();
  }
  puStack_140 = (undefined4 *)0xff000000;
  piStack_144 = (int *)0x13c;
  iStack_148 = 0x13c;
  iStack_14c = 0;
  uStack_150 = 0;
  FUN_004115d9();
  FUN_005039eb();
  puStack_140 = &DAT_00980690;
  piStack_144 = (int *)0x50345e;
  FUN_00424aee();
  puStack_140 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 0x11;
  piStack_144 = (int *)0x503471;
  FUN_00424aee();
  puStack_140 = (undefined4 *)0x0;
  piStack_144 = (int *)0x0;
  iStack_148 = unaff_EBP + -0x78;
  iStack_14c = unaff_EBP + -0x88;
  *(undefined4 **)(unaff_EBP + 8) = &uStack_150;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00679e4e(&uStack_150,0xdfb);
  iVar4 = unaff_EBP + -0xa8;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_148 = 0x5034c3;
  uVar6 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x58) = uVar6;
  puStack_140 = (undefined4 *)(unaff_EBP + -0x58);
  piStack_144 = (int *)0x5034d8;
  FUN_00503a3a();
  puStack_140 = (undefined4 *)(unaff_EBP + -0xa8);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  piStack_144 = (int *)0x5034e8;
  puStack_140 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_140 < 0) {
    piStack_144 = (int *)0x5034f3;
    FUN_00878dfb();
  }
  puStack_140 = (undefined4 *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_144 = (int *)0x503503;
  puStack_140 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_140 < 0) {
    piStack_144 = (int *)0x50350e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_140 = (undefined4 *)(unaff_EBP + -0x78);
  piStack_144 = (int *)0x50351b;
  puStack_140 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_140 < 0) {
    piStack_144 = (int *)0x503526;
    FUN_00878dfb();
  }
  puStack_140 = (undefined4 *)0x50352d;
  FUN_0050354f();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


