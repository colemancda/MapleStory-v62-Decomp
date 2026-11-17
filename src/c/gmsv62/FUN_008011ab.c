/* FUN_008011ab - 0x008011ab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_008011ab(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_007f115f(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)(param_1 + 0x268) = param_3;
  *(undefined4 *)(param_1 + 0x26c) = param_4;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  _memset((void *)(param_1 + 0x254),0,0x14);
  return;
}


