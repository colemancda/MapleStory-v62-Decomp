/* FUN_51005616 - 0x51005616 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void __fastcall FUN_51005616(undefined4 *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    FUN_510052d4((int *)*param_1);
    *param_1 = 0;
  }
  return;
}


