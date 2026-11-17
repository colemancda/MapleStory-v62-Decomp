/* FUN_00552b90 - 0x00552b90 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00552b90(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(unaff_EBP + 0xc) / 10000;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0x38e) {
    iStack_50 = unaff_EBP + -0x18;
    iStack_54 = 0x552bd3;
    piVar2 = (int *)FUN_00679e4e();
    puVar4 = (undefined4 *)*piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (puVar4 == (undefined4 *)0x0) {
      iStack_50 = 0;
    }
    else {
      iStack_50 = *puVar4;
    }
    iStack_54 = unaff_EBP + -0x10;
    iStack_58 = 0x552bf0;
    FUN_0041354c();
    iVar1 = *(int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    if ((iVar1 != 0x38f) && (iVar1 != 0x21f)) {
      puVar4 = *(undefined4 **)(unaff_EBP + 8);
      *puVar4 = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      goto LAB_00552d61;
    }
    iStack_50 = unaff_EBP + -0x18;
    iStack_54 = 0x552c21;
    piVar2 = (int *)FUN_00679e4e();
    puVar4 = (undefined4 *)*piVar2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (puVar4 == (undefined4 *)0x0) {
      iStack_50 = 0;
    }
    else {
      iStack_50 = *puVar4;
    }
    iStack_54 = unaff_EBP + -0x10;
    iStack_58 = 0x552c3e;
    FUN_0041354c();
    iVar1 = *(int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  if (iVar1 != 0) {
    FUN_004030b1();
  }
  iStack_50 = 0x552c5d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iStack_50 = unaff_EBP + -0x38;
  iStack_54 = 0x552c6c;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_50 = 0x552c78;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_50 = 0x552c82;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  iStack_50 = unaff_EBP + -0x28;
  iStack_54 = 0x552c8c;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_50 = 0x552c98;
    FUN_00878dfb();
  }
  iStack_50 = 0;
  iStack_54 = unaff_EBP + -0x38;
  iStack_58 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_5c = 0x552cae;
  uVar3 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x18) = &uStack_5c;
  FUN_004033a1(uVar3);
  iVar1 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d(iVar1);
  FUN_00402660();
  FUN_00404a02(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_54 = 0x552ce0;
  iVar1 = FUN_004032b4();
  puVar4 = *(undefined4 **)(unaff_EBP + 8);
  *(int *)(unaff_EBP + 0xc) = iVar1;
  *puVar4 = 0;
  if (iVar1 != 0) {
    iStack_50 = 0x552cf7;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_50 = 0x552d08;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_50 = 0x552d1c;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_50 = 0x552d27;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_50 = 0x552d34;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_50 = 0x552d3f;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_50 = 0x552d4c;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_50 = 0x552d57;
    FUN_00878dfb();
  }
LAB_00552d61:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar4;
}


