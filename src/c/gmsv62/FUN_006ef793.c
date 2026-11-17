/* FUN_006ef793 - 0x006ef793 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_006ef793(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  for (uVar2 = 0; (iVar1 = *(int *)(param_1 + 8), iVar1 != 0 && (uVar2 < *(uint *)(iVar1 + -4)));
      uVar2 = uVar2 + 1) {
    if (*(int *)(iVar3 + 0x24 + iVar1) == param_2) {
      return *(undefined4 *)(*(int *)(param_1 + 8) + uVar2 * 0x28);
    }
    iVar3 = iVar3 + 0x28;
  }
  return 0;
}


