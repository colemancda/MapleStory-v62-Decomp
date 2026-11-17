/* FUN_00676f93 - 0x00676f93 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00676f93(void)

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
  iStack_40 = 0x676fbc;
  FUN_007d3546();
  iStack_38 = 0x676fcb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_38 = unaff_EBP + -0x24;
  iStack_3c = 0x676fda;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_38 = 0x676fe6;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_38 = 0x676ff6;
  iStack_3c = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_38;
  iStack_40 = 0x677002;
  FUN_00448a17();
  iStack_40 = unaff_EBP + 0xc;
  iStack_3c = 0x12;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_3c = 0x67701e;
  FUN_0044974c();
  iStack_3c = 0x677025;
  iVar1 = FUN_00448ebb();
  *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) - iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    iStack_38 = 0x677039;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_38 = 0x677046;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_38 = 0x677051;
    FUN_00878dfb();
  }
  iStack_38 = 0x677057;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_38 = unaff_EBP + -0x34;
  iStack_3c = 0x677061;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_38 = 0x67706d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_38 = 0x677077;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_38 = unaff_EBP + -0x24;
  iStack_3c = 0x677081;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_38 = 0x67708d;
    FUN_00878dfb();
  }
  iStack_38 = unaff_EBP + -0x24;
  iStack_40 = unaff_EBP + 0xc;
  iStack_3c = 0x13;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_3c = 0x6770b1;
  iStack_3c = FUN_00449749();
  iStack_40 = 0x6770ba;
  uVar2 = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_40;
  FUN_00448a17(uVar2);
  uVar3 = 0x127;
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004115d9(uVar2,0x127);
  FUN_00448e3a(uVar2,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    iStack_38 = 0x6770f2;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iStack_38 = 0x6770ff;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_38 = 0x67710a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_38 = 0x677117;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_38 = 0x677122;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_38 = 0x67713f;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


