/* FUN_006f55a6 - 0x006f55a6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006f55a6(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 1 << (0x1f - ((byte)param_2 & 0x1f) & 0x1f);
  puVar1 = (uint *)(param_1 + (param_2 >> 5) * 4);
  *puVar1 = *puVar1 | uVar2;
  if (param_3 == 0) {
    *puVar1 = *puVar1 ^ uVar2;
  }
  return;
}


