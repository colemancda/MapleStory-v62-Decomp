/* FUN_00646c5b - 0x00646c5b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00646c5b(int param_1,int param_2,uint param_3)

{
  if (((*(int *)(param_1 + 0xb4) == 0) || ((param_3 & 0x80000000) != 0)) ||
     ((param_2 != 0x1b && (param_2 != 0xd)))) {
    FUN_004bc822(param_2,param_3);
  }
  return;
}


