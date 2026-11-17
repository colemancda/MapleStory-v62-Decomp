/* FUN_007fc043 - 0x007fc043 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_007fc043(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  FUN_007f113f(param_2);
  *(uint *)(param_1 + 0x238) = (uint)(param_3 == 1);
  *(undefined4 *)(param_1 + 0x130) = *param_4;
  *(undefined4 *)(param_1 + 0x138) = param_4[1];
  return;
}


