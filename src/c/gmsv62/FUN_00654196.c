/* FUN_00654196 - 0x00654196 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_00654196(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar1 = FUN_006509a1(param_2);
  iVar2 = FUN_00413367(iVar1 + 0x160,*(undefined4 *)(iVar1 + 0x168));
  if (iVar2 < 0) {
    for (uVar3 = 0;
        (iVar1 = *(int *)(param_1 + 0x18), iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4)));
        uVar3 = uVar3 + 1) {
      if (*(int *)(iVar1 + uVar3 * 4) == param_3) {
        return true;
      }
    }
    if (param_3 == 0x3a) {
      for (uVar3 = 0;
          (iVar1 = *(int *)(param_1 + 0x18), iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4)));
          uVar3 = uVar3 + 1) {
        if (*(int *)(iVar1 + uVar3 * 4) == 0x39) {
          return true;
        }
      }
    }
    bVar4 = false;
  }
  else {
    iVar1 = FUN_00413367(iVar1 + 0x160,*(undefined4 *)(iVar1 + 0x168));
    bVar4 = iVar1 == param_3;
  }
  return bVar4;
}


