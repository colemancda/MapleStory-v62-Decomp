/* FUN_0069249e - 0x0069249e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069249e(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_38 = *(int *)(unaff_EBP + 0xc);
  iStack_3c = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_40 = 0x6924c7;
  FUN_007d3546();
  iStack_38 = 0x6924d6;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_38 = unaff_EBP + -0x24;
  iStack_3c = 0x6924e5;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_38 = 0x6924f1;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_38 = 0x692501;
  iStack_3c = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_38;
  iStack_40 = 0x69250d;
  FUN_00448a17();
  iStack_40 = unaff_EBP + 0xc;
  iStack_3c = 0x12;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_3c = 0x692529;
  FUN_0044974c();
  iStack_3c = 0x692530;
  iVar1 = FUN_00448ebb();
  *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) - iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    iStack_38 = 0x692544;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_38 = 0x692551;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_38 = 0x69255c;
    FUN_00878dfb();
  }
  iStack_38 = 0x692562;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_38 = unaff_EBP + -0x34;
  iStack_3c = 0x69256c;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_38 = 0x692578;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_38 = 0x692582;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_38 = unaff_EBP + -0x24;
  iStack_3c = 0x69258c;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_38 = 0x692598;
    FUN_00878dfb();
  }
  iStack_38 = unaff_EBP + -0x24;
  iStack_40 = unaff_EBP + 0xc;
  iStack_3c = 0x13;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_3c = 0x6925bc;
  iStack_3c = FUN_00449749();
  iStack_40 = 0x6925c5;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_40;
  FUN_00448a17(uVar2);
  uVar3 = 0x128;
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004115d9(uVar2,0x128);
  FUN_00448e3a(uVar2,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    iStack_38 = 0x6925fd;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_38 = 0x69260a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_38 = 0x692615;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_38 = 0x692622;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_38 = 0x69262d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_38 = 0x69264a;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


