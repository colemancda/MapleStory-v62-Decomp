/* FUN_005eb39a - 0x005eb39a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


byte __thiscall FUN_005eb39a(int param_1,int param_2,undefined4 param_3,byte param_4)

{
  if (*(int *)(*(int *)(param_1 + 0x94) + 0xc) == 0) {
    if (param_2 != 0) {
      return param_2 < 0 | 4;
    }
  }
  else if (param_2 != 0) {
    return param_2 < 0 | 2;
  }
  return param_4 & 1 | 4;
}


