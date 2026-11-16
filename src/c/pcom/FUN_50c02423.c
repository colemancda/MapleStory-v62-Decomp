/* FUN_50c02423 - 0x50c02423 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 __cdecl FUN_50c02423(uint *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar1 = param_1[8];
  *param_3 = 0x10;
  puVar2 = (uint *)FUN_50c0156c((int)(param_1 + 9),param_1);
  if (uVar1 != 0) {
    puVar2 = param_1;
    uVar3 = uVar1;
    do {
      *(byte *)((param_2 - (int)param_1) + (int)puVar2) = (byte)puVar2[4] ^ (byte)*puVar2;
      puVar2 = (uint *)((int)puVar2 + 1);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  *param_3 = uVar1;
  return CONCAT31((int3)((uint)puVar2 >> 8),1);
}


