/* FUN_007edfe1 - 0x007edfe1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_007edfe1(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  FUN_00414edd(param_2,0xffffffff);
  *(undefined4 *)(param_1 + 0xb0) = param_4;
  *(undefined4 *)(param_1 + 0xc0) = param_3;
  *(undefined4 *)(param_1 + 0xd0) = param_5;
  *(undefined4 *)(param_1 + 0xd4) = param_6;
  FUN_007ee56d();
  return;
}


