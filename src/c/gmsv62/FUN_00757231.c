/* FUN_00757231 - 0x00757231 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00757231(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar4;
  int iStack_38;
  int *piStack_34;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  iStack_38 = unaff_EBP + 8;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  piStack_34 = (int *)iVar2;
  FUN_00756efd();
  piStack_34 = *(int **)(unaff_EBP + 0xc);
  iStack_38 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00756efd();
  piVar4 = (int *)((*(int *)(extraout_ECX + 0x1c) + 1) * 0x20 + extraout_ECX);
  piVar4[5] = *(int *)(unaff_EBP + 0xc);
  piStack_34 = (int *)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piVar4[2] = iVar2;
  iStack_38 = 0x75728b;
  FUN_00414f8b();
  piStack_34 = (int *)(unaff_EBP + 0x14);
  iStack_38 = 0x757297;
  FUN_00414f8b();
  piStack_34 = &DAT_00980690;
  iStack_38 = 0x7572a5;
  FUN_00403191();
  piStack_34 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_38 = 0x7572b2;
  FUN_00403191();
  piStack_34 = (int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_38 = 0x7572c2;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + 0xc) = &iStack_38;
  FUN_00448a17(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0044974c();
  iVar2 = FUN_00448ebb();
  piStack_34 = (int *)(unaff_EBP + -0x20);
  iStack_38 = 0x7572ef;
  uVar1 = FUN_00449713();
  *(int **)(unaff_EBP + 0xc) = &iStack_38;
  FUN_00448a17(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0044974c();
  iVar3 = FUN_00448ebb();
  *piVar4 = iVar3 + iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_34 = (int *)(unaff_EBP + -0x20);
  iStack_38 = 0x75731f;
  piStack_34 = (int *)FUN_00402bc3();
  if ((int)piStack_34 < 0) {
    iStack_38 = 0x75732a;
    FUN_00878dfb();
  }
  piStack_34 = (int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_38 = 0x757337;
  piStack_34 = (int *)FUN_00402bc3();
  if ((int)piStack_34 < 0) {
    iStack_38 = 0x757342;
    FUN_00878dfb();
  }
  piVar4[7] = *(int *)(unaff_EBP + 0x18);
  piVar4[4] = *(int *)(unaff_EBP + 0x1c);
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_34 = (int *)0x80004003;
    iStack_38 = 0x75735e;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    piStack_34 = (int *)0x80004003;
    iStack_38 = 0x75736e;
    FUN_00878dfb();
  }
  piStack_34 = (int *)0x757379;
  iVar3 = FUN_004a2734();
  piStack_34 = (int *)0x757382;
  iVar2 = FUN_004a2734();
  if (iVar2 <= iVar3) {
    iVar2 = iVar3;
  }
  *(int *)(*(int *)(extraout_ECX + 0x1c) * 0x20 + 0x24 + extraout_ECX) = iVar2;
  iVar2 = *(int *)((*(int *)(extraout_ECX + 0x1c) + 1) * 0x20 + extraout_ECX) + 0x14;
  if (*(int *)(extraout_ECX + 0xc) < iVar2) {
    *(int *)(extraout_ECX + 0xc) = iVar2;
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
    piStack_34 = (int *)0x80004003;
    iStack_38 = 0x7573b7;
    FUN_00878dfb();
  }
  piStack_34 = (int *)0x7573bf;
  iVar2 = FUN_004a2734();
  *(int *)(extraout_ECX + 8) = *(int *)(extraout_ECX + 8) + iVar2 + 4;
  piStack_34 = *(int **)(unaff_EBP + -0x10);
  *(int *)(extraout_ECX + 0x1c) = *(int *)(extraout_ECX + 0x1c) + 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piStack_34 != (int *)0x0) {
    iStack_38 = 0x7573d9;
    (**(code **)(*piStack_34 + 8))();
  }
  piStack_34 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_34 != (int *)0x0) {
    iStack_38 = 0x7573ea;
    (**(code **)(*piStack_34 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_34 = (int *)0x7573f6;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_34 = (int *)0x757402;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


