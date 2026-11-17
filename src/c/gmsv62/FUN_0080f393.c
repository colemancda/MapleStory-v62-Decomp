/* FUN_0080f393 - 0x0080f393 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_0080f393(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_8;
  int local_4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0xb0) == 0) {
    local_4 = 0;
  }
  else {
    local_4 = *(int *)(*(int *)(param_1 + 0xb0) + -4);
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0xac) + -4);
  }
  local_8 = 0;
  while( true ) {
    iVar2 = local_4;
    if (iVar1 <= local_4) {
      iVar2 = iVar1;
    }
    if (iVar2 <= local_8) {
      if (iVar1 == local_4) {
        local_8 = 0;
      }
      else if (iVar1 - local_4 < 0) {
        local_8 = local_8 + -1;
      }
      return local_8;
    }
    piVar5 = (int *)(iVar4 + *(int *)(param_1 + 0xb0));
    piVar3 = (int *)(*(int *)(param_1 + 0xac) + iVar4);
    if (*piVar5 != *piVar3) {
      return local_8;
    }
    if (piVar5[2] != piVar3[2]) break;
    if (piVar5[1] != piVar3[1]) {
      return local_8;
    }
    local_8 = local_8 + 1;
    iVar4 = iVar4 + 0x1c;
  }
  return local_8;
}


