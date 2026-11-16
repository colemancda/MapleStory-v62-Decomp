/* FUN_51405e5c - 0x51405e5c in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * __fastcall FUN_51405e5c(undefined4 *param_1)

{
  FUN_5140600d(0xbaadf00d,(uint *)0xbaadf00d,param_1 + 9);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 1;
  param_1[0x30] = 1;
  FUN_51405ea4(param_1);
  FUN_51405ec8(param_1);
  return param_1;
}


