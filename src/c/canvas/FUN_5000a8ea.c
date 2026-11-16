/* FUN_5000a8ea - 0x5000a8ea in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * __fastcall FUN_5000a8ea(undefined4 *param_1)

{
  FUN_5000aa9b(0xbaadf00d,(uint *)0xbaadf00d,param_1 + 9);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 1;
  param_1[0x30] = 1;
  FUN_5000a932(param_1);
  FUN_5000a956(param_1);
  return param_1;
}


