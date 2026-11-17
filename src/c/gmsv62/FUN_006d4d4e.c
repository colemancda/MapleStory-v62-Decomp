/* FUN_006d4d4e - 0x006d4d4e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d4d4e(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  uVar2 = *(undefined4 *)(*(int *)(extraout_ECX + 0xb4) + 0x38);
  iVar1 = *(int *)(extraout_ECX + 0x68);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (0 < iVar1) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
    do {
      if ((*(int *)(extraout_ECX + 0x78) == 0) ||
         (*(uint *)(*(int *)(extraout_ECX + 0x78) + -4) <= *(uint *)(unaff_EBP + -0x10))) break;
      iStack_48 = 0x6d4da5;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
      iStack_48 = unaff_EBP + -0x40;
      uStack_4c = 0x6d4db3;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        iStack_48 = 0x6d4dbf;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_48 = 0x6d4dc9;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
      iStack_48 = unaff_EBP + -0x30;
      uStack_4c = 0x6d4dd7;
      iVar1 = FUN_00402e32();
      if (iVar1 < 0) {
        iStack_48 = 0x6d4de3;
        FUN_00878dfb();
      }
      iStack_48 = unaff_EBP + -0x30;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_4c = 0x6d4df7;
      uStack_4c = FUN_004458be();
      uStack_50 = *(undefined4 *)(unaff_EBP + -0x10);
      FUN_006d5fe5();
      uStack_50 = 0x6d4e09;
      uVar2 = FUN_00411641();
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_50;
      FUN_004033a1(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iVar1 = FUN_006d5fe5(*(undefined4 *)(unaff_EBP + -0x10));
      FUN_007d4a9a(unaff_EBP + -0x1c,*(undefined4 *)(iVar1 + 4));
      iVar1 = (-(uint)(*(int *)(extraout_ECX + 100) != 0) & 0xffffffa1) + 0x9b +
              *(int *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uVar2 = 0xe;
      FUN_0044974c(0xe,iVar1);
      FUN_005c1d2c(uVar2,iVar1);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        iStack_48 = 0x6d4e6a;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_48 = 0x6d4e77;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_48 = 0x6d4e82;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_48 = 0x6d4e8f;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        iStack_48 = 0x6d4e9a;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0xd;
    } while (*(int *)(unaff_EBP + -0x18) < *(int *)(extraout_ECX + 0x68));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_48 = 0x6d4ec1;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


