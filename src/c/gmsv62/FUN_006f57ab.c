/* FUN_006f57ab - 0x006f57ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_006f57ab(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_20 [16];
  uint local_10;
  undefined4 local_c;
  undefined1 *local_8;
  
  FUN_006f54f2();
  local_10 = 0;
  iVar5 = param_3 - param_1;
  local_8 = local_20 + -param_1;
  puVar4 = (uint *)(param_1 + 0xc);
  param_3 = 4;
  do {
    local_c = 0;
    uVar3 = *(uint *)(iVar5 + (int)puVar4);
    uVar1 = uVar3 + *puVar4;
    bVar6 = CARRY4(local_10,uVar1);
    local_10 = local_10 + uVar1;
    uVar3 = (uint)CARRY4(uVar3,*puVar4) + (uint)bVar6;
    uVar2 = __allrem(local_10,uVar3,0,1);
    *(undefined4 *)(local_8 + (int)puVar4) = uVar2;
    local_c = 0;
    puVar4 = puVar4 + -1;
    param_3 = param_3 + -1;
    local_10 = uVar3;
  } while (param_3 != 0);
  FUN_006f5512(local_20,0x80);
  return param_2;
}


