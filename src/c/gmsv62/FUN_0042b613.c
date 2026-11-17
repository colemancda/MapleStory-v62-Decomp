/* FUN_0042b613 - 0x0042b613 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042b613(void)

{
  int iVar1;
  int *piVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 local_40;
  int iStack_3c;
  int *piStack_38;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  piStack_38 = (int *)0xff;
  iStack_3c = *(int *)(unaff_EBP + 0x20);
  iStack_44 = unaff_EBP + 0x1c;
  *(undefined4 **)(unaff_EBP + 0x20) = &local_40;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  uStack_48 = 0x42b647;
  local_40 = extraout_ECX;
  FUN_0041160e();
  iStack_44 = *(undefined4 *)(unaff_EBP + 0x18);
  uStack_48 = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined4 **)(unaff_EBP + 0x18) = &uStack_4c;
  uStack_4c = extraout_ECX_00;
  FUN_00433bdf(unaff_EBP + 0x10);
  FUN_0042e3f0(unaff_EBP + 0x20,*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + 0x20) == 0) {
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
      piStack_38 = (int *)0x42b687;
      (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
    }
    piVar2 = *(int **)(unaff_EBP + 0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    piStack_38 = (int *)0x42b6a1;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    piStack_38 = (int *)(unaff_EBP + -0x30);
    iStack_3c = 0x42b6b0;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      piStack_38 = (int *)0x42b6bc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_38 = (int *)0x42b6c6;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
    piStack_38 = (int *)(unaff_EBP + -0x20);
    iStack_3c = 0x42b6d0;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      piStack_38 = (int *)0x42b6dc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + 0x20) == 0) {
      piStack_38 = (int *)0x42b6ef;
      FUN_00878dfb();
    }
    piVar2 = *(int **)(unaff_EBP + 0x20);
    local_40 = *(undefined4 *)(unaff_EBP + -0x30);
    iStack_3c = *(int *)(unaff_EBP + -0x2c);
    piStack_38 = *(int **)(unaff_EBP + -0x28);
    uStack_4c = *(undefined4 *)(unaff_EBP + -0x1c);
    uStack_48 = *(undefined4 *)(unaff_EBP + -0x18);
    iStack_44 = *(undefined4 *)(unaff_EBP + -0x14);
    iVar1 = (**(code **)(*piVar2 + 0x110))(piVar2,0,*(undefined4 *)(unaff_EBP + -0x20));
    if (iVar1 < 0) {
      local_40 = 0x42b725;
      iStack_3c = iVar1;
      piStack_38 = piVar2;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    piStack_38 = (int *)0x42b732;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_38 = (int *)0x42b73d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_38 = (int *)0x42b74a;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      piStack_38 = (int *)0x42b755;
      FUN_00878dfb();
    }
    piStack_38 = *(int **)(unaff_EBP + 0x20);
    *(undefined1 **)(unaff_EBP + 0x18) = &stack0xffffffcc;
    if (piStack_38 != (int *)0x0) {
      iStack_3c = 0x42b76d;
      (**(code **)(*piStack_38 + 4))();
    }
    piStack_38 = (int *)0x42b775;
    FUN_00427af9();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int **)(unaff_EBP + 0x20) != (int *)0x0) {
      piStack_38 = (int *)0x42b786;
      (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
      piStack_38 = (int *)0x42b797;
      (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
    }
    piVar2 = *(int **)(unaff_EBP + 0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  if (piVar2 != (int *)0x0) {
    piStack_38 = (int *)0x42b7a8;
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


