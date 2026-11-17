/* FUN_00649479 - 0x00649479 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_00649479(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    local_14 = 0;
  }
  else {
    local_14 = *(int *)(*(int *)(param_1 + 0xd0) + -4);
  }
  if (*(int *)(param_1 + 0xcc) == 0) {
    local_8 = 0;
  }
  else {
    local_8 = *(int *)(*(int *)(param_1 + 0xcc) + -4);
  }
  local_c = 0;
  local_10 = 0;
  while( true ) {
    iVar1 = local_8;
    if (local_14 < local_8) {
      iVar1 = local_14;
    }
    if (iVar1 <= local_c) {
      if (local_8 == local_14) {
        local_c = 0;
      }
      else if (local_8 - local_14 < 0) {
        local_c = local_c + -1;
      }
      return local_c;
    }
    iVar3 = *(int *)(param_1 + 0xcc) + local_10;
    iVar4 = local_10 + *(int *)(param_1 + 0xd0);
    iVar1 = FUN_0045e2eb();
    iVar2 = FUN_0045e2eb();
    if (iVar2 != iVar1) {
      return local_c;
    }
    if (*(int *)(iVar4 + 0xc) != *(int *)(iVar3 + 0xc)) break;
    if (*(int *)(iVar4 + 0x2c) != *(int *)(iVar3 + 0x2c)) {
      return local_c;
    }
    local_c = local_c + 1;
    local_10 = local_10 + 0x40;
  }
  return local_c;
}


