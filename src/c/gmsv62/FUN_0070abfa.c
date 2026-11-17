/* FUN_0070abfa - 0x0070abfa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0070abfa(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0081622a(*(undefined4 *)(unaff_EBP + 8));
  if (**(short **)(extraout_ECX + 0x5a0) != 0) {
    FUN_00448dc6(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(extraout_ECX + 0x5b8);
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar5 = *(int **)(unaff_EBP + 8);
    }
    iVar3 = *piVar5;
    *(int **)(unaff_EBP + -0x18) = piVar5;
    iVar3 = (**(code **)(iVar3 + 0x80))
                      (piVar5,0,0,*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
    if (iVar3 < 0) {
      FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar3 < 0) {
      FUN_00878dfb(iVar3);
    }
    if (*(int *)(*(int *)(extraout_ECX + 0x5a0) + 8) != 0) {
      if (*(int *)(extraout_ECX + 0x5b0) == 0) {
        FUN_00878dfb(0x80004003);
      }
      uVar4 = FUN_0040e48b();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
      *(int *)(unaff_EBP + -0x14) = 0x32 - *(int *)(unaff_EBP + -0x1c);
      FUN_00403191(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(extraout_ECX + 0x5b0);
      piVar5 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piVar5 == (int *)0x0) {
        FUN_00878dfb(0x80004003);
        piVar5 = *(int **)(unaff_EBP + 8);
      }
      iVar3 = *piVar5;
      iVar1 = *(int *)(unaff_EBP + -0x14);
      *(int **)(unaff_EBP + -0x10) = piVar5;
      iVar3 = (**(code **)(iVar3 + 0x80))
                        (piVar5,iVar1,2,*(undefined4 *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      iVar3 = *(int *)(extraout_ECX + 0x590);
      iVar2 = *(int *)(unaff_EBP + -0x1c);
      if ((iVar2 < iVar3) &&
         (*(undefined4 *)(unaff_EBP + -0x10) = 0, iVar3 != iVar2 && -1 < iVar3 - iVar2)) {
        *(undefined4 *)(unaff_EBP + -0x14) = 0x30;
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) - iVar2;
        *(int *)(unaff_EBP + -0x18) = iVar1 + -1;
        do {
          if (*(int *)(unaff_EBP + -0x14) <= *(int *)(unaff_EBP + -0x10)) break;
          FUN_00403191(&DAT_00980690);
          *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(extraout_ECX + 0x5b4);
          piVar5 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (piVar5 == (int *)0x0) {
            FUN_00878dfb(0x80004003);
            piVar5 = *(int **)(unaff_EBP + 8);
          }
          iVar3 = *piVar5;
          *(int **)(unaff_EBP + -0x24) = piVar5;
          iVar3 = (**(code **)(iVar3 + 0x80))
                            (piVar5,*(undefined4 *)(unaff_EBP + -0x18),2,
                             *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x34),
                             *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                             *(undefined4 *)(unaff_EBP + -0x28));
          if (iVar3 < 0) {
            FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
          if (iVar3 < 0) {
            FUN_00878dfb(iVar3);
          }
          iVar3 = *(int *)(extraout_ECX + 0x590);
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
        } while (*(int *)(unaff_EBP + -0x10) < iVar3 - *(int *)(unaff_EBP + -0x1c));
      }
      if (0x2f < *(int *)(extraout_ECX + 0x590)) {
        FUN_00403191(&DAT_00980690);
        piVar5 = *(int **)(unaff_EBP + 8);
        uVar4 = *(undefined4 *)(extraout_ECX + 0x5ac);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (piVar5 == (int *)0x0) {
          FUN_00878dfb(0x80004003);
          piVar5 = *(int **)(unaff_EBP + 8);
        }
        iVar3 = *piVar5;
        *(int **)(unaff_EBP + -0x24) = piVar5;
        iVar3 = (**(code **)(iVar3 + 0x80))
                          (piVar5,2,2,uVar4,*(undefined4 *)(unaff_EBP + -0x34),
                           *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                           *(undefined4 *)(unaff_EBP + -0x28));
        if (iVar3 < 0) {
          FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iVar3 = FUN_00402bc3(unaff_EBP + -0x34);
        if (iVar3 < 0) {
          FUN_00878dfb(iVar3);
        }
      }
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


