/* FUN_50006d9a - 0x50006d9a in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_50006d9a(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_500144b4;
  param_1[0xb] = &PTR_LAB_500144b0;
  param_1[0xc] = &PTR_LAB_500144ac;
  param_1[1] = 1;
  InterlockedDecrement(&DAT_5001da54);
  FUN_50006dcc();
  return;
}


