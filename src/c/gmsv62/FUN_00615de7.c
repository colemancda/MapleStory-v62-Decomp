/* FUN_00615de7 - 0x00615de7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00615de7(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int iVar3;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  iVar3 = *(int *)(unaff_EBP + 8);
  if (((*(int *)(unaff_EBP + 0xc) == 0) && (*(int *)(extraout_ECX + 0x10c) == iVar3)) &&
     (*(int *)(extraout_ECX + 0x8c) == 0)) {
    if (iVar3 != 0) {
      if ((*(int *)(extraout_ECX + 0x110) < 0x78) &&
         (iVar3 = *(int *)(extraout_ECX + 0x110) + 0x1e, *(int *)(extraout_ECX + 0x110) = iVar3,
         0x77 < iVar3)) {
        if (*(int *)(extraout_ECX + 0x114) == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = *(int **)(extraout_ECX + 0x114);
        iVar3 = (**(code **)(*piVar1 + 0xe0))(piVar1,0xffffffff);
        if (iVar3 < 0) {
          FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
        }
      }
    }
    if (*(int *)(*(int *)(extraout_ECX + 0x84) + 0x524) == 0) goto LAB_00616173;
    uVar4 = 0;
  }
  else {
    *(int *)(extraout_ECX + 0x10c) = iVar3;
    if (iVar3 == 0) {
      FUN_0040ee87(*(undefined4 *)(extraout_ECX + 0x80),1);
      iVar3 = *(int *)(extraout_ECX + 0x114);
      *(undefined4 *)(unaff_EBP + -4) = 4;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = *(int **)(extraout_ECX + 0x114);
      iVar3 = *piVar1;
      *(int **)(unaff_EBP + 0xc) = piVar1;
      iVar3 = (**(code **)(iVar3 + 100))
                        (piVar1,*(undefined4 *)(unaff_EBP + -0x30),
                         *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x24));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963de8);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x30);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      if (*(int *)(extraout_ECX + 0x114) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = *(int **)(extraout_ECX + 0x114);
      *(undefined4 *)(unaff_EBP + -0x20) = DAT_0097bb30;
      *(undefined4 *)(unaff_EBP + -0x1c) = DAT_0097bb34;
      iVar3 = *piVar1;
      *(undefined4 *)(unaff_EBP + -0x18) = DAT_0097bb38;
      *(undefined4 *)(unaff_EBP + -0x14) = DAT_0097bb3c;
      *(int **)(unaff_EBP + 0xc) = piVar1;
      iVar3 = (**(code **)(iVar3 + 0xfc))
                        (piVar1,*(undefined4 *)(unaff_EBP + -0x20),
                         *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0x14));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963df8);
      }
      FUN_00614a43();
      if (*(int *)(extraout_ECX + 0x114) == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_00444e05(0xffffffff);
      iVar3 = (**(code **)(**(int **)(extraout_ECX + 0x84) + 0xc))();
      if (iVar3 == 0) {
        *(undefined4 *)(unaff_EBP + 0xc) = 1;
      }
    }
    else {
      if (-1 < *(int *)(extraout_ECX + 0xe8)) {
        *(undefined4 *)(extraout_ECX + 0xe8) = 0xffffffff;
        FUN_006142ef();
      }
      iVar3 = (**(code **)(**(int **)(extraout_ECX + 0x84) + 0xc))();
      if (iVar3 == 0) {
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
      }
      if (*(int *)(extraout_ECX + 0x1c0) == 0) {
        FUN_0051548c(0);
      }
      puVar2 = (undefined4 *)FUN_00616184(unaff_EBP + -0x10);
      uVar4 = *puVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0040ee87(uVar4,1);
      iVar3 = *(int *)(extraout_ECX + 0x114);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = *(int **)(extraout_ECX + 0x114);
      iVar3 = *piVar1;
      *(int **)(unaff_EBP + 8) = piVar1;
      iVar3 = (**(code **)(iVar3 + 100))
                        (piVar1,*(undefined4 *)(unaff_EBP + -0x20),
                         *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0x14));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x20);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004125d9();
      puVar2 = (undefined4 *)FUN_0043f93c(unaff_EBP + -0x10);
      uVar4 = *puVar2;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      FUN_0040ee87(uVar4,1);
      iVar3 = *(int *)(extraout_ECX + 0x114);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = *(int **)(extraout_ECX + 0x114);
      iVar3 = *piVar1;
      *(int **)(unaff_EBP + 8) = piVar1;
      iVar3 = (**(code **)(iVar3 + 0xfc))
                        (piVar1,*(undefined4 *)(unaff_EBP + -0x20),
                         *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                         *(undefined4 *)(unaff_EBP + -0x14));
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar3 = FUN_00402bc3(unaff_EBP + -0x20);
      if (iVar3 < 0) {
        FUN_00878dfb(iVar3);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00412600();
      if (*(int *)(extraout_ECX + 0x114) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = *(int **)(extraout_ECX + 0x114);
      iVar3 = (**(code **)(*piVar1 + 0xb4))(piVar1,3);
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
      }
      if (*(int *)(extraout_ECX + 0x114) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = *(int **)(extraout_ECX + 0x114);
      iVar3 = (**(code **)(*piVar1 + 0xe0))(piVar1,0);
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
      }
      *(undefined4 *)(extraout_ECX + 0x110) = 0;
    }
    piVar1 = *(int **)(extraout_ECX + 0x84);
    if (piVar1[0x149] != 0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
    }
    iVar3 = (**(code **)(*piVar1 + 0xc))();
    if (iVar3 != 0) goto LAB_00616173;
    uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  FUN_005c9c3b(uVar4);
LAB_00616173:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


