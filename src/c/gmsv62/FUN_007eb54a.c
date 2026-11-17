/* FUN_007eb54a - 0x007eb54a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007eb54a(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  
  FUN_00879bb8();
  iStack_60 = 0x7eb568;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iStack_60 = unaff_EBP + -0x48;
  iStack_64 = 0x7eb576;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_60 = 0x7eb584;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_60 = 0x7eb58d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_60 = unaff_EBP + -0x38;
  puStack_6c = &DAT_00980690;
  iStack_64 = 0x7eb59b;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_60 = 0x7eb5a7;
    FUN_00878dfb();
    puStack_6c = extraout_ECX_00;
  }
  iStack_60 = 0;
  iStack_64 = unaff_EBP + -0x48;
  iStack_68 = unaff_EBP + -0x38;
  *(undefined4 ***)(unaff_EBP + -0x18) = &puStack_6c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_6c,0xa5a);
  iVar1 = unaff_EBP + -0x58;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_64 = 0x7eb5f3;
  uVar2 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar2;
  iStack_60 = 0x7eb605;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_60 = 0x7eb616;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_60 = 0x7eb623;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_60 = 0x7eb62e;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_60 = 0x7eb63a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_60 = 0x7eb645;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_60 = 0x7eb652;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_60 = 0x7eb65d;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 1;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iStack_60 = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  iStack_64 = 0x7eb684;
  puVar3 = (undefined4 *)FUN_00679d86();
  *(undefined4 *)(unaff_EBP + -0x10) = *puVar3;
  iStack_60 = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_64 = 0x7eb69d;
  puVar3 = (undefined4 *)FUN_00679d86();
  iStack_60 = *puVar3;
  iStack_64 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_68 = 0x7eb6b2;
  FUN_007e6c97();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00402676();
  iStack_60 = 0x7eb6d9;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_60 = 0x7eb6ff;
  FUN_00450382();
  iStack_60 = 0;
  iStack_64 = *(int *)(extraout_ECX + 0x20) + -0x1a;
  iStack_68 = 10;
  puStack_6c = (undefined4 *)0x2;
  (**(code **)(**(int **)(extraout_ECX + 0x644) + 0x20))(extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


