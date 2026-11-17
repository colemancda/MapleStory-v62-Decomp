/* FUN_00758757 - 0x00758757 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00758757(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7();
  iVar1 = *(int *)(extraout_ECX + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    FUN_00878dfb();
  }
  FUN_00425067();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    FUN_00878dfb();
  }
  FUN_004031b7();
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar2 == (int *)0x0) {
    FUN_00878dfb();
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  iVar1 = *piVar2;
  uVar4 = *(undefined4 *)(unaff_EBP + 8);
  *(int **)(unaff_EBP + -0x14) = piVar2;
  iVar1 = (**(code **)(iVar1 + 0x80))();
  if (iVar1 < 0) {
    iStack_6c = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_74 = 0x758815;
    iStack_70 = iVar1;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_6c = 0x758822;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_6c = 0x75882d;
    FUN_00878dfb();
  }
  iStack_6c = 0x758837;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_6c = unaff_EBP + -0x24;
  iStack_70 = 0x758846;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_6c = 0x758852;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_6c = 0x75885f;
  FUN_00403191();
  iStack_6c = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_70 = 0x758873;
  iStack_70 = FUN_00449749();
  *(undefined4 **)(unaff_EBP + 8) = &uStack_74;
  FUN_00448a17(*(undefined4 *)(unaff_EBP + 0xc));
  uVar3 = 0x12;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_004115d9(0x12,uVar4);
  FUN_00448e3a(uVar3,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_6c = 0x7588a5;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_6c = 0x7588b0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_6c = 0x7588bd;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_6c = 0x7588c8;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_6c = 0x7588d9;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    iStack_6c = 0x7588ea;
    (**(code **)(**(int **)(unaff_EBP + 0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


