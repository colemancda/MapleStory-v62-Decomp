/* FUN_00638dca - 0x00638dca in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00638dca(int param_1,int param_2,int param_3)

{
  if ((param_3 < 0) || (*(int *)(param_1 + 0x10) <= param_3)) {
    *(undefined4 *)(param_2 + 4) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 4 + param_3 * 8);
    FUN_00639939();
  }
  return param_2;
}


