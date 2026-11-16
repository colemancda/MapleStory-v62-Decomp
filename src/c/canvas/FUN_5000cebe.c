/* FUN_5000cebe - 0x5000cebe in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_5000cebe(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_50015580;
  param_1[1] = 1;
  InterlockedDecrement(&DAT_5001da54);
  FUN_50006b6d();
  return;
}


