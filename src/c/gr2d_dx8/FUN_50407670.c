/* FUN_50407670 - 0x50407670 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __fastcall FUN_50407670(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5042d3a4;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_5042d640;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_5042d63c;
  param_1[3] = &PTR_LAB_5042d638;
  return param_1;
}


