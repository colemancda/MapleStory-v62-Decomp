/* FUN_00709aee - 0x00709aee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00709aee(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 *puVar5;
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
  int *piStack_64;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x588);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if (iVar1 == 0) {
    piStack_64 = (int *)0x709b17;
    FUN_00878dfb();
  }
  iVar1 = FUN_0040cf4d();
  FUN_0087a1b0();
  piStack_64 = (int *)0x0;
  uStack_70 = 0x709b34;
  iStack_6c = iVar1 + -1;
  local_68 = &stack0xffffffa4;
  iStack_6c = FUN_00412335();
  *(undefined1 ***)(unaff_EBP + -0x20) = &local_68;
  uStack_70 = 0x709b40;
  FUN_004033a1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_6c = unaff_EBP + -0x5c;
  uStack_70 = 0x709b4f;
  FUN_0040263d();
  uStack_70 = 0x709b56;
  FUN_004048a4();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  local_68 = (undefined1 *)0x709b64;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar1 != 0) {
    piStack_64 = (int *)0x709b7a;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      piStack_64 = (int *)0x709b8b;
      FUN_00878dfb();
    }
  }
  iVar1 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_64 = (int *)0x709b98;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_64 = (int *)0x709ba3;
    FUN_00878dfb();
    iVar1 = extraout_ECX_00;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piStack_64 = (int *)0xff;
    local_68 = (undefined1 *)0x0;
    *(int **)(unaff_EBP + -0x28) = &iStack_6c;
    uStack_70 = 0;
    uStack_74 = 0x709bc6;
    iStack_6c = iVar1;
    FUN_00424e0a();
    uStack_70 = 0;
    uStack_74 = 0;
    iStack_78 = unaff_EBP + -0x24;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_7c = 0x709bd8;
    uStack_7c = FUN_004489f5();
    *(int **)(unaff_EBP + -0x2c) = &iStack_78;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_80 = 0x709be8;
    iStack_78 = extraout_ECX_01;
    FUN_0048bccf();
    uStack_7c = 0;
    *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_80;
    uStack_80 = extraout_ECX_02;
    FUN_00424dbc(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puVar3 = (undefined4 *)FUN_0042e5bf(unaff_EBP + -0x20);
    piStack_64 = (int *)0x709c12;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar3);
    if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
      piStack_64 = (int *)0x709c1f;
      (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      piStack_64 = (int *)0x709c30;
      (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
    }
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      piStack_64 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffffa0;
      if (piStack_64 != (int *)0x0) {
        local_68 = (undefined1 *)0x709c50;
        (**(code **)(*piStack_64 + 4))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_64 = (int *)0x709c59;
      FUN_00424e82();
      piStack_64 = (int *)0x709c60;
      FUN_00427af9();
      piStack_64 = (int *)0x709c6c;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
      piStack_64 = (int *)(unaff_EBP + -0x4c);
      local_68 = (undefined1 *)0x709c7b;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        piStack_64 = (int *)0x709c87;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_64 = (int *)0x709c91;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
      piStack_64 = (int *)(unaff_EBP + -0x3c);
      local_68 = (undefined1 *)0x709c9b;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        piStack_64 = (int *)0x709ca7;
        FUN_00878dfb();
      }
      piVar4 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      if (piVar4 == (int *)0x0) {
        piStack_64 = (int *)0x709cbc;
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      iStack_6c = *(int *)(unaff_EBP + -0x4c);
      local_68 = *(undefined1 **)(unaff_EBP + -0x48);
      iVar1 = *piVar4;
      piStack_64 = *(int **)(unaff_EBP + -0x44);
      uStack_7c = *(undefined4 *)(unaff_EBP + -0x3c);
      iStack_78 = *(int *)(unaff_EBP + -0x38);
      uStack_74 = *(undefined4 *)(unaff_EBP + -0x34);
      uStack_80 = 0;
      *(int **)(unaff_EBP + -0x24) = piVar4;
      uStack_70 = *(undefined4 *)(unaff_EBP + -0x30);
      puVar5 = (undefined1 *)(**(code **)(iVar1 + 0x110))(piVar4);
      if ((int)puVar5 < 0) {
        piStack_64 = *(int **)(unaff_EBP + -0x24);
        iStack_6c = 0x709cf6;
        local_68 = puVar5;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_64 = (int *)0x709d03;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_64 = (int *)0x709d0e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      piStack_64 = (int *)0x709d1b;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        piStack_64 = (int *)0x709d26;
        FUN_00878dfb();
      }
    }
  }
  if (*(int *)(*(int *)(unaff_EBP + -0x18) + 0x57c) != 0) {
    piStack_64 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x584);
    if (piStack_64 != (int *)0x0) {
      local_68 = (undefined1 *)0x709d48;
      FUN_0043405b();
    }
    piStack_64 = (int *)(unaff_EBP + -0x24);
    local_68 = (undefined1 *)0x709d5b;
    puVar3 = (undefined4 *)FUN_00679d86();
    piStack_64 = (int *)*puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    local_68 = (undefined1 *)0x709d69;
    FUN_007d4073();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00402676();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    piStack_64 = (int *)0x709d88;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    piStack_64 = (int *)0x709d99;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


