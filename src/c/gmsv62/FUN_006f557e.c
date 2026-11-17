/* FUN_006f557e - 0x006f557e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint __thiscall FUN_006f557e(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < 0x80) {
    uVar1 = *(uint *)(param_1 + (param_2 >> 5) * 4) >> (0x1f - ((byte)param_2 & 0x1f) & 0x1f) & 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


