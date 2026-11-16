/* FUN_50c03e18 - 0x50c03e18 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __fastcall FUN_50c03e18(undefined4 *param_1)

{
  param_1[-1] = &PTR_FUN_50c13118;
  *param_1 = &PTR_FUN_50c13114;
  param_1[1] = &PTR_LAB_50c13110;
  param_1[2] = 1;
  InterlockedDecrement(&DAT_50c1ca34);
  FUN_50c03ba0();
  return;
}


