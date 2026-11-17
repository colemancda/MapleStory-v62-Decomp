/* FUN_00849a47 - 0x00849a47 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00849a47(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0;
      (iVar1 = *(int *)(param_1 + 0x3228), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
      uVar2 = uVar2 + 1) {
    if (*(int *)(*(int *)(iVar1 + 4 + uVar2 * 8) + 0xbc) == param_2) {
      return 1;
    }
  }
  return 0;
}


