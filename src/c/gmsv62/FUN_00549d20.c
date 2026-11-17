/* FUN_00549d20 - 0x00549d20 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00549d20(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  iVar1 = FUN_00455c59(&local_c);
  iVar1 = *(int *)(iVar1 + 4);
  if (local_8 != 0) {
    FUN_0045e7c2(0);
    local_8 = 0;
  }
  iVar1 = *(int *)(iVar1 + 0x3e3 + *(int *)(param_1 + 0x578) * 4);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
  }
  iVar1 = *(int *)(param_1 + 0x574);
  if (iVar1 <= param_2) {
    if (iVar1 + 0x18 < iVar2) {
      iVar2 = iVar1 + 0x18;
    }
    if (param_2 < iVar2) {
      iVar2 = ((param_2 - iVar1) / 4) * 0x22;
      iVar1 = ((param_2 - iVar1) % 4) * 0x24;
      (*DAT_0097b504)(param_3,iVar1 + 0x15,iVar2 + 0x47,iVar1 + 0x35,iVar2 + 0x67);
      return 1;
    }
  }
  (*DAT_0097b508)(param_3);
  return 0;
}


