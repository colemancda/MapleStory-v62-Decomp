/* FUN_500037bb - 0x500037bb in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_500037bb(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_50014338;
  param_1[1] = 1;
  InterlockedDecrement(&DAT_5001da54);
  FUN_500037e0();
  return;
}


