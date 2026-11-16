/* FUN_5100538d - 0x5100538d in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __fastcall FUN_5100538d(int *param_1)

{
  if (*param_1 != 0) {
    (*DAT_510096c8)(*param_1 + -4);
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    FUN_51001bce(&DAT_510097f0,(undefined4 *)param_1[1]);
  }
  return;
}


