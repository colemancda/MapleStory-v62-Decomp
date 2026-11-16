/* FUN_51001c50 - 0x51001c50 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __fastcall FUN_51001c50(int *param_1)

{
  if (*param_1 != 0) {
    FUN_51001bce(&DAT_510097f0,(undefined4 *)(*param_1 + -4));
    *param_1 = 0;
  }
  return;
}


