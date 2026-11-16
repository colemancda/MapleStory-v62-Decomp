/* FUN_50c03282 - 0x50c03282 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


undefined4 * __fastcall FUN_50c03282(undefined4 *param_1)

{
  FUN_50c032b6();
  *param_1 = &PTR_FUN_50c131c4;
  param_1[1] = &PTR_LAB_50c131b0;
  param_1[2] = &PTR_FUN_50c131ac;
  param_1[3] = &PTR_FUN_50c131a8;
  InterlockedIncrement(&DAT_50c1ca34);
  return param_1;
}


