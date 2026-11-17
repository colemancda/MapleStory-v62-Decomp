/* ptr_0044f14c - 0x0044f14c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0044f14c(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  int unaff_EDI;
  undefined4 *puStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int *piStack_4;
  
  piStack_4 = &DAT_00980690;
  iStack_c = 0x44f157;
  iVar2 = FUN_00402e32();
  puStack_14 = piStack_4;
  if (iVar2 < 0) {
    iStack_8 = 0x44f165;
    piStack_4 = (int *)iVar2;
    FUN_00878dfb();
    puStack_14 = extraout_ECX;
  }
  piStack_4 = (int *)0x0;
  iStack_8 = 0;
  iStack_c = unaff_EBP + -0x40;
  iStack_10 = unaff_EBP + -0x50;
  *(undefined4 ***)(unaff_EBP + -0x20) = &puStack_14;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00679e4e(&puStack_14,0xb1d);
  iVar2 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iStack_c = 0x44f1ac;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (iVar2 != 0) {
    piStack_4 = (int *)(unaff_EBP + -0x1c);
    iStack_8 = 0x44f1c2;
    piStack_4 = (int *)FUN_0041a581();
    if (((int)piStack_4 < 0) && (piStack_4 != (int *)0x80004002)) {
      iStack_8 = 0x44f1d3;
      FUN_00878dfb();
    }
  }
  piVar1 = *(int **)(unaff_EDI + 0x570);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (piVar1 != *(int **)(unaff_EBP + -0x14)) {
    *(int **)(unaff_EDI + 0x570) = *(int **)(unaff_EBP + -0x14);
    piStack_4 = (int *)0x44f1f1;
    FUN_004125f3();
    if (piVar1 != (int *)0x0) {
      iStack_8 = 0x44f1fb;
      piStack_4 = piVar1;
      (**(code **)(*piVar1 + 8))();
    }
  }
  piStack_4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  if (piStack_4 != (int *)0x0) {
    iStack_8 = 0x44f20c;
    (**(code **)(*piStack_4 + 8))();
  }
  piStack_4 = (int *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iStack_8 = 0x44f219;
  piStack_4 = (int *)FUN_00402bc3();
  if ((int)piStack_4 < 0) {
    iStack_8 = 0x44f226;
    FUN_00878dfb();
  }
  piStack_4 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_8 = 0x44f233;
  piStack_4 = (int *)FUN_00402bc3();
  if ((int)piStack_4 < 0) {
    iStack_8 = 0x44f23e;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_4 = (int *)(unaff_EBP + -0x40);
  iStack_8 = 0x44f24b;
  piStack_4 = (int *)FUN_00402bc3();
  if ((int)piStack_4 < 0) {
    iStack_8 = 0x44f256;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  piStack_4 = (int *)0xd31;
  iStack_8 = unaff_EBP + -0x1c;
  *(undefined4 *)(unaff_EBP + -4) = 0x28;
  iStack_c = 0x44f27d;
  piStack_4 = (int *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  iStack_8 = 0x44f28a;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  piStack_4 = (int *)0x44f296;
  FUN_00402676();
  piStack_4 = (int *)0x578;
  iStack_8 = 0x44f2a7;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  if (iVar2 == 0) {
    piStack_4 = (int *)0x0;
  }
  else {
    piStack_4 = (int *)0x44f2b9;
    piStack_4 = (int *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_8 = 0x44f2cd;
  FUN_00450382();
  piStack_4 = (int *)(unaff_EBP + -0x30);
  iStack_8 = 0;
  iStack_c = 0x11f;
  iStack_10 = 0x22;
  puStack_14 = (undefined4 *)0x3e8;
  (**(code **)(**(int **)(unaff_EDI + 0x578) + 0x20))();
  uVar3 = FUN_00679d86(unaff_EBP + -0x1c,0xd32);
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x2c;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(unaff_EDI + 0x580) + 0x20))();
  uVar3 = FUN_00679d86(unaff_EBP + -0x20,0xd33);
  *(undefined1 *)(unaff_EBP + -4) = 0x2d;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  FUN_00450382(uVar3);
  (**(code **)(**(int **)(unaff_EDI + 0x588) + 0x20))();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


