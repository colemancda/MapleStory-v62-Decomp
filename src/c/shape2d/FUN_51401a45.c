/* FUN_51401a45 - 0x51401a45 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 * __fastcall FUN_51401a45(undefined4 *param_1)

{
  FUN_514021f8();
  *param_1 = &PTR_LAB_5140c3bc;
  param_1[1] = &PTR_LAB_5140c3a8;
  param_1[0xe] = &PTR_LAB_5140c3a4;
  param_1[0xf] = &PTR_FUN_5140c3a0;
  InterlockedIncrement(&DAT_51411574);
  return param_1;
}


