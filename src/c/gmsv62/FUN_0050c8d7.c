/* FUN_0050c8d7 - 0x0050c8d7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050c8d7(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  FUN_004031b7(0,3);
  iVar2 = *(int *)(extraout_ECX + 0x24);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int **)(unaff_EBP + -0x18) = (int *)(extraout_ECX + 0x24);
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00425067(unaff_EBP + -0x10,unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,0,0,0x34,10,0xff000000);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,1,1,0x32,8,0xffffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,2,2,0x30,6,0xff000000);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xc);
  if (iVar2 < 1) {
    iVar2 = 0x2e;
  }
  else {
    iVar2 = (iVar2 * 0x2e) / 100;
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,3,3,iVar2,4,0xffff0000);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xc);
  if (iVar2 < 1) {
    iVar2 = 0x2e;
  }
  else {
    iVar2 = (iVar2 * 0x2e) / 100;
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,3,6,iVar2,1,0xffa00300);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  FUN_004031b7(0xfffffffe,3);
  iVar2 = **(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0041141a(unaff_EBP + -0x14,unaff_EBP + -0x38);
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00424aee(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00424aee(&DAT_00980690);
  iVar2 = unaff_EBP + -0x78;
  iVar8 = unaff_EBP + -0x68;
  iVar7 = unaff_EBP + -0x58;
  iVar6 = unaff_EBP + -0x48;
  iVar5 = unaff_EBP + -0x38;
  uVar4 = *(undefined4 *)(unaff_EBP + -0x10);
  iVar3 = unaff_EBP + -0x88;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00424e27(iVar3,uVar4,iVar5,iVar6,iVar7,iVar8,iVar2);
  FUN_004250ac(iVar3,uVar4,iVar5,iVar6,iVar7,iVar8,iVar2);
  iVar2 = FUN_00402bc3(unaff_EBP + -0x88);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x68);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x78);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


