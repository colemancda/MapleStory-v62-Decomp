/* FUN_006fcbdc - 0x006fcbdc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006fcbdc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  for (uVar4 = 0;
      (iVar1 = *(int *)(*(int *)(param_1 + 0x70) + 0x1c), iVar1 != 0 &&
      (uVar4 < *(uint *)(iVar1 + -4))); uVar4 = uVar4 + 1) {
    iVar3 = iVar3 + *(int *)(iVar1 + uVar4 * 4);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x70) + 0x1c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
  }
  FUN_004ad003((iVar2 * 7 + -0x97 + iVar3) / 8 + 1);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  FUN_004acfe9(0);
  return;
}


