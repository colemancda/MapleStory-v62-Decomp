/* FUN_50409e01 - 0x50409e01 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50409e01(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  
  FUN_5042a430();
  iVar5 = *(int *)(unaff_EBP + 8);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + 8) = iVar5 + 0x1c;
  *(int *)(unaff_EBP + -0x14) = iVar5 + 0x1c;
  FUN_50401895();
  iVar4 = *(int *)(iVar5 + 0x38);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar4 == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar1 = *(int **)(iVar5 + 0x38);
  iVar4 = (**(code **)(*piVar1 + 0x24))(piVar1,*(undefined1 *)(unaff_EBP + 0xe));
  if (iVar4 < 0) {
    FUN_5042a366(iVar4,piVar1,&DAT_50435488);
  }
  if (*(int *)(iVar5 + 0x3c) == 0) {
    FUN_5042a358(0x80004003);
  }
  uVar2 = *(uint *)(unaff_EBP + 0xc);
  piVar1 = *(int **)(iVar5 + 0x3c);
  iVar4 = (**(code **)(*piVar1 + 0x40))(piVar1,uVar2 >> 8 & 0xff,uVar2 & 0xff);
  if (iVar4 < 0) {
    FUN_5042a366(iVar4,piVar1,&DAT_50435488);
  }
  if (*(int *)(iVar5 + 0x34) == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar1 = *(int **)(iVar5 + 0x34);
  iVar5 = (**(code **)(*piVar1 + 0x24))(piVar1,uVar2 >> 0x18);
  if (iVar5 < 0) {
    FUN_5042a366(iVar5,piVar1,&DAT_50435488);
  }
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar3 = 0;
  }
  FUN_50409ee6();
  return;
}


