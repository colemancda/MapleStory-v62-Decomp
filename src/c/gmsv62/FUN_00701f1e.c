/* FUN_00701f1e - 0x00701f1e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_00701f1e(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  param_2 = param_2 + param_3 * 3;
  uVar1 = param_2 / 8 + 1;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x574) != 0) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x574) + -4);
  }
  if (uVar2 < uVar1) {
    bVar3 = false;
  }
  else {
    bVar3 = (*(byte *)(*(int *)(param_1 + 0x574) + -1 + uVar1) & '\x01' << ((byte)param_2 & 7)) != 0
    ;
  }
  return bVar3;
}


