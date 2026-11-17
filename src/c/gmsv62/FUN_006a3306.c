/* FUN_006a3306 - 0x006a3306 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a3306(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  undefined4 uVar3;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  
  FUN_00879bb8();
  iStack_3c = 0x6a3320;
  FUN_0081622a();
  iStack_3c = 0x6a332b;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_3c = 0x6a333d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_3c = 0x6a334a;
  FUN_00403191();
  iStack_3c = unaff_EBP + -0x34;
  iStack_44 = unaff_EBP + -0x10;
  uStack_40 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_40 = 0x6a336e;
  uStack_40 = FUN_00449749();
  iStack_44 = 0x6a3377;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_44;
  FUN_00448a17(uVar1);
  uVar3 = 0x69;
  uVar1 = 0x32;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004115d9(0x32,0x69);
  FUN_00448e3a(uVar1,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_3c = 0x6a33ab;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_3c = 0x6a33b8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a33c3;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_3c = 0x6a33d0;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a33db;
    FUN_00878dfb();
  }
  iStack_3c = 0x6a33e7;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_3c = unaff_EBP + -0x34;
  uStack_40 = 0x6a33f1;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_3c = 0x6a33fd;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_3c = 0x6a3407;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x24));
  iStack_3c = unaff_EBP + -0x24;
  uStack_40 = 0x6a3411;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    iStack_3c = 0x6a341d;
    FUN_00878dfb();
  }
  iStack_3c = unaff_EBP + -0x24;
  iStack_44 = unaff_EBP + -0x10;
  uStack_40 = 1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_40 = 0x6a3441;
  uStack_40 = FUN_00449749();
  iStack_44 = 0x6a344a;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + -0x14) = &iStack_44;
  FUN_00448a17(uVar1);
  uVar3 = 0x69;
  uVar1 = 0x83;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004115d9(0x83,0x69);
  FUN_00448e3a(uVar1,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_3c = 0x6a3481;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_3c = 0x6a348e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a3499;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_3c = 0x6a34a6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_3c = 0x6a34b1;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_3c = 0x6a34c2;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


