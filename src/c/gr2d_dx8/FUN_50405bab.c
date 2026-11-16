/* FUN_50405bab - 0x50405bab in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __fastcall FUN_50405bab(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5042d3a4;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_5042d3a0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = &PTR_FUN_5042d37c;
  param_1[0xc] = 0x80000001;
  param_1[4] = &PTR_FUN_5042d39c;
  *param_1 = &PTR_FUN_5042d398;
  param_1[3] = &PTR_LAB_5042d394;
  return param_1;
}


