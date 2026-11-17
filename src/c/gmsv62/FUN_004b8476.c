/* FUN_004b8476 - 0x004b8476 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004b8476(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x3e3 + param_2 * 4);
  iVar2 = 0;
  local_8 = 0;
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    local_c = *(int *)(iVar1 + -4);
  }
  local_c = local_c + -1;
  if (0 < local_c) {
    do {
      iVar1 = FUN_00458c4f(local_14,param_2,iVar2);
      iVar1 = *(int *)(iVar1 + 4);
      if (local_10 != 0) {
        FUN_00449913(0);
        local_10 = 0;
      }
      if ((iVar1 != 0) && (iVar1 = FUN_0045e2eb(), iVar1 == param_3)) {
        local_8 = local_8 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_c);
  }
  return local_8;
}


