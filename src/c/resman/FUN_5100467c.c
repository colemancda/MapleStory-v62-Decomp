/* FUN_5100467c - 0x5100467c in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __fastcall FUN_5100467c(undefined4 *param_1)

{
  if ((int *)param_1[2] != (int *)0x0) {
    FUN_510052d4((int *)param_1[2]);
    param_1[2] = 0;
  }
  *param_1 = &PTR_LAB_510071f8;
  return;
}


