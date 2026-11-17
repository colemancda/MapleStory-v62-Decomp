/* FUN_006f586c - 0x006f586c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_006f586c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint local_14;
  
  iVar6 = 0;
  iVar2 = FUN_006f563a(0);
  if (iVar2 != 0) {
    iVar2 = param_2 - param_1;
    local_14 = 0;
    puVar5 = (uint *)(param_1 + 0xc);
    param_2 = 4;
    do {
      uVar3 = *(uint *)(iVar2 + (int)puVar5);
      uVar4 = *puVar5 - uVar3;
      iVar1 = local_14 + uVar4;
      local_14 = (iVar6 - (uint)(*puVar5 < uVar3)) + (uint)CARRY4(local_14,uVar4);
      uVar3 = __allrem(iVar1,local_14,0,1);
      *puVar5 = uVar3;
      iVar6 = (int)local_14 >> 0x1f;
      puVar5 = puVar5 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_1;
}


