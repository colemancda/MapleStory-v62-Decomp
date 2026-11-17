/* FUN_00799ed9 - 0x00799ed9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00799ed9(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *extraout_ECX;
  int *piVar7;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *extraout_ECX;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  iVar2 = (**(code **)(iVar2 + 4))();
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0x1f;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_008ecb4c;
  FUN_0055cbf3(100);
  uVar4 = *(undefined4 *)(iVar2 + 0x32c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = FUN_00413367(iVar2 + 0x324,uVar4);
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x338);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    uVar4 = FUN_00413367(iVar2 + 0x330,uVar4);
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
    FUN_0055a65a(unaff_EBP + -0x1c,unaff_EBP + -0x18);
  }
  iVar3 = FUN_00413367(iVar2 + 0x2dc,*(undefined4 *)(iVar2 + 0x2e4));
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x2f0);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar4 = FUN_00413367(iVar2 + 0x2e8,uVar4);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    FUN_0055a65a(unaff_EBP + -0x18,unaff_EBP + -0x1c);
  }
  iVar3 = FUN_00413367(iVar2 + 0x4bc,*(undefined4 *)(iVar2 + 0x4c4));
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x4d0);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar4 = FUN_00413367(iVar2 + 0x4c8,uVar4);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    FUN_0055a65a(unaff_EBP + -0x18,unaff_EBP + -0x1c);
  }
  iVar3 = FUN_00413367(iVar2 + 0x4e0,*(undefined4 *)(iVar2 + 0x4e8));
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x4f4);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar4 = FUN_00413367(iVar2 + 0x4ec,uVar4);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    FUN_0055a65a(unaff_EBP + -0x18,unaff_EBP + -0x1c);
  }
  iVar3 = FUN_00413367(iVar2 + 0x348,*(undefined4 *)(iVar2 + 0x350));
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x35c);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar4 = FUN_00413367(iVar2 + 0x354,uVar4);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    FUN_0055a65a(unaff_EBP + -0x18,unaff_EBP + -0x1c);
  }
  iVar3 = FUN_00413367(iVar2 + 0x300,*(undefined4 *)(iVar2 + 0x308));
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x314);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar4 = FUN_00413367(iVar2 + 0x30c,uVar4);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    FUN_0055a65a(unaff_EBP + -0x18,unaff_EBP + -0x1c);
  }
  iVar3 = FUN_00413367(iVar2 + 0x504,*(undefined4 *)(iVar2 + 0x50c));
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x518);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar4 = FUN_00413367(iVar2 + 0x510,uVar4);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    FUN_0055a65a(unaff_EBP + -0x18,unaff_EBP + -0x1c);
  }
  iVar3 = FUN_00413367(iVar2 + 0x630,*(undefined4 *)(iVar2 + 0x638));
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x644);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar4 = FUN_00413367(iVar2 + 0x63c,uVar4);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    FUN_0055a65a(unaff_EBP + -0x18,unaff_EBP + -0x1c);
  }
  iVar3 = FUN_00413367(iVar2 + 0x738,*(undefined4 *)(iVar2 + 0x740));
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x74c);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar4 = FUN_00413367(iVar2 + 0x744,uVar4);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    FUN_0055a65a(unaff_EBP + -0x18,unaff_EBP + -0x1c);
  }
  iVar3 = FUN_00413367(iVar2 + 0x7b0,*(undefined4 *)(iVar2 + 0x7b8));
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar2 + 0x7c4);
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar4 = FUN_00413367(iVar2 + 0x7bc,uVar4);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
    FUN_0055a65a(unaff_EBP + -0x18,unaff_EBP + -0x1c);
  }
  iVar2 = extraout_ECX[0x784];
  *(int *)(unaff_EBP + -0x10) = iVar2;
  while (iVar2 != 0) {
    iVar3 = *(int *)((-(uint)(iVar2 != 0) & iVar2 - 0x10U) + 4);
    *(uint *)(unaff_EBP + -0x10) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
    iVar3 = FUN_0055a60a(iVar2,0);
    if (iVar3 == 0) {
      if (*(int *)(iVar2 + 8) != 0) {
        FUN_0048bbbd(*(int *)(iVar2 + 8));
      }
      FUN_0079e01c(iVar2);
    }
    else {
      FUN_005d1294(iVar2);
    }
    iVar2 = *(int *)(unaff_EBP + -0x10);
  }
  iVar2 = FUN_007d1e08();
  piVar7 = *(int **)(unaff_EBP + -0x30);
  if (piVar7 != (int *)0x0) {
    piVar1 = piVar7 + *(int *)(unaff_EBP + -0x2c);
    for (; piVar7 < piVar1; piVar7 = piVar7 + 1) {
      if (*piVar7 != 0) {
        iVar3 = *piVar7;
        goto LAB_0079a24a;
      }
    }
  }
  iVar3 = 0;
LAB_0079a24a:
  *(int *)(unaff_EBP + -0x10) = iVar3;
  if (iVar3 != 0) {
    iVar2 = iVar2 + *(int *)(unaff_EBP + 8);
    do {
      puVar5 = (undefined4 *)FUN_0079dfde();
      puVar6 = (undefined4 *)FUN_005d1353(unaff_EBP + -0x10,0);
      *puVar5 = *puVar6;
      puVar5[1] = iVar2;
      if (iVar2 == 0) {
        puVar5[1] = 1;
      }
      uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
      puVar5[2] = 0;
      puVar5[6] = uVar4;
    } while (*(int *)(unaff_EBP + -0x10) != 0);
  }
  FUN_0079c347(1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x34) = &PTR_FUN_008ecb4c;
  FUN_005d1302();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


