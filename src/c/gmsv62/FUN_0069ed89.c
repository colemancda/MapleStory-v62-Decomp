/* FUN_0069ed89 - 0x0069ed89 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069ed89(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int extraout_ECX;
  undefined4 *puVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  FUN_004031b7(0,3);
  iVar2 = *(int *)(extraout_ECX + 0x2dc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00425067(unaff_EBP + -0x10,unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  FUN_004031b7(0,3);
  iVar2 = *(int *)(extraout_ECX + 0x2e0);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00425067(unaff_EBP + -0x14,unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x44);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  puVar7 = (undefined4 *)(extraout_ECX + 0x22c);
  puVar6 = (undefined4 *)(extraout_ECX + 0x13c);
  *(undefined4 **)(unaff_EBP + -0x18) = puVar7;
  *(undefined4 *)(unaff_EBP + -0x1c) = 10;
  while( true ) {
    FUN_004031b7(puVar7[-0x14],3);
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    uVar5 = *puVar7;
    iVar2 = *piVar4;
    uVar8 = puVar6[1];
    uVar9 = *puVar6;
    uVar10 = puVar6[-0x27];
    uVar1 = puVar6[-0x28];
    *(int **)(unaff_EBP + -0x24) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar4,uVar1,uVar10,uVar9,uVar8,uVar5,*(undefined4 *)(unaff_EBP + -0x34),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
    puVar6 = puVar6 + 2;
    piVar4 = (int *)(unaff_EBP + -0x1c);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) break;
    puVar7 = *(undefined4 **)(unaff_EBP + -0x18);
  }
  puVar7 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x254);
  puVar6 = (undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x18c);
  *(undefined4 **)(unaff_EBP + -0x18) = puVar7;
  *(undefined4 *)(unaff_EBP + -0x20) = 10;
  while( true ) {
    FUN_004031b7(puVar7[-0x14],3);
    piVar4 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + -0x14);
    }
    uVar5 = *puVar7;
    iVar2 = *piVar4;
    uVar8 = puVar6[1];
    uVar9 = *puVar6;
    uVar10 = puVar6[-0x27];
    uVar1 = puVar6[-0x28];
    *(int **)(unaff_EBP + -0x24) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x90))
                      (piVar4,uVar1,uVar10,uVar9,uVar8,uVar5,*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                       *(undefined4 *)(unaff_EBP + -0x48));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963cc8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x54);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
    puVar6 = puVar6 + 2;
    piVar4 = (int *)(unaff_EBP + -0x20);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) break;
    puVar7 = *(undefined4 **)(unaff_EBP + -0x18);
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 600;
  do {
    uVar3 = FUN_004133f0();
    *(uint *)(unaff_EBP + -0x24) = uVar3 % 0x2c;
    uVar3 = FUN_004133f0();
    piVar4 = *(int **)(unaff_EBP + -0x10);
    *(uint *)(unaff_EBP + -0x1c) = uVar3 % 0x5a;
    if (piVar4 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar4 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar4;
    *(int **)(unaff_EBP + -0x18) = piVar4;
    iVar2 = (**(code **)(iVar2 + 0x8c))
                      (piVar4,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x24),
                       1,1,0xffddeeff);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18),&DAT_00963cc8);
    }
    piVar4 = (int *)(unaff_EBP + -0x20);
    *piVar4 = *piVar4 + -1;
  } while (*piVar4 != 0);
  *(undefined4 *)(unaff_EBP + -0x20) = 600;
  do {
    uVar10 = 0xffddeeff;
    uVar9 = 1;
    uVar8 = 1;
    uVar3 = FUN_004133f0(1,1,0xffddeeff);
    uVar3 = uVar3 % 0x2c;
    uVar5 = FUN_0042517f(0x5a,0,uVar3);
    FUN_004115d9(uVar5);
    FUN_005039eb(uVar5,uVar3,uVar8,uVar9,uVar10);
    piVar4 = (int *)(unaff_EBP + -0x20);
    *piVar4 = *piVar4 + -1;
  } while (*piVar4 != 0);
  FUN_004125e6();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


