/* ptr_00440ed0 - 0x00440ed0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00440ed0(void)

{
  int *piVar1;
  undefined4 in_EAX;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_00878e09(in_EAX,*(undefined4 *)(unaff_EBP + -0x34),&DAT_00963de8);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  iVar2 = FUN_00413367(unaff_EBX + 0x458,*(undefined4 *)(unaff_EBX + 0x460));
  if (iVar2 == 0) {
    if (*(int *)(unaff_EBX + 0x44c) == 0) {
      if (*(int *)(unaff_EBP + -0x28) != *(int *)(unaff_EBX + 0x450) &&
          -1 < *(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBX + 0x450)) {
        iVar2 = _rand();
        iVar2 = iVar2 % 3 + 1;
        if (0 < iVar2) {
          *(int *)(unaff_EBP + -0x28) = iVar2;
          do {
            FUN_00403191(&DAT_00980690);
            *(undefined4 *)(unaff_EBP + -4) = 0x1f;
            FUN_00403191(&DAT_00980690);
            iVar2 = *(int *)(unaff_EBX + 0xcbc);
            *(undefined1 *)(unaff_EBP + -4) = 0x20;
            if (iVar2 == 0) {
              FUN_00878dfb(0x80004003);
            }
            FUN_00425139(0x100,unaff_EBP + -0x58,unaff_EBP + -0x48);
            *(undefined1 *)(unaff_EBP + -4) = 0x1f;
            iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
            if (iVar2 < 0) {
              FUN_00878dfb(iVar2);
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iVar2 = FUN_00402bc3(unaff_EBP + -0x48);
            if (iVar2 < 0) {
              FUN_00878dfb(iVar2);
            }
            piVar1 = (int *)(unaff_EBP + -0x28);
            *piVar1 = *piVar1 + -1;
          } while (*piVar1 != 0);
        }
        *(undefined4 *)(unaff_EBX + 0x44c) = 1;
      }
    }
    else {
      if (*(int *)(unaff_EBX + 0xcbc) == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = FUN_00432a57();
      if (iVar2 == 0) {
        FUN_004031b7(1,3);
        iVar2 = *(int *)(unaff_EBX + 0xcbc);
        *(undefined4 *)(unaff_EBP + -4) = 0x1e;
        if (iVar2 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar1 = *(int **)(unaff_EBX + 0xcbc);
        iVar2 = *piVar1;
        *(int **)(unaff_EBP + -0x34) = piVar1;
        iVar2 = (**(code **)(iVar2 + 0x10c))
                          (piVar1,*(undefined4 *)(unaff_EBP + -0x58),
                           *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                           *(undefined4 *)(unaff_EBP + -0x4c));
        if (iVar2 < 0) {
          FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x34),&DAT_00963df8);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar2 = FUN_00402bc3(unaff_EBP + -0x58);
        if (iVar2 < 0) {
          FUN_00878dfb(iVar2);
        }
        FUN_0044239f();
      }
    }
  }
  else if (*(int *)(unaff_EBP + -0x28) != *(int *)(unaff_EBX + 0x454) &&
           -1 < *(int *)(unaff_EBP + -0x28) - *(int *)(unaff_EBX + 0x454)) {
    FUN_0043f7b6(0,0xffffffff);
    *(undefined4 *)(unaff_EBX + 0x464) = 1;
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  do {
    iVar2 = *(int *)(unaff_EBX + 0x360) + *(int *)(unaff_EBP + -0x24);
    if (*(int *)(iVar2 + 4) != 0) {
      piVar1 = *(int **)(iVar2 + 4);
      iVar2 = *piVar1;
      *(int **)(unaff_EBP + -0x34) = piVar1;
      FUN_00424e27();
      uVar3 = FUN_0043210d();
      (**(code **)(iVar2 + 8))(uVar3);
    }
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 8;
  } while (*(int *)(unaff_EBP + -0x24) < 0x188);
  iVar4 = unaff_EBX + 0xce0;
  *(undefined4 *)(unaff_EBX + 0xce8) = *(undefined4 *)(unaff_EBX + 0xce0);
  *(undefined4 *)(unaff_EBX + 0xcec) = *(undefined4 *)(unaff_EBX + 0xce4);
  FUN_00424aee(&DAT_00980690);
  iVar2 = unaff_EBP + -0x68;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  uVar6 = 0;
  uVar3 = 0;
  iVar5 = unaff_EBX + 0xce4;
  *(undefined4 *)(unaff_EBP + -4) = 0x21;
  FUN_00424df4(iVar4,iVar5,0,0,0,0,0,0,iVar2);
  FUN_00441575(iVar4,iVar5,uVar3,uVar6,uVar7,uVar8,uVar9,uVar10,iVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x68);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


