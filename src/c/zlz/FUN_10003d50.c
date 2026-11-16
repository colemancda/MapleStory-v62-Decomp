/* FUN_10003d50 - 0x10003d50 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


undefined4 __cdecl FUN_10003d50(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = param_1[8];
  *param_3 = uVar1;
  uVar2 = FUN_100019d0((int)(param_1 + 9),param_1);
  if (uVar1 != 0) {
    iVar3 = param_2 - (int)param_1;
    uVar4 = uVar1;
    do {
      *(byte *)(iVar3 + (int)param_1) = (byte)param_1[4] ^ (byte)*param_1;
      param_1 = (uint *)((int)param_1 + 1);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *param_3 = uVar1;
    return CONCAT31((int3)((uint)param_1 >> 8),1);
  }
  *param_3 = 0;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}


