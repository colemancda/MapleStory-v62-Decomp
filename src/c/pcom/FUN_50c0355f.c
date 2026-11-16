/* FUN_50c0355f - 0x50c0355f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c0355f(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_50c1328c;
  param_1[1] = 1;
  InterlockedDecrement(&DAT_50c1ca34);
  FUN_50c03584();
  return;
}


