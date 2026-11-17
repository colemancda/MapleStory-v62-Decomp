/* FUN_006d4152 - 0x006d4152 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d4152(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int *piVar3;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8) * 0x20 + 0xb8 + extraout_ECX;
  if (*(int *)(iVar2 + 4) != 0) {
    iVar1 = *(int *)(extraout_ECX + 100);
    if (iVar1 == 0) {
      FUN_0043fcc8(0xffffffff);
      FUN_00403191(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00403191(&DAT_00980690);
      iVar1 = *(int *)(iVar2 + 8);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar1 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(iVar2 + 8);
      iVar1 = *piVar3;
      *(int **)(unaff_EBP + 8) = piVar3;
      iVar1 = (**(code **)(iVar1 + 0x90))
                        (piVar3,0xffffffd3,4,*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x4c),
                         *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40));
      if (iVar1 < 0) {
        FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x4c);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      if (*(int *)(iVar2 + 8) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(iVar2 + 8);
      iVar2 = *piVar3;
      uVar4 = 0xffffffff;
    }
    else if (iVar1 == 1) {
      FUN_0043fcc8(0xffffff);
      FUN_00403191(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_00403191(&DAT_00980690);
      iVar1 = *(int *)(iVar2 + 8);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar1 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(iVar2 + 8);
      iVar1 = *piVar3;
      *(int **)(unaff_EBP + 8) = piVar3;
      iVar1 = (**(code **)(iVar1 + 0x90))
                        (piVar3,0xffffffd3,0xffffffa6,*(undefined4 *)(unaff_EBP + -0x1c),
                         *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                         *(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20));
      if (iVar1 < 0) {
        FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x1c);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x2c);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      if (*(int *)(iVar2 + 8) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(iVar2 + 8);
      iVar1 = (**(code **)(*piVar3 + 0xe0))(piVar3,0xffffffff);
      if (iVar1 < 0) {
        FUN_00878e09(iVar1,piVar3,&DAT_00963df8);
      }
      if (*(int *)(iVar2 + 0xc) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(iVar2 + 0xc);
      iVar2 = *piVar3;
      uVar4 = 0xffffff;
    }
    else {
      if (iVar1 != 2) goto LAB_006d43ad;
      FUN_0043fcc8(0xffffff);
      if (*(int *)(iVar2 + 8) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(iVar2 + 8);
      iVar1 = (**(code **)(*piVar3 + 0xe0))(piVar3,0xffffff);
      if (iVar1 < 0) {
        FUN_00878e09(iVar1,piVar3,&DAT_00963df8);
      }
      if (*(int *)(iVar2 + 0xc) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar3 = *(int **)(iVar2 + 0xc);
      iVar2 = *piVar3;
      uVar4 = 0xffffff;
    }
    iVar2 = (**(code **)(iVar2 + 0xe0))(piVar3,uVar4);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
    }
  }
LAB_006d43ad:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


