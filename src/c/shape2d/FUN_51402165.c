/* FUN_51402165 - 0x51402165 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __fastcall FUN_51402165(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5140c3bc;
  param_1[1] = &PTR_LAB_5140c3a8;
  param_1[0xe] = &PTR_LAB_5140c3a4;
  param_1[0xf] = &PTR_FUN_5140c3a0;
  param_1[0x10] = 1;
  InterlockedDecrement(&DAT_51411574);
  FUN_51401bea();
  return;
}


