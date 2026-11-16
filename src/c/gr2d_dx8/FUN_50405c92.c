/* FUN_50405c92 - 0x50405c92 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __fastcall FUN_50405c92(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5042d3a4;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_5042d3b4;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = &PTR_FUN_5042d3b0;
  *param_1 = &PTR_FUN_5042d3ac;
  param_1[3] = &PTR_LAB_5042d3a8;
  return param_1;
}


