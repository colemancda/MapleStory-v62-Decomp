/* FUN_0048b4b9 - 0x0048b4b9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0048b4b9(int param_1,int param_2,undefined4 param_3)

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
  iVar1 = *(int *)(iVar1 + 0x3e3 + *(int *)(param_1 + 0x58c) * 4);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
  }
  iVar1 = *(int *)(param_1 + 0x588);
  if (iVar1 <= param_2) {
    if (iVar1 + 0xc < iVar2) {
      iVar2 = iVar1 + 0xc;
    }
    if (param_2 < iVar2) {
      iVar2 = ((param_2 - iVar1) / 4) * 0x23;
      iVar1 = ((param_2 - iVar1) % 4) * 0x23;
      (*DAT_0097b504)(param_3,iVar1 + 0x16,iVar2 + 0x37,iVar1 + 0x36,iVar2 + 0x57);
      return 1;
    }
  }
  (*DAT_0097b508)(param_3);
  return 0;
}


