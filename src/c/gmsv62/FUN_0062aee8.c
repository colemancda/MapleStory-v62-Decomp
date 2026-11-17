/* FUN_0062aee8 - 0x0062aee8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0062aee8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_18 [4];
  undefined4 local_8;
  
  local_8 = param_6;
  local_18[1] = param_3;
  local_18[2] = param_4;
  piVar4 = (int *)(param_1 + 0xd4);
  local_18[3] = param_5;
  local_18[0] = param_2;
  iVar5 = 0;
  for (uVar1 = 0; (iVar2 = *piVar4, iVar2 != 0 && (uVar1 < *(uint *)(iVar2 + -4)));
      uVar1 = uVar1 + 1) {
    if (*(int *)(iVar5 + iVar2) == param_2) {
      iVar5 = *piVar4;
      iVar2 = uVar1 * 0x14;
      *(undefined4 *)(iVar2 + 0xc + iVar5) = param_5;
      *(undefined4 *)(iVar2 + 0x10 + iVar5) = param_6;
      iVar5 = *piVar4;
      *(undefined4 *)(iVar2 + 4 + iVar5) = param_3;
      *(undefined4 *)(iVar2 + 8 + iVar5) = param_4;
      return;
    }
    iVar5 = iVar5 + 0x14;
  }
  piVar3 = (int *)FUN_0062fbee(0xffffffff);
  piVar4 = local_18;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar3 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar3 = piVar3 + 1;
  }
  return;
}


