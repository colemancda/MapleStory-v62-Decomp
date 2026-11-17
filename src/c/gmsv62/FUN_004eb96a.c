/* FUN_004eb96a - 0x004eb96a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004eb96a(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  uint uVar5;
  int unaff_EBP;
  int iStack_3c;
  uint uStack_38;
  
  FUN_00879bb8();
  uStack_38 = 0x4eb981;
  FUN_0059f58a();
  uStack_38 = 0x4eb98c;
  FUN_0083057d();
  if (*(int *)(extraout_ECX + 0x1dc) != 0) {
    uStack_38 = 0x4eb9a2;
    iVar2 = (*DAT_0097b704)();
    if (3000 < (uint)(iVar2 - *(int *)(extraout_ECX + 0x1e4))) {
      *(undefined4 *)(extraout_ECX + 0x1dc) = 0;
      uStack_38 = 0x4eb9b8;
      iVar2 = (*DAT_0097b704)();
      *(int *)(extraout_ECX + 0x1e4) = iVar2;
    }
  }
  uStack_38 = 0x4eb9bf;
  iVar3 = FUN_007d1e08();
  uStack_38 = *(uint *)(extraout_ECX + 0x1c8);
  uVar1 = *(undefined4 *)(DAT_00978368 + 0x3334);
  iVar2 = *(int *)(extraout_ECX + 0x1d0);
  *(int *)(unaff_EBP + -0x18) = iVar3;
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  if (uStack_38 != 0) {
    do {
      *(uint *)(unaff_EBP + -0x10) = uStack_38;
      iVar4 = *(int *)((-(uint)(uStack_38 != 0) & uStack_38 - 0x10) + 4);
      uVar5 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
      iStack_3c = 0x4eba10;
      FUN_004ebba7();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((*(int *)(unaff_EBP + -0x2c) == 1) && (*(int *)(unaff_EBP + -0x14) != 0)) {
LAB_004eba40:
        uStack_38 = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_3c = 0x4eba4e;
        FUN_004f1c7a();
      }
      else if (*(int *)(unaff_EBP + -0x34) <= iVar3 - iVar2) {
        uStack_38 = 1;
        *(int **)(unaff_EBP + -0x1c) = &iStack_3c;
        FUN_00450368(unaff_EBP + -0x28);
        FUN_004ee3ab(*(undefined4 *)(unaff_EBP + -0x30));
        goto LAB_004eba40;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        uStack_38 = *(int *)(unaff_EBP + -0x28) + -0xc;
        iStack_3c = 0x4eba62;
        FUN_00434e38();
      }
      uStack_38 = uVar5;
    } while (uVar5 != 0);
    iVar3 = *(int *)(unaff_EBP + -0x18);
  }
  if (((*(int *)(extraout_ECX + 0x1d8) != 0) &&
      (iStack_3c = *(int *)(extraout_ECX + 0x1d4), iStack_3c != 0)) && (22000 < iVar3 - iStack_3c))
  {
    uStack_38 = 1;
    *(int **)(unaff_EBP + -0x1c) = &iStack_3c;
    FUN_0045f0f3(&DAT_00978474,0xffffffff);
    FUN_004ee3ab(0);
  }
  uStack_38 = 0;
  iStack_3c = unaff_EBP + -0x24;
  FUN_00817e25();
  iVar2 = DAT_00978364;
  uStack_38 = *(undefined4 *)(unaff_EBP + -0x20);
  iStack_3c = *(int *)(unaff_EBP + -0x24);
  uVar5 = FUN_00818edc();
  if (uVar5 != (-(uint)(iVar2 != 0) & iVar2 + 4U)) goto LAB_004ebb6f;
  uStack_38 = 1;
  iStack_3c = unaff_EBP + -0x24;
  FUN_00817e25();
  iVar3 = DAT_009784c0;
  iVar2 = *(int *)(DAT_009784c0 + 0x9b4);
  *(int *)(unaff_EBP + -0x10) = DAT_009784c0;
  if (iVar2 == 1) {
    uStack_38 = unaff_EBP + -0x24;
    iStack_3c = 0x4ebb0e;
    iVar4 = FUN_005f0f5e();
LAB_004ebb9f:
    if (iVar4 == 0) {
      iVar2 = 0;
    }
  }
  else {
    if ((iVar2 == 2) || (iVar2 == 3)) {
      uStack_38 = unaff_EBP + -0x24;
      iStack_3c = 0x4ebb9f;
      iVar4 = FUN_007c0d75();
      goto LAB_004ebb9f;
    }
    if (iVar2 == 0) {
      uStack_38 = unaff_EBP + -0x24;
      iStack_3c = 0x4ebb30;
      iVar3 = FUN_007c0d75();
      uStack_38 = unaff_EBP + -0x24;
      iStack_3c = 0x4ebb41;
      iVar4 = FUN_005f0f5e();
      if (iVar4 != 0) {
        iVar2 = 1;
      }
      if (iVar3 != 0) {
        iVar2 = (1 < *(int *)(iVar3 + 0x1700)) + 2;
      }
      iVar3 = *(int *)(unaff_EBP + -0x10);
    }
  }
  if (iVar2 != *(int *)(iVar3 + 0x9b4)) {
    iStack_3c = 0x4ebb6f;
    uStack_38 = iVar2;
    FUN_00526a75();
  }
LAB_004ebb6f:
  uStack_38 = 0x4ebb76;
  FUN_005a94ac();
  uStack_38 = 0x4ebb81;
  FUN_00621f69();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


