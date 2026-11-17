/* FUN_004f5e7e - 0x004f5e7e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004f5e7e(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x728) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(*(int *)(param_1 + 0x728) + -4);
  }
  local_c = -1;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x728) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x728) + -4);
  }
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    iVar3 = iVar2 * 0xc;
    do {
      iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x728) + 4);
      if (local_c != iVar1) {
        local_8 = iVar2 + 1;
        local_c = iVar1;
      }
      iVar1 = FUN_0045ec92(param_2);
      if (iVar1 != 0) {
        return local_8;
      }
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + -0xc;
    } while (-1 < iVar2);
  }
  return -1;
}


