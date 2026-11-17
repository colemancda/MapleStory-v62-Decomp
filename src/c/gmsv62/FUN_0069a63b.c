/* FUN_0069a63b - 0x0069a63b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069a63b(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int *piVar5;
  int unaff_EBP;
  int iStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar4 = *(int *)(extraout_ECX + 0x3d8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if ((iVar4 == 2) && (1 < *(int *)(extraout_ECX + 0x3d4))) {
    iStack_34 = 0;
    iStack_38 = 0x69a681;
    FUN_004031b7();
    iVar4 = *(int *)(extraout_ECX + 0x3e0);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar4 == 0) {
      iStack_34 = 0x69a69d;
      FUN_00878dfb();
    }
    iStack_34 = unaff_EBP + -0x18;
    iStack_38 = 0x69a6ac;
    puVar1 = (undefined4 *)FUN_00425067();
    iStack_34 = 0x69a6b6;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar1);
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      iStack_34 = 0x69a6c3;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    iVar4 = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_34 = 0x69a6d0;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_34 = 0x69a6db;
      FUN_00878dfb();
      iVar4 = extraout_ECX_00;
    }
    iStack_34 = 0;
    *(int **)(unaff_EBP + -0x1c) = &iStack_38;
    iStack_38 = iVar4;
    FUN_00679e4e(&iStack_38,0x738);
    iVar4 = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0040263d(iVar4);
    FUN_004048a4(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_38 = 0x69a718;
    uVar3 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
    iStack_34 = 0x69a727;
    iVar4 = FUN_0041a581();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      iStack_34 = 0x69a738;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_34 = 0x69a745;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_34 = 0x69a750;
      FUN_00878dfb();
    }
    iStack_34 = 0x69a75a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iStack_34 = unaff_EBP + -0x2c;
    iStack_38 = 0x69a768;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_34 = 0x69a774;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (piVar5 == (int *)0x0) {
      iStack_34 = 0x69a789;
      FUN_00878dfb();
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    iVar4 = *piVar5;
    iVar2 = *(int *)(extraout_ECX + 0x3d4);
    iStack_38 = *(int *)(unaff_EBP + -0x28);
    iStack_34 = *(undefined4 *)(unaff_EBP + -0x24);
    *(int **)(unaff_EBP + -0x18) = piVar5;
    iVar4 = (**(code **)(iVar4 + 0x80))
                      (piVar5,0,(5 - iVar2) * 0x67,*(undefined4 *)(unaff_EBP + -0x14),
                       *(undefined4 *)(unaff_EBP + -0x2c));
    if (iVar4 < 0) {
      iStack_34 = *(undefined4 *)(unaff_EBP + -0x18);
      iStack_38 = iVar4;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_34 = 0x69a7d4;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_34 = 0x69a7df;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_34 = 0x69a7ef;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_34 = 0x69a800;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


