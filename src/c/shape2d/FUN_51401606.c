/* FUN_51401606 - 0x51401606 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * __fastcall FUN_51401606(undefined4 *param_1)

{
  FUN_5140163a();
  *param_1 = &PTR_LAB_5140c0fc;
  param_1[1] = &PTR_LAB_5140c0e8;
  param_1[2] = &PTR_FUN_5140c0e4;
  param_1[3] = &PTR_FUN_5140c0e0;
  InterlockedIncrement(&DAT_51411574);
  return param_1;
}


