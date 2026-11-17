/* FUN_00866da3 - 0x00866da3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00866da3(int param_1,ushort param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 local_c;
  int local_8;
  
  if ((uint)param_2 % 0x1f == 0) {
    local_c = 0;
    local_8 = param_1;
    local_8 = FUN_0047f584(&param_2,2,0,0,0);
    for (uVar4 = 0;
        (iVar2 = *(int *)(param_1 + 0x1c), iVar2 != 0 && (uVar4 < *(uint *)(iVar2 + -4)));
        uVar4 = uVar4 + 1) {
      puVar1 = (undefined4 *)(iVar2 + uVar4 * 8);
      local_8 = FUN_0047f584(*puVar1,puVar1[1],local_8,1,&local_c);
    }
    FUN_00601477(0x1a,0,0);
    FUN_00457cda(1);
    FUN_00457d37(local_8);
    FUN_00457d37(local_c);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


