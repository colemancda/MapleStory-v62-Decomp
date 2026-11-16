/* FUN_50406bcb - 0x50406bcb in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __fastcall FUN_50406bcb(undefined4 *param_1)

{
  FUN_50406c06();
  *param_1 = &PTR_LAB_5042d598;
  param_1[1] = &PTR_LAB_5042d56c;
  param_1[2] = &PTR_LAB_5042d560;
  param_1[3] = &PTR_FUN_5042d55c;
  param_1[4] = &PTR_FUN_5042d558;
  InterlockedIncrement(&DAT_50438a3c);
  return param_1;
}


