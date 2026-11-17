/* FUN_005c4eb9 - 0x005c4eb9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c4eb9(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined *puVar7;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x274) == 0) || (iVar4 = *(int *)(extraout_ECX + 0x160), iVar4 == 0))
  {
    iVar4 = *(int *)(extraout_ECX + 0x15c);
  }
  uVar3 = FUN_004b8c9b(iVar4 + 0xc,*(undefined4 *)(iVar4 + 0x14));
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  iVar4 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
  puVar5 = (undefined4 *)
           (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))(*(undefined4 *)(iVar4 + 4));
  FUN_007d3c48(*puVar5);
  FUN_007d4267();
  if ((*(int *)(extraout_ECX + 0x274) == 0) || (iVar4 = *(int *)(extraout_ECX + 0x160), iVar4 == 0))
  {
    iVar4 = *(int *)(extraout_ECX + 0x15c);
  }
  if (0 < *(int *)(iVar4 + 500)) {
    _rand();
    uVar3 = FUN_004133b5();
    *(undefined4 *)(extraout_ECX + 0x348) = uVar3;
    FUN_005c5f49();
    FUN_00403191(&DAT_00980690);
    iVar4 = *(int *)(extraout_ECX + 0xec);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar6 = *(int **)(extraout_ECX + 0xec);
    iVar4 = *piVar6;
    *(int **)(unaff_EBP + -0x14) = piVar6;
    iVar4 = (**(code **)(iVar4 + 0x8c))
                      (piVar6,extraout_ECX + 0x480,extraout_ECX + 0x484,0,0,0,0,0,0,
                       *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                       *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x14),&DAT_00963de8);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    if (*(int *)(extraout_ECX + 0xec) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar6 = *(int **)(extraout_ECX + 0xec);
    iVar4 = (**(code **)(*piVar6 + 0x40))
                      (piVar6,*(undefined4 *)(extraout_ECX + 0x480),
                       *(undefined4 *)(extraout_ECX + 0x484));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,piVar6,&DAT_00963d08);
    }
    uVar3 = FUN_0055a766();
    *(undefined4 *)(extraout_ECX + 0x3d8) = uVar3;
  }
  FUN_0045f4fc();
  FUN_0045f4fc();
  FUN_005d1540();
  *(undefined4 *)(extraout_ECX + 0x3dc) = 0x7fffffff;
  *(undefined4 *)(extraout_ECX + 0x3e0) = 0x7fffffff;
  *(undefined4 *)(extraout_ECX + 0x3e4) = 0x7fffffff;
  *(undefined4 *)(extraout_ECX + 1000) = 0x7fffffff;
  iVar4 = *(int *)(extraout_ECX + 0xa4);
  if (iVar4 != 0) {
    while( true ) {
      iVar1 = *(int *)((-(uint)(iVar4 != 0) & iVar4 - 0x10U) + 4);
      iVar2 = *(int *)(iVar4 + 0x1c);
      *(int *)(unaff_EBP + -0x24) = iVar4;
      *(uint *)(unaff_EBP + -0x14) = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      if (iVar2 != 0) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x3b1);
        uVar3 = *puVar5;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00437222(uVar3,unaff_EBP + -0x10,0);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          FUN_00403384(*(int *)(unaff_EBP + -0x18) + -0xc);
        }
        FUN_0040ee87(*(undefined4 *)(unaff_EBP + -0x10),1);
        iVar4 = *(int *)(iVar4 + 0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar6 = (int *)FUN_004113e5(unaff_EBP + -0x20);
        iVar4 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar4 = *(int *)*piVar6;
        *(int **)(unaff_EBP + -0x1c) = (int *)*piVar6;
        iVar4 = (**(code **)(iVar4 + 100))();
        if (iVar4 < 0) {
          FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963de8);
        }
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x34);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        FUN_00403191(&DAT_00980690);
        iVar4 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (iVar4 == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar4 = FUN_0042a378();
        FUN_004031b7(iVar4 + 200,3);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        FUN_00424f2f(0xffffff01,0,unaff_EBP + -0x44,unaff_EBP + -0x54);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x44);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x54);
        if (iVar4 < 0) {
          FUN_00878dfb(iVar4);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004125d9();
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) break;
      iVar4 = *(int *)(unaff_EBP + -0x14);
    }
  }
  puVar7 = (undefined *)
           FUN_004b8c9b(*(int *)(extraout_ECX + 0x15c) + 0xc,
                        *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x14));
  if (puVar7 == &DAT_00864702) {
    FUN_0042dc18(_DAT_008eacd8,0,0,0,0);
  }
  iVar4 = FUN_004b8c9b(*(int *)(extraout_ECX + 0x15c) + 0xc,
                       *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x14));
  if (iVar4 == 0x866e2a) {
    FUN_0042dc18(_DAT_008ecb38,0,0,4000,1);
  }
  iVar4 = FUN_004b8c9b(*(int *)(extraout_ECX + 0x15c) + 0xc,
                       *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x14));
  if (iVar4 == 0x866e22) {
    FUN_0042dc18(_DAT_008ecb30,0,0,3000,1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


