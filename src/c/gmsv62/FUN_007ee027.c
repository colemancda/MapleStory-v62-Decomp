/* FUN_007ee027 - 0x007ee027 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007ee027(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00414edd(param_2,0xffffffff);
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  *(undefined4 *)(param_1 + 200) = param_4;
  FUN_007ee606();
  return;
}


