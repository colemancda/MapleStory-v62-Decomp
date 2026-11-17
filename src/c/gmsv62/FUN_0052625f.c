/* FUN_0052625f - 0x0052625f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052625f(void)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  int *piVar9;
  
  FUN_00879bb8();
  *extraout_ECX = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 0xc);
  piVar9 = extraout_ECX + 5;
  *(undefined4 *)(unaff_EBP + 0xc) = 3;
  do {
    iVar4 = (*DAT_0097b3d4)(0,0,0,0);
    piVar3 = *(int **)(unaff_EBP + 8);
    *piVar9 = iVar4;
    *piVar3 = iVar4;
    if (iVar4 == 0) {
      iVar4 = (*DAT_0097b49c)();
      if (iVar4 < 1) {
        uVar5 = (*DAT_0097b49c)();
      }
      else {
        uVar5 = (*DAT_0097b49c)();
        uVar5 = uVar5 & 0xffff | 0x80070000;
      }
      FUN_008795da(uVar5,0);
    }
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 4;
    piVar9 = piVar9 + 1;
    piVar3 = (int *)(unaff_EBP + 0xc);
    *piVar3 = *piVar3 + -1;
  } while (*piVar3 != 0);
  uVar6 = (*DAT_0097b380)(0,0x800,&DAT_008f61b0,extraout_ECX + 1,0);
  iVar4 = DirectInput8Create(uVar6);
  if (iVar4 < 0) {
    FUN_008795da(iVar4,0);
  }
  _memset(extraout_ECX + 9,0,0x400);
  _memset(extraout_ECX + 0x109,0,0x400);
  pbVar7 = &DAT_009653e1;
  do {
    extraout_ECX[pbVar7[-1] + 9] = (uint)*pbVar7;
    pbVar1 = pbVar7 + -1;
    bVar2 = *pbVar7;
    pbVar7 = pbVar7 + 2;
    extraout_ECX[bVar2 + 0x109] = (uint)*pbVar1;
  } while (pbVar7 < &DAT_009654ad);
  extraout_ECX[8] = 0;
  puVar8 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x3b1);
  uVar6 = *puVar8;
  piVar9 = extraout_ECX + 0x26c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00437222(uVar6,piVar9,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  if (DAT_0097c1ac == 0) {
    FUN_00878dfb(0x80004003);
  }
  puVar8 = (undefined4 *)FUN_00429328(unaff_EBP + 0xc);
  piVar3 = (int *)*puVar8;
  *(undefined2 *)(unaff_EBP + -0x1c) = 0xd;
  *(int **)(unaff_EBP + -0x14) = piVar3;
  iVar4 = *piVar3;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  (**(code **)(iVar4 + 4))(piVar3);
  iVar4 = *piVar9;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar9 = (int *)*piVar9;
  iVar4 = *piVar9;
  *(int **)(unaff_EBP + 8) = piVar9;
  iVar4 = (**(code **)(iVar4 + 100))
                    (piVar9,*(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18),
                     *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x1c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  piVar9 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar9 != (int *)0x0) {
    (**(code **)(*piVar9 + 8))(piVar9);
  }
  puVar8 = extraout_ECX + 0x24e;
  FUN_00526469(*puVar8,extraout_ECX[0x24f]);
  _memset(puVar8,0,0x2c);
  *puVar8 = 400;
  extraout_ECX[0x24f] = 300;
  FUN_0052688f();
  FUN_00526a75(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


