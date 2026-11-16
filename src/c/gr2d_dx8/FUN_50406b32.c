/* FUN_50406b32 - 0x50406b32 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __fastcall FUN_50406b32(undefined4 *param_1)

{
  param_1[-1] = &PTR_LAB_5042d3e8;
  *param_1 = &PTR_FUN_5042d3e4;
  param_1[1] = &PTR_FUN_5042d3e0;
  param_1[2] = &PTR_ptr_504067ba_5042d3c8;
  param_1[3] = 1;
  InterlockedDecrement(&DAT_50438a3c);
  FUN_5040979a();
  return;
}


