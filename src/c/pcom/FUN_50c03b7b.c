/* FUN_50c03b7b - 0x50c03b7b in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c03b7b(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_50c13440;
  param_1[1] = 1;
  InterlockedDecrement(&DAT_50c1ca34);
  FUN_50c03ba0();
  return;
}


