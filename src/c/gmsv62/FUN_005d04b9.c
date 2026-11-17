/* FUN_005d04b9 - 0x005d04b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_005d04b9(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x15c);
  if (*(int *)(iVar1 + 0x1d8) != 0) {
    if ((*(int *)(iVar1 + 0x1e0) == 0) || (*(int *)(*(int *)(iVar1 + 0x1e0) + -4) == 0)) {
      return 1;
    }
    for (uVar3 = 0; (iVar2 = *(int *)(iVar1 + 0x1e0), iVar2 != 0 && (uVar3 < *(uint *)(iVar2 + -4)))
        ; uVar3 = uVar3 + 1) {
      if (*(int *)(iVar2 + uVar3 * 4) == param_2) {
        return 1;
      }
    }
  }
  return 0;
}


