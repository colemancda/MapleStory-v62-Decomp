/* FUN_005fc14e - 0x005fc14e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005fc14e(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *puVar8;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  int **ppiVar9;
  uint uVar10;
  int unaff_EBP;
  bool bVar11;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Stack_f8;
  undefined1 *puStack_f4;
  int *piStack_f0;
  int *piStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int iStack_cc;
  undefined4 uStack_c8;
  undefined4 *puStack_c4;
  int *piStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  int *piStack_9c;
  undefined4 *puStack_98;
  int *piStack_94;
  int *piStack_90;
  int *piStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined *puStack_7c;
  int *piStack_78;
  int iStack_74;
  int iStack_70;
  undefined1 *puStack_6c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((*(int *)(extraout_ECX + 0xaa0) == 2) && (*(int *)(extraout_ECX + 0xac4) != 1)) &&
     (iVar4 = *(int *)(extraout_ECX + 0x204), iVar4 != 0)) {
    while( true ) {
      iVar4 = *(int *)((-(uint)(iVar4 != 0) & iVar4 - 0x10U) + 4);
      *(uint *)(unaff_EBP + -0x18) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
      puStack_6c = (undefined1 *)0x5fc1bf;
      FUN_005f96ff();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x2c) == *(int *)(unaff_EBP + 0xc)) {
        puStack_6c = (undefined1 *)0xfffffffe;
        iStack_70 = 0x5fc1db;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int *)(unaff_EBP + -0x28) == 0) {
          puStack_6c = (undefined1 *)0x5fc1ef;
          FUN_00878dfb();
        }
        puStack_6c = (undefined1 *)(unaff_EBP + -0x20);
        iStack_70 = 0x5fc1ff;
        FUN_0041141a();
        FUN_004125e6();
        iVar4 = unaff_EBP + -0x44;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puStack_6c = (undefined1 *)0x5fc214;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          puStack_6c = (undefined1 *)0x5fc21f;
          FUN_00878dfb();
          iVar4 = extraout_ECX_00;
        }
        iVar2 = 5;
        do {
          puStack_6c = (undefined1 *)(unaff_EBP + -0x34);
          *(int **)(unaff_EBP + -0x1c) = &iStack_70;
          piStack_78 = (int *)0x5fc23b;
          iStack_74 = extraout_ECX + 0x1c0;
          iStack_70 = iVar4;
          FUN_00424dbc();
          iStack_74 = 0x5fc242;
          FUN_005fea69();
          iVar2 = iVar2 + -1;
          iVar4 = extraout_ECX_01;
        } while (iVar2 != 0);
        puStack_6c = (undefined1 *)0x5fc253;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        puStack_6c = (undefined1 *)0x5fc260;
        FUN_00403191();
        piVar3 = *(int **)(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (piVar3 == (int *)0x0) {
          puStack_6c = (undefined1 *)0x5fc275;
          FUN_00878dfb();
          piVar3 = *(int **)(unaff_EBP + -0x28);
        }
        iStack_74 = *(undefined4 *)(unaff_EBP + -100);
        iStack_70 = *(int *)(unaff_EBP + -0x60);
        iVar4 = *piVar3;
        puStack_6c = *(undefined1 **)(unaff_EBP + -0x5c);
        iStack_84 = *(undefined4 *)(unaff_EBP + -0x54);
        uStack_80 = *(undefined4 *)(unaff_EBP + -0x50);
        puStack_7c = *(undefined **)(unaff_EBP + -0x4c);
        uStack_88 = 0;
        *(int **)(unaff_EBP + -0x1c) = piVar3;
        piStack_78 = *(int **)(unaff_EBP + -0x48);
        piStack_90 = (int *)0x5fc29e;
        piStack_8c = piVar3;
        iVar4 = (**(code **)(iVar4 + 0x110))();
        if (iVar4 < 0) {
          puStack_6c = *(undefined1 **)(unaff_EBP + -0x1c);
          iStack_74 = 0x5fc2b0;
          iStack_70 = iVar4;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        puStack_6c = (undefined1 *)0x5fc2bd;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          puStack_6c = (undefined1 *)0x5fc2c8;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        puStack_6c = (undefined1 *)0x5fc2d5;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          puStack_6c = (undefined1 *)0x5fc2e0;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00412600();
      if (*(int *)(unaff_EBP + -0x18) == 0) break;
      iVar4 = *(int *)(unaff_EBP + -0x18);
    }
  }
  if ((1 < *(int *)(extraout_ECX + 200)) && (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xac4) != 1)) {
    puStack_6c = (undefined1 *)0x5fc322;
    FUN_00403191();
    puStack_6c = (undefined1 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_70 = 0x5fc332;
    FUN_004031b7();
    bVar11 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (bVar11) {
      puStack_6c = (undefined1 *)0x5fc349;
      FUN_00878dfb();
    }
    puStack_6c = (undefined1 *)(unaff_EBP + -100);
    iStack_70 = 5;
    iStack_74 = 0;
    piStack_78 = (int *)0x0;
    puStack_7c = (undefined *)0x0;
    uStack_80 = 0;
    iStack_84 = unaff_EBP + 0xc;
    uStack_88 = 0x5fc368;
    puVar5 = (undefined4 *)FUN_0042a39f();
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
             (*(int *)(unaff_EBP + -0x14) + 0x1d8);
    puStack_6c = (undefined1 *)0x5fc37a;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_6c = (undefined1 *)0x5fc38f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_6c = (undefined1 *)0x5fc39a;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_6c = (undefined1 *)0x5fc3a7;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_6c = (undefined1 *)0x5fc3b2;
      FUN_00878dfb();
    }
    puStack_6c = (undefined1 *)0x5fc3bd;
    puVar5 = (undefined4 *)FUN_004489f5();
    puStack_6c = (undefined1 *)*puVar5;
    iStack_70 = 0x5fc3ca;
    FUN_0040ee87();
    iVar4 = *(int *)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar4 == 0) {
      puStack_6c = (undefined1 *)0x5fc3dc;
      FUN_00878dfb();
    }
    piStack_78 = *(int **)p_Var1;
    iVar4 = *piStack_78;
    iStack_74 = *(undefined4 *)(unaff_EBP + -100);
    iStack_70 = *(int *)(unaff_EBP + -0x60);
    puStack_6c = *(undefined1 **)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + 0xc) = piStack_78;
    puStack_7c = (undefined *)0x5fc3f3;
    iVar4 = (**(code **)(iVar4 + 100))();
    if (iVar4 < 0) {
      puStack_7c = &DAT_00963de8;
      uStack_80 = *(undefined4 *)(unaff_EBP + 0xc);
      uStack_88 = 0x5fc405;
      iStack_84 = iVar4;
      FUN_00878e09();
    }
    puStack_7c = (undefined *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    uStack_80 = 0x5fc412;
    puStack_7c = (undefined *)FUN_00402bc3();
    if ((int)puStack_7c < 0) {
      uStack_80 = 0x5fc41d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_7c = (undefined *)0x5fc429;
    FUN_00412600();
    puStack_7c = (undefined *)(unaff_EBP + -0x20);
    uStack_80 = 0x5fc435;
    puVar5 = (undefined4 *)FUN_004489f5();
    uStack_80 = *puVar5;
    puStack_7c = (undefined *)0x1;
    iStack_84 = 0x5fc442;
    FUN_0040ee87();
    iVar4 = *(int *)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar4 == 0) {
      puStack_7c = (undefined *)0x80004003;
      uStack_80 = 0x5fc455;
      FUN_00878dfb();
    }
    piStack_8c = *(int **)p_Var1;
    iVar4 = *piStack_8c;
    uStack_88 = *(undefined4 *)(unaff_EBP + -100);
    iStack_84 = *(undefined4 *)(unaff_EBP + -0x60);
    uStack_80 = *(undefined4 *)(unaff_EBP + -0x5c);
    *(int **)(unaff_EBP + 0xc) = piStack_8c;
    puStack_7c = *(undefined **)(unaff_EBP + -0x58);
    piStack_90 = (int *)0x5fc46f;
    iVar4 = (**(code **)(iVar4 + 0xfc))();
    if (iVar4 < 0) {
      piStack_90 = (int *)&DAT_00963df8;
      piStack_94 = *(int **)(unaff_EBP + 0xc);
      piStack_9c = (int *)0x5fc481;
      puStack_98 = (undefined4 *)iVar4;
      FUN_00878e09();
    }
    piStack_90 = (int *)(unaff_EBP + -100);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_94 = (int *)0x5fc48e;
    piStack_90 = (int *)FUN_00402bc3();
    if ((int)piStack_90 < 0) {
      piStack_94 = (int *)0x5fc499;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    piStack_90 = (int *)0x5fc4a5;
    FUN_00412600();
    if (*(int *)p_Var1 == 0) {
      piStack_90 = (int *)0x80004003;
      piStack_94 = (int *)0x5fc4b4;
      FUN_00878dfb();
    }
    piVar3 = *(int **)p_Var1;
    piStack_90 = (int *)0xffffffff;
    puStack_98 = (undefined4 *)0x5fc4c1;
    piStack_94 = piVar3;
    iVar4 = (**(code **)(*piVar3 + 0xe0))();
    if (iVar4 < 0) {
      puStack_98 = (undefined4 *)&DAT_00963df8;
      uStack_a4 = 0x5fc4d1;
      iStack_a0 = iVar4;
      piStack_9c = piVar3;
      FUN_00878e09();
    }
    puStack_98 = &DAT_00980690;
    piStack_9c = (int *)0x5fc4df;
    FUN_00403191();
    puStack_98 = &DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    piStack_9c = (int *)0x5fc4ec;
    FUN_00403191();
    iVar4 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xc0);
    iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1d8);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (iVar2 == 0) {
      puStack_98 = (undefined4 *)0x80004003;
      piStack_9c = (int *)0x5fc50d;
      FUN_00878dfb();
    }
    uStack_a4 = *(undefined4 *)(unaff_EBP + -0x54);
    iStack_a0 = *(int *)(unaff_EBP + -0x50);
    piStack_9c = *(int **)(unaff_EBP + -0x4c);
    puStack_98 = *(undefined4 **)(unaff_EBP + -0x48);
    uStack_b4 = *(undefined4 *)(unaff_EBP + -100);
    piStack_c0 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x1d8);
    iVar2 = *piStack_c0;
    uStack_b0 = *(undefined4 *)(unaff_EBP + -0x60);
    uStack_b8 = 0x71;
    uStack_ac = *(undefined4 *)(unaff_EBP + -0x5c);
    iStack_bc = (-(uint)(iVar4 != 0) & 0xffffffaa) + 0x1f0;
    *(int **)(unaff_EBP + 0xc) = piStack_c0;
    uStack_a8 = *(undefined4 *)(unaff_EBP + -0x58);
    puStack_c4 = (undefined4 *)0x5fc54b;
    iVar4 = (**(code **)(iVar2 + 0x90))();
    if (iVar4 < 0) {
      puStack_6c = *(undefined1 **)(unaff_EBP + 0xc);
      iStack_74 = 0x5fc55d;
      iStack_70 = iVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_6c = (undefined1 *)0x5fc56a;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_6c = (undefined1 *)0x5fc577;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    puStack_6c = (undefined1 *)0x5fc584;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_6c = (undefined1 *)0x5fc58f;
      FUN_00878dfb();
    }
    iVar4 = *(int *)(unaff_EBP + -0x14);
    iVar2 = FUN_005fe30d();
    if (iVar2 == 0) {
      puStack_6c = (undefined1 *)(unaff_EBP + -0x20);
      iStack_70 = 0x5fc5d3;
      iStack_74 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
      *(undefined4 *)(unaff_EBP + -4) = 0xe;
    }
    else {
      puStack_6c = (undefined1 *)(unaff_EBP + -0x1c);
      iStack_70 = 0x5fc5b3;
      iStack_74 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
    }
    puStack_6c = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x18) = &iStack_70;
    piStack_78 = (int *)0x5fc5eb;
    FUN_004059fd();
    iStack_74 = unaff_EBP + -100;
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
    piStack_78 = (int *)0x5fc5fd;
    FUN_0040263d();
    piStack_78 = (int *)0x5fc604;
    FUN_004048a4();
    *(undefined4 *)(unaff_EBP + -4) = 0x10;
    iStack_70 = 0x5fc612;
    uVar6 = FUN_004032b4();
    puVar8 = &stack0xffffff98;
    *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
    *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffff98;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      puStack_6c = (undefined1 *)(unaff_EBP + 0xc);
      iStack_70 = 0x5fc62b;
      puStack_6c = (undefined1 *)FUN_0041a581();
      puVar8 = extraout_ECX_02;
      if (((int)puStack_6c < 0) && (puStack_6c != (undefined1 *)0x80004002)) {
        iStack_70 = 0x5fc63c;
        FUN_00878dfb();
        puVar8 = extraout_ECX_03;
      }
    }
    iStack_70 = iVar4 + 0x1d8;
    *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_6c;
    iStack_74 = 0x5fc64e;
    puStack_6c = puVar8;
    FUN_0041160e();
    iStack_70 = 0x5fc653;
    FUN_0042ea7d();
    iStack_70 = unaff_EBP + -100;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_74 = 0x5fc65f;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      puStack_6c = (undefined1 *)0x5fc66c;
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
  puStack_6c = (undefined1 *)0x5fc6a0;
  FUN_00403191();
  puStack_6c = (undefined1 *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_70 = 0x5fc6b1;
  FUN_004031b7();
  bVar11 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (bVar11) {
    puStack_6c = (undefined1 *)0x5fc6c7;
    FUN_00878dfb();
  }
  puStack_6c = (undefined1 *)(unaff_EBP + -100);
  iStack_70 = 6;
  iStack_74 = 0;
  piStack_78 = (int *)0x0;
  puStack_7c = (undefined *)0x0;
  uStack_80 = 0;
  iStack_84 = unaff_EBP + 0xc;
  uStack_88 = 0x5fc6e4;
  puVar5 = (undefined4 *)FUN_0042a39f();
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x14) + 0x1e0);
  puStack_6c = (undefined1 *)0x5fc6f6;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar5);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_6c = (undefined1 *)0x5fc70b;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_6c = (undefined1 *)0x5fc716;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_6c = (undefined1 *)0x5fc723;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    puStack_6c = (undefined1 *)0x5fc72e;
    FUN_00878dfb();
  }
  puStack_6c = (undefined1 *)0x5fc739;
  puVar5 = (undefined4 *)FUN_004489f5();
  puStack_6c = (undefined1 *)*puVar5;
  iStack_70 = 0x5fc746;
  FUN_0040ee87();
  iVar4 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar4 == 0) {
    puStack_6c = (undefined1 *)0x5fc758;
    FUN_00878dfb();
  }
  piStack_78 = *(int **)p_Var1;
  iVar4 = *piStack_78;
  iStack_74 = *(undefined4 *)(unaff_EBP + -100);
  iStack_70 = *(int *)(unaff_EBP + -0x60);
  puStack_6c = *(undefined1 **)(unaff_EBP + -0x5c);
  *(int **)(unaff_EBP + 0xc) = piStack_78;
  puStack_7c = (undefined *)0x5fc76f;
  iVar4 = (**(code **)(iVar4 + 100))();
  if (iVar4 < 0) {
    puStack_7c = &DAT_00963de8;
    uStack_80 = *(undefined4 *)(unaff_EBP + 0xc);
    uStack_88 = 0x5fc781;
    iStack_84 = iVar4;
    FUN_00878e09();
  }
  puStack_7c = (undefined *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  uStack_80 = 0x5fc78e;
  puStack_7c = (undefined *)FUN_00402bc3();
  if ((int)puStack_7c < 0) {
    uStack_80 = 0x5fc799;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_7c = (undefined *)0x5fc7a5;
  FUN_00412600();
  puStack_7c = (undefined *)(unaff_EBP + -0x20);
  uStack_80 = 0x5fc7b1;
  puVar5 = (undefined4 *)FUN_004489f5();
  uStack_80 = *puVar5;
  puStack_7c = (undefined *)0x1;
  iStack_84 = 0x5fc7be;
  FUN_0040ee87();
  iVar4 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  if (iVar4 == 0) {
    puStack_7c = (undefined *)0x80004003;
    uStack_80 = 0x5fc7d1;
    FUN_00878dfb();
  }
  piStack_8c = *(int **)p_Var1;
  iVar4 = *piStack_8c;
  uStack_88 = *(undefined4 *)(unaff_EBP + -100);
  iStack_84 = *(undefined4 *)(unaff_EBP + -0x60);
  uStack_80 = *(undefined4 *)(unaff_EBP + -0x5c);
  *(int **)(unaff_EBP + 0xc) = piStack_8c;
  puStack_7c = *(undefined **)(unaff_EBP + -0x58);
  piStack_90 = (int *)0x5fc7eb;
  iVar4 = (**(code **)(iVar4 + 0xfc))();
  if (iVar4 < 0) {
    piStack_90 = (int *)&DAT_00963df8;
    piStack_94 = *(int **)(unaff_EBP + 0xc);
    piStack_9c = (int *)0x5fc7fd;
    puStack_98 = (undefined4 *)iVar4;
    FUN_00878e09();
  }
  piStack_90 = (int *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  piStack_94 = (int *)0x5fc80a;
  piStack_90 = (int *)FUN_00402bc3();
  if ((int)piStack_90 < 0) {
    piStack_94 = (int *)0x5fc815;
    FUN_00878dfb();
  }
  piStack_90 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_90 != (int *)0x0) {
    piStack_94 = (int *)0x5fc826;
    (**(code **)(*piStack_90 + 8))();
  }
  if (*(int *)p_Var1 == 0) {
    piStack_90 = (int *)0x80004003;
    piStack_94 = (int *)0x5fc835;
    FUN_00878dfb();
  }
  piVar3 = *(int **)p_Var1;
  piStack_90 = (int *)0xffffffff;
  puStack_98 = (undefined4 *)0x5fc842;
  piStack_94 = piVar3;
  iVar4 = (**(code **)(*piVar3 + 0xe0))();
  if (iVar4 < 0) {
    puStack_98 = (undefined4 *)&DAT_00963df8;
    uStack_a4 = 0x5fc852;
    iStack_a0 = iVar4;
    piStack_9c = piVar3;
    FUN_00878e09();
  }
  puStack_98 = &DAT_00980690;
  piStack_9c = (int *)0x5fc860;
  FUN_00403191();
  puStack_98 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  piStack_9c = (int *)0x5fc86d;
  FUN_00403191();
  iVar4 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (iVar4 == 0) {
    puStack_98 = (undefined4 *)0x80004003;
    piStack_9c = (int *)0x5fc880;
    FUN_00878dfb();
  }
  piStack_c0 = *(int **)p_Var1;
  uStack_a4 = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_a0 = *(undefined4 *)(unaff_EBP + -0x50);
  iVar4 = *piStack_c0;
  piStack_9c = *(int **)(unaff_EBP + -0x4c);
  puStack_98 = *(undefined4 **)(unaff_EBP + -0x48);
  uStack_b4 = *(undefined4 *)(unaff_EBP + -100);
  uStack_b0 = *(undefined4 *)(unaff_EBP + -0x60);
  uStack_b8 = 0x97;
  uStack_ac = *(undefined4 *)(unaff_EBP + -0x5c);
  iStack_bc = 0x57;
  *(int **)(unaff_EBP + 0xc) = piStack_c0;
  uStack_a8 = *(undefined4 *)(unaff_EBP + -0x58);
  puStack_c4 = (undefined4 *)0x5fc8ad;
  iVar4 = (**(code **)(iVar4 + 0x90))();
  if (iVar4 < 0) {
    puStack_c4 = (undefined4 *)&DAT_00963de8;
    uStack_c8 = *(undefined4 *)(unaff_EBP + 0xc);
    uStack_d0 = 0x5fc8bf;
    iStack_cc = iVar4;
    FUN_00878e09();
  }
  puStack_c4 = (undefined4 *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uStack_c8 = 0x5fc8cc;
  puStack_c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_c4 < 0) {
    uStack_c8 = 0x5fc8d7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_c4 = (undefined4 *)(unaff_EBP + -0x54);
  uStack_c8 = 0x5fc8e4;
  puStack_c4 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_c4 < 0) {
    uStack_c8 = 0x5fc8ef;
    FUN_00878dfb();
  }
  puStack_c4 = &DAT_00980690;
  uStack_c8 = 0x5fc8fd;
  FUN_00403191();
  puStack_c4 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_c8 = 0x5fc90a;
  FUN_00403191();
  iVar4 = *(int *)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (iVar4 == 0) {
    puStack_c4 = (undefined4 *)0x80004003;
    uStack_c8 = 0x5fc91d;
    FUN_00878dfb();
  }
  puStack_c4 = (undefined4 *)(unaff_EBP + -0x20);
  uStack_c8 = 0x5fc928;
  piStack_ec = (int *)FUN_004113e5();
  iVar4 = *piStack_ec;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  if (iVar4 == 0) {
    puStack_c4 = (undefined4 *)0x80004003;
    uStack_c8 = 0x5fc93d;
    FUN_00878dfb();
  }
  piStack_ec = (int *)*piStack_ec;
  uStack_d0 = *(undefined4 *)(unaff_EBP + -0x54);
  iStack_cc = *(undefined4 *)(unaff_EBP + -0x50);
  iVar4 = *piStack_ec;
  uStack_c8 = *(undefined4 *)(unaff_EBP + -0x4c);
  puStack_c4 = *(undefined4 **)(unaff_EBP + -0x48);
  uStack_e0 = *(undefined4 *)(unaff_EBP + -100);
  uStack_dc = *(undefined4 *)(unaff_EBP + -0x60);
  uStack_e4 = 0xff;
  uStack_d8 = *(undefined4 *)(unaff_EBP + -0x5c);
  uStack_e8 = 0xff;
  *(int **)(unaff_EBP + 0xc) = piStack_ec;
  uStack_d4 = *(undefined4 *)(unaff_EBP + -0x58);
  piStack_f0 = (int *)0x5fc96a;
  p_Var7 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(**(code **)(iVar4 + 0x90))();
  if ((int)p_Var7 < 0) {
    piStack_f0 = (int *)&DAT_00963de8;
    puStack_f4 = *(undefined1 **)(unaff_EBP + 0xc);
    p_Stack_f8 = p_Var7;
    FUN_00878e09();
  }
  piStack_f0 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (piStack_f0 != (int *)0x0) {
    puStack_f4 = (undefined1 *)0x5fc98f;
    (**(code **)(*piStack_f0 + 8))();
  }
  piStack_f0 = (int *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_f4 = (undefined1 *)0x5fc99c;
  piStack_f0 = (int *)FUN_00402bc3();
  if ((int)piStack_f0 < 0) {
    puStack_f4 = (undefined1 *)0x5fc9a7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_f0 = (int *)(unaff_EBP + -0x54);
  puStack_f4 = (undefined1 *)0x5fc9b4;
  piStack_f0 = (int *)FUN_00402bc3();
  if ((int)piStack_f0 < 0) {
    puStack_f4 = (undefined1 *)0x5fc9bf;
    FUN_00878dfb();
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xac4) == 1) {
    piStack_f0 = (int *)0x632;
    puStack_f4 = (undefined1 *)(unaff_EBP + -0x20);
    p_Stack_f8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fc9e1;
    uVar6 = FUN_00679e4e();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  }
  else {
    piStack_f0 = (int *)0x5fc9f0;
    iVar4 = FUN_005fe30d();
    if (iVar4 == 0) {
      piStack_f0 = (int *)0x633;
      puStack_f4 = (undefined1 *)(unaff_EBP + -0x18);
      p_Stack_f8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fca27;
      uVar6 = FUN_00679e4e();
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
      *(undefined4 *)(unaff_EBP + -4) = 0x1e;
    }
    else {
      piStack_f0 = (int *)0x631;
      puStack_f4 = (undefined1 *)(unaff_EBP + -0x1c);
      p_Stack_f8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fca07;
      uVar6 = FUN_00679e4e();
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
      *(undefined4 *)(unaff_EBP + -4) = 0x1d;
    }
  }
  piStack_f0 = (int *)0x0;
  puStack_f4 = (undefined1 *)0x0;
  *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> ***)(unaff_EBP + -0x24) = &p_Stack_f8;
  FUN_004059fd(uVar6);
  *(undefined4 *)(unaff_EBP + -4) = 0x1e;
  iVar2 = *(int *)(unaff_EBP + -0x14);
  iVar4 = unaff_EBP + -100;
  FUN_0040263d(iVar4);
  FUN_004048a4(iVar4);
  *(undefined4 *)(unaff_EBP + -4) = 0x20;
  p_Stack_f8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fca66;
  uVar6 = FUN_004032b4();
  ppiVar9 = &piStack_f0;
  *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
  piStack_f0 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x24) = &piStack_f0;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    puStack_f4 = (undefined1 *)(unaff_EBP + 0xc);
    p_Stack_f8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fca7f;
    puStack_f4 = (undefined1 *)FUN_0041a581();
    ppiVar9 = (int **)extraout_ECX_04;
    if (((int)puStack_f4 < 0) && (puStack_f4 != (undefined1 *)0x80004002)) {
      p_Stack_f8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fca90;
      FUN_00878dfb();
      ppiVar9 = (int **)extraout_ECX_05;
    }
  }
  *(undefined1 ***)(unaff_EBP + -0x24) = &puStack_f4;
  p_Stack_f8 = p_Var1;
  puStack_f4 = (undefined1 *)ppiVar9;
  FUN_0041160e();
  p_Stack_f8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fcaa1;
  FUN_0042ea7d();
  p_Stack_f8 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -100);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  piStack_f0 = (int *)FUN_00402bc3();
  if ((int)piStack_f0 < 0) {
    puStack_f4 = (undefined1 *)0x5fcabb;
    FUN_00878dfb();
  }
  uVar10 = *(uint *)(unaff_EBP + -0x10);
  if (((uVar10 & 0x10) != 0) && (uVar10 = uVar10 & 0xffffffef, *(int *)(unaff_EBP + -0x18) != 0)) {
    piStack_f0 = (int *)0x5fcad2;
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  if (((uVar10 & 8) != 0) && (uVar10 = uVar10 & 0xfffffff7, *(int *)(unaff_EBP + -0x1c) != 0)) {
    piStack_f0 = (int *)0x5fcae9;
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  if (((uVar10 & 4) != 0) && (*(int *)(unaff_EBP + -0x20) != 0)) {
    piStack_f0 = (int *)0x5fcafd;
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
  }
  piStack_f0 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0xaa0) = 0;
  if (piStack_f0 != (int *)0x0) {
    puStack_f4 = (undefined1 *)0x5fcb17;
    (**(code **)(*piStack_f0 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


