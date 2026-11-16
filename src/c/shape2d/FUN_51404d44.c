/* FUN_51404d44 - 0x51404d44 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void __fastcall FUN_51404d44(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5140c850;
  param_1[1] = 1;
  InterlockedDecrement(&DAT_51411574);
  FUN_51404bba();
  return;
}


