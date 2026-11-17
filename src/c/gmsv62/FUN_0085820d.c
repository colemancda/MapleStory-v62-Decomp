/* FUN_0085820d - 0x0085820d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0085820d(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((*param_2 != 0) && (*(int *)(*param_2 + -4) != 0)) {
    FUN_0047cf76();
  }
  if (*(int *)(param_1 + 0x2cd2) != 0) {
    local_10 = 0;
    for (local_c = 0;
        (*(int *)(param_1 + 0x2cf8) != 0 && (local_c < *(uint *)(*(int *)(param_1 + 0x2cf8) + -4)));
        local_c = local_c + 1) {
      uVar5 = 0;
      local_8 = 0;
      while( true ) {
        iVar2 = *(int *)(param_1 + 0x2cf8) + local_10;
        iVar6 = *(int *)(iVar2 + 0xc);
        if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar5)) break;
        uVar1 = *(undefined4 *)(iVar6 + uVar5 * 4);
        if (*(int *)(*(int *)(iVar2 + 0x10) + 0x19 + local_8) != 0) {
          puVar3 = (undefined4 *)FUN_0047cf98(0xffffffff);
          *puVar3 = uVar1;
        }
        local_8 = local_8 + 0x25;
        uVar5 = uVar5 + 1;
      }
      local_10 = local_10 + 0x2a;
    }
    if (*(int *)(param_1 + 0x2cac) != 0) {
      iVar6 = 0;
      local_10 = 0;
      while( true ) {
        if (*(int *)(param_1 + 0x2cb8) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_1 + 0x2cb8) + -4);
        }
        if (iVar2 <= iVar6) break;
        iVar2 = *(int *)(*(int *)(param_1 + 0x2cb8) + iVar6 * 4);
        if (((iVar2 != 0) && (*(int *)(*(int *)(param_1 + 0x2cbc) + 0x19 + local_10) != 0)) &&
           (*(int *)(param_1 + 0x2088) != iVar2)) {
          piVar4 = (int *)FUN_0047cf98(0xffffffff);
          *piVar4 = iVar2;
        }
        local_10 = local_10 + 0x25;
        iVar6 = iVar6 + 1;
      }
    }
  }
  return;
}


