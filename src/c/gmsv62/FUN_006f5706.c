/* FUN_006f5706 - 0x006f5706 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_006f5706(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint local_14;
  
  iVar2 = FUN_006f563a(0);
  if (iVar2 != 0) {
    iVar2 = param_2 - param_1;
    local_14 = 0;
    puVar5 = (uint *)(param_1 + 0xc);
    param_2 = 4;
    do {
      uVar4 = *(uint *)(iVar2 + (int)puVar5);
      uVar3 = uVar4 + *puVar5;
      iVar1 = local_14 + uVar3;
      local_14 = (uint)CARRY4(uVar4,*puVar5) + (uint)CARRY4(local_14,uVar3);
      uVar4 = __allrem(iVar1,local_14,0,1);
      *puVar5 = uVar4;
      puVar5 = puVar5 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_1;
}


