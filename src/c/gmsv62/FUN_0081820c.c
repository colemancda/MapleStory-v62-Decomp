/* FUN_0081820c - 0x0081820c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0081820c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x7c) != 0) {
    *(undefined4 *)(extraout_ECX + 0x7c) = 0;
  }
  FUN_00526a75(0xb);
  iVar6 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0x88) = *(undefined4 *)(unaff_EBP + 8);
  FUN_008194e7(iVar6);
  if (*(int *)(iVar6 + 0xc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*(int *)(extraout_ECX + 0xd4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(extraout_ECX + 0xd4);
  iVar2 = FUN_00404a94();
  iVar3 = FUN_00404a94();
  iVar5 = *(int *)(iVar6 + 0xc);
  *(int *)(unaff_EBP + -0x18) = iVar2 - iVar3;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  if (*(int *)(extraout_ECX + 0xd4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar4 = FUN_00404abb();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
  iVar5 = FUN_00404abb();
  *(int *)(unaff_EBP + -0x14) = iVar5 - *(int *)(unaff_EBP + -0x10);
  FUN_0040ee87(*(undefined4 *)(extraout_ECX + 0xd4),1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(iVar6 + 0xc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(iVar6 + 0xc);
  iVar6 = *piVar1;
  *(int **)(unaff_EBP + -0x10) = piVar1;
  iVar6 = (**(code **)(iVar6 + 100))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x28);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  FUN_00403191(&DAT_00980690);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00403191(&DAT_00980690);
  iVar6 = *(int *)(unaff_EBP + 0xc);
  iVar5 = *(int *)(iVar6 + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar5 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(iVar6 + 0xc);
  iVar6 = *piVar1;
  *(int **)(unaff_EBP + -0x10) = piVar1;
  iVar6 = (**(code **)(iVar6 + 0x90))
                    (piVar1,*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                     *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                     *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                     *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x38);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  iVar6 = *(int *)(unaff_EBP + 0xc);
  if (*(int *)(iVar6 + 0xc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00444e29(&DAT_0097bb30);
  if (*(int *)(iVar6 + 0xc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_006e612a(0x7ffffffd);
  if (*(int **)(extraout_ECX + 0x84) != (int *)0x0) {
    iVar6 = (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x20))();
    if (iVar6 != 0) {
      (**(code **)(**(int **)(extraout_ECX + 0x84) + 0x14))(0);
    }
    *(undefined4 *)(extraout_ECX + 0x84) = 0;
  }
  piVar1 = *(int **)(unaff_EBP + 8);
  if (piVar1 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar1 + 0x2c))();
    iVar6 = *(int *)(extraout_ECX + 0x94);
    iVar2 = (**(code **)(*piVar1 + 0x30))();
    (**(code **)(*piVar1 + 0x18))
              (1,*(undefined4 *)(unaff_EBP + 0xc),iVar6 - iVar5,
               *(int *)(extraout_ECX + 0x98) - iVar2);
    *(int **)(extraout_ECX + 0x84) = piVar1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


