/* FUN_007d3a22 - 0x007d3a22 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007d3a22(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 uStack_30;
  int iStack_2c;
  
  FUN_00879bb8();
  iStack_2c = **(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uStack_30 = 0x7d3a4a;
  FUN_00470891();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_2c = 0x7d3a5c;
  FUN_00403191();
  iStack_2c = *(int *)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_30 = 0x7d3a6f;
  uVar1 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_30;
  FUN_004033a1(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0044974c();
  uVar2 = FUN_0047077a();
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(*(int *)(unaff_EBP + -0x10) + -4) >> 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_2c = 0x7d3ab0;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_2c = 0x7d3abb;
    FUN_00878dfb();
  }
  if (uVar2 == uVar5) {
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      iStack_2c = 0x7d3adc;
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
    }
    uVar1 = 0;
  }
  else {
    iStack_2c = 0x7d3aec;
    FUN_00403191();
    *(int **)(unaff_EBP + -0x14) = &iStack_2c;
    uStack_30 = 0x872;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00679e4e(&iStack_2c);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_30 = 0x7d3b19;
    FUN_0044974c();
    uStack_30 = 0x7d3b20;
    iVar3 = FUN_00448ebb();
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) - iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_2c = 0x7d3b30;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_2c = 0x7d3b3b;
      FUN_00878dfb();
    }
    iStack_2c = 0x7d3b45;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
    iStack_2c = unaff_EBP + -0x24;
    uStack_30 = 0x7d3b4f;
    iVar3 = FUN_00402e32();
    if (iVar3 < 0) {
      iStack_2c = 0x7d3b5b;
      FUN_00878dfb();
    }
    iStack_2c = *(int *)(unaff_EBP + 0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    uStack_30 = 0x7d3b6e;
    uVar1 = FUN_00411641();
    *(undefined4 **)(unaff_EBP + 0x10) = &uStack_30;
    FUN_004033a1(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0044974c();
    FUN_0047077a();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_2c = 0x7d3b9c;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_2c = 0x7d3ba7;
      FUN_00878dfb();
    }
    iStack_2c = unaff_EBP + 0x10;
    uStack_30 = 0x7d3bb4;
    FUN_0046fcad();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iStack_2c = 0x7d3bc1;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00402676();
    iStack_2c = 0x7d3bd7;
    FUN_00748897();
    iStack_2c = unaff_EBP + 0x10;
    uStack_30 = 0x7d3be3;
    piVar4 = (int *)FUN_00679d86();
    iStack_2c = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_30 = 0x7d3c00;
    FUN_0046febf();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00402676();
    iStack_2c = *(int *)(unaff_EBP + -0x10);
    uStack_30 = 0x7d3c19;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
      iStack_2c = 0x7d3c36;
      (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
    }
    uVar1 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


