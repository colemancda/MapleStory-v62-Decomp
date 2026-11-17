/* FUN_005c12fa - 0x005c12fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_005c12fa(int param_1,int param_2,int param_3)

{
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0xd8 + param_3 * 8);
  FUN_005c1dc5();
  return param_2;
}


