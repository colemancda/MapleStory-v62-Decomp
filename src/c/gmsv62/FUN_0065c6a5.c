/* FUN_0065c6a5 - 0x0065c6a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0065c6a5(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_00879bb8();
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_005698b4();
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)FUN_0065c924(unaff_EBP + -0x1c);
  iVar2 = *piVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  bVar5 = DAT_0097c1ac == 0;
  *(int *)(unaff_EBP + -0x10) = *piVar1;
  if (bVar5) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)FUN_0065c956(unaff_EBP + -0x18);
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)FUN_0065c956(unaff_EBP + -0x14);
  iVar2 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar2 = FUN_00404abb();
  iVar3 = FUN_00404a94();
  iVar4 = FUN_00404a94();
  *(int *)(unaff_EBP + -0x10) = (iVar4 + iVar2 + iVar3) / 3;
  FUN_004125d9();
  FUN_004125d9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004125d9();
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar4 = FUN_0065c8fd();
  iVar4 = iVar4 + ((0xff - *(int *)(unaff_EBP + -0x10)) * 600) / 0xff;
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_004295f1(iVar4,3);
  iVar2 = unaff_EBP + -0x1c;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004458c1(iVar2);
  FUN_0065c924(iVar2);
  iVar2 = unaff_EBP + -0x3c;
  iVar3 = unaff_EBP + -0x2c;
  uVar7 = 0xff;
  uVar6 = 0xff;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00424df4(0xff,0xff,iVar3,iVar2);
  FUN_00424f2f(uVar6,uVar7,iVar3,iVar2);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_00424aee(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_004295f1(iVar4,3);
  iVar2 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004458c1(iVar2);
  FUN_0065c956(iVar2);
  iVar2 = unaff_EBP + -0x5c;
  iVar3 = unaff_EBP + -0x4c;
  uVar7 = 0xff;
  uVar6 = 0xff;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_00424df4(0xff,0xff,iVar3,iVar2);
  FUN_00424f2f(uVar6,uVar7,iVar3,iVar2);
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


