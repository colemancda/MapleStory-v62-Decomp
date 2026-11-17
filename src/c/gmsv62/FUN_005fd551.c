/* FUN_005fd551 - 0x005fd551 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005fd551(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  IBinding *pIVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var6;
  undefined4 uVar7;
  int iVar8;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *puVar9;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined **ppuVar10;
  int unaff_EBP;
  bool bVar11;
  int iStack_124;
  undefined1 *puStack_120;
  undefined *puStack_11c;
  int *piStack_118;
  int iStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  int *piStack_f4;
  undefined4 *puStack_f0;
  int *piStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined *puStack_d4;
  int *piStack_d0;
  int iStack_cc;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Stack_c8;
  undefined1 *puStack_c4;
  
  FUN_00879bb8();
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1e8);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)0x0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1ec),
             (IBinding *)0x0);
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7();
  bVar11 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar11) {
    FUN_00878dfb();
  }
  puVar4 = (undefined4 *)FUN_0042a39f();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar4);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  FUN_004489f5();
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0040ee87();
  iVar5 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar5 == 0) {
    FUN_00878dfb();
  }
  iVar5 = **(int **)p_Var1;
  *(int **)(unaff_EBP + -0x20) = *(int **)p_Var1;
  iVar5 = (**(code **)(iVar5 + 100))();
  if (iVar5 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  FUN_004489f5();
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_0040ee87();
  iVar5 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (iVar5 == 0) {
    FUN_00878dfb();
  }
  iVar5 = **(int **)p_Var1;
  *(int **)(unaff_EBP + -0x20) = *(int **)p_Var1;
  iVar5 = (**(code **)(iVar5 + 0xfc))();
  if (iVar5 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412600();
  if (*(int *)p_Var1 == 0) {
    FUN_00878dfb();
  }
  iVar5 = (**(code **)(**(int **)p_Var1 + 0xe0))();
  if (iVar5 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_00403191();
  iVar5 = *(int *)p_Var1;
  uVar7 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  *(undefined4 *)(unaff_EBP + -0x20) = uVar7;
  if (iVar5 == 0) {
    FUN_00878dfb();
  }
  iVar5 = **(int **)p_Var1;
  *(int **)(unaff_EBP + -0x1c) = *(int **)p_Var1;
  p_Var6 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(**(code **)(iVar5 + 0x90))();
  if ((int)p_Var6 < 0) {
    puStack_c4 = *(undefined1 **)(unaff_EBP + -0x1c);
    iStack_cc = 0x5fd7cd;
    p_Stack_c8 = p_Var6;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_c4 = (undefined1 *)0x5fd7da;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_c4 = (undefined1 *)0x5fd7e5;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_c4 = (undefined1 *)0x5fd7f2;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    puStack_c4 = (undefined1 *)0x5fd7fd;
    FUN_00878dfb();
  }
  iVar5 = *(int *)(unaff_EBP + -0x14);
  if (*(int *)(iVar5 + 0xa94) == 2) {
    puStack_c4 = (undefined1 *)(unaff_EBP + -0x28);
    p_Stack_c8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fd81c;
    iStack_cc = FUN_00679e4e();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 8;
  }
  else {
    puStack_c4 = (undefined1 *)(unaff_EBP + -0x24);
    p_Stack_c8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fd83f;
    iStack_cc = FUN_00679e4e();
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 9;
  }
  puStack_c4 = (undefined1 *)0x0;
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> ***)(unaff_EBP + -0x30) = &p_Stack_c8;
  piStack_d0 = (int *)0x5fd85b;
  FUN_004059fd();
  iStack_cc = unaff_EBP + -0x50;
  *(undefined4 *)(unaff_EBP + -4) = 9;
  *(int *)(unaff_EBP + -0x2c) = iVar5 + 0x1c0;
  piStack_d0 = (int *)0x5fd874;
  FUN_0040263d();
  piStack_d0 = (int *)0x5fd87b;
  FUN_004048a4();
  *(undefined4 *)(unaff_EBP + -4) = 0xb;
  p_Stack_c8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fd889;
  uVar7 = FUN_004032b4();
  puVar9 = &stack0xffffff40;
  *(undefined4 *)(unaff_EBP + -0x18) = uVar7;
  *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff40;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_c4 = (undefined1 *)(unaff_EBP + -0x18);
    p_Stack_c8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fd8a2;
    puStack_c4 = (undefined1 *)FUN_0041a581();
    puVar9 = extraout_ECX_00;
    if (((int)puStack_c4 < 0) && (puStack_c4 != (undefined1 *)0x80004002)) {
      p_Stack_c8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fd8b3;
      FUN_00878dfb();
      puVar9 = extraout_ECX_01;
    }
  }
  *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_c4;
  iStack_cc = 0x5fd8bf;
  p_Stack_c8 = p_Var1;
  puStack_c4 = puVar9;
  FUN_0041160e();
  p_Stack_c8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fd8c4;
  FUN_0042ea7d();
  p_Stack_c8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_cc = 0x5fd8d1;
  iVar8 = FUN_00402bc3();
  if (iVar8 < 0) {
    puStack_c4 = (undefined1 *)0x5fd8de;
    FUN_00878dfb();
  }
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00402fa6();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00402fa6();
  }
  if (1 < *(int *)(iVar5 + 200)) {
    puStack_c4 = (undefined1 *)0x5fd920;
    FUN_00403191();
    puStack_c4 = (undefined1 *)0x0;
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    p_Stack_c8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fd932;
    FUN_004031b7();
    bVar11 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (bVar11) {
      puStack_c4 = (undefined1 *)0x5fd948;
      FUN_00878dfb();
    }
    puStack_c4 = (undefined1 *)(unaff_EBP + -0x50);
    p_Stack_c8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x6;
    iStack_cc = 0;
    piStack_d0 = (int *)0x0;
    puStack_d4 = (undefined *)0x0;
    uStack_d8 = 0;
    iStack_dc = unaff_EBP + -0x28;
    uStack_e0 = 0x5fd965;
    puVar4 = (undefined4 *)FUN_0042a39f();
    pIVar2 = (IBinding *)*puVar4;
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar5 + 0x1ec);
    *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x18) = p_Var1;
    puStack_c4 = (undefined1 *)0x5fd977;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,pIVar2);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_c4 = (undefined1 *)0x5fd98c;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      puStack_c4 = (undefined1 *)0x5fd997;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_c4 = (undefined1 *)0x5fd9a4;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      puStack_c4 = (undefined1 *)0x5fd9af;
      FUN_00878dfb();
    }
    puStack_c4 = (undefined1 *)0x5fd9ba;
    puVar4 = (undefined4 *)FUN_004489f5();
    puStack_c4 = (undefined1 *)*puVar4;
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
    p_Stack_c8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fd9ce;
    FUN_0040ee87();
    iVar5 = *(int *)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (iVar5 == 0) {
      puStack_c4 = (undefined1 *)0x5fd9e0;
      FUN_00878dfb();
    }
    piStack_d0 = *(int **)p_Var1;
    iVar5 = *piStack_d0;
    iStack_cc = *(undefined4 *)(unaff_EBP + -0x50);
    p_Stack_c8 = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x4c);
    puStack_c4 = *(undefined1 **)(unaff_EBP + -0x48);
    *(int **)(unaff_EBP + -0x28) = piStack_d0;
    puStack_d4 = (undefined *)0x5fd9f7;
    iVar5 = (**(code **)(iVar5 + 100))();
    if (iVar5 < 0) {
      puStack_d4 = &DAT_00963de8;
      uStack_d8 = *(undefined4 *)(unaff_EBP + -0x28);
      uStack_e0 = 0x5fda09;
      iStack_dc = iVar5;
      FUN_00878e09();
    }
    puStack_d4 = (undefined *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    uStack_d8 = 0x5fda16;
    puStack_d4 = (undefined *)FUN_00402bc3();
    if ((int)puStack_d4 < 0) {
      uStack_d8 = 0x5fda21;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_d4 = (undefined *)0x5fda2d;
    FUN_00412600();
    puStack_d4 = (undefined *)(unaff_EBP + -0x24);
    uStack_d8 = 0x5fda39;
    puVar4 = (undefined4 *)FUN_004489f5();
    uStack_d8 = *puVar4;
    puStack_d4 = (undefined *)0x1;
    *(undefined4 *)(unaff_EBP + -4) = 0x10;
    iStack_dc = 0x5fda4d;
    FUN_0040ee87();
    iVar5 = *(int *)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (iVar5 == 0) {
      puStack_d4 = (undefined *)0x80004003;
      uStack_d8 = 0x5fda60;
      FUN_00878dfb();
    }
    piStack_e4 = *(int **)p_Var1;
    iVar5 = *piStack_e4;
    uStack_e0 = *(undefined4 *)(unaff_EBP + -0x50);
    iStack_dc = *(undefined4 *)(unaff_EBP + -0x4c);
    uStack_d8 = *(undefined4 *)(unaff_EBP + -0x48);
    *(int **)(unaff_EBP + -0x28) = piStack_e4;
    puStack_d4 = *(undefined **)(unaff_EBP + -0x44);
    piStack_e8 = (int *)0x5fda7a;
    iVar5 = (**(code **)(iVar5 + 0xfc))();
    if (iVar5 < 0) {
      piStack_e8 = (int *)&DAT_00963df8;
      piStack_ec = *(int **)(unaff_EBP + -0x28);
      piStack_f4 = (int *)0x5fda8c;
      puStack_f0 = (undefined4 *)iVar5;
      FUN_00878e09();
    }
    piStack_e8 = (int *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    piStack_ec = (int *)0x5fda99;
    piStack_e8 = (int *)FUN_00402bc3();
    if ((int)piStack_e8 < 0) {
      piStack_ec = (int *)0x5fdaa4;
      FUN_00878dfb();
    }
    piStack_e8 = *(int **)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_e8 != (int *)0x0) {
      piStack_ec = (int *)0x5fdab5;
      (**(code **)(*piStack_e8 + 8))();
    }
    if (*(int *)p_Var1 == 0) {
      piStack_e8 = (int *)0x80004003;
      piStack_ec = (int *)0x5fdac4;
      FUN_00878dfb();
    }
    piVar3 = *(int **)p_Var1;
    piStack_e8 = (int *)0xffffffff;
    puStack_f0 = (undefined4 *)0x5fdad1;
    piStack_ec = piVar3;
    iVar5 = (**(code **)(*piVar3 + 0xe0))();
    if (iVar5 < 0) {
      puStack_f0 = (undefined4 *)&DAT_00963df8;
      uStack_fc = 0x5fdae1;
      iStack_f8 = iVar5;
      piStack_f4 = piVar3;
      FUN_00878e09();
    }
    puStack_f0 = &DAT_00980690;
    piStack_f4 = (int *)0x5fdaef;
    FUN_00403191();
    puStack_f0 = &DAT_00980690;
    *(undefined4 *)(unaff_EBP + -4) = 0x12;
    piStack_f4 = (int *)0x5fdaff;
    FUN_00403191();
    piStack_118 = *(int **)(unaff_EBP + -0x18);
    iVar5 = *piStack_118;
    iVar8 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xc0);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (iVar5 == 0) {
      puStack_f0 = (undefined4 *)0x80004003;
      piStack_f4 = (int *)0x5fdb1e;
      FUN_00878dfb();
    }
    piStack_118 = (int *)*piStack_118;
    uStack_fc = *(undefined4 *)(unaff_EBP + -0x40);
    iStack_f8 = *(undefined4 *)(unaff_EBP + -0x3c);
    iVar5 = *piStack_118;
    piStack_f4 = *(int **)(unaff_EBP + -0x38);
    puStack_f0 = *(undefined4 **)(unaff_EBP + -0x34);
    uStack_10c = *(undefined4 *)(unaff_EBP + -0x50);
    uStack_108 = *(undefined4 *)(unaff_EBP + -0x4c);
    uStack_110 = 0xcf;
    uStack_104 = *(undefined4 *)(unaff_EBP + -0x48);
    iStack_114 = (-(uint)(iVar8 != 0) & 0xffffffaa) + 0x1f1;
    *(int **)(unaff_EBP + -0x28) = piStack_118;
    uStack_100 = *(undefined4 *)(unaff_EBP + -0x44);
    puStack_11c = (undefined *)0x5fdb57;
    iVar5 = (**(code **)(iVar5 + 0x90))();
    if (iVar5 < 0) {
      puStack_11c = &DAT_00963de8;
      puStack_120 = *(undefined1 **)(unaff_EBP + -0x28);
      iStack_124 = iVar5;
      FUN_00878e09();
    }
    puStack_11c = (undefined *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    puStack_120 = (undefined1 *)0x5fdb78;
    puStack_11c = (undefined *)FUN_00402bc3();
    if ((int)puStack_11c < 0) {
      puStack_120 = (undefined1 *)0x5fdb83;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_11c = (undefined *)(unaff_EBP + -0x40);
    puStack_120 = (undefined1 *)0x5fdb90;
    puStack_11c = (undefined *)FUN_00402bc3();
    if ((int)puStack_11c < 0) {
      puStack_120 = (undefined1 *)0x5fdb9b;
      FUN_00878dfb();
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xa94) == 2) {
      puStack_11c = (undefined *)0x697;
      puStack_120 = (undefined1 *)(unaff_EBP + -0x30);
      iStack_124 = 0x5fdbbd;
      uVar7 = FUN_00679e4e();
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
      *(undefined4 *)(unaff_EBP + -4) = 0x14;
    }
    else {
      puStack_11c = (undefined *)0x694;
      puStack_120 = (undefined1 *)(unaff_EBP + -0x20);
      iStack_124 = 0x5fdbdd;
      uVar7 = FUN_00679e4e();
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
      *(undefined4 *)(unaff_EBP + -4) = 0x15;
    }
    puStack_11c = (undefined *)0x0;
    puStack_120 = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x28) = &iStack_124;
    FUN_004059fd(uVar7);
    iVar5 = unaff_EBP + -0x60;
    *(undefined4 *)(unaff_EBP + -4) = 0x15;
    FUN_0040263d(iVar5);
    FUN_004048a4(iVar5);
    *(undefined4 *)(unaff_EBP + -4) = 0x17;
    iStack_124 = 0x5fdc16;
    uVar7 = FUN_004032b4();
    ppuVar10 = &puStack_11c;
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar7;
    puStack_11c = (undefined *)0x0;
    *(undefined ***)(unaff_EBP + -0x2c) = &puStack_11c;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      puStack_120 = (undefined1 *)(unaff_EBP + -0x1c);
      iStack_124 = 0x5fdc2f;
      puStack_120 = (undefined1 *)FUN_0041a581();
      ppuVar10 = (undefined **)extraout_ECX_02;
      if (((int)puStack_120 < 0) && (puStack_120 != (undefined1 *)0x80004002)) {
        iStack_124 = 0x5fdc40;
        FUN_00878dfb();
        ppuVar10 = (undefined **)extraout_ECX_03;
      }
    }
    *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_120;
    iStack_124 = *(int *)(unaff_EBP + -0x18);
    puStack_120 = (undefined1 *)ppuVar10;
    FUN_0041160e();
    iStack_124 = 0x5fdc53;
    FUN_0042ea7d();
    iStack_124 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    puStack_11c = (undefined *)FUN_00402bc3();
    if ((int)puStack_11c < 0) {
      puStack_120 = (undefined1 *)0x5fdc6c;
      FUN_00878dfb();
    }
    if (((*(byte *)(unaff_EBP + -0x10) & 8) != 0) &&
       (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7,
       *(int *)(unaff_EBP + -0x20) != 0)) {
      puStack_11c = (undefined *)0x5fdc82;
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
    }
    if (((*(byte *)(unaff_EBP + -0x10) & 4) != 0) && (*(int *)(unaff_EBP + -0x30) != 0)) {
      puStack_11c = (undefined *)0x5fdc97;
      FUN_004030b1();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


