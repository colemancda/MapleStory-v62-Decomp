/* FUN_004df130 - 0x004df130 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004df130(void)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  int unaff_EBP;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  if ((*(int *)(extraout_ECX + 0xbc) != 8) &&
     ((*(int *)(extraout_ECX + 0xbc) != 9 || (*(int *)(extraout_ECX + 0xf0) != 0)))) {
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar1 != 0) {
      FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar1 = FUN_00450382();
    (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  }
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00450382();
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  iStack_54 = unaff_EBP + -0x14;
  uStack_58 = 0x4df272;
  puVar2 = (undefined4 *)FUN_00679d86();
  uStack_58 = *puVar2;
  iStack_54 = extraout_ECX + 0x108;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(int *)(unaff_EBP + -0x10) = iStack_54;
  puStack_5c = (undefined4 *)0x4df289;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  if (*(int *)(extraout_ECX + 0xbc) == 8) {
    iStack_54 = 0x4df2aa;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_54 = unaff_EBP + -0x34;
    puVar2 = &DAT_00980690;
    uStack_58 = 0x4df2b8;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_54 = 0x4df2c4;
      FUN_00878dfb();
      puVar2 = extraout_ECX_00;
    }
    iStack_54 = 0xffffffff;
    uStack_58 = 0xb;
    *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_5c;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puStack_5c = puVar2;
    FUN_00679e4e(&puStack_5c,10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0044974c();
    FUN_004503f9();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    iStack_54 = 0x4df305;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    iStack_54 = unaff_EBP + -0x34;
    puVar2 = &DAT_00980690;
    uStack_58 = 0x4df313;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      iStack_54 = 0x4df31f;
      FUN_00878dfb();
      puVar2 = extraout_ECX_01;
    }
    iStack_54 = 0xffffffff;
    uStack_58 = 0xc;
    *(undefined4 ***)(unaff_EBP + -0x14) = &puStack_5c;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_5c = puVar2;
    FUN_00679e4e(&puStack_5c,10);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0044974c();
    FUN_004503f9();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  iStack_54 = 0x4df35a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_54 = 0x4df365;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


