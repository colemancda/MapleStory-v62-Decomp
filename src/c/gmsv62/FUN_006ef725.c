/* FUN_006ef725 - 0x006ef725 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall
FUN_006ef725(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  for (uVar3 = 0; (iVar1 = *(int *)(param_1 + 8), iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4)));
      uVar3 = uVar3 + 1) {
    iVar1 = (*DAT_0097b57c)(iVar2 + 0x14 + iVar1,param_3,param_4);
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 8);
      *param_2 = 0;
      FUN_00414f8b(iVar2 + 0x10 + uVar3 * 0x28);
      return param_2;
    }
    iVar2 = iVar2 + 0x28;
  }
  *param_2 = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  return param_2;
}


