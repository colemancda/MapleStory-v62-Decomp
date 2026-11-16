/* FUN_504075d0 - 0x504075d0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __fastcall FUN_504075d0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5042d3a4;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_5042d628;
  *param_1 = &PTR_FUN_5042d624;
  param_1[3] = &PTR_LAB_5042d620;
  return param_1;
}


