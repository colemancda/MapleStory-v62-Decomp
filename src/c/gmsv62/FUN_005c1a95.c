/* FUN_005c1a95 - 0x005c1a95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c1a95(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_58;
  int iStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  iStack_50 = 0x5c1ab0;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (extraout_ECX == 0) {
LAB_005c1ace:
    iVar2 = 0;
  }
  else {
    iStack_50 = 0x5c1ac6;
    iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x48))();
    iVar2 = extraout_ECX;
    if (iVar1 == 0) goto LAB_005c1ace;
  }
  if (iVar2 != 0) goto LAB_005c1b47;
  if (extraout_ECX == 0) {
LAB_005c1aee:
    iVar2 = 0;
  }
  else {
    iStack_50 = 0x5c1ae6;
    iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x48))();
    iVar2 = extraout_ECX;
    if (iVar1 == 0) goto LAB_005c1aee;
  }
  if (iVar2 == 0) {
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_50 = 0x5c1b03;
      FUN_00878dfb();
    }
    iStack_50 = *(undefined4 *)(extraout_ECX + 0xbc);
    iStack_54 = *(int *)(extraout_ECX + 0xb8);
    uStack_58 = *(undefined4 *)(extraout_ECX + 0xb4);
    uVar3 = *(undefined4 *)(extraout_ECX + 0xb0);
    *(int **)(unaff_EBP + -0x24) = *(int **)(unaff_EBP + -0x10);
    iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x8c))
                      (*(undefined4 *)(unaff_EBP + -0x10),uVar3);
    if (iVar2 < 0) {
      iStack_50 = *(undefined4 *)(unaff_EBP + -0x24);
      uStack_58 = 0x5c1b47;
      iStack_54 = iVar2;
      FUN_00878e09();
    }
  }
LAB_005c1b47:
  uVar3 = *(undefined4 *)(*(int *)(extraout_ECX + 0x7c) + 0x38);
  iVar2 = *(int *)(extraout_ECX + 0xbc);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (0 < (iVar2 + -4) / 0x10) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
    do {
      if ((*(int *)(extraout_ECX + 0x80) == 0) ||
         (*(uint *)(*(int *)(extraout_ECX + 0x80) + -4) <= *(uint *)(unaff_EBP + -0x14))) break;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      iStack_50 = 0x5c1ba1;
      FUN_00419192();
      iStack_50 = unaff_EBP + -0x20;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_54 = 0x5c1bb4;
      FUN_007d4a9a();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_50 = 0x5c1bc4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
      iStack_50 = unaff_EBP + -0x48;
      iStack_54 = 0x5c1bd2;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_50 = 0x5c1bde;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_50 = 0x5c1bec;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
      iStack_50 = unaff_EBP + -0x38;
      iStack_54 = 0x5c1bfa;
      iVar2 = FUN_00402e32();
      if (iVar2 < 0) {
        iStack_50 = 0x5c1c06;
        FUN_00878dfb();
      }
      iStack_50 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_54 = 0x5c1c1a;
      iStack_54 = FUN_004458be();
      uStack_58 = *(undefined4 *)(unaff_EBP + -0x14);
      FUN_005c1f41();
      uStack_58 = 0x5c1c2c;
      uVar3 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_58;
      uStack_58 = extraout_ECX_00;
      FUN_004033a1(uVar3);
      iVar2 = *(int *)(extraout_ECX + 0xb4) + 2 + *(int *)(unaff_EBP + -0x18);
      iVar1 = *(int *)(extraout_ECX + 0xb0) + 2;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_0044974c(iVar1,iVar2);
      FUN_005c1d2c(iVar1,iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_50 = 0x5c1c6f;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_50 = 0x5c1c7a;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_50 = 0x5c1c87;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        iStack_50 = 0x5c1c92;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
        iStack_50 = 0x5c1ca3;
        (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      iVar2 = *(int *)(extraout_ECX + 0xbc);
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x10;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    } while (*(int *)(unaff_EBP + -0x1c) < (iVar2 + -4) / 0x10);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_50 = 0x5c1ce5;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


