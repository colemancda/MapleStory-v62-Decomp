/* FUN_518022c9 - 0x518022c9 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_518022c9(int *param_1)

{
  if (*param_1 != 0) {
    FUN_51801ac1(&DAT_5181fdb0,(undefined4 *)(*param_1 + -4));
    *param_1 = 0;
  }
  return;
}


