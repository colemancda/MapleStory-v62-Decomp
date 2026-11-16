/* FUN_50003b02 - 0x50003b02 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __fastcall FUN_50003b02(undefined4 *param_1)

{
  param_1[-1] = &PTR_FUN_50014140;
  *param_1 = &PTR_FUN_5001413c;
  param_1[1] = &PTR_FUN_50014138;
  param_1[2] = 1;
  InterlockedDecrement(&DAT_5001da54);
  FUN_500037e0();
  return;
}


