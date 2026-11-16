/* FUN_50407256 - 0x50407256 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_50407256(undefined4 *param_1)

{
  param_1[-3] = &PTR_LAB_5042d598;
  param_1[-2] = &PTR_LAB_5042d56c;
  param_1[-1] = &PTR_LAB_5042d560;
  *param_1 = &PTR_FUN_5042d55c;
  param_1[1] = &PTR_FUN_5042d558;
  param_1[2] = 1;
  InterlockedDecrement(&DAT_50438a3c);
  FUN_50407296();
  return;
}


