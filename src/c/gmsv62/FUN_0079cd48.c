/* FUN_0079cd48 - 0x0079cd48 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0079cd48(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0x17d4);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(int **)(unaff_EBP + -0x14) = (int *)(extraout_ECX + 0x17d4);
  if ((iVar2 != 0) && (*(int *)(extraout_ECX + 0x524) == 0)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    puVar1 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x3af);
    uVar6 = *puVar1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0040381b(uVar6,unaff_EBP + -0x10,0);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      FUN_00403384(*(int *)(unaff_EBP + -0x18) + -0xc);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00403191(&DAT_00980690);
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + -0x18) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x2c))
                      (piVar4,0x34,10,*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x3c),
                       *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    iVar2 = (**(code **)(*piVar4 + 0x8c))(piVar4,0,0,0x34,10,0xff000000);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar4,&DAT_00963cc8);
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    iVar2 = (**(code **)(*piVar4 + 0x8c))(piVar4,1,1,0x32,8,0xffffffff);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar4,&DAT_00963cc8);
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    iVar2 = (**(code **)(*piVar4 + 0x8c))(piVar4,2,2,0x30,6,0xff000000);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar4,&DAT_00963cc8);
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *(int *)(unaff_EBP + -0x1c);
    uVar6 = *(undefined4 *)(iVar2 + 0x17d8);
    iVar3 = *piVar4;
    *(int **)(unaff_EBP + -0x1c) = piVar4;
    iVar3 = (**(code **)(iVar3 + 0x8c))(piVar4,3,3,uVar6,4,0xffff0000);
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
    }
    piVar4 = *(int **)(unaff_EBP + -0x10);
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    uVar6 = *(undefined4 *)(iVar2 + 0x17d8);
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + -0x1c) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x8c))(piVar4,3,6,uVar6,1,0xffa00300);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963cc8);
    }
    FUN_004295f1(0xfffffffe,3);
    iVar2 = unaff_EBP + -0x3c;
    iVar3 = unaff_EBP + -0x1c;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00424e27(iVar3,iVar2);
    FUN_0041141a(iVar3,iVar2);
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_00424aee(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00424aee(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_00424aee(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00424aee(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_00424aee(&DAT_00980690);
    iVar2 = unaff_EBP + -0x6c;
    iVar3 = unaff_EBP + -0x5c;
    iVar9 = unaff_EBP + -0x4c;
    iVar8 = unaff_EBP + -0x2c;
    iVar7 = unaff_EBP + -0x3c;
    uVar6 = *(undefined4 *)(unaff_EBP + -0x10);
    iVar5 = unaff_EBP + -0x7c;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00424e27(iVar5,uVar6,iVar7,iVar8,iVar9,iVar3,iVar2);
    FUN_004250ac(iVar5,uVar6,iVar7,iVar8,iVar9,iVar3,iVar2);
    iVar2 = FUN_00402bc3(unaff_EBP + -0x7c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x2c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x4c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x6c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    FUN_004125e6();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


