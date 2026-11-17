/* FUN_00709dab - 0x00709dab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00709dab(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int unaff_EBP;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined1 *local_68;
  int iStack_64;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x588) == 0) {
    iStack_64 = 0x709dd6;
    FUN_00878dfb();
  }
  iVar2 = FUN_0040cf4d();
  iVar3 = *(int *)(extraout_ECX + 0x594);
  iVar4 = *(int *)(iVar3 + 4);
  iVar2 = iVar2 + -1;
  *(int *)(unaff_EBP + -0x24) = iVar2;
  *(int *)(unaff_EBP + -0x14) = iVar4 / iVar2;
  iVar3 = (*(int *)(iVar3 + 4) - *(int *)(iVar3 + 8)) / *(int *)(unaff_EBP + -0x14);
  *(int *)(unaff_EBP + -0x14) = iVar3;
  if (iVar3 == iVar2) {
    iVar3 = iVar3 + -1;
    *(int *)(unaff_EBP + -0x14) = iVar3;
  }
  if (*(int *)(extraout_ECX + 0x580) != iVar3) {
    *(int *)(extraout_ECX + 0x580) = iVar3;
    FUN_0087a1b0();
    iStack_64 = 0;
    iStack_6c = *(int *)(unaff_EBP + -0x14);
    uStack_70 = 0x709e34;
    local_68 = &stack0xffffffa4;
    iStack_6c = FUN_00412335();
    *(undefined1 ***)(unaff_EBP + -0x20) = &local_68;
    uStack_70 = 0x709e40;
    FUN_004033a1();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_6c = unaff_EBP + -0x5c;
    uStack_70 = 0x709e4f;
    FUN_0040263d();
    uStack_70 = 0x709e56;
    FUN_004048a4();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    local_68 = (undefined1 *)0x709e64;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar3 != 0) {
      iStack_64 = 0x709e7a;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        iStack_64 = 0x709e8b;
        FUN_00878dfb();
      }
    }
    iVar3 = unaff_EBP + -0x5c;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_64 = 0x709e98;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_64 = 0x709ea3;
      FUN_00878dfb();
      iVar3 = extraout_ECX_00;
    }
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      iStack_64 = 0xff;
      local_68 = (undefined1 *)0x0;
      *(int **)(unaff_EBP + -0x28) = &iStack_6c;
      uStack_70 = 0;
      uStack_74 = 0x709ebb;
      iStack_6c = iVar3;
      FUN_00424e0a();
      uStack_70 = 0;
      uStack_74 = 0;
      iStack_78 = unaff_EBP + -0x20;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_7c = 0x709ecc;
      uStack_7c = FUN_004489f5();
      *(int **)(unaff_EBP + -0x2c) = &iStack_78;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_80 = 0x709edc;
      iStack_78 = extraout_ECX_01;
      FUN_0048bccf();
      uStack_7c = 0;
      *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_80;
      uStack_80 = extraout_ECX_02;
      FUN_00424dbc(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puVar5 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x1c);
      iStack_64 = 0x709f09;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x58c),
                 (IBinding *)*puVar5);
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        iStack_64 = 0x709f16;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        iStack_64 = 0x709f27;
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
    }
    if (*(int *)(extraout_ECX + 0x58c) != 0) {
      iStack_64 = 0x709f3f;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      iStack_64 = unaff_EBP + -0x4c;
      local_68 = (undefined1 *)0x709f4d;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_64 = 0x709f59;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_64 = 0x709f63;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      iStack_64 = unaff_EBP + -0x3c;
      local_68 = (undefined1 *)0x709f71;
      iVar3 = FUN_00402e32();
      if (iVar3 < 0) {
        iStack_64 = 0x709f7d;
        FUN_00878dfb();
      }
      iVar3 = *(int *)(extraout_ECX + 0x58c);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (iVar3 == 0) {
        iStack_64 = 0x709f93;
        FUN_00878dfb();
      }
      piVar1 = *(int **)(extraout_ECX + 0x58c);
      iStack_6c = *(int *)(unaff_EBP + -0x4c);
      local_68 = *(undefined1 **)(unaff_EBP + -0x48);
      iVar3 = *piVar1;
      iStack_64 = *(undefined4 *)(unaff_EBP + -0x44);
      uStack_7c = *(undefined4 *)(unaff_EBP + -0x3c);
      iStack_78 = *(int *)(unaff_EBP + -0x38);
      uStack_74 = *(undefined4 *)(unaff_EBP + -0x34);
      uStack_80 = 0x20;
      *(int **)(unaff_EBP + -0x20) = piVar1;
      uStack_70 = *(undefined4 *)(unaff_EBP + -0x30);
      puVar6 = (undefined1 *)(**(code **)(iVar3 + 0x110))(piVar1);
      if ((int)puVar6 < 0) {
        iStack_64 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_6c = 0x709fd1;
        local_68 = puVar6;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_64 = 0x709fde;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_64 = 0x709fe9;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_64 = 0x709ff6;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_64 = 0x70a001;
        FUN_00878dfb();
      }
    }
    if ((*(int *)(extraout_ECX + 0x57c) != 0) &&
       (*(int *)(unaff_EBP + -0x14) == *(int *)(unaff_EBP + -0x24) + -1)) {
      iStack_64 = unaff_EBP + -0x14;
      local_68 = (undefined1 *)0x70a029;
      FUN_00679d86();
      iStack_64 = unaff_EBP + -0x24;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      local_68 = (undefined1 *)0x70a03d;
      puVar5 = (undefined4 *)FUN_00679d86();
      iStack_64 = *puVar5;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      local_68 = (undefined1 *)0x70a05a;
      FUN_0046febf();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00402676();
      iStack_64 = 100;
      local_68 = *(undefined1 **)(unaff_EBP + -0x14);
      iStack_6c = 0x70a078;
      uVar7 = FUN_00433c19();
      *(undefined4 *)(extraout_ECX + 0x584) = uVar7;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00402676();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_64 = 0x70a09b;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


