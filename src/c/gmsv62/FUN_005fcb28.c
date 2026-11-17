/* FUN_005fcb28 - 0x005fcb28 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005fcb28(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var4;
  undefined4 uVar5;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined **ppuVar6;
  int unaff_EBP;
  bool bVar7;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Stack_bc;
  undefined1 *puStack_b8;
  undefined *puStack_b4;
  int *piStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  int *piStack_8c;
  undefined4 *puStack_88;
  int *piStack_84;
  undefined *puStack_80;
  int *piStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined *puStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 200);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (1 < iVar2) {
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1e4);
    if (*(int *)(extraout_ECX + 0x1e4) != 0) {
      iStack_5c = 0xfffffffe;
      uStack_60 = 0x5fcb69;
      FUN_004031b7();
      iVar2 = *(int *)this;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar2 == 0) {
        iStack_5c = 0x5fcb7a;
        FUN_00878dfb();
      }
      iStack_5c = unaff_EBP + -0x1c;
      uStack_60 = 0x5fcb89;
      FUN_0041141a();
      FUN_004125e6();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_5c = 0x5fcb9e;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_5c = 0x5fcba9;
        FUN_00878dfb();
      }
    }
    iStack_5c = 0x5fcbb6;
    FUN_00403191();
    iStack_5c = 0;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uStack_60 = 0x5fcbc7;
    FUN_004031b7();
    bVar7 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (bVar7) {
      iStack_5c = 0x5fcbdd;
      FUN_00878dfb();
    }
    iStack_5c = unaff_EBP + -0x34;
    uStack_60 = 6;
    uStack_64 = 0;
    piStack_68 = (int *)0x0;
    puStack_6c = (undefined *)0x0;
    uStack_70 = 0;
    iStack_74 = unaff_EBP + -0x1c;
    uStack_78 = 0x5fcbfa;
    puVar3 = (undefined4 *)FUN_0042a39f();
    iStack_5c = 0x5fcc03;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_5c = 0x5fcc18;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_5c = 0x5fcc23;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_5c = 0x5fcc30;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_5c = 0x5fcc3b;
      FUN_00878dfb();
    }
    iStack_5c = 0x5fcc47;
    puVar3 = (undefined4 *)FUN_004489f5();
    iStack_5c = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    uStack_60 = 0x5fcc5a;
    FUN_0040ee87();
    iVar2 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar2 == 0) {
      iStack_5c = 0x5fcc6c;
      FUN_00878dfb();
    }
    piStack_68 = *(int **)this;
    iVar2 = *piStack_68;
    uStack_64 = *(undefined4 *)(unaff_EBP + -0x44);
    uStack_60 = *(undefined4 *)(unaff_EBP + -0x40);
    iStack_5c = *(undefined4 *)(unaff_EBP + -0x3c);
    *(int **)(unaff_EBP + -0x1c) = piStack_68;
    puStack_6c = (undefined *)0x5fcc83;
    iVar2 = (**(code **)(iVar2 + 100))();
    if (iVar2 < 0) {
      puStack_6c = &DAT_00963de8;
      uStack_70 = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_78 = 0x5fcc95;
      iStack_74 = iVar2;
      FUN_00878e09();
    }
    puStack_6c = (undefined *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_70 = 0x5fcca2;
    puStack_6c = (undefined *)FUN_00402bc3();
    if ((int)puStack_6c < 0) {
      uStack_70 = 0x5fccad;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_6c = (undefined *)0x5fccb9;
    FUN_00412600();
    puStack_6c = (undefined *)(unaff_EBP + -0x1c);
    uStack_70 = 0x5fccc5;
    puVar3 = (undefined4 *)FUN_004489f5();
    uStack_70 = *puVar3;
    puStack_6c = (undefined *)0x1;
    *(undefined4 *)(unaff_EBP + -4) = 5;
    iStack_74 = 0x5fccd9;
    FUN_0040ee87();
    iVar2 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar2 == 0) {
      puStack_6c = (undefined *)0x80004003;
      uStack_70 = 0x5fccec;
      FUN_00878dfb();
    }
    piStack_7c = *(int **)this;
    iVar2 = *piStack_7c;
    uStack_78 = *(undefined4 *)(unaff_EBP + -0x44);
    iStack_74 = *(undefined4 *)(unaff_EBP + -0x40);
    uStack_70 = *(undefined4 *)(unaff_EBP + -0x3c);
    *(int **)(unaff_EBP + -0x20) = piStack_7c;
    puStack_6c = *(undefined **)(unaff_EBP + -0x38);
    puStack_80 = (undefined *)0x5fcd06;
    iVar2 = (**(code **)(iVar2 + 0xfc))();
    if (iVar2 < 0) {
      puStack_80 = &DAT_00963df8;
      piStack_84 = *(int **)(unaff_EBP + -0x20);
      piStack_8c = (int *)0x5fcd19;
      puStack_88 = (undefined4 *)iVar2;
      FUN_00878e09();
    }
    puStack_80 = (undefined *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_84 = (int *)0x5fcd26;
    puStack_80 = (undefined *)FUN_00402bc3();
    if ((int)puStack_80 < 0) {
      piStack_84 = (int *)0x5fcd31;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_80 = (undefined *)0x5fcd3d;
    FUN_00412600();
    if (*(int *)this == 0) {
      puStack_80 = (undefined *)0x80004003;
      piStack_84 = (int *)0x5fcd4c;
      FUN_00878dfb();
    }
    piVar1 = *(int **)this;
    puStack_80 = (undefined *)0xffffffff;
    puStack_88 = (undefined4 *)0x5fcd59;
    piStack_84 = piVar1;
    iVar2 = (**(code **)(*piVar1 + 0xe0))();
    if (iVar2 < 0) {
      puStack_88 = (undefined4 *)&DAT_00963df8;
      uStack_94 = 0x5fcd65;
      iStack_90 = iVar2;
      piStack_8c = piVar1;
      FUN_00878e09();
    }
    puStack_88 = &DAT_00980690;
    piStack_8c = (int *)0x5fcd73;
    FUN_00403191();
    puStack_88 = &DAT_00980690;
    *(undefined4 *)(unaff_EBP + -4) = 7;
    piStack_8c = (int *)0x5fcd83;
    FUN_00403191();
    iVar2 = *(int *)this;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar2 == 0) {
      puStack_88 = (undefined4 *)0x80004003;
      piStack_8c = (int *)0x5fcd96;
      FUN_00878dfb();
    }
    piStack_b0 = *(int **)this;
    uStack_94 = *(undefined4 *)(unaff_EBP + -0x34);
    iStack_90 = *(undefined4 *)(unaff_EBP + -0x30);
    iVar2 = *piStack_b0;
    piStack_8c = *(int **)(unaff_EBP + -0x2c);
    puStack_88 = *(undefined4 **)(unaff_EBP + -0x28);
    uStack_a4 = *(undefined4 *)(unaff_EBP + -0x44);
    uStack_a0 = *(undefined4 *)(unaff_EBP + -0x40);
    uStack_a8 = 0x3f;
    uStack_9c = *(undefined4 *)(unaff_EBP + -0x3c);
    uStack_ac = 0x1ef;
    *(int **)(unaff_EBP + -0x20) = piStack_b0;
    uStack_98 = *(undefined4 *)(unaff_EBP + -0x38);
    puStack_b4 = (undefined *)0x5fcdc3;
    p_Var4 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(**(code **)(iVar2 + 0x90))();
    if ((int)p_Var4 < 0) {
      puStack_b4 = &DAT_00963de8;
      puStack_b8 = *(undefined1 **)(unaff_EBP + -0x20);
      p_Stack_bc = p_Var4;
      FUN_00878e09();
    }
    puStack_b4 = (undefined *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_b8 = (undefined1 *)0x5fcde4;
    puStack_b4 = (undefined *)FUN_00402bc3();
    if ((int)puStack_b4 < 0) {
      puStack_b8 = (undefined1 *)0x5fcdef;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puStack_b4 = (undefined *)(unaff_EBP + -0x34);
    puStack_b8 = (undefined1 *)0x5fcdfc;
    puStack_b4 = (undefined *)FUN_00402bc3();
    if ((int)puStack_b4 < 0) {
      puStack_b8 = (undefined1 *)0x5fce07;
      FUN_00878dfb();
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xaa8) == 0) {
      puStack_b4 = (undefined *)0x635;
      puStack_b8 = (undefined1 *)(unaff_EBP + -0x18);
      p_Stack_bc = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fce48;
      uVar5 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x10) = 2;
      *(undefined4 *)(unaff_EBP + -4) = 10;
    }
    else {
      puStack_b4 = (undefined *)0x634;
      puStack_b8 = (undefined1 *)(unaff_EBP + -0x24);
      p_Stack_bc = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fce25;
      uVar5 = FUN_00679e4e();
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      *(undefined4 *)(unaff_EBP + -4) = 9;
    }
    puStack_b4 = (undefined *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> ***)(unaff_EBP + -0x20) = &p_Stack_bc;
    FUN_004059fd(uVar5);
    iVar2 = unaff_EBP + -0x54;
    *(undefined4 *)(unaff_EBP + -4) = 10;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xc;
    p_Stack_bc = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fce8f;
    uVar5 = FUN_004032b4();
    ppuVar6 = &puStack_b4;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar5;
    puStack_b4 = (undefined *)0x0;
    *(undefined ***)(unaff_EBP + -0x20) = &puStack_b4;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      puStack_b8 = (undefined1 *)(unaff_EBP + -0x14);
      p_Stack_bc = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fcea8;
      puStack_b8 = (undefined1 *)FUN_0041a581();
      ppuVar6 = (undefined **)extraout_ECX_00;
      if (((int)puStack_b8 < 0) && (puStack_b8 != (undefined1 *)0x80004002)) {
        p_Stack_bc = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fceb9;
        FUN_00878dfb();
        ppuVar6 = (undefined **)extraout_ECX_01;
      }
    }
    *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_b8;
    p_Stack_bc = this;
    puStack_b8 = (undefined1 *)ppuVar6;
    FUN_0041160e();
    p_Stack_bc = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x5fceca;
    FUN_0042ea7d();
    p_Stack_bc = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x54);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    puStack_b4 = (undefined *)FUN_00402bc3();
    if ((int)puStack_b4 < 0) {
      puStack_b8 = (undefined1 *)0x5fcee4;
      FUN_00878dfb();
    }
    if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
       (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
       *(int *)(unaff_EBP + -0x18) != 0)) {
      puStack_b4 = (undefined *)0x5fcefa;
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
    }
    if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) && (*(int *)(unaff_EBP + -0x24) != 0)) {
      puStack_b4 = (undefined *)0x5fcf0f;
      FUN_004030b1();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


