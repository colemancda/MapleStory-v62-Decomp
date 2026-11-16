/* FUN_5040664b - 0x5040664b in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __fastcall FUN_5040664b(undefined4 *param_1)

{
  FUN_5040967c();
  *param_1 = &PTR_LAB_5042d3e8;
  param_1[1] = &PTR_FUN_5042d3e4;
  param_1[2] = &PTR_FUN_5042d3e0;
  param_1[3] = &PTR_LAB_5042d3c8;
  InterlockedIncrement(&DAT_50438a3c);
  return param_1;
}


