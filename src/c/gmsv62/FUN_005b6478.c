/* FUN_005b6478 - 0x005b6478 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b6478(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *puVar8;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  int **ppiVar9;
  int unaff_EBP;
  bool bVar10;
  int iStack_d8;
  undefined1 *puStack_d4;
  int *piStack_d0;
  int *piStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 *puStack_a4;
  int *piStack_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  int *piStack_7c;
  undefined4 *puStack_78;
  int *piStack_74;
  undefined *puStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined *puStack_5c;
  int *piStack_58;
  int iStack_54;
  int iStack_50;
  undefined1 *puStack_4c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar5 = *(int *)(extraout_ECX + 200);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((1 < iVar5) && (*(int *)(extraout_ECX + 0x72c) != 1)) {
    puStack_4c = (undefined1 *)0x5b64be;
    FUN_00403191();
    puStack_4c = (undefined1 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_50 = 0x5b64cd;
    FUN_004031b7();
    bVar10 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (bVar10) {
      puStack_4c = (undefined1 *)0x5b64e3;
      FUN_00878dfb();
    }
    puStack_4c = (undefined1 *)(unaff_EBP + -0x34);
    iStack_50 = 6;
    iStack_54 = 0;
    piStack_58 = (int *)0x0;
    puStack_5c = (undefined *)0x0;
    uStack_60 = 0;
    iStack_64 = unaff_EBP + -0x20;
    uStack_68 = 0x5b6500;
    puVar4 = (undefined4 *)FUN_0042a39f();
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
             (*(int *)(unaff_EBP + -0x14) + 0x1e4);
    puStack_4c = (undefined1 *)0x5b6512;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar4);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_4c = (undefined1 *)0x5b6527;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      puStack_4c = (undefined1 *)0x5b6532;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_4c = (undefined1 *)0x5b653e;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      puStack_4c = (undefined1 *)0x5b6549;
      FUN_00878dfb();
    }
    puStack_4c = (undefined1 *)0x5b6554;
    puVar4 = (undefined4 *)FUN_004489f5();
    puStack_4c = (undefined1 *)*puVar4;
    iStack_50 = 0x5b6561;
    FUN_0040ee87();
    iVar5 = *(int *)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar5 == 0) {
      puStack_4c = (undefined1 *)0x5b6573;
      FUN_00878dfb();
    }
    iStack_54 = *(undefined4 *)(unaff_EBP + -0x44);
    iStack_50 = *(int *)(unaff_EBP + -0x40);
    piStack_58 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1e4);
    iVar5 = *piStack_58;
    puStack_4c = *(undefined1 **)(unaff_EBP + -0x3c);
    *(int **)(unaff_EBP + -0x20) = piStack_58;
    puStack_5c = (undefined *)0x5b6592;
    iVar5 = (**(code **)(iVar5 + 100))();
    if (iVar5 < 0) {
      puStack_5c = &DAT_00963de8;
      uStack_60 = *(undefined4 *)(unaff_EBP + -0x20);
      uStack_68 = 0x5b65a4;
      iStack_64 = iVar5;
      FUN_00878e09();
    }
    puStack_5c = (undefined *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_60 = 0x5b65b1;
    puStack_5c = (undefined *)FUN_00402bc3();
    if ((int)puStack_5c < 0) {
      uStack_60 = 0x5b65bc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_5c = (undefined *)0x5b65c7;
    FUN_00412600();
    iVar5 = *(int *)(unaff_EBP + -0x14);
    puStack_5c = (undefined *)(unaff_EBP + -0x1c);
    uStack_60 = 0x5b65d5;
    puVar4 = (undefined4 *)FUN_004489f5();
    uStack_60 = *puVar4;
    puStack_5c = (undefined *)0x1;
    iStack_64 = 0x5b65e2;
    FUN_0040ee87();
    iVar5 = *(int *)(iVar5 + 0x1e4);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar5 == 0) {
      puStack_5c = (undefined *)0x80004003;
      uStack_60 = 0x5b65fe;
      FUN_00878dfb();
    }
    uStack_68 = *(undefined4 *)(unaff_EBP + -0x44);
    iStack_64 = *(undefined4 *)(unaff_EBP + -0x40);
    piStack_6c = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1e4);
    iVar5 = *piStack_6c;
    uStack_60 = *(undefined4 *)(unaff_EBP + -0x3c);
    *(int **)(unaff_EBP + -0x20) = piStack_6c;
    puStack_5c = *(undefined **)(unaff_EBP + -0x38);
    puStack_70 = (undefined *)0x5b6620;
    iVar5 = (**(code **)(iVar5 + 0xfc))();
    if (iVar5 < 0) {
      puStack_70 = &DAT_00963df8;
      piStack_74 = *(int **)(unaff_EBP + -0x20);
      piStack_7c = (int *)0x5b6632;
      puStack_78 = (undefined4 *)iVar5;
      FUN_00878e09();
    }
    puStack_70 = (undefined *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_74 = (int *)0x5b663f;
    puStack_70 = (undefined *)FUN_00402bc3();
    if ((int)puStack_70 < 0) {
      piStack_74 = (int *)0x5b664a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_70 = (undefined *)0x5b6655;
    FUN_00412600();
    piVar2 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1e4);
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x1e4) == 0) {
      puStack_70 = (undefined *)0x80004003;
      piStack_74 = (int *)0x5b6670;
      FUN_00878dfb();
    }
    piVar3 = (int *)*piVar2;
    puStack_70 = (undefined *)0xffffffff;
    puStack_78 = (undefined4 *)0x5b667d;
    piStack_74 = piVar3;
    iVar5 = (**(code **)(*piVar3 + 0xe0))();
    if (iVar5 < 0) {
      puStack_78 = (undefined4 *)&DAT_00963df8;
      uStack_84 = 0x5b668d;
      iStack_80 = iVar5;
      piStack_7c = piVar3;
      FUN_00878e09();
    }
    puStack_78 = &DAT_00980690;
    piStack_7c = (int *)0x5b669b;
    FUN_00403191();
    puStack_78 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_7c = (int *)0x5b66a8;
    FUN_00403191();
    iVar5 = *piVar2;
    uVar7 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc0);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    *(undefined4 *)(unaff_EBP + -0x20) = uVar7;
    if (iVar5 == 0) {
      puStack_78 = (undefined4 *)0x80004003;
      piStack_7c = (int *)0x5b66c6;
      FUN_00878dfb();
    }
    piStack_a0 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1e4);
    uStack_84 = *(undefined4 *)(unaff_EBP + -0x34);
    iStack_80 = *(int *)(unaff_EBP + -0x30);
    iVar5 = *piStack_a0;
    piStack_7c = *(int **)(unaff_EBP + -0x2c);
    puStack_78 = *(undefined4 **)(unaff_EBP + -0x28);
    uStack_94 = *(undefined4 *)(unaff_EBP + -0x44);
    uStack_90 = *(undefined4 *)(unaff_EBP + -0x40);
    uStack_98 = 0x71;
    uStack_8c = *(undefined4 *)(unaff_EBP + -0x3c);
    iStack_9c = (-(uint)(*(int *)(unaff_EBP + -0x20) != 0) & 0xffffffaa) + 0x1f0;
    *(int **)(unaff_EBP + -0x1c) = piStack_a0;
    uStack_88 = *(undefined4 *)(unaff_EBP + -0x38);
    puStack_a4 = (undefined4 *)0x5b670a;
    iVar5 = (**(code **)(iVar5 + 0x90))();
    if (iVar5 < 0) {
      puStack_4c = *(undefined1 **)(unaff_EBP + -0x1c);
      iStack_54 = 0x5b671c;
      iStack_50 = iVar5;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_4c = (undefined1 *)0x5b6729;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      puStack_4c = (undefined1 *)0x5b6734;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_4c = (undefined1 *)0x5b6740;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      puStack_4c = (undefined1 *)0x5b674b;
      FUN_00878dfb();
    }
    iVar5 = *(int *)(unaff_EBP + -0x14);
    iVar6 = FUN_005b9c83();
    if (iVar6 == 0) {
      puStack_4c = (undefined1 *)(unaff_EBP + -0x20);
      iStack_50 = 0x5b678f;
      iStack_54 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
      *(undefined4 *)(unaff_EBP + -4) = 10;
    }
    else {
      puStack_4c = (undefined1 *)(unaff_EBP + -0x1c);
      iStack_50 = 0x5b676f;
      iStack_54 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 9;
    }
    puStack_4c = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x24) = &iStack_50;
    piStack_58 = (int *)0x5b67a7;
    FUN_004059fd();
    iStack_54 = unaff_EBP + -0x44;
    *(undefined4 *)(unaff_EBP + -4) = 10;
    piStack_58 = (int *)0x5b67b9;
    FUN_0040263d();
    piStack_58 = (int *)0x5b67c0;
    FUN_004048a4();
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    iStack_50 = 0x5b67ce;
    uVar7 = FUN_004032b4();
    puVar8 = &stack0xffffffb8;
    *(undefined4 *)(unaff_EBP + -0x18) = uVar7;
    *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffffb8;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      puStack_4c = (undefined1 *)(unaff_EBP + -0x18);
      iStack_50 = 0x5b67e7;
      puStack_4c = (undefined1 *)FUN_0041a581();
      puVar8 = extraout_ECX_00;
      if (((int)puStack_4c < 0) && (puStack_4c != (undefined1 *)0x80004002)) {
        iStack_50 = 0x5b67f8;
        FUN_00878dfb();
        puVar8 = extraout_ECX_01;
      }
    }
    iStack_50 = iVar5 + 0x1e4;
    *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_4c;
    iStack_54 = 0x5b680a;
    puStack_4c = puVar8;
    FUN_0041160e();
    iStack_50 = 0x5b680f;
    FUN_0042ea7d();
    iStack_50 = unaff_EBP + -0x44;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_54 = 0x5b681c;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      puStack_4c = (undefined1 *)0x5b6829;
      FUN_00878dfb();
    }
    if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
      FUN_00402fa6();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
      FUN_00402fa6();
    }
  }
  puStack_4c = (undefined1 *)0x5b685d;
  FUN_00403191();
  puStack_4c = (undefined1 *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iStack_50 = 0x5b686c;
  FUN_004031b7();
  bVar10 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (bVar10) {
    puStack_4c = (undefined1 *)0x5b6882;
    FUN_00878dfb();
  }
  puStack_4c = (undefined1 *)(unaff_EBP + -0x44);
  iStack_50 = 6;
  iStack_54 = 0;
  piStack_58 = (int *)0x0;
  puStack_5c = (undefined *)0x0;
  uStack_60 = 0;
  iStack_64 = unaff_EBP + -0x20;
  uStack_68 = 0x5b689f;
  puVar4 = (undefined4 *)FUN_0042a39f();
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x14) + 0x1e8);
  puStack_4c = (undefined1 *)0x5b68b1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar4);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_4c = (undefined1 *)0x5b68c6;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_4c = (undefined1 *)0x5b68d1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_4c = (undefined1 *)0x5b68dd;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_4c = (undefined1 *)0x5b68e8;
    FUN_00878dfb();
  }
  puStack_4c = (undefined1 *)0x5b68f3;
  puVar4 = (undefined4 *)FUN_004489f5();
  puStack_4c = (undefined1 *)*puVar4;
  iStack_50 = 0x5b6900;
  FUN_0040ee87();
  iVar5 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar5 == 0) {
    puStack_4c = (undefined1 *)0x5b6912;
    FUN_00878dfb();
  }
  iStack_54 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_50 = *(int *)(unaff_EBP + -0x40);
  piStack_58 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1e8);
  iVar5 = *piStack_58;
  puStack_4c = *(undefined1 **)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x20) = piStack_58;
  puStack_5c = (undefined *)0x5b6931;
  iVar5 = (**(code **)(iVar5 + 100))();
  if (iVar5 < 0) {
    puStack_5c = &DAT_00963de8;
    uStack_60 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_68 = 0x5b6943;
    iStack_64 = iVar5;
    FUN_00878e09();
  }
  puStack_5c = (undefined *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  uStack_60 = 0x5b6950;
  puStack_5c = (undefined *)FUN_00402bc3();
  if ((int)puStack_5c < 0) {
    uStack_60 = 0x5b695b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_5c = (undefined *)0x5b6966;
  FUN_00412600();
  iVar5 = *(int *)(unaff_EBP + -0x14);
  puStack_5c = (undefined *)(unaff_EBP + -0x1c);
  uStack_60 = 0x5b6974;
  puVar4 = (undefined4 *)FUN_004489f5();
  uStack_60 = *puVar4;
  puStack_5c = (undefined *)0x1;
  iStack_64 = 0x5b6981;
  FUN_0040ee87();
  iVar5 = *(int *)(iVar5 + 0x1e8);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar5 == 0) {
    puStack_5c = (undefined *)0x80004003;
    uStack_60 = 0x5b699d;
    FUN_00878dfb();
  }
  uStack_68 = *(undefined4 *)(unaff_EBP + -0x44);
  iStack_64 = *(undefined4 *)(unaff_EBP + -0x40);
  piStack_6c = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1e8);
  iVar5 = *piStack_6c;
  uStack_60 = *(undefined4 *)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x20) = piStack_6c;
  puStack_5c = *(undefined **)(unaff_EBP + -0x38);
  puStack_70 = (undefined *)0x5b69bf;
  iVar5 = (**(code **)(iVar5 + 0xfc))();
  if (iVar5 < 0) {
    puStack_70 = &DAT_00963df8;
    piStack_74 = *(int **)(unaff_EBP + -0x20);
    piStack_7c = (int *)0x5b69d1;
    puStack_78 = (undefined4 *)iVar5;
    FUN_00878e09();
  }
  puStack_70 = (undefined *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  piStack_74 = (int *)0x5b69de;
  puStack_70 = (undefined *)FUN_00402bc3();
  if ((int)puStack_70 < 0) {
    piStack_74 = (int *)0x5b69e9;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_70 = (undefined *)0x5b69f4;
  FUN_00412600();
  piVar2 = (int *)(*(int *)(unaff_EBP + -0x14) + 0x1e8);
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x1e8) == 0) {
    puStack_70 = (undefined *)0x80004003;
    piStack_74 = (int *)0x5b6a0f;
    FUN_00878dfb();
  }
  piVar3 = (int *)*piVar2;
  puStack_70 = (undefined *)0xffffffff;
  puStack_78 = (undefined4 *)0x5b6a1c;
  piStack_74 = piVar3;
  iVar5 = (**(code **)(*piVar3 + 0xe0))();
  if (iVar5 < 0) {
    puStack_78 = (undefined4 *)&DAT_00963df8;
    uStack_84 = 0x5b6a2c;
    iStack_80 = iVar5;
    piStack_7c = piVar3;
    FUN_00878e09();
  }
  puStack_78 = &DAT_00980690;
  piStack_7c = (int *)0x5b6a3a;
  FUN_00403191();
  puStack_78 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  piStack_7c = (int *)0x5b6a47;
  FUN_00403191();
  iVar5 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar5 == 0) {
    puStack_78 = (undefined4 *)0x80004003;
    piStack_7c = (int *)0x5b6a59;
    FUN_00878dfb();
  }
  uStack_84 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_80 = *(undefined4 *)(unaff_EBP + -0x30);
  piStack_7c = *(int **)(unaff_EBP + -0x2c);
  puStack_78 = *(undefined4 **)(unaff_EBP + -0x28);
  uStack_94 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_90 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_98 = 0x97;
  piStack_a0 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1e8);
  iVar5 = *piStack_a0;
  uStack_8c = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_9c = 0x57;
  *(int **)(unaff_EBP + -0x20) = piStack_a0;
  uStack_88 = *(undefined4 *)(unaff_EBP + -0x38);
  puStack_a4 = (undefined4 *)0x5b6a8e;
  iVar5 = (**(code **)(iVar5 + 0x90))();
  if (iVar5 < 0) {
    puStack_a4 = (undefined4 *)&DAT_00963de8;
    uStack_a8 = *(undefined4 *)(unaff_EBP + -0x20);
    uStack_b0 = 0x5b6aa0;
    iStack_ac = iVar5;
    FUN_00878e09();
  }
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_a8 = 0x5b6aad;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    uStack_a8 = 0x5b6ab8;
    FUN_00878dfb();
  }
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_a8 = 0x5b6ac4;
  puStack_a4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_a4 < 0) {
    uStack_a8 = 0x5b6acf;
    FUN_00878dfb();
  }
  puStack_a4 = &DAT_00980690;
  uStack_a8 = 0x5b6add;
  FUN_00403191();
  puStack_a4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  uStack_a8 = 0x5b6aea;
  FUN_00403191();
  iVar5 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1e8);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar5 == 0) {
    puStack_a4 = (undefined4 *)0x80004003;
    uStack_a8 = 0x5b6b09;
    FUN_00878dfb();
  }
  puStack_a4 = (undefined4 *)(unaff_EBP + -0x1c);
  uStack_a8 = 0x5b6b14;
  piStack_cc = (int *)FUN_004113e5();
  iVar5 = *piStack_cc;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (iVar5 == 0) {
    puStack_a4 = (undefined4 *)0x80004003;
    uStack_a8 = 0x5b6b28;
    FUN_00878dfb();
  }
  piStack_cc = (int *)*piStack_cc;
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x34);
  iStack_ac = *(undefined4 *)(unaff_EBP + -0x30);
  iVar5 = *piStack_cc;
  uStack_a8 = *(undefined4 *)(unaff_EBP + -0x2c);
  puStack_a4 = *(undefined4 **)(unaff_EBP + -0x28);
  uStack_c0 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_bc = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_c4 = 0xff;
  uStack_b8 = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_c8 = 0xff;
  *(int **)(unaff_EBP + -0x20) = piStack_cc;
  uStack_b4 = *(undefined4 *)(unaff_EBP + -0x38);
  piStack_d0 = (int *)0x5b6b55;
  iVar5 = (**(code **)(iVar5 + 0x90))();
  if (iVar5 < 0) {
    piStack_d0 = (int *)&DAT_00963de8;
    puStack_d4 = *(undefined1 **)(unaff_EBP + -0x20);
    iStack_d8 = iVar5;
    FUN_00878e09();
  }
  piStack_d0 = (int *)0x5b6b6f;
  FUN_004125d9();
  piStack_d0 = (int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  puStack_d4 = (undefined1 *)0x5b6b7c;
  piStack_d0 = (int *)FUN_00402bc3();
  if ((int)piStack_d0 < 0) {
    puStack_d4 = (undefined1 *)0x5b6b87;
    FUN_00878dfb();
  }
  piStack_d0 = (int *)(unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_d4 = (undefined1 *)0x5b6b93;
  piStack_d0 = (int *)FUN_00402bc3();
  if ((int)piStack_d0 < 0) {
    puStack_d4 = (undefined1 *)0x5b6b9e;
    FUN_00878dfb();
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(iVar5 + 0x72c) == 1) {
    piStack_d0 = (int *)0x632;
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x20);
    iStack_d8 = 0x5b6bc0;
    uVar7 = FUN_00679e4e();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
  }
  else {
    piStack_d0 = (int *)0x5b6bd1;
    iVar6 = FUN_005b9c83();
    if (iVar6 == 0) {
      piStack_d0 = (int *)0x633;
      puStack_d4 = (undefined1 *)(unaff_EBP + -0x14);
      iStack_d8 = 0x5b6c08;
      uVar7 = FUN_00679e4e();
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
      *(undefined4 *)(unaff_EBP + -4) = 0x1a;
    }
    else {
      piStack_d0 = (int *)0x631;
      puStack_d4 = (undefined1 *)(unaff_EBP + -0x1c);
      iStack_d8 = 0x5b6be8;
      uVar7 = FUN_00679e4e();
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
      *(undefined4 *)(unaff_EBP + -4) = 0x19;
    }
  }
  piStack_d0 = (int *)0x0;
  puStack_d4 = (undefined1 *)0x0;
  *(int **)(unaff_EBP + -0x24) = &iStack_d8;
  FUN_004059fd(uVar7);
  iVar6 = unaff_EBP + -0x44;
  *(undefined4 *)(unaff_EBP + -4) = 0x1a;
  FUN_0040263d(iVar6);
  FUN_004048a4(iVar6);
  *(undefined4 *)(unaff_EBP + -4) = 0x1c;
  iStack_d8 = 0x5b6c44;
  uVar7 = FUN_004032b4();
  ppiVar9 = &piStack_d0;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar7;
  piStack_d0 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x24) = &piStack_d0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_d4 = (undefined1 *)(unaff_EBP + -0x18);
    iStack_d8 = 0x5b6c5d;
    puStack_d4 = (undefined1 *)FUN_0041a581();
    ppiVar9 = (int **)extraout_ECX_02;
    if (((int)puStack_d4 < 0) && (puStack_d4 != (undefined1 *)0x80004002)) {
      iStack_d8 = 0x5b6c6e;
      FUN_00878dfb();
      ppiVar9 = (int **)extraout_ECX_03;
    }
  }
  iStack_d8 = iVar5 + 0x1e8;
  *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_d4;
  puStack_d4 = (undefined1 *)ppiVar9;
  FUN_0041160e();
  iStack_d8 = 0x5b6c85;
  FUN_0042ea7d();
  iStack_d8 = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piStack_d0 = (int *)FUN_00402bc3();
  if ((int)piStack_d0 < 0) {
    puStack_d4 = (undefined1 *)0x5b6c9f;
    FUN_00878dfb();
  }
  if (((*(byte *)(unaff_EBP + -0x10) & 0x10) != 0) &&
     (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffef,
     *(int *)(unaff_EBP + -0x14) != 0)) {
    piStack_d0 = (int *)0x5b6cb5;
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  if (((*(byte *)(unaff_EBP + -0x10) & 8) != 0) &&
     (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7,
     *(int *)(unaff_EBP + -0x1c) != 0)) {
    piStack_d0 = (int *)0x5b6cce;
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  if (((*(byte *)(unaff_EBP + -0x10) & 4) != 0) && (*(int *)(unaff_EBP + -0x20) != 0)) {
    piStack_d0 = (int *)0x5b6ce3;
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  piStack_d0 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x708) = 0;
  if (piStack_d0 != (int *)0x0) {
    puStack_d4 = (undefined1 *)0x5b6cfd;
    (**(code **)(*piStack_d0 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


