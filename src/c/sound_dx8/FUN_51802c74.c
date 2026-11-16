/* FUN_51802c74 - 0x51802c74 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void __fastcall FUN_51802c74(int *param_1)

{
  if (*param_1 != 0) {
    (*DAT_5181fc88)(*param_1 + -4);
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    FUN_51801ac1(&DAT_5181fdb0,(undefined4 *)param_1[1]);
  }
  return;
}


