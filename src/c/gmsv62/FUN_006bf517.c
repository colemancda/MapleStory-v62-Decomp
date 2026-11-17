/* FUN_006bf517 - 0x006bf517 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_006bf517(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 != 0) {
    FUN_00609b69(param_2);
    *(undefined4 *)(param_1 + 0x578) = param_3;
    *(undefined4 *)(param_1 + 0x57c) = param_4;
    FUN_008161f1(0);
  }
  return param_2 != 0;
}


