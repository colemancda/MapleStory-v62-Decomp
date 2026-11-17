/* FUN_004342bb - 0x004342bb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004342bb(int *param_1,int param_2)

{
  return CONCAT31((int3)((uint)*param_1 >> 8),*(undefined1 *)(*param_1 + param_2));
}


