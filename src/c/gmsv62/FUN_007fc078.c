/* FUN_007fc078 - 0x007fc078 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_007fc078(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_007f115f(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  _memset((void *)(param_1 + 0x23c),0,8);
  *(undefined4 *)(param_1 + 0x244) = 0;
  return;
}


