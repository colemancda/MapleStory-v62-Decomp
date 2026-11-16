/* FUN_50409c80 - 0x50409c80 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50409c80(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EBP;
  int *piVar6;
  uint uVar7;
  
  FUN_5042a430();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffcc;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_50409df0();
    return;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x1c) = iVar1 + 0x1c;
  *(int *)(unaff_EBP + -0x20) = iVar1 + 0x1c;
  FUN_50401895();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  Ordinal_8(unaff_EBP + -0x34);
  iVar3 = FUN_504057dd((short *)(unaff_EBP + -0x34),(short *)&DAT_50439040);
  if (iVar3 < 0) {
    FUN_5042a358(iVar3);
  }
  iVar3 = *(int *)(iVar1 + 0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar3 == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar4 = *(int **)(iVar1 + 0x3c);
  iVar3 = *piVar4;
  *(int **)(unaff_EBP + -0x14) = piVar4;
  iVar3 = (**(code **)(iVar3 + 0x8c))
                    (piVar4,unaff_EBP + -0x18,unaff_EBP + 8,0,0,0,0,0,0,
                     *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                     *(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28));
  if (iVar3 < 0) {
    FUN_5042a366(iVar3,*(int **)(unaff_EBP + -0x14),&DAT_50435298);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x34));
  if (iVar3 < 0) {
    FUN_5042a358(iVar3);
  }
  if (*(int *)(iVar1 + 0x34) == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar4 = FUN_50409655(*(int **)(iVar1 + 0x34));
  uVar7 = 0xff;
  if ((int)piVar4 < 0x100) {
    piVar6 = (int *)0x0;
    if (-1 < (int)piVar4) {
      piVar6 = piVar4;
    }
  }
  else {
    piVar6 = (int *)0xff;
  }
  if (*(int *)(iVar1 + 0x38) == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar4 = FUN_50409655(*(int **)(iVar1 + 0x38));
  if ((int)piVar4 < 0x100) {
    if ((int)piVar4 < 0) {
      piVar4 = (int *)0x0;
    }
  }
  else {
    piVar4 = (int *)0xff;
  }
  uVar5 = *(uint *)(unaff_EBP + -0x18);
  if ((int)uVar5 < 0x100) {
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0xff;
  }
  if ((*(int *)(unaff_EBP + 8) < 0x100) && (uVar7 = 0, -1 < *(int *)(unaff_EBP + 8))) {
    uVar7 = *(uint *)(unaff_EBP + 8);
  }
  **(uint **)(unaff_EBP + 0xc) = (((int)piVar6 << 8 | (uint)piVar4) << 8 | uVar5) << 8 | uVar7;
  puVar2 = *(undefined4 **)(unaff_EBP + -0x1c);
  piVar4 = puVar2 + 1;
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    *puVar2 = 0;
  }
  FUN_50409df0();
  return;
}


