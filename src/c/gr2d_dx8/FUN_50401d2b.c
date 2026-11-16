/* FUN_50401d2b - 0x50401d2b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __fastcall FUN_50401d2b(undefined4 *param_1)

{
  FUN_50401edc(0xbaadf00d,(uint *)0xbaadf00d,param_1 + 9);
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 1;
  param_1[0x30] = 1;
  FUN_50401d73(param_1);
  FUN_50401d97(param_1);
  return param_1;
}


