/* FUN_50006f14 - 0x50006f14 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * __fastcall FUN_50006f14(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_50014490;
  memset(param_1,0,0xc);
  param_1[3] = &PTR_LAB_50014540;
  *param_1 = &PTR_FUN_5001453c;
  param_1[3] = &PTR_LAB_50014538;
  return param_1;
}


