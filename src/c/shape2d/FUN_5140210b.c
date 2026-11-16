/* FUN_5140210b - 0x5140210b in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __fastcall FUN_5140210b(undefined4 *param_1)

{
  param_1[-2] = &PTR_LAB_5140c0fc;
  param_1[-1] = &PTR_LAB_5140c0e8;
  *param_1 = &PTR_FUN_5140c0e4;
  param_1[1] = &PTR_FUN_5140c0e0;
  param_1[2] = 1;
  InterlockedDecrement(&DAT_51411574);
  FUN_5140692e();
  return;
}


