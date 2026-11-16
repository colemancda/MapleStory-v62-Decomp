/* FUN_50c03d5c - 0x50c03d5c in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c03d5c(undefined4 *param_1)

{
  param_1[-2] = &PTR_FUN_50c131c4;
  param_1[-1] = &PTR_LAB_50c131b0;
  *param_1 = &PTR_FUN_50c131ac;
  param_1[1] = &PTR_FUN_50c131a8;
  param_1[2] = 1;
  InterlockedDecrement(&DAT_50c1ca34);
  FUN_50c03584();
  return;
}


