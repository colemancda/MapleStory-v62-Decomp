/* FUN_006ef6e0 - 0x006ef6e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_006ef6e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  for (uVar3 = 0; (iVar1 = *(int *)(param_1 + 8), iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4)));
      uVar3 = uVar3 + 1) {
    iVar1 = (*DAT_0097b57c)(iVar2 + 0x14 + iVar1,param_2,param_3);
    if (iVar1 != 0) {
      return *(undefined4 *)(*(int *)(param_1 + 8) + uVar3 * 0x28);
    }
    iVar2 = iVar2 + 0x28;
  }
  return 0;
}


