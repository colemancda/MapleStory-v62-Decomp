/* FUN_004e61ea - 0x004e61ea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e61ea(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int unaff_EBP;
  undefined4 uStack_60;
  int iStack_5c;
  int iStack_58;
  uint uStack_54;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffb4;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 999999999) {
    **(undefined4 **)(unaff_EBP + 8) = 0;
    FUN_004e63b2();
    return;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  uStack_54 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_58 = 0x4e6232;
  piVar2 = (int *)FUN_00679e4e();
  puVar1 = (undefined4 *)*piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (puVar1 == (undefined4 *)0x0) {
    iStack_58 = 0;
  }
  else {
    iStack_58 = *puVar1;
  }
  uStack_54 = *(uint *)(unaff_EBP + 0xc) / 100000000;
  iStack_5c = unaff_EBP + -0x18;
  uStack_60 = 0x4e625c;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_004030b1();
  }
  uStack_54 = 0x4e627b;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  uStack_54 = unaff_EBP + -0x3c;
  iStack_58 = 0x4e628a;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    uStack_54 = 0x4e6296;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_54 = 0x4e62a0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  uStack_54 = unaff_EBP + -0x2c;
  iStack_58 = 0x4e62aa;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    uStack_54 = 0x4e62b6;
    FUN_00878dfb();
  }
  uStack_54 = 0;
  iStack_58 = unaff_EBP + -0x3c;
  iStack_5c = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_60 = 0x4e62cc;
  uVar4 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_60;
  FUN_004033a1(uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d();
  FUN_00402660();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00404a02(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_58 = 0x4e6302;
  iVar3 = FUN_004032b4();
  *(int *)(unaff_EBP + 0xc) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar3 != 0) {
    uStack_54 = 0x4e6318;
    iVar3 = FUN_00404b30();
    if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
      uStack_54 = 0x4e6329;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  uStack_54 = 0x4e6336;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_54 = 0x4e6341;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  uStack_54 = 0x4e634e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_54 = 0x4e6359;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_54 = 0x4e6366;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    uStack_54 = 0x4e6371;
    FUN_00878dfb();
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  **(int **)(unaff_EBP + 8) = (int)piVar2;
  piVar5 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    uStack_54 = 0x4e6383;
    (**(code **)(*piVar2 + 4))();
    piVar5 = *(int **)(unaff_EBP + -0x14);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar5 != (int *)0x0) {
    uStack_54 = 0x4e6394;
    (**(code **)(*piVar5 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  FUN_004e63b2();
  return;
}


