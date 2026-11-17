/* FUN_00757015 - 0x00757015 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00757015(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int iVar4;
  int unaff_EBP;
  int *piVar5;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_38 = unaff_EBP + -0x10;
  iStack_3c = 0x757037;
  FUN_00756efd();
  iVar3 = *(int *)(extraout_ECX + 0x1c);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piVar5 = (int *)((iVar3 + 1) * 0x20 + extraout_ECX);
  iStack_38 = 0x757056;
  FUN_00403191();
  iStack_38 = unaff_EBP + -0x14;
  iStack_3c = 800;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_40 = 0x75706f;
  uVar2 = FUN_00449713();
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_40;
  FUN_00448a17(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0044974c();
  uVar2 = FUN_005afeaa();
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_38 = 0x75709e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_38 = 0x7570a9;
    FUN_00878dfb();
  }
  iStack_3c = unaff_EBP + -0x18;
  iStack_38 = 0;
  uStack_40 = 0x7570ba;
  FUN_0045ece0();
  piVar5[2] = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_38 = 0x7570d0;
  FUN_00414f8b();
  iStack_38 = 0x7570da;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
  iStack_38 = unaff_EBP + -0x30;
  iStack_3c = 0x7570e4;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_38 = 0x7570f0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_38 = 0x757100;
  iStack_3c = FUN_00449713();
  *(int **)(unaff_EBP + -0x20) = &iStack_38;
  uStack_40 = 0x75710c;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_3c = 0x757118;
  FUN_0044974c();
  iStack_3c = 0x75711f;
  iVar3 = FUN_00448ebb();
  *piVar5 = *piVar5 + iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_38 = 0x75712e;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_38 = 0x757139;
    FUN_00878dfb();
  }
  iVar3 = *(int *)(unaff_EBP + 0x14);
  piVar5[5] = 0;
  piVar5[4] = iVar3;
  if (piVar5[6] != 0) {
    iStack_38 = 0x757153;
    FUN_00434e38();
    piVar5[6] = 0;
  }
  piVar5[7] = *(int *)(unaff_EBP + 0x10);
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_38 = 0x75716f;
    FUN_00878dfb();
  }
  uVar2 = FUN_004a2734();
  *(undefined4 *)(*(int *)(extraout_ECX + 0x1c) * 0x20 + 0x24 + extraout_ECX) = uVar2;
  iVar3 = *(int *)((*(int *)(extraout_ECX + 0x1c) + 1) * 0x20 + extraout_ECX) + 0x14;
  if (*(int *)(extraout_ECX + 0xc) < iVar3) {
    *(int *)(extraout_ECX + 0xc) = iVar3;
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_38 = 0x7571a2;
    FUN_00878dfb();
  }
  iVar3 = FUN_004a2734();
  *(int *)(extraout_ECX + 8) = *(int *)(extraout_ECX + 8) + iVar3 + 4;
  iVar3 = *(int *)(unaff_EBP + 0xc);
  *(int *)(extraout_ECX + 0x1c) = *(int *)(extraout_ECX + 0x1c) + 1;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + -4);
  }
  iVar1 = *(int *)(unaff_EBP + -0x1c);
  iVar4 = *(int *)(unaff_EBP + -0x14) + iVar1;
  if (iVar4 < iVar3) {
    iStack_38 = 0;
    *(int **)(unaff_EBP + 0x14) = &iStack_3c;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    iVar3 = FUN_00449713();
    FUN_0045f0f3(iVar3 + iVar1 + *(int *)(unaff_EBP + -0x14));
    uStack_40 = *(undefined4 *)(unaff_EBP + 8);
    FUN_00757015();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_38 = 0x757214;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


