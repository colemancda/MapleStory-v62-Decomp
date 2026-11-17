/* FUN_006b7f94 - 0x006b7f94 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b7f94(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_68;
  undefined4 uStack_64;
  int iStack_60;
  
  FUN_00879bb8();
  iStack_60 = 0x6b7fae;
  FUN_0081622a();
  iStack_60 = 0x6b7fb9;
  FUN_00448dc6();
  iStack_60 = 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_64 = 0x6b7fca;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) == 0) {
    iStack_60 = 0x6b7fdd;
    FUN_00878dfb();
  }
  iStack_60 = *(int *)(extraout_ECX + 0x84) + -2;
  iStack_68 = *(int *)(extraout_ECX + 0x80) + 1;
  uStack_64 = 0xc6;
  FUN_00545a5c(unaff_EBP + -0x58,*(int *)(extraout_ECX + 0x7c) + 1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_60 = 0x6b8015;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_60 = 0x6b8020;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  while ((iVar1 = *(int *)(extraout_ECX + 0xbc), iVar1 != 0 &&
         (*(uint *)(unaff_EBP + -0x10) < *(uint *)(iVar1 + -4)))) {
    iVar1 = iVar1 + *(int *)(unaff_EBP + -0x14);
    iStack_60 = 0x6b8051;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
    iStack_60 = unaff_EBP + -0x38;
    uStack_64 = 0x6b805f;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_60 = 0x6b806b;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_60 = 0x6b8075;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
    iStack_60 = unaff_EBP + -0x28;
    uStack_64 = 0x6b8083;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_60 = 0x6b808f;
      FUN_00878dfb();
    }
    iStack_60 = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    uStack_64 = 0x6b80a3;
    uStack_64 = FUN_00449749();
    iStack_68 = 0x6b80ac;
    uVar3 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &iStack_68;
    iStack_68 = extraout_ECX_00;
    FUN_00448a17(uVar3);
    iVar2 = *(int *)(iVar1 + 0x1c) + *(int *)(extraout_ECX + 0x80);
    iVar1 = *(int *)(iVar1 + 0x18) + *(int *)(extraout_ECX + 0x7c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004115d9(iVar1,iVar2);
    FUN_00448e3a(iVar1,iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_60 = 0x6b80e9;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_60 = 0x6b80f4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_60 = 0x6b8101;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_60 = 0x6b810c;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x3c;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_60 = 0x6b8125;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_60 = 0x6b8130;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_60 = 0x6b8141;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


