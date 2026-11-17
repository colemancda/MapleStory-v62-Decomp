/* FUN_0042935a - 0x0042935a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0042935a(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x3b1);
  uVar8 = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00437222(uVar8,unaff_EBP + -0x10,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00403384(*(int *)(unaff_EBP + -0x14) + -0xc);
  }
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + 8),1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar3 + 100))
                    (piVar3,*(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00403191(&DAT_00980690);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar3 + 0x90))
                    (piVar3,0,0xffffffce,*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                     *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x28));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)(unaff_EBP + -0x10);
  iVar2 = (**(code **)(*piVar3 + 0xa8))(piVar3,100);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar3,&DAT_00963de8);
  }
  iVar2 = FUN_00429303();
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar2 + 0xd0);
  *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar2 + 0xd4);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(iVar2 + 0xd8);
  *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar2 + 0xdc);
  FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x10),1);
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (bVar6) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_00429328(unaff_EBP + -0x14);
  iVar2 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00429607(unaff_EBP + -0x34);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004295f1(1,3);
  bVar6 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (bVar6) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00429328(unaff_EBP + -0x14);
  iVar2 = unaff_EBP + -0x34;
  iVar4 = *(int *)(unaff_EBP + -0x18) - *(int *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar5 = *(int *)(unaff_EBP + -0x1c) - *(int *)(unaff_EBP + -0x24);
  uVar8 = *(undefined4 *)(unaff_EBP + -0x20);
  uVar7 = *(undefined4 *)(unaff_EBP + -0x24);
  puVar1 = &DAT_0097bb30;
  FUN_00424df4(&DAT_0097bb30,uVar7,uVar8,iVar5,iVar4,iVar2);
  FUN_00429635(puVar1,uVar7,uVar8,iVar5,iVar4,iVar2);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004125d9();
  FUN_004125d9();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


