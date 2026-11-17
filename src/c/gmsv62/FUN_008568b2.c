/* FUN_008568b2 - 0x008568b2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_008568b2(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_8;
  
  iVar3 = 0;
  if ((*param_2 != 0) && (*(int *)(*param_2 + -4) != 0)) {
    FUN_0047cf76();
  }
  if (*(int *)(param_1 + 0x2cac) != 0) {
    local_8 = 0;
    while( true ) {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x2cb8) != 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x2cb8) + -4);
      }
      if (iVar1 <= iVar3) break;
      iVar1 = *(int *)(*(int *)(param_1 + 0x2cb8) + iVar3 * 4);
      if (((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x2cbc) + 0x19 + local_8) != 0)) &&
         (*(int *)(param_1 + 0x2088) != iVar1)) {
        piVar2 = (int *)FUN_0047cf98(0xffffffff);
        *piVar2 = iVar1;
      }
      iVar3 = iVar3 + 1;
      local_8 = local_8 + 0x25;
    }
  }
  return;
}


