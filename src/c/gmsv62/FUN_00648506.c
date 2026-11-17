/* FUN_00648506 - 0x00648506 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00648506(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iStack_3c = *(int *)(unaff_EBP + 0xc);
  iStack_40 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_44 = 0x648530;
  FUN_007d3546();
  iStack_3c = 0x64853f;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_3c = unaff_EBP + -0x24;
  iStack_40 = 0x64854e;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_3c = 0x64855a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_3c = 0x64856a;
  iStack_40 = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_3c;
  iStack_44 = 0x648576;
  FUN_00448a17();
  iStack_44 = unaff_EBP + 0xc;
  iStack_40 = 0x12;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_40 = 0x648592;
  FUN_0044974c();
  iStack_40 = 0x648599;
  iVar1 = FUN_00448ebb();
  iVar1 = 0x1bf - iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    iStack_3c = 0x6485b1;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_3c = 0x6485be;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6485c9;
    FUN_00878dfb();
  }
  iStack_3c = 0x6485cf;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_3c = unaff_EBP + -0x34;
  iStack_40 = 0x6485d9;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_3c = 0x6485e5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_3c = 0x6485ef;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_3c = unaff_EBP + -0x24;
  iStack_40 = 0x6485f9;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_3c = 0x648605;
    FUN_00878dfb();
  }
  iStack_3c = unaff_EBP + -0x24;
  iStack_44 = unaff_EBP + 0xc;
  iStack_40 = 0x13;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_40 = 0x648629;
  iStack_40 = FUN_00449749();
  iStack_44 = 0x648632;
  uVar3 = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_44;
  FUN_00448a17(uVar3);
  uVar3 = 0x40;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004115d9(iVar1,0x40);
  FUN_00448e3a(iVar1,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    iStack_3c = 0x648665;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_3c = 0x648672;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_3c = 0x64867d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_3c = 0x64868a;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_3c = 0x648695;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_3c = 0x6486b2;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


