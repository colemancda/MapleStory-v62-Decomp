/* FUN_00616974 - 0x00616974 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00616974(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0; (iVar1 = *(int *)(param_1 + 0x7c), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
      uVar2 = uVar2 + 1) {
    if (*(int *)(iVar1 + uVar2 * 4) == param_2) {
      return 1;
    }
  }
  return 0;
}


