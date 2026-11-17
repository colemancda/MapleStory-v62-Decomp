/* FUN_004991c5 - 0x004991c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004991c5(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  
  FUN_00879bb8();
  iVar4 = *(int *)(unaff_EBP + 8);
  if ((*(int *)(extraout_ECX + 0x5c) == iVar4) || (*(int *)(extraout_ECX + 0x68) == 0))
  goto LAB_004993e6;
  *(int *)(extraout_ECX + 0x5c) = iVar4;
  if (iVar4 == 0) {
    iStack_44 = 0x4993c4;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x6c),
               (IBinding *)0x0);
    iVar4 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x20))();
    if (iVar4 == 0) {
      uVar5 = 2;
    }
    else {
      if (*(int *)(extraout_ECX + 0x50) != 0) goto LAB_004993d6;
      uVar5 = 0;
    }
  }
  else {
    iStack_44 = 0xff;
    iStack_48 = unaff_EBP + -0x14;
    uStack_4c = 0x49920b;
    FUN_004489f5();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_48 = 0x499215;
    FUN_00424e27();
    iStack_48 = 0x49921c;
    iStack_48 = FUN_004320e3();
    puStack_50 = (undefined1 *)&uStack_4c;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_4c;
    uStack_54 = 0x49922c;
    FUN_004489f5();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_50 = (undefined1 *)0x49923a;
    FUN_00424df4();
    puStack_50 = (undefined1 *)0x499241;
    puStack_50 = (undefined1 *)FUN_00424f08();
    uStack_54 = 0x499249;
    FUN_00424df4();
    uStack_54 = 0x499250;
    uStack_54 = FUN_00424ee1();
    iStack_58 = unaff_EBP + -0x10;
    uStack_5c = 0x49925d;
    uStack_5c = FUN_004489f5();
    *(int **)(unaff_EBP + -0x1c) = &iStack_58;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_60 = 0x49926d;
    FUN_0048bccf();
    uStack_5c = 0;
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_60;
    FUN_00424dbc(extraout_ECX + 0x68);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piVar3 = (int *)FUN_0042e5bf(unaff_EBP + 8);
    piVar3 = (int *)*piVar3;
    piVar2 = *(int **)(extraout_ECX + 0x6c);
    piVar1 = (int *)(extraout_ECX + 0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (piVar2 != piVar3) {
      *piVar1 = (int)piVar3;
      FUN_00424ed4();
      if (piVar2 != (int *)0x0) {
        iStack_44 = 0x4992b0;
        (**(code **)(*piVar2 + 8))();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      iStack_44 = 0x4992c1;
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
      iStack_44 = 0x4992d2;
      (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
      iStack_44 = 0x4992e3;
      (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
    }
    iStack_44 = 0x4992ef;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    iStack_44 = unaff_EBP + -0x3c;
    iStack_48 = 0x4992fd;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_44 = 0x499309;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 5;
    iStack_44 = 0x499316;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_44 = unaff_EBP + -0x2c;
    iStack_48 = 0x499324;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_44 = 0x499330;
      FUN_00878dfb();
    }
    iVar4 = *piVar1;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar4 == 0) {
      iStack_44 = 0x499343;
      FUN_00878dfb();
    }
    piVar1 = (int *)*piVar1;
    uStack_4c = *(undefined4 *)(unaff_EBP + -0x3c);
    iStack_48 = *(undefined4 *)(unaff_EBP + -0x38);
    iVar4 = *piVar1;
    iStack_44 = *(undefined4 *)(unaff_EBP + -0x34);
    uStack_5c = *(undefined4 *)(unaff_EBP + -0x2c);
    iStack_58 = *(int *)(unaff_EBP + -0x28);
    uStack_54 = *(undefined4 *)(unaff_EBP + -0x24);
    uStack_60 = 0;
    *(int **)(unaff_EBP + 8) = piVar1;
    puStack_50 = *(undefined1 **)(unaff_EBP + -0x20);
    iVar4 = (**(code **)(iVar4 + 0x110))(piVar1);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    iVar4 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x20))();
    if (iVar4 == 0) goto LAB_004993e6;
LAB_004993d6:
    uVar5 = 3;
  }
  FUN_00498f74(uVar5);
LAB_004993e6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


