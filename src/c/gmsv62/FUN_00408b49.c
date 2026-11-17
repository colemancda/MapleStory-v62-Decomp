/* FUN_00408b49 - 0x00408b49 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00408b49(int *param_1)

{
  if (*param_1 != 0) {
    InterlockedIncrement((LONG *)(*param_1 + 8));
  }
  return;
}


