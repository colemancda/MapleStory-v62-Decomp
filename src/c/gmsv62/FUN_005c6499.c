/* FUN_005c6499 - 0x005c6499 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005c6499(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = -(uint)(*(int *)(param_1 + 0xec) != 0) & *(int *)(param_1 + 0xec) - 0xcU;
  if (*(int *)(uVar5 + 0x238) == 3) {
    iVar4 = -0x3ffbe0ec;
  }
  else {
    iVar4 = (*(int *)(uVar5 + 0x128) * 3000 - *(int *)(uVar5 + 300)) * 10 + -0x3fff8ad9;
  }
  if (*(int *)(param_1 + 0x440) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0x440);
  iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,iVar4);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
  }
  puVar3 = (undefined *)
           FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                        *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14));
  if (((puVar3 == &DAT_00864700) ||
      (puVar3 = (undefined *)
                FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                             *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)),
      puVar3 == &DAT_00864701)) ||
     (puVar3 = (undefined *)
               FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                            *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)),
     puVar3 == &DAT_00864702)) {
    iVar4 = *(int *)(uVar5 + 300);
    iVar2 = *(int *)(uVar5 + 0x128);
    if (*(int *)(param_1 + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(param_1 + 0x440);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,(iVar2 * 3000 - iVar4) * 10 + -0x3fff8adb);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
  }
  puVar3 = (undefined *)
           FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                        *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14));
  if ((puVar3 == &DAT_00864703) ||
     (puVar3 = (undefined *)
               FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                            *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)),
     puVar3 == &DAT_00864704)) {
    iVar4 = *(int *)(uVar5 + 300);
    iVar2 = *(int *)(uVar5 + 0x128);
    if (*(int *)(param_1 + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(param_1 + 0x440);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,(iVar2 * 3000 - iVar4) * 10 + -0x3fff8adf);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
  }
  puVar3 = (undefined *)
           FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                        *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14));
  if ((puVar3 == &DAT_00864705) ||
     (puVar3 = (undefined *)
               FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                            *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)),
     puVar3 == &DAT_00864706)) {
    iVar4 = *(int *)(uVar5 + 300);
    iVar2 = *(int *)(uVar5 + 0x128);
    if (*(int *)(param_1 + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(param_1 + 0x440);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,(iVar2 * 3000 - iVar4) * 10 + -0x3fff8ade);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
  }
  puVar3 = (undefined *)
           FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                        *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14));
  if ((puVar3 == &DAT_00864707) ||
     (puVar3 = (undefined *)
               FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                            *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)),
     puVar3 == &DAT_00864708)) {
    iVar4 = *(int *)(uVar5 + 300);
    iVar2 = *(int *)(uVar5 + 0x128);
    if (*(int *)(param_1 + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(param_1 + 0x440);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,(iVar2 * 3000 - iVar4) * 10 + -0x3fff8add);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
  }
  puVar3 = (undefined *)
           FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                        *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14));
  if ((puVar3 == &DAT_00864709) ||
     (puVar3 = (undefined *)
               FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                            *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)),
     puVar3 == &DAT_0086470a)) {
    iVar4 = *(int *)(uVar5 + 300);
    iVar2 = *(int *)(uVar5 + 0x128);
    if (*(int *)(param_1 + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(param_1 + 0x440);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,(iVar2 * 3000 - iVar4) * 10 + -0x3fff8adc);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
  }
  iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                       *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14));
  if (iVar4 == 0x866e22) {
    iVar4 = *(int *)(uVar5 + 300);
    iVar2 = *(int *)(uVar5 + 0x128);
    if (*(int *)(param_1 + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(param_1 + 0x440);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,(iVar2 * 3000 - iVar4) * 10 + -0x3fff8adb);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
  }
  iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                       *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14));
  if ((iVar4 == 0x866e13) ||
     (iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                           *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)), iVar4 == 0x866e1b)) {
    iVar4 = *(int *)(uVar5 + 300);
    iVar2 = *(int *)(uVar5 + 0x128);
    if (*(int *)(param_1 + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(param_1 + 0x440);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,(iVar2 * 3000 - iVar4) * 10 + -0x3fff8adc);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
  }
  iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                       *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14));
  if ((((iVar4 == 0x866e12) ||
       (iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                             *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)), iVar4 == 0x866e1a))
      || (iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                               *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)), iVar4 == 0x866e14
         )) || (iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                                     *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)),
               iVar4 == 0x866e1c)) {
    iVar4 = *(int *)(uVar5 + 300);
    iVar2 = *(int *)(uVar5 + 0x128);
    if (*(int *)(param_1 + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(param_1 + 0x440);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,(iVar2 * 3000 - iVar4) * 10 + -0x3fff8add);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
  }
  iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                       *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14));
  if (((iVar4 == 0x866e15) ||
      (iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                            *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)), iVar4 == 0x866e1d))
     || ((iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                               *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)), iVar4 == 0x866e16
         || (iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                                  *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)),
            iVar4 == 0x866e1e)))) {
    iVar4 = *(int *)(uVar5 + 300);
    iVar2 = *(int *)(uVar5 + 0x128);
    if (*(int *)(param_1 + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(param_1 + 0x440);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,(iVar2 * 3000 - iVar4) * 10 + -0x3fff8ade);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
  }
  iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                       *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14));
  if ((iVar4 == 0x866e18) ||
     (iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                           *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)), iVar4 == 0x866e20)) {
    iVar4 = *(int *)(uVar5 + 300);
    iVar2 = *(int *)(uVar5 + 0x128);
    if (*(int *)(param_1 + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(param_1 + 0x440);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,(iVar2 * 3000 - iVar4) * 10 + -0x3fff8adf);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
  }
  iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                       *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14));
  if ((iVar4 == 0x866e17) ||
     (iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                           *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)), iVar4 == 0x866e1f)) {
    iVar4 = *(int *)(uVar5 + 300);
    iVar2 = *(int *)(uVar5 + 0x128);
    if (*(int *)(param_1 + 0x440) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar1 = *(int **)(param_1 + 0x440);
    iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,((iVar2 * 3000 - iVar4) + -0x6665ab0) * 10);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
    }
  }
  iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                       *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14));
  if ((iVar4 != 0x866e19) &&
     (iVar4 = FUN_004b8c9b(*(int *)(param_1 + 0x15c) + 0xc,
                           *(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x14)), iVar4 != 0x866e21)) {
    return;
  }
  iVar4 = *(int *)(uVar5 + 300);
  iVar2 = *(int *)(uVar5 + 0x128);
  if (*(int *)(param_1 + 0x440) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0x440);
  iVar4 = (**(code **)(*piVar1 + 0xb4))(piVar1,(iVar2 * 3000 - iVar4) * 10 + -0x3fff8ae1);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar1,&DAT_00963df8);
  }
  return;
}


